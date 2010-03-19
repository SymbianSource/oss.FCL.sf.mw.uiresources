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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00016811 };

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
0x83b5,	// (0x0001ebc6) Screen

0x83c1,	// (0x0001ebd2) application_window

0x8401,	// (0x0001ec12) area_bottom_pane_ParamLimits

0x8401,	// (0x0001ec12) area_bottom_pane

0x8436,	// (0x0001ec47) area_top_pane_ParamLimits

0x8436,	// (0x0001ec47) area_top_pane

0x0411,	// (0x00016c22) call_video_uplink_pane_ParamLimits

0x0411,	// (0x00016c22) call_video_uplink_pane

0x84c3,	// (0x0001ecd4) main_pane_ParamLimits

0x84c3,	// (0x0001ecd4) main_pane

0x2e41,	// (0x00019652) context_pane

0xb0ec,	// (0x000218fd) navi_pane

0xb10c,	// (0x0002191d) popup_cale_events_window_ParamLimits

0xb10c,	// (0x0002191d) popup_cale_events_window

0x2e54,	// (0x00019665) popup_mup_playback_window

0xb124,	// (0x00021935) signal_pane

0x0ba4,	// (0x000173b5) main_browser_pane

0x1937,	// (0x00018148) main_burst_pane

0xafb6,	// (0x000217c7) main_calc_pane

0x1937,	// (0x00018148) main_cale_day_pane

0x0ba4,	// (0x000173b5) main_cale_month_pane

0x1937,	// (0x00018148) main_cale_week_pane

0x1937,	// (0x00018148) main_call_pane

0x0850,	// (0x00017061) main_call_poc_pane

0x1937,	// (0x00018148) main_camera_pane

0x1937,	// (0x00018148) main_chi_dic_pane

0x17bc,	// (0x00017fcd) main_clock_pane

0x0850,	// (0x00017061) main_fmradio_pane

0x1937,	// (0x00018148) main_graph_messa_pane

0x0850,	// (0x00017061) main_help_pane

0x0ba4,	// (0x000173b5) main_im_pane

0x0aab,	// (0x000172bc) main_image_pane_ParamLimits

0x0aab,	// (0x000172bc) main_image_pane

0x0850,	// (0x00017061) main_location2_pane

0x1937,	// (0x00018148) main_location_pane

0x0850,	// (0x00017061) main_messa_pane

0x0850,	// (0x00017061) main_mp2_pane

0x1937,	// (0x00018148) main_mp_pane

0x0850,	// (0x00017061) main_msg_pane

0x0850,	// (0x00017061) main_mup_eq_pane

0x0850,	// (0x00017061) main_mup_pane

0x1937,	// (0x00018148) main_notes_pane

0x0850,	// (0x00017061) main_pec_pane

0x0850,	// (0x00017061) main_phob_pane

0x0850,	// (0x00017061) main_pinb_pane

0x0850,	// (0x00017061) main_postcard_pane

0x0850,	// (0x00017061) main_qdial_pane

0x1937,	// (0x00018148) main_skin_pane

0x0850,	// (0x00017061) main_smil2_pane

0x1937,	// (0x00018148) main_smil_pane

0x1937,	// (0x00018148) main_video_pane

0x1937,	// (0x00018148) main_video_tele_pane

0x0aab,	// (0x000172bc) main_viewer_pane_ParamLimits

0x0aab,	// (0x000172bc) main_viewer_pane

0x1937,	// (0x00018148) main_vorec_pane

0xafec,	// (0x000217fd) popup_blid_sat_info_window_ParamLimits

0xafec,	// (0x000217fd) popup_blid_sat_info_window

0xb002,	// (0x00021813) popup_dyc_status_message_window_ParamLimits

0xb002,	// (0x00021813) popup_dyc_status_message_window

0xb012,	// (0x00021823) popup_grid_large_graphic_window_ParamLimits

0xb012,	// (0x00021823) popup_grid_large_graphic_window

0xb088,	// (0x00021899) popup_loc_request_window_ParamLimits

0xb088,	// (0x00021899) popup_loc_request_window

0xb0c4,	// (0x000218d5) popup_wml_address_window_ParamLimits

0xb0c4,	// (0x000218d5) popup_wml_address_window

0xae8e,	// (0x0002169f) call_muted_g1

0xab50,	// (0x00021361) popup_call_audio_conf_window_ParamLimits

0xab50,	// (0x00021361) popup_call_audio_conf_window

0xae9e,	// (0x000216af) popup_call_audio_first_window_ParamLimits

0xae9e,	// (0x000216af) popup_call_audio_first_window

0xaede,	// (0x000216ef) popup_call_audio_in_window_ParamLimits

0xaede,	// (0x000216ef) popup_call_audio_in_window

0xaf02,	// (0x00021713) popup_call_audio_out_window_ParamLimits

0xaf02,	// (0x00021713) popup_call_audio_out_window

0xaf24,	// (0x00021735) popup_call_audio_second_window_ParamLimits

0xaf24,	// (0x00021735) popup_call_audio_second_window

0xaf54,	// (0x00021765) popup_call_audio_wait_window_ParamLimits

0xaf54,	// (0x00021765) popup_call_audio_wait_window

0xaf75,	// (0x00021786) popup_number_entry_window_ParamLimits

0xaf75,	// (0x00021786) popup_number_entry_window

0x043d,	// (0x00016c4e) bg_popup_call_pane_cp05_ParamLimits

0x043d,	// (0x00016c4e) bg_popup_call_pane_cp05

0x045d,	// (0x00016c6e) popup_number_entry_window_t1

0x0470,	// (0x00016c81) popup_number_entry_window_t2

0x0482,	// (0x00016c93) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000258fd) popup_number_entry_window_t

0x0494,	// (0x00016ca5) text_title_cp2

0x04a7,	// (0x00016cb8) bg_popup_call_pane_cp_ParamLimits

0x04a7,	// (0x00016cb8) bg_popup_call_pane_cp

0x04b5,	// (0x00016cc6) call_thumbnail_pane

0x04bd,	// (0x00016cce) popup_call_audio_in_window_g1_ParamLimits

0x04bd,	// (0x00016cce) popup_call_audio_in_window_g1

0x04c9,	// (0x00016cda) popup_call_audio_in_window_g2_ParamLimits

0x04c9,	// (0x00016cda) popup_call_audio_in_window_g2

0x04d5,	// (0x00016ce6) popup_call_audio_in_window_g3_ParamLimits

0x04d5,	// (0x00016ce6) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00025906) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00025906) popup_call_audio_in_window_g

0x04e1,	// (0x00016cf2) popup_call_audio_in_window_t1_ParamLimits

0x04e1,	// (0x00016cf2) popup_call_audio_in_window_t1

0x04fd,	// (0x00016d0e) popup_call_audio_in_window_t2_ParamLimits

0x04fd,	// (0x00016d0e) popup_call_audio_in_window_t2

0x0519,	// (0x00016d2a) popup_call_audio_in_window_t3_ParamLimits

0x0519,	// (0x00016d2a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0002590d) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0002590d) popup_call_audio_in_window_t

0x04a7,	// (0x00016cb8) bg_popup_call_pane_cp01_ParamLimits

0x04a7,	// (0x00016cb8) bg_popup_call_pane_cp01

0x04b5,	// (0x00016cc6) call_thumbnail_pane_cp02

0x052c,	// (0x00016d3d) call_type_pane_cp022

0x0534,	// (0x00016d45) popup_call_audio_out_window_g1_ParamLimits

0x0534,	// (0x00016d45) popup_call_audio_out_window_g1

0x0546,	// (0x00016d57) popup_call_audio_out_window_g2_ParamLimits

0x0546,	// (0x00016d57) popup_call_audio_out_window_g2

0x0552,	// (0x00016d63) popup_call_audio_out_window_g3_ParamLimits

0x0552,	// (0x00016d63) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00025914) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00025914) popup_call_audio_out_window_g

0x0564,	// (0x00016d75) popup_call_audio_out_window_t1_ParamLimits

0x0564,	// (0x00016d75) popup_call_audio_out_window_t1

0x057c,	// (0x00016d8d) popup_call_audio_out_window_t2_ParamLimits

0x057c,	// (0x00016d8d) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0002591b) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0002591b) popup_call_audio_out_window_t

0x0591,	// (0x00016da2) bg_popup_call_pane_ParamLimits

0x0591,	// (0x00016da2) bg_popup_call_pane

0x86b0,	// (0x0001eec1) call_thumbnail_pane_cp_ParamLimits

0x86b0,	// (0x0001eec1) call_thumbnail_pane_cp

0x0615,	// (0x00016e26) call_type_pane_cp01_ParamLimits

0x0615,	// (0x00016e26) call_type_pane_cp01

0x0659,	// (0x00016e6a) popup_call_audio_first_window_g1_ParamLimits

0x0659,	// (0x00016e6a) popup_call_audio_first_window_g1

0x06a5,	// (0x00016eb6) popup_call_audio_first_window_g2_ParamLimits

0x06a5,	// (0x00016eb6) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00025920) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00025920) popup_call_audio_first_window_g

0x06e9,	// (0x00016efa) popup_call_audio_first_window_t1_ParamLimits

0x06e9,	// (0x00016efa) popup_call_audio_first_window_t1

0x0795,	// (0x00016fa6) popup_call_audio_first_window_t4_ParamLimits

0x0795,	// (0x00016fa6) popup_call_audio_first_window_t4

0x0821,	// (0x00017032) popup_call_audio_first_window_t5_ParamLimits

0x0821,	// (0x00017032) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00025925) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00025925) popup_call_audio_first_window_t

0x0850,	// (0x00017061) bg_popup_call_pane_cp02

0x085a,	// (0x0001706b) call_type_pane_cp023

0x0862,	// (0x00017073) popup_call_audio_wait_window_g1

0x086a,	// (0x0001707b) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0002592c) popup_call_audio_wait_window_g

0x0872,	// (0x00017083) popup_call_audio_wait_window_t3

0x0880,	// (0x00017091) bg_popup_call_pane_cp03_ParamLimits

0x0880,	// (0x00017091) bg_popup_call_pane_cp03

0x08e0,	// (0x000170f1) call_thumbnail_pane_cp011_ParamLimits

0x08e0,	// (0x000170f1) call_thumbnail_pane_cp011

0x08ec,	// (0x000170fd) call_type_pane_cp034_ParamLimits

0x08ec,	// (0x000170fd) call_type_pane_cp034

0x0928,	// (0x00017139) popup_call_audio_second_window_g1_ParamLimits

0x0928,	// (0x00017139) popup_call_audio_second_window_g1

0x0964,	// (0x00017175) popup_call_audio_second_window_g2_ParamLimits

0x0964,	// (0x00017175) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00025931) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00025931) popup_call_audio_second_window_g

0x09a0,	// (0x000171b1) popup_call_audio_second_window_t1_ParamLimits

0x09a0,	// (0x000171b1) popup_call_audio_second_window_t1

0x0a21,	// (0x00017232) popup_call_audio_second_window_t2_ParamLimits

0x0a21,	// (0x00017232) popup_call_audio_second_window_t2

0x0a57,	// (0x00017268) popup_call_audio_second_window_t3_ParamLimits

0x0a57,	// (0x00017268) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00025936) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00025936) popup_call_audio_second_window_t

0x0850,	// (0x00017061) bg_popup_call_pane_cp04

0x0a8d,	// (0x0001729e) list_conf_pane

0x0a95,	// (0x000172a6) popup_call_audio_conf_window_t1

0x0aa3,	// (0x000172b4) call_thumbnail_pane_g1

0x0aab,	// (0x000172bc) bg_pinb_pane_ParamLimits

0x0aab,	// (0x000172bc) bg_pinb_pane

0x0ab9,	// (0x000172ca) find_pinb_pane

0x0ac2,	// (0x000172d3) listscroll_pinb_pane_ParamLimits

0x0ac2,	// (0x000172d3) listscroll_pinb_pane

0x0ad1,	// (0x000172e2) pinb_bg_pane_g1

0x86d4,	// (0x0001eee5) pinb_bg_pane_g2

0x86e0,	// (0x0001eef1) pinb_bg_pane_g3

0x86ec,	// (0x0001eefd) pinb_bg_pane_g4

0x86f8,	// (0x0001ef09) pinb_bg_pane_g5

0x8704,	// (0x0001ef15) pinb_bg_pane_g6

0x870f,	// (0x0001ef20) pinb_bg_pane_g7

0x871a,	// (0x0001ef2b) pinb_bg_pane_g8

0x8725,	// (0x0001ef36) pinb_bg_pane_g9

0x872f,	// (0x0001ef40) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0002593d) pinb_bg_pane_g

0x874c,	// (0x0001ef5d) grid_pinb_pane

0x8757,	// (0x0001ef68) list_pinb_pane

0x8762,	// (0x0001ef73) scroll_pane_cp01_ParamLimits

0x8762,	// (0x0001ef73) scroll_pane_cp01

0x0adb,	// (0x000172ec) find_pinb_pane_g1_ParamLimits

0x0adb,	// (0x000172ec) find_pinb_pane_g1

0x0af3,	// (0x00017304) find_pinb_pane_t1

0x0b05,	// (0x00017316) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00025957) find_pinb_pane_t

0x0b1a,	// (0x0001732b) input_focus_pane_cp01_ParamLimits

0x0b1a,	// (0x0001732b) input_focus_pane_cp01

0x8774,	// (0x0001ef85) cell_pinb_pane_ParamLimits

0x8774,	// (0x0001ef85) cell_pinb_pane

0x8799,	// (0x0001efaa) cell_pinb_pane_g1_ParamLimits

0x8799,	// (0x0001efaa) cell_pinb_pane_g1

0x87ae,	// (0x0001efbf) cell_pinb_pane_g2_ParamLimits

0x87ae,	// (0x0001efbf) cell_pinb_pane_g2

0x0b26,	// (0x00017337) cell_pinb_pane_g3_ParamLimits

0x0b26,	// (0x00017337) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0002595c) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0002595c) cell_pinb_pane_g

0x0850,	// (0x00017061) grid_highlight_pane_cp01

0x87ba,	// (0x0001efcb) list_pinb_item_pane_ParamLimits

0x87ba,	// (0x0001efcb) list_pinb_item_pane

0x0850,	// (0x00017061) list_highlight_pane_cp02

0x87da,	// (0x0001efeb) list_pinb_item_pane_g1_ParamLimits

0x87da,	// (0x0001efeb) list_pinb_item_pane_g1

0x0b32,	// (0x00017343) list_pinb_item_pane_g2_ParamLimits

0x0b32,	// (0x00017343) list_pinb_item_pane_g2

0x87e7,	// (0x0001eff8) list_pinb_item_pane_g3_ParamLimits

0x87e7,	// (0x0001eff8) list_pinb_item_pane_g3

0x87f8,	// (0x0001f009) list_pinb_item_pane_g4_ParamLimits

0x87f8,	// (0x0001f009) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00025963) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00025963) list_pinb_item_pane_g

0x8804,	// (0x0001f015) list_pinb_item_pane_t1_ParamLimits

0x8804,	// (0x0001f015) list_pinb_item_pane_t1

0x6fb9,	// (0x0001d7ca) calc_display_pane

0x6fd7,	// (0x0001d7e8) calc_paper_pane

0x6ff3,	// (0x0001d804) grid_calc_pane

0x0850,	// (0x00017061) bg_list_pane_cp01

0x881b,	// (0x0001f02c) clock_g1

0x8823,	// (0x0001f034) clock_g2

0x0001,

0xf15b,	// (0x0002596c) clock_g

0x882d,	// (0x0001f03e) clock_t1_ParamLimits

0x882d,	// (0x0001f03e) clock_t1

0x8842,	// (0x0001f053) clock_t2_ParamLimits

0x8842,	// (0x0001f053) clock_t2

0x8854,	// (0x0001f065) clock_t3_ParamLimits

0x8854,	// (0x0001f065) clock_t3

0x8866,	// (0x0001f077) clock_t4_ParamLimits

0x8866,	// (0x0001f077) clock_t4

0x8878,	// (0x0001f089) clock_t5_ParamLimits

0x8878,	// (0x0001f089) clock_t5

0x888d,	// (0x0001f09e) clock_t6_ParamLimits

0x888d,	// (0x0001f09e) clock_t6

0x889f,	// (0x0001f0b0) clock_t7_ParamLimits

0x889f,	// (0x0001f0b0) clock_t7

0x88b1,	// (0x0001f0c2) clock_t8_ParamLimits

0x88b1,	// (0x0001f0c2) clock_t8

0x88c7,	// (0x0001f0d8) clock_t9_ParamLimits

0x88c7,	// (0x0001f0d8) clock_t9

0x0008,

0xf160,	// (0x00025971) clock_t_ParamLimits

0xf160,	// (0x00025971) clock_t

0x0b46,	// (0x00017357) popup_clock_analogue_window_cp02

0x0b46,	// (0x00017357) popup_clock_digital_window_cp01

0x0b4e,	// (0x0001735f) listscroll_help_pane

0x0850,	// (0x00017061) phob_pre_status_pane

0x0b58,	// (0x00017369) grid_qdial_pane

0x0850,	// (0x00017061) listscroll_mce_pane

0x0b62,	// (0x00017373) bg_notes_pane

0x0b6c,	// (0x0001737d) list_notes_pane

0x88dd,	// (0x0001f0ee) scroll_pane_cp06

0x0b76,	// (0x00017387) bg_calc_paper_pane

0x7027,	// (0x0001d838) list_calc_pane

0x0ba4,	// (0x000173b5) bg_calc_display_pane

0x7041,	// (0x0001d852) calc_display_pane_t1

0x7056,	// (0x0001d867) calc_display_pane_t2

0x706b,	// (0x0001d87c) calc_display_pane_t3

0x0002,

0xf173,	// (0x00025984) calc_display_pane_t

0x707d,	// (0x0001d88e) cell_calc_pane_ParamLimits

0x707d,	// (0x0001d88e) cell_calc_pane

0x0bc2,	// (0x000173d3) bg_calc_paper_pane_g1

0x0bda,	// (0x000173eb) bg_calc_paper_pane_g2

0x0bce,	// (0x000173df) bg_calc_paper_pane_g3

0x0bf2,	// (0x00017403) bg_calc_paper_pane_g4

0x0be6,	// (0x000173f7) bg_calc_paper_pane_g5

0x88e8,	// (0x0001f0f9) bg_calc_paper_pane_g6

0x88f9,	// (0x0001f10a) bg_calc_paper_pane_g7

0x890a,	// (0x0001f11b) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0002598b) bg_calc_paper_pane_g

0x891b,	// (0x0001f12c) calc_bg_paper_pane_g9

0x892c,	// (0x0001f13d) list_calc_item_pane_ParamLimits

0x892c,	// (0x0001f13d) list_calc_item_pane

0x0bfe,	// (0x0001740f) list_calc_item_pane_g1

0x70aa,	// (0x0001d8bb) list_calc_item_pane_t1_ParamLimits

0x70aa,	// (0x0001d8bb) list_calc_item_pane_t1

0x70bc,	// (0x0001d8cd) list_calc_item_pane_t2_ParamLimits

0x70bc,	// (0x0001d8cd) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0002599c) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0002599c) list_calc_item_pane_t

0x0c1d,	// (0x0001742e) cell_calc_pane_g1

0x0c27,	// (0x00017438) grid_highlight_pane_cp02

0x895b,	// (0x0001f16c) bg_calc_display_pane_g1

0x70ec,	// (0x0001d8fd) bg_calc_display_pane_g2

0x3323,	// (0x00019b34) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000259a6) bg_calc_display_pane_g

0x70f6,	// (0x0001d907) cell_qdial_pane_ParamLimits

0x70f6,	// (0x0001d907) cell_qdial_pane

0x8964,	// (0x0001f175) cell_qdial_pane_g1_ParamLimits

0x8964,	// (0x0001f175) cell_qdial_pane_g1

0x8971,	// (0x0001f182) cell_qdial_pane_g2_ParamLimits

0x8971,	// (0x0001f182) cell_qdial_pane_g2

0x0c49,	// (0x0001745a) cell_qdial_pane_g3_ParamLimits

0x0c49,	// (0x0001745a) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x000259ad) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x000259ad) cell_qdial_pane_g

0x898f,	// (0x0001f1a0) cell_qdial_pane_t1_ParamLimits

0x898f,	// (0x0001f1a0) cell_qdial_pane_t1

0x89a7,	// (0x0001f1b8) cell_qdial_pane_t2_ParamLimits

0x89a7,	// (0x0001f1b8) cell_qdial_pane_t2

0x89ba,	// (0x0001f1cb) cell_qdial_pane_t3_ParamLimits

0x89ba,	// (0x0001f1cb) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x000259b6) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x000259b6) cell_qdial_pane_t

0x0850,	// (0x00017061) grid_highlight_pane_cp04

0x0c55,	// (0x00017466) thumbnail_qdial_pane_ParamLimits

0x0c55,	// (0x00017466) thumbnail_qdial_pane

0x0cb1,	// (0x000174c2) list_help_pane

0x0cba,	// (0x000174cb) scroll_pane_cp02

0x89cd,	// (0x0001f1de) help_list_pane_t1_ParamLimits

0x89cd,	// (0x0001f1de) help_list_pane_t1

0x710a,	// (0x0001d91b) bg_notes_pane_g2

0x7112,	// (0x0001d923) bg_notes_pane_g3

0x711a,	// (0x0001d92b) notes_bg_pane_g1

0x7122,	// (0x0001d933) notes_bg_pane_g4

0x712a,	// (0x0001d93b) notes_bg_pane_g5

0x7132,	// (0x0001d943) notes_bg_pane_g6

0x713a,	// (0x0001d94b) notes_bg_pane_g7

0x7142,	// (0x0001d953) notes_bg_pane_g8

0x714a,	// (0x0001d95b) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x000259d4) notes_bg_pane_g

0x8a00,	// (0x0001f211) list_notes_text_pane_ParamLimits

0x8a00,	// (0x0001f211) list_notes_text_pane

0x0d0b,	// (0x0001751c) list_notes_text_pane_g1

0x8a25,	// (0x0001f236) list_notes_text_pane_t1

0x0ba4,	// (0x000173b5) listscroll_cale_week_pane

0x8a50,	// (0x0001f261) bg_cale_heading_pane

0x0d25,	// (0x00017536) bg_cale_pane_cp01

0x8a6c,	// (0x0001f27d) cale_week_corner_pane

0x8a82,	// (0x0001f293) cale_week_day_heading_pane

0x8a9e,	// (0x0001f2af) cale_week_scroll_pane_g1

0x8ab7,	// (0x0001f2c8) cale_week_scroll_pane_g2

0x8ac8,	// (0x0001f2d9) cale_week_scroll_pane_g3

0x8ad9,	// (0x0001f2ea) cale_week_scroll_pane_g4

0x8aea,	// (0x0001f2fb) cale_week_scroll_pane_g5

0x8afb,	// (0x0001f30c) cale_week_scroll_pane_g6

0x8b0c,	// (0x0001f31d) cale_week_scroll_pane_g7

0x8b1f,	// (0x0001f330) cale_week_scroll_pane_g8

0x8b32,	// (0x0001f343) cale_week_scroll_pane_g9

0x8b43,	// (0x0001f354) cale_week_scroll_pane_g10

0x8b54,	// (0x0001f365) cale_week_scroll_pane_g11

0x8b65,	// (0x0001f376) cale_week_scroll_pane_g12

0x8b76,	// (0x0001f387) cale_week_scroll_pane_g13

0x8b8f,	// (0x0001f3a0) cale_week_scroll_pane_g14

0x8ba8,	// (0x0001f3b9) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x000259e3) cale_week_scroll_pane_g

0x8bc1,	// (0x0001f3d2) cale_week_time_pane

0x8bd4,	// (0x0001f3e5) grid_cale_week_pane

0x8bf1,	// (0x0001f402) scroll_pane_cp08

0x8c0b,	// (0x0001f41c) cell_cale_week_pane_ParamLimits

0x8c0b,	// (0x0001f41c) cell_cale_week_pane

0x8c57,	// (0x0001f468) cale_week_day_heading_pane_t1

0x8c70,	// (0x0001f481) cale_week_day_heading_pane_t2

0x8c89,	// (0x0001f49a) cale_week_day_heading_pane_t3

0x8ca2,	// (0x0001f4b3) cale_week_day_heading_pane_t4

0x8cbb,	// (0x0001f4cc) cale_week_day_heading_pane_t5

0x8cd4,	// (0x0001f4e5) cale_week_day_heading_pane_t6

0x8ced,	// (0x0001f4fe) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00025a02) cale_week_day_heading_pane_t

0x0d50,	// (0x00017561) bg_cale_side_pane

0x7152,	// (0x0001d963) cale_week_time_pane_t1

0x716a,	// (0x0001d97b) cale_week_time_pane_t2

0x7182,	// (0x0001d993) cale_week_time_pane_t3

0x719a,	// (0x0001d9ab) cale_week_time_pane_t4

0x71b2,	// (0x0001d9c3) cale_week_time_pane_t5

0x71ca,	// (0x0001d9db) cale_week_time_pane_t6

0x71e2,	// (0x0001d9f3) cale_week_time_pane_t7

0x7202,	// (0x0001da13) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00025a11) cale_week_time_pane_t

0x8d06,	// (0x0001f517) cell_cale_week_pane_g2

0x8d17,	// (0x0001f528) cell_cale_week_pane_g3_ParamLimits

0x8d17,	// (0x0001f528) cell_cale_week_pane_g3

0x0d5e,	// (0x0001756f) grid_highlight_pane_cp07

0x0d66,	// (0x00017577) listscroll_gms_pane

0x0d70,	// (0x00017581) grid_gms_pane

0x0d79,	// (0x0001758a) listscroll_gms_pane_g1

0x0d81,	// (0x00017592) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00025a22) listscroll_gms_pane_g

0x8d2f,	// (0x0001f540) scroll_pane_cp010

0x8d3a,	// (0x0001f54b) cell_gms_pane_ParamLimits

0x8d3a,	// (0x0001f54b) cell_gms_pane

0x8d4d,	// (0x0001f55e) cell_gms_pane_g1

0x0d89,	// (0x0001759a) cell_gms_pane_g2

0x0d91,	// (0x000175a2) cell_gms_pane_g3

0x0d9a,	// (0x000175ab) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00025a27) cell_gms_pane_g

0x0da3,	// (0x000175b4) grid_highlight_pane_cp09

0xae36,	// (0x00021647) phob_pre_status_pane_g1

0xae3e,	// (0x0002164f) phob_pre_status_pane_g2

0xae46,	// (0x00021657) phob_pre_status_pane_g3

0xae4e,	// (0x0002165f) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00025e16) phob_pre_status_pane_g

0xae5e,	// (0x0002166f) phob_pre_status_pane_t1

0xae6e,	// (0x0002167f) phob_pre_status_pane_t2

0xae7e,	// (0x0002168f) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00025e21) phob_pre_status_pane_t

0x0850,	// (0x00017061) bg_list_pane_cp05

0x722a,	// (0x0001da3b) grid_vorec_pane

0x7234,	// (0x0001da45) vorec_t1

0x7242,	// (0x0001da53) vorec_t2

0x7250,	// (0x0001da61) vorec_t3

0x725e,	// (0x0001da6f) vorec_t4

0x726c,	// (0x0001da7d) vorec_t5

0x727a,	// (0x0001da8b) vorec_t6

0x0006,

0xf21f,	// (0x00025a30) vorec_t

0x7296,	// (0x0001daa7) wait_bar_pane_cp01

0x8d55,	// (0x0001f566) cell_vorec_pane_ParamLimits

0x8d55,	// (0x0001f566) cell_vorec_pane

0x0e15,	// (0x00017626) cell_vorec_pane_g1

0x0850,	// (0x00017061) grid_highlight_pane_cp05

0x8d78,	// (0x0001f589) cams_zoom_pane

0x8d84,	// (0x0001f595) image_vga_pane

0x8d93,	// (0x0001f5a4) main_camera_pane_g1

0x8da1,	// (0x0001f5b2) main_camera_pane_g2

0x8dad,	// (0x0001f5be) main_camera_pane_g3

0x8db9,	// (0x0001f5ca) main_camera_pane_g4

0x8dc5,	// (0x0001f5d6) main_camera_pane_g5

0x8dd1,	// (0x0001f5e2) main_camera_pane_g6

0x8ddd,	// (0x0001f5ee) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00025a3f) main_camera_pane_g

0x8de9,	// (0x0001f5fa) main_camera_pane_t1

0x8dfb,	// (0x0001f60c) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00025a50) main_camera_pane_t

0x8e1c,	// (0x0001f62d) cams_zoom_pane_cp_ParamLimits

0x8e1c,	// (0x0001f62d) cams_zoom_pane_cp

0x8e40,	// (0x0001f651) image_cif_pane_ParamLimits

0x8e40,	// (0x0001f651) image_cif_pane

0x8e5e,	// (0x0001f66f) image_subqcif_pane

0x8e66,	// (0x0001f677) main_video_pane_g1_ParamLimits

0x8e66,	// (0x0001f677) main_video_pane_g1

0x8e86,	// (0x0001f697) main_video_pane_g2_ParamLimits

0x8e86,	// (0x0001f697) main_video_pane_g2

0x8eb6,	// (0x0001f6c7) main_video_pane_g3_ParamLimits

0x8eb6,	// (0x0001f6c7) main_video_pane_g3

0x8edf,	// (0x0001f6f0) main_video_pane_g4_ParamLimits

0x8edf,	// (0x0001f6f0) main_video_pane_g4

0x8f08,	// (0x0001f719) main_video_pane_g5_ParamLimits

0x8f08,	// (0x0001f719) main_video_pane_g5

0x0e2b,	// (0x0001763c) main_video_pane_g6_ParamLimits

0x0e2b,	// (0x0001763c) main_video_pane_g6

0x0006,

0xf244,	// (0x00025a55) main_video_pane_g_ParamLimits

0xf244,	// (0x00025a55) main_video_pane_g

0x8f2c,	// (0x0001f73d) main_video_pane_t1_ParamLimits

0x8f2c,	// (0x0001f73d) main_video_pane_t1

0x0e45,	// (0x00017656) cams_zoom_pane_g1

0x0e4e,	// (0x0001765f) cams_zoom_pane_g2

0x0e57,	// (0x00017668) cams_zoom_pane_g3

0x0e60,	// (0x00017671) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00025a64) cams_zoom_pane_g

0x8f76,	// (0x0001f787) grid_cams_pane

0x8f84,	// (0x0001f795) linegrid_cams_pane

0x8f92,	// (0x0001f7a3) cell_cams_pane_ParamLimits

0x8f92,	// (0x0001f7a3) cell_cams_pane

0x0e69,	// (0x0001767a) cams_burst_image_pane

0x0e71,	// (0x00017682) cell_cams_pane_g1

0x0850,	// (0x00017061) grid_highlight_pane_cp03

0x0c1d,	// (0x0001742e) mp_bg_pane_g1

0x0850,	// (0x00017061) bg_list_pane_cp03

0x2d19,	// (0x0001952a) bg_mp_pane

0x2d21,	// (0x00019532) grid_mp_pane

0x2d29,	// (0x0001953a) media_player_g1

0x2d31,	// (0x00019542) media_player_t1

0x2d3f,	// (0x00019550) media_player_t2

0x2d4d,	// (0x0001955e) media_player_t3

0x2d5b,	// (0x0001956c) media_player_t4

0x2d69,	// (0x0001957a) media_player_t5

0x2d77,	// (0x00019588) media_player_t6

0x2d85,	// (0x00019596) media_player_t7

0x0006,

0xf5ef,	// (0x00025e00) media_player_t

0x2d93,	// (0x000195a4) wait_bar_pane_cp02

0xf5d4,	// (0x00025de5) main_usb_pane_t

0xae2d,	// (0x0002163e) cell_mp_pane

0x0c1d,	// (0x0001742e) cell_mp_pane_g1

0x0850,	// (0x00017061) grid_highlight_pane_cp06

0x0f19,	// (0x0001772a) grid_skin_colour_pane

0x0f21,	// (0x00017732) list_highlight_pane_cp03

0x8ffc,	// (0x0001f80d) skin_g1

0x0f29,	// (0x0001773a) skin_t1

0x0f38,	// (0x00017749) skin_t2

0x0001,

0xf288,	// (0x00025a99) skin_t

0x9006,	// (0x0001f817) cell_skin_colour_pane_ParamLimits

0x9006,	// (0x0001f817) cell_skin_colour_pane

0x0f46,	// (0x00017757) cell_skin_colour_pane_g1

0x9088,	// (0x0001f899) call_video_g1_ParamLimits

0x9088,	// (0x0001f899) call_video_g1

0x9098,	// (0x0001f8a9) call_video_g2_ParamLimits

0x9098,	// (0x0001f8a9) call_video_g2

0x0001,

0xf28d,	// (0x00025a9e) call_video_g_ParamLimits

0xf28d,	// (0x00025a9e) call_video_g

0x90f2,	// (0x0001f903) call_video_uplink_pane_cp1_ParamLimits

0x90f2,	// (0x0001f903) call_video_uplink_pane_cp1

0x0f58,	// (0x00017769) call_video_uplink_pane_cp2

0x91be,	// (0x0001f9cf) video_down_crop_pane_ParamLimits

0x91be,	// (0x0001f9cf) video_down_crop_pane

0x92bc,	// (0x0001facd) video_down_pane_ParamLimits

0x92bc,	// (0x0001facd) video_down_pane

0x0f60,	// (0x00017771) video_down_subqcif_pane_ParamLimits

0x0f60,	// (0x00017771) video_down_subqcif_pane

0x0f78,	// (0x00017789) video_down_subqcif_pane_cp_ParamLimits

0x0f78,	// (0x00017789) video_down_subqcif_pane_cp

0x0f9c,	// (0x000177ad) im_reading_pane_ParamLimits

0x0f9c,	// (0x000177ad) im_reading_pane

0x93de,	// (0x0001fbef) im_writing_pane_ParamLimits

0x93de,	// (0x0001fbef) im_writing_pane

0x93fc,	// (0x0001fc0d) im_reading_pane_t1

0x0fb6,	// (0x000177c7) list_im_pane

0x0fc7,	// (0x000177d8) scroll_pane_cp07

0x9450,	// (0x0001fc61) im_writing_pane_t1_ParamLimits

0x9450,	// (0x0001fc61) im_writing_pane_t1

0x0fe0,	// (0x000177f1) im_writing_pane_t2_ParamLimits

0x0fe0,	// (0x000177f1) im_writing_pane_t2

0x0001,

0xf297,	// (0x00025aa8) im_writing_pane_t_ParamLimits

0xf297,	// (0x00025aa8) im_writing_pane_t

0x0850,	// (0x00017061) input_focus_pane_cp04

0x0850,	// (0x00017061) input_focus_pane_cp05

0x9465,	// (0x0001fc76) list_im_single_pane_ParamLimits

0x9465,	// (0x0001fc76) list_im_single_pane

0x9489,	// (0x0001fc9a) list_single_im_pane_t1

0xadf1,	// (0x00021602) blid_accuracy_pane

0xadf9,	// (0x0002160a) blid_compass_pane

0xae03,	// (0x00021614) main_location_t1

0xae11,	// (0x00021622) main_location_t2

0xae1f,	// (0x00021630) main_location_t3

0x0002,

0xf5fe,	// (0x00025e0f) main_location_t

0x0850,	// (0x00017061) aid_levels_location

0x0c1d,	// (0x0001742e) blid_accuracy_pane_g1

0x0c1d,	// (0x0001742e) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00025b0a) blid_accuracy_pane_g

0x1028,	// (0x00017839) wml_content_pane

0x1066,	// (0x00017877) wml_button_pane_ParamLimits

0x1066,	// (0x00017877) wml_button_pane

0x9498,	// (0x0001fca9) wml_list_single_large_pane_ParamLimits

0x9498,	// (0x0001fca9) wml_list_single_large_pane

0x94c2,	// (0x0001fcd3) wml_list_single_medium_pane_ParamLimits

0x94c2,	// (0x0001fcd3) wml_list_single_medium_pane

0x94f3,	// (0x0001fd04) wml_list_single_small_pane_ParamLimits

0x94f3,	// (0x0001fd04) wml_list_single_small_pane

0x107a,	// (0x0001788b) wml_selection_box_pane_ParamLimits

0x107a,	// (0x0001788b) wml_selection_box_pane

0x108d,	// (0x0001789e) wml_list_single_pane_t1

0x109c,	// (0x000178ad) wml_list_single_medium_pane_t1

0x10ab,	// (0x000178bc) wml_list_single_large_pane_t1

0x10ba,	// (0x000178cb) input_focus_pane_cp02_ParamLimits

0x10ba,	// (0x000178cb) input_focus_pane_cp02

0x10cd,	// (0x000178de) wml_selection_box_pane_g1

0x10d6,	// (0x000178e7) wml_selection_box_pane_t1_ParamLimits

0x10d6,	// (0x000178e7) wml_selection_box_pane_t1

0x0aab,	// (0x000172bc) bg_wml_button_pane_ParamLimits

0x0aab,	// (0x000172bc) bg_wml_button_pane

0x10ee,	// (0x000178ff) wml_button_pane_g1

0x10f6,	// (0x00017907) wml_button_pane_t1

0x10ee,	// (0x000178ff) wml_button_bg_pane_g1

0x1106,	// (0x00017917) wml_button_bg_pane_g2

0x110e,	// (0x0001791f) wml_button_bg_pane_g3

0x1116,	// (0x00017927) wml_button_bg_pane_g4

0x111e,	// (0x0001792f) wml_button_bg_pane_g5

0x1126,	// (0x00017937) wml_button_bg_pane_g6

0x112e,	// (0x0001793f) wml_button_bg_pane_g7

0x1136,	// (0x00017947) wml_button_bg_pane_g8

0x113e,	// (0x0001794f) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00025aad) wml_button_bg_pane_g

0x952d,	// (0x0001fd3e) bg_list_pane_cp02

0x1146,	// (0x00017957) mce_header_pane_ParamLimits

0x1146,	// (0x00017957) mce_header_pane

0x115c,	// (0x0001796d) mce_icon_pane

0x115c,	// (0x0001796d) mce_image_pane

0x1165,	// (0x00017976) mce_text_pane_ParamLimits

0x1165,	// (0x00017976) mce_text_pane

0x9537,	// (0x0001fd48) scroll_pane_cp03

0x105e,	// (0x0001786f) scroll_pane_cp04

0x1178,	// (0x00017989) scroll_pane_cp05_ParamLimits

0x1178,	// (0x00017989) scroll_pane_cp05

0x9541,	// (0x0001fd52) mce_header_field_pane_ParamLimits

0x9541,	// (0x0001fd52) mce_header_field_pane

0x9561,	// (0x0001fd72) mce_header_field_pane_2_ParamLimits

0x9561,	// (0x0001fd72) mce_header_field_pane_2

0x9577,	// (0x0001fd88) mce_header_field_pane_3

0x957f,	// (0x0001fd90) list_single_mce_message_pane_ParamLimits

0x957f,	// (0x0001fd90) list_single_mce_message_pane

0x95a4,	// (0x0001fdb5) list_single_mce_smart_pane_ParamLimits

0x95a4,	// (0x0001fdb5) list_single_mce_smart_pane

0x1184,	// (0x00017995) input_focus_pane_cp03

0x118d,	// (0x0001799e) list_header_data_pane

0x95d4,	// (0x0001fde5) mce_header_field_pane_t1

0x95e2,	// (0x0001fdf3) list_single_mce_header_pane_ParamLimits

0x95e2,	// (0x0001fdf3) list_single_mce_header_pane

0x1195,	// (0x000179a6) list_single_mce_header_pane_t1

0x11a4,	// (0x000179b5) list_single_mce_message_pane_g1

0x11ac,	// (0x000179bd) list_single_mce_message_pane_t1

0x9626,	// (0x0001fe37) bg_cale_heading_pane_cp01_ParamLimits

0x9626,	// (0x0001fe37) bg_cale_heading_pane_cp01

0x11ba,	// (0x000179cb) bg_cale_pane_cp02_ParamLimits

0x11ba,	// (0x000179cb) bg_cale_pane_cp02

0x9659,	// (0x0001fe6a) cale_month_corner_pane

0x966f,	// (0x0001fe80) cale_month_day_heading_pane_ParamLimits

0x966f,	// (0x0001fe80) cale_month_day_heading_pane

0x96b2,	// (0x0001fec3) cale_month_pane_g1_ParamLimits

0x96b2,	// (0x0001fec3) cale_month_pane_g1

0x96de,	// (0x0001feef) cale_month_pane_g2_ParamLimits

0x96de,	// (0x0001feef) cale_month_pane_g2

0x9701,	// (0x0001ff12) cale_month_pane_g3_ParamLimits

0x9701,	// (0x0001ff12) cale_month_pane_g3

0x973d,	// (0x0001ff4e) cale_month_pane_g4_ParamLimits

0x973d,	// (0x0001ff4e) cale_month_pane_g4

0x9779,	// (0x0001ff8a) cale_month_pane_g5_ParamLimits

0x9779,	// (0x0001ff8a) cale_month_pane_g5

0x97b5,	// (0x0001ffc6) cale_month_pane_g6_ParamLimits

0x97b5,	// (0x0001ffc6) cale_month_pane_g6

0x97f1,	// (0x00020002) cale_month_pane_g7_ParamLimits

0x97f1,	// (0x00020002) cale_month_pane_g7

0x983d,	// (0x0002004e) cale_month_pane_g8_ParamLimits

0x983d,	// (0x0002004e) cale_month_pane_g8

0x9889,	// (0x0002009a) cale_month_pane_g9_ParamLimits

0x9889,	// (0x0002009a) cale_month_pane_g9

0x98cf,	// (0x000200e0) cale_month_pane_g10_ParamLimits

0x98cf,	// (0x000200e0) cale_month_pane_g10

0x9909,	// (0x0002011a) cale_month_pane_g11_ParamLimits

0x9909,	// (0x0002011a) cale_month_pane_g11

0x9947,	// (0x00020158) cale_month_pane_g12_ParamLimits

0x9947,	// (0x00020158) cale_month_pane_g12

0x9985,	// (0x00020196) cale_month_pane_g13_ParamLimits

0x9985,	// (0x00020196) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00025ac0) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00025ac0) cale_month_pane_g

0x99c3,	// (0x000201d4) cale_month_week_pane

0x99d6,	// (0x000201e7) grid_cale_month_pane_ParamLimits

0x99d6,	// (0x000201e7) grid_cale_month_pane

0x9a14,	// (0x00020225) cale_month_day_heading_pane_t1

0x9a72,	// (0x00020283) cale_month_day_heading_pane_t2

0x9ad7,	// (0x000202e8) cale_month_day_heading_pane_t3

0x9b3c,	// (0x0002034d) cale_month_day_heading_pane_t4

0x9ba1,	// (0x000203b2) cale_month_day_heading_pane_t5

0x9c06,	// (0x00020417) cale_month_day_heading_pane_t6

0x9c6b,	// (0x0002047c) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00025adb) cale_month_day_heading_pane_t

0x0d50,	// (0x00017561) bg_cale_side_pane_cp01

0x9ce0,	// (0x000204f1) cale_month_week_pane_t1

0x9cf7,	// (0x00020508) cale_month_week_pane_t2

0x9d0e,	// (0x0002051f) cale_month_week_pane_t3

0x9d25,	// (0x00020536) cale_month_week_pane_t4

0x9d3c,	// (0x0002054d) cale_month_week_pane_t5

0x9d57,	// (0x00020568) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00025aea) cale_month_week_pane_t

0x9d76,	// (0x00020587) cell_cale_month_pane_ParamLimits

0x9d76,	// (0x00020587) cell_cale_month_pane

0x729e,	// (0x0001daaf) cell_cale_month_pane_g1

0x72aa,	// (0x0001dabb) cell_cale_month_pane_t1_ParamLimits

0x72aa,	// (0x0001dabb) cell_cale_month_pane_t1

0x0d5e,	// (0x0001756f) grid_highlight_pane_cp08

0x0c1d,	// (0x0001742e) main_smil_g1

0x9e3c,	// (0x0002064d) smil_status_pane

0x1225,	// (0x00017a36) smil_text_pane

0x2c39,	// (0x0001944a) bg_popup_call3_rect_pane_g8

0x2c41,	// (0x00019452) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00025da3) bg_popup_call3_rect_pane_g

0x2ece,	// (0x000196df) smil_status_volume_pane_g1

0x122f,	// (0x00017a40) smil_status_pane_t1

0x73e0,	// (0x0001dbf1) volume_smil_pane

0x1246,	// (0x00017a57) list_smil_text_pane

0x9e4f,	// (0x00020660) scroll_pane_cp011

0x9e5a,	// (0x0002066b) smil_text_list_pane_t1_ParamLimits

0x9e5a,	// (0x0002066b) smil_text_list_pane_t1

0x72c6,	// (0x0001dad7) aid_volume_smil_ParamLimits

0x72c6,	// (0x0001dad7) aid_volume_smil

0x0c1d,	// (0x0001742e) smil_volume_pane_g1

0x0c1d,	// (0x0001742e) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00025b0a) smil_volume_pane_g

0x0ba4,	// (0x000173b5) listscroll_cale_day_pane

0x1272,	// (0x00017a83) bg_cale_pane

0x128a,	// (0x00017a9b) list_cale_pane

0x129b,	// (0x00017aac) scroll_pane_cp09

0x12ac,	// (0x00017abd) cale_bg_pane_g1

0x12b4,	// (0x00017ac5) cale_bg_pane_g2

0x12bc,	// (0x00017acd) cale_bg_pane_g3

0x12c4,	// (0x00017ad5) cale_bg_pane_g4

0x12cc,	// (0x00017add) cale_bg_pane_g5

0x12d4,	// (0x00017ae5) cale_bg_pane_g6

0x12dc,	// (0x00017aed) cale_bg_pane_g7

0x12e4,	// (0x00017af5) cale_bg_pane_g8

0x12ec,	// (0x00017afd) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00025b0f) cale_bg_pane_g

0x9ed2,	// (0x000206e3) list_cale_time_pane_ParamLimits

0x9ed2,	// (0x000206e3) list_cale_time_pane

0x12f4,	// (0x00017b05) list_cale_time_pane_g1_ParamLimits

0x12f4,	// (0x00017b05) list_cale_time_pane_g1

0x1300,	// (0x00017b11) list_cale_time_pane_g2_ParamLimits

0x1300,	// (0x00017b11) list_cale_time_pane_g2

0x9eee,	// (0x000206ff) list_cale_time_pane_g3_ParamLimits

0x9eee,	// (0x000206ff) list_cale_time_pane_g3

0x9efc,	// (0x0002070d) list_cale_time_pane_g4_ParamLimits

0x9efc,	// (0x0002070d) list_cale_time_pane_g4

0x9f0a,	// (0x0002071b) list_cale_time_pane_g5_ParamLimits

0x9f0a,	// (0x0002071b) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00025b22) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00025b22) list_cale_time_pane_g

0x131a,	// (0x00017b2b) list_cale_time_pane_t1_ParamLimits

0x131a,	// (0x00017b2b) list_cale_time_pane_t1

0x1342,	// (0x00017b53) list_cale_time_pane_t2_ParamLimits

0x1342,	// (0x00017b53) list_cale_time_pane_t2

0xa1c8,	// (0x000209d9) aid_blid_cardinal_pane

0xa20a,	// (0x00020a1b) compass_pane_t4

0x136a,	// (0x00017b7b) list_cale_time_pane_t4_ParamLimits

0x136a,	// (0x00017b7b) list_cale_time_pane_t4

0xa218,	// (0x00020a29) compass_pane_t5

0xa228,	// (0x00020a39) compass_pane_t6

0xa236,	// (0x00020a47) compass_pane_t7

0x1889,	// (0x0001809a) navi_pane_cc_t1

0x19f0,	// (0x00018201) aid_phob_thumbnail_center_pane

0xa8f7,	// (0x00021108) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00025b2f) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00025b2f) list_cale_time_pane_t

0x04a7,	// (0x00016cb8) bg_popup_window_pane_cp02_ParamLimits

0x04a7,	// (0x00016cb8) bg_popup_window_pane_cp02

0x1392,	// (0x00017ba3) heading_pane_cp01_ParamLimits

0x1392,	// (0x00017ba3) heading_pane_cp01

0x139e,	// (0x00017baf) loc_req_pane_ParamLimits

0x139e,	// (0x00017baf) loc_req_pane

0x13ae,	// (0x00017bbf) loc_type_pane_ParamLimits

0x13ae,	// (0x00017bbf) loc_type_pane

0x13c0,	// (0x00017bd1) loc_type_pane_t1_ParamLimits

0x13c0,	// (0x00017bd1) loc_type_pane_t1

0x13d2,	// (0x00017be3) loc_type_pane_t2_ParamLimits

0x13d2,	// (0x00017be3) loc_type_pane_t2

0x13e4,	// (0x00017bf5) loc_type_pane_t3_ParamLimits

0x13e4,	// (0x00017bf5) loc_type_pane_t3

0x0002,

0xf325,	// (0x00025b36) loc_type_pane_t_ParamLimits

0xf325,	// (0x00025b36) loc_type_pane_t

0x13f6,	// (0x00017c07) list_loc_req_pane

0x1400,	// (0x00017c11) scroll_pane_cp012

0x9f18,	// (0x00020729) list_single_loc_request_popup_menu_pane_ParamLimits

0x9f18,	// (0x00020729) list_single_loc_request_popup_menu_pane

0x140b,	// (0x00017c1c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x140b,	// (0x00017c1c) list_single_loc_request_popup_menu_pane_g1

0x1417,	// (0x00017c28) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1417,	// (0x00017c28) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00025b3d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00025b3d) list_single_loc_request_popup_menu_pane_g

0x1423,	// (0x00017c34) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1423,	// (0x00017c34) list_single_loc_request_popup_menu_pane_t1

0x9f2a,	// (0x0002073b) bg_popup_window_pane_cp03_ParamLimits

0x9f2a,	// (0x0002073b) bg_popup_window_pane_cp03

0x9f38,	// (0x00020749) heading_loc_req_pane_ParamLimits

0x9f38,	// (0x00020749) heading_loc_req_pane

0x9f44,	// (0x00020755) popup_dyc_status_message_window_g1_ParamLimits

0x9f44,	// (0x00020755) popup_dyc_status_message_window_g1

0x9f50,	// (0x00020761) popup_dyc_status_message_window_t1_ParamLimits

0x9f50,	// (0x00020761) popup_dyc_status_message_window_t1

0x9f62,	// (0x00020773) popup_dyc_status_message_window_t2_ParamLimits

0x9f62,	// (0x00020773) popup_dyc_status_message_window_t2

0x9f74,	// (0x00020785) popup_dyc_status_message_window_t3_ParamLimits

0x9f74,	// (0x00020785) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00025b42) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00025b42) popup_dyc_status_message_window_t

0x0850,	// (0x00017061) bg_heading_pane_cp01

0x1445,	// (0x00017c56) heading_loc_req_pane_g1

0x144d,	// (0x00017c5e) heading_loc_req_pane_g2

0x1455,	// (0x00017c66) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00025b49) heading_loc_req_pane_g

0x145d,	// (0x00017c6e) heading_loc_req_pane_t1

0x14e1,	// (0x00017cf2) bg_popup_sub_pane_cp01_ParamLimits

0x14e1,	// (0x00017cf2) bg_popup_sub_pane_cp01

0x14ef,	// (0x00017d00) popup_cale_events_window_g1_ParamLimits

0x14ef,	// (0x00017d00) popup_cale_events_window_g1

0x150f,	// (0x00017d20) popup_cale_events_window_g2_ParamLimits

0x150f,	// (0x00017d20) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00025b7d) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00025b7d) popup_cale_events_window_g

0x152f,	// (0x00017d40) popup_cale_events_window_t1_ParamLimits

0x152f,	// (0x00017d40) popup_cale_events_window_t1

0x1541,	// (0x00017d52) popup_cale_events_window_t2_ParamLimits

0x1541,	// (0x00017d52) popup_cale_events_window_t2

0x157f,	// (0x00017d90) popup_cale_events_window_t3_ParamLimits

0x157f,	// (0x00017d90) popup_cale_events_window_t3

0x15b9,	// (0x00017dca) popup_cale_events_window_t4_ParamLimits

0x15b9,	// (0x00017dca) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00025b82) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00025b82) popup_cale_events_window_t

0x9ff8,	// (0x00020809) call_type_pane

0x1a08,	// (0x00018219) popup_call_status_window_g1

0xa004,	// (0x00020815) popup_call_status_window_g2

0xa010,	// (0x00020821) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00025b8b) popup_call_status_window_g

0x15ef,	// (0x00017e00) call_type_pane_g1

0x15f8,	// (0x00017e09) call_type_pane_g2

0x0001,

0xf381,	// (0x00025b92) call_type_pane_g

0x0850,	// (0x00017061) bg_popup_sub_pane_cp02

0x1601,	// (0x00017e12) listscroll_popup_wml_pane

0x1609,	// (0x00017e1a) list_wml_pane

0x1613,	// (0x00017e24) scroll_pane_cp013

0x161e,	// (0x00017e2f) list_single_graphic_popup_wml_pane_ParamLimits

0x161e,	// (0x00017e2f) list_single_graphic_popup_wml_pane

0x0c1d,	// (0x0001742e) list_single_graphic_popup_wml_pane_g1

0x1632,	// (0x00017e43) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00025b97) list_single_graphic_popup_wml_pane_g

0x163a,	// (0x00017e4b) list_single_graphic_popup_wml_pane_t1

0x1648,	// (0x00017e59) aid_call_pane

0x0aa3,	// (0x000172b4) popup_clock_analogue_window_g1

0x0aa3,	// (0x000172b4) popup_clock_analogue_window_g2

0x72e8,	// (0x0001daf9) popup_clock_analogue_window_g3

0x72e8,	// (0x0001daf9) popup_clock_analogue_window_g4

0x0c1d,	// (0x0001742e) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00025b9c) popup_clock_analogue_window_g

0x72f0,	// (0x0001db01) popup_clock_analogue_window_t1

0x72fe,	// (0x0001db0f) clock_digital_number_pane_ParamLimits

0x72fe,	// (0x0001db0f) clock_digital_number_pane

0x730a,	// (0x0001db1b) clock_digital_number_pane_cp02_ParamLimits

0x730a,	// (0x0001db1b) clock_digital_number_pane_cp02

0x7316,	// (0x0001db27) clock_digital_number_pane_cp03_ParamLimits

0x7316,	// (0x0001db27) clock_digital_number_pane_cp03

0x7322,	// (0x0001db33) clock_digital_number_pane_cp04_ParamLimits

0x7322,	// (0x0001db33) clock_digital_number_pane_cp04

0x7332,	// (0x0001db43) clock_digital_separator_pane_ParamLimits

0x7332,	// (0x0001db43) clock_digital_separator_pane

0x733e,	// (0x0001db4f) popup_clock_digital_window_t1

0x0c1d,	// (0x0001742e) clock_digital_number_pane_g1

0x0c1d,	// (0x0001742e) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00025b0a) clock_digital_number_pane_g

0x0c1d,	// (0x0001742e) clock_digital_separator_pane_g1

0x0c1d,	// (0x0001742e) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00025b0a) clock_digital_separator_pane_g

0x0850,	// (0x00017061) bg_popup_window_pane_cp04

0x16cb,	// (0x00017edc) heading_pane_cp03

0x16d3,	// (0x00017ee4) listscroll_popup_gms_pane

0x16db,	// (0x00017eec) grid_large_graphic_popup_pane

0x16e5,	// (0x00017ef6) listscroll_popup_gms_pane_g1

0x16ed,	// (0x00017efe) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00025ba7) listscroll_popup_gms_pane_g

0x105e,	// (0x0001786f) scroll_pane_cp014

0xa01c,	// (0x0002082d) cell_large_graphic_popup_pane_ParamLimits

0xa01c,	// (0x0002082d) cell_large_graphic_popup_pane

0xa034,	// (0x00020845) cell_large_graphic_popup_pane_g1_ParamLimits

0xa034,	// (0x00020845) cell_large_graphic_popup_pane_g1

0x16f5,	// (0x00017f06) cell_large_graphic_popup_pane_g2_ParamLimits

0x16f5,	// (0x00017f06) cell_large_graphic_popup_pane_g2

0x1701,	// (0x00017f12) cell_large_graphic_popup_pane_g3_ParamLimits

0x1701,	// (0x00017f12) cell_large_graphic_popup_pane_g3

0x170e,	// (0x00017f1f) cell_large_graphic_popup_pane_g4_ParamLimits

0x170e,	// (0x00017f1f) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00025bac) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00025bac) cell_large_graphic_popup_pane_g

0x171e,	// (0x00017f2f) grid_highlight_pane_cp010

0x0c1d,	// (0x0001742e) bg_popup_call_pane_g1

0x1728,	// (0x00017f39) list_single_graphic_popup_conf_pane_ParamLimits

0x1728,	// (0x00017f39) list_single_graphic_popup_conf_pane

0x173b,	// (0x00017f4c) list_highlight_pane_cp01

0x1744,	// (0x00017f55) list_single_graphic_popup_conf_pane_g1

0x174c,	// (0x00017f5d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00025bb5) list_single_graphic_popup_conf_pane_g

0x1754,	// (0x00017f65) list_single_graphic_popup_conf_pane_t1

0x1762,	// (0x00017f73) linegrid_cams_pane_g1

0xa040,	// (0x00020851) linegrid_cams_pane_g2

0x0d91,	// (0x000175a2) linegrid_cams_pane_g3

0x176b,	// (0x00017f7c) linegrid_cams_pane_g4

0xa049,	// (0x0002085a) linegrid_cams_pane_g5

0xa052,	// (0x00020863) linegrid_cams_pane_g6

0x0d9a,	// (0x000175ab) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00025bba) linegrid_cams_pane_g

0x1774,	// (0x00017f85) popup_clock_analogue_window

0x1774,	// (0x00017f85) popup_clock_digital_window

0x0850,	// (0x00017061) popup_phob_thumbnail_window

0x0c1d,	// (0x0001742e) call_video_uplink_pane_g1

0x177d,	// (0x00017f8e) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00025bc9) call_video_uplink_pane_g

0x1785,	// (0x00017f96) video_uplink_pane

0x178d,	// (0x00017f9e) mce_image_pane_g1

0xa05b,	// (0x0002086c) mce_image_pane_g2

0xa065,	// (0x00020876) mce_image_pane_g3

0xa06d,	// (0x0002087e) mce_image_pane_g4

0xa075,	// (0x00020886) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00025bce) mce_image_pane_g

0x1797,	// (0x00017fa8) control_top_pane_stacon_cp01_ParamLimits

0x1797,	// (0x00017fa8) control_top_pane_stacon_cp01

0x17ab,	// (0x00017fbc) uni_indicator_pane_stacon_cp01_ParamLimits

0x17ab,	// (0x00017fbc) uni_indicator_pane_stacon_cp01

0x17bc,	// (0x00017fcd) bg_popup_sub_pane_cp03

0xa07d,	// (0x0002088e) chi_dic_find_pane

0xa085,	// (0x00020896) listscroll_chi_dic_pane

0xa08e,	// (0x0002089f) main_pane_chidic_g1

0x17c6,	// (0x00017fd7) chi_dic_find_pane_t1

0x17d4,	// (0x00017fe5) find_chidic_pane

0x17dd,	// (0x00017fee) chi_dic_list_pane_ParamLimits

0x17dd,	// (0x00017fee) chi_dic_list_pane

0x17ee,	// (0x00017fff) scroll_pane_cp020

0x17f6,	// (0x00018007) find_chidic_pane_t1

0x0850,	// (0x00017061) input_focus_pane_cp06

0xa0a1,	// (0x000208b2) list_chi_dic_pane_ParamLimits

0xa0a1,	// (0x000208b2) list_chi_dic_pane

0xa0bb,	// (0x000208cc) list_chi_dic_pane_t1_ParamLimits

0xa0bb,	// (0x000208cc) list_chi_dic_pane_t1

0x0850,	// (0x00017061) list_highlight_pane_cp020

0x1805,	// (0x00018016) bg_cale_heading_pane_g1

0xa0ce,	// (0x000208df) bg_cale_heading_pane_g2

0xa0d6,	// (0x000208e7) bg_cale_heading_pane_g3

0xa0de,	// (0x000208ef) bg_cale_heading_pane_g4

0xa0e8,	// (0x000208f9) bg_cale_heading_pane_g5

0xa0f2,	// (0x00020903) bg_cale_heading_pane_g6

0xa0fa,	// (0x0002090b) bg_cale_heading_pane_g7

0xa102,	// (0x00020913) bg_cale_heading_pane_g8

0xa10c,	// (0x0002091d) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00025bd9) bg_cale_heading_pane_g

0x1805,	// (0x00018016) bg_cale_side_pane_g1

0xa116,	// (0x00020927) bg_cale_side_pane_g2

0xa120,	// (0x00020931) bg_cale_side_pane_g3

0xa12a,	// (0x0002093b) bg_cale_side_pane_g4

0xa134,	// (0x00020945) bg_cale_side_pane_g5

0xa13e,	// (0x0002094f) bg_cale_side_pane_g6

0xa148,	// (0x00020959) bg_cale_side_pane_g7

0xa152,	// (0x00020963) bg_cale_side_pane_g8

0xa15a,	// (0x0002096b) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00025bec) bg_cale_side_pane_g

0xa162,	// (0x00020973) popup_call_status_window_ParamLimits

0xa162,	// (0x00020973) popup_call_status_window

0x180d,	// (0x0001801e) stacon_top_pane

0x1815,	// (0x00018026) status_pane_ParamLimits

0x1815,	// (0x00018026) status_pane

0x182a,	// (0x0001803b) status_small_pane

0x1832,	// (0x00018043) control_pane

0x0850,	// (0x00017061) stacon_bottom_pane

0x183a,	// (0x0001804b) list_single_mce_smart_pane_t1_ParamLimits

0x183a,	// (0x0001804b) list_single_mce_smart_pane_t1

0x184d,	// (0x0001805e) list_single_mce_smart_pane_t2_ParamLimits

0x184d,	// (0x0001805e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00025bff) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00025bff) list_single_mce_smart_pane_t

0xa16e,	// (0x0002097f) compass_pane

0xa17a,	// (0x0002098b) main_location2_pane_t1

0xa18e,	// (0x0002099f) main_location2_pane_t2

0xa1a2,	// (0x000209b3) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00025c04) main_location2_pane_t

0x186c,	// (0x0001807d) compass_pane_g1_ParamLimits

0x186c,	// (0x0001807d) compass_pane_g1

0xa1ec,	// (0x000209fd) compass_pane_t1

0xa1fb,	// (0x00020a0c) compass_pane_t2

0x0005,

0xf3fc,	// (0x00025c0d) compass_pane_t

0xa246,	// (0x00020a57) text_secondary_cp61

0x1880,	// (0x00018091) navi_pane_cams_g5

0x18a3,	// (0x000180b4) navi_pane_im_t1

0x18b1,	// (0x000180c2) navi_pane_mp_g1_ParamLimits

0x18b1,	// (0x000180c2) navi_pane_mp_g1

0x18c5,	// (0x000180d6) navi_pane_mp_g2_ParamLimits

0x18c5,	// (0x000180d6) navi_pane_mp_g2

0x18d1,	// (0x000180e2) navi_pane_mp_g3_ParamLimits

0x18d1,	// (0x000180e2) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00025c21) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00025c21) navi_pane_mp_g

0x18dd,	// (0x000180ee) navi_pane_mp_t1

0x18eb,	// (0x000180fc) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00025c28) navi_pane_mp_t

0x1927,	// (0x00018138) navi_pane_vt_g1

0x18dd,	// (0x000180ee) navi_pane_vt_t1

0x192f,	// (0x00018140) navi_slider_pane

0x1937,	// (0x00018148) zooming_pane

0x193f,	// (0x00018150) navi_slider_pane_g1

0x735b,	// (0x0001db6c) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00025c2f) navi_slider_pane_g

0x1975,	// (0x00018186) aid_levels_zoom

0x197d,	// (0x0001818e) zooming_pane_g1

0x1985,	// (0x00018196) zooming_pane_g2

0x1985,	// (0x00018196) zooming_pane_g3

0x0002,

0xf42d,	// (0x00025c3e) zooming_pane_g

0x198d,	// (0x0001819e) level_10_zoom

0x1996,	// (0x000181a7) level_11_zoom

0x199f,	// (0x000181b0) level_1_zoom

0x19a8,	// (0x000181b9) level_2_zoom

0x19b1,	// (0x000181c2) level_3_zoom

0x19ba,	// (0x000181cb) level_4_zoom

0x19c3,	// (0x000181d4) level_5_zoom

0x19cc,	// (0x000181dd) level_6_zoom

0x19d5,	// (0x000181e6) level_7_zoom

0x19de,	// (0x000181ef) level_8_zoom

0x19e7,	// (0x000181f8) level_9_zoom

0x19f8,	// (0x00018209) popup_phob_thumbnail_window_g1

0x1a00,	// (0x00018211) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00025c45) popup_phob_thumbnail_window_g

0x2d9b,	// (0x000195ac) level_1_location

0x2da3,	// (0x000195b4) level_2_location

0x2dab,	// (0x000195bc) level_3_location

0x2db3,	// (0x000195c4) level_4_location

0x1937,	// (0x00018148) level_5_location

0xa35b,	// (0x00020b6c) mce_icon_pane_g1

0xa363,	// (0x00020b74) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00025c4a) mce_icon_pane_g

0xa36b,	// (0x00020b7c) main_mup_pane_g1_ParamLimits

0xa36b,	// (0x00020b7c) main_mup_pane_g1

0xa383,	// (0x00020b94) main_mup_pane_g2_ParamLimits

0xa383,	// (0x00020b94) main_mup_pane_g2

0xa39f,	// (0x00020bb0) main_mup_pane_g3_ParamLimits

0xa39f,	// (0x00020bb0) main_mup_pane_g3

0xa3bb,	// (0x00020bcc) main_mup_pane_g4_ParamLimits

0xa3bb,	// (0x00020bcc) main_mup_pane_g4

0xa3d7,	// (0x00020be8) main_mup_pane_g5_ParamLimits

0xa3d7,	// (0x00020be8) main_mup_pane_g5

0xa3f8,	// (0x00020c09) main_mup_pane_g6_ParamLimits

0xa3f8,	// (0x00020c09) main_mup_pane_g6

0xa414,	// (0x00020c25) main_mup_pane_g7_ParamLimits

0xa414,	// (0x00020c25) main_mup_pane_g7

0xa430,	// (0x00020c41) main_mup_pane_g8_ParamLimits

0xa430,	// (0x00020c41) main_mup_pane_g8

0xa450,	// (0x00020c61) main_mup_pane_g9_ParamLimits

0xa450,	// (0x00020c61) main_mup_pane_g9

0xa46f,	// (0x00020c80) main_mup_pane_g10_ParamLimits

0xa46f,	// (0x00020c80) main_mup_pane_g10

0xa48e,	// (0x00020c9f) main_mup_pane_g11_ParamLimits

0xa48e,	// (0x00020c9f) main_mup_pane_g11

0xa4a6,	// (0x00020cb7) main_mup_pane_g12_ParamLimits

0xa4a6,	// (0x00020cb7) main_mup_pane_g12

0xa4b4,	// (0x00020cc5) main_mup_pane_g13_ParamLimits

0xa4b4,	// (0x00020cc5) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00025c4f) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00025c4f) main_mup_pane_g

0xa4ca,	// (0x00020cdb) main_mup_pane_t1_ParamLimits

0xa4ca,	// (0x00020cdb) main_mup_pane_t1

0xa4e7,	// (0x00020cf8) main_mup_pane_t2_ParamLimits

0xa4e7,	// (0x00020cf8) main_mup_pane_t2

0xa501,	// (0x00020d12) main_mup_pane_t3_ParamLimits

0xa501,	// (0x00020d12) main_mup_pane_t3

0xa51b,	// (0x00020d2c) main_mup_pane_t4_ParamLimits

0xa51b,	// (0x00020d2c) main_mup_pane_t4

0xa52d,	// (0x00020d3e) main_mup_pane_t5_ParamLimits

0xa52d,	// (0x00020d3e) main_mup_pane_t5

0xa53f,	// (0x00020d50) main_mup_pane_t6_ParamLimits

0xa53f,	// (0x00020d50) main_mup_pane_t6

0x0005,

0xf459,	// (0x00025c6a) main_mup_pane_t_ParamLimits

0xf459,	// (0x00025c6a) main_mup_pane_t

0xa555,	// (0x00020d66) mup_progress_pane_ParamLimits

0xa555,	// (0x00020d66) mup_progress_pane

0xa561,	// (0x00020d72) mup_visualizer_pane_ParamLimits

0xa561,	// (0x00020d72) mup_visualizer_pane

0xa59b,	// (0x00020dac) mup_volume_pane_ParamLimits

0xa59b,	// (0x00020dac) mup_volume_pane

0x1a08,	// (0x00018219) mup_visualizer_pane_g1_ParamLimits

0x1a08,	// (0x00018219) mup_visualizer_pane_g1

0x1a08,	// (0x00018219) mup_visualizer_pane_g2_ParamLimits

0x1a08,	// (0x00018219) mup_visualizer_pane_g2

0x186c,	// (0x0001807d) mup_visualizer_pane_g3_ParamLimits

0x186c,	// (0x0001807d) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00025c77) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00025c77) mup_visualizer_pane_g

0x0c1d,	// (0x0001742e) mup_volume_pane_g1

0x1a1e,	// (0x0001822f) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00025c7e) mup_volume_pane_g

0x0c1d,	// (0x0001742e) mup_progress_pane_g1

0x1a27,	// (0x00018238) mup_progress_pane_g2

0x1a30,	// (0x00018241) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00025c83) mup_progress_pane_g

0x0850,	// (0x00017061) bg_popup_window_pane_cp05

0x1a39,	// (0x0001824a) heading_pane_cp02_ParamLimits

0x1a39,	// (0x0001824a) heading_pane_cp02

0x1a53,	// (0x00018264) list_popup_blid_pane

0x1a5b,	// (0x0001826c) list_blid_sat_info_pane_ParamLimits

0x1a5b,	// (0x0001826c) list_blid_sat_info_pane

0x1a6e,	// (0x0001827f) list_blid_sat_info_pane_g1

0x1a76,	// (0x00018287) list_blid_sat_info_pane_t1

0xa6a8,	// (0x00020eb9) mup_equalizer_pane_ParamLimits

0xa6a8,	// (0x00020eb9) mup_equalizer_pane

0xa6c9,	// (0x00020eda) mup_equalizer_pane_cp1_ParamLimits

0xa6c9,	// (0x00020eda) mup_equalizer_pane_cp1

0xa6ea,	// (0x00020efb) mup_equalizer_pane_cp2_ParamLimits

0xa6ea,	// (0x00020efb) mup_equalizer_pane_cp2

0xa70b,	// (0x00020f1c) mup_equalizer_pane_cp3_ParamLimits

0xa70b,	// (0x00020f1c) mup_equalizer_pane_cp3

0xa72c,	// (0x00020f3d) mup_equalizer_pane_cp4_ParamLimits

0xa72c,	// (0x00020f3d) mup_equalizer_pane_cp4

0xa74d,	// (0x00020f5e) mup_equalizer_pane_cp5

0xa763,	// (0x00020f74) mup_equalizer_pane_cp6

0xa77b,	// (0x00020f8c) mup_equalizer_pane_cp7

0x2cb9,	// (0x000194ca) bg_popup_call_poc_act_pane_g9

0x2cc1,	// (0x000194d2) bg_popup_call_poc_act_pane_g10

0x2cc9,	// (0x000194da) bg_popup_call_poc_act_pane_g11

0x000a,

0x0aab,	// (0x000172bc) mup_scale_pane

0x0c1d,	// (0x0001742e) mup_scale_pane_g1

0x1a84,	// (0x00018295) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00025c9f) mup_scale_pane_g

0x1aa8,	// (0x000182b9) msg_data_pane

0x1ab0,	// (0x000182c1) scroll_pane_cp017

0xa7a5,	// (0x00020fb6) bg_list_pane_cp04_ParamLimits

0xa7a5,	// (0x00020fb6) bg_list_pane_cp04

0x1ac0,	// (0x000182d1) msg_data_pane_g1

0xa7c1,	// (0x00020fd2) msg_data_pane_g2

0xa7cb,	// (0x00020fdc) msg_data_pane_g3

0xa7d3,	// (0x00020fe4) msg_data_pane_g4

0xa7db,	// (0x00020fec) msg_data_pane_g5

0xa7e3,	// (0x00020ff4) msg_data_pane_g6

0xa7eb,	// (0x00020ffc) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00025cae) msg_data_pane_g

0xa7f3,	// (0x00021004) msg_text_pane_ParamLimits

0xa7f3,	// (0x00021004) msg_text_pane

0xa82f,	// (0x00021040) qrid_highlight_pane_cp011_ParamLimits

0xa82f,	// (0x00021040) qrid_highlight_pane_cp011

0x0850,	// (0x00017061) msg_body_pane

0x0850,	// (0x00017061) msg_header_pane

0x1ad1,	// (0x000182e2) input_focus_pane_cp07

0xa855,	// (0x00021066) msg_header_pane_t1_ParamLimits

0xa855,	// (0x00021066) msg_header_pane_t1

0x1ae6,	// (0x000182f7) msg_header_pane_t2_ParamLimits

0x1ae6,	// (0x000182f7) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00025cc2) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00025cc2) msg_header_pane_t

0x1af8,	// (0x00018309) msg_body_pane_g1

0x1b00,	// (0x00018311) msg_body_pane_t1_ParamLimits

0x1b00,	// (0x00018311) msg_body_pane_t1

0x1b31,	// (0x00018342) msg_body_pane_t2_ParamLimits

0x1b31,	// (0x00018342) msg_body_pane_t2

0x1b43,	// (0x00018354) msg_body_pane_t3_ParamLimits

0x1b43,	// (0x00018354) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00025cc7) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00025cc7) msg_body_pane_t

0x739d,	// (0x0001dbae) main_viewer_pane_g1_ParamLimits

0x739d,	// (0x0001dbae) main_viewer_pane_g1

0x73a9,	// (0x0001dbba) main_viewer_pane_g2_ParamLimits

0x73a9,	// (0x0001dbba) main_viewer_pane_g2

0xa889,	// (0x0002109a) main_viewer_pane_g3_ParamLimits

0xa889,	// (0x0002109a) main_viewer_pane_g3

0xa89a,	// (0x000210ab) main_viewer_pane_g4_ParamLimits

0xa89a,	// (0x000210ab) main_viewer_pane_g4

0x73b5,	// (0x0001dbc6) main_viewer_pane_g5_ParamLimits

0x73b5,	// (0x0001dbc6) main_viewer_pane_g5

0x73b5,	// (0x0001dbc6) main_viewer_pane_g7_ParamLimits

0x73b5,	// (0x0001dbc6) main_viewer_pane_g7

0x140b,	// (0x00017c1c) main_viewer_pane_g8_ParamLimits

0x140b,	// (0x00017c1c) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00025cd7) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00025cd7) main_viewer_pane_g

0x1b97,	// (0x000183a8) viewer_content_pane_ParamLimits

0x1b97,	// (0x000183a8) viewer_content_pane

0xa8cb,	// (0x000210dc) main_postcard_pane_g1_ParamLimits

0xa8cb,	// (0x000210dc) main_postcard_pane_g1

0xa8d9,	// (0x000210ea) main_postcard_pane_g2_ParamLimits

0xa8d9,	// (0x000210ea) main_postcard_pane_g2

0xa8e7,	// (0x000210f8) main_postcard_pane_g3_ParamLimits

0xa8e7,	// (0x000210f8) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00025ce8) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00025ce8) main_postcard_pane_g

0xa8f7,	// (0x00021108) main_postcard_pane_g4

0x2ebb,	// (0x000196cc) smil_status_volume_pane_g2

0xa923,	// (0x00021134) postcard_pane_ParamLimits

0xa923,	// (0x00021134) postcard_pane

0x1a08,	// (0x00018219) postcard_pane_g1_ParamLimits

0x1a08,	// (0x00018219) postcard_pane_g1

0xa955,	// (0x00021166) postcard_pane_g2_ParamLimits

0xa955,	// (0x00021166) postcard_pane_g2

0xa961,	// (0x00021172) postcard_pane_g3_ParamLimits

0xa961,	// (0x00021172) postcard_pane_g3

0x1bb3,	// (0x000183c4) postcard_pane_g4_ParamLimits

0x1bb3,	// (0x000183c4) postcard_pane_g4

0xa96d,	// (0x0002117e) postcard_pane_g5_ParamLimits

0xa96d,	// (0x0002117e) postcard_pane_g5

0xa979,	// (0x0002118a) postcard_pane_g6_ParamLimits

0xa979,	// (0x0002118a) postcard_pane_g6

0x1ba5,	// (0x000183b6) postcard_pane_g7_ParamLimits

0x1ba5,	// (0x000183b6) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00025cf5) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00025cf5) postcard_pane_g

0xa985,	// (0x00021196) main_mp2_pane_g1_ParamLimits

0xa985,	// (0x00021196) main_mp2_pane_g1

0xa991,	// (0x000211a2) main_mp2_pane_g2_ParamLimits

0xa991,	// (0x000211a2) main_mp2_pane_g2

0xa99d,	// (0x000211ae) main_mp2_pane_g3_ParamLimits

0xa99d,	// (0x000211ae) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00025d04) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00025d04) main_mp2_pane_g

0xa9a9,	// (0x000211ba) main_mp2_pane_t1_ParamLimits

0xa9a9,	// (0x000211ba) main_mp2_pane_t1

0xa9c0,	// (0x000211d1) main_mp2_pane_t2_ParamLimits

0xa9c0,	// (0x000211d1) main_mp2_pane_t2

0xa9d4,	// (0x000211e5) main_mp2_pane_t3_ParamLimits

0xa9d4,	// (0x000211e5) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00025d0b) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00025d0b) main_mp2_pane_t

0x1bc1,	// (0x000183d2) pec_content_pane_ParamLimits

0x1bc1,	// (0x000183d2) pec_content_pane

0x105e,	// (0x0001786f) scroll_pane_cp015

0x1bd3,	// (0x000183e4) pec_attribute_pane_ParamLimits

0x1bd3,	// (0x000183e4) pec_attribute_pane

0xa9e6,	// (0x000211f7) pec_content_pane_g1_ParamLimits

0xa9e6,	// (0x000211f7) pec_content_pane_g1

0x1be3,	// (0x000183f4) pec_content_pane_t1_ParamLimits

0x1be3,	// (0x000183f4) pec_content_pane_t1

0x1bf5,	// (0x00018406) pec_content_pane_t2_ParamLimits

0x1bf5,	// (0x00018406) pec_content_pane_t2

0x0001,

0xf501,	// (0x00025d12) pec_content_pane_t_ParamLimits

0xf501,	// (0x00025d12) pec_content_pane_t

0xa9f2,	// (0x00021203) list_single_graphic_pane_cp01_ParamLimits

0xa9f2,	// (0x00021203) list_single_graphic_pane_cp01

0x0aab,	// (0x000172bc) bg_popup_sub_pane_cp04

0x1c07,	// (0x00018418) popup_mup_playback_window_g1

0x1c13,	// (0x00018424) popup_mup_playback_window_t1

0x1c28,	// (0x00018439) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00025d17) popup_mup_playback_window_t

0x1c5f,	// (0x00018470) main_image_pane_g1_ParamLimits

0x1c5f,	// (0x00018470) main_image_pane_g1

0x1ca2,	// (0x000184b3) scroll_pane_cp018_ParamLimits

0x1ca2,	// (0x000184b3) scroll_pane_cp018

0x1cba,	// (0x000184cb) scroll_pane_cp016_ParamLimits

0x1cba,	// (0x000184cb) scroll_pane_cp016

0xaa8b,	// (0x0002129c) smil2_image_pane_ParamLimits

0xaa8b,	// (0x0002129c) smil2_image_pane

0xaabb,	// (0x000212cc) smil2_root_pane_ParamLimits

0xaabb,	// (0x000212cc) smil2_root_pane

0xaae7,	// (0x000212f8) smil2_text_pane_ParamLimits

0xaae7,	// (0x000212f8) smil2_text_pane

0x0850,	// (0x00017061) bg_list_pane_cp06

0x1cf6,	// (0x00018507) grid_radio_pane

0x0850,	// (0x00017061) bg_popup_window_pane_cp06

0x1cfe,	// (0x0001850f) main_fmradio_pane_t1

0x16cb,	// (0x00017edc) heading_pane_cp04

0x1d0c,	// (0x0001851d) main_fmradio_pane_t2

0x2cd1,	// (0x000194e2) popup_cale_lunar_info_window_g1

0x1d1a,	// (0x0001852b) main_fmradio_pane_t3

0x2cd9,	// (0x000194ea) popup_cale_lunar_info_window_g2

0x1d28,	// (0x00018539) main_fmradio_pane_t4

0x0001,

0x1d36,	// (0x00018547) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00025df2) popup_cale_lunar_info_window_g

0xf51b,	// (0x00025d2c) main_fmradio_pane_t

0x1d44,	// (0x00018555) wait_bar_pane_cp03

0x1d4c,	// (0x0001855d) cell_fmradio_pane_ParamLimits

0x1d4c,	// (0x0001855d) cell_fmradio_pane

0x1ba5,	// (0x000183b6) cell_fmradio_pane_g1_ParamLimits

0x1ba5,	// (0x000183b6) cell_fmradio_pane_g1

0x0850,	// (0x00017061) grid_highlight_pane_cp011

0x1d5f,	// (0x00018570) poc_content_pane_ParamLimits

0x1d5f,	// (0x00018570) poc_content_pane

0x1d71,	// (0x00018582) scroll_pane_cp019

0xab27,	// (0x00021338) popup_call_poc_act_window_ParamLimits

0xab27,	// (0x00021338) popup_call_poc_act_window

0xab34,	// (0x00021345) popup_call_poc_inact_window_ParamLimits

0xab34,	// (0x00021345) popup_call_poc_inact_window

0xf5b8,	// (0x00025dc9) bg_popup_call_poc_act_pane_g

0x2c49,	// (0x0001945a) bg_popup_call_poc_inact_pane_g1

0x2c51,	// (0x00019462) bg_popup_call_poc_inact_pane_g2

0x1d79,	// (0x0001858a) popup_call_poc_act_window_g2

0x2c59,	// (0x0001946a) bg_popup_call_poc_inact_pane_g3

0x2c61,	// (0x00019472) bg_popup_call_poc_inact_pane_g4

0x2c69,	// (0x0001947a) bg_popup_call_poc_inact_pane_g5

0x1d81,	// (0x00018592) popup_call_poc_act_window_t1_ParamLimits

0x1d81,	// (0x00018592) popup_call_poc_act_window_t1

0x1da9,	// (0x000185ba) popup_call_poc_act_window_t2_ParamLimits

0x1da9,	// (0x000185ba) popup_call_poc_act_window_t2

0x1dd1,	// (0x000185e2) popup_call_poc_act_window_t3_ParamLimits

0x1dd1,	// (0x000185e2) popup_call_poc_act_window_t3

0x1df9,	// (0x0001860a) popup_call_poc_act_window_t4_ParamLimits

0x1df9,	// (0x0001860a) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00025d37) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00025d37) popup_call_poc_act_window_t

0x2c71,	// (0x00019482) bg_popup_call_poc_inact_pane_g6

0x2c79,	// (0x0001948a) bg_popup_call_poc_inact_pane_g7

0x2c81,	// (0x00019492) bg_popup_call_poc_inact_pane_g8

0x1e0b,	// (0x0001861c) popup_call_poc_inact_window_g2

0x2c89,	// (0x0001949a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00025db6) bg_popup_call_poc_inact_pane_g

0x1e13,	// (0x00018624) popup_call_poc_inact_window_t1_ParamLimits

0x1e13,	// (0x00018624) popup_call_poc_inact_window_t1

0x1e28,	// (0x00018639) popup_call_poc_inact_window_t2_ParamLimits

0x1e28,	// (0x00018639) popup_call_poc_inact_window_t2

0x1e3d,	// (0x0001864e) popup_call_poc_inact_window_t3_ParamLimits

0x1e3d,	// (0x0001864e) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00025d40) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00025d40) popup_call_poc_inact_window_t

0x2e41,	// (0x00019652) context_pane_ParamLimits

0xb124,	// (0x00021935) signal_pane_ParamLimits

0x1937,	// (0x00018148) main_call2_pane

0x2e2f,	// (0x00019640) popup_phob_thumbnail2_window_ParamLimits

0x2e2f,	// (0x00019640) popup_phob_thumbnail2_window

0x736d,	// (0x0001db7e) aid_hotspot_pointer_arrow_pane

0x7375,	// (0x0001db86) aid_hotspot_pointer_hand_pane

0xae56,	// (0x00021667) phob_pre_status_pane_g5

0x8d78,	// (0x0001f589) cams_zoom_pane_ParamLimits

0x8d84,	// (0x0001f595) image_vga_pane_ParamLimits

0x8d93,	// (0x0001f5a4) main_camera_pane_g1_ParamLimits

0x8da1,	// (0x0001f5b2) main_camera_pane_g2_ParamLimits

0x8dad,	// (0x0001f5be) main_camera_pane_g3_ParamLimits

0x8db9,	// (0x0001f5ca) main_camera_pane_g4_ParamLimits

0x8dc5,	// (0x0001f5d6) main_camera_pane_g5_ParamLimits

0x8dd1,	// (0x0001f5e2) main_camera_pane_g6_ParamLimits

0x8ddd,	// (0x0001f5ee) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00025a3f) main_camera_pane_g_ParamLimits

0x8de9,	// (0x0001f5fa) main_camera_pane_t1_ParamLimits

0x8dfb,	// (0x0001f60c) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00025a50) main_camera_pane_t_ParamLimits

0x0aab,	// (0x000172bc) bg_popup_preview_window_pane_cp01_ParamLimits

0x0aab,	// (0x000172bc) bg_popup_preview_window_pane_cp01

0x1e52,	// (0x00018663) popup_phob_thumbnail2_window_g1_ParamLimits

0x1e52,	// (0x00018663) popup_phob_thumbnail2_window_g1

0x0850,	// (0x00017061) call2_cli_visual_pane

0xab50,	// (0x00021361) popup_call2_audio_conf_window_ParamLimits

0xab50,	// (0x00021361) popup_call2_audio_conf_window

0xab65,	// (0x00021376) popup_call2_audio_first_window_ParamLimits

0xab65,	// (0x00021376) popup_call2_audio_first_window

0xac03,	// (0x00021414) popup_call2_audio_in_window_ParamLimits

0xac03,	// (0x00021414) popup_call2_audio_in_window

0xac45,	// (0x00021456) popup_call2_audio_out_window_ParamLimits

0xac45,	// (0x00021456) popup_call2_audio_out_window

0xaca7,	// (0x000214b8) popup_call2_audio_second_window_ParamLimits

0xaca7,	// (0x000214b8) popup_call2_audio_second_window

0xad05,	// (0x00021516) popup_call2_audio_wait_window_ParamLimits

0xad05,	// (0x00021516) popup_call2_audio_wait_window

0x0850,	// (0x00017061) bg_popup_call2_act_pane_cp03

0x0a8d,	// (0x0001729e) list_conf_pane_cp

0x1e5e,	// (0x0001866f) popup_call2_audio_conf_window_t1

0x1728,	// (0x00017f39) list_single_graphic_popup_conf2_pane_ParamLimits

0x1728,	// (0x00017f39) list_single_graphic_popup_conf2_pane

0x173b,	// (0x00017f4c) list_highlight_pane_cp04

0x1e6c,	// (0x0001867d) list_single_graphic_popup_conf2_pane_g1

0x174c,	// (0x00017f5d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00025d47) list_single_graphic_popup_conf2_pane_g

0x1e76,	// (0x00018687) list_single_graphic_popup_conf2_pane_t1

0x1e84,	// (0x00018695) bg_popup_call2_act_pane_cp01_ParamLimits

0x1e84,	// (0x00018695) bg_popup_call2_act_pane_cp01

0x1f0e,	// (0x0001871f) call_type_pane_cp05_ParamLimits

0x1f0e,	// (0x0001871f) call_type_pane_cp05

0x1f62,	// (0x00018773) popup_call2_audio_second_window_g1_ParamLimits

0x1f62,	// (0x00018773) popup_call2_audio_second_window_g1

0x1fb6,	// (0x000187c7) popup_call2_audio_second_window_g2_ParamLimits

0x1fb6,	// (0x000187c7) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00025d4c) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00025d4c) popup_call2_audio_second_window_g

0x201b,	// (0x0001882c) popup_call2_audio_second_window_t1_ParamLimits

0x201b,	// (0x0001882c) popup_call2_audio_second_window_t1

0x20d6,	// (0x000188e7) popup_call2_audio_second_window_t2_ParamLimits

0x20d6,	// (0x000188e7) popup_call2_audio_second_window_t2

0x2129,	// (0x0001893a) popup_call2_audio_second_window_t3_ParamLimits

0x2129,	// (0x0001893a) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00025d53) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00025d53) popup_call2_audio_second_window_t

0x0850,	// (0x00017061) bg_popup_call2_in_pane_cp02

0x085a,	// (0x0001706b) call_type_pane_cp04

0x0862,	// (0x00017073) popup_call2_audio_wait_window_g1

0x086a,	// (0x0001707b) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0002592c) popup_call2_audio_wait_window_g

0x0872,	// (0x00017083) popup_call2_audio_wait_window_t3

0x221c,	// (0x00018a2d) bg_popup_call2_act_pane_ParamLimits

0x221c,	// (0x00018a2d) bg_popup_call2_act_pane

0x22dc,	// (0x00018aed) call_type_pane_cp03_ParamLimits

0x22dc,	// (0x00018aed) call_type_pane_cp03

0x2340,	// (0x00018b51) popup_call2_audio_first_window_g1_ParamLimits

0x2340,	// (0x00018b51) popup_call2_audio_first_window_g1

0x23b0,	// (0x00018bc1) popup_call2_audio_first_window_g2_ParamLimits

0x23b0,	// (0x00018bc1) popup_call2_audio_first_window_g2

0x1a08,	// (0x00018219) popup_call2_audio_first_window_g3_ParamLimits

0x1a08,	// (0x00018219) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00025d5c) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00025d5c) popup_call2_audio_first_window_g

0x248e,	// (0x00018c9f) popup_call2_audio_first_window_t1_ParamLimits

0x248e,	// (0x00018c9f) popup_call2_audio_first_window_t1

0x2591,	// (0x00018da2) popup_call2_audio_first_window_t4_ParamLimits

0x2591,	// (0x00018da2) popup_call2_audio_first_window_t4

0x2674,	// (0x00018e85) popup_call2_audio_first_window_t5_ParamLimits

0x2674,	// (0x00018e85) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00025d67) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00025d67) popup_call2_audio_first_window_t

0x0aa3,	// (0x000172b4) bg_popup_call2_act_pane_g1

0x2ce1,	// (0x000194f2) popup_cale_lunar_info_window_t1

0x2cef,	// (0x00019500) popup_cale_lunar_info_window_t2

0x2cfd,	// (0x0001950e) popup_cale_lunar_info_window_t3

0x0850,	// (0x00017061) bg_popup_call2_bubble_pane

0x2775,	// (0x00018f86) bg_popup_call2_in_pane_cp01_ParamLimits

0x2775,	// (0x00018f86) bg_popup_call2_in_pane_cp01

0x052c,	// (0x00016d3d) call_type_pane_cp02

0x27bd,	// (0x00018fce) popup_call2_audio_out_window_g1_ParamLimits

0x27bd,	// (0x00018fce) popup_call2_audio_out_window_g1

0x27e9,	// (0x00018ffa) popup_call2_audio_out_window_g2_ParamLimits

0x27e9,	// (0x00018ffa) popup_call2_audio_out_window_g2

0x2811,	// (0x00019022) popup_call2_audio_out_window_g3_ParamLimits

0x2811,	// (0x00019022) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00025d70) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00025d70) popup_call2_audio_out_window_g

0x284c,	// (0x0001905d) popup_call2_audio_out_window_t1_ParamLimits

0x284c,	// (0x0001905d) popup_call2_audio_out_window_t1

0x28ab,	// (0x000190bc) popup_call2_audio_out_window_t2_ParamLimits

0x28ab,	// (0x000190bc) popup_call2_audio_out_window_t2

0x28ff,	// (0x00019110) popup_call2_audio_out_window_t3_ParamLimits

0x28ff,	// (0x00019110) popup_call2_audio_out_window_t3

0x2915,	// (0x00019126) popup_call2_audio_out_window_t4_ParamLimits

0x2915,	// (0x00019126) popup_call2_audio_out_window_t4

0x292b,	// (0x0001913c) popup_call2_audio_out_window_t5_ParamLimits

0x292b,	// (0x0001913c) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00025d79) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00025d79) popup_call2_audio_out_window_t

0x298f,	// (0x000191a0) bg_popup_call2_in_pane_ParamLimits

0x298f,	// (0x000191a0) bg_popup_call2_in_pane

0x29eb,	// (0x000191fc) popup_call2_audio_in_window_g1_ParamLimits

0x29eb,	// (0x000191fc) popup_call2_audio_in_window_g1

0x2a23,	// (0x00019234) popup_call2_audio_in_window_g2_ParamLimits

0x2a23,	// (0x00019234) popup_call2_audio_in_window_g2

0x2a5b,	// (0x0001926c) popup_call2_audio_in_window_g3_ParamLimits

0x2a5b,	// (0x0001926c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00025d86) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00025d86) popup_call2_audio_in_window_g

0x2ab3,	// (0x000192c4) popup_call2_audio_in_window_t1_ParamLimits

0x2ab3,	// (0x000192c4) popup_call2_audio_in_window_t1

0x2b33,	// (0x00019344) popup_call2_audio_in_window_t2_ParamLimits

0x2b33,	// (0x00019344) popup_call2_audio_in_window_t2

0x2bb3,	// (0x000193c4) popup_call2_audio_in_window_t3_ParamLimits

0x2bb3,	// (0x000193c4) popup_call2_audio_in_window_t3

0x2bcd,	// (0x000193de) popup_call2_audio_in_window_t4_ParamLimits

0x2bcd,	// (0x000193de) popup_call2_audio_in_window_t4

0x2bdf,	// (0x000193f0) popup_call2_audio_in_window_t5_ParamLimits

0x2bdf,	// (0x000193f0) popup_call2_audio_in_window_t5

0x2bf4,	// (0x00019405) popup_call2_audio_in_window_t6_ParamLimits

0x2bf4,	// (0x00019405) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00025d8f) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00025d8f) popup_call2_audio_in_window_t

0x0aa3,	// (0x000172b4) bg_popup_call2_in_pane_g1

0x2d0b,	// (0x0001951c) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00025df7) popup_cale_lunar_info_window_t

0x0aab,	// (0x000172bc) bg_popup_call2_rect_pane_ParamLimits

0x0aab,	// (0x000172bc) bg_popup_call2_rect_pane

0x0850,	// (0x00017061) call2_cli_visual_graphic_pane

0x0850,	// (0x00017061) call2_cli_visual_text_pane

0x73d3,	// (0x0001dbe4) smil_status_volume_pane_g3

0x0002,

0x0c1d,	// (0x0001742e) call2_cli_visual_graphic_pane_g1

0x0c1d,	// (0x0001742e) call2_cli_visual_graphic_pane_g2

0x0c1d,	// (0x0001742e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00025d9c) call2_cli_visual_graphic_pane_g

0x2c09,	// (0x0001941a) bg_popup_call2_rect_pane_g1

0x0ca9,	// (0x000174ba) bg_popup_call2_rect_pane_g2

0x2c11,	// (0x00019422) bg_popup_call2_rect_pane_g3

0x2c19,	// (0x0001942a) bg_popup_call2_rect_pane_g4

0x2c21,	// (0x00019432) bg_popup_call2_rect_pane_g5

0x2c29,	// (0x0001943a) bg_popup_call2_rect_pane_g6

0x2c31,	// (0x00019442) bg_popup_call2_rect_pane_g7

0x2c39,	// (0x0001944a) bg_popup_call2_rect_pane_g8

0x2c41,	// (0x00019452) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00025da3) bg_popup_call2_rect_pane_g

0x2c49,	// (0x0001945a) bg_popup_call2_bubble_pane_g1

0x2c51,	// (0x00019462) bg_popup_call2_bubble_pane_g2

0x2c59,	// (0x0001946a) bg_popup_call2_bubble_pane_g3

0x2c61,	// (0x00019472) bg_popup_call2_bubble_pane_g4

0x2c69,	// (0x0001947a) bg_popup_call2_bubble_pane_g5

0x2c71,	// (0x00019482) bg_popup_call2_bubble_pane_g6

0x2c79,	// (0x0001948a) bg_popup_call2_bubble_pane_g7

0x2c81,	// (0x00019492) bg_popup_call2_bubble_pane_g8

0x2c89,	// (0x0001949a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00025db6) bg_popup_call2_bubble_pane_g

0x8a3d,	// (0x0001f24e) aid_cale_week_size_cell_pane

0x8e0d,	// (0x0001f61e) aid_cams_cif_uncrop_pane_ParamLimits

0x8e0d,	// (0x0001f61e) aid_cams_cif_uncrop_pane

0x8f6a,	// (0x0001f77b) aid_cams_size_cell_ParamLimits

0x8f6a,	// (0x0001f77b) aid_cams_size_cell

0x8f76,	// (0x0001f787) grid_cams_pane_ParamLimits

0x8f84,	// (0x0001f795) linegrid_cams_pane_ParamLimits

0x90b0,	// (0x0001f8c1) call_video_pane_t1

0x90d1,	// (0x0001f8e2) call_video_pane_t2

0x0001,

0xf292,	// (0x00025aa3) call_video_pane_t

0x9608,	// (0x0001fe19) aid_cale_month_size_cell_pane_ParamLimits

0x9608,	// (0x0001fe19) aid_cale_month_size_cell_pane

0xf62f,	// (0x00025e40) smil_status_volume_pane_g

0x73e0,	// (0x0001dbf1) volume_smil_pane_ParamLimits

0x03d1,	// (0x00016be2) aid_popup2_width_pane

0x8982,	// (0x0001f193) cell_qdial_pane_g4_ParamLimits

0x8982,	// (0x0001f193) cell_qdial_pane_g4

0xa1c8,	// (0x000209d9) aid_blid_cardinal_pane_ParamLimits

0xa1d8,	// (0x000209e9) aid_blid_destination_pane_ParamLimits

0xa1d8,	// (0x000209e9) aid_blid_destination_pane

0x0aab,	// (0x000172bc) bg_popup_call_poc_act_pane_ParamLimits

0x0aab,	// (0x000172bc) bg_popup_call_poc_act_pane

0x0aab,	// (0x000172bc) bg_popup_call_poc_inact_pane_ParamLimits

0x0aab,	// (0x000172bc) bg_popup_call_poc_inact_pane

0x2c91,	// (0x000194a2) bg_popup_call_poc_act_pane_g1

0x2c99,	// (0x000194aa) bg_popup_call_poc_act_pane_g2

0x2ca1,	// (0x000194b2) bg_popup_call_poc_act_pane_g3

0x2c61,	// (0x00019472) bg_popup_call_poc_act_pane_g4

0x2c69,	// (0x0001947a) bg_popup_call_poc_act_pane_g5

0x2ca9,	// (0x000194ba) bg_popup_call_poc_act_pane_g6

0x2c79,	// (0x0001948a) bg_popup_call_poc_act_pane_g7

0x2cb1,	// (0x000194c2) bg_popup_call_poc_act_pane_g8

0x0850,	// (0x00017061) main_usb_pane

0x2e0a,	// (0x0001961b) popup_cale_lunar_info_window

0x93fc,	// (0x0001fc0d) im_reading_pane_t1_ParamLimits

0x0fb6,	// (0x000177c7) list_im_pane_ParamLimits

0x0fc7,	// (0x000177d8) scroll_pane_cp07_ParamLimits

0x0850,	// (0x00017061) grid_highlight_pane_cp012

0x0aab,	// (0x000172bc) mup_scale_pane_ParamLimits

0x1a08,	// (0x00018219) main_usb_pane_g1_ParamLimits

0x1a08,	// (0x00018219) main_usb_pane_g1

0xad79,	// (0x0002158a) main_usb_pane_g2_ParamLimits

0xad79,	// (0x0002158a) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00025de0) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00025de0) main_usb_pane_g

0xad85,	// (0x00021596) main_usb_pane_t1_ParamLimits

0xad85,	// (0x00021596) main_usb_pane_t1

0xad97,	// (0x000215a8) main_usb_pane_t2_ParamLimits

0xad97,	// (0x000215a8) main_usb_pane_t2

0xada9,	// (0x000215ba) main_usb_pane_t3_ParamLimits

0xada9,	// (0x000215ba) main_usb_pane_t3

0xadbb,	// (0x000215cc) main_usb_pane_t4_ParamLimits

0xadbb,	// (0x000215cc) main_usb_pane_t4

0xadcd,	// (0x000215de) main_usb_pane_t5_ParamLimits

0xadcd,	// (0x000215de) main_usb_pane_t5

0xaddf,	// (0x000215f0) main_usb_pane_t6_ParamLimits

0xaddf,	// (0x000215f0) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00025de5) main_usb_pane_t_ParamLimits

0xa16e,	// (0x0002097f) aid_text_placing

0xa17a,	// (0x0002098b) main_location2_pane_t1_ParamLimits

0xa18e,	// (0x0002099f) main_location2_pane_t2_ParamLimits

0xa1a2,	// (0x000209b3) main_location2_pane_t3_ParamLimits

0xa1b6,	// (0x000209c7) main_location2_pane_t4_ParamLimits

0xa1b6,	// (0x000209c7) main_location2_pane_t4

0xf3f3,	// (0x00025c04) main_location2_pane_t_ParamLimits

0x0ae7,	// (0x000172f8) find_pinb_pane_g2_ParamLimits

0x0ae7,	// (0x000172f8) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00025952) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00025952) find_pinb_pane_g

0x0af3,	// (0x00017304) find_pinb_pane_t1_ParamLimits

0x0b05,	// (0x00017316) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00025957) find_pinb_pane_t_ParamLimits

0x0850,	// (0x00017061) main_call3_pane

0x9a14,	// (0x00020225) cale_month_day_heading_pane_t1_ParamLimits

0x9a72,	// (0x00020283) cale_month_day_heading_pane_t2_ParamLimits

0x9ad7,	// (0x000202e8) cale_month_day_heading_pane_t3_ParamLimits

0x9b3c,	// (0x0002034d) cale_month_day_heading_pane_t4_ParamLimits

0x9ba1,	// (0x000203b2) cale_month_day_heading_pane_t5_ParamLimits

0x9c06,	// (0x00020417) cale_month_day_heading_pane_t6_ParamLimits

0x9c6b,	// (0x0002047c) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00025adb) cale_month_day_heading_pane_t_ParamLimits

0x123d,	// (0x00017a4e) smil_status_volume_pane

0xa93d,	// (0x0002114e) postcard_address_pane_ParamLimits

0xa93d,	// (0x0002114e) postcard_address_pane

0xa949,	// (0x0002115a) postcard_message_pane_ParamLimits

0xa949,	// (0x0002115a) postcard_message_pane

0xad44,	// (0x00021555) call2_cli_visual_pane_t1_ParamLimits

0xad44,	// (0x00021555) call2_cli_visual_pane_t1

0xb30c,	// (0x00021b1d) postcard_message_pane_t1_ParamLimits

0xb30c,	// (0x00021b1d) postcard_message_pane_t1

0xb2f5,	// (0x00021b06) postcard_address_pane_t1_ParamLimits

0xb2f5,	// (0x00021b06) postcard_address_pane_t1

0xb2e6,	// (0x00021af7) popup_call3_audio_in_window_ParamLimits

0xb2e6,	// (0x00021af7) popup_call3_audio_in_window

0xb1ca,	// (0x000219db) bg_popup_call3_in_pane_ParamLimits

0xb1ca,	// (0x000219db) bg_popup_call3_in_pane

0xb22c,	// (0x00021a3d) popup_call3_audio_in_window_g1_ParamLimits

0xb22c,	// (0x00021a3d) popup_call3_audio_in_window_g1

0xb244,	// (0x00021a55) popup_call3_audio_in_window_g2_ParamLimits

0xb244,	// (0x00021a55) popup_call3_audio_in_window_g2

0xb25c,	// (0x00021a6d) popup_call3_audio_in_window_g3_ParamLimits

0xb25c,	// (0x00021a6d) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00025e47) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00025e47) popup_call3_audio_in_window_g

0xb284,	// (0x00021a95) popup_call3_audio_in_window_t1_ParamLimits

0xb284,	// (0x00021a95) popup_call3_audio_in_window_t1

0xb2ac,	// (0x00021abd) popup_call3_audio_in_window_t2_ParamLimits

0xb2ac,	// (0x00021abd) popup_call3_audio_in_window_t2

0xb2d4,	// (0x00021ae5) popup_call3_audio_in_window_t3_ParamLimits

0xb2d4,	// (0x00021ae5) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00025e50) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00025e50) popup_call3_audio_in_window_t

0x1937,	// (0x00018148) bg_popup_call3_rect_pane

0x2c09,	// (0x0001941a) bg_popup_call3_rect_pane_g1

0x0ca9,	// (0x000174ba) bg_popup_call3_rect_pane_g2

0x2c11,	// (0x00019422) bg_popup_call3_rect_pane_g3

0x2c19,	// (0x0001942a) bg_popup_call3_rect_pane_g4

0x2c21,	// (0x00019432) bg_popup_call3_rect_pane_g5

0x2c29,	// (0x0001943a) bg_popup_call3_rect_pane_g6

0x2c31,	// (0x00019442) bg_popup_call3_rect_pane_g7

0xa5b6,	// (0x00020dc7) mup_visualizer_osc_pane

0x1a16,	// (0x00018227) mup_visualizer_spec_pane

0xb1ea,	// (0x000219fb) call3_video_qcif_pane_ParamLimits

0xb1ea,	// (0x000219fb) call3_video_qcif_pane

0xb1fc,	// (0x00021a0d) call3_video_qcif_uncrop_pane_ParamLimits

0xb1fc,	// (0x00021a0d) call3_video_qcif_uncrop_pane

0xb20a,	// (0x00021a1b) call3_video_subqcif_pane_ParamLimits

0xb20a,	// (0x00021a1b) call3_video_subqcif_pane

0xb21c,	// (0x00021a2d) call3_video_subqcif_uncrop_pane_ParamLimits

0xb21c,	// (0x00021a2d) call3_video_subqcif_uncrop_pane

0xb274,	// (0x00021a85) popup_call3_audio_in_window_g4_ParamLimits

0xb274,	// (0x00021a85) popup_call3_audio_in_window_g4

0xb1b9,	// (0x000219ca) mup_spec_half_pane

0xb1c2,	// (0x000219d3) mup_spec_half_pane_cp

0x2ea1,	// (0x000196b2) mup_osc_middle_pane

0x2eaa,	// (0x000196bb) mup_visualizer_osc_pane_g1

0xb19a,	// (0x000219ab) mup_spec_bar_pane_ParamLimits

0xb19a,	// (0x000219ab) mup_spec_bar_pane

0x2e8e,	// (0x0001969f) mup_spec_bar_pane_g1

0x2e98,	// (0x000196a9) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00025e3b) mup_spec_bar_pane_g

0x8a3d,	// (0x0001f24e) aid_cale_week_size_cell_pane_ParamLimits

0x8a50,	// (0x0001f261) bg_cale_heading_pane_ParamLimits

0x0d25,	// (0x00017536) bg_cale_pane_cp01_ParamLimits

0x8a6c,	// (0x0001f27d) cale_week_corner_pane_ParamLimits

0x8a82,	// (0x0001f293) cale_week_day_heading_pane_ParamLimits

0x8a9e,	// (0x0001f2af) cale_week_scroll_pane_g1_ParamLimits

0x8ab7,	// (0x0001f2c8) cale_week_scroll_pane_g2_ParamLimits

0x8ac8,	// (0x0001f2d9) cale_week_scroll_pane_g3_ParamLimits

0x8ad9,	// (0x0001f2ea) cale_week_scroll_pane_g4_ParamLimits

0x8aea,	// (0x0001f2fb) cale_week_scroll_pane_g5_ParamLimits

0x8afb,	// (0x0001f30c) cale_week_scroll_pane_g6_ParamLimits

0x8b0c,	// (0x0001f31d) cale_week_scroll_pane_g7_ParamLimits

0x8b1f,	// (0x0001f330) cale_week_scroll_pane_g8_ParamLimits

0x8b32,	// (0x0001f343) cale_week_scroll_pane_g9_ParamLimits

0x8b43,	// (0x0001f354) cale_week_scroll_pane_g10_ParamLimits

0x8b54,	// (0x0001f365) cale_week_scroll_pane_g11_ParamLimits

0x8b65,	// (0x0001f376) cale_week_scroll_pane_g12_ParamLimits

0x8b76,	// (0x0001f387) cale_week_scroll_pane_g13_ParamLimits

0x8b8f,	// (0x0001f3a0) cale_week_scroll_pane_g14_ParamLimits

0x8ba8,	// (0x0001f3b9) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x000259e3) cale_week_scroll_pane_g_ParamLimits

0x8bc1,	// (0x0001f3d2) cale_week_time_pane_ParamLimits

0x8bd4,	// (0x0001f3e5) grid_cale_week_pane_ParamLimits

0x0d3e,	// (0x0001754f) listscroll_cale_week_pane_t1

0x8bf1,	// (0x0001f402) scroll_pane_cp08_ParamLimits

0x9659,	// (0x0001fe6a) cale_month_corner_pane_ParamLimits

0x11dd,	// (0x000179ee) cale_month_pane_t1

0x99c3,	// (0x000201d4) cale_month_week_pane_ParamLimits

0x1a08,	// (0x00018219) popup_call_status_window_g1_ParamLimits

0xa004,	// (0x00020815) popup_call_status_window_g2_ParamLimits

0xa010,	// (0x00020821) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00025b8b) popup_call_status_window_g_ParamLimits

0x1650,	// (0x00017e61) aid_call2_pane

0xa849,	// (0x0002105a) msg_header_pane_g1

0xa93d,	// (0x0002114e) postcard_address2_pane_ParamLimits

0xa93d,	// (0x0002114e) postcard_address2_pane

0xa949,	// (0x0002115a) postcard_message2_pane_ParamLimits

0xa949,	// (0x0002115a) postcard_message2_pane

0xb132,	// (0x00021943) message2_row_pane_ParamLimits

0xb132,	// (0x00021943) message2_row_pane

0xb14d,	// (0x0002195e) address2_row_pane_ParamLimits

0xb14d,	// (0x0002195e) address2_row_pane

0x2e5c,	// (0x0001966d) postcard_message2_row_pane_g1

0x2e64,	// (0x00019675) postcard_message2_row_pane_t1

0x2e5c,	// (0x0001966d) address2_row_pane_g1

0x2e64,	// (0x00019675) address2_row_pane_t1

0x7222,	// (0x0001da33) aid_size_cell_vorec

0x0850,	// (0x00017061) main_rss_pane

0xb160,	// (0x00021971) rss_list_single_pane_ParamLimits

0xb160,	// (0x00021971) rss_list_single_pane

0x2e72,	// (0x00019683) rss_list_single_pane_t1

0x2e80,	// (0x00019691) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00025e36) rss_list_single_pane_t

0x0850,	// (0x00017061) main_camera2_pane

0x0850,	// (0x00017061) main_video2_pane

0x743e,	// (0x0001dc4f) cams_zoom_pane_cp2_ParamLimits

0x743e,	// (0x0001dc4f) cams_zoom_pane_cp2

0x744a,	// (0x0001dc5b) image2_vga_pane_ParamLimits

0x744a,	// (0x0001dc5b) image2_vga_pane

0x7459,	// (0x0001dc6a) main_camera2_pane_g1_ParamLimits

0x7459,	// (0x0001dc6a) main_camera2_pane_g1

0x7465,	// (0x0001dc76) main_camera2_pane_g2_ParamLimits

0x7465,	// (0x0001dc76) main_camera2_pane_g2

0x7471,	// (0x0001dc82) main_camera2_pane_g3_ParamLimits

0x7471,	// (0x0001dc82) main_camera2_pane_g3

0x747d,	// (0x0001dc8e) main_camera2_pane_g4_ParamLimits

0x747d,	// (0x0001dc8e) main_camera2_pane_g4

0x7489,	// (0x0001dc9a) main_camera2_pane_g5_ParamLimits

0x7489,	// (0x0001dc9a) main_camera2_pane_g5

0x7495,	// (0x0001dca6) main_camera2_pane_g6_ParamLimits

0x7495,	// (0x0001dca6) main_camera2_pane_g6

0x74a1,	// (0x0001dcb2) main_camera2_pane_g7_ParamLimits

0x74a1,	// (0x0001dcb2) main_camera2_pane_g7

0x74ad,	// (0x0001dcbe) main_camera2_pane_g8_ParamLimits

0x74ad,	// (0x0001dcbe) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00025e57) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00025e57) main_camera2_pane_g

0x74c5,	// (0x0001dcd6) main_camera2_pane_t1_ParamLimits

0x74c5,	// (0x0001dcd6) main_camera2_pane_t1

0x74d7,	// (0x0001dce8) main_camera2_pane_t2_ParamLimits

0x74d7,	// (0x0001dce8) main_camera2_pane_t2

0x74e9,	// (0x0001dcfa) main_camera2_pane_t3_ParamLimits

0x74e9,	// (0x0001dcfa) main_camera2_pane_t3

0x74fb,	// (0x0001dd0c) main_camera2_pane_t4_ParamLimits

0x74fb,	// (0x0001dd0c) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00025e6a) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00025e6a) main_camera2_pane_t

0x755d,	// (0x0001dd6e) cams_zoom_pane_cp4_ParamLimits

0x755d,	// (0x0001dd6e) cams_zoom_pane_cp4

0x756d,	// (0x0001dd7e) image2_cif_pane_ParamLimits

0x756d,	// (0x0001dd7e) image2_cif_pane

0x7582,	// (0x0001dd93) image2_subqcif_pane_ParamLimits

0x7582,	// (0x0001dd93) image2_subqcif_pane

0x7591,	// (0x0001dda2) main_video2_pane_g1_ParamLimits

0x7591,	// (0x0001dda2) main_video2_pane_g1

0x75a3,	// (0x0001ddb4) main_video2_pane_g2_ParamLimits

0x75a3,	// (0x0001ddb4) main_video2_pane_g2

0x75b3,	// (0x0001ddc4) main_video2_pane_g3_ParamLimits

0x75b3,	// (0x0001ddc4) main_video2_pane_g3

0x75c3,	// (0x0001ddd4) main_video2_pane_g4_ParamLimits

0x75c3,	// (0x0001ddd4) main_video2_pane_g4

0x75d3,	// (0x0001dde4) main_video2_pane_g5_ParamLimits

0x75d3,	// (0x0001dde4) main_video2_pane_g5

0x75e3,	// (0x0001ddf4) main_video2_pane_g6_ParamLimits

0x75e3,	// (0x0001ddf4) main_video2_pane_g6

0x0005,

0xf668,	// (0x00025e79) main_video2_pane_g_ParamLimits

0xf668,	// (0x00025e79) main_video2_pane_g

0x75f5,	// (0x0001de06) main_video2_pane_t1_ParamLimits

0x75f5,	// (0x0001de06) main_video2_pane_t1

0x760f,	// (0x0001de20) main_video2_pane_t2_ParamLimits

0x760f,	// (0x0001de20) main_video2_pane_t2

0x7635,	// (0x0001de46) main_video2_pane_t3_ParamLimits

0x7635,	// (0x0001de46) main_video2_pane_t3

0x0002,

0xf675,	// (0x00025e86) main_video2_pane_t_ParamLimits

0xf675,	// (0x00025e86) main_video2_pane_t

0xae96,	// (0x000216a7) call_muted_g2

0x0001,

0xf617,	// (0x00025e28) call_muted_g

0x0850,	// (0x00017061) main_mup2_pane

0x2f61,	// (0x00019772) main_mup2_pane_g1_ParamLimits

0x2f61,	// (0x00019772) main_mup2_pane_g1

0xb327,	// (0x00021b38) main_mup2_pane_g2_ParamLimits

0xb327,	// (0x00021b38) main_mup2_pane_g2

0x7684,	// (0x0001de95) main_mup_pane_g13_cp1

0x768c,	// (0x0001de9d) mup_volume_pane_cp1

0xb347,	// (0x00021b58) main_mup2_pane_g4_ParamLimits

0xb347,	// (0x00021b58) main_mup2_pane_g4

0xb35c,	// (0x00021b6d) main_mup2_pane_g5_ParamLimits

0xb35c,	// (0x00021b6d) main_mup2_pane_g5

0xb371,	// (0x00021b82) main_mup2_pane_g6_ParamLimits

0xb371,	// (0x00021b82) main_mup2_pane_g6

0xb386,	// (0x00021b97) main_mup2_pane_g7_ParamLimits

0xb386,	// (0x00021b97) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00025e8d) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00025e8d) main_mup2_pane_g

0xb3a2,	// (0x00021bb3) main_mup2_pane_t1_ParamLimits

0xb3a2,	// (0x00021bb3) main_mup2_pane_t1

0xb3b9,	// (0x00021bca) main_mup2_pane_t2_ParamLimits

0xb3b9,	// (0x00021bca) main_mup2_pane_t2

0xb3d0,	// (0x00021be1) main_mup2_pane_t3_ParamLimits

0xb3d0,	// (0x00021be1) main_mup2_pane_t3

0xb3e7,	// (0x00021bf8) main_mup2_pane_t4_ParamLimits

0xb3e7,	// (0x00021bf8) main_mup2_pane_t4

0xb401,	// (0x00021c12) main_mup2_pane_t5_ParamLimits

0xb401,	// (0x00021c12) main_mup2_pane_t5

0xb41b,	// (0x00021c2c) main_mup2_pane_t6_ParamLimits

0xb41b,	// (0x00021c2c) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00025e9c) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00025e9c) main_mup2_pane_t

0xb453,	// (0x00021c64) mup2_visualizer_pane_ParamLimits

0xb453,	// (0x00021c64) mup2_visualizer_pane

0xb489,	// (0x00021c9a) mup_progress_pane_cp_ParamLimits

0xb489,	// (0x00021c9a) mup_progress_pane_cp

0x766f,	// (0x0001de80) mup_volume_pane_cp_ParamLimits

0x766f,	// (0x0001de80) mup_volume_pane_cp

0xb4a0,	// (0x00021cb1) mup2_visualizer_pane_g1_ParamLimits

0xb4a0,	// (0x00021cb1) mup2_visualizer_pane_g1

0x2f33,	// (0x00019744) mup2_visualizer_pane_g2_ParamLimits

0x2f33,	// (0x00019744) mup2_visualizer_pane_g2

0xb4b5,	// (0x00021cc6) mup2_visualizer_pane_g3_ParamLimits

0xb4b5,	// (0x00021cc6) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00025ea9) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00025ea9) mup2_visualizer_pane_g

0x1cee,	// (0x000184ff) aid_size_cell_fmradio

0xafac,	// (0x000217bd) aid_height_parent_landcape

0x1045,	// (0x00017856) wml_content_pane_cp

0x104d,	// (0x0001785e) wml_tabs_pane

0x1056,	// (0x00017867) popup_wml_miniature_window

0x105e,	// (0x0001786f) scroll_pane_cp021

0x1072,	// (0x00017883) wml_content_pane_comp8

0x0850,	// (0x00017061) bg_popup_sub_pane_cp05

0x2f51,	// (0x00019762) popup_wml_miniature_window_g1

0x2f59,	// (0x0001976a) wml_miniature_view_pane

0xb4c3,	// (0x00021cd4) aid_size_wml_view

0xb4cb,	// (0x00021cdc) wml_miniature_view_pane_g1

0xb4d4,	// (0x00021ce5) wml_miniature_view_pane_g2

0xb4dd,	// (0x00021cee) wml_miniature_view_pane_g3

0xb4e5,	// (0x00021cf6) wml_miniature_view_pane_g4

0xb4ed,	// (0x00021cfe) wml_miniature_view_pane_g5

0xb4f5,	// (0x00021d06) wml_miniature_view_pane_g6

0xb4fd,	// (0x00021d0e) wml_miniature_view_pane_g7

0xb505,	// (0x00021d16) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00025eb0) wml_miniature_view_pane_g

0x2f61,	// (0x00019772) background_graphic_ParamLimits

0x2f61,	// (0x00019772) background_graphic

0x2f6d,	// (0x0001977e) wml_tabs_2_pane

0x2f76,	// (0x00019787) wml_tabs_3_pane_ParamLimits

0x2f76,	// (0x00019787) wml_tabs_3_pane

0x2f88,	// (0x00019799) wml_tabs_4_pane_ParamLimits

0x2f88,	// (0x00019799) wml_tabs_4_pane

0x2f9e,	// (0x000197af) wml_tabs_5_pane_ParamLimits

0x2f9e,	// (0x000197af) wml_tabs_5_pane

0x2fb8,	// (0x000197c9) wml_tabs_pane_g2_ParamLimits

0x2fb8,	// (0x000197c9) wml_tabs_pane_g2

0x2fcc,	// (0x000197dd) wml_tabs_pane_g3_ParamLimits

0x2fcc,	// (0x000197dd) wml_tabs_pane_g3

0xb50d,	// (0x00021d1e) wml_tabs_2_active_pane_ParamLimits

0xb50d,	// (0x00021d1e) wml_tabs_2_active_pane

0xb51d,	// (0x00021d2e) wml_tabs_2_passive_pane_ParamLimits

0xb51d,	// (0x00021d2e) wml_tabs_2_passive_pane

0xb52d,	// (0x00021d3e) wml_tabs_3_active_pane_cp_ParamLimits

0xb52d,	// (0x00021d3e) wml_tabs_3_active_pane_cp

0xb53e,	// (0x00021d4f) wml_tabs_3_passive_pane_ParamLimits

0xb53e,	// (0x00021d4f) wml_tabs_3_passive_pane

0xb54f,	// (0x00021d60) wml_tabs_3_passive_pane_cp_ParamLimits

0xb54f,	// (0x00021d60) wml_tabs_3_passive_pane_cp

0xb560,	// (0x00021d71) tabs_4_active_pane

0xb568,	// (0x00021d79) tabs_4_passive_pane

0xb570,	// (0x00021d81) tabs_4_passive_pane_cp

0xb578,	// (0x00021d89) tabs_4_passive_pane_cp2

0xad71,	// (0x00021582) aid_height_text

0xa583,	// (0x00020d94) mup_volume_cont_pane_ParamLimits

0xa583,	// (0x00020d94) mup_volume_cont_pane

0x873a,	// (0x0001ef4b) aid_size_cell_pinb

0x8744,	// (0x0001ef55) aid_size_list_pinb

0xb472,	// (0x00021c83) mup2_volume_cont_pane_ParamLimits

0xb472,	// (0x00021c83) mup2_volume_cont_pane

0x765b,	// (0x0001de6c) mup2_volume_cont_pane_g1_ParamLimits

0x765b,	// (0x0001de6c) mup2_volume_cont_pane_g1

0x83cd,	// (0x0001ebde) aid_size_cell_touch_ParamLimits

0x83cd,	// (0x0001ebde) aid_size_cell_touch

0x8620,	// (0x0001ee31) touch_pane_ParamLimits

0x8620,	// (0x0001ee31) touch_pane

0x03bf,	// (0x00016bd0) main_rss2_pane

0x3022,	// (0x00019833) listscroll_rss2_pane

0x302b,	// (0x0001983c) rss2_navigation_pane

0x3033,	// (0x00019844) list_rss2_pane

0x17ee,	// (0x00017fff) scroll_pane_cp22

0x303b,	// (0x0001984c) rss2_navigation_pane_g1

0x3044,	// (0x00019855) rss2_navigation_pane_g2

0x304c,	// (0x0001985d) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00025ec1) rss2_navigation_pane_g

0x3054,	// (0x00019865) rss2_navigation_pane_t1

0xb580,	// (0x00021d91) rss2_list_single_pane_ParamLimits

0xb580,	// (0x00021d91) rss2_list_single_pane

0x3062,	// (0x00019873) rss2_list_single_pane_t2

0x3070,	// (0x00019881) rss2_list_single_pane_t3_ParamLimits

0x3070,	// (0x00019881) rss2_list_single_pane_t3

0x308d,	// (0x0001989e) rss2_list_single_pane_t4

0x9e47,	// (0x00020658) smil_status_pane_g1

0x042f,	// (0x00016c40) main_image2_pane_ParamLimits

0x042f,	// (0x00016c40) main_image2_pane

0x74b9,	// (0x0001dcca) main_camera2_pane_g9_ParamLimits

0x74b9,	// (0x0001dcca) main_camera2_pane_g9

0x750d,	// (0x0001dd1e) main_camera2_pane_t5_ParamLimits

0x750d,	// (0x0001dd1e) main_camera2_pane_t5

0x751f,	// (0x0001dd30) main_camera2_pane_t6_ParamLimits

0x751f,	// (0x0001dd30) main_camera2_pane_t6

0xb5b1,	// (0x00021dc2) main_image2_pane_g1_ParamLimits

0xb5b1,	// (0x00021dc2) main_image2_pane_g1

0xab11,	// (0x00021322) smil2_video_pane_ParamLimits

0xab11,	// (0x00021322) smil2_video_pane

0x03dd,	// (0x00016bee) aid_zoom_text_primary_cp

0x0425,	// (0x00016c36) popup_preview_fixed_window

0x0fae,	// (0x000177bf) im_reading_pane_g1

0x7403,	// (0x0001dc14) cams2_bc_adjust_pane_cp_ParamLimits

0x7403,	// (0x0001dc14) cams2_bc_adjust_pane_cp

0x754f,	// (0x0001dd60) cams2_bc_adjust_pane_ParamLimits

0x754f,	// (0x0001dd60) cams2_bc_adjust_pane

0x485e,	// (0x0001b06f) cams2_bc_adjust_pane_g1

0x7694,	// (0x0001dea5) cams2_slider_pane

0x769d,	// (0x0001deae) cams2_slider_pane_g1

0x76a6,	// (0x0001deb7) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00025ec8) cams2_slider_pane_g

0x6fb9,	// (0x0001d7ca) calc_display_pane_ParamLimits

0x6fd7,	// (0x0001d7e8) calc_paper_pane_ParamLimits

0x6ff3,	// (0x0001d804) grid_calc_pane_ParamLimits

0x733e,	// (0x0001db4f) popup_clock_digital_window_t1_ParamLimits

0x1c8b,	// (0x0001849c) main_image_pane_t1

0x6f9f,	// (0x0001d7b0) aid_size_cell_calc_ParamLimits

0x6f9f,	// (0x0001d7b0) aid_size_cell_calc

0xafde,	// (0x000217ef) popup_blid_sat_info2_window_ParamLimits

0xafde,	// (0x000217ef) popup_blid_sat_info2_window

0x30d7,	// (0x000198e8) aid_size_cell_blid

0x30df,	// (0x000198f0) bg_popup_window_pane_cp07

0x3102,	// (0x00019913) grid_popup_blid_pane

0x310c,	// (0x0001991d) heading_pane_cp05_ParamLimits

0x310c,	// (0x0001991d) heading_pane_cp05

0x31d6,	// (0x000199e7) cell_popup_blid_pane_ParamLimits

0x31d6,	// (0x000199e7) cell_popup_blid_pane

0x31fa,	// (0x00019a0b) cell_popup_blid_pane_g1

0x3202,	// (0x00019a13) cell_popup_blid_pane_t1

0xb438,	// (0x00021c49) mup2_indicator_pane_ParamLimits

0xb438,	// (0x00021c49) mup2_indicator_pane

0x1937,	// (0x00018148) mup2_visualizer_osc_pane

0x2f3f,	// (0x00019750) mup2_visualizer_spec_pane_ParamLimits

0x2f3f,	// (0x00019750) mup2_visualizer_spec_pane

0xb5bd,	// (0x00021dce) mup2_spec_half_pane

0xb5c6,	// (0x00021dd7) mup2_spec_half_pane_cp

0xb5d0,	// (0x00021de1) mup2_spec_bar_pane_ParamLimits

0xb5d0,	// (0x00021de1) mup2_spec_bar_pane

0x2e8e,	// (0x0001969f) mup2_spec_bar_pane_g1

0x2e98,	// (0x000196a9) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00025e3b) mup2_spec_bar_pane_g

0xb5ef,	// (0x00021e00) mup2_osc_middle_pane

0x2eaa,	// (0x000196bb) mup2_visualizer_osc_pane_g1

0x045d,	// (0x00016c6e) popup_number_entry_window_t1_ParamLimits

0x0470,	// (0x00016c81) popup_number_entry_window_t2_ParamLimits

0x0482,	// (0x00016c93) popup_number_entry_window_t3_ParamLimits

0x8677,	// (0x0001ee88) popup_number_entry_window_t5_ParamLimits

0x8677,	// (0x0001ee88) popup_number_entry_window_t5

0xf0ec,	// (0x000258fd) popup_number_entry_window_t_ParamLimits

0x0494,	// (0x00016ca5) text_title_cp2_ParamLimits

0x737d,	// (0x0001db8e) aid_hotspot_pointer_text2_pane

0x73c7,	// (0x0001dbd8) main_viewer_pane_g9_ParamLimits

0x73c7,	// (0x0001dbd8) main_viewer_pane_g9

0x11dd,	// (0x000179ee) cale_month_pane_t1_ParamLimits

0x1272,	// (0x00017a83) bg_cale_pane_ParamLimits

0x128a,	// (0x00017a9b) list_cale_pane_ParamLimits

0x0d3e,	// (0x0001754f) listscroll_cale_day_pane_t1

0x129b,	// (0x00017aac) scroll_pane_cp09_ParamLimits

0xa5be,	// (0x00020dcf) main_mup_eq_pane_t1_ParamLimits

0xa5be,	// (0x00020dcf) main_mup_eq_pane_t1

0xa5d8,	// (0x00020de9) main_mup_eq_pane_t2_ParamLimits

0xa5d8,	// (0x00020de9) main_mup_eq_pane_t2

0xa5f2,	// (0x00020e03) main_mup_eq_pane_t3_ParamLimits

0xa5f2,	// (0x00020e03) main_mup_eq_pane_t3

0xa60a,	// (0x00020e1b) main_mup_eq_pane_t4_ParamLimits

0xa60a,	// (0x00020e1b) main_mup_eq_pane_t4

0xa622,	// (0x00020e33) main_mup_eq_pane_t5_ParamLimits

0xa622,	// (0x00020e33) main_mup_eq_pane_t5

0xa63a,	// (0x00020e4b) main_mup_eq_pane_t6_ParamLimits

0xa63a,	// (0x00020e4b) main_mup_eq_pane_t6

0xa64e,	// (0x00020e5f) main_mup_eq_pane_t7_ParamLimits

0xa64e,	// (0x00020e5f) main_mup_eq_pane_t7

0xa662,	// (0x00020e73) main_mup_eq_pane_t8_ParamLimits

0xa662,	// (0x00020e73) main_mup_eq_pane_t8

0xa678,	// (0x00020e89) main_mup_eq_pane_t9_ParamLimits

0xa678,	// (0x00020e89) main_mup_eq_pane_t9

0xa690,	// (0x00020ea1) main_mup_eq_pane_t10_ParamLimits

0xa690,	// (0x00020ea1) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00025c8a) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00025c8a) main_mup_eq_pane_t

0xa74d,	// (0x00020f5e) mup_equalizer_pane_cp5_ParamLimits

0xa763,	// (0x00020f74) mup_equalizer_pane_cp6_ParamLimits

0xa77b,	// (0x00020f8c) mup_equalizer_pane_cp7_ParamLimits

0x03bf,	// (0x00016bd0) main_gallery_pane

0x2eb3,	// (0x000196c4) smil2_volume_pane

0x2ece,	// (0x000196df) smil_status_volume_pane_g1_ParamLimits

0x2ebb,	// (0x000196cc) smil_status_volume_pane_g2_ParamLimits

0x73d3,	// (0x0001dbe4) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00025e40) smil_status_volume_pane_g_ParamLimits

0x30df,	// (0x000198f0) bg_popup_window_pane_cp07_ParamLimits

0x30ed,	// (0x000198fe) blid_firmament_pane

0xb5f8,	// (0x00021e09) aid_size_cell_gallery_ParamLimits

0xb5f8,	// (0x00021e09) aid_size_cell_gallery

0xb606,	// (0x00021e17) grid_gallery_pane_ParamLimits

0xb606,	// (0x00021e17) grid_gallery_pane

0xb616,	// (0x00021e27) cell_gallery_pane_ParamLimits

0xb616,	// (0x00021e27) cell_gallery_pane

0x3210,	// (0x00019a21) bg_cell_gallery_focus_pane_ParamLimits

0x3210,	// (0x00019a21) bg_cell_gallery_focus_pane

0x3222,	// (0x00019a33) cell_gallery_pane_g1_ParamLimits

0x3222,	// (0x00019a33) cell_gallery_pane_g1

0xb664,	// (0x00021e75) cell_gallery_pane_g2_ParamLimits

0xb664,	// (0x00021e75) cell_gallery_pane_g2

0xb671,	// (0x00021e82) cell_gallery_pane_g3_ParamLimits

0xb671,	// (0x00021e82) cell_gallery_pane_g3

0x322e,	// (0x00019a3f) cell_gallery_pane_g4_ParamLimits

0x322e,	// (0x00019a3f) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00025eee) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00025eee) cell_gallery_pane_g

0x323a,	// (0x00019a4b) bg_cell_gallery_focus_pane_g1

0x3242,	// (0x00019a53) bg_cell_gallery_focus_pane_g2

0x324a,	// (0x00019a5b) bg_cell_gallery_focus_pane_g3

0x3252,	// (0x00019a63) bg_cell_gallery_focus_pane_g4

0x325a,	// (0x00019a6b) bg_cell_gallery_focus_pane_g5

0x3262,	// (0x00019a73) bg_cell_gallery_focus_pane_g6

0x326a,	// (0x00019a7b) bg_cell_gallery_focus_pane_g7

0x3272,	// (0x00019a83) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00025ef7) bg_cell_gallery_focus_pane_g

0x327a,	// (0x00019a8b) aid_firma_cardinal

0x328e,	// (0x00019a9f) blid_firmament_pane_t1

0x32a5,	// (0x00019ab6) blid_firmament_pane_t2

0x32bc,	// (0x00019acd) blid_firmament_pane_t3

0x32d3,	// (0x00019ae4) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00025f08) blid_firmament_pane_t

0x32ea,	// (0x00019afb) blid_sat_info_pane

0x32fa,	// (0x00019b0b) blid_sat_info_pane_g1

0x32fa,	// (0x00019b0b) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00025f11) blid_sat_info_pane_g

0x3304,	// (0x00019b15) blid_sat_info_pane_t1

0x3312,	// (0x00019b23) smil2_volume_content_pane

0x331b,	// (0x00019b2c) smil2_volume_pane_g1

0x3323,	// (0x00019b34) smil2_volume_content_pane_g1

0x332c,	// (0x00019b3d) smil2_volume_content_pane_g2

0x3335,	// (0x00019b46) smil2_volume_content_pane_g3

0x333e,	// (0x00019b4f) smil2_volume_content_pane_g4

0x3347,	// (0x00019b58) smil2_volume_content_pane_g5

0x3350,	// (0x00019b61) smil2_volume_content_pane_g6

0x3359,	// (0x00019b6a) smil2_volume_content_pane_g7

0x3362,	// (0x00019b73) smil2_volume_content_pane_g8

0x336b,	// (0x00019b7c) smil2_volume_content_pane_g9

0x3374,	// (0x00019b85) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00025f16) smil2_volume_content_pane_g

0x8c57,	// (0x0001f468) cale_week_day_heading_pane_t1_ParamLimits

0x8c70,	// (0x0001f481) cale_week_day_heading_pane_t2_ParamLimits

0x8c89,	// (0x0001f49a) cale_week_day_heading_pane_t3_ParamLimits

0x8ca2,	// (0x0001f4b3) cale_week_day_heading_pane_t4_ParamLimits

0x8cbb,	// (0x0001f4cc) cale_week_day_heading_pane_t5_ParamLimits

0x8cd4,	// (0x0001f4e5) cale_week_day_heading_pane_t6_ParamLimits

0x8ced,	// (0x0001f4fe) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00025a02) cale_week_day_heading_pane_t_ParamLimits

0x0d50,	// (0x00017561) bg_cale_side_pane_ParamLimits

0x7152,	// (0x0001d963) cale_week_time_pane_t1_ParamLimits

0x716a,	// (0x0001d97b) cale_week_time_pane_t2_ParamLimits

0x7182,	// (0x0001d993) cale_week_time_pane_t3_ParamLimits

0x719a,	// (0x0001d9ab) cale_week_time_pane_t4_ParamLimits

0x71b2,	// (0x0001d9c3) cale_week_time_pane_t5_ParamLimits

0x71ca,	// (0x0001d9db) cale_week_time_pane_t6_ParamLimits

0x71e2,	// (0x0001d9f3) cale_week_time_pane_t7_ParamLimits

0x7202,	// (0x0001da13) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00025a11) cale_week_time_pane_t_ParamLimits

0x8d06,	// (0x0001f517) cell_cale_week_pane_g2_ParamLimits

0x0d50,	// (0x00017561) bg_cale_side_pane_cp01_ParamLimits

0x9ce0,	// (0x000204f1) cale_month_week_pane_t1_ParamLimits

0x9cf7,	// (0x00020508) cale_month_week_pane_t2_ParamLimits

0x9d0e,	// (0x0002051f) cale_month_week_pane_t3_ParamLimits

0x9d25,	// (0x00020536) cale_month_week_pane_t4_ParamLimits

0x9d3c,	// (0x0002054d) cale_month_week_pane_t5_ParamLimits

0x9d57,	// (0x00020568) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00025aea) cale_month_week_pane_t_ParamLimits

0x729e,	// (0x0001daaf) cell_cale_month_pane_g1_ParamLimits

0x03bf,	// (0x00016bd0) main_cale_event_viewer_pane

0x03bf,	// (0x00016bd0) listscroll_cale_event_viewer_pane

0x337d,	// (0x00019b8e) list_cale_ev_pane

0x3385,	// (0x00019b96) scroll_pane_cp023

0x3391,	// (0x00019ba2) field_cale_ev_pane_ParamLimits

0x3391,	// (0x00019ba2) field_cale_ev_pane

0x33af,	// (0x00019bc0) field_cale_ev_content_pane_ParamLimits

0x33af,	// (0x00019bc0) field_cale_ev_content_pane

0x33bb,	// (0x00019bcc) field_cale_ev_pane_g1_ParamLimits

0x33bb,	// (0x00019bcc) field_cale_ev_pane_g1

0x33c7,	// (0x00019bd8) field_cale_ev_pane_g2_ParamLimits

0x33c7,	// (0x00019bd8) field_cale_ev_pane_g2

0x33df,	// (0x00019bf0) field_cale_ev_pane_g3_ParamLimits

0x33df,	// (0x00019bf0) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00025f2b) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00025f2b) field_cale_ev_pane_g

0x33f7,	// (0x00019c08) field_cale_ev_pane_t1_ParamLimits

0x33f7,	// (0x00019c08) field_cale_ev_pane_t1

0x340e,	// (0x00019c1f) field_cale_ev_content_pane_t1_ParamLimits

0x340e,	// (0x00019c1f) field_cale_ev_content_pane_t1

0x1ac8,	// (0x000182d9) bg_button_pane_cp01

0x0ba4,	// (0x000173b5) listscroll_cale_week_pane_ParamLimits

0x8a33,	// (0x0001f244) popup_toolbar_window_cp01

0x0d3e,	// (0x0001754f) listscroll_cale_week_pane_t1_ParamLimits

0x0ba4,	// (0x000173b5) listscroll_cale_day_pane_ParamLimits

0x8a33,	// (0x0001f244) popup_toolbar_window_cp02

0x0d3e,	// (0x0001754f) listscroll_cale_day_pane_t1_ParamLimits

0x0ba4,	// (0x000173b5) main_cale_month_pane_ParamLimits

0xb0ae,	// (0x000218bf) popup_toolbar_window_cp03_ParamLimits

0xb0ae,	// (0x000218bf) popup_toolbar_window_cp03

0xaa27,	// (0x00021238) main_image_pane_g2_ParamLimits

0xaa27,	// (0x00021238) main_image_pane_g2

0xaa33,	// (0x00021244) main_image_pane_g3_ParamLimits

0xaa33,	// (0x00021244) main_image_pane_g3

0x0002,

0xf50b,	// (0x00025d1c) main_image_pane_g_ParamLimits

0xf50b,	// (0x00025d1c) main_image_pane_g

0x1c8b,	// (0x0001849c) main_image_pane_t1_ParamLimits

0xaa3f,	// (0x00021250) main_image_pane_t2_ParamLimits

0xaa3f,	// (0x00021250) main_image_pane_t2

0xaa51,	// (0x00021262) main_image_pane_t3_ParamLimits

0xaa51,	// (0x00021262) main_image_pane_t3

0xaa63,	// (0x00021274) main_image_pane_t4_ParamLimits

0xaa63,	// (0x00021274) main_image_pane_t4

0x0003,

0xf512,	// (0x00025d23) main_image_pane_t_ParamLimits

0xf512,	// (0x00025d23) main_image_pane_t

0xaa75,	// (0x00021286) popup_image_details_window_cp01

0xaa7f,	// (0x00021290) popup_toobar_trans_pane_cp01_ParamLimits

0xaa7f,	// (0x00021290) popup_toobar_trans_pane_cp01

0xb02b,	// (0x0002183c) popup_image_details_window_ParamLimits

0xb02b,	// (0x0002183c) popup_image_details_window

0x2e14,	// (0x00019625) popup_image_focus_window

0x73f5,	// (0x0001dc06) camera2_autofocus_pane_ParamLimits

0x73f5,	// (0x0001dc06) camera2_autofocus_pane

0x03bf,	// (0x00016bd0) bg_popup_sub_pane_cp06

0x342c,	// (0x00019c3d) popup_image_focus_window_g1

0x3434,	// (0x00019c45) popup_image_focus_window_g2

0x343c,	// (0x00019c4d) popup_image_focus_window_g3

0x3444,	// (0x00019c55) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00025f32) popup_image_focus_window_g

0x344c,	// (0x00019c5d) popup_image_focus_window_t1

0x345a,	// (0x00019c6b) popup_image_focus_window_t2

0x346a,	// (0x00019c7b) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00025f3b) popup_image_focus_window_t

0x3478,	// (0x00019c89) camera2_autofocus_pane_g1

0x042f,	// (0x00016c40) bg_tb_trans_pane_cp01

0x3486,	// (0x00019c97) popup_image_details_window_g1

0x3499,	// (0x00019caa) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00025f4d) popup_image_details_window_g

0x34c2,	// (0x00019cd3) popup_image_details_window_t1

0x34d4,	// (0x00019ce5) popup_image_details_window_t2

0x34ed,	// (0x00019cfe) popup_image_details_window_t3

0x3501,	// (0x00019d12) popup_image_details_window_t4

0x351c,	// (0x00019d2d) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00025f54) popup_image_details_window_t

0x0b76,	// (0x00017387) bg_calc_paper_pane_ParamLimits

0x701d,	// (0x0001d82e) grid_highlight_pane_cp013

0x7027,	// (0x0001d838) list_calc_pane_ParamLimits

0x7039,	// (0x0001d84a) scroll_pane_cp024

0x0ba4,	// (0x000173b5) bg_calc_display_pane_ParamLimits

0x7041,	// (0x0001d852) calc_display_pane_t1_ParamLimits

0x7056,	// (0x0001d867) calc_display_pane_t2_ParamLimits

0x706b,	// (0x0001d87c) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00025984) calc_display_pane_t_ParamLimits

0x70d4,	// (0x0001d8e5) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000259a1) cell_calc_pane_g

0x70dd,	// (0x0001d8ee) cell_calc_pane_t1

0x0c27,	// (0x00017438) grid_highlight_pane_cp02_ParamLimits

0x0c3d,	// (0x0001744e) toolbar_button_pane_cp01_ParamLimits

0x0c3d,	// (0x0001744e) toolbar_button_pane_cp01

0x1cd0,	// (0x000184e1) temp_image_control_pane_ParamLimits

0x1cd0,	// (0x000184e1) temp_image_control_pane

0x042f,	// (0x00016c40) main_mp3_pane

0x3536,	// (0x00019d47) temp_image_control_pane_g1_ParamLimits

0x3536,	// (0x00019d47) temp_image_control_pane_g1

0x3544,	// (0x00019d55) temp_image_control_pane_g2_ParamLimits

0x3544,	// (0x00019d55) temp_image_control_pane_g2

0x3556,	// (0x00019d67) temp_image_control_pane_g3_ParamLimits

0x3556,	// (0x00019d67) temp_image_control_pane_g3

0xb6ae,	// (0x00021ebf) temp_image_control_pane_g4_ParamLimits

0xb6ae,	// (0x00021ebf) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00025f5f) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00025f5f) temp_image_control_pane_g

0x3536,	// (0x00019d47) main_mp3_pane_g1

0xb6bf,	// (0x00021ed0) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00025f68) main_mp3_pane_g

0x3599,	// (0x00019daa) main_mp3_pane_t1

0x0e1f,	// (0x00017630) main_camera_pane_g8_ParamLimits

0x0e1f,	// (0x00017630) main_camera_pane_g8

0x8f20,	// (0x0001f731) main_video_pane_g7_ParamLimits

0x8f20,	// (0x0001f731) main_video_pane_g7

0x753d,	// (0x0001dd4e) main_camera2_pane_t7_ParamLimits

0x753d,	// (0x0001dd4e) main_camera2_pane_t7

0x1005,	// (0x00017816) scroll_pane_cp025_ParamLimits

0x1005,	// (0x00017816) scroll_pane_cp025

0x1019,	// (0x0001782a) scroll_pane_cp026_ParamLimits

0x1019,	// (0x0001782a) scroll_pane_cp026

0x1028,	// (0x00017839) wml_content_pane_ParamLimits

0x03bf,	// (0x00016bd0) main_touch_calib_pane

0xb763,	// (0x00021f74) main_touch_calib_pane_g1

0xb76f,	// (0x00021f80) main_touch_calib_pane_g2

0xb77b,	// (0x00021f8c) main_touch_calib_pane_g3

0xb787,	// (0x00021f98) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00025f86) main_touch_calib_pane_g

0xb793,	// (0x00021fa4) main_touch_calib_pane_t1

0xb7aa,	// (0x00021fbb) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00025f8f) main_touch_calib_pane_t

0x1878,	// (0x00018089) mup_progress_pane_cp02

0x1897,	// (0x000180a8) navi_pane_g1

0x18f9,	// (0x0001810a) navi_pane_mp_t3

0x042f,	// (0x00016c40) main_mp3_pane_ParamLimits

0xb0ec,	// (0x000218fd) navi_pane_ParamLimits

0x3536,	// (0x00019d47) main_mp3_pane_g1_ParamLimits

0xb6bf,	// (0x00021ed0) main_mp3_pane_g2_ParamLimits

0xb6cb,	// (0x00021edc) main_mp3_pane_g3_ParamLimits

0xb6cb,	// (0x00021edc) main_mp3_pane_g3

0xb6d7,	// (0x00021ee8) main_mp3_pane_g4_ParamLimits

0xb6d7,	// (0x00021ee8) main_mp3_pane_g4

0x3566,	// (0x00019d77) main_mp3_pane_g5_ParamLimits

0x3566,	// (0x00019d77) main_mp3_pane_g5

0x3574,	// (0x00019d85) main_mp3_pane_g6_ParamLimits

0x3574,	// (0x00019d85) main_mp3_pane_g6

0x3581,	// (0x00019d92) main_mp3_pane_g7_ParamLimits

0x3581,	// (0x00019d92) main_mp3_pane_g7

0x358d,	// (0x00019d9e) main_mp3_pane_g8_ParamLimits

0x358d,	// (0x00019d9e) main_mp3_pane_g8

0xf757,	// (0x00025f68) main_mp3_pane_g_ParamLimits

0xb6e3,	// (0x00021ef4) main_mp3_pane_t2

0xb6f3,	// (0x00021f04) main_mp3_pane_t3

0x35a7,	// (0x00019db8) main_mp3_pane_t4

0x35b5,	// (0x00019dc6) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00025f79) main_mp3_pane_t

0x35c3,	// (0x00019dd4) mup_progress_pane_cp01

0x03dd,	// (0x00016bee) aid_zoom_text_secondary2

0x337d,	// (0x00019b8e) list_cale_ev2_pane

0x3385,	// (0x00019b96) scroll_pane_cp023_ParamLimits

0xb7ff,	// (0x00022010) field_cale_ev2_pane_ParamLimits

0xb7ff,	// (0x00022010) field_cale_ev2_pane

0xb828,	// (0x00022039) field_cale_ev2_pane_g1_ParamLimits

0xb828,	// (0x00022039) field_cale_ev2_pane_g1

0xb834,	// (0x00022045) field_cale_ev2_pane_g2_ParamLimits

0xb834,	// (0x00022045) field_cale_ev2_pane_g2

0xb84c,	// (0x0002205d) field_cale_ev2_pane_g3_ParamLimits

0xb84c,	// (0x0002205d) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00025f9a) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00025f9a) field_cale_ev2_pane_g

0xb864,	// (0x00022075) field_cale_ev2_pane_t1_ParamLimits

0xb864,	// (0x00022075) field_cale_ev2_pane_t1

0xb87b,	// (0x0002208c) field_cale_ev2_pane_t2_ParamLimits

0xb87b,	// (0x0002208c) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00025fa3) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00025fa3) field_cale_ev2_pane_t

0xa907,	// (0x00021118) main_postcard_pane_g5_ParamLimits

0xa907,	// (0x00021118) main_postcard_pane_g5

0xa915,	// (0x00021126) main_postcard_pane_g6_ParamLimits

0xa915,	// (0x00021126) main_postcard_pane_g6

0x8d68,	// (0x0001f579) camera2_autofocus_pane_cp_ParamLimits

0x8d68,	// (0x0001f579) camera2_autofocus_pane_cp

0x042f,	// (0x00016c40) main_mup3_pane

0xb8b0,	// (0x000220c1) main_mup3_pane_g1_ParamLimits

0xb8b0,	// (0x000220c1) main_mup3_pane_g1

0xb8d1,	// (0x000220e2) main_mup3_pane_g2_ParamLimits

0xb8d1,	// (0x000220e2) main_mup3_pane_g2

0xb949,	// (0x0002215a) main_mup3_pane_g3_ParamLimits

0xb949,	// (0x0002215a) main_mup3_pane_g3

0xb988,	// (0x00022199) main_mup3_pane_g4_ParamLimits

0xb988,	// (0x00022199) main_mup3_pane_g4

0xb9c7,	// (0x000221d8) main_mup3_pane_g5_ParamLimits

0xb9c7,	// (0x000221d8) main_mup3_pane_g5

0xba06,	// (0x00022217) main_mup3_pane_g6_ParamLimits

0xba06,	// (0x00022217) main_mup3_pane_g6

0x35d7,	// (0x00019de8) main_mup3_pane_g7_ParamLimits

0x35d7,	// (0x00019de8) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00025fb3) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00025fb3) main_mup3_pane_g

0xba78,	// (0x00022289) main_mup3_pane_t1_ParamLimits

0xba78,	// (0x00022289) main_mup3_pane_t1

0xbae3,	// (0x000222f4) main_mup3_pane_t2_ParamLimits

0xbae3,	// (0x000222f4) main_mup3_pane_t2

0xbba8,	// (0x000223b9) main_mup3_pane_t4_ParamLimits

0xbba8,	// (0x000223b9) main_mup3_pane_t4

0xbbf6,	// (0x00022407) main_mup3_pane_t5_ParamLimits

0xbbf6,	// (0x00022407) main_mup3_pane_t5

0xbc9e,	// (0x000224af) main_mup3_pane_t6_ParamLimits

0xbc9e,	// (0x000224af) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00025fc4) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00025fc4) main_mup3_pane_t

0xbd46,	// (0x00022557) mup3_progress_pane_ParamLimits

0xbd46,	// (0x00022557) mup3_progress_pane

0xbdb1,	// (0x000225c2) popup_mup3_control_window_ParamLimits

0xbdb1,	// (0x000225c2) popup_mup3_control_window

0x35e5,	// (0x00019df6) popup_mup3_text_window

0xbdca,	// (0x000225db) mup3_progress_pane_t1

0xbde1,	// (0x000225f2) mup3_progress_pane_t2

0x35ed,	// (0x00019dfe) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00025fd1) mup3_progress_pane_t

0x3604,	// (0x00019e15) mup_progress_pane_cp03

0x03bf,	// (0x00016bd0) bg_tb_trans_pane_cp04

0xbdf8,	// (0x00022609) mup3_volume_pane

0xbe00,	// (0x00022611) popup_mup3_control_window_g1

0xbe09,	// (0x0002261a) mup3_volume_pane_g1

0xbe12,	// (0x00022623) mup3_volume_pane_g2

0xbe1b,	// (0x0002262c) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00025fd8) mup3_volume_pane_g

0x03bf,	// (0x00016bd0) bg_tb_trans_pane_cp03

0x3614,	// (0x00019e25) popup_mup3_text_window_g1

0x361c,	// (0x00019e2d) popup_mup3_text_window_t1

0x0bfe,	// (0x0001740f) list_calc_item_pane_g1_ParamLimits

0x3009,	// (0x0001981a) mup_volume_pane_cp_g1

0xb7c1,	// (0x00021fd2) main_touch_calib_pane_t3

0xb7d5,	// (0x00021fe6) main_touch_calib_pane_t4

0xb7e9,	// (0x00021ffa) main_touch_calib_pane_t5

0x03c9,	// (0x00016bda) aid_cell_size_toolbar2

0x03d1,	// (0x00016be2) aid_popup3_width_pane

0x03dd,	// (0x00016bee) aid_zoom_text_msg_primary

0x7288,	// (0x0001da99) vorec_t7

0x0bc2,	// (0x000173d3) bg_calc_paper_pane_g1_ParamLimits

0x0bda,	// (0x000173eb) bg_calc_paper_pane_g2_ParamLimits

0x0bce,	// (0x000173df) bg_calc_paper_pane_g3_ParamLimits

0x0bf2,	// (0x00017403) bg_calc_paper_pane_g4_ParamLimits

0x0be6,	// (0x000173f7) bg_calc_paper_pane_g5_ParamLimits

0x88e8,	// (0x0001f0f9) bg_calc_paper_pane_g6_ParamLimits

0x88f9,	// (0x0001f10a) bg_calc_paper_pane_g7_ParamLimits

0x890a,	// (0x0001f11b) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0002598b) bg_calc_paper_pane_g_ParamLimits

0x891b,	// (0x0001f12c) calc_bg_paper_pane_g9_ParamLimits

0x8e4f,	// (0x0001f660) image_qvga_pane_ParamLimits

0x8e4f,	// (0x0001f660) image_qvga_pane

0x0aab,	// (0x000172bc) bg_popup_sub_pane_cp04_ParamLimits

0x1c07,	// (0x00018418) popup_mup_playback_window_g1_ParamLimits

0x1c13,	// (0x00018424) popup_mup_playback_window_t1_ParamLimits

0x1c28,	// (0x00018439) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00025d17) popup_mup_playback_window_t_ParamLimits

0xb338,	// (0x00021b49) main_mup2_pane_g3_ParamLimits

0xb338,	// (0x00021b49) main_mup2_pane_g3

0x915e,	// (0x0001f96f) popup_toolbar_window_cp04

0x200a,	// (0x0001881b) popup_call2_audio_second_window_g3_ParamLimits

0x200a,	// (0x0001881b) popup_call2_audio_second_window_g3

0x2414,	// (0x00018c25) popup_call2_audio_first_window_g4_ParamLimits

0x2414,	// (0x00018c25) popup_call2_audio_first_window_g4

0x2a93,	// (0x000192a4) popup_call2_audio_in_window_g4_ParamLimits

0x2a93,	// (0x000192a4) popup_call2_audio_in_window_g4

0xaa1a,	// (0x0002122b) aid_area_sk_bg_cut_ParamLimits

0xaa1a,	// (0x0002122b) aid_area_sk_bg_cut

0x1c3d,	// (0x0001844e) aid_area_sk_bg_cut_2_ParamLimits

0x1c3d,	// (0x0001844e) aid_area_sk_bg_cut_2

0xb654,	// (0x00021e65) aid_placing_details_win

0xb65c,	// (0x00021e6d) aid_placing_details_win_2

0x3478,	// (0x00019c89) camera2_autofocus_pane_g1_ParamLimits

0x85ce,	// (0x0001eddf) popup_fixed_preview_cale_window_ParamLimits

0x85ce,	// (0x0001eddf) popup_fixed_preview_cale_window

0x1963,	// (0x00018174) navi_slider_pane_g3

0x195a,	// (0x0001816b) navi_slider_pane_g4

0x1951,	// (0x00018162) navi_slider_pane_g5

0x1963,	// (0x00018174) navi_slider_pane_g6

0x7364,	// (0x0001db75) navi_slider_pane_g7

0x1a8d,	// (0x0001829e) mup_scale_pane_g3

0x1a96,	// (0x000182a7) mup_scale_pane_g4

0x1a9f,	// (0x000182b0) mup_scale_pane_g5

0xa793,	// (0x00020fa4) mup_scale_pane_g6

0xa79c,	// (0x00020fad) mup_scale_pane_g7

0x1963,	// (0x00018174) cams2_slider_pane_g3

0x30be,	// (0x000198cf) cams2_slider_pane_g4

0x76af,	// (0x0001dec0) cams2_slider_pane_g5

0x1963,	// (0x00018174) cams2_slider_pane_g6

0x76b7,	// (0x0001dec8) cams2_slider_pane_g7

0x32fa,	// (0x00019b0b) camera2_autofocus_pane_cp_g1

0x362a,	// (0x00019e3b) bg_popup_preview_window_pane_cp02_ParamLimits

0x362a,	// (0x00019e3b) bg_popup_preview_window_pane_cp02

0x3636,	// (0x00019e47) list_fp_cale_pane_ParamLimits

0x3636,	// (0x00019e47) list_fp_cale_pane

0x3642,	// (0x00019e53) popup_fixed_preview_cale_window_t1_ParamLimits

0x3642,	// (0x00019e53) popup_fixed_preview_cale_window_t1

0xbe24,	// (0x00022635) popup_fixed_preview_cale_window_t2_ParamLimits

0xbe24,	// (0x00022635) popup_fixed_preview_cale_window_t2

0xbe39,	// (0x0002264a) popup_fixed_preview_cale_window_t3_ParamLimits

0xbe39,	// (0x0002264a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00025fdf) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00025fdf) popup_fixed_preview_cale_window_t

0xbe4e,	// (0x0002265f) list_single_fp_cale_pane_ParamLimits

0xbe4e,	// (0x0002265f) list_single_fp_cale_pane

0x3660,	// (0x00019e71) list_single_fp_cale_pane_g1_ParamLimits

0x3660,	// (0x00019e71) list_single_fp_cale_pane_g1

0x366c,	// (0x00019e7d) list_single_fp_cale_pane_g2_ParamLimits

0x366c,	// (0x00019e7d) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00025fe6) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00025fe6) list_single_fp_cale_pane_g

0x3685,	// (0x00019e96) list_single_fp_cale_pane_t1_ParamLimits

0x3685,	// (0x00019e96) list_single_fp_cale_pane_t1

0x3697,	// (0x00019ea8) list_single_fp_cale_pane_t2_ParamLimits

0x3697,	// (0x00019ea8) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00025fed) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00025fed) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x03bf,	// (0x00016bd0) main_dialer_pane

0xbe60,	// (0x00022671) aid_cell_size_keypad

0xbe6a,	// (0x0002267b) dialer_ne_pane

0xbe74,	// (0x00022685) grid_dialer_command_1_pane

0xbe7c,	// (0x0002268d) grid_dialer_command_2_pane

0xbe84,	// (0x00022695) grid_dialer_keypad_pane

0xbe96,	// (0x000226a7) bg_popup_call_pane_cp06_ParamLimits

0xbe96,	// (0x000226a7) bg_popup_call_pane_cp06

0xbea2,	// (0x000226b3) dialer_ne_clear_pane_ParamLimits

0xbea2,	// (0x000226b3) dialer_ne_clear_pane

0x36ca,	// (0x00019edb) dialer_ne_pane_g1

0x36d2,	// (0x00019ee3) dialer_ne_pane_t1_ParamLimits

0x36d2,	// (0x00019ee3) dialer_ne_pane_t1

0xbeae,	// (0x000226bf) dialer_ne_pane_t2_ParamLimits

0xbeae,	// (0x000226bf) dialer_ne_pane_t2

0xbecb,	// (0x000226dc) dialer_ne_pane_t3_ParamLimits

0xbecb,	// (0x000226dc) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00025ff2) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00025ff2) dialer_ne_pane_t

0xbeef,	// (0x00022700) dialer_ne_pane_t3_copy1_ParamLimits

0xbeef,	// (0x00022700) dialer_ne_pane_t3_copy1

0xbf13,	// (0x00022724) cell_dialer_keypad_pane_ParamLimits

0xbf13,	// (0x00022724) cell_dialer_keypad_pane

0xbf2a,	// (0x0002273b) cell_dialer_command_1_pane_ParamLimits

0xbf2a,	// (0x0002273b) cell_dialer_command_1_pane

0xbf40,	// (0x00022751) cell_dialer_command_2_pane_ParamLimits

0xbf40,	// (0x00022751) cell_dialer_command_2_pane

0x36e4,	// (0x00019ef5) bg_button_pane_cp02_ParamLimits

0x36e4,	// (0x00019ef5) bg_button_pane_cp02

0xbf4f,	// (0x00022760) cell_dialer_keypad_pane_g1_ParamLimits

0xbf4f,	// (0x00022760) cell_dialer_keypad_pane_g1

0x36e4,	// (0x00019ef5) bg_button_pane_cp03_ParamLimits

0x36e4,	// (0x00019ef5) bg_button_pane_cp03

0xbf64,	// (0x00022775) cell_dialer_command_1_pane_g1_ParamLimits

0xbf64,	// (0x00022775) cell_dialer_command_1_pane_g1

0x36f0,	// (0x00019f01) bg_button_pane_cp04

0xbf78,	// (0x00022789) cell_dialer_command_2_pane_g1

0x1937,	// (0x00018148) bg_button_pane_cp06

0x36f8,	// (0x00019f09) dialer_ne_clear_pane_g1

0xa2a7,	// (0x00020ab8) navi_pane_g2

0xa2d5,	// (0x00020ae6) navi_pane_g3

0x0002,

0xf409,	// (0x00025c1a) navi_pane_g

0xa300,	// (0x00020b11) navi_pane_mv_g2

0xa327,	// (0x00020b38) navi_pane_mv_g5

0xa32f,	// (0x00020b40) navi_pane_mv_t1

0x0ba4,	// (0x000173b5) main_clock2_pane

0xbfa7,	// (0x000227b8) main_clock2_list_pane_ParamLimits

0xbfa7,	// (0x000227b8) main_clock2_list_pane

0xbfcf,	// (0x000227e0) main_clock2_pane_t1_ParamLimits

0xbfcf,	// (0x000227e0) main_clock2_pane_t1

0xbffd,	// (0x0002280e) main_clock2_pane_t2_ParamLimits

0xbffd,	// (0x0002280e) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00025ff9) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00025ff9) main_clock2_pane_t

0xc064,	// (0x00022875) popup_clock_analogue_window_cp03_ParamLimits

0xc064,	// (0x00022875) popup_clock_analogue_window_cp03

0xc082,	// (0x00022893) popup_clock_digital_window_cp02_ParamLimits

0xc082,	// (0x00022893) popup_clock_digital_window_cp02

0xc0ef,	// (0x00022900) main_clock2_list_single_pane_ParamLimits

0xc0ef,	// (0x00022900) main_clock2_list_single_pane

0x1937,	// (0x00018148) list_highlight_pane_cp05

0x3700,	// (0x00019f11) main_clock2_list_single_pane_t1

0x915e,	// (0x0001f96f) popup_toolbar_window_cp04_ParamLimits

0xb67e,	// (0x00021e8f) camera2_autofocus_pane_g2_ParamLimits

0xb67e,	// (0x00021e8f) camera2_autofocus_pane_g2

0xb68a,	// (0x00021e9b) camera2_autofocus_pane_g3_ParamLimits

0xb68a,	// (0x00021e9b) camera2_autofocus_pane_g3

0xb696,	// (0x00021ea7) camera2_autofocus_pane_g4_ParamLimits

0xb696,	// (0x00021ea7) camera2_autofocus_pane_g4

0xb6a2,	// (0x00021eb3) camera2_autofocus_pane_g5_ParamLimits

0xb6a2,	// (0x00021eb3) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00025f42) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00025f42) camera2_autofocus_pane_g

0xb890,	// (0x000220a1) camera2_autofocus_pane_cp_g2

0xb898,	// (0x000220a9) camera2_autofocus_pane_cp_g3

0xb8a0,	// (0x000220b1) camera2_autofocus_pane_cp_g4

0xb8a8,	// (0x000220b9) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00025fa8) camera2_autofocus_pane_cp_g

0xbe8e,	// (0x0002269f) popup_dialer_spcha_window

0x03bf,	// (0x00016bd0) bg_popup_sub_pane_cp07

0x370e,	// (0x00019f1f) list_spcha_pane

0x3716,	// (0x00019f27) list_single_spcha_pane_ParamLimits

0x3716,	// (0x00019f27) list_single_spcha_pane

0x03bf,	// (0x00016bd0) list_highlight_pane_cp06

0x3727,	// (0x00019f38) list_single_spcha_pane_t1

0x283d,	// (0x0001904e) popup_call2_audio_out_window_g4_ParamLimits

0x283d,	// (0x0001904e) popup_call2_audio_out_window_g4

0x03bf,	// (0x00016bd0) main_imed2_pane

0x2e1c,	// (0x0001962d) popup_imed_adjust2_window

0xb039,	// (0x0002184a) popup_imed_trans_window_ParamLimits

0xb039,	// (0x0002184a) popup_imed_trans_window

0x3138,	// (0x00019949) popup_blid_sat_info2_window_t1

0x3146,	// (0x00019957) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00025ed7) popup_blid_sat_info2_window_t

0xc121,	// (0x00022932) aid_size_cell_colour_35

0xc13b,	// (0x0002294c) aid_size_cell_colour_112

0xc152,	// (0x00022963) aid_size_cell_effect

0x042f,	// (0x00016c40) bg_tb_trans_pane_cp02

0x1439,	// (0x00017c4a) heading_imed_pane

0xc16c,	// (0x0002297d) listscroll_imed_pane

0x3735,	// (0x00019f46) heading_imed_pane_g1

0x373d,	// (0x00019f4e) heading_imed_pane_t1

0x374b,	// (0x00019f5c) grid_imed_colour_35_pane_ParamLimits

0x374b,	// (0x00019f5c) grid_imed_colour_35_pane

0xc178,	// (0x00022989) grid_imed_effect_pane

0x3762,	// (0x00019f73) list_imed_aspect_pane

0xc188,	// (0x00022999) scroll_pane_cp027_ParamLimits

0xc188,	// (0x00022999) scroll_pane_cp027

0xc194,	// (0x000229a5) cell_imed_effect_pane_ParamLimits

0xc194,	// (0x000229a5) cell_imed_effect_pane

0x376a,	// (0x00019f7b) cell_imed_colour_pane_ParamLimits

0x376a,	// (0x00019f7b) cell_imed_colour_pane

0x37ac,	// (0x00019fbd) cell_imed_colour_pane_g1_ParamLimits

0x37ac,	// (0x00019fbd) cell_imed_colour_pane_g1

0x37bd,	// (0x00019fce) hgihlgiht_grid_pane_cp016_ParamLimits

0x37bd,	// (0x00019fce) hgihlgiht_grid_pane_cp016

0xc1ac,	// (0x000229bd) cell_imed_effect_pane_g1

0xc1b4,	// (0x000229c5) grid_highlight_pane_cp017

0x37ce,	// (0x00019fdf) list_imed_single_pane_ParamLimits

0x37ce,	// (0x00019fdf) list_imed_single_pane

0x03bf,	// (0x00016bd0) list_highlight_pane_cp07

0x37e3,	// (0x00019ff4) list_imed_aspect_pane_comp1_t1

0x2df4,	// (0x00019605) bg_tb_trans_pane_cp05

0x3805,	// (0x0001a016) popup_imed_adjust2_window_g1

0x382c,	// (0x0001a03d) popup_imed_adjust2_window_t1

0x3844,	// (0x0001a055) slider_imed_adjust_pane

0x3858,	// (0x0001a069) slider_imed_adjust_pane_g1

0x3868,	// (0x0001a079) slider_imed_adjust_pane_g2

0x3878,	// (0x0001a089) slider_imed_adjust_pane_g3

0x3889,	// (0x0001a09a) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00026016) slider_imed_adjust_pane_g

0xc1bd,	// (0x000229ce) aid_size_cell_clipart2

0xc1c9,	// (0x000229da) grid_imed_clipart_pane

0x389a,	// (0x0001a0ab) scroll_pane_cp031

0xc1d3,	// (0x000229e4) cell_imed_clipart_pane_ParamLimits

0xc1d3,	// (0x000229e4) cell_imed_clipart_pane

0xc1f5,	// (0x00022a06) cell_imed_clipart_pane_g1

0x03bf,	// (0x00016bd0) grid_highlight_pane_cp014

0xbfb3,	// (0x000227c4) main_clock2_pane_g1_ParamLimits

0xbfb3,	// (0x000227c4) main_clock2_pane_g1

0xc09a,	// (0x000228ab) aid_call2_pane_cp10

0xc0ac,	// (0x000228bd) aid_call_pane_cp10

0x186c,	// (0x0001807d) popup_clock_analogue_window_cp10_g1

0x186c,	// (0x0001807d) popup_clock_analogue_window_cp10_g2

0xc0be,	// (0x000228cf) popup_clock_analogue_window_cp10_g3

0xc0be,	// (0x000228cf) popup_clock_analogue_window_cp10_g4

0x186c,	// (0x0001807d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00026004) popup_clock_analogue_window_cp10_g

0xc0d0,	// (0x000228e1) popup_clock_analogue_window_cp10_t1

0x76c0,	// (0x0001ded1) clock_digital_number_pane_cp10_ParamLimits

0x76c0,	// (0x0001ded1) clock_digital_number_pane_cp10

0x76d8,	// (0x0001dee9) clock_digital_number_pane_cp11_ParamLimits

0x76d8,	// (0x0001dee9) clock_digital_number_pane_cp11

0x76f0,	// (0x0001df01) clock_digital_number_pane_cp12_ParamLimits

0x76f0,	// (0x0001df01) clock_digital_number_pane_cp12

0x7708,	// (0x0001df19) clock_digital_number_pane_cp13_ParamLimits

0x7708,	// (0x0001df19) clock_digital_number_pane_cp13

0x7720,	// (0x0001df31) clock_digital_separator_pane_cp10_ParamLimits

0x7720,	// (0x0001df31) clock_digital_separator_pane_cp10

0xc101,	// (0x00022912) popup_clock_digital_window_cp02_t1_ParamLimits

0xc101,	// (0x00022912) popup_clock_digital_window_cp02_t1

0x0aa3,	// (0x000172b4) clock_digital_number_pane_cp10_g1

0x0aa3,	// (0x000172b4) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0002601f) clock_digital_number_pane_cp10_g

0x0aa3,	// (0x000172b4) clock_digital_separator_pane_cp10_g1

0x0aa3,	// (0x000172b4) clock_digital_separator_pane_g2_cp10

0x1907,	// (0x00018118) navi_pane_vded_g4

0x1910,	// (0x00018121) navi_pane_vded_g5

0x1919,	// (0x0001812a) navi_pane_vded_t1

0x03bf,	// (0x00016bd0) main_vded_pane

0xc1fe,	// (0x00022a0f) main_vded_pane_g1

0xc20a,	// (0x00022a1b) main_vded_pane_g2

0xc214,	// (0x00022a25) main_vded_pane_g3

0x0002,

0xf813,	// (0x00026024) main_vded_pane_g

0xc21e,	// (0x00022a2f) main_vded_pane_t1

0xc22c,	// (0x00022a3d) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0002602b) main_vded_pane_t

0xc23a,	// (0x00022a4b) vded_slider_pane

0xc244,	// (0x00022a55) vded_video_pane

0x38a2,	// (0x0001a0b3) vded_video_pane_g1

0xc24e,	// (0x00022a5f) vded_video_pane_g2

0x32fa,	// (0x00019b0b) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00026030) vded_video_pane_g

0x38ac,	// (0x0001a0bd) vded_slider_pane_g1

0x3009,	// (0x0001981a) vded_slider_pane_g2

0x38b5,	// (0x0001a0c6) vded_slider_pane_g3

0x38be,	// (0x0001a0cf) vded_slider_pane_g4

0x38c7,	// (0x0001a0d8) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00026037) vded_slider_pane_g

0xbda3,	// (0x000225b4) mup3_rocker_pane_ParamLimits

0xbda3,	// (0x000225b4) mup3_rocker_pane

0xc257,	// (0x00022a68) mup3_control_keys_pane_g1

0xc25f,	// (0x00022a70) mup3_control_keys_pane_g2

0xc267,	// (0x00022a78) mup3_control_keys_pane_g3

0xc26f,	// (0x00022a80) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00026042) mup3_control_keys_pane_g

0x85ec,	// (0x0001edfd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x85ec,	// (0x0001edfd) popup_toolbar2_fixed_window_cp01

0xbdbd,	// (0x000225ce) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbdbd,	// (0x000225ce) popup_toolbar2_fixed_window_cp02

0x217c,	// (0x0001898d) popup_call2_audio_second_window_t4_ParamLimits

0x217c,	// (0x0001898d) popup_call2_audio_second_window_t4

0x26aa,	// (0x00018ebb) popup_call2_audio_first_window_t6_ParamLimits

0x26aa,	// (0x00018ebb) popup_call2_audio_first_window_t6

0x2940,	// (0x00019151) popup_call2_audio_out_window_t6_ParamLimits

0x2940,	// (0x00019151) popup_call2_audio_out_window_t6

0x03bf,	// (0x00016bd0) main_vitu_pane

0xc27f,	// (0x00022a90) aid_size_cell_itu_ParamLimits

0xc27f,	// (0x00022a90) aid_size_cell_itu

0x39a1,	// (0x0001a1b2) bg_popup_window_pane_cp08_ParamLimits

0x39a1,	// (0x0001a1b2) bg_popup_window_pane_cp08

0xc28d,	// (0x00022a9e) field_vitu_entry_pane_ParamLimits

0xc28d,	// (0x00022a9e) field_vitu_entry_pane

0xc29c,	// (0x00022aad) grid_vitu_function_pane_ParamLimits

0xc29c,	// (0x00022aad) grid_vitu_function_pane

0xc2ac,	// (0x00022abd) grid_vitu_itu_pane_ParamLimits

0xc2ac,	// (0x00022abd) grid_vitu_itu_pane

0xc2bc,	// (0x00022acd) cell_vitu_itu_pane_ParamLimits

0xc2bc,	// (0x00022acd) cell_vitu_itu_pane

0xc2d1,	// (0x00022ae2) cell_vitu_function_pane_ParamLimits

0xc2d1,	// (0x00022ae2) cell_vitu_function_pane

0x042f,	// (0x00016c40) bg_popup_sub_pane_cp08_ParamLimits

0x042f,	// (0x00016c40) bg_popup_sub_pane_cp08

0xc2e3,	// (0x00022af4) field_vitu_entry_pane_t1_ParamLimits

0xc2e3,	// (0x00022af4) field_vitu_entry_pane_t1

0x38e8,	// (0x0001a0f9) field_vitu_entry_pane_t2_ParamLimits

0x38e8,	// (0x0001a0f9) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00026050) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00026050) field_vitu_entry_pane_t

0x3905,	// (0x0001a116) bg_button_pane_cp05_ParamLimits

0x3905,	// (0x0001a116) bg_button_pane_cp05

0xc2fe,	// (0x00022b0f) cell_vitu_itu_pane_g1

0xc316,	// (0x00022b27) cell_vitu_itu_pane_t1_ParamLimits

0xc316,	// (0x00022b27) cell_vitu_itu_pane_t1

0xc328,	// (0x00022b39) cell_vitu_itu_pane_t2_ParamLimits

0xc328,	// (0x00022b39) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00026055) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00026055) cell_vitu_itu_pane_t

0x3913,	// (0x0001a124) bg_button_pane_cp07

0xc35d,	// (0x00022b6e) cell_vitu_function_pane_g1

0x7015,	// (0x0001d826) main_calc_pane_g1

0x83f5,	// (0x0001ec06) aid_visual_content_pane

0x03bf,	// (0x00016bd0) main_vradio_pane

0xc366,	// (0x00022b77) main_vradio_pane_g1_ParamLimits

0xc366,	// (0x00022b77) main_vradio_pane_g1

0x391d,	// (0x0001a12e) main_vradio_pane_g2_ParamLimits

0x391d,	// (0x0001a12e) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0002605c) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0002605c) main_vradio_pane_g

0xc376,	// (0x00022b87) main_vradio_pane_t1_ParamLimits

0xc376,	// (0x00022b87) main_vradio_pane_t1

0xc388,	// (0x00022b99) main_vradio_pane_t2_ParamLimits

0xc388,	// (0x00022b99) main_vradio_pane_t2

0x392a,	// (0x0001a13b) main_vradio_pane_t3_ParamLimits

0x392a,	// (0x0001a13b) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00026061) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00026061) main_vradio_pane_t

0xc39a,	// (0x00022bab) vradio_rocker_control_pane_ParamLimits

0xc39a,	// (0x00022bab) vradio_rocker_control_pane

0xc3a6,	// (0x00022bb7) vradio_station_info_pane_ParamLimits

0xc3a6,	// (0x00022bb7) vradio_station_info_pane

0x393e,	// (0x0001a14f) vradio_frequency_info_pane_ParamLimits

0x393e,	// (0x0001a14f) vradio_frequency_info_pane

0x32fa,	// (0x00019b0b) vradio_station_info_pane_g1

0x394d,	// (0x0001a15e) vradio_station_info_pane_t1_ParamLimits

0x394d,	// (0x0001a15e) vradio_station_info_pane_t1

0x396f,	// (0x0001a180) vradio_station_info_pane_t2_ParamLimits

0x396f,	// (0x0001a180) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00026068) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00026068) vradio_station_info_pane_t

0x3981,	// (0x0001a192) vradio_tuning_pane

0x3989,	// (0x0001a19a) vradio_rocker_control_pane_g1

0x3991,	// (0x0001a1a2) vradio_rocker_control_pane_g2

0x3999,	// (0x0001a1aa) vradio_rocker_control_pane_g3

0x39af,	// (0x0001a1c0) vradio_rocker_control_pane_g4

0x39b7,	// (0x0001a1c8) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0002606d) vradio_rocker_control_pane_g

0xc3b5,	// (0x00022bc6) vradio_frequency_info_pane_g1

0x39bf,	// (0x0001a1d0) vradio_frequency_info_pane_t1_ParamLimits

0x39bf,	// (0x0001a1d0) vradio_frequency_info_pane_t1

0xc3bf,	// (0x00022bd0) vradio_tuning_pane_g1

0xc3c8,	// (0x00022bd9) vradio_tuning_pane_t1

0x03ed,	// (0x00016bfe) area_side_right_pane_ParamLimits

0x03ed,	// (0x00016bfe) area_side_right_pane

0x2dbb,	// (0x000195cc) status_small_pane_g1

0x2dc3,	// (0x000195d4) status_small_pane_g2

0x2dcc,	// (0x000195dd) status_small_pane_g3

0x2dd5,	// (0x000195e6) status_small_pane_g4

0x0003,

0xf61c,	// (0x00025e2d) status_small_pane_g

0x2dde,	// (0x000195ef) status_small_pane_t1

0x03bf,	// (0x00016bd0) main_video3_pane

0x39d3,	// (0x0001a1e4) cams_zoom_vslider_pane

0x39db,	// (0x0001a1ec) image3_wide_pane_ParamLimits

0x39db,	// (0x0001a1ec) image3_wide_pane

0x39f5,	// (0x0001a206) image3_wide_small_pane

0x3a01,	// (0x0001a212) main_video3_pane_g1_ParamLimits

0x3a01,	// (0x0001a212) main_video3_pane_g1

0x3a1d,	// (0x0001a22e) main_video3_pane_g2_ParamLimits

0x3a1d,	// (0x0001a22e) main_video3_pane_g2

0x0001,

0xf867,	// (0x00026078) main_video3_pane_g_ParamLimits

0xf867,	// (0x00026078) main_video3_pane_g

0x3a39,	// (0x0001a24a) main_video3_pane_t1_ParamLimits

0x3a39,	// (0x0001a24a) main_video3_pane_t1

0x3a64,	// (0x0001a275) main_video3_pane_t2_ParamLimits

0x3a64,	// (0x0001a275) main_video3_pane_t2

0x3a8f,	// (0x0001a2a0) main_video3_pane_t3_ParamLimits

0x3a8f,	// (0x0001a2a0) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0002607d) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0002607d) main_video3_pane_t

0x3abc,	// (0x0001a2cd) cams_zoom_vslider_pane_g1

0x3ac5,	// (0x0001a2d6) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00026084) cams_zoom_vslider_pane_g

0x3acd,	// (0x0001a2de) small_slider_vertical_pane

0x32fa,	// (0x00019b0b) small_slider_vertical_pane_g1

0x32fa,	// (0x00019b0b) small_slider_vertical_pane_g2

0x3ad5,	// (0x0001a2e6) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00026089) small_slider_vertical_pane_g

0x03bf,	// (0x00016bd0) main_hwr_training_pane

0x3ade,	// (0x0001a2ef) hwr_training_instruct_pane_ParamLimits

0x3ade,	// (0x0001a2ef) hwr_training_instruct_pane

0xc3d7,	// (0x00022be8) hwr_training_navi_pane_ParamLimits

0xc3d7,	// (0x00022be8) hwr_training_navi_pane

0xc3f1,	// (0x00022c02) hwr_training_write_pane_ParamLimits

0xc3f1,	// (0x00022c02) hwr_training_write_pane

0x03bf,	// (0x00016bd0) bg_frame_shadow_pane

0x3b15,	// (0x0001a326) hwr_training_write_pane_g1

0x3b1d,	// (0x0001a32e) hwr_training_write_pane_g2

0x3b25,	// (0x0001a336) hwr_training_write_pane_g3

0x3b2d,	// (0x0001a33e) hwr_training_write_pane_g4

0x3b35,	// (0x0001a346) hwr_training_write_pane_g5

0x3b3d,	// (0x0001a34e) hwr_training_write_pane_g6

0x3b45,	// (0x0001a356) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00026090) hwr_training_write_pane_g

0x7738,	// (0x0001df49) hwr_training_navi_pane_g1_ParamLimits

0x7738,	// (0x0001df49) hwr_training_navi_pane_g1

0x774a,	// (0x0001df5b) hwr_training_navi_pane_g2_ParamLimits

0x774a,	// (0x0001df5b) hwr_training_navi_pane_g2

0x775c,	// (0x0001df6d) hwr_training_navi_pane_g3_ParamLimits

0x775c,	// (0x0001df6d) hwr_training_navi_pane_g3

0x776c,	// (0x0001df7d) hwr_training_navi_pane_g4_ParamLimits

0x776c,	// (0x0001df7d) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0002609f) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0002609f) hwr_training_navi_pane_g

0x7786,	// (0x0001df97) hwr_training_navi_pane_t1

0xc429,	// (0x00022c3a) list_single_hwr_training_instruct_pane_ParamLimits

0xc429,	// (0x00022c3a) list_single_hwr_training_instruct_pane

0x3b9c,	// (0x0001a3ad) list_single_hwr_training_instruct_pane_t1

0x323a,	// (0x00019a4b) bg_frame_shadow_pane_g1

0x3bab,	// (0x0001a3bc) bg_frame_shadow_pane_g2

0x3bb3,	// (0x0001a3c4) bg_frame_shadow_pane_g3

0x3bbb,	// (0x0001a3cc) bg_frame_shadow_pane_g4

0x3bc3,	// (0x0001a3d4) bg_frame_shadow_pane_g5

0x3bcb,	// (0x0001a3dc) bg_frame_shadow_pane_g6

0x3bd3,	// (0x0001a3e4) bg_frame_shadow_pane_g7

0x0c81,	// (0x00017492) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000260aa) bg_frame_shadow_pane_g

0x03bf,	// (0x00016bd0) main_video_tele_dialer_pane

0x7794,	// (0x0001dfa5) aid_size_cell_video_keypad_ParamLimits

0x7794,	// (0x0001dfa5) aid_size_cell_video_keypad

0x77a4,	// (0x0001dfb5) grid_video_dialer_keypad_pane_ParamLimits

0x77a4,	// (0x0001dfb5) grid_video_dialer_keypad_pane

0x77b2,	// (0x0001dfc3) video_down_pane_cp_ParamLimits

0x77b2,	// (0x0001dfc3) video_down_pane_cp

0x77be,	// (0x0001dfcf) cell_video_dialer_keypad_pane_ParamLimits

0x77be,	// (0x0001dfcf) cell_video_dialer_keypad_pane

0x3bf7,	// (0x0001a408) bg_button_pane_cp08_ParamLimits

0x3bf7,	// (0x0001a408) bg_button_pane_cp08

0xc472,	// (0x00022c83) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc472,	// (0x00022c83) cell_video_dialer_keypad_pane_g1

0xbd97,	// (0x000225a8) mup3_rocker2_pane_ParamLimits

0xbd97,	// (0x000225a8) mup3_rocker2_pane

0x32fa,	// (0x00019b0b) mup3_rocker2_pane_g1

0xafc3,	// (0x000217d4) main_dialer2_pane

0x03bf,	// (0x00016bd0) main_mp4_pane

0x77db,	// (0x0001dfec) main_mp4_pane_g1_ParamLimits

0x77db,	// (0x0001dfec) main_mp4_pane_g1

0x77e9,	// (0x0001dffa) main_mp4_pane_g2_ParamLimits

0x77e9,	// (0x0001dffa) main_mp4_pane_g2

0x77f7,	// (0x0001e008) main_mp4_pane_g3_ParamLimits

0x77f7,	// (0x0001e008) main_mp4_pane_g3

0x783c,	// (0x0001e04d) main_mp4_pane_g4_ParamLimits

0x783c,	// (0x0001e04d) main_mp4_pane_g4

0x7864,	// (0x0001e075) main_mp4_pane_g5_ParamLimits

0x7864,	// (0x0001e075) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000260ca) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000260ca) main_mp4_pane_g

0x78b4,	// (0x0001e0c5) main_mp4_pane_t1_ParamLimits

0x78b4,	// (0x0001e0c5) main_mp4_pane_t1

0x7910,	// (0x0001e121) main_mp4_pane_t2_ParamLimits

0x7910,	// (0x0001e121) main_mp4_pane_t2

0x3d3f,	// (0x0001a550) main_mp4_pane_t3_ParamLimits

0x3d3f,	// (0x0001a550) main_mp4_pane_t3

0x7962,	// (0x0001e173) main_mp4_pane_t4_ParamLimits

0x7962,	// (0x0001e173) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x000260d7) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x000260d7) main_mp4_pane_t

0x79a6,	// (0x0001e1b7) mp4_progress_pane_ParamLimits

0x79a6,	// (0x0001e1b7) mp4_progress_pane

0x79f0,	// (0x0001e201) mp4_rocker_pane_ParamLimits

0x79f0,	// (0x0001e201) mp4_rocker_pane

0x3e15,	// (0x0001a626) mp4_progress_pane_t1

0x3e2e,	// (0x0001a63f) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x000260e0) mp4_progress_pane_t

0x3e47,	// (0x0001a658) mup_progress_pane_cp04

0x48ff,	// (0x0001b110) mp4_rocker_pane_g1

0x7a10,	// (0x0001e221) aid_cell_size_keypad2_ParamLimits

0x7a10,	// (0x0001e221) aid_cell_size_keypad2

0x7a20,	// (0x0001e231) dialer2_ne_pane_ParamLimits

0x7a20,	// (0x0001e231) dialer2_ne_pane

0x7a2e,	// (0x0001e23f) grid_dialer2_keypad_pane_ParamLimits

0x7a2e,	// (0x0001e23f) grid_dialer2_keypad_pane

0x4968,	// (0x0001b179) bg_popup_call_pane_cp07_ParamLimits

0x4968,	// (0x0001b179) bg_popup_call_pane_cp07

0xc4ac,	// (0x00022cbd) dialer2_ne_pane_t1_ParamLimits

0xc4ac,	// (0x00022cbd) dialer2_ne_pane_t1

0x7a3e,	// (0x0001e24f) cell_dialer2_keypad_pane_ParamLimits

0x7a3e,	// (0x0001e24f) cell_dialer2_keypad_pane

0x3e65,	// (0x0001a676) bg_button_pane_pane_cp04_ParamLimits

0x3e65,	// (0x0001a676) bg_button_pane_pane_cp04

0xc4d1,	// (0x00022ce2) cell_dialer2_keypad_pane_g1_ParamLimits

0xc4d1,	// (0x00022ce2) cell_dialer2_keypad_pane_g1

0x9022,	// (0x0001f833) aid_placing_vt_set_content_ParamLimits

0x9022,	// (0x0001f833) aid_placing_vt_set_content

0x904c,	// (0x0001f85d) aid_placing_vt_set_title_ParamLimits

0x904c,	// (0x0001f85d) aid_placing_vt_set_title

0x03bf,	// (0x00016bd0) main_image3_pane

0x7a85,	// (0x0001e296) area_side_right_pane_cp01_ParamLimits

0x7a85,	// (0x0001e296) area_side_right_pane_cp01

0x7ab2,	// (0x0001e2c3) main_image3_pane_g1_ParamLimits

0x7ab2,	// (0x0001e2c3) main_image3_pane_g1

0x7ac0,	// (0x0001e2d1) main_image3_pane_g2_ParamLimits

0x7ac0,	// (0x0001e2d1) main_image3_pane_g2

0x7ad9,	// (0x0001e2ea) main_image3_pane_g3_ParamLimits

0x7ad9,	// (0x0001e2ea) main_image3_pane_g3

0x7af2,	// (0x0001e303) main_image3_pane_g4_ParamLimits

0x7af2,	// (0x0001e303) main_image3_pane_g4

0x0003,

0xf8de,	// (0x000260ef) main_image3_pane_g_ParamLimits

0xf8de,	// (0x000260ef) main_image3_pane_g

0x7b0b,	// (0x0001e31c) main_image3_pane_t1_ParamLimits

0x7b0b,	// (0x0001e31c) main_image3_pane_t1

0x7b30,	// (0x0001e341) main_image3_pane_t2_ParamLimits

0x7b30,	// (0x0001e341) main_image3_pane_t2

0x7b4f,	// (0x0001e360) main_image3_pane_t3_ParamLimits

0x7b4f,	// (0x0001e360) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x000260f8) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x000260f8) main_image3_pane_t

0x39a1,	// (0x0001a1b2) grid_sctrl_middle_pane_cp01_ParamLimits

0x39a1,	// (0x0001a1b2) grid_sctrl_middle_pane_cp01

0xc539,	// (0x00022d4a) cell_sctrl_middle_pane_cp01_ParamLimits

0xc539,	// (0x00022d4a) cell_sctrl_middle_pane_cp01

0xc54a,	// (0x00022d5b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc54a,	// (0x00022d5b) cell_sctrl_middle_pane_cp01_g1

0x03bf,	// (0x00016bd0) main_call4_pane

0xc557,	// (0x00022d68) aid_size_button_call4_ParamLimits

0xc557,	// (0x00022d68) aid_size_button_call4

0xc587,	// (0x00022d98) call4_windows_pane_ParamLimits

0xc587,	// (0x00022d98) call4_windows_pane

0xc5a1,	// (0x00022db2) grid_call4_button_pane_ParamLimits

0xc5a1,	// (0x00022db2) grid_call4_button_pane

0x3ea3,	// (0x0001a6b4) call4_windows_conf_pane

0x3eba,	// (0x0001a6cb) popup_call4_audio_first_window_ParamLimits

0x3eba,	// (0x0001a6cb) popup_call4_audio_first_window

0x3f06,	// (0x0001a717) popup_call4_audio_second_window_ParamLimits

0x3f06,	// (0x0001a717) popup_call4_audio_second_window

0x3f1a,	// (0x0001a72b) popup_call4_audio_wait_window_ParamLimits

0x3f1a,	// (0x0001a72b) popup_call4_audio_wait_window

0xc5c5,	// (0x00022dd6) cell_call4_button_pane_ParamLimits

0xc5c5,	// (0x00022dd6) cell_call4_button_pane

0xc5ea,	// (0x00022dfb) bg_button_pane_cp09_ParamLimits

0xc5ea,	// (0x00022dfb) bg_button_pane_cp09

0xc5f6,	// (0x00022e07) cell_call4_button_pane_g1_ParamLimits

0xc5f6,	// (0x00022e07) cell_call4_button_pane_g1

0xc603,	// (0x00022e14) cell_call4_button_pane_t1_ParamLimits

0xc603,	// (0x00022e14) cell_call4_button_pane_t1

0x3f62,	// (0x0001a773) popup_call4_audio_conf_window_ParamLimits

0x3f62,	// (0x0001a773) popup_call4_audio_conf_window

0xbdca,	// (0x000225db) mup3_progress_pane_t1_ParamLimits

0xbde1,	// (0x000225f2) mup3_progress_pane_t2_ParamLimits

0x35ed,	// (0x00019dfe) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00025fd1) mup3_progress_pane_t_ParamLimits

0x3604,	// (0x00019e15) mup_progress_pane_cp03_ParamLimits

0xc277,	// (0x00022a88) mup3_control_keys_pane_g4_copy1

0x79d4,	// (0x0001e1e5) mp4_rocker2_pane_ParamLimits

0x79d4,	// (0x0001e1e5) mp4_rocker2_pane

0x3f7e,	// (0x0001a78f) mp4_rocker2_pane_g1

0x3f76,	// (0x0001a787) mp4_rocker2_pane_g2

0x7bb0,	// (0x0001e3c1) mp4_rocker2_pane_g3

0x7bb8,	// (0x0001e3c9) mp4_rocker2_pane_g4

0x7bc0,	// (0x0001e3d1) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00026101) mp4_rocker2_pane_g

0x03bf,	// (0x00016bd0) main_camera4_pane

0x03bf,	// (0x00016bd0) main_video4_pane

0xc44e,	// (0x00022c5f) main_video_tele_dialer_pane_t1_ParamLimits

0xc44e,	// (0x00022c5f) main_video_tele_dialer_pane_t1

0xc460,	// (0x00022c71) main_video_tele_dialer_pane_t2_ParamLimits

0xc460,	// (0x00022c71) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000260bb) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000260bb) main_video_tele_dialer_pane_t

0x7be0,	// (0x0001e3f1) cam4_autofocus_pane_ParamLimits

0x7be0,	// (0x0001e3f1) cam4_autofocus_pane

0x7bfa,	// (0x0001e40b) cam4_image_uncrop_pane_ParamLimits

0x7bfa,	// (0x0001e40b) cam4_image_uncrop_pane

0x7c11,	// (0x0001e422) cam4_indicators_pane_ParamLimits

0x7c11,	// (0x0001e422) cam4_indicators_pane

0x7c2d,	// (0x0001e43e) main_camera4_pane_g1_ParamLimits

0x7c2d,	// (0x0001e43e) main_camera4_pane_g1

0x7c39,	// (0x0001e44a) main_camera4_pane_g2_ParamLimits

0x7c39,	// (0x0001e44a) main_camera4_pane_g2

0x7c39,	// (0x0001e44a) main_camera4_pane_g3_ParamLimits

0x7c39,	// (0x0001e44a) main_camera4_pane_g3

0x7c45,	// (0x0001e456) main_camera4_pane_g4_ParamLimits

0x7c45,	// (0x0001e456) main_camera4_pane_g4

0x7c51,	// (0x0001e462) main_camera4_pane_g5_ParamLimits

0x7c51,	// (0x0001e462) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0002610c) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0002610c) main_camera4_pane_g

0x7c6b,	// (0x0001e47c) main_camera4_pane_t1_ParamLimits

0x7c6b,	// (0x0001e47c) main_camera4_pane_t1

0x7c8f,	// (0x0001e4a0) bg_tb_trans_pane_cp06

0x7ca5,	// (0x0001e4b6) cam4_indicators_pane_g1

0x7cb6,	// (0x0001e4c7) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00026127) cam4_indicators_pane_g

0x7cd4,	// (0x0001e4e5) cam4_indicators_pane_t1

0x7cfe,	// (0x0001e50f) main_video4_pane_g1_ParamLimits

0x7cfe,	// (0x0001e50f) main_video4_pane_g1

0x7d0a,	// (0x0001e51b) main_video4_pane_g2_ParamLimits

0x7d0a,	// (0x0001e51b) main_video4_pane_g2

0x7d16,	// (0x0001e527) main_video4_pane_g3_ParamLimits

0x7d16,	// (0x0001e527) main_video4_pane_g3

0x7d22,	// (0x0001e533) main_video4_pane_g4_ParamLimits

0x7d22,	// (0x0001e533) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0002612e) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0002612e) main_video4_pane_g

0x7d42,	// (0x0001e553) vid4_indicators_pane_ParamLimits

0x7d42,	// (0x0001e553) vid4_indicators_pane

0x7d60,	// (0x0001e571) video4_image_uncrop_cif_pane_ParamLimits

0x7d60,	// (0x0001e571) video4_image_uncrop_cif_pane

0x7d6f,	// (0x0001e580) video4_image_uncrop_nhd_pane_ParamLimits

0x7d6f,	// (0x0001e580) video4_image_uncrop_nhd_pane

0x7bfa,	// (0x0001e40b) video4_image_uncrop_vga_pane_ParamLimits

0x7bfa,	// (0x0001e40b) video4_image_uncrop_vga_pane

0x7d7c,	// (0x0001e58d) bg_tb_trans_pane_cp07

0x7d94,	// (0x0001e5a5) vid4_indicators_pane_g1

0x7da5,	// (0x0001e5b6) vid4_indicators_pane_g2

0x7db6,	// (0x0001e5c7) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00026139) vid4_indicators_pane_g

0x7de3,	// (0x0001e5f4) vid4_indicators_pane_t1

0xc639,	// (0x00022e4a) cam4_autofocus_pane_g1

0xc641,	// (0x00022e52) cam4_autofocus_pane_g2

0xc649,	// (0x00022e5a) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00026144) cam4_autofocus_pane_g

0xc651,	// (0x00022e62) cam4_autofocus_pane_g3_copy1

0x3bdb,	// (0x0001a3ec) video_down_pane_cp_t1

0x3be9,	// (0x0001a3fa) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000260c0) video_down_pane_cp_t

0x39a1,	// (0x0001a1b2) popup_vitu2_window_ParamLimits

0x39a1,	// (0x0001a1b2) popup_vitu2_window

0x7dfc,	// (0x0001e60d) aid_size_cell2_itu2_ParamLimits

0x7dfc,	// (0x0001e60d) aid_size_cell2_itu2

0x7e1e,	// (0x0001e62f) aid_size_cell_itu2_ParamLimits

0x7e1e,	// (0x0001e62f) aid_size_cell_itu2

0x7e62,	// (0x0001e673) bg_popup_window_pane_cp09_ParamLimits

0x7e62,	// (0x0001e673) bg_popup_window_pane_cp09

0x7e70,	// (0x0001e681) field_vitu2_entry_pane_ParamLimits

0x7e70,	// (0x0001e681) field_vitu2_entry_pane

0x7e90,	// (0x0001e6a1) grid_vitu2_function_pane_ParamLimits

0x7e90,	// (0x0001e6a1) grid_vitu2_function_pane

0x7ed4,	// (0x0001e6e5) grid_vitu2_itu_pane_ParamLimits

0x7ed4,	// (0x0001e6e5) grid_vitu2_itu_pane

0x7f4c,	// (0x0001e75d) cell_vitu2_itu_pane_ParamLimits

0x7f4c,	// (0x0001e75d) cell_vitu2_itu_pane

0x7f61,	// (0x0001e772) cell_vitu2_function_pane_ParamLimits

0x7f61,	// (0x0001e772) cell_vitu2_function_pane

0x401d,	// (0x0001a82e) bg_popup_call_pane_cp08_ParamLimits

0x401d,	// (0x0001a82e) bg_popup_call_pane_cp08

0x4036,	// (0x0001a847) field_vitu2_entry_pane_g1

0x4042,	// (0x0001a853) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0002614b) field_vitu2_entry_pane_g

0x405c,	// (0x0001a86d) field_vitu2_entry_pane_t1_ParamLimits

0x405c,	// (0x0001a86d) field_vitu2_entry_pane_t1

0x408b,	// (0x0001a89c) field_vitu2_entry_pane_t2_ParamLimits

0x408b,	// (0x0001a89c) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00026152) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00026152) field_vitu2_entry_pane_t

0x7fa0,	// (0x0001e7b1) bg_button_pane_cp010_ParamLimits

0x7fa0,	// (0x0001e7b1) bg_button_pane_cp010

0x7fae,	// (0x0001e7bf) cell_vitu2_itu_pane_g1

0x7fcc,	// (0x0001e7dd) cell_vitu2_itu_pane_t1_ParamLimits

0x7fcc,	// (0x0001e7dd) cell_vitu2_itu_pane_t1

0x801e,	// (0x0001e82f) cell_vitu2_itu_pane_t2_ParamLimits

0x801e,	// (0x0001e82f) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0002615c) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0002615c) cell_vitu2_itu_pane_t

0x7d7c,	// (0x0001e58d) bg_button_pane_cp011

0x80d9,	// (0x0001e8ea) cell_vitu2_function_pane_g1

0x03bf,	// (0x00016bd0) main_myfav_hc_pane

0x7b91,	// (0x0001e3a2) popup_image3_note_pane_ParamLimits

0x7b91,	// (0x0001e3a2) popup_image3_note_pane

0x7b9f,	// (0x0001e3b0) popup_image3_tool_bar_pane_ParamLimits

0x7b9f,	// (0x0001e3b0) popup_image3_tool_bar_pane

0x808c,	// (0x0001e89d) cell_vitu2_itu_pane_t3_ParamLimits

0x808c,	// (0x0001e89d) cell_vitu2_itu_pane_t3

0x03bf,	// (0x00016bd0) bg_popup_trans_pane

0x40b0,	// (0x0001a8c1) grid_image3_tool_bar_pane

0x40ba,	// (0x0001a8cb) bg_popup_trans_pane_g1

0x110e,	// (0x0001791f) bg_popup_trans_pane_g2

0x40c2,	// (0x0001a8d3) bg_popup_trans_pane_g3

0x40ca,	// (0x0001a8db) bg_popup_trans_pane_g4

0x40d2,	// (0x0001a8e3) bg_popup_trans_pane_g5

0x40da,	// (0x0001a8eb) bg_popup_trans_pane_g6

0x40e2,	// (0x0001a8f3) bg_popup_trans_pane_g7

0x40ea,	// (0x0001a8fb) bg_popup_trans_pane_g8

0x10ee,	// (0x000178ff) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00026163) bg_popup_trans_pane_g

0x40f2,	// (0x0001a903) cell_image3_tool_bar_pane_ParamLimits

0x40f2,	// (0x0001a903) cell_image3_tool_bar_pane

0x32fa,	// (0x00019b0b) cell_image3_tool_bar_pane_g1

0x03bf,	// (0x00016bd0) bg_popup_trans_pane_cp1

0x4106,	// (0x0001a917) popup_image3_note_pane_t1

0x4114,	// (0x0001a925) popup_image3_note_pane_t2

0x4122,	// (0x0001a933) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00026176) popup_image3_note_pane_t

0x4130,	// (0x0001a941) popup_image3_note_pane_t3_copy1

0xc659,	// (0x00022e6a) bg_myfav_hc_instruction_pane_ParamLimits

0xc659,	// (0x00022e6a) bg_myfav_hc_instruction_pane

0xc671,	// (0x00022e82) cell_myfav_contact_pane_ParamLimits

0xc671,	// (0x00022e82) cell_myfav_contact_pane

0xc68b,	// (0x00022e9c) cell_myfav_contact_pane_cp1_ParamLimits

0xc68b,	// (0x00022e9c) cell_myfav_contact_pane_cp1

0xc6a3,	// (0x00022eb4) cell_myfav_contact_pane_cp2_ParamLimits

0xc6a3,	// (0x00022eb4) cell_myfav_contact_pane_cp2

0xc6bb,	// (0x00022ecc) cell_myfav_contact_pane_cp3_ParamLimits

0xc6bb,	// (0x00022ecc) cell_myfav_contact_pane_cp3

0xc6d2,	// (0x00022ee3) cell_myfav_contact_pane_cp4_ParamLimits

0xc6d2,	// (0x00022ee3) cell_myfav_contact_pane_cp4

0xc6e8,	// (0x00022ef9) cell_myfav_contact_pane_cp5_ParamLimits

0xc6e8,	// (0x00022ef9) cell_myfav_contact_pane_cp5

0xc6fc,	// (0x00022f0d) cell_myfav_contact_pane_cp6_ParamLimits

0xc6fc,	// (0x00022f0d) cell_myfav_contact_pane_cp6

0xc710,	// (0x00022f21) cell_myfav_contact_pane_cp7_ParamLimits

0xc710,	// (0x00022f21) cell_myfav_contact_pane_cp7

0x413e,	// (0x0001a94f) listscroll_gen_pane_cp05

0xc728,	// (0x00022f39) main_myfav_hc_pane_g1_ParamLimits

0xc728,	// (0x00022f39) main_myfav_hc_pane_g1

0xc73e,	// (0x00022f4f) main_myfav_hc_pane_g2_ParamLimits

0xc73e,	// (0x00022f4f) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0002617d) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0002617d) main_myfav_hc_pane_g

0xc76c,	// (0x00022f7d) main_myfav_hc_pane_t1_ParamLimits

0xc76c,	// (0x00022f7d) main_myfav_hc_pane_t1

0x4147,	// (0x0001a958) main_myfav_hc_pane_t2_ParamLimits

0x4147,	// (0x0001a958) main_myfav_hc_pane_t2

0x4159,	// (0x0001a96a) main_myfav_hc_pane_t3_ParamLimits

0x4159,	// (0x0001a96a) main_myfav_hc_pane_t3

0xc783,	// (0x00022f94) main_myfav_hc_pane_t4_ParamLimits

0xc783,	// (0x00022f94) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00026184) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00026184) main_myfav_hc_pane_t

0x32fa,	// (0x00019b0b) bg_myfav_hc_instruction_pane_g1

0x416b,	// (0x0001a97c) cell_myfav_contact_pane_g1_ParamLimits

0x416b,	// (0x0001a97c) cell_myfav_contact_pane_g1

0x416b,	// (0x0001a97c) cell_myfav_contact_pane_g2_ParamLimits

0x416b,	// (0x0001a97c) cell_myfav_contact_pane_g2

0x4177,	// (0x0001a988) cell_myfav_contact_pane_g3_ParamLimits

0x4177,	// (0x0001a988) cell_myfav_contact_pane_g3

0x35d7,	// (0x00019de8) cell_myfav_contact_pane_g4_ParamLimits

0x35d7,	// (0x00019de8) cell_myfav_contact_pane_g4

0x4184,	// (0x0001a995) cell_myfav_contact_pane_g5_ParamLimits

0x4184,	// (0x0001a995) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0002618f) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0002618f) cell_myfav_contact_pane_g

0xc754,	// (0x00022f65) main_myfav_hc_pane_g3_ParamLimits

0xc754,	// (0x00022f65) main_myfav_hc_pane_g3

0x8531,	// (0x0001ed42) popup_adpt_find_window

0xc7ad,	// (0x00022fbe) afind_page_pane_ParamLimits

0xc7ad,	// (0x00022fbe) afind_page_pane

0xc7ba,	// (0x00022fcb) aid_size_cell_afind_ParamLimits

0xc7ba,	// (0x00022fcb) aid_size_cell_afind

0xc7d4,	// (0x00022fe5) bg_popup_sub_pane_cp09_ParamLimits

0xc7d4,	// (0x00022fe5) bg_popup_sub_pane_cp09

0xc7e1,	// (0x00022ff2) find_pane_cp01_ParamLimits

0xc7e1,	// (0x00022ff2) find_pane_cp01

0x4190,	// (0x0001a9a1) grid_afind_control_pane_ParamLimits

0x4190,	// (0x0001a9a1) grid_afind_control_pane

0xc7ee,	// (0x00022fff) grid_afind_pane_ParamLimits

0xc7ee,	// (0x00022fff) grid_afind_pane

0xc80a,	// (0x0002301b) cell_afind_pane_ParamLimits

0xc80a,	// (0x0002301b) cell_afind_pane

0x32fa,	// (0x00019b0b) afind_page_pane_g1

0xc852,	// (0x00023063) afind_page_pane_g2

0xc85b,	// (0x0002306c) afind_page_pane_g3

0x0002,

0xf989,	// (0x0002619a) afind_page_pane_g

0xc864,	// (0x00023075) afind_page_pane_t1

0x41a4,	// (0x0001a9b5) cell_afind_grid_control_pane_ParamLimits

0x41a4,	// (0x0001a9b5) cell_afind_grid_control_pane

0x3e65,	// (0x0001a676) bg_button_pane_cp69_ParamLimits

0x3e65,	// (0x0001a676) bg_button_pane_cp69

0xc884,	// (0x00023095) cell_afind_pane_g1_ParamLimits

0xc884,	// (0x00023095) cell_afind_pane_g1

0xc891,	// (0x000230a2) cell_afind_pane_t1_ParamLimits

0xc891,	// (0x000230a2) cell_afind_pane_t1

0x0e69,	// (0x0001767a) bg_button_pane_cp72

0x41b3,	// (0x0001a9c4) cell_afind_grid_control_pane_g1

0xab41,	// (0x00021352) aid_image_placing_area_ParamLimits

0xab41,	// (0x00021352) aid_image_placing_area

0x38d0,	// (0x0001a0e1) field_vitu_entry_pane_g1_ParamLimits

0x38d0,	// (0x0001a0e1) field_vitu_entry_pane_g1

0x38dc,	// (0x0001a0ed) field_vitu_entry_pane_g2_ParamLimits

0x38dc,	// (0x0001a0ed) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0002604b) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0002604b) field_vitu_entry_pane_g

0xc2fe,	// (0x00022b0f) cell_vitu_itu_pane_g1_ParamLimits

0xc340,	// (0x00022b51) cell_vitu_itu_pane_t3_ParamLimits

0xc340,	// (0x00022b51) cell_vitu_itu_pane_t3

0x3e15,	// (0x0001a626) mp4_progress_pane_t1_ParamLimits

0x3e2e,	// (0x0001a63f) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x000260e0) mp4_progress_pane_t_ParamLimits

0x3e47,	// (0x0001a658) mup_progress_pane_cp04_ParamLimits

0xc797,	// (0x00022fa8) main_myfav_hc_pane_t5_ParamLimits

0xc797,	// (0x00022fa8) main_myfav_hc_pane_t5

0x03e5,	// (0x00016bf6) aid_zoom_text_primary

0x8531,	// (0x0001ed42) popup_adpt_find_window_ParamLimits

0x042f,	// (0x00016c40) main_cam_set_pane

0x7c1f,	// (0x0001e430) cam4_zoom_pane_ParamLimits

0x7c1f,	// (0x0001e430) cam4_zoom_pane

0xc8a3,	// (0x000230b4) main_cam_set_pane_g1_ParamLimits

0xc8a3,	// (0x000230b4) main_cam_set_pane_g1

0xc8b1,	// (0x000230c2) main_cam_set_pane_g2_ParamLimits

0xc8b1,	// (0x000230c2) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x000261a1) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x000261a1) main_cam_set_pane_g

0xc8bd,	// (0x000230ce) main_cam_set_pane_t1_ParamLimits

0xc8bd,	// (0x000230ce) main_cam_set_pane_t1

0xc8d9,	// (0x000230ea) main_cset_listscroll_pane_ParamLimits

0xc8d9,	// (0x000230ea) main_cset_listscroll_pane

0xc904,	// (0x00023115) main_cset_slider_pane_ParamLimits

0xc904,	// (0x00023115) main_cset_slider_pane

0x41c4,	// (0x0001a9d5) main_cset_list_pane_ParamLimits

0x41c4,	// (0x0001a9d5) main_cset_list_pane

0x41d4,	// (0x0001a9e5) scroll_pane_cp028

0xc923,	// (0x00023134) aid_area_touch_slider

0xc93f,	// (0x00023150) cset_slider_pane

0xc969,	// (0x0002317a) main_cset_slider_pane_g1

0xc97e,	// (0x0002318f) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x000261a6) main_cset_slider_pane_g

0x420d,	// (0x0001aa1e) main_cset_slider_pane_t1

0xca40,	// (0x00023251) main_cset_slider_pane_t2

0xca5a,	// (0x0002326b) main_cset_slider_pane_t3

0xca74,	// (0x00023285) main_cset_slider_pane_t4

0xca8e,	// (0x0002329f) main_cset_slider_pane_t5

0xcaac,	// (0x000232bd) main_cset_slider_pane_t6

0xcac3,	// (0x000232d4) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000261cb) main_cset_slider_pane_t

0xcbcf,	// (0x000233e0) cset_list_set_pane_ParamLimits

0xcbcf,	// (0x000233e0) cset_list_set_pane

0xcbe5,	// (0x000233f6) aid_position_infowindow_above

0xcbed,	// (0x000233fe) aid_position_infowindow_below

0xcbf5,	// (0x00023406) cset_list_set_pane_g1_ParamLimits

0xcbf5,	// (0x00023406) cset_list_set_pane_g1

0x42ad,	// (0x0001aabe) cset_list_set_pane_g3_ParamLimits

0x42ad,	// (0x0001aabe) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x000261ea) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x000261ea) cset_list_set_pane_g

0x42bc,	// (0x0001aacd) cset_list_set_pane_t1_ParamLimits

0x42bc,	// (0x0001aacd) cset_list_set_pane_t1

0x042f,	// (0x00016c40) list_highlight_pane_cp021_ParamLimits

0x042f,	// (0x00016c40) list_highlight_pane_cp021

0x1a8d,	// (0x0001829e) cset_slider_pane_g1

0x1a9f,	// (0x000182b0) cset_slider_pane_g2

0x1a96,	// (0x000182a7) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x000261ef) cset_slider_pane_g

0x80ed,	// (0x0001e8fe) aid_area_touch_cam4_zoom

0x80f5,	// (0x0001e906) cam4_zoom_cont_pane

0x80fd,	// (0x0001e90e) cam4_zoom_pane_g1

0x8105,	// (0x0001e916) cam4_zoom_pane_g2

0x810d,	// (0x0001e91e) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x000261f6) cam4_zoom_pane_g

0x8115,	// (0x0001e926) cam4_zoom_cont_pane_g1

0x811e,	// (0x0001e92f) cam4_zoom_cont_pane_g2

0x8127,	// (0x0001e938) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x000261fd) cam4_zoom_cont_pane_g

0xc571,	// (0x00022d82) call4_image_pane_ParamLimits

0xc571,	// (0x00022d82) call4_image_pane

0x3ea3,	// (0x0001a6b4) call4_windows_conf_pane_ParamLimits

0x3ee4,	// (0x0001a6f5) popup_call4_audio_in_window_ParamLimits

0x3ee4,	// (0x0001a6f5) popup_call4_audio_in_window

0x03bf,	// (0x00016bd0) bg_popup_call2_act_pane_cp02

0x3f5a,	// (0x0001a76b) call4_list_conf_pane

0x32fa,	// (0x00019b0b) call4_image_pane_g1

0x32fa,	// (0x00019b0b) call4_image_pane_g2

0x0001,

0xf700,	// (0x00025f11) call4_image_pane_g

0x430c,	// (0x0001ab1d) list_single_graphic_popup_conf4_pane_ParamLimits

0x430c,	// (0x0001ab1d) list_single_graphic_popup_conf4_pane

0x03bf,	// (0x00016bd0) list_highlight_pane_cp022

0x431f,	// (0x0001ab30) list_single_graphic_popup_conf4_pane_g1

0x174c,	// (0x00017f5d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00026204) list_single_graphic_popup_conf4_pane_g

0x4327,	// (0x0001ab38) list_single_graphic_popup_conf4_pane_t1

0x91b0,	// (0x0001f9c1) popup_vtel_slider_window_ParamLimits

0x91b0,	// (0x0001f9c1) popup_vtel_slider_window

0x3e53,	// (0x0001a664) dialer2_ne_pane_t2_ParamLimits

0x3e53,	// (0x0001a664) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x000260e5) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x000260e5) dialer2_ne_pane_t

0x042f,	// (0x00016c40) bg_popup_sub_pane_cp010_ParamLimits

0x042f,	// (0x00016c40) bg_popup_sub_pane_cp010

0xcc01,	// (0x00023412) popup_vtel_slider_window_g1_ParamLimits

0xcc01,	// (0x00023412) popup_vtel_slider_window_g1

0xcc0d,	// (0x0002341e) popup_vtel_slider_window_g2_ParamLimits

0xcc0d,	// (0x0002341e) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00026209) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00026209) popup_vtel_slider_window_g

0xcc55,	// (0x00023466) vtel_slider_pane_ParamLimits

0xcc55,	// (0x00023466) vtel_slider_pane

0xcc64,	// (0x00023475) vtel_slider_pane_g1_ParamLimits

0xcc64,	// (0x00023475) vtel_slider_pane_g1

0xcc71,	// (0x00023482) vtel_slider_pane_g2_ParamLimits

0xcc71,	// (0x00023482) vtel_slider_pane_g2

0xcc7e,	// (0x0002348f) vtel_slider_pane_g3_ParamLimits

0xcc7e,	// (0x0002348f) vtel_slider_pane_g3

0xcc64,	// (0x00023475) vtel_slider_pane_g4_ParamLimits

0xcc64,	// (0x00023475) vtel_slider_pane_g4

0xcc8b,	// (0x0002349c) vtel_slider_pane_g5_ParamLimits

0xcc8b,	// (0x0002349c) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00026212) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00026212) vtel_slider_pane_g

0x03bf,	// (0x00016bd0) main_gallery2_pane

0x7e44,	// (0x0001e655) aid_size_row_itut2_dropdow_list_ParamLimits

0x7e44,	// (0x0001e655) aid_size_row_itut2_dropdow_list

0x7eb2,	// (0x0001e6c3) grid_vitu2_function_top_pane_ParamLimits

0x7eb2,	// (0x0001e6c3) grid_vitu2_function_top_pane

0x7f08,	// (0x0001e719) popup_vitu2_dropdown_list_window_ParamLimits

0x7f08,	// (0x0001e719) popup_vitu2_dropdown_list_window

0x7f28,	// (0x0001e739) popup_vitu2_match_list_window

0x8130,	// (0x0001e941) cell_vitu2_function_top_pane_ParamLimits

0x8130,	// (0x0001e941) cell_vitu2_function_top_pane

0x8150,	// (0x0001e961) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8150,	// (0x0001e961) cell_vitu2_function_top_pane_cp01

0x816e,	// (0x0001e97f) cell_vitu2_function_top_wide_pane_ParamLimits

0x816e,	// (0x0001e97f) cell_vitu2_function_top_wide_pane

0x7d7c,	// (0x0001e58d) bg_button_pane_cp012

0x818c,	// (0x0001e99d) cell_vitu2_function_top_pane_g1

0x819b,	// (0x0001e9ac) bg_button_pane_cp013_ParamLimits

0x819b,	// (0x0001e9ac) bg_button_pane_cp013

0xcc98,	// (0x000234a9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcc98,	// (0x000234a9) cell_vitu2_function_top_wide_pane_g1

0x81b7,	// (0x0001e9c8) bg_popup_sub_pane_cp20

0x81c5,	// (0x0001e9d6) list_vitu2_match_list_pane

0x40ba,	// (0x0001a8cb) bg_popup_sub_pane_cp20_g1

0x40c2,	// (0x0001a8d3) bg_popup_sub_pane_cp20_g2

0x110e,	// (0x0001791f) bg_popup_sub_pane_cp20_g3

0x40ca,	// (0x0001a8db) bg_popup_sub_pane_cp20_g4

0x10ee,	// (0x000178ff) bg_popup_sub_pane_cp20_g5

0x4367,	// (0x0001ab78) bg_popup_sub_pane_cp20_g6

0x40da,	// (0x0001a8eb) bg_popup_sub_pane_cp20_g7

0x40e2,	// (0x0001a8f3) bg_popup_sub_pane_cp20_g8

0x40ea,	// (0x0001a8fb) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0002621d) bg_popup_sub_pane_cp20_g

0x81dd,	// (0x0001e9ee) list_vitu2_match_list_item_pane_ParamLimits

0x81dd,	// (0x0001e9ee) list_vitu2_match_list_item_pane

0x81ef,	// (0x0001ea00) list_vitu2_match_list_item_pane_t1

0x701d,	// (0x0001d82e) bg_popup_sub_pane_cp21

0x81fd,	// (0x0001ea0e) grid_vitu2_dropdown_list_pane

0x8205,	// (0x0001ea16) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8205,	// (0x0001ea16) cell_vitu2_dropdown_list_char_pane

0x8226,	// (0x0001ea37) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8226,	// (0x0001ea37) cell_vitu2_dropdown_list_ctrl_pane

0x43b9,	// (0x0001abca) cell_vitu2_dropdown_list_char_pane_g1

0x43b0,	// (0x0001abc1) cell_vitu2_dropdown_list_char_pane_g2

0x43a7,	// (0x0001abb8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0002623a) cell_vitu2_dropdown_list_char_pane_g

0x8252,	// (0x0001ea63) cell_vitu2_dropdown_list_char_pane_t1

0xccdf,	// (0x000234f0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xccdf,	// (0x000234f0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xccef,	// (0x00023500) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xccef,	// (0x00023500) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcd00,	// (0x00023511) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcd00,	// (0x00023511) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8260,	// (0x0001ea71) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8260,	// (0x0001ea71) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7c8f,	// (0x0001e4a0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7c8f,	// (0x0001e4a0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00026241) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00026241) cell_vitu2_dropdown_list_ctrl_pane_g

0xcd10,	// (0x00023521) aid_size_cell_gallery2_ParamLimits

0xcd10,	// (0x00023521) aid_size_cell_gallery2

0xcd1e,	// (0x0002352f) grid_gallery2_pane_ParamLimits

0xcd1e,	// (0x0002352f) grid_gallery2_pane

0xcd2d,	// (0x0002353e) scroll_pane_cp029_ParamLimits

0xcd2d,	// (0x0002353e) scroll_pane_cp029

0xcd39,	// (0x0002354a) cell_gallery2_pane_ParamLimits

0xcd39,	// (0x0002354a) cell_gallery2_pane

0x43c2,	// (0x0001abd3) cell_gallery2_pane_g2

0x5072,	// (0x0001b883) cell_gallery2_pane_g3

0x43cc,	// (0x0001abdd) cell_gallery2_pane_g4

0x43d4,	// (0x0001abe5) cell_gallery2_pane_g5

0x1937,	// (0x00018148) grid_highlight_pane_cp10

0x7f28,	// (0x0001e739) popup_vitu2_match_list_window_ParamLimits

0x7f3c,	// (0x0001e74d) popup_vitu2_query_window_ParamLimits

0x7f3c,	// (0x0001e74d) popup_vitu2_query_window

0x701d,	// (0x0001d82e) bg_vitu2_candi_button_pane

0x43b9,	// (0x0001abca) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x43b0,	// (0x0001abc1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x43a7,	// (0x0001abb8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcd67,	// (0x00023578) bg_button_pane_cp015

0xcd79,	// (0x0002358a) bg_button_pane_cp016

0xcd8c,	// (0x0002359d) bg_button_pane_cp017

0x2df4,	// (0x00019605) bg_popup_sub_pane_cp22

0x43dc,	// (0x0001abed) popup_vitu2_query_window_g1

0xcdd1,	// (0x000235e2) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0002624c) popup_vitu2_query_window_g

0xcdee,	// (0x000235ff) popup_vitu2_query_window_t1_ParamLimits

0xcdee,	// (0x000235ff) popup_vitu2_query_window_t1

0xce21,	// (0x00023632) popup_vitu2_query_window_t2_ParamLimits

0xce21,	// (0x00023632) popup_vitu2_query_window_t2

0xce33,	// (0x00023644) popup_vitu2_query_window_t3_ParamLimits

0xce33,	// (0x00023644) popup_vitu2_query_window_t3

0xce5b,	// (0x0002366c) popup_vitu2_query_window_t4_ParamLimits

0xce5b,	// (0x0002366c) popup_vitu2_query_window_t4

0xce7c,	// (0x0002368d) popup_vitu2_query_window_t5_ParamLimits

0xce7c,	// (0x0002368d) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00026253) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00026253) popup_vitu2_query_window_t

0x41bc,	// (0x0001a9cd) main_cset_text_pane

0xc923,	// (0x00023134) aid_area_touch_slider_ParamLimits

0xc93f,	// (0x00023150) cset_slider_pane_ParamLimits

0xc969,	// (0x0002317a) main_cset_slider_pane_g1_ParamLimits

0xc97e,	// (0x0002318f) main_cset_slider_pane_g2_ParamLimits

0x41dd,	// (0x0001a9ee) main_cset_slider_pane_g3_ParamLimits

0x41dd,	// (0x0001a9ee) main_cset_slider_pane_g3

0xc993,	// (0x000231a4) main_cset_slider_pane_g4_ParamLimits

0xc993,	// (0x000231a4) main_cset_slider_pane_g4

0xc9a2,	// (0x000231b3) main_cset_slider_pane_g5_ParamLimits

0xc9a2,	// (0x000231b3) main_cset_slider_pane_g5

0xc9b0,	// (0x000231c1) main_cset_slider_pane_g6_ParamLimits

0xc9b0,	// (0x000231c1) main_cset_slider_pane_g6

0xf995,	// (0x000261a6) main_cset_slider_pane_g_ParamLimits

0x420d,	// (0x0001aa1e) main_cset_slider_pane_t1_ParamLimits

0xca40,	// (0x00023251) main_cset_slider_pane_t2_ParamLimits

0xca5a,	// (0x0002326b) main_cset_slider_pane_t3_ParamLimits

0xca74,	// (0x00023285) main_cset_slider_pane_t4_ParamLimits

0xca8e,	// (0x0002329f) main_cset_slider_pane_t5_ParamLimits

0xcaac,	// (0x000232bd) main_cset_slider_pane_t6_ParamLimits

0xcac3,	// (0x000232d4) main_cset_slider_pane_t7_ParamLimits

0xcaf1,	// (0x00023302) main_cset_slider_pane_t8_ParamLimits

0xcaf1,	// (0x00023302) main_cset_slider_pane_t8

0xcb19,	// (0x0002332a) main_cset_slider_pane_t9_ParamLimits

0xcb19,	// (0x0002332a) main_cset_slider_pane_t9

0xcb41,	// (0x00023352) main_cset_slider_pane_t10_ParamLimits

0xcb41,	// (0x00023352) main_cset_slider_pane_t10

0xcb69,	// (0x0002337a) main_cset_slider_pane_t11_ParamLimits

0xcb69,	// (0x0002337a) main_cset_slider_pane_t11

0xcb93,	// (0x000233a4) main_cset_slider_pane_t12_ParamLimits

0xcb93,	// (0x000233a4) main_cset_slider_pane_t12

0xcbb0,	// (0x000233c1) main_cset_slider_pane_t13_ParamLimits

0xcbb0,	// (0x000233c1) main_cset_slider_pane_t13

0xf9ba,	// (0x000261cb) main_cset_slider_pane_t_ParamLimits

0x03bf,	// (0x00016bd0) bg_popup_sub_pane_cp011

0x43e8,	// (0x0001abf9) main_cset_text_pane_g1

0x43f0,	// (0x0001ac01) main_cset_text_pane_t1

0x43fe,	// (0x0001ac0f) main_cset_text_pane_t2

0x440c,	// (0x0001ac1d) main_cset_text_pane_t3

0x441a,	// (0x0001ac2b) main_cset_text_pane_t4

0x4428,	// (0x0001ac39) main_cset_text_pane_t5

0x4436,	// (0x0001ac47) main_cset_text_pane_t6

0x4444,	// (0x0001ac55) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00026262) main_cset_text_pane_t

0x03bf,	// (0x00016bd0) main_cam4_burst_pane

0x03bf,	// (0x00016bd0) main_cam5_pane

0xc872,	// (0x00023083) bg_button_pane_cp019

0xc87b,	// (0x0002308c) bg_button_pane_cp020

0x41e9,	// (0x0001a9fa) main_cset_slider_pane_g7_ParamLimits

0x41e9,	// (0x0001a9fa) main_cset_slider_pane_g7

0x41f5,	// (0x0001aa06) main_cset_slider_pane_g8_ParamLimits

0x41f5,	// (0x0001aa06) main_cset_slider_pane_g8

0xc9c4,	// (0x000231d5) main_cset_slider_pane_g9_ParamLimits

0xc9c4,	// (0x000231d5) main_cset_slider_pane_g9

0xc9d0,	// (0x000231e1) main_cset_slider_pane_g10_ParamLimits

0xc9d0,	// (0x000231e1) main_cset_slider_pane_g10

0xc9dc,	// (0x000231ed) main_cset_slider_pane_g11_ParamLimits

0xc9dc,	// (0x000231ed) main_cset_slider_pane_g11

0xc9e8,	// (0x000231f9) main_cset_slider_pane_g12_ParamLimits

0xc9e8,	// (0x000231f9) main_cset_slider_pane_g12

0xc9f4,	// (0x00023205) main_cset_slider_pane_g13_ParamLimits

0xc9f4,	// (0x00023205) main_cset_slider_pane_g13

0xca00,	// (0x00023211) main_cset_slider_pane_g14_ParamLimits

0xca00,	// (0x00023211) main_cset_slider_pane_g14

0xca0c,	// (0x0002321d) main_cset_slider_pane_g15_ParamLimits

0xca0c,	// (0x0002321d) main_cset_slider_pane_g15

0x423b,	// (0x0001aa4c) main_cset_slider_pane_t14_ParamLimits

0x423b,	// (0x0001aa4c) main_cset_slider_pane_t14

0x4274,	// (0x0001aa85) main_cset_slider_pane_t15_ParamLimits

0x4274,	// (0x0001aa85) main_cset_slider_pane_t15

0xcef3,	// (0x00023704) aid_cam4_burst_size_cell_ParamLimits

0xcef3,	// (0x00023704) aid_cam4_burst_size_cell

0xcf0f,	// (0x00023720) grid_cam4_burst_pane_ParamLimits

0xcf0f,	// (0x00023720) grid_cam4_burst_pane

0xcf3f,	// (0x00023750) linegrid_cam4_burst_pane_ParamLimits

0xcf3f,	// (0x00023750) linegrid_cam4_burst_pane

0xcf5f,	// (0x00023770) scroll_pane_cp30_ParamLimits

0xcf5f,	// (0x00023770) scroll_pane_cp30

0xcf6b,	// (0x0002377c) cell_cam4_burst_pane_ParamLimits

0xcf6b,	// (0x0002377c) cell_cam4_burst_pane

0x445e,	// (0x0001ac6f) linegrid_cam4_burst_pane_g1_ParamLimits

0x445e,	// (0x0001ac6f) linegrid_cam4_burst_pane_g1

0xcfa7,	// (0x000237b8) linegrid_cam4_burst_pane_g2_ParamLimits

0xcfa7,	// (0x000237b8) linegrid_cam4_burst_pane_g2

0x446b,	// (0x0001ac7c) linegrid_cam4_burst_pane_g3_ParamLimits

0x446b,	// (0x0001ac7c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00026271) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00026271) linegrid_cam4_burst_pane_g

0xcfb8,	// (0x000237c9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcfb8,	// (0x000237c9) linegrid_cam4_burst_pane_g3_copy1

0x4478,	// (0x0001ac89) linegrid_cam4_burst_pane_g4_ParamLimits

0x4478,	// (0x0001ac89) linegrid_cam4_burst_pane_g4

0xcfd2,	// (0x000237e3) linegrid_cam4_burst_pane_g5_ParamLimits

0xcfd2,	// (0x000237e3) linegrid_cam4_burst_pane_g5

0xcfe3,	// (0x000237f4) linegrid_cam4_burst_pane_g6_ParamLimits

0xcfe3,	// (0x000237f4) linegrid_cam4_burst_pane_g6

0x4485,	// (0x0001ac96) linegrid_cam4_burst_pane_g7_ParamLimits

0x4485,	// (0x0001ac96) linegrid_cam4_burst_pane_g7

0xcff4,	// (0x00023805) cell_cam4_burst_pane_g1

0x449e,	// (0x0001acaf) main_cam5_pane_t1_ParamLimits

0x449e,	// (0x0001acaf) main_cam5_pane_t1

0x44b0,	// (0x0001acc1) main_cam5_pane_t2_ParamLimits

0x44b0,	// (0x0001acc1) main_cam5_pane_t2

0x44c2,	// (0x0001acd3) main_cam5_pane_t3_ParamLimits

0x44c2,	// (0x0001acd3) main_cam5_pane_t3

0x44d4,	// (0x0001ace5) main_cam5_pane_t4_ParamLimits

0x44d4,	// (0x0001ace5) main_cam5_pane_t4

0x44ec,	// (0x0001acfd) main_cam5_pane_t5_ParamLimits

0x44ec,	// (0x0001acfd) main_cam5_pane_t5

0x4500,	// (0x0001ad11) main_cam5_pane_t6_ParamLimits

0x4500,	// (0x0001ad11) main_cam5_pane_t6

0x4514,	// (0x0001ad25) main_cam5_pane_t7_ParamLimits

0x4514,	// (0x0001ad25) main_cam5_pane_t7

0x4526,	// (0x0001ad37) main_cam5_pane_t8_ParamLimits

0x4526,	// (0x0001ad37) main_cam5_pane_t8

0x4542,	// (0x0001ad53) main_cam5_pane_t9_ParamLimits

0x4542,	// (0x0001ad53) main_cam5_pane_t9

0x4554,	// (0x0001ad65) main_cam5_pane_t10_ParamLimits

0x4554,	// (0x0001ad65) main_cam5_pane_t10

0x4566,	// (0x0001ad77) main_cam5_pane_t11_ParamLimits

0x4566,	// (0x0001ad77) main_cam5_pane_t11

0x4578,	// (0x0001ad89) main_cam5_pane_t12_ParamLimits

0x4578,	// (0x0001ad89) main_cam5_pane_t12

0x458d,	// (0x0001ad9e) main_cam5_pane_t13_ParamLimits

0x458d,	// (0x0001ad9e) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0002627d) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0002627d) main_cam5_pane_t

0x85dd,	// (0x0001edee) popup_scut_keymap_window_ParamLimits

0x85dd,	// (0x0001edee) popup_scut_keymap_window

0xd007,	// (0x00023818) aid_size_cell_brow_shortcut

0x1937,	// (0x00018148) bg_popup_window_pane_cp010

0xd013,	// (0x00023824) grid_scut_pane

0xd01f,	// (0x00023830) cell_scut_pane_ParamLimits

0xd01f,	// (0x00023830) cell_scut_pane

0xd036,	// (0x00023847) cell_scut_pane_g1

0x45aa,	// (0x0001adbb) cell_scut_pane_t1

0x45b9,	// (0x0001adca) cell_scut_pane_t2

0xd03f,	// (0x00023850) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00026298) cell_scut_pane_t

0xba14,	// (0x00022225) main_mup3_pane_g8_ParamLimits

0xba14,	// (0x00022225) main_mup3_pane_g8

0x7e52,	// (0x0001e663) area_vitu2_query_pane_ParamLimits

0x7e52,	// (0x0001e663) area_vitu2_query_pane

0xcd9f,	// (0x000235b0) input_focus_pane_cp08

0x45c8,	// (0x0001add9) area_vitu2_query_pane_g1

0xd04d,	// (0x0002385e) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0002629f) area_vitu2_query_pane_g

0xd05e,	// (0x0002386f) area_vitu2_query_pane_t1_ParamLimits

0xd05e,	// (0x0002386f) area_vitu2_query_pane_t1

0xd072,	// (0x00023883) area_vitu2_query_pane_t2_ParamLimits

0xd072,	// (0x00023883) area_vitu2_query_pane_t2

0xd086,	// (0x00023897) area_vitu2_query_pane_t3_ParamLimits

0xd086,	// (0x00023897) area_vitu2_query_pane_t3

0x45d4,	// (0x0001ade5) area_vitu2_query_pane_t4_ParamLimits

0x45d4,	// (0x0001ade5) area_vitu2_query_pane_t4

0x45fc,	// (0x0001ae0d) area_vitu2_query_pane_t5_ParamLimits

0x45fc,	// (0x0001ae0d) area_vitu2_query_pane_t5

0x4624,	// (0x0001ae35) area_vitu2_query_pane_t6_ParamLimits

0x4624,	// (0x0001ae35) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x000262a4) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x000262a4) area_vitu2_query_pane_t

0xd0ae,	// (0x000238bf) bg_button_pane_cp018

0xd0bc,	// (0x000238cd) bg_button_pane_cp021

0xd0c8,	// (0x000238d9) bg_button_pane_cp022

0xd0d9,	// (0x000238ea) input_focus_pane_cp09

0xa255,	// (0x00020a66) aid_size_touch_mv_arrow_left

0xa27e,	// (0x00020a8f) aid_size_touch_mv_arrow_right

0xca24,	// (0x00023235) main_cset_slider_pane_g16_ParamLimits

0xca24,	// (0x00023235) main_cset_slider_pane_g16

0xca32,	// (0x00023243) main_cset_slider_pane_g17_ParamLimits

0xca32,	// (0x00023243) main_cset_slider_pane_g17

0xcff4,	// (0x00023805) cell_cam4_burst_pane_g1_ParamLimits

0x03bf,	// (0x00016bd0) compa_mode_pane

0xcc19,	// (0x0002342a) popup_vtel_slider_window_g3_ParamLimits

0xcc19,	// (0x0002342a) popup_vtel_slider_window_g3

0xcc2d,	// (0x0002343e) popup_vtel_slider_window_g4_ParamLimits

0xcc2d,	// (0x0002343e) popup_vtel_slider_window_g4

0xcc41,	// (0x00023452) popup_vtel_slider_window_t1_ParamLimits

0xcc41,	// (0x00023452) popup_vtel_slider_window_t1

0x03bf,	// (0x00016bd0) main_cl_pane

0x2e1c,	// (0x0001962d) popup_imed_adjust2_window_ParamLimits

0x2df4,	// (0x00019605) bg_tb_trans_pane_cp05_ParamLimits

0x3805,	// (0x0001a016) popup_imed_adjust2_window_g1_ParamLimits

0x3814,	// (0x0001a025) popup_imed_adjust2_window_g2_ParamLimits

0x3814,	// (0x0001a025) popup_imed_adjust2_window_g2

0x3820,	// (0x0001a031) popup_imed_adjust2_window_g3_ParamLimits

0x3820,	// (0x0001a031) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0002600f) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0002600f) popup_imed_adjust2_window_g

0x382c,	// (0x0001a03d) popup_imed_adjust2_window_t1_ParamLimits

0x3844,	// (0x0001a055) slider_imed_adjust_pane_ParamLimits

0x3858,	// (0x0001a069) slider_imed_adjust_pane_g1_ParamLimits

0x3868,	// (0x0001a079) slider_imed_adjust_pane_g2_ParamLimits

0x3878,	// (0x0001a089) slider_imed_adjust_pane_g3_ParamLimits

0x3889,	// (0x0001a09a) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00026016) slider_imed_adjust_pane_g_ParamLimits

0x7bc8,	// (0x0001e3d9) aid_touch_area_cam4_ParamLimits

0x7bc8,	// (0x0001e3d9) aid_touch_area_cam4

0x7bd8,	// (0x0001e3e9) battery_pane_cp01

0x7c5f,	// (0x0001e470) main_camera4_pane_g6_ParamLimits

0x7c5f,	// (0x0001e470) main_camera4_pane_g6

0x7c7d,	// (0x0001e48e) main_camera4_pane_t2_ParamLimits

0x7c7d,	// (0x0001e48e) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00026119) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00026119) main_camera4_pane_t

0x7cee,	// (0x0001e4ff) aid_touch_area_vid4_ParamLimits

0x7cee,	// (0x0001e4ff) aid_touch_area_vid4

0x7d2e,	// (0x0001e53f) main_video4_pane_g5_ParamLimits

0x7d2e,	// (0x0001e53f) main_video4_pane_g5

0x7d50,	// (0x0001e561) vid4_progress_pane_ParamLimits

0x7d50,	// (0x0001e561) vid4_progress_pane

0x4201,	// (0x0001aa12) main_cset_slider_pane_g18_ParamLimits

0x4201,	// (0x0001aa12) main_cset_slider_pane_g18

0x4492,	// (0x0001aca3) cell_cam4_burst_pane_g2_ParamLimits

0x4492,	// (0x0001aca3) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00026278) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00026278) cell_cam4_burst_pane_g

0xd0ea,	// (0x000238fb) bg_cl_pane_ParamLimits

0xd0ea,	// (0x000238fb) bg_cl_pane

0xd0f6,	// (0x00023907) cl_header_pane_ParamLimits

0xd0f6,	// (0x00023907) cl_header_pane

0xd102,	// (0x00023913) cl_listscroll_pane_ParamLimits

0xd102,	// (0x00023913) cl_listscroll_pane

0x4670,	// (0x0001ae81) bg_cl_pane_g1

0x4678,	// (0x0001ae89) bg_cl_pane_g2

0x4680,	// (0x0001ae91) bg_cl_pane_g3

0x4688,	// (0x0001ae99) bg_cl_pane_g4

0x4690,	// (0x0001aea1) bg_cl_pane_g5

0x4698,	// (0x0001aea9) bg_cl_pane_g6

0x46a0,	// (0x0001aeb1) bg_cl_pane_g7

0x46a8,	// (0x0001aeb9) bg_cl_pane_g8

0x46b0,	// (0x0001aec1) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000262b3) bg_cl_pane_g

0xd10e,	// (0x0002391f) aid_height_cl_leading_ParamLimits

0xd10e,	// (0x0002391f) aid_height_cl_leading

0xd11a,	// (0x0002392b) aid_height_cl_text_ParamLimits

0xd11a,	// (0x0002392b) aid_height_cl_text

0x39a1,	// (0x0001a1b2) bg_cl_header_pane_ParamLimits

0x39a1,	// (0x0001a1b2) bg_cl_header_pane

0xd132,	// (0x00023943) cl_header_pane_g1_ParamLimits

0xd132,	// (0x00023943) cl_header_pane_g1

0xd13f,	// (0x00023950) cl_header_pane_t1_ParamLimits

0xd13f,	// (0x00023950) cl_header_pane_t1

0x46b8,	// (0x0001aec9) cl_list_pane

0x41d4,	// (0x0001a9e5) hc_scroll_pane_cp01

0x10ee,	// (0x000178ff) bg_cl_header_pane_g1

0x40ba,	// (0x0001a8cb) bg_cl_header_pane_g2

0x110e,	// (0x0001791f) bg_cl_header_pane_g3

0x40ca,	// (0x0001a8db) bg_cl_header_pane_g4

0x40c2,	// (0x0001a8d3) bg_cl_header_pane_g5

0x4367,	// (0x0001ab78) bg_cl_header_pane_g6

0x40e2,	// (0x0001a8f3) bg_cl_header_pane_g7

0x40ea,	// (0x0001a8fb) bg_cl_header_pane_g8

0x40da,	// (0x0001a8eb) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000262c6) bg_cl_header_pane_g

0xd151,	// (0x00023962) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd151,	// (0x00023962) hc_cl_list_double_graphic_heading_pane

0xd162,	// (0x00023973) hc_cl_list_single_graphic_pane_ParamLimits

0xd162,	// (0x00023973) hc_cl_list_single_graphic_pane

0xd17b,	// (0x0002398c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd17b,	// (0x0002398c) hc_cl_list_single_graphic_pane_g1

0xd187,	// (0x00023998) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd187,	// (0x00023998) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x000262d9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x000262d9) hc_cl_list_single_graphic_pane_g

0xd19b,	// (0x000239ac) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd19b,	// (0x000239ac) hc_cl_list_single_graphic_pane_t1

0xd17b,	// (0x0002398c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd17b,	// (0x0002398c) hc_cl_list_double_graphic_heading_pane_g1

0xd1b0,	// (0x000239c1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd1b0,	// (0x000239c1) hc_cl_list_double_graphic_heading_pane_g2

0xd1c4,	// (0x000239d5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd1c4,	// (0x000239d5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x000262de) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x000262de) hc_cl_list_double_graphic_heading_pane_g

0xd1d8,	// (0x000239e9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd1d8,	// (0x000239e9) hc_cl_list_double_graphic_heading_pane_t1

0xd1ed,	// (0x000239fe) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd1ed,	// (0x000239fe) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x000262e5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x000262e5) hc_cl_list_double_graphic_heading_pane_t

0x8284,	// (0x0001ea95) vid4_progress_pane_g1

0x8294,	// (0x0001eaa5) vid4_progress_pane_g2

0x140b,	// (0x00017c1c) vid4_progress_pane_g3

0x82a4,	// (0x0001eab5) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x000262ea) vid4_progress_pane_g

0x82c2,	// (0x0001ead3) vid4_progress_pane_t1

0x82d7,	// (0x0001eae8) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x000262f5) vid4_progress_pane_t

0x8302,	// (0x0001eb13) wait_bar_pane_cp07

0x30ed,	// (0x000198fe) blid_firmament_pane_ParamLimits

0x3130,	// (0x00019941) popup_blid_sat_info2_window_g1

0x3154,	// (0x00019965) popup_blid_sat_info2_window_t3

0x3162,	// (0x00019973) popup_blid_sat_info2_window_t4

0x3170,	// (0x00019981) popup_blid_sat_info2_window_t5

0x317e,	// (0x0001998f) popup_blid_sat_info2_window_t6

0x318e,	// (0x0001999f) popup_blid_sat_info2_window_t7

0x319c,	// (0x000199ad) popup_blid_sat_info2_window_t8

0x31aa,	// (0x000199bb) popup_blid_sat_info2_window_t9

0x31b8,	// (0x000199c9) popup_blid_sat_info2_window_t10

0x327a,	// (0x00019a8b) aid_firma_cardinal_ParamLimits

0x328e,	// (0x00019a9f) blid_firmament_pane_t1_ParamLimits

0x32a5,	// (0x00019ab6) blid_firmament_pane_t2_ParamLimits

0x32bc,	// (0x00019acd) blid_firmament_pane_t3_ParamLimits

0x32d3,	// (0x00019ae4) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00025f08) blid_firmament_pane_t_ParamLimits

0x32ea,	// (0x00019afb) blid_sat_info_pane_ParamLimits

0x042f,	// (0x00016c40) main_cam_set_pane_ParamLimits

0xc121,	// (0x00022932) aid_size_cell_colour_35_ParamLimits

0xc13b,	// (0x0002294c) aid_size_cell_colour_112_ParamLimits

0xc152,	// (0x00022963) aid_size_cell_effect_ParamLimits

0x042f,	// (0x00016c40) bg_tb_trans_pane_cp02_ParamLimits

0x1439,	// (0x00017c4a) heading_imed_pane_ParamLimits

0xc16c,	// (0x0002297d) listscroll_imed_pane_ParamLimits

0x2426,	// (0x00018c37) popup_call2_audio_first_window_g5_ParamLimits

0x2426,	// (0x00018c37) popup_call2_audio_first_window_g5

0x7a53,	// (0x0001e264) aid_size_touch_image3_arrow_left_ParamLimits

0x7a53,	// (0x0001e264) aid_size_touch_image3_arrow_left

0x7a69,	// (0x0001e27a) aid_size_touch_image3_arrow_right_ParamLimits

0x7a69,	// (0x0001e27a) aid_size_touch_image3_arrow_right

0x82ed,	// (0x0001eafe) vid4_progress_pane_t3

0xc409,	// (0x00022c1a) main_hwr_training_symbol_option_pane_ParamLimits

0xc409,	// (0x00022c1a) main_hwr_training_symbol_option_pane

0x3b00,	// (0x0001a311) popup_hwr_training_preview_window_ParamLimits

0x3b00,	// (0x0001a311) popup_hwr_training_preview_window

0x7779,	// (0x0001df8a) hwr_training_navi_pane_g5_ParamLimits

0x7779,	// (0x0001df8a) hwr_training_navi_pane_g5

0x40a8,	// (0x0001a8b9) popup_char_count_window

0x81b7,	// (0x0001e9c8) bg_popup_sub_pane_cp20_ParamLimits

0x81c5,	// (0x0001e9d6) list_vitu2_match_list_pane_ParamLimits

0x81d1,	// (0x0001e9e2) vitu2_page_scroll_pane_ParamLimits

0x81d1,	// (0x0001e9e2) vitu2_page_scroll_pane

0x47b3,	// (0x0001afc4) list_single_hwr_training_symbol_option_pane_ParamLimits

0x47b3,	// (0x0001afc4) list_single_hwr_training_symbol_option_pane

0x47c6,	// (0x0001afd7) list_single_hwr_training_symbol_option_pane_g1

0x47ce,	// (0x0001afdf) list_single_hwr_training_symbol_option_pane_t1

0x47dc,	// (0x0001afed) bg_button_pane_cp023

0x47e5,	// (0x0001aff6) bg_button_pane_cp024

0xd202,	// (0x00023a13) vitu2_page_scroll_pane_g1

0xd20a,	// (0x00023a1b) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x000262fc) vitu2_page_scroll_pane_g

0xd212,	// (0x00023a23) vitu2_page_scroll_pane_t1

0x4818,	// (0x0001b029) popup_char_count_window_g1

0x4821,	// (0x0001b032) popup_char_count_window_g2

0x482a,	// (0x0001b03b) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00026301) popup_char_count_window_g

0x4833,	// (0x0001b044) popup_char_count_window_t1

0x03bf,	// (0x00016bd0) main_vded2_pane

0x37f1,	// (0x0001a002) aid_size_cell_imed_line

0x37fb,	// (0x0001a00c) grid_imed_line_width_pane

0x7dc7,	// (0x0001e5d8) vid4_indicators_pane_g4

0x4841,	// (0x0001b052) cell_imed_line_width_pane_ParamLimits

0x4841,	// (0x0001b052) cell_imed_line_width_pane

0x4855,	// (0x0001b066) cell_imed_line_width_pane_g1

0x485e,	// (0x0001b06f) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00026308) cell_imed_line_width_pane_g

0xd221,	// (0x00023a32) main_vded2_pane_g1_ParamLimits

0xd221,	// (0x00023a32) main_vded2_pane_g1

0xd22e,	// (0x00023a3f) main_vded2_pane_g2_ParamLimits

0xd22e,	// (0x00023a3f) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0002630d) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0002630d) main_vded2_pane_g

0xd23c,	// (0x00023a4d) vded2_slider_pane_ParamLimits

0xd23c,	// (0x00023a4d) vded2_slider_pane

0xd249,	// (0x00023a5a) aid_size_touch_vded2_end

0xd253,	// (0x00023a64) aid_size_touch_vded2_playhead

0x4866,	// (0x0001b077) aid_size_touch_vded2_start

0x486e,	// (0x0001b07f) vded2_slider_bg_pane

0x4877,	// (0x0001b088) vded2_slider_pane_g1

0x4880,	// (0x0001b091) vded2_slider_pane_g2

0xd25b,	// (0x00023a6c) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00026312) vded2_slider_pane_g

0x4888,	// (0x0001b099) vded2_slider_bg_pane_g1

0x4891,	// (0x0001b0a2) vded2_slider_bg_pane_g2

0x489a,	// (0x0001b0ab) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00026319) vded2_slider_bg_pane_g

0xa8ab,	// (0x000210bc) aid_postcard_touch_down_pane_ParamLimits

0xa8ab,	// (0x000210bc) aid_postcard_touch_down_pane

0xa8bb,	// (0x000210cc) aid_postcard_touch_up_pane_ParamLimits

0xa8bb,	// (0x000210cc) aid_postcard_touch_up_pane

0x03bf,	// (0x00016bd0) main_blid2_pane

0x2e02,	// (0x00019613) popup_blid2_search_window

0x03bf,	// (0x00016bd0) blid2_gps_pane

0x03bf,	// (0x00016bd0) blid2_navig_pane

0x03bf,	// (0x00016bd0) blid2_search_pane

0x03bf,	// (0x00016bd0) blid2_tripm_pane

0xd264,	// (0x00023a75) blid2_search_pane_g1_ParamLimits

0xd264,	// (0x00023a75) blid2_search_pane_g1

0xd274,	// (0x00023a85) blid2_search_pane_t1_ParamLimits

0xd274,	// (0x00023a85) blid2_search_pane_t1

0xd286,	// (0x00023a97) aid_size_cell_blid2_gps_ParamLimits

0xd286,	// (0x00023a97) aid_size_cell_blid2_gps

0xd296,	// (0x00023aa7) blid2_gps_pane_g1_ParamLimits

0xd296,	// (0x00023aa7) blid2_gps_pane_g1

0xd2a2,	// (0x00023ab3) grid_blid2_satellite_pane_ParamLimits

0xd2a2,	// (0x00023ab3) grid_blid2_satellite_pane

0xd2b2,	// (0x00023ac3) blid2_navig_pane_g1_ParamLimits

0xd2b2,	// (0x00023ac3) blid2_navig_pane_g1

0xd2be,	// (0x00023acf) blid2_navig_pane_t1_ParamLimits

0xd2be,	// (0x00023acf) blid2_navig_pane_t1

0xd2d0,	// (0x00023ae1) blid2_navig_pane_t2_ParamLimits

0xd2d0,	// (0x00023ae1) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00026320) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00026320) blid2_navig_pane_t

0xd2e2,	// (0x00023af3) blid2_navig_ring_pane_ParamLimits

0xd2e2,	// (0x00023af3) blid2_navig_ring_pane

0xd2f2,	// (0x00023b03) blid2_speed_pane_ParamLimits

0xd2f2,	// (0x00023b03) blid2_speed_pane

0xd2fe,	// (0x00023b0f) blid2_tripm_pane_g1_ParamLimits

0xd2fe,	// (0x00023b0f) blid2_tripm_pane_g1

0xd30e,	// (0x00023b1f) blid2_tripm_pane_g2_ParamLimits

0xd30e,	// (0x00023b1f) blid2_tripm_pane_g2

0xd31a,	// (0x00023b2b) blid2_tripm_pane_g3_ParamLimits

0xd31a,	// (0x00023b2b) blid2_tripm_pane_g3

0xd326,	// (0x00023b37) blid2_tripm_pane_g4_ParamLimits

0xd326,	// (0x00023b37) blid2_tripm_pane_g4

0xd332,	// (0x00023b43) blid2_tripm_pane_g5_ParamLimits

0xd332,	// (0x00023b43) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00026325) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00026325) blid2_tripm_pane_g

0xd34e,	// (0x00023b5f) blid2_tripm_pane_t1_ParamLimits

0xd34e,	// (0x00023b5f) blid2_tripm_pane_t1

0xd362,	// (0x00023b73) blid2_tripm_pane_t2_ParamLimits

0xd362,	// (0x00023b73) blid2_tripm_pane_t2

0xd374,	// (0x00023b85) blid2_tripm_pane_t3_ParamLimits

0xd374,	// (0x00023b85) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00026332) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00026332) blid2_tripm_pane_t

0xd3a6,	// (0x00023bb7) cell_blid2_satellite_pane_ParamLimits

0xd3a6,	// (0x00023bb7) cell_blid2_satellite_pane

0xd3c0,	// (0x00023bd1) cell_blid2_satellite_pane_g1

0x48a3,	// (0x0001b0b4) cell_blid2_satellite_pane_t1

0x32fa,	// (0x00019b0b) blid2_speed_pane_g1

0x48b1,	// (0x0001b0c2) blid2_speed_pane_t1

0x48bf,	// (0x0001b0d0) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0002633b) blid2_speed_pane_t

0x32fa,	// (0x00019b0b) blid2_navig_ring_pane_g1

0xd3c9,	// (0x00023bda) blid2_navig_ring_pane_g2

0xd3d1,	// (0x00023be2) blid2_navig_ring_pane_g3

0xd3d9,	// (0x00023bea) blid2_navig_ring_pane_g4

0xd3e1,	// (0x00023bf2) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00026340) blid2_navig_ring_pane_g

0x03bf,	// (0x00016bd0) bg_popup_window_pane_cp011

0x48cd,	// (0x0001b0de) popup_blid2_search_window_g1

0x48d5,	// (0x0001b0e6) popup_blid2_search_window_t1

0x48e3,	// (0x0001b0f4) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0002634b) popup_blid2_search_window_t

0x0ffd,	// (0x0001780e) main_browser_pane_g1

0x0ba4,	// (0x000173b5) main_browser_pane_ParamLimits

0x7d7c,	// (0x0001e58d) bg_button_pane_cp011_ParamLimits

0x80d9,	// (0x0001e8ea) cell_vitu2_function_pane_g1_ParamLimits

0x2df4,	// (0x00019605) bg_popup_sub_pane_cp22_ParamLimits

0xcd9f,	// (0x000235b0) input_focus_pane_cp08_ParamLimits

0xcdb6,	// (0x000235c7) popup_vitu2_query_button_pane_ParamLimits

0xcdb6,	// (0x000235c7) popup_vitu2_query_button_pane

0xcdc7,	// (0x000235d8) popup_vitu2_query_input_button_pane

0x43dc,	// (0x0001abed) popup_vitu2_query_window_g1_ParamLimits

0xcdd1,	// (0x000235e2) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0002624c) popup_vitu2_query_window_g_ParamLimits

0x03bf,	// (0x00016bd0) bg_button_pane_cp026

0xd3e9,	// (0x00023bfa) popup_vitu2_query_input_button_pane_g1

0x03bf,	// (0x00016bd0) bg_button_pane_cp025

0x48f1,	// (0x0001b102) popup_vitu2_query_button_pane_t1

0xb703,	// (0x00021f14) main_mp3_pane_t6

0xb713,	// (0x00021f24) popup_slider_window_cp01

0x7c9d,	// (0x0001e4ae) cam4_battery_pane

0x7d8a,	// (0x0001e59b) cam4_battery_pane_cp02

0x827c,	// (0x0001ea8d) cam4_battery_pane_cp01

0x827c,	// (0x0001ea8d) cam4_battery_pane_cp03

0x48ff,	// (0x0001b110) cam4_battery_pane_g1

0x32fa,	// (0x00019b0b) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00026350) cam4_battery_pane_g

0x31c6,	// (0x000199d7) popup_blid_sat_info2_window_t11

0xa255,	// (0x00020a66) aid_size_touch_mv_arrow_left_ParamLimits

0xa27e,	// (0x00020a8f) aid_size_touch_mv_arrow_right_ParamLimits

0x1897,	// (0x000180a8) navi_pane_g1_ParamLimits

0xa2a7,	// (0x00020ab8) navi_pane_g2_ParamLimits

0xa2d5,	// (0x00020ae6) navi_pane_g3_ParamLimits

0xf409,	// (0x00025c1a) navi_pane_g_ParamLimits

0xa32f,	// (0x00020b40) navi_pane_mv_t1_ParamLimits

0xc178,	// (0x00022989) grid_imed_effect_pane_ParamLimits

0x9070,	// (0x0001f881) aid_placing_vt_slider_lsc

0x0f4e,	// (0x0001775f) aid_placing_vt_slider_prt

0x042f,	// (0x00016c40) bg_tb_trans_pane_cp01_ParamLimits

0x3486,	// (0x00019c97) popup_image_details_window_g1_ParamLimits

0x3499,	// (0x00019caa) popup_image_details_window_g2_ParamLimits

0x34ae,	// (0x00019cbf) popup_image_details_window_g3_ParamLimits

0x34ae,	// (0x00019cbf) popup_image_details_window_g3

0xf73c,	// (0x00025f4d) popup_image_details_window_g_ParamLimits

0x34c2,	// (0x00019cd3) popup_image_details_window_t1_ParamLimits

0x34d4,	// (0x00019ce5) popup_image_details_window_t2_ParamLimits

0x34ed,	// (0x00019cfe) popup_image_details_window_t3_ParamLimits

0x3501,	// (0x00019d12) popup_image_details_window_t4_ParamLimits

0x351c,	// (0x00019d2d) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00025f54) popup_image_details_window_t_ParamLimits

0xd126,	// (0x00023937) cl_header_name_pane_ParamLimits

0xd126,	// (0x00023937) cl_header_name_pane

0xd3f1,	// (0x00023c02) cl_header_name_pane_t1_ParamLimits

0xd3f1,	// (0x00023c02) cl_header_name_pane_t1

0xd408,	// (0x00023c19) cl_header_name_pane_t2_ParamLimits

0xd408,	// (0x00023c19) cl_header_name_pane_t2

0xd432,	// (0x00023c43) cl_header_name_pane_t3_ParamLimits

0xd432,	// (0x00023c43) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00026355) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00026355) cl_header_name_pane_t

0xa300,	// (0x00020b11) navi_pane_mv_g2_ParamLimits

0x4036,	// (0x0001a847) field_vitu2_entry_pane_g1_ParamLimits

0x4042,	// (0x0001a853) field_vitu2_entry_pane_g2_ParamLimits

0x404e,	// (0x0001a85f) field_vitu2_entry_pane_g3_ParamLimits

0x404e,	// (0x0001a85f) field_vitu2_entry_pane_g3

0xf93a,	// (0x0002614b) field_vitu2_entry_pane_g_ParamLimits

0x7fae,	// (0x0001e7bf) cell_vitu2_itu_pane_g1_ParamLimits

0x7fbe,	// (0x0001e7cf) cell_vitu2_itu_pane_g2_ParamLimits

0x7fbe,	// (0x0001e7cf) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00026157) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00026157) cell_vitu2_itu_pane_g

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp05_ParamLimits

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp05

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp03

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp04

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp10_ParamLimits

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp10

0xd0c8,	// (0x000238d9) bg_vkb2_func_pane_cp08

0xd0ae,	// (0x000238bf) bg_vkb2_func_pane_cp06

0xd0bc,	// (0x000238cd) bg_vkb2_func_pane_cp07

0x47ee,	// (0x0001afff) bg_vkb2_func_pane_cp11_ParamLimits

0x47ee,	// (0x0001afff) bg_vkb2_func_pane_cp11

0x4803,	// (0x0001b014) bg_vkb2_func_pane_cp12_ParamLimits

0x4803,	// (0x0001b014) bg_vkb2_func_pane_cp12

0x03bf,	// (0x00016bd0) bg_vkb2_func_pane_cp09

0x40ba,	// (0x0001a8cb) bg_vkb2_func_pane_g1

0x110e,	// (0x0001791f) bg_vkb2_func_pane_g2

0x40c2,	// (0x0001a8d3) bg_vkb2_func_pane_g3

0x40ca,	// (0x0001a8db) bg_vkb2_func_pane_g4

0x4367,	// (0x0001ab78) bg_vkb2_func_pane_g5

0x40e2,	// (0x0001a8f3) bg_vkb2_func_pane_g6

0x40ea,	// (0x0001a8fb) bg_vkb2_func_pane_g7

0x40da,	// (0x0001a8eb) bg_vkb2_func_pane_g8

0x10ee,	// (0x000178ff) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0002635c) bg_vkb2_func_pane_g

0xd340,	// (0x00023b51) blid2_tripm_pane_g6_ParamLimits

0xd340,	// (0x00023b51) blid2_tripm_pane_g6

0x3e0d,	// (0x0001a61e) mp4_progress_pane_g1

0xd39a,	// (0x00023bab) blid2_tripm_values_pane_ParamLimits

0xd39a,	// (0x00023bab) blid2_tripm_values_pane

0xd457,	// (0x00023c68) blid2_tripm_values_pane_t1

0xd465,	// (0x00023c76) blid2_tripm_values_pane_t2

0xd473,	// (0x00023c84) blid2_tripm_values_pane_t3

0xd481,	// (0x00023c92) blid2_tripm_values_pane_t4

0xd48f,	// (0x00023ca0) blid2_tripm_values_pane_t5

0xd49d,	// (0x00023cae) blid2_tripm_values_pane_t6

0xd4ab,	// (0x00023cbc) blid2_tripm_values_pane_t7

0xd4b9,	// (0x00023cca) blid2_tripm_values_pane_t8

0xd4c7,	// (0x00023cd8) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0002636f) blid2_tripm_values_pane_t

0x90b0,	// (0x0001f8c1) call_video_pane_t1_ParamLimits

0x90d1,	// (0x0001f8e2) call_video_pane_t2_ParamLimits

0xf292,	// (0x00025aa3) call_video_pane_t_ParamLimits

0xa849,	// (0x0002105a) msg_header_pane_g1_ParamLimits

0x1ada,	// (0x000182eb) msg_header_pane_g2_ParamLimits

0x1ada,	// (0x000182eb) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00025cbd) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00025cbd) msg_header_pane_g

0x0ba4,	// (0x000173b5) main_clock2_pane_ParamLimits

0xbf80,	// (0x00022791) grid_clock2_toolbar_pane_ParamLimits

0xbf80,	// (0x00022791) grid_clock2_toolbar_pane

0xbf80,	// (0x00022791) listscroll_clock2_pane_ParamLimits

0xbf80,	// (0x00022791) listscroll_clock2_pane

0xc02d,	// (0x0002283e) main_clock2_pane_t3_ParamLimits

0xc02d,	// (0x0002283e) main_clock2_pane_t3

0xc03f,	// (0x00022850) main_clock2_pane_t4_ParamLimits

0xc03f,	// (0x00022850) main_clock2_pane_t4

0x4909,	// (0x0001b11a) cell_clock2_toolbar_pane

0x4911,	// (0x0001b122) cell_clock2_toolbar_pane_cp01

0x4911,	// (0x0001b122) cell_clock2_toolbar_pane_cp02

0x4919,	// (0x0001b12a) cell_clock2_toolbar_pane_cp03

0x4921,	// (0x0001b132) list_clock2_pane

0x17ee,	// (0x00017fff) scroll_pane_cp10

0x4929,	// (0x0001b13a) list_single_clock2_pane_ParamLimits

0x4929,	// (0x0001b13a) list_single_clock2_pane

0x1937,	// (0x00018148) list_highlight_pane_cp08

0x4936,	// (0x0001b147) list_single_clock2_pane_t1

0x4944,	// (0x0001b155) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x00026382) list_single_clock2_pane_t

0x03bf,	// (0x00016bd0) bg_button_pane_cp10

0x4952,	// (0x0001b163) cell_clock2_toolbar_pane_g1

0x7385,	// (0x0001db96) aid_main_viewer_pane_g1_ParamLimits

0x7385,	// (0x0001db96) aid_main_viewer_pane_g1

0x7391,	// (0x0001dba2) aid_main_viewer_pane_g2_ParamLimits

0x7391,	// (0x0001dba2) aid_main_viewer_pane_g2

0xa867,	// (0x00021078) aid_main_viewer_pane_g3_ParamLimits

0xa867,	// (0x00021078) aid_main_viewer_pane_g3

0xa878,	// (0x00021089) aid_main_viewer_pane_g4_ParamLimits

0xa878,	// (0x00021089) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00025cce) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00025cce) aid_main_viewer_pane_g

0xafb6,	// (0x000217c7) main_calc_pane_ParamLimits

0xafc3,	// (0x000217d4) main_dialer2_pane_ParamLimits

0x03bf,	// (0x00016bd0) main_cam6_pane

0x03bf,	// (0x00016bd0) main_vid6_pane

0xbf8c,	// (0x0002279d) listscroll_gen_pane_cp06_ParamLimits

0xbf8c,	// (0x0002279d) listscroll_gen_pane_cp06

0xc051,	// (0x00022862) main_clock2_pane_t5_ParamLimits

0xc051,	// (0x00022862) main_clock2_pane_t5

0xc09a,	// (0x000228ab) aid_call2_pane_cp10_ParamLimits

0xc0ac,	// (0x000228bd) aid_call_pane_cp10_ParamLimits

0x186c,	// (0x0001807d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x186c,	// (0x0001807d) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc0be,	// (0x000228cf) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc0be,	// (0x000228cf) popup_clock_analogue_window_cp10_g4_ParamLimits

0x186c,	// (0x0001807d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00026004) popup_clock_analogue_window_cp10_g_ParamLimits

0xc0d0,	// (0x000228e1) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc4e6,	// (0x00022cf7) cell_dialer2_keypad_pane_g2_ParamLimits

0xc4e6,	// (0x00022cf7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x000260ea) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x000260ea) cell_dialer2_keypad_pane_g

0xc502,	// (0x00022d13) cell_dialer2_keypad_pane_t1

0xc910,	// (0x00023121) main_cset_text2_pane_ParamLimits

0xc910,	// (0x00023121) main_cset_text2_pane

0x45c8,	// (0x0001add9) area_vitu2_query_pane_g1_ParamLimits

0xd04d,	// (0x0002385e) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0002629f) area_vitu2_query_pane_g_ParamLimits

0x464c,	// (0x0001ae5d) area_vitu2_query_pane_t7_ParamLimits

0x464c,	// (0x0001ae5d) area_vitu2_query_pane_t7

0xd0ae,	// (0x000238bf) bg_button_pane_cp018_ParamLimits

0xd0bc,	// (0x000238cd) bg_button_pane_cp021_ParamLimits

0xd0c8,	// (0x000238d9) bg_button_pane_cp022_ParamLimits

0xd0c8,	// (0x000238d9) bg_vkb2_func_pane_cp08_ParamLimits

0xd0ae,	// (0x000238bf) bg_vkb2_func_pane_cp06_ParamLimits

0xd0bc,	// (0x000238cd) bg_vkb2_func_pane_cp07_ParamLimits

0xd0d9,	// (0x000238ea) input_focus_pane_cp09_ParamLimits

0x8314,	// (0x0001eb25) cam6_autofocus_pane_ParamLimits

0x8314,	// (0x0001eb25) cam6_autofocus_pane

0x8336,	// (0x0001eb47) cam6_image_uncrop_pane_ParamLimits

0x8336,	// (0x0001eb47) cam6_image_uncrop_pane

0x8363,	// (0x0001eb74) cam6_indi_pane_ParamLimits

0x8363,	// (0x0001eb74) cam6_indi_pane

0x837d,	// (0x0001eb8e) cam6_mode_pane_ParamLimits

0x837d,	// (0x0001eb8e) cam6_mode_pane

0x8391,	// (0x0001eba2) cam6_timer_pane_ParamLimits

0x8391,	// (0x0001eba2) cam6_timer_pane

0x839d,	// (0x0001ebae) cam6_zoom_pane_ParamLimits

0x839d,	// (0x0001ebae) cam6_zoom_pane

0xd4d5,	// (0x00023ce6) cam6_mode_pane_g1_ParamLimits

0xd4d5,	// (0x00023ce6) cam6_mode_pane_g1

0xd4e1,	// (0x00023cf2) cam6_mode_pane_g2_ParamLimits

0xd4e1,	// (0x00023cf2) cam6_mode_pane_g2

0xd4ed,	// (0x00023cfe) cam6_mode_pane_g3_ParamLimits

0xd4ed,	// (0x00023cfe) cam6_mode_pane_g3

0xd4f9,	// (0x00023d0a) cam6_mode_pane_g4_ParamLimits

0xd4f9,	// (0x00023d0a) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00026387) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00026387) cam6_mode_pane_g

0x4968,	// (0x0001b179) bg_tb_trans_pane_cp08_ParamLimits

0x4968,	// (0x0001b179) bg_tb_trans_pane_cp08

0x4976,	// (0x0001b187) cam6_battery_pane_ParamLimits

0x4976,	// (0x0001b187) cam6_battery_pane

0x498c,	// (0x0001b19d) cam6_indi_pane_g1_ParamLimits

0x498c,	// (0x0001b19d) cam6_indi_pane_g1

0x499e,	// (0x0001b1af) cam6_indi_pane_g2_ParamLimits

0x499e,	// (0x0001b1af) cam6_indi_pane_g2

0x49b0,	// (0x0001b1c1) cam6_indi_pane_g3_ParamLimits

0x49b0,	// (0x0001b1c1) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00026390) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00026390) cam6_indi_pane_g

0x49c2,	// (0x0001b1d3) cam6_indi_pane_t1_ParamLimits

0x49c2,	// (0x0001b1d3) cam6_indi_pane_t1

0xc641,	// (0x00022e52) cam6_autofocus_pane_g1

0xc639,	// (0x00022e4a) cam6_autofocus_pane_g2

0xc651,	// (0x00022e62) cam6_autofocus_pane_g3

0xc649,	// (0x00022e5a) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00026397) cam6_autofocus_pane_g

0x49e8,	// (0x0001b1f9) cam6_timer_pane_g1

0x49f0,	// (0x0001b201) cam6_timer_pane_t1

0x49fe,	// (0x0001b20f) cam6_zoom_cont_pane

0x4a06,	// (0x0001b217) cam6_zoom_pane_g1

0x4a0e,	// (0x0001b21f) cam6_zoom_pane_g2

0xd505,	// (0x00023d16) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x000263a0) cam6_zoom_pane_g

0x32fa,	// (0x00019b0b) cam6_battery_pane_g1

0x32fa,	// (0x00019b0b) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00025f11) cam6_battery_pane_g

0x4a16,	// (0x0001b227) cam6_zoom_cont_pane_g1

0x4a1f,	// (0x0001b230) cam6_zoom_cont_pane_g2

0x4a28,	// (0x0001b239) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x000263a7) cam6_zoom_cont_pane_g

0xd522,	// (0x00023d33) cam6_mode_pane_cp_ParamLimits

0xd522,	// (0x00023d33) cam6_mode_pane_cp

0xd536,	// (0x00023d47) cam6_zoom_pane_cp_ParamLimits

0xd536,	// (0x00023d47) cam6_zoom_pane_cp

0xd54e,	// (0x00023d5f) vid6_image_uncrop_cif_pane_ParamLimits

0xd54e,	// (0x00023d5f) vid6_image_uncrop_cif_pane

0xd57a,	// (0x00023d8b) vid6_image_uncrop_nhd_pane_ParamLimits

0xd57a,	// (0x00023d8b) vid6_image_uncrop_nhd_pane

0xd597,	// (0x00023da8) vid6_image_uncrop_vga_pane_ParamLimits

0xd597,	// (0x00023da8) vid6_image_uncrop_vga_pane

0xd5b6,	// (0x00023dc7) vid6_image_uncrop_wvga_pane_ParamLimits

0xd5b6,	// (0x00023dc7) vid6_image_uncrop_wvga_pane

0xd5d3,	// (0x00023de4) vid6_indi_pane_ParamLimits

0xd5d3,	// (0x00023de4) vid6_indi_pane

0x4968,	// (0x0001b179) bg_tb_trans_pane_cp09_ParamLimits

0x4968,	// (0x0001b179) bg_tb_trans_pane_cp09

0x4a40,	// (0x0001b251) cam6_battery_pane_cp_ParamLimits

0x4a40,	// (0x0001b251) cam6_battery_pane_cp

0x4a4c,	// (0x0001b25d) vid6_indi_pane_g1_ParamLimits

0x4a4c,	// (0x0001b25d) vid6_indi_pane_g1

0x4a5e,	// (0x0001b26f) vid6_indi_pane_g2_ParamLimits

0x4a5e,	// (0x0001b26f) vid6_indi_pane_g2

0x4a70,	// (0x0001b281) vid6_indi_pane_g3_ParamLimits

0x4a70,	// (0x0001b281) vid6_indi_pane_g3

0x4a85,	// (0x0001b296) vid6_indi_pane_g4_ParamLimits

0x4a85,	// (0x0001b296) vid6_indi_pane_g4

0x4a9a,	// (0x0001b2ab) vid6_indi_pane_g5_ParamLimits

0x4a9a,	// (0x0001b2ab) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x000263ae) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x000263ae) vid6_indi_pane_g

0x4ab4,	// (0x0001b2c5) vid6_indi_pane_t1_ParamLimits

0x4ab4,	// (0x0001b2c5) vid6_indi_pane_t1

0x4aca,	// (0x0001b2db) vid6_indi_pane_t2_ParamLimits

0x4aca,	// (0x0001b2db) vid6_indi_pane_t2

0x4af2,	// (0x0001b303) vid6_indi_pane_t3_ParamLimits

0x4af2,	// (0x0001b303) vid6_indi_pane_t3

0x4b1a,	// (0x0001b32b) vid6_indi_pane_t4_ParamLimits

0x4b1a,	// (0x0001b32b) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x000263b9) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x000263b9) vid6_indi_pane_t

0x4b3e,	// (0x0001b34f) wait_bar_pane_cp08

0xd5f8,	// (0x00023e09) main_cset_text2_pane_t1_ParamLimits

0xd5f8,	// (0x00023e09) main_cset_text2_pane_t1

0xd50d,	// (0x00023d1e) listscroll_gen_pane_cp06_t1_ParamLimits

0xd50d,	// (0x00023d1e) listscroll_gen_pane_cp06_t1

0x03bf,	// (0x00016bd0) main_cam6_set_pane

0x7c8f,	// (0x0001e4a0) bg_tb_trans_pane_cp06_ParamLimits

0x7ca5,	// (0x0001e4b6) cam4_indicators_pane_g1_ParamLimits

0x7cb6,	// (0x0001e4c7) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00026127) cam4_indicators_pane_g_ParamLimits

0x7cd4,	// (0x0001e4e5) cam4_indicators_pane_t1_ParamLimits

0x7d7c,	// (0x0001e58d) bg_tb_trans_pane_cp07_ParamLimits

0x7d94,	// (0x0001e5a5) vid4_indicators_pane_g1_ParamLimits

0x7da5,	// (0x0001e5b6) vid4_indicators_pane_g2_ParamLimits

0x7db6,	// (0x0001e5c7) vid4_indicators_pane_g3_ParamLimits

0x7dc7,	// (0x0001e5d8) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00026139) vid4_indicators_pane_g_ParamLimits

0x7de3,	// (0x0001e5f4) vid4_indicators_pane_t1_ParamLimits

0x8284,	// (0x0001ea95) vid4_progress_pane_g1_ParamLimits

0x8294,	// (0x0001eaa5) vid4_progress_pane_g2_ParamLimits

0x140b,	// (0x00017c1c) vid4_progress_pane_g3_ParamLimits

0x82a4,	// (0x0001eab5) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x000262ea) vid4_progress_pane_g_ParamLimits

0x82c2,	// (0x0001ead3) vid4_progress_pane_t1_ParamLimits

0x82d7,	// (0x0001eae8) vid4_progress_pane_t2_ParamLimits

0x82ed,	// (0x0001eafe) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x000262f5) vid4_progress_pane_t_ParamLimits

0x8302,	// (0x0001eb13) wait_bar_pane_cp07_ParamLimits

0xd62b,	// (0x00023e3c) main_cam6_set_pane_g2_ParamLimits

0xd62b,	// (0x00023e3c) main_cam6_set_pane_g2

0xd637,	// (0x00023e48) main_cset6_listscroll_pane_ParamLimits

0xd637,	// (0x00023e48) main_cset6_listscroll_pane

0xd662,	// (0x00023e73) main_cset6_slider_pane_ParamLimits

0xd662,	// (0x00023e73) main_cset6_slider_pane

0xd66e,	// (0x00023e7f) main_cset6_text2_pane_ParamLimits

0xd66e,	// (0x00023e7f) main_cset6_text2_pane

0x4b4d,	// (0x0001b35e) main_cset6_text_pane

0x4b55,	// (0x0001b366) main_cset_list_pane_copy1_ParamLimits

0x4b55,	// (0x0001b366) main_cset_list_pane_copy1

0x4b65,	// (0x0001b376) scroll_pane_cp028_copy1

0xd681,	// (0x00023e92) cset_list_set_pane_copy1

0xd694,	// (0x00023ea5) aid_position_infowindow_above_copy1

0xd69c,	// (0x00023ead) aid_position_infowindow_below_copy1

0xd6a4,	// (0x00023eb5) cset_list_set_pane_g1_copy1

0x42ad,	// (0x0001aabe) cset_list_set_pane_g3_copy1_ParamLimits

0x42ad,	// (0x0001aabe) cset_list_set_pane_g3_copy1

0x42bc,	// (0x0001aacd) cset_list_set_pane_t1_copy1_ParamLimits

0x42bc,	// (0x0001aacd) cset_list_set_pane_t1_copy1

0x042f,	// (0x00016c40) list_highlight_pane_cp021_copy1_ParamLimits

0x042f,	// (0x00016c40) list_highlight_pane_cp021_copy1

0x4b6e,	// (0x0001b37f) cset6_slider_pane_ParamLimits

0x4b6e,	// (0x0001b37f) cset6_slider_pane

0x4b9a,	// (0x0001b3ab) main_cset6_slider_pane_g1_ParamLimits

0x4b9a,	// (0x0001b3ab) main_cset6_slider_pane_g1

0xd6ac,	// (0x00023ebd) main_cset6_slider_pane_g2_ParamLimits

0xd6ac,	// (0x00023ebd) main_cset6_slider_pane_g2

0x4bc2,	// (0x0001b3d3) main_cset6_slider_pane_g3_ParamLimits

0x4bc2,	// (0x0001b3d3) main_cset6_slider_pane_g3

0xd6d4,	// (0x00023ee5) main_cset6_slider_pane_g4_ParamLimits

0xd6d4,	// (0x00023ee5) main_cset6_slider_pane_g4

0xd6e0,	// (0x00023ef1) main_cset6_slider_pane_g5_ParamLimits

0xd6e0,	// (0x00023ef1) main_cset6_slider_pane_g5

0x41e9,	// (0x0001a9fa) main_cset6_slider_pane_g7_ParamLimits

0x41e9,	// (0x0001a9fa) main_cset6_slider_pane_g7

0x41f5,	// (0x0001aa06) main_cset6_slider_pane_g8_ParamLimits

0x41f5,	// (0x0001aa06) main_cset6_slider_pane_g8

0xd6ee,	// (0x00023eff) main_cset6_slider_pane_g9_ParamLimits

0xd6ee,	// (0x00023eff) main_cset6_slider_pane_g9

0xd6fa,	// (0x00023f0b) main_cset6_slider_pane_g10_ParamLimits

0xd6fa,	// (0x00023f0b) main_cset6_slider_pane_g10

0xd706,	// (0x00023f17) main_cset6_slider_pane_g11_ParamLimits

0xd706,	// (0x00023f17) main_cset6_slider_pane_g11

0xd712,	// (0x00023f23) main_cset6_slider_pane_g12_ParamLimits

0xd712,	// (0x00023f23) main_cset6_slider_pane_g12

0xd71e,	// (0x00023f2f) main_cset6_slider_pane_g13_ParamLimits

0xd71e,	// (0x00023f2f) main_cset6_slider_pane_g13

0xd72a,	// (0x00023f3b) main_cset6_slider_pane_g14_ParamLimits

0xd72a,	// (0x00023f3b) main_cset6_slider_pane_g14

0xd736,	// (0x00023f47) main_cset6_slider_pane_g15_ParamLimits

0xd736,	// (0x00023f47) main_cset6_slider_pane_g15

0xd74e,	// (0x00023f5f) main_cset6_slider_pane_g16_ParamLimits

0xd74e,	// (0x00023f5f) main_cset6_slider_pane_g16

0xd75c,	// (0x00023f6d) main_cset6_slider_pane_g17_ParamLimits

0xd75c,	// (0x00023f6d) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x000263c2) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x000263c2) main_cset6_slider_pane_g

0x4bce,	// (0x0001b3df) main_cset6_slider_pane_t1_ParamLimits

0x4bce,	// (0x0001b3df) main_cset6_slider_pane_t1

0xd782,	// (0x00023f93) main_cset6_slider_pane_t2_ParamLimits

0xd782,	// (0x00023f93) main_cset6_slider_pane_t2

0xd7ad,	// (0x00023fbe) main_cset6_slider_pane_t3_ParamLimits

0xd7ad,	// (0x00023fbe) main_cset6_slider_pane_t3

0xd7d8,	// (0x00023fe9) main_cset6_slider_pane_t4_ParamLimits

0xd7d8,	// (0x00023fe9) main_cset6_slider_pane_t4

0xd803,	// (0x00024014) main_cset6_slider_pane_t5_ParamLimits

0xd803,	// (0x00024014) main_cset6_slider_pane_t5

0x4c0f,	// (0x0001b420) main_cset6_slider_pane_t7_ParamLimits

0x4c0f,	// (0x0001b420) main_cset6_slider_pane_t7

0xd830,	// (0x00024041) main_cset6_slider_pane_t8_ParamLimits

0xd830,	// (0x00024041) main_cset6_slider_pane_t8

0xd854,	// (0x00024065) main_cset6_slider_pane_t9_ParamLimits

0xd854,	// (0x00024065) main_cset6_slider_pane_t9

0xd878,	// (0x00024089) main_cset6_slider_pane_t10_ParamLimits

0xd878,	// (0x00024089) main_cset6_slider_pane_t10

0xd89c,	// (0x000240ad) main_cset6_slider_pane_t11_ParamLimits

0xd89c,	// (0x000240ad) main_cset6_slider_pane_t11

0x4c45,	// (0x0001b456) main_cset6_slider_pane_t14_ParamLimits

0x4c45,	// (0x0001b456) main_cset6_slider_pane_t14

0x4c7e,	// (0x0001b48f) main_cset6_slider_pane_t15_ParamLimits

0x4c7e,	// (0x0001b48f) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x000263e7) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x000263e7) main_cset6_slider_pane_t

0x42f1,	// (0x0001ab02) cset_slider_pane_g1_copy1

0x42fa,	// (0x0001ab0b) cset_slider_pane_g2_copy1

0x4303,	// (0x0001ab14) cset_slider_pane_g3_copy1

0x03bf,	// (0x00016bd0) bg_popup_sub_pane_cp011_copy1

0x43e8,	// (0x0001abf9) main_cset_text_pane_g1_copy1

0x43f0,	// (0x0001ac01) main_cset_text_pane_t1_copy1

0x43fe,	// (0x0001ac0f) main_cset_text_pane_t2_copy1

0x440c,	// (0x0001ac1d) main_cset_text_pane_t3_copy1

0x441a,	// (0x0001ac2b) main_cset_text_pane_t4_copy1

0x4428,	// (0x0001ac39) main_cset_text_pane_t5_copy1

0x4436,	// (0x0001ac47) main_cset_text_pane_t6_copy1

0x4444,	// (0x0001ac55) main_cset_text_pane_t7_copy1

0xd8c0,	// (0x000240d1) main_cset_text2_pane_t1_copy1

0x03bf,	// (0x00016bd0) main_ncimui_pane

0xb002,	// (0x00021813) popup_query_ncimui_window_ParamLimits

0xb002,	// (0x00021813) popup_query_ncimui_window

0x35cb,	// (0x00019ddc) field_cale_ev2_pane_g4_ParamLimits

0x35cb,	// (0x00019ddc) field_cale_ev2_pane_g4

0xc486,	// (0x00022c97) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc486,	// (0x00022c97) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000260c5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000260c5) cell_video_dialer_keypad_pane_g

0xc49e,	// (0x00022caf) cell_video_dialer_keypad_pane_t1

0x03bf,	// (0x00016bd0) bg_popup_window_pane_cp012

0x16cb,	// (0x00017edc) heading_pane_cp06

0x4da6,	// (0x0001b5b7) ncim_query_content_pane

0x03bf,	// (0x00016bd0) bg_popup_heading_pane_cp01

0x4dae,	// (0x0001b5bf) ncim_heading_pane_t1

0x4dbc,	// (0x0001b5cd) ncim_indicator_popup_pane

0x4dce,	// (0x0001b5df) ncim_query_button_pane

0x4de2,	// (0x0001b5f3) ncim_query_content_pane_t1

0x4df4,	// (0x0001b605) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00026426) ncim_query_content_pane_t

0x4e2e,	// (0x0001b63f) ncim_query_list_pane

0x4e40,	// (0x0001b651) ncim_query_popup_pane

0x4dbc,	// (0x0001b5cd) ncim_indicator_popup_pane_ParamLimits

0xd9e2,	// (0x000241f3) ncim_query_content_pane_g1_ParamLimits

0xd9e2,	// (0x000241f3) ncim_query_content_pane_g1

0x4de2,	// (0x0001b5f3) ncim_query_content_pane_t1_ParamLimits

0x4df4,	// (0x0001b605) ncim_query_content_pane_t2_ParamLimits

0xd9ee,	// (0x000241ff) ncim_query_content_pane_t3_ParamLimits

0xd9ee,	// (0x000241ff) ncim_query_content_pane_t3

0xda0b,	// (0x0002421c) ncim_query_content_pane_t4_ParamLimits

0xda0b,	// (0x0002421c) ncim_query_content_pane_t4

0xda28,	// (0x00024239) ncim_query_content_pane_t5_ParamLimits

0xda28,	// (0x00024239) ncim_query_content_pane_t5

0x4e06,	// (0x0001b617) ncim_query_content_pane_t6_ParamLimits

0x4e06,	// (0x0001b617) ncim_query_content_pane_t6

0xfc15,	// (0x00026426) ncim_query_content_pane_t_ParamLimits

0x4e2e,	// (0x0001b63f) ncim_query_list_pane_ParamLimits

0x4e40,	// (0x0001b651) ncim_query_popup_pane_ParamLimits

0x4e54,	// (0x0001b665) wait_bar_pane_cp04

0x03bf,	// (0x00016bd0) input_focus_pane_cp011

0x4e5c,	// (0x0001b66d) ncim_query_popup_pane_t1

0x4e6a,	// (0x0001b67b) ncim_list_query_list_pane_ParamLimits

0x4e6a,	// (0x0001b67b) ncim_list_query_list_pane

0x03bf,	// (0x00016bd0) bg_button_pane_cp027

0x4e77,	// (0x0001b688) ncim_query_button_pane_g1

0x03bf,	// (0x00016bd0) list_highlight_pane_cp012

0x4e81,	// (0x0001b692) ncim_list_query_list_pane_g1

0x4e89,	// (0x0001b69a) ncim_list_query_list_pane_t1

0x7cc5,	// (0x0001e4d6) cam4_indicators_pane_g3_ParamLimits

0x7cc5,	// (0x0001e4d6) cam4_indicators_pane_g3

0x7dd3,	// (0x0001e5e4) vid4_indicators_pane_g5_ParamLimits

0x7dd3,	// (0x0001e5e4) vid4_indicators_pane_g5

0x82b3,	// (0x0001eac4) vid4_progress_pane_g5_ParamLimits

0x82b3,	// (0x0001eac4) vid4_progress_pane_g5

0xd8fb,	// (0x0002410c) main_ncimui_pane_g1

0xd951,	// (0x00024162) ncimui_group_query_pane_ParamLimits

0xd951,	// (0x00024162) ncimui_group_query_pane

0xd98d,	// (0x0002419e) ncimui_list_pane_ParamLimits

0xd98d,	// (0x0002419e) ncimui_list_pane

0xd9ae,	// (0x000241bf) ncimui_text_pane_ParamLimits

0xd9ae,	// (0x000241bf) ncimui_text_pane

0xda45,	// (0x00024256) ncimui_text_pane_t1_ParamLimits

0xda45,	// (0x00024256) ncimui_text_pane_t1

0x4e97,	// (0x0001b6a8) ncimui_list_single_graphic_pane_ParamLimits

0x4e97,	// (0x0001b6a8) ncimui_list_single_graphic_pane

0xda64,	// (0x00024275) ncimui_query_pane_ParamLimits

0xda64,	// (0x00024275) ncimui_query_pane

0x03bf,	// (0x00016bd0) list_highlight_pane_cp013

0x4ea7,	// (0x0001b6b8) ncim_list_query_list_pane_t1_copy1

0x4e81,	// (0x0001b692) ncim_list_single_graphic_pane_g1

0x4eb5,	// (0x0001b6c6) ncim_query_button_pane_cp01

0x4ec1,	// (0x0001b6d2) ncim_query_entry_pane_ParamLimits

0x4ec1,	// (0x0001b6d2) ncim_query_entry_pane

0x4ed4,	// (0x0001b6e5) ncimui_query_pane_g1

0x4ee0,	// (0x0001b6f1) ncimui_query_pane_t1_ParamLimits

0x4ee0,	// (0x0001b6f1) ncimui_query_pane_t1

0x042f,	// (0x00016c40) input_focus_pane_cp012

0x4ef9,	// (0x0001b70a) ncim_query_entry_pane_t1

0x0ba4,	// (0x000173b5) main_im_pane_ParamLimits

0x042f,	// (0x00016c40) main_mobtv_pane_ParamLimits

0x042f,	// (0x00016c40) main_mobtv_pane

0xd76a,	// (0x00023f7b) main_cset6_slider_pane_g18_ParamLimits

0xd76a,	// (0x00023f7b) main_cset6_slider_pane_g18

0xd776,	// (0x00023f87) main_cset6_slider_pane_g19_ParamLimits

0xd776,	// (0x00023f87) main_cset6_slider_pane_g19

0x404e,	// (0x0001a85f) bg_main_mobtv_pane_ParamLimits

0x404e,	// (0x0001a85f) bg_main_mobtv_pane

0xda77,	// (0x00024288) main_mobtv_info_pane

0xda82,	// (0x00024293) main_mobtv_loading_pane_ParamLimits

0xda82,	// (0x00024293) main_mobtv_loading_pane

0x4f19,	// (0x0001b72a) main_mobtv_pg_channel_list_pane

0x4f23,	// (0x0001b734) main_mobtv_pg_hdr_pane

0xda8f,	// (0x000242a0) main_mobtv_programe_curr_pane_ParamLimits

0xda8f,	// (0x000242a0) main_mobtv_programe_curr_pane

0xda9c,	// (0x000242ad) main_mobtv_programe_next_pane_ParamLimits

0xda9c,	// (0x000242ad) main_mobtv_programe_next_pane

0x4f2c,	// (0x0001b73d) popup_mobtv_noti_window

0x32fa,	// (0x00019b0b) main_tv_pg_hdr_pane_g1

0x4f34,	// (0x0001b745) main_tv_pg_hdr_pane_g2

0x4f3c,	// (0x0001b74d) main_tv_pg_hdr_pane_g3

0x4f44,	// (0x0001b755) main_tv_pg_hdr_pane_g4

0x4f4c,	// (0x0001b75d) main_tv_pg_hdr_pane_g5

0x4f56,	// (0x0001b767) main_tv_pg_hdr_pane_g6

0x4f60,	// (0x0001b771) main_tv_pg_hdr_pane_g7

0x4f6a,	// (0x0001b77b) main_tv_pg_hdr_pane_g8

0x4f74,	// (0x0001b785) main_tv_pg_hdr_pane_g9

0x4f7e,	// (0x0001b78f) main_tv_pg_hdr_pane_g10

0x4f88,	// (0x0001b799) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00026433) main_tv_pg_hdr_pane_g

0x4f92,	// (0x0001b7a3) main_tv_pg_hdr_pane_t1

0x4fa0,	// (0x0001b7b1) main_tv_pg_hdr_pane_t2

0x4fae,	// (0x0001b7bf) main_tv_pg_hdr_pane_t3

0x4fbe,	// (0x0001b7cf) main_tv_pg_hdr_pane_t4

0x4fce,	// (0x0001b7df) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0002644a) main_tv_pg_hdr_pane_t

0x4fde,	// (0x0001b7ef) single_mobtv_pg_channel_pane_ParamLimits

0x4fde,	// (0x0001b7ef) single_mobtv_pg_channel_pane

0x4ff0,	// (0x0001b801) single_mobtv_pg_channel_table_pane

0x4ff9,	// (0x0001b80a) single_mobtv_pg_channel_thumb_pane

0x5002,	// (0x0001b813) single_tv_pg_channel_pane_g1

0x500b,	// (0x0001b81c) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00026455) single_tv_pg_channel_pane_g

0x3566,	// (0x00019d77) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3566,	// (0x00019d77) bg_single_mobtv_pg_channel_thumb_pane

0x5014,	// (0x0001b825) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5014,	// (0x0001b825) single_mobtv_pg_channel_thumb_pane_g1

0x5022,	// (0x0001b833) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5022,	// (0x0001b833) single_mobtv_pg_channel_thumb_pane_g2

0x502e,	// (0x0001b83f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x502e,	// (0x0001b83f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0002645a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0002645a) single_mobtv_pg_channel_thumb_pane_g

0x503a,	// (0x0001b84b) single_mobtv_pg_channel_thumb_pane_t1

0x5048,	// (0x0001b859) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00026461) single_mobtv_pg_channel_thumb_pane_t

0x32fa,	// (0x00019b0b) bg_single_mobtv_pg_channel_table_pane_g1

0x32fa,	// (0x00019b0b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00025f11) bg_single_mobtv_pg_channel_table_pane_g

0x5056,	// (0x0001b867) single_mobtv_pg_channel_table_pane_t1

0x5064,	// (0x0001b875) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00026466) single_mobtv_pg_channel_table_pane_t

0xdab1,	// (0x000242c2) main_mobtv_info_pane_g1_ParamLimits

0xdab1,	// (0x000242c2) main_mobtv_info_pane_g1

0xdacd,	// (0x000242de) main_mobtv_info_pane_t1_ParamLimits

0xdacd,	// (0x000242de) main_mobtv_info_pane_t1

0xdb45,	// (0x00024356) main_mobtv_info_pane_t2_ParamLimits

0xdb45,	// (0x00024356) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00026470) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00026470) main_mobtv_info_pane_t

0xdbd4,	// (0x000243e5) wait_bar_pane_cp05

0xdbe6,	// (0x000243f7) main_mobtv_loading_pane_g1_ParamLimits

0xdbe6,	// (0x000243f7) main_mobtv_loading_pane_g1

0xdbf4,	// (0x00024405) main_mobtv_loading_pane_g2_ParamLimits

0xdbf4,	// (0x00024405) main_mobtv_loading_pane_g2

0xdc00,	// (0x00024411) main_mobtv_loading_pane_g3_ParamLimits

0xdc00,	// (0x00024411) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00026477) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00026477) main_mobtv_loading_pane_g

0x507a,	// (0x0001b88b) main_mobtv_loading_pane_t1_ParamLimits

0x507a,	// (0x0001b88b) main_mobtv_loading_pane_t1

0x5092,	// (0x0001b8a3) main_mobtv_loading_pane_t2_ParamLimits

0x5092,	// (0x0001b8a3) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0002647e) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0002647e) main_mobtv_loading_pane_t

0xdc0e,	// (0x0002441f) wait_bar_pane_cp06_ParamLimits

0xdc0e,	// (0x0002441f) wait_bar_pane_cp06

0x50b6,	// (0x0001b8c7) main_mobtv_programe_curr_pane_t1

0x50c4,	// (0x0001b8d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x00026483) main_mobtv_programe_curr_pane_t

0x50d2,	// (0x0001b8e3) main_mobtv_programe_next_pane_t1

0x50e0,	// (0x0001b8f1) main_mobtv_programe_next_pane_t2

0x50ee,	// (0x0001b8ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00026488) main_mobtv_programe_next_pane_t

0x03bf,	// (0x00016bd0) bg_popup_mobtv_noti_window_pane

0x50fc,	// (0x0001b90d) popup_mobtv_noti_window_g1

0x5104,	// (0x0001b915) popup_mobtv_noti_window_t1

0x5112,	// (0x0001b923) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0002648f) popup_mobtv_noti_window_t

0x32fa,	// (0x00019b0b) bg_popup_mobtv_noti_window_pane_g1

0x03bf,	// (0x00016bd0) sc_clock_pane

0x03bf,	// (0x00016bd0) main_fs_bigclock_pane

0xd388,	// (0x00023b99) blid2_tripm_pane_t4_ParamLimits

0xd388,	// (0x00023b99) blid2_tripm_pane_t4

0xdc1a,	// (0x0002442b) sc_clock_pane_g1_ParamLimits

0xdc1a,	// (0x0002442b) sc_clock_pane_g1

0xdc28,	// (0x00024439) sc_clock_pane_t1_ParamLimits

0xdc28,	// (0x00024439) sc_clock_pane_t1

0xdc3b,	// (0x0002444c) sc_clock_pane_t2_ParamLimits

0xdc3b,	// (0x0002444c) sc_clock_pane_t2

0xdc4d,	// (0x0002445e) sc_clock_pane_t3_ParamLimits

0xdc4d,	// (0x0002445e) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00026494) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00026494) sc_clock_pane_t

0xe920,	// (0x00025131) main_fs_bigclock_indicator_pane_ParamLimits

0xe920,	// (0x00025131) main_fs_bigclock_indicator_pane

0xdcd1,	// (0x000244e2) main_fs_bigclock_pane_g1_ParamLimits

0xdcd1,	// (0x000244e2) main_fs_bigclock_pane_g1

0xe92c,	// (0x0002513d) main_fs_bigclock_pane_t1_ParamLimits

0xe92c,	// (0x0002513d) main_fs_bigclock_pane_t1

0xe93e,	// (0x0002514f) main_fs_bigclock_pane_t2_ParamLimits

0xe93e,	// (0x0002514f) main_fs_bigclock_pane_t2

0xe952,	// (0x00025163) main_fs_bigclock_pane_t3_ParamLimits

0xe952,	// (0x00025163) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0002668e) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0002668e) main_fs_bigclock_pane_t

0x5d00,	// (0x0001c511) main_fs_bigclock_indicator_pane_g1

0x4dd6,	// (0x0001b5e7) ncim_query_content_pane_g2_ParamLimits

0x4dd6,	// (0x0001b5e7) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00026421) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00026421) ncim_query_content_pane_g

0xdc61,	// (0x00024472) sc_clock_pane_t4_ParamLimits

0xdc61,	// (0x00024472) sc_clock_pane_t4

0x042f,	// (0x00016c40) main_radioblah_pane

0x3f28,	// (0x0001a739) cell_call4_button_pane_t1_copy1_ParamLimits

0x3f28,	// (0x0001a739) cell_call4_button_pane_t1_copy1

0xd903,	// (0x00024114) main_ncimui_pane_t1_ParamLimits

0xd903,	// (0x00024114) main_ncimui_pane_t1

0xd91d,	// (0x0002412e) main_ncimui_pane_t2_ParamLimits

0xd91d,	// (0x0002412e) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0002641a) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0002641a) main_ncimui_pane_t

0x5240,	// (0x0001ba51) main_radioblah_anim_pane_ParamLimits

0x5240,	// (0x0001ba51) main_radioblah_anim_pane

0x5251,	// (0x0001ba62) main_radioblah_info_pane_ParamLimits

0x5251,	// (0x0001ba62) main_radioblah_info_pane

0x5265,	// (0x0001ba76) main_radioblah_pane_t1_ParamLimits

0x5265,	// (0x0001ba76) main_radioblah_pane_t1

0x5281,	// (0x0001ba92) main_radioblah_pane_t2_ParamLimits

0x5281,	// (0x0001ba92) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x000264b5) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x000264b5) main_radioblah_pane_t

0xdd23,	// (0x00024534) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdd23,	// (0x00024534) main_radioblah_rocker_ctrl_pane

0x52c9,	// (0x0001bada) main_radioblah_info_pane_t1_ParamLimits

0x52c9,	// (0x0001bada) main_radioblah_info_pane_t1

0xdd68,	// (0x00024579) main_radioblah_info_pane_t2_ParamLimits

0xdd68,	// (0x00024579) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x000264be) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x000264be) main_radioblah_info_pane_t

0x32fa,	// (0x00019b0b) main_radioblah_rocker_ctrl_pane_g1

0xde18,	// (0x00024629) main_radioblah_rocker_ctrl_pane_g2

0xde20,	// (0x00024631) main_radioblah_rocker_ctrl_pane_g3

0xde28,	// (0x00024639) main_radioblah_rocker_ctrl_pane_g4

0xde30,	// (0x00024641) main_radioblah_rocker_ctrl_pane_g5

0xde38,	// (0x00024649) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x000264c7) main_radioblah_rocker_ctrl_pane_g

0xd8c0,	// (0x000240d1) main_cset_text2_pane_t1_copy1_ParamLimits

0x7c09,	// (0x0001e41a) cam4_image_uncrop_qvga_pane

0x7d3a,	// (0x0001e54b) vid4_image_uncrop_qcif_pane

0x8355,	// (0x0001eb66) cam6_image_uncrop_qvga_pane_ParamLimits

0x8355,	// (0x0001eb66) cam6_image_uncrop_qvga_pane

0x4a30,	// (0x0001b241) vid6_image_uncrop_qcif_pane_ParamLimits

0x4a30,	// (0x0001b241) vid6_image_uncrop_qcif_pane

0x03bf,	// (0x00016bd0) bg_popup_preview_window_pane_cp03

0x4d88,	// (0x0001b599) list_cset_text2_pane

0x4d90,	// (0x0001b5a1) main_cset6_text2_pane_g1

0x4d98,	// (0x0001b5a9) main_cset6_text2_pane_t1

0xde40,	// (0x00024651) list_cset_text2_pane_t1_ParamLimits

0xde40,	// (0x00024651) list_cset_text2_pane_t1

0x042f,	// (0x00016c40) main_radioblah_pane_ParamLimits

0xdbc0,	// (0x000243d1) main_mobtv_info_pane_t3_ParamLimits

0xdbc0,	// (0x000243d1) main_mobtv_info_pane_t3

0xdd11,	// (0x00024522) main_radioblah_pane_g1

0xdd3c,	// (0x0002454d) main_radioblah_info_pane_g1

0xddbd,	// (0x000245ce) main_radioblah_info_pane_t3_ParamLimits

0xddbd,	// (0x000245ce) main_radioblah_info_pane_t3

0x9e1e,	// (0x0002062f) highlight_cell_cale_month_pane_ParamLimits

0x9e1e,	// (0x0002062f) highlight_cell_cale_month_pane

0x03bf,	// (0x00016bd0) main_phob_fisheye_pane

0x3654,	// (0x00019e65) scroll_pane_cp0031_ParamLimits

0x3654,	// (0x00019e65) scroll_pane_cp0031

0x4b3e,	// (0x0001b34f) wait_bar_pane_cp08_ParamLimits

0xd681,	// (0x00023e92) cset_list_set_pane_copy1_ParamLimits

0x5303,	// (0x0001bb14) highlight_cell_cale_month_pane_g1

0xde5d,	// (0x0002466e) highlight_cell_cale_month_pane_t1

0x46b8,	// (0x0001aec9) list_gen_pane_cp01

0x41d4,	// (0x0001a9e5) scroll_pane_01

0xde6b,	// (0x0002467c) list_single_double_fisheye_pane

0xde74,	// (0x00024685) list_double_fisheye_pane_g1_ParamLimits

0xde74,	// (0x00024685) list_double_fisheye_pane_g1

0xde80,	// (0x00024691) list_double_fisheye_pane_g2_ParamLimits

0xde80,	// (0x00024691) list_double_fisheye_pane_g2

0xde94,	// (0x000246a5) list_double_fisheye_pane_g3_ParamLimits

0xde94,	// (0x000246a5) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x000264d4) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x000264d4) list_double_fisheye_pane_g

0xdebd,	// (0x000246ce) list_double_fisheye_pane_t1_ParamLimits

0xdebd,	// (0x000246ce) list_double_fisheye_pane_t1

0xded8,	// (0x000246e9) list_double_fisheye_pane_t2_ParamLimits

0xded8,	// (0x000246e9) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x000264df) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x000264df) list_double_fisheye_pane_t

0x03bf,	// (0x00016bd0) main_call5_pane

0xdc87,	// (0x00024498) sc_swipe_pane_ParamLimits

0xdc87,	// (0x00024498) sc_swipe_pane

0xdf06,	// (0x00024717) call5_image_pane_ParamLimits

0xdf06,	// (0x00024717) call5_image_pane

0xdf16,	// (0x00024727) call5_swipe_1_pane_ParamLimits

0xdf16,	// (0x00024727) call5_swipe_1_pane

0xdf22,	// (0x00024733) call5_swipe_2_pane_ParamLimits

0xdf22,	// (0x00024733) call5_swipe_2_pane

0xdf3c,	// (0x0002474d) popup_call5_audio_first_window_ParamLimits

0xdf3c,	// (0x0002474d) popup_call5_audio_first_window

0x3566,	// (0x00019d77) call5_swipe_1_pane_g1_ParamLimits

0x3566,	// (0x00019d77) call5_swipe_1_pane_g1

0x530b,	// (0x0001bb1c) call5_swipe_1_pane_g2_ParamLimits

0x530b,	// (0x0001bb1c) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x000264e4) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x000264e4) call5_swipe_1_pane_g

0x5317,	// (0x0001bb28) call5_swipe_1_pane_t1_ParamLimits

0x5317,	// (0x0001bb28) call5_swipe_1_pane_t1

0x3566,	// (0x00019d77) call5_swipe_2_pane_g1_ParamLimits

0x3566,	// (0x00019d77) call5_swipe_2_pane_g1

0x532c,	// (0x0001bb3d) call5_swipe_2_pane_g2_ParamLimits

0x532c,	// (0x0001bb3d) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x000264e9) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x000264e9) call5_swipe_2_pane_g

0x5338,	// (0x0001bb49) call5_swipe_2_pane_t1_ParamLimits

0x5338,	// (0x0001bb49) call5_swipe_2_pane_t1

0x534d,	// (0x0001bb5e) sc_swipe_pane_g1_ParamLimits

0x534d,	// (0x0001bb5e) sc_swipe_pane_g1

0x535a,	// (0x0001bb6b) sc_swipe_pane_g2_ParamLimits

0x535a,	// (0x0001bb6b) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x000264ee) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x000264ee) sc_swipe_pane_g

0x5366,	// (0x0001bb77) sc_swipe_pane_t1_ParamLimits

0x5366,	// (0x0001bb77) sc_swipe_pane_t1

0x03bf,	// (0x00016bd0) main_cmail_launcher_pane

0xdf4a,	// (0x0002475b) aid_size_cell_cmail_l_ParamLimits

0xdf4a,	// (0x0002475b) aid_size_cell_cmail_l

0xdf5a,	// (0x0002476b) grid_cmail_l_pane_ParamLimits

0xdf5a,	// (0x0002476b) grid_cmail_l_pane

0xdf6a,	// (0x0002477b) cell_cmail_l_pane_ParamLimits

0xdf6a,	// (0x0002477b) cell_cmail_l_pane

0xdf7e,	// (0x0002478f) cell_cmail_l_pane_g1_ParamLimits

0xdf7e,	// (0x0002478f) cell_cmail_l_pane_g1

0xdf8a,	// (0x0002479b) cell_cmail_l_pane_t1_ParamLimits

0xdf8a,	// (0x0002479b) cell_cmail_l_pane_t1

0x537b,	// (0x0001bb8c) cell_cmail_l_pane_t2_ParamLimits

0x537b,	// (0x0001bb8c) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x000264f3) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x000264f3) cell_cmail_l_pane_t

0x042f,	// (0x00016c40) grid_highlight_pane_cp018_ParamLimits

0x042f,	// (0x00016c40) grid_highlight_pane_cp018

0x849a,	// (0x0001ecab) main2_pane_ParamLimits

0x849a,	// (0x0001ecab) main2_pane

0x0c61,	// (0x00017472) popup_sp_fs_action_menu_bg_pane_g1

0x0c69,	// (0x0001747a) popup_sp_fs_action_menu_bg_pane_g2

0x0c71,	// (0x00017482) popup_sp_fs_action_menu_bg_pane_g3

0x0c79,	// (0x0001748a) popup_sp_fs_action_menu_bg_pane_g4

0x0c81,	// (0x00017492) popup_sp_fs_action_menu_bg_pane_g5

0x0c89,	// (0x0001749a) popup_sp_fs_action_menu_bg_pane_g6

0x0c91,	// (0x000174a2) popup_sp_fs_action_menu_bg_pane_g7

0x0c99,	// (0x000174aa) popup_sp_fs_action_menu_bg_pane_g8

0x0ca1,	// (0x000174b2) popup_sp_fs_action_menu_bg_pane_g9

0x0ca9,	// (0x000174ba) popup_sp_fs_action_menu_bg_pane_g10

0x0ca9,	// (0x000174ba) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x000259bd) popup_sp_fs_action_menu_bg_pane_g

0x0e79,	// (0x0001768a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t3_g3_g1

0x0e85,	// (0x00017696) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x2_t3_g3_g2

0x0e91,	// (0x000176a2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00025a6d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00025a6d) list_medium_line_x2_t3_g3_g

0x0e9d,	// (0x000176ae) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0e9d,	// (0x000176ae) list_medium_line_x2_t3_g3_t1

0x8fa5,	// (0x0001f7b6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8fa5,	// (0x0001f7b6) list_medium_line_x2_t3_g3_t2

0x0eb2,	// (0x000176c3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00025a74) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00025a74) list_medium_line_x2_t3_g3_t

0x0e79,	// (0x0001768a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t3_g2_g1

0x0e91,	// (0x000176a2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00025a7b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00025a7b) list_medium_line_x2_t3_g2_g

0x0ec7,	// (0x000176d8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ec7,	// (0x000176d8) list_medium_line_x2_t3_g2_t1

0x0edd,	// (0x000176ee) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0edd,	// (0x000176ee) list_medium_line_x2_t3_g2_t2

0x0eb2,	// (0x000176c3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00025a80) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00025a80) list_medium_line_x2_t3_g2_t

0x0e79,	// (0x0001768a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t4_g4_g1

0x0eef,	// (0x00017700) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0eef,	// (0x00017700) list_medium_line_x2_t4_g4_g2

0x0e85,	// (0x00017696) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x2_t4_g4_g3

0x0efb,	// (0x0001770c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0efb,	// (0x0001770c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00025a87) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00025a87) list_medium_line_x2_t4_g4_g

0x8fb7,	// (0x0001f7c8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8fb7,	// (0x0001f7c8) list_medium_line_x2_t4_g4_t1

0x8fd1,	// (0x0001f7e2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8fd1,	// (0x0001f7e2) list_medium_line_x2_t4_g4_t2

0x8fe7,	// (0x0001f7f8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8fe7,	// (0x0001f7f8) list_medium_line_x2_t4_g4_t3

0x0f07,	// (0x00017718) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f07,	// (0x00017718) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00025a90) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00025a90) list_medium_line_x2_t4_g4_t

0x0e79,	// (0x0001768a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t2_g4_g1

0x0eef,	// (0x00017700) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0eef,	// (0x00017700) list_medium_line_x2_t2_g4_g2

0x0e85,	// (0x00017696) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x2_t2_g4_g3

0x0e91,	// (0x000176a2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00025af7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00025af7) list_medium_line_x2_t2_g4_g

0x11ef,	// (0x00017a00) list_medium_line_x2_t2_g4_t1_ParamLimits

0x11ef,	// (0x00017a00) list_medium_line_x2_t2_g4_t1

0x0eb2,	// (0x000176c3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00025b00) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00025b00) list_medium_line_x2_t2_g4_t

0x0e79,	// (0x0001768a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t2_g3_g1

0x0e85,	// (0x00017696) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x2_t2_g3_g2

0x0e91,	// (0x000176a2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00025a6d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00025a6d) list_medium_line_x2_t2_g3_g

0x1204,	// (0x00017a15) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1204,	// (0x00017a15) list_medium_line_x2_t2_g3_t1

0x0eb2,	// (0x000176c3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00025b05) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00025b05) list_medium_line_x2_t2_g3_t

0x9f86,	// (0x00020797) main_sp_fs_list_pane_ParamLimits

0x9f86,	// (0x00020797) main_sp_fs_list_pane

0x9f92,	// (0x000207a3) sp_fs_scroll_pane_ParamLimits

0x9f92,	// (0x000207a3) sp_fs_scroll_pane

0x9f9e,	// (0x000207af) list_medium_line_x2_t3_t1

0x9fae,	// (0x000207bf) list_medium_line_x2_t3_t2

0x146c,	// (0x00017c7d) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00025b50) list_medium_line_x2_t3_t

0x9fbc,	// (0x000207cd) list_medium_line_x3_t4_t1

0x9fcc,	// (0x000207dd) list_medium_line_x3_t4_t2

0x147a,	// (0x00017c8b) list_medium_line_x3_t4_t3

0x146c,	// (0x00017c7d) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00025b57) list_medium_line_x3_t4_t

0x9fda,	// (0x000207eb) list_medium_line_x4_t5_t1

0x9fea,	// (0x000207fb) list_medium_line_x4_t5_t2

0x147a,	// (0x00017c8b) list_medium_line_x4_t5_t3

0x1488,	// (0x00017c99) list_medium_line_x4_t5_t4

0x146c,	// (0x00017c7d) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00025b60) list_medium_line_x4_t5_t

0x0e79,	// (0x0001768a) list_medium_line_t4_g4_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_t4_g4_g1

0x0efb,	// (0x0001770c) list_medium_line_t4_g4_g2_ParamLimits

0x0efb,	// (0x0001770c) list_medium_line_t4_g4_g2

0x1496,	// (0x00017ca7) list_medium_line_t4_g4_g3_ParamLimits

0x1496,	// (0x00017ca7) list_medium_line_t4_g4_g3

0x0e91,	// (0x000176a2) list_medium_line_t4_g4_g4_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00025b6b) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00025b6b) list_medium_line_t4_g4_g

0x14a2,	// (0x00017cb3) list_medium_line_t4_g4_t1_ParamLimits

0x14a2,	// (0x00017cb3) list_medium_line_t4_g4_t1

0x14b7,	// (0x00017cc8) list_medium_line_t4_g4_t2_ParamLimits

0x14b7,	// (0x00017cc8) list_medium_line_t4_g4_t2

0x14cc,	// (0x00017cdd) list_medium_line_t4_g4_t3_ParamLimits

0x14cc,	// (0x00017cdd) list_medium_line_t4_g4_t3

0x0eb2,	// (0x000176c3) list_medium_line_t4_g4_t4_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00025b74) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00025b74) list_medium_line_t4_g4_t

0xa096,	// (0x000208a7) chi_dic_find_pane_g1

0xafd1,	// (0x000217e2) main_tport_pane

0x433d,	// (0x0001ab4e) list_medium_line_plain_t1

0x438f,	// (0x0001aba0) list_medium_line_t2_g2_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_t2_g2_g1

0x439b,	// (0x0001abac) list_medium_line_t2_g2_g2_ParamLimits

0x439b,	// (0x0001abac) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00026230) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00026230) list_medium_line_t2_g2_g

0xccb0,	// (0x000234c1) list_medium_line_t2_g2_t1_ParamLimits

0xccb0,	// (0x000234c1) list_medium_line_t2_g2_t1

0xccca,	// (0x000234db) list_medium_line_t2_g2_t2_ParamLimits

0xccca,	// (0x000234db) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00026235) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00026235) list_medium_line_t2_g2_t

0x4759,	// (0x0001af6a) aid_sp_fs_list_icon_a_sm

0x4761,	// (0x0001af72) aid_sp_fs_list_icon_d

0x4769,	// (0x0001af7a) aid_sp_fs_text_primary

0x4772,	// (0x0001af83) aid_sp_fs_text_secondary

0x477b,	// (0x0001af8c) list_medium_line

0x477b,	// (0x0001af8c) list_medium_line_g2

0x477b,	// (0x0001af8c) list_medium_line_g3

0x477b,	// (0x0001af8c) list_medium_line_plain

0x477b,	// (0x0001af8c) list_medium_line_plain_t2

0x477b,	// (0x0001af8c) list_medium_line_plain_t3

0x477b,	// (0x0001af8c) list_medium_line_right_icon

0x477b,	// (0x0001af8c) list_medium_line_right_iconx2

0x477b,	// (0x0001af8c) list_medium_line_t2

0x477b,	// (0x0001af8c) list_medium_line_t2_g2

0x477b,	// (0x0001af8c) list_medium_line_t2_g3

0x477b,	// (0x0001af8c) list_medium_line_t2_right_icon

0x477b,	// (0x0001af8c) list_medium_line_t2_right_iconx2

0x477b,	// (0x0001af8c) list_medium_line_t3

0x477b,	// (0x0001af8c) list_medium_line_t3_g2

0x477b,	// (0x0001af8c) list_medium_line_t3_g3

0x477b,	// (0x0001af8c) list_medium_line_t3_right_iconx2

0x4784,	// (0x0001af95) list_medium_line_t4_g4

0x478d,	// (0x0001af9e) list_medium_line_x2

0x478d,	// (0x0001af9e) list_medium_line_x2_t2_g2

0x478d,	// (0x0001af9e) list_medium_line_x2_t2_g3

0x478d,	// (0x0001af9e) list_medium_line_x2_t2_g4

0x478d,	// (0x0001af9e) list_medium_line_x2_t3

0x478d,	// (0x0001af9e) list_medium_line_x2_t3_g2

0x478d,	// (0x0001af9e) list_medium_line_x2_t3_g3

0x478d,	// (0x0001af9e) list_medium_line_x2_t3_g4

0x478d,	// (0x0001af9e) list_medium_line_x2_t4_g2

0x478d,	// (0x0001af9e) list_medium_line_x2_t4_g4

0x4796,	// (0x0001afa7) list_medium_line_x3

0x4796,	// (0x0001afa7) list_medium_line_x3_t4

0x4796,	// (0x0001afa7) list_medium_line_x3_t4_g4

0x4784,	// (0x0001af95) list_medium_line_x4_t4

0x4784,	// (0x0001af95) list_medium_line_x4_t4_g7

0x4784,	// (0x0001af95) list_medium_line_x4_t5

0x479f,	// (0x0001afb0) list_single_fs_dyc_pane_ParamLimits

0x479f,	// (0x0001afb0) list_single_fs_dyc_pane

0x0e79,	// (0x0001768a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x4_t4_g7_g1

0x4cb7,	// (0x0001b4c8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4cb7,	// (0x0001b4c8) list_medium_line_x4_t4_g7_g2

0x4cc3,	// (0x0001b4d4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4cc3,	// (0x0001b4d4) list_medium_line_x4_t4_g7_g3

0x4cd2,	// (0x0001b4e3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4cd2,	// (0x0001b4e3) list_medium_line_x4_t4_g7_g4

0x4cde,	// (0x0001b4ef) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4cde,	// (0x0001b4ef) list_medium_line_x4_t4_g7_g5

0x4ced,	// (0x0001b4fe) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4ced,	// (0x0001b4fe) list_medium_line_x4_t4_g7_g6

0x4cfc,	// (0x0001b50d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4cfc,	// (0x0001b50d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00026400) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00026400) list_medium_line_x4_t4_g7_g

0x4d08,	// (0x0001b519) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4d08,	// (0x0001b519) list_medium_line_x4_t4_g7_t1

0x4d1d,	// (0x0001b52e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4d1d,	// (0x0001b52e) list_medium_line_x4_t4_g7_t2

0x4d32,	// (0x0001b543) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4d32,	// (0x0001b543) list_medium_line_x4_t4_g7_t3

0x4d47,	// (0x0001b558) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4d47,	// (0x0001b558) list_medium_line_x4_t4_g7_t4

0x4d59,	// (0x0001b56a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4d59,	// (0x0001b56a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0002640f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0002640f) list_medium_line_x4_t4_g7_t

0x4d6b,	// (0x0001b57c) list_single_dyc_row_pane_ParamLimits

0x4d6b,	// (0x0001b57c) list_single_dyc_row_pane

0xdefa,	// (0x0002470b) call5_gesture_pane_ParamLimits

0xdefa,	// (0x0002470b) call5_gesture_pane

0xdf2e,	// (0x0002473f) call5_windows_pane_ParamLimits

0xdf2e,	// (0x0002473f) call5_windows_pane

0xdfa0,	// (0x000247b1) call5_swipe_1_pane_cp_ParamLimits

0xdfa0,	// (0x000247b1) call5_swipe_1_pane_cp

0xdfac,	// (0x000247bd) call5_swipe_2_pane_cp_ParamLimits

0xdfac,	// (0x000247bd) call5_swipe_2_pane_cp

0x1937,	// (0x00018148) call5_image_pane_cp

0xdfb8,	// (0x000247c9) popup_call5_audio_first_window_cp_ParamLimits

0xdfb8,	// (0x000247c9) popup_call5_audio_first_window_cp

0x534d,	// (0x0001bb5e) call5_swipe_1_pane_g1_cp_ParamLimits

0x534d,	// (0x0001bb5e) call5_swipe_1_pane_g1_cp

0x538d,	// (0x0001bb9e) call5_swipe_1_pane_g2_cp

0x5366,	// (0x0001bb77) call5_swipe_1_pane_t1_cp_ParamLimits

0x5366,	// (0x0001bb77) call5_swipe_1_pane_t1_cp

0x534d,	// (0x0001bb5e) call5_swipe_2_pane_g1_cp_ParamLimits

0x534d,	// (0x0001bb5e) call5_swipe_2_pane_g1_cp

0x5395,	// (0x0001bba6) call5_swipe_2_pane_g2_cp

0x539d,	// (0x0001bbae) call5_swipe_2_pane_t1_cp_ParamLimits

0x539d,	// (0x0001bbae) call5_swipe_2_pane_t1_cp

0x042f,	// (0x00016c40) main_sp_fs_email_pane

0x53b2,	// (0x0001bbc3) main_sp_fs_listscroll_pane_te

0x53bb,	// (0x0001bbcc) popup_sp_fs_action_menu_pane_ParamLimits

0x53bb,	// (0x0001bbcc) popup_sp_fs_action_menu_pane

0x32fa,	// (0x00019b0b) bg_sp_fs_ctrlbar_pane_g1

0x53ff,	// (0x0001bc10) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5408,	// (0x0001bc19) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5411,	// (0x0001bc22) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x32fa,	// (0x00019b0b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x000264f8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x30df,	// (0x000198f0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x30df,	// (0x000198f0) bg_sp_fs_ctrlbar_ddmenu_pane

0x541a,	// (0x0001bc2b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x541a,	// (0x0001bc2b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5426,	// (0x0001bc37) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5426,	// (0x0001bc37) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00026501) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00026501) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5432,	// (0x0001bc43) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5432,	// (0x0001bc43) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x544c,	// (0x0001bc5d) list_medium_line_t2_right_icon_g1

0xdfc6,	// (0x000247d7) list_medium_line_t2_right_icon_t1

0xdfd6,	// (0x000247e7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00026506) list_medium_line_t2_right_icon_t

0x2df4,	// (0x00019605) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2df4,	// (0x00019605) bg_sp_fs_ctrlbar_pane

0xe03b,	// (0x0002484c) main_sp_fs_ctrlbar_button_pane_cp01

0xe043,	// (0x00024854) main_sp_fs_ctrlbar_ddmenu_pane

0x548c,	// (0x0001bc9d) main_sp_fs_ctrlbar_pane_g1

0x5498,	// (0x0001bca9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0002650b) main_sp_fs_ctrlbar_pane_g

0x54a4,	// (0x0001bcb5) main_sp_fs_ctrlbar_pane_t1

0xe04d,	// (0x0002485e) main_sp_fs_ctrlbar_pane

0xe069,	// (0x0002487a) main_sp_fs_listscroll_pane_te_cp01

0xe07a,	// (0x0002488b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xe07a,	// (0x0002488b) popup_sp_fs_action_menu_pane_cp01

0x042f,	// (0x00016c40) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x042f,	// (0x00016c40) bg_sp_fs_highlight_list_pane_cp01

0x54b9,	// (0x0001bcca) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x54b9,	// (0x0001bcca) sp_fs_action_menu_list_gene_pane_g1

0x54c8,	// (0x0001bcd9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x54c8,	// (0x0001bcd9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00026510) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00026510) sp_fs_action_menu_list_gene_pane_g

0x54d5,	// (0x0001bce6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x54d5,	// (0x0001bce6) sp_fs_action_menu_list_gene_pane_t1

0x54ed,	// (0x0001bcfe) sp_fs_action_menu_list_gene_pane_ParamLimits

0x54ed,	// (0x0001bcfe) sp_fs_action_menu_list_gene_pane

0x550e,	// (0x0001bd1f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x550e,	// (0x0001bd1f) popup_sp_fs_action_menu_bg_pane

0x551c,	// (0x0001bd2d) sp_fs_action_menu_list_pane_ParamLimits

0x551c,	// (0x0001bd2d) sp_fs_action_menu_list_pane

0x553e,	// (0x0001bd4f) sp_fs_scroll_pane_cp01_ParamLimits

0x553e,	// (0x0001bd4f) sp_fs_scroll_pane_cp01

0xe092,	// (0x000248a3) list_medium_line_plain_t2_t1

0xe0a2,	// (0x000248b3) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00026515) list_medium_line_plain_t2_t

0xe0b0,	// (0x000248c1) list_medium_line_plain_t3_t1

0xe0c0,	// (0x000248d1) list_medium_line_plain_t3_t2

0xe0ce,	// (0x000248df) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0002651a) list_medium_line_plain_t3_t

0x0e79,	// (0x0001768a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t2_g2_g1

0x0e91,	// (0x000176a2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00025a7b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00025a7b) list_medium_line_x2_t2_g2_g

0x14a2,	// (0x00017cb3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x14a2,	// (0x00017cb3) list_medium_line_x2_t2_g2_t1

0x0eb2,	// (0x000176c3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00026521) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00026521) list_medium_line_x2_t2_g2_t

0x0e79,	// (0x0001768a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t4_g2_g1

0x0e91,	// (0x000176a2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00025a7b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00025a7b) list_medium_line_x2_t4_g2_g

0xe0dc,	// (0x000248ed) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe0dc,	// (0x000248ed) list_medium_line_x2_t4_g2_t1

0xe0f6,	// (0x00024907) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe0f6,	// (0x00024907) list_medium_line_x2_t4_g2_t2

0xe10b,	// (0x0002491c) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe10b,	// (0x0002491c) list_medium_line_x2_t4_g2_t3

0x0eb2,	// (0x000176c3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00026526) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00026526) list_medium_line_x2_t4_g2_t

0x5564,	// (0x0001bd75) list_medium_line_t3_right_iconx2_g1

0x544c,	// (0x0001bc5d) list_medium_line_t3_right_iconx2_g2

0xe120,	// (0x00024931) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0002652f) list_medium_line_t3_right_iconx2_g

0xe128,	// (0x00024939) list_medium_line_t3_right_iconx2_t1

0xe138,	// (0x00024949) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00026536) list_medium_line_t3_right_iconx2_t

0x0e79,	// (0x0001768a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x3_t4_g4_g1

0x0e85,	// (0x00017696) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x3_t4_g4_g2

0x0efb,	// (0x0001770c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0efb,	// (0x0001770c) list_medium_line_x3_t4_g4_g3

0x556c,	// (0x0001bd7d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x556c,	// (0x0001bd7d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0002653b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0002653b) list_medium_line_x3_t4_g4_g

0xe146,	// (0x00024957) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe146,	// (0x00024957) list_medium_line_x3_t4_g4_t1

0xe15d,	// (0x0002496e) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe15d,	// (0x0002496e) list_medium_line_x3_t4_g4_t2

0x14b7,	// (0x00017cc8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x14b7,	// (0x00017cc8) list_medium_line_x3_t4_g4_t3

0x5578,	// (0x0001bd89) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5578,	// (0x0001bd89) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00026544) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00026544) list_medium_line_x3_t4_g4_t

0xe172,	// (0x00024983) list_single_dyc_row_text_pane_t1_ParamLimits

0xe172,	// (0x00024983) list_single_dyc_row_text_pane_t1

0xe1a9,	// (0x000249ba) list_single_dyc_row_text_pane_t2_ParamLimits

0xe1a9,	// (0x000249ba) list_single_dyc_row_text_pane_t2

0x5595,	// (0x0001bda6) list_single_dyc_row_text_pane_t3_ParamLimits

0x5595,	// (0x0001bda6) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0002654d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0002654d) list_single_dyc_row_text_pane_t

0x55a7,	// (0x0001bdb8) list_single_dyc_row_pane_g1_ParamLimits

0x55a7,	// (0x0001bdb8) list_single_dyc_row_pane_g1

0x55b3,	// (0x0001bdc4) list_single_dyc_row_pane_g2_ParamLimits

0x55b3,	// (0x0001bdc4) list_single_dyc_row_pane_g2

0x55bf,	// (0x0001bdd0) list_single_dyc_row_pane_g3_ParamLimits

0x55bf,	// (0x0001bdd0) list_single_dyc_row_pane_g3

0x55cb,	// (0x0001bddc) list_single_dyc_row_pane_g4_ParamLimits

0x55cb,	// (0x0001bddc) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00026554) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00026554) list_single_dyc_row_pane_g

0x55d7,	// (0x0001bde8) list_single_dyc_row_text_pane_ParamLimits

0x55d7,	// (0x0001bde8) list_single_dyc_row_text_pane

0x03bf,	// (0x00016bd0) bg_sp_fs_scroll_pane

0x55f6,	// (0x0001be07) thumb_sp_fs_scroll_pane

0x438f,	// (0x0001aba0) list_medium_line_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_g1

0x55ff,	// (0x0001be10) list_medium_line_t1_ParamLimits

0x55ff,	// (0x0001be10) list_medium_line_t1

0x0e79,	// (0x0001768a) list_medium_line_x2_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_g1

0x0e85,	// (0x00017696) list_medium_line_x2_g2_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0002655d) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0002655d) list_medium_line_x2_g

0x5614,	// (0x0001be25) list_medium_line_x2_t1_ParamLimits

0x5614,	// (0x0001be25) list_medium_line_x2_t1

0x0e79,	// (0x0001768a) list_medium_line_x3_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x3_g1

0x0e85,	// (0x00017696) list_medium_line_x3_g2_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0002655d) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0002655d) list_medium_line_x3_g

0x5614,	// (0x0001be25) list_medium_line_x3_t1_ParamLimits

0x5614,	// (0x0001be25) list_medium_line_x3_t1

0x562a,	// (0x0001be3b) thumb_sp_fs_scroll_pane_g1

0x5633,	// (0x0001be44) thumb_sp_fs_scroll_pane_g2

0x563c,	// (0x0001be4d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026562) thumb_sp_fs_scroll_pane_g

0x562a,	// (0x0001be3b) bg_sp_fs_scroll_pane_g1

0x5633,	// (0x0001be44) bg_sp_fs_scroll_pane_g2

0x563c,	// (0x0001be4d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026562) bg_sp_fs_scroll_pane_g

0x0e79,	// (0x0001768a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e79,	// (0x0001768a) list_medium_line_x2_t3_g4_g1

0x0eef,	// (0x00017700) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0eef,	// (0x00017700) list_medium_line_x2_t3_g4_g2

0x0e85,	// (0x00017696) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e85,	// (0x00017696) list_medium_line_x2_t3_g4_g3

0x0e91,	// (0x000176a2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e91,	// (0x000176a2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00025af7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00025af7) list_medium_line_x2_t3_g4_g

0xe203,	// (0x00024a14) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe203,	// (0x00024a14) list_medium_line_x2_t3_g4_t1

0xe219,	// (0x00024a2a) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe219,	// (0x00024a2a) list_medium_line_x2_t3_g4_t2

0x0eb2,	// (0x000176c3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0eb2,	// (0x000176c3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00026569) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00026569) list_medium_line_x2_t3_g4_t

0x438f,	// (0x0001aba0) list_medium_line_g2_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_g2_g1

0x439b,	// (0x0001abac) list_medium_line_g2_g2_ParamLimits

0x439b,	// (0x0001abac) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00026230) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00026230) list_medium_line_g2_g

0x5645,	// (0x0001be56) list_medium_line_g2_t1_ParamLimits

0x5645,	// (0x0001be56) list_medium_line_g2_t1

0x438f,	// (0x0001aba0) list_medium_line_t3_g2_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_t3_g2_g1

0x439b,	// (0x0001abac) list_medium_line_t3_g2_g2_ParamLimits

0x439b,	// (0x0001abac) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00026230) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00026230) list_medium_line_t3_g2_g

0xe233,	// (0x00024a44) list_medium_line_t3_g2_t1_ParamLimits

0xe233,	// (0x00024a44) list_medium_line_t3_g2_t1

0xe24a,	// (0x00024a5b) list_medium_line_t3_g2_t2_ParamLimits

0xe24a,	// (0x00024a5b) list_medium_line_t3_g2_t2

0xe25f,	// (0x00024a70) list_medium_line_t3_g2_t3_ParamLimits

0xe25f,	// (0x00024a70) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00026570) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00026570) list_medium_line_t3_g2_t

0x544c,	// (0x0001bc5d) list_medium_line_right_icon_g1

0x565a,	// (0x0001be6b) list_medium_line_right_icon_t1

0x438f,	// (0x0001aba0) list_medium_line_t2_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_t2_g1

0xe274,	// (0x00024a85) list_medium_line_t2_t1_ParamLimits

0xe274,	// (0x00024a85) list_medium_line_t2_t1

0xe28e,	// (0x00024a9f) list_medium_line_t2_t2_ParamLimits

0xe28e,	// (0x00024a9f) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00026577) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00026577) list_medium_line_t2_t

0x438f,	// (0x0001aba0) list_medium_line_t3_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_t3_g1

0xe2a3,	// (0x00024ab4) list_medium_line_t3_t1_ParamLimits

0xe2a3,	// (0x00024ab4) list_medium_line_t3_t1

0xe2bd,	// (0x00024ace) list_medium_line_t3_t2_ParamLimits

0xe2bd,	// (0x00024ace) list_medium_line_t3_t2

0xe2d2,	// (0x00024ae3) list_medium_line_t3_t3_ParamLimits

0xe2d2,	// (0x00024ae3) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0002657c) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0002657c) list_medium_line_t3_t

0x438f,	// (0x0001aba0) list_medium_line_g3_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_g3_g1

0x5668,	// (0x0001be79) list_medium_line_g3_g2_ParamLimits

0x5668,	// (0x0001be79) list_medium_line_g3_g2

0x439b,	// (0x0001abac) list_medium_line_g3_g3_ParamLimits

0x439b,	// (0x0001abac) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00026583) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00026583) list_medium_line_g3_g

0x5674,	// (0x0001be85) list_medium_line_g3_t1_ParamLimits

0x5674,	// (0x0001be85) list_medium_line_g3_t1

0x438f,	// (0x0001aba0) list_medium_line_t2_g3_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_t2_g3_g1

0x5668,	// (0x0001be79) list_medium_line_t2_g3_g2_ParamLimits

0x5668,	// (0x0001be79) list_medium_line_t2_g3_g2

0x439b,	// (0x0001abac) list_medium_line_t2_g3_g3_ParamLimits

0x439b,	// (0x0001abac) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00026583) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00026583) list_medium_line_t2_g3_g

0xe2e7,	// (0x00024af8) list_medium_line_t2_g3_t1_ParamLimits

0xe2e7,	// (0x00024af8) list_medium_line_t2_g3_t1

0xe301,	// (0x00024b12) list_medium_line_t2_g3_t2_ParamLimits

0xe301,	// (0x00024b12) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0002658a) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0002658a) list_medium_line_t2_g3_t

0x438f,	// (0x0001aba0) list_medium_line_t3_g3_g1_ParamLimits

0x438f,	// (0x0001aba0) list_medium_line_t3_g3_g1

0x5668,	// (0x0001be79) list_medium_line_t3_g3_g2_ParamLimits

0x5668,	// (0x0001be79) list_medium_line_t3_g3_g2

0x439b,	// (0x0001abac) list_medium_line_t3_g3_g3_ParamLimits

0x439b,	// (0x0001abac) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00026583) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00026583) list_medium_line_t3_g3_g

0xe316,	// (0x00024b27) list_medium_line_t3_g3_t1_ParamLimits

0xe316,	// (0x00024b27) list_medium_line_t3_g3_t1

0xe32a,	// (0x00024b3b) list_medium_line_t3_g3_t2_ParamLimits

0xe32a,	// (0x00024b3b) list_medium_line_t3_g3_t2

0xe33c,	// (0x00024b4d) list_medium_line_t3_g3_t3_ParamLimits

0xe33c,	// (0x00024b4d) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0002658f) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0002658f) list_medium_line_t3_g3_t

0x5564,	// (0x0001bd75) list_medium_line_right_iconx2_g1

0x544c,	// (0x0001bc5d) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00026596) list_medium_line_right_iconx2_g

0x5689,	// (0x0001be9a) list_medium_line_right_iconx2_t1

0x5564,	// (0x0001bd75) list_medium_line_t2_right_iconx2_g1

0x544c,	// (0x0001bc5d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00026596) list_medium_line_t2_right_iconx2_g

0xe34e,	// (0x00024b5f) list_medium_line_t2_right_iconx2_t1

0xe35e,	// (0x00024b6f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0002659b) list_medium_line_t2_right_iconx2_t

0x5697,	// (0x0001bea8) list_medium_line_x4_t4_t1

0xe36c,	// (0x00024b7d) list_medium_line_x4_t4_t2

0xe37c,	// (0x00024b8d) list_medium_line_x4_t4_t3

0xe38c,	// (0x00024b9d) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000265a0) list_medium_line_x4_t4_t

0xe3c5,	// (0x00024bd6) tport_appsw_pane_ParamLimits

0xe3c5,	// (0x00024bd6) tport_appsw_pane

0xe3d1,	// (0x00024be2) tport_contact_pane_ParamLimits

0xe3d1,	// (0x00024be2) tport_contact_pane

0xe3e1,	// (0x00024bf2) tport_listscroll_pane_ParamLimits

0xe3e1,	// (0x00024bf2) tport_listscroll_pane

0xe3f1,	// (0x00024c02) cell_tport_appsw_pane_ParamLimits

0xe3f1,	// (0x00024c02) cell_tport_appsw_pane

0x35d7,	// (0x00019de8) tport_appsw_pane_g1_ParamLimits

0x35d7,	// (0x00019de8) tport_appsw_pane_g1

0x56a5,	// (0x0001beb6) tport_contact_pane_g1

0x4e5c,	// (0x0001b66d) tport_contact_pane_t1

0x56ae,	// (0x0001bebf) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x000265a9) tport_contact_pane_t

0x56bc,	// (0x0001becd) list_tport_pane

0x56c5,	// (0x0001bed6) scroll_pane_cp_030

0x56d6,	// (0x0001bee7) cell_tport_appsw_pane_g1

0x56e6,	// (0x0001bef7) cell_tport_appsw_pane_t1

0x03bf,	// (0x00016bd0) grid_highlight_pane_cp019

0xe41c,	// (0x00024c2d) list_tport_double_graphic_pane_ParamLimits

0xe41c,	// (0x00024c2d) list_tport_double_graphic_pane

0x042f,	// (0x00016c40) list_highlight_pane_cp023_ParamLimits

0x042f,	// (0x00016c40) list_highlight_pane_cp023

0xe42e,	// (0x00024c3f) list_tport_double_graphic_pane_g1_ParamLimits

0xe42e,	// (0x00024c3f) list_tport_double_graphic_pane_g1

0xe43b,	// (0x00024c4c) list_tport_double_graphic_pane_t1_ParamLimits

0xe43b,	// (0x00024c4c) list_tport_double_graphic_pane_t1

0xe450,	// (0x00024c61) list_tport_double_graphic_pane_t2_ParamLimits

0xe450,	// (0x00024c61) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x000265b5) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x000265b5) list_tport_double_graphic_pane_t

0x03bf,	// (0x00016bd0) main_cale_note_pane

0x7f86,	// (0x0001e797) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7f86,	// (0x0001e797) cell_vitu2_function_top_wide_pane_cp01

0xdbd4,	// (0x000243e5) wait_bar_pane_cp05_ParamLimits

0x03bf,	// (0x00016bd0) listscroll_cmail_pane

0x56fc,	// (0x0001bf0d) list_cmail_pane

0xe46c,	// (0x00024c7d) list_cmail_body_pane

0xe489,	// (0x00024c9a) list_single_cmail_header_caption_pane

0xe4ae,	// (0x00024cbf) list_single_cmail_header_detail_pane_ParamLimits

0xe4ae,	// (0x00024cbf) list_single_cmail_header_detail_pane

0xe4e1,	// (0x00024cf2) list_single_cmail_header_caption_pane_t1

0xe4ef,	// (0x00024d00) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe4ef,	// (0x00024d00) list_single_cmail_header_detail_pane_g1

0x571d,	// (0x0001bf2e) list_single_cmail_header_detail_pane_g2_ParamLimits

0x571d,	// (0x0001bf2e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x000265ba) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x000265ba) list_single_cmail_header_detail_pane_g

0x5736,	// (0x0001bf47) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5736,	// (0x0001bf47) list_single_cmail_header_detail_pane_t1

0x576c,	// (0x0001bf7d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x576c,	// (0x0001bf7d) list_single_cmail_header_editor_pane_bg

0x500b,	// (0x0001b81c) list_cmail_body_pane_g1

0x577e,	// (0x0001bf8f) list_cmail_body_pane_t1

0x40ba,	// (0x0001a8cb) list_single_cmail_header_editor_pane_bg_g1

0x110e,	// (0x0001791f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x40ca,	// (0x0001a8db) list_single_cmail_header_editor_pane_bg_g1_copy2

0x40c2,	// (0x0001a8d3) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4367,	// (0x0001ab78) list_single_cmail_header_editor_pane_bg_g1_copy4

0x40ea,	// (0x0001a8fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x40da,	// (0x0001a8eb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x40e2,	// (0x0001a8f3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x10ee,	// (0x000178ff) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe529,	// (0x00024d3a) calenote_gesture_pane_ParamLimits

0xe529,	// (0x00024d3a) calenote_gesture_pane

0xe543,	// (0x00024d54) calenote_window_pane_ParamLimits

0xe543,	// (0x00024d54) calenote_window_pane

0x578c,	// (0x0001bf9d) popup_note_window_cp01

0xe55b,	// (0x00024d6c) calenote_swipe_1_pane_ParamLimits

0xe55b,	// (0x00024d6c) calenote_swipe_1_pane

0xdfac,	// (0x000247bd) calenote_swipe_2_pane_ParamLimits

0xdfac,	// (0x000247bd) calenote_swipe_2_pane

0x534d,	// (0x0001bb5e) calenote_swipe_1_pane_g1_ParamLimits

0x534d,	// (0x0001bb5e) calenote_swipe_1_pane_g1

0x535a,	// (0x0001bb6b) calenote_swipe_1_pane_g2_ParamLimits

0x535a,	// (0x0001bb6b) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x000264ee) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x000264ee) calenote_swipe_1_pane_g

0x579e,	// (0x0001bfaf) calenote_swipe_1_pane_t1_ParamLimits

0x579e,	// (0x0001bfaf) calenote_swipe_1_pane_t1

0x534d,	// (0x0001bb5e) calenote_swipe_2_pane_g1_ParamLimits

0x534d,	// (0x0001bb5e) calenote_swipe_2_pane_g1

0x57bd,	// (0x0001bfce) calenote_swipe_2_pane_g2_ParamLimits

0x57bd,	// (0x0001bfce) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x000265c6) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x000265c6) calenote_swipe_2_pane_g

0x57c9,	// (0x0001bfda) calenote_swipe_2_pane_t1_ParamLimits

0x57c9,	// (0x0001bfda) calenote_swipe_2_pane_t1

0x03bf,	// (0x00016bd0) main_mup_navstr_pane

0xbcb0,	// (0x000224c1) main_mup3_pane_t7_ParamLimits

0xbcb0,	// (0x000224c1) main_mup3_pane_t7

0x788c,	// (0x0001e09d) main_mp4_pane_g6_ParamLimits

0x788c,	// (0x0001e09d) main_mp4_pane_g6

0x7b7f,	// (0x0001e390) main_image3_pane_t4_ParamLimits

0x7b7f,	// (0x0001e390) main_image3_pane_t4

0xe56e,	// (0x00024d7f) popup_navstr_preview_pane_ParamLimits

0xe56e,	// (0x00024d7f) popup_navstr_preview_pane

0xe57a,	// (0x00024d8b) scroll_navstr_pane_ParamLimits

0xe57a,	// (0x00024d8b) scroll_navstr_pane

0x03bf,	// (0x00016bd0) bg_popup_preview_window_pane_cp04

0x57f0,	// (0x0001c001) popup_navstr_preview_pane_t1

0xe586,	// (0x00024d97) scroll_navstr_pane_g1_ParamLimits

0xe586,	// (0x00024d97) scroll_navstr_pane_g1

0xe593,	// (0x00024da4) scroll_navstr_pane_t1_ParamLimits

0xe593,	// (0x00024da4) scroll_navstr_pane_t1

0x5795,	// (0x0001bfa6) bg_button_pane_cp014

0x5795,	// (0x0001bfa6) bg_button_pane_cp030

0xdea0,	// (0x000246b1) list_double_fisheye_pane_g4_ParamLimits

0xdea0,	// (0x000246b1) list_double_fisheye_pane_g4

0xdeac,	// (0x000246bd) list_double_fisheye_pane_g5_ParamLimits

0xdeac,	// (0x000246bd) list_double_fisheye_pane_g5

0x5704,	// (0x0001bf15) sp_fs_scroll_pane_cp03

0x548c,	// (0x0001bc9d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5498,	// (0x0001bca9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0002650b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x54a4,	// (0x0001bcb5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe462,	// (0x00024c73) sp_fs_scroll_pane_cp02

0x0d14,	// (0x00017525) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0d14,	// (0x00017525) popup_sp_fs_calendar_preview_list_single_pane

0x03bf,	// (0x00016bd0) main_cam6_pano_pane

0x042f,	// (0x00016c40) main_mup3_pane_ParamLimits

0x03bf,	// (0x00016bd0) main_phacti_pane

0xdaa9,	// (0x000242ba) bg_button_pane_cp11

0xdac1,	// (0x000242d2) main_mobtv_info_pane_g2_ParamLimits

0xdac1,	// (0x000242d2) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0002646b) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0002646b) main_mobtv_info_pane_g

0xdc73,	// (0x00024484) sc_clock_pane_t5_ParamLimits

0xdc73,	// (0x00024484) sc_clock_pane_t5

0xdd11,	// (0x00024522) main_radioblah_pane_g1_ParamLimits

0x5299,	// (0x0001baaa) main_radioblah_pane_t3_ParamLimits

0x5299,	// (0x0001baaa) main_radioblah_pane_t3

0x52b1,	// (0x0001bac2) main_radioblah_pane_t4_ParamLimits

0x52b1,	// (0x0001bac2) main_radioblah_pane_t4

0xdd2f,	// (0x00024540) main_radioblah_text_pane_ParamLimits

0xdd2f,	// (0x00024540) main_radioblah_text_pane

0xdd3c,	// (0x0002454d) main_radioblah_info_pane_g1_ParamLimits

0xddd1,	// (0x000245e2) main_radioblah_info_pane_t4_ParamLimits

0xddd1,	// (0x000245e2) main_radioblah_info_pane_t4

0x042f,	// (0x00016c40) main_sp_fs_calendar_pane

0xe5a5,	// (0x00024db6) main_phacti_pane_g1

0xe5ad,	// (0x00024dbe) phacti_note_pane_ParamLimits

0xe5ad,	// (0x00024dbe) phacti_note_pane

0x5807,	// (0x0001c018) phacti_term_pane_ParamLimits

0x5807,	// (0x0001c018) phacti_term_pane

0x581c,	// (0x0001c02d) phacti_note_pane_t1_ParamLimits

0x581c,	// (0x0001c02d) phacti_note_pane_t1

0x5833,	// (0x0001c044) phacti_term_pane_g1

0x583b,	// (0x0001c04c) phacti_term_pane_t1_ParamLimits

0x583b,	// (0x0001c04c) phacti_term_pane_t1

0x5865,	// (0x0001c076) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0e71,	// (0x00017682) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x000265d0) popup_sp_fs_calendar_preview_list_single_pane_g

0x586d,	// (0x0001c07e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x586d,	// (0x0001c07e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5882,	// (0x0001c093) aid_popup_sp_fs_bg_corner_pane

0x32fa,	// (0x00019b0b) popup_sp_fs_calendar_preview_bg_pane_g1

0x03bf,	// (0x00016bd0) popup_sp_fs_calendar_preview_bg_pane

0x588a,	// (0x0001c09b) popup_sp_fs_calendar_preview_list_pane

0x042f,	// (0x00016c40) bg_main_sp_fs_cale_pane_ParamLimits

0x042f,	// (0x00016c40) bg_main_sp_fs_cale_pane

0x589b,	// (0x0001c0ac) listscroll_cale_mrui_pane_ParamLimits

0x589b,	// (0x0001c0ac) listscroll_cale_mrui_pane

0x58af,	// (0x0001c0c0) listscroll_sp_fs_schedule_track_pane

0x58b8,	// (0x0001c0c9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x58b8,	// (0x0001c0c9) main_sp_fs_ctrlbar_pane_cp01

0x58c9,	// (0x0001c0da) main_sp_fs_ribbon_pane

0x58d1,	// (0x0001c0e2) popup_sp_fs_cale_preview_window

0xe5ec,	// (0x00024dfd) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe5ec,	// (0x00024dfd) list_single_sp_fs_schedule_track_pane

0x39a1,	// (0x0001a1b2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x39a1,	// (0x0001a1b2) bg_sp_fs_highlight_list_pane_cp03

0xe605,	// (0x00024e16) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe605,	// (0x00024e16) list_single_sp_fs_schedule_track_pane_g1

0xe611,	// (0x00024e22) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe611,	// (0x00024e22) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x000265d5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x000265d5) list_single_sp_fs_schedule_track_pane_g

0xe61d,	// (0x00024e2e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe61d,	// (0x00024e2e) list_single_sp_fs_schedule_track_pane_t1

0xe635,	// (0x00024e46) sp_fs_schedule_track_pane_ParamLimits

0xe635,	// (0x00024e46) sp_fs_schedule_track_pane

0x58e3,	// (0x0001c0f4) sp_fs_schedule_track_pane_g1

0x58eb,	// (0x0001c0fc) sp_fs_schedule_track_pane_g2

0x58f3,	// (0x0001c104) sp_fs_schedule_track_pane_g3

0x58fb,	// (0x0001c10c) sp_fs_schedule_track_pane_g4

0x5903,	// (0x0001c114) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x000265da) sp_fs_schedule_track_pane_g

0x40ba,	// (0x0001a8cb) bg_sp_fs_schedule_viewer_highlight_g1

0x110e,	// (0x0001791f) bg_sp_fs_schedule_viewer_highlight_g2

0x40c2,	// (0x0001a8d3) bg_sp_fs_schedule_viewer_highlight_g3

0x40ca,	// (0x0001a8db) bg_sp_fs_schedule_viewer_highlight_g4

0x4367,	// (0x0001ab78) bg_sp_fs_schedule_viewer_highlight_g5

0x40da,	// (0x0001a8eb) bg_sp_fs_schedule_viewer_highlight_g6

0x40e2,	// (0x0001a8f3) bg_sp_fs_schedule_viewer_highlight_g7

0x40ea,	// (0x0001a8fb) bg_sp_fs_schedule_viewer_highlight_g8

0x10ee,	// (0x000178ff) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x000265e5) bg_sp_fs_schedule_viewer_highlight_g

0x03bf,	// (0x00016bd0) bg_main_sp_fs_ribbon_pane

0xe645,	// (0x00024e56) main_sp_fs_ribbon_pane_g1

0x590b,	// (0x0001c11c) main_sp_fs_ribbon_pane_t1

0xe64e,	// (0x00024e5f) main_sp_fs_ribbon_pane_t2

0x591a,	// (0x0001c12b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x000265f8) main_sp_fs_ribbon_pane_t

0x5929,	// (0x0001c13a) main_sp_fs_ribbon_scheduler_pane

0x5931,	// (0x0001c142) bg_main_sp_fs_ribbon_pane_g1

0x593a,	// (0x0001c14b) bg_main_sp_fs_ribbon_pane_g2

0x5943,	// (0x0001c154) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x000265ff) bg_main_sp_fs_ribbon_pane_g

0x594b,	// (0x0001c15c) main_sp_fs_ribbon_scheduler_pane_g1

0x5954,	// (0x0001c165) main_sp_fs_ribbon_scheduler_pane_g2

0x595d,	// (0x0001c16e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00026606) main_sp_fs_ribbon_scheduler_pane_g

0x5966,	// (0x0001c177) list_cale_mrui_pane

0xe65d,	// (0x00024e6e) sp_fs_scroll_pane_cp07_ParamLimits

0xe65d,	// (0x00024e6e) sp_fs_scroll_pane_cp07

0xe673,	// (0x00024e84) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe673,	// (0x00024e84) bg_sp_fs_schedule_viewer_highlight

0x596f,	// (0x0001c180) list_single_sp_fs_schedule_track_pane_cp01

0x5977,	// (0x0001c188) list_sp_fs_schedule_track_pane

0x597f,	// (0x0001c190) sp_fs_scroll_pane_cp06_ParamLimits

0x597f,	// (0x0001c190) sp_fs_scroll_pane_cp06

0x32fa,	// (0x00019b0b) bgmain_sp_fs_calendar_pane_g1

0xe680,	// (0x00024e91) list_single_cale_mrui_pane_ParamLimits

0xe680,	// (0x00024e91) list_single_cale_mrui_pane

0x5991,	// (0x0001c1a2) list_single_cale_mrui_row_pane_ParamLimits

0x5991,	// (0x0001c1a2) list_single_cale_mrui_row_pane

0x599e,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1_ParamLimits

0x599e,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1

0x59d6,	// (0x0001c1e7) list_single_cale_mrui_row_pane_t1_ParamLimits

0x59d6,	// (0x0001c1e7) list_single_cale_mrui_row_pane_t1

0xe6a5,	// (0x00024eb6) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe6a5,	// (0x00024eb6) list_single_cale_mrui_row_pane_t2

0x59e8,	// (0x0001c1f9) list_single_cale_mrui_row_pane_t3_ParamLimits

0x59e8,	// (0x0001c1f9) list_single_cale_mrui_row_pane_t3

0x5a17,	// (0x0001c228) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5a17,	// (0x0001c228) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00026612) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00026612) list_single_cale_mrui_row_pane_t

0xe70b,	// (0x00024f1c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe70b,	// (0x00024f1c) list_single_cmail_header_editor_pane_bg_cp01

0xe72b,	// (0x00024f3c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe72b,	// (0x00024f3c) list_single_cmail_header_editor_pane_bg_cp02

0xe747,	// (0x00024f58) main_radioblah_text_pane_t1_ParamLimits

0xe747,	// (0x00024f58) main_radioblah_text_pane_t1

0x5a46,	// (0x0001c257) cam6_indi_pane_cp01

0x5a4e,	// (0x0001c25f) cam6_mode_pane_cp01

0x5a56,	// (0x0001c267) cam6_pano_pane

0x5a5f,	// (0x0001c270) cam6_zoom_pane_cp01

0x5a67,	// (0x0001c278) cam6_pano_image_pane

0x5a72,	// (0x0001c283) cam6_pano_pane_g1

0x500b,	// (0x0001b81c) cam6_pano_pane_g2

0x5a7b,	// (0x0001c28c) cam6_pano_pane_g3

0x5a84,	// (0x0001c295) cam6_pano_pane_g4

0x38a2,	// (0x0001a0b3) cam6_pano_pane_g5

0x5a8d,	// (0x0001c29e) cam6_pano_pane_g6

0x5072,	// (0x0001b883) cam6_pano_pane_g7

0x5a97,	// (0x0001c2a8) cam6_pano_pane_g8

0x5aa0,	// (0x0001c2b1) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0002661b) cam6_pano_pane_g

0x03bf,	// (0x00016bd0) main_browser_tag_pane

0x57e8,	// (0x0001bff9) grid_navstr_albumart_pane

0x5aab,	// (0x0001c2bc) cell_navstr_albumart_pane_ParamLimits

0x5aab,	// (0x0001c2bc) cell_navstr_albumart_pane

0x5ace,	// (0x0001c2df) cell_navstr_albumart_pane_g1

0x2c11,	// (0x00019422) cell_navstr_albumart_pane_g2

0x2c21,	// (0x00019432) cell_navstr_albumart_pane_g3

0x2c19,	// (0x0001942a) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0002662e) cell_navstr_albumart_pane_g

0xe762,	// (0x00024f73) bt_list_pane_ParamLimits

0xe762,	// (0x00024f73) bt_list_pane

0xe782,	// (0x00024f93) bt_list_pane_t1

0xe791,	// (0x00024fa2) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00026637) bt_list_pane_t

0x03bf,	// (0x00016bd0) main_cale_prevew_pane

0xe7a0,	// (0x00024fb1) popup_cale_preview_window_ParamLimits

0xe7a0,	// (0x00024fb1) popup_cale_preview_window

0x042f,	// (0x00016c40) bg_popup_preview_window_pane_cp05_ParamLimits

0x042f,	// (0x00016c40) bg_popup_preview_window_pane_cp05

0x5adf,	// (0x0001c2f0) list_cale_preview_pane_ParamLimits

0x5adf,	// (0x0001c2f0) list_cale_preview_pane

0x5e3e,	// (0x0001c64f) list_double_cale_preview_pane_ParamLimits

0x5e3e,	// (0x0001c64f) list_double_cale_preview_pane

0xe7b9,	// (0x00024fca) list_single_cale_preview_pane_ParamLimits

0xe7b9,	// (0x00024fca) list_single_cale_preview_pane

0xe7cf,	// (0x00024fe0) list_single_cale_preview_pane_g1

0xe7d7,	// (0x00024fe8) list_single_cale_preview_pane_t1_ParamLimits

0xe7d7,	// (0x00024fe8) list_single_cale_preview_pane_t1

0xe7ec,	// (0x00024ffd) list_double_cale_preview_pane_g1

0xe7f4,	// (0x00025005) list_double_cale_preview_pane_t1_ParamLimits

0xe7f4,	// (0x00025005) list_double_cale_preview_pane_t1

0xe809,	// (0x0002501a) list_double_cale_preview_pane_t2_ParamLimits

0xe809,	// (0x0002501a) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0002663c) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0002663c) list_double_cale_preview_pane_t

0x03bf,	// (0x00016bd0) main_ezdial_pane

0x042f,	// (0x00016c40) main_sp_fs_email_pane_ParamLimits

0xdfe4,	// (0x000247f5) cmail_ddmenu_btn01_pane_ParamLimits

0xdfe4,	// (0x000247f5) cmail_ddmenu_btn01_pane

0xe001,	// (0x00024812) cmail_ddmenu_btn02_pane_ParamLimits

0xe001,	// (0x00024812) cmail_ddmenu_btn02_pane

0xe01f,	// (0x00024830) cmail_ddmenu_btn03_pane_ParamLimits

0xe01f,	// (0x00024830) cmail_ddmenu_btn03_pane

0xe04d,	// (0x0002485e) main_sp_fs_ctrlbar_pane_ParamLimits

0xe069,	// (0x0002487a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe46c,	// (0x00024c7d) list_cmail_body_pane_ParamLimits

0x5714,	// (0x0001bf25) bg_button_pane_cp12

0x5729,	// (0x0001bf3a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5729,	// (0x0001bf3a) list_single_cmail_header_detail_pane_g3

0xe505,	// (0x00024d16) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe505,	// (0x00024d16) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x000265c1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x000265c1) list_single_cmail_header_detail_pane_t

0x5850,	// (0x0001c061) phacti_term_pane_t2_ParamLimits

0x5850,	// (0x0001c061) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x000265cb) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x000265cb) phacti_term_pane_t

0x5aeb,	// (0x0001c2fc) aid_size_list_single_double

0xe821,	// (0x00025032) popup_ezdial_listscroll_window

0xe841,	// (0x00025052) popup_number_entry_window_cp01

0x1937,	// (0x00018148) bg_popup_call_pane_cp09

0x5af7,	// (0x0001c308) ezdial_list_pane

0x5aff,	// (0x0001c310) scroll_pane_cp23

0x30df,	// (0x000198f0) bg_button_pane_cp028_ParamLimits

0x30df,	// (0x000198f0) bg_button_pane_cp028

0xe84f,	// (0x00025060) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe84f,	// (0x00025060) cmail_ddmenu_btn01_pane_g1

0xe85f,	// (0x00025070) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe85f,	// (0x00025070) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00026641) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00026641) cmail_ddmenu_btn01_pane_g

0x5b07,	// (0x0001c318) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5b07,	// (0x0001c318) cmail_ddmenu_btn01_pane_t1

0x2df4,	// (0x00019605) bg_button_pane_cp029_ParamLimits

0x2df4,	// (0x00019605) bg_button_pane_cp029

0xe85f,	// (0x00025070) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe85f,	// (0x00025070) cmail_ddmenu_btn02_pane_g1

0xe877,	// (0x00025088) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe877,	// (0x00025088) cmail_ddmenu_btn02_pane_t1

0x39a1,	// (0x0001a1b2) bg_button_pane_cp031_ParamLimits

0x39a1,	// (0x0001a1b2) bg_button_pane_cp031

0xe85f,	// (0x00025070) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe85f,	// (0x00025070) cmail_ddmenu_btn03_pane_g1

0xe877,	// (0x00025088) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe877,	// (0x00025088) cmail_ddmenu_btn03_pane_t1

0xc502,	// (0x00022d13) cell_dialer2_keypad_pane_t1_ParamLimits

0xc51c,	// (0x00022d2d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc51c,	// (0x00022d2d) cell_dialer2_keypad_pane_t1_copy1

0xd949,	// (0x0002415a) ncimui_group_button_pane

0x042f,	// (0x00016c40) main_sp_fs_calendar_pane_ParamLimits

0xe489,	// (0x00024c9a) list_single_cmail_header_caption_pane_ParamLimits

0x5892,	// (0x0001c0a3) aid_recal_txt_sm_pane

0x03bf,	// (0x00016bd0) mian_recal_day_pane

0x58d1,	// (0x0001c0e2) popup_sp_fs_cale_preview_window_ParamLimits

0x03bf,	// (0x00016bd0) list_recal_day_pane

0x5b3e,	// (0x0001c34f) list_single_recal_day_pane_ParamLimits

0x5b3e,	// (0x0001c34f) list_single_recal_day_pane

0x5b50,	// (0x0001c361) list_single_recal_day_pane_g1_ParamLimits

0x5b50,	// (0x0001c361) list_single_recal_day_pane_g1

0x5b5c,	// (0x0001c36d) list_single_recal_day_pane_g2_ParamLimits

0x5b5c,	// (0x0001c36d) list_single_recal_day_pane_g2

0x5b6b,	// (0x0001c37c) list_single_recal_day_pane_g3_ParamLimits

0x5b6b,	// (0x0001c37c) list_single_recal_day_pane_g3

0xe89b,	// (0x000250ac) list_single_recal_day_pane_g4_ParamLimits

0xe89b,	// (0x000250ac) list_single_recal_day_pane_g4

0x5b77,	// (0x0001c388) list_single_recal_day_pane_g5_ParamLimits

0x5b77,	// (0x0001c388) list_single_recal_day_pane_g5

0x5b86,	// (0x0001c397) list_single_recal_day_pane_g6_ParamLimits

0x5b86,	// (0x0001c397) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00026650) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00026650) list_single_recal_day_pane_g

0x5b92,	// (0x0001c3a3) list_single_recal_day_pane_t1

0x5ba0,	// (0x0001c3b1) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0002665d) list_single_recal_day_pane_t

0xe8ae,	// (0x000250bf) ncimui_query_button_pane_ParamLimits

0xe8ae,	// (0x000250bf) ncimui_query_button_pane

0xe8be,	// (0x000250cf) ncimui_query_button_pane_t1_ParamLimits

0xe8be,	// (0x000250cf) ncimui_query_button_pane_t1

0x5bae,	// (0x0001c3bf) ncimui_query_button_pane_t2_ParamLimits

0x5bae,	// (0x0001c3bf) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00026662) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00026662) ncimui_query_button_pane_t

0xe8d1,	// (0x000250e2) query_button_pane_ParamLimits

0xe8d1,	// (0x000250e2) query_button_pane

0x03bf,	// (0x00016bd0) bg_button_pane_cp0028

0x5bc1,	// (0x0001c3d2) query_button_pane_t1

0xafd1,	// (0x000217e2) main_tport_pane_ParamLimits

0xe39c,	// (0x00024bad) bg_popup_window_pane_cp01_ParamLimits

0xe39c,	// (0x00024bad) bg_popup_window_pane_cp01

0xe3a9,	// (0x00024bba) heading_pane_cp08_ParamLimits

0xe3a9,	// (0x00024bba) heading_pane_cp08

0xe3b7,	// (0x00024bc8) heading_pane_cp07_ParamLimits

0xe3b7,	// (0x00024bc8) heading_pane_cp07

0x56d6,	// (0x0001bee7) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x000265ae) cell_tport_appsw_pane_g

0x1ab8,	// (0x000182c9) input_candi_list_open_g1

0x130d,	// (0x00017b1e) list_cale_time_pane_g6_ParamLimits

0x130d,	// (0x00017b1e) list_cale_time_pane_g6

0xb71d,	// (0x00021f2e) aid_size_touch_calib_1_ParamLimits

0xb71d,	// (0x00021f2e) aid_size_touch_calib_1

0xb729,	// (0x00021f3a) aid_size_touch_calib_2_ParamLimits

0xb729,	// (0x00021f3a) aid_size_touch_calib_2

0xb737,	// (0x00021f48) aid_size_touch_calib_3_ParamLimits

0xb737,	// (0x00021f48) aid_size_touch_calib_3

0xb747,	// (0x00021f58) aid_size_touch_calib_4_ParamLimits

0xb747,	// (0x00021f58) aid_size_touch_calib_4

0xb755,	// (0x00021f66) main_touch_calib_button_group_pane_ParamLimits

0xb755,	// (0x00021f66) main_touch_calib_button_group_pane

0xb763,	// (0x00021f74) main_touch_calib_pane_g1_ParamLimits

0xb76f,	// (0x00021f80) main_touch_calib_pane_g2_ParamLimits

0xb77b,	// (0x00021f8c) main_touch_calib_pane_g3_ParamLimits

0xb787,	// (0x00021f98) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00025f86) main_touch_calib_pane_g_ParamLimits

0xb793,	// (0x00021fa4) main_touch_calib_pane_t1_ParamLimits

0xb7aa,	// (0x00021fbb) main_touch_calib_pane_t2_ParamLimits

0xb7c1,	// (0x00021fd2) main_touch_calib_pane_t3_ParamLimits

0xb7d5,	// (0x00021fe6) main_touch_calib_pane_t4_ParamLimits

0xb7e9,	// (0x00021ffa) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00025f8f) main_touch_calib_pane_t_ParamLimits

0x3678,	// (0x00019e89) list_single_fp_cale_pane_g3_ParamLimits

0x3678,	// (0x00019e89) list_single_fp_cale_pane_g3

0x7d7c,	// (0x0001e58d) bg_button_pane_cp012_ParamLimits

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp03_ParamLimits

0x818c,	// (0x0001e99d) cell_vitu2_function_top_pane_g1_ParamLimits

0x7d7c,	// (0x0001e58d) bg_vkb2_func_pane_cp04_ParamLimits

0xd8e7,	// (0x000240f8) main_ncimui_button_group_pane_ParamLimits

0xd8e7,	// (0x000240f8) main_ncimui_button_group_pane

0xd937,	// (0x00024148) main_ncimui_pane_t3_ParamLimits

0xd937,	// (0x00024148) main_ncimui_pane_t3

0x57fe,	// (0x0001c00f) phacti_button_group_pane

0x5aeb,	// (0x0001c2fc) aid_size_list_single_double_ParamLimits

0xe821,	// (0x00025032) popup_ezdial_listscroll_window_ParamLimits

0xe841,	// (0x00025052) popup_number_entry_window_cp01_ParamLimits

0xe8de,	// (0x000250ef) phacti_button_pane_ParamLimits

0xe8de,	// (0x000250ef) phacti_button_pane

0x03bf,	// (0x00016bd0) bg_button_pane_cp14

0x5bcf,	// (0x0001c3e0) phacti_button_pane_t1

0xe8ef,	// (0x00025100) main_touch_calib_button_pane_ParamLimits

0xe8ef,	// (0x00025100) main_touch_calib_button_pane

0x0ba4,	// (0x000173b5) bg_button_pane_cp18_ParamLimits

0x0ba4,	// (0x000173b5) bg_button_pane_cp18

0x5bdd,	// (0x0001c3ee) main_touch_calib_button_pane_t1_ParamLimits

0x5bdd,	// (0x0001c3ee) main_touch_calib_button_pane_t1

0x5bf3,	// (0x0001c404) main_touch_calib_button_pane_t2_ParamLimits

0x5bf3,	// (0x0001c404) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00026667) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00026667) main_touch_calib_button_pane_t

0x03bf,	// (0x00016bd0) cell_ncimui_button_pane

0x03bf,	// (0x00016bd0) bg_button_pane_cp032

0x5c11,	// (0x0001c422) cell_ncimui_button_pane_t1

0x7a92,	// (0x0001e2a3) image3_infobar_pane_ParamLimits

0x7a92,	// (0x0001e2a3) image3_infobar_pane

0xdc95,	// (0x000244a6) fs_bigclock_status_pane_ParamLimits

0xdc95,	// (0x000244a6) fs_bigclock_status_pane

0xdca2,	// (0x000244b3) main_fs_bigclock_clock_pane_ParamLimits

0xdca2,	// (0x000244b3) main_fs_bigclock_clock_pane

0xdcb2,	// (0x000244c3) main_fs_bigclock_indi_pane_ParamLimits

0xdcb2,	// (0x000244c3) main_fs_bigclock_indi_pane

0xdcdf,	// (0x000244f0) main_fs_bigclock_swipe_pane_ParamLimits

0xdcdf,	// (0x000244f0) main_fs_bigclock_swipe_pane

0x03bf,	// (0x00016bd0) main_fs_clock_dumped_data

0x5120,	// (0x0001b931) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5120,	// (0x0001b931) list_single_fs_bigclock_indicator_pane_g1

0x513c,	// (0x0001b94d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x513c,	// (0x0001b94d) list_single_fs_bigclock_indicator_pane_g2

0x5156,	// (0x0001b967) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5156,	// (0x0001b967) list_single_fs_bigclock_indicator_pane_g3

0x5170,	// (0x0001b981) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5170,	// (0x0001b981) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0002649f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0002649f) list_single_fs_bigclock_indicator_pane_g

0x5196,	// (0x0001b9a7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5196,	// (0x0001b9a7) list_single_fs_bigclock_indicator_pane_t1

0x51be,	// (0x0001b9cf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x51be,	// (0x0001b9cf) list_single_fs_bigclock_indicator_pane_t2

0x51e6,	// (0x0001b9f7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x51e6,	// (0x0001b9f7) list_single_fs_bigclock_indicator_pane_t3

0x520e,	// (0x0001ba1f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x520e,	// (0x0001ba1f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000264aa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000264aa) list_single_fs_bigclock_indicator_pane_t

0x5c1f,	// (0x0001c430) image3_infobar_fav_pane_ParamLimits

0x5c1f,	// (0x0001c430) image3_infobar_fav_pane

0x5c2f,	// (0x0001c440) image3_infobar_loc_pane_ParamLimits

0x5c2f,	// (0x0001c440) image3_infobar_loc_pane

0x5c43,	// (0x0001c454) image3_infobar_time_pane_ParamLimits

0x5c43,	// (0x0001c454) image3_infobar_time_pane

0x32fa,	// (0x00019b0b) image3_infobar_time_pane_g1

0x5c53,	// (0x0001c464) image3_infobar_time_pane_t1

0x32fa,	// (0x00019b0b) image3_infobar_loc_pane_g1

0x5c61,	// (0x0001c472) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0002666c) image3_infobar_loc_pane_g

0x5c69,	// (0x0001c47a) image3_infobar_loc_pane_t1

0x32fa,	// (0x00019b0b) image3_infobar_fav_pane_g1

0x5c77,	// (0x0001c488) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00026671) image3_infobar_fav_pane_g

0x5c7f,	// (0x0001c490) fs_bigclock_status_battery_pane

0x5c88,	// (0x0001c499) fs_bigclock_status_signal_pane

0x5c91,	// (0x0001c4a2) fs_bigclock_status_title_pane

0x5c9a,	// (0x0001c4ab) fs_bigclock_status_signal_pane_g1

0x5ca3,	// (0x0001c4b4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00026676) fs_bigclock_status_signal_pane_g

0x5cab,	// (0x0001c4bc) fs_bigclock_status_battery_pane_g1

0x5cb4,	// (0x0001c4c5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0002667b) fs_bigclock_status_battery_pane_g

0x5cbc,	// (0x0001c4cd) fs_bigclock_status_title_pane_t1

0x32fa,	// (0x00019b0b) main_fs_bigclock_clock_pane_g1

0x5cca,	// (0x0001c4db) main_fs_bigclock_clock_pane_g2

0x5cca,	// (0x0001c4db) main_fs_bigclock_clock_pane_g3

0x5cca,	// (0x0001c4db) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00026680) main_fs_bigclock_clock_pane_g

0x5cd2,	// (0x0001c4e3) main_fs_bigclock_clock_pane_t1

0x5ce0,	// (0x0001c4f1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00026689) main_fs_bigclock_clock_pane_t

0x5cef,	// (0x0001c500) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5cef,	// (0x0001c500) list_single_fs_bigclock_indicator_pane

0xe901,	// (0x00025112) list_single_fs_bigclock_pane_ParamLimits

0xe901,	// (0x00025112) list_single_fs_bigclock_pane

0x5d09,	// (0x0001c51a) main_fs_bigclock_indicator_pane_t1

0x5d18,	// (0x0001c529) list_single_fs_bigclock_pane_g1

0x5d20,	// (0x0001c531) list_single_fs_bigclock_pane_t1

0x32fa,	// (0x00019b0b) main_fs_bigclock_swipe_pane_g1

0x5d5e,	// (0x0001c56f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0002669a) main_fs_bigclock_swipe_pane_g

0x5d66,	// (0x0001c577) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5d66,	// (0x0001c577) main_fs_bigclock_swipe_pane_t1

0x9ff8,	// (0x00020809) call_type_pane_ParamLimits

0x03bf,	// (0x00016bd0) main_btmg_pane

0x59ca,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2_ParamLimits

0x59ca,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0002660d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0002660d) list_single_cale_mrui_row_pane_g

0x5b25,	// (0x0001c336) list_recal_vselct_arw_lo_pane

0x5b2d,	// (0x0001c33e) list_recal_vselct_arw_up_pane

0x5b35,	// (0x0001c346) list_recal_vselct_pane

0x5d83,	// (0x0001c594) btmg_button_pane

0xe964,	// (0x00025175) main_btmg_pane_g1

0x03bf,	// (0x00016bd0) bg_button_pane_cp044

0x5d8d,	// (0x0001c59e) btmg_button_pane_t1

0x2dec,	// (0x000195fd) aid_listscroll_gen

0x042f,	// (0x00016c40) main_cntbar_detail_pane

0x56f4,	// (0x0001bf05) list_cmail_folder_pane

0x5704,	// (0x0001bf15) sp_fs_scroll_pane_cp03_ParamLimits

0xe489,	// (0x00024c9a) list_single_fs_dyc_pane_cp01_ParamLimits

0xe489,	// (0x00024c9a) list_single_fs_dyc_pane_cp01

0x5d9b,	// (0x0001c5ac) aid_size_cmail_indent

0x5da4,	// (0x0001c5b5) list_single_dyc_row_pane_cp01

0xe98c,	// (0x0002519d) cntbar_detail_list_pane_ParamLimits

0xe98c,	// (0x0002519d) cntbar_detail_list_pane

0xe9c6,	// (0x000251d7) main_cntbar_detail_cont_pane_ParamLimits

0xe9c6,	// (0x000251d7) main_cntbar_detail_cont_pane

0x9f92,	// (0x000207a3) scroll_pane_cp032_ParamLimits

0x9f92,	// (0x000207a3) scroll_pane_cp032

0xe9d2,	// (0x000251e3) cntbar_detail_list_event_pane_ParamLimits

0xe9d2,	// (0x000251e3) cntbar_detail_list_event_pane

0xe998,	// (0x000251a9) cntbar_detail_list_shct_pane

0x115c,	// (0x0001796d) aid_list_gen

0x5dad,	// (0x0001c5be) aid_scroll

0x5db6,	// (0x0001c5c7) aid_size_touch_scroll_bar

0x5ad6,	// (0x0001c2e7) aid_list_double

0x5dbf,	// (0x0001c5d0) aid_list_single

0xe9e6,	// (0x000251f7) aid_list_single_lg

0x5dc8,	// (0x0001c5d9) aid_list_z_g_a_sm

0x5dd0,	// (0x0001c5e1) aid_list_z_g_d

0x5dd8,	// (0x0001c5e9) aid_txt_z_prm

0xe9ef,	// (0x00025200) aid_txt_z_prm_cp01

0xe9fd,	// (0x0002520e) aid_txt_z_sec

0xea0b,	// (0x0002521c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea0b,	// (0x0002521c) main_cntbar_detail_cont_pane_g1

0xea18,	// (0x00025229) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea18,	// (0x00025229) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0002669f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0002669f) main_cntbar_detail_cont_pane_g

0x5de6,	// (0x0001c5f7) main_cntbar_detail_cont_pane_t1

0x5df4,	// (0x0001c605) main_cntbar_detail_cont_pane_t2

0x5e02,	// (0x0001c613) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x000266a4) main_cntbar_detail_cont_pane_t

0xea24,	// (0x00025235) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea24,	// (0x00025235) cell_cntbar_detail_list_shct_pane

0x5e10,	// (0x0001c621) cntbar_detail_list_shct_pane_g1

0x5e19,	// (0x0001c62a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x000266ab) cntbar_detail_list_shct_pane_g

0xea38,	// (0x00025249) cntbar_detail_list_event_pane_g1_ParamLimits

0xea38,	// (0x00025249) cntbar_detail_list_event_pane_g1

0xea44,	// (0x00025255) cntbar_detail_list_event_pane_g2_ParamLimits

0xea44,	// (0x00025255) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x000266b0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x000266b0) cntbar_detail_list_event_pane_g

0xeab0,	// (0x000252c1) cntbar_detail_list_event_pane_t1_ParamLimits

0xeab0,	// (0x000252c1) cntbar_detail_list_event_pane_t1

0xeac5,	// (0x000252d6) cntbar_detail_list_event_pane_t2_ParamLimits

0xeac5,	// (0x000252d6) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x000266bd) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x000266bd) cntbar_detail_list_event_pane_t

0x32fa,	// (0x00019b0b) cell_cntbar_detail_list_shct_pane_g1

0xa31f,	// (0x00020b30) navi_pane_mv_g3

0x042f,	// (0x00016c40) main_cntbar_detail_pane_ParamLimits

0x03bf,	// (0x00016bd0) main_notif_wgt_pane

0x77d3,	// (0x0001dfe4) aid_tch_main_mp4_pane_g4

0x7a08,	// (0x0001e219) popup_slider_window_cp02

0x5b1c,	// (0x0001c32d) list_recal_day_event_pane

0xe96c,	// (0x0002517d) cntbar_detail_btn_pane_ParamLimits

0xe96c,	// (0x0002517d) cntbar_detail_btn_pane

0xe97c,	// (0x0002518d) cntbar_detail_btn_pane_cp01_ParamLimits

0xe97c,	// (0x0002518d) cntbar_detail_btn_pane_cp01

0xe998,	// (0x000251a9) cntbar_detail_list_shct_pane_ParamLimits

0xe9a4,	// (0x000251b5) cntbar_detail_pane_g1_ParamLimits

0xe9a4,	// (0x000251b5) cntbar_detail_pane_g1

0xe9b0,	// (0x000251c1) cntbar_detail_pane_t1_ParamLimits

0xe9b0,	// (0x000251c1) cntbar_detail_pane_t1

0xea50,	// (0x00025261) cntbar_detail_list_event_pane_g3_ParamLimits

0xea50,	// (0x00025261) cntbar_detail_list_event_pane_g3

0xea68,	// (0x00025279) cntbar_detail_list_event_pane_g4_ParamLimits

0xea68,	// (0x00025279) cntbar_detail_list_event_pane_g4

0xea80,	// (0x00025291) cntbar_detail_list_event_pane_g5_ParamLimits

0xea80,	// (0x00025291) cntbar_detail_list_event_pane_g5

0xea98,	// (0x000252a9) cntbar_detail_list_event_pane_g6_ParamLimits

0xea98,	// (0x000252a9) cntbar_detail_list_event_pane_g6

0xeada,	// (0x000252eb) cntbar_detail_list_event_pane_t3_ParamLimits

0xeada,	// (0x000252eb) cntbar_detail_list_event_pane_t3

0xeaec,	// (0x000252fd) popup_notif_wgt_window_ParamLimits

0xeaec,	// (0x000252fd) popup_notif_wgt_window

0xeafc,	// (0x0002530d) popup_submenu_window_cp01_ParamLimits

0xeafc,	// (0x0002530d) popup_submenu_window_cp01

0x1937,	// (0x00018148) bg_popup_window_pane_cp10

0x5e22,	// (0x0001c633) listscroll_notif_wgt_pane

0x5e2c,	// (0x0001c63d) list_notif_wgt_window

0x5e35,	// (0x0001c646) scroll_pane_cp033

0x5e3e,	// (0x0001c64f) list_notif_wgt_row_pane_ParamLimits

0x5e3e,	// (0x0001c64f) list_notif_wgt_row_pane

0x5e50,	// (0x0001c661) aid_size_list_notif_wgt_del

0x5e59,	// (0x0001c66a) list_notif_wgt_row_pane_g1

0x5e61,	// (0x0001c672) list_notif_wgt_row_pane_g2

0x5e69,	// (0x0001c67a) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x000266c4) list_notif_wgt_row_pane_g

0x5e72,	// (0x0001c683) list_notif_wgt_row_pane_t1

0x5e80,	// (0x0001c691) list_notif_wgt_row_pane_t2

0x5e8e,	// (0x0001c69f) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x000266cb) list_notif_wgt_row_pane_t

0x43a7,	// (0x0001abb8) list_recal_day_event_pane_g1

0x5e9c,	// (0x0001c6ad) list_recal_day_event_pane_t1

0x03bf,	// (0x00016bd0) bg_button_pane_cp045

0x5eab,	// (0x0001c6bc) cntbar_detail_btn_pane_t1

0x2df4,	// (0x00019605) main_callh_pane_ParamLimits

0x2df4,	// (0x00019605) main_callh_pane

0x03bf,	// (0x00016bd0) main_coverflow0_pane

0x03bf,	// (0x00016bd0) main_wgtman_pane

0xdcf7,	// (0x00024508) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdcf7,	// (0x00024508) main_fs_bigclock_unlock_btn_pane

0x56ce,	// (0x0001bedf) bg_button_pane_cp16

0x56de,	// (0x0001beef) cell_tport_appsw_pane_g3

0xeb0a,	// (0x0002531b) cf0_flow_pane_ParamLimits

0xeb0a,	// (0x0002531b) cf0_flow_pane

0x5eb9,	// (0x0001c6ca) listscroll_cf0_pane

0x5ec2,	// (0x0001c6d3) main_cf0_pane_g1

0xeb19,	// (0x0002532a) main_cf0_pane_t1_ParamLimits

0xeb19,	// (0x0002532a) main_cf0_pane_t1

0xeb2d,	// (0x0002533e) main_cf0_pane_t2_ParamLimits

0xeb2d,	// (0x0002533e) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x000266d2) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x000266d2) main_cf0_pane_t

0x5ecc,	// (0x0001c6dd) scroll_pane_cp11

0xeb41,	// (0x00025352) cf0_flow_pane_g1

0xeb49,	// (0x0002535a) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x000266d7) cf0_flow_pane_g

0xeb51,	// (0x00025362) cf0_flow_pane_t1

0x03bf,	// (0x00016bd0) main_call6_pane

0x03bf,	// (0x00016bd0) main_calllock_pane

0xeb5f,	// (0x00025370) call6_btn_grp_pane_ParamLimits

0xeb5f,	// (0x00025370) call6_btn_grp_pane

0xeb6e,	// (0x0002537f) call6_pane_g1_ParamLimits

0xeb6e,	// (0x0002537f) call6_pane_g1

0xeb7d,	// (0x0002538e) popup_call6_1st_window_ParamLimits

0xeb7d,	// (0x0002538e) popup_call6_1st_window

0xeb8b,	// (0x0002539c) popup_call6_2nd_window_ParamLimits

0xeb8b,	// (0x0002539c) popup_call6_2nd_window

0xeb99,	// (0x000253aa) cell_call6_btn_pane_ParamLimits

0xeb99,	// (0x000253aa) cell_call6_btn_pane

0x1937,	// (0x00018148) bg_popup_call2_in_pane_cp03

0x5ed7,	// (0x0001c6e8) popup_call6_1st_window_g1

0x5edf,	// (0x0001c6f0) popup_call6_1st_window_g2

0x5ee7,	// (0x0001c6f8) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x000266dc) popup_call6_1st_window_g

0x5eef,	// (0x0001c700) popup_call6_1st_window_t1

0x5efe,	// (0x0001c70f) popup_call6_1st_window_t2

0x5f0e,	// (0x0001c71f) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x000266e3) popup_call6_1st_window_t

0x1937,	// (0x00018148) bg_popup_call2_in_pane_cp04

0x5ed7,	// (0x0001c6e8) popup_call6_2nd_window_g1

0x5edf,	// (0x0001c6f0) popup_call6_2nd_window_g2

0x5ee7,	// (0x0001c6f8) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x000266dc) popup_call6_2nd_window_g

0x5eef,	// (0x0001c700) popup_call6_2nd_window_t1

0x03bf,	// (0x00016bd0) bg_button_pane_cp15

0x5f1e,	// (0x0001c72f) cell_call6_btn_pane_g1

0x5f27,	// (0x0001c738) cell_call6_btn_pane_t1

0xeba8,	// (0x000253b9) listscroll_wgtman_pane_ParamLimits

0xeba8,	// (0x000253b9) listscroll_wgtman_pane

0xebc6,	// (0x000253d7) wgtman_btn_pane_ParamLimits

0xebc6,	// (0x000253d7) wgtman_btn_pane

0x17ee,	// (0x00017fff) aid_scroll_copy1

0x5f36,	// (0x0001c747) list_wgtman_pane

0xebfb,	// (0x0002540c) wgtman_btn_pane_g1_ParamLimits

0xebfb,	// (0x0002540c) wgtman_btn_pane_g1

0xec23,	// (0x00025434) wgtman_btn_pane_t1_ParamLimits

0xec23,	// (0x00025434) wgtman_btn_pane_t1

0x5f40,	// (0x0001c751) wgtman_btn_pane_t2_ParamLimits

0x5f40,	// (0x0001c751) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x000266ea) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x000266ea) wgtman_btn_pane_t

0xec5a,	// (0x0002546b) listrow_wgtman_pane_ParamLimits

0xec5a,	// (0x0002546b) listrow_wgtman_pane

0xec75,	// (0x00025486) listrow_wgtman_pane_g1

0xec7e,	// (0x0002548f) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x000266ef) listrow_wgtman_pane_g

0xec88,	// (0x00025499) listrow_wgtman_pane_t1

0xec96,	// (0x000254a7) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x000266f4) listrow_wgtman_pane_t

0xeca4,	// (0x000254b5) wait_bar_pane_cp09

0x5f57,	// (0x0001c768) main_calllock_btn_pane

0x5f61,	// (0x0001c772) main_calllock_pane_g1

0x03bf,	// (0x00016bd0) bg_button_pane_cp17

0x5f6d,	// (0x0001c77e) main_calllock_btn_pane_g1

0x5f76,	// (0x0001c787) main_calllock_btn_pane_t1

0x03bf,	// (0x00016bd0) main_dialer3_pane

0x03bf,	// (0x00016bd0) main_fmrd2_pane

0x32fa,	// (0x00019b0b) main_fs_bigclock_unlock_btn_pane_g1

0x5f8d,	// (0x0001c79e) main_fs_bigclock_unlock_btn_pane_t1

0xecac,	// (0x000254bd) area_fmrd2_info_pane_ParamLimits

0xecac,	// (0x000254bd) area_fmrd2_info_pane

0xecba,	// (0x000254cb) area_fmrd2_visual_pane_ParamLimits

0xecba,	// (0x000254cb) area_fmrd2_visual_pane

0xecc8,	// (0x000254d9) fmrd2_indi_pane_ParamLimits

0xecc8,	// (0x000254d9) fmrd2_indi_pane

0xecd5,	// (0x000254e6) area_fmrd2_visual_pane_g1

0xecdd,	// (0x000254ee) area_fmrd2_visual_pane_t1

0xeced,	// (0x000254fe) area_fmrd2_visual_pane_t2

0xecfd,	// (0x0002550e) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x000266fe) area_fmrd2_visual_pane_t

0xed0d,	// (0x0002551e) area_fmrd2_info_pane_g1

0xed15,	// (0x00025526) area_fmrd2_info_pane_t1

0xed25,	// (0x00025536) area_fmrd2_info_pane_t2

0xed35,	// (0x00025546) area_fmrd2_info_pane_t3

0xed45,	// (0x00025556) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00026705) area_fmrd2_info_pane_t

0xed53,	// (0x00025564) fmrd2_indi_pane_t1

0xed63,	// (0x00025574) fmrd2_indi_pane_t2

0xed73,	// (0x00025584) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0002670e) fmrd2_indi_pane_t

0x517f,	// (0x0001b990) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x517f,	// (0x0001b990) list_single_fs_bigclock_indicator_pane_g5

0x5223,	// (0x0001ba34) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5223,	// (0x0001ba34) list_single_fs_bigclock_indicator_pane_t5

0xe5c3,	// (0x00024dd4) aid_cell_bcale_month_pane_ParamLimits

0xe5c3,	// (0x00024dd4) aid_cell_bcale_month_pane

0xe5cf,	// (0x00024de0) bcale_month_pane_ParamLimits

0xe5cf,	// (0x00024de0) bcale_month_pane

0xe5dd,	// (0x00024dee) bcale_preview_pane_ParamLimits

0xe5dd,	// (0x00024dee) bcale_preview_pane

0x5d20,	// (0x0001c531) list_single_fs_bigclock_pane_t1_ParamLimits

0x5d3a,	// (0x0001c54b) list_single_fs_bigclock_pane_t2_ParamLimits

0x5d3a,	// (0x0001c54b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00026695) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00026695) list_single_fs_bigclock_pane_t

0x5f85,	// (0x0001c796) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x000266f9) main_fs_bigclock_unlock_btn_pane_g

0xed81,	// (0x00025592) aid_dia3_key_size_ParamLimits

0xed81,	// (0x00025592) aid_dia3_key_size

0xed8d,	// (0x0002559e) aid_dia3_listrow_size_ParamLimits

0xed8d,	// (0x0002559e) aid_dia3_listrow_size

0xed9d,	// (0x000255ae) dia3_keypad_fun_pane_ParamLimits

0xed9d,	// (0x000255ae) dia3_keypad_fun_pane

0xedaf,	// (0x000255c0) dia3_keypad_num_pane_ParamLimits

0xedaf,	// (0x000255c0) dia3_keypad_num_pane

0xedc1,	// (0x000255d2) dia3_listscroll_pane_ParamLimits

0xedc1,	// (0x000255d2) dia3_listscroll_pane

0xedcf,	// (0x000255e0) dia3_numentry_pane_ParamLimits

0xedcf,	// (0x000255e0) dia3_numentry_pane

0x5f9b,	// (0x0001c7ac) dia3_list_pane

0x5fa6,	// (0x0001c7b7) scroll_pane_cp12

0x03bf,	// (0x00016bd0) bg_dia3_numentry_pane

0xeddd,	// (0x000255ee) dia3_numentry_pane_t1

0xedec,	// (0x000255fd) cell_dia3_key_num_pane

0xedf4,	// (0x00025605) cell_dia3_key0_fun_pane_ParamLimits

0xedf4,	// (0x00025605) cell_dia3_key0_fun_pane

0xee01,	// (0x00025612) cell_dia3_key1_fun_pane_ParamLimits

0xee01,	// (0x00025612) cell_dia3_key1_fun_pane

0xee0e,	// (0x0002561f) dia3_listrow_pane

0x4e77,	// (0x0001b688) bg_dia3_numentry_pane_g1

0x03bf,	// (0x00016bd0) bg_button_pane_cp21

0x5fb1,	// (0x0001c7c2) cell_dia3_key_num_pane_t1

0x5fbf,	// (0x0001c7d0) cell_dia3_key_num_pane_t2

0x5fce,	// (0x0001c7df) cell_dia3_key_num_pane_t3

0x5fdd,	// (0x0001c7ee) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00026715) cell_dia3_key_num_pane_t

0x03bf,	// (0x00016bd0) bg_button_pane_cp19

0xee1b,	// (0x0002562c) cell_dia3_key0_fun_pane_g1

0x03bf,	// (0x00016bd0) bg_button_pane_cp20

0xee23,	// (0x00025634) cell_dia3_key1_fun_pane_g1

0xee2b,	// (0x0002563c) area_left_week_number_pane

0xee34,	// (0x00025645) area_top_day_name_pane

0xee3d,	// (0x0002564e) frame_month_view_pane

0xee47,	// (0x00025658) grid_month_view_pane

0xee51,	// (0x00025662) cell_top_day_name_pane_ParamLimits

0xee51,	// (0x00025662) cell_top_day_name_pane

0xee6b,	// (0x0002567c) cell_area_left_week_number_pane_ParamLimits

0xee6b,	// (0x0002567c) cell_area_left_week_number_pane

0xee7f,	// (0x00025690) cell_month_view_pane_ParamLimits

0xee7f,	// (0x00025690) cell_month_view_pane

0x5fec,	// (0x0001c7fd) frm_month_g1

0xee9c,	// (0x000256ad) frm_month_g2

0xeea6,	// (0x000256b7) frm_month_g3

0xeeb0,	// (0x000256c1) frm_month_g4

0xeeba,	// (0x000256cb) frm_month_g5

0xeec4,	// (0x000256d5) frm_month_g6

0xeece,	// (0x000256df) frm_month_g7

0x5ff5,	// (0x0001c806) frm_month_g8

0xeed8,	// (0x000256e9) frm_month_g9

0xeee1,	// (0x000256f2) frm_month_g10

0xeeea,	// (0x000256fb) frm_month_g11

0xeef3,	// (0x00025704) frm_month_g12

0xeefc,	// (0x0002570d) frm_month_g13

0xef05,	// (0x00025716) frm_month_g14

0xef0e,	// (0x0002571f) frm_month_g15

0xef19,	// (0x0002572a) frm_month_g16

0x000f,

0xff0d,	// (0x0002671e) frm_month_g

0xef24,	// (0x00025735) cell_top_day_name_pane_t1

0xef33,	// (0x00025744) cell_area_left_week_number_pane_g1

0xef24,	// (0x00025735) cell_area_left_week_number_pane_t1

0x32fa,	// (0x00019b0b) cell_month_view_pane_g1

0xef3b,	// (0x0002574c) cell_month_view_pane_t1

0x03bf,	// (0x00016bd0) main_fps_pane

0x5454,	// (0x0001bc65) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5454,	// (0x0001bc65) cmail_ddmenu_btn02_pane_cp1

0x5470,	// (0x0001bc81) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5470,	// (0x0001bc81) cmail_ddmenu_btn02_pane_cp2

0xe86b,	// (0x0002507c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe86b,	// (0x0002507c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00026646) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00026646) cmail_ddmenu_btn02_pane_g

0xe889,	// (0x0002509a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe889,	// (0x0002509a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0002664b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0002664b) cmail_ddmenu_btn02_pane_t

0xef4a,	// (0x0002575b) fps_text_pane_ParamLimits

0xef4a,	// (0x0002575b) fps_text_pane

0xef57,	// (0x00025768) main_fps_pane_g1_ParamLimits

0xef57,	// (0x00025768) main_fps_pane_g1

0xef65,	// (0x00025776) wait_bar_pane_cp010_ParamLimits

0xef65,	// (0x00025776) wait_bar_pane_cp010

0xef71,	// (0x00025782) fps_text_pane_t1_ParamLimits

0xef71,	// (0x00025782) fps_text_pane_t1

0xc615,	// (0x00022e26) cam4_image_uncrop_pane_g1

0xc61e,	// (0x00022e2f) cam4_image_uncrop_pane_g2

0xc627,	// (0x00022e38) cam4_image_uncrop_pane_g3

0xc630,	// (0x00022e41) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0002611e) cam4_image_uncrop_pane_g

0xee0e,	// (0x0002561f) dia3_listrow_pane_ParamLimits

0x03bf,	// (0x00016bd0) main_phob2_pane

0xe3fe,	// (0x00024c0f) cell_tport_appsw_pane_cp02_ParamLimits

0xe3fe,	// (0x00024c0f) cell_tport_appsw_pane_cp02

0xe40d,	// (0x00024c1e) cell_tport_appsw_pane_cp03_ParamLimits

0xe40d,	// (0x00024c1e) cell_tport_appsw_pane_cp03

0x03bf,	// (0x00016bd0) phob2_contact_card_pane

0x03bf,	// (0x00016bd0) phob2_listscroll_pane

0x5ffe,	// (0x0001c80f) phob2_list_pane

0x6006,	// (0x0001c817) scroll_pane_cp034

0xef8a,	// (0x0002579b) phob2_cc_data_pane_ParamLimits

0xef8a,	// (0x0002579b) phob2_cc_data_pane

0xefa4,	// (0x000257b5) phob2_cc_listscroll_pane_ParamLimits

0xefa4,	// (0x000257b5) phob2_cc_listscroll_pane

0xefbe,	// (0x000257cf) list_double_large_graphic_phob2_pane_ParamLimits

0xefbe,	// (0x000257cf) list_double_large_graphic_phob2_pane

0x600e,	// (0x0001c81f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x600e,	// (0x0001c81f) list_double_large_graphic_phob2_pane_g1

0x601b,	// (0x0001c82c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x601b,	// (0x0001c82c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0002673f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0002673f) list_double_large_graphic_phob2_pane_g

0x6027,	// (0x0001c838) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6027,	// (0x0001c838) list_double_large_graphic_phob2_pane_t1

0x603c,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x603c,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00026744) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00026744) list_double_large_graphic_phob2_pane_t

0x03bf,	// (0x00016bd0) list_highlight_pane_cp024

0x604e,	// (0x0001c85f) phob2_cc_button_pane

0xefdc,	// (0x000257ed) phob2_cc_data_pane_g1_ParamLimits

0xefdc,	// (0x000257ed) phob2_cc_data_pane_g1

0xefe8,	// (0x000257f9) phob2_cc_data_pane_g2_ParamLimits

0xefe8,	// (0x000257f9) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00026749) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00026749) phob2_cc_data_pane_g

0xeff4,	// (0x00025805) phob2_cc_data_pane_t1_ParamLimits

0xeff4,	// (0x00025805) phob2_cc_data_pane_t1

0xf006,	// (0x00025817) phob2_cc_data_pane_t2_ParamLimits

0xf006,	// (0x00025817) phob2_cc_data_pane_t2

0xf018,	// (0x00025829) phob2_cc_data_pane_t3_ParamLimits

0xf018,	// (0x00025829) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0002674e) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0002674e) phob2_cc_data_pane_t

0x6056,	// (0x0001c867) phob2_cc_list_pane_ParamLimits

0x6056,	// (0x0001c867) phob2_cc_list_pane

0x4452,	// (0x0001ac63) scroll_pane_cp035_ParamLimits

0x4452,	// (0x0001ac63) scroll_pane_cp035

0x042f,	// (0x00016c40) bg_button_pane_cp033

0x6062,	// (0x0001c873) phob2_cc_button_pane_g1

0x606e,	// (0x0001c87f) phob2_cc_button_pane_t1

0x6083,	// (0x0001c894) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00026755) phob2_cc_button_pane_t

0xf02a,	// (0x0002583b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf02a,	// (0x0002583b) list_double_large_graphic_phob2_cc_pane

0xf051,	// (0x00025862) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf051,	// (0x00025862) list_double_large_graphic_phob2_cc_pane_g1

0xf062,	// (0x00025873) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf062,	// (0x00025873) list_double_large_graphic_phob2_cc_pane_g2

0xf06e,	// (0x0002587f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf06e,	// (0x0002587f) list_double_large_graphic_phob2_cc_pane_g3

0xf07a,	// (0x0002588b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf07a,	// (0x0002588b) list_double_large_graphic_phob2_cc_pane_g4

0xf086,	// (0x00025897) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf086,	// (0x00025897) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0002675a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0002675a) list_double_large_graphic_phob2_cc_pane_g

0xf092,	// (0x000258a3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf092,	// (0x000258a3) list_double_large_graphic_phob2_cc_pane_t1

0xf0bb,	// (0x000258cc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf0bb,	// (0x000258cc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00026765) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00026765) list_double_large_graphic_phob2_cc_pane_t

0x6095,	// (0x0001c8a6) list_highlight_pane_cp025_ParamLimits

0x6095,	// (0x0001c8a6) list_highlight_pane_cp025

0x042f,	// (0x00016c40) bg_button_pane_cp033_ParamLimits

0x6062,	// (0x0001c873) phob2_cc_button_pane_g1_ParamLimits

0x606e,	// (0x0001c87f) phob2_cc_button_pane_t1_ParamLimits

0x6083,	// (0x0001c894) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00026755) phob2_cc_button_pane_t_ParamLimits

0x8614,	// (0x0001ee25) popup_wgtman_window

0x41d4,	// (0x0001a9e5) scroll_pane_cp038

0xebe3,	// (0x000253f4) wgtman_btn_pane_cp_01_ParamLimits

0xebe3,	// (0x000253f4) wgtman_btn_pane_cp_01

0x60a3,	// (0x0001c8b4) wgtman_content_pane

0x60ac,	// (0x0001c8bd) wgtman_heading_pane

0x03bf,	// (0x00016bd0) bg_heading_pane_cp02

0x60c7,	// (0x0001c8d8) wgtman_heading_pane_g1

0x60cf,	// (0x0001c8e0) wgtman_heading_pane_t1

0x60dd,	// (0x0001c8ee) scroll_pane_cp036

0x60e5,	// (0x0001c8f6) wgtman_list_pane

0x60ed,	// (0x0001c8fe) wgtman_list_pane_t1_ParamLimits

0x60ed,	// (0x0001c8fe) wgtman_list_pane_t1

0x7bee,	// (0x0001e3ff) cam4_grid_pane

0xcd67,	// (0x00023578) bg_button_pane_cp015_ParamLimits

0xcd79,	// (0x0002358a) bg_button_pane_cp016_ParamLimits

0xcd8c,	// (0x0002359d) bg_button_pane_cp017_ParamLimits

0xcde2,	// (0x000235f3) popup_vitu2_query_window_g3_ParamLimits

0xcde2,	// (0x000235f3) popup_vitu2_query_window_g3

0xce9d,	// (0x000236ae) popup_vitu2_query_window_t6_ParamLimits

0xce9d,	// (0x000236ae) popup_vitu2_query_window_t6

0xcec8,	// (0x000236d9) popup_vitu2_query_window_t7_ParamLimits

0xcec8,	// (0x000236d9) popup_vitu2_query_window_t7

0x60b5,	// (0x0001c8c6) cam4_grid_pane_g1

0x60be,	// (0x0001c8cf) cam4_grid_pane_g2

0x6107,	// (0x0001c918) cam4_grid_pane_g3

0x6110,	// (0x0001c921) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0002676a) cam4_grid_pane_g

0x9070,	// (0x0001f881) aid_placing_vt_slider_lsc_ParamLimits

0x93bc,	// (0x0001fbcd) vidtel_button_pane_ParamLimits

0x93bc,	// (0x0001fbcd) vidtel_button_pane

0x03bf,	// (0x00016bd0) bg_button_pane_cp034

0xf0e4,	// (0x000258f5) vidtel_button_pane_g1

0x611b,	// (0x0001c92c) vidtel_button_pane_t1

0x4335,	// (0x0001ab46) aid_size_vtel_slider_touch

0x4452,	// (0x0001ac63) scroll_pane_cp039

0x4eb5,	// (0x0001b6c6) ncim_query_button_pane_cp01_ParamLimits

0x4ed4,	// (0x0001b6e5) ncimui_query_pane_g1_ParamLimits

0x042f,	// (0x00016c40) input_focus_pane_cp012_ParamLimits

0x4ef9,	// (0x0001b70a) ncim_query_entry_pane_t1_ParamLimits

0x4452,	// (0x0001ac63) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal

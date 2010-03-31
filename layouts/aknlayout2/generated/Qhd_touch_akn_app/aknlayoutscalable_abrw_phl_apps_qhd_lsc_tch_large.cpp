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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000a3f1e };

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
0x029f,	// (0x000a41bd) Screen

0x02ab,	// (0x000a41c9) application_window

0x030b,	// (0x000a4229) area_bottom_pane_ParamLimits

0x030b,	// (0x000a4229) area_bottom_pane

0x0344,	// (0x000a4262) area_top_pane_ParamLimits

0x0344,	// (0x000a4262) area_top_pane

0x95c7,	// (0x000ad4e5) call_video_uplink_pane_ParamLimits

0x95c7,	// (0x000ad4e5) call_video_uplink_pane

0x03d2,	// (0x000a42f0) main_pane_ParamLimits

0x03d2,	// (0x000a42f0) main_pane

0xc744,	// (0x000b0662) context_pane

0x3a4f,	// (0x000a796d) navi_pane

0x3a81,	// (0x000a799f) popup_cale_events_window_ParamLimits

0x3a81,	// (0x000a799f) popup_cale_events_window

0xc757,	// (0x000b0675) popup_mup_playback_window

0x3a99,	// (0x000a79b7) signal_pane

0x9aea,	// (0x000ada08) main_browser_pane

0xadfd,	// (0x000aed1b) main_burst_pane

0x379d,	// (0x000a76bb) main_calc_pane

0xc72a,	// (0x000b0648) main_cale_day_pane

0x37b1,	// (0x000a76cf) main_cale_month_pane

0xc72a,	// (0x000b0648) main_cale_week_pane

0xadfd,	// (0x000aed1b) main_call_pane

0x97a8,	// (0x000ad6c6) main_call_poc_pane

0xadfd,	// (0x000aed1b) main_camera_pane

0xadfd,	// (0x000aed1b) main_chi_dic_pane

0xab7a,	// (0x000aea98) main_clock_pane

0x97a8,	// (0x000ad6c6) main_fmradio_pane

0xadfd,	// (0x000aed1b) main_graph_messa_pane

0x97a8,	// (0x000ad6c6) main_help_pane

0x9aea,	// (0x000ada08) main_im_pane

0x9a03,	// (0x000ad921) main_image_pane_ParamLimits

0x9a03,	// (0x000ad921) main_image_pane

0x97a8,	// (0x000ad6c6) main_location2_pane

0xadfd,	// (0x000aed1b) main_location_pane

0x9a03,	// (0x000ad921) main_messa_pane

0x97a8,	// (0x000ad6c6) main_mp2_pane

0xadfd,	// (0x000aed1b) main_mp_pane

0x97a8,	// (0x000ad6c6) main_msg_pane

0x97a8,	// (0x000ad6c6) main_mup_eq_pane

0x97a8,	// (0x000ad6c6) main_mup_pane

0x9aea,	// (0x000ada08) main_notes_pane

0x97a8,	// (0x000ad6c6) main_pec_pane

0x97a8,	// (0x000ad6c6) main_phob_pane

0x97a8,	// (0x000ad6c6) main_pinb_pane

0x97a8,	// (0x000ad6c6) main_postcard_pane

0x97a8,	// (0x000ad6c6) main_qdial_pane

0xadfd,	// (0x000aed1b) main_skin_pane

0x97a8,	// (0x000ad6c6) main_smil2_pane

0xadfd,	// (0x000aed1b) main_smil_pane

0xadfd,	// (0x000aed1b) main_video_pane

0xadfd,	// (0x000aed1b) main_video_tele_pane

0x9a03,	// (0x000ad921) main_viewer_pane_ParamLimits

0x9a03,	// (0x000ad921) main_viewer_pane

0xadfd,	// (0x000aed1b) main_vorec_pane

0x3803,	// (0x000a7721) popup_blid_sat_info_window_ParamLimits

0x3803,	// (0x000a7721) popup_blid_sat_info_window

0x385b,	// (0x000a7779) popup_dyc_status_message_window_ParamLimits

0x385b,	// (0x000a7779) popup_dyc_status_message_window

0x3875,	// (0x000a7793) popup_grid_large_graphic_window_ParamLimits

0x3875,	// (0x000a7793) popup_grid_large_graphic_window

0x3931,	// (0x000a784f) popup_loc_request_window_ParamLimits

0x3931,	// (0x000a784f) popup_loc_request_window

0x3a27,	// (0x000a7945) popup_wml_address_window_ParamLimits

0x3a27,	// (0x000a7945) popup_wml_address_window

0x35d7,	// (0x000a74f5) call_muted_g1

0x328c,	// (0x000a71aa) popup_call_audio_conf_window_ParamLimits

0x328c,	// (0x000a71aa) popup_call_audio_conf_window

0x35eb,	// (0x000a7509) popup_call_audio_first_window_ParamLimits

0x35eb,	// (0x000a7509) popup_call_audio_first_window

0x3661,	// (0x000a757f) popup_call_audio_in_window_ParamLimits

0x3661,	// (0x000a757f) popup_call_audio_in_window

0x369d,	// (0x000a75bb) popup_call_audio_out_window_ParamLimits

0x369d,	// (0x000a75bb) popup_call_audio_out_window

0x36d7,	// (0x000a75f5) popup_call_audio_second_window_ParamLimits

0x36d7,	// (0x000a75f5) popup_call_audio_second_window

0x372d,	// (0x000a764b) popup_call_audio_wait_window_ParamLimits

0x372d,	// (0x000a764b) popup_call_audio_wait_window

0x3762,	// (0x000a7680) popup_number_entry_window_ParamLimits

0x3762,	// (0x000a7680) popup_number_entry_window

0xe339,	// (0x000b2257) bg_popup_call_pane_cp05_ParamLimits

0xe339,	// (0x000b2257) bg_popup_call_pane_cp05

0xe359,	// (0x000b2277) popup_number_entry_window_t1

0xe36c,	// (0x000b228a) popup_number_entry_window_t2

0xe37e,	// (0x000b229c) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x000b2feb) popup_number_entry_window_t

0xe390,	// (0x000b22ae) text_title_cp2

0xe3a3,	// (0x000b22c1) bg_popup_call_pane_cp_ParamLimits

0xe3a3,	// (0x000b22c1) bg_popup_call_pane_cp

0xe3b1,	// (0x000b22cf) call_thumbnail_pane

0xe3b9,	// (0x000b22d7) popup_call_audio_in_window_g1_ParamLimits

0xe3b9,	// (0x000b22d7) popup_call_audio_in_window_g1

0xe3c5,	// (0x000b22e3) popup_call_audio_in_window_g2_ParamLimits

0xe3c5,	// (0x000b22e3) popup_call_audio_in_window_g2

0xe3d1,	// (0x000b22ef) popup_call_audio_in_window_g3_ParamLimits

0xe3d1,	// (0x000b22ef) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x000b2ff4) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x000b2ff4) popup_call_audio_in_window_g

0xe3dd,	// (0x000b22fb) popup_call_audio_in_window_t1_ParamLimits

0xe3dd,	// (0x000b22fb) popup_call_audio_in_window_t1

0xe3f9,	// (0x000b2317) popup_call_audio_in_window_t2_ParamLimits

0xe3f9,	// (0x000b2317) popup_call_audio_in_window_t2

0xe415,	// (0x000b2333) popup_call_audio_in_window_t3_ParamLimits

0xe415,	// (0x000b2333) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x000b2ffb) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x000b2ffb) popup_call_audio_in_window_t

0xe3a3,	// (0x000b22c1) bg_popup_call_pane_cp01_ParamLimits

0xe3a3,	// (0x000b22c1) bg_popup_call_pane_cp01

0xe3b1,	// (0x000b22cf) call_thumbnail_pane_cp02

0xe428,	// (0x000b2346) call_type_pane_cp022

0xe430,	// (0x000b234e) popup_call_audio_out_window_g1_ParamLimits

0xe430,	// (0x000b234e) popup_call_audio_out_window_g1

0xe442,	// (0x000b2360) popup_call_audio_out_window_g2_ParamLimits

0xe442,	// (0x000b2360) popup_call_audio_out_window_g2

0xe44e,	// (0x000b236c) popup_call_audio_out_window_g3_ParamLimits

0xe44e,	// (0x000b236c) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x000b3002) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x000b3002) popup_call_audio_out_window_g

0xe460,	// (0x000b237e) popup_call_audio_out_window_t1_ParamLimits

0xe460,	// (0x000b237e) popup_call_audio_out_window_t1

0xe478,	// (0x000b2396) popup_call_audio_out_window_t2_ParamLimits

0xe478,	// (0x000b2396) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x000b3009) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x000b3009) popup_call_audio_out_window_t

0xe48d,	// (0x000b23ab) bg_popup_call_pane_ParamLimits

0xe48d,	// (0x000b23ab) bg_popup_call_pane

0x058e,	// (0x000a44ac) call_thumbnail_pane_cp_ParamLimits

0x058e,	// (0x000a44ac) call_thumbnail_pane_cp

0xe511,	// (0x000b242f) call_type_pane_cp01_ParamLimits

0xe511,	// (0x000b242f) call_type_pane_cp01

0xe555,	// (0x000b2473) popup_call_audio_first_window_g1_ParamLimits

0xe555,	// (0x000b2473) popup_call_audio_first_window_g1

0x95fd,	// (0x000ad51b) popup_call_audio_first_window_g2_ParamLimits

0x95fd,	// (0x000ad51b) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x000b300e) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x000b300e) popup_call_audio_first_window_g

0x9641,	// (0x000ad55f) popup_call_audio_first_window_t1_ParamLimits

0x9641,	// (0x000ad55f) popup_call_audio_first_window_t1

0x96ed,	// (0x000ad60b) popup_call_audio_first_window_t4_ParamLimits

0x96ed,	// (0x000ad60b) popup_call_audio_first_window_t4

0x9779,	// (0x000ad697) popup_call_audio_first_window_t5_ParamLimits

0x9779,	// (0x000ad697) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x000b3013) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x000b3013) popup_call_audio_first_window_t

0x97a8,	// (0x000ad6c6) bg_popup_call_pane_cp02

0x97b2,	// (0x000ad6d0) call_type_pane_cp023

0x97ba,	// (0x000ad6d8) popup_call_audio_wait_window_g1

0x97c2,	// (0x000ad6e0) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000b301a) popup_call_audio_wait_window_g

0x97ca,	// (0x000ad6e8) popup_call_audio_wait_window_t3

0x97d8,	// (0x000ad6f6) bg_popup_call_pane_cp03_ParamLimits

0x97d8,	// (0x000ad6f6) bg_popup_call_pane_cp03

0x9838,	// (0x000ad756) call_thumbnail_pane_cp011_ParamLimits

0x9838,	// (0x000ad756) call_thumbnail_pane_cp011

0x9844,	// (0x000ad762) call_type_pane_cp034_ParamLimits

0x9844,	// (0x000ad762) call_type_pane_cp034

0x9880,	// (0x000ad79e) popup_call_audio_second_window_g1_ParamLimits

0x9880,	// (0x000ad79e) popup_call_audio_second_window_g1

0x98bc,	// (0x000ad7da) popup_call_audio_second_window_g2_ParamLimits

0x98bc,	// (0x000ad7da) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x000b301f) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x000b301f) popup_call_audio_second_window_g

0x98f8,	// (0x000ad816) popup_call_audio_second_window_t1_ParamLimits

0x98f8,	// (0x000ad816) popup_call_audio_second_window_t1

0x9979,	// (0x000ad897) popup_call_audio_second_window_t2_ParamLimits

0x9979,	// (0x000ad897) popup_call_audio_second_window_t2

0x99af,	// (0x000ad8cd) popup_call_audio_second_window_t3_ParamLimits

0x99af,	// (0x000ad8cd) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x000b3024) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x000b3024) popup_call_audio_second_window_t

0x97a8,	// (0x000ad6c6) bg_popup_call_pane_cp04

0x99e5,	// (0x000ad903) list_conf_pane

0x99ed,	// (0x000ad90b) popup_call_audio_conf_window_t1

0x99fb,	// (0x000ad919) call_thumbnail_pane_g1

0x9a03,	// (0x000ad921) bg_pinb_pane_ParamLimits

0x9a03,	// (0x000ad921) bg_pinb_pane

0x9a11,	// (0x000ad92f) find_pinb_pane

0x9a1a,	// (0x000ad938) listscroll_pinb_pane_ParamLimits

0x9a1a,	// (0x000ad938) listscroll_pinb_pane

0x9a29,	// (0x000ad947) pinb_bg_pane_g1

0x05b2,	// (0x000a44d0) pinb_bg_pane_g2

0x05be,	// (0x000a44dc) pinb_bg_pane_g3

0x05ca,	// (0x000a44e8) pinb_bg_pane_g4

0x05d6,	// (0x000a44f4) pinb_bg_pane_g5

0x05e2,	// (0x000a4500) pinb_bg_pane_g6

0x05ed,	// (0x000a450b) pinb_bg_pane_g7

0x05f8,	// (0x000a4516) pinb_bg_pane_g8

0x0603,	// (0x000a4521) pinb_bg_pane_g9

0x060d,	// (0x000a452b) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x000b302b) pinb_bg_pane_g

0x062a,	// (0x000a4548) grid_pinb_pane

0x0633,	// (0x000a4551) list_pinb_pane

0x063c,	// (0x000a455a) scroll_pane_cp01_ParamLimits

0x063c,	// (0x000a455a) scroll_pane_cp01

0x9a33,	// (0x000ad951) find_pinb_pane_g1_ParamLimits

0x9a33,	// (0x000ad951) find_pinb_pane_g1

0x9a4b,	// (0x000ad969) find_pinb_pane_t1

0x9a5d,	// (0x000ad97b) find_pinb_pane_t2

0x0001,

0xf127,	// (0x000b3045) find_pinb_pane_t

0x9a72,	// (0x000ad990) input_focus_pane_cp01_ParamLimits

0x9a72,	// (0x000ad990) input_focus_pane_cp01

0x064e,	// (0x000a456c) cell_pinb_pane_ParamLimits

0x064e,	// (0x000a456c) cell_pinb_pane

0x0677,	// (0x000a4595) cell_pinb_pane_g1_ParamLimits

0x0677,	// (0x000a4595) cell_pinb_pane_g1

0x0687,	// (0x000a45a5) cell_pinb_pane_g2_ParamLimits

0x0687,	// (0x000a45a5) cell_pinb_pane_g2

0x9a7e,	// (0x000ad99c) cell_pinb_pane_g3_ParamLimits

0x9a7e,	// (0x000ad99c) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x000b304a) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x000b304a) cell_pinb_pane_g

0x97a8,	// (0x000ad6c6) grid_highlight_pane_cp01

0x0693,	// (0x000a45b1) list_pinb_item_pane_ParamLimits

0x0693,	// (0x000a45b1) list_pinb_item_pane

0x97a8,	// (0x000ad6c6) list_highlight_pane_cp02

0x06a5,	// (0x000a45c3) list_pinb_item_pane_g1_ParamLimits

0x06a5,	// (0x000a45c3) list_pinb_item_pane_g1

0x06b2,	// (0x000a45d0) list_pinb_item_pane_g2_ParamLimits

0x06b2,	// (0x000a45d0) list_pinb_item_pane_g2

0x06be,	// (0x000a45dc) list_pinb_item_pane_g3_ParamLimits

0x06be,	// (0x000a45dc) list_pinb_item_pane_g3

0x06cf,	// (0x000a45ed) list_pinb_item_pane_g4_ParamLimits

0x06cf,	// (0x000a45ed) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x000b3051) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x000b3051) list_pinb_item_pane_g

0x06db,	// (0x000a45f9) list_pinb_item_pane_t1_ParamLimits

0x06db,	// (0x000a45f9) list_pinb_item_pane_t1

0x0710,	// (0x000a462e) calc_display_pane

0x0738,	// (0x000a4656) calc_paper_pane

0x075b,	// (0x000a4679) grid_calc_pane

0x97a8,	// (0x000ad6c6) bg_list_pane_cp01

0x0789,	// (0x000a46a7) clock_g1

0x0791,	// (0x000a46af) clock_g2

0x0001,

0xf13c,	// (0x000b305a) clock_g

0x0799,	// (0x000a46b7) clock_t1_ParamLimits

0x0799,	// (0x000a46b7) clock_t1

0x07ae,	// (0x000a46cc) clock_t2_ParamLimits

0x07ae,	// (0x000a46cc) clock_t2

0x07c0,	// (0x000a46de) clock_t3_ParamLimits

0x07c0,	// (0x000a46de) clock_t3

0x07d2,	// (0x000a46f0) clock_t4_ParamLimits

0x07d2,	// (0x000a46f0) clock_t4

0x07e4,	// (0x000a4702) clock_t5_ParamLimits

0x07e4,	// (0x000a4702) clock_t5

0x07f9,	// (0x000a4717) clock_t6_ParamLimits

0x07f9,	// (0x000a4717) clock_t6

0x080b,	// (0x000a4729) clock_t7_ParamLimits

0x080b,	// (0x000a4729) clock_t7

0x081d,	// (0x000a473b) clock_t8_ParamLimits

0x081d,	// (0x000a473b) clock_t8

0x0831,	// (0x000a474f) clock_t9_ParamLimits

0x0831,	// (0x000a474f) clock_t9

0x0008,

0xf141,	// (0x000b305f) clock_t_ParamLimits

0xf141,	// (0x000b305f) clock_t

0x9a92,	// (0x000ad9b0) popup_clock_analogue_window_cp02

0x9a92,	// (0x000ad9b0) popup_clock_digital_window_cp01

0x9a9a,	// (0x000ad9b8) listscroll_help_pane

0x97a8,	// (0x000ad6c6) phob_pre_status_pane

0x9aa4,	// (0x000ad9c2) grid_qdial_pane

0x9a03,	// (0x000ad921) listscroll_mce_pane

0x9a03,	// (0x000ad921) bg_notes_pane

0x9aae,	// (0x000ad9cc) list_notes_pane

0x0845,	// (0x000a4763) scroll_pane_cp06

0x9abc,	// (0x000ad9da) bg_calc_paper_pane

0x9ad0,	// (0x000ad9ee) list_calc_pane

0x9aea,	// (0x000ada08) bg_calc_display_pane

0x0859,	// (0x000a4777) calc_display_pane_t1

0x086b,	// (0x000a4789) calc_display_pane_t2

0x9af6,	// (0x000ada14) calc_display_pane_t3

0x0002,

0xf154,	// (0x000b3072) calc_display_pane_t

0x087d,	// (0x000a479b) cell_calc_pane_ParamLimits

0x087d,	// (0x000a479b) cell_calc_pane

0x9b08,	// (0x000ada26) bg_calc_paper_pane_g1

0x9b14,	// (0x000ada32) bg_calc_paper_pane_g2

0x9b20,	// (0x000ada3e) bg_calc_paper_pane_g3

0x9b2c,	// (0x000ada4a) bg_calc_paper_pane_g4

0x9b38,	// (0x000ada56) bg_calc_paper_pane_g5

0x08b2,	// (0x000a47d0) bg_calc_paper_pane_g6

0x08c1,	// (0x000a47df) bg_calc_paper_pane_g7

0x08d0,	// (0x000a47ee) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x000b3079) bg_calc_paper_pane_g

0x08e3,	// (0x000a4801) calc_bg_paper_pane_g9

0x08f6,	// (0x000a4814) list_calc_item_pane_ParamLimits

0x08f6,	// (0x000a4814) list_calc_item_pane

0x9b44,	// (0x000ada62) list_calc_item_pane_g1

0x9b51,	// (0x000ada6f) list_calc_item_pane_t1_ParamLimits

0x9b51,	// (0x000ada6f) list_calc_item_pane_t1

0x090b,	// (0x000a4829) list_calc_item_pane_t2_ParamLimits

0x090b,	// (0x000a4829) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x000b308a) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x000b308a) list_calc_item_pane_t

0x9b63,	// (0x000ada81) cell_calc_pane_g1

0x9b6d,	// (0x000ada8b) grid_highlight_pane_cp02

0x093d,	// (0x000a485b) bg_calc_display_pane_g1

0x0946,	// (0x000a4864) bg_calc_display_pane_g2

0x0950,	// (0x000a486e) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x000b3094) bg_calc_display_pane_g

0x0959,	// (0x000a4877) cell_qdial_pane_ParamLimits

0x0959,	// (0x000a4877) cell_qdial_pane

0x096d,	// (0x000a488b) cell_qdial_pane_g1_ParamLimits

0x096d,	// (0x000a488b) cell_qdial_pane_g1

0x0983,	// (0x000a48a1) cell_qdial_pane_g2_ParamLimits

0x0983,	// (0x000a48a1) cell_qdial_pane_g2

0x9b8f,	// (0x000adaad) cell_qdial_pane_g3_ParamLimits

0x9b8f,	// (0x000adaad) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x000b309b) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x000b309b) cell_qdial_pane_g

0x09aa,	// (0x000a48c8) cell_qdial_pane_t1_ParamLimits

0x09aa,	// (0x000a48c8) cell_qdial_pane_t1

0x09c2,	// (0x000a48e0) cell_qdial_pane_t2_ParamLimits

0x09c2,	// (0x000a48e0) cell_qdial_pane_t2

0x09d5,	// (0x000a48f3) cell_qdial_pane_t3_ParamLimits

0x09d5,	// (0x000a48f3) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x000b30a4) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x000b30a4) cell_qdial_pane_t

0x97a8,	// (0x000ad6c6) grid_highlight_pane_cp04

0x9b9b,	// (0x000adab9) thumbnail_qdial_pane_ParamLimits

0x9b9b,	// (0x000adab9) thumbnail_qdial_pane

0xa2ce,	// (0x000ae1ec) list_help_pane

0xa2d7,	// (0x000ae1f5) scroll_pane_cp02

0x09e8,	// (0x000a4906) help_list_pane_t1_ParamLimits

0x09e8,	// (0x000a4906) help_list_pane_t1

0x9ba7,	// (0x000adac5) bg_notes_pane_g2

0x9baf,	// (0x000adacd) bg_notes_pane_g3

0x9bb7,	// (0x000adad5) notes_bg_pane_g1

0x9bbf,	// (0x000adadd) notes_bg_pane_g4

0x9bc7,	// (0x000adae5) notes_bg_pane_g5

0x9bcf,	// (0x000adaed) notes_bg_pane_g6

0x9bd7,	// (0x000adaf5) notes_bg_pane_g7

0x9bdf,	// (0x000adafd) notes_bg_pane_g8

0x9be7,	// (0x000adb05) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x000b30c2) notes_bg_pane_g

0x0a05,	// (0x000a4923) list_notes_text_pane_ParamLimits

0x0a05,	// (0x000a4923) list_notes_text_pane

0xa2e0,	// (0x000ae1fe) list_notes_text_pane_g1

0x0a1a,	// (0x000a4938) list_notes_text_pane_t1

0x0a28,	// (0x000a4946) listscroll_cale_week_pane

0x0a54,	// (0x000a4972) bg_cale_heading_pane

0xa303,	// (0x000ae221) bg_cale_pane_cp01

0x0a6c,	// (0x000a498a) cale_week_corner_pane

0x0a8b,	// (0x000a49a9) cale_week_day_heading_pane

0x0aa8,	// (0x000a49c6) cale_week_scroll_pane_g1

0x0abb,	// (0x000a49d9) cale_week_scroll_pane_g2

0x0ad3,	// (0x000a49f1) cale_week_scroll_pane_g3

0x0aeb,	// (0x000a4a09) cale_week_scroll_pane_g4

0x0b03,	// (0x000a4a21) cale_week_scroll_pane_g5

0x0b23,	// (0x000a4a41) cale_week_scroll_pane_g6

0x0b43,	// (0x000a4a61) cale_week_scroll_pane_g7

0x0b63,	// (0x000a4a81) cale_week_scroll_pane_g8

0x0b87,	// (0x000a4aa5) cale_week_scroll_pane_g9

0x0b9f,	// (0x000a4abd) cale_week_scroll_pane_g10

0x0bb7,	// (0x000a4ad5) cale_week_scroll_pane_g11

0x0bcf,	// (0x000a4aed) cale_week_scroll_pane_g12

0x0be7,	// (0x000a4b05) cale_week_scroll_pane_g13

0x0be7,	// (0x000a4b05) cale_week_scroll_pane_g14

0x0be7,	// (0x000a4b05) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x000b30d1) cale_week_scroll_pane_g

0x0bff,	// (0x000a4b1d) cale_week_time_pane

0x0c23,	// (0x000a4b41) grid_cale_week_pane

0xa333,	// (0x000ae251) scroll_pane_cp08

0x0c49,	// (0x000a4b67) cell_cale_week_pane_ParamLimits

0x0c49,	// (0x000a4b67) cell_cale_week_pane

0x0cd7,	// (0x000a4bf5) cale_week_day_heading_pane_t1

0x0d1c,	// (0x000a4c3a) cale_week_day_heading_pane_t2

0x0d66,	// (0x000a4c84) cale_week_day_heading_pane_t3

0x0db0,	// (0x000a4cce) cale_week_day_heading_pane_t4

0x0dfa,	// (0x000a4d18) cale_week_day_heading_pane_t5

0x0e4c,	// (0x000a4d6a) cale_week_day_heading_pane_t6

0x0e9e,	// (0x000a4dbc) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x000b30f0) cale_week_day_heading_pane_t

0xa350,	// (0x000ae26e) bg_cale_side_pane

0x0ee3,	// (0x000a4e01) cale_week_time_pane_t1

0x0efd,	// (0x000a4e1b) cale_week_time_pane_t2

0x0f17,	// (0x000a4e35) cale_week_time_pane_t3

0x0f31,	// (0x000a4e4f) cale_week_time_pane_t4

0x0f4b,	// (0x000a4e69) cale_week_time_pane_t5

0x0f65,	// (0x000a4e83) cale_week_time_pane_t6

0x0f7f,	// (0x000a4e9d) cale_week_time_pane_t7

0x0f99,	// (0x000a4eb7) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x000b30ff) cale_week_time_pane_t

0x0fb9,	// (0x000a4ed7) cell_cale_week_pane_g2

0x0fd8,	// (0x000a4ef6) cell_cale_week_pane_g3_ParamLimits

0x0fd8,	// (0x000a4ef6) cell_cale_week_pane_g3

0xa35e,	// (0x000ae27c) grid_highlight_pane_cp07

0xa366,	// (0x000ae284) listscroll_gms_pane

0xa370,	// (0x000ae28e) grid_gms_pane

0xa379,	// (0x000ae297) listscroll_gms_pane_g1

0xa381,	// (0x000ae29f) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x000b3110) listscroll_gms_pane_g

0x0ff0,	// (0x000a4f0e) scroll_pane_cp010

0x0ffb,	// (0x000a4f19) cell_gms_pane_ParamLimits

0x0ffb,	// (0x000a4f19) cell_gms_pane

0x100e,	// (0x000a4f2c) cell_gms_pane_g1

0xa389,	// (0x000ae2a7) cell_gms_pane_g2

0xa391,	// (0x000ae2af) cell_gms_pane_g3

0xa39a,	// (0x000ae2b8) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x000b3115) cell_gms_pane_g

0xa3a3,	// (0x000ae2c1) grid_highlight_pane_cp09

0x3581,	// (0x000a749f) phob_pre_status_pane_g1

0x3589,	// (0x000a74a7) phob_pre_status_pane_g2

0x3591,	// (0x000a74af) phob_pre_status_pane_g3

0x3599,	// (0x000a74b7) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x000b3504) phob_pre_status_pane_g

0x35a9,	// (0x000a74c7) phob_pre_status_pane_t1

0x35b7,	// (0x000a74d5) phob_pre_status_pane_t2

0x35c7,	// (0x000a74e5) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x000b350f) phob_pre_status_pane_t

0x97a8,	// (0x000ad6c6) bg_list_pane_cp05

0x101e,	// (0x000a4f3c) grid_vorec_pane

0x1026,	// (0x000a4f44) vorec_t1

0x1034,	// (0x000a4f52) vorec_t2

0x1042,	// (0x000a4f60) vorec_t3

0x1050,	// (0x000a4f6e) vorec_t4

0x9bef,	// (0x000adb0d) vorec_t5

0x105e,	// (0x000a4f7c) vorec_t6

0x0006,

0xf200,	// (0x000b311e) vorec_t

0x107a,	// (0x000a4f98) wait_bar_pane_cp01

0x1082,	// (0x000a4fa0) cell_vorec_pane_ParamLimits

0x1082,	// (0x000a4fa0) cell_vorec_pane

0x9bfd,	// (0x000adb1b) cell_vorec_pane_g1

0x97a8,	// (0x000ad6c6) grid_highlight_pane_cp05

0x10aa,	// (0x000a4fc8) cams_zoom_pane

0x10b9,	// (0x000a4fd7) image_vga_pane

0x10d3,	// (0x000a4ff1) main_camera_pane_g1

0x10e5,	// (0x000a5003) main_camera_pane_g2

0x10f5,	// (0x000a5013) main_camera_pane_g3

0x1105,	// (0x000a5023) main_camera_pane_g4

0x1115,	// (0x000a5033) main_camera_pane_g5

0x1125,	// (0x000a5043) main_camera_pane_g6

0x1137,	// (0x000a5055) main_camera_pane_g7

0x0007,

0xf20f,	// (0x000b312d) main_camera_pane_g

0x1147,	// (0x000a5065) main_camera_pane_t1

0x115d,	// (0x000a507b) main_camera_pane_t2

0x0001,

0xf220,	// (0x000b313e) main_camera_pane_t

0x1197,	// (0x000a50b5) cams_zoom_pane_cp_ParamLimits

0x1197,	// (0x000a50b5) cams_zoom_pane_cp

0x11bf,	// (0x000a50dd) image_cif_pane_ParamLimits

0x11bf,	// (0x000a50dd) image_cif_pane

0x11f5,	// (0x000a5113) image_subqcif_pane

0x11fd,	// (0x000a511b) main_video_pane_g1_ParamLimits

0x11fd,	// (0x000a511b) main_video_pane_g1

0x1221,	// (0x000a513f) main_video_pane_g2_ParamLimits

0x1221,	// (0x000a513f) main_video_pane_g2

0x1255,	// (0x000a5173) main_video_pane_g3_ParamLimits

0x1255,	// (0x000a5173) main_video_pane_g3

0x1283,	// (0x000a51a1) main_video_pane_g4_ParamLimits

0x1283,	// (0x000a51a1) main_video_pane_g4

0x12b1,	// (0x000a51cf) main_video_pane_g5_ParamLimits

0x12b1,	// (0x000a51cf) main_video_pane_g5

0xa3b7,	// (0x000ae2d5) main_video_pane_g6_ParamLimits

0xa3b7,	// (0x000ae2d5) main_video_pane_g6

0x0006,

0xf225,	// (0x000b3143) main_video_pane_g_ParamLimits

0xf225,	// (0x000b3143) main_video_pane_g

0x12da,	// (0x000a51f8) main_video_pane_t1_ParamLimits

0x12da,	// (0x000a51f8) main_video_pane_t1

0xa3d1,	// (0x000ae2ef) cams_zoom_pane_g1

0xa3da,	// (0x000ae2f8) cams_zoom_pane_g2

0xa3e3,	// (0x000ae301) cams_zoom_pane_g3

0xa3ec,	// (0x000ae30a) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x000b3152) cams_zoom_pane_g

0x1337,	// (0x000a5255) grid_cams_pane

0x1351,	// (0x000a526f) linegrid_cams_pane

0x1365,	// (0x000a5283) cell_cams_pane_ParamLimits

0x1365,	// (0x000a5283) cell_cams_pane

0xa3f5,	// (0x000ae313) cams_burst_image_pane

0xa3fd,	// (0x000ae31b) cell_cams_pane_g1

0x97a8,	// (0x000ad6c6) grid_highlight_pane_cp03

0x9b63,	// (0x000ada81) mp_bg_pane_g1

0x97a8,	// (0x000ad6c6) bg_list_pane_cp03

0xc64f,	// (0x000b056d) bg_mp_pane

0xc657,	// (0x000b0575) grid_mp_pane

0xc65f,	// (0x000b057d) media_player_g1

0xc667,	// (0x000b0585) media_player_t1

0xc675,	// (0x000b0593) media_player_t2

0xc683,	// (0x000b05a1) media_player_t3

0xc691,	// (0x000b05af) media_player_t4

0xc69f,	// (0x000b05bd) media_player_t5

0xc6ad,	// (0x000b05cb) media_player_t6

0xc6bb,	// (0x000b05d9) media_player_t7

0x0006,

0xf5d0,	// (0x000b34ee) media_player_t

0xc6c9,	// (0x000b05e7) wait_bar_pane_cp02

0xf5b5,	// (0x000b34d3) main_usb_pane_t

0x3578,	// (0x000a7496) cell_mp_pane

0x9b63,	// (0x000ada81) cell_mp_pane_g1

0x97a8,	// (0x000ad6c6) grid_highlight_pane_cp06

0xa405,	// (0x000ae323) grid_skin_colour_pane

0xa40d,	// (0x000ae32b) list_highlight_pane_cp03

0x149b,	// (0x000a53b9) skin_g1

0xa415,	// (0x000ae333) skin_t1

0xa424,	// (0x000ae342) skin_t2

0x0001,

0xf269,	// (0x000b3187) skin_t

0x14a3,	// (0x000a53c1) cell_skin_colour_pane_ParamLimits

0x14a3,	// (0x000a53c1) cell_skin_colour_pane

0xa432,	// (0x000ae350) cell_skin_colour_pane_g1

0x151c,	// (0x000a543a) call_video_g1_ParamLimits

0x151c,	// (0x000a543a) call_video_g1

0x1538,	// (0x000a5456) call_video_g2_ParamLimits

0x1538,	// (0x000a5456) call_video_g2

0x0001,

0xf26e,	// (0x000b318c) call_video_g_ParamLimits

0xf26e,	// (0x000b318c) call_video_g

0x158a,	// (0x000a54a8) call_video_uplink_pane_cp1_ParamLimits

0x158a,	// (0x000a54a8) call_video_uplink_pane_cp1

0xa444,	// (0x000ae362) call_video_uplink_pane_cp2

0x1629,	// (0x000a5547) video_down_crop_pane_ParamLimits

0x1629,	// (0x000a5547) video_down_crop_pane

0x1720,	// (0x000a563e) video_down_pane_ParamLimits

0x1720,	// (0x000a563e) video_down_pane

0xa44c,	// (0x000ae36a) video_down_subqcif_pane_ParamLimits

0xa44c,	// (0x000ae36a) video_down_subqcif_pane

0xa464,	// (0x000ae382) video_down_subqcif_pane_cp_ParamLimits

0xa464,	// (0x000ae382) video_down_subqcif_pane_cp

0xa48a,	// (0x000ae3a8) im_reading_pane_ParamLimits

0xa48a,	// (0x000ae3a8) im_reading_pane

0x182e,	// (0x000a574c) im_writing_pane_ParamLimits

0x182e,	// (0x000a574c) im_writing_pane

0x1844,	// (0x000a5762) im_reading_pane_t1

0xa4a4,	// (0x000ae3c2) list_im_pane

0xa4b5,	// (0x000ae3d3) scroll_pane_cp07

0x187d,	// (0x000a579b) im_writing_pane_t1_ParamLimits

0x187d,	// (0x000a579b) im_writing_pane_t1

0xa4ce,	// (0x000ae3ec) im_writing_pane_t2_ParamLimits

0xa4ce,	// (0x000ae3ec) im_writing_pane_t2

0x0001,

0xf278,	// (0x000b3196) im_writing_pane_t_ParamLimits

0xf278,	// (0x000b3196) im_writing_pane_t

0x97a8,	// (0x000ad6c6) input_focus_pane_cp04

0x97a8,	// (0x000ad6c6) input_focus_pane_cp05

0x1892,	// (0x000a57b0) list_im_single_pane_ParamLimits

0x1892,	// (0x000a57b0) list_im_single_pane

0x18a6,	// (0x000a57c4) list_single_im_pane_t1

0x3538,	// (0x000a7456) blid_accuracy_pane

0x3540,	// (0x000a745e) blid_compass_pane

0x354a,	// (0x000a7468) main_location_t1

0x355a,	// (0x000a7478) main_location_t2

0x356a,	// (0x000a7488) main_location_t3

0x0002,

0xf5df,	// (0x000b34fd) main_location_t

0x97a8,	// (0x000ad6c6) aid_levels_location

0x9b63,	// (0x000ada81) blid_accuracy_pane_g1

0x9b63,	// (0x000ada81) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x000b31f8) blid_accuracy_pane_g

0xa516,	// (0x000ae434) wml_content_pane

0xa554,	// (0x000ae472) wml_button_pane_ParamLimits

0xa554,	// (0x000ae472) wml_button_pane

0x18b5,	// (0x000a57d3) wml_list_single_large_pane_ParamLimits

0x18b5,	// (0x000a57d3) wml_list_single_large_pane

0x18ca,	// (0x000a57e8) wml_list_single_medium_pane_ParamLimits

0x18ca,	// (0x000a57e8) wml_list_single_medium_pane

0x18e0,	// (0x000a57fe) wml_list_single_small_pane_ParamLimits

0x18e0,	// (0x000a57fe) wml_list_single_small_pane

0xa568,	// (0x000ae486) wml_selection_box_pane_ParamLimits

0xa568,	// (0x000ae486) wml_selection_box_pane

0xa57b,	// (0x000ae499) wml_list_single_pane_t1

0xa58a,	// (0x000ae4a8) wml_list_single_medium_pane_t1

0xa599,	// (0x000ae4b7) wml_list_single_large_pane_t1

0xa5a8,	// (0x000ae4c6) input_focus_pane_cp02_ParamLimits

0xa5a8,	// (0x000ae4c6) input_focus_pane_cp02

0xa5bb,	// (0x000ae4d9) wml_selection_box_pane_g1

0xa5c4,	// (0x000ae4e2) wml_selection_box_pane_t1_ParamLimits

0xa5c4,	// (0x000ae4e2) wml_selection_box_pane_t1

0x9a03,	// (0x000ad921) bg_wml_button_pane_ParamLimits

0x9a03,	// (0x000ad921) bg_wml_button_pane

0xa5dc,	// (0x000ae4fa) wml_button_pane_g1

0xa5e4,	// (0x000ae502) wml_button_pane_t1

0xa5dc,	// (0x000ae4fa) wml_button_bg_pane_g1

0xa5f4,	// (0x000ae512) wml_button_bg_pane_g2

0xa5fc,	// (0x000ae51a) wml_button_bg_pane_g3

0xa604,	// (0x000ae522) wml_button_bg_pane_g4

0xa60c,	// (0x000ae52a) wml_button_bg_pane_g5

0xa614,	// (0x000ae532) wml_button_bg_pane_g6

0xa61c,	// (0x000ae53a) wml_button_bg_pane_g7

0xa624,	// (0x000ae542) wml_button_bg_pane_g8

0xa62c,	// (0x000ae54a) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x000b319b) wml_button_bg_pane_g

0x18f8,	// (0x000a5816) bg_list_pane_cp02

0xa634,	// (0x000ae552) mce_header_pane_ParamLimits

0xa634,	// (0x000ae552) mce_header_pane

0xa64a,	// (0x000ae568) mce_icon_pane

0xa64a,	// (0x000ae568) mce_image_pane

0xa653,	// (0x000ae571) mce_text_pane_ParamLimits

0xa653,	// (0x000ae571) mce_text_pane

0x1900,	// (0x000a581e) scroll_pane_cp03

0xa54c,	// (0x000ae46a) scroll_pane_cp04

0xa666,	// (0x000ae584) scroll_pane_cp05_ParamLimits

0xa666,	// (0x000ae584) scroll_pane_cp05

0x190a,	// (0x000a5828) mce_header_field_pane_ParamLimits

0x190a,	// (0x000a5828) mce_header_field_pane

0x1921,	// (0x000a583f) mce_header_field_pane_2_ParamLimits

0x1921,	// (0x000a583f) mce_header_field_pane_2

0x1937,	// (0x000a5855) mce_header_field_pane_3

0x193f,	// (0x000a585d) list_single_mce_message_pane_ParamLimits

0x193f,	// (0x000a585d) list_single_mce_message_pane

0x1954,	// (0x000a5872) list_single_mce_smart_pane_ParamLimits

0x1954,	// (0x000a5872) list_single_mce_smart_pane

0xa672,	// (0x000ae590) input_focus_pane_cp03

0xa67b,	// (0x000ae599) list_header_data_pane

0x1974,	// (0x000a5892) mce_header_field_pane_t1

0x1984,	// (0x000a58a2) list_single_mce_header_pane_ParamLimits

0x1984,	// (0x000a58a2) list_single_mce_header_pane

0xa683,	// (0x000ae5a1) list_single_mce_header_pane_t1

0xa692,	// (0x000ae5b0) list_single_mce_message_pane_g1

0xa69a,	// (0x000ae5b8) list_single_mce_message_pane_t1

0x19be,	// (0x000a58dc) bg_cale_heading_pane_cp01_ParamLimits

0x19be,	// (0x000a58dc) bg_cale_heading_pane_cp01

0xa6a8,	// (0x000ae5c6) bg_cale_pane_cp02_ParamLimits

0xa6a8,	// (0x000ae5c6) bg_cale_pane_cp02

0x19ed,	// (0x000a590b) cale_month_corner_pane

0x1a0c,	// (0x000a592a) cale_month_day_heading_pane_ParamLimits

0x1a0c,	// (0x000a592a) cale_month_day_heading_pane

0x1a53,	// (0x000a5971) cale_month_pane_g1_ParamLimits

0x1a53,	// (0x000a5971) cale_month_pane_g1

0x1a77,	// (0x000a5995) cale_month_pane_g2_ParamLimits

0x1a77,	// (0x000a5995) cale_month_pane_g2

0x1aa7,	// (0x000a59c5) cale_month_pane_g3_ParamLimits

0x1aa7,	// (0x000a59c5) cale_month_pane_g3

0x1ae3,	// (0x000a5a01) cale_month_pane_g4_ParamLimits

0x1ae3,	// (0x000a5a01) cale_month_pane_g4

0x1b1f,	// (0x000a5a3d) cale_month_pane_g5_ParamLimits

0x1b1f,	// (0x000a5a3d) cale_month_pane_g5

0x1b67,	// (0x000a5a85) cale_month_pane_g6_ParamLimits

0x1b67,	// (0x000a5a85) cale_month_pane_g6

0x1bb3,	// (0x000a5ad1) cale_month_pane_g7_ParamLimits

0x1bb3,	// (0x000a5ad1) cale_month_pane_g7

0x1c07,	// (0x000a5b25) cale_month_pane_g8_ParamLimits

0x1c07,	// (0x000a5b25) cale_month_pane_g8

0x1c5b,	// (0x000a5b79) cale_month_pane_g9_ParamLimits

0x1c5b,	// (0x000a5b79) cale_month_pane_g9

0x1cad,	// (0x000a5bcb) cale_month_pane_g10_ParamLimits

0x1cad,	// (0x000a5bcb) cale_month_pane_g10

0x1cff,	// (0x000a5c1d) cale_month_pane_g11_ParamLimits

0x1cff,	// (0x000a5c1d) cale_month_pane_g11

0x1d51,	// (0x000a5c6f) cale_month_pane_g12_ParamLimits

0x1d51,	// (0x000a5c6f) cale_month_pane_g12

0x1da3,	// (0x000a5cc1) cale_month_pane_g13_ParamLimits

0x1da3,	// (0x000a5cc1) cale_month_pane_g13

0x000c,

0xf290,	// (0x000b31ae) cale_month_pane_g_ParamLimits

0xf290,	// (0x000b31ae) cale_month_pane_g

0x1df5,	// (0x000a5d13) cale_month_week_pane

0x1e19,	// (0x000a5d37) grid_cale_month_pane_ParamLimits

0x1e19,	// (0x000a5d37) grid_cale_month_pane

0x1e57,	// (0x000a5d75) cale_month_day_heading_pane_t1

0x1edd,	// (0x000a5dfb) cale_month_day_heading_pane_t2

0x1f6e,	// (0x000a5e8c) cale_month_day_heading_pane_t3

0x1fff,	// (0x000a5f1d) cale_month_day_heading_pane_t4

0x2094,	// (0x000a5fb2) cale_month_day_heading_pane_t5

0x2135,	// (0x000a6053) cale_month_day_heading_pane_t6

0x21d6,	// (0x000a60f4) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x000b31c9) cale_month_day_heading_pane_t

0xa350,	// (0x000ae26e) bg_cale_side_pane_cp01

0x227f,	// (0x000a619d) cale_month_week_pane_t1

0x2298,	// (0x000a61b6) cale_month_week_pane_t2

0x22b1,	// (0x000a61cf) cale_month_week_pane_t3

0x22ca,	// (0x000a61e8) cale_month_week_pane_t4

0x22e3,	// (0x000a6201) cale_month_week_pane_t5

0x22fc,	// (0x000a621a) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x000b31d8) cale_month_week_pane_t

0x2315,	// (0x000a6233) cell_cale_month_pane_ParamLimits

0x2315,	// (0x000a6233) cell_cale_month_pane

0x9c07,	// (0x000adb25) cell_cale_month_pane_g1

0x2469,	// (0x000a6387) cell_cale_month_pane_t1_ParamLimits

0x2469,	// (0x000a6387) cell_cale_month_pane_t1

0xa35e,	// (0x000ae27c) grid_highlight_pane_cp08

0x9b63,	// (0x000ada81) main_smil_g1

0x2489,	// (0x000a63a7) smil_status_pane

0xa6e7,	// (0x000ae605) smil_text_pane

0xc56f,	// (0x000b048d) bg_popup_call3_rect_pane_g8

0xc577,	// (0x000b0495) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x000b3491) bg_popup_call3_rect_pane_g

0xc7be,	// (0x000b06dc) smil_status_volume_pane_g1

0xa6f1,	// (0x000ae60f) smil_status_pane_t1

0x9d51,	// (0x000adc6f) volume_smil_pane

0xa708,	// (0x000ae626) list_smil_text_pane

0x249c,	// (0x000a63ba) scroll_pane_cp011

0x24a7,	// (0x000a63c5) smil_text_list_pane_t1_ParamLimits

0x24a7,	// (0x000a63c5) smil_text_list_pane_t1

0x9c13,	// (0x000adb31) aid_volume_smil_ParamLimits

0x9c13,	// (0x000adb31) aid_volume_smil

0x9b63,	// (0x000ada81) smil_volume_pane_g1

0x9b63,	// (0x000ada81) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x000b31f8) smil_volume_pane_g

0x0a28,	// (0x000a4946) listscroll_cale_day_pane

0xa712,	// (0x000ae630) bg_cale_pane

0xa72a,	// (0x000ae648) list_cale_pane

0xa74d,	// (0x000ae66b) scroll_pane_cp09

0xa75e,	// (0x000ae67c) cale_bg_pane_g1

0xa766,	// (0x000ae684) cale_bg_pane_g2

0xa76e,	// (0x000ae68c) cale_bg_pane_g3

0xa776,	// (0x000ae694) cale_bg_pane_g4

0xa77e,	// (0x000ae69c) cale_bg_pane_g5

0xa786,	// (0x000ae6a4) cale_bg_pane_g6

0xa78e,	// (0x000ae6ac) cale_bg_pane_g7

0xa796,	// (0x000ae6b4) cale_bg_pane_g8

0xa79e,	// (0x000ae6bc) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x000b31fd) cale_bg_pane_g

0x24eb,	// (0x000a6409) list_cale_time_pane_ParamLimits

0x24eb,	// (0x000a6409) list_cale_time_pane

0xa7a6,	// (0x000ae6c4) list_cale_time_pane_g1_ParamLimits

0xa7a6,	// (0x000ae6c4) list_cale_time_pane_g1

0xa7b2,	// (0x000ae6d0) list_cale_time_pane_g2_ParamLimits

0xa7b2,	// (0x000ae6d0) list_cale_time_pane_g2

0x2500,	// (0x000a641e) list_cale_time_pane_g3_ParamLimits

0x2500,	// (0x000a641e) list_cale_time_pane_g3

0x250e,	// (0x000a642c) list_cale_time_pane_g4_ParamLimits

0x250e,	// (0x000a642c) list_cale_time_pane_g4

0x251c,	// (0x000a643a) list_cale_time_pane_g5_ParamLimits

0x251c,	// (0x000a643a) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x000b3210) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x000b3210) list_cale_time_pane_g

0xa7cc,	// (0x000ae6ea) list_cale_time_pane_t1_ParamLimits

0xa7cc,	// (0x000ae6ea) list_cale_time_pane_t1

0xa7f4,	// (0x000ae712) list_cale_time_pane_t2_ParamLimits

0xa7f4,	// (0x000ae712) list_cale_time_pane_t2

0x287d,	// (0x000a679b) aid_blid_cardinal_pane

0x28bb,	// (0x000a67d9) compass_pane_t4

0xa81c,	// (0x000ae73a) list_cale_time_pane_t4_ParamLimits

0xa81c,	// (0x000ae73a) list_cale_time_pane_t4

0x28c9,	// (0x000a67e7) compass_pane_t5

0x28d7,	// (0x000a67f5) compass_pane_t6

0x28e5,	// (0x000a6803) compass_pane_t7

0xacbf,	// (0x000aebdd) navi_pane_cc_t1

0xaea4,	// (0x000aedc2) aid_phob_thumbnail_center_pane

0x2f50,	// (0x000a6e6e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x000b321d) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x000b321d) list_cale_time_pane_t

0xe3a3,	// (0x000b22c1) bg_popup_window_pane_cp02_ParamLimits

0xe3a3,	// (0x000b22c1) bg_popup_window_pane_cp02

0xa844,	// (0x000ae762) heading_pane_cp01_ParamLimits

0xa844,	// (0x000ae762) heading_pane_cp01

0xa850,	// (0x000ae76e) loc_req_pane_ParamLimits

0xa850,	// (0x000ae76e) loc_req_pane

0xa860,	// (0x000ae77e) loc_type_pane_ParamLimits

0xa860,	// (0x000ae77e) loc_type_pane

0xa872,	// (0x000ae790) loc_type_pane_t1_ParamLimits

0xa872,	// (0x000ae790) loc_type_pane_t1

0xa884,	// (0x000ae7a2) loc_type_pane_t2_ParamLimits

0xa884,	// (0x000ae7a2) loc_type_pane_t2

0xa896,	// (0x000ae7b4) loc_type_pane_t3_ParamLimits

0xa896,	// (0x000ae7b4) loc_type_pane_t3

0x0002,

0xf306,	// (0x000b3224) loc_type_pane_t_ParamLimits

0xf306,	// (0x000b3224) loc_type_pane_t

0xa8a8,	// (0x000ae7c6) list_loc_req_pane

0xa8b2,	// (0x000ae7d0) scroll_pane_cp012

0x252a,	// (0x000a6448) list_single_loc_request_popup_menu_pane_ParamLimits

0x252a,	// (0x000a6448) list_single_loc_request_popup_menu_pane

0xa8bd,	// (0x000ae7db) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa8bd,	// (0x000ae7db) list_single_loc_request_popup_menu_pane_g1

0xa8c9,	// (0x000ae7e7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa8c9,	// (0x000ae7e7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x000b322b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x000b322b) list_single_loc_request_popup_menu_pane_g

0xa8d5,	// (0x000ae7f3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa8d5,	// (0x000ae7f3) list_single_loc_request_popup_menu_pane_t1

0x9a03,	// (0x000ad921) bg_popup_window_pane_cp03_ParamLimits

0x9a03,	// (0x000ad921) bg_popup_window_pane_cp03

0xaf64,	// (0x000aee82) heading_loc_req_pane_ParamLimits

0xaf64,	// (0x000aee82) heading_loc_req_pane

0x2537,	// (0x000a6455) popup_dyc_status_message_window_g1_ParamLimits

0x2537,	// (0x000a6455) popup_dyc_status_message_window_g1

0x254b,	// (0x000a6469) popup_dyc_status_message_window_t1_ParamLimits

0x254b,	// (0x000a6469) popup_dyc_status_message_window_t1

0x2560,	// (0x000a647e) popup_dyc_status_message_window_t2_ParamLimits

0x2560,	// (0x000a647e) popup_dyc_status_message_window_t2

0x2575,	// (0x000a6493) popup_dyc_status_message_window_t3_ParamLimits

0x2575,	// (0x000a6493) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x000b3230) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x000b3230) popup_dyc_status_message_window_t

0x97a8,	// (0x000ad6c6) bg_heading_pane_cp01

0xa8eb,	// (0x000ae809) heading_loc_req_pane_g1

0xa8f3,	// (0x000ae811) heading_loc_req_pane_g2

0xa8fb,	// (0x000ae819) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x000b3237) heading_loc_req_pane_g

0xa903,	// (0x000ae821) heading_loc_req_pane_t1

0xa912,	// (0x000ae830) bg_popup_sub_pane_cp01_ParamLimits

0xa912,	// (0x000ae830) bg_popup_sub_pane_cp01

0xa920,	// (0x000ae83e) popup_cale_events_window_g1_ParamLimits

0xa920,	// (0x000ae83e) popup_cale_events_window_g1

0xa940,	// (0x000ae85e) popup_cale_events_window_g2_ParamLimits

0xa940,	// (0x000ae85e) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x000b326b) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x000b326b) popup_cale_events_window_g

0xa960,	// (0x000ae87e) popup_cale_events_window_t1_ParamLimits

0xa960,	// (0x000ae87e) popup_cale_events_window_t1

0xa972,	// (0x000ae890) popup_cale_events_window_t2_ParamLimits

0xa972,	// (0x000ae890) popup_cale_events_window_t2

0xa9b0,	// (0x000ae8ce) popup_cale_events_window_t3_ParamLimits

0xa9b0,	// (0x000ae8ce) popup_cale_events_window_t3

0xa9ea,	// (0x000ae908) popup_cale_events_window_t4_ParamLimits

0xa9ea,	// (0x000ae908) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x000b3270) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x000b3270) popup_cale_events_window_t

0x2678,	// (0x000a6596) call_type_pane

0x2688,	// (0x000a65a6) popup_call_status_window_g1

0x269c,	// (0x000a65ba) popup_call_status_window_g2

0x26b0,	// (0x000a65ce) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x000b3279) popup_call_status_window_g

0xaa20,	// (0x000ae93e) call_type_pane_g1

0xaa29,	// (0x000ae947) call_type_pane_g2

0x0001,

0xf362,	// (0x000b3280) call_type_pane_g

0x97a8,	// (0x000ad6c6) bg_popup_sub_pane_cp02

0xaa32,	// (0x000ae950) listscroll_popup_wml_pane

0xaa3a,	// (0x000ae958) list_wml_pane

0xaa44,	// (0x000ae962) scroll_pane_cp013

0xaa4f,	// (0x000ae96d) list_single_graphic_popup_wml_pane_ParamLimits

0xaa4f,	// (0x000ae96d) list_single_graphic_popup_wml_pane

0x9b63,	// (0x000ada81) list_single_graphic_popup_wml_pane_g1

0xaa63,	// (0x000ae981) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x000b3285) list_single_graphic_popup_wml_pane_g

0xaa6b,	// (0x000ae989) list_single_graphic_popup_wml_pane_t1

0xaa81,	// (0x000ae99f) aid_call_pane

0x99fb,	// (0x000ad919) popup_clock_analogue_window_g1

0x99fb,	// (0x000ad919) popup_clock_analogue_window_g2

0x9c35,	// (0x000adb53) popup_clock_analogue_window_g3

0x9c35,	// (0x000adb53) popup_clock_analogue_window_g4

0x9b63,	// (0x000ada81) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x000b328a) popup_clock_analogue_window_g

0x9c3d,	// (0x000adb5b) popup_clock_analogue_window_t1

0x9c4b,	// (0x000adb69) clock_digital_number_pane_ParamLimits

0x9c4b,	// (0x000adb69) clock_digital_number_pane

0x9c57,	// (0x000adb75) clock_digital_number_pane_cp02_ParamLimits

0x9c57,	// (0x000adb75) clock_digital_number_pane_cp02

0x9c63,	// (0x000adb81) clock_digital_number_pane_cp03_ParamLimits

0x9c63,	// (0x000adb81) clock_digital_number_pane_cp03

0x9c6f,	// (0x000adb8d) clock_digital_number_pane_cp04_ParamLimits

0x9c6f,	// (0x000adb8d) clock_digital_number_pane_cp04

0x9c7f,	// (0x000adb9d) clock_digital_separator_pane_ParamLimits

0x9c7f,	// (0x000adb9d) clock_digital_separator_pane

0x9c8b,	// (0x000adba9) popup_clock_digital_window_t1

0x9b63,	// (0x000ada81) clock_digital_number_pane_g1

0x9b63,	// (0x000ada81) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x000b31f8) clock_digital_number_pane_g

0x9b63,	// (0x000ada81) clock_digital_separator_pane_g1

0x9b63,	// (0x000ada81) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x000b31f8) clock_digital_separator_pane_g

0x97a8,	// (0x000ad6c6) bg_popup_window_pane_cp04

0xaa89,	// (0x000ae9a7) heading_pane_cp03

0xaa91,	// (0x000ae9af) listscroll_popup_gms_pane

0xaa99,	// (0x000ae9b7) grid_large_graphic_popup_pane

0xaaa3,	// (0x000ae9c1) listscroll_popup_gms_pane_g1

0xaaab,	// (0x000ae9c9) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x000b3295) listscroll_popup_gms_pane_g

0xa54c,	// (0x000ae46a) scroll_pane_cp014

0x26bf,	// (0x000a65dd) cell_large_graphic_popup_pane_ParamLimits

0x26bf,	// (0x000a65dd) cell_large_graphic_popup_pane

0x26d7,	// (0x000a65f5) cell_large_graphic_popup_pane_g1_ParamLimits

0x26d7,	// (0x000a65f5) cell_large_graphic_popup_pane_g1

0xaab3,	// (0x000ae9d1) cell_large_graphic_popup_pane_g2_ParamLimits

0xaab3,	// (0x000ae9d1) cell_large_graphic_popup_pane_g2

0xaabf,	// (0x000ae9dd) cell_large_graphic_popup_pane_g3_ParamLimits

0xaabf,	// (0x000ae9dd) cell_large_graphic_popup_pane_g3

0xaacc,	// (0x000ae9ea) cell_large_graphic_popup_pane_g4_ParamLimits

0xaacc,	// (0x000ae9ea) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x000b329a) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x000b329a) cell_large_graphic_popup_pane_g

0xaadc,	// (0x000ae9fa) grid_highlight_pane_cp010

0x9b63,	// (0x000ada81) bg_popup_call_pane_g1

0xaae6,	// (0x000aea04) list_single_graphic_popup_conf_pane_ParamLimits

0xaae6,	// (0x000aea04) list_single_graphic_popup_conf_pane

0xaaf9,	// (0x000aea17) list_highlight_pane_cp01

0xab02,	// (0x000aea20) list_single_graphic_popup_conf_pane_g1

0xab0a,	// (0x000aea28) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x000b32a3) list_single_graphic_popup_conf_pane_g

0xab12,	// (0x000aea30) list_single_graphic_popup_conf_pane_t1

0xab20,	// (0x000aea3e) linegrid_cams_pane_g1

0x26e3,	// (0x000a6601) linegrid_cams_pane_g2

0xa391,	// (0x000ae2af) linegrid_cams_pane_g3

0xab29,	// (0x000aea47) linegrid_cams_pane_g4

0x26ec,	// (0x000a660a) linegrid_cams_pane_g5

0x26f5,	// (0x000a6613) linegrid_cams_pane_g6

0xa39a,	// (0x000ae2b8) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x000b32a8) linegrid_cams_pane_g

0xab32,	// (0x000aea50) popup_clock_analogue_window

0xab32,	// (0x000aea50) popup_clock_digital_window

0x97a8,	// (0x000ad6c6) popup_phob_thumbnail_window

0x9b63,	// (0x000ada81) call_video_uplink_pane_g1

0xab3b,	// (0x000aea59) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000b32b7) call_video_uplink_pane_g

0xab43,	// (0x000aea61) video_uplink_pane

0xab4b,	// (0x000aea69) mce_image_pane_g1

0x2700,	// (0x000a661e) mce_image_pane_g2

0x270a,	// (0x000a6628) mce_image_pane_g3

0x2712,	// (0x000a6630) mce_image_pane_g4

0x271a,	// (0x000a6638) mce_image_pane_g5

0x0004,

0xf39e,	// (0x000b32bc) mce_image_pane_g

0xab55,	// (0x000aea73) control_top_pane_stacon_cp01_ParamLimits

0xab55,	// (0x000aea73) control_top_pane_stacon_cp01

0xab69,	// (0x000aea87) uni_indicator_pane_stacon_cp01_ParamLimits

0xab69,	// (0x000aea87) uni_indicator_pane_stacon_cp01

0xab7a,	// (0x000aea98) bg_popup_sub_pane_cp03

0xab84,	// (0x000aeaa2) chi_dic_find_pane

0x2722,	// (0x000a6640) listscroll_chi_dic_pane

0xab8c,	// (0x000aeaaa) main_pane_chidic_g1

0xab94,	// (0x000aeab2) chi_dic_find_pane_t1

0xaba2,	// (0x000aeac0) find_chidic_pane

0xabab,	// (0x000aeac9) chi_dic_list_pane_ParamLimits

0xabab,	// (0x000aeac9) chi_dic_list_pane

0xabbc,	// (0x000aeada) scroll_pane_cp020

0xabc4,	// (0x000aeae2) find_chidic_pane_t1

0x97a8,	// (0x000ad6c6) input_focus_pane_cp06

0x2736,	// (0x000a6654) list_chi_dic_pane_ParamLimits

0x2736,	// (0x000a6654) list_chi_dic_pane

0x2748,	// (0x000a6666) list_chi_dic_pane_t1_ParamLimits

0x2748,	// (0x000a6666) list_chi_dic_pane_t1

0x97a8,	// (0x000ad6c6) list_highlight_pane_cp020

0xabd3,	// (0x000aeaf1) bg_cale_heading_pane_g1

0x275b,	// (0x000a6679) bg_cale_heading_pane_g2

0x2763,	// (0x000a6681) bg_cale_heading_pane_g3

0x276b,	// (0x000a6689) bg_cale_heading_pane_g4

0x2775,	// (0x000a6693) bg_cale_heading_pane_g5

0x277f,	// (0x000a669d) bg_cale_heading_pane_g6

0x2787,	// (0x000a66a5) bg_cale_heading_pane_g7

0x278f,	// (0x000a66ad) bg_cale_heading_pane_g8

0x2799,	// (0x000a66b7) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x000b32c7) bg_cale_heading_pane_g

0xabd3,	// (0x000aeaf1) bg_cale_side_pane_g1

0x27a3,	// (0x000a66c1) bg_cale_side_pane_g2

0x27ab,	// (0x000a66c9) bg_cale_side_pane_g3

0x27b3,	// (0x000a66d1) bg_cale_side_pane_g4

0x27bb,	// (0x000a66d9) bg_cale_side_pane_g5

0x27c3,	// (0x000a66e1) bg_cale_side_pane_g6

0x27cb,	// (0x000a66e9) bg_cale_side_pane_g7

0x27d3,	// (0x000a66f1) bg_cale_side_pane_g8

0x27db,	// (0x000a66f9) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x000b32da) bg_cale_side_pane_g

0x27e3,	// (0x000a6701) popup_call_status_window_ParamLimits

0x27e3,	// (0x000a6701) popup_call_status_window

0xabdb,	// (0x000aeaf9) stacon_top_pane

0xabe3,	// (0x000aeb01) status_pane_ParamLimits

0xabe3,	// (0x000aeb01) status_pane

0xabf8,	// (0x000aeb16) status_small_pane

0xac00,	// (0x000aeb1e) control_pane

0x97a8,	// (0x000ad6c6) stacon_bottom_pane

0xac08,	// (0x000aeb26) list_single_mce_smart_pane_t1_ParamLimits

0xac08,	// (0x000aeb26) list_single_mce_smart_pane_t1

0xac1b,	// (0x000aeb39) list_single_mce_smart_pane_t2_ParamLimits

0xac1b,	// (0x000aeb39) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x000b32ed) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x000b32ed) list_single_mce_smart_pane_t

0x282c,	// (0x000a674a) compass_pane

0x2835,	// (0x000a6753) main_location2_pane_t1

0x2847,	// (0x000a6765) main_location2_pane_t2

0x2859,	// (0x000a6777) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x000b32f2) main_location2_pane_t

0xac3a,	// (0x000aeb58) compass_pane_g1_ParamLimits

0xac3a,	// (0x000aeb58) compass_pane_g1

0x289d,	// (0x000a67bb) compass_pane_t1

0x28ac,	// (0x000a67ca) compass_pane_t2

0x0005,

0xf3dd,	// (0x000b32fb) compass_pane_t

0x28f3,	// (0x000a6811) text_secondary_cp61

0xacb6,	// (0x000aebd4) navi_pane_cams_g5

0xad32,	// (0x000aec50) navi_pane_im_t1

0xad40,	// (0x000aec5e) navi_pane_mp_g1_ParamLimits

0xad40,	// (0x000aec5e) navi_pane_mp_g1

0xad54,	// (0x000aec72) navi_pane_mp_g2_ParamLimits

0xad54,	// (0x000aec72) navi_pane_mp_g2

0xad60,	// (0x000aec7e) navi_pane_mp_g3_ParamLimits

0xad60,	// (0x000aec7e) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x000b330f) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x000b330f) navi_pane_mp_g

0xad6c,	// (0x000aec8a) navi_pane_mp_t1

0xad7a,	// (0x000aec98) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x000b3316) navi_pane_mp_t

0xade5,	// (0x000aed03) navi_pane_vt_g1

0xad6c,	// (0x000aec8a) navi_pane_vt_t1

0xaded,	// (0x000aed0b) navi_slider_pane

0xadfd,	// (0x000aed1b) zooming_pane

0xae05,	// (0x000aed23) navi_slider_pane_g1

0x9ca8,	// (0x000adbc6) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x000b331d) navi_slider_pane_g

0xae29,	// (0x000aed47) aid_levels_zoom

0xae31,	// (0x000aed4f) zooming_pane_g1

0xae39,	// (0x000aed57) zooming_pane_g2

0xae39,	// (0x000aed57) zooming_pane_g3

0x0002,

0xf40e,	// (0x000b332c) zooming_pane_g

0xae41,	// (0x000aed5f) level_10_zoom

0xae4a,	// (0x000aed68) level_11_zoom

0xae53,	// (0x000aed71) level_1_zoom

0xae5c,	// (0x000aed7a) level_2_zoom

0xae65,	// (0x000aed83) level_3_zoom

0xae6e,	// (0x000aed8c) level_4_zoom

0xae77,	// (0x000aed95) level_5_zoom

0xae80,	// (0x000aed9e) level_6_zoom

0xae89,	// (0x000aeda7) level_7_zoom

0xae92,	// (0x000aedb0) level_8_zoom

0xae9b,	// (0x000aedb9) level_9_zoom

0xaeac,	// (0x000aedca) popup_phob_thumbnail_window_g1

0xaeb4,	// (0x000aedd2) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x000b3333) popup_phob_thumbnail_window_g

0xc6d1,	// (0x000b05ef) level_1_location

0xc6d9,	// (0x000b05f7) level_2_location

0xc6e1,	// (0x000b05ff) level_3_location

0xc6e9,	// (0x000b0607) level_4_location

0xadfd,	// (0x000aed1b) level_5_location

0x2944,	// (0x000a6862) mce_icon_pane_g1

0x294e,	// (0x000a686c) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x000b3338) mce_icon_pane_g

0x2956,	// (0x000a6874) main_mup_pane_g1_ParamLimits

0x2956,	// (0x000a6874) main_mup_pane_g1

0x296c,	// (0x000a688a) main_mup_pane_g2_ParamLimits

0x296c,	// (0x000a688a) main_mup_pane_g2

0x2984,	// (0x000a68a2) main_mup_pane_g3_ParamLimits

0x2984,	// (0x000a68a2) main_mup_pane_g3

0x299c,	// (0x000a68ba) main_mup_pane_g4_ParamLimits

0x299c,	// (0x000a68ba) main_mup_pane_g4

0x29b4,	// (0x000a68d2) main_mup_pane_g5_ParamLimits

0x29b4,	// (0x000a68d2) main_mup_pane_g5

0x29d0,	// (0x000a68ee) main_mup_pane_g6_ParamLimits

0x29d0,	// (0x000a68ee) main_mup_pane_g6

0x29e8,	// (0x000a6906) main_mup_pane_g7_ParamLimits

0x29e8,	// (0x000a6906) main_mup_pane_g7

0x2a00,	// (0x000a691e) main_mup_pane_g8_ParamLimits

0x2a00,	// (0x000a691e) main_mup_pane_g8

0x2a1a,	// (0x000a6938) main_mup_pane_g9_ParamLimits

0x2a1a,	// (0x000a6938) main_mup_pane_g9

0x2a34,	// (0x000a6952) main_mup_pane_g10_ParamLimits

0x2a34,	// (0x000a6952) main_mup_pane_g10

0x2a4e,	// (0x000a696c) main_mup_pane_g11_ParamLimits

0x2a4e,	// (0x000a696c) main_mup_pane_g11

0x2a62,	// (0x000a6980) main_mup_pane_g12_ParamLimits

0x2a62,	// (0x000a6980) main_mup_pane_g12

0x2a78,	// (0x000a6996) main_mup_pane_g13_ParamLimits

0x2a78,	// (0x000a6996) main_mup_pane_g13

0x000c,

0xf41f,	// (0x000b333d) main_mup_pane_g_ParamLimits

0xf41f,	// (0x000b333d) main_mup_pane_g

0x2a8c,	// (0x000a69aa) main_mup_pane_t1_ParamLimits

0x2a8c,	// (0x000a69aa) main_mup_pane_t1

0x2aa6,	// (0x000a69c4) main_mup_pane_t2_ParamLimits

0x2aa6,	// (0x000a69c4) main_mup_pane_t2

0x2abe,	// (0x000a69dc) main_mup_pane_t3_ParamLimits

0x2abe,	// (0x000a69dc) main_mup_pane_t3

0x2ad6,	// (0x000a69f4) main_mup_pane_t4_ParamLimits

0x2ad6,	// (0x000a69f4) main_mup_pane_t4

0x2af4,	// (0x000a6a12) main_mup_pane_t5_ParamLimits

0x2af4,	// (0x000a6a12) main_mup_pane_t5

0x2b09,	// (0x000a6a27) main_mup_pane_t6_ParamLimits

0x2b09,	// (0x000a6a27) main_mup_pane_t6

0x0005,

0xf43a,	// (0x000b3358) main_mup_pane_t_ParamLimits

0xf43a,	// (0x000b3358) main_mup_pane_t

0x2b1b,	// (0x000a6a39) mup_progress_pane_ParamLimits

0x2b1b,	// (0x000a6a39) mup_progress_pane

0x2b27,	// (0x000a6a45) mup_visualizer_pane_ParamLimits

0x2b27,	// (0x000a6a45) mup_visualizer_pane

0x2b57,	// (0x000a6a75) mup_volume_pane_ParamLimits

0x2b57,	// (0x000a6a75) mup_volume_pane

0xaebc,	// (0x000aedda) mup_visualizer_pane_g1_ParamLimits

0xaebc,	// (0x000aedda) mup_visualizer_pane_g1

0xaebc,	// (0x000aedda) mup_visualizer_pane_g2_ParamLimits

0xaebc,	// (0x000aedda) mup_visualizer_pane_g2

0xac3a,	// (0x000aeb58) mup_visualizer_pane_g3_ParamLimits

0xac3a,	// (0x000aeb58) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x000b3365) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x000b3365) mup_visualizer_pane_g

0x9b63,	// (0x000ada81) mup_volume_pane_g1

0xaed2,	// (0x000aedf0) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x000b336c) mup_volume_pane_g

0x9b63,	// (0x000ada81) mup_progress_pane_g1

0xaedb,	// (0x000aedf9) mup_progress_pane_g2

0xaee4,	// (0x000aee02) mup_progress_pane_g3

0x0002,

0xf453,	// (0x000b3371) mup_progress_pane_g

0x97a8,	// (0x000ad6c6) bg_popup_window_pane_cp05

0xaeed,	// (0x000aee0b) heading_pane_cp02_ParamLimits

0xaeed,	// (0x000aee0b) heading_pane_cp02

0xaf07,	// (0x000aee25) list_popup_blid_pane

0xaf0f,	// (0x000aee2d) list_blid_sat_info_pane_ParamLimits

0xaf0f,	// (0x000aee2d) list_blid_sat_info_pane

0xaf22,	// (0x000aee40) list_blid_sat_info_pane_g1

0xaf2a,	// (0x000aee48) list_blid_sat_info_pane_t1

0x2c6d,	// (0x000a6b8b) mup_equalizer_pane_ParamLimits

0x2c6d,	// (0x000a6b8b) mup_equalizer_pane

0x2c86,	// (0x000a6ba4) mup_equalizer_pane_cp1_ParamLimits

0x2c86,	// (0x000a6ba4) mup_equalizer_pane_cp1

0x2ca3,	// (0x000a6bc1) mup_equalizer_pane_cp2_ParamLimits

0x2ca3,	// (0x000a6bc1) mup_equalizer_pane_cp2

0x2cc0,	// (0x000a6bde) mup_equalizer_pane_cp3_ParamLimits

0x2cc0,	// (0x000a6bde) mup_equalizer_pane_cp3

0x2ce1,	// (0x000a6bff) mup_equalizer_pane_cp4_ParamLimits

0x2ce1,	// (0x000a6bff) mup_equalizer_pane_cp4

0x2d02,	// (0x000a6c20) mup_equalizer_pane_cp5

0x2d16,	// (0x000a6c34) mup_equalizer_pane_cp6

0x2d2a,	// (0x000a6c48) mup_equalizer_pane_cp7

0xc5ef,	// (0x000b050d) bg_popup_call_poc_act_pane_g9

0xc5f7,	// (0x000b0515) bg_popup_call_poc_act_pane_g10

0xc5ff,	// (0x000b051d) bg_popup_call_poc_act_pane_g11

0x000a,

0x9a03,	// (0x000ad921) mup_scale_pane

0x9b63,	// (0x000ada81) mup_scale_pane_g1

0xaf38,	// (0x000aee56) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x000b338d) mup_scale_pane_g

0xaf5c,	// (0x000aee7a) msg_data_pane

0xaf7c,	// (0x000aee9a) scroll_pane_cp017

0x2d50,	// (0x000a6c6e) bg_list_pane_cp04_ParamLimits

0x2d50,	// (0x000a6c6e) bg_list_pane_cp04

0xaf84,	// (0x000aeea2) msg_data_pane_g1

0x2d70,	// (0x000a6c8e) msg_data_pane_g2

0x2d7a,	// (0x000a6c98) msg_data_pane_g3

0x2d82,	// (0x000a6ca0) msg_data_pane_g4

0x2d8a,	// (0x000a6ca8) msg_data_pane_g5

0x2d92,	// (0x000a6cb0) msg_data_pane_g6

0x2d9a,	// (0x000a6cb8) msg_data_pane_g7

0x0006,

0xf47e,	// (0x000b339c) msg_data_pane_g

0x2da2,	// (0x000a6cc0) msg_text_pane_ParamLimits

0x2da2,	// (0x000a6cc0) msg_text_pane

0x2dc4,	// (0x000a6ce2) qrid_highlight_pane_cp011_ParamLimits

0x2dc4,	// (0x000a6ce2) qrid_highlight_pane_cp011

0x97a8,	// (0x000ad6c6) msg_body_pane

0x97a8,	// (0x000ad6c6) msg_header_pane

0xaf8c,	// (0x000aeeaa) input_focus_pane_cp07

0x2df3,	// (0x000a6d11) msg_header_pane_t1_ParamLimits

0x2df3,	// (0x000a6d11) msg_header_pane_t1

0x2e05,	// (0x000a6d23) msg_header_pane_t2_ParamLimits

0x2e05,	// (0x000a6d23) msg_header_pane_t2

0x0001,

0xf492,	// (0x000b33b0) msg_header_pane_t_ParamLimits

0xf492,	// (0x000b33b0) msg_header_pane_t

0xafa1,	// (0x000aeebf) msg_body_pane_g1

0x2e17,	// (0x000a6d35) msg_body_pane_t1_ParamLimits

0x2e17,	// (0x000a6d35) msg_body_pane_t1

0x2e48,	// (0x000a6d66) msg_body_pane_t2_ParamLimits

0x2e48,	// (0x000a6d66) msg_body_pane_t2

0x2e5a,	// (0x000a6d78) msg_body_pane_t3_ParamLimits

0x2e5a,	// (0x000a6d78) msg_body_pane_t3

0x0002,

0xf497,	// (0x000b33b5) msg_body_pane_t_ParamLimits

0xf497,	// (0x000b33b5) msg_body_pane_t

0x2ea6,	// (0x000a6dc4) main_viewer_pane_g1_ParamLimits

0x2ea6,	// (0x000a6dc4) main_viewer_pane_g1

0x2eb4,	// (0x000a6dd2) main_viewer_pane_g2_ParamLimits

0x2eb4,	// (0x000a6dd2) main_viewer_pane_g2

0x2ec2,	// (0x000a6de0) main_viewer_pane_g3_ParamLimits

0x2ec2,	// (0x000a6de0) main_viewer_pane_g3

0x2ed1,	// (0x000a6def) main_viewer_pane_g4_ParamLimits

0x2ed1,	// (0x000a6def) main_viewer_pane_g4

0x9cd2,	// (0x000adbf0) main_viewer_pane_g5_ParamLimits

0x9cd2,	// (0x000adbf0) main_viewer_pane_g5

0x9cd2,	// (0x000adbf0) main_viewer_pane_g7_ParamLimits

0x9cd2,	// (0x000adbf0) main_viewer_pane_g7

0xa8bd,	// (0x000ae7db) main_viewer_pane_g8_ParamLimits

0xa8bd,	// (0x000ae7db) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x000b33c5) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x000b33c5) main_viewer_pane_g

0xafa9,	// (0x000aeec7) viewer_content_pane_ParamLimits

0xafa9,	// (0x000aeec7) viewer_content_pane

0x2f0d,	// (0x000a6e2b) main_postcard_pane_g1_ParamLimits

0x2f0d,	// (0x000a6e2b) main_postcard_pane_g1

0x2f23,	// (0x000a6e41) main_postcard_pane_g2_ParamLimits

0x2f23,	// (0x000a6e41) main_postcard_pane_g2

0x2f39,	// (0x000a6e57) main_postcard_pane_g3_ParamLimits

0x2f39,	// (0x000a6e57) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x000b33d6) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x000b33d6) main_postcard_pane_g

0x2f50,	// (0x000a6e6e) main_postcard_pane_g4

0xc7d1,	// (0x000b06ef) smil_status_volume_pane_g2

0x2f93,	// (0x000a6eb1) postcard_pane_ParamLimits

0x2f93,	// (0x000a6eb1) postcard_pane

0xafb7,	// (0x000aeed5) postcard_pane_g1_ParamLimits

0xafb7,	// (0x000aeed5) postcard_pane_g1

0x2fd5,	// (0x000a6ef3) postcard_pane_g2_ParamLimits

0x2fd5,	// (0x000a6ef3) postcard_pane_g2

0x2fe1,	// (0x000a6eff) postcard_pane_g3_ParamLimits

0x2fe1,	// (0x000a6eff) postcard_pane_g3

0xafc5,	// (0x000aeee3) postcard_pane_g4_ParamLimits

0xafc5,	// (0x000aeee3) postcard_pane_g4

0x2fed,	// (0x000a6f0b) postcard_pane_g5_ParamLimits

0x2fed,	// (0x000a6f0b) postcard_pane_g5

0x3002,	// (0x000a6f20) postcard_pane_g6_ParamLimits

0x3002,	// (0x000a6f20) postcard_pane_g6

0xafb7,	// (0x000aeed5) postcard_pane_g7_ParamLimits

0xafb7,	// (0x000aeed5) postcard_pane_g7

0x0006,

0xf4c5,	// (0x000b33e3) postcard_pane_g_ParamLimits

0xf4c5,	// (0x000b33e3) postcard_pane_g

0x3016,	// (0x000a6f34) main_mp2_pane_g1_ParamLimits

0x3016,	// (0x000a6f34) main_mp2_pane_g1

0x3022,	// (0x000a6f40) main_mp2_pane_g2_ParamLimits

0x3022,	// (0x000a6f40) main_mp2_pane_g2

0x302e,	// (0x000a6f4c) main_mp2_pane_g3_ParamLimits

0x302e,	// (0x000a6f4c) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x000b33f2) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x000b33f2) main_mp2_pane_g

0x303a,	// (0x000a6f58) main_mp2_pane_t1_ParamLimits

0x303a,	// (0x000a6f58) main_mp2_pane_t1

0x304f,	// (0x000a6f6d) main_mp2_pane_t2_ParamLimits

0x304f,	// (0x000a6f6d) main_mp2_pane_t2

0x3061,	// (0x000a6f7f) main_mp2_pane_t3_ParamLimits

0x3061,	// (0x000a6f7f) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x000b33f9) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x000b33f9) main_mp2_pane_t

0xafd3,	// (0x000aeef1) pec_content_pane_ParamLimits

0xafd3,	// (0x000aeef1) pec_content_pane

0xa54c,	// (0x000ae46a) scroll_pane_cp015

0xafe5,	// (0x000aef03) pec_attribute_pane_ParamLimits

0xafe5,	// (0x000aef03) pec_attribute_pane

0x3073,	// (0x000a6f91) pec_content_pane_g1_ParamLimits

0x3073,	// (0x000a6f91) pec_content_pane_g1

0xaff5,	// (0x000aef13) pec_content_pane_t1_ParamLimits

0xaff5,	// (0x000aef13) pec_content_pane_t1

0xb007,	// (0x000aef25) pec_content_pane_t2_ParamLimits

0xb007,	// (0x000aef25) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x000b3400) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x000b3400) pec_content_pane_t

0x307f,	// (0x000a6f9d) list_single_graphic_pane_cp01_ParamLimits

0x307f,	// (0x000a6f9d) list_single_graphic_pane_cp01

0x9a03,	// (0x000ad921) bg_popup_sub_pane_cp04

0xb019,	// (0x000aef37) popup_mup_playback_window_g1

0xb025,	// (0x000aef43) popup_mup_playback_window_t1

0xb03a,	// (0x000aef58) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x000b3405) popup_mup_playback_window_t

0xb071,	// (0x000aef8f) main_image_pane_g1_ParamLimits

0xb071,	// (0x000aef8f) main_image_pane_g1

0xb0b4,	// (0x000aefd2) scroll_pane_cp018_ParamLimits

0xb0b4,	// (0x000aefd2) scroll_pane_cp018

0xb0cc,	// (0x000aefea) scroll_pane_cp016_ParamLimits

0xb0cc,	// (0x000aefea) scroll_pane_cp016

0x314c,	// (0x000a706a) smil2_image_pane_ParamLimits

0x314c,	// (0x000a706a) smil2_image_pane

0x317c,	// (0x000a709a) smil2_root_pane_ParamLimits

0x317c,	// (0x000a709a) smil2_root_pane

0x31b4,	// (0x000a70d2) smil2_text_pane_ParamLimits

0x31b4,	// (0x000a70d2) smil2_text_pane

0x97a8,	// (0x000ad6c6) bg_list_pane_cp06

0xb108,	// (0x000af026) grid_radio_pane

0x97a8,	// (0x000ad6c6) bg_popup_window_pane_cp06

0xb110,	// (0x000af02e) main_fmradio_pane_t1

0xaa89,	// (0x000ae9a7) heading_pane_cp04

0xb11e,	// (0x000af03c) main_fmradio_pane_t2

0xc607,	// (0x000b0525) popup_cale_lunar_info_window_g1

0xb12c,	// (0x000af04a) main_fmradio_pane_t3

0xc60f,	// (0x000b052d) popup_cale_lunar_info_window_g2

0xb13a,	// (0x000af058) main_fmradio_pane_t4

0x0001,

0xb148,	// (0x000af066) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x000b34e0) popup_cale_lunar_info_window_g

0xf4fc,	// (0x000b341a) main_fmradio_pane_t

0xb156,	// (0x000af074) wait_bar_pane_cp03

0xb15e,	// (0x000af07c) cell_fmradio_pane_ParamLimits

0xb15e,	// (0x000af07c) cell_fmradio_pane

0xafb7,	// (0x000aeed5) cell_fmradio_pane_g1_ParamLimits

0xafb7,	// (0x000aeed5) cell_fmradio_pane_g1

0x97a8,	// (0x000ad6c6) grid_highlight_pane_cp011

0xb171,	// (0x000af08f) poc_content_pane_ParamLimits

0xb171,	// (0x000af08f) poc_content_pane

0xb183,	// (0x000af0a1) scroll_pane_cp019

0x3234,	// (0x000a7152) popup_call_poc_act_window_ParamLimits

0x3234,	// (0x000a7152) popup_call_poc_act_window

0x3258,	// (0x000a7176) popup_call_poc_inact_window_ParamLimits

0x3258,	// (0x000a7176) popup_call_poc_inact_window

0xf599,	// (0x000b34b7) bg_popup_call_poc_act_pane_g

0xc57f,	// (0x000b049d) bg_popup_call_poc_inact_pane_g1

0xc587,	// (0x000b04a5) bg_popup_call_poc_inact_pane_g2

0xb18b,	// (0x000af0a9) popup_call_poc_act_window_g2

0xc58f,	// (0x000b04ad) bg_popup_call_poc_inact_pane_g3

0xc597,	// (0x000b04b5) bg_popup_call_poc_inact_pane_g4

0xc59f,	// (0x000b04bd) bg_popup_call_poc_inact_pane_g5

0xb193,	// (0x000af0b1) popup_call_poc_act_window_t1_ParamLimits

0xb193,	// (0x000af0b1) popup_call_poc_act_window_t1

0xb1bb,	// (0x000af0d9) popup_call_poc_act_window_t2_ParamLimits

0xb1bb,	// (0x000af0d9) popup_call_poc_act_window_t2

0xb1e3,	// (0x000af101) popup_call_poc_act_window_t3_ParamLimits

0xb1e3,	// (0x000af101) popup_call_poc_act_window_t3

0xb20b,	// (0x000af129) popup_call_poc_act_window_t4_ParamLimits

0xb20b,	// (0x000af129) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x000b3425) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x000b3425) popup_call_poc_act_window_t

0xc5a7,	// (0x000b04c5) bg_popup_call_poc_inact_pane_g6

0xc5af,	// (0x000b04cd) bg_popup_call_poc_inact_pane_g7

0xc5b7,	// (0x000b04d5) bg_popup_call_poc_inact_pane_g8

0xb21d,	// (0x000af13b) popup_call_poc_inact_window_g2

0xc5bf,	// (0x000b04dd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x000b34a4) bg_popup_call_poc_inact_pane_g

0xb225,	// (0x000af143) popup_call_poc_inact_window_t1_ParamLimits

0xb225,	// (0x000af143) popup_call_poc_inact_window_t1

0xb23a,	// (0x000af158) popup_call_poc_inact_window_t2_ParamLimits

0xb23a,	// (0x000af158) popup_call_poc_inact_window_t2

0xb24f,	// (0x000af16d) popup_call_poc_inact_window_t3_ParamLimits

0xb24f,	// (0x000af16d) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x000b342e) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x000b342e) popup_call_poc_inact_window_t

0xc744,	// (0x000b0662) context_pane_ParamLimits

0x3a99,	// (0x000a79b7) signal_pane_ParamLimits

0xadfd,	// (0x000aed1b) main_call2_pane

0x9d1d,	// (0x000adc3b) popup_phob_thumbnail2_window_ParamLimits

0x9d1d,	// (0x000adc3b) popup_phob_thumbnail2_window

0x9cba,	// (0x000adbd8) aid_hotspot_pointer_arrow_pane

0x9cc2,	// (0x000adbe0) aid_hotspot_pointer_hand_pane

0x35a1,	// (0x000a74bf) phob_pre_status_pane_g5

0x10aa,	// (0x000a4fc8) cams_zoom_pane_ParamLimits

0x10b9,	// (0x000a4fd7) image_vga_pane_ParamLimits

0x10d3,	// (0x000a4ff1) main_camera_pane_g1_ParamLimits

0x10e5,	// (0x000a5003) main_camera_pane_g2_ParamLimits

0x10f5,	// (0x000a5013) main_camera_pane_g3_ParamLimits

0x1105,	// (0x000a5023) main_camera_pane_g4_ParamLimits

0x1115,	// (0x000a5033) main_camera_pane_g5_ParamLimits

0x1125,	// (0x000a5043) main_camera_pane_g6_ParamLimits

0x1137,	// (0x000a5055) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x000b312d) main_camera_pane_g_ParamLimits

0x1147,	// (0x000a5065) main_camera_pane_t1_ParamLimits

0x115d,	// (0x000a507b) main_camera_pane_t2_ParamLimits

0xf220,	// (0x000b313e) main_camera_pane_t_ParamLimits

0x9a03,	// (0x000ad921) bg_popup_preview_window_pane_cp01_ParamLimits

0x9a03,	// (0x000ad921) bg_popup_preview_window_pane_cp01

0xb264,	// (0x000af182) popup_phob_thumbnail2_window_g1_ParamLimits

0xb264,	// (0x000af182) popup_phob_thumbnail2_window_g1

0x97a8,	// (0x000ad6c6) call2_cli_visual_pane

0x328c,	// (0x000a71aa) popup_call2_audio_conf_window_ParamLimits

0x328c,	// (0x000a71aa) popup_call2_audio_conf_window

0x32ac,	// (0x000a71ca) popup_call2_audio_first_window_ParamLimits

0x32ac,	// (0x000a71ca) popup_call2_audio_first_window

0x3342,	// (0x000a7260) popup_call2_audio_in_window_ParamLimits

0x3342,	// (0x000a7260) popup_call2_audio_in_window

0x338a,	// (0x000a72a8) popup_call2_audio_out_window_ParamLimits

0x338a,	// (0x000a72a8) popup_call2_audio_out_window

0x33f4,	// (0x000a7312) popup_call2_audio_second_window_ParamLimits

0x33f4,	// (0x000a7312) popup_call2_audio_second_window

0x345a,	// (0x000a7378) popup_call2_audio_wait_window_ParamLimits

0x345a,	// (0x000a7378) popup_call2_audio_wait_window

0x97a8,	// (0x000ad6c6) bg_popup_call2_act_pane_cp03

0x99e5,	// (0x000ad903) list_conf_pane_cp

0xb270,	// (0x000af18e) popup_call2_audio_conf_window_t1

0xaae6,	// (0x000aea04) list_single_graphic_popup_conf2_pane_ParamLimits

0xaae6,	// (0x000aea04) list_single_graphic_popup_conf2_pane

0xaaf9,	// (0x000aea17) list_highlight_pane_cp04

0xb27e,	// (0x000af19c) list_single_graphic_popup_conf2_pane_g1

0xab0a,	// (0x000aea28) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x000b3435) list_single_graphic_popup_conf2_pane_g

0xb288,	// (0x000af1a6) list_single_graphic_popup_conf2_pane_t1

0xb296,	// (0x000af1b4) bg_popup_call2_act_pane_cp01_ParamLimits

0xb296,	// (0x000af1b4) bg_popup_call2_act_pane_cp01

0xb320,	// (0x000af23e) call_type_pane_cp05_ParamLimits

0xb320,	// (0x000af23e) call_type_pane_cp05

0xb374,	// (0x000af292) popup_call2_audio_second_window_g1_ParamLimits

0xb374,	// (0x000af292) popup_call2_audio_second_window_g1

0xb3c8,	// (0x000af2e6) popup_call2_audio_second_window_g2_ParamLimits

0xb3c8,	// (0x000af2e6) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x000b343a) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x000b343a) popup_call2_audio_second_window_g

0xb42d,	// (0x000af34b) popup_call2_audio_second_window_t1_ParamLimits

0xb42d,	// (0x000af34b) popup_call2_audio_second_window_t1

0xb4e8,	// (0x000af406) popup_call2_audio_second_window_t2_ParamLimits

0xb4e8,	// (0x000af406) popup_call2_audio_second_window_t2

0xb53b,	// (0x000af459) popup_call2_audio_second_window_t3_ParamLimits

0xb53b,	// (0x000af459) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x000b3441) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x000b3441) popup_call2_audio_second_window_t

0x97a8,	// (0x000ad6c6) bg_popup_call2_in_pane_cp02

0x97b2,	// (0x000ad6d0) call_type_pane_cp04

0x97ba,	// (0x000ad6d8) popup_call2_audio_wait_window_g1

0x97c2,	// (0x000ad6e0) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000b301a) popup_call2_audio_wait_window_g

0x97ca,	// (0x000ad6e8) popup_call2_audio_wait_window_t3

0xb62e,	// (0x000af54c) bg_popup_call2_act_pane_ParamLimits

0xb62e,	// (0x000af54c) bg_popup_call2_act_pane

0xb6ee,	// (0x000af60c) call_type_pane_cp03_ParamLimits

0xb6ee,	// (0x000af60c) call_type_pane_cp03

0xbc76,	// (0x000afb94) popup_call2_audio_first_window_g1_ParamLimits

0xbc76,	// (0x000afb94) popup_call2_audio_first_window_g1

0xbce6,	// (0x000afc04) popup_call2_audio_first_window_g2_ParamLimits

0xbce6,	// (0x000afc04) popup_call2_audio_first_window_g2

0xaebc,	// (0x000aedda) popup_call2_audio_first_window_g3_ParamLimits

0xaebc,	// (0x000aedda) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x000b344a) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x000b344a) popup_call2_audio_first_window_g

0xbdc4,	// (0x000afce2) popup_call2_audio_first_window_t1_ParamLimits

0xbdc4,	// (0x000afce2) popup_call2_audio_first_window_t1

0xbec7,	// (0x000afde5) popup_call2_audio_first_window_t4_ParamLimits

0xbec7,	// (0x000afde5) popup_call2_audio_first_window_t4

0xbfaa,	// (0x000afec8) popup_call2_audio_first_window_t5_ParamLimits

0xbfaa,	// (0x000afec8) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x000b3455) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x000b3455) popup_call2_audio_first_window_t

0x99fb,	// (0x000ad919) bg_popup_call2_act_pane_g1

0xc617,	// (0x000b0535) popup_cale_lunar_info_window_t1

0xc625,	// (0x000b0543) popup_cale_lunar_info_window_t2

0xc633,	// (0x000b0551) popup_cale_lunar_info_window_t3

0x97a8,	// (0x000ad6c6) bg_popup_call2_bubble_pane

0xc0ab,	// (0x000affc9) bg_popup_call2_in_pane_cp01_ParamLimits

0xc0ab,	// (0x000affc9) bg_popup_call2_in_pane_cp01

0xe428,	// (0x000b2346) call_type_pane_cp02

0xc0f3,	// (0x000b0011) popup_call2_audio_out_window_g1_ParamLimits

0xc0f3,	// (0x000b0011) popup_call2_audio_out_window_g1

0xc11f,	// (0x000b003d) popup_call2_audio_out_window_g2_ParamLimits

0xc11f,	// (0x000b003d) popup_call2_audio_out_window_g2

0xc147,	// (0x000b0065) popup_call2_audio_out_window_g3_ParamLimits

0xc147,	// (0x000b0065) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x000b345e) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x000b345e) popup_call2_audio_out_window_g

0xc182,	// (0x000b00a0) popup_call2_audio_out_window_t1_ParamLimits

0xc182,	// (0x000b00a0) popup_call2_audio_out_window_t1

0xc1e1,	// (0x000b00ff) popup_call2_audio_out_window_t2_ParamLimits

0xc1e1,	// (0x000b00ff) popup_call2_audio_out_window_t2

0xc235,	// (0x000b0153) popup_call2_audio_out_window_t3_ParamLimits

0xc235,	// (0x000b0153) popup_call2_audio_out_window_t3

0xc24b,	// (0x000b0169) popup_call2_audio_out_window_t4_ParamLimits

0xc24b,	// (0x000b0169) popup_call2_audio_out_window_t4

0xc261,	// (0x000b017f) popup_call2_audio_out_window_t5_ParamLimits

0xc261,	// (0x000b017f) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x000b3467) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x000b3467) popup_call2_audio_out_window_t

0xc2c5,	// (0x000b01e3) bg_popup_call2_in_pane_ParamLimits

0xc2c5,	// (0x000b01e3) bg_popup_call2_in_pane

0xc321,	// (0x000b023f) popup_call2_audio_in_window_g1_ParamLimits

0xc321,	// (0x000b023f) popup_call2_audio_in_window_g1

0xc359,	// (0x000b0277) popup_call2_audio_in_window_g2_ParamLimits

0xc359,	// (0x000b0277) popup_call2_audio_in_window_g2

0xc391,	// (0x000b02af) popup_call2_audio_in_window_g3_ParamLimits

0xc391,	// (0x000b02af) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x000b3474) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x000b3474) popup_call2_audio_in_window_g

0xc3e9,	// (0x000b0307) popup_call2_audio_in_window_t1_ParamLimits

0xc3e9,	// (0x000b0307) popup_call2_audio_in_window_t1

0xc469,	// (0x000b0387) popup_call2_audio_in_window_t2_ParamLimits

0xc469,	// (0x000b0387) popup_call2_audio_in_window_t2

0xc4e9,	// (0x000b0407) popup_call2_audio_in_window_t3_ParamLimits

0xc4e9,	// (0x000b0407) popup_call2_audio_in_window_t3

0xc503,	// (0x000b0421) popup_call2_audio_in_window_t4_ParamLimits

0xc503,	// (0x000b0421) popup_call2_audio_in_window_t4

0xc515,	// (0x000b0433) popup_call2_audio_in_window_t5_ParamLimits

0xc515,	// (0x000b0433) popup_call2_audio_in_window_t5

0xc52a,	// (0x000b0448) popup_call2_audio_in_window_t6_ParamLimits

0xc52a,	// (0x000b0448) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x000b347d) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x000b347d) popup_call2_audio_in_window_t

0x99fb,	// (0x000ad919) bg_popup_call2_in_pane_g1

0xc641,	// (0x000b055f) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x000b34e5) popup_cale_lunar_info_window_t

0x9a03,	// (0x000ad921) bg_popup_call2_rect_pane_ParamLimits

0x9a03,	// (0x000ad921) bg_popup_call2_rect_pane

0x97a8,	// (0x000ad6c6) call2_cli_visual_graphic_pane

0x97a8,	// (0x000ad6c6) call2_cli_visual_text_pane

0x9d44,	// (0x000adc62) smil_status_volume_pane_g3

0x0002,

0x9b63,	// (0x000ada81) call2_cli_visual_graphic_pane_g1

0x9b63,	// (0x000ada81) call2_cli_visual_graphic_pane_g2

0x9b63,	// (0x000ada81) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x000b348a) call2_cli_visual_graphic_pane_g

0xc53f,	// (0x000b045d) bg_popup_call2_rect_pane_g1

0xa2c6,	// (0x000ae1e4) bg_popup_call2_rect_pane_g2

0xc547,	// (0x000b0465) bg_popup_call2_rect_pane_g3

0xc54f,	// (0x000b046d) bg_popup_call2_rect_pane_g4

0xc557,	// (0x000b0475) bg_popup_call2_rect_pane_g5

0xc55f,	// (0x000b047d) bg_popup_call2_rect_pane_g6

0xc567,	// (0x000b0485) bg_popup_call2_rect_pane_g7

0xc56f,	// (0x000b048d) bg_popup_call2_rect_pane_g8

0xc577,	// (0x000b0495) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x000b3491) bg_popup_call2_rect_pane_g

0xc57f,	// (0x000b049d) bg_popup_call2_bubble_pane_g1

0xc587,	// (0x000b04a5) bg_popup_call2_bubble_pane_g2

0xc58f,	// (0x000b04ad) bg_popup_call2_bubble_pane_g3

0xc597,	// (0x000b04b5) bg_popup_call2_bubble_pane_g4

0xc59f,	// (0x000b04bd) bg_popup_call2_bubble_pane_g5

0xc5a7,	// (0x000b04c5) bg_popup_call2_bubble_pane_g6

0xc5af,	// (0x000b04cd) bg_popup_call2_bubble_pane_g7

0xc5b7,	// (0x000b04d5) bg_popup_call2_bubble_pane_g8

0xc5bf,	// (0x000b04dd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x000b34a4) bg_popup_call2_bubble_pane_g

0x0a3a,	// (0x000a4958) aid_cale_week_size_cell_pane

0x1173,	// (0x000a5091) aid_cams_cif_uncrop_pane_ParamLimits

0x1173,	// (0x000a5091) aid_cams_cif_uncrop_pane

0x1323,	// (0x000a5241) aid_cams_size_cell_ParamLimits

0x1323,	// (0x000a5241) aid_cams_size_cell

0x1337,	// (0x000a5255) grid_cams_pane_ParamLimits

0x1351,	// (0x000a526f) linegrid_cams_pane_ParamLimits

0x154e,	// (0x000a546c) call_video_pane_t1

0x156c,	// (0x000a548a) call_video_pane_t2

0x0001,

0xf273,	// (0x000b3191) call_video_pane_t

0x1998,	// (0x000a58b6) aid_cale_month_size_cell_pane_ParamLimits

0x1998,	// (0x000a58b6) aid_cale_month_size_cell_pane

0xf610,	// (0x000b352e) smil_status_volume_pane_g

0x9d51,	// (0x000adc6f) volume_smil_pane_ParamLimits

0x02bf,	// (0x000a41dd) aid_popup2_width_pane

0x0994,	// (0x000a48b2) cell_qdial_pane_g4_ParamLimits

0x0994,	// (0x000a48b2) cell_qdial_pane_g4

0x287d,	// (0x000a679b) aid_blid_cardinal_pane_ParamLimits

0x2889,	// (0x000a67a7) aid_blid_destination_pane_ParamLimits

0x2889,	// (0x000a67a7) aid_blid_destination_pane

0x9a03,	// (0x000ad921) bg_popup_call_poc_act_pane_ParamLimits

0x9a03,	// (0x000ad921) bg_popup_call_poc_act_pane

0x9a03,	// (0x000ad921) bg_popup_call_poc_inact_pane_ParamLimits

0x9a03,	// (0x000ad921) bg_popup_call_poc_inact_pane

0xc5c7,	// (0x000b04e5) bg_popup_call_poc_act_pane_g1

0xc5cf,	// (0x000b04ed) bg_popup_call_poc_act_pane_g2

0xc5d7,	// (0x000b04f5) bg_popup_call_poc_act_pane_g3

0xc597,	// (0x000b04b5) bg_popup_call_poc_act_pane_g4

0xc59f,	// (0x000b04bd) bg_popup_call_poc_act_pane_g5

0xc5df,	// (0x000b04fd) bg_popup_call_poc_act_pane_g6

0xc5af,	// (0x000b04cd) bg_popup_call_poc_act_pane_g7

0xc5e7,	// (0x000b0505) bg_popup_call_poc_act_pane_g8

0x97a8,	// (0x000ad6c6) main_usb_pane

0x9cf8,	// (0x000adc16) popup_cale_lunar_info_window

0x1844,	// (0x000a5762) im_reading_pane_t1_ParamLimits

0xa4a4,	// (0x000ae3c2) list_im_pane_ParamLimits

0xa4b5,	// (0x000ae3d3) scroll_pane_cp07_ParamLimits

0x97a8,	// (0x000ad6c6) grid_highlight_pane_cp012

0x9a03,	// (0x000ad921) mup_scale_pane_ParamLimits

0xafb7,	// (0x000aeed5) main_usb_pane_g1_ParamLimits

0xafb7,	// (0x000aeed5) main_usb_pane_g1

0x34b6,	// (0x000a73d4) main_usb_pane_g2_ParamLimits

0x34b6,	// (0x000a73d4) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x000b34ce) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x000b34ce) main_usb_pane_g

0x34cc,	// (0x000a73ea) main_usb_pane_t1_ParamLimits

0x34cc,	// (0x000a73ea) main_usb_pane_t1

0x34de,	// (0x000a73fc) main_usb_pane_t2_ParamLimits

0x34de,	// (0x000a73fc) main_usb_pane_t2

0x34f0,	// (0x000a740e) main_usb_pane_t3_ParamLimits

0x34f0,	// (0x000a740e) main_usb_pane_t3

0x3502,	// (0x000a7420) main_usb_pane_t4_ParamLimits

0x3502,	// (0x000a7420) main_usb_pane_t4

0x3514,	// (0x000a7432) main_usb_pane_t5_ParamLimits

0x3514,	// (0x000a7432) main_usb_pane_t5

0x3526,	// (0x000a7444) main_usb_pane_t6_ParamLimits

0x3526,	// (0x000a7444) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x000b34d3) main_usb_pane_t_ParamLimits

0x282c,	// (0x000a674a) aid_text_placing

0x2835,	// (0x000a6753) main_location2_pane_t1_ParamLimits

0x2847,	// (0x000a6765) main_location2_pane_t2_ParamLimits

0x2859,	// (0x000a6777) main_location2_pane_t3_ParamLimits

0x286b,	// (0x000a6789) main_location2_pane_t4_ParamLimits

0x286b,	// (0x000a6789) main_location2_pane_t4

0xf3d4,	// (0x000b32f2) main_location2_pane_t_ParamLimits

0x9a3f,	// (0x000ad95d) find_pinb_pane_g2_ParamLimits

0x9a3f,	// (0x000ad95d) find_pinb_pane_g2

0x0001,

0xf122,	// (0x000b3040) find_pinb_pane_g_ParamLimits

0xf122,	// (0x000b3040) find_pinb_pane_g

0x9a4b,	// (0x000ad969) find_pinb_pane_t1_ParamLimits

0x9a5d,	// (0x000ad97b) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x000b3045) find_pinb_pane_t_ParamLimits

0x97a8,	// (0x000ad6c6) main_call3_pane

0x1e57,	// (0x000a5d75) cale_month_day_heading_pane_t1_ParamLimits

0x1edd,	// (0x000a5dfb) cale_month_day_heading_pane_t2_ParamLimits

0x1f6e,	// (0x000a5e8c) cale_month_day_heading_pane_t3_ParamLimits

0x1fff,	// (0x000a5f1d) cale_month_day_heading_pane_t4_ParamLimits

0x2094,	// (0x000a5fb2) cale_month_day_heading_pane_t5_ParamLimits

0x2135,	// (0x000a6053) cale_month_day_heading_pane_t6_ParamLimits

0x21d6,	// (0x000a60f4) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x000b31c9) cale_month_day_heading_pane_t_ParamLimits

0xa6ff,	// (0x000ae61d) smil_status_volume_pane

0x2fb1,	// (0x000a6ecf) postcard_address_pane_ParamLimits

0x2fb1,	// (0x000a6ecf) postcard_address_pane

0x2fc3,	// (0x000a6ee1) postcard_message_pane_ParamLimits

0x2fc3,	// (0x000a6ee1) postcard_message_pane

0x3494,	// (0x000a73b2) call2_cli_visual_pane_t1_ParamLimits

0x3494,	// (0x000a73b2) call2_cli_visual_pane_t1

0x3cc6,	// (0x000a7be4) postcard_message_pane_t1_ParamLimits

0x3cc6,	// (0x000a7be4) postcard_message_pane_t1

0x3caf,	// (0x000a7bcd) postcard_address_pane_t1_ParamLimits

0x3caf,	// (0x000a7bcd) postcard_address_pane_t1

0x3c9b,	// (0x000a7bb9) popup_call3_audio_in_window_ParamLimits

0x3c9b,	// (0x000a7bb9) popup_call3_audio_in_window

0x3b26,	// (0x000a7a44) bg_popup_call3_in_pane_ParamLimits

0x3b26,	// (0x000a7a44) bg_popup_call3_in_pane

0x3b9c,	// (0x000a7aba) popup_call3_audio_in_window_g1_ParamLimits

0x3b9c,	// (0x000a7aba) popup_call3_audio_in_window_g1

0x3bbc,	// (0x000a7ada) popup_call3_audio_in_window_g2_ParamLimits

0x3bbc,	// (0x000a7ada) popup_call3_audio_in_window_g2

0x3bdc,	// (0x000a7afa) popup_call3_audio_in_window_g3_ParamLimits

0x3bdc,	// (0x000a7afa) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x000b3535) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x000b3535) popup_call3_audio_in_window_g

0x3c0d,	// (0x000a7b2b) popup_call3_audio_in_window_t1_ParamLimits

0x3c0d,	// (0x000a7b2b) popup_call3_audio_in_window_t1

0x3c4b,	// (0x000a7b69) popup_call3_audio_in_window_t2_ParamLimits

0x3c4b,	// (0x000a7b69) popup_call3_audio_in_window_t2

0x3c89,	// (0x000a7ba7) popup_call3_audio_in_window_t3_ParamLimits

0x3c89,	// (0x000a7ba7) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x000b353e) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x000b353e) popup_call3_audio_in_window_t

0xadfd,	// (0x000aed1b) bg_popup_call3_rect_pane

0xc53f,	// (0x000b045d) bg_popup_call3_rect_pane_g1

0xa2c6,	// (0x000ae1e4) bg_popup_call3_rect_pane_g2

0xc547,	// (0x000b0465) bg_popup_call3_rect_pane_g3

0xc54f,	// (0x000b046d) bg_popup_call3_rect_pane_g4

0xc557,	// (0x000b0475) bg_popup_call3_rect_pane_g5

0xc55f,	// (0x000b047d) bg_popup_call3_rect_pane_g6

0xc567,	// (0x000b0485) bg_popup_call3_rect_pane_g7

0x2b6d,	// (0x000a6a8b) mup_visualizer_osc_pane

0xaeca,	// (0x000aede8) mup_visualizer_spec_pane

0x3b56,	// (0x000a7a74) call3_video_qcif_pane_ParamLimits

0x3b56,	// (0x000a7a74) call3_video_qcif_pane

0x3b69,	// (0x000a7a87) call3_video_qcif_uncrop_pane_ParamLimits

0x3b69,	// (0x000a7a87) call3_video_qcif_uncrop_pane

0x3b77,	// (0x000a7a95) call3_video_subqcif_pane_ParamLimits

0x3b77,	// (0x000a7a95) call3_video_subqcif_pane

0x3b8b,	// (0x000a7aa9) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b8b,	// (0x000a7aa9) call3_video_subqcif_uncrop_pane

0x3bfc,	// (0x000a7b1a) popup_call3_audio_in_window_g4_ParamLimits

0x3bfc,	// (0x000a7b1a) popup_call3_audio_in_window_g4

0x3b15,	// (0x000a7a33) mup_spec_half_pane

0x3b1e,	// (0x000a7a3c) mup_spec_half_pane_cp

0xc7a4,	// (0x000b06c2) mup_osc_middle_pane

0xc7ad,	// (0x000b06cb) mup_visualizer_osc_pane_g1

0x3af5,	// (0x000a7a13) mup_spec_bar_pane_ParamLimits

0x3af5,	// (0x000a7a13) mup_spec_bar_pane

0xc791,	// (0x000b06af) mup_spec_bar_pane_g1

0xc79b,	// (0x000b06b9) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000b3529) mup_spec_bar_pane_g

0x0a3a,	// (0x000a4958) aid_cale_week_size_cell_pane_ParamLimits

0x0a54,	// (0x000a4972) bg_cale_heading_pane_ParamLimits

0xa303,	// (0x000ae221) bg_cale_pane_cp01_ParamLimits

0x0a6c,	// (0x000a498a) cale_week_corner_pane_ParamLimits

0x0a8b,	// (0x000a49a9) cale_week_day_heading_pane_ParamLimits

0x0aa8,	// (0x000a49c6) cale_week_scroll_pane_g1_ParamLimits

0x0abb,	// (0x000a49d9) cale_week_scroll_pane_g2_ParamLimits

0x0ad3,	// (0x000a49f1) cale_week_scroll_pane_g3_ParamLimits

0x0aeb,	// (0x000a4a09) cale_week_scroll_pane_g4_ParamLimits

0x0b03,	// (0x000a4a21) cale_week_scroll_pane_g5_ParamLimits

0x0b23,	// (0x000a4a41) cale_week_scroll_pane_g6_ParamLimits

0x0b43,	// (0x000a4a61) cale_week_scroll_pane_g7_ParamLimits

0x0b63,	// (0x000a4a81) cale_week_scroll_pane_g8_ParamLimits

0x0b87,	// (0x000a4aa5) cale_week_scroll_pane_g9_ParamLimits

0x0b9f,	// (0x000a4abd) cale_week_scroll_pane_g10_ParamLimits

0x0bb7,	// (0x000a4ad5) cale_week_scroll_pane_g11_ParamLimits

0x0bcf,	// (0x000a4aed) cale_week_scroll_pane_g12_ParamLimits

0x0be7,	// (0x000a4b05) cale_week_scroll_pane_g13_ParamLimits

0x0be7,	// (0x000a4b05) cale_week_scroll_pane_g14_ParamLimits

0x0be7,	// (0x000a4b05) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x000b30d1) cale_week_scroll_pane_g_ParamLimits

0x0bff,	// (0x000a4b1d) cale_week_time_pane_ParamLimits

0x0c23,	// (0x000a4b41) grid_cale_week_pane_ParamLimits

0xa321,	// (0x000ae23f) listscroll_cale_week_pane_t1

0xa333,	// (0x000ae251) scroll_pane_cp08_ParamLimits

0x19ed,	// (0x000a590b) cale_month_corner_pane_ParamLimits

0xa6d5,	// (0x000ae5f3) cale_month_pane_t1

0x1df5,	// (0x000a5d13) cale_month_week_pane_ParamLimits

0x2688,	// (0x000a65a6) popup_call_status_window_g1_ParamLimits

0x269c,	// (0x000a65ba) popup_call_status_window_g2_ParamLimits

0x26b0,	// (0x000a65ce) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x000b3279) popup_call_status_window_g_ParamLimits

0xaa79,	// (0x000ae997) aid_call2_pane

0x2de5,	// (0x000a6d03) msg_header_pane_g1

0x2fb1,	// (0x000a6ecf) postcard_address2_pane_ParamLimits

0x2fb1,	// (0x000a6ecf) postcard_address2_pane

0x2fc3,	// (0x000a6ee1) postcard_message2_pane_ParamLimits

0x2fc3,	// (0x000a6ee1) postcard_message2_pane

0x3aa7,	// (0x000a79c5) message2_row_pane_ParamLimits

0x3aa7,	// (0x000a79c5) message2_row_pane

0x3ac3,	// (0x000a79e1) address2_row_pane_ParamLimits

0x3ac3,	// (0x000a79e1) address2_row_pane

0xc75f,	// (0x000b067d) postcard_message2_row_pane_g1

0xc767,	// (0x000b0685) postcard_message2_row_pane_t1

0xc75f,	// (0x000b067d) address2_row_pane_g1

0xc767,	// (0x000b0685) address2_row_pane_t1

0x1016,	// (0x000a4f34) aid_size_cell_vorec

0x97a8,	// (0x000ad6c6) main_rss_pane

0x3ad6,	// (0x000a79f4) rss_list_single_pane_ParamLimits

0x3ad6,	// (0x000a79f4) rss_list_single_pane

0xc775,	// (0x000b0693) rss_list_single_pane_t1

0xc783,	// (0x000b06a1) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x000b3524) rss_list_single_pane_t

0x97a8,	// (0x000ad6c6) main_camera2_pane

0x97a8,	// (0x000ad6c6) main_video2_pane

0x3d3f,	// (0x000a7c5d) cams_zoom_pane_cp2_ParamLimits

0x3d3f,	// (0x000a7c5d) cams_zoom_pane_cp2

0x3d5f,	// (0x000a7c7d) image2_vga_pane_ParamLimits

0x3d5f,	// (0x000a7c7d) image2_vga_pane

0x3db0,	// (0x000a7cce) main_camera2_pane_g1_ParamLimits

0x3db0,	// (0x000a7cce) main_camera2_pane_g1

0x3dd0,	// (0x000a7cee) main_camera2_pane_g2_ParamLimits

0x3dd0,	// (0x000a7cee) main_camera2_pane_g2

0x3df0,	// (0x000a7d0e) main_camera2_pane_g3_ParamLimits

0x3df0,	// (0x000a7d0e) main_camera2_pane_g3

0x3e10,	// (0x000a7d2e) main_camera2_pane_g4_ParamLimits

0x3e10,	// (0x000a7d2e) main_camera2_pane_g4

0x3e30,	// (0x000a7d4e) main_camera2_pane_g5_ParamLimits

0x3e30,	// (0x000a7d4e) main_camera2_pane_g5

0x3e50,	// (0x000a7d6e) main_camera2_pane_g6_ParamLimits

0x3e50,	// (0x000a7d6e) main_camera2_pane_g6

0x3e70,	// (0x000a7d8e) main_camera2_pane_g7_ParamLimits

0x3e70,	// (0x000a7d8e) main_camera2_pane_g7

0x3e90,	// (0x000a7dae) main_camera2_pane_g8_ParamLimits

0x3e90,	// (0x000a7dae) main_camera2_pane_g8

0x0008,

0xf627,	// (0x000b3545) main_camera2_pane_g_ParamLimits

0xf627,	// (0x000b3545) main_camera2_pane_g

0x3ed0,	// (0x000a7dee) main_camera2_pane_t1_ParamLimits

0x3ed0,	// (0x000a7dee) main_camera2_pane_t1

0x3f05,	// (0x000a7e23) main_camera2_pane_t2_ParamLimits

0x3f05,	// (0x000a7e23) main_camera2_pane_t2

0x3f2b,	// (0x000a7e49) main_camera2_pane_t3_ParamLimits

0x3f2b,	// (0x000a7e49) main_camera2_pane_t3

0x3f89,	// (0x000a7ea7) main_camera2_pane_t4_ParamLimits

0x3f89,	// (0x000a7ea7) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x000b3558) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x000b3558) main_camera2_pane_t

0x401b,	// (0x000a7f39) cams_zoom_pane_cp4_ParamLimits

0x401b,	// (0x000a7f39) cams_zoom_pane_cp4

0x4031,	// (0x000a7f4f) image2_cif_pane_ParamLimits

0x4031,	// (0x000a7f4f) image2_cif_pane

0x405c,	// (0x000a7f7a) image2_subqcif_pane_ParamLimits

0x405c,	// (0x000a7f7a) image2_subqcif_pane

0x4076,	// (0x000a7f94) main_video2_pane_g1_ParamLimits

0x4076,	// (0x000a7f94) main_video2_pane_g1

0x4090,	// (0x000a7fae) main_video2_pane_g2_ParamLimits

0x4090,	// (0x000a7fae) main_video2_pane_g2

0x40a6,	// (0x000a7fc4) main_video2_pane_g3_ParamLimits

0x40a6,	// (0x000a7fc4) main_video2_pane_g3

0x40bc,	// (0x000a7fda) main_video2_pane_g4_ParamLimits

0x40bc,	// (0x000a7fda) main_video2_pane_g4

0x40d2,	// (0x000a7ff0) main_video2_pane_g5_ParamLimits

0x40d2,	// (0x000a7ff0) main_video2_pane_g5

0x40e8,	// (0x000a8006) main_video2_pane_g6_ParamLimits

0x40e8,	// (0x000a8006) main_video2_pane_g6

0x0005,

0xf649,	// (0x000b3567) main_video2_pane_g_ParamLimits

0xf649,	// (0x000b3567) main_video2_pane_g

0x4102,	// (0x000a8020) main_video2_pane_t1_ParamLimits

0x4102,	// (0x000a8020) main_video2_pane_t1

0x4126,	// (0x000a8044) main_video2_pane_t2_ParamLimits

0x4126,	// (0x000a8044) main_video2_pane_t2

0x4174,	// (0x000a8092) main_video2_pane_t3_ParamLimits

0x4174,	// (0x000a8092) main_video2_pane_t3

0x0002,

0xf656,	// (0x000b3574) main_video2_pane_t_ParamLimits

0xf656,	// (0x000b3574) main_video2_pane_t

0x35e1,	// (0x000a74ff) call_muted_g2

0x0001,

0xf5f8,	// (0x000b3516) call_muted_g

0x97a8,	// (0x000ad6c6) main_mup2_pane

0x41b8,	// (0x000a80d6) main_mup2_pane_g1_ParamLimits

0x41b8,	// (0x000a80d6) main_mup2_pane_g1

0x41c4,	// (0x000a80e2) main_mup2_pane_g2_ParamLimits

0x41c4,	// (0x000a80e2) main_mup2_pane_g2

0x9dbf,	// (0x000adcdd) main_mup_pane_g13_cp1

0x9dc7,	// (0x000adce5) mup_volume_pane_cp1

0x41e0,	// (0x000a80fe) main_mup2_pane_g4_ParamLimits

0x41e0,	// (0x000a80fe) main_mup2_pane_g4

0x41f2,	// (0x000a8110) main_mup2_pane_g5_ParamLimits

0x41f2,	// (0x000a8110) main_mup2_pane_g5

0x4204,	// (0x000a8122) main_mup2_pane_g6_ParamLimits

0x4204,	// (0x000a8122) main_mup2_pane_g6

0x4216,	// (0x000a8134) main_mup2_pane_g7_ParamLimits

0x4216,	// (0x000a8134) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x000b357b) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x000b357b) main_mup2_pane_g

0x422e,	// (0x000a814c) main_mup2_pane_t1_ParamLimits

0x422e,	// (0x000a814c) main_mup2_pane_t1

0x4244,	// (0x000a8162) main_mup2_pane_t2_ParamLimits

0x4244,	// (0x000a8162) main_mup2_pane_t2

0x425a,	// (0x000a8178) main_mup2_pane_t3_ParamLimits

0x425a,	// (0x000a8178) main_mup2_pane_t3

0x4270,	// (0x000a818e) main_mup2_pane_t4_ParamLimits

0x4270,	// (0x000a818e) main_mup2_pane_t4

0x4288,	// (0x000a81a6) main_mup2_pane_t5_ParamLimits

0x4288,	// (0x000a81a6) main_mup2_pane_t5

0x42a0,	// (0x000a81be) main_mup2_pane_t6_ParamLimits

0x42a0,	// (0x000a81be) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x000b358a) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x000b358a) main_mup2_pane_t

0x42d0,	// (0x000a81ee) mup2_visualizer_pane_ParamLimits

0x42d0,	// (0x000a81ee) mup2_visualizer_pane

0x42fe,	// (0x000a821c) mup_progress_pane_cp_ParamLimits

0x42fe,	// (0x000a821c) mup_progress_pane_cp

0x9daa,	// (0x000adcc8) mup_volume_pane_cp_ParamLimits

0x9daa,	// (0x000adcc8) mup_volume_pane_cp

0x4312,	// (0x000a8230) mup2_visualizer_pane_g1_ParamLimits

0x4312,	// (0x000a8230) mup2_visualizer_pane_g1

0xc7e4,	// (0x000b0702) mup2_visualizer_pane_g2_ParamLimits

0xc7e4,	// (0x000b0702) mup2_visualizer_pane_g2

0x4329,	// (0x000a8247) mup2_visualizer_pane_g3_ParamLimits

0x4329,	// (0x000a8247) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x000b3597) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x000b3597) mup2_visualizer_pane_g

0xb100,	// (0x000af01e) aid_size_cell_fmradio

0x3793,	// (0x000a76b1) aid_height_parent_landcape

0xa533,	// (0x000ae451) wml_content_pane_cp

0xa53b,	// (0x000ae459) wml_tabs_pane

0xa544,	// (0x000ae462) popup_wml_miniature_window

0xa54c,	// (0x000ae46a) scroll_pane_cp021

0xa560,	// (0x000ae47e) wml_content_pane_comp8

0x97a8,	// (0x000ad6c6) bg_popup_sub_pane_cp05

0xc802,	// (0x000b0720) popup_wml_miniature_window_g1

0xc80a,	// (0x000b0728) wml_miniature_view_pane

0x4335,	// (0x000a8253) aid_size_wml_view

0x433d,	// (0x000a825b) wml_miniature_view_pane_g1

0x4346,	// (0x000a8264) wml_miniature_view_pane_g2

0x434f,	// (0x000a826d) wml_miniature_view_pane_g3

0x4357,	// (0x000a8275) wml_miniature_view_pane_g4

0x435f,	// (0x000a827d) wml_miniature_view_pane_g5

0x4367,	// (0x000a8285) wml_miniature_view_pane_g6

0x436f,	// (0x000a828d) wml_miniature_view_pane_g7

0x4377,	// (0x000a8295) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x000b359e) wml_miniature_view_pane_g

0xc812,	// (0x000b0730) background_graphic_ParamLimits

0xc812,	// (0x000b0730) background_graphic

0xc81e,	// (0x000b073c) wml_tabs_2_pane

0xc827,	// (0x000b0745) wml_tabs_3_pane_ParamLimits

0xc827,	// (0x000b0745) wml_tabs_3_pane

0xc839,	// (0x000b0757) wml_tabs_4_pane_ParamLimits

0xc839,	// (0x000b0757) wml_tabs_4_pane

0xc84f,	// (0x000b076d) wml_tabs_5_pane_ParamLimits

0xc84f,	// (0x000b076d) wml_tabs_5_pane

0xc869,	// (0x000b0787) wml_tabs_pane_g2_ParamLimits

0xc869,	// (0x000b0787) wml_tabs_pane_g2

0xc87d,	// (0x000b079b) wml_tabs_pane_g3_ParamLimits

0xc87d,	// (0x000b079b) wml_tabs_pane_g3

0x437f,	// (0x000a829d) wml_tabs_2_active_pane_ParamLimits

0x437f,	// (0x000a829d) wml_tabs_2_active_pane

0x4393,	// (0x000a82b1) wml_tabs_2_passive_pane_ParamLimits

0x4393,	// (0x000a82b1) wml_tabs_2_passive_pane

0x43a7,	// (0x000a82c5) wml_tabs_3_active_pane_cp_ParamLimits

0x43a7,	// (0x000a82c5) wml_tabs_3_active_pane_cp

0x43bc,	// (0x000a82da) wml_tabs_3_passive_pane_ParamLimits

0x43bc,	// (0x000a82da) wml_tabs_3_passive_pane

0x43cf,	// (0x000a82ed) wml_tabs_3_passive_pane_cp_ParamLimits

0x43cf,	// (0x000a82ed) wml_tabs_3_passive_pane_cp

0x43e6,	// (0x000a8304) tabs_4_active_pane

0x43ee,	// (0x000a830c) tabs_4_passive_pane

0x43f8,	// (0x000a8316) tabs_4_passive_pane_cp

0x4400,	// (0x000a831e) tabs_4_passive_pane_cp2

0x34ae,	// (0x000a73cc) aid_height_text

0x2b43,	// (0x000a6a61) mup_volume_cont_pane_ParamLimits

0x2b43,	// (0x000a6a61) mup_volume_cont_pane

0x0618,	// (0x000a4536) aid_size_cell_pinb

0x0622,	// (0x000a4540) aid_size_list_pinb

0x42ea,	// (0x000a8208) mup2_volume_cont_pane_ParamLimits

0x42ea,	// (0x000a8208) mup2_volume_cont_pane

0x9d96,	// (0x000adcb4) mup2_volume_cont_pane_g1_ParamLimits

0x9d96,	// (0x000adcb4) mup2_volume_cont_pane_g1

0x02cb,	// (0x000a41e9) aid_size_cell_touch_ParamLimits

0x02cb,	// (0x000a41e9) aid_size_cell_touch

0x0508,	// (0x000a4426) touch_pane_ParamLimits

0x0508,	// (0x000a4426) touch_pane

0x95f3,	// (0x000ad511) main_rss2_pane

0xc89a,	// (0x000b07b8) listscroll_rss2_pane

0xc8a3,	// (0x000b07c1) rss2_navigation_pane

0xc8ab,	// (0x000b07c9) list_rss2_pane

0xabbc,	// (0x000aeada) scroll_pane_cp22

0xc8b3,	// (0x000b07d1) rss2_navigation_pane_g1

0xc8bc,	// (0x000b07da) rss2_navigation_pane_g2

0xc8c4,	// (0x000b07e2) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x000b35af) rss2_navigation_pane_g

0xc8cc,	// (0x000b07ea) rss2_navigation_pane_t1

0x440a,	// (0x000a8328) rss2_list_single_pane_ParamLimits

0x440a,	// (0x000a8328) rss2_list_single_pane

0xc8da,	// (0x000b07f8) rss2_list_single_pane_t2

0xc8e8,	// (0x000b0806) rss2_list_single_pane_t3_ParamLimits

0xc8e8,	// (0x000b0806) rss2_list_single_pane_t3

0xc905,	// (0x000b0823) rss2_list_single_pane_t4

0x2492,	// (0x000a63b0) smil_status_pane_g1

0x95e5,	// (0x000ad503) main_image2_pane_ParamLimits

0x95e5,	// (0x000ad503) main_image2_pane

0x3eb0,	// (0x000a7dce) main_camera2_pane_g9_ParamLimits

0x3eb0,	// (0x000a7dce) main_camera2_pane_g9

0x3fde,	// (0x000a7efc) main_camera2_pane_t5_ParamLimits

0x3fde,	// (0x000a7efc) main_camera2_pane_t5

0x9d66,	// (0x000adc84) main_camera2_pane_t6_ParamLimits

0x9d66,	// (0x000adc84) main_camera2_pane_t6

0x441f,	// (0x000a833d) main_image2_pane_g1_ParamLimits

0x441f,	// (0x000a833d) main_image2_pane_g1

0x31ea,	// (0x000a7108) smil2_video_pane_ParamLimits

0x31ea,	// (0x000a7108) smil2_video_pane

0x959b,	// (0x000ad4b9) aid_zoom_text_primary_cp

0x95db,	// (0x000ad4f9) popup_preview_fixed_window

0xa49c,	// (0x000ae3ba) im_reading_pane_g1

0x3d27,	// (0x000a7c45) cams2_bc_adjust_pane_cp_ParamLimits

0x3d27,	// (0x000a7c45) cams2_bc_adjust_pane_cp

0x400d,	// (0x000a7f2b) cams2_bc_adjust_pane_ParamLimits

0x400d,	// (0x000a7f2b) cams2_bc_adjust_pane

0xd64b,	// (0x000b1569) cams2_bc_adjust_pane_g1

0x9dcf,	// (0x000adced) cams2_slider_pane

0x9dd8,	// (0x000adcf6) cams2_slider_pane_g1

0x9de1,	// (0x000adcff) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x000b35b6) cams2_slider_pane_g

0x0710,	// (0x000a462e) calc_display_pane_ParamLimits

0x0738,	// (0x000a4656) calc_paper_pane_ParamLimits

0x075b,	// (0x000a4679) grid_calc_pane_ParamLimits

0x9c8b,	// (0x000adba9) popup_clock_digital_window_t1_ParamLimits

0xb09d,	// (0x000aefbb) main_image_pane_t1

0x06f2,	// (0x000a4610) aid_size_cell_calc_ParamLimits

0x06f2,	// (0x000a4610) aid_size_cell_calc

0x37eb,	// (0x000a7709) popup_blid_sat_info2_window_ParamLimits

0x37eb,	// (0x000a7709) popup_blid_sat_info2_window

0xc91b,	// (0x000b0839) aid_size_cell_blid

0xc923,	// (0x000b0841) bg_popup_window_pane_cp07

0xc946,	// (0x000b0864) grid_popup_blid_pane

0xc959,	// (0x000b0877) heading_pane_cp05_ParamLimits

0xc959,	// (0x000b0877) heading_pane_cp05

0xca23,	// (0x000b0941) cell_popup_blid_pane_ParamLimits

0xca23,	// (0x000b0941) cell_popup_blid_pane

0xca47,	// (0x000b0965) cell_popup_blid_pane_g1

0xca4f,	// (0x000b096d) cell_popup_blid_pane_t1

0x42ba,	// (0x000a81d8) mup2_indicator_pane_ParamLimits

0x42ba,	// (0x000a81d8) mup2_indicator_pane

0xadfd,	// (0x000aed1b) mup2_visualizer_osc_pane

0xc7f0,	// (0x000b070e) mup2_visualizer_spec_pane_ParamLimits

0xc7f0,	// (0x000b070e) mup2_visualizer_spec_pane

0x4435,	// (0x000a8353) mup2_spec_half_pane

0x443e,	// (0x000a835c) mup2_spec_half_pane_cp

0x4446,	// (0x000a8364) mup2_spec_bar_pane_ParamLimits

0x4446,	// (0x000a8364) mup2_spec_bar_pane

0xc791,	// (0x000b06af) mup2_spec_bar_pane_g1

0xc79b,	// (0x000b06b9) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000b3529) mup2_spec_bar_pane_g

0x4466,	// (0x000a8384) mup2_osc_middle_pane

0xc7ad,	// (0x000b06cb) mup2_visualizer_osc_pane_g1

0xe359,	// (0x000b2277) popup_number_entry_window_t1_ParamLimits

0xe36c,	// (0x000b228a) popup_number_entry_window_t2_ParamLimits

0xe37e,	// (0x000b229c) popup_number_entry_window_t3_ParamLimits

0x055a,	// (0x000a4478) popup_number_entry_window_t5_ParamLimits

0x055a,	// (0x000a4478) popup_number_entry_window_t5

0xf0cd,	// (0x000b2feb) popup_number_entry_window_t_ParamLimits

0xe390,	// (0x000b22ae) text_title_cp2_ParamLimits

0x9cca,	// (0x000adbe8) aid_hotspot_pointer_text2_pane

0x9ce4,	// (0x000adc02) main_viewer_pane_g9_ParamLimits

0x9ce4,	// (0x000adc02) main_viewer_pane_g9

0xa6d5,	// (0x000ae5f3) cale_month_pane_t1_ParamLimits

0xa712,	// (0x000ae630) bg_cale_pane_ParamLimits

0xa72a,	// (0x000ae648) list_cale_pane_ParamLimits

0xa73b,	// (0x000ae659) listscroll_cale_day_pane_t1

0xa74d,	// (0x000ae66b) scroll_pane_cp09_ParamLimits

0x2b75,	// (0x000a6a93) main_mup_eq_pane_t1_ParamLimits

0x2b75,	// (0x000a6a93) main_mup_eq_pane_t1

0x2b8f,	// (0x000a6aad) main_mup_eq_pane_t2_ParamLimits

0x2b8f,	// (0x000a6aad) main_mup_eq_pane_t2

0x2ba9,	// (0x000a6ac7) main_mup_eq_pane_t3_ParamLimits

0x2ba9,	// (0x000a6ac7) main_mup_eq_pane_t3

0x2bc5,	// (0x000a6ae3) main_mup_eq_pane_t4_ParamLimits

0x2bc5,	// (0x000a6ae3) main_mup_eq_pane_t4

0x2be1,	// (0x000a6aff) main_mup_eq_pane_t5_ParamLimits

0x2be1,	// (0x000a6aff) main_mup_eq_pane_t5

0x2bfd,	// (0x000a6b1b) main_mup_eq_pane_t6_ParamLimits

0x2bfd,	// (0x000a6b1b) main_mup_eq_pane_t6

0x2c11,	// (0x000a6b2f) main_mup_eq_pane_t7_ParamLimits

0x2c11,	// (0x000a6b2f) main_mup_eq_pane_t7

0x2c25,	// (0x000a6b43) main_mup_eq_pane_t8_ParamLimits

0x2c25,	// (0x000a6b43) main_mup_eq_pane_t8

0x2c39,	// (0x000a6b57) main_mup_eq_pane_t9_ParamLimits

0x2c39,	// (0x000a6b57) main_mup_eq_pane_t9

0x2c53,	// (0x000a6b71) main_mup_eq_pane_t10_ParamLimits

0x2c53,	// (0x000a6b71) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x000b3378) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x000b3378) main_mup_eq_pane_t

0x2d02,	// (0x000a6c20) mup_equalizer_pane_cp5_ParamLimits

0x2d16,	// (0x000a6c34) mup_equalizer_pane_cp6_ParamLimits

0x2d2a,	// (0x000a6c48) mup_equalizer_pane_cp7_ParamLimits

0x95f3,	// (0x000ad511) main_gallery_pane

0xc7b6,	// (0x000b06d4) smil2_volume_pane

0xc7be,	// (0x000b06dc) smil_status_volume_pane_g1_ParamLimits

0xc7d1,	// (0x000b06ef) smil_status_volume_pane_g2_ParamLimits

0x9d44,	// (0x000adc62) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x000b352e) smil_status_volume_pane_g_ParamLimits

0xc923,	// (0x000b0841) bg_popup_window_pane_cp07_ParamLimits

0xc931,	// (0x000b084f) blid_firmament_pane

0x446f,	// (0x000a838d) aid_size_cell_gallery_ParamLimits

0x446f,	// (0x000a838d) aid_size_cell_gallery

0x4485,	// (0x000a83a3) grid_gallery_pane_ParamLimits

0x4485,	// (0x000a83a3) grid_gallery_pane

0x449e,	// (0x000a83bc) cell_gallery_pane_ParamLimits

0x449e,	// (0x000a83bc) cell_gallery_pane

0xca5d,	// (0x000b097b) bg_cell_gallery_focus_pane_ParamLimits

0xca5d,	// (0x000b097b) bg_cell_gallery_focus_pane

0xca6f,	// (0x000b098d) cell_gallery_pane_g1_ParamLimits

0xca6f,	// (0x000b098d) cell_gallery_pane_g1

0x44e7,	// (0x000a8405) cell_gallery_pane_g2_ParamLimits

0x44e7,	// (0x000a8405) cell_gallery_pane_g2

0x44f4,	// (0x000a8412) cell_gallery_pane_g3_ParamLimits

0x44f4,	// (0x000a8412) cell_gallery_pane_g3

0xca7b,	// (0x000b0999) cell_gallery_pane_g4_ParamLimits

0xca7b,	// (0x000b0999) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x000b35dc) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x000b35dc) cell_gallery_pane_g

0xca87,	// (0x000b09a5) bg_cell_gallery_focus_pane_g1

0xca8f,	// (0x000b09ad) bg_cell_gallery_focus_pane_g2

0xca97,	// (0x000b09b5) bg_cell_gallery_focus_pane_g3

0xca9f,	// (0x000b09bd) bg_cell_gallery_focus_pane_g4

0xcaa7,	// (0x000b09c5) bg_cell_gallery_focus_pane_g5

0xcaaf,	// (0x000b09cd) bg_cell_gallery_focus_pane_g6

0xcab7,	// (0x000b09d5) bg_cell_gallery_focus_pane_g7

0xcabf,	// (0x000b09dd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x000b35e5) bg_cell_gallery_focus_pane_g

0xcac7,	// (0x000b09e5) aid_firma_cardinal

0xcadb,	// (0x000b09f9) blid_firmament_pane_t1

0xcaf2,	// (0x000b0a10) blid_firmament_pane_t2

0xcb09,	// (0x000b0a27) blid_firmament_pane_t3

0xcb20,	// (0x000b0a3e) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x000b35f6) blid_firmament_pane_t

0xcb37,	// (0x000b0a55) blid_sat_info_pane

0xcb47,	// (0x000b0a65) blid_sat_info_pane_g1

0xcb47,	// (0x000b0a65) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x000b35ff) blid_sat_info_pane_g

0xcb51,	// (0x000b0a6f) blid_sat_info_pane_t1

0xcb5f,	// (0x000b0a7d) smil2_volume_content_pane

0xcb68,	// (0x000b0a86) smil2_volume_pane_g1

0xc950,	// (0x000b086e) smil2_volume_content_pane_g1

0xcb70,	// (0x000b0a8e) smil2_volume_content_pane_g2

0xcb79,	// (0x000b0a97) smil2_volume_content_pane_g3

0xcb82,	// (0x000b0aa0) smil2_volume_content_pane_g4

0xcb8b,	// (0x000b0aa9) smil2_volume_content_pane_g5

0xcb94,	// (0x000b0ab2) smil2_volume_content_pane_g6

0xcb9d,	// (0x000b0abb) smil2_volume_content_pane_g7

0xcba6,	// (0x000b0ac4) smil2_volume_content_pane_g8

0xcbaf,	// (0x000b0acd) smil2_volume_content_pane_g9

0xcbb8,	// (0x000b0ad6) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x000b3604) smil2_volume_content_pane_g

0x0cd7,	// (0x000a4bf5) cale_week_day_heading_pane_t1_ParamLimits

0x0d1c,	// (0x000a4c3a) cale_week_day_heading_pane_t2_ParamLimits

0x0d66,	// (0x000a4c84) cale_week_day_heading_pane_t3_ParamLimits

0x0db0,	// (0x000a4cce) cale_week_day_heading_pane_t4_ParamLimits

0x0dfa,	// (0x000a4d18) cale_week_day_heading_pane_t5_ParamLimits

0x0e4c,	// (0x000a4d6a) cale_week_day_heading_pane_t6_ParamLimits

0x0e9e,	// (0x000a4dbc) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x000b30f0) cale_week_day_heading_pane_t_ParamLimits

0xa350,	// (0x000ae26e) bg_cale_side_pane_ParamLimits

0x0ee3,	// (0x000a4e01) cale_week_time_pane_t1_ParamLimits

0x0efd,	// (0x000a4e1b) cale_week_time_pane_t2_ParamLimits

0x0f17,	// (0x000a4e35) cale_week_time_pane_t3_ParamLimits

0x0f31,	// (0x000a4e4f) cale_week_time_pane_t4_ParamLimits

0x0f4b,	// (0x000a4e69) cale_week_time_pane_t5_ParamLimits

0x0f65,	// (0x000a4e83) cale_week_time_pane_t6_ParamLimits

0x0f7f,	// (0x000a4e9d) cale_week_time_pane_t7_ParamLimits

0x0f99,	// (0x000a4eb7) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x000b30ff) cale_week_time_pane_t_ParamLimits

0x0fb9,	// (0x000a4ed7) cell_cale_week_pane_g2_ParamLimits

0xa350,	// (0x000ae26e) bg_cale_side_pane_cp01_ParamLimits

0x227f,	// (0x000a619d) cale_month_week_pane_t1_ParamLimits

0x2298,	// (0x000a61b6) cale_month_week_pane_t2_ParamLimits

0x22b1,	// (0x000a61cf) cale_month_week_pane_t3_ParamLimits

0x22ca,	// (0x000a61e8) cale_month_week_pane_t4_ParamLimits

0x22e3,	// (0x000a6201) cale_month_week_pane_t5_ParamLimits

0x22fc,	// (0x000a621a) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x000b31d8) cale_month_week_pane_t_ParamLimits

0x9c07,	// (0x000adb25) cell_cale_month_pane_g1_ParamLimits

0x95f3,	// (0x000ad511) main_cale_event_viewer_pane

0xe32f,	// (0x000b224d) listscroll_cale_event_viewer_pane

0xcbc1,	// (0x000b0adf) list_cale_ev_pane

0xcbc9,	// (0x000b0ae7) scroll_pane_cp023

0xcbd5,	// (0x000b0af3) field_cale_ev_pane_ParamLimits

0xcbd5,	// (0x000b0af3) field_cale_ev_pane

0xcbf3,	// (0x000b0b11) field_cale_ev_content_pane_ParamLimits

0xcbf3,	// (0x000b0b11) field_cale_ev_content_pane

0xcbff,	// (0x000b0b1d) field_cale_ev_pane_g1_ParamLimits

0xcbff,	// (0x000b0b1d) field_cale_ev_pane_g1

0xcc0b,	// (0x000b0b29) field_cale_ev_pane_g2_ParamLimits

0xcc0b,	// (0x000b0b29) field_cale_ev_pane_g2

0xcc23,	// (0x000b0b41) field_cale_ev_pane_g3_ParamLimits

0xcc23,	// (0x000b0b41) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x000b3619) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x000b3619) field_cale_ev_pane_g

0xcc3b,	// (0x000b0b59) field_cale_ev_pane_t1_ParamLimits

0xcc3b,	// (0x000b0b59) field_cale_ev_pane_t1

0xcc52,	// (0x000b0b70) field_cale_ev_content_pane_t1_ParamLimits

0xcc52,	// (0x000b0b70) field_cale_ev_content_pane_t1

0x2dda,	// (0x000a6cf8) bg_button_pane_cp01

0x0a28,	// (0x000a4946) listscroll_cale_week_pane_ParamLimits

0xa2fa,	// (0x000ae218) popup_toolbar_window_cp01

0xa321,	// (0x000ae23f) listscroll_cale_week_pane_t1_ParamLimits

0x0a28,	// (0x000a4946) listscroll_cale_day_pane_ParamLimits

0xa2fa,	// (0x000ae218) popup_toolbar_window_cp02

0xa73b,	// (0x000ae659) listscroll_cale_day_pane_t1_ParamLimits

0x37b1,	// (0x000a76cf) main_cale_month_pane_ParamLimits

0x9d2f,	// (0x000adc4d) popup_toolbar_window_cp03_ParamLimits

0x9d2f,	// (0x000adc4d) popup_toolbar_window_cp03

0x30b2,	// (0x000a6fd0) main_image_pane_g2_ParamLimits

0x30b2,	// (0x000a6fd0) main_image_pane_g2

0x30c3,	// (0x000a6fe1) main_image_pane_g3_ParamLimits

0x30c3,	// (0x000a6fe1) main_image_pane_g3

0x0002,

0xf4ec,	// (0x000b340a) main_image_pane_g_ParamLimits

0xf4ec,	// (0x000b340a) main_image_pane_g

0xb09d,	// (0x000aefbb) main_image_pane_t1_ParamLimits

0x30d4,	// (0x000a6ff2) main_image_pane_t2_ParamLimits

0x30d4,	// (0x000a6ff2) main_image_pane_t2

0x30e6,	// (0x000a7004) main_image_pane_t3_ParamLimits

0x30e6,	// (0x000a7004) main_image_pane_t3

0x310e,	// (0x000a702c) main_image_pane_t4_ParamLimits

0x310e,	// (0x000a702c) main_image_pane_t4

0x0003,

0xf4f3,	// (0x000b3411) main_image_pane_t_ParamLimits

0xf4f3,	// (0x000b3411) main_image_pane_t

0x312e,	// (0x000a704c) popup_image_details_window_cp01

0x3138,	// (0x000a7056) popup_toobar_trans_pane_cp01_ParamLimits

0x3138,	// (0x000a7056) popup_toobar_trans_pane_cp01

0x38ca,	// (0x000a77e8) popup_image_details_window_ParamLimits

0x38ca,	// (0x000a77e8) popup_image_details_window

0x9d02,	// (0x000adc20) popup_image_focus_window

0x3ce1,	// (0x000a7bff) camera2_autofocus_pane_ParamLimits

0x3ce1,	// (0x000a7bff) camera2_autofocus_pane

0xe32f,	// (0x000b224d) bg_popup_sub_pane_cp06

0xcc70,	// (0x000b0b8e) popup_image_focus_window_g1

0xcc78,	// (0x000b0b96) popup_image_focus_window_g2

0xcc80,	// (0x000b0b9e) popup_image_focus_window_g3

0xcc88,	// (0x000b0ba6) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x000b3620) popup_image_focus_window_g

0xcc90,	// (0x000b0bae) popup_image_focus_window_t1

0xcc9e,	// (0x000b0bbc) popup_image_focus_window_t2

0xccae,	// (0x000b0bcc) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x000b3629) popup_image_focus_window_t

0xccbc,	// (0x000b0bda) camera2_autofocus_pane_g1

0xb752,	// (0x000af670) bg_tb_trans_pane_cp01

0xccca,	// (0x000b0be8) popup_image_details_window_g1

0xccdd,	// (0x000b0bfb) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x000b363b) popup_image_details_window_g

0xcd06,	// (0x000b0c24) popup_image_details_window_t1

0xcd18,	// (0x000b0c36) popup_image_details_window_t2

0xcd31,	// (0x000b0c4f) popup_image_details_window_t3

0xcd45,	// (0x000b0c63) popup_image_details_window_t4

0xcd60,	// (0x000b0c7e) popup_image_details_window_t5

0x0004,

0xf724,	// (0x000b3642) popup_image_details_window_t

0x9abc,	// (0x000ad9da) bg_calc_paper_pane_ParamLimits

0x95f3,	// (0x000ad511) grid_highlight_pane_cp013

0x9ad0,	// (0x000ad9ee) list_calc_pane_ParamLimits

0x9ae2,	// (0x000ada00) scroll_pane_cp024

0x9aea,	// (0x000ada08) bg_calc_display_pane_ParamLimits

0x0859,	// (0x000a4777) calc_display_pane_t1_ParamLimits

0x086b,	// (0x000a4789) calc_display_pane_t2_ParamLimits

0x9af6,	// (0x000ada14) calc_display_pane_t3_ParamLimits

0xf154,	// (0x000b3072) calc_display_pane_t_ParamLimits

0x0925,	// (0x000a4843) cell_calc_pane_g2

0x0001,

0xf171,	// (0x000b308f) cell_calc_pane_g

0x092e,	// (0x000a484c) cell_calc_pane_t1

0x9b6d,	// (0x000ada8b) grid_highlight_pane_cp02_ParamLimits

0x9b83,	// (0x000adaa1) toolbar_button_pane_cp01_ParamLimits

0x9b83,	// (0x000adaa1) toolbar_button_pane_cp01

0xb0e2,	// (0x000af000) temp_image_control_pane_ParamLimits

0xb0e2,	// (0x000af000) temp_image_control_pane

0x95e5,	// (0x000ad503) main_mp3_pane

0xcd7a,	// (0x000b0c98) temp_image_control_pane_g1_ParamLimits

0xcd7a,	// (0x000b0c98) temp_image_control_pane_g1

0xcd88,	// (0x000b0ca6) temp_image_control_pane_g2_ParamLimits

0xcd88,	// (0x000b0ca6) temp_image_control_pane_g2

0xcd9a,	// (0x000b0cb8) temp_image_control_pane_g3_ParamLimits

0xcd9a,	// (0x000b0cb8) temp_image_control_pane_g3

0x4531,	// (0x000a844f) temp_image_control_pane_g4_ParamLimits

0x4531,	// (0x000a844f) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x000b364d) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x000b364d) temp_image_control_pane_g

0xcd7a,	// (0x000b0c98) main_mp3_pane_g1

0x4544,	// (0x000a8462) main_mp3_pane_g2

0x0007,

0xf738,	// (0x000b3656) main_mp3_pane_g

0xcddd,	// (0x000b0cfb) main_mp3_pane_t1

0xa3ab,	// (0x000ae2c9) main_camera_pane_g8_ParamLimits

0xa3ab,	// (0x000ae2c9) main_camera_pane_g8

0x12c9,	// (0x000a51e7) main_video_pane_g7_ParamLimits

0x12c9,	// (0x000a51e7) main_video_pane_g7

0x9d84,	// (0x000adca2) main_camera2_pane_t7_ParamLimits

0x9d84,	// (0x000adca2) main_camera2_pane_t7

0xa4f3,	// (0x000ae411) scroll_pane_cp025_ParamLimits

0xa4f3,	// (0x000ae411) scroll_pane_cp025

0xa507,	// (0x000ae425) scroll_pane_cp026_ParamLimits

0xa507,	// (0x000ae425) scroll_pane_cp026

0xa516,	// (0x000ae434) wml_content_pane_ParamLimits

0x95f3,	// (0x000ad511) main_touch_calib_pane

0x4618,	// (0x000a8536) main_touch_calib_pane_g1

0x462a,	// (0x000a8548) main_touch_calib_pane_g2

0x463c,	// (0x000a855a) main_touch_calib_pane_g3

0x464e,	// (0x000a856c) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x000b3674) main_touch_calib_pane_g

0x4660,	// (0x000a857e) main_touch_calib_pane_t1

0x467a,	// (0x000a8598) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x000b367d) main_touch_calib_pane_t

0xac98,	// (0x000aebb6) mup_progress_pane_cp02

0xaccd,	// (0x000aebeb) navi_pane_g1

0xad88,	// (0x000aeca6) navi_pane_mp_t3

0x95e5,	// (0x000ad503) main_mp3_pane_ParamLimits

0x3a4f,	// (0x000a796d) navi_pane_ParamLimits

0xcd7a,	// (0x000b0c98) main_mp3_pane_g1_ParamLimits

0x4544,	// (0x000a8462) main_mp3_pane_g2_ParamLimits

0x4552,	// (0x000a8470) main_mp3_pane_g3_ParamLimits

0x4552,	// (0x000a8470) main_mp3_pane_g3

0x4560,	// (0x000a847e) main_mp3_pane_g4_ParamLimits

0x4560,	// (0x000a847e) main_mp3_pane_g4

0xcdaa,	// (0x000b0cc8) main_mp3_pane_g5_ParamLimits

0xcdaa,	// (0x000b0cc8) main_mp3_pane_g5

0xcdb8,	// (0x000b0cd6) main_mp3_pane_g6_ParamLimits

0xcdb8,	// (0x000b0cd6) main_mp3_pane_g6

0xcdc5,	// (0x000b0ce3) main_mp3_pane_g7_ParamLimits

0xcdc5,	// (0x000b0ce3) main_mp3_pane_g7

0xcdd1,	// (0x000b0cef) main_mp3_pane_g8_ParamLimits

0xcdd1,	// (0x000b0cef) main_mp3_pane_g8

0xf738,	// (0x000b3656) main_mp3_pane_g_ParamLimits

0x456c,	// (0x000a848a) main_mp3_pane_t2

0x457a,	// (0x000a8498) main_mp3_pane_t3

0xcdeb,	// (0x000b0d09) main_mp3_pane_t4

0xcdf9,	// (0x000b0d17) main_mp3_pane_t5

0x0005,

0xf749,	// (0x000b3667) main_mp3_pane_t

0xce07,	// (0x000b0d25) mup_progress_pane_cp01

0x959b,	// (0x000ad4b9) aid_zoom_text_secondary2

0xcbc1,	// (0x000b0adf) list_cale_ev2_pane

0xcbc9,	// (0x000b0ae7) scroll_pane_cp023_ParamLimits

0x46d0,	// (0x000a85ee) field_cale_ev2_pane_ParamLimits

0x46d0,	// (0x000a85ee) field_cale_ev2_pane

0x46f0,	// (0x000a860e) field_cale_ev2_pane_g1_ParamLimits

0x46f0,	// (0x000a860e) field_cale_ev2_pane_g1

0x46fc,	// (0x000a861a) field_cale_ev2_pane_g2_ParamLimits

0x46fc,	// (0x000a861a) field_cale_ev2_pane_g2

0x4714,	// (0x000a8632) field_cale_ev2_pane_g3_ParamLimits

0x4714,	// (0x000a8632) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x000b3688) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x000b3688) field_cale_ev2_pane_g

0xce1b,	// (0x000b0d39) field_cale_ev2_pane_t1_ParamLimits

0xce1b,	// (0x000b0d39) field_cale_ev2_pane_t1

0xce32,	// (0x000b0d50) field_cale_ev2_pane_t2_ParamLimits

0xce32,	// (0x000b0d50) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x000b3691) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x000b3691) field_cale_ev2_pane_t

0x2f67,	// (0x000a6e85) main_postcard_pane_g5_ParamLimits

0x2f67,	// (0x000a6e85) main_postcard_pane_g5

0x2f7d,	// (0x000a6e9b) main_postcard_pane_g6_ParamLimits

0x2f7d,	// (0x000a6e9b) main_postcard_pane_g6

0x1095,	// (0x000a4fb3) camera2_autofocus_pane_cp_ParamLimits

0x1095,	// (0x000a4fb3) camera2_autofocus_pane_cp

0x95e5,	// (0x000ad503) main_mup3_pane

0x472c,	// (0x000a864a) main_mup3_pane_g1_ParamLimits

0x472c,	// (0x000a864a) main_mup3_pane_g1

0x474e,	// (0x000a866c) main_mup3_pane_g2_ParamLimits

0x474e,	// (0x000a866c) main_mup3_pane_g2

0x47cc,	// (0x000a86ea) main_mup3_pane_g3_ParamLimits

0x47cc,	// (0x000a86ea) main_mup3_pane_g3

0x4812,	// (0x000a8730) main_mup3_pane_g4_ParamLimits

0x4812,	// (0x000a8730) main_mup3_pane_g4

0x4858,	// (0x000a8776) main_mup3_pane_g5_ParamLimits

0x4858,	// (0x000a8776) main_mup3_pane_g5

0x489e,	// (0x000a87bc) main_mup3_pane_g6_ParamLimits

0x489e,	// (0x000a87bc) main_mup3_pane_g6

0xce67,	// (0x000b0d85) main_mup3_pane_g7_ParamLimits

0xce67,	// (0x000b0d85) main_mup3_pane_g7

0x0007,

0xf783,	// (0x000b36a1) main_mup3_pane_g_ParamLimits

0xf783,	// (0x000b36a1) main_mup3_pane_g

0x491c,	// (0x000a883a) main_mup3_pane_t1_ParamLimits

0x491c,	// (0x000a883a) main_mup3_pane_t1

0x4990,	// (0x000a88ae) main_mup3_pane_t2_ParamLimits

0x4990,	// (0x000a88ae) main_mup3_pane_t2

0x4a64,	// (0x000a8982) main_mup3_pane_t4_ParamLimits

0x4a64,	// (0x000a8982) main_mup3_pane_t4

0x4aba,	// (0x000a89d8) main_mup3_pane_t5_ParamLimits

0x4aba,	// (0x000a89d8) main_mup3_pane_t5

0x4b76,	// (0x000a8a94) main_mup3_pane_t6_ParamLimits

0x4b76,	// (0x000a8a94) main_mup3_pane_t6

0x0005,

0xf794,	// (0x000b36b2) main_mup3_pane_t_ParamLimits

0xf794,	// (0x000b36b2) main_mup3_pane_t

0x4c2e,	// (0x000a8b4c) mup3_progress_pane_ParamLimits

0x4c2e,	// (0x000a8b4c) mup3_progress_pane

0x4cc4,	// (0x000a8be2) popup_mup3_control_window_ParamLimits

0x4cc4,	// (0x000a8be2) popup_mup3_control_window

0xce75,	// (0x000b0d93) popup_mup3_text_window

0x4cf6,	// (0x000a8c14) mup3_progress_pane_t1

0x4d15,	// (0x000a8c33) mup3_progress_pane_t2

0xce7d,	// (0x000b0d9b) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x000b36bf) mup3_progress_pane_t

0xce9a,	// (0x000b0db8) mup_progress_pane_cp03

0xe32f,	// (0x000b224d) bg_tb_trans_pane_cp04

0x4d34,	// (0x000a8c52) mup3_volume_pane

0x4d3c,	// (0x000a8c5a) popup_mup3_control_window_g1

0x4d45,	// (0x000a8c63) mup3_volume_pane_g1

0x4d4e,	// (0x000a8c6c) mup3_volume_pane_g2

0x4d57,	// (0x000a8c75) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x000b36c6) mup3_volume_pane_g

0xe32f,	// (0x000b224d) bg_tb_trans_pane_cp03

0xceaa,	// (0x000b0dc8) popup_mup3_text_window_g1

0xceb2,	// (0x000b0dd0) popup_mup3_text_window_t1

0x9b44,	// (0x000ada62) list_calc_item_pane_g1_ParamLimits

0xc891,	// (0x000b07af) mup_volume_pane_cp_g1

0x4694,	// (0x000a85b2) main_touch_calib_pane_t3

0x46a8,	// (0x000a85c6) main_touch_calib_pane_t4

0x46bc,	// (0x000a85da) main_touch_calib_pane_t5

0x02b7,	// (0x000a41d5) aid_cell_size_toolbar2

0x02bf,	// (0x000a41dd) aid_popup3_width_pane

0x02fb,	// (0x000a4219) aid_zoom_text_msg_primary

0x106c,	// (0x000a4f8a) vorec_t7

0x9b08,	// (0x000ada26) bg_calc_paper_pane_g1_ParamLimits

0x9b14,	// (0x000ada32) bg_calc_paper_pane_g2_ParamLimits

0x9b20,	// (0x000ada3e) bg_calc_paper_pane_g3_ParamLimits

0x9b2c,	// (0x000ada4a) bg_calc_paper_pane_g4_ParamLimits

0x9b38,	// (0x000ada56) bg_calc_paper_pane_g5_ParamLimits

0x08b2,	// (0x000a47d0) bg_calc_paper_pane_g6_ParamLimits

0x08c1,	// (0x000a47df) bg_calc_paper_pane_g7_ParamLimits

0x08d0,	// (0x000a47ee) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x000b3079) bg_calc_paper_pane_g_ParamLimits

0x08e3,	// (0x000a4801) calc_bg_paper_pane_g9_ParamLimits

0x11e0,	// (0x000a50fe) image_qvga_pane_ParamLimits

0x11e0,	// (0x000a50fe) image_qvga_pane

0x9a03,	// (0x000ad921) bg_popup_sub_pane_cp04_ParamLimits

0xb019,	// (0x000aef37) popup_mup_playback_window_g1_ParamLimits

0xb025,	// (0x000aef43) popup_mup_playback_window_t1_ParamLimits

0xb03a,	// (0x000aef58) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x000b3405) popup_mup_playback_window_t_ParamLimits

0x41d4,	// (0x000a80f2) main_mup2_pane_g3_ParamLimits

0x41d4,	// (0x000a80f2) main_mup2_pane_g3

0x15ef,	// (0x000a550d) popup_toolbar_window_cp04

0xb41c,	// (0x000af33a) popup_call2_audio_second_window_g3_ParamLimits

0xb41c,	// (0x000af33a) popup_call2_audio_second_window_g3

0xbd4a,	// (0x000afc68) popup_call2_audio_first_window_g4_ParamLimits

0xbd4a,	// (0x000afc68) popup_call2_audio_first_window_g4

0xc3c9,	// (0x000b02e7) popup_call2_audio_in_window_g4_ParamLimits

0xc3c9,	// (0x000b02e7) popup_call2_audio_in_window_g4

0x3094,	// (0x000a6fb2) aid_area_sk_bg_cut_ParamLimits

0x3094,	// (0x000a6fb2) aid_area_sk_bg_cut

0xb04f,	// (0x000aef6d) aid_area_sk_bg_cut_2_ParamLimits

0xb04f,	// (0x000aef6d) aid_area_sk_bg_cut_2

0x44d7,	// (0x000a83f5) aid_placing_details_win

0x44df,	// (0x000a83fd) aid_placing_details_win_2

0xccbc,	// (0x000b0bda) camera2_autofocus_pane_g1_ParamLimits

0x04a1,	// (0x000a43bf) popup_fixed_preview_cale_window_ParamLimits

0x04a1,	// (0x000a43bf) popup_fixed_preview_cale_window

0xae0e,	// (0x000aed2c) navi_slider_pane_g3

0xae17,	// (0x000aed35) navi_slider_pane_g4

0xae20,	// (0x000aed3e) navi_slider_pane_g5

0xae0e,	// (0x000aed2c) navi_slider_pane_g6

0x9cb1,	// (0x000adbcf) navi_slider_pane_g7

0xaf41,	// (0x000aee5f) mup_scale_pane_g3

0xaf4a,	// (0x000aee68) mup_scale_pane_g4

0xaf53,	// (0x000aee71) mup_scale_pane_g5

0x2d3e,	// (0x000a6c5c) mup_scale_pane_g6

0x2d47,	// (0x000a6c65) mup_scale_pane_g7

0xae0e,	// (0x000aed2c) cams2_slider_pane_g3

0xc913,	// (0x000b0831) cams2_slider_pane_g4

0x9dea,	// (0x000add08) cams2_slider_pane_g5

0xae0e,	// (0x000aed2c) cams2_slider_pane_g6

0x9df2,	// (0x000add10) cams2_slider_pane_g7

0xcb47,	// (0x000b0a65) camera2_autofocus_pane_cp_g1

0xc72a,	// (0x000b0648) bg_popup_preview_window_pane_cp02_ParamLimits

0xc72a,	// (0x000b0648) bg_popup_preview_window_pane_cp02

0xcec0,	// (0x000b0dde) list_fp_cale_pane_ParamLimits

0xcec0,	// (0x000b0dde) list_fp_cale_pane

0xcecc,	// (0x000b0dea) popup_fixed_preview_cale_window_t1_ParamLimits

0xcecc,	// (0x000b0dea) popup_fixed_preview_cale_window_t1

0x4d60,	// (0x000a8c7e) popup_fixed_preview_cale_window_t2_ParamLimits

0x4d60,	// (0x000a8c7e) popup_fixed_preview_cale_window_t2

0x4d75,	// (0x000a8c93) popup_fixed_preview_cale_window_t3_ParamLimits

0x4d75,	// (0x000a8c93) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x000b36cd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x000b36cd) popup_fixed_preview_cale_window_t

0x4d8a,	// (0x000a8ca8) list_single_fp_cale_pane_ParamLimits

0x4d8a,	// (0x000a8ca8) list_single_fp_cale_pane

0xceea,	// (0x000b0e08) list_single_fp_cale_pane_g1_ParamLimits

0xceea,	// (0x000b0e08) list_single_fp_cale_pane_g1

0xcef6,	// (0x000b0e14) list_single_fp_cale_pane_g2_ParamLimits

0xcef6,	// (0x000b0e14) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x000b36d4) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x000b36d4) list_single_fp_cale_pane_g

0xcf0f,	// (0x000b0e2d) list_single_fp_cale_pane_t1_ParamLimits

0xcf0f,	// (0x000b0e2d) list_single_fp_cale_pane_t1

0xcf21,	// (0x000b0e3f) list_single_fp_cale_pane_t2_ParamLimits

0xcf21,	// (0x000b0e3f) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x000b36db) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x000b36db) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95f3,	// (0x000ad511) main_dialer_pane

0x4d9f,	// (0x000a8cbd) aid_cell_size_keypad

0x4da9,	// (0x000a8cc7) dialer_ne_pane

0x4db1,	// (0x000a8ccf) grid_dialer_command_1_pane

0x4db9,	// (0x000a8cd7) grid_dialer_command_2_pane

0x4dc1,	// (0x000a8cdf) grid_dialer_keypad_pane

0x4dd3,	// (0x000a8cf1) bg_popup_call_pane_cp06_ParamLimits

0x4dd3,	// (0x000a8cf1) bg_popup_call_pane_cp06

0x4ddf,	// (0x000a8cfd) dialer_ne_clear_pane_ParamLimits

0x4ddf,	// (0x000a8cfd) dialer_ne_clear_pane

0xcf54,	// (0x000b0e72) dialer_ne_pane_g1

0xcf5c,	// (0x000b0e7a) dialer_ne_pane_t1_ParamLimits

0xcf5c,	// (0x000b0e7a) dialer_ne_pane_t1

0x4deb,	// (0x000a8d09) dialer_ne_pane_t2_ParamLimits

0x4deb,	// (0x000a8d09) dialer_ne_pane_t2

0x4e15,	// (0x000a8d33) dialer_ne_pane_t3_ParamLimits

0x4e15,	// (0x000a8d33) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x000b36e0) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x000b36e0) dialer_ne_pane_t

0x4e45,	// (0x000a8d63) dialer_ne_pane_t3_copy1_ParamLimits

0x4e45,	// (0x000a8d63) dialer_ne_pane_t3_copy1

0x4e74,	// (0x000a8d92) cell_dialer_keypad_pane_ParamLimits

0x4e74,	// (0x000a8d92) cell_dialer_keypad_pane

0x4e8b,	// (0x000a8da9) cell_dialer_command_1_pane_ParamLimits

0x4e8b,	// (0x000a8da9) cell_dialer_command_1_pane

0x4ea1,	// (0x000a8dbf) cell_dialer_command_2_pane_ParamLimits

0x4ea1,	// (0x000a8dbf) cell_dialer_command_2_pane

0xcf6e,	// (0x000b0e8c) bg_button_pane_cp02_ParamLimits

0xcf6e,	// (0x000b0e8c) bg_button_pane_cp02

0x4eb0,	// (0x000a8dce) cell_dialer_keypad_pane_g1_ParamLimits

0x4eb0,	// (0x000a8dce) cell_dialer_keypad_pane_g1

0xcf6e,	// (0x000b0e8c) bg_button_pane_cp03_ParamLimits

0xcf6e,	// (0x000b0e8c) bg_button_pane_cp03

0x4ec4,	// (0x000a8de2) cell_dialer_command_1_pane_g1_ParamLimits

0x4ec4,	// (0x000a8de2) cell_dialer_command_1_pane_g1

0xcf7a,	// (0x000b0e98) bg_button_pane_cp04

0x4ed8,	// (0x000a8df6) cell_dialer_command_2_pane_g1

0xadfd,	// (0x000aed1b) bg_button_pane_cp06

0xcf82,	// (0x000b0ea0) dialer_ne_clear_pane_g1

0xacd9,	// (0x000aebf7) navi_pane_g2

0xad07,	// (0x000aec25) navi_pane_g3

0x0002,

0xf3ea,	// (0x000b3308) navi_pane_g

0xad96,	// (0x000aecb4) navi_pane_mv_g2

0xadbd,	// (0x000aecdb) navi_pane_mv_g5

0x2902,	// (0x000a6820) navi_pane_mv_t1

0x9aea,	// (0x000ada08) main_clock2_pane

0x4f23,	// (0x000a8e41) main_clock2_list_pane_ParamLimits

0x4f23,	// (0x000a8e41) main_clock2_list_pane

0x4f5b,	// (0x000a8e79) main_clock2_pane_t1_ParamLimits

0x4f5b,	// (0x000a8e79) main_clock2_pane_t1

0x4f97,	// (0x000a8eb5) main_clock2_pane_t2_ParamLimits

0x4f97,	// (0x000a8eb5) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b36e7) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b36e7) main_clock2_pane_t

0x5035,	// (0x000a8f53) popup_clock_analogue_window_cp03_ParamLimits

0x5035,	// (0x000a8f53) popup_clock_analogue_window_cp03

0x505a,	// (0x000a8f78) popup_clock_digital_window_cp02_ParamLimits

0x505a,	// (0x000a8f78) popup_clock_digital_window_cp02

0x50cb,	// (0x000a8fe9) main_clock2_list_single_pane_ParamLimits

0x50cb,	// (0x000a8fe9) main_clock2_list_single_pane

0xadfd,	// (0x000aed1b) list_highlight_pane_cp05

0xcfa0,	// (0x000b0ebe) main_clock2_list_single_pane_t1

0x15ef,	// (0x000a550d) popup_toolbar_window_cp04_ParamLimits

0x4501,	// (0x000a841f) camera2_autofocus_pane_g2_ParamLimits

0x4501,	// (0x000a841f) camera2_autofocus_pane_g2

0x450d,	// (0x000a842b) camera2_autofocus_pane_g3_ParamLimits

0x450d,	// (0x000a842b) camera2_autofocus_pane_g3

0x4519,	// (0x000a8437) camera2_autofocus_pane_g4_ParamLimits

0x4519,	// (0x000a8437) camera2_autofocus_pane_g4

0x4525,	// (0x000a8443) camera2_autofocus_pane_g5_ParamLimits

0x4525,	// (0x000a8443) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x000b3630) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x000b3630) camera2_autofocus_pane_g

0xce47,	// (0x000b0d65) camera2_autofocus_pane_cp_g2

0xce4f,	// (0x000b0d6d) camera2_autofocus_pane_cp_g3

0xce57,	// (0x000b0d75) camera2_autofocus_pane_cp_g4

0xce5f,	// (0x000b0d7d) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x000b3696) camera2_autofocus_pane_cp_g

0x4dcb,	// (0x000a8ce9) popup_dialer_spcha_window

0xe32f,	// (0x000b224d) bg_popup_sub_pane_cp07

0xcfae,	// (0x000b0ecc) list_spcha_pane

0xcfb6,	// (0x000b0ed4) list_single_spcha_pane_ParamLimits

0xcfb6,	// (0x000b0ed4) list_single_spcha_pane

0xe32f,	// (0x000b224d) list_highlight_pane_cp06

0xcfc7,	// (0x000b0ee5) list_single_spcha_pane_t1

0xc173,	// (0x000b0091) popup_call2_audio_out_window_g4_ParamLimits

0xc173,	// (0x000b0091) popup_call2_audio_out_window_g4

0x95f3,	// (0x000ad511) main_imed2_pane

0x9d0a,	// (0x000adc28) popup_imed_adjust2_window

0x38e2,	// (0x000a7800) popup_imed_trans_window_ParamLimits

0x38e2,	// (0x000a7800) popup_imed_trans_window

0xc985,	// (0x000b08a3) popup_blid_sat_info2_window_t1

0xc993,	// (0x000b08b1) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x000b35c5) popup_blid_sat_info2_window_t

0x5175,	// (0x000a9093) aid_size_cell_colour_35

0x5195,	// (0x000a90b3) aid_size_cell_colour_112

0x51b5,	// (0x000a90d3) aid_size_cell_effect

0xc736,	// (0x000b0654) bg_tb_trans_pane_cp02

0xa844,	// (0x000ae762) heading_imed_pane

0x51d5,	// (0x000a90f3) listscroll_imed_pane

0xcfd5,	// (0x000b0ef3) heading_imed_pane_g1

0xcfdd,	// (0x000b0efb) heading_imed_pane_t1

0xcfeb,	// (0x000b0f09) grid_imed_colour_35_pane_ParamLimits

0xcfeb,	// (0x000b0f09) grid_imed_colour_35_pane

0x51e1,	// (0x000a90ff) grid_imed_effect_pane

0xd002,	// (0x000b0f20) list_imed_aspect_pane

0x51f7,	// (0x000a9115) scroll_pane_cp027_ParamLimits

0x51f7,	// (0x000a9115) scroll_pane_cp027

0x5208,	// (0x000a9126) cell_imed_effect_pane_ParamLimits

0x5208,	// (0x000a9126) cell_imed_effect_pane

0xd00a,	// (0x000b0f28) cell_imed_colour_pane_ParamLimits

0xd00a,	// (0x000b0f28) cell_imed_colour_pane

0xd04c,	// (0x000b0f6a) cell_imed_colour_pane_g1_ParamLimits

0xd04c,	// (0x000b0f6a) cell_imed_colour_pane_g1

0xd05d,	// (0x000b0f7b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd05d,	// (0x000b0f7b) hgihlgiht_grid_pane_cp016

0x522f,	// (0x000a914d) cell_imed_effect_pane_g1

0x5237,	// (0x000a9155) grid_highlight_pane_cp017

0xd06e,	// (0x000b0f8c) list_imed_single_pane_ParamLimits

0xd06e,	// (0x000b0f8c) list_imed_single_pane

0xe32f,	// (0x000b224d) list_highlight_pane_cp07

0xd083,	// (0x000b0fa1) list_imed_aspect_pane_comp1_t1

0xc736,	// (0x000b0654) bg_tb_trans_pane_cp05

0xd0a5,	// (0x000b0fc3) popup_imed_adjust2_window_g1

0xd0cc,	// (0x000b0fea) popup_imed_adjust2_window_t1

0xd0e4,	// (0x000b1002) slider_imed_adjust_pane

0xd0f8,	// (0x000b1016) slider_imed_adjust_pane_g1

0xd108,	// (0x000b1026) slider_imed_adjust_pane_g2

0xd118,	// (0x000b1036) slider_imed_adjust_pane_g3

0xd129,	// (0x000b1047) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b3704) slider_imed_adjust_pane_g

0x5240,	// (0x000a915e) aid_size_cell_clipart2

0x524c,	// (0x000a916a) grid_imed_clipart_pane

0xd13a,	// (0x000b1058) scroll_pane_cp031

0x5256,	// (0x000a9174) cell_imed_clipart_pane_ParamLimits

0x5256,	// (0x000a9174) cell_imed_clipart_pane

0x5278,	// (0x000a9196) cell_imed_clipart_pane_g1

0xe32f,	// (0x000b224d) grid_highlight_pane_cp014

0x4f38,	// (0x000a8e56) main_clock2_pane_g1_ParamLimits

0x4f38,	// (0x000a8e56) main_clock2_pane_g1

0x5076,	// (0x000a8f94) aid_call2_pane_cp10

0x5088,	// (0x000a8fa6) aid_call_pane_cp10

0xac3a,	// (0x000aeb58) popup_clock_analogue_window_cp10_g1

0xac3a,	// (0x000aeb58) popup_clock_analogue_window_cp10_g2

0x509a,	// (0x000a8fb8) popup_clock_analogue_window_cp10_g3

0x509a,	// (0x000a8fb8) popup_clock_analogue_window_cp10_g4

0xac3a,	// (0x000aeb58) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b36f2) popup_clock_analogue_window_cp10_g

0x50ac,	// (0x000a8fca) popup_clock_analogue_window_cp10_t1

0x50dd,	// (0x000a8ffb) clock_digital_number_pane_cp10_ParamLimits

0x50dd,	// (0x000a8ffb) clock_digital_number_pane_cp10

0x50f5,	// (0x000a9013) clock_digital_number_pane_cp11_ParamLimits

0x50f5,	// (0x000a9013) clock_digital_number_pane_cp11

0x510d,	// (0x000a902b) clock_digital_number_pane_cp12_ParamLimits

0x510d,	// (0x000a902b) clock_digital_number_pane_cp12

0x5125,	// (0x000a9043) clock_digital_number_pane_cp13_ParamLimits

0x5125,	// (0x000a9043) clock_digital_number_pane_cp13

0x513d,	// (0x000a905b) clock_digital_separator_pane_cp10_ParamLimits

0x513d,	// (0x000a905b) clock_digital_separator_pane_cp10

0x5155,	// (0x000a9073) popup_clock_digital_window_cp02_t1_ParamLimits

0x5155,	// (0x000a9073) popup_clock_digital_window_cp02_t1

0x99fb,	// (0x000ad919) clock_digital_number_pane_cp10_g1

0x99fb,	// (0x000ad919) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b370d) clock_digital_number_pane_cp10_g

0x99fb,	// (0x000ad919) clock_digital_separator_pane_cp10_g1

0x99fb,	// (0x000ad919) clock_digital_separator_pane_g2_cp10

0xadc5,	// (0x000aece3) navi_pane_vded_g4

0xadce,	// (0x000aecec) navi_pane_vded_g5

0xadd7,	// (0x000aecf5) navi_pane_vded_t1

0x95f3,	// (0x000ad511) main_vded_pane

0x5281,	// (0x000a919f) main_vded_pane_g1

0x528b,	// (0x000a91a9) main_vded_pane_g2

0x5295,	// (0x000a91b3) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b3712) main_vded_pane_g

0x529f,	// (0x000a91bd) main_vded_pane_t1

0x52ad,	// (0x000a91cb) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b3719) main_vded_pane_t

0x52bb,	// (0x000a91d9) vded_slider_pane

0x52c3,	// (0x000a91e1) vded_video_pane

0xd142,	// (0x000b1060) vded_video_pane_g1

0x52cb,	// (0x000a91e9) vded_video_pane_g2

0xcb47,	// (0x000b0a65) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b371e) vded_video_pane_g

0xd14c,	// (0x000b106a) vded_slider_pane_g1

0xc891,	// (0x000b07af) vded_slider_pane_g2

0xd155,	// (0x000b1073) vded_slider_pane_g3

0xd15e,	// (0x000b107c) vded_slider_pane_g4

0xd167,	// (0x000b1085) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b3725) vded_slider_pane_g

0x4cac,	// (0x000a8bca) mup3_rocker_pane_ParamLimits

0x4cac,	// (0x000a8bca) mup3_rocker_pane

0x52d4,	// (0x000a91f2) mup3_control_keys_pane_g1

0x52dc,	// (0x000a91fa) mup3_control_keys_pane_g2

0x52e4,	// (0x000a9202) mup3_control_keys_pane_g3

0x52ec,	// (0x000a920a) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b3730) mup3_control_keys_pane_g

0x04d8,	// (0x000a43f6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04d8,	// (0x000a43f6) popup_toolbar2_fixed_window_cp01

0x4ce0,	// (0x000a8bfe) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ce0,	// (0x000a8bfe) popup_toolbar2_fixed_window_cp02

0xb58e,	// (0x000af4ac) popup_call2_audio_second_window_t4_ParamLimits

0xb58e,	// (0x000af4ac) popup_call2_audio_second_window_t4

0xbfe0,	// (0x000afefe) popup_call2_audio_first_window_t6_ParamLimits

0xbfe0,	// (0x000afefe) popup_call2_audio_first_window_t6

0xc276,	// (0x000b0194) popup_call2_audio_out_window_t6_ParamLimits

0xc276,	// (0x000b0194) popup_call2_audio_out_window_t6

0x95f3,	// (0x000ad511) main_vitu_pane

0x52fc,	// (0x000a921a) aid_size_cell_itu_ParamLimits

0x52fc,	// (0x000a921a) aid_size_cell_itu

0xb752,	// (0x000af670) bg_popup_window_pane_cp08_ParamLimits

0xb752,	// (0x000af670) bg_popup_window_pane_cp08

0x5312,	// (0x000a9230) field_vitu_entry_pane_ParamLimits

0x5312,	// (0x000a9230) field_vitu_entry_pane

0x5329,	// (0x000a9247) grid_vitu_function_pane_ParamLimits

0x5329,	// (0x000a9247) grid_vitu_function_pane

0x5344,	// (0x000a9262) grid_vitu_itu_pane_ParamLimits

0x5344,	// (0x000a9262) grid_vitu_itu_pane

0x5362,	// (0x000a9280) cell_vitu_itu_pane_ParamLimits

0x5362,	// (0x000a9280) cell_vitu_itu_pane

0x5384,	// (0x000a92a2) cell_vitu_function_pane_ParamLimits

0x5384,	// (0x000a92a2) cell_vitu_function_pane

0xb752,	// (0x000af670) bg_popup_sub_pane_cp08_ParamLimits

0xb752,	// (0x000af670) bg_popup_sub_pane_cp08

0x539d,	// (0x000a92bb) field_vitu_entry_pane_t1_ParamLimits

0x539d,	// (0x000a92bb) field_vitu_entry_pane_t1

0xd188,	// (0x000b10a6) field_vitu_entry_pane_t2_ParamLimits

0xd188,	// (0x000b10a6) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b373e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b373e) field_vitu_entry_pane_t

0xd1a5,	// (0x000b10c3) bg_button_pane_cp05_ParamLimits

0xd1a5,	// (0x000b10c3) bg_button_pane_cp05

0x53bb,	// (0x000a92d9) cell_vitu_itu_pane_g1

0x53d3,	// (0x000a92f1) cell_vitu_itu_pane_t1_ParamLimits

0x53d3,	// (0x000a92f1) cell_vitu_itu_pane_t1

0x53e5,	// (0x000a9303) cell_vitu_itu_pane_t2_ParamLimits

0x53e5,	// (0x000a9303) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b3743) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b3743) cell_vitu_itu_pane_t

0xd1b3,	// (0x000b10d1) bg_button_pane_cp07

0x541a,	// (0x000a9338) cell_vitu_function_pane_g1

0x9a8a,	// (0x000ad9a8) main_calc_pane_g1

0x02ef,	// (0x000a420d) aid_visual_content_pane

0x95f3,	// (0x000ad511) main_vradio_pane

0x5423,	// (0x000a9341) main_vradio_pane_g1_ParamLimits

0x5423,	// (0x000a9341) main_vradio_pane_g1

0xd1bd,	// (0x000b10db) main_vradio_pane_g2_ParamLimits

0xd1bd,	// (0x000b10db) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b374a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b374a) main_vradio_pane_g

0x543c,	// (0x000a935a) main_vradio_pane_t1_ParamLimits

0x543c,	// (0x000a935a) main_vradio_pane_t1

0x5451,	// (0x000a936f) main_vradio_pane_t2_ParamLimits

0x5451,	// (0x000a936f) main_vradio_pane_t2

0xd1ca,	// (0x000b10e8) main_vradio_pane_t3_ParamLimits

0xd1ca,	// (0x000b10e8) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b374f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b374f) main_vradio_pane_t

0x5466,	// (0x000a9384) vradio_rocker_control_pane_ParamLimits

0x5466,	// (0x000a9384) vradio_rocker_control_pane

0x5478,	// (0x000a9396) vradio_station_info_pane_ParamLimits

0x5478,	// (0x000a9396) vradio_station_info_pane

0xd1de,	// (0x000b10fc) vradio_frequency_info_pane_ParamLimits

0xd1de,	// (0x000b10fc) vradio_frequency_info_pane

0xcb47,	// (0x000b0a65) vradio_station_info_pane_g1

0xd1ed,	// (0x000b110b) vradio_station_info_pane_t1_ParamLimits

0xd1ed,	// (0x000b110b) vradio_station_info_pane_t1

0xd20f,	// (0x000b112d) vradio_station_info_pane_t2_ParamLimits

0xd20f,	// (0x000b112d) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b3756) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b3756) vradio_station_info_pane_t

0xd221,	// (0x000b113f) vradio_tuning_pane

0xd229,	// (0x000b1147) vradio_rocker_control_pane_g1

0xd231,	// (0x000b114f) vradio_rocker_control_pane_g2

0xd239,	// (0x000b1157) vradio_rocker_control_pane_g3

0xd241,	// (0x000b115f) vradio_rocker_control_pane_g4

0xd249,	// (0x000b1167) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b375b) vradio_rocker_control_pane_g

0x548a,	// (0x000a93a8) vradio_frequency_info_pane_g1

0xd251,	// (0x000b116f) vradio_frequency_info_pane_t1_ParamLimits

0xd251,	// (0x000b116f) vradio_frequency_info_pane_t1

0x5494,	// (0x000a93b2) vradio_tuning_pane_g1

0x549f,	// (0x000a93bd) vradio_tuning_pane_t1

0x95a3,	// (0x000ad4c1) area_side_right_pane_ParamLimits

0x95a3,	// (0x000ad4c1) area_side_right_pane

0xc6f1,	// (0x000b060f) status_small_pane_g1

0xc6f9,	// (0x000b0617) status_small_pane_g2

0xc702,	// (0x000b0620) status_small_pane_g3

0xc70b,	// (0x000b0629) status_small_pane_g4

0x0003,

0xf5fd,	// (0x000b351b) status_small_pane_g

0xc714,	// (0x000b0632) status_small_pane_t1

0x95f3,	// (0x000ad511) main_video3_pane

0xd265,	// (0x000b1183) cams_zoom_vslider_pane

0xd26d,	// (0x000b118b) image3_wide_pane_ParamLimits

0xd26d,	// (0x000b118b) image3_wide_pane

0xd287,	// (0x000b11a5) image3_wide_small_pane

0xd293,	// (0x000b11b1) main_video3_pane_g1_ParamLimits

0xd293,	// (0x000b11b1) main_video3_pane_g1

0xd2af,	// (0x000b11cd) main_video3_pane_g2_ParamLimits

0xd2af,	// (0x000b11cd) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b3766) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b3766) main_video3_pane_g

0xd2cb,	// (0x000b11e9) main_video3_pane_t1_ParamLimits

0xd2cb,	// (0x000b11e9) main_video3_pane_t1

0xd2f6,	// (0x000b1214) main_video3_pane_t2_ParamLimits

0xd2f6,	// (0x000b1214) main_video3_pane_t2

0xd321,	// (0x000b123f) main_video3_pane_t3_ParamLimits

0xd321,	// (0x000b123f) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b376b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b376b) main_video3_pane_t

0xd34e,	// (0x000b126c) cams_zoom_vslider_pane_g1

0xd357,	// (0x000b1275) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b3772) cams_zoom_vslider_pane_g

0xd35f,	// (0x000b127d) small_slider_vertical_pane

0xcb47,	// (0x000b0a65) small_slider_vertical_pane_g1

0xcb47,	// (0x000b0a65) small_slider_vertical_pane_g2

0xd367,	// (0x000b1285) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b3777) small_slider_vertical_pane_g

0x95f3,	// (0x000ad511) main_hwr_training_pane

0xd370,	// (0x000b128e) hwr_training_instruct_pane_ParamLimits

0xd370,	// (0x000b128e) hwr_training_instruct_pane

0x54ae,	// (0x000a93cc) hwr_training_navi_pane_ParamLimits

0x54ae,	// (0x000a93cc) hwr_training_navi_pane

0x54cd,	// (0x000a93eb) hwr_training_write_pane_ParamLimits

0x54cd,	// (0x000a93eb) hwr_training_write_pane

0xe32f,	// (0x000b224d) bg_frame_shadow_pane

0xd3a7,	// (0x000b12c5) hwr_training_write_pane_g1

0xd3af,	// (0x000b12cd) hwr_training_write_pane_g2

0xd3b7,	// (0x000b12d5) hwr_training_write_pane_g3

0xd3bf,	// (0x000b12dd) hwr_training_write_pane_g4

0xd3c7,	// (0x000b12e5) hwr_training_write_pane_g5

0xd3cf,	// (0x000b12ed) hwr_training_write_pane_g6

0xd3d7,	// (0x000b12f5) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b377e) hwr_training_write_pane_g

0x9dfb,	// (0x000add19) hwr_training_navi_pane_g1_ParamLimits

0x9dfb,	// (0x000add19) hwr_training_navi_pane_g1

0x9e0d,	// (0x000add2b) hwr_training_navi_pane_g2_ParamLimits

0x9e0d,	// (0x000add2b) hwr_training_navi_pane_g2

0x9e1f,	// (0x000add3d) hwr_training_navi_pane_g3_ParamLimits

0x9e1f,	// (0x000add3d) hwr_training_navi_pane_g3

0x9e2f,	// (0x000add4d) hwr_training_navi_pane_g4_ParamLimits

0x9e2f,	// (0x000add4d) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b378d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b378d) hwr_training_navi_pane_g

0x9e3c,	// (0x000add5a) hwr_training_navi_pane_t1

0x5515,	// (0x000a9433) list_single_hwr_training_instruct_pane_ParamLimits

0x5515,	// (0x000a9433) list_single_hwr_training_instruct_pane

0xd3df,	// (0x000b12fd) list_single_hwr_training_instruct_pane_t1

0xca87,	// (0x000b09a5) bg_frame_shadow_pane_g1

0xd3ee,	// (0x000b130c) bg_frame_shadow_pane_g2

0xd3f6,	// (0x000b1314) bg_frame_shadow_pane_g3

0xd3fe,	// (0x000b131c) bg_frame_shadow_pane_g4

0xd406,	// (0x000b1324) bg_frame_shadow_pane_g5

0xd40e,	// (0x000b132c) bg_frame_shadow_pane_g6

0xd416,	// (0x000b1334) bg_frame_shadow_pane_g7

0xa29e,	// (0x000ae1bc) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b3798) bg_frame_shadow_pane_g

0x95f3,	// (0x000ad511) main_video_tele_dialer_pane

0x552a,	// (0x000a9448) aid_size_cell_video_keypad_ParamLimits

0x552a,	// (0x000a9448) aid_size_cell_video_keypad

0x5544,	// (0x000a9462) grid_video_dialer_keypad_pane_ParamLimits

0x5544,	// (0x000a9462) grid_video_dialer_keypad_pane

0x5590,	// (0x000a94ae) video_down_pane_cp_ParamLimits

0x5590,	// (0x000a94ae) video_down_pane_cp

0x55c2,	// (0x000a94e0) cell_video_dialer_keypad_pane_ParamLimits

0x55c2,	// (0x000a94e0) cell_video_dialer_keypad_pane

0xd41e,	// (0x000b133c) bg_button_pane_cp08_ParamLimits

0xd41e,	// (0x000b133c) bg_button_pane_cp08

0x55e4,	// (0x000a9502) cell_video_dialer_keypad_pane_g1_ParamLimits

0x55e4,	// (0x000a9502) cell_video_dialer_keypad_pane_g1

0x4c96,	// (0x000a8bb4) mup3_rocker2_pane_ParamLimits

0x4c96,	// (0x000a8bb4) mup3_rocker2_pane

0xcb47,	// (0x000b0a65) mup3_rocker2_pane_g1

0x37c3,	// (0x000a76e1) main_dialer2_pane

0x95f3,	// (0x000ad511) main_mp4_pane

0x9e52,	// (0x000add70) main_mp4_pane_g1_ParamLimits

0x9e52,	// (0x000add70) main_mp4_pane_g1

0x9e52,	// (0x000add70) main_mp4_pane_g2_ParamLimits

0x9e52,	// (0x000add70) main_mp4_pane_g2

0x561b,	// (0x000a9539) main_mp4_pane_g3_ParamLimits

0x561b,	// (0x000a9539) main_mp4_pane_g3

0x9e60,	// (0x000add7e) main_mp4_pane_g4_ParamLimits

0x9e60,	// (0x000add7e) main_mp4_pane_g4

0x9e88,	// (0x000adda6) main_mp4_pane_g5_ParamLimits

0x9e88,	// (0x000adda6) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b37b8) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b37b8) main_mp4_pane_g

0x9ed8,	// (0x000addf6) main_mp4_pane_t1_ParamLimits

0x9ed8,	// (0x000addf6) main_mp4_pane_t1

0x9f34,	// (0x000ade52) main_mp4_pane_t2_ParamLimits

0x9f34,	// (0x000ade52) main_mp4_pane_t2

0xd42a,	// (0x000b1348) main_mp4_pane_t3_ParamLimits

0xd42a,	// (0x000b1348) main_mp4_pane_t3

0x9f86,	// (0x000adea4) main_mp4_pane_t4_ParamLimits

0x9f86,	// (0x000adea4) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b37c5) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b37c5) main_mp4_pane_t

0x9fca,	// (0x000adee8) mp4_progress_pane_ParamLimits

0x9fca,	// (0x000adee8) mp4_progress_pane

0xa014,	// (0x000adf32) mp4_rocker_pane_ParamLimits

0xa014,	// (0x000adf32) mp4_rocker_pane

0xd452,	// (0x000b1370) mp4_progress_pane_t1

0xd46b,	// (0x000b1389) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b37ce) mp4_progress_pane_t

0xd484,	// (0x000b13a2) mup_progress_pane_cp04

0xd653,	// (0x000b1571) mp4_rocker_pane_g1

0x5657,	// (0x000a9575) aid_cell_size_keypad2_ParamLimits

0x5657,	// (0x000a9575) aid_cell_size_keypad2

0x566d,	// (0x000a958b) dialer2_ne_pane_ParamLimits

0x566d,	// (0x000a958b) dialer2_ne_pane

0x5687,	// (0x000a95a5) grid_dialer2_keypad_pane_ParamLimits

0x5687,	// (0x000a95a5) grid_dialer2_keypad_pane

0xc923,	// (0x000b0841) bg_popup_call_pane_cp07_ParamLimits

0xc923,	// (0x000b0841) bg_popup_call_pane_cp07

0x56a3,	// (0x000a95c1) dialer2_ne_pane_t1_ParamLimits

0x56a3,	// (0x000a95c1) dialer2_ne_pane_t1

0x56de,	// (0x000a95fc) cell_dialer2_keypad_pane_ParamLimits

0x56de,	// (0x000a95fc) cell_dialer2_keypad_pane

0xd4a2,	// (0x000b13c0) bg_button_pane_pane_cp04_ParamLimits

0xd4a2,	// (0x000b13c0) bg_button_pane_pane_cp04

0x5700,	// (0x000a961e) cell_dialer2_keypad_pane_g1_ParamLimits

0x5700,	// (0x000a961e) cell_dialer2_keypad_pane_g1

0x14c3,	// (0x000a53e1) aid_placing_vt_set_content_ParamLimits

0x14c3,	// (0x000a53e1) aid_placing_vt_set_content

0x14eb,	// (0x000a5409) aid_placing_vt_set_title_ParamLimits

0x14eb,	// (0x000a5409) aid_placing_vt_set_title

0x95f3,	// (0x000ad511) main_image3_pane

0x57c6,	// (0x000a96e4) area_side_right_pane_cp01_ParamLimits

0x57c6,	// (0x000a96e4) area_side_right_pane_cp01

0x9e52,	// (0x000add70) main_image3_pane_g1_ParamLimits

0x9e52,	// (0x000add70) main_image3_pane_g1

0x57dd,	// (0x000a96fb) main_image3_pane_g2_ParamLimits

0x57dd,	// (0x000a96fb) main_image3_pane_g2

0x5805,	// (0x000a9723) main_image3_pane_g3_ParamLimits

0x5805,	// (0x000a9723) main_image3_pane_g3

0x582f,	// (0x000a974d) main_image3_pane_g4_ParamLimits

0x582f,	// (0x000a974d) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b37dd) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b37dd) main_image3_pane_g

0x5859,	// (0x000a9777) main_image3_pane_t1_ParamLimits

0x5859,	// (0x000a9777) main_image3_pane_t1

0x58b1,	// (0x000a97cf) main_image3_pane_t2_ParamLimits

0x58b1,	// (0x000a97cf) main_image3_pane_t2

0x5903,	// (0x000a9821) main_image3_pane_t3_ParamLimits

0x5903,	// (0x000a9821) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b37e6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b37e6) main_image3_pane_t

0xb752,	// (0x000af670) grid_sctrl_middle_pane_cp01_ParamLimits

0xb752,	// (0x000af670) grid_sctrl_middle_pane_cp01

0x598b,	// (0x000a98a9) cell_sctrl_middle_pane_cp01_ParamLimits

0x598b,	// (0x000a98a9) cell_sctrl_middle_pane_cp01

0x59a8,	// (0x000a98c6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x59a8,	// (0x000a98c6) cell_sctrl_middle_pane_cp01_g1

0x95f3,	// (0x000ad511) main_call4_pane

0x59be,	// (0x000a98dc) aid_size_button_call4_ParamLimits

0x59be,	// (0x000a98dc) aid_size_button_call4

0x59ef,	// (0x000a990d) call4_windows_pane_ParamLimits

0x59ef,	// (0x000a990d) call4_windows_pane

0x5a0f,	// (0x000a992d) grid_call4_button_pane_ParamLimits

0x5a0f,	// (0x000a992d) grid_call4_button_pane

0xd4ae,	// (0x000b13cc) call4_windows_conf_pane

0xd4c5,	// (0x000b13e3) popup_call4_audio_first_window_ParamLimits

0xd4c5,	// (0x000b13e3) popup_call4_audio_first_window

0xd511,	// (0x000b142f) popup_call4_audio_second_window_ParamLimits

0xd511,	// (0x000b142f) popup_call4_audio_second_window

0xd525,	// (0x000b1443) popup_call4_audio_wait_window_ParamLimits

0xd525,	// (0x000b1443) popup_call4_audio_wait_window

0x5a3c,	// (0x000a995a) cell_call4_button_pane_ParamLimits

0x5a3c,	// (0x000a995a) cell_call4_button_pane

0x5a65,	// (0x000a9983) bg_button_pane_cp09_ParamLimits

0x5a65,	// (0x000a9983) bg_button_pane_cp09

0x5a71,	// (0x000a998f) cell_call4_button_pane_g1_ParamLimits

0x5a71,	// (0x000a998f) cell_call4_button_pane_g1

0x5a97,	// (0x000a99b5) cell_call4_button_pane_t1_ParamLimits

0x5a97,	// (0x000a99b5) cell_call4_button_pane_t1

0xd56d,	// (0x000b148b) popup_call4_audio_conf_window_ParamLimits

0xd56d,	// (0x000b148b) popup_call4_audio_conf_window

0x4cf6,	// (0x000a8c14) mup3_progress_pane_t1_ParamLimits

0x4d15,	// (0x000a8c33) mup3_progress_pane_t2_ParamLimits

0xce7d,	// (0x000b0d9b) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x000b36bf) mup3_progress_pane_t_ParamLimits

0xce9a,	// (0x000b0db8) mup_progress_pane_cp03_ParamLimits

0x52f4,	// (0x000a9212) mup3_control_keys_pane_g4_copy1

0x9ff8,	// (0x000adf16) mp4_rocker2_pane_ParamLimits

0x9ff8,	// (0x000adf16) mp4_rocker2_pane

0xd581,	// (0x000b149f) mp4_rocker2_pane_g1

0xd589,	// (0x000b14a7) mp4_rocker2_pane_g2

0xa066,	// (0x000adf84) mp4_rocker2_pane_g3

0xa06e,	// (0x000adf8c) mp4_rocker2_pane_g4

0xa076,	// (0x000adf94) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b37ef) mp4_rocker2_pane_g

0x95f3,	// (0x000ad511) main_camera4_pane

0x95f3,	// (0x000ad511) main_video4_pane

0x555e,	// (0x000a947c) main_video_tele_dialer_pane_t1_ParamLimits

0x555e,	// (0x000a947c) main_video_tele_dialer_pane_t1

0x5577,	// (0x000a9495) main_video_tele_dialer_pane_t2_ParamLimits

0x5577,	// (0x000a9495) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b37a9) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b37a9) main_video_tele_dialer_pane_t

0x5ad5,	// (0x000a99f3) cam4_autofocus_pane_ParamLimits

0x5ad5,	// (0x000a99f3) cam4_autofocus_pane

0x5aeb,	// (0x000a9a09) cam4_image_uncrop_pane_ParamLimits

0x5aeb,	// (0x000a9a09) cam4_image_uncrop_pane

0x5b05,	// (0x000a9a23) cam4_indicators_pane_ParamLimits

0x5b05,	// (0x000a9a23) cam4_indicators_pane

0x5b30,	// (0x000a9a4e) main_camera4_pane_g1_ParamLimits

0x5b30,	// (0x000a9a4e) main_camera4_pane_g1

0x5b42,	// (0x000a9a60) main_camera4_pane_g2_ParamLimits

0x5b42,	// (0x000a9a60) main_camera4_pane_g2

0x5b55,	// (0x000a9a73) main_camera4_pane_g3_ParamLimits

0x5b55,	// (0x000a9a73) main_camera4_pane_g3

0x5b68,	// (0x000a9a86) main_camera4_pane_g4_ParamLimits

0x5b68,	// (0x000a9a86) main_camera4_pane_g4

0x5b7b,	// (0x000a9a99) main_camera4_pane_g5_ParamLimits

0x5b7b,	// (0x000a9a99) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b37fa) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b37fa) main_camera4_pane_g

0x5b9f,	// (0x000a9abd) main_camera4_pane_t1_ParamLimits

0x5b9f,	// (0x000a9abd) main_camera4_pane_t1

0xa09a,	// (0x000adfb8) bg_tb_trans_pane_cp06

0xa0b0,	// (0x000adfce) cam4_indicators_pane_g1

0xa0c1,	// (0x000adfdf) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b3815) cam4_indicators_pane_g

0xa0df,	// (0x000adffd) cam4_indicators_pane_t1

0x5c03,	// (0x000a9b21) main_video4_pane_g1_ParamLimits

0x5c03,	// (0x000a9b21) main_video4_pane_g1

0x5c12,	// (0x000a9b30) main_video4_pane_g2_ParamLimits

0x5c12,	// (0x000a9b30) main_video4_pane_g2

0x5c21,	// (0x000a9b3f) main_video4_pane_g3_ParamLimits

0x5c21,	// (0x000a9b3f) main_video4_pane_g3

0x5c30,	// (0x000a9b4e) main_video4_pane_g4_ParamLimits

0x5c30,	// (0x000a9b4e) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b381c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b381c) main_video4_pane_g

0x5c4e,	// (0x000a9b6c) vid4_indicators_pane_ParamLimits

0x5c4e,	// (0x000a9b6c) vid4_indicators_pane

0x5c7c,	// (0x000a9b9a) video4_image_uncrop_cif_pane_ParamLimits

0x5c7c,	// (0x000a9b9a) video4_image_uncrop_cif_pane

0x5c96,	// (0x000a9bb4) video4_image_uncrop_nhd_pane_ParamLimits

0x5c96,	// (0x000a9bb4) video4_image_uncrop_nhd_pane

0x5aeb,	// (0x000a9a09) video4_image_uncrop_vga_pane_ParamLimits

0x5aeb,	// (0x000a9a09) video4_image_uncrop_vga_pane

0x95e5,	// (0x000ad503) bg_tb_trans_pane_cp07

0xa10b,	// (0x000ae029) vid4_indicators_pane_g1

0xa11f,	// (0x000ae03d) vid4_indicators_pane_g2

0xa133,	// (0x000ae051) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b3827) vid4_indicators_pane_g

0xa162,	// (0x000ae080) vid4_indicators_pane_t1

0x5caa,	// (0x000a9bc8) cam4_autofocus_pane_g1

0x5cb2,	// (0x000a9bd0) cam4_autofocus_pane_g2

0x5cba,	// (0x000a9bd8) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b3832) cam4_autofocus_pane_g

0x5cc2,	// (0x000a9be0) cam4_autofocus_pane_g3_copy1

0x55a6,	// (0x000a94c4) video_down_pane_cp_t1

0x55b4,	// (0x000a94d2) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b37ae) video_down_pane_cp_t

0x95e5,	// (0x000ad503) popup_vitu2_window_ParamLimits

0x95e5,	// (0x000ad503) popup_vitu2_window

0x5cca,	// (0x000a9be8) aid_size_cell2_itu2_ParamLimits

0x5cca,	// (0x000a9be8) aid_size_cell2_itu2

0x5cf0,	// (0x000a9c0e) aid_size_cell_itu2_ParamLimits

0x5cf0,	// (0x000a9c0e) aid_size_cell_itu2

0x5d4c,	// (0x000a9c6a) bg_popup_window_pane_cp09_ParamLimits

0x5d4c,	// (0x000a9c6a) bg_popup_window_pane_cp09

0x5d5a,	// (0x000a9c78) field_vitu2_entry_pane_ParamLimits

0x5d5a,	// (0x000a9c78) field_vitu2_entry_pane

0x5d80,	// (0x000a9c9e) grid_vitu2_function_pane_ParamLimits

0x5d80,	// (0x000a9c9e) grid_vitu2_function_pane

0x5dd1,	// (0x000a9cef) grid_vitu2_itu_pane_ParamLimits

0x5dd1,	// (0x000a9cef) grid_vitu2_itu_pane

0x5e64,	// (0x000a9d82) cell_vitu2_itu_pane_ParamLimits

0x5e64,	// (0x000a9d82) cell_vitu2_itu_pane

0x5e88,	// (0x000a9da6) cell_vitu2_function_pane_ParamLimits

0x5e88,	// (0x000a9da6) cell_vitu2_function_pane

0xd591,	// (0x000b14af) bg_popup_call_pane_cp08_ParamLimits

0xd591,	// (0x000b14af) bg_popup_call_pane_cp08

0xd5aa,	// (0x000b14c8) field_vitu2_entry_pane_g1

0xd5b6,	// (0x000b14d4) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b3839) field_vitu2_entry_pane_g

0x5ec7,	// (0x000a9de5) field_vitu2_entry_pane_t1_ParamLimits

0x5ec7,	// (0x000a9de5) field_vitu2_entry_pane_t1

0xd5d0,	// (0x000b14ee) field_vitu2_entry_pane_t2_ParamLimits

0xd5d0,	// (0x000b14ee) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b3840) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b3840) field_vitu2_entry_pane_t

0x5ef6,	// (0x000a9e14) bg_button_pane_cp010_ParamLimits

0x5ef6,	// (0x000a9e14) bg_button_pane_cp010

0x5f04,	// (0x000a9e22) cell_vitu2_itu_pane_g1

0x5f2f,	// (0x000a9e4d) cell_vitu2_itu_pane_t1_ParamLimits

0x5f2f,	// (0x000a9e4d) cell_vitu2_itu_pane_t1

0x01b3,	// (0x000a40d1) cell_vitu2_itu_pane_t2_ParamLimits

0x01b3,	// (0x000a40d1) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b384a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b384a) cell_vitu2_itu_pane_t

0x95e5,	// (0x000ad503) bg_button_pane_cp011

0x5f8d,	// (0x000a9eab) cell_vitu2_function_pane_g1

0x95f3,	// (0x000ad511) main_myfav_hc_pane

0x5953,	// (0x000a9871) popup_image3_note_pane_ParamLimits

0x5953,	// (0x000a9871) popup_image3_note_pane

0x596f,	// (0x000a988d) popup_image3_tool_bar_pane_ParamLimits

0x596f,	// (0x000a988d) popup_image3_tool_bar_pane

0x0241,	// (0x000a415f) cell_vitu2_itu_pane_t3_ParamLimits

0x0241,	// (0x000a415f) cell_vitu2_itu_pane_t3

0xe32f,	// (0x000b224d) bg_popup_trans_pane

0xd5f5,	// (0x000b1513) grid_image3_tool_bar_pane

0xd5ff,	// (0x000b151d) bg_popup_trans_pane_g1

0xa5fc,	// (0x000ae51a) bg_popup_trans_pane_g2

0xd607,	// (0x000b1525) bg_popup_trans_pane_g3

0xd60f,	// (0x000b152d) bg_popup_trans_pane_g4

0xd617,	// (0x000b1535) bg_popup_trans_pane_g5

0xd61f,	// (0x000b153d) bg_popup_trans_pane_g6

0xd627,	// (0x000b1545) bg_popup_trans_pane_g7

0xd62f,	// (0x000b154d) bg_popup_trans_pane_g8

0xa5dc,	// (0x000ae4fa) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b3851) bg_popup_trans_pane_g

0xd637,	// (0x000b1555) cell_image3_tool_bar_pane_ParamLimits

0xd637,	// (0x000b1555) cell_image3_tool_bar_pane

0xcb47,	// (0x000b0a65) cell_image3_tool_bar_pane_g1

0xe32f,	// (0x000b224d) bg_popup_trans_pane_cp1

0xd66f,	// (0x000b158d) popup_image3_note_pane_t1

0xd67d,	// (0x000b159b) popup_image3_note_pane_t2

0xd68b,	// (0x000b15a9) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b3864) popup_image3_note_pane_t

0xd699,	// (0x000b15b7) popup_image3_note_pane_t3_copy1

0x5fa1,	// (0x000a9ebf) bg_myfav_hc_instruction_pane_ParamLimits

0x5fa1,	// (0x000a9ebf) bg_myfav_hc_instruction_pane

0x5fb5,	// (0x000a9ed3) cell_myfav_contact_pane_ParamLimits

0x5fb5,	// (0x000a9ed3) cell_myfav_contact_pane

0x5fd3,	// (0x000a9ef1) cell_myfav_contact_pane_cp1_ParamLimits

0x5fd3,	// (0x000a9ef1) cell_myfav_contact_pane_cp1

0x5feb,	// (0x000a9f09) cell_myfav_contact_pane_cp2_ParamLimits

0x5feb,	// (0x000a9f09) cell_myfav_contact_pane_cp2

0x6003,	// (0x000a9f21) cell_myfav_contact_pane_cp3_ParamLimits

0x6003,	// (0x000a9f21) cell_myfav_contact_pane_cp3

0x601a,	// (0x000a9f38) cell_myfav_contact_pane_cp4_ParamLimits

0x601a,	// (0x000a9f38) cell_myfav_contact_pane_cp4

0x6032,	// (0x000a9f50) cell_myfav_contact_pane_cp5_ParamLimits

0x6032,	// (0x000a9f50) cell_myfav_contact_pane_cp5

0x6046,	// (0x000a9f64) cell_myfav_contact_pane_cp6_ParamLimits

0x6046,	// (0x000a9f64) cell_myfav_contact_pane_cp6

0x605c,	// (0x000a9f7a) cell_myfav_contact_pane_cp7_ParamLimits

0x605c,	// (0x000a9f7a) cell_myfav_contact_pane_cp7

0xd6a7,	// (0x000b15c5) listscroll_gen_pane_cp05

0x6076,	// (0x000a9f94) main_myfav_hc_pane_g1_ParamLimits

0x6076,	// (0x000a9f94) main_myfav_hc_pane_g1

0x6090,	// (0x000a9fae) main_myfav_hc_pane_g2_ParamLimits

0x6090,	// (0x000a9fae) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b386b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b386b) main_myfav_hc_pane_g

0x60c2,	// (0x000a9fe0) main_myfav_hc_pane_t1_ParamLimits

0x60c2,	// (0x000a9fe0) main_myfav_hc_pane_t1

0xd6b0,	// (0x000b15ce) main_myfav_hc_pane_t2_ParamLimits

0xd6b0,	// (0x000b15ce) main_myfav_hc_pane_t2

0xd6c2,	// (0x000b15e0) main_myfav_hc_pane_t3_ParamLimits

0xd6c2,	// (0x000b15e0) main_myfav_hc_pane_t3

0x60d9,	// (0x000a9ff7) main_myfav_hc_pane_t4_ParamLimits

0x60d9,	// (0x000a9ff7) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b3872) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b3872) main_myfav_hc_pane_t

0xcb47,	// (0x000b0a65) bg_myfav_hc_instruction_pane_g1

0xd6d4,	// (0x000b15f2) cell_myfav_contact_pane_g1_ParamLimits

0xd6d4,	// (0x000b15f2) cell_myfav_contact_pane_g1

0xd6d4,	// (0x000b15f2) cell_myfav_contact_pane_g2_ParamLimits

0xd6d4,	// (0x000b15f2) cell_myfav_contact_pane_g2

0xd6e0,	// (0x000b15fe) cell_myfav_contact_pane_g3_ParamLimits

0xd6e0,	// (0x000b15fe) cell_myfav_contact_pane_g3

0xce67,	// (0x000b0d85) cell_myfav_contact_pane_g4_ParamLimits

0xce67,	// (0x000b0d85) cell_myfav_contact_pane_g4

0xd6ed,	// (0x000b160b) cell_myfav_contact_pane_g5_ParamLimits

0xd6ed,	// (0x000b160b) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b387d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b387d) cell_myfav_contact_pane_g

0x60aa,	// (0x000a9fc8) main_myfav_hc_pane_g3_ParamLimits

0x60aa,	// (0x000a9fc8) main_myfav_hc_pane_g3

0x043a,	// (0x000a4358) popup_adpt_find_window

0x6101,	// (0x000aa01f) afind_page_pane_ParamLimits

0x6101,	// (0x000aa01f) afind_page_pane

0x6116,	// (0x000aa034) aid_size_cell_afind_ParamLimits

0x6116,	// (0x000aa034) aid_size_cell_afind

0x6134,	// (0x000aa052) bg_popup_sub_pane_cp09_ParamLimits

0x6134,	// (0x000aa052) bg_popup_sub_pane_cp09

0x6141,	// (0x000aa05f) find_pane_cp01_ParamLimits

0x6141,	// (0x000aa05f) find_pane_cp01

0xd6f9,	// (0x000b1617) grid_afind_control_pane_ParamLimits

0xd6f9,	// (0x000b1617) grid_afind_control_pane

0x614e,	// (0x000aa06c) grid_afind_pane_ParamLimits

0x614e,	// (0x000aa06c) grid_afind_pane

0x6170,	// (0x000aa08e) cell_afind_pane_ParamLimits

0x6170,	// (0x000aa08e) cell_afind_pane

0xcb47,	// (0x000b0a65) afind_page_pane_g1

0x61d1,	// (0x000aa0ef) afind_page_pane_g2

0x61da,	// (0x000aa0f8) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b3888) afind_page_pane_g

0x61e3,	// (0x000aa101) afind_page_pane_t1

0xd70d,	// (0x000b162b) cell_afind_grid_control_pane_ParamLimits

0xd70d,	// (0x000b162b) cell_afind_grid_control_pane

0xd4a2,	// (0x000b13c0) bg_button_pane_cp69_ParamLimits

0xd4a2,	// (0x000b13c0) bg_button_pane_cp69

0x6203,	// (0x000aa121) cell_afind_pane_g1_ParamLimits

0x6203,	// (0x000aa121) cell_afind_pane_g1

0x6210,	// (0x000aa12e) cell_afind_pane_t1_ParamLimits

0x6210,	// (0x000aa12e) cell_afind_pane_t1

0xa3f5,	// (0x000ae313) bg_button_pane_cp72

0xd71c,	// (0x000b163a) cell_afind_grid_control_pane_g1

0x3271,	// (0x000a718f) aid_image_placing_area_ParamLimits

0x3271,	// (0x000a718f) aid_image_placing_area

0xd170,	// (0x000b108e) field_vitu_entry_pane_g1_ParamLimits

0xd170,	// (0x000b108e) field_vitu_entry_pane_g1

0xd17c,	// (0x000b109a) field_vitu_entry_pane_g2_ParamLimits

0xd17c,	// (0x000b109a) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b3739) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b3739) field_vitu_entry_pane_g

0x53bb,	// (0x000a92d9) cell_vitu_itu_pane_g1_ParamLimits

0x53fd,	// (0x000a931b) cell_vitu_itu_pane_t3_ParamLimits

0x53fd,	// (0x000a931b) cell_vitu_itu_pane_t3

0xd452,	// (0x000b1370) mp4_progress_pane_t1_ParamLimits

0xd46b,	// (0x000b1389) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b37ce) mp4_progress_pane_t_ParamLimits

0xd484,	// (0x000b13a2) mup_progress_pane_cp04_ParamLimits

0x60ed,	// (0x000aa00b) main_myfav_hc_pane_t5_ParamLimits

0x60ed,	// (0x000aa00b) main_myfav_hc_pane_t5

0x0303,	// (0x000a4221) aid_zoom_text_primary

0x043a,	// (0x000a4358) popup_adpt_find_window_ParamLimits

0x95e5,	// (0x000ad503) main_cam_set_pane

0x5b1c,	// (0x000a9a3a) cam4_zoom_pane_ParamLimits

0x5b1c,	// (0x000a9a3a) cam4_zoom_pane

0x6222,	// (0x000aa140) main_cam_set_pane_g1_ParamLimits

0x6222,	// (0x000aa140) main_cam_set_pane_g1

0x6230,	// (0x000aa14e) main_cam_set_pane_g2_ParamLimits

0x6230,	// (0x000aa14e) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b388f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b388f) main_cam_set_pane_g

0x6251,	// (0x000aa16f) main_cam_set_pane_t1_ParamLimits

0x6251,	// (0x000aa16f) main_cam_set_pane_t1

0x626c,	// (0x000aa18a) main_cset_listscroll_pane_ParamLimits

0x626c,	// (0x000aa18a) main_cset_listscroll_pane

0x628c,	// (0x000aa1aa) main_cset_slider_pane_ParamLimits

0x628c,	// (0x000aa1aa) main_cset_slider_pane

0xd72d,	// (0x000b164b) main_cset_list_pane_ParamLimits

0xd72d,	// (0x000b164b) main_cset_list_pane

0xd73d,	// (0x000b165b) scroll_pane_cp028

0x62b2,	// (0x000aa1d0) aid_area_touch_slider

0x62ce,	// (0x000aa1ec) cset_slider_pane

0x62f8,	// (0x000aa216) main_cset_slider_pane_g1

0x630d,	// (0x000aa22b) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b3894) main_cset_slider_pane_g

0xd776,	// (0x000b1694) main_cset_slider_pane_t1

0x63c9,	// (0x000aa2e7) main_cset_slider_pane_t2

0x63e3,	// (0x000aa301) main_cset_slider_pane_t3

0x63fd,	// (0x000aa31b) main_cset_slider_pane_t4

0x6417,	// (0x000aa335) main_cset_slider_pane_t5

0x6431,	// (0x000aa34f) main_cset_slider_pane_t6

0x6446,	// (0x000aa364) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b38b9) main_cset_slider_pane_t

0x654a,	// (0x000aa468) cset_list_set_pane_ParamLimits

0x654a,	// (0x000aa468) cset_list_set_pane

0x655c,	// (0x000aa47a) aid_position_infowindow_above

0x6564,	// (0x000aa482) aid_position_infowindow_below

0xf038,	// (0x000b2f56) cset_list_set_pane_g1_ParamLimits

0xf038,	// (0x000b2f56) cset_list_set_pane_g1

0xd816,	// (0x000b1734) cset_list_set_pane_g3_ParamLimits

0xd816,	// (0x000b1734) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b38d8) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b38d8) cset_list_set_pane_g

0xd825,	// (0x000b1743) cset_list_set_pane_t1_ParamLimits

0xd825,	// (0x000b1743) cset_list_set_pane_t1

0xb752,	// (0x000af670) list_highlight_pane_cp021_ParamLimits

0xb752,	// (0x000af670) list_highlight_pane_cp021

0xaf41,	// (0x000aee5f) cset_slider_pane_g1

0xaf53,	// (0x000aee71) cset_slider_pane_g2

0xaf4a,	// (0x000aee68) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b38dd) cset_slider_pane_g

0xa179,	// (0x000ae097) aid_area_touch_cam4_zoom

0xa181,	// (0x000ae09f) cam4_zoom_cont_pane

0xa189,	// (0x000ae0a7) cam4_zoom_pane_g1

0xa191,	// (0x000ae0af) cam4_zoom_pane_g2

0x656c,	// (0x000aa48a) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b38e4) cam4_zoom_pane_g

0xa199,	// (0x000ae0b7) cam4_zoom_cont_pane_g1

0xa1a2,	// (0x000ae0c0) cam4_zoom_cont_pane_g2

0xa1ab,	// (0x000ae0c9) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b38eb) cam4_zoom_cont_pane_g

0x59dc,	// (0x000a98fa) call4_image_pane_ParamLimits

0x59dc,	// (0x000a98fa) call4_image_pane

0xd4ae,	// (0x000b13cc) call4_windows_conf_pane_ParamLimits

0xd4ef,	// (0x000b140d) popup_call4_audio_in_window_ParamLimits

0xd4ef,	// (0x000b140d) popup_call4_audio_in_window

0xe32f,	// (0x000b224d) bg_popup_call2_act_pane_cp02

0xd565,	// (0x000b1483) call4_list_conf_pane

0xcb47,	// (0x000b0a65) call4_image_pane_g1

0xcb47,	// (0x000b0a65) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x000b35ff) call4_image_pane_g

0xd83a,	// (0x000b1758) list_single_graphic_popup_conf4_pane_ParamLimits

0xd83a,	// (0x000b1758) list_single_graphic_popup_conf4_pane

0xe32f,	// (0x000b224d) list_highlight_pane_cp022

0xd84d,	// (0x000b176b) list_single_graphic_popup_conf4_pane_g1

0xab0a,	// (0x000aea28) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b38f2) list_single_graphic_popup_conf4_pane_g

0xd855,	// (0x000b1773) list_single_graphic_popup_conf4_pane_t1

0x160f,	// (0x000a552d) popup_vtel_slider_window_ParamLimits

0x160f,	// (0x000a552d) popup_vtel_slider_window

0xd490,	// (0x000b13ae) dialer2_ne_pane_t2_ParamLimits

0xd490,	// (0x000b13ae) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b37d3) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b37d3) dialer2_ne_pane_t

0xc923,	// (0x000b0841) bg_popup_sub_pane_cp010_ParamLimits

0xc923,	// (0x000b0841) bg_popup_sub_pane_cp010

0x6574,	// (0x000aa492) popup_vtel_slider_window_g1_ParamLimits

0x6574,	// (0x000aa492) popup_vtel_slider_window_g1

0x6587,	// (0x000aa4a5) popup_vtel_slider_window_g2_ParamLimits

0x6587,	// (0x000aa4a5) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b38f7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b38f7) popup_vtel_slider_window_g

0x65dd,	// (0x000aa4fb) vtel_slider_pane_ParamLimits

0x65dd,	// (0x000aa4fb) vtel_slider_pane

0x65ff,	// (0x000aa51d) vtel_slider_pane_g1_ParamLimits

0x65ff,	// (0x000aa51d) vtel_slider_pane_g1

0x6613,	// (0x000aa531) vtel_slider_pane_g2_ParamLimits

0x6613,	// (0x000aa531) vtel_slider_pane_g2

0x662b,	// (0x000aa549) vtel_slider_pane_g3_ParamLimits

0x662b,	// (0x000aa549) vtel_slider_pane_g3

0x65ff,	// (0x000aa51d) vtel_slider_pane_g4_ParamLimits

0x65ff,	// (0x000aa51d) vtel_slider_pane_g4

0x6641,	// (0x000aa55f) vtel_slider_pane_g5_ParamLimits

0x6641,	// (0x000aa55f) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b3900) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b3900) vtel_slider_pane_g

0x95e5,	// (0x000ad503) main_gallery2_pane

0x5d1c,	// (0x000a9c3a) aid_size_row_itut2_dropdow_list_ParamLimits

0x5d1c,	// (0x000a9c3a) aid_size_row_itut2_dropdow_list

0x5da8,	// (0x000a9cc6) grid_vitu2_function_top_pane_ParamLimits

0x5da8,	// (0x000a9cc6) grid_vitu2_function_top_pane

0x5e0d,	// (0x000a9d2b) popup_vitu2_dropdown_list_window_ParamLimits

0x5e0d,	// (0x000a9d2b) popup_vitu2_dropdown_list_window

0x5e36,	// (0x000a9d54) popup_vitu2_match_list_window

0x6665,	// (0x000aa583) cell_vitu2_function_top_pane_ParamLimits

0x6665,	// (0x000aa583) cell_vitu2_function_top_pane

0x6683,	// (0x000aa5a1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6683,	// (0x000aa5a1) cell_vitu2_function_top_pane_cp01

0x66a1,	// (0x000aa5bf) cell_vitu2_function_top_wide_pane_ParamLimits

0x66a1,	// (0x000aa5bf) cell_vitu2_function_top_wide_pane

0x95e5,	// (0x000ad503) bg_button_pane_cp012

0x66bf,	// (0x000aa5dd) cell_vitu2_function_top_pane_g1

0xa1b4,	// (0x000ae0d2) bg_button_pane_cp013_ParamLimits

0xa1b4,	// (0x000ae0d2) bg_button_pane_cp013

0x66d3,	// (0x000aa5f1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x66d3,	// (0x000aa5f1) cell_vitu2_function_top_wide_pane_g1

0x95e5,	// (0x000ad503) bg_popup_sub_pane_cp20

0x66eb,	// (0x000aa609) list_vitu2_match_list_pane

0xd5ff,	// (0x000b151d) bg_popup_sub_pane_cp20_g1

0xd607,	// (0x000b1525) bg_popup_sub_pane_cp20_g2

0xa5fc,	// (0x000ae51a) bg_popup_sub_pane_cp20_g3

0xd60f,	// (0x000b152d) bg_popup_sub_pane_cp20_g4

0xa5dc,	// (0x000ae4fa) bg_popup_sub_pane_cp20_g5

0xd86b,	// (0x000b1789) bg_popup_sub_pane_cp20_g6

0xd61f,	// (0x000b153d) bg_popup_sub_pane_cp20_g7

0xd627,	// (0x000b1545) bg_popup_sub_pane_cp20_g8

0xd62f,	// (0x000b154d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b390b) bg_popup_sub_pane_cp20_g

0xa1d0,	// (0x000ae0ee) list_vitu2_match_list_item_pane_ParamLimits

0xa1d0,	// (0x000ae0ee) list_vitu2_match_list_item_pane

0xa1e2,	// (0x000ae100) list_vitu2_match_list_item_pane_t1

0x95f3,	// (0x000ad511) bg_popup_sub_pane_cp21

0xa1f0,	// (0x000ae10e) grid_vitu2_dropdown_list_pane

0x6753,	// (0x000aa671) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6753,	// (0x000aa671) cell_vitu2_dropdown_list_char_pane

0x6774,	// (0x000aa692) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6774,	// (0x000aa692) cell_vitu2_dropdown_list_ctrl_pane

0xd873,	// (0x000b1791) cell_vitu2_dropdown_list_char_pane_g1

0xd87c,	// (0x000b179a) cell_vitu2_dropdown_list_char_pane_g2

0xd885,	// (0x000b17a3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b3928) cell_vitu2_dropdown_list_char_pane_g

0x67a0,	// (0x000aa6be) cell_vitu2_dropdown_list_char_pane_t1

0x67ae,	// (0x000aa6cc) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x67ae,	// (0x000aa6cc) cell_vitu2_dropdown_list_ctrl_pane_g1

0x67bb,	// (0x000aa6d9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x67bb,	// (0x000aa6d9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x67c8,	// (0x000aa6e6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x67c8,	// (0x000aa6e6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x67d5,	// (0x000aa6f3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x67d5,	// (0x000aa6f3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa09a,	// (0x000adfb8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa09a,	// (0x000adfb8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b392f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b392f) cell_vitu2_dropdown_list_ctrl_pane_g

0x67f1,	// (0x000aa70f) aid_size_cell_gallery2_ParamLimits

0x67f1,	// (0x000aa70f) aid_size_cell_gallery2

0x680f,	// (0x000aa72d) grid_gallery2_pane_ParamLimits

0x680f,	// (0x000aa72d) grid_gallery2_pane

0x6829,	// (0x000aa747) scroll_pane_cp029_ParamLimits

0x6829,	// (0x000aa747) scroll_pane_cp029

0x6835,	// (0x000aa753) cell_gallery2_pane_ParamLimits

0x6835,	// (0x000aa753) cell_gallery2_pane

0xd88e,	// (0x000b17ac) cell_gallery2_pane_g2

0x6890,	// (0x000aa7ae) cell_gallery2_pane_g3

0xd896,	// (0x000b17b4) cell_gallery2_pane_g4

0xd89e,	// (0x000b17bc) cell_gallery2_pane_g5

0xadfd,	// (0x000aed1b) grid_highlight_pane_cp10

0x5e36,	// (0x000a9d54) popup_vitu2_match_list_window_ParamLimits

0x5e4d,	// (0x000a9d6b) popup_vitu2_query_window_ParamLimits

0x5e4d,	// (0x000a9d6b) popup_vitu2_query_window

0x95f3,	// (0x000ad511) bg_vitu2_candi_button_pane

0xd873,	// (0x000b1791) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd87c,	// (0x000b179a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd885,	// (0x000b17a3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6898,	// (0x000aa7b6) bg_button_pane_cp015

0x68aa,	// (0x000aa7c8) bg_button_pane_cp016

0x68bd,	// (0x000aa7db) bg_button_pane_cp017

0xc736,	// (0x000b0654) bg_popup_sub_pane_cp22

0xd8a6,	// (0x000b17c4) popup_vitu2_query_window_g1

0x6902,	// (0x000aa820) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b393a) popup_vitu2_query_window_g

0x6921,	// (0x000aa83f) popup_vitu2_query_window_t1_ParamLimits

0x6921,	// (0x000aa83f) popup_vitu2_query_window_t1

0x6956,	// (0x000aa874) popup_vitu2_query_window_t2_ParamLimits

0x6956,	// (0x000aa874) popup_vitu2_query_window_t2

0x6968,	// (0x000aa886) popup_vitu2_query_window_t3_ParamLimits

0x6968,	// (0x000aa886) popup_vitu2_query_window_t3

0x6990,	// (0x000aa8ae) popup_vitu2_query_window_t4_ParamLimits

0x6990,	// (0x000aa8ae) popup_vitu2_query_window_t4

0x69b1,	// (0x000aa8cf) popup_vitu2_query_window_t5_ParamLimits

0x69b1,	// (0x000aa8cf) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b3941) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b3941) popup_vitu2_query_window_t

0xd725,	// (0x000b1643) main_cset_text_pane

0x62b2,	// (0x000aa1d0) aid_area_touch_slider_ParamLimits

0x62ce,	// (0x000aa1ec) cset_slider_pane_ParamLimits

0x62f8,	// (0x000aa216) main_cset_slider_pane_g1_ParamLimits

0x630d,	// (0x000aa22b) main_cset_slider_pane_g2_ParamLimits

0xd746,	// (0x000b1664) main_cset_slider_pane_g3_ParamLimits

0xd746,	// (0x000b1664) main_cset_slider_pane_g3

0x6322,	// (0x000aa240) main_cset_slider_pane_g4_ParamLimits

0x6322,	// (0x000aa240) main_cset_slider_pane_g4

0x6331,	// (0x000aa24f) main_cset_slider_pane_g5_ParamLimits

0x6331,	// (0x000aa24f) main_cset_slider_pane_g5

0x633d,	// (0x000aa25b) main_cset_slider_pane_g6_ParamLimits

0x633d,	// (0x000aa25b) main_cset_slider_pane_g6

0xf976,	// (0x000b3894) main_cset_slider_pane_g_ParamLimits

0xd776,	// (0x000b1694) main_cset_slider_pane_t1_ParamLimits

0x63c9,	// (0x000aa2e7) main_cset_slider_pane_t2_ParamLimits

0x63e3,	// (0x000aa301) main_cset_slider_pane_t3_ParamLimits

0x63fd,	// (0x000aa31b) main_cset_slider_pane_t4_ParamLimits

0x6417,	// (0x000aa335) main_cset_slider_pane_t5_ParamLimits

0x6431,	// (0x000aa34f) main_cset_slider_pane_t6_ParamLimits

0x6446,	// (0x000aa364) main_cset_slider_pane_t7_ParamLimits

0x6470,	// (0x000aa38e) main_cset_slider_pane_t8_ParamLimits

0x6470,	// (0x000aa38e) main_cset_slider_pane_t8

0x6498,	// (0x000aa3b6) main_cset_slider_pane_t9_ParamLimits

0x6498,	// (0x000aa3b6) main_cset_slider_pane_t9

0x64c0,	// (0x000aa3de) main_cset_slider_pane_t10_ParamLimits

0x64c0,	// (0x000aa3de) main_cset_slider_pane_t10

0x64e8,	// (0x000aa406) main_cset_slider_pane_t11_ParamLimits

0x64e8,	// (0x000aa406) main_cset_slider_pane_t11

0x6510,	// (0x000aa42e) main_cset_slider_pane_t12_ParamLimits

0x6510,	// (0x000aa42e) main_cset_slider_pane_t12

0x652d,	// (0x000aa44b) main_cset_slider_pane_t13_ParamLimits

0x652d,	// (0x000aa44b) main_cset_slider_pane_t13

0xf99b,	// (0x000b38b9) main_cset_slider_pane_t_ParamLimits

0xe32f,	// (0x000b224d) bg_popup_sub_pane_cp011

0xd8b2,	// (0x000b17d0) main_cset_text_pane_g1

0xd8ba,	// (0x000b17d8) main_cset_text_pane_t1

0xd8c8,	// (0x000b17e6) main_cset_text_pane_t2

0xd8d6,	// (0x000b17f4) main_cset_text_pane_t3

0xd8e4,	// (0x000b1802) main_cset_text_pane_t4

0xd8f2,	// (0x000b1810) main_cset_text_pane_t5

0xd900,	// (0x000b181e) main_cset_text_pane_t6

0xd90e,	// (0x000b182c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b3950) main_cset_text_pane_t

0x95f3,	// (0x000ad511) main_cam4_burst_pane

0x95f3,	// (0x000ad511) main_cam5_pane

0x61f1,	// (0x000aa10f) bg_button_pane_cp019

0x61fa,	// (0x000aa118) bg_button_pane_cp020

0xd752,	// (0x000b1670) main_cset_slider_pane_g7_ParamLimits

0xd752,	// (0x000b1670) main_cset_slider_pane_g7

0xd75e,	// (0x000b167c) main_cset_slider_pane_g8_ParamLimits

0xd75e,	// (0x000b167c) main_cset_slider_pane_g8

0x6351,	// (0x000aa26f) main_cset_slider_pane_g9_ParamLimits

0x6351,	// (0x000aa26f) main_cset_slider_pane_g9

0x635d,	// (0x000aa27b) main_cset_slider_pane_g10_ParamLimits

0x635d,	// (0x000aa27b) main_cset_slider_pane_g10

0x6369,	// (0x000aa287) main_cset_slider_pane_g11_ParamLimits

0x6369,	// (0x000aa287) main_cset_slider_pane_g11

0x6375,	// (0x000aa293) main_cset_slider_pane_g12_ParamLimits

0x6375,	// (0x000aa293) main_cset_slider_pane_g12

0x6381,	// (0x000aa29f) main_cset_slider_pane_g13_ParamLimits

0x6381,	// (0x000aa29f) main_cset_slider_pane_g13

0x638d,	// (0x000aa2ab) main_cset_slider_pane_g14_ParamLimits

0x638d,	// (0x000aa2ab) main_cset_slider_pane_g14

0x6399,	// (0x000aa2b7) main_cset_slider_pane_g15_ParamLimits

0x6399,	// (0x000aa2b7) main_cset_slider_pane_g15

0xd7a4,	// (0x000b16c2) main_cset_slider_pane_t14_ParamLimits

0xd7a4,	// (0x000b16c2) main_cset_slider_pane_t14

0xd7dd,	// (0x000b16fb) main_cset_slider_pane_t15_ParamLimits

0xd7dd,	// (0x000b16fb) main_cset_slider_pane_t15

0x6a28,	// (0x000aa946) aid_cam4_burst_size_cell_ParamLimits

0x6a28,	// (0x000aa946) aid_cam4_burst_size_cell

0x6a48,	// (0x000aa966) grid_cam4_burst_pane_ParamLimits

0x6a48,	// (0x000aa966) grid_cam4_burst_pane

0x6a80,	// (0x000aa99e) linegrid_cam4_burst_pane_ParamLimits

0x6a80,	// (0x000aa99e) linegrid_cam4_burst_pane

0xd91c,	// (0x000b183a) scroll_pane_cp30_ParamLimits

0xd91c,	// (0x000b183a) scroll_pane_cp30

0x6aa4,	// (0x000aa9c2) cell_cam4_burst_pane_ParamLimits

0x6aa4,	// (0x000aa9c2) cell_cam4_burst_pane

0xd928,	// (0x000b1846) linegrid_cam4_burst_pane_g1_ParamLimits

0xd928,	// (0x000b1846) linegrid_cam4_burst_pane_g1

0x6af1,	// (0x000aaa0f) linegrid_cam4_burst_pane_g2_ParamLimits

0x6af1,	// (0x000aaa0f) linegrid_cam4_burst_pane_g2

0xd935,	// (0x000b1853) linegrid_cam4_burst_pane_g3_ParamLimits

0xd935,	// (0x000b1853) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b395f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b395f) linegrid_cam4_burst_pane_g

0x6b02,	// (0x000aaa20) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b02,	// (0x000aaa20) linegrid_cam4_burst_pane_g3_copy1

0xd942,	// (0x000b1860) linegrid_cam4_burst_pane_g4_ParamLimits

0xd942,	// (0x000b1860) linegrid_cam4_burst_pane_g4

0x6b1c,	// (0x000aaa3a) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b1c,	// (0x000aaa3a) linegrid_cam4_burst_pane_g5

0x6b2d,	// (0x000aaa4b) linegrid_cam4_burst_pane_g6_ParamLimits

0x6b2d,	// (0x000aaa4b) linegrid_cam4_burst_pane_g6

0xd94f,	// (0x000b186d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd94f,	// (0x000b186d) linegrid_cam4_burst_pane_g7

0x6b44,	// (0x000aaa62) cell_cam4_burst_pane_g1

0xd968,	// (0x000b1886) main_cam5_pane_t1_ParamLimits

0xd968,	// (0x000b1886) main_cam5_pane_t1

0xd97a,	// (0x000b1898) main_cam5_pane_t2_ParamLimits

0xd97a,	// (0x000b1898) main_cam5_pane_t2

0xd98c,	// (0x000b18aa) main_cam5_pane_t3_ParamLimits

0xd98c,	// (0x000b18aa) main_cam5_pane_t3

0xd99e,	// (0x000b18bc) main_cam5_pane_t4_ParamLimits

0xd99e,	// (0x000b18bc) main_cam5_pane_t4

0xd9b6,	// (0x000b18d4) main_cam5_pane_t5_ParamLimits

0xd9b6,	// (0x000b18d4) main_cam5_pane_t5

0xd9ca,	// (0x000b18e8) main_cam5_pane_t6_ParamLimits

0xd9ca,	// (0x000b18e8) main_cam5_pane_t6

0xd9de,	// (0x000b18fc) main_cam5_pane_t7_ParamLimits

0xd9de,	// (0x000b18fc) main_cam5_pane_t7

0xd9f0,	// (0x000b190e) main_cam5_pane_t8_ParamLimits

0xd9f0,	// (0x000b190e) main_cam5_pane_t8

0xda0c,	// (0x000b192a) main_cam5_pane_t9_ParamLimits

0xda0c,	// (0x000b192a) main_cam5_pane_t9

0xda1e,	// (0x000b193c) main_cam5_pane_t10_ParamLimits

0xda1e,	// (0x000b193c) main_cam5_pane_t10

0xda30,	// (0x000b194e) main_cam5_pane_t11_ParamLimits

0xda30,	// (0x000b194e) main_cam5_pane_t11

0xda42,	// (0x000b1960) main_cam5_pane_t12_ParamLimits

0xda42,	// (0x000b1960) main_cam5_pane_t12

0xda57,	// (0x000b1975) main_cam5_pane_t13_ParamLimits

0xda57,	// (0x000b1975) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b396b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b396b) main_cam5_pane_t

0x04bc,	// (0x000a43da) popup_scut_keymap_window_ParamLimits

0x04bc,	// (0x000a43da) popup_scut_keymap_window

0x6b57,	// (0x000aaa75) aid_size_cell_brow_shortcut

0xadfd,	// (0x000aed1b) bg_popup_window_pane_cp010

0x6b63,	// (0x000aaa81) grid_scut_pane

0x6b6f,	// (0x000aaa8d) cell_scut_pane_ParamLimits

0x6b6f,	// (0x000aaa8d) cell_scut_pane

0x6b86,	// (0x000aaaa4) cell_scut_pane_g1

0xda74,	// (0x000b1992) cell_scut_pane_t1

0xda83,	// (0x000b19a1) cell_scut_pane_t2

0x6b8f,	// (0x000aaaad) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b3986) cell_scut_pane_t

0x48af,	// (0x000a87cd) main_mup3_pane_g8_ParamLimits

0x48af,	// (0x000a87cd) main_mup3_pane_g8

0x5d34,	// (0x000a9c52) area_vitu2_query_pane_ParamLimits

0x5d34,	// (0x000a9c52) area_vitu2_query_pane

0x68d0,	// (0x000aa7ee) input_focus_pane_cp08

0xda92,	// (0x000b19b0) area_vitu2_query_pane_g1

0x6b9d,	// (0x000aaabb) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b398d) area_vitu2_query_pane_g

0x6bae,	// (0x000aaacc) area_vitu2_query_pane_t1_ParamLimits

0x6bae,	// (0x000aaacc) area_vitu2_query_pane_t1

0x6bc2,	// (0x000aaae0) area_vitu2_query_pane_t2_ParamLimits

0x6bc2,	// (0x000aaae0) area_vitu2_query_pane_t2

0x6bd6,	// (0x000aaaf4) area_vitu2_query_pane_t3_ParamLimits

0x6bd6,	// (0x000aaaf4) area_vitu2_query_pane_t3

0xda9e,	// (0x000b19bc) area_vitu2_query_pane_t4_ParamLimits

0xda9e,	// (0x000b19bc) area_vitu2_query_pane_t4

0xdac6,	// (0x000b19e4) area_vitu2_query_pane_t5_ParamLimits

0xdac6,	// (0x000b19e4) area_vitu2_query_pane_t5

0xdaee,	// (0x000b1a0c) area_vitu2_query_pane_t6_ParamLimits

0xdaee,	// (0x000b1a0c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b3992) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b3992) area_vitu2_query_pane_t

0x6bfe,	// (0x000aab1c) bg_button_pane_cp018

0x6c0c,	// (0x000aab2a) bg_button_pane_cp021

0x6c18,	// (0x000aab36) bg_button_pane_cp022

0x6c27,	// (0x000aab45) input_focus_pane_cp09

0xac46,	// (0x000aeb64) aid_size_touch_mv_arrow_left

0xac6f,	// (0x000aeb8d) aid_size_touch_mv_arrow_right

0x63b1,	// (0x000aa2cf) main_cset_slider_pane_g16_ParamLimits

0x63b1,	// (0x000aa2cf) main_cset_slider_pane_g16

0x63bd,	// (0x000aa2db) main_cset_slider_pane_g17_ParamLimits

0x63bd,	// (0x000aa2db) main_cset_slider_pane_g17

0x6b44,	// (0x000aaa62) cell_cam4_burst_pane_g1_ParamLimits

0xe32f,	// (0x000b224d) compa_mode_pane

0x6597,	// (0x000aa4b5) popup_vtel_slider_window_g3_ParamLimits

0x6597,	// (0x000aa4b5) popup_vtel_slider_window_g3

0x65ae,	// (0x000aa4cc) popup_vtel_slider_window_g4_ParamLimits

0x65ae,	// (0x000aa4cc) popup_vtel_slider_window_g4

0x65c5,	// (0x000aa4e3) popup_vtel_slider_window_t1_ParamLimits

0x65c5,	// (0x000aa4e3) popup_vtel_slider_window_t1

0x95f3,	// (0x000ad511) main_cl_pane

0x9d0a,	// (0x000adc28) popup_imed_adjust2_window_ParamLimits

0xc736,	// (0x000b0654) bg_tb_trans_pane_cp05_ParamLimits

0xd0a5,	// (0x000b0fc3) popup_imed_adjust2_window_g1_ParamLimits

0xd0b4,	// (0x000b0fd2) popup_imed_adjust2_window_g2_ParamLimits

0xd0b4,	// (0x000b0fd2) popup_imed_adjust2_window_g2

0xd0c0,	// (0x000b0fde) popup_imed_adjust2_window_g3_ParamLimits

0xd0c0,	// (0x000b0fde) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b36fd) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b36fd) popup_imed_adjust2_window_g

0xd0cc,	// (0x000b0fea) popup_imed_adjust2_window_t1_ParamLimits

0xd0e4,	// (0x000b1002) slider_imed_adjust_pane_ParamLimits

0xd0f8,	// (0x000b1016) slider_imed_adjust_pane_g1_ParamLimits

0xd108,	// (0x000b1026) slider_imed_adjust_pane_g2_ParamLimits

0xd118,	// (0x000b1036) slider_imed_adjust_pane_g3_ParamLimits

0xd129,	// (0x000b1047) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b3704) slider_imed_adjust_pane_g_ParamLimits

0x5abd,	// (0x000a99db) aid_touch_area_cam4_ParamLimits

0x5abd,	// (0x000a99db) aid_touch_area_cam4

0xa07e,	// (0x000adf9c) battery_pane_cp01

0x5b8c,	// (0x000a9aaa) main_camera4_pane_g6_ParamLimits

0x5b8c,	// (0x000a9aaa) main_camera4_pane_g6

0x5bb6,	// (0x000a9ad4) main_camera4_pane_t2_ParamLimits

0x5bb6,	// (0x000a9ad4) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b3807) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b3807) main_camera4_pane_t

0x5beb,	// (0x000a9b09) aid_touch_area_vid4_ParamLimits

0x5beb,	// (0x000a9b09) aid_touch_area_vid4

0x5c3f,	// (0x000a9b5d) main_video4_pane_g5_ParamLimits

0x5c3f,	// (0x000a9b5d) main_video4_pane_g5

0x5c64,	// (0x000a9b82) vid4_progress_pane_ParamLimits

0x5c64,	// (0x000a9b82) vid4_progress_pane

0xd76a,	// (0x000b1688) main_cset_slider_pane_g18_ParamLimits

0xd76a,	// (0x000b1688) main_cset_slider_pane_g18

0xd95c,	// (0x000b187a) cell_cam4_burst_pane_g2_ParamLimits

0xd95c,	// (0x000b187a) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b3966) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b3966) cell_cam4_burst_pane_g

0x9aea,	// (0x000ada08) bg_cl_pane_ParamLimits

0x9aea,	// (0x000ada08) bg_cl_pane

0x6c36,	// (0x000aab54) cl_header_pane_ParamLimits

0x6c36,	// (0x000aab54) cl_header_pane

0x6c4a,	// (0x000aab68) cl_listscroll_pane_ParamLimits

0x6c4a,	// (0x000aab68) cl_listscroll_pane

0xdb3a,	// (0x000b1a58) bg_cl_pane_g1

0xdb42,	// (0x000b1a60) bg_cl_pane_g2

0xdb4a,	// (0x000b1a68) bg_cl_pane_g3

0xdb52,	// (0x000b1a70) bg_cl_pane_g4

0xdb5a,	// (0x000b1a78) bg_cl_pane_g5

0xdb62,	// (0x000b1a80) bg_cl_pane_g6

0xdb6a,	// (0x000b1a88) bg_cl_pane_g7

0xdb72,	// (0x000b1a90) bg_cl_pane_g8

0xdb7a,	// (0x000b1a98) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b39a1) bg_cl_pane_g

0x6c5a,	// (0x000aab78) aid_height_cl_leading_ParamLimits

0x6c5a,	// (0x000aab78) aid_height_cl_leading

0x6c66,	// (0x000aab84) aid_height_cl_text_ParamLimits

0x6c66,	// (0x000aab84) aid_height_cl_text

0xb752,	// (0x000af670) bg_cl_header_pane_ParamLimits

0xb752,	// (0x000af670) bg_cl_header_pane

0x6c85,	// (0x000aaba3) cl_header_pane_g1_ParamLimits

0x6c85,	// (0x000aaba3) cl_header_pane_g1

0x6c9b,	// (0x000aabb9) cl_header_pane_t1_ParamLimits

0x6c9b,	// (0x000aabb9) cl_header_pane_t1

0xdb82,	// (0x000b1aa0) cl_list_pane

0xd73d,	// (0x000b165b) hc_scroll_pane_cp01

0xa5dc,	// (0x000ae4fa) bg_cl_header_pane_g1

0xd5ff,	// (0x000b151d) bg_cl_header_pane_g2

0xa5fc,	// (0x000ae51a) bg_cl_header_pane_g3

0xd60f,	// (0x000b152d) bg_cl_header_pane_g4

0xd607,	// (0x000b1525) bg_cl_header_pane_g5

0xd86b,	// (0x000b1789) bg_cl_header_pane_g6

0xd627,	// (0x000b1545) bg_cl_header_pane_g7

0xd62f,	// (0x000b154d) bg_cl_header_pane_g8

0xd61f,	// (0x000b153d) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000b39b4) bg_cl_header_pane_g

0x6cb4,	// (0x000aabd2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6cb4,	// (0x000aabd2) hc_cl_list_double_graphic_heading_pane

0x6cc5,	// (0x000aabe3) hc_cl_list_single_graphic_pane_ParamLimits

0x6cc5,	// (0x000aabe3) hc_cl_list_single_graphic_pane

0x6cdb,	// (0x000aabf9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6cdb,	// (0x000aabf9) hc_cl_list_single_graphic_pane_g1

0x6ce7,	// (0x000aac05) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6ce7,	// (0x000aac05) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000b39c7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000b39c7) hc_cl_list_single_graphic_pane_g

0x6cfb,	// (0x000aac19) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6cfb,	// (0x000aac19) hc_cl_list_single_graphic_pane_t1

0x6cdb,	// (0x000aabf9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6cdb,	// (0x000aabf9) hc_cl_list_double_graphic_heading_pane_g1

0x6d10,	// (0x000aac2e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6d10,	// (0x000aac2e) hc_cl_list_double_graphic_heading_pane_g2

0x6d24,	// (0x000aac42) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6d24,	// (0x000aac42) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000b39cc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000b39cc) hc_cl_list_double_graphic_heading_pane_g

0x6d38,	// (0x000aac56) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d38,	// (0x000aac56) hc_cl_list_double_graphic_heading_pane_t1

0x6d4d,	// (0x000aac6b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d4d,	// (0x000aac6b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000b39d3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000b39d3) hc_cl_list_double_graphic_heading_pane_t

0x6d62,	// (0x000aac80) vid4_progress_pane_g1

0x6d74,	// (0x000aac92) vid4_progress_pane_g2

0xa8bd,	// (0x000ae7db) vid4_progress_pane_g3

0xa200,	// (0x000ae11e) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000b39d8) vid4_progress_pane_g

0xa21e,	// (0x000ae13c) vid4_progress_pane_t1

0xa233,	// (0x000ae151) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000b39e3) vid4_progress_pane_t

0xa25e,	// (0x000ae17c) wait_bar_pane_cp07

0xc931,	// (0x000b084f) blid_firmament_pane_ParamLimits

0xc97d,	// (0x000b089b) popup_blid_sat_info2_window_g1

0xc9a1,	// (0x000b08bf) popup_blid_sat_info2_window_t3

0xc9af,	// (0x000b08cd) popup_blid_sat_info2_window_t4

0xc9bd,	// (0x000b08db) popup_blid_sat_info2_window_t5

0xc9cb,	// (0x000b08e9) popup_blid_sat_info2_window_t6

0xc9db,	// (0x000b08f9) popup_blid_sat_info2_window_t7

0xc9e9,	// (0x000b0907) popup_blid_sat_info2_window_t8

0xc9f7,	// (0x000b0915) popup_blid_sat_info2_window_t9

0xca05,	// (0x000b0923) popup_blid_sat_info2_window_t10

0xcac7,	// (0x000b09e5) aid_firma_cardinal_ParamLimits

0xcadb,	// (0x000b09f9) blid_firmament_pane_t1_ParamLimits

0xcaf2,	// (0x000b0a10) blid_firmament_pane_t2_ParamLimits

0xcb09,	// (0x000b0a27) blid_firmament_pane_t3_ParamLimits

0xcb20,	// (0x000b0a3e) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x000b35f6) blid_firmament_pane_t_ParamLimits

0xcb37,	// (0x000b0a55) blid_sat_info_pane_ParamLimits

0x95e5,	// (0x000ad503) main_cam_set_pane_ParamLimits

0x5175,	// (0x000a9093) aid_size_cell_colour_35_ParamLimits

0x5195,	// (0x000a90b3) aid_size_cell_colour_112_ParamLimits

0x51b5,	// (0x000a90d3) aid_size_cell_effect_ParamLimits

0xc736,	// (0x000b0654) bg_tb_trans_pane_cp02_ParamLimits

0xa844,	// (0x000ae762) heading_imed_pane_ParamLimits

0x51d5,	// (0x000a90f3) listscroll_imed_pane_ParamLimits

0xbd5c,	// (0x000afc7a) popup_call2_audio_first_window_g5_ParamLimits

0xbd5c,	// (0x000afc7a) popup_call2_audio_first_window_g5

0x5768,	// (0x000a9686) aid_size_touch_image3_arrow_left_ParamLimits

0x5768,	// (0x000a9686) aid_size_touch_image3_arrow_left

0x5794,	// (0x000a96b2) aid_size_touch_image3_arrow_right_ParamLimits

0x5794,	// (0x000a96b2) aid_size_touch_image3_arrow_right

0xa249,	// (0x000ae167) vid4_progress_pane_t3

0x54e8,	// (0x000a9406) main_hwr_training_symbol_option_pane_ParamLimits

0x54e8,	// (0x000a9406) main_hwr_training_symbol_option_pane

0xd392,	// (0x000b12b0) popup_hwr_training_preview_window_ParamLimits

0xd392,	// (0x000b12b0) popup_hwr_training_preview_window

0x5508,	// (0x000a9426) hwr_training_navi_pane_g5_ParamLimits

0x5508,	// (0x000a9426) hwr_training_navi_pane_g5

0xd5ed,	// (0x000b150b) popup_char_count_window

0x95e5,	// (0x000ad503) bg_popup_sub_pane_cp20_ParamLimits

0x66eb,	// (0x000aa609) list_vitu2_match_list_pane_ParamLimits

0x66fa,	// (0x000aa618) vitu2_page_scroll_pane_ParamLimits

0x66fa,	// (0x000aa618) vitu2_page_scroll_pane

0xdba5,	// (0x000b1ac3) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba5,	// (0x000b1ac3) list_single_hwr_training_symbol_option_pane

0xdbb8,	// (0x000b1ad6) list_single_hwr_training_symbol_option_pane_g1

0xdbc0,	// (0x000b1ade) list_single_hwr_training_symbol_option_pane_t1

0xdbce,	// (0x000b1aec) bg_button_pane_cp023

0xdbd7,	// (0x000b1af5) bg_button_pane_cp024

0x6db5,	// (0x000aacd3) vitu2_page_scroll_pane_g1

0x6dbd,	// (0x000aacdb) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000b39ea) vitu2_page_scroll_pane_g

0x6dc5,	// (0x000aace3) vitu2_page_scroll_pane_t1

0xdc0a,	// (0x000b1b28) popup_char_count_window_g1

0xdc13,	// (0x000b1b31) popup_char_count_window_g2

0xdc1c,	// (0x000b1b3a) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000b39ef) popup_char_count_window_g

0xdc25,	// (0x000b1b43) popup_char_count_window_t1

0x95f3,	// (0x000ad511) main_vded2_pane

0xd091,	// (0x000b0faf) aid_size_cell_imed_line

0xd09b,	// (0x000b0fb9) grid_imed_line_width_pane

0xa144,	// (0x000ae062) vid4_indicators_pane_g4

0xdc33,	// (0x000b1b51) cell_imed_line_width_pane_ParamLimits

0xdc33,	// (0x000b1b51) cell_imed_line_width_pane

0xdc47,	// (0x000b1b65) cell_imed_line_width_pane_g1

0xd64b,	// (0x000b1569) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000b39f6) cell_imed_line_width_pane_g

0x6dd4,	// (0x000aacf2) main_vded2_pane_g1_ParamLimits

0x6dd4,	// (0x000aacf2) main_vded2_pane_g1

0x6dea,	// (0x000aad08) main_vded2_pane_g2_ParamLimits

0x6dea,	// (0x000aad08) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000b39fb) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000b39fb) main_vded2_pane_g

0x6dfc,	// (0x000aad1a) vded2_slider_pane_ParamLimits

0x6dfc,	// (0x000aad1a) vded2_slider_pane

0x6e0c,	// (0x000aad2a) aid_size_touch_vded2_end

0x6e16,	// (0x000aad34) aid_size_touch_vded2_playhead

0xdc50,	// (0x000b1b6e) aid_size_touch_vded2_start

0xdc58,	// (0x000b1b76) vded2_slider_bg_pane

0xdc61,	// (0x000b1b7f) vded2_slider_pane_g1

0xdc6a,	// (0x000b1b88) vded2_slider_pane_g2

0x6e20,	// (0x000aad3e) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000b3a00) vded2_slider_pane_g

0xdc72,	// (0x000b1b90) vded2_slider_bg_pane_g1

0xdc7b,	// (0x000b1b99) vded2_slider_bg_pane_g2

0xdc84,	// (0x000b1ba2) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000b3a07) vded2_slider_bg_pane_g

0x2ee0,	// (0x000a6dfe) aid_postcard_touch_down_pane_ParamLimits

0x2ee0,	// (0x000a6dfe) aid_postcard_touch_down_pane

0x2ef6,	// (0x000a6e14) aid_postcard_touch_up_pane_ParamLimits

0x2ef6,	// (0x000a6e14) aid_postcard_touch_up_pane

0x95f3,	// (0x000ad511) main_blid2_pane

0x9cf0,	// (0x000adc0e) popup_blid2_search_window

0xe32f,	// (0x000b224d) blid2_gps_pane

0xe32f,	// (0x000b224d) blid2_navig_pane

0xe32f,	// (0x000b224d) blid2_search_pane

0xe32f,	// (0x000b224d) blid2_tripm_pane

0x6e2b,	// (0x000aad49) blid2_search_pane_g1_ParamLimits

0x6e2b,	// (0x000aad49) blid2_search_pane_g1

0x6e45,	// (0x000aad63) blid2_search_pane_t1_ParamLimits

0x6e45,	// (0x000aad63) blid2_search_pane_t1

0x6e57,	// (0x000aad75) aid_size_cell_blid2_gps_ParamLimits

0x6e57,	// (0x000aad75) aid_size_cell_blid2_gps

0x6e6f,	// (0x000aad8d) blid2_gps_pane_g1_ParamLimits

0x6e6f,	// (0x000aad8d) blid2_gps_pane_g1

0x6e83,	// (0x000aada1) grid_blid2_satellite_pane_ParamLimits

0x6e83,	// (0x000aada1) grid_blid2_satellite_pane

0x6e9d,	// (0x000aadbb) blid2_navig_pane_g1_ParamLimits

0x6e9d,	// (0x000aadbb) blid2_navig_pane_g1

0x6ea9,	// (0x000aadc7) blid2_navig_pane_t1_ParamLimits

0x6ea9,	// (0x000aadc7) blid2_navig_pane_t1

0x6ec4,	// (0x000aade2) blid2_navig_pane_t2_ParamLimits

0x6ec4,	// (0x000aade2) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000b3a0e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000b3a0e) blid2_navig_pane_t

0x6edf,	// (0x000aadfd) blid2_navig_ring_pane_ParamLimits

0x6edf,	// (0x000aadfd) blid2_navig_ring_pane

0x6ef8,	// (0x000aae16) blid2_speed_pane_ParamLimits

0x6ef8,	// (0x000aae16) blid2_speed_pane

0x6f04,	// (0x000aae22) blid2_tripm_pane_g1_ParamLimits

0x6f04,	// (0x000aae22) blid2_tripm_pane_g1

0x6f1d,	// (0x000aae3b) blid2_tripm_pane_g2_ParamLimits

0x6f1d,	// (0x000aae3b) blid2_tripm_pane_g2

0x6f31,	// (0x000aae4f) blid2_tripm_pane_g3_ParamLimits

0x6f31,	// (0x000aae4f) blid2_tripm_pane_g3

0x6f45,	// (0x000aae63) blid2_tripm_pane_g4_ParamLimits

0x6f45,	// (0x000aae63) blid2_tripm_pane_g4

0x6f59,	// (0x000aae77) blid2_tripm_pane_g5_ParamLimits

0x6f59,	// (0x000aae77) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000b3a13) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000b3a13) blid2_tripm_pane_g

0x6f7f,	// (0x000aae9d) blid2_tripm_pane_t1_ParamLimits

0x6f7f,	// (0x000aae9d) blid2_tripm_pane_t1

0x6f9a,	// (0x000aaeb8) blid2_tripm_pane_t2_ParamLimits

0x6f9a,	// (0x000aaeb8) blid2_tripm_pane_t2

0x6fb3,	// (0x000aaed1) blid2_tripm_pane_t3_ParamLimits

0x6fb3,	// (0x000aaed1) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000b3a20) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000b3a20) blid2_tripm_pane_t

0x6ffa,	// (0x000aaf18) cell_blid2_satellite_pane_ParamLimits

0x6ffa,	// (0x000aaf18) cell_blid2_satellite_pane

0x7018,	// (0x000aaf36) cell_blid2_satellite_pane_g1

0xdc8d,	// (0x000b1bab) cell_blid2_satellite_pane_t1

0xcb47,	// (0x000b0a65) blid2_speed_pane_g1

0xdc9b,	// (0x000b1bb9) blid2_speed_pane_t1

0xdca9,	// (0x000b1bc7) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000b3a29) blid2_speed_pane_t

0xcb47,	// (0x000b0a65) blid2_navig_ring_pane_g1

0x7021,	// (0x000aaf3f) blid2_navig_ring_pane_g2

0x7029,	// (0x000aaf47) blid2_navig_ring_pane_g3

0x7031,	// (0x000aaf4f) blid2_navig_ring_pane_g4

0x7039,	// (0x000aaf57) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000b3a2e) blid2_navig_ring_pane_g

0xe32f,	// (0x000b224d) bg_popup_window_pane_cp011

0xdcb7,	// (0x000b1bd5) popup_blid2_search_window_g1

0xdcbf,	// (0x000b1bdd) popup_blid2_search_window_t1

0xdccd,	// (0x000b1beb) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000b3a39) popup_blid2_search_window_t

0xa4eb,	// (0x000ae409) main_browser_pane_g1

0x9aea,	// (0x000ada08) main_browser_pane_ParamLimits

0x95e5,	// (0x000ad503) bg_button_pane_cp011_ParamLimits

0x5f8d,	// (0x000a9eab) cell_vitu2_function_pane_g1_ParamLimits

0xc736,	// (0x000b0654) bg_popup_sub_pane_cp22_ParamLimits

0x68d0,	// (0x000aa7ee) input_focus_pane_cp08_ParamLimits

0x68e7,	// (0x000aa805) popup_vitu2_query_button_pane_ParamLimits

0x68e7,	// (0x000aa805) popup_vitu2_query_button_pane

0x68f8,	// (0x000aa816) popup_vitu2_query_input_button_pane

0xd8a6,	// (0x000b17c4) popup_vitu2_query_window_g1_ParamLimits

0x6902,	// (0x000aa820) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b393a) popup_vitu2_query_window_g_ParamLimits

0xe32f,	// (0x000b224d) bg_button_pane_cp026

0x7041,	// (0x000aaf5f) popup_vitu2_query_input_button_pane_g1

0xe32f,	// (0x000b224d) bg_button_pane_cp025

0xdcdb,	// (0x000b1bf9) popup_vitu2_query_button_pane_t1

0x4588,	// (0x000a84a6) main_mp3_pane_t6

0x4596,	// (0x000a84b4) popup_slider_window_cp01

0xa0a8,	// (0x000adfc6) cam4_battery_pane

0xa101,	// (0x000ae01f) cam4_battery_pane_cp02

0xa1f8,	// (0x000ae116) cam4_battery_pane_cp01

0xa1f8,	// (0x000ae116) cam4_battery_pane_cp03

0xd653,	// (0x000b1571) cam4_battery_pane_g1

0xcb47,	// (0x000b0a65) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000b3a3e) cam4_battery_pane_g

0xca13,	// (0x000b0931) popup_blid_sat_info2_window_t11

0xac46,	// (0x000aeb64) aid_size_touch_mv_arrow_left_ParamLimits

0xac6f,	// (0x000aeb8d) aid_size_touch_mv_arrow_right_ParamLimits

0xaccd,	// (0x000aebeb) navi_pane_g1_ParamLimits

0xacd9,	// (0x000aebf7) navi_pane_g2_ParamLimits

0xad07,	// (0x000aec25) navi_pane_g3_ParamLimits

0xf3ea,	// (0x000b3308) navi_pane_g_ParamLimits

0x2902,	// (0x000a6820) navi_pane_mv_t1_ParamLimits

0x51e1,	// (0x000a90ff) grid_imed_effect_pane_ParamLimits

0x150c,	// (0x000a542a) aid_placing_vt_slider_lsc

0xa43a,	// (0x000ae358) aid_placing_vt_slider_prt

0xb752,	// (0x000af670) bg_tb_trans_pane_cp01_ParamLimits

0xccca,	// (0x000b0be8) popup_image_details_window_g1_ParamLimits

0xccdd,	// (0x000b0bfb) popup_image_details_window_g2_ParamLimits

0xccf2,	// (0x000b0c10) popup_image_details_window_g3_ParamLimits

0xccf2,	// (0x000b0c10) popup_image_details_window_g3

0xf71d,	// (0x000b363b) popup_image_details_window_g_ParamLimits

0xcd06,	// (0x000b0c24) popup_image_details_window_t1_ParamLimits

0xcd18,	// (0x000b0c36) popup_image_details_window_t2_ParamLimits

0xcd31,	// (0x000b0c4f) popup_image_details_window_t3_ParamLimits

0xcd45,	// (0x000b0c63) popup_image_details_window_t4_ParamLimits

0xcd60,	// (0x000b0c7e) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x000b3642) popup_image_details_window_t_ParamLimits

0x6c72,	// (0x000aab90) cl_header_name_pane_ParamLimits

0x6c72,	// (0x000aab90) cl_header_name_pane

0x7049,	// (0x000aaf67) cl_header_name_pane_t1_ParamLimits

0x7049,	// (0x000aaf67) cl_header_name_pane_t1

0x706a,	// (0x000aaf88) cl_header_name_pane_t2_ParamLimits

0x706a,	// (0x000aaf88) cl_header_name_pane_t2

0x70ac,	// (0x000aafca) cl_header_name_pane_t3_ParamLimits

0x70ac,	// (0x000aafca) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000b3a43) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000b3a43) cl_header_name_pane_t

0xad96,	// (0x000aecb4) navi_pane_mv_g2_ParamLimits

0xd5aa,	// (0x000b14c8) field_vitu2_entry_pane_g1_ParamLimits

0xd5b6,	// (0x000b14d4) field_vitu2_entry_pane_g2_ParamLimits

0xd5c2,	// (0x000b14e0) field_vitu2_entry_pane_g3_ParamLimits

0xd5c2,	// (0x000b14e0) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b3839) field_vitu2_entry_pane_g_ParamLimits

0x5f04,	// (0x000a9e22) cell_vitu2_itu_pane_g1_ParamLimits

0x5f14,	// (0x000a9e32) cell_vitu2_itu_pane_g2_ParamLimits

0x5f14,	// (0x000a9e32) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b3845) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b3845) cell_vitu2_itu_pane_g

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp05_ParamLimits

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp05

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp03

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp04

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp10_ParamLimits

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp10

0x6c18,	// (0x000aab36) bg_vkb2_func_pane_cp08

0x6bfe,	// (0x000aab1c) bg_vkb2_func_pane_cp06

0x6c0c,	// (0x000aab2a) bg_vkb2_func_pane_cp07

0xdbe0,	// (0x000b1afe) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe0,	// (0x000b1afe) bg_vkb2_func_pane_cp11

0xdbf5,	// (0x000b1b13) bg_vkb2_func_pane_cp12_ParamLimits

0xdbf5,	// (0x000b1b13) bg_vkb2_func_pane_cp12

0xe32f,	// (0x000b224d) bg_vkb2_func_pane_cp09

0xd5ff,	// (0x000b151d) bg_vkb2_func_pane_g1

0xa5fc,	// (0x000ae51a) bg_vkb2_func_pane_g2

0xd607,	// (0x000b1525) bg_vkb2_func_pane_g3

0xd60f,	// (0x000b152d) bg_vkb2_func_pane_g4

0xd86b,	// (0x000b1789) bg_vkb2_func_pane_g5

0xd627,	// (0x000b1545) bg_vkb2_func_pane_g6

0xd62f,	// (0x000b154d) bg_vkb2_func_pane_g7

0xd61f,	// (0x000b153d) bg_vkb2_func_pane_g8

0xa5dc,	// (0x000ae4fa) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000b3a4a) bg_vkb2_func_pane_g

0x6f6d,	// (0x000aae8b) blid2_tripm_pane_g6_ParamLimits

0x6f6d,	// (0x000aae8b) blid2_tripm_pane_g6

0xd44a,	// (0x000b1368) mp4_progress_pane_g1

0x6fe6,	// (0x000aaf04) blid2_tripm_values_pane_ParamLimits

0x6fe6,	// (0x000aaf04) blid2_tripm_values_pane

0x70dd,	// (0x000aaffb) blid2_tripm_values_pane_t1

0x70eb,	// (0x000ab009) blid2_tripm_values_pane_t2

0x70f9,	// (0x000ab017) blid2_tripm_values_pane_t3

0x7107,	// (0x000ab025) blid2_tripm_values_pane_t4

0x7115,	// (0x000ab033) blid2_tripm_values_pane_t5

0x7123,	// (0x000ab041) blid2_tripm_values_pane_t6

0x7131,	// (0x000ab04f) blid2_tripm_values_pane_t7

0x713f,	// (0x000ab05d) blid2_tripm_values_pane_t8

0x714d,	// (0x000ab06b) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000b3a5d) blid2_tripm_values_pane_t

0x154e,	// (0x000a546c) call_video_pane_t1_ParamLimits

0x156c,	// (0x000a548a) call_video_pane_t2_ParamLimits

0xf273,	// (0x000b3191) call_video_pane_t_ParamLimits

0x2de5,	// (0x000a6d03) msg_header_pane_g1_ParamLimits

0xaf95,	// (0x000aeeb3) msg_header_pane_g2_ParamLimits

0xaf95,	// (0x000aeeb3) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000b33ab) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000b33ab) msg_header_pane_g

0x9aea,	// (0x000ada08) main_clock2_pane_ParamLimits

0x4ee0,	// (0x000a8dfe) grid_clock2_toolbar_pane_ParamLimits

0x4ee0,	// (0x000a8dfe) grid_clock2_toolbar_pane

0x4ee0,	// (0x000a8dfe) listscroll_clock2_pane_ParamLimits

0x4ee0,	// (0x000a8dfe) listscroll_clock2_pane

0x4fd5,	// (0x000a8ef3) main_clock2_pane_t3_ParamLimits

0x4fd5,	// (0x000a8ef3) main_clock2_pane_t3

0x4ff9,	// (0x000a8f17) main_clock2_pane_t4_ParamLimits

0x4ff9,	// (0x000a8f17) main_clock2_pane_t4

0xdce9,	// (0x000b1c07) cell_clock2_toolbar_pane

0xdcf1,	// (0x000b1c0f) cell_clock2_toolbar_pane_cp01

0xdcf1,	// (0x000b1c0f) cell_clock2_toolbar_pane_cp02

0xdcf9,	// (0x000b1c17) cell_clock2_toolbar_pane_cp03

0xdd01,	// (0x000b1c1f) list_clock2_pane

0xabbc,	// (0x000aeada) scroll_pane_cp10

0xdd09,	// (0x000b1c27) list_single_clock2_pane_ParamLimits

0xdd09,	// (0x000b1c27) list_single_clock2_pane

0xadfd,	// (0x000aed1b) list_highlight_pane_cp08

0xdd16,	// (0x000b1c34) list_single_clock2_pane_t1

0xdd24,	// (0x000b1c42) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000b3a70) list_single_clock2_pane_t

0xe32f,	// (0x000b224d) bg_button_pane_cp10

0xdd32,	// (0x000b1c50) cell_clock2_toolbar_pane_g1

0x2e6c,	// (0x000a6d8a) aid_main_viewer_pane_g1_ParamLimits

0x2e6c,	// (0x000a6d8a) aid_main_viewer_pane_g1

0x2e7a,	// (0x000a6d98) aid_main_viewer_pane_g2_ParamLimits

0x2e7a,	// (0x000a6d98) aid_main_viewer_pane_g2

0x2e88,	// (0x000a6da6) aid_main_viewer_pane_g3_ParamLimits

0x2e88,	// (0x000a6da6) aid_main_viewer_pane_g3

0x2e97,	// (0x000a6db5) aid_main_viewer_pane_g4_ParamLimits

0x2e97,	// (0x000a6db5) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x000b33bc) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000b33bc) aid_main_viewer_pane_g

0x379d,	// (0x000a76bb) main_calc_pane_ParamLimits

0x37c3,	// (0x000a76e1) main_dialer2_pane_ParamLimits

0x95f3,	// (0x000ad511) main_cam6_pane

0x95f3,	// (0x000ad511) main_vid6_pane

0x4eec,	// (0x000a8e0a) listscroll_gen_pane_cp06_ParamLimits

0x4eec,	// (0x000a8e0a) listscroll_gen_pane_cp06

0x501c,	// (0x000a8f3a) main_clock2_pane_t5_ParamLimits

0x501c,	// (0x000a8f3a) main_clock2_pane_t5

0x5076,	// (0x000a8f94) aid_call2_pane_cp10_ParamLimits

0x5088,	// (0x000a8fa6) aid_call_pane_cp10_ParamLimits

0xac3a,	// (0x000aeb58) popup_clock_analogue_window_cp10_g1_ParamLimits

0xac3a,	// (0x000aeb58) popup_clock_analogue_window_cp10_g2_ParamLimits

0x509a,	// (0x000a8fb8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x509a,	// (0x000a8fb8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xac3a,	// (0x000aeb58) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b36f2) popup_clock_analogue_window_cp10_g_ParamLimits

0x50ac,	// (0x000a8fca) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5715,	// (0x000a9633) cell_dialer2_keypad_pane_g2_ParamLimits

0x5715,	// (0x000a9633) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b37d8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b37d8) cell_dialer2_keypad_pane_g

0x5731,	// (0x000a964f) cell_dialer2_keypad_pane_t1

0x62a4,	// (0x000aa1c2) main_cset_text2_pane_ParamLimits

0x62a4,	// (0x000aa1c2) main_cset_text2_pane

0xda92,	// (0x000b19b0) area_vitu2_query_pane_g1_ParamLimits

0x6b9d,	// (0x000aaabb) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b398d) area_vitu2_query_pane_g_ParamLimits

0xdb16,	// (0x000b1a34) area_vitu2_query_pane_t7_ParamLimits

0xdb16,	// (0x000b1a34) area_vitu2_query_pane_t7

0x6bfe,	// (0x000aab1c) bg_button_pane_cp018_ParamLimits

0x6c0c,	// (0x000aab2a) bg_button_pane_cp021_ParamLimits

0x6c18,	// (0x000aab36) bg_button_pane_cp022_ParamLimits

0x6c18,	// (0x000aab36) bg_vkb2_func_pane_cp08_ParamLimits

0x6bfe,	// (0x000aab1c) bg_vkb2_func_pane_cp06_ParamLimits

0x6c0c,	// (0x000aab2a) bg_vkb2_func_pane_cp07_ParamLimits

0x6c27,	// (0x000aab45) input_focus_pane_cp09_ParamLimits

0xa270,	// (0x000ae18e) cam6_autofocus_pane_ParamLimits

0xa270,	// (0x000ae18e) cam6_autofocus_pane

0x715b,	// (0x000ab079) cam6_image_uncrop_pane_ParamLimits

0x715b,	// (0x000ab079) cam6_image_uncrop_pane

0x716a,	// (0x000ab088) cam6_indi_pane_ParamLimits

0x716a,	// (0x000ab088) cam6_indi_pane

0x7180,	// (0x000ab09e) cam6_mode_pane_ParamLimits

0x7180,	// (0x000ab09e) cam6_mode_pane

0x7192,	// (0x000ab0b0) cam6_timer_pane_ParamLimits

0x7192,	// (0x000ab0b0) cam6_timer_pane

0x719e,	// (0x000ab0bc) cam6_zoom_pane_ParamLimits

0x719e,	// (0x000ab0bc) cam6_zoom_pane

0x71aa,	// (0x000ab0c8) cam6_mode_pane_g1_ParamLimits

0x71aa,	// (0x000ab0c8) cam6_mode_pane_g1

0x71ba,	// (0x000ab0d8) cam6_mode_pane_g2_ParamLimits

0x71ba,	// (0x000ab0d8) cam6_mode_pane_g2

0x71ca,	// (0x000ab0e8) cam6_mode_pane_g3_ParamLimits

0x71ca,	// (0x000ab0e8) cam6_mode_pane_g3

0x71da,	// (0x000ab0f8) cam6_mode_pane_g4_ParamLimits

0x71da,	// (0x000ab0f8) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000b3a75) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000b3a75) cam6_mode_pane_g

0xdd3a,	// (0x000b1c58) bg_tb_trans_pane_cp08_ParamLimits

0xdd3a,	// (0x000b1c58) bg_tb_trans_pane_cp08

0xdd48,	// (0x000b1c66) cam6_battery_pane_ParamLimits

0xdd48,	// (0x000b1c66) cam6_battery_pane

0xdd5e,	// (0x000b1c7c) cam6_indi_pane_g1_ParamLimits

0xdd5e,	// (0x000b1c7c) cam6_indi_pane_g1

0xdd70,	// (0x000b1c8e) cam6_indi_pane_g2_ParamLimits

0xdd70,	// (0x000b1c8e) cam6_indi_pane_g2

0xdd82,	// (0x000b1ca0) cam6_indi_pane_g3_ParamLimits

0xdd82,	// (0x000b1ca0) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000b3a7e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000b3a7e) cam6_indi_pane_g

0xdd94,	// (0x000b1cb2) cam6_indi_pane_t1_ParamLimits

0xdd94,	// (0x000b1cb2) cam6_indi_pane_t1

0x71ea,	// (0x000ab108) cam6_autofocus_pane_g1

0x71f2,	// (0x000ab110) cam6_autofocus_pane_g2

0x71fa,	// (0x000ab118) cam6_autofocus_pane_g3

0x7202,	// (0x000ab120) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000b3a85) cam6_autofocus_pane_g

0xddba,	// (0x000b1cd8) cam6_timer_pane_g1

0xddc2,	// (0x000b1ce0) cam6_timer_pane_t1

0xddd0,	// (0x000b1cee) cam6_zoom_cont_pane

0xddd8,	// (0x000b1cf6) cam6_zoom_pane_g1

0xdde0,	// (0x000b1cfe) cam6_zoom_pane_g2

0x720a,	// (0x000ab128) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000b3a8e) cam6_zoom_pane_g

0xcb47,	// (0x000b0a65) cam6_battery_pane_g1

0xcb47,	// (0x000b0a65) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x000b35ff) cam6_battery_pane_g

0xdde8,	// (0x000b1d06) cam6_zoom_cont_pane_g1

0xddf1,	// (0x000b1d0f) cam6_zoom_cont_pane_g2

0xddfa,	// (0x000b1d18) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000b3a95) cam6_zoom_cont_pane_g

0x7227,	// (0x000ab145) cam6_mode_pane_cp_ParamLimits

0x7227,	// (0x000ab145) cam6_mode_pane_cp

0x7239,	// (0x000ab157) cam6_zoom_pane_cp_ParamLimits

0x7239,	// (0x000ab157) cam6_zoom_pane_cp

0x7245,	// (0x000ab163) vid6_image_uncrop_cif_pane_ParamLimits

0x7245,	// (0x000ab163) vid6_image_uncrop_cif_pane

0x7255,	// (0x000ab173) vid6_image_uncrop_nhd_pane_ParamLimits

0x7255,	// (0x000ab173) vid6_image_uncrop_nhd_pane

0x7264,	// (0x000ab182) vid6_image_uncrop_vga_pane_ParamLimits

0x7264,	// (0x000ab182) vid6_image_uncrop_vga_pane

0x7273,	// (0x000ab191) vid6_image_uncrop_wvga_pane_ParamLimits

0x7273,	// (0x000ab191) vid6_image_uncrop_wvga_pane

0x7282,	// (0x000ab1a0) vid6_indi_pane_ParamLimits

0x7282,	// (0x000ab1a0) vid6_indi_pane

0xdd3a,	// (0x000b1c58) bg_tb_trans_pane_cp09_ParamLimits

0xdd3a,	// (0x000b1c58) bg_tb_trans_pane_cp09

0xde12,	// (0x000b1d30) cam6_battery_pane_cp_ParamLimits

0xde12,	// (0x000b1d30) cam6_battery_pane_cp

0xde1e,	// (0x000b1d3c) vid6_indi_pane_g1_ParamLimits

0xde1e,	// (0x000b1d3c) vid6_indi_pane_g1

0xde30,	// (0x000b1d4e) vid6_indi_pane_g2_ParamLimits

0xde30,	// (0x000b1d4e) vid6_indi_pane_g2

0xde42,	// (0x000b1d60) vid6_indi_pane_g3_ParamLimits

0xde42,	// (0x000b1d60) vid6_indi_pane_g3

0xde57,	// (0x000b1d75) vid6_indi_pane_g4_ParamLimits

0xde57,	// (0x000b1d75) vid6_indi_pane_g4

0xde6c,	// (0x000b1d8a) vid6_indi_pane_g5_ParamLimits

0xde6c,	// (0x000b1d8a) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000b3a9c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000b3a9c) vid6_indi_pane_g

0xde86,	// (0x000b1da4) vid6_indi_pane_t1_ParamLimits

0xde86,	// (0x000b1da4) vid6_indi_pane_t1

0xde9c,	// (0x000b1dba) vid6_indi_pane_t2_ParamLimits

0xde9c,	// (0x000b1dba) vid6_indi_pane_t2

0xdec4,	// (0x000b1de2) vid6_indi_pane_t3_ParamLimits

0xdec4,	// (0x000b1de2) vid6_indi_pane_t3

0xdeec,	// (0x000b1e0a) vid6_indi_pane_t4_ParamLimits

0xdeec,	// (0x000b1e0a) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000b3aa7) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000b3aa7) vid6_indi_pane_t

0xdf10,	// (0x000b1e2e) wait_bar_pane_cp08

0x729a,	// (0x000ab1b8) main_cset_text2_pane_t1_ParamLimits

0x729a,	// (0x000ab1b8) main_cset_text2_pane_t1

0x7212,	// (0x000ab130) listscroll_gen_pane_cp06_t1_ParamLimits

0x7212,	// (0x000ab130) listscroll_gen_pane_cp06_t1

0x95f3,	// (0x000ad511) main_cam6_set_pane

0xa09a,	// (0x000adfb8) bg_tb_trans_pane_cp06_ParamLimits

0xa0b0,	// (0x000adfce) cam4_indicators_pane_g1_ParamLimits

0xa0c1,	// (0x000adfdf) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b3815) cam4_indicators_pane_g_ParamLimits

0xa0df,	// (0x000adffd) cam4_indicators_pane_t1_ParamLimits

0x95e5,	// (0x000ad503) bg_tb_trans_pane_cp07_ParamLimits

0xa10b,	// (0x000ae029) vid4_indicators_pane_g1_ParamLimits

0xa11f,	// (0x000ae03d) vid4_indicators_pane_g2_ParamLimits

0xa133,	// (0x000ae051) vid4_indicators_pane_g3_ParamLimits

0xa144,	// (0x000ae062) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b3827) vid4_indicators_pane_g_ParamLimits

0xa162,	// (0x000ae080) vid4_indicators_pane_t1_ParamLimits

0x6d62,	// (0x000aac80) vid4_progress_pane_g1_ParamLimits

0x6d74,	// (0x000aac92) vid4_progress_pane_g2_ParamLimits

0xa8bd,	// (0x000ae7db) vid4_progress_pane_g3_ParamLimits

0xa200,	// (0x000ae11e) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000b39d8) vid4_progress_pane_g_ParamLimits

0xa21e,	// (0x000ae13c) vid4_progress_pane_t1_ParamLimits

0xa233,	// (0x000ae151) vid4_progress_pane_t2_ParamLimits

0xa249,	// (0x000ae167) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000b39e3) vid4_progress_pane_t_ParamLimits

0xa25e,	// (0x000ae17c) wait_bar_pane_cp07_ParamLimits

0x72b7,	// (0x000ab1d5) main_cam6_set_pane_g2_ParamLimits

0x72b7,	// (0x000ab1d5) main_cam6_set_pane_g2

0x72db,	// (0x000ab1f9) main_cset6_listscroll_pane_ParamLimits

0x72db,	// (0x000ab1f9) main_cset6_listscroll_pane

0x72fb,	// (0x000ab219) main_cset6_slider_pane_ParamLimits

0x72fb,	// (0x000ab219) main_cset6_slider_pane

0x7311,	// (0x000ab22f) main_cset6_text2_pane_ParamLimits

0x7311,	// (0x000ab22f) main_cset6_text2_pane

0xdf1f,	// (0x000b1e3d) main_cset6_text_pane

0xdf27,	// (0x000b1e45) main_cset_list_pane_copy1_ParamLimits

0xdf27,	// (0x000b1e45) main_cset_list_pane_copy1

0xdf37,	// (0x000b1e55) scroll_pane_cp028_copy1

0x731f,	// (0x000ab23d) cset_list_set_pane_copy1

0x7330,	// (0x000ab24e) aid_position_infowindow_above_copy1

0x7338,	// (0x000ab256) aid_position_infowindow_below_copy1

0x7340,	// (0x000ab25e) cset_list_set_pane_g1_copy1

0x7348,	// (0x000ab266) cset_list_set_pane_g3_copy1_ParamLimits

0x7348,	// (0x000ab266) cset_list_set_pane_g3_copy1

0x7357,	// (0x000ab275) cset_list_set_pane_t1_copy1_ParamLimits

0x7357,	// (0x000ab275) cset_list_set_pane_t1_copy1

0xb752,	// (0x000af670) list_highlight_pane_cp021_copy1_ParamLimits

0xb752,	// (0x000af670) list_highlight_pane_cp021_copy1

0xdf40,	// (0x000b1e5e) cset6_slider_pane_ParamLimits

0xdf40,	// (0x000b1e5e) cset6_slider_pane

0xdf6c,	// (0x000b1e8a) main_cset6_slider_pane_g1_ParamLimits

0xdf6c,	// (0x000b1e8a) main_cset6_slider_pane_g1

0x736c,	// (0x000ab28a) main_cset6_slider_pane_g2_ParamLimits

0x736c,	// (0x000ab28a) main_cset6_slider_pane_g2

0xdf94,	// (0x000b1eb2) main_cset6_slider_pane_g3_ParamLimits

0xdf94,	// (0x000b1eb2) main_cset6_slider_pane_g3

0x7394,	// (0x000ab2b2) main_cset6_slider_pane_g4_ParamLimits

0x7394,	// (0x000ab2b2) main_cset6_slider_pane_g4

0x73a0,	// (0x000ab2be) main_cset6_slider_pane_g5_ParamLimits

0x73a0,	// (0x000ab2be) main_cset6_slider_pane_g5

0xd752,	// (0x000b1670) main_cset6_slider_pane_g7_ParamLimits

0xd752,	// (0x000b1670) main_cset6_slider_pane_g7

0xd75e,	// (0x000b167c) main_cset6_slider_pane_g8_ParamLimits

0xd75e,	// (0x000b167c) main_cset6_slider_pane_g8

0x6351,	// (0x000aa26f) main_cset6_slider_pane_g9_ParamLimits

0x6351,	// (0x000aa26f) main_cset6_slider_pane_g9

0x635d,	// (0x000aa27b) main_cset6_slider_pane_g10_ParamLimits

0x635d,	// (0x000aa27b) main_cset6_slider_pane_g10

0x6369,	// (0x000aa287) main_cset6_slider_pane_g11_ParamLimits

0x6369,	// (0x000aa287) main_cset6_slider_pane_g11

0x6375,	// (0x000aa293) main_cset6_slider_pane_g12_ParamLimits

0x6375,	// (0x000aa293) main_cset6_slider_pane_g12

0x6381,	// (0x000aa29f) main_cset6_slider_pane_g13_ParamLimits

0x6381,	// (0x000aa29f) main_cset6_slider_pane_g13

0x638d,	// (0x000aa2ab) main_cset6_slider_pane_g14_ParamLimits

0x638d,	// (0x000aa2ab) main_cset6_slider_pane_g14

0x73ac,	// (0x000ab2ca) main_cset6_slider_pane_g15_ParamLimits

0x73ac,	// (0x000ab2ca) main_cset6_slider_pane_g15

0x63b1,	// (0x000aa2cf) main_cset6_slider_pane_g16_ParamLimits

0x63b1,	// (0x000aa2cf) main_cset6_slider_pane_g16

0x63bd,	// (0x000aa2db) main_cset6_slider_pane_g17_ParamLimits

0x63bd,	// (0x000aa2db) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000b3ab0) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000b3ab0) main_cset6_slider_pane_g

0xdfa0,	// (0x000b1ebe) main_cset6_slider_pane_t1_ParamLimits

0xdfa0,	// (0x000b1ebe) main_cset6_slider_pane_t1

0x73dc,	// (0x000ab2fa) main_cset6_slider_pane_t2_ParamLimits

0x73dc,	// (0x000ab2fa) main_cset6_slider_pane_t2

0x7407,	// (0x000ab325) main_cset6_slider_pane_t3_ParamLimits

0x7407,	// (0x000ab325) main_cset6_slider_pane_t3

0x7432,	// (0x000ab350) main_cset6_slider_pane_t4_ParamLimits

0x7432,	// (0x000ab350) main_cset6_slider_pane_t4

0x745d,	// (0x000ab37b) main_cset6_slider_pane_t5_ParamLimits

0x745d,	// (0x000ab37b) main_cset6_slider_pane_t5

0xdfe1,	// (0x000b1eff) main_cset6_slider_pane_t7_ParamLimits

0xdfe1,	// (0x000b1eff) main_cset6_slider_pane_t7

0x7488,	// (0x000ab3a6) main_cset6_slider_pane_t8_ParamLimits

0x7488,	// (0x000ab3a6) main_cset6_slider_pane_t8

0x74ac,	// (0x000ab3ca) main_cset6_slider_pane_t9_ParamLimits

0x74ac,	// (0x000ab3ca) main_cset6_slider_pane_t9

0x74d0,	// (0x000ab3ee) main_cset6_slider_pane_t10_ParamLimits

0x74d0,	// (0x000ab3ee) main_cset6_slider_pane_t10

0x74f4,	// (0x000ab412) main_cset6_slider_pane_t11_ParamLimits

0x74f4,	// (0x000ab412) main_cset6_slider_pane_t11

0xe017,	// (0x000b1f35) main_cset6_slider_pane_t14_ParamLimits

0xe017,	// (0x000b1f35) main_cset6_slider_pane_t14

0xe050,	// (0x000b1f6e) main_cset6_slider_pane_t15_ParamLimits

0xe050,	// (0x000b1f6e) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000b3ad5) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000b3ad5) main_cset6_slider_pane_t

0xe089,	// (0x000b1fa7) cset_slider_pane_g1_copy1

0xe092,	// (0x000b1fb0) cset_slider_pane_g2_copy1

0xe09b,	// (0x000b1fb9) cset_slider_pane_g3_copy1

0xe32f,	// (0x000b224d) bg_popup_sub_pane_cp011_copy1

0xe0a4,	// (0x000b1fc2) main_cset_text_pane_g1_copy1

0xd8ba,	// (0x000b17d8) main_cset_text_pane_t1_copy1

0xd8c8,	// (0x000b17e6) main_cset_text_pane_t2_copy1

0xd8d6,	// (0x000b17f4) main_cset_text_pane_t3_copy1

0xd8e4,	// (0x000b1802) main_cset_text_pane_t4_copy1

0xd8f2,	// (0x000b1810) main_cset_text_pane_t5_copy1

0xe0ac,	// (0x000b1fca) main_cset_text_pane_t6_copy1

0xd90e,	// (0x000b182c) main_cset_text_pane_t7_copy1

0x729a,	// (0x000ab1b8) main_cset_text2_pane_t1_copy1

0x95e5,	// (0x000ad503) main_ncimui_pane

0x3a0d,	// (0x000a792b) popup_query_ncimui_window_ParamLimits

0x3a0d,	// (0x000a792b) popup_query_ncimui_window

0xce0f,	// (0x000b0d2d) field_cale_ev2_pane_g4_ParamLimits

0xce0f,	// (0x000b0d2d) field_cale_ev2_pane_g4

0x55f5,	// (0x000a9513) cell_video_dialer_keypad_pane_g2_ParamLimits

0x55f5,	// (0x000a9513) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b37b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b37b3) cell_video_dialer_keypad_pane_g

0x560d,	// (0x000a952b) cell_video_dialer_keypad_pane_t1

0xe32f,	// (0x000b224d) bg_popup_window_pane_cp012

0xaa89,	// (0x000ae9a7) heading_pane_cp06

0xe0d8,	// (0x000b1ff6) ncim_query_content_pane

0xe32f,	// (0x000b224d) bg_popup_heading_pane_cp01

0xe0e0,	// (0x000b1ffe) ncim_heading_pane_t1

0xe0ee,	// (0x000b200c) ncim_indicator_popup_pane

0xe100,	// (0x000b201e) ncim_query_button_pane

0xe114,	// (0x000b2032) ncim_query_content_pane_t1

0xe126,	// (0x000b2044) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000b3b19) ncim_query_content_pane_t

0xe160,	// (0x000b207e) ncim_query_list_pane

0xe172,	// (0x000b2090) ncim_query_popup_pane

0xe0ee,	// (0x000b200c) ncim_indicator_popup_pane_ParamLimits

0x770f,	// (0x000ab62d) ncim_query_content_pane_g1_ParamLimits

0x770f,	// (0x000ab62d) ncim_query_content_pane_g1

0xe114,	// (0x000b2032) ncim_query_content_pane_t1_ParamLimits

0xe126,	// (0x000b2044) ncim_query_content_pane_t2_ParamLimits

0x771b,	// (0x000ab639) ncim_query_content_pane_t3_ParamLimits

0x771b,	// (0x000ab639) ncim_query_content_pane_t3

0x7743,	// (0x000ab661) ncim_query_content_pane_t4_ParamLimits

0x7743,	// (0x000ab661) ncim_query_content_pane_t4

0x776b,	// (0x000ab689) ncim_query_content_pane_t5_ParamLimits

0x776b,	// (0x000ab689) ncim_query_content_pane_t5

0xe138,	// (0x000b2056) ncim_query_content_pane_t6_ParamLimits

0xe138,	// (0x000b2056) ncim_query_content_pane_t6

0xfbfb,	// (0x000b3b19) ncim_query_content_pane_t_ParamLimits

0xe160,	// (0x000b207e) ncim_query_list_pane_ParamLimits

0xe172,	// (0x000b2090) ncim_query_popup_pane_ParamLimits

0xe186,	// (0x000b20a4) wait_bar_pane_cp04

0xe32f,	// (0x000b224d) input_focus_pane_cp011

0xe18e,	// (0x000b20ac) ncim_query_popup_pane_t1

0xe19c,	// (0x000b20ba) ncim_list_query_list_pane_ParamLimits

0xe19c,	// (0x000b20ba) ncim_list_query_list_pane

0xe32f,	// (0x000b224d) bg_button_pane_cp027

0xe1a9,	// (0x000b20c7) ncim_query_button_pane_g1

0xe32f,	// (0x000b224d) list_highlight_pane_cp012

0xe1b3,	// (0x000b20d1) ncim_list_query_list_pane_g1

0xe1bb,	// (0x000b20d9) ncim_list_query_list_pane_t1

0xa0d0,	// (0x000adfee) cam4_indicators_pane_g3_ParamLimits

0xa0d0,	// (0x000adfee) cam4_indicators_pane_g3

0xa150,	// (0x000ae06e) vid4_indicators_pane_g5_ParamLimits

0xa150,	// (0x000ae06e) vid4_indicators_pane_g5

0xa20f,	// (0x000ae12d) vid4_progress_pane_g5_ParamLimits

0xa20f,	// (0x000ae12d) vid4_progress_pane_g5

0x75fd,	// (0x000ab51b) main_ncimui_pane_g1

0x7663,	// (0x000ab581) ncimui_group_query_pane_ParamLimits

0x7663,	// (0x000ab581) ncimui_group_query_pane

0x76ab,	// (0x000ab5c9) ncimui_list_pane_ParamLimits

0x76ab,	// (0x000ab5c9) ncimui_list_pane

0x76d2,	// (0x000ab5f0) ncimui_text_pane_ParamLimits

0x76d2,	// (0x000ab5f0) ncimui_text_pane

0x7793,	// (0x000ab6b1) ncimui_text_pane_t1_ParamLimits

0x7793,	// (0x000ab6b1) ncimui_text_pane_t1

0xe1c9,	// (0x000b20e7) ncimui_list_single_graphic_pane_ParamLimits

0xe1c9,	// (0x000b20e7) ncimui_list_single_graphic_pane

0x77b1,	// (0x000ab6cf) ncimui_query_pane_ParamLimits

0x77b1,	// (0x000ab6cf) ncimui_query_pane

0xe32f,	// (0x000b224d) list_highlight_pane_cp013

0xe1d9,	// (0x000b20f7) ncim_list_query_list_pane_t1_copy1

0xe1b3,	// (0x000b20d1) ncim_list_single_graphic_pane_g1

0xe1e7,	// (0x000b2105) ncim_query_button_pane_cp01

0xe1f3,	// (0x000b2111) ncim_query_entry_pane_ParamLimits

0xe1f3,	// (0x000b2111) ncim_query_entry_pane

0xe206,	// (0x000b2124) ncimui_query_pane_g1

0xe212,	// (0x000b2130) ncimui_query_pane_t1_ParamLimits

0xe212,	// (0x000b2130) ncimui_query_pane_t1

0xb752,	// (0x000af670) input_focus_pane_cp012

0xe22b,	// (0x000b2149) ncim_query_entry_pane_t1

0x9aea,	// (0x000ada08) main_im_pane_ParamLimits

0x95e5,	// (0x000ad503) main_mobtv_pane_ParamLimits

0x95e5,	// (0x000ad503) main_mobtv_pane

0x73c4,	// (0x000ab2e2) main_cset6_slider_pane_g18_ParamLimits

0x73c4,	// (0x000ab2e2) main_cset6_slider_pane_g18

0x73d0,	// (0x000ab2ee) main_cset6_slider_pane_g19_ParamLimits

0x73d0,	// (0x000ab2ee) main_cset6_slider_pane_g19

0x77c4,	// (0x000ab6e2) bg_main_mobtv_pane_ParamLimits

0x77c4,	// (0x000ab6e2) bg_main_mobtv_pane

0x77d2,	// (0x000ab6f0) main_mobtv_info_pane

0x77db,	// (0x000ab6f9) main_mobtv_loading_pane_ParamLimits

0x77db,	// (0x000ab6f9) main_mobtv_loading_pane

0xe23d,	// (0x000b215b) main_mobtv_pg_channel_list_pane

0xe247,	// (0x000b2165) main_mobtv_pg_hdr_pane

0x77e8,	// (0x000ab706) main_mobtv_programe_curr_pane_ParamLimits

0x77e8,	// (0x000ab706) main_mobtv_programe_curr_pane

0x77f5,	// (0x000ab713) main_mobtv_programe_next_pane_ParamLimits

0x77f5,	// (0x000ab713) main_mobtv_programe_next_pane

0xe250,	// (0x000b216e) popup_mobtv_noti_window

0xcb47,	// (0x000b0a65) main_tv_pg_hdr_pane_g1

0xe258,	// (0x000b2176) main_tv_pg_hdr_pane_g2

0xe260,	// (0x000b217e) main_tv_pg_hdr_pane_g3

0xe268,	// (0x000b2186) main_tv_pg_hdr_pane_g4

0xe270,	// (0x000b218e) main_tv_pg_hdr_pane_g5

0xe27a,	// (0x000b2198) main_tv_pg_hdr_pane_g6

0xe284,	// (0x000b21a2) main_tv_pg_hdr_pane_g7

0xe28e,	// (0x000b21ac) main_tv_pg_hdr_pane_g8

0xe298,	// (0x000b21b6) main_tv_pg_hdr_pane_g9

0xe2a2,	// (0x000b21c0) main_tv_pg_hdr_pane_g10

0xe2ac,	// (0x000b21ca) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000b3b26) main_tv_pg_hdr_pane_g

0xe2b6,	// (0x000b21d4) main_tv_pg_hdr_pane_t1

0xe2c4,	// (0x000b21e2) main_tv_pg_hdr_pane_t2

0xe2d2,	// (0x000b21f0) main_tv_pg_hdr_pane_t3

0xe2e2,	// (0x000b2200) main_tv_pg_hdr_pane_t4

0xe2f2,	// (0x000b2210) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000b3b3d) main_tv_pg_hdr_pane_t

0xe302,	// (0x000b2220) single_mobtv_pg_channel_pane_ParamLimits

0xe302,	// (0x000b2220) single_mobtv_pg_channel_pane

0xe314,	// (0x000b2232) single_mobtv_pg_channel_table_pane

0xe31d,	// (0x000b223b) single_mobtv_pg_channel_thumb_pane

0xe326,	// (0x000b2244) single_tv_pg_channel_pane_g1

0xe5a1,	// (0x000b24bf) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000b3b48) single_tv_pg_channel_pane_g

0xcdaa,	// (0x000b0cc8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcdaa,	// (0x000b0cc8) bg_single_mobtv_pg_channel_thumb_pane

0xe5aa,	// (0x000b24c8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe5aa,	// (0x000b24c8) single_mobtv_pg_channel_thumb_pane_g1

0xe5b8,	// (0x000b24d6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe5b8,	// (0x000b24d6) single_mobtv_pg_channel_thumb_pane_g2

0xe5c4,	// (0x000b24e2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe5c4,	// (0x000b24e2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000b3b4d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000b3b4d) single_mobtv_pg_channel_thumb_pane_g

0xe5d0,	// (0x000b24ee) single_mobtv_pg_channel_thumb_pane_t1

0xe5de,	// (0x000b24fc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000b3b54) single_mobtv_pg_channel_thumb_pane_t

0xcb47,	// (0x000b0a65) bg_single_mobtv_pg_channel_table_pane_g1

0xcb47,	// (0x000b0a65) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x000b35ff) bg_single_mobtv_pg_channel_table_pane_g

0xe5ec,	// (0x000b250a) single_mobtv_pg_channel_table_pane_t1

0xe5fa,	// (0x000b2518) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000b3b59) single_mobtv_pg_channel_table_pane_t

0x780a,	// (0x000ab728) main_mobtv_info_pane_g1_ParamLimits

0x780a,	// (0x000ab728) main_mobtv_info_pane_g1

0x7828,	// (0x000ab746) main_mobtv_info_pane_t1_ParamLimits

0x7828,	// (0x000ab746) main_mobtv_info_pane_t1

0x78a0,	// (0x000ab7be) main_mobtv_info_pane_t2_ParamLimits

0x78a0,	// (0x000ab7be) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000b3b63) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000b3b63) main_mobtv_info_pane_t

0x792f,	// (0x000ab84d) wait_bar_pane_cp05

0x7941,	// (0x000ab85f) main_mobtv_loading_pane_g1_ParamLimits

0x7941,	// (0x000ab85f) main_mobtv_loading_pane_g1

0x7954,	// (0x000ab872) main_mobtv_loading_pane_g2_ParamLimits

0x7954,	// (0x000ab872) main_mobtv_loading_pane_g2

0x7960,	// (0x000ab87e) main_mobtv_loading_pane_g3_ParamLimits

0x7960,	// (0x000ab87e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000b3b6a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000b3b6a) main_mobtv_loading_pane_g

0xe608,	// (0x000b2526) main_mobtv_loading_pane_t1_ParamLimits

0xe608,	// (0x000b2526) main_mobtv_loading_pane_t1

0xe620,	// (0x000b253e) main_mobtv_loading_pane_t2_ParamLimits

0xe620,	// (0x000b253e) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000b3b71) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000b3b71) main_mobtv_loading_pane_t

0x7973,	// (0x000ab891) wait_bar_pane_cp06_ParamLimits

0x7973,	// (0x000ab891) wait_bar_pane_cp06

0xe644,	// (0x000b2562) main_mobtv_programe_curr_pane_t1

0xe652,	// (0x000b2570) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000b3b76) main_mobtv_programe_curr_pane_t

0xe660,	// (0x000b257e) main_mobtv_programe_next_pane_t1

0xe66e,	// (0x000b258c) main_mobtv_programe_next_pane_t2

0xe67c,	// (0x000b259a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000b3b7b) main_mobtv_programe_next_pane_t

0xe32f,	// (0x000b224d) bg_popup_mobtv_noti_window_pane

0xe68a,	// (0x000b25a8) popup_mobtv_noti_window_g1

0xe692,	// (0x000b25b0) popup_mobtv_noti_window_t1

0xe6a0,	// (0x000b25be) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000b3b82) popup_mobtv_noti_window_t

0xcb47,	// (0x000b0a65) bg_popup_mobtv_noti_window_pane_g1

0x95f3,	// (0x000ad511) sc_clock_pane

0x95f3,	// (0x000ad511) main_fs_bigclock_pane

0x6fd0,	// (0x000aaeee) blid2_tripm_pane_t4_ParamLimits

0x6fd0,	// (0x000aaeee) blid2_tripm_pane_t4

0x7982,	// (0x000ab8a0) sc_clock_pane_g1_ParamLimits

0x7982,	// (0x000ab8a0) sc_clock_pane_g1

0x7994,	// (0x000ab8b2) sc_clock_pane_t1_ParamLimits

0x7994,	// (0x000ab8b2) sc_clock_pane_t1

0x79b6,	// (0x000ab8d4) sc_clock_pane_t2_ParamLimits

0x79b6,	// (0x000ab8d4) sc_clock_pane_t2

0x79ce,	// (0x000ab8ec) sc_clock_pane_t3_ParamLimits

0x79ce,	// (0x000ab8ec) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000b3b87) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000b3b87) sc_clock_pane_t

0x8a71,	// (0x000ac98f) main_fs_bigclock_indicator_pane_ParamLimits

0x8a71,	// (0x000ac98f) main_fs_bigclock_indicator_pane

0xcd7a,	// (0x000b0c98) main_fs_bigclock_pane_g1_ParamLimits

0xcd7a,	// (0x000b0c98) main_fs_bigclock_pane_g1

0x8a7d,	// (0x000ac99b) main_fs_bigclock_pane_t1_ParamLimits

0x8a7d,	// (0x000ac99b) main_fs_bigclock_pane_t1

0x8a8f,	// (0x000ac9ad) main_fs_bigclock_pane_t2_ParamLimits

0x8a8f,	// (0x000ac9ad) main_fs_bigclock_pane_t2

0x8aa3,	// (0x000ac9c1) main_fs_bigclock_pane_t3_ParamLimits

0x8aa3,	// (0x000ac9c1) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000b3d91) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000b3d91) main_fs_bigclock_pane_t

0xb82a,	// (0x000af748) main_fs_bigclock_indicator_pane_g1

0xe108,	// (0x000b2026) ncim_query_content_pane_g2_ParamLimits

0xe108,	// (0x000b2026) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000b3b14) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000b3b14) ncim_query_content_pane_g

0x79e7,	// (0x000ab905) sc_clock_pane_t4_ParamLimits

0x79e7,	// (0x000ab905) sc_clock_pane_t4

0x95e5,	// (0x000ad503) main_radioblah_pane

0xd533,	// (0x000b1451) cell_call4_button_pane_t1_copy1_ParamLimits

0xd533,	// (0x000b1451) cell_call4_button_pane_t1_copy1

0x7615,	// (0x000ab533) main_ncimui_pane_t1_ParamLimits

0x7615,	// (0x000ab533) main_ncimui_pane_t1

0x762f,	// (0x000ab54d) main_ncimui_pane_t2_ParamLimits

0x762f,	// (0x000ab54d) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000b3b0d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000b3b0d) main_ncimui_pane_t

0xe7da,	// (0x000b26f8) main_radioblah_anim_pane_ParamLimits

0xe7da,	// (0x000b26f8) main_radioblah_anim_pane

0xe7eb,	// (0x000b2709) main_radioblah_info_pane_ParamLimits

0xe7eb,	// (0x000b2709) main_radioblah_info_pane

0xe7ff,	// (0x000b271d) main_radioblah_pane_t1_ParamLimits

0xe7ff,	// (0x000b271d) main_radioblah_pane_t1

0xe81b,	// (0x000b2739) main_radioblah_pane_t2_ParamLimits

0xe81b,	// (0x000b2739) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000b3ba8) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000b3ba8) main_radioblah_pane_t

0x7a9d,	// (0x000ab9bb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a9d,	// (0x000ab9bb) main_radioblah_rocker_ctrl_pane

0xe863,	// (0x000b2781) main_radioblah_info_pane_t1_ParamLimits

0xe863,	// (0x000b2781) main_radioblah_info_pane_t1

0x7af5,	// (0x000aba13) main_radioblah_info_pane_t2_ParamLimits

0x7af5,	// (0x000aba13) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000b3bb1) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000b3bb1) main_radioblah_info_pane_t

0xcb47,	// (0x000b0a65) main_radioblah_rocker_ctrl_pane_g1

0x7ba5,	// (0x000abac3) main_radioblah_rocker_ctrl_pane_g2

0x7bad,	// (0x000abacb) main_radioblah_rocker_ctrl_pane_g3

0x7bb5,	// (0x000abad3) main_radioblah_rocker_ctrl_pane_g4

0x7bbd,	// (0x000abadb) main_radioblah_rocker_ctrl_pane_g5

0x7bc5,	// (0x000abae3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000b3bba) main_radioblah_rocker_ctrl_pane_g

0x729a,	// (0x000ab1b8) main_cset_text2_pane_t1_copy1_ParamLimits

0xa092,	// (0x000adfb0) cam4_image_uncrop_qvga_pane

0xa0f9,	// (0x000ae017) vid4_image_uncrop_qcif_pane

0xa270,	// (0x000ae18e) cam6_image_uncrop_qvga_pane_ParamLimits

0xa270,	// (0x000ae18e) cam6_image_uncrop_qvga_pane

0xde02,	// (0x000b1d20) vid6_image_uncrop_qcif_pane_ParamLimits

0xde02,	// (0x000b1d20) vid6_image_uncrop_qcif_pane

0xe32f,	// (0x000b224d) bg_popup_preview_window_pane_cp03

0xe0ba,	// (0x000b1fd8) list_cset_text2_pane

0xe0c2,	// (0x000b1fe0) main_cset6_text2_pane_g1

0xe0ca,	// (0x000b1fe8) main_cset6_text2_pane_t1

0x7bcd,	// (0x000abaeb) list_cset_text2_pane_t1_ParamLimits

0x7bcd,	// (0x000abaeb) list_cset_text2_pane_t1

0x95e5,	// (0x000ad503) main_radioblah_pane_ParamLimits

0x791b,	// (0x000ab839) main_mobtv_info_pane_t3_ParamLimits

0x791b,	// (0x000ab839) main_mobtv_info_pane_t3

0x7a8b,	// (0x000ab9a9) main_radioblah_pane_g1

0x7ac5,	// (0x000ab9e3) main_radioblah_info_pane_g1

0x7b4a,	// (0x000aba68) main_radioblah_info_pane_t3_ParamLimits

0x7b4a,	// (0x000aba68) main_radioblah_info_pane_t3

0x2419,	// (0x000a6337) highlight_cell_cale_month_pane_ParamLimits

0x2419,	// (0x000a6337) highlight_cell_cale_month_pane

0x95f3,	// (0x000ad511) main_phob_fisheye_pane

0xcede,	// (0x000b0dfc) scroll_pane_cp0031_ParamLimits

0xcede,	// (0x000b0dfc) scroll_pane_cp0031

0xdf10,	// (0x000b1e2e) wait_bar_pane_cp08_ParamLimits

0x731f,	// (0x000ab23d) cset_list_set_pane_copy1_ParamLimits

0xe89d,	// (0x000b27bb) highlight_cell_cale_month_pane_g1

0x7be6,	// (0x000abb04) highlight_cell_cale_month_pane_t1

0xdb82,	// (0x000b1aa0) list_gen_pane_cp01

0xd73d,	// (0x000b165b) scroll_pane_01

0xf04c,	// (0x000b2f6a) list_single_double_fisheye_pane

0x7bf4,	// (0x000abb12) list_double_fisheye_pane_g1_ParamLimits

0x7bf4,	// (0x000abb12) list_double_fisheye_pane_g1

0x7c00,	// (0x000abb1e) list_double_fisheye_pane_g2_ParamLimits

0x7c00,	// (0x000abb1e) list_double_fisheye_pane_g2

0x7c14,	// (0x000abb32) list_double_fisheye_pane_g3_ParamLimits

0x7c14,	// (0x000abb32) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000b3bc7) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000b3bc7) list_double_fisheye_pane_g

0x7c3d,	// (0x000abb5b) list_double_fisheye_pane_t1_ParamLimits

0x7c3d,	// (0x000abb5b) list_double_fisheye_pane_t1

0x7c58,	// (0x000abb76) list_double_fisheye_pane_t2_ParamLimits

0x7c58,	// (0x000abb76) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000b3bd2) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000b3bd2) list_double_fisheye_pane_t

0x95f3,	// (0x000ad511) main_call5_pane

0x7a12,	// (0x000ab930) sc_swipe_pane_ParamLimits

0x7a12,	// (0x000ab930) sc_swipe_pane

0x7c8d,	// (0x000abbab) call5_image_pane_ParamLimits

0x7c8d,	// (0x000abbab) call5_image_pane

0x7caa,	// (0x000abbc8) call5_swipe_1_pane_ParamLimits

0x7caa,	// (0x000abbc8) call5_swipe_1_pane

0x7cbd,	// (0x000abbdb) call5_swipe_2_pane_ParamLimits

0x7cbd,	// (0x000abbdb) call5_swipe_2_pane

0x7ce8,	// (0x000abc06) popup_call5_audio_first_window_ParamLimits

0x7ce8,	// (0x000abc06) popup_call5_audio_first_window

0xcdaa,	// (0x000b0cc8) call5_swipe_1_pane_g1_ParamLimits

0xcdaa,	// (0x000b0cc8) call5_swipe_1_pane_g1

0xe8a5,	// (0x000b27c3) call5_swipe_1_pane_g2_ParamLimits

0xe8a5,	// (0x000b27c3) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000b3bd7) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000b3bd7) call5_swipe_1_pane_g

0xe8b1,	// (0x000b27cf) call5_swipe_1_pane_t1_ParamLimits

0xe8b1,	// (0x000b27cf) call5_swipe_1_pane_t1

0xcdaa,	// (0x000b0cc8) call5_swipe_2_pane_g1_ParamLimits

0xcdaa,	// (0x000b0cc8) call5_swipe_2_pane_g1

0xe8c6,	// (0x000b27e4) call5_swipe_2_pane_g2_ParamLimits

0xe8c6,	// (0x000b27e4) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000b3bdc) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000b3bdc) call5_swipe_2_pane_g

0xe8d2,	// (0x000b27f0) call5_swipe_2_pane_t1_ParamLimits

0xe8d2,	// (0x000b27f0) call5_swipe_2_pane_t1

0xe8e7,	// (0x000b2805) sc_swipe_pane_g1_ParamLimits

0xe8e7,	// (0x000b2805) sc_swipe_pane_g1

0xe8f4,	// (0x000b2812) sc_swipe_pane_g2_ParamLimits

0xe8f4,	// (0x000b2812) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000b3be1) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000b3be1) sc_swipe_pane_g

0xe900,	// (0x000b281e) sc_swipe_pane_t1_ParamLimits

0xe900,	// (0x000b281e) sc_swipe_pane_t1

0x95f3,	// (0x000ad511) main_cmail_launcher_pane

0x7cf9,	// (0x000abc17) aid_size_cell_cmail_l_ParamLimits

0x7cf9,	// (0x000abc17) aid_size_cell_cmail_l

0x7d13,	// (0x000abc31) grid_cmail_l_pane_ParamLimits

0x7d13,	// (0x000abc31) grid_cmail_l_pane

0x7d2e,	// (0x000abc4c) cell_cmail_l_pane_ParamLimits

0x7d2e,	// (0x000abc4c) cell_cmail_l_pane

0x7d54,	// (0x000abc72) cell_cmail_l_pane_g1_ParamLimits

0x7d54,	// (0x000abc72) cell_cmail_l_pane_g1

0x7d60,	// (0x000abc7e) cell_cmail_l_pane_t1_ParamLimits

0x7d60,	// (0x000abc7e) cell_cmail_l_pane_t1

0xe915,	// (0x000b2833) cell_cmail_l_pane_t2_ParamLimits

0xe915,	// (0x000b2833) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000b3be6) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000b3be6) cell_cmail_l_pane_t

0xb752,	// (0x000af670) grid_highlight_pane_cp018_ParamLimits

0xb752,	// (0x000af670) grid_highlight_pane_cp018

0x03a1,	// (0x000a42bf) main2_pane_ParamLimits

0x03a1,	// (0x000a42bf) main2_pane

0xa27e,	// (0x000ae19c) popup_sp_fs_action_menu_bg_pane_g1

0xa286,	// (0x000ae1a4) popup_sp_fs_action_menu_bg_pane_g2

0xa28e,	// (0x000ae1ac) popup_sp_fs_action_menu_bg_pane_g3

0xa296,	// (0x000ae1b4) popup_sp_fs_action_menu_bg_pane_g4

0xa29e,	// (0x000ae1bc) popup_sp_fs_action_menu_bg_pane_g5

0xa2a6,	// (0x000ae1c4) popup_sp_fs_action_menu_bg_pane_g6

0xa2ae,	// (0x000ae1cc) popup_sp_fs_action_menu_bg_pane_g7

0xa2b6,	// (0x000ae1d4) popup_sp_fs_action_menu_bg_pane_g8

0xa2be,	// (0x000ae1dc) popup_sp_fs_action_menu_bg_pane_g9

0xa2c6,	// (0x000ae1e4) popup_sp_fs_action_menu_bg_pane_g10

0xa2c6,	// (0x000ae1e4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000b30ab) popup_sp_fs_action_menu_bg_pane_g

0x1385,	// (0x000a52a3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t3_g3_g1

0x1391,	// (0x000a52af) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x2_t3_g3_g2

0x139d,	// (0x000a52bb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x139d,	// (0x000a52bb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x000b315b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x000b315b) list_medium_line_x2_t3_g3_g

0x13a9,	// (0x000a52c7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x13a9,	// (0x000a52c7) list_medium_line_x2_t3_g3_t1

0x13be,	// (0x000a52dc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x13be,	// (0x000a52dc) list_medium_line_x2_t3_g3_t2

0x13d2,	// (0x000a52f0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x13d2,	// (0x000a52f0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x000b3162) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x000b3162) list_medium_line_x2_t3_g3_t

0x1385,	// (0x000a52a3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t3_g2_g1

0x139d,	// (0x000a52bb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x139d,	// (0x000a52bb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x000b3169) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x000b3169) list_medium_line_x2_t3_g2_g

0x13e7,	// (0x000a5305) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13e7,	// (0x000a5305) list_medium_line_x2_t3_g2_t1

0x13fd,	// (0x000a531b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x13fd,	// (0x000a531b) list_medium_line_x2_t3_g2_t2

0x140f,	// (0x000a532d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x140f,	// (0x000a532d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x000b316e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x000b316e) list_medium_line_x2_t3_g2_t

0x1385,	// (0x000a52a3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t4_g4_g1

0x142c,	// (0x000a534a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x142c,	// (0x000a534a) list_medium_line_x2_t4_g4_g2

0x1391,	// (0x000a52af) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x2_t4_g4_g3

0x1438,	// (0x000a5356) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1438,	// (0x000a5356) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x000b3175) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x000b3175) list_medium_line_x2_t4_g4_g

0x1444,	// (0x000a5362) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1444,	// (0x000a5362) list_medium_line_x2_t4_g4_t1

0x145e,	// (0x000a537c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x145e,	// (0x000a537c) list_medium_line_x2_t4_g4_t2

0x1474,	// (0x000a5392) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1474,	// (0x000a5392) list_medium_line_x2_t4_g4_t3

0x1489,	// (0x000a53a7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1489,	// (0x000a53a7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x000b317e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x000b317e) list_medium_line_x2_t4_g4_t

0x1385,	// (0x000a52a3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t2_g4_g1

0x142c,	// (0x000a534a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x142c,	// (0x000a534a) list_medium_line_x2_t2_g4_g2

0x1391,	// (0x000a52af) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x2_t2_g4_g3

0x139d,	// (0x000a52bb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x139d,	// (0x000a52bb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x000b31e5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x000b31e5) list_medium_line_x2_t2_g4_g

0x243f,	// (0x000a635d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x243f,	// (0x000a635d) list_medium_line_x2_t2_g4_t1

0x13d2,	// (0x000a52f0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x13d2,	// (0x000a52f0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x000b31ee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x000b31ee) list_medium_line_x2_t2_g4_t

0x1385,	// (0x000a52a3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t2_g3_g1

0x1391,	// (0x000a52af) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x2_t2_g3_g2

0x139d,	// (0x000a52bb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x139d,	// (0x000a52bb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x000b315b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x000b315b) list_medium_line_x2_t2_g3_g

0x2454,	// (0x000a6372) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2454,	// (0x000a6372) list_medium_line_x2_t2_g3_t1

0x13d2,	// (0x000a52f0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x13d2,	// (0x000a52f0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x000b31f3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x000b31f3) list_medium_line_x2_t2_g3_t

0x2591,	// (0x000a64af) main_sp_fs_list_pane_ParamLimits

0x2591,	// (0x000a64af) main_sp_fs_list_pane

0xaf70,	// (0x000aee8e) sp_fs_scroll_pane_ParamLimits

0xaf70,	// (0x000aee8e) sp_fs_scroll_pane

0x259d,	// (0x000a64bb) list_medium_line_x2_t3_t1

0x25ad,	// (0x000a64cb) list_medium_line_x2_t3_t2

0x25bb,	// (0x000a64d9) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x000b323e) list_medium_line_x2_t3_t

0x25c9,	// (0x000a64e7) list_medium_line_x3_t4_t1

0x25d9,	// (0x000a64f7) list_medium_line_x3_t4_t2

0x25e7,	// (0x000a6505) list_medium_line_x3_t4_t3

0x25bb,	// (0x000a64d9) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x000b3245) list_medium_line_x3_t4_t

0x25f5,	// (0x000a6513) list_medium_line_x4_t5_t1

0x2605,	// (0x000a6523) list_medium_line_x4_t5_t2

0x25e7,	// (0x000a6505) list_medium_line_x4_t5_t3

0x2613,	// (0x000a6531) list_medium_line_x4_t5_t4

0x25bb,	// (0x000a64d9) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x000b324e) list_medium_line_x4_t5_t

0x1385,	// (0x000a52a3) list_medium_line_t4_g4_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_t4_g4_g1

0x2621,	// (0x000a653f) list_medium_line_t4_g4_g2_ParamLimits

0x2621,	// (0x000a653f) list_medium_line_t4_g4_g2

0x262d,	// (0x000a654b) list_medium_line_t4_g4_g3_ParamLimits

0x262d,	// (0x000a654b) list_medium_line_t4_g4_g3

0x139d,	// (0x000a52bb) list_medium_line_t4_g4_g4_ParamLimits

0x139d,	// (0x000a52bb) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x000b3259) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x000b3259) list_medium_line_t4_g4_g

0x2639,	// (0x000a6557) list_medium_line_t4_g4_t1_ParamLimits

0x2639,	// (0x000a6557) list_medium_line_t4_g4_t1

0x264e,	// (0x000a656c) list_medium_line_t4_g4_t2_ParamLimits

0x264e,	// (0x000a656c) list_medium_line_t4_g4_t2

0x2663,	// (0x000a6581) list_medium_line_t4_g4_t3_ParamLimits

0x2663,	// (0x000a6581) list_medium_line_t4_g4_t3

0x13d2,	// (0x000a52f0) list_medium_line_t4_g4_t4_ParamLimits

0x13d2,	// (0x000a52f0) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x000b3262) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x000b3262) list_medium_line_t4_g4_t

0x272b,	// (0x000a6649) chi_dic_find_pane_g1

0x37d7,	// (0x000a76f5) main_tport_pane

0x6657,	// (0x000aa575) list_medium_line_plain_t1

0x6709,	// (0x000aa627) list_medium_line_t2_g2_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_t2_g2_g1

0x6715,	// (0x000aa633) list_medium_line_t2_g2_g2_ParamLimits

0x6715,	// (0x000aa633) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b391e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b391e) list_medium_line_t2_g2_g

0x6721,	// (0x000aa63f) list_medium_line_t2_g2_t1_ParamLimits

0x6721,	// (0x000aa63f) list_medium_line_t2_g2_t1

0x6738,	// (0x000aa656) list_medium_line_t2_g2_t2_ParamLimits

0x6738,	// (0x000aa656) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b3923) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b3923) list_medium_line_t2_g2_t

0xdb8b,	// (0x000b1aa9) aid_sp_fs_list_icon_a_sm

0xf044,	// (0x000b2f62) aid_sp_fs_list_icon_d

0xdb93,	// (0x000b1ab1) aid_sp_fs_text_primary

0xdb9c,	// (0x000b1aba) aid_sp_fs_text_secondary

0x6d86,	// (0x000aaca4) list_medium_line

0x6d86,	// (0x000aaca4) list_medium_line_g2

0x6d86,	// (0x000aaca4) list_medium_line_g3

0x6d86,	// (0x000aaca4) list_medium_line_plain

0x6d86,	// (0x000aaca4) list_medium_line_plain_t2

0x6d86,	// (0x000aaca4) list_medium_line_plain_t3

0x6d86,	// (0x000aaca4) list_medium_line_right_icon

0x6d86,	// (0x000aaca4) list_medium_line_right_iconx2

0x6d86,	// (0x000aaca4) list_medium_line_t2

0x6d86,	// (0x000aaca4) list_medium_line_t2_g2

0x6d86,	// (0x000aaca4) list_medium_line_t2_g3

0x6d86,	// (0x000aaca4) list_medium_line_t2_right_icon

0x6d86,	// (0x000aaca4) list_medium_line_t2_right_iconx2

0x6d86,	// (0x000aaca4) list_medium_line_t3

0x6d86,	// (0x000aaca4) list_medium_line_t3_g2

0x6d86,	// (0x000aaca4) list_medium_line_t3_g3

0x6d86,	// (0x000aaca4) list_medium_line_t3_right_iconx2

0x6d8f,	// (0x000aacad) list_medium_line_t4_g4

0x6d86,	// (0x000aaca4) list_medium_line_x2

0x6d86,	// (0x000aaca4) list_medium_line_x2_t2_g2

0x6d86,	// (0x000aaca4) list_medium_line_x2_t2_g3

0x6d86,	// (0x000aaca4) list_medium_line_x2_t2_g4

0x6d86,	// (0x000aaca4) list_medium_line_x2_t3

0x6d86,	// (0x000aaca4) list_medium_line_x2_t3_g2

0x6d86,	// (0x000aaca4) list_medium_line_x2_t3_g3

0x6d86,	// (0x000aaca4) list_medium_line_x2_t3_g4

0x6d86,	// (0x000aaca4) list_medium_line_x2_t4_g2

0x6d86,	// (0x000aaca4) list_medium_line_x2_t4_g4

0x6d98,	// (0x000aacb6) list_medium_line_x3

0x6d98,	// (0x000aacb6) list_medium_line_x3_t4

0x6d98,	// (0x000aacb6) list_medium_line_x3_t4_g4

0x6d8f,	// (0x000aacad) list_medium_line_x4_t4

0x6d8f,	// (0x000aacad) list_medium_line_x4_t4_g7

0x6d8f,	// (0x000aacad) list_medium_line_x4_t5

0x6da1,	// (0x000aacbf) list_single_fs_dyc_pane_ParamLimits

0x6da1,	// (0x000aacbf) list_single_fs_dyc_pane

0x1385,	// (0x000a52a3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x4_t4_g7_g1

0x7518,	// (0x000ab436) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7518,	// (0x000ab436) list_medium_line_x4_t4_g7_g2

0x7524,	// (0x000ab442) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7524,	// (0x000ab442) list_medium_line_x4_t4_g7_g3

0x7533,	// (0x000ab451) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7533,	// (0x000ab451) list_medium_line_x4_t4_g7_g4

0x753f,	// (0x000ab45d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x753f,	// (0x000ab45d) list_medium_line_x4_t4_g7_g5

0x754e,	// (0x000ab46c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x754e,	// (0x000ab46c) list_medium_line_x4_t4_g7_g6

0x755d,	// (0x000ab47b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x755d,	// (0x000ab47b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000b3aee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000b3aee) list_medium_line_x4_t4_g7_g

0x7569,	// (0x000ab487) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7569,	// (0x000ab487) list_medium_line_x4_t4_g7_t1

0x757e,	// (0x000ab49c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x757e,	// (0x000ab49c) list_medium_line_x4_t4_g7_t2

0x7593,	// (0x000ab4b1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7593,	// (0x000ab4b1) list_medium_line_x4_t4_g7_t3

0x75a8,	// (0x000ab4c6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x75a8,	// (0x000ab4c6) list_medium_line_x4_t4_g7_t4

0x75ba,	// (0x000ab4d8) list_medium_line_x4_t4_g7_t5_ParamLimits

0x75ba,	// (0x000ab4d8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000b3afd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000b3afd) list_medium_line_x4_t4_g7_t

0x75cc,	// (0x000ab4ea) list_single_dyc_row_pane_ParamLimits

0x75cc,	// (0x000ab4ea) list_single_dyc_row_pane

0x7c7a,	// (0x000abb98) call5_gesture_pane_ParamLimits

0x7c7a,	// (0x000abb98) call5_gesture_pane

0x7cd0,	// (0x000abbee) call5_windows_pane_ParamLimits

0x7cd0,	// (0x000abbee) call5_windows_pane

0x7d76,	// (0x000abc94) call5_swipe_1_pane_cp_ParamLimits

0x7d76,	// (0x000abc94) call5_swipe_1_pane_cp

0x7d82,	// (0x000abca0) call5_swipe_2_pane_cp_ParamLimits

0x7d82,	// (0x000abca0) call5_swipe_2_pane_cp

0xadfd,	// (0x000aed1b) call5_image_pane_cp

0x7d8e,	// (0x000abcac) popup_call5_audio_first_window_cp_ParamLimits

0x7d8e,	// (0x000abcac) popup_call5_audio_first_window_cp

0xe8e7,	// (0x000b2805) call5_swipe_1_pane_g1_cp_ParamLimits

0xe8e7,	// (0x000b2805) call5_swipe_1_pane_g1_cp

0xe927,	// (0x000b2845) call5_swipe_1_pane_g2_cp

0xe900,	// (0x000b281e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe900,	// (0x000b281e) call5_swipe_1_pane_t1_cp

0xe8e7,	// (0x000b2805) call5_swipe_2_pane_g1_cp_ParamLimits

0xe8e7,	// (0x000b2805) call5_swipe_2_pane_g1_cp

0xe92f,	// (0x000b284d) call5_swipe_2_pane_g2_cp

0xe937,	// (0x000b2855) call5_swipe_2_pane_t1_cp_ParamLimits

0xe937,	// (0x000b2855) call5_swipe_2_pane_t1_cp

0xb752,	// (0x000af670) main_sp_fs_email_pane

0xe94c,	// (0x000b286a) main_sp_fs_listscroll_pane_te

0x7d9c,	// (0x000abcba) popup_sp_fs_action_menu_pane_ParamLimits

0x7d9c,	// (0x000abcba) popup_sp_fs_action_menu_pane

0xcb47,	// (0x000b0a65) bg_sp_fs_ctrlbar_pane_g1

0xd155,	// (0x000b1073) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd167,	// (0x000b1085) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd15e,	// (0x000b107c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcb47,	// (0x000b0a65) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000b3beb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc923,	// (0x000b0841) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc923,	// (0x000b0841) bg_sp_fs_ctrlbar_ddmenu_pane

0xe955,	// (0x000b2873) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe955,	// (0x000b2873) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe961,	// (0x000b287f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe961,	// (0x000b287f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000b3bf4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000b3bf4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe96d,	// (0x000b288b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe96d,	// (0x000b288b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7de0,	// (0x000abcfe) list_medium_line_t2_right_icon_g1

0x7de8,	// (0x000abd06) list_medium_line_t2_right_icon_t1

0x7df8,	// (0x000abd16) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000b3bf9) list_medium_line_t2_right_icon_t

0xc736,	// (0x000b0654) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc736,	// (0x000b0654) bg_sp_fs_ctrlbar_pane

0x7e52,	// (0x000abd70) main_sp_fs_ctrlbar_button_pane_cp01

0x7e5c,	// (0x000abd7a) main_sp_fs_ctrlbar_ddmenu_pane

0xe9bf,	// (0x000b28dd) main_sp_fs_ctrlbar_pane_g1

0xe9cb,	// (0x000b28e9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000b3bfe) main_sp_fs_ctrlbar_pane_g

0xe9d7,	// (0x000b28f5) main_sp_fs_ctrlbar_pane_t1

0x7e66,	// (0x000abd84) main_sp_fs_ctrlbar_pane

0x7e8a,	// (0x000abda8) main_sp_fs_listscroll_pane_te_cp01

0x7eaa,	// (0x000abdc8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7eaa,	// (0x000abdc8) popup_sp_fs_action_menu_pane_cp01

0xb752,	// (0x000af670) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb752,	// (0x000af670) bg_sp_fs_highlight_list_pane_cp01

0xea07,	// (0x000b2925) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xea07,	// (0x000b2925) sp_fs_action_menu_list_gene_pane_g1

0xea16,	// (0x000b2934) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xea16,	// (0x000b2934) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b3c08) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b3c08) sp_fs_action_menu_list_gene_pane_g

0xea23,	// (0x000b2941) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xea23,	// (0x000b2941) sp_fs_action_menu_list_gene_pane_t1

0xea3b,	// (0x000b2959) sp_fs_action_menu_list_gene_pane_ParamLimits

0xea3b,	// (0x000b2959) sp_fs_action_menu_list_gene_pane

0xea5c,	// (0x000b297a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xea5c,	// (0x000b297a) popup_sp_fs_action_menu_bg_pane

0xea6a,	// (0x000b2988) sp_fs_action_menu_list_pane_ParamLimits

0xea6a,	// (0x000b2988) sp_fs_action_menu_list_pane

0x7eda,	// (0x000abdf8) sp_fs_scroll_pane_cp01_ParamLimits

0x7eda,	// (0x000abdf8) sp_fs_scroll_pane_cp01

0x7f00,	// (0x000abe1e) list_medium_line_plain_t2_t1

0x7f10,	// (0x000abe2e) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b3c0d) list_medium_line_plain_t2_t

0x7f20,	// (0x000abe3e) list_medium_line_plain_t3_t1

0x7f30,	// (0x000abe4e) list_medium_line_plain_t3_t2

0x7f3e,	// (0x000abe5c) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b3c12) list_medium_line_plain_t3_t

0x1385,	// (0x000a52a3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t2_g2_g1

0x139d,	// (0x000a52bb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x139d,	// (0x000a52bb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x000b3169) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x000b3169) list_medium_line_x2_t2_g2_g

0x2639,	// (0x000a6557) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2639,	// (0x000a6557) list_medium_line_x2_t2_g2_t1

0x13d2,	// (0x000a52f0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x13d2,	// (0x000a52f0) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b3c19) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b3c19) list_medium_line_x2_t2_g2_t

0x1385,	// (0x000a52a3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t4_g2_g1

0x7f4c,	// (0x000abe6a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f4c,	// (0x000abe6a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b3c1e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b3c1e) list_medium_line_x2_t4_g2_g

0x7f5e,	// (0x000abe7c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f5e,	// (0x000abe7c) list_medium_line_x2_t4_g2_t1

0x7f78,	// (0x000abe96) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f78,	// (0x000abe96) list_medium_line_x2_t4_g2_t2

0x7f8d,	// (0x000abeab) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f8d,	// (0x000abeab) list_medium_line_x2_t4_g2_t3

0x13d2,	// (0x000a52f0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x13d2,	// (0x000a52f0) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b3c23) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b3c23) list_medium_line_x2_t4_g2_t

0x7fa2,	// (0x000abec0) list_medium_line_t3_right_iconx2_g1

0x7de0,	// (0x000abcfe) list_medium_line_t3_right_iconx2_g2

0x7faa,	// (0x000abec8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b3c2c) list_medium_line_t3_right_iconx2_g

0x7fb4,	// (0x000abed2) list_medium_line_t3_right_iconx2_t1

0x7fc4,	// (0x000abee2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b3c33) list_medium_line_t3_right_iconx2_t

0x1385,	// (0x000a52a3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x3_t4_g4_g1

0x1391,	// (0x000a52af) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x3_t4_g4_g2

0x2621,	// (0x000a653f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2621,	// (0x000a653f) list_medium_line_x3_t4_g4_g3

0x7fd2,	// (0x000abef0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fd2,	// (0x000abef0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b3c38) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b3c38) list_medium_line_x3_t4_g4_g

0x7fde,	// (0x000abefc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fde,	// (0x000abefc) list_medium_line_x3_t4_g4_t1

0x7ff5,	// (0x000abf13) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ff5,	// (0x000abf13) list_medium_line_x3_t4_g4_t2

0x264e,	// (0x000a656c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x264e,	// (0x000a656c) list_medium_line_x3_t4_g4_t3

0x8010,	// (0x000abf2e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8010,	// (0x000abf2e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b3c41) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b3c41) list_medium_line_x3_t4_g4_t

0x802d,	// (0x000abf4b) list_single_dyc_row_text_pane_t1_ParamLimits

0x802d,	// (0x000abf4b) list_single_dyc_row_text_pane_t1

0x8076,	// (0x000abf94) list_single_dyc_row_text_pane_t2_ParamLimits

0x8076,	// (0x000abf94) list_single_dyc_row_text_pane_t2

0xea8c,	// (0x000b29aa) list_single_dyc_row_text_pane_t3_ParamLimits

0xea8c,	// (0x000b29aa) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b3c4a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b3c4a) list_single_dyc_row_text_pane_t

0xeab0,	// (0x000b29ce) list_single_dyc_row_pane_g1_ParamLimits

0xeab0,	// (0x000b29ce) list_single_dyc_row_pane_g1

0xeabc,	// (0x000b29da) list_single_dyc_row_pane_g2_ParamLimits

0xeabc,	// (0x000b29da) list_single_dyc_row_pane_g2

0xeac8,	// (0x000b29e6) list_single_dyc_row_pane_g3_ParamLimits

0xeac8,	// (0x000b29e6) list_single_dyc_row_pane_g3

0xead4,	// (0x000b29f2) list_single_dyc_row_pane_g4_ParamLimits

0xead4,	// (0x000b29f2) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b3c57) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b3c57) list_single_dyc_row_pane_g

0xeae0,	// (0x000b29fe) list_single_dyc_row_text_pane_ParamLimits

0xeae0,	// (0x000b29fe) list_single_dyc_row_text_pane

0xe32f,	// (0x000b224d) bg_sp_fs_scroll_pane

0xeaff,	// (0x000b2a1d) thumb_sp_fs_scroll_pane

0x6709,	// (0x000aa627) list_medium_line_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_g1

0x81ab,	// (0x000ac0c9) list_medium_line_t1_ParamLimits

0x81ab,	// (0x000ac0c9) list_medium_line_t1

0x1385,	// (0x000a52a3) list_medium_line_x2_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_g1

0x1391,	// (0x000a52af) list_medium_line_x2_g2_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b3c60) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b3c60) list_medium_line_x2_g

0xeb08,	// (0x000b2a26) list_medium_line_x2_t1_ParamLimits

0xeb08,	// (0x000b2a26) list_medium_line_x2_t1

0x1385,	// (0x000a52a3) list_medium_line_x3_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x3_g1

0x1391,	// (0x000a52af) list_medium_line_x3_g2_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b3c60) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b3c60) list_medium_line_x3_g

0xeb08,	// (0x000b2a26) list_medium_line_x3_t1_ParamLimits

0xeb08,	// (0x000b2a26) list_medium_line_x3_t1

0xeb1e,	// (0x000b2a3c) thumb_sp_fs_scroll_pane_g1

0xeb27,	// (0x000b2a45) thumb_sp_fs_scroll_pane_g2

0xeb30,	// (0x000b2a4e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b3c65) thumb_sp_fs_scroll_pane_g

0xeb1e,	// (0x000b2a3c) bg_sp_fs_scroll_pane_g1

0xeb27,	// (0x000b2a45) bg_sp_fs_scroll_pane_g2

0xeb30,	// (0x000b2a4e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b3c65) bg_sp_fs_scroll_pane_g

0x1385,	// (0x000a52a3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1385,	// (0x000a52a3) list_medium_line_x2_t3_g4_g1

0x142c,	// (0x000a534a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x142c,	// (0x000a534a) list_medium_line_x2_t3_g4_g2

0x1391,	// (0x000a52af) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1391,	// (0x000a52af) list_medium_line_x2_t3_g4_g3

0x139d,	// (0x000a52bb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x139d,	// (0x000a52bb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x000b31e5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x000b31e5) list_medium_line_x2_t3_g4_g

0x81c0,	// (0x000ac0de) list_medium_line_x2_t3_g4_t1_ParamLimits

0x81c0,	// (0x000ac0de) list_medium_line_x2_t3_g4_t1

0x81da,	// (0x000ac0f8) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81da,	// (0x000ac0f8) list_medium_line_x2_t3_g4_t2

0x13d2,	// (0x000a52f0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x13d2,	// (0x000a52f0) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b3c6c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b3c6c) list_medium_line_x2_t3_g4_t

0x6709,	// (0x000aa627) list_medium_line_g2_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_g2_g1

0x6715,	// (0x000aa633) list_medium_line_g2_g2_ParamLimits

0x6715,	// (0x000aa633) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b391e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b391e) list_medium_line_g2_g

0x81f4,	// (0x000ac112) list_medium_line_g2_t1_ParamLimits

0x81f4,	// (0x000ac112) list_medium_line_g2_t1

0x6709,	// (0x000aa627) list_medium_line_t3_g2_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_t3_g2_g1

0x6715,	// (0x000aa633) list_medium_line_t3_g2_g2_ParamLimits

0x6715,	// (0x000aa633) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b391e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b391e) list_medium_line_t3_g2_g

0x8209,	// (0x000ac127) list_medium_line_t3_g2_t1_ParamLimits

0x8209,	// (0x000ac127) list_medium_line_t3_g2_t1

0x8220,	// (0x000ac13e) list_medium_line_t3_g2_t2_ParamLimits

0x8220,	// (0x000ac13e) list_medium_line_t3_g2_t2

0x8235,	// (0x000ac153) list_medium_line_t3_g2_t3_ParamLimits

0x8235,	// (0x000ac153) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b3c73) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b3c73) list_medium_line_t3_g2_t

0x7de0,	// (0x000abcfe) list_medium_line_right_icon_g1

0x824e,	// (0x000ac16c) list_medium_line_right_icon_t1

0x6709,	// (0x000aa627) list_medium_line_t2_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_t2_g1

0x825c,	// (0x000ac17a) list_medium_line_t2_t1_ParamLimits

0x825c,	// (0x000ac17a) list_medium_line_t2_t1

0x8276,	// (0x000ac194) list_medium_line_t2_t2_ParamLimits

0x8276,	// (0x000ac194) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b3c7a) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b3c7a) list_medium_line_t2_t

0x6709,	// (0x000aa627) list_medium_line_t3_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_t3_g1

0x828f,	// (0x000ac1ad) list_medium_line_t3_t1_ParamLimits

0x828f,	// (0x000ac1ad) list_medium_line_t3_t1

0x82a6,	// (0x000ac1c4) list_medium_line_t3_t2_ParamLimits

0x82a6,	// (0x000ac1c4) list_medium_line_t3_t2

0x82bb,	// (0x000ac1d9) list_medium_line_t3_t3_ParamLimits

0x82bb,	// (0x000ac1d9) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b3c7f) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b3c7f) list_medium_line_t3_t

0x6709,	// (0x000aa627) list_medium_line_g3_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_g3_g1

0x82cd,	// (0x000ac1eb) list_medium_line_g3_g2_ParamLimits

0x82cd,	// (0x000ac1eb) list_medium_line_g3_g2

0x6715,	// (0x000aa633) list_medium_line_g3_g3_ParamLimits

0x6715,	// (0x000aa633) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b3c86) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b3c86) list_medium_line_g3_g

0x82d9,	// (0x000ac1f7) list_medium_line_g3_t1_ParamLimits

0x82d9,	// (0x000ac1f7) list_medium_line_g3_t1

0x6709,	// (0x000aa627) list_medium_line_t2_g3_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_t2_g3_g1

0x82cd,	// (0x000ac1eb) list_medium_line_t2_g3_g2_ParamLimits

0x82cd,	// (0x000ac1eb) list_medium_line_t2_g3_g2

0x6715,	// (0x000aa633) list_medium_line_t2_g3_g3_ParamLimits

0x6715,	// (0x000aa633) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b3c86) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b3c86) list_medium_line_t2_g3_g

0x82ee,	// (0x000ac20c) list_medium_line_t2_g3_t1_ParamLimits

0x82ee,	// (0x000ac20c) list_medium_line_t2_g3_t1

0x8305,	// (0x000ac223) list_medium_line_t2_g3_t2_ParamLimits

0x8305,	// (0x000ac223) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b3c8d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b3c8d) list_medium_line_t2_g3_t

0x6709,	// (0x000aa627) list_medium_line_t3_g3_g1_ParamLimits

0x6709,	// (0x000aa627) list_medium_line_t3_g3_g1

0x82cd,	// (0x000ac1eb) list_medium_line_t3_g3_g2_ParamLimits

0x82cd,	// (0x000ac1eb) list_medium_line_t3_g3_g2

0x6715,	// (0x000aa633) list_medium_line_t3_g3_g3_ParamLimits

0x6715,	// (0x000aa633) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b3c86) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b3c86) list_medium_line_t3_g3_g

0x8320,	// (0x000ac23e) list_medium_line_t3_g3_t1_ParamLimits

0x8320,	// (0x000ac23e) list_medium_line_t3_g3_t1

0x8334,	// (0x000ac252) list_medium_line_t3_g3_t2_ParamLimits

0x8334,	// (0x000ac252) list_medium_line_t3_g3_t2

0x8346,	// (0x000ac264) list_medium_line_t3_g3_t3_ParamLimits

0x8346,	// (0x000ac264) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b3c92) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b3c92) list_medium_line_t3_g3_t

0x7fa2,	// (0x000abec0) list_medium_line_right_iconx2_g1

0x7de0,	// (0x000abcfe) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b3c99) list_medium_line_right_iconx2_g

0x835a,	// (0x000ac278) list_medium_line_right_iconx2_t1

0x7fa2,	// (0x000abec0) list_medium_line_t2_right_iconx2_g1

0x7de0,	// (0x000abcfe) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b3c99) list_medium_line_t2_right_iconx2_g

0x8368,	// (0x000ac286) list_medium_line_t2_right_iconx2_t1

0x8378,	// (0x000ac296) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b3c9e) list_medium_line_t2_right_iconx2_t

0x838a,	// (0x000ac2a8) list_medium_line_x4_t4_t1

0x8398,	// (0x000ac2b6) list_medium_line_x4_t4_t2

0x83a8,	// (0x000ac2c6) list_medium_line_x4_t4_t3

0x83b8,	// (0x000ac2d6) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b3ca3) list_medium_line_x4_t4_t

0x840b,	// (0x000ac329) tport_appsw_pane_ParamLimits

0x840b,	// (0x000ac329) tport_appsw_pane

0x8423,	// (0x000ac341) tport_contact_pane_ParamLimits

0x8423,	// (0x000ac341) tport_contact_pane

0x843b,	// (0x000ac359) tport_listscroll_pane_ParamLimits

0x843b,	// (0x000ac359) tport_listscroll_pane

0x8455,	// (0x000ac373) cell_tport_appsw_pane_ParamLimits

0x8455,	// (0x000ac373) cell_tport_appsw_pane

0xd5c2,	// (0x000b14e0) tport_appsw_pane_g1_ParamLimits

0xd5c2,	// (0x000b14e0) tport_appsw_pane_g1

0xeb39,	// (0x000b2a57) tport_contact_pane_g1

0xe18e,	// (0x000b20ac) tport_contact_pane_t1

0xeb42,	// (0x000b2a60) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b3cac) tport_contact_pane_t

0xeb50,	// (0x000b2a6e) list_tport_pane

0xeb59,	// (0x000b2a77) scroll_pane_cp_030

0x849d,	// (0x000ac3bb) cell_tport_appsw_pane_g1

0x84ad,	// (0x000ac3cb) cell_tport_appsw_pane_t1

0x84bb,	// (0x000ac3d9) grid_highlight_pane_cp019

0x84c3,	// (0x000ac3e1) list_tport_double_graphic_pane_ParamLimits

0x84c3,	// (0x000ac3e1) list_tport_double_graphic_pane

0xb752,	// (0x000af670) list_highlight_pane_cp023_ParamLimits

0xb752,	// (0x000af670) list_highlight_pane_cp023

0x84d0,	// (0x000ac3ee) list_tport_double_graphic_pane_g1_ParamLimits

0x84d0,	// (0x000ac3ee) list_tport_double_graphic_pane_g1

0x84dd,	// (0x000ac3fb) list_tport_double_graphic_pane_t1_ParamLimits

0x84dd,	// (0x000ac3fb) list_tport_double_graphic_pane_t1

0x84f2,	// (0x000ac410) list_tport_double_graphic_pane_t2_ParamLimits

0x84f2,	// (0x000ac410) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b3cb8) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b3cb8) list_tport_double_graphic_pane_t

0xe32f,	// (0x000b224d) main_cale_note_pane

0x5ead,	// (0x000a9dcb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5ead,	// (0x000a9dcb) cell_vitu2_function_top_wide_pane_cp01

0x792f,	// (0x000ab84d) wait_bar_pane_cp05_ParamLimits

0xb752,	// (0x000af670) listscroll_cmail_pane

0xeb62,	// (0x000b2a80) list_cmail_pane

0xd637,	// (0x000b1555) list_cmail_body_pane

0x8504,	// (0x000ac422) list_single_cmail_header_caption_pane

0x851b,	// (0x000ac439) list_single_cmail_header_detail_pane_ParamLimits

0x851b,	// (0x000ac439) list_single_cmail_header_detail_pane

0xeb72,	// (0x000b2a90) list_single_cmail_header_caption_pane_t1

0x8550,	// (0x000ac46e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8550,	// (0x000ac46e) list_single_cmail_header_detail_pane_g1

0xf055,	// (0x000b2f73) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf055,	// (0x000b2f73) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b3cbd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b3cbd) list_single_cmail_header_detail_pane_g

0x8568,	// (0x000ac486) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8568,	// (0x000ac486) list_single_cmail_header_detail_pane_t1

0x85a6,	// (0x000ac4c4) list_single_cmail_header_editor_pane_bg_ParamLimits

0x85a6,	// (0x000ac4c4) list_single_cmail_header_editor_pane_bg

0xe5a1,	// (0x000b24bf) list_cmail_body_pane_g1

0xebb1,	// (0x000b2acf) list_cmail_body_pane_t1

0xd5ff,	// (0x000b151d) list_single_cmail_header_editor_pane_bg_g1

0xa5fc,	// (0x000ae51a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd60f,	// (0x000b152d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd607,	// (0x000b1525) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd86b,	// (0x000b1789) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd62f,	// (0x000b154d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd61f,	// (0x000b153d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd627,	// (0x000b1545) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa5dc,	// (0x000ae4fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x85bf,	// (0x000ac4dd) calenote_gesture_pane_ParamLimits

0x85bf,	// (0x000ac4dd) calenote_gesture_pane

0x85df,	// (0x000ac4fd) calenote_window_pane_ParamLimits

0x85df,	// (0x000ac4fd) calenote_window_pane

0xebbf,	// (0x000b2add) popup_note_window_cp01

0x85fb,	// (0x000ac519) calenote_swipe_1_pane_ParamLimits

0x85fb,	// (0x000ac519) calenote_swipe_1_pane

0x7d82,	// (0x000abca0) calenote_swipe_2_pane_ParamLimits

0x7d82,	// (0x000abca0) calenote_swipe_2_pane

0xe8e7,	// (0x000b2805) calenote_swipe_1_pane_g1_ParamLimits

0xe8e7,	// (0x000b2805) calenote_swipe_1_pane_g1

0xe8f4,	// (0x000b2812) calenote_swipe_1_pane_g2_ParamLimits

0xe8f4,	// (0x000b2812) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000b3be1) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000b3be1) calenote_swipe_1_pane_g

0xebd1,	// (0x000b2aef) calenote_swipe_1_pane_t1_ParamLimits

0xebd1,	// (0x000b2aef) calenote_swipe_1_pane_t1

0xe8e7,	// (0x000b2805) calenote_swipe_2_pane_g1_ParamLimits

0xe8e7,	// (0x000b2805) calenote_swipe_2_pane_g1

0xebf0,	// (0x000b2b0e) calenote_swipe_2_pane_g2_ParamLimits

0xebf0,	// (0x000b2b0e) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b3cc9) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b3cc9) calenote_swipe_2_pane_g

0xebfc,	// (0x000b2b1a) calenote_swipe_2_pane_t1_ParamLimits

0xebfc,	// (0x000b2b1a) calenote_swipe_2_pane_t1

0xe32f,	// (0x000b224d) main_mup_navstr_pane

0x4b88,	// (0x000a8aa6) main_mup3_pane_t7_ParamLimits

0x4b88,	// (0x000a8aa6) main_mup3_pane_t7

0x9eb0,	// (0x000addce) main_mp4_pane_g6_ParamLimits

0x9eb0,	// (0x000addce) main_mp4_pane_g6

0xa054,	// (0x000adf72) main_image3_pane_t4_ParamLimits

0xa054,	// (0x000adf72) main_image3_pane_t4

0x8610,	// (0x000ac52e) popup_navstr_preview_pane_ParamLimits

0x8610,	// (0x000ac52e) popup_navstr_preview_pane

0x8624,	// (0x000ac542) scroll_navstr_pane_ParamLimits

0x8624,	// (0x000ac542) scroll_navstr_pane

0xe32f,	// (0x000b224d) bg_popup_preview_window_pane_cp04

0xec23,	// (0x000b2b41) popup_navstr_preview_pane_t1

0x8638,	// (0x000ac556) scroll_navstr_pane_g1_ParamLimits

0x8638,	// (0x000ac556) scroll_navstr_pane_g1

0x864c,	// (0x000ac56a) scroll_navstr_pane_t1_ParamLimits

0x864c,	// (0x000ac56a) scroll_navstr_pane_t1

0xebc8,	// (0x000b2ae6) bg_button_pane_cp014

0xebc8,	// (0x000b2ae6) bg_button_pane_cp030

0x7c20,	// (0x000abb3e) list_double_fisheye_pane_g4_ParamLimits

0x7c20,	// (0x000abb3e) list_double_fisheye_pane_g4

0x7c2c,	// (0x000abb4a) list_double_fisheye_pane_g5_ParamLimits

0x7c2c,	// (0x000abb4a) list_double_fisheye_pane_g5

0xaf70,	// (0x000aee8e) sp_fs_scroll_pane_cp03

0xe9bf,	// (0x000b28dd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe9cb,	// (0x000b28e9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000b3bfe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe9d7,	// (0x000b28f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeb6a,	// (0x000b2a88) sp_fs_scroll_pane_cp02

0xa2e9,	// (0x000ae207) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2e9,	// (0x000ae207) popup_sp_fs_calendar_preview_list_single_pane

0xe32f,	// (0x000b224d) main_cam6_pano_pane

0x95e5,	// (0x000ad503) main_mup3_pane_ParamLimits

0xe32f,	// (0x000b224d) main_phacti_pane

0x7802,	// (0x000ab720) bg_button_pane_cp11

0x781c,	// (0x000ab73a) main_mobtv_info_pane_g2_ParamLimits

0x781c,	// (0x000ab73a) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000b3b5e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000b3b5e) main_mobtv_info_pane_g

0x79f9,	// (0x000ab917) sc_clock_pane_t5_ParamLimits

0x79f9,	// (0x000ab917) sc_clock_pane_t5

0x7a8b,	// (0x000ab9a9) main_radioblah_pane_g1_ParamLimits

0xe833,	// (0x000b2751) main_radioblah_pane_t3_ParamLimits

0xe833,	// (0x000b2751) main_radioblah_pane_t3

0xe84b,	// (0x000b2769) main_radioblah_pane_t4_ParamLimits

0xe84b,	// (0x000b2769) main_radioblah_pane_t4

0x7ab3,	// (0x000ab9d1) main_radioblah_text_pane_ParamLimits

0x7ab3,	// (0x000ab9d1) main_radioblah_text_pane

0x7ac5,	// (0x000ab9e3) main_radioblah_info_pane_g1_ParamLimits

0x7b5e,	// (0x000aba7c) main_radioblah_info_pane_t4_ParamLimits

0x7b5e,	// (0x000aba7c) main_radioblah_info_pane_t4

0xb752,	// (0x000af670) main_sp_fs_calendar_pane

0x8663,	// (0x000ac581) main_phacti_pane_g1

0x866b,	// (0x000ac589) phacti_note_pane_ParamLimits

0x866b,	// (0x000ac589) phacti_note_pane

0xec3a,	// (0x000b2b58) phacti_term_pane_ParamLimits

0xec3a,	// (0x000b2b58) phacti_term_pane

0xec4f,	// (0x000b2b6d) phacti_note_pane_t1_ParamLimits

0xec4f,	// (0x000b2b6d) phacti_note_pane_t1

0xec66,	// (0x000b2b84) phacti_term_pane_g1

0xec6e,	// (0x000b2b8c) phacti_term_pane_t1_ParamLimits

0xec6e,	// (0x000b2b8c) phacti_term_pane_t1

0xec98,	// (0x000b2bb6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa3fd,	// (0x000ae31b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b3cd3) popup_sp_fs_calendar_preview_list_single_pane_g

0xeca0,	// (0x000b2bbe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xeca0,	// (0x000b2bbe) popup_sp_fs_calendar_preview_list_single_pane_t1

0xecb5,	// (0x000b2bd3) aid_popup_sp_fs_bg_corner_pane

0xcb47,	// (0x000b0a65) popup_sp_fs_calendar_preview_bg_pane_g1

0xe32f,	// (0x000b224d) popup_sp_fs_calendar_preview_bg_pane

0xecbd,	// (0x000b2bdb) popup_sp_fs_calendar_preview_list_pane

0xc736,	// (0x000b0654) bg_main_sp_fs_cale_pane_ParamLimits

0xc736,	// (0x000b0654) bg_main_sp_fs_cale_pane

0xecc5,	// (0x000b2be3) listscroll_cale_mrui_pane_ParamLimits

0xecc5,	// (0x000b2be3) listscroll_cale_mrui_pane

0xd6a7,	// (0x000b15c5) listscroll_sp_fs_schedule_track_pane

0xecda,	// (0x000b2bf8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xecda,	// (0x000b2bf8) main_sp_fs_ctrlbar_pane_cp01

0xeced,	// (0x000b2c0b) main_sp_fs_ribbon_pane

0xecf5,	// (0x000b2c13) popup_sp_fs_cale_preview_window

0x86e0,	// (0x000ac5fe) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86e0,	// (0x000ac5fe) list_single_sp_fs_schedule_track_pane

0xb752,	// (0x000af670) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb752,	// (0x000af670) bg_sp_fs_highlight_list_pane_cp03

0x86f4,	// (0x000ac612) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x86f4,	// (0x000ac612) list_single_sp_fs_schedule_track_pane_g1

0x8700,	// (0x000ac61e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8700,	// (0x000ac61e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b3cd8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b3cd8) list_single_sp_fs_schedule_track_pane_g

0x870c,	// (0x000ac62a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x870c,	// (0x000ac62a) list_single_sp_fs_schedule_track_pane_t1

0x8726,	// (0x000ac644) sp_fs_schedule_track_pane_ParamLimits

0x8726,	// (0x000ac644) sp_fs_schedule_track_pane

0xed07,	// (0x000b2c25) sp_fs_schedule_track_pane_g1

0xed0f,	// (0x000b2c2d) sp_fs_schedule_track_pane_g2

0xed17,	// (0x000b2c35) sp_fs_schedule_track_pane_g3

0xed1f,	// (0x000b2c3d) sp_fs_schedule_track_pane_g4

0xed27,	// (0x000b2c45) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b3cdd) sp_fs_schedule_track_pane_g

0xd5ff,	// (0x000b151d) bg_sp_fs_schedule_viewer_highlight_g1

0xa5fc,	// (0x000ae51a) bg_sp_fs_schedule_viewer_highlight_g2

0xd607,	// (0x000b1525) bg_sp_fs_schedule_viewer_highlight_g3

0xd60f,	// (0x000b152d) bg_sp_fs_schedule_viewer_highlight_g4

0xd86b,	// (0x000b1789) bg_sp_fs_schedule_viewer_highlight_g5

0xd61f,	// (0x000b153d) bg_sp_fs_schedule_viewer_highlight_g6

0xd627,	// (0x000b1545) bg_sp_fs_schedule_viewer_highlight_g7

0xd62f,	// (0x000b154d) bg_sp_fs_schedule_viewer_highlight_g8

0xa5dc,	// (0x000ae4fa) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b3ce8) bg_sp_fs_schedule_viewer_highlight_g

0xe32f,	// (0x000b224d) bg_main_sp_fs_ribbon_pane

0x8737,	// (0x000ac655) main_sp_fs_ribbon_pane_g1

0xed2f,	// (0x000b2c4d) main_sp_fs_ribbon_pane_t1

0x8740,	// (0x000ac65e) main_sp_fs_ribbon_pane_t2

0xed3e,	// (0x000b2c5c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b3cfb) main_sp_fs_ribbon_pane_t

0xed4d,	// (0x000b2c6b) main_sp_fs_ribbon_scheduler_pane

0xed55,	// (0x000b2c73) bg_main_sp_fs_ribbon_pane_g1

0xed5e,	// (0x000b2c7c) bg_main_sp_fs_ribbon_pane_g2

0xed67,	// (0x000b2c85) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b3d02) bg_main_sp_fs_ribbon_pane_g

0xed6f,	// (0x000b2c8d) main_sp_fs_ribbon_scheduler_pane_g1

0xed78,	// (0x000b2c96) main_sp_fs_ribbon_scheduler_pane_g2

0xed81,	// (0x000b2c9f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b3d09) main_sp_fs_ribbon_scheduler_pane_g

0xed8a,	// (0x000b2ca8) list_cale_mrui_pane

0x874f,	// (0x000ac66d) sp_fs_scroll_pane_cp07_ParamLimits

0x874f,	// (0x000ac66d) sp_fs_scroll_pane_cp07

0x876b,	// (0x000ac689) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x876b,	// (0x000ac689) bg_sp_fs_schedule_viewer_highlight

0xed97,	// (0x000b2cb5) list_single_sp_fs_schedule_track_pane_cp01

0xed9f,	// (0x000b2cbd) list_sp_fs_schedule_track_pane

0xeda7,	// (0x000b2cc5) sp_fs_scroll_pane_cp06_ParamLimits

0xeda7,	// (0x000b2cc5) sp_fs_scroll_pane_cp06

0xcb47,	// (0x000b0a65) bgmain_sp_fs_calendar_pane_g1

0x877b,	// (0x000ac699) list_single_cale_mrui_pane_ParamLimits

0x877b,	// (0x000ac699) list_single_cale_mrui_pane

0xedb9,	// (0x000b2cd7) list_single_cale_mrui_row_pane_ParamLimits

0xedb9,	// (0x000b2cd7) list_single_cale_mrui_row_pane

0xedc6,	// (0x000b2ce4) list_single_cale_mrui_row_pane_g1_ParamLimits

0xedc6,	// (0x000b2ce4) list_single_cale_mrui_row_pane_g1

0xee0b,	// (0x000b2d29) list_single_cale_mrui_row_pane_t1_ParamLimits

0xee0b,	// (0x000b2d29) list_single_cale_mrui_row_pane_t1

0x879c,	// (0x000ac6ba) list_single_cale_mrui_row_pane_t2_ParamLimits

0x879c,	// (0x000ac6ba) list_single_cale_mrui_row_pane_t2

0xee1d,	// (0x000b2d3b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xee1d,	// (0x000b2d3b) list_single_cale_mrui_row_pane_t3

0xee4c,	// (0x000b2d6a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xee4c,	// (0x000b2d6a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b3d17) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b3d17) list_single_cale_mrui_row_pane_t

0x8804,	// (0x000ac722) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8804,	// (0x000ac722) list_single_cmail_header_editor_pane_bg_cp01

0x882a,	// (0x000ac748) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x882a,	// (0x000ac748) list_single_cmail_header_editor_pane_bg_cp02

0x884a,	// (0x000ac768) main_radioblah_text_pane_t1_ParamLimits

0x884a,	// (0x000ac768) main_radioblah_text_pane_t1

0xee7b,	// (0x000b2d99) cam6_indi_pane_cp01

0xee83,	// (0x000b2da1) cam6_mode_pane_cp01

0xee8b,	// (0x000b2da9) cam6_pano_pane

0xee94,	// (0x000b2db2) cam6_zoom_pane_cp01

0xee9c,	// (0x000b2dba) cam6_pano_image_pane

0xeea7,	// (0x000b2dc5) cam6_pano_pane_g1

0xe5a1,	// (0x000b24bf) cam6_pano_pane_g2

0xeeb0,	// (0x000b2dce) cam6_pano_pane_g3

0xeeb9,	// (0x000b2dd7) cam6_pano_pane_g4

0xd142,	// (0x000b1060) cam6_pano_pane_g5

0xeec2,	// (0x000b2de0) cam6_pano_pane_g6

0xeecc,	// (0x000b2dea) cam6_pano_pane_g7

0xeed4,	// (0x000b2df2) cam6_pano_pane_g8

0xeedd,	// (0x000b2dfb) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b3d20) cam6_pano_pane_g

0xe32f,	// (0x000b224d) main_browser_tag_pane

0xec1b,	// (0x000b2b39) grid_navstr_albumart_pane

0xeee8,	// (0x000b2e06) cell_navstr_albumart_pane_ParamLimits

0xeee8,	// (0x000b2e06) cell_navstr_albumart_pane

0xef08,	// (0x000b2e26) cell_navstr_albumart_pane_g1

0xc547,	// (0x000b0465) cell_navstr_albumart_pane_g2

0xc557,	// (0x000b0475) cell_navstr_albumart_pane_g3

0xc54f,	// (0x000b046d) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b3d33) cell_navstr_albumart_pane_g

0x8864,	// (0x000ac782) bt_list_pane_ParamLimits

0x8864,	// (0x000ac782) bt_list_pane

0x8878,	// (0x000ac796) bt_list_pane_t1

0x8887,	// (0x000ac7a5) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b3d3c) bt_list_pane_t

0xe32f,	// (0x000b224d) main_cale_prevew_pane

0x8896,	// (0x000ac7b4) popup_cale_preview_window_ParamLimits

0x8896,	// (0x000ac7b4) popup_cale_preview_window

0xb752,	// (0x000af670) bg_popup_preview_window_pane_cp05_ParamLimits

0xb752,	// (0x000af670) bg_popup_preview_window_pane_cp05

0xef10,	// (0x000b2e2e) list_cale_preview_pane_ParamLimits

0xef10,	// (0x000b2e2e) list_cale_preview_pane

0x88b1,	// (0x000ac7cf) list_double_cale_preview_pane_ParamLimits

0x88b1,	// (0x000ac7cf) list_double_cale_preview_pane

0x88c3,	// (0x000ac7e1) list_single_cale_preview_pane_ParamLimits

0x88c3,	// (0x000ac7e1) list_single_cale_preview_pane

0x88d9,	// (0x000ac7f7) list_single_cale_preview_pane_g1

0x88e1,	// (0x000ac7ff) list_single_cale_preview_pane_t1_ParamLimits

0x88e1,	// (0x000ac7ff) list_single_cale_preview_pane_t1

0x88f6,	// (0x000ac814) list_double_cale_preview_pane_g1

0x88fe,	// (0x000ac81c) list_double_cale_preview_pane_t1_ParamLimits

0x88fe,	// (0x000ac81c) list_double_cale_preview_pane_t1

0x8913,	// (0x000ac831) list_double_cale_preview_pane_t2_ParamLimits

0x8913,	// (0x000ac831) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b3d41) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b3d41) list_double_cale_preview_pane_t

0xe32f,	// (0x000b224d) main_ezdial_pane

0xb752,	// (0x000af670) main_sp_fs_email_pane_ParamLimits

0x7e0a,	// (0x000abd28) cmail_ddmenu_btn01_pane_ParamLimits

0x7e0a,	// (0x000abd28) cmail_ddmenu_btn01_pane

0x7e1d,	// (0x000abd3b) cmail_ddmenu_btn02_pane_ParamLimits

0x7e1d,	// (0x000abd3b) cmail_ddmenu_btn02_pane

0x7e40,	// (0x000abd5e) cmail_ddmenu_btn03_pane_ParamLimits

0x7e40,	// (0x000abd5e) cmail_ddmenu_btn03_pane

0x7e66,	// (0x000abd84) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e8a,	// (0x000abda8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd637,	// (0x000b1555) list_cmail_body_pane_ParamLimits

0x8545,	// (0x000ac463) bg_button_pane_cp12

0xeb80,	// (0x000b2a9e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xeb80,	// (0x000b2a9e) list_single_cmail_header_detail_pane_g3

0xeb8d,	// (0x000b2aab) list_single_cmail_header_detail_pane_t2_ParamLimits

0xeb8d,	// (0x000b2aab) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b3cc4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b3cc4) list_single_cmail_header_detail_pane_t

0xec83,	// (0x000b2ba1) phacti_term_pane_t2_ParamLimits

0xec83,	// (0x000b2ba1) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b3cce) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b3cce) phacti_term_pane_t

0xef1c,	// (0x000b2e3a) aid_size_list_single_double

0x892b,	// (0x000ac849) popup_ezdial_listscroll_window

0x8947,	// (0x000ac865) popup_number_entry_window_cp01

0xadfd,	// (0x000aed1b) bg_popup_call_pane_cp09

0xef28,	// (0x000b2e46) ezdial_list_pane

0xef30,	// (0x000b2e4e) scroll_pane_cp23

0xc736,	// (0x000b0654) bg_button_pane_cp028_ParamLimits

0xc736,	// (0x000b0654) bg_button_pane_cp028

0x8955,	// (0x000ac873) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8955,	// (0x000ac873) cmail_ddmenu_btn01_pane_g1

0x8961,	// (0x000ac87f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8961,	// (0x000ac87f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b3d46) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b3d46) cmail_ddmenu_btn01_pane_g

0xef38,	// (0x000b2e56) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xef38,	// (0x000b2e56) cmail_ddmenu_btn01_pane_t1

0xc736,	// (0x000b0654) bg_button_pane_cp029_ParamLimits

0xc736,	// (0x000b0654) bg_button_pane_cp029

0x8975,	// (0x000ac893) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8975,	// (0x000ac893) cmail_ddmenu_btn02_pane_g1

0x898d,	// (0x000ac8ab) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x898d,	// (0x000ac8ab) cmail_ddmenu_btn02_pane_t1

0xb752,	// (0x000af670) bg_button_pane_cp031_ParamLimits

0xb752,	// (0x000af670) bg_button_pane_cp031

0x8975,	// (0x000ac893) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8975,	// (0x000ac893) cmail_ddmenu_btn03_pane_g1

0x898d,	// (0x000ac8ab) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x898d,	// (0x000ac8ab) cmail_ddmenu_btn03_pane_t1

0x5731,	// (0x000a964f) cell_dialer2_keypad_pane_t1_ParamLimits

0x574b,	// (0x000a9669) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x574b,	// (0x000a9669) cell_dialer2_keypad_pane_t1_copy1

0x765b,	// (0x000ab579) ncimui_group_button_pane

0xb752,	// (0x000af670) main_sp_fs_calendar_pane_ParamLimits

0x8504,	// (0x000ac422) list_single_cmail_header_caption_pane_ParamLimits

0xf061,	// (0x000b2f7f) aid_recal_txt_sm_pane

0xe32f,	// (0x000b224d) mian_recal_day_pane

0xecf5,	// (0x000b2c13) popup_sp_fs_cale_preview_window_ParamLimits

0xef4e,	// (0x000b2e6c) list_recal_day_pane

0xef91,	// (0x000b2eaf) list_single_recal_day_pane_ParamLimits

0xef91,	// (0x000b2eaf) list_single_recal_day_pane

0xefa3,	// (0x000b2ec1) list_single_recal_day_pane_g1_ParamLimits

0xefa3,	// (0x000b2ec1) list_single_recal_day_pane_g1

0xefaf,	// (0x000b2ecd) list_single_recal_day_pane_g2_ParamLimits

0xefaf,	// (0x000b2ecd) list_single_recal_day_pane_g2

0xefbf,	// (0x000b2edd) list_single_recal_day_pane_g3_ParamLimits

0xefbf,	// (0x000b2edd) list_single_recal_day_pane_g3

0x89b1,	// (0x000ac8cf) list_single_recal_day_pane_g4_ParamLimits

0x89b1,	// (0x000ac8cf) list_single_recal_day_pane_g4

0xefcb,	// (0x000b2ee9) list_single_recal_day_pane_g5_ParamLimits

0xefcb,	// (0x000b2ee9) list_single_recal_day_pane_g5

0xefdb,	// (0x000b2ef9) list_single_recal_day_pane_g6_ParamLimits

0xefdb,	// (0x000b2ef9) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b3d55) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b3d55) list_single_recal_day_pane_g

0xefef,	// (0x000b2f0d) list_single_recal_day_pane_t1

0xf001,	// (0x000b2f1f) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000b3d60) list_single_recal_day_pane_t

0x89d1,	// (0x000ac8ef) ncimui_query_button_pane_ParamLimits

0x89d1,	// (0x000ac8ef) ncimui_query_button_pane

0x89e1,	// (0x000ac8ff) ncimui_query_button_pane_t1_ParamLimits

0x89e1,	// (0x000ac8ff) ncimui_query_button_pane_t1

0xf06a,	// (0x000b2f88) ncimui_query_button_pane_t2_ParamLimits

0xf06a,	// (0x000b2f88) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000b3d65) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000b3d65) ncimui_query_button_pane_t

0x89f4,	// (0x000ac912) query_button_pane_ParamLimits

0x89f4,	// (0x000ac912) query_button_pane

0xe32f,	// (0x000b224d) bg_button_pane_cp0028

0xf07d,	// (0x000b2f9b) query_button_pane_t1

0x37d7,	// (0x000a76f5) main_tport_pane_ParamLimits

0x83c8,	// (0x000ac2e6) bg_popup_window_pane_cp01_ParamLimits

0x83c8,	// (0x000ac2e6) bg_popup_window_pane_cp01

0x83e3,	// (0x000ac301) heading_pane_cp08_ParamLimits

0x83e3,	// (0x000ac301) heading_pane_cp08

0x83f6,	// (0x000ac314) heading_pane_cp07_ParamLimits

0x83f6,	// (0x000ac314) heading_pane_cp07

0x849d,	// (0x000ac3bb) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b3cb1) cell_tport_appsw_pane_g

0x2d68,	// (0x000a6c86) input_candi_list_open_g1

0xa7bf,	// (0x000ae6dd) list_cale_time_pane_g6_ParamLimits

0xa7bf,	// (0x000ae6dd) list_cale_time_pane_g6

0x45a0,	// (0x000a84be) aid_size_touch_calib_1_ParamLimits

0x45a0,	// (0x000a84be) aid_size_touch_calib_1

0x45b2,	// (0x000a84d0) aid_size_touch_calib_2_ParamLimits

0x45b2,	// (0x000a84d0) aid_size_touch_calib_2

0x45ca,	// (0x000a84e8) aid_size_touch_calib_3_ParamLimits

0x45ca,	// (0x000a84e8) aid_size_touch_calib_3

0x45e8,	// (0x000a8506) aid_size_touch_calib_4_ParamLimits

0x45e8,	// (0x000a8506) aid_size_touch_calib_4

0x4600,	// (0x000a851e) main_touch_calib_button_group_pane_ParamLimits

0x4600,	// (0x000a851e) main_touch_calib_button_group_pane

0x4618,	// (0x000a8536) main_touch_calib_pane_g1_ParamLimits

0x462a,	// (0x000a8548) main_touch_calib_pane_g2_ParamLimits

0x463c,	// (0x000a855a) main_touch_calib_pane_g3_ParamLimits

0x464e,	// (0x000a856c) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x000b3674) main_touch_calib_pane_g_ParamLimits

0x4660,	// (0x000a857e) main_touch_calib_pane_t1_ParamLimits

0x467a,	// (0x000a8598) main_touch_calib_pane_t2_ParamLimits

0x4694,	// (0x000a85b2) main_touch_calib_pane_t3_ParamLimits

0x46a8,	// (0x000a85c6) main_touch_calib_pane_t4_ParamLimits

0x46bc,	// (0x000a85da) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x000b367d) main_touch_calib_pane_t_ParamLimits

0xcf02,	// (0x000b0e20) list_single_fp_cale_pane_g3_ParamLimits

0xcf02,	// (0x000b0e20) list_single_fp_cale_pane_g3

0x95e5,	// (0x000ad503) bg_button_pane_cp012_ParamLimits

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp03_ParamLimits

0x66bf,	// (0x000aa5dd) cell_vitu2_function_top_pane_g1_ParamLimits

0x95e5,	// (0x000ad503) bg_vkb2_func_pane_cp04_ParamLimits

0x75e9,	// (0x000ab507) main_ncimui_button_group_pane_ParamLimits

0x75e9,	// (0x000ab507) main_ncimui_button_group_pane

0x7649,	// (0x000ab567) main_ncimui_pane_t3_ParamLimits

0x7649,	// (0x000ab567) main_ncimui_pane_t3

0xec31,	// (0x000b2b4f) phacti_button_group_pane

0xef1c,	// (0x000b2e3a) aid_size_list_single_double_ParamLimits

0x892b,	// (0x000ac849) popup_ezdial_listscroll_window_ParamLimits

0x8947,	// (0x000ac865) popup_number_entry_window_cp01_ParamLimits

0x8a07,	// (0x000ac925) phacti_button_pane_ParamLimits

0x8a07,	// (0x000ac925) phacti_button_pane

0xe32f,	// (0x000b224d) bg_button_pane_cp14

0xf08b,	// (0x000b2fa9) phacti_button_pane_t1

0x8a18,	// (0x000ac936) main_touch_calib_button_pane_ParamLimits

0x8a18,	// (0x000ac936) main_touch_calib_button_pane

0x9aea,	// (0x000ada08) bg_button_pane_cp18_ParamLimits

0x9aea,	// (0x000ada08) bg_button_pane_cp18

0xf099,	// (0x000b2fb7) main_touch_calib_button_pane_t1_ParamLimits

0xf099,	// (0x000b2fb7) main_touch_calib_button_pane_t1

0xf0af,	// (0x000b2fcd) main_touch_calib_button_pane_t2_ParamLimits

0xf0af,	// (0x000b2fcd) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000b3d6a) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000b3d6a) main_touch_calib_button_pane_t

0xe32f,	// (0x000b224d) cell_ncimui_button_pane

0xe32f,	// (0x000b224d) bg_button_pane_cp032

0xb760,	// (0x000af67e) cell_ncimui_button_pane_t1

0xa034,	// (0x000adf52) image3_infobar_pane_ParamLimits

0xa034,	// (0x000adf52) image3_infobar_pane

0x7a25,	// (0x000ab943) fs_bigclock_status_pane_ParamLimits

0x7a25,	// (0x000ab943) fs_bigclock_status_pane

0x7a32,	// (0x000ab950) main_fs_bigclock_clock_pane_ParamLimits

0x7a32,	// (0x000ab950) main_fs_bigclock_clock_pane

0x7a4e,	// (0x000ab96c) main_fs_bigclock_indi_pane_ParamLimits

0x7a4e,	// (0x000ab96c) main_fs_bigclock_indi_pane

0x7a67,	// (0x000ab985) main_fs_bigclock_swipe_pane_ParamLimits

0x7a67,	// (0x000ab985) main_fs_bigclock_swipe_pane

0xe32f,	// (0x000b224d) main_fs_clock_dumped_data

0xe6ae,	// (0x000b25cc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe6ae,	// (0x000b25cc) list_single_fs_bigclock_indicator_pane_g1

0xe6c8,	// (0x000b25e6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe6c8,	// (0x000b25e6) list_single_fs_bigclock_indicator_pane_g2

0xe6e2,	// (0x000b2600) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe6e2,	// (0x000b2600) list_single_fs_bigclock_indicator_pane_g3

0xe6fc,	// (0x000b261a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe6fc,	// (0x000b261a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000b3b92) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000b3b92) list_single_fs_bigclock_indicator_pane_g

0xe725,	// (0x000b2643) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe725,	// (0x000b2643) list_single_fs_bigclock_indicator_pane_t1

0xe74d,	// (0x000b266b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe74d,	// (0x000b266b) list_single_fs_bigclock_indicator_pane_t2

0xe775,	// (0x000b2693) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe775,	// (0x000b2693) list_single_fs_bigclock_indicator_pane_t3

0xe79d,	// (0x000b26bb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe79d,	// (0x000b26bb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000b3b9d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000b3b9d) list_single_fs_bigclock_indicator_pane_t

0xb76e,	// (0x000af68c) image3_infobar_fav_pane_ParamLimits

0xb76e,	// (0x000af68c) image3_infobar_fav_pane

0xb77e,	// (0x000af69c) image3_infobar_loc_pane_ParamLimits

0xb77e,	// (0x000af69c) image3_infobar_loc_pane

0xb792,	// (0x000af6b0) image3_infobar_time_pane_ParamLimits

0xb792,	// (0x000af6b0) image3_infobar_time_pane

0xcb47,	// (0x000b0a65) image3_infobar_time_pane_g1

0xb7a2,	// (0x000af6c0) image3_infobar_time_pane_t1

0xcb47,	// (0x000b0a65) image3_infobar_loc_pane_g1

0xb7b0,	// (0x000af6ce) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000b3d6f) image3_infobar_loc_pane_g

0xb7b8,	// (0x000af6d6) image3_infobar_loc_pane_t1

0xcb47,	// (0x000b0a65) image3_infobar_fav_pane_g1

0xb7c6,	// (0x000af6e4) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000b3d74) image3_infobar_fav_pane_g

0xb7ce,	// (0x000af6ec) fs_bigclock_status_battery_pane

0xb7d7,	// (0x000af6f5) fs_bigclock_status_signal_pane

0xb7e0,	// (0x000af6fe) fs_bigclock_status_title_pane

0xb7e9,	// (0x000af707) fs_bigclock_status_signal_pane_g1

0xb7f2,	// (0x000af710) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000b3d79) fs_bigclock_status_signal_pane_g

0xb7fa,	// (0x000af718) fs_bigclock_status_battery_pane_g1

0xb803,	// (0x000af721) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000b3d7e) fs_bigclock_status_battery_pane_g

0xb80b,	// (0x000af729) fs_bigclock_status_title_pane_t1

0xcb47,	// (0x000b0a65) main_fs_bigclock_clock_pane_g1

0x8a2d,	// (0x000ac94b) main_fs_bigclock_clock_pane_g2

0x8a2d,	// (0x000ac94b) main_fs_bigclock_clock_pane_g3

0x8a2d,	// (0x000ac94b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000b3d83) main_fs_bigclock_clock_pane_g

0x8a35,	// (0x000ac953) main_fs_bigclock_clock_pane_t1

0x8a43,	// (0x000ac961) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000b3d8c) main_fs_bigclock_clock_pane_t

0xb819,	// (0x000af737) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb819,	// (0x000af737) list_single_fs_bigclock_indicator_pane

0x8a52,	// (0x000ac970) list_single_fs_bigclock_pane_ParamLimits

0x8a52,	// (0x000ac970) list_single_fs_bigclock_pane

0xb833,	// (0x000af751) main_fs_bigclock_indicator_pane_t1

0xb842,	// (0x000af760) list_single_fs_bigclock_pane_g1

0xb84a,	// (0x000af768) list_single_fs_bigclock_pane_t1

0xcb47,	// (0x000b0a65) main_fs_bigclock_swipe_pane_g1

0xb88d,	// (0x000af7ab) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000b3d9d) main_fs_bigclock_swipe_pane_g

0xb895,	// (0x000af7b3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb895,	// (0x000af7b3) main_fs_bigclock_swipe_pane_t1

0x2678,	// (0x000a6596) call_type_pane_ParamLimits

0xe32f,	// (0x000b224d) main_btmg_pane

0xedf2,	// (0x000b2d10) list_single_cale_mrui_row_pane_g2_ParamLimits

0xedf2,	// (0x000b2d10) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b3d10) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b3d10) list_single_cale_mrui_row_pane_g

0xef77,	// (0x000b2e95) list_recal_vselct_arw_lo_pane

0xef7f,	// (0x000b2e9d) list_recal_vselct_arw_up_pane

0xef87,	// (0x000b2ea5) list_recal_vselct_pane

0x8ab5,	// (0x000ac9d3) btmg_button_pane

0x8abf,	// (0x000ac9dd) main_btmg_pane_g1

0xe32f,	// (0x000b224d) bg_button_pane_cp044

0xb8b2,	// (0x000af7d0) btmg_button_pane_t1

0xc722,	// (0x000b0640) aid_listscroll_gen

0xb752,	// (0x000af670) main_cntbar_detail_pane

0xeb62,	// (0x000b2a80) list_cmail_folder_pane

0xaf70,	// (0x000aee8e) sp_fs_scroll_pane_cp03_ParamLimits

0x8ac9,	// (0x000ac9e7) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ac9,	// (0x000ac9e7) list_single_fs_dyc_pane_cp01

0xb8c0,	// (0x000af7de) aid_size_cmail_indent

0xf013,	// (0x000b2f31) list_single_dyc_row_pane_cp01

0x8b11,	// (0x000aca2f) cntbar_detail_list_pane_ParamLimits

0x8b11,	// (0x000aca2f) cntbar_detail_list_pane

0x8b5d,	// (0x000aca7b) main_cntbar_detail_cont_pane_ParamLimits

0x8b5d,	// (0x000aca7b) main_cntbar_detail_cont_pane

0xaf70,	// (0x000aee8e) scroll_pane_cp032_ParamLimits

0xaf70,	// (0x000aee8e) scroll_pane_cp032

0x8b71,	// (0x000aca8f) cntbar_detail_list_event_pane_ParamLimits

0x8b71,	// (0x000aca8f) cntbar_detail_list_event_pane

0x8b21,	// (0x000aca3f) cntbar_detail_list_shct_pane

0xa64a,	// (0x000ae568) aid_list_gen

0xb8c9,	// (0x000af7e7) aid_scroll

0xb8d2,	// (0x000af7f0) aid_size_touch_scroll_bar

0x6d86,	// (0x000aaca4) aid_list_double

0x8b81,	// (0x000aca9f) aid_list_single

0x6d86,	// (0x000aaca4) aid_list_single_lg

0x8b8a,	// (0x000acaa8) aid_list_z_g_a_sm

0x8b92,	// (0x000acab0) aid_list_z_g_d

0x8b9a,	// (0x000acab8) aid_txt_z_prm

0x8ba8,	// (0x000acac6) aid_txt_z_prm_cp01

0x8bb6,	// (0x000acad4) aid_txt_z_sec

0x8bc4,	// (0x000acae2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8bc4,	// (0x000acae2) main_cntbar_detail_cont_pane_g1

0x8bd8,	// (0x000acaf6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bd8,	// (0x000acaf6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000b3da2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000b3da2) main_cntbar_detail_cont_pane_g

0xb8db,	// (0x000af7f9) main_cntbar_detail_cont_pane_t1

0xb8e9,	// (0x000af807) main_cntbar_detail_cont_pane_t2

0xb8f7,	// (0x000af815) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000b3da7) main_cntbar_detail_cont_pane_t

0x8be8,	// (0x000acb06) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8be8,	// (0x000acb06) cell_cntbar_detail_list_shct_pane

0xb905,	// (0x000af823) cntbar_detail_list_shct_pane_g1

0xb90e,	// (0x000af82c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000b3dae) cntbar_detail_list_shct_pane_g

0x8bfc,	// (0x000acb1a) cntbar_detail_list_event_pane_g1_ParamLimits

0x8bfc,	// (0x000acb1a) cntbar_detail_list_event_pane_g1

0x8c08,	// (0x000acb26) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c08,	// (0x000acb26) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000b3db3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000b3db3) cntbar_detail_list_event_pane_g

0x8c74,	// (0x000acb92) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c74,	// (0x000acb92) cntbar_detail_list_event_pane_t1

0x8c89,	// (0x000acba7) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c89,	// (0x000acba7) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000b3dc0) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000b3dc0) cntbar_detail_list_event_pane_t

0xcb47,	// (0x000b0a65) cell_cntbar_detail_list_shct_pane_g1

0xadb5,	// (0x000aecd3) navi_pane_mv_g3

0xb752,	// (0x000af670) main_cntbar_detail_pane_ParamLimits

0xe32f,	// (0x000b224d) main_notif_wgt_pane

0x9e4a,	// (0x000add68) aid_tch_main_mp4_pane_g4

0xa02c,	// (0x000adf4a) popup_slider_window_cp02

0xef6d,	// (0x000b2e8b) list_recal_day_event_pane

0x8adf,	// (0x000ac9fd) cntbar_detail_btn_pane_ParamLimits

0x8adf,	// (0x000ac9fd) cntbar_detail_btn_pane

0x8af8,	// (0x000aca16) cntbar_detail_btn_pane_cp01_ParamLimits

0x8af8,	// (0x000aca16) cntbar_detail_btn_pane_cp01

0x8b21,	// (0x000aca3f) cntbar_detail_list_shct_pane_ParamLimits

0x8b31,	// (0x000aca4f) cntbar_detail_pane_g1_ParamLimits

0x8b31,	// (0x000aca4f) cntbar_detail_pane_g1

0x8b41,	// (0x000aca5f) cntbar_detail_pane_t1_ParamLimits

0x8b41,	// (0x000aca5f) cntbar_detail_pane_t1

0x8c14,	// (0x000acb32) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c14,	// (0x000acb32) cntbar_detail_list_event_pane_g3

0x8c2c,	// (0x000acb4a) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c2c,	// (0x000acb4a) cntbar_detail_list_event_pane_g4

0x8c44,	// (0x000acb62) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c44,	// (0x000acb62) cntbar_detail_list_event_pane_g5

0x8c5c,	// (0x000acb7a) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c5c,	// (0x000acb7a) cntbar_detail_list_event_pane_g6

0x8c9e,	// (0x000acbbc) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c9e,	// (0x000acbbc) cntbar_detail_list_event_pane_t3

0x8cb0,	// (0x000acbce) popup_notif_wgt_window_ParamLimits

0x8cb0,	// (0x000acbce) popup_notif_wgt_window

0x8cc9,	// (0x000acbe7) popup_submenu_window_cp01_ParamLimits

0x8cc9,	// (0x000acbe7) popup_submenu_window_cp01

0xadfd,	// (0x000aed1b) bg_popup_window_pane_cp10

0xb917,	// (0x000af835) listscroll_notif_wgt_pane

0xb929,	// (0x000af847) list_notif_wgt_window

0xb932,	// (0x000af850) scroll_pane_cp033

0x8cdf,	// (0x000acbfd) list_notif_wgt_row_pane_ParamLimits

0x8cdf,	// (0x000acbfd) list_notif_wgt_row_pane

0xb93b,	// (0x000af859) aid_size_list_notif_wgt_del

0xb948,	// (0x000af866) list_notif_wgt_row_pane_g1

0xb954,	// (0x000af872) list_notif_wgt_row_pane_g2

0xb960,	// (0x000af87e) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000b3dc7) list_notif_wgt_row_pane_g

0xb96d,	// (0x000af88b) list_notif_wgt_row_pane_t1

0xb982,	// (0x000af8a0) list_notif_wgt_row_pane_t2

0xb994,	// (0x000af8b2) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000b3dce) list_notif_wgt_row_pane_t

0xd885,	// (0x000b17a3) list_recal_day_event_pane_g1

0xb9a6,	// (0x000af8c4) list_recal_day_event_pane_t1

0xe32f,	// (0x000b224d) bg_button_pane_cp045

0x8cef,	// (0x000acc0d) cntbar_detail_btn_pane_t1

0xc736,	// (0x000b0654) main_callh_pane_ParamLimits

0xc736,	// (0x000b0654) main_callh_pane

0xe32f,	// (0x000b224d) main_coverflow0_pane

0xe32f,	// (0x000b224d) main_wgtman_pane

0x7a75,	// (0x000ab993) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a75,	// (0x000ab993) main_fs_bigclock_unlock_btn_pane

0x8495,	// (0x000ac3b3) bg_button_pane_cp16

0x84a5,	// (0x000ac3c3) cell_tport_appsw_pane_g3

0x8cfd,	// (0x000acc1b) cf0_flow_pane_ParamLimits

0x8cfd,	// (0x000acc1b) cf0_flow_pane

0xb9b5,	// (0x000af8d3) listscroll_cf0_pane

0xb9c0,	// (0x000af8de) main_cf0_pane_g1

0x8d12,	// (0x000acc30) main_cf0_pane_t1_ParamLimits

0x8d12,	// (0x000acc30) main_cf0_pane_t1

0x8d29,	// (0x000acc47) main_cf0_pane_t2_ParamLimits

0x8d29,	// (0x000acc47) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000b3dda) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000b3dda) main_cf0_pane_t

0xb9d2,	// (0x000af8f0) scroll_pane_cp11

0x8d40,	// (0x000acc5e) cf0_flow_pane_g1

0x8d48,	// (0x000acc66) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000b3ddf) cf0_flow_pane_g

0x8d50,	// (0x000acc6e) cf0_flow_pane_t1

0xe32f,	// (0x000b224d) main_call6_pane

0xe32f,	// (0x000b224d) main_calllock_pane

0x8d5e,	// (0x000acc7c) call6_btn_grp_pane_ParamLimits

0x8d5e,	// (0x000acc7c) call6_btn_grp_pane

0x8d78,	// (0x000acc96) call6_pane_g1_ParamLimits

0x8d78,	// (0x000acc96) call6_pane_g1

0x8d8d,	// (0x000accab) popup_call6_1st_window_ParamLimits

0x8d8d,	// (0x000accab) popup_call6_1st_window

0x8d9e,	// (0x000accbc) popup_call6_2nd_window_ParamLimits

0x8d9e,	// (0x000accbc) popup_call6_2nd_window

0x8daf,	// (0x000acccd) cell_call6_btn_pane_ParamLimits

0x8daf,	// (0x000acccd) cell_call6_btn_pane

0xadfd,	// (0x000aed1b) bg_popup_call2_in_pane_cp03

0xb9dd,	// (0x000af8fb) popup_call6_1st_window_g1

0xb9e5,	// (0x000af903) popup_call6_1st_window_g2

0xb9ed,	// (0x000af90b) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000b3de4) popup_call6_1st_window_g

0xb9f5,	// (0x000af913) popup_call6_1st_window_t1

0xba04,	// (0x000af922) popup_call6_1st_window_t2

0xba14,	// (0x000af932) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000b3deb) popup_call6_1st_window_t

0xadfd,	// (0x000aed1b) bg_popup_call2_in_pane_cp04

0xb9dd,	// (0x000af8fb) popup_call6_2nd_window_g1

0xb9e5,	// (0x000af903) popup_call6_2nd_window_g2

0xb9ed,	// (0x000af90b) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000b3de4) popup_call6_2nd_window_g

0xb9f5,	// (0x000af913) popup_call6_2nd_window_t1

0xe32f,	// (0x000b224d) bg_button_pane_cp15

0xba24,	// (0x000af942) cell_call6_btn_pane_g1

0xba2d,	// (0x000af94b) cell_call6_btn_pane_t1

0x8dc3,	// (0x000acce1) listscroll_wgtman_pane_ParamLimits

0x8dc3,	// (0x000acce1) listscroll_wgtman_pane

0x8de4,	// (0x000acd02) wgtman_btn_pane_ParamLimits

0x8de4,	// (0x000acd02) wgtman_btn_pane

0xabbc,	// (0x000aeada) aid_scroll_copy1

0xba3c,	// (0x000af95a) list_wgtman_pane

0x8e27,	// (0x000acd45) wgtman_btn_pane_g1_ParamLimits

0x8e27,	// (0x000acd45) wgtman_btn_pane_g1

0x8e53,	// (0x000acd71) wgtman_btn_pane_t1_ParamLimits

0x8e53,	// (0x000acd71) wgtman_btn_pane_t1

0xba46,	// (0x000af964) wgtman_btn_pane_t2_ParamLimits

0xba46,	// (0x000af964) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000b3df2) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000b3df2) wgtman_btn_pane_t

0x8e90,	// (0x000acdae) listrow_wgtman_pane_ParamLimits

0x8e90,	// (0x000acdae) listrow_wgtman_pane

0x8ea2,	// (0x000acdc0) listrow_wgtman_pane_g1

0x8eaf,	// (0x000acdcd) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000b3df7) listrow_wgtman_pane_g

0x8ecd,	// (0x000acdeb) listrow_wgtman_pane_t1

0x8ee5,	// (0x000ace03) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000b3dfc) listrow_wgtman_pane_t

0x8f0b,	// (0x000ace29) wait_bar_pane_cp09

0xba5d,	// (0x000af97b) main_calllock_btn_pane

0xba67,	// (0x000af985) main_calllock_pane_g1

0xe32f,	// (0x000b224d) bg_button_pane_cp17

0xba73,	// (0x000af991) main_calllock_btn_pane_g1

0xba7c,	// (0x000af99a) main_calllock_btn_pane_t1

0xe32f,	// (0x000b224d) main_dialer3_pane

0xe32f,	// (0x000b224d) main_fmrd2_pane

0xcb47,	// (0x000b0a65) main_fs_bigclock_unlock_btn_pane_g1

0xba93,	// (0x000af9b1) main_fs_bigclock_unlock_btn_pane_t1

0x8f1d,	// (0x000ace3b) area_fmrd2_info_pane_ParamLimits

0x8f1d,	// (0x000ace3b) area_fmrd2_info_pane

0x8f2e,	// (0x000ace4c) area_fmrd2_visual_pane_ParamLimits

0x8f2e,	// (0x000ace4c) area_fmrd2_visual_pane

0x8f3c,	// (0x000ace5a) fmrd2_indi_pane_ParamLimits

0x8f3c,	// (0x000ace5a) fmrd2_indi_pane

0x8f49,	// (0x000ace67) area_fmrd2_visual_pane_g1

0x8f51,	// (0x000ace6f) area_fmrd2_visual_pane_t1

0x8f61,	// (0x000ace7f) area_fmrd2_visual_pane_t2

0x8f71,	// (0x000ace8f) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000b3e06) area_fmrd2_visual_pane_t

0x8f81,	// (0x000ace9f) area_fmrd2_info_pane_g1

0x8f89,	// (0x000acea7) area_fmrd2_info_pane_t1

0x8f99,	// (0x000aceb7) area_fmrd2_info_pane_t2

0x8fa9,	// (0x000acec7) area_fmrd2_info_pane_t3

0x8fb9,	// (0x000aced7) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000b3e0d) area_fmrd2_info_pane_t

0x8fc7,	// (0x000acee5) fmrd2_indi_pane_t1

0x8fd7,	// (0x000acef5) fmrd2_indi_pane_t2

0x8fe7,	// (0x000acf05) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000b3e16) fmrd2_indi_pane_t

0xe70b,	// (0x000b2629) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe70b,	// (0x000b2629) list_single_fs_bigclock_indicator_pane_g5

0xe7b2,	// (0x000b26d0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe7b2,	// (0x000b26d0) list_single_fs_bigclock_indicator_pane_t5

0x867f,	// (0x000ac59d) aid_cell_bcale_month_pane_ParamLimits

0x867f,	// (0x000ac59d) aid_cell_bcale_month_pane

0x869d,	// (0x000ac5bb) bcale_month_pane_ParamLimits

0x869d,	// (0x000ac5bb) bcale_month_pane

0x86c1,	// (0x000ac5df) bcale_preview_pane_ParamLimits

0x86c1,	// (0x000ac5df) bcale_preview_pane

0xb84a,	// (0x000af768) list_single_fs_bigclock_pane_t1_ParamLimits

0xb869,	// (0x000af787) list_single_fs_bigclock_pane_t2_ParamLimits

0xb869,	// (0x000af787) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000b3d98) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000b3d98) list_single_fs_bigclock_pane_t

0xba8b,	// (0x000af9a9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000b3e01) main_fs_bigclock_unlock_btn_pane_g

0x8ff7,	// (0x000acf15) aid_dia3_key_size_ParamLimits

0x8ff7,	// (0x000acf15) aid_dia3_key_size

0x9006,	// (0x000acf24) aid_dia3_listrow_size_ParamLimits

0x9006,	// (0x000acf24) aid_dia3_listrow_size

0x901b,	// (0x000acf39) dia3_keypad_fun_pane_ParamLimits

0x901b,	// (0x000acf39) dia3_keypad_fun_pane

0x9037,	// (0x000acf55) dia3_keypad_num_pane_ParamLimits

0x9037,	// (0x000acf55) dia3_keypad_num_pane

0x9052,	// (0x000acf70) dia3_listscroll_pane_ParamLimits

0x9052,	// (0x000acf70) dia3_listscroll_pane

0x9065,	// (0x000acf83) dia3_numentry_pane_ParamLimits

0x9065,	// (0x000acf83) dia3_numentry_pane

0xbaa1,	// (0x000af9bf) dia3_list_pane

0xbaac,	// (0x000af9ca) scroll_pane_cp12

0xe32f,	// (0x000b224d) bg_dia3_numentry_pane

0x9079,	// (0x000acf97) dia3_numentry_pane_t1

0x9088,	// (0x000acfa6) cell_dia3_key_num_pane

0x9090,	// (0x000acfae) cell_dia3_key0_fun_pane_ParamLimits

0x9090,	// (0x000acfae) cell_dia3_key0_fun_pane

0x90a4,	// (0x000acfc2) cell_dia3_key1_fun_pane_ParamLimits

0x90a4,	// (0x000acfc2) cell_dia3_key1_fun_pane

0x90bc,	// (0x000acfda) dia3_listrow_pane

0xe1a9,	// (0x000b20c7) bg_dia3_numentry_pane_g1

0xe32f,	// (0x000b224d) bg_button_pane_cp21

0xbab7,	// (0x000af9d5) cell_dia3_key_num_pane_t1

0xbac5,	// (0x000af9e3) cell_dia3_key_num_pane_t2

0xbad4,	// (0x000af9f2) cell_dia3_key_num_pane_t3

0xbae3,	// (0x000afa01) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000b3e1d) cell_dia3_key_num_pane_t

0xe32f,	// (0x000b224d) bg_button_pane_cp19

0x90ce,	// (0x000acfec) cell_dia3_key0_fun_pane_g1

0xe32f,	// (0x000b224d) bg_button_pane_cp20

0x90d6,	// (0x000acff4) cell_dia3_key1_fun_pane_g1

0x90de,	// (0x000acffc) area_left_week_number_pane

0x90ea,	// (0x000ad008) area_top_day_name_pane

0x90fd,	// (0x000ad01b) frame_month_view_pane

0xbaf2,	// (0x000afa10) grid_month_view_pane

0x9110,	// (0x000ad02e) cell_top_day_name_pane_ParamLimits

0x9110,	// (0x000ad02e) cell_top_day_name_pane

0x913d,	// (0x000ad05b) cell_area_left_week_number_pane_ParamLimits

0x913d,	// (0x000ad05b) cell_area_left_week_number_pane

0x9151,	// (0x000ad06f) cell_month_view_pane_ParamLimits

0x9151,	// (0x000ad06f) cell_month_view_pane

0xbb00,	// (0x000afa1e) frm_month_g1

0x917e,	// (0x000ad09c) frm_month_g2

0x9191,	// (0x000ad0af) frm_month_g3

0x91a4,	// (0x000ad0c2) frm_month_g4

0x91b7,	// (0x000ad0d5) frm_month_g5

0x91ca,	// (0x000ad0e8) frm_month_g6

0x91dd,	// (0x000ad0fb) frm_month_g7

0xbb0d,	// (0x000afa2b) frm_month_g8

0x91f0,	// (0x000ad10e) frm_month_g9

0x9200,	// (0x000ad11e) frm_month_g10

0x9210,	// (0x000ad12e) frm_month_g11

0x9220,	// (0x000ad13e) frm_month_g12

0x9232,	// (0x000ad150) frm_month_g13

0x9244,	// (0x000ad162) frm_month_g14

0x9258,	// (0x000ad176) frm_month_g15

0x926c,	// (0x000ad18a) frm_month_g16

0x000f,

0xff08,	// (0x000b3e26) frm_month_g

0xbb1a,	// (0x000afa38) cell_top_day_name_pane_t1

0x9280,	// (0x000ad19e) cell_area_left_week_number_pane_g1

0x928c,	// (0x000ad1aa) cell_area_left_week_number_pane_t1

0xcdaa,	// (0x000b0cc8) cell_month_view_pane_g1

0x929f,	// (0x000ad1bd) cell_month_view_pane_t1

0xe32f,	// (0x000b224d) main_fps_pane

0xe987,	// (0x000b28a5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe987,	// (0x000b28a5) cmail_ddmenu_btn02_pane_cp1

0xe9a3,	// (0x000b28c1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe9a3,	// (0x000b28c1) cmail_ddmenu_btn02_pane_cp2

0x8981,	// (0x000ac89f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8981,	// (0x000ac89f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b3d4b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b3d4b) cmail_ddmenu_btn02_pane_g

0x899f,	// (0x000ac8bd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x899f,	// (0x000ac8bd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b3d50) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b3d50) cmail_ddmenu_btn02_pane_t

0x92b2,	// (0x000ad1d0) fps_text_pane_ParamLimits

0x92b2,	// (0x000ad1d0) fps_text_pane

0x92c9,	// (0x000ad1e7) main_fps_pane_g1_ParamLimits

0x92c9,	// (0x000ad1e7) main_fps_pane_g1

0x92e3,	// (0x000ad201) wait_bar_pane_cp010_ParamLimits

0x92e3,	// (0x000ad201) wait_bar_pane_cp010

0x92f4,	// (0x000ad212) fps_text_pane_t1_ParamLimits

0x92f4,	// (0x000ad212) fps_text_pane_t1

0xd65d,	// (0x000b157b) cam4_image_uncrop_pane_g1

0xd666,	// (0x000b1584) cam4_image_uncrop_pane_g2

0x5bd7,	// (0x000a9af5) cam4_image_uncrop_pane_g3

0x5be0,	// (0x000a9afe) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b380c) cam4_image_uncrop_pane_g

0x90bc,	// (0x000acfda) dia3_listrow_pane_ParamLimits

0xe32f,	// (0x000b224d) main_phob2_pane

0x8466,	// (0x000ac384) cell_tport_appsw_pane_cp02_ParamLimits

0x8466,	// (0x000ac384) cell_tport_appsw_pane_cp02

0x847a,	// (0x000ac398) cell_tport_appsw_pane_cp03_ParamLimits

0x847a,	// (0x000ac398) cell_tport_appsw_pane_cp03

0xe32f,	// (0x000b224d) phob2_contact_card_pane

0xe32f,	// (0x000b224d) phob2_listscroll_pane

0xbb2d,	// (0x000afa4b) phob2_list_pane

0xbb35,	// (0x000afa53) scroll_pane_cp034

0x930c,	// (0x000ad22a) phob2_cc_data_pane_ParamLimits

0x930c,	// (0x000ad22a) phob2_cc_data_pane

0x932b,	// (0x000ad249) phob2_cc_listscroll_pane_ParamLimits

0x932b,	// (0x000ad249) phob2_cc_listscroll_pane

0x9349,	// (0x000ad267) list_double_large_graphic_phob2_pane_ParamLimits

0x9349,	// (0x000ad267) list_double_large_graphic_phob2_pane

0x935b,	// (0x000ad279) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x935b,	// (0x000ad279) list_double_large_graphic_phob2_pane_g1

0x9371,	// (0x000ad28f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9371,	// (0x000ad28f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000b3e47) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000b3e47) list_double_large_graphic_phob2_pane_g

0x937d,	// (0x000ad29b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x937d,	// (0x000ad29b) list_double_large_graphic_phob2_pane_t1

0x9392,	// (0x000ad2b0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9392,	// (0x000ad2b0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000b3e4c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000b3e4c) list_double_large_graphic_phob2_pane_t

0xe32f,	// (0x000b224d) list_highlight_pane_cp024

0x93a4,	// (0x000ad2c2) phob2_cc_button_pane

0x93ac,	// (0x000ad2ca) phob2_cc_data_pane_g1_ParamLimits

0x93ac,	// (0x000ad2ca) phob2_cc_data_pane_g1

0x93c1,	// (0x000ad2df) phob2_cc_data_pane_g2_ParamLimits

0x93c1,	// (0x000ad2df) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000b3e51) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000b3e51) phob2_cc_data_pane_g

0x93d1,	// (0x000ad2ef) phob2_cc_data_pane_t1_ParamLimits

0x93d1,	// (0x000ad2ef) phob2_cc_data_pane_t1

0x93e9,	// (0x000ad307) phob2_cc_data_pane_t2_ParamLimits

0x93e9,	// (0x000ad307) phob2_cc_data_pane_t2

0x9401,	// (0x000ad31f) phob2_cc_data_pane_t3_ParamLimits

0x9401,	// (0x000ad31f) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000b3e56) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000b3e56) phob2_cc_data_pane_t

0xbb3d,	// (0x000afa5b) phob2_cc_list_pane_ParamLimits

0xbb3d,	// (0x000afa5b) phob2_cc_list_pane

0xd91c,	// (0x000b183a) scroll_pane_cp035_ParamLimits

0xd91c,	// (0x000b183a) scroll_pane_cp035

0xb752,	// (0x000af670) bg_button_pane_cp033

0xbb49,	// (0x000afa67) phob2_cc_button_pane_g1

0xbb55,	// (0x000afa73) phob2_cc_button_pane_t1

0xbb6a,	// (0x000afa88) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000b3e5d) phob2_cc_button_pane_t

0x9419,	// (0x000ad337) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9419,	// (0x000ad337) list_double_large_graphic_phob2_cc_pane

0x942b,	// (0x000ad349) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x942b,	// (0x000ad349) list_double_large_graphic_phob2_cc_pane_g1

0x9437,	// (0x000ad355) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9437,	// (0x000ad355) list_double_large_graphic_phob2_cc_pane_g2

0x9443,	// (0x000ad361) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9443,	// (0x000ad361) list_double_large_graphic_phob2_cc_pane_g3

0x944f,	// (0x000ad36d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x944f,	// (0x000ad36d) list_double_large_graphic_phob2_cc_pane_g4

0x945b,	// (0x000ad379) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x945b,	// (0x000ad379) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000b3e62) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000b3e62) list_double_large_graphic_phob2_cc_pane_g

0x9467,	// (0x000ad385) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9467,	// (0x000ad385) list_double_large_graphic_phob2_cc_pane_t1

0x9490,	// (0x000ad3ae) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9490,	// (0x000ad3ae) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000b3e6d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000b3e6d) list_double_large_graphic_phob2_cc_pane_t

0xbb7c,	// (0x000afa9a) list_highlight_pane_cp025_ParamLimits

0xbb7c,	// (0x000afa9a) list_highlight_pane_cp025

0xb752,	// (0x000af670) bg_button_pane_cp033_ParamLimits

0xbb49,	// (0x000afa67) phob2_cc_button_pane_g1_ParamLimits

0xbb55,	// (0x000afa73) phob2_cc_button_pane_t1_ParamLimits

0xbb6a,	// (0x000afa88) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000b3e5d) phob2_cc_button_pane_t_ParamLimits

0x04fc,	// (0x000a441a) popup_wgtman_window

0xd73d,	// (0x000b165b) scroll_pane_cp038

0x8e09,	// (0x000acd27) wgtman_btn_pane_cp_01_ParamLimits

0x8e09,	// (0x000acd27) wgtman_btn_pane_cp_01

0xbb8a,	// (0x000afaa8) wgtman_content_pane

0xbb93,	// (0x000afab1) wgtman_heading_pane

0xe32f,	// (0x000b224d) bg_heading_pane_cp02

0xbb9c,	// (0x000afaba) wgtman_heading_pane_g1

0xbba4,	// (0x000afac2) wgtman_heading_pane_t1

0xbbb2,	// (0x000afad0) scroll_pane_cp036

0xbbba,	// (0x000afad8) wgtman_list_pane

0xbbc2,	// (0x000afae0) wgtman_list_pane_t1_ParamLimits

0xbbc2,	// (0x000afae0) wgtman_list_pane_t1

0xa086,	// (0x000adfa4) cam4_grid_pane

0x6898,	// (0x000aa7b6) bg_button_pane_cp015_ParamLimits

0x68aa,	// (0x000aa7c8) bg_button_pane_cp016_ParamLimits

0x68bd,	// (0x000aa7db) bg_button_pane_cp017_ParamLimits

0x6915,	// (0x000aa833) popup_vitu2_query_window_g3_ParamLimits

0x6915,	// (0x000aa833) popup_vitu2_query_window_g3

0x69d2,	// (0x000aa8f0) popup_vitu2_query_window_t6_ParamLimits

0x69d2,	// (0x000aa8f0) popup_vitu2_query_window_t6

0x69fd,	// (0x000aa91b) popup_vitu2_query_window_t7_ParamLimits

0x69fd,	// (0x000aa91b) popup_vitu2_query_window_t7

0xd65d,	// (0x000b157b) cam4_grid_pane_g1

0xd666,	// (0x000b1584) cam4_grid_pane_g2

0xbbdc,	// (0x000afafa) cam4_grid_pane_g3

0xbbe5,	// (0x000afb03) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000b3e72) cam4_grid_pane_g

0x150c,	// (0x000a542a) aid_placing_vt_slider_lsc_ParamLimits

0x1817,	// (0x000a5735) vidtel_button_pane_ParamLimits

0x1817,	// (0x000a5735) vidtel_button_pane

0xbbf0,	// (0x000afb0e) bg_button_pane_cp034

0x94b9,	// (0x000ad3d7) vidtel_button_pane_g1

0xbbfa,	// (0x000afb18) vidtel_button_pane_t1

0xd863,	// (0x000b1781) aid_size_vtel_slider_touch

0xd91c,	// (0x000b183a) scroll_pane_cp039

0xe1e7,	// (0x000b2105) ncim_query_button_pane_cp01_ParamLimits

0xe206,	// (0x000b2124) ncimui_query_pane_g1_ParamLimits

0xb752,	// (0x000af670) input_focus_pane_cp012_ParamLimits

0xe22b,	// (0x000b2149) ncim_query_entry_pane_t1_ParamLimits

0xd91c,	// (0x000b183a) scroll_pane_cp039_ParamLimits

0xaca0,	// (0x000aebbe) navi_pane_bcale_mc_g1

0xaca8,	// (0x000aebc6) navi_pane_bcale_mc_t1

0xe9ec,	// (0x000b290a) main_sp_fs_email_pane_g1

0xe9f8,	// (0x000b2916) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b3c03) main_sp_fs_email_pane_g

0xedfe,	// (0x000b2d1c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xedfe,	// (0x000b2d1c) list_single_cale_mrui_row_pane_g3

0x89c7,	// (0x000ac8e5) list_single_recal_day_pane_g5_event_pane

0xefe7,	// (0x000b2f05) list_single_recal_day_pane_g7

0xbc08,	// (0x000afb26) list_recal_day_event_pane_cp01

0xbc11,	// (0x000afb2f) list_recal_vselct_arw_lo_pane_cp01

0xbc19,	// (0x000afb37) list_recal_vselct_arw_up_pane_cp01

0xbc21,	// (0x000afb3f) list_recal_vselct_pane_cp01

0xd885,	// (0x000b17a3) list_recal_day_event_pane_cp01_g1

0xf01c,	// (0x000b2f3a) list_recal_day_event_pane_cp01_t1

0xefef,	// (0x000b2f0d) list_single_recal_day_pane_t1_ParamLimits

0xf001,	// (0x000b2f1f) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000b3d60) list_single_recal_day_pane_t_ParamLimits

0x9a03,	// (0x000ad921) bg_notes_pane_ParamLimits

0x9aae,	// (0x000ad9cc) list_notes_pane_ParamLimits

0x0845,	// (0x000a4763) scroll_pane_cp06_ParamLimits

0x9aea,	// (0x000ada08) main_notes_pane_ParamLimits

0xe32f,	// (0x000b224d) main_welc_pane

0x94c1,	// (0x000ad3df) main_welc_body_pane_ParamLimits

0x94c1,	// (0x000ad3df) main_welc_body_pane

0x94df,	// (0x000ad3fd) main_welc_opti_pane_ParamLimits

0x94df,	// (0x000ad3fd) main_welc_opti_pane

0x9524,	// (0x000ad442) main_welc_pane_t1_ParamLimits

0x9524,	// (0x000ad442) main_welc_pane_t1

0x9542,	// (0x000ad460) main_welc_body_row_pane_ParamLimits

0x9542,	// (0x000ad460) main_welc_body_row_pane

0xf02a,	// (0x000b2f48) main_welc_opti_row_pane_ParamLimits

0xf02a,	// (0x000b2f48) main_welc_opti_row_pane

0xbc2b,	// (0x000afb49) main_welc_opti_row_pane_g1

0xbc33,	// (0x000afb51) main_welc_opti_row_pane_t1

0xbc43,	// (0x000afb61) main_welc_body_row_pane_t1

0xb921,	// (0x000af83f) popup_notif_wgt_heading_pane

0xb93b,	// (0x000af859) aid_size_list_notif_wgt_del_ParamLimits

0xb948,	// (0x000af866) list_notif_wgt_row_pane_g1_ParamLimits

0xb954,	// (0x000af872) list_notif_wgt_row_pane_g2_ParamLimits

0xb960,	// (0x000af87e) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000b3dc7) list_notif_wgt_row_pane_g_ParamLimits

0xb96d,	// (0x000af88b) list_notif_wgt_row_pane_t1_ParamLimits

0xb982,	// (0x000af8a0) list_notif_wgt_row_pane_t2_ParamLimits

0xb994,	// (0x000af8b2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000b3dce) list_notif_wgt_row_pane_t_ParamLimits

0x8ea2,	// (0x000acdc0) listrow_wgtman_pane_g1_ParamLimits

0x8eaf,	// (0x000acdcd) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000b3df7) listrow_wgtman_pane_g_ParamLimits

0x8ecd,	// (0x000acdeb) listrow_wgtman_pane_t1_ParamLimits

0x8ee5,	// (0x000ace03) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000b3dfc) listrow_wgtman_pane_t_ParamLimits

0x8f0b,	// (0x000ace29) wait_bar_pane_cp09_ParamLimits

0xe32f,	// (0x000b224d) bg_popup_heading_pane_cp02

0xbc52,	// (0x000afb70) popup_notif_wgt_heading_pane_g1

0xbc5a,	// (0x000afb78) popup_notif_wgt_heading_pane_t1

0xe32f,	// (0x000b224d) main_vids_pane

0xe32f,	// (0x000b224d) vids_listscroll_pane

0x9556,	// (0x000ad474) scroll_pane_cp040

0xe32f,	// (0x000b224d) vids_list_pane

0x9561,	// (0x000ad47f) vids_list_double_pane_ParamLimits

0x9561,	// (0x000ad47f) vids_list_double_pane

0x9572,	// (0x000ad490) vids_list_double_pane_g1

0x957b,	// (0x000ad499) vids_list_double_pane_t1

0x958b,	// (0x000ad4a9) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000b3e80) vids_list_double_pane_t

0x95e5,	// (0x000ad503) main_ncimui_pane_ParamLimits

0x75fd,	// (0x000ab51b) main_ncimui_pane_g1_ParamLimits

0x7609,	// (0x000ab527) main_ncimui_pane_g2_ParamLimits

0x7609,	// (0x000ab527) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000b3b08) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000b3b08) main_ncimui_pane_g

0x94fa,	// (0x000ad418) main_welc_pane_g1_ParamLimits

0x94fa,	// (0x000ad418) main_welc_pane_g1

0x950f,	// (0x000ad42d) main_welc_pane_g2_ParamLimits

0x950f,	// (0x000ad42d) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000b3e7b) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000b3e7b) main_welc_pane_g

0x9a03,	// (0x000ad921) listscroll_mce_pane_ParamLimits

0xadf5,	// (0x000aed13) wait_bar_pane_cp10

0xc72a,	// (0x000b0648) main_cale_day_pane_ParamLimits

0xc72a,	// (0x000b0648) main_cale_week_pane_ParamLimits

0x9a03,	// (0x000ad921) main_messa_pane_ParamLimits

0x4f11,	// (0x000a8e2f) main_clock2_btn_pane_ParamLimits

0x4f11,	// (0x000a8e2f) main_clock2_btn_pane

0xcf8a,	// (0x000b0ea8) main_clock2_btn_pane_cp01_ParamLimits

0xcf8a,	// (0x000b0ea8) main_clock2_btn_pane_cp01

0xed8a,	// (0x000b2ca8) list_cale_mrui_pane_ParamLimits

0xb9ca,	// (0x000af8e8) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000b3dd5) main_cf0_pane_g

0x90de,	// (0x000acffc) area_left_week_number_pane_ParamLimits

0x90ea,	// (0x000ad008) area_top_day_name_pane_ParamLimits

0x90fd,	// (0x000ad01b) frame_month_view_pane_ParamLimits

0xbaf2,	// (0x000afa10) grid_month_view_pane_ParamLimits

0xbb00,	// (0x000afa1e) frm_month_g1_ParamLimits

0x917e,	// (0x000ad09c) frm_month_g2_ParamLimits

0x9191,	// (0x000ad0af) frm_month_g3_ParamLimits

0x91a4,	// (0x000ad0c2) frm_month_g4_ParamLimits

0x91b7,	// (0x000ad0d5) frm_month_g5_ParamLimits

0x91ca,	// (0x000ad0e8) frm_month_g6_ParamLimits

0x91dd,	// (0x000ad0fb) frm_month_g7_ParamLimits

0xbb0d,	// (0x000afa2b) frm_month_g8_ParamLimits

0x91f0,	// (0x000ad10e) frm_month_g9_ParamLimits

0x9200,	// (0x000ad11e) frm_month_g10_ParamLimits

0x9210,	// (0x000ad12e) frm_month_g11_ParamLimits

0x9220,	// (0x000ad13e) frm_month_g12_ParamLimits

0x9232,	// (0x000ad150) frm_month_g13_ParamLimits

0x9244,	// (0x000ad162) frm_month_g14_ParamLimits

0x9258,	// (0x000ad176) frm_month_g15_ParamLimits

0x926c,	// (0x000ad18a) frm_month_g16_ParamLimits

0xff08,	// (0x000b3e26) frm_month_g_ParamLimits

0xbb1a,	// (0x000afa38) cell_top_day_name_pane_t1_ParamLimits

0x9280,	// (0x000ad19e) cell_area_left_week_number_pane_g1_ParamLimits

0x928c,	// (0x000ad1aa) cell_area_left_week_number_pane_t1_ParamLimits

0xcdaa,	// (0x000b0cc8) cell_month_view_pane_g1_ParamLimits

0x929f,	// (0x000ad1bd) cell_month_view_pane_t1_ParamLimits

0x99fb,	// (0x000ad919) main_clock2_btn_pane_g1

0xbc68,	// (0x000afb86) main_clock2_btn_pane_t1

0xb752,	// (0x000af670) listscroll_cmail_pane_ParamLimits

0xe9ec,	// (0x000b290a) main_sp_fs_email_pane_g1_ParamLimits

0xe9f8,	// (0x000b2916) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b3c03) main_sp_fs_email_pane_g_ParamLimits

0xef4e,	// (0x000b2e6c) list_recal_day_pane_ParamLimits

0xef5f,	// (0x000b2e7d) mian_recal_day_pane_t1

0x80ec,	// (0x000ac00a) list_single_dyc_row_text_pane_t4_ParamLimits

0x80ec,	// (0x000ac00a) list_single_dyc_row_text_pane_t4

0x8135,	// (0x000ac053) list_single_dyc_row_text_pane_t5_ParamLimits

0x8135,	// (0x000ac053) list_single_dyc_row_text_pane_t5

0xea9e,	// (0x000b29bc) list_single_dyc_row_text_pane_t6_ParamLimits

0xea9e,	// (0x000b29bc) list_single_dyc_row_text_pane_t6

0x24e3,	// (0x000a6401) aid_mgn_list_cale_time_pane

0x95e5,	// (0x000ad503) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large

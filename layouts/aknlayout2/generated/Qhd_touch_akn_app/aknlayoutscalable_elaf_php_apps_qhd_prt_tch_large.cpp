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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007b68f };

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
0x1f9c,	// (0x0007d62b) Screen

0x1fa8,	// (0x0007d637) application_window

0x2004,	// (0x0007d693) area_bottom_pane_ParamLimits

0x2004,	// (0x0007d693) area_bottom_pane

0x205d,	// (0x0007d6ec) area_top_pane_ParamLimits

0x205d,	// (0x0007d6ec) area_top_pane

0x20c1,	// (0x0007d750) call_video_uplink_pane_ParamLimits

0x20c1,	// (0x0007d750) call_video_uplink_pane

0x2100,	// (0x0007d78f) main_pane_ParamLimits

0x2100,	// (0x0007d78f) main_pane

0xc917,	// (0x00087fa6) context_pane

0x530f,	// (0x0008099e) navi_pane

0x5335,	// (0x000809c4) popup_cale_events_window_ParamLimits

0x5335,	// (0x000809c4) popup_cale_events_window

0xc92a,	// (0x00087fb9) popup_mup_playback_window

0x534d,	// (0x000809dc) signal_pane

0xa8b4,	// (0x00085f43) main_browser_pane

0xaa79,	// (0x00086108) main_burst_pane

0x519b,	// (0x0008082a) main_calc_pane

0xc8fd,	// (0x00087f8c) main_cale_day_pane

0x2843,	// (0x0007ded2) main_cale_month_pane

0xc8fd,	// (0x00087f8c) main_cale_week_pane

0xaa79,	// (0x00086108) main_call_pane

0xa57d,	// (0x00085c0c) main_call_poc_pane

0xaa79,	// (0x00086108) main_camera_pane

0xaa79,	// (0x00086108) main_chi_dic_pane

0xb27c,	// (0x0008690b) main_clock_pane

0xa57d,	// (0x00085c0c) main_fmradio_pane

0xaa79,	// (0x00086108) main_graph_messa_pane

0xa57d,	// (0x00085c0c) main_help_pane

0xa8b4,	// (0x00085f43) main_im_pane

0xa7ef,	// (0x00085e7e) main_image_pane_ParamLimits

0xa7ef,	// (0x00085e7e) main_image_pane

0xa57d,	// (0x00085c0c) main_location2_pane

0xaa79,	// (0x00086108) main_location_pane

0xa7ef,	// (0x00085e7e) main_messa_pane

0xa57d,	// (0x00085c0c) main_mp2_pane

0xaa79,	// (0x00086108) main_mp_pane

0xa57d,	// (0x00085c0c) main_msg_pane

0xa57d,	// (0x00085c0c) main_mup_eq_pane

0xa57d,	// (0x00085c0c) main_mup_pane

0xa8b4,	// (0x00085f43) main_notes_pane

0xa57d,	// (0x00085c0c) main_pec_pane

0xa57d,	// (0x00085c0c) main_phob_pane

0xa57d,	// (0x00085c0c) main_pinb_pane

0xa57d,	// (0x00085c0c) main_postcard_pane

0xa57d,	// (0x00085c0c) main_qdial_pane

0xaa79,	// (0x00086108) main_skin_pane

0xa57d,	// (0x00085c0c) main_smil2_pane

0xaa79,	// (0x00086108) main_smil_pane

0xaa79,	// (0x00086108) main_video_pane

0xaa79,	// (0x00086108) main_video_tele_pane

0xa7ef,	// (0x00085e7e) main_viewer_pane_ParamLimits

0xa7ef,	// (0x00085e7e) main_viewer_pane

0xaa79,	// (0x00086108) main_vorec_pane

0x51d9,	// (0x00080868) popup_blid_sat_info_window_ParamLimits

0x51d9,	// (0x00080868) popup_blid_sat_info_window

0x51f9,	// (0x00080888) popup_dyc_status_message_window_ParamLimits

0x51f9,	// (0x00080888) popup_dyc_status_message_window

0x5209,	// (0x00080898) popup_grid_large_graphic_window_ParamLimits

0x5209,	// (0x00080898) popup_grid_large_graphic_window

0x529a,	// (0x00080929) popup_loc_request_window_ParamLimits

0x529a,	// (0x00080929) popup_loc_request_window

0x52e7,	// (0x00080976) popup_wml_address_window_ParamLimits

0x52e7,	// (0x00080976) popup_wml_address_window

0x5073,	// (0x00080702) call_muted_g1

0x4d35,	// (0x000803c4) popup_call_audio_conf_window_ParamLimits

0x4d35,	// (0x000803c4) popup_call_audio_conf_window

0x5083,	// (0x00080712) popup_call_audio_first_window_ParamLimits

0x5083,	// (0x00080712) popup_call_audio_first_window

0x50c3,	// (0x00080752) popup_call_audio_in_window_ParamLimits

0x50c3,	// (0x00080752) popup_call_audio_in_window

0x50e7,	// (0x00080776) popup_call_audio_out_window_ParamLimits

0x50e7,	// (0x00080776) popup_call_audio_out_window

0x5109,	// (0x00080798) popup_call_audio_second_window_ParamLimits

0x5109,	// (0x00080798) popup_call_audio_second_window

0x5139,	// (0x000807c8) popup_call_audio_wait_window_ParamLimits

0x5139,	// (0x000807c8) popup_call_audio_wait_window

0x515a,	// (0x000807e9) popup_number_entry_window_ParamLimits

0x515a,	// (0x000807e9) popup_number_entry_window

0xa16a,	// (0x000857f9) bg_popup_call_pane_cp05_ParamLimits

0xa16a,	// (0x000857f9) bg_popup_call_pane_cp05

0xa18a,	// (0x00085819) popup_number_entry_window_t1

0xa19d,	// (0x0008582c) popup_number_entry_window_t2

0xa1af,	// (0x0008583e) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0008a73e) popup_number_entry_window_t

0xa1c1,	// (0x00085850) text_title_cp2

0xa1d4,	// (0x00085863) bg_popup_call_pane_cp_ParamLimits

0xa1d4,	// (0x00085863) bg_popup_call_pane_cp

0xa1e2,	// (0x00085871) call_thumbnail_pane

0xa1ea,	// (0x00085879) popup_call_audio_in_window_g1_ParamLimits

0xa1ea,	// (0x00085879) popup_call_audio_in_window_g1

0xa1f6,	// (0x00085885) popup_call_audio_in_window_g2_ParamLimits

0xa1f6,	// (0x00085885) popup_call_audio_in_window_g2

0xa202,	// (0x00085891) popup_call_audio_in_window_g3_ParamLimits

0xa202,	// (0x00085891) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0008a747) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0008a747) popup_call_audio_in_window_g

0xa20e,	// (0x0008589d) popup_call_audio_in_window_t1_ParamLimits

0xa20e,	// (0x0008589d) popup_call_audio_in_window_t1

0xa22a,	// (0x000858b9) popup_call_audio_in_window_t2_ParamLimits

0xa22a,	// (0x000858b9) popup_call_audio_in_window_t2

0xa246,	// (0x000858d5) popup_call_audio_in_window_t3_ParamLimits

0xa246,	// (0x000858d5) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0008a74e) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0008a74e) popup_call_audio_in_window_t

0xa1d4,	// (0x00085863) bg_popup_call_pane_cp01_ParamLimits

0xa1d4,	// (0x00085863) bg_popup_call_pane_cp01

0xa1e2,	// (0x00085871) call_thumbnail_pane_cp02

0xa259,	// (0x000858e8) call_type_pane_cp022

0xa261,	// (0x000858f0) popup_call_audio_out_window_g1_ParamLimits

0xa261,	// (0x000858f0) popup_call_audio_out_window_g1

0xa273,	// (0x00085902) popup_call_audio_out_window_g2_ParamLimits

0xa273,	// (0x00085902) popup_call_audio_out_window_g2

0xa27f,	// (0x0008590e) popup_call_audio_out_window_g3_ParamLimits

0xa27f,	// (0x0008590e) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0008a755) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0008a755) popup_call_audio_out_window_g

0xa291,	// (0x00085920) popup_call_audio_out_window_t1_ParamLimits

0xa291,	// (0x00085920) popup_call_audio_out_window_t1

0xa2a9,	// (0x00085938) popup_call_audio_out_window_t2_ParamLimits

0xa2a9,	// (0x00085938) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0008a75c) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0008a75c) popup_call_audio_out_window_t

0xa2be,	// (0x0008594d) bg_popup_call_pane_ParamLimits

0xa2be,	// (0x0008594d) bg_popup_call_pane

0x2301,	// (0x0007d990) call_thumbnail_pane_cp_ParamLimits

0x2301,	// (0x0007d990) call_thumbnail_pane_cp

0xa342,	// (0x000859d1) call_type_pane_cp01_ParamLimits

0xa342,	// (0x000859d1) call_type_pane_cp01

0xa386,	// (0x00085a15) popup_call_audio_first_window_g1_ParamLimits

0xa386,	// (0x00085a15) popup_call_audio_first_window_g1

0xa3d2,	// (0x00085a61) popup_call_audio_first_window_g2_ParamLimits

0xa3d2,	// (0x00085a61) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0008a761) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0008a761) popup_call_audio_first_window_g

0xa416,	// (0x00085aa5) popup_call_audio_first_window_t1_ParamLimits

0xa416,	// (0x00085aa5) popup_call_audio_first_window_t1

0xa4c2,	// (0x00085b51) popup_call_audio_first_window_t4_ParamLimits

0xa4c2,	// (0x00085b51) popup_call_audio_first_window_t4

0xa54e,	// (0x00085bdd) popup_call_audio_first_window_t5_ParamLimits

0xa54e,	// (0x00085bdd) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0008a766) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0008a766) popup_call_audio_first_window_t

0xa57d,	// (0x00085c0c) bg_popup_call_pane_cp02

0xa587,	// (0x00085c16) call_type_pane_cp023

0xa58f,	// (0x00085c1e) popup_call_audio_wait_window_g1

0xa597,	// (0x00085c26) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008a76d) popup_call_audio_wait_window_g

0xa59f,	// (0x00085c2e) popup_call_audio_wait_window_t3

0xa5ad,	// (0x00085c3c) bg_popup_call_pane_cp03_ParamLimits

0xa5ad,	// (0x00085c3c) bg_popup_call_pane_cp03

0xa60d,	// (0x00085c9c) call_thumbnail_pane_cp011_ParamLimits

0xa60d,	// (0x00085c9c) call_thumbnail_pane_cp011

0xa619,	// (0x00085ca8) call_type_pane_cp034_ParamLimits

0xa619,	// (0x00085ca8) call_type_pane_cp034

0xa655,	// (0x00085ce4) popup_call_audio_second_window_g1_ParamLimits

0xa655,	// (0x00085ce4) popup_call_audio_second_window_g1

0xa691,	// (0x00085d20) popup_call_audio_second_window_g2_ParamLimits

0xa691,	// (0x00085d20) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0008a772) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0008a772) popup_call_audio_second_window_g

0xa6cd,	// (0x00085d5c) popup_call_audio_second_window_t1_ParamLimits

0xa6cd,	// (0x00085d5c) popup_call_audio_second_window_t1

0xa74e,	// (0x00085ddd) popup_call_audio_second_window_t2_ParamLimits

0xa74e,	// (0x00085ddd) popup_call_audio_second_window_t2

0xa784,	// (0x00085e13) popup_call_audio_second_window_t3_ParamLimits

0xa784,	// (0x00085e13) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0008a777) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0008a777) popup_call_audio_second_window_t

0xa57d,	// (0x00085c0c) bg_popup_call_pane_cp04

0xa7d1,	// (0x00085e60) list_conf_pane

0xa7d9,	// (0x00085e68) popup_call_audio_conf_window_t1

0xa7e7,	// (0x00085e76) call_thumbnail_pane_g1

0xa7ef,	// (0x00085e7e) bg_pinb_pane_ParamLimits

0xa7ef,	// (0x00085e7e) bg_pinb_pane

0xa7fd,	// (0x00085e8c) find_pinb_pane

0xa806,	// (0x00085e95) listscroll_pinb_pane_ParamLimits

0xa806,	// (0x00085e95) listscroll_pinb_pane

0xa815,	// (0x00085ea4) pinb_bg_pane_g1

0x2325,	// (0x0007d9b4) pinb_bg_pane_g2

0x2331,	// (0x0007d9c0) pinb_bg_pane_g3

0x233d,	// (0x0007d9cc) pinb_bg_pane_g4

0x2349,	// (0x0007d9d8) pinb_bg_pane_g5

0x2355,	// (0x0007d9e4) pinb_bg_pane_g6

0x2360,	// (0x0007d9ef) pinb_bg_pane_g7

0x236b,	// (0x0007d9fa) pinb_bg_pane_g8

0x2376,	// (0x0007da05) pinb_bg_pane_g9

0x2380,	// (0x0007da0f) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0008a77e) pinb_bg_pane_g

0x239d,	// (0x0007da2c) grid_pinb_pane

0x23a8,	// (0x0007da37) list_pinb_pane

0x23b3,	// (0x0007da42) scroll_pane_cp01_ParamLimits

0x23b3,	// (0x0007da42) scroll_pane_cp01

0xa81f,	// (0x00085eae) find_pinb_pane_g1_ParamLimits

0xa81f,	// (0x00085eae) find_pinb_pane_g1

0xa837,	// (0x00085ec6) find_pinb_pane_t1

0xa849,	// (0x00085ed8) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0008a798) find_pinb_pane_t

0xa85e,	// (0x00085eed) input_focus_pane_cp01_ParamLimits

0xa85e,	// (0x00085eed) input_focus_pane_cp01

0x23c5,	// (0x0007da54) cell_pinb_pane_ParamLimits

0x23c5,	// (0x0007da54) cell_pinb_pane

0x23ed,	// (0x0007da7c) cell_pinb_pane_g1_ParamLimits

0x23ed,	// (0x0007da7c) cell_pinb_pane_g1

0x2402,	// (0x0007da91) cell_pinb_pane_g2_ParamLimits

0x2402,	// (0x0007da91) cell_pinb_pane_g2

0xa86a,	// (0x00085ef9) cell_pinb_pane_g3_ParamLimits

0xa86a,	// (0x00085ef9) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0008a79d) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0008a79d) cell_pinb_pane_g

0xa57d,	// (0x00085c0c) grid_highlight_pane_cp01

0x240e,	// (0x0007da9d) list_pinb_item_pane_ParamLimits

0x240e,	// (0x0007da9d) list_pinb_item_pane

0xa57d,	// (0x00085c0c) list_highlight_pane_cp02

0x2434,	// (0x0007dac3) list_pinb_item_pane_g1_ParamLimits

0x2434,	// (0x0007dac3) list_pinb_item_pane_g1

0x2441,	// (0x0007dad0) list_pinb_item_pane_g2_ParamLimits

0x2441,	// (0x0007dad0) list_pinb_item_pane_g2

0x244d,	// (0x0007dadc) list_pinb_item_pane_g3_ParamLimits

0x244d,	// (0x0007dadc) list_pinb_item_pane_g3

0x245e,	// (0x0007daed) list_pinb_item_pane_g4_ParamLimits

0x245e,	// (0x0007daed) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0008a7a4) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0008a7a4) list_pinb_item_pane_g

0x246a,	// (0x0007daf9) list_pinb_item_pane_t1_ParamLimits

0x246a,	// (0x0007daf9) list_pinb_item_pane_t1

0x249b,	// (0x0007db2a) calc_display_pane

0x24b9,	// (0x0007db48) calc_paper_pane

0x24d5,	// (0x0007db64) grid_calc_pane

0xa57d,	// (0x00085c0c) bg_list_pane_cp01

0x2501,	// (0x0007db90) clock_g1

0x2509,	// (0x0007db98) clock_g2

0x0001,

0xf11e,	// (0x0008a7ad) clock_g

0x2513,	// (0x0007dba2) clock_t1_ParamLimits

0x2513,	// (0x0007dba2) clock_t1

0x2528,	// (0x0007dbb7) clock_t2_ParamLimits

0x2528,	// (0x0007dbb7) clock_t2

0x253a,	// (0x0007dbc9) clock_t3_ParamLimits

0x253a,	// (0x0007dbc9) clock_t3

0x254c,	// (0x0007dbdb) clock_t4_ParamLimits

0x254c,	// (0x0007dbdb) clock_t4

0x255e,	// (0x0007dbed) clock_t5_ParamLimits

0x255e,	// (0x0007dbed) clock_t5

0x2573,	// (0x0007dc02) clock_t6_ParamLimits

0x2573,	// (0x0007dc02) clock_t6

0x2585,	// (0x0007dc14) clock_t7_ParamLimits

0x2585,	// (0x0007dc14) clock_t7

0x2597,	// (0x0007dc26) clock_t8_ParamLimits

0x2597,	// (0x0007dc26) clock_t8

0x25ad,	// (0x0007dc3c) clock_t9_ParamLimits

0x25ad,	// (0x0007dc3c) clock_t9

0x0008,

0xf123,	// (0x0008a7b2) clock_t_ParamLimits

0xf123,	// (0x0008a7b2) clock_t

0xa876,	// (0x00085f05) popup_clock_analogue_window_cp02

0xa876,	// (0x00085f05) popup_clock_digital_window_cp01

0xa87e,	// (0x00085f0d) listscroll_help_pane

0xa57d,	// (0x00085c0c) phob_pre_status_pane

0xa888,	// (0x00085f17) grid_qdial_pane

0xa7ef,	// (0x00085e7e) listscroll_mce_pane

0xa7ef,	// (0x00085e7e) bg_notes_pane

0xa892,	// (0x00085f21) list_notes_pane

0x25c3,	// (0x0007dc52) scroll_pane_cp06

0xa8a0,	// (0x00085f2f) bg_calc_paper_pane

0x25d2,	// (0x0007dc61) list_calc_pane

0xa8b4,	// (0x00085f43) bg_calc_display_pane

0x25ec,	// (0x0007dc7b) calc_display_pane_t1

0x2601,	// (0x0007dc90) calc_display_pane_t2

0x2616,	// (0x0007dca5) calc_display_pane_t3

0x0002,

0xf136,	// (0x0008a7c5) calc_display_pane_t

0x2628,	// (0x0007dcb7) cell_calc_pane_ParamLimits

0x2628,	// (0x0007dcb7) cell_calc_pane

0xa8c0,	// (0x00085f4f) bg_calc_paper_pane_g1

0xa8cc,	// (0x00085f5b) bg_calc_paper_pane_g2

0xa8d8,	// (0x00085f67) bg_calc_paper_pane_g3

0xa8e4,	// (0x00085f73) bg_calc_paper_pane_g4

0xa8f0,	// (0x00085f7f) bg_calc_paper_pane_g5

0x2655,	// (0x0007dce4) bg_calc_paper_pane_g6

0x2666,	// (0x0007dcf5) bg_calc_paper_pane_g7

0x2677,	// (0x0007dd06) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0008a7cc) bg_calc_paper_pane_g

0x2688,	// (0x0007dd17) calc_bg_paper_pane_g9

0x2699,	// (0x0007dd28) list_calc_item_pane_ParamLimits

0x2699,	// (0x0007dd28) list_calc_item_pane

0xa8fc,	// (0x00085f8b) list_calc_item_pane_g1

0x26c5,	// (0x0007dd54) list_calc_item_pane_t1_ParamLimits

0x26c5,	// (0x0007dd54) list_calc_item_pane_t1

0x26d7,	// (0x0007dd66) list_calc_item_pane_t2_ParamLimits

0x26d7,	// (0x0007dd66) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0008a7dd) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0008a7dd) list_calc_item_pane_t

0xa909,	// (0x00085f98) cell_calc_pane_g1

0xa913,	// (0x00085fa2) grid_highlight_pane_cp02

0x2707,	// (0x0007dd96) bg_calc_display_pane_g1

0x2710,	// (0x0007dd9f) bg_calc_display_pane_g2

0x271a,	// (0x0007dda9) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0008a7e7) bg_calc_display_pane_g

0x2723,	// (0x0007ddb2) cell_qdial_pane_ParamLimits

0x2723,	// (0x0007ddb2) cell_qdial_pane

0x2737,	// (0x0007ddc6) cell_qdial_pane_g1_ParamLimits

0x2737,	// (0x0007ddc6) cell_qdial_pane_g1

0x2744,	// (0x0007ddd3) cell_qdial_pane_g2_ParamLimits

0x2744,	// (0x0007ddd3) cell_qdial_pane_g2

0xa935,	// (0x00085fc4) cell_qdial_pane_g3_ParamLimits

0xa935,	// (0x00085fc4) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0008a7ee) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0008a7ee) cell_qdial_pane_g

0x2762,	// (0x0007ddf1) cell_qdial_pane_t1_ParamLimits

0x2762,	// (0x0007ddf1) cell_qdial_pane_t1

0x277a,	// (0x0007de09) cell_qdial_pane_t2_ParamLimits

0x277a,	// (0x0007de09) cell_qdial_pane_t2

0x278d,	// (0x0007de1c) cell_qdial_pane_t3_ParamLimits

0x278d,	// (0x0007de1c) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0008a7f7) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0008a7f7) cell_qdial_pane_t

0xa57d,	// (0x00085c0c) grid_highlight_pane_cp04

0xa941,	// (0x00085fd0) thumbnail_qdial_pane_ParamLimits

0xa941,	// (0x00085fd0) thumbnail_qdial_pane

0xa99d,	// (0x0008602c) list_help_pane

0xa9a6,	// (0x00086035) scroll_pane_cp02

0x27a0,	// (0x0007de2f) help_list_pane_t1_ParamLimits

0x27a0,	// (0x0007de2f) help_list_pane_t1

0x27d3,	// (0x0007de62) bg_notes_pane_g2

0x27db,	// (0x0007de6a) bg_notes_pane_g3

0x27e3,	// (0x0007de72) notes_bg_pane_g1

0x27eb,	// (0x0007de7a) notes_bg_pane_g4

0x27f3,	// (0x0007de82) notes_bg_pane_g5

0x27fb,	// (0x0007de8a) notes_bg_pane_g6

0x2803,	// (0x0007de92) notes_bg_pane_g7

0x280b,	// (0x0007de9a) notes_bg_pane_g8

0x2813,	// (0x0007dea2) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0008a815) notes_bg_pane_g

0x281b,	// (0x0007deaa) list_notes_text_pane_ParamLimits

0x281b,	// (0x0007deaa) list_notes_text_pane

0xa9af,	// (0x0008603e) list_notes_text_pane_g1

0x0d53,	// (0x0007c3e2) list_notes_text_pane_t1

0x2843,	// (0x0007ded2) listscroll_cale_week_pane

0x2868,	// (0x0007def7) bg_cale_heading_pane

0xa9d2,	// (0x00086061) bg_cale_pane_cp01

0x2888,	// (0x0007df17) cale_week_corner_pane

0x28a2,	// (0x0007df31) cale_week_day_heading_pane

0x28c2,	// (0x0007df51) cale_week_scroll_pane_g1

0x28dd,	// (0x0007df6c) cale_week_scroll_pane_g2

0x28f0,	// (0x0007df7f) cale_week_scroll_pane_g3

0x2903,	// (0x0007df92) cale_week_scroll_pane_g4

0x2916,	// (0x0007dfa5) cale_week_scroll_pane_g5

0x2929,	// (0x0007dfb8) cale_week_scroll_pane_g6

0x293c,	// (0x0007dfcb) cale_week_scroll_pane_g7

0x2951,	// (0x0007dfe0) cale_week_scroll_pane_g8

0x2966,	// (0x0007dff5) cale_week_scroll_pane_g9

0x2979,	// (0x0007e008) cale_week_scroll_pane_g10

0x298c,	// (0x0007e01b) cale_week_scroll_pane_g11

0x299f,	// (0x0007e02e) cale_week_scroll_pane_g12

0x29b6,	// (0x0007e045) cale_week_scroll_pane_g13

0x29d1,	// (0x0007e060) cale_week_scroll_pane_g14

0x29ec,	// (0x0007e07b) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0008a824) cale_week_scroll_pane_g

0x2a1c,	// (0x0007e0ab) cale_week_time_pane

0x2a31,	// (0x0007e0c0) grid_cale_week_pane

0xaa01,	// (0x00086090) scroll_pane_cp08

0x2a50,	// (0x0007e0df) cell_cale_week_pane_ParamLimits

0x2a50,	// (0x0007e0df) cell_cale_week_pane

0x2ab2,	// (0x0007e141) cale_week_day_heading_pane_t1

0x2acd,	// (0x0007e15c) cale_week_day_heading_pane_t2

0x2ae8,	// (0x0007e177) cale_week_day_heading_pane_t3

0x2b03,	// (0x0007e192) cale_week_day_heading_pane_t4

0x2b1e,	// (0x0007e1ad) cale_week_day_heading_pane_t5

0x2b39,	// (0x0007e1c8) cale_week_day_heading_pane_t6

0x2b54,	// (0x0007e1e3) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0008a845) cale_week_day_heading_pane_t

0xaa1e,	// (0x000860ad) bg_cale_side_pane

0x2b6f,	// (0x0007e1fe) cale_week_time_pane_t1

0x2b89,	// (0x0007e218) cale_week_time_pane_t2

0x2ba3,	// (0x0007e232) cale_week_time_pane_t3

0x2bbd,	// (0x0007e24c) cale_week_time_pane_t4

0x2bd7,	// (0x0007e266) cale_week_time_pane_t5

0x2bf1,	// (0x0007e280) cale_week_time_pane_t6

0x2c0f,	// (0x0007e29e) cale_week_time_pane_t7

0x2c31,	// (0x0007e2c0) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0008a854) cale_week_time_pane_t

0x2c55,	// (0x0007e2e4) cell_cale_week_pane_g2

0x2c79,	// (0x0007e308) cell_cale_week_pane_g3_ParamLimits

0x2c79,	// (0x0007e308) cell_cale_week_pane_g3

0xaa2c,	// (0x000860bb) grid_highlight_pane_cp07

0xaa34,	// (0x000860c3) listscroll_gms_pane

0xaa3e,	// (0x000860cd) grid_gms_pane

0xaa47,	// (0x000860d6) listscroll_gms_pane_g1

0xaa4f,	// (0x000860de) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0008a865) listscroll_gms_pane_g

0x2c91,	// (0x0007e320) scroll_pane_cp010

0x2c9c,	// (0x0007e32b) cell_gms_pane_ParamLimits

0x2c9c,	// (0x0007e32b) cell_gms_pane

0x2caf,	// (0x0007e33e) cell_gms_pane_g1

0xaa57,	// (0x000860e6) cell_gms_pane_g2

0xaa5f,	// (0x000860ee) cell_gms_pane_g3

0xaa68,	// (0x000860f7) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0008a86a) cell_gms_pane_g

0xaa71,	// (0x00086100) grid_highlight_pane_cp09

0x501b,	// (0x000806aa) phob_pre_status_pane_g1

0x5023,	// (0x000806b2) phob_pre_status_pane_g2

0x502b,	// (0x000806ba) phob_pre_status_pane_g3

0x5033,	// (0x000806c2) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0008ac55) phob_pre_status_pane_g

0x5043,	// (0x000806d2) phob_pre_status_pane_t1

0x5053,	// (0x000806e2) phob_pre_status_pane_t2

0x5063,	// (0x000806f2) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0008ac60) phob_pre_status_pane_t

0xaa79,	// (0x00086108) bg_list_pane_cp05

0x2cbf,	// (0x0007e34e) grid_vorec_pane

0x2cc9,	// (0x0007e358) vorec_t1

0x2cd7,	// (0x0007e366) vorec_t2

0x2ce5,	// (0x0007e374) vorec_t3

0x2cf3,	// (0x0007e382) vorec_t4

0xa108,	// (0x00085797) vorec_t5

0xa116,	// (0x000857a5) vorec_t6

0x0004,

0xf1e4,	// (0x0008a873) vorec_t

0xa124,	// (0x000857b3) wait_bar_pane_cp01

0x2d0f,	// (0x0007e39e) cell_vorec_pane_ParamLimits

0x2d0f,	// (0x0007e39e) cell_vorec_pane

0x2d22,	// (0x0007e3b1) cell_vorec_pane_g1

0xa57d,	// (0x00085c0c) grid_highlight_pane_cp05

0x2d3c,	// (0x0007e3cb) cams_zoom_pane

0x2d48,	// (0x0007e3d7) image_vga_pane

0x2d57,	// (0x0007e3e6) main_camera_pane_g1

0x2d65,	// (0x0007e3f4) main_camera_pane_g2

0x2d71,	// (0x0007e400) main_camera_pane_g3

0x2d7d,	// (0x0007e40c) main_camera_pane_g4

0x2d89,	// (0x0007e418) main_camera_pane_g5

0x2d95,	// (0x0007e424) main_camera_pane_g6

0x2da1,	// (0x0007e430) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0008a87e) main_camera_pane_g

0x2dad,	// (0x0007e43c) main_camera_pane_t1

0x2dbf,	// (0x0007e44e) main_camera_pane_t2

0x0001,

0xf200,	// (0x0008a88f) main_camera_pane_t

0x2de0,	// (0x0007e46f) cams_zoom_pane_cp_ParamLimits

0x2de0,	// (0x0007e46f) cams_zoom_pane_cp

0x2e04,	// (0x0007e493) image_cif_pane_ParamLimits

0x2e04,	// (0x0007e493) image_cif_pane

0x2e22,	// (0x0007e4b1) image_subqcif_pane

0x2e2a,	// (0x0007e4b9) main_video_pane_g1_ParamLimits

0x2e2a,	// (0x0007e4b9) main_video_pane_g1

0x2e4a,	// (0x0007e4d9) main_video_pane_g2_ParamLimits

0x2e4a,	// (0x0007e4d9) main_video_pane_g2

0x2e7a,	// (0x0007e509) main_video_pane_g3_ParamLimits

0x2e7a,	// (0x0007e509) main_video_pane_g3

0x2ea3,	// (0x0007e532) main_video_pane_g4_ParamLimits

0x2ea3,	// (0x0007e532) main_video_pane_g4

0x2ecc,	// (0x0007e55b) main_video_pane_g5_ParamLimits

0x2ecc,	// (0x0007e55b) main_video_pane_g5

0xaa8d,	// (0x0008611c) main_video_pane_g6_ParamLimits

0xaa8d,	// (0x0008611c) main_video_pane_g6

0x0006,

0xf205,	// (0x0008a894) main_video_pane_g_ParamLimits

0xf205,	// (0x0008a894) main_video_pane_g

0x2eee,	// (0x0007e57d) main_video_pane_t1_ParamLimits

0x2eee,	// (0x0007e57d) main_video_pane_t1

0xaaa7,	// (0x00086136) cams_zoom_pane_g1

0xaab0,	// (0x0008613f) cams_zoom_pane_g2

0xaab9,	// (0x00086148) cams_zoom_pane_g3

0xaac2,	// (0x00086151) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0008a8a3) cams_zoom_pane_g

0x2f38,	// (0x0007e5c7) grid_cams_pane

0x2f46,	// (0x0007e5d5) linegrid_cams_pane

0x2f54,	// (0x0007e5e3) cell_cams_pane_ParamLimits

0x2f54,	// (0x0007e5e3) cell_cams_pane

0xaacb,	// (0x0008615a) cams_burst_image_pane

0xaad3,	// (0x00086162) cell_cams_pane_g1

0xa57d,	// (0x00085c0c) grid_highlight_pane_cp03

0xa909,	// (0x00085f98) mp_bg_pane_g1

0xa57d,	// (0x00085c0c) bg_list_pane_cp03

0xc822,	// (0x00087eb1) bg_mp_pane

0xc82a,	// (0x00087eb9) grid_mp_pane

0xc832,	// (0x00087ec1) media_player_g1

0xc83a,	// (0x00087ec9) media_player_t1

0xc848,	// (0x00087ed7) media_player_t2

0xc856,	// (0x00087ee5) media_player_t3

0xc864,	// (0x00087ef3) media_player_t4

0xc872,	// (0x00087f01) media_player_t5

0xc880,	// (0x00087f0f) media_player_t6

0xc88e,	// (0x00087f1d) media_player_t7

0x0006,

0xf5b0,	// (0x0008ac3f) media_player_t

0xc89c,	// (0x00087f2b) wait_bar_pane_cp02

0xf595,	// (0x0008ac24) main_usb_pane_t

0x5012,	// (0x000806a1) cell_mp_pane

0xa909,	// (0x00085f98) cell_mp_pane_g1

0xa57d,	// (0x00085c0c) grid_highlight_pane_cp06

0xaadb,	// (0x0008616a) grid_skin_colour_pane

0xaae3,	// (0x00086172) list_highlight_pane_cp03

0x2f7f,	// (0x0007e60e) skin_g1

0xaaeb,	// (0x0008617a) skin_t1

0xaafa,	// (0x00086189) skin_t2

0x0001,

0xf249,	// (0x0008a8d8) skin_t

0x2f89,	// (0x0007e618) cell_skin_colour_pane_ParamLimits

0x2f89,	// (0x0007e618) cell_skin_colour_pane

0xab08,	// (0x00086197) cell_skin_colour_pane_g1

0x300d,	// (0x0007e69c) call_video_g1_ParamLimits

0x300d,	// (0x0007e69c) call_video_g1

0x301d,	// (0x0007e6ac) call_video_g2_ParamLimits

0x301d,	// (0x0007e6ac) call_video_g2

0x0001,

0xf24e,	// (0x0008a8dd) call_video_g_ParamLimits

0xf24e,	// (0x0008a8dd) call_video_g

0x3077,	// (0x0007e706) call_video_uplink_pane_cp1_ParamLimits

0x3077,	// (0x0007e706) call_video_uplink_pane_cp1

0xab1a,	// (0x000861a9) call_video_uplink_pane_cp2

0x3143,	// (0x0007e7d2) video_down_crop_pane_ParamLimits

0x3143,	// (0x0007e7d2) video_down_crop_pane

0x3241,	// (0x0007e8d0) video_down_pane_ParamLimits

0x3241,	// (0x0007e8d0) video_down_pane

0xab22,	// (0x000861b1) video_down_subqcif_pane_ParamLimits

0xab22,	// (0x000861b1) video_down_subqcif_pane

0xab3a,	// (0x000861c9) video_down_subqcif_pane_cp_ParamLimits

0xab3a,	// (0x000861c9) video_down_subqcif_pane_cp

0xab60,	// (0x000861ef) im_reading_pane_ParamLimits

0xab60,	// (0x000861ef) im_reading_pane

0x3361,	// (0x0007e9f0) im_writing_pane_ParamLimits

0x3361,	// (0x0007e9f0) im_writing_pane

0x337f,	// (0x0007ea0e) im_reading_pane_t1

0xab7a,	// (0x00086209) list_im_pane

0xab8b,	// (0x0008621a) scroll_pane_cp07

0x33d3,	// (0x0007ea62) im_writing_pane_t1_ParamLimits

0x33d3,	// (0x0007ea62) im_writing_pane_t1

0xaba4,	// (0x00086233) im_writing_pane_t2_ParamLimits

0xaba4,	// (0x00086233) im_writing_pane_t2

0x0001,

0xf258,	// (0x0008a8e7) im_writing_pane_t_ParamLimits

0xf258,	// (0x0008a8e7) im_writing_pane_t

0xa57d,	// (0x00085c0c) input_focus_pane_cp04

0xa57d,	// (0x00085c0c) input_focus_pane_cp05

0x33e8,	// (0x0007ea77) list_im_single_pane_ParamLimits

0x33e8,	// (0x0007ea77) list_im_single_pane

0x340c,	// (0x0007ea9b) list_single_im_pane_t1

0x4fd6,	// (0x00080665) blid_accuracy_pane

0x4fde,	// (0x0008066d) blid_compass_pane

0x4fe8,	// (0x00080677) main_location_t1

0x4ff6,	// (0x00080685) main_location_t2

0x5004,	// (0x00080693) main_location_t3

0x0002,

0xf5bf,	// (0x0008ac4e) main_location_t

0xa57d,	// (0x00085c0c) aid_levels_location

0xa909,	// (0x00085f98) blid_accuracy_pane_g1

0xa909,	// (0x00085f98) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0008a949) blid_accuracy_pane_g

0xabec,	// (0x0008627b) wml_content_pane

0xac2a,	// (0x000862b9) wml_button_pane_ParamLimits

0xac2a,	// (0x000862b9) wml_button_pane

0x341b,	// (0x0007eaaa) wml_list_single_large_pane_ParamLimits

0x341b,	// (0x0007eaaa) wml_list_single_large_pane

0x3445,	// (0x0007ead4) wml_list_single_medium_pane_ParamLimits

0x3445,	// (0x0007ead4) wml_list_single_medium_pane

0x3476,	// (0x0007eb05) wml_list_single_small_pane_ParamLimits

0x3476,	// (0x0007eb05) wml_list_single_small_pane

0xac3e,	// (0x000862cd) wml_selection_box_pane_ParamLimits

0xac3e,	// (0x000862cd) wml_selection_box_pane

0xac51,	// (0x000862e0) wml_list_single_pane_t1

0xac60,	// (0x000862ef) wml_list_single_medium_pane_t1

0xac6f,	// (0x000862fe) wml_list_single_large_pane_t1

0xac7e,	// (0x0008630d) input_focus_pane_cp02_ParamLimits

0xac7e,	// (0x0008630d) input_focus_pane_cp02

0xac91,	// (0x00086320) wml_selection_box_pane_g1

0xac9a,	// (0x00086329) wml_selection_box_pane_t1_ParamLimits

0xac9a,	// (0x00086329) wml_selection_box_pane_t1

0xa7ef,	// (0x00085e7e) bg_wml_button_pane_ParamLimits

0xa7ef,	// (0x00085e7e) bg_wml_button_pane

0xacb2,	// (0x00086341) wml_button_pane_g1

0xacba,	// (0x00086349) wml_button_pane_t1

0xacb2,	// (0x00086341) wml_button_bg_pane_g1

0xace1,	// (0x00086370) wml_button_bg_pane_g2

0xace9,	// (0x00086378) wml_button_bg_pane_g3

0xacf1,	// (0x00086380) wml_button_bg_pane_g4

0xacf9,	// (0x00086388) wml_button_bg_pane_g5

0xad01,	// (0x00086390) wml_button_bg_pane_g6

0xad09,	// (0x00086398) wml_button_bg_pane_g7

0xad11,	// (0x000863a0) wml_button_bg_pane_g8

0xad19,	// (0x000863a8) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0008a8ec) wml_button_bg_pane_g

0x34b0,	// (0x0007eb3f) bg_list_pane_cp02

0xad21,	// (0x000863b0) mce_header_pane_ParamLimits

0xad21,	// (0x000863b0) mce_header_pane

0xad37,	// (0x000863c6) mce_icon_pane

0xad37,	// (0x000863c6) mce_image_pane

0xad40,	// (0x000863cf) mce_text_pane_ParamLimits

0xad40,	// (0x000863cf) mce_text_pane

0x34ba,	// (0x0007eb49) scroll_pane_cp03

0xac22,	// (0x000862b1) scroll_pane_cp04

0xad53,	// (0x000863e2) scroll_pane_cp05_ParamLimits

0xad53,	// (0x000863e2) scroll_pane_cp05

0x34c4,	// (0x0007eb53) mce_header_field_pane_ParamLimits

0x34c4,	// (0x0007eb53) mce_header_field_pane

0x34e4,	// (0x0007eb73) mce_header_field_pane_2_ParamLimits

0x34e4,	// (0x0007eb73) mce_header_field_pane_2

0x34fa,	// (0x0007eb89) mce_header_field_pane_3

0x3502,	// (0x0007eb91) list_single_mce_message_pane_ParamLimits

0x3502,	// (0x0007eb91) list_single_mce_message_pane

0x352d,	// (0x0007ebbc) list_single_mce_smart_pane_ParamLimits

0x352d,	// (0x0007ebbc) list_single_mce_smart_pane

0xad5f,	// (0x000863ee) input_focus_pane_cp03

0xad68,	// (0x000863f7) list_header_data_pane

0x3563,	// (0x0007ebf2) mce_header_field_pane_t1

0x3571,	// (0x0007ec00) list_single_mce_header_pane_ParamLimits

0x3571,	// (0x0007ec00) list_single_mce_header_pane

0xad70,	// (0x000863ff) list_single_mce_header_pane_t1

0xad7f,	// (0x0008640e) list_single_mce_message_pane_g1

0xad87,	// (0x00086416) list_single_mce_message_pane_t1

0x35c3,	// (0x0007ec52) bg_cale_heading_pane_cp01_ParamLimits

0x35c3,	// (0x0007ec52) bg_cale_heading_pane_cp01

0xad95,	// (0x00086424) bg_cale_pane_cp02_ParamLimits

0xad95,	// (0x00086424) bg_cale_pane_cp02

0x3611,	// (0x0007eca0) cale_month_corner_pane

0x3630,	// (0x0007ecbf) cale_month_day_heading_pane_ParamLimits

0x3630,	// (0x0007ecbf) cale_month_day_heading_pane

0x3696,	// (0x0007ed25) cale_month_pane_g1_ParamLimits

0x3696,	// (0x0007ed25) cale_month_pane_g1

0x36d9,	// (0x0007ed68) cale_month_pane_g2_ParamLimits

0x36d9,	// (0x0007ed68) cale_month_pane_g2

0x3711,	// (0x0007eda0) cale_month_pane_g3_ParamLimits

0x3711,	// (0x0007eda0) cale_month_pane_g3

0x375d,	// (0x0007edec) cale_month_pane_g4_ParamLimits

0x375d,	// (0x0007edec) cale_month_pane_g4

0x37a9,	// (0x0007ee38) cale_month_pane_g5_ParamLimits

0x37a9,	// (0x0007ee38) cale_month_pane_g5

0x37f5,	// (0x0007ee84) cale_month_pane_g6_ParamLimits

0x37f5,	// (0x0007ee84) cale_month_pane_g6

0x3841,	// (0x0007eed0) cale_month_pane_g7_ParamLimits

0x3841,	// (0x0007eed0) cale_month_pane_g7

0x38a5,	// (0x0007ef34) cale_month_pane_g8_ParamLimits

0x38a5,	// (0x0007ef34) cale_month_pane_g8

0x3909,	// (0x0007ef98) cale_month_pane_g9_ParamLimits

0x3909,	// (0x0007ef98) cale_month_pane_g9

0x3967,	// (0x0007eff6) cale_month_pane_g10_ParamLimits

0x3967,	// (0x0007eff6) cale_month_pane_g10

0x39c3,	// (0x0007f052) cale_month_pane_g11_ParamLimits

0x39c3,	// (0x0007f052) cale_month_pane_g11

0x3a17,	// (0x0007f0a6) cale_month_pane_g12_ParamLimits

0x3a17,	// (0x0007f0a6) cale_month_pane_g12

0x3a6d,	// (0x0007f0fc) cale_month_pane_g13_ParamLimits

0x3a6d,	// (0x0007f0fc) cale_month_pane_g13

0x000c,

0xf270,	// (0x0008a8ff) cale_month_pane_g_ParamLimits

0xf270,	// (0x0008a8ff) cale_month_pane_g

0x3ac3,	// (0x0007f152) cale_month_week_pane

0x3ae7,	// (0x0007f176) grid_cale_month_pane_ParamLimits

0x3ae7,	// (0x0007f176) grid_cale_month_pane

0x3b40,	// (0x0007f1cf) cale_month_day_heading_pane_t1

0x3bc6,	// (0x0007f255) cale_month_day_heading_pane_t2

0x3c3f,	// (0x0007f2ce) cale_month_day_heading_pane_t3

0x3cb8,	// (0x0007f347) cale_month_day_heading_pane_t4

0x3d31,	// (0x0007f3c0) cale_month_day_heading_pane_t5

0x3daa,	// (0x0007f439) cale_month_day_heading_pane_t6

0x3e23,	// (0x0007f4b2) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0008a91a) cale_month_day_heading_pane_t

0xaa1e,	// (0x000860ad) bg_cale_side_pane_cp01

0x3eb4,	// (0x0007f543) cale_month_week_pane_t1

0x3ecd,	// (0x0007f55c) cale_month_week_pane_t2

0x3ee6,	// (0x0007f575) cale_month_week_pane_t3

0x3eff,	// (0x0007f58e) cale_month_week_pane_t4

0x3f18,	// (0x0007f5a7) cale_month_week_pane_t5

0x3f39,	// (0x0007f5c8) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0008a929) cale_month_week_pane_t

0x3f5a,	// (0x0007f5e9) cell_cale_month_pane_ParamLimits

0x3f5a,	// (0x0007f5e9) cell_cale_month_pane

0x407c,	// (0x0007f70b) cell_cale_month_pane_g1

0x4088,	// (0x0007f717) cell_cale_month_pane_t1_ParamLimits

0x4088,	// (0x0007f717) cell_cale_month_pane_t1

0xaa2c,	// (0x000860bb) grid_highlight_pane_cp08

0xa909,	// (0x00085f98) main_smil_g1

0x40b4,	// (0x0007f743) smil_status_pane

0xadd4,	// (0x00086463) smil_text_pane

0xc742,	// (0x00087dd1) bg_popup_call3_rect_pane_g8

0xc74a,	// (0x00087dd9) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0008abe2) bg_popup_call3_rect_pane_g

0xc991,	// (0x00088020) smil_status_volume_pane_g1

0xadde,	// (0x0008646d) smil_status_pane_t1

0x5400,	// (0x00080a8f) volume_smil_pane

0xadf5,	// (0x00086484) list_smil_text_pane

0x40c7,	// (0x0007f756) scroll_pane_cp011

0x40d2,	// (0x0007f761) smil_text_list_pane_t1_ParamLimits

0x40d2,	// (0x0007f761) smil_text_list_pane_t1

0x414a,	// (0x0007f7d9) aid_volume_smil_ParamLimits

0x414a,	// (0x0007f7d9) aid_volume_smil

0xa909,	// (0x00085f98) smil_volume_pane_g1

0xa909,	// (0x00085f98) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0008a949) smil_volume_pane_g

0x2843,	// (0x0007ded2) listscroll_cale_day_pane

0xadff,	// (0x0008648e) bg_cale_pane

0xae17,	// (0x000864a6) list_cale_pane

0xae3a,	// (0x000864c9) scroll_pane_cp09

0xae4b,	// (0x000864da) cale_bg_pane_g1

0xae53,	// (0x000864e2) cale_bg_pane_g2

0xae64,	// (0x000864f3) cale_bg_pane_g3

0xae6c,	// (0x000864fb) cale_bg_pane_g4

0xae74,	// (0x00086503) cale_bg_pane_g5

0xae7c,	// (0x0008650b) cale_bg_pane_g6

0xae84,	// (0x00086513) cale_bg_pane_g7

0xae8c,	// (0x0008651b) cale_bg_pane_g8

0xae94,	// (0x00086523) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0008a94e) cale_bg_pane_g

0x4174,	// (0x0007f803) list_cale_time_pane_ParamLimits

0x4174,	// (0x0007f803) list_cale_time_pane

0xae9c,	// (0x0008652b) list_cale_time_pane_g1_ParamLimits

0xae9c,	// (0x0008652b) list_cale_time_pane_g1

0xaea8,	// (0x00086537) list_cale_time_pane_g2_ParamLimits

0xaea8,	// (0x00086537) list_cale_time_pane_g2

0x4196,	// (0x0007f825) list_cale_time_pane_g3_ParamLimits

0x4196,	// (0x0007f825) list_cale_time_pane_g3

0x41a4,	// (0x0007f833) list_cale_time_pane_g4_ParamLimits

0x41a4,	// (0x0007f833) list_cale_time_pane_g4

0x41b2,	// (0x0007f841) list_cale_time_pane_g5_ParamLimits

0x41b2,	// (0x0007f841) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0008a961) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0008a961) list_cale_time_pane_g

0xaec2,	// (0x00086551) list_cale_time_pane_t1_ParamLimits

0xaec2,	// (0x00086551) list_cale_time_pane_t1

0xaeea,	// (0x00086579) list_cale_time_pane_t2_ParamLimits

0xaeea,	// (0x00086579) list_cale_time_pane_t2

0x4479,	// (0x0007fb08) aid_blid_cardinal_pane

0x44bb,	// (0x0007fb4a) compass_pane_t4

0xaf12,	// (0x000865a1) list_cale_time_pane_t4_ParamLimits

0xaf12,	// (0x000865a1) list_cale_time_pane_t4

0x44c9,	// (0x0007fb58) compass_pane_t5

0x44d9,	// (0x0007fb68) compass_pane_t6

0x44e7,	// (0x0007fb76) compass_pane_t7

0xb3c1,	// (0x00086a50) navi_pane_cc_t1

0xb5ac,	// (0x00086c3b) aid_phob_thumbnail_center_pane

0x4adc,	// (0x0008016b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0008a96e) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0008a96e) list_cale_time_pane_t

0xa1d4,	// (0x00085863) bg_popup_window_pane_cp02_ParamLimits

0xa1d4,	// (0x00085863) bg_popup_window_pane_cp02

0xaf3a,	// (0x000865c9) heading_pane_cp01_ParamLimits

0xaf3a,	// (0x000865c9) heading_pane_cp01

0xaf46,	// (0x000865d5) loc_req_pane_ParamLimits

0xaf46,	// (0x000865d5) loc_req_pane

0xaf56,	// (0x000865e5) loc_type_pane_ParamLimits

0xaf56,	// (0x000865e5) loc_type_pane

0xaf68,	// (0x000865f7) loc_type_pane_t1_ParamLimits

0xaf68,	// (0x000865f7) loc_type_pane_t1

0xaf7a,	// (0x00086609) loc_type_pane_t2_ParamLimits

0xaf7a,	// (0x00086609) loc_type_pane_t2

0xaf8c,	// (0x0008661b) loc_type_pane_t3_ParamLimits

0xaf8c,	// (0x0008661b) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0008a975) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0008a975) loc_type_pane_t

0xaf9e,	// (0x0008662d) list_loc_req_pane

0xafa8,	// (0x00086637) scroll_pane_cp012

0x41c0,	// (0x0007f84f) list_single_loc_request_popup_menu_pane_ParamLimits

0x41c0,	// (0x0007f84f) list_single_loc_request_popup_menu_pane

0xafb3,	// (0x00086642) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafb3,	// (0x00086642) list_single_loc_request_popup_menu_pane_g1

0xafbf,	// (0x0008664e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafbf,	// (0x0008664e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0008a97c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0008a97c) list_single_loc_request_popup_menu_pane_g

0xafcb,	// (0x0008665a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafcb,	// (0x0008665a) list_single_loc_request_popup_menu_pane_t1

0x41d2,	// (0x0007f861) bg_popup_window_pane_cp03_ParamLimits

0x41d2,	// (0x0007f861) bg_popup_window_pane_cp03

0x41e0,	// (0x0007f86f) heading_loc_req_pane_ParamLimits

0x41e0,	// (0x0007f86f) heading_loc_req_pane

0x41ec,	// (0x0007f87b) popup_dyc_status_message_window_g1_ParamLimits

0x41ec,	// (0x0007f87b) popup_dyc_status_message_window_g1

0x41f8,	// (0x0007f887) popup_dyc_status_message_window_t1_ParamLimits

0x41f8,	// (0x0007f887) popup_dyc_status_message_window_t1

0x420a,	// (0x0007f899) popup_dyc_status_message_window_t2_ParamLimits

0x420a,	// (0x0007f899) popup_dyc_status_message_window_t2

0x421c,	// (0x0007f8ab) popup_dyc_status_message_window_t3_ParamLimits

0x421c,	// (0x0007f8ab) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0008a981) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0008a981) popup_dyc_status_message_window_t

0xa57d,	// (0x00085c0c) bg_heading_pane_cp01

0xafed,	// (0x0008667c) heading_loc_req_pane_g1

0xaff5,	// (0x00086684) heading_loc_req_pane_g2

0xaffd,	// (0x0008668c) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0008a988) heading_loc_req_pane_g

0xb005,	// (0x00086694) heading_loc_req_pane_t1

0xb014,	// (0x000866a3) bg_popup_sub_pane_cp01_ParamLimits

0xb014,	// (0x000866a3) bg_popup_sub_pane_cp01

0xb022,	// (0x000866b1) popup_cale_events_window_g1_ParamLimits

0xb022,	// (0x000866b1) popup_cale_events_window_g1

0xb042,	// (0x000866d1) popup_cale_events_window_g2_ParamLimits

0xb042,	// (0x000866d1) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0008a9bc) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0008a9bc) popup_cale_events_window_g

0xb062,	// (0x000866f1) popup_cale_events_window_t1_ParamLimits

0xb062,	// (0x000866f1) popup_cale_events_window_t1

0xb074,	// (0x00086703) popup_cale_events_window_t2_ParamLimits

0xb074,	// (0x00086703) popup_cale_events_window_t2

0xb0b2,	// (0x00086741) popup_cale_events_window_t3_ParamLimits

0xb0b2,	// (0x00086741) popup_cale_events_window_t3

0xb0ec,	// (0x0008677b) popup_cale_events_window_t4_ParamLimits

0xb0ec,	// (0x0008677b) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0008a9c1) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0008a9c1) popup_cale_events_window_t

0x4246,	// (0x0007f8d5) call_type_pane

0xb47c,	// (0x00086b0b) popup_call_status_window_g1

0x4252,	// (0x0007f8e1) popup_call_status_window_g2

0x425e,	// (0x0007f8ed) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0008a9ca) popup_call_status_window_g

0xb122,	// (0x000867b1) call_type_pane_g1

0xb12b,	// (0x000867ba) call_type_pane_g2

0x0001,

0xf342,	// (0x0008a9d1) call_type_pane_g

0xa57d,	// (0x00085c0c) bg_popup_sub_pane_cp02

0xb134,	// (0x000867c3) listscroll_popup_wml_pane

0xb13c,	// (0x000867cb) list_wml_pane

0xb146,	// (0x000867d5) scroll_pane_cp013

0xb151,	// (0x000867e0) list_single_graphic_popup_wml_pane_ParamLimits

0xb151,	// (0x000867e0) list_single_graphic_popup_wml_pane

0xa909,	// (0x00085f98) list_single_graphic_popup_wml_pane_g1

0xb165,	// (0x000867f4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0008a9d6) list_single_graphic_popup_wml_pane_g

0xb16d,	// (0x000867fc) list_single_graphic_popup_wml_pane_t1

0xb183,	// (0x00086812) aid_call_pane

0xa7e7,	// (0x00085e76) popup_clock_analogue_window_g1

0xa7e7,	// (0x00085e76) popup_clock_analogue_window_g2

0x426a,	// (0x0007f8f9) popup_clock_analogue_window_g3

0x426a,	// (0x0007f8f9) popup_clock_analogue_window_g4

0xa909,	// (0x00085f98) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0008a9db) popup_clock_analogue_window_g

0x4272,	// (0x0007f901) popup_clock_analogue_window_t1

0x4280,	// (0x0007f90f) clock_digital_number_pane_ParamLimits

0x4280,	// (0x0007f90f) clock_digital_number_pane

0x428c,	// (0x0007f91b) clock_digital_number_pane_cp02_ParamLimits

0x428c,	// (0x0007f91b) clock_digital_number_pane_cp02

0x4298,	// (0x0007f927) clock_digital_number_pane_cp03_ParamLimits

0x4298,	// (0x0007f927) clock_digital_number_pane_cp03

0x42a4,	// (0x0007f933) clock_digital_number_pane_cp04_ParamLimits

0x42a4,	// (0x0007f933) clock_digital_number_pane_cp04

0x42b4,	// (0x0007f943) clock_digital_separator_pane_ParamLimits

0x42b4,	// (0x0007f943) clock_digital_separator_pane

0x42c0,	// (0x0007f94f) popup_clock_digital_window_t1

0xa909,	// (0x00085f98) clock_digital_number_pane_g1

0xa909,	// (0x00085f98) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0008a949) clock_digital_number_pane_g

0xa909,	// (0x00085f98) clock_digital_separator_pane_g1

0xa909,	// (0x00085f98) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0008a949) clock_digital_separator_pane_g

0xa57d,	// (0x00085c0c) bg_popup_window_pane_cp04

0xb18b,	// (0x0008681a) heading_pane_cp03

0xb193,	// (0x00086822) listscroll_popup_gms_pane

0xb19b,	// (0x0008682a) grid_large_graphic_popup_pane

0xb1a5,	// (0x00086834) listscroll_popup_gms_pane_g1

0xb1ad,	// (0x0008683c) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0008a9e6) listscroll_popup_gms_pane_g

0xac22,	// (0x000862b1) scroll_pane_cp014

0x42dd,	// (0x0007f96c) cell_large_graphic_popup_pane_ParamLimits

0x42dd,	// (0x0007f96c) cell_large_graphic_popup_pane

0x42f5,	// (0x0007f984) cell_large_graphic_popup_pane_g1_ParamLimits

0x42f5,	// (0x0007f984) cell_large_graphic_popup_pane_g1

0xb1b5,	// (0x00086844) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1b5,	// (0x00086844) cell_large_graphic_popup_pane_g2

0xb1c1,	// (0x00086850) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1c1,	// (0x00086850) cell_large_graphic_popup_pane_g3

0xb1ce,	// (0x0008685d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ce,	// (0x0008685d) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0008a9eb) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0008a9eb) cell_large_graphic_popup_pane_g

0xb1de,	// (0x0008686d) grid_highlight_pane_cp010

0xa909,	// (0x00085f98) bg_popup_call_pane_g1

0xb1e8,	// (0x00086877) list_single_graphic_popup_conf_pane_ParamLimits

0xb1e8,	// (0x00086877) list_single_graphic_popup_conf_pane

0xb1fb,	// (0x0008688a) list_highlight_pane_cp01

0xb204,	// (0x00086893) list_single_graphic_popup_conf_pane_g1

0xb20c,	// (0x0008689b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0008a9f4) list_single_graphic_popup_conf_pane_g

0xb214,	// (0x000868a3) list_single_graphic_popup_conf_pane_t1

0xb222,	// (0x000868b1) linegrid_cams_pane_g1

0x4301,	// (0x0007f990) linegrid_cams_pane_g2

0xaa5f,	// (0x000860ee) linegrid_cams_pane_g3

0xb22b,	// (0x000868ba) linegrid_cams_pane_g4

0x430a,	// (0x0007f999) linegrid_cams_pane_g5

0x4313,	// (0x0007f9a2) linegrid_cams_pane_g6

0xaa68,	// (0x000860f7) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0008a9f9) linegrid_cams_pane_g

0xb234,	// (0x000868c3) popup_clock_analogue_window

0xb234,	// (0x000868c3) popup_clock_digital_window

0xa57d,	// (0x00085c0c) popup_phob_thumbnail_window

0xa909,	// (0x00085f98) call_video_uplink_pane_g1

0xb23d,	// (0x000868cc) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0008aa08) call_video_uplink_pane_g

0xb245,	// (0x000868d4) video_uplink_pane

0xb24d,	// (0x000868dc) mce_image_pane_g1

0x431c,	// (0x0007f9ab) mce_image_pane_g2

0x4326,	// (0x0007f9b5) mce_image_pane_g3

0x432e,	// (0x0007f9bd) mce_image_pane_g4

0x4336,	// (0x0007f9c5) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0008aa0d) mce_image_pane_g

0xb257,	// (0x000868e6) control_top_pane_stacon_cp01_ParamLimits

0xb257,	// (0x000868e6) control_top_pane_stacon_cp01

0xb26b,	// (0x000868fa) uni_indicator_pane_stacon_cp01_ParamLimits

0xb26b,	// (0x000868fa) uni_indicator_pane_stacon_cp01

0xb27c,	// (0x0008690b) bg_popup_sub_pane_cp03

0xb286,	// (0x00086915) chi_dic_find_pane

0x433e,	// (0x0007f9cd) listscroll_chi_dic_pane

0xb28e,	// (0x0008691d) main_pane_chidic_g1

0xb296,	// (0x00086925) chi_dic_find_pane_t1

0xb2a4,	// (0x00086933) find_chidic_pane

0xb2ad,	// (0x0008693c) chi_dic_list_pane_ParamLimits

0xb2ad,	// (0x0008693c) chi_dic_list_pane

0xb2be,	// (0x0008694d) scroll_pane_cp020

0xb2c6,	// (0x00086955) find_chidic_pane_t1

0xa57d,	// (0x00085c0c) input_focus_pane_cp06

0x4352,	// (0x0007f9e1) list_chi_dic_pane_ParamLimits

0x4352,	// (0x0007f9e1) list_chi_dic_pane

0x436c,	// (0x0007f9fb) list_chi_dic_pane_t1_ParamLimits

0x436c,	// (0x0007f9fb) list_chi_dic_pane_t1

0xa57d,	// (0x00085c0c) list_highlight_pane_cp020

0xb2d5,	// (0x00086964) bg_cale_heading_pane_g1

0x437f,	// (0x0007fa0e) bg_cale_heading_pane_g2

0x4387,	// (0x0007fa16) bg_cale_heading_pane_g3

0x438f,	// (0x0007fa1e) bg_cale_heading_pane_g4

0x4399,	// (0x0007fa28) bg_cale_heading_pane_g5

0x43a3,	// (0x0007fa32) bg_cale_heading_pane_g6

0x43ab,	// (0x0007fa3a) bg_cale_heading_pane_g7

0x43b3,	// (0x0007fa42) bg_cale_heading_pane_g8

0x43bd,	// (0x0007fa4c) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0008aa18) bg_cale_heading_pane_g

0xb2d5,	// (0x00086964) bg_cale_side_pane_g1

0x43c7,	// (0x0007fa56) bg_cale_side_pane_g2

0x43d1,	// (0x0007fa60) bg_cale_side_pane_g3

0x43db,	// (0x0007fa6a) bg_cale_side_pane_g4

0x43e5,	// (0x0007fa74) bg_cale_side_pane_g5

0x43ef,	// (0x0007fa7e) bg_cale_side_pane_g6

0x43f9,	// (0x0007fa88) bg_cale_side_pane_g7

0x4403,	// (0x0007fa92) bg_cale_side_pane_g8

0x440b,	// (0x0007fa9a) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0008aa2b) bg_cale_side_pane_g

0x4413,	// (0x0007faa2) popup_call_status_window_ParamLimits

0x4413,	// (0x0007faa2) popup_call_status_window

0xb2dd,	// (0x0008696c) stacon_top_pane

0xb2e5,	// (0x00086974) status_pane_ParamLimits

0xb2e5,	// (0x00086974) status_pane

0xb2fa,	// (0x00086989) status_small_pane

0xb302,	// (0x00086991) control_pane

0xa57d,	// (0x00085c0c) stacon_bottom_pane

0xb30a,	// (0x00086999) list_single_mce_smart_pane_t1_ParamLimits

0xb30a,	// (0x00086999) list_single_mce_smart_pane_t1

0xb31d,	// (0x000869ac) list_single_mce_smart_pane_t2_ParamLimits

0xb31d,	// (0x000869ac) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0008aa3e) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0008aa3e) list_single_mce_smart_pane_t

0x441f,	// (0x0007faae) compass_pane

0x442b,	// (0x0007faba) main_location2_pane_t1

0x443f,	// (0x0007face) main_location2_pane_t2

0x4453,	// (0x0007fae2) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0008aa43) main_location2_pane_t

0xb33c,	// (0x000869cb) compass_pane_g1_ParamLimits

0xb33c,	// (0x000869cb) compass_pane_g1

0x449d,	// (0x0007fb2c) compass_pane_t1

0x44ac,	// (0x0007fb3b) compass_pane_t2

0x0005,

0xf3bd,	// (0x0008aa4c) compass_pane_t

0x44f7,	// (0x0007fb86) text_secondary_cp61

0xb3b8,	// (0x00086a47) navi_pane_cams_g5

0xb434,	// (0x00086ac3) navi_pane_im_t1

0xb442,	// (0x00086ad1) navi_pane_mp_g1_ParamLimits

0xb442,	// (0x00086ad1) navi_pane_mp_g1

0xb456,	// (0x00086ae5) navi_pane_mp_g2_ParamLimits

0xb456,	// (0x00086ae5) navi_pane_mp_g2

0xb462,	// (0x00086af1) navi_pane_mp_g3_ParamLimits

0xb462,	// (0x00086af1) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0008aa60) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0008aa60) navi_pane_mp_g

0xb46e,	// (0x00086afd) navi_pane_mp_t1

0xb48a,	// (0x00086b19) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0008aa67) navi_pane_mp_t

0xb4f5,	// (0x00086b84) navi_pane_vt_g1

0xb46e,	// (0x00086afd) navi_pane_vt_t1

0xb4fd,	// (0x00086b8c) navi_slider_pane

0xaa79,	// (0x00086108) zooming_pane

0xb50d,	// (0x00086b9c) navi_slider_pane_g1

0x4532,	// (0x0007fbc1) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0008aa6e) navi_slider_pane_g

0xb531,	// (0x00086bc0) aid_levels_zoom

0xb539,	// (0x00086bc8) zooming_pane_g1

0xb541,	// (0x00086bd0) zooming_pane_g2

0xb541,	// (0x00086bd0) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0008aa7d) zooming_pane_g

0xb549,	// (0x00086bd8) level_10_zoom

0xb552,	// (0x00086be1) level_11_zoom

0xb55b,	// (0x00086bea) level_1_zoom

0xb564,	// (0x00086bf3) level_2_zoom

0xb56d,	// (0x00086bfc) level_3_zoom

0xb576,	// (0x00086c05) level_4_zoom

0xb57f,	// (0x00086c0e) level_5_zoom

0xb588,	// (0x00086c17) level_6_zoom

0xb591,	// (0x00086c20) level_7_zoom

0xb59a,	// (0x00086c29) level_8_zoom

0xb5a3,	// (0x00086c32) level_9_zoom

0xb5b4,	// (0x00086c43) popup_phob_thumbnail_window_g1

0xb5bc,	// (0x00086c4b) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0008aa84) popup_phob_thumbnail_window_g

0xc8a4,	// (0x00087f33) level_1_location

0xc8ac,	// (0x00087f3b) level_2_location

0xc8b4,	// (0x00087f43) level_3_location

0xc8bc,	// (0x00087f4b) level_4_location

0xaa79,	// (0x00086108) level_5_location

0x4544,	// (0x0007fbd3) mce_icon_pane_g1

0x454c,	// (0x0007fbdb) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0008aa89) mce_icon_pane_g

0x4554,	// (0x0007fbe3) main_mup_pane_g1_ParamLimits

0x4554,	// (0x0007fbe3) main_mup_pane_g1

0x456c,	// (0x0007fbfb) main_mup_pane_g2_ParamLimits

0x456c,	// (0x0007fbfb) main_mup_pane_g2

0x4588,	// (0x0007fc17) main_mup_pane_g3_ParamLimits

0x4588,	// (0x0007fc17) main_mup_pane_g3

0x45a4,	// (0x0007fc33) main_mup_pane_g4_ParamLimits

0x45a4,	// (0x0007fc33) main_mup_pane_g4

0x45c0,	// (0x0007fc4f) main_mup_pane_g5_ParamLimits

0x45c0,	// (0x0007fc4f) main_mup_pane_g5

0x45e1,	// (0x0007fc70) main_mup_pane_g6_ParamLimits

0x45e1,	// (0x0007fc70) main_mup_pane_g6

0x45fd,	// (0x0007fc8c) main_mup_pane_g7_ParamLimits

0x45fd,	// (0x0007fc8c) main_mup_pane_g7

0x4619,	// (0x0007fca8) main_mup_pane_g8_ParamLimits

0x4619,	// (0x0007fca8) main_mup_pane_g8

0x4639,	// (0x0007fcc8) main_mup_pane_g9_ParamLimits

0x4639,	// (0x0007fcc8) main_mup_pane_g9

0x4658,	// (0x0007fce7) main_mup_pane_g10_ParamLimits

0x4658,	// (0x0007fce7) main_mup_pane_g10

0x4677,	// (0x0007fd06) main_mup_pane_g11_ParamLimits

0x4677,	// (0x0007fd06) main_mup_pane_g11

0x468f,	// (0x0007fd1e) main_mup_pane_g12_ParamLimits

0x468f,	// (0x0007fd1e) main_mup_pane_g12

0x469d,	// (0x0007fd2c) main_mup_pane_g13_ParamLimits

0x469d,	// (0x0007fd2c) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0008aa8e) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0008aa8e) main_mup_pane_g

0x46b3,	// (0x0007fd42) main_mup_pane_t1_ParamLimits

0x46b3,	// (0x0007fd42) main_mup_pane_t1

0x46d0,	// (0x0007fd5f) main_mup_pane_t2_ParamLimits

0x46d0,	// (0x0007fd5f) main_mup_pane_t2

0x46ea,	// (0x0007fd79) main_mup_pane_t3_ParamLimits

0x46ea,	// (0x0007fd79) main_mup_pane_t3

0x4704,	// (0x0007fd93) main_mup_pane_t4_ParamLimits

0x4704,	// (0x0007fd93) main_mup_pane_t4

0x4716,	// (0x0007fda5) main_mup_pane_t5_ParamLimits

0x4716,	// (0x0007fda5) main_mup_pane_t5

0x4728,	// (0x0007fdb7) main_mup_pane_t6_ParamLimits

0x4728,	// (0x0007fdb7) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0008aaa9) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0008aaa9) main_mup_pane_t

0x473e,	// (0x0007fdcd) mup_progress_pane_ParamLimits

0x473e,	// (0x0007fdcd) mup_progress_pane

0x474a,	// (0x0007fdd9) mup_visualizer_pane_ParamLimits

0x474a,	// (0x0007fdd9) mup_visualizer_pane

0x4784,	// (0x0007fe13) mup_volume_pane_ParamLimits

0x4784,	// (0x0007fe13) mup_volume_pane

0xb47c,	// (0x00086b0b) mup_visualizer_pane_g1_ParamLimits

0xb47c,	// (0x00086b0b) mup_visualizer_pane_g1

0xb47c,	// (0x00086b0b) mup_visualizer_pane_g2_ParamLimits

0xb47c,	// (0x00086b0b) mup_visualizer_pane_g2

0xb33c,	// (0x000869cb) mup_visualizer_pane_g3_ParamLimits

0xb33c,	// (0x000869cb) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0008aab6) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0008aab6) mup_visualizer_pane_g

0xa909,	// (0x00085f98) mup_volume_pane_g1

0xb5cc,	// (0x00086c5b) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0008aabd) mup_volume_pane_g

0xa909,	// (0x00085f98) mup_progress_pane_g1

0xb5d5,	// (0x00086c64) mup_progress_pane_g2

0xb5de,	// (0x00086c6d) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0008aac2) mup_progress_pane_g

0xa57d,	// (0x00085c0c) bg_popup_window_pane_cp05

0xb5e7,	// (0x00086c76) heading_pane_cp02_ParamLimits

0xb5e7,	// (0x00086c76) heading_pane_cp02

0xb601,	// (0x00086c90) list_popup_blid_pane

0xb609,	// (0x00086c98) list_blid_sat_info_pane_ParamLimits

0xb609,	// (0x00086c98) list_blid_sat_info_pane

0xb61c,	// (0x00086cab) list_blid_sat_info_pane_g1

0xb624,	// (0x00086cb3) list_blid_sat_info_pane_t1

0x4891,	// (0x0007ff20) mup_equalizer_pane_ParamLimits

0x4891,	// (0x0007ff20) mup_equalizer_pane

0x48b2,	// (0x0007ff41) mup_equalizer_pane_cp1_ParamLimits

0x48b2,	// (0x0007ff41) mup_equalizer_pane_cp1

0x48d3,	// (0x0007ff62) mup_equalizer_pane_cp2_ParamLimits

0x48d3,	// (0x0007ff62) mup_equalizer_pane_cp2

0x48f4,	// (0x0007ff83) mup_equalizer_pane_cp3_ParamLimits

0x48f4,	// (0x0007ff83) mup_equalizer_pane_cp3

0x4915,	// (0x0007ffa4) mup_equalizer_pane_cp4_ParamLimits

0x4915,	// (0x0007ffa4) mup_equalizer_pane_cp4

0x4936,	// (0x0007ffc5) mup_equalizer_pane_cp5

0x494c,	// (0x0007ffdb) mup_equalizer_pane_cp6

0x4964,	// (0x0007fff3) mup_equalizer_pane_cp7

0xc7c2,	// (0x00087e51) bg_popup_call_poc_act_pane_g9

0xc7ca,	// (0x00087e59) bg_popup_call_poc_act_pane_g10

0xc7d2,	// (0x00087e61) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7ef,	// (0x00085e7e) mup_scale_pane

0xa909,	// (0x00085f98) mup_scale_pane_g1

0xb632,	// (0x00086cc1) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0008aade) mup_scale_pane_g

0xb656,	// (0x00086ce5) msg_data_pane

0xb65e,	// (0x00086ced) scroll_pane_cp017

0x0f45,	// (0x0007c5d4) bg_list_pane_cp04_ParamLimits

0x0f45,	// (0x0007c5d4) bg_list_pane_cp04

0xb666,	// (0x00086cf5) msg_data_pane_g1

0x498e,	// (0x0008001d) msg_data_pane_g2

0x4998,	// (0x00080027) msg_data_pane_g3

0x49a0,	// (0x0008002f) msg_data_pane_g4

0x49a8,	// (0x00080037) msg_data_pane_g5

0x49b0,	// (0x0008003f) msg_data_pane_g6

0x49b8,	// (0x00080047) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0008aaed) msg_data_pane_g

0x0f6b,	// (0x0007c5fa) msg_text_pane_ParamLimits

0x0f6b,	// (0x0007c5fa) msg_text_pane

0x49c0,	// (0x0008004f) qrid_highlight_pane_cp011_ParamLimits

0x49c0,	// (0x0008004f) qrid_highlight_pane_cp011

0xa57d,	// (0x00085c0c) msg_body_pane

0xa57d,	// (0x00085c0c) msg_header_pane

0xb677,	// (0x00086d06) input_focus_pane_cp07

0x0fbe,	// (0x0007c64d) msg_header_pane_t1_ParamLimits

0x0fbe,	// (0x0007c64d) msg_header_pane_t1

0x0fd0,	// (0x0007c65f) msg_header_pane_t2_ParamLimits

0x0fd0,	// (0x0007c65f) msg_header_pane_t2

0x0001,

0xf472,	// (0x0008ab01) msg_header_pane_t_ParamLimits

0xf472,	// (0x0008ab01) msg_header_pane_t

0xb68c,	// (0x00086d1b) msg_body_pane_g1

0x0fe2,	// (0x0007c671) msg_body_pane_t1_ParamLimits

0x0fe2,	// (0x0007c671) msg_body_pane_t1

0x1013,	// (0x0007c6a2) msg_body_pane_t2_ParamLimits

0x1013,	// (0x0007c6a2) msg_body_pane_t2

0x1025,	// (0x0007c6b4) msg_body_pane_t3_ParamLimits

0x1025,	// (0x0007c6b4) msg_body_pane_t3

0x0002,

0xf477,	// (0x0008ab06) msg_body_pane_t_ParamLimits

0xf477,	// (0x0008ab06) msg_body_pane_t

0x4a2c,	// (0x000800bb) main_viewer_pane_g1_ParamLimits

0x4a2c,	// (0x000800bb) main_viewer_pane_g1

0x4a38,	// (0x000800c7) main_viewer_pane_g2_ParamLimits

0x4a38,	// (0x000800c7) main_viewer_pane_g2

0x4a44,	// (0x000800d3) main_viewer_pane_g3_ParamLimits

0x4a44,	// (0x000800d3) main_viewer_pane_g3

0x4a55,	// (0x000800e4) main_viewer_pane_g4_ParamLimits

0x4a55,	// (0x000800e4) main_viewer_pane_g4

0x4a66,	// (0x000800f5) main_viewer_pane_g5_ParamLimits

0x4a66,	// (0x000800f5) main_viewer_pane_g5

0x4a66,	// (0x000800f5) main_viewer_pane_g7_ParamLimits

0x4a66,	// (0x000800f5) main_viewer_pane_g7

0x4a78,	// (0x00080107) main_viewer_pane_g8_ParamLimits

0x4a78,	// (0x00080107) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0008ab16) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0008ab16) main_viewer_pane_g

0xb694,	// (0x00086d23) viewer_content_pane_ParamLimits

0xb694,	// (0x00086d23) viewer_content_pane

0x4ab0,	// (0x0008013f) main_postcard_pane_g1_ParamLimits

0x4ab0,	// (0x0008013f) main_postcard_pane_g1

0x4abe,	// (0x0008014d) main_postcard_pane_g2_ParamLimits

0x4abe,	// (0x0008014d) main_postcard_pane_g2

0x4acc,	// (0x0008015b) main_postcard_pane_g3_ParamLimits

0x4acc,	// (0x0008015b) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0008ab27) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0008ab27) main_postcard_pane_g

0x4adc,	// (0x0008016b) main_postcard_pane_g4

0xc9a4,	// (0x00088033) smil_status_volume_pane_g2

0x4b08,	// (0x00080197) postcard_pane_ParamLimits

0x4b08,	// (0x00080197) postcard_pane

0xb47c,	// (0x00086b0b) postcard_pane_g1_ParamLimits

0xb47c,	// (0x00086b0b) postcard_pane_g1

0x4b3a,	// (0x000801c9) postcard_pane_g2_ParamLimits

0x4b3a,	// (0x000801c9) postcard_pane_g2

0x4b46,	// (0x000801d5) postcard_pane_g3_ParamLimits

0x4b46,	// (0x000801d5) postcard_pane_g3

0xb6a2,	// (0x00086d31) postcard_pane_g4_ParamLimits

0xb6a2,	// (0x00086d31) postcard_pane_g4

0x4b52,	// (0x000801e1) postcard_pane_g5_ParamLimits

0x4b52,	// (0x000801e1) postcard_pane_g5

0x4b5e,	// (0x000801ed) postcard_pane_g6_ParamLimits

0x4b5e,	// (0x000801ed) postcard_pane_g6

0xb6b0,	// (0x00086d3f) postcard_pane_g7_ParamLimits

0xb6b0,	// (0x00086d3f) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0008ab34) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0008ab34) postcard_pane_g

0x4b6a,	// (0x000801f9) main_mp2_pane_g1_ParamLimits

0x4b6a,	// (0x000801f9) main_mp2_pane_g1

0x4b76,	// (0x00080205) main_mp2_pane_g2_ParamLimits

0x4b76,	// (0x00080205) main_mp2_pane_g2

0x4b82,	// (0x00080211) main_mp2_pane_g3_ParamLimits

0x4b82,	// (0x00080211) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0008ab43) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0008ab43) main_mp2_pane_g

0x4b8e,	// (0x0008021d) main_mp2_pane_t1_ParamLimits

0x4b8e,	// (0x0008021d) main_mp2_pane_t1

0x4ba5,	// (0x00080234) main_mp2_pane_t2_ParamLimits

0x4ba5,	// (0x00080234) main_mp2_pane_t2

0x4bb9,	// (0x00080248) main_mp2_pane_t3_ParamLimits

0x4bb9,	// (0x00080248) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0008ab4a) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0008ab4a) main_mp2_pane_t

0xb6be,	// (0x00086d4d) pec_content_pane_ParamLimits

0xb6be,	// (0x00086d4d) pec_content_pane

0xac22,	// (0x000862b1) scroll_pane_cp015

0xb6d0,	// (0x00086d5f) pec_attribute_pane_ParamLimits

0xb6d0,	// (0x00086d5f) pec_attribute_pane

0x4bcb,	// (0x0008025a) pec_content_pane_g1_ParamLimits

0x4bcb,	// (0x0008025a) pec_content_pane_g1

0xb6e0,	// (0x00086d6f) pec_content_pane_t1_ParamLimits

0xb6e0,	// (0x00086d6f) pec_content_pane_t1

0xb6f2,	// (0x00086d81) pec_content_pane_t2_ParamLimits

0xb6f2,	// (0x00086d81) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0008ab51) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0008ab51) pec_content_pane_t

0x4bd7,	// (0x00080266) list_single_graphic_pane_cp01_ParamLimits

0x4bd7,	// (0x00080266) list_single_graphic_pane_cp01

0xa7ef,	// (0x00085e7e) bg_popup_sub_pane_cp04

0xb704,	// (0x00086d93) popup_mup_playback_window_g1

0xb710,	// (0x00086d9f) popup_mup_playback_window_t1

0xb725,	// (0x00086db4) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0008ab56) popup_mup_playback_window_t

0xb75c,	// (0x00086deb) main_image_pane_g1_ParamLimits

0xb75c,	// (0x00086deb) main_image_pane_g1

0xb79f,	// (0x00086e2e) scroll_pane_cp018_ParamLimits

0xb79f,	// (0x00086e2e) scroll_pane_cp018

0xb7b7,	// (0x00086e46) scroll_pane_cp016_ParamLimits

0xb7b7,	// (0x00086e46) scroll_pane_cp016

0x4c70,	// (0x000802ff) smil2_image_pane_ParamLimits

0x4c70,	// (0x000802ff) smil2_image_pane

0x4ca0,	// (0x0008032f) smil2_root_pane_ParamLimits

0x4ca0,	// (0x0008032f) smil2_root_pane

0x4ccc,	// (0x0008035b) smil2_text_pane_ParamLimits

0x4ccc,	// (0x0008035b) smil2_text_pane

0xa57d,	// (0x00085c0c) bg_list_pane_cp06

0xb7f3,	// (0x00086e82) grid_radio_pane

0xa57d,	// (0x00085c0c) bg_popup_window_pane_cp06

0xb7fb,	// (0x00086e8a) main_fmradio_pane_t1

0xb18b,	// (0x0008681a) heading_pane_cp04

0xb809,	// (0x00086e98) main_fmradio_pane_t2

0xc7da,	// (0x00087e69) popup_cale_lunar_info_window_g1

0xb817,	// (0x00086ea6) main_fmradio_pane_t3

0xc7e2,	// (0x00087e71) popup_cale_lunar_info_window_g2

0xb825,	// (0x00086eb4) main_fmradio_pane_t4

0x0001,

0xb833,	// (0x00086ec2) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0008ac31) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0008ab6b) main_fmradio_pane_t

0xb841,	// (0x00086ed0) wait_bar_pane_cp03

0xb849,	// (0x00086ed8) cell_fmradio_pane_ParamLimits

0xb849,	// (0x00086ed8) cell_fmradio_pane

0xb6b0,	// (0x00086d3f) cell_fmradio_pane_g1_ParamLimits

0xb6b0,	// (0x00086d3f) cell_fmradio_pane_g1

0xa57d,	// (0x00085c0c) grid_highlight_pane_cp011

0xb85c,	// (0x00086eeb) poc_content_pane_ParamLimits

0xb85c,	// (0x00086eeb) poc_content_pane

0xb86e,	// (0x00086efd) scroll_pane_cp019

0x4d0c,	// (0x0008039b) popup_call_poc_act_window_ParamLimits

0x4d0c,	// (0x0008039b) popup_call_poc_act_window

0x4d19,	// (0x000803a8) popup_call_poc_inact_window_ParamLimits

0x4d19,	// (0x000803a8) popup_call_poc_inact_window

0xf579,	// (0x0008ac08) bg_popup_call_poc_act_pane_g

0xc752,	// (0x00087de1) bg_popup_call_poc_inact_pane_g1

0xc75a,	// (0x00087de9) bg_popup_call_poc_inact_pane_g2

0xb876,	// (0x00086f05) popup_call_poc_act_window_g2

0xc762,	// (0x00087df1) bg_popup_call_poc_inact_pane_g3

0xc76a,	// (0x00087df9) bg_popup_call_poc_inact_pane_g4

0xc772,	// (0x00087e01) bg_popup_call_poc_inact_pane_g5

0xb87e,	// (0x00086f0d) popup_call_poc_act_window_t1_ParamLimits

0xb87e,	// (0x00086f0d) popup_call_poc_act_window_t1

0xb8a6,	// (0x00086f35) popup_call_poc_act_window_t2_ParamLimits

0xb8a6,	// (0x00086f35) popup_call_poc_act_window_t2

0xb8ce,	// (0x00086f5d) popup_call_poc_act_window_t3_ParamLimits

0xb8ce,	// (0x00086f5d) popup_call_poc_act_window_t3

0xb8f6,	// (0x00086f85) popup_call_poc_act_window_t4_ParamLimits

0xb8f6,	// (0x00086f85) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0008ab76) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0008ab76) popup_call_poc_act_window_t

0xc77a,	// (0x00087e09) bg_popup_call_poc_inact_pane_g6

0xc782,	// (0x00087e11) bg_popup_call_poc_inact_pane_g7

0xc78a,	// (0x00087e19) bg_popup_call_poc_inact_pane_g8

0xb908,	// (0x00086f97) popup_call_poc_inact_window_g2

0xc792,	// (0x00087e21) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0008abf5) bg_popup_call_poc_inact_pane_g

0xb910,	// (0x00086f9f) popup_call_poc_inact_window_t1_ParamLimits

0xb910,	// (0x00086f9f) popup_call_poc_inact_window_t1

0xb925,	// (0x00086fb4) popup_call_poc_inact_window_t2_ParamLimits

0xb925,	// (0x00086fb4) popup_call_poc_inact_window_t2

0xb93a,	// (0x00086fc9) popup_call_poc_inact_window_t3_ParamLimits

0xb93a,	// (0x00086fc9) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0008ab7f) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0008ab7f) popup_call_poc_inact_window_t

0xc917,	// (0x00087fa6) context_pane_ParamLimits

0x534d,	// (0x000809dc) signal_pane_ParamLimits

0xaa79,	// (0x00086108) main_call2_pane

0x52c0,	// (0x0008094f) popup_phob_thumbnail2_window_ParamLimits

0x52c0,	// (0x0008094f) popup_phob_thumbnail2_window

0x49da,	// (0x00080069) aid_hotspot_pointer_arrow_pane

0x49e2,	// (0x00080071) aid_hotspot_pointer_hand_pane

0x503b,	// (0x000806ca) phob_pre_status_pane_g5

0x2d3c,	// (0x0007e3cb) cams_zoom_pane_ParamLimits

0x2d48,	// (0x0007e3d7) image_vga_pane_ParamLimits

0x2d57,	// (0x0007e3e6) main_camera_pane_g1_ParamLimits

0x2d65,	// (0x0007e3f4) main_camera_pane_g2_ParamLimits

0x2d71,	// (0x0007e400) main_camera_pane_g3_ParamLimits

0x2d7d,	// (0x0007e40c) main_camera_pane_g4_ParamLimits

0x2d89,	// (0x0007e418) main_camera_pane_g5_ParamLimits

0x2d95,	// (0x0007e424) main_camera_pane_g6_ParamLimits

0x2da1,	// (0x0007e430) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0008a87e) main_camera_pane_g_ParamLimits

0x2dad,	// (0x0007e43c) main_camera_pane_t1_ParamLimits

0x2dbf,	// (0x0007e44e) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0008a88f) main_camera_pane_t_ParamLimits

0xa7ef,	// (0x00085e7e) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7ef,	// (0x00085e7e) bg_popup_preview_window_pane_cp01

0xb94f,	// (0x00086fde) popup_phob_thumbnail2_window_g1_ParamLimits

0xb94f,	// (0x00086fde) popup_phob_thumbnail2_window_g1

0xa57d,	// (0x00085c0c) call2_cli_visual_pane

0x4d35,	// (0x000803c4) popup_call2_audio_conf_window_ParamLimits

0x4d35,	// (0x000803c4) popup_call2_audio_conf_window

0x4d4a,	// (0x000803d9) popup_call2_audio_first_window_ParamLimits

0x4d4a,	// (0x000803d9) popup_call2_audio_first_window

0x4de8,	// (0x00080477) popup_call2_audio_in_window_ParamLimits

0x4de8,	// (0x00080477) popup_call2_audio_in_window

0x4e2a,	// (0x000804b9) popup_call2_audio_out_window_ParamLimits

0x4e2a,	// (0x000804b9) popup_call2_audio_out_window

0x4e8c,	// (0x0008051b) popup_call2_audio_second_window_ParamLimits

0x4e8c,	// (0x0008051b) popup_call2_audio_second_window

0x4eea,	// (0x00080579) popup_call2_audio_wait_window_ParamLimits

0x4eea,	// (0x00080579) popup_call2_audio_wait_window

0xa57d,	// (0x00085c0c) bg_popup_call2_act_pane_cp03

0xa7d1,	// (0x00085e60) list_conf_pane_cp

0xb95b,	// (0x00086fea) popup_call2_audio_conf_window_t1

0xb1e8,	// (0x00086877) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1e8,	// (0x00086877) list_single_graphic_popup_conf2_pane

0xb1fb,	// (0x0008688a) list_highlight_pane_cp04

0xb969,	// (0x00086ff8) list_single_graphic_popup_conf2_pane_g1

0xb20c,	// (0x0008689b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0008ab86) list_single_graphic_popup_conf2_pane_g

0xb973,	// (0x00087002) list_single_graphic_popup_conf2_pane_t1

0xb981,	// (0x00087010) bg_popup_call2_act_pane_cp01_ParamLimits

0xb981,	// (0x00087010) bg_popup_call2_act_pane_cp01

0xba0b,	// (0x0008709a) call_type_pane_cp05_ParamLimits

0xba0b,	// (0x0008709a) call_type_pane_cp05

0xba5f,	// (0x000870ee) popup_call2_audio_second_window_g1_ParamLimits

0xba5f,	// (0x000870ee) popup_call2_audio_second_window_g1

0xbab3,	// (0x00087142) popup_call2_audio_second_window_g2_ParamLimits

0xbab3,	// (0x00087142) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0008ab8b) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0008ab8b) popup_call2_audio_second_window_g

0xbb18,	// (0x000871a7) popup_call2_audio_second_window_t1_ParamLimits

0xbb18,	// (0x000871a7) popup_call2_audio_second_window_t1

0xbbd3,	// (0x00087262) popup_call2_audio_second_window_t2_ParamLimits

0xbbd3,	// (0x00087262) popup_call2_audio_second_window_t2

0xbc26,	// (0x000872b5) popup_call2_audio_second_window_t3_ParamLimits

0xbc26,	// (0x000872b5) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0008ab92) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0008ab92) popup_call2_audio_second_window_t

0xa57d,	// (0x00085c0c) bg_popup_call2_in_pane_cp02

0xa587,	// (0x00085c16) call_type_pane_cp04

0xa58f,	// (0x00085c1e) popup_call2_audio_wait_window_g1

0xa597,	// (0x00085c26) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0008a76d) popup_call2_audio_wait_window_g

0xa59f,	// (0x00085c2e) popup_call2_audio_wait_window_t3

0xbd19,	// (0x000873a8) bg_popup_call2_act_pane_ParamLimits

0xbd19,	// (0x000873a8) bg_popup_call2_act_pane

0xbdd9,	// (0x00087468) call_type_pane_cp03_ParamLimits

0xbdd9,	// (0x00087468) call_type_pane_cp03

0xbe3d,	// (0x000874cc) popup_call2_audio_first_window_g1_ParamLimits

0xbe3d,	// (0x000874cc) popup_call2_audio_first_window_g1

0xbead,	// (0x0008753c) popup_call2_audio_first_window_g2_ParamLimits

0xbead,	// (0x0008753c) popup_call2_audio_first_window_g2

0xb47c,	// (0x00086b0b) popup_call2_audio_first_window_g3_ParamLimits

0xb47c,	// (0x00086b0b) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0008ab9b) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0008ab9b) popup_call2_audio_first_window_g

0xbf8b,	// (0x0008761a) popup_call2_audio_first_window_t1_ParamLimits

0xbf8b,	// (0x0008761a) popup_call2_audio_first_window_t1

0xc08e,	// (0x0008771d) popup_call2_audio_first_window_t4_ParamLimits

0xc08e,	// (0x0008771d) popup_call2_audio_first_window_t4

0xc171,	// (0x00087800) popup_call2_audio_first_window_t5_ParamLimits

0xc171,	// (0x00087800) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0008aba6) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0008aba6) popup_call2_audio_first_window_t

0xa7e7,	// (0x00085e76) bg_popup_call2_act_pane_g1

0xc7ea,	// (0x00087e79) popup_cale_lunar_info_window_t1

0xc7f8,	// (0x00087e87) popup_cale_lunar_info_window_t2

0xc806,	// (0x00087e95) popup_cale_lunar_info_window_t3

0xa57d,	// (0x00085c0c) bg_popup_call2_bubble_pane

0xc272,	// (0x00087901) bg_popup_call2_in_pane_cp01_ParamLimits

0xc272,	// (0x00087901) bg_popup_call2_in_pane_cp01

0xa259,	// (0x000858e8) call_type_pane_cp02

0xc2ba,	// (0x00087949) popup_call2_audio_out_window_g1_ParamLimits

0xc2ba,	// (0x00087949) popup_call2_audio_out_window_g1

0xc2e6,	// (0x00087975) popup_call2_audio_out_window_g2_ParamLimits

0xc2e6,	// (0x00087975) popup_call2_audio_out_window_g2

0xc30e,	// (0x0008799d) popup_call2_audio_out_window_g3_ParamLimits

0xc30e,	// (0x0008799d) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0008abaf) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0008abaf) popup_call2_audio_out_window_g

0xc349,	// (0x000879d8) popup_call2_audio_out_window_t1_ParamLimits

0xc349,	// (0x000879d8) popup_call2_audio_out_window_t1

0xc3a8,	// (0x00087a37) popup_call2_audio_out_window_t2_ParamLimits

0xc3a8,	// (0x00087a37) popup_call2_audio_out_window_t2

0xc3fc,	// (0x00087a8b) popup_call2_audio_out_window_t3_ParamLimits

0xc3fc,	// (0x00087a8b) popup_call2_audio_out_window_t3

0xc412,	// (0x00087aa1) popup_call2_audio_out_window_t4_ParamLimits

0xc412,	// (0x00087aa1) popup_call2_audio_out_window_t4

0xc428,	// (0x00087ab7) popup_call2_audio_out_window_t5_ParamLimits

0xc428,	// (0x00087ab7) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0008abb8) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0008abb8) popup_call2_audio_out_window_t

0xc48c,	// (0x00087b1b) bg_popup_call2_in_pane_ParamLimits

0xc48c,	// (0x00087b1b) bg_popup_call2_in_pane

0xc4e8,	// (0x00087b77) popup_call2_audio_in_window_g1_ParamLimits

0xc4e8,	// (0x00087b77) popup_call2_audio_in_window_g1

0xc520,	// (0x00087baf) popup_call2_audio_in_window_g2_ParamLimits

0xc520,	// (0x00087baf) popup_call2_audio_in_window_g2

0xc558,	// (0x00087be7) popup_call2_audio_in_window_g3_ParamLimits

0xc558,	// (0x00087be7) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0008abc5) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0008abc5) popup_call2_audio_in_window_g

0xc5bc,	// (0x00087c4b) popup_call2_audio_in_window_t1_ParamLimits

0xc5bc,	// (0x00087c4b) popup_call2_audio_in_window_t1

0xc63c,	// (0x00087ccb) popup_call2_audio_in_window_t2_ParamLimits

0xc63c,	// (0x00087ccb) popup_call2_audio_in_window_t2

0xc6bc,	// (0x00087d4b) popup_call2_audio_in_window_t3_ParamLimits

0xc6bc,	// (0x00087d4b) popup_call2_audio_in_window_t3

0xc6d6,	// (0x00087d65) popup_call2_audio_in_window_t4_ParamLimits

0xc6d6,	// (0x00087d65) popup_call2_audio_in_window_t4

0xc6e8,	// (0x00087d77) popup_call2_audio_in_window_t5_ParamLimits

0xc6e8,	// (0x00087d77) popup_call2_audio_in_window_t5

0xc6fd,	// (0x00087d8c) popup_call2_audio_in_window_t6_ParamLimits

0xc6fd,	// (0x00087d8c) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0008abce) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0008abce) popup_call2_audio_in_window_t

0xa7e7,	// (0x00085e76) bg_popup_call2_in_pane_g1

0xc814,	// (0x00087ea3) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0008ac36) popup_cale_lunar_info_window_t

0xa7ef,	// (0x00085e7e) bg_popup_call2_rect_pane_ParamLimits

0xa7ef,	// (0x00085e7e) bg_popup_call2_rect_pane

0xa57d,	// (0x00085c0c) call2_cli_visual_graphic_pane

0xa57d,	// (0x00085c0c) call2_cli_visual_text_pane

0x53f3,	// (0x00080a82) smil_status_volume_pane_g3

0x0002,

0xa909,	// (0x00085f98) call2_cli_visual_graphic_pane_g1

0xa909,	// (0x00085f98) call2_cli_visual_graphic_pane_g2

0xa909,	// (0x00085f98) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0008abdb) call2_cli_visual_graphic_pane_g

0xc712,	// (0x00087da1) bg_popup_call2_rect_pane_g1

0xa995,	// (0x00086024) bg_popup_call2_rect_pane_g2

0xc71a,	// (0x00087da9) bg_popup_call2_rect_pane_g3

0xc722,	// (0x00087db1) bg_popup_call2_rect_pane_g4

0xc72a,	// (0x00087db9) bg_popup_call2_rect_pane_g5

0xc732,	// (0x00087dc1) bg_popup_call2_rect_pane_g6

0xc73a,	// (0x00087dc9) bg_popup_call2_rect_pane_g7

0xc742,	// (0x00087dd1) bg_popup_call2_rect_pane_g8

0xc74a,	// (0x00087dd9) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0008abe2) bg_popup_call2_rect_pane_g

0xc752,	// (0x00087de1) bg_popup_call2_bubble_pane_g1

0xc75a,	// (0x00087de9) bg_popup_call2_bubble_pane_g2

0xc762,	// (0x00087df1) bg_popup_call2_bubble_pane_g3

0xc76a,	// (0x00087df9) bg_popup_call2_bubble_pane_g4

0xc772,	// (0x00087e01) bg_popup_call2_bubble_pane_g5

0xc77a,	// (0x00087e09) bg_popup_call2_bubble_pane_g6

0xc782,	// (0x00087e11) bg_popup_call2_bubble_pane_g7

0xc78a,	// (0x00087e19) bg_popup_call2_bubble_pane_g8

0xc792,	// (0x00087e21) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0008abf5) bg_popup_call2_bubble_pane_g

0x2853,	// (0x0007dee2) aid_cale_week_size_cell_pane

0x2dd1,	// (0x0007e460) aid_cams_cif_uncrop_pane_ParamLimits

0x2dd1,	// (0x0007e460) aid_cams_cif_uncrop_pane

0x2f2c,	// (0x0007e5bb) aid_cams_size_cell_ParamLimits

0x2f2c,	// (0x0007e5bb) aid_cams_size_cell

0x2f38,	// (0x0007e5c7) grid_cams_pane_ParamLimits

0x2f46,	// (0x0007e5d5) linegrid_cams_pane_ParamLimits

0x3035,	// (0x0007e6c4) call_video_pane_t1

0x3056,	// (0x0007e6e5) call_video_pane_t2

0x0001,

0xf253,	// (0x0008a8e2) call_video_pane_t

0x359d,	// (0x0007ec2c) aid_cale_month_size_cell_pane_ParamLimits

0x359d,	// (0x0007ec2c) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0008ac7f) smil_status_volume_pane_g

0x5400,	// (0x00080a8f) volume_smil_pane_ParamLimits

0x1fbc,	// (0x0007d64b) aid_popup2_width_pane

0x2755,	// (0x0007dde4) cell_qdial_pane_g4_ParamLimits

0x2755,	// (0x0007dde4) cell_qdial_pane_g4

0x4479,	// (0x0007fb08) aid_blid_cardinal_pane_ParamLimits

0x4489,	// (0x0007fb18) aid_blid_destination_pane_ParamLimits

0x4489,	// (0x0007fb18) aid_blid_destination_pane

0xa7ef,	// (0x00085e7e) bg_popup_call_poc_act_pane_ParamLimits

0xa7ef,	// (0x00085e7e) bg_popup_call_poc_act_pane

0xa7ef,	// (0x00085e7e) bg_popup_call_poc_inact_pane_ParamLimits

0xa7ef,	// (0x00085e7e) bg_popup_call_poc_inact_pane

0xc79a,	// (0x00087e29) bg_popup_call_poc_act_pane_g1

0xc7a2,	// (0x00087e31) bg_popup_call_poc_act_pane_g2

0xc7aa,	// (0x00087e39) bg_popup_call_poc_act_pane_g3

0xc76a,	// (0x00087df9) bg_popup_call_poc_act_pane_g4

0xc772,	// (0x00087e01) bg_popup_call_poc_act_pane_g5

0xc7b2,	// (0x00087e41) bg_popup_call_poc_act_pane_g6

0xc782,	// (0x00087e11) bg_popup_call_poc_act_pane_g7

0xc7ba,	// (0x00087e49) bg_popup_call_poc_act_pane_g8

0xa57d,	// (0x00085c0c) main_usb_pane

0x51ef,	// (0x0008087e) popup_cale_lunar_info_window

0x337f,	// (0x0007ea0e) im_reading_pane_t1_ParamLimits

0xab7a,	// (0x00086209) list_im_pane_ParamLimits

0xab8b,	// (0x0008621a) scroll_pane_cp07_ParamLimits

0xa57d,	// (0x00085c0c) grid_highlight_pane_cp012

0xa7ef,	// (0x00085e7e) mup_scale_pane_ParamLimits

0xb47c,	// (0x00086b0b) main_usb_pane_g1_ParamLimits

0xb47c,	// (0x00086b0b) main_usb_pane_g1

0x4f5e,	// (0x000805ed) main_usb_pane_g2_ParamLimits

0x4f5e,	// (0x000805ed) main_usb_pane_g2

0x0001,

0xf590,	// (0x0008ac1f) main_usb_pane_g_ParamLimits

0xf590,	// (0x0008ac1f) main_usb_pane_g

0x4f6a,	// (0x000805f9) main_usb_pane_t1_ParamLimits

0x4f6a,	// (0x000805f9) main_usb_pane_t1

0x4f7c,	// (0x0008060b) main_usb_pane_t2_ParamLimits

0x4f7c,	// (0x0008060b) main_usb_pane_t2

0x4f8e,	// (0x0008061d) main_usb_pane_t3_ParamLimits

0x4f8e,	// (0x0008061d) main_usb_pane_t3

0x4fa0,	// (0x0008062f) main_usb_pane_t4_ParamLimits

0x4fa0,	// (0x0008062f) main_usb_pane_t4

0x4fb2,	// (0x00080641) main_usb_pane_t5_ParamLimits

0x4fb2,	// (0x00080641) main_usb_pane_t5

0x4fc4,	// (0x00080653) main_usb_pane_t6_ParamLimits

0x4fc4,	// (0x00080653) main_usb_pane_t6

0x0005,

0xf595,	// (0x0008ac24) main_usb_pane_t_ParamLimits

0x441f,	// (0x0007faae) aid_text_placing

0x442b,	// (0x0007faba) main_location2_pane_t1_ParamLimits

0x443f,	// (0x0007face) main_location2_pane_t2_ParamLimits

0x4453,	// (0x0007fae2) main_location2_pane_t3_ParamLimits

0x4467,	// (0x0007faf6) main_location2_pane_t4_ParamLimits

0x4467,	// (0x0007faf6) main_location2_pane_t4

0xf3b4,	// (0x0008aa43) main_location2_pane_t_ParamLimits

0xa82b,	// (0x00085eba) find_pinb_pane_g2_ParamLimits

0xa82b,	// (0x00085eba) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0008a793) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0008a793) find_pinb_pane_g

0xa837,	// (0x00085ec6) find_pinb_pane_t1_ParamLimits

0xa849,	// (0x00085ed8) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0008a798) find_pinb_pane_t_ParamLimits

0xa57d,	// (0x00085c0c) main_call3_pane

0x3b40,	// (0x0007f1cf) cale_month_day_heading_pane_t1_ParamLimits

0x3bc6,	// (0x0007f255) cale_month_day_heading_pane_t2_ParamLimits

0x3c3f,	// (0x0007f2ce) cale_month_day_heading_pane_t3_ParamLimits

0x3cb8,	// (0x0007f347) cale_month_day_heading_pane_t4_ParamLimits

0x3d31,	// (0x0007f3c0) cale_month_day_heading_pane_t5_ParamLimits

0x3daa,	// (0x0007f439) cale_month_day_heading_pane_t6_ParamLimits

0x3e23,	// (0x0007f4b2) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0008a91a) cale_month_day_heading_pane_t_ParamLimits

0xadec,	// (0x0008647b) smil_status_volume_pane

0x4b22,	// (0x000801b1) postcard_address_pane_ParamLimits

0x4b22,	// (0x000801b1) postcard_address_pane

0x4b2e,	// (0x000801bd) postcard_message_pane_ParamLimits

0x4b2e,	// (0x000801bd) postcard_message_pane

0x4f29,	// (0x000805b8) call2_cli_visual_pane_t1_ParamLimits

0x4f29,	// (0x000805b8) call2_cli_visual_pane_t1

0x5557,	// (0x00080be6) postcard_message_pane_t1_ParamLimits

0x5557,	// (0x00080be6) postcard_message_pane_t1

0x5540,	// (0x00080bcf) postcard_address_pane_t1_ParamLimits

0x5540,	// (0x00080bcf) postcard_address_pane_t1

0x5531,	// (0x00080bc0) popup_call3_audio_in_window_ParamLimits

0x5531,	// (0x00080bc0) popup_call3_audio_in_window

0x5415,	// (0x00080aa4) bg_popup_call3_in_pane_ParamLimits

0x5415,	// (0x00080aa4) bg_popup_call3_in_pane

0x5477,	// (0x00080b06) popup_call3_audio_in_window_g1_ParamLimits

0x5477,	// (0x00080b06) popup_call3_audio_in_window_g1

0x548f,	// (0x00080b1e) popup_call3_audio_in_window_g2_ParamLimits

0x548f,	// (0x00080b1e) popup_call3_audio_in_window_g2

0x54a7,	// (0x00080b36) popup_call3_audio_in_window_g3_ParamLimits

0x54a7,	// (0x00080b36) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0008ac86) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0008ac86) popup_call3_audio_in_window_g

0x54cf,	// (0x00080b5e) popup_call3_audio_in_window_t1_ParamLimits

0x54cf,	// (0x00080b5e) popup_call3_audio_in_window_t1

0x54f7,	// (0x00080b86) popup_call3_audio_in_window_t2_ParamLimits

0x54f7,	// (0x00080b86) popup_call3_audio_in_window_t2

0x551f,	// (0x00080bae) popup_call3_audio_in_window_t3_ParamLimits

0x551f,	// (0x00080bae) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0008ac8f) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0008ac8f) popup_call3_audio_in_window_t

0xaa79,	// (0x00086108) bg_popup_call3_rect_pane

0xc712,	// (0x00087da1) bg_popup_call3_rect_pane_g1

0xa995,	// (0x00086024) bg_popup_call3_rect_pane_g2

0xc71a,	// (0x00087da9) bg_popup_call3_rect_pane_g3

0xc722,	// (0x00087db1) bg_popup_call3_rect_pane_g4

0xc72a,	// (0x00087db9) bg_popup_call3_rect_pane_g5

0xc732,	// (0x00087dc1) bg_popup_call3_rect_pane_g6

0xc73a,	// (0x00087dc9) bg_popup_call3_rect_pane_g7

0x479f,	// (0x0007fe2e) mup_visualizer_osc_pane

0xb5c4,	// (0x00086c53) mup_visualizer_spec_pane

0x5435,	// (0x00080ac4) call3_video_qcif_pane_ParamLimits

0x5435,	// (0x00080ac4) call3_video_qcif_pane

0x5447,	// (0x00080ad6) call3_video_qcif_uncrop_pane_ParamLimits

0x5447,	// (0x00080ad6) call3_video_qcif_uncrop_pane

0x5455,	// (0x00080ae4) call3_video_subqcif_pane_ParamLimits

0x5455,	// (0x00080ae4) call3_video_subqcif_pane

0x5467,	// (0x00080af6) call3_video_subqcif_uncrop_pane_ParamLimits

0x5467,	// (0x00080af6) call3_video_subqcif_uncrop_pane

0x54bf,	// (0x00080b4e) popup_call3_audio_in_window_g4_ParamLimits

0x54bf,	// (0x00080b4e) popup_call3_audio_in_window_g4

0x53e2,	// (0x00080a71) mup_spec_half_pane

0x53eb,	// (0x00080a7a) mup_spec_half_pane_cp

0xc977,	// (0x00088006) mup_osc_middle_pane

0xc980,	// (0x0008800f) mup_visualizer_osc_pane_g1

0x53c3,	// (0x00080a52) mup_spec_bar_pane_ParamLimits

0x53c3,	// (0x00080a52) mup_spec_bar_pane

0xc964,	// (0x00087ff3) mup_spec_bar_pane_g1

0xc96e,	// (0x00087ffd) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0008ac7a) mup_spec_bar_pane_g

0x2853,	// (0x0007dee2) aid_cale_week_size_cell_pane_ParamLimits

0x2868,	// (0x0007def7) bg_cale_heading_pane_ParamLimits

0xa9d2,	// (0x00086061) bg_cale_pane_cp01_ParamLimits

0x2888,	// (0x0007df17) cale_week_corner_pane_ParamLimits

0x28a2,	// (0x0007df31) cale_week_day_heading_pane_ParamLimits

0x28c2,	// (0x0007df51) cale_week_scroll_pane_g1_ParamLimits

0x28dd,	// (0x0007df6c) cale_week_scroll_pane_g2_ParamLimits

0x28f0,	// (0x0007df7f) cale_week_scroll_pane_g3_ParamLimits

0x2903,	// (0x0007df92) cale_week_scroll_pane_g4_ParamLimits

0x2916,	// (0x0007dfa5) cale_week_scroll_pane_g5_ParamLimits

0x2929,	// (0x0007dfb8) cale_week_scroll_pane_g6_ParamLimits

0x293c,	// (0x0007dfcb) cale_week_scroll_pane_g7_ParamLimits

0x2951,	// (0x0007dfe0) cale_week_scroll_pane_g8_ParamLimits

0x2966,	// (0x0007dff5) cale_week_scroll_pane_g9_ParamLimits

0x2979,	// (0x0007e008) cale_week_scroll_pane_g10_ParamLimits

0x298c,	// (0x0007e01b) cale_week_scroll_pane_g11_ParamLimits

0x299f,	// (0x0007e02e) cale_week_scroll_pane_g12_ParamLimits

0x29b6,	// (0x0007e045) cale_week_scroll_pane_g13_ParamLimits

0x29d1,	// (0x0007e060) cale_week_scroll_pane_g14_ParamLimits

0x29ec,	// (0x0007e07b) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0008a824) cale_week_scroll_pane_g_ParamLimits

0x2a1c,	// (0x0007e0ab) cale_week_time_pane_ParamLimits

0x2a31,	// (0x0007e0c0) grid_cale_week_pane_ParamLimits

0xa9ef,	// (0x0008607e) listscroll_cale_week_pane_t1

0xaa01,	// (0x00086090) scroll_pane_cp08_ParamLimits

0x3611,	// (0x0007eca0) cale_month_corner_pane_ParamLimits

0xadc2,	// (0x00086451) cale_month_pane_t1

0x3ac3,	// (0x0007f152) cale_month_week_pane_ParamLimits

0xb47c,	// (0x00086b0b) popup_call_status_window_g1_ParamLimits

0x4252,	// (0x0007f8e1) popup_call_status_window_g2_ParamLimits

0x425e,	// (0x0007f8ed) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0008a9ca) popup_call_status_window_g_ParamLimits

0xb17b,	// (0x0008680a) aid_call2_pane

0x0fb2,	// (0x0007c641) msg_header_pane_g1

0x4b22,	// (0x000801b1) postcard_address2_pane_ParamLimits

0x4b22,	// (0x000801b1) postcard_address2_pane

0x4b2e,	// (0x000801bd) postcard_message2_pane_ParamLimits

0x4b2e,	// (0x000801bd) postcard_message2_pane

0x535b,	// (0x000809ea) message2_row_pane_ParamLimits

0x535b,	// (0x000809ea) message2_row_pane

0x5376,	// (0x00080a05) address2_row_pane_ParamLimits

0x5376,	// (0x00080a05) address2_row_pane

0xc932,	// (0x00087fc1) postcard_message2_row_pane_g1

0xc93a,	// (0x00087fc9) postcard_message2_row_pane_t1

0xc932,	// (0x00087fc1) address2_row_pane_g1

0xc93a,	// (0x00087fc9) address2_row_pane_t1

0x2cb7,	// (0x0007e346) aid_size_cell_vorec

0xa57d,	// (0x00085c0c) main_rss_pane

0x5389,	// (0x00080a18) rss_list_single_pane_ParamLimits

0x5389,	// (0x00080a18) rss_list_single_pane

0xc948,	// (0x00087fd7) rss_list_single_pane_t1

0xc956,	// (0x00087fe5) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0008ac75) rss_list_single_pane_t

0xa57d,	// (0x00085c0c) main_camera2_pane

0xa57d,	// (0x00085c0c) main_video2_pane

0x55bb,	// (0x00080c4a) cams_zoom_pane_cp2_ParamLimits

0x55bb,	// (0x00080c4a) cams_zoom_pane_cp2

0x55c7,	// (0x00080c56) image2_vga_pane_ParamLimits

0x55c7,	// (0x00080c56) image2_vga_pane

0x55d6,	// (0x00080c65) main_camera2_pane_g1_ParamLimits

0x55d6,	// (0x00080c65) main_camera2_pane_g1

0x55e2,	// (0x00080c71) main_camera2_pane_g2_ParamLimits

0x55e2,	// (0x00080c71) main_camera2_pane_g2

0x55ee,	// (0x00080c7d) main_camera2_pane_g3_ParamLimits

0x55ee,	// (0x00080c7d) main_camera2_pane_g3

0x55fa,	// (0x00080c89) main_camera2_pane_g4_ParamLimits

0x55fa,	// (0x00080c89) main_camera2_pane_g4

0x5606,	// (0x00080c95) main_camera2_pane_g5_ParamLimits

0x5606,	// (0x00080c95) main_camera2_pane_g5

0x5612,	// (0x00080ca1) main_camera2_pane_g6_ParamLimits

0x5612,	// (0x00080ca1) main_camera2_pane_g6

0x561e,	// (0x00080cad) main_camera2_pane_g7_ParamLimits

0x561e,	// (0x00080cad) main_camera2_pane_g7

0x562a,	// (0x00080cb9) main_camera2_pane_g8_ParamLimits

0x562a,	// (0x00080cb9) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0008ac96) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0008ac96) main_camera2_pane_g

0x5642,	// (0x00080cd1) main_camera2_pane_t1_ParamLimits

0x5642,	// (0x00080cd1) main_camera2_pane_t1

0x5654,	// (0x00080ce3) main_camera2_pane_t2_ParamLimits

0x5654,	// (0x00080ce3) main_camera2_pane_t2

0x5666,	// (0x00080cf5) main_camera2_pane_t3_ParamLimits

0x5666,	// (0x00080cf5) main_camera2_pane_t3

0x5678,	// (0x00080d07) main_camera2_pane_t4_ParamLimits

0x5678,	// (0x00080d07) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0008aca9) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0008aca9) main_camera2_pane_t

0x56da,	// (0x00080d69) cams_zoom_pane_cp4_ParamLimits

0x56da,	// (0x00080d69) cams_zoom_pane_cp4

0x56ea,	// (0x00080d79) image2_cif_pane_ParamLimits

0x56ea,	// (0x00080d79) image2_cif_pane

0x56ff,	// (0x00080d8e) image2_subqcif_pane_ParamLimits

0x56ff,	// (0x00080d8e) image2_subqcif_pane

0x570e,	// (0x00080d9d) main_video2_pane_g1_ParamLimits

0x570e,	// (0x00080d9d) main_video2_pane_g1

0x5720,	// (0x00080daf) main_video2_pane_g2_ParamLimits

0x5720,	// (0x00080daf) main_video2_pane_g2

0x5730,	// (0x00080dbf) main_video2_pane_g3_ParamLimits

0x5730,	// (0x00080dbf) main_video2_pane_g3

0x5740,	// (0x00080dcf) main_video2_pane_g4_ParamLimits

0x5740,	// (0x00080dcf) main_video2_pane_g4

0x5750,	// (0x00080ddf) main_video2_pane_g5_ParamLimits

0x5750,	// (0x00080ddf) main_video2_pane_g5

0x5760,	// (0x00080def) main_video2_pane_g6_ParamLimits

0x5760,	// (0x00080def) main_video2_pane_g6

0x0005,

0xf629,	// (0x0008acb8) main_video2_pane_g_ParamLimits

0xf629,	// (0x0008acb8) main_video2_pane_g

0x5772,	// (0x00080e01) main_video2_pane_t1_ParamLimits

0x5772,	// (0x00080e01) main_video2_pane_t1

0x578c,	// (0x00080e1b) main_video2_pane_t2_ParamLimits

0x578c,	// (0x00080e1b) main_video2_pane_t2

0x57b2,	// (0x00080e41) main_video2_pane_t3_ParamLimits

0x57b2,	// (0x00080e41) main_video2_pane_t3

0x0002,

0xf636,	// (0x0008acc5) main_video2_pane_t_ParamLimits

0xf636,	// (0x0008acc5) main_video2_pane_t

0x507b,	// (0x0008070a) call_muted_g2

0x0001,

0xf5d8,	// (0x0008ac67) call_muted_g

0xa57d,	// (0x00085c0c) main_mup2_pane

0xc9b7,	// (0x00088046) main_mup2_pane_g1_ParamLimits

0xc9b7,	// (0x00088046) main_mup2_pane_g1

0x57d8,	// (0x00080e67) main_mup2_pane_g2_ParamLimits

0x57d8,	// (0x00080e67) main_mup2_pane_g2

0x5a5a,	// (0x000810e9) main_mup_pane_g13_cp1

0x5a62,	// (0x000810f1) mup_volume_pane_cp1

0x57f8,	// (0x00080e87) main_mup2_pane_g4_ParamLimits

0x57f8,	// (0x00080e87) main_mup2_pane_g4

0x580d,	// (0x00080e9c) main_mup2_pane_g5_ParamLimits

0x580d,	// (0x00080e9c) main_mup2_pane_g5

0x5822,	// (0x00080eb1) main_mup2_pane_g6_ParamLimits

0x5822,	// (0x00080eb1) main_mup2_pane_g6

0x5837,	// (0x00080ec6) main_mup2_pane_g7_ParamLimits

0x5837,	// (0x00080ec6) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0008accc) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0008accc) main_mup2_pane_g

0x5853,	// (0x00080ee2) main_mup2_pane_t1_ParamLimits

0x5853,	// (0x00080ee2) main_mup2_pane_t1

0x586a,	// (0x00080ef9) main_mup2_pane_t2_ParamLimits

0x586a,	// (0x00080ef9) main_mup2_pane_t2

0x5881,	// (0x00080f10) main_mup2_pane_t3_ParamLimits

0x5881,	// (0x00080f10) main_mup2_pane_t3

0x5898,	// (0x00080f27) main_mup2_pane_t4_ParamLimits

0x5898,	// (0x00080f27) main_mup2_pane_t4

0x58b2,	// (0x00080f41) main_mup2_pane_t5_ParamLimits

0x58b2,	// (0x00080f41) main_mup2_pane_t5

0x58cc,	// (0x00080f5b) main_mup2_pane_t6_ParamLimits

0x58cc,	// (0x00080f5b) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0008acdb) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0008acdb) main_mup2_pane_t

0x5904,	// (0x00080f93) mup2_visualizer_pane_ParamLimits

0x5904,	// (0x00080f93) mup2_visualizer_pane

0x593a,	// (0x00080fc9) mup_progress_pane_cp_ParamLimits

0x593a,	// (0x00080fc9) mup_progress_pane_cp

0x5a45,	// (0x000810d4) mup_volume_pane_cp_ParamLimits

0x5a45,	// (0x000810d4) mup_volume_pane_cp

0x5951,	// (0x00080fe0) mup2_visualizer_pane_g1_ParamLimits

0x5951,	// (0x00080fe0) mup2_visualizer_pane_g1

0xc9c3,	// (0x00088052) mup2_visualizer_pane_g2_ParamLimits

0xc9c3,	// (0x00088052) mup2_visualizer_pane_g2

0x5966,	// (0x00080ff5) mup2_visualizer_pane_g3_ParamLimits

0x5966,	// (0x00080ff5) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0008ace8) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0008ace8) mup2_visualizer_pane_g

0xb7eb,	// (0x00086e7a) aid_size_cell_fmradio

0x5191,	// (0x00080820) aid_height_parent_landcape

0xac09,	// (0x00086298) wml_content_pane_cp

0xac11,	// (0x000862a0) wml_tabs_pane

0xac1a,	// (0x000862a9) popup_wml_miniature_window

0xac22,	// (0x000862b1) scroll_pane_cp021

0xac36,	// (0x000862c5) wml_content_pane_comp8

0xa57d,	// (0x00085c0c) bg_popup_sub_pane_cp05

0xc9e1,	// (0x00088070) popup_wml_miniature_window_g1

0xc9e9,	// (0x00088078) wml_miniature_view_pane

0x5974,	// (0x00081003) aid_size_wml_view

0x597c,	// (0x0008100b) wml_miniature_view_pane_g1

0x5985,	// (0x00081014) wml_miniature_view_pane_g2

0x598e,	// (0x0008101d) wml_miniature_view_pane_g3

0x5996,	// (0x00081025) wml_miniature_view_pane_g4

0x599e,	// (0x0008102d) wml_miniature_view_pane_g5

0x59a6,	// (0x00081035) wml_miniature_view_pane_g6

0x59ae,	// (0x0008103d) wml_miniature_view_pane_g7

0x59b6,	// (0x00081045) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0008acef) wml_miniature_view_pane_g

0xc9b7,	// (0x00088046) background_graphic_ParamLimits

0xc9b7,	// (0x00088046) background_graphic

0xc9f1,	// (0x00088080) wml_tabs_2_pane

0xc9fa,	// (0x00088089) wml_tabs_3_pane_ParamLimits

0xc9fa,	// (0x00088089) wml_tabs_3_pane

0xca0c,	// (0x0008809b) wml_tabs_4_pane_ParamLimits

0xca0c,	// (0x0008809b) wml_tabs_4_pane

0xca22,	// (0x000880b1) wml_tabs_5_pane_ParamLimits

0xca22,	// (0x000880b1) wml_tabs_5_pane

0xca3c,	// (0x000880cb) wml_tabs_pane_g2_ParamLimits

0xca3c,	// (0x000880cb) wml_tabs_pane_g2

0xca50,	// (0x000880df) wml_tabs_pane_g3_ParamLimits

0xca50,	// (0x000880df) wml_tabs_pane_g3

0x59be,	// (0x0008104d) wml_tabs_2_active_pane_ParamLimits

0x59be,	// (0x0008104d) wml_tabs_2_active_pane

0x59ce,	// (0x0008105d) wml_tabs_2_passive_pane_ParamLimits

0x59ce,	// (0x0008105d) wml_tabs_2_passive_pane

0x59de,	// (0x0008106d) wml_tabs_3_active_pane_cp_ParamLimits

0x59de,	// (0x0008106d) wml_tabs_3_active_pane_cp

0x59ef,	// (0x0008107e) wml_tabs_3_passive_pane_ParamLimits

0x59ef,	// (0x0008107e) wml_tabs_3_passive_pane

0x5a00,	// (0x0008108f) wml_tabs_3_passive_pane_cp_ParamLimits

0x5a00,	// (0x0008108f) wml_tabs_3_passive_pane_cp

0x5a11,	// (0x000810a0) tabs_4_active_pane

0x5a19,	// (0x000810a8) tabs_4_passive_pane

0x5a21,	// (0x000810b0) tabs_4_passive_pane_cp

0x5a29,	// (0x000810b8) tabs_4_passive_pane_cp2

0x4f56,	// (0x000805e5) aid_height_text

0x476c,	// (0x0007fdfb) mup_volume_cont_pane_ParamLimits

0x476c,	// (0x0007fdfb) mup_volume_cont_pane

0x238b,	// (0x0007da1a) aid_size_cell_pinb

0x2395,	// (0x0007da24) aid_size_list_pinb

0x5923,	// (0x00080fb2) mup2_volume_cont_pane_ParamLimits

0x5923,	// (0x00080fb2) mup2_volume_cont_pane

0x5a31,	// (0x000810c0) mup2_volume_cont_pane_g1_ParamLimits

0x5a31,	// (0x000810c0) mup2_volume_cont_pane_g1

0x1fc8,	// (0x0007d657) aid_size_cell_touch_ParamLimits

0x1fc8,	// (0x0007d657) aid_size_cell_touch

0x2271,	// (0x0007d900) touch_pane_ParamLimits

0x2271,	// (0x0007d900) touch_pane

0xa160,	// (0x000857ef) main_rss2_pane

0xca6d,	// (0x000880fc) listscroll_rss2_pane

0xca76,	// (0x00088105) rss2_navigation_pane

0xca7e,	// (0x0008810d) list_rss2_pane

0xb2be,	// (0x0008694d) scroll_pane_cp22

0xca86,	// (0x00088115) rss2_navigation_pane_g1

0xca8f,	// (0x0008811e) rss2_navigation_pane_g2

0xca97,	// (0x00088126) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0008ad00) rss2_navigation_pane_g

0xca9f,	// (0x0008812e) rss2_navigation_pane_t1

0x5a6a,	// (0x000810f9) rss2_list_single_pane_ParamLimits

0x5a6a,	// (0x000810f9) rss2_list_single_pane

0xcaad,	// (0x0008813c) rss2_list_single_pane_t2

0xcabb,	// (0x0008814a) rss2_list_single_pane_t3_ParamLimits

0xcabb,	// (0x0008814a) rss2_list_single_pane_t3

0xcad8,	// (0x00088167) rss2_list_single_pane_t4

0x40bf,	// (0x0007f74e) smil_status_pane_g1

0xacca,	// (0x00086359) main_image2_pane_ParamLimits

0xacca,	// (0x00086359) main_image2_pane

0x5636,	// (0x00080cc5) main_camera2_pane_g9_ParamLimits

0x5636,	// (0x00080cc5) main_camera2_pane_g9

0x568a,	// (0x00080d19) main_camera2_pane_t5_ParamLimits

0x568a,	// (0x00080d19) main_camera2_pane_t5

0x569c,	// (0x00080d2b) main_camera2_pane_t6_ParamLimits

0x569c,	// (0x00080d2b) main_camera2_pane_t6

0x5a9b,	// (0x0008112a) main_image2_pane_g1_ParamLimits

0x5a9b,	// (0x0008112a) main_image2_pane_g1

0x4cf6,	// (0x00080385) smil2_video_pane_ParamLimits

0x4cf6,	// (0x00080385) smil2_video_pane

0x1ffc,	// (0x0007d68b) aid_zoom_text_primary_cp

0x221a,	// (0x0007d8a9) popup_preview_fixed_window

0xab72,	// (0x00086201) im_reading_pane_g1

0x5580,	// (0x00080c0f) cams2_bc_adjust_pane_cp_ParamLimits

0x5580,	// (0x00080c0f) cams2_bc_adjust_pane_cp

0x56cc,	// (0x00080d5b) cams2_bc_adjust_pane_ParamLimits

0x56cc,	// (0x00080d5b) cams2_bc_adjust_pane

0x5aa7,	// (0x00081136) cams2_bc_adjust_pane_g1

0x5aaf,	// (0x0008113e) cams2_slider_pane

0x5ab8,	// (0x00081147) cams2_slider_pane_g1

0x5ac1,	// (0x00081150) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0008ad07) cams2_slider_pane_g

0x249b,	// (0x0007db2a) calc_display_pane_ParamLimits

0x24b9,	// (0x0007db48) calc_paper_pane_ParamLimits

0x24d5,	// (0x0007db64) grid_calc_pane_ParamLimits

0x42c0,	// (0x0007f94f) popup_clock_digital_window_t1_ParamLimits

0xb788,	// (0x00086e17) main_image_pane_t1

0x2481,	// (0x0007db10) aid_size_cell_calc_ParamLimits

0x2481,	// (0x0007db10) aid_size_cell_calc

0x51cb,	// (0x0008085a) popup_blid_sat_info2_window_ParamLimits

0x51cb,	// (0x0008085a) popup_blid_sat_info2_window

0xcaee,	// (0x0008817d) aid_size_cell_blid

0xcaf6,	// (0x00088185) bg_popup_window_pane_cp07

0xcb19,	// (0x000881a8) grid_popup_blid_pane

0xcb23,	// (0x000881b2) heading_pane_cp05_ParamLimits

0xcb23,	// (0x000881b2) heading_pane_cp05

0xcbed,	// (0x0008827c) cell_popup_blid_pane_ParamLimits

0xcbed,	// (0x0008827c) cell_popup_blid_pane

0xcc11,	// (0x000882a0) cell_popup_blid_pane_g1

0xcc19,	// (0x000882a8) cell_popup_blid_pane_t1

0x58e9,	// (0x00080f78) mup2_indicator_pane_ParamLimits

0x58e9,	// (0x00080f78) mup2_indicator_pane

0xaa79,	// (0x00086108) mup2_visualizer_osc_pane

0xc9cf,	// (0x0008805e) mup2_visualizer_spec_pane_ParamLimits

0xc9cf,	// (0x0008805e) mup2_visualizer_spec_pane

0x5adb,	// (0x0008116a) mup2_spec_half_pane

0x5ae4,	// (0x00081173) mup2_spec_half_pane_cp

0x5aee,	// (0x0008117d) mup2_spec_bar_pane_ParamLimits

0x5aee,	// (0x0008117d) mup2_spec_bar_pane

0xc964,	// (0x00087ff3) mup2_spec_bar_pane_g1

0xc96e,	// (0x00087ffd) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0008ac7a) mup2_spec_bar_pane_g

0x5b0d,	// (0x0008119c) mup2_osc_middle_pane

0xc980,	// (0x0008800f) mup2_visualizer_osc_pane_g1

0xa18a,	// (0x00085819) popup_number_entry_window_t1_ParamLimits

0xa19d,	// (0x0008582c) popup_number_entry_window_t2_ParamLimits

0xa1af,	// (0x0008583e) popup_number_entry_window_t3_ParamLimits

0x22c8,	// (0x0007d957) popup_number_entry_window_t5_ParamLimits

0x22c8,	// (0x0007d957) popup_number_entry_window_t5

0xf0af,	// (0x0008a73e) popup_number_entry_window_t_ParamLimits

0xa1c1,	// (0x00085850) text_title_cp2_ParamLimits

0x49ea,	// (0x00080079) aid_hotspot_pointer_text2_pane

0x4a84,	// (0x00080113) main_viewer_pane_g9_ParamLimits

0x4a84,	// (0x00080113) main_viewer_pane_g9

0xadc2,	// (0x00086451) cale_month_pane_t1_ParamLimits

0xadff,	// (0x0008648e) bg_cale_pane_ParamLimits

0xae17,	// (0x000864a6) list_cale_pane_ParamLimits

0xae28,	// (0x000864b7) listscroll_cale_day_pane_t1

0xae3a,	// (0x000864c9) scroll_pane_cp09_ParamLimits

0x47a7,	// (0x0007fe36) main_mup_eq_pane_t1_ParamLimits

0x47a7,	// (0x0007fe36) main_mup_eq_pane_t1

0x47c1,	// (0x0007fe50) main_mup_eq_pane_t2_ParamLimits

0x47c1,	// (0x0007fe50) main_mup_eq_pane_t2

0x47db,	// (0x0007fe6a) main_mup_eq_pane_t3_ParamLimits

0x47db,	// (0x0007fe6a) main_mup_eq_pane_t3

0x47f3,	// (0x0007fe82) main_mup_eq_pane_t4_ParamLimits

0x47f3,	// (0x0007fe82) main_mup_eq_pane_t4

0x480b,	// (0x0007fe9a) main_mup_eq_pane_t5_ParamLimits

0x480b,	// (0x0007fe9a) main_mup_eq_pane_t5

0x4823,	// (0x0007feb2) main_mup_eq_pane_t6_ParamLimits

0x4823,	// (0x0007feb2) main_mup_eq_pane_t6

0x4837,	// (0x0007fec6) main_mup_eq_pane_t7_ParamLimits

0x4837,	// (0x0007fec6) main_mup_eq_pane_t7

0x484b,	// (0x0007feda) main_mup_eq_pane_t8_ParamLimits

0x484b,	// (0x0007feda) main_mup_eq_pane_t8

0x4861,	// (0x0007fef0) main_mup_eq_pane_t9_ParamLimits

0x4861,	// (0x0007fef0) main_mup_eq_pane_t9

0x4879,	// (0x0007ff08) main_mup_eq_pane_t10_ParamLimits

0x4879,	// (0x0007ff08) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0008aac9) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0008aac9) main_mup_eq_pane_t

0x4936,	// (0x0007ffc5) mup_equalizer_pane_cp5_ParamLimits

0x494c,	// (0x0007ffdb) mup_equalizer_pane_cp6_ParamLimits

0x4964,	// (0x0007fff3) mup_equalizer_pane_cp7_ParamLimits

0xa160,	// (0x000857ef) main_gallery_pane

0xc989,	// (0x00088018) smil2_volume_pane

0xc991,	// (0x00088020) smil_status_volume_pane_g1_ParamLimits

0xc9a4,	// (0x00088033) smil_status_volume_pane_g2_ParamLimits

0x53f3,	// (0x00080a82) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0008ac7f) smil_status_volume_pane_g_ParamLimits

0xcaf6,	// (0x00088185) bg_popup_window_pane_cp07_ParamLimits

0xcb04,	// (0x00088193) blid_firmament_pane

0x5b16,	// (0x000811a5) aid_size_cell_gallery_ParamLimits

0x5b16,	// (0x000811a5) aid_size_cell_gallery

0x5b24,	// (0x000811b3) grid_gallery_pane_ParamLimits

0x5b24,	// (0x000811b3) grid_gallery_pane

0x5b34,	// (0x000811c3) cell_gallery_pane_ParamLimits

0x5b34,	// (0x000811c3) cell_gallery_pane

0xcc27,	// (0x000882b6) bg_cell_gallery_focus_pane_ParamLimits

0xcc27,	// (0x000882b6) bg_cell_gallery_focus_pane

0xcc39,	// (0x000882c8) cell_gallery_pane_g1_ParamLimits

0xcc39,	// (0x000882c8) cell_gallery_pane_g1

0x5b82,	// (0x00081211) cell_gallery_pane_g2_ParamLimits

0x5b82,	// (0x00081211) cell_gallery_pane_g2

0x5b8f,	// (0x0008121e) cell_gallery_pane_g3_ParamLimits

0x5b8f,	// (0x0008121e) cell_gallery_pane_g3

0xcc45,	// (0x000882d4) cell_gallery_pane_g4_ParamLimits

0xcc45,	// (0x000882d4) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0008ad2d) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0008ad2d) cell_gallery_pane_g

0xcc51,	// (0x000882e0) bg_cell_gallery_focus_pane_g1

0xcc59,	// (0x000882e8) bg_cell_gallery_focus_pane_g2

0xcc61,	// (0x000882f0) bg_cell_gallery_focus_pane_g3

0xcc69,	// (0x000882f8) bg_cell_gallery_focus_pane_g4

0xcc71,	// (0x00088300) bg_cell_gallery_focus_pane_g5

0xcc79,	// (0x00088308) bg_cell_gallery_focus_pane_g6

0xcc81,	// (0x00088310) bg_cell_gallery_focus_pane_g7

0xcc89,	// (0x00088318) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0008ad36) bg_cell_gallery_focus_pane_g

0xcc91,	// (0x00088320) aid_firma_cardinal

0xcca5,	// (0x00088334) blid_firmament_pane_t1

0xccbc,	// (0x0008834b) blid_firmament_pane_t2

0xccd3,	// (0x00088362) blid_firmament_pane_t3

0xccea,	// (0x00088379) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0008ad47) blid_firmament_pane_t

0xcd01,	// (0x00088390) blid_sat_info_pane

0xcd11,	// (0x000883a0) blid_sat_info_pane_g1

0xcd11,	// (0x000883a0) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0008ad50) blid_sat_info_pane_g

0xcd1b,	// (0x000883aa) blid_sat_info_pane_t1

0xcd29,	// (0x000883b8) smil2_volume_content_pane

0xcd32,	// (0x000883c1) smil2_volume_pane_g1

0xacd8,	// (0x00086367) smil2_volume_content_pane_g1

0xcd3a,	// (0x000883c9) smil2_volume_content_pane_g2

0xcd43,	// (0x000883d2) smil2_volume_content_pane_g3

0xcd4c,	// (0x000883db) smil2_volume_content_pane_g4

0xcd55,	// (0x000883e4) smil2_volume_content_pane_g5

0xcd5e,	// (0x000883ed) smil2_volume_content_pane_g6

0xcd67,	// (0x000883f6) smil2_volume_content_pane_g7

0xcd70,	// (0x000883ff) smil2_volume_content_pane_g8

0xcd79,	// (0x00088408) smil2_volume_content_pane_g9

0xcd82,	// (0x00088411) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0008ad55) smil2_volume_content_pane_g

0x2ab2,	// (0x0007e141) cale_week_day_heading_pane_t1_ParamLimits

0x2acd,	// (0x0007e15c) cale_week_day_heading_pane_t2_ParamLimits

0x2ae8,	// (0x0007e177) cale_week_day_heading_pane_t3_ParamLimits

0x2b03,	// (0x0007e192) cale_week_day_heading_pane_t4_ParamLimits

0x2b1e,	// (0x0007e1ad) cale_week_day_heading_pane_t5_ParamLimits

0x2b39,	// (0x0007e1c8) cale_week_day_heading_pane_t6_ParamLimits

0x2b54,	// (0x0007e1e3) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0008a845) cale_week_day_heading_pane_t_ParamLimits

0xaa1e,	// (0x000860ad) bg_cale_side_pane_ParamLimits

0x2b6f,	// (0x0007e1fe) cale_week_time_pane_t1_ParamLimits

0x2b89,	// (0x0007e218) cale_week_time_pane_t2_ParamLimits

0x2ba3,	// (0x0007e232) cale_week_time_pane_t3_ParamLimits

0x2bbd,	// (0x0007e24c) cale_week_time_pane_t4_ParamLimits

0x2bd7,	// (0x0007e266) cale_week_time_pane_t5_ParamLimits

0x2bf1,	// (0x0007e280) cale_week_time_pane_t6_ParamLimits

0x2c0f,	// (0x0007e29e) cale_week_time_pane_t7_ParamLimits

0x2c31,	// (0x0007e2c0) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0008a854) cale_week_time_pane_t_ParamLimits

0x2c55,	// (0x0007e2e4) cell_cale_week_pane_g2_ParamLimits

0xaa1e,	// (0x000860ad) bg_cale_side_pane_cp01_ParamLimits

0x3eb4,	// (0x0007f543) cale_month_week_pane_t1_ParamLimits

0x3ecd,	// (0x0007f55c) cale_month_week_pane_t2_ParamLimits

0x3ee6,	// (0x0007f575) cale_month_week_pane_t3_ParamLimits

0x3eff,	// (0x0007f58e) cale_month_week_pane_t4_ParamLimits

0x3f18,	// (0x0007f5a7) cale_month_week_pane_t5_ParamLimits

0x3f39,	// (0x0007f5c8) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0008a929) cale_month_week_pane_t_ParamLimits

0x407c,	// (0x0007f70b) cell_cale_month_pane_g1_ParamLimits

0xa160,	// (0x000857ef) main_cale_event_viewer_pane

0xa160,	// (0x000857ef) listscroll_cale_event_viewer_pane

0xcd8b,	// (0x0008841a) list_cale_ev_pane

0xcd93,	// (0x00088422) scroll_pane_cp023

0xcd9f,	// (0x0008842e) field_cale_ev_pane_ParamLimits

0xcd9f,	// (0x0008842e) field_cale_ev_pane

0xcdbd,	// (0x0008844c) field_cale_ev_content_pane_ParamLimits

0xcdbd,	// (0x0008844c) field_cale_ev_content_pane

0xcdc9,	// (0x00088458) field_cale_ev_pane_g1_ParamLimits

0xcdc9,	// (0x00088458) field_cale_ev_pane_g1

0xcdd5,	// (0x00088464) field_cale_ev_pane_g2_ParamLimits

0xcdd5,	// (0x00088464) field_cale_ev_pane_g2

0xcded,	// (0x0008847c) field_cale_ev_pane_g3_ParamLimits

0xcded,	// (0x0008847c) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0008ad6a) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0008ad6a) field_cale_ev_pane_g

0xce05,	// (0x00088494) field_cale_ev_pane_t1_ParamLimits

0xce05,	// (0x00088494) field_cale_ev_pane_t1

0xce1c,	// (0x000884ab) field_cale_ev_content_pane_t1_ParamLimits

0xce1c,	// (0x000884ab) field_cale_ev_content_pane_t1

0xb66e,	// (0x00086cfd) bg_button_pane_cp01

0x2843,	// (0x0007ded2) listscroll_cale_week_pane_ParamLimits

0xa9c9,	// (0x00086058) popup_toolbar_window_cp01

0xa9ef,	// (0x0008607e) listscroll_cale_week_pane_t1_ParamLimits

0x2843,	// (0x0007ded2) listscroll_cale_day_pane_ParamLimits

0xa9c9,	// (0x00086058) popup_toolbar_window_cp02

0xae28,	// (0x000864b7) listscroll_cale_day_pane_t1_ParamLimits

0x2843,	// (0x0007ded2) main_cale_month_pane_ParamLimits

0x52d2,	// (0x00080961) popup_toolbar_window_cp03_ParamLimits

0x52d2,	// (0x00080961) popup_toolbar_window_cp03

0x4c0c,	// (0x0008029b) main_image_pane_g2_ParamLimits

0x4c0c,	// (0x0008029b) main_image_pane_g2

0x4c18,	// (0x000802a7) main_image_pane_g3_ParamLimits

0x4c18,	// (0x000802a7) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0008ab5b) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0008ab5b) main_image_pane_g

0xb788,	// (0x00086e17) main_image_pane_t1_ParamLimits

0x4c24,	// (0x000802b3) main_image_pane_t2_ParamLimits

0x4c24,	// (0x000802b3) main_image_pane_t2

0x4c36,	// (0x000802c5) main_image_pane_t3_ParamLimits

0x4c36,	// (0x000802c5) main_image_pane_t3

0x4c48,	// (0x000802d7) main_image_pane_t4_ParamLimits

0x4c48,	// (0x000802d7) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0008ab62) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0008ab62) main_image_pane_t

0x4c5a,	// (0x000802e9) popup_image_details_window_cp01

0x4c64,	// (0x000802f3) popup_toobar_trans_pane_cp01_ParamLimits

0x4c64,	// (0x000802f3) popup_toobar_trans_pane_cp01

0x5222,	// (0x000808b1) popup_image_details_window_ParamLimits

0x5222,	// (0x000808b1) popup_image_details_window

0x5230,	// (0x000808bf) popup_image_focus_window

0x5572,	// (0x00080c01) camera2_autofocus_pane_ParamLimits

0x5572,	// (0x00080c01) camera2_autofocus_pane

0xa160,	// (0x000857ef) bg_popup_sub_pane_cp06

0xce3a,	// (0x000884c9) popup_image_focus_window_g1

0xce42,	// (0x000884d1) popup_image_focus_window_g2

0xce4a,	// (0x000884d9) popup_image_focus_window_g3

0xce52,	// (0x000884e1) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0008ad71) popup_image_focus_window_g

0xce5a,	// (0x000884e9) popup_image_focus_window_t1

0xce68,	// (0x000884f7) popup_image_focus_window_t2

0xce78,	// (0x00088507) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0008ad7a) popup_image_focus_window_t

0xce86,	// (0x00088515) camera2_autofocus_pane_g1

0xacca,	// (0x00086359) bg_tb_trans_pane_cp01

0xce94,	// (0x00088523) popup_image_details_window_g1

0xcea7,	// (0x00088536) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0008ad8c) popup_image_details_window_g

0xced0,	// (0x0008855f) popup_image_details_window_t1

0xcee2,	// (0x00088571) popup_image_details_window_t2

0xcefb,	// (0x0008858a) popup_image_details_window_t3

0xcf0f,	// (0x0008859e) popup_image_details_window_t4

0xcf2a,	// (0x000885b9) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0008ad93) popup_image_details_window_t

0xa8a0,	// (0x00085f2f) bg_calc_paper_pane_ParamLimits

0xa160,	// (0x000857ef) grid_highlight_pane_cp013

0x25d2,	// (0x0007dc61) list_calc_pane_ParamLimits

0x25e4,	// (0x0007dc73) scroll_pane_cp024

0xa8b4,	// (0x00085f43) bg_calc_display_pane_ParamLimits

0x25ec,	// (0x0007dc7b) calc_display_pane_t1_ParamLimits

0x2601,	// (0x0007dc90) calc_display_pane_t2_ParamLimits

0x2616,	// (0x0007dca5) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0008a7c5) calc_display_pane_t_ParamLimits

0x26ef,	// (0x0007dd7e) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0008a7e2) cell_calc_pane_g

0x26f8,	// (0x0007dd87) cell_calc_pane_t1

0xa913,	// (0x00085fa2) grid_highlight_pane_cp02_ParamLimits

0xa929,	// (0x00085fb8) toolbar_button_pane_cp01_ParamLimits

0xa929,	// (0x00085fb8) toolbar_button_pane_cp01

0xb7cd,	// (0x00086e5c) temp_image_control_pane_ParamLimits

0xb7cd,	// (0x00086e5c) temp_image_control_pane

0xacca,	// (0x00086359) main_mp3_pane

0xcf44,	// (0x000885d3) temp_image_control_pane_g1_ParamLimits

0xcf44,	// (0x000885d3) temp_image_control_pane_g1

0xcf52,	// (0x000885e1) temp_image_control_pane_g2_ParamLimits

0xcf52,	// (0x000885e1) temp_image_control_pane_g2

0xcf64,	// (0x000885f3) temp_image_control_pane_g3_ParamLimits

0xcf64,	// (0x000885f3) temp_image_control_pane_g3

0x5bcc,	// (0x0008125b) temp_image_control_pane_g4_ParamLimits

0x5bcc,	// (0x0008125b) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0008ad9e) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0008ad9e) temp_image_control_pane_g

0xcf44,	// (0x000885d3) main_mp3_pane_g1

0x5bdd,	// (0x0008126c) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0008ada7) main_mp3_pane_g

0xcfa7,	// (0x00088636) main_mp3_pane_t1

0xaa81,	// (0x00086110) main_camera_pane_g8_ParamLimits

0xaa81,	// (0x00086110) main_camera_pane_g8

0x2ee2,	// (0x0007e571) main_video_pane_g7_ParamLimits

0x2ee2,	// (0x0007e571) main_video_pane_g7

0x56ba,	// (0x00080d49) main_camera2_pane_t7_ParamLimits

0x56ba,	// (0x00080d49) main_camera2_pane_t7

0xabc9,	// (0x00086258) scroll_pane_cp025_ParamLimits

0xabc9,	// (0x00086258) scroll_pane_cp025

0xabdd,	// (0x0008626c) scroll_pane_cp026_ParamLimits

0xabdd,	// (0x0008626c) scroll_pane_cp026

0xabec,	// (0x0008627b) wml_content_pane_ParamLimits

0xa160,	// (0x000857ef) main_touch_calib_pane

0x5c81,	// (0x00081310) main_touch_calib_pane_g1

0x5c8d,	// (0x0008131c) main_touch_calib_pane_g2

0x5c99,	// (0x00081328) main_touch_calib_pane_g3

0x5ca5,	// (0x00081334) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0008adc5) main_touch_calib_pane_g

0x5cb1,	// (0x00081340) main_touch_calib_pane_t1

0x5cca,	// (0x00081359) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0008adce) main_touch_calib_pane_t

0xb39a,	// (0x00086a29) mup_progress_pane_cp02

0xb3cf,	// (0x00086a5e) navi_pane_g1

0xb498,	// (0x00086b27) navi_pane_mp_t3

0xacca,	// (0x00086359) main_mp3_pane_ParamLimits

0x530f,	// (0x0008099e) navi_pane_ParamLimits

0xcf44,	// (0x000885d3) main_mp3_pane_g1_ParamLimits

0x5bdd,	// (0x0008126c) main_mp3_pane_g2_ParamLimits

0x5be9,	// (0x00081278) main_mp3_pane_g3_ParamLimits

0x5be9,	// (0x00081278) main_mp3_pane_g3

0x5bf5,	// (0x00081284) main_mp3_pane_g4_ParamLimits

0x5bf5,	// (0x00081284) main_mp3_pane_g4

0xcf74,	// (0x00088603) main_mp3_pane_g5_ParamLimits

0xcf74,	// (0x00088603) main_mp3_pane_g5

0xcf82,	// (0x00088611) main_mp3_pane_g6_ParamLimits

0xcf82,	// (0x00088611) main_mp3_pane_g6

0xcf8f,	// (0x0008861e) main_mp3_pane_g7_ParamLimits

0xcf8f,	// (0x0008861e) main_mp3_pane_g7

0xcf9b,	// (0x0008862a) main_mp3_pane_g8_ParamLimits

0xcf9b,	// (0x0008862a) main_mp3_pane_g8

0xf718,	// (0x0008ada7) main_mp3_pane_g_ParamLimits

0x5c01,	// (0x00081290) main_mp3_pane_t2

0x5c11,	// (0x000812a0) main_mp3_pane_t3

0xcfb5,	// (0x00088644) main_mp3_pane_t4

0xcfc3,	// (0x00088652) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0008adb8) main_mp3_pane_t

0xcfd1,	// (0x00088660) mup_progress_pane_cp01

0x1ffc,	// (0x0007d68b) aid_zoom_text_secondary2

0xcd8b,	// (0x0008841a) list_cale_ev2_pane

0xcd93,	// (0x00088422) scroll_pane_cp023_ParamLimits

0x5d25,	// (0x000813b4) field_cale_ev2_pane_ParamLimits

0x5d25,	// (0x000813b4) field_cale_ev2_pane

0x5d4e,	// (0x000813dd) field_cale_ev2_pane_g1_ParamLimits

0x5d4e,	// (0x000813dd) field_cale_ev2_pane_g1

0x5d5a,	// (0x000813e9) field_cale_ev2_pane_g2_ParamLimits

0x5d5a,	// (0x000813e9) field_cale_ev2_pane_g2

0x5d72,	// (0x00081401) field_cale_ev2_pane_g3_ParamLimits

0x5d72,	// (0x00081401) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0008add9) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0008add9) field_cale_ev2_pane_g

0x1037,	// (0x0007c6c6) field_cale_ev2_pane_t1_ParamLimits

0x1037,	// (0x0007c6c6) field_cale_ev2_pane_t1

0x104e,	// (0x0007c6dd) field_cale_ev2_pane_t2_ParamLimits

0x104e,	// (0x0007c6dd) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0008ade2) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0008ade2) field_cale_ev2_pane_t

0x4aec,	// (0x0008017b) main_postcard_pane_g5_ParamLimits

0x4aec,	// (0x0008017b) main_postcard_pane_g5

0x4afa,	// (0x00080189) main_postcard_pane_g6_ParamLimits

0x4afa,	// (0x00080189) main_postcard_pane_g6

0x2d2c,	// (0x0007e3bb) camera2_autofocus_pane_cp_ParamLimits

0x2d2c,	// (0x0007e3bb) camera2_autofocus_pane_cp

0xacca,	// (0x00086359) main_mup3_pane

0x5db5,	// (0x00081444) main_mup3_pane_g1_ParamLimits

0x5db5,	// (0x00081444) main_mup3_pane_g1

0x5dd6,	// (0x00081465) main_mup3_pane_g2_ParamLimits

0x5dd6,	// (0x00081465) main_mup3_pane_g2

0x5e4e,	// (0x000814dd) main_mup3_pane_g3_ParamLimits

0x5e4e,	// (0x000814dd) main_mup3_pane_g3

0x5e91,	// (0x00081520) main_mup3_pane_g4_ParamLimits

0x5e91,	// (0x00081520) main_mup3_pane_g4

0x5ed4,	// (0x00081563) main_mup3_pane_g5_ParamLimits

0x5ed4,	// (0x00081563) main_mup3_pane_g5

0x5f17,	// (0x000815a6) main_mup3_pane_g6_ParamLimits

0x5f17,	// (0x000815a6) main_mup3_pane_g6

0xcff9,	// (0x00088688) main_mup3_pane_g7_ParamLimits

0xcff9,	// (0x00088688) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0008adf2) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0008adf2) main_mup3_pane_g

0x5f8d,	// (0x0008161c) main_mup3_pane_t1_ParamLimits

0x5f8d,	// (0x0008161c) main_mup3_pane_t1

0x5ffc,	// (0x0008168b) main_mup3_pane_t2_ParamLimits

0x5ffc,	// (0x0008168b) main_mup3_pane_t2

0x60c5,	// (0x00081754) main_mup3_pane_t4_ParamLimits

0x60c5,	// (0x00081754) main_mup3_pane_t4

0x6113,	// (0x000817a2) main_mup3_pane_t5_ParamLimits

0x6113,	// (0x000817a2) main_mup3_pane_t5

0x61c3,	// (0x00081852) main_mup3_pane_t6_ParamLimits

0x61c3,	// (0x00081852) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0008ae03) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0008ae03) main_mup3_pane_t

0x626f,	// (0x000818fe) mup3_progress_pane_ParamLimits

0x626f,	// (0x000818fe) mup3_progress_pane

0x62ed,	// (0x0008197c) popup_mup3_control_window_ParamLimits

0x62ed,	// (0x0008197c) popup_mup3_control_window

0xd007,	// (0x00088696) popup_mup3_text_window

0x6306,	// (0x00081995) mup3_progress_pane_t1

0x6325,	// (0x000819b4) mup3_progress_pane_t2

0xd00f,	// (0x0008869e) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0008ae10) mup3_progress_pane_t

0xd02c,	// (0x000886bb) mup_progress_pane_cp03

0xa160,	// (0x000857ef) bg_tb_trans_pane_cp04

0x6344,	// (0x000819d3) mup3_volume_pane

0x634c,	// (0x000819db) popup_mup3_control_window_g1

0x6355,	// (0x000819e4) mup3_volume_pane_g1

0x635e,	// (0x000819ed) mup3_volume_pane_g2

0x6367,	// (0x000819f6) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0008ae17) mup3_volume_pane_g

0xa160,	// (0x000857ef) bg_tb_trans_pane_cp03

0xd03c,	// (0x000886cb) popup_mup3_text_window_g1

0xd044,	// (0x000886d3) popup_mup3_text_window_t1

0xa8fc,	// (0x00085f8b) list_calc_item_pane_g1_ParamLimits

0xca64,	// (0x000880f3) mup_volume_pane_cp_g1

0x5ce3,	// (0x00081372) main_touch_calib_pane_t3

0x5cf9,	// (0x00081388) main_touch_calib_pane_t4

0x5d0f,	// (0x0008139e) main_touch_calib_pane_t5

0x1fb4,	// (0x0007d643) aid_cell_size_toolbar2

0x1fbc,	// (0x0007d64b) aid_popup3_width_pane

0x0d43,	// (0x0007c3d2) aid_zoom_text_msg_primary

0x2d01,	// (0x0007e390) vorec_t7

0xa8c0,	// (0x00085f4f) bg_calc_paper_pane_g1_ParamLimits

0xa8cc,	// (0x00085f5b) bg_calc_paper_pane_g2_ParamLimits

0xa8d8,	// (0x00085f67) bg_calc_paper_pane_g3_ParamLimits

0xa8e4,	// (0x00085f73) bg_calc_paper_pane_g4_ParamLimits

0xa8f0,	// (0x00085f7f) bg_calc_paper_pane_g5_ParamLimits

0x2655,	// (0x0007dce4) bg_calc_paper_pane_g6_ParamLimits

0x2666,	// (0x0007dcf5) bg_calc_paper_pane_g7_ParamLimits

0x2677,	// (0x0007dd06) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0008a7cc) bg_calc_paper_pane_g_ParamLimits

0x2688,	// (0x0007dd17) calc_bg_paper_pane_g9_ParamLimits

0x2e13,	// (0x0007e4a2) image_qvga_pane_ParamLimits

0x2e13,	// (0x0007e4a2) image_qvga_pane

0xa7ef,	// (0x00085e7e) bg_popup_sub_pane_cp04_ParamLimits

0xb704,	// (0x00086d93) popup_mup_playback_window_g1_ParamLimits

0xb710,	// (0x00086d9f) popup_mup_playback_window_t1_ParamLimits

0xb725,	// (0x00086db4) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0008ab56) popup_mup_playback_window_t_ParamLimits

0x57e9,	// (0x00080e78) main_mup2_pane_g3_ParamLimits

0x57e9,	// (0x00080e78) main_mup2_pane_g3

0x30e3,	// (0x0007e772) popup_toolbar_window_cp04

0xbb07,	// (0x00087196) popup_call2_audio_second_window_g3_ParamLimits

0xbb07,	// (0x00087196) popup_call2_audio_second_window_g3

0xbf11,	// (0x000875a0) popup_call2_audio_first_window_g4_ParamLimits

0xbf11,	// (0x000875a0) popup_call2_audio_first_window_g4

0xc59c,	// (0x00087c2b) popup_call2_audio_in_window_g4_ParamLimits

0xc59c,	// (0x00087c2b) popup_call2_audio_in_window_g4

0x4bff,	// (0x0008028e) aid_area_sk_bg_cut_ParamLimits

0x4bff,	// (0x0008028e) aid_area_sk_bg_cut

0xb73a,	// (0x00086dc9) aid_area_sk_bg_cut_2_ParamLimits

0xb73a,	// (0x00086dc9) aid_area_sk_bg_cut_2

0x5b72,	// (0x00081201) aid_placing_details_win

0x5b7a,	// (0x00081209) aid_placing_details_win_2

0xce86,	// (0x00088515) camera2_autofocus_pane_g1_ParamLimits

0x220b,	// (0x0007d89a) popup_fixed_preview_cale_window_ParamLimits

0x220b,	// (0x0007d89a) popup_fixed_preview_cale_window

0xb516,	// (0x00086ba5) navi_slider_pane_g3

0xb51f,	// (0x00086bae) navi_slider_pane_g4

0xb528,	// (0x00086bb7) navi_slider_pane_g5

0xb516,	// (0x00086ba5) navi_slider_pane_g6

0x453b,	// (0x0007fbca) navi_slider_pane_g7

0xb63b,	// (0x00086cca) mup_scale_pane_g3

0xb644,	// (0x00086cd3) mup_scale_pane_g4

0xb64d,	// (0x00086cdc) mup_scale_pane_g5

0x497c,	// (0x0008000b) mup_scale_pane_g6

0x4985,	// (0x00080014) mup_scale_pane_g7

0xb516,	// (0x00086ba5) cams2_slider_pane_g3

0xcae6,	// (0x00088175) cams2_slider_pane_g4

0x5aca,	// (0x00081159) cams2_slider_pane_g5

0xb516,	// (0x00086ba5) cams2_slider_pane_g6

0x5ad2,	// (0x00081161) cams2_slider_pane_g7

0xcd11,	// (0x000883a0) camera2_autofocus_pane_cp_g1

0xc8fd,	// (0x00087f8c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8fd,	// (0x00087f8c) bg_popup_preview_window_pane_cp02

0xd052,	// (0x000886e1) list_fp_cale_pane_ParamLimits

0xd052,	// (0x000886e1) list_fp_cale_pane

0xd05e,	// (0x000886ed) popup_fixed_preview_cale_window_t1_ParamLimits

0xd05e,	// (0x000886ed) popup_fixed_preview_cale_window_t1

0x6370,	// (0x000819ff) popup_fixed_preview_cale_window_t2_ParamLimits

0x6370,	// (0x000819ff) popup_fixed_preview_cale_window_t2

0x6385,	// (0x00081a14) popup_fixed_preview_cale_window_t3_ParamLimits

0x6385,	// (0x00081a14) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0008ae1e) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0008ae1e) popup_fixed_preview_cale_window_t

0x639a,	// (0x00081a29) list_single_fp_cale_pane_ParamLimits

0x639a,	// (0x00081a29) list_single_fp_cale_pane

0xd07c,	// (0x0008870b) list_single_fp_cale_pane_g1_ParamLimits

0xd07c,	// (0x0008870b) list_single_fp_cale_pane_g1

0xd088,	// (0x00088717) list_single_fp_cale_pane_g2_ParamLimits

0xd088,	// (0x00088717) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0008ae25) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0008ae25) list_single_fp_cale_pane_g

0xd0a1,	// (0x00088730) list_single_fp_cale_pane_t1_ParamLimits

0xd0a1,	// (0x00088730) list_single_fp_cale_pane_t1

0xd0b3,	// (0x00088742) list_single_fp_cale_pane_t2_ParamLimits

0xd0b3,	// (0x00088742) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0008ae2c) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0008ae2c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa160,	// (0x000857ef) main_dialer_pane

0x63ad,	// (0x00081a3c) aid_cell_size_keypad

0x63b7,	// (0x00081a46) dialer_ne_pane

0x63c1,	// (0x00081a50) grid_dialer_command_1_pane

0x63c9,	// (0x00081a58) grid_dialer_command_2_pane

0x63d1,	// (0x00081a60) grid_dialer_keypad_pane

0x63e3,	// (0x00081a72) bg_popup_call_pane_cp06_ParamLimits

0x63e3,	// (0x00081a72) bg_popup_call_pane_cp06

0x63ef,	// (0x00081a7e) dialer_ne_clear_pane_ParamLimits

0x63ef,	// (0x00081a7e) dialer_ne_clear_pane

0xd0e6,	// (0x00088775) dialer_ne_pane_g1

0xd0ee,	// (0x0008877d) dialer_ne_pane_t1_ParamLimits

0xd0ee,	// (0x0008877d) dialer_ne_pane_t1

0x63fb,	// (0x00081a8a) dialer_ne_pane_t2_ParamLimits

0x63fb,	// (0x00081a8a) dialer_ne_pane_t2

0x6418,	// (0x00081aa7) dialer_ne_pane_t3_ParamLimits

0x6418,	// (0x00081aa7) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0008ae31) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0008ae31) dialer_ne_pane_t

0x643c,	// (0x00081acb) dialer_ne_pane_t3_copy1_ParamLimits

0x643c,	// (0x00081acb) dialer_ne_pane_t3_copy1

0x6460,	// (0x00081aef) cell_dialer_keypad_pane_ParamLimits

0x6460,	// (0x00081aef) cell_dialer_keypad_pane

0x6477,	// (0x00081b06) cell_dialer_command_1_pane_ParamLimits

0x6477,	// (0x00081b06) cell_dialer_command_1_pane

0x648d,	// (0x00081b1c) cell_dialer_command_2_pane_ParamLimits

0x648d,	// (0x00081b1c) cell_dialer_command_2_pane

0xd100,	// (0x0008878f) bg_button_pane_cp02_ParamLimits

0xd100,	// (0x0008878f) bg_button_pane_cp02

0x649c,	// (0x00081b2b) cell_dialer_keypad_pane_g1_ParamLimits

0x649c,	// (0x00081b2b) cell_dialer_keypad_pane_g1

0xd100,	// (0x0008878f) bg_button_pane_cp03_ParamLimits

0xd100,	// (0x0008878f) bg_button_pane_cp03

0x64b1,	// (0x00081b40) cell_dialer_command_1_pane_g1_ParamLimits

0x64b1,	// (0x00081b40) cell_dialer_command_1_pane_g1

0xd10c,	// (0x0008879b) bg_button_pane_cp04

0x64c5,	// (0x00081b54) cell_dialer_command_2_pane_g1

0xaa79,	// (0x00086108) bg_button_pane_cp06

0xd114,	// (0x000887a3) dialer_ne_clear_pane_g1

0xb3db,	// (0x00086a6a) navi_pane_g2

0xb409,	// (0x00086a98) navi_pane_g3

0x0002,

0xf3ca,	// (0x0008aa59) navi_pane_g

0xb4a6,	// (0x00086b35) navi_pane_mv_g2

0xb4cd,	// (0x00086b5c) navi_pane_mv_g5

0x4506,	// (0x0007fb95) navi_pane_mv_t1

0xa8b4,	// (0x00085f43) main_clock2_pane

0xe9ad,	// (0x0008a03c) main_clock2_list_pane_ParamLimits

0xe9ad,	// (0x0008a03c) main_clock2_list_pane

0x6521,	// (0x00081bb0) main_clock2_pane_t1_ParamLimits

0x6521,	// (0x00081bb0) main_clock2_pane_t1

0x654f,	// (0x00081bde) main_clock2_pane_t2_ParamLimits

0x654f,	// (0x00081bde) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0008ae3d) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0008ae3d) main_clock2_pane_t

0x65b4,	// (0x00081c43) popup_clock_analogue_window_cp03_ParamLimits

0x65b4,	// (0x00081c43) popup_clock_analogue_window_cp03

0x65d2,	// (0x00081c61) popup_clock_digital_window_cp02_ParamLimits

0x65d2,	// (0x00081c61) popup_clock_digital_window_cp02

0x6647,	// (0x00081cd6) main_clock2_list_single_pane_ParamLimits

0x6647,	// (0x00081cd6) main_clock2_list_single_pane

0xaa79,	// (0x00086108) list_highlight_pane_cp05

0xd152,	// (0x000887e1) main_clock2_list_single_pane_t1

0x30e3,	// (0x0007e772) popup_toolbar_window_cp04_ParamLimits

0x5b9c,	// (0x0008122b) camera2_autofocus_pane_g2_ParamLimits

0x5b9c,	// (0x0008122b) camera2_autofocus_pane_g2

0x5ba8,	// (0x00081237) camera2_autofocus_pane_g3_ParamLimits

0x5ba8,	// (0x00081237) camera2_autofocus_pane_g3

0x5bb4,	// (0x00081243) camera2_autofocus_pane_g4_ParamLimits

0x5bb4,	// (0x00081243) camera2_autofocus_pane_g4

0x5bc0,	// (0x0008124f) camera2_autofocus_pane_g5_ParamLimits

0x5bc0,	// (0x0008124f) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0008ad81) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0008ad81) camera2_autofocus_pane_g

0xcfd9,	// (0x00088668) camera2_autofocus_pane_cp_g2

0xcfe1,	// (0x00088670) camera2_autofocus_pane_cp_g3

0xcfe9,	// (0x00088678) camera2_autofocus_pane_cp_g4

0xcff1,	// (0x00088680) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0008ade7) camera2_autofocus_pane_cp_g

0x63db,	// (0x00081a6a) popup_dialer_spcha_window

0xa160,	// (0x000857ef) bg_popup_sub_pane_cp07

0xd160,	// (0x000887ef) list_spcha_pane

0xd168,	// (0x000887f7) list_single_spcha_pane_ParamLimits

0xd168,	// (0x000887f7) list_single_spcha_pane

0xa160,	// (0x000857ef) list_highlight_pane_cp06

0xd179,	// (0x00088808) list_single_spcha_pane_t1

0xc33a,	// (0x000879c9) popup_call2_audio_out_window_g4_ParamLimits

0xc33a,	// (0x000879c9) popup_call2_audio_out_window_g4

0xa160,	// (0x000857ef) main_imed2_pane

0x5238,	// (0x000808c7) popup_imed_adjust2_window

0x524b,	// (0x000808da) popup_imed_trans_window_ParamLimits

0x524b,	// (0x000808da) popup_imed_trans_window

0xcb4f,	// (0x000881de) popup_blid_sat_info2_window_t1

0xcb5d,	// (0x000881ec) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0008ad16) popup_blid_sat_info2_window_t

0x66fc,	// (0x00081d8b) aid_size_cell_colour_35

0x6716,	// (0x00081da5) aid_size_cell_colour_112

0x672d,	// (0x00081dbc) aid_size_cell_effect

0xacca,	// (0x00086359) bg_tb_trans_pane_cp02

0xafe1,	// (0x00086670) heading_imed_pane

0x6747,	// (0x00081dd6) listscroll_imed_pane

0xd187,	// (0x00088816) heading_imed_pane_g1

0xd18f,	// (0x0008881e) heading_imed_pane_t1

0xd19d,	// (0x0008882c) grid_imed_colour_35_pane_ParamLimits

0xd19d,	// (0x0008882c) grid_imed_colour_35_pane

0x6753,	// (0x00081de2) grid_imed_effect_pane

0xd1bc,	// (0x0008884b) list_imed_aspect_pane

0x6763,	// (0x00081df2) scroll_pane_cp027_ParamLimits

0x6763,	// (0x00081df2) scroll_pane_cp027

0x676f,	// (0x00081dfe) cell_imed_effect_pane_ParamLimits

0x676f,	// (0x00081dfe) cell_imed_effect_pane

0xd1c4,	// (0x00088853) cell_imed_colour_pane_ParamLimits

0xd1c4,	// (0x00088853) cell_imed_colour_pane

0xd206,	// (0x00088895) cell_imed_colour_pane_g1_ParamLimits

0xd206,	// (0x00088895) cell_imed_colour_pane_g1

0xd217,	// (0x000888a6) hgihlgiht_grid_pane_cp016_ParamLimits

0xd217,	// (0x000888a6) hgihlgiht_grid_pane_cp016

0x6787,	// (0x00081e16) cell_imed_effect_pane_g1

0x678f,	// (0x00081e1e) grid_highlight_pane_cp017

0xd228,	// (0x000888b7) list_imed_single_pane_ParamLimits

0xd228,	// (0x000888b7) list_imed_single_pane

0xa160,	// (0x000857ef) list_highlight_pane_cp07

0xd23d,	// (0x000888cc) list_imed_aspect_pane_comp1_t1

0xc909,	// (0x00087f98) bg_tb_trans_pane_cp05

0xd25f,	// (0x000888ee) popup_imed_adjust2_window_g1

0xd286,	// (0x00088915) popup_imed_adjust2_window_t1

0xd29e,	// (0x0008892d) slider_imed_adjust_pane

0xd2b2,	// (0x00088941) slider_imed_adjust_pane_g1

0xd2c2,	// (0x00088951) slider_imed_adjust_pane_g2

0xd2d2,	// (0x00088961) slider_imed_adjust_pane_g3

0xd2e3,	// (0x00088972) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0008ae5a) slider_imed_adjust_pane_g

0x6798,	// (0x00081e27) aid_size_cell_clipart2

0x67a4,	// (0x00081e33) grid_imed_clipart_pane

0xd2f4,	// (0x00088983) scroll_pane_cp031

0x67ae,	// (0x00081e3d) cell_imed_clipart_pane_ParamLimits

0x67ae,	// (0x00081e3d) cell_imed_clipart_pane

0x67d0,	// (0x00081e5f) cell_imed_clipart_pane_g1

0xa160,	// (0x000857ef) grid_highlight_pane_cp014

0x6503,	// (0x00081b92) main_clock2_pane_g1_ParamLimits

0x6503,	// (0x00081b92) main_clock2_pane_g1

0x65ee,	// (0x00081c7d) aid_call2_pane_cp10

0x6600,	// (0x00081c8f) aid_call_pane_cp10

0xb33c,	// (0x000869cb) popup_clock_analogue_window_cp10_g1

0xb33c,	// (0x000869cb) popup_clock_analogue_window_cp10_g2

0x6612,	// (0x00081ca1) popup_clock_analogue_window_cp10_g3

0x6612,	// (0x00081ca1) popup_clock_analogue_window_cp10_g4

0xb33c,	// (0x000869cb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0008ae48) popup_clock_analogue_window_cp10_g

0x6628,	// (0x00081cb7) popup_clock_analogue_window_cp10_t1

0x6659,	// (0x00081ce8) clock_digital_number_pane_cp10_ParamLimits

0x6659,	// (0x00081ce8) clock_digital_number_pane_cp10

0x6673,	// (0x00081d02) clock_digital_number_pane_cp11_ParamLimits

0x6673,	// (0x00081d02) clock_digital_number_pane_cp11

0x668d,	// (0x00081d1c) clock_digital_number_pane_cp12_ParamLimits

0x668d,	// (0x00081d1c) clock_digital_number_pane_cp12

0x66a7,	// (0x00081d36) clock_digital_number_pane_cp13_ParamLimits

0x66a7,	// (0x00081d36) clock_digital_number_pane_cp13

0x66c1,	// (0x00081d50) clock_digital_separator_pane_cp10_ParamLimits

0x66c1,	// (0x00081d50) clock_digital_separator_pane_cp10

0x66db,	// (0x00081d6a) popup_clock_digital_window_cp02_t1_ParamLimits

0x66db,	// (0x00081d6a) popup_clock_digital_window_cp02_t1

0xa7e7,	// (0x00085e76) clock_digital_number_pane_cp10_g1

0xa7e7,	// (0x00085e76) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0008ae63) clock_digital_number_pane_cp10_g

0xa7e7,	// (0x00085e76) clock_digital_separator_pane_cp10_g1

0xa7e7,	// (0x00085e76) clock_digital_separator_pane_g2_cp10

0xb4d5,	// (0x00086b64) navi_pane_vded_g4

0xb4de,	// (0x00086b6d) navi_pane_vded_g5

0xb4e7,	// (0x00086b76) navi_pane_vded_t1

0xa160,	// (0x000857ef) main_vded_pane

0x67d9,	// (0x00081e68) main_vded_pane_g1

0x67e5,	// (0x00081e74) main_vded_pane_g2

0x67ef,	// (0x00081e7e) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0008ae68) main_vded_pane_g

0x67f9,	// (0x00081e88) main_vded_pane_t1

0x6807,	// (0x00081e96) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0008ae6f) main_vded_pane_t

0x6815,	// (0x00081ea4) vded_slider_pane

0x681f,	// (0x00081eae) vded_video_pane

0xd2fc,	// (0x0008898b) vded_video_pane_g1

0x6829,	// (0x00081eb8) vded_video_pane_g2

0xcd11,	// (0x000883a0) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0008ae74) vded_video_pane_g

0xd306,	// (0x00088995) vded_slider_pane_g1

0xca64,	// (0x000880f3) vded_slider_pane_g2

0xd30f,	// (0x0008899e) vded_slider_pane_g3

0xd318,	// (0x000889a7) vded_slider_pane_g4

0xd321,	// (0x000889b0) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0008ae7b) vded_slider_pane_g

0x62df,	// (0x0008196e) mup3_rocker_pane_ParamLimits

0x62df,	// (0x0008196e) mup3_rocker_pane

0x6832,	// (0x00081ec1) mup3_control_keys_pane_g1

0x683a,	// (0x00081ec9) mup3_control_keys_pane_g2

0x6842,	// (0x00081ed1) mup3_control_keys_pane_g3

0x684a,	// (0x00081ed9) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0008ae86) mup3_control_keys_pane_g

0x2233,	// (0x0007d8c2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2233,	// (0x0007d8c2) popup_toolbar2_fixed_window_cp01

0x62f9,	// (0x00081988) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62f9,	// (0x00081988) popup_toolbar2_fixed_window_cp02

0xbc79,	// (0x00087308) popup_call2_audio_second_window_t4_ParamLimits

0xbc79,	// (0x00087308) popup_call2_audio_second_window_t4

0xc1a7,	// (0x00087836) popup_call2_audio_first_window_t6_ParamLimits

0xc1a7,	// (0x00087836) popup_call2_audio_first_window_t6

0xc43d,	// (0x00087acc) popup_call2_audio_out_window_t6_ParamLimits

0xc43d,	// (0x00087acc) popup_call2_audio_out_window_t6

0xa160,	// (0x000857ef) main_vitu_pane

0x685a,	// (0x00081ee9) aid_size_cell_itu_ParamLimits

0x685a,	// (0x00081ee9) aid_size_cell_itu

0xe9ad,	// (0x0008a03c) bg_popup_window_pane_cp08_ParamLimits

0xe9ad,	// (0x0008a03c) bg_popup_window_pane_cp08

0x6868,	// (0x00081ef7) field_vitu_entry_pane_ParamLimits

0x6868,	// (0x00081ef7) field_vitu_entry_pane

0x6877,	// (0x00081f06) grid_vitu_function_pane_ParamLimits

0x6877,	// (0x00081f06) grid_vitu_function_pane

0x6887,	// (0x00081f16) grid_vitu_itu_pane_ParamLimits

0x6887,	// (0x00081f16) grid_vitu_itu_pane

0x6897,	// (0x00081f26) cell_vitu_itu_pane_ParamLimits

0x6897,	// (0x00081f26) cell_vitu_itu_pane

0x68ac,	// (0x00081f3b) cell_vitu_function_pane_ParamLimits

0x68ac,	// (0x00081f3b) cell_vitu_function_pane

0xacca,	// (0x00086359) bg_popup_sub_pane_cp08_ParamLimits

0xacca,	// (0x00086359) bg_popup_sub_pane_cp08

0x68be,	// (0x00081f4d) field_vitu_entry_pane_t1_ParamLimits

0x68be,	// (0x00081f4d) field_vitu_entry_pane_t1

0xd342,	// (0x000889d1) field_vitu_entry_pane_t2_ParamLimits

0xd342,	// (0x000889d1) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0008ae94) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0008ae94) field_vitu_entry_pane_t

0xd35f,	// (0x000889ee) bg_button_pane_cp05_ParamLimits

0xd35f,	// (0x000889ee) bg_button_pane_cp05

0x68da,	// (0x00081f69) cell_vitu_itu_pane_g1

0x68f2,	// (0x00081f81) cell_vitu_itu_pane_t1_ParamLimits

0x68f2,	// (0x00081f81) cell_vitu_itu_pane_t1

0x6904,	// (0x00081f93) cell_vitu_itu_pane_t2_ParamLimits

0x6904,	// (0x00081f93) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0008ae99) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0008ae99) cell_vitu_itu_pane_t

0xd36d,	// (0x000889fc) bg_button_pane_cp07

0x6939,	// (0x00081fc8) cell_vitu_function_pane_g1

0x24f9,	// (0x0007db88) main_calc_pane_g1

0x1ff0,	// (0x0007d67f) aid_visual_content_pane

0xa160,	// (0x000857ef) main_vradio_pane

0x6942,	// (0x00081fd1) main_vradio_pane_g1_ParamLimits

0x6942,	// (0x00081fd1) main_vradio_pane_g1

0xd377,	// (0x00088a06) main_vradio_pane_g2_ParamLimits

0xd377,	// (0x00088a06) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0008aea0) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0008aea0) main_vradio_pane_g

0x6952,	// (0x00081fe1) main_vradio_pane_t1_ParamLimits

0x6952,	// (0x00081fe1) main_vradio_pane_t1

0x6964,	// (0x00081ff3) main_vradio_pane_t2_ParamLimits

0x6964,	// (0x00081ff3) main_vradio_pane_t2

0xd384,	// (0x00088a13) main_vradio_pane_t3_ParamLimits

0xd384,	// (0x00088a13) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0008aea5) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0008aea5) main_vradio_pane_t

0x6976,	// (0x00082005) vradio_rocker_control_pane_ParamLimits

0x6976,	// (0x00082005) vradio_rocker_control_pane

0x6982,	// (0x00082011) vradio_station_info_pane_ParamLimits

0x6982,	// (0x00082011) vradio_station_info_pane

0xd398,	// (0x00088a27) vradio_frequency_info_pane_ParamLimits

0xd398,	// (0x00088a27) vradio_frequency_info_pane

0xcd11,	// (0x000883a0) vradio_station_info_pane_g1

0xd3a7,	// (0x00088a36) vradio_station_info_pane_t1_ParamLimits

0xd3a7,	// (0x00088a36) vradio_station_info_pane_t1

0xd3c9,	// (0x00088a58) vradio_station_info_pane_t2_ParamLimits

0xd3c9,	// (0x00088a58) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0008aeac) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0008aeac) vradio_station_info_pane_t

0xd3db,	// (0x00088a6a) vradio_tuning_pane

0xd3e3,	// (0x00088a72) vradio_rocker_control_pane_g1

0xd3eb,	// (0x00088a7a) vradio_rocker_control_pane_g2

0xd3f3,	// (0x00088a82) vradio_rocker_control_pane_g3

0xd3fb,	// (0x00088a8a) vradio_rocker_control_pane_g4

0xd403,	// (0x00088a92) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0008aeb1) vradio_rocker_control_pane_g

0x6991,	// (0x00082020) vradio_frequency_info_pane_g1

0xd40b,	// (0x00088a9a) vradio_frequency_info_pane_t1_ParamLimits

0xd40b,	// (0x00088a9a) vradio_frequency_info_pane_t1

0x699b,	// (0x0008202a) vradio_tuning_pane_g1

0x69a4,	// (0x00082033) vradio_tuning_pane_t1

0x2039,	// (0x0007d6c8) area_side_right_pane_ParamLimits

0x2039,	// (0x0007d6c8) area_side_right_pane

0xc8c4,	// (0x00087f53) status_small_pane_g1

0xc8cc,	// (0x00087f5b) status_small_pane_g2

0xc8d5,	// (0x00087f64) status_small_pane_g3

0xc8de,	// (0x00087f6d) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0008ac6c) status_small_pane_g

0xc8e7,	// (0x00087f76) status_small_pane_t1

0xa160,	// (0x000857ef) main_video3_pane

0xd41f,	// (0x00088aae) cams_zoom_vslider_pane

0xd427,	// (0x00088ab6) image3_wide_pane_ParamLimits

0xd427,	// (0x00088ab6) image3_wide_pane

0xd441,	// (0x00088ad0) image3_wide_small_pane

0xd44d,	// (0x00088adc) main_video3_pane_g1_ParamLimits

0xd44d,	// (0x00088adc) main_video3_pane_g1

0xd469,	// (0x00088af8) main_video3_pane_g2_ParamLimits

0xd469,	// (0x00088af8) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0008aebc) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0008aebc) main_video3_pane_g

0xd485,	// (0x00088b14) main_video3_pane_t1_ParamLimits

0xd485,	// (0x00088b14) main_video3_pane_t1

0xd4b0,	// (0x00088b3f) main_video3_pane_t2_ParamLimits

0xd4b0,	// (0x00088b3f) main_video3_pane_t2

0xd4db,	// (0x00088b6a) main_video3_pane_t3_ParamLimits

0xd4db,	// (0x00088b6a) main_video3_pane_t3

0x0002,

0xf832,	// (0x0008aec1) main_video3_pane_t_ParamLimits

0xf832,	// (0x0008aec1) main_video3_pane_t

0xd508,	// (0x00088b97) cams_zoom_vslider_pane_g1

0xd511,	// (0x00088ba0) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0008aec8) cams_zoom_vslider_pane_g

0xd519,	// (0x00088ba8) small_slider_vertical_pane

0xcd11,	// (0x000883a0) small_slider_vertical_pane_g1

0xcd11,	// (0x000883a0) small_slider_vertical_pane_g2

0xd521,	// (0x00088bb0) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0008aecd) small_slider_vertical_pane_g

0xa160,	// (0x000857ef) main_hwr_training_pane

0xd52a,	// (0x00088bb9) hwr_training_instruct_pane_ParamLimits

0xd52a,	// (0x00088bb9) hwr_training_instruct_pane

0x69b3,	// (0x00082042) hwr_training_navi_pane_ParamLimits

0x69b3,	// (0x00082042) hwr_training_navi_pane

0x69cd,	// (0x0008205c) hwr_training_write_pane_ParamLimits

0x69cd,	// (0x0008205c) hwr_training_write_pane

0xa160,	// (0x000857ef) bg_frame_shadow_pane

0xd561,	// (0x00088bf0) hwr_training_write_pane_g1

0xd569,	// (0x00088bf8) hwr_training_write_pane_g2

0xd571,	// (0x00088c00) hwr_training_write_pane_g3

0xd579,	// (0x00088c08) hwr_training_write_pane_g4

0xd581,	// (0x00088c10) hwr_training_write_pane_g5

0xd589,	// (0x00088c18) hwr_training_write_pane_g6

0xd591,	// (0x00088c20) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0008aed4) hwr_training_write_pane_g

0x6a05,	// (0x00082094) hwr_training_navi_pane_g1_ParamLimits

0x6a05,	// (0x00082094) hwr_training_navi_pane_g1

0x6a17,	// (0x000820a6) hwr_training_navi_pane_g2_ParamLimits

0x6a17,	// (0x000820a6) hwr_training_navi_pane_g2

0x6a29,	// (0x000820b8) hwr_training_navi_pane_g3_ParamLimits

0x6a29,	// (0x000820b8) hwr_training_navi_pane_g3

0x6a39,	// (0x000820c8) hwr_training_navi_pane_g4_ParamLimits

0x6a39,	// (0x000820c8) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0008aee3) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0008aee3) hwr_training_navi_pane_g

0x6a53,	// (0x000820e2) hwr_training_navi_pane_t1

0x6a61,	// (0x000820f0) list_single_hwr_training_instruct_pane_ParamLimits

0x6a61,	// (0x000820f0) list_single_hwr_training_instruct_pane

0xd599,	// (0x00088c28) list_single_hwr_training_instruct_pane_t1

0xcc51,	// (0x000882e0) bg_frame_shadow_pane_g1

0xd5a8,	// (0x00088c37) bg_frame_shadow_pane_g2

0xd5b0,	// (0x00088c3f) bg_frame_shadow_pane_g3

0xd5b8,	// (0x00088c47) bg_frame_shadow_pane_g4

0xd5c0,	// (0x00088c4f) bg_frame_shadow_pane_g5

0xd5c8,	// (0x00088c57) bg_frame_shadow_pane_g6

0xd5d0,	// (0x00088c5f) bg_frame_shadow_pane_g7

0xa96d,	// (0x00085ffc) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0008aeee) bg_frame_shadow_pane_g

0xa160,	// (0x000857ef) main_video_tele_dialer_pane

0x6a86,	// (0x00082115) aid_size_cell_video_keypad_ParamLimits

0x6a86,	// (0x00082115) aid_size_cell_video_keypad

0x6a96,	// (0x00082125) grid_video_dialer_keypad_pane_ParamLimits

0x6a96,	// (0x00082125) grid_video_dialer_keypad_pane

0x6aca,	// (0x00082159) video_down_pane_cp_ParamLimits

0x6aca,	// (0x00082159) video_down_pane_cp

0x6af4,	// (0x00082183) cell_video_dialer_keypad_pane_ParamLimits

0x6af4,	// (0x00082183) cell_video_dialer_keypad_pane

0xd5d8,	// (0x00088c67) bg_button_pane_cp08_ParamLimits

0xd5d8,	// (0x00088c67) bg_button_pane_cp08

0x6b09,	// (0x00082198) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6b09,	// (0x00082198) cell_video_dialer_keypad_pane_g1

0x62d3,	// (0x00081962) mup3_rocker2_pane_ParamLimits

0x62d3,	// (0x00081962) mup3_rocker2_pane

0xcd11,	// (0x000883a0) mup3_rocker2_pane_g1

0x51a8,	// (0x00080837) main_dialer2_pane

0xa160,	// (0x000857ef) main_mp4_pane

0x6b5e,	// (0x000821ed) main_mp4_pane_g1_ParamLimits

0x6b5e,	// (0x000821ed) main_mp4_pane_g1

0x6b6c,	// (0x000821fb) main_mp4_pane_g2_ParamLimits

0x6b6c,	// (0x000821fb) main_mp4_pane_g2

0x6b7a,	// (0x00082209) main_mp4_pane_g3_ParamLimits

0x6b7a,	// (0x00082209) main_mp4_pane_g3

0x6bbf,	// (0x0008224e) main_mp4_pane_g4_ParamLimits

0x6bbf,	// (0x0008224e) main_mp4_pane_g4

0x6bed,	// (0x0008227c) main_mp4_pane_g5_ParamLimits

0x6bed,	// (0x0008227c) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0008af0e) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0008af0e) main_mp4_pane_g

0x6c61,	// (0x000822f0) main_mp4_pane_t1_ParamLimits

0x6c61,	// (0x000822f0) main_mp4_pane_t1

0x6cbd,	// (0x0008234c) main_mp4_pane_t2_ParamLimits

0x6cbd,	// (0x0008234c) main_mp4_pane_t2

0xd5e4,	// (0x00088c73) main_mp4_pane_t3_ParamLimits

0xd5e4,	// (0x00088c73) main_mp4_pane_t3

0x6d0f,	// (0x0008239e) main_mp4_pane_t4_ParamLimits

0x6d0f,	// (0x0008239e) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0008af1f) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0008af1f) main_mp4_pane_t

0x6d53,	// (0x000823e2) mp4_progress_pane_ParamLimits

0x6d53,	// (0x000823e2) mp4_progress_pane

0x6d9d,	// (0x0008242c) mp4_rocker_pane_ParamLimits

0x6d9d,	// (0x0008242c) mp4_rocker_pane

0xd612,	// (0x00088ca1) mp4_progress_pane_t1

0xd62b,	// (0x00088cba) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0008af28) mp4_progress_pane_t

0xd644,	// (0x00088cd3) mup_progress_pane_cp04

0xcd11,	// (0x000883a0) mp4_rocker_pane_g1

0x6dbd,	// (0x0008244c) aid_cell_size_keypad2_ParamLimits

0x6dbd,	// (0x0008244c) aid_cell_size_keypad2

0x6dcd,	// (0x0008245c) dialer2_ne_pane_ParamLimits

0x6dcd,	// (0x0008245c) dialer2_ne_pane

0x6ddb,	// (0x0008246a) grid_dialer2_keypad_pane_ParamLimits

0x6ddb,	// (0x0008246a) grid_dialer2_keypad_pane

0xdc66,	// (0x000892f5) bg_popup_call_pane_cp07_ParamLimits

0xdc66,	// (0x000892f5) bg_popup_call_pane_cp07

0x6deb,	// (0x0008247a) dialer2_ne_pane_t1_ParamLimits

0x6deb,	// (0x0008247a) dialer2_ne_pane_t1

0x6e10,	// (0x0008249f) cell_dialer2_keypad_pane_ParamLimits

0x6e10,	// (0x0008249f) cell_dialer2_keypad_pane

0xd673,	// (0x00088d02) bg_button_pane_pane_cp04_ParamLimits

0xd673,	// (0x00088d02) bg_button_pane_pane_cp04

0x6e25,	// (0x000824b4) cell_dialer2_keypad_pane_g1_ParamLimits

0x6e25,	// (0x000824b4) cell_dialer2_keypad_pane_g1

0x2fa5,	// (0x0007e634) aid_placing_vt_set_content_ParamLimits

0x2fa5,	// (0x0007e634) aid_placing_vt_set_content

0x2fd1,	// (0x0007e660) aid_placing_vt_set_title_ParamLimits

0x2fd1,	// (0x0007e660) aid_placing_vt_set_title

0xa160,	// (0x000857ef) main_image3_pane

0x6ebf,	// (0x0008254e) area_side_right_pane_cp01_ParamLimits

0x6ebf,	// (0x0008254e) area_side_right_pane_cp01

0xa7ba,	// (0x00085e49) main_image3_pane_g1_ParamLimits

0xa7ba,	// (0x00085e49) main_image3_pane_g1

0x6eec,	// (0x0008257b) main_image3_pane_g2_ParamLimits

0x6eec,	// (0x0008257b) main_image3_pane_g2

0x6f05,	// (0x00082594) main_image3_pane_g3_ParamLimits

0x6f05,	// (0x00082594) main_image3_pane_g3

0x6f1e,	// (0x000825ad) main_image3_pane_g4_ParamLimits

0x6f1e,	// (0x000825ad) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0008af37) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0008af37) main_image3_pane_g

0x6f37,	// (0x000825c6) main_image3_pane_t1_ParamLimits

0x6f37,	// (0x000825c6) main_image3_pane_t1

0x6f5c,	// (0x000825eb) main_image3_pane_t2_ParamLimits

0x6f5c,	// (0x000825eb) main_image3_pane_t2

0x6f7b,	// (0x0008260a) main_image3_pane_t3_ParamLimits

0x6f7b,	// (0x0008260a) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0008af40) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0008af40) main_image3_pane_t

0xe9ad,	// (0x0008a03c) grid_sctrl_middle_pane_cp01_ParamLimits

0xe9ad,	// (0x0008a03c) grid_sctrl_middle_pane_cp01

0x6fdc,	// (0x0008266b) cell_sctrl_middle_pane_cp01_ParamLimits

0x6fdc,	// (0x0008266b) cell_sctrl_middle_pane_cp01

0x6fed,	// (0x0008267c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6fed,	// (0x0008267c) cell_sctrl_middle_pane_cp01_g1

0xa160,	// (0x000857ef) main_call4_pane

0x6ffa,	// (0x00082689) aid_size_button_call4_ParamLimits

0x6ffa,	// (0x00082689) aid_size_button_call4

0x7030,	// (0x000826bf) call4_windows_pane_ParamLimits

0x7030,	// (0x000826bf) call4_windows_pane

0x7045,	// (0x000826d4) grid_call4_button_pane_ParamLimits

0x7045,	// (0x000826d4) grid_call4_button_pane

0x7073,	// (0x00082702) call4_windows_conf_pane

0x708a,	// (0x00082719) popup_call4_audio_first_window_ParamLimits

0x708a,	// (0x00082719) popup_call4_audio_first_window

0x70da,	// (0x00082769) popup_call4_audio_second_window_ParamLimits

0x70da,	// (0x00082769) popup_call4_audio_second_window

0x70f3,	// (0x00082782) popup_call4_audio_wait_window_ParamLimits

0x70f3,	// (0x00082782) popup_call4_audio_wait_window

0x7101,	// (0x00082790) cell_call4_button_pane_ParamLimits

0x7101,	// (0x00082790) cell_call4_button_pane

0x7124,	// (0x000827b3) bg_button_pane_cp09_ParamLimits

0x7124,	// (0x000827b3) bg_button_pane_cp09

0x7130,	// (0x000827bf) cell_call4_button_pane_g1_ParamLimits

0x7130,	// (0x000827bf) cell_call4_button_pane_g1

0x713d,	// (0x000827cc) cell_call4_button_pane_t1_ParamLimits

0x713d,	// (0x000827cc) cell_call4_button_pane_t1

0xd687,	// (0x00088d16) popup_call4_audio_conf_window_ParamLimits

0xd687,	// (0x00088d16) popup_call4_audio_conf_window

0x6306,	// (0x00081995) mup3_progress_pane_t1_ParamLimits

0x6325,	// (0x000819b4) mup3_progress_pane_t2_ParamLimits

0xd00f,	// (0x0008869e) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0008ae10) mup3_progress_pane_t_ParamLimits

0xd02c,	// (0x000886bb) mup_progress_pane_cp03_ParamLimits

0x6852,	// (0x00081ee1) mup3_control_keys_pane_g4_copy1

0x6d81,	// (0x00082410) mp4_rocker2_pane_ParamLimits

0x6d81,	// (0x00082410) mp4_rocker2_pane

0xd69b,	// (0x00088d2a) mp4_rocker2_pane_g1

0xd6a3,	// (0x00088d32) mp4_rocker2_pane_g2

0x7181,	// (0x00082810) mp4_rocker2_pane_g3

0x7189,	// (0x00082818) mp4_rocker2_pane_g4

0x7191,	// (0x00082820) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0008af49) mp4_rocker2_pane_g

0xa160,	// (0x000857ef) main_camera4_pane

0xa160,	// (0x000857ef) main_video4_pane

0x6aa6,	// (0x00082135) main_video_tele_dialer_pane_t1_ParamLimits

0x6aa6,	// (0x00082135) main_video_tele_dialer_pane_t1

0x6ab8,	// (0x00082147) main_video_tele_dialer_pane_t2_ParamLimits

0x6ab8,	// (0x00082147) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0008aeff) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0008aeff) main_video_tele_dialer_pane_t

0x71b1,	// (0x00082840) cam4_autofocus_pane_ParamLimits

0x71b1,	// (0x00082840) cam4_autofocus_pane

0x71cb,	// (0x0008285a) cam4_image_uncrop_pane_ParamLimits

0x71cb,	// (0x0008285a) cam4_image_uncrop_pane

0x71e2,	// (0x00082871) cam4_indicators_pane_ParamLimits

0x71e2,	// (0x00082871) cam4_indicators_pane

0x71fe,	// (0x0008288d) main_camera4_pane_g1_ParamLimits

0x71fe,	// (0x0008288d) main_camera4_pane_g1

0x720a,	// (0x00082899) main_camera4_pane_g2_ParamLimits

0x720a,	// (0x00082899) main_camera4_pane_g2

0x720a,	// (0x00082899) main_camera4_pane_g3_ParamLimits

0x720a,	// (0x00082899) main_camera4_pane_g3

0x7216,	// (0x000828a5) main_camera4_pane_g4_ParamLimits

0x7216,	// (0x000828a5) main_camera4_pane_g4

0x7222,	// (0x000828b1) main_camera4_pane_g5_ParamLimits

0x7222,	// (0x000828b1) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0008af54) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0008af54) main_camera4_pane_g

0x723c,	// (0x000828cb) main_camera4_pane_t1_ParamLimits

0x723c,	// (0x000828cb) main_camera4_pane_t1

0xcf74,	// (0x00088603) bg_tb_trans_pane_cp06

0x728c,	// (0x0008291b) cam4_indicators_pane_g1

0x729d,	// (0x0008292c) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0008af6f) cam4_indicators_pane_g

0x72bb,	// (0x0008294a) cam4_indicators_pane_t1

0x72e5,	// (0x00082974) main_video4_pane_g1_ParamLimits

0x72e5,	// (0x00082974) main_video4_pane_g1

0x72f1,	// (0x00082980) main_video4_pane_g2_ParamLimits

0x72f1,	// (0x00082980) main_video4_pane_g2

0x72fd,	// (0x0008298c) main_video4_pane_g3_ParamLimits

0x72fd,	// (0x0008298c) main_video4_pane_g3

0x7309,	// (0x00082998) main_video4_pane_g4_ParamLimits

0x7309,	// (0x00082998) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0008af76) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0008af76) main_video4_pane_g

0x7329,	// (0x000829b8) vid4_indicators_pane_ParamLimits

0x7329,	// (0x000829b8) vid4_indicators_pane

0x7348,	// (0x000829d7) video4_image_uncrop_cif_pane_ParamLimits

0x7348,	// (0x000829d7) video4_image_uncrop_cif_pane

0x7357,	// (0x000829e6) video4_image_uncrop_nhd_pane_ParamLimits

0x7357,	// (0x000829e6) video4_image_uncrop_nhd_pane

0x71cb,	// (0x0008285a) video4_image_uncrop_vga_pane_ParamLimits

0x71cb,	// (0x0008285a) video4_image_uncrop_vga_pane

0xacca,	// (0x00086359) bg_tb_trans_pane_cp07

0x736e,	// (0x000829fd) vid4_indicators_pane_g1

0x7382,	// (0x00082a11) vid4_indicators_pane_g2

0x7396,	// (0x00082a25) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0008af81) vid4_indicators_pane_g

0x73c5,	// (0x00082a54) vid4_indicators_pane_t1

0x73dc,	// (0x00082a6b) cam4_autofocus_pane_g1

0x73e4,	// (0x00082a73) cam4_autofocus_pane_g2

0x73ec,	// (0x00082a7b) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0008af8c) cam4_autofocus_pane_g

0x73f4,	// (0x00082a83) cam4_autofocus_pane_g3_copy1

0x6ad8,	// (0x00082167) video_down_pane_cp_t1

0x6ae6,	// (0x00082175) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0008af04) video_down_pane_cp_t

0xe9ad,	// (0x0008a03c) popup_vitu2_window_ParamLimits

0xe9ad,	// (0x0008a03c) popup_vitu2_window

0x73fc,	// (0x00082a8b) aid_size_cell2_itu2_ParamLimits

0x73fc,	// (0x00082a8b) aid_size_cell2_itu2

0x741e,	// (0x00082aad) aid_size_cell_itu2_ParamLimits

0x741e,	// (0x00082aad) aid_size_cell_itu2

0xdc66,	// (0x000892f5) bg_popup_window_pane_cp09_ParamLimits

0xdc66,	// (0x000892f5) bg_popup_window_pane_cp09

0x7462,	// (0x00082af1) field_vitu2_entry_pane_ParamLimits

0x7462,	// (0x00082af1) field_vitu2_entry_pane

0x7482,	// (0x00082b11) grid_vitu2_function_pane_ParamLimits

0x7482,	// (0x00082b11) grid_vitu2_function_pane

0x74c6,	// (0x00082b55) grid_vitu2_itu_pane_ParamLimits

0x74c6,	// (0x00082b55) grid_vitu2_itu_pane

0x7542,	// (0x00082bd1) cell_vitu2_itu_pane_ParamLimits

0x7542,	// (0x00082bd1) cell_vitu2_itu_pane

0x755b,	// (0x00082bea) cell_vitu2_function_pane_ParamLimits

0x755b,	// (0x00082bea) cell_vitu2_function_pane

0xd6ab,	// (0x00088d3a) bg_popup_call_pane_cp08_ParamLimits

0xd6ab,	// (0x00088d3a) bg_popup_call_pane_cp08

0xd6c2,	// (0x00088d51) field_vitu2_entry_pane_g1

0xd6ce,	// (0x00088d5d) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0008af93) field_vitu2_entry_pane_g

0x1063,	// (0x0007c6f2) field_vitu2_entry_pane_t1_ParamLimits

0x1063,	// (0x0007c6f2) field_vitu2_entry_pane_t1

0x1093,	// (0x0007c722) field_vitu2_entry_pane_t2_ParamLimits

0x1093,	// (0x0007c722) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0008af9a) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0008af9a) field_vitu2_entry_pane_t

0x759c,	// (0x00082c2b) bg_button_pane_cp010_ParamLimits

0x759c,	// (0x00082c2b) bg_button_pane_cp010

0x75aa,	// (0x00082c39) cell_vitu2_itu_pane_g1

0x75ca,	// (0x00082c59) cell_vitu2_itu_pane_t1_ParamLimits

0x75ca,	// (0x00082c59) cell_vitu2_itu_pane_t1

0x10b0,	// (0x0007c73f) cell_vitu2_itu_pane_t2_ParamLimits

0x10b0,	// (0x0007c73f) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0008afa4) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0008afa4) cell_vitu2_itu_pane_t

0xacca,	// (0x00086359) bg_button_pane_cp011

0x7616,	// (0x00082ca5) cell_vitu2_function_pane_g1

0xa160,	// (0x000857ef) main_myfav_hc_pane

0x6fbd,	// (0x0008264c) popup_image3_note_pane_ParamLimits

0x6fbd,	// (0x0008264c) popup_image3_note_pane

0x6fcb,	// (0x0008265a) popup_image3_tool_bar_pane_ParamLimits

0x6fcb,	// (0x0008265a) popup_image3_tool_bar_pane

0x1126,	// (0x0007c7b5) cell_vitu2_itu_pane_t3_ParamLimits

0x1126,	// (0x0007c7b5) cell_vitu2_itu_pane_t3

0xa160,	// (0x000857ef) bg_popup_trans_pane

0xd6f0,	// (0x00088d7f) grid_image3_tool_bar_pane

0xd6fa,	// (0x00088d89) bg_popup_trans_pane_g1

0xace9,	// (0x00086378) bg_popup_trans_pane_g2

0xd702,	// (0x00088d91) bg_popup_trans_pane_g3

0xd70a,	// (0x00088d99) bg_popup_trans_pane_g4

0xd712,	// (0x00088da1) bg_popup_trans_pane_g5

0xd71a,	// (0x00088da9) bg_popup_trans_pane_g6

0xd722,	// (0x00088db1) bg_popup_trans_pane_g7

0xd72a,	// (0x00088db9) bg_popup_trans_pane_g8

0xacb2,	// (0x00086341) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0008afab) bg_popup_trans_pane_g

0xd732,	// (0x00088dc1) cell_image3_tool_bar_pane_ParamLimits

0xd732,	// (0x00088dc1) cell_image3_tool_bar_pane

0xcd11,	// (0x000883a0) cell_image3_tool_bar_pane_g1

0xa160,	// (0x000857ef) bg_popup_trans_pane_cp1

0xd746,	// (0x00088dd5) popup_image3_note_pane_t1

0xd754,	// (0x00088de3) popup_image3_note_pane_t2

0xd762,	// (0x00088df1) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0008afbe) popup_image3_note_pane_t

0xd770,	// (0x00088dff) popup_image3_note_pane_t3_copy1

0x762a,	// (0x00082cb9) bg_myfav_hc_instruction_pane_ParamLimits

0x762a,	// (0x00082cb9) bg_myfav_hc_instruction_pane

0x7642,	// (0x00082cd1) cell_myfav_contact_pane_ParamLimits

0x7642,	// (0x00082cd1) cell_myfav_contact_pane

0x765c,	// (0x00082ceb) cell_myfav_contact_pane_cp1_ParamLimits

0x765c,	// (0x00082ceb) cell_myfav_contact_pane_cp1

0x7674,	// (0x00082d03) cell_myfav_contact_pane_cp2_ParamLimits

0x7674,	// (0x00082d03) cell_myfav_contact_pane_cp2

0x768c,	// (0x00082d1b) cell_myfav_contact_pane_cp3_ParamLimits

0x768c,	// (0x00082d1b) cell_myfav_contact_pane_cp3

0x76a3,	// (0x00082d32) cell_myfav_contact_pane_cp4_ParamLimits

0x76a3,	// (0x00082d32) cell_myfav_contact_pane_cp4

0x76b9,	// (0x00082d48) cell_myfav_contact_pane_cp5_ParamLimits

0x76b9,	// (0x00082d48) cell_myfav_contact_pane_cp5

0x76cd,	// (0x00082d5c) cell_myfav_contact_pane_cp6_ParamLimits

0x76cd,	// (0x00082d5c) cell_myfav_contact_pane_cp6

0x76e1,	// (0x00082d70) cell_myfav_contact_pane_cp7_ParamLimits

0x76e1,	// (0x00082d70) cell_myfav_contact_pane_cp7

0xd77e,	// (0x00088e0d) listscroll_gen_pane_cp05

0x76f9,	// (0x00082d88) main_myfav_hc_pane_g1_ParamLimits

0x76f9,	// (0x00082d88) main_myfav_hc_pane_g1

0x770f,	// (0x00082d9e) main_myfav_hc_pane_g2_ParamLimits

0x770f,	// (0x00082d9e) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0008afc5) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0008afc5) main_myfav_hc_pane_g

0x773d,	// (0x00082dcc) main_myfav_hc_pane_t1_ParamLimits

0x773d,	// (0x00082dcc) main_myfav_hc_pane_t1

0xd787,	// (0x00088e16) main_myfav_hc_pane_t2_ParamLimits

0xd787,	// (0x00088e16) main_myfav_hc_pane_t2

0xd799,	// (0x00088e28) main_myfav_hc_pane_t3_ParamLimits

0xd799,	// (0x00088e28) main_myfav_hc_pane_t3

0x7754,	// (0x00082de3) main_myfav_hc_pane_t4_ParamLimits

0x7754,	// (0x00082de3) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0008afcc) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0008afcc) main_myfav_hc_pane_t

0xcd11,	// (0x000883a0) bg_myfav_hc_instruction_pane_g1

0xd7ab,	// (0x00088e3a) cell_myfav_contact_pane_g1_ParamLimits

0xd7ab,	// (0x00088e3a) cell_myfav_contact_pane_g1

0xd7ab,	// (0x00088e3a) cell_myfav_contact_pane_g2_ParamLimits

0xd7ab,	// (0x00088e3a) cell_myfav_contact_pane_g2

0xd7b7,	// (0x00088e46) cell_myfav_contact_pane_g3_ParamLimits

0xd7b7,	// (0x00088e46) cell_myfav_contact_pane_g3

0xcff9,	// (0x00088688) cell_myfav_contact_pane_g4_ParamLimits

0xcff9,	// (0x00088688) cell_myfav_contact_pane_g4

0xd7c4,	// (0x00088e53) cell_myfav_contact_pane_g5_ParamLimits

0xd7c4,	// (0x00088e53) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0008afd7) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0008afd7) cell_myfav_contact_pane_g

0x7725,	// (0x00082db4) main_myfav_hc_pane_g3_ParamLimits

0x7725,	// (0x00082db4) main_myfav_hc_pane_g3

0x216e,	// (0x0007d7fd) popup_adpt_find_window

0x777e,	// (0x00082e0d) afind_page_pane_ParamLimits

0x777e,	// (0x00082e0d) afind_page_pane

0x778b,	// (0x00082e1a) aid_size_cell_afind_ParamLimits

0x778b,	// (0x00082e1a) aid_size_cell_afind

0x77a5,	// (0x00082e34) bg_popup_sub_pane_cp09_ParamLimits

0x77a5,	// (0x00082e34) bg_popup_sub_pane_cp09

0x77b2,	// (0x00082e41) find_pane_cp01_ParamLimits

0x77b2,	// (0x00082e41) find_pane_cp01

0xd7d0,	// (0x00088e5f) grid_afind_control_pane_ParamLimits

0xd7d0,	// (0x00088e5f) grid_afind_control_pane

0x77bf,	// (0x00082e4e) grid_afind_pane_ParamLimits

0x77bf,	// (0x00082e4e) grid_afind_pane

0x77db,	// (0x00082e6a) cell_afind_pane_ParamLimits

0x77db,	// (0x00082e6a) cell_afind_pane

0xcd11,	// (0x000883a0) afind_page_pane_g1

0x7823,	// (0x00082eb2) afind_page_pane_g2

0x782c,	// (0x00082ebb) afind_page_pane_g3

0x0002,

0xf953,	// (0x0008afe2) afind_page_pane_g

0x7835,	// (0x00082ec4) afind_page_pane_t1

0xd7e4,	// (0x00088e73) cell_afind_grid_control_pane_ParamLimits

0xd7e4,	// (0x00088e73) cell_afind_grid_control_pane

0xd673,	// (0x00088d02) bg_button_pane_cp69_ParamLimits

0xd673,	// (0x00088d02) bg_button_pane_cp69

0x7855,	// (0x00082ee4) cell_afind_pane_g1_ParamLimits

0x7855,	// (0x00082ee4) cell_afind_pane_g1

0x7862,	// (0x00082ef1) cell_afind_pane_t1_ParamLimits

0x7862,	// (0x00082ef1) cell_afind_pane_t1

0xaacb,	// (0x0008615a) bg_button_pane_cp72

0xd7f3,	// (0x00088e82) cell_afind_grid_control_pane_g1

0x4d26,	// (0x000803b5) aid_image_placing_area_ParamLimits

0x4d26,	// (0x000803b5) aid_image_placing_area

0xd32a,	// (0x000889b9) field_vitu_entry_pane_g1_ParamLimits

0xd32a,	// (0x000889b9) field_vitu_entry_pane_g1

0xd336,	// (0x000889c5) field_vitu_entry_pane_g2_ParamLimits

0xd336,	// (0x000889c5) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0008ae8f) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0008ae8f) field_vitu_entry_pane_g

0x68da,	// (0x00081f69) cell_vitu_itu_pane_g1_ParamLimits

0x691c,	// (0x00081fab) cell_vitu_itu_pane_t3_ParamLimits

0x691c,	// (0x00081fab) cell_vitu_itu_pane_t3

0xd612,	// (0x00088ca1) mp4_progress_pane_t1_ParamLimits

0xd62b,	// (0x00088cba) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0008af28) mp4_progress_pane_t_ParamLimits

0xd644,	// (0x00088cd3) mup_progress_pane_cp04_ParamLimits

0x7768,	// (0x00082df7) main_myfav_hc_pane_t5_ParamLimits

0x7768,	// (0x00082df7) main_myfav_hc_pane_t5

0x0d4b,	// (0x0007c3da) aid_zoom_text_primary

0x216e,	// (0x0007d7fd) popup_adpt_find_window_ParamLimits

0xacca,	// (0x00086359) main_cam_set_pane

0x71f0,	// (0x0008287f) cam4_zoom_pane_ParamLimits

0x71f0,	// (0x0008287f) cam4_zoom_pane

0x7874,	// (0x00082f03) main_cam_set_pane_g1_ParamLimits

0x7874,	// (0x00082f03) main_cam_set_pane_g1

0x7882,	// (0x00082f11) main_cam_set_pane_g2_ParamLimits

0x7882,	// (0x00082f11) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0008afe9) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0008afe9) main_cam_set_pane_g

0x788e,	// (0x00082f1d) main_cam_set_pane_t1_ParamLimits

0x788e,	// (0x00082f1d) main_cam_set_pane_t1

0x78aa,	// (0x00082f39) main_cset_listscroll_pane_ParamLimits

0x78aa,	// (0x00082f39) main_cset_listscroll_pane

0x78d5,	// (0x00082f64) main_cset_slider_pane_ParamLimits

0x78d5,	// (0x00082f64) main_cset_slider_pane

0xd804,	// (0x00088e93) main_cset_list_pane_ParamLimits

0xd804,	// (0x00088e93) main_cset_list_pane

0xd814,	// (0x00088ea3) scroll_pane_cp028

0x78f4,	// (0x00082f83) aid_area_touch_slider

0x7910,	// (0x00082f9f) cset_slider_pane

0x793a,	// (0x00082fc9) main_cset_slider_pane_g1

0x794f,	// (0x00082fde) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0008afee) main_cset_slider_pane_g

0xd84d,	// (0x00088edc) main_cset_slider_pane_t1

0x7a11,	// (0x000830a0) main_cset_slider_pane_t2

0x7a2b,	// (0x000830ba) main_cset_slider_pane_t3

0x7a45,	// (0x000830d4) main_cset_slider_pane_t4

0x7a5f,	// (0x000830ee) main_cset_slider_pane_t5

0x7a7d,	// (0x0008310c) main_cset_slider_pane_t6

0x7a94,	// (0x00083123) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0008b013) main_cset_slider_pane_t

0x7ba0,	// (0x0008322f) cset_list_set_pane_ParamLimits

0x7ba0,	// (0x0008322f) cset_list_set_pane

0x7bb6,	// (0x00083245) aid_position_infowindow_above

0x7bbe,	// (0x0008324d) aid_position_infowindow_below

0x7bc6,	// (0x00083255) cset_list_set_pane_g1_ParamLimits

0x7bc6,	// (0x00083255) cset_list_set_pane_g1

0x1178,	// (0x0007c807) cset_list_set_pane_g3_ParamLimits

0x1178,	// (0x0007c807) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0008b032) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0008b032) cset_list_set_pane_g

0x1187,	// (0x0007c816) cset_list_set_pane_t1_ParamLimits

0x1187,	// (0x0007c816) cset_list_set_pane_t1

0xacca,	// (0x00086359) list_highlight_pane_cp021_ParamLimits

0xacca,	// (0x00086359) list_highlight_pane_cp021

0xb63b,	// (0x00086cca) cset_slider_pane_g1

0xb64d,	// (0x00086cdc) cset_slider_pane_g2

0xb644,	// (0x00086cd3) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0008b037) cset_slider_pane_g

0x7bd2,	// (0x00083261) aid_area_touch_cam4_zoom

0x7bda,	// (0x00083269) cam4_zoom_cont_pane

0x7be2,	// (0x00083271) cam4_zoom_pane_g1

0x7bea,	// (0x00083279) cam4_zoom_pane_g2

0x7bf2,	// (0x00083281) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0008b03e) cam4_zoom_pane_g

0xdc74,	// (0x00089303) cam4_zoom_cont_pane_g1

0xdc7d,	// (0x0008930c) cam4_zoom_cont_pane_g2

0xdc86,	// (0x00089315) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0008b045) cam4_zoom_cont_pane_g

0x7014,	// (0x000826a3) call4_image_pane_ParamLimits

0x7014,	// (0x000826a3) call4_image_pane

0x7073,	// (0x00082702) call4_windows_conf_pane_ParamLimits

0x70b8,	// (0x00082747) popup_call4_audio_in_window_ParamLimits

0x70b8,	// (0x00082747) popup_call4_audio_in_window

0xa160,	// (0x000857ef) bg_popup_call2_act_pane_cp02

0xd67f,	// (0x00088d0e) call4_list_conf_pane

0xcd11,	// (0x000883a0) call4_image_pane_g1

0xcd11,	// (0x000883a0) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0008ad50) call4_image_pane_g

0xd8ed,	// (0x00088f7c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8ed,	// (0x00088f7c) list_single_graphic_popup_conf4_pane

0xa160,	// (0x000857ef) list_highlight_pane_cp022

0xd900,	// (0x00088f8f) list_single_graphic_popup_conf4_pane_g1

0xb20c,	// (0x0008689b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0008b04c) list_single_graphic_popup_conf4_pane_g

0xd908,	// (0x00088f97) list_single_graphic_popup_conf4_pane_t1

0x3135,	// (0x0007e7c4) popup_vtel_slider_window_ParamLimits

0x3135,	// (0x0007e7c4) popup_vtel_slider_window

0xd661,	// (0x00088cf0) dialer2_ne_pane_t2_ParamLimits

0xd661,	// (0x00088cf0) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0008af2d) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0008af2d) dialer2_ne_pane_t

0xacca,	// (0x00086359) bg_popup_sub_pane_cp010_ParamLimits

0xacca,	// (0x00086359) bg_popup_sub_pane_cp010

0x7bfa,	// (0x00083289) popup_vtel_slider_window_g1_ParamLimits

0x7bfa,	// (0x00083289) popup_vtel_slider_window_g1

0x7c06,	// (0x00083295) popup_vtel_slider_window_g2_ParamLimits

0x7c06,	// (0x00083295) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0008b051) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0008b051) popup_vtel_slider_window_g

0x7c4e,	// (0x000832dd) vtel_slider_pane_ParamLimits

0x7c4e,	// (0x000832dd) vtel_slider_pane

0x7c5d,	// (0x000832ec) vtel_slider_pane_g1_ParamLimits

0x7c5d,	// (0x000832ec) vtel_slider_pane_g1

0x7c6a,	// (0x000832f9) vtel_slider_pane_g2_ParamLimits

0x7c6a,	// (0x000832f9) vtel_slider_pane_g2

0x7c77,	// (0x00083306) vtel_slider_pane_g3_ParamLimits

0x7c77,	// (0x00083306) vtel_slider_pane_g3

0x7c5d,	// (0x000832ec) vtel_slider_pane_g4_ParamLimits

0x7c5d,	// (0x000832ec) vtel_slider_pane_g4

0x7c84,	// (0x00083313) vtel_slider_pane_g5_ParamLimits

0x7c84,	// (0x00083313) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0008b05a) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0008b05a) vtel_slider_pane_g

0xacca,	// (0x00086359) main_gallery2_pane

0x7444,	// (0x00082ad3) aid_size_row_itut2_dropdow_list_ParamLimits

0x7444,	// (0x00082ad3) aid_size_row_itut2_dropdow_list

0x74a4,	// (0x00082b33) grid_vitu2_function_top_pane_ParamLimits

0x74a4,	// (0x00082b33) grid_vitu2_function_top_pane

0x74fe,	// (0x00082b8d) popup_vitu2_dropdown_list_window_ParamLimits

0x74fe,	// (0x00082b8d) popup_vitu2_dropdown_list_window

0x751e,	// (0x00082bad) popup_vitu2_match_list_window

0x7c91,	// (0x00083320) cell_vitu2_function_top_pane_ParamLimits

0x7c91,	// (0x00083320) cell_vitu2_function_top_pane

0x7cab,	// (0x0008333a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7cab,	// (0x0008333a) cell_vitu2_function_top_pane_cp01

0x7cc7,	// (0x00083356) cell_vitu2_function_top_wide_pane_ParamLimits

0x7cc7,	// (0x00083356) cell_vitu2_function_top_wide_pane

0xacca,	// (0x00086359) bg_button_pane_cp012

0x7ce3,	// (0x00083372) cell_vitu2_function_top_pane_g1

0x7cf7,	// (0x00083386) bg_button_pane_cp013_ParamLimits

0x7cf7,	// (0x00083386) bg_button_pane_cp013

0x7d13,	// (0x000833a2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7d13,	// (0x000833a2) cell_vitu2_function_top_wide_pane_g1

0xe9ad,	// (0x0008a03c) bg_popup_sub_pane_cp20

0x7d2b,	// (0x000833ba) list_vitu2_match_list_pane

0xd6fa,	// (0x00088d89) bg_popup_sub_pane_cp20_g1

0xd702,	// (0x00088d91) bg_popup_sub_pane_cp20_g2

0xace9,	// (0x00086378) bg_popup_sub_pane_cp20_g3

0xd70a,	// (0x00088d99) bg_popup_sub_pane_cp20_g4

0xacb2,	// (0x00086341) bg_popup_sub_pane_cp20_g5

0xd91e,	// (0x00088fad) bg_popup_sub_pane_cp20_g6

0xd71a,	// (0x00088da9) bg_popup_sub_pane_cp20_g7

0xd722,	// (0x00088db1) bg_popup_sub_pane_cp20_g8

0xd72a,	// (0x00088db9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0008b065) bg_popup_sub_pane_cp20_g

0x7d43,	// (0x000833d2) list_vitu2_match_list_item_pane_ParamLimits

0x7d43,	// (0x000833d2) list_vitu2_match_list_item_pane

0x7d55,	// (0x000833e4) list_vitu2_match_list_item_pane_t1

0xa160,	// (0x000857ef) bg_popup_sub_pane_cp21

0xb134,	// (0x000867c3) grid_vitu2_dropdown_list_pane

0x7d6f,	// (0x000833fe) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7d6f,	// (0x000833fe) cell_vitu2_dropdown_list_char_pane

0x7d90,	// (0x0008341f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7d90,	// (0x0008341f) cell_vitu2_dropdown_list_ctrl_pane

0xd926,	// (0x00088fb5) cell_vitu2_dropdown_list_char_pane_g1

0xd92f,	// (0x00088fbe) cell_vitu2_dropdown_list_char_pane_g2

0xd938,	// (0x00088fc7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0008b082) cell_vitu2_dropdown_list_char_pane_g

0x7dbc,	// (0x0008344b) cell_vitu2_dropdown_list_char_pane_t1

0x7dca,	// (0x00083459) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7dca,	// (0x00083459) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7dda,	// (0x00083469) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7dda,	// (0x00083469) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7deb,	// (0x0008347a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7deb,	// (0x0008347a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7dfb,	// (0x0008348a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7dfb,	// (0x0008348a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf74,	// (0x00088603) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf74,	// (0x00088603) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0008b089) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0008b089) cell_vitu2_dropdown_list_ctrl_pane_g

0x7e17,	// (0x000834a6) aid_size_cell_gallery2_ParamLimits

0x7e17,	// (0x000834a6) aid_size_cell_gallery2

0x7e31,	// (0x000834c0) grid_gallery2_pane_ParamLimits

0x7e31,	// (0x000834c0) grid_gallery2_pane

0x7e48,	// (0x000834d7) scroll_pane_cp029_ParamLimits

0x7e48,	// (0x000834d7) scroll_pane_cp029

0x7e58,	// (0x000834e7) cell_gallery2_pane_ParamLimits

0x7e58,	// (0x000834e7) cell_gallery2_pane

0xd941,	// (0x00088fd0) cell_gallery2_pane_g2

0xe9bb,	// (0x0008a04a) cell_gallery2_pane_g3

0xd949,	// (0x00088fd8) cell_gallery2_pane_g4

0xd951,	// (0x00088fe0) cell_gallery2_pane_g5

0xaa79,	// (0x00086108) grid_highlight_pane_cp10

0x751e,	// (0x00082bad) popup_vitu2_match_list_window_ParamLimits

0x7532,	// (0x00082bc1) popup_vitu2_query_window_ParamLimits

0x7532,	// (0x00082bc1) popup_vitu2_query_window

0xa160,	// (0x000857ef) bg_vitu2_candi_button_pane

0xd926,	// (0x00088fb5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd92f,	// (0x00088fbe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd938,	// (0x00088fc7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x11e6,	// (0x0007c875) bg_button_pane_cp015

0x7ead,	// (0x0008353c) bg_button_pane_cp016

0x7ec0,	// (0x0008354f) bg_button_pane_cp017

0xc909,	// (0x00087f98) bg_popup_sub_pane_cp22

0xd959,	// (0x00088fe8) popup_vitu2_query_window_g1

0x1219,	// (0x0007c8a8) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0008b094) popup_vitu2_query_window_g

0x1236,	// (0x0007c8c5) popup_vitu2_query_window_t1_ParamLimits

0x1236,	// (0x0007c8c5) popup_vitu2_query_window_t1

0x1269,	// (0x0007c8f8) popup_vitu2_query_window_t2_ParamLimits

0x1269,	// (0x0007c8f8) popup_vitu2_query_window_t2

0x127b,	// (0x0007c90a) popup_vitu2_query_window_t3_ParamLimits

0x127b,	// (0x0007c90a) popup_vitu2_query_window_t3

0x7ee4,	// (0x00083573) popup_vitu2_query_window_t4_ParamLimits

0x7ee4,	// (0x00083573) popup_vitu2_query_window_t4

0x7f05,	// (0x00083594) popup_vitu2_query_window_t5_ParamLimits

0x7f05,	// (0x00083594) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0008b09b) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0008b09b) popup_vitu2_query_window_t

0xd7fc,	// (0x00088e8b) main_cset_text_pane

0x78f4,	// (0x00082f83) aid_area_touch_slider_ParamLimits

0x7910,	// (0x00082f9f) cset_slider_pane_ParamLimits

0x793a,	// (0x00082fc9) main_cset_slider_pane_g1_ParamLimits

0x794f,	// (0x00082fde) main_cset_slider_pane_g2_ParamLimits

0xd81d,	// (0x00088eac) main_cset_slider_pane_g3_ParamLimits

0xd81d,	// (0x00088eac) main_cset_slider_pane_g3

0x7964,	// (0x00082ff3) main_cset_slider_pane_g4_ParamLimits

0x7964,	// (0x00082ff3) main_cset_slider_pane_g4

0x7973,	// (0x00083002) main_cset_slider_pane_g5_ParamLimits

0x7973,	// (0x00083002) main_cset_slider_pane_g5

0x7981,	// (0x00083010) main_cset_slider_pane_g6_ParamLimits

0x7981,	// (0x00083010) main_cset_slider_pane_g6

0xf95f,	// (0x0008afee) main_cset_slider_pane_g_ParamLimits

0xd84d,	// (0x00088edc) main_cset_slider_pane_t1_ParamLimits

0x7a11,	// (0x000830a0) main_cset_slider_pane_t2_ParamLimits

0x7a2b,	// (0x000830ba) main_cset_slider_pane_t3_ParamLimits

0x7a45,	// (0x000830d4) main_cset_slider_pane_t4_ParamLimits

0x7a5f,	// (0x000830ee) main_cset_slider_pane_t5_ParamLimits

0x7a7d,	// (0x0008310c) main_cset_slider_pane_t6_ParamLimits

0x7a94,	// (0x00083123) main_cset_slider_pane_t7_ParamLimits

0x7ac2,	// (0x00083151) main_cset_slider_pane_t8_ParamLimits

0x7ac2,	// (0x00083151) main_cset_slider_pane_t8

0x7aea,	// (0x00083179) main_cset_slider_pane_t9_ParamLimits

0x7aea,	// (0x00083179) main_cset_slider_pane_t9

0x7b12,	// (0x000831a1) main_cset_slider_pane_t10_ParamLimits

0x7b12,	// (0x000831a1) main_cset_slider_pane_t10

0x7b3a,	// (0x000831c9) main_cset_slider_pane_t11_ParamLimits

0x7b3a,	// (0x000831c9) main_cset_slider_pane_t11

0x7b64,	// (0x000831f3) main_cset_slider_pane_t12_ParamLimits

0x7b64,	// (0x000831f3) main_cset_slider_pane_t12

0x7b81,	// (0x00083210) main_cset_slider_pane_t13_ParamLimits

0x7b81,	// (0x00083210) main_cset_slider_pane_t13

0xf984,	// (0x0008b013) main_cset_slider_pane_t_ParamLimits

0xa160,	// (0x000857ef) bg_popup_sub_pane_cp011

0xd965,	// (0x00088ff4) main_cset_text_pane_g1

0xd96d,	// (0x00088ffc) main_cset_text_pane_t1

0xd97b,	// (0x0008900a) main_cset_text_pane_t2

0xd989,	// (0x00089018) main_cset_text_pane_t3

0xd997,	// (0x00089026) main_cset_text_pane_t4

0xd9a5,	// (0x00089034) main_cset_text_pane_t5

0xd9b3,	// (0x00089042) main_cset_text_pane_t6

0xd9c1,	// (0x00089050) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0008b0aa) main_cset_text_pane_t

0xa160,	// (0x000857ef) main_cam4_burst_pane

0xa160,	// (0x000857ef) main_cam5_pane

0x7843,	// (0x00082ed2) bg_button_pane_cp019

0x784c,	// (0x00082edb) bg_button_pane_cp020

0xd829,	// (0x00088eb8) main_cset_slider_pane_g7_ParamLimits

0xd829,	// (0x00088eb8) main_cset_slider_pane_g7

0xd835,	// (0x00088ec4) main_cset_slider_pane_g8_ParamLimits

0xd835,	// (0x00088ec4) main_cset_slider_pane_g8

0x7995,	// (0x00083024) main_cset_slider_pane_g9_ParamLimits

0x7995,	// (0x00083024) main_cset_slider_pane_g9

0x79a1,	// (0x00083030) main_cset_slider_pane_g10_ParamLimits

0x79a1,	// (0x00083030) main_cset_slider_pane_g10

0x79ad,	// (0x0008303c) main_cset_slider_pane_g11_ParamLimits

0x79ad,	// (0x0008303c) main_cset_slider_pane_g11

0x79b9,	// (0x00083048) main_cset_slider_pane_g12_ParamLimits

0x79b9,	// (0x00083048) main_cset_slider_pane_g12

0x79c5,	// (0x00083054) main_cset_slider_pane_g13_ParamLimits

0x79c5,	// (0x00083054) main_cset_slider_pane_g13

0x79d1,	// (0x00083060) main_cset_slider_pane_g14_ParamLimits

0x79d1,	// (0x00083060) main_cset_slider_pane_g14

0x79dd,	// (0x0008306c) main_cset_slider_pane_g15_ParamLimits

0x79dd,	// (0x0008306c) main_cset_slider_pane_g15

0xd87b,	// (0x00088f0a) main_cset_slider_pane_t14_ParamLimits

0xd87b,	// (0x00088f0a) main_cset_slider_pane_t14

0xd8b4,	// (0x00088f43) main_cset_slider_pane_t15_ParamLimits

0xd8b4,	// (0x00088f43) main_cset_slider_pane_t15

0x7f26,	// (0x000835b5) aid_cam4_burst_size_cell_ParamLimits

0x7f26,	// (0x000835b5) aid_cam4_burst_size_cell

0x7f42,	// (0x000835d1) grid_cam4_burst_pane_ParamLimits

0x7f42,	// (0x000835d1) grid_cam4_burst_pane

0x7f72,	// (0x00083601) linegrid_cam4_burst_pane_ParamLimits

0x7f72,	// (0x00083601) linegrid_cam4_burst_pane

0x7f92,	// (0x00083621) scroll_pane_cp30_ParamLimits

0x7f92,	// (0x00083621) scroll_pane_cp30

0x7f9e,	// (0x0008362d) cell_cam4_burst_pane_ParamLimits

0x7f9e,	// (0x0008362d) cell_cam4_burst_pane

0xd9cf,	// (0x0008905e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9cf,	// (0x0008905e) linegrid_cam4_burst_pane_g1

0x7fda,	// (0x00083669) linegrid_cam4_burst_pane_g2_ParamLimits

0x7fda,	// (0x00083669) linegrid_cam4_burst_pane_g2

0xd9dc,	// (0x0008906b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9dc,	// (0x0008906b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0008b0b9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0008b0b9) linegrid_cam4_burst_pane_g

0x7feb,	// (0x0008367a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7feb,	// (0x0008367a) linegrid_cam4_burst_pane_g3_copy1

0xd9e9,	// (0x00089078) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e9,	// (0x00089078) linegrid_cam4_burst_pane_g4

0x8005,	// (0x00083694) linegrid_cam4_burst_pane_g5_ParamLimits

0x8005,	// (0x00083694) linegrid_cam4_burst_pane_g5

0x8016,	// (0x000836a5) linegrid_cam4_burst_pane_g6_ParamLimits

0x8016,	// (0x000836a5) linegrid_cam4_burst_pane_g6

0xd9f6,	// (0x00089085) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f6,	// (0x00089085) linegrid_cam4_burst_pane_g7

0x8027,	// (0x000836b6) cell_cam4_burst_pane_g1

0xda0f,	// (0x0008909e) main_cam5_pane_t1_ParamLimits

0xda0f,	// (0x0008909e) main_cam5_pane_t1

0xda21,	// (0x000890b0) main_cam5_pane_t2_ParamLimits

0xda21,	// (0x000890b0) main_cam5_pane_t2

0xda33,	// (0x000890c2) main_cam5_pane_t3_ParamLimits

0xda33,	// (0x000890c2) main_cam5_pane_t3

0xda45,	// (0x000890d4) main_cam5_pane_t4_ParamLimits

0xda45,	// (0x000890d4) main_cam5_pane_t4

0xda5d,	// (0x000890ec) main_cam5_pane_t5_ParamLimits

0xda5d,	// (0x000890ec) main_cam5_pane_t5

0xda71,	// (0x00089100) main_cam5_pane_t6_ParamLimits

0xda71,	// (0x00089100) main_cam5_pane_t6

0xda85,	// (0x00089114) main_cam5_pane_t7_ParamLimits

0xda85,	// (0x00089114) main_cam5_pane_t7

0xda97,	// (0x00089126) main_cam5_pane_t8_ParamLimits

0xda97,	// (0x00089126) main_cam5_pane_t8

0xdab3,	// (0x00089142) main_cam5_pane_t9_ParamLimits

0xdab3,	// (0x00089142) main_cam5_pane_t9

0xdac5,	// (0x00089154) main_cam5_pane_t10_ParamLimits

0xdac5,	// (0x00089154) main_cam5_pane_t10

0xdae3,	// (0x00089172) main_cam5_pane_t11_ParamLimits

0xdae3,	// (0x00089172) main_cam5_pane_t11

0xdaf5,	// (0x00089184) main_cam5_pane_t12_ParamLimits

0xdaf5,	// (0x00089184) main_cam5_pane_t12

0xdb0a,	// (0x00089199) main_cam5_pane_t13_ParamLimits

0xdb0a,	// (0x00089199) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0008b0c5) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0008b0c5) main_cam5_pane_t

0x2224,	// (0x0007d8b3) popup_scut_keymap_window_ParamLimits

0x2224,	// (0x0007d8b3) popup_scut_keymap_window

0x803a,	// (0x000836c9) aid_size_cell_brow_shortcut

0xaa79,	// (0x00086108) bg_popup_window_pane_cp010

0x8046,	// (0x000836d5) grid_scut_pane

0x8052,	// (0x000836e1) cell_scut_pane_ParamLimits

0x8052,	// (0x000836e1) cell_scut_pane

0x8069,	// (0x000836f8) cell_scut_pane_g1

0xdb27,	// (0x000891b6) cell_scut_pane_t1

0xdb36,	// (0x000891c5) cell_scut_pane_t2

0x8072,	// (0x00083701) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0008b0e0) cell_scut_pane_t

0x5f25,	// (0x000815b4) main_mup3_pane_g8_ParamLimits

0x5f25,	// (0x000815b4) main_mup3_pane_g8

0x7452,	// (0x00082ae1) area_vitu2_query_pane_ParamLimits

0x7452,	// (0x00082ae1) area_vitu2_query_pane

0x11f8,	// (0x0007c887) input_focus_pane_cp08

0xdb45,	// (0x000891d4) area_vitu2_query_pane_g1

0x12f9,	// (0x0007c988) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0008b0e7) area_vitu2_query_pane_g

0x8080,	// (0x0008370f) area_vitu2_query_pane_t1_ParamLimits

0x8080,	// (0x0008370f) area_vitu2_query_pane_t1

0x8094,	// (0x00083723) area_vitu2_query_pane_t2_ParamLimits

0x8094,	// (0x00083723) area_vitu2_query_pane_t2

0x130a,	// (0x0007c999) area_vitu2_query_pane_t3_ParamLimits

0x130a,	// (0x0007c999) area_vitu2_query_pane_t3

0x1332,	// (0x0007c9c1) area_vitu2_query_pane_t4_ParamLimits

0x1332,	// (0x0007c9c1) area_vitu2_query_pane_t4

0x135a,	// (0x0007c9e9) area_vitu2_query_pane_t5_ParamLimits

0x135a,	// (0x0007c9e9) area_vitu2_query_pane_t5

0x1382,	// (0x0007ca11) area_vitu2_query_pane_t6_ParamLimits

0x1382,	// (0x0007ca11) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0008b0ec) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0008b0ec) area_vitu2_query_pane_t

0x80a8,	// (0x00083737) bg_button_pane_cp018

0x80b6,	// (0x00083745) bg_button_pane_cp021

0x13ce,	// (0x0007ca5d) bg_button_pane_cp022

0x13df,	// (0x0007ca6e) input_focus_pane_cp09

0xb348,	// (0x000869d7) aid_size_touch_mv_arrow_left

0xb371,	// (0x00086a00) aid_size_touch_mv_arrow_right

0x79f5,	// (0x00083084) main_cset_slider_pane_g16_ParamLimits

0x79f5,	// (0x00083084) main_cset_slider_pane_g16

0x7a03,	// (0x00083092) main_cset_slider_pane_g17_ParamLimits

0x7a03,	// (0x00083092) main_cset_slider_pane_g17

0x8027,	// (0x000836b6) cell_cam4_burst_pane_g1_ParamLimits

0xa160,	// (0x000857ef) compa_mode_pane

0x7c12,	// (0x000832a1) popup_vtel_slider_window_g3_ParamLimits

0x7c12,	// (0x000832a1) popup_vtel_slider_window_g3

0x7c26,	// (0x000832b5) popup_vtel_slider_window_g4_ParamLimits

0x7c26,	// (0x000832b5) popup_vtel_slider_window_g4

0x7c3a,	// (0x000832c9) popup_vtel_slider_window_t1_ParamLimits

0x7c3a,	// (0x000832c9) popup_vtel_slider_window_t1

0xa160,	// (0x000857ef) main_cl_pane

0x5238,	// (0x000808c7) popup_imed_adjust2_window_ParamLimits

0xc909,	// (0x00087f98) bg_tb_trans_pane_cp05_ParamLimits

0xd25f,	// (0x000888ee) popup_imed_adjust2_window_g1_ParamLimits

0xd26e,	// (0x000888fd) popup_imed_adjust2_window_g2_ParamLimits

0xd26e,	// (0x000888fd) popup_imed_adjust2_window_g2

0xd27a,	// (0x00088909) popup_imed_adjust2_window_g3_ParamLimits

0xd27a,	// (0x00088909) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0008ae53) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0008ae53) popup_imed_adjust2_window_g

0xd286,	// (0x00088915) popup_imed_adjust2_window_t1_ParamLimits

0xd29e,	// (0x0008892d) slider_imed_adjust_pane_ParamLimits

0xd2b2,	// (0x00088941) slider_imed_adjust_pane_g1_ParamLimits

0xd2c2,	// (0x00088951) slider_imed_adjust_pane_g2_ParamLimits

0xd2d2,	// (0x00088961) slider_imed_adjust_pane_g3_ParamLimits

0xd2e3,	// (0x00088972) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0008ae5a) slider_imed_adjust_pane_g_ParamLimits

0x7199,	// (0x00082828) aid_touch_area_cam4_ParamLimits

0x7199,	// (0x00082828) aid_touch_area_cam4

0x71a9,	// (0x00082838) battery_pane_cp01

0x7230,	// (0x000828bf) main_camera4_pane_g6_ParamLimits

0x7230,	// (0x000828bf) main_camera4_pane_g6

0x724e,	// (0x000828dd) main_camera4_pane_t2_ParamLimits

0x724e,	// (0x000828dd) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0008af61) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0008af61) main_camera4_pane_t

0x72d5,	// (0x00082964) aid_touch_area_vid4_ParamLimits

0x72d5,	// (0x00082964) aid_touch_area_vid4

0x7315,	// (0x000829a4) main_video4_pane_g5_ParamLimits

0x7315,	// (0x000829a4) main_video4_pane_g5

0x7339,	// (0x000829c8) vid4_progress_pane_ParamLimits

0x7339,	// (0x000829c8) vid4_progress_pane

0xd841,	// (0x00088ed0) main_cset_slider_pane_g18_ParamLimits

0xd841,	// (0x00088ed0) main_cset_slider_pane_g18

0xda03,	// (0x00089092) cell_cam4_burst_pane_g2_ParamLimits

0xda03,	// (0x00089092) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0008b0c0) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0008b0c0) cell_cam4_burst_pane_g

0x80c2,	// (0x00083751) bg_cl_pane_ParamLimits

0x80c2,	// (0x00083751) bg_cl_pane

0x80ce,	// (0x0008375d) cl_header_pane_ParamLimits

0x80ce,	// (0x0008375d) cl_header_pane

0x80da,	// (0x00083769) cl_listscroll_pane_ParamLimits

0x80da,	// (0x00083769) cl_listscroll_pane

0xdb51,	// (0x000891e0) bg_cl_pane_g1

0xdb59,	// (0x000891e8) bg_cl_pane_g2

0xdb61,	// (0x000891f0) bg_cl_pane_g3

0xdb69,	// (0x000891f8) bg_cl_pane_g4

0xdb71,	// (0x00089200) bg_cl_pane_g5

0xdb79,	// (0x00089208) bg_cl_pane_g6

0xdb81,	// (0x00089210) bg_cl_pane_g7

0xdb89,	// (0x00089218) bg_cl_pane_g8

0xdb91,	// (0x00089220) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0008b0fb) bg_cl_pane_g

0x80e6,	// (0x00083775) aid_height_cl_leading_ParamLimits

0x80e6,	// (0x00083775) aid_height_cl_leading

0x80f2,	// (0x00083781) aid_height_cl_text_ParamLimits

0x80f2,	// (0x00083781) aid_height_cl_text

0xe9ad,	// (0x0008a03c) bg_cl_header_pane_ParamLimits

0xe9ad,	// (0x0008a03c) bg_cl_header_pane

0x810a,	// (0x00083799) cl_header_pane_g1_ParamLimits

0x810a,	// (0x00083799) cl_header_pane_g1

0x8117,	// (0x000837a6) cl_header_pane_t1_ParamLimits

0x8117,	// (0x000837a6) cl_header_pane_t1

0xdb99,	// (0x00089228) cl_list_pane

0xd814,	// (0x00088ea3) hc_scroll_pane_cp01

0xacb2,	// (0x00086341) bg_cl_header_pane_g1

0xd6fa,	// (0x00088d89) bg_cl_header_pane_g2

0xace9,	// (0x00086378) bg_cl_header_pane_g3

0xd70a,	// (0x00088d99) bg_cl_header_pane_g4

0xd702,	// (0x00088d91) bg_cl_header_pane_g5

0xd91e,	// (0x00088fad) bg_cl_header_pane_g6

0xd722,	// (0x00088db1) bg_cl_header_pane_g7

0xd72a,	// (0x00088db9) bg_cl_header_pane_g8

0xd71a,	// (0x00088da9) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0008b10e) bg_cl_header_pane_g

0x8129,	// (0x000837b8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8129,	// (0x000837b8) hc_cl_list_double_graphic_heading_pane

0x813a,	// (0x000837c9) hc_cl_list_single_graphic_pane_ParamLimits

0x813a,	// (0x000837c9) hc_cl_list_single_graphic_pane

0x8153,	// (0x000837e2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8153,	// (0x000837e2) hc_cl_list_single_graphic_pane_g1

0x815f,	// (0x000837ee) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x815f,	// (0x000837ee) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0008b121) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0008b121) hc_cl_list_single_graphic_pane_g

0x8173,	// (0x00083802) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8173,	// (0x00083802) hc_cl_list_single_graphic_pane_t1

0x8153,	// (0x000837e2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8153,	// (0x000837e2) hc_cl_list_double_graphic_heading_pane_g1

0x8188,	// (0x00083817) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8188,	// (0x00083817) hc_cl_list_double_graphic_heading_pane_g2

0x819c,	// (0x0008382b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x819c,	// (0x0008382b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0008b126) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0008b126) hc_cl_list_double_graphic_heading_pane_g

0x81b0,	// (0x0008383f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x81b0,	// (0x0008383f) hc_cl_list_double_graphic_heading_pane_t1

0x81c5,	// (0x00083854) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x81c5,	// (0x00083854) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0008b12d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0008b12d) hc_cl_list_double_graphic_heading_pane_t

0x81e2,	// (0x00083871) vid4_progress_pane_g1

0x81f2,	// (0x00083881) vid4_progress_pane_g2

0x8202,	// (0x00083891) vid4_progress_pane_g3

0x8214,	// (0x000838a3) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0008b132) vid4_progress_pane_g

0x822c,	// (0x000838bb) vid4_progress_pane_t1

0x8242,	// (0x000838d1) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0008b13d) vid4_progress_pane_t

0x826c,	// (0x000838fb) wait_bar_pane_cp07

0xcb04,	// (0x00088193) blid_firmament_pane_ParamLimits

0xcb47,	// (0x000881d6) popup_blid_sat_info2_window_g1

0xcb6b,	// (0x000881fa) popup_blid_sat_info2_window_t3

0xcb79,	// (0x00088208) popup_blid_sat_info2_window_t4

0xcb87,	// (0x00088216) popup_blid_sat_info2_window_t5

0xcb95,	// (0x00088224) popup_blid_sat_info2_window_t6

0xcba5,	// (0x00088234) popup_blid_sat_info2_window_t7

0xcbb3,	// (0x00088242) popup_blid_sat_info2_window_t8

0xcbc1,	// (0x00088250) popup_blid_sat_info2_window_t9

0xcbcf,	// (0x0008825e) popup_blid_sat_info2_window_t10

0xcc91,	// (0x00088320) aid_firma_cardinal_ParamLimits

0xcca5,	// (0x00088334) blid_firmament_pane_t1_ParamLimits

0xccbc,	// (0x0008834b) blid_firmament_pane_t2_ParamLimits

0xccd3,	// (0x00088362) blid_firmament_pane_t3_ParamLimits

0xccea,	// (0x00088379) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0008ad47) blid_firmament_pane_t_ParamLimits

0xcd01,	// (0x00088390) blid_sat_info_pane_ParamLimits

0xacca,	// (0x00086359) main_cam_set_pane_ParamLimits

0x66fc,	// (0x00081d8b) aid_size_cell_colour_35_ParamLimits

0x6716,	// (0x00081da5) aid_size_cell_colour_112_ParamLimits

0x672d,	// (0x00081dbc) aid_size_cell_effect_ParamLimits

0xacca,	// (0x00086359) bg_tb_trans_pane_cp02_ParamLimits

0xafe1,	// (0x00086670) heading_imed_pane_ParamLimits

0x6747,	// (0x00081dd6) listscroll_imed_pane_ParamLimits

0xbf23,	// (0x000875b2) popup_call2_audio_first_window_g5_ParamLimits

0xbf23,	// (0x000875b2) popup_call2_audio_first_window_g5

0x6e8d,	// (0x0008251c) aid_size_touch_image3_arrow_left_ParamLimits

0x6e8d,	// (0x0008251c) aid_size_touch_image3_arrow_left

0x6ea3,	// (0x00082532) aid_size_touch_image3_arrow_right_ParamLimits

0x6ea3,	// (0x00082532) aid_size_touch_image3_arrow_right

0x8257,	// (0x000838e6) vid4_progress_pane_t3

0x69e5,	// (0x00082074) main_hwr_training_symbol_option_pane_ParamLimits

0x69e5,	// (0x00082074) main_hwr_training_symbol_option_pane

0xd54c,	// (0x00088bdb) popup_hwr_training_preview_window_ParamLimits

0xd54c,	// (0x00088bdb) popup_hwr_training_preview_window

0x6a46,	// (0x000820d5) hwr_training_navi_pane_g5_ParamLimits

0x6a46,	// (0x000820d5) hwr_training_navi_pane_g5

0xd6e8,	// (0x00088d77) popup_char_count_window

0xe9ad,	// (0x0008a03c) bg_popup_sub_pane_cp20_ParamLimits

0x7d2b,	// (0x000833ba) list_vitu2_match_list_pane_ParamLimits

0x7d37,	// (0x000833c6) vitu2_page_scroll_pane_ParamLimits

0x7d37,	// (0x000833c6) vitu2_page_scroll_pane

0xdba2,	// (0x00089231) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdba2,	// (0x00089231) list_single_hwr_training_symbol_option_pane

0xdbb5,	// (0x00089244) list_single_hwr_training_symbol_option_pane_g1

0xdbbd,	// (0x0008924c) list_single_hwr_training_symbol_option_pane_t1

0xdbcb,	// (0x0008925a) bg_button_pane_cp023

0xdbd4,	// (0x00089263) bg_button_pane_cp024

0x82a2,	// (0x00083931) vitu2_page_scroll_pane_g1

0x82aa,	// (0x00083939) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0008b144) vitu2_page_scroll_pane_g

0x82b2,	// (0x00083941) vitu2_page_scroll_pane_t1

0xca64,	// (0x000880f3) popup_char_count_window_g1

0xdc07,	// (0x00089296) popup_char_count_window_g2

0xdc10,	// (0x0008929f) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0008b149) popup_char_count_window_g

0xdc19,	// (0x000892a8) popup_char_count_window_t1

0xa160,	// (0x000857ef) main_vded2_pane

0xd24b,	// (0x000888da) aid_size_cell_imed_line

0xd255,	// (0x000888e4) grid_imed_line_width_pane

0x73a7,	// (0x00082a36) vid4_indicators_pane_g4

0xdc27,	// (0x000892b6) cell_imed_line_width_pane_ParamLimits

0xdc27,	// (0x000892b6) cell_imed_line_width_pane

0xdc3b,	// (0x000892ca) cell_imed_line_width_pane_g1

0xd1b4,	// (0x00088843) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0008b150) cell_imed_line_width_pane_g

0x82c1,	// (0x00083950) main_vded2_pane_g1_ParamLimits

0x82c1,	// (0x00083950) main_vded2_pane_g1

0x82ce,	// (0x0008395d) main_vded2_pane_g2_ParamLimits

0x82ce,	// (0x0008395d) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0008b155) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0008b155) main_vded2_pane_g

0x82dc,	// (0x0008396b) vded2_slider_pane_ParamLimits

0x82dc,	// (0x0008396b) vded2_slider_pane

0x82e9,	// (0x00083978) aid_size_touch_vded2_end

0x82f3,	// (0x00083982) aid_size_touch_vded2_playhead

0xdc44,	// (0x000892d3) aid_size_touch_vded2_start

0xdc4c,	// (0x000892db) vded2_slider_bg_pane

0xdc55,	// (0x000892e4) vded2_slider_pane_g1

0xdc5e,	// (0x000892ed) vded2_slider_pane_g2

0x82fb,	// (0x0008398a) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0008b15a) vded2_slider_pane_g

0xdc8f,	// (0x0008931e) vded2_slider_bg_pane_g1

0xdc98,	// (0x00089327) vded2_slider_bg_pane_g2

0xdca1,	// (0x00089330) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0008b161) vded2_slider_bg_pane_g

0x4a90,	// (0x0008011f) aid_postcard_touch_down_pane_ParamLimits

0x4a90,	// (0x0008011f) aid_postcard_touch_down_pane

0x4aa0,	// (0x0008012f) aid_postcard_touch_up_pane_ParamLimits

0x4aa0,	// (0x0008012f) aid_postcard_touch_up_pane

0xa160,	// (0x000857ef) main_blid2_pane

0x51c3,	// (0x00080852) popup_blid2_search_window

0xa160,	// (0x000857ef) blid2_gps_pane

0xa160,	// (0x000857ef) blid2_navig_pane

0xa160,	// (0x000857ef) blid2_search_pane

0xa160,	// (0x000857ef) blid2_tripm_pane

0x8304,	// (0x00083993) blid2_search_pane_g1_ParamLimits

0x8304,	// (0x00083993) blid2_search_pane_g1

0x8314,	// (0x000839a3) blid2_search_pane_t1_ParamLimits

0x8314,	// (0x000839a3) blid2_search_pane_t1

0x8326,	// (0x000839b5) aid_size_cell_blid2_gps_ParamLimits

0x8326,	// (0x000839b5) aid_size_cell_blid2_gps

0x8336,	// (0x000839c5) blid2_gps_pane_g1_ParamLimits

0x8336,	// (0x000839c5) blid2_gps_pane_g1

0x8342,	// (0x000839d1) grid_blid2_satellite_pane_ParamLimits

0x8342,	// (0x000839d1) grid_blid2_satellite_pane

0x8352,	// (0x000839e1) blid2_navig_pane_g1_ParamLimits

0x8352,	// (0x000839e1) blid2_navig_pane_g1

0x835e,	// (0x000839ed) blid2_navig_pane_t1_ParamLimits

0x835e,	// (0x000839ed) blid2_navig_pane_t1

0x8370,	// (0x000839ff) blid2_navig_pane_t2_ParamLimits

0x8370,	// (0x000839ff) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0008b168) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0008b168) blid2_navig_pane_t

0x8382,	// (0x00083a11) blid2_navig_ring_pane_ParamLimits

0x8382,	// (0x00083a11) blid2_navig_ring_pane

0x8392,	// (0x00083a21) blid2_speed_pane_ParamLimits

0x8392,	// (0x00083a21) blid2_speed_pane

0x839e,	// (0x00083a2d) blid2_tripm_pane_g1_ParamLimits

0x839e,	// (0x00083a2d) blid2_tripm_pane_g1

0x83ae,	// (0x00083a3d) blid2_tripm_pane_g2_ParamLimits

0x83ae,	// (0x00083a3d) blid2_tripm_pane_g2

0x83ba,	// (0x00083a49) blid2_tripm_pane_g3_ParamLimits

0x83ba,	// (0x00083a49) blid2_tripm_pane_g3

0x83c6,	// (0x00083a55) blid2_tripm_pane_g4_ParamLimits

0x83c6,	// (0x00083a55) blid2_tripm_pane_g4

0x83d2,	// (0x00083a61) blid2_tripm_pane_g5_ParamLimits

0x83d2,	// (0x00083a61) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0008b16d) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0008b16d) blid2_tripm_pane_g

0x83ee,	// (0x00083a7d) blid2_tripm_pane_t1_ParamLimits

0x83ee,	// (0x00083a7d) blid2_tripm_pane_t1

0x8402,	// (0x00083a91) blid2_tripm_pane_t2_ParamLimits

0x8402,	// (0x00083a91) blid2_tripm_pane_t2

0x8414,	// (0x00083aa3) blid2_tripm_pane_t3_ParamLimits

0x8414,	// (0x00083aa3) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0008b17a) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0008b17a) blid2_tripm_pane_t

0x8446,	// (0x00083ad5) cell_blid2_satellite_pane_ParamLimits

0x8446,	// (0x00083ad5) cell_blid2_satellite_pane

0x8460,	// (0x00083aef) cell_blid2_satellite_pane_g1

0xdcaa,	// (0x00089339) cell_blid2_satellite_pane_t1

0xcd11,	// (0x000883a0) blid2_speed_pane_g1

0xdcb8,	// (0x00089347) blid2_speed_pane_t1

0xdcc6,	// (0x00089355) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0008b183) blid2_speed_pane_t

0xcd11,	// (0x000883a0) blid2_navig_ring_pane_g1

0x8469,	// (0x00083af8) blid2_navig_ring_pane_g2

0x8471,	// (0x00083b00) blid2_navig_ring_pane_g3

0x8479,	// (0x00083b08) blid2_navig_ring_pane_g4

0x8481,	// (0x00083b10) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0008b188) blid2_navig_ring_pane_g

0xa160,	// (0x000857ef) bg_popup_window_pane_cp011

0xdcd4,	// (0x00089363) popup_blid2_search_window_g1

0xdcdc,	// (0x0008936b) popup_blid2_search_window_t1

0xdcea,	// (0x00089379) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0008b193) popup_blid2_search_window_t

0xabc1,	// (0x00086250) main_browser_pane_g1

0xa8b4,	// (0x00085f43) main_browser_pane_ParamLimits

0xacca,	// (0x00086359) bg_button_pane_cp011_ParamLimits

0x7616,	// (0x00082ca5) cell_vitu2_function_pane_g1_ParamLimits

0xc909,	// (0x00087f98) bg_popup_sub_pane_cp22_ParamLimits

0x11f8,	// (0x0007c887) input_focus_pane_cp08_ParamLimits

0x7ed3,	// (0x00083562) popup_vitu2_query_button_pane_ParamLimits

0x7ed3,	// (0x00083562) popup_vitu2_query_button_pane

0x120f,	// (0x0007c89e) popup_vitu2_query_input_button_pane

0xd959,	// (0x00088fe8) popup_vitu2_query_window_g1_ParamLimits

0x1219,	// (0x0007c8a8) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0008b094) popup_vitu2_query_window_g_ParamLimits

0xa160,	// (0x000857ef) bg_button_pane_cp026

0x8489,	// (0x00083b18) popup_vitu2_query_input_button_pane_g1

0xa160,	// (0x000857ef) bg_button_pane_cp025

0xdcf8,	// (0x00089387) popup_vitu2_query_button_pane_t1

0x5c21,	// (0x000812b0) main_mp3_pane_t6

0x5c31,	// (0x000812c0) popup_slider_window_cp01

0x7284,	// (0x00082913) cam4_battery_pane

0x7364,	// (0x000829f3) cam4_battery_pane_cp02

0x81da,	// (0x00083869) cam4_battery_pane_cp01

0x81da,	// (0x00083869) cam4_battery_pane_cp03

0xcd11,	// (0x000883a0) cam4_battery_pane_g1

0xd657,	// (0x00088ce6) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0008b198) cam4_battery_pane_g

0xcbdd,	// (0x0008826c) popup_blid_sat_info2_window_t11

0xb348,	// (0x000869d7) aid_size_touch_mv_arrow_left_ParamLimits

0xb371,	// (0x00086a00) aid_size_touch_mv_arrow_right_ParamLimits

0xb3cf,	// (0x00086a5e) navi_pane_g1_ParamLimits

0xb3db,	// (0x00086a6a) navi_pane_g2_ParamLimits

0xb409,	// (0x00086a98) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0008aa59) navi_pane_g_ParamLimits

0x4506,	// (0x0007fb95) navi_pane_mv_t1_ParamLimits

0x6753,	// (0x00081de2) grid_imed_effect_pane_ParamLimits

0x2ff5,	// (0x0007e684) aid_placing_vt_slider_lsc

0xab10,	// (0x0008619f) aid_placing_vt_slider_prt

0xacca,	// (0x00086359) bg_tb_trans_pane_cp01_ParamLimits

0xce94,	// (0x00088523) popup_image_details_window_g1_ParamLimits

0xcea7,	// (0x00088536) popup_image_details_window_g2_ParamLimits

0xcebc,	// (0x0008854b) popup_image_details_window_g3_ParamLimits

0xcebc,	// (0x0008854b) popup_image_details_window_g3

0xf6fd,	// (0x0008ad8c) popup_image_details_window_g_ParamLimits

0xced0,	// (0x0008855f) popup_image_details_window_t1_ParamLimits

0xcee2,	// (0x00088571) popup_image_details_window_t2_ParamLimits

0xcefb,	// (0x0008858a) popup_image_details_window_t3_ParamLimits

0xcf0f,	// (0x0008859e) popup_image_details_window_t4_ParamLimits

0xcf2a,	// (0x000885b9) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0008ad93) popup_image_details_window_t_ParamLimits

0x80fe,	// (0x0008378d) cl_header_name_pane_ParamLimits

0x80fe,	// (0x0008378d) cl_header_name_pane

0x8491,	// (0x00083b20) cl_header_name_pane_t1_ParamLimits

0x8491,	// (0x00083b20) cl_header_name_pane_t1

0x84a8,	// (0x00083b37) cl_header_name_pane_t2_ParamLimits

0x84a8,	// (0x00083b37) cl_header_name_pane_t2

0x84d2,	// (0x00083b61) cl_header_name_pane_t3_ParamLimits

0x84d2,	// (0x00083b61) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0008b19d) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0008b19d) cl_header_name_pane_t

0xb4a6,	// (0x00086b35) navi_pane_mv_g2_ParamLimits

0xd6c2,	// (0x00088d51) field_vitu2_entry_pane_g1_ParamLimits

0xd6ce,	// (0x00088d5d) field_vitu2_entry_pane_g2_ParamLimits

0xd6da,	// (0x00088d69) field_vitu2_entry_pane_g3_ParamLimits

0xd6da,	// (0x00088d69) field_vitu2_entry_pane_g3

0xf904,	// (0x0008af93) field_vitu2_entry_pane_g_ParamLimits

0x75aa,	// (0x00082c39) cell_vitu2_itu_pane_g1_ParamLimits

0x75bc,	// (0x00082c4b) cell_vitu2_itu_pane_g2_ParamLimits

0x75bc,	// (0x00082c4b) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0008af9f) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0008af9f) cell_vitu2_itu_pane_g

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp05_ParamLimits

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp05

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp03

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp04

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp10_ParamLimits

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp10

0x13ce,	// (0x0007ca5d) bg_vkb2_func_pane_cp08

0x80a8,	// (0x00083737) bg_vkb2_func_pane_cp06

0x80b6,	// (0x00083745) bg_vkb2_func_pane_cp07

0xdbdd,	// (0x0008926c) bg_vkb2_func_pane_cp11_ParamLimits

0xdbdd,	// (0x0008926c) bg_vkb2_func_pane_cp11

0xdbf2,	// (0x00089281) bg_vkb2_func_pane_cp12_ParamLimits

0xdbf2,	// (0x00089281) bg_vkb2_func_pane_cp12

0xa160,	// (0x000857ef) bg_vkb2_func_pane_cp09

0xd6fa,	// (0x00088d89) bg_vkb2_func_pane_g1

0xace9,	// (0x00086378) bg_vkb2_func_pane_g2

0xd702,	// (0x00088d91) bg_vkb2_func_pane_g3

0xd70a,	// (0x00088d99) bg_vkb2_func_pane_g4

0xd91e,	// (0x00088fad) bg_vkb2_func_pane_g5

0xd722,	// (0x00088db1) bg_vkb2_func_pane_g6

0xd72a,	// (0x00088db9) bg_vkb2_func_pane_g7

0xd71a,	// (0x00088da9) bg_vkb2_func_pane_g8

0xacb2,	// (0x00086341) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0008b1a4) bg_vkb2_func_pane_g

0x83e0,	// (0x00083a6f) blid2_tripm_pane_g6_ParamLimits

0x83e0,	// (0x00083a6f) blid2_tripm_pane_g6

0xd60a,	// (0x00088c99) mp4_progress_pane_g1

0x843a,	// (0x00083ac9) blid2_tripm_values_pane_ParamLimits

0x843a,	// (0x00083ac9) blid2_tripm_values_pane

0x84f7,	// (0x00083b86) blid2_tripm_values_pane_t1

0x8505,	// (0x00083b94) blid2_tripm_values_pane_t2

0x8513,	// (0x00083ba2) blid2_tripm_values_pane_t3

0x8521,	// (0x00083bb0) blid2_tripm_values_pane_t4

0x852f,	// (0x00083bbe) blid2_tripm_values_pane_t5

0x853d,	// (0x00083bcc) blid2_tripm_values_pane_t6

0x854b,	// (0x00083bda) blid2_tripm_values_pane_t7

0x8559,	// (0x00083be8) blid2_tripm_values_pane_t8

0x8567,	// (0x00083bf6) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0008b1b7) blid2_tripm_values_pane_t

0x3035,	// (0x0007e6c4) call_video_pane_t1_ParamLimits

0x3056,	// (0x0007e6e5) call_video_pane_t2_ParamLimits

0xf253,	// (0x0008a8e2) call_video_pane_t_ParamLimits

0x0fb2,	// (0x0007c641) msg_header_pane_g1_ParamLimits

0xb680,	// (0x00086d0f) msg_header_pane_g2_ParamLimits

0xb680,	// (0x00086d0f) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0008aafc) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0008aafc) msg_header_pane_g

0xa8b4,	// (0x00085f43) main_clock2_pane_ParamLimits

0x64cd,	// (0x00081b5c) grid_clock2_toolbar_pane_ParamLimits

0x64cd,	// (0x00081b5c) grid_clock2_toolbar_pane

0x64cd,	// (0x00081b5c) listscroll_clock2_pane_ParamLimits

0x64cd,	// (0x00081b5c) listscroll_clock2_pane

0x657d,	// (0x00081c0c) main_clock2_pane_t3_ParamLimits

0x657d,	// (0x00081c0c) main_clock2_pane_t3

0x658f,	// (0x00081c1e) main_clock2_pane_t4_ParamLimits

0x658f,	// (0x00081c1e) main_clock2_pane_t4

0xdd06,	// (0x00089395) cell_clock2_toolbar_pane

0xdd0e,	// (0x0008939d) cell_clock2_toolbar_pane_cp01

0xdd0e,	// (0x0008939d) cell_clock2_toolbar_pane_cp02

0xdd16,	// (0x000893a5) cell_clock2_toolbar_pane_cp03

0xdd1e,	// (0x000893ad) list_clock2_pane

0xb2be,	// (0x0008694d) scroll_pane_cp10

0xdd26,	// (0x000893b5) list_single_clock2_pane_ParamLimits

0xdd26,	// (0x000893b5) list_single_clock2_pane

0xaa79,	// (0x00086108) list_highlight_pane_cp08

0xdd33,	// (0x000893c2) list_single_clock2_pane_t1

0xdd41,	// (0x000893d0) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0008b1ca) list_single_clock2_pane_t

0xa160,	// (0x000857ef) bg_button_pane_cp10

0xdd4f,	// (0x000893de) cell_clock2_toolbar_pane_g1

0x49f2,	// (0x00080081) aid_main_viewer_pane_g1_ParamLimits

0x49f2,	// (0x00080081) aid_main_viewer_pane_g1

0x49fe,	// (0x0008008d) aid_main_viewer_pane_g2_ParamLimits

0x49fe,	// (0x0008008d) aid_main_viewer_pane_g2

0x4a0a,	// (0x00080099) aid_main_viewer_pane_g3_ParamLimits

0x4a0a,	// (0x00080099) aid_main_viewer_pane_g3

0x4a1b,	// (0x000800aa) aid_main_viewer_pane_g4_ParamLimits

0x4a1b,	// (0x000800aa) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0008ab0d) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0008ab0d) aid_main_viewer_pane_g

0x519b,	// (0x0008082a) main_calc_pane_ParamLimits

0x51a8,	// (0x00080837) main_dialer2_pane_ParamLimits

0xa160,	// (0x000857ef) main_cam6_pane

0xa160,	// (0x000857ef) main_vid6_pane

0x64d9,	// (0x00081b68) listscroll_gen_pane_cp06_ParamLimits

0x64d9,	// (0x00081b68) listscroll_gen_pane_cp06

0x65a1,	// (0x00081c30) main_clock2_pane_t5_ParamLimits

0x65a1,	// (0x00081c30) main_clock2_pane_t5

0x65ee,	// (0x00081c7d) aid_call2_pane_cp10_ParamLimits

0x6600,	// (0x00081c8f) aid_call_pane_cp10_ParamLimits

0xb33c,	// (0x000869cb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb33c,	// (0x000869cb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6612,	// (0x00081ca1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6612,	// (0x00081ca1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb33c,	// (0x000869cb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0008ae48) popup_clock_analogue_window_cp10_g_ParamLimits

0x6628,	// (0x00081cb7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6e3a,	// (0x000824c9) cell_dialer2_keypad_pane_g2_ParamLimits

0x6e3a,	// (0x000824c9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0008af32) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0008af32) cell_dialer2_keypad_pane_g

0x6e56,	// (0x000824e5) cell_dialer2_keypad_pane_t1

0x78e1,	// (0x00082f70) main_cset_text2_pane_ParamLimits

0x78e1,	// (0x00082f70) main_cset_text2_pane

0xdb45,	// (0x000891d4) area_vitu2_query_pane_g1_ParamLimits

0x12f9,	// (0x0007c988) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0008b0e7) area_vitu2_query_pane_g_ParamLimits

0x13aa,	// (0x0007ca39) area_vitu2_query_pane_t7_ParamLimits

0x13aa,	// (0x0007ca39) area_vitu2_query_pane_t7

0x80a8,	// (0x00083737) bg_button_pane_cp018_ParamLimits

0x80b6,	// (0x00083745) bg_button_pane_cp021_ParamLimits

0x13ce,	// (0x0007ca5d) bg_button_pane_cp022_ParamLimits

0x13ce,	// (0x0007ca5d) bg_vkb2_func_pane_cp08_ParamLimits

0x80a8,	// (0x00083737) bg_vkb2_func_pane_cp06_ParamLimits

0x80b6,	// (0x00083745) bg_vkb2_func_pane_cp07_ParamLimits

0x13df,	// (0x0007ca6e) input_focus_pane_cp09_ParamLimits

0x8575,	// (0x00083c04) cam6_autofocus_pane_ParamLimits

0x8575,	// (0x00083c04) cam6_autofocus_pane

0x8597,	// (0x00083c26) cam6_image_uncrop_pane_ParamLimits

0x8597,	// (0x00083c26) cam6_image_uncrop_pane

0x85c4,	// (0x00083c53) cam6_indi_pane_ParamLimits

0x85c4,	// (0x00083c53) cam6_indi_pane

0x85de,	// (0x00083c6d) cam6_mode_pane_ParamLimits

0x85de,	// (0x00083c6d) cam6_mode_pane

0x85f2,	// (0x00083c81) cam6_timer_pane_ParamLimits

0x85f2,	// (0x00083c81) cam6_timer_pane

0x85fe,	// (0x00083c8d) cam6_zoom_pane_ParamLimits

0x85fe,	// (0x00083c8d) cam6_zoom_pane

0x8616,	// (0x00083ca5) cam6_mode_pane_g1_ParamLimits

0x8616,	// (0x00083ca5) cam6_mode_pane_g1

0x8622,	// (0x00083cb1) cam6_mode_pane_g2_ParamLimits

0x8622,	// (0x00083cb1) cam6_mode_pane_g2

0x862e,	// (0x00083cbd) cam6_mode_pane_g3_ParamLimits

0x862e,	// (0x00083cbd) cam6_mode_pane_g3

0x863a,	// (0x00083cc9) cam6_mode_pane_g4_ParamLimits

0x863a,	// (0x00083cc9) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0008b1cf) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0008b1cf) cam6_mode_pane_g

0xdc66,	// (0x000892f5) bg_tb_trans_pane_cp08_ParamLimits

0xdc66,	// (0x000892f5) bg_tb_trans_pane_cp08

0xdd57,	// (0x000893e6) cam6_battery_pane_ParamLimits

0xdd57,	// (0x000893e6) cam6_battery_pane

0xdd6d,	// (0x000893fc) cam6_indi_pane_g1_ParamLimits

0xdd6d,	// (0x000893fc) cam6_indi_pane_g1

0xdd7f,	// (0x0008940e) cam6_indi_pane_g2_ParamLimits

0xdd7f,	// (0x0008940e) cam6_indi_pane_g2

0xdd91,	// (0x00089420) cam6_indi_pane_g3_ParamLimits

0xdd91,	// (0x00089420) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0008b1d8) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0008b1d8) cam6_indi_pane_g

0xdda3,	// (0x00089432) cam6_indi_pane_t1_ParamLimits

0xdda3,	// (0x00089432) cam6_indi_pane_t1

0x73dc,	// (0x00082a6b) cam6_autofocus_pane_g1

0x73e4,	// (0x00082a73) cam6_autofocus_pane_g2

0x73ec,	// (0x00082a7b) cam6_autofocus_pane_g3

0x73f4,	// (0x00082a83) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0008b1df) cam6_autofocus_pane_g

0xdddb,	// (0x0008946a) cam6_timer_pane_g1

0xdde3,	// (0x00089472) cam6_timer_pane_t1

0xddf1,	// (0x00089480) cam6_zoom_cont_pane

0xddf9,	// (0x00089488) cam6_zoom_pane_g1

0xde01,	// (0x00089490) cam6_zoom_pane_g2

0x8646,	// (0x00083cd5) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0008b1e8) cam6_zoom_pane_g

0xcd11,	// (0x000883a0) cam6_battery_pane_g1

0xcd11,	// (0x000883a0) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0008ad50) cam6_battery_pane_g

0xde09,	// (0x00089498) cam6_zoom_cont_pane_g1

0xde12,	// (0x000894a1) cam6_zoom_cont_pane_g2

0xde1b,	// (0x000894aa) cam6_zoom_cont_pane_g3

0x0002,

0x093c,	// (0x0007bfcb) cam6_zoom_cont_pane_g

0x8663,	// (0x00083cf2) cam6_mode_pane_cp_ParamLimits

0x8663,	// (0x00083cf2) cam6_mode_pane_cp

0x85fe,	// (0x00083c8d) cam6_zoom_pane_cp_ParamLimits

0x85fe,	// (0x00083c8d) cam6_zoom_pane_cp

0x8677,	// (0x00083d06) vid6_image_uncrop_cif_pane_ParamLimits

0x8677,	// (0x00083d06) vid6_image_uncrop_cif_pane

0x86a3,	// (0x00083d32) vid6_image_uncrop_nhd_pane_ParamLimits

0x86a3,	// (0x00083d32) vid6_image_uncrop_nhd_pane

0x8597,	// (0x00083c26) vid6_image_uncrop_vga_pane_ParamLimits

0x8597,	// (0x00083c26) vid6_image_uncrop_vga_pane

0x86c0,	// (0x00083d4f) vid6_image_uncrop_wvga_pane_ParamLimits

0x86c0,	// (0x00083d4f) vid6_image_uncrop_wvga_pane

0x86dd,	// (0x00083d6c) vid6_indi_pane_ParamLimits

0x86dd,	// (0x00083d6c) vid6_indi_pane

0xdc66,	// (0x000892f5) bg_tb_trans_pane_cp09_ParamLimits

0xdc66,	// (0x000892f5) bg_tb_trans_pane_cp09

0xde33,	// (0x000894c2) cam6_battery_pane_cp_ParamLimits

0xde33,	// (0x000894c2) cam6_battery_pane_cp

0xde3f,	// (0x000894ce) vid6_indi_pane_g1_ParamLimits

0xde3f,	// (0x000894ce) vid6_indi_pane_g1

0xde51,	// (0x000894e0) vid6_indi_pane_g2_ParamLimits

0xde51,	// (0x000894e0) vid6_indi_pane_g2

0xde63,	// (0x000894f2) vid6_indi_pane_g3_ParamLimits

0xde63,	// (0x000894f2) vid6_indi_pane_g3

0xde78,	// (0x00089507) vid6_indi_pane_g4_ParamLimits

0xde78,	// (0x00089507) vid6_indi_pane_g4

0xde8d,	// (0x0008951c) vid6_indi_pane_g5_ParamLimits

0xde8d,	// (0x0008951c) vid6_indi_pane_g5

0x0004,

0x0943,	// (0x0007bfd2) vid6_indi_pane_g_ParamLimits

0x0943,	// (0x0007bfd2) vid6_indi_pane_g

0xdea7,	// (0x00089536) vid6_indi_pane_t1_ParamLimits

0xdea7,	// (0x00089536) vid6_indi_pane_t1

0xdebd,	// (0x0008954c) vid6_indi_pane_t2_ParamLimits

0xdebd,	// (0x0008954c) vid6_indi_pane_t2

0xdee5,	// (0x00089574) vid6_indi_pane_t3_ParamLimits

0xdee5,	// (0x00089574) vid6_indi_pane_t3

0xdf0d,	// (0x0008959c) vid6_indi_pane_t4_ParamLimits

0xdf0d,	// (0x0008959c) vid6_indi_pane_t4

0x0003,

0x094e,	// (0x0007bfdd) vid6_indi_pane_t_ParamLimits

0x094e,	// (0x0007bfdd) vid6_indi_pane_t

0xdf31,	// (0x000895c0) wait_bar_pane_cp08

0x8702,	// (0x00083d91) main_cset_text2_pane_t1_ParamLimits

0x8702,	// (0x00083d91) main_cset_text2_pane_t1

0x864e,	// (0x00083cdd) listscroll_gen_pane_cp06_t1_ParamLimits

0x864e,	// (0x00083cdd) listscroll_gen_pane_cp06_t1

0xa160,	// (0x000857ef) main_cam6_set_pane

0xcf74,	// (0x00088603) bg_tb_trans_pane_cp06_ParamLimits

0x728c,	// (0x0008291b) cam4_indicators_pane_g1_ParamLimits

0x729d,	// (0x0008292c) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0008af6f) cam4_indicators_pane_g_ParamLimits

0x72bb,	// (0x0008294a) cam4_indicators_pane_t1_ParamLimits

0xacca,	// (0x00086359) bg_tb_trans_pane_cp07_ParamLimits

0x736e,	// (0x000829fd) vid4_indicators_pane_g1_ParamLimits

0x7382,	// (0x00082a11) vid4_indicators_pane_g2_ParamLimits

0x7396,	// (0x00082a25) vid4_indicators_pane_g3_ParamLimits

0x73a7,	// (0x00082a36) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0008af81) vid4_indicators_pane_g_ParamLimits

0x73c5,	// (0x00082a54) vid4_indicators_pane_t1_ParamLimits

0x81e2,	// (0x00083871) vid4_progress_pane_g1_ParamLimits

0x81f2,	// (0x00083881) vid4_progress_pane_g2_ParamLimits

0x8202,	// (0x00083891) vid4_progress_pane_g3_ParamLimits

0x8214,	// (0x000838a3) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0008b132) vid4_progress_pane_g_ParamLimits

0x822c,	// (0x000838bb) vid4_progress_pane_t1_ParamLimits

0x8242,	// (0x000838d1) vid4_progress_pane_t2_ParamLimits

0x8257,	// (0x000838e6) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0008b13d) vid4_progress_pane_t_ParamLimits

0x826c,	// (0x000838fb) wait_bar_pane_cp07_ParamLimits

0x8735,	// (0x00083dc4) main_cam6_set_pane_g2_ParamLimits

0x8735,	// (0x00083dc4) main_cam6_set_pane_g2

0x8741,	// (0x00083dd0) main_cset6_listscroll_pane_ParamLimits

0x8741,	// (0x00083dd0) main_cset6_listscroll_pane

0x876c,	// (0x00083dfb) main_cset6_slider_pane_ParamLimits

0x876c,	// (0x00083dfb) main_cset6_slider_pane

0x8778,	// (0x00083e07) main_cset6_text2_pane_ParamLimits

0x8778,	// (0x00083e07) main_cset6_text2_pane

0xdf40,	// (0x000895cf) main_cset6_text_pane

0xdf48,	// (0x000895d7) main_cset_list_pane_copy1_ParamLimits

0xdf48,	// (0x000895d7) main_cset_list_pane_copy1

0xdf58,	// (0x000895e7) scroll_pane_cp028_copy1

0x878b,	// (0x00083e1a) cset_list_set_pane_copy1

0x879e,	// (0x00083e2d) aid_position_infowindow_above_copy1

0x87a6,	// (0x00083e35) aid_position_infowindow_below_copy1

0x87ae,	// (0x00083e3d) cset_list_set_pane_g1_copy1

0x1178,	// (0x0007c807) cset_list_set_pane_g3_copy1_ParamLimits

0x1178,	// (0x0007c807) cset_list_set_pane_g3_copy1

0x1187,	// (0x0007c816) cset_list_set_pane_t1_copy1_ParamLimits

0x1187,	// (0x0007c816) cset_list_set_pane_t1_copy1

0xacca,	// (0x00086359) list_highlight_pane_cp021_copy1_ParamLimits

0xacca,	// (0x00086359) list_highlight_pane_cp021_copy1

0xdf61,	// (0x000895f0) cset6_slider_pane_ParamLimits

0xdf61,	// (0x000895f0) cset6_slider_pane

0xdf8d,	// (0x0008961c) main_cset6_slider_pane_g1_ParamLimits

0xdf8d,	// (0x0008961c) main_cset6_slider_pane_g1

0x87b6,	// (0x00083e45) main_cset6_slider_pane_g2_ParamLimits

0x87b6,	// (0x00083e45) main_cset6_slider_pane_g2

0xdfb5,	// (0x00089644) main_cset6_slider_pane_g3_ParamLimits

0xdfb5,	// (0x00089644) main_cset6_slider_pane_g3

0x87de,	// (0x00083e6d) main_cset6_slider_pane_g4_ParamLimits

0x87de,	// (0x00083e6d) main_cset6_slider_pane_g4

0x87ea,	// (0x00083e79) main_cset6_slider_pane_g5_ParamLimits

0x87ea,	// (0x00083e79) main_cset6_slider_pane_g5

0xd829,	// (0x00088eb8) main_cset6_slider_pane_g7_ParamLimits

0xd829,	// (0x00088eb8) main_cset6_slider_pane_g7

0xd835,	// (0x00088ec4) main_cset6_slider_pane_g8_ParamLimits

0xd835,	// (0x00088ec4) main_cset6_slider_pane_g8

0x87f8,	// (0x00083e87) main_cset6_slider_pane_g9_ParamLimits

0x87f8,	// (0x00083e87) main_cset6_slider_pane_g9

0x8804,	// (0x00083e93) main_cset6_slider_pane_g10_ParamLimits

0x8804,	// (0x00083e93) main_cset6_slider_pane_g10

0x8810,	// (0x00083e9f) main_cset6_slider_pane_g11_ParamLimits

0x8810,	// (0x00083e9f) main_cset6_slider_pane_g11

0x881c,	// (0x00083eab) main_cset6_slider_pane_g12_ParamLimits

0x881c,	// (0x00083eab) main_cset6_slider_pane_g12

0x8828,	// (0x00083eb7) main_cset6_slider_pane_g13_ParamLimits

0x8828,	// (0x00083eb7) main_cset6_slider_pane_g13

0x8834,	// (0x00083ec3) main_cset6_slider_pane_g14_ParamLimits

0x8834,	// (0x00083ec3) main_cset6_slider_pane_g14

0x8840,	// (0x00083ecf) main_cset6_slider_pane_g15_ParamLimits

0x8840,	// (0x00083ecf) main_cset6_slider_pane_g15

0x8858,	// (0x00083ee7) main_cset6_slider_pane_g16_ParamLimits

0x8858,	// (0x00083ee7) main_cset6_slider_pane_g16

0x8866,	// (0x00083ef5) main_cset6_slider_pane_g17_ParamLimits

0x8866,	// (0x00083ef5) main_cset6_slider_pane_g17

0x0011,

0xfb60,	// (0x0008b1ef) main_cset6_slider_pane_g_ParamLimits

0xfb60,	// (0x0008b1ef) main_cset6_slider_pane_g

0xdfc1,	// (0x00089650) main_cset6_slider_pane_t1_ParamLimits

0xdfc1,	// (0x00089650) main_cset6_slider_pane_t1

0x888c,	// (0x00083f1b) main_cset6_slider_pane_t2_ParamLimits

0x888c,	// (0x00083f1b) main_cset6_slider_pane_t2

0x88b7,	// (0x00083f46) main_cset6_slider_pane_t3_ParamLimits

0x88b7,	// (0x00083f46) main_cset6_slider_pane_t3

0x88e2,	// (0x00083f71) main_cset6_slider_pane_t4_ParamLimits

0x88e2,	// (0x00083f71) main_cset6_slider_pane_t4

0x890d,	// (0x00083f9c) main_cset6_slider_pane_t5_ParamLimits

0x890d,	// (0x00083f9c) main_cset6_slider_pane_t5

0xe002,	// (0x00089691) main_cset6_slider_pane_t7_ParamLimits

0xe002,	// (0x00089691) main_cset6_slider_pane_t7

0x893a,	// (0x00083fc9) main_cset6_slider_pane_t8_ParamLimits

0x893a,	// (0x00083fc9) main_cset6_slider_pane_t8

0x895e,	// (0x00083fed) main_cset6_slider_pane_t9_ParamLimits

0x895e,	// (0x00083fed) main_cset6_slider_pane_t9

0x8982,	// (0x00084011) main_cset6_slider_pane_t10_ParamLimits

0x8982,	// (0x00084011) main_cset6_slider_pane_t10

0x89a6,	// (0x00084035) main_cset6_slider_pane_t11_ParamLimits

0x89a6,	// (0x00084035) main_cset6_slider_pane_t11

0xe038,	// (0x000896c7) main_cset6_slider_pane_t14_ParamLimits

0xe038,	// (0x000896c7) main_cset6_slider_pane_t14

0xe071,	// (0x00089700) main_cset6_slider_pane_t15_ParamLimits

0xe071,	// (0x00089700) main_cset6_slider_pane_t15

0x000b,

0xfb85,	// (0x0008b214) main_cset6_slider_pane_t_ParamLimits

0xfb85,	// (0x0008b214) main_cset6_slider_pane_t

0xdc74,	// (0x00089303) cset_slider_pane_g1_copy1

0xdc7d,	// (0x0008930c) cset_slider_pane_g2_copy1

0xdc86,	// (0x00089315) cset_slider_pane_g3_copy1

0xa160,	// (0x000857ef) bg_popup_sub_pane_cp011_copy1

0xe0aa,	// (0x00089739) main_cset_text_pane_g1_copy1

0xd96d,	// (0x00088ffc) main_cset_text_pane_t1_copy1

0xd97b,	// (0x0008900a) main_cset_text_pane_t2_copy1

0xd989,	// (0x00089018) main_cset_text_pane_t3_copy1

0xd997,	// (0x00089026) main_cset_text_pane_t4_copy1

0xd9a5,	// (0x00089034) main_cset_text_pane_t5_copy1

0xe0b2,	// (0x00089741) main_cset_text_pane_t6_copy1

0xe0c0,	// (0x0008974f) main_cset_text_pane_t7_copy1

0x89e5,	// (0x00084074) main_cset_text2_pane_t1_copy1

0xacca,	// (0x00086359) main_ncimui_pane

0x51f9,	// (0x00080888) popup_query_ncimui_window_ParamLimits

0x51f9,	// (0x00080888) popup_query_ncimui_window

0x5d8a,	// (0x00081419) field_cale_ev2_pane_g4_ParamLimits

0x5d8a,	// (0x00081419) field_cale_ev2_pane_g4

0x6b1a,	// (0x000821a9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6b1a,	// (0x000821a9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0008af09) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0008af09) cell_video_dialer_keypad_pane_g

0x6b32,	// (0x000821c1) cell_video_dialer_keypad_pane_t1

0xa160,	// (0x000857ef) bg_popup_window_pane_cp012

0xb18b,	// (0x0008681a) heading_pane_cp06

0xe0ec,	// (0x0008977b) ncim_query_content_pane

0xa160,	// (0x000857ef) bg_popup_heading_pane_cp01

0xe0f4,	// (0x00089783) ncim_heading_pane_t1

0xe102,	// (0x00089791) ncim_indicator_popup_pane

0xe114,	// (0x000897a3) ncim_query_button_pane

0xe128,	// (0x000897b7) ncim_query_content_pane_t1

0xe13a,	// (0x000897c9) ncim_query_content_pane_t2

0x0005,

0xfbc9,	// (0x0008b258) ncim_query_content_pane_t

0xe174,	// (0x00089803) ncim_query_list_pane

0xe186,	// (0x00089815) ncim_query_popup_pane

0xe102,	// (0x00089791) ncim_indicator_popup_pane_ParamLimits

0x8b38,	// (0x000841c7) ncim_query_content_pane_g1_ParamLimits

0x8b38,	// (0x000841c7) ncim_query_content_pane_g1

0xe128,	// (0x000897b7) ncim_query_content_pane_t1_ParamLimits

0xe13a,	// (0x000897c9) ncim_query_content_pane_t2_ParamLimits

0x8b44,	// (0x000841d3) ncim_query_content_pane_t3_ParamLimits

0x8b44,	// (0x000841d3) ncim_query_content_pane_t3

0x8b61,	// (0x000841f0) ncim_query_content_pane_t4_ParamLimits

0x8b61,	// (0x000841f0) ncim_query_content_pane_t4

0x8b7e,	// (0x0008420d) ncim_query_content_pane_t5_ParamLimits

0x8b7e,	// (0x0008420d) ncim_query_content_pane_t5

0xe14c,	// (0x000897db) ncim_query_content_pane_t6_ParamLimits

0xe14c,	// (0x000897db) ncim_query_content_pane_t6

0xfbc9,	// (0x0008b258) ncim_query_content_pane_t_ParamLimits

0xe174,	// (0x00089803) ncim_query_list_pane_ParamLimits

0xe186,	// (0x00089815) ncim_query_popup_pane_ParamLimits

0xe19a,	// (0x00089829) wait_bar_pane_cp04

0xa160,	// (0x000857ef) input_focus_pane_cp011

0xe1a2,	// (0x00089831) ncim_query_popup_pane_t1

0xe1b0,	// (0x0008983f) ncim_list_query_list_pane_ParamLimits

0xe1b0,	// (0x0008983f) ncim_list_query_list_pane

0xa160,	// (0x000857ef) bg_button_pane_cp027

0xe1bd,	// (0x0008984c) ncim_query_button_pane_g1

0xa160,	// (0x000857ef) list_highlight_pane_cp012

0xe1c7,	// (0x00089856) ncim_list_query_list_pane_g1

0xe1cf,	// (0x0008985e) ncim_list_query_list_pane_t1

0x72ac,	// (0x0008293b) cam4_indicators_pane_g3_ParamLimits

0x72ac,	// (0x0008293b) cam4_indicators_pane_g3

0x73b3,	// (0x00082a42) vid4_indicators_pane_g5_ParamLimits

0x73b3,	// (0x00082a42) vid4_indicators_pane_g5

0x8220,	// (0x000838af) vid4_progress_pane_g5_ParamLimits

0x8220,	// (0x000838af) vid4_progress_pane_g5

0x8a24,	// (0x000840b3) main_ncimui_pane_g1

0x8a8c,	// (0x0008411b) ncimui_group_query_pane_ParamLimits

0x8a8c,	// (0x0008411b) ncimui_group_query_pane

0x8ad4,	// (0x00084163) ncimui_list_pane_ParamLimits

0x8ad4,	// (0x00084163) ncimui_list_pane

0x8afb,	// (0x0008418a) ncimui_text_pane_ParamLimits

0x8afb,	// (0x0008418a) ncimui_text_pane

0x8b9b,	// (0x0008422a) ncimui_text_pane_t1_ParamLimits

0x8b9b,	// (0x0008422a) ncimui_text_pane_t1

0xe1dd,	// (0x0008986c) ncimui_list_single_graphic_pane_ParamLimits

0xe1dd,	// (0x0008986c) ncimui_list_single_graphic_pane

0x8bba,	// (0x00084249) ncimui_query_pane_ParamLimits

0x8bba,	// (0x00084249) ncimui_query_pane

0xa160,	// (0x000857ef) list_highlight_pane_cp013

0xe1ed,	// (0x0008987c) ncim_list_query_list_pane_t1_copy1

0xe1c7,	// (0x00089856) ncim_list_single_graphic_pane_g1

0x8bcd,	// (0x0008425c) ncim_query_button_pane_cp01

0x8bd9,	// (0x00084268) ncim_query_entry_pane_ParamLimits

0x8bd9,	// (0x00084268) ncim_query_entry_pane

0x8bec,	// (0x0008427b) ncimui_query_pane_g1

0x8bf8,	// (0x00084287) ncimui_query_pane_t1_ParamLimits

0x8bf8,	// (0x00084287) ncimui_query_pane_t1

0xacca,	// (0x00086359) input_focus_pane_cp012

0xe1fb,	// (0x0008988a) ncim_query_entry_pane_t1

0xa8b4,	// (0x00085f43) main_im_pane_ParamLimits

0xacca,	// (0x00086359) main_mobtv_pane_ParamLimits

0xacca,	// (0x00086359) main_mobtv_pane

0x8874,	// (0x00083f03) main_cset6_slider_pane_g18_ParamLimits

0x8874,	// (0x00083f03) main_cset6_slider_pane_g18

0x8880,	// (0x00083f0f) main_cset6_slider_pane_g19_ParamLimits

0x8880,	// (0x00083f0f) main_cset6_slider_pane_g19

0xd6da,	// (0x00088d69) bg_main_mobtv_pane_ParamLimits

0xd6da,	// (0x00088d69) bg_main_mobtv_pane

0x8c11,	// (0x000842a0) main_mobtv_info_pane

0x8c1c,	// (0x000842ab) main_mobtv_loading_pane_ParamLimits

0x8c1c,	// (0x000842ab) main_mobtv_loading_pane

0xe20d,	// (0x0008989c) main_mobtv_pg_channel_list_pane

0xe217,	// (0x000898a6) main_mobtv_pg_hdr_pane

0x8c29,	// (0x000842b8) main_mobtv_programe_curr_pane_ParamLimits

0x8c29,	// (0x000842b8) main_mobtv_programe_curr_pane

0x8c36,	// (0x000842c5) main_mobtv_programe_next_pane_ParamLimits

0x8c36,	// (0x000842c5) main_mobtv_programe_next_pane

0xe220,	// (0x000898af) popup_mobtv_noti_window

0xcd11,	// (0x000883a0) main_tv_pg_hdr_pane_g1

0xe228,	// (0x000898b7) main_tv_pg_hdr_pane_g2

0xe230,	// (0x000898bf) main_tv_pg_hdr_pane_g3

0xe238,	// (0x000898c7) main_tv_pg_hdr_pane_g4

0xe240,	// (0x000898cf) main_tv_pg_hdr_pane_g5

0xe24a,	// (0x000898d9) main_tv_pg_hdr_pane_g6

0xe254,	// (0x000898e3) main_tv_pg_hdr_pane_g7

0xe25e,	// (0x000898ed) main_tv_pg_hdr_pane_g8

0xe268,	// (0x000898f7) main_tv_pg_hdr_pane_g9

0xe272,	// (0x00089901) main_tv_pg_hdr_pane_g10

0xe27c,	// (0x0008990b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbd6,	// (0x0008b265) main_tv_pg_hdr_pane_g

0xe286,	// (0x00089915) main_tv_pg_hdr_pane_t1

0xe294,	// (0x00089923) main_tv_pg_hdr_pane_t2

0xe2a2,	// (0x00089931) main_tv_pg_hdr_pane_t3

0xe2b2,	// (0x00089941) main_tv_pg_hdr_pane_t4

0xe2c2,	// (0x00089951) main_tv_pg_hdr_pane_t5

0x0004,

0x09e4,	// (0x0007c073) main_tv_pg_hdr_pane_t

0xe2d2,	// (0x00089961) single_mobtv_pg_channel_pane_ParamLimits

0xe2d2,	// (0x00089961) single_mobtv_pg_channel_pane

0xe2e4,	// (0x00089973) single_mobtv_pg_channel_table_pane

0xe2ed,	// (0x0008997c) single_mobtv_pg_channel_thumb_pane

0xe2f6,	// (0x00089985) single_tv_pg_channel_pane_g1

0xe2ff,	// (0x0008998e) single_tv_pg_channel_pane_g2

0x0001,

0x09ef,	// (0x0007c07e) single_tv_pg_channel_pane_g

0xcf74,	// (0x00088603) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf74,	// (0x00088603) bg_single_mobtv_pg_channel_thumb_pane

0xe308,	// (0x00089997) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe308,	// (0x00089997) single_mobtv_pg_channel_thumb_pane_g1

0xe316,	// (0x000899a5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe316,	// (0x000899a5) single_mobtv_pg_channel_thumb_pane_g2

0xe322,	// (0x000899b1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe322,	// (0x000899b1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x09f4,	// (0x0007c083) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x09f4,	// (0x0007c083) single_mobtv_pg_channel_thumb_pane_g

0xe32e,	// (0x000899bd) single_mobtv_pg_channel_thumb_pane_t1

0xe33c,	// (0x000899cb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x09fb,	// (0x0007c08a) single_mobtv_pg_channel_thumb_pane_t

0xcd11,	// (0x000883a0) bg_single_mobtv_pg_channel_table_pane_g1

0xcd11,	// (0x000883a0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0008ad50) bg_single_mobtv_pg_channel_table_pane_g

0xe34a,	// (0x000899d9) single_mobtv_pg_channel_table_pane_t1

0xe358,	// (0x000899e7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0a00,	// (0x0007c08f) single_mobtv_pg_channel_table_pane_t

0x8c4b,	// (0x000842da) main_mobtv_info_pane_g1_ParamLimits

0x8c4b,	// (0x000842da) main_mobtv_info_pane_g1

0x8c67,	// (0x000842f6) main_mobtv_info_pane_t1_ParamLimits

0x8c67,	// (0x000842f6) main_mobtv_info_pane_t1

0x8cdf,	// (0x0008436e) main_mobtv_info_pane_t2_ParamLimits

0x8cdf,	// (0x0008436e) main_mobtv_info_pane_t2

0x0002,

0xfbf2,	// (0x0008b281) main_mobtv_info_pane_t_ParamLimits

0xfbf2,	// (0x0008b281) main_mobtv_info_pane_t

0x8d6e,	// (0x000843fd) wait_bar_pane_cp05

0x8d80,	// (0x0008440f) main_mobtv_loading_pane_g1_ParamLimits

0x8d80,	// (0x0008440f) main_mobtv_loading_pane_g1

0x8d8e,	// (0x0008441d) main_mobtv_loading_pane_g2_ParamLimits

0x8d8e,	// (0x0008441d) main_mobtv_loading_pane_g2

0x8d9a,	// (0x00084429) main_mobtv_loading_pane_g3_ParamLimits

0x8d9a,	// (0x00084429) main_mobtv_loading_pane_g3

0x0002,

0xfbf9,	// (0x0008b288) main_mobtv_loading_pane_g_ParamLimits

0xfbf9,	// (0x0008b288) main_mobtv_loading_pane_g

0xe366,	// (0x000899f5) main_mobtv_loading_pane_t1_ParamLimits

0xe366,	// (0x000899f5) main_mobtv_loading_pane_t1

0xe37e,	// (0x00089a0d) main_mobtv_loading_pane_t2_ParamLimits

0xe37e,	// (0x00089a0d) main_mobtv_loading_pane_t2

0x0001,

0x0a18,	// (0x0007c0a7) main_mobtv_loading_pane_t_ParamLimits

0x0a18,	// (0x0007c0a7) main_mobtv_loading_pane_t

0x8da8,	// (0x00084437) wait_bar_pane_cp06_ParamLimits

0x8da8,	// (0x00084437) wait_bar_pane_cp06

0xe3a2,	// (0x00089a31) main_mobtv_programe_curr_pane_t1

0xe3b0,	// (0x00089a3f) main_mobtv_programe_curr_pane_t2

0x0001,

0x0a1d,	// (0x0007c0ac) main_mobtv_programe_curr_pane_t

0xe3be,	// (0x00089a4d) main_mobtv_programe_next_pane_t1

0xe3cc,	// (0x00089a5b) main_mobtv_programe_next_pane_t2

0xe3da,	// (0x00089a69) main_mobtv_programe_next_pane_t3

0x0002,

0x0a22,	// (0x0007c0b1) main_mobtv_programe_next_pane_t

0xa160,	// (0x000857ef) bg_popup_mobtv_noti_window_pane

0xe3e8,	// (0x00089a77) popup_mobtv_noti_window_g1

0xe3f0,	// (0x00089a7f) popup_mobtv_noti_window_t1

0xe3fe,	// (0x00089a8d) popup_mobtv_noti_window_t2

0x0001,

0x0a29,	// (0x0007c0b8) popup_mobtv_noti_window_t

0xcd11,	// (0x000883a0) bg_popup_mobtv_noti_window_pane_g1

0xa160,	// (0x000857ef) sc_clock_pane

0xa160,	// (0x000857ef) main_fs_bigclock_pane

0x8428,	// (0x00083ab7) blid2_tripm_pane_t4_ParamLimits

0x8428,	// (0x00083ab7) blid2_tripm_pane_t4

0x8db4,	// (0x00084443) sc_clock_pane_g1_ParamLimits

0x8db4,	// (0x00084443) sc_clock_pane_g1

0x8dc2,	// (0x00084451) sc_clock_pane_t1_ParamLimits

0x8dc2,	// (0x00084451) sc_clock_pane_t1

0x8dd5,	// (0x00084464) sc_clock_pane_t2_ParamLimits

0x8dd5,	// (0x00084464) sc_clock_pane_t2

0x8de7,	// (0x00084476) sc_clock_pane_t3_ParamLimits

0x8de7,	// (0x00084476) sc_clock_pane_t3

0x0004,

0xfc00,	// (0x0008b28f) sc_clock_pane_t_ParamLimits

0xfc00,	// (0x0008b28f) sc_clock_pane_t

0x9766,	// (0x00084df5) main_fs_bigclock_indicator_pane_ParamLimits

0x9766,	// (0x00084df5) main_fs_bigclock_indicator_pane

0x8e6a,	// (0x000844f9) main_fs_bigclock_pane_g1_ParamLimits

0x8e6a,	// (0x000844f9) main_fs_bigclock_pane_g1

0x9772,	// (0x00084e01) main_fs_bigclock_pane_t1_ParamLimits

0x9772,	// (0x00084e01) main_fs_bigclock_pane_t1

0x9784,	// (0x00084e13) main_fs_bigclock_pane_t2_ParamLimits

0x9784,	// (0x00084e13) main_fs_bigclock_pane_t2

0x9798,	// (0x00084e27) main_fs_bigclock_pane_t3_ParamLimits

0x9798,	// (0x00084e27) main_fs_bigclock_pane_t3

0x0002,

0xfda2,	// (0x0008b431) main_fs_bigclock_pane_t_ParamLimits

0xfda2,	// (0x0008b431) main_fs_bigclock_pane_t

0xec46,	// (0x0008a2d5) main_fs_bigclock_indicator_pane_g1

0xe11c,	// (0x000897ab) ncim_query_content_pane_g2_ParamLimits

0xe11c,	// (0x000897ab) ncim_query_content_pane_g2

0x0001,

0xfbc4,	// (0x0008b253) ncim_query_content_pane_g_ParamLimits

0xfbc4,	// (0x0008b253) ncim_query_content_pane_g

0x8dfb,	// (0x0008448a) sc_clock_pane_t4_ParamLimits

0x8dfb,	// (0x0008448a) sc_clock_pane_t4

0xacca,	// (0x00086359) main_radioblah_pane

0x714f,	// (0x000827de) cell_call4_button_pane_t1_copy1_ParamLimits

0x714f,	// (0x000827de) cell_call4_button_pane_t1_copy1

0x8a3e,	// (0x000840cd) main_ncimui_pane_t1_ParamLimits

0x8a3e,	// (0x000840cd) main_ncimui_pane_t1

0x8a58,	// (0x000840e7) main_ncimui_pane_t2_ParamLimits

0x8a58,	// (0x000840e7) main_ncimui_pane_t2

0x0002,

0xfbbd,	// (0x0008b24c) main_ncimui_pane_t_ParamLimits

0xfbbd,	// (0x0008b24c) main_ncimui_pane_t

0xe543,	// (0x00089bd2) main_radioblah_anim_pane_ParamLimits

0xe543,	// (0x00089bd2) main_radioblah_anim_pane

0xe554,	// (0x00089be3) main_radioblah_info_pane_ParamLimits

0xe554,	// (0x00089be3) main_radioblah_info_pane

0xe568,	// (0x00089bf7) main_radioblah_pane_t1_ParamLimits

0xe568,	// (0x00089bf7) main_radioblah_pane_t1

0xe584,	// (0x00089c13) main_radioblah_pane_t2_ParamLimits

0xe584,	// (0x00089c13) main_radioblah_pane_t2

0x0003,

0x0a4f,	// (0x0007c0de) main_radioblah_pane_t_ParamLimits

0x0a4f,	// (0x0007c0de) main_radioblah_pane_t

0x8ec0,	// (0x0008454f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8ec0,	// (0x0008454f) main_radioblah_rocker_ctrl_pane

0xe5cc,	// (0x00089c5b) main_radioblah_info_pane_t1_ParamLimits

0xe5cc,	// (0x00089c5b) main_radioblah_info_pane_t1

0x8f05,	// (0x00084594) main_radioblah_info_pane_t2_ParamLimits

0x8f05,	// (0x00084594) main_radioblah_info_pane_t2

0x0003,

0xfc0b,	// (0x0008b29a) main_radioblah_info_pane_t_ParamLimits

0xfc0b,	// (0x0008b29a) main_radioblah_info_pane_t

0xcd11,	// (0x000883a0) main_radioblah_rocker_ctrl_pane_g1

0x8fb5,	// (0x00084644) main_radioblah_rocker_ctrl_pane_g2

0x8fbd,	// (0x0008464c) main_radioblah_rocker_ctrl_pane_g3

0x8fc5,	// (0x00084654) main_radioblah_rocker_ctrl_pane_g4

0x8fcd,	// (0x0008465c) main_radioblah_rocker_ctrl_pane_g5

0x8fd5,	// (0x00084664) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc14,	// (0x0008b2a3) main_radioblah_rocker_ctrl_pane_g

0x89e5,	// (0x00084074) main_cset_text2_pane_t1_copy1_ParamLimits

0x71da,	// (0x00082869) cam4_image_uncrop_qvga_pane

0x7321,	// (0x000829b0) vid4_image_uncrop_qcif_pane

0x85b6,	// (0x00083c45) cam6_image_uncrop_qvga_pane_ParamLimits

0x85b6,	// (0x00083c45) cam6_image_uncrop_qvga_pane

0xde23,	// (0x000894b2) vid6_image_uncrop_qcif_pane_ParamLimits

0xde23,	// (0x000894b2) vid6_image_uncrop_qcif_pane

0xa160,	// (0x000857ef) bg_popup_preview_window_pane_cp03

0xe0ce,	// (0x0008975d) list_cset_text2_pane

0xe0d6,	// (0x00089765) main_cset6_text2_pane_g1

0xe0de,	// (0x0008976d) main_cset6_text2_pane_t1

0x8fdd,	// (0x0008466c) list_cset_text2_pane_t1_ParamLimits

0x8fdd,	// (0x0008466c) list_cset_text2_pane_t1

0xacca,	// (0x00086359) main_radioblah_pane_ParamLimits

0x8d5a,	// (0x000843e9) main_mobtv_info_pane_t3_ParamLimits

0x8d5a,	// (0x000843e9) main_mobtv_info_pane_t3

0x8eae,	// (0x0008453d) main_radioblah_pane_g1

0x8ed9,	// (0x00084568) main_radioblah_info_pane_g1

0x8f5a,	// (0x000845e9) main_radioblah_info_pane_t3_ParamLimits

0x8f5a,	// (0x000845e9) main_radioblah_info_pane_t3

0x4056,	// (0x0007f6e5) highlight_cell_cale_month_pane_ParamLimits

0x4056,	// (0x0007f6e5) highlight_cell_cale_month_pane

0xa160,	// (0x000857ef) main_phob_fisheye_pane

0xd070,	// (0x000886ff) scroll_pane_cp0031_ParamLimits

0xd070,	// (0x000886ff) scroll_pane_cp0031

0xdf31,	// (0x000895c0) wait_bar_pane_cp08_ParamLimits

0x878b,	// (0x00083e1a) cset_list_set_pane_copy1_ParamLimits

0xe606,	// (0x00089c95) highlight_cell_cale_month_pane_g1

0x8ffa,	// (0x00084689) highlight_cell_cale_month_pane_t1

0xdb99,	// (0x00089228) list_gen_pane_cp01

0xd814,	// (0x00088ea3) scroll_pane_01

0x14d2,	// (0x0007cb61) list_single_double_fisheye_pane

0x14db,	// (0x0007cb6a) list_double_fisheye_pane_g1_ParamLimits

0x14db,	// (0x0007cb6a) list_double_fisheye_pane_g1

0x14e7,	// (0x0007cb76) list_double_fisheye_pane_g2_ParamLimits

0x14e7,	// (0x0007cb76) list_double_fisheye_pane_g2

0x14fb,	// (0x0007cb8a) list_double_fisheye_pane_g3_ParamLimits

0x14fb,	// (0x0007cb8a) list_double_fisheye_pane_g3

0x0004,

0xfc21,	// (0x0008b2b0) list_double_fisheye_pane_g_ParamLimits

0xfc21,	// (0x0008b2b0) list_double_fisheye_pane_g

0x1524,	// (0x0007cbb3) list_double_fisheye_pane_t1_ParamLimits

0x1524,	// (0x0007cbb3) list_double_fisheye_pane_t1

0x153f,	// (0x0007cbce) list_double_fisheye_pane_t2_ParamLimits

0x153f,	// (0x0007cbce) list_double_fisheye_pane_t2

0x0001,

0xfc2c,	// (0x0008b2bb) list_double_fisheye_pane_t_ParamLimits

0xfc2c,	// (0x0008b2bb) list_double_fisheye_pane_t

0xa160,	// (0x000857ef) main_call5_pane

0x8e21,	// (0x000844b0) sc_swipe_pane_ParamLimits

0x8e21,	// (0x000844b0) sc_swipe_pane

0x9014,	// (0x000846a3) call5_image_pane_ParamLimits

0x9014,	// (0x000846a3) call5_image_pane

0x9024,	// (0x000846b3) call5_swipe_1_pane_ParamLimits

0x9024,	// (0x000846b3) call5_swipe_1_pane

0x9030,	// (0x000846bf) call5_swipe_2_pane_ParamLimits

0x9030,	// (0x000846bf) call5_swipe_2_pane

0x904a,	// (0x000846d9) popup_call5_audio_first_window_ParamLimits

0x904a,	// (0x000846d9) popup_call5_audio_first_window

0xcf74,	// (0x00088603) call5_swipe_1_pane_g1_ParamLimits

0xcf74,	// (0x00088603) call5_swipe_1_pane_g1

0xe60e,	// (0x00089c9d) call5_swipe_1_pane_g2_ParamLimits

0xe60e,	// (0x00089c9d) call5_swipe_1_pane_g2

0x0001,

0xfc31,	// (0x0008b2c0) call5_swipe_1_pane_g_ParamLimits

0xfc31,	// (0x0008b2c0) call5_swipe_1_pane_g

0xe61a,	// (0x00089ca9) call5_swipe_1_pane_t1_ParamLimits

0xe61a,	// (0x00089ca9) call5_swipe_1_pane_t1

0xcf74,	// (0x00088603) call5_swipe_2_pane_g1_ParamLimits

0xcf74,	// (0x00088603) call5_swipe_2_pane_g1

0xe62f,	// (0x00089cbe) call5_swipe_2_pane_g2_ParamLimits

0xe62f,	// (0x00089cbe) call5_swipe_2_pane_g2

0x0001,

0xfc36,	// (0x0008b2c5) call5_swipe_2_pane_g_ParamLimits

0xfc36,	// (0x0008b2c5) call5_swipe_2_pane_g

0xe63b,	// (0x00089cca) call5_swipe_2_pane_t1_ParamLimits

0xe63b,	// (0x00089cca) call5_swipe_2_pane_t1

0xe650,	// (0x00089cdf) sc_swipe_pane_g1_ParamLimits

0xe650,	// (0x00089cdf) sc_swipe_pane_g1

0xe65d,	// (0x00089cec) sc_swipe_pane_g2_ParamLimits

0xe65d,	// (0x00089cec) sc_swipe_pane_g2

0x0001,

0x0a88,	// (0x0007c117) sc_swipe_pane_g_ParamLimits

0x0a88,	// (0x0007c117) sc_swipe_pane_g

0xe669,	// (0x00089cf8) sc_swipe_pane_t1_ParamLimits

0xe669,	// (0x00089cf8) sc_swipe_pane_t1

0xa160,	// (0x000857ef) main_cmail_launcher_pane

0x9058,	// (0x000846e7) aid_size_cell_cmail_l_ParamLimits

0x9058,	// (0x000846e7) aid_size_cell_cmail_l

0x9066,	// (0x000846f5) grid_cmail_l_pane_ParamLimits

0x9066,	// (0x000846f5) grid_cmail_l_pane

0x9076,	// (0x00084705) cell_cmail_l_pane_ParamLimits

0x9076,	// (0x00084705) cell_cmail_l_pane

0xe67e,	// (0x00089d0d) cell_cmail_l_pane_g1_ParamLimits

0xe67e,	// (0x00089d0d) cell_cmail_l_pane_g1

0xe68a,	// (0x00089d19) cell_cmail_l_pane_t1_ParamLimits

0xe68a,	// (0x00089d19) cell_cmail_l_pane_t1

0xe6a0,	// (0x00089d2f) cell_cmail_l_pane_t2_ParamLimits

0xe6a0,	// (0x00089d2f) cell_cmail_l_pane_t2

0x0001,

0x0a8d,	// (0x0007c11c) cell_cmail_l_pane_t_ParamLimits

0x0a8d,	// (0x0007c11c) cell_cmail_l_pane_t

0xacca,	// (0x00086359) grid_highlight_pane_cp018_ParamLimits

0xacca,	// (0x00086359) grid_highlight_pane_cp018

0x20d5,	// (0x0007d764) main2_pane_ParamLimits

0x20d5,	// (0x0007d764) main2_pane

0xa94d,	// (0x00085fdc) popup_sp_fs_action_menu_bg_pane_g1

0xa955,	// (0x00085fe4) popup_sp_fs_action_menu_bg_pane_g2

0xa95d,	// (0x00085fec) popup_sp_fs_action_menu_bg_pane_g3

0xa965,	// (0x00085ff4) popup_sp_fs_action_menu_bg_pane_g4

0xa96d,	// (0x00085ffc) popup_sp_fs_action_menu_bg_pane_g5

0xa975,	// (0x00086004) popup_sp_fs_action_menu_bg_pane_g6

0xa97d,	// (0x0008600c) popup_sp_fs_action_menu_bg_pane_g7

0xa985,	// (0x00086014) popup_sp_fs_action_menu_bg_pane_g8

0xa98d,	// (0x0008601c) popup_sp_fs_action_menu_bg_pane_g9

0xa995,	// (0x00086024) popup_sp_fs_action_menu_bg_pane_g10

0xa995,	// (0x00086024) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0008a7fe) popup_sp_fs_action_menu_bg_pane_g

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t3_g3_g1

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t3_g3_g2

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0008a8ac) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0008a8ac) list_medium_line_x2_t3_g3_g

0x0d79,	// (0x0007c408) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d79,	// (0x0007c408) list_medium_line_x2_t3_g3_t1

0x0d8e,	// (0x0007c41d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d8e,	// (0x0007c41d) list_medium_line_x2_t3_g3_t2

0x0da0,	// (0x0007c42f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0008a8b3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0008a8b3) list_medium_line_x2_t3_g3_t

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t3_g2_g1

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0008a8ba) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0008a8ba) list_medium_line_x2_t3_g2_g

0x0db5,	// (0x0007c444) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0db5,	// (0x0007c444) list_medium_line_x2_t3_g2_t1

0x0dcb,	// (0x0007c45a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0dcb,	// (0x0007c45a) list_medium_line_x2_t3_g2_t2

0x0da0,	// (0x0007c42f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0008a8bf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0008a8bf) list_medium_line_x2_t3_g2_t

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t4_g4_g1

0x2f73,	// (0x0007e602) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2f73,	// (0x0007e602) list_medium_line_x2_t4_g4_g2

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t4_g4_g3

0x0ddd,	// (0x0007c46c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ddd,	// (0x0007c46c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0008a8c6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0008a8c6) list_medium_line_x2_t4_g4_g

0x0de9,	// (0x0007c478) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0de9,	// (0x0007c478) list_medium_line_x2_t4_g4_t1

0x0e03,	// (0x0007c492) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e03,	// (0x0007c492) list_medium_line_x2_t4_g4_t2

0x0e19,	// (0x0007c4a8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e19,	// (0x0007c4a8) list_medium_line_x2_t4_g4_t3

0x0e2e,	// (0x0007c4bd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e2e,	// (0x0007c4bd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0008a8cf) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0008a8cf) list_medium_line_x2_t4_g4_t

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t2_g4_g1

0x2f73,	// (0x0007e602) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2f73,	// (0x0007e602) list_medium_line_x2_t2_g4_g2

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t2_g4_g3

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0008a936) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0008a936) list_medium_line_x2_t2_g4_g

0x0e40,	// (0x0007c4cf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e40,	// (0x0007c4cf) list_medium_line_x2_t2_g4_t1

0x0da0,	// (0x0007c42f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0008a93f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0008a93f) list_medium_line_x2_t2_g4_t

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t2_g3_g1

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t2_g3_g2

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0008a8ac) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0008a8ac) list_medium_line_x2_t2_g3_g

0x0e55,	// (0x0007c4e4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e55,	// (0x0007c4e4) list_medium_line_x2_t2_g3_t1

0x0da0,	// (0x0007c42f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0008a944) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0008a944) list_medium_line_x2_t2_g3_t

0x422e,	// (0x0007f8bd) main_sp_fs_list_pane_ParamLimits

0x422e,	// (0x0007f8bd) main_sp_fs_list_pane

0x423a,	// (0x0007f8c9) sp_fs_scroll_pane_ParamLimits

0x423a,	// (0x0007f8c9) sp_fs_scroll_pane

0x0e6a,	// (0x0007c4f9) list_medium_line_x2_t3_t1

0x0e7a,	// (0x0007c509) list_medium_line_x2_t3_t2

0x0e88,	// (0x0007c517) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0008a98f) list_medium_line_x2_t3_t

0x0e96,	// (0x0007c525) list_medium_line_x3_t4_t1

0x0ea6,	// (0x0007c535) list_medium_line_x3_t4_t2

0x0eb4,	// (0x0007c543) list_medium_line_x3_t4_t3

0x0e88,	// (0x0007c517) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0008a996) list_medium_line_x3_t4_t

0x0ec2,	// (0x0007c551) list_medium_line_x4_t5_t1

0x0ed2,	// (0x0007c561) list_medium_line_x4_t5_t2

0x0eb4,	// (0x0007c543) list_medium_line_x4_t5_t3

0x0ee0,	// (0x0007c56f) list_medium_line_x4_t5_t4

0x0e88,	// (0x0007c517) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0008a99f) list_medium_line_x4_t5_t

0x0d61,	// (0x0007c3f0) list_medium_line_t4_g4_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_t4_g4_g1

0x0eee,	// (0x0007c57d) list_medium_line_t4_g4_g2_ParamLimits

0x0eee,	// (0x0007c57d) list_medium_line_t4_g4_g2

0x0efa,	// (0x0007c589) list_medium_line_t4_g4_g3_ParamLimits

0x0efa,	// (0x0007c589) list_medium_line_t4_g4_g3

0x0d6d,	// (0x0007c3fc) list_medium_line_t4_g4_g4_ParamLimits

0x0d6d,	// (0x0007c3fc) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0008a9aa) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0008a9aa) list_medium_line_t4_g4_g

0x0f06,	// (0x0007c595) list_medium_line_t4_g4_t1_ParamLimits

0x0f06,	// (0x0007c595) list_medium_line_t4_g4_t1

0x0f1b,	// (0x0007c5aa) list_medium_line_t4_g4_t2_ParamLimits

0x0f1b,	// (0x0007c5aa) list_medium_line_t4_g4_t2

0x0f30,	// (0x0007c5bf) list_medium_line_t4_g4_t3_ParamLimits

0x0f30,	// (0x0007c5bf) list_medium_line_t4_g4_t3

0x0da0,	// (0x0007c42f) list_medium_line_t4_g4_t4_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0008a9b3) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0008a9b3) list_medium_line_t4_g4_t

0x4347,	// (0x0007f9d6) chi_dic_find_pane_g1

0x51b6,	// (0x00080845) main_tport_pane

0x119c,	// (0x0007c82b) list_medium_line_plain_t1

0x11aa,	// (0x0007c839) list_medium_line_t2_g2_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_t2_g2_g1

0x7d63,	// (0x000833f2) list_medium_line_t2_g2_g2_ParamLimits

0x7d63,	// (0x000833f2) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0008b078) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0008b078) list_medium_line_t2_g2_g

0x11b6,	// (0x0007c845) list_medium_line_t2_g2_t1_ParamLimits

0x11b6,	// (0x0007c845) list_medium_line_t2_g2_t1

0x11d0,	// (0x0007c85f) list_medium_line_t2_g2_t2_ParamLimits

0x11d0,	// (0x0007c85f) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0008b07d) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0008b07d) list_medium_line_t2_g2_t

0x13f0,	// (0x0007ca7f) aid_sp_fs_list_icon_a_sm

0x827f,	// (0x0008390e) aid_sp_fs_list_icon_d

0xae5b,	// (0x000864ea) aid_sp_fs_text_primary

0x13f8,	// (0x0007ca87) aid_sp_fs_text_secondary

0x8287,	// (0x00083916) list_medium_line

0x8287,	// (0x00083916) list_medium_line_g2

0x8287,	// (0x00083916) list_medium_line_g3

0x8287,	// (0x00083916) list_medium_line_plain

0x8287,	// (0x00083916) list_medium_line_plain_t2

0x8287,	// (0x00083916) list_medium_line_plain_t3

0x8287,	// (0x00083916) list_medium_line_right_icon

0x8287,	// (0x00083916) list_medium_line_right_iconx2

0x8287,	// (0x00083916) list_medium_line_t2

0x8287,	// (0x00083916) list_medium_line_t2_g2

0x8287,	// (0x00083916) list_medium_line_t2_g3

0x8287,	// (0x00083916) list_medium_line_t2_right_icon

0x8287,	// (0x00083916) list_medium_line_t2_right_iconx2

0x8287,	// (0x00083916) list_medium_line_t3

0x8287,	// (0x00083916) list_medium_line_t3_g2

0x8287,	// (0x00083916) list_medium_line_t3_g3

0x8287,	// (0x00083916) list_medium_line_t3_right_iconx2

0x8290,	// (0x0008391f) list_medium_line_t4_g4

0xa7c8,	// (0x00085e57) list_medium_line_x2

0xa7c8,	// (0x00085e57) list_medium_line_x2_t2_g2

0xa7c8,	// (0x00085e57) list_medium_line_x2_t2_g3

0xa7c8,	// (0x00085e57) list_medium_line_x2_t2_g4

0xa7c8,	// (0x00085e57) list_medium_line_x2_t3

0xa7c8,	// (0x00085e57) list_medium_line_x2_t3_g2

0xa7c8,	// (0x00085e57) list_medium_line_x2_t3_g3

0xa7c8,	// (0x00085e57) list_medium_line_x2_t3_g4

0xa7c8,	// (0x00085e57) list_medium_line_x2_t4_g2

0xa7c8,	// (0x00085e57) list_medium_line_x2_t4_g4

0x8299,	// (0x00083928) list_medium_line_x3

0x8299,	// (0x00083928) list_medium_line_x3_t4

0x8299,	// (0x00083928) list_medium_line_x3_t4_g4

0x8290,	// (0x0008391f) list_medium_line_x4_t4

0x8290,	// (0x0008391f) list_medium_line_x4_t4_g7

0x8290,	// (0x0008391f) list_medium_line_x4_t5

0x1401,	// (0x0007ca90) list_single_fs_dyc_pane_ParamLimits

0x1401,	// (0x0007ca90) list_single_fs_dyc_pane

0x0d61,	// (0x0007c3f0) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x4_t4_g7_g1

0x1415,	// (0x0007caa4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1415,	// (0x0007caa4) list_medium_line_x4_t4_g7_g2

0x89ca,	// (0x00084059) list_medium_line_x4_t4_g7_g3_ParamLimits

0x89ca,	// (0x00084059) list_medium_line_x4_t4_g7_g3

0x89d9,	// (0x00084068) list_medium_line_x4_t4_g7_g4_ParamLimits

0x89d9,	// (0x00084068) list_medium_line_x4_t4_g7_g4

0x1421,	// (0x0007cab0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1421,	// (0x0007cab0) list_medium_line_x4_t4_g7_g5

0x1430,	// (0x0007cabf) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1430,	// (0x0007cabf) list_medium_line_x4_t4_g7_g6

0x143f,	// (0x0007cace) list_medium_line_x4_t4_g7_g7_ParamLimits

0x143f,	// (0x0007cace) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb9e,	// (0x0008b22d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb9e,	// (0x0008b22d) list_medium_line_x4_t4_g7_g

0x144b,	// (0x0007cada) list_medium_line_x4_t4_g7_t1_ParamLimits

0x144b,	// (0x0007cada) list_medium_line_x4_t4_g7_t1

0x1460,	// (0x0007caef) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1460,	// (0x0007caef) list_medium_line_x4_t4_g7_t2

0x1475,	// (0x0007cb04) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1475,	// (0x0007cb04) list_medium_line_x4_t4_g7_t3

0x148a,	// (0x0007cb19) list_medium_line_x4_t4_g7_t4_ParamLimits

0x148a,	// (0x0007cb19) list_medium_line_x4_t4_g7_t4

0x149c,	// (0x0007cb2b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x149c,	// (0x0007cb2b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbad,	// (0x0008b23c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbad,	// (0x0008b23c) list_medium_line_x4_t4_g7_t

0x14ae,	// (0x0007cb3d) list_single_dyc_row_pane_ParamLimits

0x14ae,	// (0x0007cb3d) list_single_dyc_row_pane

0x9008,	// (0x00084697) call5_gesture_pane_ParamLimits

0x9008,	// (0x00084697) call5_gesture_pane

0x903c,	// (0x000846cb) call5_windows_pane_ParamLimits

0x903c,	// (0x000846cb) call5_windows_pane

0x908f,	// (0x0008471e) call5_swipe_1_pane_cp_ParamLimits

0x908f,	// (0x0008471e) call5_swipe_1_pane_cp

0x909b,	// (0x0008472a) call5_swipe_2_pane_cp_ParamLimits

0x909b,	// (0x0008472a) call5_swipe_2_pane_cp

0xaa79,	// (0x00086108) call5_image_pane_cp

0x90a7,	// (0x00084736) popup_call5_audio_first_window_cp_ParamLimits

0x90a7,	// (0x00084736) popup_call5_audio_first_window_cp

0xe650,	// (0x00089cdf) call5_swipe_1_pane_g1_cp_ParamLimits

0xe650,	// (0x00089cdf) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x00089d4c) call5_swipe_1_pane_g2_cp

0xe669,	// (0x00089cf8) call5_swipe_1_pane_t1_cp_ParamLimits

0xe669,	// (0x00089cf8) call5_swipe_1_pane_t1_cp

0xe650,	// (0x00089cdf) call5_swipe_2_pane_g1_cp_ParamLimits

0xe650,	// (0x00089cdf) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x00089d54) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x00089d5c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x00089d5c) call5_swipe_2_pane_t1_cp

0xacca,	// (0x00086359) main_sp_fs_email_pane

0xe6e2,	// (0x00089d71) main_sp_fs_listscroll_pane_te

0x90b5,	// (0x00084744) popup_sp_fs_action_menu_pane_ParamLimits

0x90b5,	// (0x00084744) popup_sp_fs_action_menu_pane

0xcd11,	// (0x000883a0) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x00089d7a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x00089d83) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x00089d8c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd11,	// (0x000883a0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc3b,	// (0x0008b2ca) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf6,	// (0x00088185) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf6,	// (0x00088185) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x00089d95) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x00089d95) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x00089da1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x00089da1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0a9b,	// (0x0007c12a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0a9b,	// (0x0007c12a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x00089dad) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x00089dad) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x90f9,	// (0x00084788) list_medium_line_t2_right_icon_g1

0x1561,	// (0x0007cbf0) list_medium_line_t2_right_icon_t1

0x1571,	// (0x0007cc00) list_medium_line_t2_right_icon_t2

0x0001,

0xfc44,	// (0x0008b2d3) list_medium_line_t2_right_icon_t

0xc909,	// (0x00087f98) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc909,	// (0x00087f98) bg_sp_fs_ctrlbar_pane

0x9158,	// (0x000847e7) main_sp_fs_ctrlbar_button_pane_cp01

0x9160,	// (0x000847ef) main_sp_fs_ctrlbar_ddmenu_pane

0xe770,	// (0x00089dff) main_sp_fs_ctrlbar_pane_g1

0xe77c,	// (0x00089e0b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc49,	// (0x0008b2d8) main_sp_fs_ctrlbar_pane_g

0x919c,	// (0x0008482b) main_sp_fs_ctrlbar_pane_t1

0x91d7,	// (0x00084866) main_sp_fs_ctrlbar_pane

0x91ed,	// (0x0008487c) main_sp_fs_listscroll_pane_te_cp01

0x157f,	// (0x0007cc0e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x157f,	// (0x0007cc0e) popup_sp_fs_action_menu_pane_cp01

0xacca,	// (0x00086359) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xacca,	// (0x00086359) bg_sp_fs_highlight_list_pane_cp01

0x15a9,	// (0x0007cc38) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x15a9,	// (0x0007cc38) sp_fs_action_menu_list_gene_pane_g1

0xe7a3,	// (0x00089e32) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7a3,	// (0x00089e32) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc52,	// (0x0008b2e1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc52,	// (0x0008b2e1) sp_fs_action_menu_list_gene_pane_g

0x15b8,	// (0x0007cc47) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x15b8,	// (0x0007cc47) sp_fs_action_menu_list_gene_pane_t1

0x15d0,	// (0x0007cc5f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x15d0,	// (0x0007cc5f) sp_fs_action_menu_list_gene_pane

0xe7b0,	// (0x00089e3f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b0,	// (0x00089e3f) popup_sp_fs_action_menu_bg_pane

0x15f1,	// (0x0007cc80) sp_fs_action_menu_list_pane_ParamLimits

0x15f1,	// (0x0007cc80) sp_fs_action_menu_list_pane

0x91fe,	// (0x0008488d) sp_fs_scroll_pane_cp01_ParamLimits

0x91fe,	// (0x0008488d) sp_fs_scroll_pane_cp01

0x1613,	// (0x0007cca2) list_medium_line_plain_t2_t1

0x1623,	// (0x0007ccb2) list_medium_line_plain_t2_t2

0x0001,

0xfc57,	// (0x0008b2e6) list_medium_line_plain_t2_t

0x1631,	// (0x0007ccc0) list_medium_line_plain_t3_t1

0x1641,	// (0x0007ccd0) list_medium_line_plain_t3_t2

0x164f,	// (0x0007ccde) list_medium_line_plain_t3_t3

0x0002,

0xfc5c,	// (0x0008b2eb) list_medium_line_plain_t3_t

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t2_g2_g1

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0008a8ba) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0008a8ba) list_medium_line_x2_t2_g2_g

0x0f06,	// (0x0007c595) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f06,	// (0x0007c595) list_medium_line_x2_t2_g2_t1

0x0da0,	// (0x0007c42f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc63,	// (0x0008b2f2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc63,	// (0x0008b2f2) list_medium_line_x2_t2_g2_t

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t4_g2_g1

0x165d,	// (0x0007ccec) list_medium_line_x2_t4_g2_g2_ParamLimits

0x165d,	// (0x0007ccec) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc68,	// (0x0008b2f7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc68,	// (0x0008b2f7) list_medium_line_x2_t4_g2_g

0x166f,	// (0x0007ccfe) list_medium_line_x2_t4_g2_t1_ParamLimits

0x166f,	// (0x0007ccfe) list_medium_line_x2_t4_g2_t1

0x1689,	// (0x0007cd18) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1689,	// (0x0007cd18) list_medium_line_x2_t4_g2_t2

0x169f,	// (0x0007cd2e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x169f,	// (0x0007cd2e) list_medium_line_x2_t4_g2_t3

0x0da0,	// (0x0007c42f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc6d,	// (0x0008b2fc) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc6d,	// (0x0008b2fc) list_medium_line_x2_t4_g2_t

0x9224,	// (0x000848b3) list_medium_line_t3_right_iconx2_g1

0x90f9,	// (0x00084788) list_medium_line_t3_right_iconx2_g2

0x16b4,	// (0x0007cd43) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc76,	// (0x0008b305) list_medium_line_t3_right_iconx2_g

0x16bc,	// (0x0007cd4b) list_medium_line_t3_right_iconx2_t1

0x16cc,	// (0x0007cd5b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc7d,	// (0x0008b30c) list_medium_line_t3_right_iconx2_t

0x0d61,	// (0x0007c3f0) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x3_t4_g4_g1

0x2f67,	// (0x0007e5f6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x3_t4_g4_g2

0x0eee,	// (0x0007c57d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0eee,	// (0x0007c57d) list_medium_line_x3_t4_g4_g3

0x922c,	// (0x000848bb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x922c,	// (0x000848bb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc82,	// (0x0008b311) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc82,	// (0x0008b311) list_medium_line_x3_t4_g4_g

0x16da,	// (0x0007cd69) list_medium_line_x3_t4_g4_t1_ParamLimits

0x16da,	// (0x0007cd69) list_medium_line_x3_t4_g4_t1

0x16f1,	// (0x0007cd80) list_medium_line_x3_t4_g4_t2_ParamLimits

0x16f1,	// (0x0007cd80) list_medium_line_x3_t4_g4_t2

0x0f1b,	// (0x0007c5aa) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0f1b,	// (0x0007c5aa) list_medium_line_x3_t4_g4_t3

0x1706,	// (0x0007cd95) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1706,	// (0x0007cd95) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc8b,	// (0x0008b31a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc8b,	// (0x0008b31a) list_medium_line_x3_t4_g4_t

0x1723,	// (0x0007cdb2) list_single_dyc_row_text_pane_t1_ParamLimits

0x1723,	// (0x0007cdb2) list_single_dyc_row_text_pane_t1

0x175a,	// (0x0007cde9) list_single_dyc_row_text_pane_t2_ParamLimits

0x175a,	// (0x0007cde9) list_single_dyc_row_text_pane_t2

0x17d0,	// (0x0007ce5f) list_single_dyc_row_text_pane_t3_ParamLimits

0x17d0,	// (0x0007ce5f) list_single_dyc_row_text_pane_t3

0x0005,

0xfc94,	// (0x0008b323) list_single_dyc_row_text_pane_t_ParamLimits

0xfc94,	// (0x0008b323) list_single_dyc_row_text_pane_t

0x18a1,	// (0x0007cf30) list_single_dyc_row_pane_g1_ParamLimits

0x18a1,	// (0x0007cf30) list_single_dyc_row_pane_g1

0x18ad,	// (0x0007cf3c) list_single_dyc_row_pane_g2_ParamLimits

0x18ad,	// (0x0007cf3c) list_single_dyc_row_pane_g2

0x18b9,	// (0x0007cf48) list_single_dyc_row_pane_g3_ParamLimits

0x18b9,	// (0x0007cf48) list_single_dyc_row_pane_g3

0x18c5,	// (0x0007cf54) list_single_dyc_row_pane_g4_ParamLimits

0x18c5,	// (0x0007cf54) list_single_dyc_row_pane_g4

0x0003,

0xfca1,	// (0x0008b330) list_single_dyc_row_pane_g_ParamLimits

0xfca1,	// (0x0008b330) list_single_dyc_row_pane_g

0x18d1,	// (0x0007cf60) list_single_dyc_row_text_pane_ParamLimits

0x18d1,	// (0x0007cf60) list_single_dyc_row_text_pane

0xa160,	// (0x000857ef) bg_sp_fs_scroll_pane

0xe7be,	// (0x00089e4d) thumb_sp_fs_scroll_pane

0x11aa,	// (0x0007c839) list_medium_line_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_g1

0x18f0,	// (0x0007cf7f) list_medium_line_t1_ParamLimits

0x18f0,	// (0x0007cf7f) list_medium_line_t1

0x0d61,	// (0x0007c3f0) list_medium_line_x2_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_g1

0x2f67,	// (0x0007e5f6) list_medium_line_x2_g2_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x2_g2

0x0001,

0xfcaa,	// (0x0008b339) list_medium_line_x2_g_ParamLimits

0xfcaa,	// (0x0008b339) list_medium_line_x2_g

0x1905,	// (0x0007cf94) list_medium_line_x2_t1_ParamLimits

0x1905,	// (0x0007cf94) list_medium_line_x2_t1

0x0d61,	// (0x0007c3f0) list_medium_line_x3_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x3_g1

0x2f67,	// (0x0007e5f6) list_medium_line_x3_g2_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x3_g2

0x0001,

0xfcaa,	// (0x0008b339) list_medium_line_x3_g_ParamLimits

0xfcaa,	// (0x0008b339) list_medium_line_x3_g

0x1905,	// (0x0007cf94) list_medium_line_x3_t1_ParamLimits

0x1905,	// (0x0007cf94) list_medium_line_x3_t1

0xe7c7,	// (0x00089e56) thumb_sp_fs_scroll_pane_g1

0xe7d0,	// (0x00089e5f) thumb_sp_fs_scroll_pane_g2

0xe7d9,	// (0x00089e68) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0b10,	// (0x0007c19f) thumb_sp_fs_scroll_pane_g

0xe7c7,	// (0x00089e56) bg_sp_fs_scroll_pane_g1

0xe7d0,	// (0x00089e5f) bg_sp_fs_scroll_pane_g2

0xe7d9,	// (0x00089e68) bg_sp_fs_scroll_pane_g3

0x0002,

0x0b10,	// (0x0007c19f) bg_sp_fs_scroll_pane_g

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d61,	// (0x0007c3f0) list_medium_line_x2_t3_g4_g1

0x2f73,	// (0x0007e602) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2f73,	// (0x0007e602) list_medium_line_x2_t3_g4_g2

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2f67,	// (0x0007e5f6) list_medium_line_x2_t3_g4_g3

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d6d,	// (0x0007c3fc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0008a936) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0008a936) list_medium_line_x2_t3_g4_g

0x191b,	// (0x0007cfaa) list_medium_line_x2_t3_g4_t1_ParamLimits

0x191b,	// (0x0007cfaa) list_medium_line_x2_t3_g4_t1

0x1931,	// (0x0007cfc0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1931,	// (0x0007cfc0) list_medium_line_x2_t3_g4_t2

0x0da0,	// (0x0007c42f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0da0,	// (0x0007c42f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcaf,	// (0x0008b33e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcaf,	// (0x0008b33e) list_medium_line_x2_t3_g4_t

0x11aa,	// (0x0007c839) list_medium_line_g2_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_g2_g1

0x7d63,	// (0x000833f2) list_medium_line_g2_g2_ParamLimits

0x7d63,	// (0x000833f2) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0008b078) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0008b078) list_medium_line_g2_g

0x194b,	// (0x0007cfda) list_medium_line_g2_t1_ParamLimits

0x194b,	// (0x0007cfda) list_medium_line_g2_t1

0x11aa,	// (0x0007c839) list_medium_line_t3_g2_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_t3_g2_g1

0x7d63,	// (0x000833f2) list_medium_line_t3_g2_g2_ParamLimits

0x7d63,	// (0x000833f2) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0008b078) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0008b078) list_medium_line_t3_g2_g

0x1960,	// (0x0007cfef) list_medium_line_t3_g2_t1_ParamLimits

0x1960,	// (0x0007cfef) list_medium_line_t3_g2_t1

0x197a,	// (0x0007d009) list_medium_line_t3_g2_t2_ParamLimits

0x197a,	// (0x0007d009) list_medium_line_t3_g2_t2

0x1990,	// (0x0007d01f) list_medium_line_t3_g2_t3_ParamLimits

0x1990,	// (0x0007d01f) list_medium_line_t3_g2_t3

0x0002,

0xfcb6,	// (0x0008b345) list_medium_line_t3_g2_t_ParamLimits

0xfcb6,	// (0x0008b345) list_medium_line_t3_g2_t

0x90f9,	// (0x00084788) list_medium_line_right_icon_g1

0x19a6,	// (0x0007d035) list_medium_line_right_icon_t1

0x11aa,	// (0x0007c839) list_medium_line_t2_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_t2_g1

0x19b4,	// (0x0007d043) list_medium_line_t2_t1_ParamLimits

0x19b4,	// (0x0007d043) list_medium_line_t2_t1

0x19ce,	// (0x0007d05d) list_medium_line_t2_t2_ParamLimits

0x19ce,	// (0x0007d05d) list_medium_line_t2_t2

0x0001,

0xfcbd,	// (0x0008b34c) list_medium_line_t2_t_ParamLimits

0xfcbd,	// (0x0008b34c) list_medium_line_t2_t

0x11aa,	// (0x0007c839) list_medium_line_t3_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_t3_g1

0x19e3,	// (0x0007d072) list_medium_line_t3_t1_ParamLimits

0x19e3,	// (0x0007d072) list_medium_line_t3_t1

0x19fd,	// (0x0007d08c) list_medium_line_t3_t2_ParamLimits

0x19fd,	// (0x0007d08c) list_medium_line_t3_t2

0x1a13,	// (0x0007d0a2) list_medium_line_t3_t3_ParamLimits

0x1a13,	// (0x0007d0a2) list_medium_line_t3_t3

0x0002,

0xfcc2,	// (0x0008b351) list_medium_line_t3_t_ParamLimits

0xfcc2,	// (0x0008b351) list_medium_line_t3_t

0x11aa,	// (0x0007c839) list_medium_line_g3_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_g3_g1

0x9238,	// (0x000848c7) list_medium_line_g3_g2_ParamLimits

0x9238,	// (0x000848c7) list_medium_line_g3_g2

0x7d63,	// (0x000833f2) list_medium_line_g3_g3_ParamLimits

0x7d63,	// (0x000833f2) list_medium_line_g3_g3

0x0002,

0xfcc9,	// (0x0008b358) list_medium_line_g3_g_ParamLimits

0xfcc9,	// (0x0008b358) list_medium_line_g3_g

0x1a28,	// (0x0007d0b7) list_medium_line_g3_t1_ParamLimits

0x1a28,	// (0x0007d0b7) list_medium_line_g3_t1

0x11aa,	// (0x0007c839) list_medium_line_t2_g3_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_t2_g3_g1

0x9238,	// (0x000848c7) list_medium_line_t2_g3_g2_ParamLimits

0x9238,	// (0x000848c7) list_medium_line_t2_g3_g2

0x7d63,	// (0x000833f2) list_medium_line_t2_g3_g3_ParamLimits

0x7d63,	// (0x000833f2) list_medium_line_t2_g3_g3

0x0002,

0xfcc9,	// (0x0008b358) list_medium_line_t2_g3_g_ParamLimits

0xfcc9,	// (0x0008b358) list_medium_line_t2_g3_g

0x1a3d,	// (0x0007d0cc) list_medium_line_t2_g3_t1_ParamLimits

0x1a3d,	// (0x0007d0cc) list_medium_line_t2_g3_t1

0x1a57,	// (0x0007d0e6) list_medium_line_t2_g3_t2_ParamLimits

0x1a57,	// (0x0007d0e6) list_medium_line_t2_g3_t2

0x0001,

0xfcd0,	// (0x0008b35f) list_medium_line_t2_g3_t_ParamLimits

0xfcd0,	// (0x0008b35f) list_medium_line_t2_g3_t

0x11aa,	// (0x0007c839) list_medium_line_t3_g3_g1_ParamLimits

0x11aa,	// (0x0007c839) list_medium_line_t3_g3_g1

0x9238,	// (0x000848c7) list_medium_line_t3_g3_g2_ParamLimits

0x9238,	// (0x000848c7) list_medium_line_t3_g3_g2

0x7d63,	// (0x000833f2) list_medium_line_t3_g3_g3_ParamLimits

0x7d63,	// (0x000833f2) list_medium_line_t3_g3_g3

0x0002,

0xfcc9,	// (0x0008b358) list_medium_line_t3_g3_g_ParamLimits

0xfcc9,	// (0x0008b358) list_medium_line_t3_g3_g

0x1a6d,	// (0x0007d0fc) list_medium_line_t3_g3_t1_ParamLimits

0x1a6d,	// (0x0007d0fc) list_medium_line_t3_g3_t1

0x1a86,	// (0x0007d115) list_medium_line_t3_g3_t2_ParamLimits

0x1a86,	// (0x0007d115) list_medium_line_t3_g3_t2

0x1a9c,	// (0x0007d12b) list_medium_line_t3_g3_t3_ParamLimits

0x1a9c,	// (0x0007d12b) list_medium_line_t3_g3_t3

0x0002,

0xfcd5,	// (0x0008b364) list_medium_line_t3_g3_t_ParamLimits

0xfcd5,	// (0x0008b364) list_medium_line_t3_g3_t

0x9224,	// (0x000848b3) list_medium_line_right_iconx2_g1

0x90f9,	// (0x00084788) list_medium_line_right_iconx2_g2

0x0001,

0xfcdc,	// (0x0008b36b) list_medium_line_right_iconx2_g

0x9244,	// (0x000848d3) list_medium_line_right_iconx2_t1

0x9224,	// (0x000848b3) list_medium_line_t2_right_iconx2_g1

0x90f9,	// (0x00084788) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcdc,	// (0x0008b36b) list_medium_line_t2_right_iconx2_g

0x1ab2,	// (0x0007d141) list_medium_line_t2_right_iconx2_t1

0x1ac2,	// (0x0007d151) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfce1,	// (0x0008b370) list_medium_line_t2_right_iconx2_t

0x1ad0,	// (0x0007d15f) list_medium_line_x4_t4_t1

0x1ade,	// (0x0007d16d) list_medium_line_x4_t4_t2

0x1aee,	// (0x0007d17d) list_medium_line_x4_t4_t3

0x1afe,	// (0x0007d18d) list_medium_line_x4_t4_t4

0x0003,

0xfce6,	// (0x0008b375) list_medium_line_x4_t4_t

0x927c,	// (0x0008490b) tport_appsw_pane_ParamLimits

0x927c,	// (0x0008490b) tport_appsw_pane

0x928a,	// (0x00084919) tport_contact_pane_ParamLimits

0x928a,	// (0x00084919) tport_contact_pane

0x929a,	// (0x00084929) tport_listscroll_pane_ParamLimits

0x929a,	// (0x00084929) tport_listscroll_pane

0x92aa,	// (0x00084939) cell_tport_appsw_pane_ParamLimits

0x92aa,	// (0x00084939) cell_tport_appsw_pane

0xcff9,	// (0x00088688) tport_appsw_pane_g1_ParamLimits

0xcff9,	// (0x00088688) tport_appsw_pane_g1

0xe7e2,	// (0x00089e71) tport_contact_pane_g1

0xe1a2,	// (0x00089831) tport_contact_pane_t1

0xe7eb,	// (0x00089e7a) tport_contact_pane_t2

0x0001,

0x0b57,	// (0x0007c1e6) tport_contact_pane_t

0xe7f9,	// (0x00089e88) list_tport_pane

0xe802,	// (0x00089e91) scroll_pane_cp_030

0x92dd,	// (0x0008496c) cell_tport_appsw_pane_g1

0x92ed,	// (0x0008497c) cell_tport_appsw_pane_t1

0x92fb,	// (0x0008498a) grid_highlight_pane_cp019

0x9303,	// (0x00084992) list_tport_double_graphic_pane_ParamLimits

0x9303,	// (0x00084992) list_tport_double_graphic_pane

0xacca,	// (0x00086359) list_highlight_pane_cp023_ParamLimits

0xacca,	// (0x00086359) list_highlight_pane_cp023

0x9314,	// (0x000849a3) list_tport_double_graphic_pane_g1_ParamLimits

0x9314,	// (0x000849a3) list_tport_double_graphic_pane_g1

0x9321,	// (0x000849b0) list_tport_double_graphic_pane_t1_ParamLimits

0x9321,	// (0x000849b0) list_tport_double_graphic_pane_t1

0x9336,	// (0x000849c5) list_tport_double_graphic_pane_t2_ParamLimits

0x9336,	// (0x000849c5) list_tport_double_graphic_pane_t2

0x0001,

0xfcf6,	// (0x0008b385) list_tport_double_graphic_pane_t_ParamLimits

0xfcf6,	// (0x0008b385) list_tport_double_graphic_pane_t

0xa160,	// (0x000857ef) main_cale_note_pane

0x7582,	// (0x00082c11) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7582,	// (0x00082c11) cell_vitu2_function_top_wide_pane_cp01

0x8d6e,	// (0x000843fd) wait_bar_pane_cp05_ParamLimits

0xacca,	// (0x00086359) listscroll_cmail_pane

0xe80b,	// (0x00089e9a) list_cmail_pane

0x9348,	// (0x000849d7) list_cmail_body_pane

0x936f,	// (0x000849fe) list_single_cmail_header_caption_pane

0x939a,	// (0x00084a29) list_single_cmail_header_detail_pane_ParamLimits

0x939a,	// (0x00084a29) list_single_cmail_header_detail_pane

0xe81b,	// (0x00089eaa) list_single_cmail_header_caption_pane_t1

0x1b0e,	// (0x0007d19d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1b0e,	// (0x0007d19d) list_single_cmail_header_detail_pane_g1

0x93d0,	// (0x00084a5f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x93d0,	// (0x00084a5f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcfb,	// (0x0008b38a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcfb,	// (0x0008b38a) list_single_cmail_header_detail_pane_g

0x1b24,	// (0x0007d1b3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1b24,	// (0x0007d1b3) list_single_cmail_header_detail_pane_t1

0x1b84,	// (0x0007d213) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1b84,	// (0x0007d213) list_single_cmail_header_editor_pane_bg

0xe2ff,	// (0x0008998e) list_cmail_body_pane_g1

0xe83f,	// (0x00089ece) list_cmail_body_pane_t1

0xd6fa,	// (0x00088d89) list_single_cmail_header_editor_pane_bg_g1

0xace9,	// (0x00086378) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd70a,	// (0x00088d99) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd702,	// (0x00088d91) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd91e,	// (0x00088fad) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd72a,	// (0x00088db9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd71a,	// (0x00088da9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd722,	// (0x00088db1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb2,	// (0x00086341) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x93dc,	// (0x00084a6b) calenote_gesture_pane_ParamLimits

0x93dc,	// (0x00084a6b) calenote_gesture_pane

0x93f6,	// (0x00084a85) calenote_window_pane_ParamLimits

0x93f6,	// (0x00084a85) calenote_window_pane

0xe84d,	// (0x00089edc) popup_note_window_cp01

0x940e,	// (0x00084a9d) calenote_swipe_1_pane_ParamLimits

0x940e,	// (0x00084a9d) calenote_swipe_1_pane

0x909b,	// (0x0008472a) calenote_swipe_2_pane_ParamLimits

0x909b,	// (0x0008472a) calenote_swipe_2_pane

0xe650,	// (0x00089cdf) calenote_swipe_1_pane_g1_ParamLimits

0xe650,	// (0x00089cdf) calenote_swipe_1_pane_g1

0xe65d,	// (0x00089cec) calenote_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x00089cec) calenote_swipe_1_pane_g2

0x0001,

0x0a88,	// (0x0007c117) calenote_swipe_1_pane_g_ParamLimits

0x0a88,	// (0x0007c117) calenote_swipe_1_pane_g

0xe85f,	// (0x00089eee) calenote_swipe_1_pane_t1_ParamLimits

0xe85f,	// (0x00089eee) calenote_swipe_1_pane_t1

0xe650,	// (0x00089cdf) calenote_swipe_2_pane_g1_ParamLimits

0xe650,	// (0x00089cdf) calenote_swipe_2_pane_g1

0xe87e,	// (0x00089f0d) calenote_swipe_2_pane_g2_ParamLimits

0xe87e,	// (0x00089f0d) calenote_swipe_2_pane_g2

0x0001,

0x0b74,	// (0x0007c203) calenote_swipe_2_pane_g_ParamLimits

0x0b74,	// (0x0007c203) calenote_swipe_2_pane_g

0xe88a,	// (0x00089f19) calenote_swipe_2_pane_t1_ParamLimits

0xe88a,	// (0x00089f19) calenote_swipe_2_pane_t1

0xa160,	// (0x000857ef) main_mup_navstr_pane

0x61d5,	// (0x00081864) main_mup3_pane_t7_ParamLimits

0x61d5,	// (0x00081864) main_mup3_pane_t7

0x6c1b,	// (0x000822aa) main_mp4_pane_g6_ParamLimits

0x6c1b,	// (0x000822aa) main_mp4_pane_g6

0x6fab,	// (0x0008263a) main_image3_pane_t4_ParamLimits

0x6fab,	// (0x0008263a) main_image3_pane_t4

0x9421,	// (0x00084ab0) popup_navstr_preview_pane_ParamLimits

0x9421,	// (0x00084ab0) popup_navstr_preview_pane

0x942d,	// (0x00084abc) scroll_navstr_pane_ParamLimits

0x942d,	// (0x00084abc) scroll_navstr_pane

0xa160,	// (0x000857ef) bg_popup_preview_window_pane_cp04

0xe8b1,	// (0x00089f40) popup_navstr_preview_pane_t1

0x9439,	// (0x00084ac8) scroll_navstr_pane_g1_ParamLimits

0x9439,	// (0x00084ac8) scroll_navstr_pane_g1

0x9446,	// (0x00084ad5) scroll_navstr_pane_t1_ParamLimits

0x9446,	// (0x00084ad5) scroll_navstr_pane_t1

0xe856,	// (0x00089ee5) bg_button_pane_cp014

0xe856,	// (0x00089ee5) bg_button_pane_cp030

0x1507,	// (0x0007cb96) list_double_fisheye_pane_g4_ParamLimits

0x1507,	// (0x0007cb96) list_double_fisheye_pane_g4

0x1513,	// (0x0007cba2) list_double_fisheye_pane_g5_ParamLimits

0x1513,	// (0x0007cba2) list_double_fisheye_pane_g5

0xc590,	// (0x00087c1f) sp_fs_scroll_pane_cp03

0xe770,	// (0x00089dff) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77c,	// (0x00089e0b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc49,	// (0x0008b2d8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x919c,	// (0x0008482b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe813,	// (0x00089ea2) sp_fs_scroll_pane_cp02

0xa9b8,	// (0x00086047) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9b8,	// (0x00086047) popup_sp_fs_calendar_preview_list_single_pane

0xa160,	// (0x000857ef) main_cam6_pano_pane

0xacca,	// (0x00086359) main_mup3_pane_ParamLimits

0xa160,	// (0x000857ef) main_phacti_pane

0x8c43,	// (0x000842d2) bg_button_pane_cp11

0x8c5b,	// (0x000842ea) main_mobtv_info_pane_g2_ParamLimits

0x8c5b,	// (0x000842ea) main_mobtv_info_pane_g2

0x0001,

0xfbed,	// (0x0008b27c) main_mobtv_info_pane_g_ParamLimits

0xfbed,	// (0x0008b27c) main_mobtv_info_pane_g

0x8e0d,	// (0x0008449c) sc_clock_pane_t5_ParamLimits

0x8e0d,	// (0x0008449c) sc_clock_pane_t5

0x8eae,	// (0x0008453d) main_radioblah_pane_g1_ParamLimits

0xe59c,	// (0x00089c2b) main_radioblah_pane_t3_ParamLimits

0xe59c,	// (0x00089c2b) main_radioblah_pane_t3

0xe5b4,	// (0x00089c43) main_radioblah_pane_t4_ParamLimits

0xe5b4,	// (0x00089c43) main_radioblah_pane_t4

0x8ecc,	// (0x0008455b) main_radioblah_text_pane_ParamLimits

0x8ecc,	// (0x0008455b) main_radioblah_text_pane

0x8ed9,	// (0x00084568) main_radioblah_info_pane_g1_ParamLimits

0x8f6e,	// (0x000845fd) main_radioblah_info_pane_t4_ParamLimits

0x8f6e,	// (0x000845fd) main_radioblah_info_pane_t4

0xacca,	// (0x00086359) main_sp_fs_calendar_pane

0x9458,	// (0x00084ae7) main_phacti_pane_g1

0x9460,	// (0x00084aef) phacti_note_pane_ParamLimits

0x9460,	// (0x00084aef) phacti_note_pane

0xe8c8,	// (0x00089f57) phacti_term_pane_ParamLimits

0xe8c8,	// (0x00089f57) phacti_term_pane

0xe8dd,	// (0x00089f6c) phacti_note_pane_t1_ParamLimits

0xe8dd,	// (0x00089f6c) phacti_note_pane_t1

0x1b9b,	// (0x0007d22a) phacti_term_pane_g1

0x1ba3,	// (0x0007d232) phacti_term_pane_t1_ParamLimits

0x1ba3,	// (0x0007d232) phacti_term_pane_t1

0xe8f4,	// (0x00089f83) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa57,	// (0x000860e6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd0c,	// (0x0008b39b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8fc,	// (0x00089f8b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8fc,	// (0x00089f8b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe912,	// (0x00089fa1) aid_popup_sp_fs_bg_corner_pane

0xcd11,	// (0x000883a0) popup_sp_fs_calendar_preview_bg_pane_g1

0xa160,	// (0x000857ef) popup_sp_fs_calendar_preview_bg_pane

0xe91a,	// (0x00089fa9) popup_sp_fs_calendar_preview_list_pane

0xc909,	// (0x00087f98) bg_main_sp_fs_cale_pane_ParamLimits

0xc909,	// (0x00087f98) bg_main_sp_fs_cale_pane

0x1bcd,	// (0x0007d25c) listscroll_cale_mrui_pane_ParamLimits

0x1bcd,	// (0x0007d25c) listscroll_cale_mrui_pane

0x1be2,	// (0x0007d271) listscroll_sp_fs_schedule_track_pane

0x1beb,	// (0x0007d27a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1beb,	// (0x0007d27a) main_sp_fs_ctrlbar_pane_cp01

0xe922,	// (0x00089fb1) main_sp_fs_ribbon_pane

0x1bfe,	// (0x0007d28d) popup_sp_fs_cale_preview_window

0x94cc,	// (0x00084b5b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x94cc,	// (0x00084b5b) list_single_sp_fs_schedule_track_pane

0xe9ad,	// (0x0008a03c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe9ad,	// (0x0008a03c) bg_sp_fs_highlight_list_pane_cp03

0x94ee,	// (0x00084b7d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x94ee,	// (0x00084b7d) list_single_sp_fs_schedule_track_pane_g1

0x94fa,	// (0x00084b89) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x94fa,	// (0x00084b89) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd11,	// (0x0008b3a0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd11,	// (0x0008b3a0) list_single_sp_fs_schedule_track_pane_g

0x9506,	// (0x00084b95) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9506,	// (0x00084b95) list_single_sp_fs_schedule_track_pane_t1

0x951e,	// (0x00084bad) sp_fs_schedule_track_pane_ParamLimits

0x951e,	// (0x00084bad) sp_fs_schedule_track_pane

0xe92a,	// (0x00089fb9) sp_fs_schedule_track_pane_g1

0xe932,	// (0x00089fc1) sp_fs_schedule_track_pane_g2

0xe93a,	// (0x00089fc9) sp_fs_schedule_track_pane_g3

0xe942,	// (0x00089fd1) sp_fs_schedule_track_pane_g4

0xe94a,	// (0x00089fd9) sp_fs_schedule_track_pane_g5

0x0004,

0x0b88,	// (0x0007c217) sp_fs_schedule_track_pane_g

0xd6fa,	// (0x00088d89) bg_sp_fs_schedule_viewer_highlight_g1

0xace9,	// (0x00086378) bg_sp_fs_schedule_viewer_highlight_g2

0xd702,	// (0x00088d91) bg_sp_fs_schedule_viewer_highlight_g3

0xd70a,	// (0x00088d99) bg_sp_fs_schedule_viewer_highlight_g4

0xd91e,	// (0x00088fad) bg_sp_fs_schedule_viewer_highlight_g5

0xd71a,	// (0x00088da9) bg_sp_fs_schedule_viewer_highlight_g6

0xd722,	// (0x00088db1) bg_sp_fs_schedule_viewer_highlight_g7

0xd72a,	// (0x00088db9) bg_sp_fs_schedule_viewer_highlight_g8

0xacb2,	// (0x00086341) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd16,	// (0x0008b3a5) bg_sp_fs_schedule_viewer_highlight_g

0xa160,	// (0x000857ef) bg_main_sp_fs_ribbon_pane

0x952e,	// (0x00084bbd) main_sp_fs_ribbon_pane_g1

0xe952,	// (0x00089fe1) main_sp_fs_ribbon_pane_t1

0x9537,	// (0x00084bc6) main_sp_fs_ribbon_pane_t2

0xe961,	// (0x00089ff0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd29,	// (0x0008b3b8) main_sp_fs_ribbon_pane_t

0xe970,	// (0x00089fff) main_sp_fs_ribbon_scheduler_pane

0xe978,	// (0x0008a007) bg_main_sp_fs_ribbon_pane_g1

0xe981,	// (0x0008a010) bg_main_sp_fs_ribbon_pane_g2

0xe98a,	// (0x0008a019) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0bad,	// (0x0007c23c) bg_main_sp_fs_ribbon_pane_g

0xe992,	// (0x0008a021) main_sp_fs_ribbon_scheduler_pane_g1

0xe99b,	// (0x0008a02a) main_sp_fs_ribbon_scheduler_pane_g2

0xe9a4,	// (0x0008a033) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0bb4,	// (0x0007c243) main_sp_fs_ribbon_scheduler_pane_g

0xe9c3,	// (0x0008a052) list_cale_mrui_pane

0x9546,	// (0x00084bd5) sp_fs_scroll_pane_cp07_ParamLimits

0x9546,	// (0x00084bd5) sp_fs_scroll_pane_cp07

0x9562,	// (0x00084bf1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9562,	// (0x00084bf1) bg_sp_fs_schedule_viewer_highlight

0xe9d0,	// (0x0008a05f) list_single_sp_fs_schedule_track_pane_cp01

0xe9d8,	// (0x0008a067) list_sp_fs_schedule_track_pane

0xe9e0,	// (0x0008a06f) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e0,	// (0x0008a06f) sp_fs_scroll_pane_cp06

0xcd11,	// (0x000883a0) bgmain_sp_fs_calendar_pane_g1

0x1c10,	// (0x0007d29f) list_single_cale_mrui_pane_ParamLimits

0x1c10,	// (0x0007d29f) list_single_cale_mrui_pane

0x1c3d,	// (0x0007d2cc) list_single_cale_mrui_row_pane_ParamLimits

0x1c3d,	// (0x0007d2cc) list_single_cale_mrui_row_pane

0x1c4a,	// (0x0007d2d9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1c4a,	// (0x0007d2d9) list_single_cale_mrui_row_pane_g1

0x1c82,	// (0x0007d311) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1c82,	// (0x0007d311) list_single_cale_mrui_row_pane_t1

0x1c94,	// (0x0007d323) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1c94,	// (0x0007d323) list_single_cale_mrui_row_pane_t2

0x1cfa,	// (0x0007d389) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1cfa,	// (0x0007d389) list_single_cale_mrui_row_pane_t3

0x1d29,	// (0x0007d3b8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1d29,	// (0x0007d3b8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd37,	// (0x0008b3c6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd37,	// (0x0008b3c6) list_single_cale_mrui_row_pane_t

0x1d58,	// (0x0007d3e7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1d58,	// (0x0007d3e7) list_single_cmail_header_editor_pane_bg_cp01

0x1d78,	// (0x0007d407) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1d78,	// (0x0007d407) list_single_cmail_header_editor_pane_bg_cp02

0x956f,	// (0x00084bfe) main_radioblah_text_pane_t1_ParamLimits

0x956f,	// (0x00084bfe) main_radioblah_text_pane_t1

0xe9ff,	// (0x0008a08e) cam6_indi_pane_cp01

0xea07,	// (0x0008a096) cam6_mode_pane_cp01

0xea0f,	// (0x0008a09e) cam6_pano_pane

0xea18,	// (0x0008a0a7) cam6_zoom_pane_cp01

0xea20,	// (0x0008a0af) cam6_pano_image_pane

0xea2b,	// (0x0008a0ba) cam6_pano_pane_g1

0xe2ff,	// (0x0008998e) cam6_pano_pane_g2

0xea34,	// (0x0008a0c3) cam6_pano_pane_g3

0xea3d,	// (0x0008a0cc) cam6_pano_pane_g4

0xd2fc,	// (0x0008898b) cam6_pano_pane_g5

0xea46,	// (0x0008a0d5) cam6_pano_pane_g6

0xe9bb,	// (0x0008a04a) cam6_pano_pane_g7

0xea50,	// (0x0008a0df) cam6_pano_pane_g8

0xea59,	// (0x0008a0e8) cam6_pano_pane_g9

0x0008,

0xfd40,	// (0x0008b3cf) cam6_pano_pane_g

0xa160,	// (0x000857ef) main_browser_tag_pane

0xe8a9,	// (0x00089f38) grid_navstr_albumart_pane

0xea64,	// (0x0008a0f3) cell_navstr_albumart_pane_ParamLimits

0xea64,	// (0x0008a0f3) cell_navstr_albumart_pane

0xea84,	// (0x0008a113) cell_navstr_albumart_pane_g1

0xc71a,	// (0x00087da9) cell_navstr_albumart_pane_g2

0xc72a,	// (0x00087db9) cell_navstr_albumart_pane_g3

0xc722,	// (0x00087db1) cell_navstr_albumart_pane_g4

0x0003,

0xfd53,	// (0x0008b3e2) cell_navstr_albumart_pane_g

0x958a,	// (0x00084c19) bt_list_pane_ParamLimits

0x958a,	// (0x00084c19) bt_list_pane

0x95aa,	// (0x00084c39) bt_list_pane_t1

0x95b9,	// (0x00084c48) bt_list_pane_t2

0x0001,

0xfd5c,	// (0x0008b3eb) bt_list_pane_t

0xa160,	// (0x000857ef) main_cale_prevew_pane

0x95c8,	// (0x00084c57) popup_cale_preview_window_ParamLimits

0x95c8,	// (0x00084c57) popup_cale_preview_window

0xacca,	// (0x00086359) bg_popup_preview_window_pane_cp05_ParamLimits

0xacca,	// (0x00086359) bg_popup_preview_window_pane_cp05

0xea8c,	// (0x0008a11b) list_cale_preview_pane_ParamLimits

0xea8c,	// (0x0008a11b) list_cale_preview_pane

0x95e1,	// (0x00084c70) list_double_cale_preview_pane_ParamLimits

0x95e1,	// (0x00084c70) list_double_cale_preview_pane

0x95f3,	// (0x00084c82) list_single_cale_preview_pane_ParamLimits

0x95f3,	// (0x00084c82) list_single_cale_preview_pane

0x9609,	// (0x00084c98) list_single_cale_preview_pane_g1

0x9611,	// (0x00084ca0) list_single_cale_preview_pane_t1_ParamLimits

0x9611,	// (0x00084ca0) list_single_cale_preview_pane_t1

0x9626,	// (0x00084cb5) list_double_cale_preview_pane_g1

0x962e,	// (0x00084cbd) list_double_cale_preview_pane_t1_ParamLimits

0x962e,	// (0x00084cbd) list_double_cale_preview_pane_t1

0x9643,	// (0x00084cd2) list_double_cale_preview_pane_t2_ParamLimits

0x9643,	// (0x00084cd2) list_double_cale_preview_pane_t2

0x0001,

0xfd61,	// (0x0008b3f0) list_double_cale_preview_pane_t_ParamLimits

0xfd61,	// (0x0008b3f0) list_double_cale_preview_pane_t

0xa160,	// (0x000857ef) main_ezdial_pane

0xacca,	// (0x00086359) main_sp_fs_email_pane_ParamLimits

0x9101,	// (0x00084790) cmail_ddmenu_btn01_pane_ParamLimits

0x9101,	// (0x00084790) cmail_ddmenu_btn01_pane

0x911e,	// (0x000847ad) cmail_ddmenu_btn02_pane_ParamLimits

0x911e,	// (0x000847ad) cmail_ddmenu_btn02_pane

0x913c,	// (0x000847cb) cmail_ddmenu_btn03_pane_ParamLimits

0x913c,	// (0x000847cb) cmail_ddmenu_btn03_pane

0x91d7,	// (0x00084866) main_sp_fs_ctrlbar_pane_ParamLimits

0x91ed,	// (0x0008487c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9348,	// (0x000849d7) list_cmail_body_pane_ParamLimits

0xe829,	// (0x00089eb8) bg_button_pane_cp12

0xe832,	// (0x00089ec1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe832,	// (0x00089ec1) list_single_cmail_header_detail_pane_g3

0x1b60,	// (0x0007d1ef) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1b60,	// (0x0007d1ef) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd02,	// (0x0008b391) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd02,	// (0x0008b391) list_single_cmail_header_detail_pane_t

0x1bb8,	// (0x0007d247) phacti_term_pane_t2_ParamLimits

0x1bb8,	// (0x0007d247) phacti_term_pane_t2

0x0001,

0xfd07,	// (0x0008b396) phacti_term_pane_t_ParamLimits

0xfd07,	// (0x0008b396) phacti_term_pane_t

0xea98,	// (0x0008a127) aid_size_list_single_double

0x965b,	// (0x00084cea) popup_ezdial_listscroll_window

0x967c,	// (0x00084d0b) popup_number_entry_window_cp01

0xaa79,	// (0x00086108) bg_popup_call_pane_cp09

0xeaa4,	// (0x0008a133) ezdial_list_pane

0xeaac,	// (0x0008a13b) scroll_pane_cp23

0xcaf6,	// (0x00088185) bg_button_pane_cp028_ParamLimits

0xcaf6,	// (0x00088185) bg_button_pane_cp028

0x968a,	// (0x00084d19) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x968a,	// (0x00084d19) cmail_ddmenu_btn01_pane_g1

0x969a,	// (0x00084d29) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x969a,	// (0x00084d29) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd66,	// (0x0008b3f5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd66,	// (0x0008b3f5) cmail_ddmenu_btn01_pane_g

0xeab4,	// (0x0008a143) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeab4,	// (0x0008a143) cmail_ddmenu_btn01_pane_t1

0xc909,	// (0x00087f98) bg_button_pane_cp029_ParamLimits

0xc909,	// (0x00087f98) bg_button_pane_cp029

0x969a,	// (0x00084d29) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x969a,	// (0x00084d29) cmail_ddmenu_btn02_pane_g1

0x96b2,	// (0x00084d41) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x96b2,	// (0x00084d41) cmail_ddmenu_btn02_pane_t1

0xe9ad,	// (0x0008a03c) bg_button_pane_cp031_ParamLimits

0xe9ad,	// (0x0008a03c) bg_button_pane_cp031

0x969a,	// (0x00084d29) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x969a,	// (0x00084d29) cmail_ddmenu_btn03_pane_g1

0x96b2,	// (0x00084d41) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x96b2,	// (0x00084d41) cmail_ddmenu_btn03_pane_t1

0x6e56,	// (0x000824e5) cell_dialer2_keypad_pane_t1_ParamLimits

0x6e70,	// (0x000824ff) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6e70,	// (0x000824ff) cell_dialer2_keypad_pane_t1_copy1

0x8a84,	// (0x00084113) ncimui_group_button_pane

0xacca,	// (0x00086359) main_sp_fs_calendar_pane_ParamLimits

0x936f,	// (0x000849fe) list_single_cmail_header_caption_pane_ParamLimits

0x9494,	// (0x00084b23) aid_recal_txt_sm_pane

0xa160,	// (0x000857ef) mian_recal_day_pane

0x1bfe,	// (0x0007d28d) popup_sp_fs_cale_preview_window_ParamLimits

0xeac9,	// (0x0008a158) list_recal_day_pane

0x1daf,	// (0x0007d43e) list_single_recal_day_pane_ParamLimits

0x1daf,	// (0x0007d43e) list_single_recal_day_pane

0xeaf0,	// (0x0008a17f) list_single_recal_day_pane_g1_ParamLimits

0xeaf0,	// (0x0008a17f) list_single_recal_day_pane_g1

0x1dc1,	// (0x0007d450) list_single_recal_day_pane_g2_ParamLimits

0x1dc1,	// (0x0007d450) list_single_recal_day_pane_g2

0x1dcd,	// (0x0007d45c) list_single_recal_day_pane_g3_ParamLimits

0x1dcd,	// (0x0007d45c) list_single_recal_day_pane_g3

0x1dd9,	// (0x0007d468) list_single_recal_day_pane_g4_ParamLimits

0x1dd9,	// (0x0007d468) list_single_recal_day_pane_g4

0x1de7,	// (0x0007d476) list_single_recal_day_pane_g5_ParamLimits

0x1de7,	// (0x0007d476) list_single_recal_day_pane_g5

0x1dfd,	// (0x0007d48c) list_single_recal_day_pane_g6_ParamLimits

0x1dfd,	// (0x0007d48c) list_single_recal_day_pane_g6

0x0004,

0xfd75,	// (0x0008b404) list_single_recal_day_pane_g_ParamLimits

0xfd75,	// (0x0008b404) list_single_recal_day_pane_g

0x1e11,	// (0x0007d4a0) list_single_recal_day_pane_t1

0x1e23,	// (0x0007d4b2) list_single_recal_day_pane_t2

0x0001,

0xfd80,	// (0x0008b40f) list_single_recal_day_pane_t

0x96d6,	// (0x00084d65) ncimui_query_button_pane_ParamLimits

0x96d6,	// (0x00084d65) ncimui_query_button_pane

0x96e6,	// (0x00084d75) ncimui_query_button_pane_t1_ParamLimits

0x96e6,	// (0x00084d75) ncimui_query_button_pane_t1

0xeafc,	// (0x0008a18b) ncimui_query_button_pane_t2_ParamLimits

0xeafc,	// (0x0008a18b) ncimui_query_button_pane_t2

0x0001,

0xfd85,	// (0x0008b414) ncimui_query_button_pane_t_ParamLimits

0xfd85,	// (0x0008b414) ncimui_query_button_pane_t

0x96f9,	// (0x00084d88) query_button_pane_ParamLimits

0x96f9,	// (0x00084d88) query_button_pane

0xa160,	// (0x000857ef) bg_button_pane_cp0028

0xeb0f,	// (0x0008a19e) query_button_pane_t1

0x51b6,	// (0x00080845) main_tport_pane_ParamLimits

0x9252,	// (0x000848e1) bg_popup_window_pane_cp01_ParamLimits

0x9252,	// (0x000848e1) bg_popup_window_pane_cp01

0x9260,	// (0x000848ef) heading_pane_cp08_ParamLimits

0x9260,	// (0x000848ef) heading_pane_cp08

0x926e,	// (0x000848fd) heading_pane_cp07_ParamLimits

0x926e,	// (0x000848fd) heading_pane_cp07

0x92dd,	// (0x0008496c) cell_tport_appsw_pane_g2

0x0002,

0xfcef,	// (0x0008b37e) cell_tport_appsw_pane_g

0x0f63,	// (0x0007c5f2) input_candi_list_open_g1

0xaeb5,	// (0x00086544) list_cale_time_pane_g6_ParamLimits

0xaeb5,	// (0x00086544) list_cale_time_pane_g6

0x5c3b,	// (0x000812ca) aid_size_touch_calib_1_ParamLimits

0x5c3b,	// (0x000812ca) aid_size_touch_calib_1

0x5c47,	// (0x000812d6) aid_size_touch_calib_2_ParamLimits

0x5c47,	// (0x000812d6) aid_size_touch_calib_2

0x5c55,	// (0x000812e4) aid_size_touch_calib_3_ParamLimits

0x5c55,	// (0x000812e4) aid_size_touch_calib_3

0x5c65,	// (0x000812f4) aid_size_touch_calib_4_ParamLimits

0x5c65,	// (0x000812f4) aid_size_touch_calib_4

0x5c73,	// (0x00081302) main_touch_calib_button_group_pane_ParamLimits

0x5c73,	// (0x00081302) main_touch_calib_button_group_pane

0x5c81,	// (0x00081310) main_touch_calib_pane_g1_ParamLimits

0x5c8d,	// (0x0008131c) main_touch_calib_pane_g2_ParamLimits

0x5c99,	// (0x00081328) main_touch_calib_pane_g3_ParamLimits

0x5ca5,	// (0x00081334) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0008adc5) main_touch_calib_pane_g_ParamLimits

0x5cb1,	// (0x00081340) main_touch_calib_pane_t1_ParamLimits

0x5cca,	// (0x00081359) main_touch_calib_pane_t2_ParamLimits

0x5ce3,	// (0x00081372) main_touch_calib_pane_t3_ParamLimits

0x5cf9,	// (0x00081388) main_touch_calib_pane_t4_ParamLimits

0x5d0f,	// (0x0008139e) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0008adce) main_touch_calib_pane_t_ParamLimits

0xd094,	// (0x00088723) list_single_fp_cale_pane_g3_ParamLimits

0xd094,	// (0x00088723) list_single_fp_cale_pane_g3

0xacca,	// (0x00086359) bg_button_pane_cp012_ParamLimits

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp03_ParamLimits

0x7ce3,	// (0x00083372) cell_vitu2_function_top_pane_g1_ParamLimits

0xacca,	// (0x00086359) bg_vkb2_func_pane_cp04_ParamLimits

0x8a0c,	// (0x0008409b) main_ncimui_button_group_pane_ParamLimits

0x8a0c,	// (0x0008409b) main_ncimui_button_group_pane

0x8a72,	// (0x00084101) main_ncimui_pane_t3_ParamLimits

0x8a72,	// (0x00084101) main_ncimui_pane_t3

0xe8bf,	// (0x00089f4e) phacti_button_group_pane

0xea98,	// (0x0008a127) aid_size_list_single_double_ParamLimits

0x965b,	// (0x00084cea) popup_ezdial_listscroll_window_ParamLimits

0x967c,	// (0x00084d0b) popup_number_entry_window_cp01_ParamLimits

0x9706,	// (0x00084d95) phacti_button_pane_ParamLimits

0x9706,	// (0x00084d95) phacti_button_pane

0xa160,	// (0x000857ef) bg_button_pane_cp14

0xeb1d,	// (0x0008a1ac) phacti_button_pane_t1

0x9717,	// (0x00084da6) main_touch_calib_button_pane_ParamLimits

0x9717,	// (0x00084da6) main_touch_calib_button_pane

0xa8b4,	// (0x00085f43) bg_button_pane_cp18_ParamLimits

0xa8b4,	// (0x00085f43) bg_button_pane_cp18

0xeb2b,	// (0x0008a1ba) main_touch_calib_button_pane_t1_ParamLimits

0xeb2b,	// (0x0008a1ba) main_touch_calib_button_pane_t1

0xeb41,	// (0x0008a1d0) main_touch_calib_button_pane_t2_ParamLimits

0xeb41,	// (0x0008a1d0) main_touch_calib_button_pane_t2

0x0001,

0x0c15,	// (0x0007c2a4) main_touch_calib_button_pane_t_ParamLimits

0x0c15,	// (0x0007c2a4) main_touch_calib_button_pane_t

0xa160,	// (0x000857ef) cell_ncimui_button_pane

0xa160,	// (0x000857ef) bg_button_pane_cp032

0xeb5f,	// (0x0008a1ee) cell_ncimui_button_pane_t1

0x6ecc,	// (0x0008255b) image3_infobar_pane_ParamLimits

0x6ecc,	// (0x0008255b) image3_infobar_pane

0x8e2f,	// (0x000844be) fs_bigclock_status_pane_ParamLimits

0x8e2f,	// (0x000844be) fs_bigclock_status_pane

0x8e3c,	// (0x000844cb) main_fs_bigclock_clock_pane_ParamLimits

0x8e3c,	// (0x000844cb) main_fs_bigclock_clock_pane

0x8e50,	// (0x000844df) main_fs_bigclock_indi_pane_ParamLimits

0x8e50,	// (0x000844df) main_fs_bigclock_indi_pane

0x8e78,	// (0x00084507) main_fs_bigclock_swipe_pane_ParamLimits

0x8e78,	// (0x00084507) main_fs_bigclock_swipe_pane

0xa160,	// (0x000857ef) main_fs_clock_dumped_data

0xe40c,	// (0x00089a9b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe40c,	// (0x00089a9b) list_single_fs_bigclock_indicator_pane_g1

0xe427,	// (0x00089ab6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe427,	// (0x00089ab6) list_single_fs_bigclock_indicator_pane_g2

0xe441,	// (0x00089ad0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe441,	// (0x00089ad0) list_single_fs_bigclock_indicator_pane_g3

0xe45b,	// (0x00089aea) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45b,	// (0x00089aea) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0a39,	// (0x0007c0c8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0a39,	// (0x0007c0c8) list_single_fs_bigclock_indicator_pane_g

0xe486,	// (0x00089b15) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe486,	// (0x00089b15) list_single_fs_bigclock_indicator_pane_t1

0xe4ae,	// (0x00089b3d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ae,	// (0x00089b3d) list_single_fs_bigclock_indicator_pane_t2

0xe4d6,	// (0x00089b65) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4d6,	// (0x00089b65) list_single_fs_bigclock_indicator_pane_t3

0xe4fe,	// (0x00089b8d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4fe,	// (0x00089b8d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0a44,	// (0x0007c0d3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0a44,	// (0x0007c0d3) list_single_fs_bigclock_indicator_pane_t

0xeb6d,	// (0x0008a1fc) image3_infobar_fav_pane_ParamLimits

0xeb6d,	// (0x0008a1fc) image3_infobar_fav_pane

0xeb7d,	// (0x0008a20c) image3_infobar_loc_pane_ParamLimits

0xeb7d,	// (0x0008a20c) image3_infobar_loc_pane

0xeb91,	// (0x0008a220) image3_infobar_time_pane_ParamLimits

0xeb91,	// (0x0008a220) image3_infobar_time_pane

0xcd11,	// (0x000883a0) image3_infobar_time_pane_g1

0xeba1,	// (0x0008a230) image3_infobar_time_pane_t1

0xcd11,	// (0x000883a0) image3_infobar_loc_pane_g1

0xebaf,	// (0x0008a23e) image3_infobar_loc_pane_g2

0x0001,

0xfd8a,	// (0x0008b419) image3_infobar_loc_pane_g

0xebb7,	// (0x0008a246) image3_infobar_loc_pane_t1

0xcd11,	// (0x000883a0) image3_infobar_fav_pane_g1

0xebc5,	// (0x0008a254) image3_infobar_fav_pane_g2

0x0001,

0xfd8f,	// (0x0008b41e) image3_infobar_fav_pane_g

0xebcd,	// (0x0008a25c) fs_bigclock_status_battery_pane

0xebd6,	// (0x0008a265) fs_bigclock_status_signal_pane

0xebdf,	// (0x0008a26e) fs_bigclock_status_title_pane

0xebe8,	// (0x0008a277) fs_bigclock_status_signal_pane_g1

0xebf1,	// (0x0008a280) fs_bigclock_status_signal_pane_g2

0x0001,

0x0c24,	// (0x0007c2b3) fs_bigclock_status_signal_pane_g

0xebf9,	// (0x0008a288) fs_bigclock_status_battery_pane_g1

0xec02,	// (0x0008a291) fs_bigclock_status_battery_pane_g2

0x0001,

0x0c29,	// (0x0007c2b8) fs_bigclock_status_battery_pane_g

0xec0a,	// (0x0008a299) fs_bigclock_status_title_pane_t1

0x9727,	// (0x00084db6) main_fs_bigclock_clock_pane_g1

0x9727,	// (0x00084db6) main_fs_bigclock_clock_pane_g2

0x9734,	// (0x00084dc3) main_fs_bigclock_clock_pane_g3

0x9734,	// (0x00084dc3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd94,	// (0x0008b423) main_fs_bigclock_clock_pane_g

0x9740,	// (0x00084dcf) main_fs_bigclock_clock_pane_t1

0x9753,	// (0x00084de2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd9d,	// (0x0008b42c) main_fs_bigclock_clock_pane_t

0xec18,	// (0x0008a2a7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec18,	// (0x0008a2a7) list_single_fs_bigclock_indicator_pane

0xec29,	// (0x0008a2b8) list_single_fs_bigclock_pane_ParamLimits

0xec29,	// (0x0008a2b8) list_single_fs_bigclock_pane

0xec4f,	// (0x0008a2de) main_fs_bigclock_indicator_pane_t1

0xec5e,	// (0x0008a2ed) list_single_fs_bigclock_pane_g1

0xec66,	// (0x0008a2f5) list_single_fs_bigclock_pane_t1

0xcd11,	// (0x000883a0) main_fs_bigclock_swipe_pane_g1

0xeca9,	// (0x0008a338) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfda9,	// (0x0008b438) main_fs_bigclock_swipe_pane_g

0xecb1,	// (0x0008a340) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecb1,	// (0x0008a340) main_fs_bigclock_swipe_pane_t1

0x4246,	// (0x0007f8d5) call_type_pane_ParamLimits

0xa160,	// (0x000857ef) main_btmg_pane

0x1c76,	// (0x0007d305) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1c76,	// (0x0007d305) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd30,	// (0x0008b3bf) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd30,	// (0x0008b3bf) list_single_cale_mrui_row_pane_g

0x1d9e,	// (0x0007d42d) list_recal_vselct_arw_lo_pane

0xeae8,	// (0x0008a177) list_recal_vselct_arw_up_pane

0x1da6,	// (0x0007d435) list_recal_vselct_pane

0x97aa,	// (0x00084e39) btmg_button_pane

0x97b6,	// (0x00084e45) main_btmg_pane_g1

0xa160,	// (0x000857ef) bg_button_pane_cp044

0xecce,	// (0x0008a35d) btmg_button_pane_t1

0xc8f5,	// (0x00087f84) aid_listscroll_gen

0xacca,	// (0x00086359) main_cntbar_detail_pane

0xe80b,	// (0x00089e9a) list_cmail_folder_pane

0xc590,	// (0x00087c1f) sp_fs_scroll_pane_cp03_ParamLimits

0x1e35,	// (0x0007d4c4) list_single_fs_dyc_pane_cp01_ParamLimits

0x1e35,	// (0x0007d4c4) list_single_fs_dyc_pane_cp01

0xecdc,	// (0x0008a36b) aid_size_cmail_indent

0x1e5a,	// (0x0007d4e9) list_single_dyc_row_pane_cp01

0x97de,	// (0x00084e6d) cntbar_detail_list_pane_ParamLimits

0x97de,	// (0x00084e6d) cntbar_detail_list_pane

0x9818,	// (0x00084ea7) main_cntbar_detail_cont_pane_ParamLimits

0x9818,	// (0x00084ea7) main_cntbar_detail_cont_pane

0x423a,	// (0x0007f8c9) scroll_pane_cp032_ParamLimits

0x423a,	// (0x0007f8c9) scroll_pane_cp032

0x9824,	// (0x00084eb3) cntbar_detail_list_event_pane_ParamLimits

0x9824,	// (0x00084eb3) cntbar_detail_list_event_pane

0x97ea,	// (0x00084e79) cntbar_detail_list_shct_pane

0xad37,	// (0x000863c6) aid_list_gen

0xece5,	// (0x0008a374) aid_scroll

0xecee,	// (0x0008a37d) aid_size_touch_scroll_bar

0xa7c8,	// (0x00085e57) aid_list_double

0x9838,	// (0x00084ec7) aid_list_single

0x8287,	// (0x00083916) aid_list_single_lg

0x1e63,	// (0x0007d4f2) aid_list_z_g_a_sm

0x9841,	// (0x00084ed0) aid_list_z_g_d

0x1e6b,	// (0x0007d4fa) aid_txt_z_prm

0x1e79,	// (0x0007d508) aid_txt_z_prm_cp01

0x1e87,	// (0x0007d516) aid_txt_z_sec

0x9849,	// (0x00084ed8) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9849,	// (0x00084ed8) main_cntbar_detail_cont_pane_g1

0x9856,	// (0x00084ee5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9856,	// (0x00084ee5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdae,	// (0x0008b43d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdae,	// (0x0008b43d) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0008a386) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0008a394) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0008a3a2) main_cntbar_detail_cont_pane_t3

0x0002,

0x0c52,	// (0x0007c2e1) main_cntbar_detail_cont_pane_t

0x9862,	// (0x00084ef1) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9862,	// (0x00084ef1) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0008a3b0) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0008a3b9) cntbar_detail_list_shct_pane_g2

0x0001,

0x0c59,	// (0x0007c2e8) cntbar_detail_list_shct_pane_g

0x9876,	// (0x00084f05) cntbar_detail_list_event_pane_g1_ParamLimits

0x9876,	// (0x00084f05) cntbar_detail_list_event_pane_g1

0x9882,	// (0x00084f11) cntbar_detail_list_event_pane_g2_ParamLimits

0x9882,	// (0x00084f11) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb3,	// (0x0008b442) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb3,	// (0x0008b442) cntbar_detail_list_event_pane_g

0x98ee,	// (0x00084f7d) cntbar_detail_list_event_pane_t1_ParamLimits

0x98ee,	// (0x00084f7d) cntbar_detail_list_event_pane_t1

0x9903,	// (0x00084f92) cntbar_detail_list_event_pane_t2_ParamLimits

0x9903,	// (0x00084f92) cntbar_detail_list_event_pane_t2

0x0002,

0xfdc0,	// (0x0008b44f) cntbar_detail_list_event_pane_t_ParamLimits

0xfdc0,	// (0x0008b44f) cntbar_detail_list_event_pane_t

0xcd11,	// (0x000883a0) cell_cntbar_detail_list_shct_pane_g1

0xb4c5,	// (0x00086b54) navi_pane_mv_g3

0xacca,	// (0x00086359) main_cntbar_detail_pane_ParamLimits

0xa160,	// (0x000857ef) main_notif_wgt_pane

0x6b56,	// (0x000821e5) aid_tch_main_mp4_pane_g4

0x6db5,	// (0x00082444) popup_slider_window_cp02

0x1d94,	// (0x0007d423) list_recal_day_event_pane

0x97be,	// (0x00084e4d) cntbar_detail_btn_pane_ParamLimits

0x97be,	// (0x00084e4d) cntbar_detail_btn_pane

0x97ce,	// (0x00084e5d) cntbar_detail_btn_pane_cp01_ParamLimits

0x97ce,	// (0x00084e5d) cntbar_detail_btn_pane_cp01

0x97ea,	// (0x00084e79) cntbar_detail_list_shct_pane_ParamLimits

0x97f6,	// (0x00084e85) cntbar_detail_pane_g1_ParamLimits

0x97f6,	// (0x00084e85) cntbar_detail_pane_g1

0x9802,	// (0x00084e91) cntbar_detail_pane_t1_ParamLimits

0x9802,	// (0x00084e91) cntbar_detail_pane_t1

0x988e,	// (0x00084f1d) cntbar_detail_list_event_pane_g3_ParamLimits

0x988e,	// (0x00084f1d) cntbar_detail_list_event_pane_g3

0x98a6,	// (0x00084f35) cntbar_detail_list_event_pane_g4_ParamLimits

0x98a6,	// (0x00084f35) cntbar_detail_list_event_pane_g4

0x98be,	// (0x00084f4d) cntbar_detail_list_event_pane_g5_ParamLimits

0x98be,	// (0x00084f4d) cntbar_detail_list_event_pane_g5

0x98d6,	// (0x00084f65) cntbar_detail_list_event_pane_g6_ParamLimits

0x98d6,	// (0x00084f65) cntbar_detail_list_event_pane_g6

0x9918,	// (0x00084fa7) cntbar_detail_list_event_pane_t3_ParamLimits

0x9918,	// (0x00084fa7) cntbar_detail_list_event_pane_t3

0x992a,	// (0x00084fb9) popup_notif_wgt_window_ParamLimits

0x992a,	// (0x00084fb9) popup_notif_wgt_window

0x993a,	// (0x00084fc9) popup_submenu_window_cp01_ParamLimits

0x993a,	// (0x00084fc9) popup_submenu_window_cp01

0xaa79,	// (0x00086108) bg_popup_window_pane_cp10

0xed33,	// (0x0008a3c2) listscroll_notif_wgt_pane

0xed45,	// (0x0008a3d4) list_notif_wgt_window

0xed4e,	// (0x0008a3dd) scroll_pane_cp033

0x994c,	// (0x00084fdb) list_notif_wgt_row_pane_ParamLimits

0x994c,	// (0x00084fdb) list_notif_wgt_row_pane

0xed57,	// (0x0008a3e6) aid_size_list_notif_wgt_del

0xed64,	// (0x0008a3f3) list_notif_wgt_row_pane_g1

0xed70,	// (0x0008a3ff) list_notif_wgt_row_pane_g2

0xed7f,	// (0x0008a40e) list_notif_wgt_row_pane_g3

0x0002,

0x0c72,	// (0x0007c301) list_notif_wgt_row_pane_g

0xed8c,	// (0x0008a41b) list_notif_wgt_row_pane_t1

0xeda2,	// (0x0008a431) list_notif_wgt_row_pane_t2

0xedb4,	// (0x0008a443) list_notif_wgt_row_pane_t3

0x0002,

0x0c79,	// (0x0007c308) list_notif_wgt_row_pane_t

0xd926,	// (0x00088fb5) list_recal_day_event_pane_g1

0xedc6,	// (0x0008a455) list_recal_day_event_pane_t1

0xa160,	// (0x000857ef) bg_button_pane_cp045

0x995e,	// (0x00084fed) cntbar_detail_btn_pane_t1

0xc909,	// (0x00087f98) main_callh_pane_ParamLimits

0xc909,	// (0x00087f98) main_callh_pane

0xa160,	// (0x000857ef) main_coverflow0_pane

0xa160,	// (0x000857ef) main_wgtman_pane

0x8e90,	// (0x0008451f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8e90,	// (0x0008451f) main_fs_bigclock_unlock_btn_pane

0x92d5,	// (0x00084964) bg_button_pane_cp16

0x92e5,	// (0x00084974) cell_tport_appsw_pane_g3

0x996c,	// (0x00084ffb) cf0_flow_pane_ParamLimits

0x996c,	// (0x00084ffb) cf0_flow_pane

0xedd5,	// (0x0008a464) listscroll_cf0_pane

0xede0,	// (0x0008a46f) main_cf0_pane_g1

0x997b,	// (0x0008500a) main_cf0_pane_t1_ParamLimits

0x997b,	// (0x0008500a) main_cf0_pane_t1

0x998f,	// (0x0008501e) main_cf0_pane_t2_ParamLimits

0x998f,	// (0x0008501e) main_cf0_pane_t2

0x0001,

0xfdc7,	// (0x0008b456) main_cf0_pane_t_ParamLimits

0xfdc7,	// (0x0008b456) main_cf0_pane_t

0xedf2,	// (0x0008a481) scroll_pane_cp11

0x99a3,	// (0x00085032) cf0_flow_pane_g1

0x99ab,	// (0x0008503a) cf0_flow_pane_g2

0x0001,

0xfdcc,	// (0x0008b45b) cf0_flow_pane_g

0x99b3,	// (0x00085042) cf0_flow_pane_t1

0xa160,	// (0x000857ef) main_call6_pane

0xa160,	// (0x000857ef) main_calllock_pane

0x99c1,	// (0x00085050) call6_btn_grp_pane_ParamLimits

0x99c1,	// (0x00085050) call6_btn_grp_pane

0x99d0,	// (0x0008505f) call6_pane_g1_ParamLimits

0x99d0,	// (0x0008505f) call6_pane_g1

0x99e0,	// (0x0008506f) popup_call6_1st_window_ParamLimits

0x99e0,	// (0x0008506f) popup_call6_1st_window

0x99ee,	// (0x0008507d) popup_call6_2nd_window_ParamLimits

0x99ee,	// (0x0008507d) popup_call6_2nd_window

0x99fc,	// (0x0008508b) cell_call6_btn_pane_ParamLimits

0x99fc,	// (0x0008508b) cell_call6_btn_pane

0xaa79,	// (0x00086108) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x0008a48c) popup_call6_1st_window_g1

0xee05,	// (0x0008a494) popup_call6_1st_window_g2

0xee0d,	// (0x0008a49c) popup_call6_1st_window_g3

0x0002,

0x0c8f,	// (0x0007c31e) popup_call6_1st_window_g

0xee15,	// (0x0008a4a4) popup_call6_1st_window_t1

0xee24,	// (0x0008a4b3) popup_call6_1st_window_t2

0xee32,	// (0x0008a4c1) popup_call6_1st_window_t3

0x0002,

0x0c96,	// (0x0007c325) popup_call6_1st_window_t

0xaa79,	// (0x00086108) bg_popup_call2_in_pane_cp04

0xedfd,	// (0x0008a48c) popup_call6_2nd_window_g1

0xee05,	// (0x0008a494) popup_call6_2nd_window_g2

0xee0d,	// (0x0008a49c) popup_call6_2nd_window_g3

0x0002,

0x0c8f,	// (0x0007c31e) popup_call6_2nd_window_g

0xee15,	// (0x0008a4a4) popup_call6_2nd_window_t1

0xa160,	// (0x000857ef) bg_button_pane_cp15

0xee40,	// (0x0008a4cf) cell_call6_btn_pane_g1

0x9a0b,	// (0x0008509a) cell_call6_btn_pane_t1

0x9a1a,	// (0x000850a9) listscroll_wgtman_pane_ParamLimits

0x9a1a,	// (0x000850a9) listscroll_wgtman_pane

0x9a36,	// (0x000850c5) wgtman_btn_pane_ParamLimits

0x9a36,	// (0x000850c5) wgtman_btn_pane

0xb2be,	// (0x0008694d) aid_scroll_copy1

0xee49,	// (0x0008a4d8) list_wgtman_pane

0x9a6b,	// (0x000850fa) wgtman_btn_pane_g1_ParamLimits

0x9a6b,	// (0x000850fa) wgtman_btn_pane_g1

0x9a93,	// (0x00085122) wgtman_btn_pane_t1_ParamLimits

0x9a93,	// (0x00085122) wgtman_btn_pane_t1

0xee53,	// (0x0008a4e2) wgtman_btn_pane_t2_ParamLimits

0xee53,	// (0x0008a4e2) wgtman_btn_pane_t2

0x0001,

0xfdd1,	// (0x0008b460) wgtman_btn_pane_t_ParamLimits

0xfdd1,	// (0x0008b460) wgtman_btn_pane_t

0x9aca,	// (0x00085159) listrow_wgtman_pane_ParamLimits

0x9aca,	// (0x00085159) listrow_wgtman_pane

0x9ae5,	// (0x00085174) listrow_wgtman_pane_g1

0x9af2,	// (0x00085181) listrow_wgtman_pane_g2

0x0001,

0xfdd6,	// (0x0008b465) listrow_wgtman_pane_g

0x1e95,	// (0x0007d524) listrow_wgtman_pane_t1

0x1ead,	// (0x0007d53c) listrow_wgtman_pane_t2

0x0001,

0xfddb,	// (0x0008b46a) listrow_wgtman_pane_t

0x1ed3,	// (0x0007d562) wait_bar_pane_cp09

0xee6a,	// (0x0008a4f9) main_calllock_btn_pane

0xee74,	// (0x0008a503) main_calllock_pane_g1

0xa160,	// (0x000857ef) bg_button_pane_cp17

0xee40,	// (0x0008a4cf) main_calllock_btn_pane_g1

0xee80,	// (0x0008a50f) main_calllock_btn_pane_t1

0xa160,	// (0x000857ef) main_dialer3_pane

0xa160,	// (0x000857ef) main_fmrd2_pane

0xcd11,	// (0x000883a0) main_fs_bigclock_unlock_btn_pane_g1

0x9b18,	// (0x000851a7) main_fs_bigclock_unlock_btn_pane_t1

0x9b26,	// (0x000851b5) area_fmrd2_info_pane_ParamLimits

0x9b26,	// (0x000851b5) area_fmrd2_info_pane

0x9b34,	// (0x000851c3) area_fmrd2_visual_pane_ParamLimits

0x9b34,	// (0x000851c3) area_fmrd2_visual_pane

0x9b42,	// (0x000851d1) fmrd2_indi_pane_ParamLimits

0x9b42,	// (0x000851d1) fmrd2_indi_pane

0x9b4f,	// (0x000851de) area_fmrd2_visual_pane_g1

0x9b57,	// (0x000851e6) area_fmrd2_visual_pane_t1

0x9b67,	// (0x000851f6) area_fmrd2_visual_pane_t2

0x9b77,	// (0x00085206) area_fmrd2_visual_pane_t3

0x0002,

0xfde5,	// (0x0008b474) area_fmrd2_visual_pane_t

0x9b87,	// (0x00085216) area_fmrd2_info_pane_g1

0x9b8f,	// (0x0008521e) area_fmrd2_info_pane_t1

0x9b9f,	// (0x0008522e) area_fmrd2_info_pane_t2

0x9baf,	// (0x0008523e) area_fmrd2_info_pane_t3

0x9bbf,	// (0x0008524e) area_fmrd2_info_pane_t4

0x0003,

0xfdec,	// (0x0008b47b) area_fmrd2_info_pane_t

0x9bcd,	// (0x0008525c) fmrd2_indi_pane_t1

0x9bdd,	// (0x0008526c) fmrd2_indi_pane_t2

0x9bed,	// (0x0008527c) fmrd2_indi_pane_t3

0x0002,

0xfdf5,	// (0x0008b484) fmrd2_indi_pane_t

0xe46a,	// (0x00089af9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46a,	// (0x00089af9) list_single_fs_bigclock_indicator_pane_g5

0xe51b,	// (0x00089baa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51b,	// (0x00089baa) list_single_fs_bigclock_indicator_pane_t5

0x9476,	// (0x00084b05) aid_cell_bcale_month_pane_ParamLimits

0x9476,	// (0x00084b05) aid_cell_bcale_month_pane

0x949d,	// (0x00084b2c) bcale_month_pane_ParamLimits

0x949d,	// (0x00084b2c) bcale_month_pane

0x94bb,	// (0x00084b4a) bcale_preview_pane_ParamLimits

0x94bb,	// (0x00084b4a) bcale_preview_pane

0xec66,	// (0x0008a2f5) list_single_fs_bigclock_pane_t1_ParamLimits

0xec85,	// (0x0008a314) list_single_fs_bigclock_pane_t2_ParamLimits

0xec85,	// (0x0008a314) list_single_fs_bigclock_pane_t2

0x0001,

0x0c43,	// (0x0007c2d2) list_single_fs_bigclock_pane_t_ParamLimits

0x0c43,	// (0x0007c2d2) list_single_fs_bigclock_pane_t

0x9b10,	// (0x0008519f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde0,	// (0x0008b46f) main_fs_bigclock_unlock_btn_pane_g

0x9bfb,	// (0x0008528a) aid_dia3_key_size_ParamLimits

0x9bfb,	// (0x0008528a) aid_dia3_key_size

0x9c07,	// (0x00085296) aid_dia3_listrow_size_ParamLimits

0x9c07,	// (0x00085296) aid_dia3_listrow_size

0x9c17,	// (0x000852a6) dia3_keypad_fun_pane_ParamLimits

0x9c17,	// (0x000852a6) dia3_keypad_fun_pane

0x9c29,	// (0x000852b8) dia3_keypad_num_pane_ParamLimits

0x9c29,	// (0x000852b8) dia3_keypad_num_pane

0x9c3b,	// (0x000852ca) dia3_listscroll_pane_ParamLimits

0x9c3b,	// (0x000852ca) dia3_listscroll_pane

0x9c49,	// (0x000852d8) dia3_numentry_pane_ParamLimits

0x9c49,	// (0x000852d8) dia3_numentry_pane

0xee8f,	// (0x0008a51e) dia3_list_pane

0xee9a,	// (0x0008a529) scroll_pane_cp12

0xa160,	// (0x000857ef) bg_dia3_numentry_pane

0x9c57,	// (0x000852e6) dia3_numentry_pane_t1

0x9c66,	// (0x000852f5) cell_dia3_key_num_pane

0x9c6e,	// (0x000852fd) cell_dia3_key0_fun_pane_ParamLimits

0x9c6e,	// (0x000852fd) cell_dia3_key0_fun_pane

0x9c7b,	// (0x0008530a) cell_dia3_key1_fun_pane_ParamLimits

0x9c7b,	// (0x0008530a) cell_dia3_key1_fun_pane

0x9c88,	// (0x00085317) dia3_listrow_pane

0xe1bd,	// (0x0008984c) bg_dia3_numentry_pane_g1

0xa160,	// (0x000857ef) bg_button_pane_cp21

0xeea5,	// (0x0008a534) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0008a542) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0008a551) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0008a560) cell_dia3_key_num_pane_t4

0x0003,

0x0cc8,	// (0x0007c357) cell_dia3_key_num_pane_t

0xa160,	// (0x000857ef) bg_button_pane_cp19

0x9c95,	// (0x00085324) cell_dia3_key0_fun_pane_g1

0xa160,	// (0x000857ef) bg_button_pane_cp20

0x9c9d,	// (0x0008532c) cell_dia3_key1_fun_pane_g1

0x9ca5,	// (0x00085334) area_left_week_number_pane

0x9cb8,	// (0x00085347) area_top_day_name_pane

0x9cc6,	// (0x00085355) frame_month_view_pane

0xeee0,	// (0x0008a56f) grid_month_view_pane

0x9cdb,	// (0x0008536a) cell_top_day_name_pane_ParamLimits

0x9cdb,	// (0x0008536a) cell_top_day_name_pane

0x9cf5,	// (0x00085384) cell_area_left_week_number_pane_ParamLimits

0x9cf5,	// (0x00085384) cell_area_left_week_number_pane

0x9d18,	// (0x000853a7) cell_month_view_pane_ParamLimits

0x9d18,	// (0x000853a7) cell_month_view_pane

0xeeee,	// (0x0008a57d) frm_month_g1

0x9d44,	// (0x000853d3) frm_month_g2

0x9d55,	// (0x000853e4) frm_month_g3

0x9d66,	// (0x000853f5) frm_month_g4

0x9d77,	// (0x00085406) frm_month_g5

0x9d8a,	// (0x00085419) frm_month_g6

0x9d9d,	// (0x0008542c) frm_month_g7

0xeefb,	// (0x0008a58a) frm_month_g8

0x9db0,	// (0x0008543f) frm_month_g9

0x9dbd,	// (0x0008544c) frm_month_g10

0x9dca,	// (0x00085459) frm_month_g11

0x9dd7,	// (0x00085466) frm_month_g12

0x9de4,	// (0x00085473) frm_month_g13

0x9df1,	// (0x00085480) frm_month_g14

0x9e00,	// (0x0008548f) frm_month_g15

0x9e0f,	// (0x0008549e) frm_month_g16

0x000f,

0xfdfc,	// (0x0008b48b) frm_month_g

0xef08,	// (0x0008a597) cell_top_day_name_pane_t1

0x9e1e,	// (0x000854ad) cell_area_left_week_number_pane_g1

0x9e2d,	// (0x000854bc) cell_area_left_week_number_pane_t1

0xcf74,	// (0x00088603) cell_month_view_pane_g1

0x9e43,	// (0x000854d2) cell_month_view_pane_t1

0xa160,	// (0x000857ef) main_fps_pane

0xe738,	// (0x00089dc7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x00089dc7) cmail_ddmenu_btn02_pane_cp1

0xe754,	// (0x00089de3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe754,	// (0x00089de3) cmail_ddmenu_btn02_pane_cp2

0x96a6,	// (0x00084d35) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x96a6,	// (0x00084d35) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd6b,	// (0x0008b3fa) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd6b,	// (0x0008b3fa) cmail_ddmenu_btn02_pane_g

0x96c4,	// (0x00084d53) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96c4,	// (0x00084d53) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd70,	// (0x0008b3ff) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd70,	// (0x0008b3ff) cmail_ddmenu_btn02_pane_t

0x9e59,	// (0x000854e8) fps_text_pane_ParamLimits

0x9e59,	// (0x000854e8) fps_text_pane

0x9e66,	// (0x000854f5) main_fps_pane_g1_ParamLimits

0x9e66,	// (0x000854f5) main_fps_pane_g1

0x9e74,	// (0x00085503) wait_bar_pane_cp010_ParamLimits

0x9e74,	// (0x00085503) wait_bar_pane_cp010

0x9e80,	// (0x0008550f) fps_text_pane_t1_ParamLimits

0x9e80,	// (0x0008550f) fps_text_pane_t1

0x7260,	// (0x000828ef) cam4_image_uncrop_pane_g1

0x7269,	// (0x000828f8) cam4_image_uncrop_pane_g2

0x7272,	// (0x00082901) cam4_image_uncrop_pane_g3

0x727b,	// (0x0008290a) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0008af66) cam4_image_uncrop_pane_g

0x9c88,	// (0x00085317) dia3_listrow_pane_ParamLimits

0xa160,	// (0x000857ef) main_phob2_pane

0x92b7,	// (0x00084946) cell_tport_appsw_pane_cp02_ParamLimits

0x92b7,	// (0x00084946) cell_tport_appsw_pane_cp02

0x92c6,	// (0x00084955) cell_tport_appsw_pane_cp03_ParamLimits

0x92c6,	// (0x00084955) cell_tport_appsw_pane_cp03

0xa160,	// (0x000857ef) phob2_contact_card_pane

0xa160,	// (0x000857ef) phob2_listscroll_pane

0xef1b,	// (0x0008a5aa) phob2_list_pane

0xef23,	// (0x0008a5b2) scroll_pane_cp034

0x9e99,	// (0x00085528) phob2_cc_data_pane_ParamLimits

0x9e99,	// (0x00085528) phob2_cc_data_pane

0x9eb3,	// (0x00085542) phob2_cc_listscroll_pane_ParamLimits

0x9eb3,	// (0x00085542) phob2_cc_listscroll_pane

0x9aca,	// (0x00085159) list_double_large_graphic_phob2_pane_ParamLimits

0x9aca,	// (0x00085159) list_double_large_graphic_phob2_pane

0x9ecd,	// (0x0008555c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9ecd,	// (0x0008555c) list_double_large_graphic_phob2_pane_g1

0x1ee5,	// (0x0007d574) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1ee5,	// (0x0007d574) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe1d,	// (0x0008b4ac) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1d,	// (0x0008b4ac) list_double_large_graphic_phob2_pane_g

0x1ef1,	// (0x0007d580) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1ef1,	// (0x0007d580) list_double_large_graphic_phob2_pane_t1

0x1f06,	// (0x0007d595) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1f06,	// (0x0007d595) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe22,	// (0x0008b4b1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe22,	// (0x0008b4b1) list_double_large_graphic_phob2_pane_t

0xa160,	// (0x000857ef) list_highlight_pane_cp024

0x9ee3,	// (0x00085572) phob2_cc_button_pane

0x9eeb,	// (0x0008557a) phob2_cc_data_pane_g1_ParamLimits

0x9eeb,	// (0x0008557a) phob2_cc_data_pane_g1

0x9ef7,	// (0x00085586) phob2_cc_data_pane_g2_ParamLimits

0x9ef7,	// (0x00085586) phob2_cc_data_pane_g2

0x0001,

0xfe27,	// (0x0008b4b6) phob2_cc_data_pane_g_ParamLimits

0xfe27,	// (0x0008b4b6) phob2_cc_data_pane_g

0x9f03,	// (0x00085592) phob2_cc_data_pane_t1_ParamLimits

0x9f03,	// (0x00085592) phob2_cc_data_pane_t1

0x9f15,	// (0x000855a4) phob2_cc_data_pane_t2_ParamLimits

0x9f15,	// (0x000855a4) phob2_cc_data_pane_t2

0x9f27,	// (0x000855b6) phob2_cc_data_pane_t3_ParamLimits

0x9f27,	// (0x000855b6) phob2_cc_data_pane_t3

0x0002,

0xfe2c,	// (0x0008b4bb) phob2_cc_data_pane_t_ParamLimits

0xfe2c,	// (0x0008b4bb) phob2_cc_data_pane_t

0xef2b,	// (0x0008a5ba) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0008a5ba) phob2_cc_list_pane

0xdad7,	// (0x00089166) scroll_pane_cp035_ParamLimits

0xdad7,	// (0x00089166) scroll_pane_cp035

0xacca,	// (0x00086359) bg_button_pane_cp033

0xef37,	// (0x0008a5c6) phob2_cc_button_pane_g1

0xef43,	// (0x0008a5d2) phob2_cc_button_pane_t1

0xef58,	// (0x0008a5e7) phob2_cc_button_pane_t2

0x0001,

0x0d08,	// (0x0007c397) phob2_cc_button_pane_t

0x9f39,	// (0x000855c8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f39,	// (0x000855c8) list_double_large_graphic_phob2_cc_pane

0x9fa7,	// (0x00085636) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9fa7,	// (0x00085636) list_double_large_graphic_phob2_cc_pane_g1

0x9fb8,	// (0x00085647) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9fb8,	// (0x00085647) list_double_large_graphic_phob2_cc_pane_g2

0x1f18,	// (0x0007d5a7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1f18,	// (0x0007d5a7) list_double_large_graphic_phob2_cc_pane_g3

0x1f24,	// (0x0007d5b3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1f24,	// (0x0007d5b3) list_double_large_graphic_phob2_cc_pane_g4

0x1f30,	// (0x0007d5bf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1f30,	// (0x0007d5bf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe33,	// (0x0008b4c2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe33,	// (0x0008b4c2) list_double_large_graphic_phob2_cc_pane_g

0x1f3c,	// (0x0007d5cb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1f3c,	// (0x0007d5cb) list_double_large_graphic_phob2_cc_pane_t1

0x1f65,	// (0x0007d5f4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1f65,	// (0x0007d5f4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe3e,	// (0x0008b4cd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe3e,	// (0x0008b4cd) list_double_large_graphic_phob2_cc_pane_t

0xef6a,	// (0x0008a5f9) list_highlight_pane_cp025_ParamLimits

0xef6a,	// (0x0008a5f9) list_highlight_pane_cp025

0xacca,	// (0x00086359) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0008a5c6) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0008a5d2) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0008a5e7) phob2_cc_button_pane_t2_ParamLimits

0x0d08,	// (0x0007c397) phob2_cc_button_pane_t_ParamLimits

0x2265,	// (0x0007d8f4) popup_wgtman_window

0xd814,	// (0x00088ea3) scroll_pane_cp038

0x9a53,	// (0x000850e2) wgtman_btn_pane_cp_01_ParamLimits

0x9a53,	// (0x000850e2) wgtman_btn_pane_cp_01

0xef78,	// (0x0008a607) wgtman_content_pane

0xef81,	// (0x0008a610) wgtman_heading_pane

0xa160,	// (0x000857ef) bg_heading_pane_cp02

0xef8a,	// (0x0008a619) wgtman_heading_pane_g1

0xef92,	// (0x0008a621) wgtman_heading_pane_t1

0xefa0,	// (0x0008a62f) scroll_pane_cp036

0xefa8,	// (0x0008a637) wgtman_list_pane

0xefb0,	// (0x0008a63f) wgtman_list_pane_t1_ParamLimits

0xefb0,	// (0x0008a63f) wgtman_list_pane_t1

0x71bf,	// (0x0008284e) cam4_grid_pane

0x11e6,	// (0x0007c875) bg_button_pane_cp015_ParamLimits

0x7ead,	// (0x0008353c) bg_button_pane_cp016_ParamLimits

0x7ec0,	// (0x0008354f) bg_button_pane_cp017_ParamLimits

0x122a,	// (0x0007c8b9) popup_vitu2_query_window_g3_ParamLimits

0x122a,	// (0x0007c8b9) popup_vitu2_query_window_g3

0x12a3,	// (0x0007c932) popup_vitu2_query_window_t6_ParamLimits

0x12a3,	// (0x0007c932) popup_vitu2_query_window_t6

0x12ce,	// (0x0007c95d) popup_vitu2_query_window_t7_ParamLimits

0x12ce,	// (0x0007c95d) popup_vitu2_query_window_t7

0xddc9,	// (0x00089458) cam4_grid_pane_g1

0xddd2,	// (0x00089461) cam4_grid_pane_g2

0xefca,	// (0x0008a659) cam4_grid_pane_g3

0xefd3,	// (0x0008a662) cam4_grid_pane_g4

0x0003,

0xfe43,	// (0x0008b4d2) cam4_grid_pane_g

0x2ff5,	// (0x0007e684) aid_placing_vt_slider_lsc_ParamLimits

0x3341,	// (0x0007e9d0) vidtel_button_pane_ParamLimits

0x3341,	// (0x0007e9d0) vidtel_button_pane

0xa160,	// (0x000857ef) bg_button_pane_cp034

0xefde,	// (0x0008a66d) vidtel_button_pane_g1

0xefe6,	// (0x0008a675) vidtel_button_pane_t1

0xd916,	// (0x00088fa5) aid_size_vtel_slider_touch

0xdad7,	// (0x00089166) scroll_pane_cp039

0x8bcd,	// (0x0008425c) ncim_query_button_pane_cp01_ParamLimits

0x8bec,	// (0x0008427b) ncimui_query_pane_g1_ParamLimits

0xacca,	// (0x00086359) input_focus_pane_cp012_ParamLimits

0xe1fb,	// (0x0008988a) ncim_query_entry_pane_t1_ParamLimits

0xdad7,	// (0x00089166) scroll_pane_cp039_ParamLimits

0xb3a2,	// (0x00086a31) navi_pane_bcale_mc_g1

0xb3aa,	// (0x00086a39) navi_pane_bcale_mc_t1

0xe788,	// (0x00089e17) main_sp_fs_email_pane_g1

0xe794,	// (0x00089e23) main_sp_fs_email_pane_g2

0x0001,

0x0aae,	// (0x0007c13d) main_sp_fs_email_pane_g

0xe9f2,	// (0x0008a081) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f2,	// (0x0008a081) list_single_cale_mrui_row_pane_g3

0x1df3,	// (0x0007d482) list_single_recal_day_pane_g5_event_pane

0x1e09,	// (0x0007d498) list_single_recal_day_pane_g7

0xeffc,	// (0x0008a68b) list_recal_day_event_pane_cp01

0xf005,	// (0x0008a694) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0008a69c) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0008a6a4) list_recal_vselct_pane_cp01

0xd926,	// (0x00088fb5) list_recal_day_event_pane_cp01_g1

0x1f8e,	// (0x0007d61d) list_recal_day_event_pane_cp01_t1

0x1e11,	// (0x0007d4a0) list_single_recal_day_pane_t1_ParamLimits

0x1e23,	// (0x0007d4b2) list_single_recal_day_pane_t2_ParamLimits

0xfd80,	// (0x0008b40f) list_single_recal_day_pane_t_ParamLimits

0xa7ef,	// (0x00085e7e) bg_notes_pane_ParamLimits

0xa892,	// (0x00085f21) list_notes_pane_ParamLimits

0x25c3,	// (0x0007dc52) scroll_pane_cp06_ParamLimits

0xa8b4,	// (0x00085f43) main_notes_pane_ParamLimits

0xacca,	// (0x00086359) main_welc_pane

0x9fd3,	// (0x00085662) main_welc_body_pane_ParamLimits

0x9fd3,	// (0x00085662) main_welc_body_pane

0x9fed,	// (0x0008567c) main_welc_opti_pane_ParamLimits

0x9fed,	// (0x0008567c) main_welc_opti_pane

0xa02c,	// (0x000856bb) main_welc_pane_t1_ParamLimits

0xa02c,	// (0x000856bb) main_welc_pane_t1

0xa088,	// (0x00085717) main_welc_body_row_pane_ParamLimits

0xa088,	// (0x00085717) main_welc_body_row_pane

0xe9ad,	// (0x0008a03c) main_welc_opti_row_pane_ParamLimits

0xe9ad,	// (0x0008a03c) main_welc_opti_row_pane

0xf01f,	// (0x0008a6ae) main_welc_opti_row_pane_g1

0xa0ad,	// (0x0008573c) main_welc_opti_row_pane_t1

0xf027,	// (0x0008a6b6) main_welc_body_row_pane_t1

0xed3d,	// (0x0008a3cc) popup_notif_wgt_heading_pane

0xed57,	// (0x0008a3e6) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0008a3f3) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0008a3ff) list_notif_wgt_row_pane_g2_ParamLimits

0xed7f,	// (0x0008a40e) list_notif_wgt_row_pane_g3_ParamLimits

0x0c72,	// (0x0007c301) list_notif_wgt_row_pane_g_ParamLimits

0xed8c,	// (0x0008a41b) list_notif_wgt_row_pane_t1_ParamLimits

0xeda2,	// (0x0008a431) list_notif_wgt_row_pane_t2_ParamLimits

0xedb4,	// (0x0008a443) list_notif_wgt_row_pane_t3_ParamLimits

0x0c79,	// (0x0007c308) list_notif_wgt_row_pane_t_ParamLimits

0x9ae5,	// (0x00085174) listrow_wgtman_pane_g1_ParamLimits

0x9af2,	// (0x00085181) listrow_wgtman_pane_g2_ParamLimits

0xfdd6,	// (0x0008b465) listrow_wgtman_pane_g_ParamLimits

0x1e95,	// (0x0007d524) listrow_wgtman_pane_t1_ParamLimits

0x1ead,	// (0x0007d53c) listrow_wgtman_pane_t2_ParamLimits

0xfddb,	// (0x0008b46a) listrow_wgtman_pane_t_ParamLimits

0x1ed3,	// (0x0007d562) wait_bar_pane_cp09_ParamLimits

0xa160,	// (0x000857ef) bg_popup_heading_pane_cp02

0xf036,	// (0x0008a6c5) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0008a6cd) popup_notif_wgt_heading_pane_t1

0xa160,	// (0x000857ef) main_vids_pane

0xa160,	// (0x000857ef) vids_listscroll_pane

0xa0bc,	// (0x0008574b) scroll_pane_cp040

0xa160,	// (0x000857ef) vids_list_pane

0xa0c7,	// (0x00085756) vids_list_double_pane_ParamLimits

0xa0c7,	// (0x00085756) vids_list_double_pane

0xa0e1,	// (0x00085770) vids_list_double_pane_g1

0xa0ea,	// (0x00085779) vids_list_double_pane_t1

0xa0fa,	// (0x00085789) vids_list_double_pane_t2

0x0001,

0xfe5a,	// (0x0008b4e9) vids_list_double_pane_t

0xacca,	// (0x00086359) main_ncimui_pane_ParamLimits

0x8a24,	// (0x000840b3) main_ncimui_pane_g1_ParamLimits

0x8a30,	// (0x000840bf) main_ncimui_pane_g2_ParamLimits

0x8a30,	// (0x000840bf) main_ncimui_pane_g2

0x0001,

0xfbb8,	// (0x0008b247) main_ncimui_pane_g_ParamLimits

0xfbb8,	// (0x0008b247) main_ncimui_pane_g

0xa006,	// (0x00085695) main_welc_pane_g1_ParamLimits

0xa006,	// (0x00085695) main_welc_pane_g1

0xa012,	// (0x000856a1) main_welc_pane_g2_ParamLimits

0xa012,	// (0x000856a1) main_welc_pane_g2

0x0002,

0xfe4c,	// (0x0008b4db) main_welc_pane_g_ParamLimits

0xfe4c,	// (0x0008b4db) main_welc_pane_g

0xa7ef,	// (0x00085e7e) listscroll_mce_pane_ParamLimits

0xb505,	// (0x00086b94) wait_bar_pane_cp10

0xc8fd,	// (0x00087f8c) main_cale_day_pane_ParamLimits

0xc8fd,	// (0x00087f8c) main_cale_week_pane_ParamLimits

0xa7ef,	// (0x00085e7e) main_messa_pane_ParamLimits

0x64f7,	// (0x00081b86) main_clock2_btn_pane_ParamLimits

0x64f7,	// (0x00081b86) main_clock2_btn_pane

0xd11c,	// (0x000887ab) main_clock2_btn_pane_cp01_ParamLimits

0xd11c,	// (0x000887ab) main_clock2_btn_pane_cp01

0xe9c3,	// (0x0008a052) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x0008a479) main_cf0_pane_g2

0x0001,

0x0c80,	// (0x0007c30f) main_cf0_pane_g

0x9ca5,	// (0x00085334) area_left_week_number_pane_ParamLimits

0x9cb8,	// (0x00085347) area_top_day_name_pane_ParamLimits

0x9cc6,	// (0x00085355) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0008a56f) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0008a57d) frm_month_g1_ParamLimits

0x9d44,	// (0x000853d3) frm_month_g2_ParamLimits

0x9d55,	// (0x000853e4) frm_month_g3_ParamLimits

0x9d66,	// (0x000853f5) frm_month_g4_ParamLimits

0x9d77,	// (0x00085406) frm_month_g5_ParamLimits

0x9d8a,	// (0x00085419) frm_month_g6_ParamLimits

0x9d9d,	// (0x0008542c) frm_month_g7_ParamLimits

0xeefb,	// (0x0008a58a) frm_month_g8_ParamLimits

0x9db0,	// (0x0008543f) frm_month_g9_ParamLimits

0x9dbd,	// (0x0008544c) frm_month_g10_ParamLimits

0x9dca,	// (0x00085459) frm_month_g11_ParamLimits

0x9dd7,	// (0x00085466) frm_month_g12_ParamLimits

0x9de4,	// (0x00085473) frm_month_g13_ParamLimits

0x9df1,	// (0x00085480) frm_month_g14_ParamLimits

0x9e00,	// (0x0008548f) frm_month_g15_ParamLimits

0x9e0f,	// (0x0008549e) frm_month_g16_ParamLimits

0xfdfc,	// (0x0008b48b) frm_month_g_ParamLimits

0xef08,	// (0x0008a597) cell_top_day_name_pane_t1_ParamLimits

0x9e1e,	// (0x000854ad) cell_area_left_week_number_pane_g1_ParamLimits

0x9e2d,	// (0x000854bc) cell_area_left_week_number_pane_t1_ParamLimits

0xcf74,	// (0x00088603) cell_month_view_pane_g1_ParamLimits

0x9e43,	// (0x000854d2) cell_month_view_pane_t1_ParamLimits

0xa7e7,	// (0x00085e76) main_clock2_btn_pane_g1

0xf04c,	// (0x0008a6db) main_clock2_btn_pane_t1

0xacca,	// (0x00086359) listscroll_cmail_pane_ParamLimits

0xe788,	// (0x00089e17) main_sp_fs_email_pane_g1_ParamLimits

0xe794,	// (0x00089e23) main_sp_fs_email_pane_g2_ParamLimits

0x0aae,	// (0x0007c13d) main_sp_fs_email_pane_g_ParamLimits

0xeac9,	// (0x0008a158) list_recal_day_pane_ParamLimits

0xeada,	// (0x0008a169) mian_recal_day_pane_t1

0x17e2,	// (0x0007ce71) list_single_dyc_row_text_pane_t4_ParamLimits

0x17e2,	// (0x0007ce71) list_single_dyc_row_text_pane_t4

0x1819,	// (0x0007cea8) list_single_dyc_row_text_pane_t5_ParamLimits

0x1819,	// (0x0007cea8) list_single_dyc_row_text_pane_t5

0x188f,	// (0x0007cf1e) list_single_dyc_row_text_pane_t6_ParamLimits

0x188f,	// (0x0007cf1e) list_single_dyc_row_text_pane_t6

0x416c,	// (0x0007f7fb) aid_mgn_list_cale_time_pane

0xacca,	// (0x00086359) main_gallery2_pane_ParamLimits

0xd132,	// (0x000887c1) main_clock2_pane_cp01_t1

0xd142,	// (0x000887d1) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0008ae38) main_clock2_pane_cp01_t

0x2a07,	// (0x0007e096) cale_week_scroll_pane_g16_ParamLimits

0x2a07,	// (0x0007e096) cale_week_scroll_pane_g16

0xaa79,	// (0x00086108) vorec_slider_pane

0xefe6,	// (0x0008a675) vidtel_button_pane_t1_ParamLimits

0x9727,	// (0x00084db6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9727,	// (0x00084db6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9734,	// (0x00084dc3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9734,	// (0x00084dc3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd94,	// (0x0008b423) main_fs_bigclock_clock_pane_g_ParamLimits

0x9740,	// (0x00084dcf) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9753,	// (0x00084de2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd9d,	// (0x0008b42c) main_fs_bigclock_clock_pane_t_ParamLimits

0x5d96,	// (0x00081425) main_mup3_lyrics_pane_ParamLimits

0x5d96,	// (0x00081425) main_mup3_lyrics_pane

0xa12e,	// (0x000857bd) main_mup3_lyrics_pane_t1_ParamLimits

0xa12e,	// (0x000857bd) main_mup3_lyrics_pane_t1

0x6b40,	// (0x000821cf) aid_main_mp4_pane_t1_area

0x6b4a,	// (0x000821d9) aid_main_mp4_pane_t2_area

0x6c49,	// (0x000822d8) main_mp4_pane_g7_ParamLimits

0x6c49,	// (0x000822d8) main_mp4_pane_g7

0x6c55,	// (0x000822e4) main_mp4_pane_g8_ParamLimits

0x6c55,	// (0x000822e4) main_mp4_pane_g8

0x7067,	// (0x000826f6) aid_call6_pane_g1_size

0x9f7b,	// (0x0008560a) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9f7b,	// (0x0008560a) list_double_large_graphic_phob2_other_pane

0xae4b,	// (0x000864da) list_double_large_graphic_phob2_other_pane_g1

0xa160,	// (0x000857ef) list_highlight_pane_cp026

0xacca,	// (0x00086359) main_welc_pane_ParamLimits

0x916a,	// (0x000847f9) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x916a,	// (0x000847f9) main_sp_fs_ctrlbar_pane_g3

0x9182,	// (0x00084811) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9182,	// (0x00084811) main_sp_fs_ctrlbar_pane_g4

0x91b4,	// (0x00084843) toolbar2_fixed_button_pane_cp01

0x91bf,	// (0x0008484e) toolbar2_fixed_button_pane_cp02

0x91ca,	// (0x00084859) toolbar2_fixed_button_pane_cp03

0x9fc4,	// (0x00085653) list_welc_entry_pane_ParamLimits

0x9fc4,	// (0x00085653) list_welc_entry_pane

0xa020,	// (0x000856af) main_welc_pane_g3_ParamLimits

0xa020,	// (0x000856af) main_welc_pane_g3

0xa046,	// (0x000856d5) main_welc_pane_t2_ParamLimits

0xa046,	// (0x000856d5) main_welc_pane_t2

0xa05a,	// (0x000856e9) main_welc_pane_t3_ParamLimits

0xa05a,	// (0x000856e9) main_welc_pane_t3

0x0002,

0xfe53,	// (0x0008b4e2) main_welc_pane_t_ParamLimits

0xfe53,	// (0x0008b4e2) main_welc_pane_t

0xa06c,	// (0x000856fb) welc_button_pane_ParamLimits

0xa06c,	// (0x000856fb) welc_button_pane

0xa07a,	// (0x00085709) welc_service_logo_pane_ParamLimits

0xa07a,	// (0x00085709) welc_service_logo_pane

0xf05a,	// (0x0008a6e9) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0008a6e9) list_single_welc_entry_pane

0xf06b,	// (0x0008a6fa) list_single_welc_entry_pane_g1

0xf073,	// (0x0008a702) list_single_welc_entry_pane_t1

0xf081,	// (0x0008a710) list_single_welc_entry_pane_t2

0x0001,

0x0d39,	// (0x0007c3c8) list_single_welc_entry_pane_t

0xa160,	// (0x000857ef) bg_button_pane_cp035

0xf08f,	// (0x0008a71e) welc_button_pane_t1

0xf09d,	// (0x0008a72c) welc_service_logo_pane_g1

0xf0a6,	// (0x0008a735) welc_service_logo_pane_g2

0x0001,

0x0d3e,	// (0x0007c3cd) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large

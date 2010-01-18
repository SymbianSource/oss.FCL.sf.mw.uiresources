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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0007f5c8 };

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
0x3043,	// (0x0008260b) Screen

0x304d,	// (0x00082615) application_window

0x307c,	// (0x00082644) area_bottom_pane_ParamLimits

0x307c,	// (0x00082644) area_bottom_pane

0x30af,	// (0x00082677) area_top_pane_ParamLimits

0x30af,	// (0x00082677) area_top_pane

0xac4b,	// (0x0008a213) call_video_uplink_pane_ParamLimits

0xac4b,	// (0x0008a213) call_video_uplink_pane

0x3120,	// (0x000826e8) main_pane_ParamLimits

0x3120,	// (0x000826e8) main_pane

0xc466,	// (0x0008ba2e) context_pane

0x5db3,	// (0x0008537b) navi_pane

0x5ddc,	// (0x000853a4) popup_cale_events_window_ParamLimits

0x5ddc,	// (0x000853a4) popup_cale_events_window

0xc479,	// (0x0008ba41) popup_mup_playback_window

0x5df4,	// (0x000853bc) signal_pane

0xb3ce,	// (0x0008a996) main_browser_pane

0x1033,	// (0x000805fb) main_burst_pane

0x206a,	// (0x00081632) main_calc_pane

0x1033,	// (0x000805fb) main_cale_day_pane

0xb596,	// (0x0008ab5e) main_cale_month_pane

0x1033,	// (0x000805fb) main_cale_week_pane

0x1033,	// (0x000805fb) main_call_pane

0xb078,	// (0x0008a640) main_call_poc_pane

0x1033,	// (0x000805fb) main_camera_pane

0x1033,	// (0x000805fb) main_chi_dic_pane

0x0e32,	// (0x000803fa) main_clock_pane

0xb078,	// (0x0008a640) main_fmradio_pane

0x1033,	// (0x000805fb) main_graph_messa_pane

0xb078,	// (0x0008a640) main_help_pane

0xb3ce,	// (0x0008a996) main_im_pane

0xb2d3,	// (0x0008a89b) main_image_pane_ParamLimits

0xb2d3,	// (0x0008a89b) main_image_pane

0xb078,	// (0x0008a640) main_location2_pane

0x1033,	// (0x000805fb) main_location_pane

0xb078,	// (0x0008a640) main_messa_pane

0xb078,	// (0x0008a640) main_mp2_pane

0x1033,	// (0x000805fb) main_mp_pane

0xb078,	// (0x0008a640) main_msg_pane

0xb078,	// (0x0008a640) main_mup_eq_pane

0xb078,	// (0x0008a640) main_mup_pane

0x1033,	// (0x000805fb) main_notes_pane

0xb078,	// (0x0008a640) main_pec_pane

0xb078,	// (0x0008a640) main_phob_pane

0xb078,	// (0x0008a640) main_pinb_pane

0xb078,	// (0x0008a640) main_postcard_pane

0xb078,	// (0x0008a640) main_qdial_pane

0x1033,	// (0x000805fb) main_skin_pane

0xb078,	// (0x0008a640) main_smil2_pane

0x1033,	// (0x000805fb) main_smil_pane

0x1033,	// (0x000805fb) main_video_pane

0x1033,	// (0x000805fb) main_video_tele_pane

0xb2d3,	// (0x0008a89b) main_viewer_pane_ParamLimits

0xb2d3,	// (0x0008a89b) main_viewer_pane

0x1033,	// (0x000805fb) main_vorec_pane

0x5b93,	// (0x0008515b) popup_blid_sat_info_window_ParamLimits

0x5b93,	// (0x0008515b) popup_blid_sat_info_window

0x5be9,	// (0x000851b1) popup_dyc_status_message_window_ParamLimits

0x5be9,	// (0x000851b1) popup_dyc_status_message_window

0x5bff,	// (0x000851c7) popup_grid_large_graphic_window_ParamLimits

0x5bff,	// (0x000851c7) popup_grid_large_graphic_window

0x5c95,	// (0x0008525d) popup_loc_request_window_ParamLimits

0x5c95,	// (0x0008525d) popup_loc_request_window

0x5d8d,	// (0x00085355) popup_wml_address_window_ParamLimits

0x5d8d,	// (0x00085355) popup_wml_address_window

0x59e9,	// (0x00084fb1) call_muted_g1

0x570e,	// (0x00084cd6) popup_call_audio_conf_window_ParamLimits

0x570e,	// (0x00084cd6) popup_call_audio_conf_window

0x59f9,	// (0x00084fc1) popup_call_audio_first_window_ParamLimits

0x59f9,	// (0x00084fc1) popup_call_audio_first_window

0x5a57,	// (0x0008501f) popup_call_audio_in_window_ParamLimits

0x5a57,	// (0x0008501f) popup_call_audio_in_window

0x5a83,	// (0x0008504b) popup_call_audio_out_window_ParamLimits

0x5a83,	// (0x0008504b) popup_call_audio_out_window

0x5ab1,	// (0x00085079) popup_call_audio_second_window_ParamLimits

0x5ab1,	// (0x00085079) popup_call_audio_second_window

0x5af7,	// (0x000850bf) popup_call_audio_wait_window_ParamLimits

0x5af7,	// (0x000850bf) popup_call_audio_wait_window

0x5b2a,	// (0x000850f2) popup_number_entry_window_ParamLimits

0x5b2a,	// (0x000850f2) popup_number_entry_window

0xac67,	// (0x0008a22f) bg_popup_call_pane_cp05_ParamLimits

0xac67,	// (0x0008a22f) bg_popup_call_pane_cp05

0xac87,	// (0x0008a24f) popup_number_entry_window_t1

0xac9a,	// (0x0008a262) popup_number_entry_window_t2

0xacac,	// (0x0008a274) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008e6b4) popup_number_entry_window_t

0xacbe,	// (0x0008a286) text_title_cp2

0xacd1,	// (0x0008a299) bg_popup_call_pane_cp_ParamLimits

0xacd1,	// (0x0008a299) bg_popup_call_pane_cp

0xacdf,	// (0x0008a2a7) call_thumbnail_pane

0xace7,	// (0x0008a2af) popup_call_audio_in_window_g1_ParamLimits

0xace7,	// (0x0008a2af) popup_call_audio_in_window_g1

0xacf3,	// (0x0008a2bb) popup_call_audio_in_window_g2_ParamLimits

0xacf3,	// (0x0008a2bb) popup_call_audio_in_window_g2

0xacff,	// (0x0008a2c7) popup_call_audio_in_window_g3_ParamLimits

0xacff,	// (0x0008a2c7) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008e6bd) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008e6bd) popup_call_audio_in_window_g

0xad0b,	// (0x0008a2d3) popup_call_audio_in_window_t1_ParamLimits

0xad0b,	// (0x0008a2d3) popup_call_audio_in_window_t1

0xad26,	// (0x0008a2ee) popup_call_audio_in_window_t2_ParamLimits

0xad26,	// (0x0008a2ee) popup_call_audio_in_window_t2

0xad41,	// (0x0008a309) popup_call_audio_in_window_t3_ParamLimits

0xad41,	// (0x0008a309) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008e6c4) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008e6c4) popup_call_audio_in_window_t

0xacd1,	// (0x0008a299) bg_popup_call_pane_cp01_ParamLimits

0xacd1,	// (0x0008a299) bg_popup_call_pane_cp01

0xacdf,	// (0x0008a2a7) call_thumbnail_pane_cp02

0xad54,	// (0x0008a31c) call_type_pane_cp022

0xad5c,	// (0x0008a324) popup_call_audio_out_window_g1_ParamLimits

0xad5c,	// (0x0008a324) popup_call_audio_out_window_g1

0xad6e,	// (0x0008a336) popup_call_audio_out_window_g2_ParamLimits

0xad6e,	// (0x0008a336) popup_call_audio_out_window_g2

0xad7a,	// (0x0008a342) popup_call_audio_out_window_g3_ParamLimits

0xad7a,	// (0x0008a342) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008e6cb) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008e6cb) popup_call_audio_out_window_g

0xad8c,	// (0x0008a354) popup_call_audio_out_window_t1_ParamLimits

0xad8c,	// (0x0008a354) popup_call_audio_out_window_t1

0xada4,	// (0x0008a36c) popup_call_audio_out_window_t2_ParamLimits

0xada4,	// (0x0008a36c) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008e6d2) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008e6d2) popup_call_audio_out_window_t

0xadb9,	// (0x0008a381) bg_popup_call_pane_ParamLimits

0xadb9,	// (0x0008a381) bg_popup_call_pane

0x32b2,	// (0x0008287a) call_thumbnail_pane_cp_ParamLimits

0x32b2,	// (0x0008287a) call_thumbnail_pane_cp

0xae3d,	// (0x0008a405) call_type_pane_cp01_ParamLimits

0xae3d,	// (0x0008a405) call_type_pane_cp01

0xae81,	// (0x0008a449) popup_call_audio_first_window_g1_ParamLimits

0xae81,	// (0x0008a449) popup_call_audio_first_window_g1

0xaecd,	// (0x0008a495) popup_call_audio_first_window_g2_ParamLimits

0xaecd,	// (0x0008a495) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008e6d7) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008e6d7) popup_call_audio_first_window_g

0xaf11,	// (0x0008a4d9) popup_call_audio_first_window_t1_ParamLimits

0xaf11,	// (0x0008a4d9) popup_call_audio_first_window_t1

0xafbd,	// (0x0008a585) popup_call_audio_first_window_t4_ParamLimits

0xafbd,	// (0x0008a585) popup_call_audio_first_window_t4

0xb049,	// (0x0008a611) popup_call_audio_first_window_t5_ParamLimits

0xb049,	// (0x0008a611) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008e6dc) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008e6dc) popup_call_audio_first_window_t

0xb078,	// (0x0008a640) bg_popup_call_pane_cp02

0xb082,	// (0x0008a64a) call_type_pane_cp023

0xb08a,	// (0x0008a652) popup_call_audio_wait_window_g1

0xb092,	// (0x0008a65a) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008e6e3) popup_call_audio_wait_window_g

0xb09a,	// (0x0008a662) popup_call_audio_wait_window_t3

0xb0a8,	// (0x0008a670) bg_popup_call_pane_cp03_ParamLimits

0xb0a8,	// (0x0008a670) bg_popup_call_pane_cp03

0xb108,	// (0x0008a6d0) call_thumbnail_pane_cp011_ParamLimits

0xb108,	// (0x0008a6d0) call_thumbnail_pane_cp011

0xb114,	// (0x0008a6dc) call_type_pane_cp034_ParamLimits

0xb114,	// (0x0008a6dc) call_type_pane_cp034

0xb150,	// (0x0008a718) popup_call_audio_second_window_g1_ParamLimits

0xb150,	// (0x0008a718) popup_call_audio_second_window_g1

0xb18c,	// (0x0008a754) popup_call_audio_second_window_g2_ParamLimits

0xb18c,	// (0x0008a754) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0008e6e8) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0008e6e8) popup_call_audio_second_window_g

0xb1c8,	// (0x0008a790) popup_call_audio_second_window_t1_ParamLimits

0xb1c8,	// (0x0008a790) popup_call_audio_second_window_t1

0xb249,	// (0x0008a811) popup_call_audio_second_window_t2_ParamLimits

0xb249,	// (0x0008a811) popup_call_audio_second_window_t2

0xb27f,	// (0x0008a847) popup_call_audio_second_window_t3_ParamLimits

0xb27f,	// (0x0008a847) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008e6ed) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008e6ed) popup_call_audio_second_window_t

0xb078,	// (0x0008a640) bg_popup_call_pane_cp04

0xb2b5,	// (0x0008a87d) list_conf_pane

0xb2bd,	// (0x0008a885) popup_call_audio_conf_window_t1

0xb2cb,	// (0x0008a893) call_thumbnail_pane_g1

0xb2d3,	// (0x0008a89b) bg_pinb_pane_ParamLimits

0xb2d3,	// (0x0008a89b) bg_pinb_pane

0xb2e1,	// (0x0008a8a9) find_pinb_pane

0xb2ea,	// (0x0008a8b2) listscroll_pinb_pane_ParamLimits

0xb2ea,	// (0x0008a8b2) listscroll_pinb_pane

0xb2f9,	// (0x0008a8c1) pinb_bg_pane_g1

0x32d6,	// (0x0008289e) pinb_bg_pane_g2

0x32e0,	// (0x000828a8) pinb_bg_pane_g3

0x32ea,	// (0x000828b2) pinb_bg_pane_g4

0x32f4,	// (0x000828bc) pinb_bg_pane_g5

0x32fe,	// (0x000828c6) pinb_bg_pane_g6

0x3307,	// (0x000828cf) pinb_bg_pane_g7

0x3310,	// (0x000828d8) pinb_bg_pane_g8

0x331b,	// (0x000828e3) pinb_bg_pane_g9

0x3325,	// (0x000828ed) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008e6f4) pinb_bg_pane_g

0x3340,	// (0x00082908) grid_pinb_pane

0x3349,	// (0x00082911) list_pinb_pane

0x3352,	// (0x0008291a) scroll_pane_cp01_ParamLimits

0x3352,	// (0x0008291a) scroll_pane_cp01

0xb303,	// (0x0008a8cb) find_pinb_pane_g1_ParamLimits

0xb303,	// (0x0008a8cb) find_pinb_pane_g1

0xb31b,	// (0x0008a8e3) find_pinb_pane_t1

0xb32d,	// (0x0008a8f5) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008e70e) find_pinb_pane_t

0xb342,	// (0x0008a90a) input_focus_pane_cp01_ParamLimits

0xb342,	// (0x0008a90a) input_focus_pane_cp01

0x3364,	// (0x0008292c) cell_pinb_pane_ParamLimits

0x3364,	// (0x0008292c) cell_pinb_pane

0x337f,	// (0x00082947) cell_pinb_pane_g1_ParamLimits

0x337f,	// (0x00082947) cell_pinb_pane_g1

0x338f,	// (0x00082957) cell_pinb_pane_g2_ParamLimits

0x338f,	// (0x00082957) cell_pinb_pane_g2

0xb34e,	// (0x0008a916) cell_pinb_pane_g3_ParamLimits

0xb34e,	// (0x0008a916) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008e713) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008e713) cell_pinb_pane_g

0xb078,	// (0x0008a640) grid_highlight_pane_cp01

0x339b,	// (0x00082963) list_pinb_item_pane_ParamLimits

0x339b,	// (0x00082963) list_pinb_item_pane

0xb078,	// (0x0008a640) list_highlight_pane_cp02

0x33ad,	// (0x00082975) list_pinb_item_pane_g1_ParamLimits

0x33ad,	// (0x00082975) list_pinb_item_pane_g1

0x33ba,	// (0x00082982) list_pinb_item_pane_g2_ParamLimits

0x33ba,	// (0x00082982) list_pinb_item_pane_g2

0x33c6,	// (0x0008298e) list_pinb_item_pane_g3_ParamLimits

0x33c6,	// (0x0008298e) list_pinb_item_pane_g3

0x33d7,	// (0x0008299f) list_pinb_item_pane_g4_ParamLimits

0x33d7,	// (0x0008299f) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008e71a) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008e71a) list_pinb_item_pane_g

0x33e3,	// (0x000829ab) list_pinb_item_pane_t1_ParamLimits

0x33e3,	// (0x000829ab) list_pinb_item_pane_t1

0x3418,	// (0x000829e0) calc_display_pane

0x3434,	// (0x000829fc) calc_paper_pane

0x3455,	// (0x00082a1d) grid_calc_pane

0xb078,	// (0x0008a640) bg_list_pane_cp01

0x3471,	// (0x00082a39) clock_g1

0x3479,	// (0x00082a41) clock_g2

0x0001,

0xf15b,	// (0x0008e723) clock_g

0x3481,	// (0x00082a49) clock_t1_ParamLimits

0x3481,	// (0x00082a49) clock_t1

0x3496,	// (0x00082a5e) clock_t2_ParamLimits

0x3496,	// (0x00082a5e) clock_t2

0x34a8,	// (0x00082a70) clock_t3_ParamLimits

0x34a8,	// (0x00082a70) clock_t3

0x34ba,	// (0x00082a82) clock_t4_ParamLimits

0x34ba,	// (0x00082a82) clock_t4

0x34cc,	// (0x00082a94) clock_t5_ParamLimits

0x34cc,	// (0x00082a94) clock_t5

0x34e1,	// (0x00082aa9) clock_t6_ParamLimits

0x34e1,	// (0x00082aa9) clock_t6

0x34f3,	// (0x00082abb) clock_t7_ParamLimits

0x34f3,	// (0x00082abb) clock_t7

0x3505,	// (0x00082acd) clock_t8_ParamLimits

0x3505,	// (0x00082acd) clock_t8

0x3517,	// (0x00082adf) clock_t9_ParamLimits

0x3517,	// (0x00082adf) clock_t9

0x0008,

0xf160,	// (0x0008e728) clock_t_ParamLimits

0xf160,	// (0x0008e728) clock_t

0xb362,	// (0x0008a92a) popup_clock_analogue_window_cp02

0xb362,	// (0x0008a92a) popup_clock_digital_window_cp01

0xb36a,	// (0x0008a932) listscroll_help_pane

0xb078,	// (0x0008a640) phob_pre_status_pane

0xb374,	// (0x0008a93c) grid_qdial_pane

0xb078,	// (0x0008a640) listscroll_mce_pane

0xb37e,	// (0x0008a946) bg_notes_pane

0xb388,	// (0x0008a950) list_notes_pane

0x3529,	// (0x00082af1) scroll_pane_cp06

0xb392,	// (0x0008a95a) bg_calc_paper_pane

0xb3b4,	// (0x0008a97c) list_calc_pane

0xb3ce,	// (0x0008a996) bg_calc_display_pane

0xb3da,	// (0x0008a9a2) calc_display_pane_t1

0xb3ef,	// (0x0008a9b7) calc_display_pane_t2

0xb404,	// (0x0008a9cc) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008e73b) calc_display_pane_t

0x3534,	// (0x00082afc) cell_calc_pane_ParamLimits

0x3534,	// (0x00082afc) cell_calc_pane

0xb416,	// (0x0008a9de) bg_calc_paper_pane_g1

0xb422,	// (0x0008a9ea) bg_calc_paper_pane_g2

0xb42e,	// (0x0008a9f6) bg_calc_paper_pane_g3

0xb43a,	// (0x0008aa02) bg_calc_paper_pane_g4

0xb446,	// (0x0008aa0e) bg_calc_paper_pane_g5

0x3567,	// (0x00082b2f) bg_calc_paper_pane_g6

0x3576,	// (0x00082b3e) bg_calc_paper_pane_g7

0x3585,	// (0x00082b4d) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0008e742) bg_calc_paper_pane_g

0x3594,	// (0x00082b5c) calc_bg_paper_pane_g9

0x35a3,	// (0x00082b6b) list_calc_item_pane_ParamLimits

0x35a3,	// (0x00082b6b) list_calc_item_pane

0xb452,	// (0x0008aa1a) list_calc_item_pane_g1

0xb45f,	// (0x0008aa27) list_calc_item_pane_t1_ParamLimits

0xb45f,	// (0x0008aa27) list_calc_item_pane_t1

0x35b7,	// (0x00082b7f) list_calc_item_pane_t2_ParamLimits

0x35b7,	// (0x00082b7f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0008e753) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0008e753) list_calc_item_pane_t

0xb471,	// (0x0008aa39) cell_calc_pane_g1

0xb47b,	// (0x0008aa43) grid_highlight_pane_cp02

0xb49d,	// (0x0008aa65) bg_calc_display_pane_g1

0xb4a6,	// (0x0008aa6e) bg_calc_display_pane_g2

0xb4b0,	// (0x0008aa78) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008e75d) bg_calc_display_pane_g

0x35e5,	// (0x00082bad) cell_qdial_pane_ParamLimits

0x35e5,	// (0x00082bad) cell_qdial_pane

0x35f7,	// (0x00082bbf) cell_qdial_pane_g1_ParamLimits

0x35f7,	// (0x00082bbf) cell_qdial_pane_g1

0x360d,	// (0x00082bd5) cell_qdial_pane_g2_ParamLimits

0x360d,	// (0x00082bd5) cell_qdial_pane_g2

0xb4b9,	// (0x0008aa81) cell_qdial_pane_g3_ParamLimits

0xb4b9,	// (0x0008aa81) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0008e764) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0008e764) cell_qdial_pane_g

0x3634,	// (0x00082bfc) cell_qdial_pane_t1_ParamLimits

0x3634,	// (0x00082bfc) cell_qdial_pane_t1

0x364c,	// (0x00082c14) cell_qdial_pane_t2_ParamLimits

0x364c,	// (0x00082c14) cell_qdial_pane_t2

0x365f,	// (0x00082c27) cell_qdial_pane_t3_ParamLimits

0x365f,	// (0x00082c27) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008e76d) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008e76d) cell_qdial_pane_t

0xb078,	// (0x0008a640) grid_highlight_pane_cp04

0xb4c5,	// (0x0008aa8d) thumbnail_qdial_pane_ParamLimits

0xb4c5,	// (0x0008aa8d) thumbnail_qdial_pane

0xb521,	// (0x0008aae9) list_help_pane

0xb52b,	// (0x0008aaf3) scroll_pane_cp02

0x3672,	// (0x00082c3a) help_list_pane_t1_ParamLimits

0x3672,	// (0x00082c3a) help_list_pane_t1

0xb534,	// (0x0008aafc) bg_notes_pane_g2

0xb53c,	// (0x0008ab04) bg_notes_pane_g3

0xb544,	// (0x0008ab0c) notes_bg_pane_g1

0xb54c,	// (0x0008ab14) notes_bg_pane_g4

0xb554,	// (0x0008ab1c) notes_bg_pane_g5

0xb55c,	// (0x0008ab24) notes_bg_pane_g6

0xb564,	// (0x0008ab2c) notes_bg_pane_g7

0xb56c,	// (0x0008ab34) notes_bg_pane_g8

0xb574,	// (0x0008ab3c) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008e78b) notes_bg_pane_g

0x2084,	// (0x0008164c) list_notes_text_pane_ParamLimits

0x2084,	// (0x0008164c) list_notes_text_pane

0xb57c,	// (0x0008ab44) list_notes_text_pane_g1

0x368e,	// (0x00082c56) list_notes_text_pane_t1

0xb596,	// (0x0008ab5e) listscroll_cale_week_pane

0x36b7,	// (0x00082c7f) bg_cale_heading_pane

0xb5a5,	// (0x0008ab6d) bg_cale_pane_cp01

0x36cb,	// (0x00082c93) cale_week_corner_pane

0x36e1,	// (0x00082ca9) cale_week_day_heading_pane

0x36f5,	// (0x00082cbd) cale_week_scroll_pane_g1

0x3706,	// (0x00082cce) cale_week_scroll_pane_g2

0x3717,	// (0x00082cdf) cale_week_scroll_pane_g3

0x3728,	// (0x00082cf0) cale_week_scroll_pane_g4

0x3739,	// (0x00082d01) cale_week_scroll_pane_g5

0x374a,	// (0x00082d12) cale_week_scroll_pane_g6

0x375b,	// (0x00082d23) cale_week_scroll_pane_g7

0x376c,	// (0x00082d34) cale_week_scroll_pane_g8

0x377f,	// (0x00082d47) cale_week_scroll_pane_g9

0x3790,	// (0x00082d58) cale_week_scroll_pane_g10

0x37a1,	// (0x00082d69) cale_week_scroll_pane_g11

0x37b2,	// (0x00082d7a) cale_week_scroll_pane_g12

0x37c3,	// (0x00082d8b) cale_week_scroll_pane_g13

0x37d4,	// (0x00082d9c) cale_week_scroll_pane_g14

0x37e5,	// (0x00082dad) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008e79a) cale_week_scroll_pane_g

0x37f6,	// (0x00082dbe) cale_week_time_pane

0x3809,	// (0x00082dd1) grid_cale_week_pane

0x381c,	// (0x00082de4) scroll_pane_cp08

0x3836,	// (0x00082dfe) cell_cale_week_pane_ParamLimits

0x3836,	// (0x00082dfe) cell_cale_week_pane

0x3872,	// (0x00082e3a) cale_week_day_heading_pane_t1

0x389c,	// (0x00082e64) cale_week_day_heading_pane_t2

0x38c6,	// (0x00082e8e) cale_week_day_heading_pane_t3

0x38f0,	// (0x00082eb8) cale_week_day_heading_pane_t4

0x391a,	// (0x00082ee2) cale_week_day_heading_pane_t5

0x3944,	// (0x00082f0c) cale_week_day_heading_pane_t6

0x396e,	// (0x00082f36) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0008e7b9) cale_week_day_heading_pane_t

0xb5d0,	// (0x0008ab98) bg_cale_side_pane

0x3998,	// (0x00082f60) cale_week_time_pane_t1

0x39c4,	// (0x00082f8c) cale_week_time_pane_t2

0x39f0,	// (0x00082fb8) cale_week_time_pane_t3

0x3a1c,	// (0x00082fe4) cale_week_time_pane_t4

0x3a48,	// (0x00083010) cale_week_time_pane_t5

0x3a74,	// (0x0008303c) cale_week_time_pane_t6

0x3aa0,	// (0x00083068) cale_week_time_pane_t7

0x3acc,	// (0x00083094) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0008e7c8) cale_week_time_pane_t

0x3af8,	// (0x000830c0) cell_cale_week_pane_g2

0x3b11,	// (0x000830d9) cell_cale_week_pane_g3_ParamLimits

0x3b11,	// (0x000830d9) cell_cale_week_pane_g3

0xb5de,	// (0x0008aba6) grid_highlight_pane_cp07

0xb5e6,	// (0x0008abae) listscroll_gms_pane

0xb5f0,	// (0x0008abb8) grid_gms_pane

0xb5f9,	// (0x0008abc1) listscroll_gms_pane_g1

0xb601,	// (0x0008abc9) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0008e7d9) listscroll_gms_pane_g

0x3b29,	// (0x000830f1) scroll_pane_cp010

0x3b34,	// (0x000830fc) cell_gms_pane_ParamLimits

0x3b34,	// (0x000830fc) cell_gms_pane

0x3b44,	// (0x0008310c) cell_gms_pane_g1

0xb609,	// (0x0008abd1) cell_gms_pane_g2

0xb57c,	// (0x0008ab44) cell_gms_pane_g3

0xb611,	// (0x0008abd9) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008e7de) cell_gms_pane_g

0xb61a,	// (0x0008abe2) grid_highlight_pane_cp09

0x5997,	// (0x00084f5f) phob_pre_status_pane_g1

0x599f,	// (0x00084f67) phob_pre_status_pane_g2

0x59a7,	// (0x00084f6f) phob_pre_status_pane_g3

0x59af,	// (0x00084f77) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x0008ebe0) phob_pre_status_pane_g

0x59bf,	// (0x00084f87) phob_pre_status_pane_t1

0x59cd,	// (0x00084f95) phob_pre_status_pane_t2

0x59db,	// (0x00084fa3) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x0008ebeb) phob_pre_status_pane_t

0xb078,	// (0x0008a640) bg_list_pane_cp05

0x3b54,	// (0x0008311c) grid_vorec_pane

0xb622,	// (0x0008abea) vorec_t1

0xb630,	// (0x0008abf8) vorec_t2

0xb63e,	// (0x0008ac06) vorec_t3

0xb64c,	// (0x0008ac14) vorec_t4

0xb65a,	// (0x0008ac22) vorec_t5

0xb668,	// (0x0008ac30) vorec_t6

0x0006,

0xf21f,	// (0x0008e7e7) vorec_t

0xb684,	// (0x0008ac4c) wait_bar_pane_cp01

0x3b5c,	// (0x00083124) cell_vorec_pane_ParamLimits

0x3b5c,	// (0x00083124) cell_vorec_pane

0xb68c,	// (0x0008ac54) cell_vorec_pane_g1

0xb078,	// (0x0008a640) grid_highlight_pane_cp05

0x3b81,	// (0x00083149) cams_zoom_pane

0x3b90,	// (0x00083158) image_vga_pane

0x3ba8,	// (0x00083170) main_camera_pane_g1

0x3bb8,	// (0x00083180) main_camera_pane_g2

0x3bc8,	// (0x00083190) main_camera_pane_g3

0x3bd8,	// (0x000831a0) main_camera_pane_g4

0x3be8,	// (0x000831b0) main_camera_pane_g5

0x3bf8,	// (0x000831c0) main_camera_pane_g6

0x3c08,	// (0x000831d0) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008e7f6) main_camera_pane_g

0x3c18,	// (0x000831e0) main_camera_pane_t1

0x3c2e,	// (0x000831f6) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008e807) main_camera_pane_t

0x3c60,	// (0x00083228) cams_zoom_pane_cp_ParamLimits

0x3c60,	// (0x00083228) cams_zoom_pane_cp

0x3c88,	// (0x00083250) image_cif_pane_ParamLimits

0x3c88,	// (0x00083250) image_cif_pane

0x3cb9,	// (0x00083281) image_subqcif_pane

0x3cc1,	// (0x00083289) main_video_pane_g1_ParamLimits

0x3cc1,	// (0x00083289) main_video_pane_g1

0x3ce5,	// (0x000832ad) main_video_pane_g2_ParamLimits

0x3ce5,	// (0x000832ad) main_video_pane_g2

0x3d19,	// (0x000832e1) main_video_pane_g3_ParamLimits

0x3d19,	// (0x000832e1) main_video_pane_g3

0x3d47,	// (0x0008330f) main_video_pane_g4_ParamLimits

0x3d47,	// (0x0008330f) main_video_pane_g4

0x3d75,	// (0x0008333d) main_video_pane_g5_ParamLimits

0x3d75,	// (0x0008333d) main_video_pane_g5

0xb6a2,	// (0x0008ac6a) main_video_pane_g6_ParamLimits

0xb6a2,	// (0x0008ac6a) main_video_pane_g6

0x0006,

0xf244,	// (0x0008e80c) main_video_pane_g_ParamLimits

0xf244,	// (0x0008e80c) main_video_pane_g

0x3d9c,	// (0x00083364) main_video_pane_t1_ParamLimits

0x3d9c,	// (0x00083364) main_video_pane_t1

0xb6bc,	// (0x0008ac84) cams_zoom_pane_g1

0xb6c5,	// (0x0008ac8d) cams_zoom_pane_g2

0xb6ce,	// (0x0008ac96) cams_zoom_pane_g3

0xb6d7,	// (0x0008ac9f) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008e81b) cams_zoom_pane_g

0x3df9,	// (0x000833c1) grid_cams_pane

0x3e0e,	// (0x000833d6) linegrid_cams_pane

0x3e1f,	// (0x000833e7) cell_cams_pane_ParamLimits

0x3e1f,	// (0x000833e7) cell_cams_pane

0xb6e0,	// (0x0008aca8) cams_burst_image_pane

0xb6e8,	// (0x0008acb0) cell_cams_pane_g1

0xb078,	// (0x0008a640) grid_highlight_pane_cp03

0xb471,	// (0x0008aa39) mp_bg_pane_g1

0xb078,	// (0x0008a640) bg_list_pane_cp03

0xc342,	// (0x0008b90a) bg_mp_pane

0xc34a,	// (0x0008b912) grid_mp_pane

0xc352,	// (0x0008b91a) media_player_g1

0xc35a,	// (0x0008b922) media_player_t1

0xc368,	// (0x0008b930) media_player_t2

0xc376,	// (0x0008b93e) media_player_t3

0xc384,	// (0x0008b94c) media_player_t4

0xc392,	// (0x0008b95a) media_player_t5

0xc3a0,	// (0x0008b968) media_player_t6

0xc3ae,	// (0x0008b976) media_player_t7

0x0006,

0xf602,	// (0x0008ebca) media_player_t

0xc3bc,	// (0x0008b984) wait_bar_pane_cp02

0xf5e7,	// (0x0008ebaf) main_usb_pane_t

0x598e,	// (0x00084f56) cell_mp_pane

0xb471,	// (0x0008aa39) cell_mp_pane_g1

0xb078,	// (0x0008a640) grid_highlight_pane_cp06

0xb790,	// (0x0008ad58) grid_skin_colour_pane

0xb798,	// (0x0008ad60) list_highlight_pane_cp03

0x3e93,	// (0x0008345b) skin_g1

0xb7a0,	// (0x0008ad68) skin_t1

0xb7af,	// (0x0008ad77) skin_t2

0x0001,

0xf288,	// (0x0008e850) skin_t

0x3e9b,	// (0x00083463) cell_skin_colour_pane_ParamLimits

0x3e9b,	// (0x00083463) cell_skin_colour_pane

0xb7bd,	// (0x0008ad85) cell_skin_colour_pane_g1

0x3f04,	// (0x000834cc) call_video_g1_ParamLimits

0x3f04,	// (0x000834cc) call_video_g1

0x3f1a,	// (0x000834e2) call_video_g2_ParamLimits

0x3f1a,	// (0x000834e2) call_video_g2

0x0001,

0xf28d,	// (0x0008e855) call_video_g_ParamLimits

0xf28d,	// (0x0008e855) call_video_g

0x3f62,	// (0x0008352a) call_video_uplink_pane_cp1_ParamLimits

0x3f62,	// (0x0008352a) call_video_uplink_pane_cp1

0xb7cf,	// (0x0008ad97) call_video_uplink_pane_cp2

0x3ff7,	// (0x000835bf) video_down_crop_pane_ParamLimits

0x3ff7,	// (0x000835bf) video_down_crop_pane

0x40ba,	// (0x00083682) video_down_pane_ParamLimits

0x40ba,	// (0x00083682) video_down_pane

0xb7d7,	// (0x0008ad9f) video_down_subqcif_pane_ParamLimits

0xb7d7,	// (0x0008ad9f) video_down_subqcif_pane

0xb7ef,	// (0x0008adb7) video_down_subqcif_pane_cp_ParamLimits

0xb7ef,	// (0x0008adb7) video_down_subqcif_pane_cp

0xb813,	// (0x0008addb) im_reading_pane_ParamLimits

0xb813,	// (0x0008addb) im_reading_pane

0x4177,	// (0x0008373f) im_writing_pane_ParamLimits

0x4177,	// (0x0008373f) im_writing_pane

0x418d,	// (0x00083755) im_reading_pane_t1

0xb82d,	// (0x0008adf5) list_im_pane

0xb83e,	// (0x0008ae06) scroll_pane_cp07

0x41c3,	// (0x0008378b) im_writing_pane_t1_ParamLimits

0x41c3,	// (0x0008378b) im_writing_pane_t1

0xb857,	// (0x0008ae1f) im_writing_pane_t2_ParamLimits

0xb857,	// (0x0008ae1f) im_writing_pane_t2

0x0001,

0xf297,	// (0x0008e85f) im_writing_pane_t_ParamLimits

0xf297,	// (0x0008e85f) im_writing_pane_t

0xb078,	// (0x0008a640) input_focus_pane_cp04

0xb078,	// (0x0008a640) input_focus_pane_cp05

0x41d8,	// (0x000837a0) list_im_single_pane_ParamLimits

0x41d8,	// (0x000837a0) list_im_single_pane

0xb874,	// (0x0008ae3c) list_single_im_pane_t1

0x5954,	// (0x00084f1c) blid_accuracy_pane

0x595c,	// (0x00084f24) blid_compass_pane

0x5964,	// (0x00084f2c) main_location_t1

0x5972,	// (0x00084f3a) main_location_t2

0x5980,	// (0x00084f48) main_location_t3

0x0002,

0xf611,	// (0x0008ebd9) main_location_t

0xb078,	// (0x0008a640) aid_levels_location

0xb471,	// (0x0008aa39) blid_accuracy_pane_g1

0xb471,	// (0x0008aa39) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008e8c1) blid_accuracy_pane_g

0xb8ae,	// (0x0008ae76) wml_content_pane

0xb8ec,	// (0x0008aeb4) wml_button_pane_ParamLimits

0xb8ec,	// (0x0008aeb4) wml_button_pane

0x41ee,	// (0x000837b6) wml_list_single_large_pane_ParamLimits

0x41ee,	// (0x000837b6) wml_list_single_large_pane

0x4202,	// (0x000837ca) wml_list_single_medium_pane_ParamLimits

0x4202,	// (0x000837ca) wml_list_single_medium_pane

0x4217,	// (0x000837df) wml_list_single_small_pane_ParamLimits

0x4217,	// (0x000837df) wml_list_single_small_pane

0xb900,	// (0x0008aec8) wml_selection_box_pane_ParamLimits

0xb900,	// (0x0008aec8) wml_selection_box_pane

0xb913,	// (0x0008aedb) wml_list_single_pane_t1

0xb922,	// (0x0008aeea) wml_list_single_medium_pane_t1

0xb931,	// (0x0008aef9) wml_list_single_large_pane_t1

0xb940,	// (0x0008af08) input_focus_pane_cp02_ParamLimits

0xb940,	// (0x0008af08) input_focus_pane_cp02

0xb953,	// (0x0008af1b) wml_selection_box_pane_g1

0xb95c,	// (0x0008af24) wml_selection_box_pane_t1_ParamLimits

0xb95c,	// (0x0008af24) wml_selection_box_pane_t1

0xb2d3,	// (0x0008a89b) bg_wml_button_pane_ParamLimits

0xb2d3,	// (0x0008a89b) bg_wml_button_pane

0xb974,	// (0x0008af3c) wml_button_pane_g1

0xb97c,	// (0x0008af44) wml_button_pane_t1

0xb974,	// (0x0008af3c) wml_button_bg_pane_g1

0xb98c,	// (0x0008af54) wml_button_bg_pane_g2

0xb994,	// (0x0008af5c) wml_button_bg_pane_g3

0xb99c,	// (0x0008af64) wml_button_bg_pane_g4

0xb9a4,	// (0x0008af6c) wml_button_bg_pane_g5

0xb9ac,	// (0x0008af74) wml_button_bg_pane_g6

0xb9b4,	// (0x0008af7c) wml_button_bg_pane_g7

0xb9bc,	// (0x0008af84) wml_button_bg_pane_g8

0xb9c4,	// (0x0008af8c) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0008e864) wml_button_bg_pane_g

0x422e,	// (0x000837f6) bg_list_pane_cp02

0xb9cc,	// (0x0008af94) mce_header_pane_ParamLimits

0xb9cc,	// (0x0008af94) mce_header_pane

0xb9e0,	// (0x0008afa8) mce_icon_pane

0xb9e0,	// (0x0008afa8) mce_image_pane

0xb9e9,	// (0x0008afb1) mce_text_pane_ParamLimits

0xb9e9,	// (0x0008afb1) mce_text_pane

0x4237,	// (0x000837ff) scroll_pane_cp03

0x4237,	// (0x000837ff) scroll_pane_cp04

0xb9fd,	// (0x0008afc5) scroll_pane_cp05_ParamLimits

0xb9fd,	// (0x0008afc5) scroll_pane_cp05

0x4241,	// (0x00083809) mce_header_field_pane_ParamLimits

0x4241,	// (0x00083809) mce_header_field_pane

0x4258,	// (0x00083820) mce_header_field_pane_2_ParamLimits

0x4258,	// (0x00083820) mce_header_field_pane_2

0x426e,	// (0x00083836) mce_header_field_pane_3

0x4276,	// (0x0008383e) list_single_mce_message_pane_ParamLimits

0x4276,	// (0x0008383e) list_single_mce_message_pane

0x428b,	// (0x00083853) list_single_mce_smart_pane_ParamLimits

0x428b,	// (0x00083853) list_single_mce_smart_pane

0xba09,	// (0x0008afd1) input_focus_pane_cp03

0xba12,	// (0x0008afda) list_header_data_pane

0x42ab,	// (0x00083873) mce_header_field_pane_t1

0x42b9,	// (0x00083881) list_single_mce_header_pane_ParamLimits

0x42b9,	// (0x00083881) list_single_mce_header_pane

0xba1a,	// (0x0008afe2) list_single_mce_header_pane_t1

0xba29,	// (0x0008aff1) list_single_mce_message_pane_g1

0xba32,	// (0x0008affa) list_single_mce_message_pane_t1

0x42eb,	// (0x000838b3) bg_cale_heading_pane_cp01_ParamLimits

0x42eb,	// (0x000838b3) bg_cale_heading_pane_cp01

0xba41,	// (0x0008b009) bg_cale_pane_cp02_ParamLimits

0xba41,	// (0x0008b009) bg_cale_pane_cp02

0x430e,	// (0x000838d6) cale_month_corner_pane

0x4324,	// (0x000838ec) cale_month_day_heading_pane_ParamLimits

0x4324,	// (0x000838ec) cale_month_day_heading_pane

0x4357,	// (0x0008391f) cale_month_pane_g1_ParamLimits

0x4357,	// (0x0008391f) cale_month_pane_g1

0x4373,	// (0x0008393b) cale_month_pane_g2_ParamLimits

0x4373,	// (0x0008393b) cale_month_pane_g2

0x438e,	// (0x00083956) cale_month_pane_g3_ParamLimits

0x438e,	// (0x00083956) cale_month_pane_g3

0x43ba,	// (0x00083982) cale_month_pane_g4_ParamLimits

0x43ba,	// (0x00083982) cale_month_pane_g4

0x43e6,	// (0x000839ae) cale_month_pane_g5_ParamLimits

0x43e6,	// (0x000839ae) cale_month_pane_g5

0x4412,	// (0x000839da) cale_month_pane_g6_ParamLimits

0x4412,	// (0x000839da) cale_month_pane_g6

0x443e,	// (0x00083a06) cale_month_pane_g7_ParamLimits

0x443e,	// (0x00083a06) cale_month_pane_g7

0x446a,	// (0x00083a32) cale_month_pane_g8_ParamLimits

0x446a,	// (0x00083a32) cale_month_pane_g8

0x44a6,	// (0x00083a6e) cale_month_pane_g9_ParamLimits

0x44a6,	// (0x00083a6e) cale_month_pane_g9

0x44e0,	// (0x00083aa8) cale_month_pane_g10_ParamLimits

0x44e0,	// (0x00083aa8) cale_month_pane_g10

0x451a,	// (0x00083ae2) cale_month_pane_g11_ParamLimits

0x451a,	// (0x00083ae2) cale_month_pane_g11

0x4554,	// (0x00083b1c) cale_month_pane_g12_ParamLimits

0x4554,	// (0x00083b1c) cale_month_pane_g12

0x458e,	// (0x00083b56) cale_month_pane_g13_ParamLimits

0x458e,	// (0x00083b56) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0008e877) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0008e877) cale_month_pane_g

0x45c8,	// (0x00083b90) cale_month_week_pane

0x45db,	// (0x00083ba3) grid_cale_month_pane_ParamLimits

0x45db,	// (0x00083ba3) grid_cale_month_pane

0x4609,	// (0x00083bd1) cale_month_day_heading_pane_t1

0x4667,	// (0x00083c2f) cale_month_day_heading_pane_t2

0x46cc,	// (0x00083c94) cale_month_day_heading_pane_t3

0x4731,	// (0x00083cf9) cale_month_day_heading_pane_t4

0x4796,	// (0x00083d5e) cale_month_day_heading_pane_t5

0x47fb,	// (0x00083dc3) cale_month_day_heading_pane_t6

0x4860,	// (0x00083e28) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008e892) cale_month_day_heading_pane_t

0xb5d0,	// (0x0008ab98) bg_cale_side_pane_cp01

0x48cd,	// (0x00083e95) cale_month_week_pane_t1

0x48e4,	// (0x00083eac) cale_month_week_pane_t2

0x48fb,	// (0x00083ec3) cale_month_week_pane_t3

0x4912,	// (0x00083eda) cale_month_week_pane_t4

0x4929,	// (0x00083ef1) cale_month_week_pane_t5

0x4940,	// (0x00083f08) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008e8a1) cale_month_week_pane_t

0x4957,	// (0x00083f1f) cell_cale_month_pane_ParamLimits

0x4957,	// (0x00083f1f) cell_cale_month_pane

0xbaa0,	// (0x0008b068) cell_cale_month_pane_g1

0x4a05,	// (0x00083fcd) cell_cale_month_pane_t1_ParamLimits

0x4a05,	// (0x00083fcd) cell_cale_month_pane_t1

0xb5de,	// (0x0008aba6) grid_highlight_pane_cp08

0xb471,	// (0x0008aa39) main_smil_g1

0x4a21,	// (0x00083fe9) smil_status_pane

0xbaac,	// (0x0008b074) smil_text_pane

0xc222,	// (0x0008b7ea) bg_popup_call3_rect_pane_g8

0xc22a,	// (0x0008b7f2) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0008eb5a) bg_popup_call3_rect_pane_g

0xc4e0,	// (0x0008baa8) smil_status_volume_pane_g1

0xbab6,	// (0x0008b07e) smil_status_pane_t1

0xeb5d,	// (0x0008e125) volume_smil_pane

0xbacd,	// (0x0008b095) list_smil_text_pane

0x4a32,	// (0x00083ffa) scroll_pane_cp011

0x4a3d,	// (0x00084005) smil_text_list_pane_t1_ParamLimits

0x4a3d,	// (0x00084005) smil_text_list_pane_t1

0xbad7,	// (0x0008b09f) aid_volume_smil_ParamLimits

0xbad7,	// (0x0008b09f) aid_volume_smil

0xb471,	// (0x0008aa39) smil_volume_pane_g1

0xb471,	// (0x0008aa39) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008e8c1) smil_volume_pane_g

0xb3ce,	// (0x0008a996) listscroll_cale_day_pane

0xbaf9,	// (0x0008b0c1) bg_cale_pane

0xbb11,	// (0x0008b0d9) list_cale_pane

0xbb22,	// (0x0008b0ea) scroll_pane_cp09

0xbb33,	// (0x0008b0fb) cale_bg_pane_g1

0xbb3b,	// (0x0008b103) cale_bg_pane_g2

0xbb43,	// (0x0008b10b) cale_bg_pane_g3

0xbb4b,	// (0x0008b113) cale_bg_pane_g4

0xbb53,	// (0x0008b11b) cale_bg_pane_g5

0xbb5b,	// (0x0008b123) cale_bg_pane_g6

0xbb63,	// (0x0008b12b) cale_bg_pane_g7

0xbb6b,	// (0x0008b133) cale_bg_pane_g8

0xbb73,	// (0x0008b13b) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0008e8c6) cale_bg_pane_g

0x4a7b,	// (0x00084043) list_cale_time_pane_ParamLimits

0x4a7b,	// (0x00084043) list_cale_time_pane

0xbb7b,	// (0x0008b143) list_cale_time_pane_g1_ParamLimits

0xbb7b,	// (0x0008b143) list_cale_time_pane_g1

0xbb87,	// (0x0008b14f) list_cale_time_pane_g2_ParamLimits

0xbb87,	// (0x0008b14f) list_cale_time_pane_g2

0x4a90,	// (0x00084058) list_cale_time_pane_g3_ParamLimits

0x4a90,	// (0x00084058) list_cale_time_pane_g3

0x4a9e,	// (0x00084066) list_cale_time_pane_g4_ParamLimits

0x4a9e,	// (0x00084066) list_cale_time_pane_g4

0x4aac,	// (0x00084074) list_cale_time_pane_g5_ParamLimits

0x4aac,	// (0x00084074) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0008e8d9) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0008e8d9) list_cale_time_pane_g

0xbba1,	// (0x0008b169) list_cale_time_pane_t1_ParamLimits

0xbba1,	// (0x0008b169) list_cale_time_pane_t1

0xbbc9,	// (0x0008b191) list_cale_time_pane_t2_ParamLimits

0xbbc9,	// (0x0008b191) list_cale_time_pane_t2

0x4db0,	// (0x00084378) aid_blid_cardinal_pane

0x4dee,	// (0x000843b6) compass_pane_t4

0xbbf1,	// (0x0008b1b9) list_cale_time_pane_t4_ParamLimits

0xbbf1,	// (0x0008b1b9) list_cale_time_pane_t4

0x4dfc,	// (0x000843c4) compass_pane_t5

0x4e0a,	// (0x000843d2) compass_pane_t6

0x4e18,	// (0x000843e0) compass_pane_t7

0x0f36,	// (0x000804fe) navi_pane_cc_t1

0x10da,	// (0x000806a2) aid_phob_thumbnail_center_pane

0x5406,	// (0x000849ce) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0008e8e6) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0008e8e6) list_cale_time_pane_t

0xacd1,	// (0x0008a299) bg_popup_window_pane_cp02_ParamLimits

0xacd1,	// (0x0008a299) bg_popup_window_pane_cp02

0xbc19,	// (0x0008b1e1) heading_pane_cp01_ParamLimits

0xbc19,	// (0x0008b1e1) heading_pane_cp01

0xbc25,	// (0x0008b1ed) loc_req_pane_ParamLimits

0xbc25,	// (0x0008b1ed) loc_req_pane

0xbc35,	// (0x0008b1fd) loc_type_pane_ParamLimits

0xbc35,	// (0x0008b1fd) loc_type_pane

0xbc47,	// (0x0008b20f) loc_type_pane_t1_ParamLimits

0xbc47,	// (0x0008b20f) loc_type_pane_t1

0xbc59,	// (0x0008b221) loc_type_pane_t2_ParamLimits

0xbc59,	// (0x0008b221) loc_type_pane_t2

0xbc6b,	// (0x0008b233) loc_type_pane_t3_ParamLimits

0xbc6b,	// (0x0008b233) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008e8ed) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008e8ed) loc_type_pane_t

0xbc7d,	// (0x0008b245) list_loc_req_pane

0xbc87,	// (0x0008b24f) scroll_pane_cp012

0x4ab8,	// (0x00084080) list_single_loc_request_popup_menu_pane_ParamLimits

0x4ab8,	// (0x00084080) list_single_loc_request_popup_menu_pane

0xbc90,	// (0x0008b258) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbc90,	// (0x0008b258) list_single_loc_request_popup_menu_pane_g1

0xbc9c,	// (0x0008b264) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbc9c,	// (0x0008b264) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0008e8f4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0008e8f4) list_single_loc_request_popup_menu_pane_g

0xbca8,	// (0x0008b270) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbca8,	// (0x0008b270) list_single_loc_request_popup_menu_pane_t1

0xb2d3,	// (0x0008a89b) bg_popup_window_pane_cp03_ParamLimits

0xb2d3,	// (0x0008a89b) bg_popup_window_pane_cp03

0x2078,	// (0x00081640) heading_loc_req_pane_ParamLimits

0x2078,	// (0x00081640) heading_loc_req_pane

0x4ac5,	// (0x0008408d) popup_dyc_status_message_window_g1_ParamLimits

0x4ac5,	// (0x0008408d) popup_dyc_status_message_window_g1

0x4ad9,	// (0x000840a1) popup_dyc_status_message_window_t1_ParamLimits

0x4ad9,	// (0x000840a1) popup_dyc_status_message_window_t1

0x4aee,	// (0x000840b6) popup_dyc_status_message_window_t2_ParamLimits

0x4aee,	// (0x000840b6) popup_dyc_status_message_window_t2

0x4b03,	// (0x000840cb) popup_dyc_status_message_window_t3_ParamLimits

0x4b03,	// (0x000840cb) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0008e8f9) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0008e8f9) popup_dyc_status_message_window_t

0xb078,	// (0x0008a640) bg_heading_pane_cp01

0xbcbe,	// (0x0008b286) heading_loc_req_pane_g1

0xbcc6,	// (0x0008b28e) heading_loc_req_pane_g2

0xbcce,	// (0x0008b296) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008e900) heading_loc_req_pane_g

0xbcd6,	// (0x0008b29e) heading_loc_req_pane_t1

0xbd7f,	// (0x0008b347) bg_popup_sub_pane_cp01_ParamLimits

0xbd7f,	// (0x0008b347) bg_popup_sub_pane_cp01

0xbd8d,	// (0x0008b355) popup_cale_events_window_g1_ParamLimits

0xbd8d,	// (0x0008b355) popup_cale_events_window_g1

0xbdad,	// (0x0008b375) popup_cale_events_window_g2_ParamLimits

0xbdad,	// (0x0008b375) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0008e934) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0008e934) popup_cale_events_window_g

0xbdcd,	// (0x0008b395) popup_cale_events_window_t1_ParamLimits

0xbdcd,	// (0x0008b395) popup_cale_events_window_t1

0xbddf,	// (0x0008b3a7) popup_cale_events_window_t2_ParamLimits

0xbddf,	// (0x0008b3a7) popup_cale_events_window_t2

0xbe1d,	// (0x0008b3e5) popup_cale_events_window_t3_ParamLimits

0xbe1d,	// (0x0008b3e5) popup_cale_events_window_t3

0xbe57,	// (0x0008b41f) popup_cale_events_window_t4_ParamLimits

0xbe57,	// (0x0008b41f) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008e939) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008e939) popup_cale_events_window_t

0x4b93,	// (0x0008415b) call_type_pane

0x4ba3,	// (0x0008416b) popup_call_status_window_g1

0x4bb7,	// (0x0008417f) popup_call_status_window_g2

0x4bcb,	// (0x00084193) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0008e942) popup_call_status_window_g

0xbe8d,	// (0x0008b455) call_type_pane_g1

0xbe96,	// (0x0008b45e) call_type_pane_g2

0x0001,

0xf381,	// (0x0008e949) call_type_pane_g

0xb078,	// (0x0008a640) bg_popup_sub_pane_cp02

0xbe9f,	// (0x0008b467) listscroll_popup_wml_pane

0xbea7,	// (0x0008b46f) list_wml_pane

0xbeb1,	// (0x0008b479) scroll_pane_cp013

0x4bdb,	// (0x000841a3) list_single_graphic_popup_wml_pane_ParamLimits

0x4bdb,	// (0x000841a3) list_single_graphic_popup_wml_pane

0xb471,	// (0x0008aa39) list_single_graphic_popup_wml_pane_g1

0xbeba,	// (0x0008b482) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0008e94e) list_single_graphic_popup_wml_pane_g

0xbec2,	// (0x0008b48a) list_single_graphic_popup_wml_pane_t1

0xbed8,	// (0x0008b4a0) aid_call_pane

0xb2cb,	// (0x0008a893) popup_clock_analogue_window_g1

0xb2cb,	// (0x0008a893) popup_clock_analogue_window_g2

0xbee0,	// (0x0008b4a8) popup_clock_analogue_window_g3

0xbee0,	// (0x0008b4a8) popup_clock_analogue_window_g4

0xb471,	// (0x0008aa39) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0008e953) popup_clock_analogue_window_g

0xbee8,	// (0x0008b4b0) popup_clock_analogue_window_t1

0xbef6,	// (0x0008b4be) clock_digital_number_pane_ParamLimits

0xbef6,	// (0x0008b4be) clock_digital_number_pane

0xbf02,	// (0x0008b4ca) clock_digital_number_pane_cp02_ParamLimits

0xbf02,	// (0x0008b4ca) clock_digital_number_pane_cp02

0xbf0e,	// (0x0008b4d6) clock_digital_number_pane_cp03_ParamLimits

0xbf0e,	// (0x0008b4d6) clock_digital_number_pane_cp03

0xbf1a,	// (0x0008b4e2) clock_digital_number_pane_cp04_ParamLimits

0xbf1a,	// (0x0008b4e2) clock_digital_number_pane_cp04

0xbf26,	// (0x0008b4ee) clock_digital_separator_pane_ParamLimits

0xbf26,	// (0x0008b4ee) clock_digital_separator_pane

0xbf32,	// (0x0008b4fa) popup_clock_digital_window_t1

0xb471,	// (0x0008aa39) clock_digital_number_pane_g1

0xb471,	// (0x0008aa39) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008e8c1) clock_digital_number_pane_g

0xb471,	// (0x0008aa39) clock_digital_separator_pane_g1

0xb471,	// (0x0008aa39) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008e8c1) clock_digital_separator_pane_g

0xb078,	// (0x0008a640) bg_popup_window_pane_cp04

0xbf4f,	// (0x0008b517) heading_pane_cp03

0xbf57,	// (0x0008b51f) listscroll_popup_gms_pane

0xbf5f,	// (0x0008b527) grid_large_graphic_popup_pane

0xbf69,	// (0x0008b531) listscroll_popup_gms_pane_g1

0xbf71,	// (0x0008b539) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0008e95e) listscroll_popup_gms_pane_g

0xb8e4,	// (0x0008aeac) scroll_pane_cp014

0x4bee,	// (0x000841b6) cell_large_graphic_popup_pane_ParamLimits

0x4bee,	// (0x000841b6) cell_large_graphic_popup_pane

0x4c04,	// (0x000841cc) cell_large_graphic_popup_pane_g1_ParamLimits

0x4c04,	// (0x000841cc) cell_large_graphic_popup_pane_g1

0xbf79,	// (0x0008b541) cell_large_graphic_popup_pane_g2_ParamLimits

0xbf79,	// (0x0008b541) cell_large_graphic_popup_pane_g2

0xbf85,	// (0x0008b54d) cell_large_graphic_popup_pane_g3_ParamLimits

0xbf85,	// (0x0008b54d) cell_large_graphic_popup_pane_g3

0xbf92,	// (0x0008b55a) cell_large_graphic_popup_pane_g4_ParamLimits

0xbf92,	// (0x0008b55a) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0008e963) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0008e963) cell_large_graphic_popup_pane_g

0xbfa2,	// (0x0008b56a) grid_highlight_pane_cp010

0xb471,	// (0x0008aa39) bg_popup_call_pane_g1

0xbfac,	// (0x0008b574) list_single_graphic_popup_conf_pane_ParamLimits

0xbfac,	// (0x0008b574) list_single_graphic_popup_conf_pane

0x0dbd,	// (0x00080385) list_highlight_pane_cp01

0x0dc6,	// (0x0008038e) list_single_graphic_popup_conf_pane_g1

0x0dce,	// (0x00080396) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008e96c) list_single_graphic_popup_conf_pane_g

0x0dd6,	// (0x0008039e) list_single_graphic_popup_conf_pane_t1

0x0de4,	// (0x000803ac) linegrid_cams_pane_g1

0x4c10,	// (0x000841d8) linegrid_cams_pane_g2

0xb57c,	// (0x0008ab44) linegrid_cams_pane_g3

0x0ded,	// (0x000803b5) linegrid_cams_pane_g4

0x4c19,	// (0x000841e1) linegrid_cams_pane_g5

0x4c22,	// (0x000841ea) linegrid_cams_pane_g6

0xb611,	// (0x0008abd9) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0008e971) linegrid_cams_pane_g

0x0df6,	// (0x000803be) popup_clock_analogue_window

0x0df6,	// (0x000803be) popup_clock_digital_window

0xb078,	// (0x0008a640) popup_phob_thumbnail_window

0xb471,	// (0x0008aa39) call_video_uplink_pane_g1

0x0dff,	// (0x000803c7) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0008e980) call_video_uplink_pane_g

0xb5de,	// (0x0008aba6) video_uplink_pane

0x0e07,	// (0x000803cf) mce_image_pane_g1

0x4c2b,	// (0x000841f3) mce_image_pane_g2

0x4c33,	// (0x000841fb) mce_image_pane_g3

0x4c3b,	// (0x00084203) mce_image_pane_g4

0x4c43,	// (0x0008420b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0008e985) mce_image_pane_g

0x0e11,	// (0x000803d9) control_top_pane_stacon_cp01_ParamLimits

0x0e11,	// (0x000803d9) control_top_pane_stacon_cp01

0x0e21,	// (0x000803e9) uni_indicator_pane_stacon_cp01_ParamLimits

0x0e21,	// (0x000803e9) uni_indicator_pane_stacon_cp01

0x0e32,	// (0x000803fa) bg_popup_sub_pane_cp03

0x0e3c,	// (0x00080404) chi_dic_find_pane

0x4c4b,	// (0x00084213) listscroll_chi_dic_pane

0x0e44,	// (0x0008040c) main_pane_chidic_g1

0x0e4c,	// (0x00080414) chi_dic_find_pane_t1

0x0e5a,	// (0x00080422) find_chidic_pane

0x0e63,	// (0x0008042b) chi_dic_list_pane_ParamLimits

0x0e63,	// (0x0008042b) chi_dic_list_pane

0x0e74,	// (0x0008043c) scroll_pane_cp020

0x0e7c,	// (0x00080444) find_chidic_pane_t1

0xb078,	// (0x0008a640) input_focus_pane_cp06

0x4c5f,	// (0x00084227) list_chi_dic_pane_ParamLimits

0x4c5f,	// (0x00084227) list_chi_dic_pane

0x4c71,	// (0x00084239) list_chi_dic_pane_t1_ParamLimits

0x4c71,	// (0x00084239) list_chi_dic_pane_t1

0xb078,	// (0x0008a640) list_highlight_pane_cp020

0x0e8b,	// (0x00080453) bg_cale_heading_pane_g1

0x4c84,	// (0x0008424c) bg_cale_heading_pane_g2

0x4c8c,	// (0x00084254) bg_cale_heading_pane_g3

0x4c94,	// (0x0008425c) bg_cale_heading_pane_g4

0x4c9e,	// (0x00084266) bg_cale_heading_pane_g5

0x4ca8,	// (0x00084270) bg_cale_heading_pane_g6

0x4cb0,	// (0x00084278) bg_cale_heading_pane_g7

0x4cb8,	// (0x00084280) bg_cale_heading_pane_g8

0x4cc2,	// (0x0008428a) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0008e990) bg_cale_heading_pane_g

0x0e8b,	// (0x00080453) bg_cale_side_pane_g1

0x4ccc,	// (0x00084294) bg_cale_side_pane_g2

0x4cd4,	// (0x0008429c) bg_cale_side_pane_g3

0x4cdc,	// (0x000842a4) bg_cale_side_pane_g4

0x4ce4,	// (0x000842ac) bg_cale_side_pane_g5

0x4cec,	// (0x000842b4) bg_cale_side_pane_g6

0x4cf4,	// (0x000842bc) bg_cale_side_pane_g7

0x4cfc,	// (0x000842c4) bg_cale_side_pane_g8

0x4d04,	// (0x000842cc) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0008e9a3) bg_cale_side_pane_g

0x4d0c,	// (0x000842d4) popup_call_status_window_ParamLimits

0x4d0c,	// (0x000842d4) popup_call_status_window

0x0e93,	// (0x0008045b) stacon_top_pane

0x0e9b,	// (0x00080463) status_pane_ParamLimits

0x0e9b,	// (0x00080463) status_pane

0x0eb5,	// (0x0008047d) status_small_pane

0x0ebd,	// (0x00080485) control_pane

0xb078,	// (0x0008a640) stacon_bottom_pane

0x0ec5,	// (0x0008048d) list_single_mce_smart_pane_t1_ParamLimits

0x0ec5,	// (0x0008048d) list_single_mce_smart_pane_t1

0x0ed8,	// (0x000804a0) list_single_mce_smart_pane_t2_ParamLimits

0x0ed8,	// (0x000804a0) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0008e9b6) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0008e9b6) list_single_mce_smart_pane_t

0x4d53,	// (0x0008431b) compass_pane

0x4d5c,	// (0x00084324) main_location2_pane_t1

0x4d72,	// (0x0008433a) main_location2_pane_t2

0x4d88,	// (0x00084350) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008e9bb) main_location2_pane_t

0x0f00,	// (0x000804c8) compass_pane_g1_ParamLimits

0x0f00,	// (0x000804c8) compass_pane_g1

0x4dd0,	// (0x00084398) compass_pane_t1

0x4ddf,	// (0x000843a7) compass_pane_t2

0x0005,

0xf3fc,	// (0x0008e9c4) compass_pane_t

0x4e26,	// (0x000843ee) text_secondary_cp61

0x0f2d,	// (0x000804f5) navi_pane_cams_g5

0x0f6e,	// (0x00080536) navi_pane_im_t1

0x0f7c,	// (0x00080544) navi_pane_mp_g1_ParamLimits

0x0f7c,	// (0x00080544) navi_pane_mp_g1

0x0f90,	// (0x00080558) navi_pane_mp_g2_ParamLimits

0x0f90,	// (0x00080558) navi_pane_mp_g2

0x0f9c,	// (0x00080564) navi_pane_mp_g3_ParamLimits

0x0f9c,	// (0x00080564) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0008e9d8) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0008e9d8) navi_pane_mp_g

0x0fa8,	// (0x00080570) navi_pane_mp_t1

0x0fb6,	// (0x0008057e) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008e9df) navi_pane_mp_t

0x1023,	// (0x000805eb) navi_pane_vt_g1

0x0fa8,	// (0x00080570) navi_pane_vt_t1

0x102b,	// (0x000805f3) navi_slider_pane

0x1033,	// (0x000805fb) zooming_pane

0x103b,	// (0x00080603) navi_slider_pane_g1

0xbfbf,	// (0x0008b587) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0008e9e6) navi_slider_pane_g

0x105f,	// (0x00080627) aid_levels_zoom

0x1067,	// (0x0008062f) zooming_pane_g1

0x106f,	// (0x00080637) zooming_pane_g2

0x106f,	// (0x00080637) zooming_pane_g3

0x0002,

0xf42d,	// (0x0008e9f5) zooming_pane_g

0x1077,	// (0x0008063f) level_10_zoom

0x1080,	// (0x00080648) level_11_zoom

0x1089,	// (0x00080651) level_1_zoom

0x1092,	// (0x0008065a) level_2_zoom

0x109b,	// (0x00080663) level_3_zoom

0x10a4,	// (0x0008066c) level_4_zoom

0x10ad,	// (0x00080675) level_5_zoom

0x10b6,	// (0x0008067e) level_6_zoom

0x10bf,	// (0x00080687) level_7_zoom

0x10c8,	// (0x00080690) level_8_zoom

0x10d1,	// (0x00080699) level_9_zoom

0x10e2,	// (0x000806aa) popup_phob_thumbnail_window_g1

0x10ea,	// (0x000806b2) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008e9fc) popup_phob_thumbnail_window_g

0xc3c4,	// (0x0008b98c) level_1_location

0xc3cc,	// (0x0008b994) level_2_location

0xc3d4,	// (0x0008b99c) level_3_location

0xc3dc,	// (0x0008b9a4) level_4_location

0x1033,	// (0x000805fb) level_5_location

0x4eb1,	// (0x00084479) mce_icon_pane_g1

0x4eb9,	// (0x00084481) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0008ea01) mce_icon_pane_g

0x4ec1,	// (0x00084489) main_mup_pane_g1_ParamLimits

0x4ec1,	// (0x00084489) main_mup_pane_g1

0x4ed7,	// (0x0008449f) main_mup_pane_g2_ParamLimits

0x4ed7,	// (0x0008449f) main_mup_pane_g2

0x4eef,	// (0x000844b7) main_mup_pane_g3_ParamLimits

0x4eef,	// (0x000844b7) main_mup_pane_g3

0x4f07,	// (0x000844cf) main_mup_pane_g4_ParamLimits

0x4f07,	// (0x000844cf) main_mup_pane_g4

0x4f1f,	// (0x000844e7) main_mup_pane_g5_ParamLimits

0x4f1f,	// (0x000844e7) main_mup_pane_g5

0x4f39,	// (0x00084501) main_mup_pane_g6_ParamLimits

0x4f39,	// (0x00084501) main_mup_pane_g6

0x4f51,	// (0x00084519) main_mup_pane_g7_ParamLimits

0x4f51,	// (0x00084519) main_mup_pane_g7

0x4f69,	// (0x00084531) main_mup_pane_g8_ParamLimits

0x4f69,	// (0x00084531) main_mup_pane_g8

0x4f81,	// (0x00084549) main_mup_pane_g9_ParamLimits

0x4f81,	// (0x00084549) main_mup_pane_g9

0x4f95,	// (0x0008455d) main_mup_pane_g10_ParamLimits

0x4f95,	// (0x0008455d) main_mup_pane_g10

0x4fa9,	// (0x00084571) main_mup_pane_g11_ParamLimits

0x4fa9,	// (0x00084571) main_mup_pane_g11

0x4fbb,	// (0x00084583) main_mup_pane_g12_ParamLimits

0x4fbb,	// (0x00084583) main_mup_pane_g12

0x4fcf,	// (0x00084597) main_mup_pane_g13_ParamLimits

0x4fcf,	// (0x00084597) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0008ea06) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0008ea06) main_mup_pane_g

0x4fe1,	// (0x000845a9) main_mup_pane_t1_ParamLimits

0x4fe1,	// (0x000845a9) main_mup_pane_t1

0x4ffb,	// (0x000845c3) main_mup_pane_t2_ParamLimits

0x4ffb,	// (0x000845c3) main_mup_pane_t2

0x5013,	// (0x000845db) main_mup_pane_t3_ParamLimits

0x5013,	// (0x000845db) main_mup_pane_t3

0x502b,	// (0x000845f3) main_mup_pane_t4_ParamLimits

0x502b,	// (0x000845f3) main_mup_pane_t4

0x5049,	// (0x00084611) main_mup_pane_t5_ParamLimits

0x5049,	// (0x00084611) main_mup_pane_t5

0x505e,	// (0x00084626) main_mup_pane_t6_ParamLimits

0x505e,	// (0x00084626) main_mup_pane_t6

0x0005,

0xf459,	// (0x0008ea21) main_mup_pane_t_ParamLimits

0xf459,	// (0x0008ea21) main_mup_pane_t

0x5070,	// (0x00084638) mup_progress_pane_ParamLimits

0x5070,	// (0x00084638) mup_progress_pane

0x507c,	// (0x00084644) mup_visualizer_pane_ParamLimits

0x507c,	// (0x00084644) mup_visualizer_pane

0x50a4,	// (0x0008466c) mup_volume_pane_ParamLimits

0x50a4,	// (0x0008466c) mup_volume_pane

0xbfd1,	// (0x0008b599) mup_visualizer_pane_g1_ParamLimits

0xbfd1,	// (0x0008b599) mup_visualizer_pane_g1

0xbfd1,	// (0x0008b599) mup_visualizer_pane_g2_ParamLimits

0xbfd1,	// (0x0008b599) mup_visualizer_pane_g2

0x0f00,	// (0x000804c8) mup_visualizer_pane_g3_ParamLimits

0x0f00,	// (0x000804c8) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0008ea2e) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0008ea2e) mup_visualizer_pane_g

0xb471,	// (0x0008aa39) mup_volume_pane_g1

0x10fa,	// (0x000806c2) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0008ea35) mup_volume_pane_g

0xb471,	// (0x0008aa39) mup_progress_pane_g1

0x1103,	// (0x000806cb) mup_progress_pane_g2

0x110c,	// (0x000806d4) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0008ea3a) mup_progress_pane_g

0xb078,	// (0x0008a640) bg_popup_window_pane_cp05

0x1115,	// (0x000806dd) heading_pane_cp02_ParamLimits

0x1115,	// (0x000806dd) heading_pane_cp02

0x112f,	// (0x000806f7) list_popup_blid_pane

0x1137,	// (0x000806ff) list_blid_sat_info_pane_ParamLimits

0x1137,	// (0x000806ff) list_blid_sat_info_pane

0x114a,	// (0x00080712) list_blid_sat_info_pane_g1

0x1152,	// (0x0008071a) list_blid_sat_info_pane_t1

0x5194,	// (0x0008475c) mup_equalizer_pane_ParamLimits

0x5194,	// (0x0008475c) mup_equalizer_pane

0x51ad,	// (0x00084775) mup_equalizer_pane_cp1_ParamLimits

0x51ad,	// (0x00084775) mup_equalizer_pane_cp1

0x51c6,	// (0x0008478e) mup_equalizer_pane_cp2_ParamLimits

0x51c6,	// (0x0008478e) mup_equalizer_pane_cp2

0x51df,	// (0x000847a7) mup_equalizer_pane_cp3_ParamLimits

0x51df,	// (0x000847a7) mup_equalizer_pane_cp3

0x51f8,	// (0x000847c0) mup_equalizer_pane_cp4_ParamLimits

0x51f8,	// (0x000847c0) mup_equalizer_pane_cp4

0x5211,	// (0x000847d9) mup_equalizer_pane_cp5

0x5223,	// (0x000847eb) mup_equalizer_pane_cp6

0x5235,	// (0x000847fd) mup_equalizer_pane_cp7

0xc2a2,	// (0x0008b86a) bg_popup_call_poc_act_pane_g9

0xc2aa,	// (0x0008b872) bg_popup_call_poc_act_pane_g10

0xc2b2,	// (0x0008b87a) bg_popup_call_poc_act_pane_g11

0x000a,

0xb2d3,	// (0x0008a89b) mup_scale_pane

0xb471,	// (0x0008aa39) mup_scale_pane_g1

0x1160,	// (0x00080728) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0008ea56) mup_scale_pane_g

0x1184,	// (0x0008074c) msg_data_pane

0x118c,	// (0x00080754) scroll_pane_cp017

0x525b,	// (0x00084823) bg_list_pane_cp04_ParamLimits

0x525b,	// (0x00084823) bg_list_pane_cp04

0x1194,	// (0x0008075c) msg_data_pane_g1

0x4c2b,	// (0x000841f3) msg_data_pane_g2

0x4c33,	// (0x000841fb) msg_data_pane_g3

0x5273,	// (0x0008483b) msg_data_pane_g4

0x4c43,	// (0x0008420b) msg_data_pane_g5

0x4eb1,	// (0x00084479) msg_data_pane_g6

0x527b,	// (0x00084843) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0008ea65) msg_data_pane_g

0x5283,	// (0x0008484b) msg_text_pane_ParamLimits

0x5283,	// (0x0008484b) msg_text_pane

0x52a5,	// (0x0008486d) qrid_highlight_pane_cp011_ParamLimits

0x52a5,	// (0x0008486d) qrid_highlight_pane_cp011

0xb078,	// (0x0008a640) msg_body_pane

0xb078,	// (0x0008a640) msg_header_pane

0x11a5,	// (0x0008076d) input_focus_pane_cp07

0x52c7,	// (0x0008488f) msg_header_pane_t1_ParamLimits

0x52c7,	// (0x0008488f) msg_header_pane_t1

0x52d9,	// (0x000848a1) msg_header_pane_t2_ParamLimits

0x52d9,	// (0x000848a1) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0008ea79) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0008ea79) msg_header_pane_t

0x11ba,	// (0x00080782) msg_body_pane_g1

0x52eb,	// (0x000848b3) msg_body_pane_t1_ParamLimits

0x52eb,	// (0x000848b3) msg_body_pane_t1

0x5316,	// (0x000848de) msg_body_pane_t2_ParamLimits

0x5316,	// (0x000848de) msg_body_pane_t2

0x5328,	// (0x000848f0) msg_body_pane_t3_ParamLimits

0x5328,	// (0x000848f0) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008ea7e) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008ea7e) msg_body_pane_t

0x5370,	// (0x00084938) main_viewer_pane_g1_ParamLimits

0x5370,	// (0x00084938) main_viewer_pane_g1

0x537c,	// (0x00084944) main_viewer_pane_g2_ParamLimits

0x537c,	// (0x00084944) main_viewer_pane_g2

0x5388,	// (0x00084950) main_viewer_pane_g3_ParamLimits

0x5388,	// (0x00084950) main_viewer_pane_g3

0x5397,	// (0x0008495f) main_viewer_pane_g4_ParamLimits

0x5397,	// (0x0008495f) main_viewer_pane_g4

0xbfff,	// (0x0008b5c7) main_viewer_pane_g5_ParamLimits

0xbfff,	// (0x0008b5c7) main_viewer_pane_g5

0xbfff,	// (0x0008b5c7) main_viewer_pane_g7_ParamLimits

0xbfff,	// (0x0008b5c7) main_viewer_pane_g7

0xc011,	// (0x0008b5d9) main_viewer_pane_g8_ParamLimits

0xc011,	// (0x0008b5d9) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008ea8e) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008ea8e) main_viewer_pane_g

0x11c2,	// (0x0008078a) viewer_content_pane_ParamLimits

0x11c2,	// (0x0008078a) viewer_content_pane

0x53cb,	// (0x00084993) main_postcard_pane_g1_ParamLimits

0x53cb,	// (0x00084993) main_postcard_pane_g1

0x53df,	// (0x000849a7) main_postcard_pane_g2_ParamLimits

0x53df,	// (0x000849a7) main_postcard_pane_g2

0x53f3,	// (0x000849bb) main_postcard_pane_g3_ParamLimits

0x53f3,	// (0x000849bb) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008ea9f) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008ea9f) main_postcard_pane_g

0x5406,	// (0x000849ce) main_postcard_pane_g4

0xc4f3,	// (0x0008babb) smil_status_volume_pane_g2

0x5441,	// (0x00084a09) postcard_pane_ParamLimits

0x5441,	// (0x00084a09) postcard_pane

0x11de,	// (0x000807a6) postcard_pane_g1_ParamLimits

0x11de,	// (0x000807a6) postcard_pane_g1

0x5481,	// (0x00084a49) postcard_pane_g2_ParamLimits

0x5481,	// (0x00084a49) postcard_pane_g2

0x548d,	// (0x00084a55) postcard_pane_g3_ParamLimits

0x548d,	// (0x00084a55) postcard_pane_g3

0x11d0,	// (0x00080798) postcard_pane_g4_ParamLimits

0x11d0,	// (0x00080798) postcard_pane_g4

0x5499,	// (0x00084a61) postcard_pane_g5_ParamLimits

0x5499,	// (0x00084a61) postcard_pane_g5

0x54ae,	// (0x00084a76) postcard_pane_g6_ParamLimits

0x54ae,	// (0x00084a76) postcard_pane_g6

0x11de,	// (0x000807a6) postcard_pane_g7_ParamLimits

0x11de,	// (0x000807a6) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008eaac) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008eaac) postcard_pane_g

0x54c2,	// (0x00084a8a) main_mp2_pane_g1_ParamLimits

0x54c2,	// (0x00084a8a) main_mp2_pane_g1

0x54ce,	// (0x00084a96) main_mp2_pane_g2_ParamLimits

0x54ce,	// (0x00084a96) main_mp2_pane_g2

0x54da,	// (0x00084aa2) main_mp2_pane_g3_ParamLimits

0x54da,	// (0x00084aa2) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008eabb) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008eabb) main_mp2_pane_g

0x54e6,	// (0x00084aae) main_mp2_pane_t1_ParamLimits

0x54e6,	// (0x00084aae) main_mp2_pane_t1

0x54fb,	// (0x00084ac3) main_mp2_pane_t2_ParamLimits

0x54fb,	// (0x00084ac3) main_mp2_pane_t2

0x550d,	// (0x00084ad5) main_mp2_pane_t3_ParamLimits

0x550d,	// (0x00084ad5) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0008eac2) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0008eac2) main_mp2_pane_t

0x11ec,	// (0x000807b4) pec_content_pane_ParamLimits

0x11ec,	// (0x000807b4) pec_content_pane

0xb8e4,	// (0x0008aeac) scroll_pane_cp015

0x11fe,	// (0x000807c6) pec_attribute_pane_ParamLimits

0x11fe,	// (0x000807c6) pec_attribute_pane

0x551f,	// (0x00084ae7) pec_content_pane_g1_ParamLimits

0x551f,	// (0x00084ae7) pec_content_pane_g1

0x120e,	// (0x000807d6) pec_content_pane_t1_ParamLimits

0x120e,	// (0x000807d6) pec_content_pane_t1

0x1220,	// (0x000807e8) pec_content_pane_t2_ParamLimits

0x1220,	// (0x000807e8) pec_content_pane_t2

0x0001,

0xf501,	// (0x0008eac9) pec_content_pane_t_ParamLimits

0xf501,	// (0x0008eac9) pec_content_pane_t

0x552b,	// (0x00084af3) list_single_graphic_pane_cp01_ParamLimits

0x552b,	// (0x00084af3) list_single_graphic_pane_cp01

0xb2d3,	// (0x0008a89b) bg_popup_sub_pane_cp04

0x1232,	// (0x000807fa) popup_mup_playback_window_g1

0x123e,	// (0x00080806) popup_mup_playback_window_t1

0x1253,	// (0x0008081b) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008eace) popup_mup_playback_window_t

0x128a,	// (0x00080852) main_image_pane_g1_ParamLimits

0x128a,	// (0x00080852) main_image_pane_g1

0x12cd,	// (0x00080895) scroll_pane_cp018_ParamLimits

0x12cd,	// (0x00080895) scroll_pane_cp018

0x12e5,	// (0x000808ad) scroll_pane_cp016_ParamLimits

0x12e5,	// (0x000808ad) scroll_pane_cp016

0x55f6,	// (0x00084bbe) smil2_image_pane_ParamLimits

0x55f6,	// (0x00084bbe) smil2_image_pane

0x561e,	// (0x00084be6) smil2_root_pane_ParamLimits

0x561e,	// (0x00084be6) smil2_root_pane

0x5656,	// (0x00084c1e) smil2_text_pane_ParamLimits

0x5656,	// (0x00084c1e) smil2_text_pane

0xb078,	// (0x0008a640) bg_list_pane_cp06

0x1319,	// (0x000808e1) grid_radio_pane

0xb078,	// (0x0008a640) bg_popup_window_pane_cp06

0x1321,	// (0x000808e9) main_fmradio_pane_t1

0xbf4f,	// (0x0008b517) heading_pane_cp04

0x132f,	// (0x000808f7) main_fmradio_pane_t2

0xc2fa,	// (0x0008b8c2) popup_cale_lunar_info_window_g1

0x133d,	// (0x00080905) main_fmradio_pane_t3

0xc302,	// (0x0008b8ca) popup_cale_lunar_info_window_g2

0x134b,	// (0x00080913) main_fmradio_pane_t4

0x0001,

0x1359,	// (0x00080921) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x0008ebbc) popup_cale_lunar_info_window_g

0xf51b,	// (0x0008eae3) main_fmradio_pane_t

0x1367,	// (0x0008092f) wait_bar_pane_cp03

0xc031,	// (0x0008b5f9) cell_fmradio_pane_ParamLimits

0xc031,	// (0x0008b5f9) cell_fmradio_pane

0x11de,	// (0x000807a6) cell_fmradio_pane_g1_ParamLimits

0x11de,	// (0x000807a6) cell_fmradio_pane_g1

0xb078,	// (0x0008a640) grid_highlight_pane_cp011

0x136f,	// (0x00080937) poc_content_pane_ParamLimits

0x136f,	// (0x00080937) poc_content_pane

0x1382,	// (0x0008094a) scroll_pane_cp019

0x56c2,	// (0x00084c8a) popup_call_poc_act_window_ParamLimits

0x56c2,	// (0x00084c8a) popup_call_poc_act_window

0x56e2,	// (0x00084caa) popup_call_poc_inact_window_ParamLimits

0x56e2,	// (0x00084caa) popup_call_poc_inact_window

0xf5b8,	// (0x0008eb80) bg_popup_call_poc_act_pane_g

0xc2ba,	// (0x0008b882) bg_popup_call_poc_inact_pane_g1

0xc2c2,	// (0x0008b88a) bg_popup_call_poc_inact_pane_g2

0x138a,	// (0x00080952) popup_call_poc_act_window_g2

0xc2ca,	// (0x0008b892) bg_popup_call_poc_inact_pane_g3

0xc24a,	// (0x0008b812) bg_popup_call_poc_inact_pane_g4

0xc2d2,	// (0x0008b89a) bg_popup_call_poc_inact_pane_g5

0x1392,	// (0x0008095a) popup_call_poc_act_window_t1_ParamLimits

0x1392,	// (0x0008095a) popup_call_poc_act_window_t1

0x13ba,	// (0x00080982) popup_call_poc_act_window_t2_ParamLimits

0x13ba,	// (0x00080982) popup_call_poc_act_window_t2

0x13e2,	// (0x000809aa) popup_call_poc_act_window_t3_ParamLimits

0x13e2,	// (0x000809aa) popup_call_poc_act_window_t3

0x140a,	// (0x000809d2) popup_call_poc_act_window_t4_ParamLimits

0x140a,	// (0x000809d2) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008eaee) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008eaee) popup_call_poc_act_window_t

0xc2da,	// (0x0008b8a2) bg_popup_call_poc_inact_pane_g6

0xc2e2,	// (0x0008b8aa) bg_popup_call_poc_inact_pane_g7

0xc2ea,	// (0x0008b8b2) bg_popup_call_poc_inact_pane_g8

0x141c,	// (0x000809e4) popup_call_poc_inact_window_g2

0xc2f2,	// (0x0008b8ba) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x0008eb97) bg_popup_call_poc_inact_pane_g

0x1424,	// (0x000809ec) popup_call_poc_inact_window_t1_ParamLimits

0x1424,	// (0x000809ec) popup_call_poc_inact_window_t1

0x1439,	// (0x00080a01) popup_call_poc_inact_window_t2_ParamLimits

0x1439,	// (0x00080a01) popup_call_poc_inact_window_t2

0x144e,	// (0x00080a16) popup_call_poc_inact_window_t3_ParamLimits

0x144e,	// (0x00080a16) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0008eaf7) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0008eaf7) popup_call_poc_inact_window_t

0xc466,	// (0x0008ba2e) context_pane_ParamLimits

0x5df4,	// (0x000853bc) signal_pane_ParamLimits

0x1033,	// (0x000805fb) main_call2_pane

0xc454,	// (0x0008ba1c) popup_phob_thumbnail2_window_ParamLimits

0xc454,	// (0x0008ba1c) popup_phob_thumbnail2_window

0xbfe7,	// (0x0008b5af) aid_hotspot_pointer_arrow_pane

0xbfef,	// (0x0008b5b7) aid_hotspot_pointer_hand_pane

0x59b7,	// (0x00084f7f) phob_pre_status_pane_g5

0x3b81,	// (0x00083149) cams_zoom_pane_ParamLimits

0x3b90,	// (0x00083158) image_vga_pane_ParamLimits

0x3ba8,	// (0x00083170) main_camera_pane_g1_ParamLimits

0x3bb8,	// (0x00083180) main_camera_pane_g2_ParamLimits

0x3bc8,	// (0x00083190) main_camera_pane_g3_ParamLimits

0x3bd8,	// (0x000831a0) main_camera_pane_g4_ParamLimits

0x3be8,	// (0x000831b0) main_camera_pane_g5_ParamLimits

0x3bf8,	// (0x000831c0) main_camera_pane_g6_ParamLimits

0x3c08,	// (0x000831d0) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008e7f6) main_camera_pane_g_ParamLimits

0x3c18,	// (0x000831e0) main_camera_pane_t1_ParamLimits

0x3c2e,	// (0x000831f6) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008e807) main_camera_pane_t_ParamLimits

0xb2d3,	// (0x0008a89b) bg_popup_preview_window_pane_cp01_ParamLimits

0xb2d3,	// (0x0008a89b) bg_popup_preview_window_pane_cp01

0x1463,	// (0x00080a2b) popup_phob_thumbnail2_window_g1_ParamLimits

0x1463,	// (0x00080a2b) popup_phob_thumbnail2_window_g1

0xb078,	// (0x0008a640) call2_cli_visual_pane

0x570e,	// (0x00084cd6) popup_call2_audio_conf_window_ParamLimits

0x570e,	// (0x00084cd6) popup_call2_audio_conf_window

0x572c,	// (0x00084cf4) popup_call2_audio_first_window_ParamLimits

0x572c,	// (0x00084cf4) popup_call2_audio_first_window

0x57a2,	// (0x00084d6a) popup_call2_audio_in_window_ParamLimits

0x57a2,	// (0x00084d6a) popup_call2_audio_in_window

0x57d6,	// (0x00084d9e) popup_call2_audio_out_window_ParamLimits

0x57d6,	// (0x00084d9e) popup_call2_audio_out_window

0x5828,	// (0x00084df0) popup_call2_audio_second_window_ParamLimits

0x5828,	// (0x00084df0) popup_call2_audio_second_window

0x587a,	// (0x00084e42) popup_call2_audio_wait_window_ParamLimits

0x587a,	// (0x00084e42) popup_call2_audio_wait_window

0xb078,	// (0x0008a640) bg_popup_call2_act_pane_cp03

0xb2b5,	// (0x0008a87d) list_conf_pane_cp

0x146f,	// (0x00080a37) popup_call2_audio_conf_window_t1

0xbfac,	// (0x0008b574) list_single_graphic_popup_conf2_pane_ParamLimits

0xbfac,	// (0x0008b574) list_single_graphic_popup_conf2_pane

0x0dbd,	// (0x00080385) list_highlight_pane_cp04

0x147d,	// (0x00080a45) list_single_graphic_popup_conf2_pane_g1

0x0dce,	// (0x00080396) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008eafe) list_single_graphic_popup_conf2_pane_g

0x1485,	// (0x00080a4d) list_single_graphic_popup_conf2_pane_t1

0x1493,	// (0x00080a5b) bg_popup_call2_act_pane_cp01_ParamLimits

0x1493,	// (0x00080a5b) bg_popup_call2_act_pane_cp01

0x151d,	// (0x00080ae5) call_type_pane_cp05_ParamLimits

0x151d,	// (0x00080ae5) call_type_pane_cp05

0x1571,	// (0x00080b39) popup_call2_audio_second_window_g1_ParamLimits

0x1571,	// (0x00080b39) popup_call2_audio_second_window_g1

0x15c5,	// (0x00080b8d) popup_call2_audio_second_window_g2_ParamLimits

0x15c5,	// (0x00080b8d) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0008eb03) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0008eb03) popup_call2_audio_second_window_g

0x162a,	// (0x00080bf2) popup_call2_audio_second_window_t1_ParamLimits

0x162a,	// (0x00080bf2) popup_call2_audio_second_window_t1

0x16e5,	// (0x00080cad) popup_call2_audio_second_window_t2_ParamLimits

0x16e5,	// (0x00080cad) popup_call2_audio_second_window_t2

0x1738,	// (0x00080d00) popup_call2_audio_second_window_t3_ParamLimits

0x1738,	// (0x00080d00) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0008eb0a) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0008eb0a) popup_call2_audio_second_window_t

0xb078,	// (0x0008a640) bg_popup_call2_in_pane_cp02

0xb082,	// (0x0008a64a) call_type_pane_cp04

0xb08a,	// (0x0008a652) popup_call2_audio_wait_window_g1

0xb092,	// (0x0008a65a) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008e6e3) popup_call2_audio_wait_window_g

0xb09a,	// (0x0008a662) popup_call2_audio_wait_window_t3

0x182b,	// (0x00080df3) bg_popup_call2_act_pane_ParamLimits

0x182b,	// (0x00080df3) bg_popup_call2_act_pane

0x18eb,	// (0x00080eb3) call_type_pane_cp03_ParamLimits

0x18eb,	// (0x00080eb3) call_type_pane_cp03

0x194f,	// (0x00080f17) popup_call2_audio_first_window_g1_ParamLimits

0x194f,	// (0x00080f17) popup_call2_audio_first_window_g1

0x19bf,	// (0x00080f87) popup_call2_audio_first_window_g2_ParamLimits

0x19bf,	// (0x00080f87) popup_call2_audio_first_window_g2

0xbfd1,	// (0x0008b599) popup_call2_audio_first_window_g3_ParamLimits

0xbfd1,	// (0x0008b599) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0008eb13) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0008eb13) popup_call2_audio_first_window_g

0x1a9d,	// (0x00081065) popup_call2_audio_first_window_t1_ParamLimits

0x1a9d,	// (0x00081065) popup_call2_audio_first_window_t1

0x1ba0,	// (0x00081168) popup_call2_audio_first_window_t4_ParamLimits

0x1ba0,	// (0x00081168) popup_call2_audio_first_window_t4

0x1c83,	// (0x0008124b) popup_call2_audio_first_window_t5_ParamLimits

0x1c83,	// (0x0008124b) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0008eb1e) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0008eb1e) popup_call2_audio_first_window_t

0xb2cb,	// (0x0008a893) bg_popup_call2_act_pane_g1

0xc30a,	// (0x0008b8d2) popup_cale_lunar_info_window_t1

0xc318,	// (0x0008b8e0) popup_cale_lunar_info_window_t2

0xc326,	// (0x0008b8ee) popup_cale_lunar_info_window_t3

0xb078,	// (0x0008a640) bg_popup_call2_bubble_pane

0x1d84,	// (0x0008134c) bg_popup_call2_in_pane_cp01_ParamLimits

0x1d84,	// (0x0008134c) bg_popup_call2_in_pane_cp01

0xad54,	// (0x0008a31c) call_type_pane_cp02

0x1dcc,	// (0x00081394) popup_call2_audio_out_window_g1_ParamLimits

0x1dcc,	// (0x00081394) popup_call2_audio_out_window_g1

0x1df8,	// (0x000813c0) popup_call2_audio_out_window_g2_ParamLimits

0x1df8,	// (0x000813c0) popup_call2_audio_out_window_g2

0x1e20,	// (0x000813e8) popup_call2_audio_out_window_g3_ParamLimits

0x1e20,	// (0x000813e8) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0008eb27) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0008eb27) popup_call2_audio_out_window_g

0x1e5b,	// (0x00081423) popup_call2_audio_out_window_t1_ParamLimits

0x1e5b,	// (0x00081423) popup_call2_audio_out_window_t1

0x1eba,	// (0x00081482) popup_call2_audio_out_window_t2_ParamLimits

0x1eba,	// (0x00081482) popup_call2_audio_out_window_t2

0x1f0e,	// (0x000814d6) popup_call2_audio_out_window_t3_ParamLimits

0x1f0e,	// (0x000814d6) popup_call2_audio_out_window_t3

0x1f24,	// (0x000814ec) popup_call2_audio_out_window_t4_ParamLimits

0x1f24,	// (0x000814ec) popup_call2_audio_out_window_t4

0x1f3a,	// (0x00081502) popup_call2_audio_out_window_t5_ParamLimits

0x1f3a,	// (0x00081502) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0008eb30) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0008eb30) popup_call2_audio_out_window_t

0x1f9e,	// (0x00081566) bg_popup_call2_in_pane_ParamLimits

0x1f9e,	// (0x00081566) bg_popup_call2_in_pane

0x1ffa,	// (0x000815c2) popup_call2_audio_in_window_g1_ParamLimits

0x1ffa,	// (0x000815c2) popup_call2_audio_in_window_g1

0x2032,	// (0x000815fa) popup_call2_audio_in_window_g2_ParamLimits

0x2032,	// (0x000815fa) popup_call2_audio_in_window_g2

0xc044,	// (0x0008b60c) popup_call2_audio_in_window_g3_ParamLimits

0xc044,	// (0x0008b60c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0008eb3d) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0008eb3d) popup_call2_audio_in_window_g

0xc09c,	// (0x0008b664) popup_call2_audio_in_window_t1_ParamLimits

0xc09c,	// (0x0008b664) popup_call2_audio_in_window_t1

0xc11c,	// (0x0008b6e4) popup_call2_audio_in_window_t2_ParamLimits

0xc11c,	// (0x0008b6e4) popup_call2_audio_in_window_t2

0xc19c,	// (0x0008b764) popup_call2_audio_in_window_t3_ParamLimits

0xc19c,	// (0x0008b764) popup_call2_audio_in_window_t3

0xc1b6,	// (0x0008b77e) popup_call2_audio_in_window_t4_ParamLimits

0xc1b6,	// (0x0008b77e) popup_call2_audio_in_window_t4

0xc1c8,	// (0x0008b790) popup_call2_audio_in_window_t5_ParamLimits

0xc1c8,	// (0x0008b790) popup_call2_audio_in_window_t5

0xc1dd,	// (0x0008b7a5) popup_call2_audio_in_window_t6_ParamLimits

0xc1dd,	// (0x0008b7a5) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0008eb46) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0008eb46) popup_call2_audio_in_window_t

0xb2cb,	// (0x0008a893) bg_popup_call2_in_pane_g1

0xc334,	// (0x0008b8fc) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x0008ebc1) popup_cale_lunar_info_window_t

0xb2d3,	// (0x0008a89b) bg_popup_call2_rect_pane_ParamLimits

0xb2d3,	// (0x0008a89b) bg_popup_call2_rect_pane

0xb078,	// (0x0008a640) call2_cli_visual_graphic_pane

0xb078,	// (0x0008a640) call2_cli_visual_text_pane

0xeb50,	// (0x0008e118) smil_status_volume_pane_g3

0x0002,

0xb471,	// (0x0008aa39) call2_cli_visual_graphic_pane_g1

0xb471,	// (0x0008aa39) call2_cli_visual_graphic_pane_g2

0xb471,	// (0x0008aa39) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0008eb53) call2_cli_visual_graphic_pane_g

0xc1f2,	// (0x0008b7ba) bg_popup_call2_rect_pane_g1

0xb519,	// (0x0008aae1) bg_popup_call2_rect_pane_g2

0xc1fa,	// (0x0008b7c2) bg_popup_call2_rect_pane_g3

0xc202,	// (0x0008b7ca) bg_popup_call2_rect_pane_g4

0xc20a,	// (0x0008b7d2) bg_popup_call2_rect_pane_g5

0xc212,	// (0x0008b7da) bg_popup_call2_rect_pane_g6

0xc21a,	// (0x0008b7e2) bg_popup_call2_rect_pane_g7

0xc222,	// (0x0008b7ea) bg_popup_call2_rect_pane_g8

0xc22a,	// (0x0008b7f2) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0008eb5a) bg_popup_call2_rect_pane_g

0xc232,	// (0x0008b7fa) bg_popup_call2_bubble_pane_g1

0xc23a,	// (0x0008b802) bg_popup_call2_bubble_pane_g2

0xc242,	// (0x0008b80a) bg_popup_call2_bubble_pane_g3

0xc24a,	// (0x0008b812) bg_popup_call2_bubble_pane_g4

0xc252,	// (0x0008b81a) bg_popup_call2_bubble_pane_g5

0xc25a,	// (0x0008b822) bg_popup_call2_bubble_pane_g6

0xc262,	// (0x0008b82a) bg_popup_call2_bubble_pane_g7

0xc26a,	// (0x0008b832) bg_popup_call2_bubble_pane_g8

0xc272,	// (0x0008b83a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008eb6d) bg_popup_call2_bubble_pane_g

0x36a4,	// (0x00082c6c) aid_cale_week_size_cell_pane

0x3c44,	// (0x0008320c) aid_cams_cif_uncrop_pane_ParamLimits

0x3c44,	// (0x0008320c) aid_cams_cif_uncrop_pane

0x3de5,	// (0x000833ad) aid_cams_size_cell_ParamLimits

0x3de5,	// (0x000833ad) aid_cams_size_cell

0x3df9,	// (0x000833c1) grid_cams_pane_ParamLimits

0x3e0e,	// (0x000833d6) linegrid_cams_pane_ParamLimits

0x3f2e,	// (0x000834f6) call_video_pane_t1

0x3f48,	// (0x00083510) call_video_pane_t2

0x0001,

0xf292,	// (0x0008e85a) call_video_pane_t

0x42cd,	// (0x00083895) aid_cale_month_size_cell_pane_ParamLimits

0x42cd,	// (0x00083895) aid_cale_month_size_cell_pane

0xf642,	// (0x0008ec0a) smil_status_volume_pane_g

0xeb5d,	// (0x0008e125) volume_smil_pane_ParamLimits

0xac1e,	// (0x0008a1e6) aid_popup2_width_pane

0x361e,	// (0x00082be6) cell_qdial_pane_g4_ParamLimits

0x361e,	// (0x00082be6) cell_qdial_pane_g4

0x4db0,	// (0x00084378) aid_blid_cardinal_pane_ParamLimits

0x4dbc,	// (0x00084384) aid_blid_destination_pane_ParamLimits

0x4dbc,	// (0x00084384) aid_blid_destination_pane

0xb2d3,	// (0x0008a89b) bg_popup_call_poc_act_pane_ParamLimits

0xb2d3,	// (0x0008a89b) bg_popup_call_poc_act_pane

0xb2d3,	// (0x0008a89b) bg_popup_call_poc_inact_pane_ParamLimits

0xb2d3,	// (0x0008a89b) bg_popup_call_poc_inact_pane

0xc27a,	// (0x0008b842) bg_popup_call_poc_act_pane_g1

0xc282,	// (0x0008b84a) bg_popup_call_poc_act_pane_g2

0xc28a,	// (0x0008b852) bg_popup_call_poc_act_pane_g3

0xc24a,	// (0x0008b812) bg_popup_call_poc_act_pane_g4

0xc252,	// (0x0008b81a) bg_popup_call_poc_act_pane_g5

0xc292,	// (0x0008b85a) bg_popup_call_poc_act_pane_g6

0xc262,	// (0x0008b82a) bg_popup_call_poc_act_pane_g7

0xc29a,	// (0x0008b862) bg_popup_call_poc_act_pane_g8

0xb078,	// (0x0008a640) main_usb_pane

0xc433,	// (0x0008b9fb) popup_cale_lunar_info_window

0x418d,	// (0x00083755) im_reading_pane_t1_ParamLimits

0xb82d,	// (0x0008adf5) list_im_pane_ParamLimits

0xb83e,	// (0x0008ae06) scroll_pane_cp07_ParamLimits

0xb078,	// (0x0008a640) grid_highlight_pane_cp012

0xb2d3,	// (0x0008a89b) mup_scale_pane_ParamLimits

0x11de,	// (0x000807a6) main_usb_pane_g1_ParamLimits

0x11de,	// (0x000807a6) main_usb_pane_g1

0x58d4,	// (0x00084e9c) main_usb_pane_g2_ParamLimits

0x58d4,	// (0x00084e9c) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x0008ebaa) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x0008ebaa) main_usb_pane_g

0x58e8,	// (0x00084eb0) main_usb_pane_t1_ParamLimits

0x58e8,	// (0x00084eb0) main_usb_pane_t1

0x58fa,	// (0x00084ec2) main_usb_pane_t2_ParamLimits

0x58fa,	// (0x00084ec2) main_usb_pane_t2

0x590c,	// (0x00084ed4) main_usb_pane_t3_ParamLimits

0x590c,	// (0x00084ed4) main_usb_pane_t3

0x591e,	// (0x00084ee6) main_usb_pane_t4_ParamLimits

0x591e,	// (0x00084ee6) main_usb_pane_t4

0x5930,	// (0x00084ef8) main_usb_pane_t5_ParamLimits

0x5930,	// (0x00084ef8) main_usb_pane_t5

0x5942,	// (0x00084f0a) main_usb_pane_t6_ParamLimits

0x5942,	// (0x00084f0a) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x0008ebaf) main_usb_pane_t_ParamLimits

0x0ef7,	// (0x000804bf) aid_text_placing

0x4d5c,	// (0x00084324) main_location2_pane_t1_ParamLimits

0x4d72,	// (0x0008433a) main_location2_pane_t2_ParamLimits

0x4d88,	// (0x00084350) main_location2_pane_t3_ParamLimits

0x4d9e,	// (0x00084366) main_location2_pane_t4_ParamLimits

0x4d9e,	// (0x00084366) main_location2_pane_t4

0xf3f3,	// (0x0008e9bb) main_location2_pane_t_ParamLimits

0xb30f,	// (0x0008a8d7) find_pinb_pane_g2_ParamLimits

0xb30f,	// (0x0008a8d7) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0008e709) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0008e709) find_pinb_pane_g

0xb31b,	// (0x0008a8e3) find_pinb_pane_t1_ParamLimits

0xb32d,	// (0x0008a8f5) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008e70e) find_pinb_pane_t_ParamLimits

0xb078,	// (0x0008a640) main_call3_pane

0x4609,	// (0x00083bd1) cale_month_day_heading_pane_t1_ParamLimits

0x4667,	// (0x00083c2f) cale_month_day_heading_pane_t2_ParamLimits

0x46cc,	// (0x00083c94) cale_month_day_heading_pane_t3_ParamLimits

0x4731,	// (0x00083cf9) cale_month_day_heading_pane_t4_ParamLimits

0x4796,	// (0x00083d5e) cale_month_day_heading_pane_t5_ParamLimits

0x47fb,	// (0x00083dc3) cale_month_day_heading_pane_t6_ParamLimits

0x4860,	// (0x00083e28) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008e892) cale_month_day_heading_pane_t_ParamLimits

0xbac4,	// (0x0008b08c) smil_status_volume_pane

0x545d,	// (0x00084a25) postcard_address_pane_ParamLimits

0x545d,	// (0x00084a25) postcard_address_pane

0x546f,	// (0x00084a37) postcard_message_pane_ParamLimits

0x546f,	// (0x00084a37) postcard_message_pane

0x58b2,	// (0x00084e7a) call2_cli_visual_pane_t1_ParamLimits

0x58b2,	// (0x00084e7a) call2_cli_visual_pane_t1

0x6010,	// (0x000855d8) postcard_message_pane_t1_ParamLimits

0x6010,	// (0x000855d8) postcard_message_pane_t1

0x5ff9,	// (0x000855c1) postcard_address_pane_t1_ParamLimits

0x5ff9,	// (0x000855c1) postcard_address_pane_t1

0x5fe7,	// (0x000855af) popup_call3_audio_in_window_ParamLimits

0x5fe7,	// (0x000855af) popup_call3_audio_in_window

0x5e76,	// (0x0008543e) bg_popup_call3_in_pane_ParamLimits

0x5e76,	// (0x0008543e) bg_popup_call3_in_pane

0x5ee8,	// (0x000854b0) popup_call3_audio_in_window_g1_ParamLimits

0x5ee8,	// (0x000854b0) popup_call3_audio_in_window_g1

0x5f08,	// (0x000854d0) popup_call3_audio_in_window_g2_ParamLimits

0x5f08,	// (0x000854d0) popup_call3_audio_in_window_g2

0x5f28,	// (0x000854f0) popup_call3_audio_in_window_g3_ParamLimits

0x5f28,	// (0x000854f0) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x0008ec11) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x0008ec11) popup_call3_audio_in_window_g

0x5f59,	// (0x00085521) popup_call3_audio_in_window_t1_ParamLimits

0x5f59,	// (0x00085521) popup_call3_audio_in_window_t1

0x5f97,	// (0x0008555f) popup_call3_audio_in_window_t2_ParamLimits

0x5f97,	// (0x0008555f) popup_call3_audio_in_window_t2

0x5fd5,	// (0x0008559d) popup_call3_audio_in_window_t3_ParamLimits

0x5fd5,	// (0x0008559d) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x0008ec1a) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x0008ec1a) popup_call3_audio_in_window_t

0x1033,	// (0x000805fb) bg_popup_call3_rect_pane

0xc1f2,	// (0x0008b7ba) bg_popup_call3_rect_pane_g1

0xb519,	// (0x0008aae1) bg_popup_call3_rect_pane_g2

0xc1fa,	// (0x0008b7c2) bg_popup_call3_rect_pane_g3

0xc202,	// (0x0008b7ca) bg_popup_call3_rect_pane_g4

0xc20a,	// (0x0008b7d2) bg_popup_call3_rect_pane_g5

0xc212,	// (0x0008b7da) bg_popup_call3_rect_pane_g6

0xc21a,	// (0x0008b7e2) bg_popup_call3_rect_pane_g7

0x50ba,	// (0x00084682) mup_visualizer_osc_pane

0x10f2,	// (0x000806ba) mup_visualizer_spec_pane

0x5ea6,	// (0x0008546e) call3_video_qcif_pane_ParamLimits

0x5ea6,	// (0x0008546e) call3_video_qcif_pane

0x5eb7,	// (0x0008547f) call3_video_qcif_uncrop_pane_ParamLimits

0x5eb7,	// (0x0008547f) call3_video_qcif_uncrop_pane

0x5ec3,	// (0x0008548b) call3_video_subqcif_pane_ParamLimits

0x5ec3,	// (0x0008548b) call3_video_subqcif_pane

0x5ed7,	// (0x0008549f) call3_video_subqcif_uncrop_pane_ParamLimits

0x5ed7,	// (0x0008549f) call3_video_subqcif_uncrop_pane

0x5f48,	// (0x00085510) popup_call3_audio_in_window_g4_ParamLimits

0x5f48,	// (0x00085510) popup_call3_audio_in_window_g4

0x5e65,	// (0x0008542d) mup_spec_half_pane

0x5e6e,	// (0x00085436) mup_spec_half_pane_cp

0xc4c6,	// (0x0008ba8e) mup_osc_middle_pane

0xc4cf,	// (0x0008ba97) mup_visualizer_osc_pane_g1

0x5e46,	// (0x0008540e) mup_spec_bar_pane_ParamLimits

0x5e46,	// (0x0008540e) mup_spec_bar_pane

0xc4b3,	// (0x0008ba7b) mup_spec_bar_pane_g1

0xc4bd,	// (0x0008ba85) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0008ec05) mup_spec_bar_pane_g

0x36a4,	// (0x00082c6c) aid_cale_week_size_cell_pane_ParamLimits

0x36b7,	// (0x00082c7f) bg_cale_heading_pane_ParamLimits

0xb5a5,	// (0x0008ab6d) bg_cale_pane_cp01_ParamLimits

0x36cb,	// (0x00082c93) cale_week_corner_pane_ParamLimits

0x36e1,	// (0x00082ca9) cale_week_day_heading_pane_ParamLimits

0x36f5,	// (0x00082cbd) cale_week_scroll_pane_g1_ParamLimits

0x3706,	// (0x00082cce) cale_week_scroll_pane_g2_ParamLimits

0x3717,	// (0x00082cdf) cale_week_scroll_pane_g3_ParamLimits

0x3728,	// (0x00082cf0) cale_week_scroll_pane_g4_ParamLimits

0x3739,	// (0x00082d01) cale_week_scroll_pane_g5_ParamLimits

0x374a,	// (0x00082d12) cale_week_scroll_pane_g6_ParamLimits

0x375b,	// (0x00082d23) cale_week_scroll_pane_g7_ParamLimits

0x376c,	// (0x00082d34) cale_week_scroll_pane_g8_ParamLimits

0x377f,	// (0x00082d47) cale_week_scroll_pane_g9_ParamLimits

0x3790,	// (0x00082d58) cale_week_scroll_pane_g10_ParamLimits

0x37a1,	// (0x00082d69) cale_week_scroll_pane_g11_ParamLimits

0x37b2,	// (0x00082d7a) cale_week_scroll_pane_g12_ParamLimits

0x37c3,	// (0x00082d8b) cale_week_scroll_pane_g13_ParamLimits

0x37d4,	// (0x00082d9c) cale_week_scroll_pane_g14_ParamLimits

0x37e5,	// (0x00082dad) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008e79a) cale_week_scroll_pane_g_ParamLimits

0x37f6,	// (0x00082dbe) cale_week_time_pane_ParamLimits

0x3809,	// (0x00082dd1) grid_cale_week_pane_ParamLimits

0xb5be,	// (0x0008ab86) listscroll_cale_week_pane_t1

0x381c,	// (0x00082de4) scroll_pane_cp08_ParamLimits

0x430e,	// (0x000838d6) cale_month_corner_pane_ParamLimits

0xba64,	// (0x0008b02c) cale_month_pane_t1

0x45c8,	// (0x00083b90) cale_month_week_pane_ParamLimits

0x4ba3,	// (0x0008416b) popup_call_status_window_g1_ParamLimits

0x4bb7,	// (0x0008417f) popup_call_status_window_g2_ParamLimits

0x4bcb,	// (0x00084193) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0008e942) popup_call_status_window_g_ParamLimits

0xbed0,	// (0x0008b498) aid_call2_pane

0x52bb,	// (0x00084883) msg_header_pane_g1

0x545d,	// (0x00084a25) postcard_address2_pane_ParamLimits

0x545d,	// (0x00084a25) postcard_address2_pane

0x546f,	// (0x00084a37) postcard_message2_pane_ParamLimits

0x546f,	// (0x00084a37) postcard_message2_pane

0x5e02,	// (0x000853ca) message2_row_pane_ParamLimits

0x5e02,	// (0x000853ca) message2_row_pane

0x5e1c,	// (0x000853e4) address2_row_pane_ParamLimits

0x5e1c,	// (0x000853e4) address2_row_pane

0xc481,	// (0x0008ba49) postcard_message2_row_pane_g1

0xc489,	// (0x0008ba51) postcard_message2_row_pane_t1

0xc481,	// (0x0008ba49) address2_row_pane_g1

0xc489,	// (0x0008ba51) address2_row_pane_t1

0x3b4c,	// (0x00083114) aid_size_cell_vorec

0xb078,	// (0x0008a640) main_rss_pane

0x5e2f,	// (0x000853f7) rss_list_single_pane_ParamLimits

0x5e2f,	// (0x000853f7) rss_list_single_pane

0xc497,	// (0x0008ba5f) rss_list_single_pane_t1

0xc4a5,	// (0x0008ba6d) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x0008ec00) rss_list_single_pane_t

0xb078,	// (0x0008a640) main_camera2_pane

0xb078,	// (0x0008a640) main_video2_pane

0x6069,	// (0x00085631) cams_zoom_pane_cp2_ParamLimits

0x6069,	// (0x00085631) cams_zoom_pane_cp2

0x6080,	// (0x00085648) image2_vga_pane_ParamLimits

0x6080,	// (0x00085648) image2_vga_pane

0x60b6,	// (0x0008567e) main_camera2_pane_g1_ParamLimits

0x60b6,	// (0x0008567e) main_camera2_pane_g1

0x60d6,	// (0x0008569e) main_camera2_pane_g2_ParamLimits

0x60d6,	// (0x0008569e) main_camera2_pane_g2

0x60ed,	// (0x000856b5) main_camera2_pane_g3_ParamLimits

0x60ed,	// (0x000856b5) main_camera2_pane_g3

0x6104,	// (0x000856cc) main_camera2_pane_g4_ParamLimits

0x6104,	// (0x000856cc) main_camera2_pane_g4

0x611b,	// (0x000856e3) main_camera2_pane_g5_ParamLimits

0x611b,	// (0x000856e3) main_camera2_pane_g5

0x6132,	// (0x000856fa) main_camera2_pane_g6_ParamLimits

0x6132,	// (0x000856fa) main_camera2_pane_g6

0x6149,	// (0x00085711) main_camera2_pane_g7_ParamLimits

0x6149,	// (0x00085711) main_camera2_pane_g7

0x6160,	// (0x00085728) main_camera2_pane_g8_ParamLimits

0x6160,	// (0x00085728) main_camera2_pane_g8

0x0008,

0xf659,	// (0x0008ec21) main_camera2_pane_g_ParamLimits

0xf659,	// (0x0008ec21) main_camera2_pane_g

0x618e,	// (0x00085756) main_camera2_pane_t1_ParamLimits

0x618e,	// (0x00085756) main_camera2_pane_t1

0x61bd,	// (0x00085785) main_camera2_pane_t2_ParamLimits

0x61bd,	// (0x00085785) main_camera2_pane_t2

0x61da,	// (0x000857a2) main_camera2_pane_t3_ParamLimits

0x61da,	// (0x000857a2) main_camera2_pane_t3

0x6226,	// (0x000857ee) main_camera2_pane_t4_ParamLimits

0x6226,	// (0x000857ee) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x0008ec34) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x0008ec34) main_camera2_pane_t

0x629b,	// (0x00085863) cams_zoom_pane_cp4_ParamLimits

0x629b,	// (0x00085863) cams_zoom_pane_cp4

0x62b1,	// (0x00085879) image2_cif_pane_ParamLimits

0x62b1,	// (0x00085879) image2_cif_pane

0x62d4,	// (0x0008589c) image2_subqcif_pane_ParamLimits

0x62d4,	// (0x0008589c) image2_subqcif_pane

0x62ea,	// (0x000858b2) main_video2_pane_g1_ParamLimits

0x62ea,	// (0x000858b2) main_video2_pane_g1

0x6304,	// (0x000858cc) main_video2_pane_g2_ParamLimits

0x6304,	// (0x000858cc) main_video2_pane_g2

0x631a,	// (0x000858e2) main_video2_pane_g3_ParamLimits

0x631a,	// (0x000858e2) main_video2_pane_g3

0x6330,	// (0x000858f8) main_video2_pane_g4_ParamLimits

0x6330,	// (0x000858f8) main_video2_pane_g4

0x6346,	// (0x0008590e) main_video2_pane_g5_ParamLimits

0x6346,	// (0x0008590e) main_video2_pane_g5

0x635c,	// (0x00085924) main_video2_pane_g6_ParamLimits

0x635c,	// (0x00085924) main_video2_pane_g6

0x0005,

0xf67b,	// (0x0008ec43) main_video2_pane_g_ParamLimits

0xf67b,	// (0x0008ec43) main_video2_pane_g

0x6376,	// (0x0008593e) main_video2_pane_t1_ParamLimits

0x6376,	// (0x0008593e) main_video2_pane_t1

0x639a,	// (0x00085962) main_video2_pane_t2_ParamLimits

0x639a,	// (0x00085962) main_video2_pane_t2

0x63e4,	// (0x000859ac) main_video2_pane_t3_ParamLimits

0x63e4,	// (0x000859ac) main_video2_pane_t3

0x0002,

0xf688,	// (0x0008ec50) main_video2_pane_t_ParamLimits

0xf688,	// (0x0008ec50) main_video2_pane_t

0x59f1,	// (0x00084fb9) call_muted_g2

0x0001,

0xf62a,	// (0x0008ebf2) call_muted_g

0xb078,	// (0x0008a640) main_mup2_pane

0x6426,	// (0x000859ee) main_mup2_pane_g1_ParamLimits

0x6426,	// (0x000859ee) main_mup2_pane_g1

0x6432,	// (0x000859fa) main_mup2_pane_g2_ParamLimits

0x6432,	// (0x000859fa) main_mup2_pane_g2

0xebc6,	// (0x0008e18e) main_mup_pane_g13_cp1

0xebce,	// (0x0008e196) mup_volume_pane_cp1

0x644e,	// (0x00085a16) main_mup2_pane_g4_ParamLimits

0x644e,	// (0x00085a16) main_mup2_pane_g4

0x645e,	// (0x00085a26) main_mup2_pane_g5_ParamLimits

0x645e,	// (0x00085a26) main_mup2_pane_g5

0x646e,	// (0x00085a36) main_mup2_pane_g6_ParamLimits

0x646e,	// (0x00085a36) main_mup2_pane_g6

0x647e,	// (0x00085a46) main_mup2_pane_g7_ParamLimits

0x647e,	// (0x00085a46) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x0008ec57) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x0008ec57) main_mup2_pane_g

0x6496,	// (0x00085a5e) main_mup2_pane_t1_ParamLimits

0x6496,	// (0x00085a5e) main_mup2_pane_t1

0x64ac,	// (0x00085a74) main_mup2_pane_t2_ParamLimits

0x64ac,	// (0x00085a74) main_mup2_pane_t2

0x64c2,	// (0x00085a8a) main_mup2_pane_t3_ParamLimits

0x64c2,	// (0x00085a8a) main_mup2_pane_t3

0x64d8,	// (0x00085aa0) main_mup2_pane_t4_ParamLimits

0x64d8,	// (0x00085aa0) main_mup2_pane_t4

0x64f0,	// (0x00085ab8) main_mup2_pane_t5_ParamLimits

0x64f0,	// (0x00085ab8) main_mup2_pane_t5

0x6508,	// (0x00085ad0) main_mup2_pane_t6_ParamLimits

0x6508,	// (0x00085ad0) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x0008ec66) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x0008ec66) main_mup2_pane_t

0x6538,	// (0x00085b00) mup2_visualizer_pane_ParamLimits

0x6538,	// (0x00085b00) mup2_visualizer_pane

0x6563,	// (0x00085b2b) mup_progress_pane_cp_ParamLimits

0x6563,	// (0x00085b2b) mup_progress_pane_cp

0xebb1,	// (0x0008e179) mup_volume_pane_cp_ParamLimits

0xebb1,	// (0x0008e179) mup_volume_pane_cp

0x6577,	// (0x00085b3f) mup2_visualizer_pane_g1_ParamLimits

0x6577,	// (0x00085b3f) mup2_visualizer_pane_g1

0xc506,	// (0x0008bace) mup2_visualizer_pane_g2_ParamLimits

0xc506,	// (0x0008bace) mup2_visualizer_pane_g2

0x658c,	// (0x00085b54) mup2_visualizer_pane_g3_ParamLimits

0x658c,	// (0x00085b54) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x0008ec73) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x0008ec73) mup2_visualizer_pane_g

0xc029,	// (0x0008b5f1) aid_size_cell_fmradio

0x5b4d,	// (0x00085115) aid_height_parent_landcape

0xb8cb,	// (0x0008ae93) wml_content_pane_cp

0xb8d3,	// (0x0008ae9b) wml_tabs_pane

0xb8dc,	// (0x0008aea4) popup_wml_miniature_window

0xb8e4,	// (0x0008aeac) scroll_pane_cp021

0xb8f8,	// (0x0008aec0) wml_content_pane_comp8

0xb078,	// (0x0008a640) bg_popup_sub_pane_cp05

0xc524,	// (0x0008baec) popup_wml_miniature_window_g1

0xc52c,	// (0x0008baf4) wml_miniature_view_pane

0x6598,	// (0x00085b60) aid_size_wml_view

0x65a0,	// (0x00085b68) wml_miniature_view_pane_g1

0x65a9,	// (0x00085b71) wml_miniature_view_pane_g2

0x65b2,	// (0x00085b7a) wml_miniature_view_pane_g3

0x65ba,	// (0x00085b82) wml_miniature_view_pane_g4

0x65c2,	// (0x00085b8a) wml_miniature_view_pane_g5

0x65ca,	// (0x00085b92) wml_miniature_view_pane_g6

0x65d2,	// (0x00085b9a) wml_miniature_view_pane_g7

0x65da,	// (0x00085ba2) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x0008ec7a) wml_miniature_view_pane_g

0xc534,	// (0x0008bafc) background_graphic_ParamLimits

0xc534,	// (0x0008bafc) background_graphic

0xc540,	// (0x0008bb08) wml_tabs_2_pane

0xc549,	// (0x0008bb11) wml_tabs_3_pane_ParamLimits

0xc549,	// (0x0008bb11) wml_tabs_3_pane

0xc55b,	// (0x0008bb23) wml_tabs_4_pane_ParamLimits

0xc55b,	// (0x0008bb23) wml_tabs_4_pane

0xc571,	// (0x0008bb39) wml_tabs_5_pane_ParamLimits

0xc571,	// (0x0008bb39) wml_tabs_5_pane

0xc58b,	// (0x0008bb53) wml_tabs_pane_g2_ParamLimits

0xc58b,	// (0x0008bb53) wml_tabs_pane_g2

0xc59f,	// (0x0008bb67) wml_tabs_pane_g3_ParamLimits

0xc59f,	// (0x0008bb67) wml_tabs_pane_g3

0x65e2,	// (0x00085baa) wml_tabs_2_active_pane_ParamLimits

0x65e2,	// (0x00085baa) wml_tabs_2_active_pane

0x65f2,	// (0x00085bba) wml_tabs_2_passive_pane_ParamLimits

0x65f2,	// (0x00085bba) wml_tabs_2_passive_pane

0x6602,	// (0x00085bca) wml_tabs_3_active_pane_cp_ParamLimits

0x6602,	// (0x00085bca) wml_tabs_3_active_pane_cp

0x6613,	// (0x00085bdb) wml_tabs_3_passive_pane_ParamLimits

0x6613,	// (0x00085bdb) wml_tabs_3_passive_pane

0x6624,	// (0x00085bec) wml_tabs_3_passive_pane_cp_ParamLimits

0x6624,	// (0x00085bec) wml_tabs_3_passive_pane_cp

0x6635,	// (0x00085bfd) tabs_4_active_pane

0x663d,	// (0x00085c05) tabs_4_passive_pane

0x6645,	// (0x00085c0d) tabs_4_passive_pane_cp

0x664d,	// (0x00085c15) tabs_4_passive_pane_cp2

0x58cc,	// (0x00084e94) aid_height_text

0x5090,	// (0x00084658) mup_volume_cont_pane_ParamLimits

0x5090,	// (0x00084658) mup_volume_cont_pane

0x332e,	// (0x000828f6) aid_size_cell_pinb

0x3338,	// (0x00082900) aid_size_list_pinb

0x654f,	// (0x00085b17) mup2_volume_cont_pane_ParamLimits

0x654f,	// (0x00085b17) mup2_volume_cont_pane

0xeb9d,	// (0x0008e165) mup2_volume_cont_pane_g1_ParamLimits

0xeb9d,	// (0x0008e165) mup2_volume_cont_pane_g1

0x3057,	// (0x0008261f) aid_size_cell_touch_ParamLimits

0x3057,	// (0x0008261f) aid_size_cell_touch

0x3236,	// (0x000827fe) touch_pane_ParamLimits

0x3236,	// (0x000827fe) touch_pane

0xac0c,	// (0x0008a1d4) main_rss2_pane

0xc5bc,	// (0x0008bb84) listscroll_rss2_pane

0xc5c5,	// (0x0008bb8d) rss2_navigation_pane

0xc5cd,	// (0x0008bb95) list_rss2_pane

0x0e74,	// (0x0008043c) scroll_pane_cp22

0xc5d5,	// (0x0008bb9d) rss2_navigation_pane_g1

0xc5de,	// (0x0008bba6) rss2_navigation_pane_g2

0xc5e6,	// (0x0008bbae) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x0008ec8b) rss2_navigation_pane_g

0xc5ee,	// (0x0008bbb6) rss2_navigation_pane_t1

0x6655,	// (0x00085c1d) rss2_list_single_pane_ParamLimits

0x6655,	// (0x00085c1d) rss2_list_single_pane

0xc5fc,	// (0x0008bbc4) rss2_list_single_pane_t2

0xc60a,	// (0x0008bbd2) rss2_list_single_pane_t3_ParamLimits

0xc60a,	// (0x0008bbd2) rss2_list_single_pane_t3

0xc627,	// (0x0008bbef) rss2_list_single_pane_t4

0x4a2a,	// (0x00083ff2) smil_status_pane_g1

0x206a,	// (0x00081632) main_image2_pane_ParamLimits

0x206a,	// (0x00081632) main_image2_pane

0x6177,	// (0x0008573f) main_camera2_pane_g9_ParamLimits

0x6177,	// (0x0008573f) main_camera2_pane_g9

0x6269,	// (0x00085831) main_camera2_pane_t5_ParamLimits

0x6269,	// (0x00085831) main_camera2_pane_t5

0xeb72,	// (0x0008e13a) main_camera2_pane_t6_ParamLimits

0xeb72,	// (0x0008e13a) main_camera2_pane_t6

0x6669,	// (0x00085c31) main_image2_pane_g1_ParamLimits

0x6669,	// (0x00085c31) main_image2_pane_g1

0x5684,	// (0x00084c4c) smil2_video_pane_ParamLimits

0x5684,	// (0x00084c4c) smil2_video_pane

0xac36,	// (0x0008a1fe) aid_zoom_text_primary_cp

0xac5f,	// (0x0008a227) popup_preview_fixed_window

0xb825,	// (0x0008aded) im_reading_pane_g1

0x605d,	// (0x00085625) cams2_bc_adjust_pane_cp_ParamLimits

0x605d,	// (0x00085625) cams2_bc_adjust_pane_cp

0x628f,	// (0x00085857) cams2_bc_adjust_pane_ParamLimits

0x628f,	// (0x00085857) cams2_bc_adjust_pane

0xc635,	// (0x0008bbfd) cams2_bc_adjust_pane_g1

0xebd6,	// (0x0008e19e) cams2_slider_pane

0xebdf,	// (0x0008e1a7) cams2_slider_pane_g1

0xebe8,	// (0x0008e1b0) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x0008ec92) cams2_slider_pane_g

0x3418,	// (0x000829e0) calc_display_pane_ParamLimits

0x3434,	// (0x000829fc) calc_paper_pane_ParamLimits

0x3455,	// (0x00082a1d) grid_calc_pane_ParamLimits

0xbf32,	// (0x0008b4fa) popup_clock_digital_window_t1_ParamLimits

0x12b6,	// (0x0008087e) main_image_pane_t1

0x33fa,	// (0x000829c2) aid_size_cell_calc_ParamLimits

0x33fa,	// (0x000829c2) aid_size_cell_calc

0x5b7d,	// (0x00085145) popup_blid_sat_info2_window_ParamLimits

0x5b7d,	// (0x00085145) popup_blid_sat_info2_window

0xc645,	// (0x0008bc0d) aid_size_cell_blid

0xc64d,	// (0x0008bc15) bg_popup_window_pane_cp07

0xc670,	// (0x0008bc38) grid_popup_blid_pane

0xc678,	// (0x0008bc40) heading_pane_cp05_ParamLimits

0xc678,	// (0x0008bc40) heading_pane_cp05

0xc740,	// (0x0008bd08) cell_popup_blid_pane_ParamLimits

0xc740,	// (0x0008bd08) cell_popup_blid_pane

0xc760,	// (0x0008bd28) cell_popup_blid_pane_g1

0xc768,	// (0x0008bd30) cell_popup_blid_pane_t1

0x6522,	// (0x00085aea) mup2_indicator_pane_ParamLimits

0x6522,	// (0x00085aea) mup2_indicator_pane

0x1033,	// (0x000805fb) mup2_visualizer_osc_pane

0xc512,	// (0x0008bada) mup2_visualizer_spec_pane_ParamLimits

0xc512,	// (0x0008bada) mup2_visualizer_spec_pane

0x667d,	// (0x00085c45) mup2_spec_half_pane

0x6686,	// (0x00085c4e) mup2_spec_half_pane_cp

0x668e,	// (0x00085c56) mup2_spec_bar_pane_ParamLimits

0x668e,	// (0x00085c56) mup2_spec_bar_pane

0xc4b3,	// (0x0008ba7b) mup2_spec_bar_pane_g1

0xc4bd,	// (0x0008ba85) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0008ec05) mup2_spec_bar_pane_g

0x66ad,	// (0x00085c75) mup2_osc_middle_pane

0xc4cf,	// (0x0008ba97) mup2_visualizer_osc_pane_g1

0xac87,	// (0x0008a24f) popup_number_entry_window_t1_ParamLimits

0xac9a,	// (0x0008a262) popup_number_entry_window_t2_ParamLimits

0xacac,	// (0x0008a274) popup_number_entry_window_t3_ParamLimits

0x327e,	// (0x00082846) popup_number_entry_window_t5_ParamLimits

0x327e,	// (0x00082846) popup_number_entry_window_t5

0xf0ec,	// (0x0008e6b4) popup_number_entry_window_t_ParamLimits

0xacbe,	// (0x0008a286) text_title_cp2_ParamLimits

0xbff7,	// (0x0008b5bf) aid_hotspot_pointer_text2_pane

0xc01d,	// (0x0008b5e5) main_viewer_pane_g9_ParamLimits

0xc01d,	// (0x0008b5e5) main_viewer_pane_g9

0xba64,	// (0x0008b02c) cale_month_pane_t1_ParamLimits

0xbaf9,	// (0x0008b0c1) bg_cale_pane_ParamLimits

0xbb11,	// (0x0008b0d9) list_cale_pane_ParamLimits

0xb5be,	// (0x0008ab86) listscroll_cale_day_pane_t1

0xbb22,	// (0x0008b0ea) scroll_pane_cp09_ParamLimits

0x50c2,	// (0x0008468a) main_mup_eq_pane_t1_ParamLimits

0x50c2,	// (0x0008468a) main_mup_eq_pane_t1

0x50da,	// (0x000846a2) main_mup_eq_pane_t2_ParamLimits

0x50da,	// (0x000846a2) main_mup_eq_pane_t2

0x50f0,	// (0x000846b8) main_mup_eq_pane_t3_ParamLimits

0x50f0,	// (0x000846b8) main_mup_eq_pane_t3

0x5106,	// (0x000846ce) main_mup_eq_pane_t4_ParamLimits

0x5106,	// (0x000846ce) main_mup_eq_pane_t4

0x511c,	// (0x000846e4) main_mup_eq_pane_t5_ParamLimits

0x511c,	// (0x000846e4) main_mup_eq_pane_t5

0x5132,	// (0x000846fa) main_mup_eq_pane_t6_ParamLimits

0x5132,	// (0x000846fa) main_mup_eq_pane_t6

0x5144,	// (0x0008470c) main_mup_eq_pane_t7_ParamLimits

0x5144,	// (0x0008470c) main_mup_eq_pane_t7

0x5156,	// (0x0008471e) main_mup_eq_pane_t8_ParamLimits

0x5156,	// (0x0008471e) main_mup_eq_pane_t8

0x5168,	// (0x00084730) main_mup_eq_pane_t9_ParamLimits

0x5168,	// (0x00084730) main_mup_eq_pane_t9

0x517e,	// (0x00084746) main_mup_eq_pane_t10_ParamLimits

0x517e,	// (0x00084746) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0008ea41) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0008ea41) main_mup_eq_pane_t

0x5211,	// (0x000847d9) mup_equalizer_pane_cp5_ParamLimits

0x5223,	// (0x000847eb) mup_equalizer_pane_cp6_ParamLimits

0x5235,	// (0x000847fd) mup_equalizer_pane_cp7_ParamLimits

0xac0c,	// (0x0008a1d4) main_gallery_pane

0xc4d8,	// (0x0008baa0) smil2_volume_pane

0xc4e0,	// (0x0008baa8) smil_status_volume_pane_g1_ParamLimits

0xc4f3,	// (0x0008babb) smil_status_volume_pane_g2_ParamLimits

0xeb50,	// (0x0008e118) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x0008ec0a) smil_status_volume_pane_g_ParamLimits

0xc64d,	// (0x0008bc15) bg_popup_window_pane_cp07_ParamLimits

0xc65b,	// (0x0008bc23) blid_firmament_pane

0x66b6,	// (0x00085c7e) aid_size_cell_gallery_ParamLimits

0x66b6,	// (0x00085c7e) aid_size_cell_gallery

0x66cc,	// (0x00085c94) grid_gallery_pane_ParamLimits

0x66cc,	// (0x00085c94) grid_gallery_pane

0x66e0,	// (0x00085ca8) cell_gallery_pane_ParamLimits

0x66e0,	// (0x00085ca8) cell_gallery_pane

0xc776,	// (0x0008bd3e) bg_cell_gallery_focus_pane_ParamLimits

0xc776,	// (0x0008bd3e) bg_cell_gallery_focus_pane

0xc788,	// (0x0008bd50) cell_gallery_pane_g1_ParamLimits

0xc788,	// (0x0008bd50) cell_gallery_pane_g1

0x6727,	// (0x00085cef) cell_gallery_pane_g2_ParamLimits

0x6727,	// (0x00085cef) cell_gallery_pane_g2

0x6734,	// (0x00085cfc) cell_gallery_pane_g3_ParamLimits

0x6734,	// (0x00085cfc) cell_gallery_pane_g3

0xc794,	// (0x0008bd5c) cell_gallery_pane_g4_ParamLimits

0xc794,	// (0x0008bd5c) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x0008ecb8) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x0008ecb8) cell_gallery_pane_g

0xc7a0,	// (0x0008bd68) bg_cell_gallery_focus_pane_g1

0xc7a8,	// (0x0008bd70) bg_cell_gallery_focus_pane_g2

0xc7b0,	// (0x0008bd78) bg_cell_gallery_focus_pane_g3

0xc7b8,	// (0x0008bd80) bg_cell_gallery_focus_pane_g4

0xc7c0,	// (0x0008bd88) bg_cell_gallery_focus_pane_g5

0xc7c8,	// (0x0008bd90) bg_cell_gallery_focus_pane_g6

0xc7d0,	// (0x0008bd98) bg_cell_gallery_focus_pane_g7

0xc7d8,	// (0x0008bda0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x0008ecc1) bg_cell_gallery_focus_pane_g

0xc7e0,	// (0x0008bda8) aid_firma_cardinal

0xc7f4,	// (0x0008bdbc) blid_firmament_pane_t1

0xc80b,	// (0x0008bdd3) blid_firmament_pane_t2

0xc822,	// (0x0008bdea) blid_firmament_pane_t3

0xc839,	// (0x0008be01) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x0008ecd2) blid_firmament_pane_t

0xc850,	// (0x0008be18) blid_sat_info_pane

0xc860,	// (0x0008be28) blid_sat_info_pane_g1

0xc860,	// (0x0008be28) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x0008ecdb) blid_sat_info_pane_g

0xc86a,	// (0x0008be32) blid_sat_info_pane_t1

0xc878,	// (0x0008be40) smil2_volume_content_pane

0xc881,	// (0x0008be49) smil2_volume_pane_g1

0xc889,	// (0x0008be51) smil2_volume_content_pane_g1

0xc892,	// (0x0008be5a) smil2_volume_content_pane_g2

0xc89b,	// (0x0008be63) smil2_volume_content_pane_g3

0xc8a4,	// (0x0008be6c) smil2_volume_content_pane_g4

0xc8ad,	// (0x0008be75) smil2_volume_content_pane_g5

0xc8b6,	// (0x0008be7e) smil2_volume_content_pane_g6

0xc8bf,	// (0x0008be87) smil2_volume_content_pane_g7

0xc8c8,	// (0x0008be90) smil2_volume_content_pane_g8

0xc8d1,	// (0x0008be99) smil2_volume_content_pane_g9

0xc8da,	// (0x0008bea2) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x0008ece0) smil2_volume_content_pane_g

0x3872,	// (0x00082e3a) cale_week_day_heading_pane_t1_ParamLimits

0x389c,	// (0x00082e64) cale_week_day_heading_pane_t2_ParamLimits

0x38c6,	// (0x00082e8e) cale_week_day_heading_pane_t3_ParamLimits

0x38f0,	// (0x00082eb8) cale_week_day_heading_pane_t4_ParamLimits

0x391a,	// (0x00082ee2) cale_week_day_heading_pane_t5_ParamLimits

0x3944,	// (0x00082f0c) cale_week_day_heading_pane_t6_ParamLimits

0x396e,	// (0x00082f36) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0008e7b9) cale_week_day_heading_pane_t_ParamLimits

0xb5d0,	// (0x0008ab98) bg_cale_side_pane_ParamLimits

0x3998,	// (0x00082f60) cale_week_time_pane_t1_ParamLimits

0x39c4,	// (0x00082f8c) cale_week_time_pane_t2_ParamLimits

0x39f0,	// (0x00082fb8) cale_week_time_pane_t3_ParamLimits

0x3a1c,	// (0x00082fe4) cale_week_time_pane_t4_ParamLimits

0x3a48,	// (0x00083010) cale_week_time_pane_t5_ParamLimits

0x3a74,	// (0x0008303c) cale_week_time_pane_t6_ParamLimits

0x3aa0,	// (0x00083068) cale_week_time_pane_t7_ParamLimits

0x3acc,	// (0x00083094) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0008e7c8) cale_week_time_pane_t_ParamLimits

0x3af8,	// (0x000830c0) cell_cale_week_pane_g2_ParamLimits

0xb5d0,	// (0x0008ab98) bg_cale_side_pane_cp01_ParamLimits

0x48cd,	// (0x00083e95) cale_month_week_pane_t1_ParamLimits

0x48e4,	// (0x00083eac) cale_month_week_pane_t2_ParamLimits

0x48fb,	// (0x00083ec3) cale_month_week_pane_t3_ParamLimits

0x4912,	// (0x00083eda) cale_month_week_pane_t4_ParamLimits

0x4929,	// (0x00083ef1) cale_month_week_pane_t5_ParamLimits

0x4940,	// (0x00083f08) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008e8a1) cale_month_week_pane_t_ParamLimits

0xbaa0,	// (0x0008b068) cell_cale_month_pane_g1_ParamLimits

0xac0c,	// (0x0008a1d4) main_cale_event_viewer_pane

0xac0c,	// (0x0008a1d4) listscroll_cale_event_viewer_pane

0xc8e3,	// (0x0008beab) list_cale_ev_pane

0xc8eb,	// (0x0008beb3) scroll_pane_cp023

0x6741,	// (0x00085d09) field_cale_ev_pane_ParamLimits

0x6741,	// (0x00085d09) field_cale_ev_pane

0xc8f7,	// (0x0008bebf) field_cale_ev_content_pane_ParamLimits

0xc8f7,	// (0x0008bebf) field_cale_ev_content_pane

0xc903,	// (0x0008becb) field_cale_ev_pane_g1_ParamLimits

0xc903,	// (0x0008becb) field_cale_ev_pane_g1

0xc90f,	// (0x0008bed7) field_cale_ev_pane_g2_ParamLimits

0xc90f,	// (0x0008bed7) field_cale_ev_pane_g2

0xc927,	// (0x0008beef) field_cale_ev_pane_g3_ParamLimits

0xc927,	// (0x0008beef) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x0008ecf5) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x0008ecf5) field_cale_ev_pane_g

0xc93f,	// (0x0008bf07) field_cale_ev_pane_t1_ParamLimits

0xc93f,	// (0x0008bf07) field_cale_ev_pane_t1

0x675b,	// (0x00085d23) field_cale_ev_content_pane_t1_ParamLimits

0x675b,	// (0x00085d23) field_cale_ev_content_pane_t1

0x119c,	// (0x00080764) bg_button_pane_cp01

0xb596,	// (0x0008ab5e) listscroll_cale_week_pane_ParamLimits

0x369c,	// (0x00082c64) popup_toolbar_window_cp01

0xb5be,	// (0x0008ab86) listscroll_cale_week_pane_t1_ParamLimits

0xb3ce,	// (0x0008a996) listscroll_cale_day_pane_ParamLimits

0x369c,	// (0x00082c64) popup_toolbar_window_cp02

0xb5be,	// (0x0008ab86) listscroll_cale_day_pane_t1_ParamLimits

0xb596,	// (0x0008ab5e) main_cale_month_pane_ParamLimits

0x5d79,	// (0x00085341) popup_toolbar_window_cp03_ParamLimits

0x5d79,	// (0x00085341) popup_toolbar_window_cp03

0x555e,	// (0x00084b26) main_image_pane_g2_ParamLimits

0x555e,	// (0x00084b26) main_image_pane_g2

0x556f,	// (0x00084b37) main_image_pane_g3_ParamLimits

0x556f,	// (0x00084b37) main_image_pane_g3

0x0002,

0xf50b,	// (0x0008ead3) main_image_pane_g_ParamLimits

0xf50b,	// (0x0008ead3) main_image_pane_g

0x12b6,	// (0x0008087e) main_image_pane_t1_ParamLimits

0x5580,	// (0x00084b48) main_image_pane_t2_ParamLimits

0x5580,	// (0x00084b48) main_image_pane_t2

0x5592,	// (0x00084b5a) main_image_pane_t3_ParamLimits

0x5592,	// (0x00084b5a) main_image_pane_t3

0x55ba,	// (0x00084b82) main_image_pane_t4_ParamLimits

0x55ba,	// (0x00084b82) main_image_pane_t4

0x0003,

0xf512,	// (0x0008eada) main_image_pane_t_ParamLimits

0xf512,	// (0x0008eada) main_image_pane_t

0x55da,	// (0x00084ba2) popup_image_details_window_cp01

0x55e2,	// (0x00084baa) popup_toobar_trans_pane_cp01_ParamLimits

0x55e2,	// (0x00084baa) popup_toobar_trans_pane_cp01

0x5c46,	// (0x0008520e) popup_image_details_window_ParamLimits

0x5c46,	// (0x0008520e) popup_image_details_window

0xc43b,	// (0x0008ba03) popup_image_focus_window

0x602b,	// (0x000855f3) camera2_autofocus_pane_ParamLimits

0x602b,	// (0x000855f3) camera2_autofocus_pane

0xac0c,	// (0x0008a1d4) bg_popup_sub_pane_cp06

0xc956,	// (0x0008bf1e) popup_image_focus_window_g1

0xc95e,	// (0x0008bf26) popup_image_focus_window_g2

0xc966,	// (0x0008bf2e) popup_image_focus_window_g3

0xc96e,	// (0x0008bf36) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x0008ecfc) popup_image_focus_window_g

0xc976,	// (0x0008bf3e) popup_image_focus_window_t1

0xc984,	// (0x0008bf4c) popup_image_focus_window_t2

0xc993,	// (0x0008bf5b) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x0008ed05) popup_image_focus_window_t

0xc9a1,	// (0x0008bf69) camera2_autofocus_pane_g1

0x206a,	// (0x00081632) bg_tb_trans_pane_cp01

0xc9af,	// (0x0008bf77) popup_image_details_window_g1

0xc9c2,	// (0x0008bf8a) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x0008ed17) popup_image_details_window_g

0xc9eb,	// (0x0008bfb3) popup_image_details_window_t1

0xc9fd,	// (0x0008bfc5) popup_image_details_window_t2

0xca16,	// (0x0008bfde) popup_image_details_window_t3

0xca2a,	// (0x0008bff2) popup_image_details_window_t4

0xca45,	// (0x0008c00d) popup_image_details_window_t5

0x0004,

0xf756,	// (0x0008ed1e) popup_image_details_window_t

0xb392,	// (0x0008a95a) bg_calc_paper_pane_ParamLimits

0xb3aa,	// (0x0008a972) grid_highlight_pane_cp013

0xb3b4,	// (0x0008a97c) list_calc_pane_ParamLimits

0xb3c6,	// (0x0008a98e) scroll_pane_cp024

0xb3ce,	// (0x0008a996) bg_calc_display_pane_ParamLimits

0xb3da,	// (0x0008a9a2) calc_display_pane_t1_ParamLimits

0xb3ef,	// (0x0008a9b7) calc_display_pane_t2_ParamLimits

0xb404,	// (0x0008a9cc) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008e73b) calc_display_pane_t_ParamLimits

0x35cd,	// (0x00082b95) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008e758) cell_calc_pane_g

0x35d6,	// (0x00082b9e) cell_calc_pane_t1

0xb47b,	// (0x0008aa43) grid_highlight_pane_cp02_ParamLimits

0xb491,	// (0x0008aa59) toolbar_button_pane_cp01_ParamLimits

0xb491,	// (0x0008aa59) toolbar_button_pane_cp01

0x12fb,	// (0x000808c3) temp_image_control_pane_ParamLimits

0x12fb,	// (0x000808c3) temp_image_control_pane

0x206a,	// (0x00081632) main_mp3_pane

0xca5f,	// (0x0008c027) temp_image_control_pane_g1_ParamLimits

0xca5f,	// (0x0008c027) temp_image_control_pane_g1

0xca6d,	// (0x0008c035) temp_image_control_pane_g2_ParamLimits

0xca6d,	// (0x0008c035) temp_image_control_pane_g2

0xca7f,	// (0x0008c047) temp_image_control_pane_g3_ParamLimits

0xca7f,	// (0x0008c047) temp_image_control_pane_g3

0x67a8,	// (0x00085d70) temp_image_control_pane_g4_ParamLimits

0x67a8,	// (0x00085d70) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x0008ed29) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x0008ed29) temp_image_control_pane_g

0xca5f,	// (0x0008c027) main_mp3_pane_g1

0x67b9,	// (0x00085d81) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x0008ed32) main_mp3_pane_g

0xcac2,	// (0x0008c08a) main_mp3_pane_t1

0xb696,	// (0x0008ac5e) main_camera_pane_g8_ParamLimits

0xb696,	// (0x0008ac5e) main_camera_pane_g8

0x3d8d,	// (0x00083355) main_video_pane_g7_ParamLimits

0x3d8d,	// (0x00083355) main_video_pane_g7

0xeb8b,	// (0x0008e153) main_camera2_pane_t7_ParamLimits

0xeb8b,	// (0x0008e153) main_camera2_pane_t7

0xb88b,	// (0x0008ae53) scroll_pane_cp025_ParamLimits

0xb88b,	// (0x0008ae53) scroll_pane_cp025

0xb89f,	// (0x0008ae67) scroll_pane_cp026_ParamLimits

0xb89f,	// (0x0008ae67) scroll_pane_cp026

0xb8ae,	// (0x0008ae76) wml_content_pane_ParamLimits

0xac0c,	// (0x0008a1d4) main_touch_calib_pane

0x6870,	// (0x00085e38) main_touch_calib_pane_g1

0x687c,	// (0x00085e44) main_touch_calib_pane_g2

0x6888,	// (0x00085e50) main_touch_calib_pane_g3

0x6894,	// (0x00085e5c) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x0008ed50) main_touch_calib_pane_g

0x68a0,	// (0x00085e68) main_touch_calib_pane_t1

0x68b8,	// (0x00085e80) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x0008ed59) main_touch_calib_pane_t

0x0f25,	// (0x000804ed) mup_progress_pane_cp02

0x0f44,	// (0x0008050c) navi_pane_g1

0x0fc4,	// (0x0008058c) navi_pane_mp_t3

0x206a,	// (0x00081632) main_mp3_pane_ParamLimits

0x5db3,	// (0x0008537b) navi_pane_ParamLimits

0xca5f,	// (0x0008c027) main_mp3_pane_g1_ParamLimits

0x67b9,	// (0x00085d81) main_mp3_pane_g2_ParamLimits

0x67c5,	// (0x00085d8d) main_mp3_pane_g3_ParamLimits

0x67c5,	// (0x00085d8d) main_mp3_pane_g3

0x67d1,	// (0x00085d99) main_mp3_pane_g4_ParamLimits

0x67d1,	// (0x00085d99) main_mp3_pane_g4

0xca8f,	// (0x0008c057) main_mp3_pane_g5_ParamLimits

0xca8f,	// (0x0008c057) main_mp3_pane_g5

0xca9d,	// (0x0008c065) main_mp3_pane_g6_ParamLimits

0xca9d,	// (0x0008c065) main_mp3_pane_g6

0xcaaa,	// (0x0008c072) main_mp3_pane_g7_ParamLimits

0xcaaa,	// (0x0008c072) main_mp3_pane_g7

0xcab6,	// (0x0008c07e) main_mp3_pane_g8_ParamLimits

0xcab6,	// (0x0008c07e) main_mp3_pane_g8

0xf76a,	// (0x0008ed32) main_mp3_pane_g_ParamLimits

0x67dd,	// (0x00085da5) main_mp3_pane_t2

0x67eb,	// (0x00085db3) main_mp3_pane_t3

0xcad0,	// (0x0008c098) main_mp3_pane_t4

0xcade,	// (0x0008c0a6) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x0008ed43) main_mp3_pane_t

0xcaec,	// (0x0008c0b4) mup_progress_pane_cp01

0xac36,	// (0x0008a1fe) aid_zoom_text_secondary2

0xc8e3,	// (0x0008beab) list_cale_ev2_pane

0xc8eb,	// (0x0008beb3) scroll_pane_cp023_ParamLimits

0x6906,	// (0x00085ece) field_cale_ev2_pane_ParamLimits

0x6906,	// (0x00085ece) field_cale_ev2_pane

0xcaf4,	// (0x0008c0bc) field_cale_ev2_pane_g1_ParamLimits

0xcaf4,	// (0x0008c0bc) field_cale_ev2_pane_g1

0xcb00,	// (0x0008c0c8) field_cale_ev2_pane_g2_ParamLimits

0xcb00,	// (0x0008c0c8) field_cale_ev2_pane_g2

0xcb18,	// (0x0008c0e0) field_cale_ev2_pane_g3_ParamLimits

0xcb18,	// (0x0008c0e0) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x0008ed64) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x0008ed64) field_cale_ev2_pane_g

0xcb3c,	// (0x0008c104) field_cale_ev2_pane_t1_ParamLimits

0xcb3c,	// (0x0008c104) field_cale_ev2_pane_t1

0xcb53,	// (0x0008c11b) field_cale_ev2_pane_t2_ParamLimits

0xcb53,	// (0x0008c11b) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x0008ed6d) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x0008ed6d) field_cale_ev2_pane_t

0x5419,	// (0x000849e1) main_postcard_pane_g5_ParamLimits

0x5419,	// (0x000849e1) main_postcard_pane_g5

0x542d,	// (0x000849f5) main_postcard_pane_g6_ParamLimits

0x542d,	// (0x000849f5) main_postcard_pane_g6

0x3b6f,	// (0x00083137) camera2_autofocus_pane_cp_ParamLimits

0x3b6f,	// (0x00083137) camera2_autofocus_pane_cp

0x206a,	// (0x00081632) main_mup3_pane

0x693e,	// (0x00085f06) main_mup3_pane_g1_ParamLimits

0x693e,	// (0x00085f06) main_mup3_pane_g1

0x6960,	// (0x00085f28) main_mup3_pane_g2_ParamLimits

0x6960,	// (0x00085f28) main_mup3_pane_g2

0x69c8,	// (0x00085f90) main_mup3_pane_g3_ParamLimits

0x69c8,	// (0x00085f90) main_mup3_pane_g3

0x6a06,	// (0x00085fce) main_mup3_pane_g4_ParamLimits

0x6a06,	// (0x00085fce) main_mup3_pane_g4

0x6a44,	// (0x0008600c) main_mup3_pane_g5_ParamLimits

0x6a44,	// (0x0008600c) main_mup3_pane_g5

0x6a82,	// (0x0008604a) main_mup3_pane_g6_ParamLimits

0x6a82,	// (0x0008604a) main_mup3_pane_g6

0xcb68,	// (0x0008c130) main_mup3_pane_g7_ParamLimits

0xcb68,	// (0x0008c130) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x0008ed7d) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x0008ed7d) main_mup3_pane_g

0x6af8,	// (0x000860c0) main_mup3_pane_t1_ParamLimits

0x6af8,	// (0x000860c0) main_mup3_pane_t1

0x6b60,	// (0x00086128) main_mup3_pane_t2_ParamLimits

0x6b60,	// (0x00086128) main_mup3_pane_t2

0x6c28,	// (0x000861f0) main_mup3_pane_t4_ParamLimits

0x6c28,	// (0x000861f0) main_mup3_pane_t4

0x6c76,	// (0x0008623e) main_mup3_pane_t5_ParamLimits

0x6c76,	// (0x0008623e) main_mup3_pane_t5

0x6d24,	// (0x000862ec) main_mup3_pane_t6_ParamLimits

0x6d24,	// (0x000862ec) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x0008ed8e) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x0008ed8e) main_mup3_pane_t

0x6dd8,	// (0x000863a0) mup3_progress_pane_ParamLimits

0x6dd8,	// (0x000863a0) mup3_progress_pane

0x6e34,	// (0x000863fc) popup_mup3_control_window_ParamLimits

0x6e34,	// (0x000863fc) popup_mup3_control_window

0xcb76,	// (0x0008c13e) popup_mup3_text_window

0x6e62,	// (0x0008642a) mup3_progress_pane_t1

0x6e78,	// (0x00086440) mup3_progress_pane_t2

0xcb7e,	// (0x0008c146) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x0008ed9b) mup3_progress_pane_t

0xcb95,	// (0x0008c15d) mup_progress_pane_cp03

0xac0c,	// (0x0008a1d4) bg_tb_trans_pane_cp04

0x6e8e,	// (0x00086456) mup3_volume_pane

0x6e96,	// (0x0008645e) popup_mup3_control_window_g1

0x6e9f,	// (0x00086467) mup3_volume_pane_g1

0x6ea8,	// (0x00086470) mup3_volume_pane_g2

0x6eb1,	// (0x00086479) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x0008eda2) mup3_volume_pane_g

0xac0c,	// (0x0008a1d4) bg_tb_trans_pane_cp03

0xcba5,	// (0x0008c16d) popup_mup3_text_window_g1

0xcbad,	// (0x0008c175) popup_mup3_text_window_t1

0xb452,	// (0x0008aa1a) list_calc_item_pane_g1_ParamLimits

0xc5b3,	// (0x0008bb7b) mup_volume_pane_cp_g1

0x68d0,	// (0x00085e98) main_touch_calib_pane_t3

0x68e2,	// (0x00085eaa) main_touch_calib_pane_t4

0x68f4,	// (0x00085ebc) main_touch_calib_pane_t5

0xac16,	// (0x0008a1de) aid_cell_size_toolbar2

0xac1e,	// (0x0008a1e6) aid_popup3_width_pane

0xac26,	// (0x0008a1ee) aid_zoom_text_msg_primary

0xb676,	// (0x0008ac3e) vorec_t7

0xb416,	// (0x0008a9de) bg_calc_paper_pane_g1_ParamLimits

0xb422,	// (0x0008a9ea) bg_calc_paper_pane_g2_ParamLimits

0xb42e,	// (0x0008a9f6) bg_calc_paper_pane_g3_ParamLimits

0xb43a,	// (0x0008aa02) bg_calc_paper_pane_g4_ParamLimits

0xb446,	// (0x0008aa0e) bg_calc_paper_pane_g5_ParamLimits

0x3567,	// (0x00082b2f) bg_calc_paper_pane_g6_ParamLimits

0x3576,	// (0x00082b3e) bg_calc_paper_pane_g7_ParamLimits

0x3585,	// (0x00082b4d) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0008e742) bg_calc_paper_pane_g_ParamLimits

0x3594,	// (0x00082b5c) calc_bg_paper_pane_g9_ParamLimits

0x3ca3,	// (0x0008326b) image_qvga_pane_ParamLimits

0x3ca3,	// (0x0008326b) image_qvga_pane

0xb2d3,	// (0x0008a89b) bg_popup_sub_pane_cp04_ParamLimits

0x1232,	// (0x000807fa) popup_mup_playback_window_g1_ParamLimits

0x123e,	// (0x00080806) popup_mup_playback_window_t1_ParamLimits

0x1253,	// (0x0008081b) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008eace) popup_mup_playback_window_t_ParamLimits

0x6442,	// (0x00085a0a) main_mup2_pane_g3_ParamLimits

0x6442,	// (0x00085a0a) main_mup2_pane_g3

0x3fc7,	// (0x0008358f) popup_toolbar_window_cp04

0x1619,	// (0x00080be1) popup_call2_audio_second_window_g3_ParamLimits

0x1619,	// (0x00080be1) popup_call2_audio_second_window_g3

0x1a23,	// (0x00080feb) popup_call2_audio_first_window_g4_ParamLimits

0x1a23,	// (0x00080feb) popup_call2_audio_first_window_g4

0xc07c,	// (0x0008b644) popup_call2_audio_in_window_g4_ParamLimits

0xc07c,	// (0x0008b644) popup_call2_audio_in_window_g4

0x5540,	// (0x00084b08) aid_area_sk_bg_cut_ParamLimits

0x5540,	// (0x00084b08) aid_area_sk_bg_cut

0x1268,	// (0x00080830) aid_area_sk_bg_cut_2_ParamLimits

0x1268,	// (0x00080830) aid_area_sk_bg_cut_2

0x6717,	// (0x00085cdf) aid_placing_details_win

0x671f,	// (0x00085ce7) aid_placing_details_win_2

0xc9a1,	// (0x0008bf69) camera2_autofocus_pane_g1_ParamLimits

0x31dd,	// (0x000827a5) popup_fixed_preview_cale_window_ParamLimits

0x31dd,	// (0x000827a5) popup_fixed_preview_cale_window

0x1044,	// (0x0008060c) navi_slider_pane_g3

0x104d,	// (0x00080615) navi_slider_pane_g4

0x1056,	// (0x0008061e) navi_slider_pane_g5

0x1044,	// (0x0008060c) navi_slider_pane_g6

0xbfc8,	// (0x0008b590) navi_slider_pane_g7

0x1169,	// (0x00080731) mup_scale_pane_g3

0x1172,	// (0x0008073a) mup_scale_pane_g4

0x117b,	// (0x00080743) mup_scale_pane_g5

0x5249,	// (0x00084811) mup_scale_pane_g6

0x5252,	// (0x0008481a) mup_scale_pane_g7

0x1044,	// (0x0008060c) cams2_slider_pane_g3

0xc63d,	// (0x0008bc05) cams2_slider_pane_g4

0xebf1,	// (0x0008e1b9) cams2_slider_pane_g5

0x1044,	// (0x0008060c) cams2_slider_pane_g6

0xebf9,	// (0x0008e1c1) cams2_slider_pane_g7

0xc860,	// (0x0008be28) camera2_autofocus_pane_cp_g1

0xcbbb,	// (0x0008c183) bg_popup_preview_window_pane_cp02_ParamLimits

0xcbbb,	// (0x0008c183) bg_popup_preview_window_pane_cp02

0x6eba,	// (0x00086482) list_fp_cale_pane_ParamLimits

0x6eba,	// (0x00086482) list_fp_cale_pane

0xcbc7,	// (0x0008c18f) popup_fixed_preview_cale_window_t1_ParamLimits

0xcbc7,	// (0x0008c18f) popup_fixed_preview_cale_window_t1

0x6ec6,	// (0x0008648e) popup_fixed_preview_cale_window_t2_ParamLimits

0x6ec6,	// (0x0008648e) popup_fixed_preview_cale_window_t2

0x6edb,	// (0x000864a3) popup_fixed_preview_cale_window_t3_ParamLimits

0x6edb,	// (0x000864a3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x0008eda9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x0008eda9) popup_fixed_preview_cale_window_t

0x6ef0,	// (0x000864b8) list_single_fp_cale_pane_ParamLimits

0x6ef0,	// (0x000864b8) list_single_fp_cale_pane

0x6f04,	// (0x000864cc) list_single_fp_cale_pane_g1_ParamLimits

0x6f04,	// (0x000864cc) list_single_fp_cale_pane_g1

0xcbe5,	// (0x0008c1ad) list_single_fp_cale_pane_g2_ParamLimits

0xcbe5,	// (0x0008c1ad) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x0008edb0) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x0008edb0) list_single_fp_cale_pane_g

0x6f10,	// (0x000864d8) list_single_fp_cale_pane_t1_ParamLimits

0x6f10,	// (0x000864d8) list_single_fp_cale_pane_t1

0x6f22,	// (0x000864ea) list_single_fp_cale_pane_t2_ParamLimits

0x6f22,	// (0x000864ea) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x0008edb7) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x0008edb7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xac0c,	// (0x0008a1d4) main_dialer_pane

0x6f55,	// (0x0008651d) aid_cell_size_keypad

0x6f5f,	// (0x00086527) dialer_ne_pane

0x6f67,	// (0x0008652f) grid_dialer_command_1_pane

0x6f6f,	// (0x00086537) grid_dialer_command_2_pane

0x6f77,	// (0x0008653f) grid_dialer_keypad_pane

0x6f87,	// (0x0008654f) bg_popup_call_pane_cp06_ParamLimits

0x6f87,	// (0x0008654f) bg_popup_call_pane_cp06

0x6f93,	// (0x0008655b) dialer_ne_clear_pane_ParamLimits

0x6f93,	// (0x0008655b) dialer_ne_clear_pane

0xcbfe,	// (0x0008c1c6) dialer_ne_pane_g1

0xcc06,	// (0x0008c1ce) dialer_ne_pane_t1_ParamLimits

0xcc06,	// (0x0008c1ce) dialer_ne_pane_t1

0x6f9f,	// (0x00086567) dialer_ne_pane_t2_ParamLimits

0x6f9f,	// (0x00086567) dialer_ne_pane_t2

0x6fc9,	// (0x00086591) dialer_ne_pane_t3_ParamLimits

0x6fc9,	// (0x00086591) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x0008edbc) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x0008edbc) dialer_ne_pane_t

0x6ff9,	// (0x000865c1) dialer_ne_pane_t3_copy1_ParamLimits

0x6ff9,	// (0x000865c1) dialer_ne_pane_t3_copy1

0x7028,	// (0x000865f0) cell_dialer_keypad_pane_ParamLimits

0x7028,	// (0x000865f0) cell_dialer_keypad_pane

0x703d,	// (0x00086605) cell_dialer_command_1_pane_ParamLimits

0x703d,	// (0x00086605) cell_dialer_command_1_pane

0x7053,	// (0x0008661b) cell_dialer_command_2_pane_ParamLimits

0x7053,	// (0x0008661b) cell_dialer_command_2_pane

0xcc18,	// (0x0008c1e0) bg_button_pane_cp02_ParamLimits

0xcc18,	// (0x0008c1e0) bg_button_pane_cp02

0x7062,	// (0x0008662a) cell_dialer_keypad_pane_g1_ParamLimits

0x7062,	// (0x0008662a) cell_dialer_keypad_pane_g1

0xcc18,	// (0x0008c1e0) bg_button_pane_cp03_ParamLimits

0xcc18,	// (0x0008c1e0) bg_button_pane_cp03

0x7077,	// (0x0008663f) cell_dialer_command_1_pane_g1_ParamLimits

0x7077,	// (0x0008663f) cell_dialer_command_1_pane_g1

0xcc24,	// (0x0008c1ec) bg_button_pane_cp04

0x708b,	// (0x00086653) cell_dialer_command_2_pane_g1

0x1033,	// (0x000805fb) bg_button_pane_cp06

0xcc2c,	// (0x0008c1f4) dialer_ne_clear_pane_g1

0x0f50,	// (0x00080518) navi_pane_g2

0x4e4e,	// (0x00084416) navi_pane_g3

0x0002,

0xf409,	// (0x0008e9d1) navi_pane_g

0x0fd2,	// (0x0008059a) navi_pane_mv_g2

0x0ffa,	// (0x000805c2) navi_pane_mv_g5

0x4e73,	// (0x0008443b) navi_pane_mv_t1

0xb3ce,	// (0x0008a996) main_clock2_pane

0x70c2,	// (0x0008668a) main_clock2_list_pane_ParamLimits

0x70c2,	// (0x0008668a) main_clock2_list_pane

0x70f4,	// (0x000866bc) main_clock2_pane_t1_ParamLimits

0x70f4,	// (0x000866bc) main_clock2_pane_t1

0x712b,	// (0x000866f3) main_clock2_pane_t2_ParamLimits

0x712b,	// (0x000866f3) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x0008edc3) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x0008edc3) main_clock2_pane_t

0x71ad,	// (0x00086775) popup_clock_analogue_window_cp03_ParamLimits

0x71ad,	// (0x00086775) popup_clock_analogue_window_cp03

0x71d0,	// (0x00086798) popup_clock_digital_window_cp02_ParamLimits

0x71d0,	// (0x00086798) popup_clock_digital_window_cp02

0x7241,	// (0x00086809) main_clock2_list_single_pane_ParamLimits

0x7241,	// (0x00086809) main_clock2_list_single_pane

0x1033,	// (0x000805fb) list_highlight_pane_cp05

0xcc34,	// (0x0008c1fc) main_clock2_list_single_pane_t1

0x3fc7,	// (0x0008358f) popup_toolbar_window_cp04_ParamLimits

0x6778,	// (0x00085d40) camera2_autofocus_pane_g2_ParamLimits

0x6778,	// (0x00085d40) camera2_autofocus_pane_g2

0x6784,	// (0x00085d4c) camera2_autofocus_pane_g3_ParamLimits

0x6784,	// (0x00085d4c) camera2_autofocus_pane_g3

0x6790,	// (0x00085d58) camera2_autofocus_pane_g4_ParamLimits

0x6790,	// (0x00085d58) camera2_autofocus_pane_g4

0x679c,	// (0x00085d64) camera2_autofocus_pane_g5_ParamLimits

0x679c,	// (0x00085d64) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x0008ed0c) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x0008ed0c) camera2_autofocus_pane_g

0x691e,	// (0x00085ee6) camera2_autofocus_pane_cp_g2

0x6926,	// (0x00085eee) camera2_autofocus_pane_cp_g3

0x692e,	// (0x00085ef6) camera2_autofocus_pane_cp_g4

0x6936,	// (0x00085efe) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x0008ed72) camera2_autofocus_pane_cp_g

0x6f7f,	// (0x00086547) popup_dialer_spcha_window

0xac0c,	// (0x0008a1d4) bg_popup_sub_pane_cp07

0xcc42,	// (0x0008c20a) list_spcha_pane

0xcc4a,	// (0x0008c212) list_single_spcha_pane_ParamLimits

0xcc4a,	// (0x0008c212) list_single_spcha_pane

0xac0c,	// (0x0008a1d4) list_highlight_pane_cp06

0xcc5b,	// (0x0008c223) list_single_spcha_pane_t1

0x1e4c,	// (0x00081414) popup_call2_audio_out_window_g4_ParamLimits

0x1e4c,	// (0x00081414) popup_call2_audio_out_window_g4

0xac0c,	// (0x0008a1d4) main_imed2_pane

0xc443,	// (0x0008ba0b) popup_imed_adjust2_window

0x5c5c,	// (0x00085224) popup_imed_trans_window_ParamLimits

0x5c5c,	// (0x00085224) popup_imed_trans_window

0xc6a4,	// (0x0008bc6c) popup_blid_sat_info2_window_t1

0xc6b2,	// (0x0008bc7a) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x0008eca1) popup_blid_sat_info2_window_t

0x72eb,	// (0x000868b3) aid_size_cell_colour_35

0x730b,	// (0x000868d3) aid_size_cell_colour_112

0x732b,	// (0x000868f3) aid_size_cell_effect

0xc41d,	// (0x0008b9e5) bg_tb_trans_pane_cp02

0xbc19,	// (0x0008b1e1) heading_imed_pane

0x734b,	// (0x00086913) listscroll_imed_pane

0xcc69,	// (0x0008c231) heading_imed_pane_g1

0xcc71,	// (0x0008c239) heading_imed_pane_t1

0xcc7f,	// (0x0008c247) grid_imed_colour_35_pane_ParamLimits

0xcc7f,	// (0x0008c247) grid_imed_colour_35_pane

0x7357,	// (0x0008691f) grid_imed_effect_pane

0xcc92,	// (0x0008c25a) list_imed_aspect_pane

0x736a,	// (0x00086932) scroll_pane_cp027_ParamLimits

0x736a,	// (0x00086932) scroll_pane_cp027

0x7376,	// (0x0008693e) cell_imed_effect_pane_ParamLimits

0x7376,	// (0x0008693e) cell_imed_effect_pane

0xcc9a,	// (0x0008c262) cell_imed_colour_pane_ParamLimits

0xcc9a,	// (0x0008c262) cell_imed_colour_pane

0xccd4,	// (0x0008c29c) cell_imed_colour_pane_g1_ParamLimits

0xccd4,	// (0x0008c29c) cell_imed_colour_pane_g1

0xcce5,	// (0x0008c2ad) hgihlgiht_grid_pane_cp016_ParamLimits

0xcce5,	// (0x0008c2ad) hgihlgiht_grid_pane_cp016

0x739b,	// (0x00086963) cell_imed_effect_pane_g1

0x73a3,	// (0x0008696b) grid_highlight_pane_cp017

0xccf6,	// (0x0008c2be) list_imed_single_pane_ParamLimits

0xccf6,	// (0x0008c2be) list_imed_single_pane

0xac0c,	// (0x0008a1d4) list_highlight_pane_cp07

0xcd09,	// (0x0008c2d1) list_imed_aspect_pane_comp1_t1

0xc41d,	// (0x0008b9e5) bg_tb_trans_pane_cp05

0xcd29,	// (0x0008c2f1) popup_imed_adjust2_window_g1

0xcd50,	// (0x0008c318) popup_imed_adjust2_window_t1

0xcd68,	// (0x0008c330) slider_imed_adjust_pane

0xcd7c,	// (0x0008c344) slider_imed_adjust_pane_g1

0xcd8c,	// (0x0008c354) slider_imed_adjust_pane_g2

0xcd9c,	// (0x0008c364) slider_imed_adjust_pane_g3

0xcdad,	// (0x0008c375) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x0008ede0) slider_imed_adjust_pane_g

0x73ac,	// (0x00086974) aid_size_cell_clipart2

0x73b8,	// (0x00086980) grid_imed_clipart_pane

0xcdbe,	// (0x0008c386) scroll_pane_cp031

0x73c2,	// (0x0008698a) cell_imed_clipart_pane_ParamLimits

0x73c2,	// (0x0008698a) cell_imed_clipart_pane

0x73da,	// (0x000869a2) cell_imed_clipart_pane_g1

0xac0c,	// (0x0008a1d4) grid_highlight_pane_cp014

0x70d5,	// (0x0008669d) main_clock2_pane_g1_ParamLimits

0x70d5,	// (0x0008669d) main_clock2_pane_g1

0x71ec,	// (0x000867b4) aid_call2_pane_cp10

0x71fe,	// (0x000867c6) aid_call_pane_cp10

0x0f00,	// (0x000804c8) popup_clock_analogue_window_cp10_g1

0x0f00,	// (0x000804c8) popup_clock_analogue_window_cp10_g2

0x7210,	// (0x000867d8) popup_clock_analogue_window_cp10_g3

0x7210,	// (0x000867d8) popup_clock_analogue_window_cp10_g4

0x0f00,	// (0x000804c8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x0008edce) popup_clock_analogue_window_cp10_g

0x7222,	// (0x000867ea) popup_clock_analogue_window_cp10_t1

0x7253,	// (0x0008681b) clock_digital_number_pane_cp10_ParamLimits

0x7253,	// (0x0008681b) clock_digital_number_pane_cp10

0x726b,	// (0x00086833) clock_digital_number_pane_cp11_ParamLimits

0x726b,	// (0x00086833) clock_digital_number_pane_cp11

0x7283,	// (0x0008684b) clock_digital_number_pane_cp12_ParamLimits

0x7283,	// (0x0008684b) clock_digital_number_pane_cp12

0x729b,	// (0x00086863) clock_digital_number_pane_cp13_ParamLimits

0x729b,	// (0x00086863) clock_digital_number_pane_cp13

0x72b3,	// (0x0008687b) clock_digital_separator_pane_cp10_ParamLimits

0x72b3,	// (0x0008687b) clock_digital_separator_pane_cp10

0x72cb,	// (0x00086893) popup_clock_digital_window_cp02_t1_ParamLimits

0x72cb,	// (0x00086893) popup_clock_digital_window_cp02_t1

0xb2cb,	// (0x0008a893) clock_digital_number_pane_cp10_g1

0xb2cb,	// (0x0008a893) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x0008ede9) clock_digital_number_pane_cp10_g

0xb2cb,	// (0x0008a893) clock_digital_separator_pane_cp10_g1

0xb2cb,	// (0x0008a893) clock_digital_separator_pane_g2_cp10

0x1003,	// (0x000805cb) navi_pane_vded_g4

0x100c,	// (0x000805d4) navi_pane_vded_g5

0x1015,	// (0x000805dd) navi_pane_vded_t1

0xac0c,	// (0x0008a1d4) main_vded_pane

0x73e3,	// (0x000869ab) main_vded_pane_g1

0x73ed,	// (0x000869b5) main_vded_pane_g2

0x73f5,	// (0x000869bd) main_vded_pane_g3

0x0002,

0xf826,	// (0x0008edee) main_vded_pane_g

0x73fd,	// (0x000869c5) main_vded_pane_t1

0x740b,	// (0x000869d3) main_vded_pane_t2

0x0001,

0xf82d,	// (0x0008edf5) main_vded_pane_t

0x7419,	// (0x000869e1) vded_slider_pane

0x7421,	// (0x000869e9) vded_video_pane

0xcdc6,	// (0x0008c38e) vded_video_pane_g1

0x7429,	// (0x000869f1) vded_video_pane_g2

0xc860,	// (0x0008be28) vded_video_pane_g3

0x0002,

0xf832,	// (0x0008edfa) vded_video_pane_g

0xcdd0,	// (0x0008c398) vded_slider_pane_g1

0xc5b3,	// (0x0008bb7b) vded_slider_pane_g2

0xcdd9,	// (0x0008c3a1) vded_slider_pane_g3

0xcde2,	// (0x0008c3aa) vded_slider_pane_g4

0xcdeb,	// (0x0008c3b3) vded_slider_pane_g5

0x0004,

0xf839,	// (0x0008ee01) vded_slider_pane_g

0x6e1e,	// (0x000863e6) mup3_rocker_pane_ParamLimits

0x6e1e,	// (0x000863e6) mup3_rocker_pane

0x7432,	// (0x000869fa) mup3_control_keys_pane_g1

0x743a,	// (0x00086a02) mup3_control_keys_pane_g2

0x7442,	// (0x00086a0a) mup3_control_keys_pane_g3

0x744a,	// (0x00086a12) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x0008ee0c) mup3_control_keys_pane_g

0x3210,	// (0x000827d8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3210,	// (0x000827d8) popup_toolbar2_fixed_window_cp01

0x6e4c,	// (0x00086414) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e4c,	// (0x00086414) popup_toolbar2_fixed_window_cp02

0x178b,	// (0x00080d53) popup_call2_audio_second_window_t4_ParamLimits

0x178b,	// (0x00080d53) popup_call2_audio_second_window_t4

0x1cb9,	// (0x00081281) popup_call2_audio_first_window_t6_ParamLimits

0x1cb9,	// (0x00081281) popup_call2_audio_first_window_t6

0x1f4f,	// (0x00081517) popup_call2_audio_out_window_t6_ParamLimits

0x1f4f,	// (0x00081517) popup_call2_audio_out_window_t6

0xac0c,	// (0x0008a1d4) main_vitu_pane

0x745a,	// (0x00086a22) aid_size_cell_itu_ParamLimits

0x745a,	// (0x00086a22) aid_size_cell_itu

0x206a,	// (0x00081632) bg_popup_window_pane_cp08_ParamLimits

0x206a,	// (0x00081632) bg_popup_window_pane_cp08

0x7470,	// (0x00086a38) field_vitu_entry_pane_ParamLimits

0x7470,	// (0x00086a38) field_vitu_entry_pane

0x7483,	// (0x00086a4b) grid_vitu_function_pane_ParamLimits

0x7483,	// (0x00086a4b) grid_vitu_function_pane

0x7498,	// (0x00086a60) grid_vitu_itu_pane_ParamLimits

0x7498,	// (0x00086a60) grid_vitu_itu_pane

0x74ae,	// (0x00086a76) cell_vitu_itu_pane_ParamLimits

0x74ae,	// (0x00086a76) cell_vitu_itu_pane

0x74d0,	// (0x00086a98) cell_vitu_function_pane_ParamLimits

0x74d0,	// (0x00086a98) cell_vitu_function_pane

0x206a,	// (0x00081632) bg_popup_sub_pane_cp08_ParamLimits

0x206a,	// (0x00081632) bg_popup_sub_pane_cp08

0x74e9,	// (0x00086ab1) field_vitu_entry_pane_t1_ParamLimits

0x74e9,	// (0x00086ab1) field_vitu_entry_pane_t1

0xce0c,	// (0x0008c3d4) field_vitu_entry_pane_t2_ParamLimits

0xce0c,	// (0x0008c3d4) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x0008ee1a) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x0008ee1a) field_vitu_entry_pane_t

0xce29,	// (0x0008c3f1) bg_button_pane_cp05_ParamLimits

0xce29,	// (0x0008c3f1) bg_button_pane_cp05

0x7505,	// (0x00086acd) cell_vitu_itu_pane_g1

0x751d,	// (0x00086ae5) cell_vitu_itu_pane_t1_ParamLimits

0x751d,	// (0x00086ae5) cell_vitu_itu_pane_t1

0x752f,	// (0x00086af7) cell_vitu_itu_pane_t2_ParamLimits

0x752f,	// (0x00086af7) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x0008ee1f) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x0008ee1f) cell_vitu_itu_pane_t

0xce37,	// (0x0008c3ff) bg_button_pane_cp07

0x7564,	// (0x00086b2c) cell_vitu_function_pane_g1

0xb35a,	// (0x0008a922) main_calc_pane_g1

0x3074,	// (0x0008263c) aid_visual_content_pane

0xac0c,	// (0x0008a1d4) main_vradio_pane

0x756d,	// (0x00086b35) main_vradio_pane_g1_ParamLimits

0x756d,	// (0x00086b35) main_vradio_pane_g1

0xce41,	// (0x0008c409) main_vradio_pane_g2_ParamLimits

0xce41,	// (0x0008c409) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x0008ee26) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x0008ee26) main_vradio_pane_g

0x7583,	// (0x00086b4b) main_vradio_pane_t1_ParamLimits

0x7583,	// (0x00086b4b) main_vradio_pane_t1

0x7598,	// (0x00086b60) main_vradio_pane_t2_ParamLimits

0x7598,	// (0x00086b60) main_vradio_pane_t2

0xce4e,	// (0x0008c416) main_vradio_pane_t3_ParamLimits

0xce4e,	// (0x0008c416) main_vradio_pane_t3

0x0002,

0xf863,	// (0x0008ee2b) main_vradio_pane_t_ParamLimits

0xf863,	// (0x0008ee2b) main_vradio_pane_t

0x75ad,	// (0x00086b75) vradio_rocker_control_pane_ParamLimits

0x75ad,	// (0x00086b75) vradio_rocker_control_pane

0x75bf,	// (0x00086b87) vradio_station_info_pane_ParamLimits

0x75bf,	// (0x00086b87) vradio_station_info_pane

0xce60,	// (0x0008c428) vradio_frequency_info_pane_ParamLimits

0xce60,	// (0x0008c428) vradio_frequency_info_pane

0xc860,	// (0x0008be28) vradio_station_info_pane_g1

0xce6f,	// (0x0008c437) vradio_station_info_pane_t1_ParamLimits

0xce6f,	// (0x0008c437) vradio_station_info_pane_t1

0xce91,	// (0x0008c459) vradio_station_info_pane_t2_ParamLimits

0xce91,	// (0x0008c459) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x0008ee32) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x0008ee32) vradio_station_info_pane_t

0xcea3,	// (0x0008c46b) vradio_tuning_pane

0xceab,	// (0x0008c473) vradio_rocker_control_pane_g1

0xceb3,	// (0x0008c47b) vradio_rocker_control_pane_g2

0xcebb,	// (0x0008c483) vradio_rocker_control_pane_g3

0xcec3,	// (0x0008c48b) vradio_rocker_control_pane_g4

0xcecb,	// (0x0008c493) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x0008ee37) vradio_rocker_control_pane_g

0x75cf,	// (0x00086b97) vradio_frequency_info_pane_g1

0xced3,	// (0x0008c49b) vradio_frequency_info_pane_t1_ParamLimits

0xced3,	// (0x0008c49b) vradio_frequency_info_pane_t1

0x75d9,	// (0x00086ba1) vradio_tuning_pane_g1

0x75e2,	// (0x00086baa) vradio_tuning_pane_t1

0xac3e,	// (0x0008a206) area_side_right_pane_ParamLimits

0xac3e,	// (0x0008a206) area_side_right_pane

0xc3e4,	// (0x0008b9ac) status_small_pane_g1

0xc3ec,	// (0x0008b9b4) status_small_pane_g2

0xc3f5,	// (0x0008b9bd) status_small_pane_g3

0xc3fe,	// (0x0008b9c6) status_small_pane_g4

0x0003,

0xf62f,	// (0x0008ebf7) status_small_pane_g

0xc407,	// (0x0008b9cf) status_small_pane_t1

0xac0c,	// (0x0008a1d4) main_video3_pane

0xcee7,	// (0x0008c4af) cams_zoom_vslider_pane

0xceef,	// (0x0008c4b7) image3_wide_pane_ParamLimits

0xceef,	// (0x0008c4b7) image3_wide_pane

0xcf09,	// (0x0008c4d1) image3_wide_small_pane

0xcf13,	// (0x0008c4db) main_video3_pane_g1_ParamLimits

0xcf13,	// (0x0008c4db) main_video3_pane_g1

0xcf2f,	// (0x0008c4f7) main_video3_pane_g2_ParamLimits

0xcf2f,	// (0x0008c4f7) main_video3_pane_g2

0x0001,

0xf87a,	// (0x0008ee42) main_video3_pane_g_ParamLimits

0xf87a,	// (0x0008ee42) main_video3_pane_g

0xcf4b,	// (0x0008c513) main_video3_pane_t1_ParamLimits

0xcf4b,	// (0x0008c513) main_video3_pane_t1

0xcf76,	// (0x0008c53e) main_video3_pane_t2_ParamLimits

0xcf76,	// (0x0008c53e) main_video3_pane_t2

0xcfa1,	// (0x0008c569) main_video3_pane_t3_ParamLimits

0xcfa1,	// (0x0008c569) main_video3_pane_t3

0x0002,

0xf87f,	// (0x0008ee47) main_video3_pane_t_ParamLimits

0xf87f,	// (0x0008ee47) main_video3_pane_t

0xcfcc,	// (0x0008c594) cams_zoom_vslider_pane_g1

0xcfd5,	// (0x0008c59d) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x0008ee4e) cams_zoom_vslider_pane_g

0xcfdd,	// (0x0008c5a5) small_slider_vertical_pane

0xc860,	// (0x0008be28) small_slider_vertical_pane_g1

0xc860,	// (0x0008be28) small_slider_vertical_pane_g2

0xcfe5,	// (0x0008c5ad) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x0008ee53) small_slider_vertical_pane_g

0xac0c,	// (0x0008a1d4) main_hwr_training_pane

0xcfee,	// (0x0008c5b6) hwr_training_instruct_pane_ParamLimits

0xcfee,	// (0x0008c5b6) hwr_training_instruct_pane

0x75f1,	// (0x00086bb9) hwr_training_navi_pane_ParamLimits

0x75f1,	// (0x00086bb9) hwr_training_navi_pane

0x7608,	// (0x00086bd0) hwr_training_write_pane_ParamLimits

0x7608,	// (0x00086bd0) hwr_training_write_pane

0xac0c,	// (0x0008a1d4) bg_frame_shadow_pane

0xd01d,	// (0x0008c5e5) hwr_training_write_pane_g1

0xd025,	// (0x0008c5ed) hwr_training_write_pane_g2

0xd02d,	// (0x0008c5f5) hwr_training_write_pane_g3

0xd035,	// (0x0008c5fd) hwr_training_write_pane_g4

0xd03d,	// (0x0008c605) hwr_training_write_pane_g5

0xd045,	// (0x0008c60d) hwr_training_write_pane_g6

0xd04d,	// (0x0008c615) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x0008ee5a) hwr_training_write_pane_g

0xec02,	// (0x0008e1ca) hwr_training_navi_pane_g1_ParamLimits

0xec02,	// (0x0008e1ca) hwr_training_navi_pane_g1

0xec14,	// (0x0008e1dc) hwr_training_navi_pane_g2_ParamLimits

0xec14,	// (0x0008e1dc) hwr_training_navi_pane_g2

0xec26,	// (0x0008e1ee) hwr_training_navi_pane_g3_ParamLimits

0xec26,	// (0x0008e1ee) hwr_training_navi_pane_g3

0xec36,	// (0x0008e1fe) hwr_training_navi_pane_g4_ParamLimits

0xec36,	// (0x0008e1fe) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x0008ee69) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x0008ee69) hwr_training_navi_pane_g

0xec43,	// (0x0008e20b) hwr_training_navi_pane_t1

0x7648,	// (0x00086c10) list_single_hwr_training_instruct_pane_ParamLimits

0x7648,	// (0x00086c10) list_single_hwr_training_instruct_pane

0xd055,	// (0x0008c61d) list_single_hwr_training_instruct_pane_t1

0xc7a0,	// (0x0008bd68) bg_frame_shadow_pane_g1

0xd064,	// (0x0008c62c) bg_frame_shadow_pane_g2

0xd06c,	// (0x0008c634) bg_frame_shadow_pane_g3

0xd074,	// (0x0008c63c) bg_frame_shadow_pane_g4

0xd07c,	// (0x0008c644) bg_frame_shadow_pane_g5

0xd084,	// (0x0008c64c) bg_frame_shadow_pane_g6

0xd08c,	// (0x0008c654) bg_frame_shadow_pane_g7

0xb4f1,	// (0x0008aab9) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x0008ee74) bg_frame_shadow_pane_g

0xac0c,	// (0x0008a1d4) main_video_tele_dialer_pane

0x7660,	// (0x00086c28) aid_size_cell_video_keypad_ParamLimits

0x7660,	// (0x00086c28) aid_size_cell_video_keypad

0x767a,	// (0x00086c42) grid_video_dialer_keypad_pane_ParamLimits

0x767a,	// (0x00086c42) grid_video_dialer_keypad_pane

0x76bc,	// (0x00086c84) video_down_pane_cp_ParamLimits

0x76bc,	// (0x00086c84) video_down_pane_cp

0x76ec,	// (0x00086cb4) cell_video_dialer_keypad_pane_ParamLimits

0x76ec,	// (0x00086cb4) cell_video_dialer_keypad_pane

0xd094,	// (0x0008c65c) bg_button_pane_cp08_ParamLimits

0xd094,	// (0x0008c65c) bg_button_pane_cp08

0x770e,	// (0x00086cd6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x770e,	// (0x00086cd6) cell_video_dialer_keypad_pane_g1

0x6e08,	// (0x000863d0) mup3_rocker2_pane_ParamLimits

0x6e08,	// (0x000863d0) mup3_rocker2_pane

0xc860,	// (0x0008be28) mup3_rocker2_pane_g1

0x5b55,	// (0x0008511d) main_dialer2_pane

0xac0c,	// (0x0008a1d4) main_mp4_pane

0xec59,	// (0x0008e221) main_mp4_pane_g1_ParamLimits

0xec59,	// (0x0008e221) main_mp4_pane_g1

0xec59,	// (0x0008e221) main_mp4_pane_g2_ParamLimits

0xec59,	// (0x0008e221) main_mp4_pane_g2

0x7749,	// (0x00086d11) main_mp4_pane_g3_ParamLimits

0x7749,	// (0x00086d11) main_mp4_pane_g3

0xec67,	// (0x0008e22f) main_mp4_pane_g4_ParamLimits

0xec67,	// (0x0008e22f) main_mp4_pane_g4

0xec95,	// (0x0008e25d) main_mp4_pane_g5_ParamLimits

0xec95,	// (0x0008e25d) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x0008ee94) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x0008ee94) main_mp4_pane_g

0xecf1,	// (0x0008e2b9) main_mp4_pane_t1_ParamLimits

0xecf1,	// (0x0008e2b9) main_mp4_pane_t1

0xed49,	// (0x0008e311) main_mp4_pane_t2_ParamLimits

0xed49,	// (0x0008e311) main_mp4_pane_t2

0xd0a0,	// (0x0008c668) main_mp4_pane_t3_ParamLimits

0xd0a0,	// (0x0008c668) main_mp4_pane_t3

0xed9b,	// (0x0008e363) main_mp4_pane_t4_ParamLimits

0xed9b,	// (0x0008e363) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x0008eea1) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x0008eea1) main_mp4_pane_t

0xeddb,	// (0x0008e3a3) mp4_progress_pane_ParamLimits

0xeddb,	// (0x0008e3a3) mp4_progress_pane

0xee1f,	// (0x0008e3e7) mp4_rocker_pane_ParamLimits

0xee1f,	// (0x0008e3e7) mp4_rocker_pane

0xd0ce,	// (0x0008c696) mp4_progress_pane_t1

0xd0e5,	// (0x0008c6ad) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x0008eeaa) mp4_progress_pane_t

0xd0fc,	// (0x0008c6c4) mup_progress_pane_cp04

0xd108,	// (0x0008c6d0) mp4_rocker_pane_g1

0x7779,	// (0x00086d41) aid_cell_size_keypad2_ParamLimits

0x7779,	// (0x00086d41) aid_cell_size_keypad2

0x7793,	// (0x00086d5b) dialer2_ne_pane_ParamLimits

0x7793,	// (0x00086d5b) dialer2_ne_pane

0x77a8,	// (0x00086d70) grid_dialer2_keypad_pane_ParamLimits

0x77a8,	// (0x00086d70) grid_dialer2_keypad_pane

0xc64d,	// (0x0008bc15) bg_popup_call_pane_cp07_ParamLimits

0xc64d,	// (0x0008bc15) bg_popup_call_pane_cp07

0x77be,	// (0x00086d86) dialer2_ne_pane_t1_ParamLimits

0x77be,	// (0x00086d86) dialer2_ne_pane_t1

0x77fb,	// (0x00086dc3) cell_dialer2_keypad_pane_ParamLimits

0x77fb,	// (0x00086dc3) cell_dialer2_keypad_pane

0xd124,	// (0x0008c6ec) bg_button_pane_pane_cp04_ParamLimits

0xd124,	// (0x0008c6ec) bg_button_pane_pane_cp04

0x781d,	// (0x00086de5) cell_dialer2_keypad_pane_g1_ParamLimits

0x781d,	// (0x00086de5) cell_dialer2_keypad_pane_g1

0x3eb5,	// (0x0008347d) aid_placing_vt_set_content_ParamLimits

0x3eb5,	// (0x0008347d) aid_placing_vt_set_content

0x3ed7,	// (0x0008349f) aid_placing_vt_set_title_ParamLimits

0x3ed7,	// (0x0008349f) aid_placing_vt_set_title

0xac0c,	// (0x0008a1d4) main_image3_pane

0x78ac,	// (0x00086e74) area_side_right_pane_cp01_ParamLimits

0x78ac,	// (0x00086e74) area_side_right_pane_cp01

0xec59,	// (0x0008e221) main_image3_pane_g1_ParamLimits

0xec59,	// (0x0008e221) main_image3_pane_g1

0x78c3,	// (0x00086e8b) main_image3_pane_g2_ParamLimits

0x78c3,	// (0x00086e8b) main_image3_pane_g2

0x78e9,	// (0x00086eb1) main_image3_pane_g3_ParamLimits

0x78e9,	// (0x00086eb1) main_image3_pane_g3

0x790f,	// (0x00086ed7) main_image3_pane_g4_ParamLimits

0x790f,	// (0x00086ed7) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x0008eeb9) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x0008eeb9) main_image3_pane_g

0x7935,	// (0x00086efd) main_image3_pane_t1_ParamLimits

0x7935,	// (0x00086efd) main_image3_pane_t1

0x798d,	// (0x00086f55) main_image3_pane_t2_ParamLimits

0x798d,	// (0x00086f55) main_image3_pane_t2

0x79df,	// (0x00086fa7) main_image3_pane_t3_ParamLimits

0x79df,	// (0x00086fa7) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x0008eec2) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x0008eec2) main_image3_pane_t

0x206a,	// (0x00081632) grid_sctrl_middle_pane_cp01_ParamLimits

0x206a,	// (0x00081632) grid_sctrl_middle_pane_cp01

0x7a5f,	// (0x00087027) cell_sctrl_middle_pane_cp01_ParamLimits

0x7a5f,	// (0x00087027) cell_sctrl_middle_pane_cp01

0x7a7c,	// (0x00087044) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7a7c,	// (0x00087044) cell_sctrl_middle_pane_cp01_g1

0xac0c,	// (0x0008a1d4) main_call4_pane

0x7a92,	// (0x0008705a) aid_size_button_call4_ParamLimits

0x7a92,	// (0x0008705a) aid_size_button_call4

0x7abf,	// (0x00087087) call4_windows_pane_ParamLimits

0x7abf,	// (0x00087087) call4_windows_pane

0x7ad5,	// (0x0008709d) grid_call4_button_pane_ParamLimits

0x7ad5,	// (0x0008709d) grid_call4_button_pane

0xd148,	// (0x0008c710) call4_windows_conf_pane

0x7af4,	// (0x000870bc) popup_call4_audio_first_window_ParamLimits

0x7af4,	// (0x000870bc) popup_call4_audio_first_window

0x7b14,	// (0x000870dc) popup_call4_audio_second_window_ParamLimits

0x7b14,	// (0x000870dc) popup_call4_audio_second_window

0xd17b,	// (0x0008c743) popup_call4_audio_wait_window_ParamLimits

0xd17b,	// (0x0008c743) popup_call4_audio_wait_window

0x7b26,	// (0x000870ee) cell_call4_button_pane_ParamLimits

0x7b26,	// (0x000870ee) cell_call4_button_pane

0x7b4b,	// (0x00087113) bg_button_pane_cp09_ParamLimits

0x7b4b,	// (0x00087113) bg_button_pane_cp09

0x7b57,	// (0x0008711f) cell_call4_button_pane_g1_ParamLimits

0x7b57,	// (0x0008711f) cell_call4_button_pane_g1

0x7b7d,	// (0x00087145) cell_call4_button_pane_t1_ParamLimits

0x7b7d,	// (0x00087145) cell_call4_button_pane_t1

0xd1c1,	// (0x0008c789) popup_call4_audio_conf_window_ParamLimits

0xd1c1,	// (0x0008c789) popup_call4_audio_conf_window

0x6e62,	// (0x0008642a) mup3_progress_pane_t1_ParamLimits

0x6e78,	// (0x00086440) mup3_progress_pane_t2_ParamLimits

0xcb7e,	// (0x0008c146) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x0008ed9b) mup3_progress_pane_t_ParamLimits

0xcb95,	// (0x0008c15d) mup_progress_pane_cp03_ParamLimits

0x7452,	// (0x00086a1a) mup3_control_keys_pane_g4_copy1

0xee09,	// (0x0008e3d1) mp4_rocker2_pane_ParamLimits

0xee09,	// (0x0008e3d1) mp4_rocker2_pane

0xd1d5,	// (0x0008c79d) mp4_rocker2_pane_g1

0xd1dd,	// (0x0008c7a5) mp4_rocker2_pane_g2

0xee6f,	// (0x0008e437) mp4_rocker2_pane_g3

0xee77,	// (0x0008e43f) mp4_rocker2_pane_g4

0xee7f,	// (0x0008e447) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x0008eecb) mp4_rocker2_pane_g

0xac0c,	// (0x0008a1d4) main_camera4_pane

0xac0c,	// (0x0008a1d4) main_video4_pane

0x768e,	// (0x00086c56) main_video_tele_dialer_pane_t1_ParamLimits

0x768e,	// (0x00086c56) main_video_tele_dialer_pane_t1

0x76a5,	// (0x00086c6d) main_video_tele_dialer_pane_t2_ParamLimits

0x76a5,	// (0x00086c6d) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x0008ee85) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x0008ee85) main_video_tele_dialer_pane_t

0x7bbb,	// (0x00087183) cam4_autofocus_pane_ParamLimits

0x7bbb,	// (0x00087183) cam4_autofocus_pane

0x7bcf,	// (0x00087197) cam4_image_uncrop_pane_ParamLimits

0x7bcf,	// (0x00087197) cam4_image_uncrop_pane

0x7be6,	// (0x000871ae) cam4_indicators_pane_ParamLimits

0x7be6,	// (0x000871ae) cam4_indicators_pane

0x7c0a,	// (0x000871d2) main_camera4_pane_g1_ParamLimits

0x7c0a,	// (0x000871d2) main_camera4_pane_g1

0x7c16,	// (0x000871de) main_camera4_pane_g2_ParamLimits

0x7c16,	// (0x000871de) main_camera4_pane_g2

0x7c16,	// (0x000871de) main_camera4_pane_g3_ParamLimits

0x7c16,	// (0x000871de) main_camera4_pane_g3

0x7c22,	// (0x000871ea) main_camera4_pane_g4_ParamLimits

0x7c22,	// (0x000871ea) main_camera4_pane_g4

0x7c2e,	// (0x000871f6) main_camera4_pane_g5_ParamLimits

0x7c2e,	// (0x000871f6) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x0008eed6) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x0008eed6) main_camera4_pane_g

0x7c4b,	// (0x00087213) main_camera4_pane_t1_ParamLimits

0x7c4b,	// (0x00087213) main_camera4_pane_t1

0xeea1,	// (0x0008e469) bg_tb_trans_pane_cp06

0xeeb7,	// (0x0008e47f) cam4_indicators_pane_g1

0xeec7,	// (0x0008e48f) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x0008eef1) cam4_indicators_pane_g

0xeee7,	// (0x0008e4af) cam4_indicators_pane_t1

0x7ca0,	// (0x00087268) main_video4_pane_g1_ParamLimits

0x7ca0,	// (0x00087268) main_video4_pane_g1

0x7cb2,	// (0x0008727a) main_video4_pane_g2_ParamLimits

0x7cb2,	// (0x0008727a) main_video4_pane_g2

0x7cb2,	// (0x0008727a) main_video4_pane_g3_ParamLimits

0x7cb2,	// (0x0008727a) main_video4_pane_g3

0x7cc1,	// (0x00087289) main_video4_pane_g4_ParamLimits

0x7cc1,	// (0x00087289) main_video4_pane_g4

0x0004,

0xf930,	// (0x0008eef8) main_video4_pane_g_ParamLimits

0xf930,	// (0x0008eef8) main_video4_pane_g

0x7cdf,	// (0x000872a7) vid4_indicators_pane_ParamLimits

0x7cdf,	// (0x000872a7) vid4_indicators_pane

0x7d07,	// (0x000872cf) video4_image_uncrop_cif_pane_ParamLimits

0x7d07,	// (0x000872cf) video4_image_uncrop_cif_pane

0x7d1f,	// (0x000872e7) video4_image_uncrop_nhd_pane_ParamLimits

0x7d1f,	// (0x000872e7) video4_image_uncrop_nhd_pane

0x7d33,	// (0x000872fb) video4_image_uncrop_vga_pane_ParamLimits

0x7d33,	// (0x000872fb) video4_image_uncrop_vga_pane

0xef09,	// (0x0008e4d1) bg_tb_trans_pane_cp07

0x7d4b,	// (0x00087313) vid4_indicators_pane_g1

0x7d58,	// (0x00087320) vid4_indicators_pane_g2

0x7d65,	// (0x0008732d) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x0008ef03) vid4_indicators_pane_g

0x7d8a,	// (0x00087352) vid4_indicators_pane_t1

0x7d9c,	// (0x00087364) cam4_autofocus_pane_g1

0x7da4,	// (0x0008736c) cam4_autofocus_pane_g2

0x7dac,	// (0x00087374) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x0008ef0e) cam4_autofocus_pane_g

0x7db4,	// (0x0008737c) cam4_autofocus_pane_g3_copy1

0x76d0,	// (0x00086c98) video_down_pane_cp_t1

0x76de,	// (0x00086ca6) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x0008ee8a) video_down_pane_cp_t

0x206a,	// (0x00081632) popup_vitu2_window_ParamLimits

0x206a,	// (0x00081632) popup_vitu2_window

0x7dbc,	// (0x00087384) aid_size_cell2_itu2_ParamLimits

0x7dbc,	// (0x00087384) aid_size_cell2_itu2

0x7de2,	// (0x000873aa) aid_size_cell_itu2_ParamLimits

0x7de2,	// (0x000873aa) aid_size_cell_itu2

0x7e34,	// (0x000873fc) bg_popup_window_pane_cp09_ParamLimits

0x7e34,	// (0x000873fc) bg_popup_window_pane_cp09

0x7e42,	// (0x0008740a) field_vitu2_entry_pane_ParamLimits

0x7e42,	// (0x0008740a) field_vitu2_entry_pane

0x7e5c,	// (0x00087424) grid_vitu2_function_pane_ParamLimits

0x7e5c,	// (0x00087424) grid_vitu2_function_pane

0x7e97,	// (0x0008745f) grid_vitu2_itu_pane_ParamLimits

0x7e97,	// (0x0008745f) grid_vitu2_itu_pane

0x7efc,	// (0x000874c4) cell_vitu2_itu_pane_ParamLimits

0x7efc,	// (0x000874c4) cell_vitu2_itu_pane

0x7f1e,	// (0x000874e6) cell_vitu2_function_pane_ParamLimits

0x7f1e,	// (0x000874e6) cell_vitu2_function_pane

0xd1e5,	// (0x0008c7ad) bg_popup_call_pane_cp08_ParamLimits

0xd1e5,	// (0x0008c7ad) bg_popup_call_pane_cp08

0xd1fe,	// (0x0008c7c6) field_vitu2_entry_pane_g1

0xd20a,	// (0x0008c7d2) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x0008ef15) field_vitu2_entry_pane_g

0xd224,	// (0x0008c7ec) field_vitu2_entry_pane_t1_ParamLimits

0xd224,	// (0x0008c7ec) field_vitu2_entry_pane_t1

0xd23f,	// (0x0008c807) field_vitu2_entry_pane_t2_ParamLimits

0xd23f,	// (0x0008c807) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x0008ef1c) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x0008ef1c) field_vitu2_entry_pane_t

0x7f5d,	// (0x00087525) bg_button_pane_cp010_ParamLimits

0x7f5d,	// (0x00087525) bg_button_pane_cp010

0x7f6b,	// (0x00087533) cell_vitu2_itu_pane_g1

0x7f89,	// (0x00087551) cell_vitu2_itu_pane_t1_ParamLimits

0x7f89,	// (0x00087551) cell_vitu2_itu_pane_t1

0x2f67,	// (0x0008252f) cell_vitu2_itu_pane_t2_ParamLimits

0x2f67,	// (0x0008252f) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x0008ef26) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x0008ef26) cell_vitu2_itu_pane_t

0xef17,	// (0x0008e4df) bg_button_pane_cp011

0x7fef,	// (0x000875b7) cell_vitu2_function_pane_g1

0xac0c,	// (0x0008a1d4) main_myfav_hc_pane

0x7a2b,	// (0x00086ff3) popup_image3_note_pane_ParamLimits

0x7a2b,	// (0x00086ff3) popup_image3_note_pane

0x7a45,	// (0x0008700d) popup_image3_tool_bar_pane_ParamLimits

0x7a45,	// (0x0008700d) popup_image3_tool_bar_pane

0x2feb,	// (0x000825b3) cell_vitu2_itu_pane_t3_ParamLimits

0x2feb,	// (0x000825b3) cell_vitu2_itu_pane_t3

0xac0c,	// (0x0008a1d4) bg_popup_trans_pane

0xd264,	// (0x0008c82c) grid_image3_tool_bar_pane

0xd26e,	// (0x0008c836) bg_popup_trans_pane_g1

0xb994,	// (0x0008af5c) bg_popup_trans_pane_g2

0xd276,	// (0x0008c83e) bg_popup_trans_pane_g3

0xd27e,	// (0x0008c846) bg_popup_trans_pane_g4

0xd286,	// (0x0008c84e) bg_popup_trans_pane_g5

0xd28e,	// (0x0008c856) bg_popup_trans_pane_g6

0xd296,	// (0x0008c85e) bg_popup_trans_pane_g7

0xd29e,	// (0x0008c866) bg_popup_trans_pane_g8

0xb974,	// (0x0008af3c) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x0008ef2d) bg_popup_trans_pane_g

0x2084,	// (0x0008164c) cell_image3_tool_bar_pane_ParamLimits

0x2084,	// (0x0008164c) cell_image3_tool_bar_pane

0xc860,	// (0x0008be28) cell_image3_tool_bar_pane_g1

0xac0c,	// (0x0008a1d4) bg_popup_trans_pane_cp1

0xd2a6,	// (0x0008c86e) popup_image3_note_pane_t1

0xd2b4,	// (0x0008c87c) popup_image3_note_pane_t2

0xd2c2,	// (0x0008c88a) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x0008ef40) popup_image3_note_pane_t

0xd2d0,	// (0x0008c898) popup_image3_note_pane_t3_copy1

0x8003,	// (0x000875cb) bg_myfav_hc_instruction_pane_ParamLimits

0x8003,	// (0x000875cb) bg_myfav_hc_instruction_pane

0x8015,	// (0x000875dd) cell_myfav_contact_pane_ParamLimits

0x8015,	// (0x000875dd) cell_myfav_contact_pane

0x802f,	// (0x000875f7) cell_myfav_contact_pane_cp1_ParamLimits

0x802f,	// (0x000875f7) cell_myfav_contact_pane_cp1

0x8045,	// (0x0008760d) cell_myfav_contact_pane_cp2_ParamLimits

0x8045,	// (0x0008760d) cell_myfav_contact_pane_cp2

0x805b,	// (0x00087623) cell_myfav_contact_pane_cp3_ParamLimits

0x805b,	// (0x00087623) cell_myfav_contact_pane_cp3

0x8070,	// (0x00087638) cell_myfav_contact_pane_cp4_ParamLimits

0x8070,	// (0x00087638) cell_myfav_contact_pane_cp4

0x8084,	// (0x0008764c) cell_myfav_contact_pane_cp5_ParamLimits

0x8084,	// (0x0008764c) cell_myfav_contact_pane_cp5

0x8098,	// (0x00087660) cell_myfav_contact_pane_cp6_ParamLimits

0x8098,	// (0x00087660) cell_myfav_contact_pane_cp6

0x80ac,	// (0x00087674) cell_myfav_contact_pane_cp7_ParamLimits

0x80ac,	// (0x00087674) cell_myfav_contact_pane_cp7

0xd2de,	// (0x0008c8a6) listscroll_gen_pane_cp05

0x80c4,	// (0x0008768c) main_myfav_hc_pane_g1_ParamLimits

0x80c4,	// (0x0008768c) main_myfav_hc_pane_g1

0x80da,	// (0x000876a2) main_myfav_hc_pane_g2_ParamLimits

0x80da,	// (0x000876a2) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x0008ef47) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x0008ef47) main_myfav_hc_pane_g

0x8104,	// (0x000876cc) main_myfav_hc_pane_t1_ParamLimits

0x8104,	// (0x000876cc) main_myfav_hc_pane_t1

0xd2e7,	// (0x0008c8af) main_myfav_hc_pane_t2_ParamLimits

0xd2e7,	// (0x0008c8af) main_myfav_hc_pane_t2

0xd2f9,	// (0x0008c8c1) main_myfav_hc_pane_t3_ParamLimits

0xd2f9,	// (0x0008c8c1) main_myfav_hc_pane_t3

0x8119,	// (0x000876e1) main_myfav_hc_pane_t4_ParamLimits

0x8119,	// (0x000876e1) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x0008ef4e) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x0008ef4e) main_myfav_hc_pane_t

0xc860,	// (0x0008be28) bg_myfav_hc_instruction_pane_g1

0xd30b,	// (0x0008c8d3) cell_myfav_contact_pane_g1_ParamLimits

0xd30b,	// (0x0008c8d3) cell_myfav_contact_pane_g1

0xd30b,	// (0x0008c8d3) cell_myfav_contact_pane_g2_ParamLimits

0xd30b,	// (0x0008c8d3) cell_myfav_contact_pane_g2

0xd317,	// (0x0008c8df) cell_myfav_contact_pane_g3_ParamLimits

0xd317,	// (0x0008c8df) cell_myfav_contact_pane_g3

0xcb68,	// (0x0008c130) cell_myfav_contact_pane_g4_ParamLimits

0xcb68,	// (0x0008c130) cell_myfav_contact_pane_g4

0xd324,	// (0x0008c8ec) cell_myfav_contact_pane_g5_ParamLimits

0xd324,	// (0x0008c8ec) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x0008ef59) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x0008ef59) cell_myfav_contact_pane_g

0x80f0,	// (0x000876b8) main_myfav_hc_pane_g3_ParamLimits

0x80f0,	// (0x000876b8) main_myfav_hc_pane_g3

0x3196,	// (0x0008275e) popup_adpt_find_window

0x813d,	// (0x00087705) afind_page_pane_ParamLimits

0x813d,	// (0x00087705) afind_page_pane

0x8152,	// (0x0008771a) aid_size_cell_afind_ParamLimits

0x8152,	// (0x0008771a) aid_size_cell_afind

0x8170,	// (0x00087738) bg_popup_sub_pane_cp09_ParamLimits

0x8170,	// (0x00087738) bg_popup_sub_pane_cp09

0x817d,	// (0x00087745) find_pane_cp01_ParamLimits

0x817d,	// (0x00087745) find_pane_cp01

0xd330,	// (0x0008c8f8) grid_afind_control_pane_ParamLimits

0xd330,	// (0x0008c8f8) grid_afind_control_pane

0x818a,	// (0x00087752) grid_afind_pane_ParamLimits

0x818a,	// (0x00087752) grid_afind_pane

0x81a8,	// (0x00087770) cell_afind_pane_ParamLimits

0x81a8,	// (0x00087770) cell_afind_pane

0xc860,	// (0x0008be28) afind_page_pane_g1

0x81f5,	// (0x000877bd) afind_page_pane_g2

0x81fe,	// (0x000877c6) afind_page_pane_g3

0x0002,

0xf99c,	// (0x0008ef64) afind_page_pane_g

0x8207,	// (0x000877cf) afind_page_pane_t1

0xd344,	// (0x0008c90c) cell_afind_grid_control_pane_ParamLimits

0xd344,	// (0x0008c90c) cell_afind_grid_control_pane

0xd124,	// (0x0008c6ec) bg_button_pane_cp69_ParamLimits

0xd124,	// (0x0008c6ec) bg_button_pane_cp69

0x8227,	// (0x000877ef) cell_afind_pane_g1_ParamLimits

0x8227,	// (0x000877ef) cell_afind_pane_g1

0x8234,	// (0x000877fc) cell_afind_pane_t1_ParamLimits

0x8234,	// (0x000877fc) cell_afind_pane_t1

0xb6e0,	// (0x0008aca8) bg_button_pane_cp72

0xd353,	// (0x0008c91b) cell_afind_grid_control_pane_g1

0x56f7,	// (0x00084cbf) aid_image_placing_area_ParamLimits

0x56f7,	// (0x00084cbf) aid_image_placing_area

0xcdf4,	// (0x0008c3bc) field_vitu_entry_pane_g1_ParamLimits

0xcdf4,	// (0x0008c3bc) field_vitu_entry_pane_g1

0xce00,	// (0x0008c3c8) field_vitu_entry_pane_g2_ParamLimits

0xce00,	// (0x0008c3c8) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x0008ee15) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x0008ee15) field_vitu_entry_pane_g

0x7505,	// (0x00086acd) cell_vitu_itu_pane_g1_ParamLimits

0x7547,	// (0x00086b0f) cell_vitu_itu_pane_t3_ParamLimits

0x7547,	// (0x00086b0f) cell_vitu_itu_pane_t3

0xd0ce,	// (0x0008c696) mp4_progress_pane_t1_ParamLimits

0xd0e5,	// (0x0008c6ad) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x0008eeaa) mp4_progress_pane_t_ParamLimits

0xd0fc,	// (0x0008c6c4) mup_progress_pane_cp04_ParamLimits

0x812b,	// (0x000876f3) main_myfav_hc_pane_t5_ParamLimits

0x812b,	// (0x000876f3) main_myfav_hc_pane_t5

0xac2e,	// (0x0008a1f6) aid_zoom_text_primary

0x3196,	// (0x0008275e) popup_adpt_find_window_ParamLimits

0x206a,	// (0x00081632) main_cam_set_pane

0x7bf8,	// (0x000871c0) cam4_zoom_pane_ParamLimits

0x7bf8,	// (0x000871c0) cam4_zoom_pane

0x8246,	// (0x0008780e) main_cam_set_pane_g1_ParamLimits

0x8246,	// (0x0008780e) main_cam_set_pane_g1

0x8254,	// (0x0008781c) main_cam_set_pane_g2_ParamLimits

0x8254,	// (0x0008781c) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x0008ef6b) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x0008ef6b) main_cam_set_pane_g

0x8273,	// (0x0008783b) main_cam_set_pane_t1_ParamLimits

0x8273,	// (0x0008783b) main_cam_set_pane_t1

0x8285,	// (0x0008784d) main_cset_listscroll_pane_ParamLimits

0x8285,	// (0x0008784d) main_cset_listscroll_pane

0x82a3,	// (0x0008786b) main_cset_slider_pane_ParamLimits

0x82a3,	// (0x0008786b) main_cset_slider_pane

0xd364,	// (0x0008c92c) main_cset_list_pane_ParamLimits

0xd364,	// (0x0008c92c) main_cset_list_pane

0xd374,	// (0x0008c93c) scroll_pane_cp028

0x82c7,	// (0x0008788f) aid_area_touch_slider

0x82e3,	// (0x000878ab) cset_slider_pane

0x830d,	// (0x000878d5) main_cset_slider_pane_g1

0x8322,	// (0x000878ea) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x0008ef70) main_cset_slider_pane_g

0xd3ad,	// (0x0008c975) main_cset_slider_pane_t1

0x83de,	// (0x000879a6) main_cset_slider_pane_t2

0x83f8,	// (0x000879c0) main_cset_slider_pane_t3

0x8412,	// (0x000879da) main_cset_slider_pane_t4

0x842c,	// (0x000879f4) main_cset_slider_pane_t5

0x8446,	// (0x00087a0e) main_cset_slider_pane_t6

0x845b,	// (0x00087a23) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x0008ef95) main_cset_slider_pane_t

0x855f,	// (0x00087b27) cset_list_set_pane_ParamLimits

0x855f,	// (0x00087b27) cset_list_set_pane

0x8570,	// (0x00087b38) aid_position_infowindow_above

0x8578,	// (0x00087b40) aid_position_infowindow_below

0x8580,	// (0x00087b48) cset_list_set_pane_g1_ParamLimits

0x8580,	// (0x00087b48) cset_list_set_pane_g1

0xd44d,	// (0x0008ca15) cset_list_set_pane_g3_ParamLimits

0xd44d,	// (0x0008ca15) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x0008efb4) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x0008efb4) cset_list_set_pane_g

0xd45c,	// (0x0008ca24) cset_list_set_pane_t1_ParamLimits

0xd45c,	// (0x0008ca24) cset_list_set_pane_t1

0x206a,	// (0x00081632) list_highlight_pane_cp021_ParamLimits

0x206a,	// (0x00081632) list_highlight_pane_cp021

0x1169,	// (0x00080731) cset_slider_pane_g1

0x117b,	// (0x00080743) cset_slider_pane_g2

0x1172,	// (0x0008073a) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x0008efb9) cset_slider_pane_g

0xef25,	// (0x0008e4ed) aid_area_touch_cam4_zoom

0xef2d,	// (0x0008e4f5) cam4_zoom_cont_pane

0xef35,	// (0x0008e4fd) cam4_zoom_pane_g1

0xef3d,	// (0x0008e505) cam4_zoom_pane_g2

0x858c,	// (0x00087b54) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x0008efc0) cam4_zoom_pane_g

0xef45,	// (0x0008e50d) cam4_zoom_cont_pane_g1

0xef4e,	// (0x0008e516) cam4_zoom_cont_pane_g2

0xef57,	// (0x0008e51f) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x0008efc7) cam4_zoom_cont_pane_g

0x7ab0,	// (0x00087078) call4_image_pane_ParamLimits

0x7ab0,	// (0x00087078) call4_image_pane

0xd148,	// (0x0008c710) call4_windows_conf_pane_ParamLimits

0xd15b,	// (0x0008c723) popup_call4_audio_in_window_ParamLimits

0xd15b,	// (0x0008c723) popup_call4_audio_in_window

0xac0c,	// (0x0008a1d4) bg_popup_call2_act_pane_cp02

0xd1b9,	// (0x0008c781) call4_list_conf_pane

0xc860,	// (0x0008be28) call4_image_pane_g1

0xc860,	// (0x0008be28) call4_image_pane_g2

0x0001,

0xf713,	// (0x0008ecdb) call4_image_pane_g

0xd471,	// (0x0008ca39) list_single_graphic_popup_conf4_pane_ParamLimits

0xd471,	// (0x0008ca39) list_single_graphic_popup_conf4_pane

0xac0c,	// (0x0008a1d4) list_highlight_pane_cp022

0xd484,	// (0x0008ca4c) list_single_graphic_popup_conf4_pane_g1

0x0dce,	// (0x00080396) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x0008efce) list_single_graphic_popup_conf4_pane_g

0xd48c,	// (0x0008ca54) list_single_graphic_popup_conf4_pane_t1

0x3fe1,	// (0x000835a9) popup_vtel_slider_window_ParamLimits

0x3fe1,	// (0x000835a9) popup_vtel_slider_window

0xd112,	// (0x0008c6da) dialer2_ne_pane_t2_ParamLimits

0xd112,	// (0x0008c6da) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x0008eeaf) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x0008eeaf) dialer2_ne_pane_t

0xc64d,	// (0x0008bc15) bg_popup_sub_pane_cp010_ParamLimits

0xc64d,	// (0x0008bc15) bg_popup_sub_pane_cp010

0x8594,	// (0x00087b5c) popup_vtel_slider_window_g1_ParamLimits

0x8594,	// (0x00087b5c) popup_vtel_slider_window_g1

0x85a7,	// (0x00087b6f) popup_vtel_slider_window_g2_ParamLimits

0x85a7,	// (0x00087b6f) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x0008efd3) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x0008efd3) popup_vtel_slider_window_g

0x85fb,	// (0x00087bc3) vtel_slider_pane_ParamLimits

0x85fb,	// (0x00087bc3) vtel_slider_pane

0x861d,	// (0x00087be5) vtel_slider_pane_g1_ParamLimits

0x861d,	// (0x00087be5) vtel_slider_pane_g1

0x8631,	// (0x00087bf9) vtel_slider_pane_g2_ParamLimits

0x8631,	// (0x00087bf9) vtel_slider_pane_g2

0x8649,	// (0x00087c11) vtel_slider_pane_g3_ParamLimits

0x8649,	// (0x00087c11) vtel_slider_pane_g3

0x861d,	// (0x00087be5) vtel_slider_pane_g4_ParamLimits

0x861d,	// (0x00087be5) vtel_slider_pane_g4

0x865f,	// (0x00087c27) vtel_slider_pane_g5_ParamLimits

0x865f,	// (0x00087c27) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x0008efdc) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x0008efdc) vtel_slider_pane_g

0xac0c,	// (0x0008a1d4) main_gallery2_pane

0x7e0e,	// (0x000873d6) aid_size_row_itut2_dropdow_list_ParamLimits

0x7e0e,	// (0x000873d6) aid_size_row_itut2_dropdow_list

0x7e78,	// (0x00087440) grid_vitu2_function_top_pane_ParamLimits

0x7e78,	// (0x00087440) grid_vitu2_function_top_pane

0x7ebb,	// (0x00087483) popup_vitu2_dropdown_list_window_ParamLimits

0x7ebb,	// (0x00087483) popup_vitu2_dropdown_list_window

0x7eda,	// (0x000874a2) popup_vitu2_match_list_window

0x8675,	// (0x00087c3d) cell_vitu2_function_top_pane_ParamLimits

0x8675,	// (0x00087c3d) cell_vitu2_function_top_pane

0x8695,	// (0x00087c5d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8695,	// (0x00087c5d) cell_vitu2_function_top_pane_cp01

0x86b5,	// (0x00087c7d) cell_vitu2_function_top_wide_pane_ParamLimits

0x86b5,	// (0x00087c7d) cell_vitu2_function_top_wide_pane

0xef17,	// (0x0008e4df) bg_button_pane_cp012

0x86d3,	// (0x00087c9b) cell_vitu2_function_top_pane_g1

0xef60,	// (0x0008e528) bg_button_pane_cp013_ParamLimits

0xef60,	// (0x0008e528) bg_button_pane_cp013

0x86e7,	// (0x00087caf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x86e7,	// (0x00087caf) cell_vitu2_function_top_wide_pane_g1

0xef17,	// (0x0008e4df) bg_popup_sub_pane_cp20

0x86ff,	// (0x00087cc7) list_vitu2_match_list_pane

0xd26e,	// (0x0008c836) bg_popup_sub_pane_cp20_g1

0xd276,	// (0x0008c83e) bg_popup_sub_pane_cp20_g2

0xb994,	// (0x0008af5c) bg_popup_sub_pane_cp20_g3

0xd27e,	// (0x0008c846) bg_popup_sub_pane_cp20_g4

0xb974,	// (0x0008af3c) bg_popup_sub_pane_cp20_g5

0xd4b0,	// (0x0008ca78) bg_popup_sub_pane_cp20_g6

0xd28e,	// (0x0008c856) bg_popup_sub_pane_cp20_g7

0xd296,	// (0x0008c85e) bg_popup_sub_pane_cp20_g8

0xd29e,	// (0x0008c866) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x0008efe7) bg_popup_sub_pane_cp20_g

0xef7c,	// (0x0008e544) list_vitu2_match_list_item_pane_ParamLimits

0xef7c,	// (0x0008e544) list_vitu2_match_list_item_pane

0xef8e,	// (0x0008e556) list_vitu2_match_list_item_pane_t1

0xb3aa,	// (0x0008a972) bg_popup_sub_pane_cp21

0xef9c,	// (0x0008e564) grid_vitu2_dropdown_list_pane

0x8749,	// (0x00087d11) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8749,	// (0x00087d11) cell_vitu2_dropdown_list_char_pane

0x876a,	// (0x00087d32) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x876a,	// (0x00087d32) cell_vitu2_dropdown_list_ctrl_pane

0xd4b8,	// (0x0008ca80) cell_vitu2_dropdown_list_char_pane_g1

0xd4c1,	// (0x0008ca89) cell_vitu2_dropdown_list_char_pane_g2

0xd4ca,	// (0x0008ca92) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x0008f004) cell_vitu2_dropdown_list_char_pane_g

0x8796,	// (0x00087d5e) cell_vitu2_dropdown_list_char_pane_t1

0x87a4,	// (0x00087d6c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x87a4,	// (0x00087d6c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x87b1,	// (0x00087d79) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x87b1,	// (0x00087d79) cell_vitu2_dropdown_list_ctrl_pane_g2

0x87be,	// (0x00087d86) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x87be,	// (0x00087d86) cell_vitu2_dropdown_list_ctrl_pane_g3

0x87cb,	// (0x00087d93) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x87cb,	// (0x00087d93) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeea1,	// (0x0008e469) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeea1,	// (0x0008e469) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x0008f00b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x0008f00b) cell_vitu2_dropdown_list_ctrl_pane_g

0x87e7,	// (0x00087daf) aid_size_cell_gallery2_ParamLimits

0x87e7,	// (0x00087daf) aid_size_cell_gallery2

0x87fd,	// (0x00087dc5) grid_gallery2_pane_ParamLimits

0x87fd,	// (0x00087dc5) grid_gallery2_pane

0x880f,	// (0x00087dd7) scroll_pane_cp029_ParamLimits

0x880f,	// (0x00087dd7) scroll_pane_cp029

0x881b,	// (0x00087de3) cell_gallery2_pane_ParamLimits

0x881b,	// (0x00087de3) cell_gallery2_pane

0xd4d3,	// (0x0008ca9b) cell_gallery2_pane_g2

0x884d,	// (0x00087e15) cell_gallery2_pane_g3

0xd4dd,	// (0x0008caa5) cell_gallery2_pane_g4

0xd4e5,	// (0x0008caad) cell_gallery2_pane_g5

0x1033,	// (0x000805fb) grid_highlight_pane_cp10

0x7eda,	// (0x000874a2) popup_vitu2_match_list_window_ParamLimits

0x7eeb,	// (0x000874b3) popup_vitu2_query_window_ParamLimits

0x7eeb,	// (0x000874b3) popup_vitu2_query_window

0xb3aa,	// (0x0008a972) bg_vitu2_candi_button_pane

0xd4b8,	// (0x0008ca80) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4c1,	// (0x0008ca89) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4ca,	// (0x0008ca92) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8855,	// (0x00087e1d) bg_button_pane_cp015

0x8865,	// (0x00087e2d) bg_button_pane_cp016

0x8877,	// (0x00087e3f) bg_button_pane_cp017

0xc41d,	// (0x0008b9e5) bg_popup_sub_pane_cp22

0xd4ed,	// (0x0008cab5) popup_vitu2_query_window_g1

0x88b8,	// (0x00087e80) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x0008f016) popup_vitu2_query_window_g

0x88d3,	// (0x00087e9b) popup_vitu2_query_window_t1_ParamLimits

0x88d3,	// (0x00087e9b) popup_vitu2_query_window_t1

0x8906,	// (0x00087ece) popup_vitu2_query_window_t2_ParamLimits

0x8906,	// (0x00087ece) popup_vitu2_query_window_t2

0x8918,	// (0x00087ee0) popup_vitu2_query_window_t3_ParamLimits

0x8918,	// (0x00087ee0) popup_vitu2_query_window_t3

0x8940,	// (0x00087f08) popup_vitu2_query_window_t4_ParamLimits

0x8940,	// (0x00087f08) popup_vitu2_query_window_t4

0x895d,	// (0x00087f25) popup_vitu2_query_window_t5_ParamLimits

0x895d,	// (0x00087f25) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x0008f01d) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x0008f01d) popup_vitu2_query_window_t

0xd35c,	// (0x0008c924) main_cset_text_pane

0x82c7,	// (0x0008788f) aid_area_touch_slider_ParamLimits

0x82e3,	// (0x000878ab) cset_slider_pane_ParamLimits

0x830d,	// (0x000878d5) main_cset_slider_pane_g1_ParamLimits

0x8322,	// (0x000878ea) main_cset_slider_pane_g2_ParamLimits

0xd37d,	// (0x0008c945) main_cset_slider_pane_g3_ParamLimits

0xd37d,	// (0x0008c945) main_cset_slider_pane_g3

0x8337,	// (0x000878ff) main_cset_slider_pane_g4_ParamLimits

0x8337,	// (0x000878ff) main_cset_slider_pane_g4

0x8346,	// (0x0008790e) main_cset_slider_pane_g5_ParamLimits

0x8346,	// (0x0008790e) main_cset_slider_pane_g5

0x8352,	// (0x0008791a) main_cset_slider_pane_g6_ParamLimits

0x8352,	// (0x0008791a) main_cset_slider_pane_g6

0xf9a8,	// (0x0008ef70) main_cset_slider_pane_g_ParamLimits

0xd3ad,	// (0x0008c975) main_cset_slider_pane_t1_ParamLimits

0x83de,	// (0x000879a6) main_cset_slider_pane_t2_ParamLimits

0x83f8,	// (0x000879c0) main_cset_slider_pane_t3_ParamLimits

0x8412,	// (0x000879da) main_cset_slider_pane_t4_ParamLimits

0x842c,	// (0x000879f4) main_cset_slider_pane_t5_ParamLimits

0x8446,	// (0x00087a0e) main_cset_slider_pane_t6_ParamLimits

0x845b,	// (0x00087a23) main_cset_slider_pane_t7_ParamLimits

0x8485,	// (0x00087a4d) main_cset_slider_pane_t8_ParamLimits

0x8485,	// (0x00087a4d) main_cset_slider_pane_t8

0x84ad,	// (0x00087a75) main_cset_slider_pane_t9_ParamLimits

0x84ad,	// (0x00087a75) main_cset_slider_pane_t9

0x84d5,	// (0x00087a9d) main_cset_slider_pane_t10_ParamLimits

0x84d5,	// (0x00087a9d) main_cset_slider_pane_t10

0x84fd,	// (0x00087ac5) main_cset_slider_pane_t11_ParamLimits

0x84fd,	// (0x00087ac5) main_cset_slider_pane_t11

0x8525,	// (0x00087aed) main_cset_slider_pane_t12_ParamLimits

0x8525,	// (0x00087aed) main_cset_slider_pane_t12

0x8542,	// (0x00087b0a) main_cset_slider_pane_t13_ParamLimits

0x8542,	// (0x00087b0a) main_cset_slider_pane_t13

0xf9cd,	// (0x0008ef95) main_cset_slider_pane_t_ParamLimits

0xac0c,	// (0x0008a1d4) bg_popup_sub_pane_cp011

0xd4f9,	// (0x0008cac1) main_cset_text_pane_g1

0xd501,	// (0x0008cac9) main_cset_text_pane_t1

0xd50f,	// (0x0008cad7) main_cset_text_pane_t2

0xd51d,	// (0x0008cae5) main_cset_text_pane_t3

0xd52b,	// (0x0008caf3) main_cset_text_pane_t4

0xd539,	// (0x0008cb01) main_cset_text_pane_t5

0xd547,	// (0x0008cb0f) main_cset_text_pane_t6

0xd555,	// (0x0008cb1d) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0008f02c) main_cset_text_pane_t

0xac0c,	// (0x0008a1d4) main_cam4_burst_pane

0xac0c,	// (0x0008a1d4) main_cam5_pane

0x8215,	// (0x000877dd) bg_button_pane_cp019

0x821e,	// (0x000877e6) bg_button_pane_cp020

0xd389,	// (0x0008c951) main_cset_slider_pane_g7_ParamLimits

0xd389,	// (0x0008c951) main_cset_slider_pane_g7

0xd395,	// (0x0008c95d) main_cset_slider_pane_g8_ParamLimits

0xd395,	// (0x0008c95d) main_cset_slider_pane_g8

0x8366,	// (0x0008792e) main_cset_slider_pane_g9_ParamLimits

0x8366,	// (0x0008792e) main_cset_slider_pane_g9

0x8372,	// (0x0008793a) main_cset_slider_pane_g10_ParamLimits

0x8372,	// (0x0008793a) main_cset_slider_pane_g10

0x837e,	// (0x00087946) main_cset_slider_pane_g11_ParamLimits

0x837e,	// (0x00087946) main_cset_slider_pane_g11

0x838a,	// (0x00087952) main_cset_slider_pane_g12_ParamLimits

0x838a,	// (0x00087952) main_cset_slider_pane_g12

0x8396,	// (0x0008795e) main_cset_slider_pane_g13_ParamLimits

0x8396,	// (0x0008795e) main_cset_slider_pane_g13

0x83a2,	// (0x0008796a) main_cset_slider_pane_g14_ParamLimits

0x83a2,	// (0x0008796a) main_cset_slider_pane_g14

0x83ae,	// (0x00087976) main_cset_slider_pane_g15_ParamLimits

0x83ae,	// (0x00087976) main_cset_slider_pane_g15

0xd3db,	// (0x0008c9a3) main_cset_slider_pane_t14_ParamLimits

0xd3db,	// (0x0008c9a3) main_cset_slider_pane_t14

0xd414,	// (0x0008c9dc) main_cset_slider_pane_t15_ParamLimits

0xd414,	// (0x0008c9dc) main_cset_slider_pane_t15

0x89d0,	// (0x00087f98) aid_cam4_burst_size_cell_ParamLimits

0x89d0,	// (0x00087f98) aid_cam4_burst_size_cell

0x89f0,	// (0x00087fb8) grid_cam4_burst_pane_ParamLimits

0x89f0,	// (0x00087fb8) grid_cam4_burst_pane

0x8a16,	// (0x00087fde) linegrid_cam4_burst_pane_ParamLimits

0x8a16,	// (0x00087fde) linegrid_cam4_burst_pane

0x8a38,	// (0x00088000) scroll_pane_cp30_ParamLimits

0x8a38,	// (0x00088000) scroll_pane_cp30

0x8a44,	// (0x0008800c) cell_cam4_burst_pane_ParamLimits

0x8a44,	// (0x0008800c) cell_cam4_burst_pane

0xd563,	// (0x0008cb2b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd563,	// (0x0008cb2b) linegrid_cam4_burst_pane_g1

0x8a8b,	// (0x00088053) linegrid_cam4_burst_pane_g2_ParamLimits

0x8a8b,	// (0x00088053) linegrid_cam4_burst_pane_g2

0xd570,	// (0x0008cb38) linegrid_cam4_burst_pane_g3_ParamLimits

0xd570,	// (0x0008cb38) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0008f03b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0008f03b) linegrid_cam4_burst_pane_g

0x8a9c,	// (0x00088064) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8a9c,	// (0x00088064) linegrid_cam4_burst_pane_g3_copy1

0xd57d,	// (0x0008cb45) linegrid_cam4_burst_pane_g4_ParamLimits

0xd57d,	// (0x0008cb45) linegrid_cam4_burst_pane_g4

0x8ab6,	// (0x0008807e) linegrid_cam4_burst_pane_g5_ParamLimits

0x8ab6,	// (0x0008807e) linegrid_cam4_burst_pane_g5

0x8ac7,	// (0x0008808f) linegrid_cam4_burst_pane_g6_ParamLimits

0x8ac7,	// (0x0008808f) linegrid_cam4_burst_pane_g6

0xd58a,	// (0x0008cb52) linegrid_cam4_burst_pane_g7_ParamLimits

0xd58a,	// (0x0008cb52) linegrid_cam4_burst_pane_g7

0x8ad8,	// (0x000880a0) cell_cam4_burst_pane_g1

0xd5a3,	// (0x0008cb6b) main_cam5_pane_t1_ParamLimits

0xd5a3,	// (0x0008cb6b) main_cam5_pane_t1

0xd5b5,	// (0x0008cb7d) main_cam5_pane_t2_ParamLimits

0xd5b5,	// (0x0008cb7d) main_cam5_pane_t2

0xd5c7,	// (0x0008cb8f) main_cam5_pane_t3_ParamLimits

0xd5c7,	// (0x0008cb8f) main_cam5_pane_t3

0xd5d9,	// (0x0008cba1) main_cam5_pane_t4_ParamLimits

0xd5d9,	// (0x0008cba1) main_cam5_pane_t4

0xd5ef,	// (0x0008cbb7) main_cam5_pane_t5_ParamLimits

0xd5ef,	// (0x0008cbb7) main_cam5_pane_t5

0xd601,	// (0x0008cbc9) main_cam5_pane_t6_ParamLimits

0xd601,	// (0x0008cbc9) main_cam5_pane_t6

0xd613,	// (0x0008cbdb) main_cam5_pane_t7_ParamLimits

0xd613,	// (0x0008cbdb) main_cam5_pane_t7

0xd625,	// (0x0008cbed) main_cam5_pane_t8_ParamLimits

0xd625,	// (0x0008cbed) main_cam5_pane_t8

0xd641,	// (0x0008cc09) main_cam5_pane_t9_ParamLimits

0xd641,	// (0x0008cc09) main_cam5_pane_t9

0xd653,	// (0x0008cc1b) main_cam5_pane_t10_ParamLimits

0xd653,	// (0x0008cc1b) main_cam5_pane_t10

0xd665,	// (0x0008cc2d) main_cam5_pane_t11_ParamLimits

0xd665,	// (0x0008cc2d) main_cam5_pane_t11

0xd677,	// (0x0008cc3f) main_cam5_pane_t12_ParamLimits

0xd677,	// (0x0008cc3f) main_cam5_pane_t12

0xd68c,	// (0x0008cc54) main_cam5_pane_t13_ParamLimits

0xd68c,	// (0x0008cc54) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x0008f047) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x0008f047) main_cam5_pane_t

0x31f4,	// (0x000827bc) popup_scut_keymap_window_ParamLimits

0x31f4,	// (0x000827bc) popup_scut_keymap_window

0x8aed,	// (0x000880b5) aid_size_cell_brow_shortcut

0x1033,	// (0x000805fb) bg_popup_window_pane_cp010

0x8af9,	// (0x000880c1) grid_scut_pane

0x8b03,	// (0x000880cb) cell_scut_pane_ParamLimits

0x8b03,	// (0x000880cb) cell_scut_pane

0x8b18,	// (0x000880e0) cell_scut_pane_g1

0xd6a9,	// (0x0008cc71) cell_scut_pane_t1

0xd6b8,	// (0x0008cc80) cell_scut_pane_t2

0x8b21,	// (0x000880e9) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x0008f062) cell_scut_pane_t

0x6a91,	// (0x00086059) main_mup3_pane_g8_ParamLimits

0x6a91,	// (0x00086059) main_mup3_pane_g8

0x7e22,	// (0x000873ea) area_vitu2_query_pane_ParamLimits

0x7e22,	// (0x000873ea) area_vitu2_query_pane

0x8889,	// (0x00087e51) input_focus_pane_cp08

0xd6c7,	// (0x0008cc8f) area_vitu2_query_pane_g1

0x8b2f,	// (0x000880f7) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x0008f069) area_vitu2_query_pane_g

0x8b3e,	// (0x00088106) area_vitu2_query_pane_t1_ParamLimits

0x8b3e,	// (0x00088106) area_vitu2_query_pane_t1

0x8b50,	// (0x00088118) area_vitu2_query_pane_t2_ParamLimits

0x8b50,	// (0x00088118) area_vitu2_query_pane_t2

0x8b62,	// (0x0008812a) area_vitu2_query_pane_t3_ParamLimits

0x8b62,	// (0x0008812a) area_vitu2_query_pane_t3

0xd6d3,	// (0x0008cc9b) area_vitu2_query_pane_t4_ParamLimits

0xd6d3,	// (0x0008cc9b) area_vitu2_query_pane_t4

0xd6fb,	// (0x0008ccc3) area_vitu2_query_pane_t5_ParamLimits

0xd6fb,	// (0x0008ccc3) area_vitu2_query_pane_t5

0xd723,	// (0x0008cceb) area_vitu2_query_pane_t6_ParamLimits

0xd723,	// (0x0008cceb) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x0008f06e) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x0008f06e) area_vitu2_query_pane_t

0x8b8a,	// (0x00088152) bg_button_pane_cp018

0x8b97,	// (0x0008815f) bg_button_pane_cp021

0x8ba3,	// (0x0008816b) bg_button_pane_cp022

0x8bb2,	// (0x0008817a) input_focus_pane_cp09

0x4e35,	// (0x000843fd) aid_size_touch_mv_arrow_left

0x0f0c,	// (0x000804d4) aid_size_touch_mv_arrow_right

0x83c6,	// (0x0008798e) main_cset_slider_pane_g16_ParamLimits

0x83c6,	// (0x0008798e) main_cset_slider_pane_g16

0x83d2,	// (0x0008799a) main_cset_slider_pane_g17_ParamLimits

0x83d2,	// (0x0008799a) main_cset_slider_pane_g17

0x8ad8,	// (0x000880a0) cell_cam4_burst_pane_g1_ParamLimits

0xac0c,	// (0x0008a1d4) compa_mode_pane

0x85b7,	// (0x00087b7f) popup_vtel_slider_window_g3_ParamLimits

0x85b7,	// (0x00087b7f) popup_vtel_slider_window_g3

0x85ce,	// (0x00087b96) popup_vtel_slider_window_g4_ParamLimits

0x85ce,	// (0x00087b96) popup_vtel_slider_window_g4

0x85e5,	// (0x00087bad) popup_vtel_slider_window_t1_ParamLimits

0x85e5,	// (0x00087bad) popup_vtel_slider_window_t1

0xac0c,	// (0x0008a1d4) main_cl_pane

0xc443,	// (0x0008ba0b) popup_imed_adjust2_window_ParamLimits

0xc41d,	// (0x0008b9e5) bg_tb_trans_pane_cp05_ParamLimits

0xcd29,	// (0x0008c2f1) popup_imed_adjust2_window_g1_ParamLimits

0xcd38,	// (0x0008c300) popup_imed_adjust2_window_g2_ParamLimits

0xcd38,	// (0x0008c300) popup_imed_adjust2_window_g2

0xcd44,	// (0x0008c30c) popup_imed_adjust2_window_g3_ParamLimits

0xcd44,	// (0x0008c30c) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x0008edd9) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x0008edd9) popup_imed_adjust2_window_g

0xcd50,	// (0x0008c318) popup_imed_adjust2_window_t1_ParamLimits

0xcd68,	// (0x0008c330) slider_imed_adjust_pane_ParamLimits

0xcd7c,	// (0x0008c344) slider_imed_adjust_pane_g1_ParamLimits

0xcd8c,	// (0x0008c354) slider_imed_adjust_pane_g2_ParamLimits

0xcd9c,	// (0x0008c364) slider_imed_adjust_pane_g3_ParamLimits

0xcdad,	// (0x0008c375) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x0008ede0) slider_imed_adjust_pane_g_ParamLimits

0x7ba7,	// (0x0008716f) aid_touch_area_cam4_ParamLimits

0x7ba7,	// (0x0008716f) aid_touch_area_cam4

0xee87,	// (0x0008e44f) battery_pane_cp01

0x7c3f,	// (0x00087207) main_camera4_pane_g6_ParamLimits

0x7c3f,	// (0x00087207) main_camera4_pane_g6

0x7c60,	// (0x00087228) main_camera4_pane_t2_ParamLimits

0x7c60,	// (0x00087228) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x0008eee3) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x0008eee3) main_camera4_pane_t

0x7c8e,	// (0x00087256) aid_touch_area_vid4_ParamLimits

0x7c8e,	// (0x00087256) aid_touch_area_vid4

0x7cd0,	// (0x00087298) main_video4_pane_g5_ParamLimits

0x7cd0,	// (0x00087298) main_video4_pane_g5

0x7cf1,	// (0x000872b9) vid4_progress_pane_ParamLimits

0x7cf1,	// (0x000872b9) vid4_progress_pane

0xd3a1,	// (0x0008c969) main_cset_slider_pane_g18_ParamLimits

0xd3a1,	// (0x0008c969) main_cset_slider_pane_g18

0xd597,	// (0x0008cb5f) cell_cam4_burst_pane_g2_ParamLimits

0xd597,	// (0x0008cb5f) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x0008f042) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x0008f042) cell_cam4_burst_pane_g

0xb3ce,	// (0x0008a996) bg_cl_pane_ParamLimits

0xb3ce,	// (0x0008a996) bg_cl_pane

0x8bc1,	// (0x00088189) cl_header_pane_ParamLimits

0x8bc1,	// (0x00088189) cl_header_pane

0x8bd5,	// (0x0008819d) cl_listscroll_pane_ParamLimits

0x8bd5,	// (0x0008819d) cl_listscroll_pane

0xd76f,	// (0x0008cd37) bg_cl_pane_g1

0xd777,	// (0x0008cd3f) bg_cl_pane_g2

0xd77f,	// (0x0008cd47) bg_cl_pane_g3

0xd787,	// (0x0008cd4f) bg_cl_pane_g4

0xd78f,	// (0x0008cd57) bg_cl_pane_g5

0xd797,	// (0x0008cd5f) bg_cl_pane_g6

0xd79f,	// (0x0008cd67) bg_cl_pane_g7

0xd7a7,	// (0x0008cd6f) bg_cl_pane_g8

0xd7af,	// (0x0008cd77) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0008f07d) bg_cl_pane_g

0x8be5,	// (0x000881ad) aid_height_cl_leading_ParamLimits

0x8be5,	// (0x000881ad) aid_height_cl_leading

0x8bf1,	// (0x000881b9) aid_height_cl_text_ParamLimits

0x8bf1,	// (0x000881b9) aid_height_cl_text

0x206a,	// (0x00081632) bg_cl_header_pane_ParamLimits

0x206a,	// (0x00081632) bg_cl_header_pane

0x8c10,	// (0x000881d8) cl_header_pane_g1_ParamLimits

0x8c10,	// (0x000881d8) cl_header_pane_g1

0x8c26,	// (0x000881ee) cl_header_pane_t1_ParamLimits

0x8c26,	// (0x000881ee) cl_header_pane_t1

0xd7b7,	// (0x0008cd7f) cl_list_pane

0xd7c0,	// (0x0008cd88) hc_scroll_pane_cp01

0xb974,	// (0x0008af3c) bg_cl_header_pane_g1

0xd26e,	// (0x0008c836) bg_cl_header_pane_g2

0xb994,	// (0x0008af5c) bg_cl_header_pane_g3

0xd27e,	// (0x0008c846) bg_cl_header_pane_g4

0xd276,	// (0x0008c83e) bg_cl_header_pane_g5

0xd4b0,	// (0x0008ca78) bg_cl_header_pane_g6

0xd296,	// (0x0008c85e) bg_cl_header_pane_g7

0xd29e,	// (0x0008c866) bg_cl_header_pane_g8

0xd28e,	// (0x0008c856) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x0008f090) bg_cl_header_pane_g

0x8c3f,	// (0x00088207) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c3f,	// (0x00088207) hc_cl_list_double_graphic_heading_pane

0x8c4f,	// (0x00088217) hc_cl_list_single_graphic_pane_ParamLimits

0x8c4f,	// (0x00088217) hc_cl_list_single_graphic_pane

0x8c62,	// (0x0008822a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8c62,	// (0x0008822a) hc_cl_list_single_graphic_pane_g1

0x8c6e,	// (0x00088236) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8c6e,	// (0x00088236) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x0008f0a3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x0008f0a3) hc_cl_list_single_graphic_pane_g

0x8c82,	// (0x0008824a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8c82,	// (0x0008824a) hc_cl_list_single_graphic_pane_t1

0x8c62,	// (0x0008822a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8c62,	// (0x0008822a) hc_cl_list_double_graphic_heading_pane_g1

0x8c97,	// (0x0008825f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8c97,	// (0x0008825f) hc_cl_list_double_graphic_heading_pane_g2

0x8cab,	// (0x00088273) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8cab,	// (0x00088273) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x0008f0a8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x0008f0a8) hc_cl_list_double_graphic_heading_pane_g

0x8cbf,	// (0x00088287) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8cbf,	// (0x00088287) hc_cl_list_double_graphic_heading_pane_t1

0x8cd4,	// (0x0008829c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8cd4,	// (0x0008829c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x0008f0af) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x0008f0af) hc_cl_list_double_graphic_heading_pane_t

0xefa4,	// (0x0008e56c) vid4_progress_pane_g1

0xefb3,	// (0x0008e57b) vid4_progress_pane_g2

0xefc2,	// (0x0008e58a) vid4_progress_pane_g3

0xefd1,	// (0x0008e599) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x0008f0b4) vid4_progress_pane_g

0xefe9,	// (0x0008e5b1) vid4_progress_pane_t1

0xefff,	// (0x0008e5c7) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x0008f0bf) vid4_progress_pane_t

0xf029,	// (0x0008e5f1) wait_bar_pane_cp07

0xc65b,	// (0x0008bc23) blid_firmament_pane_ParamLimits

0xc69c,	// (0x0008bc64) popup_blid_sat_info2_window_g1

0xc6c0,	// (0x0008bc88) popup_blid_sat_info2_window_t3

0xc6ce,	// (0x0008bc96) popup_blid_sat_info2_window_t4

0xc6dc,	// (0x0008bca4) popup_blid_sat_info2_window_t5

0xc6ea,	// (0x0008bcb2) popup_blid_sat_info2_window_t6

0xc6fa,	// (0x0008bcc2) popup_blid_sat_info2_window_t7

0xc708,	// (0x0008bcd0) popup_blid_sat_info2_window_t8

0xc716,	// (0x0008bcde) popup_blid_sat_info2_window_t9

0xc724,	// (0x0008bcec) popup_blid_sat_info2_window_t10

0xc7e0,	// (0x0008bda8) aid_firma_cardinal_ParamLimits

0xc7f4,	// (0x0008bdbc) blid_firmament_pane_t1_ParamLimits

0xc80b,	// (0x0008bdd3) blid_firmament_pane_t2_ParamLimits

0xc822,	// (0x0008bdea) blid_firmament_pane_t3_ParamLimits

0xc839,	// (0x0008be01) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x0008ecd2) blid_firmament_pane_t_ParamLimits

0xc850,	// (0x0008be18) blid_sat_info_pane_ParamLimits

0x206a,	// (0x00081632) main_cam_set_pane_ParamLimits

0x72eb,	// (0x000868b3) aid_size_cell_colour_35_ParamLimits

0x730b,	// (0x000868d3) aid_size_cell_colour_112_ParamLimits

0x732b,	// (0x000868f3) aid_size_cell_effect_ParamLimits

0xc41d,	// (0x0008b9e5) bg_tb_trans_pane_cp02_ParamLimits

0xbc19,	// (0x0008b1e1) heading_imed_pane_ParamLimits

0x734b,	// (0x00086913) listscroll_imed_pane_ParamLimits

0x1a35,	// (0x00080ffd) popup_call2_audio_first_window_g5_ParamLimits

0x1a35,	// (0x00080ffd) popup_call2_audio_first_window_g5

0x7868,	// (0x00086e30) aid_size_touch_image3_arrow_left_ParamLimits

0x7868,	// (0x00086e30) aid_size_touch_image3_arrow_left

0x7888,	// (0x00086e50) aid_size_touch_image3_arrow_right_ParamLimits

0x7888,	// (0x00086e50) aid_size_touch_image3_arrow_right

0xf014,	// (0x0008e5dc) vid4_progress_pane_t3

0x761f,	// (0x00086be7) main_hwr_training_symbol_option_pane_ParamLimits

0x761f,	// (0x00086be7) main_hwr_training_symbol_option_pane

0xd008,	// (0x0008c5d0) popup_hwr_training_preview_window_ParamLimits

0xd008,	// (0x0008c5d0) popup_hwr_training_preview_window

0x763b,	// (0x00086c03) hwr_training_navi_pane_g5_ParamLimits

0x763b,	// (0x00086c03) hwr_training_navi_pane_g5

0xd25c,	// (0x0008c824) popup_char_count_window

0xef17,	// (0x0008e4df) bg_popup_sub_pane_cp20_ParamLimits

0x86ff,	// (0x00087cc7) list_vitu2_match_list_pane_ParamLimits

0x870e,	// (0x00087cd6) vitu2_page_scroll_pane_ParamLimits

0x870e,	// (0x00087cd6) vitu2_page_scroll_pane

0xd823,	// (0x0008cdeb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd823,	// (0x0008cdeb) list_single_hwr_training_symbol_option_pane

0xd836,	// (0x0008cdfe) list_single_hwr_training_symbol_option_pane_g1

0xd83e,	// (0x0008ce06) list_single_hwr_training_symbol_option_pane_t1

0xd84c,	// (0x0008ce14) bg_button_pane_cp023

0xd855,	// (0x0008ce1d) bg_button_pane_cp024

0x8ce9,	// (0x000882b1) vitu2_page_scroll_pane_g1

0x8cf1,	// (0x000882b9) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x0008f0c6) vitu2_page_scroll_pane_g

0x8cf9,	// (0x000882c1) vitu2_page_scroll_pane_t1

0xc5b3,	// (0x0008bb7b) popup_char_count_window_g1

0xd888,	// (0x0008ce50) popup_char_count_window_g2

0xd891,	// (0x0008ce59) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x0008f0cb) popup_char_count_window_g

0xd89a,	// (0x0008ce62) popup_char_count_window_t1

0xac0c,	// (0x0008a1d4) main_vded2_pane

0xcd17,	// (0x0008c2df) aid_size_cell_imed_line

0xcd21,	// (0x0008c2e9) grid_imed_line_width_pane

0x7d72,	// (0x0008733a) vid4_indicators_pane_g4

0xd8a8,	// (0x0008ce70) cell_imed_line_width_pane_ParamLimits

0xd8a8,	// (0x0008ce70) cell_imed_line_width_pane

0xd8ba,	// (0x0008ce82) cell_imed_line_width_pane_g1

0xc635,	// (0x0008bbfd) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x0008f0d2) cell_imed_line_width_pane_g

0x8d08,	// (0x000882d0) main_vded2_pane_g1_ParamLimits

0x8d08,	// (0x000882d0) main_vded2_pane_g1

0x8d1e,	// (0x000882e6) main_vded2_pane_g2_ParamLimits

0x8d1e,	// (0x000882e6) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x0008f0d7) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x0008f0d7) main_vded2_pane_g

0x8d2e,	// (0x000882f6) vded2_slider_pane_ParamLimits

0x8d2e,	// (0x000882f6) vded2_slider_pane

0x8d41,	// (0x00088309) aid_size_touch_vded2_end

0x8d49,	// (0x00088311) aid_size_touch_vded2_playhead

0x8d51,	// (0x00088319) aid_size_touch_vded2_start

0x8d59,	// (0x00088321) vded2_slider_bg_pane

0x8d62,	// (0x0008832a) vded2_slider_pane_g1

0x8d6b,	// (0x00088333) vded2_slider_pane_g2

0x8d73,	// (0x0008833b) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x0008f0dc) vded2_slider_pane_g

0x8d7c,	// (0x00088344) vded2_slider_bg_pane_g1

0x8d85,	// (0x0008834d) vded2_slider_bg_pane_g2

0x8d8e,	// (0x00088356) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x0008f0e3) vded2_slider_bg_pane_g

0x53a6,	// (0x0008496e) aid_postcard_touch_down_pane_ParamLimits

0x53a6,	// (0x0008496e) aid_postcard_touch_down_pane

0x53b8,	// (0x00084980) aid_postcard_touch_up_pane_ParamLimits

0x53b8,	// (0x00084980) aid_postcard_touch_up_pane

0xac0c,	// (0x0008a1d4) main_blid2_pane

0xc42b,	// (0x0008b9f3) popup_blid2_search_window

0xac0c,	// (0x0008a1d4) blid2_gps_pane

0xac0c,	// (0x0008a1d4) blid2_navig_pane

0xac0c,	// (0x0008a1d4) blid2_search_pane

0xac0c,	// (0x0008a1d4) blid2_tripm_pane

0x8d97,	// (0x0008835f) blid2_search_pane_g1_ParamLimits

0x8d97,	// (0x0008835f) blid2_search_pane_g1

0x8dab,	// (0x00088373) blid2_search_pane_t1_ParamLimits

0x8dab,	// (0x00088373) blid2_search_pane_t1

0x8dbd,	// (0x00088385) aid_size_cell_blid2_gps_ParamLimits

0x8dbd,	// (0x00088385) aid_size_cell_blid2_gps

0x8dd5,	// (0x0008839d) blid2_gps_pane_g1_ParamLimits

0x8dd5,	// (0x0008839d) blid2_gps_pane_g1

0x8de9,	// (0x000883b1) grid_blid2_satellite_pane_ParamLimits

0x8de9,	// (0x000883b1) grid_blid2_satellite_pane

0x8dfd,	// (0x000883c5) blid2_navig_pane_g1_ParamLimits

0x8dfd,	// (0x000883c5) blid2_navig_pane_g1

0x8e09,	// (0x000883d1) blid2_navig_pane_t1_ParamLimits

0x8e09,	// (0x000883d1) blid2_navig_pane_t1

0x8e22,	// (0x000883ea) blid2_navig_pane_t2_ParamLimits

0x8e22,	// (0x000883ea) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x0008f0ea) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x0008f0ea) blid2_navig_pane_t

0x8e3b,	// (0x00088403) blid2_navig_ring_pane_ParamLimits

0x8e3b,	// (0x00088403) blid2_navig_ring_pane

0x8e50,	// (0x00088418) blid2_speed_pane_ParamLimits

0x8e50,	// (0x00088418) blid2_speed_pane

0x8e5c,	// (0x00088424) blid2_tripm_pane_g1_ParamLimits

0x8e5c,	// (0x00088424) blid2_tripm_pane_g1

0x8e71,	// (0x00088439) blid2_tripm_pane_g2_ParamLimits

0x8e71,	// (0x00088439) blid2_tripm_pane_g2

0x8e85,	// (0x0008844d) blid2_tripm_pane_g3_ParamLimits

0x8e85,	// (0x0008844d) blid2_tripm_pane_g3

0x8e99,	// (0x00088461) blid2_tripm_pane_g4_ParamLimits

0x8e99,	// (0x00088461) blid2_tripm_pane_g4

0x8ead,	// (0x00088475) blid2_tripm_pane_g5_ParamLimits

0x8ead,	// (0x00088475) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x0008f0ef) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x0008f0ef) blid2_tripm_pane_g

0x8ecf,	// (0x00088497) blid2_tripm_pane_t1_ParamLimits

0x8ecf,	// (0x00088497) blid2_tripm_pane_t1

0x8ee6,	// (0x000884ae) blid2_tripm_pane_t2_ParamLimits

0x8ee6,	// (0x000884ae) blid2_tripm_pane_t2

0x8efd,	// (0x000884c5) blid2_tripm_pane_t3_ParamLimits

0x8efd,	// (0x000884c5) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x0008f0fc) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x0008f0fc) blid2_tripm_pane_t

0x8f40,	// (0x00088508) cell_blid2_satellite_pane_ParamLimits

0x8f40,	// (0x00088508) cell_blid2_satellite_pane

0x8f58,	// (0x00088520) cell_blid2_satellite_pane_g1

0xd8c3,	// (0x0008ce8b) cell_blid2_satellite_pane_t1

0xc860,	// (0x0008be28) blid2_speed_pane_g1

0xd8d1,	// (0x0008ce99) blid2_speed_pane_t1

0xd8df,	// (0x0008cea7) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0008f105) blid2_speed_pane_t

0xc860,	// (0x0008be28) blid2_navig_ring_pane_g1

0x8f61,	// (0x00088529) blid2_navig_ring_pane_g2

0x8f69,	// (0x00088531) blid2_navig_ring_pane_g3

0x8f71,	// (0x00088539) blid2_navig_ring_pane_g4

0x8f79,	// (0x00088541) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x0008f10a) blid2_navig_ring_pane_g

0xac0c,	// (0x0008a1d4) bg_popup_window_pane_cp011

0xd8ed,	// (0x0008ceb5) popup_blid2_search_window_g1

0xd8f5,	// (0x0008cebd) popup_blid2_search_window_t1

0xd903,	// (0x0008cecb) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x0008f115) popup_blid2_search_window_t

0xb883,	// (0x0008ae4b) main_browser_pane_g1

0xb3ce,	// (0x0008a996) main_browser_pane_ParamLimits

0xef17,	// (0x0008e4df) bg_button_pane_cp011_ParamLimits

0x7fef,	// (0x000875b7) cell_vitu2_function_pane_g1_ParamLimits

0xc41d,	// (0x0008b9e5) bg_popup_sub_pane_cp22_ParamLimits

0x8889,	// (0x00087e51) input_focus_pane_cp08_ParamLimits

0x88a0,	// (0x00087e68) popup_vitu2_query_button_pane_ParamLimits

0x88a0,	// (0x00087e68) popup_vitu2_query_button_pane

0x88b0,	// (0x00087e78) popup_vitu2_query_input_button_pane

0xd4ed,	// (0x0008cab5) popup_vitu2_query_window_g1_ParamLimits

0x88b8,	// (0x00087e80) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x0008f016) popup_vitu2_query_window_g_ParamLimits

0xac0c,	// (0x0008a1d4) bg_button_pane_cp026

0x8f81,	// (0x00088549) popup_vitu2_query_input_button_pane_g1

0xac0c,	// (0x0008a1d4) bg_button_pane_cp025

0xd911,	// (0x0008ced9) popup_vitu2_query_button_pane_t1

0x67f9,	// (0x00085dc1) main_mp3_pane_t6

0x6807,	// (0x00085dcf) popup_slider_window_cp01

0xeeaf,	// (0x0008e477) cam4_battery_pane

0xeeaf,	// (0x0008e477) cam4_battery_pane_cp02

0xeeaf,	// (0x0008e477) cam4_battery_pane_cp01

0xeeaf,	// (0x0008e477) cam4_battery_pane_cp03

0xd108,	// (0x0008c6d0) cam4_battery_pane_g1

0xc860,	// (0x0008be28) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x0008f11a) cam4_battery_pane_g

0xc732,	// (0x0008bcfa) popup_blid_sat_info2_window_t11

0x4e35,	// (0x000843fd) aid_size_touch_mv_arrow_left_ParamLimits

0x0f0c,	// (0x000804d4) aid_size_touch_mv_arrow_right_ParamLimits

0x0f44,	// (0x0008050c) navi_pane_g1_ParamLimits

0x0f50,	// (0x00080518) navi_pane_g2_ParamLimits

0x4e4e,	// (0x00084416) navi_pane_g3_ParamLimits

0xf409,	// (0x0008e9d1) navi_pane_g_ParamLimits

0x4e73,	// (0x0008443b) navi_pane_mv_t1_ParamLimits

0x7357,	// (0x0008691f) grid_imed_effect_pane_ParamLimits

0x3ef4,	// (0x000834bc) aid_placing_vt_slider_lsc

0xb7c5,	// (0x0008ad8d) aid_placing_vt_slider_prt

0x206a,	// (0x00081632) bg_tb_trans_pane_cp01_ParamLimits

0xc9af,	// (0x0008bf77) popup_image_details_window_g1_ParamLimits

0xc9c2,	// (0x0008bf8a) popup_image_details_window_g2_ParamLimits

0xc9d7,	// (0x0008bf9f) popup_image_details_window_g3_ParamLimits

0xc9d7,	// (0x0008bf9f) popup_image_details_window_g3

0xf74f,	// (0x0008ed17) popup_image_details_window_g_ParamLimits

0xc9eb,	// (0x0008bfb3) popup_image_details_window_t1_ParamLimits

0xc9fd,	// (0x0008bfc5) popup_image_details_window_t2_ParamLimits

0xca16,	// (0x0008bfde) popup_image_details_window_t3_ParamLimits

0xca2a,	// (0x0008bff2) popup_image_details_window_t4_ParamLimits

0xca45,	// (0x0008c00d) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x0008ed1e) popup_image_details_window_t_ParamLimits

0x8bfd,	// (0x000881c5) cl_header_name_pane_ParamLimits

0x8bfd,	// (0x000881c5) cl_header_name_pane

0x8f89,	// (0x00088551) cl_header_name_pane_t1_ParamLimits

0x8f89,	// (0x00088551) cl_header_name_pane_t1

0x8faa,	// (0x00088572) cl_header_name_pane_t2_ParamLimits

0x8faa,	// (0x00088572) cl_header_name_pane_t2

0x8fec,	// (0x000885b4) cl_header_name_pane_t3_ParamLimits

0x8fec,	// (0x000885b4) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x0008f11f) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x0008f11f) cl_header_name_pane_t

0x0fd2,	// (0x0008059a) navi_pane_mv_g2_ParamLimits

0xd1fe,	// (0x0008c7c6) field_vitu2_entry_pane_g1_ParamLimits

0xd20a,	// (0x0008c7d2) field_vitu2_entry_pane_g2_ParamLimits

0xd216,	// (0x0008c7de) field_vitu2_entry_pane_g3_ParamLimits

0xd216,	// (0x0008c7de) field_vitu2_entry_pane_g3

0xf94d,	// (0x0008ef15) field_vitu2_entry_pane_g_ParamLimits

0x7f6b,	// (0x00087533) cell_vitu2_itu_pane_g1_ParamLimits

0x7f7b,	// (0x00087543) cell_vitu2_itu_pane_g2_ParamLimits

0x7f7b,	// (0x00087543) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x0008ef21) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x0008ef21) cell_vitu2_itu_pane_g

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp05_ParamLimits

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp05

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp03

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp04

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp10_ParamLimits

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp10

0x8ba3,	// (0x0008816b) bg_vkb2_func_pane_cp08

0x8b8a,	// (0x00088152) bg_vkb2_func_pane_cp06

0x8b97,	// (0x0008815f) bg_vkb2_func_pane_cp07

0xd85e,	// (0x0008ce26) bg_vkb2_func_pane_cp11_ParamLimits

0xd85e,	// (0x0008ce26) bg_vkb2_func_pane_cp11

0xd873,	// (0x0008ce3b) bg_vkb2_func_pane_cp12_ParamLimits

0xd873,	// (0x0008ce3b) bg_vkb2_func_pane_cp12

0xac0c,	// (0x0008a1d4) bg_vkb2_func_pane_cp09

0xd26e,	// (0x0008c836) bg_vkb2_func_pane_g1

0xb994,	// (0x0008af5c) bg_vkb2_func_pane_g2

0xd276,	// (0x0008c83e) bg_vkb2_func_pane_g3

0xd27e,	// (0x0008c846) bg_vkb2_func_pane_g4

0xd4b0,	// (0x0008ca78) bg_vkb2_func_pane_g5

0xd296,	// (0x0008c85e) bg_vkb2_func_pane_g6

0xd29e,	// (0x0008c866) bg_vkb2_func_pane_g7

0xd28e,	// (0x0008c856) bg_vkb2_func_pane_g8

0xb974,	// (0x0008af3c) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x0008f126) bg_vkb2_func_pane_g

0x8ebf,	// (0x00088487) blid2_tripm_pane_g6_ParamLimits

0x8ebf,	// (0x00088487) blid2_tripm_pane_g6

0xd0c6,	// (0x0008c68e) mp4_progress_pane_g1

0x8f2e,	// (0x000884f6) blid2_tripm_values_pane_ParamLimits

0x8f2e,	// (0x000884f6) blid2_tripm_values_pane

0x901d,	// (0x000885e5) blid2_tripm_values_pane_t1

0x902b,	// (0x000885f3) blid2_tripm_values_pane_t2

0x9039,	// (0x00088601) blid2_tripm_values_pane_t3

0x9047,	// (0x0008860f) blid2_tripm_values_pane_t4

0x9055,	// (0x0008861d) blid2_tripm_values_pane_t5

0x9063,	// (0x0008862b) blid2_tripm_values_pane_t6

0x9071,	// (0x00088639) blid2_tripm_values_pane_t7

0x907f,	// (0x00088647) blid2_tripm_values_pane_t8

0x908d,	// (0x00088655) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x0008f139) blid2_tripm_values_pane_t

0x3f2e,	// (0x000834f6) call_video_pane_t1_ParamLimits

0x3f48,	// (0x00083510) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008e85a) call_video_pane_t_ParamLimits

0x52bb,	// (0x00084883) msg_header_pane_g1_ParamLimits

0x11ae,	// (0x00080776) msg_header_pane_g2_ParamLimits

0x11ae,	// (0x00080776) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0008ea74) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0008ea74) msg_header_pane_g

0xb3ce,	// (0x0008a996) main_clock2_pane_ParamLimits

0x7093,	// (0x0008665b) grid_clock2_toolbar_pane_ParamLimits

0x7093,	// (0x0008665b) grid_clock2_toolbar_pane

0x7093,	// (0x0008665b) listscroll_clock2_pane_ParamLimits

0x7093,	// (0x0008665b) listscroll_clock2_pane

0x7165,	// (0x0008672d) main_clock2_pane_t3_ParamLimits

0x7165,	// (0x0008672d) main_clock2_pane_t3

0x717e,	// (0x00086746) main_clock2_pane_t4_ParamLimits

0x717e,	// (0x00086746) main_clock2_pane_t4

0xd91f,	// (0x0008cee7) cell_clock2_toolbar_pane

0xd927,	// (0x0008ceef) cell_clock2_toolbar_pane_cp01

0xd927,	// (0x0008ceef) cell_clock2_toolbar_pane_cp02

0xd92f,	// (0x0008cef7) cell_clock2_toolbar_pane_cp03

0xd937,	// (0x0008ceff) list_clock2_pane

0x0e74,	// (0x0008043c) scroll_pane_cp10

0xd93f,	// (0x0008cf07) list_single_clock2_pane_ParamLimits

0xd93f,	// (0x0008cf07) list_single_clock2_pane

0x1033,	// (0x000805fb) list_highlight_pane_cp08

0xd94c,	// (0x0008cf14) list_single_clock2_pane_t1

0xd95a,	// (0x0008cf22) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0008f14c) list_single_clock2_pane_t

0xac0c,	// (0x0008a1d4) bg_button_pane_cp10

0xd968,	// (0x0008cf30) cell_clock2_toolbar_pane_g1

0x533a,	// (0x00084902) aid_main_viewer_pane_g1_ParamLimits

0x533a,	// (0x00084902) aid_main_viewer_pane_g1

0x5346,	// (0x0008490e) aid_main_viewer_pane_g2_ParamLimits

0x5346,	// (0x0008490e) aid_main_viewer_pane_g2

0x5352,	// (0x0008491a) aid_main_viewer_pane_g3_ParamLimits

0x5352,	// (0x0008491a) aid_main_viewer_pane_g3

0x5361,	// (0x00084929) aid_main_viewer_pane_g4_ParamLimits

0x5361,	// (0x00084929) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0008ea85) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0008ea85) aid_main_viewer_pane_g

0x206a,	// (0x00081632) main_calc_pane_ParamLimits

0x5b55,	// (0x0008511d) main_dialer2_pane_ParamLimits

0xac0c,	// (0x0008a1d4) main_cam6_pane

0xac0c,	// (0x0008a1d4) main_vid6_pane

0x709f,	// (0x00086667) listscroll_gen_pane_cp06_ParamLimits

0x709f,	// (0x00086667) listscroll_gen_pane_cp06

0x7197,	// (0x0008675f) main_clock2_pane_t5_ParamLimits

0x7197,	// (0x0008675f) main_clock2_pane_t5

0x71ec,	// (0x000867b4) aid_call2_pane_cp10_ParamLimits

0x71fe,	// (0x000867c6) aid_call_pane_cp10_ParamLimits

0x0f00,	// (0x000804c8) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0f00,	// (0x000804c8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7210,	// (0x000867d8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7210,	// (0x000867d8) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0f00,	// (0x000804c8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x0008edce) popup_clock_analogue_window_cp10_g_ParamLimits

0x7222,	// (0x000867ea) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd130,	// (0x0008c6f8) cell_dialer2_keypad_pane_g2_ParamLimits

0xd130,	// (0x0008c6f8) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x0008eeb4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x0008eeb4) cell_dialer2_keypad_pane_g

0x7831,	// (0x00086df9) cell_dialer2_keypad_pane_t1

0x82b9,	// (0x00087881) main_cset_text2_pane_ParamLimits

0x82b9,	// (0x00087881) main_cset_text2_pane

0xd6c7,	// (0x0008cc8f) area_vitu2_query_pane_g1_ParamLimits

0x8b2f,	// (0x000880f7) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x0008f069) area_vitu2_query_pane_g_ParamLimits

0xd74b,	// (0x0008cd13) area_vitu2_query_pane_t7_ParamLimits

0xd74b,	// (0x0008cd13) area_vitu2_query_pane_t7

0x8b8a,	// (0x00088152) bg_button_pane_cp018_ParamLimits

0x8b97,	// (0x0008815f) bg_button_pane_cp021_ParamLimits

0x8ba3,	// (0x0008816b) bg_button_pane_cp022_ParamLimits

0x8ba3,	// (0x0008816b) bg_vkb2_func_pane_cp08_ParamLimits

0x8b8a,	// (0x00088152) bg_vkb2_func_pane_cp06_ParamLimits

0x8b97,	// (0x0008815f) bg_vkb2_func_pane_cp07_ParamLimits

0x8bb2,	// (0x0008817a) input_focus_pane_cp09_ParamLimits

0xf039,	// (0x0008e601) cam6_autofocus_pane_ParamLimits

0xf039,	// (0x0008e601) cam6_autofocus_pane

0x909b,	// (0x00088663) cam6_image_uncrop_pane_ParamLimits

0x909b,	// (0x00088663) cam6_image_uncrop_pane

0x90a8,	// (0x00088670) cam6_indi_pane_ParamLimits

0x90a8,	// (0x00088670) cam6_indi_pane

0x90be,	// (0x00088686) cam6_mode_pane_ParamLimits

0x90be,	// (0x00088686) cam6_mode_pane

0x90d0,	// (0x00088698) cam6_timer_pane_ParamLimits

0x90d0,	// (0x00088698) cam6_timer_pane

0x90dc,	// (0x000886a4) cam6_zoom_pane_ParamLimits

0x90dc,	// (0x000886a4) cam6_zoom_pane

0x90e8,	// (0x000886b0) cam6_mode_pane_g1_ParamLimits

0x90e8,	// (0x000886b0) cam6_mode_pane_g1

0x90f8,	// (0x000886c0) cam6_mode_pane_g2_ParamLimits

0x90f8,	// (0x000886c0) cam6_mode_pane_g2

0x9108,	// (0x000886d0) cam6_mode_pane_g3_ParamLimits

0x9108,	// (0x000886d0) cam6_mode_pane_g3

0x9118,	// (0x000886e0) cam6_mode_pane_g4_ParamLimits

0x9118,	// (0x000886e0) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x0008f151) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x0008f151) cam6_mode_pane_g

0xd970,	// (0x0008cf38) bg_tb_trans_pane_cp08_ParamLimits

0xd970,	// (0x0008cf38) bg_tb_trans_pane_cp08

0xd97e,	// (0x0008cf46) cam6_battery_pane_ParamLimits

0xd97e,	// (0x0008cf46) cam6_battery_pane

0xd994,	// (0x0008cf5c) cam6_indi_pane_g1_ParamLimits

0xd994,	// (0x0008cf5c) cam6_indi_pane_g1

0xd9a6,	// (0x0008cf6e) cam6_indi_pane_g2_ParamLimits

0xd9a6,	// (0x0008cf6e) cam6_indi_pane_g2

0xd9b8,	// (0x0008cf80) cam6_indi_pane_g3_ParamLimits

0xd9b8,	// (0x0008cf80) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x0008f15a) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x0008f15a) cam6_indi_pane_g

0xd9ca,	// (0x0008cf92) cam6_indi_pane_t1_ParamLimits

0xd9ca,	// (0x0008cf92) cam6_indi_pane_t1

0x7da4,	// (0x0008736c) cam6_autofocus_pane_g1

0x7d9c,	// (0x00087364) cam6_autofocus_pane_g2

0x7db4,	// (0x0008737c) cam6_autofocus_pane_g3

0x7dac,	// (0x00087374) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x0008f161) cam6_autofocus_pane_g

0xd9f0,	// (0x0008cfb8) cam6_timer_pane_g1

0xd9f8,	// (0x0008cfc0) cam6_timer_pane_t1

0xda06,	// (0x0008cfce) cam6_zoom_cont_pane

0xda0e,	// (0x0008cfd6) cam6_zoom_pane_g1

0xda16,	// (0x0008cfde) cam6_zoom_pane_g2

0x9128,	// (0x000886f0) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x0008f16a) cam6_zoom_pane_g

0xc860,	// (0x0008be28) cam6_battery_pane_g1

0xc860,	// (0x0008be28) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x0008ecdb) cam6_battery_pane_g

0xda1e,	// (0x0008cfe6) cam6_zoom_cont_pane_g1

0xda27,	// (0x0008cfef) cam6_zoom_cont_pane_g2

0xda30,	// (0x0008cff8) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x0008f171) cam6_zoom_cont_pane_g

0x9145,	// (0x0008870d) cam6_mode_pane_cp_ParamLimits

0x9145,	// (0x0008870d) cam6_mode_pane_cp

0x9157,	// (0x0008871f) cam6_zoom_pane_cp_ParamLimits

0x9157,	// (0x0008871f) cam6_zoom_pane_cp

0x9163,	// (0x0008872b) vid6_image_uncrop_cif_pane_ParamLimits

0x9163,	// (0x0008872b) vid6_image_uncrop_cif_pane

0x9171,	// (0x00088739) vid6_image_uncrop_nhd_pane_ParamLimits

0x9171,	// (0x00088739) vid6_image_uncrop_nhd_pane

0x917e,	// (0x00088746) vid6_image_uncrop_vga_pane_ParamLimits

0x917e,	// (0x00088746) vid6_image_uncrop_vga_pane

0x918b,	// (0x00088753) vid6_image_uncrop_wvga_pane_ParamLimits

0x918b,	// (0x00088753) vid6_image_uncrop_wvga_pane

0x9198,	// (0x00088760) vid6_indi_pane_ParamLimits

0x9198,	// (0x00088760) vid6_indi_pane

0xd970,	// (0x0008cf38) bg_tb_trans_pane_cp09_ParamLimits

0xd970,	// (0x0008cf38) bg_tb_trans_pane_cp09

0xda44,	// (0x0008d00c) cam6_battery_pane_cp_ParamLimits

0xda44,	// (0x0008d00c) cam6_battery_pane_cp

0xda50,	// (0x0008d018) vid6_indi_pane_g1_ParamLimits

0xda50,	// (0x0008d018) vid6_indi_pane_g1

0xda62,	// (0x0008d02a) vid6_indi_pane_g2_ParamLimits

0xda62,	// (0x0008d02a) vid6_indi_pane_g2

0xda74,	// (0x0008d03c) vid6_indi_pane_g3_ParamLimits

0xda74,	// (0x0008d03c) vid6_indi_pane_g3

0xda89,	// (0x0008d051) vid6_indi_pane_g4_ParamLimits

0xda89,	// (0x0008d051) vid6_indi_pane_g4

0xda9e,	// (0x0008d066) vid6_indi_pane_g5_ParamLimits

0xda9e,	// (0x0008d066) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x0008f178) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x0008f178) vid6_indi_pane_g

0xdab8,	// (0x0008d080) vid6_indi_pane_t1_ParamLimits

0xdab8,	// (0x0008d080) vid6_indi_pane_t1

0xdace,	// (0x0008d096) vid6_indi_pane_t2_ParamLimits

0xdace,	// (0x0008d096) vid6_indi_pane_t2

0xdaf6,	// (0x0008d0be) vid6_indi_pane_t3_ParamLimits

0xdaf6,	// (0x0008d0be) vid6_indi_pane_t3

0xdb1e,	// (0x0008d0e6) vid6_indi_pane_t4_ParamLimits

0xdb1e,	// (0x0008d0e6) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x0008f183) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x0008f183) vid6_indi_pane_t

0xdb42,	// (0x0008d10a) wait_bar_pane_cp08

0x91af,	// (0x00088777) main_cset_text2_pane_t1_ParamLimits

0x91af,	// (0x00088777) main_cset_text2_pane_t1

0x9130,	// (0x000886f8) listscroll_gen_pane_cp06_t1_ParamLimits

0x9130,	// (0x000886f8) listscroll_gen_pane_cp06_t1

0xac0c,	// (0x0008a1d4) main_cam6_set_pane

0xeea1,	// (0x0008e469) bg_tb_trans_pane_cp06_ParamLimits

0xeeb7,	// (0x0008e47f) cam4_indicators_pane_g1_ParamLimits

0xeec7,	// (0x0008e48f) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x0008eef1) cam4_indicators_pane_g_ParamLimits

0xeee7,	// (0x0008e4af) cam4_indicators_pane_t1_ParamLimits

0xef09,	// (0x0008e4d1) bg_tb_trans_pane_cp07_ParamLimits

0x7d4b,	// (0x00087313) vid4_indicators_pane_g1_ParamLimits

0x7d58,	// (0x00087320) vid4_indicators_pane_g2_ParamLimits

0x7d65,	// (0x0008732d) vid4_indicators_pane_g3_ParamLimits

0x7d72,	// (0x0008733a) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x0008ef03) vid4_indicators_pane_g_ParamLimits

0x7d8a,	// (0x00087352) vid4_indicators_pane_t1_ParamLimits

0xefa4,	// (0x0008e56c) vid4_progress_pane_g1_ParamLimits

0xefb3,	// (0x0008e57b) vid4_progress_pane_g2_ParamLimits

0xefc2,	// (0x0008e58a) vid4_progress_pane_g3_ParamLimits

0xefd1,	// (0x0008e599) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x0008f0b4) vid4_progress_pane_g_ParamLimits

0xefe9,	// (0x0008e5b1) vid4_progress_pane_t1_ParamLimits

0xefff,	// (0x0008e5c7) vid4_progress_pane_t2_ParamLimits

0xf014,	// (0x0008e5dc) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x0008f0bf) vid4_progress_pane_t_ParamLimits

0xf029,	// (0x0008e5f1) wait_bar_pane_cp07_ParamLimits

0x91c9,	// (0x00088791) main_cam6_set_pane_g2_ParamLimits

0x91c9,	// (0x00088791) main_cam6_set_pane_g2

0x91eb,	// (0x000887b3) main_cset6_listscroll_pane_ParamLimits

0x91eb,	// (0x000887b3) main_cset6_listscroll_pane

0x9205,	// (0x000887cd) main_cset6_slider_pane_ParamLimits

0x9205,	// (0x000887cd) main_cset6_slider_pane

0x921b,	// (0x000887e3) main_cset6_text2_pane_ParamLimits

0x921b,	// (0x000887e3) main_cset6_text2_pane

0xdb52,	// (0x0008d11a) main_cset6_text_pane

0xd364,	// (0x0008c92c) main_cset_list_pane_copy1_ParamLimits

0xd364,	// (0x0008c92c) main_cset_list_pane_copy1

0xd374,	// (0x0008c93c) scroll_pane_cp028_copy1

0x9229,	// (0x000887f1) cset_list_set_pane_copy1

0x923b,	// (0x00088803) aid_position_infowindow_above_copy1

0x9243,	// (0x0008880b) aid_position_infowindow_below_copy1

0x924b,	// (0x00088813) cset_list_set_pane_g1_copy1

0x9253,	// (0x0008881b) cset_list_set_pane_g3_copy1_ParamLimits

0x9253,	// (0x0008881b) cset_list_set_pane_g3_copy1

0x9262,	// (0x0008882a) cset_list_set_pane_t1_copy1_ParamLimits

0x9262,	// (0x0008882a) cset_list_set_pane_t1_copy1

0x206a,	// (0x00081632) list_highlight_pane_cp021_copy1_ParamLimits

0x206a,	// (0x00081632) list_highlight_pane_cp021_copy1

0xdb5a,	// (0x0008d122) cset6_slider_pane_ParamLimits

0xdb5a,	// (0x0008d122) cset6_slider_pane

0xdb86,	// (0x0008d14e) main_cset6_slider_pane_g1_ParamLimits

0xdb86,	// (0x0008d14e) main_cset6_slider_pane_g1

0x9277,	// (0x0008883f) main_cset6_slider_pane_g2_ParamLimits

0x9277,	// (0x0008883f) main_cset6_slider_pane_g2

0xd389,	// (0x0008c951) main_cset6_slider_pane_g3_ParamLimits

0xd389,	// (0x0008c951) main_cset6_slider_pane_g3

0x837e,	// (0x00087946) main_cset6_slider_pane_g4_ParamLimits

0x837e,	// (0x00087946) main_cset6_slider_pane_g4

0x83c6,	// (0x0008798e) main_cset6_slider_pane_g5_ParamLimits

0x83c6,	// (0x0008798e) main_cset6_slider_pane_g5

0xd389,	// (0x0008c951) main_cset6_slider_pane_g7_ParamLimits

0xd389,	// (0x0008c951) main_cset6_slider_pane_g7

0xd395,	// (0x0008c95d) main_cset6_slider_pane_g8_ParamLimits

0xd395,	// (0x0008c95d) main_cset6_slider_pane_g8

0x8366,	// (0x0008792e) main_cset6_slider_pane_g9_ParamLimits

0x8366,	// (0x0008792e) main_cset6_slider_pane_g9

0x8372,	// (0x0008793a) main_cset6_slider_pane_g10_ParamLimits

0x8372,	// (0x0008793a) main_cset6_slider_pane_g10

0x837e,	// (0x00087946) main_cset6_slider_pane_g11_ParamLimits

0x837e,	// (0x00087946) main_cset6_slider_pane_g11

0x838a,	// (0x00087952) main_cset6_slider_pane_g12_ParamLimits

0x838a,	// (0x00087952) main_cset6_slider_pane_g12

0x8396,	// (0x0008795e) main_cset6_slider_pane_g13_ParamLimits

0x8396,	// (0x0008795e) main_cset6_slider_pane_g13

0x83a2,	// (0x0008796a) main_cset6_slider_pane_g14_ParamLimits

0x83a2,	// (0x0008796a) main_cset6_slider_pane_g14

0x929f,	// (0x00088867) main_cset6_slider_pane_g15_ParamLimits

0x929f,	// (0x00088867) main_cset6_slider_pane_g15

0x83c6,	// (0x0008798e) main_cset6_slider_pane_g16_ParamLimits

0x83c6,	// (0x0008798e) main_cset6_slider_pane_g16

0x83d2,	// (0x0008799a) main_cset6_slider_pane_g17_ParamLimits

0x83d2,	// (0x0008799a) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0008f18c) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0008f18c) main_cset6_slider_pane_g

0xdbae,	// (0x0008d176) main_cset6_slider_pane_t1_ParamLimits

0xdbae,	// (0x0008d176) main_cset6_slider_pane_t1

0xdbef,	// (0x0008d1b7) main_cset6_slider_pane_t2_ParamLimits

0xdbef,	// (0x0008d1b7) main_cset6_slider_pane_t2

0xdc1a,	// (0x0008d1e2) main_cset6_slider_pane_t3_ParamLimits

0xdc1a,	// (0x0008d1e2) main_cset6_slider_pane_t3

0x92b7,	// (0x0008887f) main_cset6_slider_pane_t4_ParamLimits

0x92b7,	// (0x0008887f) main_cset6_slider_pane_t4

0x92e2,	// (0x000888aa) main_cset6_slider_pane_t5_ParamLimits

0x92e2,	// (0x000888aa) main_cset6_slider_pane_t5

0xdc45,	// (0x0008d20d) main_cset6_slider_pane_t7_ParamLimits

0xdc45,	// (0x0008d20d) main_cset6_slider_pane_t7

0x930d,	// (0x000888d5) main_cset6_slider_pane_t8_ParamLimits

0x930d,	// (0x000888d5) main_cset6_slider_pane_t8

0x9331,	// (0x000888f9) main_cset6_slider_pane_t9_ParamLimits

0x9331,	// (0x000888f9) main_cset6_slider_pane_t9

0x9355,	// (0x0008891d) main_cset6_slider_pane_t10_ParamLimits

0x9355,	// (0x0008891d) main_cset6_slider_pane_t10

0x9379,	// (0x00088941) main_cset6_slider_pane_t11_ParamLimits

0x9379,	// (0x00088941) main_cset6_slider_pane_t11

0xdc7b,	// (0x0008d243) main_cset6_slider_pane_t14_ParamLimits

0xdc7b,	// (0x0008d243) main_cset6_slider_pane_t14

0xdcb4,	// (0x0008d27c) main_cset6_slider_pane_t15_ParamLimits

0xdcb4,	// (0x0008d27c) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x0008f1b1) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x0008f1b1) main_cset6_slider_pane_t

0xdced,	// (0x0008d2b5) cset_slider_pane_g1_copy1

0xdcf6,	// (0x0008d2be) cset_slider_pane_g2_copy1

0xdcff,	// (0x0008d2c7) cset_slider_pane_g3_copy1

0xac0c,	// (0x0008a1d4) bg_popup_sub_pane_cp011_copy1

0xd4f9,	// (0x0008cac1) main_cset_text_pane_g1_copy1

0xd501,	// (0x0008cac9) main_cset_text_pane_t1_copy1

0xd50f,	// (0x0008cad7) main_cset_text_pane_t2_copy1

0xd51d,	// (0x0008cae5) main_cset_text_pane_t3_copy1

0xd52b,	// (0x0008caf3) main_cset_text_pane_t4_copy1

0xd539,	// (0x0008cb01) main_cset_text_pane_t5_copy1

0xd547,	// (0x0008cb0f) main_cset_text_pane_t6_copy1

0xd555,	// (0x0008cb1d) main_cset_text_pane_t7_copy1

0x939d,	// (0x00088965) main_cset_text2_pane_t1_copy1

0xac0c,	// (0x0008a1d4) main_ncimui_pane

0x5d63,	// (0x0008532b) popup_query_ncimui_window_ParamLimits

0x5d63,	// (0x0008532b) popup_query_ncimui_window

0xcb30,	// (0x0008c0f8) field_cale_ev2_pane_g4_ParamLimits

0xcb30,	// (0x0008c0f8) field_cale_ev2_pane_g4

0x7723,	// (0x00086ceb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7723,	// (0x00086ceb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x0008ee8f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x0008ee8f) cell_video_dialer_keypad_pane_g

0x773b,	// (0x00086d03) cell_video_dialer_keypad_pane_t1

0xac0c,	// (0x0008a1d4) bg_popup_window_pane_cp012

0xbf4f,	// (0x0008b517) heading_pane_cp06

0xddfd,	// (0x0008d3c5) ncim_query_content_pane

0xac0c,	// (0x0008a1d4) bg_popup_heading_pane_cp01

0xde05,	// (0x0008d3cd) ncim_heading_pane_t1

0xde13,	// (0x0008d3db) ncim_indicator_popup_pane

0xde25,	// (0x0008d3ed) ncim_query_button_pane

0xde39,	// (0x0008d401) ncim_query_content_pane_t1

0xde4b,	// (0x0008d413) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x0008f1f0) ncim_query_content_pane_t

0xde85,	// (0x0008d44d) ncim_query_list_pane

0xde97,	// (0x0008d45f) ncim_query_popup_pane

0xde13,	// (0x0008d3db) ncim_indicator_popup_pane_ParamLimits

0x94b0,	// (0x00088a78) ncim_query_content_pane_g1_ParamLimits

0x94b0,	// (0x00088a78) ncim_query_content_pane_g1

0xde39,	// (0x0008d401) ncim_query_content_pane_t1_ParamLimits

0xde4b,	// (0x0008d413) ncim_query_content_pane_t2_ParamLimits

0x94bc,	// (0x00088a84) ncim_query_content_pane_t3_ParamLimits

0x94bc,	// (0x00088a84) ncim_query_content_pane_t3

0x94e4,	// (0x00088aac) ncim_query_content_pane_t4_ParamLimits

0x94e4,	// (0x00088aac) ncim_query_content_pane_t4

0x950c,	// (0x00088ad4) ncim_query_content_pane_t5_ParamLimits

0x950c,	// (0x00088ad4) ncim_query_content_pane_t5

0xde5d,	// (0x0008d425) ncim_query_content_pane_t6_ParamLimits

0xde5d,	// (0x0008d425) ncim_query_content_pane_t6

0xfc28,	// (0x0008f1f0) ncim_query_content_pane_t_ParamLimits

0xde85,	// (0x0008d44d) ncim_query_list_pane_ParamLimits

0xde97,	// (0x0008d45f) ncim_query_popup_pane_ParamLimits

0xdeab,	// (0x0008d473) wait_bar_pane_cp04

0xac0c,	// (0x0008a1d4) input_focus_pane_cp011

0xdeb3,	// (0x0008d47b) ncim_query_popup_pane_t1

0xdec1,	// (0x0008d489) ncim_list_query_list_pane_ParamLimits

0xdec1,	// (0x0008d489) ncim_list_query_list_pane

0xac0c,	// (0x0008a1d4) bg_button_pane_cp027

0xded4,	// (0x0008d49c) ncim_query_button_pane_g1

0xac0c,	// (0x0008a1d4) list_highlight_pane_cp012

0xdede,	// (0x0008d4a6) ncim_list_query_list_pane_g1

0xdee6,	// (0x0008d4ae) ncim_list_query_list_pane_t1

0xeed7,	// (0x0008e49f) cam4_indicators_pane_g3_ParamLimits

0xeed7,	// (0x0008e49f) cam4_indicators_pane_g3

0x7d7e,	// (0x00087346) vid4_indicators_pane_g5_ParamLimits

0x7d7e,	// (0x00087346) vid4_indicators_pane_g5

0xefdd,	// (0x0008e5a5) vid4_progress_pane_g5_ParamLimits

0xefdd,	// (0x0008e5a5) vid4_progress_pane_g5

0x93cb,	// (0x00088993) main_ncimui_pane_g1

0x9421,	// (0x000889e9) ncimui_group_query_pane_ParamLimits

0x9421,	// (0x000889e9) ncimui_group_query_pane

0x945d,	// (0x00088a25) ncimui_list_pane_ParamLimits

0x945d,	// (0x00088a25) ncimui_list_pane

0x947c,	// (0x00088a44) ncimui_text_pane_ParamLimits

0x947c,	// (0x00088a44) ncimui_text_pane

0x9534,	// (0x00088afc) ncimui_text_pane_t1_ParamLimits

0x9534,	// (0x00088afc) ncimui_text_pane_t1

0xdefd,	// (0x0008d4c5) ncimui_list_single_graphic_pane_ParamLimits

0xdefd,	// (0x0008d4c5) ncimui_list_single_graphic_pane

0x9552,	// (0x00088b1a) ncimui_query_pane_ParamLimits

0x9552,	// (0x00088b1a) ncimui_query_pane

0xac0c,	// (0x0008a1d4) list_highlight_pane_cp013

0xdf0a,	// (0x0008d4d2) ncim_list_query_list_pane_t1_copy1

0xdf18,	// (0x0008d4e0) ncim_list_single_graphic_pane_g1

0xdf20,	// (0x0008d4e8) ncim_query_button_pane_cp01

0xdf2c,	// (0x0008d4f4) ncim_query_entry_pane_ParamLimits

0xdf2c,	// (0x0008d4f4) ncim_query_entry_pane

0xdf3f,	// (0x0008d507) ncimui_query_pane_g1

0xdf4b,	// (0x0008d513) ncimui_query_pane_t1_ParamLimits

0xdf4b,	// (0x0008d513) ncimui_query_pane_t1

0x206a,	// (0x00081632) input_focus_pane_cp012

0xdf64,	// (0x0008d52c) ncim_query_entry_pane_t1

0xb3ce,	// (0x0008a996) main_im_pane_ParamLimits

0x206a,	// (0x00081632) main_mobtv_pane_ParamLimits

0x206a,	// (0x00081632) main_mobtv_pane

0x8366,	// (0x0008792e) main_cset6_slider_pane_g18_ParamLimits

0x8366,	// (0x0008792e) main_cset6_slider_pane_g18

0x8396,	// (0x0008795e) main_cset6_slider_pane_g19_ParamLimits

0x8396,	// (0x0008795e) main_cset6_slider_pane_g19

0xdf76,	// (0x0008d53e) bg_main_mobtv_pane_ParamLimits

0xdf76,	// (0x0008d53e) bg_main_mobtv_pane

0x9562,	// (0x00088b2a) main_mobtv_info_pane

0x956b,	// (0x00088b33) main_mobtv_loading_pane_ParamLimits

0x956b,	// (0x00088b33) main_mobtv_loading_pane

0xdf84,	// (0x0008d54c) main_mobtv_pg_channel_list_pane

0xdf8e,	// (0x0008d556) main_mobtv_pg_hdr_pane

0x9578,	// (0x00088b40) main_mobtv_programe_curr_pane_ParamLimits

0x9578,	// (0x00088b40) main_mobtv_programe_curr_pane

0x9585,	// (0x00088b4d) main_mobtv_programe_next_pane_ParamLimits

0x9585,	// (0x00088b4d) main_mobtv_programe_next_pane

0xdf97,	// (0x0008d55f) popup_mobtv_noti_window

0xc860,	// (0x0008be28) main_tv_pg_hdr_pane_g1

0xdf9f,	// (0x0008d567) main_tv_pg_hdr_pane_g2

0xdfa7,	// (0x0008d56f) main_tv_pg_hdr_pane_g3

0xdfaf,	// (0x0008d577) main_tv_pg_hdr_pane_g4

0xdfb7,	// (0x0008d57f) main_tv_pg_hdr_pane_g5

0xdfbf,	// (0x0008d587) main_tv_pg_hdr_pane_g6

0xdfc7,	// (0x0008d58f) main_tv_pg_hdr_pane_g7

0xdfcf,	// (0x0008d597) main_tv_pg_hdr_pane_g8

0xdfd7,	// (0x0008d59f) main_tv_pg_hdr_pane_g9

0xdfdf,	// (0x0008d5a7) main_tv_pg_hdr_pane_g10

0xdfe9,	// (0x0008d5b1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x0008f1fd) main_tv_pg_hdr_pane_g

0xdff3,	// (0x0008d5bb) main_tv_pg_hdr_pane_t1

0xe001,	// (0x0008d5c9) main_tv_pg_hdr_pane_t2

0xe00f,	// (0x0008d5d7) main_tv_pg_hdr_pane_t3

0xe01d,	// (0x0008d5e5) main_tv_pg_hdr_pane_t4

0xe02b,	// (0x0008d5f3) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x0008f214) main_tv_pg_hdr_pane_t

0xe039,	// (0x0008d601) single_mobtv_pg_channel_pane_ParamLimits

0xe039,	// (0x0008d601) single_mobtv_pg_channel_pane

0xe04b,	// (0x0008d613) single_mobtv_pg_channel_table_pane

0xe054,	// (0x0008d61c) single_mobtv_pg_channel_thumb_pane

0xe05d,	// (0x0008d625) single_tv_pg_channel_pane_g1

0xe066,	// (0x0008d62e) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x0008f21f) single_tv_pg_channel_pane_g

0xca8f,	// (0x0008c057) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca8f,	// (0x0008c057) bg_single_mobtv_pg_channel_thumb_pane

0xe06f,	// (0x0008d637) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe06f,	// (0x0008d637) single_mobtv_pg_channel_thumb_pane_g1

0xe07d,	// (0x0008d645) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe07d,	// (0x0008d645) single_mobtv_pg_channel_thumb_pane_g2

0xe089,	// (0x0008d651) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe089,	// (0x0008d651) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x0008f224) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x0008f224) single_mobtv_pg_channel_thumb_pane_g

0xe095,	// (0x0008d65d) single_mobtv_pg_channel_thumb_pane_t1

0xe0a3,	// (0x0008d66b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0008f22b) single_mobtv_pg_channel_thumb_pane_t

0xc860,	// (0x0008be28) bg_single_mobtv_pg_channel_table_pane_g1

0xc860,	// (0x0008be28) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x0008ecdb) bg_single_mobtv_pg_channel_table_pane_g

0xe0b1,	// (0x0008d679) single_mobtv_pg_channel_table_pane_t1

0xe0bf,	// (0x0008d687) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x0008f230) single_mobtv_pg_channel_table_pane_t

0x959a,	// (0x00088b62) main_mobtv_info_pane_g1_ParamLimits

0x959a,	// (0x00088b62) main_mobtv_info_pane_g1

0x95b6,	// (0x00088b7e) main_mobtv_info_pane_t1_ParamLimits

0x95b6,	// (0x00088b7e) main_mobtv_info_pane_t1

0x961c,	// (0x00088be4) main_mobtv_info_pane_t2_ParamLimits

0x961c,	// (0x00088be4) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x0008f23a) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x0008f23a) main_mobtv_info_pane_t

0x969f,	// (0x00088c67) wait_bar_pane_cp05

0x96af,	// (0x00088c77) main_mobtv_loading_pane_g1_ParamLimits

0x96af,	// (0x00088c77) main_mobtv_loading_pane_g1

0x96c0,	// (0x00088c88) main_mobtv_loading_pane_g2_ParamLimits

0x96c0,	// (0x00088c88) main_mobtv_loading_pane_g2

0x96cc,	// (0x00088c94) main_mobtv_loading_pane_g3_ParamLimits

0x96cc,	// (0x00088c94) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x0008f241) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x0008f241) main_mobtv_loading_pane_g

0xe0cd,	// (0x0008d695) main_mobtv_loading_pane_t1_ParamLimits

0xe0cd,	// (0x0008d695) main_mobtv_loading_pane_t1

0xe0e5,	// (0x0008d6ad) main_mobtv_loading_pane_t2_ParamLimits

0xe0e5,	// (0x0008d6ad) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x0008f248) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x0008f248) main_mobtv_loading_pane_t

0x96dd,	// (0x00088ca5) wait_bar_pane_cp06_ParamLimits

0x96dd,	// (0x00088ca5) wait_bar_pane_cp06

0xe109,	// (0x0008d6d1) main_mobtv_programe_curr_pane_t1

0xe117,	// (0x0008d6df) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0008f24d) main_mobtv_programe_curr_pane_t

0xe125,	// (0x0008d6ed) main_mobtv_programe_next_pane_t1

0xe133,	// (0x0008d6fb) main_mobtv_programe_next_pane_t2

0xe141,	// (0x0008d709) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x0008f252) main_mobtv_programe_next_pane_t

0xac0c,	// (0x0008a1d4) bg_popup_mobtv_noti_window_pane

0xe14f,	// (0x0008d717) popup_mobtv_noti_window_g1

0xe157,	// (0x0008d71f) popup_mobtv_noti_window_t1

0xe165,	// (0x0008d72d) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x0008f259) popup_mobtv_noti_window_t

0xc860,	// (0x0008be28) bg_popup_mobtv_noti_window_pane_g1

0xac0c,	// (0x0008a1d4) sc_clock_pane

0xac0c,	// (0x0008a1d4) main_fs_bigclock_pane

0x8f18,	// (0x000884e0) blid2_tripm_pane_t4_ParamLimits

0x8f18,	// (0x000884e0) blid2_tripm_pane_t4

0x96ec,	// (0x00088cb4) sc_clock_pane_g1_ParamLimits

0x96ec,	// (0x00088cb4) sc_clock_pane_g1

0x96fe,	// (0x00088cc6) sc_clock_pane_t1_ParamLimits

0x96fe,	// (0x00088cc6) sc_clock_pane_t1

0x9720,	// (0x00088ce8) sc_clock_pane_t2_ParamLimits

0x9720,	// (0x00088ce8) sc_clock_pane_t2

0x9736,	// (0x00088cfe) sc_clock_pane_t3_ParamLimits

0x9736,	// (0x00088cfe) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x0008f25e) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x0008f25e) sc_clock_pane_t

0xa43a,	// (0x00089a02) main_fs_bigclock_indicator_pane_ParamLimits

0xa43a,	// (0x00089a02) main_fs_bigclock_indicator_pane

0xca5f,	// (0x0008c027) main_fs_bigclock_pane_g1_ParamLimits

0xca5f,	// (0x0008c027) main_fs_bigclock_pane_g1

0xa446,	// (0x00089a0e) main_fs_bigclock_pane_t1_ParamLimits

0xa446,	// (0x00089a0e) main_fs_bigclock_pane_t1

0xa458,	// (0x00089a20) main_fs_bigclock_pane_t2_ParamLimits

0xa458,	// (0x00089a20) main_fs_bigclock_pane_t2

0xa46a,	// (0x00089a32) main_fs_bigclock_pane_t3_ParamLimits

0xa46a,	// (0x00089a32) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x0008f458) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x0008f458) main_fs_bigclock_pane_t

0x02d2,	// (0x0007f89a) main_fs_bigclock_indicator_pane_g1

0xde2d,	// (0x0008d3f5) ncim_query_content_pane_g2_ParamLimits

0xde2d,	// (0x0008d3f5) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x0008f1eb) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x0008f1eb) ncim_query_content_pane_g

0x974b,	// (0x00088d13) sc_clock_pane_t4_ParamLimits

0x974b,	// (0x00088d13) sc_clock_pane_t4

0x206a,	// (0x00081632) main_radioblah_pane

0xd187,	// (0x0008c74f) cell_call4_button_pane_t1_copy1_ParamLimits

0xd187,	// (0x0008c74f) cell_call4_button_pane_t1_copy1

0x93d3,	// (0x0008899b) main_ncimui_pane_t1_ParamLimits

0x93d3,	// (0x0008899b) main_ncimui_pane_t1

0x93ed,	// (0x000889b5) main_ncimui_pane_t2_ParamLimits

0x93ed,	// (0x000889b5) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x0008f1e4) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x0008f1e4) main_ncimui_pane_t

0xe28f,	// (0x0008d857) main_radioblah_anim_pane_ParamLimits

0xe28f,	// (0x0008d857) main_radioblah_anim_pane

0xe2a0,	// (0x0008d868) main_radioblah_info_pane_ParamLimits

0xe2a0,	// (0x0008d868) main_radioblah_info_pane

0xe2b4,	// (0x0008d87c) main_radioblah_pane_t1_ParamLimits

0xe2b4,	// (0x0008d87c) main_radioblah_pane_t1

0xe2d0,	// (0x0008d898) main_radioblah_pane_t2_ParamLimits

0xe2d0,	// (0x0008d898) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x0008f27f) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x0008f27f) main_radioblah_pane_t

0x97e2,	// (0x00088daa) main_radioblah_rocker_ctrl_pane_ParamLimits

0x97e2,	// (0x00088daa) main_radioblah_rocker_ctrl_pane

0xe318,	// (0x0008d8e0) main_radioblah_info_pane_t1_ParamLimits

0xe318,	// (0x0008d8e0) main_radioblah_info_pane_t1

0x9836,	// (0x00088dfe) main_radioblah_info_pane_t2_ParamLimits

0x9836,	// (0x00088dfe) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x0008f288) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x0008f288) main_radioblah_info_pane_t

0xc860,	// (0x0008be28) main_radioblah_rocker_ctrl_pane_g1

0x98e4,	// (0x00088eac) main_radioblah_rocker_ctrl_pane_g2

0x98ec,	// (0x00088eb4) main_radioblah_rocker_ctrl_pane_g3

0x98f4,	// (0x00088ebc) main_radioblah_rocker_ctrl_pane_g4

0x98fc,	// (0x00088ec4) main_radioblah_rocker_ctrl_pane_g5

0x9904,	// (0x00088ecc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x0008f291) main_radioblah_rocker_ctrl_pane_g

0x939d,	// (0x00088965) main_cset_text2_pane_t1_copy1_ParamLimits

0xee99,	// (0x0008e461) cam4_image_uncrop_qvga_pane

0xef01,	// (0x0008e4c9) vid4_image_uncrop_qcif_pane

0xf039,	// (0x0008e601) cam6_image_uncrop_qvga_pane_ParamLimits

0xf039,	// (0x0008e601) cam6_image_uncrop_qvga_pane

0xda38,	// (0x0008d000) vid6_image_uncrop_qcif_pane_ParamLimits

0xda38,	// (0x0008d000) vid6_image_uncrop_qcif_pane

0xac0c,	// (0x0008a1d4) bg_popup_preview_window_pane_cp03

0xddd3,	// (0x0008d39b) list_cset_text2_pane

0xdddb,	// (0x0008d3a3) main_cset6_text2_pane_g1

0xdde3,	// (0x0008d3ab) main_cset6_text2_pane_t1

0x990c,	// (0x00088ed4) list_cset_text2_pane_t1_ParamLimits

0x990c,	// (0x00088ed4) list_cset_text2_pane_t1

0x206a,	// (0x00081632) main_radioblah_pane_ParamLimits

0x968d,	// (0x00088c55) main_mobtv_info_pane_t3_ParamLimits

0x968d,	// (0x00088c55) main_mobtv_info_pane_t3

0x97d0,	// (0x00088d98) main_radioblah_pane_g1

0x980a,	// (0x00088dd2) main_radioblah_info_pane_g1

0x9889,	// (0x00088e51) main_radioblah_info_pane_t3_ParamLimits

0x9889,	// (0x00088e51) main_radioblah_info_pane_t3

0x49e7,	// (0x00083faf) highlight_cell_cale_month_pane_ParamLimits

0x49e7,	// (0x00083faf) highlight_cell_cale_month_pane

0xac0c,	// (0x0008a1d4) main_phob_fisheye_pane

0xcbd9,	// (0x0008c1a1) scroll_pane_cp0031_ParamLimits

0xcbd9,	// (0x0008c1a1) scroll_pane_cp0031

0xdb42,	// (0x0008d10a) wait_bar_pane_cp08_ParamLimits

0x9229,	// (0x000887f1) cset_list_set_pane_copy1_ParamLimits

0xe352,	// (0x0008d91a) highlight_cell_cale_month_pane_g1

0x9925,	// (0x00088eed) highlight_cell_cale_month_pane_t1

0xe35a,	// (0x0008d922) list_gen_pane_cp01

0xd374,	// (0x0008c93c) scroll_pane_01

0xe363,	// (0x0008d92b) list_single_double_fisheye_pane

0x9933,	// (0x00088efb) list_double_fisheye_pane_g1_ParamLimits

0x9933,	// (0x00088efb) list_double_fisheye_pane_g1

0x993f,	// (0x00088f07) list_double_fisheye_pane_g2_ParamLimits

0x993f,	// (0x00088f07) list_double_fisheye_pane_g2

0x9953,	// (0x00088f1b) list_double_fisheye_pane_g3_ParamLimits

0x9953,	// (0x00088f1b) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x0008f29e) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x0008f29e) list_double_fisheye_pane_g

0x997c,	// (0x00088f44) list_double_fisheye_pane_t1_ParamLimits

0x997c,	// (0x00088f44) list_double_fisheye_pane_t1

0x9997,	// (0x00088f5f) list_double_fisheye_pane_t2_ParamLimits

0x9997,	// (0x00088f5f) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x0008f2a9) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x0008f2a9) list_double_fisheye_pane_t

0xac0c,	// (0x0008a1d4) main_call5_pane

0x9774,	// (0x00088d3c) sc_swipe_pane_ParamLimits

0x9774,	// (0x00088d3c) sc_swipe_pane

0x99ca,	// (0x00088f92) call5_image_pane_ParamLimits

0x99ca,	// (0x00088f92) call5_image_pane

0x99df,	// (0x00088fa7) call5_swipe_1_pane_ParamLimits

0x99df,	// (0x00088fa7) call5_swipe_1_pane

0x99f0,	// (0x00088fb8) call5_swipe_2_pane_ParamLimits

0x99f0,	// (0x00088fb8) call5_swipe_2_pane

0x9a15,	// (0x00088fdd) popup_call5_audio_first_window_ParamLimits

0x9a15,	// (0x00088fdd) popup_call5_audio_first_window

0xca8f,	// (0x0008c057) call5_swipe_1_pane_g1_ParamLimits

0xca8f,	// (0x0008c057) call5_swipe_1_pane_g1

0xe36c,	// (0x0008d934) call5_swipe_1_pane_g2_ParamLimits

0xe36c,	// (0x0008d934) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0008f2ae) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0008f2ae) call5_swipe_1_pane_g

0xe378,	// (0x0008d940) call5_swipe_1_pane_t1_ParamLimits

0xe378,	// (0x0008d940) call5_swipe_1_pane_t1

0xca8f,	// (0x0008c057) call5_swipe_2_pane_g1_ParamLimits

0xca8f,	// (0x0008c057) call5_swipe_2_pane_g1

0xe38d,	// (0x0008d955) call5_swipe_2_pane_g2_ParamLimits

0xe38d,	// (0x0008d955) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x0008f2b3) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x0008f2b3) call5_swipe_2_pane_g

0xe399,	// (0x0008d961) call5_swipe_2_pane_t1_ParamLimits

0xe399,	// (0x0008d961) call5_swipe_2_pane_t1

0xe3ae,	// (0x0008d976) sc_swipe_pane_g1_ParamLimits

0xe3ae,	// (0x0008d976) sc_swipe_pane_g1

0xe3bb,	// (0x0008d983) sc_swipe_pane_g2_ParamLimits

0xe3bb,	// (0x0008d983) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0008f2b8) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x0008f2b8) sc_swipe_pane_g

0xe3c7,	// (0x0008d98f) sc_swipe_pane_t1_ParamLimits

0xe3c7,	// (0x0008d98f) sc_swipe_pane_t1

0xac0c,	// (0x0008a1d4) main_cmail_launcher_pane

0x9a24,	// (0x00088fec) aid_size_cell_cmail_l_ParamLimits

0x9a24,	// (0x00088fec) aid_size_cell_cmail_l

0x9a3d,	// (0x00089005) grid_cmail_l_pane_ParamLimits

0x9a3d,	// (0x00089005) grid_cmail_l_pane

0x9a52,	// (0x0008901a) cell_cmail_l_pane_ParamLimits

0x9a52,	// (0x0008901a) cell_cmail_l_pane

0x9a74,	// (0x0008903c) cell_cmail_l_pane_g1_ParamLimits

0x9a74,	// (0x0008903c) cell_cmail_l_pane_g1

0x9a84,	// (0x0008904c) cell_cmail_l_pane_t1_ParamLimits

0x9a84,	// (0x0008904c) cell_cmail_l_pane_t1

0xe3dc,	// (0x0008d9a4) cell_cmail_l_pane_t2_ParamLimits

0xe3dc,	// (0x0008d9a4) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x0008f2bd) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x0008f2bd) cell_cmail_l_pane_t

0x206a,	// (0x00081632) grid_highlight_pane_cp018_ParamLimits

0x206a,	// (0x00081632) grid_highlight_pane_cp018

0x3104,	// (0x000826cc) main2_pane_ParamLimits

0x3104,	// (0x000826cc) main2_pane

0xb4d1,	// (0x0008aa99) popup_sp_fs_action_menu_bg_pane_g1

0xb4d9,	// (0x0008aaa1) popup_sp_fs_action_menu_bg_pane_g2

0xb4e1,	// (0x0008aaa9) popup_sp_fs_action_menu_bg_pane_g3

0xb4e9,	// (0x0008aab1) popup_sp_fs_action_menu_bg_pane_g4

0xb4f1,	// (0x0008aab9) popup_sp_fs_action_menu_bg_pane_g5

0xb4f9,	// (0x0008aac1) popup_sp_fs_action_menu_bg_pane_g6

0xb501,	// (0x0008aac9) popup_sp_fs_action_menu_bg_pane_g7

0xb509,	// (0x0008aad1) popup_sp_fs_action_menu_bg_pane_g8

0xb511,	// (0x0008aad9) popup_sp_fs_action_menu_bg_pane_g9

0xb519,	// (0x0008aae1) popup_sp_fs_action_menu_bg_pane_g10

0xb519,	// (0x0008aae1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0008e774) popup_sp_fs_action_menu_bg_pane_g

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t3_g3_g1

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t3_g3_g2

0xb708,	// (0x0008acd0) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb708,	// (0x0008acd0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0008e824) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0008e824) list_medium_line_x2_t3_g3_g

0xb714,	// (0x0008acdc) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb714,	// (0x0008acdc) list_medium_line_x2_t3_g3_t1

0x3e3d,	// (0x00083405) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3e3d,	// (0x00083405) list_medium_line_x2_t3_g3_t2

0xb729,	// (0x0008acf1) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb729,	// (0x0008acf1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008e82b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008e82b) list_medium_line_x2_t3_g3_t

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t3_g2_g1

0xb708,	// (0x0008acd0) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb708,	// (0x0008acd0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0008e832) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0008e832) list_medium_line_x2_t3_g2_g

0xb73e,	// (0x0008ad06) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb73e,	// (0x0008ad06) list_medium_line_x2_t3_g2_t1

0xb754,	// (0x0008ad1c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb754,	// (0x0008ad1c) list_medium_line_x2_t3_g2_t2

0xb729,	// (0x0008acf1) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb729,	// (0x0008acf1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0008e837) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0008e837) list_medium_line_x2_t3_g2_t

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t4_g4_g1

0xb766,	// (0x0008ad2e) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb766,	// (0x0008ad2e) list_medium_line_x2_t4_g4_g2

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t4_g4_g3

0xb772,	// (0x0008ad3a) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb772,	// (0x0008ad3a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0008e83e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0008e83e) list_medium_line_x2_t4_g4_g

0x3e4f,	// (0x00083417) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3e4f,	// (0x00083417) list_medium_line_x2_t4_g4_t1

0x3e69,	// (0x00083431) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3e69,	// (0x00083431) list_medium_line_x2_t4_g4_t2

0x3e7e,	// (0x00083446) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3e7e,	// (0x00083446) list_medium_line_x2_t4_g4_t3

0xb77e,	// (0x0008ad46) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb77e,	// (0x0008ad46) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0008e847) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0008e847) list_medium_line_x2_t4_g4_t

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t2_g4_g1

0xb766,	// (0x0008ad2e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb766,	// (0x0008ad2e) list_medium_line_x2_t2_g4_g2

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t2_g4_g3

0xb708,	// (0x0008acd0) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb708,	// (0x0008acd0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008e8ae) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008e8ae) list_medium_line_x2_t2_g4_g

0xba76,	// (0x0008b03e) list_medium_line_x2_t2_g4_t1_ParamLimits

0xba76,	// (0x0008b03e) list_medium_line_x2_t2_g4_t1

0xb729,	// (0x0008acf1) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb729,	// (0x0008acf1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008e8b7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008e8b7) list_medium_line_x2_t2_g4_t

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t2_g3_g1

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t2_g3_g2

0xb708,	// (0x0008acd0) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb708,	// (0x0008acd0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0008e824) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0008e824) list_medium_line_x2_t2_g3_g

0xba8b,	// (0x0008b053) list_medium_line_x2_t2_g3_t1_ParamLimits

0xba8b,	// (0x0008b053) list_medium_line_x2_t2_g3_t1

0xb729,	// (0x0008acf1) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb729,	// (0x0008acf1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008e8bc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008e8bc) list_medium_line_x2_t2_g3_t

0x4b1f,	// (0x000840e7) main_sp_fs_list_pane_ParamLimits

0x4b1f,	// (0x000840e7) main_sp_fs_list_pane

0x4b2c,	// (0x000840f4) sp_fs_scroll_pane_ParamLimits

0x4b2c,	// (0x000840f4) sp_fs_scroll_pane

0x4b39,	// (0x00084101) list_medium_line_x2_t3_t1

0x4b49,	// (0x00084111) list_medium_line_x2_t3_t2

0xbce5,	// (0x0008b2ad) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0008e907) list_medium_line_x2_t3_t

0x4b57,	// (0x0008411f) list_medium_line_x3_t4_t1

0x4b67,	// (0x0008412f) list_medium_line_x3_t4_t2

0xbcf3,	// (0x0008b2bb) list_medium_line_x3_t4_t3

0xbd01,	// (0x0008b2c9) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008e90e) list_medium_line_x3_t4_t

0x4b75,	// (0x0008413d) list_medium_line_x4_t5_t1

0x4b85,	// (0x0008414d) list_medium_line_x4_t5_t2

0xbcf3,	// (0x0008b2bb) list_medium_line_x4_t5_t3

0xbd0f,	// (0x0008b2d7) list_medium_line_x4_t5_t4

0xbd01,	// (0x0008b2c9) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0008e917) list_medium_line_x4_t5_t

0xb6f0,	// (0x0008acb8) list_medium_line_t4_g4_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_t4_g4_g1

0xb772,	// (0x0008ad3a) list_medium_line_t4_g4_g2_ParamLimits

0xb772,	// (0x0008ad3a) list_medium_line_t4_g4_g2

0xbd1d,	// (0x0008b2e5) list_medium_line_t4_g4_g3_ParamLimits

0xbd1d,	// (0x0008b2e5) list_medium_line_t4_g4_g3

0xb708,	// (0x0008acd0) list_medium_line_t4_g4_g4_ParamLimits

0xb708,	// (0x0008acd0) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0008e922) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0008e922) list_medium_line_t4_g4_g

0xbd29,	// (0x0008b2f1) list_medium_line_t4_g4_t1_ParamLimits

0xbd29,	// (0x0008b2f1) list_medium_line_t4_g4_t1

0xbd3e,	// (0x0008b306) list_medium_line_t4_g4_t2_ParamLimits

0xbd3e,	// (0x0008b306) list_medium_line_t4_g4_t2

0xbd54,	// (0x0008b31c) list_medium_line_t4_g4_t3_ParamLimits

0xbd54,	// (0x0008b31c) list_medium_line_t4_g4_t3

0xbd6a,	// (0x0008b332) list_medium_line_t4_g4_t4_ParamLimits

0xbd6a,	// (0x0008b332) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008e92b) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008e92b) list_medium_line_t4_g4_t

0x4c54,	// (0x0008421c) chi_dic_find_pane_g1

0x5b69,	// (0x00085131) main_tport_pane

0xd4a2,	// (0x0008ca6a) list_medium_line_plain_t1

0xb6f0,	// (0x0008acb8) list_medium_line_t2_g2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_t2_g2_g1

0xb6fc,	// (0x0008acc4) list_medium_line_t2_g2_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x0008effa) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x0008effa) list_medium_line_t2_g2_g

0x871d,	// (0x00087ce5) list_medium_line_t2_g2_t1_ParamLimits

0x871d,	// (0x00087ce5) list_medium_line_t2_g2_t1

0x8734,	// (0x00087cfc) list_medium_line_t2_g2_t2_ParamLimits

0x8734,	// (0x00087cfc) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x0008efff) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x0008efff) list_medium_line_t2_g2_t

0xd7c9,	// (0x0008cd91) aid_sp_fs_list_icon_a_sm

0xd7d1,	// (0x0008cd99) aid_sp_fs_list_icon_d

0xd7d9,	// (0x0008cda1) aid_sp_fs_text_primary

0xd7e2,	// (0x0008cdaa) aid_sp_fs_text_secondary

0xd7eb,	// (0x0008cdb3) list_medium_line

0xd7eb,	// (0x0008cdb3) list_medium_line_g2

0xd7eb,	// (0x0008cdb3) list_medium_line_g3

0xd7eb,	// (0x0008cdb3) list_medium_line_plain

0xd7eb,	// (0x0008cdb3) list_medium_line_plain_t2

0xd7eb,	// (0x0008cdb3) list_medium_line_plain_t3

0xd7eb,	// (0x0008cdb3) list_medium_line_right_icon

0xd7eb,	// (0x0008cdb3) list_medium_line_right_iconx2

0xd7eb,	// (0x0008cdb3) list_medium_line_t2

0xd7eb,	// (0x0008cdb3) list_medium_line_t2_g2

0xd7eb,	// (0x0008cdb3) list_medium_line_t2_g3

0xd7eb,	// (0x0008cdb3) list_medium_line_t2_right_icon

0xd7eb,	// (0x0008cdb3) list_medium_line_t2_right_iconx2

0xd7eb,	// (0x0008cdb3) list_medium_line_t3

0xd7eb,	// (0x0008cdb3) list_medium_line_t3_g2

0xd7eb,	// (0x0008cdb3) list_medium_line_t3_g3

0xd7eb,	// (0x0008cdb3) list_medium_line_t3_right_iconx2

0xd7f4,	// (0x0008cdbc) list_medium_line_t4_g4

0xd7fd,	// (0x0008cdc5) list_medium_line_x2

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t2_g2

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t2_g3

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t2_g4

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t3

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t3_g2

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t3_g3

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t3_g4

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t4_g2

0xd7fd,	// (0x0008cdc5) list_medium_line_x2_t4_g4

0xd806,	// (0x0008cdce) list_medium_line_x3

0xd806,	// (0x0008cdce) list_medium_line_x3_t4

0xd806,	// (0x0008cdce) list_medium_line_x3_t4_g4

0xd7f4,	// (0x0008cdbc) list_medium_line_x4_t4

0xd7f4,	// (0x0008cdbc) list_medium_line_x4_t4_g7

0xd7f4,	// (0x0008cdbc) list_medium_line_x4_t5

0xd80f,	// (0x0008cdd7) list_single_fs_dyc_pane_ParamLimits

0xd80f,	// (0x0008cdd7) list_single_fs_dyc_pane

0xb6f0,	// (0x0008acb8) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x4_t4_g7_g1

0xdd08,	// (0x0008d2d0) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd08,	// (0x0008d2d0) list_medium_line_x4_t4_g7_g2

0xdd14,	// (0x0008d2dc) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd14,	// (0x0008d2dc) list_medium_line_x4_t4_g7_g3

0xdd23,	// (0x0008d2eb) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd23,	// (0x0008d2eb) list_medium_line_x4_t4_g7_g4

0xdd2f,	// (0x0008d2f7) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdd2f,	// (0x0008d2f7) list_medium_line_x4_t4_g7_g5

0xdd3e,	// (0x0008d306) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdd3e,	// (0x0008d306) list_medium_line_x4_t4_g7_g6

0xdd4d,	// (0x0008d315) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdd4d,	// (0x0008d315) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x0008f1ca) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x0008f1ca) list_medium_line_x4_t4_g7_g

0xdd59,	// (0x0008d321) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdd59,	// (0x0008d321) list_medium_line_x4_t4_g7_t1

0xdd6e,	// (0x0008d336) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdd6e,	// (0x0008d336) list_medium_line_x4_t4_g7_t2

0xdd83,	// (0x0008d34b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdd83,	// (0x0008d34b) list_medium_line_x4_t4_g7_t3

0xdd98,	// (0x0008d360) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd98,	// (0x0008d360) list_medium_line_x4_t4_g7_t4

0xddaa,	// (0x0008d372) list_medium_line_x4_t4_g7_t5_ParamLimits

0xddaa,	// (0x0008d372) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x0008f1d9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x0008f1d9) list_medium_line_x4_t4_g7_t

0xddbc,	// (0x0008d384) list_single_dyc_row_pane_ParamLimits

0xddbc,	// (0x0008d384) list_single_dyc_row_pane

0x99b9,	// (0x00088f81) call5_gesture_pane_ParamLimits

0x99b9,	// (0x00088f81) call5_gesture_pane

0x9a01,	// (0x00088fc9) call5_windows_pane_ParamLimits

0x9a01,	// (0x00088fc9) call5_windows_pane

0x9a9a,	// (0x00089062) call5_swipe_1_pane_cp_ParamLimits

0x9a9a,	// (0x00089062) call5_swipe_1_pane_cp

0x9aa6,	// (0x0008906e) call5_swipe_2_pane_cp_ParamLimits

0x9aa6,	// (0x0008906e) call5_swipe_2_pane_cp

0x1033,	// (0x000805fb) call5_image_pane_cp

0x9ab2,	// (0x0008907a) popup_call5_audio_first_window_cp_ParamLimits

0x9ab2,	// (0x0008907a) popup_call5_audio_first_window_cp

0xe3ae,	// (0x0008d976) call5_swipe_1_pane_g1_cp_ParamLimits

0xe3ae,	// (0x0008d976) call5_swipe_1_pane_g1_cp

0xe3ee,	// (0x0008d9b6) call5_swipe_1_pane_g2_cp

0xe3c7,	// (0x0008d98f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3c7,	// (0x0008d98f) call5_swipe_1_pane_t1_cp

0xe3ae,	// (0x0008d976) call5_swipe_2_pane_g1_cp_ParamLimits

0xe3ae,	// (0x0008d976) call5_swipe_2_pane_g1_cp

0xe3f6,	// (0x0008d9be) call5_swipe_2_pane_g2_cp

0xe3fe,	// (0x0008d9c6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3fe,	// (0x0008d9c6) call5_swipe_2_pane_t1_cp

0x206a,	// (0x00081632) main_sp_fs_email_pane

0xe413,	// (0x0008d9db) main_sp_fs_listscroll_pane_te

0x9abe,	// (0x00089086) popup_sp_fs_action_menu_pane_ParamLimits

0x9abe,	// (0x00089086) popup_sp_fs_action_menu_pane

0xc860,	// (0x0008be28) bg_sp_fs_ctrlbar_pane_g1

0xe41c,	// (0x0008d9e4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe425,	// (0x0008d9ed) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe42e,	// (0x0008d9f6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc860,	// (0x0008be28) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x0008f2c2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc64d,	// (0x0008bc15) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc64d,	// (0x0008bc15) bg_sp_fs_ctrlbar_ddmenu_pane

0xe437,	// (0x0008d9ff) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe437,	// (0x0008d9ff) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2098,	// (0x00081660) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2098,	// (0x00081660) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x0008f2cb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x0008f2cb) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe443,	// (0x0008da0b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe443,	// (0x0008da0b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe45d,	// (0x0008da25) list_medium_line_t2_right_icon_g1

0xe465,	// (0x0008da2d) list_medium_line_t2_right_icon_t1

0x9aee,	// (0x000890b6) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x0008f2d0) list_medium_line_t2_right_icon_t

0xc41d,	// (0x0008b9e5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc41d,	// (0x0008b9e5) bg_sp_fs_ctrlbar_pane

0x9b45,	// (0x0008910d) main_sp_fs_ctrlbar_button_pane_cp01

0x9b4d,	// (0x00089115) main_sp_fs_ctrlbar_ddmenu_pane

0xe4ad,	// (0x0008da75) main_sp_fs_ctrlbar_pane_g1

0xe4b9,	// (0x0008da81) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x0008f2d5) main_sp_fs_ctrlbar_pane_g

0xe4c5,	// (0x0008da8d) main_sp_fs_ctrlbar_pane_t1

0x9b57,	// (0x0008911f) main_sp_fs_ctrlbar_pane

0x9b78,	// (0x00089140) main_sp_fs_listscroll_pane_te_cp01

0x9b98,	// (0x00089160) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9b98,	// (0x00089160) popup_sp_fs_action_menu_pane_cp01

0x206a,	// (0x00081632) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x206a,	// (0x00081632) bg_sp_fs_highlight_list_pane_cp01

0x9bbd,	// (0x00089185) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9bbd,	// (0x00089185) sp_fs_action_menu_list_gene_pane_g1

0xe4da,	// (0x0008daa2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4da,	// (0x0008daa2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x0008f2da) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x0008f2da) sp_fs_action_menu_list_gene_pane_g

0x9bcc,	// (0x00089194) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9bcc,	// (0x00089194) sp_fs_action_menu_list_gene_pane_t1

0x9be4,	// (0x000891ac) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9be4,	// (0x000891ac) sp_fs_action_menu_list_gene_pane

0xe4e7,	// (0x0008daaf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4e7,	// (0x0008daaf) popup_sp_fs_action_menu_bg_pane

0x9c01,	// (0x000891c9) sp_fs_action_menu_list_pane_ParamLimits

0x9c01,	// (0x000891c9) sp_fs_action_menu_list_pane

0xe4f5,	// (0x0008dabd) sp_fs_scroll_pane_cp01_ParamLimits

0xe4f5,	// (0x0008dabd) sp_fs_scroll_pane_cp01

0x9c1d,	// (0x000891e5) list_medium_line_plain_t2_t1

0x9c2d,	// (0x000891f5) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x0008f2df) list_medium_line_plain_t2_t

0x9c3b,	// (0x00089203) list_medium_line_plain_t3_t1

0x9c4b,	// (0x00089213) list_medium_line_plain_t3_t2

0x9c59,	// (0x00089221) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x0008f2e4) list_medium_line_plain_t3_t

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t2_g2_g1

0xb708,	// (0x0008acd0) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb708,	// (0x0008acd0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0008e832) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0008e832) list_medium_line_x2_t2_g2_g

0xbd29,	// (0x0008b2f1) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbd29,	// (0x0008b2f1) list_medium_line_x2_t2_g2_t1

0xb729,	// (0x0008acf1) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb729,	// (0x0008acf1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x0008f2eb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x0008f2eb) list_medium_line_x2_t2_g2_t

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t4_g2_g1

0xe51b,	// (0x0008dae3) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe51b,	// (0x0008dae3) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x0008f2f0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x0008f2f0) list_medium_line_x2_t4_g2_g

0x9c67,	// (0x0008922f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9c67,	// (0x0008922f) list_medium_line_x2_t4_g2_t1

0x9c81,	// (0x00089249) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9c81,	// (0x00089249) list_medium_line_x2_t4_g2_t2

0x9c96,	// (0x0008925e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9c96,	// (0x0008925e) list_medium_line_x2_t4_g2_t3

0xb729,	// (0x0008acf1) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb729,	// (0x0008acf1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x0008f2f5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x0008f2f5) list_medium_line_x2_t4_g2_t

0xe52d,	// (0x0008daf5) list_medium_line_t3_right_iconx2_g1

0xe45d,	// (0x0008da25) list_medium_line_t3_right_iconx2_g2

0x9cab,	// (0x00089273) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x0008f2fe) list_medium_line_t3_right_iconx2_g

0x9cb3,	// (0x0008927b) list_medium_line_t3_right_iconx2_t1

0x9cc3,	// (0x0008928b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x0008f305) list_medium_line_t3_right_iconx2_t

0xb6f0,	// (0x0008acb8) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x3_t4_g4_g1

0xb6fc,	// (0x0008acc4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x3_t4_g4_g2

0xb772,	// (0x0008ad3a) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb772,	// (0x0008ad3a) list_medium_line_x3_t4_g4_g3

0xe535,	// (0x0008dafd) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe535,	// (0x0008dafd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x0008f30a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x0008f30a) list_medium_line_x3_t4_g4_g

0x871d,	// (0x00087ce5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x871d,	// (0x00087ce5) list_medium_line_x3_t4_g4_t1

0x8734,	// (0x00087cfc) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8734,	// (0x00087cfc) list_medium_line_x3_t4_g4_t2

0xe541,	// (0x0008db09) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe541,	// (0x0008db09) list_medium_line_x3_t4_g4_t3

0xe556,	// (0x0008db1e) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe556,	// (0x0008db1e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x0008f313) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x0008f313) list_medium_line_x3_t4_g4_t

0x9cd1,	// (0x00089299) list_single_dyc_row_text_pane_t1_ParamLimits

0x9cd1,	// (0x00089299) list_single_dyc_row_text_pane_t1

0x9d08,	// (0x000892d0) list_single_dyc_row_text_pane_t2_ParamLimits

0x9d08,	// (0x000892d0) list_single_dyc_row_text_pane_t2

0xe573,	// (0x0008db3b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe573,	// (0x0008db3b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x0008f31c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x0008f31c) list_single_dyc_row_text_pane_t

0xe585,	// (0x0008db4d) list_single_dyc_row_pane_g1_ParamLimits

0xe585,	// (0x0008db4d) list_single_dyc_row_pane_g1

0xe591,	// (0x0008db59) list_single_dyc_row_pane_g2_ParamLimits

0xe591,	// (0x0008db59) list_single_dyc_row_pane_g2

0xe59d,	// (0x0008db65) list_single_dyc_row_pane_g3_ParamLimits

0xe59d,	// (0x0008db65) list_single_dyc_row_pane_g3

0xe5a9,	// (0x0008db71) list_single_dyc_row_pane_g4_ParamLimits

0xe5a9,	// (0x0008db71) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x0008f323) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x0008f323) list_single_dyc_row_pane_g

0xe5b5,	// (0x0008db7d) list_single_dyc_row_text_pane_ParamLimits

0xe5b5,	// (0x0008db7d) list_single_dyc_row_text_pane

0xac0c,	// (0x0008a1d4) bg_sp_fs_scroll_pane

0xe5d4,	// (0x0008db9c) thumb_sp_fs_scroll_pane

0xb6f0,	// (0x0008acb8) list_medium_line_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_g1

0xbd29,	// (0x0008b2f1) list_medium_line_t1_ParamLimits

0xbd29,	// (0x0008b2f1) list_medium_line_t1

0xb6f0,	// (0x0008acb8) list_medium_line_x2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_g1

0xb6fc,	// (0x0008acc4) list_medium_line_x2_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x0008effa) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x0008effa) list_medium_line_x2_g

0xe5dd,	// (0x0008dba5) list_medium_line_x2_t1_ParamLimits

0xe5dd,	// (0x0008dba5) list_medium_line_x2_t1

0xb6f0,	// (0x0008acb8) list_medium_line_x3_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x3_g1

0xb6fc,	// (0x0008acc4) list_medium_line_x3_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x0008effa) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x0008effa) list_medium_line_x3_g

0xe5dd,	// (0x0008dba5) list_medium_line_x3_t1_ParamLimits

0xe5dd,	// (0x0008dba5) list_medium_line_x3_t1

0xe5f3,	// (0x0008dbbb) thumb_sp_fs_scroll_pane_g1

0xe5fc,	// (0x0008dbc4) thumb_sp_fs_scroll_pane_g2

0xe605,	// (0x0008dbcd) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0008f32c) thumb_sp_fs_scroll_pane_g

0xe5f3,	// (0x0008dbbb) bg_sp_fs_scroll_pane_g1

0xe5fc,	// (0x0008dbc4) bg_sp_fs_scroll_pane_g2

0xe605,	// (0x0008dbcd) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0008f32c) bg_sp_fs_scroll_pane_g

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_x2_t3_g4_g1

0xb766,	// (0x0008ad2e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb766,	// (0x0008ad2e) list_medium_line_x2_t3_g4_g2

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_x2_t3_g4_g3

0xb708,	// (0x0008acd0) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb708,	// (0x0008acd0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008e8ae) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008e8ae) list_medium_line_x2_t3_g4_g

0x9d62,	// (0x0008932a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d62,	// (0x0008932a) list_medium_line_x2_t3_g4_t1

0x9d78,	// (0x00089340) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d78,	// (0x00089340) list_medium_line_x2_t3_g4_t2

0xb729,	// (0x0008acf1) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb729,	// (0x0008acf1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x0008f333) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x0008f333) list_medium_line_x2_t3_g4_t

0xb6f0,	// (0x0008acb8) list_medium_line_g2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_g2_g1

0xb6fc,	// (0x0008acc4) list_medium_line_g2_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x0008effa) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x0008effa) list_medium_line_g2_g

0xba8b,	// (0x0008b053) list_medium_line_g2_t1_ParamLimits

0xba8b,	// (0x0008b053) list_medium_line_g2_t1

0xb6f0,	// (0x0008acb8) list_medium_line_t3_g2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_t3_g2_g1

0xb6fc,	// (0x0008acc4) list_medium_line_t3_g2_g2_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x0008effa) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x0008effa) list_medium_line_t3_g2_g

0x9d91,	// (0x00089359) list_medium_line_t3_g2_t1_ParamLimits

0x9d91,	// (0x00089359) list_medium_line_t3_g2_t1

0x9da8,	// (0x00089370) list_medium_line_t3_g2_t2_ParamLimits

0x9da8,	// (0x00089370) list_medium_line_t3_g2_t2

0x9dbd,	// (0x00089385) list_medium_line_t3_g2_t3_ParamLimits

0x9dbd,	// (0x00089385) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x0008f33a) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x0008f33a) list_medium_line_t3_g2_t

0xe45d,	// (0x0008da25) list_medium_line_right_icon_g1

0xe60e,	// (0x0008dbd6) list_medium_line_right_icon_t1

0xb6f0,	// (0x0008acb8) list_medium_line_t2_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_t2_g1

0xe61c,	// (0x0008dbe4) list_medium_line_t2_t1_ParamLimits

0xe61c,	// (0x0008dbe4) list_medium_line_t2_t1

0x9dd2,	// (0x0008939a) list_medium_line_t2_t2_ParamLimits

0x9dd2,	// (0x0008939a) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x0008f341) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x0008f341) list_medium_line_t2_t

0xb6f0,	// (0x0008acb8) list_medium_line_t3_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_t3_g1

0x9de7,	// (0x000893af) list_medium_line_t3_t1_ParamLimits

0x9de7,	// (0x000893af) list_medium_line_t3_t1

0x9dfe,	// (0x000893c6) list_medium_line_t3_t2_ParamLimits

0x9dfe,	// (0x000893c6) list_medium_line_t3_t2

0x9e13,	// (0x000893db) list_medium_line_t3_t3_ParamLimits

0x9e13,	// (0x000893db) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x0008f346) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x0008f346) list_medium_line_t3_t

0xb6f0,	// (0x0008acb8) list_medium_line_g3_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_g3_g1

0xb766,	// (0x0008ad2e) list_medium_line_g3_g2_ParamLimits

0xb766,	// (0x0008ad2e) list_medium_line_g3_g2

0xb6fc,	// (0x0008acc4) list_medium_line_g3_g3_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x0008f34d) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x0008f34d) list_medium_line_g3_g

0xba76,	// (0x0008b03e) list_medium_line_g3_t1_ParamLimits

0xba76,	// (0x0008b03e) list_medium_line_g3_t1

0xb6f0,	// (0x0008acb8) list_medium_line_t2_g3_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_t2_g3_g1

0xb766,	// (0x0008ad2e) list_medium_line_t2_g3_g2_ParamLimits

0xb766,	// (0x0008ad2e) list_medium_line_t2_g3_g2

0xb6fc,	// (0x0008acc4) list_medium_line_t2_g3_g3_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x0008f34d) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x0008f34d) list_medium_line_t2_g3_g

0x9e25,	// (0x000893ed) list_medium_line_t2_g3_t1_ParamLimits

0x9e25,	// (0x000893ed) list_medium_line_t2_g3_t1

0x9e3c,	// (0x00089404) list_medium_line_t2_g3_t2_ParamLimits

0x9e3c,	// (0x00089404) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x0008f354) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x0008f354) list_medium_line_t2_g3_t

0xb6f0,	// (0x0008acb8) list_medium_line_t3_g3_g1_ParamLimits

0xb6f0,	// (0x0008acb8) list_medium_line_t3_g3_g1

0xb766,	// (0x0008ad2e) list_medium_line_t3_g3_g2_ParamLimits

0xb766,	// (0x0008ad2e) list_medium_line_t3_g3_g2

0xb6fc,	// (0x0008acc4) list_medium_line_t3_g3_g3_ParamLimits

0xb6fc,	// (0x0008acc4) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x0008f34d) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x0008f34d) list_medium_line_t3_g3_g

0x9e51,	// (0x00089419) list_medium_line_t3_g3_t1_ParamLimits

0x9e51,	// (0x00089419) list_medium_line_t3_g3_t1

0x9e65,	// (0x0008942d) list_medium_line_t3_g3_t2_ParamLimits

0x9e65,	// (0x0008942d) list_medium_line_t3_g3_t2

0x9e77,	// (0x0008943f) list_medium_line_t3_g3_t3_ParamLimits

0x9e77,	// (0x0008943f) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x0008f359) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x0008f359) list_medium_line_t3_g3_t

0xe52d,	// (0x0008daf5) list_medium_line_right_iconx2_g1

0xe45d,	// (0x0008da25) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x0008f360) list_medium_line_right_iconx2_g

0xe636,	// (0x0008dbfe) list_medium_line_right_iconx2_t1

0xe52d,	// (0x0008daf5) list_medium_line_t2_right_iconx2_g1

0xe45d,	// (0x0008da25) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x0008f360) list_medium_line_t2_right_iconx2_g

0x9e89,	// (0x00089451) list_medium_line_t2_right_iconx2_t1

0x9e99,	// (0x00089461) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x0008f365) list_medium_line_t2_right_iconx2_t

0xd4a2,	// (0x0008ca6a) list_medium_line_x4_t4_t1

0x9ea7,	// (0x0008946f) list_medium_line_x4_t4_t2

0x9eb7,	// (0x0008947f) list_medium_line_x4_t4_t3

0x9ec7,	// (0x0008948f) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x0008f36a) list_medium_line_x4_t4_t

0x9f12,	// (0x000894da) tport_appsw_pane_ParamLimits

0x9f12,	// (0x000894da) tport_appsw_pane

0x9f23,	// (0x000894eb) tport_contact_pane_ParamLimits

0x9f23,	// (0x000894eb) tport_contact_pane

0x9f38,	// (0x00089500) tport_listscroll_pane_ParamLimits

0x9f38,	// (0x00089500) tport_listscroll_pane

0x9f51,	// (0x00089519) cell_tport_appsw_pane_ParamLimits

0x9f51,	// (0x00089519) cell_tport_appsw_pane

0xd216,	// (0x0008c7de) tport_appsw_pane_g1_ParamLimits

0xd216,	// (0x0008c7de) tport_appsw_pane_g1

0xe644,	// (0x0008dc0c) tport_contact_pane_g1

0xe64d,	// (0x0008dc15) tport_contact_pane_t1

0xe65b,	// (0x0008dc23) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x0008f373) tport_contact_pane_t

0xe669,	// (0x0008dc31) list_tport_pane

0xb52b,	// (0x0008aaf3) scroll_pane_cp_030

0xe67a,	// (0x0008dc42) cell_tport_appsw_pane_g1

0xe68a,	// (0x0008dc52) cell_tport_appsw_pane_t1

0xac0c,	// (0x0008a1d4) grid_highlight_pane_cp019

0x9f87,	// (0x0008954f) list_tport_double_graphic_pane_ParamLimits

0x9f87,	// (0x0008954f) list_tport_double_graphic_pane

0x206a,	// (0x00081632) list_highlight_pane_cp023_ParamLimits

0x206a,	// (0x00081632) list_highlight_pane_cp023

0x9f94,	// (0x0008955c) list_tport_double_graphic_pane_g1_ParamLimits

0x9f94,	// (0x0008955c) list_tport_double_graphic_pane_g1

0x9fa1,	// (0x00089569) list_tport_double_graphic_pane_t1_ParamLimits

0x9fa1,	// (0x00089569) list_tport_double_graphic_pane_t1

0x9fb6,	// (0x0008957e) list_tport_double_graphic_pane_t2_ParamLimits

0x9fb6,	// (0x0008957e) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x0008f37f) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x0008f37f) list_tport_double_graphic_pane_t

0xac0c,	// (0x0008a1d4) main_cale_note_pane

0x7f43,	// (0x0008750b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7f43,	// (0x0008750b) cell_vitu2_function_top_wide_pane_cp01

0x969f,	// (0x00088c67) wait_bar_pane_cp05_ParamLimits

0xac0c,	// (0x0008a1d4) listscroll_cmail_pane

0xe698,	// (0x0008dc60) list_cmail_pane

0x9fc8,	// (0x00089590) list_cmail_body_pane

0x9fc8,	// (0x00089590) list_single_cmail_header_caption_pane

0x9fde,	// (0x000895a6) list_single_cmail_header_detail_pane_ParamLimits

0x9fde,	// (0x000895a6) list_single_cmail_header_detail_pane

0xe6b4,	// (0x0008dc7c) list_single_cmail_header_caption_pane_t1

0xa006,	// (0x000895ce) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa006,	// (0x000895ce) list_single_cmail_header_detail_pane_g1

0xe6ca,	// (0x0008dc92) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6ca,	// (0x0008dc92) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x0008f384) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x0008f384) list_single_cmail_header_detail_pane_g

0xe6e3,	// (0x0008dcab) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6e3,	// (0x0008dcab) list_single_cmail_header_detail_pane_t1

0xe715,	// (0x0008dcdd) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe715,	// (0x0008dcdd) list_single_cmail_header_editor_pane_bg

0xe727,	// (0x0008dcef) list_cmail_body_pane_g1

0xe730,	// (0x0008dcf8) list_cmail_body_pane_t1

0xd26e,	// (0x0008c836) list_single_cmail_header_editor_pane_bg_g1

0xb994,	// (0x0008af5c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd27e,	// (0x0008c846) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd276,	// (0x0008c83e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4b0,	// (0x0008ca78) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd29e,	// (0x0008c866) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd28e,	// (0x0008c856) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd296,	// (0x0008c85e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb974,	// (0x0008af3c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa040,	// (0x00089608) calenote_gesture_pane_ParamLimits

0xa040,	// (0x00089608) calenote_gesture_pane

0xa05c,	// (0x00089624) calenote_window_pane_ParamLimits

0xa05c,	// (0x00089624) calenote_window_pane

0xe73e,	// (0x0008dd06) popup_note_window_cp01

0xa078,	// (0x00089640) calenote_swipe_1_pane_ParamLimits

0xa078,	// (0x00089640) calenote_swipe_1_pane

0x9aa6,	// (0x0008906e) calenote_swipe_2_pane_ParamLimits

0x9aa6,	// (0x0008906e) calenote_swipe_2_pane

0xe3ae,	// (0x0008d976) calenote_swipe_1_pane_g1_ParamLimits

0xe3ae,	// (0x0008d976) calenote_swipe_1_pane_g1

0xe3bb,	// (0x0008d983) calenote_swipe_1_pane_g2_ParamLimits

0xe3bb,	// (0x0008d983) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x0008f2b8) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x0008f2b8) calenote_swipe_1_pane_g

0xe750,	// (0x0008dd18) calenote_swipe_1_pane_t1_ParamLimits

0xe750,	// (0x0008dd18) calenote_swipe_1_pane_t1

0xe3ae,	// (0x0008d976) calenote_swipe_2_pane_g1_ParamLimits

0xe3ae,	// (0x0008d976) calenote_swipe_2_pane_g1

0xe76f,	// (0x0008dd37) calenote_swipe_2_pane_g2_ParamLimits

0xe76f,	// (0x0008dd37) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x0008f390) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x0008f390) calenote_swipe_2_pane_g

0xe77b,	// (0x0008dd43) calenote_swipe_2_pane_t1_ParamLimits

0xe77b,	// (0x0008dd43) calenote_swipe_2_pane_t1

0xac0c,	// (0x0008a1d4) main_mup_navstr_pane

0x6d36,	// (0x000862fe) main_mup3_pane_t7_ParamLimits

0x6d36,	// (0x000862fe) main_mup3_pane_t7

0xecc3,	// (0x0008e28b) main_mp4_pane_g6_ParamLimits

0xecc3,	// (0x0008e28b) main_mp4_pane_g6

0xee5d,	// (0x0008e425) main_image3_pane_t4_ParamLimits

0xee5d,	// (0x0008e425) main_image3_pane_t4

0xa08d,	// (0x00089655) popup_navstr_preview_pane_ParamLimits

0xa08d,	// (0x00089655) popup_navstr_preview_pane

0xa09d,	// (0x00089665) scroll_navstr_pane_ParamLimits

0xa09d,	// (0x00089665) scroll_navstr_pane

0xac0c,	// (0x0008a1d4) bg_popup_preview_window_pane_cp04

0xe7a2,	// (0x0008dd6a) popup_navstr_preview_pane_t1

0xa0b1,	// (0x00089679) scroll_navstr_pane_g1_ParamLimits

0xa0b1,	// (0x00089679) scroll_navstr_pane_g1

0xa0c5,	// (0x0008968d) scroll_navstr_pane_t1_ParamLimits

0xa0c5,	// (0x0008968d) scroll_navstr_pane_t1

0xe747,	// (0x0008dd0f) bg_button_pane_cp014

0xe747,	// (0x0008dd0f) bg_button_pane_cp030

0x995f,	// (0x00088f27) list_double_fisheye_pane_g4_ParamLimits

0x995f,	// (0x00088f27) list_double_fisheye_pane_g4

0x996b,	// (0x00088f33) list_double_fisheye_pane_g5_ParamLimits

0x996b,	// (0x00088f33) list_double_fisheye_pane_g5

0xe6a8,	// (0x0008dc70) sp_fs_scroll_pane_cp03

0xe4ad,	// (0x0008da75) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4b9,	// (0x0008da81) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x0008f2d5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4c5,	// (0x0008da8d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe6a0,	// (0x0008dc68) sp_fs_scroll_pane_cp02

0xb585,	// (0x0008ab4d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb585,	// (0x0008ab4d) popup_sp_fs_calendar_preview_list_single_pane

0xac0c,	// (0x0008a1d4) main_cam6_pano_pane

0x206a,	// (0x00081632) main_mup3_pane_ParamLimits

0xac0c,	// (0x0008a1d4) main_phacti_pane

0x9592,	// (0x00088b5a) bg_button_pane_cp11

0x95aa,	// (0x00088b72) main_mobtv_info_pane_g2_ParamLimits

0x95aa,	// (0x00088b72) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x0008f235) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x0008f235) main_mobtv_info_pane_g

0x975d,	// (0x00088d25) sc_clock_pane_t5_ParamLimits

0x975d,	// (0x00088d25) sc_clock_pane_t5

0x97d0,	// (0x00088d98) main_radioblah_pane_g1_ParamLimits

0xe2e8,	// (0x0008d8b0) main_radioblah_pane_t3_ParamLimits

0xe2e8,	// (0x0008d8b0) main_radioblah_pane_t3

0xe300,	// (0x0008d8c8) main_radioblah_pane_t4_ParamLimits

0xe300,	// (0x0008d8c8) main_radioblah_pane_t4

0x97f8,	// (0x00088dc0) main_radioblah_text_pane_ParamLimits

0x97f8,	// (0x00088dc0) main_radioblah_text_pane

0x980a,	// (0x00088dd2) main_radioblah_info_pane_g1_ParamLimits

0x989d,	// (0x00088e65) main_radioblah_info_pane_t4_ParamLimits

0x989d,	// (0x00088e65) main_radioblah_info_pane_t4

0x206a,	// (0x00081632) main_sp_fs_calendar_pane

0xa0db,	// (0x000896a3) main_phacti_pane_g1

0xa0e3,	// (0x000896ab) phacti_note_pane_ParamLimits

0xa0e3,	// (0x000896ab) phacti_note_pane

0xe7b9,	// (0x0008dd81) phacti_term_pane_ParamLimits

0xe7b9,	// (0x0008dd81) phacti_term_pane

0xe7ce,	// (0x0008dd96) phacti_note_pane_t1_ParamLimits

0xe7ce,	// (0x0008dd96) phacti_note_pane_t1

0xe7e5,	// (0x0008ddad) phacti_term_pane_g1

0xe7ed,	// (0x0008ddb5) phacti_term_pane_t1_ParamLimits

0xe7ed,	// (0x0008ddb5) phacti_term_pane_t1

0xe817,	// (0x0008dddf) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe81f,	// (0x0008dde7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x0008f39a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe827,	// (0x0008ddef) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe827,	// (0x0008ddef) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe83d,	// (0x0008de05) aid_popup_sp_fs_bg_corner_pane

0xc860,	// (0x0008be28) popup_sp_fs_calendar_preview_bg_pane_g1

0xac0c,	// (0x0008a1d4) popup_sp_fs_calendar_preview_bg_pane

0xe845,	// (0x0008de0d) popup_sp_fs_calendar_preview_list_pane

0x206a,	// (0x00081632) bg_main_sp_fs_cale_pane_ParamLimits

0x206a,	// (0x00081632) bg_main_sp_fs_cale_pane

0xe84d,	// (0x0008de15) listscroll_cale_mrui_pane_ParamLimits

0xe84d,	// (0x0008de15) listscroll_cale_mrui_pane

0xd2de,	// (0x0008c8a6) listscroll_sp_fs_schedule_track_pane

0xe861,	// (0x0008de29) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe861,	// (0x0008de29) main_sp_fs_ctrlbar_pane_cp01

0xe872,	// (0x0008de3a) main_sp_fs_ribbon_pane

0xe87a,	// (0x0008de42) popup_sp_fs_cale_preview_window

0xa132,	// (0x000896fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa132,	// (0x000896fa) list_single_sp_fs_schedule_track_pane

0x206a,	// (0x00081632) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x206a,	// (0x00081632) bg_sp_fs_highlight_list_pane_cp03

0xa145,	// (0x0008970d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa145,	// (0x0008970d) list_single_sp_fs_schedule_track_pane_g1

0xa151,	// (0x00089719) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa151,	// (0x00089719) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x0008f39f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x0008f39f) list_single_sp_fs_schedule_track_pane_g

0xa15d,	// (0x00089725) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa15d,	// (0x00089725) list_single_sp_fs_schedule_track_pane_t1

0xa177,	// (0x0008973f) sp_fs_schedule_track_pane_ParamLimits

0xa177,	// (0x0008973f) sp_fs_schedule_track_pane

0xe88c,	// (0x0008de54) sp_fs_schedule_track_pane_g1

0xe894,	// (0x0008de5c) sp_fs_schedule_track_pane_g2

0xe89c,	// (0x0008de64) sp_fs_schedule_track_pane_g3

0xe8a4,	// (0x0008de6c) sp_fs_schedule_track_pane_g4

0xe8ac,	// (0x0008de74) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x0008f3a4) sp_fs_schedule_track_pane_g

0xd26e,	// (0x0008c836) bg_sp_fs_schedule_viewer_highlight_g1

0xb994,	// (0x0008af5c) bg_sp_fs_schedule_viewer_highlight_g2

0xd276,	// (0x0008c83e) bg_sp_fs_schedule_viewer_highlight_g3

0xd27e,	// (0x0008c846) bg_sp_fs_schedule_viewer_highlight_g4

0xd4b0,	// (0x0008ca78) bg_sp_fs_schedule_viewer_highlight_g5

0xd28e,	// (0x0008c856) bg_sp_fs_schedule_viewer_highlight_g6

0xd296,	// (0x0008c85e) bg_sp_fs_schedule_viewer_highlight_g7

0xd29e,	// (0x0008c866) bg_sp_fs_schedule_viewer_highlight_g8

0xb974,	// (0x0008af3c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x0008f3af) bg_sp_fs_schedule_viewer_highlight_g

0xac0c,	// (0x0008a1d4) bg_main_sp_fs_ribbon_pane

0xa188,	// (0x00089750) main_sp_fs_ribbon_pane_g1

0xe8b4,	// (0x0008de7c) main_sp_fs_ribbon_pane_t1

0xa191,	// (0x00089759) main_sp_fs_ribbon_pane_t2

0xe8c3,	// (0x0008de8b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x0008f3c2) main_sp_fs_ribbon_pane_t

0xe8d2,	// (0x0008de9a) main_sp_fs_ribbon_scheduler_pane

0xe8da,	// (0x0008dea2) bg_main_sp_fs_ribbon_pane_g1

0xe8e3,	// (0x0008deab) bg_main_sp_fs_ribbon_pane_g2

0xe8ec,	// (0x0008deb4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x0008f3c9) bg_main_sp_fs_ribbon_pane_g

0xe8f4,	// (0x0008debc) main_sp_fs_ribbon_scheduler_pane_g1

0xe8fd,	// (0x0008dec5) main_sp_fs_ribbon_scheduler_pane_g2

0xe906,	// (0x0008dece) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x0008f3d0) main_sp_fs_ribbon_scheduler_pane_g

0xe35a,	// (0x0008d922) list_cale_mrui_pane

0xe90f,	// (0x0008ded7) sp_fs_scroll_pane_cp07_ParamLimits

0xe90f,	// (0x0008ded7) sp_fs_scroll_pane_cp07

0xa1a0,	// (0x00089768) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa1a0,	// (0x00089768) bg_sp_fs_schedule_viewer_highlight

0xe924,	// (0x0008deec) list_single_sp_fs_schedule_track_pane_cp01

0xe92c,	// (0x0008def4) list_sp_fs_schedule_track_pane

0xe934,	// (0x0008defc) sp_fs_scroll_pane_cp06_ParamLimits

0xe934,	// (0x0008defc) sp_fs_scroll_pane_cp06

0xc860,	// (0x0008be28) bgmain_sp_fs_calendar_pane_g1

0xa1b0,	// (0x00089778) list_single_cale_mrui_pane_ParamLimits

0xa1b0,	// (0x00089778) list_single_cale_mrui_pane

0xe946,	// (0x0008df0e) list_single_cale_mrui_row_pane_ParamLimits

0xe946,	// (0x0008df0e) list_single_cale_mrui_row_pane

0xe953,	// (0x0008df1b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe953,	// (0x0008df1b) list_single_cale_mrui_row_pane_g1

0xe98b,	// (0x0008df53) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe98b,	// (0x0008df53) list_single_cale_mrui_row_pane_t1

0xa1d3,	// (0x0008979b) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa1d3,	// (0x0008979b) list_single_cale_mrui_row_pane_t2

0xe99d,	// (0x0008df65) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe99d,	// (0x0008df65) list_single_cale_mrui_row_pane_t3

0xe9cc,	// (0x0008df94) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9cc,	// (0x0008df94) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x0008f3dc) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x0008f3dc) list_single_cale_mrui_row_pane_t

0xa239,	// (0x00089801) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa239,	// (0x00089801) list_single_cmail_header_editor_pane_bg_cp01

0xa25d,	// (0x00089825) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa25d,	// (0x00089825) list_single_cmail_header_editor_pane_bg_cp02

0xa27b,	// (0x00089843) main_radioblah_text_pane_t1_ParamLimits

0xa27b,	// (0x00089843) main_radioblah_text_pane_t1

0xf045,	// (0x0008e60d) cam6_indi_pane_cp01

0xf04d,	// (0x0008e615) cam6_mode_pane_cp01

0xf055,	// (0x0008e61d) cam6_pano_pane

0xf05e,	// (0x0008e626) cam6_zoom_pane_cp01

0xf066,	// (0x0008e62e) cam6_pano_image_pane

0xf06f,	// (0x0008e637) cam6_pano_pane_g1

0xe066,	// (0x0008d62e) cam6_pano_pane_g2

0xf078,	// (0x0008e640) cam6_pano_pane_g3

0xf081,	// (0x0008e649) cam6_pano_pane_g4

0xcdc6,	// (0x0008c38e) cam6_pano_pane_g5

0xf08a,	// (0x0008e652) cam6_pano_pane_g6

0xf092,	// (0x0008e65a) cam6_pano_pane_g7

0xf09a,	// (0x0008e662) cam6_pano_pane_g8

0xf0a3,	// (0x0008e66b) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x0008f3e5) cam6_pano_pane_g

0xac0c,	// (0x0008a1d4) main_browser_tag_pane

0xe79a,	// (0x0008dd62) grid_navstr_albumart_pane

0xf0ac,	// (0x0008e674) cell_navstr_albumart_pane_ParamLimits

0xf0ac,	// (0x0008e674) cell_navstr_albumart_pane

0x1194,	// (0x0008075c) cell_navstr_albumart_pane_g1

0xc1fa,	// (0x0008b7c2) cell_navstr_albumart_pane_g2

0xc20a,	// (0x0008b7d2) cell_navstr_albumart_pane_g3

0xc202,	// (0x0008b7ca) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x0008f3f8) cell_navstr_albumart_pane_g

0xa294,	// (0x0008985c) bt_list_pane_ParamLimits

0xa294,	// (0x0008985c) bt_list_pane

0xa2a7,	// (0x0008986f) bt_list_pane_t1

0xa2b6,	// (0x0008987e) bt_list_pane_t2

0x0001,

0xfe39,	// (0x0008f401) bt_list_pane_t

0xac0c,	// (0x0008a1d4) main_cale_prevew_pane

0xa2c5,	// (0x0008988d) popup_cale_preview_window_ParamLimits

0xa2c5,	// (0x0008988d) popup_cale_preview_window

0x206a,	// (0x00081632) bg_popup_preview_window_pane_cp05_ParamLimits

0x206a,	// (0x00081632) bg_popup_preview_window_pane_cp05

0xf0c3,	// (0x0008e68b) list_cale_preview_pane_ParamLimits

0xf0c3,	// (0x0008e68b) list_cale_preview_pane

0xa2da,	// (0x000898a2) list_double_cale_preview_pane_ParamLimits

0xa2da,	// (0x000898a2) list_double_cale_preview_pane

0xa2eb,	// (0x000898b3) list_single_cale_preview_pane_ParamLimits

0xa2eb,	// (0x000898b3) list_single_cale_preview_pane

0xf0cf,	// (0x0008e697) list_single_cale_preview_pane_g1

0xf0d7,	// (0x0008e69f) list_single_cale_preview_pane_t1_ParamLimits

0xf0d7,	// (0x0008e69f) list_single_cale_preview_pane_t1

0xa2ff,	// (0x000898c7) list_double_cale_preview_pane_g1

0xa307,	// (0x000898cf) list_double_cale_preview_pane_t1_ParamLimits

0xa307,	// (0x000898cf) list_double_cale_preview_pane_t1

0xa31c,	// (0x000898e4) list_double_cale_preview_pane_t2_ParamLimits

0xa31c,	// (0x000898e4) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x0008f406) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x0008f406) list_double_cale_preview_pane_t

0xac0c,	// (0x0008a1d4) main_ezdial_pane

0x206a,	// (0x00081632) main_sp_fs_email_pane_ParamLimits

0x9afc,	// (0x000890c4) cmail_ddmenu_btn01_pane_ParamLimits

0x9afc,	// (0x000890c4) cmail_ddmenu_btn01_pane

0x9b0f,	// (0x000890d7) cmail_ddmenu_btn02_pane_ParamLimits

0x9b0f,	// (0x000890d7) cmail_ddmenu_btn02_pane

0x9b32,	// (0x000890fa) cmail_ddmenu_btn03_pane_ParamLimits

0x9b32,	// (0x000890fa) cmail_ddmenu_btn03_pane

0x9b57,	// (0x0008911f) main_sp_fs_ctrlbar_pane_ParamLimits

0x9b78,	// (0x00089140) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9fc8,	// (0x00089590) list_cmail_body_pane_ParamLimits

0xe6c2,	// (0x0008dc8a) bg_button_pane_cp12

0xe6d6,	// (0x0008dc9e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6d6,	// (0x0008dc9e) list_single_cmail_header_detail_pane_g3

0xa01c,	// (0x000895e4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa01c,	// (0x000895e4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x0008f38b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x0008f38b) list_single_cmail_header_detail_pane_t

0xe802,	// (0x0008ddca) phacti_term_pane_t2_ParamLimits

0xe802,	// (0x0008ddca) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x0008f395) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x0008f395) phacti_term_pane_t

0x0007,	// (0x0007f5cf) aid_size_list_single_double

0xa334,	// (0x000898fc) popup_ezdial_listscroll_window

0xa34a,	// (0x00089912) popup_number_entry_window_cp01

0x1033,	// (0x000805fb) bg_popup_call_pane_cp09

0x0038,	// (0x0007f600) ezdial_list_pane

0x0040,	// (0x0007f608) scroll_pane_cp23

0xc41d,	// (0x0008b9e5) bg_button_pane_cp028_ParamLimits

0xc41d,	// (0x0008b9e5) bg_button_pane_cp028

0xa356,	// (0x0008991e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa356,	// (0x0008991e) cmail_ddmenu_btn01_pane_g1

0xa365,	// (0x0008992d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa365,	// (0x0008992d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x0008f40b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x0008f40b) cmail_ddmenu_btn01_pane_g

0x0066,	// (0x0007f62e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0066,	// (0x0007f62e) cmail_ddmenu_btn01_pane_t1

0xc41d,	// (0x0008b9e5) bg_button_pane_cp029_ParamLimits

0xc41d,	// (0x0008b9e5) bg_button_pane_cp029

0xa375,	// (0x0008993d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa375,	// (0x0008993d) cmail_ddmenu_btn02_pane_g1

0xa390,	// (0x00089958) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa390,	// (0x00089958) cmail_ddmenu_btn02_pane_t1

0x206a,	// (0x00081632) bg_button_pane_cp031_ParamLimits

0x206a,	// (0x00081632) bg_button_pane_cp031

0xa375,	// (0x0008993d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa375,	// (0x0008993d) cmail_ddmenu_btn03_pane_g1

0xa390,	// (0x00089958) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa390,	// (0x00089958) cmail_ddmenu_btn03_pane_t1

0x7831,	// (0x00086df9) cell_dialer2_keypad_pane_t1_ParamLimits

0x784b,	// (0x00086e13) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x784b,	// (0x00086e13) cell_dialer2_keypad_pane_t1_copy1

0x9419,	// (0x000889e1) ncimui_group_button_pane

0x206a,	// (0x00081632) main_sp_fs_calendar_pane_ParamLimits

0x9fc8,	// (0x00089590) list_single_cmail_header_caption_pane_ParamLimits

0xd7e2,	// (0x0008cdaa) aid_recal_txt_sm_pane

0xac0c,	// (0x0008a1d4) mian_recal_day_pane

0xe87a,	// (0x0008de42) popup_sp_fs_cale_preview_window_ParamLimits

0xac0c,	// (0x0008a1d4) list_recal_day_pane

0xea04,	// (0x0008dfcc) list_single_recal_day_pane_ParamLimits

0xea04,	// (0x0008dfcc) list_single_recal_day_pane

0x00bb,	// (0x0007f683) list_single_recal_day_pane_g1_ParamLimits

0x00bb,	// (0x0007f683) list_single_recal_day_pane_g1

0xea16,	// (0x0008dfde) list_single_recal_day_pane_g2_ParamLimits

0xea16,	// (0x0008dfde) list_single_recal_day_pane_g2

0xea22,	// (0x0008dfea) list_single_recal_day_pane_g3_ParamLimits

0xea22,	// (0x0008dfea) list_single_recal_day_pane_g3

0xa3b7,	// (0x0008997f) list_single_recal_day_pane_g4_ParamLimits

0xa3b7,	// (0x0008997f) list_single_recal_day_pane_g4

0xea2e,	// (0x0008dff6) list_single_recal_day_pane_g5_ParamLimits

0xea2e,	// (0x0008dff6) list_single_recal_day_pane_g5

0xea3a,	// (0x0008e002) list_single_recal_day_pane_g6_ParamLimits

0xea3a,	// (0x0008e002) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x0008f41a) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x0008f41a) list_single_recal_day_pane_g

0xea46,	// (0x0008e00e) list_single_recal_day_pane_t1

0xea54,	// (0x0008e01c) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x0008f427) list_single_recal_day_pane_t

0xa3c5,	// (0x0008998d) ncimui_query_button_pane_ParamLimits

0xa3c5,	// (0x0008998d) ncimui_query_button_pane

0xa3d5,	// (0x0008999d) ncimui_query_button_pane_t1_ParamLimits

0xa3d5,	// (0x0008999d) ncimui_query_button_pane_t1

0x00f6,	// (0x0007f6be) ncimui_query_button_pane_t2_ParamLimits

0x00f6,	// (0x0007f6be) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x0008f42c) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x0008f42c) ncimui_query_button_pane_t

0xa3e8,	// (0x000899b0) query_button_pane_ParamLimits

0xa3e8,	// (0x000899b0) query_button_pane

0xac0c,	// (0x0008a1d4) bg_button_pane_cp0028

0x0116,	// (0x0007f6de) query_button_pane_t1

0x5b69,	// (0x00085131) main_tport_pane_ParamLimits

0x9ed7,	// (0x0008949f) bg_popup_window_pane_cp01_ParamLimits

0x9ed7,	// (0x0008949f) bg_popup_window_pane_cp01

0x9eef,	// (0x000894b7) heading_pane_cp08_ParamLimits

0x9eef,	// (0x000894b7) heading_pane_cp08

0x9f01,	// (0x000894c9) heading_pane_cp07_ParamLimits

0x9f01,	// (0x000894c9) heading_pane_cp07

0xe67a,	// (0x0008dc42) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x0008f378) cell_tport_appsw_pane_g

0xbfdf,	// (0x0008b5a7) input_candi_list_open_g1

0xbb94,	// (0x0008b15c) list_cale_time_pane_g6_ParamLimits

0xbb94,	// (0x0008b15c) list_cale_time_pane_g6

0x680f,	// (0x00085dd7) aid_size_touch_calib_1_ParamLimits

0x680f,	// (0x00085dd7) aid_size_touch_calib_1

0x681b,	// (0x00085de3) aid_size_touch_calib_2_ParamLimits

0x681b,	// (0x00085de3) aid_size_touch_calib_2

0x682f,	// (0x00085df7) aid_size_touch_calib_3_ParamLimits

0x682f,	// (0x00085df7) aid_size_touch_calib_3

0x6847,	// (0x00085e0f) aid_size_touch_calib_4_ParamLimits

0x6847,	// (0x00085e0f) aid_size_touch_calib_4

0x6859,	// (0x00085e21) main_touch_calib_button_group_pane_ParamLimits

0x6859,	// (0x00085e21) main_touch_calib_button_group_pane

0x6870,	// (0x00085e38) main_touch_calib_pane_g1_ParamLimits

0x687c,	// (0x00085e44) main_touch_calib_pane_g2_ParamLimits

0x6888,	// (0x00085e50) main_touch_calib_pane_g3_ParamLimits

0x6894,	// (0x00085e5c) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x0008ed50) main_touch_calib_pane_g_ParamLimits

0x68a0,	// (0x00085e68) main_touch_calib_pane_t1_ParamLimits

0x68b8,	// (0x00085e80) main_touch_calib_pane_t2_ParamLimits

0x68d0,	// (0x00085e98) main_touch_calib_pane_t3_ParamLimits

0x68e2,	// (0x00085eaa) main_touch_calib_pane_t4_ParamLimits

0x68f4,	// (0x00085ebc) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x0008ed59) main_touch_calib_pane_t_ParamLimits

0xcbf1,	// (0x0008c1b9) list_single_fp_cale_pane_g3_ParamLimits

0xcbf1,	// (0x0008c1b9) list_single_fp_cale_pane_g3

0xef17,	// (0x0008e4df) bg_button_pane_cp012_ParamLimits

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp03_ParamLimits

0x86d3,	// (0x00087c9b) cell_vitu2_function_top_pane_g1_ParamLimits

0xef17,	// (0x0008e4df) bg_vkb2_func_pane_cp04_ParamLimits

0x93bb,	// (0x00088983) main_ncimui_button_group_pane_ParamLimits

0x93bb,	// (0x00088983) main_ncimui_button_group_pane

0x9407,	// (0x000889cf) main_ncimui_pane_t3_ParamLimits

0x9407,	// (0x000889cf) main_ncimui_pane_t3

0xe7b0,	// (0x0008dd78) phacti_button_group_pane

0x0007,	// (0x0007f5cf) aid_size_list_single_double_ParamLimits

0xa334,	// (0x000898fc) popup_ezdial_listscroll_window_ParamLimits

0xa34a,	// (0x00089912) popup_number_entry_window_cp01_ParamLimits

0xa3fa,	// (0x000899c2) phacti_button_pane_ParamLimits

0xa3fa,	// (0x000899c2) phacti_button_pane

0xac0c,	// (0x0008a1d4) bg_button_pane_cp14

0x0133,	// (0x0007f6fb) phacti_button_pane_t1

0xa409,	// (0x000899d1) main_touch_calib_button_pane_ParamLimits

0xa409,	// (0x000899d1) main_touch_calib_button_pane

0xb3ce,	// (0x0008a996) bg_button_pane_cp18_ParamLimits

0xb3ce,	// (0x0008a996) bg_button_pane_cp18

0x0151,	// (0x0007f719) main_touch_calib_button_pane_t1_ParamLimits

0x0151,	// (0x0007f719) main_touch_calib_button_pane_t1

0x0167,	// (0x0007f72f) main_touch_calib_button_pane_t2_ParamLimits

0x0167,	// (0x0007f72f) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x0008f431) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x0008f431) main_touch_calib_button_pane_t

0xac0c,	// (0x0008a1d4) cell_ncimui_button_pane

0xac0c,	// (0x0008a1d4) bg_button_pane_cp032

0x0185,	// (0x0007f74d) cell_ncimui_button_pane_t1

0xee3d,	// (0x0008e405) image3_infobar_pane_ParamLimits

0xee3d,	// (0x0008e405) image3_infobar_pane

0x9785,	// (0x00088d4d) fs_bigclock_status_pane_ParamLimits

0x9785,	// (0x00088d4d) fs_bigclock_status_pane

0x9792,	// (0x00088d5a) main_fs_bigclock_clock_pane_ParamLimits

0x9792,	// (0x00088d5a) main_fs_bigclock_clock_pane

0x97a1,	// (0x00088d69) main_fs_bigclock_indi_pane_ParamLimits

0x97a1,	// (0x00088d69) main_fs_bigclock_indi_pane

0x97b5,	// (0x00088d7d) main_fs_bigclock_swipe_pane_ParamLimits

0x97b5,	// (0x00088d7d) main_fs_bigclock_swipe_pane

0xac0c,	// (0x0008a1d4) main_fs_clock_dumped_data

0xe173,	// (0x0008d73b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe173,	// (0x0008d73b) list_single_fs_bigclock_indicator_pane_g1

0xe18d,	// (0x0008d755) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe18d,	// (0x0008d755) list_single_fs_bigclock_indicator_pane_g2

0xe1a7,	// (0x0008d76f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe1a7,	// (0x0008d76f) list_single_fs_bigclock_indicator_pane_g3

0xe1c1,	// (0x0008d789) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1c1,	// (0x0008d789) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x0008f269) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x0008f269) list_single_fs_bigclock_indicator_pane_g

0xe1e5,	// (0x0008d7ad) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1e5,	// (0x0008d7ad) list_single_fs_bigclock_indicator_pane_t1

0xe20d,	// (0x0008d7d5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe20d,	// (0x0008d7d5) list_single_fs_bigclock_indicator_pane_t2

0xe235,	// (0x0008d7fd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe235,	// (0x0008d7fd) list_single_fs_bigclock_indicator_pane_t3

0xe25d,	// (0x0008d825) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe25d,	// (0x0008d825) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x0008f274) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x0008f274) list_single_fs_bigclock_indicator_pane_t

0x0193,	// (0x0007f75b) image3_infobar_fav_pane_ParamLimits

0x0193,	// (0x0007f75b) image3_infobar_fav_pane

0x01a3,	// (0x0007f76b) image3_infobar_loc_pane_ParamLimits

0x01a3,	// (0x0007f76b) image3_infobar_loc_pane

0x01b7,	// (0x0007f77f) image3_infobar_time_pane_ParamLimits

0x01b7,	// (0x0007f77f) image3_infobar_time_pane

0xc860,	// (0x0008be28) image3_infobar_time_pane_g1

0x01c7,	// (0x0007f78f) image3_infobar_time_pane_t1

0xc860,	// (0x0008be28) image3_infobar_loc_pane_g1

0x01d5,	// (0x0007f79d) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x0008f436) image3_infobar_loc_pane_g

0x01dd,	// (0x0007f7a5) image3_infobar_loc_pane_t1

0xc860,	// (0x0008be28) image3_infobar_fav_pane_g1

0x01eb,	// (0x0007f7b3) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x0008f43b) image3_infobar_fav_pane_g

0x01f3,	// (0x0007f7bb) fs_bigclock_status_battery_pane

0x01fc,	// (0x0007f7c4) fs_bigclock_status_signal_pane

0x0205,	// (0x0007f7cd) fs_bigclock_status_title_pane

0x020e,	// (0x0007f7d6) fs_bigclock_status_signal_pane_g1

0x0217,	// (0x0007f7df) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x0008f440) fs_bigclock_status_signal_pane_g

0x021f,	// (0x0007f7e7) fs_bigclock_status_battery_pane_g1

0x0228,	// (0x0007f7f0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x0008f445) fs_bigclock_status_battery_pane_g

0x0230,	// (0x0007f7f8) fs_bigclock_status_title_pane_t1

0xc860,	// (0x0008be28) main_fs_bigclock_clock_pane_g1

0x023e,	// (0x0007f806) main_fs_bigclock_clock_pane_g2

0x023e,	// (0x0007f806) main_fs_bigclock_clock_pane_g3

0x023e,	// (0x0007f806) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x0008f44a) main_fs_bigclock_clock_pane_g

0x0246,	// (0x0007f80e) main_fs_bigclock_clock_pane_t1

0x0254,	// (0x0007f81c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x0008f453) main_fs_bigclock_clock_pane_t

0x0263,	// (0x0007f82b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0263,	// (0x0007f82b) list_single_fs_bigclock_indicator_pane

0xa41c,	// (0x000899e4) list_single_fs_bigclock_pane_ParamLimits

0xa41c,	// (0x000899e4) list_single_fs_bigclock_pane

0x02db,	// (0x0007f8a3) main_fs_bigclock_indicator_pane_t1

0x02ea,	// (0x0007f8b2) list_single_fs_bigclock_pane_g1

0x02f2,	// (0x0007f8ba) list_single_fs_bigclock_pane_t1

0xc860,	// (0x0008be28) main_fs_bigclock_swipe_pane_g1

0x0330,	// (0x0007f8f8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x0008f464) main_fs_bigclock_swipe_pane_g

0x0338,	// (0x0007f900) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0338,	// (0x0007f900) main_fs_bigclock_swipe_pane_t1

0x4b93,	// (0x0008415b) call_type_pane_ParamLimits

0xac0c,	// (0x0008a1d4) main_btmg_pane

0xe97f,	// (0x0008df47) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe97f,	// (0x0008df47) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x0008f3d7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x0008f3d7) list_single_cale_mrui_row_pane_g

0x00ab,	// (0x0007f673) list_recal_vselct_arw_lo_pane

0x00b3,	// (0x0007f67b) list_recal_vselct_arw_up_pane

0xe9fb,	// (0x0008dfc3) list_recal_vselct_pane

0x0355,	// (0x0007f91d) btmg_button_pane

0xa47c,	// (0x00089a44) main_btmg_pane_g1

0xac0c,	// (0x0008a1d4) bg_button_pane_cp044

0x0365,	// (0x0007f92d) btmg_button_pane_t1

0xc415,	// (0x0008b9dd) aid_listscroll_gen

0x206a,	// (0x00081632) main_cntbar_detail_pane

0xe698,	// (0x0008dc60) list_cmail_folder_pane

0xe6a8,	// (0x0008dc70) sp_fs_scroll_pane_cp03_ParamLimits

0xa484,	// (0x00089a4c) list_single_fs_dyc_pane_cp01_ParamLimits

0xa484,	// (0x00089a4c) list_single_fs_dyc_pane_cp01

0x038a,	// (0x0007f952) aid_size_cmail_indent

0xd7eb,	// (0x0008cdb3) list_single_dyc_row_pane_cp01

0xa4c1,	// (0x00089a89) cntbar_detail_list_pane_ParamLimits

0xa4c1,	// (0x00089a89) cntbar_detail_list_pane

0xa507,	// (0x00089acf) main_cntbar_detail_cont_pane_ParamLimits

0xa507,	// (0x00089acf) main_cntbar_detail_cont_pane

0xa51b,	// (0x00089ae3) scroll_pane_cp032_ParamLimits

0xa51b,	// (0x00089ae3) scroll_pane_cp032

0xa527,	// (0x00089aef) cntbar_detail_list_event_pane_ParamLimits

0xa527,	// (0x00089aef) cntbar_detail_list_event_pane

0xa4d1,	// (0x00089a99) cntbar_detail_list_shct_pane

0x040b,	// (0x0007f9d3) aid_list_gen

0xb52b,	// (0x0008aaf3) aid_scroll

0xd7c0,	// (0x0008cd88) aid_size_touch_scroll_bar

0xea62,	// (0x0008e02a) aid_list_double

0xa538,	// (0x00089b00) aid_list_single

0xea6b,	// (0x0008e033) aid_list_single_lg

0xa541,	// (0x00089b09) aid_list_z_g_a_sm

0xa549,	// (0x00089b11) aid_list_z_g_d

0xa551,	// (0x00089b19) aid_txt_z_prm

0xa55f,	// (0x00089b27) aid_txt_z_prm_cp01

0xa56d,	// (0x00089b35) aid_txt_z_sec

0xa57b,	// (0x00089b43) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa57b,	// (0x00089b43) main_cntbar_detail_cont_pane_g1

0xa58f,	// (0x00089b57) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa58f,	// (0x00089b57) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x0008f469) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x0008f469) main_cntbar_detail_cont_pane_g

0x0479,	// (0x0007fa41) main_cntbar_detail_cont_pane_t1

0x0487,	// (0x0007fa4f) main_cntbar_detail_cont_pane_t2

0x0495,	// (0x0007fa5d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x0008f46e) main_cntbar_detail_cont_pane_t

0xa59f,	// (0x00089b67) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa59f,	// (0x00089b67) cell_cntbar_detail_list_shct_pane

0x04b5,	// (0x0007fa7d) cntbar_detail_list_shct_pane_g1

0x04be,	// (0x0007fa86) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x0008f475) cntbar_detail_list_shct_pane_g

0xa5b1,	// (0x00089b79) cntbar_detail_list_event_pane_g1_ParamLimits

0xa5b1,	// (0x00089b79) cntbar_detail_list_event_pane_g1

0xa5bd,	// (0x00089b85) cntbar_detail_list_event_pane_g2_ParamLimits

0xa5bd,	// (0x00089b85) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x0008f47a) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x0008f47a) cntbar_detail_list_event_pane_g

0xa629,	// (0x00089bf1) cntbar_detail_list_event_pane_t1_ParamLimits

0xa629,	// (0x00089bf1) cntbar_detail_list_event_pane_t1

0xa63e,	// (0x00089c06) cntbar_detail_list_event_pane_t2_ParamLimits

0xa63e,	// (0x00089c06) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x0008f487) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x0008f487) cntbar_detail_list_event_pane_t

0xc860,	// (0x0008be28) cell_cntbar_detail_list_shct_pane_g1

0x0ff2,	// (0x000805ba) navi_pane_mv_g3

0x206a,	// (0x00081632) main_cntbar_detail_pane_ParamLimits

0xac0c,	// (0x0008a1d4) main_notif_wgt_pane

0xec51,	// (0x0008e219) aid_tch_main_mp4_pane_g4

0xee35,	// (0x0008e3fd) popup_slider_window_cp02

0xe9fb,	// (0x0008dfc3) list_recal_day_event_pane

0xa499,	// (0x00089a61) cntbar_detail_btn_pane_ParamLimits

0xa499,	// (0x00089a61) cntbar_detail_btn_pane

0xa4ac,	// (0x00089a74) cntbar_detail_btn_pane_cp01_ParamLimits

0xa4ac,	// (0x00089a74) cntbar_detail_btn_pane_cp01

0xa4d1,	// (0x00089a99) cntbar_detail_list_shct_pane_ParamLimits

0xa4e1,	// (0x00089aa9) cntbar_detail_pane_g1_ParamLimits

0xa4e1,	// (0x00089aa9) cntbar_detail_pane_g1

0xa4f1,	// (0x00089ab9) cntbar_detail_pane_t1_ParamLimits

0xa4f1,	// (0x00089ab9) cntbar_detail_pane_t1

0xa5c9,	// (0x00089b91) cntbar_detail_list_event_pane_g3_ParamLimits

0xa5c9,	// (0x00089b91) cntbar_detail_list_event_pane_g3

0xa5e1,	// (0x00089ba9) cntbar_detail_list_event_pane_g4_ParamLimits

0xa5e1,	// (0x00089ba9) cntbar_detail_list_event_pane_g4

0xa5f9,	// (0x00089bc1) cntbar_detail_list_event_pane_g5_ParamLimits

0xa5f9,	// (0x00089bc1) cntbar_detail_list_event_pane_g5

0xa611,	// (0x00089bd9) cntbar_detail_list_event_pane_g6_ParamLimits

0xa611,	// (0x00089bd9) cntbar_detail_list_event_pane_g6

0xa653,	// (0x00089c1b) cntbar_detail_list_event_pane_t3_ParamLimits

0xa653,	// (0x00089c1b) cntbar_detail_list_event_pane_t3

0xa665,	// (0x00089c2d) popup_notif_wgt_window_ParamLimits

0xa665,	// (0x00089c2d) popup_notif_wgt_window

0xa67a,	// (0x00089c42) popup_submenu_window_cp01_ParamLimits

0xa67a,	// (0x00089c42) popup_submenu_window_cp01

0x1033,	// (0x000805fb) bg_popup_window_pane_cp10

0x0595,	// (0x0007fb5d) listscroll_notif_wgt_pane

0x059d,	// (0x0007fb65) list_notif_wgt_window

0x05a6,	// (0x0007fb6e) scroll_pane_cp033

0x05af,	// (0x0007fb77) list_notif_wgt_row_pane_ParamLimits

0x05af,	// (0x0007fb77) list_notif_wgt_row_pane

0x05c1,	// (0x0007fb89) aid_size_list_notif_wgt_del

0x05ca,	// (0x0007fb92) list_notif_wgt_row_pane_g1

0x05d2,	// (0x0007fb9a) list_notif_wgt_row_pane_g2

0x05da,	// (0x0007fba2) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x0008f48e) list_notif_wgt_row_pane_g

0x05e3,	// (0x0007fbab) list_notif_wgt_row_pane_t1

0x05f1,	// (0x0007fbb9) list_notif_wgt_row_pane_t2

0x05ff,	// (0x0007fbc7) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x0008f495) list_notif_wgt_row_pane_t

0xd4ca,	// (0x0008ca92) list_recal_day_event_pane_g1

0x060d,	// (0x0007fbd5) list_recal_day_event_pane_t1

0xac0c,	// (0x0008a1d4) bg_button_pane_cp045

0xa68a,	// (0x00089c52) cntbar_detail_btn_pane_t1

0xc41d,	// (0x0008b9e5) main_callh_pane_ParamLimits

0xc41d,	// (0x0008b9e5) main_callh_pane

0xac0c,	// (0x0008a1d4) main_coverflow0_pane

0xac0c,	// (0x0008a1d4) main_wgtman_pane

0x97c1,	// (0x00088d89) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x97c1,	// (0x00088d89) main_fs_bigclock_unlock_btn_pane

0xe672,	// (0x0008dc3a) bg_button_pane_cp16

0xe682,	// (0x0008dc4a) cell_tport_appsw_pane_g3

0xa698,	// (0x00089c60) cf0_flow_pane_ParamLimits

0xa698,	// (0x00089c60) cf0_flow_pane

0x0639,	// (0x0007fc01) listscroll_cf0_pane

0x0642,	// (0x0007fc0a) main_cf0_pane_g1

0xa6ad,	// (0x00089c75) main_cf0_pane_t1_ParamLimits

0xa6ad,	// (0x00089c75) main_cf0_pane_t1

0xa6c2,	// (0x00089c8a) main_cf0_pane_t2_ParamLimits

0xa6c2,	// (0x00089c8a) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x0008f49c) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x0008f49c) main_cf0_pane_t

0x0670,	// (0x0007fc38) scroll_pane_cp11

0xa6d7,	// (0x00089c9f) cf0_flow_pane_g1

0xa6df,	// (0x00089ca7) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x0008f4a1) cf0_flow_pane_g

0xa6e7,	// (0x00089caf) cf0_flow_pane_t1

0xac0c,	// (0x0008a1d4) main_call6_pane

0xac0c,	// (0x0008a1d4) main_calllock_pane

0xa6f5,	// (0x00089cbd) call6_btn_grp_pane_ParamLimits

0xa6f5,	// (0x00089cbd) call6_btn_grp_pane

0xa70b,	// (0x00089cd3) call6_pane_g1_ParamLimits

0xa70b,	// (0x00089cd3) call6_pane_g1

0xa71e,	// (0x00089ce6) popup_call6_1st_window_ParamLimits

0xa71e,	// (0x00089ce6) popup_call6_1st_window

0xa72d,	// (0x00089cf5) popup_call6_2nd_window_ParamLimits

0xa72d,	// (0x00089cf5) popup_call6_2nd_window

0xa73c,	// (0x00089d04) cell_call6_btn_pane_ParamLimits

0xa73c,	// (0x00089d04) cell_call6_btn_pane

0x1033,	// (0x000805fb) bg_popup_call2_in_pane_cp03

0x06d8,	// (0x0007fca0) popup_call6_1st_window_g1

0x06e0,	// (0x0007fca8) popup_call6_1st_window_g2

0x06e8,	// (0x0007fcb0) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x0008f4a6) popup_call6_1st_window_g

0x06f0,	// (0x0007fcb8) popup_call6_1st_window_t1

0x06ff,	// (0x0007fcc7) popup_call6_1st_window_t2

0x070d,	// (0x0007fcd5) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x0008f4ad) popup_call6_1st_window_t

0x1033,	// (0x000805fb) bg_popup_call2_in_pane_cp04

0x06d8,	// (0x0007fca0) popup_call6_2nd_window_g1

0x06e0,	// (0x0007fca8) popup_call6_2nd_window_g2

0x06e8,	// (0x0007fcb0) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x0008f4a6) popup_call6_2nd_window_g

0x06f0,	// (0x0007fcb8) popup_call6_2nd_window_t1

0xac0c,	// (0x0008a1d4) bg_button_pane_cp15

0x071b,	// (0x0007fce3) cell_call6_btn_pane_g1

0x0724,	// (0x0007fcec) cell_call6_btn_pane_t1

0xa750,	// (0x00089d18) listscroll_wgtman_pane_ParamLimits

0xa750,	// (0x00089d18) listscroll_wgtman_pane

0xa76f,	// (0x00089d37) wgtman_btn_pane_ParamLimits

0xa76f,	// (0x00089d37) wgtman_btn_pane

0x0e74,	// (0x0008043c) aid_scroll_copy1

0x0780,	// (0x0007fd48) list_wgtman_pane

0xa7af,	// (0x00089d77) wgtman_btn_pane_g1_ParamLimits

0xa7af,	// (0x00089d77) wgtman_btn_pane_g1

0xa7db,	// (0x00089da3) wgtman_btn_pane_t1_ParamLimits

0xa7db,	// (0x00089da3) wgtman_btn_pane_t1

0x07e9,	// (0x0007fdb1) wgtman_btn_pane_t2_ParamLimits

0x07e9,	// (0x0007fdb1) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x0008f4b4) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x0008f4b4) wgtman_btn_pane_t

0xa818,	// (0x00089de0) listrow_wgtman_pane_ParamLimits

0xa818,	// (0x00089de0) listrow_wgtman_pane

0xa829,	// (0x00089df1) listrow_wgtman_pane_g1

0xa832,	// (0x00089dfa) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x0008f4b9) listrow_wgtman_pane_g

0xa83a,	// (0x00089e02) listrow_wgtman_pane_t1

0xa848,	// (0x00089e10) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x0008f4be) listrow_wgtman_pane_t

0xa856,	// (0x00089e1e) wait_bar_pane_cp09

0x0846,	// (0x0007fe0e) main_calllock_btn_pane

0x084e,	// (0x0007fe16) main_calllock_pane_g1

0xac0c,	// (0x0008a1d4) bg_button_pane_cp17

0x0857,	// (0x0007fe1f) main_calllock_btn_pane_g1

0x0860,	// (0x0007fe28) main_calllock_btn_pane_t1

0xac0c,	// (0x0008a1d4) main_dialer3_pane

0xac0c,	// (0x0008a1d4) main_fmrd2_pane

0xc860,	// (0x0008be28) main_fs_bigclock_unlock_btn_pane_g1

0x0877,	// (0x0007fe3f) main_fs_bigclock_unlock_btn_pane_t1

0xa85e,	// (0x00089e26) area_fmrd2_info_pane_ParamLimits

0xa85e,	// (0x00089e26) area_fmrd2_info_pane

0xa86d,	// (0x00089e35) area_fmrd2_visual_pane_ParamLimits

0xa86d,	// (0x00089e35) area_fmrd2_visual_pane

0xa87b,	// (0x00089e43) fmrd2_indi_pane_ParamLimits

0xa87b,	// (0x00089e43) fmrd2_indi_pane

0xa888,	// (0x00089e50) area_fmrd2_visual_pane_g1

0xa890,	// (0x00089e58) area_fmrd2_visual_pane_t1

0xa89e,	// (0x00089e66) area_fmrd2_visual_pane_t2

0xa8ac,	// (0x00089e74) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x0008f4c8) area_fmrd2_visual_pane_t

0xa8ba,	// (0x00089e82) area_fmrd2_info_pane_g1

0xa8c2,	// (0x00089e8a) area_fmrd2_info_pane_t1

0xa8d0,	// (0x00089e98) area_fmrd2_info_pane_t2

0xa8de,	// (0x00089ea6) area_fmrd2_info_pane_t3

0xa8ec,	// (0x00089eb4) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x0008f4cf) area_fmrd2_info_pane_t

0xa8fa,	// (0x00089ec2) fmrd2_indi_pane_t1

0xa908,	// (0x00089ed0) fmrd2_indi_pane_t2

0xa916,	// (0x00089ede) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x0008f4d8) fmrd2_indi_pane_t

0xe1d0,	// (0x0008d798) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1d0,	// (0x0008d798) list_single_fs_bigclock_indicator_pane_g5

0xe272,	// (0x0008d83a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe272,	// (0x0008d83a) list_single_fs_bigclock_indicator_pane_t5

0xa0f7,	// (0x000896bf) aid_cell_bcale_month_pane_ParamLimits

0xa0f7,	// (0x000896bf) aid_cell_bcale_month_pane

0xa109,	// (0x000896d1) bcale_month_pane_ParamLimits

0xa109,	// (0x000896d1) bcale_month_pane

0xa11b,	// (0x000896e3) bcale_preview_pane_ParamLimits

0xa11b,	// (0x000896e3) bcale_preview_pane

0x02f2,	// (0x0007f8ba) list_single_fs_bigclock_pane_t1_ParamLimits

0x030c,	// (0x0007f8d4) list_single_fs_bigclock_pane_t2_ParamLimits

0x030c,	// (0x0007f8d4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x0008f45f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x0008f45f) list_single_fs_bigclock_pane_t

0x086f,	// (0x0007fe37) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x0008f4c3) main_fs_bigclock_unlock_btn_pane_g

0xa924,	// (0x00089eec) aid_dia3_key_size_ParamLimits

0xa924,	// (0x00089eec) aid_dia3_key_size

0xa933,	// (0x00089efb) aid_dia3_listrow_size_ParamLimits

0xa933,	// (0x00089efb) aid_dia3_listrow_size

0xa946,	// (0x00089f0e) dia3_keypad_fun_pane_ParamLimits

0xa946,	// (0x00089f0e) dia3_keypad_fun_pane

0xa95a,	// (0x00089f22) dia3_keypad_num_pane_ParamLimits

0xa95a,	// (0x00089f22) dia3_keypad_num_pane

0xa96b,	// (0x00089f33) dia3_listscroll_pane_ParamLimits

0xa96b,	// (0x00089f33) dia3_listscroll_pane

0xa97c,	// (0x00089f44) dia3_numentry_pane_ParamLimits

0xa97c,	// (0x00089f44) dia3_numentry_pane

0x0992,	// (0x0007ff5a) dia3_list_pane

0x099b,	// (0x0007ff63) scroll_pane_cp12

0xac0c,	// (0x0008a1d4) bg_dia3_numentry_pane

0xa98e,	// (0x00089f56) dia3_numentry_pane_t1

0xa99d,	// (0x00089f65) cell_dia3_key_num_pane

0xa9a5,	// (0x00089f6d) cell_dia3_key0_fun_pane_ParamLimits

0xa9a5,	// (0x00089f6d) cell_dia3_key0_fun_pane

0xa9b9,	// (0x00089f81) cell_dia3_key1_fun_pane_ParamLimits

0xa9b9,	// (0x00089f81) cell_dia3_key1_fun_pane

0xa9d0,	// (0x00089f98) dia3_listrow_pane

0xded4,	// (0x0008d49c) bg_dia3_numentry_pane_g1

0xac0c,	// (0x0008a1d4) bg_button_pane_cp21

0x09e2,	// (0x0007ffaa) cell_dia3_key_num_pane_t1

0x09f0,	// (0x0007ffb8) cell_dia3_key_num_pane_t2

0x09ff,	// (0x0007ffc7) cell_dia3_key_num_pane_t3

0x0a0e,	// (0x0007ffd6) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x0008f4df) cell_dia3_key_num_pane_t

0xac0c,	// (0x0008a1d4) bg_button_pane_cp19

0x0a1d,	// (0x0007ffe5) cell_dia3_key0_fun_pane_g1

0xac0c,	// (0x0008a1d4) bg_button_pane_cp20

0xa9e2,	// (0x00089faa) cell_dia3_key1_fun_pane_g1

0xa9ea,	// (0x00089fb2) area_left_week_number_pane

0xa9f3,	// (0x00089fbb) area_top_day_name_pane

0xa9fc,	// (0x00089fc4) frame_month_view_pane

0xaa04,	// (0x00089fcc) grid_month_view_pane

0xaa0e,	// (0x00089fd6) cell_top_day_name_pane_ParamLimits

0xaa0e,	// (0x00089fd6) cell_top_day_name_pane

0xaa24,	// (0x00089fec) cell_area_left_week_number_pane_ParamLimits

0xaa24,	// (0x00089fec) cell_area_left_week_number_pane

0xaa38,	// (0x0008a000) cell_month_view_pane_ParamLimits

0xaa38,	// (0x0008a000) cell_month_view_pane

0x0a96,	// (0x0008005e) frm_month_g1

0xaa53,	// (0x0008a01b) frm_month_g2

0xaa5b,	// (0x0008a023) frm_month_g3

0xaa63,	// (0x0008a02b) frm_month_g4

0xaa6b,	// (0x0008a033) frm_month_g5

0xaa73,	// (0x0008a03b) frm_month_g6

0xaa7b,	// (0x0008a043) frm_month_g7

0x0acf,	// (0x00080097) frm_month_g8

0xaa83,	// (0x0008a04b) frm_month_g9

0xaa8c,	// (0x0008a054) frm_month_g10

0xaa95,	// (0x0008a05d) frm_month_g11

0xaa9e,	// (0x0008a066) frm_month_g12

0xaaa7,	// (0x0008a06f) frm_month_g13

0xaab0,	// (0x0008a078) frm_month_g14

0xaab9,	// (0x0008a081) frm_month_g15

0xaac2,	// (0x0008a08a) frm_month_g16

0x000f,

0xff20,	// (0x0008f4e8) frm_month_g

0xaacb,	// (0x0008a093) cell_top_day_name_pane_t1

0xaada,	// (0x0008a0a2) cell_area_left_week_number_pane_g1

0xaacb,	// (0x0008a093) cell_area_left_week_number_pane_t1

0xc860,	// (0x0008be28) cell_month_view_pane_g1

0xaae2,	// (0x0008a0aa) cell_month_view_pane_t1

0xac0c,	// (0x0008a1d4) main_fps_pane

0xe475,	// (0x0008da3d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe475,	// (0x0008da3d) cmail_ddmenu_btn02_pane_cp1

0xe491,	// (0x0008da59) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe491,	// (0x0008da59) cmail_ddmenu_btn02_pane_cp2

0xa384,	// (0x0008994c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa384,	// (0x0008994c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x0008f410) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x0008f410) cmail_ddmenu_btn02_pane_g

0xa3a5,	// (0x0008996d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa3a5,	// (0x0008996d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x0008f415) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x0008f415) cmail_ddmenu_btn02_pane_t

0xaaf1,	// (0x0008a0b9) fps_text_pane_ParamLimits

0xaaf1,	// (0x0008a0b9) fps_text_pane

0xab07,	// (0x0008a0cf) main_fps_pane_g1_ParamLimits

0xab07,	// (0x0008a0cf) main_fps_pane_g1

0xab1d,	// (0x0008a0e5) wait_bar_pane_cp010_ParamLimits

0xab1d,	// (0x0008a0e5) wait_bar_pane_cp010

0xab2e,	// (0x0008a0f6) fps_text_pane_t1_ParamLimits

0xab2e,	// (0x0008a0f6) fps_text_pane_t1

0x20a4,	// (0x0008166c) cam4_image_uncrop_pane_g1

0x20ad,	// (0x00081675) cam4_image_uncrop_pane_g2

0x7c7c,	// (0x00087244) cam4_image_uncrop_pane_g3

0x7c85,	// (0x0008724d) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x0008eee8) cam4_image_uncrop_pane_g

0xa9d0,	// (0x00089f98) dia3_listrow_pane_ParamLimits

0xac0c,	// (0x0008a1d4) main_phob2_pane

0x9f62,	// (0x0008952a) cell_tport_appsw_pane_cp02_ParamLimits

0x9f62,	// (0x0008952a) cell_tport_appsw_pane_cp02

0x9f72,	// (0x0008953a) cell_tport_appsw_pane_cp03_ParamLimits

0x9f72,	// (0x0008953a) cell_tport_appsw_pane_cp03

0xac0c,	// (0x0008a1d4) phob2_contact_card_pane

0xac0c,	// (0x0008a1d4) phob2_listscroll_pane

0x0b7b,	// (0x00080143) phob2_list_pane

0x0b83,	// (0x0008014b) scroll_pane_cp034

0xab46,	// (0x0008a10e) phob2_cc_data_pane_ParamLimits

0xab46,	// (0x0008a10e) phob2_cc_data_pane

0xea74,	// (0x0008e03c) phob2_cc_listscroll_pane_ParamLimits

0xea74,	// (0x0008e03c) phob2_cc_listscroll_pane

0xea90,	// (0x0008e058) list_double_large_graphic_phob2_pane_ParamLimits

0xea90,	// (0x0008e058) list_double_large_graphic_phob2_pane

0xeaa2,	// (0x0008e06a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeaa2,	// (0x0008e06a) list_double_large_graphic_phob2_pane_g1

0xab63,	// (0x0008a12b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xab63,	// (0x0008a12b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x0008f509) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x0008f509) list_double_large_graphic_phob2_pane_g

0xab6f,	// (0x0008a137) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xab6f,	// (0x0008a137) list_double_large_graphic_phob2_pane_t1

0xab84,	// (0x0008a14c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xab84,	// (0x0008a14c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x0008f50e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x0008f50e) list_double_large_graphic_phob2_pane_t

0xac0c,	// (0x0008a1d4) list_highlight_pane_cp024

0x0c0e,	// (0x000801d6) phob2_cc_button_pane

0xeaaf,	// (0x0008e077) phob2_cc_data_pane_g1_ParamLimits

0xeaaf,	// (0x0008e077) phob2_cc_data_pane_g1

0xeac4,	// (0x0008e08c) phob2_cc_data_pane_g2_ParamLimits

0xeac4,	// (0x0008e08c) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x0008f513) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x0008f513) phob2_cc_data_pane_g

0xead6,	// (0x0008e09e) phob2_cc_data_pane_t1_ParamLimits

0xead6,	// (0x0008e09e) phob2_cc_data_pane_t1

0xeaee,	// (0x0008e0b6) phob2_cc_data_pane_t2_ParamLimits

0xeaee,	// (0x0008e0b6) phob2_cc_data_pane_t2

0xeb06,	// (0x0008e0ce) phob2_cc_data_pane_t3_ParamLimits

0xeb06,	// (0x0008e0ce) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x0008f518) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x0008f518) phob2_cc_data_pane_t

0x0c64,	// (0x0008022c) phob2_cc_list_pane_ParamLimits

0x0c64,	// (0x0008022c) phob2_cc_list_pane

0xddf1,	// (0x0008d3b9) scroll_pane_cp035_ParamLimits

0xddf1,	// (0x0008d3b9) scroll_pane_cp035

0x206a,	// (0x00081632) bg_button_pane_cp033

0x0c70,	// (0x00080238) phob2_cc_button_pane_g1

0x0c7c,	// (0x00080244) phob2_cc_button_pane_t1

0x0c91,	// (0x00080259) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x0008f51f) phob2_cc_button_pane_t

0xeb1e,	// (0x0008e0e6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeb1e,	// (0x0008e0e6) list_double_large_graphic_phob2_cc_pane

0xeb30,	// (0x0008e0f8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeb30,	// (0x0008e0f8) list_double_large_graphic_phob2_cc_pane_g1

0xeb3c,	// (0x0008e104) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xeb3c,	// (0x0008e104) list_double_large_graphic_phob2_cc_pane_g2

0xab96,	// (0x0008a15e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xab96,	// (0x0008a15e) list_double_large_graphic_phob2_cc_pane_g3

0xaba2,	// (0x0008a16a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaba2,	// (0x0008a16a) list_double_large_graphic_phob2_cc_pane_g4

0xabae,	// (0x0008a176) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xabae,	// (0x0008a176) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x0008f524) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x0008f524) list_double_large_graphic_phob2_cc_pane_g

0xabba,	// (0x0008a182) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xabba,	// (0x0008a182) list_double_large_graphic_phob2_cc_pane_t1

0xabe3,	// (0x0008a1ab) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xabe3,	// (0x0008a1ab) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x0008f52f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x0008f52f) list_double_large_graphic_phob2_cc_pane_t

0x0d5f,	// (0x00080327) list_highlight_pane_cp025_ParamLimits

0x0d5f,	// (0x00080327) list_highlight_pane_cp025

0x206a,	// (0x00081632) bg_button_pane_cp033_ParamLimits

0x0c70,	// (0x00080238) phob2_cc_button_pane_g1_ParamLimits

0x0c7c,	// (0x00080244) phob2_cc_button_pane_t1_ParamLimits

0x0c91,	// (0x00080259) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x0008f51f) phob2_cc_button_pane_t_ParamLimits

0x322e,	// (0x000827f6) popup_wgtman_window

0xdef4,	// (0x0008d4bc) scroll_pane_cp038

0xa791,	// (0x00089d59) wgtman_btn_pane_cp_01_ParamLimits

0xa791,	// (0x00089d59) wgtman_btn_pane_cp_01

0x0d6d,	// (0x00080335) wgtman_content_pane

0x0d76,	// (0x0008033e) wgtman_heading_pane

0xac0c,	// (0x0008a1d4) bg_heading_pane_cp02

0x0d7f,	// (0x00080347) wgtman_heading_pane_g1

0x0d87,	// (0x0008034f) wgtman_heading_pane_t1

0x0d95,	// (0x0008035d) scroll_pane_cp036

0x0d9d,	// (0x00080365) wgtman_list_pane

0x0da5,	// (0x0008036d) wgtman_list_pane_t1_ParamLimits

0x0da5,	// (0x0008036d) wgtman_list_pane_t1

0xee8f,	// (0x0008e457) cam4_grid_pane

0x8855,	// (0x00087e1d) bg_button_pane_cp015_ParamLimits

0x8865,	// (0x00087e2d) bg_button_pane_cp016_ParamLimits

0x8877,	// (0x00087e3f) bg_button_pane_cp017_ParamLimits

0x88c7,	// (0x00087e8f) popup_vitu2_query_window_g3_ParamLimits

0x88c7,	// (0x00087e8f) popup_vitu2_query_window_g3

0x897a,	// (0x00087f42) popup_vitu2_query_window_t6_ParamLimits

0x897a,	// (0x00087f42) popup_vitu2_query_window_t6

0x89a5,	// (0x00087f6d) popup_vitu2_query_window_t7_ParamLimits

0x89a5,	// (0x00087f6d) popup_vitu2_query_window_t7

0x20a4,	// (0x0008166c) cam4_grid_pane_g1

0x20ad,	// (0x00081675) cam4_grid_pane_g2

0x20b6,	// (0x0008167e) cam4_grid_pane_g3

0x20bf,	// (0x00081687) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x0008f534) cam4_grid_pane_g

0x3ef4,	// (0x000834bc) aid_placing_vt_slider_lsc_ParamLimits

0x4164,	// (0x0008372c) vidtel_button_pane_ParamLimits

0x4164,	// (0x0008372c) vidtel_button_pane

0xac0c,	// (0x0008a1d4) bg_button_pane_cp034

0xeb48,	// (0x0008e110) vidtel_button_pane_g1

0x20d0,	// (0x00081698) vidtel_button_pane_t1

0xd49a,	// (0x0008ca62) aid_size_vtel_slider_touch

0xddf1,	// (0x0008d3b9) scroll_pane_cp039

0xdf20,	// (0x0008d4e8) ncim_query_button_pane_cp01_ParamLimits

0xdf3f,	// (0x0008d507) ncimui_query_pane_g1_ParamLimits

0x206a,	// (0x00081632) input_focus_pane_cp012_ParamLimits

0xdf64,	// (0x0008d52c) ncim_query_entry_pane_t1_ParamLimits

0xddf1,	// (0x0008d3b9) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large

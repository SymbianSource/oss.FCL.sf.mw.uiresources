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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000ed43 };

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
0x0268,	// (0x0000efab) Screen

0x0274,	// (0x0000efb7) application_window

0x02b0,	// (0x0000eff3) area_bottom_pane_ParamLimits

0x02b0,	// (0x0000eff3) area_bottom_pane

0x02e9,	// (0x0000f02c) area_top_pane_ParamLimits

0x02e9,	// (0x0000f02c) area_top_pane

0x9551,	// (0x00018294) call_video_uplink_pane_ParamLimits

0x9551,	// (0x00018294) call_video_uplink_pane

0x0377,	// (0x0000f0ba) main_pane_ParamLimits

0x0377,	// (0x0000f0ba) main_pane

0xbf49,	// (0x0001ac8c) context_pane

0x385a,	// (0x0001259d) navi_pane

0x388c,	// (0x000125cf) popup_cale_events_window_ParamLimits

0x388c,	// (0x000125cf) popup_cale_events_window

0xbf5c,	// (0x0001ac9f) popup_mup_playback_window

0x38a4,	// (0x000125e7) signal_pane

0x9cd2,	// (0x00018a15) main_browser_pane

0x9f03,	// (0x00018c46) main_burst_pane

0x35ba,	// (0x000122fd) main_calc_pane

0xbedb,	// (0x0001ac1e) main_cale_day_pane

0x09cd,	// (0x0000f710) main_cale_month_pane

0xbedb,	// (0x0001ac1e) main_cale_week_pane

0x9f03,	// (0x00018c46) main_call_pane

0x9990,	// (0x000186d3) main_call_poc_pane

0x9f03,	// (0x00018c46) main_camera_pane

0x9f03,	// (0x00018c46) main_chi_dic_pane

0xa791,	// (0x000194d4) main_clock_pane

0x9990,	// (0x000186d3) main_fmradio_pane

0x9f03,	// (0x00018c46) main_graph_messa_pane

0x9990,	// (0x000186d3) main_help_pane

0x9cd2,	// (0x00018a15) main_im_pane

0x9beb,	// (0x0001892e) main_image_pane_ParamLimits

0x9beb,	// (0x0001892e) main_image_pane

0x9990,	// (0x000186d3) main_location2_pane

0x9f03,	// (0x00018c46) main_location_pane

0x9beb,	// (0x0001892e) main_messa_pane

0x9990,	// (0x000186d3) main_mp2_pane

0x9f03,	// (0x00018c46) main_mp_pane

0x9990,	// (0x000186d3) main_msg_pane

0x9990,	// (0x000186d3) main_mup_eq_pane

0x9990,	// (0x000186d3) main_mup_pane

0x9cd2,	// (0x00018a15) main_notes_pane

0x9990,	// (0x000186d3) main_pec_pane

0x9990,	// (0x000186d3) main_phob_pane

0x9990,	// (0x000186d3) main_pinb_pane

0x9990,	// (0x000186d3) main_postcard_pane

0x9990,	// (0x000186d3) main_qdial_pane

0x9f03,	// (0x00018c46) main_skin_pane

0x9990,	// (0x000186d3) main_smil2_pane

0x9f03,	// (0x00018c46) main_smil_pane

0x9f03,	// (0x00018c46) main_video_pane

0x9f03,	// (0x00018c46) main_video_tele_pane

0x9beb,	// (0x0001892e) main_viewer_pane_ParamLimits

0x9beb,	// (0x0001892e) main_viewer_pane

0x9f03,	// (0x00018c46) main_vorec_pane

0x360e,	// (0x00012351) popup_blid_sat_info_window_ParamLimits

0x360e,	// (0x00012351) popup_blid_sat_info_window

0x3666,	// (0x000123a9) popup_dyc_status_message_window_ParamLimits

0x3666,	// (0x000123a9) popup_dyc_status_message_window

0x3680,	// (0x000123c3) popup_grid_large_graphic_window_ParamLimits

0x3680,	// (0x000123c3) popup_grid_large_graphic_window

0x373c,	// (0x0001247f) popup_loc_request_window_ParamLimits

0x373c,	// (0x0001247f) popup_loc_request_window

0x3832,	// (0x00012575) popup_wml_address_window_ParamLimits

0x3832,	// (0x00012575) popup_wml_address_window

0x33f4,	// (0x00012137) call_muted_g1

0x30a9,	// (0x00011dec) popup_call_audio_conf_window_ParamLimits

0x30a9,	// (0x00011dec) popup_call_audio_conf_window

0x3408,	// (0x0001214b) popup_call_audio_first_window_ParamLimits

0x3408,	// (0x0001214b) popup_call_audio_first_window

0x347e,	// (0x000121c1) popup_call_audio_in_window_ParamLimits

0x347e,	// (0x000121c1) popup_call_audio_in_window

0x34ba,	// (0x000121fd) popup_call_audio_out_window_ParamLimits

0x34ba,	// (0x000121fd) popup_call_audio_out_window

0x34f4,	// (0x00012237) popup_call_audio_second_window_ParamLimits

0x34f4,	// (0x00012237) popup_call_audio_second_window

0x354a,	// (0x0001228d) popup_call_audio_wait_window_ParamLimits

0x354a,	// (0x0001228d) popup_call_audio_wait_window

0x357f,	// (0x000122c2) popup_number_entry_window_ParamLimits

0x357f,	// (0x000122c2) popup_number_entry_window

0x957d,	// (0x000182c0) bg_popup_call_pane_cp05_ParamLimits

0x957d,	// (0x000182c0) bg_popup_call_pane_cp05

0x959d,	// (0x000182e0) popup_number_entry_window_t1

0x95b0,	// (0x000182f3) popup_number_entry_window_t2

0x95c2,	// (0x00018305) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001de0d) popup_number_entry_window_t

0x95d4,	// (0x00018317) text_title_cp2

0x95e7,	// (0x0001832a) bg_popup_call_pane_cp_ParamLimits

0x95e7,	// (0x0001832a) bg_popup_call_pane_cp

0x95f5,	// (0x00018338) call_thumbnail_pane

0x95fd,	// (0x00018340) popup_call_audio_in_window_g1_ParamLimits

0x95fd,	// (0x00018340) popup_call_audio_in_window_g1

0x9609,	// (0x0001834c) popup_call_audio_in_window_g2_ParamLimits

0x9609,	// (0x0001834c) popup_call_audio_in_window_g2

0x9615,	// (0x00018358) popup_call_audio_in_window_g3_ParamLimits

0x9615,	// (0x00018358) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001de16) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001de16) popup_call_audio_in_window_g

0x9621,	// (0x00018364) popup_call_audio_in_window_t1_ParamLimits

0x9621,	// (0x00018364) popup_call_audio_in_window_t1

0x963d,	// (0x00018380) popup_call_audio_in_window_t2_ParamLimits

0x963d,	// (0x00018380) popup_call_audio_in_window_t2

0x9659,	// (0x0001839c) popup_call_audio_in_window_t3_ParamLimits

0x9659,	// (0x0001839c) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001de1d) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001de1d) popup_call_audio_in_window_t

0x95e7,	// (0x0001832a) bg_popup_call_pane_cp01_ParamLimits

0x95e7,	// (0x0001832a) bg_popup_call_pane_cp01

0x95f5,	// (0x00018338) call_thumbnail_pane_cp02

0x966c,	// (0x000183af) call_type_pane_cp022

0x9674,	// (0x000183b7) popup_call_audio_out_window_g1_ParamLimits

0x9674,	// (0x000183b7) popup_call_audio_out_window_g1

0x9686,	// (0x000183c9) popup_call_audio_out_window_g2_ParamLimits

0x9686,	// (0x000183c9) popup_call_audio_out_window_g2

0x9692,	// (0x000183d5) popup_call_audio_out_window_g3_ParamLimits

0x9692,	// (0x000183d5) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001de24) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001de24) popup_call_audio_out_window_g

0x96a4,	// (0x000183e7) popup_call_audio_out_window_t1_ParamLimits

0x96a4,	// (0x000183e7) popup_call_audio_out_window_t1

0x96bc,	// (0x000183ff) popup_call_audio_out_window_t2_ParamLimits

0x96bc,	// (0x000183ff) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001de2b) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001de2b) popup_call_audio_out_window_t

0x96d1,	// (0x00018414) bg_popup_call_pane_ParamLimits

0x96d1,	// (0x00018414) bg_popup_call_pane

0x0533,	// (0x0000f276) call_thumbnail_pane_cp_ParamLimits

0x0533,	// (0x0000f276) call_thumbnail_pane_cp

0x9755,	// (0x00018498) call_type_pane_cp01_ParamLimits

0x9755,	// (0x00018498) call_type_pane_cp01

0x9799,	// (0x000184dc) popup_call_audio_first_window_g1_ParamLimits

0x9799,	// (0x000184dc) popup_call_audio_first_window_g1

0x97e5,	// (0x00018528) popup_call_audio_first_window_g2_ParamLimits

0x97e5,	// (0x00018528) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001de30) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001de30) popup_call_audio_first_window_g

0x9829,	// (0x0001856c) popup_call_audio_first_window_t1_ParamLimits

0x9829,	// (0x0001856c) popup_call_audio_first_window_t1

0x98d5,	// (0x00018618) popup_call_audio_first_window_t4_ParamLimits

0x98d5,	// (0x00018618) popup_call_audio_first_window_t4

0x9961,	// (0x000186a4) popup_call_audio_first_window_t5_ParamLimits

0x9961,	// (0x000186a4) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001de35) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001de35) popup_call_audio_first_window_t

0x9990,	// (0x000186d3) bg_popup_call_pane_cp02

0x999a,	// (0x000186dd) call_type_pane_cp023

0x99a2,	// (0x000186e5) popup_call_audio_wait_window_g1

0x99aa,	// (0x000186ed) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001de3c) popup_call_audio_wait_window_g

0x99b2,	// (0x000186f5) popup_call_audio_wait_window_t3

0x99c0,	// (0x00018703) bg_popup_call_pane_cp03_ParamLimits

0x99c0,	// (0x00018703) bg_popup_call_pane_cp03

0x9a20,	// (0x00018763) call_thumbnail_pane_cp011_ParamLimits

0x9a20,	// (0x00018763) call_thumbnail_pane_cp011

0x9a2c,	// (0x0001876f) call_type_pane_cp034_ParamLimits

0x9a2c,	// (0x0001876f) call_type_pane_cp034

0x9a68,	// (0x000187ab) popup_call_audio_second_window_g1_ParamLimits

0x9a68,	// (0x000187ab) popup_call_audio_second_window_g1

0x9aa4,	// (0x000187e7) popup_call_audio_second_window_g2_ParamLimits

0x9aa4,	// (0x000187e7) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001de41) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001de41) popup_call_audio_second_window_g

0x9ae0,	// (0x00018823) popup_call_audio_second_window_t1_ParamLimits

0x9ae0,	// (0x00018823) popup_call_audio_second_window_t1

0x9b61,	// (0x000188a4) popup_call_audio_second_window_t2_ParamLimits

0x9b61,	// (0x000188a4) popup_call_audio_second_window_t2

0x9b97,	// (0x000188da) popup_call_audio_second_window_t3_ParamLimits

0x9b97,	// (0x000188da) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001de46) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001de46) popup_call_audio_second_window_t

0x9990,	// (0x000186d3) bg_popup_call_pane_cp04

0x9bcd,	// (0x00018910) list_conf_pane

0x9bd5,	// (0x00018918) popup_call_audio_conf_window_t1

0x9be3,	// (0x00018926) call_thumbnail_pane_g1

0x9beb,	// (0x0001892e) bg_pinb_pane_ParamLimits

0x9beb,	// (0x0001892e) bg_pinb_pane

0x9bf9,	// (0x0001893c) find_pinb_pane

0x9c02,	// (0x00018945) listscroll_pinb_pane_ParamLimits

0x9c02,	// (0x00018945) listscroll_pinb_pane

0x9c11,	// (0x00018954) pinb_bg_pane_g1

0x0557,	// (0x0000f29a) pinb_bg_pane_g2

0x0563,	// (0x0000f2a6) pinb_bg_pane_g3

0x056f,	// (0x0000f2b2) pinb_bg_pane_g4

0x057b,	// (0x0000f2be) pinb_bg_pane_g5

0x0587,	// (0x0000f2ca) pinb_bg_pane_g6

0x0592,	// (0x0000f2d5) pinb_bg_pane_g7

0x059d,	// (0x0000f2e0) pinb_bg_pane_g8

0x05a8,	// (0x0000f2eb) pinb_bg_pane_g9

0x05b2,	// (0x0000f2f5) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001de4d) pinb_bg_pane_g

0x05cf,	// (0x0000f312) grid_pinb_pane

0x05d8,	// (0x0000f31b) list_pinb_pane

0x05e1,	// (0x0000f324) scroll_pane_cp01_ParamLimits

0x05e1,	// (0x0000f324) scroll_pane_cp01

0x9c1b,	// (0x0001895e) find_pinb_pane_g1_ParamLimits

0x9c1b,	// (0x0001895e) find_pinb_pane_g1

0x9c33,	// (0x00018976) find_pinb_pane_t1

0x9c45,	// (0x00018988) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001de67) find_pinb_pane_t

0x9c5a,	// (0x0001899d) input_focus_pane_cp01_ParamLimits

0x9c5a,	// (0x0001899d) input_focus_pane_cp01

0x05f3,	// (0x0000f336) cell_pinb_pane_ParamLimits

0x05f3,	// (0x0000f336) cell_pinb_pane

0x061c,	// (0x0000f35f) cell_pinb_pane_g1_ParamLimits

0x061c,	// (0x0000f35f) cell_pinb_pane_g1

0x062c,	// (0x0000f36f) cell_pinb_pane_g2_ParamLimits

0x062c,	// (0x0000f36f) cell_pinb_pane_g2

0x9c66,	// (0x000189a9) cell_pinb_pane_g3_ParamLimits

0x9c66,	// (0x000189a9) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001de6c) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001de6c) cell_pinb_pane_g

0x9990,	// (0x000186d3) grid_highlight_pane_cp01

0x0638,	// (0x0000f37b) list_pinb_item_pane_ParamLimits

0x0638,	// (0x0000f37b) list_pinb_item_pane

0x9990,	// (0x000186d3) list_highlight_pane_cp02

0x064a,	// (0x0000f38d) list_pinb_item_pane_g1_ParamLimits

0x064a,	// (0x0000f38d) list_pinb_item_pane_g1

0x0657,	// (0x0000f39a) list_pinb_item_pane_g2_ParamLimits

0x0657,	// (0x0000f39a) list_pinb_item_pane_g2

0x0663,	// (0x0000f3a6) list_pinb_item_pane_g3_ParamLimits

0x0663,	// (0x0000f3a6) list_pinb_item_pane_g3

0x0674,	// (0x0000f3b7) list_pinb_item_pane_g4_ParamLimits

0x0674,	// (0x0000f3b7) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001de73) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001de73) list_pinb_item_pane_g

0x0680,	// (0x0000f3c3) list_pinb_item_pane_t1_ParamLimits

0x0680,	// (0x0000f3c3) list_pinb_item_pane_t1

0x06b5,	// (0x0000f3f8) calc_display_pane

0x06dd,	// (0x0000f420) calc_paper_pane

0x0700,	// (0x0000f443) grid_calc_pane

0x9990,	// (0x000186d3) bg_list_pane_cp01

0x072e,	// (0x0000f471) clock_g1

0x0736,	// (0x0000f479) clock_g2

0x0001,

0xf139,	// (0x0001de7c) clock_g

0x073e,	// (0x0000f481) clock_t1_ParamLimits

0x073e,	// (0x0000f481) clock_t1

0x0753,	// (0x0000f496) clock_t2_ParamLimits

0x0753,	// (0x0000f496) clock_t2

0x0765,	// (0x0000f4a8) clock_t3_ParamLimits

0x0765,	// (0x0000f4a8) clock_t3

0x0777,	// (0x0000f4ba) clock_t4_ParamLimits

0x0777,	// (0x0000f4ba) clock_t4

0x0789,	// (0x0000f4cc) clock_t5_ParamLimits

0x0789,	// (0x0000f4cc) clock_t5

0x079e,	// (0x0000f4e1) clock_t6_ParamLimits

0x079e,	// (0x0000f4e1) clock_t6

0x07b0,	// (0x0000f4f3) clock_t7_ParamLimits

0x07b0,	// (0x0000f4f3) clock_t7

0x07c2,	// (0x0000f505) clock_t8_ParamLimits

0x07c2,	// (0x0000f505) clock_t8

0x07d6,	// (0x0000f519) clock_t9_ParamLimits

0x07d6,	// (0x0000f519) clock_t9

0x0008,

0xf13e,	// (0x0001de81) clock_t_ParamLimits

0xf13e,	// (0x0001de81) clock_t

0x9c7a,	// (0x000189bd) popup_clock_analogue_window_cp02

0x9c7a,	// (0x000189bd) popup_clock_digital_window_cp01

0x9c82,	// (0x000189c5) listscroll_help_pane

0x9990,	// (0x000186d3) phob_pre_status_pane

0x9c8c,	// (0x000189cf) grid_qdial_pane

0x9beb,	// (0x0001892e) listscroll_mce_pane

0x9beb,	// (0x0001892e) bg_notes_pane

0x9c96,	// (0x000189d9) list_notes_pane

0x07ea,	// (0x0000f52d) scroll_pane_cp06

0x9ca4,	// (0x000189e7) bg_calc_paper_pane

0x9cb8,	// (0x000189fb) list_calc_pane

0x9cd2,	// (0x00018a15) bg_calc_display_pane

0x07fe,	// (0x0000f541) calc_display_pane_t1

0x0810,	// (0x0000f553) calc_display_pane_t2

0x9cde,	// (0x00018a21) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001de94) calc_display_pane_t

0x0822,	// (0x0000f565) cell_calc_pane_ParamLimits

0x0822,	// (0x0000f565) cell_calc_pane

0x9cf0,	// (0x00018a33) bg_calc_paper_pane_g1

0x9cfc,	// (0x00018a3f) bg_calc_paper_pane_g2

0x9d08,	// (0x00018a4b) bg_calc_paper_pane_g3

0x9d14,	// (0x00018a57) bg_calc_paper_pane_g4

0x9d20,	// (0x00018a63) bg_calc_paper_pane_g5

0x0857,	// (0x0000f59a) bg_calc_paper_pane_g6

0x0866,	// (0x0000f5a9) bg_calc_paper_pane_g7

0x0875,	// (0x0000f5b8) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001de9b) bg_calc_paper_pane_g

0x0888,	// (0x0000f5cb) calc_bg_paper_pane_g9

0x089b,	// (0x0000f5de) list_calc_item_pane_ParamLimits

0x089b,	// (0x0000f5de) list_calc_item_pane

0x9d2c,	// (0x00018a6f) list_calc_item_pane_g1

0x9d39,	// (0x00018a7c) list_calc_item_pane_t1_ParamLimits

0x9d39,	// (0x00018a7c) list_calc_item_pane_t1

0x08b0,	// (0x0000f5f3) list_calc_item_pane_t2_ParamLimits

0x08b0,	// (0x0000f5f3) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001deac) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001deac) list_calc_item_pane_t

0x9d4b,	// (0x00018a8e) cell_calc_pane_g1

0x9d55,	// (0x00018a98) grid_highlight_pane_cp02

0x08e2,	// (0x0000f625) bg_calc_display_pane_g1

0x08eb,	// (0x0000f62e) bg_calc_display_pane_g2

0x08f5,	// (0x0000f638) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001deb6) bg_calc_display_pane_g

0x08fe,	// (0x0000f641) cell_qdial_pane_ParamLimits

0x08fe,	// (0x0000f641) cell_qdial_pane

0x0912,	// (0x0000f655) cell_qdial_pane_g1_ParamLimits

0x0912,	// (0x0000f655) cell_qdial_pane_g1

0x0928,	// (0x0000f66b) cell_qdial_pane_g2_ParamLimits

0x0928,	// (0x0000f66b) cell_qdial_pane_g2

0x9d77,	// (0x00018aba) cell_qdial_pane_g3_ParamLimits

0x9d77,	// (0x00018aba) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001debd) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001debd) cell_qdial_pane_g

0x094f,	// (0x0000f692) cell_qdial_pane_t1_ParamLimits

0x094f,	// (0x0000f692) cell_qdial_pane_t1

0x0967,	// (0x0000f6aa) cell_qdial_pane_t2_ParamLimits

0x0967,	// (0x0000f6aa) cell_qdial_pane_t2

0x097a,	// (0x0000f6bd) cell_qdial_pane_t3_ParamLimits

0x097a,	// (0x0000f6bd) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001dec6) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001dec6) cell_qdial_pane_t

0x9990,	// (0x000186d3) grid_highlight_pane_cp04

0x9d83,	// (0x00018ac6) thumbnail_qdial_pane_ParamLimits

0x9d83,	// (0x00018ac6) thumbnail_qdial_pane

0x9ddf,	// (0x00018b22) list_help_pane

0x9de8,	// (0x00018b2b) scroll_pane_cp02

0x098d,	// (0x0000f6d0) help_list_pane_t1_ParamLimits

0x098d,	// (0x0000f6d0) help_list_pane_t1

0x9df1,	// (0x00018b34) bg_notes_pane_g2

0x9df9,	// (0x00018b3c) bg_notes_pane_g3

0x9e01,	// (0x00018b44) notes_bg_pane_g1

0x9e09,	// (0x00018b4c) notes_bg_pane_g4

0x9e11,	// (0x00018b54) notes_bg_pane_g5

0x9e19,	// (0x00018b5c) notes_bg_pane_g6

0x9e21,	// (0x00018b64) notes_bg_pane_g7

0x9e29,	// (0x00018b6c) notes_bg_pane_g8

0x9e31,	// (0x00018b74) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001dee4) notes_bg_pane_g

0x09aa,	// (0x0000f6ed) list_notes_text_pane_ParamLimits

0x09aa,	// (0x0000f6ed) list_notes_text_pane

0x9e39,	// (0x00018b7c) list_notes_text_pane_g1

0x09bf,	// (0x0000f702) list_notes_text_pane_t1

0x09cd,	// (0x0000f710) listscroll_cale_week_pane

0x09f9,	// (0x0000f73c) bg_cale_heading_pane

0x9e5c,	// (0x00018b9f) bg_cale_pane_cp01

0x0a11,	// (0x0000f754) cale_week_corner_pane

0x0a30,	// (0x0000f773) cale_week_day_heading_pane

0x0a4d,	// (0x0000f790) cale_week_scroll_pane_g1

0x0a60,	// (0x0000f7a3) cale_week_scroll_pane_g2

0x0a78,	// (0x0000f7bb) cale_week_scroll_pane_g3

0x0a90,	// (0x0000f7d3) cale_week_scroll_pane_g4

0x0aa8,	// (0x0000f7eb) cale_week_scroll_pane_g5

0x0ac8,	// (0x0000f80b) cale_week_scroll_pane_g6

0x0ae8,	// (0x0000f82b) cale_week_scroll_pane_g7

0x0b08,	// (0x0000f84b) cale_week_scroll_pane_g8

0x0b2c,	// (0x0000f86f) cale_week_scroll_pane_g9

0x0b44,	// (0x0000f887) cale_week_scroll_pane_g10

0x0b5c,	// (0x0000f89f) cale_week_scroll_pane_g11

0x0b74,	// (0x0000f8b7) cale_week_scroll_pane_g12

0x0b8c,	// (0x0000f8cf) cale_week_scroll_pane_g13

0x0b8c,	// (0x0000f8cf) cale_week_scroll_pane_g14

0x0b8c,	// (0x0000f8cf) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001def3) cale_week_scroll_pane_g

0x0bc8,	// (0x0000f90b) cale_week_time_pane

0x0bec,	// (0x0000f92f) grid_cale_week_pane

0x9e8b,	// (0x00018bce) scroll_pane_cp08

0x0c12,	// (0x0000f955) cell_cale_week_pane_ParamLimits

0x0c12,	// (0x0000f955) cell_cale_week_pane

0x0ca0,	// (0x0000f9e3) cale_week_day_heading_pane_t1

0x0cca,	// (0x0000fa0d) cale_week_day_heading_pane_t2

0x0cf9,	// (0x0000fa3c) cale_week_day_heading_pane_t3

0x0d28,	// (0x0000fa6b) cale_week_day_heading_pane_t4

0x0d57,	// (0x0000fa9a) cale_week_day_heading_pane_t5

0x0d8e,	// (0x0000fad1) cale_week_day_heading_pane_t6

0x0dc5,	// (0x0000fb08) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001df14) cale_week_day_heading_pane_t

0x9ea8,	// (0x00018beb) bg_cale_side_pane

0x0def,	// (0x0000fb32) cale_week_time_pane_t1

0x0e09,	// (0x0000fb4c) cale_week_time_pane_t2

0x0e23,	// (0x0000fb66) cale_week_time_pane_t3

0x0e3d,	// (0x0000fb80) cale_week_time_pane_t4

0x0e57,	// (0x0000fb9a) cale_week_time_pane_t5

0x0e71,	// (0x0000fbb4) cale_week_time_pane_t6

0x0e8b,	// (0x0000fbce) cale_week_time_pane_t7

0x0ea5,	// (0x0000fbe8) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001df23) cale_week_time_pane_t

0x0ebf,	// (0x0000fc02) cell_cale_week_pane_g2

0x0ede,	// (0x0000fc21) cell_cale_week_pane_g3_ParamLimits

0x0ede,	// (0x0000fc21) cell_cale_week_pane_g3

0x9eb6,	// (0x00018bf9) grid_highlight_pane_cp07

0x9ebe,	// (0x00018c01) listscroll_gms_pane

0x9ec8,	// (0x00018c0b) grid_gms_pane

0x9ed1,	// (0x00018c14) listscroll_gms_pane_g1

0x9ed9,	// (0x00018c1c) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001df34) listscroll_gms_pane_g

0x0ef6,	// (0x0000fc39) scroll_pane_cp010

0x0f01,	// (0x0000fc44) cell_gms_pane_ParamLimits

0x0f01,	// (0x0000fc44) cell_gms_pane

0x0f14,	// (0x0000fc57) cell_gms_pane_g1

0x9ee1,	// (0x00018c24) cell_gms_pane_g2

0x9ee9,	// (0x00018c2c) cell_gms_pane_g3

0x9ef2,	// (0x00018c35) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001df39) cell_gms_pane_g

0x9efb,	// (0x00018c3e) grid_highlight_pane_cp09

0x339e,	// (0x000120e1) phob_pre_status_pane_g1

0x33a6,	// (0x000120e9) phob_pre_status_pane_g2

0x33ae,	// (0x000120f1) phob_pre_status_pane_g3

0x33b6,	// (0x000120f9) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001e324) phob_pre_status_pane_g

0x33c6,	// (0x00012109) phob_pre_status_pane_t1

0x33d4,	// (0x00012117) phob_pre_status_pane_t2

0x33e4,	// (0x00012127) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001e32f) phob_pre_status_pane_t

0x9f03,	// (0x00018c46) bg_list_pane_cp05

0x0f24,	// (0x0000fc67) grid_vorec_pane

0x0f2c,	// (0x0000fc6f) vorec_t1

0x0f3a,	// (0x0000fc7d) vorec_t2

0x0f48,	// (0x0000fc8b) vorec_t3

0x0f56,	// (0x0000fc99) vorec_t4

0x94d9,	// (0x0001821c) vorec_t5

0x94e7,	// (0x0001822a) vorec_t6

0x0004,

0xf1ff,	// (0x0001df42) vorec_t

0x94f5,	// (0x00018238) wait_bar_pane_cp01

0x0f72,	// (0x0000fcb5) cell_vorec_pane_ParamLimits

0x0f72,	// (0x0000fcb5) cell_vorec_pane

0x9f0b,	// (0x00018c4e) cell_vorec_pane_g1

0x9990,	// (0x000186d3) grid_highlight_pane_cp05

0x0f9a,	// (0x0000fcdd) cams_zoom_pane

0x0fa9,	// (0x0000fcec) image_vga_pane

0x0fc3,	// (0x0000fd06) main_camera_pane_g1

0x0fd5,	// (0x0000fd18) main_camera_pane_g2

0x0fe5,	// (0x0000fd28) main_camera_pane_g3

0x0ff5,	// (0x0000fd38) main_camera_pane_g4

0x1005,	// (0x0000fd48) main_camera_pane_g5

0x1015,	// (0x0000fd58) main_camera_pane_g6

0x1027,	// (0x0000fd6a) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001df4d) main_camera_pane_g

0x1037,	// (0x0000fd7a) main_camera_pane_t1

0x104d,	// (0x0000fd90) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001df5e) main_camera_pane_t

0x1087,	// (0x0000fdca) cams_zoom_pane_cp_ParamLimits

0x1087,	// (0x0000fdca) cams_zoom_pane_cp

0x10af,	// (0x0000fdf2) image_cif_pane_ParamLimits

0x10af,	// (0x0000fdf2) image_cif_pane

0x10e5,	// (0x0000fe28) image_subqcif_pane

0x10ed,	// (0x0000fe30) main_video_pane_g1_ParamLimits

0x10ed,	// (0x0000fe30) main_video_pane_g1

0x1111,	// (0x0000fe54) main_video_pane_g2_ParamLimits

0x1111,	// (0x0000fe54) main_video_pane_g2

0x1145,	// (0x0000fe88) main_video_pane_g3_ParamLimits

0x1145,	// (0x0000fe88) main_video_pane_g3

0x1173,	// (0x0000feb6) main_video_pane_g4_ParamLimits

0x1173,	// (0x0000feb6) main_video_pane_g4

0x11a1,	// (0x0000fee4) main_video_pane_g5_ParamLimits

0x11a1,	// (0x0000fee4) main_video_pane_g5

0x9f21,	// (0x00018c64) main_video_pane_g6_ParamLimits

0x9f21,	// (0x00018c64) main_video_pane_g6

0x0006,

0xf220,	// (0x0001df63) main_video_pane_g_ParamLimits

0xf220,	// (0x0001df63) main_video_pane_g

0x11ca,	// (0x0000ff0d) main_video_pane_t1_ParamLimits

0x11ca,	// (0x0000ff0d) main_video_pane_t1

0x9f3b,	// (0x00018c7e) cams_zoom_pane_g1

0x9f44,	// (0x00018c87) cams_zoom_pane_g2

0x9f4d,	// (0x00018c90) cams_zoom_pane_g3

0x9f56,	// (0x00018c99) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001df72) cams_zoom_pane_g

0x1227,	// (0x0000ff6a) grid_cams_pane

0x1241,	// (0x0000ff84) linegrid_cams_pane

0x1255,	// (0x0000ff98) cell_cams_pane_ParamLimits

0x1255,	// (0x0000ff98) cell_cams_pane

0x9f5f,	// (0x00018ca2) cams_burst_image_pane

0x9f67,	// (0x00018caa) cell_cams_pane_g1

0x9990,	// (0x000186d3) grid_highlight_pane_cp03

0x9d4b,	// (0x00018a8e) mp_bg_pane_g1

0x9990,	// (0x000186d3) bg_list_pane_cp03

0xbe00,	// (0x0001ab43) bg_mp_pane

0xbe08,	// (0x0001ab4b) grid_mp_pane

0xbe10,	// (0x0001ab53) media_player_g1

0xbe18,	// (0x0001ab5b) media_player_t1

0xbe26,	// (0x0001ab69) media_player_t2

0xbe34,	// (0x0001ab77) media_player_t3

0xbe42,	// (0x0001ab85) media_player_t4

0xbe50,	// (0x0001ab93) media_player_t5

0xbe5e,	// (0x0001aba1) media_player_t6

0xbe6c,	// (0x0001abaf) media_player_t7

0x0006,

0xf5cb,	// (0x0001e30e) media_player_t

0xbe7a,	// (0x0001abbd) wait_bar_pane_cp02

0xf5b0,	// (0x0001e2f3) main_usb_pane_t

0x3395,	// (0x000120d8) cell_mp_pane

0x9d4b,	// (0x00018a8e) cell_mp_pane_g1

0x9990,	// (0x000186d3) grid_highlight_pane_cp06

0x9f6f,	// (0x00018cb2) grid_skin_colour_pane

0x9f77,	// (0x00018cba) list_highlight_pane_cp03

0x138b,	// (0x000100ce) skin_g1

0x9f7f,	// (0x00018cc2) skin_t1

0x9f8e,	// (0x00018cd1) skin_t2

0x0001,

0xf264,	// (0x0001dfa7) skin_t

0x1393,	// (0x000100d6) cell_skin_colour_pane_ParamLimits

0x1393,	// (0x000100d6) cell_skin_colour_pane

0x9f9c,	// (0x00018cdf) cell_skin_colour_pane_g1

0x140c,	// (0x0001014f) call_video_g1_ParamLimits

0x140c,	// (0x0001014f) call_video_g1

0x1428,	// (0x0001016b) call_video_g2_ParamLimits

0x1428,	// (0x0001016b) call_video_g2

0x0001,

0xf269,	// (0x0001dfac) call_video_g_ParamLimits

0xf269,	// (0x0001dfac) call_video_g

0x147a,	// (0x000101bd) call_video_uplink_pane_cp1_ParamLimits

0x147a,	// (0x000101bd) call_video_uplink_pane_cp1

0x9fae,	// (0x00018cf1) call_video_uplink_pane_cp2

0x1519,	// (0x0001025c) video_down_crop_pane_ParamLimits

0x1519,	// (0x0001025c) video_down_crop_pane

0x1610,	// (0x00010353) video_down_pane_ParamLimits

0x1610,	// (0x00010353) video_down_pane

0x9fb6,	// (0x00018cf9) video_down_subqcif_pane_ParamLimits

0x9fb6,	// (0x00018cf9) video_down_subqcif_pane

0x9fce,	// (0x00018d11) video_down_subqcif_pane_cp_ParamLimits

0x9fce,	// (0x00018d11) video_down_subqcif_pane_cp

0x9ff4,	// (0x00018d37) im_reading_pane_ParamLimits

0x9ff4,	// (0x00018d37) im_reading_pane

0x171e,	// (0x00010461) im_writing_pane_ParamLimits

0x171e,	// (0x00010461) im_writing_pane

0x1734,	// (0x00010477) im_reading_pane_t1

0xa00e,	// (0x00018d51) list_im_pane

0xa01f,	// (0x00018d62) scroll_pane_cp07

0x176d,	// (0x000104b0) im_writing_pane_t1_ParamLimits

0x176d,	// (0x000104b0) im_writing_pane_t1

0xa038,	// (0x00018d7b) im_writing_pane_t2_ParamLimits

0xa038,	// (0x00018d7b) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001dfb6) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001dfb6) im_writing_pane_t

0x9990,	// (0x000186d3) input_focus_pane_cp04

0x9990,	// (0x000186d3) input_focus_pane_cp05

0x1782,	// (0x000104c5) list_im_single_pane_ParamLimits

0x1782,	// (0x000104c5) list_im_single_pane

0x1796,	// (0x000104d9) list_single_im_pane_t1

0x3355,	// (0x00012098) blid_accuracy_pane

0x335d,	// (0x000120a0) blid_compass_pane

0x3367,	// (0x000120aa) main_location_t1

0x3377,	// (0x000120ba) main_location_t2

0x3387,	// (0x000120ca) main_location_t3

0x0002,

0xf5da,	// (0x0001e31d) main_location_t

0x9990,	// (0x000186d3) aid_levels_location

0x9d4b,	// (0x00018a8e) blid_accuracy_pane_g1

0x9d4b,	// (0x00018a8e) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e018) blid_accuracy_pane_g

0xa080,	// (0x00018dc3) wml_content_pane

0xa0be,	// (0x00018e01) wml_button_pane_ParamLimits

0xa0be,	// (0x00018e01) wml_button_pane

0x17a5,	// (0x000104e8) wml_list_single_large_pane_ParamLimits

0x17a5,	// (0x000104e8) wml_list_single_large_pane

0x17ba,	// (0x000104fd) wml_list_single_medium_pane_ParamLimits

0x17ba,	// (0x000104fd) wml_list_single_medium_pane

0x17d0,	// (0x00010513) wml_list_single_small_pane_ParamLimits

0x17d0,	// (0x00010513) wml_list_single_small_pane

0xa0d2,	// (0x00018e15) wml_selection_box_pane_ParamLimits

0xa0d2,	// (0x00018e15) wml_selection_box_pane

0xa0e5,	// (0x00018e28) wml_list_single_pane_t1

0xa0f4,	// (0x00018e37) wml_list_single_medium_pane_t1

0xa103,	// (0x00018e46) wml_list_single_large_pane_t1

0xa112,	// (0x00018e55) input_focus_pane_cp02_ParamLimits

0xa112,	// (0x00018e55) input_focus_pane_cp02

0xa125,	// (0x00018e68) wml_selection_box_pane_g1

0xa12e,	// (0x00018e71) wml_selection_box_pane_t1_ParamLimits

0xa12e,	// (0x00018e71) wml_selection_box_pane_t1

0x9beb,	// (0x0001892e) bg_wml_button_pane_ParamLimits

0x9beb,	// (0x0001892e) bg_wml_button_pane

0xa146,	// (0x00018e89) wml_button_pane_g1

0xa14e,	// (0x00018e91) wml_button_pane_t1

0xa146,	// (0x00018e89) wml_button_bg_pane_g1

0xa15e,	// (0x00018ea1) wml_button_bg_pane_g2

0xa166,	// (0x00018ea9) wml_button_bg_pane_g3

0xa16e,	// (0x00018eb1) wml_button_bg_pane_g4

0xa176,	// (0x00018eb9) wml_button_bg_pane_g5

0xa17e,	// (0x00018ec1) wml_button_bg_pane_g6

0xa186,	// (0x00018ec9) wml_button_bg_pane_g7

0xa18e,	// (0x00018ed1) wml_button_bg_pane_g8

0xa196,	// (0x00018ed9) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001dfbb) wml_button_bg_pane_g

0x17e8,	// (0x0001052b) bg_list_pane_cp02

0xa19e,	// (0x00018ee1) mce_header_pane_ParamLimits

0xa19e,	// (0x00018ee1) mce_header_pane

0xa1b4,	// (0x00018ef7) mce_icon_pane

0xa1b4,	// (0x00018ef7) mce_image_pane

0xa1bd,	// (0x00018f00) mce_text_pane_ParamLimits

0xa1bd,	// (0x00018f00) mce_text_pane

0x17f0,	// (0x00010533) scroll_pane_cp03

0xa0b6,	// (0x00018df9) scroll_pane_cp04

0xa1d0,	// (0x00018f13) scroll_pane_cp05_ParamLimits

0xa1d0,	// (0x00018f13) scroll_pane_cp05

0x17fa,	// (0x0001053d) mce_header_field_pane_ParamLimits

0x17fa,	// (0x0001053d) mce_header_field_pane

0x1811,	// (0x00010554) mce_header_field_pane_2_ParamLimits

0x1811,	// (0x00010554) mce_header_field_pane_2

0x1827,	// (0x0001056a) mce_header_field_pane_3

0x182f,	// (0x00010572) list_single_mce_message_pane_ParamLimits

0x182f,	// (0x00010572) list_single_mce_message_pane

0x1844,	// (0x00010587) list_single_mce_smart_pane_ParamLimits

0x1844,	// (0x00010587) list_single_mce_smart_pane

0xa1dc,	// (0x00018f1f) input_focus_pane_cp03

0xa1e5,	// (0x00018f28) list_header_data_pane

0x1864,	// (0x000105a7) mce_header_field_pane_t1

0x1874,	// (0x000105b7) list_single_mce_header_pane_ParamLimits

0x1874,	// (0x000105b7) list_single_mce_header_pane

0xa1ed,	// (0x00018f30) list_single_mce_header_pane_t1

0xa1fc,	// (0x00018f3f) list_single_mce_message_pane_g1

0xa204,	// (0x00018f47) list_single_mce_message_pane_t1

0x18ae,	// (0x000105f1) bg_cale_heading_pane_cp01_ParamLimits

0x18ae,	// (0x000105f1) bg_cale_heading_pane_cp01

0xa212,	// (0x00018f55) bg_cale_pane_cp02_ParamLimits

0xa212,	// (0x00018f55) bg_cale_pane_cp02

0x18e8,	// (0x0001062b) cale_month_corner_pane

0x1907,	// (0x0001064a) cale_month_day_heading_pane_ParamLimits

0x1907,	// (0x0001064a) cale_month_day_heading_pane

0x1959,	// (0x0001069c) cale_month_pane_g1_ParamLimits

0x1959,	// (0x0001069c) cale_month_pane_g1

0x1988,	// (0x000106cb) cale_month_pane_g2_ParamLimits

0x1988,	// (0x000106cb) cale_month_pane_g2

0x19b8,	// (0x000106fb) cale_month_pane_g3_ParamLimits

0x19b8,	// (0x000106fb) cale_month_pane_g3

0x19f4,	// (0x00010737) cale_month_pane_g4_ParamLimits

0x19f4,	// (0x00010737) cale_month_pane_g4

0x1a30,	// (0x00010773) cale_month_pane_g5_ParamLimits

0x1a30,	// (0x00010773) cale_month_pane_g5

0x1a78,	// (0x000107bb) cale_month_pane_g6_ParamLimits

0x1a78,	// (0x000107bb) cale_month_pane_g6

0x1ac4,	// (0x00010807) cale_month_pane_g7_ParamLimits

0x1ac4,	// (0x00010807) cale_month_pane_g7

0x1b18,	// (0x0001085b) cale_month_pane_g8_ParamLimits

0x1b18,	// (0x0001085b) cale_month_pane_g8

0x1b6c,	// (0x000108af) cale_month_pane_g9_ParamLimits

0x1b6c,	// (0x000108af) cale_month_pane_g9

0x1bbe,	// (0x00010901) cale_month_pane_g10_ParamLimits

0x1bbe,	// (0x00010901) cale_month_pane_g10

0x1c10,	// (0x00010953) cale_month_pane_g11_ParamLimits

0x1c10,	// (0x00010953) cale_month_pane_g11

0x1c62,	// (0x000109a5) cale_month_pane_g12_ParamLimits

0x1c62,	// (0x000109a5) cale_month_pane_g12

0x1cb4,	// (0x000109f7) cale_month_pane_g13_ParamLimits

0x1cb4,	// (0x000109f7) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001dfce) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001dfce) cale_month_pane_g

0x1d06,	// (0x00010a49) cale_month_week_pane

0x1d2a,	// (0x00010a6d) grid_cale_month_pane_ParamLimits

0x1d2a,	// (0x00010a6d) grid_cale_month_pane

0x1d73,	// (0x00010ab6) cale_month_day_heading_pane_t1

0x1df9,	// (0x00010b3c) cale_month_day_heading_pane_t2

0x1e72,	// (0x00010bb5) cale_month_day_heading_pane_t3

0x1eeb,	// (0x00010c2e) cale_month_day_heading_pane_t4

0x1f6c,	// (0x00010caf) cale_month_day_heading_pane_t5

0x1ff5,	// (0x00010d38) cale_month_day_heading_pane_t6

0x207e,	// (0x00010dc1) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001dfe9) cale_month_day_heading_pane_t

0x9ea8,	// (0x00018beb) bg_cale_side_pane_cp01

0x210f,	// (0x00010e52) cale_month_week_pane_t1

0x2128,	// (0x00010e6b) cale_month_week_pane_t2

0x2141,	// (0x00010e84) cale_month_week_pane_t3

0x215a,	// (0x00010e9d) cale_month_week_pane_t4

0x2173,	// (0x00010eb6) cale_month_week_pane_t5

0x218c,	// (0x00010ecf) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001dff8) cale_month_week_pane_t

0x21a5,	// (0x00010ee8) cell_cale_month_pane_ParamLimits

0x21a5,	// (0x00010ee8) cell_cale_month_pane

0xa251,	// (0x00018f94) cell_cale_month_pane_g1

0x22fd,	// (0x00011040) cell_cale_month_pane_t1_ParamLimits

0x22fd,	// (0x00011040) cell_cale_month_pane_t1

0x9eb6,	// (0x00018bf9) grid_highlight_pane_cp08

0x9d4b,	// (0x00018a8e) main_smil_g1

0x2329,	// (0x0001106c) smil_status_pane

0xa25d,	// (0x00018fa0) smil_text_pane

0xbd20,	// (0x0001aa63) bg_popup_call3_rect_pane_g8

0xbd28,	// (0x0001aa6b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e2b1) bg_popup_call3_rect_pane_g

0xbfc3,	// (0x0001ad06) smil_status_volume_pane_g1

0xa267,	// (0x00018faa) smil_status_pane_t1

0xbff6,	// (0x0001ad39) volume_smil_pane

0xa27e,	// (0x00018fc1) list_smil_text_pane

0x233c,	// (0x0001107f) scroll_pane_cp011

0x2347,	// (0x0001108a) smil_text_list_pane_t1_ParamLimits

0x2347,	// (0x0001108a) smil_text_list_pane_t1

0xa288,	// (0x00018fcb) aid_volume_smil_ParamLimits

0xa288,	// (0x00018fcb) aid_volume_smil

0x9d4b,	// (0x00018a8e) smil_volume_pane_g1

0x9d4b,	// (0x00018a8e) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e018) smil_volume_pane_g

0x09cd,	// (0x0000f710) listscroll_cale_day_pane

0xa2aa,	// (0x00018fed) bg_cale_pane

0xa2c2,	// (0x00019005) list_cale_pane

0xa2e5,	// (0x00019028) scroll_pane_cp09

0xa2f6,	// (0x00019039) cale_bg_pane_g1

0xa2fe,	// (0x00019041) cale_bg_pane_g2

0xa306,	// (0x00019049) cale_bg_pane_g3

0xa30e,	// (0x00019051) cale_bg_pane_g4

0xa316,	// (0x00019059) cale_bg_pane_g5

0xa31e,	// (0x00019061) cale_bg_pane_g6

0xa326,	// (0x00019069) cale_bg_pane_g7

0xa32e,	// (0x00019071) cale_bg_pane_g8

0xa336,	// (0x00019079) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e01d) cale_bg_pane_g

0x238b,	// (0x000110ce) list_cale_time_pane_ParamLimits

0x238b,	// (0x000110ce) list_cale_time_pane

0xa33e,	// (0x00019081) list_cale_time_pane_g1_ParamLimits

0xa33e,	// (0x00019081) list_cale_time_pane_g1

0xa34a,	// (0x0001908d) list_cale_time_pane_g2_ParamLimits

0xa34a,	// (0x0001908d) list_cale_time_pane_g2

0x23a0,	// (0x000110e3) list_cale_time_pane_g3_ParamLimits

0x23a0,	// (0x000110e3) list_cale_time_pane_g3

0x23ae,	// (0x000110f1) list_cale_time_pane_g4_ParamLimits

0x23ae,	// (0x000110f1) list_cale_time_pane_g4

0x23bc,	// (0x000110ff) list_cale_time_pane_g5_ParamLimits

0x23bc,	// (0x000110ff) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e030) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e030) list_cale_time_pane_g

0xa364,	// (0x000190a7) list_cale_time_pane_t1_ParamLimits

0xa364,	// (0x000190a7) list_cale_time_pane_t1

0xa38c,	// (0x000190cf) list_cale_time_pane_t2_ParamLimits

0xa38c,	// (0x000190cf) list_cale_time_pane_t2

0x271d,	// (0x00011460) aid_blid_cardinal_pane

0x275b,	// (0x0001149e) compass_pane_t4

0xa3b4,	// (0x000190f7) list_cale_time_pane_t4_ParamLimits

0xa3b4,	// (0x000190f7) list_cale_time_pane_t4

0x2769,	// (0x000114ac) compass_pane_t5

0x2777,	// (0x000114ba) compass_pane_t6

0x2785,	// (0x000114c8) compass_pane_t7

0xa8d6,	// (0x00019619) navi_pane_cc_t1

0xaac5,	// (0x00019808) aid_phob_thumbnail_center_pane

0x2d6d,	// (0x00011ab0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e03d) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e03d) list_cale_time_pane_t

0x95e7,	// (0x0001832a) bg_popup_window_pane_cp02_ParamLimits

0x95e7,	// (0x0001832a) bg_popup_window_pane_cp02

0xa3dc,	// (0x0001911f) heading_pane_cp01_ParamLimits

0xa3dc,	// (0x0001911f) heading_pane_cp01

0xa3e8,	// (0x0001912b) loc_req_pane_ParamLimits

0xa3e8,	// (0x0001912b) loc_req_pane

0xa3f8,	// (0x0001913b) loc_type_pane_ParamLimits

0xa3f8,	// (0x0001913b) loc_type_pane

0xa40a,	// (0x0001914d) loc_type_pane_t1_ParamLimits

0xa40a,	// (0x0001914d) loc_type_pane_t1

0xa41c,	// (0x0001915f) loc_type_pane_t2_ParamLimits

0xa41c,	// (0x0001915f) loc_type_pane_t2

0xa42e,	// (0x00019171) loc_type_pane_t3_ParamLimits

0xa42e,	// (0x00019171) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e044) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e044) loc_type_pane_t

0xa440,	// (0x00019183) list_loc_req_pane

0xa44a,	// (0x0001918d) scroll_pane_cp012

0x23ca,	// (0x0001110d) list_single_loc_request_popup_menu_pane_ParamLimits

0x23ca,	// (0x0001110d) list_single_loc_request_popup_menu_pane

0xa455,	// (0x00019198) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa455,	// (0x00019198) list_single_loc_request_popup_menu_pane_g1

0xa461,	// (0x000191a4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa461,	// (0x000191a4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e04b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e04b) list_single_loc_request_popup_menu_pane_g

0xa46d,	// (0x000191b0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa46d,	// (0x000191b0) list_single_loc_request_popup_menu_pane_t1

0x9beb,	// (0x0001892e) bg_popup_window_pane_cp03_ParamLimits

0x9beb,	// (0x0001892e) bg_popup_window_pane_cp03

0xa483,	// (0x000191c6) heading_loc_req_pane_ParamLimits

0xa483,	// (0x000191c6) heading_loc_req_pane

0x23d7,	// (0x0001111a) popup_dyc_status_message_window_g1_ParamLimits

0x23d7,	// (0x0001111a) popup_dyc_status_message_window_g1

0x23eb,	// (0x0001112e) popup_dyc_status_message_window_t1_ParamLimits

0x23eb,	// (0x0001112e) popup_dyc_status_message_window_t1

0x2400,	// (0x00011143) popup_dyc_status_message_window_t2_ParamLimits

0x2400,	// (0x00011143) popup_dyc_status_message_window_t2

0x2415,	// (0x00011158) popup_dyc_status_message_window_t3_ParamLimits

0x2415,	// (0x00011158) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e050) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e050) popup_dyc_status_message_window_t

0x9990,	// (0x000186d3) bg_heading_pane_cp01

0xa48f,	// (0x000191d2) heading_loc_req_pane_g1

0xa497,	// (0x000191da) heading_loc_req_pane_g2

0xa49f,	// (0x000191e2) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e057) heading_loc_req_pane_g

0xa4a7,	// (0x000191ea) heading_loc_req_pane_t1

0xa4b6,	// (0x000191f9) bg_popup_sub_pane_cp01_ParamLimits

0xa4b6,	// (0x000191f9) bg_popup_sub_pane_cp01

0xa4c4,	// (0x00019207) popup_cale_events_window_g1_ParamLimits

0xa4c4,	// (0x00019207) popup_cale_events_window_g1

0xa4e4,	// (0x00019227) popup_cale_events_window_g2_ParamLimits

0xa4e4,	// (0x00019227) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e08b) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e08b) popup_cale_events_window_g

0xa504,	// (0x00019247) popup_cale_events_window_t1_ParamLimits

0xa504,	// (0x00019247) popup_cale_events_window_t1

0xa516,	// (0x00019259) popup_cale_events_window_t2_ParamLimits

0xa516,	// (0x00019259) popup_cale_events_window_t2

0xa554,	// (0x00019297) popup_cale_events_window_t3_ParamLimits

0xa554,	// (0x00019297) popup_cale_events_window_t3

0xa58e,	// (0x000192d1) popup_cale_events_window_t4_ParamLimits

0xa58e,	// (0x000192d1) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e090) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e090) popup_cale_events_window_t

0x2518,	// (0x0001125b) call_type_pane

0x2528,	// (0x0001126b) popup_call_status_window_g1

0x253c,	// (0x0001127f) popup_call_status_window_g2

0x2550,	// (0x00011293) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e099) popup_call_status_window_g

0xa5c4,	// (0x00019307) call_type_pane_g1

0xa5cd,	// (0x00019310) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e0a0) call_type_pane_g

0x9990,	// (0x000186d3) bg_popup_sub_pane_cp02

0xa5d6,	// (0x00019319) listscroll_popup_wml_pane

0xa5de,	// (0x00019321) list_wml_pane

0xa5e8,	// (0x0001932b) scroll_pane_cp013

0xa5f3,	// (0x00019336) list_single_graphic_popup_wml_pane_ParamLimits

0xa5f3,	// (0x00019336) list_single_graphic_popup_wml_pane

0x9d4b,	// (0x00018a8e) list_single_graphic_popup_wml_pane_g1

0xa607,	// (0x0001934a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e0a5) list_single_graphic_popup_wml_pane_g

0xa60f,	// (0x00019352) list_single_graphic_popup_wml_pane_t1

0xa625,	// (0x00019368) aid_call_pane

0x9be3,	// (0x00018926) popup_clock_analogue_window_g1

0x9be3,	// (0x00018926) popup_clock_analogue_window_g2

0xa62d,	// (0x00019370) popup_clock_analogue_window_g3

0xa62d,	// (0x00019370) popup_clock_analogue_window_g4

0x9d4b,	// (0x00018a8e) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e0aa) popup_clock_analogue_window_g

0xa635,	// (0x00019378) popup_clock_analogue_window_t1

0xa643,	// (0x00019386) clock_digital_number_pane_ParamLimits

0xa643,	// (0x00019386) clock_digital_number_pane

0xa64f,	// (0x00019392) clock_digital_number_pane_cp02_ParamLimits

0xa64f,	// (0x00019392) clock_digital_number_pane_cp02

0xa65b,	// (0x0001939e) clock_digital_number_pane_cp03_ParamLimits

0xa65b,	// (0x0001939e) clock_digital_number_pane_cp03

0xa667,	// (0x000193aa) clock_digital_number_pane_cp04_ParamLimits

0xa667,	// (0x000193aa) clock_digital_number_pane_cp04

0xa677,	// (0x000193ba) clock_digital_separator_pane_ParamLimits

0xa677,	// (0x000193ba) clock_digital_separator_pane

0xa683,	// (0x000193c6) popup_clock_digital_window_t1

0x9d4b,	// (0x00018a8e) clock_digital_number_pane_g1

0x9d4b,	// (0x00018a8e) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e018) clock_digital_number_pane_g

0x9d4b,	// (0x00018a8e) clock_digital_separator_pane_g1

0x9d4b,	// (0x00018a8e) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e018) clock_digital_separator_pane_g

0x9990,	// (0x000186d3) bg_popup_window_pane_cp04

0xa6a0,	// (0x000193e3) heading_pane_cp03

0xa6a8,	// (0x000193eb) listscroll_popup_gms_pane

0xa6b0,	// (0x000193f3) grid_large_graphic_popup_pane

0xa6ba,	// (0x000193fd) listscroll_popup_gms_pane_g1

0xa6c2,	// (0x00019405) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e0b5) listscroll_popup_gms_pane_g

0xa0b6,	// (0x00018df9) scroll_pane_cp014

0x255f,	// (0x000112a2) cell_large_graphic_popup_pane_ParamLimits

0x255f,	// (0x000112a2) cell_large_graphic_popup_pane

0x2577,	// (0x000112ba) cell_large_graphic_popup_pane_g1_ParamLimits

0x2577,	// (0x000112ba) cell_large_graphic_popup_pane_g1

0xa6ca,	// (0x0001940d) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6ca,	// (0x0001940d) cell_large_graphic_popup_pane_g2

0xa6d6,	// (0x00019419) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6d6,	// (0x00019419) cell_large_graphic_popup_pane_g3

0xa6e3,	// (0x00019426) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6e3,	// (0x00019426) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e0ba) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e0ba) cell_large_graphic_popup_pane_g

0xa6f3,	// (0x00019436) grid_highlight_pane_cp010

0x9d4b,	// (0x00018a8e) bg_popup_call_pane_g1

0xa6fd,	// (0x00019440) list_single_graphic_popup_conf_pane_ParamLimits

0xa6fd,	// (0x00019440) list_single_graphic_popup_conf_pane

0xa710,	// (0x00019453) list_highlight_pane_cp01

0xa719,	// (0x0001945c) list_single_graphic_popup_conf_pane_g1

0xa721,	// (0x00019464) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e0c3) list_single_graphic_popup_conf_pane_g

0xa729,	// (0x0001946c) list_single_graphic_popup_conf_pane_t1

0xa737,	// (0x0001947a) linegrid_cams_pane_g1

0x2583,	// (0x000112c6) linegrid_cams_pane_g2

0x9ee9,	// (0x00018c2c) linegrid_cams_pane_g3

0xa740,	// (0x00019483) linegrid_cams_pane_g4

0x258c,	// (0x000112cf) linegrid_cams_pane_g5

0x2595,	// (0x000112d8) linegrid_cams_pane_g6

0x9ef2,	// (0x00018c35) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e0c8) linegrid_cams_pane_g

0xa749,	// (0x0001948c) popup_clock_analogue_window

0xa749,	// (0x0001948c) popup_clock_digital_window

0x9990,	// (0x000186d3) popup_phob_thumbnail_window

0x9d4b,	// (0x00018a8e) call_video_uplink_pane_g1

0xa752,	// (0x00019495) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e0d7) call_video_uplink_pane_g

0xa75a,	// (0x0001949d) video_uplink_pane

0xa762,	// (0x000194a5) mce_image_pane_g1

0x25a0,	// (0x000112e3) mce_image_pane_g2

0x25aa,	// (0x000112ed) mce_image_pane_g3

0x25b2,	// (0x000112f5) mce_image_pane_g4

0x25ba,	// (0x000112fd) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e0dc) mce_image_pane_g

0xa76c,	// (0x000194af) control_top_pane_stacon_cp01_ParamLimits

0xa76c,	// (0x000194af) control_top_pane_stacon_cp01

0xa780,	// (0x000194c3) uni_indicator_pane_stacon_cp01_ParamLimits

0xa780,	// (0x000194c3) uni_indicator_pane_stacon_cp01

0xa791,	// (0x000194d4) bg_popup_sub_pane_cp03

0xa79b,	// (0x000194de) chi_dic_find_pane

0x25c2,	// (0x00011305) listscroll_chi_dic_pane

0xa7a3,	// (0x000194e6) main_pane_chidic_g1

0xa7ab,	// (0x000194ee) chi_dic_find_pane_t1

0xa7b9,	// (0x000194fc) find_chidic_pane

0xa7c2,	// (0x00019505) chi_dic_list_pane_ParamLimits

0xa7c2,	// (0x00019505) chi_dic_list_pane

0xa7d3,	// (0x00019516) scroll_pane_cp020

0xa7db,	// (0x0001951e) find_chidic_pane_t1

0x9990,	// (0x000186d3) input_focus_pane_cp06

0x25d6,	// (0x00011319) list_chi_dic_pane_ParamLimits

0x25d6,	// (0x00011319) list_chi_dic_pane

0x25e8,	// (0x0001132b) list_chi_dic_pane_t1_ParamLimits

0x25e8,	// (0x0001132b) list_chi_dic_pane_t1

0x9990,	// (0x000186d3) list_highlight_pane_cp020

0xa7ea,	// (0x0001952d) bg_cale_heading_pane_g1

0x25fb,	// (0x0001133e) bg_cale_heading_pane_g2

0x2603,	// (0x00011346) bg_cale_heading_pane_g3

0x260b,	// (0x0001134e) bg_cale_heading_pane_g4

0x2615,	// (0x00011358) bg_cale_heading_pane_g5

0x261f,	// (0x00011362) bg_cale_heading_pane_g6

0x2627,	// (0x0001136a) bg_cale_heading_pane_g7

0x262f,	// (0x00011372) bg_cale_heading_pane_g8

0x2639,	// (0x0001137c) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e0e7) bg_cale_heading_pane_g

0xa7ea,	// (0x0001952d) bg_cale_side_pane_g1

0x2643,	// (0x00011386) bg_cale_side_pane_g2

0x264b,	// (0x0001138e) bg_cale_side_pane_g3

0x2653,	// (0x00011396) bg_cale_side_pane_g4

0x265b,	// (0x0001139e) bg_cale_side_pane_g5

0x2663,	// (0x000113a6) bg_cale_side_pane_g6

0x266b,	// (0x000113ae) bg_cale_side_pane_g7

0x2673,	// (0x000113b6) bg_cale_side_pane_g8

0x267b,	// (0x000113be) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e0fa) bg_cale_side_pane_g

0x2683,	// (0x000113c6) popup_call_status_window_ParamLimits

0x2683,	// (0x000113c6) popup_call_status_window

0xa7f2,	// (0x00019535) stacon_top_pane

0xa7fa,	// (0x0001953d) status_pane_ParamLimits

0xa7fa,	// (0x0001953d) status_pane

0xa80f,	// (0x00019552) status_small_pane

0xa817,	// (0x0001955a) control_pane

0x9990,	// (0x000186d3) stacon_bottom_pane

0xa81f,	// (0x00019562) list_single_mce_smart_pane_t1_ParamLimits

0xa81f,	// (0x00019562) list_single_mce_smart_pane_t1

0xa832,	// (0x00019575) list_single_mce_smart_pane_t2_ParamLimits

0xa832,	// (0x00019575) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e10d) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e10d) list_single_mce_smart_pane_t

0x26cc,	// (0x0001140f) compass_pane

0x26d5,	// (0x00011418) main_location2_pane_t1

0x26e7,	// (0x0001142a) main_location2_pane_t2

0x26f9,	// (0x0001143c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e112) main_location2_pane_t

0xa851,	// (0x00019594) compass_pane_g1_ParamLimits

0xa851,	// (0x00019594) compass_pane_g1

0x273d,	// (0x00011480) compass_pane_t1

0x274c,	// (0x0001148f) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e11b) compass_pane_t

0x2793,	// (0x000114d6) text_secondary_cp61

0xa8cd,	// (0x00019610) navi_pane_cams_g5

0xa949,	// (0x0001968c) navi_pane_im_t1

0xa957,	// (0x0001969a) navi_pane_mp_g1_ParamLimits

0xa957,	// (0x0001969a) navi_pane_mp_g1

0xa96b,	// (0x000196ae) navi_pane_mp_g2_ParamLimits

0xa96b,	// (0x000196ae) navi_pane_mp_g2

0xa977,	// (0x000196ba) navi_pane_mp_g3_ParamLimits

0xa977,	// (0x000196ba) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e12f) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e12f) navi_pane_mp_g

0xa983,	// (0x000196c6) navi_pane_mp_t1

0xa991,	// (0x000196d4) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e136) navi_pane_mp_t

0xa9fc,	// (0x0001973f) navi_pane_vt_g1

0xa983,	// (0x000196c6) navi_pane_vt_t1

0xaa04,	// (0x00019747) navi_slider_pane

0x9f03,	// (0x00018c46) zooming_pane

0xaa14,	// (0x00019757) navi_slider_pane_g1

0xaa1d,	// (0x00019760) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e13d) navi_slider_pane_g

0xaa4a,	// (0x0001978d) aid_levels_zoom

0xaa52,	// (0x00019795) zooming_pane_g1

0xaa5a,	// (0x0001979d) zooming_pane_g2

0xaa5a,	// (0x0001979d) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e14c) zooming_pane_g

0xaa62,	// (0x000197a5) level_10_zoom

0xaa6b,	// (0x000197ae) level_11_zoom

0xaa74,	// (0x000197b7) level_1_zoom

0xaa7d,	// (0x000197c0) level_2_zoom

0xaa86,	// (0x000197c9) level_3_zoom

0xaa8f,	// (0x000197d2) level_4_zoom

0xaa98,	// (0x000197db) level_5_zoom

0xaaa1,	// (0x000197e4) level_6_zoom

0xaaaa,	// (0x000197ed) level_7_zoom

0xaab3,	// (0x000197f6) level_8_zoom

0xaabc,	// (0x000197ff) level_9_zoom

0xaacd,	// (0x00019810) popup_phob_thumbnail_window_g1

0xaad5,	// (0x00019818) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e153) popup_phob_thumbnail_window_g

0xbe82,	// (0x0001abc5) level_1_location

0xbe8a,	// (0x0001abcd) level_2_location

0xbe92,	// (0x0001abd5) level_3_location

0xbe9a,	// (0x0001abdd) level_4_location

0x9f03,	// (0x00018c46) level_5_location

0x27e4,	// (0x00011527) mce_icon_pane_g1

0x27ee,	// (0x00011531) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e158) mce_icon_pane_g

0x27f6,	// (0x00011539) main_mup_pane_g1_ParamLimits

0x27f6,	// (0x00011539) main_mup_pane_g1

0x280c,	// (0x0001154f) main_mup_pane_g2_ParamLimits

0x280c,	// (0x0001154f) main_mup_pane_g2

0x2824,	// (0x00011567) main_mup_pane_g3_ParamLimits

0x2824,	// (0x00011567) main_mup_pane_g3

0x283c,	// (0x0001157f) main_mup_pane_g4_ParamLimits

0x283c,	// (0x0001157f) main_mup_pane_g4

0x2854,	// (0x00011597) main_mup_pane_g5_ParamLimits

0x2854,	// (0x00011597) main_mup_pane_g5

0x2870,	// (0x000115b3) main_mup_pane_g6_ParamLimits

0x2870,	// (0x000115b3) main_mup_pane_g6

0x2888,	// (0x000115cb) main_mup_pane_g7_ParamLimits

0x2888,	// (0x000115cb) main_mup_pane_g7

0x28a0,	// (0x000115e3) main_mup_pane_g8_ParamLimits

0x28a0,	// (0x000115e3) main_mup_pane_g8

0x28ba,	// (0x000115fd) main_mup_pane_g9_ParamLimits

0x28ba,	// (0x000115fd) main_mup_pane_g9

0x28d4,	// (0x00011617) main_mup_pane_g10_ParamLimits

0x28d4,	// (0x00011617) main_mup_pane_g10

0x28ee,	// (0x00011631) main_mup_pane_g11_ParamLimits

0x28ee,	// (0x00011631) main_mup_pane_g11

0x2902,	// (0x00011645) main_mup_pane_g12_ParamLimits

0x2902,	// (0x00011645) main_mup_pane_g12

0x2918,	// (0x0001165b) main_mup_pane_g13_ParamLimits

0x2918,	// (0x0001165b) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e15d) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e15d) main_mup_pane_g

0x292c,	// (0x0001166f) main_mup_pane_t1_ParamLimits

0x292c,	// (0x0001166f) main_mup_pane_t1

0x2946,	// (0x00011689) main_mup_pane_t2_ParamLimits

0x2946,	// (0x00011689) main_mup_pane_t2

0x295e,	// (0x000116a1) main_mup_pane_t3_ParamLimits

0x295e,	// (0x000116a1) main_mup_pane_t3

0x2976,	// (0x000116b9) main_mup_pane_t4_ParamLimits

0x2976,	// (0x000116b9) main_mup_pane_t4

0x2994,	// (0x000116d7) main_mup_pane_t5_ParamLimits

0x2994,	// (0x000116d7) main_mup_pane_t5

0x29a9,	// (0x000116ec) main_mup_pane_t6_ParamLimits

0x29a9,	// (0x000116ec) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e178) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e178) main_mup_pane_t

0x29bb,	// (0x000116fe) mup_progress_pane_ParamLimits

0x29bb,	// (0x000116fe) mup_progress_pane

0x29c7,	// (0x0001170a) mup_visualizer_pane_ParamLimits

0x29c7,	// (0x0001170a) mup_visualizer_pane

0x29f7,	// (0x0001173a) mup_volume_pane_ParamLimits

0x29f7,	// (0x0001173a) mup_volume_pane

0xaadd,	// (0x00019820) mup_visualizer_pane_g1_ParamLimits

0xaadd,	// (0x00019820) mup_visualizer_pane_g1

0xaadd,	// (0x00019820) mup_visualizer_pane_g2_ParamLimits

0xaadd,	// (0x00019820) mup_visualizer_pane_g2

0xa851,	// (0x00019594) mup_visualizer_pane_g3_ParamLimits

0xa851,	// (0x00019594) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e185) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e185) mup_visualizer_pane_g

0x9d4b,	// (0x00018a8e) mup_volume_pane_g1

0xaaf3,	// (0x00019836) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e18c) mup_volume_pane_g

0x9d4b,	// (0x00018a8e) mup_progress_pane_g1

0xaafc,	// (0x0001983f) mup_progress_pane_g2

0xab05,	// (0x00019848) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e191) mup_progress_pane_g

0x9990,	// (0x000186d3) bg_popup_window_pane_cp05

0xab0e,	// (0x00019851) heading_pane_cp02_ParamLimits

0xab0e,	// (0x00019851) heading_pane_cp02

0xab28,	// (0x0001986b) list_popup_blid_pane

0xab30,	// (0x00019873) list_blid_sat_info_pane_ParamLimits

0xab30,	// (0x00019873) list_blid_sat_info_pane

0xab43,	// (0x00019886) list_blid_sat_info_pane_g1

0xab4b,	// (0x0001988e) list_blid_sat_info_pane_t1

0x2b0d,	// (0x00011850) mup_equalizer_pane_ParamLimits

0x2b0d,	// (0x00011850) mup_equalizer_pane

0x2b26,	// (0x00011869) mup_equalizer_pane_cp1_ParamLimits

0x2b26,	// (0x00011869) mup_equalizer_pane_cp1

0x2b43,	// (0x00011886) mup_equalizer_pane_cp2_ParamLimits

0x2b43,	// (0x00011886) mup_equalizer_pane_cp2

0x2b60,	// (0x000118a3) mup_equalizer_pane_cp3_ParamLimits

0x2b60,	// (0x000118a3) mup_equalizer_pane_cp3

0x2b81,	// (0x000118c4) mup_equalizer_pane_cp4_ParamLimits

0x2b81,	// (0x000118c4) mup_equalizer_pane_cp4

0x2ba2,	// (0x000118e5) mup_equalizer_pane_cp5

0x2bb6,	// (0x000118f9) mup_equalizer_pane_cp6

0x2bca,	// (0x0001190d) mup_equalizer_pane_cp7

0xbda0,	// (0x0001aae3) bg_popup_call_poc_act_pane_g9

0xbda8,	// (0x0001aaeb) bg_popup_call_poc_act_pane_g10

0xbdb0,	// (0x0001aaf3) bg_popup_call_poc_act_pane_g11

0x000a,

0x9beb,	// (0x0001892e) mup_scale_pane

0x9d4b,	// (0x00018a8e) mup_scale_pane_g1

0xab59,	// (0x0001989c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e1ad) mup_scale_pane_g

0xab7d,	// (0x000198c0) msg_data_pane

0xab85,	// (0x000198c8) scroll_pane_cp017

0x2bf0,	// (0x00011933) bg_list_pane_cp04_ParamLimits

0x2bf0,	// (0x00011933) bg_list_pane_cp04

0xab95,	// (0x000198d8) msg_data_pane_g1

0x2c08,	// (0x0001194b) msg_data_pane_g2

0x2c12,	// (0x00011955) msg_data_pane_g3

0x2c1a,	// (0x0001195d) msg_data_pane_g4

0x2c22,	// (0x00011965) msg_data_pane_g5

0x2c2a,	// (0x0001196d) msg_data_pane_g6

0x2c32,	// (0x00011975) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e1bc) msg_data_pane_g

0x2c3a,	// (0x0001197d) msg_text_pane_ParamLimits

0x2c3a,	// (0x0001197d) msg_text_pane

0x2c65,	// (0x000119a8) qrid_highlight_pane_cp011_ParamLimits

0x2c65,	// (0x000119a8) qrid_highlight_pane_cp011

0x9990,	// (0x000186d3) msg_body_pane

0x9990,	// (0x000186d3) msg_header_pane

0xaba6,	// (0x000198e9) input_focus_pane_cp07

0xabbb,	// (0x000198fe) msg_header_pane_t1_ParamLimits

0xabbb,	// (0x000198fe) msg_header_pane_t1

0xabcd,	// (0x00019910) msg_header_pane_t2_ParamLimits

0xabcd,	// (0x00019910) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e1d0) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e1d0) msg_header_pane_t

0xabdf,	// (0x00019922) msg_body_pane_g1

0xabe7,	// (0x0001992a) msg_body_pane_t1_ParamLimits

0xabe7,	// (0x0001992a) msg_body_pane_t1

0xac18,	// (0x0001995b) msg_body_pane_t2_ParamLimits

0xac18,	// (0x0001995b) msg_body_pane_t2

0xac2a,	// (0x0001996d) msg_body_pane_t3_ParamLimits

0xac2a,	// (0x0001996d) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e1d5) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e1d5) msg_body_pane_t

0x2cc3,	// (0x00011a06) main_viewer_pane_g1_ParamLimits

0x2cc3,	// (0x00011a06) main_viewer_pane_g1

0x2cd1,	// (0x00011a14) main_viewer_pane_g2_ParamLimits

0x2cd1,	// (0x00011a14) main_viewer_pane_g2

0x2cdf,	// (0x00011a22) main_viewer_pane_g3_ParamLimits

0x2cdf,	// (0x00011a22) main_viewer_pane_g3

0x2cee,	// (0x00011a31) main_viewer_pane_g4_ParamLimits

0x2cee,	// (0x00011a31) main_viewer_pane_g4

0xac54,	// (0x00019997) main_viewer_pane_g5_ParamLimits

0xac54,	// (0x00019997) main_viewer_pane_g5

0xac54,	// (0x00019997) main_viewer_pane_g7_ParamLimits

0xac54,	// (0x00019997) main_viewer_pane_g7

0xac66,	// (0x000199a9) main_viewer_pane_g8_ParamLimits

0xac66,	// (0x000199a9) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e1e5) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e1e5) main_viewer_pane_g

0xac7e,	// (0x000199c1) viewer_content_pane_ParamLimits

0xac7e,	// (0x000199c1) viewer_content_pane

0x2d2a,	// (0x00011a6d) main_postcard_pane_g1_ParamLimits

0x2d2a,	// (0x00011a6d) main_postcard_pane_g1

0x2d40,	// (0x00011a83) main_postcard_pane_g2_ParamLimits

0x2d40,	// (0x00011a83) main_postcard_pane_g2

0x2d56,	// (0x00011a99) main_postcard_pane_g3_ParamLimits

0x2d56,	// (0x00011a99) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e1f6) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e1f6) main_postcard_pane_g

0x2d6d,	// (0x00011ab0) main_postcard_pane_g4

0xbfd6,	// (0x0001ad19) smil_status_volume_pane_g2

0x2db0,	// (0x00011af3) postcard_pane_ParamLimits

0x2db0,	// (0x00011af3) postcard_pane

0xac8c,	// (0x000199cf) postcard_pane_g1_ParamLimits

0xac8c,	// (0x000199cf) postcard_pane_g1

0x2df2,	// (0x00011b35) postcard_pane_g2_ParamLimits

0x2df2,	// (0x00011b35) postcard_pane_g2

0x2dfe,	// (0x00011b41) postcard_pane_g3_ParamLimits

0x2dfe,	// (0x00011b41) postcard_pane_g3

0xac9a,	// (0x000199dd) postcard_pane_g4_ParamLimits

0xac9a,	// (0x000199dd) postcard_pane_g4

0x2e0a,	// (0x00011b4d) postcard_pane_g5_ParamLimits

0x2e0a,	// (0x00011b4d) postcard_pane_g5

0x2e1f,	// (0x00011b62) postcard_pane_g6_ParamLimits

0x2e1f,	// (0x00011b62) postcard_pane_g6

0xac8c,	// (0x000199cf) postcard_pane_g7_ParamLimits

0xac8c,	// (0x000199cf) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e203) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e203) postcard_pane_g

0x2e33,	// (0x00011b76) main_mp2_pane_g1_ParamLimits

0x2e33,	// (0x00011b76) main_mp2_pane_g1

0x2e3f,	// (0x00011b82) main_mp2_pane_g2_ParamLimits

0x2e3f,	// (0x00011b82) main_mp2_pane_g2

0x2e4b,	// (0x00011b8e) main_mp2_pane_g3_ParamLimits

0x2e4b,	// (0x00011b8e) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e212) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e212) main_mp2_pane_g

0x2e57,	// (0x00011b9a) main_mp2_pane_t1_ParamLimits

0x2e57,	// (0x00011b9a) main_mp2_pane_t1

0x2e6c,	// (0x00011baf) main_mp2_pane_t2_ParamLimits

0x2e6c,	// (0x00011baf) main_mp2_pane_t2

0x2e7e,	// (0x00011bc1) main_mp2_pane_t3_ParamLimits

0x2e7e,	// (0x00011bc1) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e219) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e219) main_mp2_pane_t

0xaca8,	// (0x000199eb) pec_content_pane_ParamLimits

0xaca8,	// (0x000199eb) pec_content_pane

0xa0b6,	// (0x00018df9) scroll_pane_cp015

0xacba,	// (0x000199fd) pec_attribute_pane_ParamLimits

0xacba,	// (0x000199fd) pec_attribute_pane

0x2e90,	// (0x00011bd3) pec_content_pane_g1_ParamLimits

0x2e90,	// (0x00011bd3) pec_content_pane_g1

0xacca,	// (0x00019a0d) pec_content_pane_t1_ParamLimits

0xacca,	// (0x00019a0d) pec_content_pane_t1

0xacdc,	// (0x00019a1f) pec_content_pane_t2_ParamLimits

0xacdc,	// (0x00019a1f) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e220) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e220) pec_content_pane_t

0x2e9c,	// (0x00011bdf) list_single_graphic_pane_cp01_ParamLimits

0x2e9c,	// (0x00011bdf) list_single_graphic_pane_cp01

0x9beb,	// (0x0001892e) bg_popup_sub_pane_cp04

0xacee,	// (0x00019a31) popup_mup_playback_window_g1

0xacfa,	// (0x00019a3d) popup_mup_playback_window_t1

0xad0f,	// (0x00019a52) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e225) popup_mup_playback_window_t

0xad46,	// (0x00019a89) main_image_pane_g1_ParamLimits

0xad46,	// (0x00019a89) main_image_pane_g1

0xad89,	// (0x00019acc) scroll_pane_cp018_ParamLimits

0xad89,	// (0x00019acc) scroll_pane_cp018

0xada1,	// (0x00019ae4) scroll_pane_cp016_ParamLimits

0xada1,	// (0x00019ae4) scroll_pane_cp016

0x2f69,	// (0x00011cac) smil2_image_pane_ParamLimits

0x2f69,	// (0x00011cac) smil2_image_pane

0x2f99,	// (0x00011cdc) smil2_root_pane_ParamLimits

0x2f99,	// (0x00011cdc) smil2_root_pane

0x2fd1,	// (0x00011d14) smil2_text_pane_ParamLimits

0x2fd1,	// (0x00011d14) smil2_text_pane

0x9990,	// (0x000186d3) bg_list_pane_cp06

0xaddd,	// (0x00019b20) grid_radio_pane

0x9990,	// (0x000186d3) bg_popup_window_pane_cp06

0xade5,	// (0x00019b28) main_fmradio_pane_t1

0xa6a0,	// (0x000193e3) heading_pane_cp04

0xadf3,	// (0x00019b36) main_fmradio_pane_t2

0xbdb8,	// (0x0001aafb) popup_cale_lunar_info_window_g1

0xae01,	// (0x00019b44) main_fmradio_pane_t3

0xbdc0,	// (0x0001ab03) popup_cale_lunar_info_window_g2

0xae0f,	// (0x00019b52) main_fmradio_pane_t4

0x0001,

0xae1d,	// (0x00019b60) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001e300) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e23a) main_fmradio_pane_t

0xae2b,	// (0x00019b6e) wait_bar_pane_cp03

0xae33,	// (0x00019b76) cell_fmradio_pane_ParamLimits

0xae33,	// (0x00019b76) cell_fmradio_pane

0xac8c,	// (0x000199cf) cell_fmradio_pane_g1_ParamLimits

0xac8c,	// (0x000199cf) cell_fmradio_pane_g1

0x9990,	// (0x000186d3) grid_highlight_pane_cp011

0xae46,	// (0x00019b89) poc_content_pane_ParamLimits

0xae46,	// (0x00019b89) poc_content_pane

0xae58,	// (0x00019b9b) scroll_pane_cp019

0x3051,	// (0x00011d94) popup_call_poc_act_window_ParamLimits

0x3051,	// (0x00011d94) popup_call_poc_act_window

0x3075,	// (0x00011db8) popup_call_poc_inact_window_ParamLimits

0x3075,	// (0x00011db8) popup_call_poc_inact_window

0xf594,	// (0x0001e2d7) bg_popup_call_poc_act_pane_g

0xbd30,	// (0x0001aa73) bg_popup_call_poc_inact_pane_g1

0xbd38,	// (0x0001aa7b) bg_popup_call_poc_inact_pane_g2

0xae60,	// (0x00019ba3) popup_call_poc_act_window_g2

0xbd40,	// (0x0001aa83) bg_popup_call_poc_inact_pane_g3

0xbd48,	// (0x0001aa8b) bg_popup_call_poc_inact_pane_g4

0xbd50,	// (0x0001aa93) bg_popup_call_poc_inact_pane_g5

0xae68,	// (0x00019bab) popup_call_poc_act_window_t1_ParamLimits

0xae68,	// (0x00019bab) popup_call_poc_act_window_t1

0xae90,	// (0x00019bd3) popup_call_poc_act_window_t2_ParamLimits

0xae90,	// (0x00019bd3) popup_call_poc_act_window_t2

0xaeb8,	// (0x00019bfb) popup_call_poc_act_window_t3_ParamLimits

0xaeb8,	// (0x00019bfb) popup_call_poc_act_window_t3

0xaee0,	// (0x00019c23) popup_call_poc_act_window_t4_ParamLimits

0xaee0,	// (0x00019c23) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e245) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e245) popup_call_poc_act_window_t

0xbd58,	// (0x0001aa9b) bg_popup_call_poc_inact_pane_g6

0xbd60,	// (0x0001aaa3) bg_popup_call_poc_inact_pane_g7

0xbd68,	// (0x0001aaab) bg_popup_call_poc_inact_pane_g8

0xaef2,	// (0x00019c35) popup_call_poc_inact_window_g2

0xbd70,	// (0x0001aab3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001e2c4) bg_popup_call_poc_inact_pane_g

0xaefa,	// (0x00019c3d) popup_call_poc_inact_window_t1_ParamLimits

0xaefa,	// (0x00019c3d) popup_call_poc_inact_window_t1

0xaf0f,	// (0x00019c52) popup_call_poc_inact_window_t2_ParamLimits

0xaf0f,	// (0x00019c52) popup_call_poc_inact_window_t2

0xaf24,	// (0x00019c67) popup_call_poc_inact_window_t3_ParamLimits

0xaf24,	// (0x00019c67) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e24e) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e24e) popup_call_poc_inact_window_t

0xbf49,	// (0x0001ac8c) context_pane_ParamLimits

0x38a4,	// (0x000125e7) signal_pane_ParamLimits

0x9f03,	// (0x00018c46) main_call2_pane

0xbf22,	// (0x0001ac65) popup_phob_thumbnail2_window_ParamLimits

0xbf22,	// (0x0001ac65) popup_phob_thumbnail2_window

0xac3c,	// (0x0001997f) aid_hotspot_pointer_arrow_pane

0xac44,	// (0x00019987) aid_hotspot_pointer_hand_pane

0x33be,	// (0x00012101) phob_pre_status_pane_g5

0x0f9a,	// (0x0000fcdd) cams_zoom_pane_ParamLimits

0x0fa9,	// (0x0000fcec) image_vga_pane_ParamLimits

0x0fc3,	// (0x0000fd06) main_camera_pane_g1_ParamLimits

0x0fd5,	// (0x0000fd18) main_camera_pane_g2_ParamLimits

0x0fe5,	// (0x0000fd28) main_camera_pane_g3_ParamLimits

0x0ff5,	// (0x0000fd38) main_camera_pane_g4_ParamLimits

0x1005,	// (0x0000fd48) main_camera_pane_g5_ParamLimits

0x1015,	// (0x0000fd58) main_camera_pane_g6_ParamLimits

0x1027,	// (0x0000fd6a) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001df4d) main_camera_pane_g_ParamLimits

0x1037,	// (0x0000fd7a) main_camera_pane_t1_ParamLimits

0x104d,	// (0x0000fd90) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001df5e) main_camera_pane_t_ParamLimits

0x9beb,	// (0x0001892e) bg_popup_preview_window_pane_cp01_ParamLimits

0x9beb,	// (0x0001892e) bg_popup_preview_window_pane_cp01

0xaf39,	// (0x00019c7c) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf39,	// (0x00019c7c) popup_phob_thumbnail2_window_g1

0x9990,	// (0x000186d3) call2_cli_visual_pane

0x30a9,	// (0x00011dec) popup_call2_audio_conf_window_ParamLimits

0x30a9,	// (0x00011dec) popup_call2_audio_conf_window

0x30c9,	// (0x00011e0c) popup_call2_audio_first_window_ParamLimits

0x30c9,	// (0x00011e0c) popup_call2_audio_first_window

0x315f,	// (0x00011ea2) popup_call2_audio_in_window_ParamLimits

0x315f,	// (0x00011ea2) popup_call2_audio_in_window

0x31a7,	// (0x00011eea) popup_call2_audio_out_window_ParamLimits

0x31a7,	// (0x00011eea) popup_call2_audio_out_window

0x3211,	// (0x00011f54) popup_call2_audio_second_window_ParamLimits

0x3211,	// (0x00011f54) popup_call2_audio_second_window

0x3277,	// (0x00011fba) popup_call2_audio_wait_window_ParamLimits

0x3277,	// (0x00011fba) popup_call2_audio_wait_window

0x9990,	// (0x000186d3) bg_popup_call2_act_pane_cp03

0x9bcd,	// (0x00018910) list_conf_pane_cp

0xaf45,	// (0x00019c88) popup_call2_audio_conf_window_t1

0xa6fd,	// (0x00019440) list_single_graphic_popup_conf2_pane_ParamLimits

0xa6fd,	// (0x00019440) list_single_graphic_popup_conf2_pane

0xa710,	// (0x00019453) list_highlight_pane_cp04

0xaf53,	// (0x00019c96) list_single_graphic_popup_conf2_pane_g1

0xa721,	// (0x00019464) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e255) list_single_graphic_popup_conf2_pane_g

0xaf5d,	// (0x00019ca0) list_single_graphic_popup_conf2_pane_t1

0xaf6b,	// (0x00019cae) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf6b,	// (0x00019cae) bg_popup_call2_act_pane_cp01

0xaff5,	// (0x00019d38) call_type_pane_cp05_ParamLimits

0xaff5,	// (0x00019d38) call_type_pane_cp05

0xb049,	// (0x00019d8c) popup_call2_audio_second_window_g1_ParamLimits

0xb049,	// (0x00019d8c) popup_call2_audio_second_window_g1

0xb09d,	// (0x00019de0) popup_call2_audio_second_window_g2_ParamLimits

0xb09d,	// (0x00019de0) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e25a) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e25a) popup_call2_audio_second_window_g

0xb102,	// (0x00019e45) popup_call2_audio_second_window_t1_ParamLimits

0xb102,	// (0x00019e45) popup_call2_audio_second_window_t1

0xb1bd,	// (0x00019f00) popup_call2_audio_second_window_t2_ParamLimits

0xb1bd,	// (0x00019f00) popup_call2_audio_second_window_t2

0xb210,	// (0x00019f53) popup_call2_audio_second_window_t3_ParamLimits

0xb210,	// (0x00019f53) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e261) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e261) popup_call2_audio_second_window_t

0x9990,	// (0x000186d3) bg_popup_call2_in_pane_cp02

0x999a,	// (0x000186dd) call_type_pane_cp04

0x99a2,	// (0x000186e5) popup_call2_audio_wait_window_g1

0x99aa,	// (0x000186ed) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001de3c) popup_call2_audio_wait_window_g

0x99b2,	// (0x000186f5) popup_call2_audio_wait_window_t3

0xb303,	// (0x0001a046) bg_popup_call2_act_pane_ParamLimits

0xb303,	// (0x0001a046) bg_popup_call2_act_pane

0xb3c3,	// (0x0001a106) call_type_pane_cp03_ParamLimits

0xb3c3,	// (0x0001a106) call_type_pane_cp03

0xb427,	// (0x0001a16a) popup_call2_audio_first_window_g1_ParamLimits

0xb427,	// (0x0001a16a) popup_call2_audio_first_window_g1

0xb497,	// (0x0001a1da) popup_call2_audio_first_window_g2_ParamLimits

0xb497,	// (0x0001a1da) popup_call2_audio_first_window_g2

0xaadd,	// (0x00019820) popup_call2_audio_first_window_g3_ParamLimits

0xaadd,	// (0x00019820) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e26a) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e26a) popup_call2_audio_first_window_g

0xb575,	// (0x0001a2b8) popup_call2_audio_first_window_t1_ParamLimits

0xb575,	// (0x0001a2b8) popup_call2_audio_first_window_t1

0xb678,	// (0x0001a3bb) popup_call2_audio_first_window_t4_ParamLimits

0xb678,	// (0x0001a3bb) popup_call2_audio_first_window_t4

0xb75b,	// (0x0001a49e) popup_call2_audio_first_window_t5_ParamLimits

0xb75b,	// (0x0001a49e) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e275) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e275) popup_call2_audio_first_window_t

0x9be3,	// (0x00018926) bg_popup_call2_act_pane_g1

0xbdc8,	// (0x0001ab0b) popup_cale_lunar_info_window_t1

0xbdd6,	// (0x0001ab19) popup_cale_lunar_info_window_t2

0xbde4,	// (0x0001ab27) popup_cale_lunar_info_window_t3

0x9990,	// (0x000186d3) bg_popup_call2_bubble_pane

0xb85c,	// (0x0001a59f) bg_popup_call2_in_pane_cp01_ParamLimits

0xb85c,	// (0x0001a59f) bg_popup_call2_in_pane_cp01

0x966c,	// (0x000183af) call_type_pane_cp02

0xb8a4,	// (0x0001a5e7) popup_call2_audio_out_window_g1_ParamLimits

0xb8a4,	// (0x0001a5e7) popup_call2_audio_out_window_g1

0xb8d0,	// (0x0001a613) popup_call2_audio_out_window_g2_ParamLimits

0xb8d0,	// (0x0001a613) popup_call2_audio_out_window_g2

0xb8f8,	// (0x0001a63b) popup_call2_audio_out_window_g3_ParamLimits

0xb8f8,	// (0x0001a63b) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e27e) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e27e) popup_call2_audio_out_window_g

0xb933,	// (0x0001a676) popup_call2_audio_out_window_t1_ParamLimits

0xb933,	// (0x0001a676) popup_call2_audio_out_window_t1

0xb992,	// (0x0001a6d5) popup_call2_audio_out_window_t2_ParamLimits

0xb992,	// (0x0001a6d5) popup_call2_audio_out_window_t2

0xb9e6,	// (0x0001a729) popup_call2_audio_out_window_t3_ParamLimits

0xb9e6,	// (0x0001a729) popup_call2_audio_out_window_t3

0xb9fc,	// (0x0001a73f) popup_call2_audio_out_window_t4_ParamLimits

0xb9fc,	// (0x0001a73f) popup_call2_audio_out_window_t4

0xba12,	// (0x0001a755) popup_call2_audio_out_window_t5_ParamLimits

0xba12,	// (0x0001a755) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e287) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e287) popup_call2_audio_out_window_t

0xba76,	// (0x0001a7b9) bg_popup_call2_in_pane_ParamLimits

0xba76,	// (0x0001a7b9) bg_popup_call2_in_pane

0xbad2,	// (0x0001a815) popup_call2_audio_in_window_g1_ParamLimits

0xbad2,	// (0x0001a815) popup_call2_audio_in_window_g1

0xbb0a,	// (0x0001a84d) popup_call2_audio_in_window_g2_ParamLimits

0xbb0a,	// (0x0001a84d) popup_call2_audio_in_window_g2

0xbb42,	// (0x0001a885) popup_call2_audio_in_window_g3_ParamLimits

0xbb42,	// (0x0001a885) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e294) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e294) popup_call2_audio_in_window_g

0xbb9a,	// (0x0001a8dd) popup_call2_audio_in_window_t1_ParamLimits

0xbb9a,	// (0x0001a8dd) popup_call2_audio_in_window_t1

0xbc1a,	// (0x0001a95d) popup_call2_audio_in_window_t2_ParamLimits

0xbc1a,	// (0x0001a95d) popup_call2_audio_in_window_t2

0xbc9a,	// (0x0001a9dd) popup_call2_audio_in_window_t3_ParamLimits

0xbc9a,	// (0x0001a9dd) popup_call2_audio_in_window_t3

0xbcb4,	// (0x0001a9f7) popup_call2_audio_in_window_t4_ParamLimits

0xbcb4,	// (0x0001a9f7) popup_call2_audio_in_window_t4

0xbcc6,	// (0x0001aa09) popup_call2_audio_in_window_t5_ParamLimits

0xbcc6,	// (0x0001aa09) popup_call2_audio_in_window_t5

0xbcdb,	// (0x0001aa1e) popup_call2_audio_in_window_t6_ParamLimits

0xbcdb,	// (0x0001aa1e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e29d) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e29d) popup_call2_audio_in_window_t

0x9be3,	// (0x00018926) bg_popup_call2_in_pane_g1

0xbdf2,	// (0x0001ab35) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001e305) popup_cale_lunar_info_window_t

0x9beb,	// (0x0001892e) bg_popup_call2_rect_pane_ParamLimits

0x9beb,	// (0x0001892e) bg_popup_call2_rect_pane

0x9990,	// (0x000186d3) call2_cli_visual_graphic_pane

0x9990,	// (0x000186d3) call2_cli_visual_text_pane

0xbfe9,	// (0x0001ad2c) smil_status_volume_pane_g3

0x0002,

0x9d4b,	// (0x00018a8e) call2_cli_visual_graphic_pane_g1

0x9d4b,	// (0x00018a8e) call2_cli_visual_graphic_pane_g2

0x9d4b,	// (0x00018a8e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e2aa) call2_cli_visual_graphic_pane_g

0xbcf0,	// (0x0001aa33) bg_popup_call2_rect_pane_g1

0x9dd7,	// (0x00018b1a) bg_popup_call2_rect_pane_g2

0xbcf8,	// (0x0001aa3b) bg_popup_call2_rect_pane_g3

0xbd00,	// (0x0001aa43) bg_popup_call2_rect_pane_g4

0xbd08,	// (0x0001aa4b) bg_popup_call2_rect_pane_g5

0xbd10,	// (0x0001aa53) bg_popup_call2_rect_pane_g6

0xbd18,	// (0x0001aa5b) bg_popup_call2_rect_pane_g7

0xbd20,	// (0x0001aa63) bg_popup_call2_rect_pane_g8

0xbd28,	// (0x0001aa6b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e2b1) bg_popup_call2_rect_pane_g

0xbd30,	// (0x0001aa73) bg_popup_call2_bubble_pane_g1

0xbd38,	// (0x0001aa7b) bg_popup_call2_bubble_pane_g2

0xbd40,	// (0x0001aa83) bg_popup_call2_bubble_pane_g3

0xbd48,	// (0x0001aa8b) bg_popup_call2_bubble_pane_g4

0xbd50,	// (0x0001aa93) bg_popup_call2_bubble_pane_g5

0xbd58,	// (0x0001aa9b) bg_popup_call2_bubble_pane_g6

0xbd60,	// (0x0001aaa3) bg_popup_call2_bubble_pane_g7

0xbd68,	// (0x0001aaab) bg_popup_call2_bubble_pane_g8

0xbd70,	// (0x0001aab3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e2c4) bg_popup_call2_bubble_pane_g

0x09df,	// (0x0000f722) aid_cale_week_size_cell_pane

0x1063,	// (0x0000fda6) aid_cams_cif_uncrop_pane_ParamLimits

0x1063,	// (0x0000fda6) aid_cams_cif_uncrop_pane

0x1213,	// (0x0000ff56) aid_cams_size_cell_ParamLimits

0x1213,	// (0x0000ff56) aid_cams_size_cell

0x1227,	// (0x0000ff6a) grid_cams_pane_ParamLimits

0x1241,	// (0x0000ff84) linegrid_cams_pane_ParamLimits

0x143e,	// (0x00010181) call_video_pane_t1

0x145c,	// (0x0001019f) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001dfb1) call_video_pane_t

0x1888,	// (0x000105cb) aid_cale_month_size_cell_pane_ParamLimits

0x1888,	// (0x000105cb) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001e34e) smil_status_volume_pane_g

0xbff6,	// (0x0001ad39) volume_smil_pane_ParamLimits

0x9511,	// (0x00018254) aid_popup2_width_pane

0x0939,	// (0x0000f67c) cell_qdial_pane_g4_ParamLimits

0x0939,	// (0x0000f67c) cell_qdial_pane_g4

0x271d,	// (0x00011460) aid_blid_cardinal_pane_ParamLimits

0x2729,	// (0x0001146c) aid_blid_destination_pane_ParamLimits

0x2729,	// (0x0001146c) aid_blid_destination_pane

0x9beb,	// (0x0001892e) bg_popup_call_poc_act_pane_ParamLimits

0x9beb,	// (0x0001892e) bg_popup_call_poc_act_pane

0x9beb,	// (0x0001892e) bg_popup_call_poc_inact_pane_ParamLimits

0x9beb,	// (0x0001892e) bg_popup_call_poc_inact_pane

0xbd78,	// (0x0001aabb) bg_popup_call_poc_act_pane_g1

0xbd80,	// (0x0001aac3) bg_popup_call_poc_act_pane_g2

0xbd88,	// (0x0001aacb) bg_popup_call_poc_act_pane_g3

0xbd48,	// (0x0001aa8b) bg_popup_call_poc_act_pane_g4

0xbd50,	// (0x0001aa93) bg_popup_call_poc_act_pane_g5

0xbd90,	// (0x0001aad3) bg_popup_call_poc_act_pane_g6

0xbd60,	// (0x0001aaa3) bg_popup_call_poc_act_pane_g7

0xbd98,	// (0x0001aadb) bg_popup_call_poc_act_pane_g8

0x9990,	// (0x000186d3) main_usb_pane

0xbefd,	// (0x0001ac40) popup_cale_lunar_info_window

0x1734,	// (0x00010477) im_reading_pane_t1_ParamLimits

0xa00e,	// (0x00018d51) list_im_pane_ParamLimits

0xa01f,	// (0x00018d62) scroll_pane_cp07_ParamLimits

0x9990,	// (0x000186d3) grid_highlight_pane_cp012

0x9beb,	// (0x0001892e) mup_scale_pane_ParamLimits

0xac8c,	// (0x000199cf) main_usb_pane_g1_ParamLimits

0xac8c,	// (0x000199cf) main_usb_pane_g1

0x32d3,	// (0x00012016) main_usb_pane_g2_ParamLimits

0x32d3,	// (0x00012016) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001e2ee) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001e2ee) main_usb_pane_g

0x32e9,	// (0x0001202c) main_usb_pane_t1_ParamLimits

0x32e9,	// (0x0001202c) main_usb_pane_t1

0x32fb,	// (0x0001203e) main_usb_pane_t2_ParamLimits

0x32fb,	// (0x0001203e) main_usb_pane_t2

0x330d,	// (0x00012050) main_usb_pane_t3_ParamLimits

0x330d,	// (0x00012050) main_usb_pane_t3

0x331f,	// (0x00012062) main_usb_pane_t4_ParamLimits

0x331f,	// (0x00012062) main_usb_pane_t4

0x3331,	// (0x00012074) main_usb_pane_t5_ParamLimits

0x3331,	// (0x00012074) main_usb_pane_t5

0x3343,	// (0x00012086) main_usb_pane_t6_ParamLimits

0x3343,	// (0x00012086) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001e2f3) main_usb_pane_t_ParamLimits

0x26cc,	// (0x0001140f) aid_text_placing

0x26d5,	// (0x00011418) main_location2_pane_t1_ParamLimits

0x26e7,	// (0x0001142a) main_location2_pane_t2_ParamLimits

0x26f9,	// (0x0001143c) main_location2_pane_t3_ParamLimits

0x270b,	// (0x0001144e) main_location2_pane_t4_ParamLimits

0x270b,	// (0x0001144e) main_location2_pane_t4

0xf3cf,	// (0x0001e112) main_location2_pane_t_ParamLimits

0x9c27,	// (0x0001896a) find_pinb_pane_g2_ParamLimits

0x9c27,	// (0x0001896a) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001de62) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001de62) find_pinb_pane_g

0x9c33,	// (0x00018976) find_pinb_pane_t1_ParamLimits

0x9c45,	// (0x00018988) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001de67) find_pinb_pane_t_ParamLimits

0x9990,	// (0x000186d3) main_call3_pane

0x1d73,	// (0x00010ab6) cale_month_day_heading_pane_t1_ParamLimits

0x1df9,	// (0x00010b3c) cale_month_day_heading_pane_t2_ParamLimits

0x1e72,	// (0x00010bb5) cale_month_day_heading_pane_t3_ParamLimits

0x1eeb,	// (0x00010c2e) cale_month_day_heading_pane_t4_ParamLimits

0x1f6c,	// (0x00010caf) cale_month_day_heading_pane_t5_ParamLimits

0x1ff5,	// (0x00010d38) cale_month_day_heading_pane_t6_ParamLimits

0x207e,	// (0x00010dc1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001dfe9) cale_month_day_heading_pane_t_ParamLimits

0xa275,	// (0x00018fb8) smil_status_volume_pane

0x2dce,	// (0x00011b11) postcard_address_pane_ParamLimits

0x2dce,	// (0x00011b11) postcard_address_pane

0x2de0,	// (0x00011b23) postcard_message_pane_ParamLimits

0x2de0,	// (0x00011b23) postcard_message_pane

0x32b1,	// (0x00011ff4) call2_cli_visual_pane_t1_ParamLimits

0x32b1,	// (0x00011ff4) call2_cli_visual_pane_t1

0x3ad1,	// (0x00012814) postcard_message_pane_t1_ParamLimits

0x3ad1,	// (0x00012814) postcard_message_pane_t1

0x3aba,	// (0x000127fd) postcard_address_pane_t1_ParamLimits

0x3aba,	// (0x000127fd) postcard_address_pane_t1

0x3aa6,	// (0x000127e9) popup_call3_audio_in_window_ParamLimits

0x3aa6,	// (0x000127e9) popup_call3_audio_in_window

0x3931,	// (0x00012674) bg_popup_call3_in_pane_ParamLimits

0x3931,	// (0x00012674) bg_popup_call3_in_pane

0x39a7,	// (0x000126ea) popup_call3_audio_in_window_g1_ParamLimits

0x39a7,	// (0x000126ea) popup_call3_audio_in_window_g1

0x39c7,	// (0x0001270a) popup_call3_audio_in_window_g2_ParamLimits

0x39c7,	// (0x0001270a) popup_call3_audio_in_window_g2

0x39e7,	// (0x0001272a) popup_call3_audio_in_window_g3_ParamLimits

0x39e7,	// (0x0001272a) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001e355) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001e355) popup_call3_audio_in_window_g

0x3a18,	// (0x0001275b) popup_call3_audio_in_window_t1_ParamLimits

0x3a18,	// (0x0001275b) popup_call3_audio_in_window_t1

0x3a56,	// (0x00012799) popup_call3_audio_in_window_t2_ParamLimits

0x3a56,	// (0x00012799) popup_call3_audio_in_window_t2

0x3a94,	// (0x000127d7) popup_call3_audio_in_window_t3_ParamLimits

0x3a94,	// (0x000127d7) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001e35e) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001e35e) popup_call3_audio_in_window_t

0x9f03,	// (0x00018c46) bg_popup_call3_rect_pane

0xbcf0,	// (0x0001aa33) bg_popup_call3_rect_pane_g1

0x9dd7,	// (0x00018b1a) bg_popup_call3_rect_pane_g2

0xbcf8,	// (0x0001aa3b) bg_popup_call3_rect_pane_g3

0xbd00,	// (0x0001aa43) bg_popup_call3_rect_pane_g4

0xbd08,	// (0x0001aa4b) bg_popup_call3_rect_pane_g5

0xbd10,	// (0x0001aa53) bg_popup_call3_rect_pane_g6

0xbd18,	// (0x0001aa5b) bg_popup_call3_rect_pane_g7

0x2a0d,	// (0x00011750) mup_visualizer_osc_pane

0xaaeb,	// (0x0001982e) mup_visualizer_spec_pane

0x3961,	// (0x000126a4) call3_video_qcif_pane_ParamLimits

0x3961,	// (0x000126a4) call3_video_qcif_pane

0x3974,	// (0x000126b7) call3_video_qcif_uncrop_pane_ParamLimits

0x3974,	// (0x000126b7) call3_video_qcif_uncrop_pane

0x3982,	// (0x000126c5) call3_video_subqcif_pane_ParamLimits

0x3982,	// (0x000126c5) call3_video_subqcif_pane

0x3996,	// (0x000126d9) call3_video_subqcif_uncrop_pane_ParamLimits

0x3996,	// (0x000126d9) call3_video_subqcif_uncrop_pane

0x3a07,	// (0x0001274a) popup_call3_audio_in_window_g4_ParamLimits

0x3a07,	// (0x0001274a) popup_call3_audio_in_window_g4

0x3920,	// (0x00012663) mup_spec_half_pane

0x3929,	// (0x0001266c) mup_spec_half_pane_cp

0xbfa9,	// (0x0001acec) mup_osc_middle_pane

0xbfb2,	// (0x0001acf5) mup_visualizer_osc_pane_g1

0x3900,	// (0x00012643) mup_spec_bar_pane_ParamLimits

0x3900,	// (0x00012643) mup_spec_bar_pane

0xbf96,	// (0x0001acd9) mup_spec_bar_pane_g1

0xbfa0,	// (0x0001ace3) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e349) mup_spec_bar_pane_g

0x09df,	// (0x0000f722) aid_cale_week_size_cell_pane_ParamLimits

0x09f9,	// (0x0000f73c) bg_cale_heading_pane_ParamLimits

0x9e5c,	// (0x00018b9f) bg_cale_pane_cp01_ParamLimits

0x0a11,	// (0x0000f754) cale_week_corner_pane_ParamLimits

0x0a30,	// (0x0000f773) cale_week_day_heading_pane_ParamLimits

0x0a4d,	// (0x0000f790) cale_week_scroll_pane_g1_ParamLimits

0x0a60,	// (0x0000f7a3) cale_week_scroll_pane_g2_ParamLimits

0x0a78,	// (0x0000f7bb) cale_week_scroll_pane_g3_ParamLimits

0x0a90,	// (0x0000f7d3) cale_week_scroll_pane_g4_ParamLimits

0x0aa8,	// (0x0000f7eb) cale_week_scroll_pane_g5_ParamLimits

0x0ac8,	// (0x0000f80b) cale_week_scroll_pane_g6_ParamLimits

0x0ae8,	// (0x0000f82b) cale_week_scroll_pane_g7_ParamLimits

0x0b08,	// (0x0000f84b) cale_week_scroll_pane_g8_ParamLimits

0x0b2c,	// (0x0000f86f) cale_week_scroll_pane_g9_ParamLimits

0x0b44,	// (0x0000f887) cale_week_scroll_pane_g10_ParamLimits

0x0b5c,	// (0x0000f89f) cale_week_scroll_pane_g11_ParamLimits

0x0b74,	// (0x0000f8b7) cale_week_scroll_pane_g12_ParamLimits

0x0b8c,	// (0x0000f8cf) cale_week_scroll_pane_g13_ParamLimits

0x0b8c,	// (0x0000f8cf) cale_week_scroll_pane_g14_ParamLimits

0x0b8c,	// (0x0000f8cf) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001def3) cale_week_scroll_pane_g_ParamLimits

0x0bc8,	// (0x0000f90b) cale_week_time_pane_ParamLimits

0x0bec,	// (0x0000f92f) grid_cale_week_pane_ParamLimits

0x9e79,	// (0x00018bbc) listscroll_cale_week_pane_t1

0x9e8b,	// (0x00018bce) scroll_pane_cp08_ParamLimits

0x18e8,	// (0x0001062b) cale_month_corner_pane_ParamLimits

0xa23f,	// (0x00018f82) cale_month_pane_t1

0x1d06,	// (0x00010a49) cale_month_week_pane_ParamLimits

0x2528,	// (0x0001126b) popup_call_status_window_g1_ParamLimits

0x253c,	// (0x0001127f) popup_call_status_window_g2_ParamLimits

0x2550,	// (0x00011293) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e099) popup_call_status_window_g_ParamLimits

0xa61d,	// (0x00019360) aid_call2_pane

0x2c7b,	// (0x000119be) msg_header_pane_g1

0x2dce,	// (0x00011b11) postcard_address2_pane_ParamLimits

0x2dce,	// (0x00011b11) postcard_address2_pane

0x2de0,	// (0x00011b23) postcard_message2_pane_ParamLimits

0x2de0,	// (0x00011b23) postcard_message2_pane

0x38b2,	// (0x000125f5) message2_row_pane_ParamLimits

0x38b2,	// (0x000125f5) message2_row_pane

0x38ce,	// (0x00012611) address2_row_pane_ParamLimits

0x38ce,	// (0x00012611) address2_row_pane

0xbf64,	// (0x0001aca7) postcard_message2_row_pane_g1

0xbf6c,	// (0x0001acaf) postcard_message2_row_pane_t1

0xbf64,	// (0x0001aca7) address2_row_pane_g1

0xbf6c,	// (0x0001acaf) address2_row_pane_t1

0x0f1c,	// (0x0000fc5f) aid_size_cell_vorec

0x9990,	// (0x000186d3) main_rss_pane

0x38e1,	// (0x00012624) rss_list_single_pane_ParamLimits

0x38e1,	// (0x00012624) rss_list_single_pane

0xbf7a,	// (0x0001acbd) rss_list_single_pane_t1

0xbf88,	// (0x0001accb) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001e344) rss_list_single_pane_t

0x9990,	// (0x000186d3) main_camera2_pane

0x9990,	// (0x000186d3) main_video2_pane

0x3b4a,	// (0x0001288d) cams_zoom_pane_cp2_ParamLimits

0x3b4a,	// (0x0001288d) cams_zoom_pane_cp2

0x3b6a,	// (0x000128ad) image2_vga_pane_ParamLimits

0x3b6a,	// (0x000128ad) image2_vga_pane

0x3bbb,	// (0x000128fe) main_camera2_pane_g1_ParamLimits

0x3bbb,	// (0x000128fe) main_camera2_pane_g1

0x3bdb,	// (0x0001291e) main_camera2_pane_g2_ParamLimits

0x3bdb,	// (0x0001291e) main_camera2_pane_g2

0x3bfb,	// (0x0001293e) main_camera2_pane_g3_ParamLimits

0x3bfb,	// (0x0001293e) main_camera2_pane_g3

0x3c1b,	// (0x0001295e) main_camera2_pane_g4_ParamLimits

0x3c1b,	// (0x0001295e) main_camera2_pane_g4

0x3c3b,	// (0x0001297e) main_camera2_pane_g5_ParamLimits

0x3c3b,	// (0x0001297e) main_camera2_pane_g5

0x3c5b,	// (0x0001299e) main_camera2_pane_g6_ParamLimits

0x3c5b,	// (0x0001299e) main_camera2_pane_g6

0x3c7b,	// (0x000129be) main_camera2_pane_g7_ParamLimits

0x3c7b,	// (0x000129be) main_camera2_pane_g7

0x3c9b,	// (0x000129de) main_camera2_pane_g8_ParamLimits

0x3c9b,	// (0x000129de) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001e365) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001e365) main_camera2_pane_g

0x3cdb,	// (0x00012a1e) main_camera2_pane_t1_ParamLimits

0x3cdb,	// (0x00012a1e) main_camera2_pane_t1

0x3d10,	// (0x00012a53) main_camera2_pane_t2_ParamLimits

0x3d10,	// (0x00012a53) main_camera2_pane_t2

0x3d36,	// (0x00012a79) main_camera2_pane_t3_ParamLimits

0x3d36,	// (0x00012a79) main_camera2_pane_t3

0x3d94,	// (0x00012ad7) main_camera2_pane_t4_ParamLimits

0x3d94,	// (0x00012ad7) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001e378) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001e378) main_camera2_pane_t

0x3e26,	// (0x00012b69) cams_zoom_pane_cp4_ParamLimits

0x3e26,	// (0x00012b69) cams_zoom_pane_cp4

0x3e3c,	// (0x00012b7f) image2_cif_pane_ParamLimits

0x3e3c,	// (0x00012b7f) image2_cif_pane

0x3e67,	// (0x00012baa) image2_subqcif_pane_ParamLimits

0x3e67,	// (0x00012baa) image2_subqcif_pane

0x3e81,	// (0x00012bc4) main_video2_pane_g1_ParamLimits

0x3e81,	// (0x00012bc4) main_video2_pane_g1

0x3e9b,	// (0x00012bde) main_video2_pane_g2_ParamLimits

0x3e9b,	// (0x00012bde) main_video2_pane_g2

0x3eb1,	// (0x00012bf4) main_video2_pane_g3_ParamLimits

0x3eb1,	// (0x00012bf4) main_video2_pane_g3

0x3ec7,	// (0x00012c0a) main_video2_pane_g4_ParamLimits

0x3ec7,	// (0x00012c0a) main_video2_pane_g4

0x3edd,	// (0x00012c20) main_video2_pane_g5_ParamLimits

0x3edd,	// (0x00012c20) main_video2_pane_g5

0x3ef3,	// (0x00012c36) main_video2_pane_g6_ParamLimits

0x3ef3,	// (0x00012c36) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001e387) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001e387) main_video2_pane_g

0x3f0d,	// (0x00012c50) main_video2_pane_t1_ParamLimits

0x3f0d,	// (0x00012c50) main_video2_pane_t1

0x3f31,	// (0x00012c74) main_video2_pane_t2_ParamLimits

0x3f31,	// (0x00012c74) main_video2_pane_t2

0x3f7f,	// (0x00012cc2) main_video2_pane_t3_ParamLimits

0x3f7f,	// (0x00012cc2) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001e394) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001e394) main_video2_pane_t

0x33fe,	// (0x00012141) call_muted_g2

0x0001,

0xf5f3,	// (0x0001e336) call_muted_g

0x9990,	// (0x000186d3) main_mup2_pane

0x3fc3,	// (0x00012d06) main_mup2_pane_g1_ParamLimits

0x3fc3,	// (0x00012d06) main_mup2_pane_g1

0x3fcf,	// (0x00012d12) main_mup2_pane_g2_ParamLimits

0x3fcf,	// (0x00012d12) main_mup2_pane_g2

0xc11a,	// (0x0001ae5d) main_mup_pane_g13_cp1

0xc122,	// (0x0001ae65) mup_volume_pane_cp1

0x3feb,	// (0x00012d2e) main_mup2_pane_g4_ParamLimits

0x3feb,	// (0x00012d2e) main_mup2_pane_g4

0x3ffd,	// (0x00012d40) main_mup2_pane_g5_ParamLimits

0x3ffd,	// (0x00012d40) main_mup2_pane_g5

0x400f,	// (0x00012d52) main_mup2_pane_g6_ParamLimits

0x400f,	// (0x00012d52) main_mup2_pane_g6

0x4021,	// (0x00012d64) main_mup2_pane_g7_ParamLimits

0x4021,	// (0x00012d64) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001e39b) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001e39b) main_mup2_pane_g

0x4039,	// (0x00012d7c) main_mup2_pane_t1_ParamLimits

0x4039,	// (0x00012d7c) main_mup2_pane_t1

0x404f,	// (0x00012d92) main_mup2_pane_t2_ParamLimits

0x404f,	// (0x00012d92) main_mup2_pane_t2

0x4065,	// (0x00012da8) main_mup2_pane_t3_ParamLimits

0x4065,	// (0x00012da8) main_mup2_pane_t3

0x407b,	// (0x00012dbe) main_mup2_pane_t4_ParamLimits

0x407b,	// (0x00012dbe) main_mup2_pane_t4

0x4093,	// (0x00012dd6) main_mup2_pane_t5_ParamLimits

0x4093,	// (0x00012dd6) main_mup2_pane_t5

0x40ab,	// (0x00012dee) main_mup2_pane_t6_ParamLimits

0x40ab,	// (0x00012dee) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001e3aa) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001e3aa) main_mup2_pane_t

0x40db,	// (0x00012e1e) mup2_visualizer_pane_ParamLimits

0x40db,	// (0x00012e1e) mup2_visualizer_pane

0x4109,	// (0x00012e4c) mup_progress_pane_cp_ParamLimits

0x4109,	// (0x00012e4c) mup_progress_pane_cp

0xc0fc,	// (0x0001ae3f) mup_volume_pane_cp_ParamLimits

0xc0fc,	// (0x0001ae3f) mup_volume_pane_cp

0x411d,	// (0x00012e60) mup2_visualizer_pane_g1_ParamLimits

0x411d,	// (0x00012e60) mup2_visualizer_pane_g1

0xc03b,	// (0x0001ad7e) mup2_visualizer_pane_g2_ParamLimits

0xc03b,	// (0x0001ad7e) mup2_visualizer_pane_g2

0x4134,	// (0x00012e77) mup2_visualizer_pane_g3_ParamLimits

0x4134,	// (0x00012e77) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001e3b7) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001e3b7) mup2_visualizer_pane_g

0xadd5,	// (0x00019b18) aid_size_cell_fmradio

0x35b0,	// (0x000122f3) aid_height_parent_landcape

0xa09d,	// (0x00018de0) wml_content_pane_cp

0xa0a5,	// (0x00018de8) wml_tabs_pane

0xa0ae,	// (0x00018df1) popup_wml_miniature_window

0xa0b6,	// (0x00018df9) scroll_pane_cp021

0xa0ca,	// (0x00018e0d) wml_content_pane_comp8

0x9990,	// (0x000186d3) bg_popup_sub_pane_cp05

0xc059,	// (0x0001ad9c) popup_wml_miniature_window_g1

0xc061,	// (0x0001ada4) wml_miniature_view_pane

0x4140,	// (0x00012e83) aid_size_wml_view

0x4148,	// (0x00012e8b) wml_miniature_view_pane_g1

0x4151,	// (0x00012e94) wml_miniature_view_pane_g2

0x415a,	// (0x00012e9d) wml_miniature_view_pane_g3

0x4162,	// (0x00012ea5) wml_miniature_view_pane_g4

0x416a,	// (0x00012ead) wml_miniature_view_pane_g5

0x4172,	// (0x00012eb5) wml_miniature_view_pane_g6

0x417a,	// (0x00012ebd) wml_miniature_view_pane_g7

0x4182,	// (0x00012ec5) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001e3be) wml_miniature_view_pane_g

0xc069,	// (0x0001adac) background_graphic_ParamLimits

0xc069,	// (0x0001adac) background_graphic

0xc075,	// (0x0001adb8) wml_tabs_2_pane

0xc07e,	// (0x0001adc1) wml_tabs_3_pane_ParamLimits

0xc07e,	// (0x0001adc1) wml_tabs_3_pane

0xc090,	// (0x0001add3) wml_tabs_4_pane_ParamLimits

0xc090,	// (0x0001add3) wml_tabs_4_pane

0xc0a6,	// (0x0001ade9) wml_tabs_5_pane_ParamLimits

0xc0a6,	// (0x0001ade9) wml_tabs_5_pane

0xc0c0,	// (0x0001ae03) wml_tabs_pane_g2_ParamLimits

0xc0c0,	// (0x0001ae03) wml_tabs_pane_g2

0xc0d4,	// (0x0001ae17) wml_tabs_pane_g3_ParamLimits

0xc0d4,	// (0x0001ae17) wml_tabs_pane_g3

0x418a,	// (0x00012ecd) wml_tabs_2_active_pane_ParamLimits

0x418a,	// (0x00012ecd) wml_tabs_2_active_pane

0x419e,	// (0x00012ee1) wml_tabs_2_passive_pane_ParamLimits

0x419e,	// (0x00012ee1) wml_tabs_2_passive_pane

0x41b2,	// (0x00012ef5) wml_tabs_3_active_pane_cp_ParamLimits

0x41b2,	// (0x00012ef5) wml_tabs_3_active_pane_cp

0x41c7,	// (0x00012f0a) wml_tabs_3_passive_pane_ParamLimits

0x41c7,	// (0x00012f0a) wml_tabs_3_passive_pane

0x41da,	// (0x00012f1d) wml_tabs_3_passive_pane_cp_ParamLimits

0x41da,	// (0x00012f1d) wml_tabs_3_passive_pane_cp

0x41f1,	// (0x00012f34) tabs_4_active_pane

0x41f9,	// (0x00012f3c) tabs_4_passive_pane

0x4203,	// (0x00012f46) tabs_4_passive_pane_cp

0x420b,	// (0x00012f4e) tabs_4_passive_pane_cp2

0x32cb,	// (0x0001200e) aid_height_text

0x29e3,	// (0x00011726) mup_volume_cont_pane_ParamLimits

0x29e3,	// (0x00011726) mup_volume_cont_pane

0x05bd,	// (0x0000f300) aid_size_cell_pinb

0x05c7,	// (0x0000f30a) aid_size_list_pinb

0x40f5,	// (0x00012e38) mup2_volume_cont_pane_ParamLimits

0x40f5,	// (0x00012e38) mup2_volume_cont_pane

0xc0e8,	// (0x0001ae2b) mup2_volume_cont_pane_g1_ParamLimits

0xc0e8,	// (0x0001ae2b) mup2_volume_cont_pane_g1

0x0280,	// (0x0000efc3) aid_size_cell_touch_ParamLimits

0x0280,	// (0x0000efc3) aid_size_cell_touch

0x04ad,	// (0x0000f1f0) touch_pane_ParamLimits

0x04ad,	// (0x0000f1f0) touch_pane

0x94ff,	// (0x00018242) main_rss2_pane

0xc12a,	// (0x0001ae6d) listscroll_rss2_pane

0xc133,	// (0x0001ae76) rss2_navigation_pane

0xc13b,	// (0x0001ae7e) list_rss2_pane

0xa7d3,	// (0x00019516) scroll_pane_cp22

0xc143,	// (0x0001ae86) rss2_navigation_pane_g1

0xc14c,	// (0x0001ae8f) rss2_navigation_pane_g2

0xc154,	// (0x0001ae97) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001e3cf) rss2_navigation_pane_g

0xc15c,	// (0x0001ae9f) rss2_navigation_pane_t1

0x4215,	// (0x00012f58) rss2_list_single_pane_ParamLimits

0x4215,	// (0x00012f58) rss2_list_single_pane

0xc16a,	// (0x0001aead) rss2_list_single_pane_t2

0xc178,	// (0x0001aebb) rss2_list_single_pane_t3_ParamLimits

0xc178,	// (0x0001aebb) rss2_list_single_pane_t3

0xc195,	// (0x0001aed8) rss2_list_single_pane_t4

0x2332,	// (0x00011075) smil_status_pane_g1

0x956f,	// (0x000182b2) main_image2_pane_ParamLimits

0x956f,	// (0x000182b2) main_image2_pane

0x3cbb,	// (0x000129fe) main_camera2_pane_g9_ParamLimits

0x3cbb,	// (0x000129fe) main_camera2_pane_g9

0x3de9,	// (0x00012b2c) main_camera2_pane_t5_ParamLimits

0x3de9,	// (0x00012b2c) main_camera2_pane_t5

0xc00b,	// (0x0001ad4e) main_camera2_pane_t6_ParamLimits

0xc00b,	// (0x0001ad4e) main_camera2_pane_t6

0x422a,	// (0x00012f6d) main_image2_pane_g1_ParamLimits

0x422a,	// (0x00012f6d) main_image2_pane_g1

0x3007,	// (0x00011d4a) smil2_video_pane_ParamLimits

0x3007,	// (0x00011d4a) smil2_video_pane

0x951d,	// (0x00018260) aid_zoom_text_primary_cp

0x9565,	// (0x000182a8) popup_preview_fixed_window

0xa006,	// (0x00018d49) im_reading_pane_g1

0x3b32,	// (0x00012875) cams2_bc_adjust_pane_cp_ParamLimits

0x3b32,	// (0x00012875) cams2_bc_adjust_pane_cp

0x3e18,	// (0x00012b5b) cams2_bc_adjust_pane_ParamLimits

0x3e18,	// (0x00012b5b) cams2_bc_adjust_pane

0xc1a3,	// (0x0001aee6) cams2_bc_adjust_pane_g1

0xc1ab,	// (0x0001aeee) cams2_slider_pane

0xc1b4,	// (0x0001aef7) cams2_slider_pane_g1

0xc1bd,	// (0x0001af00) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001e3d6) cams2_slider_pane_g

0x06b5,	// (0x0000f3f8) calc_display_pane_ParamLimits

0x06dd,	// (0x0000f420) calc_paper_pane_ParamLimits

0x0700,	// (0x0000f443) grid_calc_pane_ParamLimits

0xa683,	// (0x000193c6) popup_clock_digital_window_t1_ParamLimits

0xad72,	// (0x00019ab5) main_image_pane_t1

0x0697,	// (0x0000f3da) aid_size_cell_calc_ParamLimits

0x0697,	// (0x0000f3da) aid_size_cell_calc

0x35f6,	// (0x00012339) popup_blid_sat_info2_window_ParamLimits

0x35f6,	// (0x00012339) popup_blid_sat_info2_window

0xc1df,	// (0x0001af22) aid_size_cell_blid

0xc1e7,	// (0x0001af2a) bg_popup_window_pane_cp07

0xc20a,	// (0x0001af4d) grid_popup_blid_pane

0xc214,	// (0x0001af57) heading_pane_cp05_ParamLimits

0xc214,	// (0x0001af57) heading_pane_cp05

0xc2de,	// (0x0001b021) cell_popup_blid_pane_ParamLimits

0xc2de,	// (0x0001b021) cell_popup_blid_pane

0xc302,	// (0x0001b045) cell_popup_blid_pane_g1

0xc30a,	// (0x0001b04d) cell_popup_blid_pane_t1

0x40c5,	// (0x00012e08) mup2_indicator_pane_ParamLimits

0x40c5,	// (0x00012e08) mup2_indicator_pane

0x9f03,	// (0x00018c46) mup2_visualizer_osc_pane

0xc047,	// (0x0001ad8a) mup2_visualizer_spec_pane_ParamLimits

0xc047,	// (0x0001ad8a) mup2_visualizer_spec_pane

0x4240,	// (0x00012f83) mup2_spec_half_pane

0x4249,	// (0x00012f8c) mup2_spec_half_pane_cp

0x4251,	// (0x00012f94) mup2_spec_bar_pane_ParamLimits

0x4251,	// (0x00012f94) mup2_spec_bar_pane

0xbf96,	// (0x0001acd9) mup2_spec_bar_pane_g1

0xbfa0,	// (0x0001ace3) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e349) mup2_spec_bar_pane_g

0x4271,	// (0x00012fb4) mup2_osc_middle_pane

0xbfb2,	// (0x0001acf5) mup2_visualizer_osc_pane_g1

0x959d,	// (0x000182e0) popup_number_entry_window_t1_ParamLimits

0x95b0,	// (0x000182f3) popup_number_entry_window_t2_ParamLimits

0x95c2,	// (0x00018305) popup_number_entry_window_t3_ParamLimits

0x04ff,	// (0x0000f242) popup_number_entry_window_t5_ParamLimits

0x04ff,	// (0x0000f242) popup_number_entry_window_t5

0xf0ca,	// (0x0001de0d) popup_number_entry_window_t_ParamLimits

0x95d4,	// (0x00018317) text_title_cp2_ParamLimits

0xac4c,	// (0x0001998f) aid_hotspot_pointer_text2_pane

0xac72,	// (0x000199b5) main_viewer_pane_g9_ParamLimits

0xac72,	// (0x000199b5) main_viewer_pane_g9

0xa23f,	// (0x00018f82) cale_month_pane_t1_ParamLimits

0xa2aa,	// (0x00018fed) bg_cale_pane_ParamLimits

0xa2c2,	// (0x00019005) list_cale_pane_ParamLimits

0xa2d3,	// (0x00019016) listscroll_cale_day_pane_t1

0xa2e5,	// (0x00019028) scroll_pane_cp09_ParamLimits

0x2a15,	// (0x00011758) main_mup_eq_pane_t1_ParamLimits

0x2a15,	// (0x00011758) main_mup_eq_pane_t1

0x2a2f,	// (0x00011772) main_mup_eq_pane_t2_ParamLimits

0x2a2f,	// (0x00011772) main_mup_eq_pane_t2

0x2a49,	// (0x0001178c) main_mup_eq_pane_t3_ParamLimits

0x2a49,	// (0x0001178c) main_mup_eq_pane_t3

0x2a65,	// (0x000117a8) main_mup_eq_pane_t4_ParamLimits

0x2a65,	// (0x000117a8) main_mup_eq_pane_t4

0x2a81,	// (0x000117c4) main_mup_eq_pane_t5_ParamLimits

0x2a81,	// (0x000117c4) main_mup_eq_pane_t5

0x2a9d,	// (0x000117e0) main_mup_eq_pane_t6_ParamLimits

0x2a9d,	// (0x000117e0) main_mup_eq_pane_t6

0x2ab1,	// (0x000117f4) main_mup_eq_pane_t7_ParamLimits

0x2ab1,	// (0x000117f4) main_mup_eq_pane_t7

0x2ac5,	// (0x00011808) main_mup_eq_pane_t8_ParamLimits

0x2ac5,	// (0x00011808) main_mup_eq_pane_t8

0x2ad9,	// (0x0001181c) main_mup_eq_pane_t9_ParamLimits

0x2ad9,	// (0x0001181c) main_mup_eq_pane_t9

0x2af3,	// (0x00011836) main_mup_eq_pane_t10_ParamLimits

0x2af3,	// (0x00011836) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e198) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e198) main_mup_eq_pane_t

0x2ba2,	// (0x000118e5) mup_equalizer_pane_cp5_ParamLimits

0x2bb6,	// (0x000118f9) mup_equalizer_pane_cp6_ParamLimits

0x2bca,	// (0x0001190d) mup_equalizer_pane_cp7_ParamLimits

0x94ff,	// (0x00018242) main_gallery_pane

0xbfbb,	// (0x0001acfe) smil2_volume_pane

0xbfc3,	// (0x0001ad06) smil_status_volume_pane_g1_ParamLimits

0xbfd6,	// (0x0001ad19) smil_status_volume_pane_g2_ParamLimits

0xbfe9,	// (0x0001ad2c) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001e34e) smil_status_volume_pane_g_ParamLimits

0xc1e7,	// (0x0001af2a) bg_popup_window_pane_cp07_ParamLimits

0xc1f5,	// (0x0001af38) blid_firmament_pane

0x427a,	// (0x00012fbd) aid_size_cell_gallery_ParamLimits

0x427a,	// (0x00012fbd) aid_size_cell_gallery

0x4290,	// (0x00012fd3) grid_gallery_pane_ParamLimits

0x4290,	// (0x00012fd3) grid_gallery_pane

0x42a9,	// (0x00012fec) cell_gallery_pane_ParamLimits

0x42a9,	// (0x00012fec) cell_gallery_pane

0xc318,	// (0x0001b05b) bg_cell_gallery_focus_pane_ParamLimits

0xc318,	// (0x0001b05b) bg_cell_gallery_focus_pane

0xc32a,	// (0x0001b06d) cell_gallery_pane_g1_ParamLimits

0xc32a,	// (0x0001b06d) cell_gallery_pane_g1

0x42f2,	// (0x00013035) cell_gallery_pane_g2_ParamLimits

0x42f2,	// (0x00013035) cell_gallery_pane_g2

0x42ff,	// (0x00013042) cell_gallery_pane_g3_ParamLimits

0x42ff,	// (0x00013042) cell_gallery_pane_g3

0xc336,	// (0x0001b079) cell_gallery_pane_g4_ParamLimits

0xc336,	// (0x0001b079) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001e3fc) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001e3fc) cell_gallery_pane_g

0xc342,	// (0x0001b085) bg_cell_gallery_focus_pane_g1

0xc34a,	// (0x0001b08d) bg_cell_gallery_focus_pane_g2

0xc352,	// (0x0001b095) bg_cell_gallery_focus_pane_g3

0xc35a,	// (0x0001b09d) bg_cell_gallery_focus_pane_g4

0xc362,	// (0x0001b0a5) bg_cell_gallery_focus_pane_g5

0xc36a,	// (0x0001b0ad) bg_cell_gallery_focus_pane_g6

0xc372,	// (0x0001b0b5) bg_cell_gallery_focus_pane_g7

0xc37a,	// (0x0001b0bd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001e405) bg_cell_gallery_focus_pane_g

0xc382,	// (0x0001b0c5) aid_firma_cardinal

0xc396,	// (0x0001b0d9) blid_firmament_pane_t1

0xc3ad,	// (0x0001b0f0) blid_firmament_pane_t2

0xc3c4,	// (0x0001b107) blid_firmament_pane_t3

0xc3db,	// (0x0001b11e) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001e416) blid_firmament_pane_t

0xc3f2,	// (0x0001b135) blid_sat_info_pane

0xc402,	// (0x0001b145) blid_sat_info_pane_g1

0xc402,	// (0x0001b145) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001e41f) blid_sat_info_pane_g

0xc40c,	// (0x0001b14f) blid_sat_info_pane_t1

0xc41a,	// (0x0001b15d) smil2_volume_content_pane

0xc423,	// (0x0001b166) smil2_volume_pane_g1

0xc42b,	// (0x0001b16e) smil2_volume_content_pane_g1

0xc434,	// (0x0001b177) smil2_volume_content_pane_g2

0xc43d,	// (0x0001b180) smil2_volume_content_pane_g3

0xc446,	// (0x0001b189) smil2_volume_content_pane_g4

0xc44f,	// (0x0001b192) smil2_volume_content_pane_g5

0xc458,	// (0x0001b19b) smil2_volume_content_pane_g6

0xc461,	// (0x0001b1a4) smil2_volume_content_pane_g7

0xc46a,	// (0x0001b1ad) smil2_volume_content_pane_g8

0xc473,	// (0x0001b1b6) smil2_volume_content_pane_g9

0xc47c,	// (0x0001b1bf) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001e424) smil2_volume_content_pane_g

0x0ca0,	// (0x0000f9e3) cale_week_day_heading_pane_t1_ParamLimits

0x0cca,	// (0x0000fa0d) cale_week_day_heading_pane_t2_ParamLimits

0x0cf9,	// (0x0000fa3c) cale_week_day_heading_pane_t3_ParamLimits

0x0d28,	// (0x0000fa6b) cale_week_day_heading_pane_t4_ParamLimits

0x0d57,	// (0x0000fa9a) cale_week_day_heading_pane_t5_ParamLimits

0x0d8e,	// (0x0000fad1) cale_week_day_heading_pane_t6_ParamLimits

0x0dc5,	// (0x0000fb08) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001df14) cale_week_day_heading_pane_t_ParamLimits

0x9ea8,	// (0x00018beb) bg_cale_side_pane_ParamLimits

0x0def,	// (0x0000fb32) cale_week_time_pane_t1_ParamLimits

0x0e09,	// (0x0000fb4c) cale_week_time_pane_t2_ParamLimits

0x0e23,	// (0x0000fb66) cale_week_time_pane_t3_ParamLimits

0x0e3d,	// (0x0000fb80) cale_week_time_pane_t4_ParamLimits

0x0e57,	// (0x0000fb9a) cale_week_time_pane_t5_ParamLimits

0x0e71,	// (0x0000fbb4) cale_week_time_pane_t6_ParamLimits

0x0e8b,	// (0x0000fbce) cale_week_time_pane_t7_ParamLimits

0x0ea5,	// (0x0000fbe8) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001df23) cale_week_time_pane_t_ParamLimits

0x0ebf,	// (0x0000fc02) cell_cale_week_pane_g2_ParamLimits

0x9ea8,	// (0x00018beb) bg_cale_side_pane_cp01_ParamLimits

0x210f,	// (0x00010e52) cale_month_week_pane_t1_ParamLimits

0x2128,	// (0x00010e6b) cale_month_week_pane_t2_ParamLimits

0x2141,	// (0x00010e84) cale_month_week_pane_t3_ParamLimits

0x215a,	// (0x00010e9d) cale_month_week_pane_t4_ParamLimits

0x2173,	// (0x00010eb6) cale_month_week_pane_t5_ParamLimits

0x218c,	// (0x00010ecf) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001dff8) cale_month_week_pane_t_ParamLimits

0xa251,	// (0x00018f94) cell_cale_month_pane_g1_ParamLimits

0x94ff,	// (0x00018242) main_cale_event_viewer_pane

0x94ff,	// (0x00018242) listscroll_cale_event_viewer_pane

0xc485,	// (0x0001b1c8) list_cale_ev_pane

0xc48d,	// (0x0001b1d0) scroll_pane_cp023

0xc499,	// (0x0001b1dc) field_cale_ev_pane_ParamLimits

0xc499,	// (0x0001b1dc) field_cale_ev_pane

0xc4b7,	// (0x0001b1fa) field_cale_ev_content_pane_ParamLimits

0xc4b7,	// (0x0001b1fa) field_cale_ev_content_pane

0xc4c3,	// (0x0001b206) field_cale_ev_pane_g1_ParamLimits

0xc4c3,	// (0x0001b206) field_cale_ev_pane_g1

0xc4cf,	// (0x0001b212) field_cale_ev_pane_g2_ParamLimits

0xc4cf,	// (0x0001b212) field_cale_ev_pane_g2

0xc4e7,	// (0x0001b22a) field_cale_ev_pane_g3_ParamLimits

0xc4e7,	// (0x0001b22a) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001e439) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001e439) field_cale_ev_pane_g

0xc4ff,	// (0x0001b242) field_cale_ev_pane_t1_ParamLimits

0xc4ff,	// (0x0001b242) field_cale_ev_pane_t1

0xc516,	// (0x0001b259) field_cale_ev_content_pane_t1_ParamLimits

0xc516,	// (0x0001b259) field_cale_ev_content_pane_t1

0xab9d,	// (0x000198e0) bg_button_pane_cp01

0x09cd,	// (0x0000f710) listscroll_cale_week_pane_ParamLimits

0x9e53,	// (0x00018b96) popup_toolbar_window_cp01

0x9e79,	// (0x00018bbc) listscroll_cale_week_pane_t1_ParamLimits

0x09cd,	// (0x0000f710) listscroll_cale_day_pane_ParamLimits

0x9e53,	// (0x00018b96) popup_toolbar_window_cp02

0xa2d3,	// (0x00019016) listscroll_cale_day_pane_t1_ParamLimits

0x09cd,	// (0x0000f710) main_cale_month_pane_ParamLimits

0xbf34,	// (0x0001ac77) popup_toolbar_window_cp03_ParamLimits

0xbf34,	// (0x0001ac77) popup_toolbar_window_cp03

0x2ecf,	// (0x00011c12) main_image_pane_g2_ParamLimits

0x2ecf,	// (0x00011c12) main_image_pane_g2

0x2ee0,	// (0x00011c23) main_image_pane_g3_ParamLimits

0x2ee0,	// (0x00011c23) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e22a) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e22a) main_image_pane_g

0xad72,	// (0x00019ab5) main_image_pane_t1_ParamLimits

0x2ef1,	// (0x00011c34) main_image_pane_t2_ParamLimits

0x2ef1,	// (0x00011c34) main_image_pane_t2

0x2f03,	// (0x00011c46) main_image_pane_t3_ParamLimits

0x2f03,	// (0x00011c46) main_image_pane_t3

0x2f2b,	// (0x00011c6e) main_image_pane_t4_ParamLimits

0x2f2b,	// (0x00011c6e) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e231) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e231) main_image_pane_t

0x2f4b,	// (0x00011c8e) popup_image_details_window_cp01

0x2f55,	// (0x00011c98) popup_toobar_trans_pane_cp01_ParamLimits

0x2f55,	// (0x00011c98) popup_toobar_trans_pane_cp01

0x36d5,	// (0x00012418) popup_image_details_window_ParamLimits

0x36d5,	// (0x00012418) popup_image_details_window

0xbf07,	// (0x0001ac4a) popup_image_focus_window

0x3aec,	// (0x0001282f) camera2_autofocus_pane_ParamLimits

0x3aec,	// (0x0001282f) camera2_autofocus_pane

0x94ff,	// (0x00018242) bg_popup_sub_pane_cp06

0xc534,	// (0x0001b277) popup_image_focus_window_g1

0xc53c,	// (0x0001b27f) popup_image_focus_window_g2

0xc544,	// (0x0001b287) popup_image_focus_window_g3

0xc54c,	// (0x0001b28f) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001e440) popup_image_focus_window_g

0xc554,	// (0x0001b297) popup_image_focus_window_t1

0xc562,	// (0x0001b2a5) popup_image_focus_window_t2

0xc572,	// (0x0001b2b5) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001e449) popup_image_focus_window_t

0xc580,	// (0x0001b2c3) camera2_autofocus_pane_g1

0x956f,	// (0x000182b2) bg_tb_trans_pane_cp01

0xc58e,	// (0x0001b2d1) popup_image_details_window_g1

0xc5a1,	// (0x0001b2e4) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001e45b) popup_image_details_window_g

0xc5ca,	// (0x0001b30d) popup_image_details_window_t1

0xc5dc,	// (0x0001b31f) popup_image_details_window_t2

0xc5f5,	// (0x0001b338) popup_image_details_window_t3

0xc609,	// (0x0001b34c) popup_image_details_window_t4

0xc624,	// (0x0001b367) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001e462) popup_image_details_window_t

0x9ca4,	// (0x000189e7) bg_calc_paper_pane_ParamLimits

0x94ff,	// (0x00018242) grid_highlight_pane_cp013

0x9cb8,	// (0x000189fb) list_calc_pane_ParamLimits

0x9cca,	// (0x00018a0d) scroll_pane_cp024

0x9cd2,	// (0x00018a15) bg_calc_display_pane_ParamLimits

0x07fe,	// (0x0000f541) calc_display_pane_t1_ParamLimits

0x0810,	// (0x0000f553) calc_display_pane_t2_ParamLimits

0x9cde,	// (0x00018a21) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001de94) calc_display_pane_t_ParamLimits

0x08ca,	// (0x0000f60d) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001deb1) cell_calc_pane_g

0x08d3,	// (0x0000f616) cell_calc_pane_t1

0x9d55,	// (0x00018a98) grid_highlight_pane_cp02_ParamLimits

0x9d6b,	// (0x00018aae) toolbar_button_pane_cp01_ParamLimits

0x9d6b,	// (0x00018aae) toolbar_button_pane_cp01

0xadb7,	// (0x00019afa) temp_image_control_pane_ParamLimits

0xadb7,	// (0x00019afa) temp_image_control_pane

0x956f,	// (0x000182b2) main_mp3_pane

0xc63e,	// (0x0001b381) temp_image_control_pane_g1_ParamLimits

0xc63e,	// (0x0001b381) temp_image_control_pane_g1

0xc64c,	// (0x0001b38f) temp_image_control_pane_g2_ParamLimits

0xc64c,	// (0x0001b38f) temp_image_control_pane_g2

0xc65e,	// (0x0001b3a1) temp_image_control_pane_g3_ParamLimits

0xc65e,	// (0x0001b3a1) temp_image_control_pane_g3

0x433c,	// (0x0001307f) temp_image_control_pane_g4_ParamLimits

0x433c,	// (0x0001307f) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001e46d) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001e46d) temp_image_control_pane_g

0xc63e,	// (0x0001b381) main_mp3_pane_g1

0x434f,	// (0x00013092) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001e476) main_mp3_pane_g

0xc6a1,	// (0x0001b3e4) main_mp3_pane_t1

0x9f15,	// (0x00018c58) main_camera_pane_g8_ParamLimits

0x9f15,	// (0x00018c58) main_camera_pane_g8

0x11b9,	// (0x0000fefc) main_video_pane_g7_ParamLimits

0x11b9,	// (0x0000fefc) main_video_pane_g7

0xc029,	// (0x0001ad6c) main_camera2_pane_t7_ParamLimits

0xc029,	// (0x0001ad6c) main_camera2_pane_t7

0xa05d,	// (0x00018da0) scroll_pane_cp025_ParamLimits

0xa05d,	// (0x00018da0) scroll_pane_cp025

0xa071,	// (0x00018db4) scroll_pane_cp026_ParamLimits

0xa071,	// (0x00018db4) scroll_pane_cp026

0xa080,	// (0x00018dc3) wml_content_pane_ParamLimits

0x94ff,	// (0x00018242) main_touch_calib_pane

0x4423,	// (0x00013166) main_touch_calib_pane_g1

0x4435,	// (0x00013178) main_touch_calib_pane_g2

0x4447,	// (0x0001318a) main_touch_calib_pane_g3

0x4459,	// (0x0001319c) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001e494) main_touch_calib_pane_g

0x446b,	// (0x000131ae) main_touch_calib_pane_t1

0x4485,	// (0x000131c8) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001e49d) main_touch_calib_pane_t

0xa8af,	// (0x000195f2) mup_progress_pane_cp02

0xa8e4,	// (0x00019627) navi_pane_g1

0xa99f,	// (0x000196e2) navi_pane_mp_t3

0x956f,	// (0x000182b2) main_mp3_pane_ParamLimits

0x385a,	// (0x0001259d) navi_pane_ParamLimits

0xc63e,	// (0x0001b381) main_mp3_pane_g1_ParamLimits

0x434f,	// (0x00013092) main_mp3_pane_g2_ParamLimits

0x435d,	// (0x000130a0) main_mp3_pane_g3_ParamLimits

0x435d,	// (0x000130a0) main_mp3_pane_g3

0x436b,	// (0x000130ae) main_mp3_pane_g4_ParamLimits

0x436b,	// (0x000130ae) main_mp3_pane_g4

0xc66e,	// (0x0001b3b1) main_mp3_pane_g5_ParamLimits

0xc66e,	// (0x0001b3b1) main_mp3_pane_g5

0xc67c,	// (0x0001b3bf) main_mp3_pane_g6_ParamLimits

0xc67c,	// (0x0001b3bf) main_mp3_pane_g6

0xc689,	// (0x0001b3cc) main_mp3_pane_g7_ParamLimits

0xc689,	// (0x0001b3cc) main_mp3_pane_g7

0xc695,	// (0x0001b3d8) main_mp3_pane_g8_ParamLimits

0xc695,	// (0x0001b3d8) main_mp3_pane_g8

0xf733,	// (0x0001e476) main_mp3_pane_g_ParamLimits

0x4377,	// (0x000130ba) main_mp3_pane_t2

0x4385,	// (0x000130c8) main_mp3_pane_t3

0xc6af,	// (0x0001b3f2) main_mp3_pane_t4

0xc6bd,	// (0x0001b400) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001e487) main_mp3_pane_t

0xc6cb,	// (0x0001b40e) mup_progress_pane_cp01

0x951d,	// (0x00018260) aid_zoom_text_secondary2

0xc485,	// (0x0001b1c8) list_cale_ev2_pane

0xc48d,	// (0x0001b1d0) scroll_pane_cp023_ParamLimits

0x44db,	// (0x0001321e) field_cale_ev2_pane_ParamLimits

0x44db,	// (0x0001321e) field_cale_ev2_pane

0x44fb,	// (0x0001323e) field_cale_ev2_pane_g1_ParamLimits

0x44fb,	// (0x0001323e) field_cale_ev2_pane_g1

0x4507,	// (0x0001324a) field_cale_ev2_pane_g2_ParamLimits

0x4507,	// (0x0001324a) field_cale_ev2_pane_g2

0x451f,	// (0x00013262) field_cale_ev2_pane_g3_ParamLimits

0x451f,	// (0x00013262) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001e4a8) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001e4a8) field_cale_ev2_pane_g

0x4537,	// (0x0001327a) field_cale_ev2_pane_t1_ParamLimits

0x4537,	// (0x0001327a) field_cale_ev2_pane_t1

0x454e,	// (0x00013291) field_cale_ev2_pane_t2_ParamLimits

0x454e,	// (0x00013291) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001e4b1) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001e4b1) field_cale_ev2_pane_t

0x2d84,	// (0x00011ac7) main_postcard_pane_g5_ParamLimits

0x2d84,	// (0x00011ac7) main_postcard_pane_g5

0x2d9a,	// (0x00011add) main_postcard_pane_g6_ParamLimits

0x2d9a,	// (0x00011add) main_postcard_pane_g6

0x0f85,	// (0x0000fcc8) camera2_autofocus_pane_cp_ParamLimits

0x0f85,	// (0x0000fcc8) camera2_autofocus_pane_cp

0x956f,	// (0x000182b2) main_mup3_pane

0x4563,	// (0x000132a6) main_mup3_pane_g1_ParamLimits

0x4563,	// (0x000132a6) main_mup3_pane_g1

0x4585,	// (0x000132c8) main_mup3_pane_g2_ParamLimits

0x4585,	// (0x000132c8) main_mup3_pane_g2

0x4603,	// (0x00013346) main_mup3_pane_g3_ParamLimits

0x4603,	// (0x00013346) main_mup3_pane_g3

0x4649,	// (0x0001338c) main_mup3_pane_g4_ParamLimits

0x4649,	// (0x0001338c) main_mup3_pane_g4

0x468f,	// (0x000133d2) main_mup3_pane_g5_ParamLimits

0x468f,	// (0x000133d2) main_mup3_pane_g5

0x46d5,	// (0x00013418) main_mup3_pane_g6_ParamLimits

0x46d5,	// (0x00013418) main_mup3_pane_g6

0xc6ff,	// (0x0001b442) main_mup3_pane_g7_ParamLimits

0xc6ff,	// (0x0001b442) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001e4c1) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001e4c1) main_mup3_pane_g

0x4753,	// (0x00013496) main_mup3_pane_t1_ParamLimits

0x4753,	// (0x00013496) main_mup3_pane_t1

0x47c7,	// (0x0001350a) main_mup3_pane_t2_ParamLimits

0x47c7,	// (0x0001350a) main_mup3_pane_t2

0x489b,	// (0x000135de) main_mup3_pane_t4_ParamLimits

0x489b,	// (0x000135de) main_mup3_pane_t4

0x48f1,	// (0x00013634) main_mup3_pane_t5_ParamLimits

0x48f1,	// (0x00013634) main_mup3_pane_t5

0x49ad,	// (0x000136f0) main_mup3_pane_t6_ParamLimits

0x49ad,	// (0x000136f0) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001e4d2) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001e4d2) main_mup3_pane_t

0x4a65,	// (0x000137a8) mup3_progress_pane_ParamLimits

0x4a65,	// (0x000137a8) mup3_progress_pane

0x4afb,	// (0x0001383e) popup_mup3_control_window_ParamLimits

0x4afb,	// (0x0001383e) popup_mup3_control_window

0xc70d,	// (0x0001b450) popup_mup3_text_window

0x4b2d,	// (0x00013870) mup3_progress_pane_t1

0x4b4c,	// (0x0001388f) mup3_progress_pane_t2

0xc715,	// (0x0001b458) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001e4df) mup3_progress_pane_t

0xc732,	// (0x0001b475) mup_progress_pane_cp03

0x94ff,	// (0x00018242) bg_tb_trans_pane_cp04

0x4b6b,	// (0x000138ae) mup3_volume_pane

0x4b73,	// (0x000138b6) popup_mup3_control_window_g1

0x4b7c,	// (0x000138bf) mup3_volume_pane_g1

0x4b85,	// (0x000138c8) mup3_volume_pane_g2

0x4b8e,	// (0x000138d1) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001e4e6) mup3_volume_pane_g

0x94ff,	// (0x00018242) bg_tb_trans_pane_cp03

0xc742,	// (0x0001b485) popup_mup3_text_window_g1

0xc74a,	// (0x0001b48d) popup_mup3_text_window_t1

0x9d2c,	// (0x00018a6f) list_calc_item_pane_g1_ParamLimits

0xc111,	// (0x0001ae54) mup_volume_pane_cp_g1

0x449f,	// (0x000131e2) main_touch_calib_pane_t3

0x44b3,	// (0x000131f6) main_touch_calib_pane_t4

0x44c7,	// (0x0001320a) main_touch_calib_pane_t5

0x9509,	// (0x0001824c) aid_cell_size_toolbar2

0x9511,	// (0x00018254) aid_popup3_width_pane

0x951d,	// (0x00018260) aid_zoom_text_msg_primary

0x0f64,	// (0x0000fca7) vorec_t7

0x9cf0,	// (0x00018a33) bg_calc_paper_pane_g1_ParamLimits

0x9cfc,	// (0x00018a3f) bg_calc_paper_pane_g2_ParamLimits

0x9d08,	// (0x00018a4b) bg_calc_paper_pane_g3_ParamLimits

0x9d14,	// (0x00018a57) bg_calc_paper_pane_g4_ParamLimits

0x9d20,	// (0x00018a63) bg_calc_paper_pane_g5_ParamLimits

0x0857,	// (0x0000f59a) bg_calc_paper_pane_g6_ParamLimits

0x0866,	// (0x0000f5a9) bg_calc_paper_pane_g7_ParamLimits

0x0875,	// (0x0000f5b8) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001de9b) bg_calc_paper_pane_g_ParamLimits

0x0888,	// (0x0000f5cb) calc_bg_paper_pane_g9_ParamLimits

0x10d0,	// (0x0000fe13) image_qvga_pane_ParamLimits

0x10d0,	// (0x0000fe13) image_qvga_pane

0x9beb,	// (0x0001892e) bg_popup_sub_pane_cp04_ParamLimits

0xacee,	// (0x00019a31) popup_mup_playback_window_g1_ParamLimits

0xacfa,	// (0x00019a3d) popup_mup_playback_window_t1_ParamLimits

0xad0f,	// (0x00019a52) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e225) popup_mup_playback_window_t_ParamLimits

0x3fdf,	// (0x00012d22) main_mup2_pane_g3_ParamLimits

0x3fdf,	// (0x00012d22) main_mup2_pane_g3

0x14df,	// (0x00010222) popup_toolbar_window_cp04

0xb0f1,	// (0x00019e34) popup_call2_audio_second_window_g3_ParamLimits

0xb0f1,	// (0x00019e34) popup_call2_audio_second_window_g3

0xb4fb,	// (0x0001a23e) popup_call2_audio_first_window_g4_ParamLimits

0xb4fb,	// (0x0001a23e) popup_call2_audio_first_window_g4

0xbb7a,	// (0x0001a8bd) popup_call2_audio_in_window_g4_ParamLimits

0xbb7a,	// (0x0001a8bd) popup_call2_audio_in_window_g4

0x2eb1,	// (0x00011bf4) aid_area_sk_bg_cut_ParamLimits

0x2eb1,	// (0x00011bf4) aid_area_sk_bg_cut

0xad24,	// (0x00019a67) aid_area_sk_bg_cut_2_ParamLimits

0xad24,	// (0x00019a67) aid_area_sk_bg_cut_2

0x42e2,	// (0x00013025) aid_placing_details_win

0x42ea,	// (0x0001302d) aid_placing_details_win_2

0xc580,	// (0x0001b2c3) camera2_autofocus_pane_g1_ParamLimits

0x0446,	// (0x0000f189) popup_fixed_preview_cale_window_ParamLimits

0x0446,	// (0x0000f189) popup_fixed_preview_cale_window

0xaa26,	// (0x00019769) navi_slider_pane_g3

0xaa2f,	// (0x00019772) navi_slider_pane_g4

0xaa38,	// (0x0001977b) navi_slider_pane_g5

0xaa26,	// (0x00019769) navi_slider_pane_g6

0xaa41,	// (0x00019784) navi_slider_pane_g7

0xab62,	// (0x000198a5) mup_scale_pane_g3

0xab6b,	// (0x000198ae) mup_scale_pane_g4

0xab74,	// (0x000198b7) mup_scale_pane_g5

0x2bde,	// (0x00011921) mup_scale_pane_g6

0x2be7,	// (0x0001192a) mup_scale_pane_g7

0xaa26,	// (0x00019769) cams2_slider_pane_g3

0xc1c6,	// (0x0001af09) cams2_slider_pane_g4

0xc1ce,	// (0x0001af11) cams2_slider_pane_g5

0xaa26,	// (0x00019769) cams2_slider_pane_g6

0xc1d6,	// (0x0001af19) cams2_slider_pane_g7

0xc402,	// (0x0001b145) camera2_autofocus_pane_cp_g1

0xbedb,	// (0x0001ac1e) bg_popup_preview_window_pane_cp02_ParamLimits

0xbedb,	// (0x0001ac1e) bg_popup_preview_window_pane_cp02

0xc758,	// (0x0001b49b) list_fp_cale_pane_ParamLimits

0xc758,	// (0x0001b49b) list_fp_cale_pane

0xc764,	// (0x0001b4a7) popup_fixed_preview_cale_window_t1_ParamLimits

0xc764,	// (0x0001b4a7) popup_fixed_preview_cale_window_t1

0x4b97,	// (0x000138da) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b97,	// (0x000138da) popup_fixed_preview_cale_window_t2

0x4bac,	// (0x000138ef) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bac,	// (0x000138ef) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001e4ed) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001e4ed) popup_fixed_preview_cale_window_t

0x4bc1,	// (0x00013904) list_single_fp_cale_pane_ParamLimits

0x4bc1,	// (0x00013904) list_single_fp_cale_pane

0xc782,	// (0x0001b4c5) list_single_fp_cale_pane_g1_ParamLimits

0xc782,	// (0x0001b4c5) list_single_fp_cale_pane_g1

0xc78e,	// (0x0001b4d1) list_single_fp_cale_pane_g2_ParamLimits

0xc78e,	// (0x0001b4d1) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001e4f4) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001e4f4) list_single_fp_cale_pane_g

0xc7a7,	// (0x0001b4ea) list_single_fp_cale_pane_t1_ParamLimits

0xc7a7,	// (0x0001b4ea) list_single_fp_cale_pane_t1

0xc7b9,	// (0x0001b4fc) list_single_fp_cale_pane_t2_ParamLimits

0xc7b9,	// (0x0001b4fc) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001e4fb) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001e4fb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94ff,	// (0x00018242) main_dialer_pane

0x4bd6,	// (0x00013919) aid_cell_size_keypad

0x4be0,	// (0x00013923) dialer_ne_pane

0x4be8,	// (0x0001392b) grid_dialer_command_1_pane

0x4bf0,	// (0x00013933) grid_dialer_command_2_pane

0x4bf8,	// (0x0001393b) grid_dialer_keypad_pane

0x4c0a,	// (0x0001394d) bg_popup_call_pane_cp06_ParamLimits

0x4c0a,	// (0x0001394d) bg_popup_call_pane_cp06

0x4c16,	// (0x00013959) dialer_ne_clear_pane_ParamLimits

0x4c16,	// (0x00013959) dialer_ne_clear_pane

0xc7ec,	// (0x0001b52f) dialer_ne_pane_g1

0xc7f4,	// (0x0001b537) dialer_ne_pane_t1_ParamLimits

0xc7f4,	// (0x0001b537) dialer_ne_pane_t1

0x4c22,	// (0x00013965) dialer_ne_pane_t2_ParamLimits

0x4c22,	// (0x00013965) dialer_ne_pane_t2

0x4c4c,	// (0x0001398f) dialer_ne_pane_t3_ParamLimits

0x4c4c,	// (0x0001398f) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001e500) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001e500) dialer_ne_pane_t

0x4c7c,	// (0x000139bf) dialer_ne_pane_t3_copy1_ParamLimits

0x4c7c,	// (0x000139bf) dialer_ne_pane_t3_copy1

0x4cab,	// (0x000139ee) cell_dialer_keypad_pane_ParamLimits

0x4cab,	// (0x000139ee) cell_dialer_keypad_pane

0x4cc2,	// (0x00013a05) cell_dialer_command_1_pane_ParamLimits

0x4cc2,	// (0x00013a05) cell_dialer_command_1_pane

0x4cd8,	// (0x00013a1b) cell_dialer_command_2_pane_ParamLimits

0x4cd8,	// (0x00013a1b) cell_dialer_command_2_pane

0xc806,	// (0x0001b549) bg_button_pane_cp02_ParamLimits

0xc806,	// (0x0001b549) bg_button_pane_cp02

0x4ce7,	// (0x00013a2a) cell_dialer_keypad_pane_g1_ParamLimits

0x4ce7,	// (0x00013a2a) cell_dialer_keypad_pane_g1

0xc806,	// (0x0001b549) bg_button_pane_cp03_ParamLimits

0xc806,	// (0x0001b549) bg_button_pane_cp03

0x4cfb,	// (0x00013a3e) cell_dialer_command_1_pane_g1_ParamLimits

0x4cfb,	// (0x00013a3e) cell_dialer_command_1_pane_g1

0xc812,	// (0x0001b555) bg_button_pane_cp04

0x4d0f,	// (0x00013a52) cell_dialer_command_2_pane_g1

0x9f03,	// (0x00018c46) bg_button_pane_cp06

0xc81a,	// (0x0001b55d) dialer_ne_clear_pane_g1

0xa8f0,	// (0x00019633) navi_pane_g2

0xa91e,	// (0x00019661) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e128) navi_pane_g

0xa9ad,	// (0x000196f0) navi_pane_mv_g2

0xa9d4,	// (0x00019717) navi_pane_mv_g5

0x27a2,	// (0x000114e5) navi_pane_mv_t1

0x9cd2,	// (0x00018a15) main_clock2_pane

0x4d5c,	// (0x00013a9f) main_clock2_list_pane_ParamLimits

0x4d5c,	// (0x00013a9f) main_clock2_list_pane

0x4d94,	// (0x00013ad7) main_clock2_pane_t1_ParamLimits

0x4d94,	// (0x00013ad7) main_clock2_pane_t1

0x4dd0,	// (0x00013b13) main_clock2_pane_t2_ParamLimits

0x4dd0,	// (0x00013b13) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e50c) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e50c) main_clock2_pane_t

0x4e6e,	// (0x00013bb1) popup_clock_analogue_window_cp03_ParamLimits

0x4e6e,	// (0x00013bb1) popup_clock_analogue_window_cp03

0x4e93,	// (0x00013bd6) popup_clock_digital_window_cp02_ParamLimits

0x4e93,	// (0x00013bd6) popup_clock_digital_window_cp02

0x4f04,	// (0x00013c47) main_clock2_list_single_pane_ParamLimits

0x4f04,	// (0x00013c47) main_clock2_list_single_pane

0x9f03,	// (0x00018c46) list_highlight_pane_cp05

0xc858,	// (0x0001b59b) main_clock2_list_single_pane_t1

0x14df,	// (0x00010222) popup_toolbar_window_cp04_ParamLimits

0x430c,	// (0x0001304f) camera2_autofocus_pane_g2_ParamLimits

0x430c,	// (0x0001304f) camera2_autofocus_pane_g2

0x4318,	// (0x0001305b) camera2_autofocus_pane_g3_ParamLimits

0x4318,	// (0x0001305b) camera2_autofocus_pane_g3

0x4324,	// (0x00013067) camera2_autofocus_pane_g4_ParamLimits

0x4324,	// (0x00013067) camera2_autofocus_pane_g4

0x4330,	// (0x00013073) camera2_autofocus_pane_g5_ParamLimits

0x4330,	// (0x00013073) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001e450) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001e450) camera2_autofocus_pane_g

0xc6df,	// (0x0001b422) camera2_autofocus_pane_cp_g2

0xc6e7,	// (0x0001b42a) camera2_autofocus_pane_cp_g3

0xc6ef,	// (0x0001b432) camera2_autofocus_pane_cp_g4

0xc6f7,	// (0x0001b43a) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001e4b6) camera2_autofocus_pane_cp_g

0x4c02,	// (0x00013945) popup_dialer_spcha_window

0x94ff,	// (0x00018242) bg_popup_sub_pane_cp07

0xc866,	// (0x0001b5a9) list_spcha_pane

0xc86e,	// (0x0001b5b1) list_single_spcha_pane_ParamLimits

0xc86e,	// (0x0001b5b1) list_single_spcha_pane

0x94ff,	// (0x00018242) list_highlight_pane_cp06

0xc87f,	// (0x0001b5c2) list_single_spcha_pane_t1

0xb924,	// (0x0001a667) popup_call2_audio_out_window_g4_ParamLimits

0xb924,	// (0x0001a667) popup_call2_audio_out_window_g4

0x94ff,	// (0x00018242) main_imed2_pane

0xbf0f,	// (0x0001ac52) popup_imed_adjust2_window

0x36ed,	// (0x00012430) popup_imed_trans_window_ParamLimits

0x36ed,	// (0x00012430) popup_imed_trans_window

0xc240,	// (0x0001af83) popup_blid_sat_info2_window_t1

0xc24e,	// (0x0001af91) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001e3e5) popup_blid_sat_info2_window_t

0x4fad,	// (0x00013cf0) aid_size_cell_colour_35

0x4fcd,	// (0x00013d10) aid_size_cell_colour_112

0x4fed,	// (0x00013d30) aid_size_cell_effect

0xbee7,	// (0x0001ac2a) bg_tb_trans_pane_cp02

0xa3dc,	// (0x0001911f) heading_imed_pane

0x500d,	// (0x00013d50) listscroll_imed_pane

0xc88d,	// (0x0001b5d0) heading_imed_pane_g1

0xc895,	// (0x0001b5d8) heading_imed_pane_t1

0xc8a3,	// (0x0001b5e6) grid_imed_colour_35_pane_ParamLimits

0xc8a3,	// (0x0001b5e6) grid_imed_colour_35_pane

0x5019,	// (0x00013d5c) grid_imed_effect_pane

0xc8ba,	// (0x0001b5fd) list_imed_aspect_pane

0x502f,	// (0x00013d72) scroll_pane_cp027_ParamLimits

0x502f,	// (0x00013d72) scroll_pane_cp027

0x5040,	// (0x00013d83) cell_imed_effect_pane_ParamLimits

0x5040,	// (0x00013d83) cell_imed_effect_pane

0xc8c2,	// (0x0001b605) cell_imed_colour_pane_ParamLimits

0xc8c2,	// (0x0001b605) cell_imed_colour_pane

0xc904,	// (0x0001b647) cell_imed_colour_pane_g1_ParamLimits

0xc904,	// (0x0001b647) cell_imed_colour_pane_g1

0xc915,	// (0x0001b658) hgihlgiht_grid_pane_cp016_ParamLimits

0xc915,	// (0x0001b658) hgihlgiht_grid_pane_cp016

0x5067,	// (0x00013daa) cell_imed_effect_pane_g1

0x506f,	// (0x00013db2) grid_highlight_pane_cp017

0xc926,	// (0x0001b669) list_imed_single_pane_ParamLimits

0xc926,	// (0x0001b669) list_imed_single_pane

0x94ff,	// (0x00018242) list_highlight_pane_cp07

0xc93b,	// (0x0001b67e) list_imed_aspect_pane_comp1_t1

0xbee7,	// (0x0001ac2a) bg_tb_trans_pane_cp05

0xc95d,	// (0x0001b6a0) popup_imed_adjust2_window_g1

0xc984,	// (0x0001b6c7) popup_imed_adjust2_window_t1

0xc99c,	// (0x0001b6df) slider_imed_adjust_pane

0xc9b0,	// (0x0001b6f3) slider_imed_adjust_pane_g1

0xc9c0,	// (0x0001b703) slider_imed_adjust_pane_g2

0xc9d0,	// (0x0001b713) slider_imed_adjust_pane_g3

0xc9e1,	// (0x0001b724) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e529) slider_imed_adjust_pane_g

0x5078,	// (0x00013dbb) aid_size_cell_clipart2

0x5084,	// (0x00013dc7) grid_imed_clipart_pane

0xc9f2,	// (0x0001b735) scroll_pane_cp031

0x508e,	// (0x00013dd1) cell_imed_clipart_pane_ParamLimits

0x508e,	// (0x00013dd1) cell_imed_clipart_pane

0x50b0,	// (0x00013df3) cell_imed_clipart_pane_g1

0x94ff,	// (0x00018242) grid_highlight_pane_cp014

0x4d71,	// (0x00013ab4) main_clock2_pane_g1_ParamLimits

0x4d71,	// (0x00013ab4) main_clock2_pane_g1

0x4eaf,	// (0x00013bf2) aid_call2_pane_cp10

0x4ec1,	// (0x00013c04) aid_call_pane_cp10

0xa851,	// (0x00019594) popup_clock_analogue_window_cp10_g1

0xa851,	// (0x00019594) popup_clock_analogue_window_cp10_g2

0x4ed3,	// (0x00013c16) popup_clock_analogue_window_cp10_g3

0x4ed3,	// (0x00013c16) popup_clock_analogue_window_cp10_g4

0xa851,	// (0x00019594) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e517) popup_clock_analogue_window_cp10_g

0x4ee5,	// (0x00013c28) popup_clock_analogue_window_cp10_t1

0x4f16,	// (0x00013c59) clock_digital_number_pane_cp10_ParamLimits

0x4f16,	// (0x00013c59) clock_digital_number_pane_cp10

0x4f2e,	// (0x00013c71) clock_digital_number_pane_cp11_ParamLimits

0x4f2e,	// (0x00013c71) clock_digital_number_pane_cp11

0x4f46,	// (0x00013c89) clock_digital_number_pane_cp12_ParamLimits

0x4f46,	// (0x00013c89) clock_digital_number_pane_cp12

0x4f5e,	// (0x00013ca1) clock_digital_number_pane_cp13_ParamLimits

0x4f5e,	// (0x00013ca1) clock_digital_number_pane_cp13

0x4f76,	// (0x00013cb9) clock_digital_separator_pane_cp10_ParamLimits

0x4f76,	// (0x00013cb9) clock_digital_separator_pane_cp10

0x4f8e,	// (0x00013cd1) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f8e,	// (0x00013cd1) popup_clock_digital_window_cp02_t1

0x9be3,	// (0x00018926) clock_digital_number_pane_cp10_g1

0x9be3,	// (0x00018926) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e532) clock_digital_number_pane_cp10_g

0x9be3,	// (0x00018926) clock_digital_separator_pane_cp10_g1

0x9be3,	// (0x00018926) clock_digital_separator_pane_g2_cp10

0xa9dc,	// (0x0001971f) navi_pane_vded_g4

0xa9e5,	// (0x00019728) navi_pane_vded_g5

0xa9ee,	// (0x00019731) navi_pane_vded_t1

0x94ff,	// (0x00018242) main_vded_pane

0x50b9,	// (0x00013dfc) main_vded_pane_g1

0x50c3,	// (0x00013e06) main_vded_pane_g2

0x50cd,	// (0x00013e10) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e537) main_vded_pane_g

0x50d7,	// (0x00013e1a) main_vded_pane_t1

0x50e5,	// (0x00013e28) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e53e) main_vded_pane_t

0x50f3,	// (0x00013e36) vded_slider_pane

0x50fb,	// (0x00013e3e) vded_video_pane

0xc9fa,	// (0x0001b73d) vded_video_pane_g1

0x5103,	// (0x00013e46) vded_video_pane_g2

0xc402,	// (0x0001b145) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e543) vded_video_pane_g

0xca04,	// (0x0001b747) vded_slider_pane_g1

0xc111,	// (0x0001ae54) vded_slider_pane_g2

0xca0d,	// (0x0001b750) vded_slider_pane_g3

0xca16,	// (0x0001b759) vded_slider_pane_g4

0xca1f,	// (0x0001b762) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e54a) vded_slider_pane_g

0x4ae3,	// (0x00013826) mup3_rocker_pane_ParamLimits

0x4ae3,	// (0x00013826) mup3_rocker_pane

0x510c,	// (0x00013e4f) mup3_control_keys_pane_g1

0x5114,	// (0x00013e57) mup3_control_keys_pane_g2

0x511c,	// (0x00013e5f) mup3_control_keys_pane_g3

0x5124,	// (0x00013e67) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e555) mup3_control_keys_pane_g

0x047d,	// (0x0000f1c0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x047d,	// (0x0000f1c0) popup_toolbar2_fixed_window_cp01

0x4b17,	// (0x0001385a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b17,	// (0x0001385a) popup_toolbar2_fixed_window_cp02

0xb263,	// (0x00019fa6) popup_call2_audio_second_window_t4_ParamLimits

0xb263,	// (0x00019fa6) popup_call2_audio_second_window_t4

0xb791,	// (0x0001a4d4) popup_call2_audio_first_window_t6_ParamLimits

0xb791,	// (0x0001a4d4) popup_call2_audio_first_window_t6

0xba27,	// (0x0001a76a) popup_call2_audio_out_window_t6_ParamLimits

0xba27,	// (0x0001a76a) popup_call2_audio_out_window_t6

0x94ff,	// (0x00018242) main_vitu_pane

0x5134,	// (0x00013e77) aid_size_cell_itu_ParamLimits

0x5134,	// (0x00013e77) aid_size_cell_itu

0x956f,	// (0x000182b2) bg_popup_window_pane_cp08_ParamLimits

0x956f,	// (0x000182b2) bg_popup_window_pane_cp08

0x514a,	// (0x00013e8d) field_vitu_entry_pane_ParamLimits

0x514a,	// (0x00013e8d) field_vitu_entry_pane

0x5161,	// (0x00013ea4) grid_vitu_function_pane_ParamLimits

0x5161,	// (0x00013ea4) grid_vitu_function_pane

0x517c,	// (0x00013ebf) grid_vitu_itu_pane_ParamLimits

0x517c,	// (0x00013ebf) grid_vitu_itu_pane

0x519a,	// (0x00013edd) cell_vitu_itu_pane_ParamLimits

0x519a,	// (0x00013edd) cell_vitu_itu_pane

0x51bc,	// (0x00013eff) cell_vitu_function_pane_ParamLimits

0x51bc,	// (0x00013eff) cell_vitu_function_pane

0x956f,	// (0x000182b2) bg_popup_sub_pane_cp08_ParamLimits

0x956f,	// (0x000182b2) bg_popup_sub_pane_cp08

0x51d5,	// (0x00013f18) field_vitu_entry_pane_t1_ParamLimits

0x51d5,	// (0x00013f18) field_vitu_entry_pane_t1

0xca40,	// (0x0001b783) field_vitu_entry_pane_t2_ParamLimits

0xca40,	// (0x0001b783) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e563) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e563) field_vitu_entry_pane_t

0xca5d,	// (0x0001b7a0) bg_button_pane_cp05_ParamLimits

0xca5d,	// (0x0001b7a0) bg_button_pane_cp05

0x51f3,	// (0x00013f36) cell_vitu_itu_pane_g1

0x520b,	// (0x00013f4e) cell_vitu_itu_pane_t1_ParamLimits

0x520b,	// (0x00013f4e) cell_vitu_itu_pane_t1

0x521d,	// (0x00013f60) cell_vitu_itu_pane_t2_ParamLimits

0x521d,	// (0x00013f60) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001e568) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001e568) cell_vitu_itu_pane_t

0xca6b,	// (0x0001b7ae) bg_button_pane_cp07

0x5252,	// (0x00013f95) cell_vitu_function_pane_g1

0x9c72,	// (0x000189b5) main_calc_pane_g1

0x02a4,	// (0x0000efe7) aid_visual_content_pane

0x94ff,	// (0x00018242) main_vradio_pane

0x525b,	// (0x00013f9e) main_vradio_pane_g1_ParamLimits

0x525b,	// (0x00013f9e) main_vradio_pane_g1

0xca75,	// (0x0001b7b8) main_vradio_pane_g2_ParamLimits

0xca75,	// (0x0001b7b8) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001e56f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001e56f) main_vradio_pane_g

0x5274,	// (0x00013fb7) main_vradio_pane_t1_ParamLimits

0x5274,	// (0x00013fb7) main_vradio_pane_t1

0x5289,	// (0x00013fcc) main_vradio_pane_t2_ParamLimits

0x5289,	// (0x00013fcc) main_vradio_pane_t2

0xca82,	// (0x0001b7c5) main_vradio_pane_t3_ParamLimits

0xca82,	// (0x0001b7c5) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001e574) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001e574) main_vradio_pane_t

0x529e,	// (0x00013fe1) vradio_rocker_control_pane_ParamLimits

0x529e,	// (0x00013fe1) vradio_rocker_control_pane

0x52b0,	// (0x00013ff3) vradio_station_info_pane_ParamLimits

0x52b0,	// (0x00013ff3) vradio_station_info_pane

0xca96,	// (0x0001b7d9) vradio_frequency_info_pane_ParamLimits

0xca96,	// (0x0001b7d9) vradio_frequency_info_pane

0xc402,	// (0x0001b145) vradio_station_info_pane_g1

0xcaa5,	// (0x0001b7e8) vradio_station_info_pane_t1_ParamLimits

0xcaa5,	// (0x0001b7e8) vradio_station_info_pane_t1

0xcac7,	// (0x0001b80a) vradio_station_info_pane_t2_ParamLimits

0xcac7,	// (0x0001b80a) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001e57b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001e57b) vradio_station_info_pane_t

0xcad9,	// (0x0001b81c) vradio_tuning_pane

0xcae1,	// (0x0001b824) vradio_rocker_control_pane_g1

0xcae9,	// (0x0001b82c) vradio_rocker_control_pane_g2

0xcaf1,	// (0x0001b834) vradio_rocker_control_pane_g3

0xcaf9,	// (0x0001b83c) vradio_rocker_control_pane_g4

0xcb01,	// (0x0001b844) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001e580) vradio_rocker_control_pane_g

0x52c2,	// (0x00014005) vradio_frequency_info_pane_g1

0xcb09,	// (0x0001b84c) vradio_frequency_info_pane_t1_ParamLimits

0xcb09,	// (0x0001b84c) vradio_frequency_info_pane_t1

0x52cc,	// (0x0001400f) vradio_tuning_pane_g1

0x52d7,	// (0x0001401a) vradio_tuning_pane_t1

0x952d,	// (0x00018270) area_side_right_pane_ParamLimits

0x952d,	// (0x00018270) area_side_right_pane

0xbea2,	// (0x0001abe5) status_small_pane_g1

0xbeaa,	// (0x0001abed) status_small_pane_g2

0xbeb3,	// (0x0001abf6) status_small_pane_g3

0xbebc,	// (0x0001abff) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001e33b) status_small_pane_g

0xbec5,	// (0x0001ac08) status_small_pane_t1

0x94ff,	// (0x00018242) main_video3_pane

0xcb1d,	// (0x0001b860) cams_zoom_vslider_pane

0xcb25,	// (0x0001b868) image3_wide_pane_ParamLimits

0xcb25,	// (0x0001b868) image3_wide_pane

0xcb3f,	// (0x0001b882) image3_wide_small_pane

0xcb4b,	// (0x0001b88e) main_video3_pane_g1_ParamLimits

0xcb4b,	// (0x0001b88e) main_video3_pane_g1

0xcb67,	// (0x0001b8aa) main_video3_pane_g2_ParamLimits

0xcb67,	// (0x0001b8aa) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001e58b) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001e58b) main_video3_pane_g

0xcb83,	// (0x0001b8c6) main_video3_pane_t1_ParamLimits

0xcb83,	// (0x0001b8c6) main_video3_pane_t1

0xcbae,	// (0x0001b8f1) main_video3_pane_t2_ParamLimits

0xcbae,	// (0x0001b8f1) main_video3_pane_t2

0xcbd9,	// (0x0001b91c) main_video3_pane_t3_ParamLimits

0xcbd9,	// (0x0001b91c) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001e590) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001e590) main_video3_pane_t

0xcc06,	// (0x0001b949) cams_zoom_vslider_pane_g1

0xcc0f,	// (0x0001b952) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001e597) cams_zoom_vslider_pane_g

0xcc17,	// (0x0001b95a) small_slider_vertical_pane

0xc402,	// (0x0001b145) small_slider_vertical_pane_g1

0xc402,	// (0x0001b145) small_slider_vertical_pane_g2

0xcc1f,	// (0x0001b962) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001e59c) small_slider_vertical_pane_g

0x94ff,	// (0x00018242) main_hwr_training_pane

0xcc28,	// (0x0001b96b) hwr_training_instruct_pane_ParamLimits

0xcc28,	// (0x0001b96b) hwr_training_instruct_pane

0x52e6,	// (0x00014029) hwr_training_navi_pane_ParamLimits

0x52e6,	// (0x00014029) hwr_training_navi_pane

0x5305,	// (0x00014048) hwr_training_write_pane_ParamLimits

0x5305,	// (0x00014048) hwr_training_write_pane

0x94ff,	// (0x00018242) bg_frame_shadow_pane

0xcc5f,	// (0x0001b9a2) hwr_training_write_pane_g1

0xcc67,	// (0x0001b9aa) hwr_training_write_pane_g2

0xcc6f,	// (0x0001b9b2) hwr_training_write_pane_g3

0xcc77,	// (0x0001b9ba) hwr_training_write_pane_g4

0xcc7f,	// (0x0001b9c2) hwr_training_write_pane_g5

0xcc87,	// (0x0001b9ca) hwr_training_write_pane_g6

0xcc8f,	// (0x0001b9d2) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001e5a3) hwr_training_write_pane_g

0xcc97,	// (0x0001b9da) hwr_training_navi_pane_g1_ParamLimits

0xcc97,	// (0x0001b9da) hwr_training_navi_pane_g1

0xcca9,	// (0x0001b9ec) hwr_training_navi_pane_g2_ParamLimits

0xcca9,	// (0x0001b9ec) hwr_training_navi_pane_g2

0xccbb,	// (0x0001b9fe) hwr_training_navi_pane_g3_ParamLimits

0xccbb,	// (0x0001b9fe) hwr_training_navi_pane_g3

0xcccb,	// (0x0001ba0e) hwr_training_navi_pane_g4_ParamLimits

0xcccb,	// (0x0001ba0e) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001e5b2) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001e5b2) hwr_training_navi_pane_g

0xccd8,	// (0x0001ba1b) hwr_training_navi_pane_t1

0x534d,	// (0x00014090) list_single_hwr_training_instruct_pane_ParamLimits

0x534d,	// (0x00014090) list_single_hwr_training_instruct_pane

0xcce6,	// (0x0001ba29) list_single_hwr_training_instruct_pane_t1

0xc342,	// (0x0001b085) bg_frame_shadow_pane_g1

0xccf5,	// (0x0001ba38) bg_frame_shadow_pane_g2

0xccfd,	// (0x0001ba40) bg_frame_shadow_pane_g3

0xcd05,	// (0x0001ba48) bg_frame_shadow_pane_g4

0xcd0d,	// (0x0001ba50) bg_frame_shadow_pane_g5

0xcd15,	// (0x0001ba58) bg_frame_shadow_pane_g6

0xcd1d,	// (0x0001ba60) bg_frame_shadow_pane_g7

0x9daf,	// (0x00018af2) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001e5bd) bg_frame_shadow_pane_g

0x94ff,	// (0x00018242) main_video_tele_dialer_pane

0x5362,	// (0x000140a5) aid_size_cell_video_keypad_ParamLimits

0x5362,	// (0x000140a5) aid_size_cell_video_keypad

0x537c,	// (0x000140bf) grid_video_dialer_keypad_pane_ParamLimits

0x537c,	// (0x000140bf) grid_video_dialer_keypad_pane

0x53c8,	// (0x0001410b) video_down_pane_cp_ParamLimits

0x53c8,	// (0x0001410b) video_down_pane_cp

0x53fa,	// (0x0001413d) cell_video_dialer_keypad_pane_ParamLimits

0x53fa,	// (0x0001413d) cell_video_dialer_keypad_pane

0xcd25,	// (0x0001ba68) bg_button_pane_cp08_ParamLimits

0xcd25,	// (0x0001ba68) bg_button_pane_cp08

0x541c,	// (0x0001415f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x541c,	// (0x0001415f) cell_video_dialer_keypad_pane_g1

0x4acd,	// (0x00013810) mup3_rocker2_pane_ParamLimits

0x4acd,	// (0x00013810) mup3_rocker2_pane

0xc402,	// (0x0001b145) mup3_rocker2_pane_g1

0x35ce,	// (0x00012311) main_dialer2_pane

0x94ff,	// (0x00018242) main_mp4_pane

0xcd39,	// (0x0001ba7c) main_mp4_pane_g1_ParamLimits

0xcd39,	// (0x0001ba7c) main_mp4_pane_g1

0xcd39,	// (0x0001ba7c) main_mp4_pane_g2_ParamLimits

0xcd39,	// (0x0001ba7c) main_mp4_pane_g2

0x5453,	// (0x00014196) main_mp4_pane_g3_ParamLimits

0x5453,	// (0x00014196) main_mp4_pane_g3

0xcd47,	// (0x0001ba8a) main_mp4_pane_g4_ParamLimits

0xcd47,	// (0x0001ba8a) main_mp4_pane_g4

0xcd6f,	// (0x0001bab2) main_mp4_pane_g5_ParamLimits

0xcd6f,	// (0x0001bab2) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001e5dd) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001e5dd) main_mp4_pane_g

0xcdbf,	// (0x0001bb02) main_mp4_pane_t1_ParamLimits

0xcdbf,	// (0x0001bb02) main_mp4_pane_t1

0xce1b,	// (0x0001bb5e) main_mp4_pane_t2_ParamLimits

0xce1b,	// (0x0001bb5e) main_mp4_pane_t2

0xce6d,	// (0x0001bbb0) main_mp4_pane_t3_ParamLimits

0xce6d,	// (0x0001bbb0) main_mp4_pane_t3

0xce8d,	// (0x0001bbd0) main_mp4_pane_t4_ParamLimits

0xce8d,	// (0x0001bbd0) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e5ea) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e5ea) main_mp4_pane_t

0xced1,	// (0x0001bc14) mp4_progress_pane_ParamLimits

0xced1,	// (0x0001bc14) mp4_progress_pane

0xcf1b,	// (0x0001bc5e) mp4_rocker_pane_ParamLimits

0xcf1b,	// (0x0001bc5e) mp4_rocker_pane

0xcf43,	// (0x0001bc86) mp4_progress_pane_t1

0xcf5c,	// (0x0001bc9f) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e5f3) mp4_progress_pane_t

0xcf75,	// (0x0001bcb8) mup_progress_pane_cp04

0xc402,	// (0x0001b145) mp4_rocker_pane_g1

0x548f,	// (0x000141d2) aid_cell_size_keypad2_ParamLimits

0x548f,	// (0x000141d2) aid_cell_size_keypad2

0x54a5,	// (0x000141e8) dialer2_ne_pane_ParamLimits

0x54a5,	// (0x000141e8) dialer2_ne_pane

0x54bf,	// (0x00014202) grid_dialer2_keypad_pane_ParamLimits

0x54bf,	// (0x00014202) grid_dialer2_keypad_pane

0xc1e7,	// (0x0001af2a) bg_popup_call_pane_cp07_ParamLimits

0xc1e7,	// (0x0001af2a) bg_popup_call_pane_cp07

0x54db,	// (0x0001421e) dialer2_ne_pane_t1_ParamLimits

0x54db,	// (0x0001421e) dialer2_ne_pane_t1

0x5516,	// (0x00014259) cell_dialer2_keypad_pane_ParamLimits

0x5516,	// (0x00014259) cell_dialer2_keypad_pane

0xcf93,	// (0x0001bcd6) bg_button_pane_pane_cp04_ParamLimits

0xcf93,	// (0x0001bcd6) bg_button_pane_pane_cp04

0x5538,	// (0x0001427b) cell_dialer2_keypad_pane_g1_ParamLimits

0x5538,	// (0x0001427b) cell_dialer2_keypad_pane_g1

0x13b3,	// (0x000100f6) aid_placing_vt_set_content_ParamLimits

0x13b3,	// (0x000100f6) aid_placing_vt_set_content

0x13db,	// (0x0001011e) aid_placing_vt_set_title_ParamLimits

0x13db,	// (0x0001011e) aid_placing_vt_set_title

0x94ff,	// (0x00018242) main_image3_pane

0x55fe,	// (0x00014341) area_side_right_pane_cp01_ParamLimits

0x55fe,	// (0x00014341) area_side_right_pane_cp01

0xcd39,	// (0x0001ba7c) main_image3_pane_g1_ParamLimits

0xcd39,	// (0x0001ba7c) main_image3_pane_g1

0x5615,	// (0x00014358) main_image3_pane_g2_ParamLimits

0x5615,	// (0x00014358) main_image3_pane_g2

0x563d,	// (0x00014380) main_image3_pane_g3_ParamLimits

0x563d,	// (0x00014380) main_image3_pane_g3

0x5667,	// (0x000143aa) main_image3_pane_g4_ParamLimits

0x5667,	// (0x000143aa) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e602) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e602) main_image3_pane_g

0x5691,	// (0x000143d4) main_image3_pane_t1_ParamLimits

0x5691,	// (0x000143d4) main_image3_pane_t1

0x56e9,	// (0x0001442c) main_image3_pane_t2_ParamLimits

0x56e9,	// (0x0001442c) main_image3_pane_t2

0x573b,	// (0x0001447e) main_image3_pane_t3_ParamLimits

0x573b,	// (0x0001447e) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e60b) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e60b) main_image3_pane_t

0x956f,	// (0x000182b2) grid_sctrl_middle_pane_cp01_ParamLimits

0x956f,	// (0x000182b2) grid_sctrl_middle_pane_cp01

0x57c3,	// (0x00014506) cell_sctrl_middle_pane_cp01_ParamLimits

0x57c3,	// (0x00014506) cell_sctrl_middle_pane_cp01

0x57e0,	// (0x00014523) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57e0,	// (0x00014523) cell_sctrl_middle_pane_cp01_g1

0x94ff,	// (0x00018242) main_call4_pane

0x57f6,	// (0x00014539) aid_size_button_call4_ParamLimits

0x57f6,	// (0x00014539) aid_size_button_call4

0x5827,	// (0x0001456a) call4_windows_pane_ParamLimits

0x5827,	// (0x0001456a) call4_windows_pane

0x5847,	// (0x0001458a) grid_call4_button_pane_ParamLimits

0x5847,	// (0x0001458a) grid_call4_button_pane

0xcfd1,	// (0x0001bd14) call4_windows_conf_pane

0xcfe8,	// (0x0001bd2b) popup_call4_audio_first_window_ParamLimits

0xcfe8,	// (0x0001bd2b) popup_call4_audio_first_window

0xd034,	// (0x0001bd77) popup_call4_audio_second_window_ParamLimits

0xd034,	// (0x0001bd77) popup_call4_audio_second_window

0xd048,	// (0x0001bd8b) popup_call4_audio_wait_window_ParamLimits

0xd048,	// (0x0001bd8b) popup_call4_audio_wait_window

0x5874,	// (0x000145b7) cell_call4_button_pane_ParamLimits

0x5874,	// (0x000145b7) cell_call4_button_pane

0x589d,	// (0x000145e0) bg_button_pane_cp09_ParamLimits

0x589d,	// (0x000145e0) bg_button_pane_cp09

0x58a9,	// (0x000145ec) cell_call4_button_pane_g1_ParamLimits

0x58a9,	// (0x000145ec) cell_call4_button_pane_g1

0x58cf,	// (0x00014612) cell_call4_button_pane_t1_ParamLimits

0x58cf,	// (0x00014612) cell_call4_button_pane_t1

0xd090,	// (0x0001bdd3) popup_call4_audio_conf_window_ParamLimits

0xd090,	// (0x0001bdd3) popup_call4_audio_conf_window

0x4b2d,	// (0x00013870) mup3_progress_pane_t1_ParamLimits

0x4b4c,	// (0x0001388f) mup3_progress_pane_t2_ParamLimits

0xc715,	// (0x0001b458) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001e4df) mup3_progress_pane_t_ParamLimits

0xc732,	// (0x0001b475) mup_progress_pane_cp03_ParamLimits

0x512c,	// (0x00013e6f) mup3_control_keys_pane_g4_copy1

0xceff,	// (0x0001bc42) mp4_rocker2_pane_ParamLimits

0xceff,	// (0x0001bc42) mp4_rocker2_pane

0xd0a4,	// (0x0001bde7) mp4_rocker2_pane_g1

0xd0ac,	// (0x0001bdef) mp4_rocker2_pane_g2

0xd0b4,	// (0x0001bdf7) mp4_rocker2_pane_g3

0xd0bc,	// (0x0001bdff) mp4_rocker2_pane_g4

0xd0c4,	// (0x0001be07) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e614) mp4_rocker2_pane_g

0x94ff,	// (0x00018242) main_camera4_pane

0x94ff,	// (0x00018242) main_video4_pane

0x5396,	// (0x000140d9) main_video_tele_dialer_pane_t1_ParamLimits

0x5396,	// (0x000140d9) main_video_tele_dialer_pane_t1

0x53af,	// (0x000140f2) main_video_tele_dialer_pane_t2_ParamLimits

0x53af,	// (0x000140f2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001e5ce) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001e5ce) main_video_tele_dialer_pane_t

0x590d,	// (0x00014650) cam4_autofocus_pane_ParamLimits

0x590d,	// (0x00014650) cam4_autofocus_pane

0x5923,	// (0x00014666) cam4_image_uncrop_pane_ParamLimits

0x5923,	// (0x00014666) cam4_image_uncrop_pane

0x593d,	// (0x00014680) cam4_indicators_pane_ParamLimits

0x593d,	// (0x00014680) cam4_indicators_pane

0x5968,	// (0x000146ab) main_camera4_pane_g1_ParamLimits

0x5968,	// (0x000146ab) main_camera4_pane_g1

0x597a,	// (0x000146bd) main_camera4_pane_g2_ParamLimits

0x597a,	// (0x000146bd) main_camera4_pane_g2

0x598d,	// (0x000146d0) main_camera4_pane_g3_ParamLimits

0x598d,	// (0x000146d0) main_camera4_pane_g3

0x59a0,	// (0x000146e3) main_camera4_pane_g4_ParamLimits

0x59a0,	// (0x000146e3) main_camera4_pane_g4

0x59b3,	// (0x000146f6) main_camera4_pane_g5_ParamLimits

0x59b3,	// (0x000146f6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001e61f) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001e61f) main_camera4_pane_g

0x59d7,	// (0x0001471a) main_camera4_pane_t1_ParamLimits

0x59d7,	// (0x0001471a) main_camera4_pane_t1

0xc66e,	// (0x0001b3b1) bg_tb_trans_pane_cp06

0xd0f0,	// (0x0001be33) cam4_indicators_pane_g1

0xd101,	// (0x0001be44) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001e63a) cam4_indicators_pane_g

0xd11f,	// (0x0001be62) cam4_indicators_pane_t1

0x5a3b,	// (0x0001477e) main_video4_pane_g1_ParamLimits

0x5a3b,	// (0x0001477e) main_video4_pane_g1

0x5a4a,	// (0x0001478d) main_video4_pane_g2_ParamLimits

0x5a4a,	// (0x0001478d) main_video4_pane_g2

0x5a59,	// (0x0001479c) main_video4_pane_g3_ParamLimits

0x5a59,	// (0x0001479c) main_video4_pane_g3

0x5a68,	// (0x000147ab) main_video4_pane_g4_ParamLimits

0x5a68,	// (0x000147ab) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001e641) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001e641) main_video4_pane_g

0x5a86,	// (0x000147c9) vid4_indicators_pane_ParamLimits

0x5a86,	// (0x000147c9) vid4_indicators_pane

0x5ab4,	// (0x000147f7) video4_image_uncrop_cif_pane_ParamLimits

0x5ab4,	// (0x000147f7) video4_image_uncrop_cif_pane

0x5ace,	// (0x00014811) video4_image_uncrop_nhd_pane_ParamLimits

0x5ace,	// (0x00014811) video4_image_uncrop_nhd_pane

0x5923,	// (0x00014666) video4_image_uncrop_vga_pane_ParamLimits

0x5923,	// (0x00014666) video4_image_uncrop_vga_pane

0x956f,	// (0x000182b2) bg_tb_trans_pane_cp07

0xd14b,	// (0x0001be8e) vid4_indicators_pane_g1

0xd15f,	// (0x0001bea2) vid4_indicators_pane_g2

0xd173,	// (0x0001beb6) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001e64c) vid4_indicators_pane_g

0xd1a2,	// (0x0001bee5) vid4_indicators_pane_t1

0x5ae2,	// (0x00014825) cam4_autofocus_pane_g1

0x5aea,	// (0x0001482d) cam4_autofocus_pane_g2

0x5af2,	// (0x00014835) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001e657) cam4_autofocus_pane_g

0x5afa,	// (0x0001483d) cam4_autofocus_pane_g3_copy1

0x53de,	// (0x00014121) video_down_pane_cp_t1

0x53ec,	// (0x0001412f) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001e5d3) video_down_pane_cp_t

0x956f,	// (0x000182b2) popup_vitu2_window_ParamLimits

0x956f,	// (0x000182b2) popup_vitu2_window

0x5b02,	// (0x00014845) aid_size_cell2_itu2_ParamLimits

0x5b02,	// (0x00014845) aid_size_cell2_itu2

0x5b28,	// (0x0001486b) aid_size_cell_itu2_ParamLimits

0x5b28,	// (0x0001486b) aid_size_cell_itu2

0x5b84,	// (0x000148c7) bg_popup_window_pane_cp09_ParamLimits

0x5b84,	// (0x000148c7) bg_popup_window_pane_cp09

0x5b92,	// (0x000148d5) field_vitu2_entry_pane_ParamLimits

0x5b92,	// (0x000148d5) field_vitu2_entry_pane

0x5bb8,	// (0x000148fb) grid_vitu2_function_pane_ParamLimits

0x5bb8,	// (0x000148fb) grid_vitu2_function_pane

0x5c09,	// (0x0001494c) grid_vitu2_itu_pane_ParamLimits

0x5c09,	// (0x0001494c) grid_vitu2_itu_pane

0x5ca1,	// (0x000149e4) cell_vitu2_itu_pane_ParamLimits

0x5ca1,	// (0x000149e4) cell_vitu2_itu_pane

0x5ccd,	// (0x00014a10) cell_vitu2_function_pane_ParamLimits

0x5ccd,	// (0x00014a10) cell_vitu2_function_pane

0xd1b9,	// (0x0001befc) bg_popup_call_pane_cp08_ParamLimits

0xd1b9,	// (0x0001befc) bg_popup_call_pane_cp08

0xd1d0,	// (0x0001bf13) field_vitu2_entry_pane_g1

0xd1dc,	// (0x0001bf1f) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001e65e) field_vitu2_entry_pane_g

0x5d0c,	// (0x00014a4f) field_vitu2_entry_pane_t1_ParamLimits

0x5d0c,	// (0x00014a4f) field_vitu2_entry_pane_t1

0xd1f6,	// (0x0001bf39) field_vitu2_entry_pane_t2_ParamLimits

0xd1f6,	// (0x0001bf39) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001e665) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001e665) field_vitu2_entry_pane_t

0x5d3b,	// (0x00014a7e) bg_button_pane_cp010_ParamLimits

0x5d3b,	// (0x00014a7e) bg_button_pane_cp010

0xd21b,	// (0x0001bf5e) cell_vitu2_itu_pane_g1

0x5d57,	// (0x00014a9a) cell_vitu2_itu_pane_t1_ParamLimits

0x5d57,	// (0x00014a9a) cell_vitu2_itu_pane_t1

0x5db5,	// (0x00014af8) cell_vitu2_itu_pane_t2_ParamLimits

0x5db5,	// (0x00014af8) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001e66f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001e66f) cell_vitu2_itu_pane_t

0x956f,	// (0x000182b2) bg_button_pane_cp011

0x5ea1,	// (0x00014be4) cell_vitu2_function_pane_g1

0x94ff,	// (0x00018242) main_myfav_hc_pane

0x578b,	// (0x000144ce) popup_image3_note_pane_ParamLimits

0x578b,	// (0x000144ce) popup_image3_note_pane

0x57a7,	// (0x000144ea) popup_image3_tool_bar_pane_ParamLimits

0x57a7,	// (0x000144ea) popup_image3_tool_bar_pane

0x5e43,	// (0x00014b86) cell_vitu2_itu_pane_t3_ParamLimits

0x5e43,	// (0x00014b86) cell_vitu2_itu_pane_t3

0x94ff,	// (0x00018242) bg_popup_trans_pane

0xd22d,	// (0x0001bf70) grid_image3_tool_bar_pane

0xd237,	// (0x0001bf7a) bg_popup_trans_pane_g1

0xa166,	// (0x00018ea9) bg_popup_trans_pane_g2

0xd23f,	// (0x0001bf82) bg_popup_trans_pane_g3

0xd247,	// (0x0001bf8a) bg_popup_trans_pane_g4

0xd24f,	// (0x0001bf92) bg_popup_trans_pane_g5

0xd257,	// (0x0001bf9a) bg_popup_trans_pane_g6

0xd25f,	// (0x0001bfa2) bg_popup_trans_pane_g7

0xd267,	// (0x0001bfaa) bg_popup_trans_pane_g8

0xa146,	// (0x00018e89) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001e676) bg_popup_trans_pane_g

0xd26f,	// (0x0001bfb2) cell_image3_tool_bar_pane_ParamLimits

0xd26f,	// (0x0001bfb2) cell_image3_tool_bar_pane

0xc402,	// (0x0001b145) cell_image3_tool_bar_pane_g1

0x94ff,	// (0x00018242) bg_popup_trans_pane_cp1

0xd283,	// (0x0001bfc6) popup_image3_note_pane_t1

0xd291,	// (0x0001bfd4) popup_image3_note_pane_t2

0xd29f,	// (0x0001bfe2) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001e689) popup_image3_note_pane_t

0xd2ad,	// (0x0001bff0) popup_image3_note_pane_t3_copy1

0x5eb5,	// (0x00014bf8) bg_myfav_hc_instruction_pane_ParamLimits

0x5eb5,	// (0x00014bf8) bg_myfav_hc_instruction_pane

0x5ec9,	// (0x00014c0c) cell_myfav_contact_pane_ParamLimits

0x5ec9,	// (0x00014c0c) cell_myfav_contact_pane

0x5ee7,	// (0x00014c2a) cell_myfav_contact_pane_cp1_ParamLimits

0x5ee7,	// (0x00014c2a) cell_myfav_contact_pane_cp1

0x5eff,	// (0x00014c42) cell_myfav_contact_pane_cp2_ParamLimits

0x5eff,	// (0x00014c42) cell_myfav_contact_pane_cp2

0x5f17,	// (0x00014c5a) cell_myfav_contact_pane_cp3_ParamLimits

0x5f17,	// (0x00014c5a) cell_myfav_contact_pane_cp3

0x5f2e,	// (0x00014c71) cell_myfav_contact_pane_cp4_ParamLimits

0x5f2e,	// (0x00014c71) cell_myfav_contact_pane_cp4

0x5f46,	// (0x00014c89) cell_myfav_contact_pane_cp5_ParamLimits

0x5f46,	// (0x00014c89) cell_myfav_contact_pane_cp5

0x5f5a,	// (0x00014c9d) cell_myfav_contact_pane_cp6_ParamLimits

0x5f5a,	// (0x00014c9d) cell_myfav_contact_pane_cp6

0x5f70,	// (0x00014cb3) cell_myfav_contact_pane_cp7_ParamLimits

0x5f70,	// (0x00014cb3) cell_myfav_contact_pane_cp7

0xd2bb,	// (0x0001bffe) listscroll_gen_pane_cp05

0x5f8a,	// (0x00014ccd) main_myfav_hc_pane_g1_ParamLimits

0x5f8a,	// (0x00014ccd) main_myfav_hc_pane_g1

0x5fa4,	// (0x00014ce7) main_myfav_hc_pane_g2_ParamLimits

0x5fa4,	// (0x00014ce7) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001e690) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001e690) main_myfav_hc_pane_g

0x5fd6,	// (0x00014d19) main_myfav_hc_pane_t1_ParamLimits

0x5fd6,	// (0x00014d19) main_myfav_hc_pane_t1

0xd2c4,	// (0x0001c007) main_myfav_hc_pane_t2_ParamLimits

0xd2c4,	// (0x0001c007) main_myfav_hc_pane_t2

0xd30c,	// (0x0001c04f) main_myfav_hc_pane_t3_ParamLimits

0xd30c,	// (0x0001c04f) main_myfav_hc_pane_t3

0x5fed,	// (0x00014d30) main_myfav_hc_pane_t4_ParamLimits

0x5fed,	// (0x00014d30) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001e697) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001e697) main_myfav_hc_pane_t

0xc402,	// (0x0001b145) bg_myfav_hc_instruction_pane_g1

0xd31e,	// (0x0001c061) cell_myfav_contact_pane_g1_ParamLimits

0xd31e,	// (0x0001c061) cell_myfav_contact_pane_g1

0xd31e,	// (0x0001c061) cell_myfav_contact_pane_g2_ParamLimits

0xd31e,	// (0x0001c061) cell_myfav_contact_pane_g2

0xd32a,	// (0x0001c06d) cell_myfav_contact_pane_g3_ParamLimits

0xd32a,	// (0x0001c06d) cell_myfav_contact_pane_g3

0xc6ff,	// (0x0001b442) cell_myfav_contact_pane_g4_ParamLimits

0xc6ff,	// (0x0001b442) cell_myfav_contact_pane_g4

0xd337,	// (0x0001c07a) cell_myfav_contact_pane_g5_ParamLimits

0xd337,	// (0x0001c07a) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001e6a2) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001e6a2) cell_myfav_contact_pane_g

0x5fbe,	// (0x00014d01) main_myfav_hc_pane_g3_ParamLimits

0x5fbe,	// (0x00014d01) main_myfav_hc_pane_g3

0x03df,	// (0x0000f122) popup_adpt_find_window

0x6015,	// (0x00014d58) afind_page_pane_ParamLimits

0x6015,	// (0x00014d58) afind_page_pane

0x602a,	// (0x00014d6d) aid_size_cell_afind_ParamLimits

0x602a,	// (0x00014d6d) aid_size_cell_afind

0x6048,	// (0x00014d8b) bg_popup_sub_pane_cp09_ParamLimits

0x6048,	// (0x00014d8b) bg_popup_sub_pane_cp09

0x6055,	// (0x00014d98) find_pane_cp01_ParamLimits

0x6055,	// (0x00014d98) find_pane_cp01

0xd343,	// (0x0001c086) grid_afind_control_pane_ParamLimits

0xd343,	// (0x0001c086) grid_afind_control_pane

0x6062,	// (0x00014da5) grid_afind_pane_ParamLimits

0x6062,	// (0x00014da5) grid_afind_pane

0x6084,	// (0x00014dc7) cell_afind_pane_ParamLimits

0x6084,	// (0x00014dc7) cell_afind_pane

0xc402,	// (0x0001b145) afind_page_pane_g1

0x60eb,	// (0x00014e2e) afind_page_pane_g2

0x60f4,	// (0x00014e37) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001e6ad) afind_page_pane_g

0x60fd,	// (0x00014e40) afind_page_pane_t1

0xd357,	// (0x0001c09a) cell_afind_grid_control_pane_ParamLimits

0xd357,	// (0x0001c09a) cell_afind_grid_control_pane

0xcf93,	// (0x0001bcd6) bg_button_pane_cp69_ParamLimits

0xcf93,	// (0x0001bcd6) bg_button_pane_cp69

0x611d,	// (0x00014e60) cell_afind_pane_g1_ParamLimits

0x611d,	// (0x00014e60) cell_afind_pane_g1

0x612a,	// (0x00014e6d) cell_afind_pane_t1_ParamLimits

0x612a,	// (0x00014e6d) cell_afind_pane_t1

0x9f5f,	// (0x00018ca2) bg_button_pane_cp72

0xd366,	// (0x0001c0a9) cell_afind_grid_control_pane_g1

0x308e,	// (0x00011dd1) aid_image_placing_area_ParamLimits

0x308e,	// (0x00011dd1) aid_image_placing_area

0xca28,	// (0x0001b76b) field_vitu_entry_pane_g1_ParamLimits

0xca28,	// (0x0001b76b) field_vitu_entry_pane_g1

0xca34,	// (0x0001b777) field_vitu_entry_pane_g2_ParamLimits

0xca34,	// (0x0001b777) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e55e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e55e) field_vitu_entry_pane_g

0x51f3,	// (0x00013f36) cell_vitu_itu_pane_g1_ParamLimits

0x5235,	// (0x00013f78) cell_vitu_itu_pane_t3_ParamLimits

0x5235,	// (0x00013f78) cell_vitu_itu_pane_t3

0xcf43,	// (0x0001bc86) mp4_progress_pane_t1_ParamLimits

0xcf5c,	// (0x0001bc9f) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e5f3) mp4_progress_pane_t_ParamLimits

0xcf75,	// (0x0001bcb8) mup_progress_pane_cp04_ParamLimits

0x6001,	// (0x00014d44) main_myfav_hc_pane_t5_ParamLimits

0x6001,	// (0x00014d44) main_myfav_hc_pane_t5

0x9525,	// (0x00018268) aid_zoom_text_primary

0x03df,	// (0x0000f122) popup_adpt_find_window_ParamLimits

0x956f,	// (0x000182b2) main_cam_set_pane

0x5954,	// (0x00014697) cam4_zoom_pane_ParamLimits

0x5954,	// (0x00014697) cam4_zoom_pane

0x613c,	// (0x00014e7f) main_cam_set_pane_g1_ParamLimits

0x613c,	// (0x00014e7f) main_cam_set_pane_g1

0x614a,	// (0x00014e8d) main_cam_set_pane_g2_ParamLimits

0x614a,	// (0x00014e8d) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001e6b4) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001e6b4) main_cam_set_pane_g

0x616b,	// (0x00014eae) main_cam_set_pane_t1_ParamLimits

0x616b,	// (0x00014eae) main_cam_set_pane_t1

0x6186,	// (0x00014ec9) main_cset_listscroll_pane_ParamLimits

0x6186,	// (0x00014ec9) main_cset_listscroll_pane

0x61a6,	// (0x00014ee9) main_cset_slider_pane_ParamLimits

0x61a6,	// (0x00014ee9) main_cset_slider_pane

0xd377,	// (0x0001c0ba) main_cset_list_pane_ParamLimits

0xd377,	// (0x0001c0ba) main_cset_list_pane

0xd387,	// (0x0001c0ca) scroll_pane_cp028

0x61cc,	// (0x00014f0f) aid_area_touch_slider

0x61e8,	// (0x00014f2b) cset_slider_pane

0x6212,	// (0x00014f55) main_cset_slider_pane_g1

0x6227,	// (0x00014f6a) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001e6b9) main_cset_slider_pane_g

0xd3c0,	// (0x0001c103) main_cset_slider_pane_t1

0x62e3,	// (0x00015026) main_cset_slider_pane_t2

0x62fd,	// (0x00015040) main_cset_slider_pane_t3

0x6317,	// (0x0001505a) main_cset_slider_pane_t4

0x6331,	// (0x00015074) main_cset_slider_pane_t5

0x634b,	// (0x0001508e) main_cset_slider_pane_t6

0x6360,	// (0x000150a3) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001e6de) main_cset_slider_pane_t

0x6464,	// (0x000151a7) cset_list_set_pane_ParamLimits

0x6464,	// (0x000151a7) cset_list_set_pane

0x6476,	// (0x000151b9) aid_position_infowindow_above

0x647e,	// (0x000151c1) aid_position_infowindow_below

0xd460,	// (0x0001c1a3) cset_list_set_pane_g1_ParamLimits

0xd460,	// (0x0001c1a3) cset_list_set_pane_g1

0xd46c,	// (0x0001c1af) cset_list_set_pane_g3_ParamLimits

0xd46c,	// (0x0001c1af) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001e6fd) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001e6fd) cset_list_set_pane_g

0xd47b,	// (0x0001c1be) cset_list_set_pane_t1_ParamLimits

0xd47b,	// (0x0001c1be) cset_list_set_pane_t1

0x956f,	// (0x000182b2) list_highlight_pane_cp021_ParamLimits

0x956f,	// (0x000182b2) list_highlight_pane_cp021

0xab62,	// (0x000198a5) cset_slider_pane_g1

0xab74,	// (0x000198b7) cset_slider_pane_g2

0xab6b,	// (0x000198ae) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001e702) cset_slider_pane_g

0xd490,	// (0x0001c1d3) aid_area_touch_cam4_zoom

0xd498,	// (0x0001c1db) cam4_zoom_cont_pane

0xd4a0,	// (0x0001c1e3) cam4_zoom_pane_g1

0xd4a8,	// (0x0001c1eb) cam4_zoom_pane_g2

0x6486,	// (0x000151c9) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001e709) cam4_zoom_pane_g

0xd4b0,	// (0x0001c1f3) cam4_zoom_cont_pane_g1

0xd4b9,	// (0x0001c1fc) cam4_zoom_cont_pane_g2

0xd4c2,	// (0x0001c205) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001e710) cam4_zoom_cont_pane_g

0x5814,	// (0x00014557) call4_image_pane_ParamLimits

0x5814,	// (0x00014557) call4_image_pane

0xcfd1,	// (0x0001bd14) call4_windows_conf_pane_ParamLimits

0xd012,	// (0x0001bd55) popup_call4_audio_in_window_ParamLimits

0xd012,	// (0x0001bd55) popup_call4_audio_in_window

0x94ff,	// (0x00018242) bg_popup_call2_act_pane_cp02

0xd088,	// (0x0001bdcb) call4_list_conf_pane

0xc402,	// (0x0001b145) call4_image_pane_g1

0xc402,	// (0x0001b145) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001e41f) call4_image_pane_g

0xd4cb,	// (0x0001c20e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4cb,	// (0x0001c20e) list_single_graphic_popup_conf4_pane

0x94ff,	// (0x00018242) list_highlight_pane_cp022

0xd4de,	// (0x0001c221) list_single_graphic_popup_conf4_pane_g1

0xa721,	// (0x00019464) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001e717) list_single_graphic_popup_conf4_pane_g

0xd4e6,	// (0x0001c229) list_single_graphic_popup_conf4_pane_t1

0x14ff,	// (0x00010242) popup_vtel_slider_window_ParamLimits

0x14ff,	// (0x00010242) popup_vtel_slider_window

0xcf81,	// (0x0001bcc4) dialer2_ne_pane_t2_ParamLimits

0xcf81,	// (0x0001bcc4) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e5f8) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e5f8) dialer2_ne_pane_t

0xc1e7,	// (0x0001af2a) bg_popup_sub_pane_cp010_ParamLimits

0xc1e7,	// (0x0001af2a) bg_popup_sub_pane_cp010

0x648e,	// (0x000151d1) popup_vtel_slider_window_g1_ParamLimits

0x648e,	// (0x000151d1) popup_vtel_slider_window_g1

0x64a1,	// (0x000151e4) popup_vtel_slider_window_g2_ParamLimits

0x64a1,	// (0x000151e4) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001e71c) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001e71c) popup_vtel_slider_window_g

0x64f7,	// (0x0001523a) vtel_slider_pane_ParamLimits

0x64f7,	// (0x0001523a) vtel_slider_pane

0x6519,	// (0x0001525c) vtel_slider_pane_g1_ParamLimits

0x6519,	// (0x0001525c) vtel_slider_pane_g1

0x652d,	// (0x00015270) vtel_slider_pane_g2_ParamLimits

0x652d,	// (0x00015270) vtel_slider_pane_g2

0x6545,	// (0x00015288) vtel_slider_pane_g3_ParamLimits

0x6545,	// (0x00015288) vtel_slider_pane_g3

0x6519,	// (0x0001525c) vtel_slider_pane_g4_ParamLimits

0x6519,	// (0x0001525c) vtel_slider_pane_g4

0x655b,	// (0x0001529e) vtel_slider_pane_g5_ParamLimits

0x655b,	// (0x0001529e) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001e725) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001e725) vtel_slider_pane_g

0x956f,	// (0x000182b2) main_gallery2_pane

0x5b54,	// (0x00014897) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b54,	// (0x00014897) aid_size_row_itut2_dropdow_list

0x5be0,	// (0x00014923) grid_vitu2_function_top_pane_ParamLimits

0x5be0,	// (0x00014923) grid_vitu2_function_top_pane

0x5c4a,	// (0x0001498d) popup_vitu2_dropdown_list_window_ParamLimits

0x5c4a,	// (0x0001498d) popup_vitu2_dropdown_list_window

0x5c73,	// (0x000149b6) popup_vitu2_match_list_window

0x657f,	// (0x000152c2) cell_vitu2_function_top_pane_ParamLimits

0x657f,	// (0x000152c2) cell_vitu2_function_top_pane

0x6597,	// (0x000152da) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6597,	// (0x000152da) cell_vitu2_function_top_pane_cp01

0x65b3,	// (0x000152f6) cell_vitu2_function_top_wide_pane_ParamLimits

0x65b3,	// (0x000152f6) cell_vitu2_function_top_wide_pane

0x956f,	// (0x000182b2) bg_button_pane_cp012

0x65cf,	// (0x00015312) cell_vitu2_function_top_pane_g1

0xd4fc,	// (0x0001c23f) bg_button_pane_cp013_ParamLimits

0xd4fc,	// (0x0001c23f) bg_button_pane_cp013

0x65e3,	// (0x00015326) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65e3,	// (0x00015326) cell_vitu2_function_top_wide_pane_g1

0x956f,	// (0x000182b2) bg_popup_sub_pane_cp20

0x65fb,	// (0x0001533e) list_vitu2_match_list_pane

0xd237,	// (0x0001bf7a) bg_popup_sub_pane_cp20_g1

0xd23f,	// (0x0001bf82) bg_popup_sub_pane_cp20_g2

0xa166,	// (0x00018ea9) bg_popup_sub_pane_cp20_g3

0xd247,	// (0x0001bf8a) bg_popup_sub_pane_cp20_g4

0xa146,	// (0x00018e89) bg_popup_sub_pane_cp20_g5

0xd518,	// (0x0001c25b) bg_popup_sub_pane_cp20_g6

0xd257,	// (0x0001bf9a) bg_popup_sub_pane_cp20_g7

0xd25f,	// (0x0001bfa2) bg_popup_sub_pane_cp20_g8

0xd267,	// (0x0001bfaa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001e730) bg_popup_sub_pane_cp20_g

0xd520,	// (0x0001c263) list_vitu2_match_list_item_pane_ParamLimits

0xd520,	// (0x0001c263) list_vitu2_match_list_item_pane

0xd532,	// (0x0001c275) list_vitu2_match_list_item_pane_t1

0x94ff,	// (0x00018242) bg_popup_sub_pane_cp21

0xa5d6,	// (0x00019319) grid_vitu2_dropdown_list_pane

0x6669,	// (0x000153ac) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6669,	// (0x000153ac) cell_vitu2_dropdown_list_char_pane

0x668a,	// (0x000153cd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x668a,	// (0x000153cd) cell_vitu2_dropdown_list_ctrl_pane

0xd540,	// (0x0001c283) cell_vitu2_dropdown_list_char_pane_g1

0xd549,	// (0x0001c28c) cell_vitu2_dropdown_list_char_pane_g2

0xd552,	// (0x0001c295) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001e74d) cell_vitu2_dropdown_list_char_pane_g

0x66b6,	// (0x000153f9) cell_vitu2_dropdown_list_char_pane_t1

0x66c4,	// (0x00015407) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66c4,	// (0x00015407) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66d1,	// (0x00015414) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66d1,	// (0x00015414) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66de,	// (0x00015421) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66de,	// (0x00015421) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66eb,	// (0x0001542e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66eb,	// (0x0001542e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc66e,	// (0x0001b3b1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc66e,	// (0x0001b3b1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001e754) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001e754) cell_vitu2_dropdown_list_ctrl_pane_g

0x6707,	// (0x0001544a) aid_size_cell_gallery2_ParamLimits

0x6707,	// (0x0001544a) aid_size_cell_gallery2

0x6725,	// (0x00015468) grid_gallery2_pane_ParamLimits

0x6725,	// (0x00015468) grid_gallery2_pane

0x673f,	// (0x00015482) scroll_pane_cp029_ParamLimits

0x673f,	// (0x00015482) scroll_pane_cp029

0x674b,	// (0x0001548e) cell_gallery2_pane_ParamLimits

0x674b,	// (0x0001548e) cell_gallery2_pane

0xd55b,	// (0x0001c29e) cell_gallery2_pane_g2

0x67a7,	// (0x000154ea) cell_gallery2_pane_g3

0xd563,	// (0x0001c2a6) cell_gallery2_pane_g4

0xd56b,	// (0x0001c2ae) cell_gallery2_pane_g5

0x9f03,	// (0x00018c46) grid_highlight_pane_cp10

0x5c73,	// (0x000149b6) popup_vitu2_match_list_window_ParamLimits

0x5c8a,	// (0x000149cd) popup_vitu2_query_window_ParamLimits

0x5c8a,	// (0x000149cd) popup_vitu2_query_window

0x94ff,	// (0x00018242) bg_vitu2_candi_button_pane

0xd540,	// (0x0001c283) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd549,	// (0x0001c28c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd552,	// (0x0001c295) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67af,	// (0x000154f2) bg_button_pane_cp015

0x67c1,	// (0x00015504) bg_button_pane_cp016

0x67d4,	// (0x00015517) bg_button_pane_cp017

0xbee7,	// (0x0001ac2a) bg_popup_sub_pane_cp22

0xd573,	// (0x0001c2b6) popup_vitu2_query_window_g1

0x6819,	// (0x0001555c) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001e75f) popup_vitu2_query_window_g

0x6838,	// (0x0001557b) popup_vitu2_query_window_t1_ParamLimits

0x6838,	// (0x0001557b) popup_vitu2_query_window_t1

0x686d,	// (0x000155b0) popup_vitu2_query_window_t2_ParamLimits

0x686d,	// (0x000155b0) popup_vitu2_query_window_t2

0x687f,	// (0x000155c2) popup_vitu2_query_window_t3_ParamLimits

0x687f,	// (0x000155c2) popup_vitu2_query_window_t3

0x68a7,	// (0x000155ea) popup_vitu2_query_window_t4_ParamLimits

0x68a7,	// (0x000155ea) popup_vitu2_query_window_t4

0x68c8,	// (0x0001560b) popup_vitu2_query_window_t5_ParamLimits

0x68c8,	// (0x0001560b) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001e766) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001e766) popup_vitu2_query_window_t

0xd36f,	// (0x0001c0b2) main_cset_text_pane

0x61cc,	// (0x00014f0f) aid_area_touch_slider_ParamLimits

0x61e8,	// (0x00014f2b) cset_slider_pane_ParamLimits

0x6212,	// (0x00014f55) main_cset_slider_pane_g1_ParamLimits

0x6227,	// (0x00014f6a) main_cset_slider_pane_g2_ParamLimits

0xd390,	// (0x0001c0d3) main_cset_slider_pane_g3_ParamLimits

0xd390,	// (0x0001c0d3) main_cset_slider_pane_g3

0x623c,	// (0x00014f7f) main_cset_slider_pane_g4_ParamLimits

0x623c,	// (0x00014f7f) main_cset_slider_pane_g4

0x624b,	// (0x00014f8e) main_cset_slider_pane_g5_ParamLimits

0x624b,	// (0x00014f8e) main_cset_slider_pane_g5

0x6257,	// (0x00014f9a) main_cset_slider_pane_g6_ParamLimits

0x6257,	// (0x00014f9a) main_cset_slider_pane_g6

0xf976,	// (0x0001e6b9) main_cset_slider_pane_g_ParamLimits

0xd3c0,	// (0x0001c103) main_cset_slider_pane_t1_ParamLimits

0x62e3,	// (0x00015026) main_cset_slider_pane_t2_ParamLimits

0x62fd,	// (0x00015040) main_cset_slider_pane_t3_ParamLimits

0x6317,	// (0x0001505a) main_cset_slider_pane_t4_ParamLimits

0x6331,	// (0x00015074) main_cset_slider_pane_t5_ParamLimits

0x634b,	// (0x0001508e) main_cset_slider_pane_t6_ParamLimits

0x6360,	// (0x000150a3) main_cset_slider_pane_t7_ParamLimits

0x638a,	// (0x000150cd) main_cset_slider_pane_t8_ParamLimits

0x638a,	// (0x000150cd) main_cset_slider_pane_t8

0x63b2,	// (0x000150f5) main_cset_slider_pane_t9_ParamLimits

0x63b2,	// (0x000150f5) main_cset_slider_pane_t9

0x63da,	// (0x0001511d) main_cset_slider_pane_t10_ParamLimits

0x63da,	// (0x0001511d) main_cset_slider_pane_t10

0x6402,	// (0x00015145) main_cset_slider_pane_t11_ParamLimits

0x6402,	// (0x00015145) main_cset_slider_pane_t11

0x642a,	// (0x0001516d) main_cset_slider_pane_t12_ParamLimits

0x642a,	// (0x0001516d) main_cset_slider_pane_t12

0x6447,	// (0x0001518a) main_cset_slider_pane_t13_ParamLimits

0x6447,	// (0x0001518a) main_cset_slider_pane_t13

0xf99b,	// (0x0001e6de) main_cset_slider_pane_t_ParamLimits

0x94ff,	// (0x00018242) bg_popup_sub_pane_cp011

0xd57f,	// (0x0001c2c2) main_cset_text_pane_g1

0xd587,	// (0x0001c2ca) main_cset_text_pane_t1

0xd595,	// (0x0001c2d8) main_cset_text_pane_t2

0xd5a3,	// (0x0001c2e6) main_cset_text_pane_t3

0xd5b1,	// (0x0001c2f4) main_cset_text_pane_t4

0xd5bf,	// (0x0001c302) main_cset_text_pane_t5

0xd5cd,	// (0x0001c310) main_cset_text_pane_t6

0xd5db,	// (0x0001c31e) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001e775) main_cset_text_pane_t

0x94ff,	// (0x00018242) main_cam4_burst_pane

0x94ff,	// (0x00018242) main_cam5_pane

0x610b,	// (0x00014e4e) bg_button_pane_cp019

0x6114,	// (0x00014e57) bg_button_pane_cp020

0xd39c,	// (0x0001c0df) main_cset_slider_pane_g7_ParamLimits

0xd39c,	// (0x0001c0df) main_cset_slider_pane_g7

0xd3a8,	// (0x0001c0eb) main_cset_slider_pane_g8_ParamLimits

0xd3a8,	// (0x0001c0eb) main_cset_slider_pane_g8

0x626b,	// (0x00014fae) main_cset_slider_pane_g9_ParamLimits

0x626b,	// (0x00014fae) main_cset_slider_pane_g9

0x6277,	// (0x00014fba) main_cset_slider_pane_g10_ParamLimits

0x6277,	// (0x00014fba) main_cset_slider_pane_g10

0x6283,	// (0x00014fc6) main_cset_slider_pane_g11_ParamLimits

0x6283,	// (0x00014fc6) main_cset_slider_pane_g11

0x628f,	// (0x00014fd2) main_cset_slider_pane_g12_ParamLimits

0x628f,	// (0x00014fd2) main_cset_slider_pane_g12

0x629b,	// (0x00014fde) main_cset_slider_pane_g13_ParamLimits

0x629b,	// (0x00014fde) main_cset_slider_pane_g13

0x62a7,	// (0x00014fea) main_cset_slider_pane_g14_ParamLimits

0x62a7,	// (0x00014fea) main_cset_slider_pane_g14

0x62b3,	// (0x00014ff6) main_cset_slider_pane_g15_ParamLimits

0x62b3,	// (0x00014ff6) main_cset_slider_pane_g15

0xd3ee,	// (0x0001c131) main_cset_slider_pane_t14_ParamLimits

0xd3ee,	// (0x0001c131) main_cset_slider_pane_t14

0xd427,	// (0x0001c16a) main_cset_slider_pane_t15_ParamLimits

0xd427,	// (0x0001c16a) main_cset_slider_pane_t15

0x693f,	// (0x00015682) aid_cam4_burst_size_cell_ParamLimits

0x693f,	// (0x00015682) aid_cam4_burst_size_cell

0x695f,	// (0x000156a2) grid_cam4_burst_pane_ParamLimits

0x695f,	// (0x000156a2) grid_cam4_burst_pane

0x6997,	// (0x000156da) linegrid_cam4_burst_pane_ParamLimits

0x6997,	// (0x000156da) linegrid_cam4_burst_pane

0xd5e9,	// (0x0001c32c) scroll_pane_cp30_ParamLimits

0xd5e9,	// (0x0001c32c) scroll_pane_cp30

0x69bb,	// (0x000156fe) cell_cam4_burst_pane_ParamLimits

0x69bb,	// (0x000156fe) cell_cam4_burst_pane

0xd5f5,	// (0x0001c338) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5f5,	// (0x0001c338) linegrid_cam4_burst_pane_g1

0x6a08,	// (0x0001574b) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a08,	// (0x0001574b) linegrid_cam4_burst_pane_g2

0xd602,	// (0x0001c345) linegrid_cam4_burst_pane_g3_ParamLimits

0xd602,	// (0x0001c345) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001e784) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001e784) linegrid_cam4_burst_pane_g

0x6a19,	// (0x0001575c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a19,	// (0x0001575c) linegrid_cam4_burst_pane_g3_copy1

0xd60f,	// (0x0001c352) linegrid_cam4_burst_pane_g4_ParamLimits

0xd60f,	// (0x0001c352) linegrid_cam4_burst_pane_g4

0x6a33,	// (0x00015776) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a33,	// (0x00015776) linegrid_cam4_burst_pane_g5

0x6a44,	// (0x00015787) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a44,	// (0x00015787) linegrid_cam4_burst_pane_g6

0xd61c,	// (0x0001c35f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd61c,	// (0x0001c35f) linegrid_cam4_burst_pane_g7

0x6a5b,	// (0x0001579e) cell_cam4_burst_pane_g1

0xd635,	// (0x0001c378) main_cam5_pane_t1_ParamLimits

0xd635,	// (0x0001c378) main_cam5_pane_t1

0xd647,	// (0x0001c38a) main_cam5_pane_t2_ParamLimits

0xd647,	// (0x0001c38a) main_cam5_pane_t2

0xd659,	// (0x0001c39c) main_cam5_pane_t3_ParamLimits

0xd659,	// (0x0001c39c) main_cam5_pane_t3

0xd66b,	// (0x0001c3ae) main_cam5_pane_t4_ParamLimits

0xd66b,	// (0x0001c3ae) main_cam5_pane_t4

0xd683,	// (0x0001c3c6) main_cam5_pane_t5_ParamLimits

0xd683,	// (0x0001c3c6) main_cam5_pane_t5

0xd697,	// (0x0001c3da) main_cam5_pane_t6_ParamLimits

0xd697,	// (0x0001c3da) main_cam5_pane_t6

0xd6ab,	// (0x0001c3ee) main_cam5_pane_t7_ParamLimits

0xd6ab,	// (0x0001c3ee) main_cam5_pane_t7

0xd6bd,	// (0x0001c400) main_cam5_pane_t8_ParamLimits

0xd6bd,	// (0x0001c400) main_cam5_pane_t8

0xd6d9,	// (0x0001c41c) main_cam5_pane_t9_ParamLimits

0xd6d9,	// (0x0001c41c) main_cam5_pane_t9

0xd6eb,	// (0x0001c42e) main_cam5_pane_t10_ParamLimits

0xd6eb,	// (0x0001c42e) main_cam5_pane_t10

0xd6fd,	// (0x0001c440) main_cam5_pane_t11_ParamLimits

0xd6fd,	// (0x0001c440) main_cam5_pane_t11

0xd70f,	// (0x0001c452) main_cam5_pane_t12_ParamLimits

0xd70f,	// (0x0001c452) main_cam5_pane_t12

0xd724,	// (0x0001c467) main_cam5_pane_t13_ParamLimits

0xd724,	// (0x0001c467) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001e790) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001e790) main_cam5_pane_t

0x0461,	// (0x0000f1a4) popup_scut_keymap_window_ParamLimits

0x0461,	// (0x0000f1a4) popup_scut_keymap_window

0x6a6e,	// (0x000157b1) aid_size_cell_brow_shortcut

0x9f03,	// (0x00018c46) bg_popup_window_pane_cp010

0x6a7a,	// (0x000157bd) grid_scut_pane

0x6a86,	// (0x000157c9) cell_scut_pane_ParamLimits

0x6a86,	// (0x000157c9) cell_scut_pane

0x6a9d,	// (0x000157e0) cell_scut_pane_g1

0xd741,	// (0x0001c484) cell_scut_pane_t1

0xd750,	// (0x0001c493) cell_scut_pane_t2

0x6aa6,	// (0x000157e9) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001e7ab) cell_scut_pane_t

0x46e6,	// (0x00013429) main_mup3_pane_g8_ParamLimits

0x46e6,	// (0x00013429) main_mup3_pane_g8

0x5b6c,	// (0x000148af) area_vitu2_query_pane_ParamLimits

0x5b6c,	// (0x000148af) area_vitu2_query_pane

0x67e7,	// (0x0001552a) input_focus_pane_cp08

0xd75f,	// (0x0001c4a2) area_vitu2_query_pane_g1

0x6ab4,	// (0x000157f7) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001e7b2) area_vitu2_query_pane_g

0x6ac5,	// (0x00015808) area_vitu2_query_pane_t1_ParamLimits

0x6ac5,	// (0x00015808) area_vitu2_query_pane_t1

0x6ad9,	// (0x0001581c) area_vitu2_query_pane_t2_ParamLimits

0x6ad9,	// (0x0001581c) area_vitu2_query_pane_t2

0x6aed,	// (0x00015830) area_vitu2_query_pane_t3_ParamLimits

0x6aed,	// (0x00015830) area_vitu2_query_pane_t3

0xd76b,	// (0x0001c4ae) area_vitu2_query_pane_t4_ParamLimits

0xd76b,	// (0x0001c4ae) area_vitu2_query_pane_t4

0xd793,	// (0x0001c4d6) area_vitu2_query_pane_t5_ParamLimits

0xd793,	// (0x0001c4d6) area_vitu2_query_pane_t5

0xd7bb,	// (0x0001c4fe) area_vitu2_query_pane_t6_ParamLimits

0xd7bb,	// (0x0001c4fe) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001e7b7) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001e7b7) area_vitu2_query_pane_t

0x6b15,	// (0x00015858) bg_button_pane_cp018

0x6b23,	// (0x00015866) bg_button_pane_cp021

0x6b2f,	// (0x00015872) bg_button_pane_cp022

0x6b3e,	// (0x00015881) input_focus_pane_cp09

0xa85d,	// (0x000195a0) aid_size_touch_mv_arrow_left

0xa886,	// (0x000195c9) aid_size_touch_mv_arrow_right

0x62cb,	// (0x0001500e) main_cset_slider_pane_g16_ParamLimits

0x62cb,	// (0x0001500e) main_cset_slider_pane_g16

0x62d7,	// (0x0001501a) main_cset_slider_pane_g17_ParamLimits

0x62d7,	// (0x0001501a) main_cset_slider_pane_g17

0x6a5b,	// (0x0001579e) cell_cam4_burst_pane_g1_ParamLimits

0x94ff,	// (0x00018242) compa_mode_pane

0x64b1,	// (0x000151f4) popup_vtel_slider_window_g3_ParamLimits

0x64b1,	// (0x000151f4) popup_vtel_slider_window_g3

0x64c8,	// (0x0001520b) popup_vtel_slider_window_g4_ParamLimits

0x64c8,	// (0x0001520b) popup_vtel_slider_window_g4

0x64df,	// (0x00015222) popup_vtel_slider_window_t1_ParamLimits

0x64df,	// (0x00015222) popup_vtel_slider_window_t1

0x94ff,	// (0x00018242) main_cl_pane

0xbf0f,	// (0x0001ac52) popup_imed_adjust2_window_ParamLimits

0xbee7,	// (0x0001ac2a) bg_tb_trans_pane_cp05_ParamLimits

0xc95d,	// (0x0001b6a0) popup_imed_adjust2_window_g1_ParamLimits

0xc96c,	// (0x0001b6af) popup_imed_adjust2_window_g2_ParamLimits

0xc96c,	// (0x0001b6af) popup_imed_adjust2_window_g2

0xc978,	// (0x0001b6bb) popup_imed_adjust2_window_g3_ParamLimits

0xc978,	// (0x0001b6bb) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e522) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e522) popup_imed_adjust2_window_g

0xc984,	// (0x0001b6c7) popup_imed_adjust2_window_t1_ParamLimits

0xc99c,	// (0x0001b6df) slider_imed_adjust_pane_ParamLimits

0xc9b0,	// (0x0001b6f3) slider_imed_adjust_pane_g1_ParamLimits

0xc9c0,	// (0x0001b703) slider_imed_adjust_pane_g2_ParamLimits

0xc9d0,	// (0x0001b713) slider_imed_adjust_pane_g3_ParamLimits

0xc9e1,	// (0x0001b724) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e529) slider_imed_adjust_pane_g_ParamLimits

0x58f5,	// (0x00014638) aid_touch_area_cam4_ParamLimits

0x58f5,	// (0x00014638) aid_touch_area_cam4

0xd0cc,	// (0x0001be0f) battery_pane_cp01

0x59c4,	// (0x00014707) main_camera4_pane_g6_ParamLimits

0x59c4,	// (0x00014707) main_camera4_pane_g6

0x59ee,	// (0x00014731) main_camera4_pane_t2_ParamLimits

0x59ee,	// (0x00014731) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001e62c) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001e62c) main_camera4_pane_t

0x5a23,	// (0x00014766) aid_touch_area_vid4_ParamLimits

0x5a23,	// (0x00014766) aid_touch_area_vid4

0x5a77,	// (0x000147ba) main_video4_pane_g5_ParamLimits

0x5a77,	// (0x000147ba) main_video4_pane_g5

0x5a9c,	// (0x000147df) vid4_progress_pane_ParamLimits

0x5a9c,	// (0x000147df) vid4_progress_pane

0xd3b4,	// (0x0001c0f7) main_cset_slider_pane_g18_ParamLimits

0xd3b4,	// (0x0001c0f7) main_cset_slider_pane_g18

0xd629,	// (0x0001c36c) cell_cam4_burst_pane_g2_ParamLimits

0xd629,	// (0x0001c36c) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001e78b) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001e78b) cell_cam4_burst_pane_g

0x9cd2,	// (0x00018a15) bg_cl_pane_ParamLimits

0x9cd2,	// (0x00018a15) bg_cl_pane

0x6b4d,	// (0x00015890) cl_header_pane_ParamLimits

0x6b4d,	// (0x00015890) cl_header_pane

0x6b61,	// (0x000158a4) cl_listscroll_pane_ParamLimits

0x6b61,	// (0x000158a4) cl_listscroll_pane

0xd807,	// (0x0001c54a) bg_cl_pane_g1

0xd80f,	// (0x0001c552) bg_cl_pane_g2

0xd817,	// (0x0001c55a) bg_cl_pane_g3

0xd81f,	// (0x0001c562) bg_cl_pane_g4

0xd827,	// (0x0001c56a) bg_cl_pane_g5

0xd82f,	// (0x0001c572) bg_cl_pane_g6

0xd837,	// (0x0001c57a) bg_cl_pane_g7

0xd83f,	// (0x0001c582) bg_cl_pane_g8

0xd847,	// (0x0001c58a) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001e7c6) bg_cl_pane_g

0x6b71,	// (0x000158b4) aid_height_cl_leading_ParamLimits

0x6b71,	// (0x000158b4) aid_height_cl_leading

0x6b7d,	// (0x000158c0) aid_height_cl_text_ParamLimits

0x6b7d,	// (0x000158c0) aid_height_cl_text

0x956f,	// (0x000182b2) bg_cl_header_pane_ParamLimits

0x956f,	// (0x000182b2) bg_cl_header_pane

0x6b9c,	// (0x000158df) cl_header_pane_g1_ParamLimits

0x6b9c,	// (0x000158df) cl_header_pane_g1

0x6bb2,	// (0x000158f5) cl_header_pane_t1_ParamLimits

0x6bb2,	// (0x000158f5) cl_header_pane_t1

0xd84f,	// (0x0001c592) cl_list_pane

0xd387,	// (0x0001c0ca) hc_scroll_pane_cp01

0xa146,	// (0x00018e89) bg_cl_header_pane_g1

0xd237,	// (0x0001bf7a) bg_cl_header_pane_g2

0xa166,	// (0x00018ea9) bg_cl_header_pane_g3

0xd247,	// (0x0001bf8a) bg_cl_header_pane_g4

0xd23f,	// (0x0001bf82) bg_cl_header_pane_g5

0xd518,	// (0x0001c25b) bg_cl_header_pane_g6

0xd25f,	// (0x0001bfa2) bg_cl_header_pane_g7

0xd267,	// (0x0001bfaa) bg_cl_header_pane_g8

0xd257,	// (0x0001bf9a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001e7d9) bg_cl_header_pane_g

0x6bcb,	// (0x0001590e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bcb,	// (0x0001590e) hc_cl_list_double_graphic_heading_pane

0x6bdc,	// (0x0001591f) hc_cl_list_single_graphic_pane_ParamLimits

0x6bdc,	// (0x0001591f) hc_cl_list_single_graphic_pane

0x6bf2,	// (0x00015935) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bf2,	// (0x00015935) hc_cl_list_single_graphic_pane_g1

0x6bfe,	// (0x00015941) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6bfe,	// (0x00015941) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001e7ec) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001e7ec) hc_cl_list_single_graphic_pane_g

0x6c12,	// (0x00015955) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c12,	// (0x00015955) hc_cl_list_single_graphic_pane_t1

0x6bf2,	// (0x00015935) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bf2,	// (0x00015935) hc_cl_list_double_graphic_heading_pane_g1

0x6c27,	// (0x0001596a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c27,	// (0x0001596a) hc_cl_list_double_graphic_heading_pane_g2

0x6c3b,	// (0x0001597e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c3b,	// (0x0001597e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001e7f1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001e7f1) hc_cl_list_double_graphic_heading_pane_g

0x6c4f,	// (0x00015992) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c4f,	// (0x00015992) hc_cl_list_double_graphic_heading_pane_t1

0x6c64,	// (0x000159a7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c64,	// (0x000159a7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001e7f8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001e7f8) hc_cl_list_double_graphic_heading_pane_t

0xd860,	// (0x0001c5a3) vid4_progress_pane_g1

0xd870,	// (0x0001c5b3) vid4_progress_pane_g2

0x6c79,	// (0x000159bc) vid4_progress_pane_g3

0xd880,	// (0x0001c5c3) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001e7fd) vid4_progress_pane_g

0x6c8b,	// (0x000159ce) vid4_progress_pane_t1

0xd898,	// (0x0001c5db) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001e808) vid4_progress_pane_t

0x6ca3,	// (0x000159e6) wait_bar_pane_cp07

0xc1f5,	// (0x0001af38) blid_firmament_pane_ParamLimits

0xc238,	// (0x0001af7b) popup_blid_sat_info2_window_g1

0xc25c,	// (0x0001af9f) popup_blid_sat_info2_window_t3

0xc26a,	// (0x0001afad) popup_blid_sat_info2_window_t4

0xc278,	// (0x0001afbb) popup_blid_sat_info2_window_t5

0xc286,	// (0x0001afc9) popup_blid_sat_info2_window_t6

0xc296,	// (0x0001afd9) popup_blid_sat_info2_window_t7

0xc2a4,	// (0x0001afe7) popup_blid_sat_info2_window_t8

0xc2b2,	// (0x0001aff5) popup_blid_sat_info2_window_t9

0xc2c0,	// (0x0001b003) popup_blid_sat_info2_window_t10

0xc382,	// (0x0001b0c5) aid_firma_cardinal_ParamLimits

0xc396,	// (0x0001b0d9) blid_firmament_pane_t1_ParamLimits

0xc3ad,	// (0x0001b0f0) blid_firmament_pane_t2_ParamLimits

0xc3c4,	// (0x0001b107) blid_firmament_pane_t3_ParamLimits

0xc3db,	// (0x0001b11e) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001e416) blid_firmament_pane_t_ParamLimits

0xc3f2,	// (0x0001b135) blid_sat_info_pane_ParamLimits

0x956f,	// (0x000182b2) main_cam_set_pane_ParamLimits

0x4fad,	// (0x00013cf0) aid_size_cell_colour_35_ParamLimits

0x4fcd,	// (0x00013d10) aid_size_cell_colour_112_ParamLimits

0x4fed,	// (0x00013d30) aid_size_cell_effect_ParamLimits

0xbee7,	// (0x0001ac2a) bg_tb_trans_pane_cp02_ParamLimits

0xa3dc,	// (0x0001911f) heading_imed_pane_ParamLimits

0x500d,	// (0x00013d50) listscroll_imed_pane_ParamLimits

0xb50d,	// (0x0001a250) popup_call2_audio_first_window_g5_ParamLimits

0xb50d,	// (0x0001a250) popup_call2_audio_first_window_g5

0x55a0,	// (0x000142e3) aid_size_touch_image3_arrow_left_ParamLimits

0x55a0,	// (0x000142e3) aid_size_touch_image3_arrow_left

0x55cc,	// (0x0001430f) aid_size_touch_image3_arrow_right_ParamLimits

0x55cc,	// (0x0001430f) aid_size_touch_image3_arrow_right

0xd8ad,	// (0x0001c5f0) vid4_progress_pane_t3

0x5320,	// (0x00014063) main_hwr_training_symbol_option_pane_ParamLimits

0x5320,	// (0x00014063) main_hwr_training_symbol_option_pane

0xcc4a,	// (0x0001b98d) popup_hwr_training_preview_window_ParamLimits

0xcc4a,	// (0x0001b98d) popup_hwr_training_preview_window

0x5340,	// (0x00014083) hwr_training_navi_pane_g5_ParamLimits

0x5340,	// (0x00014083) hwr_training_navi_pane_g5

0xd213,	// (0x0001bf56) popup_char_count_window

0x956f,	// (0x000182b2) bg_popup_sub_pane_cp20_ParamLimits

0x65fb,	// (0x0001533e) list_vitu2_match_list_pane_ParamLimits

0x660a,	// (0x0001534d) vitu2_page_scroll_pane_ParamLimits

0x660a,	// (0x0001534d) vitu2_page_scroll_pane

0xd8e4,	// (0x0001c627) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8e4,	// (0x0001c627) list_single_hwr_training_symbol_option_pane

0xd8f7,	// (0x0001c63a) list_single_hwr_training_symbol_option_pane_g1

0xd8ff,	// (0x0001c642) list_single_hwr_training_symbol_option_pane_t1

0xd90d,	// (0x0001c650) bg_button_pane_cp023

0xd916,	// (0x0001c659) bg_button_pane_cp024

0x6cee,	// (0x00015a31) vitu2_page_scroll_pane_g1

0x6cf6,	// (0x00015a39) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001e80f) vitu2_page_scroll_pane_g

0x6cfe,	// (0x00015a41) vitu2_page_scroll_pane_t1

0xc111,	// (0x0001ae54) popup_char_count_window_g1

0xd949,	// (0x0001c68c) popup_char_count_window_g2

0xd952,	// (0x0001c695) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001e814) popup_char_count_window_g

0xd95b,	// (0x0001c69e) popup_char_count_window_t1

0x94ff,	// (0x00018242) main_vded2_pane

0xc949,	// (0x0001b68c) aid_size_cell_imed_line

0xc953,	// (0x0001b696) grid_imed_line_width_pane

0xd184,	// (0x0001bec7) vid4_indicators_pane_g4

0xd969,	// (0x0001c6ac) cell_imed_line_width_pane_ParamLimits

0xd969,	// (0x0001c6ac) cell_imed_line_width_pane

0xd97d,	// (0x0001c6c0) cell_imed_line_width_pane_g1

0xd986,	// (0x0001c6c9) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001e81b) cell_imed_line_width_pane_g

0x6d0d,	// (0x00015a50) main_vded2_pane_g1_ParamLimits

0x6d0d,	// (0x00015a50) main_vded2_pane_g1

0x6d23,	// (0x00015a66) main_vded2_pane_g2_ParamLimits

0x6d23,	// (0x00015a66) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001e820) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001e820) main_vded2_pane_g

0x6d35,	// (0x00015a78) vded2_slider_pane_ParamLimits

0x6d35,	// (0x00015a78) vded2_slider_pane

0x6d45,	// (0x00015a88) aid_size_touch_vded2_end

0x6d4f,	// (0x00015a92) aid_size_touch_vded2_playhead

0xd98e,	// (0x0001c6d1) aid_size_touch_vded2_start

0xd996,	// (0x0001c6d9) vded2_slider_bg_pane

0xd99f,	// (0x0001c6e2) vded2_slider_pane_g1

0xd9a8,	// (0x0001c6eb) vded2_slider_pane_g2

0x6d59,	// (0x00015a9c) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001e825) vded2_slider_pane_g

0xd9b0,	// (0x0001c6f3) vded2_slider_bg_pane_g1

0xd9b9,	// (0x0001c6fc) vded2_slider_bg_pane_g2

0xd9c2,	// (0x0001c705) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001e82c) vded2_slider_bg_pane_g

0x2cfd,	// (0x00011a40) aid_postcard_touch_down_pane_ParamLimits

0x2cfd,	// (0x00011a40) aid_postcard_touch_down_pane

0x2d13,	// (0x00011a56) aid_postcard_touch_up_pane_ParamLimits

0x2d13,	// (0x00011a56) aid_postcard_touch_up_pane

0x94ff,	// (0x00018242) main_blid2_pane

0xbef5,	// (0x0001ac38) popup_blid2_search_window

0x94ff,	// (0x00018242) blid2_gps_pane

0x94ff,	// (0x00018242) blid2_navig_pane

0x94ff,	// (0x00018242) blid2_search_pane

0x94ff,	// (0x00018242) blid2_tripm_pane

0x6d64,	// (0x00015aa7) blid2_search_pane_g1_ParamLimits

0x6d64,	// (0x00015aa7) blid2_search_pane_g1

0x6d7e,	// (0x00015ac1) blid2_search_pane_t1_ParamLimits

0x6d7e,	// (0x00015ac1) blid2_search_pane_t1

0x6d90,	// (0x00015ad3) aid_size_cell_blid2_gps_ParamLimits

0x6d90,	// (0x00015ad3) aid_size_cell_blid2_gps

0x6da8,	// (0x00015aeb) blid2_gps_pane_g1_ParamLimits

0x6da8,	// (0x00015aeb) blid2_gps_pane_g1

0x6dbc,	// (0x00015aff) grid_blid2_satellite_pane_ParamLimits

0x6dbc,	// (0x00015aff) grid_blid2_satellite_pane

0x6dd6,	// (0x00015b19) blid2_navig_pane_g1_ParamLimits

0x6dd6,	// (0x00015b19) blid2_navig_pane_g1

0x6de2,	// (0x00015b25) blid2_navig_pane_t1_ParamLimits

0x6de2,	// (0x00015b25) blid2_navig_pane_t1

0x6dfd,	// (0x00015b40) blid2_navig_pane_t2_ParamLimits

0x6dfd,	// (0x00015b40) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001e833) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001e833) blid2_navig_pane_t

0x6e18,	// (0x00015b5b) blid2_navig_ring_pane_ParamLimits

0x6e18,	// (0x00015b5b) blid2_navig_ring_pane

0x6e31,	// (0x00015b74) blid2_speed_pane_ParamLimits

0x6e31,	// (0x00015b74) blid2_speed_pane

0x6e3d,	// (0x00015b80) blid2_tripm_pane_g1_ParamLimits

0x6e3d,	// (0x00015b80) blid2_tripm_pane_g1

0x6e56,	// (0x00015b99) blid2_tripm_pane_g2_ParamLimits

0x6e56,	// (0x00015b99) blid2_tripm_pane_g2

0x6e6a,	// (0x00015bad) blid2_tripm_pane_g3_ParamLimits

0x6e6a,	// (0x00015bad) blid2_tripm_pane_g3

0x6e7e,	// (0x00015bc1) blid2_tripm_pane_g4_ParamLimits

0x6e7e,	// (0x00015bc1) blid2_tripm_pane_g4

0x6e92,	// (0x00015bd5) blid2_tripm_pane_g5_ParamLimits

0x6e92,	// (0x00015bd5) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001e838) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001e838) blid2_tripm_pane_g

0x6eb8,	// (0x00015bfb) blid2_tripm_pane_t1_ParamLimits

0x6eb8,	// (0x00015bfb) blid2_tripm_pane_t1

0x6ed3,	// (0x00015c16) blid2_tripm_pane_t2_ParamLimits

0x6ed3,	// (0x00015c16) blid2_tripm_pane_t2

0x6eec,	// (0x00015c2f) blid2_tripm_pane_t3_ParamLimits

0x6eec,	// (0x00015c2f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001e845) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001e845) blid2_tripm_pane_t

0x6f33,	// (0x00015c76) cell_blid2_satellite_pane_ParamLimits

0x6f33,	// (0x00015c76) cell_blid2_satellite_pane

0x6f51,	// (0x00015c94) cell_blid2_satellite_pane_g1

0xd9cb,	// (0x0001c70e) cell_blid2_satellite_pane_t1

0xc402,	// (0x0001b145) blid2_speed_pane_g1

0xd9d9,	// (0x0001c71c) blid2_speed_pane_t1

0xd9e7,	// (0x0001c72a) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001e84e) blid2_speed_pane_t

0xc402,	// (0x0001b145) blid2_navig_ring_pane_g1

0x6f5a,	// (0x00015c9d) blid2_navig_ring_pane_g2

0x6f62,	// (0x00015ca5) blid2_navig_ring_pane_g3

0x6f6a,	// (0x00015cad) blid2_navig_ring_pane_g4

0x6f72,	// (0x00015cb5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001e853) blid2_navig_ring_pane_g

0x94ff,	// (0x00018242) bg_popup_window_pane_cp011

0xd9f5,	// (0x0001c738) popup_blid2_search_window_g1

0xd9fd,	// (0x0001c740) popup_blid2_search_window_t1

0xda0b,	// (0x0001c74e) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001e85e) popup_blid2_search_window_t

0xa055,	// (0x00018d98) main_browser_pane_g1

0x9cd2,	// (0x00018a15) main_browser_pane_ParamLimits

0x956f,	// (0x000182b2) bg_button_pane_cp011_ParamLimits

0x5ea1,	// (0x00014be4) cell_vitu2_function_pane_g1_ParamLimits

0xbee7,	// (0x0001ac2a) bg_popup_sub_pane_cp22_ParamLimits

0x67e7,	// (0x0001552a) input_focus_pane_cp08_ParamLimits

0x67fe,	// (0x00015541) popup_vitu2_query_button_pane_ParamLimits

0x67fe,	// (0x00015541) popup_vitu2_query_button_pane

0x680f,	// (0x00015552) popup_vitu2_query_input_button_pane

0xd573,	// (0x0001c2b6) popup_vitu2_query_window_g1_ParamLimits

0x6819,	// (0x0001555c) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001e75f) popup_vitu2_query_window_g_ParamLimits

0x94ff,	// (0x00018242) bg_button_pane_cp026

0x6f7a,	// (0x00015cbd) popup_vitu2_query_input_button_pane_g1

0x94ff,	// (0x00018242) bg_button_pane_cp025

0xda19,	// (0x0001c75c) popup_vitu2_query_button_pane_t1

0x4393,	// (0x000130d6) main_mp3_pane_t6

0x43a1,	// (0x000130e4) popup_slider_window_cp01

0xd0e8,	// (0x0001be2b) cam4_battery_pane

0xd141,	// (0x0001be84) cam4_battery_pane_cp02

0xd858,	// (0x0001c59b) cam4_battery_pane_cp01

0xd858,	// (0x0001c59b) cam4_battery_pane_cp03

0xc402,	// (0x0001b145) cam4_battery_pane_g1

0xda27,	// (0x0001c76a) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001e863) cam4_battery_pane_g

0xc2ce,	// (0x0001b011) popup_blid_sat_info2_window_t11

0xa85d,	// (0x000195a0) aid_size_touch_mv_arrow_left_ParamLimits

0xa886,	// (0x000195c9) aid_size_touch_mv_arrow_right_ParamLimits

0xa8e4,	// (0x00019627) navi_pane_g1_ParamLimits

0xa8f0,	// (0x00019633) navi_pane_g2_ParamLimits

0xa91e,	// (0x00019661) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e128) navi_pane_g_ParamLimits

0x27a2,	// (0x000114e5) navi_pane_mv_t1_ParamLimits

0x5019,	// (0x00013d5c) grid_imed_effect_pane_ParamLimits

0x13fc,	// (0x0001013f) aid_placing_vt_slider_lsc

0x9fa4,	// (0x00018ce7) aid_placing_vt_slider_prt

0x956f,	// (0x000182b2) bg_tb_trans_pane_cp01_ParamLimits

0xc58e,	// (0x0001b2d1) popup_image_details_window_g1_ParamLimits

0xc5a1,	// (0x0001b2e4) popup_image_details_window_g2_ParamLimits

0xc5b6,	// (0x0001b2f9) popup_image_details_window_g3_ParamLimits

0xc5b6,	// (0x0001b2f9) popup_image_details_window_g3

0xf718,	// (0x0001e45b) popup_image_details_window_g_ParamLimits

0xc5ca,	// (0x0001b30d) popup_image_details_window_t1_ParamLimits

0xc5dc,	// (0x0001b31f) popup_image_details_window_t2_ParamLimits

0xc5f5,	// (0x0001b338) popup_image_details_window_t3_ParamLimits

0xc609,	// (0x0001b34c) popup_image_details_window_t4_ParamLimits

0xc624,	// (0x0001b367) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001e462) popup_image_details_window_t_ParamLimits

0x6b89,	// (0x000158cc) cl_header_name_pane_ParamLimits

0x6b89,	// (0x000158cc) cl_header_name_pane

0x6f82,	// (0x00015cc5) cl_header_name_pane_t1_ParamLimits

0x6f82,	// (0x00015cc5) cl_header_name_pane_t1

0x6fa3,	// (0x00015ce6) cl_header_name_pane_t2_ParamLimits

0x6fa3,	// (0x00015ce6) cl_header_name_pane_t2

0x6fe5,	// (0x00015d28) cl_header_name_pane_t3_ParamLimits

0x6fe5,	// (0x00015d28) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001e868) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001e868) cl_header_name_pane_t

0xa9ad,	// (0x000196f0) navi_pane_mv_g2_ParamLimits

0xd1d0,	// (0x0001bf13) field_vitu2_entry_pane_g1_ParamLimits

0xd1dc,	// (0x0001bf1f) field_vitu2_entry_pane_g2_ParamLimits

0xd1e8,	// (0x0001bf2b) field_vitu2_entry_pane_g3_ParamLimits

0xd1e8,	// (0x0001bf2b) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001e65e) field_vitu2_entry_pane_g_ParamLimits

0xd21b,	// (0x0001bf5e) cell_vitu2_itu_pane_g1_ParamLimits

0x5d49,	// (0x00014a8c) cell_vitu2_itu_pane_g2_ParamLimits

0x5d49,	// (0x00014a8c) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001e66a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001e66a) cell_vitu2_itu_pane_g

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp05_ParamLimits

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp05

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp03

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp04

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp10_ParamLimits

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp10

0x6b2f,	// (0x00015872) bg_vkb2_func_pane_cp08

0x6b15,	// (0x00015858) bg_vkb2_func_pane_cp06

0x6b23,	// (0x00015866) bg_vkb2_func_pane_cp07

0xd91f,	// (0x0001c662) bg_vkb2_func_pane_cp11_ParamLimits

0xd91f,	// (0x0001c662) bg_vkb2_func_pane_cp11

0xd934,	// (0x0001c677) bg_vkb2_func_pane_cp12_ParamLimits

0xd934,	// (0x0001c677) bg_vkb2_func_pane_cp12

0x94ff,	// (0x00018242) bg_vkb2_func_pane_cp09

0xd237,	// (0x0001bf7a) bg_vkb2_func_pane_g1

0xa166,	// (0x00018ea9) bg_vkb2_func_pane_g2

0xd23f,	// (0x0001bf82) bg_vkb2_func_pane_g3

0xd247,	// (0x0001bf8a) bg_vkb2_func_pane_g4

0xd518,	// (0x0001c25b) bg_vkb2_func_pane_g5

0xd25f,	// (0x0001bfa2) bg_vkb2_func_pane_g6

0xd267,	// (0x0001bfaa) bg_vkb2_func_pane_g7

0xd257,	// (0x0001bf9a) bg_vkb2_func_pane_g8

0xa146,	// (0x00018e89) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001e86f) bg_vkb2_func_pane_g

0x6ea6,	// (0x00015be9) blid2_tripm_pane_g6_ParamLimits

0x6ea6,	// (0x00015be9) blid2_tripm_pane_g6

0xcf3b,	// (0x0001bc7e) mp4_progress_pane_g1

0x6f1f,	// (0x00015c62) blid2_tripm_values_pane_ParamLimits

0x6f1f,	// (0x00015c62) blid2_tripm_values_pane

0x7016,	// (0x00015d59) blid2_tripm_values_pane_t1

0x7024,	// (0x00015d67) blid2_tripm_values_pane_t2

0x7032,	// (0x00015d75) blid2_tripm_values_pane_t3

0x7040,	// (0x00015d83) blid2_tripm_values_pane_t4

0x704e,	// (0x00015d91) blid2_tripm_values_pane_t5

0x705c,	// (0x00015d9f) blid2_tripm_values_pane_t6

0x706a,	// (0x00015dad) blid2_tripm_values_pane_t7

0x7078,	// (0x00015dbb) blid2_tripm_values_pane_t8

0x7086,	// (0x00015dc9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001e882) blid2_tripm_values_pane_t

0x143e,	// (0x00010181) call_video_pane_t1_ParamLimits

0x145c,	// (0x0001019f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001dfb1) call_video_pane_t_ParamLimits

0x2c7b,	// (0x000119be) msg_header_pane_g1_ParamLimits

0xabaf,	// (0x000198f2) msg_header_pane_g2_ParamLimits

0xabaf,	// (0x000198f2) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e1cb) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e1cb) msg_header_pane_g

0x9cd2,	// (0x00018a15) main_clock2_pane_ParamLimits

0x4d17,	// (0x00013a5a) grid_clock2_toolbar_pane_ParamLimits

0x4d17,	// (0x00013a5a) grid_clock2_toolbar_pane

0x4d17,	// (0x00013a5a) listscroll_clock2_pane_ParamLimits

0x4d17,	// (0x00013a5a) listscroll_clock2_pane

0x4e0e,	// (0x00013b51) main_clock2_pane_t3_ParamLimits

0x4e0e,	// (0x00013b51) main_clock2_pane_t3

0x4e32,	// (0x00013b75) main_clock2_pane_t4_ParamLimits

0x4e32,	// (0x00013b75) main_clock2_pane_t4

0xda31,	// (0x0001c774) cell_clock2_toolbar_pane

0xda39,	// (0x0001c77c) cell_clock2_toolbar_pane_cp01

0xda39,	// (0x0001c77c) cell_clock2_toolbar_pane_cp02

0xda41,	// (0x0001c784) cell_clock2_toolbar_pane_cp03

0xda49,	// (0x0001c78c) list_clock2_pane

0xa7d3,	// (0x00019516) scroll_pane_cp10

0xda51,	// (0x0001c794) list_single_clock2_pane_ParamLimits

0xda51,	// (0x0001c794) list_single_clock2_pane

0x9f03,	// (0x00018c46) list_highlight_pane_cp08

0xda5e,	// (0x0001c7a1) list_single_clock2_pane_t1

0xda6c,	// (0x0001c7af) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001e895) list_single_clock2_pane_t

0x94ff,	// (0x00018242) bg_button_pane_cp10

0xda7a,	// (0x0001c7bd) cell_clock2_toolbar_pane_g1

0x2c89,	// (0x000119cc) aid_main_viewer_pane_g1_ParamLimits

0x2c89,	// (0x000119cc) aid_main_viewer_pane_g1

0x2c97,	// (0x000119da) aid_main_viewer_pane_g2_ParamLimits

0x2c97,	// (0x000119da) aid_main_viewer_pane_g2

0x2ca5,	// (0x000119e8) aid_main_viewer_pane_g3_ParamLimits

0x2ca5,	// (0x000119e8) aid_main_viewer_pane_g3

0x2cb4,	// (0x000119f7) aid_main_viewer_pane_g4_ParamLimits

0x2cb4,	// (0x000119f7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e1dc) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e1dc) aid_main_viewer_pane_g

0x35ba,	// (0x000122fd) main_calc_pane_ParamLimits

0x35ce,	// (0x00012311) main_dialer2_pane_ParamLimits

0x94ff,	// (0x00018242) main_cam6_pane

0x94ff,	// (0x00018242) main_vid6_pane

0x4d23,	// (0x00013a66) listscroll_gen_pane_cp06_ParamLimits

0x4d23,	// (0x00013a66) listscroll_gen_pane_cp06

0x4e55,	// (0x00013b98) main_clock2_pane_t5_ParamLimits

0x4e55,	// (0x00013b98) main_clock2_pane_t5

0x4eaf,	// (0x00013bf2) aid_call2_pane_cp10_ParamLimits

0x4ec1,	// (0x00013c04) aid_call_pane_cp10_ParamLimits

0xa851,	// (0x00019594) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa851,	// (0x00019594) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ed3,	// (0x00013c16) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ed3,	// (0x00013c16) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa851,	// (0x00019594) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e517) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ee5,	// (0x00013c28) popup_clock_analogue_window_cp10_t1_ParamLimits

0x554d,	// (0x00014290) cell_dialer2_keypad_pane_g2_ParamLimits

0x554d,	// (0x00014290) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e5fd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e5fd) cell_dialer2_keypad_pane_g

0x5569,	// (0x000142ac) cell_dialer2_keypad_pane_t1

0x61be,	// (0x00014f01) main_cset_text2_pane_ParamLimits

0x61be,	// (0x00014f01) main_cset_text2_pane

0xd75f,	// (0x0001c4a2) area_vitu2_query_pane_g1_ParamLimits

0x6ab4,	// (0x000157f7) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001e7b2) area_vitu2_query_pane_g_ParamLimits

0xd7e3,	// (0x0001c526) area_vitu2_query_pane_t7_ParamLimits

0xd7e3,	// (0x0001c526) area_vitu2_query_pane_t7

0x6b15,	// (0x00015858) bg_button_pane_cp018_ParamLimits

0x6b23,	// (0x00015866) bg_button_pane_cp021_ParamLimits

0x6b2f,	// (0x00015872) bg_button_pane_cp022_ParamLimits

0x6b2f,	// (0x00015872) bg_vkb2_func_pane_cp08_ParamLimits

0x6b15,	// (0x00015858) bg_vkb2_func_pane_cp06_ParamLimits

0x6b23,	// (0x00015866) bg_vkb2_func_pane_cp07_ParamLimits

0x6b3e,	// (0x00015881) input_focus_pane_cp09_ParamLimits

0xda82,	// (0x0001c7c5) cam6_autofocus_pane_ParamLimits

0xda82,	// (0x0001c7c5) cam6_autofocus_pane

0x7094,	// (0x00015dd7) cam6_image_uncrop_pane_ParamLimits

0x7094,	// (0x00015dd7) cam6_image_uncrop_pane

0x70a3,	// (0x00015de6) cam6_indi_pane_ParamLimits

0x70a3,	// (0x00015de6) cam6_indi_pane

0x70b9,	// (0x00015dfc) cam6_mode_pane_ParamLimits

0x70b9,	// (0x00015dfc) cam6_mode_pane

0x70cb,	// (0x00015e0e) cam6_timer_pane_ParamLimits

0x70cb,	// (0x00015e0e) cam6_timer_pane

0x70d7,	// (0x00015e1a) cam6_zoom_pane_ParamLimits

0x70d7,	// (0x00015e1a) cam6_zoom_pane

0x70e3,	// (0x00015e26) cam6_mode_pane_g1_ParamLimits

0x70e3,	// (0x00015e26) cam6_mode_pane_g1

0x70f3,	// (0x00015e36) cam6_mode_pane_g2_ParamLimits

0x70f3,	// (0x00015e36) cam6_mode_pane_g2

0x7103,	// (0x00015e46) cam6_mode_pane_g3_ParamLimits

0x7103,	// (0x00015e46) cam6_mode_pane_g3

0x7113,	// (0x00015e56) cam6_mode_pane_g4_ParamLimits

0x7113,	// (0x00015e56) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001e89a) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001e89a) cam6_mode_pane_g

0xd2d6,	// (0x0001c019) bg_tb_trans_pane_cp08_ParamLimits

0xd2d6,	// (0x0001c019) bg_tb_trans_pane_cp08

0xda90,	// (0x0001c7d3) cam6_battery_pane_ParamLimits

0xda90,	// (0x0001c7d3) cam6_battery_pane

0xdaa6,	// (0x0001c7e9) cam6_indi_pane_g1_ParamLimits

0xdaa6,	// (0x0001c7e9) cam6_indi_pane_g1

0xdab8,	// (0x0001c7fb) cam6_indi_pane_g2_ParamLimits

0xdab8,	// (0x0001c7fb) cam6_indi_pane_g2

0xdaca,	// (0x0001c80d) cam6_indi_pane_g3_ParamLimits

0xdaca,	// (0x0001c80d) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001e8a3) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001e8a3) cam6_indi_pane_g

0xdadc,	// (0x0001c81f) cam6_indi_pane_t1_ParamLimits

0xdadc,	// (0x0001c81f) cam6_indi_pane_t1

0x7123,	// (0x00015e66) cam6_autofocus_pane_g1

0x712b,	// (0x00015e6e) cam6_autofocus_pane_g2

0x7133,	// (0x00015e76) cam6_autofocus_pane_g3

0x713b,	// (0x00015e7e) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001e8aa) cam6_autofocus_pane_g

0xdb02,	// (0x0001c845) cam6_timer_pane_g1

0xdb0a,	// (0x0001c84d) cam6_timer_pane_t1

0xdb18,	// (0x0001c85b) cam6_zoom_cont_pane

0xdb20,	// (0x0001c863) cam6_zoom_pane_g1

0xdb28,	// (0x0001c86b) cam6_zoom_pane_g2

0x7143,	// (0x00015e86) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001e8b3) cam6_zoom_pane_g

0xc402,	// (0x0001b145) cam6_battery_pane_g1

0xc402,	// (0x0001b145) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001e41f) cam6_battery_pane_g

0xdb30,	// (0x0001c873) cam6_zoom_cont_pane_g1

0xdb39,	// (0x0001c87c) cam6_zoom_cont_pane_g2

0xdb42,	// (0x0001c885) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001e8ba) cam6_zoom_cont_pane_g

0x7160,	// (0x00015ea3) cam6_mode_pane_cp_ParamLimits

0x7160,	// (0x00015ea3) cam6_mode_pane_cp

0x70d7,	// (0x00015e1a) cam6_zoom_pane_cp_ParamLimits

0x70d7,	// (0x00015e1a) cam6_zoom_pane_cp

0x7172,	// (0x00015eb5) vid6_image_uncrop_cif_pane_ParamLimits

0x7172,	// (0x00015eb5) vid6_image_uncrop_cif_pane

0x7182,	// (0x00015ec5) vid6_image_uncrop_nhd_pane_ParamLimits

0x7182,	// (0x00015ec5) vid6_image_uncrop_nhd_pane

0x7094,	// (0x00015dd7) vid6_image_uncrop_vga_pane_ParamLimits

0x7094,	// (0x00015dd7) vid6_image_uncrop_vga_pane

0x7191,	// (0x00015ed4) vid6_image_uncrop_wvga_pane_ParamLimits

0x7191,	// (0x00015ed4) vid6_image_uncrop_wvga_pane

0x71a0,	// (0x00015ee3) vid6_indi_pane_ParamLimits

0x71a0,	// (0x00015ee3) vid6_indi_pane

0xd2d6,	// (0x0001c019) bg_tb_trans_pane_cp09_ParamLimits

0xd2d6,	// (0x0001c019) bg_tb_trans_pane_cp09

0xdb5a,	// (0x0001c89d) cam6_battery_pane_cp_ParamLimits

0xdb5a,	// (0x0001c89d) cam6_battery_pane_cp

0xdb66,	// (0x0001c8a9) vid6_indi_pane_g1_ParamLimits

0xdb66,	// (0x0001c8a9) vid6_indi_pane_g1

0xdb78,	// (0x0001c8bb) vid6_indi_pane_g2_ParamLimits

0xdb78,	// (0x0001c8bb) vid6_indi_pane_g2

0xdb8a,	// (0x0001c8cd) vid6_indi_pane_g3_ParamLimits

0xdb8a,	// (0x0001c8cd) vid6_indi_pane_g3

0xdb9f,	// (0x0001c8e2) vid6_indi_pane_g4_ParamLimits

0xdb9f,	// (0x0001c8e2) vid6_indi_pane_g4

0xdbb4,	// (0x0001c8f7) vid6_indi_pane_g5_ParamLimits

0xdbb4,	// (0x0001c8f7) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001e8c1) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001e8c1) vid6_indi_pane_g

0xdbce,	// (0x0001c911) vid6_indi_pane_t1_ParamLimits

0xdbce,	// (0x0001c911) vid6_indi_pane_t1

0xdbe4,	// (0x0001c927) vid6_indi_pane_t2_ParamLimits

0xdbe4,	// (0x0001c927) vid6_indi_pane_t2

0xdc0c,	// (0x0001c94f) vid6_indi_pane_t3_ParamLimits

0xdc0c,	// (0x0001c94f) vid6_indi_pane_t3

0xdc34,	// (0x0001c977) vid6_indi_pane_t4_ParamLimits

0xdc34,	// (0x0001c977) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001e8cc) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001e8cc) vid6_indi_pane_t

0xdc58,	// (0x0001c99b) wait_bar_pane_cp08

0x71b8,	// (0x00015efb) main_cset_text2_pane_t1_ParamLimits

0x71b8,	// (0x00015efb) main_cset_text2_pane_t1

0x714b,	// (0x00015e8e) listscroll_gen_pane_cp06_t1_ParamLimits

0x714b,	// (0x00015e8e) listscroll_gen_pane_cp06_t1

0x94ff,	// (0x00018242) main_cam6_set_pane

0xc66e,	// (0x0001b3b1) bg_tb_trans_pane_cp06_ParamLimits

0xd0f0,	// (0x0001be33) cam4_indicators_pane_g1_ParamLimits

0xd101,	// (0x0001be44) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001e63a) cam4_indicators_pane_g_ParamLimits

0xd11f,	// (0x0001be62) cam4_indicators_pane_t1_ParamLimits

0x956f,	// (0x000182b2) bg_tb_trans_pane_cp07_ParamLimits

0xd14b,	// (0x0001be8e) vid4_indicators_pane_g1_ParamLimits

0xd15f,	// (0x0001bea2) vid4_indicators_pane_g2_ParamLimits

0xd173,	// (0x0001beb6) vid4_indicators_pane_g3_ParamLimits

0xd184,	// (0x0001bec7) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001e64c) vid4_indicators_pane_g_ParamLimits

0xd1a2,	// (0x0001bee5) vid4_indicators_pane_t1_ParamLimits

0xd860,	// (0x0001c5a3) vid4_progress_pane_g1_ParamLimits

0xd870,	// (0x0001c5b3) vid4_progress_pane_g2_ParamLimits

0x6c79,	// (0x000159bc) vid4_progress_pane_g3_ParamLimits

0xd880,	// (0x0001c5c3) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001e7fd) vid4_progress_pane_g_ParamLimits

0x6c8b,	// (0x000159ce) vid4_progress_pane_t1_ParamLimits

0xd898,	// (0x0001c5db) vid4_progress_pane_t2_ParamLimits

0xd8ad,	// (0x0001c5f0) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001e808) vid4_progress_pane_t_ParamLimits

0x6ca3,	// (0x000159e6) wait_bar_pane_cp07_ParamLimits

0x71d5,	// (0x00015f18) main_cam6_set_pane_g2_ParamLimits

0x71d5,	// (0x00015f18) main_cam6_set_pane_g2

0x71f9,	// (0x00015f3c) main_cset6_listscroll_pane_ParamLimits

0x71f9,	// (0x00015f3c) main_cset6_listscroll_pane

0x7219,	// (0x00015f5c) main_cset6_slider_pane_ParamLimits

0x7219,	// (0x00015f5c) main_cset6_slider_pane

0x722f,	// (0x00015f72) main_cset6_text2_pane_ParamLimits

0x722f,	// (0x00015f72) main_cset6_text2_pane

0xdc67,	// (0x0001c9aa) main_cset6_text_pane

0xdc6f,	// (0x0001c9b2) main_cset_list_pane_copy1_ParamLimits

0xdc6f,	// (0x0001c9b2) main_cset_list_pane_copy1

0xdc7f,	// (0x0001c9c2) scroll_pane_cp028_copy1

0x723d,	// (0x00015f80) cset_list_set_pane_copy1

0x724e,	// (0x00015f91) aid_position_infowindow_above_copy1

0x7256,	// (0x00015f99) aid_position_infowindow_below_copy1

0x725e,	// (0x00015fa1) cset_list_set_pane_g1_copy1

0x7266,	// (0x00015fa9) cset_list_set_pane_g3_copy1_ParamLimits

0x7266,	// (0x00015fa9) cset_list_set_pane_g3_copy1

0x7275,	// (0x00015fb8) cset_list_set_pane_t1_copy1_ParamLimits

0x7275,	// (0x00015fb8) cset_list_set_pane_t1_copy1

0x956f,	// (0x000182b2) list_highlight_pane_cp021_copy1_ParamLimits

0x956f,	// (0x000182b2) list_highlight_pane_cp021_copy1

0xdc88,	// (0x0001c9cb) cset6_slider_pane_ParamLimits

0xdc88,	// (0x0001c9cb) cset6_slider_pane

0xdcb4,	// (0x0001c9f7) main_cset6_slider_pane_g1_ParamLimits

0xdcb4,	// (0x0001c9f7) main_cset6_slider_pane_g1

0x728a,	// (0x00015fcd) main_cset6_slider_pane_g2_ParamLimits

0x728a,	// (0x00015fcd) main_cset6_slider_pane_g2

0xdcdc,	// (0x0001ca1f) main_cset6_slider_pane_g3_ParamLimits

0xdcdc,	// (0x0001ca1f) main_cset6_slider_pane_g3

0x72b2,	// (0x00015ff5) main_cset6_slider_pane_g4_ParamLimits

0x72b2,	// (0x00015ff5) main_cset6_slider_pane_g4

0x72be,	// (0x00016001) main_cset6_slider_pane_g5_ParamLimits

0x72be,	// (0x00016001) main_cset6_slider_pane_g5

0xd39c,	// (0x0001c0df) main_cset6_slider_pane_g7_ParamLimits

0xd39c,	// (0x0001c0df) main_cset6_slider_pane_g7

0xd3a8,	// (0x0001c0eb) main_cset6_slider_pane_g8_ParamLimits

0xd3a8,	// (0x0001c0eb) main_cset6_slider_pane_g8

0x626b,	// (0x00014fae) main_cset6_slider_pane_g9_ParamLimits

0x626b,	// (0x00014fae) main_cset6_slider_pane_g9

0x6277,	// (0x00014fba) main_cset6_slider_pane_g10_ParamLimits

0x6277,	// (0x00014fba) main_cset6_slider_pane_g10

0x6283,	// (0x00014fc6) main_cset6_slider_pane_g11_ParamLimits

0x6283,	// (0x00014fc6) main_cset6_slider_pane_g11

0x628f,	// (0x00014fd2) main_cset6_slider_pane_g12_ParamLimits

0x628f,	// (0x00014fd2) main_cset6_slider_pane_g12

0x629b,	// (0x00014fde) main_cset6_slider_pane_g13_ParamLimits

0x629b,	// (0x00014fde) main_cset6_slider_pane_g13

0x62a7,	// (0x00014fea) main_cset6_slider_pane_g14_ParamLimits

0x62a7,	// (0x00014fea) main_cset6_slider_pane_g14

0x72ca,	// (0x0001600d) main_cset6_slider_pane_g15_ParamLimits

0x72ca,	// (0x0001600d) main_cset6_slider_pane_g15

0x62cb,	// (0x0001500e) main_cset6_slider_pane_g16_ParamLimits

0x62cb,	// (0x0001500e) main_cset6_slider_pane_g16

0x62d7,	// (0x0001501a) main_cset6_slider_pane_g17_ParamLimits

0x62d7,	// (0x0001501a) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001e8d5) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001e8d5) main_cset6_slider_pane_g

0xdce8,	// (0x0001ca2b) main_cset6_slider_pane_t1_ParamLimits

0xdce8,	// (0x0001ca2b) main_cset6_slider_pane_t1

0x72fa,	// (0x0001603d) main_cset6_slider_pane_t2_ParamLimits

0x72fa,	// (0x0001603d) main_cset6_slider_pane_t2

0x7325,	// (0x00016068) main_cset6_slider_pane_t3_ParamLimits

0x7325,	// (0x00016068) main_cset6_slider_pane_t3

0x7350,	// (0x00016093) main_cset6_slider_pane_t4_ParamLimits

0x7350,	// (0x00016093) main_cset6_slider_pane_t4

0x737b,	// (0x000160be) main_cset6_slider_pane_t5_ParamLimits

0x737b,	// (0x000160be) main_cset6_slider_pane_t5

0xdd29,	// (0x0001ca6c) main_cset6_slider_pane_t7_ParamLimits

0xdd29,	// (0x0001ca6c) main_cset6_slider_pane_t7

0x73a6,	// (0x000160e9) main_cset6_slider_pane_t8_ParamLimits

0x73a6,	// (0x000160e9) main_cset6_slider_pane_t8

0x73ca,	// (0x0001610d) main_cset6_slider_pane_t9_ParamLimits

0x73ca,	// (0x0001610d) main_cset6_slider_pane_t9

0x73ee,	// (0x00016131) main_cset6_slider_pane_t10_ParamLimits

0x73ee,	// (0x00016131) main_cset6_slider_pane_t10

0x7412,	// (0x00016155) main_cset6_slider_pane_t11_ParamLimits

0x7412,	// (0x00016155) main_cset6_slider_pane_t11

0xdd5f,	// (0x0001caa2) main_cset6_slider_pane_t14_ParamLimits

0xdd5f,	// (0x0001caa2) main_cset6_slider_pane_t14

0xdd98,	// (0x0001cadb) main_cset6_slider_pane_t15_ParamLimits

0xdd98,	// (0x0001cadb) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001e8fa) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001e8fa) main_cset6_slider_pane_t

0xd4b0,	// (0x0001c1f3) cset_slider_pane_g1_copy1

0xd4b9,	// (0x0001c1fc) cset_slider_pane_g2_copy1

0xd4c2,	// (0x0001c205) cset_slider_pane_g3_copy1

0x94ff,	// (0x00018242) bg_popup_sub_pane_cp011_copy1

0xddd1,	// (0x0001cb14) main_cset_text_pane_g1_copy1

0xd587,	// (0x0001c2ca) main_cset_text_pane_t1_copy1

0xd595,	// (0x0001c2d8) main_cset_text_pane_t2_copy1

0xd5a3,	// (0x0001c2e6) main_cset_text_pane_t3_copy1

0xd5b1,	// (0x0001c2f4) main_cset_text_pane_t4_copy1

0xd5bf,	// (0x0001c302) main_cset_text_pane_t5_copy1

0xddd9,	// (0x0001cb1c) main_cset_text_pane_t6_copy1

0xdde7,	// (0x0001cb2a) main_cset_text_pane_t7_copy1

0x71b8,	// (0x00015efb) main_cset_text2_pane_t1_copy1

0x956f,	// (0x000182b2) main_ncimui_pane

0x3818,	// (0x0001255b) popup_query_ncimui_window_ParamLimits

0x3818,	// (0x0001255b) popup_query_ncimui_window

0xc6d3,	// (0x0001b416) field_cale_ev2_pane_g4_ParamLimits

0xc6d3,	// (0x0001b416) field_cale_ev2_pane_g4

0x542d,	// (0x00014170) cell_video_dialer_keypad_pane_g2_ParamLimits

0x542d,	// (0x00014170) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001e5d8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001e5d8) cell_video_dialer_keypad_pane_g

0x5445,	// (0x00014188) cell_video_dialer_keypad_pane_t1

0x94ff,	// (0x00018242) bg_popup_window_pane_cp012

0xa6a0,	// (0x000193e3) heading_pane_cp06

0xde13,	// (0x0001cb56) ncim_query_content_pane

0x94ff,	// (0x00018242) bg_popup_heading_pane_cp01

0xde1b,	// (0x0001cb5e) ncim_heading_pane_t1

0xde29,	// (0x0001cb6c) ncim_indicator_popup_pane

0xde3b,	// (0x0001cb7e) ncim_query_button_pane

0xde4f,	// (0x0001cb92) ncim_query_content_pane_t1

0xde61,	// (0x0001cba4) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001e93e) ncim_query_content_pane_t

0xde9b,	// (0x0001cbde) ncim_query_list_pane

0xdead,	// (0x0001cbf0) ncim_query_popup_pane

0xde29,	// (0x0001cb6c) ncim_indicator_popup_pane_ParamLimits

0x7630,	// (0x00016373) ncim_query_content_pane_g1_ParamLimits

0x7630,	// (0x00016373) ncim_query_content_pane_g1

0xde4f,	// (0x0001cb92) ncim_query_content_pane_t1_ParamLimits

0xde61,	// (0x0001cba4) ncim_query_content_pane_t2_ParamLimits

0x763c,	// (0x0001637f) ncim_query_content_pane_t3_ParamLimits

0x763c,	// (0x0001637f) ncim_query_content_pane_t3

0x7664,	// (0x000163a7) ncim_query_content_pane_t4_ParamLimits

0x7664,	// (0x000163a7) ncim_query_content_pane_t4

0x768c,	// (0x000163cf) ncim_query_content_pane_t5_ParamLimits

0x768c,	// (0x000163cf) ncim_query_content_pane_t5

0xde73,	// (0x0001cbb6) ncim_query_content_pane_t6_ParamLimits

0xde73,	// (0x0001cbb6) ncim_query_content_pane_t6

0xfbfb,	// (0x0001e93e) ncim_query_content_pane_t_ParamLimits

0xde9b,	// (0x0001cbde) ncim_query_list_pane_ParamLimits

0xdead,	// (0x0001cbf0) ncim_query_popup_pane_ParamLimits

0xdec1,	// (0x0001cc04) wait_bar_pane_cp04

0x94ff,	// (0x00018242) input_focus_pane_cp011

0xdec9,	// (0x0001cc0c) ncim_query_popup_pane_t1

0xded7,	// (0x0001cc1a) ncim_list_query_list_pane_ParamLimits

0xded7,	// (0x0001cc1a) ncim_list_query_list_pane

0x94ff,	// (0x00018242) bg_button_pane_cp027

0xdee4,	// (0x0001cc27) ncim_query_button_pane_g1

0x94ff,	// (0x00018242) list_highlight_pane_cp012

0xdeee,	// (0x0001cc31) ncim_list_query_list_pane_g1

0xdef6,	// (0x0001cc39) ncim_list_query_list_pane_t1

0xd110,	// (0x0001be53) cam4_indicators_pane_g3_ParamLimits

0xd110,	// (0x0001be53) cam4_indicators_pane_g3

0xd190,	// (0x0001bed3) vid4_indicators_pane_g5_ParamLimits

0xd190,	// (0x0001bed3) vid4_indicators_pane_g5

0xd88c,	// (0x0001c5cf) vid4_progress_pane_g5_ParamLimits

0xd88c,	// (0x0001c5cf) vid4_progress_pane_g5

0x751b,	// (0x0001625e) main_ncimui_pane_g1

0x7584,	// (0x000162c7) ncimui_group_query_pane_ParamLimits

0x7584,	// (0x000162c7) ncimui_group_query_pane

0x75cc,	// (0x0001630f) ncimui_list_pane_ParamLimits

0x75cc,	// (0x0001630f) ncimui_list_pane

0x75f3,	// (0x00016336) ncimui_text_pane_ParamLimits

0x75f3,	// (0x00016336) ncimui_text_pane

0x76b4,	// (0x000163f7) ncimui_text_pane_t1_ParamLimits

0x76b4,	// (0x000163f7) ncimui_text_pane_t1

0xdf04,	// (0x0001cc47) ncimui_list_single_graphic_pane_ParamLimits

0xdf04,	// (0x0001cc47) ncimui_list_single_graphic_pane

0x76d2,	// (0x00016415) ncimui_query_pane_ParamLimits

0x76d2,	// (0x00016415) ncimui_query_pane

0x94ff,	// (0x00018242) list_highlight_pane_cp013

0xdf14,	// (0x0001cc57) ncim_list_query_list_pane_t1_copy1

0xdeee,	// (0x0001cc31) ncim_list_single_graphic_pane_g1

0x76e5,	// (0x00016428) ncim_query_button_pane_cp01

0x76f1,	// (0x00016434) ncim_query_entry_pane_ParamLimits

0x76f1,	// (0x00016434) ncim_query_entry_pane

0x7704,	// (0x00016447) ncimui_query_pane_g1

0x7710,	// (0x00016453) ncimui_query_pane_t1_ParamLimits

0x7710,	// (0x00016453) ncimui_query_pane_t1

0x956f,	// (0x000182b2) input_focus_pane_cp012

0xdf22,	// (0x0001cc65) ncim_query_entry_pane_t1

0x9cd2,	// (0x00018a15) main_im_pane_ParamLimits

0x956f,	// (0x000182b2) main_mobtv_pane_ParamLimits

0x956f,	// (0x000182b2) main_mobtv_pane

0x72e2,	// (0x00016025) main_cset6_slider_pane_g18_ParamLimits

0x72e2,	// (0x00016025) main_cset6_slider_pane_g18

0x72ee,	// (0x00016031) main_cset6_slider_pane_g19_ParamLimits

0x72ee,	// (0x00016031) main_cset6_slider_pane_g19

0xd2e4,	// (0x0001c027) bg_main_mobtv_pane_ParamLimits

0xd2e4,	// (0x0001c027) bg_main_mobtv_pane

0x7729,	// (0x0001646c) main_mobtv_info_pane

0x7732,	// (0x00016475) main_mobtv_loading_pane_ParamLimits

0x7732,	// (0x00016475) main_mobtv_loading_pane

0xdf34,	// (0x0001cc77) main_mobtv_pg_channel_list_pane

0xdf3e,	// (0x0001cc81) main_mobtv_pg_hdr_pane

0x773f,	// (0x00016482) main_mobtv_programe_curr_pane_ParamLimits

0x773f,	// (0x00016482) main_mobtv_programe_curr_pane

0x774c,	// (0x0001648f) main_mobtv_programe_next_pane_ParamLimits

0x774c,	// (0x0001648f) main_mobtv_programe_next_pane

0xdf47,	// (0x0001cc8a) popup_mobtv_noti_window

0xc402,	// (0x0001b145) main_tv_pg_hdr_pane_g1

0xdf4f,	// (0x0001cc92) main_tv_pg_hdr_pane_g2

0xdf57,	// (0x0001cc9a) main_tv_pg_hdr_pane_g3

0xdf5f,	// (0x0001cca2) main_tv_pg_hdr_pane_g4

0xdf67,	// (0x0001ccaa) main_tv_pg_hdr_pane_g5

0xdf71,	// (0x0001ccb4) main_tv_pg_hdr_pane_g6

0xdf7b,	// (0x0001ccbe) main_tv_pg_hdr_pane_g7

0xdf85,	// (0x0001ccc8) main_tv_pg_hdr_pane_g8

0xdf8f,	// (0x0001ccd2) main_tv_pg_hdr_pane_g9

0xdf99,	// (0x0001ccdc) main_tv_pg_hdr_pane_g10

0xdfa3,	// (0x0001cce6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001e94b) main_tv_pg_hdr_pane_g

0xdfad,	// (0x0001ccf0) main_tv_pg_hdr_pane_t1

0xdfbb,	// (0x0001ccfe) main_tv_pg_hdr_pane_t2

0xdfc9,	// (0x0001cd0c) main_tv_pg_hdr_pane_t3

0xdfd9,	// (0x0001cd1c) main_tv_pg_hdr_pane_t4

0xdfe9,	// (0x0001cd2c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001e962) main_tv_pg_hdr_pane_t

0xdff9,	// (0x0001cd3c) single_mobtv_pg_channel_pane_ParamLimits

0xdff9,	// (0x0001cd3c) single_mobtv_pg_channel_pane

0xe00b,	// (0x0001cd4e) single_mobtv_pg_channel_table_pane

0xe014,	// (0x0001cd57) single_mobtv_pg_channel_thumb_pane

0xe01d,	// (0x0001cd60) single_tv_pg_channel_pane_g1

0xe026,	// (0x0001cd69) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001e96d) single_tv_pg_channel_pane_g

0xc66e,	// (0x0001b3b1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc66e,	// (0x0001b3b1) bg_single_mobtv_pg_channel_thumb_pane

0xe02f,	// (0x0001cd72) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe02f,	// (0x0001cd72) single_mobtv_pg_channel_thumb_pane_g1

0xe03d,	// (0x0001cd80) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe03d,	// (0x0001cd80) single_mobtv_pg_channel_thumb_pane_g2

0xe049,	// (0x0001cd8c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe049,	// (0x0001cd8c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001e972) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001e972) single_mobtv_pg_channel_thumb_pane_g

0xe055,	// (0x0001cd98) single_mobtv_pg_channel_thumb_pane_t1

0xe063,	// (0x0001cda6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001e979) single_mobtv_pg_channel_thumb_pane_t

0xc402,	// (0x0001b145) bg_single_mobtv_pg_channel_table_pane_g1

0xc402,	// (0x0001b145) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001e41f) bg_single_mobtv_pg_channel_table_pane_g

0xe071,	// (0x0001cdb4) single_mobtv_pg_channel_table_pane_t1

0xe07f,	// (0x0001cdc2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001e97e) single_mobtv_pg_channel_table_pane_t

0x7761,	// (0x000164a4) main_mobtv_info_pane_g1_ParamLimits

0x7761,	// (0x000164a4) main_mobtv_info_pane_g1

0x777f,	// (0x000164c2) main_mobtv_info_pane_t1_ParamLimits

0x777f,	// (0x000164c2) main_mobtv_info_pane_t1

0x77f7,	// (0x0001653a) main_mobtv_info_pane_t2_ParamLimits

0x77f7,	// (0x0001653a) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001e988) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001e988) main_mobtv_info_pane_t

0x7886,	// (0x000165c9) wait_bar_pane_cp05

0x7898,	// (0x000165db) main_mobtv_loading_pane_g1_ParamLimits

0x7898,	// (0x000165db) main_mobtv_loading_pane_g1

0x78ab,	// (0x000165ee) main_mobtv_loading_pane_g2_ParamLimits

0x78ab,	// (0x000165ee) main_mobtv_loading_pane_g2

0x78b7,	// (0x000165fa) main_mobtv_loading_pane_g3_ParamLimits

0x78b7,	// (0x000165fa) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001e98f) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001e98f) main_mobtv_loading_pane_g

0xe08d,	// (0x0001cdd0) main_mobtv_loading_pane_t1_ParamLimits

0xe08d,	// (0x0001cdd0) main_mobtv_loading_pane_t1

0xe0a5,	// (0x0001cde8) main_mobtv_loading_pane_t2_ParamLimits

0xe0a5,	// (0x0001cde8) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001e996) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001e996) main_mobtv_loading_pane_t

0x78ca,	// (0x0001660d) wait_bar_pane_cp06_ParamLimits

0x78ca,	// (0x0001660d) wait_bar_pane_cp06

0xe0c9,	// (0x0001ce0c) main_mobtv_programe_curr_pane_t1

0xe0d7,	// (0x0001ce1a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001e99b) main_mobtv_programe_curr_pane_t

0xe0e5,	// (0x0001ce28) main_mobtv_programe_next_pane_t1

0xe0f3,	// (0x0001ce36) main_mobtv_programe_next_pane_t2

0xe101,	// (0x0001ce44) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001e9a0) main_mobtv_programe_next_pane_t

0x94ff,	// (0x00018242) bg_popup_mobtv_noti_window_pane

0xe10f,	// (0x0001ce52) popup_mobtv_noti_window_g1

0xe117,	// (0x0001ce5a) popup_mobtv_noti_window_t1

0xe125,	// (0x0001ce68) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001e9a7) popup_mobtv_noti_window_t

0xc402,	// (0x0001b145) bg_popup_mobtv_noti_window_pane_g1

0x94ff,	// (0x00018242) sc_clock_pane

0x94ff,	// (0x00018242) main_fs_bigclock_pane

0x6f09,	// (0x00015c4c) blid2_tripm_pane_t4_ParamLimits

0x6f09,	// (0x00015c4c) blid2_tripm_pane_t4

0x78d9,	// (0x0001661c) sc_clock_pane_g1_ParamLimits

0x78d9,	// (0x0001661c) sc_clock_pane_g1

0x78eb,	// (0x0001662e) sc_clock_pane_t1_ParamLimits

0x78eb,	// (0x0001662e) sc_clock_pane_t1

0x790d,	// (0x00016650) sc_clock_pane_t2_ParamLimits

0x790d,	// (0x00016650) sc_clock_pane_t2

0x7925,	// (0x00016668) sc_clock_pane_t3_ParamLimits

0x7925,	// (0x00016668) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001e9ac) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001e9ac) sc_clock_pane_t

0x89bb,	// (0x000176fe) main_fs_bigclock_indicator_pane_ParamLimits

0x89bb,	// (0x000176fe) main_fs_bigclock_indicator_pane

0x79cb,	// (0x0001670e) main_fs_bigclock_pane_g1_ParamLimits

0x79cb,	// (0x0001670e) main_fs_bigclock_pane_g1

0x89c7,	// (0x0001770a) main_fs_bigclock_pane_t1_ParamLimits

0x89c7,	// (0x0001770a) main_fs_bigclock_pane_t1

0x89d9,	// (0x0001771c) main_fs_bigclock_pane_t2_ParamLimits

0x89d9,	// (0x0001771c) main_fs_bigclock_pane_t2

0x89ed,	// (0x00017730) main_fs_bigclock_pane_t3_ParamLimits

0x89ed,	// (0x00017730) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ebb1) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ebb1) main_fs_bigclock_pane_t

0xec8b,	// (0x0001d9ce) main_fs_bigclock_indicator_pane_g1

0xde43,	// (0x0001cb86) ncim_query_content_pane_g2_ParamLimits

0xde43,	// (0x0001cb86) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001e939) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001e939) ncim_query_content_pane_g

0x793e,	// (0x00016681) sc_clock_pane_t4_ParamLimits

0x793e,	// (0x00016681) sc_clock_pane_t4

0x956f,	// (0x000182b2) main_radioblah_pane

0xd056,	// (0x0001bd99) cell_call4_button_pane_t1_copy1_ParamLimits

0xd056,	// (0x0001bd99) cell_call4_button_pane_t1_copy1

0x7533,	// (0x00016276) main_ncimui_pane_t1_ParamLimits

0x7533,	// (0x00016276) main_ncimui_pane_t1

0x754d,	// (0x00016290) main_ncimui_pane_t2_ParamLimits

0x754d,	// (0x00016290) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001e932) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001e932) main_ncimui_pane_t

0xe26a,	// (0x0001cfad) main_radioblah_anim_pane_ParamLimits

0xe26a,	// (0x0001cfad) main_radioblah_anim_pane

0xe27b,	// (0x0001cfbe) main_radioblah_info_pane_ParamLimits

0xe27b,	// (0x0001cfbe) main_radioblah_info_pane

0xe28f,	// (0x0001cfd2) main_radioblah_pane_t1_ParamLimits

0xe28f,	// (0x0001cfd2) main_radioblah_pane_t1

0xe2ab,	// (0x0001cfee) main_radioblah_pane_t2_ParamLimits

0xe2ab,	// (0x0001cfee) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001e9cd) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001e9cd) main_radioblah_pane_t

0x7a2a,	// (0x0001676d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a2a,	// (0x0001676d) main_radioblah_rocker_ctrl_pane

0xe2f3,	// (0x0001d036) main_radioblah_info_pane_t1_ParamLimits

0xe2f3,	// (0x0001d036) main_radioblah_info_pane_t1

0x7a82,	// (0x000167c5) main_radioblah_info_pane_t2_ParamLimits

0x7a82,	// (0x000167c5) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001e9d6) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001e9d6) main_radioblah_info_pane_t

0xc402,	// (0x0001b145) main_radioblah_rocker_ctrl_pane_g1

0x7b32,	// (0x00016875) main_radioblah_rocker_ctrl_pane_g2

0x7b3a,	// (0x0001687d) main_radioblah_rocker_ctrl_pane_g3

0x7b42,	// (0x00016885) main_radioblah_rocker_ctrl_pane_g4

0x7b4a,	// (0x0001688d) main_radioblah_rocker_ctrl_pane_g5

0x7b52,	// (0x00016895) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001e9df) main_radioblah_rocker_ctrl_pane_g

0x71b8,	// (0x00015efb) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0e0,	// (0x0001be23) cam4_image_uncrop_qvga_pane

0xd139,	// (0x0001be7c) vid4_image_uncrop_qcif_pane

0xda82,	// (0x0001c7c5) cam6_image_uncrop_qvga_pane_ParamLimits

0xda82,	// (0x0001c7c5) cam6_image_uncrop_qvga_pane

0xdb4a,	// (0x0001c88d) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb4a,	// (0x0001c88d) vid6_image_uncrop_qcif_pane

0x94ff,	// (0x00018242) bg_popup_preview_window_pane_cp03

0xddf5,	// (0x0001cb38) list_cset_text2_pane

0xddfd,	// (0x0001cb40) main_cset6_text2_pane_g1

0xde05,	// (0x0001cb48) main_cset6_text2_pane_t1

0x7b5a,	// (0x0001689d) list_cset_text2_pane_t1_ParamLimits

0x7b5a,	// (0x0001689d) list_cset_text2_pane_t1

0x956f,	// (0x000182b2) main_radioblah_pane_ParamLimits

0x7872,	// (0x000165b5) main_mobtv_info_pane_t3_ParamLimits

0x7872,	// (0x000165b5) main_mobtv_info_pane_t3

0x7a18,	// (0x0001675b) main_radioblah_pane_g1

0x7a52,	// (0x00016795) main_radioblah_info_pane_g1

0x7ad7,	// (0x0001681a) main_radioblah_info_pane_t3_ParamLimits

0x7ad7,	// (0x0001681a) main_radioblah_info_pane_t3

0x22ad,	// (0x00010ff0) highlight_cell_cale_month_pane_ParamLimits

0x22ad,	// (0x00010ff0) highlight_cell_cale_month_pane

0x94ff,	// (0x00018242) main_phob_fisheye_pane

0xc776,	// (0x0001b4b9) scroll_pane_cp0031_ParamLimits

0xc776,	// (0x0001b4b9) scroll_pane_cp0031

0xdc58,	// (0x0001c99b) wait_bar_pane_cp08_ParamLimits

0x723d,	// (0x00015f80) cset_list_set_pane_copy1_ParamLimits

0xe32d,	// (0x0001d070) highlight_cell_cale_month_pane_g1

0x7b73,	// (0x000168b6) highlight_cell_cale_month_pane_t1

0xd84f,	// (0x0001c592) list_gen_pane_cp01

0xd387,	// (0x0001c0ca) scroll_pane_01

0xe335,	// (0x0001d078) list_single_double_fisheye_pane

0x7b81,	// (0x000168c4) list_double_fisheye_pane_g1_ParamLimits

0x7b81,	// (0x000168c4) list_double_fisheye_pane_g1

0x7b8d,	// (0x000168d0) list_double_fisheye_pane_g2_ParamLimits

0x7b8d,	// (0x000168d0) list_double_fisheye_pane_g2

0x7ba1,	// (0x000168e4) list_double_fisheye_pane_g3_ParamLimits

0x7ba1,	// (0x000168e4) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001e9ec) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001e9ec) list_double_fisheye_pane_g

0x7bca,	// (0x0001690d) list_double_fisheye_pane_t1_ParamLimits

0x7bca,	// (0x0001690d) list_double_fisheye_pane_t1

0x7be5,	// (0x00016928) list_double_fisheye_pane_t2_ParamLimits

0x7be5,	// (0x00016928) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001e9f7) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001e9f7) list_double_fisheye_pane_t

0x94ff,	// (0x00018242) main_call5_pane

0x7969,	// (0x000166ac) sc_swipe_pane_ParamLimits

0x7969,	// (0x000166ac) sc_swipe_pane

0x7c1a,	// (0x0001695d) call5_image_pane_ParamLimits

0x7c1a,	// (0x0001695d) call5_image_pane

0x7c37,	// (0x0001697a) call5_swipe_1_pane_ParamLimits

0x7c37,	// (0x0001697a) call5_swipe_1_pane

0x7c4a,	// (0x0001698d) call5_swipe_2_pane_ParamLimits

0x7c4a,	// (0x0001698d) call5_swipe_2_pane

0x7c75,	// (0x000169b8) popup_call5_audio_first_window_ParamLimits

0x7c75,	// (0x000169b8) popup_call5_audio_first_window

0xc66e,	// (0x0001b3b1) call5_swipe_1_pane_g1_ParamLimits

0xc66e,	// (0x0001b3b1) call5_swipe_1_pane_g1

0xe33e,	// (0x0001d081) call5_swipe_1_pane_g2_ParamLimits

0xe33e,	// (0x0001d081) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001e9fc) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001e9fc) call5_swipe_1_pane_g

0xe34a,	// (0x0001d08d) call5_swipe_1_pane_t1_ParamLimits

0xe34a,	// (0x0001d08d) call5_swipe_1_pane_t1

0xc66e,	// (0x0001b3b1) call5_swipe_2_pane_g1_ParamLimits

0xc66e,	// (0x0001b3b1) call5_swipe_2_pane_g1

0xe35f,	// (0x0001d0a2) call5_swipe_2_pane_g2_ParamLimits

0xe35f,	// (0x0001d0a2) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001ea01) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001ea01) call5_swipe_2_pane_g

0xe36b,	// (0x0001d0ae) call5_swipe_2_pane_t1_ParamLimits

0xe36b,	// (0x0001d0ae) call5_swipe_2_pane_t1

0xe380,	// (0x0001d0c3) sc_swipe_pane_g1_ParamLimits

0xe380,	// (0x0001d0c3) sc_swipe_pane_g1

0xe38d,	// (0x0001d0d0) sc_swipe_pane_g2_ParamLimits

0xe38d,	// (0x0001d0d0) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001ea06) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001ea06) sc_swipe_pane_g

0xe399,	// (0x0001d0dc) sc_swipe_pane_t1_ParamLimits

0xe399,	// (0x0001d0dc) sc_swipe_pane_t1

0x94ff,	// (0x00018242) main_cmail_launcher_pane

0x7c86,	// (0x000169c9) aid_size_cell_cmail_l_ParamLimits

0x7c86,	// (0x000169c9) aid_size_cell_cmail_l

0x7ca0,	// (0x000169e3) grid_cmail_l_pane_ParamLimits

0x7ca0,	// (0x000169e3) grid_cmail_l_pane

0x7cbb,	// (0x000169fe) cell_cmail_l_pane_ParamLimits

0x7cbb,	// (0x000169fe) cell_cmail_l_pane

0x7ce1,	// (0x00016a24) cell_cmail_l_pane_g1_ParamLimits

0x7ce1,	// (0x00016a24) cell_cmail_l_pane_g1

0x7ced,	// (0x00016a30) cell_cmail_l_pane_t1_ParamLimits

0x7ced,	// (0x00016a30) cell_cmail_l_pane_t1

0xe3ae,	// (0x0001d0f1) cell_cmail_l_pane_t2_ParamLimits

0xe3ae,	// (0x0001d0f1) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001ea0b) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001ea0b) cell_cmail_l_pane_t

0x956f,	// (0x000182b2) grid_highlight_pane_cp018_ParamLimits

0x956f,	// (0x000182b2) grid_highlight_pane_cp018

0x0346,	// (0x0000f089) main2_pane_ParamLimits

0x0346,	// (0x0000f089) main2_pane

0x9d8f,	// (0x00018ad2) popup_sp_fs_action_menu_bg_pane_g1

0x9d97,	// (0x00018ada) popup_sp_fs_action_menu_bg_pane_g2

0x9d9f,	// (0x00018ae2) popup_sp_fs_action_menu_bg_pane_g3

0x9da7,	// (0x00018aea) popup_sp_fs_action_menu_bg_pane_g4

0x9daf,	// (0x00018af2) popup_sp_fs_action_menu_bg_pane_g5

0x9db7,	// (0x00018afa) popup_sp_fs_action_menu_bg_pane_g6

0x9dbf,	// (0x00018b02) popup_sp_fs_action_menu_bg_pane_g7

0x9dc7,	// (0x00018b0a) popup_sp_fs_action_menu_bg_pane_g8

0x9dcf,	// (0x00018b12) popup_sp_fs_action_menu_bg_pane_g9

0x9dd7,	// (0x00018b1a) popup_sp_fs_action_menu_bg_pane_g10

0x9dd7,	// (0x00018b1a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001decd) popup_sp_fs_action_menu_bg_pane_g

0x1275,	// (0x0000ffb8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t3_g3_g1

0x1281,	// (0x0000ffc4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x2_t3_g3_g2

0x128d,	// (0x0000ffd0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001df7b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001df7b) list_medium_line_x2_t3_g3_g

0x1299,	// (0x0000ffdc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1299,	// (0x0000ffdc) list_medium_line_x2_t3_g3_t1

0x12ae,	// (0x0000fff1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12ae,	// (0x0000fff1) list_medium_line_x2_t3_g3_t2

0x12c2,	// (0x00010005) list_medium_line_x2_t3_g3_t3_ParamLimits

0x12c2,	// (0x00010005) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001df82) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001df82) list_medium_line_x2_t3_g3_t

0x1275,	// (0x0000ffb8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t3_g2_g1

0x128d,	// (0x0000ffd0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001df89) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001df89) list_medium_line_x2_t3_g2_g

0x12d7,	// (0x0001001a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12d7,	// (0x0001001a) list_medium_line_x2_t3_g2_t1

0x12ed,	// (0x00010030) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12ed,	// (0x00010030) list_medium_line_x2_t3_g2_t2

0x12ff,	// (0x00010042) list_medium_line_x2_t3_g2_t3_ParamLimits

0x12ff,	// (0x00010042) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001df8e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001df8e) list_medium_line_x2_t3_g2_t

0x1275,	// (0x0000ffb8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t4_g4_g1

0x131c,	// (0x0001005f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x131c,	// (0x0001005f) list_medium_line_x2_t4_g4_g2

0x1281,	// (0x0000ffc4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x2_t4_g4_g3

0x1328,	// (0x0001006b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1328,	// (0x0001006b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001df95) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001df95) list_medium_line_x2_t4_g4_g

0x1334,	// (0x00010077) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1334,	// (0x00010077) list_medium_line_x2_t4_g4_t1

0x134e,	// (0x00010091) list_medium_line_x2_t4_g4_t2_ParamLimits

0x134e,	// (0x00010091) list_medium_line_x2_t4_g4_t2

0x1364,	// (0x000100a7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1364,	// (0x000100a7) list_medium_line_x2_t4_g4_t3

0x1379,	// (0x000100bc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1379,	// (0x000100bc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001df9e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001df9e) list_medium_line_x2_t4_g4_t

0x1275,	// (0x0000ffb8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t2_g4_g1

0x131c,	// (0x0001005f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x131c,	// (0x0001005f) list_medium_line_x2_t2_g4_g2

0x1281,	// (0x0000ffc4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x2_t2_g4_g3

0x128d,	// (0x0000ffd0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e005) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e005) list_medium_line_x2_t2_g4_g

0x22d3,	// (0x00011016) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22d3,	// (0x00011016) list_medium_line_x2_t2_g4_t1

0x12c2,	// (0x00010005) list_medium_line_x2_t2_g4_t2_ParamLimits

0x12c2,	// (0x00010005) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e00e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e00e) list_medium_line_x2_t2_g4_t

0x1275,	// (0x0000ffb8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t2_g3_g1

0x1281,	// (0x0000ffc4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x2_t2_g3_g2

0x128d,	// (0x0000ffd0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001df7b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001df7b) list_medium_line_x2_t2_g3_g

0x22e8,	// (0x0001102b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22e8,	// (0x0001102b) list_medium_line_x2_t2_g3_t1

0x12c2,	// (0x00010005) list_medium_line_x2_t2_g3_t2_ParamLimits

0x12c2,	// (0x00010005) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e013) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e013) list_medium_line_x2_t2_g3_t

0x2431,	// (0x00011174) main_sp_fs_list_pane_ParamLimits

0x2431,	// (0x00011174) main_sp_fs_list_pane

0xd300,	// (0x0001c043) sp_fs_scroll_pane_ParamLimits

0xd300,	// (0x0001c043) sp_fs_scroll_pane

0x243d,	// (0x00011180) list_medium_line_x2_t3_t1

0x244d,	// (0x00011190) list_medium_line_x2_t3_t2

0x245b,	// (0x0001119e) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e05e) list_medium_line_x2_t3_t

0x2469,	// (0x000111ac) list_medium_line_x3_t4_t1

0x2479,	// (0x000111bc) list_medium_line_x3_t4_t2

0x2487,	// (0x000111ca) list_medium_line_x3_t4_t3

0x245b,	// (0x0001119e) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e065) list_medium_line_x3_t4_t

0x2495,	// (0x000111d8) list_medium_line_x4_t5_t1

0x24a5,	// (0x000111e8) list_medium_line_x4_t5_t2

0x2487,	// (0x000111ca) list_medium_line_x4_t5_t3

0x24b3,	// (0x000111f6) list_medium_line_x4_t5_t4

0x245b,	// (0x0001119e) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e06e) list_medium_line_x4_t5_t

0x1275,	// (0x0000ffb8) list_medium_line_t4_g4_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_t4_g4_g1

0x24c1,	// (0x00011204) list_medium_line_t4_g4_g2_ParamLimits

0x24c1,	// (0x00011204) list_medium_line_t4_g4_g2

0x24cd,	// (0x00011210) list_medium_line_t4_g4_g3_ParamLimits

0x24cd,	// (0x00011210) list_medium_line_t4_g4_g3

0x128d,	// (0x0000ffd0) list_medium_line_t4_g4_g4_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e079) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e079) list_medium_line_t4_g4_g

0x24d9,	// (0x0001121c) list_medium_line_t4_g4_t1_ParamLimits

0x24d9,	// (0x0001121c) list_medium_line_t4_g4_t1

0x24ee,	// (0x00011231) list_medium_line_t4_g4_t2_ParamLimits

0x24ee,	// (0x00011231) list_medium_line_t4_g4_t2

0x2503,	// (0x00011246) list_medium_line_t4_g4_t3_ParamLimits

0x2503,	// (0x00011246) list_medium_line_t4_g4_t3

0x12c2,	// (0x00010005) list_medium_line_t4_g4_t4_ParamLimits

0x12c2,	// (0x00010005) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e082) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e082) list_medium_line_t4_g4_t

0x25cb,	// (0x0001130e) chi_dic_find_pane_g1

0x35e2,	// (0x00012325) main_tport_pane

0x6571,	// (0x000152b4) list_medium_line_plain_t1

0x6619,	// (0x0001535c) list_medium_line_t2_g2_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_t2_g2_g1

0x6625,	// (0x00015368) list_medium_line_t2_g2_g2_ParamLimits

0x6625,	// (0x00015368) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001e743) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001e743) list_medium_line_t2_g2_g

0x6631,	// (0x00015374) list_medium_line_t2_g2_t1_ParamLimits

0x6631,	// (0x00015374) list_medium_line_t2_g2_t1

0x664b,	// (0x0001538e) list_medium_line_t2_g2_t2_ParamLimits

0x664b,	// (0x0001538e) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001e748) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001e748) list_medium_line_t2_g2_t

0xd8c2,	// (0x0001c605) aid_sp_fs_list_icon_a_sm

0xd8ca,	// (0x0001c60d) aid_sp_fs_list_icon_d

0xd8d2,	// (0x0001c615) aid_sp_fs_text_primary

0xd8db,	// (0x0001c61e) aid_sp_fs_text_secondary

0x6cb6,	// (0x000159f9) list_medium_line

0x6cb6,	// (0x000159f9) list_medium_line_g2

0x6cb6,	// (0x000159f9) list_medium_line_g3

0x6cb6,	// (0x000159f9) list_medium_line_plain

0x6cb6,	// (0x000159f9) list_medium_line_plain_t2

0x6cb6,	// (0x000159f9) list_medium_line_plain_t3

0x6cb6,	// (0x000159f9) list_medium_line_right_icon

0x6cb6,	// (0x000159f9) list_medium_line_right_iconx2

0x6cb6,	// (0x000159f9) list_medium_line_t2

0x6cb6,	// (0x000159f9) list_medium_line_t2_g2

0x6cb6,	// (0x000159f9) list_medium_line_t2_g3

0x6cb6,	// (0x000159f9) list_medium_line_t2_right_icon

0x6cb6,	// (0x000159f9) list_medium_line_t2_right_iconx2

0x6cb6,	// (0x000159f9) list_medium_line_t3

0x6cb6,	// (0x000159f9) list_medium_line_t3_g2

0x6cb6,	// (0x000159f9) list_medium_line_t3_g3

0x6cb6,	// (0x000159f9) list_medium_line_t3_right_iconx2

0x6cbf,	// (0x00015a02) list_medium_line_t4_g4

0x6cc8,	// (0x00015a0b) list_medium_line_x2

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t2_g2

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t2_g3

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t2_g4

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t3

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t3_g2

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t3_g3

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t3_g4

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t4_g2

0x6cc8,	// (0x00015a0b) list_medium_line_x2_t4_g4

0x6cd1,	// (0x00015a14) list_medium_line_x3

0x6cd1,	// (0x00015a14) list_medium_line_x3_t4

0x6cd1,	// (0x00015a14) list_medium_line_x3_t4_g4

0x6cbf,	// (0x00015a02) list_medium_line_x4_t4

0x6cbf,	// (0x00015a02) list_medium_line_x4_t4_g7

0x6cbf,	// (0x00015a02) list_medium_line_x4_t5

0x6cda,	// (0x00015a1d) list_single_fs_dyc_pane_ParamLimits

0x6cda,	// (0x00015a1d) list_single_fs_dyc_pane

0x1275,	// (0x0000ffb8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x4_t4_g7_g1

0x7436,	// (0x00016179) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7436,	// (0x00016179) list_medium_line_x4_t4_g7_g2

0x7442,	// (0x00016185) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7442,	// (0x00016185) list_medium_line_x4_t4_g7_g3

0x7451,	// (0x00016194) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7451,	// (0x00016194) list_medium_line_x4_t4_g7_g4

0x745d,	// (0x000161a0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x745d,	// (0x000161a0) list_medium_line_x4_t4_g7_g5

0x746c,	// (0x000161af) list_medium_line_x4_t4_g7_g6_ParamLimits

0x746c,	// (0x000161af) list_medium_line_x4_t4_g7_g6

0x747b,	// (0x000161be) list_medium_line_x4_t4_g7_g7_ParamLimits

0x747b,	// (0x000161be) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001e913) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001e913) list_medium_line_x4_t4_g7_g

0x7487,	// (0x000161ca) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7487,	// (0x000161ca) list_medium_line_x4_t4_g7_t1

0x749c,	// (0x000161df) list_medium_line_x4_t4_g7_t2_ParamLimits

0x749c,	// (0x000161df) list_medium_line_x4_t4_g7_t2

0x74b1,	// (0x000161f4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74b1,	// (0x000161f4) list_medium_line_x4_t4_g7_t3

0x74c6,	// (0x00016209) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74c6,	// (0x00016209) list_medium_line_x4_t4_g7_t4

0x74d8,	// (0x0001621b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74d8,	// (0x0001621b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001e922) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001e922) list_medium_line_x4_t4_g7_t

0x74ea,	// (0x0001622d) list_single_dyc_row_pane_ParamLimits

0x74ea,	// (0x0001622d) list_single_dyc_row_pane

0x7c07,	// (0x0001694a) call5_gesture_pane_ParamLimits

0x7c07,	// (0x0001694a) call5_gesture_pane

0x7c5d,	// (0x000169a0) call5_windows_pane_ParamLimits

0x7c5d,	// (0x000169a0) call5_windows_pane

0x7d03,	// (0x00016a46) call5_swipe_1_pane_cp_ParamLimits

0x7d03,	// (0x00016a46) call5_swipe_1_pane_cp

0x7d0f,	// (0x00016a52) call5_swipe_2_pane_cp_ParamLimits

0x7d0f,	// (0x00016a52) call5_swipe_2_pane_cp

0x9f03,	// (0x00018c46) call5_image_pane_cp

0x7d1b,	// (0x00016a5e) popup_call5_audio_first_window_cp_ParamLimits

0x7d1b,	// (0x00016a5e) popup_call5_audio_first_window_cp

0xe380,	// (0x0001d0c3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe380,	// (0x0001d0c3) call5_swipe_1_pane_g1_cp

0xe3c0,	// (0x0001d103) call5_swipe_1_pane_g2_cp

0xe399,	// (0x0001d0dc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe399,	// (0x0001d0dc) call5_swipe_1_pane_t1_cp

0xe380,	// (0x0001d0c3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe380,	// (0x0001d0c3) call5_swipe_2_pane_g1_cp

0xe3c8,	// (0x0001d10b) call5_swipe_2_pane_g2_cp

0xe3d0,	// (0x0001d113) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3d0,	// (0x0001d113) call5_swipe_2_pane_t1_cp

0x956f,	// (0x000182b2) main_sp_fs_email_pane

0xe3e5,	// (0x0001d128) main_sp_fs_listscroll_pane_te

0x7d29,	// (0x00016a6c) popup_sp_fs_action_menu_pane_ParamLimits

0x7d29,	// (0x00016a6c) popup_sp_fs_action_menu_pane

0xc402,	// (0x0001b145) bg_sp_fs_ctrlbar_pane_g1

0xe3ee,	// (0x0001d131) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3f7,	// (0x0001d13a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe400,	// (0x0001d143) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc402,	// (0x0001b145) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001ea10) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1e7,	// (0x0001af2a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1e7,	// (0x0001af2a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe409,	// (0x0001d14c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe409,	// (0x0001d14c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe415,	// (0x0001d158) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe415,	// (0x0001d158) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001ea19) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001ea19) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe421,	// (0x0001d164) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe421,	// (0x0001d164) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d6d,	// (0x00016ab0) list_medium_line_t2_right_icon_g1

0x7d75,	// (0x00016ab8) list_medium_line_t2_right_icon_t1

0x7d85,	// (0x00016ac8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001ea1e) list_medium_line_t2_right_icon_t

0xbee7,	// (0x0001ac2a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbee7,	// (0x0001ac2a) bg_sp_fs_ctrlbar_pane

0x7ddf,	// (0x00016b22) main_sp_fs_ctrlbar_button_pane_cp01

0x7de9,	// (0x00016b2c) main_sp_fs_ctrlbar_ddmenu_pane

0xe473,	// (0x0001d1b6) main_sp_fs_ctrlbar_pane_g1

0xe47f,	// (0x0001d1c2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001ea23) main_sp_fs_ctrlbar_pane_g

0xe48b,	// (0x0001d1ce) main_sp_fs_ctrlbar_pane_t1

0x7df3,	// (0x00016b36) main_sp_fs_ctrlbar_pane

0x7e17,	// (0x00016b5a) main_sp_fs_listscroll_pane_te_cp01

0x7e37,	// (0x00016b7a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e37,	// (0x00016b7a) popup_sp_fs_action_menu_pane_cp01

0x956f,	// (0x000182b2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x956f,	// (0x000182b2) bg_sp_fs_highlight_list_pane_cp01

0xe4bb,	// (0x0001d1fe) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4bb,	// (0x0001d1fe) sp_fs_action_menu_list_gene_pane_g1

0xe4ca,	// (0x0001d20d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4ca,	// (0x0001d20d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ea2d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ea2d) sp_fs_action_menu_list_gene_pane_g

0xe4d7,	// (0x0001d21a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4d7,	// (0x0001d21a) sp_fs_action_menu_list_gene_pane_t1

0xe4ef,	// (0x0001d232) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4ef,	// (0x0001d232) sp_fs_action_menu_list_gene_pane

0xe510,	// (0x0001d253) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe510,	// (0x0001d253) popup_sp_fs_action_menu_bg_pane

0xe51e,	// (0x0001d261) sp_fs_action_menu_list_pane_ParamLimits

0xe51e,	// (0x0001d261) sp_fs_action_menu_list_pane

0x7e67,	// (0x00016baa) sp_fs_scroll_pane_cp01_ParamLimits

0x7e67,	// (0x00016baa) sp_fs_scroll_pane_cp01

0x7e8d,	// (0x00016bd0) list_medium_line_plain_t2_t1

0x7e9d,	// (0x00016be0) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ea32) list_medium_line_plain_t2_t

0x7ead,	// (0x00016bf0) list_medium_line_plain_t3_t1

0x7ebd,	// (0x00016c00) list_medium_line_plain_t3_t2

0x7ecb,	// (0x00016c0e) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001ea37) list_medium_line_plain_t3_t

0x1275,	// (0x0000ffb8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t2_g2_g1

0x128d,	// (0x0000ffd0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001df89) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001df89) list_medium_line_x2_t2_g2_g

0x24d9,	// (0x0001121c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24d9,	// (0x0001121c) list_medium_line_x2_t2_g2_t1

0x12c2,	// (0x00010005) list_medium_line_x2_t2_g2_t2_ParamLimits

0x12c2,	// (0x00010005) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001ea3e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001ea3e) list_medium_line_x2_t2_g2_t

0x1275,	// (0x0000ffb8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t4_g2_g1

0x128d,	// (0x0000ffd0) list_medium_line_x2_t4_g2_g2_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001df89) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001df89) list_medium_line_x2_t4_g2_g

0x7ed9,	// (0x00016c1c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ed9,	// (0x00016c1c) list_medium_line_x2_t4_g2_t1

0x7ef3,	// (0x00016c36) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ef3,	// (0x00016c36) list_medium_line_x2_t4_g2_t2

0x7f09,	// (0x00016c4c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f09,	// (0x00016c4c) list_medium_line_x2_t4_g2_t3

0x12c2,	// (0x00010005) list_medium_line_x2_t4_g2_t4_ParamLimits

0x12c2,	// (0x00010005) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001ea43) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001ea43) list_medium_line_x2_t4_g2_t

0x7f1e,	// (0x00016c61) list_medium_line_t3_right_iconx2_g1

0x7d6d,	// (0x00016ab0) list_medium_line_t3_right_iconx2_g2

0x7f26,	// (0x00016c69) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001ea4c) list_medium_line_t3_right_iconx2_g

0x7f30,	// (0x00016c73) list_medium_line_t3_right_iconx2_t1

0x7f40,	// (0x00016c83) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001ea53) list_medium_line_t3_right_iconx2_t

0x1275,	// (0x0000ffb8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x3_t4_g4_g1

0x1281,	// (0x0000ffc4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x3_t4_g4_g2

0x24c1,	// (0x00011204) list_medium_line_x3_t4_g4_g3_ParamLimits

0x24c1,	// (0x00011204) list_medium_line_x3_t4_g4_g3

0x7f4e,	// (0x00016c91) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f4e,	// (0x00016c91) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ea58) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ea58) list_medium_line_x3_t4_g4_g

0x7f5a,	// (0x00016c9d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f5a,	// (0x00016c9d) list_medium_line_x3_t4_g4_t1

0x7f71,	// (0x00016cb4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f71,	// (0x00016cb4) list_medium_line_x3_t4_g4_t2

0x24ee,	// (0x00011231) list_medium_line_x3_t4_g4_t3_ParamLimits

0x24ee,	// (0x00011231) list_medium_line_x3_t4_g4_t3

0x7f8c,	// (0x00016ccf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f8c,	// (0x00016ccf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ea61) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ea61) list_medium_line_x3_t4_g4_t

0x7fa9,	// (0x00016cec) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fa9,	// (0x00016cec) list_single_dyc_row_text_pane_t1

0x7ff2,	// (0x00016d35) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ff2,	// (0x00016d35) list_single_dyc_row_text_pane_t2

0xe540,	// (0x0001d283) list_single_dyc_row_text_pane_t3_ParamLimits

0xe540,	// (0x0001d283) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ea6a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ea6a) list_single_dyc_row_text_pane_t

0xe564,	// (0x0001d2a7) list_single_dyc_row_pane_g1_ParamLimits

0xe564,	// (0x0001d2a7) list_single_dyc_row_pane_g1

0xe570,	// (0x0001d2b3) list_single_dyc_row_pane_g2_ParamLimits

0xe570,	// (0x0001d2b3) list_single_dyc_row_pane_g2

0xe57c,	// (0x0001d2bf) list_single_dyc_row_pane_g3_ParamLimits

0xe57c,	// (0x0001d2bf) list_single_dyc_row_pane_g3

0xe588,	// (0x0001d2cb) list_single_dyc_row_pane_g4_ParamLimits

0xe588,	// (0x0001d2cb) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ea77) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ea77) list_single_dyc_row_pane_g

0xe594,	// (0x0001d2d7) list_single_dyc_row_text_pane_ParamLimits

0xe594,	// (0x0001d2d7) list_single_dyc_row_text_pane

0x94ff,	// (0x00018242) bg_sp_fs_scroll_pane

0xe5b3,	// (0x0001d2f6) thumb_sp_fs_scroll_pane

0x6619,	// (0x0001535c) list_medium_line_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_g1

0x8127,	// (0x00016e6a) list_medium_line_t1_ParamLimits

0x8127,	// (0x00016e6a) list_medium_line_t1

0x1275,	// (0x0000ffb8) list_medium_line_x2_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_g1

0x1281,	// (0x0000ffc4) list_medium_line_x2_g2_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ea80) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ea80) list_medium_line_x2_g

0xe5bc,	// (0x0001d2ff) list_medium_line_x2_t1_ParamLimits

0xe5bc,	// (0x0001d2ff) list_medium_line_x2_t1

0x1275,	// (0x0000ffb8) list_medium_line_x3_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x3_g1

0x1281,	// (0x0000ffc4) list_medium_line_x3_g2_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ea80) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ea80) list_medium_line_x3_g

0xe5bc,	// (0x0001d2ff) list_medium_line_x3_t1_ParamLimits

0xe5bc,	// (0x0001d2ff) list_medium_line_x3_t1

0xe5d2,	// (0x0001d315) thumb_sp_fs_scroll_pane_g1

0xe5db,	// (0x0001d31e) thumb_sp_fs_scroll_pane_g2

0xe5e4,	// (0x0001d327) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ea85) thumb_sp_fs_scroll_pane_g

0xe5d2,	// (0x0001d315) bg_sp_fs_scroll_pane_g1

0xe5db,	// (0x0001d31e) bg_sp_fs_scroll_pane_g2

0xe5e4,	// (0x0001d327) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ea85) bg_sp_fs_scroll_pane_g

0x1275,	// (0x0000ffb8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1275,	// (0x0000ffb8) list_medium_line_x2_t3_g4_g1

0x131c,	// (0x0001005f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x131c,	// (0x0001005f) list_medium_line_x2_t3_g4_g2

0x1281,	// (0x0000ffc4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1281,	// (0x0000ffc4) list_medium_line_x2_t3_g4_g3

0x128d,	// (0x0000ffd0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x128d,	// (0x0000ffd0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e005) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e005) list_medium_line_x2_t3_g4_g

0x813c,	// (0x00016e7f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x813c,	// (0x00016e7f) list_medium_line_x2_t3_g4_t1

0x8156,	// (0x00016e99) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8156,	// (0x00016e99) list_medium_line_x2_t3_g4_t2

0x12c2,	// (0x00010005) list_medium_line_x2_t3_g4_t3_ParamLimits

0x12c2,	// (0x00010005) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ea8c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ea8c) list_medium_line_x2_t3_g4_t

0x6619,	// (0x0001535c) list_medium_line_g2_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_g2_g1

0x6625,	// (0x00015368) list_medium_line_g2_g2_ParamLimits

0x6625,	// (0x00015368) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001e743) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001e743) list_medium_line_g2_g

0x8170,	// (0x00016eb3) list_medium_line_g2_t1_ParamLimits

0x8170,	// (0x00016eb3) list_medium_line_g2_t1

0x6619,	// (0x0001535c) list_medium_line_t3_g2_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_t3_g2_g1

0x6625,	// (0x00015368) list_medium_line_t3_g2_g2_ParamLimits

0x6625,	// (0x00015368) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001e743) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001e743) list_medium_line_t3_g2_g

0x8185,	// (0x00016ec8) list_medium_line_t3_g2_t1_ParamLimits

0x8185,	// (0x00016ec8) list_medium_line_t3_g2_t1

0x819f,	// (0x00016ee2) list_medium_line_t3_g2_t2_ParamLimits

0x819f,	// (0x00016ee2) list_medium_line_t3_g2_t2

0x81b5,	// (0x00016ef8) list_medium_line_t3_g2_t3_ParamLimits

0x81b5,	// (0x00016ef8) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ea93) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ea93) list_medium_line_t3_g2_t

0x7d6d,	// (0x00016ab0) list_medium_line_right_icon_g1

0x81cf,	// (0x00016f12) list_medium_line_right_icon_t1

0x6619,	// (0x0001535c) list_medium_line_t2_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_t2_g1

0x81dd,	// (0x00016f20) list_medium_line_t2_t1_ParamLimits

0x81dd,	// (0x00016f20) list_medium_line_t2_t1

0x81f7,	// (0x00016f3a) list_medium_line_t2_t2_ParamLimits

0x81f7,	// (0x00016f3a) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ea9a) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ea9a) list_medium_line_t2_t

0x6619,	// (0x0001535c) list_medium_line_t3_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_t3_g1

0x8210,	// (0x00016f53) list_medium_line_t3_t1_ParamLimits

0x8210,	// (0x00016f53) list_medium_line_t3_t1

0x822a,	// (0x00016f6d) list_medium_line_t3_t2_ParamLimits

0x822a,	// (0x00016f6d) list_medium_line_t3_t2

0x8240,	// (0x00016f83) list_medium_line_t3_t3_ParamLimits

0x8240,	// (0x00016f83) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ea9f) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ea9f) list_medium_line_t3_t

0x6619,	// (0x0001535c) list_medium_line_g3_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_g3_g1

0x8255,	// (0x00016f98) list_medium_line_g3_g2_ParamLimits

0x8255,	// (0x00016f98) list_medium_line_g3_g2

0x6625,	// (0x00015368) list_medium_line_g3_g3_ParamLimits

0x6625,	// (0x00015368) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001eaa6) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001eaa6) list_medium_line_g3_g

0x8261,	// (0x00016fa4) list_medium_line_g3_t1_ParamLimits

0x8261,	// (0x00016fa4) list_medium_line_g3_t1

0x6619,	// (0x0001535c) list_medium_line_t2_g3_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_t2_g3_g1

0x8255,	// (0x00016f98) list_medium_line_t2_g3_g2_ParamLimits

0x8255,	// (0x00016f98) list_medium_line_t2_g3_g2

0x6625,	// (0x00015368) list_medium_line_t2_g3_g3_ParamLimits

0x6625,	// (0x00015368) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001eaa6) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001eaa6) list_medium_line_t2_g3_g

0x8276,	// (0x00016fb9) list_medium_line_t2_g3_t1_ParamLimits

0x8276,	// (0x00016fb9) list_medium_line_t2_g3_t1

0x8290,	// (0x00016fd3) list_medium_line_t2_g3_t2_ParamLimits

0x8290,	// (0x00016fd3) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001eaad) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001eaad) list_medium_line_t2_g3_t

0x6619,	// (0x0001535c) list_medium_line_t3_g3_g1_ParamLimits

0x6619,	// (0x0001535c) list_medium_line_t3_g3_g1

0x8255,	// (0x00016f98) list_medium_line_t3_g3_g2_ParamLimits

0x8255,	// (0x00016f98) list_medium_line_t3_g3_g2

0x6625,	// (0x00015368) list_medium_line_t3_g3_g3_ParamLimits

0x6625,	// (0x00015368) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001eaa6) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001eaa6) list_medium_line_t3_g3_g

0x82ae,	// (0x00016ff1) list_medium_line_t3_g3_t1_ParamLimits

0x82ae,	// (0x00016ff1) list_medium_line_t3_g3_t1

0x82c7,	// (0x0001700a) list_medium_line_t3_g3_t2_ParamLimits

0x82c7,	// (0x0001700a) list_medium_line_t3_g3_t2

0x82dd,	// (0x00017020) list_medium_line_t3_g3_t3_ParamLimits

0x82dd,	// (0x00017020) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001eab2) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001eab2) list_medium_line_t3_g3_t

0x7f1e,	// (0x00016c61) list_medium_line_right_iconx2_g1

0x7d6d,	// (0x00016ab0) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eab9) list_medium_line_right_iconx2_g

0x82f7,	// (0x0001703a) list_medium_line_right_iconx2_t1

0x7f1e,	// (0x00016c61) list_medium_line_t2_right_iconx2_g1

0x7d6d,	// (0x00016ab0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001eab9) list_medium_line_t2_right_iconx2_g

0x8305,	// (0x00017048) list_medium_line_t2_right_iconx2_t1

0x8315,	// (0x00017058) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001eabe) list_medium_line_t2_right_iconx2_t

0x8327,	// (0x0001706a) list_medium_line_x4_t4_t1

0x8335,	// (0x00017078) list_medium_line_x4_t4_t2

0x8345,	// (0x00017088) list_medium_line_x4_t4_t3

0x8355,	// (0x00017098) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001eac3) list_medium_line_x4_t4_t

0x83a8,	// (0x000170eb) tport_appsw_pane_ParamLimits

0x83a8,	// (0x000170eb) tport_appsw_pane

0x83c0,	// (0x00017103) tport_contact_pane_ParamLimits

0x83c0,	// (0x00017103) tport_contact_pane

0x83d8,	// (0x0001711b) tport_listscroll_pane_ParamLimits

0x83d8,	// (0x0001711b) tport_listscroll_pane

0x83f2,	// (0x00017135) cell_tport_appsw_pane_ParamLimits

0x83f2,	// (0x00017135) cell_tport_appsw_pane

0xd1e8,	// (0x0001bf2b) tport_appsw_pane_g1_ParamLimits

0xd1e8,	// (0x0001bf2b) tport_appsw_pane_g1

0xe5ed,	// (0x0001d330) tport_contact_pane_g1

0xdec9,	// (0x0001cc0c) tport_contact_pane_t1

0xe5f6,	// (0x0001d339) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001eacc) tport_contact_pane_t

0xe604,	// (0x0001d347) list_tport_pane

0xe60d,	// (0x0001d350) scroll_pane_cp_030

0x843a,	// (0x0001717d) cell_tport_appsw_pane_g1

0x844a,	// (0x0001718d) cell_tport_appsw_pane_t1

0x8458,	// (0x0001719b) grid_highlight_pane_cp019

0x8460,	// (0x000171a3) list_tport_double_graphic_pane_ParamLimits

0x8460,	// (0x000171a3) list_tport_double_graphic_pane

0x956f,	// (0x000182b2) list_highlight_pane_cp023_ParamLimits

0x956f,	// (0x000182b2) list_highlight_pane_cp023

0x846d,	// (0x000171b0) list_tport_double_graphic_pane_g1_ParamLimits

0x846d,	// (0x000171b0) list_tport_double_graphic_pane_g1

0x847a,	// (0x000171bd) list_tport_double_graphic_pane_t1_ParamLimits

0x847a,	// (0x000171bd) list_tport_double_graphic_pane_t1

0x848f,	// (0x000171d2) list_tport_double_graphic_pane_t2_ParamLimits

0x848f,	// (0x000171d2) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ead8) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ead8) list_tport_double_graphic_pane_t

0x94ff,	// (0x00018242) main_cale_note_pane

0x5cf2,	// (0x00014a35) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cf2,	// (0x00014a35) cell_vitu2_function_top_wide_pane_cp01

0x7886,	// (0x000165c9) wait_bar_pane_cp05_ParamLimits

0x956f,	// (0x000182b2) listscroll_cmail_pane

0xe616,	// (0x0001d359) list_cmail_pane

0x84a1,	// (0x000171e4) list_cmail_body_pane

0x84b6,	// (0x000171f9) list_single_cmail_header_caption_pane

0x84cc,	// (0x0001720f) list_single_cmail_header_detail_pane_ParamLimits

0x84cc,	// (0x0001720f) list_single_cmail_header_detail_pane

0xe626,	// (0x0001d369) list_single_cmail_header_caption_pane_t1

0x84f5,	// (0x00017238) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84f5,	// (0x00017238) list_single_cmail_header_detail_pane_g1

0xe63d,	// (0x0001d380) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe63d,	// (0x0001d380) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001eadd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001eadd) list_single_cmail_header_detail_pane_g

0xe656,	// (0x0001d399) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe656,	// (0x0001d399) list_single_cmail_header_detail_pane_t1

0xe6b6,	// (0x0001d3f9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6b6,	// (0x0001d3f9) list_single_cmail_header_editor_pane_bg

0xe026,	// (0x0001cd69) list_cmail_body_pane_g1

0xe6cd,	// (0x0001d410) list_cmail_body_pane_t1

0xd237,	// (0x0001bf7a) list_single_cmail_header_editor_pane_bg_g1

0xa166,	// (0x00018ea9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd247,	// (0x0001bf8a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd23f,	// (0x0001bf82) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd518,	// (0x0001c25b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd267,	// (0x0001bfaa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd257,	// (0x0001bf9a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd25f,	// (0x0001bfa2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa146,	// (0x00018e89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x850d,	// (0x00017250) calenote_gesture_pane_ParamLimits

0x850d,	// (0x00017250) calenote_gesture_pane

0x852d,	// (0x00017270) calenote_window_pane_ParamLimits

0x852d,	// (0x00017270) calenote_window_pane

0xe6db,	// (0x0001d41e) popup_note_window_cp01

0x8549,	// (0x0001728c) calenote_swipe_1_pane_ParamLimits

0x8549,	// (0x0001728c) calenote_swipe_1_pane

0x7d0f,	// (0x00016a52) calenote_swipe_2_pane_ParamLimits

0x7d0f,	// (0x00016a52) calenote_swipe_2_pane

0xe380,	// (0x0001d0c3) calenote_swipe_1_pane_g1_ParamLimits

0xe380,	// (0x0001d0c3) calenote_swipe_1_pane_g1

0xe38d,	// (0x0001d0d0) calenote_swipe_1_pane_g2_ParamLimits

0xe38d,	// (0x0001d0d0) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001ea06) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001ea06) calenote_swipe_1_pane_g

0xe6ed,	// (0x0001d430) calenote_swipe_1_pane_t1_ParamLimits

0xe6ed,	// (0x0001d430) calenote_swipe_1_pane_t1

0xe380,	// (0x0001d0c3) calenote_swipe_2_pane_g1_ParamLimits

0xe380,	// (0x0001d0c3) calenote_swipe_2_pane_g1

0xe70c,	// (0x0001d44f) calenote_swipe_2_pane_g2_ParamLimits

0xe70c,	// (0x0001d44f) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001eae9) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001eae9) calenote_swipe_2_pane_g

0xe718,	// (0x0001d45b) calenote_swipe_2_pane_t1_ParamLimits

0xe718,	// (0x0001d45b) calenote_swipe_2_pane_t1

0x94ff,	// (0x00018242) main_mup_navstr_pane

0x49bf,	// (0x00013702) main_mup3_pane_t7_ParamLimits

0x49bf,	// (0x00013702) main_mup3_pane_t7

0xcd97,	// (0x0001bada) main_mp4_pane_g6_ParamLimits

0xcd97,	// (0x0001bada) main_mp4_pane_g6

0xcfbf,	// (0x0001bd02) main_image3_pane_t4_ParamLimits

0xcfbf,	// (0x0001bd02) main_image3_pane_t4

0x855e,	// (0x000172a1) popup_navstr_preview_pane_ParamLimits

0x855e,	// (0x000172a1) popup_navstr_preview_pane

0x8572,	// (0x000172b5) scroll_navstr_pane_ParamLimits

0x8572,	// (0x000172b5) scroll_navstr_pane

0x94ff,	// (0x00018242) bg_popup_preview_window_pane_cp04

0xe73f,	// (0x0001d482) popup_navstr_preview_pane_t1

0x8586,	// (0x000172c9) scroll_navstr_pane_g1_ParamLimits

0x8586,	// (0x000172c9) scroll_navstr_pane_g1

0x859a,	// (0x000172dd) scroll_navstr_pane_t1_ParamLimits

0x859a,	// (0x000172dd) scroll_navstr_pane_t1

0xe6e4,	// (0x0001d427) bg_button_pane_cp014

0xe6e4,	// (0x0001d427) bg_button_pane_cp030

0x7bad,	// (0x000168f0) list_double_fisheye_pane_g4_ParamLimits

0x7bad,	// (0x000168f0) list_double_fisheye_pane_g4

0x7bb9,	// (0x000168fc) list_double_fisheye_pane_g5_ParamLimits

0x7bb9,	// (0x000168fc) list_double_fisheye_pane_g5

0xd300,	// (0x0001c043) sp_fs_scroll_pane_cp03

0xe473,	// (0x0001d1b6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe47f,	// (0x0001d1c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001ea23) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe48b,	// (0x0001d1ce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe61e,	// (0x0001d361) sp_fs_scroll_pane_cp02

0x9e42,	// (0x00018b85) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e42,	// (0x00018b85) popup_sp_fs_calendar_preview_list_single_pane

0x94ff,	// (0x00018242) main_cam6_pano_pane

0x956f,	// (0x000182b2) main_mup3_pane_ParamLimits

0x94ff,	// (0x00018242) main_phacti_pane

0x7759,	// (0x0001649c) bg_button_pane_cp11

0x7773,	// (0x000164b6) main_mobtv_info_pane_g2_ParamLimits

0x7773,	// (0x000164b6) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001e983) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001e983) main_mobtv_info_pane_g

0x7950,	// (0x00016693) sc_clock_pane_t5_ParamLimits

0x7950,	// (0x00016693) sc_clock_pane_t5

0x7a18,	// (0x0001675b) main_radioblah_pane_g1_ParamLimits

0xe2c3,	// (0x0001d006) main_radioblah_pane_t3_ParamLimits

0xe2c3,	// (0x0001d006) main_radioblah_pane_t3

0xe2db,	// (0x0001d01e) main_radioblah_pane_t4_ParamLimits

0xe2db,	// (0x0001d01e) main_radioblah_pane_t4

0x7a40,	// (0x00016783) main_radioblah_text_pane_ParamLimits

0x7a40,	// (0x00016783) main_radioblah_text_pane

0x7a52,	// (0x00016795) main_radioblah_info_pane_g1_ParamLimits

0x7aeb,	// (0x0001682e) main_radioblah_info_pane_t4_ParamLimits

0x7aeb,	// (0x0001682e) main_radioblah_info_pane_t4

0x956f,	// (0x000182b2) main_sp_fs_calendar_pane

0x85b1,	// (0x000172f4) main_phacti_pane_g1

0x85b9,	// (0x000172fc) phacti_note_pane_ParamLimits

0x85b9,	// (0x000172fc) phacti_note_pane

0xe756,	// (0x0001d499) phacti_term_pane_ParamLimits

0xe756,	// (0x0001d499) phacti_term_pane

0xe76b,	// (0x0001d4ae) phacti_note_pane_t1_ParamLimits

0xe76b,	// (0x0001d4ae) phacti_note_pane_t1

0xe782,	// (0x0001d4c5) phacti_term_pane_g1

0xe78a,	// (0x0001d4cd) phacti_term_pane_t1_ParamLimits

0xe78a,	// (0x0001d4cd) phacti_term_pane_t1

0xe7b4,	// (0x0001d4f7) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9ee1,	// (0x00018c24) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001eaf3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7bc,	// (0x0001d4ff) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7bc,	// (0x0001d4ff) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7d2,	// (0x0001d515) aid_popup_sp_fs_bg_corner_pane

0xc402,	// (0x0001b145) popup_sp_fs_calendar_preview_bg_pane_g1

0x94ff,	// (0x00018242) popup_sp_fs_calendar_preview_bg_pane

0xe7da,	// (0x0001d51d) popup_sp_fs_calendar_preview_list_pane

0xbee7,	// (0x0001ac2a) bg_main_sp_fs_cale_pane_ParamLimits

0xbee7,	// (0x0001ac2a) bg_main_sp_fs_cale_pane

0xe7eb,	// (0x0001d52e) listscroll_cale_mrui_pane_ParamLimits

0xe7eb,	// (0x0001d52e) listscroll_cale_mrui_pane

0xd2bb,	// (0x0001bffe) listscroll_sp_fs_schedule_track_pane

0xe800,	// (0x0001d543) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe800,	// (0x0001d543) main_sp_fs_ctrlbar_pane_cp01

0xe813,	// (0x0001d556) main_sp_fs_ribbon_pane

0xe81b,	// (0x0001d55e) popup_sp_fs_cale_preview_window

0x862e,	// (0x00017371) list_single_sp_fs_schedule_track_pane_ParamLimits

0x862e,	// (0x00017371) list_single_sp_fs_schedule_track_pane

0x956f,	// (0x000182b2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x956f,	// (0x000182b2) bg_sp_fs_highlight_list_pane_cp03

0x8641,	// (0x00017384) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8641,	// (0x00017384) list_single_sp_fs_schedule_track_pane_g1

0x864d,	// (0x00017390) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x864d,	// (0x00017390) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001eaf8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001eaf8) list_single_sp_fs_schedule_track_pane_g

0x8659,	// (0x0001739c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8659,	// (0x0001739c) list_single_sp_fs_schedule_track_pane_t1

0x8673,	// (0x000173b6) sp_fs_schedule_track_pane_ParamLimits

0x8673,	// (0x000173b6) sp_fs_schedule_track_pane

0xe82d,	// (0x0001d570) sp_fs_schedule_track_pane_g1

0xe835,	// (0x0001d578) sp_fs_schedule_track_pane_g2

0xe83d,	// (0x0001d580) sp_fs_schedule_track_pane_g3

0xe845,	// (0x0001d588) sp_fs_schedule_track_pane_g4

0xe84d,	// (0x0001d590) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001eafd) sp_fs_schedule_track_pane_g

0xd237,	// (0x0001bf7a) bg_sp_fs_schedule_viewer_highlight_g1

0xa166,	// (0x00018ea9) bg_sp_fs_schedule_viewer_highlight_g2

0xd23f,	// (0x0001bf82) bg_sp_fs_schedule_viewer_highlight_g3

0xd247,	// (0x0001bf8a) bg_sp_fs_schedule_viewer_highlight_g4

0xd518,	// (0x0001c25b) bg_sp_fs_schedule_viewer_highlight_g5

0xd257,	// (0x0001bf9a) bg_sp_fs_schedule_viewer_highlight_g6

0xd25f,	// (0x0001bfa2) bg_sp_fs_schedule_viewer_highlight_g7

0xd267,	// (0x0001bfaa) bg_sp_fs_schedule_viewer_highlight_g8

0xa146,	// (0x00018e89) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001eb08) bg_sp_fs_schedule_viewer_highlight_g

0x94ff,	// (0x00018242) bg_main_sp_fs_ribbon_pane

0x8684,	// (0x000173c7) main_sp_fs_ribbon_pane_g1

0xe855,	// (0x0001d598) main_sp_fs_ribbon_pane_t1

0x868d,	// (0x000173d0) main_sp_fs_ribbon_pane_t2

0xe864,	// (0x0001d5a7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001eb1b) main_sp_fs_ribbon_pane_t

0xe873,	// (0x0001d5b6) main_sp_fs_ribbon_scheduler_pane

0xe87b,	// (0x0001d5be) bg_main_sp_fs_ribbon_pane_g1

0xe884,	// (0x0001d5c7) bg_main_sp_fs_ribbon_pane_g2

0xe88d,	// (0x0001d5d0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001eb22) bg_main_sp_fs_ribbon_pane_g

0xe895,	// (0x0001d5d8) main_sp_fs_ribbon_scheduler_pane_g1

0xe89e,	// (0x0001d5e1) main_sp_fs_ribbon_scheduler_pane_g2

0xe8a7,	// (0x0001d5ea) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001eb29) main_sp_fs_ribbon_scheduler_pane_g

0xe8b0,	// (0x0001d5f3) list_cale_mrui_pane

0x869c,	// (0x000173df) sp_fs_scroll_pane_cp07_ParamLimits

0x869c,	// (0x000173df) sp_fs_scroll_pane_cp07

0x86b8,	// (0x000173fb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x86b8,	// (0x000173fb) bg_sp_fs_schedule_viewer_highlight

0xe8bd,	// (0x0001d600) list_single_sp_fs_schedule_track_pane_cp01

0xe8c5,	// (0x0001d608) list_sp_fs_schedule_track_pane

0xe8cd,	// (0x0001d610) sp_fs_scroll_pane_cp06_ParamLimits

0xe8cd,	// (0x0001d610) sp_fs_scroll_pane_cp06

0xc402,	// (0x0001b145) bgmain_sp_fs_calendar_pane_g1

0x86c8,	// (0x0001740b) list_single_cale_mrui_pane_ParamLimits

0x86c8,	// (0x0001740b) list_single_cale_mrui_pane

0xe8df,	// (0x0001d622) list_single_cale_mrui_row_pane_ParamLimits

0xe8df,	// (0x0001d622) list_single_cale_mrui_row_pane

0xe8ec,	// (0x0001d62f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8ec,	// (0x0001d62f) list_single_cale_mrui_row_pane_g1

0xe931,	// (0x0001d674) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe931,	// (0x0001d674) list_single_cale_mrui_row_pane_t1

0x86e9,	// (0x0001742c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86e9,	// (0x0001742c) list_single_cale_mrui_row_pane_t2

0xe943,	// (0x0001d686) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe943,	// (0x0001d686) list_single_cale_mrui_row_pane_t3

0xe972,	// (0x0001d6b5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe972,	// (0x0001d6b5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001eb37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001eb37) list_single_cale_mrui_row_pane_t

0x8751,	// (0x00017494) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8751,	// (0x00017494) list_single_cmail_header_editor_pane_bg_cp01

0x8777,	// (0x000174ba) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8777,	// (0x000174ba) list_single_cmail_header_editor_pane_bg_cp02

0x8797,	// (0x000174da) main_radioblah_text_pane_t1_ParamLimits

0x8797,	// (0x000174da) main_radioblah_text_pane_t1

0xe9a1,	// (0x0001d6e4) cam6_indi_pane_cp01

0xe9a9,	// (0x0001d6ec) cam6_mode_pane_cp01

0xe9b1,	// (0x0001d6f4) cam6_pano_pane

0xe9ba,	// (0x0001d6fd) cam6_zoom_pane_cp01

0xe9c2,	// (0x0001d705) cam6_pano_image_pane

0xe9cd,	// (0x0001d710) cam6_pano_pane_g1

0xe026,	// (0x0001cd69) cam6_pano_pane_g2

0xe9d6,	// (0x0001d719) cam6_pano_pane_g3

0xe9df,	// (0x0001d722) cam6_pano_pane_g4

0xc9fa,	// (0x0001b73d) cam6_pano_pane_g5

0xe9e8,	// (0x0001d72b) cam6_pano_pane_g6

0xe9f2,	// (0x0001d735) cam6_pano_pane_g7

0xe9fa,	// (0x0001d73d) cam6_pano_pane_g8

0xea03,	// (0x0001d746) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001eb40) cam6_pano_pane_g

0x94ff,	// (0x00018242) main_browser_tag_pane

0xe737,	// (0x0001d47a) grid_navstr_albumart_pane

0xea0e,	// (0x0001d751) cell_navstr_albumart_pane_ParamLimits

0xea0e,	// (0x0001d751) cell_navstr_albumart_pane

0xea2e,	// (0x0001d771) cell_navstr_albumart_pane_g1

0xbcf8,	// (0x0001aa3b) cell_navstr_albumart_pane_g2

0xbd08,	// (0x0001aa4b) cell_navstr_albumart_pane_g3

0xbd00,	// (0x0001aa43) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001eb53) cell_navstr_albumart_pane_g

0x87b1,	// (0x000174f4) bt_list_pane_ParamLimits

0x87b1,	// (0x000174f4) bt_list_pane

0x87c5,	// (0x00017508) bt_list_pane_t1

0x87d4,	// (0x00017517) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001eb5c) bt_list_pane_t

0x94ff,	// (0x00018242) main_cale_prevew_pane

0x87e3,	// (0x00017526) popup_cale_preview_window_ParamLimits

0x87e3,	// (0x00017526) popup_cale_preview_window

0x956f,	// (0x000182b2) bg_popup_preview_window_pane_cp05_ParamLimits

0x956f,	// (0x000182b2) bg_popup_preview_window_pane_cp05

0xea36,	// (0x0001d779) list_cale_preview_pane_ParamLimits

0xea36,	// (0x0001d779) list_cale_preview_pane

0x87fe,	// (0x00017541) list_double_cale_preview_pane_ParamLimits

0x87fe,	// (0x00017541) list_double_cale_preview_pane

0x8810,	// (0x00017553) list_single_cale_preview_pane_ParamLimits

0x8810,	// (0x00017553) list_single_cale_preview_pane

0x8826,	// (0x00017569) list_single_cale_preview_pane_g1

0x882e,	// (0x00017571) list_single_cale_preview_pane_t1_ParamLimits

0x882e,	// (0x00017571) list_single_cale_preview_pane_t1

0x8843,	// (0x00017586) list_double_cale_preview_pane_g1

0x884b,	// (0x0001758e) list_double_cale_preview_pane_t1_ParamLimits

0x884b,	// (0x0001758e) list_double_cale_preview_pane_t1

0x8860,	// (0x000175a3) list_double_cale_preview_pane_t2_ParamLimits

0x8860,	// (0x000175a3) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001eb61) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001eb61) list_double_cale_preview_pane_t

0x94ff,	// (0x00018242) main_ezdial_pane

0x956f,	// (0x000182b2) main_sp_fs_email_pane_ParamLimits

0x7d97,	// (0x00016ada) cmail_ddmenu_btn01_pane_ParamLimits

0x7d97,	// (0x00016ada) cmail_ddmenu_btn01_pane

0x7daa,	// (0x00016aed) cmail_ddmenu_btn02_pane_ParamLimits

0x7daa,	// (0x00016aed) cmail_ddmenu_btn02_pane

0x7dcd,	// (0x00016b10) cmail_ddmenu_btn03_pane_ParamLimits

0x7dcd,	// (0x00016b10) cmail_ddmenu_btn03_pane

0x7df3,	// (0x00016b36) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e17,	// (0x00016b5a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84a1,	// (0x000171e4) list_cmail_body_pane_ParamLimits

0xe634,	// (0x0001d377) bg_button_pane_cp12

0xe649,	// (0x0001d38c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe649,	// (0x0001d38c) list_single_cmail_header_detail_pane_g3

0xe692,	// (0x0001d3d5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe692,	// (0x0001d3d5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001eae4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001eae4) list_single_cmail_header_detail_pane_t

0xe79f,	// (0x0001d4e2) phacti_term_pane_t2_ParamLimits

0xe79f,	// (0x0001d4e2) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001eaee) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001eaee) phacti_term_pane_t

0xea42,	// (0x0001d785) aid_size_list_single_double

0x8878,	// (0x000175bb) popup_ezdial_listscroll_window

0x8894,	// (0x000175d7) popup_number_entry_window_cp01

0x9f03,	// (0x00018c46) bg_popup_call_pane_cp09

0xea4e,	// (0x0001d791) ezdial_list_pane

0xea56,	// (0x0001d799) scroll_pane_cp23

0xbee7,	// (0x0001ac2a) bg_button_pane_cp028_ParamLimits

0xbee7,	// (0x0001ac2a) bg_button_pane_cp028

0x88a2,	// (0x000175e5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88a2,	// (0x000175e5) cmail_ddmenu_btn01_pane_g1

0x88ae,	// (0x000175f1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x88ae,	// (0x000175f1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001eb66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001eb66) cmail_ddmenu_btn01_pane_g

0xea70,	// (0x0001d7b3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea70,	// (0x0001d7b3) cmail_ddmenu_btn01_pane_t1

0xbee7,	// (0x0001ac2a) bg_button_pane_cp029_ParamLimits

0xbee7,	// (0x0001ac2a) bg_button_pane_cp029

0x88ba,	// (0x000175fd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x88ba,	// (0x000175fd) cmail_ddmenu_btn02_pane_g1

0x88d3,	// (0x00017616) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88d3,	// (0x00017616) cmail_ddmenu_btn02_pane_t1

0x956f,	// (0x000182b2) bg_button_pane_cp031_ParamLimits

0x956f,	// (0x000182b2) bg_button_pane_cp031

0x88ba,	// (0x000175fd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x88ba,	// (0x000175fd) cmail_ddmenu_btn03_pane_g1

0x88d3,	// (0x00017616) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88d3,	// (0x00017616) cmail_ddmenu_btn03_pane_t1

0x5569,	// (0x000142ac) cell_dialer2_keypad_pane_t1_ParamLimits

0x5583,	// (0x000142c6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5583,	// (0x000142c6) cell_dialer2_keypad_pane_t1_copy1

0x757c,	// (0x000162bf) ncimui_group_button_pane

0x956f,	// (0x000182b2) main_sp_fs_calendar_pane_ParamLimits

0x84b6,	// (0x000171f9) list_single_cmail_header_caption_pane_ParamLimits

0xe7e2,	// (0x0001d525) aid_recal_txt_sm_pane

0x94ff,	// (0x00018242) mian_recal_day_pane

0xe81b,	// (0x0001d55e) popup_sp_fs_cale_preview_window_ParamLimits

0xea85,	// (0x0001d7c8) list_recal_day_pane

0xeac7,	// (0x0001d80a) list_single_recal_day_pane_ParamLimits

0xeac7,	// (0x0001d80a) list_single_recal_day_pane

0xead9,	// (0x0001d81c) list_single_recal_day_pane_g1_ParamLimits

0xead9,	// (0x0001d81c) list_single_recal_day_pane_g1

0xeae5,	// (0x0001d828) list_single_recal_day_pane_g2_ParamLimits

0xeae5,	// (0x0001d828) list_single_recal_day_pane_g2

0xeaf1,	// (0x0001d834) list_single_recal_day_pane_g3_ParamLimits

0xeaf1,	// (0x0001d834) list_single_recal_day_pane_g3

0x88f7,	// (0x0001763a) list_single_recal_day_pane_g4_ParamLimits

0x88f7,	// (0x0001763a) list_single_recal_day_pane_g4

0xeafd,	// (0x0001d840) list_single_recal_day_pane_g5_ParamLimits

0xeafd,	// (0x0001d840) list_single_recal_day_pane_g5

0xeb09,	// (0x0001d84c) list_single_recal_day_pane_g6_ParamLimits

0xeb09,	// (0x0001d84c) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001eb75) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001eb75) list_single_recal_day_pane_g

0xeb1d,	// (0x0001d860) list_single_recal_day_pane_t1

0xeb2f,	// (0x0001d872) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001eb80) list_single_recal_day_pane_t

0x890f,	// (0x00017652) ncimui_query_button_pane_ParamLimits

0x890f,	// (0x00017652) ncimui_query_button_pane

0x891f,	// (0x00017662) ncimui_query_button_pane_t1_ParamLimits

0x891f,	// (0x00017662) ncimui_query_button_pane_t1

0xeb41,	// (0x0001d884) ncimui_query_button_pane_t2_ParamLimits

0xeb41,	// (0x0001d884) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001eb85) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001eb85) ncimui_query_button_pane_t

0x8932,	// (0x00017675) query_button_pane_ParamLimits

0x8932,	// (0x00017675) query_button_pane

0x94ff,	// (0x00018242) bg_button_pane_cp0028

0xeb54,	// (0x0001d897) query_button_pane_t1

0x35e2,	// (0x00012325) main_tport_pane_ParamLimits

0x8365,	// (0x000170a8) bg_popup_window_pane_cp01_ParamLimits

0x8365,	// (0x000170a8) bg_popup_window_pane_cp01

0x8380,	// (0x000170c3) heading_pane_cp08_ParamLimits

0x8380,	// (0x000170c3) heading_pane_cp08

0x8393,	// (0x000170d6) heading_pane_cp07_ParamLimits

0x8393,	// (0x000170d6) heading_pane_cp07

0x843a,	// (0x0001717d) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ead1) cell_tport_appsw_pane_g

0xab8d,	// (0x000198d0) input_candi_list_open_g1

0xa357,	// (0x0001909a) list_cale_time_pane_g6_ParamLimits

0xa357,	// (0x0001909a) list_cale_time_pane_g6

0x43ab,	// (0x000130ee) aid_size_touch_calib_1_ParamLimits

0x43ab,	// (0x000130ee) aid_size_touch_calib_1

0x43bd,	// (0x00013100) aid_size_touch_calib_2_ParamLimits

0x43bd,	// (0x00013100) aid_size_touch_calib_2

0x43d5,	// (0x00013118) aid_size_touch_calib_3_ParamLimits

0x43d5,	// (0x00013118) aid_size_touch_calib_3

0x43f3,	// (0x00013136) aid_size_touch_calib_4_ParamLimits

0x43f3,	// (0x00013136) aid_size_touch_calib_4

0x440b,	// (0x0001314e) main_touch_calib_button_group_pane_ParamLimits

0x440b,	// (0x0001314e) main_touch_calib_button_group_pane

0x4423,	// (0x00013166) main_touch_calib_pane_g1_ParamLimits

0x4435,	// (0x00013178) main_touch_calib_pane_g2_ParamLimits

0x4447,	// (0x0001318a) main_touch_calib_pane_g3_ParamLimits

0x4459,	// (0x0001319c) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001e494) main_touch_calib_pane_g_ParamLimits

0x446b,	// (0x000131ae) main_touch_calib_pane_t1_ParamLimits

0x4485,	// (0x000131c8) main_touch_calib_pane_t2_ParamLimits

0x449f,	// (0x000131e2) main_touch_calib_pane_t3_ParamLimits

0x44b3,	// (0x000131f6) main_touch_calib_pane_t4_ParamLimits

0x44c7,	// (0x0001320a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001e49d) main_touch_calib_pane_t_ParamLimits

0xc79a,	// (0x0001b4dd) list_single_fp_cale_pane_g3_ParamLimits

0xc79a,	// (0x0001b4dd) list_single_fp_cale_pane_g3

0x956f,	// (0x000182b2) bg_button_pane_cp012_ParamLimits

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp03_ParamLimits

0x65cf,	// (0x00015312) cell_vitu2_function_top_pane_g1_ParamLimits

0x956f,	// (0x000182b2) bg_vkb2_func_pane_cp04_ParamLimits

0x7507,	// (0x0001624a) main_ncimui_button_group_pane_ParamLimits

0x7507,	// (0x0001624a) main_ncimui_button_group_pane

0x7567,	// (0x000162aa) main_ncimui_pane_t3_ParamLimits

0x7567,	// (0x000162aa) main_ncimui_pane_t3

0xe74d,	// (0x0001d490) phacti_button_group_pane

0xea42,	// (0x0001d785) aid_size_list_single_double_ParamLimits

0x8878,	// (0x000175bb) popup_ezdial_listscroll_window_ParamLimits

0x8894,	// (0x000175d7) popup_number_entry_window_cp01_ParamLimits

0x8945,	// (0x00017688) phacti_button_pane_ParamLimits

0x8945,	// (0x00017688) phacti_button_pane

0x94ff,	// (0x00018242) bg_button_pane_cp14

0xeb62,	// (0x0001d8a5) phacti_button_pane_t1

0x8956,	// (0x00017699) main_touch_calib_button_pane_ParamLimits

0x8956,	// (0x00017699) main_touch_calib_button_pane

0x9cd2,	// (0x00018a15) bg_button_pane_cp18_ParamLimits

0x9cd2,	// (0x00018a15) bg_button_pane_cp18

0xeb70,	// (0x0001d8b3) main_touch_calib_button_pane_t1_ParamLimits

0xeb70,	// (0x0001d8b3) main_touch_calib_button_pane_t1

0xeb86,	// (0x0001d8c9) main_touch_calib_button_pane_t2_ParamLimits

0xeb86,	// (0x0001d8c9) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001eb8a) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001eb8a) main_touch_calib_button_pane_t

0x94ff,	// (0x00018242) cell_ncimui_button_pane

0x94ff,	// (0x00018242) bg_button_pane_cp032

0xeba4,	// (0x0001d8e7) cell_ncimui_button_pane_t1

0xcf9f,	// (0x0001bce2) image3_infobar_pane_ParamLimits

0xcf9f,	// (0x0001bce2) image3_infobar_pane

0x797c,	// (0x000166bf) fs_bigclock_status_pane_ParamLimits

0x797c,	// (0x000166bf) fs_bigclock_status_pane

0x7989,	// (0x000166cc) main_fs_bigclock_clock_pane_ParamLimits

0x7989,	// (0x000166cc) main_fs_bigclock_clock_pane

0x79a7,	// (0x000166ea) main_fs_bigclock_indi_pane_ParamLimits

0x79a7,	// (0x000166ea) main_fs_bigclock_indi_pane

0x79d9,	// (0x0001671c) main_fs_bigclock_swipe_pane_ParamLimits

0x79d9,	// (0x0001671c) main_fs_bigclock_swipe_pane

0x94ff,	// (0x00018242) main_fs_clock_dumped_data

0xe133,	// (0x0001ce76) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe133,	// (0x0001ce76) list_single_fs_bigclock_indicator_pane_g1

0xe14e,	// (0x0001ce91) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe14e,	// (0x0001ce91) list_single_fs_bigclock_indicator_pane_g2

0xe168,	// (0x0001ceab) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe168,	// (0x0001ceab) list_single_fs_bigclock_indicator_pane_g3

0xe182,	// (0x0001cec5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe182,	// (0x0001cec5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001e9b7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001e9b7) list_single_fs_bigclock_indicator_pane_g

0xe1ad,	// (0x0001cef0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1ad,	// (0x0001cef0) list_single_fs_bigclock_indicator_pane_t1

0xe1d5,	// (0x0001cf18) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1d5,	// (0x0001cf18) list_single_fs_bigclock_indicator_pane_t2

0xe1fd,	// (0x0001cf40) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1fd,	// (0x0001cf40) list_single_fs_bigclock_indicator_pane_t3

0xe225,	// (0x0001cf68) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe225,	// (0x0001cf68) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001e9c2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001e9c2) list_single_fs_bigclock_indicator_pane_t

0xebb2,	// (0x0001d8f5) image3_infobar_fav_pane_ParamLimits

0xebb2,	// (0x0001d8f5) image3_infobar_fav_pane

0xebc2,	// (0x0001d905) image3_infobar_loc_pane_ParamLimits

0xebc2,	// (0x0001d905) image3_infobar_loc_pane

0xebd6,	// (0x0001d919) image3_infobar_time_pane_ParamLimits

0xebd6,	// (0x0001d919) image3_infobar_time_pane

0xc402,	// (0x0001b145) image3_infobar_time_pane_g1

0xebe6,	// (0x0001d929) image3_infobar_time_pane_t1

0xc402,	// (0x0001b145) image3_infobar_loc_pane_g1

0xebf4,	// (0x0001d937) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001eb8f) image3_infobar_loc_pane_g

0xebfc,	// (0x0001d93f) image3_infobar_loc_pane_t1

0xc402,	// (0x0001b145) image3_infobar_fav_pane_g1

0xec0a,	// (0x0001d94d) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001eb94) image3_infobar_fav_pane_g

0xec12,	// (0x0001d955) fs_bigclock_status_battery_pane

0xec1b,	// (0x0001d95e) fs_bigclock_status_signal_pane

0xec24,	// (0x0001d967) fs_bigclock_status_title_pane

0xec2d,	// (0x0001d970) fs_bigclock_status_signal_pane_g1

0xec36,	// (0x0001d979) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001eb99) fs_bigclock_status_signal_pane_g

0xec3e,	// (0x0001d981) fs_bigclock_status_battery_pane_g1

0xec47,	// (0x0001d98a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001eb9e) fs_bigclock_status_battery_pane_g

0xec4f,	// (0x0001d992) fs_bigclock_status_title_pane_t1

0x896b,	// (0x000176ae) main_fs_bigclock_clock_pane_g1

0x896b,	// (0x000176ae) main_fs_bigclock_clock_pane_g2

0x897c,	// (0x000176bf) main_fs_bigclock_clock_pane_g3

0x897c,	// (0x000176bf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001eba3) main_fs_bigclock_clock_pane_g

0x898f,	// (0x000176d2) main_fs_bigclock_clock_pane_t1

0x89a5,	// (0x000176e8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ebac) main_fs_bigclock_clock_pane_t

0xec5d,	// (0x0001d9a0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec5d,	// (0x0001d9a0) list_single_fs_bigclock_indicator_pane

0xec6e,	// (0x0001d9b1) list_single_fs_bigclock_pane_ParamLimits

0xec6e,	// (0x0001d9b1) list_single_fs_bigclock_pane

0xec94,	// (0x0001d9d7) main_fs_bigclock_indicator_pane_t1

0xeca3,	// (0x0001d9e6) list_single_fs_bigclock_pane_g1

0xecab,	// (0x0001d9ee) list_single_fs_bigclock_pane_t1

0xc402,	// (0x0001b145) main_fs_bigclock_swipe_pane_g1

0xecee,	// (0x0001da31) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ebbd) main_fs_bigclock_swipe_pane_g

0xecf6,	// (0x0001da39) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf6,	// (0x0001da39) main_fs_bigclock_swipe_pane_t1

0x2518,	// (0x0001125b) call_type_pane_ParamLimits

0x94ff,	// (0x00018242) main_btmg_pane

0xe918,	// (0x0001d65b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe918,	// (0x0001d65b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001eb30) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001eb30) list_single_cale_mrui_row_pane_g

0xeaae,	// (0x0001d7f1) list_recal_vselct_arw_lo_pane

0xeab6,	// (0x0001d7f9) list_recal_vselct_arw_up_pane

0xeabe,	// (0x0001d801) list_recal_vselct_pane

0x89ff,	// (0x00017742) btmg_button_pane

0x8a09,	// (0x0001774c) main_btmg_pane_g1

0x94ff,	// (0x00018242) bg_button_pane_cp044

0xed13,	// (0x0001da56) btmg_button_pane_t1

0xbed3,	// (0x0001ac16) aid_listscroll_gen

0x956f,	// (0x000182b2) main_cntbar_detail_pane

0xe616,	// (0x0001d359) list_cmail_folder_pane

0xd300,	// (0x0001c043) sp_fs_scroll_pane_cp03_ParamLimits

0x84b6,	// (0x000171f9) list_single_fs_dyc_pane_cp01_ParamLimits

0x84b6,	// (0x000171f9) list_single_fs_dyc_pane_cp01

0xed21,	// (0x0001da64) aid_size_cmail_indent

0xed2a,	// (0x0001da6d) list_single_dyc_row_pane_cp01

0x8a45,	// (0x00017788) cntbar_detail_list_pane_ParamLimits

0x8a45,	// (0x00017788) cntbar_detail_list_pane

0x8a91,	// (0x000177d4) main_cntbar_detail_cont_pane_ParamLimits

0x8a91,	// (0x000177d4) main_cntbar_detail_cont_pane

0xd300,	// (0x0001c043) scroll_pane_cp032_ParamLimits

0xd300,	// (0x0001c043) scroll_pane_cp032

0x8aa5,	// (0x000177e8) cntbar_detail_list_event_pane_ParamLimits

0x8aa5,	// (0x000177e8) cntbar_detail_list_event_pane

0x8a55,	// (0x00017798) cntbar_detail_list_shct_pane

0xa1b4,	// (0x00018ef7) aid_list_gen

0xed33,	// (0x0001da76) aid_scroll

0xed3c,	// (0x0001da7f) aid_size_touch_scroll_bar

0x6cc8,	// (0x00015a0b) aid_list_double

0x6cb6,	// (0x000159f9) aid_list_single

0x6cb6,	// (0x000159f9) aid_list_single_lg

0x8ab5,	// (0x000177f8) aid_list_z_g_a_sm

0x8abd,	// (0x00017800) aid_list_z_g_d

0x8ac5,	// (0x00017808) aid_txt_z_prm

0x8ad3,	// (0x00017816) aid_txt_z_prm_cp01

0x8ae1,	// (0x00017824) aid_txt_z_sec

0x8aef,	// (0x00017832) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8aef,	// (0x00017832) main_cntbar_detail_cont_pane_g1

0x8b03,	// (0x00017846) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b03,	// (0x00017846) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001ebc2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001ebc2) main_cntbar_detail_cont_pane_g

0xed45,	// (0x0001da88) main_cntbar_detail_cont_pane_t1

0xed53,	// (0x0001da96) main_cntbar_detail_cont_pane_t2

0xed61,	// (0x0001daa4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001ebc7) main_cntbar_detail_cont_pane_t

0x8b13,	// (0x00017856) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b13,	// (0x00017856) cell_cntbar_detail_list_shct_pane

0xed6f,	// (0x0001dab2) cntbar_detail_list_shct_pane_g1

0xed78,	// (0x0001dabb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001ebce) cntbar_detail_list_shct_pane_g

0x8b27,	// (0x0001786a) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b27,	// (0x0001786a) cntbar_detail_list_event_pane_g1

0x8b33,	// (0x00017876) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b33,	// (0x00017876) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001ebd3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001ebd3) cntbar_detail_list_event_pane_g

0x8b9f,	// (0x000178e2) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b9f,	// (0x000178e2) cntbar_detail_list_event_pane_t1

0x8bb4,	// (0x000178f7) cntbar_detail_list_event_pane_t2_ParamLimits

0x8bb4,	// (0x000178f7) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001ebe0) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001ebe0) cntbar_detail_list_event_pane_t

0xc402,	// (0x0001b145) cell_cntbar_detail_list_shct_pane_g1

0xa9cc,	// (0x0001970f) navi_pane_mv_g3

0x956f,	// (0x000182b2) main_cntbar_detail_pane_ParamLimits

0x94ff,	// (0x00018242) main_notif_wgt_pane

0xcd31,	// (0x0001ba74) aid_tch_main_mp4_pane_g4

0xcf33,	// (0x0001bc76) popup_slider_window_cp02

0xeaa4,	// (0x0001d7e7) list_recal_day_event_pane

0x8a13,	// (0x00017756) cntbar_detail_btn_pane_ParamLimits

0x8a13,	// (0x00017756) cntbar_detail_btn_pane

0x8a2c,	// (0x0001776f) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a2c,	// (0x0001776f) cntbar_detail_btn_pane_cp01

0x8a55,	// (0x00017798) cntbar_detail_list_shct_pane_ParamLimits

0x8a65,	// (0x000177a8) cntbar_detail_pane_g1_ParamLimits

0x8a65,	// (0x000177a8) cntbar_detail_pane_g1

0x8a75,	// (0x000177b8) cntbar_detail_pane_t1_ParamLimits

0x8a75,	// (0x000177b8) cntbar_detail_pane_t1

0x8b3f,	// (0x00017882) cntbar_detail_list_event_pane_g3_ParamLimits

0x8b3f,	// (0x00017882) cntbar_detail_list_event_pane_g3

0x8b57,	// (0x0001789a) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b57,	// (0x0001789a) cntbar_detail_list_event_pane_g4

0x8b6f,	// (0x000178b2) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b6f,	// (0x000178b2) cntbar_detail_list_event_pane_g5

0x8b87,	// (0x000178ca) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b87,	// (0x000178ca) cntbar_detail_list_event_pane_g6

0x8bc9,	// (0x0001790c) cntbar_detail_list_event_pane_t3_ParamLimits

0x8bc9,	// (0x0001790c) cntbar_detail_list_event_pane_t3

0x8bdb,	// (0x0001791e) popup_notif_wgt_window_ParamLimits

0x8bdb,	// (0x0001791e) popup_notif_wgt_window

0x8bf4,	// (0x00017937) popup_submenu_window_cp01_ParamLimits

0x8bf4,	// (0x00017937) popup_submenu_window_cp01

0x9f03,	// (0x00018c46) bg_popup_window_pane_cp10

0xed81,	// (0x0001dac4) listscroll_notif_wgt_pane

0xed93,	// (0x0001dad6) list_notif_wgt_window

0xed9c,	// (0x0001dadf) scroll_pane_cp033

0x8c0a,	// (0x0001794d) list_notif_wgt_row_pane_ParamLimits

0x8c0a,	// (0x0001794d) list_notif_wgt_row_pane

0xeda5,	// (0x0001dae8) aid_size_list_notif_wgt_del

0xedb2,	// (0x0001daf5) list_notif_wgt_row_pane_g1

0xedbe,	// (0x0001db01) list_notif_wgt_row_pane_g2

0xedcd,	// (0x0001db10) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001ebe7) list_notif_wgt_row_pane_g

0xedda,	// (0x0001db1d) list_notif_wgt_row_pane_t1

0xedf0,	// (0x0001db33) list_notif_wgt_row_pane_t2

0xee02,	// (0x0001db45) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001ebee) list_notif_wgt_row_pane_t

0xd540,	// (0x0001c283) list_recal_day_event_pane_g1

0xee14,	// (0x0001db57) list_recal_day_event_pane_t1

0x94ff,	// (0x00018242) bg_button_pane_cp045

0x8c1a,	// (0x0001795d) cntbar_detail_btn_pane_t1

0xbee7,	// (0x0001ac2a) main_callh_pane_ParamLimits

0xbee7,	// (0x0001ac2a) main_callh_pane

0x94ff,	// (0x00018242) main_coverflow0_pane

0x94ff,	// (0x00018242) main_wgtman_pane

0x79f1,	// (0x00016734) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79f1,	// (0x00016734) main_fs_bigclock_unlock_btn_pane

0x8432,	// (0x00017175) bg_button_pane_cp16

0x8442,	// (0x00017185) cell_tport_appsw_pane_g3

0x8c28,	// (0x0001796b) cf0_flow_pane_ParamLimits

0x8c28,	// (0x0001796b) cf0_flow_pane

0xee23,	// (0x0001db66) listscroll_cf0_pane

0xee2e,	// (0x0001db71) main_cf0_pane_g1

0x8c3d,	// (0x00017980) main_cf0_pane_t1_ParamLimits

0x8c3d,	// (0x00017980) main_cf0_pane_t1

0x8c54,	// (0x00017997) main_cf0_pane_t2_ParamLimits

0x8c54,	// (0x00017997) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001ebfa) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001ebfa) main_cf0_pane_t

0xee40,	// (0x0001db83) scroll_pane_cp11

0x8c6b,	// (0x000179ae) cf0_flow_pane_g1

0x8c73,	// (0x000179b6) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001ebff) cf0_flow_pane_g

0x8c7b,	// (0x000179be) cf0_flow_pane_t1

0x94ff,	// (0x00018242) main_call6_pane

0x94ff,	// (0x00018242) main_calllock_pane

0x8c89,	// (0x000179cc) call6_btn_grp_pane_ParamLimits

0x8c89,	// (0x000179cc) call6_btn_grp_pane

0x8ca3,	// (0x000179e6) call6_pane_g1_ParamLimits

0x8ca3,	// (0x000179e6) call6_pane_g1

0x8cb8,	// (0x000179fb) popup_call6_1st_window_ParamLimits

0x8cb8,	// (0x000179fb) popup_call6_1st_window

0x8cc9,	// (0x00017a0c) popup_call6_2nd_window_ParamLimits

0x8cc9,	// (0x00017a0c) popup_call6_2nd_window

0x8cda,	// (0x00017a1d) cell_call6_btn_pane_ParamLimits

0x8cda,	// (0x00017a1d) cell_call6_btn_pane

0x9f03,	// (0x00018c46) bg_popup_call2_in_pane_cp03

0xee4b,	// (0x0001db8e) popup_call6_1st_window_g1

0xee53,	// (0x0001db96) popup_call6_1st_window_g2

0xee5b,	// (0x0001db9e) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001ec04) popup_call6_1st_window_g

0xee63,	// (0x0001dba6) popup_call6_1st_window_t1

0xee72,	// (0x0001dbb5) popup_call6_1st_window_t2

0xee82,	// (0x0001dbc5) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001ec0b) popup_call6_1st_window_t

0x9f03,	// (0x00018c46) bg_popup_call2_in_pane_cp04

0xee4b,	// (0x0001db8e) popup_call6_2nd_window_g1

0xee53,	// (0x0001db96) popup_call6_2nd_window_g2

0xee5b,	// (0x0001db9e) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001ec04) popup_call6_2nd_window_g

0xee63,	// (0x0001dba6) popup_call6_2nd_window_t1

0x94ff,	// (0x00018242) bg_button_pane_cp15

0xee92,	// (0x0001dbd5) cell_call6_btn_pane_g1

0xee9b,	// (0x0001dbde) cell_call6_btn_pane_t1

0x8cee,	// (0x00017a31) listscroll_wgtman_pane_ParamLimits

0x8cee,	// (0x00017a31) listscroll_wgtman_pane

0x8d0f,	// (0x00017a52) wgtman_btn_pane_ParamLimits

0x8d0f,	// (0x00017a52) wgtman_btn_pane

0xa7d3,	// (0x00019516) aid_scroll_copy1

0xeeaa,	// (0x0001dbed) list_wgtman_pane

0x8d52,	// (0x00017a95) wgtman_btn_pane_g1_ParamLimits

0x8d52,	// (0x00017a95) wgtman_btn_pane_g1

0x8d7e,	// (0x00017ac1) wgtman_btn_pane_t1_ParamLimits

0x8d7e,	// (0x00017ac1) wgtman_btn_pane_t1

0xeeb4,	// (0x0001dbf7) wgtman_btn_pane_t2_ParamLimits

0xeeb4,	// (0x0001dbf7) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001ec12) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001ec12) wgtman_btn_pane_t

0x8dbb,	// (0x00017afe) listrow_wgtman_pane_ParamLimits

0x8dbb,	// (0x00017afe) listrow_wgtman_pane

0x8dcd,	// (0x00017b10) listrow_wgtman_pane_g1

0x8dda,	// (0x00017b1d) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001ec17) listrow_wgtman_pane_g

0x8df8,	// (0x00017b3b) listrow_wgtman_pane_t1

0x8e10,	// (0x00017b53) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001ec1c) listrow_wgtman_pane_t

0x8e36,	// (0x00017b79) wait_bar_pane_cp09

0xeecb,	// (0x0001dc0e) main_calllock_btn_pane

0xeed5,	// (0x0001dc18) main_calllock_pane_g1

0x94ff,	// (0x00018242) bg_button_pane_cp17

0xeee1,	// (0x0001dc24) main_calllock_btn_pane_g1

0xeeea,	// (0x0001dc2d) main_calllock_btn_pane_t1

0x94ff,	// (0x00018242) main_dialer3_pane

0x94ff,	// (0x00018242) main_fmrd2_pane

0xc402,	// (0x0001b145) main_fs_bigclock_unlock_btn_pane_g1

0x8e50,	// (0x00017b93) main_fs_bigclock_unlock_btn_pane_t1

0x8e5e,	// (0x00017ba1) area_fmrd2_info_pane_ParamLimits

0x8e5e,	// (0x00017ba1) area_fmrd2_info_pane

0x8e6f,	// (0x00017bb2) area_fmrd2_visual_pane_ParamLimits

0x8e6f,	// (0x00017bb2) area_fmrd2_visual_pane

0x8e7d,	// (0x00017bc0) fmrd2_indi_pane_ParamLimits

0x8e7d,	// (0x00017bc0) fmrd2_indi_pane

0x8e8a,	// (0x00017bcd) area_fmrd2_visual_pane_g1

0x8e92,	// (0x00017bd5) area_fmrd2_visual_pane_t1

0x8ea2,	// (0x00017be5) area_fmrd2_visual_pane_t2

0x8eb2,	// (0x00017bf5) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001ec26) area_fmrd2_visual_pane_t

0x8ec2,	// (0x00017c05) area_fmrd2_info_pane_g1

0x8eca,	// (0x00017c0d) area_fmrd2_info_pane_t1

0x8eda,	// (0x00017c1d) area_fmrd2_info_pane_t2

0x8eea,	// (0x00017c2d) area_fmrd2_info_pane_t3

0x8efa,	// (0x00017c3d) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ec2d) area_fmrd2_info_pane_t

0x8f08,	// (0x00017c4b) fmrd2_indi_pane_t1

0x8f18,	// (0x00017c5b) fmrd2_indi_pane_t2

0x8f28,	// (0x00017c6b) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001ec36) fmrd2_indi_pane_t

0xe191,	// (0x0001ced4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe191,	// (0x0001ced4) list_single_fs_bigclock_indicator_pane_g5

0xe242,	// (0x0001cf85) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe242,	// (0x0001cf85) list_single_fs_bigclock_indicator_pane_t5

0x85cd,	// (0x00017310) aid_cell_bcale_month_pane_ParamLimits

0x85cd,	// (0x00017310) aid_cell_bcale_month_pane

0x85eb,	// (0x0001732e) bcale_month_pane_ParamLimits

0x85eb,	// (0x0001732e) bcale_month_pane

0x860f,	// (0x00017352) bcale_preview_pane_ParamLimits

0x860f,	// (0x00017352) bcale_preview_pane

0xecab,	// (0x0001d9ee) list_single_fs_bigclock_pane_t1_ParamLimits

0xecca,	// (0x0001da0d) list_single_fs_bigclock_pane_t2_ParamLimits

0xecca,	// (0x0001da0d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ebb8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ebb8) list_single_fs_bigclock_pane_t

0x8e48,	// (0x00017b8b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001ec21) main_fs_bigclock_unlock_btn_pane_g

0x8f38,	// (0x00017c7b) aid_dia3_key_size_ParamLimits

0x8f38,	// (0x00017c7b) aid_dia3_key_size

0x8f47,	// (0x00017c8a) aid_dia3_listrow_size_ParamLimits

0x8f47,	// (0x00017c8a) aid_dia3_listrow_size

0x8f5c,	// (0x00017c9f) dia3_keypad_fun_pane_ParamLimits

0x8f5c,	// (0x00017c9f) dia3_keypad_fun_pane

0x8f78,	// (0x00017cbb) dia3_keypad_num_pane_ParamLimits

0x8f78,	// (0x00017cbb) dia3_keypad_num_pane

0x8f93,	// (0x00017cd6) dia3_listscroll_pane_ParamLimits

0x8f93,	// (0x00017cd6) dia3_listscroll_pane

0x8fa6,	// (0x00017ce9) dia3_numentry_pane_ParamLimits

0x8fa6,	// (0x00017ce9) dia3_numentry_pane

0xeef9,	// (0x0001dc3c) dia3_list_pane

0xef04,	// (0x0001dc47) scroll_pane_cp12

0x94ff,	// (0x00018242) bg_dia3_numentry_pane

0x8fba,	// (0x00017cfd) dia3_numentry_pane_t1

0x8fc9,	// (0x00017d0c) cell_dia3_key_num_pane

0x8fd1,	// (0x00017d14) cell_dia3_key0_fun_pane_ParamLimits

0x8fd1,	// (0x00017d14) cell_dia3_key0_fun_pane

0x8fe5,	// (0x00017d28) cell_dia3_key1_fun_pane_ParamLimits

0x8fe5,	// (0x00017d28) cell_dia3_key1_fun_pane

0x8ffd,	// (0x00017d40) dia3_listrow_pane

0xdee4,	// (0x0001cc27) bg_dia3_numentry_pane_g1

0x94ff,	// (0x00018242) bg_button_pane_cp21

0xef0f,	// (0x0001dc52) cell_dia3_key_num_pane_t1

0xef1d,	// (0x0001dc60) cell_dia3_key_num_pane_t2

0xef2c,	// (0x0001dc6f) cell_dia3_key_num_pane_t3

0xef3b,	// (0x0001dc7e) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001ec3d) cell_dia3_key_num_pane_t

0x94ff,	// (0x00018242) bg_button_pane_cp19

0x900f,	// (0x00017d52) cell_dia3_key0_fun_pane_g1

0x94ff,	// (0x00018242) bg_button_pane_cp20

0x9017,	// (0x00017d5a) cell_dia3_key1_fun_pane_g1

0x901f,	// (0x00017d62) area_left_week_number_pane

0x902b,	// (0x00017d6e) area_top_day_name_pane

0x903e,	// (0x00017d81) frame_month_view_pane

0xef4a,	// (0x0001dc8d) grid_month_view_pane

0x9051,	// (0x00017d94) cell_top_day_name_pane_ParamLimits

0x9051,	// (0x00017d94) cell_top_day_name_pane

0x907e,	// (0x00017dc1) cell_area_left_week_number_pane_ParamLimits

0x907e,	// (0x00017dc1) cell_area_left_week_number_pane

0x9092,	// (0x00017dd5) cell_month_view_pane_ParamLimits

0x9092,	// (0x00017dd5) cell_month_view_pane

0xef58,	// (0x0001dc9b) frm_month_g1

0x90bf,	// (0x00017e02) frm_month_g2

0x90d2,	// (0x00017e15) frm_month_g3

0x90e5,	// (0x00017e28) frm_month_g4

0x90f8,	// (0x00017e3b) frm_month_g5

0x910b,	// (0x00017e4e) frm_month_g6

0x911e,	// (0x00017e61) frm_month_g7

0xef65,	// (0x0001dca8) frm_month_g8

0x9131,	// (0x00017e74) frm_month_g9

0x9141,	// (0x00017e84) frm_month_g10

0x9151,	// (0x00017e94) frm_month_g11

0x9161,	// (0x00017ea4) frm_month_g12

0x9173,	// (0x00017eb6) frm_month_g13

0x9185,	// (0x00017ec8) frm_month_g14

0x9199,	// (0x00017edc) frm_month_g15

0x91ad,	// (0x00017ef0) frm_month_g16

0x000f,

0xff03,	// (0x0001ec46) frm_month_g

0xef72,	// (0x0001dcb5) cell_top_day_name_pane_t1

0x91c1,	// (0x00017f04) cell_area_left_week_number_pane_g1

0x91cd,	// (0x00017f10) cell_area_left_week_number_pane_t1

0xc66e,	// (0x0001b3b1) cell_month_view_pane_g1

0x91e0,	// (0x00017f23) cell_month_view_pane_t1

0x94ff,	// (0x00018242) main_fps_pane

0xe43b,	// (0x0001d17e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe43b,	// (0x0001d17e) cmail_ddmenu_btn02_pane_cp1

0xe457,	// (0x0001d19a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe457,	// (0x0001d19a) cmail_ddmenu_btn02_pane_cp2

0x88c6,	// (0x00017609) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88c6,	// (0x00017609) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001eb6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001eb6b) cmail_ddmenu_btn02_pane_g

0x88e5,	// (0x00017628) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88e5,	// (0x00017628) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001eb70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001eb70) cmail_ddmenu_btn02_pane_t

0x91f3,	// (0x00017f36) fps_text_pane_ParamLimits

0x91f3,	// (0x00017f36) fps_text_pane

0x920a,	// (0x00017f4d) main_fps_pane_g1_ParamLimits

0x920a,	// (0x00017f4d) main_fps_pane_g1

0x9224,	// (0x00017f67) wait_bar_pane_cp010_ParamLimits

0x9224,	// (0x00017f67) wait_bar_pane_cp010

0x9235,	// (0x00017f78) fps_text_pane_t1_ParamLimits

0x9235,	// (0x00017f78) fps_text_pane_t1

0xea5e,	// (0x0001d7a1) cam4_image_uncrop_pane_g1

0xea67,	// (0x0001d7aa) cam4_image_uncrop_pane_g2

0x5a0f,	// (0x00014752) cam4_image_uncrop_pane_g3

0x5a18,	// (0x0001475b) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001e631) cam4_image_uncrop_pane_g

0x8ffd,	// (0x00017d40) dia3_listrow_pane_ParamLimits

0x94ff,	// (0x00018242) main_phob2_pane

0x8403,	// (0x00017146) cell_tport_appsw_pane_cp02_ParamLimits

0x8403,	// (0x00017146) cell_tport_appsw_pane_cp02

0x8417,	// (0x0001715a) cell_tport_appsw_pane_cp03_ParamLimits

0x8417,	// (0x0001715a) cell_tport_appsw_pane_cp03

0x94ff,	// (0x00018242) phob2_contact_card_pane

0x94ff,	// (0x00018242) phob2_listscroll_pane

0xef85,	// (0x0001dcc8) phob2_list_pane

0xef8d,	// (0x0001dcd0) scroll_pane_cp034

0x924d,	// (0x00017f90) phob2_cc_data_pane_ParamLimits

0x924d,	// (0x00017f90) phob2_cc_data_pane

0x926c,	// (0x00017faf) phob2_cc_listscroll_pane_ParamLimits

0x926c,	// (0x00017faf) phob2_cc_listscroll_pane

0x8dbb,	// (0x00017afe) list_double_large_graphic_phob2_pane_ParamLimits

0x8dbb,	// (0x00017afe) list_double_large_graphic_phob2_pane

0x928a,	// (0x00017fcd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x928a,	// (0x00017fcd) list_double_large_graphic_phob2_pane_g1

0x92a0,	// (0x00017fe3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92a0,	// (0x00017fe3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ec67) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ec67) list_double_large_graphic_phob2_pane_g

0x92ac,	// (0x00017fef) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x92ac,	// (0x00017fef) list_double_large_graphic_phob2_pane_t1

0x92c1,	// (0x00018004) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92c1,	// (0x00018004) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ec6c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ec6c) list_double_large_graphic_phob2_pane_t

0x94ff,	// (0x00018242) list_highlight_pane_cp024

0x92d3,	// (0x00018016) phob2_cc_button_pane

0x92db,	// (0x0001801e) phob2_cc_data_pane_g1_ParamLimits

0x92db,	// (0x0001801e) phob2_cc_data_pane_g1

0x92f0,	// (0x00018033) phob2_cc_data_pane_g2_ParamLimits

0x92f0,	// (0x00018033) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ec71) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ec71) phob2_cc_data_pane_g

0x9300,	// (0x00018043) phob2_cc_data_pane_t1_ParamLimits

0x9300,	// (0x00018043) phob2_cc_data_pane_t1

0x9318,	// (0x0001805b) phob2_cc_data_pane_t2_ParamLimits

0x9318,	// (0x0001805b) phob2_cc_data_pane_t2

0x9330,	// (0x00018073) phob2_cc_data_pane_t3_ParamLimits

0x9330,	// (0x00018073) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ec76) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ec76) phob2_cc_data_pane_t

0xef95,	// (0x0001dcd8) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x0001dcd8) phob2_cc_list_pane

0xd5e9,	// (0x0001c32c) scroll_pane_cp035_ParamLimits

0xd5e9,	// (0x0001c32c) scroll_pane_cp035

0x956f,	// (0x000182b2) bg_button_pane_cp033

0xefa1,	// (0x0001dce4) phob2_cc_button_pane_g1

0xefad,	// (0x0001dcf0) phob2_cc_button_pane_t1

0xefc2,	// (0x0001dd05) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ec7d) phob2_cc_button_pane_t

0x9348,	// (0x0001808b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9348,	// (0x0001808b) list_double_large_graphic_phob2_cc_pane

0x935a,	// (0x0001809d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x935a,	// (0x0001809d) list_double_large_graphic_phob2_cc_pane_g1

0x9366,	// (0x000180a9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9366,	// (0x000180a9) list_double_large_graphic_phob2_cc_pane_g2

0x9372,	// (0x000180b5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9372,	// (0x000180b5) list_double_large_graphic_phob2_cc_pane_g3

0x937e,	// (0x000180c1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x937e,	// (0x000180c1) list_double_large_graphic_phob2_cc_pane_g4

0x938a,	// (0x000180cd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x938a,	// (0x000180cd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ec82) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ec82) list_double_large_graphic_phob2_cc_pane_g

0x9396,	// (0x000180d9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9396,	// (0x000180d9) list_double_large_graphic_phob2_cc_pane_t1

0x93bf,	// (0x00018102) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93bf,	// (0x00018102) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ec8d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ec8d) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x0001dd17) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x0001dd17) list_highlight_pane_cp025

0x956f,	// (0x000182b2) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x0001dce4) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x0001dcf0) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x0001dd05) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ec7d) phob2_cc_button_pane_t_ParamLimits

0x04a1,	// (0x0000f1e4) popup_wgtman_window

0xd387,	// (0x0001c0ca) scroll_pane_cp038

0x8d34,	// (0x00017a77) wgtman_btn_pane_cp_01_ParamLimits

0x8d34,	// (0x00017a77) wgtman_btn_pane_cp_01

0xefe2,	// (0x0001dd25) wgtman_content_pane

0xefeb,	// (0x0001dd2e) wgtman_heading_pane

0x94ff,	// (0x00018242) bg_heading_pane_cp02

0xeff4,	// (0x0001dd37) wgtman_heading_pane_g1

0xeffc,	// (0x0001dd3f) wgtman_heading_pane_t1

0xf00a,	// (0x0001dd4d) scroll_pane_cp036

0xf012,	// (0x0001dd55) wgtman_list_pane

0xf01a,	// (0x0001dd5d) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x0001dd5d) wgtman_list_pane_t1

0xd0d4,	// (0x0001be17) cam4_grid_pane

0x67af,	// (0x000154f2) bg_button_pane_cp015_ParamLimits

0x67c1,	// (0x00015504) bg_button_pane_cp016_ParamLimits

0x67d4,	// (0x00015517) bg_button_pane_cp017_ParamLimits

0x682c,	// (0x0001556f) popup_vitu2_query_window_g3_ParamLimits

0x682c,	// (0x0001556f) popup_vitu2_query_window_g3

0x68e9,	// (0x0001562c) popup_vitu2_query_window_t6_ParamLimits

0x68e9,	// (0x0001562c) popup_vitu2_query_window_t6

0x6914,	// (0x00015657) popup_vitu2_query_window_t7_ParamLimits

0x6914,	// (0x00015657) popup_vitu2_query_window_t7

0xea5e,	// (0x0001d7a1) cam4_grid_pane_g1

0xea67,	// (0x0001d7aa) cam4_grid_pane_g2

0xf034,	// (0x0001dd77) cam4_grid_pane_g3

0xf03d,	// (0x0001dd80) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ec92) cam4_grid_pane_g

0x13fc,	// (0x0001013f) aid_placing_vt_slider_lsc_ParamLimits

0x1707,	// (0x0001044a) vidtel_button_pane_ParamLimits

0x1707,	// (0x0001044a) vidtel_button_pane

0x94ff,	// (0x00018242) bg_button_pane_cp034

0x93e8,	// (0x0001812b) vidtel_button_pane_g1

0xf048,	// (0x0001dd8b) vidtel_button_pane_t1

0xd4f4,	// (0x0001c237) aid_size_vtel_slider_touch

0xd5e9,	// (0x0001c32c) scroll_pane_cp039

0x76e5,	// (0x00016428) ncim_query_button_pane_cp01_ParamLimits

0x7704,	// (0x00016447) ncimui_query_pane_g1_ParamLimits

0x956f,	// (0x000182b2) input_focus_pane_cp012_ParamLimits

0xdf22,	// (0x0001cc65) ncim_query_entry_pane_t1_ParamLimits

0xd5e9,	// (0x0001c32c) scroll_pane_cp039_ParamLimits

0xa8b7,	// (0x000195fa) navi_pane_bcale_mc_g1

0xa8bf,	// (0x00019602) navi_pane_bcale_mc_t1

0xe4a0,	// (0x0001d1e3) main_sp_fs_email_pane_g1

0xe4ac,	// (0x0001d1ef) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001ea28) main_sp_fs_email_pane_g

0xe924,	// (0x0001d667) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe924,	// (0x0001d667) list_single_cale_mrui_row_pane_g3

0x8905,	// (0x00017648) list_single_recal_day_pane_g5_event_pane

0xeb15,	// (0x0001d858) list_single_recal_day_pane_g7

0xf05e,	// (0x0001dda1) list_recal_day_event_pane_cp01

0xf067,	// (0x0001ddaa) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001ddb2) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001ddba) list_recal_vselct_pane_cp01

0xd540,	// (0x0001c283) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001ddc4) list_recal_day_event_pane_cp01_t1

0xeb1d,	// (0x0001d860) list_single_recal_day_pane_t1_ParamLimits

0xeb2f,	// (0x0001d872) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001eb80) list_single_recal_day_pane_t_ParamLimits

0x9beb,	// (0x0001892e) bg_notes_pane_ParamLimits

0x9c96,	// (0x000189d9) list_notes_pane_ParamLimits

0x07ea,	// (0x0000f52d) scroll_pane_cp06_ParamLimits

0x9cd2,	// (0x00018a15) main_notes_pane_ParamLimits

0x94ff,	// (0x00018242) main_welc_pane

0x93f0,	// (0x00018133) main_welc_body_pane_ParamLimits

0x93f0,	// (0x00018133) main_welc_body_pane

0x940e,	// (0x00018151) main_welc_opti_pane_ParamLimits

0x940e,	// (0x00018151) main_welc_opti_pane

0x9453,	// (0x00018196) main_welc_pane_t1_ParamLimits

0x9453,	// (0x00018196) main_welc_pane_t1

0x9471,	// (0x000181b4) main_welc_body_row_pane_ParamLimits

0x9471,	// (0x000181b4) main_welc_body_row_pane

0xd2f2,	// (0x0001c035) main_welc_opti_row_pane_ParamLimits

0xd2f2,	// (0x0001c035) main_welc_opti_row_pane

0xf08f,	// (0x0001ddd2) main_welc_opti_row_pane_g1

0x9485,	// (0x000181c8) main_welc_opti_row_pane_t1

0xf097,	// (0x0001ddda) main_welc_body_row_pane_t1

0xed8b,	// (0x0001dace) popup_notif_wgt_heading_pane

0xeda5,	// (0x0001dae8) aid_size_list_notif_wgt_del_ParamLimits

0xedb2,	// (0x0001daf5) list_notif_wgt_row_pane_g1_ParamLimits

0xedbe,	// (0x0001db01) list_notif_wgt_row_pane_g2_ParamLimits

0xedcd,	// (0x0001db10) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001ebe7) list_notif_wgt_row_pane_g_ParamLimits

0xedda,	// (0x0001db1d) list_notif_wgt_row_pane_t1_ParamLimits

0xedf0,	// (0x0001db33) list_notif_wgt_row_pane_t2_ParamLimits

0xee02,	// (0x0001db45) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001ebee) list_notif_wgt_row_pane_t_ParamLimits

0x8dcd,	// (0x00017b10) listrow_wgtman_pane_g1_ParamLimits

0x8dda,	// (0x00017b1d) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001ec17) listrow_wgtman_pane_g_ParamLimits

0x8df8,	// (0x00017b3b) listrow_wgtman_pane_t1_ParamLimits

0x8e10,	// (0x00017b53) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001ec1c) listrow_wgtman_pane_t_ParamLimits

0x8e36,	// (0x00017b79) wait_bar_pane_cp09_ParamLimits

0x94ff,	// (0x00018242) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001dde9) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001ddf1) popup_notif_wgt_heading_pane_t1

0x94ff,	// (0x00018242) main_vids_pane

0x94ff,	// (0x00018242) vids_listscroll_pane

0x9494,	// (0x000181d7) scroll_pane_cp040

0x94ff,	// (0x00018242) vids_list_pane

0x949f,	// (0x000181e2) vids_list_double_pane_ParamLimits

0x949f,	// (0x000181e2) vids_list_double_pane

0x94b0,	// (0x000181f3) vids_list_double_pane_g1

0x94b9,	// (0x000181fc) vids_list_double_pane_t1

0x94c9,	// (0x0001820c) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001eca0) vids_list_double_pane_t

0x956f,	// (0x000182b2) main_ncimui_pane_ParamLimits

0x751b,	// (0x0001625e) main_ncimui_pane_g1_ParamLimits

0x7527,	// (0x0001626a) main_ncimui_pane_g2_ParamLimits

0x7527,	// (0x0001626a) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001e92d) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001e92d) main_ncimui_pane_g

0x9429,	// (0x0001816c) main_welc_pane_g1_ParamLimits

0x9429,	// (0x0001816c) main_welc_pane_g1

0x943e,	// (0x00018181) main_welc_pane_g2_ParamLimits

0x943e,	// (0x00018181) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ec9b) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ec9b) main_welc_pane_g

0x9beb,	// (0x0001892e) listscroll_mce_pane_ParamLimits

0xaa0c,	// (0x0001974f) wait_bar_pane_cp10

0xbedb,	// (0x0001ac1e) main_cale_day_pane_ParamLimits

0xbedb,	// (0x0001ac1e) main_cale_week_pane_ParamLimits

0x9beb,	// (0x0001892e) main_messa_pane_ParamLimits

0x4d4b,	// (0x00013a8e) main_clock2_btn_pane_ParamLimits

0x4d4b,	// (0x00013a8e) main_clock2_btn_pane

0xc822,	// (0x0001b565) main_clock2_btn_pane_cp01_ParamLimits

0xc822,	// (0x0001b565) main_clock2_btn_pane_cp01

0xe8b0,	// (0x0001d5f3) list_cale_mrui_pane_ParamLimits

0xee38,	// (0x0001db7b) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001ebf5) main_cf0_pane_g

0x901f,	// (0x00017d62) area_left_week_number_pane_ParamLimits

0x902b,	// (0x00017d6e) area_top_day_name_pane_ParamLimits

0x903e,	// (0x00017d81) frame_month_view_pane_ParamLimits

0xef4a,	// (0x0001dc8d) grid_month_view_pane_ParamLimits

0xef58,	// (0x0001dc9b) frm_month_g1_ParamLimits

0x90bf,	// (0x00017e02) frm_month_g2_ParamLimits

0x90d2,	// (0x00017e15) frm_month_g3_ParamLimits

0x90e5,	// (0x00017e28) frm_month_g4_ParamLimits

0x90f8,	// (0x00017e3b) frm_month_g5_ParamLimits

0x910b,	// (0x00017e4e) frm_month_g6_ParamLimits

0x911e,	// (0x00017e61) frm_month_g7_ParamLimits

0xef65,	// (0x0001dca8) frm_month_g8_ParamLimits

0x9131,	// (0x00017e74) frm_month_g9_ParamLimits

0x9141,	// (0x00017e84) frm_month_g10_ParamLimits

0x9151,	// (0x00017e94) frm_month_g11_ParamLimits

0x9161,	// (0x00017ea4) frm_month_g12_ParamLimits

0x9173,	// (0x00017eb6) frm_month_g13_ParamLimits

0x9185,	// (0x00017ec8) frm_month_g14_ParamLimits

0x9199,	// (0x00017edc) frm_month_g15_ParamLimits

0x91ad,	// (0x00017ef0) frm_month_g16_ParamLimits

0xff03,	// (0x0001ec46) frm_month_g_ParamLimits

0xef72,	// (0x0001dcb5) cell_top_day_name_pane_t1_ParamLimits

0x91c1,	// (0x00017f04) cell_area_left_week_number_pane_g1_ParamLimits

0x91cd,	// (0x00017f10) cell_area_left_week_number_pane_t1_ParamLimits

0xc66e,	// (0x0001b3b1) cell_month_view_pane_g1_ParamLimits

0x91e0,	// (0x00017f23) cell_month_view_pane_t1_ParamLimits

0x9be3,	// (0x00018926) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001ddff) main_clock2_btn_pane_t1

0x956f,	// (0x000182b2) listscroll_cmail_pane_ParamLimits

0xe4a0,	// (0x0001d1e3) main_sp_fs_email_pane_g1_ParamLimits

0xe4ac,	// (0x0001d1ef) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001ea28) main_sp_fs_email_pane_g_ParamLimits

0xea85,	// (0x0001d7c8) list_recal_day_pane_ParamLimits

0xea96,	// (0x0001d7d9) mian_recal_day_pane_t1

0x8068,	// (0x00016dab) list_single_dyc_row_text_pane_t4_ParamLimits

0x8068,	// (0x00016dab) list_single_dyc_row_text_pane_t4

0x80b1,	// (0x00016df4) list_single_dyc_row_text_pane_t5_ParamLimits

0x80b1,	// (0x00016df4) list_single_dyc_row_text_pane_t5

0xe552,	// (0x0001d295) list_single_dyc_row_text_pane_t6_ParamLimits

0xe552,	// (0x0001d295) list_single_dyc_row_text_pane_t6

0x2383,	// (0x000110c6) aid_mgn_list_cale_time_pane

0x956f,	// (0x000182b2) main_gallery2_pane_ParamLimits

0xc838,	// (0x0001b57b) main_clock2_pane_cp01_t1

0xc848,	// (0x0001b58b) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001e507) main_clock2_pane_cp01_t

0x0ba4,	// (0x0000f8e7) cale_week_scroll_pane_g16_ParamLimits

0x0ba4,	// (0x0000f8e7) cale_week_scroll_pane_g16

0x9f03,	// (0x00018c46) vorec_slider_pane

0xf048,	// (0x0001dd8b) vidtel_button_pane_t1_ParamLimits

0x896b,	// (0x000176ae) main_fs_bigclock_clock_pane_g1_ParamLimits

0x896b,	// (0x000176ae) main_fs_bigclock_clock_pane_g2_ParamLimits

0x897c,	// (0x000176bf) main_fs_bigclock_clock_pane_g3_ParamLimits

0x897c,	// (0x000176bf) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0001eba3) main_fs_bigclock_clock_pane_g_ParamLimits

0x898f,	// (0x000176d2) main_fs_bigclock_clock_pane_t1_ParamLimits

0x89a5,	// (0x000176e8) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0001ebac) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal

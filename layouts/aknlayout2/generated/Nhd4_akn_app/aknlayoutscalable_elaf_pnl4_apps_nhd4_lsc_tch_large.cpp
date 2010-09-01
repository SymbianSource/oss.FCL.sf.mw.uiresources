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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006c747 };

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
0x359e,	// (0x0006fce5) Screen

0x35aa,	// (0x0006fcf1) application_window

0x35f0,	// (0x0006fd37) area_bottom_pane_ParamLimits

0x35f0,	// (0x0006fd37) area_bottom_pane

0x3629,	// (0x0006fd70) area_top_pane_ParamLimits

0x3629,	// (0x0006fd70) area_top_pane

0xba2c,	// (0x00078173) call_video_uplink_pane_ParamLimits

0xba2c,	// (0x00078173) call_video_uplink_pane

0x36b7,	// (0x0006fdfe) main_pane_ParamLimits

0x36b7,	// (0x0006fdfe) main_pane

0x18c3,	// (0x0006e00a) context_pane

0x6862,	// (0x00072fa9) navi_pane

0x6894,	// (0x00072fdb) popup_cale_events_window_ParamLimits

0x6894,	// (0x00072fdb) popup_cale_events_window

0x18d6,	// (0x0006e01d) popup_mup_playback_window

0x68ac,	// (0x00072ff3) signal_pane

0xbc64,	// (0x000783ab) main_browser_pane

0xbe90,	// (0x000785d7) main_burst_pane

0x65be,	// (0x00072d05) main_calc_pane

0x18a9,	// (0x0006dff0) main_cale_day_pane

0x411e,	// (0x00070865) main_cale_month_pane

0x18a9,	// (0x0006dff0) main_cale_week_pane

0xbe90,	// (0x000785d7) main_call_pane

0x3cab,	// (0x000703f2) main_call_poc_pane

0xbe90,	// (0x000785d7) main_camera_pane

0xbe90,	// (0x000785d7) main_chi_dic_pane

0xc700,	// (0x00078e47) main_clock_pane

0x3cab,	// (0x000703f2) main_fmradio_pane

0xbe90,	// (0x000785d7) main_graph_messa_pane

0x3cab,	// (0x000703f2) main_help_pane

0xbc64,	// (0x000783ab) main_im_pane

0xbb63,	// (0x000782aa) main_image_pane_ParamLimits

0xbb63,	// (0x000782aa) main_image_pane

0x3cab,	// (0x000703f2) main_location2_pane

0xbe90,	// (0x000785d7) main_location_pane

0xbb63,	// (0x000782aa) main_messa_pane

0x3cab,	// (0x000703f2) main_mp2_pane

0xbe90,	// (0x000785d7) main_mp_pane

0x3cab,	// (0x000703f2) main_msg_pane

0x3cab,	// (0x000703f2) main_mup_eq_pane

0x3cab,	// (0x000703f2) main_mup_pane

0xbc64,	// (0x000783ab) main_notes_pane

0x3cab,	// (0x000703f2) main_pec_pane

0x3cab,	// (0x000703f2) main_phob_pane

0x3cab,	// (0x000703f2) main_pinb_pane

0x3cab,	// (0x000703f2) main_postcard_pane

0x3cab,	// (0x000703f2) main_qdial_pane

0xbe90,	// (0x000785d7) main_skin_pane

0x3cab,	// (0x000703f2) main_smil2_pane

0xbe90,	// (0x000785d7) main_smil_pane

0xbe90,	// (0x000785d7) main_video_pane

0xbe90,	// (0x000785d7) main_video_tele_pane

0xbb63,	// (0x000782aa) main_viewer_pane_ParamLimits

0xbb63,	// (0x000782aa) main_viewer_pane

0xbe90,	// (0x000785d7) main_vorec_pane

0x661e,	// (0x00072d65) popup_blid_sat_info_window_ParamLimits

0x661e,	// (0x00072d65) popup_blid_sat_info_window

0x6676,	// (0x00072dbd) popup_dyc_status_message_window_ParamLimits

0x6676,	// (0x00072dbd) popup_dyc_status_message_window

0x668e,	// (0x00072dd5) popup_grid_large_graphic_window_ParamLimits

0x668e,	// (0x00072dd5) popup_grid_large_graphic_window

0x673e,	// (0x00072e85) popup_loc_request_window_ParamLimits

0x673e,	// (0x00072e85) popup_loc_request_window

0x683a,	// (0x00072f81) popup_wml_address_window_ParamLimits

0x683a,	// (0x00072f81) popup_wml_address_window

0x63f8,	// (0x00072b3f) call_muted_g1

0x606b,	// (0x000727b2) popup_call_audio_conf_window_ParamLimits

0x606b,	// (0x000727b2) popup_call_audio_conf_window

0x640c,	// (0x00072b53) popup_call_audio_first_window_ParamLimits

0x640c,	// (0x00072b53) popup_call_audio_first_window

0x6482,	// (0x00072bc9) popup_call_audio_in_window_ParamLimits

0x6482,	// (0x00072bc9) popup_call_audio_in_window

0x64be,	// (0x00072c05) popup_call_audio_out_window_ParamLimits

0x64be,	// (0x00072c05) popup_call_audio_out_window

0x64f8,	// (0x00072c3f) popup_call_audio_second_window_ParamLimits

0x64f8,	// (0x00072c3f) popup_call_audio_second_window

0x654e,	// (0x00072c95) popup_call_audio_wait_window_ParamLimits

0x654e,	// (0x00072c95) popup_call_audio_wait_window

0x6583,	// (0x00072cca) popup_number_entry_window_ParamLimits

0x6583,	// (0x00072cca) popup_number_entry_window

0x383f,	// (0x0006ff86) bg_popup_call_pane_cp05_ParamLimits

0x383f,	// (0x0006ff86) bg_popup_call_pane_cp05

0x385f,	// (0x0006ffa6) popup_number_entry_window_t1

0x3872,	// (0x0006ffb9) popup_number_entry_window_t2

0x3884,	// (0x0006ffcb) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0007b7cc) popup_number_entry_window_t

0x38cb,	// (0x00070012) text_title_cp2

0x38de,	// (0x00070025) bg_popup_call_pane_cp_ParamLimits

0x38de,	// (0x00070025) bg_popup_call_pane_cp

0x38ec,	// (0x00070033) call_thumbnail_pane

0x38f4,	// (0x0007003b) popup_call_audio_in_window_g1_ParamLimits

0x38f4,	// (0x0007003b) popup_call_audio_in_window_g1

0x3900,	// (0x00070047) popup_call_audio_in_window_g2_ParamLimits

0x3900,	// (0x00070047) popup_call_audio_in_window_g2

0x390c,	// (0x00070053) popup_call_audio_in_window_g3_ParamLimits

0x390c,	// (0x00070053) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0007b7d5) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0007b7d5) popup_call_audio_in_window_g

0x3918,	// (0x0007005f) popup_call_audio_in_window_t1_ParamLimits

0x3918,	// (0x0007005f) popup_call_audio_in_window_t1

0x3934,	// (0x0007007b) popup_call_audio_in_window_t2_ParamLimits

0x3934,	// (0x0007007b) popup_call_audio_in_window_t2

0x3950,	// (0x00070097) popup_call_audio_in_window_t3_ParamLimits

0x3950,	// (0x00070097) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0007b7dc) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0007b7dc) popup_call_audio_in_window_t

0x38de,	// (0x00070025) bg_popup_call_pane_cp01_ParamLimits

0x38de,	// (0x00070025) bg_popup_call_pane_cp01

0x38ec,	// (0x00070033) call_thumbnail_pane_cp02

0x3963,	// (0x000700aa) call_type_pane_cp022

0x396b,	// (0x000700b2) popup_call_audio_out_window_g1_ParamLimits

0x396b,	// (0x000700b2) popup_call_audio_out_window_g1

0x397d,	// (0x000700c4) popup_call_audio_out_window_g2_ParamLimits

0x397d,	// (0x000700c4) popup_call_audio_out_window_g2

0x3989,	// (0x000700d0) popup_call_audio_out_window_g3_ParamLimits

0x3989,	// (0x000700d0) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0007b7e3) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0007b7e3) popup_call_audio_out_window_g

0x399b,	// (0x000700e2) popup_call_audio_out_window_t1_ParamLimits

0x399b,	// (0x000700e2) popup_call_audio_out_window_t1

0x39b3,	// (0x000700fa) popup_call_audio_out_window_t2_ParamLimits

0x39b3,	// (0x000700fa) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0007b7ea) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0007b7ea) popup_call_audio_out_window_t

0x39c8,	// (0x0007010f) bg_popup_call_pane_ParamLimits

0x39c8,	// (0x0007010f) bg_popup_call_pane

0x3a4c,	// (0x00070193) call_thumbnail_pane_cp_ParamLimits

0x3a4c,	// (0x00070193) call_thumbnail_pane_cp

0x3a70,	// (0x000701b7) call_type_pane_cp01_ParamLimits

0x3a70,	// (0x000701b7) call_type_pane_cp01

0x3ab4,	// (0x000701fb) popup_call_audio_first_window_g1_ParamLimits

0x3ab4,	// (0x000701fb) popup_call_audio_first_window_g1

0x3b00,	// (0x00070247) popup_call_audio_first_window_g2_ParamLimits

0x3b00,	// (0x00070247) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0007b7ef) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0007b7ef) popup_call_audio_first_window_g

0x3b44,	// (0x0007028b) popup_call_audio_first_window_t1_ParamLimits

0x3b44,	// (0x0007028b) popup_call_audio_first_window_t1

0x3bf0,	// (0x00070337) popup_call_audio_first_window_t4_ParamLimits

0x3bf0,	// (0x00070337) popup_call_audio_first_window_t4

0x3c7c,	// (0x000703c3) popup_call_audio_first_window_t5_ParamLimits

0x3c7c,	// (0x000703c3) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0007b7f4) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0007b7f4) popup_call_audio_first_window_t

0x3cab,	// (0x000703f2) bg_popup_call_pane_cp02

0x3cb5,	// (0x000703fc) call_type_pane_cp023

0x3cbd,	// (0x00070404) popup_call_audio_wait_window_g1

0x3cc5,	// (0x0007040c) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0007b7fb) popup_call_audio_wait_window_g

0x3ccd,	// (0x00070414) popup_call_audio_wait_window_t3

0x3cdb,	// (0x00070422) bg_popup_call_pane_cp03_ParamLimits

0x3cdb,	// (0x00070422) bg_popup_call_pane_cp03

0x3d3b,	// (0x00070482) call_thumbnail_pane_cp011_ParamLimits

0x3d3b,	// (0x00070482) call_thumbnail_pane_cp011

0x3d47,	// (0x0007048e) call_type_pane_cp034_ParamLimits

0x3d47,	// (0x0007048e) call_type_pane_cp034

0x3d83,	// (0x000704ca) popup_call_audio_second_window_g1_ParamLimits

0x3d83,	// (0x000704ca) popup_call_audio_second_window_g1

0x3dbf,	// (0x00070506) popup_call_audio_second_window_g2_ParamLimits

0x3dbf,	// (0x00070506) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0007b800) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0007b800) popup_call_audio_second_window_g

0xba58,	// (0x0007819f) popup_call_audio_second_window_t1_ParamLimits

0xba58,	// (0x0007819f) popup_call_audio_second_window_t1

0xbad9,	// (0x00078220) popup_call_audio_second_window_t2_ParamLimits

0xbad9,	// (0x00078220) popup_call_audio_second_window_t2

0xbb0f,	// (0x00078256) popup_call_audio_second_window_t3_ParamLimits

0xbb0f,	// (0x00078256) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0007b805) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0007b805) popup_call_audio_second_window_t

0x3cab,	// (0x000703f2) bg_popup_call_pane_cp04

0xbb45,	// (0x0007828c) list_conf_pane

0xbb4d,	// (0x00078294) popup_call_audio_conf_window_t1

0xbb5b,	// (0x000782a2) call_thumbnail_pane_g1

0xbb63,	// (0x000782aa) bg_pinb_pane_ParamLimits

0xbb63,	// (0x000782aa) bg_pinb_pane

0xbb71,	// (0x000782b8) find_pinb_pane

0xbb63,	// (0x000782aa) listscroll_pinb_pane_ParamLimits

0xbb63,	// (0x000782aa) listscroll_pinb_pane

0xbb7b,	// (0x000782c2) pinb_bg_pane_g1

0xbb7b,	// (0x000782c2) pinb_bg_pane_g2

0xbb7b,	// (0x000782c2) pinb_bg_pane_g3

0xbb7b,	// (0x000782c2) pinb_bg_pane_g4

0xbb7b,	// (0x000782c2) pinb_bg_pane_g5

0xbb7b,	// (0x000782c2) pinb_bg_pane_g6

0xbb7b,	// (0x000782c2) pinb_bg_pane_g7

0xbb7b,	// (0x000782c2) pinb_bg_pane_g8

0xbb7b,	// (0x000782c2) pinb_bg_pane_g9

0xbb7b,	// (0x000782c2) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0007b80c) pinb_bg_pane_g

0x35b6,	// (0x0006fcfd) grid_pinb_pane

0x35b6,	// (0x0006fcfd) list_pinb_pane

0xba4a,	// (0x00078191) scroll_pane_cp01_ParamLimits

0xba4a,	// (0x00078191) scroll_pane_cp01

0xbb85,	// (0x000782cc) find_pinb_pane_g1_ParamLimits

0xbb85,	// (0x000782cc) find_pinb_pane_g1

0xbb9d,	// (0x000782e4) find_pinb_pane_t1

0xbbaf,	// (0x000782f6) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0007b826) find_pinb_pane_t

0xbbc4,	// (0x0007830b) input_focus_pane_cp01_ParamLimits

0xbbc4,	// (0x0007830b) input_focus_pane_cp01

0x3dfb,	// (0x00070542) cell_pinb_pane_ParamLimits

0x3dfb,	// (0x00070542) cell_pinb_pane

0xbbd0,	// (0x00078317) cell_pinb_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) cell_pinb_pane_g1

0xbbde,	// (0x00078325) cell_pinb_pane_g2_ParamLimits

0xbbde,	// (0x00078325) cell_pinb_pane_g2

0xbbde,	// (0x00078325) cell_pinb_pane_g3_ParamLimits

0xbbde,	// (0x00078325) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0007b82b) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0007b82b) cell_pinb_pane_g

0x3cab,	// (0x000703f2) grid_highlight_pane_cp01

0x3dfb,	// (0x00070542) list_pinb_item_pane_ParamLimits

0x3dfb,	// (0x00070542) list_pinb_item_pane

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp02

0xbbec,	// (0x00078333) list_pinb_item_pane_g1_ParamLimits

0xbbec,	// (0x00078333) list_pinb_item_pane_g1

0xbbde,	// (0x00078325) list_pinb_item_pane_g2_ParamLimits

0xbbde,	// (0x00078325) list_pinb_item_pane_g2

0xbbd0,	// (0x00078317) list_pinb_item_pane_g3_ParamLimits

0xbbd0,	// (0x00078317) list_pinb_item_pane_g3

0xbbde,	// (0x00078325) list_pinb_item_pane_g4_ParamLimits

0xbbde,	// (0x00078325) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0007b832) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0007b832) list_pinb_item_pane_g

0xbbfa,	// (0x00078341) list_pinb_item_pane_t1_ParamLimits

0xbbfa,	// (0x00078341) list_pinb_item_pane_t1

0x3e27,	// (0x0007056e) calc_display_pane

0x3e4c,	// (0x00070593) calc_paper_pane

0x3e6f,	// (0x000705b6) grid_calc_pane

0x3cab,	// (0x000703f2) bg_list_pane_cp01

0x3e9d,	// (0x000705e4) clock_g1

0x3ea5,	// (0x000705ec) clock_g2

0x0001,

0xf0f4,	// (0x0007b83b) clock_g

0x3ead,	// (0x000705f4) clock_t1_ParamLimits

0x3ead,	// (0x000705f4) clock_t1

0x3ec2,	// (0x00070609) clock_t2_ParamLimits

0x3ec2,	// (0x00070609) clock_t2

0x3ed4,	// (0x0007061b) clock_t3_ParamLimits

0x3ed4,	// (0x0007061b) clock_t3

0x3ee6,	// (0x0007062d) clock_t4_ParamLimits

0x3ee6,	// (0x0007062d) clock_t4

0x3ef8,	// (0x0007063f) clock_t5_ParamLimits

0x3ef8,	// (0x0007063f) clock_t5

0x3f0d,	// (0x00070654) clock_t6_ParamLimits

0x3f0d,	// (0x00070654) clock_t6

0x3f1f,	// (0x00070666) clock_t7_ParamLimits

0x3f1f,	// (0x00070666) clock_t7

0x3f31,	// (0x00070678) clock_t8_ParamLimits

0x3f31,	// (0x00070678) clock_t8

0x3f45,	// (0x0007068c) clock_t9_ParamLimits

0x3f45,	// (0x0007068c) clock_t9

0x0008,

0xf0f9,	// (0x0007b840) clock_t_ParamLimits

0xf0f9,	// (0x0007b840) clock_t

0xbc16,	// (0x0007835d) popup_clock_analogue_window_cp02

0xbc16,	// (0x0007835d) popup_clock_digital_window_cp01

0x3cab,	// (0x000703f2) listscroll_help_pane

0x3cab,	// (0x000703f2) phob_pre_status_pane

0xbc1e,	// (0x00078365) grid_qdial_pane

0xbb63,	// (0x000782aa) listscroll_mce_pane

0xbb63,	// (0x000782aa) bg_notes_pane

0xbc28,	// (0x0007836f) list_notes_pane

0x3f59,	// (0x000706a0) scroll_pane_cp06

0xbc36,	// (0x0007837d) bg_calc_paper_pane

0xbc4a,	// (0x00078391) list_calc_pane

0xbc64,	// (0x000783ab) bg_calc_display_pane

0x3f6d,	// (0x000706b4) calc_display_pane_t1

0x3f7f,	// (0x000706c6) calc_display_pane_t2

0xbc70,	// (0x000783b7) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0007b853) calc_display_pane_t

0x3f91,	// (0x000706d8) cell_calc_pane_ParamLimits

0x3f91,	// (0x000706d8) cell_calc_pane

0xbc82,	// (0x000783c9) bg_calc_paper_pane_g1

0xbc8e,	// (0x000783d5) bg_calc_paper_pane_g2

0xbc9a,	// (0x000783e1) bg_calc_paper_pane_g3

0xbca6,	// (0x000783ed) bg_calc_paper_pane_g4

0xbcb2,	// (0x000783f9) bg_calc_paper_pane_g5

0x3fc6,	// (0x0007070d) bg_calc_paper_pane_g6

0x3fd5,	// (0x0007071c) bg_calc_paper_pane_g7

0x3fe4,	// (0x0007072b) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0007b85a) bg_calc_paper_pane_g

0x3ff7,	// (0x0007073e) calc_bg_paper_pane_g9

0x400a,	// (0x00070751) list_calc_item_pane_ParamLimits

0x400a,	// (0x00070751) list_calc_item_pane

0xbcbe,	// (0x00078405) list_calc_item_pane_g1

0xbccb,	// (0x00078412) list_calc_item_pane_t1_ParamLimits

0xbccb,	// (0x00078412) list_calc_item_pane_t1

0x401f,	// (0x00070766) list_calc_item_pane_t2_ParamLimits

0x401f,	// (0x00070766) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0007b86b) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0007b86b) list_calc_item_pane_t

0xbb7b,	// (0x000782c2) cell_calc_pane_g1

0xbcdd,	// (0x00078424) grid_highlight_pane_cp02

0x1d1e,	// (0x0006e465) bg_calc_display_pane_g1

0x4051,	// (0x00070798) bg_calc_display_pane_g2

0x1fe9,	// (0x0006e730) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0007b875) bg_calc_display_pane_g

0x405b,	// (0x000707a2) cell_qdial_pane_ParamLimits

0x405b,	// (0x000707a2) cell_qdial_pane

0x406f,	// (0x000707b6) cell_qdial_pane_g1_ParamLimits

0x406f,	// (0x000707b6) cell_qdial_pane_g1

0x4085,	// (0x000707cc) cell_qdial_pane_g2_ParamLimits

0x4085,	// (0x000707cc) cell_qdial_pane_g2

0xbcff,	// (0x00078446) cell_qdial_pane_g3_ParamLimits

0xbcff,	// (0x00078446) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0007b87c) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0007b87c) cell_qdial_pane_g

0x40ab,	// (0x000707f2) cell_qdial_pane_t1_ParamLimits

0x40ab,	// (0x000707f2) cell_qdial_pane_t1

0x40c3,	// (0x0007080a) cell_qdial_pane_t2_ParamLimits

0x40c3,	// (0x0007080a) cell_qdial_pane_t2

0x40d6,	// (0x0007081d) cell_qdial_pane_t3_ParamLimits

0x40d6,	// (0x0007081d) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0007b885) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0007b885) cell_qdial_pane_t

0x3cab,	// (0x000703f2) grid_highlight_pane_cp04

0xbd0b,	// (0x00078452) thumbnail_qdial_pane_ParamLimits

0xbd0b,	// (0x00078452) thumbnail_qdial_pane

0xbd67,	// (0x000784ae) list_help_pane

0xbd70,	// (0x000784b7) scroll_pane_cp02

0x40e9,	// (0x00070830) help_list_pane_t1_ParamLimits

0x40e9,	// (0x00070830) help_list_pane_t1

0xbd79,	// (0x000784c0) bg_notes_pane_g2

0xbd81,	// (0x000784c8) bg_notes_pane_g3

0xbd89,	// (0x000784d0) notes_bg_pane_g1

0xbd91,	// (0x000784d8) notes_bg_pane_g4

0xbd99,	// (0x000784e0) notes_bg_pane_g5

0xbda1,	// (0x000784e8) notes_bg_pane_g6

0xbda9,	// (0x000784f0) notes_bg_pane_g7

0xbdb1,	// (0x000784f8) notes_bg_pane_g8

0xbdb9,	// (0x00078500) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0007b8a3) notes_bg_pane_g

0x4108,	// (0x0007084f) list_notes_text_pane_ParamLimits

0x4108,	// (0x0007084f) list_notes_text_pane

0xbdc1,	// (0x00078508) list_notes_text_pane_g1

0xbdca,	// (0x00078511) list_notes_text_pane_t1

0x411e,	// (0x00070865) listscroll_cale_week_pane

0x414a,	// (0x00070891) bg_cale_heading_pane

0xbdf2,	// (0x00078539) bg_cale_pane_cp01

0x4162,	// (0x000708a9) cale_week_corner_pane

0x4181,	// (0x000708c8) cale_week_day_heading_pane

0x419e,	// (0x000708e5) cale_week_scroll_pane_g1

0x41b1,	// (0x000708f8) cale_week_scroll_pane_g2

0x41c9,	// (0x00070910) cale_week_scroll_pane_g3

0x41e1,	// (0x00070928) cale_week_scroll_pane_g4

0x41f9,	// (0x00070940) cale_week_scroll_pane_g5

0x4219,	// (0x00070960) cale_week_scroll_pane_g6

0x4239,	// (0x00070980) cale_week_scroll_pane_g7

0x4259,	// (0x000709a0) cale_week_scroll_pane_g8

0x427d,	// (0x000709c4) cale_week_scroll_pane_g9

0x4295,	// (0x000709dc) cale_week_scroll_pane_g10

0x42ad,	// (0x000709f4) cale_week_scroll_pane_g11

0x42c5,	// (0x00070a0c) cale_week_scroll_pane_g12

0x42dd,	// (0x00070a24) cale_week_scroll_pane_g13

0x42dd,	// (0x00070a24) cale_week_scroll_pane_g14

0x42dd,	// (0x00070a24) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0007b8b2) cale_week_scroll_pane_g

0x4319,	// (0x00070a60) cale_week_time_pane

0x433d,	// (0x00070a84) grid_cale_week_pane

0xbe21,	// (0x00078568) scroll_pane_cp08

0x4363,	// (0x00070aaa) cell_cale_week_pane_ParamLimits

0x4363,	// (0x00070aaa) cell_cale_week_pane

0x43f1,	// (0x00070b38) cale_week_day_heading_pane_t1

0x441b,	// (0x00070b62) cale_week_day_heading_pane_t2

0x444a,	// (0x00070b91) cale_week_day_heading_pane_t3

0x4479,	// (0x00070bc0) cale_week_day_heading_pane_t4

0x44a8,	// (0x00070bef) cale_week_day_heading_pane_t5

0x44df,	// (0x00070c26) cale_week_day_heading_pane_t6

0x4516,	// (0x00070c5d) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0007b8d3) cale_week_day_heading_pane_t

0xbe3e,	// (0x00078585) bg_cale_side_pane

0x4540,	// (0x00070c87) cale_week_time_pane_t1

0x455a,	// (0x00070ca1) cale_week_time_pane_t2

0x4574,	// (0x00070cbb) cale_week_time_pane_t3

0x458e,	// (0x00070cd5) cale_week_time_pane_t4

0x45a8,	// (0x00070cef) cale_week_time_pane_t5

0x45c2,	// (0x00070d09) cale_week_time_pane_t6

0x45dc,	// (0x00070d23) cale_week_time_pane_t7

0x45f6,	// (0x00070d3d) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0007b8e2) cale_week_time_pane_t

0x4616,	// (0x00070d5d) cell_cale_week_pane_g2

0x463a,	// (0x00070d81) cell_cale_week_pane_g3_ParamLimits

0x463a,	// (0x00070d81) cell_cale_week_pane_g3

0xbe4c,	// (0x00078593) grid_highlight_pane_cp07

0xbe54,	// (0x0007859b) listscroll_gms_pane

0xbe5e,	// (0x000785a5) grid_gms_pane

0xbe67,	// (0x000785ae) listscroll_gms_pane_g1

0xbe6f,	// (0x000785b6) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0007b8f3) listscroll_gms_pane_g

0x4652,	// (0x00070d99) scroll_pane_cp010

0x465d,	// (0x00070da4) cell_gms_pane_ParamLimits

0x465d,	// (0x00070da4) cell_gms_pane

0x466f,	// (0x00070db6) cell_gms_pane_g1

0xbe77,	// (0x000785be) cell_gms_pane_g2

0xbdc1,	// (0x00078508) cell_gms_pane_g3

0xbe7f,	// (0x000785c6) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0007b8f8) cell_gms_pane_g

0xbe88,	// (0x000785cf) grid_highlight_pane_cp09

0x6380,	// (0x00072ac7) phob_pre_status_pane_g1

0x6388,	// (0x00072acf) phob_pre_status_pane_g2

0x6390,	// (0x00072ad7) phob_pre_status_pane_g3

0x6398,	// (0x00072adf) phob_pre_status_pane_g4

0x0004,

0xf588,	// (0x0007bccf) phob_pre_status_pane_g

0x63a8,	// (0x00072aef) phob_pre_status_pane_t1

0x63b6,	// (0x00072afd) phob_pre_status_pane_t2

0x63c6,	// (0x00072b0d) phob_pre_status_pane_t3

0x0002,

0xf593,	// (0x0007bcda) phob_pre_status_pane_t

0xbe90,	// (0x000785d7) bg_list_pane_cp05

0x467f,	// (0x00070dc6) grid_vorec_pane

0x4687,	// (0x00070dce) vorec_t1

0x4695,	// (0x00070ddc) vorec_t2

0x46a3,	// (0x00070dea) vorec_t3

0x46b1,	// (0x00070df8) vorec_t4

0xb7dd,	// (0x00077f24) vorec_t5

0xb7eb,	// (0x00077f32) vorec_t6

0x0004,

0xf1ba,	// (0x0007b901) vorec_t

0xb7f9,	// (0x00077f40) wait_bar_pane_cp01

0x46cd,	// (0x00070e14) cell_vorec_pane_ParamLimits

0x46cd,	// (0x00070e14) cell_vorec_pane

0xbe98,	// (0x000785df) cell_vorec_pane_g1

0x3cab,	// (0x000703f2) grid_highlight_pane_cp05

0xba4a,	// (0x00078191) cams_zoom_pane

0xba4a,	// (0x00078191) image_vga_pane

0xbbd0,	// (0x00078317) main_camera_pane_g1

0xbbd0,	// (0x00078317) main_camera_pane_g2

0xbbd0,	// (0x00078317) main_camera_pane_g3

0xbbd0,	// (0x00078317) main_camera_pane_g4

0xbbd0,	// (0x00078317) main_camera_pane_g5

0xbbd0,	// (0x00078317) main_camera_pane_g6

0xbbd0,	// (0x00078317) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0007b90c) main_camera_pane_g

0xbea2,	// (0x000785e9) main_camera_pane_t1

0xbea2,	// (0x000785e9) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0007b91d) main_camera_pane_t

0x46f4,	// (0x00070e3b) cams_zoom_pane_cp_ParamLimits

0x46f4,	// (0x00070e3b) cams_zoom_pane_cp

0x4728,	// (0x00070e6f) image_cif_pane_ParamLimits

0x4728,	// (0x00070e6f) image_cif_pane

0x35b6,	// (0x0006fcfd) image_subqcif_pane

0x473a,	// (0x00070e81) main_video_pane_g1_ParamLimits

0x473a,	// (0x00070e81) main_video_pane_g1

0x4768,	// (0x00070eaf) main_video_pane_g2_ParamLimits

0x4768,	// (0x00070eaf) main_video_pane_g2

0x47a2,	// (0x00070ee9) main_video_pane_g3_ParamLimits

0x47a2,	// (0x00070ee9) main_video_pane_g3

0x47a2,	// (0x00070ee9) main_video_pane_g4_ParamLimits

0x47a2,	// (0x00070ee9) main_video_pane_g4

0x47d6,	// (0x00070f1d) main_video_pane_g5_ParamLimits

0x47d6,	// (0x00070f1d) main_video_pane_g5

0xbeb6,	// (0x000785fd) main_video_pane_g6_ParamLimits

0xbeb6,	// (0x000785fd) main_video_pane_g6

0x0006,

0xf1db,	// (0x0007b922) main_video_pane_g_ParamLimits

0xf1db,	// (0x0007b922) main_video_pane_g

0x47f2,	// (0x00070f39) main_video_pane_t1_ParamLimits

0x47f2,	// (0x00070f39) main_video_pane_t1

0xbed0,	// (0x00078617) cams_zoom_pane_g1

0xbed0,	// (0x00078617) cams_zoom_pane_g2

0xbed0,	// (0x00078617) cams_zoom_pane_g3

0xbed0,	// (0x00078617) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0007b931) cams_zoom_pane_g

0x484a,	// (0x00070f91) grid_cams_pane

0x4864,	// (0x00070fab) linegrid_cams_pane

0x4877,	// (0x00070fbe) cell_cams_pane_ParamLimits

0x4877,	// (0x00070fbe) cell_cams_pane

0xbeda,	// (0x00078621) cams_burst_image_pane

0xbee2,	// (0x00078629) cell_cams_pane_g1

0x3cab,	// (0x000703f2) grid_highlight_pane_cp03

0xbb7b,	// (0x000782c2) mp_bg_pane_g1

0x35b6,	// (0x0006fcfd) bg_list_pane_cp03

0x35b6,	// (0x0006fcfd) bg_mp_pane

0x35b6,	// (0x0006fcfd) grid_mp_pane

0xbed0,	// (0x00078617) media_player_g1

0xc425,	// (0x00078b6c) media_player_t1

0xc425,	// (0x00078b6c) media_player_t2

0xc425,	// (0x00078b6c) media_player_t3

0xc425,	// (0x00078b6c) media_player_t4

0xc425,	// (0x00078b6c) media_player_t5

0xc425,	// (0x00078b6c) media_player_t6

0xc425,	// (0x00078b6c) media_player_t7

0x0006,

0xf572,	// (0x0007bcb9) media_player_t

0x35b6,	// (0x0006fcfd) wait_bar_pane_cp02

0xf557,	// (0x0007bc9e) main_usb_pane_t

0xc700,	// (0x00078e47) cell_mp_pane

0xbb7b,	// (0x000782c2) cell_mp_pane_g1

0x3cab,	// (0x000703f2) grid_highlight_pane_cp06

0xbeea,	// (0x00078631) grid_skin_colour_pane

0xbef2,	// (0x00078639) list_highlight_pane_cp03

0x4897,	// (0x00070fde) skin_g1

0xbefa,	// (0x00078641) skin_t1

0xbf09,	// (0x00078650) skin_t2

0x0001,

0xf218,	// (0x0007b95f) skin_t

0x489f,	// (0x00070fe6) cell_skin_colour_pane_ParamLimits

0x489f,	// (0x00070fe6) cell_skin_colour_pane

0xbf17,	// (0x0007865e) cell_skin_colour_pane_g1

0x4918,	// (0x0007105f) call_video_g1_ParamLimits

0x4918,	// (0x0007105f) call_video_g1

0x4934,	// (0x0007107b) call_video_g2_ParamLimits

0x4934,	// (0x0007107b) call_video_g2

0x0001,

0xf21d,	// (0x0007b964) call_video_g_ParamLimits

0xf21d,	// (0x0007b964) call_video_g

0x4986,	// (0x000710cd) call_video_uplink_pane_cp1_ParamLimits

0x4986,	// (0x000710cd) call_video_uplink_pane_cp1

0xbf29,	// (0x00078670) call_video_uplink_pane_cp2

0x4a25,	// (0x0007116c) video_down_crop_pane_ParamLimits

0x4a25,	// (0x0007116c) video_down_crop_pane

0x4b0e,	// (0x00071255) video_down_pane_ParamLimits

0x4b0e,	// (0x00071255) video_down_pane

0xbf31,	// (0x00078678) video_down_subqcif_pane_ParamLimits

0xbf31,	// (0x00078678) video_down_subqcif_pane

0xbf49,	// (0x00078690) video_down_subqcif_pane_cp_ParamLimits

0xbf49,	// (0x00078690) video_down_subqcif_pane_cp

0xbf6f,	// (0x000786b6) im_reading_pane_ParamLimits

0xbf6f,	// (0x000786b6) im_reading_pane

0x4c1e,	// (0x00071365) im_writing_pane_ParamLimits

0x4c1e,	// (0x00071365) im_writing_pane

0x4c34,	// (0x0007137b) im_reading_pane_t1

0xbf89,	// (0x000786d0) list_im_pane

0xbf9a,	// (0x000786e1) scroll_pane_cp07

0x4c6e,	// (0x000713b5) im_writing_pane_t1_ParamLimits

0x4c6e,	// (0x000713b5) im_writing_pane_t1

0xbfb3,	// (0x000786fa) im_writing_pane_t2_ParamLimits

0xbfb3,	// (0x000786fa) im_writing_pane_t2

0x0001,

0xf227,	// (0x0007b96e) im_writing_pane_t_ParamLimits

0xf227,	// (0x0007b96e) im_writing_pane_t

0x3cab,	// (0x000703f2) input_focus_pane_cp04

0x3cab,	// (0x000703f2) input_focus_pane_cp05

0x4c83,	// (0x000713ca) list_im_single_pane_ParamLimits

0x4c83,	// (0x000713ca) list_im_single_pane

0x4c98,	// (0x000713df) list_single_im_pane_t1

0xbe90,	// (0x000785d7) blid_accuracy_pane

0xbe90,	// (0x000785d7) blid_compass_pane

0x1861,	// (0x0006dfa8) main_location_t1

0x1861,	// (0x0006dfa8) main_location_t2

0x1861,	// (0x0006dfa8) main_location_t3

0x0002,

0xf581,	// (0x0007bcc8) main_location_t

0x3cab,	// (0x000703f2) aid_levels_location

0xbb7b,	// (0x000782c2) blid_accuracy_pane_g1

0xbb7b,	// (0x000782c2) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0007b9bd) blid_accuracy_pane_g

0xbffb,	// (0x00078742) wml_content_pane

0xc039,	// (0x00078780) wml_button_pane_ParamLimits

0xc039,	// (0x00078780) wml_button_pane

0x4ca7,	// (0x000713ee) wml_list_single_large_pane_ParamLimits

0x4ca7,	// (0x000713ee) wml_list_single_large_pane

0x4cbc,	// (0x00071403) wml_list_single_medium_pane_ParamLimits

0x4cbc,	// (0x00071403) wml_list_single_medium_pane

0x4cd3,	// (0x0007141a) wml_list_single_small_pane_ParamLimits

0x4cd3,	// (0x0007141a) wml_list_single_small_pane

0xc04d,	// (0x00078794) wml_selection_box_pane_ParamLimits

0xc04d,	// (0x00078794) wml_selection_box_pane

0xc060,	// (0x000787a7) wml_list_single_pane_t1

0xc06f,	// (0x000787b6) wml_list_single_medium_pane_t1

0xc07e,	// (0x000787c5) wml_list_single_large_pane_t1

0xc08d,	// (0x000787d4) input_focus_pane_cp02_ParamLimits

0xc08d,	// (0x000787d4) input_focus_pane_cp02

0xc0a0,	// (0x000787e7) wml_selection_box_pane_g1

0xc0a9,	// (0x000787f0) wml_selection_box_pane_t1_ParamLimits

0xc0a9,	// (0x000787f0) wml_selection_box_pane_t1

0xbb63,	// (0x000782aa) bg_wml_button_pane_ParamLimits

0xbb63,	// (0x000782aa) bg_wml_button_pane

0xc0c1,	// (0x00078808) wml_button_pane_g1

0xc0c9,	// (0x00078810) wml_button_pane_t1

0xc0c1,	// (0x00078808) wml_button_bg_pane_g1

0xc0d9,	// (0x00078820) wml_button_bg_pane_g2

0xc0e1,	// (0x00078828) wml_button_bg_pane_g3

0xc0e9,	// (0x00078830) wml_button_bg_pane_g4

0xc0f1,	// (0x00078838) wml_button_bg_pane_g5

0xc0f9,	// (0x00078840) wml_button_bg_pane_g6

0xc101,	// (0x00078848) wml_button_bg_pane_g7

0xc109,	// (0x00078850) wml_button_bg_pane_g8

0xc111,	// (0x00078858) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0007b973) wml_button_bg_pane_g

0x4cec,	// (0x00071433) bg_list_pane_cp02

0xc119,	// (0x00078860) mce_header_pane_ParamLimits

0xc119,	// (0x00078860) mce_header_pane

0xc12f,	// (0x00078876) mce_icon_pane

0xc12f,	// (0x00078876) mce_image_pane

0xc138,	// (0x0007887f) mce_text_pane_ParamLimits

0xc138,	// (0x0007887f) mce_text_pane

0x4cf4,	// (0x0007143b) scroll_pane_cp03

0xc031,	// (0x00078778) scroll_pane_cp04

0xc14b,	// (0x00078892) scroll_pane_cp05_ParamLimits

0xc14b,	// (0x00078892) scroll_pane_cp05

0x4cfe,	// (0x00071445) mce_header_field_pane_ParamLimits

0x4cfe,	// (0x00071445) mce_header_field_pane

0x4d15,	// (0x0007145c) mce_header_field_pane_2_ParamLimits

0x4d15,	// (0x0007145c) mce_header_field_pane_2

0x4d2b,	// (0x00071472) mce_header_field_pane_3

0x4d33,	// (0x0007147a) list_single_mce_message_pane_ParamLimits

0x4d33,	// (0x0007147a) list_single_mce_message_pane

0x4d49,	// (0x00071490) list_single_mce_smart_pane_ParamLimits

0x4d49,	// (0x00071490) list_single_mce_smart_pane

0xc157,	// (0x0007889e) input_focus_pane_cp03

0xc160,	// (0x000788a7) list_header_data_pane

0x4d6a,	// (0x000714b1) mce_header_field_pane_t1

0x4d7a,	// (0x000714c1) list_single_mce_header_pane_ParamLimits

0x4d7a,	// (0x000714c1) list_single_mce_header_pane

0xc168,	// (0x000788af) list_single_mce_header_pane_t1

0xc177,	// (0x000788be) list_single_mce_message_pane_g1

0xc17f,	// (0x000788c6) list_single_mce_message_pane_t1

0x4db4,	// (0x000714fb) bg_cale_heading_pane_cp01_ParamLimits

0x4db4,	// (0x000714fb) bg_cale_heading_pane_cp01

0xc18d,	// (0x000788d4) bg_cale_pane_cp02_ParamLimits

0xc18d,	// (0x000788d4) bg_cale_pane_cp02

0x4dee,	// (0x00071535) cale_month_corner_pane

0x4e0d,	// (0x00071554) cale_month_day_heading_pane_ParamLimits

0x4e0d,	// (0x00071554) cale_month_day_heading_pane

0x4e5f,	// (0x000715a6) cale_month_pane_g1_ParamLimits

0x4e5f,	// (0x000715a6) cale_month_pane_g1

0x4e8e,	// (0x000715d5) cale_month_pane_g2_ParamLimits

0x4e8e,	// (0x000715d5) cale_month_pane_g2

0x4ebe,	// (0x00071605) cale_month_pane_g3_ParamLimits

0x4ebe,	// (0x00071605) cale_month_pane_g3

0x4efa,	// (0x00071641) cale_month_pane_g4_ParamLimits

0x4efa,	// (0x00071641) cale_month_pane_g4

0x4f36,	// (0x0007167d) cale_month_pane_g5_ParamLimits

0x4f36,	// (0x0007167d) cale_month_pane_g5

0x4f7e,	// (0x000716c5) cale_month_pane_g6_ParamLimits

0x4f7e,	// (0x000716c5) cale_month_pane_g6

0x4fca,	// (0x00071711) cale_month_pane_g7_ParamLimits

0x4fca,	// (0x00071711) cale_month_pane_g7

0x501a,	// (0x00071761) cale_month_pane_g8_ParamLimits

0x501a,	// (0x00071761) cale_month_pane_g8

0x506e,	// (0x000717b5) cale_month_pane_g9_ParamLimits

0x506e,	// (0x000717b5) cale_month_pane_g9

0x50c0,	// (0x00071807) cale_month_pane_g10_ParamLimits

0x50c0,	// (0x00071807) cale_month_pane_g10

0x5112,	// (0x00071859) cale_month_pane_g11_ParamLimits

0x5112,	// (0x00071859) cale_month_pane_g11

0x5164,	// (0x000718ab) cale_month_pane_g12_ParamLimits

0x5164,	// (0x000718ab) cale_month_pane_g12

0x51b6,	// (0x000718fd) cale_month_pane_g13_ParamLimits

0x51b6,	// (0x000718fd) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0007b986) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0007b986) cale_month_pane_g

0x5208,	// (0x0007194f) cale_month_week_pane

0x522c,	// (0x00071973) grid_cale_month_pane_ParamLimits

0x522c,	// (0x00071973) grid_cale_month_pane

0x5275,	// (0x000719bc) cale_month_day_heading_pane_t1

0x52b7,	// (0x000719fe) cale_month_day_heading_pane_t2

0x52ec,	// (0x00071a33) cale_month_day_heading_pane_t3

0x5321,	// (0x00071a68) cale_month_day_heading_pane_t4

0x535e,	// (0x00071aa5) cale_month_day_heading_pane_t5

0x53a3,	// (0x00071aea) cale_month_day_heading_pane_t6

0x53e8,	// (0x00071b2f) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0007b9a1) cale_month_day_heading_pane_t

0xbe3e,	// (0x00078585) bg_cale_side_pane_cp01

0x5435,	// (0x00071b7c) cale_month_week_pane_t1

0x544e,	// (0x00071b95) cale_month_week_pane_t2

0x5467,	// (0x00071bae) cale_month_week_pane_t3

0x5480,	// (0x00071bc7) cale_month_week_pane_t4

0x5499,	// (0x00071be0) cale_month_week_pane_t5

0x54b2,	// (0x00071bf9) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0007b9b0) cale_month_week_pane_t

0x54cb,	// (0x00071c12) cell_cale_month_pane_ParamLimits

0x54cb,	// (0x00071c12) cell_cale_month_pane

0xc1cc,	// (0x00078913) cell_cale_month_pane_g1

0x55f9,	// (0x00071d40) cell_cale_month_pane_t1_ParamLimits

0x55f9,	// (0x00071d40) cell_cale_month_pane_t1

0xbe4c,	// (0x00078593) grid_highlight_pane_cp08

0xbb7b,	// (0x000782c2) main_smil_g1

0x5625,	// (0x00071d6c) smil_status_pane

0xc1d8,	// (0x0007891f) smil_text_pane

0x1739,	// (0x0006de80) bg_popup_call3_rect_pane_g8

0x1741,	// (0x0006de88) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x0007bc49) bg_popup_call3_rect_pane_g

0x1938,	// (0x0006e07f) smil_status_volume_pane_g1

0xc1e2,	// (0x00078929) smil_status_pane_t1

0xcee6,	// (0x0007962d) volume_smil_pane

0xc1f9,	// (0x00078940) list_smil_text_pane

0x563a,	// (0x00071d81) scroll_pane_cp011

0x5645,	// (0x00071d8c) smil_text_list_pane_t1_ParamLimits

0x5645,	// (0x00071d8c) smil_text_list_pane_t1

0xc203,	// (0x0007894a) aid_volume_smil_ParamLimits

0xc203,	// (0x0007894a) aid_volume_smil

0xbb7b,	// (0x000782c2) smil_volume_pane_g1

0xbb7b,	// (0x000782c2) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0007b9bd) smil_volume_pane_g

0x411e,	// (0x00070865) listscroll_cale_day_pane

0xc225,	// (0x0007896c) bg_cale_pane

0xc23d,	// (0x00078984) list_cale_pane

0xc260,	// (0x000789a7) scroll_pane_cp09

0xc271,	// (0x000789b8) cale_bg_pane_g1

0xc279,	// (0x000789c0) cale_bg_pane_g2

0xc281,	// (0x000789c8) cale_bg_pane_g3

0xc289,	// (0x000789d0) cale_bg_pane_g4

0xc291,	// (0x000789d8) cale_bg_pane_g5

0xc299,	// (0x000789e0) cale_bg_pane_g6

0xc2a1,	// (0x000789e8) cale_bg_pane_g7

0xc2a9,	// (0x000789f0) cale_bg_pane_g8

0xc2b1,	// (0x000789f8) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0007b9c2) cale_bg_pane_g

0x5691,	// (0x00071dd8) list_cale_time_pane_ParamLimits

0x5691,	// (0x00071dd8) list_cale_time_pane

0xc2b9,	// (0x00078a00) list_cale_time_pane_g1_ParamLimits

0xc2b9,	// (0x00078a00) list_cale_time_pane_g1

0xc2c5,	// (0x00078a0c) list_cale_time_pane_g2_ParamLimits

0xc2c5,	// (0x00078a0c) list_cale_time_pane_g2

0x56a7,	// (0x00071dee) list_cale_time_pane_g3_ParamLimits

0x56a7,	// (0x00071dee) list_cale_time_pane_g3

0x56b5,	// (0x00071dfc) list_cale_time_pane_g4_ParamLimits

0x56b5,	// (0x00071dfc) list_cale_time_pane_g4

0x56c3,	// (0x00071e0a) list_cale_time_pane_g5_ParamLimits

0x56c3,	// (0x00071e0a) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0007b9d5) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0007b9d5) list_cale_time_pane_g

0xc2df,	// (0x00078a26) list_cale_time_pane_t1_ParamLimits

0xc2df,	// (0x00078a26) list_cale_time_pane_t1

0xc307,	// (0x00078a4e) list_cale_time_pane_t2_ParamLimits

0xc307,	// (0x00078a4e) list_cale_time_pane_t2

0x5950,	// (0x00072097) aid_blid_cardinal_pane

0x598e,	// (0x000720d5) compass_pane_t4

0xc32f,	// (0x00078a76) list_cale_time_pane_t4_ParamLimits

0xc32f,	// (0x00078a76) list_cale_time_pane_t4

0x599c,	// (0x000720e3) compass_pane_t5

0x59aa,	// (0x000720f1) compass_pane_t6

0x59b8,	// (0x000720ff) compass_pane_t7

0xc81a,	// (0x00078f61) navi_pane_cc_t1

0xca09,	// (0x00079150) aid_phob_thumbnail_center_pane

0x5d2e,	// (0x00072475) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0007b9e2) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0007b9e2) list_cale_time_pane_t

0x38de,	// (0x00070025) bg_popup_window_pane_cp02_ParamLimits

0x38de,	// (0x00070025) bg_popup_window_pane_cp02

0xc357,	// (0x00078a9e) heading_pane_cp01_ParamLimits

0xc357,	// (0x00078a9e) heading_pane_cp01

0xc363,	// (0x00078aaa) loc_req_pane_ParamLimits

0xc363,	// (0x00078aaa) loc_req_pane

0xc373,	// (0x00078aba) loc_type_pane_ParamLimits

0xc373,	// (0x00078aba) loc_type_pane

0xc385,	// (0x00078acc) loc_type_pane_t1_ParamLimits

0xc385,	// (0x00078acc) loc_type_pane_t1

0xc397,	// (0x00078ade) loc_type_pane_t2_ParamLimits

0xc397,	// (0x00078ade) loc_type_pane_t2

0xc3a9,	// (0x00078af0) loc_type_pane_t3_ParamLimits

0xc3a9,	// (0x00078af0) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0007b9e9) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0007b9e9) loc_type_pane_t

0xc3bb,	// (0x00078b02) list_loc_req_pane

0xc3c5,	// (0x00078b0c) scroll_pane_cp012

0x56d1,	// (0x00071e18) list_single_loc_request_popup_menu_pane_ParamLimits

0x56d1,	// (0x00071e18) list_single_loc_request_popup_menu_pane

0xc3d0,	// (0x00078b17) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc3d0,	// (0x00078b17) list_single_loc_request_popup_menu_pane_g1

0xc3dc,	// (0x00078b23) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc3dc,	// (0x00078b23) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0007b9f0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0007b9f0) list_single_loc_request_popup_menu_pane_g

0xc3e8,	// (0x00078b2f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc3e8,	// (0x00078b2f) list_single_loc_request_popup_menu_pane_t1

0xbb63,	// (0x000782aa) bg_popup_window_pane_cp03_ParamLimits

0xbb63,	// (0x000782aa) bg_popup_window_pane_cp03

0x1fcf,	// (0x0006e716) heading_loc_req_pane_ParamLimits

0x1fcf,	// (0x0006e716) heading_loc_req_pane

0x56de,	// (0x00071e25) popup_dyc_status_message_window_g1_ParamLimits

0x56de,	// (0x00071e25) popup_dyc_status_message_window_g1

0x56f2,	// (0x00071e39) popup_dyc_status_message_window_t1_ParamLimits

0x56f2,	// (0x00071e39) popup_dyc_status_message_window_t1

0x5707,	// (0x00071e4e) popup_dyc_status_message_window_t2_ParamLimits

0x5707,	// (0x00071e4e) popup_dyc_status_message_window_t2

0x571c,	// (0x00071e63) popup_dyc_status_message_window_t3_ParamLimits

0x571c,	// (0x00071e63) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0007b9f5) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0007b9f5) popup_dyc_status_message_window_t

0x3cab,	// (0x000703f2) bg_heading_pane_cp01

0xc3fe,	// (0x00078b45) heading_loc_req_pane_g1

0xc406,	// (0x00078b4d) heading_loc_req_pane_g2

0xc40e,	// (0x00078b55) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0007b9fc) heading_loc_req_pane_g

0xc416,	// (0x00078b5d) heading_loc_req_pane_t1

0xc435,	// (0x00078b7c) bg_popup_sub_pane_cp01_ParamLimits

0xc435,	// (0x00078b7c) bg_popup_sub_pane_cp01

0xc443,	// (0x00078b8a) popup_cale_events_window_g1_ParamLimits

0xc443,	// (0x00078b8a) popup_cale_events_window_g1

0xc463,	// (0x00078baa) popup_cale_events_window_g2_ParamLimits

0xc463,	// (0x00078baa) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0007ba1e) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0007ba1e) popup_cale_events_window_g

0xc483,	// (0x00078bca) popup_cale_events_window_t1_ParamLimits

0xc483,	// (0x00078bca) popup_cale_events_window_t1

0xc495,	// (0x00078bdc) popup_cale_events_window_t2_ParamLimits

0xc495,	// (0x00078bdc) popup_cale_events_window_t2

0xc4d3,	// (0x00078c1a) popup_cale_events_window_t3_ParamLimits

0xc4d3,	// (0x00078c1a) popup_cale_events_window_t3

0xc50d,	// (0x00078c54) popup_cale_events_window_t4_ParamLimits

0xc50d,	// (0x00078c54) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0007ba23) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0007ba23) popup_cale_events_window_t

0x5744,	// (0x00071e8b) call_type_pane

0x5754,	// (0x00071e9b) popup_call_status_window_g1

0x5768,	// (0x00071eaf) popup_call_status_window_g2

0x577c,	// (0x00071ec3) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0007ba2c) popup_call_status_window_g

0xc543,	// (0x00078c8a) call_type_pane_g1

0xc54c,	// (0x00078c93) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0007ba33) call_type_pane_g

0x3cab,	// (0x000703f2) bg_popup_sub_pane_cp02

0xc555,	// (0x00078c9c) listscroll_popup_wml_pane

0xc55d,	// (0x00078ca4) list_wml_pane

0xc567,	// (0x00078cae) scroll_pane_cp013

0xc572,	// (0x00078cb9) list_single_graphic_popup_wml_pane_ParamLimits

0xc572,	// (0x00078cb9) list_single_graphic_popup_wml_pane

0xbb7b,	// (0x000782c2) list_single_graphic_popup_wml_pane_g1

0xc586,	// (0x00078ccd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0007ba38) list_single_graphic_popup_wml_pane_g

0xc58e,	// (0x00078cd5) list_single_graphic_popup_wml_pane_t1

0xc5a4,	// (0x00078ceb) aid_call_pane

0xbb5b,	// (0x000782a2) popup_clock_analogue_window_g1

0xbb5b,	// (0x000782a2) popup_clock_analogue_window_g2

0xc5ac,	// (0x00078cf3) popup_clock_analogue_window_g3

0xc5ac,	// (0x00078cf3) popup_clock_analogue_window_g4

0xbb7b,	// (0x000782c2) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0007ba3d) popup_clock_analogue_window_g

0xc5b4,	// (0x00078cfb) popup_clock_analogue_window_t1

0xc5c2,	// (0x00078d09) clock_digital_number_pane_ParamLimits

0xc5c2,	// (0x00078d09) clock_digital_number_pane

0xc5ce,	// (0x00078d15) clock_digital_number_pane_cp02_ParamLimits

0xc5ce,	// (0x00078d15) clock_digital_number_pane_cp02

0xc5da,	// (0x00078d21) clock_digital_number_pane_cp03_ParamLimits

0xc5da,	// (0x00078d21) clock_digital_number_pane_cp03

0xc5e6,	// (0x00078d2d) clock_digital_number_pane_cp04_ParamLimits

0xc5e6,	// (0x00078d2d) clock_digital_number_pane_cp04

0xc5f2,	// (0x00078d39) clock_digital_separator_pane_ParamLimits

0xc5f2,	// (0x00078d39) clock_digital_separator_pane

0xc5fe,	// (0x00078d45) popup_clock_digital_window_t1

0xbb7b,	// (0x000782c2) clock_digital_number_pane_g1

0xbb7b,	// (0x000782c2) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0007b9bd) clock_digital_number_pane_g

0xbb7b,	// (0x000782c2) clock_digital_separator_pane_g1

0xbb7b,	// (0x000782c2) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0007b9bd) clock_digital_separator_pane_g

0x3cab,	// (0x000703f2) bg_popup_window_pane_cp04

0xc61b,	// (0x00078d62) heading_pane_cp03

0xbe90,	// (0x000785d7) listscroll_popup_gms_pane

0x3cab,	// (0x000703f2) grid_large_graphic_popup_pane

0xc624,	// (0x00078d6b) listscroll_popup_gms_pane_g1

0xc62d,	// (0x00078d74) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0007ba48) listscroll_popup_gms_pane_g

0xc636,	// (0x00078d7d) scroll_pane_cp014

0x3dfb,	// (0x00070542) cell_large_graphic_popup_pane_ParamLimits

0x3dfb,	// (0x00070542) cell_large_graphic_popup_pane

0xbbd0,	// (0x00078317) cell_large_graphic_popup_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) cell_large_graphic_popup_pane_g1

0xc63f,	// (0x00078d86) cell_large_graphic_popup_pane_g2_ParamLimits

0xc63f,	// (0x00078d86) cell_large_graphic_popup_pane_g2

0xc64d,	// (0x00078d94) cell_large_graphic_popup_pane_g3_ParamLimits

0xc64d,	// (0x00078d94) cell_large_graphic_popup_pane_g3

0xc65b,	// (0x00078da2) cell_large_graphic_popup_pane_g4_ParamLimits

0xc65b,	// (0x00078da2) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0007ba4d) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0007ba4d) cell_large_graphic_popup_pane_g

0x3cab,	// (0x000703f2) grid_highlight_pane_cp010

0xbb7b,	// (0x000782c2) bg_popup_call_pane_g1

0xc66c,	// (0x00078db3) list_single_graphic_popup_conf_pane_ParamLimits

0xc66c,	// (0x00078db3) list_single_graphic_popup_conf_pane

0xc67f,	// (0x00078dc6) list_highlight_pane_cp01

0xc688,	// (0x00078dcf) list_single_graphic_popup_conf_pane_g1

0xc690,	// (0x00078dd7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0007ba56) list_single_graphic_popup_conf_pane_g

0xc698,	// (0x00078ddf) list_single_graphic_popup_conf_pane_t1

0xc6a6,	// (0x00078ded) linegrid_cams_pane_g1

0x578b,	// (0x00071ed2) linegrid_cams_pane_g2

0xbdc1,	// (0x00078508) linegrid_cams_pane_g3

0xc6af,	// (0x00078df6) linegrid_cams_pane_g4

0x5794,	// (0x00071edb) linegrid_cams_pane_g5

0x579d,	// (0x00071ee4) linegrid_cams_pane_g6

0xbe7f,	// (0x000785c6) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0007ba5b) linegrid_cams_pane_g

0xc6b8,	// (0x00078dff) popup_clock_analogue_window

0xc6b8,	// (0x00078dff) popup_clock_digital_window

0x3cab,	// (0x000703f2) popup_phob_thumbnail_window

0xbb7b,	// (0x000782c2) call_video_uplink_pane_g1

0xc6c1,	// (0x00078e08) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0007ba6a) call_video_uplink_pane_g

0xc6c9,	// (0x00078e10) video_uplink_pane

0xc6d1,	// (0x00078e18) mce_image_pane_g1

0x57a8,	// (0x00071eef) mce_image_pane_g2

0x57b0,	// (0x00071ef7) mce_image_pane_g3

0x57b8,	// (0x00071eff) mce_image_pane_g4

0x57c2,	// (0x00071f09) mce_image_pane_g5

0x0004,

0xf328,	// (0x0007ba6f) mce_image_pane_g

0xc6db,	// (0x00078e22) control_top_pane_stacon_cp01_ParamLimits

0xc6db,	// (0x00078e22) control_top_pane_stacon_cp01

0xc6ef,	// (0x00078e36) uni_indicator_pane_stacon_cp01_ParamLimits

0xc6ef,	// (0x00078e36) uni_indicator_pane_stacon_cp01

0xc700,	// (0x00078e47) bg_popup_sub_pane_cp03

0x57ca,	// (0x00071f11) chi_dic_find_pane

0x57d2,	// (0x00071f19) listscroll_chi_dic_pane

0x57db,	// (0x00071f22) main_pane_chidic_g1

0x57ee,	// (0x00071f35) chi_dic_find_pane_t1

0xc70a,	// (0x00078e51) find_chidic_pane

0xc713,	// (0x00078e5a) chi_dic_list_pane_ParamLimits

0xc713,	// (0x00078e5a) chi_dic_list_pane

0xc724,	// (0x00078e6b) scroll_pane_cp020

0x57fc,	// (0x00071f43) find_chidic_pane_t1

0x3cab,	// (0x000703f2) input_focus_pane_cp06

0x580b,	// (0x00071f52) list_chi_dic_pane_ParamLimits

0x580b,	// (0x00071f52) list_chi_dic_pane

0x581d,	// (0x00071f64) list_chi_dic_pane_t1_ParamLimits

0x581d,	// (0x00071f64) list_chi_dic_pane_t1

0x3cab,	// (0x000703f2) list_highlight_pane_cp020

0xc72c,	// (0x00078e73) bg_cale_heading_pane_g1

0x5830,	// (0x00071f77) bg_cale_heading_pane_g2

0x5838,	// (0x00071f7f) bg_cale_heading_pane_g3

0x5840,	// (0x00071f87) bg_cale_heading_pane_g4

0x584a,	// (0x00071f91) bg_cale_heading_pane_g5

0x5854,	// (0x00071f9b) bg_cale_heading_pane_g6

0x585c,	// (0x00071fa3) bg_cale_heading_pane_g7

0x5864,	// (0x00071fab) bg_cale_heading_pane_g8

0x586e,	// (0x00071fb5) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0007ba7a) bg_cale_heading_pane_g

0xc72c,	// (0x00078e73) bg_cale_side_pane_g1

0x5878,	// (0x00071fbf) bg_cale_side_pane_g2

0x5880,	// (0x00071fc7) bg_cale_side_pane_g3

0x5888,	// (0x00071fcf) bg_cale_side_pane_g4

0x5890,	// (0x00071fd7) bg_cale_side_pane_g5

0x5898,	// (0x00071fdf) bg_cale_side_pane_g6

0x58a0,	// (0x00071fe7) bg_cale_side_pane_g7

0x58a8,	// (0x00071fef) bg_cale_side_pane_g8

0x58b0,	// (0x00071ff7) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0007ba8d) bg_cale_side_pane_g

0x58b8,	// (0x00071fff) popup_call_status_window_ParamLimits

0x58b8,	// (0x00071fff) popup_call_status_window

0xc734,	// (0x00078e7b) stacon_top_pane

0xc73c,	// (0x00078e83) status_pane_ParamLimits

0xc73c,	// (0x00078e83) status_pane

0xc751,	// (0x00078e98) status_small_pane

0xc759,	// (0x00078ea0) control_pane

0x3cab,	// (0x000703f2) stacon_bottom_pane

0xc761,	// (0x00078ea8) list_single_mce_smart_pane_t1_ParamLimits

0xc761,	// (0x00078ea8) list_single_mce_smart_pane_t1

0xc774,	// (0x00078ebb) list_single_mce_smart_pane_t2_ParamLimits

0xc774,	// (0x00078ebb) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0007baa0) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0007baa0) list_single_mce_smart_pane_t

0x58ff,	// (0x00072046) compass_pane

0x5908,	// (0x0007204f) main_location2_pane_t1

0x591a,	// (0x00072061) main_location2_pane_t2

0x592c,	// (0x00072073) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0007baa5) main_location2_pane_t

0xc793,	// (0x00078eda) compass_pane_g1_ParamLimits

0xc793,	// (0x00078eda) compass_pane_g1

0x5970,	// (0x000720b7) compass_pane_t1

0x597f,	// (0x000720c6) compass_pane_t2

0x0005,

0xf367,	// (0x0007baae) compass_pane_t

0x59c6,	// (0x0007210d) text_secondary_cp61

0xc811,	// (0x00078f58) navi_pane_cams_g5

0xc88d,	// (0x00078fd4) navi_pane_im_t1

0xc89b,	// (0x00078fe2) navi_pane_mp_g1_ParamLimits

0xc89b,	// (0x00078fe2) navi_pane_mp_g1

0xc8af,	// (0x00078ff6) navi_pane_mp_g2_ParamLimits

0xc8af,	// (0x00078ff6) navi_pane_mp_g2

0xc8bb,	// (0x00079002) navi_pane_mp_g3_ParamLimits

0xc8bb,	// (0x00079002) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0007bac2) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0007bac2) navi_pane_mp_g

0xc8c7,	// (0x0007900e) navi_pane_mp_t1

0xc8d5,	// (0x0007901c) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0007bac9) navi_pane_mp_t

0xc940,	// (0x00079087) navi_pane_vt_g1

0xc8c7,	// (0x0007900e) navi_pane_vt_t1

0xc948,	// (0x0007908f) navi_slider_pane

0xbe90,	// (0x000785d7) zooming_pane

0xc958,	// (0x0007909f) navi_slider_pane_g1

0xc961,	// (0x000790a8) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0007bad0) navi_slider_pane_g

0xc98e,	// (0x000790d5) aid_levels_zoom

0xc996,	// (0x000790dd) zooming_pane_g1

0xc99e,	// (0x000790e5) zooming_pane_g2

0xc99e,	// (0x000790e5) zooming_pane_g3

0x0002,

0xf398,	// (0x0007badf) zooming_pane_g

0xc9a6,	// (0x000790ed) level_10_zoom

0xc9af,	// (0x000790f6) level_11_zoom

0xc9b8,	// (0x000790ff) level_1_zoom

0xc9c1,	// (0x00079108) level_2_zoom

0xc9ca,	// (0x00079111) level_3_zoom

0xc9d3,	// (0x0007911a) level_4_zoom

0xc9dc,	// (0x00079123) level_5_zoom

0xc9e5,	// (0x0007912c) level_6_zoom

0xc9ee,	// (0x00079135) level_7_zoom

0xc9f7,	// (0x0007913e) level_8_zoom

0xca00,	// (0x00079147) level_9_zoom

0xca11,	// (0x00079158) popup_phob_thumbnail_window_g1

0xca19,	// (0x00079160) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0007bae6) popup_phob_thumbnail_window_g

0x63d6,	// (0x00072b1d) level_1_location

0x63de,	// (0x00072b25) level_2_location

0x63e6,	// (0x00072b2d) level_3_location

0x63ee,	// (0x00072b35) level_4_location

0xbe90,	// (0x000785d7) level_5_location

0x5a17,	// (0x0007215e) mce_icon_pane_g1

0x5a21,	// (0x00072168) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0007baeb) mce_icon_pane_g

0x1992,	// (0x0006e0d9) main_mup_pane_g1_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g1

0x1992,	// (0x0006e0d9) main_mup_pane_g2_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g2

0x1992,	// (0x0006e0d9) main_mup_pane_g3_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g3

0x1992,	// (0x0006e0d9) main_mup_pane_g4_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g4

0x1992,	// (0x0006e0d9) main_mup_pane_g5_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g5

0x1992,	// (0x0006e0d9) main_mup_pane_g6_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g6

0x1992,	// (0x0006e0d9) main_mup_pane_g7_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g7

0x1992,	// (0x0006e0d9) main_mup_pane_g8_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g8

0x1992,	// (0x0006e0d9) main_mup_pane_g9_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g9

0x1992,	// (0x0006e0d9) main_mup_pane_g10_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g10

0x1992,	// (0x0006e0d9) main_mup_pane_g11_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g11

0xbbd0,	// (0x00078317) main_mup_pane_g12_ParamLimits

0xbbd0,	// (0x00078317) main_mup_pane_g12

0x1992,	// (0x0006e0d9) main_mup_pane_g13_ParamLimits

0x1992,	// (0x0006e0d9) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0007baf0) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0007baf0) main_mup_pane_g

0x19a0,	// (0x0006e0e7) main_mup_pane_t1_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup_pane_t1

0x19a0,	// (0x0006e0e7) main_mup_pane_t2_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup_pane_t2

0x19a0,	// (0x0006e0e7) main_mup_pane_t3_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup_pane_t3

0xbea2,	// (0x000785e9) main_mup_pane_t4_ParamLimits

0xbea2,	// (0x000785e9) main_mup_pane_t4

0xbea2,	// (0x000785e9) main_mup_pane_t5_ParamLimits

0xbea2,	// (0x000785e9) main_mup_pane_t5

0xca21,	// (0x00079168) main_mup_pane_t6_ParamLimits

0xca21,	// (0x00079168) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0007bb0b) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0007bb0b) main_mup_pane_t

0x3dfb,	// (0x00070542) mup_progress_pane_ParamLimits

0x3dfb,	// (0x00070542) mup_progress_pane

0x18b5,	// (0x0006dffc) mup_visualizer_pane_ParamLimits

0x18b5,	// (0x0006dffc) mup_visualizer_pane

0x18b5,	// (0x0006dffc) mup_volume_pane_ParamLimits

0x18b5,	// (0x0006dffc) mup_volume_pane

0xbbde,	// (0x00078325) mup_visualizer_pane_g1_ParamLimits

0xbbde,	// (0x00078325) mup_visualizer_pane_g1

0xca35,	// (0x0007917c) mup_visualizer_pane_g2_ParamLimits

0xca35,	// (0x0007917c) mup_visualizer_pane_g2

0xbbd0,	// (0x00078317) mup_visualizer_pane_g3_ParamLimits

0xbbd0,	// (0x00078317) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0007bb18) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0007bb18) mup_visualizer_pane_g

0xbed0,	// (0x00078617) mup_volume_pane_g1

0xbed0,	// (0x00078617) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0007bb1f) mup_volume_pane_g

0xbed0,	// (0x00078617) mup_progress_pane_g1

0xbed0,	// (0x00078617) mup_progress_pane_g2

0xbed0,	// (0x00078617) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0007bb24) mup_progress_pane_g

0x3cab,	// (0x000703f2) bg_popup_window_pane_cp05

0xca43,	// (0x0007918a) heading_pane_cp02_ParamLimits

0xca43,	// (0x0007918a) heading_pane_cp02

0xca5d,	// (0x000791a4) list_popup_blid_pane

0xca65,	// (0x000791ac) list_blid_sat_info_pane_ParamLimits

0xca65,	// (0x000791ac) list_blid_sat_info_pane

0xca78,	// (0x000791bf) list_blid_sat_info_pane_g1

0xca80,	// (0x000791c7) list_blid_sat_info_pane_t1

0x5b21,	// (0x00072268) mup_equalizer_pane_ParamLimits

0x5b21,	// (0x00072268) mup_equalizer_pane

0x5b3a,	// (0x00072281) mup_equalizer_pane_cp1_ParamLimits

0x5b3a,	// (0x00072281) mup_equalizer_pane_cp1

0x5b57,	// (0x0007229e) mup_equalizer_pane_cp2_ParamLimits

0x5b57,	// (0x0007229e) mup_equalizer_pane_cp2

0x5b74,	// (0x000722bb) mup_equalizer_pane_cp3_ParamLimits

0x5b74,	// (0x000722bb) mup_equalizer_pane_cp3

0x5b95,	// (0x000722dc) mup_equalizer_pane_cp4_ParamLimits

0x5b95,	// (0x000722dc) mup_equalizer_pane_cp4

0x5bb6,	// (0x000722fd) mup_equalizer_pane_cp5

0x5bca,	// (0x00072311) mup_equalizer_pane_cp6

0x5bde,	// (0x00072325) mup_equalizer_pane_cp7

0x17b9,	// (0x0006df00) bg_popup_call_poc_act_pane_g9

0x17c1,	// (0x0006df08) bg_popup_call_poc_act_pane_g10

0x17c9,	// (0x0006df10) bg_popup_call_poc_act_pane_g11

0x000a,

0xbb63,	// (0x000782aa) mup_scale_pane

0xbb7b,	// (0x000782c2) mup_scale_pane_g1

0xca8e,	// (0x000791d5) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0007bb40) mup_scale_pane_g

0xcab2,	// (0x000791f9) msg_data_pane

0xcaba,	// (0x00079201) scroll_pane_cp017

0x2e79,	// (0x0006f5c0) bg_list_pane_cp04_ParamLimits

0x2e79,	// (0x0006f5c0) bg_list_pane_cp04

0xcaca,	// (0x00079211) msg_data_pane_g1

0x5c04,	// (0x0007234b) msg_data_pane_g2

0x5c0c,	// (0x00072353) msg_data_pane_g3

0x5c14,	// (0x0007235b) msg_data_pane_g4

0x5c1c,	// (0x00072363) msg_data_pane_g5

0x5c24,	// (0x0007236b) msg_data_pane_g6

0x5c2c,	// (0x00072373) msg_data_pane_g7

0x0006,

0xf408,	// (0x0007bb4f) msg_data_pane_g

0x2e91,	// (0x0006f5d8) msg_text_pane_ParamLimits

0x2e91,	// (0x0006f5d8) msg_text_pane

0x5c34,	// (0x0007237b) qrid_highlight_pane_cp011_ParamLimits

0x5c34,	// (0x0007237b) qrid_highlight_pane_cp011

0x3cab,	// (0x000703f2) msg_body_pane

0x3cab,	// (0x000703f2) msg_header_pane

0xcadb,	// (0x00079222) input_focus_pane_cp07

0xcaf0,	// (0x00079237) msg_header_pane_t1_ParamLimits

0xcaf0,	// (0x00079237) msg_header_pane_t1

0xcb06,	// (0x0007924d) msg_header_pane_t2_ParamLimits

0xcb06,	// (0x0007924d) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0007bb63) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0007bb63) msg_header_pane_t

0xcb1d,	// (0x00079264) msg_body_pane_g1

0xcb25,	// (0x0007926c) msg_body_pane_t1_ParamLimits

0xcb25,	// (0x0007926c) msg_body_pane_t1

0xcb56,	// (0x0007929d) msg_body_pane_t2_ParamLimits

0xcb56,	// (0x0007929d) msg_body_pane_t2

0xcb68,	// (0x000792af) msg_body_pane_t3_ParamLimits

0xcb68,	// (0x000792af) msg_body_pane_t3

0x0002,

0xf421,	// (0x0007bb68) msg_body_pane_t_ParamLimits

0xf421,	// (0x0007bb68) msg_body_pane_t

0x5c84,	// (0x000723cb) main_viewer_pane_g1_ParamLimits

0x5c84,	// (0x000723cb) main_viewer_pane_g1

0x5c92,	// (0x000723d9) main_viewer_pane_g2_ParamLimits

0x5c92,	// (0x000723d9) main_viewer_pane_g2

0x5ca0,	// (0x000723e7) main_viewer_pane_g3_ParamLimits

0x5ca0,	// (0x000723e7) main_viewer_pane_g3

0x5caf,	// (0x000723f6) main_viewer_pane_g4_ParamLimits

0x5caf,	// (0x000723f6) main_viewer_pane_g4

0xcb92,	// (0x000792d9) main_viewer_pane_g5_ParamLimits

0xcb92,	// (0x000792d9) main_viewer_pane_g5

0xcb92,	// (0x000792d9) main_viewer_pane_g7_ParamLimits

0xcb92,	// (0x000792d9) main_viewer_pane_g7

0xcba4,	// (0x000792eb) main_viewer_pane_g8_ParamLimits

0xcba4,	// (0x000792eb) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0007bb78) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0007bb78) main_viewer_pane_g

0xcbbc,	// (0x00079303) viewer_content_pane_ParamLimits

0xcbbc,	// (0x00079303) viewer_content_pane

0x5ceb,	// (0x00072432) main_postcard_pane_g1_ParamLimits

0x5ceb,	// (0x00072432) main_postcard_pane_g1

0x5d01,	// (0x00072448) main_postcard_pane_g2_ParamLimits

0x5d01,	// (0x00072448) main_postcard_pane_g2

0x5d17,	// (0x0007245e) main_postcard_pane_g3_ParamLimits

0x5d17,	// (0x0007245e) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0007bb89) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0007bb89) main_postcard_pane_g

0x5d2e,	// (0x00072475) main_postcard_pane_g4

0x194b,	// (0x0006e092) smil_status_volume_pane_g2

0x5d71,	// (0x000724b8) postcard_pane_ParamLimits

0x5d71,	// (0x000724b8) postcard_pane

0xcbca,	// (0x00079311) postcard_pane_g1_ParamLimits

0xcbca,	// (0x00079311) postcard_pane_g1

0x5db3,	// (0x000724fa) postcard_pane_g2_ParamLimits

0x5db3,	// (0x000724fa) postcard_pane_g2

0x5dbf,	// (0x00072506) postcard_pane_g3_ParamLimits

0x5dbf,	// (0x00072506) postcard_pane_g3

0xcbd8,	// (0x0007931f) postcard_pane_g4_ParamLimits

0xcbd8,	// (0x0007931f) postcard_pane_g4

0x5dcb,	// (0x00072512) postcard_pane_g5_ParamLimits

0x5dcb,	// (0x00072512) postcard_pane_g5

0x5de0,	// (0x00072527) postcard_pane_g6_ParamLimits

0x5de0,	// (0x00072527) postcard_pane_g6

0xcbca,	// (0x00079311) postcard_pane_g7_ParamLimits

0xcbca,	// (0x00079311) postcard_pane_g7

0x0006,

0xf44f,	// (0x0007bb96) postcard_pane_g_ParamLimits

0xf44f,	// (0x0007bb96) postcard_pane_g

0x5df4,	// (0x0007253b) main_mp2_pane_g1_ParamLimits

0x5df4,	// (0x0007253b) main_mp2_pane_g1

0x5e00,	// (0x00072547) main_mp2_pane_g2_ParamLimits

0x5e00,	// (0x00072547) main_mp2_pane_g2

0x5e0c,	// (0x00072553) main_mp2_pane_g3_ParamLimits

0x5e0c,	// (0x00072553) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0007bba5) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0007bba5) main_mp2_pane_g

0x5e18,	// (0x0007255f) main_mp2_pane_t1_ParamLimits

0x5e18,	// (0x0007255f) main_mp2_pane_t1

0x5e2d,	// (0x00072574) main_mp2_pane_t2_ParamLimits

0x5e2d,	// (0x00072574) main_mp2_pane_t2

0x5e3f,	// (0x00072586) main_mp2_pane_t3_ParamLimits

0x5e3f,	// (0x00072586) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0007bbac) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0007bbac) main_mp2_pane_t

0xcbe6,	// (0x0007932d) pec_content_pane_ParamLimits

0xcbe6,	// (0x0007932d) pec_content_pane

0xc031,	// (0x00078778) scroll_pane_cp015

0xcbf8,	// (0x0007933f) pec_attribute_pane_ParamLimits

0xcbf8,	// (0x0007933f) pec_attribute_pane

0x5e51,	// (0x00072598) pec_content_pane_g1_ParamLimits

0x5e51,	// (0x00072598) pec_content_pane_g1

0xcc08,	// (0x0007934f) pec_content_pane_t1_ParamLimits

0xcc08,	// (0x0007934f) pec_content_pane_t1

0xcc1a,	// (0x00079361) pec_content_pane_t2_ParamLimits

0xcc1a,	// (0x00079361) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0007bbb3) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0007bbb3) pec_content_pane_t

0x5e5d,	// (0x000725a4) list_single_graphic_pane_cp01_ParamLimits

0x5e5d,	// (0x000725a4) list_single_graphic_pane_cp01

0xbb63,	// (0x000782aa) bg_popup_sub_pane_cp04

0xcc2c,	// (0x00079373) popup_mup_playback_window_g1

0xcc38,	// (0x0007937f) popup_mup_playback_window_t1

0xcc4d,	// (0x00079394) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x0007bbb8) popup_mup_playback_window_t

0xcc84,	// (0x000793cb) main_image_pane_g1_ParamLimits

0xcc84,	// (0x000793cb) main_image_pane_g1

0xccc7,	// (0x0007940e) scroll_pane_cp018_ParamLimits

0xccc7,	// (0x0007940e) scroll_pane_cp018

0xccdf,	// (0x00079426) scroll_pane_cp016_ParamLimits

0xccdf,	// (0x00079426) scroll_pane_cp016

0x5f2b,	// (0x00072672) smil2_image_pane_ParamLimits

0x5f2b,	// (0x00072672) smil2_image_pane

0x5f5b,	// (0x000726a2) smil2_root_pane_ParamLimits

0x5f5b,	// (0x000726a2) smil2_root_pane

0x5f93,	// (0x000726da) smil2_text_pane_ParamLimits

0x5f93,	// (0x000726da) smil2_text_pane

0x3cab,	// (0x000703f2) bg_list_pane_cp06

0xcd1b,	// (0x00079462) grid_radio_pane

0x3cab,	// (0x000703f2) bg_popup_window_pane_cp06

0xcd23,	// (0x0007946a) main_fmradio_pane_t1

0x1811,	// (0x0006df58) heading_pane_cp04

0xcd31,	// (0x00079478) main_fmradio_pane_t2

0x1819,	// (0x0006df60) popup_cale_lunar_info_window_g1

0xcd3f,	// (0x00079486) main_fmradio_pane_t3

0x1821,	// (0x0006df68) popup_cale_lunar_info_window_g2

0xcd4d,	// (0x00079494) main_fmradio_pane_t4

0x0001,

0xcd5b,	// (0x000794a2) main_fmradio_pane_t5

0x0004,

0xf564,	// (0x0007bcab) popup_cale_lunar_info_window_g

0xf486,	// (0x0007bbcd) main_fmradio_pane_t

0xcd69,	// (0x000794b0) wait_bar_pane_cp03

0xcd71,	// (0x000794b8) cell_fmradio_pane_ParamLimits

0xcd71,	// (0x000794b8) cell_fmradio_pane

0xcbca,	// (0x00079311) cell_fmradio_pane_g1_ParamLimits

0xcbca,	// (0x00079311) cell_fmradio_pane_g1

0x3cab,	// (0x000703f2) grid_highlight_pane_cp011

0xcd84,	// (0x000794cb) poc_content_pane_ParamLimits

0xcd84,	// (0x000794cb) poc_content_pane

0xcd96,	// (0x000794dd) scroll_pane_cp019

0x6013,	// (0x0007275a) popup_call_poc_act_window_ParamLimits

0x6013,	// (0x0007275a) popup_call_poc_act_window

0x6037,	// (0x0007277e) popup_call_poc_inact_window_ParamLimits

0x6037,	// (0x0007277e) popup_call_poc_inact_window

0xf528,	// (0x0007bc6f) bg_popup_call_poc_act_pane_g

0x17d1,	// (0x0006df18) bg_popup_call_poc_inact_pane_g1

0x17d9,	// (0x0006df20) bg_popup_call_poc_inact_pane_g2

0xcd9e,	// (0x000794e5) popup_call_poc_act_window_g2

0x17e1,	// (0x0006df28) bg_popup_call_poc_inact_pane_g3

0x1761,	// (0x0006dea8) bg_popup_call_poc_inact_pane_g4

0x17e9,	// (0x0006df30) bg_popup_call_poc_inact_pane_g5

0xcda6,	// (0x000794ed) popup_call_poc_act_window_t1_ParamLimits

0xcda6,	// (0x000794ed) popup_call_poc_act_window_t1

0xcdce,	// (0x00079515) popup_call_poc_act_window_t2_ParamLimits

0xcdce,	// (0x00079515) popup_call_poc_act_window_t2

0xcdf6,	// (0x0007953d) popup_call_poc_act_window_t3_ParamLimits

0xcdf6,	// (0x0007953d) popup_call_poc_act_window_t3

0xce1e,	// (0x00079565) popup_call_poc_act_window_t4_ParamLimits

0xce1e,	// (0x00079565) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x0007bbd8) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x0007bbd8) popup_call_poc_act_window_t

0x17f1,	// (0x0006df38) bg_popup_call_poc_inact_pane_g6

0x17f9,	// (0x0006df40) bg_popup_call_poc_inact_pane_g7

0x1801,	// (0x0006df48) bg_popup_call_poc_inact_pane_g8

0xce30,	// (0x00079577) popup_call_poc_inact_window_g2

0x1809,	// (0x0006df50) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf53f,	// (0x0007bc86) bg_popup_call_poc_inact_pane_g

0xce38,	// (0x0007957f) popup_call_poc_inact_window_t1_ParamLimits

0xce38,	// (0x0007957f) popup_call_poc_inact_window_t1

0xce4d,	// (0x00079594) popup_call_poc_inact_window_t2_ParamLimits

0xce4d,	// (0x00079594) popup_call_poc_inact_window_t2

0xce62,	// (0x000795a9) popup_call_poc_inact_window_t3_ParamLimits

0xce62,	// (0x000795a9) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x0007bbe1) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x0007bbe1) popup_call_poc_inact_window_t

0x18c3,	// (0x0006e00a) context_pane_ParamLimits

0x68ac,	// (0x00072ff3) signal_pane_ParamLimits

0xbe90,	// (0x000785d7) main_call2_pane

0xceb2,	// (0x000795f9) popup_phob_thumbnail2_window_ParamLimits

0xceb2,	// (0x000795f9) popup_phob_thumbnail2_window

0xcb7a,	// (0x000792c1) aid_hotspot_pointer_arrow_pane

0xcb82,	// (0x000792c9) aid_hotspot_pointer_hand_pane

0x63a0,	// (0x00072ae7) phob_pre_status_pane_g5

0xba4a,	// (0x00078191) cams_zoom_pane_ParamLimits

0xba4a,	// (0x00078191) image_vga_pane_ParamLimits

0xbbd0,	// (0x00078317) main_camera_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) main_camera_pane_g2_ParamLimits

0xbbd0,	// (0x00078317) main_camera_pane_g3_ParamLimits

0xbbd0,	// (0x00078317) main_camera_pane_g4_ParamLimits

0xbbd0,	// (0x00078317) main_camera_pane_g5_ParamLimits

0xbbd0,	// (0x00078317) main_camera_pane_g6_ParamLimits

0xbbd0,	// (0x00078317) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0007b90c) main_camera_pane_g_ParamLimits

0xbea2,	// (0x000785e9) main_camera_pane_t1_ParamLimits

0xbea2,	// (0x000785e9) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0007b91d) main_camera_pane_t_ParamLimits

0xbb63,	// (0x000782aa) bg_popup_preview_window_pane_cp01_ParamLimits

0xbb63,	// (0x000782aa) bg_popup_preview_window_pane_cp01

0x099d,	// (0x0006d0e4) popup_phob_thumbnail2_window_g1_ParamLimits

0x099d,	// (0x0006d0e4) popup_phob_thumbnail2_window_g1

0x3cab,	// (0x000703f2) call2_cli_visual_pane

0x606b,	// (0x000727b2) popup_call2_audio_conf_window_ParamLimits

0x606b,	// (0x000727b2) popup_call2_audio_conf_window

0x608b,	// (0x000727d2) popup_call2_audio_first_window_ParamLimits

0x608b,	// (0x000727d2) popup_call2_audio_first_window

0x6121,	// (0x00072868) popup_call2_audio_in_window_ParamLimits

0x6121,	// (0x00072868) popup_call2_audio_in_window

0x6169,	// (0x000728b0) popup_call2_audio_out_window_ParamLimits

0x6169,	// (0x000728b0) popup_call2_audio_out_window

0x61d3,	// (0x0007291a) popup_call2_audio_second_window_ParamLimits

0x61d3,	// (0x0007291a) popup_call2_audio_second_window

0x6239,	// (0x00072980) popup_call2_audio_wait_window_ParamLimits

0x6239,	// (0x00072980) popup_call2_audio_wait_window

0x3cab,	// (0x000703f2) bg_popup_call2_act_pane_cp03

0xbb45,	// (0x0007828c) list_conf_pane_cp

0x09a9,	// (0x0006d0f0) popup_call2_audio_conf_window_t1

0x09b7,	// (0x0006d0fe) list_single_graphic_popup_conf2_pane_ParamLimits

0x09b7,	// (0x0006d0fe) list_single_graphic_popup_conf2_pane

0xc67f,	// (0x00078dc6) list_highlight_pane_cp04

0x09ca,	// (0x0006d111) list_single_graphic_popup_conf2_pane_g1

0xc690,	// (0x00078dd7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x0007bbe8) list_single_graphic_popup_conf2_pane_g

0x09d4,	// (0x0006d11b) list_single_graphic_popup_conf2_pane_t1

0x09e2,	// (0x0006d129) bg_popup_call2_act_pane_cp01_ParamLimits

0x09e2,	// (0x0006d129) bg_popup_call2_act_pane_cp01

0x0a6c,	// (0x0006d1b3) call_type_pane_cp05_ParamLimits

0x0a6c,	// (0x0006d1b3) call_type_pane_cp05

0x0ac0,	// (0x0006d207) popup_call2_audio_second_window_g1_ParamLimits

0x0ac0,	// (0x0006d207) popup_call2_audio_second_window_g1

0x0b14,	// (0x0006d25b) popup_call2_audio_second_window_g2_ParamLimits

0x0b14,	// (0x0006d25b) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0007bbed) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0007bbed) popup_call2_audio_second_window_g

0x0b79,	// (0x0006d2c0) popup_call2_audio_second_window_t1_ParamLimits

0x0b79,	// (0x0006d2c0) popup_call2_audio_second_window_t1

0x0c34,	// (0x0006d37b) popup_call2_audio_second_window_t2_ParamLimits

0x0c34,	// (0x0006d37b) popup_call2_audio_second_window_t2

0x0c87,	// (0x0006d3ce) popup_call2_audio_second_window_t3_ParamLimits

0x0c87,	// (0x0006d3ce) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x0007bbf4) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x0007bbf4) popup_call2_audio_second_window_t

0x3cab,	// (0x000703f2) bg_popup_call2_in_pane_cp02

0x3cb5,	// (0x000703fc) call_type_pane_cp04

0x6273,	// (0x000729ba) popup_call2_audio_wait_window_g1

0x627b,	// (0x000729c2) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0007bbfd) popup_call2_audio_wait_window_g

0x3ccd,	// (0x00070414) popup_call2_audio_wait_window_t3

0x0d7a,	// (0x0006d4c1) bg_popup_call2_act_pane_ParamLimits

0x0d7a,	// (0x0006d4c1) bg_popup_call2_act_pane

0x0e3a,	// (0x0006d581) call_type_pane_cp03_ParamLimits

0x0e3a,	// (0x0006d581) call_type_pane_cp03

0x0e9e,	// (0x0006d5e5) popup_call2_audio_first_window_g1_ParamLimits

0x0e9e,	// (0x0006d5e5) popup_call2_audio_first_window_g1

0x0f0e,	// (0x0006d655) popup_call2_audio_first_window_g2_ParamLimits

0x0f0e,	// (0x0006d655) popup_call2_audio_first_window_g2

0xce77,	// (0x000795be) popup_call2_audio_first_window_g3_ParamLimits

0xce77,	// (0x000795be) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x0007bc02) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x0007bc02) popup_call2_audio_first_window_g

0x0fec,	// (0x0006d733) popup_call2_audio_first_window_t1_ParamLimits

0x0fec,	// (0x0006d733) popup_call2_audio_first_window_t1

0x10ef,	// (0x0006d836) popup_call2_audio_first_window_t4_ParamLimits

0x10ef,	// (0x0006d836) popup_call2_audio_first_window_t4

0x11d2,	// (0x0006d919) popup_call2_audio_first_window_t5_ParamLimits

0x11d2,	// (0x0006d919) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0007bc0d) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0007bc0d) popup_call2_audio_first_window_t

0xbb5b,	// (0x000782a2) bg_popup_call2_act_pane_g1

0x1829,	// (0x0006df70) popup_cale_lunar_info_window_t1

0x1837,	// (0x0006df7e) popup_cale_lunar_info_window_t2

0x1845,	// (0x0006df8c) popup_cale_lunar_info_window_t3

0x3cab,	// (0x000703f2) bg_popup_call2_bubble_pane

0x12d3,	// (0x0006da1a) bg_popup_call2_in_pane_cp01_ParamLimits

0x12d3,	// (0x0006da1a) bg_popup_call2_in_pane_cp01

0x3963,	// (0x000700aa) call_type_pane_cp02

0x6283,	// (0x000729ca) popup_call2_audio_out_window_g1_ParamLimits

0x6283,	// (0x000729ca) popup_call2_audio_out_window_g1

0x131b,	// (0x0006da62) popup_call2_audio_out_window_g2_ParamLimits

0x131b,	// (0x0006da62) popup_call2_audio_out_window_g2

0x62af,	// (0x000729f6) popup_call2_audio_out_window_g3_ParamLimits

0x62af,	// (0x000729f6) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x0007bc16) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x0007bc16) popup_call2_audio_out_window_g

0x1352,	// (0x0006da99) popup_call2_audio_out_window_t1_ParamLimits

0x1352,	// (0x0006da99) popup_call2_audio_out_window_t1

0x13b1,	// (0x0006daf8) popup_call2_audio_out_window_t2_ParamLimits

0x13b1,	// (0x0006daf8) popup_call2_audio_out_window_t2

0x1405,	// (0x0006db4c) popup_call2_audio_out_window_t3_ParamLimits

0x1405,	// (0x0006db4c) popup_call2_audio_out_window_t3

0x141b,	// (0x0006db62) popup_call2_audio_out_window_t4_ParamLimits

0x141b,	// (0x0006db62) popup_call2_audio_out_window_t4

0x1431,	// (0x0006db78) popup_call2_audio_out_window_t5_ParamLimits

0x1431,	// (0x0006db78) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0007bc1f) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0007bc1f) popup_call2_audio_out_window_t

0x1495,	// (0x0006dbdc) bg_popup_call2_in_pane_ParamLimits

0x1495,	// (0x0006dbdc) bg_popup_call2_in_pane

0x14f1,	// (0x0006dc38) popup_call2_audio_in_window_g1_ParamLimits

0x14f1,	// (0x0006dc38) popup_call2_audio_in_window_g1

0x1529,	// (0x0006dc70) popup_call2_audio_in_window_g2_ParamLimits

0x1529,	// (0x0006dc70) popup_call2_audio_in_window_g2

0x1561,	// (0x0006dca8) popup_call2_audio_in_window_g3_ParamLimits

0x1561,	// (0x0006dca8) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0007bc2c) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0007bc2c) popup_call2_audio_in_window_g

0x15b9,	// (0x0006dd00) popup_call2_audio_in_window_t1_ParamLimits

0x15b9,	// (0x0006dd00) popup_call2_audio_in_window_t1

0x1639,	// (0x0006dd80) popup_call2_audio_in_window_t2_ParamLimits

0x1639,	// (0x0006dd80) popup_call2_audio_in_window_t2

0x16b9,	// (0x0006de00) popup_call2_audio_in_window_t3_ParamLimits

0x16b9,	// (0x0006de00) popup_call2_audio_in_window_t3

0x16d3,	// (0x0006de1a) popup_call2_audio_in_window_t4_ParamLimits

0x16d3,	// (0x0006de1a) popup_call2_audio_in_window_t4

0x16e5,	// (0x0006de2c) popup_call2_audio_in_window_t5_ParamLimits

0x16e5,	// (0x0006de2c) popup_call2_audio_in_window_t5

0x16f7,	// (0x0006de3e) popup_call2_audio_in_window_t6_ParamLimits

0x16f7,	// (0x0006de3e) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x0007bc35) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x0007bc35) popup_call2_audio_in_window_t

0xbb5b,	// (0x000782a2) bg_popup_call2_in_pane_g1

0x1853,	// (0x0006df9a) popup_cale_lunar_info_window_t4

0x0003,

0xf569,	// (0x0007bcb0) popup_cale_lunar_info_window_t

0xbb63,	// (0x000782aa) bg_popup_call2_rect_pane_ParamLimits

0xbb63,	// (0x000782aa) bg_popup_call2_rect_pane

0x3cab,	// (0x000703f2) call2_cli_visual_graphic_pane

0x3cab,	// (0x000703f2) call2_cli_visual_text_pane

0xced9,	// (0x00079620) smil_status_volume_pane_g3

0x0002,

0xbb7b,	// (0x000782c2) call2_cli_visual_graphic_pane_g1

0xbb7b,	// (0x000782c2) call2_cli_visual_graphic_pane_g2

0xbb7b,	// (0x000782c2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x0007bc42) call2_cli_visual_graphic_pane_g

0x1709,	// (0x0006de50) bg_popup_call2_rect_pane_g1

0xbd5f,	// (0x000784a6) bg_popup_call2_rect_pane_g2

0x1711,	// (0x0006de58) bg_popup_call2_rect_pane_g3

0x1719,	// (0x0006de60) bg_popup_call2_rect_pane_g4

0x1721,	// (0x0006de68) bg_popup_call2_rect_pane_g5

0x1729,	// (0x0006de70) bg_popup_call2_rect_pane_g6

0x1731,	// (0x0006de78) bg_popup_call2_rect_pane_g7

0x1739,	// (0x0006de80) bg_popup_call2_rect_pane_g8

0x1741,	// (0x0006de88) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x0007bc49) bg_popup_call2_rect_pane_g

0x1749,	// (0x0006de90) bg_popup_call2_bubble_pane_g1

0x1751,	// (0x0006de98) bg_popup_call2_bubble_pane_g2

0x1759,	// (0x0006dea0) bg_popup_call2_bubble_pane_g3

0x1761,	// (0x0006dea8) bg_popup_call2_bubble_pane_g4

0x1769,	// (0x0006deb0) bg_popup_call2_bubble_pane_g5

0x1771,	// (0x0006deb8) bg_popup_call2_bubble_pane_g6

0x1779,	// (0x0006dec0) bg_popup_call2_bubble_pane_g7

0x1781,	// (0x0006dec8) bg_popup_call2_bubble_pane_g8

0x1789,	// (0x0006ded0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0007bc5c) bg_popup_call2_bubble_pane_g

0x4130,	// (0x00070877) aid_cale_week_size_cell_pane

0x46e0,	// (0x00070e27) aid_cams_cif_uncrop_pane_ParamLimits

0x46e0,	// (0x00070e27) aid_cams_cif_uncrop_pane

0x4836,	// (0x00070f7d) aid_cams_size_cell_ParamLimits

0x4836,	// (0x00070f7d) aid_cams_size_cell

0x484a,	// (0x00070f91) grid_cams_pane_ParamLimits

0x4864,	// (0x00070fab) linegrid_cams_pane_ParamLimits

0x494a,	// (0x00071091) call_video_pane_t1

0x4968,	// (0x000710af) call_video_pane_t2

0x0001,

0xf222,	// (0x0007b969) call_video_pane_t

0x4d8e,	// (0x000714d5) aid_cale_month_size_cell_pane_ParamLimits

0x4d8e,	// (0x000714d5) aid_cale_month_size_cell_pane

0xf5ad,	// (0x0007bcf4) smil_status_volume_pane_g

0xcee6,	// (0x0007962d) volume_smil_pane_ParamLimits

0xb9e5,	// (0x0007812c) aid_popup2_width_pane

0x4095,	// (0x000707dc) cell_qdial_pane_g4_ParamLimits

0x4095,	// (0x000707dc) cell_qdial_pane_g4

0x5950,	// (0x00072097) aid_blid_cardinal_pane_ParamLimits

0x595c,	// (0x000720a3) aid_blid_destination_pane_ParamLimits

0x595c,	// (0x000720a3) aid_blid_destination_pane

0xbb63,	// (0x000782aa) bg_popup_call_poc_act_pane_ParamLimits

0xbb63,	// (0x000782aa) bg_popup_call_poc_act_pane

0xbb63,	// (0x000782aa) bg_popup_call_poc_inact_pane_ParamLimits

0xbb63,	// (0x000782aa) bg_popup_call_poc_inact_pane

0x1791,	// (0x0006ded8) bg_popup_call_poc_act_pane_g1

0x1799,	// (0x0006dee0) bg_popup_call_poc_act_pane_g2

0x17a1,	// (0x0006dee8) bg_popup_call_poc_act_pane_g3

0x1761,	// (0x0006dea8) bg_popup_call_poc_act_pane_g4

0x1769,	// (0x0006deb0) bg_popup_call_poc_act_pane_g5

0x17a9,	// (0x0006def0) bg_popup_call_poc_act_pane_g6

0x1779,	// (0x0006dec0) bg_popup_call_poc_act_pane_g7

0x17b1,	// (0x0006def8) bg_popup_call_poc_act_pane_g8

0x3cab,	// (0x000703f2) main_usb_pane

0xce8d,	// (0x000795d4) popup_cale_lunar_info_window

0x4c34,	// (0x0007137b) im_reading_pane_t1_ParamLimits

0xbf89,	// (0x000786d0) list_im_pane_ParamLimits

0xbf9a,	// (0x000786e1) scroll_pane_cp07_ParamLimits

0x3cab,	// (0x000703f2) grid_highlight_pane_cp012

0xbb63,	// (0x000782aa) mup_scale_pane_ParamLimits

0xcbca,	// (0x00079311) main_usb_pane_g1_ParamLimits

0xcbca,	// (0x00079311) main_usb_pane_g1

0x62fe,	// (0x00072a45) main_usb_pane_g2_ParamLimits

0x62fe,	// (0x00072a45) main_usb_pane_g2

0x0001,

0xf552,	// (0x0007bc99) main_usb_pane_g_ParamLimits

0xf552,	// (0x0007bc99) main_usb_pane_g

0x6314,	// (0x00072a5b) main_usb_pane_t1_ParamLimits

0x6314,	// (0x00072a5b) main_usb_pane_t1

0x6326,	// (0x00072a6d) main_usb_pane_t2_ParamLimits

0x6326,	// (0x00072a6d) main_usb_pane_t2

0x6338,	// (0x00072a7f) main_usb_pane_t3_ParamLimits

0x6338,	// (0x00072a7f) main_usb_pane_t3

0x634a,	// (0x00072a91) main_usb_pane_t4_ParamLimits

0x634a,	// (0x00072a91) main_usb_pane_t4

0x635c,	// (0x00072aa3) main_usb_pane_t5_ParamLimits

0x635c,	// (0x00072aa3) main_usb_pane_t5

0x636e,	// (0x00072ab5) main_usb_pane_t6_ParamLimits

0x636e,	// (0x00072ab5) main_usb_pane_t6

0x0005,

0xf557,	// (0x0007bc9e) main_usb_pane_t_ParamLimits

0x58ff,	// (0x00072046) aid_text_placing

0x5908,	// (0x0007204f) main_location2_pane_t1_ParamLimits

0x591a,	// (0x00072061) main_location2_pane_t2_ParamLimits

0x592c,	// (0x00072073) main_location2_pane_t3_ParamLimits

0x593e,	// (0x00072085) main_location2_pane_t4_ParamLimits

0x593e,	// (0x00072085) main_location2_pane_t4

0xf35e,	// (0x0007baa5) main_location2_pane_t_ParamLimits

0xbb91,	// (0x000782d8) find_pinb_pane_g2_ParamLimits

0xbb91,	// (0x000782d8) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0007b821) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0007b821) find_pinb_pane_g

0xbb9d,	// (0x000782e4) find_pinb_pane_t1_ParamLimits

0xbbaf,	// (0x000782f6) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0007b826) find_pinb_pane_t_ParamLimits

0x3cab,	// (0x000703f2) main_call3_pane

0x5275,	// (0x000719bc) cale_month_day_heading_pane_t1_ParamLimits

0x52b7,	// (0x000719fe) cale_month_day_heading_pane_t2_ParamLimits

0x52ec,	// (0x00071a33) cale_month_day_heading_pane_t3_ParamLimits

0x5321,	// (0x00071a68) cale_month_day_heading_pane_t4_ParamLimits

0x535e,	// (0x00071aa5) cale_month_day_heading_pane_t5_ParamLimits

0x53a3,	// (0x00071aea) cale_month_day_heading_pane_t6_ParamLimits

0x53e8,	// (0x00071b2f) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0007b9a1) cale_month_day_heading_pane_t_ParamLimits

0xc1f0,	// (0x00078937) smil_status_volume_pane

0x5d8f,	// (0x000724d6) postcard_address_pane_ParamLimits

0x5d8f,	// (0x000724d6) postcard_address_pane

0x5da1,	// (0x000724e8) postcard_message_pane_ParamLimits

0x5da1,	// (0x000724e8) postcard_message_pane

0x62db,	// (0x00072a22) call2_cli_visual_pane_t1_ParamLimits

0x62db,	// (0x00072a22) call2_cli_visual_pane_t1

0x1976,	// (0x0006e0bd) postcard_message_pane_t1_ParamLimits

0x1976,	// (0x0006e0bd) postcard_message_pane_t1

0x195e,	// (0x0006e0a5) postcard_address_pane_t1_ParamLimits

0x195e,	// (0x0006e0a5) postcard_address_pane_t1

0x6a5f,	// (0x000731a6) popup_call3_audio_in_window_ParamLimits

0x6a5f,	// (0x000731a6) popup_call3_audio_in_window

0x68ea,	// (0x00073031) bg_popup_call3_in_pane_ParamLimits

0x68ea,	// (0x00073031) bg_popup_call3_in_pane

0x6960,	// (0x000730a7) popup_call3_audio_in_window_g1_ParamLimits

0x6960,	// (0x000730a7) popup_call3_audio_in_window_g1

0x6980,	// (0x000730c7) popup_call3_audio_in_window_g2_ParamLimits

0x6980,	// (0x000730c7) popup_call3_audio_in_window_g2

0x69a0,	// (0x000730e7) popup_call3_audio_in_window_g3_ParamLimits

0x69a0,	// (0x000730e7) popup_call3_audio_in_window_g3

0x0003,

0xf5b4,	// (0x0007bcfb) popup_call3_audio_in_window_g_ParamLimits

0xf5b4,	// (0x0007bcfb) popup_call3_audio_in_window_g

0x69d1,	// (0x00073118) popup_call3_audio_in_window_t1_ParamLimits

0x69d1,	// (0x00073118) popup_call3_audio_in_window_t1

0x6a0f,	// (0x00073156) popup_call3_audio_in_window_t2_ParamLimits

0x6a0f,	// (0x00073156) popup_call3_audio_in_window_t2

0x6a4d,	// (0x00073194) popup_call3_audio_in_window_t3_ParamLimits

0x6a4d,	// (0x00073194) popup_call3_audio_in_window_t3

0x0002,

0xf5bd,	// (0x0007bd04) popup_call3_audio_in_window_t_ParamLimits

0xf5bd,	// (0x0007bd04) popup_call3_audio_in_window_t

0xbe90,	// (0x000785d7) bg_popup_call3_rect_pane

0x1709,	// (0x0006de50) bg_popup_call3_rect_pane_g1

0xbd5f,	// (0x000784a6) bg_popup_call3_rect_pane_g2

0x1711,	// (0x0006de58) bg_popup_call3_rect_pane_g3

0x1719,	// (0x0006de60) bg_popup_call3_rect_pane_g4

0x1721,	// (0x0006de68) bg_popup_call3_rect_pane_g5

0x1729,	// (0x0006de70) bg_popup_call3_rect_pane_g6

0x1731,	// (0x0006de78) bg_popup_call3_rect_pane_g7

0x35b6,	// (0x0006fcfd) mup_visualizer_osc_pane

0x35b6,	// (0x0006fcfd) mup_visualizer_spec_pane

0x691a,	// (0x00073061) call3_video_qcif_pane_ParamLimits

0x691a,	// (0x00073061) call3_video_qcif_pane

0x692d,	// (0x00073074) call3_video_qcif_uncrop_pane_ParamLimits

0x692d,	// (0x00073074) call3_video_qcif_uncrop_pane

0x693b,	// (0x00073082) call3_video_subqcif_pane_ParamLimits

0x693b,	// (0x00073082) call3_video_subqcif_pane

0x694f,	// (0x00073096) call3_video_subqcif_uncrop_pane_ParamLimits

0x694f,	// (0x00073096) call3_video_subqcif_uncrop_pane

0x69c0,	// (0x00073107) popup_call3_audio_in_window_g4_ParamLimits

0x69c0,	// (0x00073107) popup_call3_audio_in_window_g4

0x35b6,	// (0x0006fcfd) mup_spec_half_pane

0x35b6,	// (0x0006fcfd) mup_spec_half_pane_cp

0x35b6,	// (0x0006fcfd) mup_osc_middle_pane

0xbed0,	// (0x00078617) mup_visualizer_osc_pane_g1

0x1911,	// (0x0006e058) mup_spec_bar_pane_ParamLimits

0x1911,	// (0x0006e058) mup_spec_bar_pane

0xbed0,	// (0x00078617) mup_spec_bar_pane_g1

0xbed0,	// (0x00078617) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0007bb1f) mup_spec_bar_pane_g

0x4130,	// (0x00070877) aid_cale_week_size_cell_pane_ParamLimits

0x414a,	// (0x00070891) bg_cale_heading_pane_ParamLimits

0xbdf2,	// (0x00078539) bg_cale_pane_cp01_ParamLimits

0x4162,	// (0x000708a9) cale_week_corner_pane_ParamLimits

0x4181,	// (0x000708c8) cale_week_day_heading_pane_ParamLimits

0x419e,	// (0x000708e5) cale_week_scroll_pane_g1_ParamLimits

0x41b1,	// (0x000708f8) cale_week_scroll_pane_g2_ParamLimits

0x41c9,	// (0x00070910) cale_week_scroll_pane_g3_ParamLimits

0x41e1,	// (0x00070928) cale_week_scroll_pane_g4_ParamLimits

0x41f9,	// (0x00070940) cale_week_scroll_pane_g5_ParamLimits

0x4219,	// (0x00070960) cale_week_scroll_pane_g6_ParamLimits

0x4239,	// (0x00070980) cale_week_scroll_pane_g7_ParamLimits

0x4259,	// (0x000709a0) cale_week_scroll_pane_g8_ParamLimits

0x427d,	// (0x000709c4) cale_week_scroll_pane_g9_ParamLimits

0x4295,	// (0x000709dc) cale_week_scroll_pane_g10_ParamLimits

0x42ad,	// (0x000709f4) cale_week_scroll_pane_g11_ParamLimits

0x42c5,	// (0x00070a0c) cale_week_scroll_pane_g12_ParamLimits

0x42dd,	// (0x00070a24) cale_week_scroll_pane_g13_ParamLimits

0x42dd,	// (0x00070a24) cale_week_scroll_pane_g14_ParamLimits

0x42dd,	// (0x00070a24) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0007b8b2) cale_week_scroll_pane_g_ParamLimits

0x4319,	// (0x00070a60) cale_week_time_pane_ParamLimits

0x433d,	// (0x00070a84) grid_cale_week_pane_ParamLimits

0xbe0f,	// (0x00078556) listscroll_cale_week_pane_t1

0xbe21,	// (0x00078568) scroll_pane_cp08_ParamLimits

0x4dee,	// (0x00071535) cale_month_corner_pane_ParamLimits

0xc1ba,	// (0x00078901) cale_month_pane_t1

0x5208,	// (0x0007194f) cale_month_week_pane_ParamLimits

0x5754,	// (0x00071e9b) popup_call_status_window_g1_ParamLimits

0x5768,	// (0x00071eaf) popup_call_status_window_g2_ParamLimits

0x577c,	// (0x00071ec3) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0007ba2c) popup_call_status_window_g_ParamLimits

0xc59c,	// (0x00078ce3) aid_call2_pane

0x2ebc,	// (0x0006f603) msg_header_pane_g1

0x5d8f,	// (0x000724d6) postcard_address2_pane_ParamLimits

0x5d8f,	// (0x000724d6) postcard_address2_pane

0x5da1,	// (0x000724e8) postcard_message2_pane_ParamLimits

0x5da1,	// (0x000724e8) postcard_message2_pane

0x68ba,	// (0x00073001) message2_row_pane_ParamLimits

0x68ba,	// (0x00073001) message2_row_pane

0x68d7,	// (0x0007301e) address2_row_pane_ParamLimits

0x68d7,	// (0x0007301e) address2_row_pane

0x18de,	// (0x0006e025) postcard_message2_row_pane_g1

0x18e6,	// (0x0006e02d) postcard_message2_row_pane_t1

0x18de,	// (0x0006e025) address2_row_pane_g1

0x18e6,	// (0x0006e02d) address2_row_pane_t1

0x4677,	// (0x00070dbe) aid_size_cell_vorec

0x3cab,	// (0x000703f2) main_rss_pane

0x18f4,	// (0x0006e03b) rss_list_single_pane_ParamLimits

0x18f4,	// (0x0006e03b) rss_list_single_pane

0x1902,	// (0x0006e049) rss_list_single_pane_t1

0x1902,	// (0x0006e049) rss_list_single_pane_t2

0x0001,

0xf5a8,	// (0x0007bcef) rss_list_single_pane_t

0x3cab,	// (0x000703f2) main_camera2_pane

0x3cab,	// (0x000703f2) main_video2_pane

0xcefb,	// (0x00079642) cams_zoom_pane_cp2_ParamLimits

0xcefb,	// (0x00079642) cams_zoom_pane_cp2

0xcefb,	// (0x00079642) image2_vga_pane_ParamLimits

0xcefb,	// (0x00079642) image2_vga_pane

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g1_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g1

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g2_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g2

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g3_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g3

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g4_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g4

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g5_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g5

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g6_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g6

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g7_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g7

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g8_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g8

0x0008,

0xf5c4,	// (0x0007bd0b) main_camera2_pane_g_ParamLimits

0xf5c4,	// (0x0007bd0b) main_camera2_pane_g

0x6a81,	// (0x000731c8) main_camera2_pane_t1_ParamLimits

0x6a81,	// (0x000731c8) main_camera2_pane_t1

0x6a81,	// (0x000731c8) main_camera2_pane_t2_ParamLimits

0x6a81,	// (0x000731c8) main_camera2_pane_t2

0x6a81,	// (0x000731c8) main_camera2_pane_t3_ParamLimits

0x6a81,	// (0x000731c8) main_camera2_pane_t3

0x6a81,	// (0x000731c8) main_camera2_pane_t4_ParamLimits

0x6a81,	// (0x000731c8) main_camera2_pane_t4

0x0006,

0xf5d7,	// (0x0007bd1e) main_camera2_pane_t_ParamLimits

0xf5d7,	// (0x0007bd1e) main_camera2_pane_t

0x1fdb,	// (0x0006e722) cams_zoom_pane_cp4_ParamLimits

0x1fdb,	// (0x0006e722) cams_zoom_pane_cp4

0xcf1d,	// (0x00079664) image2_cif_pane_ParamLimits

0xcf1d,	// (0x00079664) image2_cif_pane

0xba4a,	// (0x00078191) image2_subqcif_pane_ParamLimits

0xba4a,	// (0x00078191) image2_subqcif_pane

0x6a95,	// (0x000731dc) main_video2_pane_g1_ParamLimits

0x6a95,	// (0x000731dc) main_video2_pane_g1

0x6a95,	// (0x000731dc) main_video2_pane_g2_ParamLimits

0x6a95,	// (0x000731dc) main_video2_pane_g2

0x6a95,	// (0x000731dc) main_video2_pane_g3_ParamLimits

0x6a95,	// (0x000731dc) main_video2_pane_g3

0x6a95,	// (0x000731dc) main_video2_pane_g4_ParamLimits

0x6a95,	// (0x000731dc) main_video2_pane_g4

0x6a95,	// (0x000731dc) main_video2_pane_g5_ParamLimits

0x6a95,	// (0x000731dc) main_video2_pane_g5

0x6a95,	// (0x000731dc) main_video2_pane_g6_ParamLimits

0x6a95,	// (0x000731dc) main_video2_pane_g6

0x0005,

0xf5e6,	// (0x0007bd2d) main_video2_pane_g_ParamLimits

0xf5e6,	// (0x0007bd2d) main_video2_pane_g

0x6aa3,	// (0x000731ea) main_video2_pane_t1_ParamLimits

0x6aa3,	// (0x000731ea) main_video2_pane_t1

0x6aa3,	// (0x000731ea) main_video2_pane_t2_ParamLimits

0x6aa3,	// (0x000731ea) main_video2_pane_t2

0x6aa3,	// (0x000731ea) main_video2_pane_t3_ParamLimits

0x6aa3,	// (0x000731ea) main_video2_pane_t3

0x0002,

0xf5f3,	// (0x0007bd3a) main_video2_pane_t_ParamLimits

0xf5f3,	// (0x0007bd3a) main_video2_pane_t

0x6402,	// (0x00072b49) call_muted_g2

0x0001,

0xf59a,	// (0x0007bce1) call_muted_g

0x3cab,	// (0x000703f2) main_mup2_pane

0x1992,	// (0x0006e0d9) main_mup2_pane_g1_ParamLimits

0x1992,	// (0x0006e0d9) main_mup2_pane_g1

0x1992,	// (0x0006e0d9) main_mup2_pane_g2_ParamLimits

0x1992,	// (0x0006e0d9) main_mup2_pane_g2

0xbed0,	// (0x00078617) main_mup_pane_g13_cp1

0x35b6,	// (0x0006fcfd) mup_volume_pane_cp1

0x1992,	// (0x0006e0d9) main_mup2_pane_g4_ParamLimits

0x1992,	// (0x0006e0d9) main_mup2_pane_g4

0x1992,	// (0x0006e0d9) main_mup2_pane_g5_ParamLimits

0x1992,	// (0x0006e0d9) main_mup2_pane_g5

0x1992,	// (0x0006e0d9) main_mup2_pane_g6_ParamLimits

0x1992,	// (0x0006e0d9) main_mup2_pane_g6

0x1992,	// (0x0006e0d9) main_mup2_pane_g7_ParamLimits

0x1992,	// (0x0006e0d9) main_mup2_pane_g7

0x0006,

0xf5fa,	// (0x0007bd41) main_mup2_pane_g_ParamLimits

0xf5fa,	// (0x0007bd41) main_mup2_pane_g

0x19a0,	// (0x0006e0e7) main_mup2_pane_t1_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup2_pane_t1

0x19a0,	// (0x0006e0e7) main_mup2_pane_t2_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup2_pane_t2

0x19a0,	// (0x0006e0e7) main_mup2_pane_t3_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup2_pane_t3

0x19a0,	// (0x0006e0e7) main_mup2_pane_t4_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup2_pane_t4

0x19a0,	// (0x0006e0e7) main_mup2_pane_t5_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup2_pane_t5

0x19a0,	// (0x0006e0e7) main_mup2_pane_t6_ParamLimits

0x19a0,	// (0x0006e0e7) main_mup2_pane_t6

0x0005,

0xf609,	// (0x0007bd50) main_mup2_pane_t_ParamLimits

0xf609,	// (0x0007bd50) main_mup2_pane_t

0x18b5,	// (0x0006dffc) mup2_visualizer_pane_ParamLimits

0x18b5,	// (0x0006dffc) mup2_visualizer_pane

0x18b5,	// (0x0006dffc) mup_progress_pane_cp_ParamLimits

0x18b5,	// (0x0006dffc) mup_progress_pane_cp

0x19b4,	// (0x0006e0fb) mup_volume_pane_cp_ParamLimits

0x19b4,	// (0x0006e0fb) mup_volume_pane_cp

0xbbd0,	// (0x00078317) mup2_visualizer_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) mup2_visualizer_pane_g1

0xbbde,	// (0x00078325) mup2_visualizer_pane_g2_ParamLimits

0xbbde,	// (0x00078325) mup2_visualizer_pane_g2

0xbbde,	// (0x00078325) mup2_visualizer_pane_g3_ParamLimits

0xbbde,	// (0x00078325) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0007b82b) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0007b82b) mup2_visualizer_pane_g

0xcd13,	// (0x0007945a) aid_size_cell_fmradio

0x65b4,	// (0x00072cfb) aid_height_parent_landcape

0xc018,	// (0x0007875f) wml_content_pane_cp

0xc020,	// (0x00078767) wml_tabs_pane

0xc029,	// (0x00078770) popup_wml_miniature_window

0xc031,	// (0x00078778) scroll_pane_cp021

0xc045,	// (0x0007878c) wml_content_pane_comp8

0x3cab,	// (0x000703f2) bg_popup_sub_pane_cp05

0x19ca,	// (0x0006e111) popup_wml_miniature_window_g1

0x19d2,	// (0x0006e119) wml_miniature_view_pane

0x6ab7,	// (0x000731fe) aid_size_wml_view

0x6abf,	// (0x00073206) wml_miniature_view_pane_g1

0x6ac8,	// (0x0007320f) wml_miniature_view_pane_g2

0x6ad1,	// (0x00073218) wml_miniature_view_pane_g3

0x6ad9,	// (0x00073220) wml_miniature_view_pane_g4

0x6ae1,	// (0x00073228) wml_miniature_view_pane_g5

0x6ae9,	// (0x00073230) wml_miniature_view_pane_g6

0x6af1,	// (0x00073238) wml_miniature_view_pane_g7

0x6af9,	// (0x00073240) wml_miniature_view_pane_g8

0x0007,

0xf616,	// (0x0007bd5d) wml_miniature_view_pane_g

0x19da,	// (0x0006e121) background_graphic_ParamLimits

0x19da,	// (0x0006e121) background_graphic

0x19e6,	// (0x0006e12d) wml_tabs_2_pane

0x19ef,	// (0x0006e136) wml_tabs_3_pane_ParamLimits

0x19ef,	// (0x0006e136) wml_tabs_3_pane

0x1a01,	// (0x0006e148) wml_tabs_4_pane_ParamLimits

0x1a01,	// (0x0006e148) wml_tabs_4_pane

0x1a17,	// (0x0006e15e) wml_tabs_5_pane_ParamLimits

0x1a17,	// (0x0006e15e) wml_tabs_5_pane

0x1a31,	// (0x0006e178) wml_tabs_pane_g2_ParamLimits

0x1a31,	// (0x0006e178) wml_tabs_pane_g2

0x1a46,	// (0x0006e18d) wml_tabs_pane_g3_ParamLimits

0x1a46,	// (0x0006e18d) wml_tabs_pane_g3

0x1a5b,	// (0x0006e1a2) wml_tabs_2_active_pane_ParamLimits

0x1a5b,	// (0x0006e1a2) wml_tabs_2_active_pane

0x1a5b,	// (0x0006e1a2) wml_tabs_2_passive_pane_ParamLimits

0x1a5b,	// (0x0006e1a2) wml_tabs_2_passive_pane

0x6b01,	// (0x00073248) wml_tabs_3_active_pane_cp_ParamLimits

0x6b01,	// (0x00073248) wml_tabs_3_active_pane_cp

0x6b16,	// (0x0007325d) wml_tabs_3_passive_pane_ParamLimits

0x6b16,	// (0x0007325d) wml_tabs_3_passive_pane

0x6b29,	// (0x00073270) wml_tabs_3_passive_pane_cp_ParamLimits

0x6b29,	// (0x00073270) wml_tabs_3_passive_pane_cp

0x6b40,	// (0x00073287) tabs_4_active_pane

0x6b48,	// (0x0007328f) tabs_4_passive_pane

0x6b52,	// (0x00073299) tabs_4_passive_pane_cp

0x6b5a,	// (0x000732a1) tabs_4_passive_pane_cp2

0x62f6,	// (0x00072a3d) aid_height_text

0x18b5,	// (0x0006dffc) mup_volume_cont_pane_ParamLimits

0x18b5,	// (0x0006dffc) mup_volume_cont_pane

0x35b6,	// (0x0006fcfd) aid_size_cell_pinb

0x35b6,	// (0x0006fcfd) aid_size_list_pinb

0x18b5,	// (0x0006dffc) mup2_volume_cont_pane_ParamLimits

0x18b5,	// (0x0006dffc) mup2_volume_cont_pane

0xcf2b,	// (0x00079672) mup2_volume_cont_pane_g1_ParamLimits

0xcf2b,	// (0x00079672) mup2_volume_cont_pane_g1

0x35c0,	// (0x0006fd07) aid_size_cell_touch_ParamLimits

0x35c0,	// (0x0006fd07) aid_size_cell_touch

0x37ed,	// (0x0006ff34) touch_pane_ParamLimits

0x37ed,	// (0x0006ff34) touch_pane

0x35b6,	// (0x0006fcfd) main_rss2_pane

0x1a72,	// (0x0006e1b9) listscroll_rss2_pane

0x1a7b,	// (0x0006e1c2) rss2_navigation_pane

0x1a83,	// (0x0006e1ca) list_rss2_pane

0xc724,	// (0x00078e6b) scroll_pane_cp22

0x1a8b,	// (0x0006e1d2) rss2_navigation_pane_g1

0x1a94,	// (0x0006e1db) rss2_navigation_pane_g2

0x1a9c,	// (0x0006e1e3) rss2_navigation_pane_g3

0x0002,

0xf627,	// (0x0007bd6e) rss2_navigation_pane_g

0x1aa4,	// (0x0006e1eb) rss2_navigation_pane_t1

0x6b64,	// (0x000732ab) rss2_list_single_pane_ParamLimits

0x6b64,	// (0x000732ab) rss2_list_single_pane

0x1ab2,	// (0x0006e1f9) rss2_list_single_pane_t2

0x1ac0,	// (0x0006e207) rss2_list_single_pane_t3_ParamLimits

0x1ac0,	// (0x0006e207) rss2_list_single_pane_t3

0x1add,	// (0x0006e224) rss2_list_single_pane_t4

0x5630,	// (0x00071d77) smil_status_pane_g1

0xba4a,	// (0x00078191) main_image2_pane_ParamLimits

0xba4a,	// (0x00078191) main_image2_pane

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g9_ParamLimits

0xeb9f,	// (0x0007b2e6) main_camera2_pane_g9

0x6a81,	// (0x000731c8) main_camera2_pane_t5_ParamLimits

0x6a81,	// (0x000731c8) main_camera2_pane_t5

0xcf09,	// (0x00079650) main_camera2_pane_t6_ParamLimits

0xcf09,	// (0x00079650) main_camera2_pane_t6

0x6b7a,	// (0x000732c1) main_image2_pane_g1_ParamLimits

0x6b7a,	// (0x000732c1) main_image2_pane_g1

0x5fc9,	// (0x00072710) smil2_video_pane_ParamLimits

0x5fc9,	// (0x00072710) smil2_video_pane

0xba01,	// (0x00078148) aid_zoom_text_primary_cp

0xba40,	// (0x00078187) popup_preview_fixed_window

0xbf81,	// (0x000786c8) im_reading_pane_g1

0x6a73,	// (0x000731ba) cams2_bc_adjust_pane_cp_ParamLimits

0x6a73,	// (0x000731ba) cams2_bc_adjust_pane_cp

0x18b5,	// (0x0006dffc) cams2_bc_adjust_pane_ParamLimits

0x18b5,	// (0x0006dffc) cams2_bc_adjust_pane

0xbed0,	// (0x00078617) cams2_bc_adjust_pane_g1

0x35b6,	// (0x0006fcfd) cams2_slider_pane

0xbed0,	// (0x00078617) cams2_slider_pane_g1

0xbed0,	// (0x00078617) cams2_slider_pane_g2

0x0006,

0xf62e,	// (0x0007bd75) cams2_slider_pane_g

0x3e27,	// (0x0007056e) calc_display_pane_ParamLimits

0x3e4c,	// (0x00070593) calc_paper_pane_ParamLimits

0x3e6f,	// (0x000705b6) grid_calc_pane_ParamLimits

0xc5fe,	// (0x00078d45) popup_clock_digital_window_t1_ParamLimits

0xccb0,	// (0x000793f7) main_image_pane_t1

0x3e09,	// (0x00070550) aid_size_cell_calc_ParamLimits

0x3e09,	// (0x00070550) aid_size_cell_calc

0x6606,	// (0x00072d4d) popup_blid_sat_info2_window_ParamLimits

0x6606,	// (0x00072d4d) popup_blid_sat_info2_window

0x1aeb,	// (0x0006e232) aid_size_cell_blid

0xcf1d,	// (0x00079664) bg_popup_window_pane_cp07

0x1b08,	// (0x0006e24f) grid_popup_blid_pane

0x1b12,	// (0x0006e259) heading_pane_cp05_ParamLimits

0x1b12,	// (0x0006e259) heading_pane_cp05

0x1bdc,	// (0x0006e323) cell_popup_blid_pane_ParamLimits

0x1bdc,	// (0x0006e323) cell_popup_blid_pane

0x1c00,	// (0x0006e347) cell_popup_blid_pane_g1

0x1c08,	// (0x0006e34f) cell_popup_blid_pane_t1

0x18b5,	// (0x0006dffc) mup2_indicator_pane_ParamLimits

0x18b5,	// (0x0006dffc) mup2_indicator_pane

0x35b6,	// (0x0006fcfd) mup2_visualizer_osc_pane

0x19b4,	// (0x0006e0fb) mup2_visualizer_spec_pane_ParamLimits

0x19b4,	// (0x0006e0fb) mup2_visualizer_spec_pane

0x35b6,	// (0x0006fcfd) mup2_spec_half_pane

0x35b6,	// (0x0006fcfd) mup2_spec_half_pane_cp

0x1c16,	// (0x0006e35d) mup2_spec_bar_pane_ParamLimits

0x1c16,	// (0x0006e35d) mup2_spec_bar_pane

0xbed0,	// (0x00078617) mup2_spec_bar_pane_g1

0x1c35,	// (0x0006e37c) mup2_spec_bar_pane_g2

0x0001,

0xf654,	// (0x0007bd9b) mup2_spec_bar_pane_g

0x35b6,	// (0x0006fcfd) mup2_osc_middle_pane

0xbed0,	// (0x00078617) mup2_visualizer_osc_pane_g1

0x385f,	// (0x0006ffa6) popup_number_entry_window_t1_ParamLimits

0x3872,	// (0x0006ffb9) popup_number_entry_window_t2_ParamLimits

0x3884,	// (0x0006ffcb) popup_number_entry_window_t3_ParamLimits

0x3896,	// (0x0006ffdd) popup_number_entry_window_t5_ParamLimits

0x3896,	// (0x0006ffdd) popup_number_entry_window_t5

0xf085,	// (0x0007b7cc) popup_number_entry_window_t_ParamLimits

0x38cb,	// (0x00070012) text_title_cp2_ParamLimits

0xcb8a,	// (0x000792d1) aid_hotspot_pointer_text2_pane

0xcbb0,	// (0x000792f7) main_viewer_pane_g9_ParamLimits

0xcbb0,	// (0x000792f7) main_viewer_pane_g9

0xc1ba,	// (0x00078901) cale_month_pane_t1_ParamLimits

0xc225,	// (0x0007896c) bg_cale_pane_ParamLimits

0xc23d,	// (0x00078984) list_cale_pane_ParamLimits

0xc24e,	// (0x00078995) listscroll_cale_day_pane_t1

0xc260,	// (0x000789a7) scroll_pane_cp09_ParamLimits

0x5a29,	// (0x00072170) main_mup_eq_pane_t1_ParamLimits

0x5a29,	// (0x00072170) main_mup_eq_pane_t1

0x5a43,	// (0x0007218a) main_mup_eq_pane_t2_ParamLimits

0x5a43,	// (0x0007218a) main_mup_eq_pane_t2

0x5a5d,	// (0x000721a4) main_mup_eq_pane_t3_ParamLimits

0x5a5d,	// (0x000721a4) main_mup_eq_pane_t3

0x5a79,	// (0x000721c0) main_mup_eq_pane_t4_ParamLimits

0x5a79,	// (0x000721c0) main_mup_eq_pane_t4

0x5a95,	// (0x000721dc) main_mup_eq_pane_t5_ParamLimits

0x5a95,	// (0x000721dc) main_mup_eq_pane_t5

0x5ab1,	// (0x000721f8) main_mup_eq_pane_t6_ParamLimits

0x5ab1,	// (0x000721f8) main_mup_eq_pane_t6

0x5ac5,	// (0x0007220c) main_mup_eq_pane_t7_ParamLimits

0x5ac5,	// (0x0007220c) main_mup_eq_pane_t7

0x5ad9,	// (0x00072220) main_mup_eq_pane_t8_ParamLimits

0x5ad9,	// (0x00072220) main_mup_eq_pane_t8

0x5aed,	// (0x00072234) main_mup_eq_pane_t9_ParamLimits

0x5aed,	// (0x00072234) main_mup_eq_pane_t9

0x5b07,	// (0x0007224e) main_mup_eq_pane_t10_ParamLimits

0x5b07,	// (0x0007224e) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0007bb2b) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0007bb2b) main_mup_eq_pane_t

0x5bb6,	// (0x000722fd) mup_equalizer_pane_cp5_ParamLimits

0x5bca,	// (0x00072311) mup_equalizer_pane_cp6_ParamLimits

0x5bde,	// (0x00072325) mup_equalizer_pane_cp7_ParamLimits

0x35b6,	// (0x0006fcfd) main_gallery_pane

0x1930,	// (0x0006e077) smil2_volume_pane

0x1938,	// (0x0006e07f) smil_status_volume_pane_g1_ParamLimits

0x194b,	// (0x0006e092) smil_status_volume_pane_g2_ParamLimits

0xced9,	// (0x00079620) smil_status_volume_pane_g3_ParamLimits

0xf5ad,	// (0x0007bcf4) smil_status_volume_pane_g_ParamLimits

0xcf1d,	// (0x00079664) bg_popup_window_pane_cp07_ParamLimits

0x1af3,	// (0x0006e23a) blid_firmament_pane

0xba4a,	// (0x00078191) aid_size_cell_gallery_ParamLimits

0xba4a,	// (0x00078191) aid_size_cell_gallery

0xba4a,	// (0x00078191) grid_gallery_pane_ParamLimits

0xba4a,	// (0x00078191) grid_gallery_pane

0xcf1d,	// (0x00079664) cell_gallery_pane_ParamLimits

0xcf1d,	// (0x00079664) cell_gallery_pane

0xba4a,	// (0x00078191) bg_cell_gallery_focus_pane_ParamLimits

0xba4a,	// (0x00078191) bg_cell_gallery_focus_pane

0xbbd0,	// (0x00078317) cell_gallery_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) cell_gallery_pane_g1

0xbbd0,	// (0x00078317) cell_gallery_pane_g2_ParamLimits

0xbbd0,	// (0x00078317) cell_gallery_pane_g2

0xbbd0,	// (0x00078317) cell_gallery_pane_g3_ParamLimits

0xbbd0,	// (0x00078317) cell_gallery_pane_g3

0xbbde,	// (0x00078325) cell_gallery_pane_g4_ParamLimits

0xbbde,	// (0x00078325) cell_gallery_pane_g4

0x0003,

0xf659,	// (0x0007bda0) cell_gallery_pane_g_ParamLimits

0xf659,	// (0x0007bda0) cell_gallery_pane_g

0x1c3f,	// (0x0006e386) bg_cell_gallery_focus_pane_g1

0x1c47,	// (0x0006e38e) bg_cell_gallery_focus_pane_g2

0x1c4f,	// (0x0006e396) bg_cell_gallery_focus_pane_g3

0x1c57,	// (0x0006e39e) bg_cell_gallery_focus_pane_g4

0x1c5f,	// (0x0006e3a6) bg_cell_gallery_focus_pane_g5

0x1c67,	// (0x0006e3ae) bg_cell_gallery_focus_pane_g6

0x1c6f,	// (0x0006e3b6) bg_cell_gallery_focus_pane_g7

0x1c77,	// (0x0006e3be) bg_cell_gallery_focus_pane_g8

0x0007,

0xf662,	// (0x0007bda9) bg_cell_gallery_focus_pane_g

0x1c7f,	// (0x0006e3c6) aid_firma_cardinal

0x1c93,	// (0x0006e3da) blid_firmament_pane_t1

0x1caa,	// (0x0006e3f1) blid_firmament_pane_t2

0x1cc1,	// (0x0006e408) blid_firmament_pane_t3

0x1cd8,	// (0x0006e41f) blid_firmament_pane_t4

0x0003,

0xf673,	// (0x0007bdba) blid_firmament_pane_t

0x1cef,	// (0x0006e436) blid_sat_info_pane

0xbed0,	// (0x00078617) blid_sat_info_pane_g1

0xbed0,	// (0x00078617) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0007bb1f) blid_sat_info_pane_g

0x1cff,	// (0x0006e446) blid_sat_info_pane_t1

0x1d0d,	// (0x0006e454) smil2_volume_content_pane

0x1d16,	// (0x0006e45d) smil2_volume_pane_g1

0x1d1e,	// (0x0006e465) smil2_volume_content_pane_g1

0x1d27,	// (0x0006e46e) smil2_volume_content_pane_g2

0x1d30,	// (0x0006e477) smil2_volume_content_pane_g3

0x1d39,	// (0x0006e480) smil2_volume_content_pane_g4

0x1d42,	// (0x0006e489) smil2_volume_content_pane_g5

0x1d4b,	// (0x0006e492) smil2_volume_content_pane_g6

0x1d54,	// (0x0006e49b) smil2_volume_content_pane_g7

0x1d5d,	// (0x0006e4a4) smil2_volume_content_pane_g8

0x1d66,	// (0x0006e4ad) smil2_volume_content_pane_g9

0x1d6f,	// (0x0006e4b6) smil2_volume_content_pane_g10

0x0009,

0xf67c,	// (0x0007bdc3) smil2_volume_content_pane_g

0x43f1,	// (0x00070b38) cale_week_day_heading_pane_t1_ParamLimits

0x441b,	// (0x00070b62) cale_week_day_heading_pane_t2_ParamLimits

0x444a,	// (0x00070b91) cale_week_day_heading_pane_t3_ParamLimits

0x4479,	// (0x00070bc0) cale_week_day_heading_pane_t4_ParamLimits

0x44a8,	// (0x00070bef) cale_week_day_heading_pane_t5_ParamLimits

0x44df,	// (0x00070c26) cale_week_day_heading_pane_t6_ParamLimits

0x4516,	// (0x00070c5d) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0007b8d3) cale_week_day_heading_pane_t_ParamLimits

0xbe3e,	// (0x00078585) bg_cale_side_pane_ParamLimits

0x4540,	// (0x00070c87) cale_week_time_pane_t1_ParamLimits

0x455a,	// (0x00070ca1) cale_week_time_pane_t2_ParamLimits

0x4574,	// (0x00070cbb) cale_week_time_pane_t3_ParamLimits

0x458e,	// (0x00070cd5) cale_week_time_pane_t4_ParamLimits

0x45a8,	// (0x00070cef) cale_week_time_pane_t5_ParamLimits

0x45c2,	// (0x00070d09) cale_week_time_pane_t6_ParamLimits

0x45dc,	// (0x00070d23) cale_week_time_pane_t7_ParamLimits

0x45f6,	// (0x00070d3d) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0007b8e2) cale_week_time_pane_t_ParamLimits

0x4616,	// (0x00070d5d) cell_cale_week_pane_g2_ParamLimits

0xbe3e,	// (0x00078585) bg_cale_side_pane_cp01_ParamLimits

0x5435,	// (0x00071b7c) cale_month_week_pane_t1_ParamLimits

0x544e,	// (0x00071b95) cale_month_week_pane_t2_ParamLimits

0x5467,	// (0x00071bae) cale_month_week_pane_t3_ParamLimits

0x5480,	// (0x00071bc7) cale_month_week_pane_t4_ParamLimits

0x5499,	// (0x00071be0) cale_month_week_pane_t5_ParamLimits

0x54b2,	// (0x00071bf9) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0007b9b0) cale_month_week_pane_t_ParamLimits

0xc1cc,	// (0x00078913) cell_cale_month_pane_g1_ParamLimits

0x35b6,	// (0x0006fcfd) main_cale_event_viewer_pane

0x35b6,	// (0x0006fcfd) listscroll_cale_event_viewer_pane

0x1d78,	// (0x0006e4bf) list_cale_ev_pane

0x1d80,	// (0x0006e4c7) scroll_pane_cp023

0x1d8c,	// (0x0006e4d3) field_cale_ev_pane_ParamLimits

0x1d8c,	// (0x0006e4d3) field_cale_ev_pane

0x1daa,	// (0x0006e4f1) field_cale_ev_content_pane_ParamLimits

0x1daa,	// (0x0006e4f1) field_cale_ev_content_pane

0x1db6,	// (0x0006e4fd) field_cale_ev_pane_g1_ParamLimits

0x1db6,	// (0x0006e4fd) field_cale_ev_pane_g1

0x1dc2,	// (0x0006e509) field_cale_ev_pane_g2_ParamLimits

0x1dc2,	// (0x0006e509) field_cale_ev_pane_g2

0x1dda,	// (0x0006e521) field_cale_ev_pane_g3_ParamLimits

0x1dda,	// (0x0006e521) field_cale_ev_pane_g3

0x0002,

0xf691,	// (0x0007bdd8) field_cale_ev_pane_g_ParamLimits

0xf691,	// (0x0007bdd8) field_cale_ev_pane_g

0x1df2,	// (0x0006e539) field_cale_ev_pane_t1_ParamLimits

0x1df2,	// (0x0006e539) field_cale_ev_pane_t1

0x1e09,	// (0x0006e550) field_cale_ev_content_pane_t1_ParamLimits

0x1e09,	// (0x0006e550) field_cale_ev_content_pane_t1

0xcad2,	// (0x00079219) bg_button_pane_cp01

0x411e,	// (0x00070865) listscroll_cale_week_pane_ParamLimits

0xbde9,	// (0x00078530) popup_toolbar_window_cp01

0xbe0f,	// (0x00078556) listscroll_cale_week_pane_t1_ParamLimits

0x411e,	// (0x00070865) listscroll_cale_day_pane_ParamLimits

0xbde9,	// (0x00078530) popup_toolbar_window_cp02

0xc24e,	// (0x00078995) listscroll_cale_day_pane_t1_ParamLimits

0x411e,	// (0x00070865) main_cale_month_pane_ParamLimits

0xcec4,	// (0x0007960b) popup_toolbar_window_cp03_ParamLimits

0xcec4,	// (0x0007960b) popup_toolbar_window_cp03

0x5e91,	// (0x000725d8) main_image_pane_g2_ParamLimits

0x5e91,	// (0x000725d8) main_image_pane_g2

0x5ea2,	// (0x000725e9) main_image_pane_g3_ParamLimits

0x5ea2,	// (0x000725e9) main_image_pane_g3

0x0002,

0xf476,	// (0x0007bbbd) main_image_pane_g_ParamLimits

0xf476,	// (0x0007bbbd) main_image_pane_g

0xccb0,	// (0x000793f7) main_image_pane_t1_ParamLimits

0x5eb3,	// (0x000725fa) main_image_pane_t2_ParamLimits

0x5eb3,	// (0x000725fa) main_image_pane_t2

0x5ec5,	// (0x0007260c) main_image_pane_t3_ParamLimits

0x5ec5,	// (0x0007260c) main_image_pane_t3

0x5eed,	// (0x00072634) main_image_pane_t4_ParamLimits

0x5eed,	// (0x00072634) main_image_pane_t4

0x0003,

0xf47d,	// (0x0007bbc4) main_image_pane_t_ParamLimits

0xf47d,	// (0x0007bbc4) main_image_pane_t

0x5f0d,	// (0x00072654) popup_image_details_window_cp01

0x5f17,	// (0x0007265e) popup_toobar_trans_pane_cp01_ParamLimits

0x5f17,	// (0x0007265e) popup_toobar_trans_pane_cp01

0x66d7,	// (0x00072e1e) popup_image_details_window_ParamLimits

0x66d7,	// (0x00072e1e) popup_image_details_window

0xce97,	// (0x000795de) popup_image_focus_window

0xcefb,	// (0x00079642) camera2_autofocus_pane_ParamLimits

0xcefb,	// (0x00079642) camera2_autofocus_pane

0x35b6,	// (0x0006fcfd) bg_popup_sub_pane_cp06

0x1e27,	// (0x0006e56e) popup_image_focus_window_g1

0x1e2f,	// (0x0006e576) popup_image_focus_window_g2

0x1e37,	// (0x0006e57e) popup_image_focus_window_g3

0x1e3f,	// (0x0006e586) popup_image_focus_window_g4

0x0003,

0xf698,	// (0x0007bddf) popup_image_focus_window_g

0x1e47,	// (0x0006e58e) popup_image_focus_window_t1

0x1e55,	// (0x0006e59c) popup_image_focus_window_t2

0x1e65,	// (0x0006e5ac) popup_image_focus_window_t3

0x0002,

0xf6a1,	// (0x0007bde8) popup_image_focus_window_t

0xbbd0,	// (0x00078317) camera2_autofocus_pane_g1

0xba4a,	// (0x00078191) bg_tb_trans_pane_cp01

0x1e73,	// (0x0006e5ba) popup_image_details_window_g1

0x1e86,	// (0x0006e5cd) popup_image_details_window_g2

0x0002,

0xf6b3,	// (0x0007bdfa) popup_image_details_window_g

0x1eaf,	// (0x0006e5f6) popup_image_details_window_t1

0x1ec1,	// (0x0006e608) popup_image_details_window_t2

0x1eda,	// (0x0006e621) popup_image_details_window_t3

0x1eee,	// (0x0006e635) popup_image_details_window_t4

0x1f09,	// (0x0006e650) popup_image_details_window_t5

0x0004,

0xf6ba,	// (0x0007be01) popup_image_details_window_t

0xbc36,	// (0x0007837d) bg_calc_paper_pane_ParamLimits

0x35b6,	// (0x0006fcfd) grid_highlight_pane_cp013

0xbc4a,	// (0x00078391) list_calc_pane_ParamLimits

0xbc5c,	// (0x000783a3) scroll_pane_cp024

0xbc64,	// (0x000783ab) bg_calc_display_pane_ParamLimits

0x3f6d,	// (0x000706b4) calc_display_pane_t1_ParamLimits

0x3f7f,	// (0x000706c6) calc_display_pane_t2_ParamLimits

0xbc70,	// (0x000783b7) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0007b853) calc_display_pane_t_ParamLimits

0x4039,	// (0x00070780) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0007b870) cell_calc_pane_g

0x4042,	// (0x00070789) cell_calc_pane_t1

0xbcdd,	// (0x00078424) grid_highlight_pane_cp02_ParamLimits

0xbcf3,	// (0x0007843a) toolbar_button_pane_cp01_ParamLimits

0xbcf3,	// (0x0007843a) toolbar_button_pane_cp01

0xccf5,	// (0x0007943c) temp_image_control_pane_ParamLimits

0xccf5,	// (0x0007943c) temp_image_control_pane

0xba4a,	// (0x00078191) main_mp3_pane

0x1f23,	// (0x0006e66a) temp_image_control_pane_g1_ParamLimits

0x1f23,	// (0x0006e66a) temp_image_control_pane_g1

0x1f31,	// (0x0006e678) temp_image_control_pane_g2_ParamLimits

0x1f31,	// (0x0006e678) temp_image_control_pane_g2

0x1f43,	// (0x0006e68a) temp_image_control_pane_g3_ParamLimits

0x1f43,	// (0x0006e68a) temp_image_control_pane_g3

0x6b90,	// (0x000732d7) temp_image_control_pane_g4_ParamLimits

0x6b90,	// (0x000732d7) temp_image_control_pane_g4

0x0003,

0xf6c5,	// (0x0007be0c) temp_image_control_pane_g_ParamLimits

0xf6c5,	// (0x0007be0c) temp_image_control_pane_g

0x1f23,	// (0x0006e66a) main_mp3_pane_g1

0x6ba3,	// (0x000732ea) main_mp3_pane_g2

0x0007,

0xf6ce,	// (0x0007be15) main_mp3_pane_g

0x1f78,	// (0x0006e6bf) main_mp3_pane_t1

0xbbde,	// (0x00078325) main_camera_pane_g8_ParamLimits

0xbbde,	// (0x00078325) main_camera_pane_g8

0x47e4,	// (0x00070f2b) main_video_pane_g7_ParamLimits

0x47e4,	// (0x00070f2b) main_video_pane_g7

0xca21,	// (0x00079168) main_camera2_pane_t7_ParamLimits

0xca21,	// (0x00079168) main_camera2_pane_t7

0xbfd8,	// (0x0007871f) scroll_pane_cp025_ParamLimits

0xbfd8,	// (0x0007871f) scroll_pane_cp025

0xbfec,	// (0x00078733) scroll_pane_cp026_ParamLimits

0xbfec,	// (0x00078733) scroll_pane_cp026

0xbffb,	// (0x00078742) wml_content_pane_ParamLimits

0x35b6,	// (0x0006fcfd) main_touch_calib_pane

0x6c77,	// (0x000733be) main_touch_calib_pane_g1

0x6c89,	// (0x000733d0) main_touch_calib_pane_g2

0x6c9b,	// (0x000733e2) main_touch_calib_pane_g3

0x6cad,	// (0x000733f4) main_touch_calib_pane_g4

0x0003,

0xf6ec,	// (0x0007be33) main_touch_calib_pane_g

0x6cbf,	// (0x00073406) main_touch_calib_pane_t1

0x6cd9,	// (0x00073420) main_touch_calib_pane_t2

0x0004,

0xf6f5,	// (0x0007be3c) main_touch_calib_pane_t

0xc7f3,	// (0x00078f3a) mup_progress_pane_cp02

0xc828,	// (0x00078f6f) navi_pane_g1

0xc8e3,	// (0x0007902a) navi_pane_mp_t3

0xba4a,	// (0x00078191) main_mp3_pane_ParamLimits

0x6862,	// (0x00072fa9) navi_pane_ParamLimits

0x1f23,	// (0x0006e66a) main_mp3_pane_g1_ParamLimits

0x6ba3,	// (0x000732ea) main_mp3_pane_g2_ParamLimits

0x6bb1,	// (0x000732f8) main_mp3_pane_g3_ParamLimits

0x6bb1,	// (0x000732f8) main_mp3_pane_g3

0x6bbf,	// (0x00073306) main_mp3_pane_g4_ParamLimits

0x6bbf,	// (0x00073306) main_mp3_pane_g4

0xbbd0,	// (0x00078317) main_mp3_pane_g5_ParamLimits

0xbbd0,	// (0x00078317) main_mp3_pane_g5

0x1f53,	// (0x0006e69a) main_mp3_pane_g6_ParamLimits

0x1f53,	// (0x0006e69a) main_mp3_pane_g6

0x1f60,	// (0x0006e6a7) main_mp3_pane_g7_ParamLimits

0x1f60,	// (0x0006e6a7) main_mp3_pane_g7

0x1f6c,	// (0x0006e6b3) main_mp3_pane_g8_ParamLimits

0x1f6c,	// (0x0006e6b3) main_mp3_pane_g8

0xf6ce,	// (0x0007be15) main_mp3_pane_g_ParamLimits

0x6bcb,	// (0x00073312) main_mp3_pane_t2

0x6bd9,	// (0x00073320) main_mp3_pane_t3

0x1f86,	// (0x0006e6cd) main_mp3_pane_t4

0x1f94,	// (0x0006e6db) main_mp3_pane_t5

0x0005,

0xf6df,	// (0x0007be26) main_mp3_pane_t

0x1fa2,	// (0x0006e6e9) mup_progress_pane_cp01

0xba01,	// (0x00078148) aid_zoom_text_secondary2

0x1d78,	// (0x0006e4bf) list_cale_ev2_pane

0x1d80,	// (0x0006e4c7) scroll_pane_cp023_ParamLimits

0x6d2f,	// (0x00073476) field_cale_ev2_pane_ParamLimits

0x6d2f,	// (0x00073476) field_cale_ev2_pane

0xcf41,	// (0x00079688) field_cale_ev2_pane_g1_ParamLimits

0xcf41,	// (0x00079688) field_cale_ev2_pane_g1

0xcf4d,	// (0x00079694) field_cale_ev2_pane_g2_ParamLimits

0xcf4d,	// (0x00079694) field_cale_ev2_pane_g2

0xcf65,	// (0x000796ac) field_cale_ev2_pane_g3_ParamLimits

0xcf65,	// (0x000796ac) field_cale_ev2_pane_g3

0x0003,

0xf700,	// (0x0007be47) field_cale_ev2_pane_g_ParamLimits

0xf700,	// (0x0007be47) field_cale_ev2_pane_g

0xcf89,	// (0x000796d0) field_cale_ev2_pane_t1_ParamLimits

0xcf89,	// (0x000796d0) field_cale_ev2_pane_t1

0xcfa0,	// (0x000796e7) field_cale_ev2_pane_t2_ParamLimits

0xcfa0,	// (0x000796e7) field_cale_ev2_pane_t2

0x0001,

0xf709,	// (0x0007be50) field_cale_ev2_pane_t_ParamLimits

0xf709,	// (0x0007be50) field_cale_ev2_pane_t

0x5d45,	// (0x0007248c) main_postcard_pane_g5_ParamLimits

0x5d45,	// (0x0007248c) main_postcard_pane_g5

0x5d5b,	// (0x000724a2) main_postcard_pane_g6_ParamLimits

0x5d5b,	// (0x000724a2) main_postcard_pane_g6

0xba4a,	// (0x00078191) camera2_autofocus_pane_cp_ParamLimits

0xba4a,	// (0x00078191) camera2_autofocus_pane_cp

0xba4a,	// (0x00078191) main_mup3_pane

0x6d94,	// (0x000734db) main_mup3_pane_g1_ParamLimits

0x6d94,	// (0x000734db) main_mup3_pane_g1

0x6db6,	// (0x000734fd) main_mup3_pane_g2_ParamLimits

0x6db6,	// (0x000734fd) main_mup3_pane_g2

0x6e36,	// (0x0007357d) main_mup3_pane_g3_ParamLimits

0x6e36,	// (0x0007357d) main_mup3_pane_g3

0x6e7c,	// (0x000735c3) main_mup3_pane_g4_ParamLimits

0x6e7c,	// (0x000735c3) main_mup3_pane_g4

0x6ec2,	// (0x00073609) main_mup3_pane_g5_ParamLimits

0x6ec2,	// (0x00073609) main_mup3_pane_g5

0x6f08,	// (0x0007364f) main_mup3_pane_g6_ParamLimits

0x6f08,	// (0x0007364f) main_mup3_pane_g6

0xbbde,	// (0x00078325) main_mup3_pane_g7_ParamLimits

0xbbde,	// (0x00078325) main_mup3_pane_g7

0x0007,

0xf719,	// (0x0007be60) main_mup3_pane_g_ParamLimits

0xf719,	// (0x0007be60) main_mup3_pane_g

0x6f86,	// (0x000736cd) main_mup3_pane_t1_ParamLimits

0x6f86,	// (0x000736cd) main_mup3_pane_t1

0x6ffa,	// (0x00073741) main_mup3_pane_t2_ParamLimits

0x6ffa,	// (0x00073741) main_mup3_pane_t2

0x70ce,	// (0x00073815) main_mup3_pane_t4_ParamLimits

0x70ce,	// (0x00073815) main_mup3_pane_t4

0x7124,	// (0x0007386b) main_mup3_pane_t5_ParamLimits

0x7124,	// (0x0007386b) main_mup3_pane_t5

0x71e0,	// (0x00073927) main_mup3_pane_t6_ParamLimits

0x71e0,	// (0x00073927) main_mup3_pane_t6

0x0005,

0xf72a,	// (0x0007be71) main_mup3_pane_t_ParamLimits

0xf72a,	// (0x0007be71) main_mup3_pane_t

0x7298,	// (0x000739df) mup3_progress_pane_ParamLimits

0x7298,	// (0x000739df) mup3_progress_pane

0x7324,	// (0x00073a6b) popup_mup3_control_window_ParamLimits

0x7324,	// (0x00073a6b) popup_mup3_control_window

0x1faa,	// (0x0006e6f1) popup_mup3_text_window

0x7356,	// (0x00073a9d) mup3_progress_pane_t1

0x7375,	// (0x00073abc) mup3_progress_pane_t2

0x1fb2,	// (0x0006e6f9) mup3_progress_pane_t3

0x0002,

0xf737,	// (0x0007be7e) mup3_progress_pane_t

0x7394,	// (0x00073adb) mup_progress_pane_cp03

0x35b6,	// (0x0006fcfd) bg_tb_trans_pane_cp04

0x73a4,	// (0x00073aeb) mup3_volume_pane

0x73ac,	// (0x00073af3) popup_mup3_control_window_g1

0x73b5,	// (0x00073afc) mup3_volume_pane_g1

0x73be,	// (0x00073b05) mup3_volume_pane_g2

0x73c7,	// (0x00073b0e) mup3_volume_pane_g3

0x0002,

0xf73e,	// (0x0007be85) mup3_volume_pane_g

0x35b6,	// (0x0006fcfd) bg_tb_trans_pane_cp03

0x73d0,	// (0x00073b17) popup_mup3_text_window_g1

0x73d8,	// (0x00073b1f) popup_mup3_text_window_t1

0xbcbe,	// (0x00078405) list_calc_item_pane_g1_ParamLimits

0x1a69,	// (0x0006e1b0) mup_volume_pane_cp_g1

0x6cf3,	// (0x0007343a) main_touch_calib_pane_t3

0x6d07,	// (0x0007344e) main_touch_calib_pane_t4

0x6d1b,	// (0x00073462) main_touch_calib_pane_t5

0xb9dd,	// (0x00078124) aid_cell_size_toolbar2

0xb9e5,	// (0x0007812c) aid_popup3_width_pane

0xb9f1,	// (0x00078138) aid_zoom_text_msg_primary

0x46bf,	// (0x00070e06) vorec_t7

0xbc82,	// (0x000783c9) bg_calc_paper_pane_g1_ParamLimits

0xbc8e,	// (0x000783d5) bg_calc_paper_pane_g2_ParamLimits

0xbc9a,	// (0x000783e1) bg_calc_paper_pane_g3_ParamLimits

0xbca6,	// (0x000783ed) bg_calc_paper_pane_g4_ParamLimits

0xbcb2,	// (0x000783f9) bg_calc_paper_pane_g5_ParamLimits

0x3fc6,	// (0x0007070d) bg_calc_paper_pane_g6_ParamLimits

0x3fd5,	// (0x0007071c) bg_calc_paper_pane_g7_ParamLimits

0x3fe4,	// (0x0007072b) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0007b85a) bg_calc_paper_pane_g_ParamLimits

0x3ff7,	// (0x0007073e) calc_bg_paper_pane_g9_ParamLimits

0xba4a,	// (0x00078191) image_qvga_pane_ParamLimits

0xba4a,	// (0x00078191) image_qvga_pane

0xbb63,	// (0x000782aa) bg_popup_sub_pane_cp04_ParamLimits

0xcc2c,	// (0x00079373) popup_mup_playback_window_g1_ParamLimits

0xcc38,	// (0x0007937f) popup_mup_playback_window_t1_ParamLimits

0xcc4d,	// (0x00079394) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x0007bbb8) popup_mup_playback_window_t_ParamLimits

0xbbde,	// (0x00078325) main_mup2_pane_g3_ParamLimits

0xbbde,	// (0x00078325) main_mup2_pane_g3

0x49eb,	// (0x00071132) popup_toolbar_window_cp04

0x0b68,	// (0x0006d2af) popup_call2_audio_second_window_g3_ParamLimits

0x0b68,	// (0x0006d2af) popup_call2_audio_second_window_g3

0x0f72,	// (0x0006d6b9) popup_call2_audio_first_window_g4_ParamLimits

0x0f72,	// (0x0006d6b9) popup_call2_audio_first_window_g4

0x1599,	// (0x0006dce0) popup_call2_audio_in_window_g4_ParamLimits

0x1599,	// (0x0006dce0) popup_call2_audio_in_window_g4

0x5e73,	// (0x000725ba) aid_area_sk_bg_cut_ParamLimits

0x5e73,	// (0x000725ba) aid_area_sk_bg_cut

0xcc62,	// (0x000793a9) aid_area_sk_bg_cut_2_ParamLimits

0xcc62,	// (0x000793a9) aid_area_sk_bg_cut_2

0x35b6,	// (0x0006fcfd) aid_placing_details_win

0x35b6,	// (0x0006fcfd) aid_placing_details_win_2

0xbbd0,	// (0x00078317) camera2_autofocus_pane_g1_ParamLimits

0x3786,	// (0x0006fecd) popup_fixed_preview_cale_window_ParamLimits

0x3786,	// (0x0006fecd) popup_fixed_preview_cale_window

0xc96a,	// (0x000790b1) navi_slider_pane_g3

0xc973,	// (0x000790ba) navi_slider_pane_g4

0xc97c,	// (0x000790c3) navi_slider_pane_g5

0xc96a,	// (0x000790b1) navi_slider_pane_g6

0xc985,	// (0x000790cc) navi_slider_pane_g7

0xca97,	// (0x000791de) mup_scale_pane_g3

0xcaa0,	// (0x000791e7) mup_scale_pane_g4

0xcaa9,	// (0x000791f0) mup_scale_pane_g5

0x5bf2,	// (0x00072339) mup_scale_pane_g6

0x5bfb,	// (0x00072342) mup_scale_pane_g7

0xbed0,	// (0x00078617) cams2_slider_pane_g3

0xbed0,	// (0x00078617) cams2_slider_pane_g4

0xbed0,	// (0x00078617) cams2_slider_pane_g5

0xbed0,	// (0x00078617) cams2_slider_pane_g6

0xbed0,	// (0x00078617) cams2_slider_pane_g7

0xbed0,	// (0x00078617) camera2_autofocus_pane_cp_g1

0x18a9,	// (0x0006dff0) bg_popup_preview_window_pane_cp02_ParamLimits

0x18a9,	// (0x0006dff0) bg_popup_preview_window_pane_cp02

0x73e6,	// (0x00073b2d) list_fp_cale_pane_ParamLimits

0x73e6,	// (0x00073b2d) list_fp_cale_pane

0x73f2,	// (0x00073b39) popup_fixed_preview_cale_window_t1_ParamLimits

0x73f2,	// (0x00073b39) popup_fixed_preview_cale_window_t1

0x7404,	// (0x00073b4b) popup_fixed_preview_cale_window_t2_ParamLimits

0x7404,	// (0x00073b4b) popup_fixed_preview_cale_window_t2

0x7419,	// (0x00073b60) popup_fixed_preview_cale_window_t3_ParamLimits

0x7419,	// (0x00073b60) popup_fixed_preview_cale_window_t3

0x0002,

0xf745,	// (0x0007be8c) popup_fixed_preview_cale_window_t_ParamLimits

0xf745,	// (0x0007be8c) popup_fixed_preview_cale_window_t

0x743a,	// (0x00073b81) list_single_fp_cale_pane_ParamLimits

0x743a,	// (0x00073b81) list_single_fp_cale_pane

0x7450,	// (0x00073b97) list_single_fp_cale_pane_g1_ParamLimits

0x7450,	// (0x00073b97) list_single_fp_cale_pane_g1

0x745c,	// (0x00073ba3) list_single_fp_cale_pane_g2_ParamLimits

0x745c,	// (0x00073ba3) list_single_fp_cale_pane_g2

0x0002,

0xf74c,	// (0x0007be93) list_single_fp_cale_pane_g_ParamLimits

0xf74c,	// (0x0007be93) list_single_fp_cale_pane_g

0x7475,	// (0x00073bbc) list_single_fp_cale_pane_t1_ParamLimits

0x7475,	// (0x00073bbc) list_single_fp_cale_pane_t1

0x7487,	// (0x00073bce) list_single_fp_cale_pane_t2_ParamLimits

0x7487,	// (0x00073bce) list_single_fp_cale_pane_t2

0x0001,

0xf753,	// (0x0007be9a) list_single_fp_cale_pane_t_ParamLimits

0xf753,	// (0x0007be9a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x35b6,	// (0x0006fcfd) main_dialer_pane

0x35b6,	// (0x0006fcfd) aid_cell_size_keypad

0x35b6,	// (0x0006fcfd) dialer_ne_pane

0x35b6,	// (0x0006fcfd) grid_dialer_command_1_pane

0x35b6,	// (0x0006fcfd) grid_dialer_command_2_pane

0x35b6,	// (0x0006fcfd) grid_dialer_keypad_pane

0x74ba,	// (0x00073c01) bg_popup_call_pane_cp06_ParamLimits

0x74ba,	// (0x00073c01) bg_popup_call_pane_cp06

0x74ba,	// (0x00073c01) dialer_ne_clear_pane_ParamLimits

0x74ba,	// (0x00073c01) dialer_ne_clear_pane

0xbed0,	// (0x00078617) dialer_ne_pane_g1

0xca21,	// (0x00079168) dialer_ne_pane_t1_ParamLimits

0xca21,	// (0x00079168) dialer_ne_pane_t1

0x74c8,	// (0x00073c0f) dialer_ne_pane_t2_ParamLimits

0x74c8,	// (0x00073c0f) dialer_ne_pane_t2

0x74f0,	// (0x00073c37) dialer_ne_pane_t3_ParamLimits

0x74f0,	// (0x00073c37) dialer_ne_pane_t3

0x0002,

0xf758,	// (0x0007be9f) dialer_ne_pane_t_ParamLimits

0xf758,	// (0x0007be9f) dialer_ne_pane_t

0x74f0,	// (0x00073c37) dialer_ne_pane_t3_copy1_ParamLimits

0x74f0,	// (0x00073c37) dialer_ne_pane_t3_copy1

0x751d,	// (0x00073c64) cell_dialer_keypad_pane_ParamLimits

0x751d,	// (0x00073c64) cell_dialer_keypad_pane

0xba4a,	// (0x00078191) cell_dialer_command_1_pane_ParamLimits

0xba4a,	// (0x00078191) cell_dialer_command_1_pane

0x7534,	// (0x00073c7b) cell_dialer_command_2_pane_ParamLimits

0x7534,	// (0x00073c7b) cell_dialer_command_2_pane

0xba4a,	// (0x00078191) bg_button_pane_cp02_ParamLimits

0xba4a,	// (0x00078191) bg_button_pane_cp02

0xbbd0,	// (0x00078317) cell_dialer_keypad_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) cell_dialer_keypad_pane_g1

0xba4a,	// (0x00078191) bg_button_pane_cp03_ParamLimits

0xba4a,	// (0x00078191) bg_button_pane_cp03

0xbbd0,	// (0x00078317) cell_dialer_command_1_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) cell_dialer_command_1_pane_g1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp04

0xbed0,	// (0x00078617) cell_dialer_command_2_pane_g1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp06

0xbed0,	// (0x00078617) dialer_ne_clear_pane_g1

0xc834,	// (0x00078f7b) navi_pane_g2

0xc862,	// (0x00078fa9) navi_pane_g3

0x0002,

0xf374,	// (0x0007babb) navi_pane_g

0xc8f1,	// (0x00079038) navi_pane_mv_g2

0xc918,	// (0x0007905f) navi_pane_mv_g5

0x59d5,	// (0x0007211c) navi_pane_mv_t1

0xbc64,	// (0x000783ab) main_clock2_pane

0xba4a,	// (0x00078191) main_clock2_list_pane_ParamLimits

0xba4a,	// (0x00078191) main_clock2_list_pane

0x75e0,	// (0x00073d27) main_clock2_pane_t1_ParamLimits

0x75e0,	// (0x00073d27) main_clock2_pane_t1

0x761b,	// (0x00073d62) main_clock2_pane_t2_ParamLimits

0x761b,	// (0x00073d62) main_clock2_pane_t2

0x0004,

0xf764,	// (0x0007beab) main_clock2_pane_t_ParamLimits

0xf764,	// (0x0007beab) main_clock2_pane_t

0x76bb,	// (0x00073e02) popup_clock_analogue_window_cp03_ParamLimits

0x76bb,	// (0x00073e02) popup_clock_analogue_window_cp03

0x76e0,	// (0x00073e27) popup_clock_digital_window_cp02_ParamLimits

0x76e0,	// (0x00073e27) popup_clock_digital_window_cp02

0x7759,	// (0x00073ea0) main_clock2_list_single_pane_ParamLimits

0x7759,	// (0x00073ea0) main_clock2_list_single_pane

0xbe90,	// (0x000785d7) list_highlight_pane_cp05

0x776b,	// (0x00073eb2) main_clock2_list_single_pane_t1

0x49eb,	// (0x00071132) popup_toolbar_window_cp04_ParamLimits

0xbbde,	// (0x00078325) camera2_autofocus_pane_g2_ParamLimits

0xbbde,	// (0x00078325) camera2_autofocus_pane_g2

0xbbde,	// (0x00078325) camera2_autofocus_pane_g3_ParamLimits

0xbbde,	// (0x00078325) camera2_autofocus_pane_g3

0xbbde,	// (0x00078325) camera2_autofocus_pane_g4_ParamLimits

0xbbde,	// (0x00078325) camera2_autofocus_pane_g4

0xbbde,	// (0x00078325) camera2_autofocus_pane_g5_ParamLimits

0xbbde,	// (0x00078325) camera2_autofocus_pane_g5

0x0004,

0xf6a8,	// (0x0007bdef) camera2_autofocus_pane_g_ParamLimits

0xf6a8,	// (0x0007bdef) camera2_autofocus_pane_g

0x6d50,	// (0x00073497) camera2_autofocus_pane_cp_g2

0x6d58,	// (0x0007349f) camera2_autofocus_pane_cp_g3

0x6d60,	// (0x000734a7) camera2_autofocus_pane_cp_g4

0x6d68,	// (0x000734af) camera2_autofocus_pane_cp_g5

0x0004,

0xf70e,	// (0x0007be55) camera2_autofocus_pane_cp_g

0x35b6,	// (0x0006fcfd) popup_dialer_spcha_window

0x35b6,	// (0x0006fcfd) bg_popup_sub_pane_cp07

0x35b6,	// (0x0006fcfd) list_spcha_pane

0x7818,	// (0x00073f5f) list_single_spcha_pane_ParamLimits

0x7818,	// (0x00073f5f) list_single_spcha_pane

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp06

0xc425,	// (0x00078b6c) list_single_spcha_pane_t1

0x1343,	// (0x0006da8a) popup_call2_audio_out_window_g4_ParamLimits

0x1343,	// (0x0006da8a) popup_call2_audio_out_window_g4

0x35b6,	// (0x0006fcfd) main_imed2_pane

0xce9f,	// (0x000795e6) popup_imed_adjust2_window

0x66ef,	// (0x00072e36) popup_imed_trans_window_ParamLimits

0x66ef,	// (0x00072e36) popup_imed_trans_window

0x1b3e,	// (0x0006e285) popup_blid_sat_info2_window_t1

0x1b4c,	// (0x0006e293) popup_blid_sat_info2_window_t2

0x000a,

0xf63d,	// (0x0007bd84) popup_blid_sat_info2_window_t

0x782a,	// (0x00073f71) aid_size_cell_colour_35

0x784a,	// (0x00073f91) aid_size_cell_colour_112

0x786a,	// (0x00073fb1) aid_size_cell_effect

0x18b5,	// (0x0006dffc) bg_tb_trans_pane_cp02

0xc357,	// (0x00078a9e) heading_imed_pane

0x788a,	// (0x00073fd1) listscroll_imed_pane

0x7896,	// (0x00073fdd) heading_imed_pane_g1

0x789e,	// (0x00073fe5) heading_imed_pane_t1

0x78ac,	// (0x00073ff3) grid_imed_colour_35_pane_ParamLimits

0x78ac,	// (0x00073ff3) grid_imed_colour_35_pane

0x78c4,	// (0x0007400b) grid_imed_effect_pane

0x78da,	// (0x00074021) list_imed_aspect_pane

0x78e2,	// (0x00074029) scroll_pane_cp027_ParamLimits

0x78e2,	// (0x00074029) scroll_pane_cp027

0x78f3,	// (0x0007403a) cell_imed_effect_pane_ParamLimits

0x78f3,	// (0x0007403a) cell_imed_effect_pane

0x791a,	// (0x00074061) cell_imed_colour_pane_ParamLimits

0x791a,	// (0x00074061) cell_imed_colour_pane

0x795c,	// (0x000740a3) cell_imed_colour_pane_g1_ParamLimits

0x795c,	// (0x000740a3) cell_imed_colour_pane_g1

0x796d,	// (0x000740b4) hgihlgiht_grid_pane_cp016_ParamLimits

0x796d,	// (0x000740b4) hgihlgiht_grid_pane_cp016

0x797e,	// (0x000740c5) cell_imed_effect_pane_g1

0x7986,	// (0x000740cd) grid_highlight_pane_cp017

0x798f,	// (0x000740d6) list_imed_single_pane_ParamLimits

0x798f,	// (0x000740d6) list_imed_single_pane

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp07

0x79a4,	// (0x000740eb) list_imed_aspect_pane_comp1_t1

0x18b5,	// (0x0006dffc) bg_tb_trans_pane_cp05

0x79c6,	// (0x0007410d) popup_imed_adjust2_window_g1

0x79ed,	// (0x00074134) popup_imed_adjust2_window_t1

0x7a05,	// (0x0007414c) slider_imed_adjust_pane

0x7a19,	// (0x00074160) slider_imed_adjust_pane_g1

0x7a29,	// (0x00074170) slider_imed_adjust_pane_g2

0x7a39,	// (0x00074180) slider_imed_adjust_pane_g3

0x7a4a,	// (0x00074191) slider_imed_adjust_pane_g4

0x0003,

0xf781,	// (0x0007bec8) slider_imed_adjust_pane_g

0x7a5b,	// (0x000741a2) aid_size_cell_clipart2

0x7a67,	// (0x000741ae) grid_imed_clipart_pane

0x7a71,	// (0x000741b8) scroll_pane_cp031

0x7a79,	// (0x000741c0) cell_imed_clipart_pane_ParamLimits

0x7a79,	// (0x000741c0) cell_imed_clipart_pane

0x7a9b,	// (0x000741e2) cell_imed_clipart_pane_g1

0x35b6,	// (0x0006fcfd) grid_highlight_pane_cp014

0x75bc,	// (0x00073d03) main_clock2_pane_g1_ParamLimits

0x75bc,	// (0x00073d03) main_clock2_pane_g1

0x7700,	// (0x00073e47) aid_call2_pane_cp10

0x7712,	// (0x00073e59) aid_call_pane_cp10

0xc793,	// (0x00078eda) popup_clock_analogue_window_cp10_g1

0xc793,	// (0x00078eda) popup_clock_analogue_window_cp10_g2

0x7724,	// (0x00073e6b) popup_clock_analogue_window_cp10_g3

0x7724,	// (0x00073e6b) popup_clock_analogue_window_cp10_g4

0xc793,	// (0x00078eda) popup_clock_analogue_window_cp10_g5

0x0004,

0xf76f,	// (0x0007beb6) popup_clock_analogue_window_cp10_g

0x773a,	// (0x00073e81) popup_clock_analogue_window_cp10_t1

0x7779,	// (0x00073ec0) clock_digital_number_pane_cp10_ParamLimits

0x7779,	// (0x00073ec0) clock_digital_number_pane_cp10

0x7791,	// (0x00073ed8) clock_digital_number_pane_cp11_ParamLimits

0x7791,	// (0x00073ed8) clock_digital_number_pane_cp11

0x77a9,	// (0x00073ef0) clock_digital_number_pane_cp12_ParamLimits

0x77a9,	// (0x00073ef0) clock_digital_number_pane_cp12

0x77c3,	// (0x00073f0a) clock_digital_number_pane_cp13_ParamLimits

0x77c3,	// (0x00073f0a) clock_digital_number_pane_cp13

0x77dd,	// (0x00073f24) clock_digital_separator_pane_cp10_ParamLimits

0x77dd,	// (0x00073f24) clock_digital_separator_pane_cp10

0x77f7,	// (0x00073f3e) popup_clock_digital_window_cp02_t1_ParamLimits

0x77f7,	// (0x00073f3e) popup_clock_digital_window_cp02_t1

0xbb5b,	// (0x000782a2) clock_digital_number_pane_cp10_g1

0xbb5b,	// (0x000782a2) clock_digital_number_pane_cp10_g2

0x0001,

0xf78a,	// (0x0007bed1) clock_digital_number_pane_cp10_g

0xbb5b,	// (0x000782a2) clock_digital_separator_pane_cp10_g1

0xbb5b,	// (0x000782a2) clock_digital_separator_pane_g2_cp10

0xc920,	// (0x00079067) navi_pane_vded_g4

0xc929,	// (0x00079070) navi_pane_vded_g5

0xc932,	// (0x00079079) navi_pane_vded_t1

0x35b6,	// (0x0006fcfd) main_vded_pane

0x7aa4,	// (0x000741eb) main_vded_pane_g1

0x7aae,	// (0x000741f5) main_vded_pane_g2

0x7ab8,	// (0x000741ff) main_vded_pane_g3

0x0002,

0xf78f,	// (0x0007bed6) main_vded_pane_g

0x7ac2,	// (0x00074209) main_vded_pane_t1

0x7ad0,	// (0x00074217) main_vded_pane_t2

0x0001,

0xf796,	// (0x0007bedd) main_vded_pane_t

0x7ade,	// (0x00074225) vded_slider_pane

0x7ae6,	// (0x0007422d) vded_video_pane

0x7aee,	// (0x00074235) vded_video_pane_g1

0x7af8,	// (0x0007423f) vded_video_pane_g2

0xbed0,	// (0x00078617) vded_video_pane_g3

0x0002,

0xf79b,	// (0x0007bee2) vded_video_pane_g

0x7b01,	// (0x00074248) vded_slider_pane_g1

0x1a69,	// (0x0006e1b0) vded_slider_pane_g2

0x7b0a,	// (0x00074251) vded_slider_pane_g3

0x7b13,	// (0x0007425a) vded_slider_pane_g4

0x7b1c,	// (0x00074263) vded_slider_pane_g5

0x0004,

0xf7a2,	// (0x0007bee9) vded_slider_pane_g

0x730c,	// (0x00073a53) mup3_rocker_pane_ParamLimits

0x730c,	// (0x00073a53) mup3_rocker_pane

0x7b25,	// (0x0007426c) mup3_control_keys_pane_g1

0x7b2d,	// (0x00074274) mup3_control_keys_pane_g2

0x7b35,	// (0x0007427c) mup3_control_keys_pane_g3

0x7b3d,	// (0x00074284) mup3_control_keys_pane_g4

0x0003,

0xf7ad,	// (0x0007bef4) mup3_control_keys_pane_g

0x37bd,	// (0x0006ff04) popup_toolbar2_fixed_window_cp01_ParamLimits

0x37bd,	// (0x0006ff04) popup_toolbar2_fixed_window_cp01

0x7340,	// (0x00073a87) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7340,	// (0x00073a87) popup_toolbar2_fixed_window_cp02

0x0cda,	// (0x0006d421) popup_call2_audio_second_window_t4_ParamLimits

0x0cda,	// (0x0006d421) popup_call2_audio_second_window_t4

0x1208,	// (0x0006d94f) popup_call2_audio_first_window_t6_ParamLimits

0x1208,	// (0x0006d94f) popup_call2_audio_first_window_t6

0x1446,	// (0x0006db8d) popup_call2_audio_out_window_t6_ParamLimits

0x1446,	// (0x0006db8d) popup_call2_audio_out_window_t6

0x35b6,	// (0x0006fcfd) main_vitu_pane

0xba4a,	// (0x00078191) aid_size_cell_itu_ParamLimits

0xba4a,	// (0x00078191) aid_size_cell_itu

0xba4a,	// (0x00078191) bg_popup_window_pane_cp08_ParamLimits

0xba4a,	// (0x00078191) bg_popup_window_pane_cp08

0xba4a,	// (0x00078191) field_vitu_entry_pane_ParamLimits

0xba4a,	// (0x00078191) field_vitu_entry_pane

0xba4a,	// (0x00078191) grid_vitu_function_pane_ParamLimits

0xba4a,	// (0x00078191) grid_vitu_function_pane

0xba4a,	// (0x00078191) grid_vitu_itu_pane_ParamLimits

0xba4a,	// (0x00078191) grid_vitu_itu_pane

0xba4a,	// (0x00078191) cell_vitu_itu_pane_ParamLimits

0xba4a,	// (0x00078191) cell_vitu_itu_pane

0xba4a,	// (0x00078191) cell_vitu_function_pane_ParamLimits

0xba4a,	// (0x00078191) cell_vitu_function_pane

0xba4a,	// (0x00078191) bg_popup_sub_pane_cp08_ParamLimits

0xba4a,	// (0x00078191) bg_popup_sub_pane_cp08

0xbea2,	// (0x000785e9) field_vitu_entry_pane_t1_ParamLimits

0xbea2,	// (0x000785e9) field_vitu_entry_pane_t1

0x7b4d,	// (0x00074294) field_vitu_entry_pane_t2_ParamLimits

0x7b4d,	// (0x00074294) field_vitu_entry_pane_t2

0x0001,

0xf7b6,	// (0x0007befd) field_vitu_entry_pane_t_ParamLimits

0xf7b6,	// (0x0007befd) field_vitu_entry_pane_t

0xcf1d,	// (0x00079664) bg_button_pane_cp05_ParamLimits

0xcf1d,	// (0x00079664) bg_button_pane_cp05

0x7b6a,	// (0x000742b1) cell_vitu_itu_pane_g1

0x19a0,	// (0x0006e0e7) cell_vitu_itu_pane_t1_ParamLimits

0x19a0,	// (0x0006e0e7) cell_vitu_itu_pane_t1

0x19a0,	// (0x0006e0e7) cell_vitu_itu_pane_t2_ParamLimits

0x19a0,	// (0x0006e0e7) cell_vitu_itu_pane_t2

0x0002,

0xf7bb,	// (0x0007bf02) cell_vitu_itu_pane_t_ParamLimits

0xf7bb,	// (0x0007bf02) cell_vitu_itu_pane_t

0x35b6,	// (0x0006fcfd) bg_button_pane_cp07

0xbed0,	// (0x00078617) cell_vitu_function_pane_g1

0xbc0e,	// (0x00078355) main_calc_pane_g1

0x35e4,	// (0x0006fd2b) aid_visual_content_pane

0x35b6,	// (0x0006fcfd) main_vradio_pane

0xbbd0,	// (0x00078317) main_vradio_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) main_vradio_pane_g1

0xbbde,	// (0x00078325) main_vradio_pane_g2_ParamLimits

0xbbde,	// (0x00078325) main_vradio_pane_g2

0x0001,

0xf7c2,	// (0x0007bf09) main_vradio_pane_g_ParamLimits

0xf7c2,	// (0x0007bf09) main_vradio_pane_g

0xbea2,	// (0x000785e9) main_vradio_pane_t1_ParamLimits

0xbea2,	// (0x000785e9) main_vradio_pane_t1

0xbea2,	// (0x000785e9) main_vradio_pane_t2_ParamLimits

0xbea2,	// (0x000785e9) main_vradio_pane_t2

0xca21,	// (0x00079168) main_vradio_pane_t3_ParamLimits

0xca21,	// (0x00079168) main_vradio_pane_t3

0x0002,

0xf7c7,	// (0x0007bf0e) main_vradio_pane_t_ParamLimits

0xf7c7,	// (0x0007bf0e) main_vradio_pane_t

0xba4a,	// (0x00078191) vradio_rocker_control_pane_ParamLimits

0xba4a,	// (0x00078191) vradio_rocker_control_pane

0xba4a,	// (0x00078191) vradio_station_info_pane_ParamLimits

0xba4a,	// (0x00078191) vradio_station_info_pane

0xba4a,	// (0x00078191) vradio_frequency_info_pane_ParamLimits

0xba4a,	// (0x00078191) vradio_frequency_info_pane

0xbed0,	// (0x00078617) vradio_station_info_pane_g1

0x19a0,	// (0x0006e0e7) vradio_station_info_pane_t1_ParamLimits

0x19a0,	// (0x0006e0e7) vradio_station_info_pane_t1

0xca21,	// (0x00079168) vradio_station_info_pane_t2_ParamLimits

0xca21,	// (0x00079168) vradio_station_info_pane_t2

0x0001,

0xf7ce,	// (0x0007bf15) vradio_station_info_pane_t_ParamLimits

0xf7ce,	// (0x0007bf15) vradio_station_info_pane_t

0x35b6,	// (0x0006fcfd) vradio_tuning_pane

0x7b86,	// (0x000742cd) vradio_rocker_control_pane_g1

0x7b90,	// (0x000742d7) vradio_rocker_control_pane_g2

0x7b98,	// (0x000742df) vradio_rocker_control_pane_g3

0x7ba2,	// (0x000742e9) vradio_rocker_control_pane_g4

0x7bac,	// (0x000742f3) vradio_rocker_control_pane_g5

0x0004,

0xf7d3,	// (0x0007bf1a) vradio_rocker_control_pane_g

0xbed0,	// (0x00078617) vradio_frequency_info_pane_g1

0xbea2,	// (0x000785e9) vradio_frequency_info_pane_t1_ParamLimits

0xbea2,	// (0x000785e9) vradio_frequency_info_pane_t1

0x7bb6,	// (0x000742fd) vradio_tuning_pane_g1

0x7bc1,	// (0x00074308) vradio_tuning_pane_t1

0xba09,	// (0x00078150) area_side_right_pane_ParamLimits

0xba09,	// (0x00078150) area_side_right_pane

0x1870,	// (0x0006dfb7) status_small_pane_g1

0x1878,	// (0x0006dfbf) status_small_pane_g2

0x1881,	// (0x0006dfc8) status_small_pane_g3

0x188a,	// (0x0006dfd1) status_small_pane_g4

0x0003,

0xf59f,	// (0x0007bce6) status_small_pane_g

0x1893,	// (0x0006dfda) status_small_pane_t1

0x35b6,	// (0x0006fcfd) main_video3_pane

0x7bd0,	// (0x00074317) cams_zoom_vslider_pane

0x7bd8,	// (0x0007431f) image3_wide_pane_ParamLimits

0x7bd8,	// (0x0007431f) image3_wide_pane

0x7bf2,	// (0x00074339) image3_wide_small_pane

0x7bfe,	// (0x00074345) main_video3_pane_g1_ParamLimits

0x7bfe,	// (0x00074345) main_video3_pane_g1

0x7c1a,	// (0x00074361) main_video3_pane_g2_ParamLimits

0x7c1a,	// (0x00074361) main_video3_pane_g2

0x0001,

0xf7de,	// (0x0007bf25) main_video3_pane_g_ParamLimits

0xf7de,	// (0x0007bf25) main_video3_pane_g

0x7c36,	// (0x0007437d) main_video3_pane_t1_ParamLimits

0x7c36,	// (0x0007437d) main_video3_pane_t1

0x7c61,	// (0x000743a8) main_video3_pane_t2_ParamLimits

0x7c61,	// (0x000743a8) main_video3_pane_t2

0x7c8c,	// (0x000743d3) main_video3_pane_t3_ParamLimits

0x7c8c,	// (0x000743d3) main_video3_pane_t3

0x0002,

0xf7e3,	// (0x0007bf2a) main_video3_pane_t_ParamLimits

0xf7e3,	// (0x0007bf2a) main_video3_pane_t

0x7cb9,	// (0x00074400) cams_zoom_vslider_pane_g1

0x7cc2,	// (0x00074409) cams_zoom_vslider_pane_g2

0x0001,

0xf7ea,	// (0x0007bf31) cams_zoom_vslider_pane_g

0x7cca,	// (0x00074411) small_slider_vertical_pane

0xbed0,	// (0x00078617) small_slider_vertical_pane_g1

0xbed0,	// (0x00078617) small_slider_vertical_pane_g2

0x7cd2,	// (0x00074419) small_slider_vertical_pane_g3

0x0002,

0xf7ef,	// (0x0007bf36) small_slider_vertical_pane_g

0x35b6,	// (0x0006fcfd) main_hwr_training_pane

0x7cdb,	// (0x00074422) hwr_training_instruct_pane_ParamLimits

0x7cdb,	// (0x00074422) hwr_training_instruct_pane

0x7cfd,	// (0x00074444) hwr_training_navi_pane_ParamLimits

0x7cfd,	// (0x00074444) hwr_training_navi_pane

0x7d1c,	// (0x00074463) hwr_training_write_pane_ParamLimits

0x7d1c,	// (0x00074463) hwr_training_write_pane

0x35b6,	// (0x0006fcfd) bg_frame_shadow_pane

0x7d6c,	// (0x000744b3) hwr_training_write_pane_g1

0x7d74,	// (0x000744bb) hwr_training_write_pane_g2

0x7d7c,	// (0x000744c3) hwr_training_write_pane_g3

0x7d84,	// (0x000744cb) hwr_training_write_pane_g4

0x7d8c,	// (0x000744d3) hwr_training_write_pane_g5

0x7d94,	// (0x000744db) hwr_training_write_pane_g6

0x7d9c,	// (0x000744e3) hwr_training_write_pane_g7

0x0006,

0xf7f6,	// (0x0007bf3d) hwr_training_write_pane_g

0xebad,	// (0x0007b2f4) hwr_training_navi_pane_g1_ParamLimits

0xebad,	// (0x0007b2f4) hwr_training_navi_pane_g1

0xebbf,	// (0x0007b306) hwr_training_navi_pane_g2_ParamLimits

0xebbf,	// (0x0007b306) hwr_training_navi_pane_g2

0xebd1,	// (0x0007b318) hwr_training_navi_pane_g3_ParamLimits

0xebd1,	// (0x0007b318) hwr_training_navi_pane_g3

0xebe1,	// (0x0007b328) hwr_training_navi_pane_g4_ParamLimits

0xebe1,	// (0x0007b328) hwr_training_navi_pane_g4

0x0004,

0xf805,	// (0x0007bf4c) hwr_training_navi_pane_g_ParamLimits

0xf805,	// (0x0007bf4c) hwr_training_navi_pane_g

0xebee,	// (0x0007b335) hwr_training_navi_pane_t1

0x7db3,	// (0x000744fa) list_single_hwr_training_instruct_pane_ParamLimits

0x7db3,	// (0x000744fa) list_single_hwr_training_instruct_pane

0x7dc9,	// (0x00074510) list_single_hwr_training_instruct_pane_t1

0x1c3f,	// (0x0006e386) bg_frame_shadow_pane_g1

0x7dd8,	// (0x0007451f) bg_frame_shadow_pane_g2

0x7de0,	// (0x00074527) bg_frame_shadow_pane_g3

0x7de8,	// (0x0007452f) bg_frame_shadow_pane_g4

0x7df0,	// (0x00074537) bg_frame_shadow_pane_g5

0x7df8,	// (0x0007453f) bg_frame_shadow_pane_g6

0x7e00,	// (0x00074547) bg_frame_shadow_pane_g7

0xbd37,	// (0x0007847e) bg_frame_shadow_pane_g8

0x0007,

0xf810,	// (0x0007bf57) bg_frame_shadow_pane_g

0x35b6,	// (0x0006fcfd) main_video_tele_dialer_pane

0x7e08,	// (0x0007454f) aid_size_cell_video_keypad_ParamLimits

0x7e08,	// (0x0007454f) aid_size_cell_video_keypad

0x7e22,	// (0x00074569) grid_video_dialer_keypad_pane_ParamLimits

0x7e22,	// (0x00074569) grid_video_dialer_keypad_pane

0x7e70,	// (0x000745b7) video_down_pane_cp_ParamLimits

0x7e70,	// (0x000745b7) video_down_pane_cp

0x7ea2,	// (0x000745e9) cell_video_dialer_keypad_pane_ParamLimits

0x7ea2,	// (0x000745e9) cell_video_dialer_keypad_pane

0x7ec4,	// (0x0007460b) bg_button_pane_cp08_ParamLimits

0x7ec4,	// (0x0007460b) bg_button_pane_cp08

0x7ed0,	// (0x00074617) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7ed0,	// (0x00074617) cell_video_dialer_keypad_pane_g1

0x72f6,	// (0x00073a3d) mup3_rocker2_pane_ParamLimits

0x72f6,	// (0x00073a3d) mup3_rocker2_pane

0xbed0,	// (0x00078617) mup3_rocker2_pane_g1

0x65d2,	// (0x00072d19) main_dialer2_pane

0x35b6,	// (0x0006fcfd) main_mp4_pane

0xec1a,	// (0x0007b361) main_mp4_pane_g1_ParamLimits

0xec1a,	// (0x0007b361) main_mp4_pane_g1

0xec1a,	// (0x0007b361) main_mp4_pane_g2_ParamLimits

0xec1a,	// (0x0007b361) main_mp4_pane_g2

0x7f0a,	// (0x00074651) main_mp4_pane_g3_ParamLimits

0x7f0a,	// (0x00074651) main_mp4_pane_g3

0xec28,	// (0x0007b36f) main_mp4_pane_g4_ParamLimits

0xec28,	// (0x0007b36f) main_mp4_pane_g4

0xec56,	// (0x0007b39d) main_mp4_pane_g5_ParamLimits

0xec56,	// (0x0007b39d) main_mp4_pane_g5

0x0007,

0xf830,	// (0x0007bf77) main_mp4_pane_g_ParamLimits

0xf830,	// (0x0007bf77) main_mp4_pane_g

0xecca,	// (0x0007b411) main_mp4_pane_t1_ParamLimits

0xecca,	// (0x0007b411) main_mp4_pane_t1

0xed26,	// (0x0007b46d) main_mp4_pane_t2_ParamLimits

0xed26,	// (0x0007b46d) main_mp4_pane_t2

0x7f46,	// (0x0007468d) main_mp4_pane_t3_ParamLimits

0x7f46,	// (0x0007468d) main_mp4_pane_t3

0xed78,	// (0x0007b4bf) main_mp4_pane_t4_ParamLimits

0xed78,	// (0x0007b4bf) main_mp4_pane_t4

0x0003,

0xf841,	// (0x0007bf88) main_mp4_pane_t_ParamLimits

0xf841,	// (0x0007bf88) main_mp4_pane_t

0xedbc,	// (0x0007b503) mp4_progress_pane_ParamLimits

0xedbc,	// (0x0007b503) mp4_progress_pane

0xee06,	// (0x0007b54d) mp4_rocker_pane_ParamLimits

0xee06,	// (0x0007b54d) mp4_rocker_pane

0x7f74,	// (0x000746bb) mp4_progress_pane_t1

0x7f8d,	// (0x000746d4) mp4_progress_pane_t2

0x0001,

0xf84a,	// (0x0007bf91) mp4_progress_pane_t

0x7fa6,	// (0x000746ed) mup_progress_pane_cp04

0xbed0,	// (0x00078617) mp4_rocker_pane_g1

0x7fb9,	// (0x00074700) aid_cell_size_keypad2_ParamLimits

0x7fb9,	// (0x00074700) aid_cell_size_keypad2

0x7fcf,	// (0x00074716) dialer2_ne_pane_ParamLimits

0x7fcf,	// (0x00074716) dialer2_ne_pane

0x7fe9,	// (0x00074730) grid_dialer2_keypad_pane_ParamLimits

0x7fe9,	// (0x00074730) grid_dialer2_keypad_pane

0xcf1d,	// (0x00079664) bg_popup_call_pane_cp07_ParamLimits

0xcf1d,	// (0x00079664) bg_popup_call_pane_cp07

0x8005,	// (0x0007474c) dialer2_ne_pane_t1_ParamLimits

0x8005,	// (0x0007474c) dialer2_ne_pane_t1

0x8053,	// (0x0007479a) cell_dialer2_keypad_pane_ParamLimits

0x8053,	// (0x0007479a) cell_dialer2_keypad_pane

0x8075,	// (0x000747bc) bg_button_pane_pane_cp04_ParamLimits

0x8075,	// (0x000747bc) bg_button_pane_pane_cp04

0x8081,	// (0x000747c8) cell_dialer2_keypad_pane_g1_ParamLimits

0x8081,	// (0x000747c8) cell_dialer2_keypad_pane_g1

0x48bf,	// (0x00071006) aid_placing_vt_set_content_ParamLimits

0x48bf,	// (0x00071006) aid_placing_vt_set_content

0x48e7,	// (0x0007102e) aid_placing_vt_set_title_ParamLimits

0x48e7,	// (0x0007102e) aid_placing_vt_set_title

0x35b6,	// (0x0006fcfd) main_image3_pane

0x8147,	// (0x0007488e) area_side_right_pane_cp01_ParamLimits

0x8147,	// (0x0007488e) area_side_right_pane_cp01

0xec1a,	// (0x0007b361) main_image3_pane_g1_ParamLimits

0xec1a,	// (0x0007b361) main_image3_pane_g1

0x815e,	// (0x000748a5) main_image3_pane_g2_ParamLimits

0x815e,	// (0x000748a5) main_image3_pane_g2

0x8186,	// (0x000748cd) main_image3_pane_g3_ParamLimits

0x8186,	// (0x000748cd) main_image3_pane_g3

0x81b0,	// (0x000748f7) main_image3_pane_g4_ParamLimits

0x81b0,	// (0x000748f7) main_image3_pane_g4

0x0003,

0xf859,	// (0x0007bfa0) main_image3_pane_g_ParamLimits

0xf859,	// (0x0007bfa0) main_image3_pane_g

0x81da,	// (0x00074921) main_image3_pane_t1_ParamLimits

0x81da,	// (0x00074921) main_image3_pane_t1

0x8232,	// (0x00074979) main_image3_pane_t2_ParamLimits

0x8232,	// (0x00074979) main_image3_pane_t2

0x8284,	// (0x000749cb) main_image3_pane_t3_ParamLimits

0x8284,	// (0x000749cb) main_image3_pane_t3

0x0003,

0xf862,	// (0x0007bfa9) main_image3_pane_t_ParamLimits

0xf862,	// (0x0007bfa9) main_image3_pane_t

0xba4a,	// (0x00078191) grid_sctrl_middle_pane_cp01_ParamLimits

0xba4a,	// (0x00078191) grid_sctrl_middle_pane_cp01

0x830c,	// (0x00074a53) cell_sctrl_middle_pane_cp01_ParamLimits

0x830c,	// (0x00074a53) cell_sctrl_middle_pane_cp01

0x8329,	// (0x00074a70) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8329,	// (0x00074a70) cell_sctrl_middle_pane_cp01_g1

0x35b6,	// (0x0006fcfd) main_call4_pane

0x833f,	// (0x00074a86) aid_size_button_call4_ParamLimits

0x833f,	// (0x00074a86) aid_size_button_call4

0x8372,	// (0x00074ab9) call4_windows_pane_ParamLimits

0x8372,	// (0x00074ab9) call4_windows_pane

0x8391,	// (0x00074ad8) grid_call4_button_pane_ParamLimits

0x8391,	// (0x00074ad8) grid_call4_button_pane

0x83c4,	// (0x00074b0b) call4_windows_conf_pane

0x83d9,	// (0x00074b20) popup_call4_audio_first_window_ParamLimits

0x83d9,	// (0x00074b20) popup_call4_audio_first_window

0x8429,	// (0x00074b70) popup_call4_audio_second_window_ParamLimits

0x8429,	// (0x00074b70) popup_call4_audio_second_window

0x8440,	// (0x00074b87) popup_call4_audio_wait_window_ParamLimits

0x8440,	// (0x00074b87) popup_call4_audio_wait_window

0x844e,	// (0x00074b95) cell_call4_button_pane_ParamLimits

0x844e,	// (0x00074b95) cell_call4_button_pane

0x8473,	// (0x00074bba) bg_button_pane_cp09_ParamLimits

0x8473,	// (0x00074bba) bg_button_pane_cp09

0x847f,	// (0x00074bc6) cell_call4_button_pane_g1_ParamLimits

0x847f,	// (0x00074bc6) cell_call4_button_pane_g1

0x84a5,	// (0x00074bec) cell_call4_button_pane_t1_ParamLimits

0x84a5,	// (0x00074bec) cell_call4_button_pane_t1

0x84d7,	// (0x00074c1e) popup_call4_audio_conf_window_ParamLimits

0x84d7,	// (0x00074c1e) popup_call4_audio_conf_window

0x7356,	// (0x00073a9d) mup3_progress_pane_t1_ParamLimits

0x7375,	// (0x00073abc) mup3_progress_pane_t2_ParamLimits

0x1fb2,	// (0x0006e6f9) mup3_progress_pane_t3_ParamLimits

0xf737,	// (0x0007be7e) mup3_progress_pane_t_ParamLimits

0x7394,	// (0x00073adb) mup_progress_pane_cp03_ParamLimits

0x7b45,	// (0x0007428c) mup3_control_keys_pane_g4_copy1

0xedea,	// (0x0007b531) mp4_rocker2_pane_ParamLimits

0xedea,	// (0x0007b531) mp4_rocker2_pane

0x84eb,	// (0x00074c32) mp4_rocker2_pane_g1

0x84f3,	// (0x00074c3a) mp4_rocker2_pane_g2

0xee8a,	// (0x0007b5d1) mp4_rocker2_pane_g3

0xee92,	// (0x0007b5d9) mp4_rocker2_pane_g4

0xee9a,	// (0x0007b5e1) mp4_rocker2_pane_g5

0x0004,

0xf86b,	// (0x0007bfb2) mp4_rocker2_pane_g

0x35b6,	// (0x0006fcfd) main_camera4_pane

0x35b6,	// (0x0006fcfd) main_video4_pane

0x7e3e,	// (0x00074585) main_video_tele_dialer_pane_t1_ParamLimits

0x7e3e,	// (0x00074585) main_video_tele_dialer_pane_t1

0x7e57,	// (0x0007459e) main_video_tele_dialer_pane_t2_ParamLimits

0x7e57,	// (0x0007459e) main_video_tele_dialer_pane_t2

0x0001,

0xf821,	// (0x0007bf68) main_video_tele_dialer_pane_t_ParamLimits

0xf821,	// (0x0007bf68) main_video_tele_dialer_pane_t

0x8513,	// (0x00074c5a) cam4_autofocus_pane_ParamLimits

0x8513,	// (0x00074c5a) cam4_autofocus_pane

0x8529,	// (0x00074c70) cam4_image_uncrop_pane_ParamLimits

0x8529,	// (0x00074c70) cam4_image_uncrop_pane

0x8543,	// (0x00074c8a) cam4_indicators_pane_ParamLimits

0x8543,	// (0x00074c8a) cam4_indicators_pane

0x856e,	// (0x00074cb5) main_camera4_pane_g1_ParamLimits

0x856e,	// (0x00074cb5) main_camera4_pane_g1

0x8580,	// (0x00074cc7) main_camera4_pane_g2_ParamLimits

0x8580,	// (0x00074cc7) main_camera4_pane_g2

0x8593,	// (0x00074cda) main_camera4_pane_g3_ParamLimits

0x8593,	// (0x00074cda) main_camera4_pane_g3

0x85a6,	// (0x00074ced) main_camera4_pane_g4_ParamLimits

0x85a6,	// (0x00074ced) main_camera4_pane_g4

0x85b9,	// (0x00074d00) main_camera4_pane_g5_ParamLimits

0x85b9,	// (0x00074d00) main_camera4_pane_g5

0x0005,

0xf876,	// (0x0007bfbd) main_camera4_pane_g_ParamLimits

0xf876,	// (0x0007bfbd) main_camera4_pane_g

0x85dd,	// (0x00074d24) main_camera4_pane_t1_ParamLimits

0x85dd,	// (0x00074d24) main_camera4_pane_t1

0xbbd0,	// (0x00078317) bg_tb_trans_pane_cp06

0xeec6,	// (0x0007b60d) cam4_indicators_pane_g1

0xeed7,	// (0x0007b61e) cam4_indicators_pane_g2

0x0002,

0xf891,	// (0x0007bfd8) cam4_indicators_pane_g

0xeeef,	// (0x0007b636) cam4_indicators_pane_t1

0x8641,	// (0x00074d88) main_video4_pane_g1_ParamLimits

0x8641,	// (0x00074d88) main_video4_pane_g1

0x8650,	// (0x00074d97) main_video4_pane_g2_ParamLimits

0x8650,	// (0x00074d97) main_video4_pane_g2

0x865f,	// (0x00074da6) main_video4_pane_g3_ParamLimits

0x865f,	// (0x00074da6) main_video4_pane_g3

0x866e,	// (0x00074db5) main_video4_pane_g4_ParamLimits

0x866e,	// (0x00074db5) main_video4_pane_g4

0x0004,

0xf898,	// (0x0007bfdf) main_video4_pane_g_ParamLimits

0xf898,	// (0x0007bfdf) main_video4_pane_g

0x868c,	// (0x00074dd3) vid4_indicators_pane_ParamLimits

0x868c,	// (0x00074dd3) vid4_indicators_pane

0x86ba,	// (0x00074e01) video4_image_uncrop_cif_pane_ParamLimits

0x86ba,	// (0x00074e01) video4_image_uncrop_cif_pane

0x86d4,	// (0x00074e1b) video4_image_uncrop_nhd_pane_ParamLimits

0x86d4,	// (0x00074e1b) video4_image_uncrop_nhd_pane

0x8529,	// (0x00074c70) video4_image_uncrop_vga_pane_ParamLimits

0x8529,	// (0x00074c70) video4_image_uncrop_vga_pane

0xba4a,	// (0x00078191) bg_tb_trans_pane_cp07

0xef19,	// (0x0007b660) vid4_indicators_pane_g1

0xef2d,	// (0x0007b674) vid4_indicators_pane_g2

0xef41,	// (0x0007b688) vid4_indicators_pane_g3

0x0004,

0xf8a3,	// (0x0007bfea) vid4_indicators_pane_g

0xef6e,	// (0x0007b6b5) vid4_indicators_pane_t1

0x86e8,	// (0x00074e2f) cam4_autofocus_pane_g1

0x86f0,	// (0x00074e37) cam4_autofocus_pane_g2

0x86f8,	// (0x00074e3f) cam4_autofocus_pane_g3

0x0002,

0xf8ae,	// (0x0007bff5) cam4_autofocus_pane_g

0x8700,	// (0x00074e47) cam4_autofocus_pane_g3_copy1

0x7e86,	// (0x000745cd) video_down_pane_cp_t1

0x7e94,	// (0x000745db) video_down_pane_cp_t2

0x0001,

0xf826,	// (0x0007bf6d) video_down_pane_cp_t

0xba4a,	// (0x00078191) popup_vitu2_window_ParamLimits

0xba4a,	// (0x00078191) popup_vitu2_window

0x8708,	// (0x00074e4f) aid_size_cell2_itu2_ParamLimits

0x8708,	// (0x00074e4f) aid_size_cell2_itu2

0x8728,	// (0x00074e6f) aid_size_cell_itu2_ParamLimits

0x8728,	// (0x00074e6f) aid_size_cell_itu2

0x74ba,	// (0x00073c01) bg_popup_window_pane_cp09_ParamLimits

0x74ba,	// (0x00073c01) bg_popup_window_pane_cp09

0x8775,	// (0x00074ebc) field_vitu2_entry_pane_ParamLimits

0x8775,	// (0x00074ebc) field_vitu2_entry_pane

0x8798,	// (0x00074edf) grid_vitu2_function_pane_ParamLimits

0x8798,	// (0x00074edf) grid_vitu2_function_pane

0x87e3,	// (0x00074f2a) grid_vitu2_itu_pane_ParamLimits

0x87e3,	// (0x00074f2a) grid_vitu2_itu_pane

0x8871,	// (0x00074fb8) cell_vitu2_itu_pane_ParamLimits

0x8871,	// (0x00074fb8) cell_vitu2_itu_pane

0x889d,	// (0x00074fe4) cell_vitu2_function_pane_ParamLimits

0x889d,	// (0x00074fe4) cell_vitu2_function_pane

0x88dc,	// (0x00075023) bg_popup_call_pane_cp08_ParamLimits

0x88dc,	// (0x00075023) bg_popup_call_pane_cp08

0x88f3,	// (0x0007503a) field_vitu2_entry_pane_g1

0x88ff,	// (0x00075046) field_vitu2_entry_pane_g2

0x0002,

0xf8b5,	// (0x0007bffc) field_vitu2_entry_pane_g

0x2eca,	// (0x0006f611) field_vitu2_entry_pane_t1_ParamLimits

0x2eca,	// (0x0006f611) field_vitu2_entry_pane_t1

0xcfb5,	// (0x000796fc) field_vitu2_entry_pane_t2_ParamLimits

0xcfb5,	// (0x000796fc) field_vitu2_entry_pane_t2

0x0001,

0xf8bc,	// (0x0007c003) field_vitu2_entry_pane_t_ParamLimits

0xf8bc,	// (0x0007c003) field_vitu2_entry_pane_t

0x8913,	// (0x0007505a) bg_button_pane_cp010_ParamLimits

0x8913,	// (0x0007505a) bg_button_pane_cp010

0x8921,	// (0x00075068) cell_vitu2_itu_pane_g1

0x8947,	// (0x0007508e) cell_vitu2_itu_pane_t1_ParamLimits

0x8947,	// (0x0007508e) cell_vitu2_itu_pane_t1

0x2efa,	// (0x0006f641) cell_vitu2_itu_pane_t2_ParamLimits

0x2efa,	// (0x0006f641) cell_vitu2_itu_pane_t2

0x0002,

0xf8c6,	// (0x0007c00d) cell_vitu2_itu_pane_t_ParamLimits

0xf8c6,	// (0x0007c00d) cell_vitu2_itu_pane_t

0xba4a,	// (0x00078191) bg_button_pane_cp011

0x89a5,	// (0x000750ec) cell_vitu2_function_pane_g1

0x35b6,	// (0x0006fcfd) main_myfav_hc_pane

0x82d4,	// (0x00074a1b) popup_image3_note_pane_ParamLimits

0x82d4,	// (0x00074a1b) popup_image3_note_pane

0x82f0,	// (0x00074a37) popup_image3_tool_bar_pane_ParamLimits

0x82f0,	// (0x00074a37) popup_image3_tool_bar_pane

0x2f88,	// (0x0006f6cf) cell_vitu2_itu_pane_t3_ParamLimits

0x2f88,	// (0x0006f6cf) cell_vitu2_itu_pane_t3

0x35b6,	// (0x0006fcfd) bg_popup_trans_pane

0x89b9,	// (0x00075100) grid_image3_tool_bar_pane

0x89c3,	// (0x0007510a) bg_popup_trans_pane_g1

0xc0e1,	// (0x00078828) bg_popup_trans_pane_g2

0x89cb,	// (0x00075112) bg_popup_trans_pane_g3

0x89d3,	// (0x0007511a) bg_popup_trans_pane_g4

0x89db,	// (0x00075122) bg_popup_trans_pane_g5

0x89e3,	// (0x0007512a) bg_popup_trans_pane_g6

0x89eb,	// (0x00075132) bg_popup_trans_pane_g7

0x89f3,	// (0x0007513a) bg_popup_trans_pane_g8

0xc0c1,	// (0x00078808) bg_popup_trans_pane_g9

0x0008,

0xf8cd,	// (0x0007c014) bg_popup_trans_pane_g

0x89fb,	// (0x00075142) cell_image3_tool_bar_pane_ParamLimits

0x89fb,	// (0x00075142) cell_image3_tool_bar_pane

0xbed0,	// (0x00078617) cell_image3_tool_bar_pane_g1

0x35b6,	// (0x0006fcfd) bg_popup_trans_pane_cp1

0x8a0f,	// (0x00075156) popup_image3_note_pane_t1

0x8a1d,	// (0x00075164) popup_image3_note_pane_t2

0x8a2b,	// (0x00075172) popup_image3_note_pane_t3

0x0002,

0xf8e0,	// (0x0007c027) popup_image3_note_pane_t

0x8a39,	// (0x00075180) popup_image3_note_pane_t3_copy1

0x8a47,	// (0x0007518e) bg_myfav_hc_instruction_pane_ParamLimits

0x8a47,	// (0x0007518e) bg_myfav_hc_instruction_pane

0x8a5b,	// (0x000751a2) cell_myfav_contact_pane_ParamLimits

0x8a5b,	// (0x000751a2) cell_myfav_contact_pane

0x8a79,	// (0x000751c0) cell_myfav_contact_pane_cp1_ParamLimits

0x8a79,	// (0x000751c0) cell_myfav_contact_pane_cp1

0x8a91,	// (0x000751d8) cell_myfav_contact_pane_cp2_ParamLimits

0x8a91,	// (0x000751d8) cell_myfav_contact_pane_cp2

0x8aa9,	// (0x000751f0) cell_myfav_contact_pane_cp3_ParamLimits

0x8aa9,	// (0x000751f0) cell_myfav_contact_pane_cp3

0x8ac0,	// (0x00075207) cell_myfav_contact_pane_cp4_ParamLimits

0x8ac0,	// (0x00075207) cell_myfav_contact_pane_cp4

0x8ad8,	// (0x0007521f) cell_myfav_contact_pane_cp5_ParamLimits

0x8ad8,	// (0x0007521f) cell_myfav_contact_pane_cp5

0x8aec,	// (0x00075233) cell_myfav_contact_pane_cp6_ParamLimits

0x8aec,	// (0x00075233) cell_myfav_contact_pane_cp6

0x8b02,	// (0x00075249) cell_myfav_contact_pane_cp7_ParamLimits

0x8b02,	// (0x00075249) cell_myfav_contact_pane_cp7

0x8b1c,	// (0x00075263) listscroll_gen_pane_cp05

0x8b25,	// (0x0007526c) main_myfav_hc_pane_g1_ParamLimits

0x8b25,	// (0x0007526c) main_myfav_hc_pane_g1

0x8b3f,	// (0x00075286) main_myfav_hc_pane_g2_ParamLimits

0x8b3f,	// (0x00075286) main_myfav_hc_pane_g2

0x0002,

0xf8e7,	// (0x0007c02e) main_myfav_hc_pane_g_ParamLimits

0xf8e7,	// (0x0007c02e) main_myfav_hc_pane_g

0x8b71,	// (0x000752b8) main_myfav_hc_pane_t1_ParamLimits

0x8b71,	// (0x000752b8) main_myfav_hc_pane_t1

0x8b88,	// (0x000752cf) main_myfav_hc_pane_t2_ParamLimits

0x8b88,	// (0x000752cf) main_myfav_hc_pane_t2

0x8b9a,	// (0x000752e1) main_myfav_hc_pane_t3_ParamLimits

0x8b9a,	// (0x000752e1) main_myfav_hc_pane_t3

0x8bac,	// (0x000752f3) main_myfav_hc_pane_t4_ParamLimits

0x8bac,	// (0x000752f3) main_myfav_hc_pane_t4

0x0004,

0xf8ee,	// (0x0007c035) main_myfav_hc_pane_t_ParamLimits

0xf8ee,	// (0x0007c035) main_myfav_hc_pane_t

0xbed0,	// (0x00078617) bg_myfav_hc_instruction_pane_g1

0x8bd4,	// (0x0007531b) cell_myfav_contact_pane_g1_ParamLimits

0x8bd4,	// (0x0007531b) cell_myfav_contact_pane_g1

0x8bd4,	// (0x0007531b) cell_myfav_contact_pane_g2_ParamLimits

0x8bd4,	// (0x0007531b) cell_myfav_contact_pane_g2

0x8be0,	// (0x00075327) cell_myfav_contact_pane_g3_ParamLimits

0x8be0,	// (0x00075327) cell_myfav_contact_pane_g3

0xbbde,	// (0x00078325) cell_myfav_contact_pane_g4_ParamLimits

0xbbde,	// (0x00078325) cell_myfav_contact_pane_g4

0x8bed,	// (0x00075334) cell_myfav_contact_pane_g5_ParamLimits

0x8bed,	// (0x00075334) cell_myfav_contact_pane_g5

0x0004,

0xf8f9,	// (0x0007c040) cell_myfav_contact_pane_g_ParamLimits

0xf8f9,	// (0x0007c040) cell_myfav_contact_pane_g

0x8b59,	// (0x000752a0) main_myfav_hc_pane_g3_ParamLimits

0x8b59,	// (0x000752a0) main_myfav_hc_pane_g3

0x371f,	// (0x0006fe66) popup_adpt_find_window

0x8bf9,	// (0x00075340) afind_page_pane_ParamLimits

0x8bf9,	// (0x00075340) afind_page_pane

0x8c0e,	// (0x00075355) aid_size_cell_afind_ParamLimits

0x8c0e,	// (0x00075355) aid_size_cell_afind

0x8c2c,	// (0x00075373) bg_popup_sub_pane_cp09_ParamLimits

0x8c2c,	// (0x00075373) bg_popup_sub_pane_cp09

0x8c39,	// (0x00075380) find_pane_cp01_ParamLimits

0x8c39,	// (0x00075380) find_pane_cp01

0x8c46,	// (0x0007538d) grid_afind_control_pane_ParamLimits

0x8c46,	// (0x0007538d) grid_afind_control_pane

0x8c5a,	// (0x000753a1) grid_afind_pane_ParamLimits

0x8c5a,	// (0x000753a1) grid_afind_pane

0x8c79,	// (0x000753c0) cell_afind_pane_ParamLimits

0x8c79,	// (0x000753c0) cell_afind_pane

0xbed0,	// (0x00078617) afind_page_pane_g1

0x8ce0,	// (0x00075427) afind_page_pane_g2

0x8ce9,	// (0x00075430) afind_page_pane_g3

0x0002,

0xf904,	// (0x0007c04b) afind_page_pane_g

0x8cf2,	// (0x00075439) afind_page_pane_t1

0x8d12,	// (0x00075459) cell_afind_grid_control_pane_ParamLimits

0x8d12,	// (0x00075459) cell_afind_grid_control_pane

0x8075,	// (0x000747bc) bg_button_pane_cp69_ParamLimits

0x8075,	// (0x000747bc) bg_button_pane_cp69

0x8d21,	// (0x00075468) cell_afind_pane_g1_ParamLimits

0x8d21,	// (0x00075468) cell_afind_pane_g1

0x8d2e,	// (0x00075475) cell_afind_pane_t1_ParamLimits

0x8d2e,	// (0x00075475) cell_afind_pane_t1

0xbeda,	// (0x00078621) bg_button_pane_cp72

0xcfd2,	// (0x00079719) cell_afind_grid_control_pane_g1

0x6050,	// (0x00072797) aid_image_placing_area_ParamLimits

0x6050,	// (0x00072797) aid_image_placing_area

0xbbd0,	// (0x00078317) field_vitu_entry_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) field_vitu_entry_pane_g1

0xbbd0,	// (0x00078317) field_vitu_entry_pane_g2_ParamLimits

0xbbd0,	// (0x00078317) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0007b948) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0007b948) field_vitu_entry_pane_g

0x7b6a,	// (0x000742b1) cell_vitu_itu_pane_g1_ParamLimits

0x7b4d,	// (0x00074294) cell_vitu_itu_pane_t3_ParamLimits

0x7b4d,	// (0x00074294) cell_vitu_itu_pane_t3

0x7f74,	// (0x000746bb) mp4_progress_pane_t1_ParamLimits

0x7f8d,	// (0x000746d4) mp4_progress_pane_t2_ParamLimits

0xf84a,	// (0x0007bf91) mp4_progress_pane_t_ParamLimits

0x7fa6,	// (0x000746ed) mup_progress_pane_cp04_ParamLimits

0x8bc0,	// (0x00075307) main_myfav_hc_pane_t5_ParamLimits

0x8bc0,	// (0x00075307) main_myfav_hc_pane_t5

0xb9f9,	// (0x00078140) aid_zoom_text_primary

0x371f,	// (0x0006fe66) popup_adpt_find_window_ParamLimits

0xba4a,	// (0x00078191) main_cam_set_pane

0x855a,	// (0x00074ca1) cam4_zoom_pane_ParamLimits

0x855a,	// (0x00074ca1) cam4_zoom_pane

0x8d40,	// (0x00075487) main_cam_set_pane_g1_ParamLimits

0x8d40,	// (0x00075487) main_cam_set_pane_g1

0x8d4e,	// (0x00075495) main_cam_set_pane_g2_ParamLimits

0x8d4e,	// (0x00075495) main_cam_set_pane_g2

0x0001,

0xf90b,	// (0x0007c052) main_cam_set_pane_g_ParamLimits

0xf90b,	// (0x0007c052) main_cam_set_pane_g

0x8d6f,	// (0x000754b6) main_cam_set_pane_t1_ParamLimits

0x8d6f,	// (0x000754b6) main_cam_set_pane_t1

0x8d8a,	// (0x000754d1) main_cset_listscroll_pane_ParamLimits

0x8d8a,	// (0x000754d1) main_cset_listscroll_pane

0x8db0,	// (0x000754f7) main_cset_slider_pane_ParamLimits

0x8db0,	// (0x000754f7) main_cset_slider_pane

0xcfe3,	// (0x0007972a) main_cset_list_pane_ParamLimits

0xcfe3,	// (0x0007972a) main_cset_list_pane

0xcff3,	// (0x0007973a) scroll_pane_cp028

0x8dd6,	// (0x0007551d) aid_area_touch_slider

0x8df2,	// (0x00075539) cset_slider_pane

0x8e15,	// (0x0007555c) main_cset_slider_pane_g1

0x8e2a,	// (0x00075571) main_cset_slider_pane_g2

0x0011,

0xf910,	// (0x0007c057) main_cset_slider_pane_g

0xd044,	// (0x0007978b) main_cset_slider_pane_t1

0x8ece,	// (0x00075615) main_cset_slider_pane_t2

0x8ee8,	// (0x0007562f) main_cset_slider_pane_t3

0x8f02,	// (0x00075649) main_cset_slider_pane_t4

0x8f1c,	// (0x00075663) main_cset_slider_pane_t5

0x8f36,	// (0x0007567d) main_cset_slider_pane_t6

0x8f4b,	// (0x00075692) main_cset_slider_pane_t7

0x000e,

0xf935,	// (0x0007c07c) main_cset_slider_pane_t

0x904f,	// (0x00075796) cset_list_set_pane_ParamLimits

0x904f,	// (0x00075796) cset_list_set_pane

0xd0de,	// (0x00079825) aid_position_infowindow_above

0xd0e6,	// (0x0007982d) aid_position_infowindow_below

0x9061,	// (0x000757a8) cset_list_set_pane_g1_ParamLimits

0x9061,	// (0x000757a8) cset_list_set_pane_g1

0x2fe6,	// (0x0006f72d) cset_list_set_pane_g3_ParamLimits

0x2fe6,	// (0x0006f72d) cset_list_set_pane_g3

0x0001,

0xf954,	// (0x0007c09b) cset_list_set_pane_g_ParamLimits

0xf954,	// (0x0007c09b) cset_list_set_pane_g

0x2ff5,	// (0x0006f73c) cset_list_set_pane_t1_ParamLimits

0x2ff5,	// (0x0006f73c) cset_list_set_pane_t1

0xba4a,	// (0x00078191) list_highlight_pane_cp021_ParamLimits

0xba4a,	// (0x00078191) list_highlight_pane_cp021

0xca97,	// (0x000791de) cset_slider_pane_g1

0xcaa9,	// (0x000791f0) cset_slider_pane_g2

0xcaa0,	// (0x000791e7) cset_slider_pane_g3

0x0002,

0xf959,	// (0x0007c0a0) cset_slider_pane_g

0xef85,	// (0x0007b6cc) aid_area_touch_cam4_zoom

0xef8d,	// (0x0007b6d4) cam4_zoom_cont_pane

0xef95,	// (0x0007b6dc) cam4_zoom_pane_g1

0xef9d,	// (0x0007b6e4) cam4_zoom_pane_g2

0x906d,	// (0x000757b4) cam4_zoom_pane_g3

0x0002,

0xf960,	// (0x0007c0a7) cam4_zoom_pane_g

0x7cd2,	// (0x00074419) cam4_zoom_cont_pane_g1

0xd0ee,	// (0x00079835) cam4_zoom_cont_pane_g2

0xd0f7,	// (0x0007983e) cam4_zoom_cont_pane_g3

0x0002,

0xf967,	// (0x0007c0ae) cam4_zoom_cont_pane_g

0x835d,	// (0x00074aa4) call4_image_pane_ParamLimits

0x835d,	// (0x00074aa4) call4_image_pane

0x83c4,	// (0x00074b0b) call4_windows_conf_pane_ParamLimits

0x8407,	// (0x00074b4e) popup_call4_audio_in_window_ParamLimits

0x8407,	// (0x00074b4e) popup_call4_audio_in_window

0x35b6,	// (0x0006fcfd) bg_popup_call2_act_pane_cp02

0x84cf,	// (0x00074c16) call4_list_conf_pane

0xbed0,	// (0x00078617) call4_image_pane_g1

0xbed0,	// (0x00078617) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0007bb1f) call4_image_pane_g

0xd100,	// (0x00079847) list_single_graphic_popup_conf4_pane_ParamLimits

0xd100,	// (0x00079847) list_single_graphic_popup_conf4_pane

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp022

0xd113,	// (0x0007985a) list_single_graphic_popup_conf4_pane_g1

0xc690,	// (0x00078dd7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf96e,	// (0x0007c0b5) list_single_graphic_popup_conf4_pane_g

0xd11b,	// (0x00079862) list_single_graphic_popup_conf4_pane_t1

0x4a0b,	// (0x00071152) popup_vtel_slider_window_ParamLimits

0x4a0b,	// (0x00071152) popup_vtel_slider_window

0x8041,	// (0x00074788) dialer2_ne_pane_t2_ParamLimits

0x8041,	// (0x00074788) dialer2_ne_pane_t2

0x0001,

0xf84f,	// (0x0007bf96) dialer2_ne_pane_t_ParamLimits

0xf84f,	// (0x0007bf96) dialer2_ne_pane_t

0xcf1d,	// (0x00079664) bg_popup_sub_pane_cp010_ParamLimits

0xcf1d,	// (0x00079664) bg_popup_sub_pane_cp010

0x9075,	// (0x000757bc) popup_vtel_slider_window_g1_ParamLimits

0x9075,	// (0x000757bc) popup_vtel_slider_window_g1

0x9088,	// (0x000757cf) popup_vtel_slider_window_g2_ParamLimits

0x9088,	// (0x000757cf) popup_vtel_slider_window_g2

0x0003,

0xf973,	// (0x0007c0ba) popup_vtel_slider_window_g_ParamLimits

0xf973,	// (0x0007c0ba) popup_vtel_slider_window_g

0x90de,	// (0x00075825) vtel_slider_pane_ParamLimits

0x90de,	// (0x00075825) vtel_slider_pane

0x9100,	// (0x00075847) vtel_slider_pane_g1_ParamLimits

0x9100,	// (0x00075847) vtel_slider_pane_g1

0x9114,	// (0x0007585b) vtel_slider_pane_g2_ParamLimits

0x9114,	// (0x0007585b) vtel_slider_pane_g2

0x912c,	// (0x00075873) vtel_slider_pane_g3_ParamLimits

0x912c,	// (0x00075873) vtel_slider_pane_g3

0x9100,	// (0x00075847) vtel_slider_pane_g4_ParamLimits

0x9100,	// (0x00075847) vtel_slider_pane_g4

0x9142,	// (0x00075889) vtel_slider_pane_g5_ParamLimits

0x9142,	// (0x00075889) vtel_slider_pane_g5

0x0004,

0xf97c,	// (0x0007c0c3) vtel_slider_pane_g_ParamLimits

0xf97c,	// (0x0007c0c3) vtel_slider_pane_g

0xba4a,	// (0x00078191) main_gallery2_pane

0x8748,	// (0x00074e8f) aid_size_row_itut2_dropdow_list_ParamLimits

0x8748,	// (0x00074e8f) aid_size_row_itut2_dropdow_list

0x87bd,	// (0x00074f04) grid_vitu2_function_top_pane_ParamLimits

0x87bd,	// (0x00074f04) grid_vitu2_function_top_pane

0x881f,	// (0x00074f66) popup_vitu2_dropdown_list_window_ParamLimits

0x881f,	// (0x00074f66) popup_vitu2_dropdown_list_window

0x8845,	// (0x00074f8c) popup_vitu2_match_list_window

0x9158,	// (0x0007589f) cell_vitu2_function_top_pane_ParamLimits

0x9158,	// (0x0007589f) cell_vitu2_function_top_pane

0x9170,	// (0x000758b7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9170,	// (0x000758b7) cell_vitu2_function_top_pane_cp01

0x918c,	// (0x000758d3) cell_vitu2_function_top_wide_pane_ParamLimits

0x918c,	// (0x000758d3) cell_vitu2_function_top_wide_pane

0xba4a,	// (0x00078191) bg_button_pane_cp012

0x91aa,	// (0x000758f1) cell_vitu2_function_top_pane_g1

0xefa5,	// (0x0007b6ec) bg_button_pane_cp013_ParamLimits

0xefa5,	// (0x0007b6ec) bg_button_pane_cp013

0x91be,	// (0x00075905) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x91be,	// (0x00075905) cell_vitu2_function_top_wide_pane_g1

0xba4a,	// (0x00078191) bg_popup_sub_pane_cp20

0x91d6,	// (0x0007591d) list_vitu2_match_list_pane

0x89c3,	// (0x0007510a) bg_popup_sub_pane_cp20_g1

0x89cb,	// (0x00075112) bg_popup_sub_pane_cp20_g2

0xc0e1,	// (0x00078828) bg_popup_sub_pane_cp20_g3

0x89d3,	// (0x0007511a) bg_popup_sub_pane_cp20_g4

0xc0c1,	// (0x00078808) bg_popup_sub_pane_cp20_g5

0xd131,	// (0x00079878) bg_popup_sub_pane_cp20_g6

0x89e3,	// (0x0007512a) bg_popup_sub_pane_cp20_g7

0x89eb,	// (0x00075132) bg_popup_sub_pane_cp20_g8

0x89f3,	// (0x0007513a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf987,	// (0x0007c0ce) bg_popup_sub_pane_cp20_g

0xefc1,	// (0x0007b708) list_vitu2_match_list_item_pane_ParamLimits

0xefc1,	// (0x0007b708) list_vitu2_match_list_item_pane

0xefd3,	// (0x0007b71a) list_vitu2_match_list_item_pane_t1

0x35b6,	// (0x0006fcfd) bg_popup_sub_pane_cp21

0xbe90,	// (0x000785d7) grid_vitu2_dropdown_list_pane

0x91ee,	// (0x00075935) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x91ee,	// (0x00075935) cell_vitu2_dropdown_list_char_pane

0x920f,	// (0x00075956) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x920f,	// (0x00075956) cell_vitu2_dropdown_list_ctrl_pane

0xd139,	// (0x00079880) cell_vitu2_dropdown_list_char_pane_g1

0xd142,	// (0x00079889) cell_vitu2_dropdown_list_char_pane_g2

0xd14b,	// (0x00079892) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0007c0e1) cell_vitu2_dropdown_list_char_pane_g

0x9239,	// (0x00075980) cell_vitu2_dropdown_list_char_pane_t1

0x9247,	// (0x0007598e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9247,	// (0x0007598e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9257,	// (0x0007599e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9257,	// (0x0007599e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9268,	// (0x000759af) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9268,	// (0x000759af) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9278,	// (0x000759bf) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9278,	// (0x000759bf) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbbd0,	// (0x00078317) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbbd0,	// (0x00078317) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0007c0e8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0007c0e8) cell_vitu2_dropdown_list_ctrl_pane_g

0x9294,	// (0x000759db) aid_size_cell_gallery2_ParamLimits

0x9294,	// (0x000759db) aid_size_cell_gallery2

0x92b2,	// (0x000759f9) grid_gallery2_pane_ParamLimits

0x92b2,	// (0x000759f9) grid_gallery2_pane

0x92cc,	// (0x00075a13) scroll_pane_cp029_ParamLimits

0x92cc,	// (0x00075a13) scroll_pane_cp029

0x92dd,	// (0x00075a24) cell_gallery2_pane_ParamLimits

0x92dd,	// (0x00075a24) cell_gallery2_pane

0xd154,	// (0x0007989b) cell_gallery2_pane_g2

0x933c,	// (0x00075a83) cell_gallery2_pane_g3

0xd15c,	// (0x000798a3) cell_gallery2_pane_g4

0xd164,	// (0x000798ab) cell_gallery2_pane_g5

0xbe90,	// (0x000785d7) grid_highlight_pane_cp10

0x8845,	// (0x00074f8c) popup_vitu2_match_list_window_ParamLimits

0x885a,	// (0x00074fa1) popup_vitu2_query_window_ParamLimits

0x885a,	// (0x00074fa1) popup_vitu2_query_window

0x35b6,	// (0x0006fcfd) bg_vitu2_candi_button_pane

0xd139,	// (0x00079880) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd142,	// (0x00079889) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd14b,	// (0x00079892) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x300a,	// (0x0006f751) bg_button_pane_cp015

0x9344,	// (0x00075a8b) bg_button_pane_cp016

0x9357,	// (0x00075a9e) bg_button_pane_cp017

0x18b5,	// (0x0006dffc) bg_popup_sub_pane_cp22

0xd16c,	// (0x000798b3) popup_vitu2_query_window_g1

0x303b,	// (0x0006f782) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0007c0f3) popup_vitu2_query_window_g

0x304e,	// (0x0006f795) popup_vitu2_query_window_t1_ParamLimits

0x304e,	// (0x0006f795) popup_vitu2_query_window_t1

0x3083,	// (0x0006f7ca) popup_vitu2_query_window_t2_ParamLimits

0x3083,	// (0x0006f7ca) popup_vitu2_query_window_t2

0x3095,	// (0x0006f7dc) popup_vitu2_query_window_t3_ParamLimits

0x3095,	// (0x0006f7dc) popup_vitu2_query_window_t3

0x9387,	// (0x00075ace) popup_vitu2_query_window_t4_ParamLimits

0x9387,	// (0x00075ace) popup_vitu2_query_window_t4

0x93a8,	// (0x00075aef) popup_vitu2_query_window_t5_ParamLimits

0x93a8,	// (0x00075aef) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0007c0fa) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0007c0fa) popup_vitu2_query_window_t

0xcfdb,	// (0x00079722) main_cset_text_pane

0x8dd6,	// (0x0007551d) aid_area_touch_slider_ParamLimits

0x8df2,	// (0x00075539) cset_slider_pane_ParamLimits

0x8e15,	// (0x0007555c) main_cset_slider_pane_g1_ParamLimits

0x8e2a,	// (0x00075571) main_cset_slider_pane_g2_ParamLimits

0xcffc,	// (0x00079743) main_cset_slider_pane_g3_ParamLimits

0xcffc,	// (0x00079743) main_cset_slider_pane_g3

0x8e3f,	// (0x00075586) main_cset_slider_pane_g4_ParamLimits

0x8e3f,	// (0x00075586) main_cset_slider_pane_g4

0x8e4e,	// (0x00075595) main_cset_slider_pane_g5_ParamLimits

0x8e4e,	// (0x00075595) main_cset_slider_pane_g5

0x8e5a,	// (0x000755a1) main_cset_slider_pane_g6_ParamLimits

0x8e5a,	// (0x000755a1) main_cset_slider_pane_g6

0xf910,	// (0x0007c057) main_cset_slider_pane_g_ParamLimits

0xd044,	// (0x0007978b) main_cset_slider_pane_t1_ParamLimits

0x8ece,	// (0x00075615) main_cset_slider_pane_t2_ParamLimits

0x8ee8,	// (0x0007562f) main_cset_slider_pane_t3_ParamLimits

0x8f02,	// (0x00075649) main_cset_slider_pane_t4_ParamLimits

0x8f1c,	// (0x00075663) main_cset_slider_pane_t5_ParamLimits

0x8f36,	// (0x0007567d) main_cset_slider_pane_t6_ParamLimits

0x8f4b,	// (0x00075692) main_cset_slider_pane_t7_ParamLimits

0x8f75,	// (0x000756bc) main_cset_slider_pane_t8_ParamLimits

0x8f75,	// (0x000756bc) main_cset_slider_pane_t8

0x8f9d,	// (0x000756e4) main_cset_slider_pane_t9_ParamLimits

0x8f9d,	// (0x000756e4) main_cset_slider_pane_t9

0x8fc5,	// (0x0007570c) main_cset_slider_pane_t10_ParamLimits

0x8fc5,	// (0x0007570c) main_cset_slider_pane_t10

0x8fed,	// (0x00075734) main_cset_slider_pane_t11_ParamLimits

0x8fed,	// (0x00075734) main_cset_slider_pane_t11

0x9015,	// (0x0007575c) main_cset_slider_pane_t12_ParamLimits

0x9015,	// (0x0007575c) main_cset_slider_pane_t12

0x9032,	// (0x00075779) main_cset_slider_pane_t13_ParamLimits

0x9032,	// (0x00075779) main_cset_slider_pane_t13

0xf935,	// (0x0007c07c) main_cset_slider_pane_t_ParamLimits

0x35b6,	// (0x0006fcfd) bg_popup_sub_pane_cp011

0xd178,	// (0x000798bf) main_cset_text_pane_g1

0xd180,	// (0x000798c7) main_cset_text_pane_t1

0xd18e,	// (0x000798d5) main_cset_text_pane_t2

0xd19c,	// (0x000798e3) main_cset_text_pane_t3

0xd1aa,	// (0x000798f1) main_cset_text_pane_t4

0xd1b8,	// (0x000798ff) main_cset_text_pane_t5

0xd1c6,	// (0x0007990d) main_cset_text_pane_t6

0xd1d4,	// (0x0007991b) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0007c109) main_cset_text_pane_t

0x35b6,	// (0x0006fcfd) main_cam4_burst_pane

0x35b6,	// (0x0006fcfd) main_cam5_pane

0x8d00,	// (0x00075447) bg_button_pane_cp019

0x8d09,	// (0x00075450) bg_button_pane_cp020

0xd008,	// (0x0007974f) main_cset_slider_pane_g7_ParamLimits

0xd008,	// (0x0007974f) main_cset_slider_pane_g7

0xd014,	// (0x0007975b) main_cset_slider_pane_g8_ParamLimits

0xd014,	// (0x0007975b) main_cset_slider_pane_g8

0x8e6e,	// (0x000755b5) main_cset_slider_pane_g9_ParamLimits

0x8e6e,	// (0x000755b5) main_cset_slider_pane_g9

0x8e7a,	// (0x000755c1) main_cset_slider_pane_g10_ParamLimits

0x8e7a,	// (0x000755c1) main_cset_slider_pane_g10

0x8e86,	// (0x000755cd) main_cset_slider_pane_g11_ParamLimits

0x8e86,	// (0x000755cd) main_cset_slider_pane_g11

0x8e92,	// (0x000755d9) main_cset_slider_pane_g12_ParamLimits

0x8e92,	// (0x000755d9) main_cset_slider_pane_g12

0x8e9e,	// (0x000755e5) main_cset_slider_pane_g13_ParamLimits

0x8e9e,	// (0x000755e5) main_cset_slider_pane_g13

0x8eaa,	// (0x000755f1) main_cset_slider_pane_g14_ParamLimits

0x8eaa,	// (0x000755f1) main_cset_slider_pane_g14

0x8eb6,	// (0x000755fd) main_cset_slider_pane_g15_ParamLimits

0x8eb6,	// (0x000755fd) main_cset_slider_pane_g15

0xd06c,	// (0x000797b3) main_cset_slider_pane_t14_ParamLimits

0xd06c,	// (0x000797b3) main_cset_slider_pane_t14

0xd0a5,	// (0x000797ec) main_cset_slider_pane_t15_ParamLimits

0xd0a5,	// (0x000797ec) main_cset_slider_pane_t15

0x941f,	// (0x00075b66) aid_cam4_burst_size_cell_ParamLimits

0x941f,	// (0x00075b66) aid_cam4_burst_size_cell

0x943f,	// (0x00075b86) grid_cam4_burst_pane_ParamLimits

0x943f,	// (0x00075b86) grid_cam4_burst_pane

0x9477,	// (0x00075bbe) linegrid_cam4_burst_pane_ParamLimits

0x9477,	// (0x00075bbe) linegrid_cam4_burst_pane

0xd1e2,	// (0x00079929) scroll_pane_cp30_ParamLimits

0xd1e2,	// (0x00079929) scroll_pane_cp30

0x949b,	// (0x00075be2) cell_cam4_burst_pane_ParamLimits

0x949b,	// (0x00075be2) cell_cam4_burst_pane

0xd1ee,	// (0x00079935) linegrid_cam4_burst_pane_g1_ParamLimits

0xd1ee,	// (0x00079935) linegrid_cam4_burst_pane_g1

0x94e8,	// (0x00075c2f) linegrid_cam4_burst_pane_g2_ParamLimits

0x94e8,	// (0x00075c2f) linegrid_cam4_burst_pane_g2

0xd1fb,	// (0x00079942) linegrid_cam4_burst_pane_g3_ParamLimits

0xd1fb,	// (0x00079942) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0007c118) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0007c118) linegrid_cam4_burst_pane_g

0x94f9,	// (0x00075c40) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x94f9,	// (0x00075c40) linegrid_cam4_burst_pane_g3_copy1

0xd208,	// (0x0007994f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd208,	// (0x0007994f) linegrid_cam4_burst_pane_g4

0x9513,	// (0x00075c5a) linegrid_cam4_burst_pane_g5_ParamLimits

0x9513,	// (0x00075c5a) linegrid_cam4_burst_pane_g5

0x9524,	// (0x00075c6b) linegrid_cam4_burst_pane_g6_ParamLimits

0x9524,	// (0x00075c6b) linegrid_cam4_burst_pane_g6

0xd215,	// (0x0007995c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd215,	// (0x0007995c) linegrid_cam4_burst_pane_g7

0x953b,	// (0x00075c82) cell_cam4_burst_pane_g1

0xd22e,	// (0x00079975) main_cam5_pane_t1_ParamLimits

0xd22e,	// (0x00079975) main_cam5_pane_t1

0xd240,	// (0x00079987) main_cam5_pane_t2_ParamLimits

0xd240,	// (0x00079987) main_cam5_pane_t2

0xd252,	// (0x00079999) main_cam5_pane_t3_ParamLimits

0xd252,	// (0x00079999) main_cam5_pane_t3

0xd264,	// (0x000799ab) main_cam5_pane_t4_ParamLimits

0xd264,	// (0x000799ab) main_cam5_pane_t4

0xd27c,	// (0x000799c3) main_cam5_pane_t5_ParamLimits

0xd27c,	// (0x000799c3) main_cam5_pane_t5

0xd290,	// (0x000799d7) main_cam5_pane_t6_ParamLimits

0xd290,	// (0x000799d7) main_cam5_pane_t6

0xd2a4,	// (0x000799eb) main_cam5_pane_t7_ParamLimits

0xd2a4,	// (0x000799eb) main_cam5_pane_t7

0xd2b6,	// (0x000799fd) main_cam5_pane_t8_ParamLimits

0xd2b6,	// (0x000799fd) main_cam5_pane_t8

0xd2d2,	// (0x00079a19) main_cam5_pane_t9_ParamLimits

0xd2d2,	// (0x00079a19) main_cam5_pane_t9

0xd2e4,	// (0x00079a2b) main_cam5_pane_t10_ParamLimits

0xd2e4,	// (0x00079a2b) main_cam5_pane_t10

0xd2f6,	// (0x00079a3d) main_cam5_pane_t11_ParamLimits

0xd2f6,	// (0x00079a3d) main_cam5_pane_t11

0xd308,	// (0x00079a4f) main_cam5_pane_t12_ParamLimits

0xd308,	// (0x00079a4f) main_cam5_pane_t12

0xd31d,	// (0x00079a64) main_cam5_pane_t13_ParamLimits

0xd31d,	// (0x00079a64) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0007c124) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0007c124) main_cam5_pane_t

0x37a1,	// (0x0006fee8) popup_scut_keymap_window_ParamLimits

0x37a1,	// (0x0006fee8) popup_scut_keymap_window

0x954e,	// (0x00075c95) aid_size_cell_brow_shortcut

0xbe90,	// (0x000785d7) bg_popup_window_pane_cp010

0x955a,	// (0x00075ca1) grid_scut_pane

0x9566,	// (0x00075cad) cell_scut_pane_ParamLimits

0x9566,	// (0x00075cad) cell_scut_pane

0x957d,	// (0x00075cc4) cell_scut_pane_g1

0xd33a,	// (0x00079a81) cell_scut_pane_t1

0xd349,	// (0x00079a90) cell_scut_pane_t2

0x9586,	// (0x00075ccd) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0007c13f) cell_scut_pane_t

0x6f19,	// (0x00073660) main_mup3_pane_g8_ParamLimits

0x6f19,	// (0x00073660) main_mup3_pane_g8

0x875f,	// (0x00074ea6) area_vitu2_query_pane_ParamLimits

0x875f,	// (0x00074ea6) area_vitu2_query_pane

0x301c,	// (0x0006f763) input_focus_pane_cp08

0xd358,	// (0x00079a9f) area_vitu2_query_pane_g1

0x30bd,	// (0x0006f804) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0007c146) area_vitu2_query_pane_g

0x9594,	// (0x00075cdb) area_vitu2_query_pane_t1_ParamLimits

0x9594,	// (0x00075cdb) area_vitu2_query_pane_t1

0x95a8,	// (0x00075cef) area_vitu2_query_pane_t2_ParamLimits

0x95a8,	// (0x00075cef) area_vitu2_query_pane_t2

0x30ce,	// (0x0006f815) area_vitu2_query_pane_t3_ParamLimits

0x30ce,	// (0x0006f815) area_vitu2_query_pane_t3

0xd364,	// (0x00079aab) area_vitu2_query_pane_t4_ParamLimits

0xd364,	// (0x00079aab) area_vitu2_query_pane_t4

0xd38c,	// (0x00079ad3) area_vitu2_query_pane_t5_ParamLimits

0xd38c,	// (0x00079ad3) area_vitu2_query_pane_t5

0xd3b4,	// (0x00079afb) area_vitu2_query_pane_t6_ParamLimits

0xd3b4,	// (0x00079afb) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0007c14b) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0007c14b) area_vitu2_query_pane_t

0x95bc,	// (0x00075d03) bg_button_pane_cp018

0x95ca,	// (0x00075d11) bg_button_pane_cp021

0x30f6,	// (0x0006f83d) bg_button_pane_cp022

0x3107,	// (0x0006f84e) input_focus_pane_cp09

0xc79f,	// (0x00078ee6) aid_size_touch_mv_arrow_left

0xc7ca,	// (0x00078f11) aid_size_touch_mv_arrow_right

0xd020,	// (0x00079767) main_cset_slider_pane_g16_ParamLimits

0xd020,	// (0x00079767) main_cset_slider_pane_g16

0xd02c,	// (0x00079773) main_cset_slider_pane_g17_ParamLimits

0xd02c,	// (0x00079773) main_cset_slider_pane_g17

0x953b,	// (0x00075c82) cell_cam4_burst_pane_g1_ParamLimits

0x35b6,	// (0x0006fcfd) compa_mode_pane

0x9098,	// (0x000757df) popup_vtel_slider_window_g3_ParamLimits

0x9098,	// (0x000757df) popup_vtel_slider_window_g3

0x90af,	// (0x000757f6) popup_vtel_slider_window_g4_ParamLimits

0x90af,	// (0x000757f6) popup_vtel_slider_window_g4

0x90c6,	// (0x0007580d) popup_vtel_slider_window_t1_ParamLimits

0x90c6,	// (0x0007580d) popup_vtel_slider_window_t1

0x35b6,	// (0x0006fcfd) main_cl_pane

0xce9f,	// (0x000795e6) popup_imed_adjust2_window_ParamLimits

0x18b5,	// (0x0006dffc) bg_tb_trans_pane_cp05_ParamLimits

0x79c6,	// (0x0007410d) popup_imed_adjust2_window_g1_ParamLimits

0x79d5,	// (0x0007411c) popup_imed_adjust2_window_g2_ParamLimits

0x79d5,	// (0x0007411c) popup_imed_adjust2_window_g2

0x79e1,	// (0x00074128) popup_imed_adjust2_window_g3_ParamLimits

0x79e1,	// (0x00074128) popup_imed_adjust2_window_g3

0x0002,

0xf77a,	// (0x0007bec1) popup_imed_adjust2_window_g_ParamLimits

0xf77a,	// (0x0007bec1) popup_imed_adjust2_window_g

0x79ed,	// (0x00074134) popup_imed_adjust2_window_t1_ParamLimits

0x7a05,	// (0x0007414c) slider_imed_adjust_pane_ParamLimits

0x7a19,	// (0x00074160) slider_imed_adjust_pane_g1_ParamLimits

0x7a29,	// (0x00074170) slider_imed_adjust_pane_g2_ParamLimits

0x7a39,	// (0x00074180) slider_imed_adjust_pane_g3_ParamLimits

0x7a4a,	// (0x00074191) slider_imed_adjust_pane_g4_ParamLimits

0xf781,	// (0x0007bec8) slider_imed_adjust_pane_g_ParamLimits

0x84fb,	// (0x00074c42) aid_touch_area_cam4_ParamLimits

0x84fb,	// (0x00074c42) aid_touch_area_cam4

0xeea2,	// (0x0007b5e9) battery_pane_cp01

0x85ca,	// (0x00074d11) main_camera4_pane_g6_ParamLimits

0x85ca,	// (0x00074d11) main_camera4_pane_g6

0x85f4,	// (0x00074d3b) main_camera4_pane_t2_ParamLimits

0x85f4,	// (0x00074d3b) main_camera4_pane_t2

0x0001,

0xf883,	// (0x0007bfca) main_camera4_pane_t_ParamLimits

0xf883,	// (0x0007bfca) main_camera4_pane_t

0x8629,	// (0x00074d70) aid_touch_area_vid4_ParamLimits

0x8629,	// (0x00074d70) aid_touch_area_vid4

0x867d,	// (0x00074dc4) main_video4_pane_g5_ParamLimits

0x867d,	// (0x00074dc4) main_video4_pane_g5

0x86a2,	// (0x00074de9) vid4_progress_pane_ParamLimits

0x86a2,	// (0x00074de9) vid4_progress_pane

0xd038,	// (0x0007977f) main_cset_slider_pane_g18_ParamLimits

0xd038,	// (0x0007977f) main_cset_slider_pane_g18

0xd222,	// (0x00079969) cell_cam4_burst_pane_g2_ParamLimits

0xd222,	// (0x00079969) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0007c11f) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0007c11f) cell_cam4_burst_pane_g

0xbc64,	// (0x000783ab) bg_cl_pane_ParamLimits

0xbc64,	// (0x000783ab) bg_cl_pane

0x95d6,	// (0x00075d1d) cl_header_pane_ParamLimits

0x95d6,	// (0x00075d1d) cl_header_pane

0x95ea,	// (0x00075d31) cl_listscroll_pane_ParamLimits

0x95ea,	// (0x00075d31) cl_listscroll_pane

0xd400,	// (0x00079b47) bg_cl_pane_g1

0xd408,	// (0x00079b4f) bg_cl_pane_g2

0xd410,	// (0x00079b57) bg_cl_pane_g3

0xd418,	// (0x00079b5f) bg_cl_pane_g4

0xd420,	// (0x00079b67) bg_cl_pane_g5

0xd428,	// (0x00079b6f) bg_cl_pane_g6

0xd430,	// (0x00079b77) bg_cl_pane_g7

0xd438,	// (0x00079b7f) bg_cl_pane_g8

0xd440,	// (0x00079b87) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0007c15a) bg_cl_pane_g

0x95fa,	// (0x00075d41) aid_height_cl_leading_ParamLimits

0x95fa,	// (0x00075d41) aid_height_cl_leading

0x9606,	// (0x00075d4d) aid_height_cl_text_ParamLimits

0x9606,	// (0x00075d4d) aid_height_cl_text

0xba4a,	// (0x00078191) bg_cl_header_pane_ParamLimits

0xba4a,	// (0x00078191) bg_cl_header_pane

0x9625,	// (0x00075d6c) cl_header_pane_g1_ParamLimits

0x9625,	// (0x00075d6c) cl_header_pane_g1

0x963b,	// (0x00075d82) cl_header_pane_t1_ParamLimits

0x963b,	// (0x00075d82) cl_header_pane_t1

0xd448,	// (0x00079b8f) cl_list_pane

0xcff3,	// (0x0007973a) hc_scroll_pane_cp01

0xc0c1,	// (0x00078808) bg_cl_header_pane_g1

0x89c3,	// (0x0007510a) bg_cl_header_pane_g2

0xc0e1,	// (0x00078828) bg_cl_header_pane_g3

0x89d3,	// (0x0007511a) bg_cl_header_pane_g4

0x89cb,	// (0x00075112) bg_cl_header_pane_g5

0xd131,	// (0x00079878) bg_cl_header_pane_g6

0x89eb,	// (0x00075132) bg_cl_header_pane_g7

0x89f3,	// (0x0007513a) bg_cl_header_pane_g8

0x89e3,	// (0x0007512a) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0007c16d) bg_cl_header_pane_g

0x9654,	// (0x00075d9b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9654,	// (0x00075d9b) hc_cl_list_double_graphic_heading_pane

0x9665,	// (0x00075dac) hc_cl_list_single_graphic_pane_ParamLimits

0x9665,	// (0x00075dac) hc_cl_list_single_graphic_pane

0x967e,	// (0x00075dc5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x967e,	// (0x00075dc5) hc_cl_list_single_graphic_pane_g1

0x968a,	// (0x00075dd1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x968a,	// (0x00075dd1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0007c180) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0007c180) hc_cl_list_single_graphic_pane_g

0x969e,	// (0x00075de5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x969e,	// (0x00075de5) hc_cl_list_single_graphic_pane_t1

0x967e,	// (0x00075dc5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x967e,	// (0x00075dc5) hc_cl_list_double_graphic_heading_pane_g1

0x96b3,	// (0x00075dfa) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x96b3,	// (0x00075dfa) hc_cl_list_double_graphic_heading_pane_g2

0x96c7,	// (0x00075e0e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x96c7,	// (0x00075e0e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0007c185) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0007c185) hc_cl_list_double_graphic_heading_pane_g

0x96db,	// (0x00075e22) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x96db,	// (0x00075e22) hc_cl_list_double_graphic_heading_pane_t1

0x96f0,	// (0x00075e37) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x96f0,	// (0x00075e37) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0007c18c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0007c18c) hc_cl_list_double_graphic_heading_pane_t

0xefe9,	// (0x0007b730) vid4_progress_pane_g1

0xeff9,	// (0x0007b740) vid4_progress_pane_g2

0x9705,	// (0x00075e4c) vid4_progress_pane_g3

0xf009,	// (0x0007b750) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0007c191) vid4_progress_pane_g

0x9717,	// (0x00075e5e) vid4_progress_pane_t1

0xf021,	// (0x0007b768) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0007c19c) vid4_progress_pane_t

0x972d,	// (0x00075e74) wait_bar_pane_cp07

0x1af3,	// (0x0006e23a) blid_firmament_pane_ParamLimits

0x1b36,	// (0x0006e27d) popup_blid_sat_info2_window_g1

0x1b5a,	// (0x0006e2a1) popup_blid_sat_info2_window_t3

0x1b68,	// (0x0006e2af) popup_blid_sat_info2_window_t4

0x1b76,	// (0x0006e2bd) popup_blid_sat_info2_window_t5

0x1b84,	// (0x0006e2cb) popup_blid_sat_info2_window_t6

0x1b94,	// (0x0006e2db) popup_blid_sat_info2_window_t7

0x1ba2,	// (0x0006e2e9) popup_blid_sat_info2_window_t8

0x1bb0,	// (0x0006e2f7) popup_blid_sat_info2_window_t9

0x1bbe,	// (0x0006e305) popup_blid_sat_info2_window_t10

0x1c7f,	// (0x0006e3c6) aid_firma_cardinal_ParamLimits

0x1c93,	// (0x0006e3da) blid_firmament_pane_t1_ParamLimits

0x1caa,	// (0x0006e3f1) blid_firmament_pane_t2_ParamLimits

0x1cc1,	// (0x0006e408) blid_firmament_pane_t3_ParamLimits

0x1cd8,	// (0x0006e41f) blid_firmament_pane_t4_ParamLimits

0xf673,	// (0x0007bdba) blid_firmament_pane_t_ParamLimits

0x1cef,	// (0x0006e436) blid_sat_info_pane_ParamLimits

0xba4a,	// (0x00078191) main_cam_set_pane_ParamLimits

0x782a,	// (0x00073f71) aid_size_cell_colour_35_ParamLimits

0x784a,	// (0x00073f91) aid_size_cell_colour_112_ParamLimits

0x786a,	// (0x00073fb1) aid_size_cell_effect_ParamLimits

0x18b5,	// (0x0006dffc) bg_tb_trans_pane_cp02_ParamLimits

0xc357,	// (0x00078a9e) heading_imed_pane_ParamLimits

0x788a,	// (0x00073fd1) listscroll_imed_pane_ParamLimits

0x0f84,	// (0x0006d6cb) popup_call2_audio_first_window_g5_ParamLimits

0x0f84,	// (0x0006d6cb) popup_call2_audio_first_window_g5

0x80e9,	// (0x00074830) aid_size_touch_image3_arrow_left_ParamLimits

0x80e9,	// (0x00074830) aid_size_touch_image3_arrow_left

0x8115,	// (0x0007485c) aid_size_touch_image3_arrow_right_ParamLimits

0x8115,	// (0x0007485c) aid_size_touch_image3_arrow_right

0xf036,	// (0x0007b77d) vid4_progress_pane_t3

0x7d37,	// (0x0007447e) main_hwr_training_symbol_option_pane_ParamLimits

0x7d37,	// (0x0007447e) main_hwr_training_symbol_option_pane

0x7d57,	// (0x0007449e) popup_hwr_training_preview_window_ParamLimits

0x7d57,	// (0x0007449e) popup_hwr_training_preview_window

0x7da4,	// (0x000744eb) hwr_training_navi_pane_g5_ParamLimits

0x7da4,	// (0x000744eb) hwr_training_navi_pane_g5

0x890b,	// (0x00075052) popup_char_count_window

0xba4a,	// (0x00078191) bg_popup_sub_pane_cp20_ParamLimits

0x91d6,	// (0x0007591d) list_vitu2_match_list_pane_ParamLimits

0x91e2,	// (0x00075929) vitu2_page_scroll_pane_ParamLimits

0x91e2,	// (0x00075929) vitu2_page_scroll_pane

0xd46b,	// (0x00079bb2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd46b,	// (0x00079bb2) list_single_hwr_training_symbol_option_pane

0xd47e,	// (0x00079bc5) list_single_hwr_training_symbol_option_pane_g1

0xd486,	// (0x00079bcd) list_single_hwr_training_symbol_option_pane_t1

0xd494,	// (0x00079bdb) bg_button_pane_cp023

0xd49d,	// (0x00079be4) bg_button_pane_cp024

0xd4d0,	// (0x00079c17) vitu2_page_scroll_pane_g1

0xd4d8,	// (0x00079c1f) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0007c1a3) vitu2_page_scroll_pane_g

0xd4e0,	// (0x00079c27) vitu2_page_scroll_pane_t1

0x1d1e,	// (0x0006e465) popup_char_count_window_g1

0xd4ef,	// (0x00079c36) popup_char_count_window_g2

0x1fe9,	// (0x0006e730) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0007c1a8) popup_char_count_window_g

0xd4f8,	// (0x00079c3f) popup_char_count_window_t1

0x35b6,	// (0x0006fcfd) main_vded2_pane

0x79b2,	// (0x000740f9) aid_size_cell_imed_line

0x79bc,	// (0x00074103) grid_imed_line_width_pane

0xef52,	// (0x0007b699) vid4_indicators_pane_g4

0xd506,	// (0x00079c4d) cell_imed_line_width_pane_ParamLimits

0xd506,	// (0x00079c4d) cell_imed_line_width_pane

0xd51a,	// (0x00079c61) cell_imed_line_width_pane_g1

0xd523,	// (0x00079c6a) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0007c1af) cell_imed_line_width_pane_g

0x973e,	// (0x00075e85) main_vded2_pane_g1_ParamLimits

0x973e,	// (0x00075e85) main_vded2_pane_g1

0x9754,	// (0x00075e9b) main_vded2_pane_g2_ParamLimits

0x9754,	// (0x00075e9b) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0007c1b4) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0007c1b4) main_vded2_pane_g

0x9766,	// (0x00075ead) vded2_slider_pane_ParamLimits

0x9766,	// (0x00075ead) vded2_slider_pane

0x9776,	// (0x00075ebd) aid_size_touch_vded2_end

0x9780,	// (0x00075ec7) aid_size_touch_vded2_playhead

0xd52b,	// (0x00079c72) aid_size_touch_vded2_start

0xd533,	// (0x00079c7a) vded2_slider_bg_pane

0xd53c,	// (0x00079c83) vded2_slider_pane_g1

0xd545,	// (0x00079c8c) vded2_slider_pane_g2

0x978a,	// (0x00075ed1) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0007c1b9) vded2_slider_pane_g

0xd54d,	// (0x00079c94) vded2_slider_bg_pane_g1

0xd556,	// (0x00079c9d) vded2_slider_bg_pane_g2

0xd55f,	// (0x00079ca6) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0007c1c0) vded2_slider_bg_pane_g

0x5cbe,	// (0x00072405) aid_postcard_touch_down_pane_ParamLimits

0x5cbe,	// (0x00072405) aid_postcard_touch_down_pane

0x5cd4,	// (0x0007241b) aid_postcard_touch_up_pane_ParamLimits

0x5cd4,	// (0x0007241b) aid_postcard_touch_up_pane

0x35b6,	// (0x0006fcfd) main_blid2_pane

0xce85,	// (0x000795cc) popup_blid2_search_window

0x35b6,	// (0x0006fcfd) blid2_gps_pane

0x35b6,	// (0x0006fcfd) blid2_navig_pane

0x35b6,	// (0x0006fcfd) blid2_search_pane

0x35b6,	// (0x0006fcfd) blid2_tripm_pane

0x9795,	// (0x00075edc) blid2_search_pane_g1_ParamLimits

0x9795,	// (0x00075edc) blid2_search_pane_g1

0x97ad,	// (0x00075ef4) blid2_search_pane_t1_ParamLimits

0x97ad,	// (0x00075ef4) blid2_search_pane_t1

0x97bf,	// (0x00075f06) aid_size_cell_blid2_gps_ParamLimits

0x97bf,	// (0x00075f06) aid_size_cell_blid2_gps

0x97d7,	// (0x00075f1e) blid2_gps_pane_g1_ParamLimits

0x97d7,	// (0x00075f1e) blid2_gps_pane_g1

0x97eb,	// (0x00075f32) grid_blid2_satellite_pane_ParamLimits

0x97eb,	// (0x00075f32) grid_blid2_satellite_pane

0x9805,	// (0x00075f4c) blid2_navig_pane_g1_ParamLimits

0x9805,	// (0x00075f4c) blid2_navig_pane_g1

0x9811,	// (0x00075f58) blid2_navig_pane_t1_ParamLimits

0x9811,	// (0x00075f58) blid2_navig_pane_t1

0x982c,	// (0x00075f73) blid2_navig_pane_t2_ParamLimits

0x982c,	// (0x00075f73) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0007c1c7) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0007c1c7) blid2_navig_pane_t

0x9847,	// (0x00075f8e) blid2_navig_ring_pane_ParamLimits

0x9847,	// (0x00075f8e) blid2_navig_ring_pane

0x9860,	// (0x00075fa7) blid2_speed_pane_ParamLimits

0x9860,	// (0x00075fa7) blid2_speed_pane

0x986c,	// (0x00075fb3) blid2_tripm_pane_g1_ParamLimits

0x986c,	// (0x00075fb3) blid2_tripm_pane_g1

0x9887,	// (0x00075fce) blid2_tripm_pane_g2_ParamLimits

0x9887,	// (0x00075fce) blid2_tripm_pane_g2

0x989b,	// (0x00075fe2) blid2_tripm_pane_g3_ParamLimits

0x989b,	// (0x00075fe2) blid2_tripm_pane_g3

0x98af,	// (0x00075ff6) blid2_tripm_pane_g4_ParamLimits

0x98af,	// (0x00075ff6) blid2_tripm_pane_g4

0x98c3,	// (0x0007600a) blid2_tripm_pane_g5_ParamLimits

0x98c3,	// (0x0007600a) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0007c1cc) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0007c1cc) blid2_tripm_pane_g

0x98e9,	// (0x00076030) blid2_tripm_pane_t1_ParamLimits

0x98e9,	// (0x00076030) blid2_tripm_pane_t1

0x9904,	// (0x0007604b) blid2_tripm_pane_t2_ParamLimits

0x9904,	// (0x0007604b) blid2_tripm_pane_t2

0x991d,	// (0x00076064) blid2_tripm_pane_t3_ParamLimits

0x991d,	// (0x00076064) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0007c1d9) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0007c1d9) blid2_tripm_pane_t

0x9964,	// (0x000760ab) cell_blid2_satellite_pane_ParamLimits

0x9964,	// (0x000760ab) cell_blid2_satellite_pane

0x9982,	// (0x000760c9) cell_blid2_satellite_pane_g1

0xd568,	// (0x00079caf) cell_blid2_satellite_pane_t1

0xbed0,	// (0x00078617) blid2_speed_pane_g1

0xd576,	// (0x00079cbd) blid2_speed_pane_t1

0xd584,	// (0x00079ccb) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0007c1e2) blid2_speed_pane_t

0xbed0,	// (0x00078617) blid2_navig_ring_pane_g1

0x998b,	// (0x000760d2) blid2_navig_ring_pane_g2

0x9993,	// (0x000760da) blid2_navig_ring_pane_g3

0x999b,	// (0x000760e2) blid2_navig_ring_pane_g4

0x99a3,	// (0x000760ea) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0007c1e7) blid2_navig_ring_pane_g

0x35b6,	// (0x0006fcfd) bg_popup_window_pane_cp011

0xd592,	// (0x00079cd9) popup_blid2_search_window_g1

0xd59a,	// (0x00079ce1) popup_blid2_search_window_t1

0xd5a8,	// (0x00079cef) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0007c1f2) popup_blid2_search_window_t

0xbfd0,	// (0x00078717) main_browser_pane_g1

0xbc64,	// (0x000783ab) main_browser_pane_ParamLimits

0xba4a,	// (0x00078191) bg_button_pane_cp011_ParamLimits

0x89a5,	// (0x000750ec) cell_vitu2_function_pane_g1_ParamLimits

0x18b5,	// (0x0006dffc) bg_popup_sub_pane_cp22_ParamLimits

0x301c,	// (0x0006f763) input_focus_pane_cp08_ParamLimits

0x936a,	// (0x00075ab1) popup_vitu2_query_button_pane_ParamLimits

0x936a,	// (0x00075ab1) popup_vitu2_query_button_pane

0x3033,	// (0x0006f77a) popup_vitu2_query_input_button_pane

0xd16c,	// (0x000798b3) popup_vitu2_query_window_g1_ParamLimits

0x303b,	// (0x0006f782) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0007c0f3) popup_vitu2_query_window_g_ParamLimits

0x35b6,	// (0x0006fcfd) bg_button_pane_cp026

0x99ab,	// (0x000760f2) popup_vitu2_query_input_button_pane_g1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp025

0xd5b6,	// (0x00079cfd) popup_vitu2_query_button_pane_t1

0x6be7,	// (0x0007332e) main_mp3_pane_t6

0x6bf5,	// (0x0007333c) popup_slider_window_cp01

0xeebe,	// (0x0007b605) cam4_battery_pane

0xef11,	// (0x0007b658) cam4_battery_pane_cp02

0xefe1,	// (0x0007b728) cam4_battery_pane_cp01

0xefe1,	// (0x0007b728) cam4_battery_pane_cp03

0xbed0,	// (0x00078617) cam4_battery_pane_g1

0x1ff2,	// (0x0006e739) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0007c1f7) cam4_battery_pane_g

0x1bcc,	// (0x0006e313) popup_blid_sat_info2_window_t11

0xc79f,	// (0x00078ee6) aid_size_touch_mv_arrow_left_ParamLimits

0xc7ca,	// (0x00078f11) aid_size_touch_mv_arrow_right_ParamLimits

0xc828,	// (0x00078f6f) navi_pane_g1_ParamLimits

0xc834,	// (0x00078f7b) navi_pane_g2_ParamLimits

0xc862,	// (0x00078fa9) navi_pane_g3_ParamLimits

0xf374,	// (0x0007babb) navi_pane_g_ParamLimits

0x59d5,	// (0x0007211c) navi_pane_mv_t1_ParamLimits

0x78c4,	// (0x0007400b) grid_imed_effect_pane_ParamLimits

0x4908,	// (0x0007104f) aid_placing_vt_slider_lsc

0xbf1f,	// (0x00078666) aid_placing_vt_slider_prt

0xba4a,	// (0x00078191) bg_tb_trans_pane_cp01_ParamLimits

0x1e73,	// (0x0006e5ba) popup_image_details_window_g1_ParamLimits

0x1e86,	// (0x0006e5cd) popup_image_details_window_g2_ParamLimits

0x1e9b,	// (0x0006e5e2) popup_image_details_window_g3_ParamLimits

0x1e9b,	// (0x0006e5e2) popup_image_details_window_g3

0xf6b3,	// (0x0007bdfa) popup_image_details_window_g_ParamLimits

0x1eaf,	// (0x0006e5f6) popup_image_details_window_t1_ParamLimits

0x1ec1,	// (0x0006e608) popup_image_details_window_t2_ParamLimits

0x1eda,	// (0x0006e621) popup_image_details_window_t3_ParamLimits

0x1eee,	// (0x0006e635) popup_image_details_window_t4_ParamLimits

0x1f09,	// (0x0006e650) popup_image_details_window_t5_ParamLimits

0xf6ba,	// (0x0007be01) popup_image_details_window_t_ParamLimits

0x9612,	// (0x00075d59) cl_header_name_pane_ParamLimits

0x9612,	// (0x00075d59) cl_header_name_pane

0x99b3,	// (0x000760fa) cl_header_name_pane_t1_ParamLimits

0x99b3,	// (0x000760fa) cl_header_name_pane_t1

0x99d4,	// (0x0007611b) cl_header_name_pane_t2_ParamLimits

0x99d4,	// (0x0007611b) cl_header_name_pane_t2

0x9a16,	// (0x0007615d) cl_header_name_pane_t3_ParamLimits

0x9a16,	// (0x0007615d) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0007c1fc) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0007c1fc) cl_header_name_pane_t

0xc8f1,	// (0x00079038) navi_pane_mv_g2_ParamLimits

0x88f3,	// (0x0007503a) field_vitu2_entry_pane_g1_ParamLimits

0x88ff,	// (0x00075046) field_vitu2_entry_pane_g2_ParamLimits

0x1992,	// (0x0006e0d9) field_vitu2_entry_pane_g3_ParamLimits

0x1992,	// (0x0006e0d9) field_vitu2_entry_pane_g3

0xf8b5,	// (0x0007bffc) field_vitu2_entry_pane_g_ParamLimits

0x8921,	// (0x00075068) cell_vitu2_itu_pane_g1_ParamLimits

0x8939,	// (0x00075080) cell_vitu2_itu_pane_g2_ParamLimits

0x8939,	// (0x00075080) cell_vitu2_itu_pane_g2

0x0001,

0xf8c1,	// (0x0007c008) cell_vitu2_itu_pane_g_ParamLimits

0xf8c1,	// (0x0007c008) cell_vitu2_itu_pane_g

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp05_ParamLimits

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp05

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp03

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp04

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp10_ParamLimits

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp10

0x30f6,	// (0x0006f83d) bg_vkb2_func_pane_cp08

0x95bc,	// (0x00075d03) bg_vkb2_func_pane_cp06

0x95ca,	// (0x00075d11) bg_vkb2_func_pane_cp07

0xd4a6,	// (0x00079bed) bg_vkb2_func_pane_cp11_ParamLimits

0xd4a6,	// (0x00079bed) bg_vkb2_func_pane_cp11

0xd4bb,	// (0x00079c02) bg_vkb2_func_pane_cp12_ParamLimits

0xd4bb,	// (0x00079c02) bg_vkb2_func_pane_cp12

0x35b6,	// (0x0006fcfd) bg_vkb2_func_pane_cp09

0x89c3,	// (0x0007510a) bg_vkb2_func_pane_g1

0xc0e1,	// (0x00078828) bg_vkb2_func_pane_g2

0x89cb,	// (0x00075112) bg_vkb2_func_pane_g3

0x89d3,	// (0x0007511a) bg_vkb2_func_pane_g4

0xd131,	// (0x00079878) bg_vkb2_func_pane_g5

0x89eb,	// (0x00075132) bg_vkb2_func_pane_g6

0x89f3,	// (0x0007513a) bg_vkb2_func_pane_g7

0x89e3,	// (0x0007512a) bg_vkb2_func_pane_g8

0xc0c1,	// (0x00078808) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0007c203) bg_vkb2_func_pane_g

0x98d7,	// (0x0007601e) blid2_tripm_pane_g6_ParamLimits

0x98d7,	// (0x0007601e) blid2_tripm_pane_g6

0x7f6c,	// (0x000746b3) mp4_progress_pane_g1

0x9950,	// (0x00076097) blid2_tripm_values_pane_ParamLimits

0x9950,	// (0x00076097) blid2_tripm_values_pane

0x9a47,	// (0x0007618e) blid2_tripm_values_pane_t1

0x9a55,	// (0x0007619c) blid2_tripm_values_pane_t2

0x9a63,	// (0x000761aa) blid2_tripm_values_pane_t3

0x9a71,	// (0x000761b8) blid2_tripm_values_pane_t4

0x9a7f,	// (0x000761c6) blid2_tripm_values_pane_t5

0x9a8d,	// (0x000761d4) blid2_tripm_values_pane_t6

0x9a9b,	// (0x000761e2) blid2_tripm_values_pane_t7

0x9aa9,	// (0x000761f0) blid2_tripm_values_pane_t8

0x9ab7,	// (0x000761fe) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0007c216) blid2_tripm_values_pane_t

0x494a,	// (0x00071091) call_video_pane_t1_ParamLimits

0x4968,	// (0x000710af) call_video_pane_t2_ParamLimits

0xf222,	// (0x0007b969) call_video_pane_t_ParamLimits

0x2ebc,	// (0x0006f603) msg_header_pane_g1_ParamLimits

0xcae4,	// (0x0007922b) msg_header_pane_g2_ParamLimits

0xcae4,	// (0x0007922b) msg_header_pane_g2

0x0001,

0xf417,	// (0x0007bb5e) msg_header_pane_g_ParamLimits

0xf417,	// (0x0007bb5e) msg_header_pane_g

0xbc64,	// (0x000783ab) main_clock2_pane_ParamLimits

0x7545,	// (0x00073c8c) grid_clock2_toolbar_pane_ParamLimits

0x7545,	// (0x00073c8c) grid_clock2_toolbar_pane

0x7545,	// (0x00073c8c) listscroll_clock2_pane_ParamLimits

0x7545,	// (0x00073c8c) listscroll_clock2_pane

0x765b,	// (0x00073da2) main_clock2_pane_t3_ParamLimits

0x765b,	// (0x00073da2) main_clock2_pane_t3

0x767f,	// (0x00073dc6) main_clock2_pane_t4_ParamLimits

0x767f,	// (0x00073dc6) main_clock2_pane_t4

0xd5c4,	// (0x00079d0b) cell_clock2_toolbar_pane

0xd5cc,	// (0x00079d13) cell_clock2_toolbar_pane_cp01

0xd5cc,	// (0x00079d13) cell_clock2_toolbar_pane_cp02

0xd5d4,	// (0x00079d1b) cell_clock2_toolbar_pane_cp03

0xd5dc,	// (0x00079d23) list_clock2_pane

0xc724,	// (0x00078e6b) scroll_pane_cp10

0xd5e4,	// (0x00079d2b) list_single_clock2_pane_ParamLimits

0xd5e4,	// (0x00079d2b) list_single_clock2_pane

0xbe90,	// (0x000785d7) list_highlight_pane_cp08

0xd5f1,	// (0x00079d38) list_single_clock2_pane_t1

0xd5ff,	// (0x00079d46) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0007c229) list_single_clock2_pane_t

0x35b6,	// (0x0006fcfd) bg_button_pane_cp10

0xd60d,	// (0x00079d54) cell_clock2_toolbar_pane_g1

0x5c4a,	// (0x00072391) aid_main_viewer_pane_g1_ParamLimits

0x5c4a,	// (0x00072391) aid_main_viewer_pane_g1

0x5c58,	// (0x0007239f) aid_main_viewer_pane_g2_ParamLimits

0x5c58,	// (0x0007239f) aid_main_viewer_pane_g2

0x5c66,	// (0x000723ad) aid_main_viewer_pane_g3_ParamLimits

0x5c66,	// (0x000723ad) aid_main_viewer_pane_g3

0x5c75,	// (0x000723bc) aid_main_viewer_pane_g4_ParamLimits

0x5c75,	// (0x000723bc) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0007bb6f) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0007bb6f) aid_main_viewer_pane_g

0x65be,	// (0x00072d05) main_calc_pane_ParamLimits

0x65d2,	// (0x00072d19) main_dialer2_pane_ParamLimits

0x35b6,	// (0x0006fcfd) main_cam6_pane

0x35b6,	// (0x0006fcfd) main_vid6_pane

0x7551,	// (0x00073c98) listscroll_gen_pane_cp06_ParamLimits

0x7551,	// (0x00073c98) listscroll_gen_pane_cp06

0x76a2,	// (0x00073de9) main_clock2_pane_t5_ParamLimits

0x76a2,	// (0x00073de9) main_clock2_pane_t5

0x7700,	// (0x00073e47) aid_call2_pane_cp10_ParamLimits

0x7712,	// (0x00073e59) aid_call_pane_cp10_ParamLimits

0xc793,	// (0x00078eda) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc793,	// (0x00078eda) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7724,	// (0x00073e6b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7724,	// (0x00073e6b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc793,	// (0x00078eda) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf76f,	// (0x0007beb6) popup_clock_analogue_window_cp10_g_ParamLimits

0x773a,	// (0x00073e81) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8096,	// (0x000747dd) cell_dialer2_keypad_pane_g2_ParamLimits

0x8096,	// (0x000747dd) cell_dialer2_keypad_pane_g2

0x0001,

0xf854,	// (0x0007bf9b) cell_dialer2_keypad_pane_g_ParamLimits

0xf854,	// (0x0007bf9b) cell_dialer2_keypad_pane_g

0x80b2,	// (0x000747f9) cell_dialer2_keypad_pane_t1

0x8dc8,	// (0x0007550f) main_cset_text2_pane_ParamLimits

0x8dc8,	// (0x0007550f) main_cset_text2_pane

0xd358,	// (0x00079a9f) area_vitu2_query_pane_g1_ParamLimits

0x30bd,	// (0x0006f804) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0007c146) area_vitu2_query_pane_g_ParamLimits

0xd3dc,	// (0x00079b23) area_vitu2_query_pane_t7_ParamLimits

0xd3dc,	// (0x00079b23) area_vitu2_query_pane_t7

0x95bc,	// (0x00075d03) bg_button_pane_cp018_ParamLimits

0x95ca,	// (0x00075d11) bg_button_pane_cp021_ParamLimits

0x30f6,	// (0x0006f83d) bg_button_pane_cp022_ParamLimits

0x30f6,	// (0x0006f83d) bg_vkb2_func_pane_cp08_ParamLimits

0x95bc,	// (0x00075d03) bg_vkb2_func_pane_cp06_ParamLimits

0x95ca,	// (0x00075d11) bg_vkb2_func_pane_cp07_ParamLimits

0x3107,	// (0x0006f84e) input_focus_pane_cp09_ParamLimits

0xf054,	// (0x0007b79b) cam6_autofocus_pane_ParamLimits

0xf054,	// (0x0007b79b) cam6_autofocus_pane

0x9ac5,	// (0x0007620c) cam6_image_uncrop_pane_ParamLimits

0x9ac5,	// (0x0007620c) cam6_image_uncrop_pane

0x9ad4,	// (0x0007621b) cam6_indi_pane_ParamLimits

0x9ad4,	// (0x0007621b) cam6_indi_pane

0x9aea,	// (0x00076231) cam6_mode_pane_ParamLimits

0x9aea,	// (0x00076231) cam6_mode_pane

0x9afc,	// (0x00076243) cam6_timer_pane_ParamLimits

0x9afc,	// (0x00076243) cam6_timer_pane

0x9b0c,	// (0x00076253) cam6_zoom_pane_ParamLimits

0x9b0c,	// (0x00076253) cam6_zoom_pane

0x9b18,	// (0x0007625f) cam6_mode_pane_g1_ParamLimits

0x9b18,	// (0x0007625f) cam6_mode_pane_g1

0x9b28,	// (0x0007626f) cam6_mode_pane_g2_ParamLimits

0x9b28,	// (0x0007626f) cam6_mode_pane_g2

0x9b38,	// (0x0007627f) cam6_mode_pane_g3_ParamLimits

0x9b38,	// (0x0007627f) cam6_mode_pane_g3

0x9b48,	// (0x0007628f) cam6_mode_pane_g4_ParamLimits

0x9b48,	// (0x0007628f) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0007c22e) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0007c22e) cam6_mode_pane_g

0x1fdb,	// (0x0006e722) bg_tb_trans_pane_cp08_ParamLimits

0x1fdb,	// (0x0006e722) bg_tb_trans_pane_cp08

0xd615,	// (0x00079d5c) cam6_battery_pane_ParamLimits

0xd615,	// (0x00079d5c) cam6_battery_pane

0xd62b,	// (0x00079d72) cam6_indi_pane_g1_ParamLimits

0xd62b,	// (0x00079d72) cam6_indi_pane_g1

0xd63d,	// (0x00079d84) cam6_indi_pane_g2_ParamLimits

0xd63d,	// (0x00079d84) cam6_indi_pane_g2

0xd64f,	// (0x00079d96) cam6_indi_pane_g3_ParamLimits

0xd64f,	// (0x00079d96) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0007c237) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0007c237) cam6_indi_pane_g

0xd661,	// (0x00079da8) cam6_indi_pane_t1_ParamLimits

0xd661,	// (0x00079da8) cam6_indi_pane_t1

0x9b58,	// (0x0007629f) cam6_autofocus_pane_g1

0x9b60,	// (0x000762a7) cam6_autofocus_pane_g2

0x9b68,	// (0x000762af) cam6_autofocus_pane_g3

0x9b70,	// (0x000762b7) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0007c23e) cam6_autofocus_pane_g

0xd687,	// (0x00079dce) cam6_timer_pane_g1

0xd68f,	// (0x00079dd6) cam6_timer_pane_t1

0xd69d,	// (0x00079de4) cam6_zoom_cont_pane

0xd6a5,	// (0x00079dec) cam6_zoom_pane_g1

0xd6ad,	// (0x00079df4) cam6_zoom_pane_g2

0x9b78,	// (0x000762bf) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0007c247) cam6_zoom_pane_g

0xbed0,	// (0x00078617) cam6_battery_pane_g1

0xbed0,	// (0x00078617) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0007bb1f) cam6_battery_pane_g

0xd6b5,	// (0x00079dfc) cam6_zoom_cont_pane_g1

0xd6be,	// (0x00079e05) cam6_zoom_cont_pane_g2

0xd6c7,	// (0x00079e0e) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0007c24e) cam6_zoom_cont_pane_g

0x9b95,	// (0x000762dc) cam6_mode_pane_cp_ParamLimits

0x9b95,	// (0x000762dc) cam6_mode_pane_cp

0x9b0c,	// (0x00076253) cam6_zoom_pane_cp_ParamLimits

0x9b0c,	// (0x00076253) cam6_zoom_pane_cp

0x9ba7,	// (0x000762ee) vid6_image_uncrop_cif_pane_ParamLimits

0x9ba7,	// (0x000762ee) vid6_image_uncrop_cif_pane

0x9bb7,	// (0x000762fe) vid6_image_uncrop_nhd_pane_ParamLimits

0x9bb7,	// (0x000762fe) vid6_image_uncrop_nhd_pane

0x9ac5,	// (0x0007620c) vid6_image_uncrop_vga_pane_ParamLimits

0x9ac5,	// (0x0007620c) vid6_image_uncrop_vga_pane

0x9bc6,	// (0x0007630d) vid6_image_uncrop_wvga_pane_ParamLimits

0x9bc6,	// (0x0007630d) vid6_image_uncrop_wvga_pane

0x9bd5,	// (0x0007631c) vid6_indi_pane_ParamLimits

0x9bd5,	// (0x0007631c) vid6_indi_pane

0x1fdb,	// (0x0006e722) bg_tb_trans_pane_cp09_ParamLimits

0x1fdb,	// (0x0006e722) bg_tb_trans_pane_cp09

0xd6df,	// (0x00079e26) cam6_battery_pane_cp_ParamLimits

0xd6df,	// (0x00079e26) cam6_battery_pane_cp

0xd6eb,	// (0x00079e32) vid6_indi_pane_g1_ParamLimits

0xd6eb,	// (0x00079e32) vid6_indi_pane_g1

0xd6fd,	// (0x00079e44) vid6_indi_pane_g2_ParamLimits

0xd6fd,	// (0x00079e44) vid6_indi_pane_g2

0xd70f,	// (0x00079e56) vid6_indi_pane_g3_ParamLimits

0xd70f,	// (0x00079e56) vid6_indi_pane_g3

0xd724,	// (0x00079e6b) vid6_indi_pane_g4_ParamLimits

0xd724,	// (0x00079e6b) vid6_indi_pane_g4

0xd739,	// (0x00079e80) vid6_indi_pane_g5_ParamLimits

0xd739,	// (0x00079e80) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0007c255) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0007c255) vid6_indi_pane_g

0xd753,	// (0x00079e9a) vid6_indi_pane_t1_ParamLimits

0xd753,	// (0x00079e9a) vid6_indi_pane_t1

0xd769,	// (0x00079eb0) vid6_indi_pane_t2_ParamLimits

0xd769,	// (0x00079eb0) vid6_indi_pane_t2

0xd791,	// (0x00079ed8) vid6_indi_pane_t3_ParamLimits

0xd791,	// (0x00079ed8) vid6_indi_pane_t3

0xd7b9,	// (0x00079f00) vid6_indi_pane_t4_ParamLimits

0xd7b9,	// (0x00079f00) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0007c260) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0007c260) vid6_indi_pane_t

0xd7dd,	// (0x00079f24) wait_bar_pane_cp08

0x9bed,	// (0x00076334) main_cset_text2_pane_t1_ParamLimits

0x9bed,	// (0x00076334) main_cset_text2_pane_t1

0x9b80,	// (0x000762c7) listscroll_gen_pane_cp06_t1_ParamLimits

0x9b80,	// (0x000762c7) listscroll_gen_pane_cp06_t1

0x35b6,	// (0x0006fcfd) main_cam6_set_pane

0xbbd0,	// (0x00078317) bg_tb_trans_pane_cp06_ParamLimits

0xeec6,	// (0x0007b60d) cam4_indicators_pane_g1_ParamLimits

0xeed7,	// (0x0007b61e) cam4_indicators_pane_g2_ParamLimits

0xf891,	// (0x0007bfd8) cam4_indicators_pane_g_ParamLimits

0xeeef,	// (0x0007b636) cam4_indicators_pane_t1_ParamLimits

0xba4a,	// (0x00078191) bg_tb_trans_pane_cp07_ParamLimits

0xef19,	// (0x0007b660) vid4_indicators_pane_g1_ParamLimits

0xef2d,	// (0x0007b674) vid4_indicators_pane_g2_ParamLimits

0xef41,	// (0x0007b688) vid4_indicators_pane_g3_ParamLimits

0xef52,	// (0x0007b699) vid4_indicators_pane_g4_ParamLimits

0xf8a3,	// (0x0007bfea) vid4_indicators_pane_g_ParamLimits

0xef6e,	// (0x0007b6b5) vid4_indicators_pane_t1_ParamLimits

0xefe9,	// (0x0007b730) vid4_progress_pane_g1_ParamLimits

0xeff9,	// (0x0007b740) vid4_progress_pane_g2_ParamLimits

0x9705,	// (0x00075e4c) vid4_progress_pane_g3_ParamLimits

0xf009,	// (0x0007b750) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0007c191) vid4_progress_pane_g_ParamLimits

0x9717,	// (0x00075e5e) vid4_progress_pane_t1_ParamLimits

0xf021,	// (0x0007b768) vid4_progress_pane_t2_ParamLimits

0xf036,	// (0x0007b77d) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0007c19c) vid4_progress_pane_t_ParamLimits

0x972d,	// (0x00075e74) wait_bar_pane_cp07_ParamLimits

0x9c0b,	// (0x00076352) main_cam6_set_pane_g2_ParamLimits

0x9c0b,	// (0x00076352) main_cam6_set_pane_g2

0x9c2f,	// (0x00076376) main_cset6_listscroll_pane_ParamLimits

0x9c2f,	// (0x00076376) main_cset6_listscroll_pane

0x9c4b,	// (0x00076392) main_cset6_slider_pane_ParamLimits

0x9c4b,	// (0x00076392) main_cset6_slider_pane

0x9c61,	// (0x000763a8) main_cset6_text2_pane_ParamLimits

0x9c61,	// (0x000763a8) main_cset6_text2_pane

0xd7ec,	// (0x00079f33) main_cset6_text_pane

0xd7f4,	// (0x00079f3b) main_cset_list_pane_copy1_ParamLimits

0xd7f4,	// (0x00079f3b) main_cset_list_pane_copy1

0xd804,	// (0x00079f4b) scroll_pane_cp028_copy1

0x9c6f,	// (0x000763b6) cset_list_set_pane_copy1

0x9c81,	// (0x000763c8) aid_position_infowindow_above_copy1

0x9c89,	// (0x000763d0) aid_position_infowindow_below_copy1

0xf062,	// (0x0007b7a9) cset_list_set_pane_g1_copy1

0xd80d,	// (0x00079f54) cset_list_set_pane_g3_copy1_ParamLimits

0xd80d,	// (0x00079f54) cset_list_set_pane_g3_copy1

0xd81c,	// (0x00079f63) cset_list_set_pane_t1_copy1_ParamLimits

0xd81c,	// (0x00079f63) cset_list_set_pane_t1_copy1

0xba4a,	// (0x00078191) list_highlight_pane_cp021_copy1_ParamLimits

0xba4a,	// (0x00078191) list_highlight_pane_cp021_copy1

0xd831,	// (0x00079f78) cset6_slider_pane_ParamLimits

0xd831,	// (0x00079f78) cset6_slider_pane

0xd85d,	// (0x00079fa4) main_cset6_slider_pane_g1_ParamLimits

0xd85d,	// (0x00079fa4) main_cset6_slider_pane_g1

0x9c91,	// (0x000763d8) main_cset6_slider_pane_g2_ParamLimits

0x9c91,	// (0x000763d8) main_cset6_slider_pane_g2

0xd885,	// (0x00079fcc) main_cset6_slider_pane_g3_ParamLimits

0xd885,	// (0x00079fcc) main_cset6_slider_pane_g3

0x9cb9,	// (0x00076400) main_cset6_slider_pane_g4_ParamLimits

0x9cb9,	// (0x00076400) main_cset6_slider_pane_g4

0xd891,	// (0x00079fd8) main_cset6_slider_pane_g5_ParamLimits

0xd891,	// (0x00079fd8) main_cset6_slider_pane_g5

0xd008,	// (0x0007974f) main_cset6_slider_pane_g7_ParamLimits

0xd008,	// (0x0007974f) main_cset6_slider_pane_g7

0xd014,	// (0x0007975b) main_cset6_slider_pane_g8_ParamLimits

0xd014,	// (0x0007975b) main_cset6_slider_pane_g8

0x8e6e,	// (0x000755b5) main_cset6_slider_pane_g9_ParamLimits

0x8e6e,	// (0x000755b5) main_cset6_slider_pane_g9

0x8e7a,	// (0x000755c1) main_cset6_slider_pane_g10_ParamLimits

0x8e7a,	// (0x000755c1) main_cset6_slider_pane_g10

0x8e86,	// (0x000755cd) main_cset6_slider_pane_g11_ParamLimits

0x8e86,	// (0x000755cd) main_cset6_slider_pane_g11

0x8e92,	// (0x000755d9) main_cset6_slider_pane_g12_ParamLimits

0x8e92,	// (0x000755d9) main_cset6_slider_pane_g12

0x8e9e,	// (0x000755e5) main_cset6_slider_pane_g13_ParamLimits

0x8e9e,	// (0x000755e5) main_cset6_slider_pane_g13

0x8eaa,	// (0x000755f1) main_cset6_slider_pane_g14_ParamLimits

0x8eaa,	// (0x000755f1) main_cset6_slider_pane_g14

0x9cc5,	// (0x0007640c) main_cset6_slider_pane_g15_ParamLimits

0x9cc5,	// (0x0007640c) main_cset6_slider_pane_g15

0xd020,	// (0x00079767) main_cset6_slider_pane_g16_ParamLimits

0xd020,	// (0x00079767) main_cset6_slider_pane_g16

0xd02c,	// (0x00079773) main_cset6_slider_pane_g17_ParamLimits

0xd02c,	// (0x00079773) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0007c269) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0007c269) main_cset6_slider_pane_g

0xd89d,	// (0x00079fe4) main_cset6_slider_pane_t1_ParamLimits

0xd89d,	// (0x00079fe4) main_cset6_slider_pane_t1

0x9cf5,	// (0x0007643c) main_cset6_slider_pane_t2_ParamLimits

0x9cf5,	// (0x0007643c) main_cset6_slider_pane_t2

0x9d20,	// (0x00076467) main_cset6_slider_pane_t3_ParamLimits

0x9d20,	// (0x00076467) main_cset6_slider_pane_t3

0x9d4b,	// (0x00076492) main_cset6_slider_pane_t4_ParamLimits

0x9d4b,	// (0x00076492) main_cset6_slider_pane_t4

0x9d76,	// (0x000764bd) main_cset6_slider_pane_t5_ParamLimits

0x9d76,	// (0x000764bd) main_cset6_slider_pane_t5

0xd8de,	// (0x0007a025) main_cset6_slider_pane_t7_ParamLimits

0xd8de,	// (0x0007a025) main_cset6_slider_pane_t7

0x9da1,	// (0x000764e8) main_cset6_slider_pane_t8_ParamLimits

0x9da1,	// (0x000764e8) main_cset6_slider_pane_t8

0x9dc5,	// (0x0007650c) main_cset6_slider_pane_t9_ParamLimits

0x9dc5,	// (0x0007650c) main_cset6_slider_pane_t9

0x9de9,	// (0x00076530) main_cset6_slider_pane_t10_ParamLimits

0x9de9,	// (0x00076530) main_cset6_slider_pane_t10

0x9e0d,	// (0x00076554) main_cset6_slider_pane_t11_ParamLimits

0x9e0d,	// (0x00076554) main_cset6_slider_pane_t11

0xd914,	// (0x0007a05b) main_cset6_slider_pane_t14_ParamLimits

0xd914,	// (0x0007a05b) main_cset6_slider_pane_t14

0xd94d,	// (0x0007a094) main_cset6_slider_pane_t15_ParamLimits

0xd94d,	// (0x0007a094) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0007c28e) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0007c28e) main_cset6_slider_pane_t

0x7cd2,	// (0x00074419) cset_slider_pane_g1_copy1

0xd0ee,	// (0x00079835) cset_slider_pane_g2_copy1

0xd0f7,	// (0x0007983e) cset_slider_pane_g3_copy1

0x35b6,	// (0x0006fcfd) bg_popup_sub_pane_cp011_copy1

0xd98f,	// (0x0007a0d6) main_cset_text_pane_g1_copy1

0xd180,	// (0x000798c7) main_cset_text_pane_t1_copy1

0xd18e,	// (0x000798d5) main_cset_text_pane_t2_copy1

0xd19c,	// (0x000798e3) main_cset_text_pane_t3_copy1

0xd1aa,	// (0x000798f1) main_cset_text_pane_t4_copy1

0xd1b8,	// (0x000798ff) main_cset_text_pane_t5_copy1

0xd997,	// (0x0007a0de) main_cset_text_pane_t6_copy1

0xd9a5,	// (0x0007a0ec) main_cset_text_pane_t7_copy1

0x9bed,	// (0x00076334) main_cset_text2_pane_t1_copy1

0xba4a,	// (0x00078191) main_ncimui_pane

0x6822,	// (0x00072f69) popup_query_ncimui_window_ParamLimits

0x6822,	// (0x00072f69) popup_query_ncimui_window

0xcf7d,	// (0x000796c4) field_cale_ev2_pane_g4_ParamLimits

0xcf7d,	// (0x000796c4) field_cale_ev2_pane_g4

0x7ee4,	// (0x0007462b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7ee4,	// (0x0007462b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf82b,	// (0x0007bf72) cell_video_dialer_keypad_pane_g_ParamLimits

0xf82b,	// (0x0007bf72) cell_video_dialer_keypad_pane_g

0x7efc,	// (0x00074643) cell_video_dialer_keypad_pane_t1

0x35b6,	// (0x0006fcfd) bg_popup_window_pane_cp012

0x1811,	// (0x0006df58) heading_pane_cp06

0xd9d1,	// (0x0007a118) ncim_query_content_pane

0x35b6,	// (0x0006fcfd) bg_popup_heading_pane_cp01

0xd9d9,	// (0x0007a120) ncim_heading_pane_t1

0xd9e7,	// (0x0007a12e) ncim_indicator_popup_pane

0xd9f9,	// (0x0007a140) ncim_query_button_pane

0xda0d,	// (0x0007a154) ncim_query_content_pane_t1

0xda1f,	// (0x0007a166) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0007c2d2) ncim_query_content_pane_t

0xda59,	// (0x0007a1a0) ncim_query_list_pane

0xda6b,	// (0x0007a1b2) ncim_query_popup_pane

0xd9e7,	// (0x0007a12e) ncim_indicator_popup_pane_ParamLimits

0x9f5a,	// (0x000766a1) ncim_query_content_pane_g1_ParamLimits

0x9f5a,	// (0x000766a1) ncim_query_content_pane_g1

0xda0d,	// (0x0007a154) ncim_query_content_pane_t1_ParamLimits

0xda1f,	// (0x0007a166) ncim_query_content_pane_t2_ParamLimits

0x9f66,	// (0x000766ad) ncim_query_content_pane_t3_ParamLimits

0x9f66,	// (0x000766ad) ncim_query_content_pane_t3

0x9f8e,	// (0x000766d5) ncim_query_content_pane_t4_ParamLimits

0x9f8e,	// (0x000766d5) ncim_query_content_pane_t4

0x9fb6,	// (0x000766fd) ncim_query_content_pane_t5_ParamLimits

0x9fb6,	// (0x000766fd) ncim_query_content_pane_t5

0xda31,	// (0x0007a178) ncim_query_content_pane_t6_ParamLimits

0xda31,	// (0x0007a178) ncim_query_content_pane_t6

0xfb8b,	// (0x0007c2d2) ncim_query_content_pane_t_ParamLimits

0xda59,	// (0x0007a1a0) ncim_query_list_pane_ParamLimits

0xda6b,	// (0x0007a1b2) ncim_query_popup_pane_ParamLimits

0xda7f,	// (0x0007a1c6) wait_bar_pane_cp04

0x35b6,	// (0x0006fcfd) input_focus_pane_cp011

0xda87,	// (0x0007a1ce) ncim_query_popup_pane_t1

0xda95,	// (0x0007a1dc) ncim_list_query_list_pane_ParamLimits

0xda95,	// (0x0007a1dc) ncim_list_query_list_pane

0x35b6,	// (0x0006fcfd) bg_button_pane_cp027

0xdaa2,	// (0x0007a1e9) ncim_query_button_pane_g1

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp012

0xdaac,	// (0x0007a1f3) ncim_list_query_list_pane_g1

0xdab4,	// (0x0007a1fb) ncim_list_query_list_pane_t1

0xeee3,	// (0x0007b62a) cam4_indicators_pane_g3_ParamLimits

0xeee3,	// (0x0007b62a) cam4_indicators_pane_g3

0xef5e,	// (0x0007b6a5) vid4_indicators_pane_g5_ParamLimits

0xef5e,	// (0x0007b6a5) vid4_indicators_pane_g5

0xf015,	// (0x0007b75c) vid4_progress_pane_g5_ParamLimits

0xf015,	// (0x0007b75c) vid4_progress_pane_g5

0x9e45,	// (0x0007658c) main_ncimui_pane_g1

0x9eae,	// (0x000765f5) ncimui_group_query_pane_ParamLimits

0x9eae,	// (0x000765f5) ncimui_group_query_pane

0x9ef6,	// (0x0007663d) ncimui_list_pane_ParamLimits

0x9ef6,	// (0x0007663d) ncimui_list_pane

0x9f1d,	// (0x00076664) ncimui_text_pane_ParamLimits

0x9f1d,	// (0x00076664) ncimui_text_pane

0x9fde,	// (0x00076725) ncimui_text_pane_t1_ParamLimits

0x9fde,	// (0x00076725) ncimui_text_pane_t1

0xdac2,	// (0x0007a209) ncimui_list_single_graphic_pane_ParamLimits

0xdac2,	// (0x0007a209) ncimui_list_single_graphic_pane

0x9ffc,	// (0x00076743) ncimui_query_pane_ParamLimits

0x9ffc,	// (0x00076743) ncimui_query_pane

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp013

0xdad2,	// (0x0007a219) ncim_list_query_list_pane_t1_copy1

0xdae0,	// (0x0007a227) ncim_list_single_graphic_pane_g1

0xa00f,	// (0x00076756) ncim_query_button_pane_cp01

0xa01b,	// (0x00076762) ncim_query_entry_pane_ParamLimits

0xa01b,	// (0x00076762) ncim_query_entry_pane

0xa02e,	// (0x00076775) ncimui_query_pane_g1

0xa03a,	// (0x00076781) ncimui_query_pane_t1_ParamLimits

0xa03a,	// (0x00076781) ncimui_query_pane_t1

0xba4a,	// (0x00078191) input_focus_pane_cp012

0xdae8,	// (0x0007a22f) ncim_query_entry_pane_t1

0xbc64,	// (0x000783ab) main_im_pane_ParamLimits

0xba4a,	// (0x00078191) main_mobtv_pane_ParamLimits

0xba4a,	// (0x00078191) main_mobtv_pane

0x9cdd,	// (0x00076424) main_cset6_slider_pane_g18_ParamLimits

0x9cdd,	// (0x00076424) main_cset6_slider_pane_g18

0x9ce9,	// (0x00076430) main_cset6_slider_pane_g19_ParamLimits

0x9ce9,	// (0x00076430) main_cset6_slider_pane_g19

0xbbec,	// (0x00078333) bg_main_mobtv_pane_ParamLimits

0xbbec,	// (0x00078333) bg_main_mobtv_pane

0xa053,	// (0x0007679a) main_mobtv_info_pane

0xa05c,	// (0x000767a3) main_mobtv_loading_pane_ParamLimits

0xa05c,	// (0x000767a3) main_mobtv_loading_pane

0xdafa,	// (0x0007a241) main_mobtv_pg_channel_list_pane

0xdb04,	// (0x0007a24b) main_mobtv_pg_hdr_pane

0xa069,	// (0x000767b0) main_mobtv_programe_curr_pane_ParamLimits

0xa069,	// (0x000767b0) main_mobtv_programe_curr_pane

0xa076,	// (0x000767bd) main_mobtv_programe_next_pane_ParamLimits

0xa076,	// (0x000767bd) main_mobtv_programe_next_pane

0xdb0d,	// (0x0007a254) popup_mobtv_noti_window

0xbed0,	// (0x00078617) main_tv_pg_hdr_pane_g1

0xdb15,	// (0x0007a25c) main_tv_pg_hdr_pane_g2

0xdb1d,	// (0x0007a264) main_tv_pg_hdr_pane_g3

0xdb25,	// (0x0007a26c) main_tv_pg_hdr_pane_g4

0xdb2d,	// (0x0007a274) main_tv_pg_hdr_pane_g5

0xdb37,	// (0x0007a27e) main_tv_pg_hdr_pane_g6

0xdb41,	// (0x0007a288) main_tv_pg_hdr_pane_g7

0xdb4b,	// (0x0007a292) main_tv_pg_hdr_pane_g8

0xdb55,	// (0x0007a29c) main_tv_pg_hdr_pane_g9

0xdb5f,	// (0x0007a2a6) main_tv_pg_hdr_pane_g10

0xdb69,	// (0x0007a2b0) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0007c2df) main_tv_pg_hdr_pane_g

0xdb73,	// (0x0007a2ba) main_tv_pg_hdr_pane_t1

0xdb81,	// (0x0007a2c8) main_tv_pg_hdr_pane_t2

0xdb8f,	// (0x0007a2d6) main_tv_pg_hdr_pane_t3

0xdb9f,	// (0x0007a2e6) main_tv_pg_hdr_pane_t4

0xdbaf,	// (0x0007a2f6) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0007c2f6) main_tv_pg_hdr_pane_t

0xdbbf,	// (0x0007a306) single_mobtv_pg_channel_pane_ParamLimits

0xdbbf,	// (0x0007a306) single_mobtv_pg_channel_pane

0xdbd1,	// (0x0007a318) single_mobtv_pg_channel_table_pane

0xc1f0,	// (0x00078937) single_mobtv_pg_channel_thumb_pane

0xdbda,	// (0x0007a321) single_tv_pg_channel_pane_g1

0xdbe3,	// (0x0007a32a) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0007c301) single_tv_pg_channel_pane_g

0xbbd0,	// (0x00078317) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbbd0,	// (0x00078317) bg_single_mobtv_pg_channel_thumb_pane

0xdbec,	// (0x0007a333) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdbec,	// (0x0007a333) single_mobtv_pg_channel_thumb_pane_g1

0xdbfa,	// (0x0007a341) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdbfa,	// (0x0007a341) single_mobtv_pg_channel_thumb_pane_g2

0xdc06,	// (0x0007a34d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc06,	// (0x0007a34d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0007c306) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0007c306) single_mobtv_pg_channel_thumb_pane_g

0xdc12,	// (0x0007a359) single_mobtv_pg_channel_thumb_pane_t1

0xdc20,	// (0x0007a367) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0007c30d) single_mobtv_pg_channel_thumb_pane_t

0xbed0,	// (0x00078617) bg_single_mobtv_pg_channel_table_pane_g1

0xbed0,	// (0x00078617) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0007bb1f) bg_single_mobtv_pg_channel_table_pane_g

0xdc2e,	// (0x0007a375) single_mobtv_pg_channel_table_pane_t1

0xdc3c,	// (0x0007a383) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0007c312) single_mobtv_pg_channel_table_pane_t

0xa08b,	// (0x000767d2) main_mobtv_info_pane_g1_ParamLimits

0xa08b,	// (0x000767d2) main_mobtv_info_pane_g1

0xa0a9,	// (0x000767f0) main_mobtv_info_pane_t1_ParamLimits

0xa0a9,	// (0x000767f0) main_mobtv_info_pane_t1

0xa121,	// (0x00076868) main_mobtv_info_pane_t2_ParamLimits

0xa121,	// (0x00076868) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0007c31c) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0007c31c) main_mobtv_info_pane_t

0xa1b0,	// (0x000768f7) wait_bar_pane_cp05

0xa1c2,	// (0x00076909) main_mobtv_loading_pane_g1_ParamLimits

0xa1c2,	// (0x00076909) main_mobtv_loading_pane_g1

0xa1d5,	// (0x0007691c) main_mobtv_loading_pane_g2_ParamLimits

0xa1d5,	// (0x0007691c) main_mobtv_loading_pane_g2

0xa1e1,	// (0x00076928) main_mobtv_loading_pane_g3_ParamLimits

0xa1e1,	// (0x00076928) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0007c323) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0007c323) main_mobtv_loading_pane_g

0xdc4a,	// (0x0007a391) main_mobtv_loading_pane_t1_ParamLimits

0xdc4a,	// (0x0007a391) main_mobtv_loading_pane_t1

0xdc62,	// (0x0007a3a9) main_mobtv_loading_pane_t2_ParamLimits

0xdc62,	// (0x0007a3a9) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0007c32a) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0007c32a) main_mobtv_loading_pane_t

0xa1f4,	// (0x0007693b) wait_bar_pane_cp06_ParamLimits

0xa1f4,	// (0x0007693b) wait_bar_pane_cp06

0xdc86,	// (0x0007a3cd) main_mobtv_programe_curr_pane_t1

0xdc94,	// (0x0007a3db) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0007c32f) main_mobtv_programe_curr_pane_t

0xdca2,	// (0x0007a3e9) main_mobtv_programe_next_pane_t1

0xdcb0,	// (0x0007a3f7) main_mobtv_programe_next_pane_t2

0xdcbe,	// (0x0007a405) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0007c334) main_mobtv_programe_next_pane_t

0x35b6,	// (0x0006fcfd) bg_popup_mobtv_noti_window_pane

0xdccc,	// (0x0007a413) popup_mobtv_noti_window_g1

0xdcd4,	// (0x0007a41b) popup_mobtv_noti_window_t1

0xdce2,	// (0x0007a429) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0007c33b) popup_mobtv_noti_window_t

0xbed0,	// (0x00078617) bg_popup_mobtv_noti_window_pane_g1

0x35b6,	// (0x0006fcfd) sc_clock_pane

0x35b6,	// (0x0006fcfd) main_fs_bigclock_pane

0x993a,	// (0x00076081) blid2_tripm_pane_t4_ParamLimits

0x993a,	// (0x00076081) blid2_tripm_pane_t4

0xa203,	// (0x0007694a) sc_clock_pane_g1_ParamLimits

0xa203,	// (0x0007694a) sc_clock_pane_g1

0xa215,	// (0x0007695c) sc_clock_pane_t1_ParamLimits

0xa215,	// (0x0007695c) sc_clock_pane_t1

0xa237,	// (0x0007697e) sc_clock_pane_t2_ParamLimits

0xa237,	// (0x0007697e) sc_clock_pane_t2

0xa24f,	// (0x00076996) sc_clock_pane_t3_ParamLimits

0xa24f,	// (0x00076996) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0007c340) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0007c340) sc_clock_pane_t

0xac34,	// (0x0007737b) main_fs_bigclock_indicator_pane_ParamLimits

0xac34,	// (0x0007737b) main_fs_bigclock_indicator_pane

0xa2f5,	// (0x00076a3c) main_fs_bigclock_pane_g1_ParamLimits

0xa2f5,	// (0x00076a3c) main_fs_bigclock_pane_g1

0xac40,	// (0x00077387) main_fs_bigclock_pane_t1_ParamLimits

0xac40,	// (0x00077387) main_fs_bigclock_pane_t1

0xac52,	// (0x00077399) main_fs_bigclock_pane_t2_ParamLimits

0xac52,	// (0x00077399) main_fs_bigclock_pane_t2

0xac66,	// (0x000773ad) main_fs_bigclock_pane_t3_ParamLimits

0xac66,	// (0x000773ad) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x0007c4d1) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x0007c4d1) main_fs_bigclock_pane_t

0xe887,	// (0x0007afce) main_fs_bigclock_indicator_pane_g1

0xda01,	// (0x0007a148) ncim_query_content_pane_g2_ParamLimits

0xda01,	// (0x0007a148) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0007c2cd) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0007c2cd) ncim_query_content_pane_g

0xa268,	// (0x000769af) sc_clock_pane_t4_ParamLimits

0xa268,	// (0x000769af) sc_clock_pane_t4

0xba4a,	// (0x00078191) main_radioblah_pane

0xee58,	// (0x0007b59f) cell_call4_button_pane_t1_copy1_ParamLimits

0xee58,	// (0x0007b59f) cell_call4_button_pane_t1_copy1

0x9e5d,	// (0x000765a4) main_ncimui_pane_t1_ParamLimits

0x9e5d,	// (0x000765a4) main_ncimui_pane_t1

0x9e77,	// (0x000765be) main_ncimui_pane_t2_ParamLimits

0x9e77,	// (0x000765be) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0007c2c6) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0007c2c6) main_ncimui_pane_t

0xde28,	// (0x0007a56f) main_radioblah_anim_pane_ParamLimits

0xde28,	// (0x0007a56f) main_radioblah_anim_pane

0xde39,	// (0x0007a580) main_radioblah_info_pane_ParamLimits

0xde39,	// (0x0007a580) main_radioblah_info_pane

0xde4d,	// (0x0007a594) main_radioblah_pane_t1_ParamLimits

0xde4d,	// (0x0007a594) main_radioblah_pane_t1

0xde69,	// (0x0007a5b0) main_radioblah_pane_t2_ParamLimits

0xde69,	// (0x0007a5b0) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0007c361) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0007c361) main_radioblah_pane_t

0xa354,	// (0x00076a9b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa354,	// (0x00076a9b) main_radioblah_rocker_ctrl_pane

0xdeb1,	// (0x0007a5f8) main_radioblah_info_pane_t1_ParamLimits

0xdeb1,	// (0x0007a5f8) main_radioblah_info_pane_t1

0xa3ac,	// (0x00076af3) main_radioblah_info_pane_t2_ParamLimits

0xa3ac,	// (0x00076af3) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0007c36a) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0007c36a) main_radioblah_info_pane_t

0xbed0,	// (0x00078617) main_radioblah_rocker_ctrl_pane_g1

0xa45c,	// (0x00076ba3) main_radioblah_rocker_ctrl_pane_g2

0xa464,	// (0x00076bab) main_radioblah_rocker_ctrl_pane_g3

0xa46c,	// (0x00076bb3) main_radioblah_rocker_ctrl_pane_g4

0xa474,	// (0x00076bbb) main_radioblah_rocker_ctrl_pane_g5

0xa47c,	// (0x00076bc3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0007c373) main_radioblah_rocker_ctrl_pane_g

0x9bed,	// (0x00076334) main_cset_text2_pane_t1_copy1_ParamLimits

0xeeb6,	// (0x0007b5fd) cam4_image_uncrop_qvga_pane

0xef09,	// (0x0007b650) vid4_image_uncrop_qcif_pane

0xf054,	// (0x0007b79b) cam6_image_uncrop_qvga_pane_ParamLimits

0xf054,	// (0x0007b79b) cam6_image_uncrop_qvga_pane

0xd6cf,	// (0x00079e16) vid6_image_uncrop_qcif_pane_ParamLimits

0xd6cf,	// (0x00079e16) vid6_image_uncrop_qcif_pane

0x35b6,	// (0x0006fcfd) bg_popup_preview_window_pane_cp03

0xd9b3,	// (0x0007a0fa) list_cset_text2_pane

0xd9bb,	// (0x0007a102) main_cset6_text2_pane_g1

0xd9c3,	// (0x0007a10a) main_cset6_text2_pane_t1

0x03eb,	// (0x0006cb32) list_cset_text2_pane_t1_ParamLimits

0x03eb,	// (0x0006cb32) list_cset_text2_pane_t1

0xba4a,	// (0x00078191) main_radioblah_pane_ParamLimits

0xa19c,	// (0x000768e3) main_mobtv_info_pane_t3_ParamLimits

0xa19c,	// (0x000768e3) main_mobtv_info_pane_t3

0xa342,	// (0x00076a89) main_radioblah_pane_g1

0xa37c,	// (0x00076ac3) main_radioblah_info_pane_g1

0xa401,	// (0x00076b48) main_radioblah_info_pane_t3_ParamLimits

0xa401,	// (0x00076b48) main_radioblah_info_pane_t3

0x55d3,	// (0x00071d1a) highlight_cell_cale_month_pane_ParamLimits

0x55d3,	// (0x00071d1a) highlight_cell_cale_month_pane

0x35b6,	// (0x0006fcfd) main_phob_fisheye_pane

0x742e,	// (0x00073b75) scroll_pane_cp0031_ParamLimits

0x742e,	// (0x00073b75) scroll_pane_cp0031

0xd7dd,	// (0x00079f24) wait_bar_pane_cp08_ParamLimits

0x9c6f,	// (0x000763b6) cset_list_set_pane_copy1_ParamLimits

0xdeeb,	// (0x0007a632) highlight_cell_cale_month_pane_g1

0xa484,	// (0x00076bcb) highlight_cell_cale_month_pane_t1

0xd448,	// (0x00079b8f) list_gen_pane_cp01

0xcff3,	// (0x0007973a) scroll_pane_01

0xa492,	// (0x00076bd9) list_single_double_fisheye_pane

0xdef3,	// (0x0007a63a) list_double_fisheye_pane_g1_ParamLimits

0xdef3,	// (0x0007a63a) list_double_fisheye_pane_g1

0xdeff,	// (0x0007a646) list_double_fisheye_pane_g2_ParamLimits

0xdeff,	// (0x0007a646) list_double_fisheye_pane_g2

0xa49b,	// (0x00076be2) list_double_fisheye_pane_g3_ParamLimits

0xa49b,	// (0x00076be2) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0007c380) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0007c380) list_double_fisheye_pane_g

0x3149,	// (0x0006f890) list_double_fisheye_pane_t1_ParamLimits

0x3149,	// (0x0006f890) list_double_fisheye_pane_t1

0x3164,	// (0x0006f8ab) list_double_fisheye_pane_t2_ParamLimits

0x3164,	// (0x0006f8ab) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0007c38b) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0007c38b) list_double_fisheye_pane_t

0x35b6,	// (0x0006fcfd) main_call5_pane

0xa293,	// (0x000769da) sc_swipe_pane_ParamLimits

0xa293,	// (0x000769da) sc_swipe_pane

0xa4ba,	// (0x00076c01) call5_image_pane_ParamLimits

0xa4ba,	// (0x00076c01) call5_image_pane

0xa4d7,	// (0x00076c1e) call5_swipe_1_pane_ParamLimits

0xa4d7,	// (0x00076c1e) call5_swipe_1_pane

0xa4ea,	// (0x00076c31) call5_swipe_2_pane_ParamLimits

0xa4ea,	// (0x00076c31) call5_swipe_2_pane

0xa515,	// (0x00076c5c) popup_call5_audio_first_window_ParamLimits

0xa515,	// (0x00076c5c) popup_call5_audio_first_window

0xbbd0,	// (0x00078317) call5_swipe_1_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) call5_swipe_1_pane_g1

0xdf30,	// (0x0007a677) call5_swipe_1_pane_g2_ParamLimits

0xdf30,	// (0x0007a677) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0007c390) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0007c390) call5_swipe_1_pane_g

0xdf3c,	// (0x0007a683) call5_swipe_1_pane_t1_ParamLimits

0xdf3c,	// (0x0007a683) call5_swipe_1_pane_t1

0xbbd0,	// (0x00078317) call5_swipe_2_pane_g1_ParamLimits

0xbbd0,	// (0x00078317) call5_swipe_2_pane_g1

0xdf51,	// (0x0007a698) call5_swipe_2_pane_g2_ParamLimits

0xdf51,	// (0x0007a698) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0007c395) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0007c395) call5_swipe_2_pane_g

0xdf5d,	// (0x0007a6a4) call5_swipe_2_pane_t1_ParamLimits

0xdf5d,	// (0x0007a6a4) call5_swipe_2_pane_t1

0xdf72,	// (0x0007a6b9) sc_swipe_pane_g1_ParamLimits

0xdf72,	// (0x0007a6b9) sc_swipe_pane_g1

0xdf7f,	// (0x0007a6c6) sc_swipe_pane_g2_ParamLimits

0xdf7f,	// (0x0007a6c6) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0007c39a) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0007c39a) sc_swipe_pane_g

0xdf8b,	// (0x0007a6d2) sc_swipe_pane_t1_ParamLimits

0xdf8b,	// (0x0007a6d2) sc_swipe_pane_t1

0x35b6,	// (0x0006fcfd) main_cmail_launcher_pane

0xa526,	// (0x00076c6d) aid_size_cell_cmail_l_ParamLimits

0xa526,	// (0x00076c6d) aid_size_cell_cmail_l

0xa534,	// (0x00076c7b) grid_cmail_l_pane_ParamLimits

0xa534,	// (0x00076c7b) grid_cmail_l_pane

0xa54e,	// (0x00076c95) cell_cmail_l_pane_ParamLimits

0xa54e,	// (0x00076c95) cell_cmail_l_pane

0xdfa0,	// (0x0007a6e7) cell_cmail_l_pane_g1_ParamLimits

0xdfa0,	// (0x0007a6e7) cell_cmail_l_pane_g1

0xdfac,	// (0x0007a6f3) cell_cmail_l_pane_t1_ParamLimits

0xdfac,	// (0x0007a6f3) cell_cmail_l_pane_t1

0xdfc2,	// (0x0007a709) cell_cmail_l_pane_t2_ParamLimits

0xdfc2,	// (0x0007a709) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0007c39f) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0007c39f) cell_cmail_l_pane_t

0xba4a,	// (0x00078191) grid_highlight_pane_cp018_ParamLimits

0xba4a,	// (0x00078191) grid_highlight_pane_cp018

0x3686,	// (0x0006fdcd) main2_pane_ParamLimits

0x3686,	// (0x0006fdcd) main2_pane

0xbd17,	// (0x0007845e) popup_sp_fs_action_menu_bg_pane_g1

0xbd1f,	// (0x00078466) popup_sp_fs_action_menu_bg_pane_g2

0xbd27,	// (0x0007846e) popup_sp_fs_action_menu_bg_pane_g3

0xbd2f,	// (0x00078476) popup_sp_fs_action_menu_bg_pane_g4

0xbd37,	// (0x0007847e) popup_sp_fs_action_menu_bg_pane_g5

0xbd3f,	// (0x00078486) popup_sp_fs_action_menu_bg_pane_g6

0xbd47,	// (0x0007848e) popup_sp_fs_action_menu_bg_pane_g7

0xbd4f,	// (0x00078496) popup_sp_fs_action_menu_bg_pane_g8

0xbd57,	// (0x0007849e) popup_sp_fs_action_menu_bg_pane_g9

0xbd5f,	// (0x000784a6) popup_sp_fs_action_menu_bg_pane_g10

0xbd5f,	// (0x000784a6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0007b88c) popup_sp_fs_action_menu_bg_pane_g

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g3_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g3_g2

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0007b93a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0007b93a) list_medium_line_x2_t3_g3_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g3_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g3_t2

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0007b941) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0007b941) list_medium_line_x2_t3_g3_t

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g2_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0007b948) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0007b948) list_medium_line_x2_t3_g2_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g2_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g2_t2

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0007b941) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0007b941) list_medium_line_x2_t3_g2_t

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g2

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g3

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0007b94d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0007b94d) list_medium_line_x2_t4_g4_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t2

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t3

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0007b956) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0007b956) list_medium_line_x2_t4_g4_t

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g2

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g3

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0007b94d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0007b94d) list_medium_line_x2_t2_g4_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g4_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0007b91d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0007b91d) list_medium_line_x2_t2_g4_t

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g3_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g3_g2

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0007b93a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0007b93a) list_medium_line_x2_t2_g3_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g3_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0007b91d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0007b91d) list_medium_line_x2_t2_g3_t

0x5738,	// (0x00071e7f) main_sp_fs_list_pane_ParamLimits

0x5738,	// (0x00071e7f) main_sp_fs_list_pane

0x2022,	// (0x0006e769) sp_fs_scroll_pane_ParamLimits

0x2022,	// (0x0006e769) sp_fs_scroll_pane

0xc425,	// (0x00078b6c) list_medium_line_x2_t3_t1

0xc425,	// (0x00078b6c) list_medium_line_x2_t3_t2

0xc425,	// (0x00078b6c) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0007ba03) list_medium_line_x2_t3_t

0xc425,	// (0x00078b6c) list_medium_line_x3_t4_t1

0xc425,	// (0x00078b6c) list_medium_line_x3_t4_t2

0xc425,	// (0x00078b6c) list_medium_line_x3_t4_t3

0xc425,	// (0x00078b6c) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0007ba0a) list_medium_line_x3_t4_t

0xc425,	// (0x00078b6c) list_medium_line_x4_t5_t1

0xc425,	// (0x00078b6c) list_medium_line_x4_t5_t2

0xc425,	// (0x00078b6c) list_medium_line_x4_t5_t3

0xc425,	// (0x00078b6c) list_medium_line_x4_t5_t4

0xc425,	// (0x00078b6c) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0007ba13) list_medium_line_x4_t5_t

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g1

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g2

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g3

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g4_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0007b94d) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0007b94d) list_medium_line_t4_g4_g

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t1

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t2

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t3

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t4_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0007b956) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0007b956) list_medium_line_t4_g4_t

0x57e3,	// (0x00071f2a) chi_dic_find_pane_g1

0x65f2,	// (0x00072d39) main_tport_pane

0xc425,	// (0x00078b6c) list_medium_line_plain_t1

0xbbd0,	// (0x00078317) list_medium_line_t2_g2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t2_g2_g1

0xbbd0,	// (0x00078317) list_medium_line_t2_g2_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0007b948) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0007b948) list_medium_line_t2_g2_g

0xbea2,	// (0x000785e9) list_medium_line_t2_g2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t2_g2_t1

0xbea2,	// (0x000785e9) list_medium_line_t2_g2_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0007b91d) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0007b91d) list_medium_line_t2_g2_t

0xd451,	// (0x00079b98) aid_sp_fs_list_icon_a_sm

0xf04c,	// (0x0007b793) aid_sp_fs_list_icon_d

0xd459,	// (0x00079ba0) aid_sp_fs_text_primary

0xd462,	// (0x00079ba9) aid_sp_fs_text_secondary

0x35b6,	// (0x0006fcfd) list_medium_line

0x35b6,	// (0x0006fcfd) list_medium_line_g2

0x35b6,	// (0x0006fcfd) list_medium_line_g3

0x35b6,	// (0x0006fcfd) list_medium_line_plain

0x35b6,	// (0x0006fcfd) list_medium_line_plain_t2

0x35b6,	// (0x0006fcfd) list_medium_line_plain_t3

0x35b6,	// (0x0006fcfd) list_medium_line_right_icon

0x35b6,	// (0x0006fcfd) list_medium_line_right_iconx2

0x35b6,	// (0x0006fcfd) list_medium_line_t2

0x35b6,	// (0x0006fcfd) list_medium_line_t2_g2

0x35b6,	// (0x0006fcfd) list_medium_line_t2_g3

0x35b6,	// (0x0006fcfd) list_medium_line_t2_right_icon

0x35b6,	// (0x0006fcfd) list_medium_line_t2_right_iconx2

0x35b6,	// (0x0006fcfd) list_medium_line_t3

0x35b6,	// (0x0006fcfd) list_medium_line_t3_g2

0x35b6,	// (0x0006fcfd) list_medium_line_t3_g3

0x35b6,	// (0x0006fcfd) list_medium_line_t3_right_iconx2

0x35b6,	// (0x0006fcfd) list_medium_line_t4_g4

0x35b6,	// (0x0006fcfd) list_medium_line_x2

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t2_g2

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t2_g3

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t2_g4

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t3

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t3_g2

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t3_g3

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t3_g4

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t4_g2

0x35b6,	// (0x0006fcfd) list_medium_line_x2_t4_g4

0x35b6,	// (0x0006fcfd) list_medium_line_x3

0x35b6,	// (0x0006fcfd) list_medium_line_x3_t4

0x35b6,	// (0x0006fcfd) list_medium_line_x3_t4_g4

0x35b6,	// (0x0006fcfd) list_medium_line_x4_t4

0x35b6,	// (0x0006fcfd) list_medium_line_x4_t4_g7

0x35b6,	// (0x0006fcfd) list_medium_line_x4_t5

0x3118,	// (0x0006f85f) list_single_fs_dyc_pane_ParamLimits

0x3118,	// (0x0006f85f) list_single_fs_dyc_pane

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g1

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g2

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g3

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g4

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g5

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x4_t4_g7_g6

0xbbde,	// (0x00078325) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbbde,	// (0x00078325) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0007c2a7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0007c2a7) list_medium_line_x4_t4_g7_g

0xbea2,	// (0x000785e9) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x4_t4_g7_t1

0xbea2,	// (0x000785e9) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x4_t4_g7_t2

0xbea2,	// (0x000785e9) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x4_t4_g7_t3

0xca21,	// (0x00079168) list_medium_line_x4_t4_g7_t4_ParamLimits

0xca21,	// (0x00079168) list_medium_line_x4_t4_g7_t4

0xca21,	// (0x00079168) list_medium_line_x4_t4_g7_t5_ParamLimits

0xca21,	// (0x00079168) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0007c2b6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0007c2b6) list_medium_line_x4_t4_g7_t

0x312c,	// (0x0006f873) list_single_dyc_row_pane_ParamLimits

0x312c,	// (0x0006f873) list_single_dyc_row_pane

0xa4a7,	// (0x00076bee) call5_gesture_pane_ParamLimits

0xa4a7,	// (0x00076bee) call5_gesture_pane

0xa4fd,	// (0x00076c44) call5_windows_pane_ParamLimits

0xa4fd,	// (0x00076c44) call5_windows_pane

0xa568,	// (0x00076caf) call5_swipe_1_pane_cp_ParamLimits

0xa568,	// (0x00076caf) call5_swipe_1_pane_cp

0xa574,	// (0x00076cbb) call5_swipe_2_pane_cp_ParamLimits

0xa574,	// (0x00076cbb) call5_swipe_2_pane_cp

0xbe90,	// (0x000785d7) call5_image_pane_cp

0xa580,	// (0x00076cc7) popup_call5_audio_first_window_cp_ParamLimits

0xa580,	// (0x00076cc7) popup_call5_audio_first_window_cp

0xdf72,	// (0x0007a6b9) call5_swipe_1_pane_g1_cp_ParamLimits

0xdf72,	// (0x0007a6b9) call5_swipe_1_pane_g1_cp

0xdfdf,	// (0x0007a726) call5_swipe_1_pane_g2_cp

0xdf8b,	// (0x0007a6d2) call5_swipe_1_pane_t1_cp_ParamLimits

0xdf8b,	// (0x0007a6d2) call5_swipe_1_pane_t1_cp

0xdf72,	// (0x0007a6b9) call5_swipe_2_pane_g1_cp_ParamLimits

0xdf72,	// (0x0007a6b9) call5_swipe_2_pane_g1_cp

0xdfe7,	// (0x0007a72e) call5_swipe_2_pane_g2_cp

0xdfef,	// (0x0007a736) call5_swipe_2_pane_t1_cp_ParamLimits

0xdfef,	// (0x0007a736) call5_swipe_2_pane_t1_cp

0xba4a,	// (0x00078191) main_sp_fs_email_pane

0xe004,	// (0x0007a74b) main_sp_fs_listscroll_pane_te

0xa58e,	// (0x00076cd5) popup_sp_fs_action_menu_pane_ParamLimits

0xa58e,	// (0x00076cd5) popup_sp_fs_action_menu_pane

0xbed0,	// (0x00078617) bg_sp_fs_ctrlbar_pane_g1

0xe00d,	// (0x0007a754) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe016,	// (0x0007a75d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x188a,	// (0x0006dfd1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbed0,	// (0x00078617) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0007c3a4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcf1d,	// (0x00079664) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcf1d,	// (0x00079664) bg_sp_fs_ctrlbar_ddmenu_pane

0xe01f,	// (0x0007a766) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe01f,	// (0x0007a766) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe02b,	// (0x0007a772) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe02b,	// (0x0007a772) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0007c3ad) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0007c3ad) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe037,	// (0x0007a77e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe037,	// (0x0007a77e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbed0,	// (0x00078617) list_medium_line_t2_right_icon_g1

0xc425,	// (0x00078b6c) list_medium_line_t2_right_icon_t1

0xc425,	// (0x00078b6c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0007c3b2) list_medium_line_t2_right_icon_t

0x18b5,	// (0x0006dffc) bg_sp_fs_ctrlbar_pane_ParamLimits

0x18b5,	// (0x0006dffc) bg_sp_fs_ctrlbar_pane

0xa618,	// (0x00076d5f) main_sp_fs_ctrlbar_button_pane_cp01

0xa622,	// (0x00076d69) main_sp_fs_ctrlbar_ddmenu_pane

0xe089,	// (0x0007a7d0) main_sp_fs_ctrlbar_pane_g1

0xe095,	// (0x0007a7dc) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0007c3b7) main_sp_fs_ctrlbar_pane_g

0xa660,	// (0x00076da7) main_sp_fs_ctrlbar_pane_t1

0xa69f,	// (0x00076de6) main_sp_fs_ctrlbar_pane

0xa6c3,	// (0x00076e0a) main_sp_fs_listscroll_pane_te_cp01

0x3186,	// (0x0006f8cd) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3186,	// (0x0006f8cd) popup_sp_fs_action_menu_pane_cp01

0xba4a,	// (0x00078191) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xba4a,	// (0x00078191) bg_sp_fs_highlight_list_pane_cp01

0xe0bc,	// (0x0007a803) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0bc,	// (0x0007a803) sp_fs_action_menu_list_gene_pane_g1

0xe0cb,	// (0x0007a812) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe0cb,	// (0x0007a812) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0007c3c5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0007c3c5) sp_fs_action_menu_list_gene_pane_g

0xe0d8,	// (0x0007a81f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe0d8,	// (0x0007a81f) sp_fs_action_menu_list_gene_pane_t1

0xe0f0,	// (0x0007a837) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe0f0,	// (0x0007a837) sp_fs_action_menu_list_gene_pane

0xe10f,	// (0x0007a856) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe10f,	// (0x0007a856) popup_sp_fs_action_menu_bg_pane

0xe11d,	// (0x0007a864) sp_fs_action_menu_list_pane_ParamLimits

0xe11d,	// (0x0007a864) sp_fs_action_menu_list_pane

0x31ab,	// (0x0006f8f2) sp_fs_scroll_pane_cp01_ParamLimits

0x31ab,	// (0x0006f8f2) sp_fs_scroll_pane_cp01

0xc425,	// (0x00078b6c) list_medium_line_plain_t2_t1

0xc425,	// (0x00078b6c) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0007c3b2) list_medium_line_plain_t2_t

0xc425,	// (0x00078b6c) list_medium_line_plain_t3_t1

0xc425,	// (0x00078b6c) list_medium_line_plain_t3_t2

0xc425,	// (0x00078b6c) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0007ba03) list_medium_line_plain_t3_t

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g2_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0007b948) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0007b948) list_medium_line_x2_t2_g2_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g2_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0007b91d) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0007b91d) list_medium_line_x2_t2_g2_t

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g2_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0007b948) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0007b948) list_medium_line_x2_t4_g2_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t2

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t3

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0007b956) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0007b956) list_medium_line_x2_t4_g2_t

0xbed0,	// (0x00078617) list_medium_line_t3_right_iconx2_g1

0xbed0,	// (0x00078617) list_medium_line_t3_right_iconx2_g2

0xbed0,	// (0x00078617) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0007bb24) list_medium_line_t3_right_iconx2_g

0xc425,	// (0x00078b6c) list_medium_line_t3_right_iconx2_t1

0xc425,	// (0x00078b6c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0007c3b2) list_medium_line_t3_right_iconx2_t

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g1

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g2

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g3

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0007b94d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0007b94d) list_medium_line_x3_t4_g4_g

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t1

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t2

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t3

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0007b956) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0007b956) list_medium_line_x3_t4_g4_t

0x31d1,	// (0x0006f918) list_single_dyc_row_text_pane_t1_ParamLimits

0x31d1,	// (0x0006f918) list_single_dyc_row_text_pane_t1

0x321a,	// (0x0006f961) list_single_dyc_row_text_pane_t2_ParamLimits

0x321a,	// (0x0006f961) list_single_dyc_row_text_pane_t2

0xe13d,	// (0x0007a884) list_single_dyc_row_text_pane_t3_ParamLimits

0xe13d,	// (0x0007a884) list_single_dyc_row_text_pane_t3

0x0005,

0xfc83,	// (0x0007c3ca) list_single_dyc_row_text_pane_t_ParamLimits

0xfc83,	// (0x0007c3ca) list_single_dyc_row_text_pane_t

0xe161,	// (0x0007a8a8) list_single_dyc_row_pane_g1_ParamLimits

0xe161,	// (0x0007a8a8) list_single_dyc_row_pane_g1

0xe16d,	// (0x0007a8b4) list_single_dyc_row_pane_g2_ParamLimits

0xe16d,	// (0x0007a8b4) list_single_dyc_row_pane_g2

0xe179,	// (0x0007a8c0) list_single_dyc_row_pane_g3_ParamLimits

0xe179,	// (0x0007a8c0) list_single_dyc_row_pane_g3

0xe185,	// (0x0007a8cc) list_single_dyc_row_pane_g4_ParamLimits

0xe185,	// (0x0007a8cc) list_single_dyc_row_pane_g4

0x0003,

0xfc90,	// (0x0007c3d7) list_single_dyc_row_pane_g_ParamLimits

0xfc90,	// (0x0007c3d7) list_single_dyc_row_pane_g

0xe191,	// (0x0007a8d8) list_single_dyc_row_text_pane_ParamLimits

0xe191,	// (0x0007a8d8) list_single_dyc_row_text_pane

0x35b6,	// (0x0006fcfd) bg_sp_fs_scroll_pane

0xe1b0,	// (0x0007a8f7) thumb_sp_fs_scroll_pane

0xbbd0,	// (0x00078317) list_medium_line_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_g1

0xbea2,	// (0x000785e9) list_medium_line_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t1

0xbbd0,	// (0x00078317) list_medium_line_x2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0007b948) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0007b948) list_medium_line_x2_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t1

0xbbd0,	// (0x00078317) list_medium_line_x3_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x3_g1

0xa6e3,	// (0x00076e2a) list_medium_line_x3_g2_ParamLimits

0xa6e3,	// (0x00076e2a) list_medium_line_x3_g2

0x0001,

0xfc99,	// (0x0007c3e0) list_medium_line_x3_g_ParamLimits

0xfc99,	// (0x0007c3e0) list_medium_line_x3_g

0xe1b9,	// (0x0007a900) list_medium_line_x3_t1_ParamLimits

0xe1b9,	// (0x0007a900) list_medium_line_x3_t1

0xe1cd,	// (0x0007a914) thumb_sp_fs_scroll_pane_g1

0xe1d6,	// (0x0007a91d) thumb_sp_fs_scroll_pane_g2

0xe1df,	// (0x0007a926) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0007c3e5) thumb_sp_fs_scroll_pane_g

0xe1cd,	// (0x0007a914) bg_sp_fs_scroll_pane_g1

0xe1d6,	// (0x0007a91d) bg_sp_fs_scroll_pane_g2

0xe1df,	// (0x0007a926) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x0007c3e5) bg_sp_fs_scroll_pane_g

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g1

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g2

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g3

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0007b94d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0007b94d) list_medium_line_x2_t3_g4_g

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g4_t1

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g4_t2

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0007b941) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0007b941) list_medium_line_x2_t3_g4_t

0xbbd0,	// (0x00078317) list_medium_line_g2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_g2_g1

0xbbd0,	// (0x00078317) list_medium_line_g2_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0007b948) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0007b948) list_medium_line_g2_g

0xbea2,	// (0x000785e9) list_medium_line_g2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_g2_t1

0xbbd0,	// (0x00078317) list_medium_line_t3_g2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t3_g2_g1

0xbbd0,	// (0x00078317) list_medium_line_t3_g2_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0007b948) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0007b948) list_medium_line_t3_g2_g

0xbea2,	// (0x000785e9) list_medium_line_t3_g2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_g2_t1

0xbea2,	// (0x000785e9) list_medium_line_t3_g2_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_g2_t2

0xbea2,	// (0x000785e9) list_medium_line_t3_g2_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0007b941) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0007b941) list_medium_line_t3_g2_t

0xbed0,	// (0x00078617) list_medium_line_right_icon_g1

0xc425,	// (0x00078b6c) list_medium_line_right_icon_t1

0xbbd0,	// (0x00078317) list_medium_line_t2_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t2_g1

0xbea2,	// (0x000785e9) list_medium_line_t2_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t2_t1

0xbea2,	// (0x000785e9) list_medium_line_t2_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0007b91d) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0007b91d) list_medium_line_t2_t

0xbbd0,	// (0x00078317) list_medium_line_t3_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t3_g1

0xbea2,	// (0x000785e9) list_medium_line_t3_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_t1

0xbea2,	// (0x000785e9) list_medium_line_t3_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_t2

0xbea2,	// (0x000785e9) list_medium_line_t3_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0007b941) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0007b941) list_medium_line_t3_t

0xbbd0,	// (0x00078317) list_medium_line_g3_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_g3_g1

0xbbd0,	// (0x00078317) list_medium_line_g3_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_g3_g2

0xbbd0,	// (0x00078317) list_medium_line_g3_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0007b93a) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0007b93a) list_medium_line_g3_g

0xbea2,	// (0x000785e9) list_medium_line_g3_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_g3_t1

0xbbd0,	// (0x00078317) list_medium_line_t2_g3_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t2_g3_g1

0xbbd0,	// (0x00078317) list_medium_line_t2_g3_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t2_g3_g2

0xbbd0,	// (0x00078317) list_medium_line_t2_g3_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0007b93a) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0007b93a) list_medium_line_t2_g3_g

0xbea2,	// (0x000785e9) list_medium_line_t2_g3_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t2_g3_t1

0xbea2,	// (0x000785e9) list_medium_line_t2_g3_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0007b91d) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0007b91d) list_medium_line_t2_g3_t

0xbbd0,	// (0x00078317) list_medium_line_t3_g3_g1_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t3_g3_g1

0xbbd0,	// (0x00078317) list_medium_line_t3_g3_g2_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t3_g3_g2

0xbbd0,	// (0x00078317) list_medium_line_t3_g3_g3_ParamLimits

0xbbd0,	// (0x00078317) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0007b93a) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0007b93a) list_medium_line_t3_g3_g

0xbea2,	// (0x000785e9) list_medium_line_t3_g3_t1_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_g3_t1

0xbea2,	// (0x000785e9) list_medium_line_t3_g3_t2_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_g3_t2

0xbea2,	// (0x000785e9) list_medium_line_t3_g3_t3_ParamLimits

0xbea2,	// (0x000785e9) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0007b941) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0007b941) list_medium_line_t3_g3_t

0xbed0,	// (0x00078617) list_medium_line_right_iconx2_g1

0xbed0,	// (0x00078617) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0007bb1f) list_medium_line_right_iconx2_g

0xc425,	// (0x00078b6c) list_medium_line_right_iconx2_t1

0xbed0,	// (0x00078617) list_medium_line_t2_right_iconx2_g1

0xbed0,	// (0x00078617) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0007bb1f) list_medium_line_t2_right_iconx2_g

0xc425,	// (0x00078b6c) list_medium_line_t2_right_iconx2_t1

0xc425,	// (0x00078b6c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0007c3b2) list_medium_line_t2_right_iconx2_t

0xc425,	// (0x00078b6c) list_medium_line_x4_t4_t1

0xc425,	// (0x00078b6c) list_medium_line_x4_t4_t2

0xc425,	// (0x00078b6c) list_medium_line_x4_t4_t3

0xc425,	// (0x00078b6c) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0007ba0a) list_medium_line_x4_t4_t

0xa734,	// (0x00076e7b) tport_appsw_pane_ParamLimits

0xa734,	// (0x00076e7b) tport_appsw_pane

0xa74c,	// (0x00076e93) tport_contact_pane_ParamLimits

0xa74c,	// (0x00076e93) tport_contact_pane

0xa764,	// (0x00076eab) tport_listscroll_pane_ParamLimits

0xa764,	// (0x00076eab) tport_listscroll_pane

0xa77e,	// (0x00076ec5) cell_tport_appsw_pane_ParamLimits

0xa77e,	// (0x00076ec5) cell_tport_appsw_pane

0x1992,	// (0x0006e0d9) tport_appsw_pane_g1_ParamLimits

0x1992,	// (0x0006e0d9) tport_appsw_pane_g1

0xe1e8,	// (0x0007a92f) tport_contact_pane_g1

0xe1f1,	// (0x0007a938) tport_contact_pane_t1

0xe1ff,	// (0x0007a946) tport_contact_pane_t2

0x0001,

0xfca5,	// (0x0007c3ec) tport_contact_pane_t

0xe20d,	// (0x0007a954) list_tport_pane

0xe216,	// (0x0007a95d) scroll_pane_cp_030

0xa7c6,	// (0x00076f0d) cell_tport_appsw_pane_g1

0xa7d6,	// (0x00076f1d) cell_tport_appsw_pane_t1

0xa7e4,	// (0x00076f2b) grid_highlight_pane_cp019

0xa7ec,	// (0x00076f33) list_tport_double_graphic_pane_ParamLimits

0xa7ec,	// (0x00076f33) list_tport_double_graphic_pane

0xba4a,	// (0x00078191) list_highlight_pane_cp023_ParamLimits

0xba4a,	// (0x00078191) list_highlight_pane_cp023

0xa7f9,	// (0x00076f40) list_tport_double_graphic_pane_g1_ParamLimits

0xa7f9,	// (0x00076f40) list_tport_double_graphic_pane_g1

0xa806,	// (0x00076f4d) list_tport_double_graphic_pane_t1_ParamLimits

0xa806,	// (0x00076f4d) list_tport_double_graphic_pane_t1

0xa81b,	// (0x00076f62) list_tport_double_graphic_pane_t2_ParamLimits

0xa81b,	// (0x00076f62) list_tport_double_graphic_pane_t2

0x0001,

0xfcb1,	// (0x0007c3f8) list_tport_double_graphic_pane_t_ParamLimits

0xfcb1,	// (0x0007c3f8) list_tport_double_graphic_pane_t

0x35b6,	// (0x0006fcfd) main_cale_note_pane

0x88c2,	// (0x00075009) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x88c2,	// (0x00075009) cell_vitu2_function_top_wide_pane_cp01

0xa1b0,	// (0x000768f7) wait_bar_pane_cp05_ParamLimits

0xba4a,	// (0x00078191) listscroll_cmail_pane

0xe21f,	// (0x0007a966) list_cmail_pane

0xa82d,	// (0x00076f74) list_cmail_body_pane

0xa843,	// (0x00076f8a) list_single_cmail_header_caption_pane

0xa85a,	// (0x00076fa1) list_single_cmail_header_detail_pane_ParamLimits

0xa85a,	// (0x00076fa1) list_single_cmail_header_detail_pane

0xe22f,	// (0x0007a976) list_single_cmail_header_caption_pane_t1

0x334f,	// (0x0006fa96) list_single_cmail_header_detail_pane_g1_ParamLimits

0x334f,	// (0x0006fa96) list_single_cmail_header_detail_pane_g1

0xf06a,	// (0x0007b7b1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf06a,	// (0x0007b7b1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcb6,	// (0x0007c3fd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcb6,	// (0x0007c3fd) list_single_cmail_header_detail_pane_g

0xe253,	// (0x0007a99a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe253,	// (0x0007a99a) list_single_cmail_header_detail_pane_t1

0xe2b3,	// (0x0007a9fa) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe2b3,	// (0x0007a9fa) list_single_cmail_header_editor_pane_bg

0xdbe3,	// (0x0007a32a) list_cmail_body_pane_g1

0xe2ca,	// (0x0007aa11) list_cmail_body_pane_t1

0x89c3,	// (0x0007510a) list_single_cmail_header_editor_pane_bg_g1

0xc0e1,	// (0x00078828) list_single_cmail_header_editor_pane_bg_g1_copy1

0x89d3,	// (0x0007511a) list_single_cmail_header_editor_pane_bg_g1_copy2

0x89cb,	// (0x00075112) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd131,	// (0x00079878) list_single_cmail_header_editor_pane_bg_g1_copy4

0x89f3,	// (0x0007513a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x89e3,	// (0x0007512a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x89eb,	// (0x00075132) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc0c1,	// (0x00078808) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa884,	// (0x00076fcb) calenote_gesture_pane_ParamLimits

0xa884,	// (0x00076fcb) calenote_gesture_pane

0xa8a4,	// (0x00076feb) calenote_window_pane_ParamLimits

0xa8a4,	// (0x00076feb) calenote_window_pane

0xe2d8,	// (0x0007aa1f) popup_note_window_cp01

0xa8c0,	// (0x00077007) calenote_swipe_1_pane_ParamLimits

0xa8c0,	// (0x00077007) calenote_swipe_1_pane

0xa574,	// (0x00076cbb) calenote_swipe_2_pane_ParamLimits

0xa574,	// (0x00076cbb) calenote_swipe_2_pane

0xdf72,	// (0x0007a6b9) calenote_swipe_1_pane_g1_ParamLimits

0xdf72,	// (0x0007a6b9) calenote_swipe_1_pane_g1

0xdf7f,	// (0x0007a6c6) calenote_swipe_1_pane_g2_ParamLimits

0xdf7f,	// (0x0007a6c6) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0007c39a) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0007c39a) calenote_swipe_1_pane_g

0xe2ea,	// (0x0007aa31) calenote_swipe_1_pane_t1_ParamLimits

0xe2ea,	// (0x0007aa31) calenote_swipe_1_pane_t1

0xdf72,	// (0x0007a6b9) calenote_swipe_2_pane_g1_ParamLimits

0xdf72,	// (0x0007a6b9) calenote_swipe_2_pane_g1

0xe309,	// (0x0007aa50) calenote_swipe_2_pane_g2_ParamLimits

0xe309,	// (0x0007aa50) calenote_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x0007c409) calenote_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x0007c409) calenote_swipe_2_pane_g

0xe315,	// (0x0007aa5c) calenote_swipe_2_pane_t1_ParamLimits

0xe315,	// (0x0007aa5c) calenote_swipe_2_pane_t1

0x35b6,	// (0x0006fcfd) main_mup_navstr_pane

0x71f2,	// (0x00073939) main_mup3_pane_t7_ParamLimits

0x71f2,	// (0x00073939) main_mup3_pane_t7

0xec84,	// (0x0007b3cb) main_mp4_pane_g6_ParamLimits

0xec84,	// (0x0007b3cb) main_mp4_pane_g6

0xee46,	// (0x0007b58d) main_image3_pane_t4_ParamLimits

0xee46,	// (0x0007b58d) main_image3_pane_t4

0xa8d5,	// (0x0007701c) popup_navstr_preview_pane_ParamLimits

0xa8d5,	// (0x0007701c) popup_navstr_preview_pane

0xa8e9,	// (0x00077030) scroll_navstr_pane_ParamLimits

0xa8e9,	// (0x00077030) scroll_navstr_pane

0x35b6,	// (0x0006fcfd) bg_popup_preview_window_pane_cp04

0xe33c,	// (0x0007aa83) popup_navstr_preview_pane_t1

0xa8fd,	// (0x00077044) scroll_navstr_pane_g1_ParamLimits

0xa8fd,	// (0x00077044) scroll_navstr_pane_g1

0xa911,	// (0x00077058) scroll_navstr_pane_t1_ParamLimits

0xa911,	// (0x00077058) scroll_navstr_pane_t1

0xe2e1,	// (0x0007aa28) bg_button_pane_cp014

0xe2e1,	// (0x0007aa28) bg_button_pane_cp030

0xdf13,	// (0x0007a65a) list_double_fisheye_pane_g4_ParamLimits

0xdf13,	// (0x0007a65a) list_double_fisheye_pane_g4

0xdf1f,	// (0x0007a666) list_double_fisheye_pane_g5_ParamLimits

0xdf1f,	// (0x0007a666) list_double_fisheye_pane_g5

0x2022,	// (0x0006e769) sp_fs_scroll_pane_cp03

0xe089,	// (0x0007a7d0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe095,	// (0x0007a7dc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0007c3b7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa660,	// (0x00076da7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe227,	// (0x0007a96e) sp_fs_scroll_pane_cp02

0xbdd8,	// (0x0007851f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbdd8,	// (0x0007851f) popup_sp_fs_calendar_preview_list_single_pane

0x35b6,	// (0x0006fcfd) main_cam6_pano_pane

0xba4a,	// (0x00078191) main_mup3_pane_ParamLimits

0x35b6,	// (0x0006fcfd) main_phacti_pane

0xa083,	// (0x000767ca) bg_button_pane_cp11

0xa09d,	// (0x000767e4) main_mobtv_info_pane_g2_ParamLimits

0xa09d,	// (0x000767e4) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0007c317) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0007c317) main_mobtv_info_pane_g

0xa27a,	// (0x000769c1) sc_clock_pane_t5_ParamLimits

0xa27a,	// (0x000769c1) sc_clock_pane_t5

0xa342,	// (0x00076a89) main_radioblah_pane_g1_ParamLimits

0xde81,	// (0x0007a5c8) main_radioblah_pane_t3_ParamLimits

0xde81,	// (0x0007a5c8) main_radioblah_pane_t3

0xde99,	// (0x0007a5e0) main_radioblah_pane_t4_ParamLimits

0xde99,	// (0x0007a5e0) main_radioblah_pane_t4

0xa36a,	// (0x00076ab1) main_radioblah_text_pane_ParamLimits

0xa36a,	// (0x00076ab1) main_radioblah_text_pane

0xa37c,	// (0x00076ac3) main_radioblah_info_pane_g1_ParamLimits

0xa415,	// (0x00076b5c) main_radioblah_info_pane_t4_ParamLimits

0xa415,	// (0x00076b5c) main_radioblah_info_pane_t4

0xba4a,	// (0x00078191) main_sp_fs_calendar_pane

0xa928,	// (0x0007706f) main_phacti_pane_g1

0xa930,	// (0x00077077) phacti_note_pane_ParamLimits

0xa930,	// (0x00077077) phacti_note_pane

0xe353,	// (0x0007aa9a) phacti_term_pane_ParamLimits

0xe353,	// (0x0007aa9a) phacti_term_pane

0xe368,	// (0x0007aaaf) phacti_note_pane_t1_ParamLimits

0xe368,	// (0x0007aaaf) phacti_note_pane_t1

0xe37f,	// (0x0007aac6) phacti_term_pane_g1

0xe387,	// (0x0007aace) phacti_term_pane_t1_ParamLimits

0xe387,	// (0x0007aace) phacti_term_pane_t1

0xe3b1,	// (0x0007aaf8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3b9,	// (0x0007ab00) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfccc,	// (0x0007c413) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3c1,	// (0x0007ab08) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3c1,	// (0x0007ab08) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe3d7,	// (0x0007ab1e) aid_popup_sp_fs_bg_corner_pane

0xbed0,	// (0x00078617) popup_sp_fs_calendar_preview_bg_pane_g1

0x35b6,	// (0x0006fcfd) popup_sp_fs_calendar_preview_bg_pane

0xe3df,	// (0x0007ab26) popup_sp_fs_calendar_preview_list_pane

0x18b5,	// (0x0006dffc) bg_main_sp_fs_cale_pane_ParamLimits

0x18b5,	// (0x0006dffc) bg_main_sp_fs_cale_pane

0xe3f0,	// (0x0007ab37) listscroll_cale_mrui_pane_ParamLimits

0xe3f0,	// (0x0007ab37) listscroll_cale_mrui_pane

0xe405,	// (0x0007ab4c) listscroll_sp_fs_schedule_track_pane

0xe40e,	// (0x0007ab55) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe40e,	// (0x0007ab55) main_sp_fs_ctrlbar_pane_cp01

0xe421,	// (0x0007ab68) main_sp_fs_ribbon_pane

0xe429,	// (0x0007ab70) popup_sp_fs_cale_preview_window

0xa9a5,	// (0x000770ec) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa9a5,	// (0x000770ec) list_single_sp_fs_schedule_track_pane

0xba4a,	// (0x00078191) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xba4a,	// (0x00078191) bg_sp_fs_highlight_list_pane_cp03

0xa9b9,	// (0x00077100) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa9b9,	// (0x00077100) list_single_sp_fs_schedule_track_pane_g1

0xa9c5,	// (0x0007710c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa9c5,	// (0x0007710c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd1,	// (0x0007c418) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd1,	// (0x0007c418) list_single_sp_fs_schedule_track_pane_g

0xa9d1,	// (0x00077118) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa9d1,	// (0x00077118) list_single_sp_fs_schedule_track_pane_t1

0xa9eb,	// (0x00077132) sp_fs_schedule_track_pane_ParamLimits

0xa9eb,	// (0x00077132) sp_fs_schedule_track_pane

0xe43b,	// (0x0007ab82) sp_fs_schedule_track_pane_g1

0xe443,	// (0x0007ab8a) sp_fs_schedule_track_pane_g2

0xe44b,	// (0x0007ab92) sp_fs_schedule_track_pane_g3

0xe453,	// (0x0007ab9a) sp_fs_schedule_track_pane_g4

0xe45b,	// (0x0007aba2) sp_fs_schedule_track_pane_g5

0x0004,

0xfcd6,	// (0x0007c41d) sp_fs_schedule_track_pane_g

0x89c3,	// (0x0007510a) bg_sp_fs_schedule_viewer_highlight_g1

0xc0e1,	// (0x00078828) bg_sp_fs_schedule_viewer_highlight_g2

0x89cb,	// (0x00075112) bg_sp_fs_schedule_viewer_highlight_g3

0x89d3,	// (0x0007511a) bg_sp_fs_schedule_viewer_highlight_g4

0xd131,	// (0x00079878) bg_sp_fs_schedule_viewer_highlight_g5

0x89e3,	// (0x0007512a) bg_sp_fs_schedule_viewer_highlight_g6

0x89eb,	// (0x00075132) bg_sp_fs_schedule_viewer_highlight_g7

0x89f3,	// (0x0007513a) bg_sp_fs_schedule_viewer_highlight_g8

0xc0c1,	// (0x00078808) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce1,	// (0x0007c428) bg_sp_fs_schedule_viewer_highlight_g

0x35b6,	// (0x0006fcfd) bg_main_sp_fs_ribbon_pane

0xa9fc,	// (0x00077143) main_sp_fs_ribbon_pane_g1

0xe463,	// (0x0007abaa) main_sp_fs_ribbon_pane_t1

0xaa05,	// (0x0007714c) main_sp_fs_ribbon_pane_t2

0xe472,	// (0x0007abb9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf4,	// (0x0007c43b) main_sp_fs_ribbon_pane_t

0xe481,	// (0x0007abc8) main_sp_fs_ribbon_scheduler_pane

0xe489,	// (0x0007abd0) bg_main_sp_fs_ribbon_pane_g1

0xe492,	// (0x0007abd9) bg_main_sp_fs_ribbon_pane_g2

0xe49b,	// (0x0007abe2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcfb,	// (0x0007c442) bg_main_sp_fs_ribbon_pane_g

0xe4a3,	// (0x0007abea) main_sp_fs_ribbon_scheduler_pane_g1

0xe4ac,	// (0x0007abf3) main_sp_fs_ribbon_scheduler_pane_g2

0xe4b5,	// (0x0007abfc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd02,	// (0x0007c449) main_sp_fs_ribbon_scheduler_pane_g

0xe4be,	// (0x0007ac05) list_cale_mrui_pane

0xaa14,	// (0x0007715b) sp_fs_scroll_pane_cp07_ParamLimits

0xaa14,	// (0x0007715b) sp_fs_scroll_pane_cp07

0xaa30,	// (0x00077177) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xaa30,	// (0x00077177) bg_sp_fs_schedule_viewer_highlight

0xe4cb,	// (0x0007ac12) list_single_sp_fs_schedule_track_pane_cp01

0xe4d3,	// (0x0007ac1a) list_sp_fs_schedule_track_pane

0xe4db,	// (0x0007ac22) sp_fs_scroll_pane_cp06_ParamLimits

0xe4db,	// (0x0007ac22) sp_fs_scroll_pane_cp06

0xbed0,	// (0x00078617) bgmain_sp_fs_calendar_pane_g1

0x3367,	// (0x0006faae) list_single_cale_mrui_pane_ParamLimits

0x3367,	// (0x0006faae) list_single_cale_mrui_pane

0xe4ed,	// (0x0007ac34) list_single_cale_mrui_row_pane_ParamLimits

0xe4ed,	// (0x0007ac34) list_single_cale_mrui_row_pane

0xe4fa,	// (0x0007ac41) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe4fa,	// (0x0007ac41) list_single_cale_mrui_row_pane_g1

0xe53f,	// (0x0007ac86) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe53f,	// (0x0007ac86) list_single_cale_mrui_row_pane_t1

0x3388,	// (0x0006facf) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3388,	// (0x0006facf) list_single_cale_mrui_row_pane_t2

0xe551,	// (0x0007ac98) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe551,	// (0x0007ac98) list_single_cale_mrui_row_pane_t3

0xe580,	// (0x0007acc7) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe580,	// (0x0007acc7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd10,	// (0x0007c457) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd10,	// (0x0007c457) list_single_cale_mrui_row_pane_t

0x33f0,	// (0x0006fb37) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x33f0,	// (0x0006fb37) list_single_cmail_header_editor_pane_bg_cp01

0x3416,	// (0x0006fb5d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3416,	// (0x0006fb5d) list_single_cmail_header_editor_pane_bg_cp02

0xaa40,	// (0x00077187) main_radioblah_text_pane_t1_ParamLimits

0xaa40,	// (0x00077187) main_radioblah_text_pane_t1

0xe5af,	// (0x0007acf6) cam6_indi_pane_cp01

0xe5b7,	// (0x0007acfe) cam6_mode_pane_cp01

0xe5bf,	// (0x0007ad06) cam6_pano_pane

0xe5c8,	// (0x0007ad0f) cam6_zoom_pane_cp01

0xe5d0,	// (0x0007ad17) cam6_pano_image_pane

0xe5db,	// (0x0007ad22) cam6_pano_pane_g1

0xdbe3,	// (0x0007a32a) cam6_pano_pane_g2

0xe5e4,	// (0x0007ad2b) cam6_pano_pane_g3

0xe5ed,	// (0x0007ad34) cam6_pano_pane_g4

0x7aee,	// (0x00074235) cam6_pano_pane_g5

0xe5f6,	// (0x0007ad3d) cam6_pano_pane_g6

0xe600,	// (0x0007ad47) cam6_pano_pane_g7

0xe608,	// (0x0007ad4f) cam6_pano_pane_g8

0xe611,	// (0x0007ad58) cam6_pano_pane_g9

0x0008,

0xfd19,	// (0x0007c460) cam6_pano_pane_g

0x35b6,	// (0x0006fcfd) main_browser_tag_pane

0xe334,	// (0x0007aa7b) grid_navstr_albumart_pane

0xe61c,	// (0x0007ad63) cell_navstr_albumart_pane_ParamLimits

0xe61c,	// (0x0007ad63) cell_navstr_albumart_pane

0xe63c,	// (0x0007ad83) cell_navstr_albumart_pane_g1

0x1711,	// (0x0006de58) cell_navstr_albumart_pane_g2

0x1721,	// (0x0006de68) cell_navstr_albumart_pane_g3

0x1719,	// (0x0006de60) cell_navstr_albumart_pane_g4

0x0003,

0xfd2c,	// (0x0007c473) cell_navstr_albumart_pane_g

0xaa5b,	// (0x000771a2) bt_list_pane_ParamLimits

0xaa5b,	// (0x000771a2) bt_list_pane

0xaa6f,	// (0x000771b6) bt_list_pane_t1

0xaa7e,	// (0x000771c5) bt_list_pane_t2

0x0001,

0xfd35,	// (0x0007c47c) bt_list_pane_t

0x35b6,	// (0x0006fcfd) main_cale_prevew_pane

0xaa8d,	// (0x000771d4) popup_cale_preview_window_ParamLimits

0xaa8d,	// (0x000771d4) popup_cale_preview_window

0xba4a,	// (0x00078191) bg_popup_preview_window_pane_cp05_ParamLimits

0xba4a,	// (0x00078191) bg_popup_preview_window_pane_cp05

0xe644,	// (0x0007ad8b) list_cale_preview_pane_ParamLimits

0xe644,	// (0x0007ad8b) list_cale_preview_pane

0xaaa6,	// (0x000771ed) list_double_cale_preview_pane_ParamLimits

0xaaa6,	// (0x000771ed) list_double_cale_preview_pane

0x89fb,	// (0x00075142) list_single_cale_preview_pane_ParamLimits

0x89fb,	// (0x00075142) list_single_cale_preview_pane

0xaab8,	// (0x000771ff) list_single_cale_preview_pane_g1

0xaac0,	// (0x00077207) list_single_cale_preview_pane_t1_ParamLimits

0xaac0,	// (0x00077207) list_single_cale_preview_pane_t1

0xaad5,	// (0x0007721c) list_double_cale_preview_pane_g1

0xaadd,	// (0x00077224) list_double_cale_preview_pane_t1_ParamLimits

0xaadd,	// (0x00077224) list_double_cale_preview_pane_t1

0xaaf2,	// (0x00077239) list_double_cale_preview_pane_t2_ParamLimits

0xaaf2,	// (0x00077239) list_double_cale_preview_pane_t2

0x0001,

0xfd3a,	// (0x0007c481) list_double_cale_preview_pane_t_ParamLimits

0xfd3a,	// (0x0007c481) list_double_cale_preview_pane_t

0x35b6,	// (0x0006fcfd) main_ezdial_pane

0xba4a,	// (0x00078191) main_sp_fs_email_pane_ParamLimits

0xa5d0,	// (0x00076d17) cmail_ddmenu_btn01_pane_ParamLimits

0xa5d0,	// (0x00076d17) cmail_ddmenu_btn01_pane

0xa5e3,	// (0x00076d2a) cmail_ddmenu_btn02_pane_ParamLimits

0xa5e3,	// (0x00076d2a) cmail_ddmenu_btn02_pane

0xa606,	// (0x00076d4d) cmail_ddmenu_btn03_pane_ParamLimits

0xa606,	// (0x00076d4d) cmail_ddmenu_btn03_pane

0xa69f,	// (0x00076de6) main_sp_fs_ctrlbar_pane_ParamLimits

0xa6c3,	// (0x00076e0a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa82d,	// (0x00076f74) list_cmail_body_pane_ParamLimits

0xe23d,	// (0x0007a984) bg_button_pane_cp12

0xe246,	// (0x0007a98d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe246,	// (0x0007a98d) list_single_cmail_header_detail_pane_g3

0xe28f,	// (0x0007a9d6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe28f,	// (0x0007a9d6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcbd,	// (0x0007c404) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcbd,	// (0x0007c404) list_single_cmail_header_detail_pane_t

0xe39c,	// (0x0007aae3) phacti_term_pane_t2_ParamLimits

0xe39c,	// (0x0007aae3) phacti_term_pane_t2

0x0001,

0xfcc7,	// (0x0007c40e) phacti_term_pane_t_ParamLimits

0xfcc7,	// (0x0007c40e) phacti_term_pane_t

0xe650,	// (0x0007ad97) aid_size_list_single_double

0xab0a,	// (0x00077251) popup_ezdial_listscroll_window

0xab26,	// (0x0007726d) popup_number_entry_window_cp01

0xbe90,	// (0x000785d7) bg_popup_call_pane_cp09

0xe65c,	// (0x0007ada3) ezdial_list_pane

0xe664,	// (0x0007adab) scroll_pane_cp23

0x18b5,	// (0x0006dffc) bg_button_pane_cp028_ParamLimits

0x18b5,	// (0x0006dffc) bg_button_pane_cp028

0xab34,	// (0x0007727b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xab34,	// (0x0007727b) cmail_ddmenu_btn01_pane_g1

0xab40,	// (0x00077287) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xab40,	// (0x00077287) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd3f,	// (0x0007c486) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd3f,	// (0x0007c486) cmail_ddmenu_btn01_pane_g

0xe66c,	// (0x0007adb3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe66c,	// (0x0007adb3) cmail_ddmenu_btn01_pane_t1

0x18b5,	// (0x0006dffc) bg_button_pane_cp029_ParamLimits

0x18b5,	// (0x0006dffc) bg_button_pane_cp029

0xab4c,	// (0x00077293) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xab4c,	// (0x00077293) cmail_ddmenu_btn02_pane_g1

0xab64,	// (0x000772ab) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xab64,	// (0x000772ab) cmail_ddmenu_btn02_pane_t1

0xba4a,	// (0x00078191) bg_button_pane_cp031_ParamLimits

0xba4a,	// (0x00078191) bg_button_pane_cp031

0xab4c,	// (0x00077293) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xab4c,	// (0x00077293) cmail_ddmenu_btn03_pane_g1

0xab64,	// (0x000772ab) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xab64,	// (0x000772ab) cmail_ddmenu_btn03_pane_t1

0x80b2,	// (0x000747f9) cell_dialer2_keypad_pane_t1_ParamLimits

0x80cc,	// (0x00074813) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x80cc,	// (0x00074813) cell_dialer2_keypad_pane_t1_copy1

0x9ea6,	// (0x000765ed) ncimui_group_button_pane

0xba4a,	// (0x00078191) main_sp_fs_calendar_pane_ParamLimits

0xa843,	// (0x00076f8a) list_single_cmail_header_caption_pane_ParamLimits

0xe3e7,	// (0x0007ab2e) aid_recal_txt_sm_pane

0x35b6,	// (0x0006fcfd) mian_recal_day_pane

0xe429,	// (0x0007ab70) popup_sp_fs_cale_preview_window_ParamLimits

0xe681,	// (0x0007adc8) list_recal_day_pane

0xe6c3,	// (0x0007ae0a) list_single_recal_day_pane_ParamLimits

0xe6c3,	// (0x0007ae0a) list_single_recal_day_pane

0xe6d5,	// (0x0007ae1c) list_single_recal_day_pane_g1_ParamLimits

0xe6d5,	// (0x0007ae1c) list_single_recal_day_pane_g1

0xe6e1,	// (0x0007ae28) list_single_recal_day_pane_g2_ParamLimits

0xe6e1,	// (0x0007ae28) list_single_recal_day_pane_g2

0xe6ed,	// (0x0007ae34) list_single_recal_day_pane_g3_ParamLimits

0xe6ed,	// (0x0007ae34) list_single_recal_day_pane_g3

0x3436,	// (0x0006fb7d) list_single_recal_day_pane_g4_ParamLimits

0x3436,	// (0x0006fb7d) list_single_recal_day_pane_g4

0xe6f9,	// (0x0007ae40) list_single_recal_day_pane_g5_ParamLimits

0xe6f9,	// (0x0007ae40) list_single_recal_day_pane_g5

0xe705,	// (0x0007ae4c) list_single_recal_day_pane_g6_ParamLimits

0xe705,	// (0x0007ae4c) list_single_recal_day_pane_g6

0x0004,

0xfd4e,	// (0x0007c495) list_single_recal_day_pane_g_ParamLimits

0xfd4e,	// (0x0007c495) list_single_recal_day_pane_g

0xe719,	// (0x0007ae60) list_single_recal_day_pane_t1

0xe72b,	// (0x0007ae72) list_single_recal_day_pane_t2

0x0001,

0xfd59,	// (0x0007c4a0) list_single_recal_day_pane_t

0xab88,	// (0x000772cf) ncimui_query_button_pane_ParamLimits

0xab88,	// (0x000772cf) ncimui_query_button_pane

0xab98,	// (0x000772df) ncimui_query_button_pane_t1_ParamLimits

0xab98,	// (0x000772df) ncimui_query_button_pane_t1

0xe73d,	// (0x0007ae84) ncimui_query_button_pane_t2_ParamLimits

0xe73d,	// (0x0007ae84) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x0007c4a5) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x0007c4a5) ncimui_query_button_pane_t

0xabab,	// (0x000772f2) query_button_pane_ParamLimits

0xabab,	// (0x000772f2) query_button_pane

0x35b6,	// (0x0006fcfd) bg_button_pane_cp0028

0xe750,	// (0x0007ae97) query_button_pane_t1

0x65f2,	// (0x00072d39) main_tport_pane_ParamLimits

0xa6f1,	// (0x00076e38) bg_popup_window_pane_cp01_ParamLimits

0xa6f1,	// (0x00076e38) bg_popup_window_pane_cp01

0xa70c,	// (0x00076e53) heading_pane_cp08_ParamLimits

0xa70c,	// (0x00076e53) heading_pane_cp08

0xa71f,	// (0x00076e66) heading_pane_cp07_ParamLimits

0xa71f,	// (0x00076e66) heading_pane_cp07

0xa7c6,	// (0x00076f0d) cell_tport_appsw_pane_g2

0x0002,

0xfcaa,	// (0x0007c3f1) cell_tport_appsw_pane_g

0xcac2,	// (0x00079209) input_candi_list_open_g1

0xc2d2,	// (0x00078a19) list_cale_time_pane_g6_ParamLimits

0xc2d2,	// (0x00078a19) list_cale_time_pane_g6

0x6bff,	// (0x00073346) aid_size_touch_calib_1_ParamLimits

0x6bff,	// (0x00073346) aid_size_touch_calib_1

0x6c11,	// (0x00073358) aid_size_touch_calib_2_ParamLimits

0x6c11,	// (0x00073358) aid_size_touch_calib_2

0x6c29,	// (0x00073370) aid_size_touch_calib_3_ParamLimits

0x6c29,	// (0x00073370) aid_size_touch_calib_3

0x6c47,	// (0x0007338e) aid_size_touch_calib_4_ParamLimits

0x6c47,	// (0x0007338e) aid_size_touch_calib_4

0x6c5f,	// (0x000733a6) main_touch_calib_button_group_pane_ParamLimits

0x6c5f,	// (0x000733a6) main_touch_calib_button_group_pane

0x6c77,	// (0x000733be) main_touch_calib_pane_g1_ParamLimits

0x6c89,	// (0x000733d0) main_touch_calib_pane_g2_ParamLimits

0x6c9b,	// (0x000733e2) main_touch_calib_pane_g3_ParamLimits

0x6cad,	// (0x000733f4) main_touch_calib_pane_g4_ParamLimits

0xf6ec,	// (0x0007be33) main_touch_calib_pane_g_ParamLimits

0x6cbf,	// (0x00073406) main_touch_calib_pane_t1_ParamLimits

0x6cd9,	// (0x00073420) main_touch_calib_pane_t2_ParamLimits

0x6cf3,	// (0x0007343a) main_touch_calib_pane_t3_ParamLimits

0x6d07,	// (0x0007344e) main_touch_calib_pane_t4_ParamLimits

0x6d1b,	// (0x00073462) main_touch_calib_pane_t5_ParamLimits

0xf6f5,	// (0x0007be3c) main_touch_calib_pane_t_ParamLimits

0x7468,	// (0x00073baf) list_single_fp_cale_pane_g3_ParamLimits

0x7468,	// (0x00073baf) list_single_fp_cale_pane_g3

0xba4a,	// (0x00078191) bg_button_pane_cp012_ParamLimits

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp03_ParamLimits

0x91aa,	// (0x000758f1) cell_vitu2_function_top_pane_g1_ParamLimits

0xba4a,	// (0x00078191) bg_vkb2_func_pane_cp04_ParamLimits

0x9e31,	// (0x00076578) main_ncimui_button_group_pane_ParamLimits

0x9e31,	// (0x00076578) main_ncimui_button_group_pane

0x9e91,	// (0x000765d8) main_ncimui_pane_t3_ParamLimits

0x9e91,	// (0x000765d8) main_ncimui_pane_t3

0xe34a,	// (0x0007aa91) phacti_button_group_pane

0xe650,	// (0x0007ad97) aid_size_list_single_double_ParamLimits

0xab0a,	// (0x00077251) popup_ezdial_listscroll_window_ParamLimits

0xab26,	// (0x0007726d) popup_number_entry_window_cp01_ParamLimits

0xabbe,	// (0x00077305) phacti_button_pane_ParamLimits

0xabbe,	// (0x00077305) phacti_button_pane

0x35b6,	// (0x0006fcfd) bg_button_pane_cp14

0xe75e,	// (0x0007aea5) phacti_button_pane_t1

0xabcf,	// (0x00077316) main_touch_calib_button_pane_ParamLimits

0xabcf,	// (0x00077316) main_touch_calib_button_pane

0xbc64,	// (0x000783ab) bg_button_pane_cp18_ParamLimits

0xbc64,	// (0x000783ab) bg_button_pane_cp18

0xe76c,	// (0x0007aeb3) main_touch_calib_button_pane_t1_ParamLimits

0xe76c,	// (0x0007aeb3) main_touch_calib_button_pane_t1

0xe782,	// (0x0007aec9) main_touch_calib_button_pane_t2_ParamLimits

0xe782,	// (0x0007aec9) main_touch_calib_button_pane_t2

0x0001,

0xfd63,	// (0x0007c4aa) main_touch_calib_button_pane_t_ParamLimits

0xfd63,	// (0x0007c4aa) main_touch_calib_button_pane_t

0x35b6,	// (0x0006fcfd) cell_ncimui_button_pane

0x35b6,	// (0x0006fcfd) bg_button_pane_cp032

0xe7a0,	// (0x0007aee7) cell_ncimui_button_pane_t1

0xee26,	// (0x0007b56d) image3_infobar_pane_ParamLimits

0xee26,	// (0x0007b56d) image3_infobar_pane

0xa2a6,	// (0x000769ed) fs_bigclock_status_pane_ParamLimits

0xa2a6,	// (0x000769ed) fs_bigclock_status_pane

0xa2b3,	// (0x000769fa) main_fs_bigclock_clock_pane_ParamLimits

0xa2b3,	// (0x000769fa) main_fs_bigclock_clock_pane

0xa2d1,	// (0x00076a18) main_fs_bigclock_indi_pane_ParamLimits

0xa2d1,	// (0x00076a18) main_fs_bigclock_indi_pane

0xa303,	// (0x00076a4a) main_fs_bigclock_swipe_pane_ParamLimits

0xa303,	// (0x00076a4a) main_fs_bigclock_swipe_pane

0x35b6,	// (0x0006fcfd) main_fs_clock_dumped_data

0xdcf0,	// (0x0007a437) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdcf0,	// (0x0007a437) list_single_fs_bigclock_indicator_pane_g1

0xdd0c,	// (0x0007a453) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdd0c,	// (0x0007a453) list_single_fs_bigclock_indicator_pane_g2

0xdd26,	// (0x0007a46d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdd26,	// (0x0007a46d) list_single_fs_bigclock_indicator_pane_g3

0xdd40,	// (0x0007a487) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdd40,	// (0x0007a487) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0007c34b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0007c34b) list_single_fs_bigclock_indicator_pane_g

0xdd6b,	// (0x0007a4b2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdd6b,	// (0x0007a4b2) list_single_fs_bigclock_indicator_pane_t1

0xdd93,	// (0x0007a4da) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdd93,	// (0x0007a4da) list_single_fs_bigclock_indicator_pane_t2

0xddbb,	// (0x0007a502) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xddbb,	// (0x0007a502) list_single_fs_bigclock_indicator_pane_t3

0xdde3,	// (0x0007a52a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdde3,	// (0x0007a52a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0007c356) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0007c356) list_single_fs_bigclock_indicator_pane_t

0xe7ae,	// (0x0007aef5) image3_infobar_fav_pane_ParamLimits

0xe7ae,	// (0x0007aef5) image3_infobar_fav_pane

0xe7be,	// (0x0007af05) image3_infobar_loc_pane_ParamLimits

0xe7be,	// (0x0007af05) image3_infobar_loc_pane

0xe7d2,	// (0x0007af19) image3_infobar_time_pane_ParamLimits

0xe7d2,	// (0x0007af19) image3_infobar_time_pane

0xbed0,	// (0x00078617) image3_infobar_time_pane_g1

0xe7e2,	// (0x0007af29) image3_infobar_time_pane_t1

0xbed0,	// (0x00078617) image3_infobar_loc_pane_g1

0xe7f0,	// (0x0007af37) image3_infobar_loc_pane_g2

0x0001,

0xfd68,	// (0x0007c4af) image3_infobar_loc_pane_g

0xe7f8,	// (0x0007af3f) image3_infobar_loc_pane_t1

0xbed0,	// (0x00078617) image3_infobar_fav_pane_g1

0xe806,	// (0x0007af4d) image3_infobar_fav_pane_g2

0x0001,

0xfd6d,	// (0x0007c4b4) image3_infobar_fav_pane_g

0xe80e,	// (0x0007af55) fs_bigclock_status_battery_pane

0xe817,	// (0x0007af5e) fs_bigclock_status_signal_pane

0xe820,	// (0x0007af67) fs_bigclock_status_title_pane

0xe829,	// (0x0007af70) fs_bigclock_status_signal_pane_g1

0xe832,	// (0x0007af79) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd72,	// (0x0007c4b9) fs_bigclock_status_signal_pane_g

0xe83a,	// (0x0007af81) fs_bigclock_status_battery_pane_g1

0xe843,	// (0x0007af8a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd77,	// (0x0007c4be) fs_bigclock_status_battery_pane_g

0xe84b,	// (0x0007af92) fs_bigclock_status_title_pane_t1

0xabe4,	// (0x0007732b) main_fs_bigclock_clock_pane_g1

0xabe4,	// (0x0007732b) main_fs_bigclock_clock_pane_g2

0xabf5,	// (0x0007733c) main_fs_bigclock_clock_pane_g3

0xabf5,	// (0x0007733c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x0007c4c3) main_fs_bigclock_clock_pane_g

0xac08,	// (0x0007734f) main_fs_bigclock_clock_pane_t1

0xac1e,	// (0x00077365) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x0007c4cc) main_fs_bigclock_clock_pane_t

0xe859,	// (0x0007afa0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe859,	// (0x0007afa0) list_single_fs_bigclock_indicator_pane

0xe86a,	// (0x0007afb1) list_single_fs_bigclock_pane_ParamLimits

0xe86a,	// (0x0007afb1) list_single_fs_bigclock_pane

0xe890,	// (0x0007afd7) main_fs_bigclock_indicator_pane_t1

0xe89f,	// (0x0007afe6) list_single_fs_bigclock_pane_g1

0xe8a7,	// (0x0007afee) list_single_fs_bigclock_pane_t1

0xbed0,	// (0x00078617) main_fs_bigclock_swipe_pane_g1

0xe8ea,	// (0x0007b031) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd96,	// (0x0007c4dd) main_fs_bigclock_swipe_pane_g

0xe8f2,	// (0x0007b039) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe8f2,	// (0x0007b039) main_fs_bigclock_swipe_pane_t1

0x5744,	// (0x00071e8b) call_type_pane_ParamLimits

0x35b6,	// (0x0006fcfd) main_btmg_pane

0xe526,	// (0x0007ac6d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe526,	// (0x0007ac6d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd09,	// (0x0007c450) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd09,	// (0x0007c450) list_single_cale_mrui_row_pane_g

0xe6aa,	// (0x0007adf1) list_recal_vselct_arw_lo_pane

0xe6b2,	// (0x0007adf9) list_recal_vselct_arw_up_pane

0xe6ba,	// (0x0007ae01) list_recal_vselct_pane

0xac78,	// (0x000773bf) btmg_button_pane

0xac82,	// (0x000773c9) main_btmg_pane_g1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp044

0xe90f,	// (0x0007b056) btmg_button_pane_t1

0x18a1,	// (0x0006dfe8) aid_listscroll_gen

0xba4a,	// (0x00078191) main_cntbar_detail_pane

0xe21f,	// (0x0007a966) list_cmail_folder_pane

0x2022,	// (0x0006e769) sp_fs_scroll_pane_cp03_ParamLimits

0x344e,	// (0x0006fb95) list_single_fs_dyc_pane_cp01_ParamLimits

0x344e,	// (0x0006fb95) list_single_fs_dyc_pane_cp01

0xe91d,	// (0x0007b064) aid_size_cmail_indent

0xe926,	// (0x0007b06d) list_single_dyc_row_pane_cp01

0xacbe,	// (0x00077405) cntbar_detail_list_pane_ParamLimits

0xacbe,	// (0x00077405) cntbar_detail_list_pane

0xad0a,	// (0x00077451) main_cntbar_detail_cont_pane_ParamLimits

0xad0a,	// (0x00077451) main_cntbar_detail_cont_pane

0x2022,	// (0x0006e769) scroll_pane_cp032_ParamLimits

0x2022,	// (0x0006e769) scroll_pane_cp032

0xad1e,	// (0x00077465) cntbar_detail_list_event_pane_ParamLimits

0xad1e,	// (0x00077465) cntbar_detail_list_event_pane

0xacce,	// (0x00077415) cntbar_detail_list_shct_pane

0xc12f,	// (0x00078876) aid_list_gen

0xe92f,	// (0x0007b076) aid_scroll

0xe938,	// (0x0007b07f) aid_size_touch_scroll_bar

0xa492,	// (0x00076bd9) aid_list_double

0xad2e,	// (0x00077475) aid_list_single

0x202e,	// (0x0006e775) aid_list_single_lg

0x3464,	// (0x0006fbab) aid_list_z_g_a_sm

0xad37,	// (0x0007747e) aid_list_z_g_d

0x346c,	// (0x0006fbb3) aid_txt_z_prm

0x347a,	// (0x0006fbc1) aid_txt_z_prm_cp01

0x3488,	// (0x0006fbcf) aid_txt_z_sec

0xad3f,	// (0x00077486) main_cntbar_detail_cont_pane_g1_ParamLimits

0xad3f,	// (0x00077486) main_cntbar_detail_cont_pane_g1

0xad53,	// (0x0007749a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xad53,	// (0x0007749a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9b,	// (0x0007c4e2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9b,	// (0x0007c4e2) main_cntbar_detail_cont_pane_g

0xe941,	// (0x0007b088) main_cntbar_detail_cont_pane_t1

0xe94f,	// (0x0007b096) main_cntbar_detail_cont_pane_t2

0xe95d,	// (0x0007b0a4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda0,	// (0x0007c4e7) main_cntbar_detail_cont_pane_t

0xad63,	// (0x000774aa) cell_cntbar_detail_list_shct_pane_ParamLimits

0xad63,	// (0x000774aa) cell_cntbar_detail_list_shct_pane

0xe96b,	// (0x0007b0b2) cntbar_detail_list_shct_pane_g1

0xe974,	// (0x0007b0bb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfda7,	// (0x0007c4ee) cntbar_detail_list_shct_pane_g

0xad77,	// (0x000774be) cntbar_detail_list_event_pane_g1_ParamLimits

0xad77,	// (0x000774be) cntbar_detail_list_event_pane_g1

0xad83,	// (0x000774ca) cntbar_detail_list_event_pane_g2_ParamLimits

0xad83,	// (0x000774ca) cntbar_detail_list_event_pane_g2

0x0005,

0xfdac,	// (0x0007c4f3) cntbar_detail_list_event_pane_g_ParamLimits

0xfdac,	// (0x0007c4f3) cntbar_detail_list_event_pane_g

0xadef,	// (0x00077536) cntbar_detail_list_event_pane_t1_ParamLimits

0xadef,	// (0x00077536) cntbar_detail_list_event_pane_t1

0xae04,	// (0x0007754b) cntbar_detail_list_event_pane_t2_ParamLimits

0xae04,	// (0x0007754b) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb9,	// (0x0007c500) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb9,	// (0x0007c500) cntbar_detail_list_event_pane_t

0xbed0,	// (0x00078617) cell_cntbar_detail_list_shct_pane_g1

0xc910,	// (0x00079057) navi_pane_mv_g3

0xba4a,	// (0x00078191) main_cntbar_detail_pane_ParamLimits

0x35b6,	// (0x0006fcfd) main_notif_wgt_pane

0xec12,	// (0x0007b359) aid_tch_main_mp4_pane_g4

0xee1e,	// (0x0007b565) popup_slider_window_cp02

0xe6a0,	// (0x0007ade7) list_recal_day_event_pane

0xac8c,	// (0x000773d3) cntbar_detail_btn_pane_ParamLimits

0xac8c,	// (0x000773d3) cntbar_detail_btn_pane

0xaca5,	// (0x000773ec) cntbar_detail_btn_pane_cp01_ParamLimits

0xaca5,	// (0x000773ec) cntbar_detail_btn_pane_cp01

0xacce,	// (0x00077415) cntbar_detail_list_shct_pane_ParamLimits

0xacde,	// (0x00077425) cntbar_detail_pane_g1_ParamLimits

0xacde,	// (0x00077425) cntbar_detail_pane_g1

0xacee,	// (0x00077435) cntbar_detail_pane_t1_ParamLimits

0xacee,	// (0x00077435) cntbar_detail_pane_t1

0xad8f,	// (0x000774d6) cntbar_detail_list_event_pane_g3_ParamLimits

0xad8f,	// (0x000774d6) cntbar_detail_list_event_pane_g3

0xada7,	// (0x000774ee) cntbar_detail_list_event_pane_g4_ParamLimits

0xada7,	// (0x000774ee) cntbar_detail_list_event_pane_g4

0xadbf,	// (0x00077506) cntbar_detail_list_event_pane_g5_ParamLimits

0xadbf,	// (0x00077506) cntbar_detail_list_event_pane_g5

0xadd7,	// (0x0007751e) cntbar_detail_list_event_pane_g6_ParamLimits

0xadd7,	// (0x0007751e) cntbar_detail_list_event_pane_g6

0xae19,	// (0x00077560) cntbar_detail_list_event_pane_t3_ParamLimits

0xae19,	// (0x00077560) cntbar_detail_list_event_pane_t3

0xae2b,	// (0x00077572) popup_notif_wgt_window_ParamLimits

0xae2b,	// (0x00077572) popup_notif_wgt_window

0xae44,	// (0x0007758b) popup_submenu_window_cp01_ParamLimits

0xae44,	// (0x0007758b) popup_submenu_window_cp01

0xbe90,	// (0x000785d7) bg_popup_window_pane_cp10

0xe97d,	// (0x0007b0c4) listscroll_notif_wgt_pane

0xe98f,	// (0x0007b0d6) list_notif_wgt_window

0xe998,	// (0x0007b0df) scroll_pane_cp033

0xae56,	// (0x0007759d) list_notif_wgt_row_pane_ParamLimits

0xae56,	// (0x0007759d) list_notif_wgt_row_pane

0xe9a1,	// (0x0007b0e8) aid_size_list_notif_wgt_del

0xe9ae,	// (0x0007b0f5) list_notif_wgt_row_pane_g1

0xe9ba,	// (0x0007b101) list_notif_wgt_row_pane_g2

0xe9c9,	// (0x0007b110) list_notif_wgt_row_pane_g3

0x0002,

0xfdc0,	// (0x0007c507) list_notif_wgt_row_pane_g

0xe9d6,	// (0x0007b11d) list_notif_wgt_row_pane_t1

0xe9ec,	// (0x0007b133) list_notif_wgt_row_pane_t2

0xe9fe,	// (0x0007b145) list_notif_wgt_row_pane_t3

0x0002,

0xfdc7,	// (0x0007c50e) list_notif_wgt_row_pane_t

0xd139,	// (0x00079880) list_recal_day_event_pane_g1

0xea10,	// (0x0007b157) list_recal_day_event_pane_t1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp045

0xae66,	// (0x000775ad) cntbar_detail_btn_pane_t1

0x18b5,	// (0x0006dffc) main_callh_pane_ParamLimits

0x18b5,	// (0x0006dffc) main_callh_pane

0x35b6,	// (0x0006fcfd) main_coverflow0_pane

0x35b6,	// (0x0006fcfd) main_wgtman_pane

0xa31b,	// (0x00076a62) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa31b,	// (0x00076a62) main_fs_bigclock_unlock_btn_pane

0xa7be,	// (0x00076f05) bg_button_pane_cp16

0xa7ce,	// (0x00076f15) cell_tport_appsw_pane_g3

0xae74,	// (0x000775bb) cf0_flow_pane_ParamLimits

0xae74,	// (0x000775bb) cf0_flow_pane

0xea1f,	// (0x0007b166) listscroll_cf0_pane

0xea2a,	// (0x0007b171) main_cf0_pane_g1

0xae89,	// (0x000775d0) main_cf0_pane_t1_ParamLimits

0xae89,	// (0x000775d0) main_cf0_pane_t1

0xaea0,	// (0x000775e7) main_cf0_pane_t2_ParamLimits

0xaea0,	// (0x000775e7) main_cf0_pane_t2

0x0001,

0xfdd3,	// (0x0007c51a) main_cf0_pane_t_ParamLimits

0xfdd3,	// (0x0007c51a) main_cf0_pane_t

0xea3c,	// (0x0007b183) scroll_pane_cp11

0xaeb7,	// (0x000775fe) cf0_flow_pane_g1

0xaebf,	// (0x00077606) cf0_flow_pane_g2

0x0001,

0xfdd8,	// (0x0007c51f) cf0_flow_pane_g

0xaec7,	// (0x0007760e) cf0_flow_pane_t1

0x35b6,	// (0x0006fcfd) main_call6_pane

0x35b6,	// (0x0006fcfd) main_calllock_pane

0xaed5,	// (0x0007761c) call6_btn_grp_pane_ParamLimits

0xaed5,	// (0x0007761c) call6_btn_grp_pane

0xaeef,	// (0x00077636) call6_pane_g1_ParamLimits

0xaeef,	// (0x00077636) call6_pane_g1

0xaf05,	// (0x0007764c) popup_call6_1st_window_ParamLimits

0xaf05,	// (0x0007764c) popup_call6_1st_window

0xaf16,	// (0x0007765d) popup_call6_2nd_window_ParamLimits

0xaf16,	// (0x0007765d) popup_call6_2nd_window

0xaf27,	// (0x0007766e) cell_call6_btn_pane_ParamLimits

0xaf27,	// (0x0007766e) cell_call6_btn_pane

0xbe90,	// (0x000785d7) bg_popup_call2_in_pane_cp03

0xea47,	// (0x0007b18e) popup_call6_1st_window_g1

0xea4f,	// (0x0007b196) popup_call6_1st_window_g2

0xea57,	// (0x0007b19e) popup_call6_1st_window_g3

0x0002,

0xfddd,	// (0x0007c524) popup_call6_1st_window_g

0xea5f,	// (0x0007b1a6) popup_call6_1st_window_t1

0xea6e,	// (0x0007b1b5) popup_call6_1st_window_t2

0xea7c,	// (0x0007b1c3) popup_call6_1st_window_t3

0x0002,

0xfde4,	// (0x0007c52b) popup_call6_1st_window_t

0xbe90,	// (0x000785d7) bg_popup_call2_in_pane_cp04

0xea8a,	// (0x0007b1d1) popup_call6_2nd_window_g1

0xea92,	// (0x0007b1d9) popup_call6_2nd_window_g2

0xea9a,	// (0x0007b1e1) popup_call6_2nd_window_g3

0x0002,

0xfdeb,	// (0x0007c532) popup_call6_2nd_window_g

0xeaa2,	// (0x0007b1e9) popup_call6_2nd_window_t1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp15

0xeab1,	// (0x0007b1f8) cell_call6_btn_pane_g1

0xf076,	// (0x0007b7bd) cell_call6_btn_pane_t1

0xaf3b,	// (0x00077682) listscroll_wgtman_pane_ParamLimits

0xaf3b,	// (0x00077682) listscroll_wgtman_pane

0xaf5c,	// (0x000776a3) wgtman_btn_pane_ParamLimits

0xaf5c,	// (0x000776a3) wgtman_btn_pane

0xc724,	// (0x00078e6b) aid_scroll_copy1

0xeaba,	// (0x0007b201) list_wgtman_pane

0xaf9f,	// (0x000776e6) wgtman_btn_pane_g1_ParamLimits

0xaf9f,	// (0x000776e6) wgtman_btn_pane_g1

0xafcb,	// (0x00077712) wgtman_btn_pane_t1_ParamLimits

0xafcb,	// (0x00077712) wgtman_btn_pane_t1

0xeac4,	// (0x0007b20b) wgtman_btn_pane_t2_ParamLimits

0xeac4,	// (0x0007b20b) wgtman_btn_pane_t2

0x0001,

0xfdf2,	// (0x0007c539) wgtman_btn_pane_t_ParamLimits

0xfdf2,	// (0x0007c539) wgtman_btn_pane_t

0xb008,	// (0x0007774f) listrow_wgtman_pane_ParamLimits

0xb008,	// (0x0007774f) listrow_wgtman_pane

0xb01b,	// (0x00077762) listrow_wgtman_pane_g1

0xb028,	// (0x0007776f) listrow_wgtman_pane_g2

0x0001,

0xfdf7,	// (0x0007c53e) listrow_wgtman_pane_g

0x3496,	// (0x0006fbdd) listrow_wgtman_pane_t1

0x34ae,	// (0x0006fbf5) listrow_wgtman_pane_t2

0x0001,

0xfdfc,	// (0x0007c543) listrow_wgtman_pane_t

0x34d4,	// (0x0006fc1b) wait_bar_pane_cp09

0xeadb,	// (0x0007b222) main_calllock_btn_pane

0xeae5,	// (0x0007b22c) main_calllock_pane_g1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp17

0xeab1,	// (0x0007b1f8) main_calllock_btn_pane_g1

0xeaed,	// (0x0007b234) main_calllock_btn_pane_t1

0x35b6,	// (0x0006fcfd) main_dialer3_pane

0x35b6,	// (0x0006fcfd) main_fmrd2_pane

0xbed0,	// (0x00078617) main_fs_bigclock_unlock_btn_pane_g1

0xb04e,	// (0x00077795) main_fs_bigclock_unlock_btn_pane_t1

0xb05c,	// (0x000777a3) area_fmrd2_info_pane_ParamLimits

0xb05c,	// (0x000777a3) area_fmrd2_info_pane

0xb06d,	// (0x000777b4) area_fmrd2_visual_pane_ParamLimits

0xb06d,	// (0x000777b4) area_fmrd2_visual_pane

0xb07b,	// (0x000777c2) fmrd2_indi_pane_ParamLimits

0xb07b,	// (0x000777c2) fmrd2_indi_pane

0xb088,	// (0x000777cf) area_fmrd2_visual_pane_g1

0xb090,	// (0x000777d7) area_fmrd2_visual_pane_t1

0xb0a0,	// (0x000777e7) area_fmrd2_visual_pane_t2

0xb0b0,	// (0x000777f7) area_fmrd2_visual_pane_t3

0x0002,

0xfe06,	// (0x0007c54d) area_fmrd2_visual_pane_t

0xb0c0,	// (0x00077807) area_fmrd2_info_pane_g1

0xb0c8,	// (0x0007780f) area_fmrd2_info_pane_t1

0xb0d8,	// (0x0007781f) area_fmrd2_info_pane_t2

0xb0e8,	// (0x0007782f) area_fmrd2_info_pane_t3

0xb0f8,	// (0x0007783f) area_fmrd2_info_pane_t4

0x0003,

0xfe0d,	// (0x0007c554) area_fmrd2_info_pane_t

0xb106,	// (0x0007784d) fmrd2_indi_pane_t1

0xb116,	// (0x0007785d) fmrd2_indi_pane_t2

0xb126,	// (0x0007786d) fmrd2_indi_pane_t3

0x0002,

0xfe16,	// (0x0007c55d) fmrd2_indi_pane_t

0xdd4f,	// (0x0007a496) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdd4f,	// (0x0007a496) list_single_fs_bigclock_indicator_pane_g5

0xde00,	// (0x0007a547) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde00,	// (0x0007a547) list_single_fs_bigclock_indicator_pane_t5

0xa944,	// (0x0007708b) aid_cell_bcale_month_pane_ParamLimits

0xa944,	// (0x0007708b) aid_cell_bcale_month_pane

0xa962,	// (0x000770a9) bcale_month_pane_ParamLimits

0xa962,	// (0x000770a9) bcale_month_pane

0xa986,	// (0x000770cd) bcale_preview_pane_ParamLimits

0xa986,	// (0x000770cd) bcale_preview_pane

0xe8a7,	// (0x0007afee) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8c6,	// (0x0007b00d) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8c6,	// (0x0007b00d) list_single_fs_bigclock_pane_t2

0x0001,

0xfd91,	// (0x0007c4d8) list_single_fs_bigclock_pane_t_ParamLimits

0xfd91,	// (0x0007c4d8) list_single_fs_bigclock_pane_t

0xb046,	// (0x0007778d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe01,	// (0x0007c548) main_fs_bigclock_unlock_btn_pane_g

0xb136,	// (0x0007787d) aid_dia3_key_size_ParamLimits

0xb136,	// (0x0007787d) aid_dia3_key_size

0xb145,	// (0x0007788c) aid_dia3_listrow_size_ParamLimits

0xb145,	// (0x0007788c) aid_dia3_listrow_size

0xb15a,	// (0x000778a1) dia3_keypad_fun_pane_ParamLimits

0xb15a,	// (0x000778a1) dia3_keypad_fun_pane

0xb176,	// (0x000778bd) dia3_keypad_num_pane_ParamLimits

0xb176,	// (0x000778bd) dia3_keypad_num_pane

0xb191,	// (0x000778d8) dia3_listscroll_pane_ParamLimits

0xb191,	// (0x000778d8) dia3_listscroll_pane

0xb1a4,	// (0x000778eb) dia3_numentry_pane_ParamLimits

0xb1a4,	// (0x000778eb) dia3_numentry_pane

0xeafc,	// (0x0007b243) dia3_list_pane

0xeb07,	// (0x0007b24e) scroll_pane_cp12

0x35b6,	// (0x0006fcfd) bg_dia3_numentry_pane

0xb1bc,	// (0x00077903) dia3_numentry_pane_t1

0xb1cb,	// (0x00077912) cell_dia3_key_num_pane

0xb1d3,	// (0x0007791a) cell_dia3_key0_fun_pane_ParamLimits

0xb1d3,	// (0x0007791a) cell_dia3_key0_fun_pane

0xb1e7,	// (0x0007792e) cell_dia3_key1_fun_pane_ParamLimits

0xb1e7,	// (0x0007792e) cell_dia3_key1_fun_pane

0xb1ff,	// (0x00077946) dia3_listrow_pane

0xdaa2,	// (0x0007a1e9) bg_dia3_numentry_pane_g1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp21

0xeb12,	// (0x0007b259) cell_dia3_key_num_pane_t1

0xeb20,	// (0x0007b267) cell_dia3_key_num_pane_t2

0xeb2f,	// (0x0007b276) cell_dia3_key_num_pane_t3

0xeb3e,	// (0x0007b285) cell_dia3_key_num_pane_t4

0x0003,

0xfe1d,	// (0x0007c564) cell_dia3_key_num_pane_t

0x35b6,	// (0x0006fcfd) bg_button_pane_cp19

0xb211,	// (0x00077958) cell_dia3_key0_fun_pane_g1

0x35b6,	// (0x0006fcfd) bg_button_pane_cp20

0xb219,	// (0x00077960) cell_dia3_key1_fun_pane_g1

0xb221,	// (0x00077968) area_left_week_number_pane

0xb22d,	// (0x00077974) area_top_day_name_pane

0xb240,	// (0x00077987) frame_month_view_pane

0xeb4d,	// (0x0007b294) grid_month_view_pane

0xb253,	// (0x0007799a) cell_top_day_name_pane_ParamLimits

0xb253,	// (0x0007799a) cell_top_day_name_pane

0xb280,	// (0x000779c7) cell_area_left_week_number_pane_ParamLimits

0xb280,	// (0x000779c7) cell_area_left_week_number_pane

0xb294,	// (0x000779db) cell_month_view_pane_ParamLimits

0xb294,	// (0x000779db) cell_month_view_pane

0xeb5b,	// (0x0007b2a2) frm_month_g1

0xb2c1,	// (0x00077a08) frm_month_g2

0xb2d4,	// (0x00077a1b) frm_month_g3

0xb2e7,	// (0x00077a2e) frm_month_g4

0xb2fa,	// (0x00077a41) frm_month_g5

0xb30d,	// (0x00077a54) frm_month_g6

0xb320,	// (0x00077a67) frm_month_g7

0xeb68,	// (0x0007b2af) frm_month_g8

0xb333,	// (0x00077a7a) frm_month_g9

0xb343,	// (0x00077a8a) frm_month_g10

0xb353,	// (0x00077a9a) frm_month_g11

0xb363,	// (0x00077aaa) frm_month_g12

0xb375,	// (0x00077abc) frm_month_g13

0xb387,	// (0x00077ace) frm_month_g14

0xb39b,	// (0x00077ae2) frm_month_g15

0xb3af,	// (0x00077af6) frm_month_g16

0x000f,

0xfe26,	// (0x0007c56d) frm_month_g

0x018f,	// (0x0006c8d6) cell_top_day_name_pane_t1

0xb3c3,	// (0x00077b0a) cell_area_left_week_number_pane_g1

0xb3cf,	// (0x00077b16) cell_area_left_week_number_pane_t1

0xbbd0,	// (0x00078317) cell_month_view_pane_g1

0xb3e2,	// (0x00077b29) cell_month_view_pane_t1

0x35b6,	// (0x0006fcfd) main_fps_pane

0xe051,	// (0x0007a798) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe051,	// (0x0007a798) cmail_ddmenu_btn02_pane_cp1

0xe06d,	// (0x0007a7b4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe06d,	// (0x0007a7b4) cmail_ddmenu_btn02_pane_cp2

0xab58,	// (0x0007729f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xab58,	// (0x0007729f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd44,	// (0x0007c48b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd44,	// (0x0007c48b) cmail_ddmenu_btn02_pane_g

0xab76,	// (0x000772bd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xab76,	// (0x000772bd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd49,	// (0x0007c490) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd49,	// (0x0007c490) cmail_ddmenu_btn02_pane_t

0xb3f5,	// (0x00077b3c) fps_text_pane_ParamLimits

0xb3f5,	// (0x00077b3c) fps_text_pane

0xb40c,	// (0x00077b53) main_fps_pane_g1_ParamLimits

0xb40c,	// (0x00077b53) main_fps_pane_g1

0xb426,	// (0x00077b6d) wait_bar_pane_cp010_ParamLimits

0xb426,	// (0x00077b6d) wait_bar_pane_cp010

0xb437,	// (0x00077b7e) fps_text_pane_t1_ParamLimits

0xb437,	// (0x00077b7e) fps_text_pane_t1

0x0406,	// (0x0006cb4d) cam4_image_uncrop_pane_g1

0x040f,	// (0x0006cb56) cam4_image_uncrop_pane_g2

0x8615,	// (0x00074d5c) cam4_image_uncrop_pane_g3

0x861e,	// (0x00074d65) cam4_image_uncrop_pane_g4

0x0003,

0xf888,	// (0x0007bfcf) cam4_image_uncrop_pane_g

0xb1ff,	// (0x00077946) dia3_listrow_pane_ParamLimits

0x35b6,	// (0x0006fcfd) main_phob2_pane

0xa78f,	// (0x00076ed6) cell_tport_appsw_pane_cp02_ParamLimits

0xa78f,	// (0x00076ed6) cell_tport_appsw_pane_cp02

0xa7a3,	// (0x00076eea) cell_tport_appsw_pane_cp03_ParamLimits

0xa7a3,	// (0x00076eea) cell_tport_appsw_pane_cp03

0x35b6,	// (0x0006fcfd) phob2_contact_card_pane

0x35b6,	// (0x0006fcfd) phob2_listscroll_pane

0x021d,	// (0x0006c964) phob2_list_pane

0x0225,	// (0x0006c96c) scroll_pane_cp034

0xb44f,	// (0x00077b96) phob2_cc_data_pane_ParamLimits

0xb44f,	// (0x00077b96) phob2_cc_data_pane

0xb46e,	// (0x00077bb5) phob2_cc_listscroll_pane_ParamLimits

0xb46e,	// (0x00077bb5) phob2_cc_listscroll_pane

0xb008,	// (0x0007774f) list_double_large_graphic_phob2_pane_ParamLimits

0xb008,	// (0x0007774f) list_double_large_graphic_phob2_pane

0xb48c,	// (0x00077bd3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb48c,	// (0x00077bd3) list_double_large_graphic_phob2_pane_g1

0x34e6,	// (0x0006fc2d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x34e6,	// (0x0006fc2d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe47,	// (0x0007c58e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe47,	// (0x0007c58e) list_double_large_graphic_phob2_pane_g

0x34fe,	// (0x0006fc45) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x34fe,	// (0x0006fc45) list_double_large_graphic_phob2_pane_t1

0x3513,	// (0x0006fc5a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3513,	// (0x0006fc5a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe50,	// (0x0007c597) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe50,	// (0x0007c597) list_double_large_graphic_phob2_pane_t

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp024

0x027c,	// (0x0006c9c3) phob2_cc_button_pane

0xb4a7,	// (0x00077bee) phob2_cc_data_pane_g1_ParamLimits

0xb4a7,	// (0x00077bee) phob2_cc_data_pane_g1

0xb4be,	// (0x00077c05) phob2_cc_data_pane_g2_ParamLimits

0xb4be,	// (0x00077c05) phob2_cc_data_pane_g2

0x0001,

0xfe55,	// (0x0007c59c) phob2_cc_data_pane_g_ParamLimits

0xfe55,	// (0x0007c59c) phob2_cc_data_pane_g

0xb4d0,	// (0x00077c17) phob2_cc_data_pane_t1_ParamLimits

0xb4d0,	// (0x00077c17) phob2_cc_data_pane_t1

0xb4e8,	// (0x00077c2f) phob2_cc_data_pane_t2_ParamLimits

0xb4e8,	// (0x00077c2f) phob2_cc_data_pane_t2

0xb500,	// (0x00077c47) phob2_cc_data_pane_t3_ParamLimits

0xb500,	// (0x00077c47) phob2_cc_data_pane_t3

0x0002,

0xfe5a,	// (0x0007c5a1) phob2_cc_data_pane_t_ParamLimits

0xfe5a,	// (0x0007c5a1) phob2_cc_data_pane_t

0x02e1,	// (0x0006ca28) phob2_cc_list_pane_ParamLimits

0x02e1,	// (0x0006ca28) phob2_cc_list_pane

0xd1e2,	// (0x00079929) scroll_pane_cp035_ParamLimits

0xd1e2,	// (0x00079929) scroll_pane_cp035

0xba4a,	// (0x00078191) bg_button_pane_cp033

0x02ed,	// (0x0006ca34) phob2_cc_button_pane_g1

0x02f9,	// (0x0006ca40) phob2_cc_button_pane_t1

0x030e,	// (0x0006ca55) phob2_cc_button_pane_t2

0x0001,

0xfe61,	// (0x0007c5a8) phob2_cc_button_pane_t

0xb518,	// (0x00077c5f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb518,	// (0x00077c5f) list_double_large_graphic_phob2_cc_pane

0xb54a,	// (0x00077c91) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb54a,	// (0x00077c91) list_double_large_graphic_phob2_cc_pane_g1

0x3528,	// (0x0006fc6f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3528,	// (0x0006fc6f) list_double_large_graphic_phob2_cc_pane_g2

0xb556,	// (0x00077c9d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb556,	// (0x00077c9d) list_double_large_graphic_phob2_cc_pane_g3

0x3534,	// (0x0006fc7b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x3534,	// (0x0006fc7b) list_double_large_graphic_phob2_cc_pane_g4

0x3540,	// (0x0006fc87) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x3540,	// (0x0006fc87) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe66,	// (0x0007c5ad) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe66,	// (0x0007c5ad) list_double_large_graphic_phob2_cc_pane_g

0x354c,	// (0x0006fc93) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x354c,	// (0x0006fc93) list_double_large_graphic_phob2_cc_pane_t1

0x3575,	// (0x0006fcbc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x3575,	// (0x0006fcbc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe71,	// (0x0007c5b8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe71,	// (0x0007c5b8) list_double_large_graphic_phob2_cc_pane_t

0x03a5,	// (0x0006caec) list_highlight_pane_cp025_ParamLimits

0x03a5,	// (0x0006caec) list_highlight_pane_cp025

0xba4a,	// (0x00078191) bg_button_pane_cp033_ParamLimits

0x02ed,	// (0x0006ca34) phob2_cc_button_pane_g1_ParamLimits

0x02f9,	// (0x0006ca40) phob2_cc_button_pane_t1_ParamLimits

0x030e,	// (0x0006ca55) phob2_cc_button_pane_t2_ParamLimits

0xfe61,	// (0x0007c5a8) phob2_cc_button_pane_t_ParamLimits

0x37e1,	// (0x0006ff28) popup_wgtman_window

0xcff3,	// (0x0007973a) scroll_pane_cp038

0xaf81,	// (0x000776c8) wgtman_btn_pane_cp_01_ParamLimits

0xaf81,	// (0x000776c8) wgtman_btn_pane_cp_01

0x03b3,	// (0x0006cafa) wgtman_content_pane

0x03bc,	// (0x0006cb03) wgtman_heading_pane

0x35b6,	// (0x0006fcfd) bg_heading_pane_cp02

0x03c5,	// (0x0006cb0c) wgtman_heading_pane_g1

0x03cd,	// (0x0006cb14) wgtman_heading_pane_t1

0x03db,	// (0x0006cb22) scroll_pane_cp036

0x03e3,	// (0x0006cb2a) wgtman_list_pane

0x03eb,	// (0x0006cb32) wgtman_list_pane_t1_ParamLimits

0x03eb,	// (0x0006cb32) wgtman_list_pane_t1

0xeeaa,	// (0x0007b5f1) cam4_grid_pane

0x300a,	// (0x0006f751) bg_button_pane_cp015_ParamLimits

0x9344,	// (0x00075a8b) bg_button_pane_cp016_ParamLimits

0x9357,	// (0x00075a9e) bg_button_pane_cp017_ParamLimits

0x937b,	// (0x00075ac2) popup_vitu2_query_window_g3_ParamLimits

0x937b,	// (0x00075ac2) popup_vitu2_query_window_g3

0x93c9,	// (0x00075b10) popup_vitu2_query_window_t6_ParamLimits

0x93c9,	// (0x00075b10) popup_vitu2_query_window_t6

0x93f4,	// (0x00075b3b) popup_vitu2_query_window_t7_ParamLimits

0x93f4,	// (0x00075b3b) popup_vitu2_query_window_t7

0x0406,	// (0x0006cb4d) cam4_grid_pane_g1

0x040f,	// (0x0006cb56) cam4_grid_pane_g2

0x0418,	// (0x0006cb5f) cam4_grid_pane_g3

0x0421,	// (0x0006cb68) cam4_grid_pane_g4

0x0003,

0xfe76,	// (0x0007c5bd) cam4_grid_pane_g

0x4908,	// (0x0007104f) aid_placing_vt_slider_lsc_ParamLimits

0x4c05,	// (0x0007134c) vidtel_button_pane_ParamLimits

0x4c05,	// (0x0007134c) vidtel_button_pane

0x35b6,	// (0x0006fcfd) bg_button_pane_cp034

0x042c,	// (0x0006cb73) vidtel_button_pane_g1

0x0434,	// (0x0006cb7b) vidtel_button_pane_t1

0xd129,	// (0x00079870) aid_size_vtel_slider_touch

0xd1e2,	// (0x00079929) scroll_pane_cp039

0xa00f,	// (0x00076756) ncim_query_button_pane_cp01_ParamLimits

0xa02e,	// (0x00076775) ncimui_query_pane_g1_ParamLimits

0xba4a,	// (0x00078191) input_focus_pane_cp012_ParamLimits

0xdae8,	// (0x0007a22f) ncim_query_entry_pane_t1_ParamLimits

0xd1e2,	// (0x00079929) scroll_pane_cp039_ParamLimits

0xc7fb,	// (0x00078f42) navi_pane_bcale_mc_g1

0xc803,	// (0x00078f4a) navi_pane_bcale_mc_t1

0xe0a1,	// (0x0007a7e8) main_sp_fs_email_pane_g1

0xe0ad,	// (0x0007a7f4) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0007c3c0) main_sp_fs_email_pane_g

0xe532,	// (0x0007ac79) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe532,	// (0x0007ac79) list_single_cale_mrui_row_pane_g3

0x3444,	// (0x0006fb8b) list_single_recal_day_pane_g5_event_pane

0xe711,	// (0x0007ae58) list_single_recal_day_pane_g7

0x044a,	// (0x0006cb91) list_recal_day_event_pane_cp01

0x0453,	// (0x0006cb9a) list_recal_vselct_arw_lo_pane_cp01

0x045b,	// (0x0006cba2) list_recal_vselct_arw_up_pane_cp01

0x0463,	// (0x0006cbaa) list_recal_vselct_pane_cp01

0xd139,	// (0x00079880) list_recal_day_event_pane_cp01_g1

0xeb75,	// (0x0007b2bc) list_recal_day_event_pane_cp01_t1

0xe719,	// (0x0007ae60) list_single_recal_day_pane_t1_ParamLimits

0xe72b,	// (0x0007ae72) list_single_recal_day_pane_t2_ParamLimits

0xfd59,	// (0x0007c4a0) list_single_recal_day_pane_t_ParamLimits

0xbb63,	// (0x000782aa) bg_notes_pane_ParamLimits

0xbc28,	// (0x0007836f) list_notes_pane_ParamLimits

0x3f59,	// (0x000706a0) scroll_pane_cp06_ParamLimits

0xbc64,	// (0x000783ab) main_notes_pane_ParamLimits

0xba4a,	// (0x00078191) main_welc_pane

0xb57e,	// (0x00077cc5) main_welc_body_pane_ParamLimits

0xb57e,	// (0x00077cc5) main_welc_body_pane

0xb59b,	// (0x00077ce2) main_welc_opti_pane_ParamLimits

0xb59b,	// (0x00077ce2) main_welc_opti_pane

0xb60f,	// (0x00077d56) main_welc_pane_t1_ParamLimits

0xb60f,	// (0x00077d56) main_welc_pane_t1

0xb775,	// (0x00077ebc) main_welc_body_row_pane_ParamLimits

0xb775,	// (0x00077ebc) main_welc_body_row_pane

0x3dfb,	// (0x00070542) main_welc_opti_row_pane_ParamLimits

0x3dfb,	// (0x00070542) main_welc_opti_row_pane

0x0637,	// (0x0006cd7e) main_welc_opti_row_pane_g1

0xb78a,	// (0x00077ed1) main_welc_opti_row_pane_t1

0x064e,	// (0x0006cd95) main_welc_body_row_pane_t1

0xe987,	// (0x0007b0ce) popup_notif_wgt_heading_pane

0xe9a1,	// (0x0007b0e8) aid_size_list_notif_wgt_del_ParamLimits

0xe9ae,	// (0x0007b0f5) list_notif_wgt_row_pane_g1_ParamLimits

0xe9ba,	// (0x0007b101) list_notif_wgt_row_pane_g2_ParamLimits

0xe9c9,	// (0x0007b110) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc0,	// (0x0007c507) list_notif_wgt_row_pane_g_ParamLimits

0xe9d6,	// (0x0007b11d) list_notif_wgt_row_pane_t1_ParamLimits

0xe9ec,	// (0x0007b133) list_notif_wgt_row_pane_t2_ParamLimits

0xe9fe,	// (0x0007b145) list_notif_wgt_row_pane_t3_ParamLimits

0xfdc7,	// (0x0007c50e) list_notif_wgt_row_pane_t_ParamLimits

0xb01b,	// (0x00077762) listrow_wgtman_pane_g1_ParamLimits

0xb028,	// (0x0007776f) listrow_wgtman_pane_g2_ParamLimits

0xfdf7,	// (0x0007c53e) listrow_wgtman_pane_g_ParamLimits

0x3496,	// (0x0006fbdd) listrow_wgtman_pane_t1_ParamLimits

0x34ae,	// (0x0006fbf5) listrow_wgtman_pane_t2_ParamLimits

0xfdfc,	// (0x0007c543) listrow_wgtman_pane_t_ParamLimits

0x34d4,	// (0x0006fc1b) wait_bar_pane_cp09_ParamLimits

0x35b6,	// (0x0006fcfd) bg_popup_heading_pane_cp02

0x065d,	// (0x0006cda4) popup_notif_wgt_heading_pane_g1

0x0665,	// (0x0006cdac) popup_notif_wgt_heading_pane_t1

0x35b6,	// (0x0006fcfd) main_vids_pane

0x35b6,	// (0x0006fcfd) vids_listscroll_pane

0xb799,	// (0x00077ee0) scroll_pane_cp040

0x35b6,	// (0x0006fcfd) vids_list_pane

0xb7a4,	// (0x00077eeb) vids_list_double_pane_ParamLimits

0xb7a4,	// (0x00077eeb) vids_list_double_pane

0xb7b5,	// (0x00077efc) vids_list_double_pane_g1

0xb7be,	// (0x00077f05) vids_list_double_pane_t1

0xb7cd,	// (0x00077f14) vids_list_double_pane_t2

0x0001,

0xfe95,	// (0x0007c5dc) vids_list_double_pane_t

0xba4a,	// (0x00078191) main_ncimui_pane_ParamLimits

0x9e45,	// (0x0007658c) main_ncimui_pane_g1_ParamLimits

0x9e51,	// (0x00076598) main_ncimui_pane_g2_ParamLimits

0x9e51,	// (0x00076598) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0007c2c1) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0007c2c1) main_ncimui_pane_g

0xb5b6,	// (0x00077cfd) main_welc_pane_g1_ParamLimits

0xb5b6,	// (0x00077cfd) main_welc_pane_g1

0xb5cb,	// (0x00077d12) main_welc_pane_g2_ParamLimits

0xb5cb,	// (0x00077d12) main_welc_pane_g2

0x0003,

0xfe7f,	// (0x0007c5c6) main_welc_pane_g_ParamLimits

0xfe7f,	// (0x0007c5c6) main_welc_pane_g

0xbb63,	// (0x000782aa) listscroll_mce_pane_ParamLimits

0xc950,	// (0x00079097) wait_bar_pane_cp10

0x18a9,	// (0x0006dff0) main_cale_day_pane_ParamLimits

0x18a9,	// (0x0006dff0) main_cale_week_pane_ParamLimits

0xbb63,	// (0x000782aa) main_messa_pane_ParamLimits

0x7576,	// (0x00073cbd) main_clock2_btn_pane_ParamLimits

0x7576,	// (0x00073cbd) main_clock2_btn_pane

0x758a,	// (0x00073cd1) main_clock2_btn_pane_cp01_ParamLimits

0x758a,	// (0x00073cd1) main_clock2_btn_pane_cp01

0xe4be,	// (0x0007ac05) list_cale_mrui_pane_ParamLimits

0xea34,	// (0x0007b17b) main_cf0_pane_g2

0x0001,

0xfdce,	// (0x0007c515) main_cf0_pane_g

0xb221,	// (0x00077968) area_left_week_number_pane_ParamLimits

0xb22d,	// (0x00077974) area_top_day_name_pane_ParamLimits

0xb240,	// (0x00077987) frame_month_view_pane_ParamLimits

0xeb4d,	// (0x0007b294) grid_month_view_pane_ParamLimits

0xeb5b,	// (0x0007b2a2) frm_month_g1_ParamLimits

0xb2c1,	// (0x00077a08) frm_month_g2_ParamLimits

0xb2d4,	// (0x00077a1b) frm_month_g3_ParamLimits

0xb2e7,	// (0x00077a2e) frm_month_g4_ParamLimits

0xb2fa,	// (0x00077a41) frm_month_g5_ParamLimits

0xb30d,	// (0x00077a54) frm_month_g6_ParamLimits

0xb320,	// (0x00077a67) frm_month_g7_ParamLimits

0xeb68,	// (0x0007b2af) frm_month_g8_ParamLimits

0xb333,	// (0x00077a7a) frm_month_g9_ParamLimits

0xb343,	// (0x00077a8a) frm_month_g10_ParamLimits

0xb353,	// (0x00077a9a) frm_month_g11_ParamLimits

0xb363,	// (0x00077aaa) frm_month_g12_ParamLimits

0xb375,	// (0x00077abc) frm_month_g13_ParamLimits

0xb387,	// (0x00077ace) frm_month_g14_ParamLimits

0xb39b,	// (0x00077ae2) frm_month_g15_ParamLimits

0xb3af,	// (0x00077af6) frm_month_g16_ParamLimits

0xfe26,	// (0x0007c56d) frm_month_g_ParamLimits

0x018f,	// (0x0006c8d6) cell_top_day_name_pane_t1_ParamLimits

0xb3c3,	// (0x00077b0a) cell_area_left_week_number_pane_g1_ParamLimits

0xb3cf,	// (0x00077b16) cell_area_left_week_number_pane_t1_ParamLimits

0xbbd0,	// (0x00078317) cell_month_view_pane_g1_ParamLimits

0xb3e2,	// (0x00077b29) cell_month_view_pane_t1_ParamLimits

0xbb5b,	// (0x000782a2) main_clock2_btn_pane_g1

0x06bd,	// (0x0006ce04) main_clock2_btn_pane_t1

0xba4a,	// (0x00078191) listscroll_cmail_pane_ParamLimits

0xe0a1,	// (0x0007a7e8) main_sp_fs_email_pane_g1_ParamLimits

0xe0ad,	// (0x0007a7f4) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0007c3c0) main_sp_fs_email_pane_g_ParamLimits

0xe681,	// (0x0007adc8) list_recal_day_pane_ParamLimits

0xe692,	// (0x0007add9) mian_recal_day_pane_t1

0x3290,	// (0x0006f9d7) list_single_dyc_row_text_pane_t4_ParamLimits

0x3290,	// (0x0006f9d7) list_single_dyc_row_text_pane_t4

0x32d9,	// (0x0006fa20) list_single_dyc_row_text_pane_t5_ParamLimits

0x32d9,	// (0x0006fa20) list_single_dyc_row_text_pane_t5

0xe14f,	// (0x0007a896) list_single_dyc_row_text_pane_t6_ParamLimits

0xe14f,	// (0x0007a896) list_single_dyc_row_text_pane_t6

0x5689,	// (0x00071dd0) aid_mgn_list_cale_time_pane

0xba4a,	// (0x00078191) main_gallery2_pane_ParamLimits

0x75a0,	// (0x00073ce7) main_clock2_pane_cp01_t1

0x75ae,	// (0x00073cf5) main_clock2_pane_cp01_t3

0x0001,

0xf75f,	// (0x0007bea6) main_clock2_pane_cp01_t

0x42f5,	// (0x00070a3c) cale_week_scroll_pane_g16_ParamLimits

0x42f5,	// (0x00070a3c) cale_week_scroll_pane_g16

0xbe90,	// (0x000785d7) vorec_slider_pane

0x0434,	// (0x0006cb7b) vidtel_button_pane_t1_ParamLimits

0xabe4,	// (0x0007732b) main_fs_bigclock_clock_pane_g1_ParamLimits

0xabe4,	// (0x0007732b) main_fs_bigclock_clock_pane_g2_ParamLimits

0xabf5,	// (0x0007733c) main_fs_bigclock_clock_pane_g3_ParamLimits

0xabf5,	// (0x0007733c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd7c,	// (0x0007c4c3) main_fs_bigclock_clock_pane_g_ParamLimits

0xac08,	// (0x0007734f) main_fs_bigclock_clock_pane_t1_ParamLimits

0xac1e,	// (0x00077365) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd85,	// (0x0007c4cc) main_fs_bigclock_clock_pane_t_ParamLimits

0x6d70,	// (0x000734b7) main_mup3_lyrics_pane_ParamLimits

0x6d70,	// (0x000734b7) main_mup3_lyrics_pane

0xb803,	// (0x00077f4a) main_mup3_lyrics_pane_t1_ParamLimits

0xb803,	// (0x00077f4a) main_mup3_lyrics_pane_t1

0xebfc,	// (0x0007b343) aid_main_mp4_pane_t1_area

0xec06,	// (0x0007b34d) aid_main_mp4_pane_t2_area

0xecb2,	// (0x0007b3f9) main_mp4_pane_g7_ParamLimits

0xecb2,	// (0x0007b3f9) main_mp4_pane_g7

0xecbe,	// (0x0007b405) main_mp4_pane_g8_ParamLimits

0xecbe,	// (0x0007b405) main_mp4_pane_g8

0x83ba,	// (0x00074b01) aid_call6_pane_g1_size

0xb533,	// (0x00077c7a) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb533,	// (0x00077c7a) list_double_large_graphic_phob2_other_pane

0xc72c,	// (0x00078e73) list_double_large_graphic_phob2_other_pane_g1

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp026

0xba4a,	// (0x00078191) main_welc_pane_ParamLimits

0xa62c,	// (0x00076d73) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa62c,	// (0x00076d73) main_sp_fs_ctrlbar_pane_g3

0xa646,	// (0x00076d8d) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa646,	// (0x00076d8d) main_sp_fs_ctrlbar_pane_g4

0xa67a,	// (0x00076dc1) toolbar2_fixed_button_pane_cp01

0xa685,	// (0x00076dcc) toolbar2_fixed_button_pane_cp02

0xa692,	// (0x00076dd9) toolbar2_fixed_button_pane_cp03

0xb562,	// (0x00077ca9) list_welc_entry_pane_ParamLimits

0xb562,	// (0x00077ca9) list_welc_entry_pane

0xb5e0,	// (0x00077d27) main_welc_pane_g3_ParamLimits

0xb5e0,	// (0x00077d27) main_welc_pane_g3

0xb62d,	// (0x00077d74) main_welc_pane_t2_ParamLimits

0xb62d,	// (0x00077d74) main_welc_pane_t2

0xb647,	// (0x00077d8e) main_welc_pane_t3_ParamLimits

0xb647,	// (0x00077d8e) main_welc_pane_t3

0x0005,

0xfe88,	// (0x0007c5cf) main_welc_pane_t_ParamLimits

0xfe88,	// (0x0007c5cf) main_welc_pane_t

0xb6f9,	// (0x00077e40) welc_button_pane_ParamLimits

0xb6f9,	// (0x00077e40) welc_button_pane

0xb761,	// (0x00077ea8) welc_service_logo_pane_ParamLimits

0xb761,	// (0x00077ea8) welc_service_logo_pane

0xb81f,	// (0x00077f66) list_single_welc_entry_pane_ParamLimits

0xb81f,	// (0x00077f66) list_single_welc_entry_pane

0xb830,	// (0x00077f77) list_single_welc_entry_pane_g1

0xb838,	// (0x00077f7f) list_single_welc_entry_pane_t1

0xb846,	// (0x00077f8d) list_single_welc_entry_pane_t2

0x0001,

0xfe9a,	// (0x0007c5e1) list_single_welc_entry_pane_t

0x35b6,	// (0x0006fcfd) bg_button_pane_cp035

0x075c,	// (0x0006cea3) welc_button_pane_t1

0x076a,	// (0x0006ceb1) welc_service_logo_pane_g1

0x0773,	// (0x0006ceba) welc_service_logo_pane_g2

0x0001,

0xfe9f,	// (0x0007c5e6) welc_service_logo_pane_g

0x35b6,	// (0x0006fcfd) main_int_radio_pane

0xd986,	// (0x0007a0cd) list_single_fs_dyc_pane_g1

0x34f2,	// (0x0006fc39) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x34f2,	// (0x0006fc39) list_double_large_graphic_phob2_pane_g3

0xb499,	// (0x00077be0) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb499,	// (0x00077be0) list_double_large_graphic_phob2_pane_g4

0xb854,	// (0x00077f9b) main_int_radio1_pane_ParamLimits

0xb854,	// (0x00077f9b) main_int_radio1_pane

0x078e,	// (0x0006ced5) find_pane_cp02

0xb871,	// (0x00077fb8) input_focus_pane_cp12_ParamLimits

0xb871,	// (0x00077fb8) input_focus_pane_cp12

0xb881,	// (0x00077fc8) input_focus_pane_cp13_ParamLimits

0xb881,	// (0x00077fc8) input_focus_pane_cp13

0xb895,	// (0x00077fdc) input_focus_pane_cp14_ParamLimits

0xb895,	// (0x00077fdc) input_focus_pane_cp14

0x07d3,	// (0x0006cf1a) int_radio1_listscroll_pane

0xb8a9,	// (0x00077ff0) main_int_radio1_pane_g1_ParamLimits

0xb8a9,	// (0x00077ff0) main_int_radio1_pane_g1

0xb8c1,	// (0x00078008) main_int_radio1_pane_t1_ParamLimits

0xb8c1,	// (0x00078008) main_int_radio1_pane_t1

0xb8dc,	// (0x00078023) main_int_radio1_pane_t2_ParamLimits

0xb8dc,	// (0x00078023) main_int_radio1_pane_t2

0xb8f7,	// (0x0007803e) main_int_radio1_pane_t3_ParamLimits

0xb8f7,	// (0x0007803e) main_int_radio1_pane_t3

0xb912,	// (0x00078059) main_int_radio1_pane_t4_ParamLimits

0xb912,	// (0x00078059) main_int_radio1_pane_t4

0x0840,	// (0x0006cf87) main_int_radio1_pane_t5_ParamLimits

0x0840,	// (0x0006cf87) main_int_radio1_pane_t5

0xb924,	// (0x0007806b) main_int_radio1_pane_t6_ParamLimits

0xb924,	// (0x0007806b) main_int_radio1_pane_t6

0xb939,	// (0x00078080) main_int_radio1_pane_t7_ParamLimits

0xb939,	// (0x00078080) main_int_radio1_pane_t7

0xb94e,	// (0x00078095) main_int_radio1_pane_t8_ParamLimits

0xb94e,	// (0x00078095) main_int_radio1_pane_t8

0xb96d,	// (0x000780b4) main_int_radio1_pane_t9_ParamLimits

0xb96d,	// (0x000780b4) main_int_radio1_pane_t9

0xb97f,	// (0x000780c6) main_int_radio1_pane_t10_ParamLimits

0xb97f,	// (0x000780c6) main_int_radio1_pane_t10

0xb9a5,	// (0x000780ec) main_int_radio1_pane_t11_ParamLimits

0xb9a5,	// (0x000780ec) main_int_radio1_pane_t11

0xb9cb,	// (0x00078112) main_int_radio1_pane_t12_ParamLimits

0xb9cb,	// (0x00078112) main_int_radio1_pane_t12

0x000b,

0xfea4,	// (0x0007c5eb) main_int_radio1_pane_t_ParamLimits

0xfea4,	// (0x0007c5eb) main_int_radio1_pane_t

0x0915,	// (0x0006d05c) int_radio_list_pane

0x0225,	// (0x0006c96c) scroll_pane_cp037

0x091d,	// (0x0006d064) list_double_large_graphic_int_radio_pane_ParamLimits

0x091d,	// (0x0006d064) list_double_large_graphic_int_radio_pane

0x0936,	// (0x0006d07d) list_double_large_graphic_int_radio_pane_g1

0xeb83,	// (0x0007b2ca) list_double_large_graphic_int_radio_pane_t1

0xeb91,	// (0x0007b2d8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfebd,	// (0x0007c604) list_double_large_graphic_int_radio_pane_t

0x35b6,	// (0x0006fcfd) list_highlight_pane_cp027

0x047c,	// (0x0006cbc3) main_button_pane_4

0xb5f0,	// (0x00077d37) main_welc_pane_g4_ParamLimits

0xb5f0,	// (0x00077d37) main_welc_pane_g4

0xb65f,	// (0x00077da6) main_welc_pane_t4_ParamLimits

0xb65f,	// (0x00077da6) main_welc_pane_t4

0xb674,	// (0x00077dbb) main_welc_pane_t5_ParamLimits

0xb674,	// (0x00077dbb) main_welc_pane_t5

0xb6be,	// (0x00077e05) main_welc_pane_t6_ParamLimits

0xb6be,	// (0x00077e05) main_welc_pane_t6

0xb710,	// (0x00077e57) welc_button_pane_2_ParamLimits

0xb710,	// (0x00077e57) welc_button_pane_2

0xb72c,	// (0x00077e73) welc_button_pane_3_ParamLimits

0xb72c,	// (0x00077e73) welc_button_pane_3

0x047c,	// (0x0006cbc3) welc_button_pane_4

0xb74b,	// (0x00077e92) welc_button_pane_5_ParamLimits

0xb74b,	// (0x00077e92) welc_button_pane_5

0x65e6,	// (0x00072d2d) main_popup_welc_pane

0x093f,	// (0x0006d086) main_welc_sk_g3

0x0949,	// (0x0006d090) main_welc_sk_g4

0x0953,	// (0x0006d09a) main_welc_sk_t3

0x0963,	// (0x0006d0aa) main_welc_sk_t4

0x0973,	// (0x0006d0ba) popup_welc_pane_t4

0x0981,	// (0x0006d0c8) popup_welc_pane_t5

0x098f,	// (0x0006d0d6) popup_welc_pane_t6
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large

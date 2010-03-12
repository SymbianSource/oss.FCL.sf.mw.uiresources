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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00042a5a };

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
0x1526,	// (0x00043f80) Screen

0x1532,	// (0x00043f8c) application_window

0x156e,	// (0x00043fc8) area_bottom_pane_ParamLimits

0x156e,	// (0x00043fc8) area_bottom_pane

0x15a7,	// (0x00044001) area_top_pane_ParamLimits

0x15a7,	// (0x00044001) area_top_pane

0xa619,	// (0x0004d073) call_video_uplink_pane_ParamLimits

0xa619,	// (0x0004d073) call_video_uplink_pane

0x161c,	// (0x00044076) main_pane_ParamLimits

0x161c,	// (0x00044076) main_pane

0xe2ad,	// (0x00050d07) context_pane

0x45dc,	// (0x00047036) navi_pane

0x4604,	// (0x0004705e) popup_cale_events_window_ParamLimits

0x4604,	// (0x0004705e) popup_cale_events_window

0xe2c0,	// (0x00050d1a) popup_mup_playback_window

0x461c,	// (0x00047076) signal_pane

0xc3b8,	// (0x0004ee12) main_browser_pane

0xce8b,	// (0x0004f8e5) main_burst_pane

0x432e,	// (0x00046d88) main_calc_pane

0xce8b,	// (0x0004f8e5) main_cale_day_pane

0xc3b8,	// (0x0004ee12) main_cale_month_pane

0xce8b,	// (0x0004f8e5) main_cale_week_pane

0xce8b,	// (0x0004f8e5) main_call_pane

0xc08a,	// (0x0004eae4) main_call_poc_pane

0xce8b,	// (0x0004f8e5) main_camera_pane

0xce8b,	// (0x0004f8e5) main_chi_dic_pane

0xcd10,	// (0x0004f76a) main_clock_pane

0xc08a,	// (0x0004eae4) main_fmradio_pane

0xce8b,	// (0x0004f8e5) main_graph_messa_pane

0xc08a,	// (0x0004eae4) main_help_pane

0xc3b8,	// (0x0004ee12) main_im_pane

0xc2e5,	// (0x0004ed3f) main_image_pane_ParamLimits

0xc2e5,	// (0x0004ed3f) main_image_pane

0xc08a,	// (0x0004eae4) main_location2_pane

0xce8b,	// (0x0004f8e5) main_location_pane

0xc08a,	// (0x0004eae4) main_messa_pane

0xc08a,	// (0x0004eae4) main_mp2_pane

0xce8b,	// (0x0004f8e5) main_mp_pane

0xc08a,	// (0x0004eae4) main_msg_pane

0xc08a,	// (0x0004eae4) main_mup_eq_pane

0xc08a,	// (0x0004eae4) main_mup_pane

0xc3b8,	// (0x0004ee12) main_notes_pane

0xc08a,	// (0x0004eae4) main_pec_pane

0xc08a,	// (0x0004eae4) main_phob_pane

0xc08a,	// (0x0004eae4) main_pinb_pane

0xc08a,	// (0x0004eae4) main_postcard_pane

0xc08a,	// (0x0004eae4) main_qdial_pane

0xce8b,	// (0x0004f8e5) main_skin_pane

0xc08a,	// (0x0004eae4) main_smil2_pane

0xce8b,	// (0x0004f8e5) main_smil_pane

0xce8b,	// (0x0004f8e5) main_video_pane

0xce8b,	// (0x0004f8e5) main_video_tele_pane

0xc2e5,	// (0x0004ed3f) main_viewer_pane_ParamLimits

0xc2e5,	// (0x0004ed3f) main_viewer_pane

0xce8b,	// (0x0004f8e5) main_vorec_pane

0x4382,	// (0x00046ddc) popup_blid_sat_info_window_ParamLimits

0x4382,	// (0x00046ddc) popup_blid_sat_info_window

0x43da,	// (0x00046e34) popup_dyc_status_message_window_ParamLimits

0x43da,	// (0x00046e34) popup_dyc_status_message_window

0x43f4,	// (0x00046e4e) popup_grid_large_graphic_window_ParamLimits

0x43f4,	// (0x00046e4e) popup_grid_large_graphic_window

0x44b0,	// (0x00046f0a) popup_loc_request_window_ParamLimits

0x44b0,	// (0x00046f0a) popup_loc_request_window

0x45b4,	// (0x0004700e) popup_wml_address_window_ParamLimits

0x45b4,	// (0x0004700e) popup_wml_address_window

0x4168,	// (0x00046bc2) call_muted_g1

0x3e1d,	// (0x00046877) popup_call_audio_conf_window_ParamLimits

0x3e1d,	// (0x00046877) popup_call_audio_conf_window

0x417c,	// (0x00046bd6) popup_call_audio_first_window_ParamLimits

0x417c,	// (0x00046bd6) popup_call_audio_first_window

0x41f2,	// (0x00046c4c) popup_call_audio_in_window_ParamLimits

0x41f2,	// (0x00046c4c) popup_call_audio_in_window

0x422e,	// (0x00046c88) popup_call_audio_out_window_ParamLimits

0x422e,	// (0x00046c88) popup_call_audio_out_window

0x4268,	// (0x00046cc2) popup_call_audio_second_window_ParamLimits

0x4268,	// (0x00046cc2) popup_call_audio_second_window

0x42be,	// (0x00046d18) popup_call_audio_wait_window_ParamLimits

0x42be,	// (0x00046d18) popup_call_audio_wait_window

0x42f3,	// (0x00046d4d) popup_number_entry_window_ParamLimits

0x42f3,	// (0x00046d4d) popup_number_entry_window

0xbc77,	// (0x0004e6d1) bg_popup_call_pane_cp05_ParamLimits

0xbc77,	// (0x0004e6d1) bg_popup_call_pane_cp05

0xbc97,	// (0x0004e6f1) popup_number_entry_window_t1

0xbcaa,	// (0x0004e704) popup_number_entry_window_t2

0xbcbc,	// (0x0004e716) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00051b32) popup_number_entry_window_t

0xbcce,	// (0x0004e728) text_title_cp2

0xbce1,	// (0x0004e73b) bg_popup_call_pane_cp_ParamLimits

0xbce1,	// (0x0004e73b) bg_popup_call_pane_cp

0xbcef,	// (0x0004e749) call_thumbnail_pane

0xbcf7,	// (0x0004e751) popup_call_audio_in_window_g1_ParamLimits

0xbcf7,	// (0x0004e751) popup_call_audio_in_window_g1

0xbd03,	// (0x0004e75d) popup_call_audio_in_window_g2_ParamLimits

0xbd03,	// (0x0004e75d) popup_call_audio_in_window_g2

0xbd0f,	// (0x0004e769) popup_call_audio_in_window_g3_ParamLimits

0xbd0f,	// (0x0004e769) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00051b3b) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00051b3b) popup_call_audio_in_window_g

0xbd1b,	// (0x0004e775) popup_call_audio_in_window_t1_ParamLimits

0xbd1b,	// (0x0004e775) popup_call_audio_in_window_t1

0xbd37,	// (0x0004e791) popup_call_audio_in_window_t2_ParamLimits

0xbd37,	// (0x0004e791) popup_call_audio_in_window_t2

0xbd53,	// (0x0004e7ad) popup_call_audio_in_window_t3_ParamLimits

0xbd53,	// (0x0004e7ad) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00051b42) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00051b42) popup_call_audio_in_window_t

0xbce1,	// (0x0004e73b) bg_popup_call_pane_cp01_ParamLimits

0xbce1,	// (0x0004e73b) bg_popup_call_pane_cp01

0xbcef,	// (0x0004e749) call_thumbnail_pane_cp02

0xbd66,	// (0x0004e7c0) call_type_pane_cp022

0xbd6e,	// (0x0004e7c8) popup_call_audio_out_window_g1_ParamLimits

0xbd6e,	// (0x0004e7c8) popup_call_audio_out_window_g1

0xbd80,	// (0x0004e7da) popup_call_audio_out_window_g2_ParamLimits

0xbd80,	// (0x0004e7da) popup_call_audio_out_window_g2

0xbd8c,	// (0x0004e7e6) popup_call_audio_out_window_g3_ParamLimits

0xbd8c,	// (0x0004e7e6) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00051b49) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00051b49) popup_call_audio_out_window_g

0xbd9e,	// (0x0004e7f8) popup_call_audio_out_window_t1_ParamLimits

0xbd9e,	// (0x0004e7f8) popup_call_audio_out_window_t1

0xbdb6,	// (0x0004e810) popup_call_audio_out_window_t2_ParamLimits

0xbdb6,	// (0x0004e810) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00051b50) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00051b50) popup_call_audio_out_window_t

0xbdcb,	// (0x0004e825) bg_popup_call_pane_ParamLimits

0xbdcb,	// (0x0004e825) bg_popup_call_pane

0x17d2,	// (0x0004422c) call_thumbnail_pane_cp_ParamLimits

0x17d2,	// (0x0004422c) call_thumbnail_pane_cp

0xbe4f,	// (0x0004e8a9) call_type_pane_cp01_ParamLimits

0xbe4f,	// (0x0004e8a9) call_type_pane_cp01

0xbe93,	// (0x0004e8ed) popup_call_audio_first_window_g1_ParamLimits

0xbe93,	// (0x0004e8ed) popup_call_audio_first_window_g1

0xbedf,	// (0x0004e939) popup_call_audio_first_window_g2_ParamLimits

0xbedf,	// (0x0004e939) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00051b55) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00051b55) popup_call_audio_first_window_g

0xbf23,	// (0x0004e97d) popup_call_audio_first_window_t1_ParamLimits

0xbf23,	// (0x0004e97d) popup_call_audio_first_window_t1

0xbfcf,	// (0x0004ea29) popup_call_audio_first_window_t4_ParamLimits

0xbfcf,	// (0x0004ea29) popup_call_audio_first_window_t4

0xc05b,	// (0x0004eab5) popup_call_audio_first_window_t5_ParamLimits

0xc05b,	// (0x0004eab5) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00051b5a) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00051b5a) popup_call_audio_first_window_t

0xc08a,	// (0x0004eae4) bg_popup_call_pane_cp02

0xc094,	// (0x0004eaee) call_type_pane_cp023

0xc09c,	// (0x0004eaf6) popup_call_audio_wait_window_g1

0xc0a4,	// (0x0004eafe) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00051b61) popup_call_audio_wait_window_g

0xc0ac,	// (0x0004eb06) popup_call_audio_wait_window_t3

0xc0ba,	// (0x0004eb14) bg_popup_call_pane_cp03_ParamLimits

0xc0ba,	// (0x0004eb14) bg_popup_call_pane_cp03

0xc11a,	// (0x0004eb74) call_thumbnail_pane_cp011_ParamLimits

0xc11a,	// (0x0004eb74) call_thumbnail_pane_cp011

0xc126,	// (0x0004eb80) call_type_pane_cp034_ParamLimits

0xc126,	// (0x0004eb80) call_type_pane_cp034

0xc162,	// (0x0004ebbc) popup_call_audio_second_window_g1_ParamLimits

0xc162,	// (0x0004ebbc) popup_call_audio_second_window_g1

0xc19e,	// (0x0004ebf8) popup_call_audio_second_window_g2_ParamLimits

0xc19e,	// (0x0004ebf8) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00051b66) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00051b66) popup_call_audio_second_window_g

0xc1da,	// (0x0004ec34) popup_call_audio_second_window_t1_ParamLimits

0xc1da,	// (0x0004ec34) popup_call_audio_second_window_t1

0xc25b,	// (0x0004ecb5) popup_call_audio_second_window_t2_ParamLimits

0xc25b,	// (0x0004ecb5) popup_call_audio_second_window_t2

0xc291,	// (0x0004eceb) popup_call_audio_second_window_t3_ParamLimits

0xc291,	// (0x0004eceb) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00051b6b) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00051b6b) popup_call_audio_second_window_t

0xc08a,	// (0x0004eae4) bg_popup_call_pane_cp04

0xc2c7,	// (0x0004ed21) list_conf_pane

0xc2cf,	// (0x0004ed29) popup_call_audio_conf_window_t1

0xc2dd,	// (0x0004ed37) call_thumbnail_pane_g1

0xc2e5,	// (0x0004ed3f) bg_pinb_pane_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_pinb_pane

0xc2f3,	// (0x0004ed4d) find_pinb_pane

0xc2fc,	// (0x0004ed56) listscroll_pinb_pane_ParamLimits

0xc2fc,	// (0x0004ed56) listscroll_pinb_pane

0xc30b,	// (0x0004ed65) pinb_bg_pane_g1

0x17f6,	// (0x00044250) pinb_bg_pane_g2

0x1802,	// (0x0004425c) pinb_bg_pane_g3

0x180e,	// (0x00044268) pinb_bg_pane_g4

0x181a,	// (0x00044274) pinb_bg_pane_g5

0x1826,	// (0x00044280) pinb_bg_pane_g6

0x1831,	// (0x0004428b) pinb_bg_pane_g7

0x183c,	// (0x00044296) pinb_bg_pane_g8

0x1847,	// (0x000442a1) pinb_bg_pane_g9

0x1851,	// (0x000442ab) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00051b72) pinb_bg_pane_g

0x186e,	// (0x000442c8) grid_pinb_pane

0x1877,	// (0x000442d1) list_pinb_pane

0x1880,	// (0x000442da) scroll_pane_cp01_ParamLimits

0x1880,	// (0x000442da) scroll_pane_cp01

0xc315,	// (0x0004ed6f) find_pinb_pane_g1_ParamLimits

0xc315,	// (0x0004ed6f) find_pinb_pane_g1

0xc32d,	// (0x0004ed87) find_pinb_pane_t1

0xc33f,	// (0x0004ed99) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00051b8c) find_pinb_pane_t

0xc354,	// (0x0004edae) input_focus_pane_cp01_ParamLimits

0xc354,	// (0x0004edae) input_focus_pane_cp01

0x1892,	// (0x000442ec) cell_pinb_pane_ParamLimits

0x1892,	// (0x000442ec) cell_pinb_pane

0x18bb,	// (0x00044315) cell_pinb_pane_g1_ParamLimits

0x18bb,	// (0x00044315) cell_pinb_pane_g1

0x18cb,	// (0x00044325) cell_pinb_pane_g2_ParamLimits

0x18cb,	// (0x00044325) cell_pinb_pane_g2

0xc360,	// (0x0004edba) cell_pinb_pane_g3_ParamLimits

0xc360,	// (0x0004edba) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00051b91) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00051b91) cell_pinb_pane_g

0xc08a,	// (0x0004eae4) grid_highlight_pane_cp01

0x18d7,	// (0x00044331) list_pinb_item_pane_ParamLimits

0x18d7,	// (0x00044331) list_pinb_item_pane

0xc08a,	// (0x0004eae4) list_highlight_pane_cp02

0x18e9,	// (0x00044343) list_pinb_item_pane_g1_ParamLimits

0x18e9,	// (0x00044343) list_pinb_item_pane_g1

0x18f6,	// (0x00044350) list_pinb_item_pane_g2_ParamLimits

0x18f6,	// (0x00044350) list_pinb_item_pane_g2

0x1902,	// (0x0004435c) list_pinb_item_pane_g3_ParamLimits

0x1902,	// (0x0004435c) list_pinb_item_pane_g3

0x1913,	// (0x0004436d) list_pinb_item_pane_g4_ParamLimits

0x1913,	// (0x0004436d) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00051b98) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00051b98) list_pinb_item_pane_g

0x191f,	// (0x00044379) list_pinb_item_pane_t1_ParamLimits

0x191f,	// (0x00044379) list_pinb_item_pane_t1

0x1954,	// (0x000443ae) calc_display_pane

0x197c,	// (0x000443d6) calc_paper_pane

0x199f,	// (0x000443f9) grid_calc_pane

0xc08a,	// (0x0004eae4) bg_list_pane_cp01

0x19cd,	// (0x00044427) clock_g1

0x19d5,	// (0x0004442f) clock_g2

0x0001,

0xf147,	// (0x00051ba1) clock_g

0x19dd,	// (0x00044437) clock_t1_ParamLimits

0x19dd,	// (0x00044437) clock_t1

0x19f2,	// (0x0004444c) clock_t2_ParamLimits

0x19f2,	// (0x0004444c) clock_t2

0x1a04,	// (0x0004445e) clock_t3_ParamLimits

0x1a04,	// (0x0004445e) clock_t3

0x1a16,	// (0x00044470) clock_t4_ParamLimits

0x1a16,	// (0x00044470) clock_t4

0x1a28,	// (0x00044482) clock_t5_ParamLimits

0x1a28,	// (0x00044482) clock_t5

0x1a3d,	// (0x00044497) clock_t6_ParamLimits

0x1a3d,	// (0x00044497) clock_t6

0x1a4f,	// (0x000444a9) clock_t7_ParamLimits

0x1a4f,	// (0x000444a9) clock_t7

0x1a61,	// (0x000444bb) clock_t8_ParamLimits

0x1a61,	// (0x000444bb) clock_t8

0x1a75,	// (0x000444cf) clock_t9_ParamLimits

0x1a75,	// (0x000444cf) clock_t9

0x0008,

0xf14c,	// (0x00051ba6) clock_t_ParamLimits

0xf14c,	// (0x00051ba6) clock_t

0xc36c,	// (0x0004edc6) popup_clock_analogue_window_cp02

0xc36c,	// (0x0004edc6) popup_clock_digital_window_cp01

0xc374,	// (0x0004edce) listscroll_help_pane

0xc08a,	// (0x0004eae4) phob_pre_status_pane

0xc37e,	// (0x0004edd8) grid_qdial_pane

0xc08a,	// (0x0004eae4) listscroll_mce_pane

0xc388,	// (0x0004ede2) bg_notes_pane

0xc396,	// (0x0004edf0) list_notes_pane

0x1a89,	// (0x000444e3) scroll_pane_cp06

0xc3a4,	// (0x0004edfe) bg_calc_paper_pane

0xa63f,	// (0x0004d099) list_calc_pane

0xc3b8,	// (0x0004ee12) bg_calc_display_pane

0x1a9d,	// (0x000444f7) calc_display_pane_t1

0x1aaf,	// (0x00044509) calc_display_pane_t2

0xa659,	// (0x0004d0b3) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00051bb9) calc_display_pane_t

0x1ac1,	// (0x0004451b) cell_calc_pane_ParamLimits

0x1ac1,	// (0x0004451b) cell_calc_pane

0xc3c4,	// (0x0004ee1e) bg_calc_paper_pane_g1

0xc3d0,	// (0x0004ee2a) bg_calc_paper_pane_g2

0xc3dc,	// (0x0004ee36) bg_calc_paper_pane_g3

0xc3e8,	// (0x0004ee42) bg_calc_paper_pane_g4

0xc3f4,	// (0x0004ee4e) bg_calc_paper_pane_g5

0x1af6,	// (0x00044550) bg_calc_paper_pane_g6

0x1b05,	// (0x0004455f) bg_calc_paper_pane_g7

0x1b14,	// (0x0004456e) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00051bc0) bg_calc_paper_pane_g

0x1b27,	// (0x00044581) calc_bg_paper_pane_g9

0x1b3a,	// (0x00044594) list_calc_item_pane_ParamLimits

0x1b3a,	// (0x00044594) list_calc_item_pane

0xc400,	// (0x0004ee5a) list_calc_item_pane_g1

0xa66b,	// (0x0004d0c5) list_calc_item_pane_t1_ParamLimits

0xa66b,	// (0x0004d0c5) list_calc_item_pane_t1

0x1b52,	// (0x000445ac) list_calc_item_pane_t2_ParamLimits

0x1b52,	// (0x000445ac) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00051bd1) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00051bd1) list_calc_item_pane_t

0xc40d,	// (0x0004ee67) cell_calc_pane_g1

0xc417,	// (0x0004ee71) grid_highlight_pane_cp02

0x1b84,	// (0x000445de) bg_calc_display_pane_g1

0x1b8d,	// (0x000445e7) bg_calc_display_pane_g2

0x1b97,	// (0x000445f1) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00051bdb) bg_calc_display_pane_g

0x1ba0,	// (0x000445fa) cell_qdial_pane_ParamLimits

0x1ba0,	// (0x000445fa) cell_qdial_pane

0x1bb4,	// (0x0004460e) cell_qdial_pane_g1_ParamLimits

0x1bb4,	// (0x0004460e) cell_qdial_pane_g1

0x1bca,	// (0x00044624) cell_qdial_pane_g2_ParamLimits

0x1bca,	// (0x00044624) cell_qdial_pane_g2

0xc439,	// (0x0004ee93) cell_qdial_pane_g3_ParamLimits

0xc439,	// (0x0004ee93) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00051be2) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00051be2) cell_qdial_pane_g

0x1bf1,	// (0x0004464b) cell_qdial_pane_t1_ParamLimits

0x1bf1,	// (0x0004464b) cell_qdial_pane_t1

0x1c09,	// (0x00044663) cell_qdial_pane_t2_ParamLimits

0x1c09,	// (0x00044663) cell_qdial_pane_t2

0x1c1c,	// (0x00044676) cell_qdial_pane_t3_ParamLimits

0x1c1c,	// (0x00044676) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00051beb) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00051beb) cell_qdial_pane_t

0xc08a,	// (0x0004eae4) grid_highlight_pane_cp04

0xc445,	// (0x0004ee9f) thumbnail_qdial_pane_ParamLimits

0xc445,	// (0x0004ee9f) thumbnail_qdial_pane

0xc4a1,	// (0x0004eefb) list_help_pane

0xc4aa,	// (0x0004ef04) scroll_pane_cp02

0x1c2f,	// (0x00044689) help_list_pane_t1_ParamLimits

0x1c2f,	// (0x00044689) help_list_pane_t1

0xa67d,	// (0x0004d0d7) bg_notes_pane_g2

0xa685,	// (0x0004d0df) bg_notes_pane_g3

0xa68d,	// (0x0004d0e7) notes_bg_pane_g1

0xa695,	// (0x0004d0ef) notes_bg_pane_g4

0xa69d,	// (0x0004d0f7) notes_bg_pane_g5

0xa6a5,	// (0x0004d0ff) notes_bg_pane_g6

0xa6ad,	// (0x0004d107) notes_bg_pane_g7

0xa6b5,	// (0x0004d10f) notes_bg_pane_g8

0xa6bd,	// (0x0004d117) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00051c09) notes_bg_pane_g

0x1c4c,	// (0x000446a6) list_notes_text_pane_ParamLimits

0x1c4c,	// (0x000446a6) list_notes_text_pane

0xc4b3,	// (0x0004ef0d) list_notes_text_pane_g1

0x09ff,	// (0x00043459) list_notes_text_pane_t1

0xc3b8,	// (0x0004ee12) listscroll_cale_week_pane

0x1c7e,	// (0x000446d8) bg_cale_heading_pane

0xc4cd,	// (0x0004ef27) bg_cale_pane_cp01

0x1c92,	// (0x000446ec) cale_week_corner_pane

0x1ca8,	// (0x00044702) cale_week_day_heading_pane

0x1cbc,	// (0x00044716) cale_week_scroll_pane_g1

0x1ccd,	// (0x00044727) cale_week_scroll_pane_g2

0x1cde,	// (0x00044738) cale_week_scroll_pane_g3

0x1cef,	// (0x00044749) cale_week_scroll_pane_g4

0x1d00,	// (0x0004475a) cale_week_scroll_pane_g5

0x1d13,	// (0x0004476d) cale_week_scroll_pane_g6

0x1d26,	// (0x00044780) cale_week_scroll_pane_g7

0x1d39,	// (0x00044793) cale_week_scroll_pane_g8

0x1d4c,	// (0x000447a6) cale_week_scroll_pane_g9

0x1d5d,	// (0x000447b7) cale_week_scroll_pane_g10

0x1d6e,	// (0x000447c8) cale_week_scroll_pane_g11

0x1d7f,	// (0x000447d9) cale_week_scroll_pane_g12

0x1d90,	// (0x000447ea) cale_week_scroll_pane_g13

0x1da1,	// (0x000447fb) cale_week_scroll_pane_g14

0x1db2,	// (0x0004480c) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00051c18) cale_week_scroll_pane_g

0x1dc3,	// (0x0004481d) cale_week_time_pane

0x1dd6,	// (0x00044830) grid_cale_week_pane

0x1deb,	// (0x00044845) scroll_pane_cp08

0x1e05,	// (0x0004485f) cell_cale_week_pane_ParamLimits

0x1e05,	// (0x0004485f) cell_cale_week_pane

0x1e45,	// (0x0004489f) cale_week_day_heading_pane_t1

0x1e6f,	// (0x000448c9) cale_week_day_heading_pane_t2

0x1e99,	// (0x000448f3) cale_week_day_heading_pane_t3

0x1ec3,	// (0x0004491d) cale_week_day_heading_pane_t4

0x1eed,	// (0x00044947) cale_week_day_heading_pane_t5

0x1f17,	// (0x00044971) cale_week_day_heading_pane_t6

0x1f43,	// (0x0004499d) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00051c37) cale_week_day_heading_pane_t

0xc4f8,	// (0x0004ef52) bg_cale_side_pane

0x1f6d,	// (0x000449c7) cale_week_time_pane_t1

0x1f85,	// (0x000449df) cale_week_time_pane_t2

0x1f9d,	// (0x000449f7) cale_week_time_pane_t3

0x1fb5,	// (0x00044a0f) cale_week_time_pane_t4

0x1fcd,	// (0x00044a27) cale_week_time_pane_t5

0x1fe5,	// (0x00044a3f) cale_week_time_pane_t6

0x1ffd,	// (0x00044a57) cale_week_time_pane_t7

0x2015,	// (0x00044a6f) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00051c46) cale_week_time_pane_t

0x202d,	// (0x00044a87) cell_cale_week_pane_g2

0x2046,	// (0x00044aa0) cell_cale_week_pane_g3_ParamLimits

0x2046,	// (0x00044aa0) cell_cale_week_pane_g3

0xc506,	// (0x0004ef60) grid_highlight_pane_cp07

0xc50e,	// (0x0004ef68) listscroll_gms_pane

0xc518,	// (0x0004ef72) grid_gms_pane

0xc521,	// (0x0004ef7b) listscroll_gms_pane_g1

0xc529,	// (0x0004ef83) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00051c57) listscroll_gms_pane_g

0x205e,	// (0x00044ab8) scroll_pane_cp010

0x2069,	// (0x00044ac3) cell_gms_pane_ParamLimits

0x2069,	// (0x00044ac3) cell_gms_pane

0x207b,	// (0x00044ad5) cell_gms_pane_g1

0xc531,	// (0x0004ef8b) cell_gms_pane_g2

0xc539,	// (0x0004ef93) cell_gms_pane_g3

0xc542,	// (0x0004ef9c) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00051c5c) cell_gms_pane_g

0xc54b,	// (0x0004efa5) grid_highlight_pane_cp09

0x4112,	// (0x00046b6c) phob_pre_status_pane_g1

0x411a,	// (0x00046b74) phob_pre_status_pane_g2

0x4122,	// (0x00046b7c) phob_pre_status_pane_g3

0x412a,	// (0x00046b84) phob_pre_status_pane_g4

0x0004,

0xf583,	// (0x00051fdd) phob_pre_status_pane_g

0x413a,	// (0x00046b94) phob_pre_status_pane_t1

0x4148,	// (0x00046ba2) phob_pre_status_pane_t2

0x4158,	// (0x00046bb2) phob_pre_status_pane_t3

0x0002,

0xf58e,	// (0x00051fe8) phob_pre_status_pane_t

0xc08a,	// (0x0004eae4) bg_list_pane_cp05

0x208b,	// (0x00044ae5) grid_vorec_pane

0x2095,	// (0x00044aef) vorec_t1

0x20a3,	// (0x00044afd) vorec_t2

0x20b1,	// (0x00044b0b) vorec_t3

0x20bf,	// (0x00044b19) vorec_t4

0x20cd,	// (0x00044b27) vorec_t5

0xa6c5,	// (0x0004d11f) vorec_t6

0x0006,

0xf20b,	// (0x00051c65) vorec_t

0x20e9,	// (0x00044b43) wait_bar_pane_cp01

0x20f1,	// (0x00044b4b) cell_vorec_pane_ParamLimits

0x20f1,	// (0x00044b4b) cell_vorec_pane

0xc553,	// (0x0004efad) cell_vorec_pane_g1

0xc08a,	// (0x0004eae4) grid_highlight_pane_cp05

0x211c,	// (0x00044b76) cams_zoom_pane

0x212b,	// (0x00044b85) image_vga_pane

0x2145,	// (0x00044b9f) main_camera_pane_g1

0x2157,	// (0x00044bb1) main_camera_pane_g2

0x2167,	// (0x00044bc1) main_camera_pane_g3

0x2177,	// (0x00044bd1) main_camera_pane_g4

0x2187,	// (0x00044be1) main_camera_pane_g5

0x2197,	// (0x00044bf1) main_camera_pane_g6

0x21a9,	// (0x00044c03) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00051c74) main_camera_pane_g

0x21b9,	// (0x00044c13) main_camera_pane_t1

0x21cf,	// (0x00044c29) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00051c85) main_camera_pane_t

0x2209,	// (0x00044c63) cams_zoom_pane_cp_ParamLimits

0x2209,	// (0x00044c63) cams_zoom_pane_cp

0x2231,	// (0x00044c8b) image_cif_pane_ParamLimits

0x2231,	// (0x00044c8b) image_cif_pane

0x226c,	// (0x00044cc6) image_subqcif_pane

0x2274,	// (0x00044cce) main_video_pane_g1_ParamLimits

0x2274,	// (0x00044cce) main_video_pane_g1

0x2298,	// (0x00044cf2) main_video_pane_g2_ParamLimits

0x2298,	// (0x00044cf2) main_video_pane_g2

0x22cc,	// (0x00044d26) main_video_pane_g3_ParamLimits

0x22cc,	// (0x00044d26) main_video_pane_g3

0x22fa,	// (0x00044d54) main_video_pane_g4_ParamLimits

0x22fa,	// (0x00044d54) main_video_pane_g4

0x2328,	// (0x00044d82) main_video_pane_g5_ParamLimits

0x2328,	// (0x00044d82) main_video_pane_g5

0xc569,	// (0x0004efc3) main_video_pane_g6_ParamLimits

0xc569,	// (0x0004efc3) main_video_pane_g6

0x0006,

0xf230,	// (0x00051c8a) main_video_pane_g_ParamLimits

0xf230,	// (0x00051c8a) main_video_pane_g

0x2351,	// (0x00044dab) main_video_pane_t1_ParamLimits

0x2351,	// (0x00044dab) main_video_pane_t1

0xc583,	// (0x0004efdd) cams_zoom_pane_g1

0xc58c,	// (0x0004efe6) cams_zoom_pane_g2

0xc595,	// (0x0004efef) cams_zoom_pane_g3

0xc59e,	// (0x0004eff8) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00051c99) cams_zoom_pane_g

0x23ae,	// (0x00044e08) grid_cams_pane

0x23c8,	// (0x00044e22) linegrid_cams_pane

0x23dc,	// (0x00044e36) cell_cams_pane_ParamLimits

0x23dc,	// (0x00044e36) cell_cams_pane

0xc5a7,	// (0x0004f001) cams_burst_image_pane

0xc5af,	// (0x0004f009) cell_cams_pane_g1

0xc08a,	// (0x0004eae4) grid_highlight_pane_cp03

0xc40d,	// (0x0004ee67) mp_bg_pane_g1

0xc08a,	// (0x0004eae4) bg_list_pane_cp03

0xe1c4,	// (0x00050c1e) bg_mp_pane

0xe1cc,	// (0x00050c26) grid_mp_pane

0xe1d4,	// (0x00050c2e) media_player_g1

0xe1dc,	// (0x00050c36) media_player_t1

0xe1ea,	// (0x00050c44) media_player_t2

0xe1f8,	// (0x00050c52) media_player_t3

0xe206,	// (0x00050c60) media_player_t4

0xe214,	// (0x00050c6e) media_player_t5

0xe222,	// (0x00050c7c) media_player_t6

0xe230,	// (0x00050c8a) media_player_t7

0x0006,

0x0073,	// (0x00042acd) media_player_t

0xe23e,	// (0x00050c98) wait_bar_pane_cp02

0xf56f,	// (0x00051fc9) main_usb_pane_t

0x4109,	// (0x00046b63) cell_mp_pane

0xc40d,	// (0x0004ee67) cell_mp_pane_g1

0xc08a,	// (0x0004eae4) grid_highlight_pane_cp06

0xc5b7,	// (0x0004f011) grid_skin_colour_pane

0xc5bf,	// (0x0004f019) list_highlight_pane_cp03

0x23fc,	// (0x00044e56) skin_g1

0xc5c7,	// (0x0004f021) skin_t1

0xc5d6,	// (0x0004f030) skin_t2

0x0001,

0xf274,	// (0x00051cce) skin_t

0x2404,	// (0x00044e5e) cell_skin_colour_pane_ParamLimits

0x2404,	// (0x00044e5e) cell_skin_colour_pane

0xc5e4,	// (0x0004f03e) cell_skin_colour_pane_g1

0x247d,	// (0x00044ed7) call_video_g1_ParamLimits

0x247d,	// (0x00044ed7) call_video_g1

0x2499,	// (0x00044ef3) call_video_g2_ParamLimits

0x2499,	// (0x00044ef3) call_video_g2

0x0001,

0xf279,	// (0x00051cd3) call_video_g_ParamLimits

0xf279,	// (0x00051cd3) call_video_g

0x24eb,	// (0x00044f45) call_video_uplink_pane_cp1_ParamLimits

0x24eb,	// (0x00044f45) call_video_uplink_pane_cp1

0xc5f6,	// (0x0004f050) call_video_uplink_pane_cp2

0x258a,	// (0x00044fe4) video_down_crop_pane_ParamLimits

0x258a,	// (0x00044fe4) video_down_crop_pane

0x2681,	// (0x000450db) video_down_pane_ParamLimits

0x2681,	// (0x000450db) video_down_pane

0xc5fe,	// (0x0004f058) video_down_subqcif_pane_ParamLimits

0xc5fe,	// (0x0004f058) video_down_subqcif_pane

0xc616,	// (0x0004f070) video_down_subqcif_pane_cp_ParamLimits

0xc616,	// (0x0004f070) video_down_subqcif_pane_cp

0xc63c,	// (0x0004f096) im_reading_pane_ParamLimits

0xc63c,	// (0x0004f096) im_reading_pane

0x278f,	// (0x000451e9) im_writing_pane_ParamLimits

0x278f,	// (0x000451e9) im_writing_pane

0x27a5,	// (0x000451ff) im_reading_pane_t1

0xc656,	// (0x0004f0b0) list_im_pane

0xc667,	// (0x0004f0c1) scroll_pane_cp07

0x27de,	// (0x00045238) im_writing_pane_t1_ParamLimits

0x27de,	// (0x00045238) im_writing_pane_t1

0xc680,	// (0x0004f0da) im_writing_pane_t2_ParamLimits

0xc680,	// (0x0004f0da) im_writing_pane_t2

0x0001,

0xf283,	// (0x00051cdd) im_writing_pane_t_ParamLimits

0xf283,	// (0x00051cdd) im_writing_pane_t

0xc08a,	// (0x0004eae4) input_focus_pane_cp04

0xc08a,	// (0x0004eae4) input_focus_pane_cp05

0x27f3,	// (0x0004524d) list_im_single_pane_ParamLimits

0x27f3,	// (0x0004524d) list_im_single_pane

0x2807,	// (0x00045261) list_single_im_pane_t1

0x40c9,	// (0x00046b23) blid_accuracy_pane

0x40d1,	// (0x00046b2b) blid_compass_pane

0x40db,	// (0x00046b35) main_location_t1

0x40eb,	// (0x00046b45) main_location_t2

0x40fb,	// (0x00046b55) main_location_t3

0x0002,

0xf57c,	// (0x00051fd6) main_location_t

0xc08a,	// (0x0004eae4) aid_levels_location

0xc40d,	// (0x0004ee67) blid_accuracy_pane_g1

0xc40d,	// (0x0004ee67) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00051d3f) blid_accuracy_pane_g

0xc6c8,	// (0x0004f122) wml_content_pane

0xc706,	// (0x0004f160) wml_button_pane_ParamLimits

0xc706,	// (0x0004f160) wml_button_pane

0x2816,	// (0x00045270) wml_list_single_large_pane_ParamLimits

0x2816,	// (0x00045270) wml_list_single_large_pane

0x282b,	// (0x00045285) wml_list_single_medium_pane_ParamLimits

0x282b,	// (0x00045285) wml_list_single_medium_pane

0x2841,	// (0x0004529b) wml_list_single_small_pane_ParamLimits

0x2841,	// (0x0004529b) wml_list_single_small_pane

0xc71a,	// (0x0004f174) wml_selection_box_pane_ParamLimits

0xc71a,	// (0x0004f174) wml_selection_box_pane

0xc72d,	// (0x0004f187) wml_list_single_pane_t1

0xc73c,	// (0x0004f196) wml_list_single_medium_pane_t1

0xc74b,	// (0x0004f1a5) wml_list_single_large_pane_t1

0xc75a,	// (0x0004f1b4) input_focus_pane_cp02_ParamLimits

0xc75a,	// (0x0004f1b4) input_focus_pane_cp02

0xc76d,	// (0x0004f1c7) wml_selection_box_pane_g1

0xc776,	// (0x0004f1d0) wml_selection_box_pane_t1_ParamLimits

0xc776,	// (0x0004f1d0) wml_selection_box_pane_t1

0xc2e5,	// (0x0004ed3f) bg_wml_button_pane_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_wml_button_pane

0xc78e,	// (0x0004f1e8) wml_button_pane_g1

0xc796,	// (0x0004f1f0) wml_button_pane_t1

0xc78e,	// (0x0004f1e8) wml_button_bg_pane_g1

0xc7a6,	// (0x0004f200) wml_button_bg_pane_g2

0xc7ae,	// (0x0004f208) wml_button_bg_pane_g3

0xc7b6,	// (0x0004f210) wml_button_bg_pane_g4

0xc7be,	// (0x0004f218) wml_button_bg_pane_g5

0xc7c6,	// (0x0004f220) wml_button_bg_pane_g6

0xc7ce,	// (0x0004f228) wml_button_bg_pane_g7

0xc7d6,	// (0x0004f230) wml_button_bg_pane_g8

0xc7de,	// (0x0004f238) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00051ce2) wml_button_bg_pane_g

0x2859,	// (0x000452b3) bg_list_pane_cp02

0xc7e6,	// (0x0004f240) mce_header_pane_ParamLimits

0xc7e6,	// (0x0004f240) mce_header_pane

0xc7fc,	// (0x0004f256) mce_icon_pane

0xc7fc,	// (0x0004f256) mce_image_pane

0xc805,	// (0x0004f25f) mce_text_pane_ParamLimits

0xc805,	// (0x0004f25f) mce_text_pane

0x2861,	// (0x000452bb) scroll_pane_cp03

0xc6fe,	// (0x0004f158) scroll_pane_cp04

0xc818,	// (0x0004f272) scroll_pane_cp05_ParamLimits

0xc818,	// (0x0004f272) scroll_pane_cp05

0x286b,	// (0x000452c5) mce_header_field_pane_ParamLimits

0x286b,	// (0x000452c5) mce_header_field_pane

0x2882,	// (0x000452dc) mce_header_field_pane_2_ParamLimits

0x2882,	// (0x000452dc) mce_header_field_pane_2

0x2898,	// (0x000452f2) mce_header_field_pane_3

0x28a0,	// (0x000452fa) list_single_mce_message_pane_ParamLimits

0x28a0,	// (0x000452fa) list_single_mce_message_pane

0x28b5,	// (0x0004530f) list_single_mce_smart_pane_ParamLimits

0x28b5,	// (0x0004530f) list_single_mce_smart_pane

0xc824,	// (0x0004f27e) input_focus_pane_cp03

0xc82d,	// (0x0004f287) list_header_data_pane

0x28d5,	// (0x0004532f) mce_header_field_pane_t1

0x28e5,	// (0x0004533f) list_single_mce_header_pane_ParamLimits

0x28e5,	// (0x0004533f) list_single_mce_header_pane

0xc835,	// (0x0004f28f) list_single_mce_header_pane_t1

0xc844,	// (0x0004f29e) list_single_mce_message_pane_g1

0xc84c,	// (0x0004f2a6) list_single_mce_message_pane_t1

0x2917,	// (0x00045371) bg_cale_heading_pane_cp01_ParamLimits

0x2917,	// (0x00045371) bg_cale_heading_pane_cp01

0xc85a,	// (0x0004f2b4) bg_cale_pane_cp02_ParamLimits

0xc85a,	// (0x0004f2b4) bg_cale_pane_cp02

0x293a,	// (0x00045394) cale_month_corner_pane

0x2950,	// (0x000453aa) cale_month_day_heading_pane_ParamLimits

0x2950,	// (0x000453aa) cale_month_day_heading_pane

0x2983,	// (0x000453dd) cale_month_pane_g1_ParamLimits

0x2983,	// (0x000453dd) cale_month_pane_g1

0x299f,	// (0x000453f9) cale_month_pane_g2_ParamLimits

0x299f,	// (0x000453f9) cale_month_pane_g2

0x29ba,	// (0x00045414) cale_month_pane_g3_ParamLimits

0x29ba,	// (0x00045414) cale_month_pane_g3

0x29e6,	// (0x00045440) cale_month_pane_g4_ParamLimits

0x29e6,	// (0x00045440) cale_month_pane_g4

0x2a12,	// (0x0004546c) cale_month_pane_g5_ParamLimits

0x2a12,	// (0x0004546c) cale_month_pane_g5

0x2a46,	// (0x000454a0) cale_month_pane_g6_ParamLimits

0x2a46,	// (0x000454a0) cale_month_pane_g6

0x2a82,	// (0x000454dc) cale_month_pane_g7_ParamLimits

0x2a82,	// (0x000454dc) cale_month_pane_g7

0x2abe,	// (0x00045518) cale_month_pane_g8_ParamLimits

0x2abe,	// (0x00045518) cale_month_pane_g8

0x2afa,	// (0x00045554) cale_month_pane_g9_ParamLimits

0x2afa,	// (0x00045554) cale_month_pane_g9

0x2b34,	// (0x0004558e) cale_month_pane_g10_ParamLimits

0x2b34,	// (0x0004558e) cale_month_pane_g10

0x2b6e,	// (0x000455c8) cale_month_pane_g11_ParamLimits

0x2b6e,	// (0x000455c8) cale_month_pane_g11

0x2ba8,	// (0x00045602) cale_month_pane_g12_ParamLimits

0x2ba8,	// (0x00045602) cale_month_pane_g12

0x2be2,	// (0x0004563c) cale_month_pane_g13_ParamLimits

0x2be2,	// (0x0004563c) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00051cf5) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00051cf5) cale_month_pane_g

0x2c1c,	// (0x00045676) cale_month_week_pane

0x2c2f,	// (0x00045689) grid_cale_month_pane_ParamLimits

0x2c2f,	// (0x00045689) grid_cale_month_pane

0x2c5d,	// (0x000456b7) cale_month_day_heading_pane_t1

0x2cbb,	// (0x00045715) cale_month_day_heading_pane_t2

0x2d20,	// (0x0004577a) cale_month_day_heading_pane_t3

0x2d85,	// (0x000457df) cale_month_day_heading_pane_t4

0x2dea,	// (0x00045844) cale_month_day_heading_pane_t5

0x2e5f,	// (0x000458b9) cale_month_day_heading_pane_t6

0x2ed4,	// (0x0004592e) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00051d10) cale_month_day_heading_pane_t

0xc4f8,	// (0x0004ef52) bg_cale_side_pane_cp01

0x2f49,	// (0x000459a3) cale_month_week_pane_t1

0x2f60,	// (0x000459ba) cale_month_week_pane_t2

0x2f77,	// (0x000459d1) cale_month_week_pane_t3

0x2f8e,	// (0x000459e8) cale_month_week_pane_t4

0x2fa5,	// (0x000459ff) cale_month_week_pane_t5

0x2fbc,	// (0x00045a16) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00051d1f) cale_month_week_pane_t

0x2fd3,	// (0x00045a2d) cell_cale_month_pane_ParamLimits

0x2fd3,	// (0x00045a2d) cell_cale_month_pane

0xa79d,	// (0x0004d1f7) cell_cale_month_pane_g1

0x30a9,	// (0x00045b03) cell_cale_month_pane_t1_ParamLimits

0x30a9,	// (0x00045b03) cell_cale_month_pane_t1

0xc506,	// (0x0004ef60) grid_highlight_pane_cp08

0xc40d,	// (0x0004ee67) main_smil_g1

0x30c5,	// (0x00045b1f) smil_status_pane

0xc88f,	// (0x0004f2e9) smil_text_pane

0xe0e4,	// (0x00050b3e) bg_popup_call3_rect_pane_g8

0xe0ec,	// (0x00050b46) bg_popup_call3_rect_pane_g9

0x0008,

0x0016,	// (0x00042a70) bg_popup_call3_rect_pane_g

0xe327,	// (0x00050d81) smil_status_volume_pane_g1

0xc899,	// (0x0004f2f3) smil_status_pane_t1

0xa953,	// (0x0004d3ad) volume_smil_pane

0xc8b0,	// (0x0004f30a) list_smil_text_pane

0x30d8,	// (0x00045b32) scroll_pane_cp011

0x30e3,	// (0x00045b3d) smil_text_list_pane_t1_ParamLimits

0x30e3,	// (0x00045b3d) smil_text_list_pane_t1

0xa7a9,	// (0x0004d203) aid_volume_smil_ParamLimits

0xa7a9,	// (0x0004d203) aid_volume_smil

0xc40d,	// (0x0004ee67) smil_volume_pane_g1

0xc40d,	// (0x0004ee67) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00051d3f) smil_volume_pane_g

0xc3b8,	// (0x0004ee12) listscroll_cale_day_pane

0xc8ba,	// (0x0004f314) bg_cale_pane

0xc8d2,	// (0x0004f32c) list_cale_pane

0xc8e3,	// (0x0004f33d) scroll_pane_cp09

0xc8f4,	// (0x0004f34e) cale_bg_pane_g1

0xc8fc,	// (0x0004f356) cale_bg_pane_g2

0xc904,	// (0x0004f35e) cale_bg_pane_g3

0xc90c,	// (0x0004f366) cale_bg_pane_g4

0xc914,	// (0x0004f36e) cale_bg_pane_g5

0xc91c,	// (0x0004f376) cale_bg_pane_g6

0xc924,	// (0x0004f37e) cale_bg_pane_g7

0xc92c,	// (0x0004f386) cale_bg_pane_g8

0xc934,	// (0x0004f38e) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00051d44) cale_bg_pane_g

0x3129,	// (0x00045b83) list_cale_time_pane_ParamLimits

0x3129,	// (0x00045b83) list_cale_time_pane

0xc93c,	// (0x0004f396) list_cale_time_pane_g1_ParamLimits

0xc93c,	// (0x0004f396) list_cale_time_pane_g1

0xc948,	// (0x0004f3a2) list_cale_time_pane_g2_ParamLimits

0xc948,	// (0x0004f3a2) list_cale_time_pane_g2

0x313c,	// (0x00045b96) list_cale_time_pane_g3_ParamLimits

0x313c,	// (0x00045b96) list_cale_time_pane_g3

0x314a,	// (0x00045ba4) list_cale_time_pane_g4_ParamLimits

0x314a,	// (0x00045ba4) list_cale_time_pane_g4

0x3158,	// (0x00045bb2) list_cale_time_pane_g5_ParamLimits

0x3158,	// (0x00045bb2) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00051d57) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00051d57) list_cale_time_pane_g

0xc962,	// (0x0004f3bc) list_cale_time_pane_t1_ParamLimits

0xc962,	// (0x0004f3bc) list_cale_time_pane_t1

0xc98a,	// (0x0004f3e4) list_cale_time_pane_t2_ParamLimits

0xc98a,	// (0x0004f3e4) list_cale_time_pane_t2

0x33fa,	// (0x00045e54) aid_blid_cardinal_pane

0x3438,	// (0x00045e92) compass_pane_t4

0xc9b2,	// (0x0004f40c) list_cale_time_pane_t4_ParamLimits

0xc9b2,	// (0x0004f40c) list_cale_time_pane_t4

0x3446,	// (0x00045ea0) compass_pane_t5

0x3454,	// (0x00045eae) compass_pane_t6

0x3462,	// (0x00045ebc) compass_pane_t7

0xcddd,	// (0x0004f837) navi_pane_cc_t1

0xcf40,	// (0x0004f99a) aid_phob_thumbnail_center_pane

0x3ae1,	// (0x0004653b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00051d64) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00051d64) list_cale_time_pane_t

0xbce1,	// (0x0004e73b) bg_popup_window_pane_cp02_ParamLimits

0xbce1,	// (0x0004e73b) bg_popup_window_pane_cp02

0xc9da,	// (0x0004f434) heading_pane_cp01_ParamLimits

0xc9da,	// (0x0004f434) heading_pane_cp01

0xc9e6,	// (0x0004f440) loc_req_pane_ParamLimits

0xc9e6,	// (0x0004f440) loc_req_pane

0xc9f6,	// (0x0004f450) loc_type_pane_ParamLimits

0xc9f6,	// (0x0004f450) loc_type_pane

0xca08,	// (0x0004f462) loc_type_pane_t1_ParamLimits

0xca08,	// (0x0004f462) loc_type_pane_t1

0xca1a,	// (0x0004f474) loc_type_pane_t2_ParamLimits

0xca1a,	// (0x0004f474) loc_type_pane_t2

0xca2c,	// (0x0004f486) loc_type_pane_t3_ParamLimits

0xca2c,	// (0x0004f486) loc_type_pane_t3

0x0002,

0xf311,	// (0x00051d6b) loc_type_pane_t_ParamLimits

0xf311,	// (0x00051d6b) loc_type_pane_t

0xca3e,	// (0x0004f498) list_loc_req_pane

0xca48,	// (0x0004f4a2) scroll_pane_cp012

0x3166,	// (0x00045bc0) list_single_loc_request_popup_menu_pane_ParamLimits

0x3166,	// (0x00045bc0) list_single_loc_request_popup_menu_pane

0xca53,	// (0x0004f4ad) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xca53,	// (0x0004f4ad) list_single_loc_request_popup_menu_pane_g1

0xca5f,	// (0x0004f4b9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xca5f,	// (0x0004f4b9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00051d72) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00051d72) list_single_loc_request_popup_menu_pane_g

0xca6b,	// (0x0004f4c5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xca6b,	// (0x0004f4c5) list_single_loc_request_popup_menu_pane_t1

0xc2e5,	// (0x0004ed3f) bg_popup_window_pane_cp03_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_popup_window_pane_cp03

0xdceb,	// (0x00050745) heading_loc_req_pane_ParamLimits

0xdceb,	// (0x00050745) heading_loc_req_pane

0x3173,	// (0x00045bcd) popup_dyc_status_message_window_g1_ParamLimits

0x3173,	// (0x00045bcd) popup_dyc_status_message_window_g1

0x3187,	// (0x00045be1) popup_dyc_status_message_window_t1_ParamLimits

0x3187,	// (0x00045be1) popup_dyc_status_message_window_t1

0x319c,	// (0x00045bf6) popup_dyc_status_message_window_t2_ParamLimits

0x319c,	// (0x00045bf6) popup_dyc_status_message_window_t2

0x31b1,	// (0x00045c0b) popup_dyc_status_message_window_t3_ParamLimits

0x31b1,	// (0x00045c0b) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00051d77) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00051d77) popup_dyc_status_message_window_t

0xc08a,	// (0x0004eae4) bg_heading_pane_cp01

0xca81,	// (0x0004f4db) heading_loc_req_pane_g1

0xca89,	// (0x0004f4e3) heading_loc_req_pane_g2

0xca91,	// (0x0004f4eb) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00051d7e) heading_loc_req_pane_g

0xca99,	// (0x0004f4f3) heading_loc_req_pane_t1

0xcaa8,	// (0x0004f502) bg_popup_sub_pane_cp01_ParamLimits

0xcaa8,	// (0x0004f502) bg_popup_sub_pane_cp01

0xcab6,	// (0x0004f510) popup_cale_events_window_g1_ParamLimits

0xcab6,	// (0x0004f510) popup_cale_events_window_g1

0xcad6,	// (0x0004f530) popup_cale_events_window_g2_ParamLimits

0xcad6,	// (0x0004f530) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00051db2) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00051db2) popup_cale_events_window_g

0xcaf6,	// (0x0004f550) popup_cale_events_window_t1_ParamLimits

0xcaf6,	// (0x0004f550) popup_cale_events_window_t1

0xcb08,	// (0x0004f562) popup_cale_events_window_t2_ParamLimits

0xcb08,	// (0x0004f562) popup_cale_events_window_t2

0xcb46,	// (0x0004f5a0) popup_cale_events_window_t3_ParamLimits

0xcb46,	// (0x0004f5a0) popup_cale_events_window_t3

0xcb80,	// (0x0004f5da) popup_cale_events_window_t4_ParamLimits

0xcb80,	// (0x0004f5da) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00051db7) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00051db7) popup_cale_events_window_t

0x31e5,	// (0x00045c3f) call_type_pane

0x31f5,	// (0x00045c4f) popup_call_status_window_g1

0x3209,	// (0x00045c63) popup_call_status_window_g2

0x321d,	// (0x00045c77) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00051dc0) popup_call_status_window_g

0xcbb6,	// (0x0004f610) call_type_pane_g1

0xcbbf,	// (0x0004f619) call_type_pane_g2

0x0001,

0xf36d,	// (0x00051dc7) call_type_pane_g

0xc08a,	// (0x0004eae4) bg_popup_sub_pane_cp02

0xcbc8,	// (0x0004f622) listscroll_popup_wml_pane

0xcbd0,	// (0x0004f62a) list_wml_pane

0xcbda,	// (0x0004f634) scroll_pane_cp013

0xcbe5,	// (0x0004f63f) list_single_graphic_popup_wml_pane_ParamLimits

0xcbe5,	// (0x0004f63f) list_single_graphic_popup_wml_pane

0xc40d,	// (0x0004ee67) list_single_graphic_popup_wml_pane_g1

0xcbf9,	// (0x0004f653) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00051dcc) list_single_graphic_popup_wml_pane_g

0xcc01,	// (0x0004f65b) list_single_graphic_popup_wml_pane_t1

0xcc17,	// (0x0004f671) aid_call_pane

0xc2dd,	// (0x0004ed37) popup_clock_analogue_window_g1

0xc2dd,	// (0x0004ed37) popup_clock_analogue_window_g2

0xa840,	// (0x0004d29a) popup_clock_analogue_window_g3

0xa840,	// (0x0004d29a) popup_clock_analogue_window_g4

0xc40d,	// (0x0004ee67) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00051dd1) popup_clock_analogue_window_g

0xa848,	// (0x0004d2a2) popup_clock_analogue_window_t1

0xa856,	// (0x0004d2b0) clock_digital_number_pane_ParamLimits

0xa856,	// (0x0004d2b0) clock_digital_number_pane

0xa862,	// (0x0004d2bc) clock_digital_number_pane_cp02_ParamLimits

0xa862,	// (0x0004d2bc) clock_digital_number_pane_cp02

0xa86e,	// (0x0004d2c8) clock_digital_number_pane_cp03_ParamLimits

0xa86e,	// (0x0004d2c8) clock_digital_number_pane_cp03

0xa87a,	// (0x0004d2d4) clock_digital_number_pane_cp04_ParamLimits

0xa87a,	// (0x0004d2d4) clock_digital_number_pane_cp04

0xa88a,	// (0x0004d2e4) clock_digital_separator_pane_ParamLimits

0xa88a,	// (0x0004d2e4) clock_digital_separator_pane

0xa896,	// (0x0004d2f0) popup_clock_digital_window_t1

0xc40d,	// (0x0004ee67) clock_digital_number_pane_g1

0xc40d,	// (0x0004ee67) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00051d3f) clock_digital_number_pane_g

0xc40d,	// (0x0004ee67) clock_digital_separator_pane_g1

0xc40d,	// (0x0004ee67) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00051d3f) clock_digital_separator_pane_g

0xc08a,	// (0x0004eae4) bg_popup_window_pane_cp04

0xcc1f,	// (0x0004f679) heading_pane_cp03

0xcc27,	// (0x0004f681) listscroll_popup_gms_pane

0xcc2f,	// (0x0004f689) grid_large_graphic_popup_pane

0xcc39,	// (0x0004f693) listscroll_popup_gms_pane_g1

0xcc41,	// (0x0004f69b) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00051ddc) listscroll_popup_gms_pane_g

0xc6fe,	// (0x0004f158) scroll_pane_cp014

0x322c,	// (0x00045c86) cell_large_graphic_popup_pane_ParamLimits

0x322c,	// (0x00045c86) cell_large_graphic_popup_pane

0x3244,	// (0x00045c9e) cell_large_graphic_popup_pane_g1_ParamLimits

0x3244,	// (0x00045c9e) cell_large_graphic_popup_pane_g1

0xcc49,	// (0x0004f6a3) cell_large_graphic_popup_pane_g2_ParamLimits

0xcc49,	// (0x0004f6a3) cell_large_graphic_popup_pane_g2

0xcc55,	// (0x0004f6af) cell_large_graphic_popup_pane_g3_ParamLimits

0xcc55,	// (0x0004f6af) cell_large_graphic_popup_pane_g3

0xcc62,	// (0x0004f6bc) cell_large_graphic_popup_pane_g4_ParamLimits

0xcc62,	// (0x0004f6bc) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00051de1) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00051de1) cell_large_graphic_popup_pane_g

0xcc72,	// (0x0004f6cc) grid_highlight_pane_cp010

0xc40d,	// (0x0004ee67) bg_popup_call_pane_g1

0xcc7c,	// (0x0004f6d6) list_single_graphic_popup_conf_pane_ParamLimits

0xcc7c,	// (0x0004f6d6) list_single_graphic_popup_conf_pane

0xcc8f,	// (0x0004f6e9) list_highlight_pane_cp01

0xcc98,	// (0x0004f6f2) list_single_graphic_popup_conf_pane_g1

0xcca0,	// (0x0004f6fa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00051dea) list_single_graphic_popup_conf_pane_g

0xcca8,	// (0x0004f702) list_single_graphic_popup_conf_pane_t1

0xccb6,	// (0x0004f710) linegrid_cams_pane_g1

0x3250,	// (0x00045caa) linegrid_cams_pane_g2

0xc539,	// (0x0004ef93) linegrid_cams_pane_g3

0xccbf,	// (0x0004f719) linegrid_cams_pane_g4

0x3259,	// (0x00045cb3) linegrid_cams_pane_g5

0x3262,	// (0x00045cbc) linegrid_cams_pane_g6

0xc542,	// (0x0004ef9c) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00051def) linegrid_cams_pane_g

0xccc8,	// (0x0004f722) popup_clock_analogue_window

0xccc8,	// (0x0004f722) popup_clock_digital_window

0xc08a,	// (0x0004eae4) popup_phob_thumbnail_window

0xc40d,	// (0x0004ee67) call_video_uplink_pane_g1

0xccd1,	// (0x0004f72b) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00051dfe) call_video_uplink_pane_g

0xccd9,	// (0x0004f733) video_uplink_pane

0xcce1,	// (0x0004f73b) mce_image_pane_g1

0x326d,	// (0x00045cc7) mce_image_pane_g2

0x3277,	// (0x00045cd1) mce_image_pane_g3

0x327f,	// (0x00045cd9) mce_image_pane_g4

0x3287,	// (0x00045ce1) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00051e03) mce_image_pane_g

0xcceb,	// (0x0004f745) control_top_pane_stacon_cp01_ParamLimits

0xcceb,	// (0x0004f745) control_top_pane_stacon_cp01

0xccff,	// (0x0004f759) uni_indicator_pane_stacon_cp01_ParamLimits

0xccff,	// (0x0004f759) uni_indicator_pane_stacon_cp01

0xcd10,	// (0x0004f76a) bg_popup_sub_pane_cp03

0x328f,	// (0x00045ce9) chi_dic_find_pane

0x3297,	// (0x00045cf1) listscroll_chi_dic_pane

0x32a0,	// (0x00045cfa) main_pane_chidic_g1

0xcd1a,	// (0x0004f774) chi_dic_find_pane_t1

0xcd28,	// (0x0004f782) find_chidic_pane

0xcd31,	// (0x0004f78b) chi_dic_list_pane_ParamLimits

0xcd31,	// (0x0004f78b) chi_dic_list_pane

0xcd42,	// (0x0004f79c) scroll_pane_cp020

0xcd4a,	// (0x0004f7a4) find_chidic_pane_t1

0xc08a,	// (0x0004eae4) input_focus_pane_cp06

0x32b3,	// (0x00045d0d) list_chi_dic_pane_ParamLimits

0x32b3,	// (0x00045d0d) list_chi_dic_pane

0x32c5,	// (0x00045d1f) list_chi_dic_pane_t1_ParamLimits

0x32c5,	// (0x00045d1f) list_chi_dic_pane_t1

0xc08a,	// (0x0004eae4) list_highlight_pane_cp020

0xcd59,	// (0x0004f7b3) bg_cale_heading_pane_g1

0x32d8,	// (0x00045d32) bg_cale_heading_pane_g2

0x32e0,	// (0x00045d3a) bg_cale_heading_pane_g3

0x32e8,	// (0x00045d42) bg_cale_heading_pane_g4

0x32f2,	// (0x00045d4c) bg_cale_heading_pane_g5

0x32fc,	// (0x00045d56) bg_cale_heading_pane_g6

0x3304,	// (0x00045d5e) bg_cale_heading_pane_g7

0x330c,	// (0x00045d66) bg_cale_heading_pane_g8

0x3316,	// (0x00045d70) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00051e0e) bg_cale_heading_pane_g

0xcd59,	// (0x0004f7b3) bg_cale_side_pane_g1

0x3320,	// (0x00045d7a) bg_cale_side_pane_g2

0x3328,	// (0x00045d82) bg_cale_side_pane_g3

0x3330,	// (0x00045d8a) bg_cale_side_pane_g4

0x3338,	// (0x00045d92) bg_cale_side_pane_g5

0x3340,	// (0x00045d9a) bg_cale_side_pane_g6

0x3348,	// (0x00045da2) bg_cale_side_pane_g7

0x3350,	// (0x00045daa) bg_cale_side_pane_g8

0x3358,	// (0x00045db2) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00051e21) bg_cale_side_pane_g

0x3360,	// (0x00045dba) popup_call_status_window_ParamLimits

0x3360,	// (0x00045dba) popup_call_status_window

0xcd61,	// (0x0004f7bb) stacon_top_pane

0xcd69,	// (0x0004f7c3) status_pane_ParamLimits

0xcd69,	// (0x0004f7c3) status_pane

0xcd7e,	// (0x0004f7d8) status_small_pane

0xcd86,	// (0x0004f7e0) control_pane

0xc08a,	// (0x0004eae4) stacon_bottom_pane

0xcd8e,	// (0x0004f7e8) list_single_mce_smart_pane_t1_ParamLimits

0xcd8e,	// (0x0004f7e8) list_single_mce_smart_pane_t1

0xcda1,	// (0x0004f7fb) list_single_mce_smart_pane_t2_ParamLimits

0xcda1,	// (0x0004f7fb) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00051e34) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00051e34) list_single_mce_smart_pane_t

0x33a9,	// (0x00045e03) compass_pane

0x33b2,	// (0x00045e0c) main_location2_pane_t1

0x33c4,	// (0x00045e1e) main_location2_pane_t2

0x33d6,	// (0x00045e30) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00051e39) main_location2_pane_t

0xcdc0,	// (0x0004f81a) compass_pane_g1_ParamLimits

0xcdc0,	// (0x0004f81a) compass_pane_g1

0x341a,	// (0x00045e74) compass_pane_t1

0x3429,	// (0x00045e83) compass_pane_t2

0x0005,

0xf3e8,	// (0x00051e42) compass_pane_t

0x3470,	// (0x00045eca) text_secondary_cp61

0xcdd4,	// (0x0004f82e) navi_pane_cams_g5

0xcdf7,	// (0x0004f851) navi_pane_im_t1

0xce05,	// (0x0004f85f) navi_pane_mp_g1_ParamLimits

0xce05,	// (0x0004f85f) navi_pane_mp_g1

0xce19,	// (0x0004f873) navi_pane_mp_g2_ParamLimits

0xce19,	// (0x0004f873) navi_pane_mp_g2

0xce25,	// (0x0004f87f) navi_pane_mp_g3_ParamLimits

0xce25,	// (0x0004f87f) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00051e56) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00051e56) navi_pane_mp_g

0xce31,	// (0x0004f88b) navi_pane_mp_t1

0xce3f,	// (0x0004f899) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00051e5d) navi_pane_mp_t

0xce7b,	// (0x0004f8d5) navi_pane_vt_g1

0xce31,	// (0x0004f88b) navi_pane_vt_t1

0xce83,	// (0x0004f8dd) navi_slider_pane

0xce8b,	// (0x0004f8e5) zooming_pane

0xce93,	// (0x0004f8ed) navi_slider_pane_g1

0xa8b3,	// (0x0004d30d) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00051e64) navi_slider_pane_g

0xceb7,	// (0x0004f911) aid_levels_zoom

0xcebf,	// (0x0004f919) zooming_pane_g1

0xcec7,	// (0x0004f921) zooming_pane_g2

0xcec7,	// (0x0004f921) zooming_pane_g3

0x0002,

0xf419,	// (0x00051e73) zooming_pane_g

0xcedd,	// (0x0004f937) level_10_zoom

0xcee6,	// (0x0004f940) level_11_zoom

0xceef,	// (0x0004f949) level_1_zoom

0xcef8,	// (0x0004f952) level_2_zoom

0xcf01,	// (0x0004f95b) level_3_zoom

0xcf0a,	// (0x0004f964) level_4_zoom

0xcf13,	// (0x0004f96d) level_5_zoom

0xcf1c,	// (0x0004f976) level_6_zoom

0xcf25,	// (0x0004f97f) level_7_zoom

0xcf2e,	// (0x0004f988) level_8_zoom

0xcf37,	// (0x0004f991) level_9_zoom

0xcf48,	// (0x0004f9a2) popup_phob_thumbnail_window_g1

0xcf50,	// (0x0004f9aa) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00051e7a) popup_phob_thumbnail_window_g

0xe246,	// (0x00050ca0) level_1_location

0xe24e,	// (0x00050ca8) level_2_location

0xe256,	// (0x00050cb0) level_3_location

0xe25e,	// (0x00050cb8) level_4_location

0xce8b,	// (0x0004f8e5) level_5_location

0x35ab,	// (0x00046005) mce_icon_pane_g1

0x35b3,	// (0x0004600d) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00051e7f) mce_icon_pane_g

0x35bb,	// (0x00046015) main_mup_pane_g1_ParamLimits

0x35bb,	// (0x00046015) main_mup_pane_g1

0x35d1,	// (0x0004602b) main_mup_pane_g2_ParamLimits

0x35d1,	// (0x0004602b) main_mup_pane_g2

0x35e9,	// (0x00046043) main_mup_pane_g3_ParamLimits

0x35e9,	// (0x00046043) main_mup_pane_g3

0x3601,	// (0x0004605b) main_mup_pane_g4_ParamLimits

0x3601,	// (0x0004605b) main_mup_pane_g4

0x3619,	// (0x00046073) main_mup_pane_g5_ParamLimits

0x3619,	// (0x00046073) main_mup_pane_g5

0x3635,	// (0x0004608f) main_mup_pane_g6_ParamLimits

0x3635,	// (0x0004608f) main_mup_pane_g6

0x364d,	// (0x000460a7) main_mup_pane_g7_ParamLimits

0x364d,	// (0x000460a7) main_mup_pane_g7

0x3665,	// (0x000460bf) main_mup_pane_g8_ParamLimits

0x3665,	// (0x000460bf) main_mup_pane_g8

0x367f,	// (0x000460d9) main_mup_pane_g9_ParamLimits

0x367f,	// (0x000460d9) main_mup_pane_g9

0x3699,	// (0x000460f3) main_mup_pane_g10_ParamLimits

0x3699,	// (0x000460f3) main_mup_pane_g10

0x36b3,	// (0x0004610d) main_mup_pane_g11_ParamLimits

0x36b3,	// (0x0004610d) main_mup_pane_g11

0x36c7,	// (0x00046121) main_mup_pane_g12_ParamLimits

0x36c7,	// (0x00046121) main_mup_pane_g12

0x36dd,	// (0x00046137) main_mup_pane_g13_ParamLimits

0x36dd,	// (0x00046137) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00051e84) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00051e84) main_mup_pane_g

0x36f1,	// (0x0004614b) main_mup_pane_t1_ParamLimits

0x36f1,	// (0x0004614b) main_mup_pane_t1

0x370b,	// (0x00046165) main_mup_pane_t2_ParamLimits

0x370b,	// (0x00046165) main_mup_pane_t2

0x3723,	// (0x0004617d) main_mup_pane_t3_ParamLimits

0x3723,	// (0x0004617d) main_mup_pane_t3

0x373b,	// (0x00046195) main_mup_pane_t4_ParamLimits

0x373b,	// (0x00046195) main_mup_pane_t4

0x3759,	// (0x000461b3) main_mup_pane_t5_ParamLimits

0x3759,	// (0x000461b3) main_mup_pane_t5

0x376e,	// (0x000461c8) main_mup_pane_t6_ParamLimits

0x376e,	// (0x000461c8) main_mup_pane_t6

0x0005,

0xf445,	// (0x00051e9f) main_mup_pane_t_ParamLimits

0xf445,	// (0x00051e9f) main_mup_pane_t

0x3780,	// (0x000461da) mup_progress_pane_ParamLimits

0x3780,	// (0x000461da) mup_progress_pane

0x378c,	// (0x000461e6) mup_visualizer_pane_ParamLimits

0x378c,	// (0x000461e6) mup_visualizer_pane

0x37bc,	// (0x00046216) mup_volume_pane_ParamLimits

0x37bc,	// (0x00046216) mup_volume_pane

0xcecf,	// (0x0004f929) mup_visualizer_pane_g1_ParamLimits

0xcecf,	// (0x0004f929) mup_visualizer_pane_g1

0xcecf,	// (0x0004f929) mup_visualizer_pane_g2_ParamLimits

0xcecf,	// (0x0004f929) mup_visualizer_pane_g2

0xcdc0,	// (0x0004f81a) mup_visualizer_pane_g3_ParamLimits

0xcdc0,	// (0x0004f81a) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00051eac) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00051eac) mup_visualizer_pane_g

0xc40d,	// (0x0004ee67) mup_volume_pane_g1

0xcf60,	// (0x0004f9ba) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00051eb3) mup_volume_pane_g

0xc40d,	// (0x0004ee67) mup_progress_pane_g1

0xcf69,	// (0x0004f9c3) mup_progress_pane_g2

0xcf72,	// (0x0004f9cc) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00051eb8) mup_progress_pane_g

0xc08a,	// (0x0004eae4) bg_popup_window_pane_cp05

0xcf7b,	// (0x0004f9d5) heading_pane_cp02_ParamLimits

0xcf7b,	// (0x0004f9d5) heading_pane_cp02

0xcf95,	// (0x0004f9ef) list_popup_blid_pane

0xcf9d,	// (0x0004f9f7) list_blid_sat_info_pane_ParamLimits

0xcf9d,	// (0x0004f9f7) list_blid_sat_info_pane

0xcfb0,	// (0x0004fa0a) list_blid_sat_info_pane_g1

0xcfb8,	// (0x0004fa12) list_blid_sat_info_pane_t1

0x38d2,	// (0x0004632c) mup_equalizer_pane_ParamLimits

0x38d2,	// (0x0004632c) mup_equalizer_pane

0x38eb,	// (0x00046345) mup_equalizer_pane_cp1_ParamLimits

0x38eb,	// (0x00046345) mup_equalizer_pane_cp1

0x3908,	// (0x00046362) mup_equalizer_pane_cp2_ParamLimits

0x3908,	// (0x00046362) mup_equalizer_pane_cp2

0x3925,	// (0x0004637f) mup_equalizer_pane_cp3_ParamLimits

0x3925,	// (0x0004637f) mup_equalizer_pane_cp3

0x3946,	// (0x000463a0) mup_equalizer_pane_cp4_ParamLimits

0x3946,	// (0x000463a0) mup_equalizer_pane_cp4

0x3967,	// (0x000463c1) mup_equalizer_pane_cp5

0x397b,	// (0x000463d5) mup_equalizer_pane_cp6

0x398f,	// (0x000463e9) mup_equalizer_pane_cp7

0xe164,	// (0x00050bbe) bg_popup_call_poc_act_pane_g9

0xe16c,	// (0x00050bc6) bg_popup_call_poc_act_pane_g10

0xe174,	// (0x00050bce) bg_popup_call_poc_act_pane_g11

0x000a,

0xc2e5,	// (0x0004ed3f) mup_scale_pane

0xc40d,	// (0x0004ee67) mup_scale_pane_g1

0xcfc6,	// (0x0004fa20) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00051ed4) mup_scale_pane_g

0xcfea,	// (0x0004fa44) msg_data_pane

0xcff2,	// (0x0004fa4c) scroll_pane_cp017

0x0ac0,	// (0x0004351a) bg_list_pane_cp04_ParamLimits

0x0ac0,	// (0x0004351a) bg_list_pane_cp04

0xcffa,	// (0x0004fa54) msg_data_pane_g1

0x39b5,	// (0x0004640f) msg_data_pane_g2

0x39bf,	// (0x00046419) msg_data_pane_g3

0x39c7,	// (0x00046421) msg_data_pane_g4

0x39cf,	// (0x00046429) msg_data_pane_g5

0x39d7,	// (0x00046431) msg_data_pane_g6

0x39df,	// (0x00046439) msg_data_pane_g7

0x0006,

0xf489,	// (0x00051ee3) msg_data_pane_g

0x0ae0,	// (0x0004353a) msg_text_pane_ParamLimits

0x0ae0,	// (0x0004353a) msg_text_pane

0x39e7,	// (0x00046441) qrid_highlight_pane_cp011_ParamLimits

0x39e7,	// (0x00046441) qrid_highlight_pane_cp011

0xc08a,	// (0x0004eae4) msg_body_pane

0xc08a,	// (0x0004eae4) msg_header_pane

0xd00b,	// (0x0004fa65) input_focus_pane_cp07

0x0b13,	// (0x0004356d) msg_header_pane_t1_ParamLimits

0x0b13,	// (0x0004356d) msg_header_pane_t1

0x0b27,	// (0x00043581) msg_header_pane_t2_ParamLimits

0x0b27,	// (0x00043581) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00051ef7) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00051ef7) msg_header_pane_t

0xd020,	// (0x0004fa7a) msg_body_pane_g1

0x0b39,	// (0x00043593) msg_body_pane_t1_ParamLimits

0x0b39,	// (0x00043593) msg_body_pane_t1

0x0b6a,	// (0x000435c4) msg_body_pane_t2_ParamLimits

0x0b6a,	// (0x000435c4) msg_body_pane_t2

0x0b7c,	// (0x000435d6) msg_body_pane_t3_ParamLimits

0x0b7c,	// (0x000435d6) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00051efc) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00051efc) msg_body_pane_t

0x3a37,	// (0x00046491) main_viewer_pane_g1_ParamLimits

0x3a37,	// (0x00046491) main_viewer_pane_g1

0x3a45,	// (0x0004649f) main_viewer_pane_g2_ParamLimits

0x3a45,	// (0x0004649f) main_viewer_pane_g2

0x3a53,	// (0x000464ad) main_viewer_pane_g3_ParamLimits

0x3a53,	// (0x000464ad) main_viewer_pane_g3

0x3a62,	// (0x000464bc) main_viewer_pane_g4_ParamLimits

0x3a62,	// (0x000464bc) main_viewer_pane_g4

0xa8dd,	// (0x0004d337) main_viewer_pane_g5_ParamLimits

0xa8dd,	// (0x0004d337) main_viewer_pane_g5

0xa8dd,	// (0x0004d337) main_viewer_pane_g7_ParamLimits

0xa8dd,	// (0x0004d337) main_viewer_pane_g7

0xa8ef,	// (0x0004d349) main_viewer_pane_g8_ParamLimits

0xa8ef,	// (0x0004d349) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00051f0c) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00051f0c) main_viewer_pane_g

0xd028,	// (0x0004fa82) viewer_content_pane_ParamLimits

0xd028,	// (0x0004fa82) viewer_content_pane

0x3a9e,	// (0x000464f8) main_postcard_pane_g1_ParamLimits

0x3a9e,	// (0x000464f8) main_postcard_pane_g1

0x3ab4,	// (0x0004650e) main_postcard_pane_g2_ParamLimits

0x3ab4,	// (0x0004650e) main_postcard_pane_g2

0x3aca,	// (0x00046524) main_postcard_pane_g3_ParamLimits

0x3aca,	// (0x00046524) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00051f1d) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00051f1d) main_postcard_pane_g

0x3ae1,	// (0x0004653b) main_postcard_pane_g4

0xe33a,	// (0x00050d94) smil_status_volume_pane_g2

0x3b24,	// (0x0004657e) postcard_pane_ParamLimits

0x3b24,	// (0x0004657e) postcard_pane

0xd036,	// (0x0004fa90) postcard_pane_g1_ParamLimits

0xd036,	// (0x0004fa90) postcard_pane_g1

0x3b66,	// (0x000465c0) postcard_pane_g2_ParamLimits

0x3b66,	// (0x000465c0) postcard_pane_g2

0x3b72,	// (0x000465cc) postcard_pane_g3_ParamLimits

0x3b72,	// (0x000465cc) postcard_pane_g3

0xd044,	// (0x0004fa9e) postcard_pane_g4_ParamLimits

0xd044,	// (0x0004fa9e) postcard_pane_g4

0x3b7e,	// (0x000465d8) postcard_pane_g5_ParamLimits

0x3b7e,	// (0x000465d8) postcard_pane_g5

0x3b93,	// (0x000465ed) postcard_pane_g6_ParamLimits

0x3b93,	// (0x000465ed) postcard_pane_g6

0xd036,	// (0x0004fa90) postcard_pane_g7_ParamLimits

0xd036,	// (0x0004fa90) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00051f2a) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00051f2a) postcard_pane_g

0x3ba7,	// (0x00046601) main_mp2_pane_g1_ParamLimits

0x3ba7,	// (0x00046601) main_mp2_pane_g1

0x3bb3,	// (0x0004660d) main_mp2_pane_g2_ParamLimits

0x3bb3,	// (0x0004660d) main_mp2_pane_g2

0x3bbf,	// (0x00046619) main_mp2_pane_g3_ParamLimits

0x3bbf,	// (0x00046619) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00051f39) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00051f39) main_mp2_pane_g

0x3bcb,	// (0x00046625) main_mp2_pane_t1_ParamLimits

0x3bcb,	// (0x00046625) main_mp2_pane_t1

0x3be0,	// (0x0004663a) main_mp2_pane_t2_ParamLimits

0x3be0,	// (0x0004663a) main_mp2_pane_t2

0x3bf2,	// (0x0004664c) main_mp2_pane_t3_ParamLimits

0x3bf2,	// (0x0004664c) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00051f40) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00051f40) main_mp2_pane_t

0xd052,	// (0x0004faac) pec_content_pane_ParamLimits

0xd052,	// (0x0004faac) pec_content_pane

0xc6fe,	// (0x0004f158) scroll_pane_cp015

0xd064,	// (0x0004fabe) pec_attribute_pane_ParamLimits

0xd064,	// (0x0004fabe) pec_attribute_pane

0x3c04,	// (0x0004665e) pec_content_pane_g1_ParamLimits

0x3c04,	// (0x0004665e) pec_content_pane_g1

0xd074,	// (0x0004face) pec_content_pane_t1_ParamLimits

0xd074,	// (0x0004face) pec_content_pane_t1

0xd086,	// (0x0004fae0) pec_content_pane_t2_ParamLimits

0xd086,	// (0x0004fae0) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00051f47) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00051f47) pec_content_pane_t

0x3c10,	// (0x0004666a) list_single_graphic_pane_cp01_ParamLimits

0x3c10,	// (0x0004666a) list_single_graphic_pane_cp01

0xc2e5,	// (0x0004ed3f) bg_popup_sub_pane_cp04

0xd098,	// (0x0004faf2) popup_mup_playback_window_g1

0xd0a4,	// (0x0004fafe) popup_mup_playback_window_t1

0xd0b9,	// (0x0004fb13) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00051f4c) popup_mup_playback_window_t

0xd0f0,	// (0x0004fb4a) main_image_pane_g1_ParamLimits

0xd0f0,	// (0x0004fb4a) main_image_pane_g1

0xd133,	// (0x0004fb8d) scroll_pane_cp018_ParamLimits

0xd133,	// (0x0004fb8d) scroll_pane_cp018

0xd14b,	// (0x0004fba5) scroll_pane_cp016_ParamLimits

0xd14b,	// (0x0004fba5) scroll_pane_cp016

0x3cdd,	// (0x00046737) smil2_image_pane_ParamLimits

0x3cdd,	// (0x00046737) smil2_image_pane

0x3d0d,	// (0x00046767) smil2_root_pane_ParamLimits

0x3d0d,	// (0x00046767) smil2_root_pane

0x3d45,	// (0x0004679f) smil2_text_pane_ParamLimits

0x3d45,	// (0x0004679f) smil2_text_pane

0xc08a,	// (0x0004eae4) bg_list_pane_cp06

0xd187,	// (0x0004fbe1) grid_radio_pane

0xc08a,	// (0x0004eae4) bg_popup_window_pane_cp06

0xd18f,	// (0x0004fbe9) main_fmradio_pane_t1

0xcc1f,	// (0x0004f679) heading_pane_cp04

0xd19d,	// (0x0004fbf7) main_fmradio_pane_t2

0xe17c,	// (0x00050bd6) popup_cale_lunar_info_window_g1

0xd1ab,	// (0x0004fc05) main_fmradio_pane_t3

0xe184,	// (0x00050bde) popup_cale_lunar_info_window_g2

0xd1b9,	// (0x0004fc13) main_fmradio_pane_t4

0x0001,

0xd1c7,	// (0x0004fc21) main_fmradio_pane_t5

0x0004,

0x0065,	// (0x00042abf) popup_cale_lunar_info_window_g

0xf507,	// (0x00051f61) main_fmradio_pane_t

0xd1d5,	// (0x0004fc2f) wait_bar_pane_cp03

0xd1dd,	// (0x0004fc37) cell_fmradio_pane_ParamLimits

0xd1dd,	// (0x0004fc37) cell_fmradio_pane

0xd036,	// (0x0004fa90) cell_fmradio_pane_g1_ParamLimits

0xd036,	// (0x0004fa90) cell_fmradio_pane_g1

0xc08a,	// (0x0004eae4) grid_highlight_pane_cp011

0xd1f0,	// (0x0004fc4a) poc_content_pane_ParamLimits

0xd1f0,	// (0x0004fc4a) poc_content_pane

0xd202,	// (0x0004fc5c) scroll_pane_cp019

0x3dc5,	// (0x0004681f) popup_call_poc_act_window_ParamLimits

0x3dc5,	// (0x0004681f) popup_call_poc_act_window

0x3de9,	// (0x00046843) popup_call_poc_inact_window_ParamLimits

0x3de9,	// (0x00046843) popup_call_poc_inact_window

0x003c,	// (0x00042a96) bg_popup_call_poc_act_pane_g

0xe0f4,	// (0x00050b4e) bg_popup_call_poc_inact_pane_g1

0xe0fc,	// (0x00050b56) bg_popup_call_poc_inact_pane_g2

0xd20a,	// (0x0004fc64) popup_call_poc_act_window_g2

0xe104,	// (0x00050b5e) bg_popup_call_poc_inact_pane_g3

0xe10c,	// (0x00050b66) bg_popup_call_poc_inact_pane_g4

0xe114,	// (0x00050b6e) bg_popup_call_poc_inact_pane_g5

0xd212,	// (0x0004fc6c) popup_call_poc_act_window_t1_ParamLimits

0xd212,	// (0x0004fc6c) popup_call_poc_act_window_t1

0xd23a,	// (0x0004fc94) popup_call_poc_act_window_t2_ParamLimits

0xd23a,	// (0x0004fc94) popup_call_poc_act_window_t2

0xd262,	// (0x0004fcbc) popup_call_poc_act_window_t3_ParamLimits

0xd262,	// (0x0004fcbc) popup_call_poc_act_window_t3

0xd28a,	// (0x0004fce4) popup_call_poc_act_window_t4_ParamLimits

0xd28a,	// (0x0004fce4) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00051f6c) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00051f6c) popup_call_poc_act_window_t

0xe11c,	// (0x00050b76) bg_popup_call_poc_inact_pane_g6

0xe124,	// (0x00050b7e) bg_popup_call_poc_inact_pane_g7

0xe12c,	// (0x00050b86) bg_popup_call_poc_inact_pane_g8

0xd29c,	// (0x0004fcf6) popup_call_poc_inact_window_g2

0xe134,	// (0x00050b8e) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0029,	// (0x00042a83) bg_popup_call_poc_inact_pane_g

0xd2a4,	// (0x0004fcfe) popup_call_poc_inact_window_t1_ParamLimits

0xd2a4,	// (0x0004fcfe) popup_call_poc_inact_window_t1

0xd2b9,	// (0x0004fd13) popup_call_poc_inact_window_t2_ParamLimits

0xd2b9,	// (0x0004fd13) popup_call_poc_inact_window_t2

0xd2ce,	// (0x0004fd28) popup_call_poc_inact_window_t3_ParamLimits

0xd2ce,	// (0x0004fd28) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00051f75) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00051f75) popup_call_poc_inact_window_t

0xe2ad,	// (0x00050d07) context_pane_ParamLimits

0x461c,	// (0x00047076) signal_pane_ParamLimits

0xce8b,	// (0x0004f8e5) main_call2_pane

0xa934,	// (0x0004d38e) popup_phob_thumbnail2_window_ParamLimits

0xa934,	// (0x0004d38e) popup_phob_thumbnail2_window

0xa8c5,	// (0x0004d31f) aid_hotspot_pointer_arrow_pane

0xa8cd,	// (0x0004d327) aid_hotspot_pointer_hand_pane

0x4132,	// (0x00046b8c) phob_pre_status_pane_g5

0x211c,	// (0x00044b76) cams_zoom_pane_ParamLimits

0x212b,	// (0x00044b85) image_vga_pane_ParamLimits

0x2145,	// (0x00044b9f) main_camera_pane_g1_ParamLimits

0x2157,	// (0x00044bb1) main_camera_pane_g2_ParamLimits

0x2167,	// (0x00044bc1) main_camera_pane_g3_ParamLimits

0x2177,	// (0x00044bd1) main_camera_pane_g4_ParamLimits

0x2187,	// (0x00044be1) main_camera_pane_g5_ParamLimits

0x2197,	// (0x00044bf1) main_camera_pane_g6_ParamLimits

0x21a9,	// (0x00044c03) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00051c74) main_camera_pane_g_ParamLimits

0x21b9,	// (0x00044c13) main_camera_pane_t1_ParamLimits

0x21cf,	// (0x00044c29) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00051c85) main_camera_pane_t_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_popup_preview_window_pane_cp01_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_popup_preview_window_pane_cp01

0xd2e3,	// (0x0004fd3d) popup_phob_thumbnail2_window_g1_ParamLimits

0xd2e3,	// (0x0004fd3d) popup_phob_thumbnail2_window_g1

0xc08a,	// (0x0004eae4) call2_cli_visual_pane

0x3e1d,	// (0x00046877) popup_call2_audio_conf_window_ParamLimits

0x3e1d,	// (0x00046877) popup_call2_audio_conf_window

0x3e3d,	// (0x00046897) popup_call2_audio_first_window_ParamLimits

0x3e3d,	// (0x00046897) popup_call2_audio_first_window

0x3ed3,	// (0x0004692d) popup_call2_audio_in_window_ParamLimits

0x3ed3,	// (0x0004692d) popup_call2_audio_in_window

0x3f1b,	// (0x00046975) popup_call2_audio_out_window_ParamLimits

0x3f1b,	// (0x00046975) popup_call2_audio_out_window

0x3f85,	// (0x000469df) popup_call2_audio_second_window_ParamLimits

0x3f85,	// (0x000469df) popup_call2_audio_second_window

0x3feb,	// (0x00046a45) popup_call2_audio_wait_window_ParamLimits

0x3feb,	// (0x00046a45) popup_call2_audio_wait_window

0xc08a,	// (0x0004eae4) bg_popup_call2_act_pane_cp03

0xc2c7,	// (0x0004ed21) list_conf_pane_cp

0xd2ef,	// (0x0004fd49) popup_call2_audio_conf_window_t1

0xcc7c,	// (0x0004f6d6) list_single_graphic_popup_conf2_pane_ParamLimits

0xcc7c,	// (0x0004f6d6) list_single_graphic_popup_conf2_pane

0xcc8f,	// (0x0004f6e9) list_highlight_pane_cp04

0xd2fd,	// (0x0004fd57) list_single_graphic_popup_conf2_pane_g1

0xcca0,	// (0x0004f6fa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00051f7c) list_single_graphic_popup_conf2_pane_g

0xd307,	// (0x0004fd61) list_single_graphic_popup_conf2_pane_t1

0xd315,	// (0x0004fd6f) bg_popup_call2_act_pane_cp01_ParamLimits

0xd315,	// (0x0004fd6f) bg_popup_call2_act_pane_cp01

0xd39f,	// (0x0004fdf9) call_type_pane_cp05_ParamLimits

0xd39f,	// (0x0004fdf9) call_type_pane_cp05

0xd3f3,	// (0x0004fe4d) popup_call2_audio_second_window_g1_ParamLimits

0xd3f3,	// (0x0004fe4d) popup_call2_audio_second_window_g1

0xd447,	// (0x0004fea1) popup_call2_audio_second_window_g2_ParamLimits

0xd447,	// (0x0004fea1) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00051f81) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00051f81) popup_call2_audio_second_window_g

0xd4ac,	// (0x0004ff06) popup_call2_audio_second_window_t1_ParamLimits

0xd4ac,	// (0x0004ff06) popup_call2_audio_second_window_t1

0xd567,	// (0x0004ffc1) popup_call2_audio_second_window_t2_ParamLimits

0xd567,	// (0x0004ffc1) popup_call2_audio_second_window_t2

0xd5ba,	// (0x00050014) popup_call2_audio_second_window_t3_ParamLimits

0xd5ba,	// (0x00050014) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00051f88) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00051f88) popup_call2_audio_second_window_t

0xc08a,	// (0x0004eae4) bg_popup_call2_in_pane_cp02

0xc094,	// (0x0004eaee) call_type_pane_cp04

0xc09c,	// (0x0004eaf6) popup_call2_audio_wait_window_g1

0xc0a4,	// (0x0004eafe) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00051b61) popup_call2_audio_wait_window_g

0xc0ac,	// (0x0004eb06) popup_call2_audio_wait_window_t3

0xd6ad,	// (0x00050107) bg_popup_call2_act_pane_ParamLimits

0xd6ad,	// (0x00050107) bg_popup_call2_act_pane

0xd76d,	// (0x000501c7) call_type_pane_cp03_ParamLimits

0xd76d,	// (0x000501c7) call_type_pane_cp03

0xd7d1,	// (0x0005022b) popup_call2_audio_first_window_g1_ParamLimits

0xd7d1,	// (0x0005022b) popup_call2_audio_first_window_g1

0xd841,	// (0x0005029b) popup_call2_audio_first_window_g2_ParamLimits

0xd841,	// (0x0005029b) popup_call2_audio_first_window_g2

0xcecf,	// (0x0004f929) popup_call2_audio_first_window_g3_ParamLimits

0xcecf,	// (0x0004f929) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00051f91) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00051f91) popup_call2_audio_first_window_g

0xd91f,	// (0x00050379) popup_call2_audio_first_window_t1_ParamLimits

0xd91f,	// (0x00050379) popup_call2_audio_first_window_t1

0xda22,	// (0x0005047c) popup_call2_audio_first_window_t4_ParamLimits

0xda22,	// (0x0005047c) popup_call2_audio_first_window_t4

0xdb05,	// (0x0005055f) popup_call2_audio_first_window_t5_ParamLimits

0xdb05,	// (0x0005055f) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00051f9c) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00051f9c) popup_call2_audio_first_window_t

0xc2dd,	// (0x0004ed37) bg_popup_call2_act_pane_g1

0xe18c,	// (0x00050be6) popup_cale_lunar_info_window_t1

0xe19a,	// (0x00050bf4) popup_cale_lunar_info_window_t2

0xe1a8,	// (0x00050c02) popup_cale_lunar_info_window_t3

0xc08a,	// (0x0004eae4) bg_popup_call2_bubble_pane

0xdc06,	// (0x00050660) bg_popup_call2_in_pane_cp01_ParamLimits

0xdc06,	// (0x00050660) bg_popup_call2_in_pane_cp01

0xbd66,	// (0x0004e7c0) call_type_pane_cp02

0xdc4e,	// (0x000506a8) popup_call2_audio_out_window_g1_ParamLimits

0xdc4e,	// (0x000506a8) popup_call2_audio_out_window_g1

0xdc7a,	// (0x000506d4) popup_call2_audio_out_window_g2_ParamLimits

0xdc7a,	// (0x000506d4) popup_call2_audio_out_window_g2

0xdca2,	// (0x000506fc) popup_call2_audio_out_window_g3_ParamLimits

0xdca2,	// (0x000506fc) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00051fa5) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00051fa5) popup_call2_audio_out_window_g

0xdcf7,	// (0x00050751) popup_call2_audio_out_window_t1_ParamLimits

0xdcf7,	// (0x00050751) popup_call2_audio_out_window_t1

0xdd56,	// (0x000507b0) popup_call2_audio_out_window_t2_ParamLimits

0xdd56,	// (0x000507b0) popup_call2_audio_out_window_t2

0xddaa,	// (0x00050804) popup_call2_audio_out_window_t3_ParamLimits

0xddaa,	// (0x00050804) popup_call2_audio_out_window_t3

0xddc0,	// (0x0005081a) popup_call2_audio_out_window_t4_ParamLimits

0xddc0,	// (0x0005081a) popup_call2_audio_out_window_t4

0xddd6,	// (0x00050830) popup_call2_audio_out_window_t5_ParamLimits

0xddd6,	// (0x00050830) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00051fae) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00051fae) popup_call2_audio_out_window_t

0xde3a,	// (0x00050894) bg_popup_call2_in_pane_ParamLimits

0xde3a,	// (0x00050894) bg_popup_call2_in_pane

0xde96,	// (0x000508f0) popup_call2_audio_in_window_g1_ParamLimits

0xde96,	// (0x000508f0) popup_call2_audio_in_window_g1

0xdece,	// (0x00050928) popup_call2_audio_in_window_g2_ParamLimits

0xdece,	// (0x00050928) popup_call2_audio_in_window_g2

0xdf06,	// (0x00050960) popup_call2_audio_in_window_g3_ParamLimits

0xdf06,	// (0x00050960) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00051fbb) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00051fbb) popup_call2_audio_in_window_g

0xdf5e,	// (0x000509b8) popup_call2_audio_in_window_t1_ParamLimits

0xdf5e,	// (0x000509b8) popup_call2_audio_in_window_t1

0xdfde,	// (0x00050a38) popup_call2_audio_in_window_t2_ParamLimits

0xdfde,	// (0x00050a38) popup_call2_audio_in_window_t2

0xe05e,	// (0x00050ab8) popup_call2_audio_in_window_t3_ParamLimits

0xe05e,	// (0x00050ab8) popup_call2_audio_in_window_t3

0xe078,	// (0x00050ad2) popup_call2_audio_in_window_t4_ParamLimits

0xe078,	// (0x00050ad2) popup_call2_audio_in_window_t4

0xe08a,	// (0x00050ae4) popup_call2_audio_in_window_t5_ParamLimits

0xe08a,	// (0x00050ae4) popup_call2_audio_in_window_t5

0xe09f,	// (0x00050af9) popup_call2_audio_in_window_t6_ParamLimits

0xe09f,	// (0x00050af9) popup_call2_audio_in_window_t6

0x0005,

0x0002,	// (0x00042a5c) popup_call2_audio_in_window_t_ParamLimits

0x0002,	// (0x00042a5c) popup_call2_audio_in_window_t

0xc2dd,	// (0x0004ed37) bg_popup_call2_in_pane_g1

0xe1b6,	// (0x00050c10) popup_cale_lunar_info_window_t4

0x0003,

0x006a,	// (0x00042ac4) popup_cale_lunar_info_window_t

0xc2e5,	// (0x0004ed3f) bg_popup_call2_rect_pane_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_popup_call2_rect_pane

0xc08a,	// (0x0004eae4) call2_cli_visual_graphic_pane

0xc08a,	// (0x0004eae4) call2_cli_visual_text_pane

0xa946,	// (0x0004d3a0) smil_status_volume_pane_g3

0x0002,

0xc40d,	// (0x0004ee67) call2_cli_visual_graphic_pane_g1

0xc40d,	// (0x0004ee67) call2_cli_visual_graphic_pane_g2

0xc40d,	// (0x0004ee67) call2_cli_visual_graphic_pane_g3

0x0002,

0x000f,	// (0x00042a69) call2_cli_visual_graphic_pane_g

0xe0b4,	// (0x00050b0e) bg_popup_call2_rect_pane_g1

0xc499,	// (0x0004eef3) bg_popup_call2_rect_pane_g2

0xe0bc,	// (0x00050b16) bg_popup_call2_rect_pane_g3

0xe0c4,	// (0x00050b1e) bg_popup_call2_rect_pane_g4

0xe0cc,	// (0x00050b26) bg_popup_call2_rect_pane_g5

0xe0d4,	// (0x00050b2e) bg_popup_call2_rect_pane_g6

0xe0dc,	// (0x00050b36) bg_popup_call2_rect_pane_g7

0xe0e4,	// (0x00050b3e) bg_popup_call2_rect_pane_g8

0xe0ec,	// (0x00050b46) bg_popup_call2_rect_pane_g9

0x0008,

0x0016,	// (0x00042a70) bg_popup_call2_rect_pane_g

0xe0f4,	// (0x00050b4e) bg_popup_call2_bubble_pane_g1

0xe0fc,	// (0x00050b56) bg_popup_call2_bubble_pane_g2

0xe104,	// (0x00050b5e) bg_popup_call2_bubble_pane_g3

0xe10c,	// (0x00050b66) bg_popup_call2_bubble_pane_g4

0xe114,	// (0x00050b6e) bg_popup_call2_bubble_pane_g5

0xe11c,	// (0x00050b76) bg_popup_call2_bubble_pane_g6

0xe124,	// (0x00050b7e) bg_popup_call2_bubble_pane_g7

0xe12c,	// (0x00050b86) bg_popup_call2_bubble_pane_g8

0xe134,	// (0x00050b8e) bg_popup_call2_bubble_pane_g9

0x0008,

0x0029,	// (0x00042a83) bg_popup_call2_bubble_pane_g

0x1c6b,	// (0x000446c5) aid_cale_week_size_cell_pane

0x21e5,	// (0x00044c3f) aid_cams_cif_uncrop_pane_ParamLimits

0x21e5,	// (0x00044c3f) aid_cams_cif_uncrop_pane

0x239a,	// (0x00044df4) aid_cams_size_cell_ParamLimits

0x239a,	// (0x00044df4) aid_cams_size_cell

0x23ae,	// (0x00044e08) grid_cams_pane_ParamLimits

0x23c8,	// (0x00044e22) linegrid_cams_pane_ParamLimits

0x24af,	// (0x00044f09) call_video_pane_t1

0x24cd,	// (0x00044f27) call_video_pane_t2

0x0001,

0xf27e,	// (0x00051cd8) call_video_pane_t

0x28f9,	// (0x00045353) aid_cale_month_size_cell_pane_ParamLimits

0x28f9,	// (0x00045353) aid_cale_month_size_cell_pane

0xf59a,	// (0x00051ff4) smil_status_volume_pane_g

0xa953,	// (0x0004d3ad) volume_smil_pane_ParamLimits

0xa5d1,	// (0x0004d02b) aid_popup2_width_pane

0x1bdb,	// (0x00044635) cell_qdial_pane_g4_ParamLimits

0x1bdb,	// (0x00044635) cell_qdial_pane_g4

0x33fa,	// (0x00045e54) aid_blid_cardinal_pane_ParamLimits

0x3406,	// (0x00045e60) aid_blid_destination_pane_ParamLimits

0x3406,	// (0x00045e60) aid_blid_destination_pane

0xc2e5,	// (0x0004ed3f) bg_popup_call_poc_act_pane_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_popup_call_poc_act_pane

0xc2e5,	// (0x0004ed3f) bg_popup_call_poc_inact_pane_ParamLimits

0xc2e5,	// (0x0004ed3f) bg_popup_call_poc_inact_pane

0xe13c,	// (0x00050b96) bg_popup_call_poc_act_pane_g1

0xe144,	// (0x00050b9e) bg_popup_call_poc_act_pane_g2

0xe14c,	// (0x00050ba6) bg_popup_call_poc_act_pane_g3

0xe10c,	// (0x00050b66) bg_popup_call_poc_act_pane_g4

0xe114,	// (0x00050b6e) bg_popup_call_poc_act_pane_g5

0xe154,	// (0x00050bae) bg_popup_call_poc_act_pane_g6

0xe124,	// (0x00050b7e) bg_popup_call_poc_act_pane_g7

0xe15c,	// (0x00050bb6) bg_popup_call_poc_act_pane_g8

0xc08a,	// (0x0004eae4) main_usb_pane

0xa90f,	// (0x0004d369) popup_cale_lunar_info_window

0x27a5,	// (0x000451ff) im_reading_pane_t1_ParamLimits

0xc656,	// (0x0004f0b0) list_im_pane_ParamLimits

0xc667,	// (0x0004f0c1) scroll_pane_cp07_ParamLimits

0xc08a,	// (0x0004eae4) grid_highlight_pane_cp012

0xc2e5,	// (0x0004ed3f) mup_scale_pane_ParamLimits

0xd036,	// (0x0004fa90) main_usb_pane_g1_ParamLimits

0xd036,	// (0x0004fa90) main_usb_pane_g1

0x4047,	// (0x00046aa1) main_usb_pane_g2_ParamLimits

0x4047,	// (0x00046aa1) main_usb_pane_g2

0x0001,

0xf56a,	// (0x00051fc4) main_usb_pane_g_ParamLimits

0xf56a,	// (0x00051fc4) main_usb_pane_g

0x405d,	// (0x00046ab7) main_usb_pane_t1_ParamLimits

0x405d,	// (0x00046ab7) main_usb_pane_t1

0x406f,	// (0x00046ac9) main_usb_pane_t2_ParamLimits

0x406f,	// (0x00046ac9) main_usb_pane_t2

0x4081,	// (0x00046adb) main_usb_pane_t3_ParamLimits

0x4081,	// (0x00046adb) main_usb_pane_t3

0x4093,	// (0x00046aed) main_usb_pane_t4_ParamLimits

0x4093,	// (0x00046aed) main_usb_pane_t4

0x40a5,	// (0x00046aff) main_usb_pane_t5_ParamLimits

0x40a5,	// (0x00046aff) main_usb_pane_t5

0x40b7,	// (0x00046b11) main_usb_pane_t6_ParamLimits

0x40b7,	// (0x00046b11) main_usb_pane_t6

0x0005,

0xf56f,	// (0x00051fc9) main_usb_pane_t_ParamLimits

0x33a9,	// (0x00045e03) aid_text_placing

0x33b2,	// (0x00045e0c) main_location2_pane_t1_ParamLimits

0x33c4,	// (0x00045e1e) main_location2_pane_t2_ParamLimits

0x33d6,	// (0x00045e30) main_location2_pane_t3_ParamLimits

0x33e8,	// (0x00045e42) main_location2_pane_t4_ParamLimits

0x33e8,	// (0x00045e42) main_location2_pane_t4

0xf3df,	// (0x00051e39) main_location2_pane_t_ParamLimits

0xc321,	// (0x0004ed7b) find_pinb_pane_g2_ParamLimits

0xc321,	// (0x0004ed7b) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00051b87) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00051b87) find_pinb_pane_g

0xc32d,	// (0x0004ed87) find_pinb_pane_t1_ParamLimits

0xc33f,	// (0x0004ed99) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00051b8c) find_pinb_pane_t_ParamLimits

0xc08a,	// (0x0004eae4) main_call3_pane

0x2c5d,	// (0x000456b7) cale_month_day_heading_pane_t1_ParamLimits

0x2cbb,	// (0x00045715) cale_month_day_heading_pane_t2_ParamLimits

0x2d20,	// (0x0004577a) cale_month_day_heading_pane_t3_ParamLimits

0x2d85,	// (0x000457df) cale_month_day_heading_pane_t4_ParamLimits

0x2dea,	// (0x00045844) cale_month_day_heading_pane_t5_ParamLimits

0x2e5f,	// (0x000458b9) cale_month_day_heading_pane_t6_ParamLimits

0x2ed4,	// (0x0004592e) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00051d10) cale_month_day_heading_pane_t_ParamLimits

0xc8a7,	// (0x0004f301) smil_status_volume_pane

0x3b42,	// (0x0004659c) postcard_address_pane_ParamLimits

0x3b42,	// (0x0004659c) postcard_address_pane

0x3b54,	// (0x000465ae) postcard_message_pane_ParamLimits

0x3b54,	// (0x000465ae) postcard_message_pane

0x4025,	// (0x00046a7f) call2_cli_visual_pane_t1_ParamLimits

0x4025,	// (0x00046a7f) call2_cli_visual_pane_t1

0x4849,	// (0x000472a3) postcard_message_pane_t1_ParamLimits

0x4849,	// (0x000472a3) postcard_message_pane_t1

0x4832,	// (0x0004728c) postcard_address_pane_t1_ParamLimits

0x4832,	// (0x0004728c) postcard_address_pane_t1

0x481e,	// (0x00047278) popup_call3_audio_in_window_ParamLimits

0x481e,	// (0x00047278) popup_call3_audio_in_window

0x46a9,	// (0x00047103) bg_popup_call3_in_pane_ParamLimits

0x46a9,	// (0x00047103) bg_popup_call3_in_pane

0x471f,	// (0x00047179) popup_call3_audio_in_window_g1_ParamLimits

0x471f,	// (0x00047179) popup_call3_audio_in_window_g1

0x473f,	// (0x00047199) popup_call3_audio_in_window_g2_ParamLimits

0x473f,	// (0x00047199) popup_call3_audio_in_window_g2

0x475f,	// (0x000471b9) popup_call3_audio_in_window_g3_ParamLimits

0x475f,	// (0x000471b9) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x00051ffb) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x00051ffb) popup_call3_audio_in_window_g

0x4790,	// (0x000471ea) popup_call3_audio_in_window_t1_ParamLimits

0x4790,	// (0x000471ea) popup_call3_audio_in_window_t1

0x47ce,	// (0x00047228) popup_call3_audio_in_window_t2_ParamLimits

0x47ce,	// (0x00047228) popup_call3_audio_in_window_t2

0x480c,	// (0x00047266) popup_call3_audio_in_window_t3_ParamLimits

0x480c,	// (0x00047266) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x00052004) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x00052004) popup_call3_audio_in_window_t

0xce8b,	// (0x0004f8e5) bg_popup_call3_rect_pane

0xe0b4,	// (0x00050b0e) bg_popup_call3_rect_pane_g1

0xc499,	// (0x0004eef3) bg_popup_call3_rect_pane_g2

0xe0bc,	// (0x00050b16) bg_popup_call3_rect_pane_g3

0xe0c4,	// (0x00050b1e) bg_popup_call3_rect_pane_g4

0xe0cc,	// (0x00050b26) bg_popup_call3_rect_pane_g5

0xe0d4,	// (0x00050b2e) bg_popup_call3_rect_pane_g6

0xe0dc,	// (0x00050b36) bg_popup_call3_rect_pane_g7

0x37d2,	// (0x0004622c) mup_visualizer_osc_pane

0xcf58,	// (0x0004f9b2) mup_visualizer_spec_pane

0x46d9,	// (0x00047133) call3_video_qcif_pane_ParamLimits

0x46d9,	// (0x00047133) call3_video_qcif_pane

0x46ec,	// (0x00047146) call3_video_qcif_uncrop_pane_ParamLimits

0x46ec,	// (0x00047146) call3_video_qcif_uncrop_pane

0x46fa,	// (0x00047154) call3_video_subqcif_pane_ParamLimits

0x46fa,	// (0x00047154) call3_video_subqcif_pane

0x470e,	// (0x00047168) call3_video_subqcif_uncrop_pane_ParamLimits

0x470e,	// (0x00047168) call3_video_subqcif_uncrop_pane

0x477f,	// (0x000471d9) popup_call3_audio_in_window_g4_ParamLimits

0x477f,	// (0x000471d9) popup_call3_audio_in_window_g4

0x4698,	// (0x000470f2) mup_spec_half_pane

0x46a1,	// (0x000470fb) mup_spec_half_pane_cp

0xe30d,	// (0x00050d67) mup_osc_middle_pane

0xe316,	// (0x00050d70) mup_visualizer_osc_pane_g1

0x4678,	// (0x000470d2) mup_spec_bar_pane_ParamLimits

0x4678,	// (0x000470d2) mup_spec_bar_pane

0xe2fa,	// (0x00050d54) mup_spec_bar_pane_g1

0xe304,	// (0x00050d5e) mup_spec_bar_pane_g2

0x0001,

0x00ae,	// (0x00042b08) mup_spec_bar_pane_g

0x1c6b,	// (0x000446c5) aid_cale_week_size_cell_pane_ParamLimits

0x1c7e,	// (0x000446d8) bg_cale_heading_pane_ParamLimits

0xc4cd,	// (0x0004ef27) bg_cale_pane_cp01_ParamLimits

0x1c92,	// (0x000446ec) cale_week_corner_pane_ParamLimits

0x1ca8,	// (0x00044702) cale_week_day_heading_pane_ParamLimits

0x1cbc,	// (0x00044716) cale_week_scroll_pane_g1_ParamLimits

0x1ccd,	// (0x00044727) cale_week_scroll_pane_g2_ParamLimits

0x1cde,	// (0x00044738) cale_week_scroll_pane_g3_ParamLimits

0x1cef,	// (0x00044749) cale_week_scroll_pane_g4_ParamLimits

0x1d00,	// (0x0004475a) cale_week_scroll_pane_g5_ParamLimits

0x1d13,	// (0x0004476d) cale_week_scroll_pane_g6_ParamLimits

0x1d26,	// (0x00044780) cale_week_scroll_pane_g7_ParamLimits

0x1d39,	// (0x00044793) cale_week_scroll_pane_g8_ParamLimits

0x1d4c,	// (0x000447a6) cale_week_scroll_pane_g9_ParamLimits

0x1d5d,	// (0x000447b7) cale_week_scroll_pane_g10_ParamLimits

0x1d6e,	// (0x000447c8) cale_week_scroll_pane_g11_ParamLimits

0x1d7f,	// (0x000447d9) cale_week_scroll_pane_g12_ParamLimits

0x1d90,	// (0x000447ea) cale_week_scroll_pane_g13_ParamLimits

0x1da1,	// (0x000447fb) cale_week_scroll_pane_g14_ParamLimits

0x1db2,	// (0x0004480c) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00051c18) cale_week_scroll_pane_g_ParamLimits

0x1dc3,	// (0x0004481d) cale_week_time_pane_ParamLimits

0x1dd6,	// (0x00044830) grid_cale_week_pane_ParamLimits

0xc4e6,	// (0x0004ef40) listscroll_cale_week_pane_t1

0x1deb,	// (0x00044845) scroll_pane_cp08_ParamLimits

0x293a,	// (0x00045394) cale_month_corner_pane_ParamLimits

0xc87d,	// (0x0004f2d7) cale_month_pane_t1

0x2c1c,	// (0x00045676) cale_month_week_pane_ParamLimits

0x31f5,	// (0x00045c4f) popup_call_status_window_g1_ParamLimits

0x3209,	// (0x00045c63) popup_call_status_window_g2_ParamLimits

0x321d,	// (0x00045c77) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00051dc0) popup_call_status_window_g_ParamLimits

0xcc0f,	// (0x0004f669) aid_call2_pane

0x0b05,	// (0x0004355f) msg_header_pane_g1

0x3b42,	// (0x0004659c) postcard_address2_pane_ParamLimits

0x3b42,	// (0x0004659c) postcard_address2_pane

0x3b54,	// (0x000465ae) postcard_message2_pane_ParamLimits

0x3b54,	// (0x000465ae) postcard_message2_pane

0x462a,	// (0x00047084) message2_row_pane_ParamLimits

0x462a,	// (0x00047084) message2_row_pane

0x4646,	// (0x000470a0) address2_row_pane_ParamLimits

0x4646,	// (0x000470a0) address2_row_pane

0xe2c8,	// (0x00050d22) postcard_message2_row_pane_g1

0xe2d0,	// (0x00050d2a) postcard_message2_row_pane_t1

0xe2c8,	// (0x00050d22) address2_row_pane_g1

0xe2d0,	// (0x00050d2a) address2_row_pane_t1

0x2083,	// (0x00044add) aid_size_cell_vorec

0xc08a,	// (0x0004eae4) main_rss_pane

0x4659,	// (0x000470b3) rss_list_single_pane_ParamLimits

0x4659,	// (0x000470b3) rss_list_single_pane

0xe2de,	// (0x00050d38) rss_list_single_pane_t1

0xe2ec,	// (0x00050d46) rss_list_single_pane_t2

0x0001,

0x00a9,	// (0x00042b03) rss_list_single_pane_t

0xc08a,	// (0x0004eae4) main_camera2_pane

0xc08a,	// (0x0004eae4) main_video2_pane

0x48c2,	// (0x0004731c) cams_zoom_pane_cp2_ParamLimits

0x48c2,	// (0x0004731c) cams_zoom_pane_cp2

0x48e2,	// (0x0004733c) image2_vga_pane_ParamLimits

0x48e2,	// (0x0004733c) image2_vga_pane

0x4933,	// (0x0004738d) main_camera2_pane_g1_ParamLimits

0x4933,	// (0x0004738d) main_camera2_pane_g1

0x4953,	// (0x000473ad) main_camera2_pane_g2_ParamLimits

0x4953,	// (0x000473ad) main_camera2_pane_g2

0x4973,	// (0x000473cd) main_camera2_pane_g3_ParamLimits

0x4973,	// (0x000473cd) main_camera2_pane_g3

0x4993,	// (0x000473ed) main_camera2_pane_g4_ParamLimits

0x4993,	// (0x000473ed) main_camera2_pane_g4

0x49b3,	// (0x0004740d) main_camera2_pane_g5_ParamLimits

0x49b3,	// (0x0004740d) main_camera2_pane_g5

0x49d3,	// (0x0004742d) main_camera2_pane_g6_ParamLimits

0x49d3,	// (0x0004742d) main_camera2_pane_g6

0x49f3,	// (0x0004744d) main_camera2_pane_g7_ParamLimits

0x49f3,	// (0x0004744d) main_camera2_pane_g7

0x4a13,	// (0x0004746d) main_camera2_pane_g8_ParamLimits

0x4a13,	// (0x0004746d) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x0005200b) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x0005200b) main_camera2_pane_g

0x4a53,	// (0x000474ad) main_camera2_pane_t1_ParamLimits

0x4a53,	// (0x000474ad) main_camera2_pane_t1

0x4a88,	// (0x000474e2) main_camera2_pane_t2_ParamLimits

0x4a88,	// (0x000474e2) main_camera2_pane_t2

0x4aae,	// (0x00047508) main_camera2_pane_t3_ParamLimits

0x4aae,	// (0x00047508) main_camera2_pane_t3

0x4b0c,	// (0x00047566) main_camera2_pane_t4_ParamLimits

0x4b0c,	// (0x00047566) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x0005201e) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x0005201e) main_camera2_pane_t

0x4b9e,	// (0x000475f8) cams_zoom_pane_cp4_ParamLimits

0x4b9e,	// (0x000475f8) cams_zoom_pane_cp4

0x4bb4,	// (0x0004760e) image2_cif_pane_ParamLimits

0x4bb4,	// (0x0004760e) image2_cif_pane

0x4bdf,	// (0x00047639) image2_subqcif_pane_ParamLimits

0x4bdf,	// (0x00047639) image2_subqcif_pane

0x4bf9,	// (0x00047653) main_video2_pane_g1_ParamLimits

0x4bf9,	// (0x00047653) main_video2_pane_g1

0x4c13,	// (0x0004766d) main_video2_pane_g2_ParamLimits

0x4c13,	// (0x0004766d) main_video2_pane_g2

0x4c29,	// (0x00047683) main_video2_pane_g3_ParamLimits

0x4c29,	// (0x00047683) main_video2_pane_g3

0x4c3f,	// (0x00047699) main_video2_pane_g4_ParamLimits

0x4c3f,	// (0x00047699) main_video2_pane_g4

0x4c55,	// (0x000476af) main_video2_pane_g5_ParamLimits

0x4c55,	// (0x000476af) main_video2_pane_g5

0x4c6b,	// (0x000476c5) main_video2_pane_g6_ParamLimits

0x4c6b,	// (0x000476c5) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x0005202d) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x0005202d) main_video2_pane_g

0x4c85,	// (0x000476df) main_video2_pane_t1_ParamLimits

0x4c85,	// (0x000476df) main_video2_pane_t1

0x4ca9,	// (0x00047703) main_video2_pane_t2_ParamLimits

0x4ca9,	// (0x00047703) main_video2_pane_t2

0x4cf7,	// (0x00047751) main_video2_pane_t3_ParamLimits

0x4cf7,	// (0x00047751) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x0005203a) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x0005203a) main_video2_pane_t

0x4172,	// (0x00046bcc) call_muted_g2

0x0001,

0xf595,	// (0x00051fef) call_muted_g

0xc08a,	// (0x0004eae4) main_mup2_pane

0x4d3b,	// (0x00047795) main_mup2_pane_g1_ParamLimits

0x4d3b,	// (0x00047795) main_mup2_pane_g1

0x4d47,	// (0x000477a1) main_mup2_pane_g2_ParamLimits

0x4d47,	// (0x000477a1) main_mup2_pane_g2

0xa9c1,	// (0x0004d41b) main_mup_pane_g13_cp1

0xa9c9,	// (0x0004d423) mup_volume_pane_cp1

0x4d63,	// (0x000477bd) main_mup2_pane_g4_ParamLimits

0x4d63,	// (0x000477bd) main_mup2_pane_g4

0x4d75,	// (0x000477cf) main_mup2_pane_g5_ParamLimits

0x4d75,	// (0x000477cf) main_mup2_pane_g5

0x4d87,	// (0x000477e1) main_mup2_pane_g6_ParamLimits

0x4d87,	// (0x000477e1) main_mup2_pane_g6

0x4d99,	// (0x000477f3) main_mup2_pane_g7_ParamLimits

0x4d99,	// (0x000477f3) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x00052041) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x00052041) main_mup2_pane_g

0x4db1,	// (0x0004780b) main_mup2_pane_t1_ParamLimits

0x4db1,	// (0x0004780b) main_mup2_pane_t1

0x4dc7,	// (0x00047821) main_mup2_pane_t2_ParamLimits

0x4dc7,	// (0x00047821) main_mup2_pane_t2

0x4ddd,	// (0x00047837) main_mup2_pane_t3_ParamLimits

0x4ddd,	// (0x00047837) main_mup2_pane_t3

0x4df3,	// (0x0004784d) main_mup2_pane_t4_ParamLimits

0x4df3,	// (0x0004784d) main_mup2_pane_t4

0x4e0b,	// (0x00047865) main_mup2_pane_t5_ParamLimits

0x4e0b,	// (0x00047865) main_mup2_pane_t5

0x4e23,	// (0x0004787d) main_mup2_pane_t6_ParamLimits

0x4e23,	// (0x0004787d) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x00052050) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x00052050) main_mup2_pane_t

0x4e53,	// (0x000478ad) mup2_visualizer_pane_ParamLimits

0x4e53,	// (0x000478ad) mup2_visualizer_pane

0x4e81,	// (0x000478db) mup_progress_pane_cp_ParamLimits

0x4e81,	// (0x000478db) mup_progress_pane_cp

0xa9ac,	// (0x0004d406) mup_volume_pane_cp_ParamLimits

0xa9ac,	// (0x0004d406) mup_volume_pane_cp

0x4e95,	// (0x000478ef) mup2_visualizer_pane_g1_ParamLimits

0x4e95,	// (0x000478ef) mup2_visualizer_pane_g1

0xe34d,	// (0x00050da7) mup2_visualizer_pane_g2_ParamLimits

0xe34d,	// (0x00050da7) mup2_visualizer_pane_g2

0x4eac,	// (0x00047906) mup2_visualizer_pane_g3_ParamLimits

0x4eac,	// (0x00047906) mup2_visualizer_pane_g3

0x0002,

0xf603,	// (0x0005205d) mup2_visualizer_pane_g_ParamLimits

0xf603,	// (0x0005205d) mup2_visualizer_pane_g

0xd17f,	// (0x0004fbd9) aid_size_cell_fmradio

0x4324,	// (0x00046d7e) aid_height_parent_landcape

0xc6e5,	// (0x0004f13f) wml_content_pane_cp

0xc6ed,	// (0x0004f147) wml_tabs_pane

0xc6f6,	// (0x0004f150) popup_wml_miniature_window

0xc6fe,	// (0x0004f158) scroll_pane_cp021

0xc712,	// (0x0004f16c) wml_content_pane_comp8

0xc08a,	// (0x0004eae4) bg_popup_sub_pane_cp05

0xe36b,	// (0x00050dc5) popup_wml_miniature_window_g1

0xe373,	// (0x00050dcd) wml_miniature_view_pane

0x4eb8,	// (0x00047912) aid_size_wml_view

0x4ec0,	// (0x0004791a) wml_miniature_view_pane_g1

0x4ec9,	// (0x00047923) wml_miniature_view_pane_g2

0x4ed2,	// (0x0004792c) wml_miniature_view_pane_g3

0x4eda,	// (0x00047934) wml_miniature_view_pane_g4

0x4ee2,	// (0x0004793c) wml_miniature_view_pane_g5

0x4eea,	// (0x00047944) wml_miniature_view_pane_g6

0x4ef2,	// (0x0004794c) wml_miniature_view_pane_g7

0x4efa,	// (0x00047954) wml_miniature_view_pane_g8

0x0007,

0xf60a,	// (0x00052064) wml_miniature_view_pane_g

0xe37b,	// (0x00050dd5) background_graphic_ParamLimits

0xe37b,	// (0x00050dd5) background_graphic

0xe387,	// (0x00050de1) wml_tabs_2_pane

0xe390,	// (0x00050dea) wml_tabs_3_pane_ParamLimits

0xe390,	// (0x00050dea) wml_tabs_3_pane

0xe3a2,	// (0x00050dfc) wml_tabs_4_pane_ParamLimits

0xe3a2,	// (0x00050dfc) wml_tabs_4_pane

0xe3b8,	// (0x00050e12) wml_tabs_5_pane_ParamLimits

0xe3b8,	// (0x00050e12) wml_tabs_5_pane

0xe3d2,	// (0x00050e2c) wml_tabs_pane_g2_ParamLimits

0xe3d2,	// (0x00050e2c) wml_tabs_pane_g2

0xe3e6,	// (0x00050e40) wml_tabs_pane_g3_ParamLimits

0xe3e6,	// (0x00050e40) wml_tabs_pane_g3

0x4f02,	// (0x0004795c) wml_tabs_2_active_pane_ParamLimits

0x4f02,	// (0x0004795c) wml_tabs_2_active_pane

0x4f16,	// (0x00047970) wml_tabs_2_passive_pane_ParamLimits

0x4f16,	// (0x00047970) wml_tabs_2_passive_pane

0x4f2a,	// (0x00047984) wml_tabs_3_active_pane_cp_ParamLimits

0x4f2a,	// (0x00047984) wml_tabs_3_active_pane_cp

0x4f3f,	// (0x00047999) wml_tabs_3_passive_pane_ParamLimits

0x4f3f,	// (0x00047999) wml_tabs_3_passive_pane

0x4f52,	// (0x000479ac) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f52,	// (0x000479ac) wml_tabs_3_passive_pane_cp

0x4f69,	// (0x000479c3) tabs_4_active_pane

0x4f71,	// (0x000479cb) tabs_4_passive_pane

0x4f7b,	// (0x000479d5) tabs_4_passive_pane_cp

0x4f83,	// (0x000479dd) tabs_4_passive_pane_cp2

0x403f,	// (0x00046a99) aid_height_text

0x37a8,	// (0x00046202) mup_volume_cont_pane_ParamLimits

0x37a8,	// (0x00046202) mup_volume_cont_pane

0x185c,	// (0x000442b6) aid_size_cell_pinb

0x1866,	// (0x000442c0) aid_size_list_pinb

0x4e6d,	// (0x000478c7) mup2_volume_cont_pane_ParamLimits

0x4e6d,	// (0x000478c7) mup2_volume_cont_pane

0xa998,	// (0x0004d3f2) mup2_volume_cont_pane_g1_ParamLimits

0xa998,	// (0x0004d3f2) mup2_volume_cont_pane_g1

0x153e,	// (0x00043f98) aid_size_cell_touch_ParamLimits

0x153e,	// (0x00043f98) aid_size_cell_touch

0x174c,	// (0x000441a6) touch_pane_ParamLimits

0x174c,	// (0x000441a6) touch_pane

0xa5bf,	// (0x0004d019) main_rss2_pane

0xe403,	// (0x00050e5d) listscroll_rss2_pane

0xe40c,	// (0x00050e66) rss2_navigation_pane

0xe414,	// (0x00050e6e) list_rss2_pane

0xcd42,	// (0x0004f79c) scroll_pane_cp22

0xe41c,	// (0x00050e76) rss2_navigation_pane_g1

0xe425,	// (0x00050e7f) rss2_navigation_pane_g2

0xe42d,	// (0x00050e87) rss2_navigation_pane_g3

0x0002,

0x0134,	// (0x00042b8e) rss2_navigation_pane_g

0xe435,	// (0x00050e8f) rss2_navigation_pane_t1

0x4f8d,	// (0x000479e7) rss2_list_single_pane_ParamLimits

0x4f8d,	// (0x000479e7) rss2_list_single_pane

0xe443,	// (0x00050e9d) rss2_list_single_pane_t2

0xe451,	// (0x00050eab) rss2_list_single_pane_t3_ParamLimits

0xe451,	// (0x00050eab) rss2_list_single_pane_t3

0xe46e,	// (0x00050ec8) rss2_list_single_pane_t4

0x30ce,	// (0x00045b28) smil_status_pane_g1

0xdcdd,	// (0x00050737) main_image2_pane_ParamLimits

0xdcdd,	// (0x00050737) main_image2_pane

0x4a33,	// (0x0004748d) main_camera2_pane_g9_ParamLimits

0x4a33,	// (0x0004748d) main_camera2_pane_g9

0x4b61,	// (0x000475bb) main_camera2_pane_t5_ParamLimits

0x4b61,	// (0x000475bb) main_camera2_pane_t5

0xa968,	// (0x0004d3c2) main_camera2_pane_t6_ParamLimits

0xa968,	// (0x0004d3c2) main_camera2_pane_t6

0x4fa2,	// (0x000479fc) main_image2_pane_g1_ParamLimits

0x4fa2,	// (0x000479fc) main_image2_pane_g1

0x3d7b,	// (0x000467d5) smil2_video_pane_ParamLimits

0x3d7b,	// (0x000467d5) smil2_video_pane

0xa5ed,	// (0x0004d047) aid_zoom_text_primary_cp

0xa62d,	// (0x0004d087) popup_preview_fixed_window

0xc64e,	// (0x0004f0a8) im_reading_pane_g1

0x48aa,	// (0x00047304) cams2_bc_adjust_pane_cp_ParamLimits

0x48aa,	// (0x00047304) cams2_bc_adjust_pane_cp

0x4b90,	// (0x000475ea) cams2_bc_adjust_pane_ParamLimits

0x4b90,	// (0x000475ea) cams2_bc_adjust_pane

0xa9d1,	// (0x0004d42b) cams2_bc_adjust_pane_g1

0xa9d9,	// (0x0004d433) cams2_slider_pane

0xa9e2,	// (0x0004d43c) cams2_slider_pane_g1

0xa9eb,	// (0x0004d445) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x00052075) cams2_slider_pane_g

0x1954,	// (0x000443ae) calc_display_pane_ParamLimits

0x197c,	// (0x000443d6) calc_paper_pane_ParamLimits

0x199f,	// (0x000443f9) grid_calc_pane_ParamLimits

0xa896,	// (0x0004d2f0) popup_clock_digital_window_t1_ParamLimits

0xd11c,	// (0x0004fb76) main_image_pane_t1

0x1936,	// (0x00044390) aid_size_cell_calc_ParamLimits

0x1936,	// (0x00044390) aid_size_cell_calc

0x436a,	// (0x00046dc4) popup_blid_sat_info2_window_ParamLimits

0x436a,	// (0x00046dc4) popup_blid_sat_info2_window

0xe484,	// (0x00050ede) aid_size_cell_blid

0xe48c,	// (0x00050ee6) bg_popup_window_pane_cp07

0xe4af,	// (0x00050f09) grid_popup_blid_pane

0xe4b9,	// (0x00050f13) heading_pane_cp05_ParamLimits

0xe4b9,	// (0x00050f13) heading_pane_cp05

0xe583,	// (0x00050fdd) cell_popup_blid_pane_ParamLimits

0xe583,	// (0x00050fdd) cell_popup_blid_pane

0xe5a7,	// (0x00051001) cell_popup_blid_pane_g1

0xe5af,	// (0x00051009) cell_popup_blid_pane_t1

0x4e3d,	// (0x00047897) mup2_indicator_pane_ParamLimits

0x4e3d,	// (0x00047897) mup2_indicator_pane

0xce8b,	// (0x0004f8e5) mup2_visualizer_osc_pane

0xe359,	// (0x00050db3) mup2_visualizer_spec_pane_ParamLimits

0xe359,	// (0x00050db3) mup2_visualizer_spec_pane

0x4fb8,	// (0x00047a12) mup2_spec_half_pane

0x4fc1,	// (0x00047a1b) mup2_spec_half_pane_cp

0x4fc9,	// (0x00047a23) mup2_spec_bar_pane_ParamLimits

0x4fc9,	// (0x00047a23) mup2_spec_bar_pane

0xe2fa,	// (0x00050d54) mup2_spec_bar_pane_g1

0xe304,	// (0x00050d5e) mup2_spec_bar_pane_g2

0x0001,

0x00ae,	// (0x00042b08) mup2_spec_bar_pane_g

0x4fe9,	// (0x00047a43) mup2_osc_middle_pane

0xe316,	// (0x00050d70) mup2_visualizer_osc_pane_g1

0xbc97,	// (0x0004e6f1) popup_number_entry_window_t1_ParamLimits

0xbcaa,	// (0x0004e704) popup_number_entry_window_t2_ParamLimits

0xbcbc,	// (0x0004e716) popup_number_entry_window_t3_ParamLimits

0x179e,	// (0x000441f8) popup_number_entry_window_t5_ParamLimits

0x179e,	// (0x000441f8) popup_number_entry_window_t5

0xf0d8,	// (0x00051b32) popup_number_entry_window_t_ParamLimits

0xbcce,	// (0x0004e728) text_title_cp2_ParamLimits

0xa8d5,	// (0x0004d32f) aid_hotspot_pointer_text2_pane

0xa8fb,	// (0x0004d355) main_viewer_pane_g9_ParamLimits

0xa8fb,	// (0x0004d355) main_viewer_pane_g9

0xc87d,	// (0x0004f2d7) cale_month_pane_t1_ParamLimits

0xc8ba,	// (0x0004f314) bg_cale_pane_ParamLimits

0xc8d2,	// (0x0004f32c) list_cale_pane_ParamLimits

0xc4e6,	// (0x0004ef40) listscroll_cale_day_pane_t1

0xc8e3,	// (0x0004f33d) scroll_pane_cp09_ParamLimits

0x37da,	// (0x00046234) main_mup_eq_pane_t1_ParamLimits

0x37da,	// (0x00046234) main_mup_eq_pane_t1

0x37f4,	// (0x0004624e) main_mup_eq_pane_t2_ParamLimits

0x37f4,	// (0x0004624e) main_mup_eq_pane_t2

0x380e,	// (0x00046268) main_mup_eq_pane_t3_ParamLimits

0x380e,	// (0x00046268) main_mup_eq_pane_t3

0x382a,	// (0x00046284) main_mup_eq_pane_t4_ParamLimits

0x382a,	// (0x00046284) main_mup_eq_pane_t4

0x3846,	// (0x000462a0) main_mup_eq_pane_t5_ParamLimits

0x3846,	// (0x000462a0) main_mup_eq_pane_t5

0x3862,	// (0x000462bc) main_mup_eq_pane_t6_ParamLimits

0x3862,	// (0x000462bc) main_mup_eq_pane_t6

0x3876,	// (0x000462d0) main_mup_eq_pane_t7_ParamLimits

0x3876,	// (0x000462d0) main_mup_eq_pane_t7

0x388a,	// (0x000462e4) main_mup_eq_pane_t8_ParamLimits

0x388a,	// (0x000462e4) main_mup_eq_pane_t8

0x389e,	// (0x000462f8) main_mup_eq_pane_t9_ParamLimits

0x389e,	// (0x000462f8) main_mup_eq_pane_t9

0x38b8,	// (0x00046312) main_mup_eq_pane_t10_ParamLimits

0x38b8,	// (0x00046312) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00051ebf) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00051ebf) main_mup_eq_pane_t

0x3967,	// (0x000463c1) mup_equalizer_pane_cp5_ParamLimits

0x397b,	// (0x000463d5) mup_equalizer_pane_cp6_ParamLimits

0x398f,	// (0x000463e9) mup_equalizer_pane_cp7_ParamLimits

0xa5bf,	// (0x0004d019) main_gallery_pane

0xe31f,	// (0x00050d79) smil2_volume_pane

0xe327,	// (0x00050d81) smil_status_volume_pane_g1_ParamLimits

0xe33a,	// (0x00050d94) smil_status_volume_pane_g2_ParamLimits

0xa946,	// (0x0004d3a0) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x00051ff4) smil_status_volume_pane_g_ParamLimits

0xe48c,	// (0x00050ee6) bg_popup_window_pane_cp07_ParamLimits

0xe49a,	// (0x00050ef4) blid_firmament_pane

0x4ff2,	// (0x00047a4c) aid_size_cell_gallery_ParamLimits

0x4ff2,	// (0x00047a4c) aid_size_cell_gallery

0x5008,	// (0x00047a62) grid_gallery_pane_ParamLimits

0x5008,	// (0x00047a62) grid_gallery_pane

0x5021,	// (0x00047a7b) cell_gallery_pane_ParamLimits

0x5021,	// (0x00047a7b) cell_gallery_pane

0xe5bd,	// (0x00051017) bg_cell_gallery_focus_pane_ParamLimits

0xe5bd,	// (0x00051017) bg_cell_gallery_focus_pane

0xe5cf,	// (0x00051029) cell_gallery_pane_g1_ParamLimits

0xe5cf,	// (0x00051029) cell_gallery_pane_g1

0x506a,	// (0x00047ac4) cell_gallery_pane_g2_ParamLimits

0x506a,	// (0x00047ac4) cell_gallery_pane_g2

0x5077,	// (0x00047ad1) cell_gallery_pane_g3_ParamLimits

0x5077,	// (0x00047ad1) cell_gallery_pane_g3

0xe5db,	// (0x00051035) cell_gallery_pane_g4_ParamLimits

0xe5db,	// (0x00051035) cell_gallery_pane_g4

0x0003,

0xf641,	// (0x0005209b) cell_gallery_pane_g_ParamLimits

0xf641,	// (0x0005209b) cell_gallery_pane_g

0xe5e7,	// (0x00051041) bg_cell_gallery_focus_pane_g1

0xe5ef,	// (0x00051049) bg_cell_gallery_focus_pane_g2

0xe608,	// (0x00051062) bg_cell_gallery_focus_pane_g3

0xe610,	// (0x0005106a) bg_cell_gallery_focus_pane_g4

0xe618,	// (0x00051072) bg_cell_gallery_focus_pane_g5

0xe620,	// (0x0005107a) bg_cell_gallery_focus_pane_g6

0xe628,	// (0x00051082) bg_cell_gallery_focus_pane_g7

0xe630,	// (0x0005108a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64a,	// (0x000520a4) bg_cell_gallery_focus_pane_g

0xe638,	// (0x00051092) aid_firma_cardinal

0xe64c,	// (0x000510a6) blid_firmament_pane_t1

0xe663,	// (0x000510bd) blid_firmament_pane_t2

0xe67a,	// (0x000510d4) blid_firmament_pane_t3

0xe691,	// (0x000510eb) blid_firmament_pane_t4

0x0003,

0x017b,	// (0x00042bd5) blid_firmament_pane_t

0xe6a8,	// (0x00051102) blid_sat_info_pane

0xe6b8,	// (0x00051112) blid_sat_info_pane_g1

0xe6b8,	// (0x00051112) blid_sat_info_pane_g2

0x0001,

0x0184,	// (0x00042bde) blid_sat_info_pane_g

0xe6c2,	// (0x0005111c) blid_sat_info_pane_t1

0xe6d0,	// (0x0005112a) smil2_volume_content_pane

0xe6d9,	// (0x00051133) smil2_volume_pane_g1

0xe5f7,	// (0x00051051) smil2_volume_content_pane_g1

0xe6e1,	// (0x0005113b) smil2_volume_content_pane_g2

0xe6ea,	// (0x00051144) smil2_volume_content_pane_g3

0xe6f3,	// (0x0005114d) smil2_volume_content_pane_g4

0xe6fc,	// (0x00051156) smil2_volume_content_pane_g5

0xe705,	// (0x0005115f) smil2_volume_content_pane_g6

0xe70e,	// (0x00051168) smil2_volume_content_pane_g7

0xe717,	// (0x00051171) smil2_volume_content_pane_g8

0xe720,	// (0x0005117a) smil2_volume_content_pane_g9

0xe729,	// (0x00051183) smil2_volume_content_pane_g10

0x0009,

0xf65b,	// (0x000520b5) smil2_volume_content_pane_g

0x1e45,	// (0x0004489f) cale_week_day_heading_pane_t1_ParamLimits

0x1e6f,	// (0x000448c9) cale_week_day_heading_pane_t2_ParamLimits

0x1e99,	// (0x000448f3) cale_week_day_heading_pane_t3_ParamLimits

0x1ec3,	// (0x0004491d) cale_week_day_heading_pane_t4_ParamLimits

0x1eed,	// (0x00044947) cale_week_day_heading_pane_t5_ParamLimits

0x1f17,	// (0x00044971) cale_week_day_heading_pane_t6_ParamLimits

0x1f43,	// (0x0004499d) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00051c37) cale_week_day_heading_pane_t_ParamLimits

0xc4f8,	// (0x0004ef52) bg_cale_side_pane_ParamLimits

0x1f6d,	// (0x000449c7) cale_week_time_pane_t1_ParamLimits

0x1f85,	// (0x000449df) cale_week_time_pane_t2_ParamLimits

0x1f9d,	// (0x000449f7) cale_week_time_pane_t3_ParamLimits

0x1fb5,	// (0x00044a0f) cale_week_time_pane_t4_ParamLimits

0x1fcd,	// (0x00044a27) cale_week_time_pane_t5_ParamLimits

0x1fe5,	// (0x00044a3f) cale_week_time_pane_t6_ParamLimits

0x1ffd,	// (0x00044a57) cale_week_time_pane_t7_ParamLimits

0x2015,	// (0x00044a6f) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00051c46) cale_week_time_pane_t_ParamLimits

0x202d,	// (0x00044a87) cell_cale_week_pane_g2_ParamLimits

0xc4f8,	// (0x0004ef52) bg_cale_side_pane_cp01_ParamLimits

0x2f49,	// (0x000459a3) cale_month_week_pane_t1_ParamLimits

0x2f60,	// (0x000459ba) cale_month_week_pane_t2_ParamLimits

0x2f77,	// (0x000459d1) cale_month_week_pane_t3_ParamLimits

0x2f8e,	// (0x000459e8) cale_month_week_pane_t4_ParamLimits

0x2fa5,	// (0x000459ff) cale_month_week_pane_t5_ParamLimits

0x2fbc,	// (0x00045a16) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00051d1f) cale_month_week_pane_t_ParamLimits

0xa79d,	// (0x0004d1f7) cell_cale_month_pane_g1_ParamLimits

0xa5bf,	// (0x0004d019) main_cale_event_viewer_pane

0xa5bf,	// (0x0004d019) listscroll_cale_event_viewer_pane

0xe732,	// (0x0005118c) list_cale_ev_pane

0xe73a,	// (0x00051194) scroll_pane_cp023

0xe746,	// (0x000511a0) field_cale_ev_pane_ParamLimits

0xe746,	// (0x000511a0) field_cale_ev_pane

0xe764,	// (0x000511be) field_cale_ev_content_pane_ParamLimits

0xe764,	// (0x000511be) field_cale_ev_content_pane

0xe770,	// (0x000511ca) field_cale_ev_pane_g1_ParamLimits

0xe770,	// (0x000511ca) field_cale_ev_pane_g1

0xe77c,	// (0x000511d6) field_cale_ev_pane_g2_ParamLimits

0xe77c,	// (0x000511d6) field_cale_ev_pane_g2

0xe794,	// (0x000511ee) field_cale_ev_pane_g3_ParamLimits

0xe794,	// (0x000511ee) field_cale_ev_pane_g3

0x0002,

0x019e,	// (0x00042bf8) field_cale_ev_pane_g_ParamLimits

0x019e,	// (0x00042bf8) field_cale_ev_pane_g

0xe7ac,	// (0x00051206) field_cale_ev_pane_t1_ParamLimits

0xe7ac,	// (0x00051206) field_cale_ev_pane_t1

0xe7c3,	// (0x0005121d) field_cale_ev_content_pane_t1_ParamLimits

0xe7c3,	// (0x0005121d) field_cale_ev_content_pane_t1

0xd002,	// (0x0004fa5c) bg_button_pane_cp01

0xc3b8,	// (0x0004ee12) listscroll_cale_week_pane_ParamLimits

0x1c61,	// (0x000446bb) popup_toolbar_window_cp01

0xc4e6,	// (0x0004ef40) listscroll_cale_week_pane_t1_ParamLimits

0xc3b8,	// (0x0004ee12) listscroll_cale_day_pane_ParamLimits

0x311f,	// (0x00045b79) popup_toolbar_window_cp02

0xc4e6,	// (0x0004ef40) listscroll_cale_day_pane_t1_ParamLimits

0xc3b8,	// (0x0004ee12) main_cale_month_pane_ParamLimits

0x459e,	// (0x00046ff8) popup_toolbar_window_cp03_ParamLimits

0x459e,	// (0x00046ff8) popup_toolbar_window_cp03

0x3c43,	// (0x0004669d) main_image_pane_g2_ParamLimits

0x3c43,	// (0x0004669d) main_image_pane_g2

0x3c54,	// (0x000466ae) main_image_pane_g3_ParamLimits

0x3c54,	// (0x000466ae) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00051f51) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00051f51) main_image_pane_g

0xd11c,	// (0x0004fb76) main_image_pane_t1_ParamLimits

0x3c65,	// (0x000466bf) main_image_pane_t2_ParamLimits

0x3c65,	// (0x000466bf) main_image_pane_t2

0x3c77,	// (0x000466d1) main_image_pane_t3_ParamLimits

0x3c77,	// (0x000466d1) main_image_pane_t3

0x3c9f,	// (0x000466f9) main_image_pane_t4_ParamLimits

0x3c9f,	// (0x000466f9) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00051f58) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00051f58) main_image_pane_t

0x3cbf,	// (0x00046719) popup_image_details_window_cp01

0x3cc9,	// (0x00046723) popup_toobar_trans_pane_cp01_ParamLimits

0x3cc9,	// (0x00046723) popup_toobar_trans_pane_cp01

0x4449,	// (0x00046ea3) popup_image_details_window_ParamLimits

0x4449,	// (0x00046ea3) popup_image_details_window

0xa919,	// (0x0004d373) popup_image_focus_window

0x4864,	// (0x000472be) camera2_autofocus_pane_ParamLimits

0x4864,	// (0x000472be) camera2_autofocus_pane

0xa5bf,	// (0x0004d019) bg_popup_sub_pane_cp06

0xe7e1,	// (0x0005123b) popup_image_focus_window_g1

0xe7e9,	// (0x00051243) popup_image_focus_window_g2

0xe7f1,	// (0x0005124b) popup_image_focus_window_g3

0xe7f9,	// (0x00051253) popup_image_focus_window_g4

0x0003,

0x01a5,	// (0x00042bff) popup_image_focus_window_g

0xe801,	// (0x0005125b) popup_image_focus_window_t1

0xe80f,	// (0x00051269) popup_image_focus_window_t2

0xe81f,	// (0x00051279) popup_image_focus_window_t3

0x0002,

0x01ae,	// (0x00042c08) popup_image_focus_window_t

0xe82d,	// (0x00051287) camera2_autofocus_pane_g1

0xdcdd,	// (0x00050737) bg_tb_trans_pane_cp01

0xe83b,	// (0x00051295) popup_image_details_window_g1

0xe84e,	// (0x000512a8) popup_image_details_window_g2

0x0002,

0x01c0,	// (0x00042c1a) popup_image_details_window_g

0xe877,	// (0x000512d1) popup_image_details_window_t1

0xe889,	// (0x000512e3) popup_image_details_window_t2

0xe8a2,	// (0x000512fc) popup_image_details_window_t3

0xe8b6,	// (0x00051310) popup_image_details_window_t4

0xe8d1,	// (0x0005132b) popup_image_details_window_t5

0x0004,

0x01c7,	// (0x00042c21) popup_image_details_window_t

0xc3a4,	// (0x0004edfe) bg_calc_paper_pane_ParamLimits

0xa5bf,	// (0x0004d019) grid_highlight_pane_cp013

0xa63f,	// (0x0004d099) list_calc_pane_ParamLimits

0xa651,	// (0x0004d0ab) scroll_pane_cp024

0xc3b8,	// (0x0004ee12) bg_calc_display_pane_ParamLimits

0x1a9d,	// (0x000444f7) calc_display_pane_t1_ParamLimits

0x1aaf,	// (0x00044509) calc_display_pane_t2_ParamLimits

0xa659,	// (0x0004d0b3) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00051bb9) calc_display_pane_t_ParamLimits

0x1b6c,	// (0x000445c6) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00051bd6) cell_calc_pane_g

0x1b75,	// (0x000445cf) cell_calc_pane_t1

0xc417,	// (0x0004ee71) grid_highlight_pane_cp02_ParamLimits

0xc42d,	// (0x0004ee87) toolbar_button_pane_cp01_ParamLimits

0xc42d,	// (0x0004ee87) toolbar_button_pane_cp01

0xd161,	// (0x0004fbbb) temp_image_control_pane_ParamLimits

0xd161,	// (0x0004fbbb) temp_image_control_pane

0xdcdd,	// (0x00050737) main_mp3_pane

0xe8eb,	// (0x00051345) temp_image_control_pane_g1_ParamLimits

0xe8eb,	// (0x00051345) temp_image_control_pane_g1

0xe8f9,	// (0x00051353) temp_image_control_pane_g2_ParamLimits

0xe8f9,	// (0x00051353) temp_image_control_pane_g2

0xe90b,	// (0x00051365) temp_image_control_pane_g3_ParamLimits

0xe90b,	// (0x00051365) temp_image_control_pane_g3

0x50b4,	// (0x00047b0e) temp_image_control_pane_g4_ParamLimits

0x50b4,	// (0x00047b0e) temp_image_control_pane_g4

0x0003,

0xf67b,	// (0x000520d5) temp_image_control_pane_g_ParamLimits

0xf67b,	// (0x000520d5) temp_image_control_pane_g

0xe8eb,	// (0x00051345) main_mp3_pane_g1

0x50c7,	// (0x00047b21) main_mp3_pane_g2

0x0007,

0xf684,	// (0x000520de) main_mp3_pane_g

0xe94e,	// (0x000513a8) main_mp3_pane_t1

0xc55d,	// (0x0004efb7) main_camera_pane_g8_ParamLimits

0xc55d,	// (0x0004efb7) main_camera_pane_g8

0x2340,	// (0x00044d9a) main_video_pane_g7_ParamLimits

0x2340,	// (0x00044d9a) main_video_pane_g7

0xa986,	// (0x0004d3e0) main_camera2_pane_t7_ParamLimits

0xa986,	// (0x0004d3e0) main_camera2_pane_t7

0xc6a5,	// (0x0004f0ff) scroll_pane_cp025_ParamLimits

0xc6a5,	// (0x0004f0ff) scroll_pane_cp025

0xc6b9,	// (0x0004f113) scroll_pane_cp026_ParamLimits

0xc6b9,	// (0x0004f113) scroll_pane_cp026

0xc6c8,	// (0x0004f122) wml_content_pane_ParamLimits

0xa5bf,	// (0x0004d019) main_touch_calib_pane

0x5191,	// (0x00047beb) main_touch_calib_pane_g1

0x519d,	// (0x00047bf7) main_touch_calib_pane_g2

0x51a9,	// (0x00047c03) main_touch_calib_pane_g3

0x51b5,	// (0x00047c0f) main_touch_calib_pane_g4

0x0003,

0xf6a2,	// (0x000520fc) main_touch_calib_pane_g

0x51c1,	// (0x00047c1b) main_touch_calib_pane_t1

0x51db,	// (0x00047c35) main_touch_calib_pane_t2

0x0004,

0xf6ab,	// (0x00052105) main_touch_calib_pane_t

0xcdcc,	// (0x0004f826) mup_progress_pane_cp02

0xcdeb,	// (0x0004f845) navi_pane_g1

0xce4d,	// (0x0004f8a7) navi_pane_mp_t3

0xdcdd,	// (0x00050737) main_mp3_pane_ParamLimits

0x45dc,	// (0x00047036) navi_pane_ParamLimits

0xe8eb,	// (0x00051345) main_mp3_pane_g1_ParamLimits

0x50c7,	// (0x00047b21) main_mp3_pane_g2_ParamLimits

0x50d5,	// (0x00047b2f) main_mp3_pane_g3_ParamLimits

0x50d5,	// (0x00047b2f) main_mp3_pane_g3

0x50e3,	// (0x00047b3d) main_mp3_pane_g4_ParamLimits

0x50e3,	// (0x00047b3d) main_mp3_pane_g4

0xe91b,	// (0x00051375) main_mp3_pane_g5_ParamLimits

0xe91b,	// (0x00051375) main_mp3_pane_g5

0xe929,	// (0x00051383) main_mp3_pane_g6_ParamLimits

0xe929,	// (0x00051383) main_mp3_pane_g6

0xe936,	// (0x00051390) main_mp3_pane_g7_ParamLimits

0xe936,	// (0x00051390) main_mp3_pane_g7

0xe942,	// (0x0005139c) main_mp3_pane_g8_ParamLimits

0xe942,	// (0x0005139c) main_mp3_pane_g8

0xf684,	// (0x000520de) main_mp3_pane_g_ParamLimits

0x50ef,	// (0x00047b49) main_mp3_pane_t2

0x50fd,	// (0x00047b57) main_mp3_pane_t3

0xe95c,	// (0x000513b6) main_mp3_pane_t4

0xe96a,	// (0x000513c4) main_mp3_pane_t5

0x0005,

0xf695,	// (0x000520ef) main_mp3_pane_t

0xe978,	// (0x000513d2) mup_progress_pane_cp01

0xa5ed,	// (0x0004d047) aid_zoom_text_secondary2

0xe732,	// (0x0005118c) list_cale_ev2_pane

0xe73a,	// (0x00051194) scroll_pane_cp023_ParamLimits

0x5231,	// (0x00047c8b) field_cale_ev2_pane_ParamLimits

0x5231,	// (0x00047c8b) field_cale_ev2_pane

0xaa05,	// (0x0004d45f) field_cale_ev2_pane_g1_ParamLimits

0xaa05,	// (0x0004d45f) field_cale_ev2_pane_g1

0xaa11,	// (0x0004d46b) field_cale_ev2_pane_g2_ParamLimits

0xaa11,	// (0x0004d46b) field_cale_ev2_pane_g2

0xaa29,	// (0x0004d483) field_cale_ev2_pane_g3_ParamLimits

0xaa29,	// (0x0004d483) field_cale_ev2_pane_g3

0x0003,

0xf6b6,	// (0x00052110) field_cale_ev2_pane_g_ParamLimits

0xf6b6,	// (0x00052110) field_cale_ev2_pane_g

0x0b8e,	// (0x000435e8) field_cale_ev2_pane_t1_ParamLimits

0x0b8e,	// (0x000435e8) field_cale_ev2_pane_t1

0x0ba5,	// (0x000435ff) field_cale_ev2_pane_t2_ParamLimits

0x0ba5,	// (0x000435ff) field_cale_ev2_pane_t2

0x0001,

0xf6bf,	// (0x00052119) field_cale_ev2_pane_t_ParamLimits

0xf6bf,	// (0x00052119) field_cale_ev2_pane_t

0x3af8,	// (0x00046552) main_postcard_pane_g5_ParamLimits

0x3af8,	// (0x00046552) main_postcard_pane_g5

0x3b0e,	// (0x00046568) main_postcard_pane_g6_ParamLimits

0x3b0e,	// (0x00046568) main_postcard_pane_g6

0x2104,	// (0x00044b5e) camera2_autofocus_pane_cp_ParamLimits

0x2104,	// (0x00044b5e) camera2_autofocus_pane_cp

0xdcdd,	// (0x00050737) main_mup3_pane

0x5271,	// (0x00047ccb) main_mup3_pane_g1_ParamLimits

0x5271,	// (0x00047ccb) main_mup3_pane_g1

0x5293,	// (0x00047ced) main_mup3_pane_g2_ParamLimits

0x5293,	// (0x00047ced) main_mup3_pane_g2

0x5311,	// (0x00047d6b) main_mup3_pane_g3_ParamLimits

0x5311,	// (0x00047d6b) main_mup3_pane_g3

0x5357,	// (0x00047db1) main_mup3_pane_g4_ParamLimits

0x5357,	// (0x00047db1) main_mup3_pane_g4

0x539d,	// (0x00047df7) main_mup3_pane_g5_ParamLimits

0x539d,	// (0x00047df7) main_mup3_pane_g5

0x53e3,	// (0x00047e3d) main_mup3_pane_g6_ParamLimits

0x53e3,	// (0x00047e3d) main_mup3_pane_g6

0xe980,	// (0x000513da) main_mup3_pane_g7_ParamLimits

0xe980,	// (0x000513da) main_mup3_pane_g7

0x0007,

0xf6cf,	// (0x00052129) main_mup3_pane_g_ParamLimits

0xf6cf,	// (0x00052129) main_mup3_pane_g

0x5461,	// (0x00047ebb) main_mup3_pane_t1_ParamLimits

0x5461,	// (0x00047ebb) main_mup3_pane_t1

0x54d5,	// (0x00047f2f) main_mup3_pane_t2_ParamLimits

0x54d5,	// (0x00047f2f) main_mup3_pane_t2

0x55a9,	// (0x00048003) main_mup3_pane_t4_ParamLimits

0x55a9,	// (0x00048003) main_mup3_pane_t4

0x55ff,	// (0x00048059) main_mup3_pane_t5_ParamLimits

0x55ff,	// (0x00048059) main_mup3_pane_t5

0x56bb,	// (0x00048115) main_mup3_pane_t6_ParamLimits

0x56bb,	// (0x00048115) main_mup3_pane_t6

0x0005,

0xf6e0,	// (0x0005213a) main_mup3_pane_t_ParamLimits

0xf6e0,	// (0x0005213a) main_mup3_pane_t

0x5773,	// (0x000481cd) mup3_progress_pane_ParamLimits

0x5773,	// (0x000481cd) mup3_progress_pane

0x5809,	// (0x00048263) popup_mup3_control_window_ParamLimits

0x5809,	// (0x00048263) popup_mup3_control_window

0xe98e,	// (0x000513e8) popup_mup3_text_window

0x583b,	// (0x00048295) mup3_progress_pane_t1

0x585a,	// (0x000482b4) mup3_progress_pane_t2

0xe996,	// (0x000513f0) mup3_progress_pane_t3

0x0002,

0xf6ed,	// (0x00052147) mup3_progress_pane_t

0xe9b3,	// (0x0005140d) mup_progress_pane_cp03

0xa5bf,	// (0x0004d019) bg_tb_trans_pane_cp04

0x5879,	// (0x000482d3) mup3_volume_pane

0x5881,	// (0x000482db) popup_mup3_control_window_g1

0x588a,	// (0x000482e4) mup3_volume_pane_g1

0x5893,	// (0x000482ed) mup3_volume_pane_g2

0x589c,	// (0x000482f6) mup3_volume_pane_g3

0x0002,

0xf6f4,	// (0x0005214e) mup3_volume_pane_g

0xa5bf,	// (0x0004d019) bg_tb_trans_pane_cp03

0xe9c3,	// (0x0005141d) popup_mup3_text_window_g1

0xe9cb,	// (0x00051425) popup_mup3_text_window_t1

0xc400,	// (0x0004ee5a) list_calc_item_pane_g1_ParamLimits

0xe3fa,	// (0x00050e54) mup_volume_pane_cp_g1

0x51f5,	// (0x00047c4f) main_touch_calib_pane_t3

0x5209,	// (0x00047c63) main_touch_calib_pane_t4

0x521d,	// (0x00047c77) main_touch_calib_pane_t5

0xa5c9,	// (0x0004d023) aid_cell_size_toolbar2

0xa5d1,	// (0x0004d02b) aid_popup3_width_pane

0xa5dd,	// (0x0004d037) aid_zoom_text_msg_primary

0x20db,	// (0x00044b35) vorec_t7

0xc3c4,	// (0x0004ee1e) bg_calc_paper_pane_g1_ParamLimits

0xc3d0,	// (0x0004ee2a) bg_calc_paper_pane_g2_ParamLimits

0xc3dc,	// (0x0004ee36) bg_calc_paper_pane_g3_ParamLimits

0xc3e8,	// (0x0004ee42) bg_calc_paper_pane_g4_ParamLimits

0xc3f4,	// (0x0004ee4e) bg_calc_paper_pane_g5_ParamLimits

0x1af6,	// (0x00044550) bg_calc_paper_pane_g6_ParamLimits

0x1b05,	// (0x0004455f) bg_calc_paper_pane_g7_ParamLimits

0x1b14,	// (0x0004456e) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00051bc0) bg_calc_paper_pane_g_ParamLimits

0x1b27,	// (0x00044581) calc_bg_paper_pane_g9_ParamLimits

0x2252,	// (0x00044cac) image_qvga_pane_ParamLimits

0x2252,	// (0x00044cac) image_qvga_pane

0xc2e5,	// (0x0004ed3f) bg_popup_sub_pane_cp04_ParamLimits

0xd098,	// (0x0004faf2) popup_mup_playback_window_g1_ParamLimits

0xd0a4,	// (0x0004fafe) popup_mup_playback_window_t1_ParamLimits

0xd0b9,	// (0x0004fb13) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00051f4c) popup_mup_playback_window_t_ParamLimits

0x4d57,	// (0x000477b1) main_mup2_pane_g3_ParamLimits

0x4d57,	// (0x000477b1) main_mup2_pane_g3

0x2550,	// (0x00044faa) popup_toolbar_window_cp04

0xd49b,	// (0x0004fef5) popup_call2_audio_second_window_g3_ParamLimits

0xd49b,	// (0x0004fef5) popup_call2_audio_second_window_g3

0xd8a5,	// (0x000502ff) popup_call2_audio_first_window_g4_ParamLimits

0xd8a5,	// (0x000502ff) popup_call2_audio_first_window_g4

0xdf3e,	// (0x00050998) popup_call2_audio_in_window_g4_ParamLimits

0xdf3e,	// (0x00050998) popup_call2_audio_in_window_g4

0x3c25,	// (0x0004667f) aid_area_sk_bg_cut_ParamLimits

0x3c25,	// (0x0004667f) aid_area_sk_bg_cut

0xd0ce,	// (0x0004fb28) aid_area_sk_bg_cut_2_ParamLimits

0xd0ce,	// (0x0004fb28) aid_area_sk_bg_cut_2

0x505a,	// (0x00047ab4) aid_placing_details_win

0x5062,	// (0x00047abc) aid_placing_details_win_2

0xe82d,	// (0x00051287) camera2_autofocus_pane_g1_ParamLimits

0x16eb,	// (0x00044145) popup_fixed_preview_cale_window_ParamLimits

0x16eb,	// (0x00044145) popup_fixed_preview_cale_window

0xce9c,	// (0x0004f8f6) navi_slider_pane_g3

0xcea5,	// (0x0004f8ff) navi_slider_pane_g4

0xceae,	// (0x0004f908) navi_slider_pane_g5

0xce9c,	// (0x0004f8f6) navi_slider_pane_g6

0xa8bc,	// (0x0004d316) navi_slider_pane_g7

0xcfcf,	// (0x0004fa29) mup_scale_pane_g3

0xcfd8,	// (0x0004fa32) mup_scale_pane_g4

0xcfe1,	// (0x0004fa3b) mup_scale_pane_g5

0x39a3,	// (0x000463fd) mup_scale_pane_g6

0x39ac,	// (0x00046406) mup_scale_pane_g7

0xce9c,	// (0x0004f8f6) cams2_slider_pane_g3

0xe47c,	// (0x00050ed6) cams2_slider_pane_g4

0xa9f4,	// (0x0004d44e) cams2_slider_pane_g5

0xce9c,	// (0x0004f8f6) cams2_slider_pane_g6

0xa9fc,	// (0x0004d456) cams2_slider_pane_g7

0xe6b8,	// (0x00051112) camera2_autofocus_pane_cp_g1

0xe9d9,	// (0x00051433) bg_popup_preview_window_pane_cp02_ParamLimits

0xe9d9,	// (0x00051433) bg_popup_preview_window_pane_cp02

0xe9e5,	// (0x0005143f) list_fp_cale_pane_ParamLimits

0xe9e5,	// (0x0005143f) list_fp_cale_pane

0xe9f1,	// (0x0005144b) popup_fixed_preview_cale_window_t1_ParamLimits

0xe9f1,	// (0x0005144b) popup_fixed_preview_cale_window_t1

0x58a5,	// (0x000482ff) popup_fixed_preview_cale_window_t2_ParamLimits

0x58a5,	// (0x000482ff) popup_fixed_preview_cale_window_t2

0x58ba,	// (0x00048314) popup_fixed_preview_cale_window_t3_ParamLimits

0x58ba,	// (0x00048314) popup_fixed_preview_cale_window_t3

0x0002,

0xf6fb,	// (0x00052155) popup_fixed_preview_cale_window_t_ParamLimits

0xf6fb,	// (0x00052155) popup_fixed_preview_cale_window_t

0x58cf,	// (0x00048329) list_single_fp_cale_pane_ParamLimits

0x58cf,	// (0x00048329) list_single_fp_cale_pane

0xea0f,	// (0x00051469) list_single_fp_cale_pane_g1_ParamLimits

0xea0f,	// (0x00051469) list_single_fp_cale_pane_g1

0xea1b,	// (0x00051475) list_single_fp_cale_pane_g2_ParamLimits

0xea1b,	// (0x00051475) list_single_fp_cale_pane_g2

0x0002,

0x0259,	// (0x00042cb3) list_single_fp_cale_pane_g_ParamLimits

0x0259,	// (0x00042cb3) list_single_fp_cale_pane_g

0xea34,	// (0x0005148e) list_single_fp_cale_pane_t1_ParamLimits

0xea34,	// (0x0005148e) list_single_fp_cale_pane_t1

0xea46,	// (0x000514a0) list_single_fp_cale_pane_t2_ParamLimits

0xea46,	// (0x000514a0) list_single_fp_cale_pane_t2

0x0001,

0x0260,	// (0x00042cba) list_single_fp_cale_pane_t_ParamLimits

0x0260,	// (0x00042cba) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa5bf,	// (0x0004d019) main_dialer_pane

0x58e4,	// (0x0004833e) aid_cell_size_keypad

0x58ee,	// (0x00048348) dialer_ne_pane

0x58f6,	// (0x00048350) grid_dialer_command_1_pane

0x58fe,	// (0x00048358) grid_dialer_command_2_pane

0x5906,	// (0x00048360) grid_dialer_keypad_pane

0x5918,	// (0x00048372) bg_popup_call_pane_cp06_ParamLimits

0x5918,	// (0x00048372) bg_popup_call_pane_cp06

0x5924,	// (0x0004837e) dialer_ne_clear_pane_ParamLimits

0x5924,	// (0x0004837e) dialer_ne_clear_pane

0xea79,	// (0x000514d3) dialer_ne_pane_g1

0xea81,	// (0x000514db) dialer_ne_pane_t1_ParamLimits

0xea81,	// (0x000514db) dialer_ne_pane_t1

0x5930,	// (0x0004838a) dialer_ne_pane_t2_ParamLimits

0x5930,	// (0x0004838a) dialer_ne_pane_t2

0x595a,	// (0x000483b4) dialer_ne_pane_t3_ParamLimits

0x595a,	// (0x000483b4) dialer_ne_pane_t3

0x0002,

0xf702,	// (0x0005215c) dialer_ne_pane_t_ParamLimits

0xf702,	// (0x0005215c) dialer_ne_pane_t

0x598a,	// (0x000483e4) dialer_ne_pane_t3_copy1_ParamLimits

0x598a,	// (0x000483e4) dialer_ne_pane_t3_copy1

0x59b9,	// (0x00048413) cell_dialer_keypad_pane_ParamLimits

0x59b9,	// (0x00048413) cell_dialer_keypad_pane

0x59d0,	// (0x0004842a) cell_dialer_command_1_pane_ParamLimits

0x59d0,	// (0x0004842a) cell_dialer_command_1_pane

0x59e6,	// (0x00048440) cell_dialer_command_2_pane_ParamLimits

0x59e6,	// (0x00048440) cell_dialer_command_2_pane

0xea93,	// (0x000514ed) bg_button_pane_cp02_ParamLimits

0xea93,	// (0x000514ed) bg_button_pane_cp02

0x59f5,	// (0x0004844f) cell_dialer_keypad_pane_g1_ParamLimits

0x59f5,	// (0x0004844f) cell_dialer_keypad_pane_g1

0xea93,	// (0x000514ed) bg_button_pane_cp03_ParamLimits

0xea93,	// (0x000514ed) bg_button_pane_cp03

0x5a09,	// (0x00048463) cell_dialer_command_1_pane_g1_ParamLimits

0x5a09,	// (0x00048463) cell_dialer_command_1_pane_g1

0xea9f,	// (0x000514f9) bg_button_pane_cp04

0x5a1d,	// (0x00048477) cell_dialer_command_2_pane_g1

0xce8b,	// (0x0004f8e5) bg_button_pane_cp06

0xeaa7,	// (0x00051501) dialer_ne_clear_pane_g1

0x34e7,	// (0x00045f41) navi_pane_g2

0x3515,	// (0x00045f6f) navi_pane_g3

0x0002,

0xf3f5,	// (0x00051e4f) navi_pane_g

0x353e,	// (0x00045f98) navi_pane_mv_g2

0x3565,	// (0x00045fbf) navi_pane_mv_g5

0x356d,	// (0x00045fc7) navi_pane_mv_t1

0xc3b8,	// (0x0004ee12) main_clock2_pane

0x5a55,	// (0x000484af) main_clock2_list_pane_ParamLimits

0x5a55,	// (0x000484af) main_clock2_list_pane

0x5a8d,	// (0x000484e7) main_clock2_pane_t1_ParamLimits

0x5a8d,	// (0x000484e7) main_clock2_pane_t1

0x5ac9,	// (0x00048523) main_clock2_pane_t2_ParamLimits

0x5ac9,	// (0x00048523) main_clock2_pane_t2

0x0004,

0xf709,	// (0x00052163) main_clock2_pane_t_ParamLimits

0xf709,	// (0x00052163) main_clock2_pane_t

0x5b66,	// (0x000485c0) popup_clock_analogue_window_cp03_ParamLimits

0x5b66,	// (0x000485c0) popup_clock_analogue_window_cp03

0x5b8b,	// (0x000485e5) popup_clock_digital_window_cp02_ParamLimits

0x5b8b,	// (0x000485e5) popup_clock_digital_window_cp02

0x5bfc,	// (0x00048656) main_clock2_list_single_pane_ParamLimits

0x5bfc,	// (0x00048656) main_clock2_list_single_pane

0xce8b,	// (0x0004f8e5) list_highlight_pane_cp05

0xeaaf,	// (0x00051509) main_clock2_list_single_pane_t1

0x2550,	// (0x00044faa) popup_toolbar_window_cp04_ParamLimits

0x5084,	// (0x00047ade) camera2_autofocus_pane_g2_ParamLimits

0x5084,	// (0x00047ade) camera2_autofocus_pane_g2

0x5090,	// (0x00047aea) camera2_autofocus_pane_g3_ParamLimits

0x5090,	// (0x00047aea) camera2_autofocus_pane_g3

0x509c,	// (0x00047af6) camera2_autofocus_pane_g4_ParamLimits

0x509c,	// (0x00047af6) camera2_autofocus_pane_g4

0x50a8,	// (0x00047b02) camera2_autofocus_pane_g5_ParamLimits

0x50a8,	// (0x00047b02) camera2_autofocus_pane_g5

0x0004,

0xf670,	// (0x000520ca) camera2_autofocus_pane_g_ParamLimits

0xf670,	// (0x000520ca) camera2_autofocus_pane_g

0x5251,	// (0x00047cab) camera2_autofocus_pane_cp_g2

0x5259,	// (0x00047cb3) camera2_autofocus_pane_cp_g3

0x5261,	// (0x00047cbb) camera2_autofocus_pane_cp_g4

0x5269,	// (0x00047cc3) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c4,	// (0x0005211e) camera2_autofocus_pane_cp_g

0x5910,	// (0x0004836a) popup_dialer_spcha_window

0xa5bf,	// (0x0004d019) bg_popup_sub_pane_cp07

0xeabd,	// (0x00051517) list_spcha_pane

0xeac5,	// (0x0005151f) list_single_spcha_pane_ParamLimits

0xeac5,	// (0x0005151f) list_single_spcha_pane

0xa5bf,	// (0x0004d019) list_highlight_pane_cp06

0xead6,	// (0x00051530) list_single_spcha_pane_t1

0xdcce,	// (0x00050728) popup_call2_audio_out_window_g4_ParamLimits

0xdcce,	// (0x00050728) popup_call2_audio_out_window_g4

0xa5bf,	// (0x0004d019) main_imed2_pane

0xa921,	// (0x0004d37b) popup_imed_adjust2_window

0x4461,	// (0x00046ebb) popup_imed_trans_window_ParamLimits

0x4461,	// (0x00046ebb) popup_imed_trans_window

0xe4e5,	// (0x00050f3f) popup_blid_sat_info2_window_t1

0xe4f3,	// (0x00050f4d) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x00052084) popup_blid_sat_info2_window_t

0x5ca6,	// (0x00048700) aid_size_cell_colour_35

0x5cc6,	// (0x00048720) aid_size_cell_colour_112

0x5ce6,	// (0x00048740) aid_size_cell_effect

0xe29f,	// (0x00050cf9) bg_tb_trans_pane_cp02

0xc9da,	// (0x0004f434) heading_imed_pane

0x5d06,	// (0x00048760) listscroll_imed_pane

0xeae4,	// (0x0005153e) heading_imed_pane_g1

0xeaec,	// (0x00051546) heading_imed_pane_t1

0xeafa,	// (0x00051554) grid_imed_colour_35_pane_ParamLimits

0xeafa,	// (0x00051554) grid_imed_colour_35_pane

0x5d12,	// (0x0004876c) grid_imed_effect_pane

0xeb11,	// (0x0005156b) list_imed_aspect_pane

0x5d28,	// (0x00048782) scroll_pane_cp027_ParamLimits

0x5d28,	// (0x00048782) scroll_pane_cp027

0x5d39,	// (0x00048793) cell_imed_effect_pane_ParamLimits

0x5d39,	// (0x00048793) cell_imed_effect_pane

0xeb19,	// (0x00051573) cell_imed_colour_pane_ParamLimits

0xeb19,	// (0x00051573) cell_imed_colour_pane

0xeb5b,	// (0x000515b5) cell_imed_colour_pane_g1_ParamLimits

0xeb5b,	// (0x000515b5) cell_imed_colour_pane_g1

0xeb6c,	// (0x000515c6) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb6c,	// (0x000515c6) hgihlgiht_grid_pane_cp016

0x5d60,	// (0x000487ba) cell_imed_effect_pane_g1

0x5d68,	// (0x000487c2) grid_highlight_pane_cp017

0xeb7d,	// (0x000515d7) list_imed_single_pane_ParamLimits

0xeb7d,	// (0x000515d7) list_imed_single_pane

0xa5bf,	// (0x0004d019) list_highlight_pane_cp07

0xeb92,	// (0x000515ec) list_imed_aspect_pane_comp1_t1

0xe29f,	// (0x00050cf9) bg_tb_trans_pane_cp05

0xebb4,	// (0x0005160e) popup_imed_adjust2_window_g1

0xebdb,	// (0x00051635) popup_imed_adjust2_window_t1

0xebf3,	// (0x0005164d) slider_imed_adjust_pane

0xec07,	// (0x00051661) slider_imed_adjust_pane_g1

0xec17,	// (0x00051671) slider_imed_adjust_pane_g2

0xec27,	// (0x00051681) slider_imed_adjust_pane_g3

0xec38,	// (0x00051692) slider_imed_adjust_pane_g4

0x0003,

0x0289,	// (0x00042ce3) slider_imed_adjust_pane_g

0x5d71,	// (0x000487cb) aid_size_cell_clipart2

0x5d7d,	// (0x000487d7) grid_imed_clipart_pane

0xec49,	// (0x000516a3) scroll_pane_cp031

0x5d87,	// (0x000487e1) cell_imed_clipart_pane_ParamLimits

0x5d87,	// (0x000487e1) cell_imed_clipart_pane

0x5da9,	// (0x00048803) cell_imed_clipart_pane_g1

0xa5bf,	// (0x0004d019) grid_highlight_pane_cp014

0x5a6a,	// (0x000484c4) main_clock2_pane_g1_ParamLimits

0x5a6a,	// (0x000484c4) main_clock2_pane_g1

0x5ba7,	// (0x00048601) aid_call2_pane_cp10

0x5bb9,	// (0x00048613) aid_call_pane_cp10

0xcdc0,	// (0x0004f81a) popup_clock_analogue_window_cp10_g1

0xcdc0,	// (0x0004f81a) popup_clock_analogue_window_cp10_g2

0x5bcb,	// (0x00048625) popup_clock_analogue_window_cp10_g3

0x5bcb,	// (0x00048625) popup_clock_analogue_window_cp10_g4

0xcdc0,	// (0x0004f81a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf714,	// (0x0005216e) popup_clock_analogue_window_cp10_g

0x5bdd,	// (0x00048637) popup_clock_analogue_window_cp10_t1

0x5c0e,	// (0x00048668) clock_digital_number_pane_cp10_ParamLimits

0x5c0e,	// (0x00048668) clock_digital_number_pane_cp10

0x5c26,	// (0x00048680) clock_digital_number_pane_cp11_ParamLimits

0x5c26,	// (0x00048680) clock_digital_number_pane_cp11

0x5c3e,	// (0x00048698) clock_digital_number_pane_cp12_ParamLimits

0x5c3e,	// (0x00048698) clock_digital_number_pane_cp12

0x5c56,	// (0x000486b0) clock_digital_number_pane_cp13_ParamLimits

0x5c56,	// (0x000486b0) clock_digital_number_pane_cp13

0x5c6e,	// (0x000486c8) clock_digital_separator_pane_cp10_ParamLimits

0x5c6e,	// (0x000486c8) clock_digital_separator_pane_cp10

0x5c86,	// (0x000486e0) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c86,	// (0x000486e0) popup_clock_digital_window_cp02_t1

0xc2dd,	// (0x0004ed37) clock_digital_number_pane_cp10_g1

0xc2dd,	// (0x0004ed37) clock_digital_number_pane_cp10_g2

0x0001,

0x0292,	// (0x00042cec) clock_digital_number_pane_cp10_g

0xc2dd,	// (0x0004ed37) clock_digital_separator_pane_cp10_g1

0xc2dd,	// (0x0004ed37) clock_digital_separator_pane_g2_cp10

0xce5b,	// (0x0004f8b5) navi_pane_vded_g4

0xce64,	// (0x0004f8be) navi_pane_vded_g5

0xce6d,	// (0x0004f8c7) navi_pane_vded_t1

0xa5bf,	// (0x0004d019) main_vded_pane

0x5db2,	// (0x0004880c) main_vded_pane_g1

0x5dbc,	// (0x00048816) main_vded_pane_g2

0x5dc6,	// (0x00048820) main_vded_pane_g3

0x0002,

0xf71f,	// (0x00052179) main_vded_pane_g

0x5dd0,	// (0x0004882a) main_vded_pane_t1

0x5dde,	// (0x00048838) main_vded_pane_t2

0x0001,

0xf726,	// (0x00052180) main_vded_pane_t

0x5dec,	// (0x00048846) vded_slider_pane

0x5df4,	// (0x0004884e) vded_video_pane

0xec51,	// (0x000516ab) vded_video_pane_g1

0x5dfc,	// (0x00048856) vded_video_pane_g2

0xe6b8,	// (0x00051112) vded_video_pane_g3

0x0002,

0xf72b,	// (0x00052185) vded_video_pane_g

0xec5b,	// (0x000516b5) vded_slider_pane_g1

0xe3fa,	// (0x00050e54) vded_slider_pane_g2

0xec64,	// (0x000516be) vded_slider_pane_g3

0xec6d,	// (0x000516c7) vded_slider_pane_g4

0xec76,	// (0x000516d0) vded_slider_pane_g5

0x0004,

0x02aa,	// (0x00042d04) vded_slider_pane_g

0x57f1,	// (0x0004824b) mup3_rocker_pane_ParamLimits

0x57f1,	// (0x0004824b) mup3_rocker_pane

0x5e05,	// (0x0004885f) mup3_control_keys_pane_g1

0x5e0d,	// (0x00048867) mup3_control_keys_pane_g2

0x5e15,	// (0x0004886f) mup3_control_keys_pane_g3

0x5e1d,	// (0x00048877) mup3_control_keys_pane_g4

0x0003,

0xf732,	// (0x0005218c) mup3_control_keys_pane_g

0x1722,	// (0x0004417c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1722,	// (0x0004417c) popup_toolbar2_fixed_window_cp01

0x5825,	// (0x0004827f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5825,	// (0x0004827f) popup_toolbar2_fixed_window_cp02

0xd60d,	// (0x00050067) popup_call2_audio_second_window_t4_ParamLimits

0xd60d,	// (0x00050067) popup_call2_audio_second_window_t4

0xdb3b,	// (0x00050595) popup_call2_audio_first_window_t6_ParamLimits

0xdb3b,	// (0x00050595) popup_call2_audio_first_window_t6

0xddeb,	// (0x00050845) popup_call2_audio_out_window_t6_ParamLimits

0xddeb,	// (0x00050845) popup_call2_audio_out_window_t6

0xa5bf,	// (0x0004d019) main_vitu_pane

0x5e2d,	// (0x00048887) aid_size_cell_itu_ParamLimits

0x5e2d,	// (0x00048887) aid_size_cell_itu

0xdcdd,	// (0x00050737) bg_popup_window_pane_cp08_ParamLimits

0xdcdd,	// (0x00050737) bg_popup_window_pane_cp08

0x5e43,	// (0x0004889d) field_vitu_entry_pane_ParamLimits

0x5e43,	// (0x0004889d) field_vitu_entry_pane

0x5e5a,	// (0x000488b4) grid_vitu_function_pane_ParamLimits

0x5e5a,	// (0x000488b4) grid_vitu_function_pane

0x5e75,	// (0x000488cf) grid_vitu_itu_pane_ParamLimits

0x5e75,	// (0x000488cf) grid_vitu_itu_pane

0x5e93,	// (0x000488ed) cell_vitu_itu_pane_ParamLimits

0x5e93,	// (0x000488ed) cell_vitu_itu_pane

0x5eb5,	// (0x0004890f) cell_vitu_function_pane_ParamLimits

0x5eb5,	// (0x0004890f) cell_vitu_function_pane

0xdcdd,	// (0x00050737) bg_popup_sub_pane_cp08_ParamLimits

0xdcdd,	// (0x00050737) bg_popup_sub_pane_cp08

0x5ece,	// (0x00048928) field_vitu_entry_pane_t1_ParamLimits

0x5ece,	// (0x00048928) field_vitu_entry_pane_t1

0xec97,	// (0x000516f1) field_vitu_entry_pane_t2_ParamLimits

0xec97,	// (0x000516f1) field_vitu_entry_pane_t2

0x0001,

0xf73b,	// (0x00052195) field_vitu_entry_pane_t_ParamLimits

0xf73b,	// (0x00052195) field_vitu_entry_pane_t

0xecb4,	// (0x0005170e) bg_button_pane_cp05_ParamLimits

0xecb4,	// (0x0005170e) bg_button_pane_cp05

0x5eec,	// (0x00048946) cell_vitu_itu_pane_g1

0x5f04,	// (0x0004895e) cell_vitu_itu_pane_t1_ParamLimits

0x5f04,	// (0x0004895e) cell_vitu_itu_pane_t1

0x5f16,	// (0x00048970) cell_vitu_itu_pane_t2_ParamLimits

0x5f16,	// (0x00048970) cell_vitu_itu_pane_t2

0x0002,

0xf740,	// (0x0005219a) cell_vitu_itu_pane_t_ParamLimits

0xf740,	// (0x0005219a) cell_vitu_itu_pane_t

0xecc2,	// (0x0005171c) bg_button_pane_cp07

0x5f4b,	// (0x000489a5) cell_vitu_function_pane_g1

0xa637,	// (0x0004d091) main_calc_pane_g1

0x1562,	// (0x00043fbc) aid_visual_content_pane

0xa5bf,	// (0x0004d019) main_vradio_pane

0x5f54,	// (0x000489ae) main_vradio_pane_g1_ParamLimits

0x5f54,	// (0x000489ae) main_vradio_pane_g1

0xeccc,	// (0x00051726) main_vradio_pane_g2_ParamLimits

0xeccc,	// (0x00051726) main_vradio_pane_g2

0x0001,

0xf747,	// (0x000521a1) main_vradio_pane_g_ParamLimits

0xf747,	// (0x000521a1) main_vradio_pane_g

0x5f6d,	// (0x000489c7) main_vradio_pane_t1_ParamLimits

0x5f6d,	// (0x000489c7) main_vradio_pane_t1

0x5f82,	// (0x000489dc) main_vradio_pane_t2_ParamLimits

0x5f82,	// (0x000489dc) main_vradio_pane_t2

0xecd9,	// (0x00051733) main_vradio_pane_t3_ParamLimits

0xecd9,	// (0x00051733) main_vradio_pane_t3

0x0002,

0xf74c,	// (0x000521a6) main_vradio_pane_t_ParamLimits

0xf74c,	// (0x000521a6) main_vradio_pane_t

0x5f97,	// (0x000489f1) vradio_rocker_control_pane_ParamLimits

0x5f97,	// (0x000489f1) vradio_rocker_control_pane

0x5fa9,	// (0x00048a03) vradio_station_info_pane_ParamLimits

0x5fa9,	// (0x00048a03) vradio_station_info_pane

0xeced,	// (0x00051747) vradio_frequency_info_pane_ParamLimits

0xeced,	// (0x00051747) vradio_frequency_info_pane

0xe6b8,	// (0x00051112) vradio_station_info_pane_g1

0xecfc,	// (0x00051756) vradio_station_info_pane_t1_ParamLimits

0xecfc,	// (0x00051756) vradio_station_info_pane_t1

0xed1e,	// (0x00051778) vradio_station_info_pane_t2_ParamLimits

0xed1e,	// (0x00051778) vradio_station_info_pane_t2

0x0001,

0x02db,	// (0x00042d35) vradio_station_info_pane_t_ParamLimits

0x02db,	// (0x00042d35) vradio_station_info_pane_t

0xed30,	// (0x0005178a) vradio_tuning_pane

0xed38,	// (0x00051792) vradio_rocker_control_pane_g1

0xed40,	// (0x0005179a) vradio_rocker_control_pane_g2

0xed48,	// (0x000517a2) vradio_rocker_control_pane_g3

0xed50,	// (0x000517aa) vradio_rocker_control_pane_g4

0xed58,	// (0x000517b2) vradio_rocker_control_pane_g5

0x0004,

0x02e0,	// (0x00042d3a) vradio_rocker_control_pane_g

0x5fbb,	// (0x00048a15) vradio_frequency_info_pane_g1

0xed60,	// (0x000517ba) vradio_frequency_info_pane_t1_ParamLimits

0xed60,	// (0x000517ba) vradio_frequency_info_pane_t1

0x5fc5,	// (0x00048a1f) vradio_tuning_pane_g1

0x5fd0,	// (0x00048a2a) vradio_tuning_pane_t1

0xa5f5,	// (0x0004d04f) area_side_right_pane_ParamLimits

0xa5f5,	// (0x0004d04f) area_side_right_pane

0xe266,	// (0x00050cc0) status_small_pane_g1

0xe26e,	// (0x00050cc8) status_small_pane_g2

0xe277,	// (0x00050cd1) status_small_pane_g3

0xe280,	// (0x00050cda) status_small_pane_g4

0x0003,

0x00a0,	// (0x00042afa) status_small_pane_g

0xe289,	// (0x00050ce3) status_small_pane_t1

0xa5bf,	// (0x0004d019) main_video3_pane

0xed74,	// (0x000517ce) cams_zoom_vslider_pane

0xed7c,	// (0x000517d6) image3_wide_pane_ParamLimits

0xed7c,	// (0x000517d6) image3_wide_pane

0xed96,	// (0x000517f0) image3_wide_small_pane

0xeda2,	// (0x000517fc) main_video3_pane_g1_ParamLimits

0xeda2,	// (0x000517fc) main_video3_pane_g1

0xedbe,	// (0x00051818) main_video3_pane_g2_ParamLimits

0xedbe,	// (0x00051818) main_video3_pane_g2

0x0001,

0x02eb,	// (0x00042d45) main_video3_pane_g_ParamLimits

0x02eb,	// (0x00042d45) main_video3_pane_g

0xedda,	// (0x00051834) main_video3_pane_t1_ParamLimits

0xedda,	// (0x00051834) main_video3_pane_t1

0xee05,	// (0x0005185f) main_video3_pane_t2_ParamLimits

0xee05,	// (0x0005185f) main_video3_pane_t2

0xee30,	// (0x0005188a) main_video3_pane_t3_ParamLimits

0xee30,	// (0x0005188a) main_video3_pane_t3

0x0002,

0x02f0,	// (0x00042d4a) main_video3_pane_t_ParamLimits

0x02f0,	// (0x00042d4a) main_video3_pane_t

0xee5d,	// (0x000518b7) cams_zoom_vslider_pane_g1

0xee66,	// (0x000518c0) cams_zoom_vslider_pane_g2

0x0001,

0x02f7,	// (0x00042d51) cams_zoom_vslider_pane_g

0xee6e,	// (0x000518c8) small_slider_vertical_pane

0xe6b8,	// (0x00051112) small_slider_vertical_pane_g1

0xe6b8,	// (0x00051112) small_slider_vertical_pane_g2

0xee76,	// (0x000518d0) small_slider_vertical_pane_g3

0x0002,

0x02fc,	// (0x00042d56) small_slider_vertical_pane_g

0xa5bf,	// (0x0004d019) main_hwr_training_pane

0xee7f,	// (0x000518d9) hwr_training_instruct_pane_ParamLimits

0xee7f,	// (0x000518d9) hwr_training_instruct_pane

0x5fdf,	// (0x00048a39) hwr_training_navi_pane_ParamLimits

0x5fdf,	// (0x00048a39) hwr_training_navi_pane

0x5ffe,	// (0x00048a58) hwr_training_write_pane_ParamLimits

0x5ffe,	// (0x00048a58) hwr_training_write_pane

0xa5bf,	// (0x0004d019) bg_frame_shadow_pane

0xeeb6,	// (0x00051910) hwr_training_write_pane_g1

0xeebe,	// (0x00051918) hwr_training_write_pane_g2

0xeec6,	// (0x00051920) hwr_training_write_pane_g3

0xeece,	// (0x00051928) hwr_training_write_pane_g4

0xeed6,	// (0x00051930) hwr_training_write_pane_g5

0xeede,	// (0x00051938) hwr_training_write_pane_g6

0xeee6,	// (0x00051940) hwr_training_write_pane_g7

0x0006,

0x0303,	// (0x00042d5d) hwr_training_write_pane_g

0xaa4d,	// (0x0004d4a7) hwr_training_navi_pane_g1_ParamLimits

0xaa4d,	// (0x0004d4a7) hwr_training_navi_pane_g1

0xaa5f,	// (0x0004d4b9) hwr_training_navi_pane_g2_ParamLimits

0xaa5f,	// (0x0004d4b9) hwr_training_navi_pane_g2

0xaa71,	// (0x0004d4cb) hwr_training_navi_pane_g3_ParamLimits

0xaa71,	// (0x0004d4cb) hwr_training_navi_pane_g3

0xaa81,	// (0x0004d4db) hwr_training_navi_pane_g4_ParamLimits

0xaa81,	// (0x0004d4db) hwr_training_navi_pane_g4

0x0004,

0xf753,	// (0x000521ad) hwr_training_navi_pane_g_ParamLimits

0xf753,	// (0x000521ad) hwr_training_navi_pane_g

0xaa8e,	// (0x0004d4e8) hwr_training_navi_pane_t1

0x6046,	// (0x00048aa0) list_single_hwr_training_instruct_pane_ParamLimits

0x6046,	// (0x00048aa0) list_single_hwr_training_instruct_pane

0xeeee,	// (0x00051948) list_single_hwr_training_instruct_pane_t1

0xe5e7,	// (0x00051041) bg_frame_shadow_pane_g1

0xeefd,	// (0x00051957) bg_frame_shadow_pane_g2

0xef05,	// (0x0005195f) bg_frame_shadow_pane_g3

0xef0d,	// (0x00051967) bg_frame_shadow_pane_g4

0xef15,	// (0x0005196f) bg_frame_shadow_pane_g5

0xef1d,	// (0x00051977) bg_frame_shadow_pane_g6

0xef25,	// (0x0005197f) bg_frame_shadow_pane_g7

0xc471,	// (0x0004eecb) bg_frame_shadow_pane_g8

0x0007,

0xf75e,	// (0x000521b8) bg_frame_shadow_pane_g

0xa5bf,	// (0x0004d019) main_video_tele_dialer_pane

0x605b,	// (0x00048ab5) aid_size_cell_video_keypad_ParamLimits

0x605b,	// (0x00048ab5) aid_size_cell_video_keypad

0x6075,	// (0x00048acf) grid_video_dialer_keypad_pane_ParamLimits

0x6075,	// (0x00048acf) grid_video_dialer_keypad_pane

0x60bf,	// (0x00048b19) video_down_pane_cp_ParamLimits

0x60bf,	// (0x00048b19) video_down_pane_cp

0x60cf,	// (0x00048b29) cell_video_dialer_keypad_pane_ParamLimits

0x60cf,	// (0x00048b29) cell_video_dialer_keypad_pane

0xef49,	// (0x000519a3) bg_button_pane_cp08_ParamLimits

0xef49,	// (0x000519a3) bg_button_pane_cp08

0x60f1,	// (0x00048b4b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60f1,	// (0x00048b4b) cell_video_dialer_keypad_pane_g1

0x57db,	// (0x00048235) mup3_rocker2_pane_ParamLimits

0x57db,	// (0x00048235) mup3_rocker2_pane

0xe6b8,	// (0x00051112) mup3_rocker2_pane_g1

0x4342,	// (0x00046d9c) main_dialer2_pane

0xa5bf,	// (0x0004d019) main_mp4_pane

0xaaa4,	// (0x0004d4fe) main_mp4_pane_g1_ParamLimits

0xaaa4,	// (0x0004d4fe) main_mp4_pane_g1

0xaaa4,	// (0x0004d4fe) main_mp4_pane_g2_ParamLimits

0xaaa4,	// (0x0004d4fe) main_mp4_pane_g2

0x612b,	// (0x00048b85) main_mp4_pane_g3_ParamLimits

0x612b,	// (0x00048b85) main_mp4_pane_g3

0xaab2,	// (0x0004d50c) main_mp4_pane_g4_ParamLimits

0xaab2,	// (0x0004d50c) main_mp4_pane_g4

0xaada,	// (0x0004d534) main_mp4_pane_g5_ParamLimits

0xaada,	// (0x0004d534) main_mp4_pane_g5

0x0005,

0xf779,	// (0x000521d3) main_mp4_pane_g_ParamLimits

0xf779,	// (0x000521d3) main_mp4_pane_g

0xab2a,	// (0x0004d584) main_mp4_pane_t1_ParamLimits

0xab2a,	// (0x0004d584) main_mp4_pane_t1

0xab86,	// (0x0004d5e0) main_mp4_pane_t2_ParamLimits

0xab86,	// (0x0004d5e0) main_mp4_pane_t2

0xef55,	// (0x000519af) main_mp4_pane_t3_ParamLimits

0xef55,	// (0x000519af) main_mp4_pane_t3

0xabd8,	// (0x0004d632) main_mp4_pane_t4_ParamLimits

0xabd8,	// (0x0004d632) main_mp4_pane_t4

0x0003,

0xf786,	// (0x000521e0) main_mp4_pane_t_ParamLimits

0xf786,	// (0x000521e0) main_mp4_pane_t

0xac1c,	// (0x0004d676) mp4_progress_pane_ParamLimits

0xac1c,	// (0x0004d676) mp4_progress_pane

0xac66,	// (0x0004d6c0) mp4_rocker_pane_ParamLimits

0xac66,	// (0x0004d6c0) mp4_rocker_pane

0xef7d,	// (0x000519d7) mp4_progress_pane_t1

0xef96,	// (0x000519f0) mp4_progress_pane_t2

0x0001,

0x0353,	// (0x00042dad) mp4_progress_pane_t

0xefaf,	// (0x00051a09) mup_progress_pane_cp04

0xe6b8,	// (0x00051112) mp4_rocker_pane_g1

0x6167,	// (0x00048bc1) aid_cell_size_keypad2_ParamLimits

0x6167,	// (0x00048bc1) aid_cell_size_keypad2

0x617d,	// (0x00048bd7) dialer2_ne_pane_ParamLimits

0x617d,	// (0x00048bd7) dialer2_ne_pane

0x6197,	// (0x00048bf1) grid_dialer2_keypad_pane_ParamLimits

0x6197,	// (0x00048bf1) grid_dialer2_keypad_pane

0xe48c,	// (0x00050ee6) bg_popup_call_pane_cp07_ParamLimits

0xe48c,	// (0x00050ee6) bg_popup_call_pane_cp07

0x61b3,	// (0x00048c0d) dialer2_ne_pane_t1_ParamLimits

0x61b3,	// (0x00048c0d) dialer2_ne_pane_t1

0x61ee,	// (0x00048c48) cell_dialer2_keypad_pane_ParamLimits

0x61ee,	// (0x00048c48) cell_dialer2_keypad_pane

0xefcd,	// (0x00051a27) bg_button_pane_pane_cp04_ParamLimits

0xefcd,	// (0x00051a27) bg_button_pane_pane_cp04

0x6210,	// (0x00048c6a) cell_dialer2_keypad_pane_g1_ParamLimits

0x6210,	// (0x00048c6a) cell_dialer2_keypad_pane_g1

0x2424,	// (0x00044e7e) aid_placing_vt_set_content_ParamLimits

0x2424,	// (0x00044e7e) aid_placing_vt_set_content

0x244c,	// (0x00044ea6) aid_placing_vt_set_title_ParamLimits

0x244c,	// (0x00044ea6) aid_placing_vt_set_title

0xa5bf,	// (0x0004d019) main_image3_pane

0x62d6,	// (0x00048d30) area_side_right_pane_cp01_ParamLimits

0x62d6,	// (0x00048d30) area_side_right_pane_cp01

0xaaa4,	// (0x0004d4fe) main_image3_pane_g1_ParamLimits

0xaaa4,	// (0x0004d4fe) main_image3_pane_g1

0x62ed,	// (0x00048d47) main_image3_pane_g2_ParamLimits

0x62ed,	// (0x00048d47) main_image3_pane_g2

0x6315,	// (0x00048d6f) main_image3_pane_g3_ParamLimits

0x6315,	// (0x00048d6f) main_image3_pane_g3

0x633f,	// (0x00048d99) main_image3_pane_g4_ParamLimits

0x633f,	// (0x00048d99) main_image3_pane_g4

0x0003,

0xf799,	// (0x000521f3) main_image3_pane_g_ParamLimits

0xf799,	// (0x000521f3) main_image3_pane_g

0x6369,	// (0x00048dc3) main_image3_pane_t1_ParamLimits

0x6369,	// (0x00048dc3) main_image3_pane_t1

0x63c1,	// (0x00048e1b) main_image3_pane_t2_ParamLimits

0x63c1,	// (0x00048e1b) main_image3_pane_t2

0x6413,	// (0x00048e6d) main_image3_pane_t3_ParamLimits

0x6413,	// (0x00048e6d) main_image3_pane_t3

0x0003,

0xf7a2,	// (0x000521fc) main_image3_pane_t_ParamLimits

0xf7a2,	// (0x000521fc) main_image3_pane_t

0xdcdd,	// (0x00050737) grid_sctrl_middle_pane_cp01_ParamLimits

0xdcdd,	// (0x00050737) grid_sctrl_middle_pane_cp01

0x649b,	// (0x00048ef5) cell_sctrl_middle_pane_cp01_ParamLimits

0x649b,	// (0x00048ef5) cell_sctrl_middle_pane_cp01

0x64b8,	// (0x00048f12) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x64b8,	// (0x00048f12) cell_sctrl_middle_pane_cp01_g1

0xa5bf,	// (0x0004d019) main_call4_pane

0x64ce,	// (0x00048f28) aid_size_button_call4_ParamLimits

0x64ce,	// (0x00048f28) aid_size_button_call4

0x64ff,	// (0x00048f59) call4_windows_pane_ParamLimits

0x64ff,	// (0x00048f59) call4_windows_pane

0x651f,	// (0x00048f79) grid_call4_button_pane_ParamLimits

0x651f,	// (0x00048f79) grid_call4_button_pane

0xefd9,	// (0x00051a33) call4_windows_conf_pane

0xeff0,	// (0x00051a4a) popup_call4_audio_first_window_ParamLimits

0xeff0,	// (0x00051a4a) popup_call4_audio_first_window

0xf03c,	// (0x00051a96) popup_call4_audio_second_window_ParamLimits

0xf03c,	// (0x00051a96) popup_call4_audio_second_window

0xf050,	// (0x00051aaa) popup_call4_audio_wait_window_ParamLimits

0xf050,	// (0x00051aaa) popup_call4_audio_wait_window

0x654c,	// (0x00048fa6) cell_call4_button_pane_ParamLimits

0x654c,	// (0x00048fa6) cell_call4_button_pane

0x6575,	// (0x00048fcf) bg_button_pane_cp09_ParamLimits

0x6575,	// (0x00048fcf) bg_button_pane_cp09

0x6581,	// (0x00048fdb) cell_call4_button_pane_g1_ParamLimits

0x6581,	// (0x00048fdb) cell_call4_button_pane_g1

0x65a7,	// (0x00049001) cell_call4_button_pane_t1_ParamLimits

0x65a7,	// (0x00049001) cell_call4_button_pane_t1

0xf098,	// (0x00051af2) popup_call4_audio_conf_window_ParamLimits

0xf098,	// (0x00051af2) popup_call4_audio_conf_window

0x583b,	// (0x00048295) mup3_progress_pane_t1_ParamLimits

0x585a,	// (0x000482b4) mup3_progress_pane_t2_ParamLimits

0xe996,	// (0x000513f0) mup3_progress_pane_t3_ParamLimits

0xf6ed,	// (0x00052147) mup3_progress_pane_t_ParamLimits

0xe9b3,	// (0x0005140d) mup_progress_pane_cp03_ParamLimits

0x5e25,	// (0x0004887f) mup3_control_keys_pane_g4_copy1

0xac4a,	// (0x0004d6a4) mp4_rocker2_pane_ParamLimits

0xac4a,	// (0x0004d6a4) mp4_rocker2_pane

0xf0ac,	// (0x00051b06) mp4_rocker2_pane_g1

0xf0b4,	// (0x00051b0e) mp4_rocker2_pane_g2

0xacb8,	// (0x0004d712) mp4_rocker2_pane_g3

0xacc0,	// (0x0004d71a) mp4_rocker2_pane_g4

0xacc8,	// (0x0004d722) mp4_rocker2_pane_g5

0x0004,

0xf7ab,	// (0x00052205) mp4_rocker2_pane_g

0xa5bf,	// (0x0004d019) main_camera4_pane

0xa5bf,	// (0x0004d019) main_video4_pane

0x608d,	// (0x00048ae7) main_video_tele_dialer_pane_t1_ParamLimits

0x608d,	// (0x00048ae7) main_video_tele_dialer_pane_t1

0x60a6,	// (0x00048b00) main_video_tele_dialer_pane_t2_ParamLimits

0x60a6,	// (0x00048b00) main_video_tele_dialer_pane_t2

0x0001,

0xf76f,	// (0x000521c9) main_video_tele_dialer_pane_t_ParamLimits

0xf76f,	// (0x000521c9) main_video_tele_dialer_pane_t

0x65e5,	// (0x0004903f) cam4_autofocus_pane_ParamLimits

0x65e5,	// (0x0004903f) cam4_autofocus_pane

0x65fb,	// (0x00049055) cam4_image_uncrop_pane_ParamLimits

0x65fb,	// (0x00049055) cam4_image_uncrop_pane

0x6615,	// (0x0004906f) cam4_indicators_pane_ParamLimits

0x6615,	// (0x0004906f) cam4_indicators_pane

0x6640,	// (0x0004909a) main_camera4_pane_g1_ParamLimits

0x6640,	// (0x0004909a) main_camera4_pane_g1

0x6652,	// (0x000490ac) main_camera4_pane_g2_ParamLimits

0x6652,	// (0x000490ac) main_camera4_pane_g2

0x6665,	// (0x000490bf) main_camera4_pane_g3_ParamLimits

0x6665,	// (0x000490bf) main_camera4_pane_g3

0x6678,	// (0x000490d2) main_camera4_pane_g4_ParamLimits

0x6678,	// (0x000490d2) main_camera4_pane_g4

0x668b,	// (0x000490e5) main_camera4_pane_g5_ParamLimits

0x668b,	// (0x000490e5) main_camera4_pane_g5

0x0005,

0xf7b6,	// (0x00052210) main_camera4_pane_g_ParamLimits

0xf7b6,	// (0x00052210) main_camera4_pane_g

0x66af,	// (0x00049109) main_camera4_pane_t1_ParamLimits

0x66af,	// (0x00049109) main_camera4_pane_t1

0xe91b,	// (0x00051375) bg_tb_trans_pane_cp06

0xacf4,	// (0x0004d74e) cam4_indicators_pane_g1

0xad05,	// (0x0004d75f) cam4_indicators_pane_g2

0x0002,

0xf7d1,	// (0x0005222b) cam4_indicators_pane_g

0xad23,	// (0x0004d77d) cam4_indicators_pane_t1

0x6713,	// (0x0004916d) main_video4_pane_g1_ParamLimits

0x6713,	// (0x0004916d) main_video4_pane_g1

0x6722,	// (0x0004917c) main_video4_pane_g2_ParamLimits

0x6722,	// (0x0004917c) main_video4_pane_g2

0x6731,	// (0x0004918b) main_video4_pane_g3_ParamLimits

0x6731,	// (0x0004918b) main_video4_pane_g3

0x6740,	// (0x0004919a) main_video4_pane_g4_ParamLimits

0x6740,	// (0x0004919a) main_video4_pane_g4

0x0004,

0xf7d8,	// (0x00052232) main_video4_pane_g_ParamLimits

0xf7d8,	// (0x00052232) main_video4_pane_g

0x675e,	// (0x000491b8) vid4_indicators_pane_ParamLimits

0x675e,	// (0x000491b8) vid4_indicators_pane

0x678c,	// (0x000491e6) video4_image_uncrop_cif_pane_ParamLimits

0x678c,	// (0x000491e6) video4_image_uncrop_cif_pane

0x67a6,	// (0x00049200) video4_image_uncrop_nhd_pane_ParamLimits

0x67a6,	// (0x00049200) video4_image_uncrop_nhd_pane

0x65fb,	// (0x00049055) video4_image_uncrop_vga_pane_ParamLimits

0x65fb,	// (0x00049055) video4_image_uncrop_vga_pane

0xdcdd,	// (0x00050737) bg_tb_trans_pane_cp07

0xad4f,	// (0x0004d7a9) vid4_indicators_pane_g1

0xad63,	// (0x0004d7bd) vid4_indicators_pane_g2

0xad77,	// (0x0004d7d1) vid4_indicators_pane_g3

0x0004,

0xf7e3,	// (0x0005223d) vid4_indicators_pane_g

0xada6,	// (0x0004d800) vid4_indicators_pane_t1

0x67ba,	// (0x00049214) cam4_autofocus_pane_g1

0x67c2,	// (0x0004921c) cam4_autofocus_pane_g2

0x67ca,	// (0x00049224) cam4_autofocus_pane_g3

0x0002,

0xf7ee,	// (0x00052248) cam4_autofocus_pane_g

0x67d2,	// (0x0004922c) cam4_autofocus_pane_g3_copy1

0xef2d,	// (0x00051987) video_down_pane_cp_t1

0xef3b,	// (0x00051995) video_down_pane_cp_t2

0x0001,

0x0333,	// (0x00042d8d) video_down_pane_cp_t

0xdcdd,	// (0x00050737) popup_vitu2_window_ParamLimits

0xdcdd,	// (0x00050737) popup_vitu2_window

0x67da,	// (0x00049234) aid_size_cell2_itu2_ParamLimits

0x67da,	// (0x00049234) aid_size_cell2_itu2

0x6800,	// (0x0004925a) aid_size_cell_itu2_ParamLimits

0x6800,	// (0x0004925a) aid_size_cell_itu2

0x685c,	// (0x000492b6) bg_popup_window_pane_cp09_ParamLimits

0x685c,	// (0x000492b6) bg_popup_window_pane_cp09

0x686a,	// (0x000492c4) field_vitu2_entry_pane_ParamLimits

0x686a,	// (0x000492c4) field_vitu2_entry_pane

0x6890,	// (0x000492ea) grid_vitu2_function_pane_ParamLimits

0x6890,	// (0x000492ea) grid_vitu2_function_pane

0x68e1,	// (0x0004933b) grid_vitu2_itu_pane_ParamLimits

0x68e1,	// (0x0004933b) grid_vitu2_itu_pane

0x6974,	// (0x000493ce) cell_vitu2_itu_pane_ParamLimits

0x6974,	// (0x000493ce) cell_vitu2_itu_pane

0x6998,	// (0x000493f2) cell_vitu2_function_pane_ParamLimits

0x6998,	// (0x000493f2) cell_vitu2_function_pane

0x69d7,	// (0x00049431) bg_popup_call_pane_cp08_ParamLimits

0x69d7,	// (0x00049431) bg_popup_call_pane_cp08

0x69f0,	// (0x0004944a) field_vitu2_entry_pane_g1

0x69fc,	// (0x00049456) field_vitu2_entry_pane_g2

0x0002,

0xf7f5,	// (0x0005224f) field_vitu2_entry_pane_g

0x0bba,	// (0x00043614) field_vitu2_entry_pane_t1_ParamLimits

0x0bba,	// (0x00043614) field_vitu2_entry_pane_t1

0xadbd,	// (0x0004d817) field_vitu2_entry_pane_t2_ParamLimits

0xadbd,	// (0x0004d817) field_vitu2_entry_pane_t2

0x0001,

0xf7fc,	// (0x00052256) field_vitu2_entry_pane_t_ParamLimits

0xf7fc,	// (0x00052256) field_vitu2_entry_pane_t

0x6a1e,	// (0x00049478) bg_button_pane_cp010_ParamLimits

0x6a1e,	// (0x00049478) bg_button_pane_cp010

0x6a2c,	// (0x00049486) cell_vitu2_itu_pane_g1

0x6a4a,	// (0x000494a4) cell_vitu2_itu_pane_t1_ParamLimits

0x6a4a,	// (0x000494a4) cell_vitu2_itu_pane_t1

0x0be9,	// (0x00043643) cell_vitu2_itu_pane_t2_ParamLimits

0x0be9,	// (0x00043643) cell_vitu2_itu_pane_t2

0x0002,

0xf806,	// (0x00052260) cell_vitu2_itu_pane_t_ParamLimits

0xf806,	// (0x00052260) cell_vitu2_itu_pane_t

0xdcdd,	// (0x00050737) bg_button_pane_cp011

0x6ab0,	// (0x0004950a) cell_vitu2_function_pane_g1

0xa5bf,	// (0x0004d019) main_myfav_hc_pane

0x6463,	// (0x00048ebd) popup_image3_note_pane_ParamLimits

0x6463,	// (0x00048ebd) popup_image3_note_pane

0x647f,	// (0x00048ed9) popup_image3_tool_bar_pane_ParamLimits

0x647f,	// (0x00048ed9) popup_image3_tool_bar_pane

0x0c6d,	// (0x000436c7) cell_vitu2_itu_pane_t3_ParamLimits

0x0c6d,	// (0x000436c7) cell_vitu2_itu_pane_t3

0xa5bf,	// (0x0004d019) bg_popup_trans_pane

0x6ac4,	// (0x0004951e) grid_image3_tool_bar_pane

0x6ace,	// (0x00049528) bg_popup_trans_pane_g1

0xc7ae,	// (0x0004f208) bg_popup_trans_pane_g2

0x6ad6,	// (0x00049530) bg_popup_trans_pane_g3

0x6ade,	// (0x00049538) bg_popup_trans_pane_g4

0x6ae6,	// (0x00049540) bg_popup_trans_pane_g5

0x6aee,	// (0x00049548) bg_popup_trans_pane_g6

0x6af6,	// (0x00049550) bg_popup_trans_pane_g7

0x6afe,	// (0x00049558) bg_popup_trans_pane_g8

0xc78e,	// (0x0004f1e8) bg_popup_trans_pane_g9

0x0008,

0xf80d,	// (0x00052267) bg_popup_trans_pane_g

0x6b06,	// (0x00049560) cell_image3_tool_bar_pane_ParamLimits

0x6b06,	// (0x00049560) cell_image3_tool_bar_pane

0xe6b8,	// (0x00051112) cell_image3_tool_bar_pane_g1

0xa5bf,	// (0x0004d019) bg_popup_trans_pane_cp1

0x6b1a,	// (0x00049574) popup_image3_note_pane_t1

0x6b28,	// (0x00049582) popup_image3_note_pane_t2

0x6b36,	// (0x00049590) popup_image3_note_pane_t3

0x0002,

0xf820,	// (0x0005227a) popup_image3_note_pane_t

0x6b44,	// (0x0004959e) popup_image3_note_pane_t3_copy1

0x6b52,	// (0x000495ac) bg_myfav_hc_instruction_pane_ParamLimits

0x6b52,	// (0x000495ac) bg_myfav_hc_instruction_pane

0x6b66,	// (0x000495c0) cell_myfav_contact_pane_ParamLimits

0x6b66,	// (0x000495c0) cell_myfav_contact_pane

0x6b84,	// (0x000495de) cell_myfav_contact_pane_cp1_ParamLimits

0x6b84,	// (0x000495de) cell_myfav_contact_pane_cp1

0x6b9c,	// (0x000495f6) cell_myfav_contact_pane_cp2_ParamLimits

0x6b9c,	// (0x000495f6) cell_myfav_contact_pane_cp2

0x6bb4,	// (0x0004960e) cell_myfav_contact_pane_cp3_ParamLimits

0x6bb4,	// (0x0004960e) cell_myfav_contact_pane_cp3

0x6bcb,	// (0x00049625) cell_myfav_contact_pane_cp4_ParamLimits

0x6bcb,	// (0x00049625) cell_myfav_contact_pane_cp4

0x6be3,	// (0x0004963d) cell_myfav_contact_pane_cp5_ParamLimits

0x6be3,	// (0x0004963d) cell_myfav_contact_pane_cp5

0x6bf7,	// (0x00049651) cell_myfav_contact_pane_cp6_ParamLimits

0x6bf7,	// (0x00049651) cell_myfav_contact_pane_cp6

0x6c0d,	// (0x00049667) cell_myfav_contact_pane_cp7_ParamLimits

0x6c0d,	// (0x00049667) cell_myfav_contact_pane_cp7

0x6c27,	// (0x00049681) listscroll_gen_pane_cp05

0x6c30,	// (0x0004968a) main_myfav_hc_pane_g1_ParamLimits

0x6c30,	// (0x0004968a) main_myfav_hc_pane_g1

0x6c4a,	// (0x000496a4) main_myfav_hc_pane_g2_ParamLimits

0x6c4a,	// (0x000496a4) main_myfav_hc_pane_g2

0x0002,

0xf827,	// (0x00052281) main_myfav_hc_pane_g_ParamLimits

0xf827,	// (0x00052281) main_myfav_hc_pane_g

0x6c7c,	// (0x000496d6) main_myfav_hc_pane_t1_ParamLimits

0x6c7c,	// (0x000496d6) main_myfav_hc_pane_t1

0x6c93,	// (0x000496ed) main_myfav_hc_pane_t2_ParamLimits

0x6c93,	// (0x000496ed) main_myfav_hc_pane_t2

0x6ca5,	// (0x000496ff) main_myfav_hc_pane_t3_ParamLimits

0x6ca5,	// (0x000496ff) main_myfav_hc_pane_t3

0x6cb7,	// (0x00049711) main_myfav_hc_pane_t4_ParamLimits

0x6cb7,	// (0x00049711) main_myfav_hc_pane_t4

0x0004,

0xf82e,	// (0x00052288) main_myfav_hc_pane_t_ParamLimits

0xf82e,	// (0x00052288) main_myfav_hc_pane_t

0xe6b8,	// (0x00051112) bg_myfav_hc_instruction_pane_g1

0x6cdf,	// (0x00049739) cell_myfav_contact_pane_g1_ParamLimits

0x6cdf,	// (0x00049739) cell_myfav_contact_pane_g1

0x6cdf,	// (0x00049739) cell_myfav_contact_pane_g2_ParamLimits

0x6cdf,	// (0x00049739) cell_myfav_contact_pane_g2

0x6ceb,	// (0x00049745) cell_myfav_contact_pane_g3_ParamLimits

0x6ceb,	// (0x00049745) cell_myfav_contact_pane_g3

0xe980,	// (0x000513da) cell_myfav_contact_pane_g4_ParamLimits

0xe980,	// (0x000513da) cell_myfav_contact_pane_g4

0x6cf8,	// (0x00049752) cell_myfav_contact_pane_g5_ParamLimits

0x6cf8,	// (0x00049752) cell_myfav_contact_pane_g5

0x0004,

0xf839,	// (0x00052293) cell_myfav_contact_pane_g_ParamLimits

0xf839,	// (0x00052293) cell_myfav_contact_pane_g

0x6c64,	// (0x000496be) main_myfav_hc_pane_g3_ParamLimits

0x6c64,	// (0x000496be) main_myfav_hc_pane_g3

0x1684,	// (0x000440de) popup_adpt_find_window

0x6d04,	// (0x0004975e) afind_page_pane_ParamLimits

0x6d04,	// (0x0004975e) afind_page_pane

0x6d19,	// (0x00049773) aid_size_cell_afind_ParamLimits

0x6d19,	// (0x00049773) aid_size_cell_afind

0x6d37,	// (0x00049791) bg_popup_sub_pane_cp09_ParamLimits

0x6d37,	// (0x00049791) bg_popup_sub_pane_cp09

0x6d44,	// (0x0004979e) find_pane_cp01_ParamLimits

0x6d44,	// (0x0004979e) find_pane_cp01

0x6d51,	// (0x000497ab) grid_afind_control_pane_ParamLimits

0x6d51,	// (0x000497ab) grid_afind_control_pane

0x6d65,	// (0x000497bf) grid_afind_pane_ParamLimits

0x6d65,	// (0x000497bf) grid_afind_pane

0x6d87,	// (0x000497e1) cell_afind_pane_ParamLimits

0x6d87,	// (0x000497e1) cell_afind_pane

0xe6b8,	// (0x00051112) afind_page_pane_g1

0x6de8,	// (0x00049842) afind_page_pane_g2

0x6df1,	// (0x0004984b) afind_page_pane_g3

0x0002,

0xf844,	// (0x0005229e) afind_page_pane_g

0x6dfa,	// (0x00049854) afind_page_pane_t1

0x6e1a,	// (0x00049874) cell_afind_grid_control_pane_ParamLimits

0x6e1a,	// (0x00049874) cell_afind_grid_control_pane

0xefcd,	// (0x00051a27) bg_button_pane_cp69_ParamLimits

0xefcd,	// (0x00051a27) bg_button_pane_cp69

0x6e29,	// (0x00049883) cell_afind_pane_g1_ParamLimits

0x6e29,	// (0x00049883) cell_afind_pane_g1

0x6e36,	// (0x00049890) cell_afind_pane_t1_ParamLimits

0x6e36,	// (0x00049890) cell_afind_pane_t1

0xc5a7,	// (0x0004f001) bg_button_pane_cp72

0x6e48,	// (0x000498a2) cell_afind_grid_control_pane_g1

0x3e02,	// (0x0004685c) aid_image_placing_area_ParamLimits

0x3e02,	// (0x0004685c) aid_image_placing_area

0xec7f,	// (0x000516d9) field_vitu_entry_pane_g1_ParamLimits

0xec7f,	// (0x000516d9) field_vitu_entry_pane_g1

0xec8b,	// (0x000516e5) field_vitu_entry_pane_g2_ParamLimits

0xec8b,	// (0x000516e5) field_vitu_entry_pane_g2

0x0001,

0x02be,	// (0x00042d18) field_vitu_entry_pane_g_ParamLimits

0x02be,	// (0x00042d18) field_vitu_entry_pane_g

0x5eec,	// (0x00048946) cell_vitu_itu_pane_g1_ParamLimits

0x5f2e,	// (0x00048988) cell_vitu_itu_pane_t3_ParamLimits

0x5f2e,	// (0x00048988) cell_vitu_itu_pane_t3

0xef7d,	// (0x000519d7) mp4_progress_pane_t1_ParamLimits

0xef96,	// (0x000519f0) mp4_progress_pane_t2_ParamLimits

0x0353,	// (0x00042dad) mp4_progress_pane_t_ParamLimits

0xefaf,	// (0x00051a09) mup_progress_pane_cp04_ParamLimits

0x6ccb,	// (0x00049725) main_myfav_hc_pane_t5_ParamLimits

0x6ccb,	// (0x00049725) main_myfav_hc_pane_t5

0xa5e5,	// (0x0004d03f) aid_zoom_text_primary

0x1684,	// (0x000440de) popup_adpt_find_window_ParamLimits

0xdcdd,	// (0x00050737) main_cam_set_pane

0x662c,	// (0x00049086) cam4_zoom_pane_ParamLimits

0x662c,	// (0x00049086) cam4_zoom_pane

0x6e51,	// (0x000498ab) main_cam_set_pane_g1_ParamLimits

0x6e51,	// (0x000498ab) main_cam_set_pane_g1

0x6e5f,	// (0x000498b9) main_cam_set_pane_g2_ParamLimits

0x6e5f,	// (0x000498b9) main_cam_set_pane_g2

0x0001,

0xf84b,	// (0x000522a5) main_cam_set_pane_g_ParamLimits

0xf84b,	// (0x000522a5) main_cam_set_pane_g

0x6e80,	// (0x000498da) main_cam_set_pane_t1_ParamLimits

0x6e80,	// (0x000498da) main_cam_set_pane_t1

0x6e9b,	// (0x000498f5) main_cset_listscroll_pane_ParamLimits

0x6e9b,	// (0x000498f5) main_cset_listscroll_pane

0x6ebb,	// (0x00049915) main_cset_slider_pane_ParamLimits

0x6ebb,	// (0x00049915) main_cset_slider_pane

0x6ee9,	// (0x00049943) main_cset_list_pane_ParamLimits

0x6ee9,	// (0x00049943) main_cset_list_pane

0x6ef9,	// (0x00049953) scroll_pane_cp028

0x6f02,	// (0x0004995c) aid_area_touch_slider

0x6f1e,	// (0x00049978) cset_slider_pane

0x6f48,	// (0x000499a2) main_cset_slider_pane_g1

0x6f5d,	// (0x000499b7) main_cset_slider_pane_g2

0x0011,

0xf850,	// (0x000522aa) main_cset_slider_pane_g

0x7049,	// (0x00049aa3) main_cset_slider_pane_t1

0x7077,	// (0x00049ad1) main_cset_slider_pane_t2

0x7091,	// (0x00049aeb) main_cset_slider_pane_t3

0x70ab,	// (0x00049b05) main_cset_slider_pane_t4

0x70c5,	// (0x00049b1f) main_cset_slider_pane_t5

0x70df,	// (0x00049b39) main_cset_slider_pane_t6

0x70f4,	// (0x00049b4e) main_cset_slider_pane_t7

0x000e,

0xf875,	// (0x000522cf) main_cset_slider_pane_t

0x726a,	// (0x00049cc4) cset_list_set_pane_ParamLimits

0x726a,	// (0x00049cc4) cset_list_set_pane

0x727c,	// (0x00049cd6) aid_position_infowindow_above

0x7284,	// (0x00049cde) aid_position_infowindow_below

0xadda,	// (0x0004d834) cset_list_set_pane_g1_ParamLimits

0xadda,	// (0x0004d834) cset_list_set_pane_g1

0xade6,	// (0x0004d840) cset_list_set_pane_g3_ParamLimits

0xade6,	// (0x0004d840) cset_list_set_pane_g3

0x0001,

0xf894,	// (0x000522ee) cset_list_set_pane_g_ParamLimits

0xf894,	// (0x000522ee) cset_list_set_pane_g

0xadf5,	// (0x0004d84f) cset_list_set_pane_t1_ParamLimits

0xadf5,	// (0x0004d84f) cset_list_set_pane_t1

0xdcdd,	// (0x00050737) list_highlight_pane_cp021_ParamLimits

0xdcdd,	// (0x00050737) list_highlight_pane_cp021

0xcfcf,	// (0x0004fa29) cset_slider_pane_g1

0xcfe1,	// (0x0004fa3b) cset_slider_pane_g2

0xcfd8,	// (0x0004fa32) cset_slider_pane_g3

0x0002,

0x0462,	// (0x00042ebc) cset_slider_pane_g

0xae0a,	// (0x0004d864) aid_area_touch_cam4_zoom

0xae12,	// (0x0004d86c) cam4_zoom_cont_pane

0xae1a,	// (0x0004d874) cam4_zoom_pane_g1

0xae22,	// (0x0004d87c) cam4_zoom_pane_g2

0x728c,	// (0x00049ce6) cam4_zoom_pane_g3

0x0002,

0xf899,	// (0x000522f3) cam4_zoom_pane_g

0x7294,	// (0x00049cee) cam4_zoom_cont_pane_g1

0x729d,	// (0x00049cf7) cam4_zoom_cont_pane_g2

0x72a6,	// (0x00049d00) cam4_zoom_cont_pane_g3

0x0002,

0xf8a0,	// (0x000522fa) cam4_zoom_cont_pane_g

0x64ec,	// (0x00048f46) call4_image_pane_ParamLimits

0x64ec,	// (0x00048f46) call4_image_pane

0xefd9,	// (0x00051a33) call4_windows_conf_pane_ParamLimits

0xf01a,	// (0x00051a74) popup_call4_audio_in_window_ParamLimits

0xf01a,	// (0x00051a74) popup_call4_audio_in_window

0xa5bf,	// (0x0004d019) bg_popup_call2_act_pane_cp02

0xf090,	// (0x00051aea) call4_list_conf_pane

0xe6b8,	// (0x00051112) call4_image_pane_g1

0xe6b8,	// (0x00051112) call4_image_pane_g2

0x0001,

0x0184,	// (0x00042bde) call4_image_pane_g

0x72af,	// (0x00049d09) list_single_graphic_popup_conf4_pane_ParamLimits

0x72af,	// (0x00049d09) list_single_graphic_popup_conf4_pane

0xa5bf,	// (0x0004d019) list_highlight_pane_cp022

0x72c2,	// (0x00049d1c) list_single_graphic_popup_conf4_pane_g1

0xcca0,	// (0x0004f6fa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8a7,	// (0x00052301) list_single_graphic_popup_conf4_pane_g

0x72ca,	// (0x00049d24) list_single_graphic_popup_conf4_pane_t1

0x2570,	// (0x00044fca) popup_vtel_slider_window_ParamLimits

0x2570,	// (0x00044fca) popup_vtel_slider_window

0xefbb,	// (0x00051a15) dialer2_ne_pane_t2_ParamLimits

0xefbb,	// (0x00051a15) dialer2_ne_pane_t2

0x0001,

0xf78f,	// (0x000521e9) dialer2_ne_pane_t_ParamLimits

0xf78f,	// (0x000521e9) dialer2_ne_pane_t

0xe48c,	// (0x00050ee6) bg_popup_sub_pane_cp010_ParamLimits

0xe48c,	// (0x00050ee6) bg_popup_sub_pane_cp010

0x72e0,	// (0x00049d3a) popup_vtel_slider_window_g1_ParamLimits

0x72e0,	// (0x00049d3a) popup_vtel_slider_window_g1

0x72f3,	// (0x00049d4d) popup_vtel_slider_window_g2_ParamLimits

0x72f3,	// (0x00049d4d) popup_vtel_slider_window_g2

0x0003,

0xf8ac,	// (0x00052306) popup_vtel_slider_window_g_ParamLimits

0xf8ac,	// (0x00052306) popup_vtel_slider_window_g

0x7349,	// (0x00049da3) vtel_slider_pane_ParamLimits

0x7349,	// (0x00049da3) vtel_slider_pane

0x736b,	// (0x00049dc5) vtel_slider_pane_g1_ParamLimits

0x736b,	// (0x00049dc5) vtel_slider_pane_g1

0x737f,	// (0x00049dd9) vtel_slider_pane_g2_ParamLimits

0x737f,	// (0x00049dd9) vtel_slider_pane_g2

0x7397,	// (0x00049df1) vtel_slider_pane_g3_ParamLimits

0x7397,	// (0x00049df1) vtel_slider_pane_g3

0x736b,	// (0x00049dc5) vtel_slider_pane_g4_ParamLimits

0x736b,	// (0x00049dc5) vtel_slider_pane_g4

0x73ad,	// (0x00049e07) vtel_slider_pane_g5_ParamLimits

0x73ad,	// (0x00049e07) vtel_slider_pane_g5

0x0004,

0xf8b5,	// (0x0005230f) vtel_slider_pane_g_ParamLimits

0xf8b5,	// (0x0005230f) vtel_slider_pane_g

0xa5bf,	// (0x0004d019) main_gallery2_pane

0x682c,	// (0x00049286) aid_size_row_itut2_dropdow_list_ParamLimits

0x682c,	// (0x00049286) aid_size_row_itut2_dropdow_list

0x68b8,	// (0x00049312) grid_vitu2_function_top_pane_ParamLimits

0x68b8,	// (0x00049312) grid_vitu2_function_top_pane

0x691d,	// (0x00049377) popup_vitu2_dropdown_list_window_ParamLimits

0x691d,	// (0x00049377) popup_vitu2_dropdown_list_window

0x6946,	// (0x000493a0) popup_vitu2_match_list_window

0x73c3,	// (0x00049e1d) cell_vitu2_function_top_pane_ParamLimits

0x73c3,	// (0x00049e1d) cell_vitu2_function_top_pane

0x73e1,	// (0x00049e3b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x73e1,	// (0x00049e3b) cell_vitu2_function_top_pane_cp01

0x73ff,	// (0x00049e59) cell_vitu2_function_top_wide_pane_ParamLimits

0x73ff,	// (0x00049e59) cell_vitu2_function_top_wide_pane

0xdcdd,	// (0x00050737) bg_button_pane_cp012

0x741d,	// (0x00049e77) cell_vitu2_function_top_pane_g1

0xae38,	// (0x0004d892) bg_button_pane_cp013_ParamLimits

0xae38,	// (0x0004d892) bg_button_pane_cp013

0x7431,	// (0x00049e8b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7431,	// (0x00049e8b) cell_vitu2_function_top_wide_pane_g1

0xdcdd,	// (0x00050737) bg_popup_sub_pane_cp20

0x7449,	// (0x00049ea3) list_vitu2_match_list_pane

0x6ace,	// (0x00049528) bg_popup_sub_pane_cp20_g1

0x6ad6,	// (0x00049530) bg_popup_sub_pane_cp20_g2

0xc7ae,	// (0x0004f208) bg_popup_sub_pane_cp20_g3

0x6ade,	// (0x00049538) bg_popup_sub_pane_cp20_g4

0xc78e,	// (0x0004f1e8) bg_popup_sub_pane_cp20_g5

0x7467,	// (0x00049ec1) bg_popup_sub_pane_cp20_g6

0x6aee,	// (0x00049548) bg_popup_sub_pane_cp20_g7

0x6af6,	// (0x00049550) bg_popup_sub_pane_cp20_g8

0x6afe,	// (0x00049558) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8c0,	// (0x0005231a) bg_popup_sub_pane_cp20_g

0xae54,	// (0x0004d8ae) list_vitu2_match_list_item_pane_ParamLimits

0xae54,	// (0x0004d8ae) list_vitu2_match_list_item_pane

0xae66,	// (0x0004d8c0) list_vitu2_match_list_item_pane_t1

0xa5bf,	// (0x0004d019) bg_popup_sub_pane_cp21

0xcbc8,	// (0x0004f622) grid_vitu2_dropdown_list_pane

0x746f,	// (0x00049ec9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x746f,	// (0x00049ec9) cell_vitu2_dropdown_list_char_pane

0x7490,	// (0x00049eea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7490,	// (0x00049eea) cell_vitu2_dropdown_list_ctrl_pane

0x74bc,	// (0x00049f16) cell_vitu2_dropdown_list_char_pane_g1

0x74c5,	// (0x00049f1f) cell_vitu2_dropdown_list_char_pane_g2

0x74ce,	// (0x00049f28) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8dd,	// (0x00052337) cell_vitu2_dropdown_list_char_pane_g

0x74d7,	// (0x00049f31) cell_vitu2_dropdown_list_char_pane_t1

0x74e5,	// (0x00049f3f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x74e5,	// (0x00049f3f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x74f2,	// (0x00049f4c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x74f2,	// (0x00049f4c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x74ff,	// (0x00049f59) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x74ff,	// (0x00049f59) cell_vitu2_dropdown_list_ctrl_pane_g3

0x750c,	// (0x00049f66) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x750c,	// (0x00049f66) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe91b,	// (0x00051375) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe91b,	// (0x00051375) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8e4,	// (0x0005233e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8e4,	// (0x0005233e) cell_vitu2_dropdown_list_ctrl_pane_g

0x7528,	// (0x00049f82) aid_size_cell_gallery2_ParamLimits

0x7528,	// (0x00049f82) aid_size_cell_gallery2

0x753e,	// (0x00049f98) grid_gallery2_pane_ParamLimits

0x753e,	// (0x00049f98) grid_gallery2_pane

0x7552,	// (0x00049fac) scroll_pane_cp029_ParamLimits

0x7552,	// (0x00049fac) scroll_pane_cp029

0x755e,	// (0x00049fb8) cell_gallery2_pane_ParamLimits

0x755e,	// (0x00049fb8) cell_gallery2_pane

0x7594,	// (0x00049fee) cell_gallery2_pane_g2

0x759e,	// (0x00049ff8) cell_gallery2_pane_g3

0x75a6,	// (0x0004a000) cell_gallery2_pane_g4

0x75ae,	// (0x0004a008) cell_gallery2_pane_g5

0xce8b,	// (0x0004f8e5) grid_highlight_pane_cp10

0x6946,	// (0x000493a0) popup_vitu2_match_list_window_ParamLimits

0x695d,	// (0x000493b7) popup_vitu2_query_window_ParamLimits

0x695d,	// (0x000493b7) popup_vitu2_query_window

0xa5bf,	// (0x0004d019) bg_vitu2_candi_button_pane

0x74bc,	// (0x00049f16) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x74c5,	// (0x00049f1f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x74ce,	// (0x00049f28) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0cfa,	// (0x00043754) bg_button_pane_cp015

0x75b6,	// (0x0004a010) bg_button_pane_cp016

0x75c9,	// (0x0004a023) bg_button_pane_cp017

0xe29f,	// (0x00050cf9) bg_popup_sub_pane_cp22

0x75ed,	// (0x0004a047) popup_vitu2_query_window_g1

0x0d2d,	// (0x00043787) popup_vitu2_query_window_g2

0x0002,

0xf8ef,	// (0x00052349) popup_vitu2_query_window_g

0x0d4c,	// (0x000437a6) popup_vitu2_query_window_t1_ParamLimits

0x0d4c,	// (0x000437a6) popup_vitu2_query_window_t1

0x0d81,	// (0x000437db) popup_vitu2_query_window_t2_ParamLimits

0x0d81,	// (0x000437db) popup_vitu2_query_window_t2

0x0d93,	// (0x000437ed) popup_vitu2_query_window_t3_ParamLimits

0x0d93,	// (0x000437ed) popup_vitu2_query_window_t3

0x75f9,	// (0x0004a053) popup_vitu2_query_window_t4_ParamLimits

0x75f9,	// (0x0004a053) popup_vitu2_query_window_t4

0x761a,	// (0x0004a074) popup_vitu2_query_window_t5_ParamLimits

0x761a,	// (0x0004a074) popup_vitu2_query_window_t5

0x0006,

0xf8f6,	// (0x00052350) popup_vitu2_query_window_t_ParamLimits

0xf8f6,	// (0x00052350) popup_vitu2_query_window_t

0x6ee1,	// (0x0004993b) main_cset_text_pane

0x6f02,	// (0x0004995c) aid_area_touch_slider_ParamLimits

0x6f1e,	// (0x00049978) cset_slider_pane_ParamLimits

0x6f48,	// (0x000499a2) main_cset_slider_pane_g1_ParamLimits

0x6f5d,	// (0x000499b7) main_cset_slider_pane_g2_ParamLimits

0x6f72,	// (0x000499cc) main_cset_slider_pane_g3_ParamLimits

0x6f72,	// (0x000499cc) main_cset_slider_pane_g3

0x6f7e,	// (0x000499d8) main_cset_slider_pane_g4_ParamLimits

0x6f7e,	// (0x000499d8) main_cset_slider_pane_g4

0x6f8d,	// (0x000499e7) main_cset_slider_pane_g5_ParamLimits

0x6f8d,	// (0x000499e7) main_cset_slider_pane_g5

0x6f99,	// (0x000499f3) main_cset_slider_pane_g6_ParamLimits

0x6f99,	// (0x000499f3) main_cset_slider_pane_g6

0xf850,	// (0x000522aa) main_cset_slider_pane_g_ParamLimits

0x7049,	// (0x00049aa3) main_cset_slider_pane_t1_ParamLimits

0x7077,	// (0x00049ad1) main_cset_slider_pane_t2_ParamLimits

0x7091,	// (0x00049aeb) main_cset_slider_pane_t3_ParamLimits

0x70ab,	// (0x00049b05) main_cset_slider_pane_t4_ParamLimits

0x70c5,	// (0x00049b1f) main_cset_slider_pane_t5_ParamLimits

0x70df,	// (0x00049b39) main_cset_slider_pane_t6_ParamLimits

0x70f4,	// (0x00049b4e) main_cset_slider_pane_t7_ParamLimits

0x711e,	// (0x00049b78) main_cset_slider_pane_t8_ParamLimits

0x711e,	// (0x00049b78) main_cset_slider_pane_t8

0x7146,	// (0x00049ba0) main_cset_slider_pane_t9_ParamLimits

0x7146,	// (0x00049ba0) main_cset_slider_pane_t9

0x716e,	// (0x00049bc8) main_cset_slider_pane_t10_ParamLimits

0x716e,	// (0x00049bc8) main_cset_slider_pane_t10

0x7196,	// (0x00049bf0) main_cset_slider_pane_t11_ParamLimits

0x7196,	// (0x00049bf0) main_cset_slider_pane_t11

0x71be,	// (0x00049c18) main_cset_slider_pane_t12_ParamLimits

0x71be,	// (0x00049c18) main_cset_slider_pane_t12

0x71db,	// (0x00049c35) main_cset_slider_pane_t13_ParamLimits

0x71db,	// (0x00049c35) main_cset_slider_pane_t13

0xf875,	// (0x000522cf) main_cset_slider_pane_t_ParamLimits

0xa5bf,	// (0x0004d019) bg_popup_sub_pane_cp011

0x763b,	// (0x0004a095) main_cset_text_pane_g1

0x7643,	// (0x0004a09d) main_cset_text_pane_t1

0x7651,	// (0x0004a0ab) main_cset_text_pane_t2

0x765f,	// (0x0004a0b9) main_cset_text_pane_t3

0x766d,	// (0x0004a0c7) main_cset_text_pane_t4

0x767b,	// (0x0004a0d5) main_cset_text_pane_t5

0x7689,	// (0x0004a0e3) main_cset_text_pane_t6

0x7697,	// (0x0004a0f1) main_cset_text_pane_t7

0x0006,

0xf905,	// (0x0005235f) main_cset_text_pane_t

0xa5bf,	// (0x0004d019) main_cam4_burst_pane

0xa5bf,	// (0x0004d019) main_cam5_pane

0x6e08,	// (0x00049862) bg_button_pane_cp019

0x6e11,	// (0x0004986b) bg_button_pane_cp020

0x6fad,	// (0x00049a07) main_cset_slider_pane_g7_ParamLimits

0x6fad,	// (0x00049a07) main_cset_slider_pane_g7

0x6fb9,	// (0x00049a13) main_cset_slider_pane_g8_ParamLimits

0x6fb9,	// (0x00049a13) main_cset_slider_pane_g8

0x6fc5,	// (0x00049a1f) main_cset_slider_pane_g9_ParamLimits

0x6fc5,	// (0x00049a1f) main_cset_slider_pane_g9

0x6fd1,	// (0x00049a2b) main_cset_slider_pane_g10_ParamLimits

0x6fd1,	// (0x00049a2b) main_cset_slider_pane_g10

0x6fdd,	// (0x00049a37) main_cset_slider_pane_g11_ParamLimits

0x6fdd,	// (0x00049a37) main_cset_slider_pane_g11

0x6fe9,	// (0x00049a43) main_cset_slider_pane_g12_ParamLimits

0x6fe9,	// (0x00049a43) main_cset_slider_pane_g12

0x6ff5,	// (0x00049a4f) main_cset_slider_pane_g13_ParamLimits

0x6ff5,	// (0x00049a4f) main_cset_slider_pane_g13

0x7001,	// (0x00049a5b) main_cset_slider_pane_g14_ParamLimits

0x7001,	// (0x00049a5b) main_cset_slider_pane_g14

0x700d,	// (0x00049a67) main_cset_slider_pane_g15_ParamLimits

0x700d,	// (0x00049a67) main_cset_slider_pane_g15

0x71f8,	// (0x00049c52) main_cset_slider_pane_t14_ParamLimits

0x71f8,	// (0x00049c52) main_cset_slider_pane_t14

0x7231,	// (0x00049c8b) main_cset_slider_pane_t15_ParamLimits

0x7231,	// (0x00049c8b) main_cset_slider_pane_t15

0x76a5,	// (0x0004a0ff) aid_cam4_burst_size_cell_ParamLimits

0x76a5,	// (0x0004a0ff) aid_cam4_burst_size_cell

0x76c5,	// (0x0004a11f) grid_cam4_burst_pane_ParamLimits

0x76c5,	// (0x0004a11f) grid_cam4_burst_pane

0x76fd,	// (0x0004a157) linegrid_cam4_burst_pane_ParamLimits

0x76fd,	// (0x0004a157) linegrid_cam4_burst_pane

0x7721,	// (0x0004a17b) scroll_pane_cp30_ParamLimits

0x7721,	// (0x0004a17b) scroll_pane_cp30

0x772d,	// (0x0004a187) cell_cam4_burst_pane_ParamLimits

0x772d,	// (0x0004a187) cell_cam4_burst_pane

0x777a,	// (0x0004a1d4) linegrid_cam4_burst_pane_g1_ParamLimits

0x777a,	// (0x0004a1d4) linegrid_cam4_burst_pane_g1

0x7787,	// (0x0004a1e1) linegrid_cam4_burst_pane_g2_ParamLimits

0x7787,	// (0x0004a1e1) linegrid_cam4_burst_pane_g2

0x7798,	// (0x0004a1f2) linegrid_cam4_burst_pane_g3_ParamLimits

0x7798,	// (0x0004a1f2) linegrid_cam4_burst_pane_g3

0x0002,

0xf914,	// (0x0005236e) linegrid_cam4_burst_pane_g_ParamLimits

0xf914,	// (0x0005236e) linegrid_cam4_burst_pane_g

0x77a5,	// (0x0004a1ff) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x77a5,	// (0x0004a1ff) linegrid_cam4_burst_pane_g3_copy1

0x77bf,	// (0x0004a219) linegrid_cam4_burst_pane_g4_ParamLimits

0x77bf,	// (0x0004a219) linegrid_cam4_burst_pane_g4

0x77cc,	// (0x0004a226) linegrid_cam4_burst_pane_g5_ParamLimits

0x77cc,	// (0x0004a226) linegrid_cam4_burst_pane_g5

0x77dd,	// (0x0004a237) linegrid_cam4_burst_pane_g6_ParamLimits

0x77dd,	// (0x0004a237) linegrid_cam4_burst_pane_g6

0x77f4,	// (0x0004a24e) linegrid_cam4_burst_pane_g7_ParamLimits

0x77f4,	// (0x0004a24e) linegrid_cam4_burst_pane_g7

0x7801,	// (0x0004a25b) cell_cam4_burst_pane_g1

0x7820,	// (0x0004a27a) main_cam5_pane_t1_ParamLimits

0x7820,	// (0x0004a27a) main_cam5_pane_t1

0x7832,	// (0x0004a28c) main_cam5_pane_t2_ParamLimits

0x7832,	// (0x0004a28c) main_cam5_pane_t2

0x7844,	// (0x0004a29e) main_cam5_pane_t3_ParamLimits

0x7844,	// (0x0004a29e) main_cam5_pane_t3

0x7856,	// (0x0004a2b0) main_cam5_pane_t4_ParamLimits

0x7856,	// (0x0004a2b0) main_cam5_pane_t4

0x786e,	// (0x0004a2c8) main_cam5_pane_t5_ParamLimits

0x786e,	// (0x0004a2c8) main_cam5_pane_t5

0x7882,	// (0x0004a2dc) main_cam5_pane_t6_ParamLimits

0x7882,	// (0x0004a2dc) main_cam5_pane_t6

0x7896,	// (0x0004a2f0) main_cam5_pane_t7_ParamLimits

0x7896,	// (0x0004a2f0) main_cam5_pane_t7

0x78a8,	// (0x0004a302) main_cam5_pane_t8_ParamLimits

0x78a8,	// (0x0004a302) main_cam5_pane_t8

0x78c4,	// (0x0004a31e) main_cam5_pane_t9_ParamLimits

0x78c4,	// (0x0004a31e) main_cam5_pane_t9

0x78d6,	// (0x0004a330) main_cam5_pane_t10_ParamLimits

0x78d6,	// (0x0004a330) main_cam5_pane_t10

0x78e8,	// (0x0004a342) main_cam5_pane_t11_ParamLimits

0x78e8,	// (0x0004a342) main_cam5_pane_t11

0x78fa,	// (0x0004a354) main_cam5_pane_t12_ParamLimits

0x78fa,	// (0x0004a354) main_cam5_pane_t12

0x790f,	// (0x0004a369) main_cam5_pane_t13_ParamLimits

0x790f,	// (0x0004a369) main_cam5_pane_t13

0x000c,

0xf920,	// (0x0005237a) main_cam5_pane_t_ParamLimits

0xf920,	// (0x0005237a) main_cam5_pane_t

0x1706,	// (0x00044160) popup_scut_keymap_window_ParamLimits

0x1706,	// (0x00044160) popup_scut_keymap_window

0x792c,	// (0x0004a386) aid_size_cell_brow_shortcut

0xce8b,	// (0x0004f8e5) bg_popup_window_pane_cp010

0x7938,	// (0x0004a392) grid_scut_pane

0x7944,	// (0x0004a39e) cell_scut_pane_ParamLimits

0x7944,	// (0x0004a39e) cell_scut_pane

0x795b,	// (0x0004a3b5) cell_scut_pane_g1

0x7964,	// (0x0004a3be) cell_scut_pane_t1

0x7973,	// (0x0004a3cd) cell_scut_pane_t2

0x7982,	// (0x0004a3dc) cell_scut_pane_t3

0x0002,

0xf93b,	// (0x00052395) cell_scut_pane_t

0x53f4,	// (0x00047e4e) main_mup3_pane_g8_ParamLimits

0x53f4,	// (0x00047e4e) main_mup3_pane_g8

0x6844,	// (0x0004929e) area_vitu2_query_pane_ParamLimits

0x6844,	// (0x0004929e) area_vitu2_query_pane

0x0d0c,	// (0x00043766) input_focus_pane_cp08

0x7990,	// (0x0004a3ea) area_vitu2_query_pane_g1

0x0e11,	// (0x0004386b) area_vitu2_query_pane_g2

0x0001,

0xf942,	// (0x0005239c) area_vitu2_query_pane_g

0x799c,	// (0x0004a3f6) area_vitu2_query_pane_t1_ParamLimits

0x799c,	// (0x0004a3f6) area_vitu2_query_pane_t1

0x79b0,	// (0x0004a40a) area_vitu2_query_pane_t2_ParamLimits

0x79b0,	// (0x0004a40a) area_vitu2_query_pane_t2

0x0e22,	// (0x0004387c) area_vitu2_query_pane_t3_ParamLimits

0x0e22,	// (0x0004387c) area_vitu2_query_pane_t3

0xae8c,	// (0x0004d8e6) area_vitu2_query_pane_t4_ParamLimits

0xae8c,	// (0x0004d8e6) area_vitu2_query_pane_t4

0xaeb4,	// (0x0004d90e) area_vitu2_query_pane_t5_ParamLimits

0xaeb4,	// (0x0004d90e) area_vitu2_query_pane_t5

0xaedc,	// (0x0004d936) area_vitu2_query_pane_t6_ParamLimits

0xaedc,	// (0x0004d936) area_vitu2_query_pane_t6

0x0006,

0xf947,	// (0x000523a1) area_vitu2_query_pane_t_ParamLimits

0xf947,	// (0x000523a1) area_vitu2_query_pane_t

0x79c4,	// (0x0004a41e) bg_button_pane_cp018

0x79d2,	// (0x0004a42c) bg_button_pane_cp021

0x0e4a,	// (0x000438a4) bg_button_pane_cp022

0x0e59,	// (0x000438b3) input_focus_pane_cp09

0x347f,	// (0x00045ed9) aid_size_touch_mv_arrow_left

0x34a8,	// (0x00045f02) aid_size_touch_mv_arrow_right

0x7025,	// (0x00049a7f) main_cset_slider_pane_g16_ParamLimits

0x7025,	// (0x00049a7f) main_cset_slider_pane_g16

0x7031,	// (0x00049a8b) main_cset_slider_pane_g17_ParamLimits

0x7031,	// (0x00049a8b) main_cset_slider_pane_g17

0x7801,	// (0x0004a25b) cell_cam4_burst_pane_g1_ParamLimits

0xa5bf,	// (0x0004d019) compa_mode_pane

0x7303,	// (0x00049d5d) popup_vtel_slider_window_g3_ParamLimits

0x7303,	// (0x00049d5d) popup_vtel_slider_window_g3

0x731a,	// (0x00049d74) popup_vtel_slider_window_g4_ParamLimits

0x731a,	// (0x00049d74) popup_vtel_slider_window_g4

0x7331,	// (0x00049d8b) popup_vtel_slider_window_t1_ParamLimits

0x7331,	// (0x00049d8b) popup_vtel_slider_window_t1

0xa5bf,	// (0x0004d019) main_cl_pane

0xa921,	// (0x0004d37b) popup_imed_adjust2_window_ParamLimits

0xe29f,	// (0x00050cf9) bg_tb_trans_pane_cp05_ParamLimits

0xebb4,	// (0x0005160e) popup_imed_adjust2_window_g1_ParamLimits

0xebc3,	// (0x0005161d) popup_imed_adjust2_window_g2_ParamLimits

0xebc3,	// (0x0005161d) popup_imed_adjust2_window_g2

0xebcf,	// (0x00051629) popup_imed_adjust2_window_g3_ParamLimits

0xebcf,	// (0x00051629) popup_imed_adjust2_window_g3

0x0002,

0x0282,	// (0x00042cdc) popup_imed_adjust2_window_g_ParamLimits

0x0282,	// (0x00042cdc) popup_imed_adjust2_window_g

0xebdb,	// (0x00051635) popup_imed_adjust2_window_t1_ParamLimits

0xebf3,	// (0x0005164d) slider_imed_adjust_pane_ParamLimits

0xec07,	// (0x00051661) slider_imed_adjust_pane_g1_ParamLimits

0xec17,	// (0x00051671) slider_imed_adjust_pane_g2_ParamLimits

0xec27,	// (0x00051681) slider_imed_adjust_pane_g3_ParamLimits

0xec38,	// (0x00051692) slider_imed_adjust_pane_g4_ParamLimits

0x0289,	// (0x00042ce3) slider_imed_adjust_pane_g_ParamLimits

0x65cd,	// (0x00049027) aid_touch_area_cam4_ParamLimits

0x65cd,	// (0x00049027) aid_touch_area_cam4

0xacd0,	// (0x0004d72a) battery_pane_cp01

0x669c,	// (0x000490f6) main_camera4_pane_g6_ParamLimits

0x669c,	// (0x000490f6) main_camera4_pane_g6

0x66c6,	// (0x00049120) main_camera4_pane_t2_ParamLimits

0x66c6,	// (0x00049120) main_camera4_pane_t2

0x0001,

0xf7c3,	// (0x0005221d) main_camera4_pane_t_ParamLimits

0xf7c3,	// (0x0005221d) main_camera4_pane_t

0x66fb,	// (0x00049155) aid_touch_area_vid4_ParamLimits

0x66fb,	// (0x00049155) aid_touch_area_vid4

0x674f,	// (0x000491a9) main_video4_pane_g5_ParamLimits

0x674f,	// (0x000491a9) main_video4_pane_g5

0x6774,	// (0x000491ce) vid4_progress_pane_ParamLimits

0x6774,	// (0x000491ce) vid4_progress_pane

0x703d,	// (0x00049a97) main_cset_slider_pane_g18_ParamLimits

0x703d,	// (0x00049a97) main_cset_slider_pane_g18

0x7814,	// (0x0004a26e) cell_cam4_burst_pane_g2_ParamLimits

0x7814,	// (0x0004a26e) cell_cam4_burst_pane_g2

0x0001,

0xf91b,	// (0x00052375) cell_cam4_burst_pane_g_ParamLimits

0xf91b,	// (0x00052375) cell_cam4_burst_pane_g

0xc3b8,	// (0x0004ee12) bg_cl_pane_ParamLimits

0xc3b8,	// (0x0004ee12) bg_cl_pane

0x79de,	// (0x0004a438) cl_header_pane_ParamLimits

0x79de,	// (0x0004a438) cl_header_pane

0x79f2,	// (0x0004a44c) cl_listscroll_pane_ParamLimits

0x79f2,	// (0x0004a44c) cl_listscroll_pane

0x7a02,	// (0x0004a45c) bg_cl_pane_g1

0x7a0a,	// (0x0004a464) bg_cl_pane_g2

0x7a12,	// (0x0004a46c) bg_cl_pane_g3

0x7a1a,	// (0x0004a474) bg_cl_pane_g4

0x7a22,	// (0x0004a47c) bg_cl_pane_g5

0x7a2a,	// (0x0004a484) bg_cl_pane_g6

0x7a32,	// (0x0004a48c) bg_cl_pane_g7

0x7a3a,	// (0x0004a494) bg_cl_pane_g8

0x7a42,	// (0x0004a49c) bg_cl_pane_g9

0x0008,

0xf956,	// (0x000523b0) bg_cl_pane_g

0x7a4a,	// (0x0004a4a4) aid_height_cl_leading_ParamLimits

0x7a4a,	// (0x0004a4a4) aid_height_cl_leading

0x7a56,	// (0x0004a4b0) aid_height_cl_text_ParamLimits

0x7a56,	// (0x0004a4b0) aid_height_cl_text

0xdcdd,	// (0x00050737) bg_cl_header_pane_ParamLimits

0xdcdd,	// (0x00050737) bg_cl_header_pane

0x7a75,	// (0x0004a4cf) cl_header_pane_g1_ParamLimits

0x7a75,	// (0x0004a4cf) cl_header_pane_g1

0x7a8b,	// (0x0004a4e5) cl_header_pane_t1_ParamLimits

0x7a8b,	// (0x0004a4e5) cl_header_pane_t1

0x7aa4,	// (0x0004a4fe) cl_list_pane

0x6ef9,	// (0x00049953) hc_scroll_pane_cp01

0xc78e,	// (0x0004f1e8) bg_cl_header_pane_g1

0x6ace,	// (0x00049528) bg_cl_header_pane_g2

0xc7ae,	// (0x0004f208) bg_cl_header_pane_g3

0x6ade,	// (0x00049538) bg_cl_header_pane_g4

0x6ad6,	// (0x00049530) bg_cl_header_pane_g5

0x7467,	// (0x00049ec1) bg_cl_header_pane_g6

0x6af6,	// (0x00049550) bg_cl_header_pane_g7

0x6afe,	// (0x00049558) bg_cl_header_pane_g8

0x6aee,	// (0x00049548) bg_cl_header_pane_g9

0x0008,

0xf969,	// (0x000523c3) bg_cl_header_pane_g

0x7aad,	// (0x0004a507) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7aad,	// (0x0004a507) hc_cl_list_double_graphic_heading_pane

0x7abe,	// (0x0004a518) hc_cl_list_single_graphic_pane_ParamLimits

0x7abe,	// (0x0004a518) hc_cl_list_single_graphic_pane

0x7ad4,	// (0x0004a52e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7ad4,	// (0x0004a52e) hc_cl_list_single_graphic_pane_g1

0x7ae0,	// (0x0004a53a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7ae0,	// (0x0004a53a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf97c,	// (0x000523d6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf97c,	// (0x000523d6) hc_cl_list_single_graphic_pane_g

0x7af4,	// (0x0004a54e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7af4,	// (0x0004a54e) hc_cl_list_single_graphic_pane_t1

0x7ad4,	// (0x0004a52e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7ad4,	// (0x0004a52e) hc_cl_list_double_graphic_heading_pane_g1

0x7b09,	// (0x0004a563) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7b09,	// (0x0004a563) hc_cl_list_double_graphic_heading_pane_g2

0x7b1d,	// (0x0004a577) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7b1d,	// (0x0004a577) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf981,	// (0x000523db) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf981,	// (0x000523db) hc_cl_list_double_graphic_heading_pane_g

0x7b31,	// (0x0004a58b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7b31,	// (0x0004a58b) hc_cl_list_double_graphic_heading_pane_t1

0x7b46,	// (0x0004a5a0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7b46,	// (0x0004a5a0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf988,	// (0x000523e2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf988,	// (0x000523e2) hc_cl_list_double_graphic_heading_pane_t

0x7b5b,	// (0x0004a5b5) vid4_progress_pane_g1

0x7b6d,	// (0x0004a5c7) vid4_progress_pane_g2

0xa8ef,	// (0x0004d349) vid4_progress_pane_g3

0xaf30,	// (0x0004d98a) vid4_progress_pane_g4

0x0004,

0xf98d,	// (0x000523e7) vid4_progress_pane_g

0xaf4e,	// (0x0004d9a8) vid4_progress_pane_t1

0xaf63,	// (0x0004d9bd) vid4_progress_pane_t2

0x0002,

0xf998,	// (0x000523f2) vid4_progress_pane_t

0xaf8e,	// (0x0004d9e8) wait_bar_pane_cp07

0xe49a,	// (0x00050ef4) blid_firmament_pane_ParamLimits

0xe4dd,	// (0x00050f37) popup_blid_sat_info2_window_g1

0xe501,	// (0x00050f5b) popup_blid_sat_info2_window_t3

0xe50f,	// (0x00050f69) popup_blid_sat_info2_window_t4

0xe51d,	// (0x00050f77) popup_blid_sat_info2_window_t5

0xe52b,	// (0x00050f85) popup_blid_sat_info2_window_t6

0xe53b,	// (0x00050f95) popup_blid_sat_info2_window_t7

0xe549,	// (0x00050fa3) popup_blid_sat_info2_window_t8

0xe557,	// (0x00050fb1) popup_blid_sat_info2_window_t9

0xe565,	// (0x00050fbf) popup_blid_sat_info2_window_t10

0xe638,	// (0x00051092) aid_firma_cardinal_ParamLimits

0xe64c,	// (0x000510a6) blid_firmament_pane_t1_ParamLimits

0xe663,	// (0x000510bd) blid_firmament_pane_t2_ParamLimits

0xe67a,	// (0x000510d4) blid_firmament_pane_t3_ParamLimits

0xe691,	// (0x000510eb) blid_firmament_pane_t4_ParamLimits

0x017b,	// (0x00042bd5) blid_firmament_pane_t_ParamLimits

0xe6a8,	// (0x00051102) blid_sat_info_pane_ParamLimits

0xdcdd,	// (0x00050737) main_cam_set_pane_ParamLimits

0x5ca6,	// (0x00048700) aid_size_cell_colour_35_ParamLimits

0x5cc6,	// (0x00048720) aid_size_cell_colour_112_ParamLimits

0x5ce6,	// (0x00048740) aid_size_cell_effect_ParamLimits

0xe29f,	// (0x00050cf9) bg_tb_trans_pane_cp02_ParamLimits

0xc9da,	// (0x0004f434) heading_imed_pane_ParamLimits

0x5d06,	// (0x00048760) listscroll_imed_pane_ParamLimits

0xd8b7,	// (0x00050311) popup_call2_audio_first_window_g5_ParamLimits

0xd8b7,	// (0x00050311) popup_call2_audio_first_window_g5

0x6278,	// (0x00048cd2) aid_size_touch_image3_arrow_left_ParamLimits

0x6278,	// (0x00048cd2) aid_size_touch_image3_arrow_left

0x62a4,	// (0x00048cfe) aid_size_touch_image3_arrow_right_ParamLimits

0x62a4,	// (0x00048cfe) aid_size_touch_image3_arrow_right

0xaf79,	// (0x0004d9d3) vid4_progress_pane_t3

0x6019,	// (0x00048a73) main_hwr_training_symbol_option_pane_ParamLimits

0x6019,	// (0x00048a73) main_hwr_training_symbol_option_pane

0xeea1,	// (0x000518fb) popup_hwr_training_preview_window_ParamLimits

0xeea1,	// (0x000518fb) popup_hwr_training_preview_window

0x6039,	// (0x00048a93) hwr_training_navi_pane_g5_ParamLimits

0x6039,	// (0x00048a93) hwr_training_navi_pane_g5

0x6a16,	// (0x00049470) popup_char_count_window

0xdcdd,	// (0x00050737) bg_popup_sub_pane_cp20_ParamLimits

0x7449,	// (0x00049ea3) list_vitu2_match_list_pane_ParamLimits

0x7458,	// (0x00049eb2) vitu2_page_scroll_pane_ParamLimits

0x7458,	// (0x00049eb2) vitu2_page_scroll_pane

0x7b88,	// (0x0004a5e2) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7b88,	// (0x0004a5e2) list_single_hwr_training_symbol_option_pane

0x7b9b,	// (0x0004a5f5) list_single_hwr_training_symbol_option_pane_g1

0x7ba3,	// (0x0004a5fd) list_single_hwr_training_symbol_option_pane_t1

0x7bb1,	// (0x0004a60b) bg_button_pane_cp023

0x7bba,	// (0x0004a614) bg_button_pane_cp024

0x7bed,	// (0x0004a647) vitu2_page_scroll_pane_g1

0x7bf5,	// (0x0004a64f) vitu2_page_scroll_pane_g2

0x0001,

0xf99f,	// (0x000523f9) vitu2_page_scroll_pane_g

0x7bfd,	// (0x0004a657) vitu2_page_scroll_pane_t1

0x7c0c,	// (0x0004a666) popup_char_count_window_g1

0x7c15,	// (0x0004a66f) popup_char_count_window_g2

0x7c1e,	// (0x0004a678) popup_char_count_window_g3

0x0002,

0xf9a4,	// (0x000523fe) popup_char_count_window_g

0x7c27,	// (0x0004a681) popup_char_count_window_t1

0xa5bf,	// (0x0004d019) main_vded2_pane

0xeba0,	// (0x000515fa) aid_size_cell_imed_line

0xebaa,	// (0x00051604) grid_imed_line_width_pane

0xad88,	// (0x0004d7e2) vid4_indicators_pane_g4

0x7c35,	// (0x0004a68f) cell_imed_line_width_pane_ParamLimits

0x7c35,	// (0x0004a68f) cell_imed_line_width_pane

0x7c49,	// (0x0004a6a3) cell_imed_line_width_pane_g1

0xe600,	// (0x0005105a) cell_imed_line_width_pane_g2

0x0001,

0xf9ab,	// (0x00052405) cell_imed_line_width_pane_g

0x7c52,	// (0x0004a6ac) main_vded2_pane_g1_ParamLimits

0x7c52,	// (0x0004a6ac) main_vded2_pane_g1

0x7c68,	// (0x0004a6c2) main_vded2_pane_g2_ParamLimits

0x7c68,	// (0x0004a6c2) main_vded2_pane_g2

0x0001,

0xf9b0,	// (0x0005240a) main_vded2_pane_g_ParamLimits

0xf9b0,	// (0x0005240a) main_vded2_pane_g

0x7c7a,	// (0x0004a6d4) vded2_slider_pane_ParamLimits

0x7c7a,	// (0x0004a6d4) vded2_slider_pane

0x7c8a,	// (0x0004a6e4) aid_size_touch_vded2_end

0x7c94,	// (0x0004a6ee) aid_size_touch_vded2_playhead

0x7c9e,	// (0x0004a6f8) aid_size_touch_vded2_start

0x7ca6,	// (0x0004a700) vded2_slider_bg_pane

0x7caf,	// (0x0004a709) vded2_slider_pane_g1

0x7cb8,	// (0x0004a712) vded2_slider_pane_g2

0x7cc0,	// (0x0004a71a) vded2_slider_pane_g3

0x0002,

0xf9b5,	// (0x0005240f) vded2_slider_pane_g

0x7ccb,	// (0x0004a725) vded2_slider_bg_pane_g1

0x7cd4,	// (0x0004a72e) vded2_slider_bg_pane_g2

0x7cdd,	// (0x0004a737) vded2_slider_bg_pane_g3

0x0002,

0xf9bc,	// (0x00052416) vded2_slider_bg_pane_g

0x3a71,	// (0x000464cb) aid_postcard_touch_down_pane_ParamLimits

0x3a71,	// (0x000464cb) aid_postcard_touch_down_pane

0x3a87,	// (0x000464e1) aid_postcard_touch_up_pane_ParamLimits

0x3a87,	// (0x000464e1) aid_postcard_touch_up_pane

0xa5bf,	// (0x0004d019) main_blid2_pane

0xa907,	// (0x0004d361) popup_blid2_search_window

0xa5bf,	// (0x0004d019) blid2_gps_pane

0xa5bf,	// (0x0004d019) blid2_navig_pane

0xa5bf,	// (0x0004d019) blid2_search_pane

0xa5bf,	// (0x0004d019) blid2_tripm_pane

0x7ce6,	// (0x0004a740) blid2_search_pane_g1_ParamLimits

0x7ce6,	// (0x0004a740) blid2_search_pane_g1

0x7d00,	// (0x0004a75a) blid2_search_pane_t1_ParamLimits

0x7d00,	// (0x0004a75a) blid2_search_pane_t1

0x7d12,	// (0x0004a76c) aid_size_cell_blid2_gps_ParamLimits

0x7d12,	// (0x0004a76c) aid_size_cell_blid2_gps

0x7d2a,	// (0x0004a784) blid2_gps_pane_g1_ParamLimits

0x7d2a,	// (0x0004a784) blid2_gps_pane_g1

0x7d3e,	// (0x0004a798) grid_blid2_satellite_pane_ParamLimits

0x7d3e,	// (0x0004a798) grid_blid2_satellite_pane

0x7d58,	// (0x0004a7b2) blid2_navig_pane_g1_ParamLimits

0x7d58,	// (0x0004a7b2) blid2_navig_pane_g1

0x7d64,	// (0x0004a7be) blid2_navig_pane_t1_ParamLimits

0x7d64,	// (0x0004a7be) blid2_navig_pane_t1

0x7d7f,	// (0x0004a7d9) blid2_navig_pane_t2_ParamLimits

0x7d7f,	// (0x0004a7d9) blid2_navig_pane_t2

0x0001,

0xf9c3,	// (0x0005241d) blid2_navig_pane_t_ParamLimits

0xf9c3,	// (0x0005241d) blid2_navig_pane_t

0x7d9a,	// (0x0004a7f4) blid2_navig_ring_pane_ParamLimits

0x7d9a,	// (0x0004a7f4) blid2_navig_ring_pane

0x7db3,	// (0x0004a80d) blid2_speed_pane_ParamLimits

0x7db3,	// (0x0004a80d) blid2_speed_pane

0x7dbf,	// (0x0004a819) blid2_tripm_pane_g1_ParamLimits

0x7dbf,	// (0x0004a819) blid2_tripm_pane_g1

0x7dd8,	// (0x0004a832) blid2_tripm_pane_g2_ParamLimits

0x7dd8,	// (0x0004a832) blid2_tripm_pane_g2

0x7dec,	// (0x0004a846) blid2_tripm_pane_g3_ParamLimits

0x7dec,	// (0x0004a846) blid2_tripm_pane_g3

0x7e00,	// (0x0004a85a) blid2_tripm_pane_g4_ParamLimits

0x7e00,	// (0x0004a85a) blid2_tripm_pane_g4

0x7e14,	// (0x0004a86e) blid2_tripm_pane_g5_ParamLimits

0x7e14,	// (0x0004a86e) blid2_tripm_pane_g5

0x0005,

0xf9c8,	// (0x00052422) blid2_tripm_pane_g_ParamLimits

0xf9c8,	// (0x00052422) blid2_tripm_pane_g

0x7e3a,	// (0x0004a894) blid2_tripm_pane_t1_ParamLimits

0x7e3a,	// (0x0004a894) blid2_tripm_pane_t1

0x7e55,	// (0x0004a8af) blid2_tripm_pane_t2_ParamLimits

0x7e55,	// (0x0004a8af) blid2_tripm_pane_t2

0x7e6e,	// (0x0004a8c8) blid2_tripm_pane_t3_ParamLimits

0x7e6e,	// (0x0004a8c8) blid2_tripm_pane_t3

0x0003,

0xf9d5,	// (0x0005242f) blid2_tripm_pane_t_ParamLimits

0xf9d5,	// (0x0005242f) blid2_tripm_pane_t

0x7eb5,	// (0x0004a90f) cell_blid2_satellite_pane_ParamLimits

0x7eb5,	// (0x0004a90f) cell_blid2_satellite_pane

0x7ed3,	// (0x0004a92d) cell_blid2_satellite_pane_g1

0x7edc,	// (0x0004a936) cell_blid2_satellite_pane_t1

0xe6b8,	// (0x00051112) blid2_speed_pane_g1

0x7eea,	// (0x0004a944) blid2_speed_pane_t1

0x7ef8,	// (0x0004a952) blid2_speed_pane_t2

0x0001,

0xf9de,	// (0x00052438) blid2_speed_pane_t

0xe6b8,	// (0x00051112) blid2_navig_ring_pane_g1

0x7f06,	// (0x0004a960) blid2_navig_ring_pane_g2

0x7f0e,	// (0x0004a968) blid2_navig_ring_pane_g3

0x7f16,	// (0x0004a970) blid2_navig_ring_pane_g4

0x7f1e,	// (0x0004a978) blid2_navig_ring_pane_g5

0x0004,

0xf9e3,	// (0x0005243d) blid2_navig_ring_pane_g

0xa5bf,	// (0x0004d019) bg_popup_window_pane_cp011

0x7f26,	// (0x0004a980) popup_blid2_search_window_g1

0x7f2e,	// (0x0004a988) popup_blid2_search_window_t1

0x7f3c,	// (0x0004a996) popup_blid2_search_window_t2

0x0001,

0xf9ee,	// (0x00052448) popup_blid2_search_window_t

0xc69d,	// (0x0004f0f7) main_browser_pane_g1

0xc3b8,	// (0x0004ee12) main_browser_pane_ParamLimits

0xdcdd,	// (0x00050737) bg_button_pane_cp011_ParamLimits

0x6ab0,	// (0x0004950a) cell_vitu2_function_pane_g1_ParamLimits

0xe29f,	// (0x00050cf9) bg_popup_sub_pane_cp22_ParamLimits

0x0d0c,	// (0x00043766) input_focus_pane_cp08_ParamLimits

0x75dc,	// (0x0004a036) popup_vitu2_query_button_pane_ParamLimits

0x75dc,	// (0x0004a036) popup_vitu2_query_button_pane

0x0d23,	// (0x0004377d) popup_vitu2_query_input_button_pane

0x75ed,	// (0x0004a047) popup_vitu2_query_window_g1_ParamLimits

0x0d2d,	// (0x00043787) popup_vitu2_query_window_g2_ParamLimits

0xf8ef,	// (0x00052349) popup_vitu2_query_window_g_ParamLimits

0xa5bf,	// (0x0004d019) bg_button_pane_cp026

0x7f4a,	// (0x0004a9a4) popup_vitu2_query_input_button_pane_g1

0xa5bf,	// (0x0004d019) bg_button_pane_cp025

0x7f52,	// (0x0004a9ac) popup_vitu2_query_button_pane_t1

0x510b,	// (0x00047b65) main_mp3_pane_t6

0x5119,	// (0x00047b73) popup_slider_window_cp01

0xacec,	// (0x0004d746) cam4_battery_pane

0xad45,	// (0x0004d79f) cam4_battery_pane_cp02

0xaf28,	// (0x0004d982) cam4_battery_pane_cp01

0xaf28,	// (0x0004d982) cam4_battery_pane_cp03

0xe6b8,	// (0x00051112) cam4_battery_pane_g1

0xf0ce,	// (0x00051b28) cam4_battery_pane_g2

0x0001,

0xf9f3,	// (0x0005244d) cam4_battery_pane_g

0xe573,	// (0x00050fcd) popup_blid_sat_info2_window_t11

0x347f,	// (0x00045ed9) aid_size_touch_mv_arrow_left_ParamLimits

0x34a8,	// (0x00045f02) aid_size_touch_mv_arrow_right_ParamLimits

0xcdeb,	// (0x0004f845) navi_pane_g1_ParamLimits

0x34e7,	// (0x00045f41) navi_pane_g2_ParamLimits

0x3515,	// (0x00045f6f) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00051e4f) navi_pane_g_ParamLimits

0x356d,	// (0x00045fc7) navi_pane_mv_t1_ParamLimits

0x5d12,	// (0x0004876c) grid_imed_effect_pane_ParamLimits

0x246d,	// (0x00044ec7) aid_placing_vt_slider_lsc

0xc5ec,	// (0x0004f046) aid_placing_vt_slider_prt

0xdcdd,	// (0x00050737) bg_tb_trans_pane_cp01_ParamLimits

0xe83b,	// (0x00051295) popup_image_details_window_g1_ParamLimits

0xe84e,	// (0x000512a8) popup_image_details_window_g2_ParamLimits

0xe863,	// (0x000512bd) popup_image_details_window_g3_ParamLimits

0xe863,	// (0x000512bd) popup_image_details_window_g3

0x01c0,	// (0x00042c1a) popup_image_details_window_g_ParamLimits

0xe877,	// (0x000512d1) popup_image_details_window_t1_ParamLimits

0xe889,	// (0x000512e3) popup_image_details_window_t2_ParamLimits

0xe8a2,	// (0x000512fc) popup_image_details_window_t3_ParamLimits

0xe8b6,	// (0x00051310) popup_image_details_window_t4_ParamLimits

0xe8d1,	// (0x0005132b) popup_image_details_window_t5_ParamLimits

0x01c7,	// (0x00042c21) popup_image_details_window_t_ParamLimits

0x7a62,	// (0x0004a4bc) cl_header_name_pane_ParamLimits

0x7a62,	// (0x0004a4bc) cl_header_name_pane

0x7f60,	// (0x0004a9ba) cl_header_name_pane_t1_ParamLimits

0x7f60,	// (0x0004a9ba) cl_header_name_pane_t1

0x7f81,	// (0x0004a9db) cl_header_name_pane_t2_ParamLimits

0x7f81,	// (0x0004a9db) cl_header_name_pane_t2

0x7fc3,	// (0x0004aa1d) cl_header_name_pane_t3_ParamLimits

0x7fc3,	// (0x0004aa1d) cl_header_name_pane_t3

0x0002,

0xf9f8,	// (0x00052452) cl_header_name_pane_t_ParamLimits

0xf9f8,	// (0x00052452) cl_header_name_pane_t

0x353e,	// (0x00045f98) navi_pane_mv_g2_ParamLimits

0x69f0,	// (0x0004944a) field_vitu2_entry_pane_g1_ParamLimits

0x69fc,	// (0x00049456) field_vitu2_entry_pane_g2_ParamLimits

0x6a08,	// (0x00049462) field_vitu2_entry_pane_g3_ParamLimits

0x6a08,	// (0x00049462) field_vitu2_entry_pane_g3

0xf7f5,	// (0x0005224f) field_vitu2_entry_pane_g_ParamLimits

0x6a2c,	// (0x00049486) cell_vitu2_itu_pane_g1_ParamLimits

0x6a3c,	// (0x00049496) cell_vitu2_itu_pane_g2_ParamLimits

0x6a3c,	// (0x00049496) cell_vitu2_itu_pane_g2

0x0001,

0xf801,	// (0x0005225b) cell_vitu2_itu_pane_g_ParamLimits

0xf801,	// (0x0005225b) cell_vitu2_itu_pane_g

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp05_ParamLimits

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp05

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp03

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp04

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp10_ParamLimits

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp10

0x0e4a,	// (0x000438a4) bg_vkb2_func_pane_cp08

0x79c4,	// (0x0004a41e) bg_vkb2_func_pane_cp06

0x79d2,	// (0x0004a42c) bg_vkb2_func_pane_cp07

0x7bc3,	// (0x0004a61d) bg_vkb2_func_pane_cp11_ParamLimits

0x7bc3,	// (0x0004a61d) bg_vkb2_func_pane_cp11

0x7bd8,	// (0x0004a632) bg_vkb2_func_pane_cp12_ParamLimits

0x7bd8,	// (0x0004a632) bg_vkb2_func_pane_cp12

0xa5bf,	// (0x0004d019) bg_vkb2_func_pane_cp09

0x6ace,	// (0x00049528) bg_vkb2_func_pane_g1

0xc7ae,	// (0x0004f208) bg_vkb2_func_pane_g2

0x6ad6,	// (0x00049530) bg_vkb2_func_pane_g3

0x6ade,	// (0x00049538) bg_vkb2_func_pane_g4

0x7467,	// (0x00049ec1) bg_vkb2_func_pane_g5

0x6af6,	// (0x00049550) bg_vkb2_func_pane_g6

0x6afe,	// (0x00049558) bg_vkb2_func_pane_g7

0x6aee,	// (0x00049548) bg_vkb2_func_pane_g8

0xc78e,	// (0x0004f1e8) bg_vkb2_func_pane_g9

0x0008,

0xf9ff,	// (0x00052459) bg_vkb2_func_pane_g

0x7e28,	// (0x0004a882) blid2_tripm_pane_g6_ParamLimits

0x7e28,	// (0x0004a882) blid2_tripm_pane_g6

0xef75,	// (0x000519cf) mp4_progress_pane_g1

0x7ea1,	// (0x0004a8fb) blid2_tripm_values_pane_ParamLimits

0x7ea1,	// (0x0004a8fb) blid2_tripm_values_pane

0x7ff4,	// (0x0004aa4e) blid2_tripm_values_pane_t1

0x8002,	// (0x0004aa5c) blid2_tripm_values_pane_t2

0x8010,	// (0x0004aa6a) blid2_tripm_values_pane_t3

0x801e,	// (0x0004aa78) blid2_tripm_values_pane_t4

0x802c,	// (0x0004aa86) blid2_tripm_values_pane_t5

0x803a,	// (0x0004aa94) blid2_tripm_values_pane_t6

0x8048,	// (0x0004aaa2) blid2_tripm_values_pane_t7

0x8056,	// (0x0004aab0) blid2_tripm_values_pane_t8

0x8064,	// (0x0004aabe) blid2_tripm_values_pane_t9

0x0008,

0xfa12,	// (0x0005246c) blid2_tripm_values_pane_t

0x24af,	// (0x00044f09) call_video_pane_t1_ParamLimits

0x24cd,	// (0x00044f27) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00051cd8) call_video_pane_t_ParamLimits

0x0b05,	// (0x0004355f) msg_header_pane_g1_ParamLimits

0xd014,	// (0x0004fa6e) msg_header_pane_g2_ParamLimits

0xd014,	// (0x0004fa6e) msg_header_pane_g2

0x0001,

0xf498,	// (0x00051ef2) msg_header_pane_g_ParamLimits

0xf498,	// (0x00051ef2) msg_header_pane_g

0xc3b8,	// (0x0004ee12) main_clock2_pane_ParamLimits

0x5a25,	// (0x0004847f) grid_clock2_toolbar_pane_ParamLimits

0x5a25,	// (0x0004847f) grid_clock2_toolbar_pane

0x5a25,	// (0x0004847f) listscroll_clock2_pane_ParamLimits

0x5a25,	// (0x0004847f) listscroll_clock2_pane

0x5b07,	// (0x00048561) main_clock2_pane_t3_ParamLimits

0x5b07,	// (0x00048561) main_clock2_pane_t3

0x5b2a,	// (0x00048584) main_clock2_pane_t4_ParamLimits

0x5b2a,	// (0x00048584) main_clock2_pane_t4

0x8072,	// (0x0004aacc) cell_clock2_toolbar_pane

0x807a,	// (0x0004aad4) cell_clock2_toolbar_pane_cp01

0x807a,	// (0x0004aad4) cell_clock2_toolbar_pane_cp02

0x8082,	// (0x0004aadc) cell_clock2_toolbar_pane_cp03

0x808a,	// (0x0004aae4) list_clock2_pane

0xcd42,	// (0x0004f79c) scroll_pane_cp10

0x8092,	// (0x0004aaec) list_single_clock2_pane_ParamLimits

0x8092,	// (0x0004aaec) list_single_clock2_pane

0xce8b,	// (0x0004f8e5) list_highlight_pane_cp08

0x809f,	// (0x0004aaf9) list_single_clock2_pane_t1

0x80ad,	// (0x0004ab07) list_single_clock2_pane_t2

0x0001,

0xfa25,	// (0x0005247f) list_single_clock2_pane_t

0xa5bf,	// (0x0004d019) bg_button_pane_cp10

0x80bb,	// (0x0004ab15) cell_clock2_toolbar_pane_g1

0x39fd,	// (0x00046457) aid_main_viewer_pane_g1_ParamLimits

0x39fd,	// (0x00046457) aid_main_viewer_pane_g1

0x3a0b,	// (0x00046465) aid_main_viewer_pane_g2_ParamLimits

0x3a0b,	// (0x00046465) aid_main_viewer_pane_g2

0x3a19,	// (0x00046473) aid_main_viewer_pane_g3_ParamLimits

0x3a19,	// (0x00046473) aid_main_viewer_pane_g3

0x3a28,	// (0x00046482) aid_main_viewer_pane_g4_ParamLimits

0x3a28,	// (0x00046482) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00051f03) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00051f03) aid_main_viewer_pane_g

0x432e,	// (0x00046d88) main_calc_pane_ParamLimits

0x4342,	// (0x00046d9c) main_dialer2_pane_ParamLimits

0xa5bf,	// (0x0004d019) main_cam6_pane

0xa5bf,	// (0x0004d019) main_vid6_pane

0x5a31,	// (0x0004848b) listscroll_gen_pane_cp06_ParamLimits

0x5a31,	// (0x0004848b) listscroll_gen_pane_cp06

0x5b4d,	// (0x000485a7) main_clock2_pane_t5_ParamLimits

0x5b4d,	// (0x000485a7) main_clock2_pane_t5

0x5ba7,	// (0x00048601) aid_call2_pane_cp10_ParamLimits

0x5bb9,	// (0x00048613) aid_call_pane_cp10_ParamLimits

0xcdc0,	// (0x0004f81a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcdc0,	// (0x0004f81a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5bcb,	// (0x00048625) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5bcb,	// (0x00048625) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcdc0,	// (0x0004f81a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf714,	// (0x0005216e) popup_clock_analogue_window_cp10_g_ParamLimits

0x5bdd,	// (0x00048637) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6225,	// (0x00048c7f) cell_dialer2_keypad_pane_g2_ParamLimits

0x6225,	// (0x00048c7f) cell_dialer2_keypad_pane_g2

0x0001,

0xf794,	// (0x000521ee) cell_dialer2_keypad_pane_g_ParamLimits

0xf794,	// (0x000521ee) cell_dialer2_keypad_pane_g

0x6241,	// (0x00048c9b) cell_dialer2_keypad_pane_t1

0x6ed3,	// (0x0004992d) main_cset_text2_pane_ParamLimits

0x6ed3,	// (0x0004992d) main_cset_text2_pane

0x7990,	// (0x0004a3ea) area_vitu2_query_pane_g1_ParamLimits

0x0e11,	// (0x0004386b) area_vitu2_query_pane_g2_ParamLimits

0xf942,	// (0x0005239c) area_vitu2_query_pane_g_ParamLimits

0xaf04,	// (0x0004d95e) area_vitu2_query_pane_t7_ParamLimits

0xaf04,	// (0x0004d95e) area_vitu2_query_pane_t7

0x79c4,	// (0x0004a41e) bg_button_pane_cp018_ParamLimits

0x79d2,	// (0x0004a42c) bg_button_pane_cp021_ParamLimits

0x0e4a,	// (0x000438a4) bg_button_pane_cp022_ParamLimits

0x0e4a,	// (0x000438a4) bg_vkb2_func_pane_cp08_ParamLimits

0x79c4,	// (0x0004a41e) bg_vkb2_func_pane_cp06_ParamLimits

0x79d2,	// (0x0004a42c) bg_vkb2_func_pane_cp07_ParamLimits

0x0e59,	// (0x000438b3) input_focus_pane_cp09_ParamLimits

0xaff1,	// (0x0004da4b) cam6_autofocus_pane_ParamLimits

0xaff1,	// (0x0004da4b) cam6_autofocus_pane

0x80c3,	// (0x0004ab1d) cam6_image_uncrop_pane_ParamLimits

0x80c3,	// (0x0004ab1d) cam6_image_uncrop_pane

0x80d2,	// (0x0004ab2c) cam6_indi_pane_ParamLimits

0x80d2,	// (0x0004ab2c) cam6_indi_pane

0x80e8,	// (0x0004ab42) cam6_mode_pane_ParamLimits

0x80e8,	// (0x0004ab42) cam6_mode_pane

0x80fa,	// (0x0004ab54) cam6_timer_pane_ParamLimits

0x80fa,	// (0x0004ab54) cam6_timer_pane

0x8106,	// (0x0004ab60) cam6_zoom_pane_ParamLimits

0x8106,	// (0x0004ab60) cam6_zoom_pane

0x8112,	// (0x0004ab6c) cam6_mode_pane_g1_ParamLimits

0x8112,	// (0x0004ab6c) cam6_mode_pane_g1

0x8122,	// (0x0004ab7c) cam6_mode_pane_g2_ParamLimits

0x8122,	// (0x0004ab7c) cam6_mode_pane_g2

0x8132,	// (0x0004ab8c) cam6_mode_pane_g3_ParamLimits

0x8132,	// (0x0004ab8c) cam6_mode_pane_g3

0x8142,	// (0x0004ab9c) cam6_mode_pane_g4_ParamLimits

0x8142,	// (0x0004ab9c) cam6_mode_pane_g4

0x0003,

0xfa2a,	// (0x00052484) cam6_mode_pane_g_ParamLimits

0xfa2a,	// (0x00052484) cam6_mode_pane_g

0x8152,	// (0x0004abac) bg_tb_trans_pane_cp08_ParamLimits

0x8152,	// (0x0004abac) bg_tb_trans_pane_cp08

0x8160,	// (0x0004abba) cam6_battery_pane_ParamLimits

0x8160,	// (0x0004abba) cam6_battery_pane

0x8176,	// (0x0004abd0) cam6_indi_pane_g1_ParamLimits

0x8176,	// (0x0004abd0) cam6_indi_pane_g1

0x8188,	// (0x0004abe2) cam6_indi_pane_g2_ParamLimits

0x8188,	// (0x0004abe2) cam6_indi_pane_g2

0x819a,	// (0x0004abf4) cam6_indi_pane_g3_ParamLimits

0x819a,	// (0x0004abf4) cam6_indi_pane_g3

0x0002,

0xfa33,	// (0x0005248d) cam6_indi_pane_g_ParamLimits

0xfa33,	// (0x0005248d) cam6_indi_pane_g

0x81ac,	// (0x0004ac06) cam6_indi_pane_t1_ParamLimits

0x81ac,	// (0x0004ac06) cam6_indi_pane_t1

0x81d2,	// (0x0004ac2c) cam6_autofocus_pane_g1

0x81da,	// (0x0004ac34) cam6_autofocus_pane_g2

0x81e2,	// (0x0004ac3c) cam6_autofocus_pane_g3

0x81ea,	// (0x0004ac44) cam6_autofocus_pane_g4

0x0003,

0xfa3a,	// (0x00052494) cam6_autofocus_pane_g

0x81f2,	// (0x0004ac4c) cam6_timer_pane_g1

0x81fa,	// (0x0004ac54) cam6_timer_pane_t1

0x8208,	// (0x0004ac62) cam6_zoom_cont_pane

0x8210,	// (0x0004ac6a) cam6_zoom_pane_g1

0x8218,	// (0x0004ac72) cam6_zoom_pane_g2

0x8220,	// (0x0004ac7a) cam6_zoom_pane_g3

0x0002,

0xfa43,	// (0x0005249d) cam6_zoom_pane_g

0xe6b8,	// (0x00051112) cam6_battery_pane_g1

0xe6b8,	// (0x00051112) cam6_battery_pane_g2

0x0001,

0x0184,	// (0x00042bde) cam6_battery_pane_g

0x8228,	// (0x0004ac82) cam6_zoom_cont_pane_g1

0x8231,	// (0x0004ac8b) cam6_zoom_cont_pane_g2

0x823a,	// (0x0004ac94) cam6_zoom_cont_pane_g3

0x0002,

0xfa4a,	// (0x000524a4) cam6_zoom_cont_pane_g

0x8257,	// (0x0004acb1) cam6_mode_pane_cp_ParamLimits

0x8257,	// (0x0004acb1) cam6_mode_pane_cp

0x8106,	// (0x0004ab60) cam6_zoom_pane_cp_ParamLimits

0x8106,	// (0x0004ab60) cam6_zoom_pane_cp

0x8269,	// (0x0004acc3) vid6_image_uncrop_cif_pane_ParamLimits

0x8269,	// (0x0004acc3) vid6_image_uncrop_cif_pane

0x8279,	// (0x0004acd3) vid6_image_uncrop_nhd_pane_ParamLimits

0x8279,	// (0x0004acd3) vid6_image_uncrop_nhd_pane

0x80c3,	// (0x0004ab1d) vid6_image_uncrop_vga_pane_ParamLimits

0x80c3,	// (0x0004ab1d) vid6_image_uncrop_vga_pane

0x8298,	// (0x0004acf2) vid6_image_uncrop_wvga_pane_ParamLimits

0x8298,	// (0x0004acf2) vid6_image_uncrop_wvga_pane

0x82a7,	// (0x0004ad01) vid6_indi_pane_ParamLimits

0x82a7,	// (0x0004ad01) vid6_indi_pane

0x8152,	// (0x0004abac) bg_tb_trans_pane_cp09_ParamLimits

0x8152,	// (0x0004abac) bg_tb_trans_pane_cp09

0x82bf,	// (0x0004ad19) cam6_battery_pane_cp_ParamLimits

0x82bf,	// (0x0004ad19) cam6_battery_pane_cp

0x82cb,	// (0x0004ad25) vid6_indi_pane_g1_ParamLimits

0x82cb,	// (0x0004ad25) vid6_indi_pane_g1

0x82dd,	// (0x0004ad37) vid6_indi_pane_g2_ParamLimits

0x82dd,	// (0x0004ad37) vid6_indi_pane_g2

0x82ef,	// (0x0004ad49) vid6_indi_pane_g3_ParamLimits

0x82ef,	// (0x0004ad49) vid6_indi_pane_g3

0x8304,	// (0x0004ad5e) vid6_indi_pane_g4_ParamLimits

0x8304,	// (0x0004ad5e) vid6_indi_pane_g4

0x8319,	// (0x0004ad73) vid6_indi_pane_g5_ParamLimits

0x8319,	// (0x0004ad73) vid6_indi_pane_g5

0x0004,

0xfa51,	// (0x000524ab) vid6_indi_pane_g_ParamLimits

0xfa51,	// (0x000524ab) vid6_indi_pane_g

0x8333,	// (0x0004ad8d) vid6_indi_pane_t1_ParamLimits

0x8333,	// (0x0004ad8d) vid6_indi_pane_t1

0x8349,	// (0x0004ada3) vid6_indi_pane_t2_ParamLimits

0x8349,	// (0x0004ada3) vid6_indi_pane_t2

0x8371,	// (0x0004adcb) vid6_indi_pane_t3_ParamLimits

0x8371,	// (0x0004adcb) vid6_indi_pane_t3

0x8399,	// (0x0004adf3) vid6_indi_pane_t4_ParamLimits

0x8399,	// (0x0004adf3) vid6_indi_pane_t4

0x0003,

0xfa5c,	// (0x000524b6) vid6_indi_pane_t_ParamLimits

0xfa5c,	// (0x000524b6) vid6_indi_pane_t

0x83bd,	// (0x0004ae17) wait_bar_pane_cp08

0x83cc,	// (0x0004ae26) main_cset_text2_pane_t1_ParamLimits

0x83cc,	// (0x0004ae26) main_cset_text2_pane_t1

0x8242,	// (0x0004ac9c) listscroll_gen_pane_cp06_t1_ParamLimits

0x8242,	// (0x0004ac9c) listscroll_gen_pane_cp06_t1

0xa5bf,	// (0x0004d019) main_cam6_set_pane

0xe91b,	// (0x00051375) bg_tb_trans_pane_cp06_ParamLimits

0xacf4,	// (0x0004d74e) cam4_indicators_pane_g1_ParamLimits

0xad05,	// (0x0004d75f) cam4_indicators_pane_g2_ParamLimits

0xf7d1,	// (0x0005222b) cam4_indicators_pane_g_ParamLimits

0xad23,	// (0x0004d77d) cam4_indicators_pane_t1_ParamLimits

0xdcdd,	// (0x00050737) bg_tb_trans_pane_cp07_ParamLimits

0xad4f,	// (0x0004d7a9) vid4_indicators_pane_g1_ParamLimits

0xad63,	// (0x0004d7bd) vid4_indicators_pane_g2_ParamLimits

0xad77,	// (0x0004d7d1) vid4_indicators_pane_g3_ParamLimits

0xad88,	// (0x0004d7e2) vid4_indicators_pane_g4_ParamLimits

0xf7e3,	// (0x0005223d) vid4_indicators_pane_g_ParamLimits

0xada6,	// (0x0004d800) vid4_indicators_pane_t1_ParamLimits

0x7b5b,	// (0x0004a5b5) vid4_progress_pane_g1_ParamLimits

0x7b6d,	// (0x0004a5c7) vid4_progress_pane_g2_ParamLimits

0xa8ef,	// (0x0004d349) vid4_progress_pane_g3_ParamLimits

0xaf30,	// (0x0004d98a) vid4_progress_pane_g4_ParamLimits

0xf98d,	// (0x000523e7) vid4_progress_pane_g_ParamLimits

0xaf4e,	// (0x0004d9a8) vid4_progress_pane_t1_ParamLimits

0xaf63,	// (0x0004d9bd) vid4_progress_pane_t2_ParamLimits

0xaf79,	// (0x0004d9d3) vid4_progress_pane_t3_ParamLimits

0xf998,	// (0x000523f2) vid4_progress_pane_t_ParamLimits

0xaf8e,	// (0x0004d9e8) wait_bar_pane_cp07_ParamLimits

0x83e9,	// (0x0004ae43) main_cam6_set_pane_g2_ParamLimits

0x83e9,	// (0x0004ae43) main_cam6_set_pane_g2

0x840d,	// (0x0004ae67) main_cset6_listscroll_pane_ParamLimits

0x840d,	// (0x0004ae67) main_cset6_listscroll_pane

0x842d,	// (0x0004ae87) main_cset6_slider_pane_ParamLimits

0x842d,	// (0x0004ae87) main_cset6_slider_pane

0x8443,	// (0x0004ae9d) main_cset6_text2_pane_ParamLimits

0x8443,	// (0x0004ae9d) main_cset6_text2_pane

0x8451,	// (0x0004aeab) main_cset6_text_pane

0x8459,	// (0x0004aeb3) main_cset_list_pane_copy1_ParamLimits

0x8459,	// (0x0004aeb3) main_cset_list_pane_copy1

0x8469,	// (0x0004aec3) scroll_pane_cp028_copy1

0x8472,	// (0x0004aecc) cset_list_set_pane_copy1

0x8483,	// (0x0004aedd) aid_position_infowindow_above_copy1

0x848b,	// (0x0004aee5) aid_position_infowindow_below_copy1

0x0e68,	// (0x000438c2) cset_list_set_pane_g1_copy1

0x0e70,	// (0x000438ca) cset_list_set_pane_g3_copy1_ParamLimits

0x0e70,	// (0x000438ca) cset_list_set_pane_g3_copy1

0x0e7f,	// (0x000438d9) cset_list_set_pane_t1_copy1_ParamLimits

0x0e7f,	// (0x000438d9) cset_list_set_pane_t1_copy1

0xdcdd,	// (0x00050737) list_highlight_pane_cp021_copy1_ParamLimits

0xdcdd,	// (0x00050737) list_highlight_pane_cp021_copy1

0x8493,	// (0x0004aeed) cset6_slider_pane_ParamLimits

0x8493,	// (0x0004aeed) cset6_slider_pane

0x84bf,	// (0x0004af19) main_cset6_slider_pane_g1_ParamLimits

0x84bf,	// (0x0004af19) main_cset6_slider_pane_g1

0x84e7,	// (0x0004af41) main_cset6_slider_pane_g2_ParamLimits

0x84e7,	// (0x0004af41) main_cset6_slider_pane_g2

0x850f,	// (0x0004af69) main_cset6_slider_pane_g3_ParamLimits

0x850f,	// (0x0004af69) main_cset6_slider_pane_g3

0x851b,	// (0x0004af75) main_cset6_slider_pane_g4_ParamLimits

0x851b,	// (0x0004af75) main_cset6_slider_pane_g4

0x8527,	// (0x0004af81) main_cset6_slider_pane_g5_ParamLimits

0x8527,	// (0x0004af81) main_cset6_slider_pane_g5

0x6fad,	// (0x00049a07) main_cset6_slider_pane_g7_ParamLimits

0x6fad,	// (0x00049a07) main_cset6_slider_pane_g7

0x6fb9,	// (0x00049a13) main_cset6_slider_pane_g8_ParamLimits

0x6fb9,	// (0x00049a13) main_cset6_slider_pane_g8

0x6fc5,	// (0x00049a1f) main_cset6_slider_pane_g9_ParamLimits

0x6fc5,	// (0x00049a1f) main_cset6_slider_pane_g9

0x6fd1,	// (0x00049a2b) main_cset6_slider_pane_g10_ParamLimits

0x6fd1,	// (0x00049a2b) main_cset6_slider_pane_g10

0x6fdd,	// (0x00049a37) main_cset6_slider_pane_g11_ParamLimits

0x6fdd,	// (0x00049a37) main_cset6_slider_pane_g11

0x6fe9,	// (0x00049a43) main_cset6_slider_pane_g12_ParamLimits

0x6fe9,	// (0x00049a43) main_cset6_slider_pane_g12

0x6ff5,	// (0x00049a4f) main_cset6_slider_pane_g13_ParamLimits

0x6ff5,	// (0x00049a4f) main_cset6_slider_pane_g13

0x7001,	// (0x00049a5b) main_cset6_slider_pane_g14_ParamLimits

0x7001,	// (0x00049a5b) main_cset6_slider_pane_g14

0x8533,	// (0x0004af8d) main_cset6_slider_pane_g15_ParamLimits

0x8533,	// (0x0004af8d) main_cset6_slider_pane_g15

0x7025,	// (0x00049a7f) main_cset6_slider_pane_g16_ParamLimits

0x7025,	// (0x00049a7f) main_cset6_slider_pane_g16

0x7031,	// (0x00049a8b) main_cset6_slider_pane_g17_ParamLimits

0x7031,	// (0x00049a8b) main_cset6_slider_pane_g17

0x0011,

0xfa65,	// (0x000524bf) main_cset6_slider_pane_g_ParamLimits

0xfa65,	// (0x000524bf) main_cset6_slider_pane_g

0x8563,	// (0x0004afbd) main_cset6_slider_pane_t1_ParamLimits

0x8563,	// (0x0004afbd) main_cset6_slider_pane_t1

0x85a4,	// (0x0004affe) main_cset6_slider_pane_t2_ParamLimits

0x85a4,	// (0x0004affe) main_cset6_slider_pane_t2

0x85cf,	// (0x0004b029) main_cset6_slider_pane_t3_ParamLimits

0x85cf,	// (0x0004b029) main_cset6_slider_pane_t3

0x85fa,	// (0x0004b054) main_cset6_slider_pane_t4_ParamLimits

0x85fa,	// (0x0004b054) main_cset6_slider_pane_t4

0x8625,	// (0x0004b07f) main_cset6_slider_pane_t5_ParamLimits

0x8625,	// (0x0004b07f) main_cset6_slider_pane_t5

0x8650,	// (0x0004b0aa) main_cset6_slider_pane_t7_ParamLimits

0x8650,	// (0x0004b0aa) main_cset6_slider_pane_t7

0x8686,	// (0x0004b0e0) main_cset6_slider_pane_t8_ParamLimits

0x8686,	// (0x0004b0e0) main_cset6_slider_pane_t8

0x86aa,	// (0x0004b104) main_cset6_slider_pane_t9_ParamLimits

0x86aa,	// (0x0004b104) main_cset6_slider_pane_t9

0x86ce,	// (0x0004b128) main_cset6_slider_pane_t10_ParamLimits

0x86ce,	// (0x0004b128) main_cset6_slider_pane_t10

0x86f2,	// (0x0004b14c) main_cset6_slider_pane_t11_ParamLimits

0x86f2,	// (0x0004b14c) main_cset6_slider_pane_t11

0x8716,	// (0x0004b170) main_cset6_slider_pane_t14_ParamLimits

0x8716,	// (0x0004b170) main_cset6_slider_pane_t14

0x874f,	// (0x0004b1a9) main_cset6_slider_pane_t15_ParamLimits

0x874f,	// (0x0004b1a9) main_cset6_slider_pane_t15

0x000b,

0xfa8a,	// (0x000524e4) main_cset6_slider_pane_t_ParamLimits

0xfa8a,	// (0x000524e4) main_cset6_slider_pane_t

0x7294,	// (0x00049cee) cset_slider_pane_g1_copy1

0x729d,	// (0x00049cf7) cset_slider_pane_g2_copy1

0x72a6,	// (0x00049d00) cset_slider_pane_g3_copy1

0xa5bf,	// (0x0004d019) bg_popup_sub_pane_cp011_copy1

0x8788,	// (0x0004b1e2) main_cset_text_pane_g1_copy1

0x7643,	// (0x0004a09d) main_cset_text_pane_t1_copy1

0x7651,	// (0x0004a0ab) main_cset_text_pane_t2_copy1

0x765f,	// (0x0004a0b9) main_cset_text_pane_t3_copy1

0x766d,	// (0x0004a0c7) main_cset_text_pane_t4_copy1

0x767b,	// (0x0004a0d5) main_cset_text_pane_t5_copy1

0x8790,	// (0x0004b1ea) main_cset_text_pane_t6_copy1

0x879e,	// (0x0004b1f8) main_cset_text_pane_t7_copy1

0x83cc,	// (0x0004ae26) main_cset_text2_pane_t1_copy1

0xdcdd,	// (0x00050737) main_ncimui_pane

0x4584,	// (0x00046fde) popup_query_ncimui_window_ParamLimits

0x4584,	// (0x00046fde) popup_query_ncimui_window

0xaa41,	// (0x0004d49b) field_cale_ev2_pane_g4_ParamLimits

0xaa41,	// (0x0004d49b) field_cale_ev2_pane_g4

0x6105,	// (0x00048b5f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6105,	// (0x00048b5f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf774,	// (0x000521ce) cell_video_dialer_keypad_pane_g_ParamLimits

0xf774,	// (0x000521ce) cell_video_dialer_keypad_pane_g

0x611d,	// (0x00048b77) cell_video_dialer_keypad_pane_t1

0xa5bf,	// (0x0004d019) bg_popup_window_pane_cp012

0xcc1f,	// (0x0004f679) heading_pane_cp06

0x88f0,	// (0x0004b34a) ncim_query_content_pane

0xa5bf,	// (0x0004d019) bg_popup_heading_pane_cp01

0x88f8,	// (0x0004b352) ncim_heading_pane_t1

0x8906,	// (0x0004b360) ncim_indicator_popup_pane

0x8918,	// (0x0004b372) ncim_query_button_pane

0x8938,	// (0x0004b392) ncim_query_content_pane_t1

0x894a,	// (0x0004b3a4) ncim_query_content_pane_t2

0x0005,

0xface,	// (0x00052528) ncim_query_content_pane_t

0x89fc,	// (0x0004b456) ncim_query_list_pane

0x8a0e,	// (0x0004b468) ncim_query_popup_pane

0x8906,	// (0x0004b360) ncim_indicator_popup_pane_ParamLimits

0x8920,	// (0x0004b37a) ncim_query_content_pane_g1_ParamLimits

0x8920,	// (0x0004b37a) ncim_query_content_pane_g1

0x8938,	// (0x0004b392) ncim_query_content_pane_t1_ParamLimits

0x894a,	// (0x0004b3a4) ncim_query_content_pane_t2_ParamLimits

0x895c,	// (0x0004b3b6) ncim_query_content_pane_t3_ParamLimits

0x895c,	// (0x0004b3b6) ncim_query_content_pane_t3

0x8984,	// (0x0004b3de) ncim_query_content_pane_t4_ParamLimits

0x8984,	// (0x0004b3de) ncim_query_content_pane_t4

0x89ac,	// (0x0004b406) ncim_query_content_pane_t5_ParamLimits

0x89ac,	// (0x0004b406) ncim_query_content_pane_t5

0x89d4,	// (0x0004b42e) ncim_query_content_pane_t6_ParamLimits

0x89d4,	// (0x0004b42e) ncim_query_content_pane_t6

0xface,	// (0x00052528) ncim_query_content_pane_t_ParamLimits

0x89fc,	// (0x0004b456) ncim_query_list_pane_ParamLimits

0x8a0e,	// (0x0004b468) ncim_query_popup_pane_ParamLimits

0x8a22,	// (0x0004b47c) wait_bar_pane_cp04

0xa5bf,	// (0x0004d019) input_focus_pane_cp011

0x8a2a,	// (0x0004b484) ncim_query_popup_pane_t1

0x8a38,	// (0x0004b492) ncim_list_query_list_pane_ParamLimits

0x8a38,	// (0x0004b492) ncim_list_query_list_pane

0xa5bf,	// (0x0004d019) bg_button_pane_cp027

0x8a45,	// (0x0004b49f) ncim_query_button_pane_g1

0xa5bf,	// (0x0004d019) list_highlight_pane_cp012

0x8a4f,	// (0x0004b4a9) ncim_list_query_list_pane_g1

0x8a57,	// (0x0004b4b1) ncim_list_query_list_pane_t1

0xad14,	// (0x0004d76e) cam4_indicators_pane_g3_ParamLimits

0xad14,	// (0x0004d76e) cam4_indicators_pane_g3

0xad94,	// (0x0004d7ee) vid4_indicators_pane_g5_ParamLimits

0xad94,	// (0x0004d7ee) vid4_indicators_pane_g5

0xaf3f,	// (0x0004d999) vid4_progress_pane_g5_ParamLimits

0xaf3f,	// (0x0004d999) vid4_progress_pane_g5

0x87de,	// (0x0004b238) main_ncimui_pane_g1

0x8844,	// (0x0004b29e) ncimui_group_query_pane_ParamLimits

0x8844,	// (0x0004b29e) ncimui_group_query_pane

0x888c,	// (0x0004b2e6) ncimui_list_pane_ParamLimits

0x888c,	// (0x0004b2e6) ncimui_list_pane

0x88b3,	// (0x0004b30d) ncimui_text_pane_ParamLimits

0x88b3,	// (0x0004b30d) ncimui_text_pane

0x8a65,	// (0x0004b4bf) ncimui_text_pane_t1_ParamLimits

0x8a65,	// (0x0004b4bf) ncimui_text_pane_t1

0x8a83,	// (0x0004b4dd) ncimui_list_single_graphic_pane_ParamLimits

0x8a83,	// (0x0004b4dd) ncimui_list_single_graphic_pane

0x8a93,	// (0x0004b4ed) ncimui_query_pane_ParamLimits

0x8a93,	// (0x0004b4ed) ncimui_query_pane

0xa5bf,	// (0x0004d019) list_highlight_pane_cp013

0x8aa6,	// (0x0004b500) ncim_list_query_list_pane_t1_copy1

0x8a4f,	// (0x0004b4a9) ncim_list_single_graphic_pane_g1

0x8ab4,	// (0x0004b50e) ncim_query_button_pane_cp01

0x8ac0,	// (0x0004b51a) ncim_query_entry_pane_ParamLimits

0x8ac0,	// (0x0004b51a) ncim_query_entry_pane

0x8ad3,	// (0x0004b52d) ncimui_query_pane_g1

0x8adf,	// (0x0004b539) ncimui_query_pane_t1_ParamLimits

0x8adf,	// (0x0004b539) ncimui_query_pane_t1

0xdcdd,	// (0x00050737) input_focus_pane_cp012

0x8af8,	// (0x0004b552) ncim_query_entry_pane_t1

0xc3b8,	// (0x0004ee12) main_im_pane_ParamLimits

0xdcdd,	// (0x00050737) main_mobtv_pane_ParamLimits

0xdcdd,	// (0x00050737) main_mobtv_pane

0x854b,	// (0x0004afa5) main_cset6_slider_pane_g18_ParamLimits

0x854b,	// (0x0004afa5) main_cset6_slider_pane_g18

0x8557,	// (0x0004afb1) main_cset6_slider_pane_g19_ParamLimits

0x8557,	// (0x0004afb1) main_cset6_slider_pane_g19

0x8b0a,	// (0x0004b564) bg_main_mobtv_pane_ParamLimits

0x8b0a,	// (0x0004b564) bg_main_mobtv_pane

0x8b18,	// (0x0004b572) main_mobtv_info_pane

0x8b21,	// (0x0004b57b) main_mobtv_loading_pane_ParamLimits

0x8b21,	// (0x0004b57b) main_mobtv_loading_pane

0x8b2e,	// (0x0004b588) main_mobtv_pg_channel_list_pane

0x8b38,	// (0x0004b592) main_mobtv_pg_hdr_pane

0x8b41,	// (0x0004b59b) main_mobtv_programe_curr_pane_ParamLimits

0x8b41,	// (0x0004b59b) main_mobtv_programe_curr_pane

0x8b4e,	// (0x0004b5a8) main_mobtv_programe_next_pane_ParamLimits

0x8b4e,	// (0x0004b5a8) main_mobtv_programe_next_pane

0x8b5b,	// (0x0004b5b5) popup_mobtv_noti_window

0xe6b8,	// (0x00051112) main_tv_pg_hdr_pane_g1

0x8b63,	// (0x0004b5bd) main_tv_pg_hdr_pane_g2

0x8b6b,	// (0x0004b5c5) main_tv_pg_hdr_pane_g3

0x8b73,	// (0x0004b5cd) main_tv_pg_hdr_pane_g4

0x8b7b,	// (0x0004b5d5) main_tv_pg_hdr_pane_g5

0x8b85,	// (0x0004b5df) main_tv_pg_hdr_pane_g6

0x8b8f,	// (0x0004b5e9) main_tv_pg_hdr_pane_g7

0x8b99,	// (0x0004b5f3) main_tv_pg_hdr_pane_g8

0x8ba3,	// (0x0004b5fd) main_tv_pg_hdr_pane_g9

0x8bad,	// (0x0004b607) main_tv_pg_hdr_pane_g10

0x8bb7,	// (0x0004b611) main_tv_pg_hdr_pane_g11

0x000a,

0xfadb,	// (0x00052535) main_tv_pg_hdr_pane_g

0x8bc1,	// (0x0004b61b) main_tv_pg_hdr_pane_t1

0x8bcf,	// (0x0004b629) main_tv_pg_hdr_pane_t2

0x8bdd,	// (0x0004b637) main_tv_pg_hdr_pane_t3

0x8bed,	// (0x0004b647) main_tv_pg_hdr_pane_t4

0x8bfd,	// (0x0004b657) main_tv_pg_hdr_pane_t5

0x0004,

0xfaf2,	// (0x0005254c) main_tv_pg_hdr_pane_t

0x8c0d,	// (0x0004b667) single_mobtv_pg_channel_pane_ParamLimits

0x8c0d,	// (0x0004b667) single_mobtv_pg_channel_pane

0x8c1f,	// (0x0004b679) single_mobtv_pg_channel_table_pane

0x8c28,	// (0x0004b682) single_mobtv_pg_channel_thumb_pane

0x8c31,	// (0x0004b68b) single_tv_pg_channel_pane_g1

0x8c3a,	// (0x0004b694) single_tv_pg_channel_pane_g2

0x0001,

0xfafd,	// (0x00052557) single_tv_pg_channel_pane_g

0xe91b,	// (0x00051375) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe91b,	// (0x00051375) bg_single_mobtv_pg_channel_thumb_pane

0x8c43,	// (0x0004b69d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8c43,	// (0x0004b69d) single_mobtv_pg_channel_thumb_pane_g1

0x8c51,	// (0x0004b6ab) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8c51,	// (0x0004b6ab) single_mobtv_pg_channel_thumb_pane_g2

0x8c5d,	// (0x0004b6b7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8c5d,	// (0x0004b6b7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb02,	// (0x0005255c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb02,	// (0x0005255c) single_mobtv_pg_channel_thumb_pane_g

0x8c69,	// (0x0004b6c3) single_mobtv_pg_channel_thumb_pane_t1

0x8c77,	// (0x0004b6d1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb09,	// (0x00052563) single_mobtv_pg_channel_thumb_pane_t

0xe6b8,	// (0x00051112) bg_single_mobtv_pg_channel_table_pane_g1

0xe6b8,	// (0x00051112) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0184,	// (0x00042bde) bg_single_mobtv_pg_channel_table_pane_g

0x8c85,	// (0x0004b6df) single_mobtv_pg_channel_table_pane_t1

0x8c93,	// (0x0004b6ed) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb0e,	// (0x00052568) single_mobtv_pg_channel_table_pane_t

0x8ca9,	// (0x0004b703) main_mobtv_info_pane_g1_ParamLimits

0x8ca9,	// (0x0004b703) main_mobtv_info_pane_g1

0x8cc7,	// (0x0004b721) main_mobtv_info_pane_t1_ParamLimits

0x8cc7,	// (0x0004b721) main_mobtv_info_pane_t1

0x8d3f,	// (0x0004b799) main_mobtv_info_pane_t2_ParamLimits

0x8d3f,	// (0x0004b799) main_mobtv_info_pane_t2

0x0002,

0xfb18,	// (0x00052572) main_mobtv_info_pane_t_ParamLimits

0xfb18,	// (0x00052572) main_mobtv_info_pane_t

0x8dce,	// (0x0004b828) wait_bar_pane_cp05

0x8de0,	// (0x0004b83a) main_mobtv_loading_pane_g1_ParamLimits

0x8de0,	// (0x0004b83a) main_mobtv_loading_pane_g1

0x8df3,	// (0x0004b84d) main_mobtv_loading_pane_g2_ParamLimits

0x8df3,	// (0x0004b84d) main_mobtv_loading_pane_g2

0x8dff,	// (0x0004b859) main_mobtv_loading_pane_g3_ParamLimits

0x8dff,	// (0x0004b859) main_mobtv_loading_pane_g3

0x0002,

0xfb1f,	// (0x00052579) main_mobtv_loading_pane_g_ParamLimits

0xfb1f,	// (0x00052579) main_mobtv_loading_pane_g

0x8e12,	// (0x0004b86c) main_mobtv_loading_pane_t1_ParamLimits

0x8e12,	// (0x0004b86c) main_mobtv_loading_pane_t1

0x8e2a,	// (0x0004b884) main_mobtv_loading_pane_t2_ParamLimits

0x8e2a,	// (0x0004b884) main_mobtv_loading_pane_t2

0x0001,

0xfb26,	// (0x00052580) main_mobtv_loading_pane_t_ParamLimits

0xfb26,	// (0x00052580) main_mobtv_loading_pane_t

0x8e4e,	// (0x0004b8a8) wait_bar_pane_cp06_ParamLimits

0x8e4e,	// (0x0004b8a8) wait_bar_pane_cp06

0x8e5d,	// (0x0004b8b7) main_mobtv_programe_curr_pane_t1

0x8e6b,	// (0x0004b8c5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb2b,	// (0x00052585) main_mobtv_programe_curr_pane_t

0x8e79,	// (0x0004b8d3) main_mobtv_programe_next_pane_t1

0x8e87,	// (0x0004b8e1) main_mobtv_programe_next_pane_t2

0x8e95,	// (0x0004b8ef) main_mobtv_programe_next_pane_t3

0x0002,

0xfb30,	// (0x0005258a) main_mobtv_programe_next_pane_t

0xa5bf,	// (0x0004d019) bg_popup_mobtv_noti_window_pane

0x8ea3,	// (0x0004b8fd) popup_mobtv_noti_window_g1

0x8eab,	// (0x0004b905) popup_mobtv_noti_window_t1

0x8eb9,	// (0x0004b913) popup_mobtv_noti_window_t2

0x0001,

0xfb37,	// (0x00052591) popup_mobtv_noti_window_t

0xe6b8,	// (0x00051112) bg_popup_mobtv_noti_window_pane_g1

0xa5bf,	// (0x0004d019) sc_clock_pane

0xa5bf,	// (0x0004d019) main_fs_bigclock_pane

0x7e8b,	// (0x0004a8e5) blid2_tripm_pane_t4_ParamLimits

0x7e8b,	// (0x0004a8e5) blid2_tripm_pane_t4

0x8ec7,	// (0x0004b921) sc_clock_pane_g1_ParamLimits

0x8ec7,	// (0x0004b921) sc_clock_pane_g1

0x8ed9,	// (0x0004b933) sc_clock_pane_t1_ParamLimits

0x8ed9,	// (0x0004b933) sc_clock_pane_t1

0x8efb,	// (0x0004b955) sc_clock_pane_t2_ParamLimits

0x8efb,	// (0x0004b955) sc_clock_pane_t2

0x8f13,	// (0x0004b96d) sc_clock_pane_t3_ParamLimits

0x8f13,	// (0x0004b96d) sc_clock_pane_t3

0x0004,

0xfb3c,	// (0x00052596) sc_clock_pane_t_ParamLimits

0xfb3c,	// (0x00052596) sc_clock_pane_t

0x9d17,	// (0x0004c771) main_fs_bigclock_indicator_pane_ParamLimits

0x9d17,	// (0x0004c771) main_fs_bigclock_indicator_pane

0xe8eb,	// (0x00051345) main_fs_bigclock_pane_g1_ParamLimits

0xe8eb,	// (0x00051345) main_fs_bigclock_pane_g1

0x9d23,	// (0x0004c77d) main_fs_bigclock_pane_t1_ParamLimits

0x9d23,	// (0x0004c77d) main_fs_bigclock_pane_t1

0x9d35,	// (0x0004c78f) main_fs_bigclock_pane_t2_ParamLimits

0x9d35,	// (0x0004c78f) main_fs_bigclock_pane_t2

0x9d49,	// (0x0004c7a3) main_fs_bigclock_pane_t3_ParamLimits

0x9d49,	// (0x0004c7a3) main_fs_bigclock_pane_t3

0x0002,

0xfd40,	// (0x0005279a) main_fs_bigclock_pane_t_ParamLimits

0xfd40,	// (0x0005279a) main_fs_bigclock_pane_t

0xb7b0,	// (0x0004e20a) main_fs_bigclock_indicator_pane_g1

0x892c,	// (0x0004b386) ncim_query_content_pane_g2_ParamLimits

0x892c,	// (0x0004b386) ncim_query_content_pane_g2

0x0001,

0xfac9,	// (0x00052523) ncim_query_content_pane_g_ParamLimits

0xfac9,	// (0x00052523) ncim_query_content_pane_g

0x8f2c,	// (0x0004b986) sc_clock_pane_t4_ParamLimits

0x8f2c,	// (0x0004b986) sc_clock_pane_t4

0xdcdd,	// (0x00050737) main_radioblah_pane

0xf05e,	// (0x00051ab8) cell_call4_button_pane_t1_copy1_ParamLimits

0xf05e,	// (0x00051ab8) cell_call4_button_pane_t1_copy1

0x87f6,	// (0x0004b250) main_ncimui_pane_t1_ParamLimits

0x87f6,	// (0x0004b250) main_ncimui_pane_t1

0x8810,	// (0x0004b26a) main_ncimui_pane_t2_ParamLimits

0x8810,	// (0x0004b26a) main_ncimui_pane_t2

0x0002,

0xfac2,	// (0x0005251c) main_ncimui_pane_t_ParamLimits

0xfac2,	// (0x0005251c) main_ncimui_pane_t

0x9100,	// (0x0004bb5a) main_radioblah_anim_pane_ParamLimits

0x9100,	// (0x0004bb5a) main_radioblah_anim_pane

0x9111,	// (0x0004bb6b) main_radioblah_info_pane_ParamLimits

0x9111,	// (0x0004bb6b) main_radioblah_info_pane

0x9137,	// (0x0004bb91) main_radioblah_pane_t1_ParamLimits

0x9137,	// (0x0004bb91) main_radioblah_pane_t1

0x9153,	// (0x0004bbad) main_radioblah_pane_t2_ParamLimits

0x9153,	// (0x0004bbad) main_radioblah_pane_t2

0x0003,

0xfb5d,	// (0x000525b7) main_radioblah_pane_t_ParamLimits

0xfb5d,	// (0x000525b7) main_radioblah_pane_t

0x919b,	// (0x0004bbf5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x919b,	// (0x0004bbf5) main_radioblah_rocker_ctrl_pane

0x91f3,	// (0x0004bc4d) main_radioblah_info_pane_t1_ParamLimits

0x91f3,	// (0x0004bc4d) main_radioblah_info_pane_t1

0x922d,	// (0x0004bc87) main_radioblah_info_pane_t2_ParamLimits

0x922d,	// (0x0004bc87) main_radioblah_info_pane_t2

0x0003,

0xfb66,	// (0x000525c0) main_radioblah_info_pane_t_ParamLimits

0xfb66,	// (0x000525c0) main_radioblah_info_pane_t

0xe6b8,	// (0x00051112) main_radioblah_rocker_ctrl_pane_g1

0x92dd,	// (0x0004bd37) main_radioblah_rocker_ctrl_pane_g2

0x92e5,	// (0x0004bd3f) main_radioblah_rocker_ctrl_pane_g3

0x92ed,	// (0x0004bd47) main_radioblah_rocker_ctrl_pane_g4

0x92f5,	// (0x0004bd4f) main_radioblah_rocker_ctrl_pane_g5

0x92fd,	// (0x0004bd57) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb6f,	// (0x000525c9) main_radioblah_rocker_ctrl_pane_g

0x83cc,	// (0x0004ae26) main_cset_text2_pane_t1_copy1_ParamLimits

0xace4,	// (0x0004d73e) cam4_image_uncrop_qvga_pane

0xad3d,	// (0x0004d797) vid4_image_uncrop_qcif_pane

0xaff1,	// (0x0004da4b) cam6_image_uncrop_qvga_pane_ParamLimits

0xaff1,	// (0x0004da4b) cam6_image_uncrop_qvga_pane

0x8288,	// (0x0004ace2) vid6_image_uncrop_qcif_pane_ParamLimits

0x8288,	// (0x0004ace2) vid6_image_uncrop_qcif_pane

0xa5bf,	// (0x0004d019) bg_popup_preview_window_pane_cp03

0x87ac,	// (0x0004b206) list_cset_text2_pane

0x87b4,	// (0x0004b20e) main_cset6_text2_pane_g1

0x87bc,	// (0x0004b216) main_cset6_text2_pane_t1

0x9305,	// (0x0004bd5f) list_cset_text2_pane_t1_ParamLimits

0x9305,	// (0x0004bd5f) list_cset_text2_pane_t1

0xdcdd,	// (0x00050737) main_radioblah_pane_ParamLimits

0x8dba,	// (0x0004b814) main_mobtv_info_pane_t3_ParamLimits

0x8dba,	// (0x0004b814) main_mobtv_info_pane_t3

0x9125,	// (0x0004bb7f) main_radioblah_pane_g1

0x91c3,	// (0x0004bc1d) main_radioblah_info_pane_g1

0x9282,	// (0x0004bcdc) main_radioblah_info_pane_t3_ParamLimits

0x9282,	// (0x0004bcdc) main_radioblah_info_pane_t3

0x308b,	// (0x00045ae5) highlight_cell_cale_month_pane_ParamLimits

0x308b,	// (0x00045ae5) highlight_cell_cale_month_pane

0xa5bf,	// (0x0004d019) main_phob_fisheye_pane

0xea03,	// (0x0005145d) scroll_pane_cp0031_ParamLimits

0xea03,	// (0x0005145d) scroll_pane_cp0031

0x83bd,	// (0x0004ae17) wait_bar_pane_cp08_ParamLimits

0x8472,	// (0x0004aecc) cset_list_set_pane_copy1_ParamLimits

0x931e,	// (0x0004bd78) highlight_cell_cale_month_pane_g1

0x9326,	// (0x0004bd80) highlight_cell_cale_month_pane_t1

0x7aa4,	// (0x0004a4fe) list_gen_pane_cp01

0x6ef9,	// (0x00049953) scroll_pane_01

0x9334,	// (0x0004bd8e) list_single_double_fisheye_pane

0x0e94,	// (0x000438ee) list_double_fisheye_pane_g1_ParamLimits

0x0e94,	// (0x000438ee) list_double_fisheye_pane_g1

0x0ea0,	// (0x000438fa) list_double_fisheye_pane_g2_ParamLimits

0x0ea0,	// (0x000438fa) list_double_fisheye_pane_g2

0x933d,	// (0x0004bd97) list_double_fisheye_pane_g3_ParamLimits

0x933d,	// (0x0004bd97) list_double_fisheye_pane_g3

0x0004,

0xfb7c,	// (0x000525d6) list_double_fisheye_pane_g_ParamLimits

0xfb7c,	// (0x000525d6) list_double_fisheye_pane_g

0x0ed1,	// (0x0004392b) list_double_fisheye_pane_t1_ParamLimits

0x0ed1,	// (0x0004392b) list_double_fisheye_pane_t1

0x0eec,	// (0x00043946) list_double_fisheye_pane_t2_ParamLimits

0x0eec,	// (0x00043946) list_double_fisheye_pane_t2

0x0001,

0xfb87,	// (0x000525e1) list_double_fisheye_pane_t_ParamLimits

0xfb87,	// (0x000525e1) list_double_fisheye_pane_t

0xa5bf,	// (0x0004d019) main_call5_pane

0x8f57,	// (0x0004b9b1) sc_swipe_pane_ParamLimits

0x8f57,	// (0x0004b9b1) sc_swipe_pane

0x935c,	// (0x0004bdb6) call5_image_pane_ParamLimits

0x935c,	// (0x0004bdb6) call5_image_pane

0x9379,	// (0x0004bdd3) call5_swipe_1_pane_ParamLimits

0x9379,	// (0x0004bdd3) call5_swipe_1_pane

0x938c,	// (0x0004bde6) call5_swipe_2_pane_ParamLimits

0x938c,	// (0x0004bde6) call5_swipe_2_pane

0x93b7,	// (0x0004be11) popup_call5_audio_first_window_ParamLimits

0x93b7,	// (0x0004be11) popup_call5_audio_first_window

0xe91b,	// (0x00051375) call5_swipe_1_pane_g1_ParamLimits

0xe91b,	// (0x00051375) call5_swipe_1_pane_g1

0x93c8,	// (0x0004be22) call5_swipe_1_pane_g2_ParamLimits

0x93c8,	// (0x0004be22) call5_swipe_1_pane_g2

0x0001,

0xfb8c,	// (0x000525e6) call5_swipe_1_pane_g_ParamLimits

0xfb8c,	// (0x000525e6) call5_swipe_1_pane_g

0x93d4,	// (0x0004be2e) call5_swipe_1_pane_t1_ParamLimits

0x93d4,	// (0x0004be2e) call5_swipe_1_pane_t1

0xe91b,	// (0x00051375) call5_swipe_2_pane_g1_ParamLimits

0xe91b,	// (0x00051375) call5_swipe_2_pane_g1

0x93e9,	// (0x0004be43) call5_swipe_2_pane_g2_ParamLimits

0x93e9,	// (0x0004be43) call5_swipe_2_pane_g2

0x0001,

0xfb91,	// (0x000525eb) call5_swipe_2_pane_g_ParamLimits

0xfb91,	// (0x000525eb) call5_swipe_2_pane_g

0x93f5,	// (0x0004be4f) call5_swipe_2_pane_t1_ParamLimits

0x93f5,	// (0x0004be4f) call5_swipe_2_pane_t1

0x940a,	// (0x0004be64) sc_swipe_pane_g1_ParamLimits

0x940a,	// (0x0004be64) sc_swipe_pane_g1

0x9417,	// (0x0004be71) sc_swipe_pane_g2_ParamLimits

0x9417,	// (0x0004be71) sc_swipe_pane_g2

0x0001,

0xfb96,	// (0x000525f0) sc_swipe_pane_g_ParamLimits

0xfb96,	// (0x000525f0) sc_swipe_pane_g

0x9423,	// (0x0004be7d) sc_swipe_pane_t1_ParamLimits

0x9423,	// (0x0004be7d) sc_swipe_pane_t1

0xa5bf,	// (0x0004d019) main_cmail_launcher_pane

0x9438,	// (0x0004be92) aid_size_cell_cmail_l_ParamLimits

0x9438,	// (0x0004be92) aid_size_cell_cmail_l

0x9452,	// (0x0004beac) grid_cmail_l_pane_ParamLimits

0x9452,	// (0x0004beac) grid_cmail_l_pane

0x946d,	// (0x0004bec7) cell_cmail_l_pane_ParamLimits

0x946d,	// (0x0004bec7) cell_cmail_l_pane

0x9493,	// (0x0004beed) cell_cmail_l_pane_g1_ParamLimits

0x9493,	// (0x0004beed) cell_cmail_l_pane_g1

0x949f,	// (0x0004bef9) cell_cmail_l_pane_t1_ParamLimits

0x949f,	// (0x0004bef9) cell_cmail_l_pane_t1

0x94b5,	// (0x0004bf0f) cell_cmail_l_pane_t2_ParamLimits

0x94b5,	// (0x0004bf0f) cell_cmail_l_pane_t2

0x0001,

0xfb9b,	// (0x000525f5) cell_cmail_l_pane_t_ParamLimits

0xfb9b,	// (0x000525f5) cell_cmail_l_pane_t

0xdcdd,	// (0x00050737) grid_highlight_pane_cp018_ParamLimits

0xdcdd,	// (0x00050737) grid_highlight_pane_cp018

0x1604,	// (0x0004405e) main2_pane_ParamLimits

0x1604,	// (0x0004405e) main2_pane

0xc451,	// (0x0004eeab) popup_sp_fs_action_menu_bg_pane_g1

0xc459,	// (0x0004eeb3) popup_sp_fs_action_menu_bg_pane_g2

0xc461,	// (0x0004eebb) popup_sp_fs_action_menu_bg_pane_g3

0xc469,	// (0x0004eec3) popup_sp_fs_action_menu_bg_pane_g4

0xc471,	// (0x0004eecb) popup_sp_fs_action_menu_bg_pane_g5

0xc479,	// (0x0004eed3) popup_sp_fs_action_menu_bg_pane_g6

0xc481,	// (0x0004eedb) popup_sp_fs_action_menu_bg_pane_g7

0xc489,	// (0x0004eee3) popup_sp_fs_action_menu_bg_pane_g8

0xc491,	// (0x0004eeeb) popup_sp_fs_action_menu_bg_pane_g9

0xc499,	// (0x0004eef3) popup_sp_fs_action_menu_bg_pane_g10

0xc499,	// (0x0004eef3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00051bf2) popup_sp_fs_action_menu_bg_pane_g

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t3_g3_g1

0xa6df,	// (0x0004d139) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x2_t3_g3_g2

0xa6eb,	// (0x0004d145) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa6eb,	// (0x0004d145) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00051ca2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00051ca2) list_medium_line_x2_t3_g3_g

0xa6f7,	// (0x0004d151) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa6f7,	// (0x0004d151) list_medium_line_x2_t3_g3_t1

0x0a0d,	// (0x00043467) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0a0d,	// (0x00043467) list_medium_line_x2_t3_g3_t2

0xa70c,	// (0x0004d166) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00051ca9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00051ca9) list_medium_line_x2_t3_g3_t

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t3_g2_g1

0xa6eb,	// (0x0004d145) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa6eb,	// (0x0004d145) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00051cb0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00051cb0) list_medium_line_x2_t3_g2_g

0xa721,	// (0x0004d17b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa721,	// (0x0004d17b) list_medium_line_x2_t3_g2_t1

0xa737,	// (0x0004d191) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa737,	// (0x0004d191) list_medium_line_x2_t3_g2_t2

0xa70c,	// (0x0004d166) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00051cb5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00051cb5) list_medium_line_x2_t3_g2_t

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t4_g4_g1

0xa749,	// (0x0004d1a3) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa749,	// (0x0004d1a3) list_medium_line_x2_t4_g4_g2

0xa6df,	// (0x0004d139) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x2_t4_g4_g3

0xa755,	// (0x0004d1af) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa755,	// (0x0004d1af) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00051cbc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00051cbc) list_medium_line_x2_t4_g4_g

0x0a21,	// (0x0004347b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0a21,	// (0x0004347b) list_medium_line_x2_t4_g4_t1

0x0a3b,	// (0x00043495) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0a3b,	// (0x00043495) list_medium_line_x2_t4_g4_t2

0x0a51,	// (0x000434ab) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0a51,	// (0x000434ab) list_medium_line_x2_t4_g4_t3

0xa761,	// (0x0004d1bb) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa761,	// (0x0004d1bb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00051cc5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00051cc5) list_medium_line_x2_t4_g4_t

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t2_g4_g1

0xa749,	// (0x0004d1a3) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa749,	// (0x0004d1a3) list_medium_line_x2_t2_g4_g2

0xa6df,	// (0x0004d139) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x2_t2_g4_g3

0xa6eb,	// (0x0004d145) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa6eb,	// (0x0004d145) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00051d2c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00051d2c) list_medium_line_x2_t2_g4_g

0xa773,	// (0x0004d1cd) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa773,	// (0x0004d1cd) list_medium_line_x2_t2_g4_t1

0xa70c,	// (0x0004d166) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00051d35) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00051d35) list_medium_line_x2_t2_g4_t

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t2_g3_g1

0xa6df,	// (0x0004d139) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x2_t2_g3_g2

0xa6eb,	// (0x0004d145) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa6eb,	// (0x0004d145) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00051ca2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00051ca2) list_medium_line_x2_t2_g3_g

0xa788,	// (0x0004d1e2) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa788,	// (0x0004d1e2) list_medium_line_x2_t2_g3_t1

0xa70c,	// (0x0004d166) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00051d3a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00051d3a) list_medium_line_x2_t2_g3_t

0x31cd,	// (0x00045c27) main_sp_fs_list_pane_ParamLimits

0x31cd,	// (0x00045c27) main_sp_fs_list_pane

0x31d9,	// (0x00045c33) sp_fs_scroll_pane_ParamLimits

0x31d9,	// (0x00045c33) sp_fs_scroll_pane

0x0a66,	// (0x000434c0) list_medium_line_x2_t3_t1

0x0a76,	// (0x000434d0) list_medium_line_x2_t3_t2

0xa7cb,	// (0x0004d225) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00051d85) list_medium_line_x2_t3_t

0x0a84,	// (0x000434de) list_medium_line_x3_t4_t1

0x0a94,	// (0x000434ee) list_medium_line_x3_t4_t2

0xa7d9,	// (0x0004d233) list_medium_line_x3_t4_t3

0xa7cb,	// (0x0004d225) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00051d8c) list_medium_line_x3_t4_t

0x0aa2,	// (0x000434fc) list_medium_line_x4_t5_t1

0x0ab2,	// (0x0004350c) list_medium_line_x4_t5_t2

0xa7d9,	// (0x0004d233) list_medium_line_x4_t5_t3

0xa7e7,	// (0x0004d241) list_medium_line_x4_t5_t4

0xa7cb,	// (0x0004d225) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00051d95) list_medium_line_x4_t5_t

0xa6d3,	// (0x0004d12d) list_medium_line_t4_g4_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_t4_g4_g1

0xa755,	// (0x0004d1af) list_medium_line_t4_g4_g2_ParamLimits

0xa755,	// (0x0004d1af) list_medium_line_t4_g4_g2

0xa7f5,	// (0x0004d24f) list_medium_line_t4_g4_g3_ParamLimits

0xa7f5,	// (0x0004d24f) list_medium_line_t4_g4_g3

0xa6eb,	// (0x0004d145) list_medium_line_t4_g4_g4_ParamLimits

0xa6eb,	// (0x0004d145) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00051da0) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00051da0) list_medium_line_t4_g4_g

0xa801,	// (0x0004d25b) list_medium_line_t4_g4_t1_ParamLimits

0xa801,	// (0x0004d25b) list_medium_line_t4_g4_t1

0xa816,	// (0x0004d270) list_medium_line_t4_g4_t2_ParamLimits

0xa816,	// (0x0004d270) list_medium_line_t4_g4_t2

0xa82b,	// (0x0004d285) list_medium_line_t4_g4_t3_ParamLimits

0xa82b,	// (0x0004d285) list_medium_line_t4_g4_t3

0xa70c,	// (0x0004d166) list_medium_line_t4_g4_t4_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00051da9) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00051da9) list_medium_line_t4_g4_t

0x32a8,	// (0x00045d02) chi_dic_find_pane_g1

0x4356,	// (0x00046db0) main_tport_pane

0xae2a,	// (0x0004d884) list_medium_line_plain_t1

0xae74,	// (0x0004d8ce) list_medium_line_t2_g2_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_t2_g2_g1

0xae80,	// (0x0004d8da) list_medium_line_t2_g2_g2_ParamLimits

0xae80,	// (0x0004d8da) list_medium_line_t2_g2_g2

0x0001,

0xf8d3,	// (0x0005232d) list_medium_line_t2_g2_g_ParamLimits

0xf8d3,	// (0x0005232d) list_medium_line_t2_g2_g

0x0cc5,	// (0x0004371f) list_medium_line_t2_g2_t1_ParamLimits

0x0cc5,	// (0x0004371f) list_medium_line_t2_g2_t1

0x0cdf,	// (0x00043739) list_medium_line_t2_g2_t2_ParamLimits

0x0cdf,	// (0x00043739) list_medium_line_t2_g2_t2

0x0001,

0xf8d8,	// (0x00052332) list_medium_line_t2_g2_t_ParamLimits

0xf8d8,	// (0x00052332) list_medium_line_t2_g2_t

0xafa0,	// (0x0004d9fa) aid_sp_fs_list_icon_a_sm

0xafa8,	// (0x0004da02) aid_sp_fs_list_icon_d

0xafb0,	// (0x0004da0a) aid_sp_fs_text_primary

0x7b7f,	// (0x0004a5d9) aid_sp_fs_text_secondary

0xafb9,	// (0x0004da13) list_medium_line

0xafb9,	// (0x0004da13) list_medium_line_g2

0xafb9,	// (0x0004da13) list_medium_line_g3

0xafb9,	// (0x0004da13) list_medium_line_plain

0xafb9,	// (0x0004da13) list_medium_line_plain_t2

0xafb9,	// (0x0004da13) list_medium_line_plain_t3

0xafb9,	// (0x0004da13) list_medium_line_right_icon

0xafb9,	// (0x0004da13) list_medium_line_right_iconx2

0xafb9,	// (0x0004da13) list_medium_line_t2

0xafb9,	// (0x0004da13) list_medium_line_t2_g2

0xafb9,	// (0x0004da13) list_medium_line_t2_g3

0xafb9,	// (0x0004da13) list_medium_line_t2_right_icon

0xafb9,	// (0x0004da13) list_medium_line_t2_right_iconx2

0xafb9,	// (0x0004da13) list_medium_line_t3

0xafb9,	// (0x0004da13) list_medium_line_t3_g2

0xafb9,	// (0x0004da13) list_medium_line_t3_g3

0xafb9,	// (0x0004da13) list_medium_line_t3_right_iconx2

0xafc2,	// (0x0004da1c) list_medium_line_t4_g4

0xafcb,	// (0x0004da25) list_medium_line_x2

0xafcb,	// (0x0004da25) list_medium_line_x2_t2_g2

0xafcb,	// (0x0004da25) list_medium_line_x2_t2_g3

0xafcb,	// (0x0004da25) list_medium_line_x2_t2_g4

0xafcb,	// (0x0004da25) list_medium_line_x2_t3

0xafcb,	// (0x0004da25) list_medium_line_x2_t3_g2

0xafcb,	// (0x0004da25) list_medium_line_x2_t3_g3

0xafcb,	// (0x0004da25) list_medium_line_x2_t3_g4

0xafcb,	// (0x0004da25) list_medium_line_x2_t4_g2

0xafcb,	// (0x0004da25) list_medium_line_x2_t4_g4

0xafd4,	// (0x0004da2e) list_medium_line_x3

0xafd4,	// (0x0004da2e) list_medium_line_x3_t4

0xafd4,	// (0x0004da2e) list_medium_line_x3_t4_g4

0xafc2,	// (0x0004da1c) list_medium_line_x4_t4

0xafc2,	// (0x0004da1c) list_medium_line_x4_t4_g7

0xafc2,	// (0x0004da1c) list_medium_line_x4_t5

0xafdd,	// (0x0004da37) list_single_fs_dyc_pane_ParamLimits

0xafdd,	// (0x0004da37) list_single_fs_dyc_pane

0xa6d3,	// (0x0004d12d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x4_t4_g7_g1

0xafff,	// (0x0004da59) list_medium_line_x4_t4_g7_g2_ParamLimits

0xafff,	// (0x0004da59) list_medium_line_x4_t4_g7_g2

0xb00b,	// (0x0004da65) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb00b,	// (0x0004da65) list_medium_line_x4_t4_g7_g3

0xb01a,	// (0x0004da74) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb01a,	// (0x0004da74) list_medium_line_x4_t4_g7_g4

0xb026,	// (0x0004da80) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb026,	// (0x0004da80) list_medium_line_x4_t4_g7_g5

0xb035,	// (0x0004da8f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb035,	// (0x0004da8f) list_medium_line_x4_t4_g7_g6

0xb044,	// (0x0004da9e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb044,	// (0x0004da9e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaa3,	// (0x000524fd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaa3,	// (0x000524fd) list_medium_line_x4_t4_g7_g

0xb050,	// (0x0004daaa) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb050,	// (0x0004daaa) list_medium_line_x4_t4_g7_t1

0xb065,	// (0x0004dabf) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb065,	// (0x0004dabf) list_medium_line_x4_t4_g7_t2

0xb07a,	// (0x0004dad4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb07a,	// (0x0004dad4) list_medium_line_x4_t4_g7_t3

0xb08f,	// (0x0004dae9) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb08f,	// (0x0004dae9) list_medium_line_x4_t4_g7_t4

0xb0a1,	// (0x0004dafb) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb0a1,	// (0x0004dafb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfab2,	// (0x0005250c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfab2,	// (0x0005250c) list_medium_line_x4_t4_g7_t

0xb0b3,	// (0x0004db0d) list_single_dyc_row_pane_ParamLimits

0xb0b3,	// (0x0004db0d) list_single_dyc_row_pane

0x9349,	// (0x0004bda3) call5_gesture_pane_ParamLimits

0x9349,	// (0x0004bda3) call5_gesture_pane

0x939f,	// (0x0004bdf9) call5_windows_pane_ParamLimits

0x939f,	// (0x0004bdf9) call5_windows_pane

0x94c7,	// (0x0004bf21) call5_swipe_1_pane_cp_ParamLimits

0x94c7,	// (0x0004bf21) call5_swipe_1_pane_cp

0x94d3,	// (0x0004bf2d) call5_swipe_2_pane_cp_ParamLimits

0x94d3,	// (0x0004bf2d) call5_swipe_2_pane_cp

0xce8b,	// (0x0004f8e5) call5_image_pane_cp

0x94df,	// (0x0004bf39) popup_call5_audio_first_window_cp_ParamLimits

0x94df,	// (0x0004bf39) popup_call5_audio_first_window_cp

0x940a,	// (0x0004be64) call5_swipe_1_pane_g1_cp_ParamLimits

0x940a,	// (0x0004be64) call5_swipe_1_pane_g1_cp

0x94ed,	// (0x0004bf47) call5_swipe_1_pane_g2_cp

0x9423,	// (0x0004be7d) call5_swipe_1_pane_t1_cp_ParamLimits

0x9423,	// (0x0004be7d) call5_swipe_1_pane_t1_cp

0x940a,	// (0x0004be64) call5_swipe_2_pane_g1_cp_ParamLimits

0x940a,	// (0x0004be64) call5_swipe_2_pane_g1_cp

0x94f5,	// (0x0004bf4f) call5_swipe_2_pane_g2_cp

0x94fd,	// (0x0004bf57) call5_swipe_2_pane_t1_cp_ParamLimits

0x94fd,	// (0x0004bf57) call5_swipe_2_pane_t1_cp

0xdcdd,	// (0x00050737) main_sp_fs_email_pane

0x9512,	// (0x0004bf6c) main_sp_fs_listscroll_pane_te

0xb0d0,	// (0x0004db2a) popup_sp_fs_action_menu_pane_ParamLimits

0xb0d0,	// (0x0004db2a) popup_sp_fs_action_menu_pane

0xe6b8,	// (0x00051112) bg_sp_fs_ctrlbar_pane_g1

0x951b,	// (0x0004bf75) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x9524,	// (0x0004bf7e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x952d,	// (0x0004bf87) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe6b8,	// (0x00051112) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfba0,	// (0x000525fa) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe48c,	// (0x00050ee6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe48c,	// (0x00050ee6) bg_sp_fs_ctrlbar_ddmenu_pane

0x9536,	// (0x0004bf90) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x9536,	// (0x0004bf90) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x9542,	// (0x0004bf9c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x9542,	// (0x0004bf9c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfba9,	// (0x00052603) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfba9,	// (0x00052603) main_sp_fs_ctrlbar_ddmenu_pane_g

0x954e,	// (0x0004bfa8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x954e,	// (0x0004bfa8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb114,	// (0x0004db6e) list_medium_line_t2_right_icon_g1

0x0f0e,	// (0x00043968) list_medium_line_t2_right_icon_t1

0x0f1e,	// (0x00043978) list_medium_line_t2_right_icon_t2

0x0001,

0xfbae,	// (0x00052608) list_medium_line_t2_right_icon_t

0xe29f,	// (0x00050cf9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe29f,	// (0x00050cf9) bg_sp_fs_ctrlbar_pane

0x95eb,	// (0x0004c045) main_sp_fs_ctrlbar_button_pane_cp01

0x95f5,	// (0x0004c04f) main_sp_fs_ctrlbar_ddmenu_pane

0x95ff,	// (0x0004c059) main_sp_fs_ctrlbar_pane_g1

0x960b,	// (0x0004c065) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfbb3,	// (0x0005260d) main_sp_fs_ctrlbar_pane_g

0x9617,	// (0x0004c071) main_sp_fs_ctrlbar_pane_t1

0x0f30,	// (0x0004398a) main_sp_fs_ctrlbar_pane

0x0f54,	// (0x000439ae) main_sp_fs_listscroll_pane_te_cp01

0x0f74,	// (0x000439ce) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0f74,	// (0x000439ce) popup_sp_fs_action_menu_pane_cp01

0xdcdd,	// (0x00050737) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdcdd,	// (0x00050737) bg_sp_fs_highlight_list_pane_cp01

0xb11c,	// (0x0004db76) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb11c,	// (0x0004db76) sp_fs_action_menu_list_gene_pane_g1

0x963c,	// (0x0004c096) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x963c,	// (0x0004c096) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbbd,	// (0x00052617) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbbd,	// (0x00052617) sp_fs_action_menu_list_gene_pane_g

0xb12b,	// (0x0004db85) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb12b,	// (0x0004db85) sp_fs_action_menu_list_gene_pane_t1

0xb143,	// (0x0004db9d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb143,	// (0x0004db9d) sp_fs_action_menu_list_gene_pane

0x9649,	// (0x0004c0a3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x9649,	// (0x0004c0a3) popup_sp_fs_action_menu_bg_pane

0xb162,	// (0x0004dbbc) sp_fs_action_menu_list_pane_ParamLimits

0xb162,	// (0x0004dbbc) sp_fs_action_menu_list_pane

0x9657,	// (0x0004c0b1) sp_fs_scroll_pane_cp01_ParamLimits

0x9657,	// (0x0004c0b1) sp_fs_scroll_pane_cp01

0x0fa4,	// (0x000439fe) list_medium_line_plain_t2_t1

0x0fb4,	// (0x00043a0e) list_medium_line_plain_t2_t2

0x0001,

0xfbc2,	// (0x0005261c) list_medium_line_plain_t2_t

0x0fc4,	// (0x00043a1e) list_medium_line_plain_t3_t1

0x0fd4,	// (0x00043a2e) list_medium_line_plain_t3_t2

0x0fe2,	// (0x00043a3c) list_medium_line_plain_t3_t3

0x0002,

0xfbc7,	// (0x00052621) list_medium_line_plain_t3_t

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t2_g2_g1

0xa6eb,	// (0x0004d145) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa6eb,	// (0x0004d145) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00051cb0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00051cb0) list_medium_line_x2_t2_g2_g

0xa801,	// (0x0004d25b) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa801,	// (0x0004d25b) list_medium_line_x2_t2_g2_t1

0xa70c,	// (0x0004d166) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_x2_t2_g2_t2

0x0001,

0xfbce,	// (0x00052628) list_medium_line_x2_t2_g2_t_ParamLimits

0xfbce,	// (0x00052628) list_medium_line_x2_t2_g2_t

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t4_g2_g1

0xb182,	// (0x0004dbdc) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb182,	// (0x0004dbdc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfbd3,	// (0x0005262d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfbd3,	// (0x0005262d) list_medium_line_x2_t4_g2_g

0x0ff0,	// (0x00043a4a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0ff0,	// (0x00043a4a) list_medium_line_x2_t4_g2_t1

0x1007,	// (0x00043a61) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1007,	// (0x00043a61) list_medium_line_x2_t4_g2_t2

0x101c,	// (0x00043a76) list_medium_line_x2_t4_g2_t3_ParamLimits

0x101c,	// (0x00043a76) list_medium_line_x2_t4_g2_t3

0xa70c,	// (0x0004d166) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_x2_t4_g2_t4

0x0003,

0xfbd8,	// (0x00052632) list_medium_line_x2_t4_g2_t_ParamLimits

0xfbd8,	// (0x00052632) list_medium_line_x2_t4_g2_t

0xb194,	// (0x0004dbee) list_medium_line_t3_right_iconx2_g1

0xb114,	// (0x0004db6e) list_medium_line_t3_right_iconx2_g2

0x102e,	// (0x00043a88) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfbe1,	// (0x0005263b) list_medium_line_t3_right_iconx2_g

0x1038,	// (0x00043a92) list_medium_line_t3_right_iconx2_t1

0x1048,	// (0x00043aa2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbe8,	// (0x00052642) list_medium_line_t3_right_iconx2_t

0xa6d3,	// (0x0004d12d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x3_t4_g4_g1

0xa6df,	// (0x0004d139) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x3_t4_g4_g2

0xa755,	// (0x0004d1af) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa755,	// (0x0004d1af) list_medium_line_x3_t4_g4_g3

0xb19c,	// (0x0004dbf6) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb19c,	// (0x0004dbf6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfbed,	// (0x00052647) list_medium_line_x3_t4_g4_g_ParamLimits

0xfbed,	// (0x00052647) list_medium_line_x3_t4_g4_g

0x1056,	// (0x00043ab0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1056,	// (0x00043ab0) list_medium_line_x3_t4_g4_t1

0x106d,	// (0x00043ac7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x106d,	// (0x00043ac7) list_medium_line_x3_t4_g4_t2

0xa816,	// (0x0004d270) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa816,	// (0x0004d270) list_medium_line_x3_t4_g4_t3

0xb1a8,	// (0x0004dc02) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb1a8,	// (0x0004dc02) list_medium_line_x3_t4_g4_t4

0x0003,

0xfbf6,	// (0x00052650) list_medium_line_x3_t4_g4_t_ParamLimits

0xfbf6,	// (0x00052650) list_medium_line_x3_t4_g4_t

0x1088,	// (0x00043ae2) list_single_dyc_row_text_pane_t1_ParamLimits

0x1088,	// (0x00043ae2) list_single_dyc_row_text_pane_t1

0x10d1,	// (0x00043b2b) list_single_dyc_row_text_pane_t2_ParamLimits

0x10d1,	// (0x00043b2b) list_single_dyc_row_text_pane_t2

0xb1c5,	// (0x0004dc1f) list_single_dyc_row_text_pane_t3_ParamLimits

0xb1c5,	// (0x0004dc1f) list_single_dyc_row_text_pane_t3

0x0002,

0xfbff,	// (0x00052659) list_single_dyc_row_text_pane_t_ParamLimits

0xfbff,	// (0x00052659) list_single_dyc_row_text_pane_t

0xb1d7,	// (0x0004dc31) list_single_dyc_row_pane_g1_ParamLimits

0xb1d7,	// (0x0004dc31) list_single_dyc_row_pane_g1

0xb1e3,	// (0x0004dc3d) list_single_dyc_row_pane_g2_ParamLimits

0xb1e3,	// (0x0004dc3d) list_single_dyc_row_pane_g2

0xb1ef,	// (0x0004dc49) list_single_dyc_row_pane_g3_ParamLimits

0xb1ef,	// (0x0004dc49) list_single_dyc_row_pane_g3

0xb1fb,	// (0x0004dc55) list_single_dyc_row_pane_g4_ParamLimits

0xb1fb,	// (0x0004dc55) list_single_dyc_row_pane_g4

0x0003,

0xfc06,	// (0x00052660) list_single_dyc_row_pane_g_ParamLimits

0xfc06,	// (0x00052660) list_single_dyc_row_pane_g

0xb207,	// (0x0004dc61) list_single_dyc_row_text_pane_ParamLimits

0xb207,	// (0x0004dc61) list_single_dyc_row_text_pane

0xa5bf,	// (0x0004d019) bg_sp_fs_scroll_pane

0x967d,	// (0x0004c0d7) thumb_sp_fs_scroll_pane

0xae74,	// (0x0004d8ce) list_medium_line_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_g1

0xb226,	// (0x0004dc80) list_medium_line_t1_ParamLimits

0xb226,	// (0x0004dc80) list_medium_line_t1

0xa6d3,	// (0x0004d12d) list_medium_line_x2_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_g1

0xa6df,	// (0x0004d139) list_medium_line_x2_g2_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x2_g2

0x0001,

0xfc0f,	// (0x00052669) list_medium_line_x2_g_ParamLimits

0xfc0f,	// (0x00052669) list_medium_line_x2_g

0xb23b,	// (0x0004dc95) list_medium_line_x2_t1_ParamLimits

0xb23b,	// (0x0004dc95) list_medium_line_x2_t1

0xa6d3,	// (0x0004d12d) list_medium_line_x3_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x3_g1

0xa6df,	// (0x0004d139) list_medium_line_x3_g2_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x3_g2

0x0001,

0xfc0f,	// (0x00052669) list_medium_line_x3_g_ParamLimits

0xfc0f,	// (0x00052669) list_medium_line_x3_g

0xb23b,	// (0x0004dc95) list_medium_line_x3_t1_ParamLimits

0xb23b,	// (0x0004dc95) list_medium_line_x3_t1

0x9686,	// (0x0004c0e0) thumb_sp_fs_scroll_pane_g1

0x968f,	// (0x0004c0e9) thumb_sp_fs_scroll_pane_g2

0x9698,	// (0x0004c0f2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x0005266e) thumb_sp_fs_scroll_pane_g

0x9686,	// (0x0004c0e0) bg_sp_fs_scroll_pane_g1

0x968f,	// (0x0004c0e9) bg_sp_fs_scroll_pane_g2

0x9698,	// (0x0004c0f2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x0005266e) bg_sp_fs_scroll_pane_g

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa6d3,	// (0x0004d12d) list_medium_line_x2_t3_g4_g1

0xa749,	// (0x0004d1a3) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa749,	// (0x0004d1a3) list_medium_line_x2_t3_g4_g2

0xa6df,	// (0x0004d139) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa6df,	// (0x0004d139) list_medium_line_x2_t3_g4_g3

0xa6eb,	// (0x0004d145) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa6eb,	// (0x0004d145) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00051d2c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00051d2c) list_medium_line_x2_t3_g4_g

0x112b,	// (0x00043b85) list_medium_line_x2_t3_g4_t1_ParamLimits

0x112b,	// (0x00043b85) list_medium_line_x2_t3_g4_t1

0x1145,	// (0x00043b9f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1145,	// (0x00043b9f) list_medium_line_x2_t3_g4_t2

0xa70c,	// (0x0004d166) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa70c,	// (0x0004d166) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc1b,	// (0x00052675) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc1b,	// (0x00052675) list_medium_line_x2_t3_g4_t

0xae74,	// (0x0004d8ce) list_medium_line_g2_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_g2_g1

0xae80,	// (0x0004d8da) list_medium_line_g2_g2_ParamLimits

0xae80,	// (0x0004d8da) list_medium_line_g2_g2

0x0001,

0xf8d3,	// (0x0005232d) list_medium_line_g2_g_ParamLimits

0xf8d3,	// (0x0005232d) list_medium_line_g2_g

0xb251,	// (0x0004dcab) list_medium_line_g2_t1_ParamLimits

0xb251,	// (0x0004dcab) list_medium_line_g2_t1

0xae74,	// (0x0004d8ce) list_medium_line_t3_g2_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_t3_g2_g1

0xae80,	// (0x0004d8da) list_medium_line_t3_g2_g2_ParamLimits

0xae80,	// (0x0004d8da) list_medium_line_t3_g2_g2

0x0001,

0xf8d3,	// (0x0005232d) list_medium_line_t3_g2_g_ParamLimits

0xf8d3,	// (0x0005232d) list_medium_line_t3_g2_g

0x115f,	// (0x00043bb9) list_medium_line_t3_g2_t1_ParamLimits

0x115f,	// (0x00043bb9) list_medium_line_t3_g2_t1

0x1179,	// (0x00043bd3) list_medium_line_t3_g2_t2_ParamLimits

0x1179,	// (0x00043bd3) list_medium_line_t3_g2_t2

0x118e,	// (0x00043be8) list_medium_line_t3_g2_t3_ParamLimits

0x118e,	// (0x00043be8) list_medium_line_t3_g2_t3

0x0002,

0xfc22,	// (0x0005267c) list_medium_line_t3_g2_t_ParamLimits

0xfc22,	// (0x0005267c) list_medium_line_t3_g2_t

0xb114,	// (0x0004db6e) list_medium_line_right_icon_g1

0xb266,	// (0x0004dcc0) list_medium_line_right_icon_t1

0xae74,	// (0x0004d8ce) list_medium_line_t2_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_t2_g1

0x11a8,	// (0x00043c02) list_medium_line_t2_t1_ParamLimits

0x11a8,	// (0x00043c02) list_medium_line_t2_t1

0x11c2,	// (0x00043c1c) list_medium_line_t2_t2_ParamLimits

0x11c2,	// (0x00043c1c) list_medium_line_t2_t2

0x0001,

0xfc29,	// (0x00052683) list_medium_line_t2_t_ParamLimits

0xfc29,	// (0x00052683) list_medium_line_t2_t

0xae74,	// (0x0004d8ce) list_medium_line_t3_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_t3_g1

0x11db,	// (0x00043c35) list_medium_line_t3_t1_ParamLimits

0x11db,	// (0x00043c35) list_medium_line_t3_t1

0x11f2,	// (0x00043c4c) list_medium_line_t3_t2_ParamLimits

0x11f2,	// (0x00043c4c) list_medium_line_t3_t2

0x1207,	// (0x00043c61) list_medium_line_t3_t3_ParamLimits

0x1207,	// (0x00043c61) list_medium_line_t3_t3

0x0002,

0xfc2e,	// (0x00052688) list_medium_line_t3_t_ParamLimits

0xfc2e,	// (0x00052688) list_medium_line_t3_t

0xae74,	// (0x0004d8ce) list_medium_line_g3_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_g3_g1

0xb274,	// (0x0004dcce) list_medium_line_g3_g2_ParamLimits

0xb274,	// (0x0004dcce) list_medium_line_g3_g2

0xae80,	// (0x0004d8da) list_medium_line_g3_g3_ParamLimits

0xae80,	// (0x0004d8da) list_medium_line_g3_g3

0x0002,

0xfc35,	// (0x0005268f) list_medium_line_g3_g_ParamLimits

0xfc35,	// (0x0005268f) list_medium_line_g3_g

0xb280,	// (0x0004dcda) list_medium_line_g3_t1_ParamLimits

0xb280,	// (0x0004dcda) list_medium_line_g3_t1

0xae74,	// (0x0004d8ce) list_medium_line_t2_g3_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_t2_g3_g1

0xb274,	// (0x0004dcce) list_medium_line_t2_g3_g2_ParamLimits

0xb274,	// (0x0004dcce) list_medium_line_t2_g3_g2

0xae80,	// (0x0004d8da) list_medium_line_t2_g3_g3_ParamLimits

0xae80,	// (0x0004d8da) list_medium_line_t2_g3_g3

0x0002,

0xfc35,	// (0x0005268f) list_medium_line_t2_g3_g_ParamLimits

0xfc35,	// (0x0005268f) list_medium_line_t2_g3_g

0x1219,	// (0x00043c73) list_medium_line_t2_g3_t1_ParamLimits

0x1219,	// (0x00043c73) list_medium_line_t2_g3_t1

0x1233,	// (0x00043c8d) list_medium_line_t2_g3_t2_ParamLimits

0x1233,	// (0x00043c8d) list_medium_line_t2_g3_t2

0x0001,

0xfc3c,	// (0x00052696) list_medium_line_t2_g3_t_ParamLimits

0xfc3c,	// (0x00052696) list_medium_line_t2_g3_t

0xae74,	// (0x0004d8ce) list_medium_line_t3_g3_g1_ParamLimits

0xae74,	// (0x0004d8ce) list_medium_line_t3_g3_g1

0xb274,	// (0x0004dcce) list_medium_line_t3_g3_g2_ParamLimits

0xb274,	// (0x0004dcce) list_medium_line_t3_g3_g2

0xae80,	// (0x0004d8da) list_medium_line_t3_g3_g3_ParamLimits

0xae80,	// (0x0004d8da) list_medium_line_t3_g3_g3

0x0002,

0xfc35,	// (0x0005268f) list_medium_line_t3_g3_g_ParamLimits

0xfc35,	// (0x0005268f) list_medium_line_t3_g3_g

0x124e,	// (0x00043ca8) list_medium_line_t3_g3_t1_ParamLimits

0x124e,	// (0x00043ca8) list_medium_line_t3_g3_t1

0x1262,	// (0x00043cbc) list_medium_line_t3_g3_t2_ParamLimits

0x1262,	// (0x00043cbc) list_medium_line_t3_g3_t2

0x1274,	// (0x00043cce) list_medium_line_t3_g3_t3_ParamLimits

0x1274,	// (0x00043cce) list_medium_line_t3_g3_t3

0x0002,

0xfc41,	// (0x0005269b) list_medium_line_t3_g3_t_ParamLimits

0xfc41,	// (0x0005269b) list_medium_line_t3_g3_t

0xb194,	// (0x0004dbee) list_medium_line_right_iconx2_g1

0xb114,	// (0x0004db6e) list_medium_line_right_iconx2_g2

0x0001,

0xfc48,	// (0x000526a2) list_medium_line_right_iconx2_g

0xb295,	// (0x0004dcef) list_medium_line_right_iconx2_t1

0xb194,	// (0x0004dbee) list_medium_line_t2_right_iconx2_g1

0xb114,	// (0x0004db6e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc48,	// (0x000526a2) list_medium_line_t2_right_iconx2_g

0x1288,	// (0x00043ce2) list_medium_line_t2_right_iconx2_t1

0x1298,	// (0x00043cf2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc4d,	// (0x000526a7) list_medium_line_t2_right_iconx2_t

0xb2a3,	// (0x0004dcfd) list_medium_line_x4_t4_t1

0x12aa,	// (0x00043d04) list_medium_line_x4_t4_t2

0x12ba,	// (0x00043d14) list_medium_line_x4_t4_t3

0x12ca,	// (0x00043d24) list_medium_line_x4_t4_t4

0x0003,

0xfc52,	// (0x000526ac) list_medium_line_x4_t4_t

0x96e4,	// (0x0004c13e) tport_appsw_pane_ParamLimits

0x96e4,	// (0x0004c13e) tport_appsw_pane

0x96f5,	// (0x0004c14f) tport_contact_pane_ParamLimits

0x96f5,	// (0x0004c14f) tport_contact_pane

0x970e,	// (0x0004c168) tport_listscroll_pane_ParamLimits

0x970e,	// (0x0004c168) tport_listscroll_pane

0x9729,	// (0x0004c183) cell_tport_appsw_pane_ParamLimits

0x9729,	// (0x0004c183) cell_tport_appsw_pane

0x6a08,	// (0x00049462) tport_appsw_pane_g1_ParamLimits

0x6a08,	// (0x00049462) tport_appsw_pane_g1

0x9769,	// (0x0004c1c3) tport_contact_pane_g1

0x8a2a,	// (0x0004b484) tport_contact_pane_t1

0x9772,	// (0x0004c1cc) tport_contact_pane_t2

0x0001,

0xfc5b,	// (0x000526b5) tport_contact_pane_t

0x9780,	// (0x0004c1da) list_tport_pane

0x9789,	// (0x0004c1e3) scroll_pane_cp_030

0x979a,	// (0x0004c1f4) cell_tport_appsw_pane_g1

0x97aa,	// (0x0004c204) cell_tport_appsw_pane_t1

0xa5bf,	// (0x0004d019) grid_highlight_pane_cp019

0x97b8,	// (0x0004c212) list_tport_double_graphic_pane_ParamLimits

0x97b8,	// (0x0004c212) list_tport_double_graphic_pane

0xdcdd,	// (0x00050737) list_highlight_pane_cp023_ParamLimits

0xdcdd,	// (0x00050737) list_highlight_pane_cp023

0x97c5,	// (0x0004c21f) list_tport_double_graphic_pane_g1_ParamLimits

0x97c5,	// (0x0004c21f) list_tport_double_graphic_pane_g1

0x97d2,	// (0x0004c22c) list_tport_double_graphic_pane_t1_ParamLimits

0x97d2,	// (0x0004c22c) list_tport_double_graphic_pane_t1

0x97e7,	// (0x0004c241) list_tport_double_graphic_pane_t2_ParamLimits

0x97e7,	// (0x0004c241) list_tport_double_graphic_pane_t2

0x0001,

0xfc67,	// (0x000526c1) list_tport_double_graphic_pane_t_ParamLimits

0xfc67,	// (0x000526c1) list_tport_double_graphic_pane_t

0xa5bf,	// (0x0004d019) main_cale_note_pane

0x69bd,	// (0x00049417) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x69bd,	// (0x00049417) cell_vitu2_function_top_wide_pane_cp01

0x8dce,	// (0x0004b828) wait_bar_pane_cp05_ParamLimits

0xa5bf,	// (0x0004d019) listscroll_cmail_pane

0x9801,	// (0x0004c25b) list_cmail_pane

0x72af,	// (0x00049d09) list_cmail_body_pane

0x9823,	// (0x0004c27d) list_single_cmail_header_caption_pane

0x9839,	// (0x0004c293) list_single_cmail_header_detail_pane_ParamLimits

0x9839,	// (0x0004c293) list_single_cmail_header_detail_pane

0x9862,	// (0x0004c2bc) list_single_cmail_header_caption_pane_t1

0x12da,	// (0x00043d34) list_single_cmail_header_detail_pane_g1_ParamLimits

0x12da,	// (0x00043d34) list_single_cmail_header_detail_pane_g1

0xb2b1,	// (0x0004dd0b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb2b1,	// (0x0004dd0b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc6c,	// (0x000526c6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc6c,	// (0x000526c6) list_single_cmail_header_detail_pane_g

0xb2bd,	// (0x0004dd17) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb2bd,	// (0x0004dd17) list_single_cmail_header_detail_pane_t1

0xb2f3,	// (0x0004dd4d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb2f3,	// (0x0004dd4d) list_single_cmail_header_editor_pane_bg

0x8c3a,	// (0x0004b694) list_cmail_body_pane_g1

0x9888,	// (0x0004c2e2) list_cmail_body_pane_t1

0x6ace,	// (0x00049528) list_single_cmail_header_editor_pane_bg_g1

0xc7ae,	// (0x0004f208) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6ade,	// (0x00049538) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6ad6,	// (0x00049530) list_single_cmail_header_editor_pane_bg_g1_copy3

0x7467,	// (0x00049ec1) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6afe,	// (0x00049558) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6aee,	// (0x00049548) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6af6,	// (0x00049550) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc78e,	// (0x0004f1e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9896,	// (0x0004c2f0) calenote_gesture_pane_ParamLimits

0x9896,	// (0x0004c2f0) calenote_gesture_pane

0x98b6,	// (0x0004c310) calenote_window_pane_ParamLimits

0x98b6,	// (0x0004c310) calenote_window_pane

0x98d2,	// (0x0004c32c) popup_note_window_cp01

0x98db,	// (0x0004c335) calenote_swipe_1_pane_ParamLimits

0x98db,	// (0x0004c335) calenote_swipe_1_pane

0x94d3,	// (0x0004bf2d) calenote_swipe_2_pane_ParamLimits

0x94d3,	// (0x0004bf2d) calenote_swipe_2_pane

0x940a,	// (0x0004be64) calenote_swipe_1_pane_g1_ParamLimits

0x940a,	// (0x0004be64) calenote_swipe_1_pane_g1

0x9417,	// (0x0004be71) calenote_swipe_1_pane_g2_ParamLimits

0x9417,	// (0x0004be71) calenote_swipe_1_pane_g2

0x0001,

0xfb96,	// (0x000525f0) calenote_swipe_1_pane_g_ParamLimits

0xfb96,	// (0x000525f0) calenote_swipe_1_pane_g

0x98f9,	// (0x0004c353) calenote_swipe_1_pane_t1_ParamLimits

0x98f9,	// (0x0004c353) calenote_swipe_1_pane_t1

0x940a,	// (0x0004be64) calenote_swipe_2_pane_g1_ParamLimits

0x940a,	// (0x0004be64) calenote_swipe_2_pane_g1

0x9918,	// (0x0004c372) calenote_swipe_2_pane_g2_ParamLimits

0x9918,	// (0x0004c372) calenote_swipe_2_pane_g2

0x0001,

0xfc78,	// (0x000526d2) calenote_swipe_2_pane_g_ParamLimits

0xfc78,	// (0x000526d2) calenote_swipe_2_pane_g

0x9924,	// (0x0004c37e) calenote_swipe_2_pane_t1_ParamLimits

0x9924,	// (0x0004c37e) calenote_swipe_2_pane_t1

0xa5bf,	// (0x0004d019) main_mup_navstr_pane

0x56cd,	// (0x00048127) main_mup3_pane_t7_ParamLimits

0x56cd,	// (0x00048127) main_mup3_pane_t7

0xab02,	// (0x0004d55c) main_mp4_pane_g6_ParamLimits

0xab02,	// (0x0004d55c) main_mp4_pane_g6

0xaca6,	// (0x0004d700) main_image3_pane_t4_ParamLimits

0xaca6,	// (0x0004d700) main_image3_pane_t4

0x994b,	// (0x0004c3a5) popup_navstr_preview_pane_ParamLimits

0x994b,	// (0x0004c3a5) popup_navstr_preview_pane

0x995f,	// (0x0004c3b9) scroll_navstr_pane_ParamLimits

0x995f,	// (0x0004c3b9) scroll_navstr_pane

0xa5bf,	// (0x0004d019) bg_popup_preview_window_pane_cp04

0x9973,	// (0x0004c3cd) popup_navstr_preview_pane_t1

0x9981,	// (0x0004c3db) scroll_navstr_pane_g1_ParamLimits

0x9981,	// (0x0004c3db) scroll_navstr_pane_g1

0x9995,	// (0x0004c3ef) scroll_navstr_pane_t1_ParamLimits

0x9995,	// (0x0004c3ef) scroll_navstr_pane_t1

0x98f0,	// (0x0004c34a) bg_button_pane_cp014

0x98f0,	// (0x0004c34a) bg_button_pane_cp030

0x0eb4,	// (0x0004390e) list_double_fisheye_pane_g4_ParamLimits

0x0eb4,	// (0x0004390e) list_double_fisheye_pane_g4

0x0ec0,	// (0x0004391a) list_double_fisheye_pane_g5_ParamLimits

0x0ec0,	// (0x0004391a) list_double_fisheye_pane_g5

0x9813,	// (0x0004c26d) sp_fs_scroll_pane_cp03

0x95ff,	// (0x0004c059) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x960b,	// (0x0004c065) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbb3,	// (0x0005260d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9617,	// (0x0004c071) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9809,	// (0x0004c263) sp_fs_scroll_pane_cp02

0xc4bc,	// (0x0004ef16) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc4bc,	// (0x0004ef16) popup_sp_fs_calendar_preview_list_single_pane

0xa5bf,	// (0x0004d019) main_cam6_pano_pane

0xdcdd,	// (0x00050737) main_mup3_pane_ParamLimits

0xa5bf,	// (0x0004d019) main_phacti_pane

0x8ca1,	// (0x0004b6fb) bg_button_pane_cp11

0x8cbb,	// (0x0004b715) main_mobtv_info_pane_g2_ParamLimits

0x8cbb,	// (0x0004b715) main_mobtv_info_pane_g2

0x0001,

0xfb13,	// (0x0005256d) main_mobtv_info_pane_g_ParamLimits

0xfb13,	// (0x0005256d) main_mobtv_info_pane_g

0x8f3e,	// (0x0004b998) sc_clock_pane_t5_ParamLimits

0x8f3e,	// (0x0004b998) sc_clock_pane_t5

0x9125,	// (0x0004bb7f) main_radioblah_pane_g1_ParamLimits

0x916b,	// (0x0004bbc5) main_radioblah_pane_t3_ParamLimits

0x916b,	// (0x0004bbc5) main_radioblah_pane_t3

0x9183,	// (0x0004bbdd) main_radioblah_pane_t4_ParamLimits

0x9183,	// (0x0004bbdd) main_radioblah_pane_t4

0x91b1,	// (0x0004bc0b) main_radioblah_text_pane_ParamLimits

0x91b1,	// (0x0004bc0b) main_radioblah_text_pane

0x91c3,	// (0x0004bc1d) main_radioblah_info_pane_g1_ParamLimits

0x9296,	// (0x0004bcf0) main_radioblah_info_pane_t4_ParamLimits

0x9296,	// (0x0004bcf0) main_radioblah_info_pane_t4

0xdcdd,	// (0x00050737) main_sp_fs_calendar_pane

0x99ac,	// (0x0004c406) main_phacti_pane_g1

0x99bd,	// (0x0004c417) phacti_note_pane_ParamLimits

0x99bd,	// (0x0004c417) phacti_note_pane

0x99d1,	// (0x0004c42b) phacti_term_pane_ParamLimits

0x99d1,	// (0x0004c42b) phacti_term_pane

0x99e6,	// (0x0004c440) phacti_note_pane_t1_ParamLimits

0x99e6,	// (0x0004c440) phacti_note_pane_t1

0xb305,	// (0x0004dd5f) phacti_term_pane_g1

0xb30d,	// (0x0004dd67) phacti_term_pane_t1_ParamLimits

0xb30d,	// (0x0004dd67) phacti_term_pane_t1

0x99fd,	// (0x0004c457) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc5af,	// (0x0004f009) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc82,	// (0x000526dc) popup_sp_fs_calendar_preview_list_single_pane_g

0x9a05,	// (0x0004c45f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x9a05,	// (0x0004c45f) popup_sp_fs_calendar_preview_list_single_pane_t1

0x9a1a,	// (0x0004c474) aid_popup_sp_fs_bg_corner_pane

0xe6b8,	// (0x00051112) popup_sp_fs_calendar_preview_bg_pane_g1

0xa5bf,	// (0x0004d019) popup_sp_fs_calendar_preview_bg_pane

0x9a22,	// (0x0004c47c) popup_sp_fs_calendar_preview_list_pane

0xdcdd,	// (0x00050737) bg_main_sp_fs_cale_pane_ParamLimits

0xdcdd,	// (0x00050737) bg_main_sp_fs_cale_pane

0xb337,	// (0x0004dd91) listscroll_cale_mrui_pane_ParamLimits

0xb337,	// (0x0004dd91) listscroll_cale_mrui_pane

0xb34b,	// (0x0004dda5) listscroll_sp_fs_schedule_track_pane

0xb354,	// (0x0004ddae) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb354,	// (0x0004ddae) main_sp_fs_ctrlbar_pane_cp01

0x9a77,	// (0x0004c4d1) main_sp_fs_ribbon_pane

0xb365,	// (0x0004ddbf) popup_sp_fs_cale_preview_window

0x9a7f,	// (0x0004c4d9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9a7f,	// (0x0004c4d9) list_single_sp_fs_schedule_track_pane

0xdcdd,	// (0x00050737) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdcdd,	// (0x00050737) bg_sp_fs_highlight_list_pane_cp03

0x9a91,	// (0x0004c4eb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9a91,	// (0x0004c4eb) list_single_sp_fs_schedule_track_pane_g1

0x9a9d,	// (0x0004c4f7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9a9d,	// (0x0004c4f7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc87,	// (0x000526e1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc87,	// (0x000526e1) list_single_sp_fs_schedule_track_pane_g

0x9aa9,	// (0x0004c503) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9aa9,	// (0x0004c503) list_single_sp_fs_schedule_track_pane_t1

0x9ac3,	// (0x0004c51d) sp_fs_schedule_track_pane_ParamLimits

0x9ac3,	// (0x0004c51d) sp_fs_schedule_track_pane

0xb377,	// (0x0004ddd1) sp_fs_schedule_track_pane_g1

0xb37f,	// (0x0004ddd9) sp_fs_schedule_track_pane_g2

0xb387,	// (0x0004dde1) sp_fs_schedule_track_pane_g3

0xb38f,	// (0x0004dde9) sp_fs_schedule_track_pane_g4

0xb397,	// (0x0004ddf1) sp_fs_schedule_track_pane_g5

0x0004,

0xfc8c,	// (0x000526e6) sp_fs_schedule_track_pane_g

0x6ace,	// (0x00049528) bg_sp_fs_schedule_viewer_highlight_g1

0xc7ae,	// (0x0004f208) bg_sp_fs_schedule_viewer_highlight_g2

0x6ad6,	// (0x00049530) bg_sp_fs_schedule_viewer_highlight_g3

0x6ade,	// (0x00049538) bg_sp_fs_schedule_viewer_highlight_g4

0x7467,	// (0x00049ec1) bg_sp_fs_schedule_viewer_highlight_g5

0x6aee,	// (0x00049548) bg_sp_fs_schedule_viewer_highlight_g6

0x6af6,	// (0x00049550) bg_sp_fs_schedule_viewer_highlight_g7

0x6afe,	// (0x00049558) bg_sp_fs_schedule_viewer_highlight_g8

0xc78e,	// (0x0004f1e8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc97,	// (0x000526f1) bg_sp_fs_schedule_viewer_highlight_g

0xa5bf,	// (0x0004d019) bg_main_sp_fs_ribbon_pane

0x9ad4,	// (0x0004c52e) main_sp_fs_ribbon_pane_g1

0xb39f,	// (0x0004ddf9) main_sp_fs_ribbon_pane_t1

0x9add,	// (0x0004c537) main_sp_fs_ribbon_pane_t2

0xb3ae,	// (0x0004de08) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcaa,	// (0x00052704) main_sp_fs_ribbon_pane_t

0xb3bd,	// (0x0004de17) main_sp_fs_ribbon_scheduler_pane

0xb3c5,	// (0x0004de1f) bg_main_sp_fs_ribbon_pane_g1

0xb3ce,	// (0x0004de28) bg_main_sp_fs_ribbon_pane_g2

0xb3d7,	// (0x0004de31) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcb1,	// (0x0005270b) bg_main_sp_fs_ribbon_pane_g

0xb3df,	// (0x0004de39) main_sp_fs_ribbon_scheduler_pane_g1

0xb3e8,	// (0x0004de42) main_sp_fs_ribbon_scheduler_pane_g2

0xb3f1,	// (0x0004de4b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcb8,	// (0x00052712) main_sp_fs_ribbon_scheduler_pane_g

0xb3fa,	// (0x0004de54) list_cale_mrui_pane

0x9aec,	// (0x0004c546) sp_fs_scroll_pane_cp07_ParamLimits

0x9aec,	// (0x0004c546) sp_fs_scroll_pane_cp07

0x9b00,	// (0x0004c55a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9b00,	// (0x0004c55a) bg_sp_fs_schedule_viewer_highlight

0xb403,	// (0x0004de5d) list_single_sp_fs_schedule_track_pane_cp01

0xb40b,	// (0x0004de65) list_sp_fs_schedule_track_pane

0xb413,	// (0x0004de6d) sp_fs_scroll_pane_cp06_ParamLimits

0xb413,	// (0x0004de6d) sp_fs_scroll_pane_cp06

0xe6b8,	// (0x00051112) bgmain_sp_fs_calendar_pane_g1

0x1318,	// (0x00043d72) list_single_cale_mrui_pane_ParamLimits

0x1318,	// (0x00043d72) list_single_cale_mrui_pane

0xb425,	// (0x0004de7f) list_single_cale_mrui_row_pane_ParamLimits

0xb425,	// (0x0004de7f) list_single_cale_mrui_row_pane

0xb432,	// (0x0004de8c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb432,	// (0x0004de8c) list_single_cale_mrui_row_pane_g1

0xb477,	// (0x0004ded1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb477,	// (0x0004ded1) list_single_cale_mrui_row_pane_t1

0x1338,	// (0x00043d92) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1338,	// (0x00043d92) list_single_cale_mrui_row_pane_t2

0xb489,	// (0x0004dee3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb489,	// (0x0004dee3) list_single_cale_mrui_row_pane_t3

0xb4b8,	// (0x0004df12) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb4b8,	// (0x0004df12) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcc6,	// (0x00052720) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcc6,	// (0x00052720) list_single_cale_mrui_row_pane_t

0x13a0,	// (0x00043dfa) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x13a0,	// (0x00043dfa) list_single_cmail_header_editor_pane_bg_cp01

0x13c6,	// (0x00043e20) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x13c6,	// (0x00043e20) list_single_cmail_header_editor_pane_bg_cp02

0x9b10,	// (0x0004c56a) main_radioblah_text_pane_t1_ParamLimits

0x9b10,	// (0x0004c56a) main_radioblah_text_pane_t1

0xb4e7,	// (0x0004df41) cam6_indi_pane_cp01

0xb4ef,	// (0x0004df49) cam6_mode_pane_cp01

0xb4f7,	// (0x0004df51) cam6_pano_pane

0xb500,	// (0x0004df5a) cam6_zoom_pane_cp01

0xb508,	// (0x0004df62) cam6_pano_image_pane

0xb513,	// (0x0004df6d) cam6_pano_pane_g1

0x8c3a,	// (0x0004b694) cam6_pano_pane_g2

0xb51c,	// (0x0004df76) cam6_pano_pane_g3

0xb525,	// (0x0004df7f) cam6_pano_pane_g4

0xec51,	// (0x000516ab) cam6_pano_pane_g5

0xb52e,	// (0x0004df88) cam6_pano_pane_g6

0xb538,	// (0x0004df92) cam6_pano_pane_g7

0xb540,	// (0x0004df9a) cam6_pano_pane_g8

0xb549,	// (0x0004dfa3) cam6_pano_pane_g9

0x0008,

0xfccf,	// (0x00052729) cam6_pano_pane_g

0xa5bf,	// (0x0004d019) main_browser_tag_pane

0x9943,	// (0x0004c39d) grid_navstr_albumart_pane

0xb554,	// (0x0004dfae) cell_navstr_albumart_pane_ParamLimits

0xb554,	// (0x0004dfae) cell_navstr_albumart_pane

0xb577,	// (0x0004dfd1) cell_navstr_albumart_pane_g1

0xe0bc,	// (0x00050b16) cell_navstr_albumart_pane_g2

0xe0cc,	// (0x00050b26) cell_navstr_albumart_pane_g3

0xe0c4,	// (0x00050b1e) cell_navstr_albumart_pane_g4

0x0003,

0xfce2,	// (0x0005273c) cell_navstr_albumart_pane_g

0x9b2a,	// (0x0004c584) bt_list_pane_ParamLimits

0x9b2a,	// (0x0004c584) bt_list_pane

0x9b3e,	// (0x0004c598) bt_list_pane_t1

0x9b4d,	// (0x0004c5a7) bt_list_pane_t2

0x0001,

0xfceb,	// (0x00052745) bt_list_pane_t

0xa5bf,	// (0x0004d019) main_cale_prevew_pane

0x9b5c,	// (0x0004c5b6) popup_cale_preview_window_ParamLimits

0x9b5c,	// (0x0004c5b6) popup_cale_preview_window

0xdcdd,	// (0x00050737) bg_popup_preview_window_pane_cp05_ParamLimits

0xdcdd,	// (0x00050737) bg_popup_preview_window_pane_cp05

0xb57f,	// (0x0004dfd9) list_cale_preview_pane_ParamLimits

0xb57f,	// (0x0004dfd9) list_cale_preview_pane

0x9b77,	// (0x0004c5d1) list_double_cale_preview_pane_ParamLimits

0x9b77,	// (0x0004c5d1) list_double_cale_preview_pane

0x9b89,	// (0x0004c5e3) list_single_cale_preview_pane_ParamLimits

0x9b89,	// (0x0004c5e3) list_single_cale_preview_pane

0x9b9f,	// (0x0004c5f9) list_single_cale_preview_pane_g1

0x9ba7,	// (0x0004c601) list_single_cale_preview_pane_t1_ParamLimits

0x9ba7,	// (0x0004c601) list_single_cale_preview_pane_t1

0x9bbc,	// (0x0004c616) list_double_cale_preview_pane_g1

0x9bc4,	// (0x0004c61e) list_double_cale_preview_pane_t1_ParamLimits

0x9bc4,	// (0x0004c61e) list_double_cale_preview_pane_t1

0x9bd9,	// (0x0004c633) list_double_cale_preview_pane_t2_ParamLimits

0x9bd9,	// (0x0004c633) list_double_cale_preview_pane_t2

0x0001,

0xfcf0,	// (0x0005274a) list_double_cale_preview_pane_t_ParamLimits

0xfcf0,	// (0x0005274a) list_double_cale_preview_pane_t

0xa5bf,	// (0x0004d019) main_ezdial_pane

0xdcdd,	// (0x00050737) main_sp_fs_email_pane_ParamLimits

0x9568,	// (0x0004bfc2) cmail_ddmenu_btn01_pane_ParamLimits

0x9568,	// (0x0004bfc2) cmail_ddmenu_btn01_pane

0x957b,	// (0x0004bfd5) cmail_ddmenu_btn02_pane_ParamLimits

0x957b,	// (0x0004bfd5) cmail_ddmenu_btn02_pane

0x95d6,	// (0x0004c030) cmail_ddmenu_btn03_pane_ParamLimits

0x95d6,	// (0x0004c030) cmail_ddmenu_btn03_pane

0x0f30,	// (0x0004398a) main_sp_fs_ctrlbar_pane_ParamLimits

0x0f54,	// (0x000439ae) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x72af,	// (0x00049d09) list_cmail_body_pane_ParamLimits

0x9872,	// (0x0004c2cc) bg_button_pane_cp12

0x987b,	// (0x0004c2d5) list_single_cmail_header_detail_pane_g3_ParamLimits

0x987b,	// (0x0004c2d5) list_single_cmail_header_detail_pane_g3

0x12f2,	// (0x00043d4c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x12f2,	// (0x00043d4c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc73,	// (0x000526cd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc73,	// (0x000526cd) list_single_cmail_header_detail_pane_t

0xb322,	// (0x0004dd7c) phacti_term_pane_t2_ParamLimits

0xb322,	// (0x0004dd7c) phacti_term_pane_t2

0x0001,

0xfc7d,	// (0x000526d7) phacti_term_pane_t_ParamLimits

0xfc7d,	// (0x000526d7) phacti_term_pane_t

0xb58b,	// (0x0004dfe5) aid_size_list_single_double

0x9bf1,	// (0x0004c64b) popup_ezdial_listscroll_window

0x9c0d,	// (0x0004c667) popup_number_entry_window_cp01

0xce8b,	// (0x0004f8e5) bg_popup_call_pane_cp09

0xb597,	// (0x0004dff1) ezdial_list_pane

0xb59f,	// (0x0004dff9) scroll_pane_cp23

0xe29f,	// (0x00050cf9) bg_button_pane_cp028_ParamLimits

0xe29f,	// (0x00050cf9) bg_button_pane_cp028

0x9c1b,	// (0x0004c675) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9c1b,	// (0x0004c675) cmail_ddmenu_btn01_pane_g1

0x9c2a,	// (0x0004c684) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9c2a,	// (0x0004c684) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcf5,	// (0x0005274f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcf5,	// (0x0005274f) cmail_ddmenu_btn01_pane_g

0xb5a7,	// (0x0004e001) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb5a7,	// (0x0004e001) cmail_ddmenu_btn01_pane_t1

0xe29f,	// (0x00050cf9) bg_button_pane_cp029_ParamLimits

0xe29f,	// (0x00050cf9) bg_button_pane_cp029

0x9c3a,	// (0x0004c694) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9c3a,	// (0x0004c694) cmail_ddmenu_btn02_pane_g1

0x9c55,	// (0x0004c6af) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9c55,	// (0x0004c6af) cmail_ddmenu_btn02_pane_t1

0xdcdd,	// (0x00050737) bg_button_pane_cp031_ParamLimits

0xdcdd,	// (0x00050737) bg_button_pane_cp031

0x9c3a,	// (0x0004c694) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9c3a,	// (0x0004c694) cmail_ddmenu_btn03_pane_g1

0x9c55,	// (0x0004c6af) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9c55,	// (0x0004c6af) cmail_ddmenu_btn03_pane_t1

0x6241,	// (0x00048c9b) cell_dialer2_keypad_pane_t1_ParamLimits

0x625b,	// (0x00048cb5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x625b,	// (0x00048cb5) cell_dialer2_keypad_pane_t1_copy1

0x883c,	// (0x0004b296) ncimui_group_button_pane

0xdcdd,	// (0x00050737) main_sp_fs_calendar_pane_ParamLimits

0x9823,	// (0x0004c27d) list_single_cmail_header_caption_pane_ParamLimits

0x7b7f,	// (0x0004a5d9) aid_recal_txt_sm_pane

0xa5bf,	// (0x0004d019) mian_recal_day_pane

0xb365,	// (0x0004ddbf) popup_sp_fs_cale_preview_window_ParamLimits

0xa5bf,	// (0x0004d019) list_recal_day_pane

0xb5d6,	// (0x0004e030) list_single_recal_day_pane_ParamLimits

0xb5d6,	// (0x0004e030) list_single_recal_day_pane

0xb5e8,	// (0x0004e042) list_single_recal_day_pane_g1_ParamLimits

0xb5e8,	// (0x0004e042) list_single_recal_day_pane_g1

0xb5f4,	// (0x0004e04e) list_single_recal_day_pane_g2_ParamLimits

0xb5f4,	// (0x0004e04e) list_single_recal_day_pane_g2

0xb604,	// (0x0004e05e) list_single_recal_day_pane_g3_ParamLimits

0xb604,	// (0x0004e05e) list_single_recal_day_pane_g3

0x9c7c,	// (0x0004c6d6) list_single_recal_day_pane_g4_ParamLimits

0x9c7c,	// (0x0004c6d6) list_single_recal_day_pane_g4

0xb610,	// (0x0004e06a) list_single_recal_day_pane_g5_ParamLimits

0xb610,	// (0x0004e06a) list_single_recal_day_pane_g5

0xb620,	// (0x0004e07a) list_single_recal_day_pane_g6_ParamLimits

0xb620,	// (0x0004e07a) list_single_recal_day_pane_g6

0x0004,

0xfd04,	// (0x0005275e) list_single_recal_day_pane_g_ParamLimits

0xfd04,	// (0x0005275e) list_single_recal_day_pane_g

0xb637,	// (0x0004e091) list_single_recal_day_pane_t1

0xb649,	// (0x0004e0a3) list_single_recal_day_pane_t2

0x0001,

0xfd0f,	// (0x00052769) list_single_recal_day_pane_t

0x9c9c,	// (0x0004c6f6) ncimui_query_button_pane_ParamLimits

0x9c9c,	// (0x0004c6f6) ncimui_query_button_pane

0x9cac,	// (0x0004c706) ncimui_query_button_pane_t1_ParamLimits

0x9cac,	// (0x0004c706) ncimui_query_button_pane_t1

0xb65e,	// (0x0004e0b8) ncimui_query_button_pane_t2_ParamLimits

0xb65e,	// (0x0004e0b8) ncimui_query_button_pane_t2

0x0001,

0xfd14,	// (0x0005276e) ncimui_query_button_pane_t_ParamLimits

0xfd14,	// (0x0005276e) ncimui_query_button_pane_t

0x9cbf,	// (0x0004c719) query_button_pane_ParamLimits

0x9cbf,	// (0x0004c719) query_button_pane

0xa5bf,	// (0x0004d019) bg_button_pane_cp0028

0xb671,	// (0x0004e0cb) query_button_pane_t1

0x4356,	// (0x00046db0) main_tport_pane_ParamLimits

0x96a1,	// (0x0004c0fb) bg_popup_window_pane_cp01_ParamLimits

0x96a1,	// (0x0004c0fb) bg_popup_window_pane_cp01

0x96bb,	// (0x0004c115) heading_pane_cp08_ParamLimits

0x96bb,	// (0x0004c115) heading_pane_cp08

0x96cf,	// (0x0004c129) heading_pane_cp07_ParamLimits

0x96cf,	// (0x0004c129) heading_pane_cp07

0x979a,	// (0x0004c1f4) cell_tport_appsw_pane_g2

0x0002,

0xfc60,	// (0x000526ba) cell_tport_appsw_pane_g

0x0ad8,	// (0x00043532) input_candi_list_open_g1

0xc955,	// (0x0004f3af) list_cale_time_pane_g6_ParamLimits

0xc955,	// (0x0004f3af) list_cale_time_pane_g6

0x5123,	// (0x00047b7d) aid_size_touch_calib_1_ParamLimits

0x5123,	// (0x00047b7d) aid_size_touch_calib_1

0x512f,	// (0x00047b89) aid_size_touch_calib_2_ParamLimits

0x512f,	// (0x00047b89) aid_size_touch_calib_2

0x5145,	// (0x00047b9f) aid_size_touch_calib_3_ParamLimits

0x5145,	// (0x00047b9f) aid_size_touch_calib_3

0x5163,	// (0x00047bbd) aid_size_touch_calib_4_ParamLimits

0x5163,	// (0x00047bbd) aid_size_touch_calib_4

0x5179,	// (0x00047bd3) main_touch_calib_button_group_pane_ParamLimits

0x5179,	// (0x00047bd3) main_touch_calib_button_group_pane

0x5191,	// (0x00047beb) main_touch_calib_pane_g1_ParamLimits

0x519d,	// (0x00047bf7) main_touch_calib_pane_g2_ParamLimits

0x51a9,	// (0x00047c03) main_touch_calib_pane_g3_ParamLimits

0x51b5,	// (0x00047c0f) main_touch_calib_pane_g4_ParamLimits

0xf6a2,	// (0x000520fc) main_touch_calib_pane_g_ParamLimits

0x51c1,	// (0x00047c1b) main_touch_calib_pane_t1_ParamLimits

0x51db,	// (0x00047c35) main_touch_calib_pane_t2_ParamLimits

0x51f5,	// (0x00047c4f) main_touch_calib_pane_t3_ParamLimits

0x5209,	// (0x00047c63) main_touch_calib_pane_t4_ParamLimits

0x521d,	// (0x00047c77) main_touch_calib_pane_t5_ParamLimits

0xf6ab,	// (0x00052105) main_touch_calib_pane_t_ParamLimits

0xea27,	// (0x00051481) list_single_fp_cale_pane_g3_ParamLimits

0xea27,	// (0x00051481) list_single_fp_cale_pane_g3

0xdcdd,	// (0x00050737) bg_button_pane_cp012_ParamLimits

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp03_ParamLimits

0x741d,	// (0x00049e77) cell_vitu2_function_top_pane_g1_ParamLimits

0xdcdd,	// (0x00050737) bg_vkb2_func_pane_cp04_ParamLimits

0x87ca,	// (0x0004b224) main_ncimui_button_group_pane_ParamLimits

0x87ca,	// (0x0004b224) main_ncimui_button_group_pane

0x882a,	// (0x0004b284) main_ncimui_pane_t3_ParamLimits

0x882a,	// (0x0004b284) main_ncimui_pane_t3

0x99b4,	// (0x0004c40e) phacti_button_group_pane

0xb58b,	// (0x0004dfe5) aid_size_list_single_double_ParamLimits

0x9bf1,	// (0x0004c64b) popup_ezdial_listscroll_window_ParamLimits

0x9c0d,	// (0x0004c667) popup_number_entry_window_cp01_ParamLimits

0x9cd2,	// (0x0004c72c) phacti_button_pane_ParamLimits

0x9cd2,	// (0x0004c72c) phacti_button_pane

0xa5bf,	// (0x0004d019) bg_button_pane_cp14

0xb67f,	// (0x0004e0d9) phacti_button_pane_t1

0x9ce3,	// (0x0004c73d) main_touch_calib_button_pane_ParamLimits

0x9ce3,	// (0x0004c73d) main_touch_calib_button_pane

0xc3b8,	// (0x0004ee12) bg_button_pane_cp18_ParamLimits

0xc3b8,	// (0x0004ee12) bg_button_pane_cp18

0xb68d,	// (0x0004e0e7) main_touch_calib_button_pane_t1_ParamLimits

0xb68d,	// (0x0004e0e7) main_touch_calib_button_pane_t1

0xb6a3,	// (0x0004e0fd) main_touch_calib_button_pane_t2_ParamLimits

0xb6a3,	// (0x0004e0fd) main_touch_calib_button_pane_t2

0x0001,

0xfd19,	// (0x00052773) main_touch_calib_button_pane_t_ParamLimits

0xfd19,	// (0x00052773) main_touch_calib_button_pane_t

0xa5bf,	// (0x0004d019) cell_ncimui_button_pane

0xa5bf,	// (0x0004d019) bg_button_pane_cp032

0xb6c1,	// (0x0004e11b) cell_ncimui_button_pane_t1

0xac86,	// (0x0004d6e0) image3_infobar_pane_ParamLimits

0xac86,	// (0x0004d6e0) image3_infobar_pane

0x8f6a,	// (0x0004b9c4) fs_bigclock_status_pane_ParamLimits

0x8f6a,	// (0x0004b9c4) fs_bigclock_status_pane

0x8f77,	// (0x0004b9d1) main_fs_bigclock_clock_pane_ParamLimits

0x8f77,	// (0x0004b9d1) main_fs_bigclock_clock_pane

0x8f8b,	// (0x0004b9e5) main_fs_bigclock_indi_pane_ParamLimits

0x8f8b,	// (0x0004b9e5) main_fs_bigclock_indi_pane

0x8fa4,	// (0x0004b9fe) main_fs_bigclock_swipe_pane_ParamLimits

0x8fa4,	// (0x0004b9fe) main_fs_bigclock_swipe_pane

0xa5bf,	// (0x0004d019) main_fs_clock_dumped_data

0x8fc8,	// (0x0004ba22) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8fc8,	// (0x0004ba22) list_single_fs_bigclock_indicator_pane_g1

0x8fee,	// (0x0004ba48) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8fee,	// (0x0004ba48) list_single_fs_bigclock_indicator_pane_g2

0x9008,	// (0x0004ba62) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9008,	// (0x0004ba62) list_single_fs_bigclock_indicator_pane_g3

0x9022,	// (0x0004ba7c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9022,	// (0x0004ba7c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb47,	// (0x000525a1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb47,	// (0x000525a1) list_single_fs_bigclock_indicator_pane_g

0x904b,	// (0x0004baa5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x904b,	// (0x0004baa5) list_single_fs_bigclock_indicator_pane_t1

0x9073,	// (0x0004bacd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9073,	// (0x0004bacd) list_single_fs_bigclock_indicator_pane_t2

0x909b,	// (0x0004baf5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x909b,	// (0x0004baf5) list_single_fs_bigclock_indicator_pane_t3

0x90c3,	// (0x0004bb1d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x90c3,	// (0x0004bb1d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb52,	// (0x000525ac) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb52,	// (0x000525ac) list_single_fs_bigclock_indicator_pane_t

0xb6cf,	// (0x0004e129) image3_infobar_fav_pane_ParamLimits

0xb6cf,	// (0x0004e129) image3_infobar_fav_pane

0xb6df,	// (0x0004e139) image3_infobar_loc_pane_ParamLimits

0xb6df,	// (0x0004e139) image3_infobar_loc_pane

0xb6f3,	// (0x0004e14d) image3_infobar_time_pane_ParamLimits

0xb6f3,	// (0x0004e14d) image3_infobar_time_pane

0xe6b8,	// (0x00051112) image3_infobar_time_pane_g1

0xb703,	// (0x0004e15d) image3_infobar_time_pane_t1

0xe6b8,	// (0x00051112) image3_infobar_loc_pane_g1

0xb711,	// (0x0004e16b) image3_infobar_loc_pane_g2

0x0001,

0xfd1e,	// (0x00052778) image3_infobar_loc_pane_g

0xb719,	// (0x0004e173) image3_infobar_loc_pane_t1

0xe6b8,	// (0x00051112) image3_infobar_fav_pane_g1

0xb727,	// (0x0004e181) image3_infobar_fav_pane_g2

0x0001,

0xfd23,	// (0x0005277d) image3_infobar_fav_pane_g

0xb72f,	// (0x0004e189) fs_bigclock_status_battery_pane

0xb738,	// (0x0004e192) fs_bigclock_status_signal_pane

0xb741,	// (0x0004e19b) fs_bigclock_status_title_pane

0xb74a,	// (0x0004e1a4) fs_bigclock_status_signal_pane_g1

0xb753,	// (0x0004e1ad) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd28,	// (0x00052782) fs_bigclock_status_signal_pane_g

0xb75b,	// (0x0004e1b5) fs_bigclock_status_battery_pane_g1

0xb764,	// (0x0004e1be) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd2d,	// (0x00052787) fs_bigclock_status_battery_pane_g

0xb76c,	// (0x0004e1c6) fs_bigclock_status_title_pane_t1

0xe6b8,	// (0x00051112) main_fs_bigclock_clock_pane_g1

0xb77a,	// (0x0004e1d4) main_fs_bigclock_clock_pane_g2

0xb77a,	// (0x0004e1d4) main_fs_bigclock_clock_pane_g3

0xb77a,	// (0x0004e1d4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd32,	// (0x0005278c) main_fs_bigclock_clock_pane_g

0xb782,	// (0x0004e1dc) main_fs_bigclock_clock_pane_t1

0xb790,	// (0x0004e1ea) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd3b,	// (0x00052795) main_fs_bigclock_clock_pane_t

0xb79f,	// (0x0004e1f9) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb79f,	// (0x0004e1f9) list_single_fs_bigclock_indicator_pane

0x9cf8,	// (0x0004c752) list_single_fs_bigclock_pane_ParamLimits

0x9cf8,	// (0x0004c752) list_single_fs_bigclock_pane

0xb7b9,	// (0x0004e213) main_fs_bigclock_indicator_pane_t1

0xb7c8,	// (0x0004e222) list_single_fs_bigclock_pane_g1

0xb7d0,	// (0x0004e22a) list_single_fs_bigclock_pane_t1

0xe6b8,	// (0x00051112) main_fs_bigclock_swipe_pane_g1

0xb813,	// (0x0004e26d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd4c,	// (0x000527a6) main_fs_bigclock_swipe_pane_g

0xb81b,	// (0x0004e275) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb81b,	// (0x0004e275) main_fs_bigclock_swipe_pane_t1

0x31e5,	// (0x00045c3f) call_type_pane_ParamLimits

0xa5bf,	// (0x0004d019) main_btmg_pane

0xb45e,	// (0x0004deb8) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb45e,	// (0x0004deb8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcbf,	// (0x00052719) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcbf,	// (0x00052719) list_single_cale_mrui_row_pane_g

0xb5c6,	// (0x0004e020) list_recal_vselct_arw_lo_pane

0xb5ce,	// (0x0004e028) list_recal_vselct_arw_up_pane

0xafb0,	// (0x0004da0a) list_recal_vselct_pane

0x9d5b,	// (0x0004c7b5) btmg_button_pane

0x9d65,	// (0x0004c7bf) main_btmg_pane_g1

0xa5bf,	// (0x0004d019) bg_button_pane_cp044

0xb838,	// (0x0004e292) btmg_button_pane_t1

0xe297,	// (0x00050cf1) aid_listscroll_gen

0xdcdd,	// (0x00050737) main_cntbar_detail_pane

0x97f9,	// (0x0004c253) list_cmail_folder_pane

0x9813,	// (0x0004c26d) sp_fs_scroll_pane_cp03_ParamLimits

0x13e6,	// (0x00043e40) list_single_fs_dyc_pane_cp01_ParamLimits

0x13e6,	// (0x00043e40) list_single_fs_dyc_pane_cp01

0xb846,	// (0x0004e2a0) aid_size_cmail_indent

0xb84f,	// (0x0004e2a9) list_single_dyc_row_pane_cp01

0x9d9b,	// (0x0004c7f5) cntbar_detail_list_pane_ParamLimits

0x9d9b,	// (0x0004c7f5) cntbar_detail_list_pane

0x9de7,	// (0x0004c841) main_cntbar_detail_cont_pane_ParamLimits

0x9de7,	// (0x0004c841) main_cntbar_detail_cont_pane

0x31d9,	// (0x00045c33) scroll_pane_cp032_ParamLimits

0x31d9,	// (0x00045c33) scroll_pane_cp032

0x9dfb,	// (0x0004c855) cntbar_detail_list_event_pane_ParamLimits

0x9dfb,	// (0x0004c855) cntbar_detail_list_event_pane

0x9dab,	// (0x0004c805) cntbar_detail_list_shct_pane

0xc7fc,	// (0x0004f256) aid_list_gen

0xb858,	// (0x0004e2b2) aid_scroll

0xb861,	// (0x0004e2bb) aid_size_touch_scroll_bar

0x9e0b,	// (0x0004c865) aid_list_double

0xb86a,	// (0x0004e2c4) aid_list_single

0x13fc,	// (0x00043e56) aid_list_single_lg

0xb873,	// (0x0004e2cd) aid_list_z_g_a_sm

0xb87b,	// (0x0004e2d5) aid_list_z_g_d

0xb883,	// (0x0004e2dd) aid_txt_z_prm

0x1405,	// (0x00043e5f) aid_txt_z_prm_cp01

0x1413,	// (0x00043e6d) aid_txt_z_sec

0x9e14,	// (0x0004c86e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9e14,	// (0x0004c86e) main_cntbar_detail_cont_pane_g1

0x9e28,	// (0x0004c882) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9e28,	// (0x0004c882) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd51,	// (0x000527ab) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd51,	// (0x000527ab) main_cntbar_detail_cont_pane_g

0xb891,	// (0x0004e2eb) main_cntbar_detail_cont_pane_t1

0xb89f,	// (0x0004e2f9) main_cntbar_detail_cont_pane_t2

0xb8ad,	// (0x0004e307) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd56,	// (0x000527b0) main_cntbar_detail_cont_pane_t

0x9e38,	// (0x0004c892) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9e38,	// (0x0004c892) cell_cntbar_detail_list_shct_pane

0xb8bb,	// (0x0004e315) cntbar_detail_list_shct_pane_g1

0xb8c4,	// (0x0004e31e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd5d,	// (0x000527b7) cntbar_detail_list_shct_pane_g

0x9e4c,	// (0x0004c8a6) cntbar_detail_list_event_pane_g1_ParamLimits

0x9e4c,	// (0x0004c8a6) cntbar_detail_list_event_pane_g1

0x9e58,	// (0x0004c8b2) cntbar_detail_list_event_pane_g2_ParamLimits

0x9e58,	// (0x0004c8b2) cntbar_detail_list_event_pane_g2

0x0005,

0xfd62,	// (0x000527bc) cntbar_detail_list_event_pane_g_ParamLimits

0xfd62,	// (0x000527bc) cntbar_detail_list_event_pane_g

0x9ec4,	// (0x0004c91e) cntbar_detail_list_event_pane_t1_ParamLimits

0x9ec4,	// (0x0004c91e) cntbar_detail_list_event_pane_t1

0x9ed9,	// (0x0004c933) cntbar_detail_list_event_pane_t2_ParamLimits

0x9ed9,	// (0x0004c933) cntbar_detail_list_event_pane_t2

0x0002,

0xfd6f,	// (0x000527c9) cntbar_detail_list_event_pane_t_ParamLimits

0xfd6f,	// (0x000527c9) cntbar_detail_list_event_pane_t

0xe6b8,	// (0x00051112) cell_cntbar_detail_list_shct_pane_g1

0x355d,	// (0x00045fb7) navi_pane_mv_g3

0xdcdd,	// (0x00050737) main_cntbar_detail_pane_ParamLimits

0xa5bf,	// (0x0004d019) main_notif_wgt_pane

0xaa9c,	// (0x0004d4f6) aid_tch_main_mp4_pane_g4

0xac7e,	// (0x0004d6d8) popup_slider_window_cp02

0xb5bc,	// (0x0004e016) list_recal_day_event_pane

0x9d6f,	// (0x0004c7c9) cntbar_detail_btn_pane_ParamLimits

0x9d6f,	// (0x0004c7c9) cntbar_detail_btn_pane

0x9d85,	// (0x0004c7df) cntbar_detail_btn_pane_cp01_ParamLimits

0x9d85,	// (0x0004c7df) cntbar_detail_btn_pane_cp01

0x9dab,	// (0x0004c805) cntbar_detail_list_shct_pane_ParamLimits

0x9dbb,	// (0x0004c815) cntbar_detail_pane_g1_ParamLimits

0x9dbb,	// (0x0004c815) cntbar_detail_pane_g1

0x9dcb,	// (0x0004c825) cntbar_detail_pane_t1_ParamLimits

0x9dcb,	// (0x0004c825) cntbar_detail_pane_t1

0x9e64,	// (0x0004c8be) cntbar_detail_list_event_pane_g3_ParamLimits

0x9e64,	// (0x0004c8be) cntbar_detail_list_event_pane_g3

0x9e7c,	// (0x0004c8d6) cntbar_detail_list_event_pane_g4_ParamLimits

0x9e7c,	// (0x0004c8d6) cntbar_detail_list_event_pane_g4

0x9e94,	// (0x0004c8ee) cntbar_detail_list_event_pane_g5_ParamLimits

0x9e94,	// (0x0004c8ee) cntbar_detail_list_event_pane_g5

0x9eac,	// (0x0004c906) cntbar_detail_list_event_pane_g6_ParamLimits

0x9eac,	// (0x0004c906) cntbar_detail_list_event_pane_g6

0x9eee,	// (0x0004c948) cntbar_detail_list_event_pane_t3_ParamLimits

0x9eee,	// (0x0004c948) cntbar_detail_list_event_pane_t3

0x9f00,	// (0x0004c95a) popup_notif_wgt_window_ParamLimits

0x9f00,	// (0x0004c95a) popup_notif_wgt_window

0x9f19,	// (0x0004c973) popup_submenu_window_cp01_ParamLimits

0x9f19,	// (0x0004c973) popup_submenu_window_cp01

0xce8b,	// (0x0004f8e5) bg_popup_window_pane_cp10

0xb8cd,	// (0x0004e327) listscroll_notif_wgt_pane

0xb8de,	// (0x0004e338) list_notif_wgt_window

0xb8e7,	// (0x0004e341) scroll_pane_cp033

0x9c9c,	// (0x0004c6f6) list_notif_wgt_row_pane_ParamLimits

0x9c9c,	// (0x0004c6f6) list_notif_wgt_row_pane

0xb8f0,	// (0x0004e34a) aid_size_list_notif_wgt_del

0xb8fd,	// (0x0004e357) list_notif_wgt_row_pane_g1

0xb909,	// (0x0004e363) list_notif_wgt_row_pane_g2

0xb915,	// (0x0004e36f) list_notif_wgt_row_pane_g3

0x0002,

0xfd76,	// (0x000527d0) list_notif_wgt_row_pane_g

0xb922,	// (0x0004e37c) list_notif_wgt_row_pane_t1

0xb937,	// (0x0004e391) list_notif_wgt_row_pane_t2

0xb949,	// (0x0004e3a3) list_notif_wgt_row_pane_t3

0x0002,

0xfd7d,	// (0x000527d7) list_notif_wgt_row_pane_t

0x74bc,	// (0x00049f16) list_recal_day_event_pane_g1

0xb95b,	// (0x0004e3b5) list_recal_day_event_pane_t1

0xa5bf,	// (0x0004d019) bg_button_pane_cp045

0xb96a,	// (0x0004e3c4) cntbar_detail_btn_pane_t1

0xe29f,	// (0x00050cf9) main_callh_pane_ParamLimits

0xe29f,	// (0x00050cf9) main_callh_pane

0xa5bf,	// (0x0004d019) main_coverflow0_pane

0xa5bf,	// (0x0004d019) main_wgtman_pane

0x8fb2,	// (0x0004ba0c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8fb2,	// (0x0004ba0c) main_fs_bigclock_unlock_btn_pane

0x9792,	// (0x0004c1ec) bg_button_pane_cp16

0x97a2,	// (0x0004c1fc) cell_tport_appsw_pane_g3

0x9f2b,	// (0x0004c985) cf0_flow_pane_ParamLimits

0x9f2b,	// (0x0004c985) cf0_flow_pane

0xb978,	// (0x0004e3d2) listscroll_cf0_pane

0xb983,	// (0x0004e3dd) main_cf0_pane_g1

0x9f40,	// (0x0004c99a) main_cf0_pane_t1_ParamLimits

0x9f40,	// (0x0004c99a) main_cf0_pane_t1

0x9f57,	// (0x0004c9b1) main_cf0_pane_t2_ParamLimits

0x9f57,	// (0x0004c9b1) main_cf0_pane_t2

0x0001,

0xfd84,	// (0x000527de) main_cf0_pane_t_ParamLimits

0xfd84,	// (0x000527de) main_cf0_pane_t

0xb98d,	// (0x0004e3e7) scroll_pane_cp11

0x9f6e,	// (0x0004c9c8) cf0_flow_pane_g1

0x9f76,	// (0x0004c9d0) cf0_flow_pane_g2

0x0001,

0xfd89,	// (0x000527e3) cf0_flow_pane_g

0x9f7e,	// (0x0004c9d8) cf0_flow_pane_t1

0xa5bf,	// (0x0004d019) main_call6_pane

0xa5bf,	// (0x0004d019) main_calllock_pane

0x9f8c,	// (0x0004c9e6) call6_btn_grp_pane_ParamLimits

0x9f8c,	// (0x0004c9e6) call6_btn_grp_pane

0x9fa6,	// (0x0004ca00) call6_pane_g1_ParamLimits

0x9fa6,	// (0x0004ca00) call6_pane_g1

0x9fbb,	// (0x0004ca15) popup_call6_1st_window_ParamLimits

0x9fbb,	// (0x0004ca15) popup_call6_1st_window

0x9fcc,	// (0x0004ca26) popup_call6_2nd_window_ParamLimits

0x9fcc,	// (0x0004ca26) popup_call6_2nd_window

0x9fdd,	// (0x0004ca37) cell_call6_btn_pane_ParamLimits

0x9fdd,	// (0x0004ca37) cell_call6_btn_pane

0xce8b,	// (0x0004f8e5) bg_popup_call2_in_pane_cp03

0xb998,	// (0x0004e3f2) popup_call6_1st_window_g1

0xb9a0,	// (0x0004e3fa) popup_call6_1st_window_g2

0xb9a8,	// (0x0004e402) popup_call6_1st_window_g3

0x0002,

0xfd8e,	// (0x000527e8) popup_call6_1st_window_g

0xb9b0,	// (0x0004e40a) popup_call6_1st_window_t1

0xb9bf,	// (0x0004e419) popup_call6_1st_window_t2

0xb9cf,	// (0x0004e429) popup_call6_1st_window_t3

0x0002,

0xfd95,	// (0x000527ef) popup_call6_1st_window_t

0xce8b,	// (0x0004f8e5) bg_popup_call2_in_pane_cp04

0xb998,	// (0x0004e3f2) popup_call6_2nd_window_g1

0xb9a0,	// (0x0004e3fa) popup_call6_2nd_window_g2

0xb9a8,	// (0x0004e402) popup_call6_2nd_window_g3

0x0002,

0xfd8e,	// (0x000527e8) popup_call6_2nd_window_g

0xb9b0,	// (0x0004e40a) popup_call6_2nd_window_t1

0xa5bf,	// (0x0004d019) bg_button_pane_cp15

0xb9df,	// (0x0004e439) cell_call6_btn_pane_g1

0xb9e8,	// (0x0004e442) cell_call6_btn_pane_t1

0x9ff1,	// (0x0004ca4b) listscroll_wgtman_pane_ParamLimits

0x9ff1,	// (0x0004ca4b) listscroll_wgtman_pane

0xa014,	// (0x0004ca6e) wgtman_btn_pane_ParamLimits

0xa014,	// (0x0004ca6e) wgtman_btn_pane

0xcd42,	// (0x0004f79c) aid_scroll_copy1

0xb9f7,	// (0x0004e451) list_wgtman_pane

0xa057,	// (0x0004cab1) wgtman_btn_pane_g1_ParamLimits

0xa057,	// (0x0004cab1) wgtman_btn_pane_g1

0xa083,	// (0x0004cadd) wgtman_btn_pane_t1_ParamLimits

0xa083,	// (0x0004cadd) wgtman_btn_pane_t1

0xba01,	// (0x0004e45b) wgtman_btn_pane_t2_ParamLimits

0xba01,	// (0x0004e45b) wgtman_btn_pane_t2

0x0001,

0xfd9c,	// (0x000527f6) wgtman_btn_pane_t_ParamLimits

0xfd9c,	// (0x000527f6) wgtman_btn_pane_t

0xa0c0,	// (0x0004cb1a) listrow_wgtman_pane_ParamLimits

0xa0c0,	// (0x0004cb1a) listrow_wgtman_pane

0xa0d2,	// (0x0004cb2c) listrow_wgtman_pane_g1

0xa0df,	// (0x0004cb39) listrow_wgtman_pane_g2

0x0001,

0xfda1,	// (0x000527fb) listrow_wgtman_pane_g

0x1421,	// (0x00043e7b) listrow_wgtman_pane_t1

0x1439,	// (0x00043e93) listrow_wgtman_pane_t2

0x0001,

0xfda6,	// (0x00052800) listrow_wgtman_pane_t

0x145f,	// (0x00043eb9) wait_bar_pane_cp09

0xba18,	// (0x0004e472) main_calllock_btn_pane

0xba22,	// (0x0004e47c) main_calllock_pane_g1

0xa5bf,	// (0x0004d019) bg_button_pane_cp17

0xba2e,	// (0x0004e488) main_calllock_btn_pane_g1

0xba37,	// (0x0004e491) main_calllock_btn_pane_t1

0xa5bf,	// (0x0004d019) main_dialer3_pane

0xa5bf,	// (0x0004d019) main_fmrd2_pane

0xe6b8,	// (0x00051112) main_fs_bigclock_unlock_btn_pane_g1

0xba4e,	// (0x0004e4a8) main_fs_bigclock_unlock_btn_pane_t1

0xa0fd,	// (0x0004cb57) area_fmrd2_info_pane_ParamLimits

0xa0fd,	// (0x0004cb57) area_fmrd2_info_pane

0xa10e,	// (0x0004cb68) area_fmrd2_visual_pane_ParamLimits

0xa10e,	// (0x0004cb68) area_fmrd2_visual_pane

0xa11c,	// (0x0004cb76) fmrd2_indi_pane_ParamLimits

0xa11c,	// (0x0004cb76) fmrd2_indi_pane

0xa129,	// (0x0004cb83) area_fmrd2_visual_pane_g1

0xa131,	// (0x0004cb8b) area_fmrd2_visual_pane_t1

0xa141,	// (0x0004cb9b) area_fmrd2_visual_pane_t2

0xa151,	// (0x0004cbab) area_fmrd2_visual_pane_t3

0x0002,

0xfdb0,	// (0x0005280a) area_fmrd2_visual_pane_t

0xa161,	// (0x0004cbbb) area_fmrd2_info_pane_g1

0xa169,	// (0x0004cbc3) area_fmrd2_info_pane_t1

0xa179,	// (0x0004cbd3) area_fmrd2_info_pane_t2

0xa189,	// (0x0004cbe3) area_fmrd2_info_pane_t3

0xa199,	// (0x0004cbf3) area_fmrd2_info_pane_t4

0x0003,

0xfdb7,	// (0x00052811) area_fmrd2_info_pane_t

0xa1a7,	// (0x0004cc01) fmrd2_indi_pane_t1

0xa1b7,	// (0x0004cc11) fmrd2_indi_pane_t2

0xa1c7,	// (0x0004cc21) fmrd2_indi_pane_t3

0x0002,

0xfdc0,	// (0x0005281a) fmrd2_indi_pane_t

0x9031,	// (0x0004ba8b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9031,	// (0x0004ba8b) list_single_fs_bigclock_indicator_pane_g5

0x90d8,	// (0x0004bb32) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x90d8,	// (0x0004bb32) list_single_fs_bigclock_indicator_pane_t5

0x9a2a,	// (0x0004c484) aid_cell_bcale_month_pane_ParamLimits

0x9a2a,	// (0x0004c484) aid_cell_bcale_month_pane

0x9a42,	// (0x0004c49c) bcale_month_pane_ParamLimits

0x9a42,	// (0x0004c49c) bcale_month_pane

0x9a59,	// (0x0004c4b3) bcale_preview_pane_ParamLimits

0x9a59,	// (0x0004c4b3) bcale_preview_pane

0xb7d0,	// (0x0004e22a) list_single_fs_bigclock_pane_t1_ParamLimits

0xb7ef,	// (0x0004e249) list_single_fs_bigclock_pane_t2_ParamLimits

0xb7ef,	// (0x0004e249) list_single_fs_bigclock_pane_t2

0x0001,

0xfd47,	// (0x000527a1) list_single_fs_bigclock_pane_t_ParamLimits

0xfd47,	// (0x000527a1) list_single_fs_bigclock_pane_t

0xba46,	// (0x0004e4a0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdab,	// (0x00052805) main_fs_bigclock_unlock_btn_pane_g

0xa1d7,	// (0x0004cc31) aid_dia3_key_size_ParamLimits

0xa1d7,	// (0x0004cc31) aid_dia3_key_size

0xa1e6,	// (0x0004cc40) aid_dia3_listrow_size_ParamLimits

0xa1e6,	// (0x0004cc40) aid_dia3_listrow_size

0xa1fb,	// (0x0004cc55) dia3_keypad_fun_pane_ParamLimits

0xa1fb,	// (0x0004cc55) dia3_keypad_fun_pane

0xa217,	// (0x0004cc71) dia3_keypad_num_pane_ParamLimits

0xa217,	// (0x0004cc71) dia3_keypad_num_pane

0xa232,	// (0x0004cc8c) dia3_listscroll_pane_ParamLimits

0xa232,	// (0x0004cc8c) dia3_listscroll_pane

0xa245,	// (0x0004cc9f) dia3_numentry_pane_ParamLimits

0xa245,	// (0x0004cc9f) dia3_numentry_pane

0xba5c,	// (0x0004e4b6) dia3_list_pane

0xba67,	// (0x0004e4c1) scroll_pane_cp12

0xa5bf,	// (0x0004d019) bg_dia3_numentry_pane

0xa259,	// (0x0004ccb3) dia3_numentry_pane_t1

0xa268,	// (0x0004ccc2) cell_dia3_key_num_pane

0xa270,	// (0x0004ccca) cell_dia3_key0_fun_pane_ParamLimits

0xa270,	// (0x0004ccca) cell_dia3_key0_fun_pane

0xa284,	// (0x0004ccde) cell_dia3_key1_fun_pane_ParamLimits

0xa284,	// (0x0004ccde) cell_dia3_key1_fun_pane

0xa29c,	// (0x0004ccf6) dia3_listrow_pane

0x8a45,	// (0x0004b49f) bg_dia3_numentry_pane_g1

0xa5bf,	// (0x0004d019) bg_button_pane_cp21

0xba72,	// (0x0004e4cc) cell_dia3_key_num_pane_t1

0xba80,	// (0x0004e4da) cell_dia3_key_num_pane_t2

0xba8f,	// (0x0004e4e9) cell_dia3_key_num_pane_t3

0xba9e,	// (0x0004e4f8) cell_dia3_key_num_pane_t4

0x0003,

0xfdc7,	// (0x00052821) cell_dia3_key_num_pane_t

0xa5bf,	// (0x0004d019) bg_button_pane_cp19

0xa2ae,	// (0x0004cd08) cell_dia3_key0_fun_pane_g1

0xa5bf,	// (0x0004d019) bg_button_pane_cp20

0xa2b6,	// (0x0004cd10) cell_dia3_key1_fun_pane_g1

0xa2be,	// (0x0004cd18) area_left_week_number_pane

0xa2c8,	// (0x0004cd22) area_top_day_name_pane

0xa2d4,	// (0x0004cd2e) frame_month_view_pane

0xa2de,	// (0x0004cd38) grid_month_view_pane

0xbaad,	// (0x0004e507) cell_top_day_name_pane_ParamLimits

0xbaad,	// (0x0004e507) cell_top_day_name_pane

0xa2e8,	// (0x0004cd42) cell_area_left_week_number_pane_ParamLimits

0xa2e8,	// (0x0004cd42) cell_area_left_week_number_pane

0xa2fc,	// (0x0004cd56) cell_month_view_pane_ParamLimits

0xa2fc,	// (0x0004cd56) cell_month_view_pane

0xbac7,	// (0x0004e521) frm_month_g1

0xa319,	// (0x0004cd73) frm_month_g2

0xa323,	// (0x0004cd7d) frm_month_g3

0xa32d,	// (0x0004cd87) frm_month_g4

0xa337,	// (0x0004cd91) frm_month_g5

0xa341,	// (0x0004cd9b) frm_month_g6

0xa34b,	// (0x0004cda5) frm_month_g7

0xbad0,	// (0x0004e52a) frm_month_g8

0xbad9,	// (0x0004e533) frm_month_g9

0xbae2,	// (0x0004e53c) frm_month_g10

0xbaeb,	// (0x0004e545) frm_month_g11

0xbaf4,	// (0x0004e54e) frm_month_g12

0xbafd,	// (0x0004e557) frm_month_g13

0xbb06,	// (0x0004e560) frm_month_g14

0xbb11,	// (0x0004e56b) frm_month_g15

0xbb1c,	// (0x0004e576) frm_month_g16

0x000f,

0xfdd0,	// (0x0005282a) frm_month_g

0xa355,	// (0x0004cdaf) cell_top_day_name_pane_t1

0xa364,	// (0x0004cdbe) cell_area_left_week_number_pane_g1

0xa36c,	// (0x0004cdc6) cell_area_left_week_number_pane_t1

0xe6b8,	// (0x00051112) cell_month_view_pane_g1

0xa37b,	// (0x0004cdd5) cell_month_view_pane_t1

0xa5bf,	// (0x0004d019) main_fps_pane

0x959e,	// (0x0004bff8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x959e,	// (0x0004bff8) cmail_ddmenu_btn02_pane_cp1

0x95ba,	// (0x0004c014) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x95ba,	// (0x0004c014) cmail_ddmenu_btn02_pane_cp2

0x9c49,	// (0x0004c6a3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9c49,	// (0x0004c6a3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcfa,	// (0x00052754) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcfa,	// (0x00052754) cmail_ddmenu_btn02_pane_g

0x9c6a,	// (0x0004c6c4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9c6a,	// (0x0004c6c4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcff,	// (0x00052759) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcff,	// (0x00052759) cmail_ddmenu_btn02_pane_t

0xa38a,	// (0x0004cde4) fps_text_pane_ParamLimits

0xa38a,	// (0x0004cde4) fps_text_pane

0xa3a1,	// (0x0004cdfb) main_fps_pane_g1_ParamLimits

0xa3a1,	// (0x0004cdfb) main_fps_pane_g1

0xa3bb,	// (0x0004ce15) wait_bar_pane_cp010_ParamLimits

0xa3bb,	// (0x0004ce15) wait_bar_pane_cp010

0xa3cc,	// (0x0004ce26) fps_text_pane_t1_ParamLimits

0xa3cc,	// (0x0004ce26) fps_text_pane_t1

0xf0bc,	// (0x00051b16) cam4_image_uncrop_pane_g1

0xf0c5,	// (0x00051b1f) cam4_image_uncrop_pane_g2

0x66e7,	// (0x00049141) cam4_image_uncrop_pane_g3

0x66f0,	// (0x0004914a) cam4_image_uncrop_pane_g4

0x0003,

0xf7c8,	// (0x00052222) cam4_image_uncrop_pane_g

0xa29c,	// (0x0004ccf6) dia3_listrow_pane_ParamLimits

0xa5bf,	// (0x0004d019) main_phob2_pane

0x973a,	// (0x0004c194) cell_tport_appsw_pane_cp02_ParamLimits

0x973a,	// (0x0004c194) cell_tport_appsw_pane_cp02

0x974e,	// (0x0004c1a8) cell_tport_appsw_pane_cp03_ParamLimits

0x974e,	// (0x0004c1a8) cell_tport_appsw_pane_cp03

0xa5bf,	// (0x0004d019) phob2_contact_card_pane

0xa5bf,	// (0x0004d019) phob2_listscroll_pane

0xbb27,	// (0x0004e581) phob2_list_pane

0xbb2f,	// (0x0004e589) scroll_pane_cp034

0xa3e4,	// (0x0004ce3e) phob2_cc_data_pane_ParamLimits

0xa3e4,	// (0x0004ce3e) phob2_cc_data_pane

0xa403,	// (0x0004ce5d) phob2_cc_listscroll_pane_ParamLimits

0xa403,	// (0x0004ce5d) phob2_cc_listscroll_pane

0xa421,	// (0x0004ce7b) list_double_large_graphic_phob2_pane_ParamLimits

0xa421,	// (0x0004ce7b) list_double_large_graphic_phob2_pane

0xa433,	// (0x0004ce8d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa433,	// (0x0004ce8d) list_double_large_graphic_phob2_pane_g1

0x1471,	// (0x00043ecb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1471,	// (0x00043ecb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfdf1,	// (0x0005284b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf1,	// (0x0005284b) list_double_large_graphic_phob2_pane_g

0x147d,	// (0x00043ed7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x147d,	// (0x00043ed7) list_double_large_graphic_phob2_pane_t1

0x1492,	// (0x00043eec) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1492,	// (0x00043eec) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdf6,	// (0x00052850) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdf6,	// (0x00052850) list_double_large_graphic_phob2_pane_t

0xa5bf,	// (0x0004d019) list_highlight_pane_cp024

0xbb37,	// (0x0004e591) phob2_cc_button_pane

0xa440,	// (0x0004ce9a) phob2_cc_data_pane_g1_ParamLimits

0xa440,	// (0x0004ce9a) phob2_cc_data_pane_g1

0xa455,	// (0x0004ceaf) phob2_cc_data_pane_g2_ParamLimits

0xa455,	// (0x0004ceaf) phob2_cc_data_pane_g2

0x0001,

0xfdfb,	// (0x00052855) phob2_cc_data_pane_g_ParamLimits

0xfdfb,	// (0x00052855) phob2_cc_data_pane_g

0xa467,	// (0x0004cec1) phob2_cc_data_pane_t1_ParamLimits

0xa467,	// (0x0004cec1) phob2_cc_data_pane_t1

0xa47f,	// (0x0004ced9) phob2_cc_data_pane_t2_ParamLimits

0xa47f,	// (0x0004ced9) phob2_cc_data_pane_t2

0xa497,	// (0x0004cef1) phob2_cc_data_pane_t3_ParamLimits

0xa497,	// (0x0004cef1) phob2_cc_data_pane_t3

0x0002,

0xfe00,	// (0x0005285a) phob2_cc_data_pane_t_ParamLimits

0xfe00,	// (0x0005285a) phob2_cc_data_pane_t

0xbb3f,	// (0x0004e599) phob2_cc_list_pane_ParamLimits

0xbb3f,	// (0x0004e599) phob2_cc_list_pane

0x7721,	// (0x0004a17b) scroll_pane_cp035_ParamLimits

0x7721,	// (0x0004a17b) scroll_pane_cp035

0xdcdd,	// (0x00050737) bg_button_pane_cp033

0xbb4b,	// (0x0004e5a5) phob2_cc_button_pane_g1

0xbb57,	// (0x0004e5b1) phob2_cc_button_pane_t1

0xbb6c,	// (0x0004e5c6) phob2_cc_button_pane_t2

0x0001,

0xfe07,	// (0x00052861) phob2_cc_button_pane_t

0xa4af,	// (0x0004cf09) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa4af,	// (0x0004cf09) list_double_large_graphic_phob2_cc_pane

0xa4c1,	// (0x0004cf1b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa4c1,	// (0x0004cf1b) list_double_large_graphic_phob2_cc_pane_g1

0x14a4,	// (0x00043efe) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x14a4,	// (0x00043efe) list_double_large_graphic_phob2_cc_pane_g2

0x14b0,	// (0x00043f0a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x14b0,	// (0x00043f0a) list_double_large_graphic_phob2_cc_pane_g3

0x14bc,	// (0x00043f16) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x14bc,	// (0x00043f16) list_double_large_graphic_phob2_cc_pane_g4

0x14c8,	// (0x00043f22) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x14c8,	// (0x00043f22) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe0c,	// (0x00052866) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe0c,	// (0x00052866) list_double_large_graphic_phob2_cc_pane_g

0x14d4,	// (0x00043f2e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x14d4,	// (0x00043f2e) list_double_large_graphic_phob2_cc_pane_t1

0x14fd,	// (0x00043f57) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x14fd,	// (0x00043f57) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe17,	// (0x00052871) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe17,	// (0x00052871) list_double_large_graphic_phob2_cc_pane_t

0xbb7e,	// (0x0004e5d8) list_highlight_pane_cp025_ParamLimits

0xbb7e,	// (0x0004e5d8) list_highlight_pane_cp025

0xdcdd,	// (0x00050737) bg_button_pane_cp033_ParamLimits

0xbb4b,	// (0x0004e5a5) phob2_cc_button_pane_g1_ParamLimits

0xbb57,	// (0x0004e5b1) phob2_cc_button_pane_t1_ParamLimits

0xbb6c,	// (0x0004e5c6) phob2_cc_button_pane_t2_ParamLimits

0xfe07,	// (0x00052861) phob2_cc_button_pane_t_ParamLimits

0x1740,	// (0x0004419a) popup_wgtman_window

0x6ef9,	// (0x00049953) scroll_pane_cp038

0xa039,	// (0x0004ca93) wgtman_btn_pane_cp_01_ParamLimits

0xa039,	// (0x0004ca93) wgtman_btn_pane_cp_01

0xbb8c,	// (0x0004e5e6) wgtman_content_pane

0xbb95,	// (0x0004e5ef) wgtman_heading_pane

0xa5bf,	// (0x0004d019) bg_heading_pane_cp02

0xbb9e,	// (0x0004e5f8) wgtman_heading_pane_g1

0xbba6,	// (0x0004e600) wgtman_heading_pane_t1

0xbbb4,	// (0x0004e60e) scroll_pane_cp036

0xbbbc,	// (0x0004e616) wgtman_list_pane

0xbbc4,	// (0x0004e61e) wgtman_list_pane_t1_ParamLimits

0xbbc4,	// (0x0004e61e) wgtman_list_pane_t1

0xacd8,	// (0x0004d732) cam4_grid_pane

0x0cfa,	// (0x00043754) bg_button_pane_cp015_ParamLimits

0x75b6,	// (0x0004a010) bg_button_pane_cp016_ParamLimits

0x75c9,	// (0x0004a023) bg_button_pane_cp017_ParamLimits

0x0d40,	// (0x0004379a) popup_vitu2_query_window_g3_ParamLimits

0x0d40,	// (0x0004379a) popup_vitu2_query_window_g3

0x0dbb,	// (0x00043815) popup_vitu2_query_window_t6_ParamLimits

0x0dbb,	// (0x00043815) popup_vitu2_query_window_t6

0x0de6,	// (0x00043840) popup_vitu2_query_window_t7_ParamLimits

0x0de6,	// (0x00043840) popup_vitu2_query_window_t7

0xf0bc,	// (0x00051b16) cam4_grid_pane_g1

0xf0c5,	// (0x00051b1f) cam4_grid_pane_g2

0xbbde,	// (0x0004e638) cam4_grid_pane_g3

0xbbe7,	// (0x0004e641) cam4_grid_pane_g4

0x0003,

0xfe1c,	// (0x00052876) cam4_grid_pane_g

0x246d,	// (0x00044ec7) aid_placing_vt_slider_lsc_ParamLimits

0x2778,	// (0x000451d2) vidtel_button_pane_ParamLimits

0x2778,	// (0x000451d2) vidtel_button_pane

0xbbf2,	// (0x0004e64c) bg_button_pane_cp034

0xa4cd,	// (0x0004cf27) vidtel_button_pane_g1

0xbbfc,	// (0x0004e656) vidtel_button_pane_t1

0x72d8,	// (0x00049d32) aid_size_vtel_slider_touch

0x7721,	// (0x0004a17b) scroll_pane_cp039

0x8ab4,	// (0x0004b50e) ncim_query_button_pane_cp01_ParamLimits

0x8ad3,	// (0x0004b52d) ncimui_query_pane_g1_ParamLimits

0xdcdd,	// (0x00050737) input_focus_pane_cp012_ParamLimits

0x8af8,	// (0x0004b552) ncim_query_entry_pane_t1_ParamLimits

0x7721,	// (0x0004a17b) scroll_pane_cp039_ParamLimits

0x34d1,	// (0x00045f2b) navi_pane_bcale_mc_g1

0x34d9,	// (0x00045f33) navi_pane_bcale_mc_t1

0x962c,	// (0x0004c086) main_sp_fs_email_pane_g1

0x9634,	// (0x0004c08e) main_sp_fs_email_pane_g2

0x0001,

0xfbb8,	// (0x00052612) main_sp_fs_email_pane_g

0xb46a,	// (0x0004dec4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb46a,	// (0x0004dec4) list_single_cale_mrui_row_pane_g3

0x9c92,	// (0x0004c6ec) list_single_recal_day_pane_g5_event_pane

0xb62f,	// (0x0004e089) list_single_recal_day_pane_g7

0xbc0a,	// (0x0004e664) list_recal_day_event_pane_cp01

0xbc13,	// (0x0004e66d) list_recal_vselct_arw_lo_pane_cp01

0xbc1b,	// (0x0004e675) list_recal_vselct_arw_up_pane_cp01

0xbc23,	// (0x0004e67d) list_recal_vselct_pane_cp01

0x74bc,	// (0x00049f16) list_recal_day_event_pane_cp01_g1

0xbc2d,	// (0x0004e687) list_recal_day_event_pane_cp01_t1

0xb637,	// (0x0004e091) list_single_recal_day_pane_t1_ParamLimits

0xb649,	// (0x0004e0a3) list_single_recal_day_pane_t2_ParamLimits

0xfd0f,	// (0x00052769) list_single_recal_day_pane_t_ParamLimits

0xc388,	// (0x0004ede2) bg_notes_pane_ParamLimits

0xc396,	// (0x0004edf0) list_notes_pane_ParamLimits

0x1a89,	// (0x000444e3) scroll_pane_cp06_ParamLimits

0xc3b8,	// (0x0004ee12) main_notes_pane_ParamLimits

0xa5bf,	// (0x0004d019) main_welc_pane

0xa4d5,	// (0x0004cf2f) main_welc_body_pane_ParamLimits

0xa4d5,	// (0x0004cf2f) main_welc_body_pane

0xa4f3,	// (0x0004cf4d) main_welc_opti_pane_ParamLimits

0xa4f3,	// (0x0004cf4d) main_welc_opti_pane

0xa538,	// (0x0004cf92) main_welc_pane_t1_ParamLimits

0xa538,	// (0x0004cf92) main_welc_pane_t1

0xa556,	// (0x0004cfb0) main_welc_body_row_pane_ParamLimits

0xa556,	// (0x0004cfb0) main_welc_body_row_pane

0xa56a,	// (0x0004cfc4) main_welc_opti_row_pane_ParamLimits

0xa56a,	// (0x0004cfc4) main_welc_opti_row_pane

0xbc3b,	// (0x0004e695) main_welc_opti_row_pane_g1

0xbc43,	// (0x0004e69d) main_welc_opti_row_pane_t1

0xbc52,	// (0x0004e6ac) main_welc_body_row_pane_t1

0xb8d6,	// (0x0004e330) popup_notif_wgt_heading_pane

0xb8f0,	// (0x0004e34a) aid_size_list_notif_wgt_del_ParamLimits

0xb8fd,	// (0x0004e357) list_notif_wgt_row_pane_g1_ParamLimits

0xb909,	// (0x0004e363) list_notif_wgt_row_pane_g2_ParamLimits

0xb915,	// (0x0004e36f) list_notif_wgt_row_pane_g3_ParamLimits

0xfd76,	// (0x000527d0) list_notif_wgt_row_pane_g_ParamLimits

0xb922,	// (0x0004e37c) list_notif_wgt_row_pane_t1_ParamLimits

0xb937,	// (0x0004e391) list_notif_wgt_row_pane_t2_ParamLimits

0xb949,	// (0x0004e3a3) list_notif_wgt_row_pane_t3_ParamLimits

0xfd7d,	// (0x000527d7) list_notif_wgt_row_pane_t_ParamLimits

0xa0d2,	// (0x0004cb2c) listrow_wgtman_pane_g1_ParamLimits

0xa0df,	// (0x0004cb39) listrow_wgtman_pane_g2_ParamLimits

0xfda1,	// (0x000527fb) listrow_wgtman_pane_g_ParamLimits

0x1421,	// (0x00043e7b) listrow_wgtman_pane_t1_ParamLimits

0x1439,	// (0x00043e93) listrow_wgtman_pane_t2_ParamLimits

0xfda6,	// (0x00052800) listrow_wgtman_pane_t_ParamLimits

0x145f,	// (0x00043eb9) wait_bar_pane_cp09_ParamLimits

0xa5bf,	// (0x0004d019) bg_popup_heading_pane_cp02

0xbc61,	// (0x0004e6bb) popup_notif_wgt_heading_pane_g1

0xbc69,	// (0x0004e6c3) popup_notif_wgt_heading_pane_t1

0xa5bf,	// (0x0004d019) main_vids_pane

0xa5bf,	// (0x0004d019) vids_listscroll_pane

0xa57a,	// (0x0004cfd4) scroll_pane_cp040

0xa5bf,	// (0x0004d019) vids_list_pane

0xa585,	// (0x0004cfdf) vids_list_double_pane_ParamLimits

0xa585,	// (0x0004cfdf) vids_list_double_pane

0xa596,	// (0x0004cff0) vids_list_double_pane_g1

0xa59f,	// (0x0004cff9) vids_list_double_pane_t1

0xa5af,	// (0x0004d009) vids_list_double_pane_t2

0x0001,

0xfe2a,	// (0x00052884) vids_list_double_pane_t

0xdcdd,	// (0x00050737) main_ncimui_pane_ParamLimits

0x87de,	// (0x0004b238) main_ncimui_pane_g1_ParamLimits

0x87ea,	// (0x0004b244) main_ncimui_pane_g2_ParamLimits

0x87ea,	// (0x0004b244) main_ncimui_pane_g2

0x0001,

0xfabd,	// (0x00052517) main_ncimui_pane_g_ParamLimits

0xfabd,	// (0x00052517) main_ncimui_pane_g

0xa50e,	// (0x0004cf68) main_welc_pane_g1_ParamLimits

0xa50e,	// (0x0004cf68) main_welc_pane_g1

0xa523,	// (0x0004cf7d) main_welc_pane_g2_ParamLimits

0xa523,	// (0x0004cf7d) main_welc_pane_g2

0x0001,

0xfe25,	// (0x0005287f) main_welc_pane_g_ParamLimits

0xfe25,	// (0x0005287f) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small

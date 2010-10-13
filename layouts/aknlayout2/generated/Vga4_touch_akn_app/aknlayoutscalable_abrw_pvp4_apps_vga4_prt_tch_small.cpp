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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005494a };

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
0x318b,	// (0x00057ad5) Screen

0x3197,	// (0x00057ae1) application_window

0x31f3,	// (0x00057b3d) area_bottom_pane_ParamLimits

0x31f3,	// (0x00057b3d) area_bottom_pane

0x3251,	// (0x00057b9b) area_top_pane_ParamLimits

0x3251,	// (0x00057b9b) area_top_pane

0x32b5,	// (0x00057bff) call_video_uplink_pane_ParamLimits

0x32b5,	// (0x00057bff) call_video_uplink_pane

0x32f4,	// (0x00057c3e) main_pane_ParamLimits

0x32f4,	// (0x00057c3e) main_pane

0xde99,	// (0x000627e3) context_pane

0x632a,	// (0x0005ac74) navi_pane

0x6353,	// (0x0005ac9d) popup_cale_events_window_ParamLimits

0x6353,	// (0x0005ac9d) popup_cale_events_window

0xdeac,	// (0x000627f6) popup_mup_playback_window

0x636b,	// (0x0005acb5) signal_pane

0xc039,	// (0x00060983) main_browser_pane

0xc1d7,	// (0x00060b21) main_burst_pane

0x617a,	// (0x0005aac4) main_calc_pane

0xde8d,	// (0x000627d7) main_cale_day_pane

0x6187,	// (0x0005aad1) main_cale_month_pane

0xde8d,	// (0x000627d7) main_cale_week_pane

0xc1d7,	// (0x00060b21) main_call_pane

0x1e71,	// (0x000567bb) main_call_poc_pane

0xc1d7,	// (0x00060b21) main_camera_pane

0xc1d7,	// (0x00060b21) main_chi_dic_pane

0xc9aa,	// (0x000612f4) main_clock_pane

0x1e71,	// (0x000567bb) main_fmradio_pane

0xc1d7,	// (0x00060b21) main_graph_messa_pane

0x1e71,	// (0x000567bb) main_help_pane

0xc039,	// (0x00060983) main_im_pane

0x3566,	// (0x00057eb0) main_image_pane_ParamLimits

0x3566,	// (0x00057eb0) main_image_pane

0x1e71,	// (0x000567bb) main_location2_pane

0xc1d7,	// (0x00060b21) main_location_pane

0x3566,	// (0x00057eb0) main_messa_pane

0x1e71,	// (0x000567bb) main_mp2_pane

0xc1d7,	// (0x00060b21) main_mp_pane

0x1e71,	// (0x000567bb) main_msg_pane

0x1e71,	// (0x000567bb) main_mup_eq_pane

0x1e71,	// (0x000567bb) main_mup_pane

0xc039,	// (0x00060983) main_notes_pane

0x1e71,	// (0x000567bb) main_pec_pane

0x1e71,	// (0x000567bb) main_phob_pane

0x1e71,	// (0x000567bb) main_pinb_pane

0x1e71,	// (0x000567bb) main_postcard_pane

0x1e71,	// (0x000567bb) main_qdial_pane

0xc1d7,	// (0x00060b21) main_skin_pane

0x1e71,	// (0x000567bb) main_smil2_pane

0xc1d7,	// (0x00060b21) main_smil_pane

0xc1d7,	// (0x00060b21) main_video_pane

0xc1d7,	// (0x00060b21) main_video_tele_pane

0x3566,	// (0x00057eb0) main_viewer_pane_ParamLimits

0x3566,	// (0x00057eb0) main_viewer_pane

0xc1d7,	// (0x00060b21) main_vorec_pane

0x61da,	// (0x0005ab24) popup_blid_sat_info_window_ParamLimits

0x61da,	// (0x0005ab24) popup_blid_sat_info_window

0x6200,	// (0x0005ab4a) popup_dyc_status_message_window_ParamLimits

0x6200,	// (0x0005ab4a) popup_dyc_status_message_window

0x6210,	// (0x0005ab5a) popup_grid_large_graphic_window_ParamLimits

0x6210,	// (0x0005ab5a) popup_grid_large_graphic_window

0x62a5,	// (0x0005abef) popup_loc_request_window_ParamLimits

0x62a5,	// (0x0005abef) popup_loc_request_window

0x62fe,	// (0x0005ac48) popup_wml_address_window_ParamLimits

0x62fe,	// (0x0005ac48) popup_wml_address_window

0x6052,	// (0x0005a99c) call_muted_g1

0x5d42,	// (0x0005a68c) popup_call_audio_conf_window_ParamLimits

0x5d42,	// (0x0005a68c) popup_call_audio_conf_window

0x6062,	// (0x0005a9ac) popup_call_audio_first_window_ParamLimits

0x6062,	// (0x0005a9ac) popup_call_audio_first_window

0x60a2,	// (0x0005a9ec) popup_call_audio_in_window_ParamLimits

0x60a2,	// (0x0005a9ec) popup_call_audio_in_window

0x60c6,	// (0x0005aa10) popup_call_audio_out_window_ParamLimits

0x60c6,	// (0x0005aa10) popup_call_audio_out_window

0x60e8,	// (0x0005aa32) popup_call_audio_second_window_ParamLimits

0x60e8,	// (0x0005aa32) popup_call_audio_second_window

0x6118,	// (0x0005aa62) popup_call_audio_wait_window_ParamLimits

0x6118,	// (0x0005aa62) popup_call_audio_wait_window

0x6139,	// (0x0005aa83) popup_number_entry_window_ParamLimits

0x6139,	// (0x0005aa83) popup_number_entry_window

0x10bb,	// (0x00055a05) bg_popup_call_pane_cp05_ParamLimits

0x10bb,	// (0x00055a05) bg_popup_call_pane_cp05

0x10db,	// (0x00055a25) popup_number_entry_window_t1

0x10ee,	// (0x00055a38) popup_number_entry_window_t2

0x1100,	// (0x00055a4a) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0006398a) popup_number_entry_window_t

0x1147,	// (0x00055a91) text_title_cp2

0x115a,	// (0x00055aa4) bg_popup_call_pane_cp_ParamLimits

0x115a,	// (0x00055aa4) bg_popup_call_pane_cp

0x1168,	// (0x00055ab2) call_thumbnail_pane

0x1170,	// (0x00055aba) popup_call_audio_in_window_g1_ParamLimits

0x1170,	// (0x00055aba) popup_call_audio_in_window_g1

0x117c,	// (0x00055ac6) popup_call_audio_in_window_g2_ParamLimits

0x117c,	// (0x00055ac6) popup_call_audio_in_window_g2

0x1188,	// (0x00055ad2) popup_call_audio_in_window_g3_ParamLimits

0x1188,	// (0x00055ad2) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00063993) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00063993) popup_call_audio_in_window_g

0x1194,	// (0x00055ade) popup_call_audio_in_window_t1_ParamLimits

0x1194,	// (0x00055ade) popup_call_audio_in_window_t1

0x11b0,	// (0x00055afa) popup_call_audio_in_window_t2_ParamLimits

0x11b0,	// (0x00055afa) popup_call_audio_in_window_t2

0x11cc,	// (0x00055b16) popup_call_audio_in_window_t3_ParamLimits

0x11cc,	// (0x00055b16) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0006399a) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0006399a) popup_call_audio_in_window_t

0x115a,	// (0x00055aa4) bg_popup_call_pane_cp01_ParamLimits

0x115a,	// (0x00055aa4) bg_popup_call_pane_cp01

0x1168,	// (0x00055ab2) call_thumbnail_pane_cp02

0x11df,	// (0x00055b29) call_type_pane_cp022

0x11e7,	// (0x00055b31) popup_call_audio_out_window_g1_ParamLimits

0x11e7,	// (0x00055b31) popup_call_audio_out_window_g1

0x11f9,	// (0x00055b43) popup_call_audio_out_window_g2_ParamLimits

0x11f9,	// (0x00055b43) popup_call_audio_out_window_g2

0x1205,	// (0x00055b4f) popup_call_audio_out_window_g3_ParamLimits

0x1205,	// (0x00055b4f) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000639a1) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000639a1) popup_call_audio_out_window_g

0x1217,	// (0x00055b61) popup_call_audio_out_window_t1_ParamLimits

0x1217,	// (0x00055b61) popup_call_audio_out_window_t1

0x122f,	// (0x00055b79) popup_call_audio_out_window_t2_ParamLimits

0x122f,	// (0x00055b79) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000639a8) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000639a8) popup_call_audio_out_window_t

0x1244,	// (0x00055b8e) bg_popup_call_pane_ParamLimits

0x1244,	// (0x00055b8e) bg_popup_call_pane

0x3437,	// (0x00057d81) call_thumbnail_pane_cp_ParamLimits

0x3437,	// (0x00057d81) call_thumbnail_pane_cp

0x12c8,	// (0x00055c12) call_type_pane_cp01_ParamLimits

0x12c8,	// (0x00055c12) call_type_pane_cp01

0x130c,	// (0x00055c56) popup_call_audio_first_window_g1_ParamLimits

0x130c,	// (0x00055c56) popup_call_audio_first_window_g1

0x1358,	// (0x00055ca2) popup_call_audio_first_window_g2_ParamLimits

0x1358,	// (0x00055ca2) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000639ad) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000639ad) popup_call_audio_first_window_g

0x139c,	// (0x00055ce6) popup_call_audio_first_window_t1_ParamLimits

0x139c,	// (0x00055ce6) popup_call_audio_first_window_t1

0x1db6,	// (0x00056700) popup_call_audio_first_window_t4_ParamLimits

0x1db6,	// (0x00056700) popup_call_audio_first_window_t4

0x1e42,	// (0x0005678c) popup_call_audio_first_window_t5_ParamLimits

0x1e42,	// (0x0005678c) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000639b2) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000639b2) popup_call_audio_first_window_t

0x1e71,	// (0x000567bb) bg_popup_call_pane_cp02

0x1e7b,	// (0x000567c5) call_type_pane_cp023

0x1e83,	// (0x000567cd) popup_call_audio_wait_window_g1

0x1e8b,	// (0x000567d5) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000639b9) popup_call_audio_wait_window_g

0x1e93,	// (0x000567dd) popup_call_audio_wait_window_t3

0x1ea1,	// (0x000567eb) bg_popup_call_pane_cp03_ParamLimits

0x1ea1,	// (0x000567eb) bg_popup_call_pane_cp03

0x1f01,	// (0x0005684b) call_thumbnail_pane_cp011_ParamLimits

0x1f01,	// (0x0005684b) call_thumbnail_pane_cp011

0x1f0d,	// (0x00056857) call_type_pane_cp034_ParamLimits

0x1f0d,	// (0x00056857) call_type_pane_cp034

0x1f49,	// (0x00056893) popup_call_audio_second_window_g1_ParamLimits

0x1f49,	// (0x00056893) popup_call_audio_second_window_g1

0x1f85,	// (0x000568cf) popup_call_audio_second_window_g2_ParamLimits

0x1f85,	// (0x000568cf) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000639be) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000639be) popup_call_audio_second_window_g

0x345b,	// (0x00057da5) popup_call_audio_second_window_t1_ParamLimits

0x345b,	// (0x00057da5) popup_call_audio_second_window_t1

0x34dc,	// (0x00057e26) popup_call_audio_second_window_t2_ParamLimits

0x34dc,	// (0x00057e26) popup_call_audio_second_window_t2

0x3512,	// (0x00057e5c) popup_call_audio_second_window_t3_ParamLimits

0x3512,	// (0x00057e5c) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000639c3) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000639c3) popup_call_audio_second_window_t

0x1e71,	// (0x000567bb) bg_popup_call_pane_cp04

0x3548,	// (0x00057e92) list_conf_pane

0x3550,	// (0x00057e9a) popup_call_audio_conf_window_t1

0x355e,	// (0x00057ea8) call_thumbnail_pane_g1

0x3566,	// (0x00057eb0) bg_pinb_pane_ParamLimits

0x3566,	// (0x00057eb0) bg_pinb_pane

0x3574,	// (0x00057ebe) find_pinb_pane

0x3566,	// (0x00057eb0) listscroll_pinb_pane_ParamLimits

0x3566,	// (0x00057eb0) listscroll_pinb_pane

0x357e,	// (0x00057ec8) pinb_bg_pane_g1

0x357e,	// (0x00057ec8) pinb_bg_pane_g2

0x357e,	// (0x00057ec8) pinb_bg_pane_g3

0x357e,	// (0x00057ec8) pinb_bg_pane_g4

0x357e,	// (0x00057ec8) pinb_bg_pane_g5

0x357e,	// (0x00057ec8) pinb_bg_pane_g6

0x357e,	// (0x00057ec8) pinb_bg_pane_g7

0x357e,	// (0x00057ec8) pinb_bg_pane_g8

0x357e,	// (0x00057ec8) pinb_bg_pane_g9

0x357e,	// (0x00057ec8) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000639ca) pinb_bg_pane_g

0x10b1,	// (0x000559fb) grid_pinb_pane

0x10b1,	// (0x000559fb) list_pinb_pane

0x3588,	// (0x00057ed2) scroll_pane_cp01_ParamLimits

0x3588,	// (0x00057ed2) scroll_pane_cp01

0x3596,	// (0x00057ee0) find_pinb_pane_g1_ParamLimits

0x3596,	// (0x00057ee0) find_pinb_pane_g1

0x35ae,	// (0x00057ef8) find_pinb_pane_t1

0x35c0,	// (0x00057f0a) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000639e4) find_pinb_pane_t

0x35d5,	// (0x00057f1f) input_focus_pane_cp01_ParamLimits

0x35d5,	// (0x00057f1f) input_focus_pane_cp01

0x35e1,	// (0x00057f2b) cell_pinb_pane_ParamLimits

0x35e1,	// (0x00057f2b) cell_pinb_pane

0x35ef,	// (0x00057f39) cell_pinb_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) cell_pinb_pane_g1

0x35fd,	// (0x00057f47) cell_pinb_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) cell_pinb_pane_g2

0x35fd,	// (0x00057f47) cell_pinb_pane_g3_ParamLimits

0x35fd,	// (0x00057f47) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000639e9) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000639e9) cell_pinb_pane_g

0x1e71,	// (0x000567bb) grid_highlight_pane_cp01

0x35e1,	// (0x00057f2b) list_pinb_item_pane_ParamLimits

0x35e1,	// (0x00057f2b) list_pinb_item_pane

0x10b1,	// (0x000559fb) list_highlight_pane_cp02

0x360b,	// (0x00057f55) list_pinb_item_pane_g1_ParamLimits

0x360b,	// (0x00057f55) list_pinb_item_pane_g1

0x35fd,	// (0x00057f47) list_pinb_item_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) list_pinb_item_pane_g2

0x35ef,	// (0x00057f39) list_pinb_item_pane_g3_ParamLimits

0x35ef,	// (0x00057f39) list_pinb_item_pane_g3

0x35fd,	// (0x00057f47) list_pinb_item_pane_g4_ParamLimits

0x35fd,	// (0x00057f47) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000639f0) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000639f0) list_pinb_item_pane_g

0x3619,	// (0x00057f63) list_pinb_item_pane_t1_ParamLimits

0x3619,	// (0x00057f63) list_pinb_item_pane_t1

0x3647,	// (0x00057f91) calc_display_pane

0x3665,	// (0x00057faf) calc_paper_pane

0x3681,	// (0x00057fcb) grid_calc_pane

0x10b1,	// (0x000559fb) bg_list_pane_cp01

0xbfdb,	// (0x00060925) clock_g1

0xbfdb,	// (0x00060925) clock_g2

0x0001,

0xf0af,	// (0x000639f9) clock_g

0xbfe5,	// (0x0006092f) clock_t1_ParamLimits

0xbfe5,	// (0x0006092f) clock_t1

0xbff9,	// (0x00060943) clock_t2_ParamLimits

0xbff9,	// (0x00060943) clock_t2

0xbff9,	// (0x00060943) clock_t3_ParamLimits

0xbff9,	// (0x00060943) clock_t3

0xbff9,	// (0x00060943) clock_t4_ParamLimits

0xbff9,	// (0x00060943) clock_t4

0xbfe5,	// (0x0006092f) clock_t5_ParamLimits

0xbfe5,	// (0x0006092f) clock_t5

0xbff9,	// (0x00060943) clock_t6_ParamLimits

0xbff9,	// (0x00060943) clock_t6

0xbff9,	// (0x00060943) clock_t7_ParamLimits

0xbff9,	// (0x00060943) clock_t7

0xbff9,	// (0x00060943) clock_t8_ParamLimits

0xbff9,	// (0x00060943) clock_t8

0xbff9,	// (0x00060943) clock_t9_ParamLimits

0xbff9,	// (0x00060943) clock_t9

0x0008,

0xf0b4,	// (0x000639fe) clock_t_ParamLimits

0xf0b4,	// (0x000639fe) clock_t

0x10b1,	// (0x000559fb) popup_clock_analogue_window_cp02

0x10b1,	// (0x000559fb) popup_clock_digital_window_cp01

0x1e71,	// (0x000567bb) listscroll_help_pane

0x1e71,	// (0x000567bb) phob_pre_status_pane

0xc00d,	// (0x00060957) grid_qdial_pane

0x3566,	// (0x00057eb0) listscroll_mce_pane

0x3566,	// (0x00057eb0) bg_notes_pane

0xc017,	// (0x00060961) list_notes_pane

0x36ad,	// (0x00057ff7) scroll_pane_cp06

0xc025,	// (0x0006096f) bg_calc_paper_pane

0x36bc,	// (0x00058006) list_calc_pane

0xc039,	// (0x00060983) bg_calc_display_pane

0x36d6,	// (0x00058020) calc_display_pane_t1

0x36eb,	// (0x00058035) calc_display_pane_t2

0x3700,	// (0x0005804a) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00063a11) calc_display_pane_t

0x3712,	// (0x0005805c) cell_calc_pane_ParamLimits

0x3712,	// (0x0005805c) cell_calc_pane

0xc045,	// (0x0006098f) bg_calc_paper_pane_g1

0xc051,	// (0x0006099b) bg_calc_paper_pane_g2

0xc05d,	// (0x000609a7) bg_calc_paper_pane_g3

0xc069,	// (0x000609b3) bg_calc_paper_pane_g4

0xc075,	// (0x000609bf) bg_calc_paper_pane_g5

0x3741,	// (0x0005808b) bg_calc_paper_pane_g6

0x3752,	// (0x0005809c) bg_calc_paper_pane_g7

0x3763,	// (0x000580ad) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00063a18) bg_calc_paper_pane_g

0x3774,	// (0x000580be) calc_bg_paper_pane_g9

0x3785,	// (0x000580cf) list_calc_item_pane_ParamLimits

0x3785,	// (0x000580cf) list_calc_item_pane

0xc081,	// (0x000609cb) list_calc_item_pane_g1

0x37a6,	// (0x000580f0) list_calc_item_pane_t1_ParamLimits

0x37a6,	// (0x000580f0) list_calc_item_pane_t1

0x37b8,	// (0x00058102) list_calc_item_pane_t2_ParamLimits

0x37b8,	// (0x00058102) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00063a29) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00063a29) list_calc_item_pane_t

0x357e,	// (0x00057ec8) cell_calc_pane_g1

0xc08e,	// (0x000609d8) grid_highlight_pane_cp02

0x0452,	// (0x00054d9c) bg_calc_display_pane_g1

0x37e8,	// (0x00058132) bg_calc_display_pane_g2

0x0440,	// (0x00054d8a) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00063a33) bg_calc_display_pane_g

0x37f2,	// (0x0005813c) cell_qdial_pane_ParamLimits

0x37f2,	// (0x0005813c) cell_qdial_pane

0x3808,	// (0x00058152) cell_qdial_pane_g1_ParamLimits

0x3808,	// (0x00058152) cell_qdial_pane_g1

0x3815,	// (0x0005815f) cell_qdial_pane_g2_ParamLimits

0x3815,	// (0x0005815f) cell_qdial_pane_g2

0xc0b0,	// (0x000609fa) cell_qdial_pane_g3_ParamLimits

0xc0b0,	// (0x000609fa) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00063a3a) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00063a3a) cell_qdial_pane_g

0x3833,	// (0x0005817d) cell_qdial_pane_t1_ParamLimits

0x3833,	// (0x0005817d) cell_qdial_pane_t1

0x384b,	// (0x00058195) cell_qdial_pane_t2_ParamLimits

0x384b,	// (0x00058195) cell_qdial_pane_t2

0x385e,	// (0x000581a8) cell_qdial_pane_t3_ParamLimits

0x385e,	// (0x000581a8) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00063a43) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00063a43) cell_qdial_pane_t

0x1e71,	// (0x000567bb) grid_highlight_pane_cp04

0xc0bc,	// (0x00060a06) thumbnail_qdial_pane_ParamLimits

0xc0bc,	// (0x00060a06) thumbnail_qdial_pane

0xc118,	// (0x00060a62) list_help_pane

0xc121,	// (0x00060a6b) scroll_pane_cp02

0x3871,	// (0x000581bb) help_list_pane_t1_ParamLimits

0x3871,	// (0x000581bb) help_list_pane_t1

0x3898,	// (0x000581e2) bg_notes_pane_g2

0x38a0,	// (0x000581ea) bg_notes_pane_g3

0x38a8,	// (0x000581f2) notes_bg_pane_g1

0x38b0,	// (0x000581fa) notes_bg_pane_g4

0x38b8,	// (0x00058202) notes_bg_pane_g5

0x38c0,	// (0x0005820a) notes_bg_pane_g6

0x38c8,	// (0x00058212) notes_bg_pane_g7

0x38d0,	// (0x0005821a) notes_bg_pane_g8

0x38d8,	// (0x00058222) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00063a61) notes_bg_pane_g

0x38e0,	// (0x0005822a) list_notes_text_pane_ParamLimits

0x38e0,	// (0x0005822a) list_notes_text_pane

0xc12a,	// (0x00060a74) list_notes_text_pane_g1

0xd641,	// (0x00061f8b) list_notes_text_pane_t1

0x3908,	// (0x00058252) listscroll_cale_week_pane

0x3934,	// (0x0005827e) bg_cale_heading_pane

0x395d,	// (0x000582a7) bg_cale_pane_cp01

0x397f,	// (0x000582c9) cale_week_corner_pane

0x399e,	// (0x000582e8) cale_week_day_heading_pane

0x39cc,	// (0x00058316) cale_week_scroll_pane_g1

0x39f0,	// (0x0005833a) cale_week_scroll_pane_g2

0x3a08,	// (0x00058352) cale_week_scroll_pane_g3

0x3a20,	// (0x0005836a) cale_week_scroll_pane_g4

0x3a38,	// (0x00058382) cale_week_scroll_pane_g5

0x3a50,	// (0x0005839a) cale_week_scroll_pane_g6

0x3a70,	// (0x000583ba) cale_week_scroll_pane_g7

0x3a90,	// (0x000583da) cale_week_scroll_pane_g8

0x3ab0,	// (0x000583fa) cale_week_scroll_pane_g9

0x3acd,	// (0x00058417) cale_week_scroll_pane_g10

0x3aea,	// (0x00058434) cale_week_scroll_pane_g11

0x3b09,	// (0x00058453) cale_week_scroll_pane_g12

0x3b2e,	// (0x00058478) cale_week_scroll_pane_g13

0x3b57,	// (0x000584a1) cale_week_scroll_pane_g14

0x3b80,	// (0x000584ca) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00063a70) cale_week_scroll_pane_g

0x3bc9,	// (0x00058513) cale_week_time_pane

0x3be9,	// (0x00058533) grid_cale_week_pane

0xc15f,	// (0x00060aa9) scroll_pane_cp08

0x3c1a,	// (0x00058564) cell_cale_week_pane_ParamLimits

0x3c1a,	// (0x00058564) cell_cale_week_pane

0x3caa,	// (0x000585f4) cale_week_day_heading_pane_t1

0x3cd2,	// (0x0005861c) cale_week_day_heading_pane_t2

0x3cff,	// (0x00058649) cale_week_day_heading_pane_t3

0x3d2c,	// (0x00058676) cale_week_day_heading_pane_t4

0x3d59,	// (0x000586a3) cale_week_day_heading_pane_t5

0x3d86,	// (0x000586d0) cale_week_day_heading_pane_t6

0x3db3,	// (0x000586fd) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00063a91) cale_week_day_heading_pane_t

0xc17c,	// (0x00060ac6) bg_cale_side_pane

0x3ddb,	// (0x00058725) cale_week_time_pane_t1

0x3dff,	// (0x00058749) cale_week_time_pane_t2

0x3e23,	// (0x0005876d) cale_week_time_pane_t3

0x3e47,	// (0x00058791) cale_week_time_pane_t4

0x3e6b,	// (0x000587b5) cale_week_time_pane_t5

0x3e91,	// (0x000587db) cale_week_time_pane_t6

0x3eb9,	// (0x00058803) cale_week_time_pane_t7

0x3ee5,	// (0x0005882f) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00063aa0) cale_week_time_pane_t

0x3f15,	// (0x0005885f) cell_cale_week_pane_g2

0x3f39,	// (0x00058883) cell_cale_week_pane_g3_ParamLimits

0x3f39,	// (0x00058883) cell_cale_week_pane_g3

0xc18a,	// (0x00060ad4) grid_highlight_pane_cp07

0xc192,	// (0x00060adc) listscroll_gms_pane

0xc19c,	// (0x00060ae6) grid_gms_pane

0xc1a5,	// (0x00060aef) listscroll_gms_pane_g1

0xc1ad,	// (0x00060af7) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00063ab1) listscroll_gms_pane_g

0x3f51,	// (0x0005889b) scroll_pane_cp010

0x3f5c,	// (0x000588a6) cell_gms_pane_ParamLimits

0x3f5c,	// (0x000588a6) cell_gms_pane

0x3f6f,	// (0x000588b9) cell_gms_pane_g1

0xc1b5,	// (0x00060aff) cell_gms_pane_g2

0xc1bd,	// (0x00060b07) cell_gms_pane_g3

0xc1c6,	// (0x00060b10) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00063ab6) cell_gms_pane_g

0xc1cf,	// (0x00060b19) grid_highlight_pane_cp09

0x5fd6,	// (0x0005a920) phob_pre_status_pane_g1

0x5fde,	// (0x0005a928) phob_pre_status_pane_g2

0x5fe6,	// (0x0005a930) phob_pre_status_pane_g3

0x5fee,	// (0x0005a938) phob_pre_status_pane_g4

0x0004,

0xf525,	// (0x00063e6f) phob_pre_status_pane_g

0x5ffe,	// (0x0005a948) phob_pre_status_pane_t1

0x600e,	// (0x0005a958) phob_pre_status_pane_t2

0x601e,	// (0x0005a968) phob_pre_status_pane_t3

0x0002,

0xf530,	// (0x00063e7a) phob_pre_status_pane_t

0xc1d7,	// (0x00060b21) bg_list_pane_cp05

0x3f7f,	// (0x000588c9) grid_vorec_pane

0x3f89,	// (0x000588d3) vorec_t1

0x3f97,	// (0x000588e1) vorec_t2

0x3fa5,	// (0x000588ef) vorec_t3

0x3fb3,	// (0x000588fd) vorec_t4

0xb278,	// (0x0005fbc2) vorec_t5

0xb286,	// (0x0005fbd0) vorec_t6

0x0004,

0xf175,	// (0x00063abf) vorec_t

0xb294,	// (0x0005fbde) wait_bar_pane_cp01

0x3fcf,	// (0x00058919) cell_vorec_pane_ParamLimits

0x3fcf,	// (0x00058919) cell_vorec_pane

0x3fe4,	// (0x0005892e) cell_vorec_pane_g1

0x1e71,	// (0x000567bb) grid_highlight_pane_cp05

0x35e1,	// (0x00057f2b) cams_zoom_pane

0x35e1,	// (0x00057f2b) image_vga_pane

0x35fd,	// (0x00057f47) main_camera_pane_g1

0x35fd,	// (0x00057f47) main_camera_pane_g2

0x35fd,	// (0x00057f47) main_camera_pane_g3

0x35fd,	// (0x00057f47) main_camera_pane_g4

0x35fd,	// (0x00057f47) main_camera_pane_g5

0x35fd,	// (0x00057f47) main_camera_pane_g6

0x35fd,	// (0x00057f47) main_camera_pane_g7

0x0007,

0xf180,	// (0x00063aca) main_camera_pane_g

0xbff9,	// (0x00060943) main_camera_pane_t1

0xbff9,	// (0x00060943) main_camera_pane_t2

0x0001,

0xf191,	// (0x00063adb) main_camera_pane_t

0x3fee,	// (0x00058938) cams_zoom_pane_cp_ParamLimits

0x3fee,	// (0x00058938) cams_zoom_pane_cp

0x401c,	// (0x00058966) image_cif_pane_ParamLimits

0x401c,	// (0x00058966) image_cif_pane

0x10b1,	// (0x000559fb) image_subqcif_pane

0x402a,	// (0x00058974) main_video_pane_g1_ParamLimits

0x402a,	// (0x00058974) main_video_pane_g1

0x4052,	// (0x0005899c) main_video_pane_g2_ParamLimits

0x4052,	// (0x0005899c) main_video_pane_g2

0x4085,	// (0x000589cf) main_video_pane_g3_ParamLimits

0x4085,	// (0x000589cf) main_video_pane_g3

0x4085,	// (0x000589cf) main_video_pane_g4_ParamLimits

0x4085,	// (0x000589cf) main_video_pane_g4

0x40b3,	// (0x000589fd) main_video_pane_g5_ParamLimits

0x40b3,	// (0x000589fd) main_video_pane_g5

0xc1df,	// (0x00060b29) main_video_pane_g6_ParamLimits

0xc1df,	// (0x00060b29) main_video_pane_g6

0x0006,

0xf196,	// (0x00063ae0) main_video_pane_g_ParamLimits

0xf196,	// (0x00063ae0) main_video_pane_g

0x40cf,	// (0x00058a19) main_video_pane_t1_ParamLimits

0x40cf,	// (0x00058a19) main_video_pane_t1

0xbfdb,	// (0x00060925) cams_zoom_pane_g1

0xbfdb,	// (0x00060925) cams_zoom_pane_g2

0xbfdb,	// (0x00060925) cams_zoom_pane_g3

0xbfdb,	// (0x00060925) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00063aef) cams_zoom_pane_g

0x35e1,	// (0x00057f2b) grid_cams_pane

0x35e1,	// (0x00057f2b) linegrid_cams_pane

0x4109,	// (0x00058a53) cell_cams_pane_ParamLimits

0x4109,	// (0x00058a53) cell_cams_pane

0x10b1,	// (0x000559fb) cams_burst_image_pane

0xbfdb,	// (0x00060925) cell_cams_pane_g1

0x10b1,	// (0x000559fb) grid_highlight_pane_cp03

0x357e,	// (0x00057ec8) mp_bg_pane_g1

0x10b1,	// (0x000559fb) bg_list_pane_cp03

0x10b1,	// (0x000559fb) bg_mp_pane

0x10b1,	// (0x000559fb) grid_mp_pane

0xbfdb,	// (0x00060925) media_player_g1

0xc731,	// (0x0006107b) media_player_t1

0xc731,	// (0x0006107b) media_player_t2

0xc731,	// (0x0006107b) media_player_t3

0xc731,	// (0x0006107b) media_player_t4

0xc731,	// (0x0006107b) media_player_t5

0xc731,	// (0x0006107b) media_player_t6

0xc731,	// (0x0006107b) media_player_t7

0x0006,

0xf50f,	// (0x00063e59) media_player_t

0x10b1,	// (0x000559fb) wait_bar_pane_cp02

0xf4f4,	// (0x00063e3e) main_usb_pane_t

0xc9aa,	// (0x000612f4) cell_mp_pane

0x357e,	// (0x00057ec8) cell_mp_pane_g1

0x1e71,	// (0x000567bb) grid_highlight_pane_cp06

0xc1f9,	// (0x00060b43) grid_skin_colour_pane

0xc201,	// (0x00060b4b) list_highlight_pane_cp03

0x411e,	// (0x00058a68) skin_g1

0xc209,	// (0x00060b53) skin_t1

0xc218,	// (0x00060b62) skin_t2

0x0001,

0xf1d3,	// (0x00063b1d) skin_t

0x4128,	// (0x00058a72) cell_skin_colour_pane_ParamLimits

0x4128,	// (0x00058a72) cell_skin_colour_pane

0xc226,	// (0x00060b70) cell_skin_colour_pane_g1

0x41a8,	// (0x00058af2) call_video_g1_ParamLimits

0x41a8,	// (0x00058af2) call_video_g1

0x41b8,	// (0x00058b02) call_video_g2_ParamLimits

0x41b8,	// (0x00058b02) call_video_g2

0x0001,

0xf1d8,	// (0x00063b22) call_video_g_ParamLimits

0xf1d8,	// (0x00063b22) call_video_g

0x4208,	// (0x00058b52) call_video_uplink_pane_cp1_ParamLimits

0x4208,	// (0x00058b52) call_video_uplink_pane_cp1

0xc238,	// (0x00060b82) call_video_uplink_pane_cp2

0x42d6,	// (0x00058c20) video_down_crop_pane_ParamLimits

0x42d6,	// (0x00058c20) video_down_crop_pane

0x43c8,	// (0x00058d12) video_down_pane_ParamLimits

0x43c8,	// (0x00058d12) video_down_pane

0xc240,	// (0x00060b8a) video_down_subqcif_pane_ParamLimits

0xc240,	// (0x00060b8a) video_down_subqcif_pane

0xc25a,	// (0x00060ba4) video_down_subqcif_pane_cp_ParamLimits

0xc25a,	// (0x00060ba4) video_down_subqcif_pane_cp

0xc282,	// (0x00060bcc) im_reading_pane_ParamLimits

0xc282,	// (0x00060bcc) im_reading_pane

0x44e5,	// (0x00058e2f) im_writing_pane_ParamLimits

0x44e5,	// (0x00058e2f) im_writing_pane

0x4503,	// (0x00058e4d) im_reading_pane_t1

0xc29c,	// (0x00060be6) list_im_pane

0xc2ad,	// (0x00060bf7) scroll_pane_cp07

0x4545,	// (0x00058e8f) im_writing_pane_t1_ParamLimits

0x4545,	// (0x00058e8f) im_writing_pane_t1

0xc2c6,	// (0x00060c10) im_writing_pane_t2_ParamLimits

0xc2c6,	// (0x00060c10) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00063b2c) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00063b2c) im_writing_pane_t

0x1e71,	// (0x000567bb) input_focus_pane_cp04

0x1e71,	// (0x000567bb) input_focus_pane_cp05

0x4557,	// (0x00058ea1) list_im_single_pane_ParamLimits

0x4557,	// (0x00058ea1) list_im_single_pane

0xc2e3,	// (0x00060c2d) list_single_im_pane_t1

0xc1d7,	// (0x00060b21) blid_accuracy_pane

0xc1d7,	// (0x00060b21) blid_compass_pane

0xde45,	// (0x0006278f) main_location_t1

0xde45,	// (0x0006278f) main_location_t2

0xde45,	// (0x0006278f) main_location_t3

0x0002,

0xf51e,	// (0x00063e68) main_location_t

0x1e71,	// (0x000567bb) aid_levels_location

0x357e,	// (0x00057ec8) blid_accuracy_pane_g1

0x357e,	// (0x00057ec8) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00063b80) blid_accuracy_pane_g

0xc31d,	// (0x00060c67) wml_content_pane

0xc35b,	// (0x00060ca5) wml_button_pane_ParamLimits

0xc35b,	// (0x00060ca5) wml_button_pane

0x4570,	// (0x00058eba) wml_list_single_large_pane_ParamLimits

0x4570,	// (0x00058eba) wml_list_single_large_pane

0x4592,	// (0x00058edc) wml_list_single_medium_pane_ParamLimits

0x4592,	// (0x00058edc) wml_list_single_medium_pane

0x45b5,	// (0x00058eff) wml_list_single_small_pane_ParamLimits

0x45b5,	// (0x00058eff) wml_list_single_small_pane

0xc36f,	// (0x00060cb9) wml_selection_box_pane_ParamLimits

0xc36f,	// (0x00060cb9) wml_selection_box_pane

0xc382,	// (0x00060ccc) wml_list_single_pane_t1

0xc391,	// (0x00060cdb) wml_list_single_medium_pane_t1

0xc3a0,	// (0x00060cea) wml_list_single_large_pane_t1

0xc3af,	// (0x00060cf9) input_focus_pane_cp02_ParamLimits

0xc3af,	// (0x00060cf9) input_focus_pane_cp02

0xc3c2,	// (0x00060d0c) wml_selection_box_pane_g1

0xc3cb,	// (0x00060d15) wml_selection_box_pane_t1_ParamLimits

0xc3cb,	// (0x00060d15) wml_selection_box_pane_t1

0x3566,	// (0x00057eb0) bg_wml_button_pane_ParamLimits

0x3566,	// (0x00057eb0) bg_wml_button_pane

0xc3e3,	// (0x00060d2d) wml_button_pane_g1

0xc3eb,	// (0x00060d35) wml_button_pane_t1

0xc3e3,	// (0x00060d2d) wml_button_bg_pane_g1

0xc3fb,	// (0x00060d45) wml_button_bg_pane_g2

0xc403,	// (0x00060d4d) wml_button_bg_pane_g3

0xc40b,	// (0x00060d55) wml_button_bg_pane_g4

0xc413,	// (0x00060d5d) wml_button_bg_pane_g5

0xc41b,	// (0x00060d65) wml_button_bg_pane_g6

0xc423,	// (0x00060d6d) wml_button_bg_pane_g7

0xc42b,	// (0x00060d75) wml_button_bg_pane_g8

0xc433,	// (0x00060d7d) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00063b31) wml_button_bg_pane_g

0x45dd,	// (0x00058f27) bg_list_pane_cp02

0xc43b,	// (0x00060d85) mce_header_pane_ParamLimits

0xc43b,	// (0x00060d85) mce_header_pane

0xc451,	// (0x00060d9b) mce_icon_pane

0xc451,	// (0x00060d9b) mce_image_pane

0xc45a,	// (0x00060da4) mce_text_pane_ParamLimits

0xc45a,	// (0x00060da4) mce_text_pane

0x45e7,	// (0x00058f31) scroll_pane_cp03

0xc353,	// (0x00060c9d) scroll_pane_cp04

0xc46d,	// (0x00060db7) scroll_pane_cp05_ParamLimits

0xc46d,	// (0x00060db7) scroll_pane_cp05

0x45f1,	// (0x00058f3b) mce_header_field_pane_ParamLimits

0x45f1,	// (0x00058f3b) mce_header_field_pane

0x4613,	// (0x00058f5d) mce_header_field_pane_2_ParamLimits

0x4613,	// (0x00058f5d) mce_header_field_pane_2

0x4629,	// (0x00058f73) mce_header_field_pane_3

0x4631,	// (0x00058f7b) list_single_mce_message_pane_ParamLimits

0x4631,	// (0x00058f7b) list_single_mce_message_pane

0x4650,	// (0x00058f9a) list_single_mce_smart_pane_ParamLimits

0x4650,	// (0x00058f9a) list_single_mce_smart_pane

0xc479,	// (0x00060dc3) input_focus_pane_cp03

0xc482,	// (0x00060dcc) list_header_data_pane

0x467a,	// (0x00058fc4) mce_header_field_pane_t1

0x468a,	// (0x00058fd4) list_single_mce_header_pane_ParamLimits

0x468a,	// (0x00058fd4) list_single_mce_header_pane

0xc48a,	// (0x00060dd4) list_single_mce_header_pane_t1

0xc499,	// (0x00060de3) list_single_mce_message_pane_g1

0xc4a1,	// (0x00060deb) list_single_mce_message_pane_t1

0x46ce,	// (0x00059018) bg_cale_heading_pane_cp01_ParamLimits

0x46ce,	// (0x00059018) bg_cale_heading_pane_cp01

0xc4af,	// (0x00060df9) bg_cale_pane_cp02_ParamLimits

0xc4af,	// (0x00060df9) bg_cale_pane_cp02

0x4720,	// (0x0005906a) cale_month_corner_pane

0x473f,	// (0x00059089) cale_month_day_heading_pane_ParamLimits

0x473f,	// (0x00059089) cale_month_day_heading_pane

0x47a1,	// (0x000590eb) cale_month_pane_g1_ParamLimits

0x47a1,	// (0x000590eb) cale_month_pane_g1

0x47e8,	// (0x00059132) cale_month_pane_g2_ParamLimits

0x47e8,	// (0x00059132) cale_month_pane_g2

0x4820,	// (0x0005916a) cale_month_pane_g3_ParamLimits

0x4820,	// (0x0005916a) cale_month_pane_g3

0x4874,	// (0x000591be) cale_month_pane_g4_ParamLimits

0x4874,	// (0x000591be) cale_month_pane_g4

0x48c8,	// (0x00059212) cale_month_pane_g5_ParamLimits

0x48c8,	// (0x00059212) cale_month_pane_g5

0x491c,	// (0x00059266) cale_month_pane_g6_ParamLimits

0x491c,	// (0x00059266) cale_month_pane_g6

0x4980,	// (0x000592ca) cale_month_pane_g7_ParamLimits

0x4980,	// (0x000592ca) cale_month_pane_g7

0x49e4,	// (0x0005932e) cale_month_pane_g8_ParamLimits

0x49e4,	// (0x0005932e) cale_month_pane_g8

0x4a48,	// (0x00059392) cale_month_pane_g9_ParamLimits

0x4a48,	// (0x00059392) cale_month_pane_g9

0x4aa2,	// (0x000593ec) cale_month_pane_g10_ParamLimits

0x4aa2,	// (0x000593ec) cale_month_pane_g10

0x4af4,	// (0x0005943e) cale_month_pane_g11_ParamLimits

0x4af4,	// (0x0005943e) cale_month_pane_g11

0x4b42,	// (0x0005948c) cale_month_pane_g12_ParamLimits

0x4b42,	// (0x0005948c) cale_month_pane_g12

0x4b92,	// (0x000594dc) cale_month_pane_g13_ParamLimits

0x4b92,	// (0x000594dc) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00063b44) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00063b44) cale_month_pane_g

0x4be2,	// (0x0005952c) cale_month_week_pane

0x4c02,	// (0x0005954c) grid_cale_month_pane_ParamLimits

0x4c02,	// (0x0005954c) grid_cale_month_pane

0x4c5b,	// (0x000595a5) cale_month_day_heading_pane_t1

0x4cdd,	// (0x00059627) cale_month_day_heading_pane_t2

0x4d56,	// (0x000596a0) cale_month_day_heading_pane_t3

0x4dcf,	// (0x00059719) cale_month_day_heading_pane_t4

0x4e48,	// (0x00059792) cale_month_day_heading_pane_t5

0x4ec9,	// (0x00059813) cale_month_day_heading_pane_t6

0x4f52,	// (0x0005989c) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00063b5f) cale_month_day_heading_pane_t

0xc17c,	// (0x00060ac6) bg_cale_side_pane_cp01

0x4fdb,	// (0x00059925) cale_month_week_pane_t1

0x4ff4,	// (0x0005993e) cale_month_week_pane_t2

0x500d,	// (0x00059957) cale_month_week_pane_t3

0x5026,	// (0x00059970) cale_month_week_pane_t4

0x503f,	// (0x00059989) cale_month_week_pane_t5

0x505c,	// (0x000599a6) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00063b6e) cale_month_week_pane_t

0x507f,	// (0x000599c9) cell_cale_month_pane_ParamLimits

0x507f,	// (0x000599c9) cell_cale_month_pane

0x51ad,	// (0x00059af7) cell_cale_month_pane_g1

0x51b9,	// (0x00059b03) cell_cale_month_pane_t1_ParamLimits

0x51b9,	// (0x00059b03) cell_cale_month_pane_t1

0xc18a,	// (0x00060ad4) grid_highlight_pane_cp08

0x357e,	// (0x00057ec8) main_smil_g1

0x51e5,	// (0x00059b2f) smil_status_pane

0xc4ee,	// (0x00060e38) smil_text_pane

0xdd5b,	// (0x000626a5) bg_popup_call3_rect_pane_g8

0xdd63,	// (0x000626ad) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00063dfc) bg_popup_call3_rect_pane_g

0xdf0e,	// (0x00062858) smil_status_volume_pane_g1

0xc4f8,	// (0x00060e42) smil_status_pane_t1

0x63b3,	// (0x0005acfd) volume_smil_pane

0xc50f,	// (0x00060e59) list_smil_text_pane

0x51f8,	// (0x00059b42) scroll_pane_cp011

0x5203,	// (0x00059b4d) smil_text_list_pane_t1_ParamLimits

0x5203,	// (0x00059b4d) smil_text_list_pane_t1

0x5257,	// (0x00059ba1) aid_volume_smil_ParamLimits

0x5257,	// (0x00059ba1) aid_volume_smil

0x357e,	// (0x00057ec8) smil_volume_pane_g1

0x357e,	// (0x00057ec8) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00063b80) smil_volume_pane_g

0x3908,	// (0x00058252) listscroll_cale_day_pane

0xc519,	// (0x00060e63) bg_cale_pane

0xc531,	// (0x00060e7b) list_cale_pane

0xc554,	// (0x00060e9e) scroll_pane_cp09

0xc565,	// (0x00060eaf) cale_bg_pane_g1

0xc56d,	// (0x00060eb7) cale_bg_pane_g2

0xc575,	// (0x00060ebf) cale_bg_pane_g3

0xc57d,	// (0x00060ec7) cale_bg_pane_g4

0xc585,	// (0x00060ecf) cale_bg_pane_g5

0xc58d,	// (0x00060ed7) cale_bg_pane_g6

0xc595,	// (0x00060edf) cale_bg_pane_g7

0xc59d,	// (0x00060ee7) cale_bg_pane_g8

0xc5a5,	// (0x00060eef) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00063b85) cale_bg_pane_g

0xc5ad,	// (0x00060ef7) list_cale_time_pane_ParamLimits

0xc5ad,	// (0x00060ef7) list_cale_time_pane

0xc5c4,	// (0x00060f0e) list_cale_time_pane_g1_ParamLimits

0xc5c4,	// (0x00060f0e) list_cale_time_pane_g1

0xc5d0,	// (0x00060f1a) list_cale_time_pane_g2_ParamLimits

0xc5d0,	// (0x00060f1a) list_cale_time_pane_g2

0x5281,	// (0x00059bcb) list_cale_time_pane_g3_ParamLimits

0x5281,	// (0x00059bcb) list_cale_time_pane_g3

0x528f,	// (0x00059bd9) list_cale_time_pane_g4_ParamLimits

0x528f,	// (0x00059bd9) list_cale_time_pane_g4

0x529d,	// (0x00059be7) list_cale_time_pane_g5_ParamLimits

0x529d,	// (0x00059be7) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00063b98) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00063b98) list_cale_time_pane_g

0xc5ea,	// (0x00060f34) list_cale_time_pane_t1_ParamLimits

0xc5ea,	// (0x00060f34) list_cale_time_pane_t1

0xc612,	// (0x00060f5c) list_cale_time_pane_t2_ParamLimits

0xc612,	// (0x00060f5c) list_cale_time_pane_t2

0x556f,	// (0x00059eb9) aid_blid_cardinal_pane

0x55b1,	// (0x00059efb) compass_pane_t4

0xc63a,	// (0x00060f84) list_cale_time_pane_t4_ParamLimits

0xc63a,	// (0x00060f84) list_cale_time_pane_t4

0x55bf,	// (0x00059f09) compass_pane_t5

0x55cf,	// (0x00059f19) compass_pane_t6

0x55dd,	// (0x00059f27) compass_pane_t7

0xca5a,	// (0x000613a4) navi_pane_cc_t1

0xcba7,	// (0x000614f1) aid_phob_thumbnail_center_pane

0x5b0b,	// (0x0005a455) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00063ba5) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00063ba5) list_cale_time_pane_t

0x115a,	// (0x00055aa4) bg_popup_window_pane_cp02_ParamLimits

0x115a,	// (0x00055aa4) bg_popup_window_pane_cp02

0xc662,	// (0x00060fac) heading_pane_cp01_ParamLimits

0xc662,	// (0x00060fac) heading_pane_cp01

0xc66e,	// (0x00060fb8) loc_req_pane_ParamLimits

0xc66e,	// (0x00060fb8) loc_req_pane

0xc67e,	// (0x00060fc8) loc_type_pane_ParamLimits

0xc67e,	// (0x00060fc8) loc_type_pane

0xc690,	// (0x00060fda) loc_type_pane_t1_ParamLimits

0xc690,	// (0x00060fda) loc_type_pane_t1

0xc6a2,	// (0x00060fec) loc_type_pane_t2_ParamLimits

0xc6a2,	// (0x00060fec) loc_type_pane_t2

0xc6b4,	// (0x00060ffe) loc_type_pane_t3_ParamLimits

0xc6b4,	// (0x00060ffe) loc_type_pane_t3

0x0002,

0xf262,	// (0x00063bac) loc_type_pane_t_ParamLimits

0xf262,	// (0x00063bac) loc_type_pane_t

0xc6c6,	// (0x00061010) list_loc_req_pane

0xc6d0,	// (0x0006101a) scroll_pane_cp012

0x52ab,	// (0x00059bf5) list_single_loc_request_popup_menu_pane_ParamLimits

0x52ab,	// (0x00059bf5) list_single_loc_request_popup_menu_pane

0xc6db,	// (0x00061025) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc6db,	// (0x00061025) list_single_loc_request_popup_menu_pane_g1

0xc6e7,	// (0x00061031) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc6e7,	// (0x00061031) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00063bb3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00063bb3) list_single_loc_request_popup_menu_pane_g

0xc6f3,	// (0x0006103d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc6f3,	// (0x0006103d) list_single_loc_request_popup_menu_pane_t1

0x52bd,	// (0x00059c07) bg_popup_window_pane_cp03_ParamLimits

0x52bd,	// (0x00059c07) bg_popup_window_pane_cp03

0x52cb,	// (0x00059c15) heading_loc_req_pane_ParamLimits

0x52cb,	// (0x00059c15) heading_loc_req_pane

0x52d7,	// (0x00059c21) popup_dyc_status_message_window_g1_ParamLimits

0x52d7,	// (0x00059c21) popup_dyc_status_message_window_g1

0x52e3,	// (0x00059c2d) popup_dyc_status_message_window_t1_ParamLimits

0x52e3,	// (0x00059c2d) popup_dyc_status_message_window_t1

0x52f5,	// (0x00059c3f) popup_dyc_status_message_window_t2_ParamLimits

0x52f5,	// (0x00059c3f) popup_dyc_status_message_window_t2

0x5307,	// (0x00059c51) popup_dyc_status_message_window_t3_ParamLimits

0x5307,	// (0x00059c51) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00063bb8) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00063bb8) popup_dyc_status_message_window_t

0x1e71,	// (0x000567bb) bg_heading_pane_cp01

0xc709,	// (0x00061053) heading_loc_req_pane_g1

0xc711,	// (0x0006105b) heading_loc_req_pane_g2

0xc719,	// (0x00061063) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00063bbf) heading_loc_req_pane_g

0xc721,	// (0x0006106b) heading_loc_req_pane_t1

0xc741,	// (0x0006108b) bg_popup_sub_pane_cp01_ParamLimits

0xc741,	// (0x0006108b) bg_popup_sub_pane_cp01

0xc74f,	// (0x00061099) popup_cale_events_window_g1_ParamLimits

0xc74f,	// (0x00061099) popup_cale_events_window_g1

0xc76f,	// (0x000610b9) popup_cale_events_window_g2_ParamLimits

0xc76f,	// (0x000610b9) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00063be1) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00063be1) popup_cale_events_window_g

0xc78f,	// (0x000610d9) popup_cale_events_window_t1_ParamLimits

0xc78f,	// (0x000610d9) popup_cale_events_window_t1

0xc7a1,	// (0x000610eb) popup_cale_events_window_t2_ParamLimits

0xc7a1,	// (0x000610eb) popup_cale_events_window_t2

0xc7df,	// (0x00061129) popup_cale_events_window_t3_ParamLimits

0xc7df,	// (0x00061129) popup_cale_events_window_t3

0xc819,	// (0x00061163) popup_cale_events_window_t4_ParamLimits

0xc819,	// (0x00061163) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00063be6) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00063be6) popup_cale_events_window_t

0x5331,	// (0x00059c7b) call_type_pane

0xc84f,	// (0x00061199) popup_call_status_window_g1

0x533d,	// (0x00059c87) popup_call_status_window_g2

0x5349,	// (0x00059c93) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00063bef) popup_call_status_window_g

0xc85d,	// (0x000611a7) call_type_pane_g1

0xc866,	// (0x000611b0) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00063bf6) call_type_pane_g

0x1e71,	// (0x000567bb) bg_popup_sub_pane_cp02

0xc86f,	// (0x000611b9) listscroll_popup_wml_pane

0xc877,	// (0x000611c1) list_wml_pane

0xc881,	// (0x000611cb) scroll_pane_cp013

0xc88c,	// (0x000611d6) list_single_graphic_popup_wml_pane_ParamLimits

0xc88c,	// (0x000611d6) list_single_graphic_popup_wml_pane

0x357e,	// (0x00057ec8) list_single_graphic_popup_wml_pane_g1

0xc8a0,	// (0x000611ea) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00063bfb) list_single_graphic_popup_wml_pane_g

0xc8a8,	// (0x000611f2) list_single_graphic_popup_wml_pane_t1

0xc8be,	// (0x00061208) aid_call_pane

0x355e,	// (0x00057ea8) popup_clock_analogue_window_g1

0x355e,	// (0x00057ea8) popup_clock_analogue_window_g2

0x5355,	// (0x00059c9f) popup_clock_analogue_window_g3

0x5355,	// (0x00059c9f) popup_clock_analogue_window_g4

0x357e,	// (0x00057ec8) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00063c00) popup_clock_analogue_window_g

0x535d,	// (0x00059ca7) popup_clock_analogue_window_t1

0x536b,	// (0x00059cb5) clock_digital_number_pane_ParamLimits

0x536b,	// (0x00059cb5) clock_digital_number_pane

0x5377,	// (0x00059cc1) clock_digital_number_pane_cp02_ParamLimits

0x5377,	// (0x00059cc1) clock_digital_number_pane_cp02

0x5383,	// (0x00059ccd) clock_digital_number_pane_cp03_ParamLimits

0x5383,	// (0x00059ccd) clock_digital_number_pane_cp03

0x538f,	// (0x00059cd9) clock_digital_number_pane_cp04_ParamLimits

0x538f,	// (0x00059cd9) clock_digital_number_pane_cp04

0x539b,	// (0x00059ce5) clock_digital_separator_pane_ParamLimits

0x539b,	// (0x00059ce5) clock_digital_separator_pane

0x53a7,	// (0x00059cf1) popup_clock_digital_window_t1

0x357e,	// (0x00057ec8) clock_digital_number_pane_g1

0x357e,	// (0x00057ec8) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00063b80) clock_digital_number_pane_g

0x357e,	// (0x00057ec8) clock_digital_separator_pane_g1

0x357e,	// (0x00057ec8) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00063b80) clock_digital_separator_pane_g

0x1e71,	// (0x000567bb) bg_popup_window_pane_cp04

0xc8c6,	// (0x00061210) heading_pane_cp03

0xc1d7,	// (0x00060b21) listscroll_popup_gms_pane

0x1e71,	// (0x000567bb) grid_large_graphic_popup_pane

0xc8cf,	// (0x00061219) listscroll_popup_gms_pane_g1

0xc8d8,	// (0x00061222) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00063c0b) listscroll_popup_gms_pane_g

0xc8e1,	// (0x0006122b) scroll_pane_cp014

0x35e1,	// (0x00057f2b) cell_large_graphic_popup_pane_ParamLimits

0x35e1,	// (0x00057f2b) cell_large_graphic_popup_pane

0x35ef,	// (0x00057f39) cell_large_graphic_popup_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) cell_large_graphic_popup_pane_g1

0xc8ea,	// (0x00061234) cell_large_graphic_popup_pane_g2_ParamLimits

0xc8ea,	// (0x00061234) cell_large_graphic_popup_pane_g2

0xc8f8,	// (0x00061242) cell_large_graphic_popup_pane_g3_ParamLimits

0xc8f8,	// (0x00061242) cell_large_graphic_popup_pane_g3

0xc906,	// (0x00061250) cell_large_graphic_popup_pane_g4_ParamLimits

0xc906,	// (0x00061250) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00063c10) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00063c10) cell_large_graphic_popup_pane_g

0x1e71,	// (0x000567bb) grid_highlight_pane_cp010

0x357e,	// (0x00057ec8) bg_popup_call_pane_g1

0xc917,	// (0x00061261) list_single_graphic_popup_conf_pane_ParamLimits

0xc917,	// (0x00061261) list_single_graphic_popup_conf_pane

0xc929,	// (0x00061273) list_highlight_pane_cp01

0xc932,	// (0x0006127c) list_single_graphic_popup_conf_pane_g1

0xc93a,	// (0x00061284) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00063c19) list_single_graphic_popup_conf_pane_g

0xc942,	// (0x0006128c) list_single_graphic_popup_conf_pane_t1

0xc950,	// (0x0006129a) linegrid_cams_pane_g1

0x53c4,	// (0x00059d0e) linegrid_cams_pane_g2

0xc1bd,	// (0x00060b07) linegrid_cams_pane_g3

0xc959,	// (0x000612a3) linegrid_cams_pane_g4

0x53cd,	// (0x00059d17) linegrid_cams_pane_g5

0x53d6,	// (0x00059d20) linegrid_cams_pane_g6

0xc1c6,	// (0x00060b10) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00063c1e) linegrid_cams_pane_g

0xc962,	// (0x000612ac) popup_clock_analogue_window

0xc962,	// (0x000612ac) popup_clock_digital_window

0x1e71,	// (0x000567bb) popup_phob_thumbnail_window

0x357e,	// (0x00057ec8) call_video_uplink_pane_g1

0xc96b,	// (0x000612b5) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00063c2d) call_video_uplink_pane_g

0xc973,	// (0x000612bd) video_uplink_pane

0xc97b,	// (0x000612c5) mce_image_pane_g1

0x53e1,	// (0x00059d2b) mce_image_pane_g2

0x53eb,	// (0x00059d35) mce_image_pane_g3

0x53f5,	// (0x00059d3f) mce_image_pane_g4

0x53fd,	// (0x00059d47) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00063c32) mce_image_pane_g

0xc985,	// (0x000612cf) control_top_pane_stacon_cp01_ParamLimits

0xc985,	// (0x000612cf) control_top_pane_stacon_cp01

0xc999,	// (0x000612e3) uni_indicator_pane_stacon_cp01_ParamLimits

0xc999,	// (0x000612e3) uni_indicator_pane_stacon_cp01

0xc9aa,	// (0x000612f4) bg_popup_sub_pane_cp03

0x5405,	// (0x00059d4f) chi_dic_find_pane

0x540d,	// (0x00059d57) listscroll_chi_dic_pane

0x5416,	// (0x00059d60) main_pane_chidic_g1

0x5429,	// (0x00059d73) chi_dic_find_pane_t1

0xc9b4,	// (0x000612fe) find_chidic_pane

0xc9bd,	// (0x00061307) chi_dic_list_pane_ParamLimits

0xc9bd,	// (0x00061307) chi_dic_list_pane

0xc9ce,	// (0x00061318) scroll_pane_cp020

0x5437,	// (0x00059d81) find_chidic_pane_t1

0x1e71,	// (0x000567bb) input_focus_pane_cp06

0x5446,	// (0x00059d90) list_chi_dic_pane_ParamLimits

0x5446,	// (0x00059d90) list_chi_dic_pane

0x545b,	// (0x00059da5) list_chi_dic_pane_t1_ParamLimits

0x545b,	// (0x00059da5) list_chi_dic_pane_t1

0x1e71,	// (0x000567bb) list_highlight_pane_cp020

0xc9d6,	// (0x00061320) bg_cale_heading_pane_g1

0x546e,	// (0x00059db8) bg_cale_heading_pane_g2

0x5476,	// (0x00059dc0) bg_cale_heading_pane_g3

0x547e,	// (0x00059dc8) bg_cale_heading_pane_g4

0x5488,	// (0x00059dd2) bg_cale_heading_pane_g5

0x5492,	// (0x00059ddc) bg_cale_heading_pane_g6

0x549a,	// (0x00059de4) bg_cale_heading_pane_g7

0x54a2,	// (0x00059dec) bg_cale_heading_pane_g8

0x54ac,	// (0x00059df6) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00063c3d) bg_cale_heading_pane_g

0xc9d6,	// (0x00061320) bg_cale_side_pane_g1

0x54b6,	// (0x00059e00) bg_cale_side_pane_g2

0x54c0,	// (0x00059e0a) bg_cale_side_pane_g3

0x54ca,	// (0x00059e14) bg_cale_side_pane_g4

0x54d4,	// (0x00059e1e) bg_cale_side_pane_g5

0x54de,	// (0x00059e28) bg_cale_side_pane_g6

0x54e8,	// (0x00059e32) bg_cale_side_pane_g7

0x54f2,	// (0x00059e3c) bg_cale_side_pane_g8

0x54fa,	// (0x00059e44) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00063c50) bg_cale_side_pane_g

0x5502,	// (0x00059e4c) popup_call_status_window_ParamLimits

0x5502,	// (0x00059e4c) popup_call_status_window

0xc9de,	// (0x00061328) stacon_top_pane

0xc9e6,	// (0x00061330) status_pane_ParamLimits

0xc9e6,	// (0x00061330) status_pane

0xc9fb,	// (0x00061345) status_small_pane

0xca03,	// (0x0006134d) control_pane

0x1e71,	// (0x000567bb) stacon_bottom_pane

0xca0b,	// (0x00061355) list_single_mce_smart_pane_t1_ParamLimits

0xca0b,	// (0x00061355) list_single_mce_smart_pane_t1

0xca1e,	// (0x00061368) list_single_mce_smart_pane_t2_ParamLimits

0xca1e,	// (0x00061368) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00063c63) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00063c63) list_single_mce_smart_pane_t

0x550e,	// (0x00059e58) compass_pane

0x5519,	// (0x00059e63) main_location2_pane_t1

0x552f,	// (0x00059e79) main_location2_pane_t2

0x5545,	// (0x00059e8f) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00063c68) main_location2_pane_t

0xca3d,	// (0x00061387) compass_pane_g1_ParamLimits

0xca3d,	// (0x00061387) compass_pane_g1

0x5593,	// (0x00059edd) compass_pane_t1

0x55a2,	// (0x00059eec) compass_pane_t2

0x0005,

0xf327,	// (0x00063c71) compass_pane_t

0x55ed,	// (0x00059f37) text_secondary_cp61

0xca51,	// (0x0006139b) navi_pane_cams_g5

0xca74,	// (0x000613be) navi_pane_im_t1

0xca82,	// (0x000613cc) navi_pane_mp_g1_ParamLimits

0xca82,	// (0x000613cc) navi_pane_mp_g1

0xca96,	// (0x000613e0) navi_pane_mp_g2_ParamLimits

0xca96,	// (0x000613e0) navi_pane_mp_g2

0xcaa2,	// (0x000613ec) navi_pane_mp_g3_ParamLimits

0xcaa2,	// (0x000613ec) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00063c85) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00063c85) navi_pane_mp_g

0xcaae,	// (0x000613f8) navi_pane_mp_t1

0xcabc,	// (0x00061406) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00063c8c) navi_pane_mp_t

0xcaf8,	// (0x00061442) navi_pane_vt_g1

0xcaae,	// (0x000613f8) navi_pane_vt_t1

0xcb00,	// (0x0006144a) navi_slider_pane

0xc1d7,	// (0x00060b21) zooming_pane

0xcb08,	// (0x00061452) navi_slider_pane_g1

0x5722,	// (0x0005a06c) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00063c93) navi_slider_pane_g

0xcb2c,	// (0x00061476) aid_levels_zoom

0xcb34,	// (0x0006147e) zooming_pane_g1

0xcb3c,	// (0x00061486) zooming_pane_g2

0xcb3c,	// (0x00061486) zooming_pane_g3

0x0002,

0xf358,	// (0x00063ca2) zooming_pane_g

0xcb44,	// (0x0006148e) level_10_zoom

0xcb4d,	// (0x00061497) level_11_zoom

0xcb56,	// (0x000614a0) level_1_zoom

0xcb5f,	// (0x000614a9) level_2_zoom

0xcb68,	// (0x000614b2) level_3_zoom

0xcb71,	// (0x000614bb) level_4_zoom

0xcb7a,	// (0x000614c4) level_5_zoom

0xcb83,	// (0x000614cd) level_6_zoom

0xcb8c,	// (0x000614d6) level_7_zoom

0xcb95,	// (0x000614df) level_8_zoom

0xcb9e,	// (0x000614e8) level_9_zoom

0xcbaf,	// (0x000614f9) popup_phob_thumbnail_window_g1

0xcbb7,	// (0x00061501) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00063ca9) popup_phob_thumbnail_window_g

0x602e,	// (0x0005a978) level_1_location

0x6036,	// (0x0005a980) level_2_location

0x603e,	// (0x0005a988) level_3_location

0x6048,	// (0x0005a992) level_4_location

0xc1d7,	// (0x00060b21) level_5_location

0x5734,	// (0x0005a07e) mce_icon_pane_g1

0x573c,	// (0x0005a086) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00063cae) mce_icon_pane_g

0x5744,	// (0x0005a08e) main_mup_pane_g1_ParamLimits

0x5744,	// (0x0005a08e) main_mup_pane_g1

0x360b,	// (0x00057f55) main_mup_pane_g2_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g2

0x360b,	// (0x00057f55) main_mup_pane_g3_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g3

0x360b,	// (0x00057f55) main_mup_pane_g4_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g4

0x360b,	// (0x00057f55) main_mup_pane_g5_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g5

0x360b,	// (0x00057f55) main_mup_pane_g6_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g6

0x360b,	// (0x00057f55) main_mup_pane_g7_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g7

0x360b,	// (0x00057f55) main_mup_pane_g8_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g8

0x360b,	// (0x00057f55) main_mup_pane_g9_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g9

0x360b,	// (0x00057f55) main_mup_pane_g10_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g10

0x360b,	// (0x00057f55) main_mup_pane_g11_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g11

0x35fd,	// (0x00057f47) main_mup_pane_g12_ParamLimits

0x35fd,	// (0x00057f47) main_mup_pane_g12

0x360b,	// (0x00057f55) main_mup_pane_g13_ParamLimits

0x360b,	// (0x00057f55) main_mup_pane_g13

0x000c,

0xf369,	// (0x00063cb3) main_mup_pane_g_ParamLimits

0xf369,	// (0x00063cb3) main_mup_pane_g

0x3619,	// (0x00057f63) main_mup_pane_t1_ParamLimits

0x3619,	// (0x00057f63) main_mup_pane_t1

0x3619,	// (0x00057f63) main_mup_pane_t2_ParamLimits

0x3619,	// (0x00057f63) main_mup_pane_t2

0x3619,	// (0x00057f63) main_mup_pane_t3_ParamLimits

0x3619,	// (0x00057f63) main_mup_pane_t3

0xbff9,	// (0x00060943) main_mup_pane_t4_ParamLimits

0xbff9,	// (0x00060943) main_mup_pane_t4

0xbff9,	// (0x00060943) main_mup_pane_t5_ParamLimits

0xbff9,	// (0x00060943) main_mup_pane_t5

0xbfe5,	// (0x0006092f) main_mup_pane_t6_ParamLimits

0xbfe5,	// (0x0006092f) main_mup_pane_t6

0x0005,

0xf384,	// (0x00063cce) main_mup_pane_t_ParamLimits

0xf384,	// (0x00063cce) main_mup_pane_t

0x3588,	// (0x00057ed2) mup_progress_pane_ParamLimits

0x3588,	// (0x00057ed2) mup_progress_pane

0xdbc7,	// (0x00062511) mup_visualizer_pane_ParamLimits

0xdbc7,	// (0x00062511) mup_visualizer_pane

0xdbc7,	// (0x00062511) mup_volume_pane_ParamLimits

0xdbc7,	// (0x00062511) mup_volume_pane

0x35fd,	// (0x00057f47) mup_visualizer_pane_g1_ParamLimits

0x35fd,	// (0x00057f47) mup_visualizer_pane_g1

0xcbbf,	// (0x00061509) mup_visualizer_pane_g2_ParamLimits

0xcbbf,	// (0x00061509) mup_visualizer_pane_g2

0x35ef,	// (0x00057f39) mup_visualizer_pane_g3_ParamLimits

0x35ef,	// (0x00057f39) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00063cdb) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00063cdb) mup_visualizer_pane_g

0xbfdb,	// (0x00060925) mup_volume_pane_g1

0xbfdb,	// (0x00060925) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000639f9) mup_volume_pane_g

0xbfdb,	// (0x00060925) mup_progress_pane_g1

0xbfdb,	// (0x00060925) mup_progress_pane_g2

0xbfdb,	// (0x00060925) mup_progress_pane_g3

0x0002,

0xf398,	// (0x00063ce2) mup_progress_pane_g

0x1e71,	// (0x000567bb) bg_popup_window_pane_cp05

0xcbcd,	// (0x00061517) heading_pane_cp02_ParamLimits

0xcbcd,	// (0x00061517) heading_pane_cp02

0xcbe9,	// (0x00061533) list_popup_blid_pane

0xcbf1,	// (0x0006153b) list_blid_sat_info_pane_ParamLimits

0xcbf1,	// (0x0006153b) list_blid_sat_info_pane

0xcc04,	// (0x0006154e) list_blid_sat_info_pane_g1

0xcc0c,	// (0x00061556) list_blid_sat_info_pane_t1

0x5853,	// (0x0005a19d) mup_equalizer_pane_ParamLimits

0x5853,	// (0x0005a19d) mup_equalizer_pane

0x5874,	// (0x0005a1be) mup_equalizer_pane_cp1_ParamLimits

0x5874,	// (0x0005a1be) mup_equalizer_pane_cp1

0x5895,	// (0x0005a1df) mup_equalizer_pane_cp2_ParamLimits

0x5895,	// (0x0005a1df) mup_equalizer_pane_cp2

0x58b6,	// (0x0005a200) mup_equalizer_pane_cp3_ParamLimits

0x58b6,	// (0x0005a200) mup_equalizer_pane_cp3

0x58db,	// (0x0005a225) mup_equalizer_pane_cp4_ParamLimits

0x58db,	// (0x0005a225) mup_equalizer_pane_cp4

0x5900,	// (0x0005a24a) mup_equalizer_pane_cp5

0x5918,	// (0x0005a262) mup_equalizer_pane_cp6

0x5930,	// (0x0005a27a) mup_equalizer_pane_cp7

0xdddb,	// (0x00062725) bg_popup_call_poc_act_pane_g9

0xdde3,	// (0x0006272d) bg_popup_call_poc_act_pane_g10

0xddeb,	// (0x00062735) bg_popup_call_poc_act_pane_g11

0x000a,

0x3566,	// (0x00057eb0) mup_scale_pane

0x357e,	// (0x00057ec8) mup_scale_pane_g1

0xcc1a,	// (0x00061564) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x00063cfe) mup_scale_pane_g

0xcc3e,	// (0x00061588) msg_data_pane

0xcc46,	// (0x00061590) scroll_pane_cp017

0x595a,	// (0x0005a2a4) bg_list_pane_cp04_ParamLimits

0x595a,	// (0x0005a2a4) bg_list_pane_cp04

0xcc4e,	// (0x00061598) msg_data_pane_g1

0x5978,	// (0x0005a2c2) msg_data_pane_g2

0x5982,	// (0x0005a2cc) msg_data_pane_g3

0x598c,	// (0x0005a2d6) msg_data_pane_g4

0x5994,	// (0x0005a2de) msg_data_pane_g5

0x599c,	// (0x0005a2e6) msg_data_pane_g6

0x59a4,	// (0x0005a2ee) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x00063d0d) msg_data_pane_g

0x59ac,	// (0x0005a2f6) msg_text_pane_ParamLimits

0x59ac,	// (0x0005a2f6) msg_text_pane

0x59e5,	// (0x0005a32f) qrid_highlight_pane_cp011_ParamLimits

0x59e5,	// (0x0005a32f) qrid_highlight_pane_cp011

0x1e71,	// (0x000567bb) msg_body_pane

0x3566,	// (0x00057eb0) msg_header_pane

0xd657,	// (0x00061fa1) input_focus_pane_cp07

0xd66c,	// (0x00061fb6) msg_header_pane_t1_ParamLimits

0xd66c,	// (0x00061fb6) msg_header_pane_t1

0xd688,	// (0x00061fd2) msg_header_pane_t2_ParamLimits

0xd688,	// (0x00061fd2) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x00063d21) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x00063d21) msg_header_pane_t

0xcc76,	// (0x000615c0) msg_body_pane_g1

0xd6a8,	// (0x00061ff2) msg_body_pane_t1_ParamLimits

0xd6a8,	// (0x00061ff2) msg_body_pane_t1

0xd6d9,	// (0x00062023) msg_body_pane_t2_ParamLimits

0xd6d9,	// (0x00062023) msg_body_pane_t2

0xd6eb,	// (0x00062035) msg_body_pane_t3_ParamLimits

0xd6eb,	// (0x00062035) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00063d26) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00063d26) msg_body_pane_t

0x5a5b,	// (0x0005a3a5) main_viewer_pane_g1_ParamLimits

0x5a5b,	// (0x0005a3a5) main_viewer_pane_g1

0x5a67,	// (0x0005a3b1) main_viewer_pane_g2_ParamLimits

0x5a67,	// (0x0005a3b1) main_viewer_pane_g2

0x5a73,	// (0x0005a3bd) main_viewer_pane_g3_ParamLimits

0x5a73,	// (0x0005a3bd) main_viewer_pane_g3

0x5a84,	// (0x0005a3ce) main_viewer_pane_g4_ParamLimits

0x5a84,	// (0x0005a3ce) main_viewer_pane_g4

0x5a95,	// (0x0005a3df) main_viewer_pane_g5_ParamLimits

0x5a95,	// (0x0005a3df) main_viewer_pane_g5

0x5a95,	// (0x0005a3df) main_viewer_pane_g7_ParamLimits

0x5a95,	// (0x0005a3df) main_viewer_pane_g7

0x5aa7,	// (0x0005a3f1) main_viewer_pane_g8_ParamLimits

0x5aa7,	// (0x0005a3f1) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00063d36) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00063d36) main_viewer_pane_g

0xcc7e,	// (0x000615c8) viewer_content_pane_ParamLimits

0xcc7e,	// (0x000615c8) viewer_content_pane

0x5adf,	// (0x0005a429) main_postcard_pane_g1_ParamLimits

0x5adf,	// (0x0005a429) main_postcard_pane_g1

0x5aed,	// (0x0005a437) main_postcard_pane_g2_ParamLimits

0x5aed,	// (0x0005a437) main_postcard_pane_g2

0x5afb,	// (0x0005a445) main_postcard_pane_g3_ParamLimits

0x5afb,	// (0x0005a445) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00063d47) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00063d47) main_postcard_pane_g

0x5b0b,	// (0x0005a455) main_postcard_pane_g4

0xdf21,	// (0x0006286b) smil_status_volume_pane_g2

0x5b37,	// (0x0005a481) postcard_pane_ParamLimits

0x5b37,	// (0x0005a481) postcard_pane

0xc84f,	// (0x00061199) postcard_pane_g1_ParamLimits

0xc84f,	// (0x00061199) postcard_pane_g1

0x5b71,	// (0x0005a4bb) postcard_pane_g2_ParamLimits

0x5b71,	// (0x0005a4bb) postcard_pane_g2

0x5b7d,	// (0x0005a4c7) postcard_pane_g3_ParamLimits

0x5b7d,	// (0x0005a4c7) postcard_pane_g3

0xcc8c,	// (0x000615d6) postcard_pane_g4_ParamLimits

0xcc8c,	// (0x000615d6) postcard_pane_g4

0x5b89,	// (0x0005a4d3) postcard_pane_g5_ParamLimits

0x5b89,	// (0x0005a4d3) postcard_pane_g5

0x5b95,	// (0x0005a4df) postcard_pane_g6_ParamLimits

0x5b95,	// (0x0005a4df) postcard_pane_g6

0xcc9a,	// (0x000615e4) postcard_pane_g7_ParamLimits

0xcc9a,	// (0x000615e4) postcard_pane_g7

0x0006,

0xf40a,	// (0x00063d54) postcard_pane_g_ParamLimits

0xf40a,	// (0x00063d54) postcard_pane_g

0x5ba3,	// (0x0005a4ed) main_mp2_pane_g1_ParamLimits

0x5ba3,	// (0x0005a4ed) main_mp2_pane_g1

0x5bb1,	// (0x0005a4fb) main_mp2_pane_g2_ParamLimits

0x5bb1,	// (0x0005a4fb) main_mp2_pane_g2

0x5bbd,	// (0x0005a507) main_mp2_pane_g3_ParamLimits

0x5bbd,	// (0x0005a507) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00063d63) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00063d63) main_mp2_pane_g

0x5bc9,	// (0x0005a513) main_mp2_pane_t1_ParamLimits

0x5bc9,	// (0x0005a513) main_mp2_pane_t1

0x5be0,	// (0x0005a52a) main_mp2_pane_t2_ParamLimits

0x5be0,	// (0x0005a52a) main_mp2_pane_t2

0x5bf4,	// (0x0005a53e) main_mp2_pane_t3_ParamLimits

0x5bf4,	// (0x0005a53e) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00063d6a) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00063d6a) main_mp2_pane_t

0x3588,	// (0x00057ed2) pec_content_pane_ParamLimits

0x3588,	// (0x00057ed2) pec_content_pane

0x10b1,	// (0x000559fb) scroll_pane_cp015

0xcca8,	// (0x000615f2) pec_attribute_pane_ParamLimits

0xcca8,	// (0x000615f2) pec_attribute_pane

0x35ef,	// (0x00057f39) pec_content_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) pec_content_pane_g1

0xccb6,	// (0x00061600) pec_content_pane_t1_ParamLimits

0xccb6,	// (0x00061600) pec_content_pane_t1

0xccca,	// (0x00061614) pec_content_pane_t2_ParamLimits

0xccca,	// (0x00061614) pec_content_pane_t2

0x0001,

0xf427,	// (0x00063d71) pec_content_pane_t_ParamLimits

0xf427,	// (0x00063d71) pec_content_pane_t

0x35e1,	// (0x00057f2b) list_single_graphic_pane_cp01_ParamLimits

0x35e1,	// (0x00057f2b) list_single_graphic_pane_cp01

0x3566,	// (0x00057eb0) bg_popup_sub_pane_cp04

0xccde,	// (0x00061628) popup_mup_playback_window_g1

0xccea,	// (0x00061634) popup_mup_playback_window_t1

0xccff,	// (0x00061649) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00063d76) popup_mup_playback_window_t

0xcd36,	// (0x00061680) main_image_pane_g1_ParamLimits

0xcd36,	// (0x00061680) main_image_pane_g1

0xcd79,	// (0x000616c3) scroll_pane_cp018_ParamLimits

0xcd79,	// (0x000616c3) scroll_pane_cp018

0xcd91,	// (0x000616db) scroll_pane_cp016_ParamLimits

0xcd91,	// (0x000616db) scroll_pane_cp016

0x5c77,	// (0x0005a5c1) smil2_image_pane_ParamLimits

0x5c77,	// (0x0005a5c1) smil2_image_pane

0x5cad,	// (0x0005a5f7) smil2_root_pane_ParamLimits

0x5cad,	// (0x0005a5f7) smil2_root_pane

0x5cd9,	// (0x0005a623) smil2_text_pane_ParamLimits

0x5cd9,	// (0x0005a623) smil2_text_pane

0x10b1,	// (0x000559fb) bg_list_pane_cp06

0x10b1,	// (0x000559fb) grid_radio_pane

0x1e71,	// (0x000567bb) bg_popup_window_pane_cp06

0xc731,	// (0x0006107b) main_fmradio_pane_t1

0xddf3,	// (0x0006273d) heading_pane_cp04

0xc731,	// (0x0006107b) main_fmradio_pane_t2

0xddfb,	// (0x00062745) popup_cale_lunar_info_window_g1

0xc731,	// (0x0006107b) main_fmradio_pane_t3

0xde03,	// (0x0006274d) popup_cale_lunar_info_window_g2

0xc731,	// (0x0006107b) main_fmradio_pane_t4

0x0001,

0xc731,	// (0x0006107b) main_fmradio_pane_t5

0x0004,

0xf501,	// (0x00063e4b) popup_cale_lunar_info_window_g

0xf28c,	// (0x00063bd6) main_fmradio_pane_t

0x10b1,	// (0x000559fb) wait_bar_pane_cp03

0x35e1,	// (0x00057f2b) cell_fmradio_pane_ParamLimits

0x35e1,	// (0x00057f2b) cell_fmradio_pane

0x35ef,	// (0x00057f39) cell_fmradio_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) cell_fmradio_pane_g1

0x10b1,	// (0x000559fb) grid_highlight_pane_cp011

0xcdc5,	// (0x0006170f) poc_content_pane_ParamLimits

0xcdc5,	// (0x0006170f) poc_content_pane

0xcdd7,	// (0x00061721) scroll_pane_cp019

0x5d19,	// (0x0005a663) popup_call_poc_act_window_ParamLimits

0x5d19,	// (0x0005a663) popup_call_poc_act_window

0x5d26,	// (0x0005a670) popup_call_poc_inact_window_ParamLimits

0x5d26,	// (0x0005a670) popup_call_poc_inact_window

0xf4d8,	// (0x00063e22) bg_popup_call_poc_act_pane_g

0xdd6b,	// (0x000626b5) bg_popup_call_poc_inact_pane_g1

0xdd73,	// (0x000626bd) bg_popup_call_poc_inact_pane_g2

0xcddf,	// (0x00061729) popup_call_poc_act_window_g2

0xdd7b,	// (0x000626c5) bg_popup_call_poc_inact_pane_g3

0xdd83,	// (0x000626cd) bg_popup_call_poc_inact_pane_g4

0xdd8b,	// (0x000626d5) bg_popup_call_poc_inact_pane_g5

0xcde7,	// (0x00061731) popup_call_poc_act_window_t1_ParamLimits

0xcde7,	// (0x00061731) popup_call_poc_act_window_t1

0xce0f,	// (0x00061759) popup_call_poc_act_window_t2_ParamLimits

0xce0f,	// (0x00061759) popup_call_poc_act_window_t2

0xce37,	// (0x00061781) popup_call_poc_act_window_t3_ParamLimits

0xce37,	// (0x00061781) popup_call_poc_act_window_t3

0xce5f,	// (0x000617a9) popup_call_poc_act_window_t4_ParamLimits

0xce5f,	// (0x000617a9) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00063d8b) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00063d8b) popup_call_poc_act_window_t

0xdd93,	// (0x000626dd) bg_popup_call_poc_inact_pane_g6

0xdd9b,	// (0x000626e5) bg_popup_call_poc_inact_pane_g7

0xdda3,	// (0x000626ed) bg_popup_call_poc_inact_pane_g8

0xce71,	// (0x000617bb) popup_call_poc_inact_window_g2

0xddab,	// (0x000626f5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c5,	// (0x00063e0f) bg_popup_call_poc_inact_pane_g

0xce79,	// (0x000617c3) popup_call_poc_inact_window_t1_ParamLimits

0xce79,	// (0x000617c3) popup_call_poc_inact_window_t1

0xce8e,	// (0x000617d8) popup_call_poc_inact_window_t2_ParamLimits

0xce8e,	// (0x000617d8) popup_call_poc_inact_window_t2

0xcea3,	// (0x000617ed) popup_call_poc_inact_window_t3_ParamLimits

0xcea3,	// (0x000617ed) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x00063d94) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x00063d94) popup_call_poc_inact_window_t

0xde99,	// (0x000627e3) context_pane_ParamLimits

0x636b,	// (0x0005acb5) signal_pane_ParamLimits

0xc1d7,	// (0x00060b21) main_call2_pane

0x62d7,	// (0x0005ac21) popup_phob_thumbnail2_window_ParamLimits

0x62d7,	// (0x0005ac21) popup_phob_thumbnail2_window

0x5a09,	// (0x0005a353) aid_hotspot_pointer_arrow_pane

0x5a11,	// (0x0005a35b) aid_hotspot_pointer_hand_pane

0x5ff6,	// (0x0005a940) phob_pre_status_pane_g5

0x35e1,	// (0x00057f2b) cams_zoom_pane_ParamLimits

0x35e1,	// (0x00057f2b) image_vga_pane_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g1_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g3_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g4_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g5_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g6_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00063aca) main_camera_pane_g_ParamLimits

0xbff9,	// (0x00060943) main_camera_pane_t1_ParamLimits

0xbff9,	// (0x00060943) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00063adb) main_camera_pane_t_ParamLimits

0x3566,	// (0x00057eb0) bg_popup_preview_window_pane_cp01_ParamLimits

0x3566,	// (0x00057eb0) bg_popup_preview_window_pane_cp01

0xceb8,	// (0x00061802) popup_phob_thumbnail2_window_g1_ParamLimits

0xceb8,	// (0x00061802) popup_phob_thumbnail2_window_g1

0x1e71,	// (0x000567bb) call2_cli_visual_pane

0x5d42,	// (0x0005a68c) popup_call2_audio_conf_window_ParamLimits

0x5d42,	// (0x0005a68c) popup_call2_audio_conf_window

0x5d5b,	// (0x0005a6a5) popup_call2_audio_first_window_ParamLimits

0x5d5b,	// (0x0005a6a5) popup_call2_audio_first_window

0x5df9,	// (0x0005a743) popup_call2_audio_in_window_ParamLimits

0x5df9,	// (0x0005a743) popup_call2_audio_in_window

0x5e3d,	// (0x0005a787) popup_call2_audio_out_window_ParamLimits

0x5e3d,	// (0x0005a787) popup_call2_audio_out_window

0x5ea7,	// (0x0005a7f1) popup_call2_audio_second_window_ParamLimits

0x5ea7,	// (0x0005a7f1) popup_call2_audio_second_window

0x5f05,	// (0x0005a84f) popup_call2_audio_wait_window_ParamLimits

0x5f05,	// (0x0005a84f) popup_call2_audio_wait_window

0x1e71,	// (0x000567bb) bg_popup_call2_act_pane_cp03

0x3548,	// (0x00057e92) list_conf_pane_cp

0xcec4,	// (0x0006180e) popup_call2_audio_conf_window_t1

0xced2,	// (0x0006181c) list_single_graphic_popup_conf2_pane_ParamLimits

0xced2,	// (0x0006181c) list_single_graphic_popup_conf2_pane

0xc929,	// (0x00061273) list_highlight_pane_cp04

0xcee5,	// (0x0006182f) list_single_graphic_popup_conf2_pane_g1

0xc93a,	// (0x00061284) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00063d9b) list_single_graphic_popup_conf2_pane_g

0xceef,	// (0x00061839) list_single_graphic_popup_conf2_pane_t1

0xcefd,	// (0x00061847) bg_popup_call2_act_pane_cp01_ParamLimits

0xcefd,	// (0x00061847) bg_popup_call2_act_pane_cp01

0xcf87,	// (0x000618d1) call_type_pane_cp05_ParamLimits

0xcf87,	// (0x000618d1) call_type_pane_cp05

0xcfdb,	// (0x00061925) popup_call2_audio_second_window_g1_ParamLimits

0xcfdb,	// (0x00061925) popup_call2_audio_second_window_g1

0xd02f,	// (0x00061979) popup_call2_audio_second_window_g2_ParamLimits

0xd02f,	// (0x00061979) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00063da0) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00063da0) popup_call2_audio_second_window_g

0xd094,	// (0x000619de) popup_call2_audio_second_window_t1_ParamLimits

0xd094,	// (0x000619de) popup_call2_audio_second_window_t1

0xd14f,	// (0x00061a99) popup_call2_audio_second_window_t2_ParamLimits

0xd14f,	// (0x00061a99) popup_call2_audio_second_window_t2

0xd1a2,	// (0x00061aec) popup_call2_audio_second_window_t3_ParamLimits

0xd1a2,	// (0x00061aec) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x00063da7) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x00063da7) popup_call2_audio_second_window_t

0x1e71,	// (0x000567bb) bg_popup_call2_in_pane_cp02

0x1e7b,	// (0x000567c5) call_type_pane_cp04

0x5f44,	// (0x0005a88e) popup_call2_audio_wait_window_g1

0x5f4c,	// (0x0005a896) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x00063db0) popup_call2_audio_wait_window_g

0x1e93,	// (0x000567dd) popup_call2_audio_wait_window_t3

0xd295,	// (0x00061bdf) bg_popup_call2_act_pane_ParamLimits

0xd295,	// (0x00061bdf) bg_popup_call2_act_pane

0xd355,	// (0x00061c9f) call_type_pane_cp03_ParamLimits

0xd355,	// (0x00061c9f) call_type_pane_cp03

0xd3b9,	// (0x00061d03) popup_call2_audio_first_window_g1_ParamLimits

0xd3b9,	// (0x00061d03) popup_call2_audio_first_window_g1

0xd429,	// (0x00061d73) popup_call2_audio_first_window_g2_ParamLimits

0xd429,	// (0x00061d73) popup_call2_audio_first_window_g2

0xc84f,	// (0x00061199) popup_call2_audio_first_window_g3_ParamLimits

0xc84f,	// (0x00061199) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x00063db5) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x00063db5) popup_call2_audio_first_window_g

0xd507,	// (0x00061e51) popup_call2_audio_first_window_t1_ParamLimits

0xd507,	// (0x00061e51) popup_call2_audio_first_window_t1

0xd6fd,	// (0x00062047) popup_call2_audio_first_window_t4_ParamLimits

0xd6fd,	// (0x00062047) popup_call2_audio_first_window_t4

0xd7e0,	// (0x0006212a) popup_call2_audio_first_window_t5_ParamLimits

0xd7e0,	// (0x0006212a) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x00063dc0) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x00063dc0) popup_call2_audio_first_window_t

0x355e,	// (0x00057ea8) bg_popup_call2_act_pane_g1

0xde0d,	// (0x00062757) popup_cale_lunar_info_window_t1

0xde1b,	// (0x00062765) popup_cale_lunar_info_window_t2

0xde29,	// (0x00062773) popup_cale_lunar_info_window_t3

0x1e71,	// (0x000567bb) bg_popup_call2_bubble_pane

0xd8e1,	// (0x0006222b) bg_popup_call2_in_pane_cp01_ParamLimits

0xd8e1,	// (0x0006222b) bg_popup_call2_in_pane_cp01

0x11df,	// (0x00055b29) call_type_pane_cp02

0x5f54,	// (0x0005a89e) popup_call2_audio_out_window_g1_ParamLimits

0x5f54,	// (0x0005a89e) popup_call2_audio_out_window_g1

0xd929,	// (0x00062273) popup_call2_audio_out_window_g2_ParamLimits

0xd929,	// (0x00062273) popup_call2_audio_out_window_g2

0x5f80,	// (0x0005a8ca) popup_call2_audio_out_window_g3_ParamLimits

0x5f80,	// (0x0005a8ca) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x00063dc9) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x00063dc9) popup_call2_audio_out_window_g

0xd960,	// (0x000622aa) popup_call2_audio_out_window_t1_ParamLimits

0xd960,	// (0x000622aa) popup_call2_audio_out_window_t1

0xd9bf,	// (0x00062309) popup_call2_audio_out_window_t2_ParamLimits

0xd9bf,	// (0x00062309) popup_call2_audio_out_window_t2

0xda13,	// (0x0006235d) popup_call2_audio_out_window_t3_ParamLimits

0xda13,	// (0x0006235d) popup_call2_audio_out_window_t3

0xda29,	// (0x00062373) popup_call2_audio_out_window_t4_ParamLimits

0xda29,	// (0x00062373) popup_call2_audio_out_window_t4

0xda3f,	// (0x00062389) popup_call2_audio_out_window_t5_ParamLimits

0xda3f,	// (0x00062389) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x00063dd2) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x00063dd2) popup_call2_audio_out_window_t

0xdaa3,	// (0x000623ed) bg_popup_call2_in_pane_ParamLimits

0xdaa3,	// (0x000623ed) bg_popup_call2_in_pane

0xdaff,	// (0x00062449) popup_call2_audio_in_window_g1_ParamLimits

0xdaff,	// (0x00062449) popup_call2_audio_in_window_g1

0xdb37,	// (0x00062481) popup_call2_audio_in_window_g2_ParamLimits

0xdb37,	// (0x00062481) popup_call2_audio_in_window_g2

0xdb6f,	// (0x000624b9) popup_call2_audio_in_window_g3_ParamLimits

0xdb6f,	// (0x000624b9) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x00063ddf) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x00063ddf) popup_call2_audio_in_window_g

0xdbd5,	// (0x0006251f) popup_call2_audio_in_window_t1_ParamLimits

0xdbd5,	// (0x0006251f) popup_call2_audio_in_window_t1

0xdc55,	// (0x0006259f) popup_call2_audio_in_window_t2_ParamLimits

0xdc55,	// (0x0006259f) popup_call2_audio_in_window_t2

0xdcd5,	// (0x0006261f) popup_call2_audio_in_window_t3_ParamLimits

0xdcd5,	// (0x0006261f) popup_call2_audio_in_window_t3

0xdcef,	// (0x00062639) popup_call2_audio_in_window_t4_ParamLimits

0xdcef,	// (0x00062639) popup_call2_audio_in_window_t4

0xdd01,	// (0x0006264b) popup_call2_audio_in_window_t5_ParamLimits

0xdd01,	// (0x0006264b) popup_call2_audio_in_window_t5

0xdd16,	// (0x00062660) popup_call2_audio_in_window_t6_ParamLimits

0xdd16,	// (0x00062660) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x00063de8) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x00063de8) popup_call2_audio_in_window_t

0x355e,	// (0x00057ea8) bg_popup_call2_in_pane_g1

0xde37,	// (0x00062781) popup_cale_lunar_info_window_t4

0x0003,

0xf506,	// (0x00063e50) popup_cale_lunar_info_window_t

0x3566,	// (0x00057eb0) bg_popup_call2_rect_pane_ParamLimits

0x3566,	// (0x00057eb0) bg_popup_call2_rect_pane

0x1e71,	// (0x000567bb) call2_cli_visual_graphic_pane

0x1e71,	// (0x000567bb) call2_cli_visual_text_pane

0x63a6,	// (0x0005acf0) smil_status_volume_pane_g3

0x0002,

0x357e,	// (0x00057ec8) call2_cli_visual_graphic_pane_g1

0x357e,	// (0x00057ec8) call2_cli_visual_graphic_pane_g2

0x357e,	// (0x00057ec8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x00063df5) call2_cli_visual_graphic_pane_g

0xdd2b,	// (0x00062675) bg_popup_call2_rect_pane_g1

0xc110,	// (0x00060a5a) bg_popup_call2_rect_pane_g2

0xdd33,	// (0x0006267d) bg_popup_call2_rect_pane_g3

0xdd3b,	// (0x00062685) bg_popup_call2_rect_pane_g4

0xdd43,	// (0x0006268d) bg_popup_call2_rect_pane_g5

0xdd4b,	// (0x00062695) bg_popup_call2_rect_pane_g6

0xdd53,	// (0x0006269d) bg_popup_call2_rect_pane_g7

0xdd5b,	// (0x000626a5) bg_popup_call2_rect_pane_g8

0xdd63,	// (0x000626ad) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00063dfc) bg_popup_call2_rect_pane_g

0xdd6b,	// (0x000626b5) bg_popup_call2_bubble_pane_g1

0xdd73,	// (0x000626bd) bg_popup_call2_bubble_pane_g2

0xdd7b,	// (0x000626c5) bg_popup_call2_bubble_pane_g3

0xdd83,	// (0x000626cd) bg_popup_call2_bubble_pane_g4

0xdd8b,	// (0x000626d5) bg_popup_call2_bubble_pane_g5

0xdd93,	// (0x000626dd) bg_popup_call2_bubble_pane_g6

0xdd9b,	// (0x000626e5) bg_popup_call2_bubble_pane_g7

0xdda3,	// (0x000626ed) bg_popup_call2_bubble_pane_g8

0xddab,	// (0x000626f5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00063e0f) bg_popup_call2_bubble_pane_g

0x391a,	// (0x00058264) aid_cale_week_size_cell_pane

0x3566,	// (0x00057eb0) aid_cams_cif_uncrop_pane_ParamLimits

0x3566,	// (0x00057eb0) aid_cams_cif_uncrop_pane

0x35e1,	// (0x00057f2b) aid_cams_size_cell_ParamLimits

0x35e1,	// (0x00057f2b) aid_cams_size_cell

0x35e1,	// (0x00057f2b) grid_cams_pane_ParamLimits

0x35e1,	// (0x00057f2b) linegrid_cams_pane_ParamLimits

0x41ce,	// (0x00058b18) call_video_pane_t1

0x41eb,	// (0x00058b35) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00063b27) call_video_pane_t

0x46a8,	// (0x00058ff2) aid_cale_month_size_cell_pane_ParamLimits

0x46a8,	// (0x00058ff2) aid_cale_month_size_cell_pane

0xf54a,	// (0x00063e94) smil_status_volume_pane_g

0x63b3,	// (0x0005acfd) volume_smil_pane_ParamLimits

0x31ab,	// (0x00057af5) aid_popup2_width_pane

0x3826,	// (0x00058170) cell_qdial_pane_g4_ParamLimits

0x3826,	// (0x00058170) cell_qdial_pane_g4

0x556f,	// (0x00059eb9) aid_blid_cardinal_pane_ParamLimits

0x557f,	// (0x00059ec9) aid_blid_destination_pane_ParamLimits

0x557f,	// (0x00059ec9) aid_blid_destination_pane

0x3566,	// (0x00057eb0) bg_popup_call_poc_act_pane_ParamLimits

0x3566,	// (0x00057eb0) bg_popup_call_poc_act_pane

0x3566,	// (0x00057eb0) bg_popup_call_poc_inact_pane_ParamLimits

0x3566,	// (0x00057eb0) bg_popup_call_poc_inact_pane

0xddb3,	// (0x000626fd) bg_popup_call_poc_act_pane_g1

0xddbb,	// (0x00062705) bg_popup_call_poc_act_pane_g2

0xddc3,	// (0x0006270d) bg_popup_call_poc_act_pane_g3

0xdd83,	// (0x000626cd) bg_popup_call_poc_act_pane_g4

0xdd8b,	// (0x000626d5) bg_popup_call_poc_act_pane_g5

0xddcb,	// (0x00062715) bg_popup_call_poc_act_pane_g6

0xdd9b,	// (0x000626e5) bg_popup_call_poc_act_pane_g7

0xddd3,	// (0x0006271d) bg_popup_call_poc_act_pane_g8

0x1e71,	// (0x000567bb) main_usb_pane

0x61f4,	// (0x0005ab3e) popup_cale_lunar_info_window

0x4503,	// (0x00058e4d) im_reading_pane_t1_ParamLimits

0xc29c,	// (0x00060be6) list_im_pane_ParamLimits

0xc2ad,	// (0x00060bf7) scroll_pane_cp07_ParamLimits

0x1e71,	// (0x000567bb) grid_highlight_pane_cp012

0x3566,	// (0x00057eb0) mup_scale_pane_ParamLimits

0x35fd,	// (0x00057f47) main_usb_pane_g1_ParamLimits

0x35fd,	// (0x00057f47) main_usb_pane_g1

0x35fd,	// (0x00057f47) main_usb_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) main_usb_pane_g2

0x0001,

0xf4ef,	// (0x00063e39) main_usb_pane_g_ParamLimits

0xf4ef,	// (0x00063e39) main_usb_pane_g

0xbff9,	// (0x00060943) main_usb_pane_t1_ParamLimits

0xbff9,	// (0x00060943) main_usb_pane_t1

0xbff9,	// (0x00060943) main_usb_pane_t2_ParamLimits

0xbff9,	// (0x00060943) main_usb_pane_t2

0xbff9,	// (0x00060943) main_usb_pane_t3_ParamLimits

0xbff9,	// (0x00060943) main_usb_pane_t3

0xbff9,	// (0x00060943) main_usb_pane_t4_ParamLimits

0xbff9,	// (0x00060943) main_usb_pane_t4

0xbff9,	// (0x00060943) main_usb_pane_t5_ParamLimits

0xbff9,	// (0x00060943) main_usb_pane_t5

0xbff9,	// (0x00060943) main_usb_pane_t6_ParamLimits

0xbff9,	// (0x00060943) main_usb_pane_t6

0x0005,

0xf4f4,	// (0x00063e3e) main_usb_pane_t_ParamLimits

0x550e,	// (0x00059e58) aid_text_placing

0x5519,	// (0x00059e63) main_location2_pane_t1_ParamLimits

0x552f,	// (0x00059e79) main_location2_pane_t2_ParamLimits

0x5545,	// (0x00059e8f) main_location2_pane_t3_ParamLimits

0x555b,	// (0x00059ea5) main_location2_pane_t4_ParamLimits

0x555b,	// (0x00059ea5) main_location2_pane_t4

0xf31e,	// (0x00063c68) main_location2_pane_t_ParamLimits

0x35a2,	// (0x00057eec) find_pinb_pane_g2_ParamLimits

0x35a2,	// (0x00057eec) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000639df) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000639df) find_pinb_pane_g

0x35ae,	// (0x00057ef8) find_pinb_pane_t1_ParamLimits

0x35c0,	// (0x00057f0a) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000639e4) find_pinb_pane_t_ParamLimits

0x1e71,	// (0x000567bb) main_call3_pane

0x4c5b,	// (0x000595a5) cale_month_day_heading_pane_t1_ParamLimits

0x4cdd,	// (0x00059627) cale_month_day_heading_pane_t2_ParamLimits

0x4d56,	// (0x000596a0) cale_month_day_heading_pane_t3_ParamLimits

0x4dcf,	// (0x00059719) cale_month_day_heading_pane_t4_ParamLimits

0x4e48,	// (0x00059792) cale_month_day_heading_pane_t5_ParamLimits

0x4ec9,	// (0x00059813) cale_month_day_heading_pane_t6_ParamLimits

0x4f52,	// (0x0005989c) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00063b5f) cale_month_day_heading_pane_t_ParamLimits

0xc506,	// (0x00060e50) smil_status_volume_pane

0x5b55,	// (0x0005a49f) postcard_address_pane_ParamLimits

0x5b55,	// (0x0005a49f) postcard_address_pane

0x5b63,	// (0x0005a4ad) postcard_message_pane_ParamLimits

0x5b63,	// (0x0005a4ad) postcard_message_pane

0x5fac,	// (0x0005a8f6) call2_cli_visual_pane_t1_ParamLimits

0x5fac,	// (0x0005a8f6) call2_cli_visual_pane_t1

0xdf4c,	// (0x00062896) postcard_message_pane_t1_ParamLimits

0xdf4c,	// (0x00062896) postcard_message_pane_t1

0xdf34,	// (0x0006287e) postcard_address_pane_t1_ParamLimits

0xdf34,	// (0x0006287e) postcard_address_pane_t1

0x64ea,	// (0x0005ae34) popup_call3_audio_in_window_ParamLimits

0x64ea,	// (0x0005ae34) popup_call3_audio_in_window

0x63c8,	// (0x0005ad12) bg_popup_call3_in_pane_ParamLimits

0x63c8,	// (0x0005ad12) bg_popup_call3_in_pane

0x6430,	// (0x0005ad7a) popup_call3_audio_in_window_g1_ParamLimits

0x6430,	// (0x0005ad7a) popup_call3_audio_in_window_g1

0x6448,	// (0x0005ad92) popup_call3_audio_in_window_g2_ParamLimits

0x6448,	// (0x0005ad92) popup_call3_audio_in_window_g2

0x6460,	// (0x0005adaa) popup_call3_audio_in_window_g3_ParamLimits

0x6460,	// (0x0005adaa) popup_call3_audio_in_window_g3

0x0003,

0xf551,	// (0x00063e9b) popup_call3_audio_in_window_g_ParamLimits

0xf551,	// (0x00063e9b) popup_call3_audio_in_window_g

0x6488,	// (0x0005add2) popup_call3_audio_in_window_t1_ParamLimits

0x6488,	// (0x0005add2) popup_call3_audio_in_window_t1

0x64b0,	// (0x0005adfa) popup_call3_audio_in_window_t2_ParamLimits

0x64b0,	// (0x0005adfa) popup_call3_audio_in_window_t2

0x64d8,	// (0x0005ae22) popup_call3_audio_in_window_t3_ParamLimits

0x64d8,	// (0x0005ae22) popup_call3_audio_in_window_t3

0x0002,

0xf55a,	// (0x00063ea4) popup_call3_audio_in_window_t_ParamLimits

0xf55a,	// (0x00063ea4) popup_call3_audio_in_window_t

0xc1d7,	// (0x00060b21) bg_popup_call3_rect_pane

0xdd2b,	// (0x00062675) bg_popup_call3_rect_pane_g1

0xc110,	// (0x00060a5a) bg_popup_call3_rect_pane_g2

0xdd33,	// (0x0006267d) bg_popup_call3_rect_pane_g3

0xdd3b,	// (0x00062685) bg_popup_call3_rect_pane_g4

0xdd43,	// (0x0006268d) bg_popup_call3_rect_pane_g5

0xdd4b,	// (0x00062695) bg_popup_call3_rect_pane_g6

0xdd53,	// (0x0006269d) bg_popup_call3_rect_pane_g7

0x10b1,	// (0x000559fb) mup_visualizer_osc_pane

0x10b1,	// (0x000559fb) mup_visualizer_spec_pane

0x63e8,	// (0x0005ad32) call3_video_qcif_pane_ParamLimits

0x63e8,	// (0x0005ad32) call3_video_qcif_pane

0x63fa,	// (0x0005ad44) call3_video_qcif_uncrop_pane_ParamLimits

0x63fa,	// (0x0005ad44) call3_video_qcif_uncrop_pane

0x640a,	// (0x0005ad54) call3_video_subqcif_pane_ParamLimits

0x640a,	// (0x0005ad54) call3_video_subqcif_pane

0x641e,	// (0x0005ad68) call3_video_subqcif_uncrop_pane_ParamLimits

0x641e,	// (0x0005ad68) call3_video_subqcif_uncrop_pane

0x6478,	// (0x0005adc2) popup_call3_audio_in_window_g4_ParamLimits

0x6478,	// (0x0005adc2) popup_call3_audio_in_window_g4

0x10b1,	// (0x000559fb) mup_spec_half_pane

0x10b1,	// (0x000559fb) mup_spec_half_pane_cp

0x10b1,	// (0x000559fb) mup_osc_middle_pane

0xbfdb,	// (0x00060925) mup_visualizer_osc_pane_g1

0xdee7,	// (0x00062831) mup_spec_bar_pane_ParamLimits

0xdee7,	// (0x00062831) mup_spec_bar_pane

0xbfdb,	// (0x00060925) mup_spec_bar_pane_g1

0xbfdb,	// (0x00060925) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000639f9) mup_spec_bar_pane_g

0x391a,	// (0x00058264) aid_cale_week_size_cell_pane_ParamLimits

0x3934,	// (0x0005827e) bg_cale_heading_pane_ParamLimits

0x395d,	// (0x000582a7) bg_cale_pane_cp01_ParamLimits

0x397f,	// (0x000582c9) cale_week_corner_pane_ParamLimits

0x399e,	// (0x000582e8) cale_week_day_heading_pane_ParamLimits

0x39cc,	// (0x00058316) cale_week_scroll_pane_g1_ParamLimits

0x39f0,	// (0x0005833a) cale_week_scroll_pane_g2_ParamLimits

0x3a08,	// (0x00058352) cale_week_scroll_pane_g3_ParamLimits

0x3a20,	// (0x0005836a) cale_week_scroll_pane_g4_ParamLimits

0x3a38,	// (0x00058382) cale_week_scroll_pane_g5_ParamLimits

0x3a50,	// (0x0005839a) cale_week_scroll_pane_g6_ParamLimits

0x3a70,	// (0x000583ba) cale_week_scroll_pane_g7_ParamLimits

0x3a90,	// (0x000583da) cale_week_scroll_pane_g8_ParamLimits

0x3ab0,	// (0x000583fa) cale_week_scroll_pane_g9_ParamLimits

0x3acd,	// (0x00058417) cale_week_scroll_pane_g10_ParamLimits

0x3aea,	// (0x00058434) cale_week_scroll_pane_g11_ParamLimits

0x3b09,	// (0x00058453) cale_week_scroll_pane_g12_ParamLimits

0x3b2e,	// (0x00058478) cale_week_scroll_pane_g13_ParamLimits

0x3b57,	// (0x000584a1) cale_week_scroll_pane_g14_ParamLimits

0x3b80,	// (0x000584ca) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00063a70) cale_week_scroll_pane_g_ParamLimits

0x3bc9,	// (0x00058513) cale_week_time_pane_ParamLimits

0x3be9,	// (0x00058533) grid_cale_week_pane_ParamLimits

0xc14d,	// (0x00060a97) listscroll_cale_week_pane_t1

0xc15f,	// (0x00060aa9) scroll_pane_cp08_ParamLimits

0x4720,	// (0x0005906a) cale_month_corner_pane_ParamLimits

0xc4dc,	// (0x00060e26) cale_month_pane_t1

0x4be2,	// (0x0005952c) cale_month_week_pane_ParamLimits

0xc84f,	// (0x00061199) popup_call_status_window_g1_ParamLimits

0x533d,	// (0x00059c87) popup_call_status_window_g2_ParamLimits

0x5349,	// (0x00059c93) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00063bef) popup_call_status_window_g_ParamLimits

0xc8b6,	// (0x00061200) aid_call2_pane

0x59fb,	// (0x0005a345) msg_header_pane_g1

0x5b55,	// (0x0005a49f) postcard_address2_pane_ParamLimits

0x5b55,	// (0x0005a49f) postcard_address2_pane

0x5b63,	// (0x0005a4ad) postcard_message2_pane_ParamLimits

0x5b63,	// (0x0005a4ad) postcard_message2_pane

0x6379,	// (0x0005acc3) message2_row_pane_ParamLimits

0x6379,	// (0x0005acc3) message2_row_pane

0x6393,	// (0x0005acdd) address2_row_pane_ParamLimits

0x6393,	// (0x0005acdd) address2_row_pane

0xdeb4,	// (0x000627fe) postcard_message2_row_pane_g1

0xdebc,	// (0x00062806) postcard_message2_row_pane_t1

0xdeb4,	// (0x000627fe) address2_row_pane_g1

0xdebc,	// (0x00062806) address2_row_pane_t1

0x3f77,	// (0x000588c1) aid_size_cell_vorec

0x1e71,	// (0x000567bb) main_rss_pane

0xdeca,	// (0x00062814) rss_list_single_pane_ParamLimits

0xdeca,	// (0x00062814) rss_list_single_pane

0xded8,	// (0x00062822) rss_list_single_pane_t1

0xded8,	// (0x00062822) rss_list_single_pane_t2

0x0001,

0xf545,	// (0x00063e8f) rss_list_single_pane_t

0x1e71,	// (0x000567bb) main_camera2_pane

0x1e71,	// (0x000567bb) main_video2_pane

0x33bc,	// (0x00057d06) cams_zoom_pane_cp2_ParamLimits

0x33bc,	// (0x00057d06) cams_zoom_pane_cp2

0x33bc,	// (0x00057d06) image2_vga_pane_ParamLimits

0x33bc,	// (0x00057d06) image2_vga_pane

0xc8ea,	// (0x00061234) main_camera2_pane_g1_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g1

0xc8ea,	// (0x00061234) main_camera2_pane_g2_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g2

0xc8ea,	// (0x00061234) main_camera2_pane_g3_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g3

0xc8ea,	// (0x00061234) main_camera2_pane_g4_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g4

0xc8ea,	// (0x00061234) main_camera2_pane_g5_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g5

0xc8ea,	// (0x00061234) main_camera2_pane_g6_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g6

0xc8ea,	// (0x00061234) main_camera2_pane_g7_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g7

0xc8ea,	// (0x00061234) main_camera2_pane_g8_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g8

0x0008,

0xf561,	// (0x00063eab) main_camera2_pane_g_ParamLimits

0xf561,	// (0x00063eab) main_camera2_pane_g

0x6507,	// (0x0005ae51) main_camera2_pane_t1_ParamLimits

0x6507,	// (0x0005ae51) main_camera2_pane_t1

0x6507,	// (0x0005ae51) main_camera2_pane_t2_ParamLimits

0x6507,	// (0x0005ae51) main_camera2_pane_t2

0x6507,	// (0x0005ae51) main_camera2_pane_t3_ParamLimits

0x6507,	// (0x0005ae51) main_camera2_pane_t3

0x6507,	// (0x0005ae51) main_camera2_pane_t4_ParamLimits

0x6507,	// (0x0005ae51) main_camera2_pane_t4

0x0006,

0xf574,	// (0x00063ebe) main_camera2_pane_t_ParamLimits

0xf574,	// (0x00063ebe) main_camera2_pane_t

0x652f,	// (0x0005ae79) cams_zoom_pane_cp4_ParamLimits

0x652f,	// (0x0005ae79) cams_zoom_pane_cp4

0x6199,	// (0x0005aae3) image2_cif_pane_ParamLimits

0x6199,	// (0x0005aae3) image2_cif_pane

0x33bc,	// (0x00057d06) image2_subqcif_pane_ParamLimits

0x33bc,	// (0x00057d06) image2_subqcif_pane

0x653d,	// (0x0005ae87) main_video2_pane_g1_ParamLimits

0x653d,	// (0x0005ae87) main_video2_pane_g1

0x653d,	// (0x0005ae87) main_video2_pane_g2_ParamLimits

0x653d,	// (0x0005ae87) main_video2_pane_g2

0x653d,	// (0x0005ae87) main_video2_pane_g3_ParamLimits

0x653d,	// (0x0005ae87) main_video2_pane_g3

0x653d,	// (0x0005ae87) main_video2_pane_g4_ParamLimits

0x653d,	// (0x0005ae87) main_video2_pane_g4

0x653d,	// (0x0005ae87) main_video2_pane_g5_ParamLimits

0x653d,	// (0x0005ae87) main_video2_pane_g5

0x653d,	// (0x0005ae87) main_video2_pane_g6_ParamLimits

0x653d,	// (0x0005ae87) main_video2_pane_g6

0x0005,

0xf583,	// (0x00063ecd) main_video2_pane_g_ParamLimits

0xf583,	// (0x00063ecd) main_video2_pane_g

0x654b,	// (0x0005ae95) main_video2_pane_t1_ParamLimits

0x654b,	// (0x0005ae95) main_video2_pane_t1

0x654b,	// (0x0005ae95) main_video2_pane_t2_ParamLimits

0x654b,	// (0x0005ae95) main_video2_pane_t2

0x654b,	// (0x0005ae95) main_video2_pane_t3_ParamLimits

0x654b,	// (0x0005ae95) main_video2_pane_t3

0x0002,

0xf590,	// (0x00063eda) main_video2_pane_t_ParamLimits

0xf590,	// (0x00063eda) main_video2_pane_t

0x605a,	// (0x0005a9a4) call_muted_g2

0x0001,

0xf537,	// (0x00063e81) call_muted_g

0x1e71,	// (0x000567bb) main_mup2_pane

0x360b,	// (0x00057f55) main_mup2_pane_g1_ParamLimits

0x360b,	// (0x00057f55) main_mup2_pane_g1

0x360b,	// (0x00057f55) main_mup2_pane_g2_ParamLimits

0x360b,	// (0x00057f55) main_mup2_pane_g2

0x0529,	// (0x00054e73) main_mup_pane_g13_cp1

0x33d6,	// (0x00057d20) mup_volume_pane_cp1

0x360b,	// (0x00057f55) main_mup2_pane_g4_ParamLimits

0x360b,	// (0x00057f55) main_mup2_pane_g4

0x360b,	// (0x00057f55) main_mup2_pane_g5_ParamLimits

0x360b,	// (0x00057f55) main_mup2_pane_g5

0x360b,	// (0x00057f55) main_mup2_pane_g6_ParamLimits

0x360b,	// (0x00057f55) main_mup2_pane_g6

0x360b,	// (0x00057f55) main_mup2_pane_g7_ParamLimits

0x360b,	// (0x00057f55) main_mup2_pane_g7

0x0006,

0xf597,	// (0x00063ee1) main_mup2_pane_g_ParamLimits

0xf597,	// (0x00063ee1) main_mup2_pane_g

0x3619,	// (0x00057f63) main_mup2_pane_t1_ParamLimits

0x3619,	// (0x00057f63) main_mup2_pane_t1

0x3619,	// (0x00057f63) main_mup2_pane_t2_ParamLimits

0x3619,	// (0x00057f63) main_mup2_pane_t2

0x3619,	// (0x00057f63) main_mup2_pane_t3_ParamLimits

0x3619,	// (0x00057f63) main_mup2_pane_t3

0x3619,	// (0x00057f63) main_mup2_pane_t4_ParamLimits

0x3619,	// (0x00057f63) main_mup2_pane_t4

0x3619,	// (0x00057f63) main_mup2_pane_t5_ParamLimits

0x3619,	// (0x00057f63) main_mup2_pane_t5

0x3619,	// (0x00057f63) main_mup2_pane_t6_ParamLimits

0x3619,	// (0x00057f63) main_mup2_pane_t6

0x0005,

0xf5a6,	// (0x00063ef0) main_mup2_pane_t_ParamLimits

0xf5a6,	// (0x00063ef0) main_mup2_pane_t

0xdbc7,	// (0x00062511) mup2_visualizer_pane_ParamLimits

0xdbc7,	// (0x00062511) mup2_visualizer_pane

0xdbc7,	// (0x00062511) mup_progress_pane_cp_ParamLimits

0xdbc7,	// (0x00062511) mup_progress_pane_cp

0x661a,	// (0x0005af64) mup_volume_pane_cp_ParamLimits

0x661a,	// (0x0005af64) mup_volume_pane_cp

0x35ef,	// (0x00057f39) mup2_visualizer_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) mup2_visualizer_pane_g1

0x35fd,	// (0x00057f47) mup2_visualizer_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) mup2_visualizer_pane_g2

0x35fd,	// (0x00057f47) mup2_visualizer_pane_g3_ParamLimits

0x35fd,	// (0x00057f47) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000639e9) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000639e9) mup2_visualizer_pane_g

0x10b1,	// (0x000559fb) aid_size_cell_fmradio

0x6170,	// (0x0005aaba) aid_height_parent_landcape

0xc33a,	// (0x00060c84) wml_content_pane_cp

0xc342,	// (0x00060c8c) wml_tabs_pane

0xc34b,	// (0x00060c95) popup_wml_miniature_window

0xc353,	// (0x00060c9d) scroll_pane_cp021

0xc367,	// (0x00060cb1) wml_content_pane_comp8

0x1e71,	// (0x000567bb) bg_popup_sub_pane_cp05

0xdf7e,	// (0x000628c8) popup_wml_miniature_window_g1

0xdf86,	// (0x000628d0) wml_miniature_view_pane

0x655f,	// (0x0005aea9) aid_size_wml_view

0x6567,	// (0x0005aeb1) wml_miniature_view_pane_g1

0x6570,	// (0x0005aeba) wml_miniature_view_pane_g2

0x6579,	// (0x0005aec3) wml_miniature_view_pane_g3

0x6581,	// (0x0005aecb) wml_miniature_view_pane_g4

0x6589,	// (0x0005aed3) wml_miniature_view_pane_g5

0x6591,	// (0x0005aedb) wml_miniature_view_pane_g6

0x6599,	// (0x0005aee3) wml_miniature_view_pane_g7

0x65a1,	// (0x0005aeeb) wml_miniature_view_pane_g8

0x0007,

0xf5b3,	// (0x00063efd) wml_miniature_view_pane_g

0xdf8e,	// (0x000628d8) background_graphic_ParamLimits

0xdf8e,	// (0x000628d8) background_graphic

0xdf9a,	// (0x000628e4) wml_tabs_2_pane

0xdfa3,	// (0x000628ed) wml_tabs_3_pane_ParamLimits

0xdfa3,	// (0x000628ed) wml_tabs_3_pane

0xdfb5,	// (0x000628ff) wml_tabs_4_pane_ParamLimits

0xdfb5,	// (0x000628ff) wml_tabs_4_pane

0xdfcb,	// (0x00062915) wml_tabs_5_pane_ParamLimits

0xdfcb,	// (0x00062915) wml_tabs_5_pane

0xdfe5,	// (0x0006292f) wml_tabs_pane_g2_ParamLimits

0xdfe5,	// (0x0006292f) wml_tabs_pane_g2

0xdffa,	// (0x00062944) wml_tabs_pane_g3_ParamLimits

0xdffa,	// (0x00062944) wml_tabs_pane_g3

0xe00f,	// (0x00062959) wml_tabs_2_active_pane_ParamLimits

0xe00f,	// (0x00062959) wml_tabs_2_active_pane

0xe00f,	// (0x00062959) wml_tabs_2_passive_pane_ParamLimits

0xe00f,	// (0x00062959) wml_tabs_2_passive_pane

0x65a9,	// (0x0005aef3) wml_tabs_3_active_pane_cp_ParamLimits

0x65a9,	// (0x0005aef3) wml_tabs_3_active_pane_cp

0x65bc,	// (0x0005af06) wml_tabs_3_passive_pane_ParamLimits

0x65bc,	// (0x0005af06) wml_tabs_3_passive_pane

0x65cd,	// (0x0005af17) wml_tabs_3_passive_pane_cp_ParamLimits

0x65cd,	// (0x0005af17) wml_tabs_3_passive_pane_cp

0x65e2,	// (0x0005af2c) tabs_4_active_pane

0x65ea,	// (0x0005af34) tabs_4_passive_pane

0x65f2,	// (0x0005af3c) tabs_4_passive_pane_cp

0x65fa,	// (0x0005af44) tabs_4_passive_pane_cp2

0x5fce,	// (0x0005a918) aid_height_text

0xdbc7,	// (0x00062511) mup_volume_cont_pane_ParamLimits

0xdbc7,	// (0x00062511) mup_volume_cont_pane

0x10b1,	// (0x000559fb) aid_size_cell_pinb

0x10b1,	// (0x000559fb) aid_size_list_pinb

0xdbc7,	// (0x00062511) mup2_volume_cont_pane_ParamLimits

0xdbc7,	// (0x00062511) mup2_volume_cont_pane

0x6604,	// (0x0005af4e) mup2_volume_cont_pane_g1_ParamLimits

0x6604,	// (0x0005af4e) mup2_volume_cont_pane_g1

0x31b7,	// (0x00057b01) aid_size_cell_touch_ParamLimits

0x31b7,	// (0x00057b01) aid_size_cell_touch

0x33e0,	// (0x00057d2a) touch_pane_ParamLimits

0x33e0,	// (0x00057d2a) touch_pane

0x33d6,	// (0x00057d20) main_rss2_pane

0xe026,	// (0x00062970) listscroll_rss2_pane

0xe02f,	// (0x00062979) rss2_navigation_pane

0xe037,	// (0x00062981) list_rss2_pane

0xc9ce,	// (0x00061318) scroll_pane_cp22

0xe03f,	// (0x00062989) rss2_navigation_pane_g1

0xe048,	// (0x00062992) rss2_navigation_pane_g2

0xe050,	// (0x0006299a) rss2_navigation_pane_g3

0x0002,

0xf5c4,	// (0x00063f0e) rss2_navigation_pane_g

0xe058,	// (0x000629a2) rss2_navigation_pane_t1

0x6630,	// (0x0005af7a) rss2_list_single_pane_ParamLimits

0x6630,	// (0x0005af7a) rss2_list_single_pane

0xe066,	// (0x000629b0) rss2_list_single_pane_t2

0xe096,	// (0x000629e0) rss2_list_single_pane_t3_ParamLimits

0xe096,	// (0x000629e0) rss2_list_single_pane_t3

0xe0b3,	// (0x000629fd) rss2_list_single_pane_t4

0x51f0,	// (0x00059b3a) smil_status_pane_g1

0x6199,	// (0x0005aae3) main_image2_pane_ParamLimits

0x6199,	// (0x0005aae3) main_image2_pane

0xc8ea,	// (0x00061234) main_camera2_pane_g9_ParamLimits

0xc8ea,	// (0x00061234) main_camera2_pane_g9

0x6507,	// (0x0005ae51) main_camera2_pane_t5_ParamLimits

0x6507,	// (0x0005ae51) main_camera2_pane_t5

0x651b,	// (0x0005ae65) main_camera2_pane_t6_ParamLimits

0x651b,	// (0x0005ae65) main_camera2_pane_t6

0x6653,	// (0x0005af9d) main_image2_pane_g1_ParamLimits

0x6653,	// (0x0005af9d) main_image2_pane_g1

0x5d03,	// (0x0005a64d) smil2_video_pane_ParamLimits

0x5d03,	// (0x0005a64d) smil2_video_pane

0x301f,	// (0x00057969) aid_zoom_text_primary_cp

0x3371,	// (0x00057cbb) popup_preview_fixed_window

0xc294,	// (0x00060bde) im_reading_pane_g1

0x64f9,	// (0x0005ae43) cams2_bc_adjust_pane_cp_ParamLimits

0x64f9,	// (0x0005ae43) cams2_bc_adjust_pane_cp

0x33bc,	// (0x00057d06) cams2_bc_adjust_pane_ParamLimits

0x33bc,	// (0x00057d06) cams2_bc_adjust_pane

0x0529,	// (0x00054e73) cams2_bc_adjust_pane_g1

0x33d6,	// (0x00057d20) cams2_slider_pane

0x0529,	// (0x00054e73) cams2_slider_pane_g1

0x0529,	// (0x00054e73) cams2_slider_pane_g2

0x0006,

0xf5cb,	// (0x00063f15) cams2_slider_pane_g

0x3647,	// (0x00057f91) calc_display_pane_ParamLimits

0x3665,	// (0x00057faf) calc_paper_pane_ParamLimits

0x3681,	// (0x00057fcb) grid_calc_pane_ParamLimits

0x53a7,	// (0x00059cf1) popup_clock_digital_window_t1_ParamLimits

0xcd62,	// (0x000616ac) main_image_pane_t1

0x362d,	// (0x00057f77) aid_size_cell_calc_ParamLimits

0x362d,	// (0x00057f77) aid_size_cell_calc

0x61ca,	// (0x0005ab14) popup_blid_sat_info2_window_ParamLimits

0x61ca,	// (0x0005ab14) popup_blid_sat_info2_window

0xe0c1,	// (0x00062a0b) aid_size_cell_blid

0xdbc7,	// (0x00062511) bg_popup_window_pane_cp07

0xe0de,	// (0x00062a28) grid_popup_blid_pane

0xe0e8,	// (0x00062a32) heading_pane_cp05_ParamLimits

0xe0e8,	// (0x00062a32) heading_pane_cp05

0xe1b2,	// (0x00062afc) cell_popup_blid_pane_ParamLimits

0xe1b2,	// (0x00062afc) cell_popup_blid_pane

0xe1dc,	// (0x00062b26) cell_popup_blid_pane_g1

0xe1e4,	// (0x00062b2e) cell_popup_blid_pane_t1

0xdbc7,	// (0x00062511) mup2_indicator_pane_ParamLimits

0xdbc7,	// (0x00062511) mup2_indicator_pane

0x10b1,	// (0x000559fb) mup2_visualizer_osc_pane

0xdf68,	// (0x000628b2) mup2_visualizer_spec_pane_ParamLimits

0xdf68,	// (0x000628b2) mup2_visualizer_spec_pane

0x10b1,	// (0x000559fb) mup2_spec_half_pane

0x10b1,	// (0x000559fb) mup2_spec_half_pane_cp

0xe1f2,	// (0x00062b3c) mup2_spec_bar_pane_ParamLimits

0xe1f2,	// (0x00062b3c) mup2_spec_bar_pane

0xbfdb,	// (0x00060925) mup2_spec_bar_pane_g1

0xe211,	// (0x00062b5b) mup2_spec_bar_pane_g2

0x0001,

0xf5f1,	// (0x00063f3b) mup2_spec_bar_pane_g

0x10b1,	// (0x000559fb) mup2_osc_middle_pane

0xbfdb,	// (0x00060925) mup2_visualizer_osc_pane_g1

0x10db,	// (0x00055a25) popup_number_entry_window_t1_ParamLimits

0x10ee,	// (0x00055a38) popup_number_entry_window_t2_ParamLimits

0x1100,	// (0x00055a4a) popup_number_entry_window_t3_ParamLimits

0x1112,	// (0x00055a5c) popup_number_entry_window_t5_ParamLimits

0x1112,	// (0x00055a5c) popup_number_entry_window_t5

0xf040,	// (0x0006398a) popup_number_entry_window_t_ParamLimits

0x1147,	// (0x00055a91) text_title_cp2_ParamLimits

0x5a19,	// (0x0005a363) aid_hotspot_pointer_text2_pane

0x5ab3,	// (0x0005a3fd) main_viewer_pane_g9_ParamLimits

0x5ab3,	// (0x0005a3fd) main_viewer_pane_g9

0xc4dc,	// (0x00060e26) cale_month_pane_t1_ParamLimits

0xc519,	// (0x00060e63) bg_cale_pane_ParamLimits

0xc531,	// (0x00060e7b) list_cale_pane_ParamLimits

0xc542,	// (0x00060e8c) listscroll_cale_day_pane_t1

0xc554,	// (0x00060e9e) scroll_pane_cp09_ParamLimits

0x5757,	// (0x0005a0a1) main_mup_eq_pane_t1_ParamLimits

0x5757,	// (0x0005a0a1) main_mup_eq_pane_t1

0x5773,	// (0x0005a0bd) main_mup_eq_pane_t2_ParamLimits

0x5773,	// (0x0005a0bd) main_mup_eq_pane_t2

0x578f,	// (0x0005a0d9) main_mup_eq_pane_t3_ParamLimits

0x578f,	// (0x0005a0d9) main_mup_eq_pane_t3

0x57a9,	// (0x0005a0f3) main_mup_eq_pane_t4_ParamLimits

0x57a9,	// (0x0005a0f3) main_mup_eq_pane_t4

0x57c3,	// (0x0005a10d) main_mup_eq_pane_t5_ParamLimits

0x57c3,	// (0x0005a10d) main_mup_eq_pane_t5

0x57dd,	// (0x0005a127) main_mup_eq_pane_t6_ParamLimits

0x57dd,	// (0x0005a127) main_mup_eq_pane_t6

0x57f3,	// (0x0005a13d) main_mup_eq_pane_t7_ParamLimits

0x57f3,	// (0x0005a13d) main_mup_eq_pane_t7

0x5809,	// (0x0005a153) main_mup_eq_pane_t8_ParamLimits

0x5809,	// (0x0005a153) main_mup_eq_pane_t8

0x581f,	// (0x0005a169) main_mup_eq_pane_t9_ParamLimits

0x581f,	// (0x0005a169) main_mup_eq_pane_t9

0x583b,	// (0x0005a185) main_mup_eq_pane_t10_ParamLimits

0x583b,	// (0x0005a185) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x00063ce9) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x00063ce9) main_mup_eq_pane_t

0x5900,	// (0x0005a24a) mup_equalizer_pane_cp5_ParamLimits

0x5918,	// (0x0005a262) mup_equalizer_pane_cp6_ParamLimits

0x5930,	// (0x0005a27a) mup_equalizer_pane_cp7_ParamLimits

0x33d6,	// (0x00057d20) main_gallery_pane

0xdf06,	// (0x00062850) smil2_volume_pane

0xdf0e,	// (0x00062858) smil_status_volume_pane_g1_ParamLimits

0xdf21,	// (0x0006286b) smil_status_volume_pane_g2_ParamLimits

0x63a6,	// (0x0005acf0) smil_status_volume_pane_g3_ParamLimits

0xf54a,	// (0x00063e94) smil_status_volume_pane_g_ParamLimits

0xdbc7,	// (0x00062511) bg_popup_window_pane_cp07_ParamLimits

0xe0c9,	// (0x00062a13) blid_firmament_pane

0x35e1,	// (0x00057f2b) aid_size_cell_gallery_ParamLimits

0x35e1,	// (0x00057f2b) aid_size_cell_gallery

0x35e1,	// (0x00057f2b) grid_gallery_pane_ParamLimits

0x35e1,	// (0x00057f2b) grid_gallery_pane

0xcca8,	// (0x000615f2) cell_gallery_pane_ParamLimits

0xcca8,	// (0x000615f2) cell_gallery_pane

0x3588,	// (0x00057ed2) bg_cell_gallery_focus_pane_ParamLimits

0x3588,	// (0x00057ed2) bg_cell_gallery_focus_pane

0x35ef,	// (0x00057f39) cell_gallery_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) cell_gallery_pane_g1

0x35ef,	// (0x00057f39) cell_gallery_pane_g2_ParamLimits

0x35ef,	// (0x00057f39) cell_gallery_pane_g2

0x35ef,	// (0x00057f39) cell_gallery_pane_g3_ParamLimits

0x35ef,	// (0x00057f39) cell_gallery_pane_g3

0x35fd,	// (0x00057f47) cell_gallery_pane_g4_ParamLimits

0x35fd,	// (0x00057f47) cell_gallery_pane_g4

0x0003,

0xf5f6,	// (0x00063f40) cell_gallery_pane_g_ParamLimits

0xf5f6,	// (0x00063f40) cell_gallery_pane_g

0xe21b,	// (0x00062b65) bg_cell_gallery_focus_pane_g1

0xe223,	// (0x00062b6d) bg_cell_gallery_focus_pane_g2

0xe22b,	// (0x00062b75) bg_cell_gallery_focus_pane_g3

0xe233,	// (0x00062b7d) bg_cell_gallery_focus_pane_g4

0xe23b,	// (0x00062b85) bg_cell_gallery_focus_pane_g5

0xe243,	// (0x00062b8d) bg_cell_gallery_focus_pane_g6

0xe24b,	// (0x00062b95) bg_cell_gallery_focus_pane_g7

0xe253,	// (0x00062b9d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x00063f49) bg_cell_gallery_focus_pane_g

0xe25b,	// (0x00062ba5) aid_firma_cardinal

0xe26f,	// (0x00062bb9) blid_firmament_pane_t1

0xe286,	// (0x00062bd0) blid_firmament_pane_t2

0xe29d,	// (0x00062be7) blid_firmament_pane_t3

0xe2b4,	// (0x00062bfe) blid_firmament_pane_t4

0x0003,

0xf610,	// (0x00063f5a) blid_firmament_pane_t

0xe2cb,	// (0x00062c15) blid_sat_info_pane

0xbfdb,	// (0x00060925) blid_sat_info_pane_g1

0xbfdb,	// (0x00060925) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000639f9) blid_sat_info_pane_g

0xe2db,	// (0x00062c25) blid_sat_info_pane_t1

0xe2e9,	// (0x00062c33) smil2_volume_content_pane

0xe2f2,	// (0x00062c3c) smil2_volume_pane_g1

0xd60a,	// (0x00061f54) smil2_volume_content_pane_g1

0xe2fa,	// (0x00062c44) smil2_volume_content_pane_g2

0xe303,	// (0x00062c4d) smil2_volume_content_pane_g3

0xe30c,	// (0x00062c56) smil2_volume_content_pane_g4

0xe315,	// (0x00062c5f) smil2_volume_content_pane_g5

0xe31e,	// (0x00062c68) smil2_volume_content_pane_g6

0xe327,	// (0x00062c71) smil2_volume_content_pane_g7

0xe330,	// (0x00062c7a) smil2_volume_content_pane_g8

0xe339,	// (0x00062c83) smil2_volume_content_pane_g9

0xe342,	// (0x00062c8c) smil2_volume_content_pane_g10

0x0009,

0xf619,	// (0x00063f63) smil2_volume_content_pane_g

0x3caa,	// (0x000585f4) cale_week_day_heading_pane_t1_ParamLimits

0x3cd2,	// (0x0005861c) cale_week_day_heading_pane_t2_ParamLimits

0x3cff,	// (0x00058649) cale_week_day_heading_pane_t3_ParamLimits

0x3d2c,	// (0x00058676) cale_week_day_heading_pane_t4_ParamLimits

0x3d59,	// (0x000586a3) cale_week_day_heading_pane_t5_ParamLimits

0x3d86,	// (0x000586d0) cale_week_day_heading_pane_t6_ParamLimits

0x3db3,	// (0x000586fd) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00063a91) cale_week_day_heading_pane_t_ParamLimits

0xc17c,	// (0x00060ac6) bg_cale_side_pane_ParamLimits

0x3ddb,	// (0x00058725) cale_week_time_pane_t1_ParamLimits

0x3dff,	// (0x00058749) cale_week_time_pane_t2_ParamLimits

0x3e23,	// (0x0005876d) cale_week_time_pane_t3_ParamLimits

0x3e47,	// (0x00058791) cale_week_time_pane_t4_ParamLimits

0x3e6b,	// (0x000587b5) cale_week_time_pane_t5_ParamLimits

0x3e91,	// (0x000587db) cale_week_time_pane_t6_ParamLimits

0x3eb9,	// (0x00058803) cale_week_time_pane_t7_ParamLimits

0x3ee5,	// (0x0005882f) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00063aa0) cale_week_time_pane_t_ParamLimits

0x3f15,	// (0x0005885f) cell_cale_week_pane_g2_ParamLimits

0xc17c,	// (0x00060ac6) bg_cale_side_pane_cp01_ParamLimits

0x4fdb,	// (0x00059925) cale_month_week_pane_t1_ParamLimits

0x4ff4,	// (0x0005993e) cale_month_week_pane_t2_ParamLimits

0x500d,	// (0x00059957) cale_month_week_pane_t3_ParamLimits

0x5026,	// (0x00059970) cale_month_week_pane_t4_ParamLimits

0x503f,	// (0x00059989) cale_month_week_pane_t5_ParamLimits

0x505c,	// (0x000599a6) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00063b6e) cale_month_week_pane_t_ParamLimits

0x51ad,	// (0x00059af7) cell_cale_month_pane_g1_ParamLimits

0x33d6,	// (0x00057d20) main_cale_event_viewer_pane

0x10b1,	// (0x000559fb) listscroll_cale_event_viewer_pane

0xe34b,	// (0x00062c95) list_cale_ev_pane

0xe353,	// (0x00062c9d) scroll_pane_cp023

0x665f,	// (0x0005afa9) field_cale_ev_pane_ParamLimits

0x665f,	// (0x0005afa9) field_cale_ev_pane

0xe35f,	// (0x00062ca9) field_cale_ev_content_pane_ParamLimits

0xe35f,	// (0x00062ca9) field_cale_ev_content_pane

0xe36b,	// (0x00062cb5) field_cale_ev_pane_g1_ParamLimits

0xe36b,	// (0x00062cb5) field_cale_ev_pane_g1

0xe377,	// (0x00062cc1) field_cale_ev_pane_g2_ParamLimits

0xe377,	// (0x00062cc1) field_cale_ev_pane_g2

0xe38f,	// (0x00062cd9) field_cale_ev_pane_g3_ParamLimits

0xe38f,	// (0x00062cd9) field_cale_ev_pane_g3

0x0002,

0xf62e,	// (0x00063f78) field_cale_ev_pane_g_ParamLimits

0xf62e,	// (0x00063f78) field_cale_ev_pane_g

0xe3a7,	// (0x00062cf1) field_cale_ev_pane_t1_ParamLimits

0xe3a7,	// (0x00062cf1) field_cale_ev_pane_t1

0x6683,	// (0x0005afcd) field_cale_ev_content_pane_t1_ParamLimits

0x6683,	// (0x0005afcd) field_cale_ev_content_pane_t1

0xcc56,	// (0x000615a0) bg_button_pane_cp01

0x3908,	// (0x00058252) listscroll_cale_week_pane_ParamLimits

0xc144,	// (0x00060a8e) popup_toolbar_window_cp01

0xc14d,	// (0x00060a97) listscroll_cale_week_pane_t1_ParamLimits

0x3908,	// (0x00058252) listscroll_cale_day_pane_ParamLimits

0xc144,	// (0x00060a8e) popup_toolbar_window_cp02

0xc542,	// (0x00060e8c) listscroll_cale_day_pane_t1_ParamLimits

0x6187,	// (0x0005aad1) main_cale_month_pane_ParamLimits

0x62e9,	// (0x0005ac33) popup_toolbar_window_cp03_ParamLimits

0x62e9,	// (0x0005ac33) popup_toolbar_window_cp03

0x5c13,	// (0x0005a55d) main_image_pane_g2_ParamLimits

0x5c13,	// (0x0005a55d) main_image_pane_g2

0x5c1f,	// (0x0005a569) main_image_pane_g3_ParamLimits

0x5c1f,	// (0x0005a569) main_image_pane_g3

0x0002,

0xf431,	// (0x00063d7b) main_image_pane_g_ParamLimits

0xf431,	// (0x00063d7b) main_image_pane_g

0xcd62,	// (0x000616ac) main_image_pane_t1_ParamLimits

0x5c2b,	// (0x0005a575) main_image_pane_t2_ParamLimits

0x5c2b,	// (0x0005a575) main_image_pane_t2

0x5c3d,	// (0x0005a587) main_image_pane_t3_ParamLimits

0x5c3d,	// (0x0005a587) main_image_pane_t3

0x5c4f,	// (0x0005a599) main_image_pane_t4_ParamLimits

0x5c4f,	// (0x0005a599) main_image_pane_t4

0x0003,

0xf438,	// (0x00063d82) main_image_pane_t_ParamLimits

0xf438,	// (0x00063d82) main_image_pane_t

0x5c61,	// (0x0005a5ab) popup_image_details_window_cp01

0x5c6b,	// (0x0005a5b5) popup_toobar_trans_pane_cp01_ParamLimits

0x5c6b,	// (0x0005a5b5) popup_toobar_trans_pane_cp01

0x622b,	// (0x0005ab75) popup_image_details_window_ParamLimits

0x622b,	// (0x0005ab75) popup_image_details_window

0x6239,	// (0x0005ab83) popup_image_focus_window

0x33bc,	// (0x00057d06) camera2_autofocus_pane_ParamLimits

0x33bc,	// (0x00057d06) camera2_autofocus_pane

0x10b1,	// (0x000559fb) bg_popup_sub_pane_cp06

0xe3be,	// (0x00062d08) popup_image_focus_window_g1

0xe3c6,	// (0x00062d10) popup_image_focus_window_g2

0xe3ce,	// (0x00062d18) popup_image_focus_window_g3

0xe3d6,	// (0x00062d20) popup_image_focus_window_g4

0x0003,

0xf635,	// (0x00063f7f) popup_image_focus_window_g

0xe3de,	// (0x00062d28) popup_image_focus_window_t1

0xe3ec,	// (0x00062d36) popup_image_focus_window_t2

0xe3fc,	// (0x00062d46) popup_image_focus_window_t3

0x0002,

0xf63e,	// (0x00063f88) popup_image_focus_window_t

0x35ef,	// (0x00057f39) camera2_autofocus_pane_g1

0x3588,	// (0x00057ed2) bg_tb_trans_pane_cp01

0xe40a,	// (0x00062d54) popup_image_details_window_g1

0xe41d,	// (0x00062d67) popup_image_details_window_g2

0x0002,

0xf650,	// (0x00063f9a) popup_image_details_window_g

0xe446,	// (0x00062d90) popup_image_details_window_t1

0xe458,	// (0x00062da2) popup_image_details_window_t2

0xe471,	// (0x00062dbb) popup_image_details_window_t3

0xe485,	// (0x00062dcf) popup_image_details_window_t4

0xe4a0,	// (0x00062dea) popup_image_details_window_t5

0x0004,

0xf657,	// (0x00063fa1) popup_image_details_window_t

0xc025,	// (0x0006096f) bg_calc_paper_pane_ParamLimits

0x33d6,	// (0x00057d20) grid_highlight_pane_cp013

0x36bc,	// (0x00058006) list_calc_pane_ParamLimits

0x36ce,	// (0x00058018) scroll_pane_cp024

0xc039,	// (0x00060983) bg_calc_display_pane_ParamLimits

0x36d6,	// (0x00058020) calc_display_pane_t1_ParamLimits

0x36eb,	// (0x00058035) calc_display_pane_t2_ParamLimits

0x3700,	// (0x0005804a) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00063a11) calc_display_pane_t_ParamLimits

0x37d0,	// (0x0005811a) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00063a2e) cell_calc_pane_g

0x37d9,	// (0x00058123) cell_calc_pane_t1

0xc08e,	// (0x000609d8) grid_highlight_pane_cp02_ParamLimits

0xc0a4,	// (0x000609ee) toolbar_button_pane_cp01_ParamLimits

0xc0a4,	// (0x000609ee) toolbar_button_pane_cp01

0xcda7,	// (0x000616f1) temp_image_control_pane_ParamLimits

0xcda7,	// (0x000616f1) temp_image_control_pane

0x6199,	// (0x0005aae3) main_mp3_pane

0xe4ba,	// (0x00062e04) temp_image_control_pane_g1_ParamLimits

0xe4ba,	// (0x00062e04) temp_image_control_pane_g1

0xe4c8,	// (0x00062e12) temp_image_control_pane_g2_ParamLimits

0xe4c8,	// (0x00062e12) temp_image_control_pane_g2

0xe4da,	// (0x00062e24) temp_image_control_pane_g3_ParamLimits

0xe4da,	// (0x00062e24) temp_image_control_pane_g3

0x669e,	// (0x0005afe8) temp_image_control_pane_g4_ParamLimits

0x669e,	// (0x0005afe8) temp_image_control_pane_g4

0x0003,

0xf662,	// (0x00063fac) temp_image_control_pane_g_ParamLimits

0xf662,	// (0x00063fac) temp_image_control_pane_g

0xe4ba,	// (0x00062e04) main_mp3_pane_g1

0x66af,	// (0x0005aff9) main_mp3_pane_g2

0x0007,

0xf66b,	// (0x00063fb5) main_mp3_pane_g

0xe50f,	// (0x00062e59) main_mp3_pane_t1

0x35fd,	// (0x00057f47) main_camera_pane_g8_ParamLimits

0x35fd,	// (0x00057f47) main_camera_pane_g8

0x40c1,	// (0x00058a0b) main_video_pane_g7_ParamLimits

0x40c1,	// (0x00058a0b) main_video_pane_g7

0x6507,	// (0x0005ae51) main_camera2_pane_t7_ParamLimits

0x6507,	// (0x0005ae51) main_camera2_pane_t7

0xc2fa,	// (0x00060c44) scroll_pane_cp025_ParamLimits

0xc2fa,	// (0x00060c44) scroll_pane_cp025

0xc30e,	// (0x00060c58) scroll_pane_cp026_ParamLimits

0xc30e,	// (0x00060c58) scroll_pane_cp026

0xc31d,	// (0x00060c67) wml_content_pane_ParamLimits

0x33d6,	// (0x00057d20) main_touch_calib_pane

0x6753,	// (0x0005b09d) main_touch_calib_pane_g1

0x675f,	// (0x0005b0a9) main_touch_calib_pane_g2

0x676b,	// (0x0005b0b5) main_touch_calib_pane_g3

0x6777,	// (0x0005b0c1) main_touch_calib_pane_g4

0x0003,

0xf689,	// (0x00063fd3) main_touch_calib_pane_g

0x6783,	// (0x0005b0cd) main_touch_calib_pane_t1

0x679a,	// (0x0005b0e4) main_touch_calib_pane_t2

0x0004,

0xf692,	// (0x00063fdc) main_touch_calib_pane_t

0xca49,	// (0x00061393) mup_progress_pane_cp02

0xca68,	// (0x000613b2) navi_pane_g1

0xcaca,	// (0x00061414) navi_pane_mp_t3

0x6199,	// (0x0005aae3) main_mp3_pane_ParamLimits

0x632a,	// (0x0005ac74) navi_pane_ParamLimits

0xe4ba,	// (0x00062e04) main_mp3_pane_g1_ParamLimits

0x66af,	// (0x0005aff9) main_mp3_pane_g2_ParamLimits

0x66bb,	// (0x0005b005) main_mp3_pane_g3_ParamLimits

0x66bb,	// (0x0005b005) main_mp3_pane_g3

0x66c7,	// (0x0005b011) main_mp3_pane_g4_ParamLimits

0x66c7,	// (0x0005b011) main_mp3_pane_g4

0x35ef,	// (0x00057f39) main_mp3_pane_g5_ParamLimits

0x35ef,	// (0x00057f39) main_mp3_pane_g5

0xe4ea,	// (0x00062e34) main_mp3_pane_g6_ParamLimits

0xe4ea,	// (0x00062e34) main_mp3_pane_g6

0xe4f7,	// (0x00062e41) main_mp3_pane_g7_ParamLimits

0xe4f7,	// (0x00062e41) main_mp3_pane_g7

0xe503,	// (0x00062e4d) main_mp3_pane_g8_ParamLimits

0xe503,	// (0x00062e4d) main_mp3_pane_g8

0xf66b,	// (0x00063fb5) main_mp3_pane_g_ParamLimits

0x66d3,	// (0x0005b01d) main_mp3_pane_t2

0x66e3,	// (0x0005b02d) main_mp3_pane_t3

0xe51d,	// (0x00062e67) main_mp3_pane_t4

0xe52b,	// (0x00062e75) main_mp3_pane_t5

0x0005,

0xf67c,	// (0x00063fc6) main_mp3_pane_t

0xe539,	// (0x00062e83) mup_progress_pane_cp01

0x301f,	// (0x00057969) aid_zoom_text_secondary2

0xe34b,	// (0x00062c95) list_cale_ev2_pane

0xe353,	// (0x00062c9d) scroll_pane_cp023_ParamLimits

0x67f5,	// (0x0005b13f) field_cale_ev2_pane_ParamLimits

0x67f5,	// (0x0005b13f) field_cale_ev2_pane

0x6810,	// (0x0005b15a) field_cale_ev2_pane_g1_ParamLimits

0x6810,	// (0x0005b15a) field_cale_ev2_pane_g1

0x681c,	// (0x0005b166) field_cale_ev2_pane_g2_ParamLimits

0x681c,	// (0x0005b166) field_cale_ev2_pane_g2

0x6834,	// (0x0005b17e) field_cale_ev2_pane_g3_ParamLimits

0x6834,	// (0x0005b17e) field_cale_ev2_pane_g3

0x0003,

0xf69d,	// (0x00063fe7) field_cale_ev2_pane_g_ParamLimits

0xf69d,	// (0x00063fe7) field_cale_ev2_pane_g

0x684c,	// (0x0005b196) field_cale_ev2_pane_t1_ParamLimits

0x684c,	// (0x0005b196) field_cale_ev2_pane_t1

0x6863,	// (0x0005b1ad) field_cale_ev2_pane_t2_ParamLimits

0x6863,	// (0x0005b1ad) field_cale_ev2_pane_t2

0x0001,

0xf6a6,	// (0x00063ff0) field_cale_ev2_pane_t_ParamLimits

0xf6a6,	// (0x00063ff0) field_cale_ev2_pane_t

0x5b1b,	// (0x0005a465) main_postcard_pane_g5_ParamLimits

0x5b1b,	// (0x0005a465) main_postcard_pane_g5

0x5b29,	// (0x0005a473) main_postcard_pane_g6_ParamLimits

0x5b29,	// (0x0005a473) main_postcard_pane_g6

0x35e1,	// (0x00057f2b) camera2_autofocus_pane_cp_ParamLimits

0x35e1,	// (0x00057f2b) camera2_autofocus_pane_cp

0x6199,	// (0x0005aae3) main_mup3_pane

0x68bb,	// (0x0005b205) main_mup3_pane_g1_ParamLimits

0x68bb,	// (0x0005b205) main_mup3_pane_g1

0x68dc,	// (0x0005b226) main_mup3_pane_g2_ParamLimits

0x68dc,	// (0x0005b226) main_mup3_pane_g2

0x6950,	// (0x0005b29a) main_mup3_pane_g3_ParamLimits

0x6950,	// (0x0005b29a) main_mup3_pane_g3

0x69b5,	// (0x0005b2ff) main_mup3_pane_g4_ParamLimits

0x69b5,	// (0x0005b2ff) main_mup3_pane_g4

0x6a1a,	// (0x0005b364) main_mup3_pane_g5_ParamLimits

0x6a1a,	// (0x0005b364) main_mup3_pane_g5

0x6a7f,	// (0x0005b3c9) main_mup3_pane_g6_ParamLimits

0x6a7f,	// (0x0005b3c9) main_mup3_pane_g6

0x35fd,	// (0x00057f47) main_mup3_pane_g7_ParamLimits

0x35fd,	// (0x00057f47) main_mup3_pane_g7

0x0007,

0xf6b6,	// (0x00064000) main_mup3_pane_g_ParamLimits

0xf6b6,	// (0x00064000) main_mup3_pane_g

0x6af9,	// (0x0005b443) main_mup3_pane_t1_ParamLimits

0x6af9,	// (0x0005b443) main_mup3_pane_t1

0x6b5e,	// (0x0005b4a8) main_mup3_pane_t2_ParamLimits

0x6b5e,	// (0x0005b4a8) main_mup3_pane_t2

0x6c27,	// (0x0005b571) main_mup3_pane_t4_ParamLimits

0x6c27,	// (0x0005b571) main_mup3_pane_t4

0x6c7b,	// (0x0005b5c5) main_mup3_pane_t5_ParamLimits

0x6c7b,	// (0x0005b5c5) main_mup3_pane_t5

0x6d37,	// (0x0005b681) main_mup3_pane_t6_ParamLimits

0x6d37,	// (0x0005b681) main_mup3_pane_t6

0x0005,

0xf6c7,	// (0x00064011) main_mup3_pane_t_ParamLimits

0xf6c7,	// (0x00064011) main_mup3_pane_t

0x6de1,	// (0x0005b72b) mup3_progress_pane_ParamLimits

0x6de1,	// (0x0005b72b) mup3_progress_pane

0x6e5f,	// (0x0005b7a9) popup_mup3_control_window_ParamLimits

0x6e5f,	// (0x0005b7a9) popup_mup3_control_window

0xe54d,	// (0x00062e97) popup_mup3_text_window

0x6e7c,	// (0x0005b7c6) mup3_progress_pane_t1

0x6e9a,	// (0x0005b7e4) mup3_progress_pane_t2

0xe555,	// (0x00062e9f) mup3_progress_pane_t3

0x0002,

0xf6d4,	// (0x0006401e) mup3_progress_pane_t

0xe572,	// (0x00062ebc) mup_progress_pane_cp03

0x10b1,	// (0x000559fb) bg_tb_trans_pane_cp04

0x6eb8,	// (0x0005b802) mup3_volume_pane

0x6ec0,	// (0x0005b80a) popup_mup3_control_window_g1

0x04b2,	// (0x00054dfc) mup3_volume_pane_g1

0x04bb,	// (0x00054e05) mup3_volume_pane_g2

0x04c4,	// (0x00054e0e) mup3_volume_pane_g3

0x0002,

0xf6db,	// (0x00064025) mup3_volume_pane_g

0x10b1,	// (0x000559fb) bg_tb_trans_pane_cp03

0xe582,	// (0x00062ecc) popup_mup3_text_window_g1

0xe58a,	// (0x00062ed4) popup_mup3_text_window_t1

0xc081,	// (0x000609cb) list_calc_item_pane_g1_ParamLimits

0xe01d,	// (0x00062967) mup_volume_pane_cp_g1

0x67b3,	// (0x0005b0fd) main_touch_calib_pane_t3

0x67c9,	// (0x0005b113) main_touch_calib_pane_t4

0x67df,	// (0x0005b129) main_touch_calib_pane_t5

0x31a3,	// (0x00057aed) aid_cell_size_toolbar2

0x31ab,	// (0x00057af5) aid_popup3_width_pane

0x3017,	// (0x00057961) aid_zoom_text_msg_primary

0x3fc1,	// (0x0005890b) vorec_t7

0xc045,	// (0x0006098f) bg_calc_paper_pane_g1_ParamLimits

0xc051,	// (0x0006099b) bg_calc_paper_pane_g2_ParamLimits

0xc05d,	// (0x000609a7) bg_calc_paper_pane_g3_ParamLimits

0xc069,	// (0x000609b3) bg_calc_paper_pane_g4_ParamLimits

0xc075,	// (0x000609bf) bg_calc_paper_pane_g5_ParamLimits

0x3741,	// (0x0005808b) bg_calc_paper_pane_g6_ParamLimits

0x3752,	// (0x0005809c) bg_calc_paper_pane_g7_ParamLimits

0x3763,	// (0x000580ad) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00063a18) bg_calc_paper_pane_g_ParamLimits

0x3774,	// (0x000580be) calc_bg_paper_pane_g9_ParamLimits

0x35e1,	// (0x00057f2b) image_qvga_pane_ParamLimits

0x35e1,	// (0x00057f2b) image_qvga_pane

0x3566,	// (0x00057eb0) bg_popup_sub_pane_cp04_ParamLimits

0xccde,	// (0x00061628) popup_mup_playback_window_g1_ParamLimits

0xccea,	// (0x00061634) popup_mup_playback_window_t1_ParamLimits

0xccff,	// (0x00061649) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00063d76) popup_mup_playback_window_t_ParamLimits

0x35ef,	// (0x00057f39) main_mup2_pane_g3_ParamLimits

0x35ef,	// (0x00057f39) main_mup2_pane_g3

0x4274,	// (0x00058bbe) popup_toolbar_window_cp04

0xd083,	// (0x000619cd) popup_call2_audio_second_window_g3_ParamLimits

0xd083,	// (0x000619cd) popup_call2_audio_second_window_g3

0xd48d,	// (0x00061dd7) popup_call2_audio_first_window_g4_ParamLimits

0xd48d,	// (0x00061dd7) popup_call2_audio_first_window_g4

0xdba7,	// (0x000624f1) popup_call2_audio_in_window_g4_ParamLimits

0xdba7,	// (0x000624f1) popup_call2_audio_in_window_g4

0x5c06,	// (0x0005a550) aid_area_sk_bg_cut_ParamLimits

0x5c06,	// (0x0005a550) aid_area_sk_bg_cut

0xcd14,	// (0x0006165e) aid_area_sk_bg_cut_2_ParamLimits

0xcd14,	// (0x0006165e) aid_area_sk_bg_cut_2

0x10b1,	// (0x000559fb) aid_placing_details_win

0x10b1,	// (0x000559fb) aid_placing_details_win_2

0x35ef,	// (0x00057f39) camera2_autofocus_pane_g1_ParamLimits

0x3362,	// (0x00057cac) popup_fixed_preview_cale_window_ParamLimits

0x3362,	// (0x00057cac) popup_fixed_preview_cale_window

0xcb11,	// (0x0006145b) navi_slider_pane_g3

0xcb1a,	// (0x00061464) navi_slider_pane_g4

0xcb23,	// (0x0006146d) navi_slider_pane_g5

0xcb11,	// (0x0006145b) navi_slider_pane_g6

0x572b,	// (0x0005a075) navi_slider_pane_g7

0xcc23,	// (0x0006156d) mup_scale_pane_g3

0xcc2c,	// (0x00061576) mup_scale_pane_g4

0xcc35,	// (0x0006157f) mup_scale_pane_g5

0x5948,	// (0x0005a292) mup_scale_pane_g6

0x5951,	// (0x0005a29b) mup_scale_pane_g7

0x0529,	// (0x00054e73) cams2_slider_pane_g3

0x0529,	// (0x00054e73) cams2_slider_pane_g4

0x0529,	// (0x00054e73) cams2_slider_pane_g5

0x0529,	// (0x00054e73) cams2_slider_pane_g6

0x0529,	// (0x00054e73) cams2_slider_pane_g7

0xbfdb,	// (0x00060925) camera2_autofocus_pane_cp_g1

0xde8d,	// (0x000627d7) bg_popup_preview_window_pane_cp02_ParamLimits

0xde8d,	// (0x000627d7) bg_popup_preview_window_pane_cp02

0xe598,	// (0x00062ee2) list_fp_cale_pane_ParamLimits

0xe598,	// (0x00062ee2) list_fp_cale_pane

0xe5a4,	// (0x00062eee) popup_fixed_preview_cale_window_t1_ParamLimits

0xe5a4,	// (0x00062eee) popup_fixed_preview_cale_window_t1

0x6ec9,	// (0x0005b813) popup_fixed_preview_cale_window_t2_ParamLimits

0x6ec9,	// (0x0005b813) popup_fixed_preview_cale_window_t2

0x6ede,	// (0x0005b828) popup_fixed_preview_cale_window_t3_ParamLimits

0x6ede,	// (0x0005b828) popup_fixed_preview_cale_window_t3

0x0002,

0xf6e2,	// (0x0006402c) popup_fixed_preview_cale_window_t_ParamLimits

0xf6e2,	// (0x0006402c) popup_fixed_preview_cale_window_t

0x6ef3,	// (0x0005b83d) list_single_fp_cale_pane_ParamLimits

0x6ef3,	// (0x0005b83d) list_single_fp_cale_pane

0xe5c2,	// (0x00062f0c) list_single_fp_cale_pane_g1_ParamLimits

0xe5c2,	// (0x00062f0c) list_single_fp_cale_pane_g1

0xe5ce,	// (0x00062f18) list_single_fp_cale_pane_g2_ParamLimits

0xe5ce,	// (0x00062f18) list_single_fp_cale_pane_g2

0x0002,

0xf6e9,	// (0x00064033) list_single_fp_cale_pane_g_ParamLimits

0xf6e9,	// (0x00064033) list_single_fp_cale_pane_g

0xe5e7,	// (0x00062f31) list_single_fp_cale_pane_t1_ParamLimits

0xe5e7,	// (0x00062f31) list_single_fp_cale_pane_t1

0xe5f9,	// (0x00062f43) list_single_fp_cale_pane_t2_ParamLimits

0xe5f9,	// (0x00062f43) list_single_fp_cale_pane_t2

0x0001,

0xf6f0,	// (0x0006403a) list_single_fp_cale_pane_t_ParamLimits

0xf6f0,	// (0x0006403a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x33d6,	// (0x00057d20) main_dialer_pane

0x10b1,	// (0x000559fb) aid_cell_size_keypad

0x10b1,	// (0x000559fb) dialer_ne_pane

0x10b1,	// (0x000559fb) grid_dialer_command_1_pane

0x10b1,	// (0x000559fb) grid_dialer_command_2_pane

0x10b1,	// (0x000559fb) grid_dialer_keypad_pane

0xdbc7,	// (0x00062511) bg_popup_call_pane_cp06_ParamLimits

0xdbc7,	// (0x00062511) bg_popup_call_pane_cp06

0xdbc7,	// (0x00062511) dialer_ne_clear_pane_ParamLimits

0xdbc7,	// (0x00062511) dialer_ne_clear_pane

0xbfdb,	// (0x00060925) dialer_ne_pane_g1

0xbff9,	// (0x00060943) dialer_ne_pane_t1_ParamLimits

0xbff9,	// (0x00060943) dialer_ne_pane_t1

0xe62c,	// (0x00062f76) dialer_ne_pane_t2_ParamLimits

0xe62c,	// (0x00062f76) dialer_ne_pane_t2

0x6f03,	// (0x0005b84d) dialer_ne_pane_t3_ParamLimits

0x6f03,	// (0x0005b84d) dialer_ne_pane_t3

0x0002,

0xf6f5,	// (0x0006403f) dialer_ne_pane_t_ParamLimits

0xf6f5,	// (0x0006403f) dialer_ne_pane_t

0x6f03,	// (0x0005b84d) dialer_ne_pane_t3_copy1_ParamLimits

0x6f03,	// (0x0005b84d) dialer_ne_pane_t3_copy1

0xe649,	// (0x00062f93) cell_dialer_keypad_pane_ParamLimits

0xe649,	// (0x00062f93) cell_dialer_keypad_pane

0x3588,	// (0x00057ed2) cell_dialer_command_1_pane_ParamLimits

0x3588,	// (0x00057ed2) cell_dialer_command_1_pane

0xe660,	// (0x00062faa) cell_dialer_command_2_pane_ParamLimits

0xe660,	// (0x00062faa) cell_dialer_command_2_pane

0x3588,	// (0x00057ed2) bg_button_pane_cp02_ParamLimits

0x3588,	// (0x00057ed2) bg_button_pane_cp02

0x35ef,	// (0x00057f39) cell_dialer_keypad_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) cell_dialer_keypad_pane_g1

0x3588,	// (0x00057ed2) bg_button_pane_cp03_ParamLimits

0x3588,	// (0x00057ed2) bg_button_pane_cp03

0x35ef,	// (0x00057f39) cell_dialer_command_1_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) cell_dialer_command_1_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp04

0xbfdb,	// (0x00060925) cell_dialer_command_2_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp06

0xbfdb,	// (0x00060925) dialer_ne_clear_pane_g1

0x5666,	// (0x00059fb0) navi_pane_g2

0x5694,	// (0x00059fde) navi_pane_g3

0x0002,

0xf334,	// (0x00063c7e) navi_pane_g

0x56bf,	// (0x0005a009) navi_pane_mv_g2

0x56e6,	// (0x0005a030) navi_pane_mv_g5

0x56ee,	// (0x0005a038) navi_pane_mv_t1

0xc039,	// (0x00060983) main_clock2_pane

0x35e1,	// (0x00057f2b) main_clock2_list_pane_ParamLimits

0x35e1,	// (0x00057f2b) main_clock2_list_pane

0x6f78,	// (0x0005b8c2) main_clock2_pane_t1_ParamLimits

0x6f78,	// (0x0005b8c2) main_clock2_pane_t1

0x6fa6,	// (0x0005b8f0) main_clock2_pane_t2_ParamLimits

0x6fa6,	// (0x0005b8f0) main_clock2_pane_t2

0x0004,

0xf701,	// (0x0006404b) main_clock2_pane_t_ParamLimits

0xf701,	// (0x0006404b) main_clock2_pane_t

0x700b,	// (0x0005b955) popup_clock_analogue_window_cp03_ParamLimits

0x700b,	// (0x0005b955) popup_clock_analogue_window_cp03

0x7029,	// (0x0005b973) popup_clock_digital_window_cp02_ParamLimits

0x7029,	// (0x0005b973) popup_clock_digital_window_cp02

0x709e,	// (0x0005b9e8) main_clock2_list_single_pane_ParamLimits

0x709e,	// (0x0005b9e8) main_clock2_list_single_pane

0xc1d7,	// (0x00060b21) list_highlight_pane_cp05

0xe6a1,	// (0x00062feb) main_clock2_list_single_pane_t1

0x4274,	// (0x00058bbe) popup_toolbar_window_cp04_ParamLimits

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g2

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g3_ParamLimits

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g3

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g4_ParamLimits

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g4

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g5_ParamLimits

0x35fd,	// (0x00057f47) camera2_autofocus_pane_g5

0x0004,

0xf645,	// (0x00063f8f) camera2_autofocus_pane_g_ParamLimits

0xf645,	// (0x00063f8f) camera2_autofocus_pane_g

0x6878,	// (0x0005b1c2) camera2_autofocus_pane_cp_g2

0x6880,	// (0x0005b1ca) camera2_autofocus_pane_cp_g3

0x6888,	// (0x0005b1d2) camera2_autofocus_pane_cp_g4

0x6890,	// (0x0005b1da) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ab,	// (0x00063ff5) camera2_autofocus_pane_cp_g

0x10b1,	// (0x000559fb) popup_dialer_spcha_window

0x10b1,	// (0x000559fb) bg_popup_sub_pane_cp07

0x10b1,	// (0x000559fb) list_spcha_pane

0xe6af,	// (0x00062ff9) list_single_spcha_pane_ParamLimits

0xe6af,	// (0x00062ff9) list_single_spcha_pane

0x10b1,	// (0x000559fb) list_highlight_pane_cp06

0xc731,	// (0x0006107b) list_single_spcha_pane_t1

0xd951,	// (0x0006229b) popup_call2_audio_out_window_g4_ParamLimits

0xd951,	// (0x0006229b) popup_call2_audio_out_window_g4

0x33d6,	// (0x00057d20) main_imed2_pane

0x6243,	// (0x0005ab8d) popup_imed_adjust2_window

0x6256,	// (0x0005aba0) popup_imed_trans_window_ParamLimits

0x6256,	// (0x0005aba0) popup_imed_trans_window

0xe114,	// (0x00062a5e) popup_blid_sat_info2_window_t1

0xe122,	// (0x00062a6c) popup_blid_sat_info2_window_t2

0x000a,

0xf5da,	// (0x00063f24) popup_blid_sat_info2_window_t

0x7155,	// (0x0005ba9f) aid_size_cell_colour_35

0x716f,	// (0x0005bab9) aid_size_cell_colour_112

0x7186,	// (0x0005bad0) aid_size_cell_effect

0x3588,	// (0x00057ed2) bg_tb_trans_pane_cp02

0xd613,	// (0x00061f5d) heading_imed_pane

0x71a0,	// (0x0005baea) listscroll_imed_pane

0xe6c1,	// (0x0006300b) heading_imed_pane_g1

0xe6c9,	// (0x00063013) heading_imed_pane_t1

0xe6d7,	// (0x00063021) grid_imed_colour_35_pane_ParamLimits

0xe6d7,	// (0x00063021) grid_imed_colour_35_pane

0x71ac,	// (0x0005baf6) grid_imed_effect_pane

0xe6f3,	// (0x0006303d) list_imed_aspect_pane

0x71bc,	// (0x0005bb06) scroll_pane_cp027_ParamLimits

0x71bc,	// (0x0005bb06) scroll_pane_cp027

0x71c8,	// (0x0005bb12) cell_imed_effect_pane_ParamLimits

0x71c8,	// (0x0005bb12) cell_imed_effect_pane

0xe6fb,	// (0x00063045) cell_imed_colour_pane_ParamLimits

0xe6fb,	// (0x00063045) cell_imed_colour_pane

0xe745,	// (0x0006308f) cell_imed_colour_pane_g1_ParamLimits

0xe745,	// (0x0006308f) cell_imed_colour_pane_g1

0xe756,	// (0x000630a0) hgihlgiht_grid_pane_cp016_ParamLimits

0xe756,	// (0x000630a0) hgihlgiht_grid_pane_cp016

0x71e4,	// (0x0005bb2e) cell_imed_effect_pane_g1

0x71ec,	// (0x0005bb36) grid_highlight_pane_cp017

0xe767,	// (0x000630b1) list_imed_single_pane_ParamLimits

0xe767,	// (0x000630b1) list_imed_single_pane

0x10b1,	// (0x000559fb) list_highlight_pane_cp07

0xe77b,	// (0x000630c5) list_imed_aspect_pane_comp1_t1

0xcca8,	// (0x000615f2) bg_tb_trans_pane_cp05

0xe79d,	// (0x000630e7) popup_imed_adjust2_window_g1

0xe7c4,	// (0x0006310e) popup_imed_adjust2_window_t1

0xe7dc,	// (0x00063126) slider_imed_adjust_pane

0xe7f0,	// (0x0006313a) slider_imed_adjust_pane_g1

0xe800,	// (0x0006314a) slider_imed_adjust_pane_g2

0xe810,	// (0x0006315a) slider_imed_adjust_pane_g3

0xe821,	// (0x0006316b) slider_imed_adjust_pane_g4

0x0003,

0xf71e,	// (0x00064068) slider_imed_adjust_pane_g

0x71f5,	// (0x0005bb3f) aid_size_cell_clipart2

0xe832,	// (0x0006317c) grid_imed_clipart_pane

0xcc46,	// (0x00061590) scroll_pane_cp031

0x7201,	// (0x0005bb4b) cell_imed_clipart_pane_ParamLimits

0x7201,	// (0x0005bb4b) cell_imed_clipart_pane

0x721f,	// (0x0005bb69) cell_imed_clipart_pane_g1

0x10b1,	// (0x000559fb) grid_highlight_pane_cp014

0x6f5a,	// (0x0005b8a4) main_clock2_pane_g1_ParamLimits

0x6f5a,	// (0x0005b8a4) main_clock2_pane_g1

0x7045,	// (0x0005b98f) aid_call2_pane_cp10

0x7057,	// (0x0005b9a1) aid_call_pane_cp10

0xca3d,	// (0x00061387) popup_clock_analogue_window_cp10_g1

0xca3d,	// (0x00061387) popup_clock_analogue_window_cp10_g2

0x7069,	// (0x0005b9b3) popup_clock_analogue_window_cp10_g3

0x7069,	// (0x0005b9b3) popup_clock_analogue_window_cp10_g4

0xca3d,	// (0x00061387) popup_clock_analogue_window_cp10_g5

0x0004,

0xf70c,	// (0x00064056) popup_clock_analogue_window_cp10_g

0x707f,	// (0x0005b9c9) popup_clock_analogue_window_cp10_t1

0x70b0,	// (0x0005b9fa) clock_digital_number_pane_cp10_ParamLimits

0x70b0,	// (0x0005b9fa) clock_digital_number_pane_cp10

0x70ca,	// (0x0005ba14) clock_digital_number_pane_cp11_ParamLimits

0x70ca,	// (0x0005ba14) clock_digital_number_pane_cp11

0x70e4,	// (0x0005ba2e) clock_digital_number_pane_cp12_ParamLimits

0x70e4,	// (0x0005ba2e) clock_digital_number_pane_cp12

0x70fe,	// (0x0005ba48) clock_digital_number_pane_cp13_ParamLimits

0x70fe,	// (0x0005ba48) clock_digital_number_pane_cp13

0x711a,	// (0x0005ba64) clock_digital_separator_pane_cp10_ParamLimits

0x711a,	// (0x0005ba64) clock_digital_separator_pane_cp10

0x7134,	// (0x0005ba7e) popup_clock_digital_window_cp02_t1_ParamLimits

0x7134,	// (0x0005ba7e) popup_clock_digital_window_cp02_t1

0x355e,	// (0x00057ea8) clock_digital_number_pane_cp10_g1

0x355e,	// (0x00057ea8) clock_digital_number_pane_cp10_g2

0x0001,

0xf727,	// (0x00064071) clock_digital_number_pane_cp10_g

0x355e,	// (0x00057ea8) clock_digital_separator_pane_cp10_g1

0x355e,	// (0x00057ea8) clock_digital_separator_pane_g2_cp10

0xcad8,	// (0x00061422) navi_pane_vded_g4

0xcae1,	// (0x0006142b) navi_pane_vded_g5

0xcaea,	// (0x00061434) navi_pane_vded_t1

0x33d6,	// (0x00057d20) main_vded_pane

0x7228,	// (0x0005bb72) main_vded_pane_g1

0x7234,	// (0x0005bb7e) main_vded_pane_g2

0x723e,	// (0x0005bb88) main_vded_pane_g3

0x0002,

0xf72c,	// (0x00064076) main_vded_pane_g

0x7248,	// (0x0005bb92) main_vded_pane_t1

0x7256,	// (0x0005bba0) main_vded_pane_t2

0x0001,

0xf733,	// (0x0006407d) main_vded_pane_t

0x7264,	// (0x0005bbae) vded_slider_pane

0x726e,	// (0x0005bbb8) vded_video_pane

0xe83c,	// (0x00063186) vded_video_pane_g1

0x727a,	// (0x0005bbc4) vded_video_pane_g2

0xbfdb,	// (0x00060925) vded_video_pane_g3

0x0002,

0xf738,	// (0x00064082) vded_video_pane_g

0xe846,	// (0x00063190) vded_slider_pane_g1

0xe01d,	// (0x00062967) vded_slider_pane_g2

0xe84f,	// (0x00063199) vded_slider_pane_g3

0xe858,	// (0x000631a2) vded_slider_pane_g4

0xe861,	// (0x000631ab) vded_slider_pane_g5

0x0004,

0xf73f,	// (0x00064089) vded_slider_pane_g

0x6e53,	// (0x0005b79d) mup3_rocker_pane_ParamLimits

0x6e53,	// (0x0005b79d) mup3_rocker_pane

0x7283,	// (0x0005bbcd) mup3_control_keys_pane_g1

0x728b,	// (0x0005bbd5) mup3_control_keys_pane_g2

0x7293,	// (0x0005bbdd) mup3_control_keys_pane_g3

0x729b,	// (0x0005bbe5) mup3_control_keys_pane_g4

0x0003,

0xf74a,	// (0x00064094) mup3_control_keys_pane_g

0x338a,	// (0x00057cd4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x338a,	// (0x00057cd4) popup_toolbar2_fixed_window_cp01

0x6e6f,	// (0x0005b7b9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6e6f,	// (0x0005b7b9) popup_toolbar2_fixed_window_cp02

0xd1f5,	// (0x00061b3f) popup_call2_audio_second_window_t4_ParamLimits

0xd1f5,	// (0x00061b3f) popup_call2_audio_second_window_t4

0xd816,	// (0x00062160) popup_call2_audio_first_window_t6_ParamLimits

0xd816,	// (0x00062160) popup_call2_audio_first_window_t6

0xda54,	// (0x0006239e) popup_call2_audio_out_window_t6_ParamLimits

0xda54,	// (0x0006239e) popup_call2_audio_out_window_t6

0x33d6,	// (0x00057d20) main_vitu_pane

0x35e1,	// (0x00057f2b) aid_size_cell_itu_ParamLimits

0x35e1,	// (0x00057f2b) aid_size_cell_itu

0x35e1,	// (0x00057f2b) bg_popup_window_pane_cp08_ParamLimits

0x35e1,	// (0x00057f2b) bg_popup_window_pane_cp08

0x35e1,	// (0x00057f2b) field_vitu_entry_pane_ParamLimits

0x35e1,	// (0x00057f2b) field_vitu_entry_pane

0x35e1,	// (0x00057f2b) grid_vitu_function_pane_ParamLimits

0x35e1,	// (0x00057f2b) grid_vitu_function_pane

0x35e1,	// (0x00057f2b) grid_vitu_itu_pane_ParamLimits

0x35e1,	// (0x00057f2b) grid_vitu_itu_pane

0x35e1,	// (0x00057f2b) cell_vitu_itu_pane_ParamLimits

0x35e1,	// (0x00057f2b) cell_vitu_itu_pane

0x35e1,	// (0x00057f2b) cell_vitu_function_pane_ParamLimits

0x35e1,	// (0x00057f2b) cell_vitu_function_pane

0x3588,	// (0x00057ed2) bg_popup_sub_pane_cp08_ParamLimits

0x3588,	// (0x00057ed2) bg_popup_sub_pane_cp08

0xbfe5,	// (0x0006092f) field_vitu_entry_pane_t1_ParamLimits

0xbfe5,	// (0x0006092f) field_vitu_entry_pane_t1

0xe62c,	// (0x00062f76) field_vitu_entry_pane_t2_ParamLimits

0xe62c,	// (0x00062f76) field_vitu_entry_pane_t2

0x0001,

0xf753,	// (0x0006409d) field_vitu_entry_pane_t_ParamLimits

0xf753,	// (0x0006409d) field_vitu_entry_pane_t

0xdbc7,	// (0x00062511) bg_button_pane_cp05_ParamLimits

0xdbc7,	// (0x00062511) bg_button_pane_cp05

0xe86a,	// (0x000631b4) cell_vitu_itu_pane_g1

0xd61f,	// (0x00061f69) cell_vitu_itu_pane_t1_ParamLimits

0xd61f,	// (0x00061f69) cell_vitu_itu_pane_t1

0xd61f,	// (0x00061f69) cell_vitu_itu_pane_t2_ParamLimits

0xd61f,	// (0x00061f69) cell_vitu_itu_pane_t2

0x0002,

0xf758,	// (0x000640a2) cell_vitu_itu_pane_t_ParamLimits

0xf758,	// (0x000640a2) cell_vitu_itu_pane_t

0x10b1,	// (0x000559fb) bg_button_pane_cp07

0xbfdb,	// (0x00060925) cell_vitu_function_pane_g1

0x36a5,	// (0x00057fef) main_calc_pane_g1

0x31df,	// (0x00057b29) aid_visual_content_pane

0x33d6,	// (0x00057d20) main_vradio_pane

0x35fd,	// (0x00057f47) main_vradio_pane_g1_ParamLimits

0x35fd,	// (0x00057f47) main_vradio_pane_g1

0x35fd,	// (0x00057f47) main_vradio_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) main_vradio_pane_g2

0x0001,

0xf4ef,	// (0x00063e39) main_vradio_pane_g_ParamLimits

0xf4ef,	// (0x00063e39) main_vradio_pane_g

0xbff9,	// (0x00060943) main_vradio_pane_t1_ParamLimits

0xbff9,	// (0x00060943) main_vradio_pane_t1

0xbff9,	// (0x00060943) main_vradio_pane_t2_ParamLimits

0xbff9,	// (0x00060943) main_vradio_pane_t2

0xbff9,	// (0x00060943) main_vradio_pane_t3_ParamLimits

0xbff9,	// (0x00060943) main_vradio_pane_t3

0x0002,

0xf75f,	// (0x000640a9) main_vradio_pane_t_ParamLimits

0xf75f,	// (0x000640a9) main_vradio_pane_t

0x35e1,	// (0x00057f2b) vradio_rocker_control_pane_ParamLimits

0x35e1,	// (0x00057f2b) vradio_rocker_control_pane

0x35e1,	// (0x00057f2b) vradio_station_info_pane_ParamLimits

0x35e1,	// (0x00057f2b) vradio_station_info_pane

0x3588,	// (0x00057ed2) vradio_frequency_info_pane_ParamLimits

0x3588,	// (0x00057ed2) vradio_frequency_info_pane

0xbfdb,	// (0x00060925) vradio_station_info_pane_g1

0xd61f,	// (0x00061f69) vradio_station_info_pane_t1_ParamLimits

0xd61f,	// (0x00061f69) vradio_station_info_pane_t1

0xbff9,	// (0x00060943) vradio_station_info_pane_t2_ParamLimits

0xbff9,	// (0x00060943) vradio_station_info_pane_t2

0x0001,

0xf766,	// (0x000640b0) vradio_station_info_pane_t_ParamLimits

0xf766,	// (0x000640b0) vradio_station_info_pane_t

0x10b1,	// (0x000559fb) vradio_tuning_pane

0x72ab,	// (0x0005bbf5) vradio_rocker_control_pane_g1

0xe886,	// (0x000631d0) vradio_rocker_control_pane_g2

0x72b3,	// (0x0005bbfd) vradio_rocker_control_pane_g3

0x72bb,	// (0x0005bc05) vradio_rocker_control_pane_g4

0x72c5,	// (0x0005bc0f) vradio_rocker_control_pane_g5

0x0004,

0xf76b,	// (0x000640b5) vradio_rocker_control_pane_g

0xbfdb,	// (0x00060925) vradio_frequency_info_pane_g1

0xbfe5,	// (0x0006092f) vradio_frequency_info_pane_t1_ParamLimits

0xbfe5,	// (0x0006092f) vradio_frequency_info_pane_t1

0x72cd,	// (0x0005bc17) vradio_tuning_pane_g1

0x72da,	// (0x0005bc24) vradio_tuning_pane_t1

0x3228,	// (0x00057b72) area_side_right_pane_ParamLimits

0x3228,	// (0x00057b72) area_side_right_pane

0xde54,	// (0x0006279e) status_small_pane_g1

0xde5c,	// (0x000627a6) status_small_pane_g2

0xde65,	// (0x000627af) status_small_pane_g3

0xde6e,	// (0x000627b8) status_small_pane_g4

0x0003,

0xf53c,	// (0x00063e86) status_small_pane_g

0xde77,	// (0x000627c1) status_small_pane_t1

0x33d6,	// (0x00057d20) main_video3_pane

0x10b1,	// (0x000559fb) cams_zoom_vslider_pane

0xe88e,	// (0x000631d8) image3_wide_pane_ParamLimits

0xe88e,	// (0x000631d8) image3_wide_pane

0x10b1,	// (0x000559fb) image3_wide_small_pane

0xe8a8,	// (0x000631f2) main_video3_pane_g1_ParamLimits

0xe8a8,	// (0x000631f2) main_video3_pane_g1

0xe8a8,	// (0x000631f2) main_video3_pane_g2_ParamLimits

0xe8a8,	// (0x000631f2) main_video3_pane_g2

0x0001,

0xf776,	// (0x000640c0) main_video3_pane_g_ParamLimits

0xf776,	// (0x000640c0) main_video3_pane_g

0xe8c6,	// (0x00063210) main_video3_pane_t1_ParamLimits

0xe8c6,	// (0x00063210) main_video3_pane_t1

0xe8c6,	// (0x00063210) main_video3_pane_t2_ParamLimits

0xe8c6,	// (0x00063210) main_video3_pane_t2

0xe8c6,	// (0x00063210) main_video3_pane_t3_ParamLimits

0xe8c6,	// (0x00063210) main_video3_pane_t3

0x0002,

0xf77b,	// (0x000640c5) main_video3_pane_t_ParamLimits

0xf77b,	// (0x000640c5) main_video3_pane_t

0xbfdb,	// (0x00060925) cams_zoom_vslider_pane_g1

0xbfdb,	// (0x00060925) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000639f9) cams_zoom_vslider_pane_g

0x10b1,	// (0x000559fb) small_slider_vertical_pane

0xbfdb,	// (0x00060925) small_slider_vertical_pane_g1

0xbfdb,	// (0x00060925) small_slider_vertical_pane_g2

0xe8ed,	// (0x00063237) small_slider_vertical_pane_g3

0x0002,

0xf782,	// (0x000640cc) small_slider_vertical_pane_g

0x33d6,	// (0x00057d20) main_hwr_training_pane

0xe8f6,	// (0x00063240) hwr_training_instruct_pane_ParamLimits

0xe8f6,	// (0x00063240) hwr_training_instruct_pane

0x72e9,	// (0x0005bc33) hwr_training_navi_pane_ParamLimits

0x72e9,	// (0x0005bc33) hwr_training_navi_pane

0x7303,	// (0x0005bc4d) hwr_training_write_pane_ParamLimits

0x7303,	// (0x0005bc4d) hwr_training_write_pane

0x10b1,	// (0x000559fb) bg_frame_shadow_pane

0xe92d,	// (0x00063277) hwr_training_write_pane_g1

0xe935,	// (0x0006327f) hwr_training_write_pane_g2

0xe93d,	// (0x00063287) hwr_training_write_pane_g3

0xe945,	// (0x0006328f) hwr_training_write_pane_g4

0xe94d,	// (0x00063297) hwr_training_write_pane_g5

0xe955,	// (0x0006329f) hwr_training_write_pane_g6

0xe95d,	// (0x000632a7) hwr_training_write_pane_g7

0x0006,

0xf789,	// (0x000640d3) hwr_training_write_pane_g

0x733b,	// (0x0005bc85) hwr_training_navi_pane_g1_ParamLimits

0x733b,	// (0x0005bc85) hwr_training_navi_pane_g1

0x734d,	// (0x0005bc97) hwr_training_navi_pane_g2_ParamLimits

0x734d,	// (0x0005bc97) hwr_training_navi_pane_g2

0x735f,	// (0x0005bca9) hwr_training_navi_pane_g3_ParamLimits

0x735f,	// (0x0005bca9) hwr_training_navi_pane_g3

0x736f,	// (0x0005bcb9) hwr_training_navi_pane_g4_ParamLimits

0x736f,	// (0x0005bcb9) hwr_training_navi_pane_g4

0x0004,

0xf798,	// (0x000640e2) hwr_training_navi_pane_g_ParamLimits

0xf798,	// (0x000640e2) hwr_training_navi_pane_g

0x7389,	// (0x0005bcd3) hwr_training_navi_pane_t1

0x7397,	// (0x0005bce1) list_single_hwr_training_instruct_pane_ParamLimits

0x7397,	// (0x0005bce1) list_single_hwr_training_instruct_pane

0xe965,	// (0x000632af) list_single_hwr_training_instruct_pane_t1

0xe21b,	// (0x00062b65) bg_frame_shadow_pane_g1

0xe974,	// (0x000632be) bg_frame_shadow_pane_g2

0xe97c,	// (0x000632c6) bg_frame_shadow_pane_g3

0xe984,	// (0x000632ce) bg_frame_shadow_pane_g4

0xe98c,	// (0x000632d6) bg_frame_shadow_pane_g5

0xe994,	// (0x000632de) bg_frame_shadow_pane_g6

0xe99c,	// (0x000632e6) bg_frame_shadow_pane_g7

0xc0e8,	// (0x00060a32) bg_frame_shadow_pane_g8

0x0007,

0xf7a3,	// (0x000640ed) bg_frame_shadow_pane_g

0x33d6,	// (0x00057d20) main_video_tele_dialer_pane

0x73b0,	// (0x0005bcfa) aid_size_cell_video_keypad_ParamLimits

0x73b0,	// (0x0005bcfa) aid_size_cell_video_keypad

0x73c0,	// (0x0005bd0a) grid_video_dialer_keypad_pane_ParamLimits

0x73c0,	// (0x0005bd0a) grid_video_dialer_keypad_pane

0x73f2,	// (0x0005bd3c) video_down_pane_cp_ParamLimits

0x73f2,	// (0x0005bd3c) video_down_pane_cp

0x741c,	// (0x0005bd66) cell_video_dialer_keypad_pane_ParamLimits

0x741c,	// (0x0005bd66) cell_video_dialer_keypad_pane

0xe9a4,	// (0x000632ee) bg_button_pane_cp08_ParamLimits

0xe9a4,	// (0x000632ee) bg_button_pane_cp08

0x7433,	// (0x0005bd7d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7433,	// (0x0005bd7d) cell_video_dialer_keypad_pane_g1

0x6e47,	// (0x0005b791) mup3_rocker2_pane_ParamLimits

0x6e47,	// (0x0005b791) mup3_rocker2_pane

0xbfdb,	// (0x00060925) mup3_rocker2_pane_g1

0x61a7,	// (0x0005aaf1) main_dialer2_pane

0x33d6,	// (0x00057d20) main_mp4_pane

0x748c,	// (0x0005bdd6) main_mp4_pane_g1_ParamLimits

0x748c,	// (0x0005bdd6) main_mp4_pane_g1

0x74ae,	// (0x0005bdf8) main_mp4_pane_g2_ParamLimits

0x74ae,	// (0x0005bdf8) main_mp4_pane_g2

0x74cc,	// (0x0005be16) main_mp4_pane_g3_ParamLimits

0x74cc,	// (0x0005be16) main_mp4_pane_g3

0x7507,	// (0x0005be51) main_mp4_pane_g4_ParamLimits

0x7507,	// (0x0005be51) main_mp4_pane_g4

0x752f,	// (0x0005be79) main_mp4_pane_g5_ParamLimits

0x752f,	// (0x0005be79) main_mp4_pane_g5

0x0007,

0xf7c3,	// (0x0006410d) main_mp4_pane_g_ParamLimits

0xf7c3,	// (0x0006410d) main_mp4_pane_g

0x7597,	// (0x0005bee1) main_mp4_pane_t1_ParamLimits

0x7597,	// (0x0005bee1) main_mp4_pane_t1

0x75f9,	// (0x0005bf43) main_mp4_pane_t2_ParamLimits

0x75f9,	// (0x0005bf43) main_mp4_pane_t2

0x765d,	// (0x0005bfa7) main_mp4_pane_t3_ParamLimits

0x765d,	// (0x0005bfa7) main_mp4_pane_t3

0x76bb,	// (0x0005c005) main_mp4_pane_t4_ParamLimits

0x76bb,	// (0x0005c005) main_mp4_pane_t4

0x0003,

0xf7d4,	// (0x0006411e) main_mp4_pane_t_ParamLimits

0xf7d4,	// (0x0006411e) main_mp4_pane_t

0x7719,	// (0x0005c063) mp4_progress_pane_ParamLimits

0x7719,	// (0x0005c063) mp4_progress_pane

0x774d,	// (0x0005c097) mp4_rocker_pane_ParamLimits

0x774d,	// (0x0005c097) mp4_rocker_pane

0xe9b8,	// (0x00063302) mp4_progress_pane_t1

0xe9da,	// (0x00063324) mp4_progress_pane_t2

0x0001,

0xf7dd,	// (0x00064127) mp4_progress_pane_t

0xe9fc,	// (0x00063346) mup_progress_pane_cp04

0x0529,	// (0x00054e73) mp4_rocker_pane_g1

0x33bc,	// (0x00057d06) aid_cell_size_keypad2_ParamLimits

0x33bc,	// (0x00057d06) aid_cell_size_keypad2

0x33bc,	// (0x00057d06) dialer2_ne_pane_ParamLimits

0x33bc,	// (0x00057d06) dialer2_ne_pane

0x33bc,	// (0x00057d06) grid_dialer2_keypad_pane_ParamLimits

0x33bc,	// (0x00057d06) grid_dialer2_keypad_pane

0xe074,	// (0x000629be) bg_popup_call_pane_cp07_ParamLimits

0xe074,	// (0x000629be) bg_popup_call_pane_cp07

0x7763,	// (0x0005c0ad) dialer2_ne_pane_t1_ParamLimits

0x7763,	// (0x0005c0ad) dialer2_ne_pane_t1

0x7788,	// (0x0005c0d2) cell_dialer2_keypad_pane_ParamLimits

0x7788,	// (0x0005c0d2) cell_dialer2_keypad_pane

0xdbc7,	// (0x00062511) bg_button_pane_pane_cp04_ParamLimits

0xdbc7,	// (0x00062511) bg_button_pane_pane_cp04

0x35ef,	// (0x00057f39) cell_dialer2_keypad_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) cell_dialer2_keypad_pane_g1

0x4146,	// (0x00058a90) aid_placing_vt_set_content_ParamLimits

0x4146,	// (0x00058a90) aid_placing_vt_set_content

0x416e,	// (0x00058ab8) aid_placing_vt_set_title_ParamLimits

0x416e,	// (0x00058ab8) aid_placing_vt_set_title

0x33d6,	// (0x00057d20) main_image3_pane

0x77d1,	// (0x0005c11b) area_side_right_pane_cp01_ParamLimits

0x77d1,	// (0x0005c11b) area_side_right_pane_cp01

0x7800,	// (0x0005c14a) main_image3_pane_g1_ParamLimits

0x7800,	// (0x0005c14a) main_image3_pane_g1

0x780e,	// (0x0005c158) main_image3_pane_g2_ParamLimits

0x780e,	// (0x0005c158) main_image3_pane_g2

0x7827,	// (0x0005c171) main_image3_pane_g3_ParamLimits

0x7827,	// (0x0005c171) main_image3_pane_g3

0x7840,	// (0x0005c18a) main_image3_pane_g4_ParamLimits

0x7840,	// (0x0005c18a) main_image3_pane_g4

0x0003,

0xf7ec,	// (0x00064136) main_image3_pane_g_ParamLimits

0xf7ec,	// (0x00064136) main_image3_pane_g

0x7859,	// (0x0005c1a3) main_image3_pane_t1_ParamLimits

0x7859,	// (0x0005c1a3) main_image3_pane_t1

0x787e,	// (0x0005c1c8) main_image3_pane_t2_ParamLimits

0x787e,	// (0x0005c1c8) main_image3_pane_t2

0x789d,	// (0x0005c1e7) main_image3_pane_t3_ParamLimits

0x789d,	// (0x0005c1e7) main_image3_pane_t3

0x0003,

0xf7f5,	// (0x0006413f) main_image3_pane_t_ParamLimits

0xf7f5,	// (0x0006413f) main_image3_pane_t

0x35e1,	// (0x00057f2b) grid_sctrl_middle_pane_cp01_ParamLimits

0x35e1,	// (0x00057f2b) grid_sctrl_middle_pane_cp01

0x78fe,	// (0x0005c248) cell_sctrl_middle_pane_cp01_ParamLimits

0x78fe,	// (0x0005c248) cell_sctrl_middle_pane_cp01

0x790f,	// (0x0005c259) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x790f,	// (0x0005c259) cell_sctrl_middle_pane_cp01_g1

0x33d6,	// (0x00057d20) main_call4_pane

0x791c,	// (0x0005c266) aid_size_button_call4_ParamLimits

0x791c,	// (0x0005c266) aid_size_button_call4

0x7952,	// (0x0005c29c) call4_windows_pane_ParamLimits

0x7952,	// (0x0005c29c) call4_windows_pane

0x7967,	// (0x0005c2b1) grid_call4_button_pane_ParamLimits

0x7967,	// (0x0005c2b1) grid_call4_button_pane

0x7997,	// (0x0005c2e1) call4_windows_conf_pane

0x79b0,	// (0x0005c2fa) popup_call4_audio_first_window_ParamLimits

0x79b0,	// (0x0005c2fa) popup_call4_audio_first_window

0x7a00,	// (0x0005c34a) popup_call4_audio_second_window_ParamLimits

0x7a00,	// (0x0005c34a) popup_call4_audio_second_window

0x7a19,	// (0x0005c363) popup_call4_audio_wait_window_ParamLimits

0x7a19,	// (0x0005c363) popup_call4_audio_wait_window

0x7a27,	// (0x0005c371) cell_call4_button_pane_ParamLimits

0x7a27,	// (0x0005c371) cell_call4_button_pane

0x7a4a,	// (0x0005c394) bg_button_pane_cp09_ParamLimits

0x7a4a,	// (0x0005c394) bg_button_pane_cp09

0x7a56,	// (0x0005c3a0) cell_call4_button_pane_g1_ParamLimits

0x7a56,	// (0x0005c3a0) cell_call4_button_pane_g1

0x7a63,	// (0x0005c3ad) cell_call4_button_pane_t1_ParamLimits

0x7a63,	// (0x0005c3ad) cell_call4_button_pane_t1

0xea45,	// (0x0006338f) popup_call4_audio_conf_window_ParamLimits

0xea45,	// (0x0006338f) popup_call4_audio_conf_window

0x6e7c,	// (0x0005b7c6) mup3_progress_pane_t1_ParamLimits

0x6e9a,	// (0x0005b7e4) mup3_progress_pane_t2_ParamLimits

0xe555,	// (0x00062e9f) mup3_progress_pane_t3_ParamLimits

0xf6d4,	// (0x0006401e) mup3_progress_pane_t_ParamLimits

0xe572,	// (0x00062ebc) mup_progress_pane_cp03_ParamLimits

0x72a3,	// (0x0005bbed) mup3_control_keys_pane_g4_copy1

0x774d,	// (0x0005c097) mp4_rocker2_pane_ParamLimits

0x774d,	// (0x0005c097) mp4_rocker2_pane

0x7aa7,	// (0x0005c3f1) mp4_rocker2_pane_g1

0x7aa7,	// (0x0005c3f1) mp4_rocker2_pane_g2

0x7aa7,	// (0x0005c3f1) mp4_rocker2_pane_g3

0x7aa7,	// (0x0005c3f1) mp4_rocker2_pane_g4

0x7aa7,	// (0x0005c3f1) mp4_rocker2_pane_g5

0x0004,

0xf7fe,	// (0x00064148) mp4_rocker2_pane_g

0x33d6,	// (0x00057d20) main_camera4_pane

0x33d6,	// (0x00057d20) main_video4_pane

0x73ce,	// (0x0005bd18) main_video_tele_dialer_pane_t1_ParamLimits

0x73ce,	// (0x0005bd18) main_video_tele_dialer_pane_t1

0x73e0,	// (0x0005bd2a) main_video_tele_dialer_pane_t2_ParamLimits

0x73e0,	// (0x0005bd2a) main_video_tele_dialer_pane_t2

0x0001,

0xf7b4,	// (0x000640fe) main_video_tele_dialer_pane_t_ParamLimits

0xf7b4,	// (0x000640fe) main_video_tele_dialer_pane_t

0x7ac7,	// (0x0005c411) cam4_autofocus_pane_ParamLimits

0x7ac7,	// (0x0005c411) cam4_autofocus_pane

0x7adf,	// (0x0005c429) cam4_image_uncrop_pane_ParamLimits

0x7adf,	// (0x0005c429) cam4_image_uncrop_pane

0x7af8,	// (0x0005c442) cam4_indicators_pane_ParamLimits

0x7af8,	// (0x0005c442) cam4_indicators_pane

0x7b14,	// (0x0005c45e) main_camera4_pane_g1_ParamLimits

0x7b14,	// (0x0005c45e) main_camera4_pane_g1

0x7b20,	// (0x0005c46a) main_camera4_pane_g2_ParamLimits

0x7b20,	// (0x0005c46a) main_camera4_pane_g2

0x7b20,	// (0x0005c46a) main_camera4_pane_g3_ParamLimits

0x7b20,	// (0x0005c46a) main_camera4_pane_g3

0x7b2c,	// (0x0005c476) main_camera4_pane_g4_ParamLimits

0x7b2c,	// (0x0005c476) main_camera4_pane_g4

0x7b38,	// (0x0005c482) main_camera4_pane_g5_ParamLimits

0x7b38,	// (0x0005c482) main_camera4_pane_g5

0x0005,

0xf809,	// (0x00064153) main_camera4_pane_g_ParamLimits

0xf809,	// (0x00064153) main_camera4_pane_g

0x7b52,	// (0x0005c49c) main_camera4_pane_t1_ParamLimits

0x7b52,	// (0x0005c49c) main_camera4_pane_t1

0x0e53,	// (0x0005579d) bg_tb_trans_pane_cp06

0x7ba4,	// (0x0005c4ee) cam4_indicators_pane_g1

0x7bb5,	// (0x0005c4ff) cam4_indicators_pane_g2

0x0002,

0xf824,	// (0x0006416e) cam4_indicators_pane_g

0x7bcd,	// (0x0005c517) cam4_indicators_pane_t1

0x7bf7,	// (0x0005c541) main_video4_pane_g1_ParamLimits

0x7bf7,	// (0x0005c541) main_video4_pane_g1

0x7c03,	// (0x0005c54d) main_video4_pane_g2_ParamLimits

0x7c03,	// (0x0005c54d) main_video4_pane_g2

0x7c0f,	// (0x0005c559) main_video4_pane_g3_ParamLimits

0x7c0f,	// (0x0005c559) main_video4_pane_g3

0x7c1b,	// (0x0005c565) main_video4_pane_g4_ParamLimits

0x7c1b,	// (0x0005c565) main_video4_pane_g4

0x0004,

0xf82b,	// (0x00064175) main_video4_pane_g_ParamLimits

0xf82b,	// (0x00064175) main_video4_pane_g

0x7c3d,	// (0x0005c587) vid4_indicators_pane_ParamLimits

0x7c3d,	// (0x0005c587) vid4_indicators_pane

0x7c5c,	// (0x0005c5a6) video4_image_uncrop_cif_pane_ParamLimits

0x7c5c,	// (0x0005c5a6) video4_image_uncrop_cif_pane

0x7c6b,	// (0x0005c5b5) video4_image_uncrop_nhd_pane_ParamLimits

0x7c6b,	// (0x0005c5b5) video4_image_uncrop_nhd_pane

0x7adf,	// (0x0005c429) video4_image_uncrop_vga_pane_ParamLimits

0x7adf,	// (0x0005c429) video4_image_uncrop_vga_pane

0x6199,	// (0x0005aae3) bg_tb_trans_pane_cp07

0x7c84,	// (0x0005c5ce) vid4_indicators_pane_g1

0x7c9a,	// (0x0005c5e4) vid4_indicators_pane_g2

0x7cae,	// (0x0005c5f8) vid4_indicators_pane_g3

0x0004,

0xf836,	// (0x00064180) vid4_indicators_pane_g

0x7cdf,	// (0x0005c629) vid4_indicators_pane_t1

0x7cf6,	// (0x0005c640) cam4_autofocus_pane_g1

0x7cfe,	// (0x0005c648) cam4_autofocus_pane_g2

0x7d06,	// (0x0005c650) cam4_autofocus_pane_g3

0x0002,

0xf841,	// (0x0006418b) cam4_autofocus_pane_g

0x7d0e,	// (0x0005c658) cam4_autofocus_pane_g3_copy1

0x7400,	// (0x0005bd4a) video_down_pane_cp_t1

0x740e,	// (0x0005bd58) video_down_pane_cp_t2

0x0001,

0xf7b9,	// (0x00064103) video_down_pane_cp_t

0x33bc,	// (0x00057d06) popup_vitu2_window_ParamLimits

0x33bc,	// (0x00057d06) popup_vitu2_window

0x7d16,	// (0x0005c660) aid_size_cell2_itu2_ParamLimits

0x7d16,	// (0x0005c660) aid_size_cell2_itu2

0x7d38,	// (0x0005c682) aid_size_cell_itu2_ParamLimits

0x7d38,	// (0x0005c682) aid_size_cell_itu2

0x7d7c,	// (0x0005c6c6) bg_popup_window_pane_cp09_ParamLimits

0x7d7c,	// (0x0005c6c6) bg_popup_window_pane_cp09

0x7d8a,	// (0x0005c6d4) field_vitu2_entry_pane_ParamLimits

0x7d8a,	// (0x0005c6d4) field_vitu2_entry_pane

0x7daa,	// (0x0005c6f4) grid_vitu2_function_pane_ParamLimits

0x7daa,	// (0x0005c6f4) grid_vitu2_function_pane

0x7dee,	// (0x0005c738) grid_vitu2_itu_pane_ParamLimits

0x7dee,	// (0x0005c738) grid_vitu2_itu_pane

0x7e64,	// (0x0005c7ae) cell_vitu2_itu_pane_ParamLimits

0x7e64,	// (0x0005c7ae) cell_vitu2_itu_pane

0x7e7f,	// (0x0005c7c9) cell_vitu2_function_pane_ParamLimits

0x7e7f,	// (0x0005c7c9) cell_vitu2_function_pane

0xea5f,	// (0x000633a9) bg_popup_call_pane_cp08_ParamLimits

0xea5f,	// (0x000633a9) bg_popup_call_pane_cp08

0xea76,	// (0x000633c0) field_vitu2_entry_pane_g1

0xea82,	// (0x000633cc) field_vitu2_entry_pane_g2

0x0002,

0xf848,	// (0x00064192) field_vitu2_entry_pane_g

0x7ec3,	// (0x0005c80d) field_vitu2_entry_pane_t1_ParamLimits

0x7ec3,	// (0x0005c80d) field_vitu2_entry_pane_t1

0xea8e,	// (0x000633d8) field_vitu2_entry_pane_t2_ParamLimits

0xea8e,	// (0x000633d8) field_vitu2_entry_pane_t2

0x0001,

0xf84f,	// (0x00064199) field_vitu2_entry_pane_t_ParamLimits

0xf84f,	// (0x00064199) field_vitu2_entry_pane_t

0x64f9,	// (0x0005ae43) bg_button_pane_cp010_ParamLimits

0x64f9,	// (0x0005ae43) bg_button_pane_cp010

0x7ef3,	// (0x0005c83d) cell_vitu2_itu_pane_g1

0x7f19,	// (0x0005c863) cell_vitu2_itu_pane_t1_ParamLimits

0x7f19,	// (0x0005c863) cell_vitu2_itu_pane_t1

0x30c3,	// (0x00057a0d) cell_vitu2_itu_pane_t2_ParamLimits

0x30c3,	// (0x00057a0d) cell_vitu2_itu_pane_t2

0x0002,

0xf859,	// (0x000641a3) cell_vitu2_itu_pane_t_ParamLimits

0xf859,	// (0x000641a3) cell_vitu2_itu_pane_t

0x6199,	// (0x0005aae3) bg_button_pane_cp011

0x7f65,	// (0x0005c8af) cell_vitu2_function_pane_g1

0x33d6,	// (0x00057d20) main_myfav_hc_pane

0x78df,	// (0x0005c229) popup_image3_note_pane_ParamLimits

0x78df,	// (0x0005c229) popup_image3_note_pane

0x78ed,	// (0x0005c237) popup_image3_tool_bar_pane_ParamLimits

0x78ed,	// (0x0005c237) popup_image3_tool_bar_pane

0x3139,	// (0x00057a83) cell_vitu2_itu_pane_t3_ParamLimits

0x3139,	// (0x00057a83) cell_vitu2_itu_pane_t3

0x10b1,	// (0x000559fb) bg_popup_trans_pane

0xeab3,	// (0x000633fd) grid_image3_tool_bar_pane

0xeabd,	// (0x00063407) bg_popup_trans_pane_g1

0xc403,	// (0x00060d4d) bg_popup_trans_pane_g2

0xeac5,	// (0x0006340f) bg_popup_trans_pane_g3

0xeacd,	// (0x00063417) bg_popup_trans_pane_g4

0xead5,	// (0x0006341f) bg_popup_trans_pane_g5

0xeadd,	// (0x00063427) bg_popup_trans_pane_g6

0xeae5,	// (0x0006342f) bg_popup_trans_pane_g7

0xeaed,	// (0x00063437) bg_popup_trans_pane_g8

0xc3e3,	// (0x00060d2d) bg_popup_trans_pane_g9

0x0008,

0xf860,	// (0x000641aa) bg_popup_trans_pane_g

0xeaf5,	// (0x0006343f) cell_image3_tool_bar_pane_ParamLimits

0xeaf5,	// (0x0006343f) cell_image3_tool_bar_pane

0xbfdb,	// (0x00060925) cell_image3_tool_bar_pane_g1

0x10b1,	// (0x000559fb) bg_popup_trans_pane_cp1

0xeb0b,	// (0x00063455) popup_image3_note_pane_t1

0xeb19,	// (0x00063463) popup_image3_note_pane_t2

0xeb27,	// (0x00063471) popup_image3_note_pane_t3

0x0002,

0xf873,	// (0x000641bd) popup_image3_note_pane_t

0xeb37,	// (0x00063481) popup_image3_note_pane_t3_copy1

0x7f79,	// (0x0005c8c3) bg_myfav_hc_instruction_pane_ParamLimits

0x7f79,	// (0x0005c8c3) bg_myfav_hc_instruction_pane

0x7f91,	// (0x0005c8db) cell_myfav_contact_pane_ParamLimits

0x7f91,	// (0x0005c8db) cell_myfav_contact_pane

0x7fab,	// (0x0005c8f5) cell_myfav_contact_pane_cp1_ParamLimits

0x7fab,	// (0x0005c8f5) cell_myfav_contact_pane_cp1

0x7fc3,	// (0x0005c90d) cell_myfav_contact_pane_cp2_ParamLimits

0x7fc3,	// (0x0005c90d) cell_myfav_contact_pane_cp2

0x7fdb,	// (0x0005c925) cell_myfav_contact_pane_cp3_ParamLimits

0x7fdb,	// (0x0005c925) cell_myfav_contact_pane_cp3

0x7ff2,	// (0x0005c93c) cell_myfav_contact_pane_cp4_ParamLimits

0x7ff2,	// (0x0005c93c) cell_myfav_contact_pane_cp4

0x8008,	// (0x0005c952) cell_myfav_contact_pane_cp5_ParamLimits

0x8008,	// (0x0005c952) cell_myfav_contact_pane_cp5

0x801c,	// (0x0005c966) cell_myfav_contact_pane_cp6_ParamLimits

0x801c,	// (0x0005c966) cell_myfav_contact_pane_cp6

0x8030,	// (0x0005c97a) cell_myfav_contact_pane_cp7_ParamLimits

0x8030,	// (0x0005c97a) cell_myfav_contact_pane_cp7

0xeb45,	// (0x0006348f) listscroll_gen_pane_cp05

0x8048,	// (0x0005c992) main_myfav_hc_pane_g1_ParamLimits

0x8048,	// (0x0005c992) main_myfav_hc_pane_g1

0x8062,	// (0x0005c9ac) main_myfav_hc_pane_g2_ParamLimits

0x8062,	// (0x0005c9ac) main_myfav_hc_pane_g2

0x0002,

0xf87a,	// (0x000641c4) main_myfav_hc_pane_g_ParamLimits

0xf87a,	// (0x000641c4) main_myfav_hc_pane_g

0x8094,	// (0x0005c9de) main_myfav_hc_pane_t1_ParamLimits

0x8094,	// (0x0005c9de) main_myfav_hc_pane_t1

0xeb4e,	// (0x00063498) main_myfav_hc_pane_t2_ParamLimits

0xeb4e,	// (0x00063498) main_myfav_hc_pane_t2

0xeb60,	// (0x000634aa) main_myfav_hc_pane_t3_ParamLimits

0xeb60,	// (0x000634aa) main_myfav_hc_pane_t3

0x80ab,	// (0x0005c9f5) main_myfav_hc_pane_t4_ParamLimits

0x80ab,	// (0x0005c9f5) main_myfav_hc_pane_t4

0x0004,

0xf881,	// (0x000641cb) main_myfav_hc_pane_t_ParamLimits

0xf881,	// (0x000641cb) main_myfav_hc_pane_t

0xbfdb,	// (0x00060925) bg_myfav_hc_instruction_pane_g1

0xeb72,	// (0x000634bc) cell_myfav_contact_pane_g1_ParamLimits

0xeb72,	// (0x000634bc) cell_myfav_contact_pane_g1

0xeb72,	// (0x000634bc) cell_myfav_contact_pane_g2_ParamLimits

0xeb72,	// (0x000634bc) cell_myfav_contact_pane_g2

0xeb7e,	// (0x000634c8) cell_myfav_contact_pane_g3_ParamLimits

0xeb7e,	// (0x000634c8) cell_myfav_contact_pane_g3

0x35fd,	// (0x00057f47) cell_myfav_contact_pane_g4_ParamLimits

0x35fd,	// (0x00057f47) cell_myfav_contact_pane_g4

0xeb8b,	// (0x000634d5) cell_myfav_contact_pane_g5_ParamLimits

0xeb8b,	// (0x000634d5) cell_myfav_contact_pane_g5

0x0004,

0xf88c,	// (0x000641d6) cell_myfav_contact_pane_g_ParamLimits

0xf88c,	// (0x000641d6) cell_myfav_contact_pane_g

0x807c,	// (0x0005c9c6) main_myfav_hc_pane_g3_ParamLimits

0x807c,	// (0x0005c9c6) main_myfav_hc_pane_g3

0x3027,	// (0x00057971) popup_adpt_find_window

0x80d5,	// (0x0005ca1f) afind_page_pane_ParamLimits

0x80d5,	// (0x0005ca1f) afind_page_pane

0x80e2,	// (0x0005ca2c) aid_size_cell_afind_ParamLimits

0x80e2,	// (0x0005ca2c) aid_size_cell_afind

0x80fc,	// (0x0005ca46) bg_popup_sub_pane_cp09_ParamLimits

0x80fc,	// (0x0005ca46) bg_popup_sub_pane_cp09

0x810d,	// (0x0005ca57) find_pane_cp01_ParamLimits

0x810d,	// (0x0005ca57) find_pane_cp01

0xeb97,	// (0x000634e1) grid_afind_control_pane_ParamLimits

0xeb97,	// (0x000634e1) grid_afind_control_pane

0x8120,	// (0x0005ca6a) grid_afind_pane_ParamLimits

0x8120,	// (0x0005ca6a) grid_afind_pane

0x813c,	// (0x0005ca86) cell_afind_pane_ParamLimits

0x813c,	// (0x0005ca86) cell_afind_pane

0xbfdb,	// (0x00060925) afind_page_pane_g1

0x8184,	// (0x0005cace) afind_page_pane_g2

0x818c,	// (0x0005cad6) afind_page_pane_g3

0x0002,

0xf897,	// (0x000641e1) afind_page_pane_g

0x8194,	// (0x0005cade) afind_page_pane_t1

0xebbd,	// (0x00063507) cell_afind_grid_control_pane_ParamLimits

0xebbd,	// (0x00063507) cell_afind_grid_control_pane

0xebcc,	// (0x00063516) bg_button_pane_cp69_ParamLimits

0xebcc,	// (0x00063516) bg_button_pane_cp69

0x81a2,	// (0x0005caec) cell_afind_pane_g1_ParamLimits

0x81a2,	// (0x0005caec) cell_afind_pane_g1

0x81af,	// (0x0005caf9) cell_afind_pane_t1_ParamLimits

0x81af,	// (0x0005caf9) cell_afind_pane_t1

0xebd8,	// (0x00063522) bg_button_pane_cp72

0xebe0,	// (0x0006352a) cell_afind_grid_control_pane_g1

0x5d33,	// (0x0005a67d) aid_image_placing_area_ParamLimits

0x5d33,	// (0x0005a67d) aid_image_placing_area

0x35ef,	// (0x00057f39) field_vitu_entry_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) field_vitu_entry_pane_g1

0x35ef,	// (0x00057f39) field_vitu_entry_pane_g2_ParamLimits

0x35ef,	// (0x00057f39) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00063b06) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00063b06) field_vitu_entry_pane_g

0xe86a,	// (0x000631b4) cell_vitu_itu_pane_g1_ParamLimits

0xe62c,	// (0x00062f76) cell_vitu_itu_pane_t3_ParamLimits

0xe62c,	// (0x00062f76) cell_vitu_itu_pane_t3

0xe9b8,	// (0x00063302) mp4_progress_pane_t1_ParamLimits

0xe9da,	// (0x00063324) mp4_progress_pane_t2_ParamLimits

0xf7dd,	// (0x00064127) mp4_progress_pane_t_ParamLimits

0xe9fc,	// (0x00063346) mup_progress_pane_cp04_ParamLimits

0x80bf,	// (0x0005ca09) main_myfav_hc_pane_t5_ParamLimits

0x80bf,	// (0x0005ca09) main_myfav_hc_pane_t5

0x31eb,	// (0x00057b35) aid_zoom_text_primary

0x3027,	// (0x00057971) popup_adpt_find_window_ParamLimits

0x6199,	// (0x0005aae3) main_cam_set_pane

0x7b06,	// (0x0005c450) cam4_zoom_pane_ParamLimits

0x7b06,	// (0x0005c450) cam4_zoom_pane

0x81c1,	// (0x0005cb0b) main_cam_set_pane_g1_ParamLimits

0x81c1,	// (0x0005cb0b) main_cam_set_pane_g1

0x81cf,	// (0x0005cb19) main_cam_set_pane_g2_ParamLimits

0x81cf,	// (0x0005cb19) main_cam_set_pane_g2

0x0001,

0xf89e,	// (0x000641e8) main_cam_set_pane_g_ParamLimits

0xf89e,	// (0x000641e8) main_cam_set_pane_g

0x81db,	// (0x0005cb25) main_cam_set_pane_t1_ParamLimits

0x81db,	// (0x0005cb25) main_cam_set_pane_t1

0x81f7,	// (0x0005cb41) main_cset_listscroll_pane_ParamLimits

0x81f7,	// (0x0005cb41) main_cset_listscroll_pane

0x822b,	// (0x0005cb75) main_cset_slider_pane_ParamLimits

0x822b,	// (0x0005cb75) main_cset_slider_pane

0xebf1,	// (0x0006353b) main_cset_list_pane_ParamLimits

0xebf1,	// (0x0006353b) main_cset_list_pane

0xec01,	// (0x0006354b) scroll_pane_cp028

0x824c,	// (0x0005cb96) aid_area_touch_slider

0x8268,	// (0x0005cbb2) cset_slider_pane

0x828b,	// (0x0005cbd5) main_cset_slider_pane_g1

0x82a0,	// (0x0005cbea) main_cset_slider_pane_g2

0x0011,

0xf8a3,	// (0x000641ed) main_cset_slider_pane_g

0xec3a,	// (0x00063584) main_cset_slider_pane_t1

0x835c,	// (0x0005cca6) main_cset_slider_pane_t2

0x8376,	// (0x0005ccc0) main_cset_slider_pane_t3

0x8390,	// (0x0005ccda) main_cset_slider_pane_t4

0x83aa,	// (0x0005ccf4) main_cset_slider_pane_t5

0x83c4,	// (0x0005cd0e) main_cset_slider_pane_t6

0x83d9,	// (0x0005cd23) main_cset_slider_pane_t7

0x000e,

0xf8c8,	// (0x00064212) main_cset_slider_pane_t

0x84dd,	// (0x0005ce27) cset_list_set_pane_ParamLimits

0x84dd,	// (0x0005ce27) cset_list_set_pane

0xecd4,	// (0x0006361e) aid_position_infowindow_above

0xecdc,	// (0x00063626) aid_position_infowindow_below

0x84ee,	// (0x0005ce38) cset_list_set_pane_g1_ParamLimits

0x84ee,	// (0x0005ce38) cset_list_set_pane_g1

0x84fa,	// (0x0005ce44) cset_list_set_pane_g3_ParamLimits

0x84fa,	// (0x0005ce44) cset_list_set_pane_g3

0x0001,

0xf8e7,	// (0x00064231) cset_list_set_pane_g_ParamLimits

0xf8e7,	// (0x00064231) cset_list_set_pane_g

0x8509,	// (0x0005ce53) cset_list_set_pane_t1_ParamLimits

0x8509,	// (0x0005ce53) cset_list_set_pane_t1

0x3588,	// (0x00057ed2) list_highlight_pane_cp021_ParamLimits

0x3588,	// (0x00057ed2) list_highlight_pane_cp021

0xcc23,	// (0x0006156d) cset_slider_pane_g1

0xcc35,	// (0x0006157f) cset_slider_pane_g2

0xcc2c,	// (0x00061576) cset_slider_pane_g3

0x0002,

0xf8ec,	// (0x00064236) cset_slider_pane_g

0xc8e1,	// (0x0006122b) aid_area_touch_cam4_zoom

0x851e,	// (0x0005ce68) cam4_zoom_cont_pane

0x8526,	// (0x0005ce70) cam4_zoom_pane_g1

0x852e,	// (0x0005ce78) cam4_zoom_pane_g2

0x8536,	// (0x0005ce80) cam4_zoom_pane_g3

0x0002,

0xf8f3,	// (0x0006423d) cam4_zoom_pane_g

0x853e,	// (0x0005ce88) cam4_zoom_cont_pane_g1

0x8547,	// (0x0005ce91) cam4_zoom_cont_pane_g2

0x8550,	// (0x0005ce9a) cam4_zoom_cont_pane_g3

0x0002,

0xf8fa,	// (0x00064244) cam4_zoom_cont_pane_g

0x7936,	// (0x0005c280) call4_image_pane_ParamLimits

0x7936,	// (0x0005c280) call4_image_pane

0x7997,	// (0x0005c2e1) call4_windows_conf_pane_ParamLimits

0x79de,	// (0x0005c328) popup_call4_audio_in_window_ParamLimits

0x79de,	// (0x0005c328) popup_call4_audio_in_window

0x10b1,	// (0x000559fb) bg_popup_call2_act_pane_cp02

0xea3d,	// (0x00063387) call4_list_conf_pane

0xbfdb,	// (0x00060925) call4_image_pane_g1

0xbfdb,	// (0x00060925) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000639f9) call4_image_pane_g

0xece4,	// (0x0006362e) list_single_graphic_popup_conf4_pane_ParamLimits

0xece4,	// (0x0006362e) list_single_graphic_popup_conf4_pane

0x10b1,	// (0x000559fb) list_highlight_pane_cp022

0xecf9,	// (0x00063643) list_single_graphic_popup_conf4_pane_g1

0xc93a,	// (0x00061284) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf901,	// (0x0006424b) list_single_graphic_popup_conf4_pane_g

0xed01,	// (0x0006364b) list_single_graphic_popup_conf4_pane_t1

0x42c8,	// (0x00058c12) popup_vtel_slider_window_ParamLimits

0x42c8,	// (0x00058c12) popup_vtel_slider_window

0xea0f,	// (0x00063359) dialer2_ne_pane_t2_ParamLimits

0xea0f,	// (0x00063359) dialer2_ne_pane_t2

0x0001,

0xf7e2,	// (0x0006412c) dialer2_ne_pane_t_ParamLimits

0xf7e2,	// (0x0006412c) dialer2_ne_pane_t

0x3588,	// (0x00057ed2) bg_popup_sub_pane_cp010_ParamLimits

0x3588,	// (0x00057ed2) bg_popup_sub_pane_cp010

0x8559,	// (0x0005cea3) popup_vtel_slider_window_g1_ParamLimits

0x8559,	// (0x0005cea3) popup_vtel_slider_window_g1

0x8565,	// (0x0005ceaf) popup_vtel_slider_window_g2_ParamLimits

0x8565,	// (0x0005ceaf) popup_vtel_slider_window_g2

0x0003,

0xf906,	// (0x00064250) popup_vtel_slider_window_g_ParamLimits

0xf906,	// (0x00064250) popup_vtel_slider_window_g

0x85ad,	// (0x0005cef7) vtel_slider_pane_ParamLimits

0x85ad,	// (0x0005cef7) vtel_slider_pane

0x85bc,	// (0x0005cf06) vtel_slider_pane_g1_ParamLimits

0x85bc,	// (0x0005cf06) vtel_slider_pane_g1

0x85c9,	// (0x0005cf13) vtel_slider_pane_g2_ParamLimits

0x85c9,	// (0x0005cf13) vtel_slider_pane_g2

0x85d6,	// (0x0005cf20) vtel_slider_pane_g3_ParamLimits

0x85d6,	// (0x0005cf20) vtel_slider_pane_g3

0x85bc,	// (0x0005cf06) vtel_slider_pane_g4_ParamLimits

0x85bc,	// (0x0005cf06) vtel_slider_pane_g4

0x85e3,	// (0x0005cf2d) vtel_slider_pane_g5_ParamLimits

0x85e3,	// (0x0005cf2d) vtel_slider_pane_g5

0x0004,

0xf90f,	// (0x00064259) vtel_slider_pane_g_ParamLimits

0xf90f,	// (0x00064259) vtel_slider_pane_g

0x6199,	// (0x0005aae3) main_gallery2_pane

0x7d5e,	// (0x0005c6a8) aid_size_row_itut2_dropdow_list_ParamLimits

0x7d5e,	// (0x0005c6a8) aid_size_row_itut2_dropdow_list

0x7dcc,	// (0x0005c716) grid_vitu2_function_top_pane_ParamLimits

0x7dcc,	// (0x0005c716) grid_vitu2_function_top_pane

0x7e22,	// (0x0005c76c) popup_vitu2_dropdown_list_window_ParamLimits

0x7e22,	// (0x0005c76c) popup_vitu2_dropdown_list_window

0x7e40,	// (0x0005c78a) popup_vitu2_match_list_window

0x85f0,	// (0x0005cf3a) cell_vitu2_function_top_pane_ParamLimits

0x85f0,	// (0x0005cf3a) cell_vitu2_function_top_pane

0x860a,	// (0x0005cf54) cell_vitu2_function_top_pane_cp01_ParamLimits

0x860a,	// (0x0005cf54) cell_vitu2_function_top_pane_cp01

0x8626,	// (0x0005cf70) cell_vitu2_function_top_wide_pane_ParamLimits

0x8626,	// (0x0005cf70) cell_vitu2_function_top_wide_pane

0x6199,	// (0x0005aae3) bg_button_pane_cp012

0x8644,	// (0x0005cf8e) cell_vitu2_function_top_pane_g1

0x8658,	// (0x0005cfa2) bg_button_pane_cp013_ParamLimits

0x8658,	// (0x0005cfa2) bg_button_pane_cp013

0x8674,	// (0x0005cfbe) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8674,	// (0x0005cfbe) cell_vitu2_function_top_wide_pane_g1

0x33bc,	// (0x00057d06) bg_popup_sub_pane_cp20

0x868c,	// (0x0005cfd6) list_vitu2_match_list_pane

0xeabd,	// (0x00063407) bg_popup_sub_pane_cp20_g1

0xeac5,	// (0x0006340f) bg_popup_sub_pane_cp20_g2

0xc403,	// (0x00060d4d) bg_popup_sub_pane_cp20_g3

0xeacd,	// (0x00063417) bg_popup_sub_pane_cp20_g4

0xc3e3,	// (0x00060d2d) bg_popup_sub_pane_cp20_g5

0xed17,	// (0x00063661) bg_popup_sub_pane_cp20_g6

0xeadd,	// (0x00063427) bg_popup_sub_pane_cp20_g7

0xeae5,	// (0x0006342f) bg_popup_sub_pane_cp20_g8

0xeaed,	// (0x00063437) bg_popup_sub_pane_cp20_g9

0x0008,

0xf91a,	// (0x00064264) bg_popup_sub_pane_cp20_g

0x86a4,	// (0x0005cfee) list_vitu2_match_list_item_pane_ParamLimits

0x86a4,	// (0x0005cfee) list_vitu2_match_list_item_pane

0x86b6,	// (0x0005d000) list_vitu2_match_list_item_pane_t1

0x33d6,	// (0x00057d20) bg_popup_sub_pane_cp21

0xc1d7,	// (0x00060b21) grid_vitu2_dropdown_list_pane

0x86c4,	// (0x0005d00e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x86c4,	// (0x0005d00e) cell_vitu2_dropdown_list_char_pane

0x86e8,	// (0x0005d032) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x86e8,	// (0x0005d032) cell_vitu2_dropdown_list_ctrl_pane

0xed28,	// (0x00063672) cell_vitu2_dropdown_list_char_pane_g1

0xed31,	// (0x0006367b) cell_vitu2_dropdown_list_char_pane_g2

0xed3a,	// (0x00063684) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf92d,	// (0x00064277) cell_vitu2_dropdown_list_char_pane_g

0x8712,	// (0x0005d05c) cell_vitu2_dropdown_list_char_pane_t1

0x8720,	// (0x0005d06a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8720,	// (0x0005d06a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8730,	// (0x0005d07a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8730,	// (0x0005d07a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8741,	// (0x0005d08b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8741,	// (0x0005d08b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8751,	// (0x0005d09b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8751,	// (0x0005d09b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0e53,	// (0x0005579d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0e53,	// (0x0005579d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf934,	// (0x0006427e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf934,	// (0x0006427e) cell_vitu2_dropdown_list_ctrl_pane_g

0x876a,	// (0x0005d0b4) aid_size_cell_gallery2_ParamLimits

0x876a,	// (0x0005d0b4) aid_size_cell_gallery2

0x8784,	// (0x0005d0ce) grid_gallery2_pane_ParamLimits

0x8784,	// (0x0005d0ce) grid_gallery2_pane

0x879b,	// (0x0005d0e5) scroll_pane_cp029_ParamLimits

0x879b,	// (0x0005d0e5) scroll_pane_cp029

0x87ab,	// (0x0005d0f5) cell_gallery2_pane_ParamLimits

0x87ab,	// (0x0005d0f5) cell_gallery2_pane

0xed43,	// (0x0006368d) cell_gallery2_pane_g2

0x8802,	// (0x0005d14c) cell_gallery2_pane_g3

0xed4b,	// (0x00063695) cell_gallery2_pane_g4

0xed53,	// (0x0006369d) cell_gallery2_pane_g5

0xc1d7,	// (0x00060b21) grid_highlight_pane_cp10

0x7e40,	// (0x0005c78a) popup_vitu2_match_list_window_ParamLimits

0x7e54,	// (0x0005c79e) popup_vitu2_query_window_ParamLimits

0x7e54,	// (0x0005c79e) popup_vitu2_query_window

0x33d6,	// (0x00057d20) bg_vitu2_candi_button_pane

0xed28,	// (0x00063672) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed31,	// (0x0006367b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed3a,	// (0x00063684) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x880a,	// (0x0005d154) bg_button_pane_cp015

0x881f,	// (0x0005d169) bg_button_pane_cp016

0x882b,	// (0x0005d175) bg_button_pane_cp017

0xcca8,	// (0x000615f2) bg_popup_sub_pane_cp22

0xed5b,	// (0x000636a5) popup_vitu2_query_window_g1

0x886c,	// (0x0005d1b6) popup_vitu2_query_window_g2

0x0002,

0xf93f,	// (0x00064289) popup_vitu2_query_window_g

0x8890,	// (0x0005d1da) popup_vitu2_query_window_t1_ParamLimits

0x8890,	// (0x0005d1da) popup_vitu2_query_window_t1

0x88c3,	// (0x0005d20d) popup_vitu2_query_window_t2_ParamLimits

0x88c3,	// (0x0005d20d) popup_vitu2_query_window_t2

0x88d5,	// (0x0005d21f) popup_vitu2_query_window_t3_ParamLimits

0x88d5,	// (0x0005d21f) popup_vitu2_query_window_t3

0x88fd,	// (0x0005d247) popup_vitu2_query_window_t4_ParamLimits

0x88fd,	// (0x0005d247) popup_vitu2_query_window_t4

0x8911,	// (0x0005d25b) popup_vitu2_query_window_t5_ParamLimits

0x8911,	// (0x0005d25b) popup_vitu2_query_window_t5

0x0006,

0xf946,	// (0x00064290) popup_vitu2_query_window_t_ParamLimits

0xf946,	// (0x00064290) popup_vitu2_query_window_t

0xebe9,	// (0x00063533) main_cset_text_pane

0x824c,	// (0x0005cb96) aid_area_touch_slider_ParamLimits

0x8268,	// (0x0005cbb2) cset_slider_pane_ParamLimits

0x828b,	// (0x0005cbd5) main_cset_slider_pane_g1_ParamLimits

0x82a0,	// (0x0005cbea) main_cset_slider_pane_g2_ParamLimits

0xec0a,	// (0x00063554) main_cset_slider_pane_g3_ParamLimits

0xec0a,	// (0x00063554) main_cset_slider_pane_g3

0x82b5,	// (0x0005cbff) main_cset_slider_pane_g4_ParamLimits

0x82b5,	// (0x0005cbff) main_cset_slider_pane_g4

0x82c4,	// (0x0005cc0e) main_cset_slider_pane_g5_ParamLimits

0x82c4,	// (0x0005cc0e) main_cset_slider_pane_g5

0x82d0,	// (0x0005cc1a) main_cset_slider_pane_g6_ParamLimits

0x82d0,	// (0x0005cc1a) main_cset_slider_pane_g6

0xf8a3,	// (0x000641ed) main_cset_slider_pane_g_ParamLimits

0xec3a,	// (0x00063584) main_cset_slider_pane_t1_ParamLimits

0x835c,	// (0x0005cca6) main_cset_slider_pane_t2_ParamLimits

0x8376,	// (0x0005ccc0) main_cset_slider_pane_t3_ParamLimits

0x8390,	// (0x0005ccda) main_cset_slider_pane_t4_ParamLimits

0x83aa,	// (0x0005ccf4) main_cset_slider_pane_t5_ParamLimits

0x83c4,	// (0x0005cd0e) main_cset_slider_pane_t6_ParamLimits

0x83d9,	// (0x0005cd23) main_cset_slider_pane_t7_ParamLimits

0x8403,	// (0x0005cd4d) main_cset_slider_pane_t8_ParamLimits

0x8403,	// (0x0005cd4d) main_cset_slider_pane_t8

0x842b,	// (0x0005cd75) main_cset_slider_pane_t9_ParamLimits

0x842b,	// (0x0005cd75) main_cset_slider_pane_t9

0x8453,	// (0x0005cd9d) main_cset_slider_pane_t10_ParamLimits

0x8453,	// (0x0005cd9d) main_cset_slider_pane_t10

0x847b,	// (0x0005cdc5) main_cset_slider_pane_t11_ParamLimits

0x847b,	// (0x0005cdc5) main_cset_slider_pane_t11

0x84a3,	// (0x0005cded) main_cset_slider_pane_t12_ParamLimits

0x84a3,	// (0x0005cded) main_cset_slider_pane_t12

0x84c0,	// (0x0005ce0a) main_cset_slider_pane_t13_ParamLimits

0x84c0,	// (0x0005ce0a) main_cset_slider_pane_t13

0xf8c8,	// (0x00064212) main_cset_slider_pane_t_ParamLimits

0x10b1,	// (0x000559fb) bg_popup_sub_pane_cp011

0xed67,	// (0x000636b1) main_cset_text_pane_g1

0xed6f,	// (0x000636b9) main_cset_text_pane_t1

0xed7d,	// (0x000636c7) main_cset_text_pane_t2

0xed8b,	// (0x000636d5) main_cset_text_pane_t3

0xed99,	// (0x000636e3) main_cset_text_pane_t4

0xeda7,	// (0x000636f1) main_cset_text_pane_t5

0xedb5,	// (0x000636ff) main_cset_text_pane_t6

0xedc3,	// (0x0006370d) main_cset_text_pane_t7

0x0006,

0xf955,	// (0x0006429f) main_cset_text_pane_t

0x33d6,	// (0x00057d20) main_cam4_burst_pane

0x33d6,	// (0x00057d20) main_cam5_pane

0xebab,	// (0x000634f5) bg_button_pane_cp019

0xebb4,	// (0x000634fe) bg_button_pane_cp020

0xec16,	// (0x00063560) main_cset_slider_pane_g7_ParamLimits

0xec16,	// (0x00063560) main_cset_slider_pane_g7

0xec22,	// (0x0006356c) main_cset_slider_pane_g8_ParamLimits

0xec22,	// (0x0006356c) main_cset_slider_pane_g8

0x82e4,	// (0x0005cc2e) main_cset_slider_pane_g9_ParamLimits

0x82e4,	// (0x0005cc2e) main_cset_slider_pane_g9

0x82f0,	// (0x0005cc3a) main_cset_slider_pane_g10_ParamLimits

0x82f0,	// (0x0005cc3a) main_cset_slider_pane_g10

0x82fc,	// (0x0005cc46) main_cset_slider_pane_g11_ParamLimits

0x82fc,	// (0x0005cc46) main_cset_slider_pane_g11

0x8308,	// (0x0005cc52) main_cset_slider_pane_g12_ParamLimits

0x8308,	// (0x0005cc52) main_cset_slider_pane_g12

0x8314,	// (0x0005cc5e) main_cset_slider_pane_g13_ParamLimits

0x8314,	// (0x0005cc5e) main_cset_slider_pane_g13

0x8320,	// (0x0005cc6a) main_cset_slider_pane_g14_ParamLimits

0x8320,	// (0x0005cc6a) main_cset_slider_pane_g14

0x832c,	// (0x0005cc76) main_cset_slider_pane_g15_ParamLimits

0x832c,	// (0x0005cc76) main_cset_slider_pane_g15

0xec62,	// (0x000635ac) main_cset_slider_pane_t14_ParamLimits

0xec62,	// (0x000635ac) main_cset_slider_pane_t14

0xec9b,	// (0x000635e5) main_cset_slider_pane_t15_ParamLimits

0xec9b,	// (0x000635e5) main_cset_slider_pane_t15

0x897b,	// (0x0005d2c5) aid_cam4_burst_size_cell_ParamLimits

0x897b,	// (0x0005d2c5) aid_cam4_burst_size_cell

0x8997,	// (0x0005d2e1) grid_cam4_burst_pane_ParamLimits

0x8997,	// (0x0005d2e1) grid_cam4_burst_pane

0x89c9,	// (0x0005d313) linegrid_cam4_burst_pane_ParamLimits

0x89c9,	// (0x0005d313) linegrid_cam4_burst_pane

0x89e7,	// (0x0005d331) scroll_pane_cp30_ParamLimits

0x89e7,	// (0x0005d331) scroll_pane_cp30

0x89f3,	// (0x0005d33d) cell_cam4_burst_pane_ParamLimits

0x89f3,	// (0x0005d33d) cell_cam4_burst_pane

0xedd1,	// (0x0006371b) linegrid_cam4_burst_pane_g1_ParamLimits

0xedd1,	// (0x0006371b) linegrid_cam4_burst_pane_g1

0x8a33,	// (0x0005d37d) linegrid_cam4_burst_pane_g2_ParamLimits

0x8a33,	// (0x0005d37d) linegrid_cam4_burst_pane_g2

0xedde,	// (0x00063728) linegrid_cam4_burst_pane_g3_ParamLimits

0xedde,	// (0x00063728) linegrid_cam4_burst_pane_g3

0x0002,

0xf964,	// (0x000642ae) linegrid_cam4_burst_pane_g_ParamLimits

0xf964,	// (0x000642ae) linegrid_cam4_burst_pane_g

0x8a44,	// (0x0005d38e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8a44,	// (0x0005d38e) linegrid_cam4_burst_pane_g3_copy1

0xedeb,	// (0x00063735) linegrid_cam4_burst_pane_g4_ParamLimits

0xedeb,	// (0x00063735) linegrid_cam4_burst_pane_g4

0x8a5e,	// (0x0005d3a8) linegrid_cam4_burst_pane_g5_ParamLimits

0x8a5e,	// (0x0005d3a8) linegrid_cam4_burst_pane_g5

0x8a6f,	// (0x0005d3b9) linegrid_cam4_burst_pane_g6_ParamLimits

0x8a6f,	// (0x0005d3b9) linegrid_cam4_burst_pane_g6

0xedf8,	// (0x00063742) linegrid_cam4_burst_pane_g7_ParamLimits

0xedf8,	// (0x00063742) linegrid_cam4_burst_pane_g7

0x8a86,	// (0x0005d3d0) cell_cam4_burst_pane_g1

0xee11,	// (0x0006375b) main_cam5_pane_t1_ParamLimits

0xee11,	// (0x0006375b) main_cam5_pane_t1

0xee23,	// (0x0006376d) main_cam5_pane_t2_ParamLimits

0xee23,	// (0x0006376d) main_cam5_pane_t2

0xee35,	// (0x0006377f) main_cam5_pane_t3_ParamLimits

0xee35,	// (0x0006377f) main_cam5_pane_t3

0xee47,	// (0x00063791) main_cam5_pane_t4_ParamLimits

0xee47,	// (0x00063791) main_cam5_pane_t4

0xee5f,	// (0x000637a9) main_cam5_pane_t5_ParamLimits

0xee5f,	// (0x000637a9) main_cam5_pane_t5

0xee73,	// (0x000637bd) main_cam5_pane_t6_ParamLimits

0xee73,	// (0x000637bd) main_cam5_pane_t6

0xee87,	// (0x000637d1) main_cam5_pane_t7_ParamLimits

0xee87,	// (0x000637d1) main_cam5_pane_t7

0xee99,	// (0x000637e3) main_cam5_pane_t8_ParamLimits

0xee99,	// (0x000637e3) main_cam5_pane_t8

0xeeb7,	// (0x00063801) main_cam5_pane_t9_ParamLimits

0xeeb7,	// (0x00063801) main_cam5_pane_t9

0xeec9,	// (0x00063813) main_cam5_pane_t10_ParamLimits

0xeec9,	// (0x00063813) main_cam5_pane_t10

0xeedb,	// (0x00063825) main_cam5_pane_t11_ParamLimits

0xeedb,	// (0x00063825) main_cam5_pane_t11

0xeeef,	// (0x00063839) main_cam5_pane_t12_ParamLimits

0xeeef,	// (0x00063839) main_cam5_pane_t12

0xef06,	// (0x00063850) main_cam5_pane_t13_ParamLimits

0xef06,	// (0x00063850) main_cam5_pane_t13

0x000c,

0xf970,	// (0x000642ba) main_cam5_pane_t_ParamLimits

0xf970,	// (0x000642ba) main_cam5_pane_t

0x337b,	// (0x00057cc5) popup_scut_keymap_window_ParamLimits

0x337b,	// (0x00057cc5) popup_scut_keymap_window

0x8a99,	// (0x0005d3e3) aid_size_cell_brow_shortcut

0xc1d7,	// (0x00060b21) bg_popup_window_pane_cp010

0x8aa5,	// (0x0005d3ef) grid_scut_pane

0x8ab1,	// (0x0005d3fb) cell_scut_pane_ParamLimits

0x8ab1,	// (0x0005d3fb) cell_scut_pane

0x8acc,	// (0x0005d416) cell_scut_pane_g1

0xef29,	// (0x00063873) cell_scut_pane_t1

0xef38,	// (0x00063882) cell_scut_pane_t2

0x8ad5,	// (0x0005d41f) cell_scut_pane_t3

0x0002,

0xf98b,	// (0x000642d5) cell_scut_pane_t

0x6a8d,	// (0x0005b3d7) main_mup3_pane_g8_ParamLimits

0x6a8d,	// (0x0005b3d7) main_mup3_pane_g8

0x7d6c,	// (0x0005c6b6) area_vitu2_query_pane_ParamLimits

0x7d6c,	// (0x0005c6b6) area_vitu2_query_pane

0x8837,	// (0x0005d181) input_focus_pane_cp08

0xef47,	// (0x00063891) area_vitu2_query_pane_g1

0x8ae3,	// (0x0005d42d) area_vitu2_query_pane_g2

0x0001,

0xf992,	// (0x000642dc) area_vitu2_query_pane_g

0x8af4,	// (0x0005d43e) area_vitu2_query_pane_t1_ParamLimits

0x8af4,	// (0x0005d43e) area_vitu2_query_pane_t1

0x8b08,	// (0x0005d452) area_vitu2_query_pane_t2_ParamLimits

0x8b08,	// (0x0005d452) area_vitu2_query_pane_t2

0x8b1c,	// (0x0005d466) area_vitu2_query_pane_t3_ParamLimits

0x8b1c,	// (0x0005d466) area_vitu2_query_pane_t3

0xef53,	// (0x0006389d) area_vitu2_query_pane_t4_ParamLimits

0xef53,	// (0x0006389d) area_vitu2_query_pane_t4

0xef7b,	// (0x000638c5) area_vitu2_query_pane_t5_ParamLimits

0xef7b,	// (0x000638c5) area_vitu2_query_pane_t5

0xefa3,	// (0x000638ed) area_vitu2_query_pane_t6_ParamLimits

0xefa3,	// (0x000638ed) area_vitu2_query_pane_t6

0x0006,

0xf997,	// (0x000642e1) area_vitu2_query_pane_t_ParamLimits

0xf997,	// (0x000642e1) area_vitu2_query_pane_t

0x881f,	// (0x0005d169) bg_button_pane_cp018

0x8b44,	// (0x0005d48e) bg_button_pane_cp021

0x8b50,	// (0x0005d49a) bg_button_pane_cp022

0x8b73,	// (0x0005d4bd) input_focus_pane_cp09

0x55fc,	// (0x00059f46) aid_size_touch_mv_arrow_left

0x5627,	// (0x00059f71) aid_size_touch_mv_arrow_right

0x8344,	// (0x0005cc8e) main_cset_slider_pane_g16_ParamLimits

0x8344,	// (0x0005cc8e) main_cset_slider_pane_g16

0x8350,	// (0x0005cc9a) main_cset_slider_pane_g17_ParamLimits

0x8350,	// (0x0005cc9a) main_cset_slider_pane_g17

0x8a86,	// (0x0005d3d0) cell_cam4_burst_pane_g1_ParamLimits

0x10b1,	// (0x000559fb) compa_mode_pane

0x8571,	// (0x0005cebb) popup_vtel_slider_window_g3_ParamLimits

0x8571,	// (0x0005cebb) popup_vtel_slider_window_g3

0x8585,	// (0x0005cecf) popup_vtel_slider_window_g4_ParamLimits

0x8585,	// (0x0005cecf) popup_vtel_slider_window_g4

0x8599,	// (0x0005cee3) popup_vtel_slider_window_t1_ParamLimits

0x8599,	// (0x0005cee3) popup_vtel_slider_window_t1

0x33d6,	// (0x00057d20) main_cl_pane

0x6243,	// (0x0005ab8d) popup_imed_adjust2_window_ParamLimits

0xcca8,	// (0x000615f2) bg_tb_trans_pane_cp05_ParamLimits

0xe79d,	// (0x000630e7) popup_imed_adjust2_window_g1_ParamLimits

0xe7ac,	// (0x000630f6) popup_imed_adjust2_window_g2_ParamLimits

0xe7ac,	// (0x000630f6) popup_imed_adjust2_window_g2

0xe7b8,	// (0x00063102) popup_imed_adjust2_window_g3_ParamLimits

0xe7b8,	// (0x00063102) popup_imed_adjust2_window_g3

0x0002,

0xf717,	// (0x00064061) popup_imed_adjust2_window_g_ParamLimits

0xf717,	// (0x00064061) popup_imed_adjust2_window_g

0xe7c4,	// (0x0006310e) popup_imed_adjust2_window_t1_ParamLimits

0xe7dc,	// (0x00063126) slider_imed_adjust_pane_ParamLimits

0xe7f0,	// (0x0006313a) slider_imed_adjust_pane_g1_ParamLimits

0xe800,	// (0x0006314a) slider_imed_adjust_pane_g2_ParamLimits

0xe810,	// (0x0006315a) slider_imed_adjust_pane_g3_ParamLimits

0xe821,	// (0x0006316b) slider_imed_adjust_pane_g4_ParamLimits

0xf71e,	// (0x00064068) slider_imed_adjust_pane_g_ParamLimits

0x7aaf,	// (0x0005c3f9) aid_touch_area_cam4_ParamLimits

0x7aaf,	// (0x0005c3f9) aid_touch_area_cam4

0x7abf,	// (0x0005c409) battery_pane_cp01

0x7b46,	// (0x0005c490) main_camera4_pane_g6_ParamLimits

0x7b46,	// (0x0005c490) main_camera4_pane_g6

0x7b64,	// (0x0005c4ae) main_camera4_pane_t2_ParamLimits

0x7b64,	// (0x0005c4ae) main_camera4_pane_t2

0x0001,

0xf816,	// (0x00064160) main_camera4_pane_t_ParamLimits

0xf816,	// (0x00064160) main_camera4_pane_t

0x7be7,	// (0x0005c531) aid_touch_area_vid4_ParamLimits

0x7be7,	// (0x0005c531) aid_touch_area_vid4

0x7c27,	// (0x0005c571) main_video4_pane_g5_ParamLimits

0x7c27,	// (0x0005c571) main_video4_pane_g5

0x7c4d,	// (0x0005c597) vid4_progress_pane_ParamLimits

0x7c4d,	// (0x0005c597) vid4_progress_pane

0xec2e,	// (0x00063578) main_cset_slider_pane_g18_ParamLimits

0xec2e,	// (0x00063578) main_cset_slider_pane_g18

0xee05,	// (0x0006374f) cell_cam4_burst_pane_g2_ParamLimits

0xee05,	// (0x0006374f) cell_cam4_burst_pane_g2

0x0001,

0xf96b,	// (0x000642b5) cell_cam4_burst_pane_g_ParamLimits

0xf96b,	// (0x000642b5) cell_cam4_burst_pane_g

0x8b84,	// (0x0005d4ce) bg_cl_pane_ParamLimits

0x8b84,	// (0x0005d4ce) bg_cl_pane

0x8b90,	// (0x0005d4da) cl_header_pane_ParamLimits

0x8b90,	// (0x0005d4da) cl_header_pane

0x8b9c,	// (0x0005d4e6) cl_listscroll_pane_ParamLimits

0x8b9c,	// (0x0005d4e6) cl_listscroll_pane

0xefef,	// (0x00063939) bg_cl_pane_g1

0xeff7,	// (0x00063941) bg_cl_pane_g2

0xefff,	// (0x00063949) bg_cl_pane_g3

0xf007,	// (0x00063951) bg_cl_pane_g4

0xf00f,	// (0x00063959) bg_cl_pane_g5

0xf017,	// (0x00063961) bg_cl_pane_g6

0xf01f,	// (0x00063969) bg_cl_pane_g7

0xf027,	// (0x00063971) bg_cl_pane_g8

0xf02f,	// (0x00063979) bg_cl_pane_g9

0x0008,

0xf9a6,	// (0x000642f0) bg_cl_pane_g

0x8ba8,	// (0x0005d4f2) aid_height_cl_leading_ParamLimits

0x8ba8,	// (0x0005d4f2) aid_height_cl_leading

0x8bb4,	// (0x0005d4fe) aid_height_cl_text_ParamLimits

0x8bb4,	// (0x0005d4fe) aid_height_cl_text

0x35e1,	// (0x00057f2b) bg_cl_header_pane_ParamLimits

0x35e1,	// (0x00057f2b) bg_cl_header_pane

0x8bcc,	// (0x0005d516) cl_header_pane_g1_ParamLimits

0x8bcc,	// (0x0005d516) cl_header_pane_g1

0x8bd9,	// (0x0005d523) cl_header_pane_t1_ParamLimits

0x8bd9,	// (0x0005d523) cl_header_pane_t1

0xf037,	// (0x00063981) cl_list_pane

0xec01,	// (0x0006354b) hc_scroll_pane_cp01

0xc3e3,	// (0x00060d2d) bg_cl_header_pane_g1

0xeabd,	// (0x00063407) bg_cl_header_pane_g2

0xc403,	// (0x00060d4d) bg_cl_header_pane_g3

0xeacd,	// (0x00063417) bg_cl_header_pane_g4

0xeac5,	// (0x0006340f) bg_cl_header_pane_g5

0xed17,	// (0x00063661) bg_cl_header_pane_g6

0xeae5,	// (0x0006342f) bg_cl_header_pane_g7

0xeaed,	// (0x00063437) bg_cl_header_pane_g8

0xeadd,	// (0x00063427) bg_cl_header_pane_g9

0x0008,

0xf9b9,	// (0x00064303) bg_cl_header_pane_g

0x8beb,	// (0x0005d535) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8beb,	// (0x0005d535) hc_cl_list_double_graphic_heading_pane

0x8bfb,	// (0x0005d545) hc_cl_list_single_graphic_pane_ParamLimits

0x8bfb,	// (0x0005d545) hc_cl_list_single_graphic_pane

0x8c0d,	// (0x0005d557) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8c0d,	// (0x0005d557) hc_cl_list_single_graphic_pane_g1

0x8c19,	// (0x0005d563) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8c19,	// (0x0005d563) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9cc,	// (0x00064316) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9cc,	// (0x00064316) hc_cl_list_single_graphic_pane_g

0x8c2d,	// (0x0005d577) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8c2d,	// (0x0005d577) hc_cl_list_single_graphic_pane_t1

0x8c0d,	// (0x0005d557) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8c0d,	// (0x0005d557) hc_cl_list_double_graphic_heading_pane_g1

0x8c42,	// (0x0005d58c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8c42,	// (0x0005d58c) hc_cl_list_double_graphic_heading_pane_g2

0x8c56,	// (0x0005d5a0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8c56,	// (0x0005d5a0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9d1,	// (0x0006431b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9d1,	// (0x0006431b) hc_cl_list_double_graphic_heading_pane_g

0x8c6a,	// (0x0005d5b4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8c6a,	// (0x0005d5b4) hc_cl_list_double_graphic_heading_pane_t1

0x8c7f,	// (0x0005d5c9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8c7f,	// (0x0005d5c9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d8,	// (0x00064322) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d8,	// (0x00064322) hc_cl_list_double_graphic_heading_pane_t

0x8c9c,	// (0x0005d5e6) vid4_progress_pane_g1

0x8cac,	// (0x0005d5f6) vid4_progress_pane_g2

0x8cbc,	// (0x0005d606) vid4_progress_pane_g3

0x8cce,	// (0x0005d618) vid4_progress_pane_g4

0x0004,

0xf9dd,	// (0x00064327) vid4_progress_pane_g

0x8cec,	// (0x0005d636) vid4_progress_pane_t1

0x8d06,	// (0x0005d650) vid4_progress_pane_t2

0x0002,

0xf9e8,	// (0x00064332) vid4_progress_pane_t

0x8d34,	// (0x0005d67e) wait_bar_pane_cp07

0xe0c9,	// (0x00062a13) blid_firmament_pane_ParamLimits

0xe10c,	// (0x00062a56) popup_blid_sat_info2_window_g1

0xe130,	// (0x00062a7a) popup_blid_sat_info2_window_t3

0xe13e,	// (0x00062a88) popup_blid_sat_info2_window_t4

0xe14c,	// (0x00062a96) popup_blid_sat_info2_window_t5

0xe15a,	// (0x00062aa4) popup_blid_sat_info2_window_t6

0xe16a,	// (0x00062ab4) popup_blid_sat_info2_window_t7

0xe178,	// (0x00062ac2) popup_blid_sat_info2_window_t8

0xe186,	// (0x00062ad0) popup_blid_sat_info2_window_t9

0xe194,	// (0x00062ade) popup_blid_sat_info2_window_t10

0xe25b,	// (0x00062ba5) aid_firma_cardinal_ParamLimits

0xe26f,	// (0x00062bb9) blid_firmament_pane_t1_ParamLimits

0xe286,	// (0x00062bd0) blid_firmament_pane_t2_ParamLimits

0xe29d,	// (0x00062be7) blid_firmament_pane_t3_ParamLimits

0xe2b4,	// (0x00062bfe) blid_firmament_pane_t4_ParamLimits

0xf610,	// (0x00063f5a) blid_firmament_pane_t_ParamLimits

0xe2cb,	// (0x00062c15) blid_sat_info_pane_ParamLimits

0x6199,	// (0x0005aae3) main_cam_set_pane_ParamLimits

0x7155,	// (0x0005ba9f) aid_size_cell_colour_35_ParamLimits

0x716f,	// (0x0005bab9) aid_size_cell_colour_112_ParamLimits

0x7186,	// (0x0005bad0) aid_size_cell_effect_ParamLimits

0x3588,	// (0x00057ed2) bg_tb_trans_pane_cp02_ParamLimits

0xd613,	// (0x00061f5d) heading_imed_pane_ParamLimits

0x71a0,	// (0x0005baea) listscroll_imed_pane_ParamLimits

0xd49f,	// (0x00061de9) popup_call2_audio_first_window_g5_ParamLimits

0xd49f,	// (0x00061de9) popup_call2_audio_first_window_g5

0x779f,	// (0x0005c0e9) aid_size_touch_image3_arrow_left_ParamLimits

0x779f,	// (0x0005c0e9) aid_size_touch_image3_arrow_left

0x77b5,	// (0x0005c0ff) aid_size_touch_image3_arrow_right_ParamLimits

0x77b5,	// (0x0005c0ff) aid_size_touch_image3_arrow_right

0x8d1f,	// (0x0005d669) vid4_progress_pane_t3

0x731b,	// (0x0005bc65) main_hwr_training_symbol_option_pane_ParamLimits

0x731b,	// (0x0005bc65) main_hwr_training_symbol_option_pane

0xe918,	// (0x00063262) popup_hwr_training_preview_window_ParamLimits

0xe918,	// (0x00063262) popup_hwr_training_preview_window

0x737c,	// (0x0005bcc6) hwr_training_navi_pane_g5_ParamLimits

0x737c,	// (0x0005bcc6) hwr_training_navi_pane_g5

0xeaab,	// (0x000633f5) popup_char_count_window

0x33bc,	// (0x00057d06) bg_popup_sub_pane_cp20_ParamLimits

0x868c,	// (0x0005cfd6) list_vitu2_match_list_pane_ParamLimits

0x8698,	// (0x0005cfe2) vitu2_page_scroll_pane_ParamLimits

0x8698,	// (0x0005cfe2) vitu2_page_scroll_pane

0x03bc,	// (0x00054d06) list_single_hwr_training_symbol_option_pane_ParamLimits

0x03bc,	// (0x00054d06) list_single_hwr_training_symbol_option_pane

0x03cf,	// (0x00054d19) list_single_hwr_training_symbol_option_pane_g1

0x03d7,	// (0x00054d21) list_single_hwr_training_symbol_option_pane_t1

0x03e5,	// (0x00054d2f) bg_button_pane_cp023

0x03ee,	// (0x00054d38) bg_button_pane_cp024

0x0421,	// (0x00054d6b) vitu2_page_scroll_pane_g1

0x0429,	// (0x00054d73) vitu2_page_scroll_pane_g2

0x0001,

0xf9ef,	// (0x00064339) vitu2_page_scroll_pane_g

0x0431,	// (0x00054d7b) vitu2_page_scroll_pane_t1

0x0440,	// (0x00054d8a) popup_char_count_window_g1

0x0449,	// (0x00054d93) popup_char_count_window_g2

0x0452,	// (0x00054d9c) popup_char_count_window_g3

0x0002,

0xf9f4,	// (0x0006433e) popup_char_count_window_g

0x045b,	// (0x00054da5) popup_char_count_window_t1

0x33d6,	// (0x00057d20) main_vded2_pane

0xe789,	// (0x000630d3) aid_size_cell_imed_line

0xe793,	// (0x000630dd) grid_imed_line_width_pane

0x7cc1,	// (0x0005c60b) vid4_indicators_pane_g4

0x0469,	// (0x00054db3) cell_imed_line_width_pane_ParamLimits

0x0469,	// (0x00054db3) cell_imed_line_width_pane

0x047f,	// (0x00054dc9) cell_imed_line_width_pane_g1

0x0488,	// (0x00054dd2) cell_imed_line_width_pane_g2

0x0001,

0xf9fb,	// (0x00064345) cell_imed_line_width_pane_g

0x8d5b,	// (0x0005d6a5) main_vded2_pane_g1_ParamLimits

0x8d5b,	// (0x0005d6a5) main_vded2_pane_g1

0x8d6a,	// (0x0005d6b4) main_vded2_pane_g2_ParamLimits

0x8d6a,	// (0x0005d6b4) main_vded2_pane_g2

0x0001,

0xfa00,	// (0x0006434a) main_vded2_pane_g_ParamLimits

0xfa00,	// (0x0006434a) main_vded2_pane_g

0x8d78,	// (0x0005d6c2) vded2_slider_pane_ParamLimits

0x8d78,	// (0x0005d6c2) vded2_slider_pane

0x8d85,	// (0x0005d6cf) aid_size_touch_vded2_end

0x8d8f,	// (0x0005d6d9) aid_size_touch_vded2_playhead

0x0490,	// (0x00054dda) aid_size_touch_vded2_start

0x0498,	// (0x00054de2) vded2_slider_bg_pane

0x04a1,	// (0x00054deb) vded2_slider_pane_g1

0x04aa,	// (0x00054df4) vded2_slider_pane_g2

0x8d97,	// (0x0005d6e1) vded2_slider_pane_g3

0x0002,

0xfa05,	// (0x0006434f) vded2_slider_pane_g

0x04b2,	// (0x00054dfc) vded2_slider_bg_pane_g1

0x04bb,	// (0x00054e05) vded2_slider_bg_pane_g2

0x04c4,	// (0x00054e0e) vded2_slider_bg_pane_g3

0x0002,

0xf6db,	// (0x00064025) vded2_slider_bg_pane_g

0x5abf,	// (0x0005a409) aid_postcard_touch_down_pane_ParamLimits

0x5abf,	// (0x0005a409) aid_postcard_touch_down_pane

0x5acf,	// (0x0005a419) aid_postcard_touch_up_pane_ParamLimits

0x5acf,	// (0x0005a419) aid_postcard_touch_up_pane

0x33d6,	// (0x00057d20) main_blid2_pane

0x61c2,	// (0x0005ab0c) popup_blid2_search_window

0x10b1,	// (0x000559fb) blid2_gps_pane

0x10b1,	// (0x000559fb) blid2_navig_pane

0x10b1,	// (0x000559fb) blid2_search_pane

0x10b1,	// (0x000559fb) blid2_tripm_pane

0x8da0,	// (0x0005d6ea) blid2_search_pane_g1_ParamLimits

0x8da0,	// (0x0005d6ea) blid2_search_pane_g1

0x8dac,	// (0x0005d6f6) blid2_search_pane_t1_ParamLimits

0x8dac,	// (0x0005d6f6) blid2_search_pane_t1

0x8dbe,	// (0x0005d708) aid_size_cell_blid2_gps_ParamLimits

0x8dbe,	// (0x0005d708) aid_size_cell_blid2_gps

0x8dce,	// (0x0005d718) blid2_gps_pane_g1_ParamLimits

0x8dce,	// (0x0005d718) blid2_gps_pane_g1

0x8dda,	// (0x0005d724) grid_blid2_satellite_pane_ParamLimits

0x8dda,	// (0x0005d724) grid_blid2_satellite_pane

0x8de8,	// (0x0005d732) blid2_navig_pane_g1_ParamLimits

0x8de8,	// (0x0005d732) blid2_navig_pane_g1

0x8df4,	// (0x0005d73e) blid2_navig_pane_t1_ParamLimits

0x8df4,	// (0x0005d73e) blid2_navig_pane_t1

0x8e06,	// (0x0005d750) blid2_navig_pane_t2_ParamLimits

0x8e06,	// (0x0005d750) blid2_navig_pane_t2

0x0001,

0xfa0c,	// (0x00064356) blid2_navig_pane_t_ParamLimits

0xfa0c,	// (0x00064356) blid2_navig_pane_t

0x8e18,	// (0x0005d762) blid2_navig_ring_pane_ParamLimits

0x8e18,	// (0x0005d762) blid2_navig_ring_pane

0x8e28,	// (0x0005d772) blid2_speed_pane_ParamLimits

0x8e28,	// (0x0005d772) blid2_speed_pane

0x8e34,	// (0x0005d77e) blid2_tripm_pane_g1_ParamLimits

0x8e34,	// (0x0005d77e) blid2_tripm_pane_g1

0x8e44,	// (0x0005d78e) blid2_tripm_pane_g2_ParamLimits

0x8e44,	// (0x0005d78e) blid2_tripm_pane_g2

0x8e50,	// (0x0005d79a) blid2_tripm_pane_g3_ParamLimits

0x8e50,	// (0x0005d79a) blid2_tripm_pane_g3

0x8e5c,	// (0x0005d7a6) blid2_tripm_pane_g4_ParamLimits

0x8e5c,	// (0x0005d7a6) blid2_tripm_pane_g4

0x8e68,	// (0x0005d7b2) blid2_tripm_pane_g5_ParamLimits

0x8e68,	// (0x0005d7b2) blid2_tripm_pane_g5

0x0005,

0xfa11,	// (0x0006435b) blid2_tripm_pane_g_ParamLimits

0xfa11,	// (0x0006435b) blid2_tripm_pane_g

0x8e84,	// (0x0005d7ce) blid2_tripm_pane_t1_ParamLimits

0x8e84,	// (0x0005d7ce) blid2_tripm_pane_t1

0x8e96,	// (0x0005d7e0) blid2_tripm_pane_t2_ParamLimits

0x8e96,	// (0x0005d7e0) blid2_tripm_pane_t2

0x8ea8,	// (0x0005d7f2) blid2_tripm_pane_t3_ParamLimits

0x8ea8,	// (0x0005d7f2) blid2_tripm_pane_t3

0x0003,

0xfa1e,	// (0x00064368) blid2_tripm_pane_t_ParamLimits

0xfa1e,	// (0x00064368) blid2_tripm_pane_t

0x8eda,	// (0x0005d824) cell_blid2_satellite_pane_ParamLimits

0x8eda,	// (0x0005d824) cell_blid2_satellite_pane

0x8ef8,	// (0x0005d842) cell_blid2_satellite_pane_g1

0x04cd,	// (0x00054e17) cell_blid2_satellite_pane_t1

0xbfdb,	// (0x00060925) blid2_speed_pane_g1

0x04db,	// (0x00054e25) blid2_speed_pane_t1

0x04e9,	// (0x00054e33) blid2_speed_pane_t2

0x0001,

0xfa27,	// (0x00064371) blid2_speed_pane_t

0xbfdb,	// (0x00060925) blid2_navig_ring_pane_g1

0x8f01,	// (0x0005d84b) blid2_navig_ring_pane_g2

0x8f09,	// (0x0005d853) blid2_navig_ring_pane_g3

0x8f11,	// (0x0005d85b) blid2_navig_ring_pane_g4

0x8f19,	// (0x0005d863) blid2_navig_ring_pane_g5

0x0004,

0xfa2c,	// (0x00064376) blid2_navig_ring_pane_g

0x10b1,	// (0x000559fb) bg_popup_window_pane_cp011

0x04f7,	// (0x00054e41) popup_blid2_search_window_g1

0x04ff,	// (0x00054e49) popup_blid2_search_window_t1

0x050d,	// (0x00054e57) popup_blid2_search_window_t2

0x0001,

0xfa37,	// (0x00064381) popup_blid2_search_window_t

0xc2f2,	// (0x00060c3c) main_browser_pane_g1

0xc039,	// (0x00060983) main_browser_pane_ParamLimits

0x6199,	// (0x0005aae3) bg_button_pane_cp011_ParamLimits

0x7f65,	// (0x0005c8af) cell_vitu2_function_pane_g1_ParamLimits

0xcca8,	// (0x000615f2) bg_popup_sub_pane_cp22_ParamLimits

0x8837,	// (0x0005d181) input_focus_pane_cp08_ParamLimits

0x8853,	// (0x0005d19d) popup_vitu2_query_button_pane_ParamLimits

0x8853,	// (0x0005d19d) popup_vitu2_query_button_pane

0x8862,	// (0x0005d1ac) popup_vitu2_query_input_button_pane

0xed5b,	// (0x000636a5) popup_vitu2_query_window_g1_ParamLimits

0x886c,	// (0x0005d1b6) popup_vitu2_query_window_g2_ParamLimits

0xf93f,	// (0x00064289) popup_vitu2_query_window_g_ParamLimits

0x10b1,	// (0x000559fb) bg_button_pane_cp026

0x8f21,	// (0x0005d86b) popup_vitu2_query_input_button_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp025

0x051b,	// (0x00054e65) popup_vitu2_query_button_pane_t1

0x66f3,	// (0x0005b03d) main_mp3_pane_t6

0x6703,	// (0x0005b04d) popup_slider_window_cp01

0x7b9c,	// (0x0005c4e6) cam4_battery_pane

0x7c7a,	// (0x0005c5c4) cam4_battery_pane_cp02

0x8c94,	// (0x0005d5de) cam4_battery_pane_cp01

0x8c94,	// (0x0005d5de) cam4_battery_pane_cp03

0x0529,	// (0x00054e73) cam4_battery_pane_g1

0xbfdb,	// (0x00060925) cam4_battery_pane_g2

0x0001,

0xfa3c,	// (0x00064386) cam4_battery_pane_g

0xe1a2,	// (0x00062aec) popup_blid_sat_info2_window_t11

0x55fc,	// (0x00059f46) aid_size_touch_mv_arrow_left_ParamLimits

0x5627,	// (0x00059f71) aid_size_touch_mv_arrow_right_ParamLimits

0xca68,	// (0x000613b2) navi_pane_g1_ParamLimits

0x5666,	// (0x00059fb0) navi_pane_g2_ParamLimits

0x5694,	// (0x00059fde) navi_pane_g3_ParamLimits

0xf334,	// (0x00063c7e) navi_pane_g_ParamLimits

0x56ee,	// (0x0005a038) navi_pane_mv_t1_ParamLimits

0x71ac,	// (0x0005baf6) grid_imed_effect_pane_ParamLimits

0x4190,	// (0x00058ada) aid_placing_vt_slider_lsc

0xc22e,	// (0x00060b78) aid_placing_vt_slider_prt

0x3588,	// (0x00057ed2) bg_tb_trans_pane_cp01_ParamLimits

0xe40a,	// (0x00062d54) popup_image_details_window_g1_ParamLimits

0xe41d,	// (0x00062d67) popup_image_details_window_g2_ParamLimits

0xe432,	// (0x00062d7c) popup_image_details_window_g3_ParamLimits

0xe432,	// (0x00062d7c) popup_image_details_window_g3

0xf650,	// (0x00063f9a) popup_image_details_window_g_ParamLimits

0xe446,	// (0x00062d90) popup_image_details_window_t1_ParamLimits

0xe458,	// (0x00062da2) popup_image_details_window_t2_ParamLimits

0xe471,	// (0x00062dbb) popup_image_details_window_t3_ParamLimits

0xe485,	// (0x00062dcf) popup_image_details_window_t4_ParamLimits

0xe4a0,	// (0x00062dea) popup_image_details_window_t5_ParamLimits

0xf657,	// (0x00063fa1) popup_image_details_window_t_ParamLimits

0x8bc0,	// (0x0005d50a) cl_header_name_pane_ParamLimits

0x8bc0,	// (0x0005d50a) cl_header_name_pane

0x8f29,	// (0x0005d873) cl_header_name_pane_t1_ParamLimits

0x8f29,	// (0x0005d873) cl_header_name_pane_t1

0x8f40,	// (0x0005d88a) cl_header_name_pane_t2_ParamLimits

0x8f40,	// (0x0005d88a) cl_header_name_pane_t2

0x8f6a,	// (0x0005d8b4) cl_header_name_pane_t3_ParamLimits

0x8f6a,	// (0x0005d8b4) cl_header_name_pane_t3

0x0002,

0xfa41,	// (0x0006438b) cl_header_name_pane_t_ParamLimits

0xfa41,	// (0x0006438b) cl_header_name_pane_t

0x56bf,	// (0x0005a009) navi_pane_mv_g2_ParamLimits

0xea76,	// (0x000633c0) field_vitu2_entry_pane_g1_ParamLimits

0xea82,	// (0x000633cc) field_vitu2_entry_pane_g2_ParamLimits

0xd633,	// (0x00061f7d) field_vitu2_entry_pane_g3_ParamLimits

0xd633,	// (0x00061f7d) field_vitu2_entry_pane_g3

0xf848,	// (0x00064192) field_vitu2_entry_pane_g_ParamLimits

0x7ef3,	// (0x0005c83d) cell_vitu2_itu_pane_g1_ParamLimits

0x7f0b,	// (0x0005c855) cell_vitu2_itu_pane_g2_ParamLimits

0x7f0b,	// (0x0005c855) cell_vitu2_itu_pane_g2

0x0001,

0xf854,	// (0x0006419e) cell_vitu2_itu_pane_g_ParamLimits

0xf854,	// (0x0006419e) cell_vitu2_itu_pane_g

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp05_ParamLimits

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp05

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp03

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp04

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp10_ParamLimits

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp10

0x8b61,	// (0x0005d4ab) bg_vkb2_func_pane_cp08

0x881f,	// (0x0005d169) bg_vkb2_func_pane_cp06

0x8b44,	// (0x0005d48e) bg_vkb2_func_pane_cp07

0x03f7,	// (0x00054d41) bg_vkb2_func_pane_cp11_ParamLimits

0x03f7,	// (0x00054d41) bg_vkb2_func_pane_cp11

0x040c,	// (0x00054d56) bg_vkb2_func_pane_cp12_ParamLimits

0x040c,	// (0x00054d56) bg_vkb2_func_pane_cp12

0x10b1,	// (0x000559fb) bg_vkb2_func_pane_cp09

0xeabd,	// (0x00063407) bg_vkb2_func_pane_g1

0xc403,	// (0x00060d4d) bg_vkb2_func_pane_g2

0xeac5,	// (0x0006340f) bg_vkb2_func_pane_g3

0xeacd,	// (0x00063417) bg_vkb2_func_pane_g4

0xed17,	// (0x00063661) bg_vkb2_func_pane_g5

0xeae5,	// (0x0006342f) bg_vkb2_func_pane_g6

0xeaed,	// (0x00063437) bg_vkb2_func_pane_g7

0xeadd,	// (0x00063427) bg_vkb2_func_pane_g8

0xc3e3,	// (0x00060d2d) bg_vkb2_func_pane_g9

0x0008,

0xfa48,	// (0x00064392) bg_vkb2_func_pane_g

0x8e76,	// (0x0005d7c0) blid2_tripm_pane_g6_ParamLimits

0x8e76,	// (0x0005d7c0) blid2_tripm_pane_g6

0xe9b0,	// (0x000632fa) mp4_progress_pane_g1

0x8ece,	// (0x0005d818) blid2_tripm_values_pane_ParamLimits

0x8ece,	// (0x0005d818) blid2_tripm_values_pane

0x8f8f,	// (0x0005d8d9) blid2_tripm_values_pane_t1

0x8f9d,	// (0x0005d8e7) blid2_tripm_values_pane_t2

0x0533,	// (0x00054e7d) blid2_tripm_values_pane_t3

0x8fab,	// (0x0005d8f5) blid2_tripm_values_pane_t4

0x8fb9,	// (0x0005d903) blid2_tripm_values_pane_t5

0x8fc7,	// (0x0005d911) blid2_tripm_values_pane_t6

0x0541,	// (0x00054e8b) blid2_tripm_values_pane_t7

0x8fd5,	// (0x0005d91f) blid2_tripm_values_pane_t8

0x8fe3,	// (0x0005d92d) blid2_tripm_values_pane_t9

0x0008,

0xfa5b,	// (0x000643a5) blid2_tripm_values_pane_t

0x41ce,	// (0x00058b18) call_video_pane_t1_ParamLimits

0x41eb,	// (0x00058b35) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00063b27) call_video_pane_t_ParamLimits

0x59fb,	// (0x0005a345) msg_header_pane_g1_ParamLimits

0xcc6a,	// (0x000615b4) msg_header_pane_g2_ParamLimits

0xcc6a,	// (0x000615b4) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x00063d1c) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x00063d1c) msg_header_pane_g

0xc039,	// (0x00060983) main_clock2_pane_ParamLimits

0x6f25,	// (0x0005b86f) grid_clock2_toolbar_pane_ParamLimits

0x6f25,	// (0x0005b86f) grid_clock2_toolbar_pane

0x6f25,	// (0x0005b86f) listscroll_clock2_pane_ParamLimits

0x6f25,	// (0x0005b86f) listscroll_clock2_pane

0x6fd4,	// (0x0005b91e) main_clock2_pane_t3_ParamLimits

0x6fd4,	// (0x0005b91e) main_clock2_pane_t3

0x6fe6,	// (0x0005b930) main_clock2_pane_t4_ParamLimits

0x6fe6,	// (0x0005b930) main_clock2_pane_t4

0x054f,	// (0x00054e99) cell_clock2_toolbar_pane

0x0557,	// (0x00054ea1) cell_clock2_toolbar_pane_cp01

0x0557,	// (0x00054ea1) cell_clock2_toolbar_pane_cp02

0x055f,	// (0x00054ea9) cell_clock2_toolbar_pane_cp03

0x0567,	// (0x00054eb1) list_clock2_pane

0xc9ce,	// (0x00061318) scroll_pane_cp10

0x056f,	// (0x00054eb9) list_single_clock2_pane_ParamLimits

0x056f,	// (0x00054eb9) list_single_clock2_pane

0xc1d7,	// (0x00060b21) list_highlight_pane_cp08

0x057c,	// (0x00054ec6) list_single_clock2_pane_t1

0x058a,	// (0x00054ed4) list_single_clock2_pane_t2

0x0001,

0xfa6e,	// (0x000643b8) list_single_clock2_pane_t

0x10b1,	// (0x000559fb) bg_button_pane_cp10

0x0598,	// (0x00054ee2) cell_clock2_toolbar_pane_g1

0x5a21,	// (0x0005a36b) aid_main_viewer_pane_g1_ParamLimits

0x5a21,	// (0x0005a36b) aid_main_viewer_pane_g1

0x5a2d,	// (0x0005a377) aid_main_viewer_pane_g2_ParamLimits

0x5a2d,	// (0x0005a377) aid_main_viewer_pane_g2

0x5a39,	// (0x0005a383) aid_main_viewer_pane_g3_ParamLimits

0x5a39,	// (0x0005a383) aid_main_viewer_pane_g3

0x5a4a,	// (0x0005a394) aid_main_viewer_pane_g4_ParamLimits

0x5a4a,	// (0x0005a394) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00063d2d) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00063d2d) aid_main_viewer_pane_g

0x617a,	// (0x0005aac4) main_calc_pane_ParamLimits

0x61a7,	// (0x0005aaf1) main_dialer2_pane_ParamLimits

0x33d6,	// (0x00057d20) main_cam6_pane

0x33d6,	// (0x00057d20) main_vid6_pane

0x6f31,	// (0x0005b87b) listscroll_gen_pane_cp06_ParamLimits

0x6f31,	// (0x0005b87b) listscroll_gen_pane_cp06

0x6ff8,	// (0x0005b942) main_clock2_pane_t5_ParamLimits

0x6ff8,	// (0x0005b942) main_clock2_pane_t5

0x7045,	// (0x0005b98f) aid_call2_pane_cp10_ParamLimits

0x7057,	// (0x0005b9a1) aid_call_pane_cp10_ParamLimits

0xca3d,	// (0x00061387) popup_clock_analogue_window_cp10_g1_ParamLimits

0xca3d,	// (0x00061387) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7069,	// (0x0005b9b3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7069,	// (0x0005b9b3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xca3d,	// (0x00061387) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf70c,	// (0x00064056) popup_clock_analogue_window_cp10_g_ParamLimits

0x707f,	// (0x0005b9c9) popup_clock_analogue_window_cp10_t1_ParamLimits

0xea21,	// (0x0006336b) cell_dialer2_keypad_pane_g2_ParamLimits

0xea21,	// (0x0006336b) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e7,	// (0x00064131) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e7,	// (0x00064131) cell_dialer2_keypad_pane_g

0xbfe5,	// (0x0006092f) cell_dialer2_keypad_pane_t1

0x8239,	// (0x0005cb83) main_cset_text2_pane_ParamLimits

0x8239,	// (0x0005cb83) main_cset_text2_pane

0xef47,	// (0x00063891) area_vitu2_query_pane_g1_ParamLimits

0x8ae3,	// (0x0005d42d) area_vitu2_query_pane_g2_ParamLimits

0xf992,	// (0x000642dc) area_vitu2_query_pane_g_ParamLimits

0xefcb,	// (0x00063915) area_vitu2_query_pane_t7_ParamLimits

0xefcb,	// (0x00063915) area_vitu2_query_pane_t7

0x881f,	// (0x0005d169) bg_button_pane_cp018_ParamLimits

0x8b44,	// (0x0005d48e) bg_button_pane_cp021_ParamLimits

0x8b50,	// (0x0005d49a) bg_button_pane_cp022_ParamLimits

0x8b61,	// (0x0005d4ab) bg_vkb2_func_pane_cp08_ParamLimits

0x881f,	// (0x0005d169) bg_vkb2_func_pane_cp06_ParamLimits

0x8b44,	// (0x0005d48e) bg_vkb2_func_pane_cp07_ParamLimits

0x8b73,	// (0x0005d4bd) input_focus_pane_cp09_ParamLimits

0x8ff1,	// (0x0005d93b) cam6_autofocus_pane_ParamLimits

0x8ff1,	// (0x0005d93b) cam6_autofocus_pane

0x9013,	// (0x0005d95d) cam6_image_uncrop_pane_ParamLimits

0x9013,	// (0x0005d95d) cam6_image_uncrop_pane

0x9049,	// (0x0005d993) cam6_indi_pane_ParamLimits

0x9049,	// (0x0005d993) cam6_indi_pane

0x9063,	// (0x0005d9ad) cam6_mode_pane_ParamLimits

0x9063,	// (0x0005d9ad) cam6_mode_pane

0x9077,	// (0x0005d9c1) cam6_timer_pane_ParamLimits

0x9077,	// (0x0005d9c1) cam6_timer_pane

0x908b,	// (0x0005d9d5) cam6_zoom_pane_ParamLimits

0x908b,	// (0x0005d9d5) cam6_zoom_pane

0x90a7,	// (0x0005d9f1) cam6_mode_pane_g1_ParamLimits

0x90a7,	// (0x0005d9f1) cam6_mode_pane_g1

0x90b3,	// (0x0005d9fd) cam6_mode_pane_g2_ParamLimits

0x90b3,	// (0x0005d9fd) cam6_mode_pane_g2

0x90bf,	// (0x0005da09) cam6_mode_pane_g3_ParamLimits

0x90bf,	// (0x0005da09) cam6_mode_pane_g3

0x90cb,	// (0x0005da15) cam6_mode_pane_g4_ParamLimits

0x90cb,	// (0x0005da15) cam6_mode_pane_g4

0x0003,

0xfa73,	// (0x000643bd) cam6_mode_pane_g_ParamLimits

0xfa73,	// (0x000643bd) cam6_mode_pane_g

0xe074,	// (0x000629be) bg_tb_trans_pane_cp08_ParamLimits

0xe074,	// (0x000629be) bg_tb_trans_pane_cp08

0x05a0,	// (0x00054eea) cam6_battery_pane_ParamLimits

0x05a0,	// (0x00054eea) cam6_battery_pane

0x05b6,	// (0x00054f00) cam6_indi_pane_g1_ParamLimits

0x05b6,	// (0x00054f00) cam6_indi_pane_g1

0x05c8,	// (0x00054f12) cam6_indi_pane_g2_ParamLimits

0x05c8,	// (0x00054f12) cam6_indi_pane_g2

0x05da,	// (0x00054f24) cam6_indi_pane_g3_ParamLimits

0x05da,	// (0x00054f24) cam6_indi_pane_g3

0x0002,

0xfa7c,	// (0x000643c6) cam6_indi_pane_g_ParamLimits

0xfa7c,	// (0x000643c6) cam6_indi_pane_g

0x05ec,	// (0x00054f36) cam6_indi_pane_t1_ParamLimits

0x05ec,	// (0x00054f36) cam6_indi_pane_t1

0x7cfe,	// (0x0005c648) cam6_autofocus_pane_g1

0x7cf6,	// (0x0005c640) cam6_autofocus_pane_g2

0x7d0e,	// (0x0005c658) cam6_autofocus_pane_g3

0x7d06,	// (0x0005c650) cam6_autofocus_pane_g4

0x0003,

0xfa83,	// (0x000643cd) cam6_autofocus_pane_g

0x0612,	// (0x00054f5c) cam6_timer_pane_g1

0x061a,	// (0x00054f64) cam6_timer_pane_t1

0x0628,	// (0x00054f72) cam6_zoom_cont_pane

0x0630,	// (0x00054f7a) cam6_zoom_pane_g1

0x0639,	// (0x00054f83) cam6_zoom_pane_g2

0x90d7,	// (0x0005da21) cam6_zoom_pane_g3

0x0002,

0xfa8c,	// (0x000643d6) cam6_zoom_pane_g

0xbfdb,	// (0x00060925) cam6_battery_pane_g1

0xbfdb,	// (0x00060925) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000639f9) cam6_battery_pane_g

0x0630,	// (0x00054f7a) cam6_zoom_cont_pane_g1

0x0639,	// (0x00054f83) cam6_zoom_cont_pane_g2

0x0642,	// (0x00054f8c) cam6_zoom_cont_pane_g3

0x0002,

0xfa93,	// (0x000643dd) cam6_zoom_cont_pane_g

0x90f5,	// (0x0005da3f) cam6_mode_pane_cp_ParamLimits

0x90f5,	// (0x0005da3f) cam6_mode_pane_cp

0x9109,	// (0x0005da53) cam6_zoom_pane_cp_ParamLimits

0x9109,	// (0x0005da53) cam6_zoom_pane_cp

0x9125,	// (0x0005da6f) vid6_image_uncrop_cif_pane_ParamLimits

0x9125,	// (0x0005da6f) vid6_image_uncrop_cif_pane

0x9151,	// (0x0005da9b) vid6_image_uncrop_nhd_pane_ParamLimits

0x9151,	// (0x0005da9b) vid6_image_uncrop_nhd_pane

0x9170,	// (0x0005daba) vid6_image_uncrop_vga_pane_ParamLimits

0x9170,	// (0x0005daba) vid6_image_uncrop_vga_pane

0x918f,	// (0x0005dad9) vid6_image_uncrop_wvga_pane_ParamLimits

0x918f,	// (0x0005dad9) vid6_image_uncrop_wvga_pane

0x91ae,	// (0x0005daf8) vid6_indi_pane_ParamLimits

0x91ae,	// (0x0005daf8) vid6_indi_pane

0xe074,	// (0x000629be) bg_tb_trans_pane_cp09_ParamLimits

0xe074,	// (0x000629be) bg_tb_trans_pane_cp09

0x065a,	// (0x00054fa4) cam6_battery_pane_cp_ParamLimits

0x065a,	// (0x00054fa4) cam6_battery_pane_cp

0x0666,	// (0x00054fb0) vid6_indi_pane_g1_ParamLimits

0x0666,	// (0x00054fb0) vid6_indi_pane_g1

0x0678,	// (0x00054fc2) vid6_indi_pane_g2_ParamLimits

0x0678,	// (0x00054fc2) vid6_indi_pane_g2

0x068a,	// (0x00054fd4) vid6_indi_pane_g3_ParamLimits

0x068a,	// (0x00054fd4) vid6_indi_pane_g3

0x06a1,	// (0x00054feb) vid6_indi_pane_g4_ParamLimits

0x06a1,	// (0x00054feb) vid6_indi_pane_g4

0x06b8,	// (0x00055002) vid6_indi_pane_g5_ParamLimits

0x06b8,	// (0x00055002) vid6_indi_pane_g5

0x0004,

0xfa9a,	// (0x000643e4) vid6_indi_pane_g_ParamLimits

0xfa9a,	// (0x000643e4) vid6_indi_pane_g

0x06d2,	// (0x0005501c) vid6_indi_pane_t1_ParamLimits

0x06d2,	// (0x0005501c) vid6_indi_pane_t1

0x06e8,	// (0x00055032) vid6_indi_pane_t2_ParamLimits

0x06e8,	// (0x00055032) vid6_indi_pane_t2

0x0710,	// (0x0005505a) vid6_indi_pane_t3_ParamLimits

0x0710,	// (0x0005505a) vid6_indi_pane_t3

0x0738,	// (0x00055082) vid6_indi_pane_t4_ParamLimits

0x0738,	// (0x00055082) vid6_indi_pane_t4

0x0003,

0xfaa5,	// (0x000643ef) vid6_indi_pane_t_ParamLimits

0xfaa5,	// (0x000643ef) vid6_indi_pane_t

0x075c,	// (0x000550a6) wait_bar_pane_cp08

0x91d3,	// (0x0005db1d) main_cset_text2_pane_t1_ParamLimits

0x91d3,	// (0x0005db1d) main_cset_text2_pane_t1

0x90e0,	// (0x0005da2a) listscroll_gen_pane_cp06_t1_ParamLimits

0x90e0,	// (0x0005da2a) listscroll_gen_pane_cp06_t1

0x33d6,	// (0x00057d20) main_cam6_set_pane

0x0e53,	// (0x0005579d) bg_tb_trans_pane_cp06_ParamLimits

0x7ba4,	// (0x0005c4ee) cam4_indicators_pane_g1_ParamLimits

0x7bb5,	// (0x0005c4ff) cam4_indicators_pane_g2_ParamLimits

0xf824,	// (0x0006416e) cam4_indicators_pane_g_ParamLimits

0x7bcd,	// (0x0005c517) cam4_indicators_pane_t1_ParamLimits

0x6199,	// (0x0005aae3) bg_tb_trans_pane_cp07_ParamLimits

0x7c84,	// (0x0005c5ce) vid4_indicators_pane_g1_ParamLimits

0x7c9a,	// (0x0005c5e4) vid4_indicators_pane_g2_ParamLimits

0x7cae,	// (0x0005c5f8) vid4_indicators_pane_g3_ParamLimits

0x7cc1,	// (0x0005c60b) vid4_indicators_pane_g4_ParamLimits

0xf836,	// (0x00064180) vid4_indicators_pane_g_ParamLimits

0x7cdf,	// (0x0005c629) vid4_indicators_pane_t1_ParamLimits

0x8c9c,	// (0x0005d5e6) vid4_progress_pane_g1_ParamLimits

0x8cac,	// (0x0005d5f6) vid4_progress_pane_g2_ParamLimits

0x8cbc,	// (0x0005d606) vid4_progress_pane_g3_ParamLimits

0x8cce,	// (0x0005d618) vid4_progress_pane_g4_ParamLimits

0xf9dd,	// (0x00064327) vid4_progress_pane_g_ParamLimits

0x8cec,	// (0x0005d636) vid4_progress_pane_t1_ParamLimits

0x8d06,	// (0x0005d650) vid4_progress_pane_t2_ParamLimits

0x8d1f,	// (0x0005d669) vid4_progress_pane_t3_ParamLimits

0xf9e8,	// (0x00064332) vid4_progress_pane_t_ParamLimits

0x8d34,	// (0x0005d67e) wait_bar_pane_cp07_ParamLimits

0x91fa,	// (0x0005db44) main_cam6_set_pane_g2_ParamLimits

0x91fa,	// (0x0005db44) main_cam6_set_pane_g2

0x9206,	// (0x0005db50) main_cset6_listscroll_pane_ParamLimits

0x9206,	// (0x0005db50) main_cset6_listscroll_pane

0x9233,	// (0x0005db7d) main_cset6_slider_pane_ParamLimits

0x9233,	// (0x0005db7d) main_cset6_slider_pane

0x923f,	// (0x0005db89) main_cset6_text2_pane_ParamLimits

0x923f,	// (0x0005db89) main_cset6_text2_pane

0x076b,	// (0x000550b5) main_cset6_text_pane

0x0773,	// (0x000550bd) main_cset_list_pane_copy1_ParamLimits

0x0773,	// (0x000550bd) main_cset_list_pane_copy1

0x0783,	// (0x000550cd) scroll_pane_cp028_copy1

0x9252,	// (0x0005db9c) cset_list_set_pane_copy1

0x9262,	// (0x0005dbac) aid_position_infowindow_above_copy1

0x926a,	// (0x0005dbb4) aid_position_infowindow_below_copy1

0x9272,	// (0x0005dbbc) cset_list_set_pane_g1_copy1

0x927a,	// (0x0005dbc4) cset_list_set_pane_g3_copy1_ParamLimits

0x927a,	// (0x0005dbc4) cset_list_set_pane_g3_copy1

0x9289,	// (0x0005dbd3) cset_list_set_pane_t1_copy1_ParamLimits

0x9289,	// (0x0005dbd3) cset_list_set_pane_t1_copy1

0x3588,	// (0x00057ed2) list_highlight_pane_cp021_copy1_ParamLimits

0x3588,	// (0x00057ed2) list_highlight_pane_cp021_copy1

0x078c,	// (0x000550d6) cset6_slider_pane_ParamLimits

0x078c,	// (0x000550d6) cset6_slider_pane

0x07b8,	// (0x00055102) main_cset6_slider_pane_g1_ParamLimits

0x07b8,	// (0x00055102) main_cset6_slider_pane_g1

0x929e,	// (0x0005dbe8) main_cset6_slider_pane_g2_ParamLimits

0x929e,	// (0x0005dbe8) main_cset6_slider_pane_g2

0x07e0,	// (0x0005512a) main_cset6_slider_pane_g3_ParamLimits

0x07e0,	// (0x0005512a) main_cset6_slider_pane_g3

0x92c6,	// (0x0005dc10) main_cset6_slider_pane_g4_ParamLimits

0x92c6,	// (0x0005dc10) main_cset6_slider_pane_g4

0x92d2,	// (0x0005dc1c) main_cset6_slider_pane_g5_ParamLimits

0x92d2,	// (0x0005dc1c) main_cset6_slider_pane_g5

0xec16,	// (0x00063560) main_cset6_slider_pane_g7_ParamLimits

0xec16,	// (0x00063560) main_cset6_slider_pane_g7

0xec22,	// (0x0006356c) main_cset6_slider_pane_g8_ParamLimits

0xec22,	// (0x0006356c) main_cset6_slider_pane_g8

0x92de,	// (0x0005dc28) main_cset6_slider_pane_g9_ParamLimits

0x92de,	// (0x0005dc28) main_cset6_slider_pane_g9

0x92ea,	// (0x0005dc34) main_cset6_slider_pane_g10_ParamLimits

0x92ea,	// (0x0005dc34) main_cset6_slider_pane_g10

0x92f6,	// (0x0005dc40) main_cset6_slider_pane_g11_ParamLimits

0x92f6,	// (0x0005dc40) main_cset6_slider_pane_g11

0x9302,	// (0x0005dc4c) main_cset6_slider_pane_g12_ParamLimits

0x9302,	// (0x0005dc4c) main_cset6_slider_pane_g12

0x930e,	// (0x0005dc58) main_cset6_slider_pane_g13_ParamLimits

0x930e,	// (0x0005dc58) main_cset6_slider_pane_g13

0x931a,	// (0x0005dc64) main_cset6_slider_pane_g14_ParamLimits

0x931a,	// (0x0005dc64) main_cset6_slider_pane_g14

0x9326,	// (0x0005dc70) main_cset6_slider_pane_g15_ParamLimits

0x9326,	// (0x0005dc70) main_cset6_slider_pane_g15

0x933e,	// (0x0005dc88) main_cset6_slider_pane_g16_ParamLimits

0x933e,	// (0x0005dc88) main_cset6_slider_pane_g16

0x934a,	// (0x0005dc94) main_cset6_slider_pane_g17_ParamLimits

0x934a,	// (0x0005dc94) main_cset6_slider_pane_g17

0x0011,

0xfaae,	// (0x000643f8) main_cset6_slider_pane_g_ParamLimits

0xfaae,	// (0x000643f8) main_cset6_slider_pane_g

0x07ec,	// (0x00055136) main_cset6_slider_pane_t1_ParamLimits

0x07ec,	// (0x00055136) main_cset6_slider_pane_t1

0x936e,	// (0x0005dcb8) main_cset6_slider_pane_t2_ParamLimits

0x936e,	// (0x0005dcb8) main_cset6_slider_pane_t2

0x9399,	// (0x0005dce3) main_cset6_slider_pane_t3_ParamLimits

0x9399,	// (0x0005dce3) main_cset6_slider_pane_t3

0x93c4,	// (0x0005dd0e) main_cset6_slider_pane_t4_ParamLimits

0x93c4,	// (0x0005dd0e) main_cset6_slider_pane_t4

0x93ef,	// (0x0005dd39) main_cset6_slider_pane_t5_ParamLimits

0x93ef,	// (0x0005dd39) main_cset6_slider_pane_t5

0x082d,	// (0x00055177) main_cset6_slider_pane_t7_ParamLimits

0x082d,	// (0x00055177) main_cset6_slider_pane_t7

0x941a,	// (0x0005dd64) main_cset6_slider_pane_t8_ParamLimits

0x941a,	// (0x0005dd64) main_cset6_slider_pane_t8

0x943e,	// (0x0005dd88) main_cset6_slider_pane_t9_ParamLimits

0x943e,	// (0x0005dd88) main_cset6_slider_pane_t9

0x9462,	// (0x0005ddac) main_cset6_slider_pane_t10_ParamLimits

0x9462,	// (0x0005ddac) main_cset6_slider_pane_t10

0x9486,	// (0x0005ddd0) main_cset6_slider_pane_t11_ParamLimits

0x9486,	// (0x0005ddd0) main_cset6_slider_pane_t11

0x0863,	// (0x000551ad) main_cset6_slider_pane_t14_ParamLimits

0x0863,	// (0x000551ad) main_cset6_slider_pane_t14

0x089c,	// (0x000551e6) main_cset6_slider_pane_t15_ParamLimits

0x089c,	// (0x000551e6) main_cset6_slider_pane_t15

0x000b,

0xfad3,	// (0x0006441d) main_cset6_slider_pane_t_ParamLimits

0xfad3,	// (0x0006441d) main_cset6_slider_pane_t

0x08d5,	// (0x0005521f) cset_slider_pane_g1_copy1

0x08de,	// (0x00055228) cset_slider_pane_g2_copy1

0x08e7,	// (0x00055231) cset_slider_pane_g3_copy1

0x10b1,	// (0x000559fb) bg_popup_sub_pane_cp011_copy1

0x08f9,	// (0x00055243) main_cset_text_pane_g1_copy1

0xed6f,	// (0x000636b9) main_cset_text_pane_t1_copy1

0xed7d,	// (0x000636c7) main_cset_text_pane_t2_copy1

0xed8b,	// (0x000636d5) main_cset_text_pane_t3_copy1

0xed99,	// (0x000636e3) main_cset_text_pane_t4_copy1

0xeda7,	// (0x000636f1) main_cset_text_pane_t5_copy1

0x0901,	// (0x0005524b) main_cset_text_pane_t6_copy1

0x090f,	// (0x00055259) main_cset_text_pane_t7_copy1

0x94c7,	// (0x0005de11) main_cset_text2_pane_t1_copy1

0x6199,	// (0x0005aae3) main_ncimui_pane

0x6200,	// (0x0005ab4a) popup_query_ncimui_window_ParamLimits

0x6200,	// (0x0005ab4a) popup_query_ncimui_window

0xe541,	// (0x00062e8b) field_cale_ev2_pane_g4_ParamLimits

0xe541,	// (0x00062e8b) field_cale_ev2_pane_g4

0x7448,	// (0x0005bd92) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7448,	// (0x0005bd92) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7be,	// (0x00064108) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7be,	// (0x00064108) cell_video_dialer_keypad_pane_g

0x7460,	// (0x0005bdaa) cell_video_dialer_keypad_pane_t1

0x10b1,	// (0x000559fb) bg_popup_window_pane_cp012

0xddf3,	// (0x0006273d) heading_pane_cp06

0x093b,	// (0x00055285) ncim_query_content_pane

0x10b1,	// (0x000559fb) bg_popup_heading_pane_cp01

0x0943,	// (0x0005528d) ncim_heading_pane_t1

0x0951,	// (0x0005529b) ncim_indicator_popup_pane

0x0963,	// (0x000552ad) ncim_query_button_pane

0x0979,	// (0x000552c3) ncim_query_content_pane_t1

0x098b,	// (0x000552d5) ncim_query_content_pane_t2

0x0005,

0xfb17,	// (0x00064461) ncim_query_content_pane_t

0x09c5,	// (0x0005530f) ncim_query_list_pane

0x09d7,	// (0x00055321) ncim_query_popup_pane

0x0951,	// (0x0005529b) ncim_indicator_popup_pane_ParamLimits

0x9623,	// (0x0005df6d) ncim_query_content_pane_g1_ParamLimits

0x9623,	// (0x0005df6d) ncim_query_content_pane_g1

0x0979,	// (0x000552c3) ncim_query_content_pane_t1_ParamLimits

0x098b,	// (0x000552d5) ncim_query_content_pane_t2_ParamLimits

0x962f,	// (0x0005df79) ncim_query_content_pane_t3_ParamLimits

0x962f,	// (0x0005df79) ncim_query_content_pane_t3

0x964c,	// (0x0005df96) ncim_query_content_pane_t4_ParamLimits

0x964c,	// (0x0005df96) ncim_query_content_pane_t4

0x9669,	// (0x0005dfb3) ncim_query_content_pane_t5_ParamLimits

0x9669,	// (0x0005dfb3) ncim_query_content_pane_t5

0x099d,	// (0x000552e7) ncim_query_content_pane_t6_ParamLimits

0x099d,	// (0x000552e7) ncim_query_content_pane_t6

0xfb17,	// (0x00064461) ncim_query_content_pane_t_ParamLimits

0x09c5,	// (0x0005530f) ncim_query_list_pane_ParamLimits

0x09d7,	// (0x00055321) ncim_query_popup_pane_ParamLimits

0x09eb,	// (0x00055335) wait_bar_pane_cp04

0x10b1,	// (0x000559fb) input_focus_pane_cp011

0x09f3,	// (0x0005533d) ncim_query_popup_pane_t1

0x0a01,	// (0x0005534b) ncim_list_query_list_pane_ParamLimits

0x0a01,	// (0x0005534b) ncim_list_query_list_pane

0x10b1,	// (0x000559fb) bg_button_pane_cp027

0x0a14,	// (0x0005535e) ncim_query_button_pane_g1

0x10b1,	// (0x000559fb) list_highlight_pane_cp012

0x0a1e,	// (0x00055368) ncim_list_query_list_pane_g1

0x0a26,	// (0x00055370) ncim_list_query_list_pane_t1

0x7bc1,	// (0x0005c50b) cam4_indicators_pane_g3_ParamLimits

0x7bc1,	// (0x0005c50b) cam4_indicators_pane_g3

0x7ccd,	// (0x0005c617) vid4_indicators_pane_g5_ParamLimits

0x7ccd,	// (0x0005c617) vid4_indicators_pane_g5

0x8cdd,	// (0x0005d627) vid4_progress_pane_g5_ParamLimits

0x8cdd,	// (0x0005d627) vid4_progress_pane_g5

0x94f9,	// (0x0005de43) main_ncimui_pane_g1

0x9565,	// (0x0005deaf) ncimui_group_query_pane_ParamLimits

0x9565,	// (0x0005deaf) ncimui_group_query_pane

0x95bf,	// (0x0005df09) ncimui_list_pane_ParamLimits

0x95bf,	// (0x0005df09) ncimui_list_pane

0x95e6,	// (0x0005df30) ncimui_text_pane_ParamLimits

0x95e6,	// (0x0005df30) ncimui_text_pane

0x9686,	// (0x0005dfd0) ncimui_text_pane_t1_ParamLimits

0x9686,	// (0x0005dfd0) ncimui_text_pane_t1

0x0a34,	// (0x0005537e) ncimui_list_single_graphic_pane_ParamLimits

0x0a34,	// (0x0005537e) ncimui_list_single_graphic_pane

0x96a5,	// (0x0005dfef) ncimui_query_pane_ParamLimits

0x96a5,	// (0x0005dfef) ncimui_query_pane

0x10b1,	// (0x000559fb) list_highlight_pane_cp013

0x0a44,	// (0x0005538e) ncim_list_query_list_pane_t1_copy1

0x0a1e,	// (0x00055368) ncim_list_single_graphic_pane_g1

0x96b8,	// (0x0005e002) ncim_query_button_pane_cp01

0x96c4,	// (0x0005e00e) ncim_query_entry_pane_ParamLimits

0x96c4,	// (0x0005e00e) ncim_query_entry_pane

0x96d7,	// (0x0005e021) ncimui_query_pane_g1

0x96e3,	// (0x0005e02d) ncimui_query_pane_t1_ParamLimits

0x96e3,	// (0x0005e02d) ncimui_query_pane_t1

0x3588,	// (0x00057ed2) input_focus_pane_cp012

0x0a52,	// (0x0005539c) ncim_query_entry_pane_t1

0xc039,	// (0x00060983) main_im_pane_ParamLimits

0x6199,	// (0x0005aae3) main_mobtv_pane_ParamLimits

0x6199,	// (0x0005aae3) main_mobtv_pane

0x9356,	// (0x0005dca0) main_cset6_slider_pane_g18_ParamLimits

0x9356,	// (0x0005dca0) main_cset6_slider_pane_g18

0x9362,	// (0x0005dcac) main_cset6_slider_pane_g19_ParamLimits

0x9362,	// (0x0005dcac) main_cset6_slider_pane_g19

0xd633,	// (0x00061f7d) bg_main_mobtv_pane_ParamLimits

0xd633,	// (0x00061f7d) bg_main_mobtv_pane

0x96fc,	// (0x0005e046) main_mobtv_info_pane

0x9707,	// (0x0005e051) main_mobtv_loading_pane_ParamLimits

0x9707,	// (0x0005e051) main_mobtv_loading_pane

0x0a64,	// (0x000553ae) main_mobtv_pg_channel_list_pane

0x0a6e,	// (0x000553b8) main_mobtv_pg_hdr_pane

0x9714,	// (0x0005e05e) main_mobtv_programe_curr_pane_ParamLimits

0x9714,	// (0x0005e05e) main_mobtv_programe_curr_pane

0x9721,	// (0x0005e06b) main_mobtv_programe_next_pane_ParamLimits

0x9721,	// (0x0005e06b) main_mobtv_programe_next_pane

0x0a77,	// (0x000553c1) popup_mobtv_noti_window

0xbfdb,	// (0x00060925) main_tv_pg_hdr_pane_g1

0x0a81,	// (0x000553cb) main_tv_pg_hdr_pane_g2

0x0a89,	// (0x000553d3) main_tv_pg_hdr_pane_g3

0x0a91,	// (0x000553db) main_tv_pg_hdr_pane_g4

0x0a99,	// (0x000553e3) main_tv_pg_hdr_pane_g5

0x0aa3,	// (0x000553ed) main_tv_pg_hdr_pane_g6

0x0aad,	// (0x000553f7) main_tv_pg_hdr_pane_g7

0x0ab7,	// (0x00055401) main_tv_pg_hdr_pane_g8

0x0ac1,	// (0x0005540b) main_tv_pg_hdr_pane_g9

0x0acb,	// (0x00055415) main_tv_pg_hdr_pane_g10

0x0ad5,	// (0x0005541f) main_tv_pg_hdr_pane_g11

0x000a,

0xfb24,	// (0x0006446e) main_tv_pg_hdr_pane_g

0x0adf,	// (0x00055429) main_tv_pg_hdr_pane_t1

0x0aed,	// (0x00055437) main_tv_pg_hdr_pane_t2

0x0afb,	// (0x00055445) main_tv_pg_hdr_pane_t3

0x0b0b,	// (0x00055455) main_tv_pg_hdr_pane_t4

0x0b1b,	// (0x00055465) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3b,	// (0x00064485) main_tv_pg_hdr_pane_t

0x0b2b,	// (0x00055475) single_mobtv_pg_channel_pane_ParamLimits

0x0b2b,	// (0x00055475) single_mobtv_pg_channel_pane

0x0b3d,	// (0x00055487) single_mobtv_pg_channel_table_pane

0x0b46,	// (0x00055490) single_mobtv_pg_channel_thumb_pane

0x0b4f,	// (0x00055499) single_tv_pg_channel_pane_g1

0x0b58,	// (0x000554a2) single_tv_pg_channel_pane_g2

0x0001,

0xfb46,	// (0x00064490) single_tv_pg_channel_pane_g

0x35ef,	// (0x00057f39) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x35ef,	// (0x00057f39) bg_single_mobtv_pg_channel_thumb_pane

0x0b61,	// (0x000554ab) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0b61,	// (0x000554ab) single_mobtv_pg_channel_thumb_pane_g1

0x0b6f,	// (0x000554b9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0b6f,	// (0x000554b9) single_mobtv_pg_channel_thumb_pane_g2

0x0b7b,	// (0x000554c5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0b7b,	// (0x000554c5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4b,	// (0x00064495) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4b,	// (0x00064495) single_mobtv_pg_channel_thumb_pane_g

0x0b87,	// (0x000554d1) single_mobtv_pg_channel_thumb_pane_t1

0x0b95,	// (0x000554df) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb52,	// (0x0006449c) single_mobtv_pg_channel_thumb_pane_t

0xbfdb,	// (0x00060925) bg_single_mobtv_pg_channel_table_pane_g1

0xbfdb,	// (0x00060925) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000639f9) bg_single_mobtv_pg_channel_table_pane_g

0x0ba3,	// (0x000554ed) single_mobtv_pg_channel_table_pane_t1

0x0bb1,	// (0x000554fb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb57,	// (0x000644a1) single_mobtv_pg_channel_table_pane_t

0x9736,	// (0x0005e080) main_mobtv_info_pane_g1_ParamLimits

0x9736,	// (0x0005e080) main_mobtv_info_pane_g1

0x9752,	// (0x0005e09c) main_mobtv_info_pane_t1_ParamLimits

0x9752,	// (0x0005e09c) main_mobtv_info_pane_t1

0x97ca,	// (0x0005e114) main_mobtv_info_pane_t2_ParamLimits

0x97ca,	// (0x0005e114) main_mobtv_info_pane_t2

0x0002,

0xfb61,	// (0x000644ab) main_mobtv_info_pane_t_ParamLimits

0xfb61,	// (0x000644ab) main_mobtv_info_pane_t

0x985b,	// (0x0005e1a5) wait_bar_pane_cp05

0x986d,	// (0x0005e1b7) main_mobtv_loading_pane_g1_ParamLimits

0x986d,	// (0x0005e1b7) main_mobtv_loading_pane_g1

0x9879,	// (0x0005e1c3) main_mobtv_loading_pane_g2_ParamLimits

0x9879,	// (0x0005e1c3) main_mobtv_loading_pane_g2

0x9885,	// (0x0005e1cf) main_mobtv_loading_pane_g3_ParamLimits

0x9885,	// (0x0005e1cf) main_mobtv_loading_pane_g3

0x0002,

0xfb68,	// (0x000644b2) main_mobtv_loading_pane_g_ParamLimits

0xfb68,	// (0x000644b2) main_mobtv_loading_pane_g

0x0bbf,	// (0x00055509) main_mobtv_loading_pane_t1_ParamLimits

0x0bbf,	// (0x00055509) main_mobtv_loading_pane_t1

0x0bd7,	// (0x00055521) main_mobtv_loading_pane_t2_ParamLimits

0x0bd7,	// (0x00055521) main_mobtv_loading_pane_t2

0x0001,

0xfb6f,	// (0x000644b9) main_mobtv_loading_pane_t_ParamLimits

0xfb6f,	// (0x000644b9) main_mobtv_loading_pane_t

0x9893,	// (0x0005e1dd) wait_bar_pane_cp06_ParamLimits

0x9893,	// (0x0005e1dd) wait_bar_pane_cp06

0x0bfb,	// (0x00055545) main_mobtv_programe_curr_pane_t1

0x0c09,	// (0x00055553) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb74,	// (0x000644be) main_mobtv_programe_curr_pane_t

0x0c17,	// (0x00055561) main_mobtv_programe_next_pane_t1

0x0c25,	// (0x0005556f) main_mobtv_programe_next_pane_t2

0x0c33,	// (0x0005557d) main_mobtv_programe_next_pane_t3

0x0002,

0xfb79,	// (0x000644c3) main_mobtv_programe_next_pane_t

0x10b1,	// (0x000559fb) bg_popup_mobtv_noti_window_pane

0x0c41,	// (0x0005558b) popup_mobtv_noti_window_g1

0x0c49,	// (0x00055593) popup_mobtv_noti_window_t1

0x0c57,	// (0x000555a1) popup_mobtv_noti_window_t2

0x0001,

0xfb80,	// (0x000644ca) popup_mobtv_noti_window_t

0xbfdb,	// (0x00060925) bg_popup_mobtv_noti_window_pane_g1

0x33d6,	// (0x00057d20) sc_clock_pane

0x33d6,	// (0x00057d20) main_fs_bigclock_pane

0x8ebc,	// (0x0005d806) blid2_tripm_pane_t4_ParamLimits

0x8ebc,	// (0x0005d806) blid2_tripm_pane_t4

0x35fd,	// (0x00057f47) sc_clock_pane_g1_ParamLimits

0x35fd,	// (0x00057f47) sc_clock_pane_g1

0xbff9,	// (0x00060943) sc_clock_pane_t1_ParamLimits

0xbff9,	// (0x00060943) sc_clock_pane_t1

0xbff9,	// (0x00060943) sc_clock_pane_t2_ParamLimits

0xbff9,	// (0x00060943) sc_clock_pane_t2

0xbff9,	// (0x00060943) sc_clock_pane_t3_ParamLimits

0xbff9,	// (0x00060943) sc_clock_pane_t3

0x0004,

0xfb85,	// (0x000644cf) sc_clock_pane_t_ParamLimits

0xfb85,	// (0x000644cf) sc_clock_pane_t

0xa539,	// (0x0005ee83) main_fs_bigclock_indicator_pane_ParamLimits

0xa539,	// (0x0005ee83) main_fs_bigclock_indicator_pane

0x98e8,	// (0x0005e232) main_fs_bigclock_pane_g1_ParamLimits

0x98e8,	// (0x0005e232) main_fs_bigclock_pane_g1

0xa545,	// (0x0005ee8f) main_fs_bigclock_pane_t1_ParamLimits

0xa545,	// (0x0005ee8f) main_fs_bigclock_pane_t1

0xa557,	// (0x0005eea1) main_fs_bigclock_pane_t2_ParamLimits

0xa557,	// (0x0005eea1) main_fs_bigclock_pane_t2

0xa56b,	// (0x0005eeb5) main_fs_bigclock_pane_t3_ParamLimits

0xa56b,	// (0x0005eeb5) main_fs_bigclock_pane_t3

0x0002,

0xfd1b,	// (0x00064665) main_fs_bigclock_pane_t_ParamLimits

0xfd1b,	// (0x00064665) main_fs_bigclock_pane_t

0x16e9,	// (0x00056033) main_fs_bigclock_indicator_pane_g1

0x096b,	// (0x000552b5) ncim_query_content_pane_g2_ParamLimits

0x096b,	// (0x000552b5) ncim_query_content_pane_g2

0x0001,

0xfb12,	// (0x0006445c) ncim_query_content_pane_g_ParamLimits

0xfb12,	// (0x0006445c) ncim_query_content_pane_g

0xbff9,	// (0x00060943) sc_clock_pane_t4_ParamLimits

0xbff9,	// (0x00060943) sc_clock_pane_t4

0x6199,	// (0x0005aae3) main_radioblah_pane

0x7a75,	// (0x0005c3bf) cell_call4_button_pane_t1_copy1_ParamLimits

0x7a75,	// (0x0005c3bf) cell_call4_button_pane_t1_copy1

0x9515,	// (0x0005de5f) main_ncimui_pane_t1_ParamLimits

0x9515,	// (0x0005de5f) main_ncimui_pane_t1

0x952f,	// (0x0005de79) main_ncimui_pane_t2_ParamLimits

0x952f,	// (0x0005de79) main_ncimui_pane_t2

0x0002,

0xfb0b,	// (0x00064455) main_ncimui_pane_t_ParamLimits

0xfb0b,	// (0x00064455) main_ncimui_pane_t

0xcca8,	// (0x000615f2) main_radioblah_anim_pane_ParamLimits

0xcca8,	// (0x000615f2) main_radioblah_anim_pane

0xcca8,	// (0x000615f2) main_radioblah_info_pane_ParamLimits

0xcca8,	// (0x000615f2) main_radioblah_info_pane

0xd61f,	// (0x00061f69) main_radioblah_pane_t1_ParamLimits

0xd61f,	// (0x00061f69) main_radioblah_pane_t1

0xd61f,	// (0x00061f69) main_radioblah_pane_t2_ParamLimits

0xd61f,	// (0x00061f69) main_radioblah_pane_t2

0x0003,

0xfba6,	// (0x000644f0) main_radioblah_pane_t_ParamLimits

0xfba6,	// (0x000644f0) main_radioblah_pane_t

0x35e1,	// (0x00057f2b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x35e1,	// (0x00057f2b) main_radioblah_rocker_ctrl_pane

0xe082,	// (0x000629cc) main_radioblah_info_pane_t1_ParamLimits

0xe082,	// (0x000629cc) main_radioblah_info_pane_t1

0x0c95,	// (0x000555df) main_radioblah_info_pane_t2_ParamLimits

0x0c95,	// (0x000555df) main_radioblah_info_pane_t2

0x0003,

0xfbaf,	// (0x000644f9) main_radioblah_info_pane_t_ParamLimits

0xfbaf,	// (0x000644f9) main_radioblah_info_pane_t

0xbfdb,	// (0x00060925) main_radioblah_rocker_ctrl_pane_g1

0xbfdb,	// (0x00060925) main_radioblah_rocker_ctrl_pane_g2

0xbfdb,	// (0x00060925) main_radioblah_rocker_ctrl_pane_g3

0xbfdb,	// (0x00060925) main_radioblah_rocker_ctrl_pane_g4

0xbfdb,	// (0x00060925) main_radioblah_rocker_ctrl_pane_g5

0xbfdb,	// (0x00060925) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbb8,	// (0x00064502) main_radioblah_rocker_ctrl_pane_g

0x94c7,	// (0x0005de11) main_cset_text2_pane_t1_copy1_ParamLimits

0x7aee,	// (0x0005c438) cam4_image_uncrop_qvga_pane

0x7c33,	// (0x0005c57d) vid4_image_uncrop_qcif_pane

0x903b,	// (0x0005d985) cam6_image_uncrop_qvga_pane_ParamLimits

0x903b,	// (0x0005d985) cam6_image_uncrop_qvga_pane

0x064a,	// (0x00054f94) vid6_image_uncrop_qcif_pane_ParamLimits

0x064a,	// (0x00054f94) vid6_image_uncrop_qcif_pane

0x10b1,	// (0x000559fb) bg_popup_preview_window_pane_cp03

0x091d,	// (0x00055267) list_cset_text2_pane

0x0925,	// (0x0005526f) main_cset6_text2_pane_g1

0x092d,	// (0x00055277) main_cset6_text2_pane_t1

0x9a75,	// (0x0005e3bf) list_cset_text2_pane_t1_ParamLimits

0x9a75,	// (0x0005e3bf) list_cset_text2_pane_t1

0x6199,	// (0x0005aae3) main_radioblah_pane_ParamLimits

0x9847,	// (0x0005e191) main_mobtv_info_pane_t3_ParamLimits

0x9847,	// (0x0005e191) main_mobtv_info_pane_t3

0xd633,	// (0x00061f7d) main_radioblah_pane_g1

0x0c65,	// (0x000555af) main_radioblah_info_pane_g1

0xbff9,	// (0x00060943) main_radioblah_info_pane_t3_ParamLimits

0xbff9,	// (0x00060943) main_radioblah_info_pane_t3

0x5187,	// (0x00059ad1) highlight_cell_cale_month_pane_ParamLimits

0x5187,	// (0x00059ad1) highlight_cell_cale_month_pane

0x33d6,	// (0x00057d20) main_phob_fisheye_pane

0xe5b6,	// (0x00062f00) scroll_pane_cp0031_ParamLimits

0xe5b6,	// (0x00062f00) scroll_pane_cp0031

0x075c,	// (0x000550a6) wait_bar_pane_cp08_ParamLimits

0x9252,	// (0x0005db9c) cset_list_set_pane_copy1_ParamLimits

0x0ce4,	// (0x0005562e) highlight_cell_cale_month_pane_g1

0x9a8c,	// (0x0005e3d6) highlight_cell_cale_month_pane_t1

0xf037,	// (0x00063981) list_gen_pane_cp01

0xec01,	// (0x0006354b) scroll_pane_01

0x9a9a,	// (0x0005e3e4) list_single_double_fisheye_pane

0x9aa3,	// (0x0005e3ed) list_double_fisheye_pane_g1_ParamLimits

0x9aa3,	// (0x0005e3ed) list_double_fisheye_pane_g1

0x9aaf,	// (0x0005e3f9) list_double_fisheye_pane_g2_ParamLimits

0x9aaf,	// (0x0005e3f9) list_double_fisheye_pane_g2

0x9ac3,	// (0x0005e40d) list_double_fisheye_pane_g3_ParamLimits

0x9ac3,	// (0x0005e40d) list_double_fisheye_pane_g3

0x0004,

0xfbc5,	// (0x0006450f) list_double_fisheye_pane_g_ParamLimits

0xfbc5,	// (0x0006450f) list_double_fisheye_pane_g

0x9aec,	// (0x0005e436) list_double_fisheye_pane_t1_ParamLimits

0x9aec,	// (0x0005e436) list_double_fisheye_pane_t1

0x9b07,	// (0x0005e451) list_double_fisheye_pane_t2_ParamLimits

0x9b07,	// (0x0005e451) list_double_fisheye_pane_t2

0x0001,

0xfbd0,	// (0x0006451a) list_double_fisheye_pane_t_ParamLimits

0xfbd0,	// (0x0006451a) list_double_fisheye_pane_t

0x33d6,	// (0x00057d20) main_call5_pane

0x35e1,	// (0x00057f2b) sc_swipe_pane_ParamLimits

0x35e1,	// (0x00057f2b) sc_swipe_pane

0x9b35,	// (0x0005e47f) call5_image_pane_ParamLimits

0x9b35,	// (0x0005e47f) call5_image_pane

0x9b47,	// (0x0005e491) call5_swipe_1_pane_ParamLimits

0x9b47,	// (0x0005e491) call5_swipe_1_pane

0x9b53,	// (0x0005e49d) call5_swipe_2_pane_ParamLimits

0x9b53,	// (0x0005e49d) call5_swipe_2_pane

0x9b6d,	// (0x0005e4b7) popup_call5_audio_first_window_ParamLimits

0x9b6d,	// (0x0005e4b7) popup_call5_audio_first_window

0x35ef,	// (0x00057f39) call5_swipe_1_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) call5_swipe_1_pane_g1

0x0cec,	// (0x00055636) call5_swipe_1_pane_g2_ParamLimits

0x0cec,	// (0x00055636) call5_swipe_1_pane_g2

0x0001,

0xfbd5,	// (0x0006451f) call5_swipe_1_pane_g_ParamLimits

0xfbd5,	// (0x0006451f) call5_swipe_1_pane_g

0x0cf8,	// (0x00055642) call5_swipe_1_pane_t1_ParamLimits

0x0cf8,	// (0x00055642) call5_swipe_1_pane_t1

0x35ef,	// (0x00057f39) call5_swipe_2_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) call5_swipe_2_pane_g1

0x0d0d,	// (0x00055657) call5_swipe_2_pane_g2_ParamLimits

0x0d0d,	// (0x00055657) call5_swipe_2_pane_g2

0x0001,

0xfbda,	// (0x00064524) call5_swipe_2_pane_g_ParamLimits

0xfbda,	// (0x00064524) call5_swipe_2_pane_g

0x0d19,	// (0x00055663) call5_swipe_2_pane_t1_ParamLimits

0x0d19,	// (0x00055663) call5_swipe_2_pane_t1

0x35ef,	// (0x00057f39) sc_swipe_pane_g1_ParamLimits

0x35ef,	// (0x00057f39) sc_swipe_pane_g1

0x35fd,	// (0x00057f47) sc_swipe_pane_g2_ParamLimits

0x35fd,	// (0x00057f47) sc_swipe_pane_g2

0x0001,

0xfbdf,	// (0x00064529) sc_swipe_pane_g_ParamLimits

0xfbdf,	// (0x00064529) sc_swipe_pane_g

0xbfe5,	// (0x0006092f) sc_swipe_pane_t1_ParamLimits

0xbfe5,	// (0x0006092f) sc_swipe_pane_t1

0x33d6,	// (0x00057d20) main_cmail_launcher_pane

0x9b7d,	// (0x0005e4c7) aid_size_cell_cmail_l_ParamLimits

0x9b7d,	// (0x0005e4c7) aid_size_cell_cmail_l

0x9b8b,	// (0x0005e4d5) grid_cmail_l_pane_ParamLimits

0x9b8b,	// (0x0005e4d5) grid_cmail_l_pane

0x9b99,	// (0x0005e4e3) cell_cmail_l_pane_ParamLimits

0x9b99,	// (0x0005e4e3) cell_cmail_l_pane

0x9bb4,	// (0x0005e4fe) cell_cmail_l_pane_g1_ParamLimits

0x9bb4,	// (0x0005e4fe) cell_cmail_l_pane_g1

0x9bc0,	// (0x0005e50a) cell_cmail_l_pane_t1_ParamLimits

0x9bc0,	// (0x0005e50a) cell_cmail_l_pane_t1

0x9bd6,	// (0x0005e520) cell_cmail_l_pane_t2_ParamLimits

0x9bd6,	// (0x0005e520) cell_cmail_l_pane_t2

0x0001,

0xfbe4,	// (0x0006452e) cell_cmail_l_pane_t_ParamLimits

0xfbe4,	// (0x0006452e) cell_cmail_l_pane_t

0x3588,	// (0x00057ed2) grid_highlight_pane_cp018_ParamLimits

0x3588,	// (0x00057ed2) grid_highlight_pane_cp018

0x32c9,	// (0x00057c13) main2_pane_ParamLimits

0x32c9,	// (0x00057c13) main2_pane

0xc0c8,	// (0x00060a12) popup_sp_fs_action_menu_bg_pane_g1

0xc0d0,	// (0x00060a1a) popup_sp_fs_action_menu_bg_pane_g2

0xc0d8,	// (0x00060a22) popup_sp_fs_action_menu_bg_pane_g3

0xc0e0,	// (0x00060a2a) popup_sp_fs_action_menu_bg_pane_g4

0xc0e8,	// (0x00060a32) popup_sp_fs_action_menu_bg_pane_g5

0xc0f0,	// (0x00060a3a) popup_sp_fs_action_menu_bg_pane_g6

0xc0f8,	// (0x00060a42) popup_sp_fs_action_menu_bg_pane_g7

0xc100,	// (0x00060a4a) popup_sp_fs_action_menu_bg_pane_g8

0xc108,	// (0x00060a52) popup_sp_fs_action_menu_bg_pane_g9

0xc110,	// (0x00060a5a) popup_sp_fs_action_menu_bg_pane_g10

0xc110,	// (0x00060a5a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00063a4a) popup_sp_fs_action_menu_bg_pane_g

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g3_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g3_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g3_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g3_g2

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g3_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00063af8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00063af8) list_medium_line_x2_t3_g3_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g3_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g3_t2

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00063aff) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00063aff) list_medium_line_x2_t3_g3_t

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g2_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g2_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00063b06) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00063b06) list_medium_line_x2_t3_g2_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g2_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g2_t2

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00063aff) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00063aff) list_medium_line_x2_t3_g2_t

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g2

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g3

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g4_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00063b0b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00063b0b) list_medium_line_x2_t4_g4_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t2

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t3

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00063b14) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00063b14) list_medium_line_x2_t4_g4_t

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g2

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g3

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g4_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00063b0b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00063b0b) list_medium_line_x2_t2_g4_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g4_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00063b7b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00063b7b) list_medium_line_x2_t2_g4_t

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g3_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g3_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g3_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g3_g2

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g3_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00063af8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00063af8) list_medium_line_x2_t2_g3_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g3_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00063b7b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00063b7b) list_medium_line_x2_t2_g3_t

0x5319,	// (0x00059c63) main_sp_fs_list_pane_ParamLimits

0x5319,	// (0x00059c63) main_sp_fs_list_pane

0x5325,	// (0x00059c6f) sp_fs_scroll_pane_ParamLimits

0x5325,	// (0x00059c6f) sp_fs_scroll_pane

0xc731,	// (0x0006107b) list_medium_line_x2_t3_t1

0xc731,	// (0x0006107b) list_medium_line_x2_t3_t2

0xc731,	// (0x0006107b) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00063bc6) list_medium_line_x2_t3_t

0xc731,	// (0x0006107b) list_medium_line_x3_t4_t1

0xc731,	// (0x0006107b) list_medium_line_x3_t4_t2

0xc731,	// (0x0006107b) list_medium_line_x3_t4_t3

0xc731,	// (0x0006107b) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00063bcd) list_medium_line_x3_t4_t

0xc731,	// (0x0006107b) list_medium_line_x4_t5_t1

0xc731,	// (0x0006107b) list_medium_line_x4_t5_t2

0xc731,	// (0x0006107b) list_medium_line_x4_t5_t3

0xc731,	// (0x0006107b) list_medium_line_x4_t5_t4

0xc731,	// (0x0006107b) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00063bd6) list_medium_line_x4_t5_t

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g1

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g2

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g3

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g4_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00063b0b) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00063b0b) list_medium_line_t4_g4_g

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t1

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t2

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t3

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t4_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00063b14) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00063b14) list_medium_line_t4_g4_t

0x541e,	// (0x00059d68) chi_dic_find_pane_g1

0x61b5,	// (0x0005aaff) main_tport_pane

0xc731,	// (0x0006107b) list_medium_line_plain_t1

0x35ef,	// (0x00057f39) list_medium_line_t2_g2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t2_g2_g1

0x35ef,	// (0x00057f39) list_medium_line_t2_g2_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00063b06) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00063b06) list_medium_line_t2_g2_g

0xbfe5,	// (0x0006092f) list_medium_line_t2_g2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t2_g2_t1

0xbfe5,	// (0x0006092f) list_medium_line_t2_g2_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00063b7b) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00063b7b) list_medium_line_t2_g2_t

0x004d,	// (0x00054997) aid_sp_fs_list_icon_a_sm

0x0055,	// (0x0005499f) aid_sp_fs_list_icon_d

0x005d,	// (0x000549a7) aid_sp_fs_text_primary

0x03b3,	// (0x00054cfd) aid_sp_fs_text_secondary

0x10b1,	// (0x000559fb) list_medium_line

0x10b1,	// (0x000559fb) list_medium_line_g2

0x10b1,	// (0x000559fb) list_medium_line_g3

0x10b1,	// (0x000559fb) list_medium_line_plain

0x10b1,	// (0x000559fb) list_medium_line_plain_t2

0x10b1,	// (0x000559fb) list_medium_line_plain_t3

0x10b1,	// (0x000559fb) list_medium_line_right_icon

0x10b1,	// (0x000559fb) list_medium_line_right_iconx2

0x10b1,	// (0x000559fb) list_medium_line_t2

0x10b1,	// (0x000559fb) list_medium_line_t2_g2

0x10b1,	// (0x000559fb) list_medium_line_t2_g3

0x10b1,	// (0x000559fb) list_medium_line_t2_right_icon

0x10b1,	// (0x000559fb) list_medium_line_t2_right_iconx2

0x10b1,	// (0x000559fb) list_medium_line_t3

0x10b1,	// (0x000559fb) list_medium_line_t3_g2

0x10b1,	// (0x000559fb) list_medium_line_t3_g3

0x10b1,	// (0x000559fb) list_medium_line_t3_right_iconx2

0x10b1,	// (0x000559fb) list_medium_line_t4_g4

0x10b1,	// (0x000559fb) list_medium_line_x2

0x10b1,	// (0x000559fb) list_medium_line_x2_t2_g2

0x10b1,	// (0x000559fb) list_medium_line_x2_t2_g3

0x10b1,	// (0x000559fb) list_medium_line_x2_t2_g4

0x10b1,	// (0x000559fb) list_medium_line_x2_t3

0x10b1,	// (0x000559fb) list_medium_line_x2_t3_g2

0x10b1,	// (0x000559fb) list_medium_line_x2_t3_g3

0x10b1,	// (0x000559fb) list_medium_line_x2_t3_g4

0x10b1,	// (0x000559fb) list_medium_line_x2_t4_g2

0x10b1,	// (0x000559fb) list_medium_line_x2_t4_g4

0x10b1,	// (0x000559fb) list_medium_line_x3

0x10b1,	// (0x000559fb) list_medium_line_x3_t4

0x10b1,	// (0x000559fb) list_medium_line_x3_t4_g4

0x10b1,	// (0x000559fb) list_medium_line_x4_t4

0x10b1,	// (0x000559fb) list_medium_line_x4_t4_g7

0x10b1,	// (0x000559fb) list_medium_line_x4_t5

0x8d47,	// (0x0005d691) list_single_fs_dyc_pane_ParamLimits

0x8d47,	// (0x0005d691) list_single_fs_dyc_pane

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g1

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g2

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g3

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g4_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g4

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g5_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g5

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g6_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x4_t4_g7_g6

0x35fd,	// (0x00057f47) list_medium_line_x4_t4_g7_g7_ParamLimits

0x35fd,	// (0x00057f47) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaec,	// (0x00064436) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaec,	// (0x00064436) list_medium_line_x4_t4_g7_g

0xbfe5,	// (0x0006092f) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x4_t4_g7_t1

0xbfe5,	// (0x0006092f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x4_t4_g7_t2

0xbfe5,	// (0x0006092f) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x4_t4_g7_t3

0xbff9,	// (0x00060943) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbff9,	// (0x00060943) list_medium_line_x4_t4_g7_t4

0xbff9,	// (0x00060943) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbff9,	// (0x00060943) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafb,	// (0x00064445) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafb,	// (0x00064445) list_medium_line_x4_t4_g7_t

0x94aa,	// (0x0005ddf4) list_single_dyc_row_pane_ParamLimits

0x94aa,	// (0x0005ddf4) list_single_dyc_row_pane

0x9b29,	// (0x0005e473) call5_gesture_pane_ParamLimits

0x9b29,	// (0x0005e473) call5_gesture_pane

0x9b5f,	// (0x0005e4a9) call5_windows_pane_ParamLimits

0x9b5f,	// (0x0005e4a9) call5_windows_pane

0x9bf3,	// (0x0005e53d) call5_swipe_1_pane_cp_ParamLimits

0x9bf3,	// (0x0005e53d) call5_swipe_1_pane_cp

0x9bff,	// (0x0005e549) call5_swipe_2_pane_cp_ParamLimits

0x9bff,	// (0x0005e549) call5_swipe_2_pane_cp

0xc1d7,	// (0x00060b21) call5_image_pane_cp

0x9c0b,	// (0x0005e555) popup_call5_audio_first_window_cp_ParamLimits

0x9c0b,	// (0x0005e555) popup_call5_audio_first_window_cp

0x0d2e,	// (0x00055678) call5_swipe_1_pane_g1_cp_ParamLimits

0x0d2e,	// (0x00055678) call5_swipe_1_pane_g1_cp

0x0d3b,	// (0x00055685) call5_swipe_1_pane_g2_cp

0x0d43,	// (0x0005568d) call5_swipe_1_pane_t1_cp_ParamLimits

0x0d43,	// (0x0005568d) call5_swipe_1_pane_t1_cp

0x0d2e,	// (0x00055678) call5_swipe_2_pane_g1_cp_ParamLimits

0x0d2e,	// (0x00055678) call5_swipe_2_pane_g1_cp

0x0d58,	// (0x000556a2) call5_swipe_2_pane_g2_cp

0x0d60,	// (0x000556aa) call5_swipe_2_pane_t1_cp_ParamLimits

0x0d60,	// (0x000556aa) call5_swipe_2_pane_t1_cp

0x3588,	// (0x00057ed2) main_sp_fs_email_pane

0xed1f,	// (0x00063669) main_sp_fs_listscroll_pane_te

0x9c19,	// (0x0005e563) popup_sp_fs_action_menu_pane_ParamLimits

0x9c19,	// (0x0005e563) popup_sp_fs_action_menu_pane

0xbfdb,	// (0x00060925) bg_sp_fs_ctrlbar_pane_g1

0x0d75,	// (0x000556bf) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0d7e,	// (0x000556c8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0d87,	// (0x000556d1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbfdb,	// (0x00060925) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe9,	// (0x00064533) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdbc7,	// (0x00062511) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdbc7,	// (0x00062511) bg_sp_fs_ctrlbar_ddmenu_pane

0x0d90,	// (0x000556da) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0d90,	// (0x000556da) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0d9c,	// (0x000556e6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0d9c,	// (0x000556e6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbf2,	// (0x0006453c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbf2,	// (0x0006453c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0da8,	// (0x000556f2) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0da8,	// (0x000556f2) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbfdb,	// (0x00060925) list_medium_line_t2_right_icon_g1

0xc731,	// (0x0006107b) list_medium_line_t2_right_icon_t1

0xc731,	// (0x0006107b) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf7,	// (0x00064541) list_medium_line_t2_right_icon_t

0xcca8,	// (0x000615f2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcca8,	// (0x000615f2) bg_sp_fs_ctrlbar_pane

0x9cb8,	// (0x0005e602) main_sp_fs_ctrlbar_button_pane_cp01

0x9cc0,	// (0x0005e60a) main_sp_fs_ctrlbar_ddmenu_pane

0x0dfc,	// (0x00055746) main_sp_fs_ctrlbar_pane_g1

0x0e08,	// (0x00055752) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbfc,	// (0x00064546) main_sp_fs_ctrlbar_pane_g

0x9cfe,	// (0x0005e648) main_sp_fs_ctrlbar_pane_t1

0x9d3b,	// (0x0005e685) main_sp_fs_ctrlbar_pane

0x9d55,	// (0x0005e69f) main_sp_fs_listscroll_pane_te_cp01

0x9d70,	// (0x0005e6ba) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9d70,	// (0x0005e6ba) popup_sp_fs_action_menu_pane_cp01

0x3588,	// (0x00057ed2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3588,	// (0x00057ed2) bg_sp_fs_highlight_list_pane_cp01

0x0074,	// (0x000549be) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0074,	// (0x000549be) sp_fs_action_menu_list_gene_pane_g1

0x0e2f,	// (0x00055779) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0e2f,	// (0x00055779) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc0a,	// (0x00064554) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc0a,	// (0x00064554) sp_fs_action_menu_list_gene_pane_g

0x0083,	// (0x000549cd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0083,	// (0x000549cd) sp_fs_action_menu_list_gene_pane_t1

0x009b,	// (0x000549e5) sp_fs_action_menu_list_gene_pane_ParamLimits

0x009b,	// (0x000549e5) sp_fs_action_menu_list_gene_pane

0x0e3c,	// (0x00055786) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0e3c,	// (0x00055786) popup_sp_fs_action_menu_bg_pane

0x00be,	// (0x00054a08) sp_fs_action_menu_list_pane_ParamLimits

0x00be,	// (0x00054a08) sp_fs_action_menu_list_pane

0x00e2,	// (0x00054a2c) sp_fs_scroll_pane_cp01_ParamLimits

0x00e2,	// (0x00054a2c) sp_fs_scroll_pane_cp01

0xc731,	// (0x0006107b) list_medium_line_plain_t2_t1

0xc731,	// (0x0006107b) list_medium_line_plain_t2_t2

0x0001,

0xfbf7,	// (0x00064541) list_medium_line_plain_t2_t

0xc731,	// (0x0006107b) list_medium_line_plain_t3_t1

0xc731,	// (0x0006107b) list_medium_line_plain_t3_t2

0xc731,	// (0x0006107b) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00063bc6) list_medium_line_plain_t3_t

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g2_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g2_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00063b06) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00063b06) list_medium_line_x2_t2_g2_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g2_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00063b7b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00063b7b) list_medium_line_x2_t2_g2_t

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g2_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g2_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00063b06) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00063b06) list_medium_line_x2_t4_g2_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t2

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t3

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00063b14) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00063b14) list_medium_line_x2_t4_g2_t

0xbfdb,	// (0x00060925) list_medium_line_t3_right_iconx2_g1

0xbfdb,	// (0x00060925) list_medium_line_t3_right_iconx2_g2

0xbfdb,	// (0x00060925) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x00063ce2) list_medium_line_t3_right_iconx2_g

0xc731,	// (0x0006107b) list_medium_line_t3_right_iconx2_t1

0xc731,	// (0x0006107b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf7,	// (0x00064541) list_medium_line_t3_right_iconx2_t

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g1

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g2

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g3

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g4_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00063b0b) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00063b0b) list_medium_line_x3_t4_g4_g

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t1

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t2

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t3

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00063b14) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00063b14) list_medium_line_x3_t4_g4_t

0x9d90,	// (0x0005e6da) list_single_dyc_row_text_pane_t1_ParamLimits

0x9d90,	// (0x0005e6da) list_single_dyc_row_text_pane_t1

0x9dcd,	// (0x0005e717) list_single_dyc_row_text_pane_t2_ParamLimits

0x9dcd,	// (0x0005e717) list_single_dyc_row_text_pane_t2

0x0108,	// (0x00054a52) list_single_dyc_row_text_pane_t3_ParamLimits

0x0108,	// (0x00054a52) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0f,	// (0x00064559) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0f,	// (0x00064559) list_single_dyc_row_text_pane_t

0x012c,	// (0x00054a76) list_single_dyc_row_pane_g1_ParamLimits

0x012c,	// (0x00054a76) list_single_dyc_row_pane_g1

0x0138,	// (0x00054a82) list_single_dyc_row_pane_g2_ParamLimits

0x0138,	// (0x00054a82) list_single_dyc_row_pane_g2

0x0144,	// (0x00054a8e) list_single_dyc_row_pane_g3_ParamLimits

0x0144,	// (0x00054a8e) list_single_dyc_row_pane_g3

0x0150,	// (0x00054a9a) list_single_dyc_row_pane_g4_ParamLimits

0x0150,	// (0x00054a9a) list_single_dyc_row_pane_g4

0x0003,

0xfc1c,	// (0x00064566) list_single_dyc_row_pane_g_ParamLimits

0xfc1c,	// (0x00064566) list_single_dyc_row_pane_g

0x015c,	// (0x00054aa6) list_single_dyc_row_text_pane_ParamLimits

0x015c,	// (0x00054aa6) list_single_dyc_row_text_pane

0x10b1,	// (0x000559fb) bg_sp_fs_scroll_pane

0x0e4a,	// (0x00055794) thumb_sp_fs_scroll_pane

0x35ef,	// (0x00057f39) list_medium_line_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_g1

0xbfe5,	// (0x0006092f) list_medium_line_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t1

0x35ef,	// (0x00057f39) list_medium_line_x2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00063b06) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00063b06) list_medium_line_x2_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t1

0x35ef,	// (0x00057f39) list_medium_line_x3_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x3_g1

0x0e53,	// (0x0005579d) list_medium_line_x3_g2_ParamLimits

0x0e53,	// (0x0005579d) list_medium_line_x3_g2

0x0001,

0xfc25,	// (0x0006456f) list_medium_line_x3_g_ParamLimits

0xfc25,	// (0x0006456f) list_medium_line_x3_g

0x0e61,	// (0x000557ab) list_medium_line_x3_t1_ParamLimits

0x0e61,	// (0x000557ab) list_medium_line_x3_t1

0x0e75,	// (0x000557bf) thumb_sp_fs_scroll_pane_g1

0x0e7e,	// (0x000557c8) thumb_sp_fs_scroll_pane_g2

0x0e87,	// (0x000557d1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x00064574) thumb_sp_fs_scroll_pane_g

0x0e75,	// (0x000557bf) bg_sp_fs_scroll_pane_g1

0x0e7e,	// (0x000557c8) bg_sp_fs_scroll_pane_g2

0x0e87,	// (0x000557d1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc2a,	// (0x00064574) bg_sp_fs_scroll_pane_g

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g1

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g2

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g3

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g4_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00063b0b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00063b0b) list_medium_line_x2_t3_g4_g

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g4_t1

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g4_t2

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00063aff) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00063aff) list_medium_line_x2_t3_g4_t

0x35ef,	// (0x00057f39) list_medium_line_g2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_g2_g1

0x35ef,	// (0x00057f39) list_medium_line_g2_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00063b06) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00063b06) list_medium_line_g2_g

0xbfe5,	// (0x0006092f) list_medium_line_g2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_g2_t1

0x35ef,	// (0x00057f39) list_medium_line_t3_g2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t3_g2_g1

0x35ef,	// (0x00057f39) list_medium_line_t3_g2_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00063b06) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00063b06) list_medium_line_t3_g2_g

0xbfe5,	// (0x0006092f) list_medium_line_t3_g2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_g2_t1

0xbfe5,	// (0x0006092f) list_medium_line_t3_g2_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_g2_t2

0xbfe5,	// (0x0006092f) list_medium_line_t3_g2_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00063aff) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00063aff) list_medium_line_t3_g2_t

0xbfdb,	// (0x00060925) list_medium_line_right_icon_g1

0xc731,	// (0x0006107b) list_medium_line_right_icon_t1

0x35ef,	// (0x00057f39) list_medium_line_t2_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t2_g1

0xbfe5,	// (0x0006092f) list_medium_line_t2_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t2_t1

0xbfe5,	// (0x0006092f) list_medium_line_t2_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00063b7b) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00063b7b) list_medium_line_t2_t

0x35ef,	// (0x00057f39) list_medium_line_t3_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t3_g1

0xbfe5,	// (0x0006092f) list_medium_line_t3_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_t1

0xbfe5,	// (0x0006092f) list_medium_line_t3_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_t2

0xbfe5,	// (0x0006092f) list_medium_line_t3_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00063aff) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00063aff) list_medium_line_t3_t

0x35ef,	// (0x00057f39) list_medium_line_g3_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_g3_g1

0x35ef,	// (0x00057f39) list_medium_line_g3_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_g3_g2

0x35ef,	// (0x00057f39) list_medium_line_g3_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00063af8) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00063af8) list_medium_line_g3_g

0xbfe5,	// (0x0006092f) list_medium_line_g3_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_g3_t1

0x35ef,	// (0x00057f39) list_medium_line_t2_g3_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t2_g3_g1

0x35ef,	// (0x00057f39) list_medium_line_t2_g3_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t2_g3_g2

0x35ef,	// (0x00057f39) list_medium_line_t2_g3_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00063af8) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00063af8) list_medium_line_t2_g3_g

0xbfe5,	// (0x0006092f) list_medium_line_t2_g3_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t2_g3_t1

0xbfe5,	// (0x0006092f) list_medium_line_t2_g3_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00063b7b) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00063b7b) list_medium_line_t2_g3_t

0x35ef,	// (0x00057f39) list_medium_line_t3_g3_g1_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t3_g3_g1

0x35ef,	// (0x00057f39) list_medium_line_t3_g3_g2_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t3_g3_g2

0x35ef,	// (0x00057f39) list_medium_line_t3_g3_g3_ParamLimits

0x35ef,	// (0x00057f39) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00063af8) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00063af8) list_medium_line_t3_g3_g

0xbfe5,	// (0x0006092f) list_medium_line_t3_g3_t1_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_g3_t1

0xbfe5,	// (0x0006092f) list_medium_line_t3_g3_t2_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_g3_t2

0xbfe5,	// (0x0006092f) list_medium_line_t3_g3_t3_ParamLimits

0xbfe5,	// (0x0006092f) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00063aff) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00063aff) list_medium_line_t3_g3_t

0xbfdb,	// (0x00060925) list_medium_line_right_iconx2_g1

0xbfdb,	// (0x00060925) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000639f9) list_medium_line_right_iconx2_g

0xc731,	// (0x0006107b) list_medium_line_right_iconx2_t1

0xbfdb,	// (0x00060925) list_medium_line_t2_right_iconx2_g1

0xbfdb,	// (0x00060925) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000639f9) list_medium_line_t2_right_iconx2_g

0xc731,	// (0x0006107b) list_medium_line_t2_right_iconx2_t1

0xc731,	// (0x0006107b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf7,	// (0x00064541) list_medium_line_t2_right_iconx2_t

0xc731,	// (0x0006107b) list_medium_line_x4_t4_t1

0xc731,	// (0x0006107b) list_medium_line_x4_t4_t2

0xc731,	// (0x0006107b) list_medium_line_x4_t4_t3

0xc731,	// (0x0006107b) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00063bcd) list_medium_line_x4_t4_t

0x9f20,	// (0x0005e86a) tport_appsw_pane_ParamLimits

0x9f20,	// (0x0005e86a) tport_appsw_pane

0x9f2e,	// (0x0005e878) tport_contact_pane_ParamLimits

0x9f2e,	// (0x0005e878) tport_contact_pane

0x9f3e,	// (0x0005e888) tport_listscroll_pane_ParamLimits

0x9f3e,	// (0x0005e888) tport_listscroll_pane

0x9f4e,	// (0x0005e898) cell_tport_appsw_pane_ParamLimits

0x9f4e,	// (0x0005e898) cell_tport_appsw_pane

0x35fd,	// (0x00057f47) tport_appsw_pane_g1_ParamLimits

0x35fd,	// (0x00057f47) tport_appsw_pane_g1

0x9f7b,	// (0x0005e8c5) tport_contact_pane_g1

0x9f84,	// (0x0005e8ce) tport_contact_pane_t1

0x9f92,	// (0x0005e8dc) tport_contact_pane_t2

0x0001,

0xfc31,	// (0x0006457b) tport_contact_pane_t

0x0e90,	// (0x000557da) list_tport_pane

0x0e99,	// (0x000557e3) scroll_pane_cp_030

0x9fa8,	// (0x0005e8f2) cell_tport_appsw_pane_g1

0x9fb8,	// (0x0005e902) cell_tport_appsw_pane_t1

0x9fc6,	// (0x0005e910) grid_highlight_pane_cp019

0x9fce,	// (0x0005e918) list_tport_double_graphic_pane_ParamLimits

0x9fce,	// (0x0005e918) list_tport_double_graphic_pane

0x3588,	// (0x00057ed2) list_highlight_pane_cp023_ParamLimits

0x3588,	// (0x00057ed2) list_highlight_pane_cp023

0x9fdb,	// (0x0005e925) list_tport_double_graphic_pane_g1_ParamLimits

0x9fdb,	// (0x0005e925) list_tport_double_graphic_pane_g1

0x9fe8,	// (0x0005e932) list_tport_double_graphic_pane_t1_ParamLimits

0x9fe8,	// (0x0005e932) list_tport_double_graphic_pane_t1

0x9ffd,	// (0x0005e947) list_tport_double_graphic_pane_t2_ParamLimits

0x9ffd,	// (0x0005e947) list_tport_double_graphic_pane_t2

0x0001,

0xfc3d,	// (0x00064587) list_tport_double_graphic_pane_t_ParamLimits

0xfc3d,	// (0x00064587) list_tport_double_graphic_pane_t

0x10b1,	// (0x000559fb) main_cale_note_pane

0x7ea8,	// (0x0005c7f2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7ea8,	// (0x0005c7f2) cell_vitu2_function_top_wide_pane_cp01

0x985b,	// (0x0005e1a5) wait_bar_pane_cp05_ParamLimits

0x3588,	// (0x00057ed2) listscroll_cmail_pane

0x0eaa,	// (0x000557f4) list_cmail_pane

0xa00f,	// (0x0005e959) list_cmail_body_pane

0xa029,	// (0x0005e973) list_single_cmail_header_caption_pane

0xa049,	// (0x0005e993) list_single_cmail_header_detail_pane_ParamLimits

0xa049,	// (0x0005e993) list_single_cmail_header_detail_pane

0x0ec1,	// (0x0005580b) list_single_cmail_header_caption_pane_t1

0xa07f,	// (0x0005e9c9) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa07f,	// (0x0005e9c9) list_single_cmail_header_detail_pane_g1

0x017b,	// (0x00054ac5) list_single_cmail_header_detail_pane_g2_ParamLimits

0x017b,	// (0x00054ac5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc42,	// (0x0006458c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc42,	// (0x0006458c) list_single_cmail_header_detail_pane_g

0xa097,	// (0x0005e9e1) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa097,	// (0x0005e9e1) list_single_cmail_header_detail_pane_t1

0xa0d3,	// (0x0005ea1d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa0d3,	// (0x0005ea1d) list_single_cmail_header_editor_pane_bg

0x0b58,	// (0x000554a2) list_cmail_body_pane_g1

0x0ee5,	// (0x0005582f) list_cmail_body_pane_t1

0xeabd,	// (0x00063407) list_single_cmail_header_editor_pane_bg_g1

0xc403,	// (0x00060d4d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeacd,	// (0x00063417) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeac5,	// (0x0006340f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed17,	// (0x00063661) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeaed,	// (0x00063437) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeadd,	// (0x00063427) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeae5,	// (0x0006342f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc3e3,	// (0x00060d2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa0ea,	// (0x0005ea34) calenote_gesture_pane_ParamLimits

0xa0ea,	// (0x0005ea34) calenote_gesture_pane

0xa104,	// (0x0005ea4e) calenote_window_pane_ParamLimits

0xa104,	// (0x0005ea4e) calenote_window_pane

0x0ef3,	// (0x0005583d) popup_note_window_cp01

0xa11c,	// (0x0005ea66) calenote_swipe_1_pane_ParamLimits

0xa11c,	// (0x0005ea66) calenote_swipe_1_pane

0x9bff,	// (0x0005e549) calenote_swipe_2_pane_ParamLimits

0x9bff,	// (0x0005e549) calenote_swipe_2_pane

0x0d2e,	// (0x00055678) calenote_swipe_1_pane_g1_ParamLimits

0x0d2e,	// (0x00055678) calenote_swipe_1_pane_g1

0x0f05,	// (0x0005584f) calenote_swipe_1_pane_g2_ParamLimits

0x0f05,	// (0x0005584f) calenote_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x00064598) calenote_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x00064598) calenote_swipe_1_pane_g

0x0f11,	// (0x0005585b) calenote_swipe_1_pane_t1_ParamLimits

0x0f11,	// (0x0005585b) calenote_swipe_1_pane_t1

0x0d2e,	// (0x00055678) calenote_swipe_2_pane_g1_ParamLimits

0x0d2e,	// (0x00055678) calenote_swipe_2_pane_g1

0x0f30,	// (0x0005587a) calenote_swipe_2_pane_g2_ParamLimits

0x0f30,	// (0x0005587a) calenote_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x0006459d) calenote_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x0006459d) calenote_swipe_2_pane_g

0x0f3c,	// (0x00055886) calenote_swipe_2_pane_t1_ParamLimits

0x0f3c,	// (0x00055886) calenote_swipe_2_pane_t1

0x10b1,	// (0x000559fb) main_mup_navstr_pane

0x6d49,	// (0x0005b693) main_mup3_pane_t7_ParamLimits

0x6d49,	// (0x0005b693) main_mup3_pane_t7

0x7557,	// (0x0005bea1) main_mp4_pane_g6_ParamLimits

0x7557,	// (0x0005bea1) main_mp4_pane_g6

0x78cd,	// (0x0005c217) main_image3_pane_t4_ParamLimits

0x78cd,	// (0x0005c217) main_image3_pane_t4

0xa12f,	// (0x0005ea79) popup_navstr_preview_pane_ParamLimits

0xa12f,	// (0x0005ea79) popup_navstr_preview_pane

0xa13b,	// (0x0005ea85) scroll_navstr_pane_ParamLimits

0xa13b,	// (0x0005ea85) scroll_navstr_pane

0x10b1,	// (0x000559fb) bg_popup_preview_window_pane_cp04

0x0f63,	// (0x000558ad) popup_navstr_preview_pane_t1

0xa147,	// (0x0005ea91) scroll_navstr_pane_g1_ParamLimits

0xa147,	// (0x0005ea91) scroll_navstr_pane_g1

0xa154,	// (0x0005ea9e) scroll_navstr_pane_t1_ParamLimits

0xa154,	// (0x0005ea9e) scroll_navstr_pane_t1

0x0efc,	// (0x00055846) bg_button_pane_cp014

0x0efc,	// (0x00055846) bg_button_pane_cp030

0x9acf,	// (0x0005e419) list_double_fisheye_pane_g4_ParamLimits

0x9acf,	// (0x0005e419) list_double_fisheye_pane_g4

0x9adb,	// (0x0005e425) list_double_fisheye_pane_g5_ParamLimits

0x9adb,	// (0x0005e425) list_double_fisheye_pane_g5

0x039b,	// (0x00054ce5) sp_fs_scroll_pane_cp03

0x0dfc,	// (0x00055746) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0e08,	// (0x00055752) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbfc,	// (0x00064546) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9cfe,	// (0x0005e648) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0eb9,	// (0x00055803) sp_fs_scroll_pane_cp02

0xc133,	// (0x00060a7d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc133,	// (0x00060a7d) popup_sp_fs_calendar_preview_list_single_pane

0x10b1,	// (0x000559fb) main_cam6_pano_pane

0x6199,	// (0x0005aae3) main_mup3_pane_ParamLimits

0x10b1,	// (0x000559fb) main_phacti_pane

0x972e,	// (0x0005e078) bg_button_pane_cp11

0x9746,	// (0x0005e090) main_mobtv_info_pane_g2_ParamLimits

0x9746,	// (0x0005e090) main_mobtv_info_pane_g2

0x0001,

0xfb5c,	// (0x000644a6) main_mobtv_info_pane_g_ParamLimits

0xfb5c,	// (0x000644a6) main_mobtv_info_pane_g

0xbff9,	// (0x00060943) sc_clock_pane_t5_ParamLimits

0xbff9,	// (0x00060943) sc_clock_pane_t5

0xd633,	// (0x00061f7d) main_radioblah_pane_g1_ParamLimits

0xd61f,	// (0x00061f69) main_radioblah_pane_t3_ParamLimits

0xd61f,	// (0x00061f69) main_radioblah_pane_t3

0xd61f,	// (0x00061f69) main_radioblah_pane_t4_ParamLimits

0xd61f,	// (0x00061f69) main_radioblah_pane_t4

0x35e1,	// (0x00057f2b) main_radioblah_text_pane_ParamLimits

0x35e1,	// (0x00057f2b) main_radioblah_text_pane

0x0c65,	// (0x000555af) main_radioblah_info_pane_g1_ParamLimits

0x0ca9,	// (0x000555f3) main_radioblah_info_pane_t4_ParamLimits

0x0ca9,	// (0x000555f3) main_radioblah_info_pane_t4

0x3588,	// (0x00057ed2) main_sp_fs_calendar_pane

0xa166,	// (0x0005eab0) main_phacti_pane_g1

0xa16e,	// (0x0005eab8) phacti_note_pane_ParamLimits

0xa16e,	// (0x0005eab8) phacti_note_pane

0x0f7a,	// (0x000558c4) phacti_term_pane_ParamLimits

0x0f7a,	// (0x000558c4) phacti_term_pane

0x0f8f,	// (0x000558d9) phacti_note_pane_t1_ParamLimits

0x0f8f,	// (0x000558d9) phacti_note_pane_t1

0x01ab,	// (0x00054af5) phacti_term_pane_g1

0x01b3,	// (0x00054afd) phacti_term_pane_t1_ParamLimits

0x01b3,	// (0x00054afd) phacti_term_pane_t1

0x0fa6,	// (0x000558f0) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0fae,	// (0x000558f8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5d,	// (0x000645a7) popup_sp_fs_calendar_preview_list_single_pane_g

0x0fb6,	// (0x00055900) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0fb6,	// (0x00055900) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0fcc,	// (0x00055916) aid_popup_sp_fs_bg_corner_pane

0xbfdb,	// (0x00060925) popup_sp_fs_calendar_preview_bg_pane_g1

0x10b1,	// (0x000559fb) popup_sp_fs_calendar_preview_bg_pane

0x0fd4,	// (0x0005591e) popup_sp_fs_calendar_preview_list_pane

0xcca8,	// (0x000615f2) bg_main_sp_fs_cale_pane_ParamLimits

0xcca8,	// (0x000615f2) bg_main_sp_fs_cale_pane

0x01e6,	// (0x00054b30) listscroll_cale_mrui_pane_ParamLimits

0x01e6,	// (0x00054b30) listscroll_cale_mrui_pane

0x01fb,	// (0x00054b45) listscroll_sp_fs_schedule_track_pane

0x0204,	// (0x00054b4e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0204,	// (0x00054b4e) main_sp_fs_ctrlbar_pane_cp01

0x0fdc,	// (0x00055926) main_sp_fs_ribbon_pane

0x0217,	// (0x00054b61) popup_sp_fs_cale_preview_window

0xa1d1,	// (0x0005eb1b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa1d1,	// (0x0005eb1b) list_single_sp_fs_schedule_track_pane

0x35e1,	// (0x00057f2b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x35e1,	// (0x00057f2b) bg_sp_fs_highlight_list_pane_cp03

0xa1e8,	// (0x0005eb32) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa1e8,	// (0x0005eb32) list_single_sp_fs_schedule_track_pane_g1

0xa1f4,	// (0x0005eb3e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa1f4,	// (0x0005eb3e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc62,	// (0x000645ac) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc62,	// (0x000645ac) list_single_sp_fs_schedule_track_pane_g

0xa200,	// (0x0005eb4a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa200,	// (0x0005eb4a) list_single_sp_fs_schedule_track_pane_t1

0xa21e,	// (0x0005eb68) sp_fs_schedule_track_pane_ParamLimits

0xa21e,	// (0x0005eb68) sp_fs_schedule_track_pane

0x0fe4,	// (0x0005592e) sp_fs_schedule_track_pane_g1

0x0fec,	// (0x00055936) sp_fs_schedule_track_pane_g2

0x0ff4,	// (0x0005593e) sp_fs_schedule_track_pane_g3

0x0ffc,	// (0x00055946) sp_fs_schedule_track_pane_g4

0x1004,	// (0x0005594e) sp_fs_schedule_track_pane_g5

0x0004,

0xfc67,	// (0x000645b1) sp_fs_schedule_track_pane_g

0xeabd,	// (0x00063407) bg_sp_fs_schedule_viewer_highlight_g1

0xc403,	// (0x00060d4d) bg_sp_fs_schedule_viewer_highlight_g2

0xeac5,	// (0x0006340f) bg_sp_fs_schedule_viewer_highlight_g3

0xeacd,	// (0x00063417) bg_sp_fs_schedule_viewer_highlight_g4

0xed17,	// (0x00063661) bg_sp_fs_schedule_viewer_highlight_g5

0xeadd,	// (0x00063427) bg_sp_fs_schedule_viewer_highlight_g6

0xeae5,	// (0x0006342f) bg_sp_fs_schedule_viewer_highlight_g7

0xeaed,	// (0x00063437) bg_sp_fs_schedule_viewer_highlight_g8

0xc3e3,	// (0x00060d2d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc72,	// (0x000645bc) bg_sp_fs_schedule_viewer_highlight_g

0x10b1,	// (0x000559fb) bg_main_sp_fs_ribbon_pane

0xa230,	// (0x0005eb7a) main_sp_fs_ribbon_pane_g1

0x100c,	// (0x00055956) main_sp_fs_ribbon_pane_t1

0xa239,	// (0x0005eb83) main_sp_fs_ribbon_pane_t2

0x101b,	// (0x00055965) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc85,	// (0x000645cf) main_sp_fs_ribbon_pane_t

0x102a,	// (0x00055974) main_sp_fs_ribbon_scheduler_pane

0x1032,	// (0x0005597c) bg_main_sp_fs_ribbon_pane_g1

0x103b,	// (0x00055985) bg_main_sp_fs_ribbon_pane_g2

0x1044,	// (0x0005598e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc8c,	// (0x000645d6) bg_main_sp_fs_ribbon_pane_g

0x104c,	// (0x00055996) main_sp_fs_ribbon_scheduler_pane_g1

0x1055,	// (0x0005599f) main_sp_fs_ribbon_scheduler_pane_g2

0x105e,	// (0x000559a8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc93,	// (0x000645dd) main_sp_fs_ribbon_scheduler_pane_g

0x1067,	// (0x000559b1) list_cale_mrui_pane

0xa248,	// (0x0005eb92) sp_fs_scroll_pane_cp07_ParamLimits

0xa248,	// (0x0005eb92) sp_fs_scroll_pane_cp07

0xa264,	// (0x0005ebae) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa264,	// (0x0005ebae) bg_sp_fs_schedule_viewer_highlight

0x1074,	// (0x000559be) list_single_sp_fs_schedule_track_pane_cp01

0x107c,	// (0x000559c6) list_sp_fs_schedule_track_pane

0x1084,	// (0x000559ce) sp_fs_scroll_pane_cp06_ParamLimits

0x1084,	// (0x000559ce) sp_fs_scroll_pane_cp06

0xbfdb,	// (0x00060925) bgmain_sp_fs_calendar_pane_g1

0xa271,	// (0x0005ebbb) list_single_cale_mrui_pane_ParamLimits

0xa271,	// (0x0005ebbb) list_single_cale_mrui_pane

0x0229,	// (0x00054b73) list_single_cale_mrui_row_pane_ParamLimits

0x0229,	// (0x00054b73) list_single_cale_mrui_row_pane

0x0236,	// (0x00054b80) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0236,	// (0x00054b80) list_single_cale_mrui_row_pane_g1

0x026e,	// (0x00054bb8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x026e,	// (0x00054bb8) list_single_cale_mrui_row_pane_t1

0xa295,	// (0x0005ebdf) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa295,	// (0x0005ebdf) list_single_cale_mrui_row_pane_t2

0x0280,	// (0x00054bca) list_single_cale_mrui_row_pane_t3_ParamLimits

0x0280,	// (0x00054bca) list_single_cale_mrui_row_pane_t3

0x02af,	// (0x00054bf9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x02af,	// (0x00054bf9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfca1,	// (0x000645eb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfca1,	// (0x000645eb) list_single_cale_mrui_row_pane_t

0xa2fb,	// (0x0005ec45) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa2fb,	// (0x0005ec45) list_single_cmail_header_editor_pane_bg_cp01

0xa325,	// (0x0005ec6f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa325,	// (0x0005ec6f) list_single_cmail_header_editor_pane_bg_cp02

0x1476,	// (0x00055dc0) main_radioblah_text_pane_t1_ParamLimits

0x1476,	// (0x00055dc0) main_radioblah_text_pane_t1

0x1490,	// (0x00055dda) cam6_indi_pane_cp01

0x1498,	// (0x00055de2) cam6_mode_pane_cp01

0x14a0,	// (0x00055dea) cam6_pano_pane

0x14a9,	// (0x00055df3) cam6_zoom_pane_cp01

0x14b3,	// (0x00055dfd) cam6_pano_image_pane

0x14bc,	// (0x00055e06) cam6_pano_pane_g1

0x0b58,	// (0x000554a2) cam6_pano_pane_g2

0x14c5,	// (0x00055e0f) cam6_pano_pane_g3

0x14ce,	// (0x00055e18) cam6_pano_pane_g4

0xe83c,	// (0x00063186) cam6_pano_pane_g5

0x14d7,	// (0x00055e21) cam6_pano_pane_g6

0x14df,	// (0x00055e29) cam6_pano_pane_g7

0x14e7,	// (0x00055e31) cam6_pano_pane_g8

0x14f0,	// (0x00055e3a) cam6_pano_pane_g9

0x0008,

0xfcaa,	// (0x000645f4) cam6_pano_pane_g

0x10b1,	// (0x000559fb) main_browser_tag_pane

0x0f5b,	// (0x000558a5) grid_navstr_albumart_pane

0x14fb,	// (0x00055e45) cell_navstr_albumart_pane_ParamLimits

0x14fb,	// (0x00055e45) cell_navstr_albumart_pane

0x1517,	// (0x00055e61) cell_navstr_albumart_pane_g1

0xdd33,	// (0x0006267d) cell_navstr_albumart_pane_g2

0xdd43,	// (0x0006268d) cell_navstr_albumart_pane_g3

0xdd3b,	// (0x00062685) cell_navstr_albumart_pane_g4

0x0003,

0xfcbd,	// (0x00064607) cell_navstr_albumart_pane_g

0xa341,	// (0x0005ec8b) bt_list_pane_ParamLimits

0xa341,	// (0x0005ec8b) bt_list_pane

0xa35a,	// (0x0005eca4) bt_list_pane_t1

0xa369,	// (0x0005ecb3) bt_list_pane_t2

0x0001,

0xfcc6,	// (0x00064610) bt_list_pane_t

0x10b1,	// (0x000559fb) main_cale_prevew_pane

0xa378,	// (0x0005ecc2) popup_cale_preview_window_ParamLimits

0xa378,	// (0x0005ecc2) popup_cale_preview_window

0x3588,	// (0x00057ed2) bg_popup_preview_window_pane_cp05_ParamLimits

0x3588,	// (0x00057ed2) bg_popup_preview_window_pane_cp05

0x151f,	// (0x00055e69) list_cale_preview_pane_ParamLimits

0x151f,	// (0x00055e69) list_cale_preview_pane

0xa395,	// (0x0005ecdf) list_double_cale_preview_pane_ParamLimits

0xa395,	// (0x0005ecdf) list_double_cale_preview_pane

0xa3a9,	// (0x0005ecf3) list_single_cale_preview_pane_ParamLimits

0xa3a9,	// (0x0005ecf3) list_single_cale_preview_pane

0xa3c1,	// (0x0005ed0b) list_single_cale_preview_pane_g1

0xa3c9,	// (0x0005ed13) list_single_cale_preview_pane_t1_ParamLimits

0xa3c9,	// (0x0005ed13) list_single_cale_preview_pane_t1

0xa3de,	// (0x0005ed28) list_double_cale_preview_pane_g1

0xa3e6,	// (0x0005ed30) list_double_cale_preview_pane_t1_ParamLimits

0xa3e6,	// (0x0005ed30) list_double_cale_preview_pane_t1

0xa3fb,	// (0x0005ed45) list_double_cale_preview_pane_t2_ParamLimits

0xa3fb,	// (0x0005ed45) list_double_cale_preview_pane_t2

0x0001,

0xfccb,	// (0x00064615) list_double_cale_preview_pane_t_ParamLimits

0xfccb,	// (0x00064615) list_double_cale_preview_pane_t

0x10b1,	// (0x000559fb) main_ezdial_pane

0x3588,	// (0x00057ed2) main_sp_fs_email_pane_ParamLimits

0x9c5f,	// (0x0005e5a9) cmail_ddmenu_btn01_pane_ParamLimits

0x9c5f,	// (0x0005e5a9) cmail_ddmenu_btn01_pane

0x9c7c,	// (0x0005e5c6) cmail_ddmenu_btn02_pane_ParamLimits

0x9c7c,	// (0x0005e5c6) cmail_ddmenu_btn02_pane

0x9c9a,	// (0x0005e5e4) cmail_ddmenu_btn03_pane_ParamLimits

0x9c9a,	// (0x0005e5e4) cmail_ddmenu_btn03_pane

0x9d3b,	// (0x0005e685) main_sp_fs_ctrlbar_pane_ParamLimits

0x9d55,	// (0x0005e69f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa00f,	// (0x0005e959) list_cmail_body_pane_ParamLimits

0x0ecf,	// (0x00055819) bg_button_pane_cp12

0x0ed8,	// (0x00055822) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0ed8,	// (0x00055822) list_single_cmail_header_detail_pane_g3

0x0187,	// (0x00054ad1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0187,	// (0x00054ad1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc49,	// (0x00064593) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc49,	// (0x00064593) list_single_cmail_header_detail_pane_t

0x01c8,	// (0x00054b12) phacti_term_pane_t2_ParamLimits

0x01c8,	// (0x00054b12) phacti_term_pane_t2

0x0001,

0xfc58,	// (0x000645a2) phacti_term_pane_t_ParamLimits

0xfc58,	// (0x000645a2) phacti_term_pane_t

0x152b,	// (0x00055e75) aid_size_list_single_double

0xa413,	// (0x0005ed5d) popup_ezdial_listscroll_window

0x1537,	// (0x00055e81) popup_number_entry_window_cp01

0xc1d7,	// (0x00060b21) bg_popup_call_pane_cp09

0x1544,	// (0x00055e8e) ezdial_list_pane

0x154c,	// (0x00055e96) scroll_pane_cp23

0xdbc7,	// (0x00062511) bg_button_pane_cp028_ParamLimits

0xdbc7,	// (0x00062511) bg_button_pane_cp028

0xa42f,	// (0x0005ed79) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa42f,	// (0x0005ed79) cmail_ddmenu_btn01_pane_g1

0xa441,	// (0x0005ed8b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa441,	// (0x0005ed8b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcd0,	// (0x0006461a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcd0,	// (0x0006461a) cmail_ddmenu_btn01_pane_g

0x1554,	// (0x00055e9e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1554,	// (0x00055e9e) cmail_ddmenu_btn01_pane_t1

0xcca8,	// (0x000615f2) bg_button_pane_cp029_ParamLimits

0xcca8,	// (0x000615f2) bg_button_pane_cp029

0xa44d,	// (0x0005ed97) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa44d,	// (0x0005ed97) cmail_ddmenu_btn02_pane_g1

0xa465,	// (0x0005edaf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa465,	// (0x0005edaf) cmail_ddmenu_btn02_pane_t1

0x35e1,	// (0x00057f2b) bg_button_pane_cp031_ParamLimits

0x35e1,	// (0x00057f2b) bg_button_pane_cp031

0xa44d,	// (0x0005ed97) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa44d,	// (0x0005ed97) cmail_ddmenu_btn03_pane_g1

0xa465,	// (0x0005edaf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa465,	// (0x0005edaf) cmail_ddmenu_btn03_pane_t1

0xbfe5,	// (0x0006092f) cell_dialer2_keypad_pane_t1_ParamLimits

0xe62c,	// (0x00062f76) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xe62c,	// (0x00062f76) cell_dialer2_keypad_pane_t1_copy1

0x955b,	// (0x0005dea5) ncimui_group_button_pane

0x3588,	// (0x00057ed2) main_sp_fs_calendar_pane_ParamLimits

0xa029,	// (0x0005e973) list_single_cmail_header_caption_pane_ParamLimits

0x01dd,	// (0x00054b27) aid_recal_txt_sm_pane

0x10b1,	// (0x000559fb) mian_recal_day_pane

0x0217,	// (0x00054b61) popup_sp_fs_cale_preview_window_ParamLimits

0x156a,	// (0x00055eb4) list_recal_day_pane

0x02fa,	// (0x00054c44) list_single_recal_day_pane_ParamLimits

0x02fa,	// (0x00054c44) list_single_recal_day_pane

0x1591,	// (0x00055edb) list_single_recal_day_pane_g1_ParamLimits

0x1591,	// (0x00055edb) list_single_recal_day_pane_g1

0x030c,	// (0x00054c56) list_single_recal_day_pane_g2_ParamLimits

0x030c,	// (0x00054c56) list_single_recal_day_pane_g2

0x0318,	// (0x00054c62) list_single_recal_day_pane_g3_ParamLimits

0x0318,	// (0x00054c62) list_single_recal_day_pane_g3

0xa489,	// (0x0005edd3) list_single_recal_day_pane_g4_ParamLimits

0xa489,	// (0x0005edd3) list_single_recal_day_pane_g4

0x0324,	// (0x00054c6e) list_single_recal_day_pane_g5_ParamLimits

0x0324,	// (0x00054c6e) list_single_recal_day_pane_g5

0x0330,	// (0x00054c7a) list_single_recal_day_pane_g6_ParamLimits

0x0330,	// (0x00054c7a) list_single_recal_day_pane_g6

0x0004,

0xfcdf,	// (0x00064629) list_single_recal_day_pane_g_ParamLimits

0xfcdf,	// (0x00064629) list_single_recal_day_pane_g

0x0344,	// (0x00054c8e) list_single_recal_day_pane_t1

0x0356,	// (0x00054ca0) list_single_recal_day_pane_t2

0x0001,

0xfcea,	// (0x00064634) list_single_recal_day_pane_t

0xa4a1,	// (0x0005edeb) ncimui_query_button_pane_ParamLimits

0xa4a1,	// (0x0005edeb) ncimui_query_button_pane

0xa4b1,	// (0x0005edfb) ncimui_query_button_pane_t1_ParamLimits

0xa4b1,	// (0x0005edfb) ncimui_query_button_pane_t1

0x159d,	// (0x00055ee7) ncimui_query_button_pane_t2_ParamLimits

0x159d,	// (0x00055ee7) ncimui_query_button_pane_t2

0x0001,

0xfcef,	// (0x00064639) ncimui_query_button_pane_t_ParamLimits

0xfcef,	// (0x00064639) ncimui_query_button_pane_t

0xa4c4,	// (0x0005ee0e) query_button_pane_ParamLimits

0xa4c4,	// (0x0005ee0e) query_button_pane

0x10b1,	// (0x000559fb) bg_button_pane_cp0028

0x15b0,	// (0x00055efa) query_button_pane_t1

0x61b5,	// (0x0005aaff) main_tport_pane_ParamLimits

0x9ef6,	// (0x0005e840) bg_popup_window_pane_cp01_ParamLimits

0x9ef6,	// (0x0005e840) bg_popup_window_pane_cp01

0x9f04,	// (0x0005e84e) heading_pane_cp08_ParamLimits

0x9f04,	// (0x0005e84e) heading_pane_cp08

0x9f12,	// (0x0005e85c) heading_pane_cp07_ParamLimits

0x9f12,	// (0x0005e85c) heading_pane_cp07

0x9fa8,	// (0x0005e8f2) cell_tport_appsw_pane_g2

0x0002,

0xfc36,	// (0x00064580) cell_tport_appsw_pane_g

0xd64f,	// (0x00061f99) input_candi_list_open_g1

0xc5dd,	// (0x00060f27) list_cale_time_pane_g6_ParamLimits

0xc5dd,	// (0x00060f27) list_cale_time_pane_g6

0x670d,	// (0x0005b057) aid_size_touch_calib_1_ParamLimits

0x670d,	// (0x0005b057) aid_size_touch_calib_1

0x6719,	// (0x0005b063) aid_size_touch_calib_2_ParamLimits

0x6719,	// (0x0005b063) aid_size_touch_calib_2

0x6727,	// (0x0005b071) aid_size_touch_calib_3_ParamLimits

0x6727,	// (0x0005b071) aid_size_touch_calib_3

0x6737,	// (0x0005b081) aid_size_touch_calib_4_ParamLimits

0x6737,	// (0x0005b081) aid_size_touch_calib_4

0x6745,	// (0x0005b08f) main_touch_calib_button_group_pane_ParamLimits

0x6745,	// (0x0005b08f) main_touch_calib_button_group_pane

0x6753,	// (0x0005b09d) main_touch_calib_pane_g1_ParamLimits

0x675f,	// (0x0005b0a9) main_touch_calib_pane_g2_ParamLimits

0x676b,	// (0x0005b0b5) main_touch_calib_pane_g3_ParamLimits

0x6777,	// (0x0005b0c1) main_touch_calib_pane_g4_ParamLimits

0xf689,	// (0x00063fd3) main_touch_calib_pane_g_ParamLimits

0x6783,	// (0x0005b0cd) main_touch_calib_pane_t1_ParamLimits

0x679a,	// (0x0005b0e4) main_touch_calib_pane_t2_ParamLimits

0x67b3,	// (0x0005b0fd) main_touch_calib_pane_t3_ParamLimits

0x67c9,	// (0x0005b113) main_touch_calib_pane_t4_ParamLimits

0x67df,	// (0x0005b129) main_touch_calib_pane_t5_ParamLimits

0xf692,	// (0x00063fdc) main_touch_calib_pane_t_ParamLimits

0xe5da,	// (0x00062f24) list_single_fp_cale_pane_g3_ParamLimits

0xe5da,	// (0x00062f24) list_single_fp_cale_pane_g3

0x6199,	// (0x0005aae3) bg_button_pane_cp012_ParamLimits

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp03_ParamLimits

0x8644,	// (0x0005cf8e) cell_vitu2_function_top_pane_g1_ParamLimits

0x6199,	// (0x0005aae3) bg_vkb2_func_pane_cp04_ParamLimits

0x94e1,	// (0x0005de2b) main_ncimui_button_group_pane_ParamLimits

0x94e1,	// (0x0005de2b) main_ncimui_button_group_pane

0x9549,	// (0x0005de93) main_ncimui_pane_t3_ParamLimits

0x9549,	// (0x0005de93) main_ncimui_pane_t3

0x0f71,	// (0x000558bb) phacti_button_group_pane

0x152b,	// (0x00055e75) aid_size_list_single_double_ParamLimits

0xa413,	// (0x0005ed5d) popup_ezdial_listscroll_window_ParamLimits

0x1537,	// (0x00055e81) popup_number_entry_window_cp01_ParamLimits

0xa4d1,	// (0x0005ee1b) phacti_button_pane_ParamLimits

0xa4d1,	// (0x0005ee1b) phacti_button_pane

0x10b1,	// (0x000559fb) bg_button_pane_cp14

0x15be,	// (0x00055f08) phacti_button_pane_t1

0xa4e2,	// (0x0005ee2c) main_touch_calib_button_pane_ParamLimits

0xa4e2,	// (0x0005ee2c) main_touch_calib_button_pane

0xc039,	// (0x00060983) bg_button_pane_cp18_ParamLimits

0xc039,	// (0x00060983) bg_button_pane_cp18

0x15cc,	// (0x00055f16) main_touch_calib_button_pane_t1_ParamLimits

0x15cc,	// (0x00055f16) main_touch_calib_button_pane_t1

0x15e2,	// (0x00055f2c) main_touch_calib_button_pane_t2_ParamLimits

0x15e2,	// (0x00055f2c) main_touch_calib_button_pane_t2

0x0001,

0xfcf4,	// (0x0006463e) main_touch_calib_button_pane_t_ParamLimits

0xfcf4,	// (0x0006463e) main_touch_calib_button_pane_t

0x10b1,	// (0x000559fb) cell_ncimui_button_pane

0x10b1,	// (0x000559fb) bg_button_pane_cp032

0x1600,	// (0x00055f4a) cell_ncimui_button_pane_t1

0x77de,	// (0x0005c128) image3_infobar_pane_ParamLimits

0x77de,	// (0x0005c128) image3_infobar_pane

0x989f,	// (0x0005e1e9) fs_bigclock_status_pane_ParamLimits

0x989f,	// (0x0005e1e9) fs_bigclock_status_pane

0x98ac,	// (0x0005e1f6) main_fs_bigclock_clock_pane_ParamLimits

0x98ac,	// (0x0005e1f6) main_fs_bigclock_clock_pane

0x98c8,	// (0x0005e212) main_fs_bigclock_indi_pane_ParamLimits

0x98c8,	// (0x0005e212) main_fs_bigclock_indi_pane

0x98f6,	// (0x0005e240) main_fs_bigclock_swipe_pane_ParamLimits

0x98f6,	// (0x0005e240) main_fs_bigclock_swipe_pane

0x10b1,	// (0x000559fb) main_fs_clock_dumped_data

0x9930,	// (0x0005e27a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9930,	// (0x0005e27a) list_single_fs_bigclock_indicator_pane_g1

0x994f,	// (0x0005e299) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x994f,	// (0x0005e299) list_single_fs_bigclock_indicator_pane_g2

0x9969,	// (0x0005e2b3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9969,	// (0x0005e2b3) list_single_fs_bigclock_indicator_pane_g3

0x9985,	// (0x0005e2cf) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9985,	// (0x0005e2cf) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb90,	// (0x000644da) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb90,	// (0x000644da) list_single_fs_bigclock_indicator_pane_g

0x99b4,	// (0x0005e2fe) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x99b4,	// (0x0005e2fe) list_single_fs_bigclock_indicator_pane_t1

0x99dc,	// (0x0005e326) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x99dc,	// (0x0005e326) list_single_fs_bigclock_indicator_pane_t2

0x9a04,	// (0x0005e34e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9a04,	// (0x0005e34e) list_single_fs_bigclock_indicator_pane_t3

0x9a2c,	// (0x0005e376) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9a2c,	// (0x0005e376) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9b,	// (0x000644e5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9b,	// (0x000644e5) list_single_fs_bigclock_indicator_pane_t

0x160e,	// (0x00055f58) image3_infobar_fav_pane_ParamLimits

0x160e,	// (0x00055f58) image3_infobar_fav_pane

0x161e,	// (0x00055f68) image3_infobar_loc_pane_ParamLimits

0x161e,	// (0x00055f68) image3_infobar_loc_pane

0x1634,	// (0x00055f7e) image3_infobar_time_pane_ParamLimits

0x1634,	// (0x00055f7e) image3_infobar_time_pane

0xbfdb,	// (0x00060925) image3_infobar_time_pane_g1

0x1644,	// (0x00055f8e) image3_infobar_time_pane_t1

0xbfdb,	// (0x00060925) image3_infobar_loc_pane_g1

0x1652,	// (0x00055f9c) image3_infobar_loc_pane_g2

0x0001,

0xfcf9,	// (0x00064643) image3_infobar_loc_pane_g

0x165a,	// (0x00055fa4) image3_infobar_loc_pane_t1

0xbfdb,	// (0x00060925) image3_infobar_fav_pane_g1

0x1668,	// (0x00055fb2) image3_infobar_fav_pane_g2

0x0001,

0xfcfe,	// (0x00064648) image3_infobar_fav_pane_g

0x1670,	// (0x00055fba) fs_bigclock_status_battery_pane

0x1679,	// (0x00055fc3) fs_bigclock_status_signal_pane

0x1682,	// (0x00055fcc) fs_bigclock_status_title_pane

0x168b,	// (0x00055fd5) fs_bigclock_status_signal_pane_g1

0x1694,	// (0x00055fde) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd03,	// (0x0006464d) fs_bigclock_status_signal_pane_g

0x169c,	// (0x00055fe6) fs_bigclock_status_battery_pane_g1

0x16a5,	// (0x00055fef) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd08,	// (0x00064652) fs_bigclock_status_battery_pane_g

0x16ad,	// (0x00055ff7) fs_bigclock_status_title_pane_t1

0xa4f2,	// (0x0005ee3c) main_fs_bigclock_clock_pane_g1

0xa4f2,	// (0x0005ee3c) main_fs_bigclock_clock_pane_g2

0xa501,	// (0x0005ee4b) main_fs_bigclock_clock_pane_g3

0xa501,	// (0x0005ee4b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0d,	// (0x00064657) main_fs_bigclock_clock_pane_g

0xa511,	// (0x0005ee5b) main_fs_bigclock_clock_pane_t1

0xa526,	// (0x0005ee70) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd16,	// (0x00064660) main_fs_bigclock_clock_pane_t

0x16bb,	// (0x00056005) list_single_fs_bigclock_indicator_pane_ParamLimits

0x16bb,	// (0x00056005) list_single_fs_bigclock_indicator_pane

0x16cc,	// (0x00056016) list_single_fs_bigclock_pane_ParamLimits

0x16cc,	// (0x00056016) list_single_fs_bigclock_pane

0x16f2,	// (0x0005603c) main_fs_bigclock_indicator_pane_t1

0x1701,	// (0x0005604b) list_single_fs_bigclock_pane_g1

0x1709,	// (0x00056053) list_single_fs_bigclock_pane_t1

0xbfdb,	// (0x00060925) main_fs_bigclock_swipe_pane_g1

0x174c,	// (0x00056096) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd27,	// (0x00064671) main_fs_bigclock_swipe_pane_g

0x1754,	// (0x0005609e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1754,	// (0x0005609e) main_fs_bigclock_swipe_pane_t1

0x5331,	// (0x00059c7b) call_type_pane_ParamLimits

0x10b1,	// (0x000559fb) main_btmg_pane

0x0262,	// (0x00054bac) list_single_cale_mrui_row_pane_g2_ParamLimits

0x0262,	// (0x00054bac) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc9a,	// (0x000645e4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc9a,	// (0x000645e4) list_single_cale_mrui_row_pane_g

0x02e8,	// (0x00054c32) list_recal_vselct_arw_lo_pane

0x1589,	// (0x00055ed3) list_recal_vselct_arw_up_pane

0x02f0,	// (0x00054c3a) list_recal_vselct_pane

0xa57d,	// (0x0005eec7) btmg_button_pane

0xa589,	// (0x0005eed3) main_btmg_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp044

0x1771,	// (0x000560bb) btmg_button_pane_t1

0xde85,	// (0x000627cf) aid_listscroll_gen

0x3588,	// (0x00057ed2) main_cntbar_detail_pane

0x0ea2,	// (0x000557ec) list_cmail_folder_pane

0x039b,	// (0x00054ce5) sp_fs_scroll_pane_cp03_ParamLimits

0xa591,	// (0x0005eedb) list_single_fs_dyc_pane_cp01_ParamLimits

0xa591,	// (0x0005eedb) list_single_fs_dyc_pane_cp01

0x177f,	// (0x000560c9) aid_size_cmail_indent

0x0368,	// (0x00054cb2) list_single_dyc_row_pane_cp01

0xa5cf,	// (0x0005ef19) cntbar_detail_list_pane_ParamLimits

0xa5cf,	// (0x0005ef19) cntbar_detail_list_pane

0xa60f,	// (0x0005ef59) main_cntbar_detail_cont_pane_ParamLimits

0xa60f,	// (0x0005ef59) main_cntbar_detail_cont_pane

0x5325,	// (0x00059c6f) scroll_pane_cp032_ParamLimits

0x5325,	// (0x00059c6f) scroll_pane_cp032

0xa61b,	// (0x0005ef65) cntbar_detail_list_event_pane_ParamLimits

0xa61b,	// (0x0005ef65) cntbar_detail_list_event_pane

0xa5dd,	// (0x0005ef27) cntbar_detail_list_shct_pane

0xc451,	// (0x00060d9b) aid_list_gen

0x1788,	// (0x000560d2) aid_scroll

0x1791,	// (0x000560db) aid_size_touch_scroll_bar

0x9a9a,	// (0x0005e3e4) aid_list_double

0xa62b,	// (0x0005ef75) aid_list_single

0xa634,	// (0x0005ef7e) aid_list_single_lg

0xa63d,	// (0x0005ef87) aid_list_z_g_a_sm

0xa645,	// (0x0005ef8f) aid_list_z_g_d

0xa64d,	// (0x0005ef97) aid_txt_z_prm

0xa65b,	// (0x0005efa5) aid_txt_z_prm_cp01

0xa669,	// (0x0005efb3) aid_txt_z_sec

0xa677,	// (0x0005efc1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa677,	// (0x0005efc1) main_cntbar_detail_cont_pane_g1

0xa684,	// (0x0005efce) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa684,	// (0x0005efce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd2c,	// (0x00064676) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd2c,	// (0x00064676) main_cntbar_detail_cont_pane_g

0x179a,	// (0x000560e4) main_cntbar_detail_cont_pane_t1

0x17a8,	// (0x000560f2) main_cntbar_detail_cont_pane_t2

0x17b6,	// (0x00056100) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd31,	// (0x0006467b) main_cntbar_detail_cont_pane_t

0xa690,	// (0x0005efda) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa690,	// (0x0005efda) cell_cntbar_detail_list_shct_pane

0x17c4,	// (0x0005610e) cntbar_detail_list_shct_pane_g1

0x17cd,	// (0x00056117) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd38,	// (0x00064682) cntbar_detail_list_shct_pane_g

0xa6a4,	// (0x0005efee) cntbar_detail_list_event_pane_g1_ParamLimits

0xa6a4,	// (0x0005efee) cntbar_detail_list_event_pane_g1

0xa6b0,	// (0x0005effa) cntbar_detail_list_event_pane_g2_ParamLimits

0xa6b0,	// (0x0005effa) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3d,	// (0x00064687) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3d,	// (0x00064687) cntbar_detail_list_event_pane_g

0xa71e,	// (0x0005f068) cntbar_detail_list_event_pane_t1_ParamLimits

0xa71e,	// (0x0005f068) cntbar_detail_list_event_pane_t1

0xa733,	// (0x0005f07d) cntbar_detail_list_event_pane_t2_ParamLimits

0xa733,	// (0x0005f07d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd4a,	// (0x00064694) cntbar_detail_list_event_pane_t_ParamLimits

0xfd4a,	// (0x00064694) cntbar_detail_list_event_pane_t

0xbfdb,	// (0x00060925) cell_cntbar_detail_list_shct_pane_g1

0x56de,	// (0x0005a028) navi_pane_mv_g3

0x3588,	// (0x00057ed2) main_cntbar_detail_pane_ParamLimits

0x10b1,	// (0x000559fb) main_notif_wgt_pane

0x7484,	// (0x0005bdce) aid_tch_main_mp4_pane_g4

0x7759,	// (0x0005c0a3) popup_slider_window_cp02

0x02de,	// (0x00054c28) list_recal_day_event_pane

0xa5af,	// (0x0005eef9) cntbar_detail_btn_pane_ParamLimits

0xa5af,	// (0x0005eef9) cntbar_detail_btn_pane

0xa5bf,	// (0x0005ef09) cntbar_detail_btn_pane_cp01_ParamLimits

0xa5bf,	// (0x0005ef09) cntbar_detail_btn_pane_cp01

0xa5dd,	// (0x0005ef27) cntbar_detail_list_shct_pane_ParamLimits

0xa5e9,	// (0x0005ef33) cntbar_detail_pane_g1_ParamLimits

0xa5e9,	// (0x0005ef33) cntbar_detail_pane_g1

0xa5f9,	// (0x0005ef43) cntbar_detail_pane_t1_ParamLimits

0xa5f9,	// (0x0005ef43) cntbar_detail_pane_t1

0xa6bc,	// (0x0005f006) cntbar_detail_list_event_pane_g3_ParamLimits

0xa6bc,	// (0x0005f006) cntbar_detail_list_event_pane_g3

0xa6d4,	// (0x0005f01e) cntbar_detail_list_event_pane_g4_ParamLimits

0xa6d4,	// (0x0005f01e) cntbar_detail_list_event_pane_g4

0xa6ec,	// (0x0005f036) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6ec,	// (0x0005f036) cntbar_detail_list_event_pane_g5

0xa704,	// (0x0005f04e) cntbar_detail_list_event_pane_g6_ParamLimits

0xa704,	// (0x0005f04e) cntbar_detail_list_event_pane_g6

0xa748,	// (0x0005f092) cntbar_detail_list_event_pane_t3_ParamLimits

0xa748,	// (0x0005f092) cntbar_detail_list_event_pane_t3

0xa75a,	// (0x0005f0a4) popup_notif_wgt_window_ParamLimits

0xa75a,	// (0x0005f0a4) popup_notif_wgt_window

0xa76a,	// (0x0005f0b4) popup_submenu_window_cp01_ParamLimits

0xa76a,	// (0x0005f0b4) popup_submenu_window_cp01

0xc1d7,	// (0x00060b21) bg_popup_window_pane_cp10

0x17d6,	// (0x00056120) listscroll_notif_wgt_pane

0x17e8,	// (0x00056132) list_notif_wgt_window

0x17f1,	// (0x0005613b) scroll_pane_cp033

0xa77a,	// (0x0005f0c4) list_notif_wgt_row_pane_ParamLimits

0xa77a,	// (0x0005f0c4) list_notif_wgt_row_pane

0x17fa,	// (0x00056144) aid_size_list_notif_wgt_del

0x1807,	// (0x00056151) list_notif_wgt_row_pane_g1

0x1813,	// (0x0005615d) list_notif_wgt_row_pane_g2

0x1822,	// (0x0005616c) list_notif_wgt_row_pane_g3

0x0002,

0xfd51,	// (0x0006469b) list_notif_wgt_row_pane_g

0x182f,	// (0x00056179) list_notif_wgt_row_pane_t1

0x1845,	// (0x0005618f) list_notif_wgt_row_pane_t2

0x1857,	// (0x000561a1) list_notif_wgt_row_pane_t3

0x0002,

0xfd58,	// (0x000646a2) list_notif_wgt_row_pane_t

0xed3a,	// (0x00063684) list_recal_day_event_pane_g1

0x1869,	// (0x000561b3) list_recal_day_event_pane_t1

0x10b1,	// (0x000559fb) bg_button_pane_cp045

0xa78e,	// (0x0005f0d8) cntbar_detail_btn_pane_t1

0xcca8,	// (0x000615f2) main_callh_pane_ParamLimits

0xcca8,	// (0x000615f2) main_callh_pane

0x10b1,	// (0x000559fb) main_coverflow0_pane

0x10b1,	// (0x000559fb) main_wgtman_pane

0x990e,	// (0x0005e258) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x990e,	// (0x0005e258) main_fs_bigclock_unlock_btn_pane

0x9fa0,	// (0x0005e8ea) bg_button_pane_cp16

0x9fb0,	// (0x0005e8fa) cell_tport_appsw_pane_g3

0xa79c,	// (0x0005f0e6) cf0_flow_pane_ParamLimits

0xa79c,	// (0x0005f0e6) cf0_flow_pane

0x1878,	// (0x000561c2) listscroll_cf0_pane

0x1883,	// (0x000561cd) main_cf0_pane_g1

0xa7ab,	// (0x0005f0f5) main_cf0_pane_t1_ParamLimits

0xa7ab,	// (0x0005f0f5) main_cf0_pane_t1

0xa7bf,	// (0x0005f109) main_cf0_pane_t2_ParamLimits

0xa7bf,	// (0x0005f109) main_cf0_pane_t2

0x0001,

0xfd64,	// (0x000646ae) main_cf0_pane_t_ParamLimits

0xfd64,	// (0x000646ae) main_cf0_pane_t

0x1895,	// (0x000561df) scroll_pane_cp11

0xa7d3,	// (0x0005f11d) cf0_flow_pane_g1

0xa7db,	// (0x0005f125) cf0_flow_pane_g2

0x0001,

0xfd69,	// (0x000646b3) cf0_flow_pane_g

0xa7e3,	// (0x0005f12d) cf0_flow_pane_t1

0x10b1,	// (0x000559fb) main_call6_pane

0x10b1,	// (0x000559fb) main_calllock_pane

0xa7f1,	// (0x0005f13b) call6_btn_grp_pane_ParamLimits

0xa7f1,	// (0x0005f13b) call6_btn_grp_pane

0xa7fe,	// (0x0005f148) call6_pane_g1_ParamLimits

0xa7fe,	// (0x0005f148) call6_pane_g1

0xa80e,	// (0x0005f158) popup_call6_1st_window_ParamLimits

0xa80e,	// (0x0005f158) popup_call6_1st_window

0xa81e,	// (0x0005f168) popup_call6_2nd_window_ParamLimits

0xa81e,	// (0x0005f168) popup_call6_2nd_window

0xa82e,	// (0x0005f178) cell_call6_btn_pane_ParamLimits

0xa82e,	// (0x0005f178) cell_call6_btn_pane

0xc1d7,	// (0x00060b21) bg_popup_call2_in_pane_cp03

0x18a0,	// (0x000561ea) popup_call6_1st_window_g1

0x18a8,	// (0x000561f2) popup_call6_1st_window_g2

0x18b0,	// (0x000561fa) popup_call6_1st_window_g3

0x0002,

0xfd6e,	// (0x000646b8) popup_call6_1st_window_g

0x18b8,	// (0x00056202) popup_call6_1st_window_t1

0x18c7,	// (0x00056211) popup_call6_1st_window_t2

0x18d7,	// (0x00056221) popup_call6_1st_window_t3

0x0002,

0xfd75,	// (0x000646bf) popup_call6_1st_window_t

0xc1d7,	// (0x00060b21) bg_popup_call2_in_pane_cp04

0x18e7,	// (0x00056231) popup_call6_2nd_window_g1

0x18ef,	// (0x00056239) popup_call6_2nd_window_g2

0x18f7,	// (0x00056241) popup_call6_2nd_window_g3

0x0002,

0xfd7c,	// (0x000646c6) popup_call6_2nd_window_g

0x18ff,	// (0x00056249) popup_call6_2nd_window_t1

0x33d6,	// (0x00057d20) bg_button_pane_cp15

0xa83f,	// (0x0005f189) cell_call6_btn_pane_g1

0xa848,	// (0x0005f192) cell_call6_btn_pane_t1

0xa857,	// (0x0005f1a1) listscroll_wgtman_pane_ParamLimits

0xa857,	// (0x0005f1a1) listscroll_wgtman_pane

0xa873,	// (0x0005f1bd) wgtman_btn_pane_ParamLimits

0xa873,	// (0x0005f1bd) wgtman_btn_pane

0xc9ce,	// (0x00061318) aid_scroll_copy1

0x1926,	// (0x00056270) list_wgtman_pane

0xa8a8,	// (0x0005f1f2) wgtman_btn_pane_g1_ParamLimits

0xa8a8,	// (0x0005f1f2) wgtman_btn_pane_g1

0xa8d0,	// (0x0005f21a) wgtman_btn_pane_t1_ParamLimits

0xa8d0,	// (0x0005f21a) wgtman_btn_pane_t1

0x1930,	// (0x0005627a) wgtman_btn_pane_t2_ParamLimits

0x1930,	// (0x0005627a) wgtman_btn_pane_t2

0x0001,

0xfd83,	// (0x000646cd) wgtman_btn_pane_t_ParamLimits

0xfd83,	// (0x000646cd) wgtman_btn_pane_t

0xa907,	// (0x0005f251) listrow_wgtman_pane_ParamLimits

0xa907,	// (0x0005f251) listrow_wgtman_pane

0xa91e,	// (0x0005f268) listrow_wgtman_pane_g1

0xa92b,	// (0x0005f275) listrow_wgtman_pane_g2

0x0001,

0xfd88,	// (0x000646d2) listrow_wgtman_pane_g

0xa949,	// (0x0005f293) listrow_wgtman_pane_t1

0xa961,	// (0x0005f2ab) listrow_wgtman_pane_t2

0x0001,

0xfd8d,	// (0x000646d7) listrow_wgtman_pane_t

0xa987,	// (0x0005f2d1) wait_bar_pane_cp09

0x1947,	// (0x00056291) main_calllock_btn_pane

0x1951,	// (0x0005629b) main_calllock_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp17

0x190e,	// (0x00056258) main_calllock_btn_pane_g1

0x195d,	// (0x000562a7) main_calllock_btn_pane_t1

0x10b1,	// (0x000559fb) main_dialer3_pane

0x10b1,	// (0x000559fb) main_fmrd2_pane

0xbfdb,	// (0x00060925) main_fs_bigclock_unlock_btn_pane_g1

0xa9a1,	// (0x0005f2eb) main_fs_bigclock_unlock_btn_pane_t1

0xa9af,	// (0x0005f2f9) area_fmrd2_info_pane_ParamLimits

0xa9af,	// (0x0005f2f9) area_fmrd2_info_pane

0xa9bb,	// (0x0005f305) area_fmrd2_visual_pane_ParamLimits

0xa9bb,	// (0x0005f305) area_fmrd2_visual_pane

0xa9c9,	// (0x0005f313) fmrd2_indi_pane_ParamLimits

0xa9c9,	// (0x0005f313) fmrd2_indi_pane

0xa9d6,	// (0x0005f320) area_fmrd2_visual_pane_g1

0xa9de,	// (0x0005f328) area_fmrd2_visual_pane_t1

0xa9ee,	// (0x0005f338) area_fmrd2_visual_pane_t2

0xa9fe,	// (0x0005f348) area_fmrd2_visual_pane_t3

0x0002,

0xfd97,	// (0x000646e1) area_fmrd2_visual_pane_t

0xaa0e,	// (0x0005f358) area_fmrd2_info_pane_g1

0xaa16,	// (0x0005f360) area_fmrd2_info_pane_t1

0xaa26,	// (0x0005f370) area_fmrd2_info_pane_t2

0xaa36,	// (0x0005f380) area_fmrd2_info_pane_t3

0xaa46,	// (0x0005f390) area_fmrd2_info_pane_t4

0x0003,

0xfd9e,	// (0x000646e8) area_fmrd2_info_pane_t

0xaa56,	// (0x0005f3a0) fmrd2_indi_pane_t1

0xaa66,	// (0x0005f3b0) fmrd2_indi_pane_t2

0xaa76,	// (0x0005f3c0) fmrd2_indi_pane_t3

0x0002,

0xfda7,	// (0x000646f1) fmrd2_indi_pane_t

0x9996,	// (0x0005e2e0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9996,	// (0x0005e2e0) list_single_fs_bigclock_indicator_pane_g5

0x9a4b,	// (0x0005e395) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9a4b,	// (0x0005e395) list_single_fs_bigclock_indicator_pane_t5

0xa184,	// (0x0005eace) aid_cell_bcale_month_pane_ParamLimits

0xa184,	// (0x0005eace) aid_cell_bcale_month_pane

0xa1a2,	// (0x0005eaec) bcale_month_pane_ParamLimits

0xa1a2,	// (0x0005eaec) bcale_month_pane

0xa1c0,	// (0x0005eb0a) bcale_preview_pane_ParamLimits

0xa1c0,	// (0x0005eb0a) bcale_preview_pane

0x1709,	// (0x00056053) list_single_fs_bigclock_pane_t1_ParamLimits

0x1728,	// (0x00056072) list_single_fs_bigclock_pane_t2_ParamLimits

0x1728,	// (0x00056072) list_single_fs_bigclock_pane_t2

0x0001,

0xfd22,	// (0x0006466c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd22,	// (0x0006466c) list_single_fs_bigclock_pane_t

0xa999,	// (0x0005f2e3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd92,	// (0x000646dc) main_fs_bigclock_unlock_btn_pane_g

0xaa86,	// (0x0005f3d0) aid_dia3_key_size_ParamLimits

0xaa86,	// (0x0005f3d0) aid_dia3_key_size

0xaa92,	// (0x0005f3dc) aid_dia3_listrow_size_ParamLimits

0xaa92,	// (0x0005f3dc) aid_dia3_listrow_size

0xaaa2,	// (0x0005f3ec) dia3_keypad_fun_pane_ParamLimits

0xaaa2,	// (0x0005f3ec) dia3_keypad_fun_pane

0xaab2,	// (0x0005f3fc) dia3_keypad_num_pane_ParamLimits

0xaab2,	// (0x0005f3fc) dia3_keypad_num_pane

0xaac2,	// (0x0005f40c) dia3_listscroll_pane_ParamLimits

0xaac2,	// (0x0005f40c) dia3_listscroll_pane

0xaad0,	// (0x0005f41a) dia3_numentry_pane_ParamLimits

0xaad0,	// (0x0005f41a) dia3_numentry_pane

0x196c,	// (0x000562b6) dia3_list_pane

0xaade,	// (0x0005f428) scroll_pane_cp12

0x10b1,	// (0x000559fb) bg_dia3_numentry_pane

0xaae9,	// (0x0005f433) dia3_numentry_pane_t1

0xaaf8,	// (0x0005f442) cell_dia3_key_num_pane

0xab00,	// (0x0005f44a) cell_dia3_key0_fun_pane_ParamLimits

0xab00,	// (0x0005f44a) cell_dia3_key0_fun_pane

0xab0d,	// (0x0005f457) cell_dia3_key1_fun_pane_ParamLimits

0xab0d,	// (0x0005f457) cell_dia3_key1_fun_pane

0xab1a,	// (0x0005f464) dia3_listrow_pane

0x0a14,	// (0x0005535e) bg_dia3_numentry_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp21

0xab27,	// (0x0005f471) cell_dia3_key_num_pane_t1

0xab35,	// (0x0005f47f) cell_dia3_key_num_pane_t2

0xab44,	// (0x0005f48e) cell_dia3_key_num_pane_t3

0xab53,	// (0x0005f49d) cell_dia3_key_num_pane_t4

0x0003,

0xfdae,	// (0x000646f8) cell_dia3_key_num_pane_t

0x10b1,	// (0x000559fb) bg_button_pane_cp19

0xab62,	// (0x0005f4ac) cell_dia3_key0_fun_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp20

0xab6a,	// (0x0005f4b4) cell_dia3_key1_fun_pane_g1

0xab72,	// (0x0005f4bc) area_left_week_number_pane

0xab85,	// (0x0005f4cf) area_top_day_name_pane

0xab93,	// (0x0005f4dd) frame_month_view_pane

0x1977,	// (0x000562c1) grid_month_view_pane

0xaba8,	// (0x0005f4f2) cell_top_day_name_pane_ParamLimits

0xaba8,	// (0x0005f4f2) cell_top_day_name_pane

0xabc4,	// (0x0005f50e) cell_area_left_week_number_pane_ParamLimits

0xabc4,	// (0x0005f50e) cell_area_left_week_number_pane

0xabe5,	// (0x0005f52f) cell_month_view_pane_ParamLimits

0xabe5,	// (0x0005f52f) cell_month_view_pane

0x1985,	// (0x000562cf) frm_month_g1

0xac11,	// (0x0005f55b) frm_month_g2

0xac22,	// (0x0005f56c) frm_month_g3

0xac33,	// (0x0005f57d) frm_month_g4

0xac44,	// (0x0005f58e) frm_month_g5

0xac55,	// (0x0005f59f) frm_month_g6

0xac68,	// (0x0005f5b2) frm_month_g7

0x1992,	// (0x000562dc) frm_month_g8

0xac7b,	// (0x0005f5c5) frm_month_g9

0xac88,	// (0x0005f5d2) frm_month_g10

0xac95,	// (0x0005f5df) frm_month_g11

0xaca2,	// (0x0005f5ec) frm_month_g12

0xacaf,	// (0x0005f5f9) frm_month_g13

0xacbe,	// (0x0005f608) frm_month_g14

0xaccd,	// (0x0005f617) frm_month_g15

0xacdc,	// (0x0005f626) frm_month_g16

0x000f,

0xfdb7,	// (0x00064701) frm_month_g

0x199f,	// (0x000562e9) cell_top_day_name_pane_t1

0xaceb,	// (0x0005f635) cell_area_left_week_number_pane_g1

0xacfa,	// (0x0005f644) cell_area_left_week_number_pane_t1

0x35ef,	// (0x00057f39) cell_month_view_pane_g1

0xad10,	// (0x0005f65a) cell_month_view_pane_t1

0x10b1,	// (0x000559fb) main_fps_pane

0x0dc2,	// (0x0005570c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0dc2,	// (0x0005570c) cmail_ddmenu_btn02_pane_cp1

0x0dde,	// (0x00055728) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0dde,	// (0x00055728) cmail_ddmenu_btn02_pane_cp2

0xa459,	// (0x0005eda3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa459,	// (0x0005eda3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd5,	// (0x0006461f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd5,	// (0x0006461f) cmail_ddmenu_btn02_pane_g

0xa477,	// (0x0005edc1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa477,	// (0x0005edc1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcda,	// (0x00064624) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcda,	// (0x00064624) cmail_ddmenu_btn02_pane_t

0xad26,	// (0x0005f670) fps_text_pane_ParamLimits

0xad26,	// (0x0005f670) fps_text_pane

0xad33,	// (0x0005f67d) main_fps_pane_g1_ParamLimits

0xad33,	// (0x0005f67d) main_fps_pane_g1

0xad3f,	// (0x0005f689) wait_bar_pane_cp010_ParamLimits

0xad3f,	// (0x0005f689) wait_bar_pane_cp010

0xad4b,	// (0x0005f695) fps_text_pane_t1_ParamLimits

0xad4b,	// (0x0005f695) fps_text_pane_t1

0x7b76,	// (0x0005c4c0) cam4_image_uncrop_pane_g1

0x7b7f,	// (0x0005c4c9) cam4_image_uncrop_pane_g2

0x7b88,	// (0x0005c4d2) cam4_image_uncrop_pane_g3

0x7b91,	// (0x0005c4db) cam4_image_uncrop_pane_g4

0x0003,

0xf81b,	// (0x00064165) cam4_image_uncrop_pane_g

0xab1a,	// (0x0005f464) dia3_listrow_pane_ParamLimits

0x10b1,	// (0x000559fb) main_phob2_pane

0x9f5d,	// (0x0005e8a7) cell_tport_appsw_pane_cp02_ParamLimits

0x9f5d,	// (0x0005e8a7) cell_tport_appsw_pane_cp02

0x9f6c,	// (0x0005e8b6) cell_tport_appsw_pane_cp03_ParamLimits

0x9f6c,	// (0x0005e8b6) cell_tport_appsw_pane_cp03

0x10b1,	// (0x000559fb) phob2_contact_card_pane

0x10b1,	// (0x000559fb) phob2_listscroll_pane

0x19b2,	// (0x000562fc) phob2_list_pane

0x19ba,	// (0x00056304) scroll_pane_cp034

0xad64,	// (0x0005f6ae) phob2_cc_data_pane_ParamLimits

0xad64,	// (0x0005f6ae) phob2_cc_data_pane

0xad7b,	// (0x0005f6c5) phob2_cc_listscroll_pane_ParamLimits

0xad7b,	// (0x0005f6c5) phob2_cc_listscroll_pane

0xad97,	// (0x0005f6e1) list_double_large_graphic_phob2_pane_ParamLimits

0xad97,	// (0x0005f6e1) list_double_large_graphic_phob2_pane

0xadab,	// (0x0005f6f5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xadab,	// (0x0005f6f5) list_double_large_graphic_phob2_pane_g1

0xadb8,	// (0x0005f702) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xadb8,	// (0x0005f702) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd8,	// (0x00064722) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd8,	// (0x00064722) list_double_large_graphic_phob2_pane_g

0xadde,	// (0x0005f728) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xadde,	// (0x0005f728) list_double_large_graphic_phob2_pane_t1

0xadf3,	// (0x0005f73d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xadf3,	// (0x0005f73d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde1,	// (0x0006472b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde1,	// (0x0006472b) list_double_large_graphic_phob2_pane_t

0x10b1,	// (0x000559fb) list_highlight_pane_cp024

0xae08,	// (0x0005f752) phob2_cc_button_pane

0xae12,	// (0x0005f75c) phob2_cc_data_pane_g1_ParamLimits

0xae12,	// (0x0005f75c) phob2_cc_data_pane_g1

0xae25,	// (0x0005f76f) phob2_cc_data_pane_g2_ParamLimits

0xae25,	// (0x0005f76f) phob2_cc_data_pane_g2

0x0001,

0xfde6,	// (0x00064730) phob2_cc_data_pane_g_ParamLimits

0xfde6,	// (0x00064730) phob2_cc_data_pane_g

0xae39,	// (0x0005f783) phob2_cc_data_pane_t1_ParamLimits

0xae39,	// (0x0005f783) phob2_cc_data_pane_t1

0xae5a,	// (0x0005f7a4) phob2_cc_data_pane_t2_ParamLimits

0xae5a,	// (0x0005f7a4) phob2_cc_data_pane_t2

0xae7b,	// (0x0005f7c5) phob2_cc_data_pane_t3_ParamLimits

0xae7b,	// (0x0005f7c5) phob2_cc_data_pane_t3

0x0002,

0xfdeb,	// (0x00064735) phob2_cc_data_pane_t_ParamLimits

0xfdeb,	// (0x00064735) phob2_cc_data_pane_t

0x19c2,	// (0x0005630c) phob2_cc_list_pane_ParamLimits

0x19c2,	// (0x0005630c) phob2_cc_list_pane

0x03a7,	// (0x00054cf1) scroll_pane_cp035_ParamLimits

0x03a7,	// (0x00054cf1) scroll_pane_cp035

0x3588,	// (0x00057ed2) bg_button_pane_cp033

0xae9c,	// (0x0005f7e6) phob2_cc_button_pane_g1

0xaea8,	// (0x0005f7f2) phob2_cc_button_pane_t1

0xaebd,	// (0x0005f807) phob2_cc_button_pane_t2

0x0001,

0xfdf2,	// (0x0006473c) phob2_cc_button_pane_t

0xaecf,	// (0x0005f819) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xaecf,	// (0x0005f819) list_double_large_graphic_phob2_cc_pane

0xaf1c,	// (0x0005f866) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xaf1c,	// (0x0005f866) list_double_large_graphic_phob2_cc_pane_g1

0xaf2d,	// (0x0005f877) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaf2d,	// (0x0005f877) list_double_large_graphic_phob2_cc_pane_g2

0xaf3c,	// (0x0005f886) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xaf3c,	// (0x0005f886) list_double_large_graphic_phob2_cc_pane_g3

0xaf4b,	// (0x0005f895) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xaf4b,	// (0x0005f895) list_double_large_graphic_phob2_cc_pane_g4

0xaf5c,	// (0x0005f8a6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xaf5c,	// (0x0005f8a6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf7,	// (0x00064741) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf7,	// (0x00064741) list_double_large_graphic_phob2_cc_pane_g

0xaf6b,	// (0x0005f8b5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xaf6b,	// (0x0005f8b5) list_double_large_graphic_phob2_cc_pane_t1

0xaf94,	// (0x0005f8de) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xaf94,	// (0x0005f8de) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe02,	// (0x0006474c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe02,	// (0x0006474c) list_double_large_graphic_phob2_cc_pane_t

0x19ce,	// (0x00056318) list_highlight_pane_cp025_ParamLimits

0x19ce,	// (0x00056318) list_highlight_pane_cp025

0x3588,	// (0x00057ed2) bg_button_pane_cp033_ParamLimits

0xae9c,	// (0x0005f7e6) phob2_cc_button_pane_g1_ParamLimits

0xaea8,	// (0x0005f7f2) phob2_cc_button_pane_t1_ParamLimits

0xaebd,	// (0x0005f807) phob2_cc_button_pane_t2_ParamLimits

0xfdf2,	// (0x0006473c) phob2_cc_button_pane_t_ParamLimits

0x33ca,	// (0x00057d14) popup_wgtman_window

0xec01,	// (0x0006354b) scroll_pane_cp038

0xa890,	// (0x0005f1da) wgtman_btn_pane_cp_01_ParamLimits

0xa890,	// (0x0005f1da) wgtman_btn_pane_cp_01

0x19dc,	// (0x00056326) wgtman_content_pane

0x19e5,	// (0x0005632f) wgtman_heading_pane

0x10b1,	// (0x000559fb) bg_heading_pane_cp02

0x19ee,	// (0x00056338) wgtman_heading_pane_g1

0x19f6,	// (0x00056340) wgtman_heading_pane_t1

0x1a04,	// (0x0005634e) scroll_pane_cp036

0x1a0c,	// (0x00056356) wgtman_list_pane

0x145c,	// (0x00055da6) wgtman_list_pane_t1_ParamLimits

0x145c,	// (0x00055da6) wgtman_list_pane_t1

0x7ad3,	// (0x0005c41d) cam4_grid_pane

0x880a,	// (0x0005d154) bg_button_pane_cp015_ParamLimits

0x881f,	// (0x0005d169) bg_button_pane_cp016_ParamLimits

0x882b,	// (0x0005d175) bg_button_pane_cp017_ParamLimits

0x8884,	// (0x0005d1ce) popup_vitu2_query_window_g3_ParamLimits

0x8884,	// (0x0005d1ce) popup_vitu2_query_window_g3

0x8925,	// (0x0005d26f) popup_vitu2_query_window_t6_ParamLimits

0x8925,	// (0x0005d26f) popup_vitu2_query_window_t6

0x8950,	// (0x0005d29a) popup_vitu2_query_window_t7_ParamLimits

0x8950,	// (0x0005d29a) popup_vitu2_query_window_t7

0x1448,	// (0x00055d92) cam4_grid_pane_g1

0x1451,	// (0x00055d9b) cam4_grid_pane_g2

0x1a14,	// (0x0005635e) cam4_grid_pane_g3

0x1a1d,	// (0x00056367) cam4_grid_pane_g4

0x0003,

0xfe07,	// (0x00064751) cam4_grid_pane_g

0x4190,	// (0x00058ada) aid_placing_vt_slider_lsc_ParamLimits

0x44c3,	// (0x00058e0d) vidtel_button_pane_ParamLimits

0x44c3,	// (0x00058e0d) vidtel_button_pane

0x10b1,	// (0x000559fb) bg_button_pane_cp034

0x1a28,	// (0x00056372) vidtel_button_pane_g1

0x1a30,	// (0x0005637a) vidtel_button_pane_t1

0xed0f,	// (0x00063659) aid_size_vtel_slider_touch

0x03a7,	// (0x00054cf1) scroll_pane_cp039

0x96b8,	// (0x0005e002) ncim_query_button_pane_cp01_ParamLimits

0x96d7,	// (0x0005e021) ncimui_query_pane_g1_ParamLimits

0x3588,	// (0x00057ed2) input_focus_pane_cp012_ParamLimits

0x0a52,	// (0x0005539c) ncim_query_entry_pane_t1_ParamLimits

0x03a7,	// (0x00054cf1) scroll_pane_cp039_ParamLimits

0x5650,	// (0x00059f9a) navi_pane_bcale_mc_g1

0x5658,	// (0x00059fa2) navi_pane_bcale_mc_t1

0x0e14,	// (0x0005575e) main_sp_fs_email_pane_g1

0x0e20,	// (0x0005576a) main_sp_fs_email_pane_g2

0x0001,

0xfc05,	// (0x0006454f) main_sp_fs_email_pane_g

0x1096,	// (0x000559e0) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1096,	// (0x000559e0) list_single_cale_mrui_row_pane_g3

0xa497,	// (0x0005ede1) list_single_recal_day_pane_g5_event_pane

0x033c,	// (0x00054c86) list_single_recal_day_pane_g7

0x1a46,	// (0x00056390) list_recal_day_event_pane_cp01

0x1a4f,	// (0x00056399) list_recal_vselct_arw_lo_pane_cp01

0x1a57,	// (0x000563a1) list_recal_vselct_arw_up_pane_cp01

0x1a5f,	// (0x000563a9) list_recal_vselct_pane_cp01

0xed3a,	// (0x00063684) list_recal_day_event_pane_cp01_g1

0x0371,	// (0x00054cbb) list_recal_day_event_pane_cp01_t1

0x0344,	// (0x00054c8e) list_single_recal_day_pane_t1_ParamLimits

0x0356,	// (0x00054ca0) list_single_recal_day_pane_t2_ParamLimits

0xfcea,	// (0x00064634) list_single_recal_day_pane_t_ParamLimits

0x3566,	// (0x00057eb0) bg_notes_pane_ParamLimits

0xc017,	// (0x00060961) list_notes_pane_ParamLimits

0x36ad,	// (0x00057ff7) scroll_pane_cp06_ParamLimits

0xc039,	// (0x00060983) main_notes_pane_ParamLimits

0x3588,	// (0x00057ed2) main_welc_pane

0xafdf,	// (0x0005f929) main_welc_body_pane_ParamLimits

0xafdf,	// (0x0005f929) main_welc_body_pane

0xaffa,	// (0x0005f944) main_welc_opti_pane_ParamLimits

0xaffa,	// (0x0005f944) main_welc_opti_pane

0xb061,	// (0x0005f9ab) main_welc_pane_t1_ParamLimits

0xb061,	// (0x0005f9ab) main_welc_pane_t1

0xb207,	// (0x0005fb51) main_welc_body_row_pane_ParamLimits

0xb207,	// (0x0005fb51) main_welc_body_row_pane

0x35e1,	// (0x00057f2b) main_welc_opti_row_pane_ParamLimits

0x35e1,	// (0x00057f2b) main_welc_opti_row_pane

0x1a79,	// (0x000563c3) main_welc_opti_row_pane_g1

0xb221,	// (0x0005fb6b) main_welc_opti_row_pane_t1

0x1a81,	// (0x000563cb) main_welc_body_row_pane_t1

0x17e0,	// (0x0005612a) popup_notif_wgt_heading_pane

0x17fa,	// (0x00056144) aid_size_list_notif_wgt_del_ParamLimits

0x1807,	// (0x00056151) list_notif_wgt_row_pane_g1_ParamLimits

0x1813,	// (0x0005615d) list_notif_wgt_row_pane_g2_ParamLimits

0x1822,	// (0x0005616c) list_notif_wgt_row_pane_g3_ParamLimits

0xfd51,	// (0x0006469b) list_notif_wgt_row_pane_g_ParamLimits

0x182f,	// (0x00056179) list_notif_wgt_row_pane_t1_ParamLimits

0x1845,	// (0x0005618f) list_notif_wgt_row_pane_t2_ParamLimits

0x1857,	// (0x000561a1) list_notif_wgt_row_pane_t3_ParamLimits

0xfd58,	// (0x000646a2) list_notif_wgt_row_pane_t_ParamLimits

0xa91e,	// (0x0005f268) listrow_wgtman_pane_g1_ParamLimits

0xa92b,	// (0x0005f275) listrow_wgtman_pane_g2_ParamLimits

0xfd88,	// (0x000646d2) listrow_wgtman_pane_g_ParamLimits

0xa949,	// (0x0005f293) listrow_wgtman_pane_t1_ParamLimits

0xa961,	// (0x0005f2ab) listrow_wgtman_pane_t2_ParamLimits

0xfd8d,	// (0x000646d7) listrow_wgtman_pane_t_ParamLimits

0xa987,	// (0x0005f2d1) wait_bar_pane_cp09_ParamLimits

0x10b1,	// (0x000559fb) bg_popup_heading_pane_cp02

0x1a90,	// (0x000563da) popup_notif_wgt_heading_pane_g1

0x1a98,	// (0x000563e2) popup_notif_wgt_heading_pane_t1

0x10b1,	// (0x000559fb) main_vids_pane

0x10b1,	// (0x000559fb) vids_listscroll_pane

0xb230,	// (0x0005fb7a) scroll_pane_cp040

0x10b1,	// (0x000559fb) vids_list_pane

0xb23b,	// (0x0005fb85) vids_list_double_pane_ParamLimits

0xb23b,	// (0x0005fb85) vids_list_double_pane

0xb24f,	// (0x0005fb99) vids_list_double_pane_g1

0xb258,	// (0x0005fba2) vids_list_double_pane_t1

0xb268,	// (0x0005fbb2) vids_list_double_pane_t2

0x0001,

0xfe26,	// (0x00064770) vids_list_double_pane_t

0x6199,	// (0x0005aae3) main_ncimui_pane_ParamLimits

0x94f9,	// (0x0005de43) main_ncimui_pane_g1_ParamLimits

0x9507,	// (0x0005de51) main_ncimui_pane_g2_ParamLimits

0x9507,	// (0x0005de51) main_ncimui_pane_g2

0x0001,

0xfb06,	// (0x00064450) main_ncimui_pane_g_ParamLimits

0xfb06,	// (0x00064450) main_ncimui_pane_g

0xb015,	// (0x0005f95f) main_welc_pane_g1_ParamLimits

0xb015,	// (0x0005f95f) main_welc_pane_g1

0xb021,	// (0x0005f96b) main_welc_pane_g2_ParamLimits

0xb021,	// (0x0005f96b) main_welc_pane_g2

0x0003,

0xfe10,	// (0x0006475a) main_welc_pane_g_ParamLimits

0xfe10,	// (0x0006475a) main_welc_pane_g

0x3566,	// (0x00057eb0) listscroll_mce_pane_ParamLimits

0x571a,	// (0x0005a064) wait_bar_pane_cp10

0xde8d,	// (0x000627d7) main_cale_day_pane_ParamLimits

0xde8d,	// (0x000627d7) main_cale_week_pane_ParamLimits

0x3566,	// (0x00057eb0) main_messa_pane_ParamLimits

0x6f4e,	// (0x0005b898) main_clock2_btn_pane_ParamLimits

0x6f4e,	// (0x0005b898) main_clock2_btn_pane

0xe671,	// (0x00062fbb) main_clock2_btn_pane_cp01_ParamLimits

0xe671,	// (0x00062fbb) main_clock2_btn_pane_cp01

0x1067,	// (0x000559b1) list_cale_mrui_pane_ParamLimits

0x188d,	// (0x000561d7) main_cf0_pane_g2

0x0001,

0xfd5f,	// (0x000646a9) main_cf0_pane_g

0xab72,	// (0x0005f4bc) area_left_week_number_pane_ParamLimits

0xab85,	// (0x0005f4cf) area_top_day_name_pane_ParamLimits

0xab93,	// (0x0005f4dd) frame_month_view_pane_ParamLimits

0x1977,	// (0x000562c1) grid_month_view_pane_ParamLimits

0x1985,	// (0x000562cf) frm_month_g1_ParamLimits

0xac11,	// (0x0005f55b) frm_month_g2_ParamLimits

0xac22,	// (0x0005f56c) frm_month_g3_ParamLimits

0xac33,	// (0x0005f57d) frm_month_g4_ParamLimits

0xac44,	// (0x0005f58e) frm_month_g5_ParamLimits

0xac55,	// (0x0005f59f) frm_month_g6_ParamLimits

0xac68,	// (0x0005f5b2) frm_month_g7_ParamLimits

0x1992,	// (0x000562dc) frm_month_g8_ParamLimits

0xac7b,	// (0x0005f5c5) frm_month_g9_ParamLimits

0xac88,	// (0x0005f5d2) frm_month_g10_ParamLimits

0xac95,	// (0x0005f5df) frm_month_g11_ParamLimits

0xaca2,	// (0x0005f5ec) frm_month_g12_ParamLimits

0xacaf,	// (0x0005f5f9) frm_month_g13_ParamLimits

0xacbe,	// (0x0005f608) frm_month_g14_ParamLimits

0xaccd,	// (0x0005f617) frm_month_g15_ParamLimits

0xacdc,	// (0x0005f626) frm_month_g16_ParamLimits

0xfdb7,	// (0x00064701) frm_month_g_ParamLimits

0x199f,	// (0x000562e9) cell_top_day_name_pane_t1_ParamLimits

0xaceb,	// (0x0005f635) cell_area_left_week_number_pane_g1_ParamLimits

0xacfa,	// (0x0005f644) cell_area_left_week_number_pane_t1_ParamLimits

0x35ef,	// (0x00057f39) cell_month_view_pane_g1_ParamLimits

0xad10,	// (0x0005f65a) cell_month_view_pane_t1_ParamLimits

0x355e,	// (0x00057ea8) main_clock2_btn_pane_g1

0x1aa6,	// (0x000563f0) main_clock2_btn_pane_t1

0x3588,	// (0x00057ed2) listscroll_cmail_pane_ParamLimits

0x0e14,	// (0x0005575e) main_sp_fs_email_pane_g1_ParamLimits

0x0e20,	// (0x0005576a) main_sp_fs_email_pane_g2_ParamLimits

0xfc05,	// (0x0006454f) main_sp_fs_email_pane_g_ParamLimits

0x156a,	// (0x00055eb4) list_recal_day_pane_ParamLimits

0x157b,	// (0x00055ec5) mian_recal_day_pane_t1

0x9e43,	// (0x0005e78d) list_single_dyc_row_text_pane_t4_ParamLimits

0x9e43,	// (0x0005e78d) list_single_dyc_row_text_pane_t4

0x9e80,	// (0x0005e7ca) list_single_dyc_row_text_pane_t5_ParamLimits

0x9e80,	// (0x0005e7ca) list_single_dyc_row_text_pane_t5

0x011a,	// (0x00054a64) list_single_dyc_row_text_pane_t6_ParamLimits

0x011a,	// (0x00054a64) list_single_dyc_row_text_pane_t6

0x5279,	// (0x00059bc3) aid_mgn_list_cale_time_pane

0x6199,	// (0x0005aae3) main_gallery2_pane_ParamLimits

0xe685,	// (0x00062fcf) main_clock2_pane_cp01_t1

0xe693,	// (0x00062fdd) main_clock2_pane_cp01_t3

0x0001,

0xf6fc,	// (0x00064046) main_clock2_pane_cp01_t

0x3ba9,	// (0x000584f3) cale_week_scroll_pane_g16_ParamLimits

0x3ba9,	// (0x000584f3) cale_week_scroll_pane_g16

0xc1d7,	// (0x00060b21) vorec_slider_pane

0x1a30,	// (0x0005637a) vidtel_button_pane_t1_ParamLimits

0xa4f2,	// (0x0005ee3c) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa4f2,	// (0x0005ee3c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa501,	// (0x0005ee4b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa501,	// (0x0005ee4b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0d,	// (0x00064657) main_fs_bigclock_clock_pane_g_ParamLimits

0xa511,	// (0x0005ee5b) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa526,	// (0x0005ee70) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd16,	// (0x00064660) main_fs_bigclock_clock_pane_t_ParamLimits

0x6898,	// (0x0005b1e2) main_mup3_lyrics_pane_ParamLimits

0x6898,	// (0x0005b1e2) main_mup3_lyrics_pane

0xb29d,	// (0x0005fbe7) main_mup3_lyrics_pane_t1_ParamLimits

0xb29d,	// (0x0005fbe7) main_mup3_lyrics_pane_t1

0x746e,	// (0x0005bdb8) aid_main_mp4_pane_t1_area

0x7478,	// (0x0005bdc2) aid_main_mp4_pane_t2_area

0x757f,	// (0x0005bec9) main_mp4_pane_g7_ParamLimits

0x757f,	// (0x0005bec9) main_mp4_pane_g7

0x758b,	// (0x0005bed5) main_mp4_pane_g8_ParamLimits

0x758b,	// (0x0005bed5) main_mp4_pane_g8

0x798b,	// (0x0005c2d5) aid_call6_pane_g1_size

0xaefb,	// (0x0005f845) list_double_large_graphic_phob2_other_pane_ParamLimits

0xaefb,	// (0x0005f845) list_double_large_graphic_phob2_other_pane

0xb2c4,	// (0x0005fc0e) list_double_large_graphic_phob2_other_pane_g1

0x10b1,	// (0x000559fb) list_highlight_pane_cp026

0x3588,	// (0x00057ed2) main_welc_pane_ParamLimits

0x9cca,	// (0x0005e614) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9cca,	// (0x0005e614) main_sp_fs_ctrlbar_pane_g3

0x9ce4,	// (0x0005e62e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9ce4,	// (0x0005e62e) main_sp_fs_ctrlbar_pane_g4

0x9d16,	// (0x0005e660) toolbar2_fixed_button_pane_cp01

0x9d21,	// (0x0005e66b) toolbar2_fixed_button_pane_cp02

0x9d2e,	// (0x0005e678) toolbar2_fixed_button_pane_cp03

0xafcf,	// (0x0005f919) list_welc_entry_pane_ParamLimits

0xafcf,	// (0x0005f919) list_welc_entry_pane

0xb02f,	// (0x0005f979) main_welc_pane_g3_ParamLimits

0xb02f,	// (0x0005f979) main_welc_pane_g3

0xb07f,	// (0x0005f9c9) main_welc_pane_t2_ParamLimits

0xb07f,	// (0x0005f9c9) main_welc_pane_t2

0xb093,	// (0x0005f9dd) main_welc_pane_t3_ParamLimits

0xb093,	// (0x0005f9dd) main_welc_pane_t3

0x0005,

0xfe19,	// (0x00064763) main_welc_pane_t_ParamLimits

0xfe19,	// (0x00064763) main_welc_pane_t

0xb18f,	// (0x0005fad9) welc_button_pane_ParamLimits

0xb18f,	// (0x0005fad9) welc_button_pane

0xb1f9,	// (0x0005fb43) welc_service_logo_pane_ParamLimits

0xb1f9,	// (0x0005fb43) welc_service_logo_pane

0xb2cc,	// (0x0005fc16) list_single_welc_entry_pane_ParamLimits

0xb2cc,	// (0x0005fc16) list_single_welc_entry_pane

0xb2dd,	// (0x0005fc27) list_single_welc_entry_pane_g1

0xb2e5,	// (0x0005fc2f) list_single_welc_entry_pane_t1

0xb2f3,	// (0x0005fc3d) list_single_welc_entry_pane_t2

0x0001,

0xfe2b,	// (0x00064775) list_single_welc_entry_pane_t

0x10b1,	// (0x000559fb) bg_button_pane_cp035

0x1ab4,	// (0x000563fe) welc_button_pane_t1

0xb301,	// (0x0005fc4b) welc_service_logo_pane_g1

0xb30a,	// (0x0005fc54) welc_service_logo_pane_g2

0x0001,

0xfe30,	// (0x0006477a) welc_service_logo_pane_g

0x33d6,	// (0x00057d20) main_int_radio_pane

0x08f0,	// (0x0005523a) list_single_fs_dyc_pane_g1

0xadc4,	// (0x0005f70e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xadc4,	// (0x0005f70e) list_double_large_graphic_phob2_pane_g3

0xadd0,	// (0x0005f71a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xadd0,	// (0x0005f71a) list_double_large_graphic_phob2_pane_g4

0xb313,	// (0x0005fc5d) main_int_radio1_pane_ParamLimits

0xb313,	// (0x0005fc5d) main_int_radio1_pane

0x1ac2,	// (0x0005640c) find_pane_cp02

0xb329,	// (0x0005fc73) input_focus_pane_cp12_ParamLimits

0xb329,	// (0x0005fc73) input_focus_pane_cp12

0xb335,	// (0x0005fc7f) input_focus_pane_cp13_ParamLimits

0xb335,	// (0x0005fc7f) input_focus_pane_cp13

0xb34d,	// (0x0005fc97) input_focus_pane_cp14_ParamLimits

0xb34d,	// (0x0005fc97) input_focus_pane_cp14

0x1acb,	// (0x00056415) int_radio1_listscroll_pane

0xb365,	// (0x0005fcaf) main_int_radio1_pane_g1_ParamLimits

0xb365,	// (0x0005fcaf) main_int_radio1_pane_g1

0xb371,	// (0x0005fcbb) main_int_radio1_pane_t1_ParamLimits

0xb371,	// (0x0005fcbb) main_int_radio1_pane_t1

0xb383,	// (0x0005fccd) main_int_radio1_pane_t2_ParamLimits

0xb383,	// (0x0005fccd) main_int_radio1_pane_t2

0xb397,	// (0x0005fce1) main_int_radio1_pane_t3_ParamLimits

0xb397,	// (0x0005fce1) main_int_radio1_pane_t3

0xb3ab,	// (0x0005fcf5) main_int_radio1_pane_t4_ParamLimits

0xb3ab,	// (0x0005fcf5) main_int_radio1_pane_t4

0x1ad5,	// (0x0005641f) main_int_radio1_pane_t5_ParamLimits

0x1ad5,	// (0x0005641f) main_int_radio1_pane_t5

0xb3c2,	// (0x0005fd0c) main_int_radio1_pane_t6_ParamLimits

0xb3c2,	// (0x0005fd0c) main_int_radio1_pane_t6

0xb3d4,	// (0x0005fd1e) main_int_radio1_pane_t7_ParamLimits

0xb3d4,	// (0x0005fd1e) main_int_radio1_pane_t7

0xb3e6,	// (0x0005fd30) main_int_radio1_pane_t8_ParamLimits

0xb3e6,	// (0x0005fd30) main_int_radio1_pane_t8

0xb3f8,	// (0x0005fd42) main_int_radio1_pane_t9_ParamLimits

0xb3f8,	// (0x0005fd42) main_int_radio1_pane_t9

0xb40a,	// (0x0005fd54) main_int_radio1_pane_t10_ParamLimits

0xb40a,	// (0x0005fd54) main_int_radio1_pane_t10

0xb43b,	// (0x0005fd85) main_int_radio1_pane_t11_ParamLimits

0xb43b,	// (0x0005fd85) main_int_radio1_pane_t11

0xb46c,	// (0x0005fdb6) main_int_radio1_pane_t12_ParamLimits

0xb46c,	// (0x0005fdb6) main_int_radio1_pane_t12

0x000b,

0xfe35,	// (0x0006477f) main_int_radio1_pane_t_ParamLimits

0xfe35,	// (0x0006477f) main_int_radio1_pane_t

0x19b2,	// (0x000562fc) int_radio_list_pane

0x19ba,	// (0x00056304) scroll_pane_cp037

0x1ae7,	// (0x00056431) list_double_large_graphic_int_radio_pane_ParamLimits

0x1ae7,	// (0x00056431) list_double_large_graphic_int_radio_pane

0x1afb,	// (0x00056445) list_double_large_graphic_int_radio_pane_g1

0x037f,	// (0x00054cc9) list_double_large_graphic_int_radio_pane_t1

0x038d,	// (0x00054cd7) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4e,	// (0x00064798) list_double_large_graphic_int_radio_pane_t

0x10b1,	// (0x000559fb) list_highlight_pane_cp027

0x1a69,	// (0x000563b3) main_button_pane_4

0xb03b,	// (0x0005f985) main_welc_pane_g4_ParamLimits

0xb03b,	// (0x0005f985) main_welc_pane_g4

0xb0a5,	// (0x0005f9ef) main_welc_pane_t4_ParamLimits

0xb0a5,	// (0x0005f9ef) main_welc_pane_t4

0xb0b7,	// (0x0005fa01) main_welc_pane_t5_ParamLimits

0xb0b7,	// (0x0005fa01) main_welc_pane_t5

0xb0e9,	// (0x0005fa33) main_welc_pane_t6_ParamLimits

0xb0e9,	// (0x0005fa33) main_welc_pane_t6

0xb19d,	// (0x0005fae7) welc_button_pane_2_ParamLimits

0xb19d,	// (0x0005fae7) welc_button_pane_2

0xb1bb,	// (0x0005fb05) welc_button_pane_3_ParamLimits

0xb1bb,	// (0x0005fb05) welc_button_pane_3

0x1a71,	// (0x000563bb) welc_button_pane_4

0xb1db,	// (0x0005fb25) welc_button_pane_5_ParamLimits

0xb1db,	// (0x0005fb25) welc_button_pane_5

0x31df,	// (0x00057b29) main_popup_welc_pane

0x1b1c,	// (0x00056466) main_welc_sk_g3

0x1b26,	// (0x00056470) main_welc_sk_g4

0x1b30,	// (0x0005647a) main_welc_sk_t3

0x1b40,	// (0x0005648a) main_welc_sk_t4

0x1b50,	// (0x0005649a) popup_welc_pane_t4

0x1b5e,	// (0x000564a8) popup_welc_pane_t5

0x1b6c,	// (0x000564b6) popup_welc_pane_t6

0x33d6,	// (0x00057d20) main_acti_pane

0x10b1,	// (0x000559fb) main_sso_pane

0xb483,	// (0x0005fdcd) sso_body_pane_ParamLimits

0xb483,	// (0x0005fdcd) sso_body_pane

0xb492,	// (0x0005fddc) sso_logo_pane_ParamLimits

0xb492,	// (0x0005fddc) sso_logo_pane

0xb4c1,	// (0x0005fe0b) sso_sk_pane_ParamLimits

0xb4c1,	// (0x0005fe0b) sso_sk_pane

0x1bae,	// (0x000564f8) main_sso_logo_pane_g1

0xb4ce,	// (0x0005fe18) sso_sk_pane_t1_ParamLimits

0xb4ce,	// (0x0005fe18) sso_sk_pane_t1

0xb4e2,	// (0x0005fe2c) sso_sk_pane_t2_ParamLimits

0xb4e2,	// (0x0005fe2c) sso_sk_pane_t2

0x0001,

0xfe53,	// (0x0006479d) sso_sk_pane_t_ParamLimits

0xfe53,	// (0x0006479d) sso_sk_pane_t

0x1bb9,	// (0x00056503) aid_sso_gap

0x1bc2,	// (0x0005650c) aid_sso_txt1

0x1bcc,	// (0x00056516) aid_sso_txt2

0x1bd6,	// (0x00056520) aid_sso_txt3

0x0002,

0xfe58,	// (0x000647a2) aid_sso_txt

0x1be0,	// (0x0005652a) aid_sso_widget

0xb53f,	// (0x0005fe89) sso_btn_pane_ParamLimits

0xb53f,	// (0x0005fe89) sso_btn_pane

0xb5b3,	// (0x0005fefd) sso_option_pane_ParamLimits

0xb5b3,	// (0x0005fefd) sso_option_pane

0xb665,	// (0x0005ffaf) sso_query_pane_ParamLimits

0xb665,	// (0x0005ffaf) sso_query_pane

0xb6b5,	// (0x0005ffff) sso_query_pane_cp01_ParamLimits

0xb6b5,	// (0x0005ffff) sso_query_pane_cp01

0xb70d,	// (0x00060057) sso_t_hdr_pane_ParamLimits

0xb70d,	// (0x00060057) sso_t_hdr_pane

0xb731,	// (0x0006007b) sso_t_nml_pane_ParamLimits

0xb731,	// (0x0006007b) sso_t_nml_pane

0x1bea,	// (0x00056534) sso_t_sub_pane

0xb49f,	// (0x0005fde9) sso_popup_window_ParamLimits

0xb49f,	// (0x0005fde9) sso_popup_window

0xb4f4,	// (0x0005fe3e) sso_apps_pane_ParamLimits

0xb4f4,	// (0x0005fe3e) sso_apps_pane

0xb517,	// (0x0005fe61) sso_body_pane_g1

0xb51f,	// (0x0005fe69) sso_body_pane_t1

0xb52f,	// (0x0005fe79) sso_body_pane_t2

0x0001,

0xfe5f,	// (0x000647a9) sso_body_pane_t

0xb583,	// (0x0005fecd) sso_btn_pane_cp01_ParamLimits

0xb583,	// (0x0005fecd) sso_btn_pane_cp01

0xb637,	// (0x0005ff81) sso_prog_pane_ParamLimits

0xb637,	// (0x0005ff81) sso_prog_pane

0xb781,	// (0x000600cb) sso_t_hdr_pane_t1_ParamLimits

0xb781,	// (0x000600cb) sso_t_hdr_pane_t1

0x1bff,	// (0x00056549) input_focus_pane_cp10_ParamLimits

0x1bff,	// (0x00056549) input_focus_pane_cp10

0x1c13,	// (0x0005655d) sso_query_pane_t1_ParamLimits

0x1c13,	// (0x0005655d) sso_query_pane_t1

0x1c26,	// (0x00056570) sso_query_pane_t2_ParamLimits

0x1c26,	// (0x00056570) sso_query_pane_t2

0x1c40,	// (0x0005658a) sso_query_pane_t3_ParamLimits

0x1c40,	// (0x0005658a) sso_query_pane_t3

0x1c6a,	// (0x000565b4) sso_query_pane_t4_ParamLimits

0x1c6a,	// (0x000565b4) sso_query_pane_t4

0x0003,

0xfe64,	// (0x000647ae) sso_query_pane_t_ParamLimits

0xfe64,	// (0x000647ae) sso_query_pane_t

0x1b13,	// (0x0005645d) bg_button_pane_cp22

0x1b04,	// (0x0005644e) sso_btn_pane_t1

0xb79a,	// (0x000600e4) sso_t_nml_pane_t1_ParamLimits

0xb79a,	// (0x000600e4) sso_t_nml_pane_t1

0x1c8e,	// (0x000565d8) sso_option_row_pane_ParamLimits

0x1c8e,	// (0x000565d8) sso_option_row_pane

0x1c9b,	// (0x000565e5) sso_t_sub_pane_t1_ParamLimits

0x1c9b,	// (0x000565e5) sso_t_sub_pane_t1

0x3588,	// (0x00057ed2) bg_popup_window_pane_cp11_ParamLimits

0x3588,	// (0x00057ed2) bg_popup_window_pane_cp11

0x1cb8,	// (0x00056602) popup_sk_window_cp01_ParamLimits

0x1cb8,	// (0x00056602) popup_sk_window_cp01

0x1cc5,	// (0x0005660f) sso_popup_body_pane_ParamLimits

0x1cc5,	// (0x0005660f) sso_popup_body_pane

0x1cd2,	// (0x0005661c) scroll_pane_cp21_ParamLimits

0x1cd2,	// (0x0005661c) scroll_pane_cp21

0x1cdf,	// (0x00056629) sso_popup_body_t_pane_ParamLimits

0x1cdf,	// (0x00056629) sso_popup_body_t_pane

0x1cec,	// (0x00056636) sso_popup_body_t_hdr_pane_ParamLimits

0x1cec,	// (0x00056636) sso_popup_body_t_hdr_pane

0xb7b7,	// (0x00060101) sso_popup_body_t_nml_pane_ParamLimits

0xb7b7,	// (0x00060101) sso_popup_body_t_nml_pane

0xb7d5,	// (0x0006011f) sso_popup_body_t_sub_pane_ParamLimits

0xb7d5,	// (0x0006011f) sso_popup_body_t_sub_pane

0x1cfe,	// (0x00056648) sso_popup_body_t_hdr_pane_t1

0xb7f8,	// (0x00060142) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb7f8,	// (0x00060142) sso_popup_body_t_nml_pane_t1

0x1d0e,	// (0x00056658) sso_popup_body_t_sub_pane_t1_ParamLimits

0x1d0e,	// (0x00056658) sso_popup_body_t_sub_pane_t1

0xbfdb,	// (0x00060925) sso_prog_pane_g1

0xb842,	// (0x0006018c) sso_apps_pane_comp1_ParamLimits

0xb842,	// (0x0006018c) sso_apps_pane_comp1

0x1d33,	// (0x0005667d) sso_apps_pane_comp1_g1

0x1d3b,	// (0x00056685) sso_apps_pane_comp1_t1

0x1d57,	// (0x000566a1) sso_option_row_pane_g1

0x1d5f,	// (0x000566a9) sso_option_row_pane_t1

0x0eaa,	// (0x000557f4) list_cmail_pane_ParamLimits

0x10b1,	// (0x000559fb) main_call7_pane

0xafbd,	// (0x0005f907) bg_welc_area_ParamLimits

0xafbd,	// (0x0005f907) bg_welc_area

0xb11f,	// (0x0005fa69) sso_t_hdr_pane_a_t1_ParamLimits

0xb11f,	// (0x0005fa69) sso_t_hdr_pane_a_t1

0xb133,	// (0x0005fa7d) sso_t_nml_pane_a_t1_ParamLimits

0xb133,	// (0x0005fa7d) sso_t_nml_pane_a_t1

0xb15d,	// (0x0005faa7) sso_t_sub_pane_a_t1_ParamLimits

0xb15d,	// (0x0005faa7) sso_t_sub_pane_a_t1

0xb1eb,	// (0x0005fb35) welc_button_pane_cp01_ParamLimits

0xb1eb,	// (0x0005fb35) welc_button_pane_cp01

0x1b04,	// (0x0005644e) sso_btn_pane_t1_copy1

0x1b13,	// (0x0005645d) welc_button_pane_2_comp1

0x1b7c,	// (0x000564c6) sso_t_hdr_pane_p_t1

0x1b8c,	// (0x000564d6) sso_t_nml_pane_p_t1

0x1b9c,	// (0x000564e6) sso_t_sub_pane_p_t1

0x10b1,	// (0x000559fb) main_att_pane

0x10b1,	// (0x000559fb) main_vod_pane

0x1bea,	// (0x00056534) sso_t_sub_pane_ParamLimits

0x1d49,	// (0x00056693) input_focus_pane_cp10_t1

0x1d5f,	// (0x000566a9) sso_option_row_pane_t1_ParamLimits

0xb857,	// (0x000601a1) main_att_body_pane_ParamLimits

0xb857,	// (0x000601a1) main_att_body_pane

0xb86b,	// (0x000601b5) att_btn_emg_pane_ParamLimits

0xb86b,	// (0x000601b5) att_btn_emg_pane

0xb883,	// (0x000601cd) att_btn_pane_ParamLimits

0xb883,	// (0x000601cd) att_btn_pane

0xb8ef,	// (0x00060239) att_btn_pane_cp01_ParamLimits

0xb8ef,	// (0x00060239) att_btn_pane_cp01

0xb909,	// (0x00060253) att_li_srv_pane_ParamLimits

0xb909,	// (0x00060253) att_li_srv_pane

0xb91b,	// (0x00060265) att_opt_pane_ParamLimits

0xb91b,	// (0x00060265) att_opt_pane

0xb95f,	// (0x000602a9) att_query_pane_ParamLimits

0xb95f,	// (0x000602a9) att_query_pane

0xb9cf,	// (0x00060319) att_query_pane_cp01_ParamLimits

0xb9cf,	// (0x00060319) att_query_pane_cp01

0xba13,	// (0x0006035d) att_t_hdr_pane_ParamLimits

0xba13,	// (0x0006035d) att_t_hdr_pane

0xba7b,	// (0x000603c5) att_t_nml_pane_ParamLimits

0xba7b,	// (0x000603c5) att_t_nml_pane

0xbaed,	// (0x00060437) att_t_nml_pane_cp01_ParamLimits

0xbaed,	// (0x00060437) att_t_nml_pane_cp01

0xbb11,	// (0x0006045b) att_t_nmlb_pane_ParamLimits

0xbb11,	// (0x0006045b) att_t_nmlb_pane

0xbb75,	// (0x000604bf) att_term_pane_ParamLimits

0xbb75,	// (0x000604bf) att_term_pane

0xbbb9,	// (0x00060503) main_att_body_pane_g1_ParamLimits

0xbbb9,	// (0x00060503) main_att_body_pane_g1

0x1d78,	// (0x000566c2) att_t_hdr_pane_t1_ParamLimits

0x1d78,	// (0x000566c2) att_t_hdr_pane_t1

0x1d91,	// (0x000566db) att_t_nml_pane_t1_ParamLimits

0x1d91,	// (0x000566db) att_t_nml_pane_t1

0x1fc1,	// (0x0005690b) att_btn_pane_t1

0x1b13,	// (0x0005645d) bg_button_pane_cp23

0xbbe5,	// (0x0006052f) att_li_srv_row_pane_ParamLimits

0xbbe5,	// (0x0006052f) att_li_srv_row_pane

0x1fd1,	// (0x0005691b) att_t_nmlb_pane_t1_ParamLimits

0x1fd1,	// (0x0005691b) att_t_nmlb_pane_t1

0x1fef,	// (0x00056939) att_query_pane_t1

0x1ffe,	// (0x00056948) att_query_pane_t2

0x200d,	// (0x00056957) att_query_pane_t3

0x0002,

0xfe6d,	// (0x000647b7) att_query_pane_t

0x201c,	// (0x00056966) input_focus_pane_cp11

0x2025,	// (0x0005696f) att_term_pane_t1_ParamLimits

0x2025,	// (0x0005696f) att_term_pane_t1

0x10b1,	// (0x000559fb) att_opt_row_pane

0x1d57,	// (0x000566a1) att_opt_row_pane_g1

0x2042,	// (0x0005698c) att_opt_row_pane_t1_ParamLimits

0x2042,	// (0x0005698c) att_opt_row_pane_t1

0xbbf5,	// (0x0006053f) att_li_srv_row_pane_g1

0xbbfd,	// (0x00060547) att_li_srv_row_pane_t1_ParamLimits

0xbbfd,	// (0x00060547) att_li_srv_row_pane_t1

0xbc12,	// (0x0006055c) att_li_srv_row_pane_t2_ParamLimits

0xbc12,	// (0x0006055c) att_li_srv_row_pane_t2

0x0001,

0xfe74,	// (0x000647be) att_li_srv_row_pane_t_ParamLimits

0xfe74,	// (0x000647be) att_li_srv_row_pane_t

0x205b,	// (0x000569a5) att_btn_close_pane_g1

0x10b1,	// (0x000559fb) bg_button_pane_cp24

0xbc27,	// (0x00060571) main_vod_body_pane_ParamLimits

0xbc27,	// (0x00060571) main_vod_body_pane

0xbc35,	// (0x0006057f) main_vod_body_pane_g1_ParamLimits

0xbc35,	// (0x0006057f) main_vod_body_pane_g1

0xbc65,	// (0x000605af) scroll_pane_cp24_ParamLimits

0xbc65,	// (0x000605af) scroll_pane_cp24

0xbcad,	// (0x000605f7) vod_btn_pane_ParamLimits

0xbcad,	// (0x000605f7) vod_btn_pane

0xbceb,	// (0x00060635) vod_det_pane_ParamLimits

0xbceb,	// (0x00060635) vod_det_pane

0xbd17,	// (0x00060661) vod_logo_g1_ParamLimits

0xbd17,	// (0x00060661) vod_logo_g1

0xbd61,	// (0x000606ab) vod_opt_pane_ParamLimits

0xbd61,	// (0x000606ab) vod_opt_pane

0xbd91,	// (0x000606db) vod_opt_pane_cp01_ParamLimits

0xbd91,	// (0x000606db) vod_opt_pane_cp01

0xbdb9,	// (0x00060703) vod_query_pane_ParamLimits

0xbdb9,	// (0x00060703) vod_query_pane

0xbde1,	// (0x0006072b) vod_query_pane_cp01_ParamLimits

0xbde1,	// (0x0006072b) vod_query_pane_cp01

0xbded,	// (0x00060737) vod_t_nml_pane_ParamLimits

0xbded,	// (0x00060737) vod_t_nml_pane

0xbe9b,	// (0x000607e5) vod_t_nml_pane_cp01_ParamLimits

0xbe9b,	// (0x000607e5) vod_t_nml_pane_cp01

0xbed3,	// (0x0006081d) vod_t_sub_pane_ParamLimits

0xbed3,	// (0x0006081d) vod_t_sub_pane

0xbeff,	// (0x00060849) vod_t_sub_pane_cp01_ParamLimits

0xbeff,	// (0x00060849) vod_t_sub_pane_cp01

0x201c,	// (0x00056966) vod_query_field_pane

0x2063,	// (0x000569ad) vod_query_pane_t1

0x1b13,	// (0x0005645d) bg_button_pane_cp25

0x2072,	// (0x000569bc) sso_btn_pane_t1_copy2

0xbf27,	// (0x00060871) vod_t_nml_pane_t1_ParamLimits

0xbf27,	// (0x00060871) vod_t_nml_pane_t1

0x2081,	// (0x000569cb) vod_opt_row_pane_ParamLimits

0x2081,	// (0x000569cb) vod_opt_row_pane

0x2093,	// (0x000569dd) vod_t_sub_pane_t1_ParamLimits

0x2093,	// (0x000569dd) vod_t_sub_pane_t1

0x20ac,	// (0x000569f6) vod_det_cell_pane_ParamLimits

0x20ac,	// (0x000569f6) vod_det_cell_pane

0x10b1,	// (0x000559fb) input_focus_pane_cp15

0x20bd,	// (0x00056a07) vod_query_field_pane_t1

0x20cb,	// (0x00056a15) vod_opt_row_pane_g1_ParamLimits

0x20cb,	// (0x00056a15) vod_opt_row_pane_g1

0x20d7,	// (0x00056a21) vod_opt_row_pane_t1_ParamLimits

0x20d7,	// (0x00056a21) vod_opt_row_pane_t1

0x20f6,	// (0x00056a40) vod_det_cell_field_pane

0x20ff,	// (0x00056a49) vod_det_cell_pane_g1

0x2107,	// (0x00056a51) vod_det_cell_pane_t1

0x10b1,	// (0x000559fb) input_focus_pane_cp16

0x2116,	// (0x00056a60) vod_det_cell_field_pane_t1

0xbf62,	// (0x000608ac) call7_btn_grp_pane_ParamLimits

0xbf62,	// (0x000608ac) call7_btn_grp_pane

0x35e1,	// (0x00057f2b) call7_bubble_pane_ParamLimits

0x35e1,	// (0x00057f2b) call7_bubble_pane

0xbf6f,	// (0x000608b9) cell_call7_btn_pane_ParamLimits

0xbf6f,	// (0x000608b9) cell_call7_btn_pane

0xbf80,	// (0x000608ca) call7_pane_g1_ParamLimits

0xbf80,	// (0x000608ca) call7_pane_g1

0xbf8f,	// (0x000608d9) call7_windows_conf_pane_ParamLimits

0xbf8f,	// (0x000608d9) call7_windows_conf_pane

0xbfb1,	// (0x000608fb) popup_call7_1st_window_ParamLimits

0xbfb1,	// (0x000608fb) popup_call7_1st_window

0xbfbf,	// (0x00060909) popup_call7_2nd_window_ParamLimits

0xbfbf,	// (0x00060909) popup_call7_2nd_window

0xbfcd,	// (0x00060917) popup_call7_3rd_window_ParamLimits

0xbfcd,	// (0x00060917) popup_call7_3rd_window

0x10b1,	// (0x000559fb) bg_button_pane_cp26

0x190e,	// (0x00056258) cell_call7_btn_pane_g1

0x1917,	// (0x00056261) cell_call7_btn_pane_t1

0x10b1,	// (0x000559fb) bg_popup_window_pane_cp12

0x2124,	// (0x00056a6e) popup_call7_1st_window_g1

0x212c,	// (0x00056a76) popup_call7_1st_window_g2

0x2134,	// (0x00056a7e) popup_call7_1st_window_g3

0x0002,

0xfe79,	// (0x000647c3) popup_call7_1st_window_g

0x213c,	// (0x00056a86) popup_call7_1st_window_t1

0x214b,	// (0x00056a95) popup_call7_1st_window_t2

0x215b,	// (0x00056aa5) popup_call7_1st_window_t3

0x0002,

0xfe80,	// (0x000647ca) popup_call7_1st_window_t

0x10b1,	// (0x000559fb) bg_popup_window_pane_cp13

0x216b,	// (0x00056ab5) popup_call7_2nd_window_g1

0x2173,	// (0x00056abd) popup_call7_2nd_window_g2

0x217b,	// (0x00056ac5) popup_call7_2nd_window_g3

0x0002,

0xfe87,	// (0x000647d1) popup_call7_2nd_window_g

0x213c,	// (0x00056a86) popup_call7_2nd_window_t1

0x10b1,	// (0x000559fb) bg_popup_window_pane_cp14

0x2183,	// (0x00056acd) call7_list_conf_pane

0x218b,	// (0x00056ad5) call7_list_conf_row_pane_ParamLimits

0x218b,	// (0x00056ad5) call7_list_conf_row_pane

0x219e,	// (0x00056ae8) call7_list_conf_row_pane_g1

0x21a6,	// (0x00056af0) call7_list_conf_row_pane_g2

0x0001,

0xfe8e,	// (0x000647d8) call7_list_conf_row_pane_g

0x21ae,	// (0x00056af8) call7_list_conf_row_pane_t1

0x10b1,	// (0x000559fb) list_highlight_pane_cp22

0xb607,	// (0x0005ff51) sso_option_pane_cp01_ParamLimits

0xb607,	// (0x0005ff51) sso_option_pane_cp01

0x3566,	// (0x00057eb0) msg_header_pane_ParamLimits

0xcc56,	// (0x000615a0) bg_button_pane_cp01_ParamLimits

0xd657,	// (0x00061fa1) input_focus_pane_cp07_ParamLimits

0x9d66,	// (0x0005e6b0) popup_email_progress_window

0xbfdb,	// (0x00060925) popup_email_progress_window_g1

0x21bc,	// (0x00056b06) popup_email_progress_window_g2

0x0001,

0xfe93,	// (0x000647dd) popup_email_progress_window_g

0x21c4,	// (0x00056b0e) popup_email_progress_window_t1
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small

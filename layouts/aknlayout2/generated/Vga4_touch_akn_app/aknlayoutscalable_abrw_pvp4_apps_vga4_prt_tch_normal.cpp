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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00018895 };

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
0x72fc,	// (0x0001fb91) Screen

0x7308,	// (0x0001fb9d) application_window

0x7314,	// (0x0001fba9) area_bottom_pane_ParamLimits

0x7314,	// (0x0001fba9) area_bottom_pane

0x5aa9,	// (0x0001e33e) area_top_pane_ParamLimits

0x5aa9,	// (0x0001e33e) area_top_pane

0x5b0d,	// (0x0001e3a2) call_video_uplink_pane_ParamLimits

0x5b0d,	// (0x0001e3a2) call_video_uplink_pane

0x5b4a,	// (0x0001e3df) main_pane_ParamLimits

0x5b4a,	// (0x0001e3df) main_pane

0x178d,	// (0x0001a022) context_pane

0x9d53,	// (0x000225e8) navi_pane

0x9d77,	// (0x0002260c) popup_cale_events_window_ParamLimits

0x9d77,	// (0x0002260c) popup_cale_events_window

0x17a0,	// (0x0001a035) popup_mup_playback_window

0x9d8f,	// (0x00022624) signal_pane

0xe773,	// (0x00027008) main_browser_pane

0x0291,	// (0x00018b26) main_burst_pane

0x6151,	// (0x0001e9e6) main_calc_pane

0x0291,	// (0x00018b26) main_cale_day_pane

0xe773,	// (0x00027008) main_cale_month_pane

0x0291,	// (0x00018b26) main_cale_week_pane

0x0291,	// (0x00018b26) main_call_pane

0xe445,	// (0x00026cda) main_call_poc_pane

0x0291,	// (0x00018b26) main_camera_pane

0x0291,	// (0x00018b26) main_chi_dic_pane

0x0133,	// (0x000189c8) main_clock_pane

0xe445,	// (0x00026cda) main_fmradio_pane

0x0291,	// (0x00018b26) main_graph_messa_pane

0xe445,	// (0x00026cda) main_help_pane

0xe773,	// (0x00027008) main_im_pane

0xe6a0,	// (0x00026f35) main_image_pane_ParamLimits

0xe6a0,	// (0x00026f35) main_image_pane

0xe445,	// (0x00026cda) main_location2_pane

0x0291,	// (0x00018b26) main_location_pane

0xe445,	// (0x00026cda) main_messa_pane

0xe445,	// (0x00026cda) main_mp2_pane

0x0291,	// (0x00018b26) main_mp_pane

0xe445,	// (0x00026cda) main_msg_pane

0xe445,	// (0x00026cda) main_mup_eq_pane

0xe445,	// (0x00026cda) main_mup_pane

0xe773,	// (0x00027008) main_notes_pane

0xe445,	// (0x00026cda) main_pec_pane

0xe445,	// (0x00026cda) main_phob_pane

0xe445,	// (0x00026cda) main_pinb_pane

0xe445,	// (0x00026cda) main_postcard_pane

0xe445,	// (0x00026cda) main_qdial_pane

0x0291,	// (0x00018b26) main_skin_pane

0xe445,	// (0x00026cda) main_smil2_pane

0x0291,	// (0x00018b26) main_smil_pane

0x0291,	// (0x00018b26) main_video_pane

0x0291,	// (0x00018b26) main_video_tele_pane

0xe6a0,	// (0x00026f35) main_viewer_pane_ParamLimits

0xe6a0,	// (0x00026f35) main_viewer_pane

0x0291,	// (0x00018b26) main_vorec_pane

0x619f,	// (0x0001ea34) popup_blid_sat_info_window_ParamLimits

0x619f,	// (0x0001ea34) popup_blid_sat_info_window

0x61c5,	// (0x0001ea5a) popup_dyc_status_message_window_ParamLimits

0x61c5,	// (0x0001ea5a) popup_dyc_status_message_window

0x61d5,	// (0x0001ea6a) popup_grid_large_graphic_window_ParamLimits

0x61d5,	// (0x0001ea6a) popup_grid_large_graphic_window

0x626a,	// (0x0001eaff) popup_loc_request_window_ParamLimits

0x626a,	// (0x0001eaff) popup_loc_request_window

0x62c4,	// (0x0001eb59) popup_wml_address_window_ParamLimits

0x62c4,	// (0x0001eb59) popup_wml_address_window

0x9c35,	// (0x000224ca) call_muted_g1

0x98f4,	// (0x00022189) popup_call_audio_conf_window_ParamLimits

0x98f4,	// (0x00022189) popup_call_audio_conf_window

0x9c45,	// (0x000224da) popup_call_audio_first_window_ParamLimits

0x9c45,	// (0x000224da) popup_call_audio_first_window

0x9c85,	// (0x0002251a) popup_call_audio_in_window_ParamLimits

0x9c85,	// (0x0002251a) popup_call_audio_in_window

0x9ca9,	// (0x0002253e) popup_call_audio_out_window_ParamLimits

0x9ca9,	// (0x0002253e) popup_call_audio_out_window

0x9ccb,	// (0x00022560) popup_call_audio_second_window_ParamLimits

0x9ccb,	// (0x00022560) popup_call_audio_second_window

0x9cfb,	// (0x00022590) popup_call_audio_wait_window_ParamLimits

0x9cfb,	// (0x00022590) popup_call_audio_wait_window

0x9d1c,	// (0x000225b1) popup_number_entry_window_ParamLimits

0x9d1c,	// (0x000225b1) popup_number_entry_window

0xdfef,	// (0x00026884) bg_popup_call_pane_cp05_ParamLimits

0xdfef,	// (0x00026884) bg_popup_call_pane_cp05

0xe00f,	// (0x000268a4) popup_number_entry_window_t1

0xe022,	// (0x000268b7) popup_number_entry_window_t2

0xe034,	// (0x000268c9) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0002796d) popup_number_entry_window_t

0xe07b,	// (0x00026910) text_title_cp2

0xe08e,	// (0x00026923) bg_popup_call_pane_cp_ParamLimits

0xe08e,	// (0x00026923) bg_popup_call_pane_cp

0xe09c,	// (0x00026931) call_thumbnail_pane

0xe0a4,	// (0x00026939) popup_call_audio_in_window_g1_ParamLimits

0xe0a4,	// (0x00026939) popup_call_audio_in_window_g1

0xe0b0,	// (0x00026945) popup_call_audio_in_window_g2_ParamLimits

0xe0b0,	// (0x00026945) popup_call_audio_in_window_g2

0xe0bc,	// (0x00026951) popup_call_audio_in_window_g3_ParamLimits

0xe0bc,	// (0x00026951) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00027976) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00027976) popup_call_audio_in_window_g

0xe0c8,	// (0x0002695d) popup_call_audio_in_window_t1_ParamLimits

0xe0c8,	// (0x0002695d) popup_call_audio_in_window_t1

0xe0f2,	// (0x00026987) popup_call_audio_in_window_t2_ParamLimits

0xe0f2,	// (0x00026987) popup_call_audio_in_window_t2

0xe10e,	// (0x000269a3) popup_call_audio_in_window_t3_ParamLimits

0xe10e,	// (0x000269a3) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0002797d) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0002797d) popup_call_audio_in_window_t

0xe08e,	// (0x00026923) bg_popup_call_pane_cp01_ParamLimits

0xe08e,	// (0x00026923) bg_popup_call_pane_cp01

0xe09c,	// (0x00026931) call_thumbnail_pane_cp02

0xe121,	// (0x000269b6) call_type_pane_cp022

0xe129,	// (0x000269be) popup_call_audio_out_window_g1_ParamLimits

0xe129,	// (0x000269be) popup_call_audio_out_window_g1

0xe13b,	// (0x000269d0) popup_call_audio_out_window_g2_ParamLimits

0xe13b,	// (0x000269d0) popup_call_audio_out_window_g2

0xe147,	// (0x000269dc) popup_call_audio_out_window_g3_ParamLimits

0xe147,	// (0x000269dc) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00027984) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00027984) popup_call_audio_out_window_g

0xe159,	// (0x000269ee) popup_call_audio_out_window_t1_ParamLimits

0xe159,	// (0x000269ee) popup_call_audio_out_window_t1

0xe171,	// (0x00026a06) popup_call_audio_out_window_t2_ParamLimits

0xe171,	// (0x00026a06) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0002798b) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0002798b) popup_call_audio_out_window_t

0xe186,	// (0x00026a1b) bg_popup_call_pane_ParamLimits

0xe186,	// (0x00026a1b) bg_popup_call_pane

0x7355,	// (0x0001fbea) call_thumbnail_pane_cp_ParamLimits

0x7355,	// (0x0001fbea) call_thumbnail_pane_cp

0xe20a,	// (0x00026a9f) call_type_pane_cp01_ParamLimits

0xe20a,	// (0x00026a9f) call_type_pane_cp01

0xe24e,	// (0x00026ae3) popup_call_audio_first_window_g1_ParamLimits

0xe24e,	// (0x00026ae3) popup_call_audio_first_window_g1

0xe29a,	// (0x00026b2f) popup_call_audio_first_window_g2_ParamLimits

0xe29a,	// (0x00026b2f) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00027990) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00027990) popup_call_audio_first_window_g

0xe2de,	// (0x00026b73) popup_call_audio_first_window_t1_ParamLimits

0xe2de,	// (0x00026b73) popup_call_audio_first_window_t1

0xe38a,	// (0x00026c1f) popup_call_audio_first_window_t4_ParamLimits

0xe38a,	// (0x00026c1f) popup_call_audio_first_window_t4

0xe416,	// (0x00026cab) popup_call_audio_first_window_t5_ParamLimits

0xe416,	// (0x00026cab) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00027995) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00027995) popup_call_audio_first_window_t

0xe445,	// (0x00026cda) bg_popup_call_pane_cp02

0xe44f,	// (0x00026ce4) call_type_pane_cp023

0xe457,	// (0x00026cec) popup_call_audio_wait_window_g1

0xe45f,	// (0x00026cf4) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0002799c) popup_call_audio_wait_window_g

0xe467,	// (0x00026cfc) popup_call_audio_wait_window_t3

0xe475,	// (0x00026d0a) bg_popup_call_pane_cp03_ParamLimits

0xe475,	// (0x00026d0a) bg_popup_call_pane_cp03

0xe4d5,	// (0x00026d6a) call_thumbnail_pane_cp011_ParamLimits

0xe4d5,	// (0x00026d6a) call_thumbnail_pane_cp011

0xe4e1,	// (0x00026d76) call_type_pane_cp034_ParamLimits

0xe4e1,	// (0x00026d76) call_type_pane_cp034

0xe51d,	// (0x00026db2) popup_call_audio_second_window_g1_ParamLimits

0xe51d,	// (0x00026db2) popup_call_audio_second_window_g1

0xe559,	// (0x00026dee) popup_call_audio_second_window_g2_ParamLimits

0xe559,	// (0x00026dee) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x000279a1) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x000279a1) popup_call_audio_second_window_g

0xe595,	// (0x00026e2a) popup_call_audio_second_window_t1_ParamLimits

0xe595,	// (0x00026e2a) popup_call_audio_second_window_t1

0xe616,	// (0x00026eab) popup_call_audio_second_window_t2_ParamLimits

0xe616,	// (0x00026eab) popup_call_audio_second_window_t2

0xe64c,	// (0x00026ee1) popup_call_audio_second_window_t3_ParamLimits

0xe64c,	// (0x00026ee1) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x000279a6) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x000279a6) popup_call_audio_second_window_t

0xe445,	// (0x00026cda) bg_popup_call_pane_cp04

0xe682,	// (0x00026f17) list_conf_pane

0xe68a,	// (0x00026f1f) popup_call_audio_conf_window_t1

0xe698,	// (0x00026f2d) call_thumbnail_pane_g1

0xe6a0,	// (0x00026f35) bg_pinb_pane_ParamLimits

0xe6a0,	// (0x00026f35) bg_pinb_pane

0xe6ae,	// (0x00026f43) find_pinb_pane

0xe6b7,	// (0x00026f4c) listscroll_pinb_pane_ParamLimits

0xe6b7,	// (0x00026f4c) listscroll_pinb_pane

0xe6c6,	// (0x00026f5b) pinb_bg_pane_g1

0x7379,	// (0x0001fc0e) pinb_bg_pane_g2

0x7385,	// (0x0001fc1a) pinb_bg_pane_g3

0x7391,	// (0x0001fc26) pinb_bg_pane_g4

0x739d,	// (0x0001fc32) pinb_bg_pane_g5

0x73a9,	// (0x0001fc3e) pinb_bg_pane_g6

0x73b4,	// (0x0001fc49) pinb_bg_pane_g7

0x73bf,	// (0x0001fc54) pinb_bg_pane_g8

0x73ca,	// (0x0001fc5f) pinb_bg_pane_g9

0x73d4,	// (0x0001fc69) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x000279ad) pinb_bg_pane_g

0x73f1,	// (0x0001fc86) grid_pinb_pane

0x73fc,	// (0x0001fc91) list_pinb_pane

0x7407,	// (0x0001fc9c) scroll_pane_cp01_ParamLimits

0x7407,	// (0x0001fc9c) scroll_pane_cp01

0xe6d0,	// (0x00026f65) find_pinb_pane_g1_ParamLimits

0xe6d0,	// (0x00026f65) find_pinb_pane_g1

0xe6e8,	// (0x00026f7d) find_pinb_pane_t1

0xe6fa,	// (0x00026f8f) find_pinb_pane_t2

0x0001,

0xf132,	// (0x000279c7) find_pinb_pane_t

0xe70f,	// (0x00026fa4) input_focus_pane_cp01_ParamLimits

0xe70f,	// (0x00026fa4) input_focus_pane_cp01

0x7419,	// (0x0001fcae) cell_pinb_pane_ParamLimits

0x7419,	// (0x0001fcae) cell_pinb_pane

0x7437,	// (0x0001fccc) cell_pinb_pane_g1_ParamLimits

0x7437,	// (0x0001fccc) cell_pinb_pane_g1

0x744c,	// (0x0001fce1) cell_pinb_pane_g2_ParamLimits

0x744c,	// (0x0001fce1) cell_pinb_pane_g2

0xe71b,	// (0x00026fb0) cell_pinb_pane_g3_ParamLimits

0xe71b,	// (0x00026fb0) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x000279cc) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x000279cc) cell_pinb_pane_g

0xe445,	// (0x00026cda) grid_highlight_pane_cp01

0x7458,	// (0x0001fced) list_pinb_item_pane_ParamLimits

0x7458,	// (0x0001fced) list_pinb_item_pane

0xe445,	// (0x00026cda) list_highlight_pane_cp02

0x7473,	// (0x0001fd08) list_pinb_item_pane_g1_ParamLimits

0x7473,	// (0x0001fd08) list_pinb_item_pane_g1

0x7480,	// (0x0001fd15) list_pinb_item_pane_g2_ParamLimits

0x7480,	// (0x0001fd15) list_pinb_item_pane_g2

0x748c,	// (0x0001fd21) list_pinb_item_pane_g3_ParamLimits

0x748c,	// (0x0001fd21) list_pinb_item_pane_g3

0x749d,	// (0x0001fd32) list_pinb_item_pane_g4_ParamLimits

0x749d,	// (0x0001fd32) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000279d3) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000279d3) list_pinb_item_pane_g

0x74a9,	// (0x0001fd3e) list_pinb_item_pane_t1_ParamLimits

0x74a9,	// (0x0001fd3e) list_pinb_item_pane_t1

0x5d33,	// (0x0001e5c8) calc_display_pane

0x5d51,	// (0x0001e5e6) calc_paper_pane

0x5d6d,	// (0x0001e602) grid_calc_pane

0xe445,	// (0x00026cda) bg_list_pane_cp01

0x74c0,	// (0x0001fd55) clock_g1

0x74c8,	// (0x0001fd5d) clock_g2

0x0001,

0xf147,	// (0x000279dc) clock_g

0x74d2,	// (0x0001fd67) clock_t1_ParamLimits

0x74d2,	// (0x0001fd67) clock_t1

0x74e7,	// (0x0001fd7c) clock_t2_ParamLimits

0x74e7,	// (0x0001fd7c) clock_t2

0x74f9,	// (0x0001fd8e) clock_t3_ParamLimits

0x74f9,	// (0x0001fd8e) clock_t3

0x750b,	// (0x0001fda0) clock_t4_ParamLimits

0x750b,	// (0x0001fda0) clock_t4

0x751d,	// (0x0001fdb2) clock_t5_ParamLimits

0x751d,	// (0x0001fdb2) clock_t5

0x7532,	// (0x0001fdc7) clock_t6_ParamLimits

0x7532,	// (0x0001fdc7) clock_t6

0x7544,	// (0x0001fdd9) clock_t7_ParamLimits

0x7544,	// (0x0001fdd9) clock_t7

0x7556,	// (0x0001fdeb) clock_t8_ParamLimits

0x7556,	// (0x0001fdeb) clock_t8

0x756c,	// (0x0001fe01) clock_t9_ParamLimits

0x756c,	// (0x0001fe01) clock_t9

0x0008,

0xf14c,	// (0x000279e1) clock_t_ParamLimits

0xf14c,	// (0x000279e1) clock_t

0xe727,	// (0x00026fbc) popup_clock_analogue_window_cp02

0xe727,	// (0x00026fbc) popup_clock_digital_window_cp01

0xe72f,	// (0x00026fc4) listscroll_help_pane

0xe445,	// (0x00026cda) phob_pre_status_pane

0xe739,	// (0x00026fce) grid_qdial_pane

0xe445,	// (0x00026cda) listscroll_mce_pane

0xe743,	// (0x00026fd8) bg_notes_pane

0xe751,	// (0x00026fe6) list_notes_pane

0x7582,	// (0x0001fe17) scroll_pane_cp06

0xe75f,	// (0x00026ff4) bg_calc_paper_pane

0x5d99,	// (0x0001e62e) list_calc_pane

0xe773,	// (0x00027008) bg_calc_display_pane

0x5db3,	// (0x0001e648) calc_display_pane_t1

0x5dc8,	// (0x0001e65d) calc_display_pane_t2

0x5ddd,	// (0x0001e672) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000279f4) calc_display_pane_t

0x5def,	// (0x0001e684) cell_calc_pane_ParamLimits

0x5def,	// (0x0001e684) cell_calc_pane

0xe77f,	// (0x00027014) bg_calc_paper_pane_g1

0xe78b,	// (0x00027020) bg_calc_paper_pane_g2

0xe797,	// (0x0002702c) bg_calc_paper_pane_g3

0xe7a3,	// (0x00027038) bg_calc_paper_pane_g4

0xe7af,	// (0x00027044) bg_calc_paper_pane_g5

0x7591,	// (0x0001fe26) bg_calc_paper_pane_g6

0x75a2,	// (0x0001fe37) bg_calc_paper_pane_g7

0x75b3,	// (0x0001fe48) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000279fb) bg_calc_paper_pane_g

0x75c6,	// (0x0001fe5b) calc_bg_paper_pane_g9

0x75d9,	// (0x0001fe6e) list_calc_item_pane_ParamLimits

0x75d9,	// (0x0001fe6e) list_calc_item_pane

0xe7bb,	// (0x00027050) list_calc_item_pane_g1

0x5e1e,	// (0x0001e6b3) list_calc_item_pane_t1_ParamLimits

0x5e1e,	// (0x0001e6b3) list_calc_item_pane_t1

0x5e30,	// (0x0001e6c5) list_calc_item_pane_t2_ParamLimits

0x5e30,	// (0x0001e6c5) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00027a0c) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00027a0c) list_calc_item_pane_t

0xe7c8,	// (0x0002705d) cell_calc_pane_g1

0xe7d2,	// (0x00027067) grid_highlight_pane_cp02

0xe7f4,	// (0x00027089) bg_calc_display_pane_g1

0x5e60,	// (0x0001e6f5) bg_calc_display_pane_g2

0xe7fd,	// (0x00027092) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00027a16) bg_calc_display_pane_g

0x5e6a,	// (0x0001e6ff) cell_qdial_pane_ParamLimits

0x5e6a,	// (0x0001e6ff) cell_qdial_pane

0x75fa,	// (0x0001fe8f) cell_qdial_pane_g1_ParamLimits

0x75fa,	// (0x0001fe8f) cell_qdial_pane_g1

0x7607,	// (0x0001fe9c) cell_qdial_pane_g2_ParamLimits

0x7607,	// (0x0001fe9c) cell_qdial_pane_g2

0xe806,	// (0x0002709b) cell_qdial_pane_g3_ParamLimits

0xe806,	// (0x0002709b) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00027a1d) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00027a1d) cell_qdial_pane_g

0x7625,	// (0x0001feba) cell_qdial_pane_t1_ParamLimits

0x7625,	// (0x0001feba) cell_qdial_pane_t1

0x763d,	// (0x0001fed2) cell_qdial_pane_t2_ParamLimits

0x763d,	// (0x0001fed2) cell_qdial_pane_t2

0x7650,	// (0x0001fee5) cell_qdial_pane_t3_ParamLimits

0x7650,	// (0x0001fee5) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00027a26) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00027a26) cell_qdial_pane_t

0xe445,	// (0x00026cda) grid_highlight_pane_cp04

0xe812,	// (0x000270a7) thumbnail_qdial_pane_ParamLimits

0xe812,	// (0x000270a7) thumbnail_qdial_pane

0xe86e,	// (0x00027103) list_help_pane

0xe877,	// (0x0002710c) scroll_pane_cp02

0x7663,	// (0x0001fef8) help_list_pane_t1_ParamLimits

0x7663,	// (0x0001fef8) help_list_pane_t1

0x5e80,	// (0x0001e715) bg_notes_pane_g2

0x5e88,	// (0x0001e71d) bg_notes_pane_g3

0x5e90,	// (0x0001e725) notes_bg_pane_g1

0x5e98,	// (0x0001e72d) notes_bg_pane_g4

0x5ea0,	// (0x0001e735) notes_bg_pane_g5

0x5ea8,	// (0x0001e73d) notes_bg_pane_g6

0x5eb0,	// (0x0001e745) notes_bg_pane_g7

0x5eb8,	// (0x0001e74d) notes_bg_pane_g8

0x5ec0,	// (0x0001e755) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00027a44) notes_bg_pane_g

0x768a,	// (0x0001ff1f) list_notes_text_pane_ParamLimits

0x768a,	// (0x0001ff1f) list_notes_text_pane

0xe880,	// (0x00027115) list_notes_text_pane_g1

0x76b2,	// (0x0001ff47) list_notes_text_pane_t1

0xe773,	// (0x00027008) listscroll_cale_week_pane

0x76dd,	// (0x0001ff72) bg_cale_heading_pane

0xe89a,	// (0x0002712f) bg_cale_pane_cp01

0x76f9,	// (0x0001ff8e) cale_week_corner_pane

0x770f,	// (0x0001ffa4) cale_week_day_heading_pane

0x772b,	// (0x0001ffc0) cale_week_scroll_pane_g1

0x7744,	// (0x0001ffd9) cale_week_scroll_pane_g2

0x7755,	// (0x0001ffea) cale_week_scroll_pane_g3

0x7766,	// (0x0001fffb) cale_week_scroll_pane_g4

0x7777,	// (0x0002000c) cale_week_scroll_pane_g5

0x7788,	// (0x0002001d) cale_week_scroll_pane_g6

0x779b,	// (0x00020030) cale_week_scroll_pane_g7

0x77ae,	// (0x00020043) cale_week_scroll_pane_g8

0x77c1,	// (0x00020056) cale_week_scroll_pane_g9

0x77d2,	// (0x00020067) cale_week_scroll_pane_g10

0x77e3,	// (0x00020078) cale_week_scroll_pane_g11

0x77f4,	// (0x00020089) cale_week_scroll_pane_g12

0x7805,	// (0x0002009a) cale_week_scroll_pane_g13

0x7816,	// (0x000200ab) cale_week_scroll_pane_g14

0x782f,	// (0x000200c4) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x00027a53) cale_week_scroll_pane_g

0x7848,	// (0x000200dd) cale_week_time_pane

0x785b,	// (0x000200f0) grid_cale_week_pane

0x7878,	// (0x0002010d) scroll_pane_cp08

0x7892,	// (0x00020127) cell_cale_week_pane_ParamLimits

0x7892,	// (0x00020127) cell_cale_week_pane

0x78d4,	// (0x00020169) cale_week_day_heading_pane_t1

0x7901,	// (0x00020196) cale_week_day_heading_pane_t2

0x792e,	// (0x000201c3) cale_week_day_heading_pane_t3

0x795b,	// (0x000201f0) cale_week_day_heading_pane_t4

0x7988,	// (0x0002021d) cale_week_day_heading_pane_t5

0x79b5,	// (0x0002024a) cale_week_day_heading_pane_t6

0x79e2,	// (0x00020277) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00027a72) cale_week_day_heading_pane_t

0xe8c5,	// (0x0002715a) bg_cale_side_pane

0x5ec8,	// (0x0001e75d) cale_week_time_pane_t1

0x5ee0,	// (0x0001e775) cale_week_time_pane_t2

0x5ef8,	// (0x0001e78d) cale_week_time_pane_t3

0x5f10,	// (0x0001e7a5) cale_week_time_pane_t4

0x5f28,	// (0x0001e7bd) cale_week_time_pane_t5

0x5f40,	// (0x0001e7d5) cale_week_time_pane_t6

0x5f58,	// (0x0001e7ed) cale_week_time_pane_t7

0x5f70,	// (0x0001e805) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00027a81) cale_week_time_pane_t

0x7a0f,	// (0x000202a4) cell_cale_week_pane_g2

0x7a28,	// (0x000202bd) cell_cale_week_pane_g3_ParamLimits

0x7a28,	// (0x000202bd) cell_cale_week_pane_g3

0xe8d3,	// (0x00027168) grid_highlight_pane_cp07

0xe8db,	// (0x00027170) listscroll_gms_pane

0xe8e5,	// (0x0002717a) grid_gms_pane

0xe8ee,	// (0x00027183) listscroll_gms_pane_g1

0xe8f6,	// (0x0002718b) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00027a92) listscroll_gms_pane_g

0x7a40,	// (0x000202d5) scroll_pane_cp010

0x7a4b,	// (0x000202e0) cell_gms_pane_ParamLimits

0x7a4b,	// (0x000202e0) cell_gms_pane

0x7a5e,	// (0x000202f3) cell_gms_pane_g1

0xe8fe,	// (0x00027193) cell_gms_pane_g2

0xe906,	// (0x0002719b) cell_gms_pane_g3

0xe90f,	// (0x000271a4) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00027a97) cell_gms_pane_g

0xe918,	// (0x000271ad) grid_highlight_pane_cp09

0x9bdd,	// (0x00022472) phob_pre_status_pane_g1

0x9be5,	// (0x0002247a) phob_pre_status_pane_g2

0x9bed,	// (0x00022482) phob_pre_status_pane_g3

0x9bf5,	// (0x0002248a) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00027e86) phob_pre_status_pane_g

0x9c05,	// (0x0002249a) phob_pre_status_pane_t1

0x9c15,	// (0x000224aa) phob_pre_status_pane_t2

0x9c25,	// (0x000224ba) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00027e91) phob_pre_status_pane_t

0xe445,	// (0x00026cda) bg_list_pane_cp05

0x5f94,	// (0x0001e829) grid_vorec_pane

0x5fa0,	// (0x0001e835) vorec_t1

0x5fae,	// (0x0001e843) vorec_t2

0x5fbc,	// (0x0001e851) vorec_t3

0x5fca,	// (0x0001e85f) vorec_t4

0x5fd8,	// (0x0001e86d) vorec_t5

0x5fe6,	// (0x0001e87b) vorec_t6

0x0006,

0xf20b,	// (0x00027aa0) vorec_t

0x6002,	// (0x0001e897) wait_bar_pane_cp01

0x7a66,	// (0x000202fb) cell_vorec_pane_ParamLimits

0x7a66,	// (0x000202fb) cell_vorec_pane

0xe920,	// (0x000271b5) cell_vorec_pane_g1

0xe445,	// (0x00026cda) grid_highlight_pane_cp05

0x7a89,	// (0x0002031e) cams_zoom_pane

0x7a95,	// (0x0002032a) image_vga_pane

0x7aa4,	// (0x00020339) main_camera_pane_g1

0x7ab2,	// (0x00020347) main_camera_pane_g2

0x7abe,	// (0x00020353) main_camera_pane_g3

0x7acc,	// (0x00020361) main_camera_pane_g4

0x7ada,	// (0x0002036f) main_camera_pane_g5

0x7ae8,	// (0x0002037d) main_camera_pane_g6

0x7af6,	// (0x0002038b) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00027aaf) main_camera_pane_g

0x7b04,	// (0x00020399) main_camera_pane_t1

0x7b16,	// (0x000203ab) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00027ac0) main_camera_pane_t

0x7b39,	// (0x000203ce) cams_zoom_pane_cp_ParamLimits

0x7b39,	// (0x000203ce) cams_zoom_pane_cp

0x7b5d,	// (0x000203f2) image_cif_pane_ParamLimits

0x7b5d,	// (0x000203f2) image_cif_pane

0x7b7b,	// (0x00020410) image_subqcif_pane

0x7b85,	// (0x0002041a) main_video_pane_g1_ParamLimits

0x7b85,	// (0x0002041a) main_video_pane_g1

0x7ba5,	// (0x0002043a) main_video_pane_g2_ParamLimits

0x7ba5,	// (0x0002043a) main_video_pane_g2

0x7bd5,	// (0x0002046a) main_video_pane_g3_ParamLimits

0x7bd5,	// (0x0002046a) main_video_pane_g3

0x7bfe,	// (0x00020493) main_video_pane_g4_ParamLimits

0x7bfe,	// (0x00020493) main_video_pane_g4

0x7c27,	// (0x000204bc) main_video_pane_g5_ParamLimits

0x7c27,	// (0x000204bc) main_video_pane_g5

0xe936,	// (0x000271cb) main_video_pane_g6_ParamLimits

0xe936,	// (0x000271cb) main_video_pane_g6

0x0006,

0xf230,	// (0x00027ac5) main_video_pane_g_ParamLimits

0xf230,	// (0x00027ac5) main_video_pane_g

0x7c49,	// (0x000204de) main_video_pane_t1_ParamLimits

0x7c49,	// (0x000204de) main_video_pane_t1

0xe950,	// (0x000271e5) cams_zoom_pane_g1

0xe959,	// (0x000271ee) cams_zoom_pane_g2

0xe962,	// (0x000271f7) cams_zoom_pane_g3

0xe96b,	// (0x00027200) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x00027ad4) cams_zoom_pane_g

0x7c93,	// (0x00020528) grid_cams_pane

0x7ca1,	// (0x00020536) linegrid_cams_pane

0x7cad,	// (0x00020542) cell_cams_pane_ParamLimits

0x7cad,	// (0x00020542) cell_cams_pane

0xe974,	// (0x00027209) cams_burst_image_pane

0xe97c,	// (0x00027211) cell_cams_pane_g1

0xe445,	// (0x00026cda) grid_highlight_pane_cp03

0xe7c8,	// (0x0002705d) mp_bg_pane_g1

0xe445,	// (0x00026cda) bg_list_pane_cp03

0x165f,	// (0x00019ef4) bg_mp_pane

0x1667,	// (0x00019efc) grid_mp_pane

0x166f,	// (0x00019f04) media_player_g1

0x1679,	// (0x00019f0e) media_player_t1

0x1687,	// (0x00019f1c) media_player_t2

0x1695,	// (0x00019f2a) media_player_t3

0x16a3,	// (0x00019f38) media_player_t4

0x16b1,	// (0x00019f46) media_player_t5

0x16bf,	// (0x00019f54) media_player_t6

0x16cd,	// (0x00019f62) media_player_t7

0x0006,

0xf5db,	// (0x00027e70) media_player_t

0x16db,	// (0x00019f70) wait_bar_pane_cp02

0xf5c0,	// (0x00027e55) main_usb_pane_t

0x9bd4,	// (0x00022469) cell_mp_pane

0xe7c8,	// (0x0002705d) cell_mp_pane_g1

0xe445,	// (0x00026cda) grid_highlight_pane_cp06

0xea42,	// (0x000272d7) grid_skin_colour_pane

0xea4a,	// (0x000272df) list_highlight_pane_cp03

0x7d1b,	// (0x000205b0) skin_g1

0xea52,	// (0x000272e7) skin_t1

0xea61,	// (0x000272f6) skin_t2

0x0001,

0xf274,	// (0x00027b09) skin_t

0x7d25,	// (0x000205ba) cell_skin_colour_pane_ParamLimits

0x7d25,	// (0x000205ba) cell_skin_colour_pane

0xea6f,	// (0x00027304) cell_skin_colour_pane_g1

0x7da5,	// (0x0002063a) call_video_g1_ParamLimits

0x7da5,	// (0x0002063a) call_video_g1

0x7db5,	// (0x0002064a) call_video_g2_ParamLimits

0x7db5,	// (0x0002064a) call_video_g2

0x0001,

0xf279,	// (0x00027b0e) call_video_g_ParamLimits

0xf279,	// (0x00027b0e) call_video_g

0x7e05,	// (0x0002069a) call_video_uplink_pane_cp1_ParamLimits

0x7e05,	// (0x0002069a) call_video_uplink_pane_cp1

0xea81,	// (0x00027316) call_video_uplink_pane_cp2

0x7ed3,	// (0x00020768) video_down_crop_pane_ParamLimits

0x7ed3,	// (0x00020768) video_down_crop_pane

0x7fc5,	// (0x0002085a) video_down_pane_ParamLimits

0x7fc5,	// (0x0002085a) video_down_pane

0xea89,	// (0x0002731e) video_down_subqcif_pane_ParamLimits

0xea89,	// (0x0002731e) video_down_subqcif_pane

0xeaa3,	// (0x00027338) video_down_subqcif_pane_cp_ParamLimits

0xeaa3,	// (0x00027338) video_down_subqcif_pane_cp

0xeacb,	// (0x00027360) im_reading_pane_ParamLimits

0xeacb,	// (0x00027360) im_reading_pane

0x80e2,	// (0x00020977) im_writing_pane_ParamLimits

0x80e2,	// (0x00020977) im_writing_pane

0x8100,	// (0x00020995) im_reading_pane_t1

0xeae5,	// (0x0002737a) list_im_pane

0xeaf6,	// (0x0002738b) scroll_pane_cp07

0x8142,	// (0x000209d7) im_writing_pane_t1_ParamLimits

0x8142,	// (0x000209d7) im_writing_pane_t1

0xeb0f,	// (0x000273a4) im_writing_pane_t2_ParamLimits

0xeb0f,	// (0x000273a4) im_writing_pane_t2

0x0001,

0xf283,	// (0x00027b18) im_writing_pane_t_ParamLimits

0xf283,	// (0x00027b18) im_writing_pane_t

0xe445,	// (0x00026cda) input_focus_pane_cp04

0xe445,	// (0x00026cda) input_focus_pane_cp05

0x8154,	// (0x000209e9) list_im_single_pane_ParamLimits

0x8154,	// (0x000209e9) list_im_single_pane

0x816d,	// (0x00020a02) list_single_im_pane_t1

0x9b98,	// (0x0002242d) blid_accuracy_pane

0x9ba0,	// (0x00022435) blid_compass_pane

0x9baa,	// (0x0002243f) main_location_t1

0x9bb8,	// (0x0002244d) main_location_t2

0x9bc6,	// (0x0002245b) main_location_t3

0x0002,

0xf5ea,	// (0x00027e7f) main_location_t

0xe445,	// (0x00026cda) aid_levels_location

0xe7c8,	// (0x0002705d) blid_accuracy_pane_g1

0xe7c8,	// (0x0002705d) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00027b7a) blid_accuracy_pane_g

0xeb57,	// (0x000273ec) wml_content_pane

0xeb95,	// (0x0002742a) wml_button_pane_ParamLimits

0xeb95,	// (0x0002742a) wml_button_pane

0x817c,	// (0x00020a11) wml_list_single_large_pane_ParamLimits

0x817c,	// (0x00020a11) wml_list_single_large_pane

0x819e,	// (0x00020a33) wml_list_single_medium_pane_ParamLimits

0x819e,	// (0x00020a33) wml_list_single_medium_pane

0x81c1,	// (0x00020a56) wml_list_single_small_pane_ParamLimits

0x81c1,	// (0x00020a56) wml_list_single_small_pane

0xeba9,	// (0x0002743e) wml_selection_box_pane_ParamLimits

0xeba9,	// (0x0002743e) wml_selection_box_pane

0xebbc,	// (0x00027451) wml_list_single_pane_t1

0xebcb,	// (0x00027460) wml_list_single_medium_pane_t1

0xebda,	// (0x0002746f) wml_list_single_large_pane_t1

0xebe9,	// (0x0002747e) input_focus_pane_cp02_ParamLimits

0xebe9,	// (0x0002747e) input_focus_pane_cp02

0xebfc,	// (0x00027491) wml_selection_box_pane_g1

0xec05,	// (0x0002749a) wml_selection_box_pane_t1_ParamLimits

0xec05,	// (0x0002749a) wml_selection_box_pane_t1

0xe6a0,	// (0x00026f35) bg_wml_button_pane_ParamLimits

0xe6a0,	// (0x00026f35) bg_wml_button_pane

0xec1d,	// (0x000274b2) wml_button_pane_g1

0xec25,	// (0x000274ba) wml_button_pane_t1

0xec1d,	// (0x000274b2) wml_button_bg_pane_g1

0xec35,	// (0x000274ca) wml_button_bg_pane_g2

0xec3d,	// (0x000274d2) wml_button_bg_pane_g3

0xec45,	// (0x000274da) wml_button_bg_pane_g4

0xec4d,	// (0x000274e2) wml_button_bg_pane_g5

0xec55,	// (0x000274ea) wml_button_bg_pane_g6

0xec5d,	// (0x000274f2) wml_button_bg_pane_g7

0xec65,	// (0x000274fa) wml_button_bg_pane_g8

0xec6d,	// (0x00027502) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x00027b1d) wml_button_bg_pane_g

0x81e9,	// (0x00020a7e) bg_list_pane_cp02

0xec75,	// (0x0002750a) mce_header_pane_ParamLimits

0xec75,	// (0x0002750a) mce_header_pane

0xec8b,	// (0x00027520) mce_icon_pane

0xec8b,	// (0x00027520) mce_image_pane

0xec94,	// (0x00027529) mce_text_pane_ParamLimits

0xec94,	// (0x00027529) mce_text_pane

0x81f3,	// (0x00020a88) scroll_pane_cp03

0xeb8d,	// (0x00027422) scroll_pane_cp04

0xeca7,	// (0x0002753c) scroll_pane_cp05_ParamLimits

0xeca7,	// (0x0002753c) scroll_pane_cp05

0x81fd,	// (0x00020a92) mce_header_field_pane_ParamLimits

0x81fd,	// (0x00020a92) mce_header_field_pane

0x821f,	// (0x00020ab4) mce_header_field_pane_2_ParamLimits

0x821f,	// (0x00020ab4) mce_header_field_pane_2

0x8235,	// (0x00020aca) mce_header_field_pane_3

0x823d,	// (0x00020ad2) list_single_mce_message_pane_ParamLimits

0x823d,	// (0x00020ad2) list_single_mce_message_pane

0x8256,	// (0x00020aeb) list_single_mce_smart_pane_ParamLimits

0x8256,	// (0x00020aeb) list_single_mce_smart_pane

0xecb3,	// (0x00027548) input_focus_pane_cp03

0xecbc,	// (0x00027551) list_header_data_pane

0x827a,	// (0x00020b0f) mce_header_field_pane_t1

0x828a,	// (0x00020b1f) list_single_mce_header_pane_ParamLimits

0x828a,	// (0x00020b1f) list_single_mce_header_pane

0xecc4,	// (0x00027559) list_single_mce_header_pane_t1

0xecd3,	// (0x00027568) list_single_mce_message_pane_g1

0xecdb,	// (0x00027570) list_single_mce_message_pane_t1

0x82c0,	// (0x00020b55) bg_cale_heading_pane_cp01_ParamLimits

0x82c0,	// (0x00020b55) bg_cale_heading_pane_cp01

0xece9,	// (0x0002757e) bg_cale_pane_cp02_ParamLimits

0xece9,	// (0x0002757e) bg_cale_pane_cp02

0x82f3,	// (0x00020b88) cale_month_corner_pane

0x8309,	// (0x00020b9e) cale_month_day_heading_pane_ParamLimits

0x8309,	// (0x00020b9e) cale_month_day_heading_pane

0x834c,	// (0x00020be1) cale_month_pane_g1_ParamLimits

0x834c,	// (0x00020be1) cale_month_pane_g1

0x8378,	// (0x00020c0d) cale_month_pane_g2_ParamLimits

0x8378,	// (0x00020c0d) cale_month_pane_g2

0x839b,	// (0x00020c30) cale_month_pane_g3_ParamLimits

0x839b,	// (0x00020c30) cale_month_pane_g3

0x83d7,	// (0x00020c6c) cale_month_pane_g4_ParamLimits

0x83d7,	// (0x00020c6c) cale_month_pane_g4

0x8413,	// (0x00020ca8) cale_month_pane_g5_ParamLimits

0x8413,	// (0x00020ca8) cale_month_pane_g5

0x844f,	// (0x00020ce4) cale_month_pane_g6_ParamLimits

0x844f,	// (0x00020ce4) cale_month_pane_g6

0x849b,	// (0x00020d30) cale_month_pane_g7_ParamLimits

0x849b,	// (0x00020d30) cale_month_pane_g7

0x84e7,	// (0x00020d7c) cale_month_pane_g8_ParamLimits

0x84e7,	// (0x00020d7c) cale_month_pane_g8

0x8533,	// (0x00020dc8) cale_month_pane_g9_ParamLimits

0x8533,	// (0x00020dc8) cale_month_pane_g9

0x856d,	// (0x00020e02) cale_month_pane_g10_ParamLimits

0x856d,	// (0x00020e02) cale_month_pane_g10

0x85a7,	// (0x00020e3c) cale_month_pane_g11_ParamLimits

0x85a7,	// (0x00020e3c) cale_month_pane_g11

0x85e1,	// (0x00020e76) cale_month_pane_g12_ParamLimits

0x85e1,	// (0x00020e76) cale_month_pane_g12

0x861f,	// (0x00020eb4) cale_month_pane_g13_ParamLimits

0x861f,	// (0x00020eb4) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00027b30) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00027b30) cale_month_pane_g

0x865d,	// (0x00020ef2) cale_month_week_pane

0x8670,	// (0x00020f05) grid_cale_month_pane_ParamLimits

0x8670,	// (0x00020f05) grid_cale_month_pane

0x86ae,	// (0x00020f43) cale_month_day_heading_pane_t1

0x870c,	// (0x00020fa1) cale_month_day_heading_pane_t2

0x8771,	// (0x00021006) cale_month_day_heading_pane_t3

0x87d6,	// (0x0002106b) cale_month_day_heading_pane_t4

0x883b,	// (0x000210d0) cale_month_day_heading_pane_t5

0x88a8,	// (0x0002113d) cale_month_day_heading_pane_t6

0x891d,	// (0x000211b2) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00027b4b) cale_month_day_heading_pane_t

0xe8c5,	// (0x0002715a) bg_cale_side_pane_cp01

0x8992,	// (0x00021227) cale_month_week_pane_t1

0x89a9,	// (0x0002123e) cale_month_week_pane_t2

0x89c0,	// (0x00021255) cale_month_week_pane_t3

0x89d7,	// (0x0002126c) cale_month_week_pane_t4

0x89ee,	// (0x00021283) cale_month_week_pane_t5

0x8a05,	// (0x0002129a) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00027b5a) cale_month_week_pane_t

0x8a1c,	// (0x000212b1) cell_cale_month_pane_ParamLimits

0x8a1c,	// (0x000212b1) cell_cale_month_pane

0x600a,	// (0x0001e89f) cell_cale_month_pane_g1

0x6016,	// (0x0001e8ab) cell_cale_month_pane_t1_ParamLimits

0x6016,	// (0x0001e8ab) cell_cale_month_pane_t1

0xe8d3,	// (0x00027168) grid_highlight_pane_cp08

0xe7c8,	// (0x0002705d) main_smil_g1

0x8aea,	// (0x0002137f) smil_status_pane

0xed48,	// (0x000275dd) smil_text_pane

0x157d,	// (0x00019e12) bg_popup_call3_rect_pane_g8

0x1585,	// (0x00019e1a) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x00027e13) bg_popup_call3_rect_pane_g

0x182d,	// (0x0001a0c2) smil_status_volume_pane_g1

0xed52,	// (0x000275e7) smil_status_pane_t1

0x62fd,	// (0x0001eb92) volume_smil_pane

0xed69,	// (0x000275fe) list_smil_text_pane

0x8afd,	// (0x00021392) scroll_pane_cp011

0x8b08,	// (0x0002139d) smil_text_list_pane_t1_ParamLimits

0x8b08,	// (0x0002139d) smil_text_list_pane_t1

0x6032,	// (0x0001e8c7) aid_volume_smil_ParamLimits

0x6032,	// (0x0001e8c7) aid_volume_smil

0xe7c8,	// (0x0002705d) smil_volume_pane_g1

0xe7c8,	// (0x0002705d) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00027b7a) smil_volume_pane_g

0xe773,	// (0x00027008) listscroll_cale_day_pane

0xed73,	// (0x00027608) bg_cale_pane

0xed8b,	// (0x00027620) list_cale_pane

0xed9c,	// (0x00027631) scroll_pane_cp09

0xedad,	// (0x00027642) cale_bg_pane_g1

0xedb5,	// (0x0002764a) cale_bg_pane_g2

0xedbd,	// (0x00027652) cale_bg_pane_g3

0xedc5,	// (0x0002765a) cale_bg_pane_g4

0xedcd,	// (0x00027662) cale_bg_pane_g5

0xedd5,	// (0x0002766a) cale_bg_pane_g6

0xeddd,	// (0x00027672) cale_bg_pane_g7

0xede5,	// (0x0002767a) cale_bg_pane_g8

0xeded,	// (0x00027682) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00027b7f) cale_bg_pane_g

0x8b5c,	// (0x000213f1) list_cale_time_pane_ParamLimits

0x8b5c,	// (0x000213f1) list_cale_time_pane

0x8b71,	// (0x00021406) list_cale_time_pane_g1_ParamLimits

0x8b71,	// (0x00021406) list_cale_time_pane_g1

0xedf5,	// (0x0002768a) list_cale_time_pane_g2_ParamLimits

0xedf5,	// (0x0002768a) list_cale_time_pane_g2

0x8b7d,	// (0x00021412) list_cale_time_pane_g3_ParamLimits

0x8b7d,	// (0x00021412) list_cale_time_pane_g3

0x8b8b,	// (0x00021420) list_cale_time_pane_g4_ParamLimits

0x8b8b,	// (0x00021420) list_cale_time_pane_g4

0x8b99,	// (0x0002142e) list_cale_time_pane_g5_ParamLimits

0x8b99,	// (0x0002142e) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00027b92) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00027b92) list_cale_time_pane_g

0x8ba7,	// (0x0002143c) list_cale_time_pane_t1_ParamLimits

0x8ba7,	// (0x0002143c) list_cale_time_pane_t1

0x8bcf,	// (0x00021464) list_cale_time_pane_t2_ParamLimits

0x8bcf,	// (0x00021464) list_cale_time_pane_t2

0x8ef4,	// (0x00021789) aid_blid_cardinal_pane

0x8f36,	// (0x000217cb) compass_pane_t4

0x8bf7,	// (0x0002148c) list_cale_time_pane_t4_ParamLimits

0x8bf7,	// (0x0002148c) list_cale_time_pane_t4

0x8f44,	// (0x000217d9) compass_pane_t5

0x8f54,	// (0x000217e9) compass_pane_t6

0x8f62,	// (0x000217f7) compass_pane_t7

0x01e3,	// (0x00018a78) navi_pane_cc_t1

0x034a,	// (0x00018bdf) aid_phob_thumbnail_center_pane

0x9694,	// (0x00021f29) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00027b9f) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00027b9f) list_cale_time_pane_t

0xe08e,	// (0x00026923) bg_popup_window_pane_cp02_ParamLimits

0xe08e,	// (0x00026923) bg_popup_window_pane_cp02

0xee0f,	// (0x000276a4) heading_pane_cp01_ParamLimits

0xee0f,	// (0x000276a4) heading_pane_cp01

0xee1b,	// (0x000276b0) loc_req_pane_ParamLimits

0xee1b,	// (0x000276b0) loc_req_pane

0xee2b,	// (0x000276c0) loc_type_pane_ParamLimits

0xee2b,	// (0x000276c0) loc_type_pane

0xee3d,	// (0x000276d2) loc_type_pane_t1_ParamLimits

0xee3d,	// (0x000276d2) loc_type_pane_t1

0xee4f,	// (0x000276e4) loc_type_pane_t2_ParamLimits

0xee4f,	// (0x000276e4) loc_type_pane_t2

0xee61,	// (0x000276f6) loc_type_pane_t3_ParamLimits

0xee61,	// (0x000276f6) loc_type_pane_t3

0x0002,

0xf311,	// (0x00027ba6) loc_type_pane_t_ParamLimits

0xf311,	// (0x00027ba6) loc_type_pane_t

0xee73,	// (0x00027708) list_loc_req_pane

0xee7d,	// (0x00027712) scroll_pane_cp012

0x8c1f,	// (0x000214b4) list_single_loc_request_popup_menu_pane_ParamLimits

0x8c1f,	// (0x000214b4) list_single_loc_request_popup_menu_pane

0xee88,	// (0x0002771d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xee88,	// (0x0002771d) list_single_loc_request_popup_menu_pane_g1

0xee94,	// (0x00027729) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xee94,	// (0x00027729) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00027bad) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00027bad) list_single_loc_request_popup_menu_pane_g

0xeea0,	// (0x00027735) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeea0,	// (0x00027735) list_single_loc_request_popup_menu_pane_t1

0x8c31,	// (0x000214c6) bg_popup_window_pane_cp03_ParamLimits

0x8c31,	// (0x000214c6) bg_popup_window_pane_cp03

0x8c3f,	// (0x000214d4) heading_loc_req_pane_ParamLimits

0x8c3f,	// (0x000214d4) heading_loc_req_pane

0x8c4b,	// (0x000214e0) popup_dyc_status_message_window_g1_ParamLimits

0x8c4b,	// (0x000214e0) popup_dyc_status_message_window_g1

0x8c57,	// (0x000214ec) popup_dyc_status_message_window_t1_ParamLimits

0x8c57,	// (0x000214ec) popup_dyc_status_message_window_t1

0x8c69,	// (0x000214fe) popup_dyc_status_message_window_t2_ParamLimits

0x8c69,	// (0x000214fe) popup_dyc_status_message_window_t2

0x8c7b,	// (0x00021510) popup_dyc_status_message_window_t3_ParamLimits

0x8c7b,	// (0x00021510) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00027bb2) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00027bb2) popup_dyc_status_message_window_t

0xe445,	// (0x00026cda) bg_heading_pane_cp01

0xeeb6,	// (0x0002774b) heading_loc_req_pane_g1

0xeebe,	// (0x00027753) heading_loc_req_pane_g2

0xeed2,	// (0x00027767) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00027bb9) heading_loc_req_pane_g

0xeeda,	// (0x0002776f) heading_loc_req_pane_t1

0xef61,	// (0x000277f6) bg_popup_sub_pane_cp01_ParamLimits

0xef61,	// (0x000277f6) bg_popup_sub_pane_cp01

0xef6f,	// (0x00027804) popup_cale_events_window_g1_ParamLimits

0xef6f,	// (0x00027804) popup_cale_events_window_g1

0xef8f,	// (0x00027824) popup_cale_events_window_g2_ParamLimits

0xef8f,	// (0x00027824) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x00027bed) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x00027bed) popup_cale_events_window_g

0xefaf,	// (0x00027844) popup_cale_events_window_t1_ParamLimits

0xefaf,	// (0x00027844) popup_cale_events_window_t1

0xefc1,	// (0x00027856) popup_cale_events_window_t2_ParamLimits

0xefc1,	// (0x00027856) popup_cale_events_window_t2

0xefff,	// (0x00027894) popup_cale_events_window_t3_ParamLimits

0xefff,	// (0x00027894) popup_cale_events_window_t3

0xf039,	// (0x000278ce) popup_cale_events_window_t4_ParamLimits

0xf039,	// (0x000278ce) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x00027bf2) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x00027bf2) popup_cale_events_window_t

0x8cff,	// (0x00021594) call_type_pane

0x0362,	// (0x00018bf7) popup_call_status_window_g1

0x8d0b,	// (0x000215a0) popup_call_status_window_g2

0x8d17,	// (0x000215ac) popup_call_status_window_g3

0x0002,

0xf366,	// (0x00027bfb) popup_call_status_window_g

0xf06f,	// (0x00027904) call_type_pane_g1

0xf078,	// (0x0002790d) call_type_pane_g2

0x0001,

0xf36d,	// (0x00027c02) call_type_pane_g

0xe445,	// (0x00026cda) bg_popup_sub_pane_cp02

0xf081,	// (0x00027916) listscroll_popup_wml_pane

0xf089,	// (0x0002791e) list_wml_pane

0xf093,	// (0x00027928) scroll_pane_cp013

0xf09e,	// (0x00027933) list_single_graphic_popup_wml_pane_ParamLimits

0xf09e,	// (0x00027933) list_single_graphic_popup_wml_pane

0xe7c8,	// (0x0002705d) list_single_graphic_popup_wml_pane_g1

0xf0b2,	// (0x00027947) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x00027c07) list_single_graphic_popup_wml_pane_g

0xf0ba,	// (0x0002794f) list_single_graphic_popup_wml_pane_t1

0xf0c8,	// (0x0002795d) aid_call_pane

0xe698,	// (0x00026f2d) popup_clock_analogue_window_g1

0xe698,	// (0x00026f2d) popup_clock_analogue_window_g2

0x6054,	// (0x0001e8e9) popup_clock_analogue_window_g3

0x6054,	// (0x0001e8e9) popup_clock_analogue_window_g4

0xe7c8,	// (0x0002705d) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x00027c0c) popup_clock_analogue_window_g

0x605c,	// (0x0001e8f1) popup_clock_analogue_window_t1

0x606a,	// (0x0001e8ff) clock_digital_number_pane_ParamLimits

0x606a,	// (0x0001e8ff) clock_digital_number_pane

0x6076,	// (0x0001e90b) clock_digital_number_pane_cp02_ParamLimits

0x6076,	// (0x0001e90b) clock_digital_number_pane_cp02

0x6082,	// (0x0001e917) clock_digital_number_pane_cp03_ParamLimits

0x6082,	// (0x0001e917) clock_digital_number_pane_cp03

0x608e,	// (0x0001e923) clock_digital_number_pane_cp04_ParamLimits

0x608e,	// (0x0001e923) clock_digital_number_pane_cp04

0x609a,	// (0x0001e92f) clock_digital_separator_pane_ParamLimits

0x609a,	// (0x0001e92f) clock_digital_separator_pane

0x60a6,	// (0x0001e93b) popup_clock_digital_window_t1

0xe7c8,	// (0x0002705d) clock_digital_number_pane_g1

0xe7c8,	// (0x0002705d) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00027b7a) clock_digital_number_pane_g

0xe7c8,	// (0x0002705d) clock_digital_separator_pane_g1

0xe7c8,	// (0x0002705d) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00027b7a) clock_digital_separator_pane_g

0xe445,	// (0x00026cda) bg_popup_window_pane_cp04

0x0043,	// (0x000188d8) heading_pane_cp03

0x004b,	// (0x000188e0) listscroll_popup_gms_pane

0x0053,	// (0x000188e8) grid_large_graphic_popup_pane

0x005d,	// (0x000188f2) listscroll_popup_gms_pane_g1

0x0065,	// (0x000188fa) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x00027c17) listscroll_popup_gms_pane_g

0xeb8d,	// (0x00027422) scroll_pane_cp014

0x8d23,	// (0x000215b8) cell_large_graphic_popup_pane_ParamLimits

0x8d23,	// (0x000215b8) cell_large_graphic_popup_pane

0x8d3d,	// (0x000215d2) cell_large_graphic_popup_pane_g1_ParamLimits

0x8d3d,	// (0x000215d2) cell_large_graphic_popup_pane_g1

0x006d,	// (0x00018902) cell_large_graphic_popup_pane_g2_ParamLimits

0x006d,	// (0x00018902) cell_large_graphic_popup_pane_g2

0x0079,	// (0x0001890e) cell_large_graphic_popup_pane_g3_ParamLimits

0x0079,	// (0x0001890e) cell_large_graphic_popup_pane_g3

0x0086,	// (0x0001891b) cell_large_graphic_popup_pane_g4_ParamLimits

0x0086,	// (0x0001891b) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x00027c1c) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x00027c1c) cell_large_graphic_popup_pane_g

0x0096,	// (0x0001892b) grid_highlight_pane_cp010

0xe7c8,	// (0x0002705d) bg_popup_call_pane_g1

0x00a0,	// (0x00018935) list_single_graphic_popup_conf_pane_ParamLimits

0x00a0,	// (0x00018935) list_single_graphic_popup_conf_pane

0x00b2,	// (0x00018947) list_highlight_pane_cp01

0x00bb,	// (0x00018950) list_single_graphic_popup_conf_pane_g1

0x00c3,	// (0x00018958) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x00027c25) list_single_graphic_popup_conf_pane_g

0x00cb,	// (0x00018960) list_single_graphic_popup_conf_pane_t1

0x00d9,	// (0x0001896e) linegrid_cams_pane_g1

0x8d49,	// (0x000215de) linegrid_cams_pane_g2

0xe906,	// (0x0002719b) linegrid_cams_pane_g3

0x00e2,	// (0x00018977) linegrid_cams_pane_g4

0x8d52,	// (0x000215e7) linegrid_cams_pane_g5

0x8d5b,	// (0x000215f0) linegrid_cams_pane_g6

0xe90f,	// (0x000271a4) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00027c2a) linegrid_cams_pane_g

0x00eb,	// (0x00018980) popup_clock_analogue_window

0x00eb,	// (0x00018980) popup_clock_digital_window

0xe445,	// (0x00026cda) popup_phob_thumbnail_window

0xe7c8,	// (0x0002705d) call_video_uplink_pane_g1

0x00f4,	// (0x00018989) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00027c39) call_video_uplink_pane_g

0x00fc,	// (0x00018991) video_uplink_pane

0x0104,	// (0x00018999) mce_image_pane_g1

0x8d66,	// (0x000215fb) mce_image_pane_g2

0x8d70,	// (0x00021605) mce_image_pane_g3

0x8d7a,	// (0x0002160f) mce_image_pane_g4

0x8d82,	// (0x00021617) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00027c3e) mce_image_pane_g

0x010e,	// (0x000189a3) control_top_pane_stacon_cp01_ParamLimits

0x010e,	// (0x000189a3) control_top_pane_stacon_cp01

0x0122,	// (0x000189b7) uni_indicator_pane_stacon_cp01_ParamLimits

0x0122,	// (0x000189b7) uni_indicator_pane_stacon_cp01

0x0133,	// (0x000189c8) bg_popup_sub_pane_cp03

0x8d8a,	// (0x0002161f) chi_dic_find_pane

0x8d92,	// (0x00021627) listscroll_chi_dic_pane

0x8d9b,	// (0x00021630) main_pane_chidic_g1

0x8dae,	// (0x00021643) chi_dic_find_pane_t1

0x013d,	// (0x000189d2) find_chidic_pane

0x0146,	// (0x000189db) chi_dic_list_pane_ParamLimits

0x0146,	// (0x000189db) chi_dic_list_pane

0x0157,	// (0x000189ec) scroll_pane_cp020

0x8dbc,	// (0x00021651) find_chidic_pane_t1

0xe445,	// (0x00026cda) input_focus_pane_cp06

0x8dcb,	// (0x00021660) list_chi_dic_pane_ParamLimits

0x8dcb,	// (0x00021660) list_chi_dic_pane

0x8de0,	// (0x00021675) list_chi_dic_pane_t1_ParamLimits

0x8de0,	// (0x00021675) list_chi_dic_pane_t1

0xe445,	// (0x00026cda) list_highlight_pane_cp020

0x015f,	// (0x000189f4) bg_cale_heading_pane_g1

0x8df3,	// (0x00021688) bg_cale_heading_pane_g2

0x8dfb,	// (0x00021690) bg_cale_heading_pane_g3

0x8e03,	// (0x00021698) bg_cale_heading_pane_g4

0x8e0d,	// (0x000216a2) bg_cale_heading_pane_g5

0x8e17,	// (0x000216ac) bg_cale_heading_pane_g6

0x8e1f,	// (0x000216b4) bg_cale_heading_pane_g7

0x8e27,	// (0x000216bc) bg_cale_heading_pane_g8

0x8e31,	// (0x000216c6) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00027c49) bg_cale_heading_pane_g

0x015f,	// (0x000189f4) bg_cale_side_pane_g1

0x8e3b,	// (0x000216d0) bg_cale_side_pane_g2

0x8e45,	// (0x000216da) bg_cale_side_pane_g3

0x8e4f,	// (0x000216e4) bg_cale_side_pane_g4

0x8e59,	// (0x000216ee) bg_cale_side_pane_g5

0x8e63,	// (0x000216f8) bg_cale_side_pane_g6

0x8e6d,	// (0x00021702) bg_cale_side_pane_g7

0x8e77,	// (0x0002170c) bg_cale_side_pane_g8

0x8e7f,	// (0x00021714) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00027c5c) bg_cale_side_pane_g

0x8e87,	// (0x0002171c) popup_call_status_window_ParamLimits

0x8e87,	// (0x0002171c) popup_call_status_window

0x0167,	// (0x000189fc) stacon_top_pane

0x016f,	// (0x00018a04) status_pane_ParamLimits

0x016f,	// (0x00018a04) status_pane

0x0184,	// (0x00018a19) status_small_pane

0x018c,	// (0x00018a21) control_pane

0xe445,	// (0x00026cda) stacon_bottom_pane

0x0194,	// (0x00018a29) list_single_mce_smart_pane_t1_ParamLimits

0x0194,	// (0x00018a29) list_single_mce_smart_pane_t1

0x01a7,	// (0x00018a3c) list_single_mce_smart_pane_t2_ParamLimits

0x01a7,	// (0x00018a3c) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00027c6f) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00027c6f) list_single_mce_smart_pane_t

0x8e93,	// (0x00021728) compass_pane

0x8e9e,	// (0x00021733) main_location2_pane_t1

0x8eb4,	// (0x00021749) main_location2_pane_t2

0x8eca,	// (0x0002175f) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00027c74) main_location2_pane_t

0x01c6,	// (0x00018a5b) compass_pane_g1_ParamLimits

0x01c6,	// (0x00018a5b) compass_pane_g1

0x8f18,	// (0x000217ad) compass_pane_t1

0x8f27,	// (0x000217bc) compass_pane_t2

0x0005,

0xf3e8,	// (0x00027c7d) compass_pane_t

0x8f72,	// (0x00021807) text_secondary_cp61

0x01da,	// (0x00018a6f) navi_pane_cams_g5

0x01fd,	// (0x00018a92) navi_pane_im_t1

0x020b,	// (0x00018aa0) navi_pane_mp_g1_ParamLimits

0x020b,	// (0x00018aa0) navi_pane_mp_g1

0x021f,	// (0x00018ab4) navi_pane_mp_g2_ParamLimits

0x021f,	// (0x00018ab4) navi_pane_mp_g2

0x022b,	// (0x00018ac0) navi_pane_mp_g3_ParamLimits

0x022b,	// (0x00018ac0) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00027c91) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00027c91) navi_pane_mp_g

0x0237,	// (0x00018acc) navi_pane_mp_t1

0x0245,	// (0x00018ada) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00027c98) navi_pane_mp_t

0x0281,	// (0x00018b16) navi_pane_vt_g1

0x0237,	// (0x00018acc) navi_pane_vt_t1

0x0289,	// (0x00018b1e) navi_slider_pane

0x0291,	// (0x00018b26) zooming_pane

0x0299,	// (0x00018b2e) navi_slider_pane_g1

0x60c3,	// (0x0001e958) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00027c9f) navi_slider_pane_g

0x02cf,	// (0x00018b64) aid_levels_zoom

0x02d7,	// (0x00018b6c) zooming_pane_g1

0x02df,	// (0x00018b74) zooming_pane_g2

0x02df,	// (0x00018b74) zooming_pane_g3

0x0002,

0xf419,	// (0x00027cae) zooming_pane_g

0x02e7,	// (0x00018b7c) level_10_zoom

0x02f0,	// (0x00018b85) level_11_zoom

0x02f9,	// (0x00018b8e) level_1_zoom

0x0302,	// (0x00018b97) level_2_zoom

0x030b,	// (0x00018ba0) level_3_zoom

0x0314,	// (0x00018ba9) level_4_zoom

0x031d,	// (0x00018bb2) level_5_zoom

0x0326,	// (0x00018bbb) level_6_zoom

0x032f,	// (0x00018bc4) level_7_zoom

0x0338,	// (0x00018bcd) level_8_zoom

0x0341,	// (0x00018bd6) level_9_zoom

0x0352,	// (0x00018be7) popup_phob_thumbnail_window_g1

0x035a,	// (0x00018bef) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00027cb5) popup_phob_thumbnail_window_g

0x16e3,	// (0x00019f78) level_1_location

0x16eb,	// (0x00019f80) level_2_location

0x16f3,	// (0x00019f88) level_3_location

0x16fb,	// (0x00019f90) level_4_location

0x0291,	// (0x00018b26) level_5_location

0x909f,	// (0x00021934) mce_icon_pane_g1

0x90a7,	// (0x0002193c) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00027cba) mce_icon_pane_g

0x90af,	// (0x00021944) main_mup_pane_g1_ParamLimits

0x90af,	// (0x00021944) main_mup_pane_g1

0x90c7,	// (0x0002195c) main_mup_pane_g2_ParamLimits

0x90c7,	// (0x0002195c) main_mup_pane_g2

0x90e3,	// (0x00021978) main_mup_pane_g3_ParamLimits

0x90e3,	// (0x00021978) main_mup_pane_g3

0x90ff,	// (0x00021994) main_mup_pane_g4_ParamLimits

0x90ff,	// (0x00021994) main_mup_pane_g4

0x9113,	// (0x000219a8) main_mup_pane_g5_ParamLimits

0x9113,	// (0x000219a8) main_mup_pane_g5

0x9134,	// (0x000219c9) main_mup_pane_g6_ParamLimits

0x9134,	// (0x000219c9) main_mup_pane_g6

0x9154,	// (0x000219e9) main_mup_pane_g7_ParamLimits

0x9154,	// (0x000219e9) main_mup_pane_g7

0x9178,	// (0x00021a0d) main_mup_pane_g8_ParamLimits

0x9178,	// (0x00021a0d) main_mup_pane_g8

0x919c,	// (0x00021a31) main_mup_pane_g9_ParamLimits

0x919c,	// (0x00021a31) main_mup_pane_g9

0x91bf,	// (0x00021a54) main_mup_pane_g10_ParamLimits

0x91bf,	// (0x00021a54) main_mup_pane_g10

0x91e2,	// (0x00021a77) main_mup_pane_g11_ParamLimits

0x91e2,	// (0x00021a77) main_mup_pane_g11

0x9202,	// (0x00021a97) main_mup_pane_g12_ParamLimits

0x9202,	// (0x00021a97) main_mup_pane_g12

0x9210,	// (0x00021aa5) main_mup_pane_g13_ParamLimits

0x9210,	// (0x00021aa5) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00027cbf) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00027cbf) main_mup_pane_g

0x9226,	// (0x00021abb) main_mup_pane_t1_ParamLimits

0x9226,	// (0x00021abb) main_mup_pane_t1

0x9245,	// (0x00021ada) main_mup_pane_t2_ParamLimits

0x9245,	// (0x00021ada) main_mup_pane_t2

0x925f,	// (0x00021af4) main_mup_pane_t3_ParamLimits

0x925f,	// (0x00021af4) main_mup_pane_t3

0x9279,	// (0x00021b0e) main_mup_pane_t4_ParamLimits

0x9279,	// (0x00021b0e) main_mup_pane_t4

0x928b,	// (0x00021b20) main_mup_pane_t5_ParamLimits

0x928b,	// (0x00021b20) main_mup_pane_t5

0x929d,	// (0x00021b32) main_mup_pane_t6_ParamLimits

0x929d,	// (0x00021b32) main_mup_pane_t6

0x0005,

0xf445,	// (0x00027cda) main_mup_pane_t_ParamLimits

0xf445,	// (0x00027cda) main_mup_pane_t

0x92b3,	// (0x00021b48) mup_progress_pane_ParamLimits

0x92b3,	// (0x00021b48) mup_progress_pane

0x92bf,	// (0x00021b54) mup_visualizer_pane_ParamLimits

0x92bf,	// (0x00021b54) mup_visualizer_pane

0x92f9,	// (0x00021b8e) mup_volume_pane_ParamLimits

0x92f9,	// (0x00021b8e) mup_volume_pane

0x0362,	// (0x00018bf7) mup_visualizer_pane_g1_ParamLimits

0x0362,	// (0x00018bf7) mup_visualizer_pane_g1

0x0362,	// (0x00018bf7) mup_visualizer_pane_g2_ParamLimits

0x0362,	// (0x00018bf7) mup_visualizer_pane_g2

0x01c6,	// (0x00018a5b) mup_visualizer_pane_g3_ParamLimits

0x01c6,	// (0x00018a5b) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x00027ce7) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x00027ce7) mup_visualizer_pane_g

0xe7c8,	// (0x0002705d) mup_volume_pane_g1

0x0378,	// (0x00018c0d) mup_volume_pane_g2

0x0001,

0xf459,	// (0x00027cee) mup_volume_pane_g

0xe7c8,	// (0x0002705d) mup_progress_pane_g1

0x0381,	// (0x00018c16) mup_progress_pane_g2

0x038a,	// (0x00018c1f) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x00027cf3) mup_progress_pane_g

0xe445,	// (0x00026cda) bg_popup_window_pane_cp05

0x0393,	// (0x00018c28) heading_pane_cp02_ParamLimits

0x0393,	// (0x00018c28) heading_pane_cp02

0x03af,	// (0x00018c44) list_popup_blid_pane

0x03b7,	// (0x00018c4c) list_blid_sat_info_pane_ParamLimits

0x03b7,	// (0x00018c4c) list_blid_sat_info_pane

0x03ca,	// (0x00018c5f) list_blid_sat_info_pane_g1

0x03d2,	// (0x00018c67) list_blid_sat_info_pane_t1

0x9418,	// (0x00021cad) mup_equalizer_pane_ParamLimits

0x9418,	// (0x00021cad) mup_equalizer_pane

0x9439,	// (0x00021cce) mup_equalizer_pane_cp1_ParamLimits

0x9439,	// (0x00021cce) mup_equalizer_pane_cp1

0x945a,	// (0x00021cef) mup_equalizer_pane_cp2_ParamLimits

0x945a,	// (0x00021cef) mup_equalizer_pane_cp2

0x947b,	// (0x00021d10) mup_equalizer_pane_cp3_ParamLimits

0x947b,	// (0x00021d10) mup_equalizer_pane_cp3

0x94a0,	// (0x00021d35) mup_equalizer_pane_cp4_ParamLimits

0x94a0,	// (0x00021d35) mup_equalizer_pane_cp4

0x94c5,	// (0x00021d5a) mup_equalizer_pane_cp5

0x94dd,	// (0x00021d72) mup_equalizer_pane_cp6

0x94f5,	// (0x00021d8a) mup_equalizer_pane_cp7

0x15fd,	// (0x00019e92) bg_popup_call_poc_act_pane_g9

0x1605,	// (0x00019e9a) bg_popup_call_poc_act_pane_g10

0x160d,	// (0x00019ea2) bg_popup_call_poc_act_pane_g11

0x000a,

0xe6a0,	// (0x00026f35) mup_scale_pane

0xe7c8,	// (0x0002705d) mup_scale_pane_g1

0x03e0,	// (0x00018c75) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x00027d0f) mup_scale_pane_g

0x0404,	// (0x00018c99) msg_data_pane

0x040c,	// (0x00018ca1) scroll_pane_cp017

0x951f,	// (0x00021db4) bg_list_pane_cp04_ParamLimits

0x951f,	// (0x00021db4) bg_list_pane_cp04

0x041c,	// (0x00018cb1) msg_data_pane_g1

0x953f,	// (0x00021dd4) msg_data_pane_g2

0x9549,	// (0x00021dde) msg_data_pane_g3

0x9553,	// (0x00021de8) msg_data_pane_g4

0x955b,	// (0x00021df0) msg_data_pane_g5

0x9563,	// (0x00021df8) msg_data_pane_g6

0x956b,	// (0x00021e00) msg_data_pane_g7

0x0006,

0xf489,	// (0x00027d1e) msg_data_pane_g

0x9573,	// (0x00021e08) msg_text_pane_ParamLimits

0x9573,	// (0x00021e08) msg_text_pane

0x959b,	// (0x00021e30) qrid_highlight_pane_cp011_ParamLimits

0x959b,	// (0x00021e30) qrid_highlight_pane_cp011

0xe445,	// (0x00026cda) msg_body_pane

0xe445,	// (0x00026cda) msg_header_pane

0x042d,	// (0x00018cc2) input_focus_pane_cp07

0x95bf,	// (0x00021e54) msg_header_pane_t1_ParamLimits

0x95bf,	// (0x00021e54) msg_header_pane_t1

0x0442,	// (0x00018cd7) msg_header_pane_t2_ParamLimits

0x0442,	// (0x00018cd7) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00027d32) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00027d32) msg_header_pane_t

0x0454,	// (0x00018ce9) msg_body_pane_g1

0x95d3,	// (0x00021e68) msg_body_pane_t1_ParamLimits

0x95d3,	// (0x00021e68) msg_body_pane_t1

0x045c,	// (0x00018cf1) msg_body_pane_t2_ParamLimits

0x045c,	// (0x00018cf1) msg_body_pane_t2

0x046e,	// (0x00018d03) msg_body_pane_t3_ParamLimits

0x046e,	// (0x00018d03) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00027d37) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00027d37) msg_body_pane_t

0x6105,	// (0x0001e99a) main_viewer_pane_g1_ParamLimits

0x6105,	// (0x0001e99a) main_viewer_pane_g1

0x6111,	// (0x0001e9a6) main_viewer_pane_g2_ParamLimits

0x6111,	// (0x0001e9a6) main_viewer_pane_g2

0x9626,	// (0x00021ebb) main_viewer_pane_g3_ParamLimits

0x9626,	// (0x00021ebb) main_viewer_pane_g3

0x9637,	// (0x00021ecc) main_viewer_pane_g4_ParamLimits

0x9637,	// (0x00021ecc) main_viewer_pane_g4

0x611d,	// (0x0001e9b2) main_viewer_pane_g5_ParamLimits

0x611d,	// (0x0001e9b2) main_viewer_pane_g5

0x611d,	// (0x0001e9b2) main_viewer_pane_g7_ParamLimits

0x611d,	// (0x0001e9b2) main_viewer_pane_g7

0x612f,	// (0x0001e9c4) main_viewer_pane_g8_ParamLimits

0x612f,	// (0x0001e9c4) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00027d47) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00027d47) main_viewer_pane_g

0x04c2,	// (0x00018d57) viewer_content_pane_ParamLimits

0x04c2,	// (0x00018d57) viewer_content_pane

0x9668,	// (0x00021efd) main_postcard_pane_g1_ParamLimits

0x9668,	// (0x00021efd) main_postcard_pane_g1

0x9676,	// (0x00021f0b) main_postcard_pane_g2_ParamLimits

0x9676,	// (0x00021f0b) main_postcard_pane_g2

0x9684,	// (0x00021f19) main_postcard_pane_g3_ParamLimits

0x9684,	// (0x00021f19) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00027d58) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00027d58) main_postcard_pane_g

0x9694,	// (0x00021f29) main_postcard_pane_g4

0x181a,	// (0x0001a0af) smil_status_volume_pane_g2

0x96c0,	// (0x00021f55) postcard_pane_ParamLimits

0x96c0,	// (0x00021f55) postcard_pane

0x0362,	// (0x00018bf7) postcard_pane_g1_ParamLimits

0x0362,	// (0x00018bf7) postcard_pane_g1

0x96fa,	// (0x00021f8f) postcard_pane_g2_ParamLimits

0x96fa,	// (0x00021f8f) postcard_pane_g2

0x9706,	// (0x00021f9b) postcard_pane_g3_ParamLimits

0x9706,	// (0x00021f9b) postcard_pane_g3

0x04de,	// (0x00018d73) postcard_pane_g4_ParamLimits

0x04de,	// (0x00018d73) postcard_pane_g4

0x9712,	// (0x00021fa7) postcard_pane_g5_ParamLimits

0x9712,	// (0x00021fa7) postcard_pane_g5

0x971e,	// (0x00021fb3) postcard_pane_g6_ParamLimits

0x971e,	// (0x00021fb3) postcard_pane_g6

0x04d0,	// (0x00018d65) postcard_pane_g7_ParamLimits

0x04d0,	// (0x00018d65) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00027d65) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00027d65) postcard_pane_g

0x972c,	// (0x00021fc1) main_mp2_pane_g1_ParamLimits

0x972c,	// (0x00021fc1) main_mp2_pane_g1

0x973a,	// (0x00021fcf) main_mp2_pane_g2_ParamLimits

0x973a,	// (0x00021fcf) main_mp2_pane_g2

0x9746,	// (0x00021fdb) main_mp2_pane_g3_ParamLimits

0x9746,	// (0x00021fdb) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00027d74) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00027d74) main_mp2_pane_g

0x9752,	// (0x00021fe7) main_mp2_pane_t1_ParamLimits

0x9752,	// (0x00021fe7) main_mp2_pane_t1

0x9769,	// (0x00021ffe) main_mp2_pane_t2_ParamLimits

0x9769,	// (0x00021ffe) main_mp2_pane_t2

0x977d,	// (0x00022012) main_mp2_pane_t3_ParamLimits

0x977d,	// (0x00022012) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00027d7b) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00027d7b) main_mp2_pane_t

0x04ec,	// (0x00018d81) pec_content_pane_ParamLimits

0x04ec,	// (0x00018d81) pec_content_pane

0xeb8d,	// (0x00027422) scroll_pane_cp015

0x04fe,	// (0x00018d93) pec_attribute_pane_ParamLimits

0x04fe,	// (0x00018d93) pec_attribute_pane

0x978f,	// (0x00022024) pec_content_pane_g1_ParamLimits

0x978f,	// (0x00022024) pec_content_pane_g1

0x050e,	// (0x00018da3) pec_content_pane_t1_ParamLimits

0x050e,	// (0x00018da3) pec_content_pane_t1

0x0520,	// (0x00018db5) pec_content_pane_t2_ParamLimits

0x0520,	// (0x00018db5) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00027d82) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00027d82) pec_content_pane_t

0x979b,	// (0x00022030) list_single_graphic_pane_cp01_ParamLimits

0x979b,	// (0x00022030) list_single_graphic_pane_cp01

0xe6a0,	// (0x00026f35) bg_popup_sub_pane_cp04

0x0532,	// (0x00018dc7) popup_mup_playback_window_g1

0x053e,	// (0x00018dd3) popup_mup_playback_window_t1

0x0553,	// (0x00018de8) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00027d87) popup_mup_playback_window_t

0x058a,	// (0x00018e1f) main_image_pane_g1_ParamLimits

0x058a,	// (0x00018e1f) main_image_pane_g1

0x05cd,	// (0x00018e62) scroll_pane_cp018_ParamLimits

0x05cd,	// (0x00018e62) scroll_pane_cp018

0x05e5,	// (0x00018e7a) scroll_pane_cp016_ParamLimits

0x05e5,	// (0x00018e7a) scroll_pane_cp016

0x9829,	// (0x000220be) smil2_image_pane_ParamLimits

0x9829,	// (0x000220be) smil2_image_pane

0x985f,	// (0x000220f4) smil2_root_pane_ParamLimits

0x985f,	// (0x000220f4) smil2_root_pane

0x988b,	// (0x00022120) smil2_text_pane_ParamLimits

0x988b,	// (0x00022120) smil2_text_pane

0xe445,	// (0x00026cda) bg_list_pane_cp06

0x0621,	// (0x00018eb6) grid_radio_pane

0xe445,	// (0x00026cda) bg_popup_window_pane_cp06

0x062b,	// (0x00018ec0) main_fmradio_pane_t1

0x0043,	// (0x000188d8) heading_pane_cp04

0x0639,	// (0x00018ece) main_fmradio_pane_t2

0x1615,	// (0x00019eaa) popup_cale_lunar_info_window_g1

0x0647,	// (0x00018edc) main_fmradio_pane_t3

0x161d,	// (0x00019eb2) popup_cale_lunar_info_window_g2

0x0657,	// (0x00018eec) main_fmradio_pane_t4

0x0001,

0x0665,	// (0x00018efa) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00027e62) popup_cale_lunar_info_window_g

0xf507,	// (0x00027d9c) main_fmradio_pane_t

0x0673,	// (0x00018f08) wait_bar_pane_cp03

0x067b,	// (0x00018f10) cell_fmradio_pane_ParamLimits

0x067b,	// (0x00018f10) cell_fmradio_pane

0x04d0,	// (0x00018d65) cell_fmradio_pane_g1_ParamLimits

0x04d0,	// (0x00018d65) cell_fmradio_pane_g1

0xe445,	// (0x00026cda) grid_highlight_pane_cp011

0x0690,	// (0x00018f25) poc_content_pane_ParamLimits

0x0690,	// (0x00018f25) poc_content_pane

0x06a2,	// (0x00018f37) scroll_pane_cp019

0x98cb,	// (0x00022160) popup_call_poc_act_window_ParamLimits

0x98cb,	// (0x00022160) popup_call_poc_act_window

0x98d8,	// (0x0002216d) popup_call_poc_inact_window_ParamLimits

0x98d8,	// (0x0002216d) popup_call_poc_inact_window

0xf5a4,	// (0x00027e39) bg_popup_call_poc_act_pane_g

0x158d,	// (0x00019e22) bg_popup_call_poc_inact_pane_g1

0x1595,	// (0x00019e2a) bg_popup_call_poc_inact_pane_g2

0x06aa,	// (0x00018f3f) popup_call_poc_act_window_g2

0x159d,	// (0x00019e32) bg_popup_call_poc_inact_pane_g3

0x15a5,	// (0x00019e3a) bg_popup_call_poc_inact_pane_g4

0x15ad,	// (0x00019e42) bg_popup_call_poc_inact_pane_g5

0x06b2,	// (0x00018f47) popup_call_poc_act_window_t1_ParamLimits

0x06b2,	// (0x00018f47) popup_call_poc_act_window_t1

0x06da,	// (0x00018f6f) popup_call_poc_act_window_t2_ParamLimits

0x06da,	// (0x00018f6f) popup_call_poc_act_window_t2

0x0702,	// (0x00018f97) popup_call_poc_act_window_t3_ParamLimits

0x0702,	// (0x00018f97) popup_call_poc_act_window_t3

0x072a,	// (0x00018fbf) popup_call_poc_act_window_t4_ParamLimits

0x072a,	// (0x00018fbf) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00027da7) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00027da7) popup_call_poc_act_window_t

0x15b5,	// (0x00019e4a) bg_popup_call_poc_inact_pane_g6

0x15bd,	// (0x00019e52) bg_popup_call_poc_inact_pane_g7

0x15c5,	// (0x00019e5a) bg_popup_call_poc_inact_pane_g8

0x073c,	// (0x00018fd1) popup_call_poc_inact_window_g2

0x15cd,	// (0x00019e62) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x00027e26) bg_popup_call_poc_inact_pane_g

0x0744,	// (0x00018fd9) popup_call_poc_inact_window_t1_ParamLimits

0x0744,	// (0x00018fd9) popup_call_poc_inact_window_t1

0x0759,	// (0x00018fee) popup_call_poc_inact_window_t2_ParamLimits

0x0759,	// (0x00018fee) popup_call_poc_inact_window_t2

0x076e,	// (0x00019003) popup_call_poc_inact_window_t3_ParamLimits

0x076e,	// (0x00019003) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00027db0) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00027db0) popup_call_poc_inact_window_t

0x178d,	// (0x0001a022) context_pane_ParamLimits

0x9d8f,	// (0x00022624) signal_pane_ParamLimits

0x0291,	// (0x00018b26) main_call2_pane

0x629c,	// (0x0001eb31) popup_phob_thumbnail2_window_ParamLimits

0x629c,	// (0x0001eb31) popup_phob_thumbnail2_window

0x60d5,	// (0x0001e96a) aid_hotspot_pointer_arrow_pane

0x60dd,	// (0x0001e972) aid_hotspot_pointer_hand_pane

0x9bfd,	// (0x00022492) phob_pre_status_pane_g5

0x7a89,	// (0x0002031e) cams_zoom_pane_ParamLimits

0x7a95,	// (0x0002032a) image_vga_pane_ParamLimits

0x7aa4,	// (0x00020339) main_camera_pane_g1_ParamLimits

0x7ab2,	// (0x00020347) main_camera_pane_g2_ParamLimits

0x7abe,	// (0x00020353) main_camera_pane_g3_ParamLimits

0x7acc,	// (0x00020361) main_camera_pane_g4_ParamLimits

0x7ada,	// (0x0002036f) main_camera_pane_g5_ParamLimits

0x7ae8,	// (0x0002037d) main_camera_pane_g6_ParamLimits

0x7af6,	// (0x0002038b) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00027aaf) main_camera_pane_g_ParamLimits

0x7b04,	// (0x00020399) main_camera_pane_t1_ParamLimits

0x7b16,	// (0x000203ab) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00027ac0) main_camera_pane_t_ParamLimits

0xe6a0,	// (0x00026f35) bg_popup_preview_window_pane_cp01_ParamLimits

0xe6a0,	// (0x00026f35) bg_popup_preview_window_pane_cp01

0x0783,	// (0x00019018) popup_phob_thumbnail2_window_g1_ParamLimits

0x0783,	// (0x00019018) popup_phob_thumbnail2_window_g1

0xe445,	// (0x00026cda) call2_cli_visual_pane

0x98f4,	// (0x00022189) popup_call2_audio_conf_window_ParamLimits

0x98f4,	// (0x00022189) popup_call2_audio_conf_window

0x990d,	// (0x000221a2) popup_call2_audio_first_window_ParamLimits

0x990d,	// (0x000221a2) popup_call2_audio_first_window

0x99ab,	// (0x00022240) popup_call2_audio_in_window_ParamLimits

0x99ab,	// (0x00022240) popup_call2_audio_in_window

0x99ef,	// (0x00022284) popup_call2_audio_out_window_ParamLimits

0x99ef,	// (0x00022284) popup_call2_audio_out_window

0x9a59,	// (0x000222ee) popup_call2_audio_second_window_ParamLimits

0x9a59,	// (0x000222ee) popup_call2_audio_second_window

0x9ab7,	// (0x0002234c) popup_call2_audio_wait_window_ParamLimits

0x9ab7,	// (0x0002234c) popup_call2_audio_wait_window

0xe445,	// (0x00026cda) bg_popup_call2_act_pane_cp03

0xe682,	// (0x00026f17) list_conf_pane_cp

0x078f,	// (0x00019024) popup_call2_audio_conf_window_t1

0x079d,	// (0x00019032) list_single_graphic_popup_conf2_pane_ParamLimits

0x079d,	// (0x00019032) list_single_graphic_popup_conf2_pane

0x00b2,	// (0x00018947) list_highlight_pane_cp04

0x07b0,	// (0x00019045) list_single_graphic_popup_conf2_pane_g1

0x00c3,	// (0x00018958) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00027db7) list_single_graphic_popup_conf2_pane_g

0x07ba,	// (0x0001904f) list_single_graphic_popup_conf2_pane_t1

0x07c8,	// (0x0001905d) bg_popup_call2_act_pane_cp01_ParamLimits

0x07c8,	// (0x0001905d) bg_popup_call2_act_pane_cp01

0x0852,	// (0x000190e7) call_type_pane_cp05_ParamLimits

0x0852,	// (0x000190e7) call_type_pane_cp05

0x08a6,	// (0x0001913b) popup_call2_audio_second_window_g1_ParamLimits

0x08a6,	// (0x0001913b) popup_call2_audio_second_window_g1

0x08fa,	// (0x0001918f) popup_call2_audio_second_window_g2_ParamLimits

0x08fa,	// (0x0001918f) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00027dbc) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00027dbc) popup_call2_audio_second_window_g

0x095f,	// (0x000191f4) popup_call2_audio_second_window_t1_ParamLimits

0x095f,	// (0x000191f4) popup_call2_audio_second_window_t1

0x0a1a,	// (0x000192af) popup_call2_audio_second_window_t2_ParamLimits

0x0a1a,	// (0x000192af) popup_call2_audio_second_window_t2

0x0a6d,	// (0x00019302) popup_call2_audio_second_window_t3_ParamLimits

0x0a6d,	// (0x00019302) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x00027dc3) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x00027dc3) popup_call2_audio_second_window_t

0xe445,	// (0x00026cda) bg_popup_call2_in_pane_cp02

0xe44f,	// (0x00026ce4) call_type_pane_cp04

0xe457,	// (0x00026cec) popup_call2_audio_wait_window_g1

0xe45f,	// (0x00026cf4) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0002799c) popup_call2_audio_wait_window_g

0xe467,	// (0x00026cfc) popup_call2_audio_wait_window_t3

0x0b60,	// (0x000193f5) bg_popup_call2_act_pane_ParamLimits

0x0b60,	// (0x000193f5) bg_popup_call2_act_pane

0x0c20,	// (0x000194b5) call_type_pane_cp03_ParamLimits

0x0c20,	// (0x000194b5) call_type_pane_cp03

0x0c84,	// (0x00019519) popup_call2_audio_first_window_g1_ParamLimits

0x0c84,	// (0x00019519) popup_call2_audio_first_window_g1

0x0cf4,	// (0x00019589) popup_call2_audio_first_window_g2_ParamLimits

0x0cf4,	// (0x00019589) popup_call2_audio_first_window_g2

0x0362,	// (0x00018bf7) popup_call2_audio_first_window_g3_ParamLimits

0x0362,	// (0x00018bf7) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00027dcc) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00027dcc) popup_call2_audio_first_window_g

0x0dd2,	// (0x00019667) popup_call2_audio_first_window_t1_ParamLimits

0x0dd2,	// (0x00019667) popup_call2_audio_first_window_t1

0x0ed5,	// (0x0001976a) popup_call2_audio_first_window_t4_ParamLimits

0x0ed5,	// (0x0001976a) popup_call2_audio_first_window_t4

0x0fb8,	// (0x0001984d) popup_call2_audio_first_window_t5_ParamLimits

0x0fb8,	// (0x0001984d) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x00027dd7) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x00027dd7) popup_call2_audio_first_window_t

0xe698,	// (0x00026f2d) bg_popup_call2_act_pane_g1

0x1627,	// (0x00019ebc) popup_cale_lunar_info_window_t1

0x1635,	// (0x00019eca) popup_cale_lunar_info_window_t2

0x1643,	// (0x00019ed8) popup_cale_lunar_info_window_t3

0xe445,	// (0x00026cda) bg_popup_call2_bubble_pane

0x10b9,	// (0x0001994e) bg_popup_call2_in_pane_cp01_ParamLimits

0x10b9,	// (0x0001994e) bg_popup_call2_in_pane_cp01

0xe121,	// (0x000269b6) call_type_pane_cp02

0x1101,	// (0x00019996) popup_call2_audio_out_window_g1_ParamLimits

0x1101,	// (0x00019996) popup_call2_audio_out_window_g1

0x112d,	// (0x000199c2) popup_call2_audio_out_window_g2_ParamLimits

0x112d,	// (0x000199c2) popup_call2_audio_out_window_g2

0x1155,	// (0x000199ea) popup_call2_audio_out_window_g3_ParamLimits

0x1155,	// (0x000199ea) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x00027de0) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x00027de0) popup_call2_audio_out_window_g

0x1190,	// (0x00019a25) popup_call2_audio_out_window_t1_ParamLimits

0x1190,	// (0x00019a25) popup_call2_audio_out_window_t1

0x11ef,	// (0x00019a84) popup_call2_audio_out_window_t2_ParamLimits

0x11ef,	// (0x00019a84) popup_call2_audio_out_window_t2

0x1243,	// (0x00019ad8) popup_call2_audio_out_window_t3_ParamLimits

0x1243,	// (0x00019ad8) popup_call2_audio_out_window_t3

0x1259,	// (0x00019aee) popup_call2_audio_out_window_t4_ParamLimits

0x1259,	// (0x00019aee) popup_call2_audio_out_window_t4

0x126f,	// (0x00019b04) popup_call2_audio_out_window_t5_ParamLimits

0x126f,	// (0x00019b04) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x00027de9) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x00027de9) popup_call2_audio_out_window_t

0x12d3,	// (0x00019b68) bg_popup_call2_in_pane_ParamLimits

0x12d3,	// (0x00019b68) bg_popup_call2_in_pane

0x132f,	// (0x00019bc4) popup_call2_audio_in_window_g1_ParamLimits

0x132f,	// (0x00019bc4) popup_call2_audio_in_window_g1

0x1367,	// (0x00019bfc) popup_call2_audio_in_window_g2_ParamLimits

0x1367,	// (0x00019bfc) popup_call2_audio_in_window_g2

0x139f,	// (0x00019c34) popup_call2_audio_in_window_g3_ParamLimits

0x139f,	// (0x00019c34) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x00027df6) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x00027df6) popup_call2_audio_in_window_g

0x13f7,	// (0x00019c8c) popup_call2_audio_in_window_t1_ParamLimits

0x13f7,	// (0x00019c8c) popup_call2_audio_in_window_t1

0x1477,	// (0x00019d0c) popup_call2_audio_in_window_t2_ParamLimits

0x1477,	// (0x00019d0c) popup_call2_audio_in_window_t2

0x14f7,	// (0x00019d8c) popup_call2_audio_in_window_t3_ParamLimits

0x14f7,	// (0x00019d8c) popup_call2_audio_in_window_t3

0x1511,	// (0x00019da6) popup_call2_audio_in_window_t4_ParamLimits

0x1511,	// (0x00019da6) popup_call2_audio_in_window_t4

0x1523,	// (0x00019db8) popup_call2_audio_in_window_t5_ParamLimits

0x1523,	// (0x00019db8) popup_call2_audio_in_window_t5

0x1538,	// (0x00019dcd) popup_call2_audio_in_window_t6_ParamLimits

0x1538,	// (0x00019dcd) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x00027dff) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x00027dff) popup_call2_audio_in_window_t

0xe698,	// (0x00026f2d) bg_popup_call2_in_pane_g1

0x1651,	// (0x00019ee6) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00027e67) popup_cale_lunar_info_window_t

0xe6a0,	// (0x00026f35) bg_popup_call2_rect_pane_ParamLimits

0xe6a0,	// (0x00026f35) bg_popup_call2_rect_pane

0xe445,	// (0x00026cda) call2_cli_visual_graphic_pane

0xe445,	// (0x00026cda) call2_cli_visual_text_pane

0x62f0,	// (0x0001eb85) smil_status_volume_pane_g3

0x0002,

0xe7c8,	// (0x0002705d) call2_cli_visual_graphic_pane_g1

0xe7c8,	// (0x0002705d) call2_cli_visual_graphic_pane_g2

0xe7c8,	// (0x0002705d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x00027e0c) call2_cli_visual_graphic_pane_g

0x154d,	// (0x00019de2) bg_popup_call2_rect_pane_g1

0xe866,	// (0x000270fb) bg_popup_call2_rect_pane_g2

0x1555,	// (0x00019dea) bg_popup_call2_rect_pane_g3

0x155d,	// (0x00019df2) bg_popup_call2_rect_pane_g4

0x1565,	// (0x00019dfa) bg_popup_call2_rect_pane_g5

0x156d,	// (0x00019e02) bg_popup_call2_rect_pane_g6

0x1575,	// (0x00019e0a) bg_popup_call2_rect_pane_g7

0x157d,	// (0x00019e12) bg_popup_call2_rect_pane_g8

0x1585,	// (0x00019e1a) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x00027e13) bg_popup_call2_rect_pane_g

0x158d,	// (0x00019e22) bg_popup_call2_bubble_pane_g1

0x1595,	// (0x00019e2a) bg_popup_call2_bubble_pane_g2

0x159d,	// (0x00019e32) bg_popup_call2_bubble_pane_g3

0x15a5,	// (0x00019e3a) bg_popup_call2_bubble_pane_g4

0x15ad,	// (0x00019e42) bg_popup_call2_bubble_pane_g5

0x15b5,	// (0x00019e4a) bg_popup_call2_bubble_pane_g6

0x15bd,	// (0x00019e52) bg_popup_call2_bubble_pane_g7

0x15c5,	// (0x00019e5a) bg_popup_call2_bubble_pane_g8

0x15cd,	// (0x00019e62) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x00027e26) bg_popup_call2_bubble_pane_g

0x76ca,	// (0x0001ff5f) aid_cale_week_size_cell_pane

0x7b2a,	// (0x000203bf) aid_cams_cif_uncrop_pane_ParamLimits

0x7b2a,	// (0x000203bf) aid_cams_cif_uncrop_pane

0x7c87,	// (0x0002051c) aid_cams_size_cell_ParamLimits

0x7c87,	// (0x0002051c) aid_cams_size_cell

0x7c93,	// (0x00020528) grid_cams_pane_ParamLimits

0x7ca1,	// (0x00020536) linegrid_cams_pane_ParamLimits

0x7dcb,	// (0x00020660) call_video_pane_t1

0x7de8,	// (0x0002067d) call_video_pane_t2

0x0001,

0xf27e,	// (0x00027b13) call_video_pane_t

0x82a2,	// (0x00020b37) aid_cale_month_size_cell_pane_ParamLimits

0x82a2,	// (0x00020b37) aid_cale_month_size_cell_pane

0xf61b,	// (0x00027eb0) smil_status_volume_pane_g

0x62fd,	// (0x0001eb92) volume_smil_pane_ParamLimits

0x5a34,	// (0x0001e2c9) aid_popup2_width_pane

0x7618,	// (0x0001fead) cell_qdial_pane_g4_ParamLimits

0x7618,	// (0x0001fead) cell_qdial_pane_g4

0x8ef4,	// (0x00021789) aid_blid_cardinal_pane_ParamLimits

0x8f04,	// (0x00021799) aid_blid_destination_pane_ParamLimits

0x8f04,	// (0x00021799) aid_blid_destination_pane

0xe6a0,	// (0x00026f35) bg_popup_call_poc_act_pane_ParamLimits

0xe6a0,	// (0x00026f35) bg_popup_call_poc_act_pane

0xe6a0,	// (0x00026f35) bg_popup_call_poc_inact_pane_ParamLimits

0xe6a0,	// (0x00026f35) bg_popup_call_poc_inact_pane

0x15d5,	// (0x00019e6a) bg_popup_call_poc_act_pane_g1

0x15dd,	// (0x00019e72) bg_popup_call_poc_act_pane_g2

0x15e5,	// (0x00019e7a) bg_popup_call_poc_act_pane_g3

0x15a5,	// (0x00019e3a) bg_popup_call_poc_act_pane_g4

0x15ad,	// (0x00019e42) bg_popup_call_poc_act_pane_g5

0x15ed,	// (0x00019e82) bg_popup_call_poc_act_pane_g6

0x15bd,	// (0x00019e52) bg_popup_call_poc_act_pane_g7

0x15f5,	// (0x00019e8a) bg_popup_call_poc_act_pane_g8

0xe445,	// (0x00026cda) main_usb_pane

0x61b9,	// (0x0001ea4e) popup_cale_lunar_info_window

0x8100,	// (0x00020995) im_reading_pane_t1_ParamLimits

0xeae5,	// (0x0002737a) list_im_pane_ParamLimits

0xeaf6,	// (0x0002738b) scroll_pane_cp07_ParamLimits

0xe445,	// (0x00026cda) grid_highlight_pane_cp012

0xe6a0,	// (0x00026f35) mup_scale_pane_ParamLimits

0x0362,	// (0x00018bf7) main_usb_pane_g1_ParamLimits

0x0362,	// (0x00018bf7) main_usb_pane_g1

0x9b20,	// (0x000223b5) main_usb_pane_g2_ParamLimits

0x9b20,	// (0x000223b5) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00027e50) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00027e50) main_usb_pane_g

0x9b2c,	// (0x000223c1) main_usb_pane_t1_ParamLimits

0x9b2c,	// (0x000223c1) main_usb_pane_t1

0x9b3e,	// (0x000223d3) main_usb_pane_t2_ParamLimits

0x9b3e,	// (0x000223d3) main_usb_pane_t2

0x9b50,	// (0x000223e5) main_usb_pane_t3_ParamLimits

0x9b50,	// (0x000223e5) main_usb_pane_t3

0x9b62,	// (0x000223f7) main_usb_pane_t4_ParamLimits

0x9b62,	// (0x000223f7) main_usb_pane_t4

0x9b74,	// (0x00022409) main_usb_pane_t5_ParamLimits

0x9b74,	// (0x00022409) main_usb_pane_t5

0x9b86,	// (0x0002241b) main_usb_pane_t6_ParamLimits

0x9b86,	// (0x0002241b) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00027e55) main_usb_pane_t_ParamLimits

0x8e93,	// (0x00021728) aid_text_placing

0x8e9e,	// (0x00021733) main_location2_pane_t1_ParamLimits

0x8eb4,	// (0x00021749) main_location2_pane_t2_ParamLimits

0x8eca,	// (0x0002175f) main_location2_pane_t3_ParamLimits

0x8ee0,	// (0x00021775) main_location2_pane_t4_ParamLimits

0x8ee0,	// (0x00021775) main_location2_pane_t4

0xf3df,	// (0x00027c74) main_location2_pane_t_ParamLimits

0xe6dc,	// (0x00026f71) find_pinb_pane_g2_ParamLimits

0xe6dc,	// (0x00026f71) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x000279c2) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x000279c2) find_pinb_pane_g

0xe6e8,	// (0x00026f7d) find_pinb_pane_t1_ParamLimits

0xe6fa,	// (0x00026f8f) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x000279c7) find_pinb_pane_t_ParamLimits

0xe445,	// (0x00026cda) main_call3_pane

0x86ae,	// (0x00020f43) cale_month_day_heading_pane_t1_ParamLimits

0x870c,	// (0x00020fa1) cale_month_day_heading_pane_t2_ParamLimits

0x8771,	// (0x00021006) cale_month_day_heading_pane_t3_ParamLimits

0x87d6,	// (0x0002106b) cale_month_day_heading_pane_t4_ParamLimits

0x883b,	// (0x000210d0) cale_month_day_heading_pane_t5_ParamLimits

0x88a8,	// (0x0002113d) cale_month_day_heading_pane_t6_ParamLimits

0x891d,	// (0x000211b2) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00027b4b) cale_month_day_heading_pane_t_ParamLimits

0xed60,	// (0x000275f5) smil_status_volume_pane

0x96de,	// (0x00021f73) postcard_address_pane_ParamLimits

0x96de,	// (0x00021f73) postcard_address_pane

0x96ec,	// (0x00021f81) postcard_message_pane_ParamLimits

0x96ec,	// (0x00021f81) postcard_message_pane

0x9af6,	// (0x0002238b) call2_cli_visual_pane_t1_ParamLimits

0x9af6,	// (0x0002238b) call2_cli_visual_pane_t1

0x9f45,	// (0x000227da) postcard_message_pane_t1_ParamLimits

0x9f45,	// (0x000227da) postcard_message_pane_t1

0x1862,	// (0x0001a0f7) postcard_address_pane_t1_ParamLimits

0x1862,	// (0x0001a0f7) postcard_address_pane_t1

0x9f36,	// (0x000227cb) popup_call3_audio_in_window_ParamLimits

0x9f36,	// (0x000227cb) popup_call3_audio_in_window

0x9e14,	// (0x000226a9) bg_popup_call3_in_pane_ParamLimits

0x9e14,	// (0x000226a9) bg_popup_call3_in_pane

0x9e7c,	// (0x00022711) popup_call3_audio_in_window_g1_ParamLimits

0x9e7c,	// (0x00022711) popup_call3_audio_in_window_g1

0x9e94,	// (0x00022729) popup_call3_audio_in_window_g2_ParamLimits

0x9e94,	// (0x00022729) popup_call3_audio_in_window_g2

0x9eac,	// (0x00022741) popup_call3_audio_in_window_g3_ParamLimits

0x9eac,	// (0x00022741) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00027eb7) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00027eb7) popup_call3_audio_in_window_g

0x9ed4,	// (0x00022769) popup_call3_audio_in_window_t1_ParamLimits

0x9ed4,	// (0x00022769) popup_call3_audio_in_window_t1

0x9efc,	// (0x00022791) popup_call3_audio_in_window_t2_ParamLimits

0x9efc,	// (0x00022791) popup_call3_audio_in_window_t2

0x9f24,	// (0x000227b9) popup_call3_audio_in_window_t3_ParamLimits

0x9f24,	// (0x000227b9) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00027ec0) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00027ec0) popup_call3_audio_in_window_t

0x0291,	// (0x00018b26) bg_popup_call3_rect_pane

0x154d,	// (0x00019de2) bg_popup_call3_rect_pane_g1

0xe866,	// (0x000270fb) bg_popup_call3_rect_pane_g2

0x1555,	// (0x00019dea) bg_popup_call3_rect_pane_g3

0x155d,	// (0x00019df2) bg_popup_call3_rect_pane_g4

0x1565,	// (0x00019dfa) bg_popup_call3_rect_pane_g5

0x156d,	// (0x00019e02) bg_popup_call3_rect_pane_g6

0x1575,	// (0x00019e0a) bg_popup_call3_rect_pane_g7

0x9314,	// (0x00021ba9) mup_visualizer_osc_pane

0x0370,	// (0x00018c05) mup_visualizer_spec_pane

0x9e34,	// (0x000226c9) call3_video_qcif_pane_ParamLimits

0x9e34,	// (0x000226c9) call3_video_qcif_pane

0x9e46,	// (0x000226db) call3_video_qcif_uncrop_pane_ParamLimits

0x9e46,	// (0x000226db) call3_video_qcif_uncrop_pane

0x9e56,	// (0x000226eb) call3_video_subqcif_pane_ParamLimits

0x9e56,	// (0x000226eb) call3_video_subqcif_pane

0x9e6a,	// (0x000226ff) call3_video_subqcif_uncrop_pane_ParamLimits

0x9e6a,	// (0x000226ff) call3_video_subqcif_uncrop_pane

0x9ec4,	// (0x00022759) popup_call3_audio_in_window_g4_ParamLimits

0x9ec4,	// (0x00022759) popup_call3_audio_in_window_g4

0x9e03,	// (0x00022698) mup_spec_half_pane

0x9e0c,	// (0x000226a1) mup_spec_half_pane_cp

0x1800,	// (0x0001a095) mup_osc_middle_pane

0x1809,	// (0x0001a09e) mup_visualizer_osc_pane_g1

0x9de3,	// (0x00022678) mup_spec_bar_pane_ParamLimits

0x9de3,	// (0x00022678) mup_spec_bar_pane

0x17ed,	// (0x0001a082) mup_spec_bar_pane_g1

0x17f7,	// (0x0001a08c) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00027eab) mup_spec_bar_pane_g

0x76ca,	// (0x0001ff5f) aid_cale_week_size_cell_pane_ParamLimits

0x76dd,	// (0x0001ff72) bg_cale_heading_pane_ParamLimits

0xe89a,	// (0x0002712f) bg_cale_pane_cp01_ParamLimits

0x76f9,	// (0x0001ff8e) cale_week_corner_pane_ParamLimits

0x770f,	// (0x0001ffa4) cale_week_day_heading_pane_ParamLimits

0x772b,	// (0x0001ffc0) cale_week_scroll_pane_g1_ParamLimits

0x7744,	// (0x0001ffd9) cale_week_scroll_pane_g2_ParamLimits

0x7755,	// (0x0001ffea) cale_week_scroll_pane_g3_ParamLimits

0x7766,	// (0x0001fffb) cale_week_scroll_pane_g4_ParamLimits

0x7777,	// (0x0002000c) cale_week_scroll_pane_g5_ParamLimits

0x7788,	// (0x0002001d) cale_week_scroll_pane_g6_ParamLimits

0x779b,	// (0x00020030) cale_week_scroll_pane_g7_ParamLimits

0x77ae,	// (0x00020043) cale_week_scroll_pane_g8_ParamLimits

0x77c1,	// (0x00020056) cale_week_scroll_pane_g9_ParamLimits

0x77d2,	// (0x00020067) cale_week_scroll_pane_g10_ParamLimits

0x77e3,	// (0x00020078) cale_week_scroll_pane_g11_ParamLimits

0x77f4,	// (0x00020089) cale_week_scroll_pane_g12_ParamLimits

0x7805,	// (0x0002009a) cale_week_scroll_pane_g13_ParamLimits

0x7816,	// (0x000200ab) cale_week_scroll_pane_g14_ParamLimits

0x782f,	// (0x000200c4) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x00027a53) cale_week_scroll_pane_g_ParamLimits

0x7848,	// (0x000200dd) cale_week_time_pane_ParamLimits

0x785b,	// (0x000200f0) grid_cale_week_pane_ParamLimits

0xe8b3,	// (0x00027148) listscroll_cale_week_pane_t1

0x7878,	// (0x0002010d) scroll_pane_cp08_ParamLimits

0x82f3,	// (0x00020b88) cale_month_corner_pane_ParamLimits

0xed0c,	// (0x000275a1) cale_month_pane_t1

0x865d,	// (0x00020ef2) cale_month_week_pane_ParamLimits

0x0362,	// (0x00018bf7) popup_call_status_window_g1_ParamLimits

0x8d0b,	// (0x000215a0) popup_call_status_window_g2_ParamLimits

0x8d17,	// (0x000215ac) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x00027bfb) popup_call_status_window_g_ParamLimits

0xf0d0,	// (0x00027965) aid_call2_pane

0x95b1,	// (0x00021e46) msg_header_pane_g1

0x96de,	// (0x00021f73) postcard_address2_pane_ParamLimits

0x96de,	// (0x00021f73) postcard_address2_pane

0x96ec,	// (0x00021f81) postcard_message2_pane_ParamLimits

0x96ec,	// (0x00021f81) postcard_message2_pane

0x9d9d,	// (0x00022632) message2_row_pane_ParamLimits

0x9d9d,	// (0x00022632) message2_row_pane

0x17a8,	// (0x0001a03d) address2_row_pane_ParamLimits

0x17a8,	// (0x0001a03d) address2_row_pane

0x17bb,	// (0x0001a050) postcard_message2_row_pane_g1

0x17c3,	// (0x0001a058) postcard_message2_row_pane_t1

0x17bb,	// (0x0001a050) address2_row_pane_g1

0x17c3,	// (0x0001a058) address2_row_pane_t1

0x5f8c,	// (0x0001e821) aid_size_cell_vorec

0xe445,	// (0x00026cda) main_rss_pane

0x9db7,	// (0x0002264c) rss_list_single_pane_ParamLimits

0x9db7,	// (0x0002264c) rss_list_single_pane

0x17d1,	// (0x0001a066) rss_list_single_pane_t1

0x17df,	// (0x0001a074) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00027ea6) rss_list_single_pane_t

0xe445,	// (0x00026cda) main_camera2_pane

0xe445,	// (0x00026cda) main_video2_pane

0x635b,	// (0x0001ebf0) cams_zoom_pane_cp2_ParamLimits

0x635b,	// (0x0001ebf0) cams_zoom_pane_cp2

0x6367,	// (0x0001ebfc) image2_vga_pane_ParamLimits

0x6367,	// (0x0001ebfc) image2_vga_pane

0x6376,	// (0x0001ec0b) main_camera2_pane_g1_ParamLimits

0x6376,	// (0x0001ec0b) main_camera2_pane_g1

0x6382,	// (0x0001ec17) main_camera2_pane_g2_ParamLimits

0x6382,	// (0x0001ec17) main_camera2_pane_g2

0x638e,	// (0x0001ec23) main_camera2_pane_g3_ParamLimits

0x638e,	// (0x0001ec23) main_camera2_pane_g3

0x639a,	// (0x0001ec2f) main_camera2_pane_g4_ParamLimits

0x639a,	// (0x0001ec2f) main_camera2_pane_g4

0x63a6,	// (0x0001ec3b) main_camera2_pane_g5_ParamLimits

0x63a6,	// (0x0001ec3b) main_camera2_pane_g5

0x63b2,	// (0x0001ec47) main_camera2_pane_g6_ParamLimits

0x63b2,	// (0x0001ec47) main_camera2_pane_g6

0x63be,	// (0x0001ec53) main_camera2_pane_g7_ParamLimits

0x63be,	// (0x0001ec53) main_camera2_pane_g7

0x63ca,	// (0x0001ec5f) main_camera2_pane_g8_ParamLimits

0x63ca,	// (0x0001ec5f) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00027ec7) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00027ec7) main_camera2_pane_g

0x63e2,	// (0x0001ec77) main_camera2_pane_t1_ParamLimits

0x63e2,	// (0x0001ec77) main_camera2_pane_t1

0x63f4,	// (0x0001ec89) main_camera2_pane_t2_ParamLimits

0x63f4,	// (0x0001ec89) main_camera2_pane_t2

0x6406,	// (0x0001ec9b) main_camera2_pane_t3_ParamLimits

0x6406,	// (0x0001ec9b) main_camera2_pane_t3

0x6418,	// (0x0001ecad) main_camera2_pane_t4_ParamLimits

0x6418,	// (0x0001ecad) main_camera2_pane_t4

0x0006,

0xf645,	// (0x00027eda) main_camera2_pane_t_ParamLimits

0xf645,	// (0x00027eda) main_camera2_pane_t

0x6475,	// (0x0001ed0a) cams_zoom_pane_cp4_ParamLimits

0x6475,	// (0x0001ed0a) cams_zoom_pane_cp4

0x6485,	// (0x0001ed1a) image2_cif_pane_ParamLimits

0x6485,	// (0x0001ed1a) image2_cif_pane

0x649a,	// (0x0001ed2f) image2_subqcif_pane_ParamLimits

0x649a,	// (0x0001ed2f) image2_subqcif_pane

0x64a9,	// (0x0001ed3e) main_video2_pane_g1_ParamLimits

0x64a9,	// (0x0001ed3e) main_video2_pane_g1

0x64bb,	// (0x0001ed50) main_video2_pane_g2_ParamLimits

0x64bb,	// (0x0001ed50) main_video2_pane_g2

0x64cb,	// (0x0001ed60) main_video2_pane_g3_ParamLimits

0x64cb,	// (0x0001ed60) main_video2_pane_g3

0x64db,	// (0x0001ed70) main_video2_pane_g4_ParamLimits

0x64db,	// (0x0001ed70) main_video2_pane_g4

0x64eb,	// (0x0001ed80) main_video2_pane_g5_ParamLimits

0x64eb,	// (0x0001ed80) main_video2_pane_g5

0x64fb,	// (0x0001ed90) main_video2_pane_g6_ParamLimits

0x64fb,	// (0x0001ed90) main_video2_pane_g6

0x0005,

0xf654,	// (0x00027ee9) main_video2_pane_g_ParamLimits

0xf654,	// (0x00027ee9) main_video2_pane_g

0x650d,	// (0x0001eda2) main_video2_pane_t1_ParamLimits

0x650d,	// (0x0001eda2) main_video2_pane_t1

0x6527,	// (0x0001edbc) main_video2_pane_t2_ParamLimits

0x6527,	// (0x0001edbc) main_video2_pane_t2

0x654d,	// (0x0001ede2) main_video2_pane_t3_ParamLimits

0x654d,	// (0x0001ede2) main_video2_pane_t3

0x0002,

0xf661,	// (0x00027ef6) main_video2_pane_t_ParamLimits

0xf661,	// (0x00027ef6) main_video2_pane_t

0x9c3d,	// (0x000224d2) call_muted_g2

0x0001,

0xf603,	// (0x00027e98) call_muted_g

0xe445,	// (0x00026cda) main_mup2_pane

0x18d2,	// (0x0001a167) main_mup2_pane_g1_ParamLimits

0x18d2,	// (0x0001a167) main_mup2_pane_g1

0x9f60,	// (0x000227f5) main_mup2_pane_g2_ParamLimits

0x9f60,	// (0x000227f5) main_mup2_pane_g2

0x659c,	// (0x0001ee31) main_mup_pane_g13_cp1

0x65a4,	// (0x0001ee39) mup_volume_pane_cp1

0x9f82,	// (0x00022817) main_mup2_pane_g4_ParamLimits

0x9f82,	// (0x00022817) main_mup2_pane_g4

0x9f93,	// (0x00022828) main_mup2_pane_g5_ParamLimits

0x9f93,	// (0x00022828) main_mup2_pane_g5

0x9fa4,	// (0x00022839) main_mup2_pane_g6_ParamLimits

0x9fa4,	// (0x00022839) main_mup2_pane_g6

0x9fb5,	// (0x0002284a) main_mup2_pane_g7_ParamLimits

0x9fb5,	// (0x0002284a) main_mup2_pane_g7

0x0006,

0xf668,	// (0x00027efd) main_mup2_pane_g_ParamLimits

0xf668,	// (0x00027efd) main_mup2_pane_g

0x9fd1,	// (0x00022866) main_mup2_pane_t1_ParamLimits

0x9fd1,	// (0x00022866) main_mup2_pane_t1

0x9fe8,	// (0x0002287d) main_mup2_pane_t2_ParamLimits

0x9fe8,	// (0x0002287d) main_mup2_pane_t2

0x9fff,	// (0x00022894) main_mup2_pane_t3_ParamLimits

0x9fff,	// (0x00022894) main_mup2_pane_t3

0xa016,	// (0x000228ab) main_mup2_pane_t4_ParamLimits

0xa016,	// (0x000228ab) main_mup2_pane_t4

0xa030,	// (0x000228c5) main_mup2_pane_t5_ParamLimits

0xa030,	// (0x000228c5) main_mup2_pane_t5

0xa04a,	// (0x000228df) main_mup2_pane_t6_ParamLimits

0xa04a,	// (0x000228df) main_mup2_pane_t6

0x0005,

0xf677,	// (0x00027f0c) main_mup2_pane_t_ParamLimits

0xf677,	// (0x00027f0c) main_mup2_pane_t

0xa082,	// (0x00022917) mup2_visualizer_pane_ParamLimits

0xa082,	// (0x00022917) mup2_visualizer_pane

0xa0b8,	// (0x0002294d) mup_progress_pane_cp_ParamLimits

0xa0b8,	// (0x0002294d) mup_progress_pane_cp

0x6587,	// (0x0001ee1c) mup_volume_pane_cp_ParamLimits

0x6587,	// (0x0001ee1c) mup_volume_pane_cp

0xa0d1,	// (0x00022966) mup2_visualizer_pane_g1_ParamLimits

0xa0d1,	// (0x00022966) mup2_visualizer_pane_g1

0x18a4,	// (0x0001a139) mup2_visualizer_pane_g2_ParamLimits

0x18a4,	// (0x0001a139) mup2_visualizer_pane_g2

0xa0e6,	// (0x0002297b) mup2_visualizer_pane_g3_ParamLimits

0xa0e6,	// (0x0002297b) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x00027f19) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x00027f19) mup2_visualizer_pane_g

0x0619,	// (0x00018eae) aid_size_cell_fmradio

0x6147,	// (0x0001e9dc) aid_height_parent_landcape

0xeb74,	// (0x00027409) wml_content_pane_cp

0xeb7c,	// (0x00027411) wml_tabs_pane

0xeb85,	// (0x0002741a) popup_wml_miniature_window

0xeb8d,	// (0x00027422) scroll_pane_cp021

0xeba1,	// (0x00027436) wml_content_pane_comp8

0xe445,	// (0x00026cda) bg_popup_sub_pane_cp05

0x18c2,	// (0x0001a157) popup_wml_miniature_window_g1

0x18ca,	// (0x0001a15f) wml_miniature_view_pane

0xa0f2,	// (0x00022987) aid_size_wml_view

0xa0fa,	// (0x0002298f) wml_miniature_view_pane_g1

0xa103,	// (0x00022998) wml_miniature_view_pane_g2

0xa10c,	// (0x000229a1) wml_miniature_view_pane_g3

0xa114,	// (0x000229a9) wml_miniature_view_pane_g4

0xa11c,	// (0x000229b1) wml_miniature_view_pane_g5

0xa124,	// (0x000229b9) wml_miniature_view_pane_g6

0xa12c,	// (0x000229c1) wml_miniature_view_pane_g7

0xa134,	// (0x000229c9) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x00027f20) wml_miniature_view_pane_g

0x18d2,	// (0x0001a167) background_graphic_ParamLimits

0x18d2,	// (0x0001a167) background_graphic

0x18de,	// (0x0001a173) wml_tabs_2_pane

0x18e7,	// (0x0001a17c) wml_tabs_3_pane_ParamLimits

0x18e7,	// (0x0001a17c) wml_tabs_3_pane

0x18f9,	// (0x0001a18e) wml_tabs_4_pane_ParamLimits

0x18f9,	// (0x0001a18e) wml_tabs_4_pane

0x190f,	// (0x0001a1a4) wml_tabs_5_pane_ParamLimits

0x190f,	// (0x0001a1a4) wml_tabs_5_pane

0x1929,	// (0x0001a1be) wml_tabs_pane_g2_ParamLimits

0x1929,	// (0x0001a1be) wml_tabs_pane_g2

0x193d,	// (0x0001a1d2) wml_tabs_pane_g3_ParamLimits

0x193d,	// (0x0001a1d2) wml_tabs_pane_g3

0xa13c,	// (0x000229d1) wml_tabs_2_active_pane_ParamLimits

0xa13c,	// (0x000229d1) wml_tabs_2_active_pane

0xa14e,	// (0x000229e3) wml_tabs_2_passive_pane_ParamLimits

0xa14e,	// (0x000229e3) wml_tabs_2_passive_pane

0xa160,	// (0x000229f5) wml_tabs_3_active_pane_cp_ParamLimits

0xa160,	// (0x000229f5) wml_tabs_3_active_pane_cp

0xa173,	// (0x00022a08) wml_tabs_3_passive_pane_ParamLimits

0xa173,	// (0x00022a08) wml_tabs_3_passive_pane

0xa184,	// (0x00022a19) wml_tabs_3_passive_pane_cp_ParamLimits

0xa184,	// (0x00022a19) wml_tabs_3_passive_pane_cp

0xa199,	// (0x00022a2e) tabs_4_active_pane

0xa1a1,	// (0x00022a36) tabs_4_passive_pane

0xa1a9,	// (0x00022a3e) tabs_4_passive_pane_cp

0xa1b1,	// (0x00022a46) tabs_4_passive_pane_cp2

0x9b18,	// (0x000223ad) aid_height_text

0x92dd,	// (0x00021b72) mup_volume_cont_pane_ParamLimits

0x92dd,	// (0x00021b72) mup_volume_cont_pane

0x73df,	// (0x0001fc74) aid_size_cell_pinb

0x73e9,	// (0x0001fc7e) aid_size_list_pinb

0xa0a1,	// (0x00022936) mup2_volume_cont_pane_ParamLimits

0xa0a1,	// (0x00022936) mup2_volume_cont_pane

0x6573,	// (0x0001ee08) mup2_volume_cont_pane_g1_ParamLimits

0x6573,	// (0x0001ee08) mup2_volume_cont_pane_g1

0x5a40,	// (0x0001e2d5) aid_size_cell_touch_ParamLimits

0x5a40,	// (0x0001e2d5) aid_size_cell_touch

0x5cc2,	// (0x0001e557) touch_pane_ParamLimits

0x5cc2,	// (0x0001e557) touch_pane

0x5cb8,	// (0x0001e54d) main_rss2_pane

0x1993,	// (0x0001a228) listscroll_rss2_pane

0x199c,	// (0x0001a231) rss2_navigation_pane

0x19a4,	// (0x0001a239) list_rss2_pane

0x0157,	// (0x000189ec) scroll_pane_cp22

0x19ac,	// (0x0001a241) rss2_navigation_pane_g1

0x19b5,	// (0x0001a24a) rss2_navigation_pane_g2

0x19bd,	// (0x0001a252) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00027f31) rss2_navigation_pane_g

0x19c5,	// (0x0001a25a) rss2_navigation_pane_t1

0xa1bb,	// (0x00022a50) rss2_list_single_pane_ParamLimits

0xa1bb,	// (0x00022a50) rss2_list_single_pane

0x19d3,	// (0x0001a268) rss2_list_single_pane_t2

0x19e1,	// (0x0001a276) rss2_list_single_pane_t3_ParamLimits

0x19e1,	// (0x0001a276) rss2_list_single_pane_t3

0x19fe,	// (0x0001a293) rss2_list_single_pane_t4

0x8af5,	// (0x0002138a) smil_status_pane_g1

0x615e,	// (0x0001e9f3) main_image2_pane_ParamLimits

0x615e,	// (0x0001e9f3) main_image2_pane

0x63d6,	// (0x0001ec6b) main_camera2_pane_g9_ParamLimits

0x63d6,	// (0x0001ec6b) main_camera2_pane_g9

0x642a,	// (0x0001ecbf) main_camera2_pane_t5_ParamLimits

0x642a,	// (0x0001ecbf) main_camera2_pane_t5

0x643c,	// (0x0001ecd1) main_camera2_pane_t6_ParamLimits

0x643c,	// (0x0001ecd1) main_camera2_pane_t6

0xa1de,	// (0x00022a73) main_image2_pane_g1_ParamLimits

0xa1de,	// (0x00022a73) main_image2_pane_g1

0x98b5,	// (0x0002214a) smil2_video_pane_ParamLimits

0x98b5,	// (0x0002214a) smil2_video_pane

0x5a74,	// (0x0001e309) aid_zoom_text_primary_cp

0x5c69,	// (0x0001e4fe) popup_preview_fixed_window

0xeadd,	// (0x00027372) im_reading_pane_g1

0x6320,	// (0x0001ebb5) cams2_bc_adjust_pane_cp_ParamLimits

0x6320,	// (0x0001ebb5) cams2_bc_adjust_pane_cp

0x6467,	// (0x0001ecfc) cams2_bc_adjust_pane_ParamLimits

0x6467,	// (0x0001ecfc) cams2_bc_adjust_pane

0x3190,	// (0x0001ba25) cams2_bc_adjust_pane_g1

0x65ac,	// (0x0001ee41) cams2_slider_pane

0x65b5,	// (0x0001ee4a) cams2_slider_pane_g1

0x65be,	// (0x0001ee53) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x00027f38) cams2_slider_pane_g

0x5d33,	// (0x0001e5c8) calc_display_pane_ParamLimits

0x5d51,	// (0x0001e5e6) calc_paper_pane_ParamLimits

0x5d6d,	// (0x0001e602) grid_calc_pane_ParamLimits

0x60a6,	// (0x0001e93b) popup_clock_digital_window_t1_ParamLimits

0x05b6,	// (0x00018e4b) main_image_pane_t1

0x5d19,	// (0x0001e5ae) aid_size_cell_calc_ParamLimits

0x5d19,	// (0x0001e5ae) aid_size_cell_calc

0x618f,	// (0x0001ea24) popup_blid_sat_info2_window_ParamLimits

0x618f,	// (0x0001ea24) popup_blid_sat_info2_window

0x1a48,	// (0x0001a2dd) aid_size_cell_blid

0x1a50,	// (0x0001a2e5) bg_popup_window_pane_cp07

0x1a73,	// (0x0001a308) grid_popup_blid_pane

0x1a7d,	// (0x0001a312) heading_pane_cp05_ParamLimits

0x1a7d,	// (0x0001a312) heading_pane_cp05

0x1b47,	// (0x0001a3dc) cell_popup_blid_pane_ParamLimits

0x1b47,	// (0x0001a3dc) cell_popup_blid_pane

0x1b71,	// (0x0001a406) cell_popup_blid_pane_g1

0x1b79,	// (0x0001a40e) cell_popup_blid_pane_t1

0xa067,	// (0x000228fc) mup2_indicator_pane_ParamLimits

0xa067,	// (0x000228fc) mup2_indicator_pane

0x0291,	// (0x00018b26) mup2_visualizer_osc_pane

0x18b0,	// (0x0001a145) mup2_visualizer_spec_pane_ParamLimits

0x18b0,	// (0x0001a145) mup2_visualizer_spec_pane

0xa1ea,	// (0x00022a7f) mup2_spec_half_pane

0xa1f3,	// (0x00022a88) mup2_spec_half_pane_cp

0xa1fb,	// (0x00022a90) mup2_spec_bar_pane_ParamLimits

0xa1fb,	// (0x00022a90) mup2_spec_bar_pane

0x17ed,	// (0x0001a082) mup2_spec_bar_pane_g1

0x17f7,	// (0x0001a08c) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00027eab) mup2_spec_bar_pane_g

0xa21a,	// (0x00022aaf) mup2_osc_middle_pane

0x1809,	// (0x0001a09e) mup2_visualizer_osc_pane_g1

0xe00f,	// (0x000268a4) popup_number_entry_window_t1_ParamLimits

0xe022,	// (0x000268b7) popup_number_entry_window_t2_ParamLimits

0xe034,	// (0x000268c9) popup_number_entry_window_t3_ParamLimits

0xe046,	// (0x000268db) popup_number_entry_window_t5_ParamLimits

0xe046,	// (0x000268db) popup_number_entry_window_t5

0xf0d8,	// (0x0002796d) popup_number_entry_window_t_ParamLimits

0xe07b,	// (0x00026910) text_title_cp2_ParamLimits

0x60e5,	// (0x0001e97a) aid_hotspot_pointer_text2_pane

0x613b,	// (0x0001e9d0) main_viewer_pane_g9_ParamLimits

0x613b,	// (0x0001e9d0) main_viewer_pane_g9

0xed0c,	// (0x000275a1) cale_month_pane_t1_ParamLimits

0xed73,	// (0x00027608) bg_cale_pane_ParamLimits

0xed8b,	// (0x00027620) list_cale_pane_ParamLimits

0xe8b3,	// (0x00027148) listscroll_cale_day_pane_t1

0xed9c,	// (0x00027631) scroll_pane_cp09_ParamLimits

0x931c,	// (0x00021bb1) main_mup_eq_pane_t1_ParamLimits

0x931c,	// (0x00021bb1) main_mup_eq_pane_t1

0x9338,	// (0x00021bcd) main_mup_eq_pane_t2_ParamLimits

0x9338,	// (0x00021bcd) main_mup_eq_pane_t2

0x9354,	// (0x00021be9) main_mup_eq_pane_t3_ParamLimits

0x9354,	// (0x00021be9) main_mup_eq_pane_t3

0x936e,	// (0x00021c03) main_mup_eq_pane_t4_ParamLimits

0x936e,	// (0x00021c03) main_mup_eq_pane_t4

0x9388,	// (0x00021c1d) main_mup_eq_pane_t5_ParamLimits

0x9388,	// (0x00021c1d) main_mup_eq_pane_t5

0x93a2,	// (0x00021c37) main_mup_eq_pane_t6_ParamLimits

0x93a2,	// (0x00021c37) main_mup_eq_pane_t6

0x93b8,	// (0x00021c4d) main_mup_eq_pane_t7_ParamLimits

0x93b8,	// (0x00021c4d) main_mup_eq_pane_t7

0x93ce,	// (0x00021c63) main_mup_eq_pane_t8_ParamLimits

0x93ce,	// (0x00021c63) main_mup_eq_pane_t8

0x93e4,	// (0x00021c79) main_mup_eq_pane_t9_ParamLimits

0x93e4,	// (0x00021c79) main_mup_eq_pane_t9

0x9400,	// (0x00021c95) main_mup_eq_pane_t10_ParamLimits

0x9400,	// (0x00021c95) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x00027cfa) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x00027cfa) main_mup_eq_pane_t

0x94c5,	// (0x00021d5a) mup_equalizer_pane_cp5_ParamLimits

0x94dd,	// (0x00021d72) mup_equalizer_pane_cp6_ParamLimits

0x94f5,	// (0x00021d8a) mup_equalizer_pane_cp7_ParamLimits

0x5cb8,	// (0x0001e54d) main_gallery_pane

0x1812,	// (0x0001a0a7) smil2_volume_pane

0x182d,	// (0x0001a0c2) smil_status_volume_pane_g1_ParamLimits

0x181a,	// (0x0001a0af) smil_status_volume_pane_g2_ParamLimits

0x62f0,	// (0x0001eb85) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00027eb0) smil_status_volume_pane_g_ParamLimits

0x1a50,	// (0x0001a2e5) bg_popup_window_pane_cp07_ParamLimits

0x1a5e,	// (0x0001a2f3) blid_firmament_pane

0xa223,	// (0x00022ab8) aid_size_cell_gallery_ParamLimits

0xa223,	// (0x00022ab8) aid_size_cell_gallery

0xa231,	// (0x00022ac6) grid_gallery_pane_ParamLimits

0xa231,	// (0x00022ac6) grid_gallery_pane

0xa241,	// (0x00022ad6) cell_gallery_pane_ParamLimits

0xa241,	// (0x00022ad6) cell_gallery_pane

0x1b87,	// (0x0001a41c) bg_cell_gallery_focus_pane_ParamLimits

0x1b87,	// (0x0001a41c) bg_cell_gallery_focus_pane

0x1b99,	// (0x0001a42e) cell_gallery_pane_g1_ParamLimits

0x1b99,	// (0x0001a42e) cell_gallery_pane_g1

0xa28c,	// (0x00022b21) cell_gallery_pane_g2_ParamLimits

0xa28c,	// (0x00022b21) cell_gallery_pane_g2

0xa299,	// (0x00022b2e) cell_gallery_pane_g3_ParamLimits

0xa299,	// (0x00022b2e) cell_gallery_pane_g3

0x1ba5,	// (0x0001a43a) cell_gallery_pane_g4_ParamLimits

0x1ba5,	// (0x0001a43a) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00027f5e) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00027f5e) cell_gallery_pane_g

0x1bb1,	// (0x0001a446) bg_cell_gallery_focus_pane_g1

0x1bb9,	// (0x0001a44e) bg_cell_gallery_focus_pane_g2

0x1bc1,	// (0x0001a456) bg_cell_gallery_focus_pane_g3

0x1bc9,	// (0x0001a45e) bg_cell_gallery_focus_pane_g4

0x1bd1,	// (0x0001a466) bg_cell_gallery_focus_pane_g5

0x1bd9,	// (0x0001a46e) bg_cell_gallery_focus_pane_g6

0x1be1,	// (0x0001a476) bg_cell_gallery_focus_pane_g7

0x1be9,	// (0x0001a47e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x00027f67) bg_cell_gallery_focus_pane_g

0x1bf1,	// (0x0001a486) aid_firma_cardinal

0x1c05,	// (0x0001a49a) blid_firmament_pane_t1

0x1c1c,	// (0x0001a4b1) blid_firmament_pane_t2

0x1c33,	// (0x0001a4c8) blid_firmament_pane_t3

0x1c4a,	// (0x0001a4df) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x00027f78) blid_firmament_pane_t

0x1c61,	// (0x0001a4f6) blid_sat_info_pane

0x1c71,	// (0x0001a506) blid_sat_info_pane_g1

0x1c71,	// (0x0001a506) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00027f81) blid_sat_info_pane_g

0x1c7b,	// (0x0001a510) blid_sat_info_pane_t1

0x1c89,	// (0x0001a51e) smil2_volume_content_pane

0x1c92,	// (0x0001a527) smil2_volume_pane_g1

0x1c9a,	// (0x0001a52f) smil2_volume_content_pane_g1

0x1ca3,	// (0x0001a538) smil2_volume_content_pane_g2

0x1cac,	// (0x0001a541) smil2_volume_content_pane_g3

0x1cb5,	// (0x0001a54a) smil2_volume_content_pane_g4

0x1cbe,	// (0x0001a553) smil2_volume_content_pane_g5

0x1cc7,	// (0x0001a55c) smil2_volume_content_pane_g6

0x1cd0,	// (0x0001a565) smil2_volume_content_pane_g7

0x1cd9,	// (0x0001a56e) smil2_volume_content_pane_g8

0x1ce2,	// (0x0001a577) smil2_volume_content_pane_g9

0x1ceb,	// (0x0001a580) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x00027f86) smil2_volume_content_pane_g

0x78d4,	// (0x00020169) cale_week_day_heading_pane_t1_ParamLimits

0x7901,	// (0x00020196) cale_week_day_heading_pane_t2_ParamLimits

0x792e,	// (0x000201c3) cale_week_day_heading_pane_t3_ParamLimits

0x795b,	// (0x000201f0) cale_week_day_heading_pane_t4_ParamLimits

0x7988,	// (0x0002021d) cale_week_day_heading_pane_t5_ParamLimits

0x79b5,	// (0x0002024a) cale_week_day_heading_pane_t6_ParamLimits

0x79e2,	// (0x00020277) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00027a72) cale_week_day_heading_pane_t_ParamLimits

0xe8c5,	// (0x0002715a) bg_cale_side_pane_ParamLimits

0x5ec8,	// (0x0001e75d) cale_week_time_pane_t1_ParamLimits

0x5ee0,	// (0x0001e775) cale_week_time_pane_t2_ParamLimits

0x5ef8,	// (0x0001e78d) cale_week_time_pane_t3_ParamLimits

0x5f10,	// (0x0001e7a5) cale_week_time_pane_t4_ParamLimits

0x5f28,	// (0x0001e7bd) cale_week_time_pane_t5_ParamLimits

0x5f40,	// (0x0001e7d5) cale_week_time_pane_t6_ParamLimits

0x5f58,	// (0x0001e7ed) cale_week_time_pane_t7_ParamLimits

0x5f70,	// (0x0001e805) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00027a81) cale_week_time_pane_t_ParamLimits

0x7a0f,	// (0x000202a4) cell_cale_week_pane_g2_ParamLimits

0xe8c5,	// (0x0002715a) bg_cale_side_pane_cp01_ParamLimits

0x8992,	// (0x00021227) cale_month_week_pane_t1_ParamLimits

0x89a9,	// (0x0002123e) cale_month_week_pane_t2_ParamLimits

0x89c0,	// (0x00021255) cale_month_week_pane_t3_ParamLimits

0x89d7,	// (0x0002126c) cale_month_week_pane_t4_ParamLimits

0x89ee,	// (0x00021283) cale_month_week_pane_t5_ParamLimits

0x8a05,	// (0x0002129a) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00027b5a) cale_month_week_pane_t_ParamLimits

0x600a,	// (0x0001e89f) cell_cale_month_pane_g1_ParamLimits

0x5cb8,	// (0x0001e54d) main_cale_event_viewer_pane

0xdfe5,	// (0x0002687a) listscroll_cale_event_viewer_pane

0x1cf4,	// (0x0001a589) list_cale_ev_pane

0x1cfc,	// (0x0001a591) scroll_pane_cp023

0xa2a6,	// (0x00022b3b) field_cale_ev_pane_ParamLimits

0xa2a6,	// (0x00022b3b) field_cale_ev_pane

0x1d08,	// (0x0001a59d) field_cale_ev_content_pane_ParamLimits

0x1d08,	// (0x0001a59d) field_cale_ev_content_pane

0x1d14,	// (0x0001a5a9) field_cale_ev_pane_g1_ParamLimits

0x1d14,	// (0x0001a5a9) field_cale_ev_pane_g1

0x1d20,	// (0x0001a5b5) field_cale_ev_pane_g2_ParamLimits

0x1d20,	// (0x0001a5b5) field_cale_ev_pane_g2

0x1d38,	// (0x0001a5cd) field_cale_ev_pane_g3_ParamLimits

0x1d38,	// (0x0001a5cd) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00027f9b) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00027f9b) field_cale_ev_pane_g

0x1d50,	// (0x0001a5e5) field_cale_ev_pane_t1_ParamLimits

0x1d50,	// (0x0001a5e5) field_cale_ev_pane_t1

0xa2ca,	// (0x00022b5f) field_cale_ev_content_pane_t1_ParamLimits

0xa2ca,	// (0x00022b5f) field_cale_ev_content_pane_t1

0x0424,	// (0x00018cb9) bg_button_pane_cp01

0xe773,	// (0x00027008) listscroll_cale_week_pane_ParamLimits

0x76c0,	// (0x0001ff55) popup_toolbar_window_cp01

0xe8b3,	// (0x00027148) listscroll_cale_week_pane_t1_ParamLimits

0xe773,	// (0x00027008) listscroll_cale_day_pane_ParamLimits

0x76c0,	// (0x0001ff55) popup_toolbar_window_cp02

0xe8b3,	// (0x00027148) listscroll_cale_day_pane_t1_ParamLimits

0xe773,	// (0x00027008) main_cale_month_pane_ParamLimits

0x62ae,	// (0x0001eb43) popup_toolbar_window_cp03_ParamLimits

0x62ae,	// (0x0001eb43) popup_toolbar_window_cp03

0x97c5,	// (0x0002205a) main_image_pane_g2_ParamLimits

0x97c5,	// (0x0002205a) main_image_pane_g2

0x97d1,	// (0x00022066) main_image_pane_g3_ParamLimits

0x97d1,	// (0x00022066) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00027d8c) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00027d8c) main_image_pane_g

0x05b6,	// (0x00018e4b) main_image_pane_t1_ParamLimits

0x97dd,	// (0x00022072) main_image_pane_t2_ParamLimits

0x97dd,	// (0x00022072) main_image_pane_t2

0x97ef,	// (0x00022084) main_image_pane_t3_ParamLimits

0x97ef,	// (0x00022084) main_image_pane_t3

0x9801,	// (0x00022096) main_image_pane_t4_ParamLimits

0x9801,	// (0x00022096) main_image_pane_t4

0x0003,

0xf4fe,	// (0x00027d93) main_image_pane_t_ParamLimits

0xf4fe,	// (0x00027d93) main_image_pane_t

0x9813,	// (0x000220a8) popup_image_details_window_cp01

0x981d,	// (0x000220b2) popup_toobar_trans_pane_cp01_ParamLimits

0x981d,	// (0x000220b2) popup_toobar_trans_pane_cp01

0x61f0,	// (0x0001ea85) popup_image_details_window_ParamLimits

0x61f0,	// (0x0001ea85) popup_image_details_window

0x61fe,	// (0x0001ea93) popup_image_focus_window

0x6312,	// (0x0001eba7) camera2_autofocus_pane_ParamLimits

0x6312,	// (0x0001eba7) camera2_autofocus_pane

0xdfe5,	// (0x0002687a) bg_popup_sub_pane_cp06

0x1d67,	// (0x0001a5fc) popup_image_focus_window_g1

0x1d6f,	// (0x0001a604) popup_image_focus_window_g2

0x1d77,	// (0x0001a60c) popup_image_focus_window_g3

0x1d7f,	// (0x0001a614) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00027fa2) popup_image_focus_window_g

0x1d87,	// (0x0001a61c) popup_image_focus_window_t1

0x1d95,	// (0x0001a62a) popup_image_focus_window_t2

0x1da5,	// (0x0001a63a) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00027fab) popup_image_focus_window_t

0x1db3,	// (0x0001a648) camera2_autofocus_pane_g1

0xe0e4,	// (0x00026979) bg_tb_trans_pane_cp01

0x1dc1,	// (0x0001a656) popup_image_details_window_g1

0x1dd4,	// (0x0001a669) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00027fbd) popup_image_details_window_g

0x1dfd,	// (0x0001a692) popup_image_details_window_t1

0x1e0f,	// (0x0001a6a4) popup_image_details_window_t2

0x1e28,	// (0x0001a6bd) popup_image_details_window_t3

0x1e3c,	// (0x0001a6d1) popup_image_details_window_t4

0x1e57,	// (0x0001a6ec) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x00027fc4) popup_image_details_window_t

0xe75f,	// (0x00026ff4) bg_calc_paper_pane_ParamLimits

0x5cb8,	// (0x0001e54d) grid_highlight_pane_cp013

0x5d99,	// (0x0001e62e) list_calc_pane_ParamLimits

0x5dab,	// (0x0001e640) scroll_pane_cp024

0xe773,	// (0x00027008) bg_calc_display_pane_ParamLimits

0x5db3,	// (0x0001e648) calc_display_pane_t1_ParamLimits

0x5dc8,	// (0x0001e65d) calc_display_pane_t2_ParamLimits

0x5ddd,	// (0x0001e672) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000279f4) calc_display_pane_t_ParamLimits

0x5e48,	// (0x0001e6dd) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00027a11) cell_calc_pane_g

0x5e51,	// (0x0001e6e6) cell_calc_pane_t1

0xe7d2,	// (0x00027067) grid_highlight_pane_cp02_ParamLimits

0xe7e8,	// (0x0002707d) toolbar_button_pane_cp01_ParamLimits

0xe7e8,	// (0x0002707d) toolbar_button_pane_cp01

0x05fb,	// (0x00018e90) temp_image_control_pane_ParamLimits

0x05fb,	// (0x00018e90) temp_image_control_pane

0x615e,	// (0x0001e9f3) main_mp3_pane

0x1e71,	// (0x0001a706) temp_image_control_pane_g1_ParamLimits

0x1e71,	// (0x0001a706) temp_image_control_pane_g1

0x1e7f,	// (0x0001a714) temp_image_control_pane_g2_ParamLimits

0x1e7f,	// (0x0001a714) temp_image_control_pane_g2

0x1e91,	// (0x0001a726) temp_image_control_pane_g3_ParamLimits

0x1e91,	// (0x0001a726) temp_image_control_pane_g3

0xa315,	// (0x00022baa) temp_image_control_pane_g4_ParamLimits

0xa315,	// (0x00022baa) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x00027fcf) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x00027fcf) temp_image_control_pane_g

0x1e71,	// (0x0001a706) main_mp3_pane_g1

0xa326,	// (0x00022bbb) main_mp3_pane_g2

0x0007,

0xf743,	// (0x00027fd8) main_mp3_pane_g

0x1ed4,	// (0x0001a769) main_mp3_pane_t1

0xe92a,	// (0x000271bf) main_camera_pane_g8_ParamLimits

0xe92a,	// (0x000271bf) main_camera_pane_g8

0x7c3d,	// (0x000204d2) main_video_pane_g7_ParamLimits

0x7c3d,	// (0x000204d2) main_video_pane_g7

0x6455,	// (0x0001ecea) main_camera2_pane_t7_ParamLimits

0x6455,	// (0x0001ecea) main_camera2_pane_t7

0xeb34,	// (0x000273c9) scroll_pane_cp025_ParamLimits

0xeb34,	// (0x000273c9) scroll_pane_cp025

0xeb48,	// (0x000273dd) scroll_pane_cp026_ParamLimits

0xeb48,	// (0x000273dd) scroll_pane_cp026

0xeb57,	// (0x000273ec) wml_content_pane_ParamLimits

0x5cb8,	// (0x0001e54d) main_touch_calib_pane

0xa3ca,	// (0x00022c5f) main_touch_calib_pane_g1

0xa3d6,	// (0x00022c6b) main_touch_calib_pane_g2

0xa3e2,	// (0x00022c77) main_touch_calib_pane_g3

0xa3ee,	// (0x00022c83) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x00027ff6) main_touch_calib_pane_g

0xa3fa,	// (0x00022c8f) main_touch_calib_pane_t1

0xa411,	// (0x00022ca6) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x00027fff) main_touch_calib_pane_t

0x01d2,	// (0x00018a67) mup_progress_pane_cp02

0x01f1,	// (0x00018a86) navi_pane_g1

0x0253,	// (0x00018ae8) navi_pane_mp_t3

0x615e,	// (0x0001e9f3) main_mp3_pane_ParamLimits

0x9d53,	// (0x000225e8) navi_pane_ParamLimits

0x1e71,	// (0x0001a706) main_mp3_pane_g1_ParamLimits

0xa326,	// (0x00022bbb) main_mp3_pane_g2_ParamLimits

0xa332,	// (0x00022bc7) main_mp3_pane_g3_ParamLimits

0xa332,	// (0x00022bc7) main_mp3_pane_g3

0xa33e,	// (0x00022bd3) main_mp3_pane_g4_ParamLimits

0xa33e,	// (0x00022bd3) main_mp3_pane_g4

0x1ea1,	// (0x0001a736) main_mp3_pane_g5_ParamLimits

0x1ea1,	// (0x0001a736) main_mp3_pane_g5

0x1eaf,	// (0x0001a744) main_mp3_pane_g6_ParamLimits

0x1eaf,	// (0x0001a744) main_mp3_pane_g6

0x1ebc,	// (0x0001a751) main_mp3_pane_g7_ParamLimits

0x1ebc,	// (0x0001a751) main_mp3_pane_g7

0x1ec8,	// (0x0001a75d) main_mp3_pane_g8_ParamLimits

0x1ec8,	// (0x0001a75d) main_mp3_pane_g8

0xf743,	// (0x00027fd8) main_mp3_pane_g_ParamLimits

0xa34a,	// (0x00022bdf) main_mp3_pane_t2

0xa35a,	// (0x00022bef) main_mp3_pane_t3

0x1ee2,	// (0x0001a777) main_mp3_pane_t4

0x1ef0,	// (0x0001a785) main_mp3_pane_t5

0x0005,

0xf754,	// (0x00027fe9) main_mp3_pane_t

0x1efe,	// (0x0001a793) mup_progress_pane_cp01

0x5a74,	// (0x0001e309) aid_zoom_text_secondary2

0x1cf4,	// (0x0001a589) list_cale_ev2_pane

0x1cfc,	// (0x0001a591) scroll_pane_cp023_ParamLimits

0xa46c,	// (0x00022d01) field_cale_ev2_pane_ParamLimits

0xa46c,	// (0x00022d01) field_cale_ev2_pane

0xa487,	// (0x00022d1c) field_cale_ev2_pane_g1_ParamLimits

0xa487,	// (0x00022d1c) field_cale_ev2_pane_g1

0xa493,	// (0x00022d28) field_cale_ev2_pane_g2_ParamLimits

0xa493,	// (0x00022d28) field_cale_ev2_pane_g2

0xa4ab,	// (0x00022d40) field_cale_ev2_pane_g3_ParamLimits

0xa4ab,	// (0x00022d40) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0002800a) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0002800a) field_cale_ev2_pane_g

0xa4c3,	// (0x00022d58) field_cale_ev2_pane_t1_ParamLimits

0xa4c3,	// (0x00022d58) field_cale_ev2_pane_t1

0xa4da,	// (0x00022d6f) field_cale_ev2_pane_t2_ParamLimits

0xa4da,	// (0x00022d6f) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x00028013) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x00028013) field_cale_ev2_pane_t

0x96a4,	// (0x00021f39) main_postcard_pane_g5_ParamLimits

0x96a4,	// (0x00021f39) main_postcard_pane_g5

0x96b2,	// (0x00021f47) main_postcard_pane_g6_ParamLimits

0x96b2,	// (0x00021f47) main_postcard_pane_g6

0x7a7b,	// (0x00020310) camera2_autofocus_pane_cp_ParamLimits

0x7a7b,	// (0x00020310) camera2_autofocus_pane_cp

0x615e,	// (0x0001e9f3) main_mup3_pane

0xa50f,	// (0x00022da4) main_mup3_pane_g1_ParamLimits

0xa50f,	// (0x00022da4) main_mup3_pane_g1

0xa530,	// (0x00022dc5) main_mup3_pane_g2_ParamLimits

0xa530,	// (0x00022dc5) main_mup3_pane_g2

0xa5ac,	// (0x00022e41) main_mup3_pane_g3_ParamLimits

0xa5ac,	// (0x00022e41) main_mup3_pane_g3

0xa5f5,	// (0x00022e8a) main_mup3_pane_g4_ParamLimits

0xa5f5,	// (0x00022e8a) main_mup3_pane_g4

0xa63e,	// (0x00022ed3) main_mup3_pane_g5_ParamLimits

0xa63e,	// (0x00022ed3) main_mup3_pane_g5

0xa687,	// (0x00022f1c) main_mup3_pane_g6_ParamLimits

0xa687,	// (0x00022f1c) main_mup3_pane_g6

0x1f12,	// (0x0001a7a7) main_mup3_pane_g7_ParamLimits

0x1f12,	// (0x0001a7a7) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x00028023) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x00028023) main_mup3_pane_g

0xa701,	// (0x00022f96) main_mup3_pane_t1_ParamLimits

0xa701,	// (0x00022f96) main_mup3_pane_t1

0xa772,	// (0x00023007) main_mup3_pane_t2_ParamLimits

0xa772,	// (0x00023007) main_mup3_pane_t2

0xa83b,	// (0x000230d0) main_mup3_pane_t4_ParamLimits

0xa83b,	// (0x000230d0) main_mup3_pane_t4

0xa88f,	// (0x00023124) main_mup3_pane_t5_ParamLimits

0xa88f,	// (0x00023124) main_mup3_pane_t5

0xa947,	// (0x000231dc) main_mup3_pane_t6_ParamLimits

0xa947,	// (0x000231dc) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x00028034) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x00028034) main_mup3_pane_t

0xa9f3,	// (0x00023288) mup3_progress_pane_ParamLimits

0xa9f3,	// (0x00023288) mup3_progress_pane

0xaa75,	// (0x0002330a) popup_mup3_control_window_ParamLimits

0xaa75,	// (0x0002330a) popup_mup3_control_window

0x1f20,	// (0x0001a7b5) popup_mup3_text_window

0xaa92,	// (0x00023327) mup3_progress_pane_t1

0xaab1,	// (0x00023346) mup3_progress_pane_t2

0x1f28,	// (0x0001a7bd) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00028041) mup3_progress_pane_t

0x1f45,	// (0x0001a7da) mup_progress_pane_cp03

0xdfe5,	// (0x0002687a) bg_tb_trans_pane_cp04

0xaad0,	// (0x00023365) mup3_volume_pane

0xaad8,	// (0x0002336d) popup_mup3_control_window_g1

0x2805,	// (0x0001b09a) mup3_volume_pane_g1

0x280e,	// (0x0001b0a3) mup3_volume_pane_g2

0x2817,	// (0x0001b0ac) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x00028048) mup3_volume_pane_g

0xdfe5,	// (0x0002687a) bg_tb_trans_pane_cp03

0x1f55,	// (0x0001a7ea) popup_mup3_text_window_g1

0x1f5d,	// (0x0001a7f2) popup_mup3_text_window_t1

0xe7bb,	// (0x00027050) list_calc_item_pane_g1_ParamLimits

0x197a,	// (0x0001a20f) mup_volume_pane_cp_g1

0xa42a,	// (0x00022cbf) main_touch_calib_pane_t3

0xa440,	// (0x00022cd5) main_touch_calib_pane_t4

0xa456,	// (0x00022ceb) main_touch_calib_pane_t5

0x5a2c,	// (0x0001e2c1) aid_cell_size_toolbar2

0x5a34,	// (0x0001e2c9) aid_popup3_width_pane

0x5a74,	// (0x0001e309) aid_zoom_text_msg_primary

0x5ff4,	// (0x0001e889) vorec_t7

0xe77f,	// (0x00027014) bg_calc_paper_pane_g1_ParamLimits

0xe78b,	// (0x00027020) bg_calc_paper_pane_g2_ParamLimits

0xe797,	// (0x0002702c) bg_calc_paper_pane_g3_ParamLimits

0xe7a3,	// (0x00027038) bg_calc_paper_pane_g4_ParamLimits

0xe7af,	// (0x00027044) bg_calc_paper_pane_g5_ParamLimits

0x7591,	// (0x0001fe26) bg_calc_paper_pane_g6_ParamLimits

0x75a2,	// (0x0001fe37) bg_calc_paper_pane_g7_ParamLimits

0x75b3,	// (0x0001fe48) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000279fb) bg_calc_paper_pane_g_ParamLimits

0x75c6,	// (0x0001fe5b) calc_bg_paper_pane_g9_ParamLimits

0x7b6c,	// (0x00020401) image_qvga_pane_ParamLimits

0x7b6c,	// (0x00020401) image_qvga_pane

0xe6a0,	// (0x00026f35) bg_popup_sub_pane_cp04_ParamLimits

0x0532,	// (0x00018dc7) popup_mup_playback_window_g1_ParamLimits

0x053e,	// (0x00018dd3) popup_mup_playback_window_t1_ParamLimits

0x0553,	// (0x00018de8) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00027d87) popup_mup_playback_window_t_ParamLimits

0x9f71,	// (0x00022806) main_mup2_pane_g3_ParamLimits

0x9f71,	// (0x00022806) main_mup2_pane_g3

0x7e71,	// (0x00020706) popup_toolbar_window_cp04

0x094e,	// (0x000191e3) popup_call2_audio_second_window_g3_ParamLimits

0x094e,	// (0x000191e3) popup_call2_audio_second_window_g3

0x0d58,	// (0x000195ed) popup_call2_audio_first_window_g4_ParamLimits

0x0d58,	// (0x000195ed) popup_call2_audio_first_window_g4

0x13d7,	// (0x00019c6c) popup_call2_audio_in_window_g4_ParamLimits

0x13d7,	// (0x00019c6c) popup_call2_audio_in_window_g4

0x97b8,	// (0x0002204d) aid_area_sk_bg_cut_ParamLimits

0x97b8,	// (0x0002204d) aid_area_sk_bg_cut

0x0568,	// (0x00018dfd) aid_area_sk_bg_cut_2_ParamLimits

0x0568,	// (0x00018dfd) aid_area_sk_bg_cut_2

0xa27c,	// (0x00022b11) aid_placing_details_win

0xa284,	// (0x00022b19) aid_placing_details_win_2

0x1db3,	// (0x0001a648) camera2_autofocus_pane_g1_ParamLimits

0x5c5a,	// (0x0001e4ef) popup_fixed_preview_cale_window_ParamLimits

0x5c5a,	// (0x0001e4ef) popup_fixed_preview_cale_window

0x02bd,	// (0x00018b52) navi_slider_pane_g3

0x02b4,	// (0x00018b49) navi_slider_pane_g4

0x02ab,	// (0x00018b40) navi_slider_pane_g5

0x02bd,	// (0x00018b52) navi_slider_pane_g6

0x60cc,	// (0x0001e961) navi_slider_pane_g7

0x03e9,	// (0x00018c7e) mup_scale_pane_g3

0x03f2,	// (0x00018c87) mup_scale_pane_g4

0x03fb,	// (0x00018c90) mup_scale_pane_g5

0x950d,	// (0x00021da2) mup_scale_pane_g6

0x9516,	// (0x00021dab) mup_scale_pane_g7

0x02bd,	// (0x00018b52) cams2_slider_pane_g3

0x1a2f,	// (0x0001a2c4) cams2_slider_pane_g4

0x65c7,	// (0x0001ee5c) cams2_slider_pane_g5

0x02bd,	// (0x00018b52) cams2_slider_pane_g6

0x65cf,	// (0x0001ee64) cams2_slider_pane_g7

0x1c71,	// (0x0001a506) camera2_autofocus_pane_cp_g1

0x1f6b,	// (0x0001a800) bg_popup_preview_window_pane_cp02_ParamLimits

0x1f6b,	// (0x0001a800) bg_popup_preview_window_pane_cp02

0x1f77,	// (0x0001a80c) list_fp_cale_pane_ParamLimits

0x1f77,	// (0x0001a80c) list_fp_cale_pane

0x1f83,	// (0x0001a818) popup_fixed_preview_cale_window_t1_ParamLimits

0x1f83,	// (0x0001a818) popup_fixed_preview_cale_window_t1

0xaae1,	// (0x00023376) popup_fixed_preview_cale_window_t2_ParamLimits

0xaae1,	// (0x00023376) popup_fixed_preview_cale_window_t2

0xaaf6,	// (0x0002338b) popup_fixed_preview_cale_window_t3_ParamLimits

0xaaf6,	// (0x0002338b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0002804f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0002804f) popup_fixed_preview_cale_window_t

0xab0b,	// (0x000233a0) list_single_fp_cale_pane_ParamLimits

0xab0b,	// (0x000233a0) list_single_fp_cale_pane

0x1fa1,	// (0x0001a836) list_single_fp_cale_pane_g1_ParamLimits

0x1fa1,	// (0x0001a836) list_single_fp_cale_pane_g1

0x1fad,	// (0x0001a842) list_single_fp_cale_pane_g2_ParamLimits

0x1fad,	// (0x0001a842) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x00028056) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x00028056) list_single_fp_cale_pane_g

0x1fc6,	// (0x0001a85b) list_single_fp_cale_pane_t1_ParamLimits

0x1fc6,	// (0x0001a85b) list_single_fp_cale_pane_t1

0x1fd8,	// (0x0001a86d) list_single_fp_cale_pane_t2_ParamLimits

0x1fd8,	// (0x0001a86d) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0002805d) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0002805d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5cb8,	// (0x0001e54d) main_dialer_pane

0xab18,	// (0x000233ad) aid_cell_size_keypad

0xab22,	// (0x000233b7) dialer_ne_pane

0xab2c,	// (0x000233c1) grid_dialer_command_1_pane

0xab34,	// (0x000233c9) grid_dialer_command_2_pane

0xab3c,	// (0x000233d1) grid_dialer_keypad_pane

0xab50,	// (0x000233e5) bg_popup_call_pane_cp06_ParamLimits

0xab50,	// (0x000233e5) bg_popup_call_pane_cp06

0xab5c,	// (0x000233f1) dialer_ne_clear_pane_ParamLimits

0xab5c,	// (0x000233f1) dialer_ne_clear_pane

0x200b,	// (0x0001a8a0) dialer_ne_pane_g1

0x2013,	// (0x0001a8a8) dialer_ne_pane_t1_ParamLimits

0x2013,	// (0x0001a8a8) dialer_ne_pane_t1

0xab68,	// (0x000233fd) dialer_ne_pane_t2_ParamLimits

0xab68,	// (0x000233fd) dialer_ne_pane_t2

0xab85,	// (0x0002341a) dialer_ne_pane_t3_ParamLimits

0xab85,	// (0x0002341a) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00028062) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00028062) dialer_ne_pane_t

0xaba9,	// (0x0002343e) dialer_ne_pane_t3_copy1_ParamLimits

0xaba9,	// (0x0002343e) dialer_ne_pane_t3_copy1

0xabcd,	// (0x00023462) cell_dialer_keypad_pane_ParamLimits

0xabcd,	// (0x00023462) cell_dialer_keypad_pane

0xabe2,	// (0x00023477) cell_dialer_command_1_pane_ParamLimits

0xabe2,	// (0x00023477) cell_dialer_command_1_pane

0xabf8,	// (0x0002348d) cell_dialer_command_2_pane_ParamLimits

0xabf8,	// (0x0002348d) cell_dialer_command_2_pane

0x2025,	// (0x0001a8ba) bg_button_pane_cp02_ParamLimits

0x2025,	// (0x0001a8ba) bg_button_pane_cp02

0xac07,	// (0x0002349c) cell_dialer_keypad_pane_g1_ParamLimits

0xac07,	// (0x0002349c) cell_dialer_keypad_pane_g1

0x2025,	// (0x0001a8ba) bg_button_pane_cp03_ParamLimits

0x2025,	// (0x0001a8ba) bg_button_pane_cp03

0xac1c,	// (0x000234b1) cell_dialer_command_1_pane_g1_ParamLimits

0xac1c,	// (0x000234b1) cell_dialer_command_1_pane_g1

0x2031,	// (0x0001a8c6) bg_button_pane_cp04

0xac30,	// (0x000234c5) cell_dialer_command_2_pane_g1

0x0291,	// (0x00018b26) bg_button_pane_cp06

0x2039,	// (0x0001a8ce) dialer_ne_clear_pane_g1

0x8feb,	// (0x00021880) navi_pane_g2

0x9019,	// (0x000218ae) navi_pane_g3

0x0002,

0xf3f5,	// (0x00027c8a) navi_pane_g

0x9044,	// (0x000218d9) navi_pane_mv_g2

0x906b,	// (0x00021900) navi_pane_mv_g5

0x9073,	// (0x00021908) navi_pane_mv_t1

0xe773,	// (0x00027008) main_clock2_pane

0xac62,	// (0x000234f7) main_clock2_list_pane_ParamLimits

0xac62,	// (0x000234f7) main_clock2_list_pane

0xac8c,	// (0x00023521) main_clock2_pane_t1_ParamLimits

0xac8c,	// (0x00023521) main_clock2_pane_t1

0xacae,	// (0x00023543) main_clock2_pane_t2_ParamLimits

0xacae,	// (0x00023543) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00028069) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00028069) main_clock2_pane_t

0xad0b,	// (0x000235a0) popup_clock_analogue_window_cp03_ParamLimits

0xad0b,	// (0x000235a0) popup_clock_analogue_window_cp03

0xad2b,	// (0x000235c0) popup_clock_digital_window_cp02_ParamLimits

0xad2b,	// (0x000235c0) popup_clock_digital_window_cp02

0xad9c,	// (0x00023631) main_clock2_list_single_pane_ParamLimits

0xad9c,	// (0x00023631) main_clock2_list_single_pane

0x0291,	// (0x00018b26) list_highlight_pane_cp05

0x2041,	// (0x0001a8d6) main_clock2_list_single_pane_t1

0x7e71,	// (0x00020706) popup_toolbar_window_cp04_ParamLimits

0xa2e5,	// (0x00022b7a) camera2_autofocus_pane_g2_ParamLimits

0xa2e5,	// (0x00022b7a) camera2_autofocus_pane_g2

0xa2f1,	// (0x00022b86) camera2_autofocus_pane_g3_ParamLimits

0xa2f1,	// (0x00022b86) camera2_autofocus_pane_g3

0xa2fd,	// (0x00022b92) camera2_autofocus_pane_g4_ParamLimits

0xa2fd,	// (0x00022b92) camera2_autofocus_pane_g4

0xa309,	// (0x00022b9e) camera2_autofocus_pane_g5_ParamLimits

0xa309,	// (0x00022b9e) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00027fb2) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00027fb2) camera2_autofocus_pane_g

0xa4ef,	// (0x00022d84) camera2_autofocus_pane_cp_g2

0xa4f7,	// (0x00022d8c) camera2_autofocus_pane_cp_g3

0xa4ff,	// (0x00022d94) camera2_autofocus_pane_cp_g4

0xa507,	// (0x00022d9c) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x00028018) camera2_autofocus_pane_cp_g

0xab48,	// (0x000233dd) popup_dialer_spcha_window

0xdfe5,	// (0x0002687a) bg_popup_sub_pane_cp07

0x204f,	// (0x0001a8e4) list_spcha_pane

0x2057,	// (0x0001a8ec) list_single_spcha_pane_ParamLimits

0x2057,	// (0x0001a8ec) list_single_spcha_pane

0xdfe5,	// (0x0002687a) list_highlight_pane_cp06

0x2068,	// (0x0001a8fd) list_single_spcha_pane_t1

0x1181,	// (0x00019a16) popup_call2_audio_out_window_g4_ParamLimits

0x1181,	// (0x00019a16) popup_call2_audio_out_window_g4

0x5cb8,	// (0x0001e54d) main_imed2_pane

0x6208,	// (0x0001ea9d) popup_imed_adjust2_window

0x621b,	// (0x0001eab0) popup_imed_trans_window_ParamLimits

0x621b,	// (0x0001eab0) popup_imed_trans_window

0x1aa9,	// (0x0001a33e) popup_blid_sat_info2_window_t1

0x1ab7,	// (0x0001a34c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x00027f47) popup_blid_sat_info2_window_t

0xadce,	// (0x00023663) aid_size_cell_colour_35

0xade8,	// (0x0002367d) aid_size_cell_colour_112

0xadff,	// (0x00023694) aid_size_cell_effect

0xe0e4,	// (0x00026979) bg_tb_trans_pane_cp02

0xeec6,	// (0x0002775b) heading_imed_pane

0xae19,	// (0x000236ae) listscroll_imed_pane

0x2076,	// (0x0001a90b) heading_imed_pane_g1

0x207e,	// (0x0001a913) heading_imed_pane_t1

0x208c,	// (0x0001a921) grid_imed_colour_35_pane_ParamLimits

0x208c,	// (0x0001a921) grid_imed_colour_35_pane

0xae25,	// (0x000236ba) grid_imed_effect_pane

0x20a8,	// (0x0001a93d) list_imed_aspect_pane

0xae35,	// (0x000236ca) scroll_pane_cp027_ParamLimits

0xae35,	// (0x000236ca) scroll_pane_cp027

0xae41,	// (0x000236d6) cell_imed_effect_pane_ParamLimits

0xae41,	// (0x000236d6) cell_imed_effect_pane

0x20b0,	// (0x0001a945) cell_imed_colour_pane_ParamLimits

0x20b0,	// (0x0001a945) cell_imed_colour_pane

0x20fa,	// (0x0001a98f) cell_imed_colour_pane_g1_ParamLimits

0x20fa,	// (0x0001a98f) cell_imed_colour_pane_g1

0x210b,	// (0x0001a9a0) hgihlgiht_grid_pane_cp016_ParamLimits

0x210b,	// (0x0001a9a0) hgihlgiht_grid_pane_cp016

0xae5d,	// (0x000236f2) cell_imed_effect_pane_g1

0xae65,	// (0x000236fa) grid_highlight_pane_cp017

0x211c,	// (0x0001a9b1) list_imed_single_pane_ParamLimits

0x211c,	// (0x0001a9b1) list_imed_single_pane

0xdfe5,	// (0x0002687a) list_highlight_pane_cp07

0x2130,	// (0x0001a9c5) list_imed_aspect_pane_comp1_t1

0x173c,	// (0x00019fd1) bg_tb_trans_pane_cp05

0x2152,	// (0x0001a9e7) popup_imed_adjust2_window_g1

0x2179,	// (0x0001aa0e) popup_imed_adjust2_window_t1

0x2191,	// (0x0001aa26) slider_imed_adjust_pane

0x21a5,	// (0x0001aa3a) slider_imed_adjust_pane_g1

0x21b5,	// (0x0001aa4a) slider_imed_adjust_pane_g2

0x21c5,	// (0x0001aa5a) slider_imed_adjust_pane_g3

0x21d6,	// (0x0001aa6b) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x00028086) slider_imed_adjust_pane_g

0xae6e,	// (0x00023703) aid_size_cell_clipart2

0xae7a,	// (0x0002370f) grid_imed_clipart_pane

0x21e7,	// (0x0001aa7c) scroll_pane_cp031

0xae84,	// (0x00023719) cell_imed_clipart_pane_ParamLimits

0xae84,	// (0x00023719) cell_imed_clipart_pane

0xaea2,	// (0x00023737) cell_imed_clipart_pane_g1

0xdfe5,	// (0x0002687a) grid_highlight_pane_cp014

0xac6e,	// (0x00023503) main_clock2_pane_g1_ParamLimits

0xac6e,	// (0x00023503) main_clock2_pane_g1

0xad47,	// (0x000235dc) aid_call2_pane_cp10

0xad59,	// (0x000235ee) aid_call_pane_cp10

0x01c6,	// (0x00018a5b) popup_clock_analogue_window_cp10_g1

0x01c6,	// (0x00018a5b) popup_clock_analogue_window_cp10_g2

0xad6b,	// (0x00023600) popup_clock_analogue_window_cp10_g3

0xad6b,	// (0x00023600) popup_clock_analogue_window_cp10_g4

0x01c6,	// (0x00018a5b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x00028074) popup_clock_analogue_window_cp10_g

0xad7d,	// (0x00023612) popup_clock_analogue_window_cp10_t1

0x65d8,	// (0x0001ee6d) clock_digital_number_pane_cp10_ParamLimits

0x65d8,	// (0x0001ee6d) clock_digital_number_pane_cp10

0x65f0,	// (0x0001ee85) clock_digital_number_pane_cp11_ParamLimits

0x65f0,	// (0x0001ee85) clock_digital_number_pane_cp11

0x6608,	// (0x0001ee9d) clock_digital_number_pane_cp12_ParamLimits

0x6608,	// (0x0001ee9d) clock_digital_number_pane_cp12

0x6620,	// (0x0001eeb5) clock_digital_number_pane_cp13_ParamLimits

0x6620,	// (0x0001eeb5) clock_digital_number_pane_cp13

0x6638,	// (0x0001eecd) clock_digital_separator_pane_cp10_ParamLimits

0x6638,	// (0x0001eecd) clock_digital_separator_pane_cp10

0xadae,	// (0x00023643) popup_clock_digital_window_cp02_t1_ParamLimits

0xadae,	// (0x00023643) popup_clock_digital_window_cp02_t1

0xe698,	// (0x00026f2d) clock_digital_number_pane_cp10_g1

0xe698,	// (0x00026f2d) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0002808f) clock_digital_number_pane_cp10_g

0xe698,	// (0x00026f2d) clock_digital_separator_pane_cp10_g1

0xe698,	// (0x00026f2d) clock_digital_separator_pane_g2_cp10

0x0261,	// (0x00018af6) navi_pane_vded_g4

0x026a,	// (0x00018aff) navi_pane_vded_g5

0x0273,	// (0x00018b08) navi_pane_vded_t1

0x5cb8,	// (0x0001e54d) main_vded_pane

0xaeab,	// (0x00023740) main_vded_pane_g1

0xaeb7,	// (0x0002374c) main_vded_pane_g2

0xaec1,	// (0x00023756) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x00028094) main_vded_pane_g

0xaecb,	// (0x00023760) main_vded_pane_t1

0xaed9,	// (0x0002376e) main_vded_pane_t2

0x0001,

0xf806,	// (0x0002809b) main_vded_pane_t

0xaee7,	// (0x0002377c) vded_slider_pane

0xaef1,	// (0x00023786) vded_video_pane

0x21ef,	// (0x0001aa84) vded_video_pane_g1

0xaefd,	// (0x00023792) vded_video_pane_g2

0x1c71,	// (0x0001a506) vded_video_pane_g3

0x0002,

0xf80b,	// (0x000280a0) vded_video_pane_g

0x21f9,	// (0x0001aa8e) vded_slider_pane_g1

0x197a,	// (0x0001a20f) vded_slider_pane_g2

0x2202,	// (0x0001aa97) vded_slider_pane_g3

0x220b,	// (0x0001aaa0) vded_slider_pane_g4

0x2214,	// (0x0001aaa9) vded_slider_pane_g5

0x0004,

0xf812,	// (0x000280a7) vded_slider_pane_g

0xaa69,	// (0x000232fe) mup3_rocker_pane_ParamLimits

0xaa69,	// (0x000232fe) mup3_rocker_pane

0xaf06,	// (0x0002379b) mup3_control_keys_pane_g1

0xaf0e,	// (0x000237a3) mup3_control_keys_pane_g2

0xaf16,	// (0x000237ab) mup3_control_keys_pane_g3

0xaf1e,	// (0x000237b3) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x000280b2) mup3_control_keys_pane_g

0x5c82,	// (0x0001e517) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5c82,	// (0x0001e517) popup_toolbar2_fixed_window_cp01

0xaa85,	// (0x0002331a) popup_toolbar2_fixed_window_cp02_ParamLimits

0xaa85,	// (0x0002331a) popup_toolbar2_fixed_window_cp02

0x0ac0,	// (0x00019355) popup_call2_audio_second_window_t4_ParamLimits

0x0ac0,	// (0x00019355) popup_call2_audio_second_window_t4

0x0fee,	// (0x00019883) popup_call2_audio_first_window_t6_ParamLimits

0x0fee,	// (0x00019883) popup_call2_audio_first_window_t6

0x1284,	// (0x00019b19) popup_call2_audio_out_window_t6_ParamLimits

0x1284,	// (0x00019b19) popup_call2_audio_out_window_t6

0x5cb8,	// (0x0001e54d) main_vitu_pane

0xaf2e,	// (0x000237c3) aid_size_cell_itu_ParamLimits

0xaf2e,	// (0x000237c3) aid_size_cell_itu

0xaf3c,	// (0x000237d1) bg_popup_window_pane_cp08_ParamLimits

0xaf3c,	// (0x000237d1) bg_popup_window_pane_cp08

0xaf4a,	// (0x000237df) field_vitu_entry_pane_ParamLimits

0xaf4a,	// (0x000237df) field_vitu_entry_pane

0xaf59,	// (0x000237ee) grid_vitu_function_pane_ParamLimits

0xaf59,	// (0x000237ee) grid_vitu_function_pane

0xaf69,	// (0x000237fe) grid_vitu_itu_pane_ParamLimits

0xaf69,	// (0x000237fe) grid_vitu_itu_pane

0xaf77,	// (0x0002380c) cell_vitu_itu_pane_ParamLimits

0xaf77,	// (0x0002380c) cell_vitu_itu_pane

0xaf8e,	// (0x00023823) cell_vitu_function_pane_ParamLimits

0xaf8e,	// (0x00023823) cell_vitu_function_pane

0xe0e4,	// (0x00026979) bg_popup_sub_pane_cp08_ParamLimits

0xe0e4,	// (0x00026979) bg_popup_sub_pane_cp08

0xafa2,	// (0x00023837) field_vitu_entry_pane_t1_ParamLimits

0xafa2,	// (0x00023837) field_vitu_entry_pane_t1

0x2235,	// (0x0001aaca) field_vitu_entry_pane_t2_ParamLimits

0x2235,	// (0x0001aaca) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x000280c0) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x000280c0) field_vitu_entry_pane_t

0x2252,	// (0x0001aae7) bg_button_pane_cp05_ParamLimits

0x2252,	// (0x0001aae7) bg_button_pane_cp05

0xafbb,	// (0x00023850) cell_vitu_itu_pane_g1

0xafd3,	// (0x00023868) cell_vitu_itu_pane_t1_ParamLimits

0xafd3,	// (0x00023868) cell_vitu_itu_pane_t1

0xafe5,	// (0x0002387a) cell_vitu_itu_pane_t2_ParamLimits

0xafe5,	// (0x0002387a) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x000280c5) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x000280c5) cell_vitu_itu_pane_t

0x2260,	// (0x0001aaf5) bg_button_pane_cp07

0xb028,	// (0x000238bd) cell_vitu_function_pane_g1

0x5d91,	// (0x0001e626) main_calc_pane_g1

0x5a68,	// (0x0001e2fd) aid_visual_content_pane

0x5cb8,	// (0x0001e54d) main_vradio_pane

0xb031,	// (0x000238c6) main_vradio_pane_g1_ParamLimits

0xb031,	// (0x000238c6) main_vradio_pane_g1

0x226a,	// (0x0001aaff) main_vradio_pane_g2_ParamLimits

0x226a,	// (0x0001aaff) main_vradio_pane_g2

0x0001,

0xf837,	// (0x000280cc) main_vradio_pane_g_ParamLimits

0xf837,	// (0x000280cc) main_vradio_pane_g

0xb03f,	// (0x000238d4) main_vradio_pane_t1_ParamLimits

0xb03f,	// (0x000238d4) main_vradio_pane_t1

0xb051,	// (0x000238e6) main_vradio_pane_t2_ParamLimits

0xb051,	// (0x000238e6) main_vradio_pane_t2

0x2277,	// (0x0001ab0c) main_vradio_pane_t3_ParamLimits

0x2277,	// (0x0001ab0c) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x000280d1) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x000280d1) main_vradio_pane_t

0xb063,	// (0x000238f8) vradio_rocker_control_pane_ParamLimits

0xb063,	// (0x000238f8) vradio_rocker_control_pane

0xb06f,	// (0x00023904) vradio_station_info_pane_ParamLimits

0xb06f,	// (0x00023904) vradio_station_info_pane

0x228b,	// (0x0001ab20) vradio_frequency_info_pane_ParamLimits

0x228b,	// (0x0001ab20) vradio_frequency_info_pane

0x1c71,	// (0x0001a506) vradio_station_info_pane_g1

0x229a,	// (0x0001ab2f) vradio_station_info_pane_t1_ParamLimits

0x229a,	// (0x0001ab2f) vradio_station_info_pane_t1

0x22bc,	// (0x0001ab51) vradio_station_info_pane_t2_ParamLimits

0x22bc,	// (0x0001ab51) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x000280d8) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x000280d8) vradio_station_info_pane_t

0x22ce,	// (0x0001ab63) vradio_tuning_pane

0x22d6,	// (0x0001ab6b) vradio_rocker_control_pane_g1

0x22de,	// (0x0001ab73) vradio_rocker_control_pane_g2

0x22e6,	// (0x0001ab7b) vradio_rocker_control_pane_g3

0x22ee,	// (0x0001ab83) vradio_rocker_control_pane_g4

0x22f6,	// (0x0001ab8b) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x000280dd) vradio_rocker_control_pane_g

0xb07c,	// (0x00023911) vradio_frequency_info_pane_g1

0x22fe,	// (0x0001ab93) vradio_frequency_info_pane_t1_ParamLimits

0x22fe,	// (0x0001ab93) vradio_frequency_info_pane_t1

0xb086,	// (0x0002391b) vradio_tuning_pane_g1

0xb091,	// (0x00023926) vradio_tuning_pane_t1

0x5a84,	// (0x0001e319) area_side_right_pane_ParamLimits

0x5a84,	// (0x0001e319) area_side_right_pane

0x1703,	// (0x00019f98) status_small_pane_g1

0x170b,	// (0x00019fa0) status_small_pane_g2

0x1714,	// (0x00019fa9) status_small_pane_g3

0x171d,	// (0x00019fb2) status_small_pane_g4

0x0003,

0xf608,	// (0x00027e9d) status_small_pane_g

0x1726,	// (0x00019fbb) status_small_pane_t1

0x5cb8,	// (0x0001e54d) main_video3_pane

0x2312,	// (0x0001aba7) cams_zoom_vslider_pane

0x231a,	// (0x0001abaf) image3_wide_pane_ParamLimits

0x231a,	// (0x0001abaf) image3_wide_pane

0x2334,	// (0x0001abc9) image3_wide_small_pane

0x2340,	// (0x0001abd5) main_video3_pane_g1_ParamLimits

0x2340,	// (0x0001abd5) main_video3_pane_g1

0x235c,	// (0x0001abf1) main_video3_pane_g2_ParamLimits

0x235c,	// (0x0001abf1) main_video3_pane_g2

0x0001,

0xf853,	// (0x000280e8) main_video3_pane_g_ParamLimits

0xf853,	// (0x000280e8) main_video3_pane_g

0x2378,	// (0x0001ac0d) main_video3_pane_t1_ParamLimits

0x2378,	// (0x0001ac0d) main_video3_pane_t1

0x23a3,	// (0x0001ac38) main_video3_pane_t2_ParamLimits

0x23a3,	// (0x0001ac38) main_video3_pane_t2

0x23d0,	// (0x0001ac65) main_video3_pane_t3_ParamLimits

0x23d0,	// (0x0001ac65) main_video3_pane_t3

0x0002,

0xf858,	// (0x000280ed) main_video3_pane_t_ParamLimits

0xf858,	// (0x000280ed) main_video3_pane_t

0x23fd,	// (0x0001ac92) cams_zoom_vslider_pane_g1

0x2406,	// (0x0001ac9b) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x000280f4) cams_zoom_vslider_pane_g

0x240e,	// (0x0001aca3) small_slider_vertical_pane

0x1c71,	// (0x0001a506) small_slider_vertical_pane_g1

0x1c71,	// (0x0001a506) small_slider_vertical_pane_g2

0x2416,	// (0x0001acab) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x000280f9) small_slider_vertical_pane_g

0x5cb8,	// (0x0001e54d) main_hwr_training_pane

0x241f,	// (0x0001acb4) hwr_training_instruct_pane_ParamLimits

0x241f,	// (0x0001acb4) hwr_training_instruct_pane

0xb0a0,	// (0x00023935) hwr_training_navi_pane_ParamLimits

0xb0a0,	// (0x00023935) hwr_training_navi_pane

0xb0ba,	// (0x0002394f) hwr_training_write_pane_ParamLimits

0xb0ba,	// (0x0002394f) hwr_training_write_pane

0xdfe5,	// (0x0002687a) bg_frame_shadow_pane

0x2456,	// (0x0001aceb) hwr_training_write_pane_g1

0x245e,	// (0x0001acf3) hwr_training_write_pane_g2

0x2466,	// (0x0001acfb) hwr_training_write_pane_g3

0x246e,	// (0x0001ad03) hwr_training_write_pane_g4

0x2476,	// (0x0001ad0b) hwr_training_write_pane_g5

0x247e,	// (0x0001ad13) hwr_training_write_pane_g6

0x2486,	// (0x0001ad1b) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x00028100) hwr_training_write_pane_g

0x6650,	// (0x0001eee5) hwr_training_navi_pane_g1_ParamLimits

0x6650,	// (0x0001eee5) hwr_training_navi_pane_g1

0x6662,	// (0x0001eef7) hwr_training_navi_pane_g2_ParamLimits

0x6662,	// (0x0001eef7) hwr_training_navi_pane_g2

0x6674,	// (0x0001ef09) hwr_training_navi_pane_g3_ParamLimits

0x6674,	// (0x0001ef09) hwr_training_navi_pane_g3

0x6684,	// (0x0001ef19) hwr_training_navi_pane_g4_ParamLimits

0x6684,	// (0x0001ef19) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0002810f) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0002810f) hwr_training_navi_pane_g

0x669e,	// (0x0001ef33) hwr_training_navi_pane_t1

0xb0f2,	// (0x00023987) list_single_hwr_training_instruct_pane_ParamLimits

0xb0f2,	// (0x00023987) list_single_hwr_training_instruct_pane

0x24dd,	// (0x0001ad72) list_single_hwr_training_instruct_pane_t1

0x1bb1,	// (0x0001a446) bg_frame_shadow_pane_g1

0x24ec,	// (0x0001ad81) bg_frame_shadow_pane_g2

0x24f4,	// (0x0001ad89) bg_frame_shadow_pane_g3

0x24fc,	// (0x0001ad91) bg_frame_shadow_pane_g4

0x2504,	// (0x0001ad99) bg_frame_shadow_pane_g5

0x250c,	// (0x0001ada1) bg_frame_shadow_pane_g6

0x2514,	// (0x0001ada9) bg_frame_shadow_pane_g7

0xe83e,	// (0x000270d3) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0002811a) bg_frame_shadow_pane_g

0x5cb8,	// (0x0001e54d) main_video_tele_dialer_pane

0x66ac,	// (0x0001ef41) aid_size_cell_video_keypad_ParamLimits

0x66ac,	// (0x0001ef41) aid_size_cell_video_keypad

0x66bc,	// (0x0001ef51) grid_video_dialer_keypad_pane_ParamLimits

0x66bc,	// (0x0001ef51) grid_video_dialer_keypad_pane

0x66ee,	// (0x0001ef83) video_down_pane_cp_ParamLimits

0x66ee,	// (0x0001ef83) video_down_pane_cp

0x66fa,	// (0x0001ef8f) cell_video_dialer_keypad_pane_ParamLimits

0x66fa,	// (0x0001ef8f) cell_video_dialer_keypad_pane

0x251c,	// (0x0001adb1) bg_button_pane_cp08_ParamLimits

0x251c,	// (0x0001adb1) bg_button_pane_cp08

0xb127,	// (0x000239bc) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb127,	// (0x000239bc) cell_video_dialer_keypad_pane_g1

0xaa5d,	// (0x000232f2) mup3_rocker2_pane_ParamLimits

0xaa5d,	// (0x000232f2) mup3_rocker2_pane

0x1c71,	// (0x0001a506) mup3_rocker2_pane_g1

0x616c,	// (0x0001ea01) main_dialer2_pane

0x5cb8,	// (0x0001e54d) main_mp4_pane

0x6719,	// (0x0001efae) main_mp4_pane_g1_ParamLimits

0x6719,	// (0x0001efae) main_mp4_pane_g1

0x6727,	// (0x0001efbc) main_mp4_pane_g2_ParamLimits

0x6727,	// (0x0001efbc) main_mp4_pane_g2

0x6735,	// (0x0001efca) main_mp4_pane_g3_ParamLimits

0x6735,	// (0x0001efca) main_mp4_pane_g3

0x6788,	// (0x0001f01d) main_mp4_pane_g4_ParamLimits

0x6788,	// (0x0001f01d) main_mp4_pane_g4

0x67b0,	// (0x0001f045) main_mp4_pane_g5_ParamLimits

0x67b0,	// (0x0001f045) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0002813a) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0002813a) main_mp4_pane_g

0x6800,	// (0x0001f095) main_mp4_pane_t1_ParamLimits

0x6800,	// (0x0001f095) main_mp4_pane_t1

0x685c,	// (0x0001f0f1) main_mp4_pane_t2_ParamLimits

0x685c,	// (0x0001f0f1) main_mp4_pane_t2

0x2664,	// (0x0001aef9) main_mp4_pane_t3_ParamLimits

0x2664,	// (0x0001aef9) main_mp4_pane_t3

0x68ae,	// (0x0001f143) main_mp4_pane_t4_ParamLimits

0x68ae,	// (0x0001f143) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00028147) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00028147) main_mp4_pane_t

0x68ee,	// (0x0001f183) mp4_progress_pane_ParamLimits

0x68ee,	// (0x0001f183) mp4_progress_pane

0x6938,	// (0x0001f1cd) mp4_rocker_pane_ParamLimits

0x6938,	// (0x0001f1cd) mp4_rocker_pane

0x2738,	// (0x0001afcd) mp4_progress_pane_t1

0x2751,	// (0x0001afe6) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00028150) mp4_progress_pane_t

0x276a,	// (0x0001afff) mup_progress_pane_cp04

0x3216,	// (0x0001baab) mp4_rocker_pane_g1

0x695a,	// (0x0001f1ef) aid_cell_size_keypad2_ParamLimits

0x695a,	// (0x0001f1ef) aid_cell_size_keypad2

0x696a,	// (0x0001f1ff) dialer2_ne_pane_ParamLimits

0x696a,	// (0x0001f1ff) dialer2_ne_pane

0x6976,	// (0x0001f20b) grid_dialer2_keypad_pane_ParamLimits

0x6976,	// (0x0001f20b) grid_dialer2_keypad_pane

0x2820,	// (0x0001b0b5) bg_popup_call_pane_cp07_ParamLimits

0x2820,	// (0x0001b0b5) bg_popup_call_pane_cp07

0xb15e,	// (0x000239f3) dialer2_ne_pane_t1_ParamLimits

0xb15e,	// (0x000239f3) dialer2_ne_pane_t1

0x6984,	// (0x0001f219) cell_dialer2_keypad_pane_ParamLimits

0x6984,	// (0x0001f219) cell_dialer2_keypad_pane

0x2788,	// (0x0001b01d) bg_button_pane_pane_cp04_ParamLimits

0x2788,	// (0x0001b01d) bg_button_pane_pane_cp04

0xb183,	// (0x00023a18) cell_dialer2_keypad_pane_g1_ParamLimits

0xb183,	// (0x00023a18) cell_dialer2_keypad_pane_g1

0x7d43,	// (0x000205d8) aid_placing_vt_set_content_ParamLimits

0x7d43,	// (0x000205d8) aid_placing_vt_set_content

0x7d6b,	// (0x00020600) aid_placing_vt_set_title_ParamLimits

0x7d6b,	// (0x00020600) aid_placing_vt_set_title

0x5cb8,	// (0x0001e54d) main_image3_pane

0x69cd,	// (0x0001f262) area_side_right_pane_cp01_ParamLimits

0x69cd,	// (0x0001f262) area_side_right_pane_cp01

0x69fc,	// (0x0001f291) main_image3_pane_g1_ParamLimits

0x69fc,	// (0x0001f291) main_image3_pane_g1

0x6a0a,	// (0x0001f29f) main_image3_pane_g2_ParamLimits

0x6a0a,	// (0x0001f29f) main_image3_pane_g2

0x6a23,	// (0x0001f2b8) main_image3_pane_g3_ParamLimits

0x6a23,	// (0x0001f2b8) main_image3_pane_g3

0x6a3c,	// (0x0001f2d1) main_image3_pane_g4_ParamLimits

0x6a3c,	// (0x0001f2d1) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0002815f) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0002815f) main_image3_pane_g

0x6a55,	// (0x0001f2ea) main_image3_pane_t1_ParamLimits

0x6a55,	// (0x0001f2ea) main_image3_pane_t1

0x6a7a,	// (0x0001f30f) main_image3_pane_t2_ParamLimits

0x6a7a,	// (0x0001f30f) main_image3_pane_t2

0x6a99,	// (0x0001f32e) main_image3_pane_t3_ParamLimits

0x6a99,	// (0x0001f32e) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00028168) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00028168) main_image3_pane_t

0xaf3c,	// (0x000237d1) grid_sctrl_middle_pane_cp01_ParamLimits

0xaf3c,	// (0x000237d1) grid_sctrl_middle_pane_cp01

0xb1eb,	// (0x00023a80) cell_sctrl_middle_pane_cp01_ParamLimits

0xb1eb,	// (0x00023a80) cell_sctrl_middle_pane_cp01

0xb1fc,	// (0x00023a91) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb1fc,	// (0x00023a91) cell_sctrl_middle_pane_cp01_g1

0x5cb8,	// (0x0001e54d) main_call4_pane

0xb209,	// (0x00023a9e) aid_size_button_call4_ParamLimits

0xb209,	// (0x00023a9e) aid_size_button_call4

0xb23b,	// (0x00023ad0) call4_windows_pane_ParamLimits

0xb23b,	// (0x00023ad0) call4_windows_pane

0xb257,	// (0x00023aec) grid_call4_button_pane_ParamLimits

0xb257,	// (0x00023aec) grid_call4_button_pane

0x27c8,	// (0x0001b05d) call4_windows_conf_pane

0xb27b,	// (0x00023b10) popup_call4_audio_first_window_ParamLimits

0xb27b,	// (0x00023b10) popup_call4_audio_first_window

0xb2a7,	// (0x00023b3c) popup_call4_audio_second_window_ParamLimits

0xb2a7,	// (0x00023b3c) popup_call4_audio_second_window

0x283c,	// (0x0001b0d1) popup_call4_audio_wait_window_ParamLimits

0x283c,	// (0x0001b0d1) popup_call4_audio_wait_window

0xb2bb,	// (0x00023b50) cell_call4_button_pane_ParamLimits

0xb2bb,	// (0x00023b50) cell_call4_button_pane

0xb2de,	// (0x00023b73) bg_button_pane_cp09_ParamLimits

0xb2de,	// (0x00023b73) bg_button_pane_cp09

0xb2ea,	// (0x00023b7f) cell_call4_button_pane_g1_ParamLimits

0xb2ea,	// (0x00023b7f) cell_call4_button_pane_g1

0xb2f7,	// (0x00023b8c) cell_call4_button_pane_t1_ParamLimits

0xb2f7,	// (0x00023b8c) cell_call4_button_pane_t1

0x2884,	// (0x0001b119) popup_call4_audio_conf_window_ParamLimits

0x2884,	// (0x0001b119) popup_call4_audio_conf_window

0xaa92,	// (0x00023327) mup3_progress_pane_t1_ParamLimits

0xaab1,	// (0x00023346) mup3_progress_pane_t2_ParamLimits

0x1f28,	// (0x0001a7bd) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00028041) mup3_progress_pane_t_ParamLimits

0x1f45,	// (0x0001a7da) mup_progress_pane_cp03_ParamLimits

0xaf26,	// (0x000237bb) mup3_control_keys_pane_g4_copy1

0x691c,	// (0x0001f1b1) mp4_rocker2_pane_ParamLimits

0x691c,	// (0x0001f1b1) mp4_rocker2_pane

0x28a6,	// (0x0001b13b) mp4_rocker2_pane_g1

0x289e,	// (0x0001b133) mp4_rocker2_pane_g2

0x6afa,	// (0x0001f38f) mp4_rocker2_pane_g3

0x6b02,	// (0x0001f397) mp4_rocker2_pane_g4

0x6b0a,	// (0x0001f39f) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00028171) mp4_rocker2_pane_g

0x5cb8,	// (0x0001e54d) main_camera4_pane

0x5cb8,	// (0x0001e54d) main_video4_pane

0x66ca,	// (0x0001ef5f) main_video_tele_dialer_pane_t1_ParamLimits

0x66ca,	// (0x0001ef5f) main_video_tele_dialer_pane_t1

0x66dc,	// (0x0001ef71) main_video_tele_dialer_pane_t2_ParamLimits

0x66dc,	// (0x0001ef71) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0002812b) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0002812b) main_video_tele_dialer_pane_t

0x6b2a,	// (0x0001f3bf) cam4_autofocus_pane_ParamLimits

0x6b2a,	// (0x0001f3bf) cam4_autofocus_pane

0x6b42,	// (0x0001f3d7) cam4_image_uncrop_pane_ParamLimits

0x6b42,	// (0x0001f3d7) cam4_image_uncrop_pane

0x6b5b,	// (0x0001f3f0) cam4_indicators_pane_ParamLimits

0x6b5b,	// (0x0001f3f0) cam4_indicators_pane

0x6b77,	// (0x0001f40c) main_camera4_pane_g1_ParamLimits

0x6b77,	// (0x0001f40c) main_camera4_pane_g1

0x6b83,	// (0x0001f418) main_camera4_pane_g2_ParamLimits

0x6b83,	// (0x0001f418) main_camera4_pane_g2

0x6b83,	// (0x0001f418) main_camera4_pane_g3_ParamLimits

0x6b83,	// (0x0001f418) main_camera4_pane_g3

0x6b8f,	// (0x0001f424) main_camera4_pane_g4_ParamLimits

0x6b8f,	// (0x0001f424) main_camera4_pane_g4

0x6b9b,	// (0x0001f430) main_camera4_pane_g5_ParamLimits

0x6b9b,	// (0x0001f430) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0002817c) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0002817c) main_camera4_pane_g

0x6bb5,	// (0x0001f44a) main_camera4_pane_t1_ParamLimits

0x6bb5,	// (0x0001f44a) main_camera4_pane_t1

0x6bd9,	// (0x0001f46e) bg_tb_trans_pane_cp06

0x6bef,	// (0x0001f484) cam4_indicators_pane_g1

0x6c00,	// (0x0001f495) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00028197) cam4_indicators_pane_g

0x6c18,	// (0x0001f4ad) cam4_indicators_pane_t1

0x6c42,	// (0x0001f4d7) main_video4_pane_g1_ParamLimits

0x6c42,	// (0x0001f4d7) main_video4_pane_g1

0x6c4e,	// (0x0001f4e3) main_video4_pane_g2_ParamLimits

0x6c4e,	// (0x0001f4e3) main_video4_pane_g2

0x6c5a,	// (0x0001f4ef) main_video4_pane_g3_ParamLimits

0x6c5a,	// (0x0001f4ef) main_video4_pane_g3

0x6c66,	// (0x0001f4fb) main_video4_pane_g4_ParamLimits

0x6c66,	// (0x0001f4fb) main_video4_pane_g4

0x0004,

0xf909,	// (0x0002819e) main_video4_pane_g_ParamLimits

0xf909,	// (0x0002819e) main_video4_pane_g

0x6c88,	// (0x0001f51d) vid4_indicators_pane_ParamLimits

0x6c88,	// (0x0001f51d) vid4_indicators_pane

0x6ca7,	// (0x0001f53c) video4_image_uncrop_cif_pane_ParamLimits

0x6ca7,	// (0x0001f53c) video4_image_uncrop_cif_pane

0x6cb6,	// (0x0001f54b) video4_image_uncrop_nhd_pane_ParamLimits

0x6cb6,	// (0x0001f54b) video4_image_uncrop_nhd_pane

0x6b42,	// (0x0001f3d7) video4_image_uncrop_vga_pane_ParamLimits

0x6b42,	// (0x0001f3d7) video4_image_uncrop_vga_pane

0x615e,	// (0x0001e9f3) bg_tb_trans_pane_cp07

0x6ccf,	// (0x0001f564) vid4_indicators_pane_g1

0x6ce5,	// (0x0001f57a) vid4_indicators_pane_g2

0x6cf9,	// (0x0001f58e) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x000281a9) vid4_indicators_pane_g

0x6d2a,	// (0x0001f5bf) vid4_indicators_pane_t1

0xb32f,	// (0x00023bc4) cam4_autofocus_pane_g1

0xb337,	// (0x00023bcc) cam4_autofocus_pane_g2

0xb33f,	// (0x00023bd4) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x000281b4) cam4_autofocus_pane_g

0xb347,	// (0x00023bdc) cam4_autofocus_pane_g3_copy1

0xb10b,	// (0x000239a0) video_down_pane_cp_t1

0xb119,	// (0x000239ae) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00028130) video_down_pane_cp_t

0x5caa,	// (0x0001e53f) popup_vitu2_window_ParamLimits

0x5caa,	// (0x0001e53f) popup_vitu2_window

0x6d41,	// (0x0001f5d6) aid_size_cell2_itu2_ParamLimits

0x6d41,	// (0x0001f5d6) aid_size_cell2_itu2

0x6d63,	// (0x0001f5f8) aid_size_cell_itu2_ParamLimits

0x6d63,	// (0x0001f5f8) aid_size_cell_itu2

0x6da7,	// (0x0001f63c) bg_popup_window_pane_cp09_ParamLimits

0x6da7,	// (0x0001f63c) bg_popup_window_pane_cp09

0x6db5,	// (0x0001f64a) field_vitu2_entry_pane_ParamLimits

0x6db5,	// (0x0001f64a) field_vitu2_entry_pane

0x6dd5,	// (0x0001f66a) grid_vitu2_function_pane_ParamLimits

0x6dd5,	// (0x0001f66a) grid_vitu2_function_pane

0x6e19,	// (0x0001f6ae) grid_vitu2_itu_pane_ParamLimits

0x6e19,	// (0x0001f6ae) grid_vitu2_itu_pane

0x6e8d,	// (0x0001f722) cell_vitu2_itu_pane_ParamLimits

0x6e8d,	// (0x0001f722) cell_vitu2_itu_pane

0x6ea4,	// (0x0001f739) cell_vitu2_function_pane_ParamLimits

0x6ea4,	// (0x0001f739) cell_vitu2_function_pane

0x29b5,	// (0x0001b24a) bg_popup_call_pane_cp08_ParamLimits

0x29b5,	// (0x0001b24a) bg_popup_call_pane_cp08

0x29ce,	// (0x0001b263) field_vitu2_entry_pane_g1

0x29da,	// (0x0001b26f) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x000281bb) field_vitu2_entry_pane_g

0xb34f,	// (0x00023be4) field_vitu2_entry_pane_t1_ParamLimits

0xb34f,	// (0x00023be4) field_vitu2_entry_pane_t1

0x29f4,	// (0x0001b289) field_vitu2_entry_pane_t2_ParamLimits

0x29f4,	// (0x0001b289) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x000281c2) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x000281c2) field_vitu2_entry_pane_t

0x6ee8,	// (0x0001f77d) bg_button_pane_cp010_ParamLimits

0x6ee8,	// (0x0001f77d) bg_button_pane_cp010

0x6ef6,	// (0x0001f78b) cell_vitu2_itu_pane_g1

0x6f14,	// (0x0001f7a9) cell_vitu2_itu_pane_t1_ParamLimits

0x6f14,	// (0x0001f7a9) cell_vitu2_itu_pane_t1

0x6f66,	// (0x0001f7fb) cell_vitu2_itu_pane_t2_ParamLimits

0x6f66,	// (0x0001f7fb) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x000281cc) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x000281cc) cell_vitu2_itu_pane_t

0x615e,	// (0x0001e9f3) bg_button_pane_cp011

0x7021,	// (0x0001f8b6) cell_vitu2_function_pane_g1

0x5cb8,	// (0x0001e54d) main_myfav_hc_pane

0x6adb,	// (0x0001f370) popup_image3_note_pane_ParamLimits

0x6adb,	// (0x0001f370) popup_image3_note_pane

0x6ae9,	// (0x0001f37e) popup_image3_tool_bar_pane_ParamLimits

0x6ae9,	// (0x0001f37e) popup_image3_tool_bar_pane

0x6fd4,	// (0x0001f869) cell_vitu2_itu_pane_t3_ParamLimits

0x6fd4,	// (0x0001f869) cell_vitu2_itu_pane_t3

0xdfe5,	// (0x0002687a) bg_popup_trans_pane

0x2a19,	// (0x0001b2ae) grid_image3_tool_bar_pane

0x2a23,	// (0x0001b2b8) bg_popup_trans_pane_g1

0xec3d,	// (0x000274d2) bg_popup_trans_pane_g2

0x2a2b,	// (0x0001b2c0) bg_popup_trans_pane_g3

0x2a33,	// (0x0001b2c8) bg_popup_trans_pane_g4

0x2a3b,	// (0x0001b2d0) bg_popup_trans_pane_g5

0x2a43,	// (0x0001b2d8) bg_popup_trans_pane_g6

0x2a4b,	// (0x0001b2e0) bg_popup_trans_pane_g7

0x2a53,	// (0x0001b2e8) bg_popup_trans_pane_g8

0xec1d,	// (0x000274b2) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x000281d3) bg_popup_trans_pane_g

0x2a5b,	// (0x0001b2f0) cell_image3_tool_bar_pane_ParamLimits

0x2a5b,	// (0x0001b2f0) cell_image3_tool_bar_pane

0x1c71,	// (0x0001a506) cell_image3_tool_bar_pane_g1

0xdfe5,	// (0x0002687a) bg_popup_trans_pane_cp1

0x2a71,	// (0x0001b306) popup_image3_note_pane_t1

0x2a7f,	// (0x0001b314) popup_image3_note_pane_t2

0x2a8d,	// (0x0001b322) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x000281e6) popup_image3_note_pane_t

0x2a9d,	// (0x0001b332) popup_image3_note_pane_t3_copy1

0xb37c,	// (0x00023c11) bg_myfav_hc_instruction_pane_ParamLimits

0xb37c,	// (0x00023c11) bg_myfav_hc_instruction_pane

0xb394,	// (0x00023c29) cell_myfav_contact_pane_ParamLimits

0xb394,	// (0x00023c29) cell_myfav_contact_pane

0xb3ae,	// (0x00023c43) cell_myfav_contact_pane_cp1_ParamLimits

0xb3ae,	// (0x00023c43) cell_myfav_contact_pane_cp1

0xb3c6,	// (0x00023c5b) cell_myfav_contact_pane_cp2_ParamLimits

0xb3c6,	// (0x00023c5b) cell_myfav_contact_pane_cp2

0xb3de,	// (0x00023c73) cell_myfav_contact_pane_cp3_ParamLimits

0xb3de,	// (0x00023c73) cell_myfav_contact_pane_cp3

0xb3f5,	// (0x00023c8a) cell_myfav_contact_pane_cp4_ParamLimits

0xb3f5,	// (0x00023c8a) cell_myfav_contact_pane_cp4

0xb40b,	// (0x00023ca0) cell_myfav_contact_pane_cp5_ParamLimits

0xb40b,	// (0x00023ca0) cell_myfav_contact_pane_cp5

0xb41f,	// (0x00023cb4) cell_myfav_contact_pane_cp6_ParamLimits

0xb41f,	// (0x00023cb4) cell_myfav_contact_pane_cp6

0xb433,	// (0x00023cc8) cell_myfav_contact_pane_cp7_ParamLimits

0xb433,	// (0x00023cc8) cell_myfav_contact_pane_cp7

0x2aab,	// (0x0001b340) listscroll_gen_pane_cp05

0xb44b,	// (0x00023ce0) main_myfav_hc_pane_g1_ParamLimits

0xb44b,	// (0x00023ce0) main_myfav_hc_pane_g1

0xb465,	// (0x00023cfa) main_myfav_hc_pane_g2_ParamLimits

0xb465,	// (0x00023cfa) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x000281ed) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x000281ed) main_myfav_hc_pane_g

0xb497,	// (0x00023d2c) main_myfav_hc_pane_t1_ParamLimits

0xb497,	// (0x00023d2c) main_myfav_hc_pane_t1

0x2ab4,	// (0x0001b349) main_myfav_hc_pane_t2_ParamLimits

0x2ab4,	// (0x0001b349) main_myfav_hc_pane_t2

0x2ac6,	// (0x0001b35b) main_myfav_hc_pane_t3_ParamLimits

0x2ac6,	// (0x0001b35b) main_myfav_hc_pane_t3

0xb4ae,	// (0x00023d43) main_myfav_hc_pane_t4_ParamLimits

0xb4ae,	// (0x00023d43) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x000281f4) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x000281f4) main_myfav_hc_pane_t

0x1c71,	// (0x0001a506) bg_myfav_hc_instruction_pane_g1

0x2ad8,	// (0x0001b36d) cell_myfav_contact_pane_g1_ParamLimits

0x2ad8,	// (0x0001b36d) cell_myfav_contact_pane_g1

0x2ad8,	// (0x0001b36d) cell_myfav_contact_pane_g2_ParamLimits

0x2ad8,	// (0x0001b36d) cell_myfav_contact_pane_g2

0x2ae4,	// (0x0001b379) cell_myfav_contact_pane_g3_ParamLimits

0x2ae4,	// (0x0001b379) cell_myfav_contact_pane_g3

0x1f12,	// (0x0001a7a7) cell_myfav_contact_pane_g4_ParamLimits

0x1f12,	// (0x0001a7a7) cell_myfav_contact_pane_g4

0x2af1,	// (0x0001b386) cell_myfav_contact_pane_g5_ParamLimits

0x2af1,	// (0x0001b386) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x000281ff) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x000281ff) cell_myfav_contact_pane_g

0xb47f,	// (0x00023d14) main_myfav_hc_pane_g3_ParamLimits

0xb47f,	// (0x00023d14) main_myfav_hc_pane_g3

0x5bbc,	// (0x0001e451) popup_adpt_find_window

0xb4d8,	// (0x00023d6d) afind_page_pane_ParamLimits

0xb4d8,	// (0x00023d6d) afind_page_pane

0xb4e5,	// (0x00023d7a) aid_size_cell_afind_ParamLimits

0xb4e5,	// (0x00023d7a) aid_size_cell_afind

0xb4ff,	// (0x00023d94) bg_popup_sub_pane_cp09_ParamLimits

0xb4ff,	// (0x00023d94) bg_popup_sub_pane_cp09

0xb50c,	// (0x00023da1) find_pane_cp01_ParamLimits

0xb50c,	// (0x00023da1) find_pane_cp01

0x2afd,	// (0x0001b392) grid_afind_control_pane_ParamLimits

0x2afd,	// (0x0001b392) grid_afind_control_pane

0xb519,	// (0x00023dae) grid_afind_pane_ParamLimits

0xb519,	// (0x00023dae) grid_afind_pane

0xb535,	// (0x00023dca) cell_afind_pane_ParamLimits

0xb535,	// (0x00023dca) cell_afind_pane

0x1c71,	// (0x0001a506) afind_page_pane_g1

0xb57f,	// (0x00023e14) afind_page_pane_g2

0xb588,	// (0x00023e1d) afind_page_pane_g3

0x0002,

0xf975,	// (0x0002820a) afind_page_pane_g

0xb591,	// (0x00023e26) afind_page_pane_t1

0x2b11,	// (0x0001b3a6) cell_afind_grid_control_pane_ParamLimits

0x2b11,	// (0x0001b3a6) cell_afind_grid_control_pane

0x2788,	// (0x0001b01d) bg_button_pane_cp69_ParamLimits

0x2788,	// (0x0001b01d) bg_button_pane_cp69

0xb5b1,	// (0x00023e46) cell_afind_pane_g1_ParamLimits

0xb5b1,	// (0x00023e46) cell_afind_pane_g1

0xb5be,	// (0x00023e53) cell_afind_pane_t1_ParamLimits

0xb5be,	// (0x00023e53) cell_afind_pane_t1

0xe974,	// (0x00027209) bg_button_pane_cp72

0x2b20,	// (0x0001b3b5) cell_afind_grid_control_pane_g1

0x98e5,	// (0x0002217a) aid_image_placing_area_ParamLimits

0x98e5,	// (0x0002217a) aid_image_placing_area

0x221d,	// (0x0001aab2) field_vitu_entry_pane_g1_ParamLimits

0x221d,	// (0x0001aab2) field_vitu_entry_pane_g1

0x2229,	// (0x0001aabe) field_vitu_entry_pane_g2_ParamLimits

0x2229,	// (0x0001aabe) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x000280bb) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x000280bb) field_vitu_entry_pane_g

0xafbb,	// (0x00023850) cell_vitu_itu_pane_g1_ParamLimits

0xb00b,	// (0x000238a0) cell_vitu_itu_pane_t3_ParamLimits

0xb00b,	// (0x000238a0) cell_vitu_itu_pane_t3

0x2738,	// (0x0001afcd) mp4_progress_pane_t1_ParamLimits

0x2751,	// (0x0001afe6) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00028150) mp4_progress_pane_t_ParamLimits

0x276a,	// (0x0001afff) mup_progress_pane_cp04_ParamLimits

0xb4c2,	// (0x00023d57) main_myfav_hc_pane_t5_ParamLimits

0xb4c2,	// (0x00023d57) main_myfav_hc_pane_t5

0x5a7c,	// (0x0001e311) aid_zoom_text_primary

0x5bbc,	// (0x0001e451) popup_adpt_find_window_ParamLimits

0x615e,	// (0x0001e9f3) main_cam_set_pane

0x6b69,	// (0x0001f3fe) cam4_zoom_pane_ParamLimits

0x6b69,	// (0x0001f3fe) cam4_zoom_pane

0xb5d0,	// (0x00023e65) main_cam_set_pane_g1_ParamLimits

0xb5d0,	// (0x00023e65) main_cam_set_pane_g1

0xb5de,	// (0x00023e73) main_cam_set_pane_g2_ParamLimits

0xb5de,	// (0x00023e73) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00028211) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00028211) main_cam_set_pane_g

0xb5ea,	// (0x00023e7f) main_cam_set_pane_t1_ParamLimits

0xb5ea,	// (0x00023e7f) main_cam_set_pane_t1

0xb606,	// (0x00023e9b) main_cset_listscroll_pane_ParamLimits

0xb606,	// (0x00023e9b) main_cset_listscroll_pane

0xb635,	// (0x00023eca) main_cset_slider_pane_ParamLimits

0xb635,	// (0x00023eca) main_cset_slider_pane

0x2b31,	// (0x0001b3c6) main_cset_list_pane_ParamLimits

0x2b31,	// (0x0001b3c6) main_cset_list_pane

0x2b41,	// (0x0001b3d6) scroll_pane_cp028

0xb656,	// (0x00023eeb) aid_area_touch_slider

0xb672,	// (0x00023f07) cset_slider_pane

0xb69c,	// (0x00023f31) main_cset_slider_pane_g1

0xb6b1,	// (0x00023f46) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00028216) main_cset_slider_pane_g

0x2b7a,	// (0x0001b40f) main_cset_slider_pane_t1

0xb76d,	// (0x00024002) main_cset_slider_pane_t2

0xb787,	// (0x0002401c) main_cset_slider_pane_t3

0xb7a1,	// (0x00024036) main_cset_slider_pane_t4

0xb7bb,	// (0x00024050) main_cset_slider_pane_t5

0xb7d5,	// (0x0002406a) main_cset_slider_pane_t6

0xb7ea,	// (0x0002407f) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0002823b) main_cset_slider_pane_t

0xb8ee,	// (0x00024183) cset_list_set_pane_ParamLimits

0xb8ee,	// (0x00024183) cset_list_set_pane

0xb8ff,	// (0x00024194) aid_position_infowindow_above

0xb907,	// (0x0002419c) aid_position_infowindow_below

0xb90f,	// (0x000241a4) cset_list_set_pane_g1_ParamLimits

0xb90f,	// (0x000241a4) cset_list_set_pane_g1

0xb91b,	// (0x000241b0) cset_list_set_pane_g3_ParamLimits

0xb91b,	// (0x000241b0) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0002825a) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0002825a) cset_list_set_pane_g

0xb92a,	// (0x000241bf) cset_list_set_pane_t1_ParamLimits

0xb92a,	// (0x000241bf) cset_list_set_pane_t1

0xe0e4,	// (0x00026979) list_highlight_pane_cp021_ParamLimits

0xe0e4,	// (0x00026979) list_highlight_pane_cp021

0x03e9,	// (0x00018c7e) cset_slider_pane_g1

0x03fb,	// (0x00018c90) cset_slider_pane_g2

0x03f2,	// (0x00018c87) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0002825f) cset_slider_pane_g

0x7035,	// (0x0001f8ca) aid_area_touch_cam4_zoom

0x703d,	// (0x0001f8d2) cam4_zoom_cont_pane

0x7045,	// (0x0001f8da) cam4_zoom_pane_g1

0x704d,	// (0x0001f8e2) cam4_zoom_pane_g2

0x7055,	// (0x0001f8ea) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00028266) cam4_zoom_pane_g

0x705d,	// (0x0001f8f2) cam4_zoom_cont_pane_g1

0x7066,	// (0x0001f8fb) cam4_zoom_cont_pane_g2

0x706f,	// (0x0001f904) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0002826d) cam4_zoom_cont_pane_g

0xb223,	// (0x00023ab8) call4_image_pane_ParamLimits

0xb223,	// (0x00023ab8) call4_image_pane

0x27c8,	// (0x0001b05d) call4_windows_conf_pane_ParamLimits

0x27e3,	// (0x0001b078) popup_call4_audio_in_window_ParamLimits

0x27e3,	// (0x0001b078) popup_call4_audio_in_window

0xdfe5,	// (0x0002687a) bg_popup_call2_act_pane_cp02

0x287c,	// (0x0001b111) call4_list_conf_pane

0x1c71,	// (0x0001a506) call4_image_pane_g1

0x1c71,	// (0x0001a506) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00027f81) call4_image_pane_g

0x2c55,	// (0x0001b4ea) list_single_graphic_popup_conf4_pane_ParamLimits

0x2c55,	// (0x0001b4ea) list_single_graphic_popup_conf4_pane

0xdfe5,	// (0x0002687a) list_highlight_pane_cp022

0x2c6a,	// (0x0001b4ff) list_single_graphic_popup_conf4_pane_g1

0x00c3,	// (0x00018958) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00028274) list_single_graphic_popup_conf4_pane_g

0x2c72,	// (0x0001b507) list_single_graphic_popup_conf4_pane_t1

0x7ec5,	// (0x0002075a) popup_vtel_slider_window_ParamLimits

0x7ec5,	// (0x0002075a) popup_vtel_slider_window

0x2776,	// (0x0001b00b) dialer2_ne_pane_t2_ParamLimits

0x2776,	// (0x0001b00b) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00028155) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00028155) dialer2_ne_pane_t

0xe0e4,	// (0x00026979) bg_popup_sub_pane_cp010_ParamLimits

0xe0e4,	// (0x00026979) bg_popup_sub_pane_cp010

0xb93f,	// (0x000241d4) popup_vtel_slider_window_g1_ParamLimits

0xb93f,	// (0x000241d4) popup_vtel_slider_window_g1

0xb94b,	// (0x000241e0) popup_vtel_slider_window_g2_ParamLimits

0xb94b,	// (0x000241e0) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00028279) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00028279) popup_vtel_slider_window_g

0xb993,	// (0x00024228) vtel_slider_pane_ParamLimits

0xb993,	// (0x00024228) vtel_slider_pane

0xb9a2,	// (0x00024237) vtel_slider_pane_g1_ParamLimits

0xb9a2,	// (0x00024237) vtel_slider_pane_g1

0xb9af,	// (0x00024244) vtel_slider_pane_g2_ParamLimits

0xb9af,	// (0x00024244) vtel_slider_pane_g2

0xb9bc,	// (0x00024251) vtel_slider_pane_g3_ParamLimits

0xb9bc,	// (0x00024251) vtel_slider_pane_g3

0xb9a2,	// (0x00024237) vtel_slider_pane_g4_ParamLimits

0xb9a2,	// (0x00024237) vtel_slider_pane_g4

0xb9c9,	// (0x0002425e) vtel_slider_pane_g5_ParamLimits

0xb9c9,	// (0x0002425e) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00028282) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00028282) vtel_slider_pane_g

0x5cb8,	// (0x0001e54d) main_gallery2_pane

0x6d89,	// (0x0001f61e) aid_size_row_itut2_dropdow_list_ParamLimits

0x6d89,	// (0x0001f61e) aid_size_row_itut2_dropdow_list

0x6df7,	// (0x0001f68c) grid_vitu2_function_top_pane_ParamLimits

0x6df7,	// (0x0001f68c) grid_vitu2_function_top_pane

0x6e49,	// (0x0001f6de) popup_vitu2_dropdown_list_window_ParamLimits

0x6e49,	// (0x0001f6de) popup_vitu2_dropdown_list_window

0x6e69,	// (0x0001f6fe) popup_vitu2_match_list_window

0x7078,	// (0x0001f90d) cell_vitu2_function_top_pane_ParamLimits

0x7078,	// (0x0001f90d) cell_vitu2_function_top_pane

0x7098,	// (0x0001f92d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7098,	// (0x0001f92d) cell_vitu2_function_top_pane_cp01

0x70b6,	// (0x0001f94b) cell_vitu2_function_top_wide_pane_ParamLimits

0x70b6,	// (0x0001f94b) cell_vitu2_function_top_wide_pane

0x615e,	// (0x0001e9f3) bg_button_pane_cp012

0x70d4,	// (0x0001f969) cell_vitu2_function_top_pane_g1

0x70e3,	// (0x0001f978) bg_button_pane_cp013_ParamLimits

0x70e3,	// (0x0001f978) bg_button_pane_cp013

0xb9d6,	// (0x0002426b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb9d6,	// (0x0002426b) cell_vitu2_function_top_wide_pane_g1

0x5caa,	// (0x0001e53f) bg_popup_sub_pane_cp20

0x70ff,	// (0x0001f994) list_vitu2_match_list_pane

0x2a23,	// (0x0001b2b8) bg_popup_sub_pane_cp20_g1

0x2a2b,	// (0x0001b2c0) bg_popup_sub_pane_cp20_g2

0xec3d,	// (0x000274d2) bg_popup_sub_pane_cp20_g3

0x2a33,	// (0x0001b2c8) bg_popup_sub_pane_cp20_g4

0xec1d,	// (0x000274b2) bg_popup_sub_pane_cp20_g5

0x2cb2,	// (0x0001b547) bg_popup_sub_pane_cp20_g6

0x2a43,	// (0x0001b2d8) bg_popup_sub_pane_cp20_g7

0x2a4b,	// (0x0001b2e0) bg_popup_sub_pane_cp20_g8

0x2a53,	// (0x0001b2e8) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0002828d) bg_popup_sub_pane_cp20_g

0x7117,	// (0x0001f9ac) list_vitu2_match_list_item_pane_ParamLimits

0x7117,	// (0x0001f9ac) list_vitu2_match_list_item_pane

0x7129,	// (0x0001f9be) list_vitu2_match_list_item_pane_t1

0x5cb8,	// (0x0001e54d) bg_popup_sub_pane_cp21

0x7137,	// (0x0001f9cc) grid_vitu2_dropdown_list_pane

0x713f,	// (0x0001f9d4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x713f,	// (0x0001f9d4) cell_vitu2_dropdown_list_char_pane

0x7164,	// (0x0001f9f9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7164,	// (0x0001f9f9) cell_vitu2_dropdown_list_ctrl_pane

0x2d04,	// (0x0001b599) cell_vitu2_dropdown_list_char_pane_g1

0x2cfb,	// (0x0001b590) cell_vitu2_dropdown_list_char_pane_g2

0x2cf2,	// (0x0001b587) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x000282aa) cell_vitu2_dropdown_list_char_pane_g

0x7192,	// (0x0001fa27) cell_vitu2_dropdown_list_char_pane_t1

0xba1a,	// (0x000242af) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xba1a,	// (0x000242af) cell_vitu2_dropdown_list_ctrl_pane_g1

0xba2a,	// (0x000242bf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xba2a,	// (0x000242bf) cell_vitu2_dropdown_list_ctrl_pane_g2

0xba3b,	// (0x000242d0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xba3b,	// (0x000242d0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x71a0,	// (0x0001fa35) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x71a0,	// (0x0001fa35) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6bd9,	// (0x0001f46e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6bd9,	// (0x0001f46e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x000282b1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x000282b1) cell_vitu2_dropdown_list_ctrl_pane_g

0xba4b,	// (0x000242e0) aid_size_cell_gallery2_ParamLimits

0xba4b,	// (0x000242e0) aid_size_cell_gallery2

0xba59,	// (0x000242ee) grid_gallery2_pane_ParamLimits

0xba59,	// (0x000242ee) grid_gallery2_pane

0xba68,	// (0x000242fd) scroll_pane_cp029_ParamLimits

0xba68,	// (0x000242fd) scroll_pane_cp029

0xba74,	// (0x00024309) cell_gallery2_pane_ParamLimits

0xba74,	// (0x00024309) cell_gallery2_pane

0x2d0d,	// (0x0001b5a2) cell_gallery2_pane_g2

0xba9e,	// (0x00024333) cell_gallery2_pane_g3

0x2d17,	// (0x0001b5ac) cell_gallery2_pane_g4

0x2d1f,	// (0x0001b5b4) cell_gallery2_pane_g5

0x0291,	// (0x00018b26) grid_highlight_pane_cp10

0x6e69,	// (0x0001f6fe) popup_vitu2_match_list_window_ParamLimits

0x6e7d,	// (0x0001f712) popup_vitu2_query_window_ParamLimits

0x6e7d,	// (0x0001f712) popup_vitu2_query_window

0x5cb8,	// (0x0001e54d) bg_vitu2_candi_button_pane

0x2d04,	// (0x0001b599) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2cfb,	// (0x0001b590) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2cf2,	// (0x0001b587) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xbaa6,	// (0x0002433b) bg_button_pane_cp015

0xbab8,	// (0x0002434d) bg_button_pane_cp016

0xbacb,	// (0x00024360) bg_button_pane_cp017

0x173c,	// (0x00019fd1) bg_popup_sub_pane_cp22

0x2d27,	// (0x0001b5bc) popup_vitu2_query_window_g1

0xbb10,	// (0x000243a5) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x000282bc) popup_vitu2_query_window_g

0xbb2d,	// (0x000243c2) popup_vitu2_query_window_t1_ParamLimits

0xbb2d,	// (0x000243c2) popup_vitu2_query_window_t1

0xbb60,	// (0x000243f5) popup_vitu2_query_window_t2_ParamLimits

0xbb60,	// (0x000243f5) popup_vitu2_query_window_t2

0xbb72,	// (0x00024407) popup_vitu2_query_window_t3_ParamLimits

0xbb72,	// (0x00024407) popup_vitu2_query_window_t3

0xbb9a,	// (0x0002442f) popup_vitu2_query_window_t4_ParamLimits

0xbb9a,	// (0x0002442f) popup_vitu2_query_window_t4

0xbbbd,	// (0x00024452) popup_vitu2_query_window_t5_ParamLimits

0xbbbd,	// (0x00024452) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x000282c3) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x000282c3) popup_vitu2_query_window_t

0x2b29,	// (0x0001b3be) main_cset_text_pane

0xb656,	// (0x00023eeb) aid_area_touch_slider_ParamLimits

0xb672,	// (0x00023f07) cset_slider_pane_ParamLimits

0xb69c,	// (0x00023f31) main_cset_slider_pane_g1_ParamLimits

0xb6b1,	// (0x00023f46) main_cset_slider_pane_g2_ParamLimits

0x2b4a,	// (0x0001b3df) main_cset_slider_pane_g3_ParamLimits

0x2b4a,	// (0x0001b3df) main_cset_slider_pane_g3

0xb6c6,	// (0x00023f5b) main_cset_slider_pane_g4_ParamLimits

0xb6c6,	// (0x00023f5b) main_cset_slider_pane_g4

0xb6d5,	// (0x00023f6a) main_cset_slider_pane_g5_ParamLimits

0xb6d5,	// (0x00023f6a) main_cset_slider_pane_g5

0xb6e1,	// (0x00023f76) main_cset_slider_pane_g6_ParamLimits

0xb6e1,	// (0x00023f76) main_cset_slider_pane_g6

0xf981,	// (0x00028216) main_cset_slider_pane_g_ParamLimits

0x2b7a,	// (0x0001b40f) main_cset_slider_pane_t1_ParamLimits

0xb76d,	// (0x00024002) main_cset_slider_pane_t2_ParamLimits

0xb787,	// (0x0002401c) main_cset_slider_pane_t3_ParamLimits

0xb7a1,	// (0x00024036) main_cset_slider_pane_t4_ParamLimits

0xb7bb,	// (0x00024050) main_cset_slider_pane_t5_ParamLimits

0xb7d5,	// (0x0002406a) main_cset_slider_pane_t6_ParamLimits

0xb7ea,	// (0x0002407f) main_cset_slider_pane_t7_ParamLimits

0xb814,	// (0x000240a9) main_cset_slider_pane_t8_ParamLimits

0xb814,	// (0x000240a9) main_cset_slider_pane_t8

0xb83c,	// (0x000240d1) main_cset_slider_pane_t9_ParamLimits

0xb83c,	// (0x000240d1) main_cset_slider_pane_t9

0xb864,	// (0x000240f9) main_cset_slider_pane_t10_ParamLimits

0xb864,	// (0x000240f9) main_cset_slider_pane_t10

0xb88c,	// (0x00024121) main_cset_slider_pane_t11_ParamLimits

0xb88c,	// (0x00024121) main_cset_slider_pane_t11

0xb8b4,	// (0x00024149) main_cset_slider_pane_t12_ParamLimits

0xb8b4,	// (0x00024149) main_cset_slider_pane_t12

0xb8d1,	// (0x00024166) main_cset_slider_pane_t13_ParamLimits

0xb8d1,	// (0x00024166) main_cset_slider_pane_t13

0xf9a6,	// (0x0002823b) main_cset_slider_pane_t_ParamLimits

0xdfe5,	// (0x0002687a) bg_popup_sub_pane_cp011

0x2d33,	// (0x0001b5c8) main_cset_text_pane_g1

0x2d3b,	// (0x0001b5d0) main_cset_text_pane_t1

0x2d49,	// (0x0001b5de) main_cset_text_pane_t2

0x2d57,	// (0x0001b5ec) main_cset_text_pane_t3

0x2d65,	// (0x0001b5fa) main_cset_text_pane_t4

0x2d73,	// (0x0001b608) main_cset_text_pane_t5

0x2d81,	// (0x0001b616) main_cset_text_pane_t6

0x2d8f,	// (0x0001b624) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x000282d2) main_cset_text_pane_t

0x5cb8,	// (0x0001e54d) main_cam4_burst_pane

0x5cb8,	// (0x0001e54d) main_cam5_pane

0xb59f,	// (0x00023e34) bg_button_pane_cp019

0xb5a8,	// (0x00023e3d) bg_button_pane_cp020

0x2b56,	// (0x0001b3eb) main_cset_slider_pane_g7_ParamLimits

0x2b56,	// (0x0001b3eb) main_cset_slider_pane_g7

0x2b62,	// (0x0001b3f7) main_cset_slider_pane_g8_ParamLimits

0x2b62,	// (0x0001b3f7) main_cset_slider_pane_g8

0xb6f5,	// (0x00023f8a) main_cset_slider_pane_g9_ParamLimits

0xb6f5,	// (0x00023f8a) main_cset_slider_pane_g9

0xb701,	// (0x00023f96) main_cset_slider_pane_g10_ParamLimits

0xb701,	// (0x00023f96) main_cset_slider_pane_g10

0xb70d,	// (0x00023fa2) main_cset_slider_pane_g11_ParamLimits

0xb70d,	// (0x00023fa2) main_cset_slider_pane_g11

0xb719,	// (0x00023fae) main_cset_slider_pane_g12_ParamLimits

0xb719,	// (0x00023fae) main_cset_slider_pane_g12

0xb725,	// (0x00023fba) main_cset_slider_pane_g13_ParamLimits

0xb725,	// (0x00023fba) main_cset_slider_pane_g13

0xb731,	// (0x00023fc6) main_cset_slider_pane_g14_ParamLimits

0xb731,	// (0x00023fc6) main_cset_slider_pane_g14

0xb73d,	// (0x00023fd2) main_cset_slider_pane_g15_ParamLimits

0xb73d,	// (0x00023fd2) main_cset_slider_pane_g15

0x2ba8,	// (0x0001b43d) main_cset_slider_pane_t14_ParamLimits

0x2ba8,	// (0x0001b43d) main_cset_slider_pane_t14

0x2be1,	// (0x0001b476) main_cset_slider_pane_t15_ParamLimits

0x2be1,	// (0x0001b476) main_cset_slider_pane_t15

0xbc36,	// (0x000244cb) aid_cam4_burst_size_cell_ParamLimits

0xbc36,	// (0x000244cb) aid_cam4_burst_size_cell

0xbc52,	// (0x000244e7) grid_cam4_burst_pane_ParamLimits

0xbc52,	// (0x000244e7) grid_cam4_burst_pane

0xbc84,	// (0x00024519) linegrid_cam4_burst_pane_ParamLimits

0xbc84,	// (0x00024519) linegrid_cam4_burst_pane

0xbca2,	// (0x00024537) scroll_pane_cp30_ParamLimits

0xbca2,	// (0x00024537) scroll_pane_cp30

0xbcae,	// (0x00024543) cell_cam4_burst_pane_ParamLimits

0xbcae,	// (0x00024543) cell_cam4_burst_pane

0x2da9,	// (0x0001b63e) linegrid_cam4_burst_pane_g1_ParamLimits

0x2da9,	// (0x0001b63e) linegrid_cam4_burst_pane_g1

0xbcee,	// (0x00024583) linegrid_cam4_burst_pane_g2_ParamLimits

0xbcee,	// (0x00024583) linegrid_cam4_burst_pane_g2

0x2db6,	// (0x0001b64b) linegrid_cam4_burst_pane_g3_ParamLimits

0x2db6,	// (0x0001b64b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x000282e1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x000282e1) linegrid_cam4_burst_pane_g

0xbcff,	// (0x00024594) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbcff,	// (0x00024594) linegrid_cam4_burst_pane_g3_copy1

0x2dc3,	// (0x0001b658) linegrid_cam4_burst_pane_g4_ParamLimits

0x2dc3,	// (0x0001b658) linegrid_cam4_burst_pane_g4

0xbd19,	// (0x000245ae) linegrid_cam4_burst_pane_g5_ParamLimits

0xbd19,	// (0x000245ae) linegrid_cam4_burst_pane_g5

0xbd2a,	// (0x000245bf) linegrid_cam4_burst_pane_g6_ParamLimits

0xbd2a,	// (0x000245bf) linegrid_cam4_burst_pane_g6

0x2dd0,	// (0x0001b665) linegrid_cam4_burst_pane_g7_ParamLimits

0x2dd0,	// (0x0001b665) linegrid_cam4_burst_pane_g7

0xbd41,	// (0x000245d6) cell_cam4_burst_pane_g1

0x2de9,	// (0x0001b67e) main_cam5_pane_t1_ParamLimits

0x2de9,	// (0x0001b67e) main_cam5_pane_t1

0x2dfb,	// (0x0001b690) main_cam5_pane_t2_ParamLimits

0x2dfb,	// (0x0001b690) main_cam5_pane_t2

0x2e0d,	// (0x0001b6a2) main_cam5_pane_t3_ParamLimits

0x2e0d,	// (0x0001b6a2) main_cam5_pane_t3

0x2e1f,	// (0x0001b6b4) main_cam5_pane_t4_ParamLimits

0x2e1f,	// (0x0001b6b4) main_cam5_pane_t4

0x2e37,	// (0x0001b6cc) main_cam5_pane_t5_ParamLimits

0x2e37,	// (0x0001b6cc) main_cam5_pane_t5

0x2e4b,	// (0x0001b6e0) main_cam5_pane_t6_ParamLimits

0x2e4b,	// (0x0001b6e0) main_cam5_pane_t6

0x2e5f,	// (0x0001b6f4) main_cam5_pane_t7_ParamLimits

0x2e5f,	// (0x0001b6f4) main_cam5_pane_t7

0x2e71,	// (0x0001b706) main_cam5_pane_t8_ParamLimits

0x2e71,	// (0x0001b706) main_cam5_pane_t8

0x2e8f,	// (0x0001b724) main_cam5_pane_t9_ParamLimits

0x2e8f,	// (0x0001b724) main_cam5_pane_t9

0x2ea1,	// (0x0001b736) main_cam5_pane_t10_ParamLimits

0x2ea1,	// (0x0001b736) main_cam5_pane_t10

0x2eb3,	// (0x0001b748) main_cam5_pane_t11_ParamLimits

0x2eb3,	// (0x0001b748) main_cam5_pane_t11

0x2ec7,	// (0x0001b75c) main_cam5_pane_t12_ParamLimits

0x2ec7,	// (0x0001b75c) main_cam5_pane_t12

0x2ede,	// (0x0001b773) main_cam5_pane_t13_ParamLimits

0x2ede,	// (0x0001b773) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x000282ed) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x000282ed) main_cam5_pane_t

0x5c73,	// (0x0001e508) popup_scut_keymap_window_ParamLimits

0x5c73,	// (0x0001e508) popup_scut_keymap_window

0xbd54,	// (0x000245e9) aid_size_cell_brow_shortcut

0x0291,	// (0x00018b26) bg_popup_window_pane_cp010

0xbd60,	// (0x000245f5) grid_scut_pane

0xbd6c,	// (0x00024601) cell_scut_pane_ParamLimits

0xbd6c,	// (0x00024601) cell_scut_pane

0xbd87,	// (0x0002461c) cell_scut_pane_g1

0x2f01,	// (0x0001b796) cell_scut_pane_t1

0x2f10,	// (0x0001b7a5) cell_scut_pane_t2

0xbd90,	// (0x00024625) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00028308) cell_scut_pane_t

0xa695,	// (0x00022f2a) main_mup3_pane_g8_ParamLimits

0xa695,	// (0x00022f2a) main_mup3_pane_g8

0x6d97,	// (0x0001f62c) area_vitu2_query_pane_ParamLimits

0x6d97,	// (0x0001f62c) area_vitu2_query_pane

0xbade,	// (0x00024373) input_focus_pane_cp08

0x2f1f,	// (0x0001b7b4) area_vitu2_query_pane_g1

0xbd9e,	// (0x00024633) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0002830f) area_vitu2_query_pane_g

0xbdaf,	// (0x00024644) area_vitu2_query_pane_t1_ParamLimits

0xbdaf,	// (0x00024644) area_vitu2_query_pane_t1

0xbdc3,	// (0x00024658) area_vitu2_query_pane_t2_ParamLimits

0xbdc3,	// (0x00024658) area_vitu2_query_pane_t2

0xbdd7,	// (0x0002466c) area_vitu2_query_pane_t3_ParamLimits

0xbdd7,	// (0x0002466c) area_vitu2_query_pane_t3

0x2f2b,	// (0x0001b7c0) area_vitu2_query_pane_t4_ParamLimits

0x2f2b,	// (0x0001b7c0) area_vitu2_query_pane_t4

0x2f53,	// (0x0001b7e8) area_vitu2_query_pane_t5_ParamLimits

0x2f53,	// (0x0001b7e8) area_vitu2_query_pane_t5

0x2f7b,	// (0x0001b810) area_vitu2_query_pane_t6_ParamLimits

0x2f7b,	// (0x0001b810) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00028314) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00028314) area_vitu2_query_pane_t

0xbdff,	// (0x00024694) bg_button_pane_cp018

0xbe0d,	// (0x000246a2) bg_button_pane_cp021

0xbe19,	// (0x000246ae) bg_button_pane_cp022

0xbe2a,	// (0x000246bf) input_focus_pane_cp09

0x8f81,	// (0x00021816) aid_size_touch_mv_arrow_left

0x8fac,	// (0x00021841) aid_size_touch_mv_arrow_right

0xb755,	// (0x00023fea) main_cset_slider_pane_g16_ParamLimits

0xb755,	// (0x00023fea) main_cset_slider_pane_g16

0xb761,	// (0x00023ff6) main_cset_slider_pane_g17_ParamLimits

0xb761,	// (0x00023ff6) main_cset_slider_pane_g17

0xbd41,	// (0x000245d6) cell_cam4_burst_pane_g1_ParamLimits

0xdfe5,	// (0x0002687a) compa_mode_pane

0xb957,	// (0x000241ec) popup_vtel_slider_window_g3_ParamLimits

0xb957,	// (0x000241ec) popup_vtel_slider_window_g3

0xb96b,	// (0x00024200) popup_vtel_slider_window_g4_ParamLimits

0xb96b,	// (0x00024200) popup_vtel_slider_window_g4

0xb97f,	// (0x00024214) popup_vtel_slider_window_t1_ParamLimits

0xb97f,	// (0x00024214) popup_vtel_slider_window_t1

0x5cb8,	// (0x0001e54d) main_cl_pane

0x6208,	// (0x0001ea9d) popup_imed_adjust2_window_ParamLimits

0x173c,	// (0x00019fd1) bg_tb_trans_pane_cp05_ParamLimits

0x2152,	// (0x0001a9e7) popup_imed_adjust2_window_g1_ParamLimits

0x2161,	// (0x0001a9f6) popup_imed_adjust2_window_g2_ParamLimits

0x2161,	// (0x0001a9f6) popup_imed_adjust2_window_g2

0x216d,	// (0x0001aa02) popup_imed_adjust2_window_g3_ParamLimits

0x216d,	// (0x0001aa02) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0002807f) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0002807f) popup_imed_adjust2_window_g

0x2179,	// (0x0001aa0e) popup_imed_adjust2_window_t1_ParamLimits

0x2191,	// (0x0001aa26) slider_imed_adjust_pane_ParamLimits

0x21a5,	// (0x0001aa3a) slider_imed_adjust_pane_g1_ParamLimits

0x21b5,	// (0x0001aa4a) slider_imed_adjust_pane_g2_ParamLimits

0x21c5,	// (0x0001aa5a) slider_imed_adjust_pane_g3_ParamLimits

0x21d6,	// (0x0001aa6b) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x00028086) slider_imed_adjust_pane_g_ParamLimits

0x6b12,	// (0x0001f3a7) aid_touch_area_cam4_ParamLimits

0x6b12,	// (0x0001f3a7) aid_touch_area_cam4

0x6b22,	// (0x0001f3b7) battery_pane_cp01

0x6ba9,	// (0x0001f43e) main_camera4_pane_g6_ParamLimits

0x6ba9,	// (0x0001f43e) main_camera4_pane_g6

0x6bc7,	// (0x0001f45c) main_camera4_pane_t2_ParamLimits

0x6bc7,	// (0x0001f45c) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00028189) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00028189) main_camera4_pane_t

0x6c32,	// (0x0001f4c7) aid_touch_area_vid4_ParamLimits

0x6c32,	// (0x0001f4c7) aid_touch_area_vid4

0x6c72,	// (0x0001f507) main_video4_pane_g5_ParamLimits

0x6c72,	// (0x0001f507) main_video4_pane_g5

0x6c98,	// (0x0001f52d) vid4_progress_pane_ParamLimits

0x6c98,	// (0x0001f52d) vid4_progress_pane

0x2b6e,	// (0x0001b403) main_cset_slider_pane_g18_ParamLimits

0x2b6e,	// (0x0001b403) main_cset_slider_pane_g18

0x2ddd,	// (0x0001b672) cell_cam4_burst_pane_g2_ParamLimits

0x2ddd,	// (0x0001b672) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x000282e8) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x000282e8) cell_cam4_burst_pane_g

0xbe3b,	// (0x000246d0) bg_cl_pane_ParamLimits

0xbe3b,	// (0x000246d0) bg_cl_pane

0xbe47,	// (0x000246dc) cl_header_pane_ParamLimits

0xbe47,	// (0x000246dc) cl_header_pane

0xbe53,	// (0x000246e8) cl_listscroll_pane_ParamLimits

0xbe53,	// (0x000246e8) cl_listscroll_pane

0x2fc7,	// (0x0001b85c) bg_cl_pane_g1

0x2fcf,	// (0x0001b864) bg_cl_pane_g2

0x2fd7,	// (0x0001b86c) bg_cl_pane_g3

0x2fdf,	// (0x0001b874) bg_cl_pane_g4

0x2fe7,	// (0x0001b87c) bg_cl_pane_g5

0x2fef,	// (0x0001b884) bg_cl_pane_g6

0x2ff7,	// (0x0001b88c) bg_cl_pane_g7

0x2fff,	// (0x0001b894) bg_cl_pane_g8

0x3007,	// (0x0001b89c) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00028323) bg_cl_pane_g

0xbe5f,	// (0x000246f4) aid_height_cl_leading_ParamLimits

0xbe5f,	// (0x000246f4) aid_height_cl_leading

0xbe6b,	// (0x00024700) aid_height_cl_text_ParamLimits

0xbe6b,	// (0x00024700) aid_height_cl_text

0xaf3c,	// (0x000237d1) bg_cl_header_pane_ParamLimits

0xaf3c,	// (0x000237d1) bg_cl_header_pane

0xbe83,	// (0x00024718) cl_header_pane_g1_ParamLimits

0xbe83,	// (0x00024718) cl_header_pane_g1

0xbe90,	// (0x00024725) cl_header_pane_t1_ParamLimits

0xbe90,	// (0x00024725) cl_header_pane_t1

0x300f,	// (0x0001b8a4) cl_list_pane

0x2b41,	// (0x0001b3d6) hc_scroll_pane_cp01

0xec1d,	// (0x000274b2) bg_cl_header_pane_g1

0x2a23,	// (0x0001b2b8) bg_cl_header_pane_g2

0xec3d,	// (0x000274d2) bg_cl_header_pane_g3

0x2a33,	// (0x0001b2c8) bg_cl_header_pane_g4

0x2a2b,	// (0x0001b2c0) bg_cl_header_pane_g5

0x2cb2,	// (0x0001b547) bg_cl_header_pane_g6

0x2a4b,	// (0x0001b2e0) bg_cl_header_pane_g7

0x2a53,	// (0x0001b2e8) bg_cl_header_pane_g8

0x2a43,	// (0x0001b2d8) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00028336) bg_cl_header_pane_g

0xbea2,	// (0x00024737) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbea2,	// (0x00024737) hc_cl_list_double_graphic_heading_pane

0xbeb2,	// (0x00024747) hc_cl_list_single_graphic_pane_ParamLimits

0xbeb2,	// (0x00024747) hc_cl_list_single_graphic_pane

0xbec4,	// (0x00024759) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbec4,	// (0x00024759) hc_cl_list_single_graphic_pane_g1

0xbed0,	// (0x00024765) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbed0,	// (0x00024765) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00028349) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00028349) hc_cl_list_single_graphic_pane_g

0xbee4,	// (0x00024779) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbee4,	// (0x00024779) hc_cl_list_single_graphic_pane_t1

0xbec4,	// (0x00024759) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbec4,	// (0x00024759) hc_cl_list_double_graphic_heading_pane_g1

0xbef9,	// (0x0002478e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbef9,	// (0x0002478e) hc_cl_list_double_graphic_heading_pane_g2

0xbf0d,	// (0x000247a2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbf0d,	// (0x000247a2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0002834e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0002834e) hc_cl_list_double_graphic_heading_pane_g

0xbf21,	// (0x000247b6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbf21,	// (0x000247b6) hc_cl_list_double_graphic_heading_pane_t1

0xbf36,	// (0x000247cb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbf36,	// (0x000247cb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x00028355) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x00028355) hc_cl_list_double_graphic_heading_pane_t

0x71c1,	// (0x0001fa56) vid4_progress_pane_g1

0x71d3,	// (0x0001fa68) vid4_progress_pane_g2

0x612f,	// (0x0001e9c4) vid4_progress_pane_g3

0x71e5,	// (0x0001fa7a) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0002835a) vid4_progress_pane_g

0x7203,	// (0x0001fa98) vid4_progress_pane_t1

0x7218,	// (0x0001faad) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x00028365) vid4_progress_pane_t

0x7243,	// (0x0001fad8) wait_bar_pane_cp07

0x1a5e,	// (0x0001a2f3) blid_firmament_pane_ParamLimits

0x1aa1,	// (0x0001a336) popup_blid_sat_info2_window_g1

0x1ac5,	// (0x0001a35a) popup_blid_sat_info2_window_t3

0x1ad3,	// (0x0001a368) popup_blid_sat_info2_window_t4

0x1ae1,	// (0x0001a376) popup_blid_sat_info2_window_t5

0x1aef,	// (0x0001a384) popup_blid_sat_info2_window_t6

0x1aff,	// (0x0001a394) popup_blid_sat_info2_window_t7

0x1b0d,	// (0x0001a3a2) popup_blid_sat_info2_window_t8

0x1b1b,	// (0x0001a3b0) popup_blid_sat_info2_window_t9

0x1b29,	// (0x0001a3be) popup_blid_sat_info2_window_t10

0x1bf1,	// (0x0001a486) aid_firma_cardinal_ParamLimits

0x1c05,	// (0x0001a49a) blid_firmament_pane_t1_ParamLimits

0x1c1c,	// (0x0001a4b1) blid_firmament_pane_t2_ParamLimits

0x1c33,	// (0x0001a4c8) blid_firmament_pane_t3_ParamLimits

0x1c4a,	// (0x0001a4df) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x00027f78) blid_firmament_pane_t_ParamLimits

0x1c61,	// (0x0001a4f6) blid_sat_info_pane_ParamLimits

0x615e,	// (0x0001e9f3) main_cam_set_pane_ParamLimits

0xadce,	// (0x00023663) aid_size_cell_colour_35_ParamLimits

0xade8,	// (0x0002367d) aid_size_cell_colour_112_ParamLimits

0xadff,	// (0x00023694) aid_size_cell_effect_ParamLimits

0xe0e4,	// (0x00026979) bg_tb_trans_pane_cp02_ParamLimits

0xeec6,	// (0x0002775b) heading_imed_pane_ParamLimits

0xae19,	// (0x000236ae) listscroll_imed_pane_ParamLimits

0x0d6a,	// (0x000195ff) popup_call2_audio_first_window_g5_ParamLimits

0x0d6a,	// (0x000195ff) popup_call2_audio_first_window_g5

0x699b,	// (0x0001f230) aid_size_touch_image3_arrow_left_ParamLimits

0x699b,	// (0x0001f230) aid_size_touch_image3_arrow_left

0x69b1,	// (0x0001f246) aid_size_touch_image3_arrow_right_ParamLimits

0x69b1,	// (0x0001f246) aid_size_touch_image3_arrow_right

0x722e,	// (0x0001fac3) vid4_progress_pane_t3

0xb0d2,	// (0x00023967) main_hwr_training_symbol_option_pane_ParamLimits

0xb0d2,	// (0x00023967) main_hwr_training_symbol_option_pane

0x2441,	// (0x0001acd6) popup_hwr_training_preview_window_ParamLimits

0x2441,	// (0x0001acd6) popup_hwr_training_preview_window

0x6691,	// (0x0001ef26) hwr_training_navi_pane_g5_ParamLimits

0x6691,	// (0x0001ef26) hwr_training_navi_pane_g5

0x2a11,	// (0x0001b2a6) popup_char_count_window

0x5caa,	// (0x0001e53f) bg_popup_sub_pane_cp20_ParamLimits

0x70ff,	// (0x0001f994) list_vitu2_match_list_pane_ParamLimits

0x710b,	// (0x0001f9a0) vitu2_page_scroll_pane_ParamLimits

0x710b,	// (0x0001f9a0) vitu2_page_scroll_pane

0x30ec,	// (0x0001b981) list_single_hwr_training_symbol_option_pane_ParamLimits

0x30ec,	// (0x0001b981) list_single_hwr_training_symbol_option_pane

0x30ff,	// (0x0001b994) list_single_hwr_training_symbol_option_pane_g1

0x3107,	// (0x0001b99c) list_single_hwr_training_symbol_option_pane_t1

0x3115,	// (0x0001b9aa) bg_button_pane_cp023

0x311e,	// (0x0001b9b3) bg_button_pane_cp024

0xbf4b,	// (0x000247e0) vitu2_page_scroll_pane_g1

0xbf53,	// (0x000247e8) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0002836c) vitu2_page_scroll_pane_g

0xbf5d,	// (0x000247f2) vitu2_page_scroll_pane_t1

0x197a,	// (0x0001a20f) popup_char_count_window_g1

0x3151,	// (0x0001b9e6) popup_char_count_window_g2

0x315a,	// (0x0001b9ef) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00028371) popup_char_count_window_g

0x3163,	// (0x0001b9f8) popup_char_count_window_t1

0x5cb8,	// (0x0001e54d) main_vded2_pane

0x213e,	// (0x0001a9d3) aid_size_cell_imed_line

0x2148,	// (0x0001a9dd) grid_imed_line_width_pane

0x6d0c,	// (0x0001f5a1) vid4_indicators_pane_g4

0x3171,	// (0x0001ba06) cell_imed_line_width_pane_ParamLimits

0x3171,	// (0x0001ba06) cell_imed_line_width_pane

0x3187,	// (0x0001ba1c) cell_imed_line_width_pane_g1

0x3190,	// (0x0001ba25) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00028378) cell_imed_line_width_pane_g

0xbf6c,	// (0x00024801) main_vded2_pane_g1_ParamLimits

0xbf6c,	// (0x00024801) main_vded2_pane_g1

0xbf7b,	// (0x00024810) main_vded2_pane_g2_ParamLimits

0xbf7b,	// (0x00024810) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0002837d) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0002837d) main_vded2_pane_g

0xbf89,	// (0x0002481e) vded2_slider_pane_ParamLimits

0xbf89,	// (0x0002481e) vded2_slider_pane

0xbf96,	// (0x0002482b) aid_size_touch_vded2_end

0xbfa0,	// (0x00024835) aid_size_touch_vded2_playhead

0x3198,	// (0x0001ba2d) aid_size_touch_vded2_start

0x31a0,	// (0x0001ba35) vded2_slider_bg_pane

0x31a9,	// (0x0001ba3e) vded2_slider_pane_g1

0x31b2,	// (0x0001ba47) vded2_slider_pane_g2

0xbfa8,	// (0x0002483d) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00028382) vded2_slider_pane_g

0x2805,	// (0x0001b09a) vded2_slider_bg_pane_g1

0x280e,	// (0x0001b0a3) vded2_slider_bg_pane_g2

0x2817,	// (0x0001b0ac) vded2_slider_bg_pane_g3

0x0002,

0xf7b3,	// (0x00028048) vded2_slider_bg_pane_g

0x9648,	// (0x00021edd) aid_postcard_touch_down_pane_ParamLimits

0x9648,	// (0x00021edd) aid_postcard_touch_down_pane

0x9658,	// (0x00021eed) aid_postcard_touch_up_pane_ParamLimits

0x9658,	// (0x00021eed) aid_postcard_touch_up_pane

0x5cb8,	// (0x0001e54d) main_blid2_pane

0x6187,	// (0x0001ea1c) popup_blid2_search_window

0xdfe5,	// (0x0002687a) blid2_gps_pane

0xdfe5,	// (0x0002687a) blid2_navig_pane

0xdfe5,	// (0x0002687a) blid2_search_pane

0xdfe5,	// (0x0002687a) blid2_tripm_pane

0xbfb1,	// (0x00024846) blid2_search_pane_g1_ParamLimits

0xbfb1,	// (0x00024846) blid2_search_pane_g1

0xbfbd,	// (0x00024852) blid2_search_pane_t1_ParamLimits

0xbfbd,	// (0x00024852) blid2_search_pane_t1

0xbfcf,	// (0x00024864) aid_size_cell_blid2_gps_ParamLimits

0xbfcf,	// (0x00024864) aid_size_cell_blid2_gps

0xbfdf,	// (0x00024874) blid2_gps_pane_g1_ParamLimits

0xbfdf,	// (0x00024874) blid2_gps_pane_g1

0xbfeb,	// (0x00024880) grid_blid2_satellite_pane_ParamLimits

0xbfeb,	// (0x00024880) grid_blid2_satellite_pane

0xbff9,	// (0x0002488e) blid2_navig_pane_g1_ParamLimits

0xbff9,	// (0x0002488e) blid2_navig_pane_g1

0xc005,	// (0x0002489a) blid2_navig_pane_t1_ParamLimits

0xc005,	// (0x0002489a) blid2_navig_pane_t1

0xc017,	// (0x000248ac) blid2_navig_pane_t2_ParamLimits

0xc017,	// (0x000248ac) blid2_navig_pane_t2

0x0001,

0xfaf4,	// (0x00028389) blid2_navig_pane_t_ParamLimits

0xfaf4,	// (0x00028389) blid2_navig_pane_t

0xc029,	// (0x000248be) blid2_navig_ring_pane_ParamLimits

0xc029,	// (0x000248be) blid2_navig_ring_pane

0xc039,	// (0x000248ce) blid2_speed_pane_ParamLimits

0xc039,	// (0x000248ce) blid2_speed_pane

0xc045,	// (0x000248da) blid2_tripm_pane_g1_ParamLimits

0xc045,	// (0x000248da) blid2_tripm_pane_g1

0xc055,	// (0x000248ea) blid2_tripm_pane_g2_ParamLimits

0xc055,	// (0x000248ea) blid2_tripm_pane_g2

0xc061,	// (0x000248f6) blid2_tripm_pane_g3_ParamLimits

0xc061,	// (0x000248f6) blid2_tripm_pane_g3

0xc06d,	// (0x00024902) blid2_tripm_pane_g4_ParamLimits

0xc06d,	// (0x00024902) blid2_tripm_pane_g4

0xc079,	// (0x0002490e) blid2_tripm_pane_g5_ParamLimits

0xc079,	// (0x0002490e) blid2_tripm_pane_g5

0x0005,

0xfaf9,	// (0x0002838e) blid2_tripm_pane_g_ParamLimits

0xfaf9,	// (0x0002838e) blid2_tripm_pane_g

0xc095,	// (0x0002492a) blid2_tripm_pane_t1_ParamLimits

0xc095,	// (0x0002492a) blid2_tripm_pane_t1

0xc0a7,	// (0x0002493c) blid2_tripm_pane_t2_ParamLimits

0xc0a7,	// (0x0002493c) blid2_tripm_pane_t2

0xc0b9,	// (0x0002494e) blid2_tripm_pane_t3_ParamLimits

0xc0b9,	// (0x0002494e) blid2_tripm_pane_t3

0x0003,

0xfb06,	// (0x0002839b) blid2_tripm_pane_t_ParamLimits

0xfb06,	// (0x0002839b) blid2_tripm_pane_t

0xc0eb,	// (0x00024980) cell_blid2_satellite_pane_ParamLimits

0xc0eb,	// (0x00024980) cell_blid2_satellite_pane

0xc109,	// (0x0002499e) cell_blid2_satellite_pane_g1

0x31ba,	// (0x0001ba4f) cell_blid2_satellite_pane_t1

0x1c71,	// (0x0001a506) blid2_speed_pane_g1

0x31c8,	// (0x0001ba5d) blid2_speed_pane_t1

0x31d6,	// (0x0001ba6b) blid2_speed_pane_t2

0x0001,

0xfb0f,	// (0x000283a4) blid2_speed_pane_t

0x1c71,	// (0x0001a506) blid2_navig_ring_pane_g1

0xc112,	// (0x000249a7) blid2_navig_ring_pane_g2

0xc11a,	// (0x000249af) blid2_navig_ring_pane_g3

0xc122,	// (0x000249b7) blid2_navig_ring_pane_g4

0xc12a,	// (0x000249bf) blid2_navig_ring_pane_g5

0x0004,

0xfb14,	// (0x000283a9) blid2_navig_ring_pane_g

0xdfe5,	// (0x0002687a) bg_popup_window_pane_cp011

0x31e4,	// (0x0001ba79) popup_blid2_search_window_g1

0x31ec,	// (0x0001ba81) popup_blid2_search_window_t1

0x31fa,	// (0x0001ba8f) popup_blid2_search_window_t2

0x0001,

0xfb1f,	// (0x000283b4) popup_blid2_search_window_t

0xeb2c,	// (0x000273c1) main_browser_pane_g1

0xe773,	// (0x00027008) main_browser_pane_ParamLimits

0x615e,	// (0x0001e9f3) bg_button_pane_cp011_ParamLimits

0x7021,	// (0x0001f8b6) cell_vitu2_function_pane_g1_ParamLimits

0x173c,	// (0x00019fd1) bg_popup_sub_pane_cp22_ParamLimits

0xbade,	// (0x00024373) input_focus_pane_cp08_ParamLimits

0xbaf5,	// (0x0002438a) popup_vitu2_query_button_pane_ParamLimits

0xbaf5,	// (0x0002438a) popup_vitu2_query_button_pane

0xbb06,	// (0x0002439b) popup_vitu2_query_input_button_pane

0x2d27,	// (0x0001b5bc) popup_vitu2_query_window_g1_ParamLimits

0xbb10,	// (0x000243a5) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x000282bc) popup_vitu2_query_window_g_ParamLimits

0xdfe5,	// (0x0002687a) bg_button_pane_cp026

0xc132,	// (0x000249c7) popup_vitu2_query_input_button_pane_g1

0xdfe5,	// (0x0002687a) bg_button_pane_cp025

0x3208,	// (0x0001ba9d) popup_vitu2_query_button_pane_t1

0xa36a,	// (0x00022bff) main_mp3_pane_t6

0xa37a,	// (0x00022c0f) popup_slider_window_cp01

0x6be7,	// (0x0001f47c) cam4_battery_pane

0x6cc5,	// (0x0001f55a) cam4_battery_pane_cp02

0x71b9,	// (0x0001fa4e) cam4_battery_pane_cp01

0x71b9,	// (0x0001fa4e) cam4_battery_pane_cp03

0x3216,	// (0x0001baab) cam4_battery_pane_g1

0x1c71,	// (0x0001a506) cam4_battery_pane_g2

0x0001,

0xfb24,	// (0x000283b9) cam4_battery_pane_g

0x1b37,	// (0x0001a3cc) popup_blid_sat_info2_window_t11

0x8f81,	// (0x00021816) aid_size_touch_mv_arrow_left_ParamLimits

0x8fac,	// (0x00021841) aid_size_touch_mv_arrow_right_ParamLimits

0x01f1,	// (0x00018a86) navi_pane_g1_ParamLimits

0x8feb,	// (0x00021880) navi_pane_g2_ParamLimits

0x9019,	// (0x000218ae) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00027c8a) navi_pane_g_ParamLimits

0x9073,	// (0x00021908) navi_pane_mv_t1_ParamLimits

0xae25,	// (0x000236ba) grid_imed_effect_pane_ParamLimits

0x7d8d,	// (0x00020622) aid_placing_vt_slider_lsc

0xea77,	// (0x0002730c) aid_placing_vt_slider_prt

0xe0e4,	// (0x00026979) bg_tb_trans_pane_cp01_ParamLimits

0x1dc1,	// (0x0001a656) popup_image_details_window_g1_ParamLimits

0x1dd4,	// (0x0001a669) popup_image_details_window_g2_ParamLimits

0x1de9,	// (0x0001a67e) popup_image_details_window_g3_ParamLimits

0x1de9,	// (0x0001a67e) popup_image_details_window_g3

0xf728,	// (0x00027fbd) popup_image_details_window_g_ParamLimits

0x1dfd,	// (0x0001a692) popup_image_details_window_t1_ParamLimits

0x1e0f,	// (0x0001a6a4) popup_image_details_window_t2_ParamLimits

0x1e28,	// (0x0001a6bd) popup_image_details_window_t3_ParamLimits

0x1e3c,	// (0x0001a6d1) popup_image_details_window_t4_ParamLimits

0x1e57,	// (0x0001a6ec) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x00027fc4) popup_image_details_window_t_ParamLimits

0xbe77,	// (0x0002470c) cl_header_name_pane_ParamLimits

0xbe77,	// (0x0002470c) cl_header_name_pane

0xc13a,	// (0x000249cf) cl_header_name_pane_t1_ParamLimits

0xc13a,	// (0x000249cf) cl_header_name_pane_t1

0xc151,	// (0x000249e6) cl_header_name_pane_t2_ParamLimits

0xc151,	// (0x000249e6) cl_header_name_pane_t2

0xc17b,	// (0x00024a10) cl_header_name_pane_t3_ParamLimits

0xc17b,	// (0x00024a10) cl_header_name_pane_t3

0x0002,

0xfb29,	// (0x000283be) cl_header_name_pane_t_ParamLimits

0xfb29,	// (0x000283be) cl_header_name_pane_t

0x9044,	// (0x000218d9) navi_pane_mv_g2_ParamLimits

0x29ce,	// (0x0001b263) field_vitu2_entry_pane_g1_ParamLimits

0x29da,	// (0x0001b26f) field_vitu2_entry_pane_g2_ParamLimits

0x29e6,	// (0x0001b27b) field_vitu2_entry_pane_g3_ParamLimits

0x29e6,	// (0x0001b27b) field_vitu2_entry_pane_g3

0xf926,	// (0x000281bb) field_vitu2_entry_pane_g_ParamLimits

0x6ef6,	// (0x0001f78b) cell_vitu2_itu_pane_g1_ParamLimits

0x6f06,	// (0x0001f79b) cell_vitu2_itu_pane_g2_ParamLimits

0x6f06,	// (0x0001f79b) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x000281c7) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x000281c7) cell_vitu2_itu_pane_g

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp05_ParamLimits

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp05

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp03

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp04

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp10_ParamLimits

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp10

0xbe19,	// (0x000246ae) bg_vkb2_func_pane_cp08

0xbdff,	// (0x00024694) bg_vkb2_func_pane_cp06

0xbe0d,	// (0x000246a2) bg_vkb2_func_pane_cp07

0x3127,	// (0x0001b9bc) bg_vkb2_func_pane_cp11_ParamLimits

0x3127,	// (0x0001b9bc) bg_vkb2_func_pane_cp11

0x313c,	// (0x0001b9d1) bg_vkb2_func_pane_cp12_ParamLimits

0x313c,	// (0x0001b9d1) bg_vkb2_func_pane_cp12

0xdfe5,	// (0x0002687a) bg_vkb2_func_pane_cp09

0x2a23,	// (0x0001b2b8) bg_vkb2_func_pane_g1

0xec3d,	// (0x000274d2) bg_vkb2_func_pane_g2

0x2a2b,	// (0x0001b2c0) bg_vkb2_func_pane_g3

0x2a33,	// (0x0001b2c8) bg_vkb2_func_pane_g4

0x2cb2,	// (0x0001b547) bg_vkb2_func_pane_g5

0x2a4b,	// (0x0001b2e0) bg_vkb2_func_pane_g6

0x2a53,	// (0x0001b2e8) bg_vkb2_func_pane_g7

0x2a43,	// (0x0001b2d8) bg_vkb2_func_pane_g8

0xec1d,	// (0x000274b2) bg_vkb2_func_pane_g9

0x0008,

0xfb30,	// (0x000283c5) bg_vkb2_func_pane_g

0xc087,	// (0x0002491c) blid2_tripm_pane_g6_ParamLimits

0xc087,	// (0x0002491c) blid2_tripm_pane_g6

0x2730,	// (0x0001afc5) mp4_progress_pane_g1

0xc0df,	// (0x00024974) blid2_tripm_values_pane_ParamLimits

0xc0df,	// (0x00024974) blid2_tripm_values_pane

0xc1a0,	// (0x00024a35) blid2_tripm_values_pane_t1

0xc1ae,	// (0x00024a43) blid2_tripm_values_pane_t2

0xc1bc,	// (0x00024a51) blid2_tripm_values_pane_t3

0xc1ca,	// (0x00024a5f) blid2_tripm_values_pane_t4

0xc1d8,	// (0x00024a6d) blid2_tripm_values_pane_t5

0xc1e6,	// (0x00024a7b) blid2_tripm_values_pane_t6

0xc1f4,	// (0x00024a89) blid2_tripm_values_pane_t7

0xc202,	// (0x00024a97) blid2_tripm_values_pane_t8

0xc210,	// (0x00024aa5) blid2_tripm_values_pane_t9

0x0008,

0xfb43,	// (0x000283d8) blid2_tripm_values_pane_t

0x7dcb,	// (0x00020660) call_video_pane_t1_ParamLimits

0x7de8,	// (0x0002067d) call_video_pane_t2_ParamLimits

0xf27e,	// (0x00027b13) call_video_pane_t_ParamLimits

0x95b1,	// (0x00021e46) msg_header_pane_g1_ParamLimits

0x0436,	// (0x00018ccb) msg_header_pane_g2_ParamLimits

0x0436,	// (0x00018ccb) msg_header_pane_g2

0x0001,

0xf498,	// (0x00027d2d) msg_header_pane_g_ParamLimits

0xf498,	// (0x00027d2d) msg_header_pane_g

0xe773,	// (0x00027008) main_clock2_pane_ParamLimits

0xac38,	// (0x000234cd) grid_clock2_toolbar_pane_ParamLimits

0xac38,	// (0x000234cd) grid_clock2_toolbar_pane

0xac38,	// (0x000234cd) listscroll_clock2_pane_ParamLimits

0xac38,	// (0x000234cd) listscroll_clock2_pane

0xacd4,	// (0x00023569) main_clock2_pane_t3_ParamLimits

0xacd4,	// (0x00023569) main_clock2_pane_t3

0xace6,	// (0x0002357b) main_clock2_pane_t4_ParamLimits

0xace6,	// (0x0002357b) main_clock2_pane_t4

0x3220,	// (0x0001bab5) cell_clock2_toolbar_pane

0x3228,	// (0x0001babd) cell_clock2_toolbar_pane_cp01

0x3228,	// (0x0001babd) cell_clock2_toolbar_pane_cp02

0x3230,	// (0x0001bac5) cell_clock2_toolbar_pane_cp03

0x3238,	// (0x0001bacd) list_clock2_pane

0x0157,	// (0x000189ec) scroll_pane_cp10

0x3240,	// (0x0001bad5) list_single_clock2_pane_ParamLimits

0x3240,	// (0x0001bad5) list_single_clock2_pane

0x0291,	// (0x00018b26) list_highlight_pane_cp08

0x324d,	// (0x0001bae2) list_single_clock2_pane_t1

0x325b,	// (0x0001baf0) list_single_clock2_pane_t2

0x0001,

0xfb56,	// (0x000283eb) list_single_clock2_pane_t

0xdfe5,	// (0x0002687a) bg_button_pane_cp10

0x3269,	// (0x0001bafe) cell_clock2_toolbar_pane_g1

0x60ed,	// (0x0001e982) aid_main_viewer_pane_g1_ParamLimits

0x60ed,	// (0x0001e982) aid_main_viewer_pane_g1

0x60f9,	// (0x0001e98e) aid_main_viewer_pane_g2_ParamLimits

0x60f9,	// (0x0001e98e) aid_main_viewer_pane_g2

0x9604,	// (0x00021e99) aid_main_viewer_pane_g3_ParamLimits

0x9604,	// (0x00021e99) aid_main_viewer_pane_g3

0x9615,	// (0x00021eaa) aid_main_viewer_pane_g4_ParamLimits

0x9615,	// (0x00021eaa) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00027d3e) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00027d3e) aid_main_viewer_pane_g

0x6151,	// (0x0001e9e6) main_calc_pane_ParamLimits

0x616c,	// (0x0001ea01) main_dialer2_pane_ParamLimits

0x5cb8,	// (0x0001e54d) main_cam6_pane

0x5cb8,	// (0x0001e54d) main_vid6_pane

0xac44,	// (0x000234d9) listscroll_gen_pane_cp06_ParamLimits

0xac44,	// (0x000234d9) listscroll_gen_pane_cp06

0xacf8,	// (0x0002358d) main_clock2_pane_t5_ParamLimits

0xacf8,	// (0x0002358d) main_clock2_pane_t5

0xad47,	// (0x000235dc) aid_call2_pane_cp10_ParamLimits

0xad59,	// (0x000235ee) aid_call_pane_cp10_ParamLimits

0x01c6,	// (0x00018a5b) popup_clock_analogue_window_cp10_g1_ParamLimits

0x01c6,	// (0x00018a5b) popup_clock_analogue_window_cp10_g2_ParamLimits

0xad6b,	// (0x00023600) popup_clock_analogue_window_cp10_g3_ParamLimits

0xad6b,	// (0x00023600) popup_clock_analogue_window_cp10_g4_ParamLimits

0x01c6,	// (0x00018a5b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x00028074) popup_clock_analogue_window_cp10_g_ParamLimits

0xad7d,	// (0x00023612) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb198,	// (0x00023a2d) cell_dialer2_keypad_pane_g2_ParamLimits

0xb198,	// (0x00023a2d) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0002815a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0002815a) cell_dialer2_keypad_pane_g

0xb1b4,	// (0x00023a49) cell_dialer2_keypad_pane_t1

0xb643,	// (0x00023ed8) main_cset_text2_pane_ParamLimits

0xb643,	// (0x00023ed8) main_cset_text2_pane

0x2f1f,	// (0x0001b7b4) area_vitu2_query_pane_g1_ParamLimits

0xbd9e,	// (0x00024633) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0002830f) area_vitu2_query_pane_g_ParamLimits

0x2fa3,	// (0x0001b838) area_vitu2_query_pane_t7_ParamLimits

0x2fa3,	// (0x0001b838) area_vitu2_query_pane_t7

0xbdff,	// (0x00024694) bg_button_pane_cp018_ParamLimits

0xbe0d,	// (0x000246a2) bg_button_pane_cp021_ParamLimits

0xbe19,	// (0x000246ae) bg_button_pane_cp022_ParamLimits

0xbe19,	// (0x000246ae) bg_vkb2_func_pane_cp08_ParamLimits

0xbdff,	// (0x00024694) bg_vkb2_func_pane_cp06_ParamLimits

0xbe0d,	// (0x000246a2) bg_vkb2_func_pane_cp07_ParamLimits

0xbe2a,	// (0x000246bf) input_focus_pane_cp09_ParamLimits

0x7257,	// (0x0001faec) cam6_autofocus_pane_ParamLimits

0x7257,	// (0x0001faec) cam6_autofocus_pane

0x7279,	// (0x0001fb0e) cam6_image_uncrop_pane_ParamLimits

0x7279,	// (0x0001fb0e) cam6_image_uncrop_pane

0x72a6,	// (0x0001fb3b) cam6_indi_pane_ParamLimits

0x72a6,	// (0x0001fb3b) cam6_indi_pane

0x72c0,	// (0x0001fb55) cam6_mode_pane_ParamLimits

0x72c0,	// (0x0001fb55) cam6_mode_pane

0x72d4,	// (0x0001fb69) cam6_timer_pane_ParamLimits

0x72d4,	// (0x0001fb69) cam6_timer_pane

0x72e0,	// (0x0001fb75) cam6_zoom_pane_ParamLimits

0x72e0,	// (0x0001fb75) cam6_zoom_pane

0xc21e,	// (0x00024ab3) cam6_mode_pane_g1_ParamLimits

0xc21e,	// (0x00024ab3) cam6_mode_pane_g1

0xc22a,	// (0x00024abf) cam6_mode_pane_g2_ParamLimits

0xc22a,	// (0x00024abf) cam6_mode_pane_g2

0xc236,	// (0x00024acb) cam6_mode_pane_g3_ParamLimits

0xc236,	// (0x00024acb) cam6_mode_pane_g3

0xc242,	// (0x00024ad7) cam6_mode_pane_g4_ParamLimits

0xc242,	// (0x00024ad7) cam6_mode_pane_g4

0x0003,

0xfb5b,	// (0x000283f0) cam6_mode_pane_g_ParamLimits

0xfb5b,	// (0x000283f0) cam6_mode_pane_g

0x2820,	// (0x0001b0b5) bg_tb_trans_pane_cp08_ParamLimits

0x2820,	// (0x0001b0b5) bg_tb_trans_pane_cp08

0x327f,	// (0x0001bb14) cam6_battery_pane_ParamLimits

0x327f,	// (0x0001bb14) cam6_battery_pane

0x3295,	// (0x0001bb2a) cam6_indi_pane_g1_ParamLimits

0x3295,	// (0x0001bb2a) cam6_indi_pane_g1

0x32a7,	// (0x0001bb3c) cam6_indi_pane_g2_ParamLimits

0x32a7,	// (0x0001bb3c) cam6_indi_pane_g2

0x32b9,	// (0x0001bb4e) cam6_indi_pane_g3_ParamLimits

0x32b9,	// (0x0001bb4e) cam6_indi_pane_g3

0x0002,

0xfb64,	// (0x000283f9) cam6_indi_pane_g_ParamLimits

0xfb64,	// (0x000283f9) cam6_indi_pane_g

0x32cb,	// (0x0001bb60) cam6_indi_pane_t1_ParamLimits

0x32cb,	// (0x0001bb60) cam6_indi_pane_t1

0xb337,	// (0x00023bcc) cam6_autofocus_pane_g1

0xb32f,	// (0x00023bc4) cam6_autofocus_pane_g2

0xb347,	// (0x00023bdc) cam6_autofocus_pane_g3

0xb33f,	// (0x00023bd4) cam6_autofocus_pane_g4

0x0003,

0xfb6b,	// (0x00028400) cam6_autofocus_pane_g

0x32f1,	// (0x0001bb86) cam6_timer_pane_g1

0x32f9,	// (0x0001bb8e) cam6_timer_pane_t1

0x3307,	// (0x0001bb9c) cam6_zoom_cont_pane

0x330f,	// (0x0001bba4) cam6_zoom_pane_g1

0x3317,	// (0x0001bbac) cam6_zoom_pane_g2

0xc24e,	// (0x00024ae3) cam6_zoom_pane_g3

0x0002,

0xfb74,	// (0x00028409) cam6_zoom_pane_g

0x1c71,	// (0x0001a506) cam6_battery_pane_g1

0x1c71,	// (0x0001a506) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00027f81) cam6_battery_pane_g

0x331f,	// (0x0001bbb4) cam6_zoom_cont_pane_g1

0x3328,	// (0x0001bbbd) cam6_zoom_cont_pane_g2

0x3331,	// (0x0001bbc6) cam6_zoom_cont_pane_g3

0x0002,

0xfb7b,	// (0x00028410) cam6_zoom_cont_pane_g

0xc26b,	// (0x00024b00) cam6_mode_pane_cp_ParamLimits

0xc26b,	// (0x00024b00) cam6_mode_pane_cp

0xc27f,	// (0x00024b14) cam6_zoom_pane_cp_ParamLimits

0xc27f,	// (0x00024b14) cam6_zoom_pane_cp

0xc29b,	// (0x00024b30) vid6_image_uncrop_cif_pane_ParamLimits

0xc29b,	// (0x00024b30) vid6_image_uncrop_cif_pane

0xc2c7,	// (0x00024b5c) vid6_image_uncrop_nhd_pane_ParamLimits

0xc2c7,	// (0x00024b5c) vid6_image_uncrop_nhd_pane

0xc2e6,	// (0x00024b7b) vid6_image_uncrop_vga_pane_ParamLimits

0xc2e6,	// (0x00024b7b) vid6_image_uncrop_vga_pane

0xc305,	// (0x00024b9a) vid6_image_uncrop_wvga_pane_ParamLimits

0xc305,	// (0x00024b9a) vid6_image_uncrop_wvga_pane

0xc324,	// (0x00024bb9) vid6_indi_pane_ParamLimits

0xc324,	// (0x00024bb9) vid6_indi_pane

0x2820,	// (0x0001b0b5) bg_tb_trans_pane_cp09_ParamLimits

0x2820,	// (0x0001b0b5) bg_tb_trans_pane_cp09

0x3349,	// (0x0001bbde) cam6_battery_pane_cp_ParamLimits

0x3349,	// (0x0001bbde) cam6_battery_pane_cp

0x3355,	// (0x0001bbea) vid6_indi_pane_g1_ParamLimits

0x3355,	// (0x0001bbea) vid6_indi_pane_g1

0x3367,	// (0x0001bbfc) vid6_indi_pane_g2_ParamLimits

0x3367,	// (0x0001bbfc) vid6_indi_pane_g2

0x3379,	// (0x0001bc0e) vid6_indi_pane_g3_ParamLimits

0x3379,	// (0x0001bc0e) vid6_indi_pane_g3

0x3390,	// (0x0001bc25) vid6_indi_pane_g4_ParamLimits

0x3390,	// (0x0001bc25) vid6_indi_pane_g4

0x33a7,	// (0x0001bc3c) vid6_indi_pane_g5_ParamLimits

0x33a7,	// (0x0001bc3c) vid6_indi_pane_g5

0x0004,

0xfb82,	// (0x00028417) vid6_indi_pane_g_ParamLimits

0xfb82,	// (0x00028417) vid6_indi_pane_g

0x33c1,	// (0x0001bc56) vid6_indi_pane_t1_ParamLimits

0x33c1,	// (0x0001bc56) vid6_indi_pane_t1

0x33d7,	// (0x0001bc6c) vid6_indi_pane_t2_ParamLimits

0x33d7,	// (0x0001bc6c) vid6_indi_pane_t2

0x33ff,	// (0x0001bc94) vid6_indi_pane_t3_ParamLimits

0x33ff,	// (0x0001bc94) vid6_indi_pane_t3

0x3427,	// (0x0001bcbc) vid6_indi_pane_t4_ParamLimits

0x3427,	// (0x0001bcbc) vid6_indi_pane_t4

0x0003,

0xfb8d,	// (0x00028422) vid6_indi_pane_t_ParamLimits

0xfb8d,	// (0x00028422) vid6_indi_pane_t

0x344b,	// (0x0001bce0) wait_bar_pane_cp08

0xc349,	// (0x00024bde) main_cset_text2_pane_t1_ParamLimits

0xc349,	// (0x00024bde) main_cset_text2_pane_t1

0xc256,	// (0x00024aeb) listscroll_gen_pane_cp06_t1_ParamLimits

0xc256,	// (0x00024aeb) listscroll_gen_pane_cp06_t1

0x5cb8,	// (0x0001e54d) main_cam6_set_pane

0x6bd9,	// (0x0001f46e) bg_tb_trans_pane_cp06_ParamLimits

0x6bef,	// (0x0001f484) cam4_indicators_pane_g1_ParamLimits

0x6c00,	// (0x0001f495) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00028197) cam4_indicators_pane_g_ParamLimits

0x6c18,	// (0x0001f4ad) cam4_indicators_pane_t1_ParamLimits

0x615e,	// (0x0001e9f3) bg_tb_trans_pane_cp07_ParamLimits

0x6ccf,	// (0x0001f564) vid4_indicators_pane_g1_ParamLimits

0x6ce5,	// (0x0001f57a) vid4_indicators_pane_g2_ParamLimits

0x6cf9,	// (0x0001f58e) vid4_indicators_pane_g3_ParamLimits

0x6d0c,	// (0x0001f5a1) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x000281a9) vid4_indicators_pane_g_ParamLimits

0x6d2a,	// (0x0001f5bf) vid4_indicators_pane_t1_ParamLimits

0x71c1,	// (0x0001fa56) vid4_progress_pane_g1_ParamLimits

0x71d3,	// (0x0001fa68) vid4_progress_pane_g2_ParamLimits

0x612f,	// (0x0001e9c4) vid4_progress_pane_g3_ParamLimits

0x71e5,	// (0x0001fa7a) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0002835a) vid4_progress_pane_g_ParamLimits

0x7203,	// (0x0001fa98) vid4_progress_pane_t1_ParamLimits

0x7218,	// (0x0001faad) vid4_progress_pane_t2_ParamLimits

0x722e,	// (0x0001fac3) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x00028365) vid4_progress_pane_t_ParamLimits

0x7243,	// (0x0001fad8) wait_bar_pane_cp07_ParamLimits

0xc370,	// (0x00024c05) main_cam6_set_pane_g2_ParamLimits

0xc370,	// (0x00024c05) main_cam6_set_pane_g2

0xc37c,	// (0x00024c11) main_cset6_listscroll_pane_ParamLimits

0xc37c,	// (0x00024c11) main_cset6_listscroll_pane

0xc3a9,	// (0x00024c3e) main_cset6_slider_pane_ParamLimits

0xc3a9,	// (0x00024c3e) main_cset6_slider_pane

0xc3b5,	// (0x00024c4a) main_cset6_text2_pane_ParamLimits

0xc3b5,	// (0x00024c4a) main_cset6_text2_pane

0x345a,	// (0x0001bcef) main_cset6_text_pane

0x3462,	// (0x0001bcf7) main_cset_list_pane_copy1_ParamLimits

0x3462,	// (0x0001bcf7) main_cset_list_pane_copy1

0x3472,	// (0x0001bd07) scroll_pane_cp028_copy1

0xc3c8,	// (0x00024c5d) cset_list_set_pane_copy1

0xc3d8,	// (0x00024c6d) aid_position_infowindow_above_copy1

0xc3e0,	// (0x00024c75) aid_position_infowindow_below_copy1

0xc3e8,	// (0x00024c7d) cset_list_set_pane_g1_copy1

0xc3f0,	// (0x00024c85) cset_list_set_pane_g3_copy1_ParamLimits

0xc3f0,	// (0x00024c85) cset_list_set_pane_g3_copy1

0xc3ff,	// (0x00024c94) cset_list_set_pane_t1_copy1_ParamLimits

0xc3ff,	// (0x00024c94) cset_list_set_pane_t1_copy1

0xe0e4,	// (0x00026979) list_highlight_pane_cp021_copy1_ParamLimits

0xe0e4,	// (0x00026979) list_highlight_pane_cp021_copy1

0x347b,	// (0x0001bd10) cset6_slider_pane_ParamLimits

0x347b,	// (0x0001bd10) cset6_slider_pane

0x34a7,	// (0x0001bd3c) main_cset6_slider_pane_g1_ParamLimits

0x34a7,	// (0x0001bd3c) main_cset6_slider_pane_g1

0xc414,	// (0x00024ca9) main_cset6_slider_pane_g2_ParamLimits

0xc414,	// (0x00024ca9) main_cset6_slider_pane_g2

0x34cf,	// (0x0001bd64) main_cset6_slider_pane_g3_ParamLimits

0x34cf,	// (0x0001bd64) main_cset6_slider_pane_g3

0xc43c,	// (0x00024cd1) main_cset6_slider_pane_g4_ParamLimits

0xc43c,	// (0x00024cd1) main_cset6_slider_pane_g4

0xc448,	// (0x00024cdd) main_cset6_slider_pane_g5_ParamLimits

0xc448,	// (0x00024cdd) main_cset6_slider_pane_g5

0x2b56,	// (0x0001b3eb) main_cset6_slider_pane_g7_ParamLimits

0x2b56,	// (0x0001b3eb) main_cset6_slider_pane_g7

0x2b62,	// (0x0001b3f7) main_cset6_slider_pane_g8_ParamLimits

0x2b62,	// (0x0001b3f7) main_cset6_slider_pane_g8

0xc454,	// (0x00024ce9) main_cset6_slider_pane_g9_ParamLimits

0xc454,	// (0x00024ce9) main_cset6_slider_pane_g9

0xc460,	// (0x00024cf5) main_cset6_slider_pane_g10_ParamLimits

0xc460,	// (0x00024cf5) main_cset6_slider_pane_g10

0xc46c,	// (0x00024d01) main_cset6_slider_pane_g11_ParamLimits

0xc46c,	// (0x00024d01) main_cset6_slider_pane_g11

0xc478,	// (0x00024d0d) main_cset6_slider_pane_g12_ParamLimits

0xc478,	// (0x00024d0d) main_cset6_slider_pane_g12

0xc484,	// (0x00024d19) main_cset6_slider_pane_g13_ParamLimits

0xc484,	// (0x00024d19) main_cset6_slider_pane_g13

0xc490,	// (0x00024d25) main_cset6_slider_pane_g14_ParamLimits

0xc490,	// (0x00024d25) main_cset6_slider_pane_g14

0xc49c,	// (0x00024d31) main_cset6_slider_pane_g15_ParamLimits

0xc49c,	// (0x00024d31) main_cset6_slider_pane_g15

0xc4b4,	// (0x00024d49) main_cset6_slider_pane_g16_ParamLimits

0xc4b4,	// (0x00024d49) main_cset6_slider_pane_g16

0xc4c0,	// (0x00024d55) main_cset6_slider_pane_g17_ParamLimits

0xc4c0,	// (0x00024d55) main_cset6_slider_pane_g17

0x0011,

0xfb96,	// (0x0002842b) main_cset6_slider_pane_g_ParamLimits

0xfb96,	// (0x0002842b) main_cset6_slider_pane_g

0x34db,	// (0x0001bd70) main_cset6_slider_pane_t1_ParamLimits

0x34db,	// (0x0001bd70) main_cset6_slider_pane_t1

0xc4e4,	// (0x00024d79) main_cset6_slider_pane_t2_ParamLimits

0xc4e4,	// (0x00024d79) main_cset6_slider_pane_t2

0xc50f,	// (0x00024da4) main_cset6_slider_pane_t3_ParamLimits

0xc50f,	// (0x00024da4) main_cset6_slider_pane_t3

0xc53a,	// (0x00024dcf) main_cset6_slider_pane_t4_ParamLimits

0xc53a,	// (0x00024dcf) main_cset6_slider_pane_t4

0xc565,	// (0x00024dfa) main_cset6_slider_pane_t5_ParamLimits

0xc565,	// (0x00024dfa) main_cset6_slider_pane_t5

0x351c,	// (0x0001bdb1) main_cset6_slider_pane_t7_ParamLimits

0x351c,	// (0x0001bdb1) main_cset6_slider_pane_t7

0xc590,	// (0x00024e25) main_cset6_slider_pane_t8_ParamLimits

0xc590,	// (0x00024e25) main_cset6_slider_pane_t8

0xc5b4,	// (0x00024e49) main_cset6_slider_pane_t9_ParamLimits

0xc5b4,	// (0x00024e49) main_cset6_slider_pane_t9

0xc5d8,	// (0x00024e6d) main_cset6_slider_pane_t10_ParamLimits

0xc5d8,	// (0x00024e6d) main_cset6_slider_pane_t10

0xc5fc,	// (0x00024e91) main_cset6_slider_pane_t11_ParamLimits

0xc5fc,	// (0x00024e91) main_cset6_slider_pane_t11

0x3552,	// (0x0001bde7) main_cset6_slider_pane_t14_ParamLimits

0x3552,	// (0x0001bde7) main_cset6_slider_pane_t14

0x358b,	// (0x0001be20) main_cset6_slider_pane_t15_ParamLimits

0x358b,	// (0x0001be20) main_cset6_slider_pane_t15

0x000b,

0xfbbb,	// (0x00028450) main_cset6_slider_pane_t_ParamLimits

0xfbbb,	// (0x00028450) main_cset6_slider_pane_t

0x2c3a,	// (0x0001b4cf) cset_slider_pane_g1_copy1

0x2c43,	// (0x0001b4d8) cset_slider_pane_g2_copy1

0x2c4c,	// (0x0001b4e1) cset_slider_pane_g3_copy1

0xdfe5,	// (0x0002687a) bg_popup_sub_pane_cp011_copy1

0x3695,	// (0x0001bf2a) main_cset_text_pane_g1_copy1

0x2d3b,	// (0x0001b5d0) main_cset_text_pane_t1_copy1

0x2d49,	// (0x0001b5de) main_cset_text_pane_t2_copy1

0x2d57,	// (0x0001b5ec) main_cset_text_pane_t3_copy1

0x2d65,	// (0x0001b5fa) main_cset_text_pane_t4_copy1

0x2d73,	// (0x0001b608) main_cset_text_pane_t5_copy1

0x369d,	// (0x0001bf32) main_cset_text_pane_t6_copy1

0x36ab,	// (0x0001bf40) main_cset_text_pane_t7_copy1

0xc620,	// (0x00024eb5) main_cset_text2_pane_t1_copy1

0x615e,	// (0x0001e9f3) main_ncimui_pane

0x61c5,	// (0x0001ea5a) popup_query_ncimui_window_ParamLimits

0x61c5,	// (0x0001ea5a) popup_query_ncimui_window

0x1f06,	// (0x0001a79b) field_cale_ev2_pane_g4_ParamLimits

0x1f06,	// (0x0001a79b) field_cale_ev2_pane_g4

0xb138,	// (0x000239cd) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb138,	// (0x000239cd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00028135) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00028135) cell_video_dialer_keypad_pane_g

0xb150,	// (0x000239e5) cell_video_dialer_keypad_pane_t1

0xdfe5,	// (0x0002687a) bg_popup_window_pane_cp012

0x0043,	// (0x000188d8) heading_pane_cp06

0x36d7,	// (0x0001bf6c) ncim_query_content_pane

0xdfe5,	// (0x0002687a) bg_popup_heading_pane_cp01

0x36df,	// (0x0001bf74) ncim_heading_pane_t1

0x36ed,	// (0x0001bf82) ncim_indicator_popup_pane

0x36ff,	// (0x0001bf94) ncim_query_button_pane

0x3715,	// (0x0001bfaa) ncim_query_content_pane_t1

0x3727,	// (0x0001bfbc) ncim_query_content_pane_t2

0x0005,

0xfbff,	// (0x00028494) ncim_query_content_pane_t

0x3761,	// (0x0001bff6) ncim_query_list_pane

0x3773,	// (0x0001c008) ncim_query_popup_pane

0x36ed,	// (0x0001bf82) ncim_indicator_popup_pane_ParamLimits

0xc77a,	// (0x0002500f) ncim_query_content_pane_g1_ParamLimits

0xc77a,	// (0x0002500f) ncim_query_content_pane_g1

0x3715,	// (0x0001bfaa) ncim_query_content_pane_t1_ParamLimits

0x3727,	// (0x0001bfbc) ncim_query_content_pane_t2_ParamLimits

0xc786,	// (0x0002501b) ncim_query_content_pane_t3_ParamLimits

0xc786,	// (0x0002501b) ncim_query_content_pane_t3

0xc7a3,	// (0x00025038) ncim_query_content_pane_t4_ParamLimits

0xc7a3,	// (0x00025038) ncim_query_content_pane_t4

0xc7c0,	// (0x00025055) ncim_query_content_pane_t5_ParamLimits

0xc7c0,	// (0x00025055) ncim_query_content_pane_t5

0x3739,	// (0x0001bfce) ncim_query_content_pane_t6_ParamLimits

0x3739,	// (0x0001bfce) ncim_query_content_pane_t6

0xfbff,	// (0x00028494) ncim_query_content_pane_t_ParamLimits

0x3761,	// (0x0001bff6) ncim_query_list_pane_ParamLimits

0x3773,	// (0x0001c008) ncim_query_popup_pane_ParamLimits

0x3787,	// (0x0001c01c) wait_bar_pane_cp04

0xdfe5,	// (0x0002687a) input_focus_pane_cp011

0x378f,	// (0x0001c024) ncim_query_popup_pane_t1

0x379d,	// (0x0001c032) ncim_list_query_list_pane_ParamLimits

0x379d,	// (0x0001c032) ncim_list_query_list_pane

0xdfe5,	// (0x0002687a) bg_button_pane_cp027

0x37b0,	// (0x0001c045) ncim_query_button_pane_g1

0xdfe5,	// (0x0002687a) list_highlight_pane_cp012

0x37ba,	// (0x0001c04f) ncim_list_query_list_pane_g1

0x37c2,	// (0x0001c057) ncim_list_query_list_pane_t1

0x6c0c,	// (0x0001f4a1) cam4_indicators_pane_g3_ParamLimits

0x6c0c,	// (0x0001f4a1) cam4_indicators_pane_g3

0x6d18,	// (0x0001f5ad) vid4_indicators_pane_g5_ParamLimits

0x6d18,	// (0x0001f5ad) vid4_indicators_pane_g5

0x71f4,	// (0x0001fa89) vid4_progress_pane_g5_ParamLimits

0x71f4,	// (0x0001fa89) vid4_progress_pane_g5

0xc652,	// (0x00024ee7) main_ncimui_pane_g1

0xc6bc,	// (0x00024f51) ncimui_group_query_pane_ParamLimits

0xc6bc,	// (0x00024f51) ncimui_group_query_pane

0xc716,	// (0x00024fab) ncimui_list_pane_ParamLimits

0xc716,	// (0x00024fab) ncimui_list_pane

0xc73d,	// (0x00024fd2) ncimui_text_pane_ParamLimits

0xc73d,	// (0x00024fd2) ncimui_text_pane

0xc7dd,	// (0x00025072) ncimui_text_pane_t1_ParamLimits

0xc7dd,	// (0x00025072) ncimui_text_pane_t1

0x37d0,	// (0x0001c065) ncimui_list_single_graphic_pane_ParamLimits

0x37d0,	// (0x0001c065) ncimui_list_single_graphic_pane

0xc7fc,	// (0x00025091) ncimui_query_pane_ParamLimits

0xc7fc,	// (0x00025091) ncimui_query_pane

0xdfe5,	// (0x0002687a) list_highlight_pane_cp013

0x37e0,	// (0x0001c075) ncim_list_query_list_pane_t1_copy1

0x37ba,	// (0x0001c04f) ncim_list_single_graphic_pane_g1

0x37ee,	// (0x0001c083) ncim_query_button_pane_cp01

0x37fa,	// (0x0001c08f) ncim_query_entry_pane_ParamLimits

0x37fa,	// (0x0001c08f) ncim_query_entry_pane

0x380d,	// (0x0001c0a2) ncimui_query_pane_g1

0x3819,	// (0x0001c0ae) ncimui_query_pane_t1_ParamLimits

0x3819,	// (0x0001c0ae) ncimui_query_pane_t1

0xe0e4,	// (0x00026979) input_focus_pane_cp012

0x3832,	// (0x0001c0c7) ncim_query_entry_pane_t1

0xe773,	// (0x00027008) main_im_pane_ParamLimits

0x615e,	// (0x0001e9f3) main_mobtv_pane_ParamLimits

0x615e,	// (0x0001e9f3) main_mobtv_pane

0xc4cc,	// (0x00024d61) main_cset6_slider_pane_g18_ParamLimits

0xc4cc,	// (0x00024d61) main_cset6_slider_pane_g18

0xc4d8,	// (0x00024d6d) main_cset6_slider_pane_g19_ParamLimits

0xc4d8,	// (0x00024d6d) main_cset6_slider_pane_g19

0x29e6,	// (0x0001b27b) bg_main_mobtv_pane_ParamLimits

0x29e6,	// (0x0001b27b) bg_main_mobtv_pane

0xc80f,	// (0x000250a4) main_mobtv_info_pane

0xc81a,	// (0x000250af) main_mobtv_loading_pane_ParamLimits

0xc81a,	// (0x000250af) main_mobtv_loading_pane

0x3844,	// (0x0001c0d9) main_mobtv_pg_channel_list_pane

0x384e,	// (0x0001c0e3) main_mobtv_pg_hdr_pane

0xc827,	// (0x000250bc) main_mobtv_programe_curr_pane_ParamLimits

0xc827,	// (0x000250bc) main_mobtv_programe_curr_pane

0xc834,	// (0x000250c9) main_mobtv_programe_next_pane_ParamLimits

0xc834,	// (0x000250c9) main_mobtv_programe_next_pane

0x3857,	// (0x0001c0ec) popup_mobtv_noti_window

0x1c71,	// (0x0001a506) main_tv_pg_hdr_pane_g1

0x3861,	// (0x0001c0f6) main_tv_pg_hdr_pane_g2

0x3869,	// (0x0001c0fe) main_tv_pg_hdr_pane_g3

0x3871,	// (0x0001c106) main_tv_pg_hdr_pane_g4

0x3879,	// (0x0001c10e) main_tv_pg_hdr_pane_g5

0x3883,	// (0x0001c118) main_tv_pg_hdr_pane_g6

0x388d,	// (0x0001c122) main_tv_pg_hdr_pane_g7

0x3897,	// (0x0001c12c) main_tv_pg_hdr_pane_g8

0x38a1,	// (0x0001c136) main_tv_pg_hdr_pane_g9

0x38ab,	// (0x0001c140) main_tv_pg_hdr_pane_g10

0x38b5,	// (0x0001c14a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0c,	// (0x000284a1) main_tv_pg_hdr_pane_g

0x38bf,	// (0x0001c154) main_tv_pg_hdr_pane_t1

0x38cd,	// (0x0001c162) main_tv_pg_hdr_pane_t2

0x38db,	// (0x0001c170) main_tv_pg_hdr_pane_t3

0x38eb,	// (0x0001c180) main_tv_pg_hdr_pane_t4

0x38fb,	// (0x0001c190) main_tv_pg_hdr_pane_t5

0x0004,

0xfc23,	// (0x000284b8) main_tv_pg_hdr_pane_t

0x390b,	// (0x0001c1a0) single_mobtv_pg_channel_pane_ParamLimits

0x390b,	// (0x0001c1a0) single_mobtv_pg_channel_pane

0x391d,	// (0x0001c1b2) single_mobtv_pg_channel_table_pane

0x3926,	// (0x0001c1bb) single_mobtv_pg_channel_thumb_pane

0x392f,	// (0x0001c1c4) single_tv_pg_channel_pane_g1

0x3938,	// (0x0001c1cd) single_tv_pg_channel_pane_g2

0x0001,

0xfc2e,	// (0x000284c3) single_tv_pg_channel_pane_g

0x1ea1,	// (0x0001a736) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1ea1,	// (0x0001a736) bg_single_mobtv_pg_channel_thumb_pane

0x3941,	// (0x0001c1d6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3941,	// (0x0001c1d6) single_mobtv_pg_channel_thumb_pane_g1

0x394f,	// (0x0001c1e4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x394f,	// (0x0001c1e4) single_mobtv_pg_channel_thumb_pane_g2

0x395b,	// (0x0001c1f0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x395b,	// (0x0001c1f0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc33,	// (0x000284c8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc33,	// (0x000284c8) single_mobtv_pg_channel_thumb_pane_g

0x3967,	// (0x0001c1fc) single_mobtv_pg_channel_thumb_pane_t1

0x3975,	// (0x0001c20a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3a,	// (0x000284cf) single_mobtv_pg_channel_thumb_pane_t

0x1c71,	// (0x0001a506) bg_single_mobtv_pg_channel_table_pane_g1

0x1c71,	// (0x0001a506) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00027f81) bg_single_mobtv_pg_channel_table_pane_g

0x3983,	// (0x0001c218) single_mobtv_pg_channel_table_pane_t1

0x3991,	// (0x0001c226) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3f,	// (0x000284d4) single_mobtv_pg_channel_table_pane_t

0xc849,	// (0x000250de) main_mobtv_info_pane_g1_ParamLimits

0xc849,	// (0x000250de) main_mobtv_info_pane_g1

0xc865,	// (0x000250fa) main_mobtv_info_pane_t1_ParamLimits

0xc865,	// (0x000250fa) main_mobtv_info_pane_t1

0xc8dd,	// (0x00025172) main_mobtv_info_pane_t2_ParamLimits

0xc8dd,	// (0x00025172) main_mobtv_info_pane_t2

0x0002,

0xfc49,	// (0x000284de) main_mobtv_info_pane_t_ParamLimits

0xfc49,	// (0x000284de) main_mobtv_info_pane_t

0xc96e,	// (0x00025203) wait_bar_pane_cp05

0xc980,	// (0x00025215) main_mobtv_loading_pane_g1_ParamLimits

0xc980,	// (0x00025215) main_mobtv_loading_pane_g1

0xc98c,	// (0x00025221) main_mobtv_loading_pane_g2_ParamLimits

0xc98c,	// (0x00025221) main_mobtv_loading_pane_g2

0xc998,	// (0x0002522d) main_mobtv_loading_pane_g3_ParamLimits

0xc998,	// (0x0002522d) main_mobtv_loading_pane_g3

0x0002,

0xfc50,	// (0x000284e5) main_mobtv_loading_pane_g_ParamLimits

0xfc50,	// (0x000284e5) main_mobtv_loading_pane_g

0x399f,	// (0x0001c234) main_mobtv_loading_pane_t1_ParamLimits

0x399f,	// (0x0001c234) main_mobtv_loading_pane_t1

0x39b7,	// (0x0001c24c) main_mobtv_loading_pane_t2_ParamLimits

0x39b7,	// (0x0001c24c) main_mobtv_loading_pane_t2

0x0001,

0xfc57,	// (0x000284ec) main_mobtv_loading_pane_t_ParamLimits

0xfc57,	// (0x000284ec) main_mobtv_loading_pane_t

0xc9a6,	// (0x0002523b) wait_bar_pane_cp06_ParamLimits

0xc9a6,	// (0x0002523b) wait_bar_pane_cp06

0x39db,	// (0x0001c270) main_mobtv_programe_curr_pane_t1

0x39e9,	// (0x0001c27e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5c,	// (0x000284f1) main_mobtv_programe_curr_pane_t

0x39f7,	// (0x0001c28c) main_mobtv_programe_next_pane_t1

0x3a05,	// (0x0001c29a) main_mobtv_programe_next_pane_t2

0x3a13,	// (0x0001c2a8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc61,	// (0x000284f6) main_mobtv_programe_next_pane_t

0xdfe5,	// (0x0002687a) bg_popup_mobtv_noti_window_pane

0x3a21,	// (0x0001c2b6) popup_mobtv_noti_window_g1

0x3a29,	// (0x0001c2be) popup_mobtv_noti_window_t1

0x3a37,	// (0x0001c2cc) popup_mobtv_noti_window_t2

0x0001,

0xfc68,	// (0x000284fd) popup_mobtv_noti_window_t

0x1c71,	// (0x0001a506) bg_popup_mobtv_noti_window_pane_g1

0x5cb8,	// (0x0001e54d) sc_clock_pane

0x5cb8,	// (0x0001e54d) main_fs_bigclock_pane

0xc0cd,	// (0x00024962) blid2_tripm_pane_t4_ParamLimits

0xc0cd,	// (0x00024962) blid2_tripm_pane_t4

0xc9b2,	// (0x00025247) sc_clock_pane_g1_ParamLimits

0xc9b2,	// (0x00025247) sc_clock_pane_g1

0xc9c0,	// (0x00025255) sc_clock_pane_t1_ParamLimits

0xc9c0,	// (0x00025255) sc_clock_pane_t1

0xc9d5,	// (0x0002526a) sc_clock_pane_t2_ParamLimits

0xc9d5,	// (0x0002526a) sc_clock_pane_t2

0xc9e7,	// (0x0002527c) sc_clock_pane_t3_ParamLimits

0xc9e7,	// (0x0002527c) sc_clock_pane_t3

0x0004,

0xfc6d,	// (0x00028502) sc_clock_pane_t_ParamLimits

0xfc6d,	// (0x00028502) sc_clock_pane_t

0xd6ec,	// (0x00025f81) main_fs_bigclock_indicator_pane_ParamLimits

0xd6ec,	// (0x00025f81) main_fs_bigclock_indicator_pane

0xca74,	// (0x00025309) main_fs_bigclock_pane_g1_ParamLimits

0xca74,	// (0x00025309) main_fs_bigclock_pane_g1

0xd6f8,	// (0x00025f8d) main_fs_bigclock_pane_t1_ParamLimits

0xd6f8,	// (0x00025f8d) main_fs_bigclock_pane_t1

0xd70a,	// (0x00025f9f) main_fs_bigclock_pane_t2_ParamLimits

0xd70a,	// (0x00025f9f) main_fs_bigclock_pane_t2

0xd71e,	// (0x00025fb3) main_fs_bigclock_pane_t3_ParamLimits

0xd71e,	// (0x00025fb3) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x00028701) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x00028701) main_fs_bigclock_pane_t

0x46c2,	// (0x0001cf57) main_fs_bigclock_indicator_pane_g1

0x3707,	// (0x0001bf9c) ncim_query_content_pane_g2_ParamLimits

0x3707,	// (0x0001bf9c) ncim_query_content_pane_g2

0x0001,

0xfbfa,	// (0x0002848f) ncim_query_content_pane_g_ParamLimits

0xfbfa,	// (0x0002848f) ncim_query_content_pane_g

0xc9f9,	// (0x0002528e) sc_clock_pane_t4_ParamLimits

0xc9f9,	// (0x0002528e) sc_clock_pane_t4

0x615e,	// (0x0001e9f3) main_radioblah_pane

0x284a,	// (0x0001b0df) cell_call4_button_pane_t1_copy1_ParamLimits

0x284a,	// (0x0001b0df) cell_call4_button_pane_t1_copy1

0xc66c,	// (0x00024f01) main_ncimui_pane_t1_ParamLimits

0xc66c,	// (0x00024f01) main_ncimui_pane_t1

0xc686,	// (0x00024f1b) main_ncimui_pane_t2_ParamLimits

0xc686,	// (0x00024f1b) main_ncimui_pane_t2

0x0002,

0xfbf3,	// (0x00028488) main_ncimui_pane_t_ParamLimits

0xfbf3,	// (0x00028488) main_ncimui_pane_t

0x3b83,	// (0x0001c418) main_radioblah_anim_pane_ParamLimits

0x3b83,	// (0x0001c418) main_radioblah_anim_pane

0x3b94,	// (0x0001c429) main_radioblah_info_pane_ParamLimits

0x3b94,	// (0x0001c429) main_radioblah_info_pane

0x3ba8,	// (0x0001c43d) main_radioblah_pane_t1_ParamLimits

0x3ba8,	// (0x0001c43d) main_radioblah_pane_t1

0x3bc4,	// (0x0001c459) main_radioblah_pane_t2_ParamLimits

0x3bc4,	// (0x0001c459) main_radioblah_pane_t2

0x0003,

0xfc8e,	// (0x00028523) main_radioblah_pane_t_ParamLimits

0xfc8e,	// (0x00028523) main_radioblah_pane_t

0xcac6,	// (0x0002535b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcac6,	// (0x0002535b) main_radioblah_rocker_ctrl_pane

0x3c0c,	// (0x0001c4a1) main_radioblah_info_pane_t1_ParamLimits

0x3c0c,	// (0x0001c4a1) main_radioblah_info_pane_t1

0xcb0f,	// (0x000253a4) main_radioblah_info_pane_t2_ParamLimits

0xcb0f,	// (0x000253a4) main_radioblah_info_pane_t2

0x0003,

0xfc97,	// (0x0002852c) main_radioblah_info_pane_t_ParamLimits

0xfc97,	// (0x0002852c) main_radioblah_info_pane_t

0x1c71,	// (0x0001a506) main_radioblah_rocker_ctrl_pane_g1

0xcbbf,	// (0x00025454) main_radioblah_rocker_ctrl_pane_g2

0xcbc7,	// (0x0002545c) main_radioblah_rocker_ctrl_pane_g3

0xcbcf,	// (0x00025464) main_radioblah_rocker_ctrl_pane_g4

0xcbd7,	// (0x0002546c) main_radioblah_rocker_ctrl_pane_g5

0xcbdf,	// (0x00025474) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca0,	// (0x00028535) main_radioblah_rocker_ctrl_pane_g

0xc620,	// (0x00024eb5) main_cset_text2_pane_t1_copy1_ParamLimits

0x6b51,	// (0x0001f3e6) cam4_image_uncrop_qvga_pane

0x6c7e,	// (0x0001f513) vid4_image_uncrop_qcif_pane

0x7298,	// (0x0001fb2d) cam6_image_uncrop_qvga_pane_ParamLimits

0x7298,	// (0x0001fb2d) cam6_image_uncrop_qvga_pane

0x3339,	// (0x0001bbce) vid6_image_uncrop_qcif_pane_ParamLimits

0x3339,	// (0x0001bbce) vid6_image_uncrop_qcif_pane

0xdfe5,	// (0x0002687a) bg_popup_preview_window_pane_cp03

0x36b9,	// (0x0001bf4e) list_cset_text2_pane

0x36c1,	// (0x0001bf56) main_cset6_text2_pane_g1

0x36c9,	// (0x0001bf5e) main_cset6_text2_pane_t1

0xcbe7,	// (0x0002547c) list_cset_text2_pane_t1_ParamLimits

0xcbe7,	// (0x0002547c) list_cset_text2_pane_t1

0x615e,	// (0x0001e9f3) main_radioblah_pane_ParamLimits

0xc95a,	// (0x000251ef) main_mobtv_info_pane_t3_ParamLimits

0xc95a,	// (0x000251ef) main_mobtv_info_pane_t3

0xcab4,	// (0x00025349) main_radioblah_pane_g1

0xcadf,	// (0x00025374) main_radioblah_info_pane_g1

0xcb64,	// (0x000253f9) main_radioblah_info_pane_t3_ParamLimits

0xcb64,	// (0x000253f9) main_radioblah_info_pane_t3

0x8acc,	// (0x00021361) highlight_cell_cale_month_pane_ParamLimits

0x8acc,	// (0x00021361) highlight_cell_cale_month_pane

0x5cb8,	// (0x0001e54d) main_phob_fisheye_pane

0x1f95,	// (0x0001a82a) scroll_pane_cp0031_ParamLimits

0x1f95,	// (0x0001a82a) scroll_pane_cp0031

0x344b,	// (0x0001bce0) wait_bar_pane_cp08_ParamLimits

0xc3c8,	// (0x00024c5d) cset_list_set_pane_copy1_ParamLimits

0x3c46,	// (0x0001c4db) highlight_cell_cale_month_pane_g1

0xcbfe,	// (0x00025493) highlight_cell_cale_month_pane_t1

0x300f,	// (0x0001b8a4) list_gen_pane_cp01

0x2b41,	// (0x0001b3d6) scroll_pane_01

0xcc0c,	// (0x000254a1) list_single_double_fisheye_pane

0xcc15,	// (0x000254aa) list_double_fisheye_pane_g1_ParamLimits

0xcc15,	// (0x000254aa) list_double_fisheye_pane_g1

0xcc21,	// (0x000254b6) list_double_fisheye_pane_g2_ParamLimits

0xcc21,	// (0x000254b6) list_double_fisheye_pane_g2

0xcc35,	// (0x000254ca) list_double_fisheye_pane_g3_ParamLimits

0xcc35,	// (0x000254ca) list_double_fisheye_pane_g3

0x0004,

0xfcad,	// (0x00028542) list_double_fisheye_pane_g_ParamLimits

0xfcad,	// (0x00028542) list_double_fisheye_pane_g

0xcc5e,	// (0x000254f3) list_double_fisheye_pane_t1_ParamLimits

0xcc5e,	// (0x000254f3) list_double_fisheye_pane_t1

0xcc79,	// (0x0002550e) list_double_fisheye_pane_t2_ParamLimits

0xcc79,	// (0x0002550e) list_double_fisheye_pane_t2

0x0001,

0xfcb8,	// (0x0002854d) list_double_fisheye_pane_t_ParamLimits

0xfcb8,	// (0x0002854d) list_double_fisheye_pane_t

0x5cb8,	// (0x0001e54d) main_call5_pane

0xca1f,	// (0x000252b4) sc_swipe_pane_ParamLimits

0xca1f,	// (0x000252b4) sc_swipe_pane

0xcca7,	// (0x0002553c) call5_image_pane_ParamLimits

0xcca7,	// (0x0002553c) call5_image_pane

0xccb9,	// (0x0002554e) call5_swipe_1_pane_ParamLimits

0xccb9,	// (0x0002554e) call5_swipe_1_pane

0xccc5,	// (0x0002555a) call5_swipe_2_pane_ParamLimits

0xccc5,	// (0x0002555a) call5_swipe_2_pane

0xcce1,	// (0x00025576) popup_call5_audio_first_window_ParamLimits

0xcce1,	// (0x00025576) popup_call5_audio_first_window

0x1ea1,	// (0x0001a736) call5_swipe_1_pane_g1_ParamLimits

0x1ea1,	// (0x0001a736) call5_swipe_1_pane_g1

0x3c4e,	// (0x0001c4e3) call5_swipe_1_pane_g2_ParamLimits

0x3c4e,	// (0x0001c4e3) call5_swipe_1_pane_g2

0x0001,

0xfcbd,	// (0x00028552) call5_swipe_1_pane_g_ParamLimits

0xfcbd,	// (0x00028552) call5_swipe_1_pane_g

0x3c5a,	// (0x0001c4ef) call5_swipe_1_pane_t1_ParamLimits

0x3c5a,	// (0x0001c4ef) call5_swipe_1_pane_t1

0x1ea1,	// (0x0001a736) call5_swipe_2_pane_g1_ParamLimits

0x1ea1,	// (0x0001a736) call5_swipe_2_pane_g1

0x3c6f,	// (0x0001c504) call5_swipe_2_pane_g2_ParamLimits

0x3c6f,	// (0x0001c504) call5_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x00028557) call5_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x00028557) call5_swipe_2_pane_g

0x3c7b,	// (0x0001c510) call5_swipe_2_pane_t1_ParamLimits

0x3c7b,	// (0x0001c510) call5_swipe_2_pane_t1

0x3c90,	// (0x0001c525) sc_swipe_pane_g1_ParamLimits

0x3c90,	// (0x0001c525) sc_swipe_pane_g1

0x3c9d,	// (0x0001c532) sc_swipe_pane_g2_ParamLimits

0x3c9d,	// (0x0001c532) sc_swipe_pane_g2

0x0001,

0xfcc7,	// (0x0002855c) sc_swipe_pane_g_ParamLimits

0xfcc7,	// (0x0002855c) sc_swipe_pane_g

0x3ca9,	// (0x0001c53e) sc_swipe_pane_t1_ParamLimits

0x3ca9,	// (0x0001c53e) sc_swipe_pane_t1

0x5cb8,	// (0x0001e54d) main_cmail_launcher_pane

0xccf1,	// (0x00025586) aid_size_cell_cmail_l_ParamLimits

0xccf1,	// (0x00025586) aid_size_cell_cmail_l

0xcd01,	// (0x00025596) grid_cmail_l_pane_ParamLimits

0xcd01,	// (0x00025596) grid_cmail_l_pane

0xcd11,	// (0x000255a6) cell_cmail_l_pane_ParamLimits

0xcd11,	// (0x000255a6) cell_cmail_l_pane

0xcd27,	// (0x000255bc) cell_cmail_l_pane_g1_ParamLimits

0xcd27,	// (0x000255bc) cell_cmail_l_pane_g1

0xcd33,	// (0x000255c8) cell_cmail_l_pane_t1_ParamLimits

0xcd33,	// (0x000255c8) cell_cmail_l_pane_t1

0x3cbe,	// (0x0001c553) cell_cmail_l_pane_t2_ParamLimits

0x3cbe,	// (0x0001c553) cell_cmail_l_pane_t2

0x0001,

0xfccc,	// (0x00028561) cell_cmail_l_pane_t_ParamLimits

0xfccc,	// (0x00028561) cell_cmail_l_pane_t

0xe0e4,	// (0x00026979) grid_highlight_pane_cp018_ParamLimits

0xe0e4,	// (0x00026979) grid_highlight_pane_cp018

0x5b21,	// (0x0001e3b6) main2_pane_ParamLimits

0x5b21,	// (0x0001e3b6) main2_pane

0xe81e,	// (0x000270b3) popup_sp_fs_action_menu_bg_pane_g1

0xe826,	// (0x000270bb) popup_sp_fs_action_menu_bg_pane_g2

0xe82e,	// (0x000270c3) popup_sp_fs_action_menu_bg_pane_g3

0xe836,	// (0x000270cb) popup_sp_fs_action_menu_bg_pane_g4

0xe83e,	// (0x000270d3) popup_sp_fs_action_menu_bg_pane_g5

0xe846,	// (0x000270db) popup_sp_fs_action_menu_bg_pane_g6

0xe84e,	// (0x000270e3) popup_sp_fs_action_menu_bg_pane_g7

0xe856,	// (0x000270eb) popup_sp_fs_action_menu_bg_pane_g8

0xe85e,	// (0x000270f3) popup_sp_fs_action_menu_bg_pane_g9

0xe866,	// (0x000270fb) popup_sp_fs_action_menu_bg_pane_g10

0xe866,	// (0x000270fb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00027a2d) popup_sp_fs_action_menu_bg_pane_g

0xe984,	// (0x00027219) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t3_g3_g1

0xe990,	// (0x00027225) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x2_t3_g3_g2

0xe99c,	// (0x00027231) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x00027add) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x00027add) list_medium_line_x2_t3_g3_g

0xe9a8,	// (0x0002723d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe9a8,	// (0x0002723d) list_medium_line_x2_t3_g3_t1

0x7cc2,	// (0x00020557) list_medium_line_x2_t3_g3_t2_ParamLimits

0x7cc2,	// (0x00020557) list_medium_line_x2_t3_g3_t2

0xe9bd,	// (0x00027252) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe9bd,	// (0x00027252) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x00027ae4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x00027ae4) list_medium_line_x2_t3_g3_t

0xe984,	// (0x00027219) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t3_g2_g1

0xe99c,	// (0x00027231) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x00027aeb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x00027aeb) list_medium_line_x2_t3_g2_g

0xe9d2,	// (0x00027267) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe9d2,	// (0x00027267) list_medium_line_x2_t3_g2_t1

0xe9e8,	// (0x0002727d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe9e8,	// (0x0002727d) list_medium_line_x2_t3_g2_t2

0xe9fa,	// (0x0002728f) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe9fa,	// (0x0002728f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x00027af0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x00027af0) list_medium_line_x2_t3_g2_t

0xe984,	// (0x00027219) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t4_g4_g1

0xea18,	// (0x000272ad) list_medium_line_x2_t4_g4_g2_ParamLimits

0xea18,	// (0x000272ad) list_medium_line_x2_t4_g4_g2

0xe990,	// (0x00027225) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x2_t4_g4_g3

0xea24,	// (0x000272b9) list_medium_line_x2_t4_g4_g4_ParamLimits

0xea24,	// (0x000272b9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x00027af7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x00027af7) list_medium_line_x2_t4_g4_g

0x7cd6,	// (0x0002056b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x7cd6,	// (0x0002056b) list_medium_line_x2_t4_g4_t1

0x7cf0,	// (0x00020585) list_medium_line_x2_t4_g4_t2_ParamLimits

0x7cf0,	// (0x00020585) list_medium_line_x2_t4_g4_t2

0x7d06,	// (0x0002059b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x7d06,	// (0x0002059b) list_medium_line_x2_t4_g4_t3

0xea30,	// (0x000272c5) list_medium_line_x2_t4_g4_t4_ParamLimits

0xea30,	// (0x000272c5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x00027b00) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x00027b00) list_medium_line_x2_t4_g4_t

0xe984,	// (0x00027219) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t2_g4_g1

0xea18,	// (0x000272ad) list_medium_line_x2_t2_g4_g2_ParamLimits

0xea18,	// (0x000272ad) list_medium_line_x2_t2_g4_g2

0xe990,	// (0x00027225) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x2_t2_g4_g3

0xe99c,	// (0x00027231) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00027b67) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00027b67) list_medium_line_x2_t2_g4_g

0xed1e,	// (0x000275b3) list_medium_line_x2_t2_g4_t1_ParamLimits

0xed1e,	// (0x000275b3) list_medium_line_x2_t2_g4_t1

0xe9bd,	// (0x00027252) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe9bd,	// (0x00027252) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00027b70) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00027b70) list_medium_line_x2_t2_g4_t

0xe984,	// (0x00027219) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t2_g3_g1

0xe990,	// (0x00027225) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x2_t2_g3_g2

0xe99c,	// (0x00027231) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x00027add) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x00027add) list_medium_line_x2_t2_g3_g

0xed33,	// (0x000275c8) list_medium_line_x2_t2_g3_t1_ParamLimits

0xed33,	// (0x000275c8) list_medium_line_x2_t2_g3_t1

0xe9bd,	// (0x00027252) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe9bd,	// (0x00027252) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00027b75) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00027b75) list_medium_line_x2_t2_g3_t

0x8c8d,	// (0x00021522) main_sp_fs_list_pane_ParamLimits

0x8c8d,	// (0x00021522) main_sp_fs_list_pane

0x8c99,	// (0x0002152e) sp_fs_scroll_pane_ParamLimits

0x8c99,	// (0x0002152e) sp_fs_scroll_pane

0x8ca5,	// (0x0002153a) list_medium_line_x2_t3_t1

0x8cb5,	// (0x0002154a) list_medium_line_x2_t3_t2

0xeeea,	// (0x0002777f) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00027bc0) list_medium_line_x2_t3_t

0x8cc3,	// (0x00021558) list_medium_line_x3_t4_t1

0x8cd3,	// (0x00021568) list_medium_line_x3_t4_t2

0xeef8,	// (0x0002778d) list_medium_line_x3_t4_t3

0xeeea,	// (0x0002777f) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00027bc7) list_medium_line_x3_t4_t

0x8ce1,	// (0x00021576) list_medium_line_x4_t5_t1

0x8cf1,	// (0x00021586) list_medium_line_x4_t5_t2

0xeef8,	// (0x0002778d) list_medium_line_x4_t5_t3

0xef06,	// (0x0002779b) list_medium_line_x4_t5_t4

0xeeea,	// (0x0002777f) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x00027bd0) list_medium_line_x4_t5_t

0xe984,	// (0x00027219) list_medium_line_t4_g4_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_t4_g4_g1

0xea24,	// (0x000272b9) list_medium_line_t4_g4_g2_ParamLimits

0xea24,	// (0x000272b9) list_medium_line_t4_g4_g2

0xef14,	// (0x000277a9) list_medium_line_t4_g4_g3_ParamLimits

0xef14,	// (0x000277a9) list_medium_line_t4_g4_g3

0xe99c,	// (0x00027231) list_medium_line_t4_g4_g4_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x00027bdb) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x00027bdb) list_medium_line_t4_g4_g

0xef20,	// (0x000277b5) list_medium_line_t4_g4_t1_ParamLimits

0xef20,	// (0x000277b5) list_medium_line_t4_g4_t1

0xef35,	// (0x000277ca) list_medium_line_t4_g4_t2_ParamLimits

0xef35,	// (0x000277ca) list_medium_line_t4_g4_t2

0xef4b,	// (0x000277e0) list_medium_line_t4_g4_t3_ParamLimits

0xef4b,	// (0x000277e0) list_medium_line_t4_g4_t3

0xe9bd,	// (0x00027252) list_medium_line_t4_g4_t4_ParamLimits

0xe9bd,	// (0x00027252) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x00027be4) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x00027be4) list_medium_line_t4_g4_t

0x8da3,	// (0x00021638) chi_dic_find_pane_g1

0x617a,	// (0x0001ea0f) main_tport_pane

0x2c88,	// (0x0001b51d) list_medium_line_plain_t1

0x2cda,	// (0x0001b56f) list_medium_line_t2_g2_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_t2_g2_g1

0x2ce6,	// (0x0001b57b) list_medium_line_t2_g2_g2_ParamLimits

0x2ce6,	// (0x0001b57b) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x000282a0) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x000282a0) list_medium_line_t2_g2_g

0xb9ee,	// (0x00024283) list_medium_line_t2_g2_t1_ParamLimits

0xb9ee,	// (0x00024283) list_medium_line_t2_g2_t1

0xba05,	// (0x0002429a) list_medium_line_t2_g2_t2_ParamLimits

0xba05,	// (0x0002429a) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x000282a5) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x000282a5) list_medium_line_t2_g2_t

0x3092,	// (0x0001b927) aid_sp_fs_list_icon_a_sm

0x309a,	// (0x0001b92f) aid_sp_fs_list_icon_d

0x30a2,	// (0x0001b937) aid_sp_fs_text_primary

0x30ab,	// (0x0001b940) aid_sp_fs_text_secondary

0x30b4,	// (0x0001b949) list_medium_line

0x30b4,	// (0x0001b949) list_medium_line_g2

0x30b4,	// (0x0001b949) list_medium_line_g3

0x30b4,	// (0x0001b949) list_medium_line_plain

0x30b4,	// (0x0001b949) list_medium_line_plain_t2

0x30b4,	// (0x0001b949) list_medium_line_plain_t3

0x30b4,	// (0x0001b949) list_medium_line_right_icon

0x30b4,	// (0x0001b949) list_medium_line_right_iconx2

0x30b4,	// (0x0001b949) list_medium_line_t2

0x30b4,	// (0x0001b949) list_medium_line_t2_g2

0x30b4,	// (0x0001b949) list_medium_line_t2_g3

0x30b4,	// (0x0001b949) list_medium_line_t2_right_icon

0x30b4,	// (0x0001b949) list_medium_line_t2_right_iconx2

0x30b4,	// (0x0001b949) list_medium_line_t3

0x30b4,	// (0x0001b949) list_medium_line_t3_g2

0x30b4,	// (0x0001b949) list_medium_line_t3_g3

0x30b4,	// (0x0001b949) list_medium_line_t3_right_iconx2

0x30bd,	// (0x0001b952) list_medium_line_t4_g4

0x30c6,	// (0x0001b95b) list_medium_line_x2

0x30c6,	// (0x0001b95b) list_medium_line_x2_t2_g2

0x30c6,	// (0x0001b95b) list_medium_line_x2_t2_g3

0x30c6,	// (0x0001b95b) list_medium_line_x2_t2_g4

0x30c6,	// (0x0001b95b) list_medium_line_x2_t3

0x30c6,	// (0x0001b95b) list_medium_line_x2_t3_g2

0x30c6,	// (0x0001b95b) list_medium_line_x2_t3_g3

0x30c6,	// (0x0001b95b) list_medium_line_x2_t3_g4

0x30c6,	// (0x0001b95b) list_medium_line_x2_t4_g2

0x30c6,	// (0x0001b95b) list_medium_line_x2_t4_g4

0x30cf,	// (0x0001b964) list_medium_line_x3

0x30cf,	// (0x0001b964) list_medium_line_x3_t4

0x30cf,	// (0x0001b964) list_medium_line_x3_t4_g4

0x30bd,	// (0x0001b952) list_medium_line_x4_t4

0x30bd,	// (0x0001b952) list_medium_line_x4_t4_g7

0x30bd,	// (0x0001b952) list_medium_line_x4_t5

0x30d8,	// (0x0001b96d) list_single_fs_dyc_pane_ParamLimits

0x30d8,	// (0x0001b96d) list_single_fs_dyc_pane

0xe984,	// (0x00027219) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x4_t4_g7_g1

0x35c4,	// (0x0001be59) list_medium_line_x4_t4_g7_g2_ParamLimits

0x35c4,	// (0x0001be59) list_medium_line_x4_t4_g7_g2

0x35d0,	// (0x0001be65) list_medium_line_x4_t4_g7_g3_ParamLimits

0x35d0,	// (0x0001be65) list_medium_line_x4_t4_g7_g3

0x35df,	// (0x0001be74) list_medium_line_x4_t4_g7_g4_ParamLimits

0x35df,	// (0x0001be74) list_medium_line_x4_t4_g7_g4

0x35eb,	// (0x0001be80) list_medium_line_x4_t4_g7_g5_ParamLimits

0x35eb,	// (0x0001be80) list_medium_line_x4_t4_g7_g5

0x35fa,	// (0x0001be8f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x35fa,	// (0x0001be8f) list_medium_line_x4_t4_g7_g6

0x3609,	// (0x0001be9e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3609,	// (0x0001be9e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd4,	// (0x00028469) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd4,	// (0x00028469) list_medium_line_x4_t4_g7_g

0x3615,	// (0x0001beaa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3615,	// (0x0001beaa) list_medium_line_x4_t4_g7_t1

0x362a,	// (0x0001bebf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x362a,	// (0x0001bebf) list_medium_line_x4_t4_g7_t2

0x363f,	// (0x0001bed4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x363f,	// (0x0001bed4) list_medium_line_x4_t4_g7_t3

0x3654,	// (0x0001bee9) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3654,	// (0x0001bee9) list_medium_line_x4_t4_g7_t4

0x3666,	// (0x0001befb) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3666,	// (0x0001befb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe3,	// (0x00028478) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe3,	// (0x00028478) list_medium_line_x4_t4_g7_t

0x3678,	// (0x0001bf0d) list_single_dyc_row_pane_ParamLimits

0x3678,	// (0x0001bf0d) list_single_dyc_row_pane

0xcc9b,	// (0x00025530) call5_gesture_pane_ParamLimits

0xcc9b,	// (0x00025530) call5_gesture_pane

0xccd1,	// (0x00025566) call5_windows_pane_ParamLimits

0xccd1,	// (0x00025566) call5_windows_pane

0xcd49,	// (0x000255de) call5_swipe_1_pane_cp_ParamLimits

0xcd49,	// (0x000255de) call5_swipe_1_pane_cp

0xcd55,	// (0x000255ea) call5_swipe_2_pane_cp_ParamLimits

0xcd55,	// (0x000255ea) call5_swipe_2_pane_cp

0x0291,	// (0x00018b26) call5_image_pane_cp

0xcd61,	// (0x000255f6) popup_call5_audio_first_window_cp_ParamLimits

0xcd61,	// (0x000255f6) popup_call5_audio_first_window_cp

0x3c90,	// (0x0001c525) call5_swipe_1_pane_g1_cp_ParamLimits

0x3c90,	// (0x0001c525) call5_swipe_1_pane_g1_cp

0x3cd0,	// (0x0001c565) call5_swipe_1_pane_g2_cp

0x3ca9,	// (0x0001c53e) call5_swipe_1_pane_t1_cp_ParamLimits

0x3ca9,	// (0x0001c53e) call5_swipe_1_pane_t1_cp

0x3c90,	// (0x0001c525) call5_swipe_2_pane_g1_cp_ParamLimits

0x3c90,	// (0x0001c525) call5_swipe_2_pane_g1_cp

0x3cd8,	// (0x0001c56d) call5_swipe_2_pane_g2_cp

0x3ce0,	// (0x0001c575) call5_swipe_2_pane_t1_cp_ParamLimits

0x3ce0,	// (0x0001c575) call5_swipe_2_pane_t1_cp

0xe0e4,	// (0x00026979) main_sp_fs_email_pane

0x3cf5,	// (0x0001c58a) main_sp_fs_listscroll_pane_te

0x3cfe,	// (0x0001c593) popup_sp_fs_action_menu_pane_ParamLimits

0x3cfe,	// (0x0001c593) popup_sp_fs_action_menu_pane

0x1c71,	// (0x0001a506) bg_sp_fs_ctrlbar_pane_g1

0x3d44,	// (0x0001c5d9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d4d,	// (0x0001c5e2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3d56,	// (0x0001c5eb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1c71,	// (0x0001a506) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd1,	// (0x00028566) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1a50,	// (0x0001a2e5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1a50,	// (0x0001a2e5) bg_sp_fs_ctrlbar_ddmenu_pane

0x3d5f,	// (0x0001c5f4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3d5f,	// (0x0001c5f4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d6b,	// (0x0001c600) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3d6b,	// (0x0001c600) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcda,	// (0x0002856f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcda,	// (0x0002856f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3d77,	// (0x0001c60c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3d77,	// (0x0001c60c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3d91,	// (0x0001c626) list_medium_line_t2_right_icon_g1

0xcd6f,	// (0x00025604) list_medium_line_t2_right_icon_t1

0xcd7f,	// (0x00025614) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdf,	// (0x00028574) list_medium_line_t2_right_icon_t

0x173c,	// (0x00019fd1) bg_sp_fs_ctrlbar_pane_ParamLimits

0x173c,	// (0x00019fd1) bg_sp_fs_ctrlbar_pane

0xcde6,	// (0x0002567b) main_sp_fs_ctrlbar_button_pane_cp01

0xcdee,	// (0x00025683) main_sp_fs_ctrlbar_ddmenu_pane

0x3dd3,	// (0x0001c668) main_sp_fs_ctrlbar_pane_g1

0x3ddf,	// (0x0001c674) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce4,	// (0x00028579) main_sp_fs_ctrlbar_pane_g

0x3deb,	// (0x0001c680) main_sp_fs_ctrlbar_pane_t1

0xcdf8,	// (0x0002568d) main_sp_fs_ctrlbar_pane

0xce12,	// (0x000256a7) main_sp_fs_listscroll_pane_te_cp01

0xce23,	// (0x000256b8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xce23,	// (0x000256b8) popup_sp_fs_action_menu_pane_cp01

0xe0e4,	// (0x00026979) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe0e4,	// (0x00026979) bg_sp_fs_highlight_list_pane_cp01

0x3e10,	// (0x0001c6a5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3e10,	// (0x0001c6a5) sp_fs_action_menu_list_gene_pane_g1

0x3e1f,	// (0x0001c6b4) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3e1f,	// (0x0001c6b4) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcee,	// (0x00028583) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcee,	// (0x00028583) sp_fs_action_menu_list_gene_pane_g

0x3e2c,	// (0x0001c6c1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3e2c,	// (0x0001c6c1) sp_fs_action_menu_list_gene_pane_t1

0x3e44,	// (0x0001c6d9) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3e44,	// (0x0001c6d9) sp_fs_action_menu_list_gene_pane

0x3e67,	// (0x0001c6fc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3e67,	// (0x0001c6fc) popup_sp_fs_action_menu_bg_pane

0x3e75,	// (0x0001c70a) sp_fs_action_menu_list_pane_ParamLimits

0x3e75,	// (0x0001c70a) sp_fs_action_menu_list_pane

0x3e99,	// (0x0001c72e) sp_fs_scroll_pane_cp01_ParamLimits

0x3e99,	// (0x0001c72e) sp_fs_scroll_pane_cp01

0xce51,	// (0x000256e6) list_medium_line_plain_t2_t1

0xce61,	// (0x000256f6) list_medium_line_plain_t2_t2

0x0001,

0xfcf3,	// (0x00028588) list_medium_line_plain_t2_t

0xce6f,	// (0x00025704) list_medium_line_plain_t3_t1

0xce7f,	// (0x00025714) list_medium_line_plain_t3_t2

0xce8d,	// (0x00025722) list_medium_line_plain_t3_t3

0x0002,

0xfcf8,	// (0x0002858d) list_medium_line_plain_t3_t

0xe984,	// (0x00027219) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t2_g2_g1

0xe99c,	// (0x00027231) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x00027aeb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x00027aeb) list_medium_line_x2_t2_g2_g

0xef20,	// (0x000277b5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xef20,	// (0x000277b5) list_medium_line_x2_t2_g2_t1

0xe9bd,	// (0x00027252) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe9bd,	// (0x00027252) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcff,	// (0x00028594) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcff,	// (0x00028594) list_medium_line_x2_t2_g2_t

0xe984,	// (0x00027219) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t4_g2_g1

0xe99c,	// (0x00027231) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x00027aeb) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x00027aeb) list_medium_line_x2_t4_g2_g

0xce9b,	// (0x00025730) list_medium_line_x2_t4_g2_t1_ParamLimits

0xce9b,	// (0x00025730) list_medium_line_x2_t4_g2_t1

0xceb5,	// (0x0002574a) list_medium_line_x2_t4_g2_t2_ParamLimits

0xceb5,	// (0x0002574a) list_medium_line_x2_t4_g2_t2

0xcecb,	// (0x00025760) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcecb,	// (0x00025760) list_medium_line_x2_t4_g2_t3

0xe9bd,	// (0x00027252) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe9bd,	// (0x00027252) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd04,	// (0x00028599) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd04,	// (0x00028599) list_medium_line_x2_t4_g2_t

0x3ebf,	// (0x0001c754) list_medium_line_t3_right_iconx2_g1

0x3d91,	// (0x0001c626) list_medium_line_t3_right_iconx2_g2

0xcee0,	// (0x00025775) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0d,	// (0x000285a2) list_medium_line_t3_right_iconx2_g

0xcee8,	// (0x0002577d) list_medium_line_t3_right_iconx2_t1

0xcef8,	// (0x0002578d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd14,	// (0x000285a9) list_medium_line_t3_right_iconx2_t

0xe984,	// (0x00027219) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x3_t4_g4_g1

0xe990,	// (0x00027225) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x3_t4_g4_g2

0xea24,	// (0x000272b9) list_medium_line_x3_t4_g4_g3_ParamLimits

0xea24,	// (0x000272b9) list_medium_line_x3_t4_g4_g3

0x3ec7,	// (0x0001c75c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3ec7,	// (0x0001c75c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd19,	// (0x000285ae) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd19,	// (0x000285ae) list_medium_line_x3_t4_g4_g

0xcf06,	// (0x0002579b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcf06,	// (0x0002579b) list_medium_line_x3_t4_g4_t1

0xcf1d,	// (0x000257b2) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcf1d,	// (0x000257b2) list_medium_line_x3_t4_g4_t2

0x3ed3,	// (0x0001c768) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3ed3,	// (0x0001c768) list_medium_line_x3_t4_g4_t3

0x3ee8,	// (0x0001c77d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3ee8,	// (0x0001c77d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd22,	// (0x000285b7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd22,	// (0x000285b7) list_medium_line_x3_t4_g4_t

0xcf32,	// (0x000257c7) list_single_dyc_row_text_pane_t1_ParamLimits

0xcf32,	// (0x000257c7) list_single_dyc_row_text_pane_t1

0xcf71,	// (0x00025806) list_single_dyc_row_text_pane_t2_ParamLimits

0xcf71,	// (0x00025806) list_single_dyc_row_text_pane_t2

0x3f05,	// (0x0001c79a) list_single_dyc_row_text_pane_t3_ParamLimits

0x3f05,	// (0x0001c79a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2b,	// (0x000285c0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2b,	// (0x000285c0) list_single_dyc_row_text_pane_t

0x3f17,	// (0x0001c7ac) list_single_dyc_row_pane_g1_ParamLimits

0x3f17,	// (0x0001c7ac) list_single_dyc_row_pane_g1

0x3f23,	// (0x0001c7b8) list_single_dyc_row_pane_g2_ParamLimits

0x3f23,	// (0x0001c7b8) list_single_dyc_row_pane_g2

0x3f2f,	// (0x0001c7c4) list_single_dyc_row_pane_g3_ParamLimits

0x3f2f,	// (0x0001c7c4) list_single_dyc_row_pane_g3

0x3f3b,	// (0x0001c7d0) list_single_dyc_row_pane_g4_ParamLimits

0x3f3b,	// (0x0001c7d0) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x000285c7) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x000285c7) list_single_dyc_row_pane_g

0x3f47,	// (0x0001c7dc) list_single_dyc_row_text_pane_ParamLimits

0x3f47,	// (0x0001c7dc) list_single_dyc_row_text_pane

0xdfe5,	// (0x0002687a) bg_sp_fs_scroll_pane

0x3f66,	// (0x0001c7fb) thumb_sp_fs_scroll_pane

0x2cda,	// (0x0001b56f) list_medium_line_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_g1

0x3f6f,	// (0x0001c804) list_medium_line_t1_ParamLimits

0x3f6f,	// (0x0001c804) list_medium_line_t1

0xe984,	// (0x00027219) list_medium_line_x2_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_g1

0xe990,	// (0x00027225) list_medium_line_x2_g2_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x000285d0) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x000285d0) list_medium_line_x2_g

0x3f84,	// (0x0001c819) list_medium_line_x2_t1_ParamLimits

0x3f84,	// (0x0001c819) list_medium_line_x2_t1

0xe984,	// (0x00027219) list_medium_line_x3_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x3_g1

0xe990,	// (0x00027225) list_medium_line_x3_g2_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x000285d0) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x000285d0) list_medium_line_x3_g

0x3f84,	// (0x0001c819) list_medium_line_x3_t1_ParamLimits

0x3f84,	// (0x0001c819) list_medium_line_x3_t1

0x3f9a,	// (0x0001c82f) thumb_sp_fs_scroll_pane_g1

0x3fa3,	// (0x0001c838) thumb_sp_fs_scroll_pane_g2

0x3fac,	// (0x0001c841) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000285d5) thumb_sp_fs_scroll_pane_g

0x3f9a,	// (0x0001c82f) bg_sp_fs_scroll_pane_g1

0x3fa3,	// (0x0001c838) bg_sp_fs_scroll_pane_g2

0x3fac,	// (0x0001c841) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000285d5) bg_sp_fs_scroll_pane_g

0xe984,	// (0x00027219) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe984,	// (0x00027219) list_medium_line_x2_t3_g4_g1

0xea18,	// (0x000272ad) list_medium_line_x2_t3_g4_g2_ParamLimits

0xea18,	// (0x000272ad) list_medium_line_x2_t3_g4_g2

0xe990,	// (0x00027225) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe990,	// (0x00027225) list_medium_line_x2_t3_g4_g3

0xe99c,	// (0x00027231) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe99c,	// (0x00027231) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00027b67) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00027b67) list_medium_line_x2_t3_g4_g

0xcfcb,	// (0x00025860) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcfcb,	// (0x00025860) list_medium_line_x2_t3_g4_t1

0xcfe1,	// (0x00025876) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcfe1,	// (0x00025876) list_medium_line_x2_t3_g4_t2

0xe9bd,	// (0x00027252) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe9bd,	// (0x00027252) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x000285dc) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x000285dc) list_medium_line_x2_t3_g4_t

0x2cda,	// (0x0001b56f) list_medium_line_g2_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_g2_g1

0x2ce6,	// (0x0001b57b) list_medium_line_g2_g2_ParamLimits

0x2ce6,	// (0x0001b57b) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x000282a0) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x000282a0) list_medium_line_g2_g

0x3fb5,	// (0x0001c84a) list_medium_line_g2_t1_ParamLimits

0x3fb5,	// (0x0001c84a) list_medium_line_g2_t1

0x2cda,	// (0x0001b56f) list_medium_line_t3_g2_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_t3_g2_g1

0x2ce6,	// (0x0001b57b) list_medium_line_t3_g2_g2_ParamLimits

0x2ce6,	// (0x0001b57b) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x000282a0) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x000282a0) list_medium_line_t3_g2_g

0xcffa,	// (0x0002588f) list_medium_line_t3_g2_t1_ParamLimits

0xcffa,	// (0x0002588f) list_medium_line_t3_g2_t1

0xd011,	// (0x000258a6) list_medium_line_t3_g2_t2_ParamLimits

0xd011,	// (0x000258a6) list_medium_line_t3_g2_t2

0xd026,	// (0x000258bb) list_medium_line_t3_g2_t3_ParamLimits

0xd026,	// (0x000258bb) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x000285e3) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x000285e3) list_medium_line_t3_g2_t

0x3d91,	// (0x0001c626) list_medium_line_right_icon_g1

0x3fca,	// (0x0001c85f) list_medium_line_right_icon_t1

0x2cda,	// (0x0001b56f) list_medium_line_t2_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_t2_g1

0xd03f,	// (0x000258d4) list_medium_line_t2_t1_ParamLimits

0xd03f,	// (0x000258d4) list_medium_line_t2_t1

0xd059,	// (0x000258ee) list_medium_line_t2_t2_ParamLimits

0xd059,	// (0x000258ee) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x000285ea) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x000285ea) list_medium_line_t2_t

0x2cda,	// (0x0001b56f) list_medium_line_t3_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_t3_g1

0xd06e,	// (0x00025903) list_medium_line_t3_t1_ParamLimits

0xd06e,	// (0x00025903) list_medium_line_t3_t1

0xd085,	// (0x0002591a) list_medium_line_t3_t2_ParamLimits

0xd085,	// (0x0002591a) list_medium_line_t3_t2

0xd09a,	// (0x0002592f) list_medium_line_t3_t3_ParamLimits

0xd09a,	// (0x0002592f) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x000285ef) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x000285ef) list_medium_line_t3_t

0x2cda,	// (0x0001b56f) list_medium_line_g3_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_g3_g1

0x3fd8,	// (0x0001c86d) list_medium_line_g3_g2_ParamLimits

0x3fd8,	// (0x0001c86d) list_medium_line_g3_g2

0x2ce6,	// (0x0001b57b) list_medium_line_g3_g3_ParamLimits

0x2ce6,	// (0x0001b57b) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x000285f6) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x000285f6) list_medium_line_g3_g

0x3fe4,	// (0x0001c879) list_medium_line_g3_t1_ParamLimits

0x3fe4,	// (0x0001c879) list_medium_line_g3_t1

0x2cda,	// (0x0001b56f) list_medium_line_t2_g3_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_t2_g3_g1

0x3fd8,	// (0x0001c86d) list_medium_line_t2_g3_g2_ParamLimits

0x3fd8,	// (0x0001c86d) list_medium_line_t2_g3_g2

0x2ce6,	// (0x0001b57b) list_medium_line_t2_g3_g3_ParamLimits

0x2ce6,	// (0x0001b57b) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x000285f6) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x000285f6) list_medium_line_t2_g3_g

0xd0ac,	// (0x00025941) list_medium_line_t2_g3_t1_ParamLimits

0xd0ac,	// (0x00025941) list_medium_line_t2_g3_t1

0xd0c3,	// (0x00025958) list_medium_line_t2_g3_t2_ParamLimits

0xd0c3,	// (0x00025958) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x000285fd) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x000285fd) list_medium_line_t2_g3_t

0x2cda,	// (0x0001b56f) list_medium_line_t3_g3_g1_ParamLimits

0x2cda,	// (0x0001b56f) list_medium_line_t3_g3_g1

0x3fd8,	// (0x0001c86d) list_medium_line_t3_g3_g2_ParamLimits

0x3fd8,	// (0x0001c86d) list_medium_line_t3_g3_g2

0x2ce6,	// (0x0001b57b) list_medium_line_t3_g3_g3_ParamLimits

0x2ce6,	// (0x0001b57b) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x000285f6) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x000285f6) list_medium_line_t3_g3_g

0xd0d8,	// (0x0002596d) list_medium_line_t3_g3_t1_ParamLimits

0xd0d8,	// (0x0002596d) list_medium_line_t3_g3_t1

0xd0f1,	// (0x00025986) list_medium_line_t3_g3_t2_ParamLimits

0xd0f1,	// (0x00025986) list_medium_line_t3_g3_t2

0xd107,	// (0x0002599c) list_medium_line_t3_g3_t3_ParamLimits

0xd107,	// (0x0002599c) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x00028602) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x00028602) list_medium_line_t3_g3_t

0x3ebf,	// (0x0001c754) list_medium_line_right_iconx2_g1

0x3d91,	// (0x0001c626) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x00028609) list_medium_line_right_iconx2_g

0x3ff9,	// (0x0001c88e) list_medium_line_right_iconx2_t1

0x3ebf,	// (0x0001c754) list_medium_line_t2_right_iconx2_g1

0x3d91,	// (0x0001c626) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x00028609) list_medium_line_t2_right_iconx2_g

0xd121,	// (0x000259b6) list_medium_line_t2_right_iconx2_t1

0xd131,	// (0x000259c6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0002860e) list_medium_line_t2_right_iconx2_t

0x4007,	// (0x0001c89c) list_medium_line_x4_t4_t1

0xd13f,	// (0x000259d4) list_medium_line_x4_t4_t2

0xd14f,	// (0x000259e4) list_medium_line_x4_t4_t3

0xd15f,	// (0x000259f4) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x00028613) list_medium_line_x4_t4_t

0xd198,	// (0x00025a2d) tport_appsw_pane_ParamLimits

0xd198,	// (0x00025a2d) tport_appsw_pane

0xd1a6,	// (0x00025a3b) tport_contact_pane_ParamLimits

0xd1a6,	// (0x00025a3b) tport_contact_pane

0xd1b6,	// (0x00025a4b) tport_listscroll_pane_ParamLimits

0xd1b6,	// (0x00025a4b) tport_listscroll_pane

0xd1c6,	// (0x00025a5b) cell_tport_appsw_pane_ParamLimits

0xd1c6,	// (0x00025a5b) cell_tport_appsw_pane

0x1f12,	// (0x0001a7a7) tport_appsw_pane_g1_ParamLimits

0x1f12,	// (0x0001a7a7) tport_appsw_pane_g1

0x4015,	// (0x0001c8aa) tport_contact_pane_g1

0x401e,	// (0x0001c8b3) tport_contact_pane_t1

0x402c,	// (0x0001c8c1) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0002861c) tport_contact_pane_t

0x403a,	// (0x0001c8cf) list_tport_pane

0x4043,	// (0x0001c8d8) scroll_pane_cp_030

0x4054,	// (0x0001c8e9) cell_tport_appsw_pane_g1

0x4064,	// (0x0001c8f9) cell_tport_appsw_pane_t1

0xdfe5,	// (0x0002687a) grid_highlight_pane_cp019

0xd1f3,	// (0x00025a88) list_tport_double_graphic_pane_ParamLimits

0xd1f3,	// (0x00025a88) list_tport_double_graphic_pane

0xe0e4,	// (0x00026979) list_highlight_pane_cp023_ParamLimits

0xe0e4,	// (0x00026979) list_highlight_pane_cp023

0xd200,	// (0x00025a95) list_tport_double_graphic_pane_g1_ParamLimits

0xd200,	// (0x00025a95) list_tport_double_graphic_pane_g1

0xd20d,	// (0x00025aa2) list_tport_double_graphic_pane_t1_ParamLimits

0xd20d,	// (0x00025aa2) list_tport_double_graphic_pane_t1

0xd222,	// (0x00025ab7) list_tport_double_graphic_pane_t2_ParamLimits

0xd222,	// (0x00025ab7) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x00028628) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x00028628) list_tport_double_graphic_pane_t

0xdfe5,	// (0x0002687a) main_cale_note_pane

0x6ecd,	// (0x0001f762) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6ecd,	// (0x0001f762) cell_vitu2_function_top_wide_pane_cp01

0xc96e,	// (0x00025203) wait_bar_pane_cp05_ParamLimits

0xdfe5,	// (0x0002687a) listscroll_cmail_pane

0x407a,	// (0x0001c90f) list_cmail_pane

0xd23e,	// (0x00025ad3) list_cmail_body_pane

0xd253,	// (0x00025ae8) list_single_cmail_header_caption_pane

0xd26d,	// (0x00025b02) list_single_cmail_header_detail_pane_ParamLimits

0xd26d,	// (0x00025b02) list_single_cmail_header_detail_pane

0xd29c,	// (0x00025b31) list_single_cmail_header_caption_pane_t1

0xd2ac,	// (0x00025b41) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd2ac,	// (0x00025b41) list_single_cmail_header_detail_pane_g1

0x409a,	// (0x0001c92f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x409a,	// (0x0001c92f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0002862d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0002862d) list_single_cmail_header_detail_pane_g

0x40b3,	// (0x0001c948) list_single_cmail_header_detail_pane_t1_ParamLimits

0x40b3,	// (0x0001c948) list_single_cmail_header_detail_pane_t1

0x40f1,	// (0x0001c986) list_single_cmail_header_editor_pane_bg_ParamLimits

0x40f1,	// (0x0001c986) list_single_cmail_header_editor_pane_bg

0x3938,	// (0x0001c1cd) list_cmail_body_pane_g1

0x4103,	// (0x0001c998) list_cmail_body_pane_t1

0x2a23,	// (0x0001b2b8) list_single_cmail_header_editor_pane_bg_g1

0xec3d,	// (0x000274d2) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2a33,	// (0x0001b2c8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2a2b,	// (0x0001b2c0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2cb2,	// (0x0001b547) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2a53,	// (0x0001b2e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2a43,	// (0x0001b2d8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2a4b,	// (0x0001b2e0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xec1d,	// (0x000274b2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd2ea,	// (0x00025b7f) calenote_gesture_pane_ParamLimits

0xd2ea,	// (0x00025b7f) calenote_gesture_pane

0xd304,	// (0x00025b99) calenote_window_pane_ParamLimits

0xd304,	// (0x00025b99) calenote_window_pane

0x4111,	// (0x0001c9a6) popup_note_window_cp01

0xd31c,	// (0x00025bb1) calenote_swipe_1_pane_ParamLimits

0xd31c,	// (0x00025bb1) calenote_swipe_1_pane

0xcd55,	// (0x000255ea) calenote_swipe_2_pane_ParamLimits

0xcd55,	// (0x000255ea) calenote_swipe_2_pane

0x3c90,	// (0x0001c525) calenote_swipe_1_pane_g1_ParamLimits

0x3c90,	// (0x0001c525) calenote_swipe_1_pane_g1

0x3c9d,	// (0x0001c532) calenote_swipe_1_pane_g2_ParamLimits

0x3c9d,	// (0x0001c532) calenote_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x0002855c) calenote_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x0002855c) calenote_swipe_1_pane_g

0x4123,	// (0x0001c9b8) calenote_swipe_1_pane_t1_ParamLimits

0x4123,	// (0x0001c9b8) calenote_swipe_1_pane_t1

0x3c90,	// (0x0001c525) calenote_swipe_2_pane_g1_ParamLimits

0x3c90,	// (0x0001c525) calenote_swipe_2_pane_g1

0x4142,	// (0x0001c9d7) calenote_swipe_2_pane_g2_ParamLimits

0x4142,	// (0x0001c9d7) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x00028639) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x00028639) calenote_swipe_2_pane_g

0x414e,	// (0x0001c9e3) calenote_swipe_2_pane_t1_ParamLimits

0x414e,	// (0x0001c9e3) calenote_swipe_2_pane_t1

0xdfe5,	// (0x0002687a) main_mup_navstr_pane

0xa959,	// (0x000231ee) main_mup3_pane_t7_ParamLimits

0xa959,	// (0x000231ee) main_mup3_pane_t7

0x67d8,	// (0x0001f06d) main_mp4_pane_g6_ParamLimits

0x67d8,	// (0x0001f06d) main_mp4_pane_g6

0x6ac9,	// (0x0001f35e) main_image3_pane_t4_ParamLimits

0x6ac9,	// (0x0001f35e) main_image3_pane_t4

0xd32f,	// (0x00025bc4) popup_navstr_preview_pane_ParamLimits

0xd32f,	// (0x00025bc4) popup_navstr_preview_pane

0xd33b,	// (0x00025bd0) scroll_navstr_pane_ParamLimits

0xd33b,	// (0x00025bd0) scroll_navstr_pane

0xdfe5,	// (0x0002687a) bg_popup_preview_window_pane_cp04

0x4175,	// (0x0001ca0a) popup_navstr_preview_pane_t1

0xd347,	// (0x00025bdc) scroll_navstr_pane_g1_ParamLimits

0xd347,	// (0x00025bdc) scroll_navstr_pane_g1

0xd354,	// (0x00025be9) scroll_navstr_pane_t1_ParamLimits

0xd354,	// (0x00025be9) scroll_navstr_pane_t1

0x411a,	// (0x0001c9af) bg_button_pane_cp014

0x411a,	// (0x0001c9af) bg_button_pane_cp030

0xcc41,	// (0x000254d6) list_double_fisheye_pane_g4_ParamLimits

0xcc41,	// (0x000254d6) list_double_fisheye_pane_g4

0xcc4d,	// (0x000254e2) list_double_fisheye_pane_g5_ParamLimits

0xcc4d,	// (0x000254e2) list_double_fisheye_pane_g5

0x4082,	// (0x0001c917) sp_fs_scroll_pane_cp03

0x3dd3,	// (0x0001c668) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3ddf,	// (0x0001c674) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce4,	// (0x00028579) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3deb,	// (0x0001c680) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd234,	// (0x00025ac9) sp_fs_scroll_pane_cp02

0xe889,	// (0x0002711e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe889,	// (0x0002711e) popup_sp_fs_calendar_preview_list_single_pane

0xdfe5,	// (0x0002687a) main_cam6_pano_pane

0x615e,	// (0x0001e9f3) main_mup3_pane_ParamLimits

0xdfe5,	// (0x0002687a) main_phacti_pane

0xc841,	// (0x000250d6) bg_button_pane_cp11

0xc859,	// (0x000250ee) main_mobtv_info_pane_g2_ParamLimits

0xc859,	// (0x000250ee) main_mobtv_info_pane_g2

0x0001,

0xfc44,	// (0x000284d9) main_mobtv_info_pane_g_ParamLimits

0xfc44,	// (0x000284d9) main_mobtv_info_pane_g

0xca0b,	// (0x000252a0) sc_clock_pane_t5_ParamLimits

0xca0b,	// (0x000252a0) sc_clock_pane_t5

0xcab4,	// (0x00025349) main_radioblah_pane_g1_ParamLimits

0x3bdc,	// (0x0001c471) main_radioblah_pane_t3_ParamLimits

0x3bdc,	// (0x0001c471) main_radioblah_pane_t3

0x3bf4,	// (0x0001c489) main_radioblah_pane_t4_ParamLimits

0x3bf4,	// (0x0001c489) main_radioblah_pane_t4

0xcad2,	// (0x00025367) main_radioblah_text_pane_ParamLimits

0xcad2,	// (0x00025367) main_radioblah_text_pane

0xcadf,	// (0x00025374) main_radioblah_info_pane_g1_ParamLimits

0xcb78,	// (0x0002540d) main_radioblah_info_pane_t4_ParamLimits

0xcb78,	// (0x0002540d) main_radioblah_info_pane_t4

0xe0e4,	// (0x00026979) main_sp_fs_calendar_pane

0xd366,	// (0x00025bfb) main_phacti_pane_g1

0xd36e,	// (0x00025c03) phacti_note_pane_ParamLimits

0xd36e,	// (0x00025c03) phacti_note_pane

0x418c,	// (0x0001ca21) phacti_term_pane_ParamLimits

0x418c,	// (0x0001ca21) phacti_term_pane

0x41a1,	// (0x0001ca36) phacti_note_pane_t1_ParamLimits

0x41a1,	// (0x0001ca36) phacti_note_pane_t1

0x41b8,	// (0x0001ca4d) phacti_term_pane_g1

0x41c0,	// (0x0001ca55) phacti_term_pane_t1_ParamLimits

0x41c0,	// (0x0001ca55) phacti_term_pane_t1

0x41ea,	// (0x0001ca7f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x41f2,	// (0x0001ca87) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x00028643) popup_sp_fs_calendar_preview_list_single_pane_g

0x41fa,	// (0x0001ca8f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x41fa,	// (0x0001ca8f) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4210,	// (0x0001caa5) aid_popup_sp_fs_bg_corner_pane

0x1c71,	// (0x0001a506) popup_sp_fs_calendar_preview_bg_pane_g1

0xdfe5,	// (0x0002687a) popup_sp_fs_calendar_preview_bg_pane

0x4218,	// (0x0001caad) popup_sp_fs_calendar_preview_list_pane

0xe0e4,	// (0x00026979) bg_main_sp_fs_cale_pane_ParamLimits

0xe0e4,	// (0x00026979) bg_main_sp_fs_cale_pane

0x4229,	// (0x0001cabe) listscroll_cale_mrui_pane_ParamLimits

0x4229,	// (0x0001cabe) listscroll_cale_mrui_pane

0x423d,	// (0x0001cad2) listscroll_sp_fs_schedule_track_pane

0x4246,	// (0x0001cadb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4246,	// (0x0001cadb) main_sp_fs_ctrlbar_pane_cp01

0x4257,	// (0x0001caec) main_sp_fs_ribbon_pane

0x425f,	// (0x0001caf4) popup_sp_fs_cale_preview_window

0xd3b5,	// (0x00025c4a) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd3b5,	// (0x00025c4a) list_single_sp_fs_schedule_track_pane

0xaf3c,	// (0x000237d1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaf3c,	// (0x000237d1) bg_sp_fs_highlight_list_pane_cp03

0xd3c9,	// (0x00025c5e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd3c9,	// (0x00025c5e) list_single_sp_fs_schedule_track_pane_g1

0xd3d5,	// (0x00025c6a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd3d5,	// (0x00025c6a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x00028648) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x00028648) list_single_sp_fs_schedule_track_pane_g

0xd3e1,	// (0x00025c76) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd3e1,	// (0x00025c76) list_single_sp_fs_schedule_track_pane_t1

0xd3ff,	// (0x00025c94) sp_fs_schedule_track_pane_ParamLimits

0xd3ff,	// (0x00025c94) sp_fs_schedule_track_pane

0x4271,	// (0x0001cb06) sp_fs_schedule_track_pane_g1

0x4279,	// (0x0001cb0e) sp_fs_schedule_track_pane_g2

0x4281,	// (0x0001cb16) sp_fs_schedule_track_pane_g3

0x4289,	// (0x0001cb1e) sp_fs_schedule_track_pane_g4

0x4291,	// (0x0001cb26) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0002864d) sp_fs_schedule_track_pane_g

0x2a23,	// (0x0001b2b8) bg_sp_fs_schedule_viewer_highlight_g1

0xec3d,	// (0x000274d2) bg_sp_fs_schedule_viewer_highlight_g2

0x2a2b,	// (0x0001b2c0) bg_sp_fs_schedule_viewer_highlight_g3

0x2a33,	// (0x0001b2c8) bg_sp_fs_schedule_viewer_highlight_g4

0x2cb2,	// (0x0001b547) bg_sp_fs_schedule_viewer_highlight_g5

0x2a43,	// (0x0001b2d8) bg_sp_fs_schedule_viewer_highlight_g6

0x2a4b,	// (0x0001b2e0) bg_sp_fs_schedule_viewer_highlight_g7

0x2a53,	// (0x0001b2e8) bg_sp_fs_schedule_viewer_highlight_g8

0xec1d,	// (0x000274b2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x00028658) bg_sp_fs_schedule_viewer_highlight_g

0xdfe5,	// (0x0002687a) bg_main_sp_fs_ribbon_pane

0xd411,	// (0x00025ca6) main_sp_fs_ribbon_pane_g1

0x4299,	// (0x0001cb2e) main_sp_fs_ribbon_pane_t1

0xd41a,	// (0x00025caf) main_sp_fs_ribbon_pane_t2

0x42a8,	// (0x0001cb3d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0002866b) main_sp_fs_ribbon_pane_t

0x42b7,	// (0x0001cb4c) main_sp_fs_ribbon_scheduler_pane

0x42bf,	// (0x0001cb54) bg_main_sp_fs_ribbon_pane_g1

0x42c8,	// (0x0001cb5d) bg_main_sp_fs_ribbon_pane_g2

0x42d1,	// (0x0001cb66) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x00028672) bg_main_sp_fs_ribbon_pane_g

0x42d9,	// (0x0001cb6e) main_sp_fs_ribbon_scheduler_pane_g1

0x42e2,	// (0x0001cb77) main_sp_fs_ribbon_scheduler_pane_g2

0x42eb,	// (0x0001cb80) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x00028679) main_sp_fs_ribbon_scheduler_pane_g

0x42f4,	// (0x0001cb89) list_cale_mrui_pane

0xd429,	// (0x00025cbe) sp_fs_scroll_pane_cp07_ParamLimits

0xd429,	// (0x00025cbe) sp_fs_scroll_pane_cp07

0xd43f,	// (0x00025cd4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd43f,	// (0x00025cd4) bg_sp_fs_schedule_viewer_highlight

0x42fd,	// (0x0001cb92) list_single_sp_fs_schedule_track_pane_cp01

0x4305,	// (0x0001cb9a) list_sp_fs_schedule_track_pane

0x430d,	// (0x0001cba2) sp_fs_scroll_pane_cp06_ParamLimits

0x430d,	// (0x0001cba2) sp_fs_scroll_pane_cp06

0x1c71,	// (0x0001a506) bgmain_sp_fs_calendar_pane_g1

0x431f,	// (0x0001cbb4) list_single_cale_mrui_pane_ParamLimits

0x431f,	// (0x0001cbb4) list_single_cale_mrui_pane

0x4346,	// (0x0001cbdb) list_single_cale_mrui_row_pane_ParamLimits

0x4346,	// (0x0001cbdb) list_single_cale_mrui_row_pane

0x4353,	// (0x0001cbe8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4353,	// (0x0001cbe8) list_single_cale_mrui_row_pane_g1

0x4398,	// (0x0001cc2d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4398,	// (0x0001cc2d) list_single_cale_mrui_row_pane_t1

0xd44c,	// (0x00025ce1) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd44c,	// (0x00025ce1) list_single_cale_mrui_row_pane_t2

0x43aa,	// (0x0001cc3f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x43aa,	// (0x0001cc3f) list_single_cale_mrui_row_pane_t3

0x43d9,	// (0x0001cc6e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x43d9,	// (0x0001cc6e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x00028687) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x00028687) list_single_cale_mrui_row_pane_t

0xd4b2,	// (0x00025d47) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd4b2,	// (0x00025d47) list_single_cmail_header_editor_pane_bg_cp01

0xd4d6,	// (0x00025d6b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd4d6,	// (0x00025d6b) list_single_cmail_header_editor_pane_bg_cp02

0xd4f2,	// (0x00025d87) main_radioblah_text_pane_t1_ParamLimits

0xd4f2,	// (0x00025d87) main_radioblah_text_pane_t1

0x4408,	// (0x0001cc9d) cam6_indi_pane_cp01

0x4410,	// (0x0001cca5) cam6_mode_pane_cp01

0x4418,	// (0x0001ccad) cam6_pano_pane

0x4421,	// (0x0001ccb6) cam6_zoom_pane_cp01

0x442b,	// (0x0001ccc0) cam6_pano_image_pane

0x4434,	// (0x0001ccc9) cam6_pano_pane_g1

0x3938,	// (0x0001c1cd) cam6_pano_pane_g2

0x443d,	// (0x0001ccd2) cam6_pano_pane_g3

0x4446,	// (0x0001ccdb) cam6_pano_pane_g4

0x21ef,	// (0x0001aa84) cam6_pano_pane_g5

0x444f,	// (0x0001cce4) cam6_pano_pane_g6

0x4457,	// (0x0001ccec) cam6_pano_pane_g7

0x445f,	// (0x0001ccf4) cam6_pano_pane_g8

0x4468,	// (0x0001ccfd) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x00028690) cam6_pano_pane_g

0xdfe5,	// (0x0002687a) main_browser_tag_pane

0x416d,	// (0x0001ca02) grid_navstr_albumart_pane

0x4473,	// (0x0001cd08) cell_navstr_albumart_pane_ParamLimits

0x4473,	// (0x0001cd08) cell_navstr_albumart_pane

0x448f,	// (0x0001cd24) cell_navstr_albumart_pane_g1

0x1555,	// (0x00019dea) cell_navstr_albumart_pane_g2

0x1565,	// (0x00019dfa) cell_navstr_albumart_pane_g3

0x155d,	// (0x00019df2) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x000286a3) cell_navstr_albumart_pane_g

0xd50c,	// (0x00025da1) bt_list_pane_ParamLimits

0xd50c,	// (0x00025da1) bt_list_pane

0xd525,	// (0x00025dba) bt_list_pane_t1

0xd534,	// (0x00025dc9) bt_list_pane_t2

0x0001,

0xfe17,	// (0x000286ac) bt_list_pane_t

0xdfe5,	// (0x0002687a) main_cale_prevew_pane

0xd543,	// (0x00025dd8) popup_cale_preview_window_ParamLimits

0xd543,	// (0x00025dd8) popup_cale_preview_window

0xe0e4,	// (0x00026979) bg_popup_preview_window_pane_cp05_ParamLimits

0xe0e4,	// (0x00026979) bg_popup_preview_window_pane_cp05

0x4497,	// (0x0001cd2c) list_cale_preview_pane_ParamLimits

0x4497,	// (0x0001cd2c) list_cale_preview_pane

0xd55e,	// (0x00025df3) list_double_cale_preview_pane_ParamLimits

0xd55e,	// (0x00025df3) list_double_cale_preview_pane

0xd572,	// (0x00025e07) list_single_cale_preview_pane_ParamLimits

0xd572,	// (0x00025e07) list_single_cale_preview_pane

0xd58a,	// (0x00025e1f) list_single_cale_preview_pane_g1

0xd592,	// (0x00025e27) list_single_cale_preview_pane_t1_ParamLimits

0xd592,	// (0x00025e27) list_single_cale_preview_pane_t1

0xd5a7,	// (0x00025e3c) list_double_cale_preview_pane_g1

0xd5af,	// (0x00025e44) list_double_cale_preview_pane_t1_ParamLimits

0xd5af,	// (0x00025e44) list_double_cale_preview_pane_t1

0xd5c4,	// (0x00025e59) list_double_cale_preview_pane_t2_ParamLimits

0xd5c4,	// (0x00025e59) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x000286b1) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x000286b1) list_double_cale_preview_pane_t

0xdfe5,	// (0x0002687a) main_ezdial_pane

0xe0e4,	// (0x00026979) main_sp_fs_email_pane_ParamLimits

0xcd8d,	// (0x00025622) cmail_ddmenu_btn01_pane_ParamLimits

0xcd8d,	// (0x00025622) cmail_ddmenu_btn01_pane

0xcdaa,	// (0x0002563f) cmail_ddmenu_btn02_pane_ParamLimits

0xcdaa,	// (0x0002563f) cmail_ddmenu_btn02_pane

0xcdc8,	// (0x0002565d) cmail_ddmenu_btn03_pane_ParamLimits

0xcdc8,	// (0x0002565d) cmail_ddmenu_btn03_pane

0xcdf8,	// (0x0002568d) main_sp_fs_ctrlbar_pane_ParamLimits

0xce12,	// (0x000256a7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd23e,	// (0x00025ad3) list_cmail_body_pane_ParamLimits

0x4091,	// (0x0001c926) bg_button_pane_cp12

0x40a6,	// (0x0001c93b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x40a6,	// (0x0001c93b) list_single_cmail_header_detail_pane_g3

0xd2c4,	// (0x00025b59) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd2c4,	// (0x00025b59) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x00028634) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x00028634) list_single_cmail_header_detail_pane_t

0x41d5,	// (0x0001ca6a) phacti_term_pane_t2_ParamLimits

0x41d5,	// (0x0001ca6a) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0002863e) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0002863e) phacti_term_pane_t

0x44a3,	// (0x0001cd38) aid_size_list_single_double

0xd5dc,	// (0x00025e71) popup_ezdial_listscroll_window

0xd5fc,	// (0x00025e91) popup_number_entry_window_cp01

0x0291,	// (0x00018b26) bg_popup_call_pane_cp09

0x44af,	// (0x0001cd44) ezdial_list_pane

0x44b7,	// (0x0001cd4c) scroll_pane_cp23

0x1a50,	// (0x0001a2e5) bg_button_pane_cp028_ParamLimits

0x1a50,	// (0x0001a2e5) bg_button_pane_cp028

0xd60a,	// (0x00025e9f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd60a,	// (0x00025e9f) cmail_ddmenu_btn01_pane_g1

0xd61c,	// (0x00025eb1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd61c,	// (0x00025eb1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x000286b6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x000286b6) cmail_ddmenu_btn01_pane_g

0x44bf,	// (0x0001cd54) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x44bf,	// (0x0001cd54) cmail_ddmenu_btn01_pane_t1

0x173c,	// (0x00019fd1) bg_button_pane_cp029_ParamLimits

0x173c,	// (0x00019fd1) bg_button_pane_cp029

0xd61c,	// (0x00025eb1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd61c,	// (0x00025eb1) cmail_ddmenu_btn02_pane_g1

0xd634,	// (0x00025ec9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd634,	// (0x00025ec9) cmail_ddmenu_btn02_pane_t1

0xaf3c,	// (0x000237d1) bg_button_pane_cp031_ParamLimits

0xaf3c,	// (0x000237d1) bg_button_pane_cp031

0xd61c,	// (0x00025eb1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd61c,	// (0x00025eb1) cmail_ddmenu_btn03_pane_g1

0xd634,	// (0x00025ec9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd634,	// (0x00025ec9) cmail_ddmenu_btn03_pane_t1

0xb1b4,	// (0x00023a49) cell_dialer2_keypad_pane_t1_ParamLimits

0xb1ce,	// (0x00023a63) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb1ce,	// (0x00023a63) cell_dialer2_keypad_pane_t1_copy1

0xc6b2,	// (0x00024f47) ncimui_group_button_pane

0xe0e4,	// (0x00026979) main_sp_fs_calendar_pane_ParamLimits

0xd253,	// (0x00025ae8) list_single_cmail_header_caption_pane_ParamLimits

0x4220,	// (0x0001cab5) aid_recal_txt_sm_pane

0xdfe5,	// (0x0002687a) mian_recal_day_pane

0x425f,	// (0x0001caf4) popup_sp_fs_cale_preview_window_ParamLimits

0xdfe5,	// (0x0002687a) list_recal_day_pane

0x44f7,	// (0x0001cd8c) list_single_recal_day_pane_ParamLimits

0x44f7,	// (0x0001cd8c) list_single_recal_day_pane

0x4509,	// (0x0001cd9e) list_single_recal_day_pane_g1_ParamLimits

0x4509,	// (0x0001cd9e) list_single_recal_day_pane_g1

0x4515,	// (0x0001cdaa) list_single_recal_day_pane_g2_ParamLimits

0x4515,	// (0x0001cdaa) list_single_recal_day_pane_g2

0x4525,	// (0x0001cdba) list_single_recal_day_pane_g3_ParamLimits

0x4525,	// (0x0001cdba) list_single_recal_day_pane_g3

0xd658,	// (0x00025eed) list_single_recal_day_pane_g4_ParamLimits

0xd658,	// (0x00025eed) list_single_recal_day_pane_g4

0x4531,	// (0x0001cdc6) list_single_recal_day_pane_g5_ParamLimits

0x4531,	// (0x0001cdc6) list_single_recal_day_pane_g5

0x4541,	// (0x0001cdd6) list_single_recal_day_pane_g6_ParamLimits

0x4541,	// (0x0001cdd6) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x000286c5) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x000286c5) list_single_recal_day_pane_g

0x4558,	// (0x0001cded) list_single_recal_day_pane_t1

0x456a,	// (0x0001cdff) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x000286d0) list_single_recal_day_pane_t

0xd678,	// (0x00025f0d) ncimui_query_button_pane_ParamLimits

0xd678,	// (0x00025f0d) ncimui_query_button_pane

0xd688,	// (0x00025f1d) ncimui_query_button_pane_t1_ParamLimits

0xd688,	// (0x00025f1d) ncimui_query_button_pane_t1

0x457f,	// (0x0001ce14) ncimui_query_button_pane_t2_ParamLimits

0x457f,	// (0x0001ce14) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x000286d5) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x000286d5) ncimui_query_button_pane_t

0xd69b,	// (0x00025f30) query_button_pane_ParamLimits

0xd69b,	// (0x00025f30) query_button_pane

0xdfe5,	// (0x0002687a) bg_button_pane_cp0028

0x4592,	// (0x0001ce27) query_button_pane_t1

0x617a,	// (0x0001ea0f) main_tport_pane_ParamLimits

0xd16f,	// (0x00025a04) bg_popup_window_pane_cp01_ParamLimits

0xd16f,	// (0x00025a04) bg_popup_window_pane_cp01

0xd17c,	// (0x00025a11) heading_pane_cp08_ParamLimits

0xd17c,	// (0x00025a11) heading_pane_cp08

0xd18a,	// (0x00025a1f) heading_pane_cp07_ParamLimits

0xd18a,	// (0x00025a1f) heading_pane_cp07

0x4054,	// (0x0001c8e9) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x00028621) cell_tport_appsw_pane_g

0x0414,	// (0x00018ca9) input_candi_list_open_g1

0xee02,	// (0x00027697) list_cale_time_pane_g6_ParamLimits

0xee02,	// (0x00027697) list_cale_time_pane_g6

0xa384,	// (0x00022c19) aid_size_touch_calib_1_ParamLimits

0xa384,	// (0x00022c19) aid_size_touch_calib_1

0xa390,	// (0x00022c25) aid_size_touch_calib_2_ParamLimits

0xa390,	// (0x00022c25) aid_size_touch_calib_2

0xa39e,	// (0x00022c33) aid_size_touch_calib_3_ParamLimits

0xa39e,	// (0x00022c33) aid_size_touch_calib_3

0xa3ae,	// (0x00022c43) aid_size_touch_calib_4_ParamLimits

0xa3ae,	// (0x00022c43) aid_size_touch_calib_4

0xa3bc,	// (0x00022c51) main_touch_calib_button_group_pane_ParamLimits

0xa3bc,	// (0x00022c51) main_touch_calib_button_group_pane

0xa3ca,	// (0x00022c5f) main_touch_calib_pane_g1_ParamLimits

0xa3d6,	// (0x00022c6b) main_touch_calib_pane_g2_ParamLimits

0xa3e2,	// (0x00022c77) main_touch_calib_pane_g3_ParamLimits

0xa3ee,	// (0x00022c83) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x00027ff6) main_touch_calib_pane_g_ParamLimits

0xa3fa,	// (0x00022c8f) main_touch_calib_pane_t1_ParamLimits

0xa411,	// (0x00022ca6) main_touch_calib_pane_t2_ParamLimits

0xa42a,	// (0x00022cbf) main_touch_calib_pane_t3_ParamLimits

0xa440,	// (0x00022cd5) main_touch_calib_pane_t4_ParamLimits

0xa456,	// (0x00022ceb) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x00027fff) main_touch_calib_pane_t_ParamLimits

0x1fb9,	// (0x0001a84e) list_single_fp_cale_pane_g3_ParamLimits

0x1fb9,	// (0x0001a84e) list_single_fp_cale_pane_g3

0x615e,	// (0x0001e9f3) bg_button_pane_cp012_ParamLimits

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp03_ParamLimits

0x70d4,	// (0x0001f969) cell_vitu2_function_top_pane_g1_ParamLimits

0x615e,	// (0x0001e9f3) bg_vkb2_func_pane_cp04_ParamLimits

0xc63a,	// (0x00024ecf) main_ncimui_button_group_pane_ParamLimits

0xc63a,	// (0x00024ecf) main_ncimui_button_group_pane

0xc6a0,	// (0x00024f35) main_ncimui_pane_t3_ParamLimits

0xc6a0,	// (0x00024f35) main_ncimui_pane_t3

0x4183,	// (0x0001ca18) phacti_button_group_pane

0x44a3,	// (0x0001cd38) aid_size_list_single_double_ParamLimits

0xd5dc,	// (0x00025e71) popup_ezdial_listscroll_window_ParamLimits

0xd5fc,	// (0x00025e91) popup_number_entry_window_cp01_ParamLimits

0xd6a8,	// (0x00025f3d) phacti_button_pane_ParamLimits

0xd6a8,	// (0x00025f3d) phacti_button_pane

0xdfe5,	// (0x0002687a) bg_button_pane_cp14

0x45a0,	// (0x0001ce35) phacti_button_pane_t1

0xd6b9,	// (0x00025f4e) main_touch_calib_button_pane_ParamLimits

0xd6b9,	// (0x00025f4e) main_touch_calib_button_pane

0xe773,	// (0x00027008) bg_button_pane_cp18_ParamLimits

0xe773,	// (0x00027008) bg_button_pane_cp18

0x45ae,	// (0x0001ce43) main_touch_calib_button_pane_t1_ParamLimits

0x45ae,	// (0x0001ce43) main_touch_calib_button_pane_t1

0x45c4,	// (0x0001ce59) main_touch_calib_button_pane_t2_ParamLimits

0x45c4,	// (0x0001ce59) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x000286da) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x000286da) main_touch_calib_button_pane_t

0xdfe5,	// (0x0002687a) cell_ncimui_button_pane

0xdfe5,	// (0x0002687a) bg_button_pane_cp032

0x45e2,	// (0x0001ce77) cell_ncimui_button_pane_t1

0x69da,	// (0x0001f26f) image3_infobar_pane_ParamLimits

0x69da,	// (0x0001f26f) image3_infobar_pane

0xca2d,	// (0x000252c2) fs_bigclock_status_pane_ParamLimits

0xca2d,	// (0x000252c2) fs_bigclock_status_pane

0xca3a,	// (0x000252cf) main_fs_bigclock_clock_pane_ParamLimits

0xca3a,	// (0x000252cf) main_fs_bigclock_clock_pane

0xca50,	// (0x000252e5) main_fs_bigclock_indi_pane_ParamLimits

0xca50,	// (0x000252e5) main_fs_bigclock_indi_pane

0xca82,	// (0x00025317) main_fs_bigclock_swipe_pane_ParamLimits

0xca82,	// (0x00025317) main_fs_bigclock_swipe_pane

0xdfe5,	// (0x0002687a) main_fs_clock_dumped_data

0x3a45,	// (0x0001c2da) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3a45,	// (0x0001c2da) list_single_fs_bigclock_indicator_pane_g1

0x3a6f,	// (0x0001c304) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3a6f,	// (0x0001c304) list_single_fs_bigclock_indicator_pane_g2

0x3a89,	// (0x0001c31e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3a89,	// (0x0001c31e) list_single_fs_bigclock_indicator_pane_g3

0x3aa3,	// (0x0001c338) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3aa3,	// (0x0001c338) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc78,	// (0x0002850d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc78,	// (0x0002850d) list_single_fs_bigclock_indicator_pane_g

0x3ace,	// (0x0001c363) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3ace,	// (0x0001c363) list_single_fs_bigclock_indicator_pane_t1

0x3af6,	// (0x0001c38b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3af6,	// (0x0001c38b) list_single_fs_bigclock_indicator_pane_t2

0x3b1e,	// (0x0001c3b3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3b1e,	// (0x0001c3b3) list_single_fs_bigclock_indicator_pane_t3

0x3b46,	// (0x0001c3db) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3b46,	// (0x0001c3db) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc83,	// (0x00028518) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc83,	// (0x00028518) list_single_fs_bigclock_indicator_pane_t

0x45f0,	// (0x0001ce85) image3_infobar_fav_pane_ParamLimits

0x45f0,	// (0x0001ce85) image3_infobar_fav_pane

0x4600,	// (0x0001ce95) image3_infobar_loc_pane_ParamLimits

0x4600,	// (0x0001ce95) image3_infobar_loc_pane

0x4616,	// (0x0001ceab) image3_infobar_time_pane_ParamLimits

0x4616,	// (0x0001ceab) image3_infobar_time_pane

0x1c71,	// (0x0001a506) image3_infobar_time_pane_g1

0x4626,	// (0x0001cebb) image3_infobar_time_pane_t1

0x1c71,	// (0x0001a506) image3_infobar_loc_pane_g1

0x4634,	// (0x0001cec9) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x000286df) image3_infobar_loc_pane_g

0x463c,	// (0x0001ced1) image3_infobar_loc_pane_t1

0x1c71,	// (0x0001a506) image3_infobar_fav_pane_g1

0x464a,	// (0x0001cedf) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x000286e4) image3_infobar_fav_pane_g

0x4652,	// (0x0001cee7) fs_bigclock_status_battery_pane

0x465b,	// (0x0001cef0) fs_bigclock_status_signal_pane

0x4664,	// (0x0001cef9) fs_bigclock_status_title_pane

0x466d,	// (0x0001cf02) fs_bigclock_status_signal_pane_g1

0x4676,	// (0x0001cf0b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x000286e9) fs_bigclock_status_signal_pane_g

0x467e,	// (0x0001cf13) fs_bigclock_status_battery_pane_g1

0x4687,	// (0x0001cf1c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x000286ee) fs_bigclock_status_battery_pane_g

0x468f,	// (0x0001cf24) fs_bigclock_status_title_pane_t1

0x1c71,	// (0x0001a506) main_fs_bigclock_clock_pane_g1

0x469d,	// (0x0001cf32) main_fs_bigclock_clock_pane_g2

0x469d,	// (0x0001cf32) main_fs_bigclock_clock_pane_g3

0x469d,	// (0x0001cf32) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x000286f3) main_fs_bigclock_clock_pane_g

0x46a5,	// (0x0001cf3a) main_fs_bigclock_clock_pane_t1

0x46b3,	// (0x0001cf48) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x000286fc) main_fs_bigclock_clock_pane_t

0xd6c9,	// (0x00025f5e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd6c9,	// (0x00025f5e) list_single_fs_bigclock_indicator_pane

0xd6da,	// (0x00025f6f) list_single_fs_bigclock_pane_ParamLimits

0xd6da,	// (0x00025f6f) list_single_fs_bigclock_pane

0x46cb,	// (0x0001cf60) main_fs_bigclock_indicator_pane_t1

0x46da,	// (0x0001cf6f) list_single_fs_bigclock_pane_g1

0x46e2,	// (0x0001cf77) list_single_fs_bigclock_pane_t1

0x1c71,	// (0x0001a506) main_fs_bigclock_swipe_pane_g1

0x4725,	// (0x0001cfba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0002870d) main_fs_bigclock_swipe_pane_g

0x472d,	// (0x0001cfc2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x472d,	// (0x0001cfc2) main_fs_bigclock_swipe_pane_t1

0x8cff,	// (0x00021594) call_type_pane_ParamLimits

0xdfe5,	// (0x0002687a) main_btmg_pane

0x437f,	// (0x0001cc14) list_single_cale_mrui_row_pane_g2_ParamLimits

0x437f,	// (0x0001cc14) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x00028680) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x00028680) list_single_cale_mrui_row_pane_g

0x44de,	// (0x0001cd73) list_recal_vselct_arw_lo_pane

0x44e6,	// (0x0001cd7b) list_recal_vselct_arw_up_pane

0x44ee,	// (0x0001cd83) list_recal_vselct_pane

0xd730,	// (0x00025fc5) btmg_button_pane

0xd73c,	// (0x00025fd1) main_btmg_pane_g1

0xdfe5,	// (0x0002687a) bg_button_pane_cp044

0x474a,	// (0x0001cfdf) btmg_button_pane_t1

0x1734,	// (0x00019fc9) aid_listscroll_gen

0xe0e4,	// (0x00026979) main_cntbar_detail_pane

0x4072,	// (0x0001c907) list_cmail_folder_pane

0x4082,	// (0x0001c917) sp_fs_scroll_pane_cp03_ParamLimits

0x4a27,	// (0x0001d2bc) list_single_fs_dyc_pane_cp01_ParamLimits

0x4a27,	// (0x0001d2bc) list_single_fs_dyc_pane_cp01

0x4758,	// (0x0001cfed) aid_size_cmail_indent

0x4761,	// (0x0001cff6) list_single_dyc_row_pane_cp01

0xd764,	// (0x00025ff9) cntbar_detail_list_pane_ParamLimits

0xd764,	// (0x00025ff9) cntbar_detail_list_pane

0xd7a4,	// (0x00026039) main_cntbar_detail_cont_pane_ParamLimits

0xd7a4,	// (0x00026039) main_cntbar_detail_cont_pane

0x8c99,	// (0x0002152e) scroll_pane_cp032_ParamLimits

0x8c99,	// (0x0002152e) scroll_pane_cp032

0xd7b0,	// (0x00026045) cntbar_detail_list_event_pane_ParamLimits

0xd7b0,	// (0x00026045) cntbar_detail_list_event_pane

0xd772,	// (0x00026007) cntbar_detail_list_shct_pane

0xec8b,	// (0x00027520) aid_list_gen

0x476a,	// (0x0001cfff) aid_scroll

0x4773,	// (0x0001d008) aid_size_touch_scroll_bar

0xd7c0,	// (0x00026055) aid_list_double

0xd7c9,	// (0x0002605e) aid_list_single

0xd7d2,	// (0x00026067) aid_list_single_lg

0x477c,	// (0x0001d011) aid_list_z_g_a_sm

0x4784,	// (0x0001d019) aid_list_z_g_d

0xd7db,	// (0x00026070) aid_txt_z_prm

0xd7e9,	// (0x0002607e) aid_txt_z_prm_cp01

0xd7f7,	// (0x0002608c) aid_txt_z_sec

0xd805,	// (0x0002609a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd805,	// (0x0002609a) main_cntbar_detail_cont_pane_g1

0xd812,	// (0x000260a7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd812,	// (0x000260a7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x00028712) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x00028712) main_cntbar_detail_cont_pane_g

0x478c,	// (0x0001d021) main_cntbar_detail_cont_pane_t1

0x479a,	// (0x0001d02f) main_cntbar_detail_cont_pane_t2

0x47a8,	// (0x0001d03d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x00028717) main_cntbar_detail_cont_pane_t

0xd81e,	// (0x000260b3) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd81e,	// (0x000260b3) cell_cntbar_detail_list_shct_pane

0x47b6,	// (0x0001d04b) cntbar_detail_list_shct_pane_g1

0x47bf,	// (0x0001d054) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0002871e) cntbar_detail_list_shct_pane_g

0xd832,	// (0x000260c7) cntbar_detail_list_event_pane_g1_ParamLimits

0xd832,	// (0x000260c7) cntbar_detail_list_event_pane_g1

0xd83e,	// (0x000260d3) cntbar_detail_list_event_pane_g2_ParamLimits

0xd83e,	// (0x000260d3) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x00028723) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x00028723) cntbar_detail_list_event_pane_g

0xd8ac,	// (0x00026141) cntbar_detail_list_event_pane_t1_ParamLimits

0xd8ac,	// (0x00026141) cntbar_detail_list_event_pane_t1

0xd8c1,	// (0x00026156) cntbar_detail_list_event_pane_t2_ParamLimits

0xd8c1,	// (0x00026156) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x00028730) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x00028730) cntbar_detail_list_event_pane_t

0x1c71,	// (0x0001a506) cell_cntbar_detail_list_shct_pane_g1

0x9063,	// (0x000218f8) navi_pane_mv_g3

0xe0e4,	// (0x00026979) main_cntbar_detail_pane_ParamLimits

0xdfe5,	// (0x0002687a) main_notif_wgt_pane

0x6711,	// (0x0001efa6) aid_tch_main_mp4_pane_g4

0x6950,	// (0x0001f1e5) popup_slider_window_cp02

0x44d4,	// (0x0001cd69) list_recal_day_event_pane

0xd744,	// (0x00025fd9) cntbar_detail_btn_pane_ParamLimits

0xd744,	// (0x00025fd9) cntbar_detail_btn_pane

0xd754,	// (0x00025fe9) cntbar_detail_btn_pane_cp01_ParamLimits

0xd754,	// (0x00025fe9) cntbar_detail_btn_pane_cp01

0xd772,	// (0x00026007) cntbar_detail_list_shct_pane_ParamLimits

0xd77e,	// (0x00026013) cntbar_detail_pane_g1_ParamLimits

0xd77e,	// (0x00026013) cntbar_detail_pane_g1

0xd78e,	// (0x00026023) cntbar_detail_pane_t1_ParamLimits

0xd78e,	// (0x00026023) cntbar_detail_pane_t1

0xd84a,	// (0x000260df) cntbar_detail_list_event_pane_g3_ParamLimits

0xd84a,	// (0x000260df) cntbar_detail_list_event_pane_g3

0xd862,	// (0x000260f7) cntbar_detail_list_event_pane_g4_ParamLimits

0xd862,	// (0x000260f7) cntbar_detail_list_event_pane_g4

0xd87a,	// (0x0002610f) cntbar_detail_list_event_pane_g5_ParamLimits

0xd87a,	// (0x0002610f) cntbar_detail_list_event_pane_g5

0xd892,	// (0x00026127) cntbar_detail_list_event_pane_g6_ParamLimits

0xd892,	// (0x00026127) cntbar_detail_list_event_pane_g6

0xd8d6,	// (0x0002616b) cntbar_detail_list_event_pane_t3_ParamLimits

0xd8d6,	// (0x0002616b) cntbar_detail_list_event_pane_t3

0xd8e8,	// (0x0002617d) popup_notif_wgt_window_ParamLimits

0xd8e8,	// (0x0002617d) popup_notif_wgt_window

0xd8f8,	// (0x0002618d) popup_submenu_window_cp01_ParamLimits

0xd8f8,	// (0x0002618d) popup_submenu_window_cp01

0x0291,	// (0x00018b26) bg_popup_window_pane_cp10

0x47c8,	// (0x0001d05d) listscroll_notif_wgt_pane

0x47da,	// (0x0001d06f) list_notif_wgt_window

0x47e3,	// (0x0001d078) scroll_pane_cp033

0xd908,	// (0x0002619d) list_notif_wgt_row_pane_ParamLimits

0xd908,	// (0x0002619d) list_notif_wgt_row_pane

0x47ec,	// (0x0001d081) aid_size_list_notif_wgt_del

0x47f9,	// (0x0001d08e) list_notif_wgt_row_pane_g1

0x4805,	// (0x0001d09a) list_notif_wgt_row_pane_g2

0x4811,	// (0x0001d0a6) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x00028737) list_notif_wgt_row_pane_g

0x481e,	// (0x0001d0b3) list_notif_wgt_row_pane_t1

0x4833,	// (0x0001d0c8) list_notif_wgt_row_pane_t2

0x4845,	// (0x0001d0da) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0002873e) list_notif_wgt_row_pane_t

0x2cf2,	// (0x0001b587) list_recal_day_event_pane_g1

0x4857,	// (0x0001d0ec) list_recal_day_event_pane_t1

0xdfe5,	// (0x0002687a) bg_button_pane_cp045

0x4866,	// (0x0001d0fb) cntbar_detail_btn_pane_t1

0x173c,	// (0x00019fd1) main_callh_pane_ParamLimits

0x173c,	// (0x00019fd1) main_callh_pane

0xdfe5,	// (0x0002687a) main_coverflow0_pane

0xdfe5,	// (0x0002687a) main_wgtman_pane

0xca9a,	// (0x0002532f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xca9a,	// (0x0002532f) main_fs_bigclock_unlock_btn_pane

0x404c,	// (0x0001c8e1) bg_button_pane_cp16

0x405c,	// (0x0001c8f1) cell_tport_appsw_pane_g3

0xd91c,	// (0x000261b1) cf0_flow_pane_ParamLimits

0xd91c,	// (0x000261b1) cf0_flow_pane

0x4874,	// (0x0001d109) listscroll_cf0_pane

0x487f,	// (0x0001d114) main_cf0_pane_g1

0xd92b,	// (0x000261c0) main_cf0_pane_t1_ParamLimits

0xd92b,	// (0x000261c0) main_cf0_pane_t1

0xd93f,	// (0x000261d4) main_cf0_pane_t2_ParamLimits

0xd93f,	// (0x000261d4) main_cf0_pane_t2

0x0001,

0xfeb0,	// (0x00028745) main_cf0_pane_t_ParamLimits

0xfeb0,	// (0x00028745) main_cf0_pane_t

0x4889,	// (0x0001d11e) scroll_pane_cp11

0xd953,	// (0x000261e8) cf0_flow_pane_g1

0xd95b,	// (0x000261f0) cf0_flow_pane_g2

0x0001,

0xfeb5,	// (0x0002874a) cf0_flow_pane_g

0xd963,	// (0x000261f8) cf0_flow_pane_t1

0xdfe5,	// (0x0002687a) main_call6_pane

0xdfe5,	// (0x0002687a) main_calllock_pane

0xd971,	// (0x00026206) call6_btn_grp_pane_ParamLimits

0xd971,	// (0x00026206) call6_btn_grp_pane

0xd97e,	// (0x00026213) call6_pane_g1_ParamLimits

0xd97e,	// (0x00026213) call6_pane_g1

0xd98e,	// (0x00026223) popup_call6_1st_window_ParamLimits

0xd98e,	// (0x00026223) popup_call6_1st_window

0xd99c,	// (0x00026231) popup_call6_2nd_window_ParamLimits

0xd99c,	// (0x00026231) popup_call6_2nd_window

0xd9aa,	// (0x0002623f) cell_call6_btn_pane_ParamLimits

0xd9aa,	// (0x0002623f) cell_call6_btn_pane

0x0291,	// (0x00018b26) bg_popup_call2_in_pane_cp03

0x4894,	// (0x0001d129) popup_call6_1st_window_g1

0x489c,	// (0x0001d131) popup_call6_1st_window_g2

0x48a4,	// (0x0001d139) popup_call6_1st_window_g3

0x0002,

0xfeba,	// (0x0002874f) popup_call6_1st_window_g

0x48ac,	// (0x0001d141) popup_call6_1st_window_t1

0x48bb,	// (0x0001d150) popup_call6_1st_window_t2

0x48cb,	// (0x0001d160) popup_call6_1st_window_t3

0x0002,

0xfec1,	// (0x00028756) popup_call6_1st_window_t

0x0291,	// (0x00018b26) bg_popup_call2_in_pane_cp04

0x4894,	// (0x0001d129) popup_call6_2nd_window_g1

0x489c,	// (0x0001d131) popup_call6_2nd_window_g2

0x48a4,	// (0x0001d139) popup_call6_2nd_window_g3

0x0002,

0xfeba,	// (0x0002874f) popup_call6_2nd_window_g

0x48ac,	// (0x0001d141) popup_call6_2nd_window_t1

0xdfe5,	// (0x0002687a) bg_button_pane_cp15

0x48db,	// (0x0001d170) cell_call6_btn_pane_g1

0x48e4,	// (0x0001d179) cell_call6_btn_pane_t1

0xd9b9,	// (0x0002624e) listscroll_wgtman_pane_ParamLimits

0xd9b9,	// (0x0002624e) listscroll_wgtman_pane

0xd9d7,	// (0x0002626c) wgtman_btn_pane_ParamLimits

0xd9d7,	// (0x0002626c) wgtman_btn_pane

0x0157,	// (0x000189ec) aid_scroll_copy1

0x48f3,	// (0x0001d188) list_wgtman_pane

0xda0c,	// (0x000262a1) wgtman_btn_pane_g1_ParamLimits

0xda0c,	// (0x000262a1) wgtman_btn_pane_g1

0xda34,	// (0x000262c9) wgtman_btn_pane_t1_ParamLimits

0xda34,	// (0x000262c9) wgtman_btn_pane_t1

0x48fd,	// (0x0001d192) wgtman_btn_pane_t2_ParamLimits

0x48fd,	// (0x0001d192) wgtman_btn_pane_t2

0x0001,

0xfec8,	// (0x0002875d) wgtman_btn_pane_t_ParamLimits

0xfec8,	// (0x0002875d) wgtman_btn_pane_t

0xda6b,	// (0x00026300) listrow_wgtman_pane_ParamLimits

0xda6b,	// (0x00026300) listrow_wgtman_pane

0xda7c,	// (0x00026311) listrow_wgtman_pane_g1

0xda89,	// (0x0002631e) listrow_wgtman_pane_g2

0x0001,

0xfecd,	// (0x00028762) listrow_wgtman_pane_g

0xdaa7,	// (0x0002633c) listrow_wgtman_pane_t1

0xdabf,	// (0x00026354) listrow_wgtman_pane_t2

0x0001,

0xfed2,	// (0x00028767) listrow_wgtman_pane_t

0xdae5,	// (0x0002637a) wait_bar_pane_cp09

0x4914,	// (0x0001d1a9) main_calllock_btn_pane

0x491e,	// (0x0001d1b3) main_calllock_pane_g1

0xdfe5,	// (0x0002687a) bg_button_pane_cp17

0x492a,	// (0x0001d1bf) main_calllock_btn_pane_g1

0x4933,	// (0x0001d1c8) main_calllock_btn_pane_t1

0xdfe5,	// (0x0002687a) main_dialer3_pane

0xdfe5,	// (0x0002687a) main_fmrd2_pane

0x1c71,	// (0x0001a506) main_fs_bigclock_unlock_btn_pane_g1

0x494a,	// (0x0001d1df) main_fs_bigclock_unlock_btn_pane_t1

0xdaf7,	// (0x0002638c) area_fmrd2_info_pane_ParamLimits

0xdaf7,	// (0x0002638c) area_fmrd2_info_pane

0xdb03,	// (0x00026398) area_fmrd2_visual_pane_ParamLimits

0xdb03,	// (0x00026398) area_fmrd2_visual_pane

0xdb11,	// (0x000263a6) fmrd2_indi_pane_ParamLimits

0xdb11,	// (0x000263a6) fmrd2_indi_pane

0xdb1e,	// (0x000263b3) area_fmrd2_visual_pane_g1

0xdb26,	// (0x000263bb) area_fmrd2_visual_pane_t1

0xdb36,	// (0x000263cb) area_fmrd2_visual_pane_t2

0xdb46,	// (0x000263db) area_fmrd2_visual_pane_t3

0x0002,

0xfedc,	// (0x00028771) area_fmrd2_visual_pane_t

0xdb56,	// (0x000263eb) area_fmrd2_info_pane_g1

0xdb5e,	// (0x000263f3) area_fmrd2_info_pane_t1

0xdb6e,	// (0x00026403) area_fmrd2_info_pane_t2

0xdb7e,	// (0x00026413) area_fmrd2_info_pane_t3

0xdb8e,	// (0x00026423) area_fmrd2_info_pane_t4

0x0003,

0xfee3,	// (0x00028778) area_fmrd2_info_pane_t

0xdb9e,	// (0x00026433) fmrd2_indi_pane_t1

0xdbae,	// (0x00026443) fmrd2_indi_pane_t2

0xdbbe,	// (0x00026453) fmrd2_indi_pane_t3

0x0002,

0xfeec,	// (0x00028781) fmrd2_indi_pane_t

0x3ab2,	// (0x0001c347) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3ab2,	// (0x0001c347) list_single_fs_bigclock_indicator_pane_g5

0x3b5b,	// (0x0001c3f0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3b5b,	// (0x0001c3f0) list_single_fs_bigclock_indicator_pane_t5

0xd384,	// (0x00025c19) aid_cell_bcale_month_pane_ParamLimits

0xd384,	// (0x00025c19) aid_cell_bcale_month_pane

0xd394,	// (0x00025c29) bcale_month_pane_ParamLimits

0xd394,	// (0x00025c29) bcale_month_pane

0xd3a4,	// (0x00025c39) bcale_preview_pane_ParamLimits

0xd3a4,	// (0x00025c39) bcale_preview_pane

0x46e2,	// (0x0001cf77) list_single_fs_bigclock_pane_t1_ParamLimits

0x4701,	// (0x0001cf96) list_single_fs_bigclock_pane_t2_ParamLimits

0x4701,	// (0x0001cf96) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x00028708) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00028708) list_single_fs_bigclock_pane_t

0x4942,	// (0x0001d1d7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed7,	// (0x0002876c) main_fs_bigclock_unlock_btn_pane_g

0xdbce,	// (0x00026463) aid_dia3_key_size_ParamLimits

0xdbce,	// (0x00026463) aid_dia3_key_size

0xdbda,	// (0x0002646f) aid_dia3_listrow_size_ParamLimits

0xdbda,	// (0x0002646f) aid_dia3_listrow_size

0xdbea,	// (0x0002647f) dia3_keypad_fun_pane_ParamLimits

0xdbea,	// (0x0002647f) dia3_keypad_fun_pane

0xdbfa,	// (0x0002648f) dia3_keypad_num_pane_ParamLimits

0xdbfa,	// (0x0002648f) dia3_keypad_num_pane

0xdc0a,	// (0x0002649f) dia3_listscroll_pane_ParamLimits

0xdc0a,	// (0x0002649f) dia3_listscroll_pane

0xdc18,	// (0x000264ad) dia3_numentry_pane_ParamLimits

0xdc18,	// (0x000264ad) dia3_numentry_pane

0x4958,	// (0x0001d1ed) dia3_list_pane

0x4963,	// (0x0001d1f8) scroll_pane_cp12

0xdfe5,	// (0x0002687a) bg_dia3_numentry_pane

0xdc26,	// (0x000264bb) dia3_numentry_pane_t1

0xdc35,	// (0x000264ca) cell_dia3_key_num_pane

0xdc3d,	// (0x000264d2) cell_dia3_key0_fun_pane_ParamLimits

0xdc3d,	// (0x000264d2) cell_dia3_key0_fun_pane

0xdc4a,	// (0x000264df) cell_dia3_key1_fun_pane_ParamLimits

0xdc4a,	// (0x000264df) cell_dia3_key1_fun_pane

0xdc57,	// (0x000264ec) dia3_listrow_pane

0x37b0,	// (0x0001c045) bg_dia3_numentry_pane_g1

0xdfe5,	// (0x0002687a) bg_button_pane_cp21

0x496e,	// (0x0001d203) cell_dia3_key_num_pane_t1

0x497c,	// (0x0001d211) cell_dia3_key_num_pane_t2

0x498b,	// (0x0001d220) cell_dia3_key_num_pane_t3

0x499a,	// (0x0001d22f) cell_dia3_key_num_pane_t4

0x0003,

0xfef3,	// (0x00028788) cell_dia3_key_num_pane_t

0xdfe5,	// (0x0002687a) bg_button_pane_cp19

0xdc64,	// (0x000264f9) cell_dia3_key0_fun_pane_g1

0xdfe5,	// (0x0002687a) bg_button_pane_cp20

0xdc6c,	// (0x00026501) cell_dia3_key1_fun_pane_g1

0xdc74,	// (0x00026509) area_left_week_number_pane

0xdc7e,	// (0x00026513) area_top_day_name_pane

0xdc8a,	// (0x0002651f) frame_month_view_pane

0xdc94,	// (0x00026529) grid_month_view_pane

0x49a9,	// (0x0001d23e) cell_top_day_name_pane_ParamLimits

0x49a9,	// (0x0001d23e) cell_top_day_name_pane

0xdc9e,	// (0x00026533) cell_area_left_week_number_pane_ParamLimits

0xdc9e,	// (0x00026533) cell_area_left_week_number_pane

0xdcb2,	// (0x00026547) cell_month_view_pane_ParamLimits

0xdcb2,	// (0x00026547) cell_month_view_pane

0x49c5,	// (0x0001d25a) frm_month_g1

0xdcd1,	// (0x00026566) frm_month_g2

0xdcdb,	// (0x00026570) frm_month_g3

0xdce5,	// (0x0002657a) frm_month_g4

0xdcef,	// (0x00026584) frm_month_g5

0xdcf9,	// (0x0002658e) frm_month_g6

0xdd03,	// (0x00026598) frm_month_g7

0x49ce,	// (0x0001d263) frm_month_g8

0x49d7,	// (0x0001d26c) frm_month_g9

0x49e0,	// (0x0001d275) frm_month_g10

0x49e9,	// (0x0001d27e) frm_month_g11

0x49f2,	// (0x0001d287) frm_month_g12

0x49fb,	// (0x0001d290) frm_month_g13

0x4a06,	// (0x0001d29b) frm_month_g14

0x4a11,	// (0x0001d2a6) frm_month_g15

0x4a1c,	// (0x0001d2b1) frm_month_g16

0x000f,

0xfefc,	// (0x00028791) frm_month_g

0xdd0d,	// (0x000265a2) cell_top_day_name_pane_t1

0xdd1c,	// (0x000265b1) cell_area_left_week_number_pane_g1

0xdd24,	// (0x000265b9) cell_area_left_week_number_pane_t1

0x1c71,	// (0x0001a506) cell_month_view_pane_g1

0xdd33,	// (0x000265c8) cell_month_view_pane_t1

0xdfe5,	// (0x0002687a) main_fps_pane

0x3d99,	// (0x0001c62e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3d99,	// (0x0001c62e) cmail_ddmenu_btn02_pane_cp1

0x3db5,	// (0x0001c64a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3db5,	// (0x0001c64a) cmail_ddmenu_btn02_pane_cp2

0xd628,	// (0x00025ebd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd628,	// (0x00025ebd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x000286bb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x000286bb) cmail_ddmenu_btn02_pane_g

0xd646,	// (0x00025edb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd646,	// (0x00025edb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x000286c0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x000286c0) cmail_ddmenu_btn02_pane_t

0xdd42,	// (0x000265d7) fps_text_pane_ParamLimits

0xdd42,	// (0x000265d7) fps_text_pane

0xdd4f,	// (0x000265e4) main_fps_pane_g1_ParamLimits

0xdd4f,	// (0x000265e4) main_fps_pane_g1

0xdd5b,	// (0x000265f0) wait_bar_pane_cp010_ParamLimits

0xdd5b,	// (0x000265f0) wait_bar_pane_cp010

0xdd67,	// (0x000265fc) fps_text_pane_t1_ParamLimits

0xdd67,	// (0x000265fc) fps_text_pane_t1

0xb309,	// (0x00023b9e) cam4_image_uncrop_pane_g1

0xb312,	// (0x00023ba7) cam4_image_uncrop_pane_g2

0xb31b,	// (0x00023bb0) cam4_image_uncrop_pane_g3

0xb324,	// (0x00023bb9) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0002818e) cam4_image_uncrop_pane_g

0xdc57,	// (0x000264ec) dia3_listrow_pane_ParamLimits

0xdfe5,	// (0x0002687a) main_phob2_pane

0xd1d5,	// (0x00025a6a) cell_tport_appsw_pane_cp02_ParamLimits

0xd1d5,	// (0x00025a6a) cell_tport_appsw_pane_cp02

0xd1e4,	// (0x00025a79) cell_tport_appsw_pane_cp03_ParamLimits

0xd1e4,	// (0x00025a79) cell_tport_appsw_pane_cp03

0xdfe5,	// (0x0002687a) phob2_contact_card_pane

0xdfe5,	// (0x0002687a) phob2_listscroll_pane

0x4a6c,	// (0x0001d301) phob2_list_pane

0x4a74,	// (0x0001d309) scroll_pane_cp034

0xdd80,	// (0x00026615) phob2_cc_data_pane_ParamLimits

0xdd80,	// (0x00026615) phob2_cc_data_pane

0xdd9c,	// (0x00026631) phob2_cc_listscroll_pane_ParamLimits

0xdd9c,	// (0x00026631) phob2_cc_listscroll_pane

0xddb8,	// (0x0002664d) list_double_large_graphic_phob2_pane_ParamLimits

0xddb8,	// (0x0002664d) list_double_large_graphic_phob2_pane

0xddd0,	// (0x00026665) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xddd0,	// (0x00026665) list_double_large_graphic_phob2_pane_g1

0xdddd,	// (0x00026672) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdddd,	// (0x00026672) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1d,	// (0x000287b2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1d,	// (0x000287b2) list_double_large_graphic_phob2_pane_g

0xdde9,	// (0x0002667e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdde9,	// (0x0002667e) list_double_large_graphic_phob2_pane_t1

0xddfe,	// (0x00026693) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xddfe,	// (0x00026693) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff22,	// (0x000287b7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff22,	// (0x000287b7) list_double_large_graphic_phob2_pane_t

0xdfe5,	// (0x0002687a) list_highlight_pane_cp024

0x4a7c,	// (0x0001d311) phob2_cc_button_pane

0xde10,	// (0x000266a5) phob2_cc_data_pane_g1_ParamLimits

0xde10,	// (0x000266a5) phob2_cc_data_pane_g1

0xde1c,	// (0x000266b1) phob2_cc_data_pane_g2_ParamLimits

0xde1c,	// (0x000266b1) phob2_cc_data_pane_g2

0x0001,

0xff27,	// (0x000287bc) phob2_cc_data_pane_g_ParamLimits

0xff27,	// (0x000287bc) phob2_cc_data_pane_g

0xde28,	// (0x000266bd) phob2_cc_data_pane_t1_ParamLimits

0xde28,	// (0x000266bd) phob2_cc_data_pane_t1

0xde3a,	// (0x000266cf) phob2_cc_data_pane_t2_ParamLimits

0xde3a,	// (0x000266cf) phob2_cc_data_pane_t2

0xde4c,	// (0x000266e1) phob2_cc_data_pane_t3_ParamLimits

0xde4c,	// (0x000266e1) phob2_cc_data_pane_t3

0x0002,

0xff2c,	// (0x000287c1) phob2_cc_data_pane_t_ParamLimits

0xff2c,	// (0x000287c1) phob2_cc_data_pane_t

0x4a84,	// (0x0001d319) phob2_cc_list_pane_ParamLimits

0x4a84,	// (0x0001d319) phob2_cc_list_pane

0x2d9d,	// (0x0001b632) scroll_pane_cp035_ParamLimits

0x2d9d,	// (0x0001b632) scroll_pane_cp035

0xe0e4,	// (0x00026979) bg_button_pane_cp033

0x4a90,	// (0x0001d325) phob2_cc_button_pane_g1

0x4a9c,	// (0x0001d331) phob2_cc_button_pane_t1

0x4ab1,	// (0x0001d346) phob2_cc_button_pane_t2

0x0001,

0xff33,	// (0x000287c8) phob2_cc_button_pane_t

0xde5e,	// (0x000266f3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xde5e,	// (0x000266f3) list_double_large_graphic_phob2_cc_pane

0xde7a,	// (0x0002670f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xde7a,	// (0x0002670f) list_double_large_graphic_phob2_cc_pane_g1

0xde8b,	// (0x00026720) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xde8b,	// (0x00026720) list_double_large_graphic_phob2_cc_pane_g2

0xde9a,	// (0x0002672f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xde9a,	// (0x0002672f) list_double_large_graphic_phob2_cc_pane_g3

0xdea9,	// (0x0002673e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdea9,	// (0x0002673e) list_double_large_graphic_phob2_cc_pane_g4

0xdeba,	// (0x0002674f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdeba,	// (0x0002674f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff38,	// (0x000287cd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff38,	// (0x000287cd) list_double_large_graphic_phob2_cc_pane_g

0xdec9,	// (0x0002675e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdec9,	// (0x0002675e) list_double_large_graphic_phob2_cc_pane_t1

0xdef2,	// (0x00026787) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdef2,	// (0x00026787) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff43,	// (0x000287d8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff43,	// (0x000287d8) list_double_large_graphic_phob2_cc_pane_t

0x4ac3,	// (0x0001d358) list_highlight_pane_cp025_ParamLimits

0x4ac3,	// (0x0001d358) list_highlight_pane_cp025

0xe0e4,	// (0x00026979) bg_button_pane_cp033_ParamLimits

0x4a90,	// (0x0001d325) phob2_cc_button_pane_g1_ParamLimits

0x4a9c,	// (0x0001d331) phob2_cc_button_pane_t1_ParamLimits

0x4ab1,	// (0x0001d346) phob2_cc_button_pane_t2_ParamLimits

0xff33,	// (0x000287c8) phob2_cc_button_pane_t_ParamLimits

0x7349,	// (0x0001fbde) popup_wgtman_window

0x2b41,	// (0x0001b3d6) scroll_pane_cp038

0xd9f4,	// (0x00026289) wgtman_btn_pane_cp_01_ParamLimits

0xd9f4,	// (0x00026289) wgtman_btn_pane_cp_01

0x4ad1,	// (0x0001d366) wgtman_content_pane

0x4ada,	// (0x0001d36f) wgtman_heading_pane

0xdfe5,	// (0x0002687a) bg_heading_pane_cp02

0x4ae3,	// (0x0001d378) wgtman_heading_pane_g1

0x4aeb,	// (0x0001d380) wgtman_heading_pane_t1

0x4af9,	// (0x0001d38e) scroll_pane_cp036

0x4b01,	// (0x0001d396) wgtman_list_pane

0x4a52,	// (0x0001d2e7) wgtman_list_pane_t1_ParamLimits

0x4a52,	// (0x0001d2e7) wgtman_list_pane_t1

0x6b36,	// (0x0001f3cb) cam4_grid_pane

0xbaa6,	// (0x0002433b) bg_button_pane_cp015_ParamLimits

0xbab8,	// (0x0002434d) bg_button_pane_cp016_ParamLimits

0xbacb,	// (0x00024360) bg_button_pane_cp017_ParamLimits

0xbb21,	// (0x000243b6) popup_vitu2_query_window_g3_ParamLimits

0xbb21,	// (0x000243b6) popup_vitu2_query_window_g3

0xbbe0,	// (0x00024475) popup_vitu2_query_window_t6_ParamLimits

0xbbe0,	// (0x00024475) popup_vitu2_query_window_t6

0xbc0b,	// (0x000244a0) popup_vitu2_query_window_t7_ParamLimits

0xbc0b,	// (0x000244a0) popup_vitu2_query_window_t7

0x4a3e,	// (0x0001d2d3) cam4_grid_pane_g1

0x4a47,	// (0x0001d2dc) cam4_grid_pane_g2

0x4b09,	// (0x0001d39e) cam4_grid_pane_g3

0x4b12,	// (0x0001d3a7) cam4_grid_pane_g4

0x0003,

0xff48,	// (0x000287dd) cam4_grid_pane_g

0x7d8d,	// (0x00020622) aid_placing_vt_slider_lsc_ParamLimits

0x80c0,	// (0x00020955) vidtel_button_pane_ParamLimits

0x80c0,	// (0x00020955) vidtel_button_pane

0x4b1d,	// (0x0001d3b2) bg_button_pane_cp034

0xdf1b,	// (0x000267b0) vidtel_button_pane_g1

0x4b27,	// (0x0001d3bc) vidtel_button_pane_t1

0x2c80,	// (0x0001b515) aid_size_vtel_slider_touch

0x2d9d,	// (0x0001b632) scroll_pane_cp039

0x37ee,	// (0x0001c083) ncim_query_button_pane_cp01_ParamLimits

0x380d,	// (0x0001c0a2) ncimui_query_pane_g1_ParamLimits

0xe0e4,	// (0x00026979) input_focus_pane_cp012_ParamLimits

0x3832,	// (0x0001c0c7) ncim_query_entry_pane_t1_ParamLimits

0x2d9d,	// (0x0001b632) scroll_pane_cp039_ParamLimits

0x8fd5,	// (0x0002186a) navi_pane_bcale_mc_g1

0x8fdd,	// (0x00021872) navi_pane_bcale_mc_t1

0x3e00,	// (0x0001c695) main_sp_fs_email_pane_g1

0x3e08,	// (0x0001c69d) main_sp_fs_email_pane_g2

0x0001,

0xfce9,	// (0x0002857e) main_sp_fs_email_pane_g

0x438b,	// (0x0001cc20) list_single_cale_mrui_row_pane_g3_ParamLimits

0x438b,	// (0x0001cc20) list_single_cale_mrui_row_pane_g3

0xd66e,	// (0x00025f03) list_single_recal_day_pane_g5_event_pane

0x4550,	// (0x0001cde5) list_single_recal_day_pane_g7

0x4b35,	// (0x0001d3ca) list_recal_day_event_pane_cp01

0x4b3e,	// (0x0001d3d3) list_recal_vselct_arw_lo_pane_cp01

0x4b46,	// (0x0001d3db) list_recal_vselct_arw_up_pane_cp01

0x4b4e,	// (0x0001d3e3) list_recal_vselct_pane_cp01

0x2cf2,	// (0x0001b587) list_recal_day_event_pane_cp01_g1

0x4b58,	// (0x0001d3ed) list_recal_day_event_pane_cp01_t1

0x4558,	// (0x0001cded) list_single_recal_day_pane_t1_ParamLimits

0x456a,	// (0x0001cdff) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x000286d0) list_single_recal_day_pane_t_ParamLimits

0xe743,	// (0x00026fd8) bg_notes_pane_ParamLimits

0xe751,	// (0x00026fe6) list_notes_pane_ParamLimits

0x7582,	// (0x0001fe17) scroll_pane_cp06_ParamLimits

0xe773,	// (0x00027008) main_notes_pane_ParamLimits

0xdfe5,	// (0x0002687a) main_welc_pane

0xdf23,	// (0x000267b8) main_welc_body_pane_ParamLimits

0xdf23,	// (0x000267b8) main_welc_body_pane

0xdf3e,	// (0x000267d3) main_welc_opti_pane_ParamLimits

0xdf3e,	// (0x000267d3) main_welc_opti_pane

0xdf71,	// (0x00026806) main_welc_pane_t1_ParamLimits

0xdf71,	// (0x00026806) main_welc_pane_t1

0xd3b5,	// (0x00025c4a) main_welc_body_row_pane_ParamLimits

0xd3b5,	// (0x00025c4a) main_welc_body_row_pane

0xdf8f,	// (0x00026824) main_welc_opti_row_pane_ParamLimits

0xdf8f,	// (0x00026824) main_welc_opti_row_pane

0x4b66,	// (0x0001d3fb) main_welc_opti_row_pane_g1

0x4b6e,	// (0x0001d403) main_welc_opti_row_pane_t1

0x4b7d,	// (0x0001d412) main_welc_body_row_pane_t1

0x47d2,	// (0x0001d067) popup_notif_wgt_heading_pane

0x47ec,	// (0x0001d081) aid_size_list_notif_wgt_del_ParamLimits

0x47f9,	// (0x0001d08e) list_notif_wgt_row_pane_g1_ParamLimits

0x4805,	// (0x0001d09a) list_notif_wgt_row_pane_g2_ParamLimits

0x4811,	// (0x0001d0a6) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x00028737) list_notif_wgt_row_pane_g_ParamLimits

0x481e,	// (0x0001d0b3) list_notif_wgt_row_pane_t1_ParamLimits

0x4833,	// (0x0001d0c8) list_notif_wgt_row_pane_t2_ParamLimits

0x4845,	// (0x0001d0da) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0002873e) list_notif_wgt_row_pane_t_ParamLimits

0xda7c,	// (0x00026311) listrow_wgtman_pane_g1_ParamLimits

0xda89,	// (0x0002631e) listrow_wgtman_pane_g2_ParamLimits

0xfecd,	// (0x00028762) listrow_wgtman_pane_g_ParamLimits

0xdaa7,	// (0x0002633c) listrow_wgtman_pane_t1_ParamLimits

0xdabf,	// (0x00026354) listrow_wgtman_pane_t2_ParamLimits

0xfed2,	// (0x00028767) listrow_wgtman_pane_t_ParamLimits

0xdae5,	// (0x0002637a) wait_bar_pane_cp09_ParamLimits

0xdfe5,	// (0x0002687a) bg_popup_heading_pane_cp02

0x4b8c,	// (0x0001d421) popup_notif_wgt_heading_pane_g1

0x4b94,	// (0x0001d429) popup_notif_wgt_heading_pane_t1

0xdfe5,	// (0x0002687a) main_vids_pane

0xdfe5,	// (0x0002687a) vids_listscroll_pane

0xdfa0,	// (0x00026835) scroll_pane_cp040

0xdfe5,	// (0x0002687a) vids_list_pane

0xdfab,	// (0x00026840) vids_list_double_pane_ParamLimits

0xdfab,	// (0x00026840) vids_list_double_pane

0xdfbe,	// (0x00026853) vids_list_double_pane_g1

0xdfc7,	// (0x0002685c) vids_list_double_pane_t1

0xdfd7,	// (0x0002686c) vids_list_double_pane_t2

0x0001,

0xff56,	// (0x000287eb) vids_list_double_pane_t

0x615e,	// (0x0001e9f3) main_ncimui_pane_ParamLimits

0xc652,	// (0x00024ee7) main_ncimui_pane_g1_ParamLimits

0xc660,	// (0x00024ef5) main_ncimui_pane_g2_ParamLimits

0xc660,	// (0x00024ef5) main_ncimui_pane_g2

0x0001,

0xfbee,	// (0x00028483) main_ncimui_pane_g_ParamLimits

0xfbee,	// (0x00028483) main_ncimui_pane_g

0xdf59,	// (0x000267ee) main_welc_pane_g1_ParamLimits

0xdf59,	// (0x000267ee) main_welc_pane_g1

0xdf65,	// (0x000267fa) main_welc_pane_g2_ParamLimits

0xdf65,	// (0x000267fa) main_welc_pane_g2

0x0001,

0xff51,	// (0x000287e6) main_welc_pane_g_ParamLimits

0xff51,	// (0x000287e6) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal

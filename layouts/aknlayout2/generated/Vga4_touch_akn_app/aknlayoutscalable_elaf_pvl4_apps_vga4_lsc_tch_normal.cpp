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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000d0cf };

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
0x10f4,	// (0x0000e1c3) Screen

0x1100,	// (0x0000e1cf) application_window

0x113c,	// (0x0000e20b) area_bottom_pane_ParamLimits

0x113c,	// (0x0000e20b) area_bottom_pane

0x1175,	// (0x0000e244) area_top_pane_ParamLimits

0x1175,	// (0x0000e244) area_top_pane

0x95e9,	// (0x000166b8) call_video_uplink_pane_ParamLimits

0x95e9,	// (0x000166b8) call_video_uplink_pane

0x11ef,	// (0x0000e2be) main_pane_ParamLimits

0x11ef,	// (0x0000e2be) main_pane

0xbf66,	// (0x00019035) context_pane

0x4379,	// (0x00011448) navi_pane

0x43a9,	// (0x00011478) popup_cale_events_window_ParamLimits

0x43a9,	// (0x00011478) popup_cale_events_window

0xbf79,	// (0x00019048) popup_mup_playback_window

0x43c1,	// (0x00011490) signal_pane

0x9d70,	// (0x00016e3f) main_browser_pane

0xaaa8,	// (0x00017b77) main_burst_pane

0x407b,	// (0x0001114a) main_calc_pane

0xaaa8,	// (0x00017b77) main_cale_day_pane

0x9d70,	// (0x00016e3f) main_cale_month_pane

0xaaa8,	// (0x00017b77) main_cale_week_pane

0xaaa8,	// (0x00017b77) main_call_pane

0x9a28,	// (0x00016af7) main_call_poc_pane

0xaaa8,	// (0x00017b77) main_camera_pane

0xaaa8,	// (0x00017b77) main_chi_dic_pane

0xa94a,	// (0x00017a19) main_clock_pane

0x9a28,	// (0x00016af7) main_fmradio_pane

0xaaa8,	// (0x00017b77) main_graph_messa_pane

0x9a28,	// (0x00016af7) main_help_pane

0x9d70,	// (0x00016e3f) main_im_pane

0x9c83,	// (0x00016d52) main_image_pane_ParamLimits

0x9c83,	// (0x00016d52) main_image_pane

0x9a28,	// (0x00016af7) main_location2_pane

0xaaa8,	// (0x00017b77) main_location_pane

0x9a28,	// (0x00016af7) main_messa_pane

0x9a28,	// (0x00016af7) main_mp2_pane

0xaaa8,	// (0x00017b77) main_mp_pane

0x9a28,	// (0x00016af7) main_msg_pane

0x9a28,	// (0x00016af7) main_mup_eq_pane

0x9a28,	// (0x00016af7) main_mup_pane

0xaaa8,	// (0x00017b77) main_notes_pane

0x9a28,	// (0x00016af7) main_pec_pane

0x9a28,	// (0x00016af7) main_phob_pane

0x9a28,	// (0x00016af7) main_pinb_pane

0x9a28,	// (0x00016af7) main_postcard_pane

0x9a28,	// (0x00016af7) main_qdial_pane

0xaaa8,	// (0x00017b77) main_skin_pane

0x9a28,	// (0x00016af7) main_smil2_pane

0xaaa8,	// (0x00017b77) main_smil_pane

0xaaa8,	// (0x00017b77) main_video_pane

0xaaa8,	// (0x00017b77) main_video_tele_pane

0x9c83,	// (0x00016d52) main_viewer_pane_ParamLimits

0x9c83,	// (0x00016d52) main_viewer_pane

0xaaa8,	// (0x00017b77) main_vorec_pane

0x40d1,	// (0x000111a0) popup_blid_sat_info_window_ParamLimits

0x40d1,	// (0x000111a0) popup_blid_sat_info_window

0x4135,	// (0x00011204) popup_dyc_status_message_window_ParamLimits

0x4135,	// (0x00011204) popup_dyc_status_message_window

0x414f,	// (0x0001121e) popup_grid_large_graphic_window_ParamLimits

0x414f,	// (0x0001121e) popup_grid_large_graphic_window

0x4211,	// (0x000112e0) popup_loc_request_window_ParamLimits

0x4211,	// (0x000112e0) popup_loc_request_window

0x434d,	// (0x0001141c) popup_wml_address_window_ParamLimits

0x434d,	// (0x0001141c) popup_wml_address_window

0x3eb9,	// (0x00010f88) call_muted_g1

0x3b4a,	// (0x00010c19) popup_call_audio_conf_window_ParamLimits

0x3b4a,	// (0x00010c19) popup_call_audio_conf_window

0x3ec9,	// (0x00010f98) popup_call_audio_first_window_ParamLimits

0x3ec9,	// (0x00010f98) popup_call_audio_first_window

0x3f3f,	// (0x0001100e) popup_call_audio_in_window_ParamLimits

0x3f3f,	// (0x0001100e) popup_call_audio_in_window

0x3f7b,	// (0x0001104a) popup_call_audio_out_window_ParamLimits

0x3f7b,	// (0x0001104a) popup_call_audio_out_window

0x3fb5,	// (0x00011084) popup_call_audio_second_window_ParamLimits

0x3fb5,	// (0x00011084) popup_call_audio_second_window

0x400b,	// (0x000110da) popup_call_audio_wait_window_ParamLimits

0x400b,	// (0x000110da) popup_call_audio_wait_window

0x4040,	// (0x0001110f) popup_number_entry_window_ParamLimits

0x4040,	// (0x0001110f) popup_number_entry_window

0x9615,	// (0x000166e4) bg_popup_call_pane_cp05_ParamLimits

0x9615,	// (0x000166e4) bg_popup_call_pane_cp05

0x9635,	// (0x00016704) popup_number_entry_window_t1

0x9648,	// (0x00016717) popup_number_entry_window_t2

0x965a,	// (0x00016729) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0001c1fe) popup_number_entry_window_t

0x966c,	// (0x0001673b) text_title_cp2

0x967f,	// (0x0001674e) bg_popup_call_pane_cp_ParamLimits

0x967f,	// (0x0001674e) bg_popup_call_pane_cp

0x968d,	// (0x0001675c) call_thumbnail_pane

0x9695,	// (0x00016764) popup_call_audio_in_window_g1_ParamLimits

0x9695,	// (0x00016764) popup_call_audio_in_window_g1

0x96a1,	// (0x00016770) popup_call_audio_in_window_g2_ParamLimits

0x96a1,	// (0x00016770) popup_call_audio_in_window_g2

0x96ad,	// (0x0001677c) popup_call_audio_in_window_g3_ParamLimits

0x96ad,	// (0x0001677c) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0001c207) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0001c207) popup_call_audio_in_window_g

0x96b9,	// (0x00016788) popup_call_audio_in_window_t1_ParamLimits

0x96b9,	// (0x00016788) popup_call_audio_in_window_t1

0x96d5,	// (0x000167a4) popup_call_audio_in_window_t2_ParamLimits

0x96d5,	// (0x000167a4) popup_call_audio_in_window_t2

0x96f1,	// (0x000167c0) popup_call_audio_in_window_t3_ParamLimits

0x96f1,	// (0x000167c0) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0001c20e) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0001c20e) popup_call_audio_in_window_t

0x967f,	// (0x0001674e) bg_popup_call_pane_cp01_ParamLimits

0x967f,	// (0x0001674e) bg_popup_call_pane_cp01

0x968d,	// (0x0001675c) call_thumbnail_pane_cp02

0x9704,	// (0x000167d3) call_type_pane_cp022

0x970c,	// (0x000167db) popup_call_audio_out_window_g1_ParamLimits

0x970c,	// (0x000167db) popup_call_audio_out_window_g1

0x971e,	// (0x000167ed) popup_call_audio_out_window_g2_ParamLimits

0x971e,	// (0x000167ed) popup_call_audio_out_window_g2

0x972a,	// (0x000167f9) popup_call_audio_out_window_g3_ParamLimits

0x972a,	// (0x000167f9) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0001c215) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0001c215) popup_call_audio_out_window_g

0x973c,	// (0x0001680b) popup_call_audio_out_window_t1_ParamLimits

0x973c,	// (0x0001680b) popup_call_audio_out_window_t1

0x9754,	// (0x00016823) popup_call_audio_out_window_t2_ParamLimits

0x9754,	// (0x00016823) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0001c21c) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0001c21c) popup_call_audio_out_window_t

0x9769,	// (0x00016838) bg_popup_call_pane_ParamLimits

0x9769,	// (0x00016838) bg_popup_call_pane

0x13a2,	// (0x0000e471) call_thumbnail_pane_cp_ParamLimits

0x13a2,	// (0x0000e471) call_thumbnail_pane_cp

0x97ed,	// (0x000168bc) call_type_pane_cp01_ParamLimits

0x97ed,	// (0x000168bc) call_type_pane_cp01

0x9831,	// (0x00016900) popup_call_audio_first_window_g1_ParamLimits

0x9831,	// (0x00016900) popup_call_audio_first_window_g1

0x987d,	// (0x0001694c) popup_call_audio_first_window_g2_ParamLimits

0x987d,	// (0x0001694c) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0001c221) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0001c221) popup_call_audio_first_window_g

0x98c1,	// (0x00016990) popup_call_audio_first_window_t1_ParamLimits

0x98c1,	// (0x00016990) popup_call_audio_first_window_t1

0x996d,	// (0x00016a3c) popup_call_audio_first_window_t4_ParamLimits

0x996d,	// (0x00016a3c) popup_call_audio_first_window_t4

0x99f9,	// (0x00016ac8) popup_call_audio_first_window_t5_ParamLimits

0x99f9,	// (0x00016ac8) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0001c226) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0001c226) popup_call_audio_first_window_t

0x9a28,	// (0x00016af7) bg_popup_call_pane_cp02

0x9a32,	// (0x00016b01) call_type_pane_cp023

0x9a3a,	// (0x00016b09) popup_call_audio_wait_window_g1

0x9a42,	// (0x00016b11) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0001c22d) popup_call_audio_wait_window_g

0x9a4a,	// (0x00016b19) popup_call_audio_wait_window_t3

0x9a58,	// (0x00016b27) bg_popup_call_pane_cp03_ParamLimits

0x9a58,	// (0x00016b27) bg_popup_call_pane_cp03

0x9ab8,	// (0x00016b87) call_thumbnail_pane_cp011_ParamLimits

0x9ab8,	// (0x00016b87) call_thumbnail_pane_cp011

0x9ac4,	// (0x00016b93) call_type_pane_cp034_ParamLimits

0x9ac4,	// (0x00016b93) call_type_pane_cp034

0x9b00,	// (0x00016bcf) popup_call_audio_second_window_g1_ParamLimits

0x9b00,	// (0x00016bcf) popup_call_audio_second_window_g1

0x9b3c,	// (0x00016c0b) popup_call_audio_second_window_g2_ParamLimits

0x9b3c,	// (0x00016c0b) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0001c232) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0001c232) popup_call_audio_second_window_g

0x9b78,	// (0x00016c47) popup_call_audio_second_window_t1_ParamLimits

0x9b78,	// (0x00016c47) popup_call_audio_second_window_t1

0x9bf9,	// (0x00016cc8) popup_call_audio_second_window_t2_ParamLimits

0x9bf9,	// (0x00016cc8) popup_call_audio_second_window_t2

0x9c2f,	// (0x00016cfe) popup_call_audio_second_window_t3_ParamLimits

0x9c2f,	// (0x00016cfe) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0001c237) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0001c237) popup_call_audio_second_window_t

0x9a28,	// (0x00016af7) bg_popup_call_pane_cp04

0x9c65,	// (0x00016d34) list_conf_pane

0x9c6d,	// (0x00016d3c) popup_call_audio_conf_window_t1

0x9c7b,	// (0x00016d4a) call_thumbnail_pane_g1

0x9c83,	// (0x00016d52) bg_pinb_pane_ParamLimits

0x9c83,	// (0x00016d52) bg_pinb_pane

0x9c91,	// (0x00016d60) find_pinb_pane

0x9c9a,	// (0x00016d69) listscroll_pinb_pane_ParamLimits

0x9c9a,	// (0x00016d69) listscroll_pinb_pane

0x9ca9,	// (0x00016d78) pinb_bg_pane_g1

0x13c6,	// (0x0000e495) pinb_bg_pane_g2

0x13d2,	// (0x0000e4a1) pinb_bg_pane_g3

0x13de,	// (0x0000e4ad) pinb_bg_pane_g4

0x13ea,	// (0x0000e4b9) pinb_bg_pane_g5

0x13f6,	// (0x0000e4c5) pinb_bg_pane_g6

0x1401,	// (0x0000e4d0) pinb_bg_pane_g7

0x140c,	// (0x0000e4db) pinb_bg_pane_g8

0x1417,	// (0x0000e4e6) pinb_bg_pane_g9

0x1421,	// (0x0000e4f0) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0001c23e) pinb_bg_pane_g

0x143e,	// (0x0000e50d) grid_pinb_pane

0x1449,	// (0x0000e518) list_pinb_pane

0x1454,	// (0x0000e523) scroll_pane_cp01_ParamLimits

0x1454,	// (0x0000e523) scroll_pane_cp01

0x9cb3,	// (0x00016d82) find_pinb_pane_g1_ParamLimits

0x9cb3,	// (0x00016d82) find_pinb_pane_g1

0x9ccb,	// (0x00016d9a) find_pinb_pane_t1

0x9cdd,	// (0x00016dac) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0001c258) find_pinb_pane_t

0x9cf2,	// (0x00016dc1) input_focus_pane_cp01_ParamLimits

0x9cf2,	// (0x00016dc1) input_focus_pane_cp01

0x1466,	// (0x0000e535) cell_pinb_pane_ParamLimits

0x1466,	// (0x0000e535) cell_pinb_pane

0x1488,	// (0x0000e557) cell_pinb_pane_g1_ParamLimits

0x1488,	// (0x0000e557) cell_pinb_pane_g1

0x149c,	// (0x0000e56b) cell_pinb_pane_g2_ParamLimits

0x149c,	// (0x0000e56b) cell_pinb_pane_g2

0x9cfe,	// (0x00016dcd) cell_pinb_pane_g3_ParamLimits

0x9cfe,	// (0x00016dcd) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0001c25d) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0001c25d) cell_pinb_pane_g

0x9a28,	// (0x00016af7) grid_highlight_pane_cp01

0x14a8,	// (0x0000e577) list_pinb_item_pane_ParamLimits

0x14a8,	// (0x0000e577) list_pinb_item_pane

0x9a28,	// (0x00016af7) list_highlight_pane_cp02

0x14bb,	// (0x0000e58a) list_pinb_item_pane_g1_ParamLimits

0x14bb,	// (0x0000e58a) list_pinb_item_pane_g1

0x14c8,	// (0x0000e597) list_pinb_item_pane_g2_ParamLimits

0x14c8,	// (0x0000e597) list_pinb_item_pane_g2

0x14d4,	// (0x0000e5a3) list_pinb_item_pane_g3_ParamLimits

0x14d4,	// (0x0000e5a3) list_pinb_item_pane_g3

0x14e5,	// (0x0000e5b4) list_pinb_item_pane_g4_ParamLimits

0x14e5,	// (0x0000e5b4) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0001c264) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0001c264) list_pinb_item_pane_g

0x14f1,	// (0x0000e5c0) list_pinb_item_pane_t1_ParamLimits

0x14f1,	// (0x0000e5c0) list_pinb_item_pane_t1

0x1526,	// (0x0000e5f5) calc_display_pane

0x154c,	// (0x0000e61b) calc_paper_pane

0x156f,	// (0x0000e63e) grid_calc_pane

0x9a28,	// (0x00016af7) bg_list_pane_cp01

0x159d,	// (0x0000e66c) clock_g1

0x15a5,	// (0x0000e674) clock_g2

0x0001,

0xf19e,	// (0x0001c26d) clock_g

0x15ad,	// (0x0000e67c) clock_t1_ParamLimits

0x15ad,	// (0x0000e67c) clock_t1

0x15c2,	// (0x0000e691) clock_t2_ParamLimits

0x15c2,	// (0x0000e691) clock_t2

0x15d4,	// (0x0000e6a3) clock_t3_ParamLimits

0x15d4,	// (0x0000e6a3) clock_t3

0x15e6,	// (0x0000e6b5) clock_t4_ParamLimits

0x15e6,	// (0x0000e6b5) clock_t4

0x15f8,	// (0x0000e6c7) clock_t5_ParamLimits

0x15f8,	// (0x0000e6c7) clock_t5

0x160d,	// (0x0000e6dc) clock_t6_ParamLimits

0x160d,	// (0x0000e6dc) clock_t6

0x161f,	// (0x0000e6ee) clock_t7_ParamLimits

0x161f,	// (0x0000e6ee) clock_t7

0x1631,	// (0x0000e700) clock_t8_ParamLimits

0x1631,	// (0x0000e700) clock_t8

0x1645,	// (0x0000e714) clock_t9_ParamLimits

0x1645,	// (0x0000e714) clock_t9

0x0008,

0xf1a3,	// (0x0001c272) clock_t_ParamLimits

0xf1a3,	// (0x0001c272) clock_t

0x9d12,	// (0x00016de1) popup_clock_analogue_window_cp02

0x9d12,	// (0x00016de1) popup_clock_digital_window_cp01

0x9d1a,	// (0x00016de9) listscroll_help_pane

0x9a28,	// (0x00016af7) phob_pre_status_pane

0x9d24,	// (0x00016df3) grid_qdial_pane

0x9a28,	// (0x00016af7) listscroll_mce_pane

0x9d2e,	// (0x00016dfd) bg_notes_pane

0x9d38,	// (0x00016e07) list_notes_pane

0x165b,	// (0x0000e72a) scroll_pane_cp06

0x9d42,	// (0x00016e11) bg_calc_paper_pane

0x9d56,	// (0x00016e25) list_calc_pane

0x9d70,	// (0x00016e3f) bg_calc_display_pane

0x1666,	// (0x0000e735) calc_display_pane_t1

0x1678,	// (0x0000e747) calc_display_pane_t2

0x9d7c,	// (0x00016e4b) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0001c285) calc_display_pane_t

0x168a,	// (0x0000e759) cell_calc_pane_ParamLimits

0x168a,	// (0x0000e759) cell_calc_pane

0x9d8e,	// (0x00016e5d) bg_calc_paper_pane_g1

0x9d9a,	// (0x00016e69) bg_calc_paper_pane_g2

0x9da6,	// (0x00016e75) bg_calc_paper_pane_g3

0x9db2,	// (0x00016e81) bg_calc_paper_pane_g4

0x9dbe,	// (0x00016e8d) bg_calc_paper_pane_g5

0x16c5,	// (0x0000e794) bg_calc_paper_pane_g6

0x16d8,	// (0x0000e7a7) bg_calc_paper_pane_g7

0x16eb,	// (0x0000e7ba) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0001c28c) bg_calc_paper_pane_g

0x16fc,	// (0x0000e7cb) calc_bg_paper_pane_g9

0x170d,	// (0x0000e7dc) list_calc_item_pane_ParamLimits

0x170d,	// (0x0000e7dc) list_calc_item_pane

0x9dca,	// (0x00016e99) list_calc_item_pane_g1

0x9dd7,	// (0x00016ea6) list_calc_item_pane_t1_ParamLimits

0x9dd7,	// (0x00016ea6) list_calc_item_pane_t1

0x1721,	// (0x0000e7f0) list_calc_item_pane_t2_ParamLimits

0x1721,	// (0x0000e7f0) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0001c29d) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0001c29d) list_calc_item_pane_t

0x9de9,	// (0x00016eb8) cell_calc_pane_g1

0x9df3,	// (0x00016ec2) grid_highlight_pane_cp02

0x9e15,	// (0x00016ee4) bg_calc_display_pane_g1

0x9e1e,	// (0x00016eed) bg_calc_display_pane_g2

0x9e28,	// (0x00016ef7) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0001c2a7) bg_calc_display_pane_g

0x1753,	// (0x0000e822) cell_qdial_pane_ParamLimits

0x1753,	// (0x0000e822) cell_qdial_pane

0x1769,	// (0x0000e838) cell_qdial_pane_g1_ParamLimits

0x1769,	// (0x0000e838) cell_qdial_pane_g1

0x177f,	// (0x0000e84e) cell_qdial_pane_g2_ParamLimits

0x177f,	// (0x0000e84e) cell_qdial_pane_g2

0x9e31,	// (0x00016f00) cell_qdial_pane_g3_ParamLimits

0x9e31,	// (0x00016f00) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0001c2ae) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0001c2ae) cell_qdial_pane_g

0x17a5,	// (0x0000e874) cell_qdial_pane_t1_ParamLimits

0x17a5,	// (0x0000e874) cell_qdial_pane_t1

0x17bd,	// (0x0000e88c) cell_qdial_pane_t2_ParamLimits

0x17bd,	// (0x0000e88c) cell_qdial_pane_t2

0x17d0,	// (0x0000e89f) cell_qdial_pane_t3_ParamLimits

0x17d0,	// (0x0000e89f) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0001c2b7) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0001c2b7) cell_qdial_pane_t

0x9a28,	// (0x00016af7) grid_highlight_pane_cp04

0x9e3d,	// (0x00016f0c) thumbnail_qdial_pane_ParamLimits

0x9e3d,	// (0x00016f0c) thumbnail_qdial_pane

0x9e99,	// (0x00016f68) list_help_pane

0x9ea2,	// (0x00016f71) scroll_pane_cp02

0x17e3,	// (0x0000e8b2) help_list_pane_t1_ParamLimits

0x17e3,	// (0x0000e8b2) help_list_pane_t1

0x9eab,	// (0x00016f7a) bg_notes_pane_g2

0x9eb3,	// (0x00016f82) bg_notes_pane_g3

0x9ebb,	// (0x00016f8a) notes_bg_pane_g1

0x9ec3,	// (0x00016f92) notes_bg_pane_g4

0x9ecb,	// (0x00016f9a) notes_bg_pane_g5

0x9ed3,	// (0x00016fa2) notes_bg_pane_g6

0x9edb,	// (0x00016faa) notes_bg_pane_g7

0x9ee3,	// (0x00016fb2) notes_bg_pane_g8

0x9eeb,	// (0x00016fba) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0001c2d5) notes_bg_pane_g

0x1807,	// (0x0000e8d6) list_notes_text_pane_ParamLimits

0x1807,	// (0x0000e8d6) list_notes_text_pane

0x9ef3,	// (0x00016fc2) list_notes_text_pane_g1

0x9efc,	// (0x00016fcb) list_notes_text_pane_t1

0x9d70,	// (0x00016e3f) listscroll_cale_week_pane

0x183b,	// (0x0000e90a) bg_cale_heading_pane

0x9f1b,	// (0x00016fea) bg_cale_pane_cp01

0x1857,	// (0x0000e926) cale_week_corner_pane

0x186d,	// (0x0000e93c) cale_week_day_heading_pane

0x1889,	// (0x0000e958) cale_week_scroll_pane_g1

0x18a2,	// (0x0000e971) cale_week_scroll_pane_g2

0x18b3,	// (0x0000e982) cale_week_scroll_pane_g3

0x18c4,	// (0x0000e993) cale_week_scroll_pane_g4

0x18d5,	// (0x0000e9a4) cale_week_scroll_pane_g5

0x18e6,	// (0x0000e9b5) cale_week_scroll_pane_g6

0x18f7,	// (0x0000e9c6) cale_week_scroll_pane_g7

0x1908,	// (0x0000e9d7) cale_week_scroll_pane_g8

0x1919,	// (0x0000e9e8) cale_week_scroll_pane_g9

0x192a,	// (0x0000e9f9) cale_week_scroll_pane_g10

0x193b,	// (0x0000ea0a) cale_week_scroll_pane_g11

0x194c,	// (0x0000ea1b) cale_week_scroll_pane_g12

0x195d,	// (0x0000ea2c) cale_week_scroll_pane_g13

0x1976,	// (0x0000ea45) cale_week_scroll_pane_g14

0x198f,	// (0x0000ea5e) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0001c2e4) cale_week_scroll_pane_g

0x19a8,	// (0x0000ea77) cale_week_time_pane

0x19b9,	// (0x0000ea88) grid_cale_week_pane

0x19d4,	// (0x0000eaa3) scroll_pane_cp08

0x19ec,	// (0x0000eabb) cell_cale_week_pane_ParamLimits

0x19ec,	// (0x0000eabb) cell_cale_week_pane

0x1a34,	// (0x0000eb03) cale_week_day_heading_pane_t1

0x1a48,	// (0x0000eb17) cale_week_day_heading_pane_t2

0x1a5c,	// (0x0000eb2b) cale_week_day_heading_pane_t3

0x1a70,	// (0x0000eb3f) cale_week_day_heading_pane_t4

0x1a84,	// (0x0000eb53) cale_week_day_heading_pane_t5

0x1a98,	// (0x0000eb67) cale_week_day_heading_pane_t6

0x1aac,	// (0x0000eb7b) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0001c303) cale_week_day_heading_pane_t

0x9f46,	// (0x00017015) bg_cale_side_pane

0x1ac0,	// (0x0000eb8f) cale_week_time_pane_t1

0x1ad8,	// (0x0000eba7) cale_week_time_pane_t2

0x1af0,	// (0x0000ebbf) cale_week_time_pane_t3

0x1b08,	// (0x0000ebd7) cale_week_time_pane_t4

0x1b20,	// (0x0000ebef) cale_week_time_pane_t5

0x1b38,	// (0x0000ec07) cale_week_time_pane_t6

0x1b50,	// (0x0000ec1f) cale_week_time_pane_t7

0x1b6c,	// (0x0000ec3b) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0001c312) cale_week_time_pane_t

0x1b8c,	// (0x0000ec5b) cell_cale_week_pane_g2

0x1b9d,	// (0x0000ec6c) cell_cale_week_pane_g3_ParamLimits

0x1b9d,	// (0x0000ec6c) cell_cale_week_pane_g3

0x9f54,	// (0x00017023) grid_highlight_pane_cp07

0x9f5c,	// (0x0001702b) listscroll_gms_pane

0x9f66,	// (0x00017035) grid_gms_pane

0x9f6f,	// (0x0001703e) listscroll_gms_pane_g1

0x9f77,	// (0x00017046) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0001c323) listscroll_gms_pane_g

0x1bb5,	// (0x0000ec84) scroll_pane_cp010

0x1bc0,	// (0x0000ec8f) cell_gms_pane_ParamLimits

0x1bc0,	// (0x0000ec8f) cell_gms_pane

0x1bda,	// (0x0000eca9) cell_gms_pane_g1

0x9f7f,	// (0x0001704e) cell_gms_pane_g2

0x9f87,	// (0x00017056) cell_gms_pane_g3

0x9f90,	// (0x0001705f) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0001c328) cell_gms_pane_g

0x9f99,	// (0x00017068) grid_highlight_pane_cp09

0x3e61,	// (0x00010f30) phob_pre_status_pane_g1

0x3e69,	// (0x00010f38) phob_pre_status_pane_g2

0x3e71,	// (0x00010f40) phob_pre_status_pane_g3

0x3e79,	// (0x00010f48) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0001c717) phob_pre_status_pane_g

0x3e89,	// (0x00010f58) phob_pre_status_pane_t1

0x3e99,	// (0x00010f68) phob_pre_status_pane_t2

0x3ea9,	// (0x00010f78) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0001c722) phob_pre_status_pane_t

0x9a28,	// (0x00016af7) bg_list_pane_cp05

0x1bea,	// (0x0000ecb9) grid_vorec_pane

0x9fa1,	// (0x00017070) vorec_t1

0x9faf,	// (0x0001707e) vorec_t2

0x9fbd,	// (0x0001708c) vorec_t3

0x9fcb,	// (0x0001709a) vorec_t4

0x9fd9,	// (0x000170a8) vorec_t5

0x9fe7,	// (0x000170b6) vorec_t6

0x0006,

0xf262,	// (0x0001c331) vorec_t

0xa003,	// (0x000170d2) wait_bar_pane_cp01

0x1bf4,	// (0x0000ecc3) cell_vorec_pane_ParamLimits

0x1bf4,	// (0x0000ecc3) cell_vorec_pane

0xa00b,	// (0x000170da) cell_vorec_pane_g1

0x9a28,	// (0x00016af7) grid_highlight_pane_cp05

0x1c1f,	// (0x0000ecee) cams_zoom_pane

0x1c2e,	// (0x0000ecfd) image_vga_pane

0x1c48,	// (0x0000ed17) main_camera_pane_g1

0x1c5a,	// (0x0000ed29) main_camera_pane_g2

0x1c6a,	// (0x0000ed39) main_camera_pane_g3

0x1c7e,	// (0x0000ed4d) main_camera_pane_g4

0x1c92,	// (0x0000ed61) main_camera_pane_g5

0x1ca6,	// (0x0000ed75) main_camera_pane_g6

0x1cba,	// (0x0000ed89) main_camera_pane_g7

0x0007,

0xf271,	// (0x0001c340) main_camera_pane_g

0x1cce,	// (0x0000ed9d) main_camera_pane_t1

0x1ce4,	// (0x0000edb3) main_camera_pane_t2

0x0001,

0xf282,	// (0x0001c351) main_camera_pane_t

0x1d22,	// (0x0000edf1) cams_zoom_pane_cp_ParamLimits

0x1d22,	// (0x0000edf1) cams_zoom_pane_cp

0x1d4a,	// (0x0000ee19) image_cif_pane_ParamLimits

0x1d4a,	// (0x0000ee19) image_cif_pane

0x1d85,	// (0x0000ee54) image_subqcif_pane

0x1d8f,	// (0x0000ee5e) main_video_pane_g1_ParamLimits

0x1d8f,	// (0x0000ee5e) main_video_pane_g1

0x1db3,	// (0x0000ee82) main_video_pane_g2_ParamLimits

0x1db3,	// (0x0000ee82) main_video_pane_g2

0x1de9,	// (0x0000eeb8) main_video_pane_g3_ParamLimits

0x1de9,	// (0x0000eeb8) main_video_pane_g3

0x1e17,	// (0x0000eee6) main_video_pane_g4_ParamLimits

0x1e17,	// (0x0000eee6) main_video_pane_g4

0x1e45,	// (0x0000ef14) main_video_pane_g5_ParamLimits

0x1e45,	// (0x0000ef14) main_video_pane_g5

0xa021,	// (0x000170f0) main_video_pane_g6_ParamLimits

0xa021,	// (0x000170f0) main_video_pane_g6

0x0006,

0xf287,	// (0x0001c356) main_video_pane_g_ParamLimits

0xf287,	// (0x0001c356) main_video_pane_g

0x1e6e,	// (0x0000ef3d) main_video_pane_t1_ParamLimits

0x1e6e,	// (0x0000ef3d) main_video_pane_t1

0xa03b,	// (0x0001710a) cams_zoom_pane_g1

0xa044,	// (0x00017113) cams_zoom_pane_g2

0xa04d,	// (0x0001711c) cams_zoom_pane_g3

0xa056,	// (0x00017125) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0001c365) cams_zoom_pane_g

0x1ecb,	// (0x0000ef9a) grid_cams_pane

0x1ee5,	// (0x0000efb4) linegrid_cams_pane

0x1ef9,	// (0x0000efc8) cell_cams_pane_ParamLimits

0x1ef9,	// (0x0000efc8) cell_cams_pane

0xa05f,	// (0x0001712e) cams_burst_image_pane

0xa067,	// (0x00017136) cell_cams_pane_g1

0x9a28,	// (0x00016af7) grid_highlight_pane_cp03

0x9de9,	// (0x00016eb8) mp_bg_pane_g1

0x9a28,	// (0x00016af7) bg_list_pane_cp03

0xbe38,	// (0x00018f07) bg_mp_pane

0xbe40,	// (0x00018f0f) grid_mp_pane

0xbe48,	// (0x00018f17) media_player_g1

0xbe52,	// (0x00018f21) media_player_t1

0xbe60,	// (0x00018f2f) media_player_t2

0xbe6e,	// (0x00018f3d) media_player_t3

0xbe7c,	// (0x00018f4b) media_player_t4

0xbe8a,	// (0x00018f59) media_player_t5

0xbe98,	// (0x00018f67) media_player_t6

0xbea6,	// (0x00018f75) media_player_t7

0x0006,

0xf632,	// (0x0001c701) media_player_t

0xbeb4,	// (0x00018f83) wait_bar_pane_cp02

0xf617,	// (0x0001c6e6) main_usb_pane_t

0x3e58,	// (0x00010f27) cell_mp_pane

0x9de9,	// (0x00016eb8) cell_mp_pane_g1

0x9a28,	// (0x00016af7) grid_highlight_pane_cp06

0xa12d,	// (0x000171fc) grid_skin_colour_pane

0xa135,	// (0x00017204) list_highlight_pane_cp03

0x1f6d,	// (0x0000f03c) skin_g1

0xa13d,	// (0x0001720c) skin_t1

0xa14c,	// (0x0001721b) skin_t2

0x0001,

0xf2cb,	// (0x0001c39a) skin_t

0x1f77,	// (0x0000f046) cell_skin_colour_pane_ParamLimits

0x1f77,	// (0x0000f046) cell_skin_colour_pane

0xa15a,	// (0x00017229) cell_skin_colour_pane_g1

0x1fd3,	// (0x0000f0a2) call_video_g1_ParamLimits

0x1fd3,	// (0x0000f0a2) call_video_g1

0x1fef,	// (0x0000f0be) call_video_g2_ParamLimits

0x1fef,	// (0x0000f0be) call_video_g2

0x0001,

0xf2d0,	// (0x0001c39f) call_video_g_ParamLimits

0xf2d0,	// (0x0001c39f) call_video_g

0x2025,	// (0x0000f0f4) call_video_uplink_pane_cp1_ParamLimits

0x2025,	// (0x0000f0f4) call_video_uplink_pane_cp1

0xa174,	// (0x00017243) call_video_uplink_pane_cp2

0x20a5,	// (0x0000f174) video_down_crop_pane_ParamLimits

0x20a5,	// (0x0000f174) video_down_crop_pane

0x216b,	// (0x0000f23a) video_down_pane_ParamLimits

0x216b,	// (0x0000f23a) video_down_pane

0xa17c,	// (0x0001724b) video_down_subqcif_pane_ParamLimits

0xa17c,	// (0x0001724b) video_down_subqcif_pane

0xa196,	// (0x00017265) video_down_subqcif_pane_cp_ParamLimits

0xa196,	// (0x00017265) video_down_subqcif_pane_cp

0xa1bc,	// (0x0001728b) im_reading_pane_ParamLimits

0xa1bc,	// (0x0001728b) im_reading_pane

0x2237,	// (0x0000f306) im_writing_pane_ParamLimits

0x2237,	// (0x0000f306) im_writing_pane

0x2255,	// (0x0000f324) im_reading_pane_t1

0xa1d6,	// (0x000172a5) list_im_pane

0xa1e7,	// (0x000172b6) scroll_pane_cp07

0x2294,	// (0x0000f363) im_writing_pane_t1_ParamLimits

0x2294,	// (0x0000f363) im_writing_pane_t1

0xa200,	// (0x000172cf) im_writing_pane_t2_ParamLimits

0xa200,	// (0x000172cf) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0001c3a9) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0001c3a9) im_writing_pane_t

0x9a28,	// (0x00016af7) input_focus_pane_cp04

0x9a28,	// (0x00016af7) input_focus_pane_cp05

0x22a9,	// (0x0000f378) list_im_single_pane_ParamLimits

0x22a9,	// (0x0000f378) list_im_single_pane

0x22c2,	// (0x0000f391) list_single_im_pane_t1

0x3e18,	// (0x00010ee7) blid_accuracy_pane

0x3e20,	// (0x00010eef) blid_compass_pane

0x3e2a,	// (0x00010ef9) main_location_t1

0x3e3a,	// (0x00010f09) main_location_t2

0x3e4a,	// (0x00010f19) main_location_t3

0x0002,

0xf641,	// (0x0001c710) main_location_t

0x9a28,	// (0x00016af7) aid_levels_location

0x9de9,	// (0x00016eb8) blid_accuracy_pane_g1

0x9de9,	// (0x00016eb8) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0001c40b) blid_accuracy_pane_g

0xa248,	// (0x00017317) wml_content_pane

0xa286,	// (0x00017355) wml_button_pane_ParamLimits

0xa286,	// (0x00017355) wml_button_pane

0x22d1,	// (0x0000f3a0) wml_list_single_large_pane_ParamLimits

0x22d1,	// (0x0000f3a0) wml_list_single_large_pane

0x22ea,	// (0x0000f3b9) wml_list_single_medium_pane_ParamLimits

0x22ea,	// (0x0000f3b9) wml_list_single_medium_pane

0x2304,	// (0x0000f3d3) wml_list_single_small_pane_ParamLimits

0x2304,	// (0x0000f3d3) wml_list_single_small_pane

0xa29a,	// (0x00017369) wml_selection_box_pane_ParamLimits

0xa29a,	// (0x00017369) wml_selection_box_pane

0xa2ad,	// (0x0001737c) wml_list_single_pane_t1

0xa2bc,	// (0x0001738b) wml_list_single_medium_pane_t1

0xa2cb,	// (0x0001739a) wml_list_single_large_pane_t1

0xa2da,	// (0x000173a9) input_focus_pane_cp02_ParamLimits

0xa2da,	// (0x000173a9) input_focus_pane_cp02

0xa2ed,	// (0x000173bc) wml_selection_box_pane_g1

0xa2f6,	// (0x000173c5) wml_selection_box_pane_t1_ParamLimits

0xa2f6,	// (0x000173c5) wml_selection_box_pane_t1

0x9c83,	// (0x00016d52) bg_wml_button_pane_ParamLimits

0x9c83,	// (0x00016d52) bg_wml_button_pane

0xa30e,	// (0x000173dd) wml_button_pane_g1

0xa316,	// (0x000173e5) wml_button_pane_t1

0xa30e,	// (0x000173dd) wml_button_bg_pane_g1

0xa326,	// (0x000173f5) wml_button_bg_pane_g2

0xa32e,	// (0x000173fd) wml_button_bg_pane_g3

0xa336,	// (0x00017405) wml_button_bg_pane_g4

0xa33e,	// (0x0001740d) wml_button_bg_pane_g5

0xa346,	// (0x00017415) wml_button_bg_pane_g6

0xa34e,	// (0x0001741d) wml_button_bg_pane_g7

0xa356,	// (0x00017425) wml_button_bg_pane_g8

0xa35e,	// (0x0001742d) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0001c3ae) wml_button_bg_pane_g

0x2323,	// (0x0000f3f2) bg_list_pane_cp02

0xa366,	// (0x00017435) mce_header_pane_ParamLimits

0xa366,	// (0x00017435) mce_header_pane

0xa37c,	// (0x0001744b) mce_icon_pane

0xa37c,	// (0x0001744b) mce_image_pane

0xa385,	// (0x00017454) mce_text_pane_ParamLimits

0xa385,	// (0x00017454) mce_text_pane

0x232d,	// (0x0000f3fc) scroll_pane_cp03

0xa27e,	// (0x0001734d) scroll_pane_cp04

0xa398,	// (0x00017467) scroll_pane_cp05_ParamLimits

0xa398,	// (0x00017467) scroll_pane_cp05

0x2337,	// (0x0000f406) mce_header_field_pane_ParamLimits

0x2337,	// (0x0000f406) mce_header_field_pane

0x2350,	// (0x0000f41f) mce_header_field_pane_2_ParamLimits

0x2350,	// (0x0000f41f) mce_header_field_pane_2

0x2366,	// (0x0000f435) mce_header_field_pane_3

0x236e,	// (0x0000f43d) list_single_mce_message_pane_ParamLimits

0x236e,	// (0x0000f43d) list_single_mce_message_pane

0x238a,	// (0x0000f459) list_single_mce_smart_pane_ParamLimits

0x238a,	// (0x0000f459) list_single_mce_smart_pane

0xa3a4,	// (0x00017473) input_focus_pane_cp03

0xa3ad,	// (0x0001747c) list_header_data_pane

0x23b1,	// (0x0000f480) mce_header_field_pane_t1

0x23c1,	// (0x0000f490) list_single_mce_header_pane_ParamLimits

0x23c1,	// (0x0000f490) list_single_mce_header_pane

0xa3b5,	// (0x00017484) list_single_mce_header_pane_t1

0xa3c4,	// (0x00017493) list_single_mce_message_pane_g1

0xa3cc,	// (0x0001749b) list_single_mce_message_pane_t1

0x23f3,	// (0x0000f4c2) bg_cale_heading_pane_cp01_ParamLimits

0x23f3,	// (0x0000f4c2) bg_cale_heading_pane_cp01

0xa3da,	// (0x000174a9) bg_cale_pane_cp02_ParamLimits

0xa3da,	// (0x000174a9) bg_cale_pane_cp02

0x2426,	// (0x0000f4f5) cale_month_corner_pane

0x243c,	// (0x0000f50b) cale_month_day_heading_pane_ParamLimits

0x243c,	// (0x0000f50b) cale_month_day_heading_pane

0x246f,	// (0x0000f53e) cale_month_pane_g1_ParamLimits

0x246f,	// (0x0000f53e) cale_month_pane_g1

0x249b,	// (0x0000f56a) cale_month_pane_g2_ParamLimits

0x249b,	// (0x0000f56a) cale_month_pane_g2

0x24bc,	// (0x0000f58b) cale_month_pane_g3_ParamLimits

0x24bc,	// (0x0000f58b) cale_month_pane_g3

0x24f8,	// (0x0000f5c7) cale_month_pane_g4_ParamLimits

0x24f8,	// (0x0000f5c7) cale_month_pane_g4

0x2534,	// (0x0000f603) cale_month_pane_g5_ParamLimits

0x2534,	// (0x0000f603) cale_month_pane_g5

0x2570,	// (0x0000f63f) cale_month_pane_g6_ParamLimits

0x2570,	// (0x0000f63f) cale_month_pane_g6

0x25ac,	// (0x0000f67b) cale_month_pane_g7_ParamLimits

0x25ac,	// (0x0000f67b) cale_month_pane_g7

0x25e8,	// (0x0000f6b7) cale_month_pane_g8_ParamLimits

0x25e8,	// (0x0000f6b7) cale_month_pane_g8

0x2624,	// (0x0000f6f3) cale_month_pane_g9_ParamLimits

0x2624,	// (0x0000f6f3) cale_month_pane_g9

0x265a,	// (0x0000f729) cale_month_pane_g10_ParamLimits

0x265a,	// (0x0000f729) cale_month_pane_g10

0x2684,	// (0x0000f753) cale_month_pane_g11_ParamLimits

0x2684,	// (0x0000f753) cale_month_pane_g11

0x26ae,	// (0x0000f77d) cale_month_pane_g12_ParamLimits

0x26ae,	// (0x0000f77d) cale_month_pane_g12

0x26dc,	// (0x0000f7ab) cale_month_pane_g13_ParamLimits

0x26dc,	// (0x0000f7ab) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0001c3c1) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0001c3c1) cale_month_pane_g

0x270a,	// (0x0000f7d9) cale_month_week_pane

0x271b,	// (0x0000f7ea) grid_cale_month_pane_ParamLimits

0x271b,	// (0x0000f7ea) grid_cale_month_pane

0x2749,	// (0x0000f818) cale_month_day_heading_pane_t1

0x27a7,	// (0x0000f876) cale_month_day_heading_pane_t2

0x280c,	// (0x0000f8db) cale_month_day_heading_pane_t3

0x2871,	// (0x0000f940) cale_month_day_heading_pane_t4

0x28d6,	// (0x0000f9a5) cale_month_day_heading_pane_t5

0x293b,	// (0x0000fa0a) cale_month_day_heading_pane_t6

0x29a0,	// (0x0000fa6f) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0001c3dc) cale_month_day_heading_pane_t

0x9f46,	// (0x00017015) bg_cale_side_pane_cp01

0x2a05,	// (0x0000fad4) cale_month_week_pane_t1

0x2a1c,	// (0x0000faeb) cale_month_week_pane_t2

0x2a33,	// (0x0000fb02) cale_month_week_pane_t3

0x2a4a,	// (0x0000fb19) cale_month_week_pane_t4

0x2a61,	// (0x0000fb30) cale_month_week_pane_t5

0x2a78,	// (0x0000fb47) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0001c3eb) cale_month_week_pane_t

0x2a97,	// (0x0000fb66) cell_cale_month_pane_ParamLimits

0x2a97,	// (0x0000fb66) cell_cale_month_pane

0xa439,	// (0x00017508) cell_cale_month_pane_g1

0x2b45,	// (0x0000fc14) cell_cale_month_pane_t1_ParamLimits

0x2b45,	// (0x0000fc14) cell_cale_month_pane_t1

0x9f54,	// (0x00017023) grid_highlight_pane_cp08

0x9de9,	// (0x00016eb8) main_smil_g1

0x2b61,	// (0x0000fc30) smil_status_pane

0xa445,	// (0x00017514) smil_text_pane

0xbd56,	// (0x00018e25) bg_popup_call3_rect_pane_g8

0xbd5e,	// (0x00018e2d) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001c6a4) bg_popup_call3_rect_pane_g

0xbff3,	// (0x000190c2) smil_status_volume_pane_g1

0xa44f,	// (0x0001751e) smil_status_pane_t1

0xc026,	// (0x000190f5) volume_smil_pane

0xa466,	// (0x00017535) list_smil_text_pane

0x2b76,	// (0x0000fc45) scroll_pane_cp011

0x2b81,	// (0x0000fc50) smil_text_list_pane_t1_ParamLimits

0x2b81,	// (0x0000fc50) smil_text_list_pane_t1

0xa470,	// (0x0001753f) aid_volume_smil_ParamLimits

0xa470,	// (0x0001753f) aid_volume_smil

0x9de9,	// (0x00016eb8) smil_volume_pane_g1

0x9de9,	// (0x00016eb8) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0001c40b) smil_volume_pane_g

0x9d70,	// (0x00016e3f) listscroll_cale_day_pane

0xa492,	// (0x00017561) bg_cale_pane

0xa4aa,	// (0x00017579) list_cale_pane

0xa4bb,	// (0x0001758a) scroll_pane_cp09

0xa4cc,	// (0x0001759b) cale_bg_pane_g1

0xa4d4,	// (0x000175a3) cale_bg_pane_g2

0xa4dc,	// (0x000175ab) cale_bg_pane_g3

0xa4e4,	// (0x000175b3) cale_bg_pane_g4

0xa4ec,	// (0x000175bb) cale_bg_pane_g5

0xa4f4,	// (0x000175c3) cale_bg_pane_g6

0xa4fc,	// (0x000175cb) cale_bg_pane_g7

0xa504,	// (0x000175d3) cale_bg_pane_g8

0xa50c,	// (0x000175db) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0001c410) cale_bg_pane_g

0x2bd6,	// (0x0000fca5) list_cale_time_pane_ParamLimits

0x2bd6,	// (0x0000fca5) list_cale_time_pane

0x2beb,	// (0x0000fcba) list_cale_time_pane_g1_ParamLimits

0x2beb,	// (0x0000fcba) list_cale_time_pane_g1

0xa514,	// (0x000175e3) list_cale_time_pane_g2_ParamLimits

0xa514,	// (0x000175e3) list_cale_time_pane_g2

0x2bf7,	// (0x0000fcc6) list_cale_time_pane_g3_ParamLimits

0x2bf7,	// (0x0000fcc6) list_cale_time_pane_g3

0x2c05,	// (0x0000fcd4) list_cale_time_pane_g4_ParamLimits

0x2c05,	// (0x0000fcd4) list_cale_time_pane_g4

0x2c13,	// (0x0000fce2) list_cale_time_pane_g5_ParamLimits

0x2c13,	// (0x0000fce2) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0001c423) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0001c423) list_cale_time_pane_g

0x2c21,	// (0x0000fcf0) list_cale_time_pane_t1_ParamLimits

0x2c21,	// (0x0000fcf0) list_cale_time_pane_t1

0x2c49,	// (0x0000fd18) list_cale_time_pane_t2_ParamLimits

0x2c49,	// (0x0000fd18) list_cale_time_pane_t2

0x2fbf,	// (0x0001008e) aid_blid_cardinal_pane

0x3001,	// (0x000100d0) compass_pane_t4

0x2c71,	// (0x0000fd40) list_cale_time_pane_t4_ParamLimits

0x2c71,	// (0x0000fd40) list_cale_time_pane_t4

0x300f,	// (0x000100de) compass_pane_t5

0x301f,	// (0x000100ee) compass_pane_t6

0x302d,	// (0x000100fc) compass_pane_t7

0xa9fa,	// (0x00017ac9) navi_pane_cc_t1

0xab61,	// (0x00017c30) aid_phob_thumbnail_center_pane

0x37de,	// (0x000108ad) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0001c430) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0001c430) list_cale_time_pane_t

0x967f,	// (0x0001674e) bg_popup_window_pane_cp02_ParamLimits

0x967f,	// (0x0001674e) bg_popup_window_pane_cp02

0xa52e,	// (0x000175fd) heading_pane_cp01_ParamLimits

0xa52e,	// (0x000175fd) heading_pane_cp01

0xa53a,	// (0x00017609) loc_req_pane_ParamLimits

0xa53a,	// (0x00017609) loc_req_pane

0xa54a,	// (0x00017619) loc_type_pane_ParamLimits

0xa54a,	// (0x00017619) loc_type_pane

0xa55c,	// (0x0001762b) loc_type_pane_t1_ParamLimits

0xa55c,	// (0x0001762b) loc_type_pane_t1

0xa56e,	// (0x0001763d) loc_type_pane_t2_ParamLimits

0xa56e,	// (0x0001763d) loc_type_pane_t2

0xa580,	// (0x0001764f) loc_type_pane_t3_ParamLimits

0xa580,	// (0x0001764f) loc_type_pane_t3

0x0002,

0xf368,	// (0x0001c437) loc_type_pane_t_ParamLimits

0xf368,	// (0x0001c437) loc_type_pane_t

0xa592,	// (0x00017661) list_loc_req_pane

0xa59c,	// (0x0001766b) scroll_pane_cp012

0x2c99,	// (0x0000fd68) list_single_loc_request_popup_menu_pane_ParamLimits

0x2c99,	// (0x0000fd68) list_single_loc_request_popup_menu_pane

0xa5a7,	// (0x00017676) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa5a7,	// (0x00017676) list_single_loc_request_popup_menu_pane_g1

0xa5b3,	// (0x00017682) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa5b3,	// (0x00017682) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0001c43e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0001c43e) list_single_loc_request_popup_menu_pane_g

0xa5bf,	// (0x0001768e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa5bf,	// (0x0001768e) list_single_loc_request_popup_menu_pane_t1

0x9c83,	// (0x00016d52) bg_popup_window_pane_cp03_ParamLimits

0x9c83,	// (0x00016d52) bg_popup_window_pane_cp03

0xc8a5,	// (0x00019974) heading_loc_req_pane_ParamLimits

0xc8a5,	// (0x00019974) heading_loc_req_pane

0x2ca6,	// (0x0000fd75) popup_dyc_status_message_window_g1_ParamLimits

0x2ca6,	// (0x0000fd75) popup_dyc_status_message_window_g1

0x2cba,	// (0x0000fd89) popup_dyc_status_message_window_t1_ParamLimits

0x2cba,	// (0x0000fd89) popup_dyc_status_message_window_t1

0x2ccf,	// (0x0000fd9e) popup_dyc_status_message_window_t2_ParamLimits

0x2ccf,	// (0x0000fd9e) popup_dyc_status_message_window_t2

0x2ce4,	// (0x0000fdb3) popup_dyc_status_message_window_t3_ParamLimits

0x2ce4,	// (0x0000fdb3) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0001c443) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0001c443) popup_dyc_status_message_window_t

0x9a28,	// (0x00016af7) bg_heading_pane_cp01

0xa5d5,	// (0x000176a4) heading_loc_req_pane_g1

0xa5dd,	// (0x000176ac) heading_loc_req_pane_g2

0xa5e5,	// (0x000176b4) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0001c44a) heading_loc_req_pane_g

0xa5ed,	// (0x000176bc) heading_loc_req_pane_t1

0xa674,	// (0x00017743) bg_popup_sub_pane_cp01_ParamLimits

0xa674,	// (0x00017743) bg_popup_sub_pane_cp01

0xa682,	// (0x00017751) popup_cale_events_window_g1_ParamLimits

0xa682,	// (0x00017751) popup_cale_events_window_g1

0xa6a2,	// (0x00017771) popup_cale_events_window_g2_ParamLimits

0xa6a2,	// (0x00017771) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0001c47e) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0001c47e) popup_cale_events_window_g

0xa6c2,	// (0x00017791) popup_cale_events_window_t1_ParamLimits

0xa6c2,	// (0x00017791) popup_cale_events_window_t1

0xa6d4,	// (0x000177a3) popup_cale_events_window_t2_ParamLimits

0xa6d4,	// (0x000177a3) popup_cale_events_window_t2

0xa712,	// (0x000177e1) popup_cale_events_window_t3_ParamLimits

0xa712,	// (0x000177e1) popup_cale_events_window_t3

0xa74c,	// (0x0001781b) popup_cale_events_window_t4_ParamLimits

0xa74c,	// (0x0001781b) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0001c483) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0001c483) popup_cale_events_window_t

0x2d72,	// (0x0000fe41) call_type_pane

0x2d82,	// (0x0000fe51) popup_call_status_window_g1

0x2d96,	// (0x0000fe65) popup_call_status_window_g2

0x2daa,	// (0x0000fe79) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0001c48c) popup_call_status_window_g

0xa782,	// (0x00017851) call_type_pane_g1

0xa78b,	// (0x0001785a) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0001c493) call_type_pane_g

0x9a28,	// (0x00016af7) bg_popup_sub_pane_cp02

0xa794,	// (0x00017863) listscroll_popup_wml_pane

0xa79c,	// (0x0001786b) list_wml_pane

0xa7a6,	// (0x00017875) scroll_pane_cp013

0xa7b1,	// (0x00017880) list_single_graphic_popup_wml_pane_ParamLimits

0xa7b1,	// (0x00017880) list_single_graphic_popup_wml_pane

0x9de9,	// (0x00016eb8) list_single_graphic_popup_wml_pane_g1

0xa7c5,	// (0x00017894) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0001c498) list_single_graphic_popup_wml_pane_g

0xa7cd,	// (0x0001789c) list_single_graphic_popup_wml_pane_t1

0xa7e3,	// (0x000178b2) aid_call_pane

0x9c7b,	// (0x00016d4a) popup_clock_analogue_window_g1

0x9c7b,	// (0x00016d4a) popup_clock_analogue_window_g2

0xa7eb,	// (0x000178ba) popup_clock_analogue_window_g3

0xa7eb,	// (0x000178ba) popup_clock_analogue_window_g4

0x9de9,	// (0x00016eb8) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0001c49d) popup_clock_analogue_window_g

0xa7f3,	// (0x000178c2) popup_clock_analogue_window_t1

0xa801,	// (0x000178d0) clock_digital_number_pane_ParamLimits

0xa801,	// (0x000178d0) clock_digital_number_pane

0xa80d,	// (0x000178dc) clock_digital_number_pane_cp02_ParamLimits

0xa80d,	// (0x000178dc) clock_digital_number_pane_cp02

0xa819,	// (0x000178e8) clock_digital_number_pane_cp03_ParamLimits

0xa819,	// (0x000178e8) clock_digital_number_pane_cp03

0xa825,	// (0x000178f4) clock_digital_number_pane_cp04_ParamLimits

0xa825,	// (0x000178f4) clock_digital_number_pane_cp04

0xa831,	// (0x00017900) clock_digital_separator_pane_ParamLimits

0xa831,	// (0x00017900) clock_digital_separator_pane

0xa83d,	// (0x0001790c) popup_clock_digital_window_t1

0x9de9,	// (0x00016eb8) clock_digital_number_pane_g1

0x9de9,	// (0x00016eb8) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0001c40b) clock_digital_number_pane_g

0x9de9,	// (0x00016eb8) clock_digital_separator_pane_g1

0x9de9,	// (0x00016eb8) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0001c40b) clock_digital_separator_pane_g

0x9a28,	// (0x00016af7) bg_popup_window_pane_cp04

0xa85a,	// (0x00017929) heading_pane_cp03

0xa862,	// (0x00017931) listscroll_popup_gms_pane

0xa86a,	// (0x00017939) grid_large_graphic_popup_pane

0xa874,	// (0x00017943) listscroll_popup_gms_pane_g1

0xa87c,	// (0x0001794b) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0001c4a8) listscroll_popup_gms_pane_g

0xa27e,	// (0x0001734d) scroll_pane_cp014

0x2dba,	// (0x0000fe89) cell_large_graphic_popup_pane_ParamLimits

0x2dba,	// (0x0000fe89) cell_large_graphic_popup_pane

0x2dd2,	// (0x0000fea1) cell_large_graphic_popup_pane_g1_ParamLimits

0x2dd2,	// (0x0000fea1) cell_large_graphic_popup_pane_g1

0xa884,	// (0x00017953) cell_large_graphic_popup_pane_g2_ParamLimits

0xa884,	// (0x00017953) cell_large_graphic_popup_pane_g2

0xa890,	// (0x0001795f) cell_large_graphic_popup_pane_g3_ParamLimits

0xa890,	// (0x0001795f) cell_large_graphic_popup_pane_g3

0xa89d,	// (0x0001796c) cell_large_graphic_popup_pane_g4_ParamLimits

0xa89d,	// (0x0001796c) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0001c4ad) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0001c4ad) cell_large_graphic_popup_pane_g

0xa8ad,	// (0x0001797c) grid_highlight_pane_cp010

0x9de9,	// (0x00016eb8) bg_popup_call_pane_g1

0xa8b7,	// (0x00017986) list_single_graphic_popup_conf_pane_ParamLimits

0xa8b7,	// (0x00017986) list_single_graphic_popup_conf_pane

0xa8c9,	// (0x00017998) list_highlight_pane_cp01

0xa8d2,	// (0x000179a1) list_single_graphic_popup_conf_pane_g1

0xa8da,	// (0x000179a9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0001c4b6) list_single_graphic_popup_conf_pane_g

0xa8e2,	// (0x000179b1) list_single_graphic_popup_conf_pane_t1

0xa8f0,	// (0x000179bf) linegrid_cams_pane_g1

0x2dde,	// (0x0000fead) linegrid_cams_pane_g2

0x9f87,	// (0x00017056) linegrid_cams_pane_g3

0xa8f9,	// (0x000179c8) linegrid_cams_pane_g4

0x2de7,	// (0x0000feb6) linegrid_cams_pane_g5

0x2df0,	// (0x0000febf) linegrid_cams_pane_g6

0x9f90,	// (0x0001705f) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0001c4bb) linegrid_cams_pane_g

0xa902,	// (0x000179d1) popup_clock_analogue_window

0xa902,	// (0x000179d1) popup_clock_digital_window

0x9a28,	// (0x00016af7) popup_phob_thumbnail_window

0x9de9,	// (0x00016eb8) call_video_uplink_pane_g1

0xa90b,	// (0x000179da) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0001c4ca) call_video_uplink_pane_g

0xa913,	// (0x000179e2) video_uplink_pane

0xa91b,	// (0x000179ea) mce_image_pane_g1

0x2dfb,	// (0x0000feca) mce_image_pane_g2

0x2e05,	// (0x0000fed4) mce_image_pane_g3

0x2e0f,	// (0x0000fede) mce_image_pane_g4

0x2e17,	// (0x0000fee6) mce_image_pane_g5

0x0004,

0xf400,	// (0x0001c4cf) mce_image_pane_g

0xa925,	// (0x000179f4) control_top_pane_stacon_cp01_ParamLimits

0xa925,	// (0x000179f4) control_top_pane_stacon_cp01

0xa939,	// (0x00017a08) uni_indicator_pane_stacon_cp01_ParamLimits

0xa939,	// (0x00017a08) uni_indicator_pane_stacon_cp01

0xa94a,	// (0x00017a19) bg_popup_sub_pane_cp03

0x2e1f,	// (0x0000feee) chi_dic_find_pane

0x2e27,	// (0x0000fef6) listscroll_chi_dic_pane

0x2e30,	// (0x0000feff) main_pane_chidic_g1

0x2e43,	// (0x0000ff12) chi_dic_find_pane_t1

0xa954,	// (0x00017a23) find_chidic_pane

0xa95d,	// (0x00017a2c) chi_dic_list_pane_ParamLimits

0xa95d,	// (0x00017a2c) chi_dic_list_pane

0xa96e,	// (0x00017a3d) scroll_pane_cp020

0x2e51,	// (0x0000ff20) find_chidic_pane_t1

0x9a28,	// (0x00016af7) input_focus_pane_cp06

0x2e60,	// (0x0000ff2f) list_chi_dic_pane_ParamLimits

0x2e60,	// (0x0000ff2f) list_chi_dic_pane

0x2e72,	// (0x0000ff41) list_chi_dic_pane_t1_ParamLimits

0x2e72,	// (0x0000ff41) list_chi_dic_pane_t1

0x9a28,	// (0x00016af7) list_highlight_pane_cp020

0xa976,	// (0x00017a45) bg_cale_heading_pane_g1

0x2e85,	// (0x0000ff54) bg_cale_heading_pane_g2

0x2e8d,	// (0x0000ff5c) bg_cale_heading_pane_g3

0x2e95,	// (0x0000ff64) bg_cale_heading_pane_g4

0x2e9d,	// (0x0000ff6c) bg_cale_heading_pane_g5

0x2ea5,	// (0x0000ff74) bg_cale_heading_pane_g6

0x2ead,	// (0x0000ff7c) bg_cale_heading_pane_g7

0x2eb5,	// (0x0000ff84) bg_cale_heading_pane_g8

0x2ebd,	// (0x0000ff8c) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0001c4da) bg_cale_heading_pane_g

0xa976,	// (0x00017a45) bg_cale_side_pane_g1

0x2ec5,	// (0x0000ff94) bg_cale_side_pane_g2

0x2ecf,	// (0x0000ff9e) bg_cale_side_pane_g3

0x2ed9,	// (0x0000ffa8) bg_cale_side_pane_g4

0x2ee3,	// (0x0000ffb2) bg_cale_side_pane_g5

0x2eed,	// (0x0000ffbc) bg_cale_side_pane_g6

0x2ef7,	// (0x0000ffc6) bg_cale_side_pane_g7

0x2f01,	// (0x0000ffd0) bg_cale_side_pane_g8

0x2f09,	// (0x0000ffd8) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0001c4ed) bg_cale_side_pane_g

0x2f11,	// (0x0000ffe0) popup_call_status_window_ParamLimits

0x2f11,	// (0x0000ffe0) popup_call_status_window

0xa97e,	// (0x00017a4d) stacon_top_pane

0xa986,	// (0x00017a55) status_pane_ParamLimits

0xa986,	// (0x00017a55) status_pane

0xa99b,	// (0x00017a6a) status_small_pane

0xa9a3,	// (0x00017a72) control_pane

0x9a28,	// (0x00016af7) stacon_bottom_pane

0xa9ab,	// (0x00017a7a) list_single_mce_smart_pane_t1_ParamLimits

0xa9ab,	// (0x00017a7a) list_single_mce_smart_pane_t1

0xa9be,	// (0x00017a8d) list_single_mce_smart_pane_t2_ParamLimits

0xa9be,	// (0x00017a8d) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0001c500) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0001c500) list_single_mce_smart_pane_t

0x2f5e,	// (0x0001002d) compass_pane

0x2f69,	// (0x00010038) main_location2_pane_t1

0x2f7f,	// (0x0001004e) main_location2_pane_t2

0x2f95,	// (0x00010064) main_location2_pane_t3

0x0003,

0xf436,	// (0x0001c505) main_location2_pane_t

0xa9dd,	// (0x00017aac) compass_pane_g1_ParamLimits

0xa9dd,	// (0x00017aac) compass_pane_g1

0x2fe3,	// (0x000100b2) compass_pane_t1

0x2ff2,	// (0x000100c1) compass_pane_t2

0x0005,

0xf43f,	// (0x0001c50e) compass_pane_t

0x303d,	// (0x0001010c) text_secondary_cp61

0xa9f1,	// (0x00017ac0) navi_pane_cams_g5

0xaa14,	// (0x00017ae3) navi_pane_im_t1

0xaa22,	// (0x00017af1) navi_pane_mp_g1_ParamLimits

0xaa22,	// (0x00017af1) navi_pane_mp_g1

0xaa36,	// (0x00017b05) navi_pane_mp_g2_ParamLimits

0xaa36,	// (0x00017b05) navi_pane_mp_g2

0xaa42,	// (0x00017b11) navi_pane_mp_g3_ParamLimits

0xaa42,	// (0x00017b11) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0001c522) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0001c522) navi_pane_mp_g

0xaa4e,	// (0x00017b1d) navi_pane_mp_t1

0xaa5c,	// (0x00017b2b) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0001c529) navi_pane_mp_t

0xaa98,	// (0x00017b67) navi_pane_vt_g1

0xaa4e,	// (0x00017b1d) navi_pane_vt_t1

0xaaa0,	// (0x00017b6f) navi_slider_pane

0xaaa8,	// (0x00017b77) zooming_pane

0xaab0,	// (0x00017b7f) navi_slider_pane_g1

0xaab9,	// (0x00017b88) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0001c530) navi_slider_pane_g

0xaae6,	// (0x00017bb5) aid_levels_zoom

0xaaee,	// (0x00017bbd) zooming_pane_g1

0xaaf6,	// (0x00017bc5) zooming_pane_g2

0xaaf6,	// (0x00017bc5) zooming_pane_g3

0x0002,

0xf470,	// (0x0001c53f) zooming_pane_g

0xaafe,	// (0x00017bcd) level_10_zoom

0xab07,	// (0x00017bd6) level_11_zoom

0xab10,	// (0x00017bdf) level_1_zoom

0xab19,	// (0x00017be8) level_2_zoom

0xab22,	// (0x00017bf1) level_3_zoom

0xab2b,	// (0x00017bfa) level_4_zoom

0xab34,	// (0x00017c03) level_5_zoom

0xab3d,	// (0x00017c0c) level_6_zoom

0xab46,	// (0x00017c15) level_7_zoom

0xab4f,	// (0x00017c1e) level_8_zoom

0xab58,	// (0x00017c27) level_9_zoom

0xab69,	// (0x00017c38) popup_phob_thumbnail_window_g1

0xab71,	// (0x00017c40) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0001c546) popup_phob_thumbnail_window_g

0xbebc,	// (0x00018f8b) level_1_location

0xbec4,	// (0x00018f93) level_2_location

0xbecc,	// (0x00018f9b) level_3_location

0xbed4,	// (0x00018fa3) level_4_location

0xaaa8,	// (0x00017b77) level_5_location

0x3168,	// (0x00010237) mce_icon_pane_g1

0x3170,	// (0x0001023f) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0001c54b) mce_icon_pane_g

0x3178,	// (0x00010247) main_mup_pane_g1_ParamLimits

0x3178,	// (0x00010247) main_mup_pane_g1

0x318e,	// (0x0001025d) main_mup_pane_g2_ParamLimits

0x318e,	// (0x0001025d) main_mup_pane_g2

0x31a6,	// (0x00010275) main_mup_pane_g3_ParamLimits

0x31a6,	// (0x00010275) main_mup_pane_g3

0x31be,	// (0x0001028d) main_mup_pane_g4_ParamLimits

0x31be,	// (0x0001028d) main_mup_pane_g4

0x31d0,	// (0x0001029f) main_mup_pane_g5_ParamLimits

0x31d0,	// (0x0001029f) main_mup_pane_g5

0x31ec,	// (0x000102bb) main_mup_pane_g6_ParamLimits

0x31ec,	// (0x000102bb) main_mup_pane_g6

0x3206,	// (0x000102d5) main_mup_pane_g7_ParamLimits

0x3206,	// (0x000102d5) main_mup_pane_g7

0x3224,	// (0x000102f3) main_mup_pane_g8_ParamLimits

0x3224,	// (0x000102f3) main_mup_pane_g8

0x3242,	// (0x00010311) main_mup_pane_g9_ParamLimits

0x3242,	// (0x00010311) main_mup_pane_g9

0x325e,	// (0x0001032d) main_mup_pane_g10_ParamLimits

0x325e,	// (0x0001032d) main_mup_pane_g10

0x327c,	// (0x0001034b) main_mup_pane_g11_ParamLimits

0x327c,	// (0x0001034b) main_mup_pane_g11

0x3296,	// (0x00010365) main_mup_pane_g12_ParamLimits

0x3296,	// (0x00010365) main_mup_pane_g12

0x32ac,	// (0x0001037b) main_mup_pane_g13_ParamLimits

0x32ac,	// (0x0001037b) main_mup_pane_g13

0x000c,

0xf481,	// (0x0001c550) main_mup_pane_g_ParamLimits

0xf481,	// (0x0001c550) main_mup_pane_g

0x32c0,	// (0x0001038f) main_mup_pane_t1_ParamLimits

0x32c0,	// (0x0001038f) main_mup_pane_t1

0x32dc,	// (0x000103ab) main_mup_pane_t2_ParamLimits

0x32dc,	// (0x000103ab) main_mup_pane_t2

0x32f4,	// (0x000103c3) main_mup_pane_t3_ParamLimits

0x32f4,	// (0x000103c3) main_mup_pane_t3

0x330c,	// (0x000103db) main_mup_pane_t4_ParamLimits

0x330c,	// (0x000103db) main_mup_pane_t4

0x332a,	// (0x000103f9) main_mup_pane_t5_ParamLimits

0x332a,	// (0x000103f9) main_mup_pane_t5

0x333f,	// (0x0001040e) main_mup_pane_t6_ParamLimits

0x333f,	// (0x0001040e) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0001c56b) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0001c56b) main_mup_pane_t

0x3351,	// (0x00010420) mup_progress_pane_ParamLimits

0x3351,	// (0x00010420) mup_progress_pane

0x335d,	// (0x0001042c) mup_visualizer_pane_ParamLimits

0x335d,	// (0x0001042c) mup_visualizer_pane

0x3391,	// (0x00010460) mup_volume_pane_ParamLimits

0x3391,	// (0x00010460) mup_volume_pane

0xab79,	// (0x00017c48) mup_visualizer_pane_g1_ParamLimits

0xab79,	// (0x00017c48) mup_visualizer_pane_g1

0xab79,	// (0x00017c48) mup_visualizer_pane_g2_ParamLimits

0xab79,	// (0x00017c48) mup_visualizer_pane_g2

0xa9dd,	// (0x00017aac) mup_visualizer_pane_g3_ParamLimits

0xa9dd,	// (0x00017aac) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0001c578) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0001c578) mup_visualizer_pane_g

0x9de9,	// (0x00016eb8) mup_volume_pane_g1

0xab8f,	// (0x00017c5e) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0001c57f) mup_volume_pane_g

0x9de9,	// (0x00016eb8) mup_progress_pane_g1

0xab98,	// (0x00017c67) mup_progress_pane_g2

0xaba1,	// (0x00017c70) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0001c584) mup_progress_pane_g

0x9a28,	// (0x00016af7) bg_popup_window_pane_cp05

0xabaa,	// (0x00017c79) heading_pane_cp02_ParamLimits

0xabaa,	// (0x00017c79) heading_pane_cp02

0xabc6,	// (0x00017c95) list_popup_blid_pane

0xabce,	// (0x00017c9d) list_blid_sat_info_pane_ParamLimits

0xabce,	// (0x00017c9d) list_blid_sat_info_pane

0xabe1,	// (0x00017cb0) list_blid_sat_info_pane_g1

0xabe9,	// (0x00017cb8) list_blid_sat_info_pane_t1

0x34bb,	// (0x0001058a) mup_equalizer_pane_ParamLimits

0x34bb,	// (0x0001058a) mup_equalizer_pane

0x34dc,	// (0x000105ab) mup_equalizer_pane_cp1_ParamLimits

0x34dc,	// (0x000105ab) mup_equalizer_pane_cp1

0x34fd,	// (0x000105cc) mup_equalizer_pane_cp2_ParamLimits

0x34fd,	// (0x000105cc) mup_equalizer_pane_cp2

0x3522,	// (0x000105f1) mup_equalizer_pane_cp3_ParamLimits

0x3522,	// (0x000105f1) mup_equalizer_pane_cp3

0x354b,	// (0x0001061a) mup_equalizer_pane_cp4_ParamLimits

0x354b,	// (0x0001061a) mup_equalizer_pane_cp4

0x3574,	// (0x00010643) mup_equalizer_pane_cp5

0x358c,	// (0x0001065b) mup_equalizer_pane_cp6

0x35a4,	// (0x00010673) mup_equalizer_pane_cp7

0xbdd6,	// (0x00018ea5) bg_popup_call_poc_act_pane_g9

0xbdde,	// (0x00018ead) bg_popup_call_poc_act_pane_g10

0xbde6,	// (0x00018eb5) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c83,	// (0x00016d52) mup_scale_pane

0x9de9,	// (0x00016eb8) mup_scale_pane_g1

0xabf7,	// (0x00017cc6) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0001c5a0) mup_scale_pane_g

0xac1b,	// (0x00017cea) msg_data_pane

0xac23,	// (0x00017cf2) scroll_pane_cp017

0x35ce,	// (0x0001069d) bg_list_pane_cp04_ParamLimits

0x35ce,	// (0x0001069d) bg_list_pane_cp04

0xac2b,	// (0x00017cfa) msg_data_pane_g1

0x35f6,	// (0x000106c5) msg_data_pane_g2

0x3600,	// (0x000106cf) msg_data_pane_g3

0x360a,	// (0x000106d9) msg_data_pane_g4

0x3612,	// (0x000106e1) msg_data_pane_g5

0x361a,	// (0x000106e9) msg_data_pane_g6

0x3622,	// (0x000106f1) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0001c5af) msg_data_pane_g

0x362a,	// (0x000106f9) msg_text_pane_ParamLimits

0x362a,	// (0x000106f9) msg_text_pane

0x3659,	// (0x00010728) qrid_highlight_pane_cp011_ParamLimits

0x3659,	// (0x00010728) qrid_highlight_pane_cp011

0x9a28,	// (0x00016af7) msg_body_pane

0x9a28,	// (0x00016af7) msg_header_pane

0xac3c,	// (0x00017d0b) input_focus_pane_cp07

0x367d,	// (0x0001074c) msg_header_pane_t1_ParamLimits

0x367d,	// (0x0001074c) msg_header_pane_t1

0x3691,	// (0x00010760) msg_header_pane_t2_ParamLimits

0x3691,	// (0x00010760) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0001c5c3) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0001c5c3) msg_header_pane_t

0xac51,	// (0x00017d20) msg_body_pane_g1

0x36a3,	// (0x00010772) msg_body_pane_t1_ParamLimits

0x36a3,	// (0x00010772) msg_body_pane_t1

0x36d4,	// (0x000107a3) msg_body_pane_t2_ParamLimits

0x36d4,	// (0x000107a3) msg_body_pane_t2

0x36e6,	// (0x000107b5) msg_body_pane_t3_ParamLimits

0x36e6,	// (0x000107b5) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0001c5c8) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0001c5c8) msg_body_pane_t

0x3732,	// (0x00010801) main_viewer_pane_g1_ParamLimits

0x3732,	// (0x00010801) main_viewer_pane_g1

0x3740,	// (0x0001080f) main_viewer_pane_g2_ParamLimits

0x3740,	// (0x0001080f) main_viewer_pane_g2

0x374e,	// (0x0001081d) main_viewer_pane_g3_ParamLimits

0x374e,	// (0x0001081d) main_viewer_pane_g3

0x375d,	// (0x0001082c) main_viewer_pane_g4_ParamLimits

0x375d,	// (0x0001082c) main_viewer_pane_g4

0xac71,	// (0x00017d40) main_viewer_pane_g5_ParamLimits

0xac71,	// (0x00017d40) main_viewer_pane_g5

0xac71,	// (0x00017d40) main_viewer_pane_g7_ParamLimits

0xac71,	// (0x00017d40) main_viewer_pane_g7

0xac83,	// (0x00017d52) main_viewer_pane_g8_ParamLimits

0xac83,	// (0x00017d52) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0001c5d8) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0001c5d8) main_viewer_pane_g

0xac9b,	// (0x00017d6a) viewer_content_pane_ParamLimits

0xac9b,	// (0x00017d6a) viewer_content_pane

0x379b,	// (0x0001086a) main_postcard_pane_g1_ParamLimits

0x379b,	// (0x0001086a) main_postcard_pane_g1

0x37b1,	// (0x00010880) main_postcard_pane_g2_ParamLimits

0x37b1,	// (0x00010880) main_postcard_pane_g2

0x37c7,	// (0x00010896) main_postcard_pane_g3_ParamLimits

0x37c7,	// (0x00010896) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0001c5e9) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0001c5e9) main_postcard_pane_g

0x37de,	// (0x000108ad) main_postcard_pane_g4

0xc006,	// (0x000190d5) smil_status_volume_pane_g2

0x3821,	// (0x000108f0) postcard_pane_ParamLimits

0x3821,	// (0x000108f0) postcard_pane

0xaca9,	// (0x00017d78) postcard_pane_g1_ParamLimits

0xaca9,	// (0x00017d78) postcard_pane_g1

0x3871,	// (0x00010940) postcard_pane_g2_ParamLimits

0x3871,	// (0x00010940) postcard_pane_g2

0x387d,	// (0x0001094c) postcard_pane_g3_ParamLimits

0x387d,	// (0x0001094c) postcard_pane_g3

0xacb7,	// (0x00017d86) postcard_pane_g4_ParamLimits

0xacb7,	// (0x00017d86) postcard_pane_g4

0x3889,	// (0x00010958) postcard_pane_g5_ParamLimits

0x3889,	// (0x00010958) postcard_pane_g5

0x389b,	// (0x0001096a) postcard_pane_g6_ParamLimits

0x389b,	// (0x0001096a) postcard_pane_g6

0xaca9,	// (0x00017d78) postcard_pane_g7_ParamLimits

0xaca9,	// (0x00017d78) postcard_pane_g7

0x0006,

0xf527,	// (0x0001c5f6) postcard_pane_g_ParamLimits

0xf527,	// (0x0001c5f6) postcard_pane_g

0x38b3,	// (0x00010982) main_mp2_pane_g1_ParamLimits

0x38b3,	// (0x00010982) main_mp2_pane_g1

0x38c1,	// (0x00010990) main_mp2_pane_g2_ParamLimits

0x38c1,	// (0x00010990) main_mp2_pane_g2

0x38cd,	// (0x0001099c) main_mp2_pane_g3_ParamLimits

0x38cd,	// (0x0001099c) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0001c605) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0001c605) main_mp2_pane_g

0x38d9,	// (0x000109a8) main_mp2_pane_t1_ParamLimits

0x38d9,	// (0x000109a8) main_mp2_pane_t1

0x38f0,	// (0x000109bf) main_mp2_pane_t2_ParamLimits

0x38f0,	// (0x000109bf) main_mp2_pane_t2

0x3904,	// (0x000109d3) main_mp2_pane_t3_ParamLimits

0x3904,	// (0x000109d3) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0001c60c) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0001c60c) main_mp2_pane_t

0xacc5,	// (0x00017d94) pec_content_pane_ParamLimits

0xacc5,	// (0x00017d94) pec_content_pane

0xa27e,	// (0x0001734d) scroll_pane_cp015

0xacd7,	// (0x00017da6) pec_attribute_pane_ParamLimits

0xacd7,	// (0x00017da6) pec_attribute_pane

0x3916,	// (0x000109e5) pec_content_pane_g1_ParamLimits

0x3916,	// (0x000109e5) pec_content_pane_g1

0xace7,	// (0x00017db6) pec_content_pane_t1_ParamLimits

0xace7,	// (0x00017db6) pec_content_pane_t1

0xacf9,	// (0x00017dc8) pec_content_pane_t2_ParamLimits

0xacf9,	// (0x00017dc8) pec_content_pane_t2

0x0001,

0xf544,	// (0x0001c613) pec_content_pane_t_ParamLimits

0xf544,	// (0x0001c613) pec_content_pane_t

0x3922,	// (0x000109f1) list_single_graphic_pane_cp01_ParamLimits

0x3922,	// (0x000109f1) list_single_graphic_pane_cp01

0x9c83,	// (0x00016d52) bg_popup_sub_pane_cp04

0xad0b,	// (0x00017dda) popup_mup_playback_window_g1

0xad17,	// (0x00017de6) popup_mup_playback_window_t1

0xad2c,	// (0x00017dfb) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0001c618) popup_mup_playback_window_t

0xad63,	// (0x00017e32) main_image_pane_g1_ParamLimits

0xad63,	// (0x00017e32) main_image_pane_g1

0xada6,	// (0x00017e75) scroll_pane_cp018_ParamLimits

0xada6,	// (0x00017e75) scroll_pane_cp018

0xadbe,	// (0x00017e8d) scroll_pane_cp016_ParamLimits

0xadbe,	// (0x00017e8d) scroll_pane_cp016

0x39f4,	// (0x00010ac3) smil2_image_pane_ParamLimits

0x39f4,	// (0x00010ac3) smil2_image_pane

0x3a2a,	// (0x00010af9) smil2_root_pane_ParamLimits

0x3a2a,	// (0x00010af9) smil2_root_pane

0x3a62,	// (0x00010b31) smil2_text_pane_ParamLimits

0x3a62,	// (0x00010b31) smil2_text_pane

0x9a28,	// (0x00016af7) bg_list_pane_cp06

0xadfa,	// (0x00017ec9) grid_radio_pane

0x9a28,	// (0x00016af7) bg_popup_window_pane_cp06

0xae04,	// (0x00017ed3) main_fmradio_pane_t1

0xa85a,	// (0x00017929) heading_pane_cp04

0xae12,	// (0x00017ee1) main_fmradio_pane_t2

0xbdee,	// (0x00018ebd) popup_cale_lunar_info_window_g1

0xae20,	// (0x00017eef) main_fmradio_pane_t3

0xbdf6,	// (0x00018ec5) popup_cale_lunar_info_window_g2

0xae30,	// (0x00017eff) main_fmradio_pane_t4

0x0001,

0xae3e,	// (0x00017f0d) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0001c6f3) popup_cale_lunar_info_window_g

0xf55e,	// (0x0001c62d) main_fmradio_pane_t

0xae4c,	// (0x00017f1b) wait_bar_pane_cp03

0xae54,	// (0x00017f23) cell_fmradio_pane_ParamLimits

0xae54,	// (0x00017f23) cell_fmradio_pane

0xaca9,	// (0x00017d78) cell_fmradio_pane_g1_ParamLimits

0xaca9,	// (0x00017d78) cell_fmradio_pane_g1

0x9a28,	// (0x00016af7) grid_highlight_pane_cp011

0xae69,	// (0x00017f38) poc_content_pane_ParamLimits

0xae69,	// (0x00017f38) poc_content_pane

0xae7b,	// (0x00017f4a) scroll_pane_cp019

0x3af2,	// (0x00010bc1) popup_call_poc_act_window_ParamLimits

0x3af2,	// (0x00010bc1) popup_call_poc_act_window

0x3b16,	// (0x00010be5) popup_call_poc_inact_window_ParamLimits

0x3b16,	// (0x00010be5) popup_call_poc_inact_window

0xf5fb,	// (0x0001c6ca) bg_popup_call_poc_act_pane_g

0xbd66,	// (0x00018e35) bg_popup_call_poc_inact_pane_g1

0xbd6e,	// (0x00018e3d) bg_popup_call_poc_inact_pane_g2

0xae83,	// (0x00017f52) popup_call_poc_act_window_g2

0xbd76,	// (0x00018e45) bg_popup_call_poc_inact_pane_g3

0xbd7e,	// (0x00018e4d) bg_popup_call_poc_inact_pane_g4

0xbd86,	// (0x00018e55) bg_popup_call_poc_inact_pane_g5

0xae8b,	// (0x00017f5a) popup_call_poc_act_window_t1_ParamLimits

0xae8b,	// (0x00017f5a) popup_call_poc_act_window_t1

0xaeb3,	// (0x00017f82) popup_call_poc_act_window_t2_ParamLimits

0xaeb3,	// (0x00017f82) popup_call_poc_act_window_t2

0xaedb,	// (0x00017faa) popup_call_poc_act_window_t3_ParamLimits

0xaedb,	// (0x00017faa) popup_call_poc_act_window_t3

0xaf03,	// (0x00017fd2) popup_call_poc_act_window_t4_ParamLimits

0xaf03,	// (0x00017fd2) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0001c638) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0001c638) popup_call_poc_act_window_t

0xbd8e,	// (0x00018e5d) bg_popup_call_poc_inact_pane_g6

0xbd96,	// (0x00018e65) bg_popup_call_poc_inact_pane_g7

0xbd9e,	// (0x00018e6d) bg_popup_call_poc_inact_pane_g8

0xaf15,	// (0x00017fe4) popup_call_poc_inact_window_g2

0xbda6,	// (0x00018e75) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0001c6b7) bg_popup_call_poc_inact_pane_g

0xaf1d,	// (0x00017fec) popup_call_poc_inact_window_t1_ParamLimits

0xaf1d,	// (0x00017fec) popup_call_poc_inact_window_t1

0xaf32,	// (0x00018001) popup_call_poc_inact_window_t2_ParamLimits

0xaf32,	// (0x00018001) popup_call_poc_inact_window_t2

0xaf47,	// (0x00018016) popup_call_poc_inact_window_t3_ParamLimits

0xaf47,	// (0x00018016) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0001c641) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0001c641) popup_call_poc_inact_window_t

0xbf66,	// (0x00019035) context_pane_ParamLimits

0x43c1,	// (0x00011490) signal_pane_ParamLimits

0xaaa8,	// (0x00017b77) main_call2_pane

0xbf54,	// (0x00019023) popup_phob_thumbnail2_window_ParamLimits

0xbf54,	// (0x00019023) popup_phob_thumbnail2_window

0xac59,	// (0x00017d28) aid_hotspot_pointer_arrow_pane

0xac61,	// (0x00017d30) aid_hotspot_pointer_hand_pane

0x3e81,	// (0x00010f50) phob_pre_status_pane_g5

0x1c1f,	// (0x0000ecee) cams_zoom_pane_ParamLimits

0x1c2e,	// (0x0000ecfd) image_vga_pane_ParamLimits

0x1c48,	// (0x0000ed17) main_camera_pane_g1_ParamLimits

0x1c5a,	// (0x0000ed29) main_camera_pane_g2_ParamLimits

0x1c6a,	// (0x0000ed39) main_camera_pane_g3_ParamLimits

0x1c7e,	// (0x0000ed4d) main_camera_pane_g4_ParamLimits

0x1c92,	// (0x0000ed61) main_camera_pane_g5_ParamLimits

0x1ca6,	// (0x0000ed75) main_camera_pane_g6_ParamLimits

0x1cba,	// (0x0000ed89) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0001c340) main_camera_pane_g_ParamLimits

0x1cce,	// (0x0000ed9d) main_camera_pane_t1_ParamLimits

0x1ce4,	// (0x0000edb3) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0001c351) main_camera_pane_t_ParamLimits

0x9c83,	// (0x00016d52) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c83,	// (0x00016d52) bg_popup_preview_window_pane_cp01

0xaf5c,	// (0x0001802b) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf5c,	// (0x0001802b) popup_phob_thumbnail2_window_g1

0x9a28,	// (0x00016af7) call2_cli_visual_pane

0x3b4a,	// (0x00010c19) popup_call2_audio_conf_window_ParamLimits

0x3b4a,	// (0x00010c19) popup_call2_audio_conf_window

0x3b72,	// (0x00010c41) popup_call2_audio_first_window_ParamLimits

0x3b72,	// (0x00010c41) popup_call2_audio_first_window

0x3c08,	// (0x00010cd7) popup_call2_audio_in_window_ParamLimits

0x3c08,	// (0x00010cd7) popup_call2_audio_in_window

0x3c54,	// (0x00010d23) popup_call2_audio_out_window_ParamLimits

0x3c54,	// (0x00010d23) popup_call2_audio_out_window

0x3cc6,	// (0x00010d95) popup_call2_audio_second_window_ParamLimits

0x3cc6,	// (0x00010d95) popup_call2_audio_second_window

0x3d2c,	// (0x00010dfb) popup_call2_audio_wait_window_ParamLimits

0x3d2c,	// (0x00010dfb) popup_call2_audio_wait_window

0x9a28,	// (0x00016af7) bg_popup_call2_act_pane_cp03

0x9c65,	// (0x00016d34) list_conf_pane_cp

0xaf68,	// (0x00018037) popup_call2_audio_conf_window_t1

0xaf76,	// (0x00018045) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf76,	// (0x00018045) list_single_graphic_popup_conf2_pane

0xa8c9,	// (0x00017998) list_highlight_pane_cp04

0xaf89,	// (0x00018058) list_single_graphic_popup_conf2_pane_g1

0xa8da,	// (0x000179a9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0001c648) list_single_graphic_popup_conf2_pane_g

0xaf93,	// (0x00018062) list_single_graphic_popup_conf2_pane_t1

0xafa1,	// (0x00018070) bg_popup_call2_act_pane_cp01_ParamLimits

0xafa1,	// (0x00018070) bg_popup_call2_act_pane_cp01

0xb02b,	// (0x000180fa) call_type_pane_cp05_ParamLimits

0xb02b,	// (0x000180fa) call_type_pane_cp05

0xb07f,	// (0x0001814e) popup_call2_audio_second_window_g1_ParamLimits

0xb07f,	// (0x0001814e) popup_call2_audio_second_window_g1

0xb0d3,	// (0x000181a2) popup_call2_audio_second_window_g2_ParamLimits

0xb0d3,	// (0x000181a2) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0001c64d) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0001c64d) popup_call2_audio_second_window_g

0xb138,	// (0x00018207) popup_call2_audio_second_window_t1_ParamLimits

0xb138,	// (0x00018207) popup_call2_audio_second_window_t1

0xb1f3,	// (0x000182c2) popup_call2_audio_second_window_t2_ParamLimits

0xb1f3,	// (0x000182c2) popup_call2_audio_second_window_t2

0xb246,	// (0x00018315) popup_call2_audio_second_window_t3_ParamLimits

0xb246,	// (0x00018315) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0001c654) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0001c654) popup_call2_audio_second_window_t

0x9a28,	// (0x00016af7) bg_popup_call2_in_pane_cp02

0x9a32,	// (0x00016b01) call_type_pane_cp04

0x9a3a,	// (0x00016b09) popup_call2_audio_wait_window_g1

0x9a42,	// (0x00016b11) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0001c22d) popup_call2_audio_wait_window_g

0x9a4a,	// (0x00016b19) popup_call2_audio_wait_window_t3

0xb339,	// (0x00018408) bg_popup_call2_act_pane_ParamLimits

0xb339,	// (0x00018408) bg_popup_call2_act_pane

0xb3f9,	// (0x000184c8) call_type_pane_cp03_ParamLimits

0xb3f9,	// (0x000184c8) call_type_pane_cp03

0xb45d,	// (0x0001852c) popup_call2_audio_first_window_g1_ParamLimits

0xb45d,	// (0x0001852c) popup_call2_audio_first_window_g1

0xb4cd,	// (0x0001859c) popup_call2_audio_first_window_g2_ParamLimits

0xb4cd,	// (0x0001859c) popup_call2_audio_first_window_g2

0xab79,	// (0x00017c48) popup_call2_audio_first_window_g3_ParamLimits

0xab79,	// (0x00017c48) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0001c65d) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0001c65d) popup_call2_audio_first_window_g

0xb5ab,	// (0x0001867a) popup_call2_audio_first_window_t1_ParamLimits

0xb5ab,	// (0x0001867a) popup_call2_audio_first_window_t1

0xb6ae,	// (0x0001877d) popup_call2_audio_first_window_t4_ParamLimits

0xb6ae,	// (0x0001877d) popup_call2_audio_first_window_t4

0xb791,	// (0x00018860) popup_call2_audio_first_window_t5_ParamLimits

0xb791,	// (0x00018860) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0001c668) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0001c668) popup_call2_audio_first_window_t

0x9c7b,	// (0x00016d4a) bg_popup_call2_act_pane_g1

0xbe00,	// (0x00018ecf) popup_cale_lunar_info_window_t1

0xbe0e,	// (0x00018edd) popup_cale_lunar_info_window_t2

0xbe1c,	// (0x00018eeb) popup_cale_lunar_info_window_t3

0x9a28,	// (0x00016af7) bg_popup_call2_bubble_pane

0xb892,	// (0x00018961) bg_popup_call2_in_pane_cp01_ParamLimits

0xb892,	// (0x00018961) bg_popup_call2_in_pane_cp01

0x9704,	// (0x000167d3) call_type_pane_cp02

0xb8da,	// (0x000189a9) popup_call2_audio_out_window_g1_ParamLimits

0xb8da,	// (0x000189a9) popup_call2_audio_out_window_g1

0xb906,	// (0x000189d5) popup_call2_audio_out_window_g2_ParamLimits

0xb906,	// (0x000189d5) popup_call2_audio_out_window_g2

0xb92e,	// (0x000189fd) popup_call2_audio_out_window_g3_ParamLimits

0xb92e,	// (0x000189fd) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0001c671) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0001c671) popup_call2_audio_out_window_g

0xb969,	// (0x00018a38) popup_call2_audio_out_window_t1_ParamLimits

0xb969,	// (0x00018a38) popup_call2_audio_out_window_t1

0xb9c8,	// (0x00018a97) popup_call2_audio_out_window_t2_ParamLimits

0xb9c8,	// (0x00018a97) popup_call2_audio_out_window_t2

0xba1c,	// (0x00018aeb) popup_call2_audio_out_window_t3_ParamLimits

0xba1c,	// (0x00018aeb) popup_call2_audio_out_window_t3

0xba32,	// (0x00018b01) popup_call2_audio_out_window_t4_ParamLimits

0xba32,	// (0x00018b01) popup_call2_audio_out_window_t4

0xba48,	// (0x00018b17) popup_call2_audio_out_window_t5_ParamLimits

0xba48,	// (0x00018b17) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0001c67a) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0001c67a) popup_call2_audio_out_window_t

0xbaac,	// (0x00018b7b) bg_popup_call2_in_pane_ParamLimits

0xbaac,	// (0x00018b7b) bg_popup_call2_in_pane

0xbb08,	// (0x00018bd7) popup_call2_audio_in_window_g1_ParamLimits

0xbb08,	// (0x00018bd7) popup_call2_audio_in_window_g1

0xbb40,	// (0x00018c0f) popup_call2_audio_in_window_g2_ParamLimits

0xbb40,	// (0x00018c0f) popup_call2_audio_in_window_g2

0xbb78,	// (0x00018c47) popup_call2_audio_in_window_g3_ParamLimits

0xbb78,	// (0x00018c47) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0001c687) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0001c687) popup_call2_audio_in_window_g

0xbbd0,	// (0x00018c9f) popup_call2_audio_in_window_t1_ParamLimits

0xbbd0,	// (0x00018c9f) popup_call2_audio_in_window_t1

0xbc50,	// (0x00018d1f) popup_call2_audio_in_window_t2_ParamLimits

0xbc50,	// (0x00018d1f) popup_call2_audio_in_window_t2

0xbcd0,	// (0x00018d9f) popup_call2_audio_in_window_t3_ParamLimits

0xbcd0,	// (0x00018d9f) popup_call2_audio_in_window_t3

0xbcea,	// (0x00018db9) popup_call2_audio_in_window_t4_ParamLimits

0xbcea,	// (0x00018db9) popup_call2_audio_in_window_t4

0xbcfc,	// (0x00018dcb) popup_call2_audio_in_window_t5_ParamLimits

0xbcfc,	// (0x00018dcb) popup_call2_audio_in_window_t5

0xbd11,	// (0x00018de0) popup_call2_audio_in_window_t6_ParamLimits

0xbd11,	// (0x00018de0) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0001c690) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0001c690) popup_call2_audio_in_window_t

0x9c7b,	// (0x00016d4a) bg_popup_call2_in_pane_g1

0xbe2a,	// (0x00018ef9) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0001c6f8) popup_cale_lunar_info_window_t

0x9c83,	// (0x00016d52) bg_popup_call2_rect_pane_ParamLimits

0x9c83,	// (0x00016d52) bg_popup_call2_rect_pane

0x9a28,	// (0x00016af7) call2_cli_visual_graphic_pane

0x9a28,	// (0x00016af7) call2_cli_visual_text_pane

0xc019,	// (0x000190e8) smil_status_volume_pane_g3

0x0002,

0x9de9,	// (0x00016eb8) call2_cli_visual_graphic_pane_g1

0x9de9,	// (0x00016eb8) call2_cli_visual_graphic_pane_g2

0x9de9,	// (0x00016eb8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0001c69d) call2_cli_visual_graphic_pane_g

0xbd26,	// (0x00018df5) bg_popup_call2_rect_pane_g1

0x9e91,	// (0x00016f60) bg_popup_call2_rect_pane_g2

0xbd2e,	// (0x00018dfd) bg_popup_call2_rect_pane_g3

0xbd36,	// (0x00018e05) bg_popup_call2_rect_pane_g4

0xbd3e,	// (0x00018e0d) bg_popup_call2_rect_pane_g5

0xbd46,	// (0x00018e15) bg_popup_call2_rect_pane_g6

0xbd4e,	// (0x00018e1d) bg_popup_call2_rect_pane_g7

0xbd56,	// (0x00018e25) bg_popup_call2_rect_pane_g8

0xbd5e,	// (0x00018e2d) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001c6a4) bg_popup_call2_rect_pane_g

0xbd66,	// (0x00018e35) bg_popup_call2_bubble_pane_g1

0xbd6e,	// (0x00018e3d) bg_popup_call2_bubble_pane_g2

0xbd76,	// (0x00018e45) bg_popup_call2_bubble_pane_g3

0xbd7e,	// (0x00018e4d) bg_popup_call2_bubble_pane_g4

0xbd86,	// (0x00018e55) bg_popup_call2_bubble_pane_g5

0xbd8e,	// (0x00018e5d) bg_popup_call2_bubble_pane_g6

0xbd96,	// (0x00018e65) bg_popup_call2_bubble_pane_g7

0xbd9e,	// (0x00018e6d) bg_popup_call2_bubble_pane_g8

0xbda6,	// (0x00018e75) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0001c6b7) bg_popup_call2_bubble_pane_g

0x1828,	// (0x0000e8f7) aid_cale_week_size_cell_pane

0x1cfe,	// (0x0000edcd) aid_cams_cif_uncrop_pane_ParamLimits

0x1cfe,	// (0x0000edcd) aid_cams_cif_uncrop_pane

0x1eb7,	// (0x0000ef86) aid_cams_size_cell_ParamLimits

0x1eb7,	// (0x0000ef86) aid_cams_size_cell

0x1ecb,	// (0x0000ef9a) grid_cams_pane_ParamLimits

0x1ee5,	// (0x0000efb4) linegrid_cams_pane_ParamLimits

0x2001,	// (0x0000f0d0) call_video_pane_t1

0x2013,	// (0x0000f0e2) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0001c3a4) call_video_pane_t

0x23d5,	// (0x0000f4a4) aid_cale_month_size_cell_pane_ParamLimits

0x23d5,	// (0x0000f4a4) aid_cale_month_size_cell_pane

0xf672,	// (0x0001c741) smil_status_volume_pane_g

0xc026,	// (0x000190f5) volume_smil_pane_ParamLimits

0x95a8,	// (0x00016677) aid_popup2_width_pane

0x1790,	// (0x0000e85f) cell_qdial_pane_g4_ParamLimits

0x1790,	// (0x0000e85f) cell_qdial_pane_g4

0x2fbf,	// (0x0001008e) aid_blid_cardinal_pane_ParamLimits

0x2fcf,	// (0x0001009e) aid_blid_destination_pane_ParamLimits

0x2fcf,	// (0x0001009e) aid_blid_destination_pane

0x9c83,	// (0x00016d52) bg_popup_call_poc_act_pane_ParamLimits

0x9c83,	// (0x00016d52) bg_popup_call_poc_act_pane

0x9c83,	// (0x00016d52) bg_popup_call_poc_inact_pane_ParamLimits

0x9c83,	// (0x00016d52) bg_popup_call_poc_inact_pane

0xbdae,	// (0x00018e7d) bg_popup_call_poc_act_pane_g1

0xbdb6,	// (0x00018e85) bg_popup_call_poc_act_pane_g2

0xbdbe,	// (0x00018e8d) bg_popup_call_poc_act_pane_g3

0xbd7e,	// (0x00018e4d) bg_popup_call_poc_act_pane_g4

0xbd86,	// (0x00018e55) bg_popup_call_poc_act_pane_g5

0xbdc6,	// (0x00018e95) bg_popup_call_poc_act_pane_g6

0xbd96,	// (0x00018e65) bg_popup_call_poc_act_pane_g7

0xbdce,	// (0x00018e9d) bg_popup_call_poc_act_pane_g8

0x9a28,	// (0x00016af7) main_usb_pane

0xbf2b,	// (0x00018ffa) popup_cale_lunar_info_window

0x2255,	// (0x0000f324) im_reading_pane_t1_ParamLimits

0xa1d6,	// (0x000172a5) list_im_pane_ParamLimits

0xa1e7,	// (0x000172b6) scroll_pane_cp07_ParamLimits

0x9a28,	// (0x00016af7) grid_highlight_pane_cp012

0x9c83,	// (0x00016d52) mup_scale_pane_ParamLimits

0xaca9,	// (0x00017d78) main_usb_pane_g1_ParamLimits

0xaca9,	// (0x00017d78) main_usb_pane_g1

0x3d8d,	// (0x00010e5c) main_usb_pane_g2_ParamLimits

0x3d8d,	// (0x00010e5c) main_usb_pane_g2

0x0001,

0xf612,	// (0x0001c6e1) main_usb_pane_g_ParamLimits

0xf612,	// (0x0001c6e1) main_usb_pane_g

0x3da3,	// (0x00010e72) main_usb_pane_t1_ParamLimits

0x3da3,	// (0x00010e72) main_usb_pane_t1

0x3db5,	// (0x00010e84) main_usb_pane_t2_ParamLimits

0x3db5,	// (0x00010e84) main_usb_pane_t2

0x3dc7,	// (0x00010e96) main_usb_pane_t3_ParamLimits

0x3dc7,	// (0x00010e96) main_usb_pane_t3

0x3dd9,	// (0x00010ea8) main_usb_pane_t4_ParamLimits

0x3dd9,	// (0x00010ea8) main_usb_pane_t4

0x3dee,	// (0x00010ebd) main_usb_pane_t5_ParamLimits

0x3dee,	// (0x00010ebd) main_usb_pane_t5

0x3e03,	// (0x00010ed2) main_usb_pane_t6_ParamLimits

0x3e03,	// (0x00010ed2) main_usb_pane_t6

0x0005,

0xf617,	// (0x0001c6e6) main_usb_pane_t_ParamLimits

0x2f5e,	// (0x0001002d) aid_text_placing

0x2f69,	// (0x00010038) main_location2_pane_t1_ParamLimits

0x2f7f,	// (0x0001004e) main_location2_pane_t2_ParamLimits

0x2f95,	// (0x00010064) main_location2_pane_t3_ParamLimits

0x2fab,	// (0x0001007a) main_location2_pane_t4_ParamLimits

0x2fab,	// (0x0001007a) main_location2_pane_t4

0xf436,	// (0x0001c505) main_location2_pane_t_ParamLimits

0x9cbf,	// (0x00016d8e) find_pinb_pane_g2_ParamLimits

0x9cbf,	// (0x00016d8e) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0001c253) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0001c253) find_pinb_pane_g

0x9ccb,	// (0x00016d9a) find_pinb_pane_t1_ParamLimits

0x9cdd,	// (0x00016dac) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0001c258) find_pinb_pane_t_ParamLimits

0x9a28,	// (0x00016af7) main_call3_pane

0x2749,	// (0x0000f818) cale_month_day_heading_pane_t1_ParamLimits

0x27a7,	// (0x0000f876) cale_month_day_heading_pane_t2_ParamLimits

0x280c,	// (0x0000f8db) cale_month_day_heading_pane_t3_ParamLimits

0x2871,	// (0x0000f940) cale_month_day_heading_pane_t4_ParamLimits

0x28d6,	// (0x0000f9a5) cale_month_day_heading_pane_t5_ParamLimits

0x293b,	// (0x0000fa0a) cale_month_day_heading_pane_t6_ParamLimits

0x29a0,	// (0x0000fa6f) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0001c3dc) cale_month_day_heading_pane_t_ParamLimits

0xa45d,	// (0x0001752c) smil_status_volume_pane

0x3845,	// (0x00010914) postcard_address_pane_ParamLimits

0x3845,	// (0x00010914) postcard_address_pane

0x385b,	// (0x0001092a) postcard_message_pane_ParamLimits

0x385b,	// (0x0001092a) postcard_message_pane

0x3d66,	// (0x00010e35) call2_cli_visual_pane_t1_ParamLimits

0x3d66,	// (0x00010e35) call2_cli_visual_pane_t1

0x45d2,	// (0x000116a1) postcard_message_pane_t1_ParamLimits

0x45d2,	// (0x000116a1) postcard_message_pane_t1

0xc03b,	// (0x0001910a) postcard_address_pane_t1_ParamLimits

0xc03b,	// (0x0001910a) postcard_address_pane_t1

0x45be,	// (0x0001168d) popup_call3_audio_in_window_ParamLimits

0x45be,	// (0x0001168d) popup_call3_audio_in_window

0x4443,	// (0x00011512) bg_popup_call3_in_pane_ParamLimits

0x4443,	// (0x00011512) bg_popup_call3_in_pane

0x44bf,	// (0x0001158e) popup_call3_audio_in_window_g1_ParamLimits

0x44bf,	// (0x0001158e) popup_call3_audio_in_window_g1

0x44df,	// (0x000115ae) popup_call3_audio_in_window_g2_ParamLimits

0x44df,	// (0x000115ae) popup_call3_audio_in_window_g2

0x44ff,	// (0x000115ce) popup_call3_audio_in_window_g3_ParamLimits

0x44ff,	// (0x000115ce) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0001c748) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0001c748) popup_call3_audio_in_window_g

0x4530,	// (0x000115ff) popup_call3_audio_in_window_t1_ParamLimits

0x4530,	// (0x000115ff) popup_call3_audio_in_window_t1

0x456e,	// (0x0001163d) popup_call3_audio_in_window_t2_ParamLimits

0x456e,	// (0x0001163d) popup_call3_audio_in_window_t2

0x45ac,	// (0x0001167b) popup_call3_audio_in_window_t3_ParamLimits

0x45ac,	// (0x0001167b) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0001c751) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0001c751) popup_call3_audio_in_window_t

0xaaa8,	// (0x00017b77) bg_popup_call3_rect_pane

0xbd26,	// (0x00018df5) bg_popup_call3_rect_pane_g1

0x9e91,	// (0x00016f60) bg_popup_call3_rect_pane_g2

0xbd2e,	// (0x00018dfd) bg_popup_call3_rect_pane_g3

0xbd36,	// (0x00018e05) bg_popup_call3_rect_pane_g4

0xbd3e,	// (0x00018e0d) bg_popup_call3_rect_pane_g5

0xbd46,	// (0x00018e15) bg_popup_call3_rect_pane_g6

0xbd4e,	// (0x00018e1d) bg_popup_call3_rect_pane_g7

0x33a7,	// (0x00010476) mup_visualizer_osc_pane

0xab87,	// (0x00017c56) mup_visualizer_spec_pane

0x4473,	// (0x00011542) call3_video_qcif_pane_ParamLimits

0x4473,	// (0x00011542) call3_video_qcif_pane

0x4486,	// (0x00011555) call3_video_qcif_uncrop_pane_ParamLimits

0x4486,	// (0x00011555) call3_video_qcif_uncrop_pane

0x4496,	// (0x00011565) call3_video_subqcif_pane_ParamLimits

0x4496,	// (0x00011565) call3_video_subqcif_pane

0x44ac,	// (0x0001157b) call3_video_subqcif_uncrop_pane_ParamLimits

0x44ac,	// (0x0001157b) call3_video_subqcif_uncrop_pane

0x451f,	// (0x000115ee) popup_call3_audio_in_window_g4_ParamLimits

0x451f,	// (0x000115ee) popup_call3_audio_in_window_g4

0x4432,	// (0x00011501) mup_spec_half_pane

0x443b,	// (0x0001150a) mup_spec_half_pane_cp

0xbfd9,	// (0x000190a8) mup_osc_middle_pane

0xbfe2,	// (0x000190b1) mup_visualizer_osc_pane_g1

0x4412,	// (0x000114e1) mup_spec_bar_pane_ParamLimits

0x4412,	// (0x000114e1) mup_spec_bar_pane

0xbfc6,	// (0x00019095) mup_spec_bar_pane_g1

0xbfd0,	// (0x0001909f) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0001c73c) mup_spec_bar_pane_g

0x1828,	// (0x0000e8f7) aid_cale_week_size_cell_pane_ParamLimits

0x183b,	// (0x0000e90a) bg_cale_heading_pane_ParamLimits

0x9f1b,	// (0x00016fea) bg_cale_pane_cp01_ParamLimits

0x1857,	// (0x0000e926) cale_week_corner_pane_ParamLimits

0x186d,	// (0x0000e93c) cale_week_day_heading_pane_ParamLimits

0x1889,	// (0x0000e958) cale_week_scroll_pane_g1_ParamLimits

0x18a2,	// (0x0000e971) cale_week_scroll_pane_g2_ParamLimits

0x18b3,	// (0x0000e982) cale_week_scroll_pane_g3_ParamLimits

0x18c4,	// (0x0000e993) cale_week_scroll_pane_g4_ParamLimits

0x18d5,	// (0x0000e9a4) cale_week_scroll_pane_g5_ParamLimits

0x18e6,	// (0x0000e9b5) cale_week_scroll_pane_g6_ParamLimits

0x18f7,	// (0x0000e9c6) cale_week_scroll_pane_g7_ParamLimits

0x1908,	// (0x0000e9d7) cale_week_scroll_pane_g8_ParamLimits

0x1919,	// (0x0000e9e8) cale_week_scroll_pane_g9_ParamLimits

0x192a,	// (0x0000e9f9) cale_week_scroll_pane_g10_ParamLimits

0x193b,	// (0x0000ea0a) cale_week_scroll_pane_g11_ParamLimits

0x194c,	// (0x0000ea1b) cale_week_scroll_pane_g12_ParamLimits

0x195d,	// (0x0000ea2c) cale_week_scroll_pane_g13_ParamLimits

0x1976,	// (0x0000ea45) cale_week_scroll_pane_g14_ParamLimits

0x198f,	// (0x0000ea5e) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0001c2e4) cale_week_scroll_pane_g_ParamLimits

0x19a8,	// (0x0000ea77) cale_week_time_pane_ParamLimits

0x19b9,	// (0x0000ea88) grid_cale_week_pane_ParamLimits

0x9f34,	// (0x00017003) listscroll_cale_week_pane_t1

0x19d4,	// (0x0000eaa3) scroll_pane_cp08_ParamLimits

0x2426,	// (0x0000f4f5) cale_month_corner_pane_ParamLimits

0xa3fd,	// (0x000174cc) cale_month_pane_t1

0x270a,	// (0x0000f7d9) cale_month_week_pane_ParamLimits

0x2d82,	// (0x0000fe51) popup_call_status_window_g1_ParamLimits

0x2d96,	// (0x0000fe65) popup_call_status_window_g2_ParamLimits

0x2daa,	// (0x0000fe79) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0001c48c) popup_call_status_window_g_ParamLimits

0xa7db,	// (0x000178aa) aid_call2_pane

0x366f,	// (0x0001073e) msg_header_pane_g1

0x3845,	// (0x00010914) postcard_address2_pane_ParamLimits

0x3845,	// (0x00010914) postcard_address2_pane

0x385b,	// (0x0001092a) postcard_message2_pane_ParamLimits

0x385b,	// (0x0001092a) postcard_message2_pane

0x43cf,	// (0x0001149e) message2_row_pane_ParamLimits

0x43cf,	// (0x0001149e) message2_row_pane

0xbf81,	// (0x00019050) address2_row_pane_ParamLimits

0xbf81,	// (0x00019050) address2_row_pane

0xbf94,	// (0x00019063) postcard_message2_row_pane_g1

0xbf9c,	// (0x0001906b) postcard_message2_row_pane_t1

0xbf94,	// (0x00019063) address2_row_pane_g1

0xbf9c,	// (0x0001906b) address2_row_pane_t1

0x1be2,	// (0x0000ecb1) aid_size_cell_vorec

0x9a28,	// (0x00016af7) main_rss_pane

0x43f2,	// (0x000114c1) rss_list_single_pane_ParamLimits

0x43f2,	// (0x000114c1) rss_list_single_pane

0xbfaa,	// (0x00019079) rss_list_single_pane_t1

0xbfb8,	// (0x00019087) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0001c737) rss_list_single_pane_t

0x9a28,	// (0x00016af7) main_camera2_pane

0x9a28,	// (0x00016af7) main_video2_pane

0x4641,	// (0x00011710) cams_zoom_pane_cp2_ParamLimits

0x4641,	// (0x00011710) cams_zoom_pane_cp2

0x4658,	// (0x00011727) image2_vga_pane_ParamLimits

0x4658,	// (0x00011727) image2_vga_pane

0x46a0,	// (0x0001176f) main_camera2_pane_g1_ParamLimits

0x46a0,	// (0x0001176f) main_camera2_pane_g1

0x46c0,	// (0x0001178f) main_camera2_pane_g2_ParamLimits

0x46c0,	// (0x0001178f) main_camera2_pane_g2

0x46d7,	// (0x000117a6) main_camera2_pane_g3_ParamLimits

0x46d7,	// (0x000117a6) main_camera2_pane_g3

0x46ee,	// (0x000117bd) main_camera2_pane_g4_ParamLimits

0x46ee,	// (0x000117bd) main_camera2_pane_g4

0x4705,	// (0x000117d4) main_camera2_pane_g5_ParamLimits

0x4705,	// (0x000117d4) main_camera2_pane_g5

0x471c,	// (0x000117eb) main_camera2_pane_g6_ParamLimits

0x471c,	// (0x000117eb) main_camera2_pane_g6

0x4733,	// (0x00011802) main_camera2_pane_g7_ParamLimits

0x4733,	// (0x00011802) main_camera2_pane_g7

0x474a,	// (0x00011819) main_camera2_pane_g8_ParamLimits

0x474a,	// (0x00011819) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0001c758) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0001c758) main_camera2_pane_g

0x4778,	// (0x00011847) main_camera2_pane_t1_ParamLimits

0x4778,	// (0x00011847) main_camera2_pane_t1

0x47ad,	// (0x0001187c) main_camera2_pane_t2_ParamLimits

0x47ad,	// (0x0001187c) main_camera2_pane_t2

0x47ca,	// (0x00011899) main_camera2_pane_t3_ParamLimits

0x47ca,	// (0x00011899) main_camera2_pane_t3

0x4828,	// (0x000118f7) main_camera2_pane_t4_ParamLimits

0x4828,	// (0x000118f7) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0001c76b) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0001c76b) main_camera2_pane_t

0x48b1,	// (0x00011980) cams_zoom_pane_cp4_ParamLimits

0x48b1,	// (0x00011980) cams_zoom_pane_cp4

0x48c7,	// (0x00011996) image2_cif_pane_ParamLimits

0x48c7,	// (0x00011996) image2_cif_pane

0x48f2,	// (0x000119c1) image2_subqcif_pane_ParamLimits

0x48f2,	// (0x000119c1) image2_subqcif_pane

0x490d,	// (0x000119dc) main_video2_pane_g1_ParamLimits

0x490d,	// (0x000119dc) main_video2_pane_g1

0x4927,	// (0x000119f6) main_video2_pane_g2_ParamLimits

0x4927,	// (0x000119f6) main_video2_pane_g2

0x493d,	// (0x00011a0c) main_video2_pane_g3_ParamLimits

0x493d,	// (0x00011a0c) main_video2_pane_g3

0x4953,	// (0x00011a22) main_video2_pane_g4_ParamLimits

0x4953,	// (0x00011a22) main_video2_pane_g4

0x4969,	// (0x00011a38) main_video2_pane_g5_ParamLimits

0x4969,	// (0x00011a38) main_video2_pane_g5

0x497f,	// (0x00011a4e) main_video2_pane_g6_ParamLimits

0x497f,	// (0x00011a4e) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0001c77a) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0001c77a) main_video2_pane_g

0x4999,	// (0x00011a68) main_video2_pane_t1_ParamLimits

0x4999,	// (0x00011a68) main_video2_pane_t1

0x49bd,	// (0x00011a8c) main_video2_pane_t2_ParamLimits

0x49bd,	// (0x00011a8c) main_video2_pane_t2

0x4a0d,	// (0x00011adc) main_video2_pane_t3_ParamLimits

0x4a0d,	// (0x00011adc) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0001c787) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0001c787) main_video2_pane_t

0x3ec1,	// (0x00010f90) call_muted_g2

0x0001,

0xf65a,	// (0x0001c729) call_muted_g

0x9a28,	// (0x00016af7) main_mup2_pane

0x4a55,	// (0x00011b24) main_mup2_pane_g1_ParamLimits

0x4a55,	// (0x00011b24) main_mup2_pane_g1

0x4a61,	// (0x00011b30) main_mup2_pane_g2_ParamLimits

0x4a61,	// (0x00011b30) main_mup2_pane_g2

0xc15c,	// (0x0001922b) main_mup_pane_g13_cp1

0xc164,	// (0x00019233) mup_volume_pane_cp1

0x4a7f,	// (0x00011b4e) main_mup2_pane_g4_ParamLimits

0x4a7f,	// (0x00011b4e) main_mup2_pane_g4

0x4a91,	// (0x00011b60) main_mup2_pane_g5_ParamLimits

0x4a91,	// (0x00011b60) main_mup2_pane_g5

0x4aa3,	// (0x00011b72) main_mup2_pane_g6_ParamLimits

0x4aa3,	// (0x00011b72) main_mup2_pane_g6

0x4ab5,	// (0x00011b84) main_mup2_pane_g7_ParamLimits

0x4ab5,	// (0x00011b84) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0001c78e) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0001c78e) main_mup2_pane_g

0x4acd,	// (0x00011b9c) main_mup2_pane_t1_ParamLimits

0x4acd,	// (0x00011b9c) main_mup2_pane_t1

0x4ae3,	// (0x00011bb2) main_mup2_pane_t2_ParamLimits

0x4ae3,	// (0x00011bb2) main_mup2_pane_t2

0x4af9,	// (0x00011bc8) main_mup2_pane_t3_ParamLimits

0x4af9,	// (0x00011bc8) main_mup2_pane_t3

0x4b0f,	// (0x00011bde) main_mup2_pane_t4_ParamLimits

0x4b0f,	// (0x00011bde) main_mup2_pane_t4

0x4b27,	// (0x00011bf6) main_mup2_pane_t5_ParamLimits

0x4b27,	// (0x00011bf6) main_mup2_pane_t5

0x4b3f,	// (0x00011c0e) main_mup2_pane_t6_ParamLimits

0x4b3f,	// (0x00011c0e) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0001c79d) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0001c79d) main_mup2_pane_t

0x4b6f,	// (0x00011c3e) mup2_visualizer_pane_ParamLimits

0x4b6f,	// (0x00011c3e) mup2_visualizer_pane

0x4b9d,	// (0x00011c6c) mup_progress_pane_cp_ParamLimits

0x4b9d,	// (0x00011c6c) mup_progress_pane_cp

0xc13e,	// (0x0001920d) mup_volume_pane_cp_ParamLimits

0xc13e,	// (0x0001920d) mup_volume_pane_cp

0x4bb3,	// (0x00011c82) mup2_visualizer_pane_g1_ParamLimits

0x4bb3,	// (0x00011c82) mup2_visualizer_pane_g1

0xc07d,	// (0x0001914c) mup2_visualizer_pane_g2_ParamLimits

0xc07d,	// (0x0001914c) mup2_visualizer_pane_g2

0x4bc8,	// (0x00011c97) mup2_visualizer_pane_g3_ParamLimits

0x4bc8,	// (0x00011c97) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0001c7aa) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0001c7aa) mup2_visualizer_pane_g

0xadf2,	// (0x00017ec1) aid_size_cell_fmradio

0x4071,	// (0x00011140) aid_height_parent_landcape

0xa265,	// (0x00017334) wml_content_pane_cp

0xa26d,	// (0x0001733c) wml_tabs_pane

0xa276,	// (0x00017345) popup_wml_miniature_window

0xa27e,	// (0x0001734d) scroll_pane_cp021

0xa292,	// (0x00017361) wml_content_pane_comp8

0x9a28,	// (0x00016af7) bg_popup_sub_pane_cp05

0xc09b,	// (0x0001916a) popup_wml_miniature_window_g1

0xc0a3,	// (0x00019172) wml_miniature_view_pane

0x4bd4,	// (0x00011ca3) aid_size_wml_view

0x4bdc,	// (0x00011cab) wml_miniature_view_pane_g1

0x4be5,	// (0x00011cb4) wml_miniature_view_pane_g2

0x4bee,	// (0x00011cbd) wml_miniature_view_pane_g3

0x4bf6,	// (0x00011cc5) wml_miniature_view_pane_g4

0x4bfe,	// (0x00011ccd) wml_miniature_view_pane_g5

0x4c06,	// (0x00011cd5) wml_miniature_view_pane_g6

0x4c0e,	// (0x00011cdd) wml_miniature_view_pane_g7

0x4c16,	// (0x00011ce5) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0001c7b1) wml_miniature_view_pane_g

0xc0ab,	// (0x0001917a) background_graphic_ParamLimits

0xc0ab,	// (0x0001917a) background_graphic

0xc0b7,	// (0x00019186) wml_tabs_2_pane

0xc0c0,	// (0x0001918f) wml_tabs_3_pane_ParamLimits

0xc0c0,	// (0x0001918f) wml_tabs_3_pane

0xc0d2,	// (0x000191a1) wml_tabs_4_pane_ParamLimits

0xc0d2,	// (0x000191a1) wml_tabs_4_pane

0xc0e8,	// (0x000191b7) wml_tabs_5_pane_ParamLimits

0xc0e8,	// (0x000191b7) wml_tabs_5_pane

0xc102,	// (0x000191d1) wml_tabs_pane_g2_ParamLimits

0xc102,	// (0x000191d1) wml_tabs_pane_g2

0xc116,	// (0x000191e5) wml_tabs_pane_g3_ParamLimits

0xc116,	// (0x000191e5) wml_tabs_pane_g3

0x4c1e,	// (0x00011ced) wml_tabs_2_active_pane_ParamLimits

0x4c1e,	// (0x00011ced) wml_tabs_2_active_pane

0x4c32,	// (0x00011d01) wml_tabs_2_passive_pane_ParamLimits

0x4c32,	// (0x00011d01) wml_tabs_2_passive_pane

0x4c46,	// (0x00011d15) wml_tabs_3_active_pane_cp_ParamLimits

0x4c46,	// (0x00011d15) wml_tabs_3_active_pane_cp

0x4c5b,	// (0x00011d2a) wml_tabs_3_passive_pane_ParamLimits

0x4c5b,	// (0x00011d2a) wml_tabs_3_passive_pane

0x4c6e,	// (0x00011d3d) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c6e,	// (0x00011d3d) wml_tabs_3_passive_pane_cp

0x4c85,	// (0x00011d54) tabs_4_active_pane

0x4c8d,	// (0x00011d5c) tabs_4_passive_pane

0x4c97,	// (0x00011d66) tabs_4_passive_pane_cp

0x4c9f,	// (0x00011d6e) tabs_4_passive_pane_cp2

0x3d85,	// (0x00010e54) aid_height_text

0x3379,	// (0x00010448) mup_volume_cont_pane_ParamLimits

0x3379,	// (0x00010448) mup_volume_cont_pane

0x142c,	// (0x0000e4fb) aid_size_cell_pinb

0x1436,	// (0x0000e505) aid_size_list_pinb

0x4b89,	// (0x00011c58) mup2_volume_cont_pane_ParamLimits

0x4b89,	// (0x00011c58) mup2_volume_cont_pane

0xc12a,	// (0x000191f9) mup2_volume_cont_pane_g1_ParamLimits

0xc12a,	// (0x000191f9) mup2_volume_cont_pane_g1

0x110c,	// (0x0000e1db) aid_size_cell_touch_ParamLimits

0x110c,	// (0x0000e1db) aid_size_cell_touch

0x131b,	// (0x0000e3ea) touch_pane_ParamLimits

0x131b,	// (0x0000e3ea) touch_pane

0x9596,	// (0x00016665) main_rss2_pane

0xc16c,	// (0x0001923b) listscroll_rss2_pane

0xc175,	// (0x00019244) rss2_navigation_pane

0xc17d,	// (0x0001924c) list_rss2_pane

0xa96e,	// (0x00017a3d) scroll_pane_cp22

0xc185,	// (0x00019254) rss2_navigation_pane_g1

0xc18e,	// (0x0001925d) rss2_navigation_pane_g2

0xc196,	// (0x00019265) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0001c7c2) rss2_navigation_pane_g

0xc19e,	// (0x0001926d) rss2_navigation_pane_t1

0x4ca9,	// (0x00011d78) rss2_list_single_pane_ParamLimits

0x4ca9,	// (0x00011d78) rss2_list_single_pane

0xc1ac,	// (0x0001927b) rss2_list_single_pane_t2

0xc1ba,	// (0x00019289) rss2_list_single_pane_t3_ParamLimits

0xc1ba,	// (0x00019289) rss2_list_single_pane_t3

0xc1d7,	// (0x000192a6) rss2_list_single_pane_t4

0x2b6c,	// (0x0000fc3b) smil_status_pane_g1

0x9607,	// (0x000166d6) main_image2_pane_ParamLimits

0x9607,	// (0x000166d6) main_image2_pane

0x4761,	// (0x00011830) main_camera2_pane_g9_ParamLimits

0x4761,	// (0x00011830) main_camera2_pane_g9

0x487d,	// (0x0001194c) main_camera2_pane_t5_ParamLimits

0x487d,	// (0x0001194c) main_camera2_pane_t5

0xc052,	// (0x00019121) main_camera2_pane_t6_ParamLimits

0xc052,	// (0x00019121) main_camera2_pane_t6

0x4cc3,	// (0x00011d92) main_image2_pane_g1_ParamLimits

0x4cc3,	// (0x00011d92) main_image2_pane_g1

0x3a9c,	// (0x00010b6b) smil2_video_pane_ParamLimits

0x3a9c,	// (0x00010b6b) smil2_video_pane

0x95b4,	// (0x00016683) aid_zoom_text_primary_cp

0x95fd,	// (0x000166cc) popup_preview_fixed_window

0xa1ce,	// (0x0001729d) im_reading_pane_g1

0x4633,	// (0x00011702) cams2_bc_adjust_pane_cp_ParamLimits

0x4633,	// (0x00011702) cams2_bc_adjust_pane_cp

0x48a3,	// (0x00011972) cams2_bc_adjust_pane_ParamLimits

0x48a3,	// (0x00011972) cams2_bc_adjust_pane

0xc1e5,	// (0x000192b4) cams2_bc_adjust_pane_g1

0xc1ed,	// (0x000192bc) cams2_slider_pane

0xc1f6,	// (0x000192c5) cams2_slider_pane_g1

0xc1ff,	// (0x000192ce) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0001c7c9) cams2_slider_pane_g

0x1526,	// (0x0000e5f5) calc_display_pane_ParamLimits

0x154c,	// (0x0000e61b) calc_paper_pane_ParamLimits

0x156f,	// (0x0000e63e) grid_calc_pane_ParamLimits

0xa83d,	// (0x0001790c) popup_clock_digital_window_t1_ParamLimits

0xad8f,	// (0x00017e5e) main_image_pane_t1

0x1508,	// (0x0000e5d7) aid_size_cell_calc_ParamLimits

0x1508,	// (0x0000e5d7) aid_size_cell_calc

0x40b7,	// (0x00011186) popup_blid_sat_info2_window_ParamLimits

0x40b7,	// (0x00011186) popup_blid_sat_info2_window

0xc221,	// (0x000192f0) aid_size_cell_blid

0xc229,	// (0x000192f8) bg_popup_window_pane_cp07

0xc24c,	// (0x0001931b) grid_popup_blid_pane

0xc256,	// (0x00019325) heading_pane_cp05_ParamLimits

0xc256,	// (0x00019325) heading_pane_cp05

0xc320,	// (0x000193ef) cell_popup_blid_pane_ParamLimits

0xc320,	// (0x000193ef) cell_popup_blid_pane

0xc34a,	// (0x00019419) cell_popup_blid_pane_g1

0xc352,	// (0x00019421) cell_popup_blid_pane_t1

0x4b59,	// (0x00011c28) mup2_indicator_pane_ParamLimits

0x4b59,	// (0x00011c28) mup2_indicator_pane

0xaaa8,	// (0x00017b77) mup2_visualizer_osc_pane

0xc089,	// (0x00019158) mup2_visualizer_spec_pane_ParamLimits

0xc089,	// (0x00019158) mup2_visualizer_spec_pane

0x4cd9,	// (0x00011da8) mup2_spec_half_pane

0x4ce2,	// (0x00011db1) mup2_spec_half_pane_cp

0x4cea,	// (0x00011db9) mup2_spec_bar_pane_ParamLimits

0x4cea,	// (0x00011db9) mup2_spec_bar_pane

0xbfc6,	// (0x00019095) mup2_spec_bar_pane_g1

0xbfd0,	// (0x0001909f) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0001c73c) mup2_spec_bar_pane_g

0x4d0a,	// (0x00011dd9) mup2_osc_middle_pane

0xbfe2,	// (0x000190b1) mup2_visualizer_osc_pane_g1

0x9635,	// (0x00016704) popup_number_entry_window_t1_ParamLimits

0x9648,	// (0x00016717) popup_number_entry_window_t2_ParamLimits

0x965a,	// (0x00016729) popup_number_entry_window_t3_ParamLimits

0x136d,	// (0x0000e43c) popup_number_entry_window_t5_ParamLimits

0x136d,	// (0x0000e43c) popup_number_entry_window_t5

0xf12f,	// (0x0001c1fe) popup_number_entry_window_t_ParamLimits

0x966c,	// (0x0001673b) text_title_cp2_ParamLimits

0xac69,	// (0x00017d38) aid_hotspot_pointer_text2_pane

0xac8f,	// (0x00017d5e) main_viewer_pane_g9_ParamLimits

0xac8f,	// (0x00017d5e) main_viewer_pane_g9

0xa3fd,	// (0x000174cc) cale_month_pane_t1_ParamLimits

0xa492,	// (0x00017561) bg_cale_pane_ParamLimits

0xa4aa,	// (0x00017579) list_cale_pane_ParamLimits

0x9f34,	// (0x00017003) listscroll_cale_day_pane_t1

0xa4bb,	// (0x0001758a) scroll_pane_cp09_ParamLimits

0x33af,	// (0x0001047e) main_mup_eq_pane_t1_ParamLimits

0x33af,	// (0x0001047e) main_mup_eq_pane_t1

0x33cb,	// (0x0001049a) main_mup_eq_pane_t2_ParamLimits

0x33cb,	// (0x0001049a) main_mup_eq_pane_t2

0x33e7,	// (0x000104b6) main_mup_eq_pane_t3_ParamLimits

0x33e7,	// (0x000104b6) main_mup_eq_pane_t3

0x3405,	// (0x000104d4) main_mup_eq_pane_t4_ParamLimits

0x3405,	// (0x000104d4) main_mup_eq_pane_t4

0x3423,	// (0x000104f2) main_mup_eq_pane_t5_ParamLimits

0x3423,	// (0x000104f2) main_mup_eq_pane_t5

0x3441,	// (0x00010510) main_mup_eq_pane_t6_ParamLimits

0x3441,	// (0x00010510) main_mup_eq_pane_t6

0x3457,	// (0x00010526) main_mup_eq_pane_t7_ParamLimits

0x3457,	// (0x00010526) main_mup_eq_pane_t7

0x346d,	// (0x0001053c) main_mup_eq_pane_t8_ParamLimits

0x346d,	// (0x0001053c) main_mup_eq_pane_t8

0x3483,	// (0x00010552) main_mup_eq_pane_t9_ParamLimits

0x3483,	// (0x00010552) main_mup_eq_pane_t9

0x349f,	// (0x0001056e) main_mup_eq_pane_t10_ParamLimits

0x349f,	// (0x0001056e) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0001c58b) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0001c58b) main_mup_eq_pane_t

0x3574,	// (0x00010643) mup_equalizer_pane_cp5_ParamLimits

0x358c,	// (0x0001065b) mup_equalizer_pane_cp6_ParamLimits

0x35a4,	// (0x00010673) mup_equalizer_pane_cp7_ParamLimits

0x9596,	// (0x00016665) main_gallery_pane

0xbfeb,	// (0x000190ba) smil2_volume_pane

0xbff3,	// (0x000190c2) smil_status_volume_pane_g1_ParamLimits

0xc006,	// (0x000190d5) smil_status_volume_pane_g2_ParamLimits

0xc019,	// (0x000190e8) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0001c741) smil_status_volume_pane_g_ParamLimits

0xc229,	// (0x000192f8) bg_popup_window_pane_cp07_ParamLimits

0xc237,	// (0x00019306) blid_firmament_pane

0x4d13,	// (0x00011de2) aid_size_cell_gallery_ParamLimits

0x4d13,	// (0x00011de2) aid_size_cell_gallery

0x4d29,	// (0x00011df8) grid_gallery_pane_ParamLimits

0x4d29,	// (0x00011df8) grid_gallery_pane

0x4d44,	// (0x00011e13) cell_gallery_pane_ParamLimits

0x4d44,	// (0x00011e13) cell_gallery_pane

0xc360,	// (0x0001942f) bg_cell_gallery_focus_pane_ParamLimits

0xc360,	// (0x0001942f) bg_cell_gallery_focus_pane

0xc372,	// (0x00019441) cell_gallery_pane_g1_ParamLimits

0xc372,	// (0x00019441) cell_gallery_pane_g1

0x4d95,	// (0x00011e64) cell_gallery_pane_g2_ParamLimits

0x4d95,	// (0x00011e64) cell_gallery_pane_g2

0x4da2,	// (0x00011e71) cell_gallery_pane_g3_ParamLimits

0x4da2,	// (0x00011e71) cell_gallery_pane_g3

0xc37e,	// (0x0001944d) cell_gallery_pane_g4_ParamLimits

0xc37e,	// (0x0001944d) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0001c7ef) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0001c7ef) cell_gallery_pane_g

0xc38a,	// (0x00019459) bg_cell_gallery_focus_pane_g1

0xc392,	// (0x00019461) bg_cell_gallery_focus_pane_g2

0xc39a,	// (0x00019469) bg_cell_gallery_focus_pane_g3

0xc3a2,	// (0x00019471) bg_cell_gallery_focus_pane_g4

0xc3aa,	// (0x00019479) bg_cell_gallery_focus_pane_g5

0xc3b2,	// (0x00019481) bg_cell_gallery_focus_pane_g6

0xc3ba,	// (0x00019489) bg_cell_gallery_focus_pane_g7

0xc3c2,	// (0x00019491) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0001c7f8) bg_cell_gallery_focus_pane_g

0xc3ca,	// (0x00019499) aid_firma_cardinal

0xc3de,	// (0x000194ad) blid_firmament_pane_t1

0xc3f5,	// (0x000194c4) blid_firmament_pane_t2

0xc40c,	// (0x000194db) blid_firmament_pane_t3

0xc423,	// (0x000194f2) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0001c809) blid_firmament_pane_t

0xc43a,	// (0x00019509) blid_sat_info_pane

0xc44a,	// (0x00019519) blid_sat_info_pane_g1

0xc44a,	// (0x00019519) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0001c812) blid_sat_info_pane_g

0xc454,	// (0x00019523) blid_sat_info_pane_t1

0xc462,	// (0x00019531) smil2_volume_content_pane

0xc46b,	// (0x0001953a) smil2_volume_pane_g1

0xc473,	// (0x00019542) smil2_volume_content_pane_g1

0xc47c,	// (0x0001954b) smil2_volume_content_pane_g2

0xc485,	// (0x00019554) smil2_volume_content_pane_g3

0xc48e,	// (0x0001955d) smil2_volume_content_pane_g4

0xc497,	// (0x00019566) smil2_volume_content_pane_g5

0xc4a0,	// (0x0001956f) smil2_volume_content_pane_g6

0xc4a9,	// (0x00019578) smil2_volume_content_pane_g7

0xc4b2,	// (0x00019581) smil2_volume_content_pane_g8

0xc4bb,	// (0x0001958a) smil2_volume_content_pane_g9

0xc4c4,	// (0x00019593) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0001c817) smil2_volume_content_pane_g

0x1a34,	// (0x0000eb03) cale_week_day_heading_pane_t1_ParamLimits

0x1a48,	// (0x0000eb17) cale_week_day_heading_pane_t2_ParamLimits

0x1a5c,	// (0x0000eb2b) cale_week_day_heading_pane_t3_ParamLimits

0x1a70,	// (0x0000eb3f) cale_week_day_heading_pane_t4_ParamLimits

0x1a84,	// (0x0000eb53) cale_week_day_heading_pane_t5_ParamLimits

0x1a98,	// (0x0000eb67) cale_week_day_heading_pane_t6_ParamLimits

0x1aac,	// (0x0000eb7b) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0001c303) cale_week_day_heading_pane_t_ParamLimits

0x9f46,	// (0x00017015) bg_cale_side_pane_ParamLimits

0x1ac0,	// (0x0000eb8f) cale_week_time_pane_t1_ParamLimits

0x1ad8,	// (0x0000eba7) cale_week_time_pane_t2_ParamLimits

0x1af0,	// (0x0000ebbf) cale_week_time_pane_t3_ParamLimits

0x1b08,	// (0x0000ebd7) cale_week_time_pane_t4_ParamLimits

0x1b20,	// (0x0000ebef) cale_week_time_pane_t5_ParamLimits

0x1b38,	// (0x0000ec07) cale_week_time_pane_t6_ParamLimits

0x1b50,	// (0x0000ec1f) cale_week_time_pane_t7_ParamLimits

0x1b6c,	// (0x0000ec3b) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0001c312) cale_week_time_pane_t_ParamLimits

0x1b8c,	// (0x0000ec5b) cell_cale_week_pane_g2_ParamLimits

0x9f46,	// (0x00017015) bg_cale_side_pane_cp01_ParamLimits

0x2a05,	// (0x0000fad4) cale_month_week_pane_t1_ParamLimits

0x2a1c,	// (0x0000faeb) cale_month_week_pane_t2_ParamLimits

0x2a33,	// (0x0000fb02) cale_month_week_pane_t3_ParamLimits

0x2a4a,	// (0x0000fb19) cale_month_week_pane_t4_ParamLimits

0x2a61,	// (0x0000fb30) cale_month_week_pane_t5_ParamLimits

0x2a78,	// (0x0000fb47) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0001c3eb) cale_month_week_pane_t_ParamLimits

0xa439,	// (0x00017508) cell_cale_month_pane_g1_ParamLimits

0x9596,	// (0x00016665) main_cale_event_viewer_pane

0x9596,	// (0x00016665) listscroll_cale_event_viewer_pane

0xc4cd,	// (0x0001959c) list_cale_ev_pane

0xc4d5,	// (0x000195a4) scroll_pane_cp023

0x4daf,	// (0x00011e7e) field_cale_ev_pane_ParamLimits

0x4daf,	// (0x00011e7e) field_cale_ev_pane

0xc4e1,	// (0x000195b0) field_cale_ev_content_pane_ParamLimits

0xc4e1,	// (0x000195b0) field_cale_ev_content_pane

0xc4ed,	// (0x000195bc) field_cale_ev_pane_g1_ParamLimits

0xc4ed,	// (0x000195bc) field_cale_ev_pane_g1

0xc4f9,	// (0x000195c8) field_cale_ev_pane_g2_ParamLimits

0xc4f9,	// (0x000195c8) field_cale_ev_pane_g2

0xc511,	// (0x000195e0) field_cale_ev_pane_g3_ParamLimits

0xc511,	// (0x000195e0) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0001c82c) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0001c82c) field_cale_ev_pane_g

0xc529,	// (0x000195f8) field_cale_ev_pane_t1_ParamLimits

0xc529,	// (0x000195f8) field_cale_ev_pane_t1

0x4dd3,	// (0x00011ea2) field_cale_ev_content_pane_t1_ParamLimits

0x4dd3,	// (0x00011ea2) field_cale_ev_content_pane_t1

0xac33,	// (0x00017d02) bg_button_pane_cp01

0x9d70,	// (0x00016e3f) listscroll_cale_week_pane_ParamLimits

0x181e,	// (0x0000e8ed) popup_toolbar_window_cp01

0x9f34,	// (0x00017003) listscroll_cale_week_pane_t1_ParamLimits

0x9d70,	// (0x00016e3f) listscroll_cale_day_pane_ParamLimits

0x2bcc,	// (0x0000fc9b) popup_toolbar_window_cp02

0x9f34,	// (0x00017003) listscroll_cale_day_pane_t1_ParamLimits

0x9d70,	// (0x00016e3f) main_cale_month_pane_ParamLimits

0x4337,	// (0x00011406) popup_toolbar_window_cp03_ParamLimits

0x4337,	// (0x00011406) popup_toolbar_window_cp03

0x395a,	// (0x00010a29) main_image_pane_g2_ParamLimits

0x395a,	// (0x00010a29) main_image_pane_g2

0x396b,	// (0x00010a3a) main_image_pane_g3_ParamLimits

0x396b,	// (0x00010a3a) main_image_pane_g3

0x0002,

0xf54e,	// (0x0001c61d) main_image_pane_g_ParamLimits

0xf54e,	// (0x0001c61d) main_image_pane_g

0xad8f,	// (0x00017e5e) main_image_pane_t1_ParamLimits

0x397c,	// (0x00010a4b) main_image_pane_t2_ParamLimits

0x397c,	// (0x00010a4b) main_image_pane_t2

0x398e,	// (0x00010a5d) main_image_pane_t3_ParamLimits

0x398e,	// (0x00010a5d) main_image_pane_t3

0x39b6,	// (0x00010a85) main_image_pane_t4_ParamLimits

0x39b6,	// (0x00010a85) main_image_pane_t4

0x0003,

0xf555,	// (0x0001c624) main_image_pane_t_ParamLimits

0xf555,	// (0x0001c624) main_image_pane_t

0x39d6,	// (0x00010aa5) popup_image_details_window_cp01

0x39e0,	// (0x00010aaf) popup_toobar_trans_pane_cp01_ParamLimits

0x39e0,	// (0x00010aaf) popup_toobar_trans_pane_cp01

0x41aa,	// (0x00011279) popup_image_details_window_ParamLimits

0x41aa,	// (0x00011279) popup_image_details_window

0xbf37,	// (0x00019006) popup_image_focus_window

0x45ed,	// (0x000116bc) camera2_autofocus_pane_ParamLimits

0x45ed,	// (0x000116bc) camera2_autofocus_pane

0x9596,	// (0x00016665) bg_popup_sub_pane_cp06

0xc540,	// (0x0001960f) popup_image_focus_window_g1

0xc548,	// (0x00019617) popup_image_focus_window_g2

0xc550,	// (0x0001961f) popup_image_focus_window_g3

0xc558,	// (0x00019627) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0001c833) popup_image_focus_window_g

0xc560,	// (0x0001962f) popup_image_focus_window_t1

0xc56e,	// (0x0001963d) popup_image_focus_window_t2

0xc57e,	// (0x0001964d) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0001c83c) popup_image_focus_window_t

0xc58c,	// (0x0001965b) camera2_autofocus_pane_g1

0x9607,	// (0x000166d6) bg_tb_trans_pane_cp01

0xc59a,	// (0x00019669) popup_image_details_window_g1

0xc5ad,	// (0x0001967c) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0001c84e) popup_image_details_window_g

0xc5d6,	// (0x000196a5) popup_image_details_window_t1

0xc5e8,	// (0x000196b7) popup_image_details_window_t2

0xc601,	// (0x000196d0) popup_image_details_window_t3

0xc615,	// (0x000196e4) popup_image_details_window_t4

0xc630,	// (0x000196ff) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0001c855) popup_image_details_window_t

0x9d42,	// (0x00016e11) bg_calc_paper_pane_ParamLimits

0x9596,	// (0x00016665) grid_highlight_pane_cp013

0x9d56,	// (0x00016e25) list_calc_pane_ParamLimits

0x9d68,	// (0x00016e37) scroll_pane_cp024

0x9d70,	// (0x00016e3f) bg_calc_display_pane_ParamLimits

0x1666,	// (0x0000e735) calc_display_pane_t1_ParamLimits

0x1678,	// (0x0000e747) calc_display_pane_t2_ParamLimits

0x9d7c,	// (0x00016e4b) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0001c285) calc_display_pane_t_ParamLimits

0x173b,	// (0x0000e80a) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0001c2a2) cell_calc_pane_g

0x1744,	// (0x0000e813) cell_calc_pane_t1

0x9df3,	// (0x00016ec2) grid_highlight_pane_cp02_ParamLimits

0x9e09,	// (0x00016ed8) toolbar_button_pane_cp01_ParamLimits

0x9e09,	// (0x00016ed8) toolbar_button_pane_cp01

0xadd4,	// (0x00017ea3) temp_image_control_pane_ParamLimits

0xadd4,	// (0x00017ea3) temp_image_control_pane

0x9607,	// (0x000166d6) main_mp3_pane

0xc64a,	// (0x00019719) temp_image_control_pane_g1_ParamLimits

0xc64a,	// (0x00019719) temp_image_control_pane_g1

0xc658,	// (0x00019727) temp_image_control_pane_g2_ParamLimits

0xc658,	// (0x00019727) temp_image_control_pane_g2

0xc66a,	// (0x00019739) temp_image_control_pane_g3_ParamLimits

0xc66a,	// (0x00019739) temp_image_control_pane_g3

0x4e24,	// (0x00011ef3) temp_image_control_pane_g4_ParamLimits

0x4e24,	// (0x00011ef3) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0001c860) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0001c860) temp_image_control_pane_g

0xc64a,	// (0x00019719) main_mp3_pane_g1

0x4e37,	// (0x00011f06) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0001c869) main_mp3_pane_g

0xc6ad,	// (0x0001977c) main_mp3_pane_t1

0xa015,	// (0x000170e4) main_camera_pane_g8_ParamLimits

0xa015,	// (0x000170e4) main_camera_pane_g8

0x1e5d,	// (0x0000ef2c) main_video_pane_g7_ParamLimits

0x1e5d,	// (0x0000ef2c) main_video_pane_g7

0xc06b,	// (0x0001913a) main_camera2_pane_t7_ParamLimits

0xc06b,	// (0x0001913a) main_camera2_pane_t7

0xa225,	// (0x000172f4) scroll_pane_cp025_ParamLimits

0xa225,	// (0x000172f4) scroll_pane_cp025

0xa239,	// (0x00017308) scroll_pane_cp026_ParamLimits

0xa239,	// (0x00017308) scroll_pane_cp026

0xa248,	// (0x00017317) wml_content_pane_ParamLimits

0x9596,	// (0x00016665) main_touch_calib_pane

0x4efe,	// (0x00011fcd) main_touch_calib_pane_g1

0x4f0a,	// (0x00011fd9) main_touch_calib_pane_g2

0x4f16,	// (0x00011fe5) main_touch_calib_pane_g3

0x4f22,	// (0x00011ff1) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0001c887) main_touch_calib_pane_g

0x4f2e,	// (0x00011ffd) main_touch_calib_pane_t1

0x4f48,	// (0x00012017) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0001c890) main_touch_calib_pane_t

0xa9e9,	// (0x00017ab8) mup_progress_pane_cp02

0xaa08,	// (0x00017ad7) navi_pane_g1

0xaa6a,	// (0x00017b39) navi_pane_mp_t3

0x9607,	// (0x000166d6) main_mp3_pane_ParamLimits

0x4379,	// (0x00011448) navi_pane_ParamLimits

0xc64a,	// (0x00019719) main_mp3_pane_g1_ParamLimits

0x4e37,	// (0x00011f06) main_mp3_pane_g2_ParamLimits

0x4e43,	// (0x00011f12) main_mp3_pane_g3_ParamLimits

0x4e43,	// (0x00011f12) main_mp3_pane_g3

0x4e51,	// (0x00011f20) main_mp3_pane_g4_ParamLimits

0x4e51,	// (0x00011f20) main_mp3_pane_g4

0xc67a,	// (0x00019749) main_mp3_pane_g5_ParamLimits

0xc67a,	// (0x00019749) main_mp3_pane_g5

0xc688,	// (0x00019757) main_mp3_pane_g6_ParamLimits

0xc688,	// (0x00019757) main_mp3_pane_g6

0xc695,	// (0x00019764) main_mp3_pane_g7_ParamLimits

0xc695,	// (0x00019764) main_mp3_pane_g7

0xc6a1,	// (0x00019770) main_mp3_pane_g8_ParamLimits

0xc6a1,	// (0x00019770) main_mp3_pane_g8

0xf79a,	// (0x0001c869) main_mp3_pane_g_ParamLimits

0x4e5d,	// (0x00011f2c) main_mp3_pane_t2

0x4e6b,	// (0x00011f3a) main_mp3_pane_t3

0xc6bb,	// (0x0001978a) main_mp3_pane_t4

0xc6c9,	// (0x00019798) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0001c87a) main_mp3_pane_t

0xc6d7,	// (0x000197a6) mup_progress_pane_cp01

0x95b4,	// (0x00016683) aid_zoom_text_secondary2

0xc4cd,	// (0x0001959c) list_cale_ev2_pane

0xc4d5,	// (0x000195a4) scroll_pane_cp023_ParamLimits

0x4fa0,	// (0x0001206f) field_cale_ev2_pane_ParamLimits

0x4fa0,	// (0x0001206f) field_cale_ev2_pane

0xc6df,	// (0x000197ae) field_cale_ev2_pane_g1_ParamLimits

0xc6df,	// (0x000197ae) field_cale_ev2_pane_g1

0xc6eb,	// (0x000197ba) field_cale_ev2_pane_g2_ParamLimits

0xc6eb,	// (0x000197ba) field_cale_ev2_pane_g2

0xc703,	// (0x000197d2) field_cale_ev2_pane_g3_ParamLimits

0xc703,	// (0x000197d2) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0001c89b) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0001c89b) field_cale_ev2_pane_g

0xc727,	// (0x000197f6) field_cale_ev2_pane_t1_ParamLimits

0xc727,	// (0x000197f6) field_cale_ev2_pane_t1

0xc73e,	// (0x0001980d) field_cale_ev2_pane_t2_ParamLimits

0xc73e,	// (0x0001980d) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0001c8a4) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0001c8a4) field_cale_ev2_pane_t

0x37f5,	// (0x000108c4) main_postcard_pane_g5_ParamLimits

0x37f5,	// (0x000108c4) main_postcard_pane_g5

0x380b,	// (0x000108da) main_postcard_pane_g6_ParamLimits

0x380b,	// (0x000108da) main_postcard_pane_g6

0x1c09,	// (0x0000ecd8) camera2_autofocus_pane_cp_ParamLimits

0x1c09,	// (0x0000ecd8) camera2_autofocus_pane_cp

0x9607,	// (0x000166d6) main_mup3_pane

0x4fe4,	// (0x000120b3) main_mup3_pane_g1_ParamLimits

0x4fe4,	// (0x000120b3) main_mup3_pane_g1

0x5006,	// (0x000120d5) main_mup3_pane_g2_ParamLimits

0x5006,	// (0x000120d5) main_mup3_pane_g2

0x5089,	// (0x00012158) main_mup3_pane_g3_ParamLimits

0x5089,	// (0x00012158) main_mup3_pane_g3

0x50cd,	// (0x0001219c) main_mup3_pane_g4_ParamLimits

0x50cd,	// (0x0001219c) main_mup3_pane_g4

0x5111,	// (0x000121e0) main_mup3_pane_g5_ParamLimits

0x5111,	// (0x000121e0) main_mup3_pane_g5

0x5155,	// (0x00012224) main_mup3_pane_g6_ParamLimits

0x5155,	// (0x00012224) main_mup3_pane_g6

0xc753,	// (0x00019822) main_mup3_pane_g7_ParamLimits

0xc753,	// (0x00019822) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0001c8b4) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0001c8b4) main_mup3_pane_g

0x51d1,	// (0x000122a0) main_mup3_pane_t1_ParamLimits

0x51d1,	// (0x000122a0) main_mup3_pane_t1

0x524b,	// (0x0001231a) main_mup3_pane_t2_ParamLimits

0x524b,	// (0x0001231a) main_mup3_pane_t2

0x5325,	// (0x000123f4) main_mup3_pane_t4_ParamLimits

0x5325,	// (0x000123f4) main_mup3_pane_t4

0x5383,	// (0x00012452) main_mup3_pane_t5_ParamLimits

0x5383,	// (0x00012452) main_mup3_pane_t5

0x543b,	// (0x0001250a) main_mup3_pane_t6_ParamLimits

0x543b,	// (0x0001250a) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0001c8c5) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0001c8c5) main_mup3_pane_t

0x54f1,	// (0x000125c0) mup3_progress_pane_ParamLimits

0x54f1,	// (0x000125c0) mup3_progress_pane

0x5575,	// (0x00012644) popup_mup3_control_window_ParamLimits

0x5575,	// (0x00012644) popup_mup3_control_window

0xc761,	// (0x00019830) popup_mup3_text_window

0x55ab,	// (0x0001267a) mup3_progress_pane_t1

0x55c2,	// (0x00012691) mup3_progress_pane_t2

0xc769,	// (0x00019838) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0001c8d2) mup3_progress_pane_t

0xc780,	// (0x0001984f) mup_progress_pane_cp03

0x9596,	// (0x00016665) bg_tb_trans_pane_cp04

0x55d9,	// (0x000126a8) mup3_volume_pane

0x55e1,	// (0x000126b0) popup_mup3_control_window_g1

0x55ea,	// (0x000126b9) mup3_volume_pane_g1

0x55f3,	// (0x000126c2) mup3_volume_pane_g2

0x55fc,	// (0x000126cb) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0001c8d9) mup3_volume_pane_g

0x9596,	// (0x00016665) bg_tb_trans_pane_cp03

0xc790,	// (0x0001985f) popup_mup3_text_window_g1

0xc798,	// (0x00019867) popup_mup3_text_window_t1

0x9dca,	// (0x00016e99) list_calc_item_pane_g1_ParamLimits

0xc153,	// (0x00019222) mup_volume_pane_cp_g1

0x4f62,	// (0x00012031) main_touch_calib_pane_t3

0x4f76,	// (0x00012045) main_touch_calib_pane_t4

0x4f8a,	// (0x00012059) main_touch_calib_pane_t5

0x95a0,	// (0x0001666f) aid_cell_size_toolbar2

0x95a8,	// (0x00016677) aid_popup3_width_pane

0x95b4,	// (0x00016683) aid_zoom_text_msg_primary

0x9ff5,	// (0x000170c4) vorec_t7

0x9d8e,	// (0x00016e5d) bg_calc_paper_pane_g1_ParamLimits

0x9d9a,	// (0x00016e69) bg_calc_paper_pane_g2_ParamLimits

0x9da6,	// (0x00016e75) bg_calc_paper_pane_g3_ParamLimits

0x9db2,	// (0x00016e81) bg_calc_paper_pane_g4_ParamLimits

0x9dbe,	// (0x00016e8d) bg_calc_paper_pane_g5_ParamLimits

0x16c5,	// (0x0000e794) bg_calc_paper_pane_g6_ParamLimits

0x16d8,	// (0x0000e7a7) bg_calc_paper_pane_g7_ParamLimits

0x16eb,	// (0x0000e7ba) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0001c28c) bg_calc_paper_pane_g_ParamLimits

0x16fc,	// (0x0000e7cb) calc_bg_paper_pane_g9_ParamLimits

0x1d6b,	// (0x0000ee3a) image_qvga_pane_ParamLimits

0x1d6b,	// (0x0000ee3a) image_qvga_pane

0x9c83,	// (0x00016d52) bg_popup_sub_pane_cp04_ParamLimits

0xad0b,	// (0x00017dda) popup_mup_playback_window_g1_ParamLimits

0xad17,	// (0x00017de6) popup_mup_playback_window_t1_ParamLimits

0xad2c,	// (0x00017dfb) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0001c618) popup_mup_playback_window_t_ParamLimits

0x4a71,	// (0x00011b40) main_mup2_pane_g3_ParamLimits

0x4a71,	// (0x00011b40) main_mup2_pane_g3

0x2069,	// (0x0000f138) popup_toolbar_window_cp04

0xb127,	// (0x000181f6) popup_call2_audio_second_window_g3_ParamLimits

0xb127,	// (0x000181f6) popup_call2_audio_second_window_g3

0xb531,	// (0x00018600) popup_call2_audio_first_window_g4_ParamLimits

0xb531,	// (0x00018600) popup_call2_audio_first_window_g4

0xbbb0,	// (0x00018c7f) popup_call2_audio_in_window_g4_ParamLimits

0xbbb0,	// (0x00018c7f) popup_call2_audio_in_window_g4

0x393c,	// (0x00010a0b) aid_area_sk_bg_cut_ParamLimits

0x393c,	// (0x00010a0b) aid_area_sk_bg_cut

0xad41,	// (0x00017e10) aid_area_sk_bg_cut_2_ParamLimits

0xad41,	// (0x00017e10) aid_area_sk_bg_cut_2

0x4d85,	// (0x00011e54) aid_placing_details_win

0x4d8d,	// (0x00011e5c) aid_placing_details_win_2

0xc58c,	// (0x0001965b) camera2_autofocus_pane_g1_ParamLimits

0x12c6,	// (0x0000e395) popup_fixed_preview_cale_window_ParamLimits

0x12c6,	// (0x0000e395) popup_fixed_preview_cale_window

0xaac2,	// (0x00017b91) navi_slider_pane_g3

0xaacb,	// (0x00017b9a) navi_slider_pane_g4

0xaad4,	// (0x00017ba3) navi_slider_pane_g5

0xaac2,	// (0x00017b91) navi_slider_pane_g6

0xaadd,	// (0x00017bac) navi_slider_pane_g7

0xac00,	// (0x00017ccf) mup_scale_pane_g3

0xac09,	// (0x00017cd8) mup_scale_pane_g4

0xac12,	// (0x00017ce1) mup_scale_pane_g5

0x35bc,	// (0x0001068b) mup_scale_pane_g6

0x35c5,	// (0x00010694) mup_scale_pane_g7

0xaac2,	// (0x00017b91) cams2_slider_pane_g3

0xc208,	// (0x000192d7) cams2_slider_pane_g4

0xc210,	// (0x000192df) cams2_slider_pane_g5

0xaac2,	// (0x00017b91) cams2_slider_pane_g6

0xc218,	// (0x000192e7) cams2_slider_pane_g7

0xc44a,	// (0x00019519) camera2_autofocus_pane_cp_g1

0xc7a6,	// (0x00019875) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7a6,	// (0x00019875) bg_popup_preview_window_pane_cp02

0xc7b2,	// (0x00019881) list_fp_cale_pane_ParamLimits

0xc7b2,	// (0x00019881) list_fp_cale_pane

0xc7be,	// (0x0001988d) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7be,	// (0x0001988d) popup_fixed_preview_cale_window_t1

0x5605,	// (0x000126d4) popup_fixed_preview_cale_window_t2_ParamLimits

0x5605,	// (0x000126d4) popup_fixed_preview_cale_window_t2

0x561a,	// (0x000126e9) popup_fixed_preview_cale_window_t3_ParamLimits

0x561a,	// (0x000126e9) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0001c8e0) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0001c8e0) popup_fixed_preview_cale_window_t

0x5631,	// (0x00012700) list_single_fp_cale_pane_ParamLimits

0x5631,	// (0x00012700) list_single_fp_cale_pane

0xc7dc,	// (0x000198ab) list_single_fp_cale_pane_g1_ParamLimits

0xc7dc,	// (0x000198ab) list_single_fp_cale_pane_g1

0xc7e8,	// (0x000198b7) list_single_fp_cale_pane_g2_ParamLimits

0xc7e8,	// (0x000198b7) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0001c8e7) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0001c8e7) list_single_fp_cale_pane_g

0xc801,	// (0x000198d0) list_single_fp_cale_pane_t1_ParamLimits

0xc801,	// (0x000198d0) list_single_fp_cale_pane_t1

0xc813,	// (0x000198e2) list_single_fp_cale_pane_t2_ParamLimits

0xc813,	// (0x000198e2) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0001c8ee) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0001c8ee) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9596,	// (0x00016665) main_dialer_pane

0x5649,	// (0x00012718) aid_cell_size_keypad

0x5653,	// (0x00012722) dialer_ne_pane

0x565d,	// (0x0001272c) grid_dialer_command_1_pane

0x5665,	// (0x00012734) grid_dialer_command_2_pane

0x566d,	// (0x0001273c) grid_dialer_keypad_pane

0x5681,	// (0x00012750) bg_popup_call_pane_cp06_ParamLimits

0x5681,	// (0x00012750) bg_popup_call_pane_cp06

0x568d,	// (0x0001275c) dialer_ne_clear_pane_ParamLimits

0x568d,	// (0x0001275c) dialer_ne_clear_pane

0xc846,	// (0x00019915) dialer_ne_pane_g1

0xc84e,	// (0x0001991d) dialer_ne_pane_t1_ParamLimits

0xc84e,	// (0x0001991d) dialer_ne_pane_t1

0x5699,	// (0x00012768) dialer_ne_pane_t2_ParamLimits

0x5699,	// (0x00012768) dialer_ne_pane_t2

0x56c3,	// (0x00012792) dialer_ne_pane_t3_ParamLimits

0x56c3,	// (0x00012792) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0001c8f3) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0001c8f3) dialer_ne_pane_t

0x56f3,	// (0x000127c2) dialer_ne_pane_t3_copy1_ParamLimits

0x56f3,	// (0x000127c2) dialer_ne_pane_t3_copy1

0x5722,	// (0x000127f1) cell_dialer_keypad_pane_ParamLimits

0x5722,	// (0x000127f1) cell_dialer_keypad_pane

0x5739,	// (0x00012808) cell_dialer_command_1_pane_ParamLimits

0x5739,	// (0x00012808) cell_dialer_command_1_pane

0x574f,	// (0x0001281e) cell_dialer_command_2_pane_ParamLimits

0x574f,	// (0x0001281e) cell_dialer_command_2_pane

0xc860,	// (0x0001992f) bg_button_pane_cp02_ParamLimits

0xc860,	// (0x0001992f) bg_button_pane_cp02

0x575e,	// (0x0001282d) cell_dialer_keypad_pane_g1_ParamLimits

0x575e,	// (0x0001282d) cell_dialer_keypad_pane_g1

0xc860,	// (0x0001992f) bg_button_pane_cp03_ParamLimits

0xc860,	// (0x0001992f) bg_button_pane_cp03

0x5773,	// (0x00012842) cell_dialer_command_1_pane_g1_ParamLimits

0x5773,	// (0x00012842) cell_dialer_command_1_pane_g1

0xc86c,	// (0x0001993b) bg_button_pane_cp04

0x5787,	// (0x00012856) cell_dialer_command_2_pane_g1

0xaaa8,	// (0x00017b77) bg_button_pane_cp06

0xc874,	// (0x00019943) dialer_ne_clear_pane_g1

0x309e,	// (0x0001016d) navi_pane_g2

0x30cc,	// (0x0001019b) navi_pane_g3

0x0002,

0xf44c,	// (0x0001c51b) navi_pane_g

0x30f7,	// (0x000101c6) navi_pane_mv_g2

0x311e,	// (0x000101ed) navi_pane_mv_g5

0x3126,	// (0x000101f5) navi_pane_mv_t1

0x9d70,	// (0x00016e3f) main_clock2_pane

0x57bf,	// (0x0001288e) main_clock2_list_pane_ParamLimits

0x57bf,	// (0x0001288e) main_clock2_list_pane

0x57f7,	// (0x000128c6) main_clock2_pane_t1_ParamLimits

0x57f7,	// (0x000128c6) main_clock2_pane_t1

0x5833,	// (0x00012902) main_clock2_pane_t2_ParamLimits

0x5833,	// (0x00012902) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0001c8fa) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0001c8fa) main_clock2_pane_t

0x58bf,	// (0x0001298e) popup_clock_analogue_window_cp03_ParamLimits

0x58bf,	// (0x0001298e) popup_clock_analogue_window_cp03

0x58e6,	// (0x000129b5) popup_clock_digital_window_cp02_ParamLimits

0x58e6,	// (0x000129b5) popup_clock_digital_window_cp02

0x595f,	// (0x00012a2e) main_clock2_list_single_pane_ParamLimits

0x595f,	// (0x00012a2e) main_clock2_list_single_pane

0xaaa8,	// (0x00017b77) list_highlight_pane_cp05

0xc8b1,	// (0x00019980) main_clock2_list_single_pane_t1

0x2069,	// (0x0000f138) popup_toolbar_window_cp04_ParamLimits

0x4df4,	// (0x00011ec3) camera2_autofocus_pane_g2_ParamLimits

0x4df4,	// (0x00011ec3) camera2_autofocus_pane_g2

0x4e00,	// (0x00011ecf) camera2_autofocus_pane_g3_ParamLimits

0x4e00,	// (0x00011ecf) camera2_autofocus_pane_g3

0x4e0c,	// (0x00011edb) camera2_autofocus_pane_g4_ParamLimits

0x4e0c,	// (0x00011edb) camera2_autofocus_pane_g4

0x4e18,	// (0x00011ee7) camera2_autofocus_pane_g5_ParamLimits

0x4e18,	// (0x00011ee7) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0001c843) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0001c843) camera2_autofocus_pane_g

0x4fc4,	// (0x00012093) camera2_autofocus_pane_cp_g2

0x4fcc,	// (0x0001209b) camera2_autofocus_pane_cp_g3

0x4fd4,	// (0x000120a3) camera2_autofocus_pane_cp_g4

0x4fdc,	// (0x000120ab) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0001c8a9) camera2_autofocus_pane_cp_g

0x5679,	// (0x00012748) popup_dialer_spcha_window

0x9596,	// (0x00016665) bg_popup_sub_pane_cp07

0xc8bf,	// (0x0001998e) list_spcha_pane

0xc8c7,	// (0x00019996) list_single_spcha_pane_ParamLimits

0xc8c7,	// (0x00019996) list_single_spcha_pane

0x9596,	// (0x00016665) list_highlight_pane_cp06

0xc8d8,	// (0x000199a7) list_single_spcha_pane_t1

0xb95a,	// (0x00018a29) popup_call2_audio_out_window_g4_ParamLimits

0xb95a,	// (0x00018a29) popup_call2_audio_out_window_g4

0x9596,	// (0x00016665) main_imed2_pane

0xbf41,	// (0x00019010) popup_imed_adjust2_window

0x41c2,	// (0x00011291) popup_imed_trans_window_ParamLimits

0x41c2,	// (0x00011291) popup_imed_trans_window

0xc282,	// (0x00019351) popup_blid_sat_info2_window_t1

0xc290,	// (0x0001935f) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0001c7d8) popup_blid_sat_info2_window_t

0x5a15,	// (0x00012ae4) aid_size_cell_colour_35

0x5a35,	// (0x00012b04) aid_size_cell_colour_112

0x5a55,	// (0x00012b24) aid_size_cell_effect

0xbf15,	// (0x00018fe4) bg_tb_trans_pane_cp02

0xa52e,	// (0x000175fd) heading_imed_pane

0x5a75,	// (0x00012b44) listscroll_imed_pane

0xc8e6,	// (0x000199b5) heading_imed_pane_g1

0xc8ee,	// (0x000199bd) heading_imed_pane_t1

0xc8fc,	// (0x000199cb) grid_imed_colour_35_pane_ParamLimits

0xc8fc,	// (0x000199cb) grid_imed_colour_35_pane

0x5a81,	// (0x00012b50) grid_imed_effect_pane

0xc918,	// (0x000199e7) list_imed_aspect_pane

0x5a98,	// (0x00012b67) scroll_pane_cp027_ParamLimits

0x5a98,	// (0x00012b67) scroll_pane_cp027

0x5aa9,	// (0x00012b78) cell_imed_effect_pane_ParamLimits

0x5aa9,	// (0x00012b78) cell_imed_effect_pane

0xc920,	// (0x000199ef) cell_imed_colour_pane_ParamLimits

0xc920,	// (0x000199ef) cell_imed_colour_pane

0xc96a,	// (0x00019a39) cell_imed_colour_pane_g1_ParamLimits

0xc96a,	// (0x00019a39) cell_imed_colour_pane_g1

0xc97b,	// (0x00019a4a) hgihlgiht_grid_pane_cp016_ParamLimits

0xc97b,	// (0x00019a4a) hgihlgiht_grid_pane_cp016

0x5ace,	// (0x00012b9d) cell_imed_effect_pane_g1

0x5ad6,	// (0x00012ba5) grid_highlight_pane_cp017

0xc98c,	// (0x00019a5b) list_imed_single_pane_ParamLimits

0xc98c,	// (0x00019a5b) list_imed_single_pane

0x9596,	// (0x00016665) list_highlight_pane_cp07

0xc9a0,	// (0x00019a6f) list_imed_aspect_pane_comp1_t1

0xbf15,	// (0x00018fe4) bg_tb_trans_pane_cp05

0xc9c2,	// (0x00019a91) popup_imed_adjust2_window_g1

0xc9e9,	// (0x00019ab8) popup_imed_adjust2_window_t1

0xca01,	// (0x00019ad0) slider_imed_adjust_pane

0xca15,	// (0x00019ae4) slider_imed_adjust_pane_g1

0xca25,	// (0x00019af4) slider_imed_adjust_pane_g2

0xca35,	// (0x00019b04) slider_imed_adjust_pane_g3

0xca46,	// (0x00019b15) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0001c917) slider_imed_adjust_pane_g

0x5adf,	// (0x00012bae) aid_size_cell_clipart2

0x5aeb,	// (0x00012bba) grid_imed_clipart_pane

0xca57,	// (0x00019b26) scroll_pane_cp031

0x5af5,	// (0x00012bc4) cell_imed_clipart_pane_ParamLimits

0x5af5,	// (0x00012bc4) cell_imed_clipart_pane

0x5b12,	// (0x00012be1) cell_imed_clipart_pane_g1

0x9596,	// (0x00016665) grid_highlight_pane_cp014

0x57d4,	// (0x000128a3) main_clock2_pane_g1_ParamLimits

0x57d4,	// (0x000128a3) main_clock2_pane_g1

0x5906,	// (0x000129d5) aid_call2_pane_cp10

0x5918,	// (0x000129e7) aid_call_pane_cp10

0xa9dd,	// (0x00017aac) popup_clock_analogue_window_cp10_g1

0xa9dd,	// (0x00017aac) popup_clock_analogue_window_cp10_g2

0x592a,	// (0x000129f9) popup_clock_analogue_window_cp10_g3

0x592a,	// (0x000129f9) popup_clock_analogue_window_cp10_g4

0xa9dd,	// (0x00017aac) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0001c905) popup_clock_analogue_window_cp10_g

0x5940,	// (0x00012a0f) popup_clock_analogue_window_cp10_t1

0x5971,	// (0x00012a40) clock_digital_number_pane_cp10_ParamLimits

0x5971,	// (0x00012a40) clock_digital_number_pane_cp10

0x598b,	// (0x00012a5a) clock_digital_number_pane_cp11_ParamLimits

0x598b,	// (0x00012a5a) clock_digital_number_pane_cp11

0x59a5,	// (0x00012a74) clock_digital_number_pane_cp12_ParamLimits

0x59a5,	// (0x00012a74) clock_digital_number_pane_cp12

0x59bf,	// (0x00012a8e) clock_digital_number_pane_cp13_ParamLimits

0x59bf,	// (0x00012a8e) clock_digital_number_pane_cp13

0x59d9,	// (0x00012aa8) clock_digital_separator_pane_cp10_ParamLimits

0x59d9,	// (0x00012aa8) clock_digital_separator_pane_cp10

0x59f3,	// (0x00012ac2) popup_clock_digital_window_cp02_t1_ParamLimits

0x59f3,	// (0x00012ac2) popup_clock_digital_window_cp02_t1

0x9c7b,	// (0x00016d4a) clock_digital_number_pane_cp10_g1

0x9c7b,	// (0x00016d4a) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0001c920) clock_digital_number_pane_cp10_g

0x9c7b,	// (0x00016d4a) clock_digital_separator_pane_cp10_g1

0x9c7b,	// (0x00016d4a) clock_digital_separator_pane_g2_cp10

0xaa78,	// (0x00017b47) navi_pane_vded_g4

0xaa81,	// (0x00017b50) navi_pane_vded_g5

0xaa8a,	// (0x00017b59) navi_pane_vded_t1

0x9596,	// (0x00016665) main_vded_pane

0x5b1b,	// (0x00012bea) main_vded_pane_g1

0x5b27,	// (0x00012bf6) main_vded_pane_g2

0x5b33,	// (0x00012c02) main_vded_pane_g3

0x0002,

0xf856,	// (0x0001c925) main_vded_pane_g

0x5b3f,	// (0x00012c0e) main_vded_pane_t1

0x5b4d,	// (0x00012c1c) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0001c92c) main_vded_pane_t

0x5b5b,	// (0x00012c2a) vded_slider_pane

0x5b65,	// (0x00012c34) vded_video_pane

0xca5f,	// (0x00019b2e) vded_video_pane_g1

0x5b71,	// (0x00012c40) vded_video_pane_g2

0xc44a,	// (0x00019519) vded_video_pane_g3

0x0002,

0xf862,	// (0x0001c931) vded_video_pane_g

0xca69,	// (0x00019b38) vded_slider_pane_g1

0xc153,	// (0x00019222) vded_slider_pane_g2

0xca72,	// (0x00019b41) vded_slider_pane_g3

0xca7b,	// (0x00019b4a) vded_slider_pane_g4

0xca84,	// (0x00019b53) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0001c938) vded_slider_pane_g

0x555f,	// (0x0001262e) mup3_rocker_pane_ParamLimits

0x555f,	// (0x0001262e) mup3_rocker_pane

0x5b7a,	// (0x00012c49) mup3_control_keys_pane_g1

0x5b82,	// (0x00012c51) mup3_control_keys_pane_g2

0x5b8a,	// (0x00012c59) mup3_control_keys_pane_g3

0x5b92,	// (0x00012c61) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0001c943) mup3_control_keys_pane_g

0x12fd,	// (0x0000e3cc) popup_toolbar2_fixed_window_cp01_ParamLimits

0x12fd,	// (0x0000e3cc) popup_toolbar2_fixed_window_cp01

0x5595,	// (0x00012664) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5595,	// (0x00012664) popup_toolbar2_fixed_window_cp02

0xb299,	// (0x00018368) popup_call2_audio_second_window_t4_ParamLimits

0xb299,	// (0x00018368) popup_call2_audio_second_window_t4

0xb7c7,	// (0x00018896) popup_call2_audio_first_window_t6_ParamLimits

0xb7c7,	// (0x00018896) popup_call2_audio_first_window_t6

0xba5d,	// (0x00018b2c) popup_call2_audio_out_window_t6_ParamLimits

0xba5d,	// (0x00018b2c) popup_call2_audio_out_window_t6

0x9596,	// (0x00016665) main_vitu_pane

0x5ba2,	// (0x00012c71) aid_size_cell_itu_ParamLimits

0x5ba2,	// (0x00012c71) aid_size_cell_itu

0x9607,	// (0x000166d6) bg_popup_window_pane_cp08_ParamLimits

0x9607,	// (0x000166d6) bg_popup_window_pane_cp08

0x5bb8,	// (0x00012c87) field_vitu_entry_pane_ParamLimits

0x5bb8,	// (0x00012c87) field_vitu_entry_pane

0x5bcf,	// (0x00012c9e) grid_vitu_function_pane_ParamLimits

0x5bcf,	// (0x00012c9e) grid_vitu_function_pane

0x5bea,	// (0x00012cb9) grid_vitu_itu_pane_ParamLimits

0x5bea,	// (0x00012cb9) grid_vitu_itu_pane

0x5c08,	// (0x00012cd7) cell_vitu_itu_pane_ParamLimits

0x5c08,	// (0x00012cd7) cell_vitu_itu_pane

0x5c2e,	// (0x00012cfd) cell_vitu_function_pane_ParamLimits

0x5c2e,	// (0x00012cfd) cell_vitu_function_pane

0x9607,	// (0x000166d6) bg_popup_sub_pane_cp08_ParamLimits

0x9607,	// (0x000166d6) bg_popup_sub_pane_cp08

0x5c49,	// (0x00012d18) field_vitu_entry_pane_t1_ParamLimits

0x5c49,	// (0x00012d18) field_vitu_entry_pane_t1

0xcaa5,	// (0x00019b74) field_vitu_entry_pane_t2_ParamLimits

0xcaa5,	// (0x00019b74) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0001c951) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0001c951) field_vitu_entry_pane_t

0xcac2,	// (0x00019b91) bg_button_pane_cp05_ParamLimits

0xcac2,	// (0x00019b91) bg_button_pane_cp05

0x5c69,	// (0x00012d38) cell_vitu_itu_pane_g1

0x5c81,	// (0x00012d50) cell_vitu_itu_pane_t1_ParamLimits

0x5c81,	// (0x00012d50) cell_vitu_itu_pane_t1

0x5c93,	// (0x00012d62) cell_vitu_itu_pane_t2_ParamLimits

0x5c93,	// (0x00012d62) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0001c956) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0001c956) cell_vitu_itu_pane_t

0xcad0,	// (0x00019b9f) bg_button_pane_cp07

0x5cc8,	// (0x00012d97) cell_vitu_function_pane_g1

0x9d0a,	// (0x00016dd9) main_calc_pane_g1

0x1130,	// (0x0000e1ff) aid_visual_content_pane

0x9596,	// (0x00016665) main_vradio_pane

0x5cd1,	// (0x00012da0) main_vradio_pane_g1_ParamLimits

0x5cd1,	// (0x00012da0) main_vradio_pane_g1

0xcada,	// (0x00019ba9) main_vradio_pane_g2_ParamLimits

0xcada,	// (0x00019ba9) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0001c95d) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0001c95d) main_vradio_pane_g

0x5ce8,	// (0x00012db7) main_vradio_pane_t1_ParamLimits

0x5ce8,	// (0x00012db7) main_vradio_pane_t1

0x5cfd,	// (0x00012dcc) main_vradio_pane_t2_ParamLimits

0x5cfd,	// (0x00012dcc) main_vradio_pane_t2

0xcae7,	// (0x00019bb6) main_vradio_pane_t3_ParamLimits

0xcae7,	// (0x00019bb6) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0001c962) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0001c962) main_vradio_pane_t

0x5d12,	// (0x00012de1) vradio_rocker_control_pane_ParamLimits

0x5d12,	// (0x00012de1) vradio_rocker_control_pane

0x5d24,	// (0x00012df3) vradio_station_info_pane_ParamLimits

0x5d24,	// (0x00012df3) vradio_station_info_pane

0xcafb,	// (0x00019bca) vradio_frequency_info_pane_ParamLimits

0xcafb,	// (0x00019bca) vradio_frequency_info_pane

0xc44a,	// (0x00019519) vradio_station_info_pane_g1

0xcb0a,	// (0x00019bd9) vradio_station_info_pane_t1_ParamLimits

0xcb0a,	// (0x00019bd9) vradio_station_info_pane_t1

0xcb2c,	// (0x00019bfb) vradio_station_info_pane_t2_ParamLimits

0xcb2c,	// (0x00019bfb) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0001c969) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0001c969) vradio_station_info_pane_t

0xcb3e,	// (0x00019c0d) vradio_tuning_pane

0xcb46,	// (0x00019c15) vradio_rocker_control_pane_g1

0xcb4e,	// (0x00019c1d) vradio_rocker_control_pane_g2

0xcb56,	// (0x00019c25) vradio_rocker_control_pane_g3

0xcb5e,	// (0x00019c2d) vradio_rocker_control_pane_g4

0xcb66,	// (0x00019c35) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0001c96e) vradio_rocker_control_pane_g

0x5d34,	// (0x00012e03) vradio_frequency_info_pane_g1

0xcb6e,	// (0x00019c3d) vradio_frequency_info_pane_t1_ParamLimits

0xcb6e,	// (0x00019c3d) vradio_frequency_info_pane_t1

0x5d3e,	// (0x00012e0d) vradio_tuning_pane_g1

0x5d49,	// (0x00012e18) vradio_tuning_pane_t1

0x95c4,	// (0x00016693) area_side_right_pane_ParamLimits

0x95c4,	// (0x00016693) area_side_right_pane

0xbedc,	// (0x00018fab) status_small_pane_g1

0xbee4,	// (0x00018fb3) status_small_pane_g2

0xbeed,	// (0x00018fbc) status_small_pane_g3

0xbef6,	// (0x00018fc5) status_small_pane_g4

0x0003,

0xf65f,	// (0x0001c72e) status_small_pane_g

0xbeff,	// (0x00018fce) status_small_pane_t1

0x9596,	// (0x00016665) main_video3_pane

0xcb82,	// (0x00019c51) cams_zoom_vslider_pane

0xcb8a,	// (0x00019c59) image3_wide_pane_ParamLimits

0xcb8a,	// (0x00019c59) image3_wide_pane

0xcba4,	// (0x00019c73) image3_wide_small_pane

0xcbb0,	// (0x00019c7f) main_video3_pane_g1_ParamLimits

0xcbb0,	// (0x00019c7f) main_video3_pane_g1

0xcbcc,	// (0x00019c9b) main_video3_pane_g2_ParamLimits

0xcbcc,	// (0x00019c9b) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0001c979) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0001c979) main_video3_pane_g

0xcbe8,	// (0x00019cb7) main_video3_pane_t1_ParamLimits

0xcbe8,	// (0x00019cb7) main_video3_pane_t1

0xcc13,	// (0x00019ce2) main_video3_pane_t2_ParamLimits

0xcc13,	// (0x00019ce2) main_video3_pane_t2

0xcc40,	// (0x00019d0f) main_video3_pane_t3_ParamLimits

0xcc40,	// (0x00019d0f) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0001c97e) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0001c97e) main_video3_pane_t

0xcc6d,	// (0x00019d3c) cams_zoom_vslider_pane_g1

0xcc76,	// (0x00019d45) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0001c985) cams_zoom_vslider_pane_g

0xcc7e,	// (0x00019d4d) small_slider_vertical_pane

0xc44a,	// (0x00019519) small_slider_vertical_pane_g1

0xc44a,	// (0x00019519) small_slider_vertical_pane_g2

0xcc86,	// (0x00019d55) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0001c98a) small_slider_vertical_pane_g

0x9596,	// (0x00016665) main_hwr_training_pane

0xcc8f,	// (0x00019d5e) hwr_training_instruct_pane_ParamLimits

0xcc8f,	// (0x00019d5e) hwr_training_instruct_pane

0x5d58,	// (0x00012e27) hwr_training_navi_pane_ParamLimits

0x5d58,	// (0x00012e27) hwr_training_navi_pane

0x5d77,	// (0x00012e46) hwr_training_write_pane_ParamLimits

0x5d77,	// (0x00012e46) hwr_training_write_pane

0x9596,	// (0x00016665) bg_frame_shadow_pane

0xccc6,	// (0x00019d95) hwr_training_write_pane_g1

0xccce,	// (0x00019d9d) hwr_training_write_pane_g2

0xccd6,	// (0x00019da5) hwr_training_write_pane_g3

0xccde,	// (0x00019dad) hwr_training_write_pane_g4

0xcce6,	// (0x00019db5) hwr_training_write_pane_g5

0xccee,	// (0x00019dbd) hwr_training_write_pane_g6

0xccf6,	// (0x00019dc5) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0001c991) hwr_training_write_pane_g

0xccfe,	// (0x00019dcd) hwr_training_navi_pane_g1_ParamLimits

0xccfe,	// (0x00019dcd) hwr_training_navi_pane_g1

0xcd10,	// (0x00019ddf) hwr_training_navi_pane_g2_ParamLimits

0xcd10,	// (0x00019ddf) hwr_training_navi_pane_g2

0xcd22,	// (0x00019df1) hwr_training_navi_pane_g3_ParamLimits

0xcd22,	// (0x00019df1) hwr_training_navi_pane_g3

0xcd32,	// (0x00019e01) hwr_training_navi_pane_g4_ParamLimits

0xcd32,	// (0x00019e01) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0001c9a0) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0001c9a0) hwr_training_navi_pane_g

0xcd3f,	// (0x00019e0e) hwr_training_navi_pane_t1

0x5dbf,	// (0x00012e8e) list_single_hwr_training_instruct_pane_ParamLimits

0x5dbf,	// (0x00012e8e) list_single_hwr_training_instruct_pane

0xcd4d,	// (0x00019e1c) list_single_hwr_training_instruct_pane_t1

0xc38a,	// (0x00019459) bg_frame_shadow_pane_g1

0xcd5c,	// (0x00019e2b) bg_frame_shadow_pane_g2

0xcd64,	// (0x00019e33) bg_frame_shadow_pane_g3

0xcd6c,	// (0x00019e3b) bg_frame_shadow_pane_g4

0xcd74,	// (0x00019e43) bg_frame_shadow_pane_g5

0xcd7c,	// (0x00019e4b) bg_frame_shadow_pane_g6

0xcd84,	// (0x00019e53) bg_frame_shadow_pane_g7

0x9e69,	// (0x00016f38) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0001c9ab) bg_frame_shadow_pane_g

0x9596,	// (0x00016665) main_video_tele_dialer_pane

0x5ddb,	// (0x00012eaa) aid_size_cell_video_keypad_ParamLimits

0x5ddb,	// (0x00012eaa) aid_size_cell_video_keypad

0x5df5,	// (0x00012ec4) grid_video_dialer_keypad_pane_ParamLimits

0x5df5,	// (0x00012ec4) grid_video_dialer_keypad_pane

0x5e43,	// (0x00012f12) video_down_pane_cp_ParamLimits

0x5e43,	// (0x00012f12) video_down_pane_cp

0x5e77,	// (0x00012f46) cell_video_dialer_keypad_pane_ParamLimits

0x5e77,	// (0x00012f46) cell_video_dialer_keypad_pane

0xcd8c,	// (0x00019e5b) bg_button_pane_cp08_ParamLimits

0xcd8c,	// (0x00019e5b) bg_button_pane_cp08

0x5e9d,	// (0x00012f6c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e9d,	// (0x00012f6c) cell_video_dialer_keypad_pane_g1

0x5549,	// (0x00012618) mup3_rocker2_pane_ParamLimits

0x5549,	// (0x00012618) mup3_rocker2_pane

0xc44a,	// (0x00019519) mup3_rocker2_pane_g1

0x408f,	// (0x0001115e) main_dialer2_pane

0x9596,	// (0x00016665) main_mp4_pane

0xcda0,	// (0x00019e6f) main_mp4_pane_g1_ParamLimits

0xcda0,	// (0x00019e6f) main_mp4_pane_g1

0xcda0,	// (0x00019e6f) main_mp4_pane_g2_ParamLimits

0xcda0,	// (0x00019e6f) main_mp4_pane_g2

0x5ed8,	// (0x00012fa7) main_mp4_pane_g3_ParamLimits

0x5ed8,	// (0x00012fa7) main_mp4_pane_g3

0xcdae,	// (0x00019e7d) main_mp4_pane_g4_ParamLimits

0xcdae,	// (0x00019e7d) main_mp4_pane_g4

0xcdc8,	// (0x00019e97) main_mp4_pane_g5_ParamLimits

0xcdc8,	// (0x00019e97) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0001c9cb) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0001c9cb) main_mp4_pane_g

0xcdfc,	// (0x00019ecb) main_mp4_pane_t1_ParamLimits

0xcdfc,	// (0x00019ecb) main_mp4_pane_t1

0xce58,	// (0x00019f27) main_mp4_pane_t2_ParamLimits

0xce58,	// (0x00019f27) main_mp4_pane_t2

0xceaa,	// (0x00019f79) main_mp4_pane_t3_ParamLimits

0xceaa,	// (0x00019f79) main_mp4_pane_t3

0xceca,	// (0x00019f99) main_mp4_pane_t4_ParamLimits

0xceca,	// (0x00019f99) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0001c9d8) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0001c9d8) main_mp4_pane_t

0xcf0a,	// (0x00019fd9) mp4_progress_pane_ParamLimits

0xcf0a,	// (0x00019fd9) mp4_progress_pane

0xcf54,	// (0x0001a023) mp4_rocker_pane_ParamLimits

0xcf54,	// (0x0001a023) mp4_rocker_pane

0xcf7e,	// (0x0001a04d) mp4_progress_pane_t1

0xcf97,	// (0x0001a066) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0001c9e1) mp4_progress_pane_t

0xcfb0,	// (0x0001a07f) mup_progress_pane_cp04

0xc44a,	// (0x00019519) mp4_rocker_pane_g1

0x5f22,	// (0x00012ff1) aid_cell_size_keypad2_ParamLimits

0x5f22,	// (0x00012ff1) aid_cell_size_keypad2

0x5f38,	// (0x00013007) dialer2_ne_pane_ParamLimits

0x5f38,	// (0x00013007) dialer2_ne_pane

0x5f50,	// (0x0001301f) grid_dialer2_keypad_pane_ParamLimits

0x5f50,	// (0x0001301f) grid_dialer2_keypad_pane

0xc229,	// (0x000192f8) bg_popup_call_pane_cp07_ParamLimits

0xc229,	// (0x000192f8) bg_popup_call_pane_cp07

0x5f6c,	// (0x0001303b) dialer2_ne_pane_t1_ParamLimits

0x5f6c,	// (0x0001303b) dialer2_ne_pane_t1

0x5fac,	// (0x0001307b) cell_dialer2_keypad_pane_ParamLimits

0x5fac,	// (0x0001307b) cell_dialer2_keypad_pane

0xcfce,	// (0x0001a09d) bg_button_pane_pane_cp04_ParamLimits

0xcfce,	// (0x0001a09d) bg_button_pane_pane_cp04

0x5fd2,	// (0x000130a1) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fd2,	// (0x000130a1) cell_dialer2_keypad_pane_g1

0x1f97,	// (0x0000f066) aid_placing_vt_set_content_ParamLimits

0x1f97,	// (0x0000f066) aid_placing_vt_set_content

0x1fb7,	// (0x0000f086) aid_placing_vt_set_title_ParamLimits

0x1fb7,	// (0x0000f086) aid_placing_vt_set_title

0x9596,	// (0x00016665) main_image3_pane

0x6098,	// (0x00013167) area_side_right_pane_cp01_ParamLimits

0x6098,	// (0x00013167) area_side_right_pane_cp01

0xcda0,	// (0x00019e6f) main_image3_pane_g1_ParamLimits

0xcda0,	// (0x00019e6f) main_image3_pane_g1

0x60b1,	// (0x00013180) main_image3_pane_g2_ParamLimits

0x60b1,	// (0x00013180) main_image3_pane_g2

0x60d9,	// (0x000131a8) main_image3_pane_g3_ParamLimits

0x60d9,	// (0x000131a8) main_image3_pane_g3

0x6103,	// (0x000131d2) main_image3_pane_g4_ParamLimits

0x6103,	// (0x000131d2) main_image3_pane_g4

0x0003,

0xf921,	// (0x0001c9f0) main_image3_pane_g_ParamLimits

0xf921,	// (0x0001c9f0) main_image3_pane_g

0x612d,	// (0x000131fc) main_image3_pane_t1_ParamLimits

0x612d,	// (0x000131fc) main_image3_pane_t1

0x6185,	// (0x00013254) main_image3_pane_t2_ParamLimits

0x6185,	// (0x00013254) main_image3_pane_t2

0x61d7,	// (0x000132a6) main_image3_pane_t3_ParamLimits

0x61d7,	// (0x000132a6) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0001c9f9) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0001c9f9) main_image3_pane_t

0x9607,	// (0x000166d6) grid_sctrl_middle_pane_cp01_ParamLimits

0x9607,	// (0x000166d6) grid_sctrl_middle_pane_cp01

0x625f,	// (0x0001332e) cell_sctrl_middle_pane_cp01_ParamLimits

0x625f,	// (0x0001332e) cell_sctrl_middle_pane_cp01

0x627c,	// (0x0001334b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x627c,	// (0x0001334b) cell_sctrl_middle_pane_cp01_g1

0x9596,	// (0x00016665) main_call4_pane

0x6291,	// (0x00013360) aid_size_button_call4_ParamLimits

0x6291,	// (0x00013360) aid_size_button_call4

0x62c4,	// (0x00013393) call4_windows_pane_ParamLimits

0x62c4,	// (0x00013393) call4_windows_pane

0x62e6,	// (0x000133b5) grid_call4_button_pane_ParamLimits

0x62e6,	// (0x000133b5) grid_call4_button_pane

0xd00e,	// (0x0001a0dd) call4_windows_conf_pane

0xd029,	// (0x0001a0f8) popup_call4_audio_first_window_ParamLimits

0xd029,	// (0x0001a0f8) popup_call4_audio_first_window

0xd077,	// (0x0001a146) popup_call4_audio_second_window_ParamLimits

0xd077,	// (0x0001a146) popup_call4_audio_second_window

0xd08d,	// (0x0001a15c) popup_call4_audio_wait_window_ParamLimits

0xd08d,	// (0x0001a15c) popup_call4_audio_wait_window

0x6311,	// (0x000133e0) cell_call4_button_pane_ParamLimits

0x6311,	// (0x000133e0) cell_call4_button_pane

0x6338,	// (0x00013407) bg_button_pane_cp09_ParamLimits

0x6338,	// (0x00013407) bg_button_pane_cp09

0x6344,	// (0x00013413) cell_call4_button_pane_g1_ParamLimits

0x6344,	// (0x00013413) cell_call4_button_pane_g1

0x636a,	// (0x00013439) cell_call4_button_pane_t1_ParamLimits

0x636a,	// (0x00013439) cell_call4_button_pane_t1

0xd0d5,	// (0x0001a1a4) popup_call4_audio_conf_window_ParamLimits

0xd0d5,	// (0x0001a1a4) popup_call4_audio_conf_window

0x55ab,	// (0x0001267a) mup3_progress_pane_t1_ParamLimits

0x55c2,	// (0x00012691) mup3_progress_pane_t2_ParamLimits

0xc769,	// (0x00019838) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0001c8d2) mup3_progress_pane_t_ParamLimits

0xc780,	// (0x0001984f) mup_progress_pane_cp03_ParamLimits

0x5b9a,	// (0x00012c69) mup3_control_keys_pane_g4_copy1

0xcf38,	// (0x0001a007) mp4_rocker2_pane_ParamLimits

0xcf38,	// (0x0001a007) mp4_rocker2_pane

0xd0ef,	// (0x0001a1be) mp4_rocker2_pane_g1

0xd0f7,	// (0x0001a1c6) mp4_rocker2_pane_g2

0xd0ff,	// (0x0001a1ce) mp4_rocker2_pane_g3

0xd107,	// (0x0001a1d6) mp4_rocker2_pane_g4

0xd10f,	// (0x0001a1de) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0001ca02) mp4_rocker2_pane_g

0x9596,	// (0x00016665) main_camera4_pane

0x9596,	// (0x00016665) main_video4_pane

0x5e11,	// (0x00012ee0) main_video_tele_dialer_pane_t1_ParamLimits

0x5e11,	// (0x00012ee0) main_video_tele_dialer_pane_t1

0x5e2a,	// (0x00012ef9) main_video_tele_dialer_pane_t2_ParamLimits

0x5e2a,	// (0x00012ef9) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0001c9bc) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0001c9bc) main_video_tele_dialer_pane_t

0x63a8,	// (0x00013477) cam4_autofocus_pane_ParamLimits

0x63a8,	// (0x00013477) cam4_autofocus_pane

0x63be,	// (0x0001348d) cam4_image_uncrop_pane_ParamLimits

0x63be,	// (0x0001348d) cam4_image_uncrop_pane

0x63d7,	// (0x000134a6) cam4_indicators_pane_ParamLimits

0x63d7,	// (0x000134a6) cam4_indicators_pane

0x6406,	// (0x000134d5) main_camera4_pane_g1_ParamLimits

0x6406,	// (0x000134d5) main_camera4_pane_g1

0x6412,	// (0x000134e1) main_camera4_pane_g2_ParamLimits

0x6412,	// (0x000134e1) main_camera4_pane_g2

0x641e,	// (0x000134ed) main_camera4_pane_g3_ParamLimits

0x641e,	// (0x000134ed) main_camera4_pane_g3

0x642a,	// (0x000134f9) main_camera4_pane_g4_ParamLimits

0x642a,	// (0x000134f9) main_camera4_pane_g4

0x6436,	// (0x00013505) main_camera4_pane_g5_ParamLimits

0x6436,	// (0x00013505) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0001ca0d) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0001ca0d) main_camera4_pane_g

0x6453,	// (0x00013522) main_camera4_pane_t1_ParamLimits

0x6453,	// (0x00013522) main_camera4_pane_t1

0xc753,	// (0x00019822) bg_tb_trans_pane_cp06

0x648b,	// (0x0001355a) cam4_indicators_pane_g1

0x6498,	// (0x00013567) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0001ca1f) cam4_indicators_pane_g

0x64b0,	// (0x0001357f) cam4_indicators_pane_t1

0x64da,	// (0x000135a9) main_video4_pane_g1_ParamLimits

0x64da,	// (0x000135a9) main_video4_pane_g1

0x64ec,	// (0x000135bb) main_video4_pane_g2_ParamLimits

0x64ec,	// (0x000135bb) main_video4_pane_g2

0x6500,	// (0x000135cf) main_video4_pane_g3_ParamLimits

0x6500,	// (0x000135cf) main_video4_pane_g3

0x6510,	// (0x000135df) main_video4_pane_g4_ParamLimits

0x6510,	// (0x000135df) main_video4_pane_g4

0x0004,

0xf957,	// (0x0001ca26) main_video4_pane_g_ParamLimits

0xf957,	// (0x0001ca26) main_video4_pane_g

0x6530,	// (0x000135ff) vid4_indicators_pane_ParamLimits

0x6530,	// (0x000135ff) vid4_indicators_pane

0x6560,	// (0x0001362f) video4_image_uncrop_cif_pane_ParamLimits

0x6560,	// (0x0001362f) video4_image_uncrop_cif_pane

0x657a,	// (0x00013649) video4_image_uncrop_nhd_pane_ParamLimits

0x657a,	// (0x00013649) video4_image_uncrop_nhd_pane

0x63be,	// (0x0001348d) video4_image_uncrop_vga_pane_ParamLimits

0x63be,	// (0x0001348d) video4_image_uncrop_vga_pane

0xc87c,	// (0x0001994b) bg_tb_trans_pane_cp07

0x648b,	// (0x0001355a) vid4_indicators_pane_g1

0x6590,	// (0x0001365f) vid4_indicators_pane_g2

0x659d,	// (0x0001366c) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0001ca31) vid4_indicators_pane_g

0x65b6,	// (0x00013685) vid4_indicators_pane_t1

0x65c8,	// (0x00013697) cam4_autofocus_pane_g1

0x65d0,	// (0x0001369f) cam4_autofocus_pane_g2

0x65d8,	// (0x000136a7) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0001ca3c) cam4_autofocus_pane_g

0x65e0,	// (0x000136af) cam4_autofocus_pane_g3_copy1

0x5e5b,	// (0x00012f2a) video_down_pane_cp_t1

0x5e69,	// (0x00012f38) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0001c9c1) video_down_pane_cp_t

0x9607,	// (0x000166d6) popup_vitu2_window_ParamLimits

0x9607,	// (0x000166d6) popup_vitu2_window

0x65e8,	// (0x000136b7) aid_size_cell2_itu2_ParamLimits

0x65e8,	// (0x000136b7) aid_size_cell2_itu2

0x660e,	// (0x000136dd) aid_size_cell_itu2_ParamLimits

0x660e,	// (0x000136dd) aid_size_cell_itu2

0x666c,	// (0x0001373b) bg_popup_window_pane_cp09_ParamLimits

0x666c,	// (0x0001373b) bg_popup_window_pane_cp09

0x667a,	// (0x00013749) field_vitu2_entry_pane_ParamLimits

0x667a,	// (0x00013749) field_vitu2_entry_pane

0x66a2,	// (0x00013771) grid_vitu2_function_pane_ParamLimits

0x66a2,	// (0x00013771) grid_vitu2_function_pane

0x66f3,	// (0x000137c2) grid_vitu2_itu_pane_ParamLimits

0x66f3,	// (0x000137c2) grid_vitu2_itu_pane

0x677e,	// (0x0001384d) cell_vitu2_itu_pane_ParamLimits

0x677e,	// (0x0001384d) cell_vitu2_itu_pane

0x67a4,	// (0x00013873) cell_vitu2_function_pane_ParamLimits

0x67a4,	// (0x00013873) cell_vitu2_function_pane

0xd145,	// (0x0001a214) bg_popup_call_pane_cp08_ParamLimits

0xd145,	// (0x0001a214) bg_popup_call_pane_cp08

0xd15e,	// (0x0001a22d) field_vitu2_entry_pane_g1

0xd16a,	// (0x0001a239) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0001ca43) field_vitu2_entry_pane_g

0x67e8,	// (0x000138b7) field_vitu2_entry_pane_t1_ParamLimits

0x67e8,	// (0x000138b7) field_vitu2_entry_pane_t1

0xd184,	// (0x0001a253) field_vitu2_entry_pane_t2_ParamLimits

0xd184,	// (0x0001a253) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0001ca4a) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0001ca4a) field_vitu2_entry_pane_t

0x6805,	// (0x000138d4) bg_button_pane_cp010_ParamLimits

0x6805,	// (0x000138d4) bg_button_pane_cp010

0x6813,	// (0x000138e2) cell_vitu2_itu_pane_g1

0x6831,	// (0x00013900) cell_vitu2_itu_pane_t1_ParamLimits

0x6831,	// (0x00013900) cell_vitu2_itu_pane_t1

0x6897,	// (0x00013966) cell_vitu2_itu_pane_t2_ParamLimits

0x6897,	// (0x00013966) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0001ca54) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0001ca54) cell_vitu2_itu_pane_t

0x9607,	// (0x000166d6) bg_button_pane_cp011

0x6973,	// (0x00013a42) cell_vitu2_function_pane_g1

0x9596,	// (0x00016665) main_myfav_hc_pane

0x6227,	// (0x000132f6) popup_image3_note_pane_ParamLimits

0x6227,	// (0x000132f6) popup_image3_note_pane

0x6243,	// (0x00013312) popup_image3_tool_bar_pane_ParamLimits

0x6243,	// (0x00013312) popup_image3_tool_bar_pane

0x691b,	// (0x000139ea) cell_vitu2_itu_pane_t3_ParamLimits

0x691b,	// (0x000139ea) cell_vitu2_itu_pane_t3

0x9596,	// (0x00016665) bg_popup_trans_pane

0xd1a9,	// (0x0001a278) grid_image3_tool_bar_pane

0xd1b3,	// (0x0001a282) bg_popup_trans_pane_g1

0xa32e,	// (0x000173fd) bg_popup_trans_pane_g2

0xd1bb,	// (0x0001a28a) bg_popup_trans_pane_g3

0xd1c3,	// (0x0001a292) bg_popup_trans_pane_g4

0xd1cb,	// (0x0001a29a) bg_popup_trans_pane_g5

0xd1d3,	// (0x0001a2a2) bg_popup_trans_pane_g6

0xd1db,	// (0x0001a2aa) bg_popup_trans_pane_g7

0xd1e3,	// (0x0001a2b2) bg_popup_trans_pane_g8

0xa30e,	// (0x000173dd) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0001ca5b) bg_popup_trans_pane_g

0xd1eb,	// (0x0001a2ba) cell_image3_tool_bar_pane_ParamLimits

0xd1eb,	// (0x0001a2ba) cell_image3_tool_bar_pane

0xc44a,	// (0x00019519) cell_image3_tool_bar_pane_g1

0x9596,	// (0x00016665) bg_popup_trans_pane_cp1

0xd201,	// (0x0001a2d0) popup_image3_note_pane_t1

0xd20f,	// (0x0001a2de) popup_image3_note_pane_t2

0xd21d,	// (0x0001a2ec) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0001ca6e) popup_image3_note_pane_t

0xd22d,	// (0x0001a2fc) popup_image3_note_pane_t3_copy1

0x6987,	// (0x00013a56) bg_myfav_hc_instruction_pane_ParamLimits

0x6987,	// (0x00013a56) bg_myfav_hc_instruction_pane

0x699f,	// (0x00013a6e) cell_myfav_contact_pane_ParamLimits

0x699f,	// (0x00013a6e) cell_myfav_contact_pane

0x69bb,	// (0x00013a8a) cell_myfav_contact_pane_cp1_ParamLimits

0x69bb,	// (0x00013a8a) cell_myfav_contact_pane_cp1

0x69d3,	// (0x00013aa2) cell_myfav_contact_pane_cp2_ParamLimits

0x69d3,	// (0x00013aa2) cell_myfav_contact_pane_cp2

0x69eb,	// (0x00013aba) cell_myfav_contact_pane_cp3_ParamLimits

0x69eb,	// (0x00013aba) cell_myfav_contact_pane_cp3

0x6a02,	// (0x00013ad1) cell_myfav_contact_pane_cp4_ParamLimits

0x6a02,	// (0x00013ad1) cell_myfav_contact_pane_cp4

0x6a1a,	// (0x00013ae9) cell_myfav_contact_pane_cp5_ParamLimits

0x6a1a,	// (0x00013ae9) cell_myfav_contact_pane_cp5

0x6a2e,	// (0x00013afd) cell_myfav_contact_pane_cp6_ParamLimits

0x6a2e,	// (0x00013afd) cell_myfav_contact_pane_cp6

0x6a44,	// (0x00013b13) cell_myfav_contact_pane_cp7_ParamLimits

0x6a44,	// (0x00013b13) cell_myfav_contact_pane_cp7

0xd23b,	// (0x0001a30a) listscroll_gen_pane_cp05

0x6a5c,	// (0x00013b2b) main_myfav_hc_pane_g1_ParamLimits

0x6a5c,	// (0x00013b2b) main_myfav_hc_pane_g1

0x6a76,	// (0x00013b45) main_myfav_hc_pane_g2_ParamLimits

0x6a76,	// (0x00013b45) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0001ca75) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0001ca75) main_myfav_hc_pane_g

0x6aaa,	// (0x00013b79) main_myfav_hc_pane_t1_ParamLimits

0x6aaa,	// (0x00013b79) main_myfav_hc_pane_t1

0xd244,	// (0x0001a313) main_myfav_hc_pane_t2_ParamLimits

0xd244,	// (0x0001a313) main_myfav_hc_pane_t2

0xd256,	// (0x0001a325) main_myfav_hc_pane_t3_ParamLimits

0xd256,	// (0x0001a325) main_myfav_hc_pane_t3

0x6ac1,	// (0x00013b90) main_myfav_hc_pane_t4_ParamLimits

0x6ac1,	// (0x00013b90) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0001ca7c) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0001ca7c) main_myfav_hc_pane_t

0xc44a,	// (0x00019519) bg_myfav_hc_instruction_pane_g1

0xd268,	// (0x0001a337) cell_myfav_contact_pane_g1_ParamLimits

0xd268,	// (0x0001a337) cell_myfav_contact_pane_g1

0xd268,	// (0x0001a337) cell_myfav_contact_pane_g2_ParamLimits

0xd268,	// (0x0001a337) cell_myfav_contact_pane_g2

0xd274,	// (0x0001a343) cell_myfav_contact_pane_g3_ParamLimits

0xd274,	// (0x0001a343) cell_myfav_contact_pane_g3

0xc753,	// (0x00019822) cell_myfav_contact_pane_g4_ParamLimits

0xc753,	// (0x00019822) cell_myfav_contact_pane_g4

0xd281,	// (0x0001a350) cell_myfav_contact_pane_g5_ParamLimits

0xd281,	// (0x0001a350) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0001ca87) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0001ca87) cell_myfav_contact_pane_g

0x6a90,	// (0x00013b5f) main_myfav_hc_pane_g3_ParamLimits

0x6a90,	// (0x00013b5f) main_myfav_hc_pane_g3

0x125d,	// (0x0000e32c) popup_adpt_find_window

0x6aeb,	// (0x00013bba) afind_page_pane_ParamLimits

0x6aeb,	// (0x00013bba) afind_page_pane

0x6b00,	// (0x00013bcf) aid_size_cell_afind_ParamLimits

0x6b00,	// (0x00013bcf) aid_size_cell_afind

0x6b1e,	// (0x00013bed) bg_popup_sub_pane_cp09_ParamLimits

0x6b1e,	// (0x00013bed) bg_popup_sub_pane_cp09

0x6b2b,	// (0x00013bfa) find_pane_cp01_ParamLimits

0x6b2b,	// (0x00013bfa) find_pane_cp01

0xd28d,	// (0x0001a35c) grid_afind_control_pane_ParamLimits

0xd28d,	// (0x0001a35c) grid_afind_control_pane

0x6b38,	// (0x00013c07) grid_afind_pane_ParamLimits

0x6b38,	// (0x00013c07) grid_afind_pane

0x6b5a,	// (0x00013c29) cell_afind_pane_ParamLimits

0x6b5a,	// (0x00013c29) cell_afind_pane

0xc44a,	// (0x00019519) afind_page_pane_g1

0x6bc1,	// (0x00013c90) afind_page_pane_g2

0x6bca,	// (0x00013c99) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0001ca92) afind_page_pane_g

0x6bd3,	// (0x00013ca2) afind_page_pane_t1

0xd2a1,	// (0x0001a370) cell_afind_grid_control_pane_ParamLimits

0xd2a1,	// (0x0001a370) cell_afind_grid_control_pane

0xcfce,	// (0x0001a09d) bg_button_pane_cp69_ParamLimits

0xcfce,	// (0x0001a09d) bg_button_pane_cp69

0x6bf3,	// (0x00013cc2) cell_afind_pane_g1_ParamLimits

0x6bf3,	// (0x00013cc2) cell_afind_pane_g1

0x6c00,	// (0x00013ccf) cell_afind_pane_t1_ParamLimits

0x6c00,	// (0x00013ccf) cell_afind_pane_t1

0xa05f,	// (0x0001712e) bg_button_pane_cp72

0xd2b0,	// (0x0001a37f) cell_afind_grid_control_pane_g1

0x3b2f,	// (0x00010bfe) aid_image_placing_area_ParamLimits

0x3b2f,	// (0x00010bfe) aid_image_placing_area

0xca8d,	// (0x00019b5c) field_vitu_entry_pane_g1_ParamLimits

0xca8d,	// (0x00019b5c) field_vitu_entry_pane_g1

0xca99,	// (0x00019b68) field_vitu_entry_pane_g2_ParamLimits

0xca99,	// (0x00019b68) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0001c94c) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0001c94c) field_vitu_entry_pane_g

0x5c69,	// (0x00012d38) cell_vitu_itu_pane_g1_ParamLimits

0x5cab,	// (0x00012d7a) cell_vitu_itu_pane_t3_ParamLimits

0x5cab,	// (0x00012d7a) cell_vitu_itu_pane_t3

0xcf7e,	// (0x0001a04d) mp4_progress_pane_t1_ParamLimits

0xcf97,	// (0x0001a066) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0001c9e1) mp4_progress_pane_t_ParamLimits

0xcfb0,	// (0x0001a07f) mup_progress_pane_cp04_ParamLimits

0x6ad5,	// (0x00013ba4) main_myfav_hc_pane_t5_ParamLimits

0x6ad5,	// (0x00013ba4) main_myfav_hc_pane_t5

0x95bc,	// (0x0001668b) aid_zoom_text_primary

0x125d,	// (0x0000e32c) popup_adpt_find_window_ParamLimits

0x9607,	// (0x000166d6) main_cam_set_pane

0x63f0,	// (0x000134bf) cam4_zoom_pane_ParamLimits

0x63f0,	// (0x000134bf) cam4_zoom_pane

0x6c12,	// (0x00013ce1) main_cam_set_pane_g1_ParamLimits

0x6c12,	// (0x00013ce1) main_cam_set_pane_g1

0x6c20,	// (0x00013cef) main_cam_set_pane_g2_ParamLimits

0x6c20,	// (0x00013cef) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0001ca99) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0001ca99) main_cam_set_pane_g

0x6c43,	// (0x00013d12) main_cam_set_pane_t1_ParamLimits

0x6c43,	// (0x00013d12) main_cam_set_pane_t1

0x6c5e,	// (0x00013d2d) main_cset_listscroll_pane_ParamLimits

0x6c5e,	// (0x00013d2d) main_cset_listscroll_pane

0x6c82,	// (0x00013d51) main_cset_slider_pane_ParamLimits

0x6c82,	// (0x00013d51) main_cset_slider_pane

0xd2c1,	// (0x0001a390) main_cset_list_pane_ParamLimits

0xd2c1,	// (0x0001a390) main_cset_list_pane

0xd2d1,	// (0x0001a3a0) scroll_pane_cp028

0x6cac,	// (0x00013d7b) aid_area_touch_slider

0x6cc8,	// (0x00013d97) cset_slider_pane

0x6cf2,	// (0x00013dc1) main_cset_slider_pane_g1

0x6d07,	// (0x00013dd6) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0001ca9e) main_cset_slider_pane_g

0xd30a,	// (0x0001a3d9) main_cset_slider_pane_t1

0x6dc9,	// (0x00013e98) main_cset_slider_pane_t2

0x6de3,	// (0x00013eb2) main_cset_slider_pane_t3

0x6dfd,	// (0x00013ecc) main_cset_slider_pane_t4

0x6e17,	// (0x00013ee6) main_cset_slider_pane_t5

0x6e35,	// (0x00013f04) main_cset_slider_pane_t6

0x6e4c,	// (0x00013f1b) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0001cac3) main_cset_slider_pane_t

0x6f58,	// (0x00014027) cset_list_set_pane_ParamLimits

0x6f58,	// (0x00014027) cset_list_set_pane

0x6f6c,	// (0x0001403b) aid_position_infowindow_above

0x6f74,	// (0x00014043) aid_position_infowindow_below

0xd3aa,	// (0x0001a479) cset_list_set_pane_g1_ParamLimits

0xd3aa,	// (0x0001a479) cset_list_set_pane_g1

0x6f7c,	// (0x0001404b) cset_list_set_pane_g3_ParamLimits

0x6f7c,	// (0x0001404b) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0001cae2) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0001cae2) cset_list_set_pane_g

0x6f8b,	// (0x0001405a) cset_list_set_pane_t1_ParamLimits

0x6f8b,	// (0x0001405a) cset_list_set_pane_t1

0x9607,	// (0x000166d6) list_highlight_pane_cp021_ParamLimits

0x9607,	// (0x000166d6) list_highlight_pane_cp021

0xac00,	// (0x00017ccf) cset_slider_pane_g1

0xac12,	// (0x00017ce1) cset_slider_pane_g2

0xac09,	// (0x00017cd8) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0001cae7) cset_slider_pane_g

0xd3b6,	// (0x0001a485) aid_area_touch_cam4_zoom

0xd3be,	// (0x0001a48d) cam4_zoom_cont_pane

0xd3c6,	// (0x0001a495) cam4_zoom_pane_g1

0xd3ce,	// (0x0001a49d) cam4_zoom_pane_g2

0x6fa0,	// (0x0001406f) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0001caee) cam4_zoom_pane_g

0xd3d6,	// (0x0001a4a5) cam4_zoom_cont_pane_g1

0xd3df,	// (0x0001a4ae) cam4_zoom_cont_pane_g2

0xd3e8,	// (0x0001a4b7) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0001caf5) cam4_zoom_cont_pane_g

0x62af,	// (0x0001337e) call4_image_pane_ParamLimits

0x62af,	// (0x0001337e) call4_image_pane

0xd00e,	// (0x0001a0dd) call4_windows_conf_pane_ParamLimits

0xd055,	// (0x0001a124) popup_call4_audio_in_window_ParamLimits

0xd055,	// (0x0001a124) popup_call4_audio_in_window

0x9596,	// (0x00016665) bg_popup_call2_act_pane_cp02

0xd0cd,	// (0x0001a19c) call4_list_conf_pane

0xc44a,	// (0x00019519) call4_image_pane_g1

0xc44a,	// (0x00019519) call4_image_pane_g2

0x0001,

0xf743,	// (0x0001c812) call4_image_pane_g

0xd3f1,	// (0x0001a4c0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3f1,	// (0x0001a4c0) list_single_graphic_popup_conf4_pane

0x9596,	// (0x00016665) list_highlight_pane_cp022

0xd406,	// (0x0001a4d5) list_single_graphic_popup_conf4_pane_g1

0xa8da,	// (0x000179a9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0001cafc) list_single_graphic_popup_conf4_pane_g

0xd40e,	// (0x0001a4dd) list_single_graphic_popup_conf4_pane_t1

0x208b,	// (0x0000f15a) popup_vtel_slider_window_ParamLimits

0x208b,	// (0x0000f15a) popup_vtel_slider_window

0xcfbc,	// (0x0001a08b) dialer2_ne_pane_t2_ParamLimits

0xcfbc,	// (0x0001a08b) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0001c9e6) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0001c9e6) dialer2_ne_pane_t

0xc229,	// (0x000192f8) bg_popup_sub_pane_cp010_ParamLimits

0xc229,	// (0x000192f8) bg_popup_sub_pane_cp010

0x6fa8,	// (0x00014077) popup_vtel_slider_window_g1_ParamLimits

0x6fa8,	// (0x00014077) popup_vtel_slider_window_g1

0x6fbb,	// (0x0001408a) popup_vtel_slider_window_g2_ParamLimits

0x6fbb,	// (0x0001408a) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0001cb01) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0001cb01) popup_vtel_slider_window_g

0x7011,	// (0x000140e0) vtel_slider_pane_ParamLimits

0x7011,	// (0x000140e0) vtel_slider_pane

0x7033,	// (0x00014102) vtel_slider_pane_g1_ParamLimits

0x7033,	// (0x00014102) vtel_slider_pane_g1

0x7047,	// (0x00014116) vtel_slider_pane_g2_ParamLimits

0x7047,	// (0x00014116) vtel_slider_pane_g2

0x705f,	// (0x0001412e) vtel_slider_pane_g3_ParamLimits

0x705f,	// (0x0001412e) vtel_slider_pane_g3

0x7033,	// (0x00014102) vtel_slider_pane_g4_ParamLimits

0x7033,	// (0x00014102) vtel_slider_pane_g4

0x7075,	// (0x00014144) vtel_slider_pane_g5_ParamLimits

0x7075,	// (0x00014144) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0001cb0a) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0001cb0a) vtel_slider_pane_g

0x9596,	// (0x00016665) main_gallery2_pane

0x663a,	// (0x00013709) aid_size_row_itut2_dropdow_list_ParamLimits

0x663a,	// (0x00013709) aid_size_row_itut2_dropdow_list

0x66ca,	// (0x00013799) grid_vitu2_function_top_pane_ParamLimits

0x66ca,	// (0x00013799) grid_vitu2_function_top_pane

0x6729,	// (0x000137f8) popup_vitu2_dropdown_list_window_ParamLimits

0x6729,	// (0x000137f8) popup_vitu2_dropdown_list_window

0x6752,	// (0x00013821) popup_vitu2_match_list_window

0x708b,	// (0x0001415a) cell_vitu2_function_top_pane_ParamLimits

0x708b,	// (0x0001415a) cell_vitu2_function_top_pane

0x70ab,	// (0x0001417a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x70ab,	// (0x0001417a) cell_vitu2_function_top_pane_cp01

0x70c9,	// (0x00014198) cell_vitu2_function_top_wide_pane_ParamLimits

0x70c9,	// (0x00014198) cell_vitu2_function_top_wide_pane

0x9607,	// (0x000166d6) bg_button_pane_cp012

0x70e7,	// (0x000141b6) cell_vitu2_function_top_pane_g1

0xd42a,	// (0x0001a4f9) bg_button_pane_cp013_ParamLimits

0xd42a,	// (0x0001a4f9) bg_button_pane_cp013

0x70fb,	// (0x000141ca) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70fb,	// (0x000141ca) cell_vitu2_function_top_wide_pane_g1

0x9607,	// (0x000166d6) bg_popup_sub_pane_cp20

0x7113,	// (0x000141e2) list_vitu2_match_list_pane

0xd1b3,	// (0x0001a282) bg_popup_sub_pane_cp20_g1

0xd1bb,	// (0x0001a28a) bg_popup_sub_pane_cp20_g2

0xa32e,	// (0x000173fd) bg_popup_sub_pane_cp20_g3

0xd1c3,	// (0x0001a292) bg_popup_sub_pane_cp20_g4

0xa30e,	// (0x000173dd) bg_popup_sub_pane_cp20_g5

0xd446,	// (0x0001a515) bg_popup_sub_pane_cp20_g6

0xd1d3,	// (0x0001a2a2) bg_popup_sub_pane_cp20_g7

0xd1db,	// (0x0001a2aa) bg_popup_sub_pane_cp20_g8

0xd1e3,	// (0x0001a2b2) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0001cb15) bg_popup_sub_pane_cp20_g

0xd44e,	// (0x0001a51d) list_vitu2_match_list_item_pane_ParamLimits

0xd44e,	// (0x0001a51d) list_vitu2_match_list_item_pane

0xd460,	// (0x0001a52f) list_vitu2_match_list_item_pane_t1

0x9596,	// (0x00016665) bg_popup_sub_pane_cp21

0xa794,	// (0x00017863) grid_vitu2_dropdown_list_pane

0x715d,	// (0x0001422c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x715d,	// (0x0001422c) cell_vitu2_dropdown_list_char_pane

0x7180,	// (0x0001424f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7180,	// (0x0001424f) cell_vitu2_dropdown_list_ctrl_pane

0xd486,	// (0x0001a555) cell_vitu2_dropdown_list_char_pane_g1

0xd48f,	// (0x0001a55e) cell_vitu2_dropdown_list_char_pane_g2

0xd498,	// (0x0001a567) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0001cb32) cell_vitu2_dropdown_list_char_pane_g

0x71ae,	// (0x0001427d) cell_vitu2_dropdown_list_char_pane_t1

0x71bc,	// (0x0001428b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71bc,	// (0x0001428b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71cc,	// (0x0001429b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71cc,	// (0x0001429b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71dd,	// (0x000142ac) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71dd,	// (0x000142ac) cell_vitu2_dropdown_list_ctrl_pane_g3

0x71ed,	// (0x000142bc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x71ed,	// (0x000142bc) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc67a,	// (0x00019749) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc67a,	// (0x00019749) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0001cb39) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0001cb39) cell_vitu2_dropdown_list_ctrl_pane_g

0x7209,	// (0x000142d8) aid_size_cell_gallery2_ParamLimits

0x7209,	// (0x000142d8) aid_size_cell_gallery2

0x721f,	// (0x000142ee) grid_gallery2_pane_ParamLimits

0x721f,	// (0x000142ee) grid_gallery2_pane

0x7233,	// (0x00014302) scroll_pane_cp029_ParamLimits

0x7233,	// (0x00014302) scroll_pane_cp029

0x723f,	// (0x0001430e) cell_gallery2_pane_ParamLimits

0x723f,	// (0x0001430e) cell_gallery2_pane

0xd4a1,	// (0x0001a570) cell_gallery2_pane_g2

0x7279,	// (0x00014348) cell_gallery2_pane_g3

0xd4ab,	// (0x0001a57a) cell_gallery2_pane_g4

0xd4b3,	// (0x0001a582) cell_gallery2_pane_g5

0xaaa8,	// (0x00017b77) grid_highlight_pane_cp10

0x6752,	// (0x00013821) popup_vitu2_match_list_window_ParamLimits

0x6769,	// (0x00013838) popup_vitu2_query_window_ParamLimits

0x6769,	// (0x00013838) popup_vitu2_query_window

0x9596,	// (0x00016665) bg_vitu2_candi_button_pane

0xd486,	// (0x0001a555) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd48f,	// (0x0001a55e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd498,	// (0x0001a567) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7281,	// (0x00014350) bg_button_pane_cp015

0x728b,	// (0x0001435a) bg_button_pane_cp016

0x7295,	// (0x00014364) bg_button_pane_cp017

0x9607,	// (0x000166d6) bg_popup_sub_pane_cp22

0xd4bb,	// (0x0001a58a) popup_vitu2_query_window_g1

0x72bd,	// (0x0001438c) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0001cb44) popup_vitu2_query_window_g

0x72cb,	// (0x0001439a) popup_vitu2_query_window_t1_ParamLimits

0x72cb,	// (0x0001439a) popup_vitu2_query_window_t1

0x72f3,	// (0x000143c2) popup_vitu2_query_window_t2_ParamLimits

0x72f3,	// (0x000143c2) popup_vitu2_query_window_t2

0x7305,	// (0x000143d4) popup_vitu2_query_window_t3_ParamLimits

0x7305,	// (0x000143d4) popup_vitu2_query_window_t3

0x732d,	// (0x000143fc) popup_vitu2_query_window_t4_ParamLimits

0x732d,	// (0x000143fc) popup_vitu2_query_window_t4

0x7341,	// (0x00014410) popup_vitu2_query_window_t5_ParamLimits

0x7341,	// (0x00014410) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0001cb49) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0001cb49) popup_vitu2_query_window_t

0xd2b9,	// (0x0001a388) main_cset_text_pane

0x6cac,	// (0x00013d7b) aid_area_touch_slider_ParamLimits

0x6cc8,	// (0x00013d97) cset_slider_pane_ParamLimits

0x6cf2,	// (0x00013dc1) main_cset_slider_pane_g1_ParamLimits

0x6d07,	// (0x00013dd6) main_cset_slider_pane_g2_ParamLimits

0xd2da,	// (0x0001a3a9) main_cset_slider_pane_g3_ParamLimits

0xd2da,	// (0x0001a3a9) main_cset_slider_pane_g3

0x6d1c,	// (0x00013deb) main_cset_slider_pane_g4_ParamLimits

0x6d1c,	// (0x00013deb) main_cset_slider_pane_g4

0x6d2b,	// (0x00013dfa) main_cset_slider_pane_g5_ParamLimits

0x6d2b,	// (0x00013dfa) main_cset_slider_pane_g5

0x6d39,	// (0x00013e08) main_cset_slider_pane_g6_ParamLimits

0x6d39,	// (0x00013e08) main_cset_slider_pane_g6

0xf9cf,	// (0x0001ca9e) main_cset_slider_pane_g_ParamLimits

0xd30a,	// (0x0001a3d9) main_cset_slider_pane_t1_ParamLimits

0x6dc9,	// (0x00013e98) main_cset_slider_pane_t2_ParamLimits

0x6de3,	// (0x00013eb2) main_cset_slider_pane_t3_ParamLimits

0x6dfd,	// (0x00013ecc) main_cset_slider_pane_t4_ParamLimits

0x6e17,	// (0x00013ee6) main_cset_slider_pane_t5_ParamLimits

0x6e35,	// (0x00013f04) main_cset_slider_pane_t6_ParamLimits

0x6e4c,	// (0x00013f1b) main_cset_slider_pane_t7_ParamLimits

0x6e7a,	// (0x00013f49) main_cset_slider_pane_t8_ParamLimits

0x6e7a,	// (0x00013f49) main_cset_slider_pane_t8

0x6ea2,	// (0x00013f71) main_cset_slider_pane_t9_ParamLimits

0x6ea2,	// (0x00013f71) main_cset_slider_pane_t9

0x6eca,	// (0x00013f99) main_cset_slider_pane_t10_ParamLimits

0x6eca,	// (0x00013f99) main_cset_slider_pane_t10

0x6ef2,	// (0x00013fc1) main_cset_slider_pane_t11_ParamLimits

0x6ef2,	// (0x00013fc1) main_cset_slider_pane_t11

0x6f1c,	// (0x00013feb) main_cset_slider_pane_t12_ParamLimits

0x6f1c,	// (0x00013feb) main_cset_slider_pane_t12

0x6f39,	// (0x00014008) main_cset_slider_pane_t13_ParamLimits

0x6f39,	// (0x00014008) main_cset_slider_pane_t13

0xf9f4,	// (0x0001cac3) main_cset_slider_pane_t_ParamLimits

0x9596,	// (0x00016665) bg_popup_sub_pane_cp011

0xd4c7,	// (0x0001a596) main_cset_text_pane_g1

0xd4cf,	// (0x0001a59e) main_cset_text_pane_t1

0xd4dd,	// (0x0001a5ac) main_cset_text_pane_t2

0xd4eb,	// (0x0001a5ba) main_cset_text_pane_t3

0xd4f9,	// (0x0001a5c8) main_cset_text_pane_t4

0xd507,	// (0x0001a5d6) main_cset_text_pane_t5

0xd515,	// (0x0001a5e4) main_cset_text_pane_t6

0xd523,	// (0x0001a5f2) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0001cb54) main_cset_text_pane_t

0x9596,	// (0x00016665) main_cam4_burst_pane

0x9596,	// (0x00016665) main_cam5_pane

0x6be1,	// (0x00013cb0) bg_button_pane_cp019

0x6bea,	// (0x00013cb9) bg_button_pane_cp020

0xd2e6,	// (0x0001a3b5) main_cset_slider_pane_g7_ParamLimits

0xd2e6,	// (0x0001a3b5) main_cset_slider_pane_g7

0xd2f2,	// (0x0001a3c1) main_cset_slider_pane_g8_ParamLimits

0xd2f2,	// (0x0001a3c1) main_cset_slider_pane_g8

0x6d4d,	// (0x00013e1c) main_cset_slider_pane_g9_ParamLimits

0x6d4d,	// (0x00013e1c) main_cset_slider_pane_g9

0x6d59,	// (0x00013e28) main_cset_slider_pane_g10_ParamLimits

0x6d59,	// (0x00013e28) main_cset_slider_pane_g10

0x6d65,	// (0x00013e34) main_cset_slider_pane_g11_ParamLimits

0x6d65,	// (0x00013e34) main_cset_slider_pane_g11

0x6d71,	// (0x00013e40) main_cset_slider_pane_g12_ParamLimits

0x6d71,	// (0x00013e40) main_cset_slider_pane_g12

0x6d7d,	// (0x00013e4c) main_cset_slider_pane_g13_ParamLimits

0x6d7d,	// (0x00013e4c) main_cset_slider_pane_g13

0x6d89,	// (0x00013e58) main_cset_slider_pane_g14_ParamLimits

0x6d89,	// (0x00013e58) main_cset_slider_pane_g14

0x6d95,	// (0x00013e64) main_cset_slider_pane_g15_ParamLimits

0x6d95,	// (0x00013e64) main_cset_slider_pane_g15

0xd338,	// (0x0001a407) main_cset_slider_pane_t14_ParamLimits

0xd338,	// (0x0001a407) main_cset_slider_pane_t14

0xd371,	// (0x0001a440) main_cset_slider_pane_t15_ParamLimits

0xd371,	// (0x0001a440) main_cset_slider_pane_t15

0x7355,	// (0x00014424) aid_cam4_burst_size_cell_ParamLimits

0x7355,	// (0x00014424) aid_cam4_burst_size_cell

0x7375,	// (0x00014444) grid_cam4_burst_pane_ParamLimits

0x7375,	// (0x00014444) grid_cam4_burst_pane

0x73af,	// (0x0001447e) linegrid_cam4_burst_pane_ParamLimits

0x73af,	// (0x0001447e) linegrid_cam4_burst_pane

0x73d3,	// (0x000144a2) scroll_pane_cp30_ParamLimits

0x73d3,	// (0x000144a2) scroll_pane_cp30

0x73df,	// (0x000144ae) cell_cam4_burst_pane_ParamLimits

0x73df,	// (0x000144ae) cell_cam4_burst_pane

0xd531,	// (0x0001a600) linegrid_cam4_burst_pane_g1_ParamLimits

0xd531,	// (0x0001a600) linegrid_cam4_burst_pane_g1

0x7434,	// (0x00014503) linegrid_cam4_burst_pane_g2_ParamLimits

0x7434,	// (0x00014503) linegrid_cam4_burst_pane_g2

0xd53e,	// (0x0001a60d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd53e,	// (0x0001a60d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0001cb63) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0001cb63) linegrid_cam4_burst_pane_g

0x7445,	// (0x00014514) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7445,	// (0x00014514) linegrid_cam4_burst_pane_g3_copy1

0xd54b,	// (0x0001a61a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd54b,	// (0x0001a61a) linegrid_cam4_burst_pane_g4

0x7463,	// (0x00014532) linegrid_cam4_burst_pane_g5_ParamLimits

0x7463,	// (0x00014532) linegrid_cam4_burst_pane_g5

0x7474,	// (0x00014543) linegrid_cam4_burst_pane_g6_ParamLimits

0x7474,	// (0x00014543) linegrid_cam4_burst_pane_g6

0xd558,	// (0x0001a627) linegrid_cam4_burst_pane_g7_ParamLimits

0xd558,	// (0x0001a627) linegrid_cam4_burst_pane_g7

0x748b,	// (0x0001455a) cell_cam4_burst_pane_g1

0xd571,	// (0x0001a640) main_cam5_pane_t1_ParamLimits

0xd571,	// (0x0001a640) main_cam5_pane_t1

0xd583,	// (0x0001a652) main_cam5_pane_t2_ParamLimits

0xd583,	// (0x0001a652) main_cam5_pane_t2

0xd595,	// (0x0001a664) main_cam5_pane_t3_ParamLimits

0xd595,	// (0x0001a664) main_cam5_pane_t3

0xd5a7,	// (0x0001a676) main_cam5_pane_t4_ParamLimits

0xd5a7,	// (0x0001a676) main_cam5_pane_t4

0xd5bf,	// (0x0001a68e) main_cam5_pane_t5_ParamLimits

0xd5bf,	// (0x0001a68e) main_cam5_pane_t5

0xd5d3,	// (0x0001a6a2) main_cam5_pane_t6_ParamLimits

0xd5d3,	// (0x0001a6a2) main_cam5_pane_t6

0xd5e7,	// (0x0001a6b6) main_cam5_pane_t7_ParamLimits

0xd5e7,	// (0x0001a6b6) main_cam5_pane_t7

0xd5f9,	// (0x0001a6c8) main_cam5_pane_t8_ParamLimits

0xd5f9,	// (0x0001a6c8) main_cam5_pane_t8

0xd617,	// (0x0001a6e6) main_cam5_pane_t9_ParamLimits

0xd617,	// (0x0001a6e6) main_cam5_pane_t9

0xd629,	// (0x0001a6f8) main_cam5_pane_t10_ParamLimits

0xd629,	// (0x0001a6f8) main_cam5_pane_t10

0xd63b,	// (0x0001a70a) main_cam5_pane_t11_ParamLimits

0xd63b,	// (0x0001a70a) main_cam5_pane_t11

0xd64f,	// (0x0001a71e) main_cam5_pane_t12_ParamLimits

0xd64f,	// (0x0001a71e) main_cam5_pane_t12

0xd666,	// (0x0001a735) main_cam5_pane_t13_ParamLimits

0xd666,	// (0x0001a735) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0001cb6f) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0001cb6f) main_cam5_pane_t

0x12e1,	// (0x0000e3b0) popup_scut_keymap_window_ParamLimits

0x12e1,	// (0x0000e3b0) popup_scut_keymap_window

0x749e,	// (0x0001456d) aid_size_cell_brow_shortcut

0xaaa8,	// (0x00017b77) bg_popup_window_pane_cp010

0x74aa,	// (0x00014579) grid_scut_pane

0x74b6,	// (0x00014585) cell_scut_pane_ParamLimits

0x74b6,	// (0x00014585) cell_scut_pane

0x74cf,	// (0x0001459e) cell_scut_pane_g1

0xd689,	// (0x0001a758) cell_scut_pane_t1

0xd698,	// (0x0001a767) cell_scut_pane_t2

0x74d8,	// (0x000145a7) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0001cb8a) cell_scut_pane_t

0x5168,	// (0x00012237) main_mup3_pane_g8_ParamLimits

0x5168,	// (0x00012237) main_mup3_pane_g8

0x6654,	// (0x00013723) area_vitu2_query_pane_ParamLimits

0x6654,	// (0x00013723) area_vitu2_query_pane

0x729f,	// (0x0001436e) input_focus_pane_cp08

0xd6a7,	// (0x0001a776) area_vitu2_query_pane_g1

0x74e6,	// (0x000145b5) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0001cb91) area_vitu2_query_pane_g

0x74f7,	// (0x000145c6) area_vitu2_query_pane_t1_ParamLimits

0x74f7,	// (0x000145c6) area_vitu2_query_pane_t1

0x750b,	// (0x000145da) area_vitu2_query_pane_t2_ParamLimits

0x750b,	// (0x000145da) area_vitu2_query_pane_t2

0x751f,	// (0x000145ee) area_vitu2_query_pane_t3_ParamLimits

0x751f,	// (0x000145ee) area_vitu2_query_pane_t3

0xd6b3,	// (0x0001a782) area_vitu2_query_pane_t4_ParamLimits

0xd6b3,	// (0x0001a782) area_vitu2_query_pane_t4

0xd6db,	// (0x0001a7aa) area_vitu2_query_pane_t5_ParamLimits

0xd6db,	// (0x0001a7aa) area_vitu2_query_pane_t5

0xd703,	// (0x0001a7d2) area_vitu2_query_pane_t6_ParamLimits

0xd703,	// (0x0001a7d2) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0001cb96) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0001cb96) area_vitu2_query_pane_t

0x7547,	// (0x00014616) bg_button_pane_cp018

0x7555,	// (0x00014624) bg_button_pane_cp021

0x7561,	// (0x00014630) bg_button_pane_cp022

0x7572,	// (0x00014641) input_focus_pane_cp09

0x304c,	// (0x0001011b) aid_size_touch_mv_arrow_left

0x3075,	// (0x00010144) aid_size_touch_mv_arrow_right

0x6dad,	// (0x00013e7c) main_cset_slider_pane_g16_ParamLimits

0x6dad,	// (0x00013e7c) main_cset_slider_pane_g16

0x6dbb,	// (0x00013e8a) main_cset_slider_pane_g17_ParamLimits

0x6dbb,	// (0x00013e8a) main_cset_slider_pane_g17

0x748b,	// (0x0001455a) cell_cam4_burst_pane_g1_ParamLimits

0x9596,	// (0x00016665) compa_mode_pane

0x6fcb,	// (0x0001409a) popup_vtel_slider_window_g3_ParamLimits

0x6fcb,	// (0x0001409a) popup_vtel_slider_window_g3

0x6fe2,	// (0x000140b1) popup_vtel_slider_window_g4_ParamLimits

0x6fe2,	// (0x000140b1) popup_vtel_slider_window_g4

0x6ff9,	// (0x000140c8) popup_vtel_slider_window_t1_ParamLimits

0x6ff9,	// (0x000140c8) popup_vtel_slider_window_t1

0x9596,	// (0x00016665) main_cl_pane

0xbf41,	// (0x00019010) popup_imed_adjust2_window_ParamLimits

0xbf15,	// (0x00018fe4) bg_tb_trans_pane_cp05_ParamLimits

0xc9c2,	// (0x00019a91) popup_imed_adjust2_window_g1_ParamLimits

0xc9d1,	// (0x00019aa0) popup_imed_adjust2_window_g2_ParamLimits

0xc9d1,	// (0x00019aa0) popup_imed_adjust2_window_g2

0xc9dd,	// (0x00019aac) popup_imed_adjust2_window_g3_ParamLimits

0xc9dd,	// (0x00019aac) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0001c910) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0001c910) popup_imed_adjust2_window_g

0xc9e9,	// (0x00019ab8) popup_imed_adjust2_window_t1_ParamLimits

0xca01,	// (0x00019ad0) slider_imed_adjust_pane_ParamLimits

0xca15,	// (0x00019ae4) slider_imed_adjust_pane_g1_ParamLimits

0xca25,	// (0x00019af4) slider_imed_adjust_pane_g2_ParamLimits

0xca35,	// (0x00019b04) slider_imed_adjust_pane_g3_ParamLimits

0xca46,	// (0x00019b15) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0001c917) slider_imed_adjust_pane_g_ParamLimits

0x6390,	// (0x0001345f) aid_touch_area_cam4_ParamLimits

0x6390,	// (0x0001345f) aid_touch_area_cam4

0xd117,	// (0x0001a1e6) battery_pane_cp01

0x6447,	// (0x00013516) main_camera4_pane_g6_ParamLimits

0x6447,	// (0x00013516) main_camera4_pane_g6

0x646a,	// (0x00013539) main_camera4_pane_t2_ParamLimits

0x646a,	// (0x00013539) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0001ca1a) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0001ca1a) main_camera4_pane_t

0x64c2,	// (0x00013591) aid_touch_area_vid4_ParamLimits

0x64c2,	// (0x00013591) aid_touch_area_vid4

0x6520,	// (0x000135ef) main_video4_pane_g5_ParamLimits

0x6520,	// (0x000135ef) main_video4_pane_g5

0x6547,	// (0x00013616) vid4_progress_pane_ParamLimits

0x6547,	// (0x00013616) vid4_progress_pane

0xd2fe,	// (0x0001a3cd) main_cset_slider_pane_g18_ParamLimits

0xd2fe,	// (0x0001a3cd) main_cset_slider_pane_g18

0xd565,	// (0x0001a634) cell_cam4_burst_pane_g2_ParamLimits

0xd565,	// (0x0001a634) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0001cb6a) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0001cb6a) cell_cam4_burst_pane_g

0x9d70,	// (0x00016e3f) bg_cl_pane_ParamLimits

0x9d70,	// (0x00016e3f) bg_cl_pane

0x7583,	// (0x00014652) cl_header_pane_ParamLimits

0x7583,	// (0x00014652) cl_header_pane

0x7597,	// (0x00014666) cl_listscroll_pane_ParamLimits

0x7597,	// (0x00014666) cl_listscroll_pane

0xd74f,	// (0x0001a81e) bg_cl_pane_g1

0xd757,	// (0x0001a826) bg_cl_pane_g2

0xd75f,	// (0x0001a82e) bg_cl_pane_g3

0xd767,	// (0x0001a836) bg_cl_pane_g4

0xd76f,	// (0x0001a83e) bg_cl_pane_g5

0xd777,	// (0x0001a846) bg_cl_pane_g6

0xd77f,	// (0x0001a84e) bg_cl_pane_g7

0xd787,	// (0x0001a856) bg_cl_pane_g8

0xd78f,	// (0x0001a85e) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0001cba5) bg_cl_pane_g

0x75a7,	// (0x00014676) aid_height_cl_leading_ParamLimits

0x75a7,	// (0x00014676) aid_height_cl_leading

0x75b3,	// (0x00014682) aid_height_cl_text_ParamLimits

0x75b3,	// (0x00014682) aid_height_cl_text

0x9607,	// (0x000166d6) bg_cl_header_pane_ParamLimits

0x9607,	// (0x000166d6) bg_cl_header_pane

0x75d2,	// (0x000146a1) cl_header_pane_g1_ParamLimits

0x75d2,	// (0x000146a1) cl_header_pane_g1

0x75e8,	// (0x000146b7) cl_header_pane_t1_ParamLimits

0x75e8,	// (0x000146b7) cl_header_pane_t1

0xd797,	// (0x0001a866) cl_list_pane

0xd2d1,	// (0x0001a3a0) hc_scroll_pane_cp01

0xa30e,	// (0x000173dd) bg_cl_header_pane_g1

0xd1b3,	// (0x0001a282) bg_cl_header_pane_g2

0xa32e,	// (0x000173fd) bg_cl_header_pane_g3

0xd1c3,	// (0x0001a292) bg_cl_header_pane_g4

0xd1bb,	// (0x0001a28a) bg_cl_header_pane_g5

0xd446,	// (0x0001a515) bg_cl_header_pane_g6

0xd1db,	// (0x0001a2aa) bg_cl_header_pane_g7

0xd1e3,	// (0x0001a2b2) bg_cl_header_pane_g8

0xd1d3,	// (0x0001a2a2) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0001cbb8) bg_cl_header_pane_g

0x7601,	// (0x000146d0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7601,	// (0x000146d0) hc_cl_list_double_graphic_heading_pane

0x7614,	// (0x000146e3) hc_cl_list_single_graphic_pane_ParamLimits

0x7614,	// (0x000146e3) hc_cl_list_single_graphic_pane

0x762c,	// (0x000146fb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x762c,	// (0x000146fb) hc_cl_list_single_graphic_pane_g1

0x7638,	// (0x00014707) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7638,	// (0x00014707) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0001cbcb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0001cbcb) hc_cl_list_single_graphic_pane_g

0x764c,	// (0x0001471b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x764c,	// (0x0001471b) hc_cl_list_single_graphic_pane_t1

0x762c,	// (0x000146fb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x762c,	// (0x000146fb) hc_cl_list_double_graphic_heading_pane_g1

0x7661,	// (0x00014730) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7661,	// (0x00014730) hc_cl_list_double_graphic_heading_pane_g2

0x7675,	// (0x00014744) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7675,	// (0x00014744) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0001cbd0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0001cbd0) hc_cl_list_double_graphic_heading_pane_g

0x7689,	// (0x00014758) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7689,	// (0x00014758) hc_cl_list_double_graphic_heading_pane_t1

0x769e,	// (0x0001476d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x769e,	// (0x0001476d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0001cbd7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0001cbd7) hc_cl_list_double_graphic_heading_pane_t

0xd7a8,	// (0x0001a877) vid4_progress_pane_g1

0xd7b4,	// (0x0001a883) vid4_progress_pane_g2

0xd7c0,	// (0x0001a88f) vid4_progress_pane_g3

0xd7cf,	// (0x0001a89e) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0001cbdc) vid4_progress_pane_g

0xd7ed,	// (0x0001a8bc) vid4_progress_pane_t1

0xd803,	// (0x0001a8d2) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0001cbe7) vid4_progress_pane_t

0xd82e,	// (0x0001a8fd) wait_bar_pane_cp07

0xc237,	// (0x00019306) blid_firmament_pane_ParamLimits

0xc27a,	// (0x00019349) popup_blid_sat_info2_window_g1

0xc29e,	// (0x0001936d) popup_blid_sat_info2_window_t3

0xc2ac,	// (0x0001937b) popup_blid_sat_info2_window_t4

0xc2ba,	// (0x00019389) popup_blid_sat_info2_window_t5

0xc2c8,	// (0x00019397) popup_blid_sat_info2_window_t6

0xc2d8,	// (0x000193a7) popup_blid_sat_info2_window_t7

0xc2e6,	// (0x000193b5) popup_blid_sat_info2_window_t8

0xc2f4,	// (0x000193c3) popup_blid_sat_info2_window_t9

0xc302,	// (0x000193d1) popup_blid_sat_info2_window_t10

0xc3ca,	// (0x00019499) aid_firma_cardinal_ParamLimits

0xc3de,	// (0x000194ad) blid_firmament_pane_t1_ParamLimits

0xc3f5,	// (0x000194c4) blid_firmament_pane_t2_ParamLimits

0xc40c,	// (0x000194db) blid_firmament_pane_t3_ParamLimits

0xc423,	// (0x000194f2) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0001c809) blid_firmament_pane_t_ParamLimits

0xc43a,	// (0x00019509) blid_sat_info_pane_ParamLimits

0x9607,	// (0x000166d6) main_cam_set_pane_ParamLimits

0x5a15,	// (0x00012ae4) aid_size_cell_colour_35_ParamLimits

0x5a35,	// (0x00012b04) aid_size_cell_colour_112_ParamLimits

0x5a55,	// (0x00012b24) aid_size_cell_effect_ParamLimits

0xbf15,	// (0x00018fe4) bg_tb_trans_pane_cp02_ParamLimits

0xa52e,	// (0x000175fd) heading_imed_pane_ParamLimits

0x5a75,	// (0x00012b44) listscroll_imed_pane_ParamLimits

0xb543,	// (0x00018612) popup_call2_audio_first_window_g5_ParamLimits

0xb543,	// (0x00018612) popup_call2_audio_first_window_g5

0x603a,	// (0x00013109) aid_size_touch_image3_arrow_left_ParamLimits

0x603a,	// (0x00013109) aid_size_touch_image3_arrow_left

0x6066,	// (0x00013135) aid_size_touch_image3_arrow_right_ParamLimits

0x6066,	// (0x00013135) aid_size_touch_image3_arrow_right

0xd819,	// (0x0001a8e8) vid4_progress_pane_t3

0x5d92,	// (0x00012e61) main_hwr_training_symbol_option_pane_ParamLimits

0x5d92,	// (0x00012e61) main_hwr_training_symbol_option_pane

0xccb1,	// (0x00019d80) popup_hwr_training_preview_window_ParamLimits

0xccb1,	// (0x00019d80) popup_hwr_training_preview_window

0x5db2,	// (0x00012e81) hwr_training_navi_pane_g5_ParamLimits

0x5db2,	// (0x00012e81) hwr_training_navi_pane_g5

0xd1a1,	// (0x0001a270) popup_char_count_window

0x9607,	// (0x000166d6) bg_popup_sub_pane_cp20_ParamLimits

0x7113,	// (0x000141e2) list_vitu2_match_list_pane_ParamLimits

0x7122,	// (0x000141f1) vitu2_page_scroll_pane_ParamLimits

0x7122,	// (0x000141f1) vitu2_page_scroll_pane

0xd89a,	// (0x0001a969) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd89a,	// (0x0001a969) list_single_hwr_training_symbol_option_pane

0xd8ad,	// (0x0001a97c) list_single_hwr_training_symbol_option_pane_g1

0xd8b5,	// (0x0001a984) list_single_hwr_training_symbol_option_pane_t1

0xd8c3,	// (0x0001a992) bg_button_pane_cp023

0xd8cc,	// (0x0001a99b) bg_button_pane_cp024

0x76bd,	// (0x0001478c) vitu2_page_scroll_pane_g1

0x76c5,	// (0x00014794) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0001cbee) vitu2_page_scroll_pane_g

0x76cf,	// (0x0001479e) vitu2_page_scroll_pane_t1

0xc153,	// (0x00019222) popup_char_count_window_g1

0xd8ff,	// (0x0001a9ce) popup_char_count_window_g2

0xd908,	// (0x0001a9d7) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0001cbf3) popup_char_count_window_g

0xd911,	// (0x0001a9e0) popup_char_count_window_t1

0x9596,	// (0x00016665) main_vded2_pane

0xc9ae,	// (0x00019a7d) aid_size_cell_imed_line

0xc9b8,	// (0x00019a87) grid_imed_line_width_pane

0x65aa,	// (0x00013679) vid4_indicators_pane_g4

0xd91f,	// (0x0001a9ee) cell_imed_line_width_pane_ParamLimits

0xd91f,	// (0x0001a9ee) cell_imed_line_width_pane

0xd935,	// (0x0001aa04) cell_imed_line_width_pane_g1

0xd93e,	// (0x0001aa0d) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0001cbfa) cell_imed_line_width_pane_g

0x76de,	// (0x000147ad) main_vded2_pane_g1_ParamLimits

0x76de,	// (0x000147ad) main_vded2_pane_g1

0x76f9,	// (0x000147c8) main_vded2_pane_g2_ParamLimits

0x76f9,	// (0x000147c8) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0001cbff) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0001cbff) main_vded2_pane_g

0x770b,	// (0x000147da) vded2_slider_pane_ParamLimits

0x770b,	// (0x000147da) vded2_slider_pane

0x771b,	// (0x000147ea) aid_size_touch_vded2_end

0x7725,	// (0x000147f4) aid_size_touch_vded2_playhead

0xd946,	// (0x0001aa15) aid_size_touch_vded2_start

0xd94e,	// (0x0001aa1d) vded2_slider_bg_pane

0xd957,	// (0x0001aa26) vded2_slider_pane_g1

0xd960,	// (0x0001aa2f) vded2_slider_pane_g2

0x772f,	// (0x000147fe) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0001cc04) vded2_slider_pane_g

0xc88a,	// (0x00019959) vded2_slider_bg_pane_g1

0xc893,	// (0x00019962) vded2_slider_bg_pane_g2

0xc89c,	// (0x0001996b) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0001cc0b) vded2_slider_bg_pane_g

0x376c,	// (0x0001083b) aid_postcard_touch_down_pane_ParamLimits

0x376c,	// (0x0001083b) aid_postcard_touch_down_pane

0x3784,	// (0x00010853) aid_postcard_touch_up_pane_ParamLimits

0x3784,	// (0x00010853) aid_postcard_touch_up_pane

0x9596,	// (0x00016665) main_blid2_pane

0xbf23,	// (0x00018ff2) popup_blid2_search_window

0x9596,	// (0x00016665) blid2_gps_pane

0x9596,	// (0x00016665) blid2_navig_pane

0x9596,	// (0x00016665) blid2_search_pane

0x9596,	// (0x00016665) blid2_tripm_pane

0x773a,	// (0x00014809) blid2_search_pane_g1_ParamLimits

0x773a,	// (0x00014809) blid2_search_pane_g1

0x7752,	// (0x00014821) blid2_search_pane_t1_ParamLimits

0x7752,	// (0x00014821) blid2_search_pane_t1

0x7764,	// (0x00014833) aid_size_cell_blid2_gps_ParamLimits

0x7764,	// (0x00014833) aid_size_cell_blid2_gps

0x777c,	// (0x0001484b) blid2_gps_pane_g1_ParamLimits

0x777c,	// (0x0001484b) blid2_gps_pane_g1

0x7790,	// (0x0001485f) grid_blid2_satellite_pane_ParamLimits

0x7790,	// (0x0001485f) grid_blid2_satellite_pane

0x77a8,	// (0x00014877) blid2_navig_pane_g1_ParamLimits

0x77a8,	// (0x00014877) blid2_navig_pane_g1

0x77b4,	// (0x00014883) blid2_navig_pane_t1_ParamLimits

0x77b4,	// (0x00014883) blid2_navig_pane_t1

0x77cf,	// (0x0001489e) blid2_navig_pane_t2_ParamLimits

0x77cf,	// (0x0001489e) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0001cc12) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0001cc12) blid2_navig_pane_t

0x77ea,	// (0x000148b9) blid2_navig_ring_pane_ParamLimits

0x77ea,	// (0x000148b9) blid2_navig_ring_pane

0x7805,	// (0x000148d4) blid2_speed_pane_ParamLimits

0x7805,	// (0x000148d4) blid2_speed_pane

0x7811,	// (0x000148e0) blid2_tripm_pane_g1_ParamLimits

0x7811,	// (0x000148e0) blid2_tripm_pane_g1

0x782c,	// (0x000148fb) blid2_tripm_pane_g2_ParamLimits

0x782c,	// (0x000148fb) blid2_tripm_pane_g2

0x7840,	// (0x0001490f) blid2_tripm_pane_g3_ParamLimits

0x7840,	// (0x0001490f) blid2_tripm_pane_g3

0x7854,	// (0x00014923) blid2_tripm_pane_g4_ParamLimits

0x7854,	// (0x00014923) blid2_tripm_pane_g4

0x7868,	// (0x00014937) blid2_tripm_pane_g5_ParamLimits

0x7868,	// (0x00014937) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0001cc17) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0001cc17) blid2_tripm_pane_g

0x788e,	// (0x0001495d) blid2_tripm_pane_t1_ParamLimits

0x788e,	// (0x0001495d) blid2_tripm_pane_t1

0x78a9,	// (0x00014978) blid2_tripm_pane_t2_ParamLimits

0x78a9,	// (0x00014978) blid2_tripm_pane_t2

0x78c2,	// (0x00014991) blid2_tripm_pane_t3_ParamLimits

0x78c2,	// (0x00014991) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0001cc24) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0001cc24) blid2_tripm_pane_t

0x7909,	// (0x000149d8) cell_blid2_satellite_pane_ParamLimits

0x7909,	// (0x000149d8) cell_blid2_satellite_pane

0x7925,	// (0x000149f4) cell_blid2_satellite_pane_g1

0xd968,	// (0x0001aa37) cell_blid2_satellite_pane_t1

0xc44a,	// (0x00019519) blid2_speed_pane_g1

0xd976,	// (0x0001aa45) blid2_speed_pane_t1

0xd984,	// (0x0001aa53) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0001cc2d) blid2_speed_pane_t

0xc44a,	// (0x00019519) blid2_navig_ring_pane_g1

0x792e,	// (0x000149fd) blid2_navig_ring_pane_g2

0x7936,	// (0x00014a05) blid2_navig_ring_pane_g3

0x793e,	// (0x00014a0d) blid2_navig_ring_pane_g4

0x7946,	// (0x00014a15) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0001cc32) blid2_navig_ring_pane_g

0x9596,	// (0x00016665) bg_popup_window_pane_cp011

0xd992,	// (0x0001aa61) popup_blid2_search_window_g1

0xd99a,	// (0x0001aa69) popup_blid2_search_window_t1

0xd9a8,	// (0x0001aa77) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0001cc3d) popup_blid2_search_window_t

0xa21d,	// (0x000172ec) main_browser_pane_g1

0x9d70,	// (0x00016e3f) main_browser_pane_ParamLimits

0x9607,	// (0x000166d6) bg_button_pane_cp011_ParamLimits

0x6973,	// (0x00013a42) cell_vitu2_function_pane_g1_ParamLimits

0x9607,	// (0x000166d6) bg_popup_sub_pane_cp22_ParamLimits

0x729f,	// (0x0001436e) input_focus_pane_cp08_ParamLimits

0x72ac,	// (0x0001437b) popup_vitu2_query_button_pane_ParamLimits

0x72ac,	// (0x0001437b) popup_vitu2_query_button_pane

0x7281,	// (0x00014350) popup_vitu2_query_input_button_pane

0xd4bb,	// (0x0001a58a) popup_vitu2_query_window_g1_ParamLimits

0x72bd,	// (0x0001438c) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0001cb44) popup_vitu2_query_window_g_ParamLimits

0x9596,	// (0x00016665) bg_button_pane_cp026

0x794e,	// (0x00014a1d) popup_vitu2_query_input_button_pane_g1

0x9596,	// (0x00016665) bg_button_pane_cp025

0xd9b6,	// (0x0001aa85) popup_vitu2_query_button_pane_t1

0x4e79,	// (0x00011f48) main_mp3_pane_t6

0x4e87,	// (0x00011f56) popup_slider_window_cp01

0xd129,	// (0x0001a1f8) cam4_battery_pane

0xd13b,	// (0x0001a20a) cam4_battery_pane_cp02

0x76b3,	// (0x00014782) cam4_battery_pane_cp01

0xd7a0,	// (0x0001a86f) cam4_battery_pane_cp03

0xc44a,	// (0x00019519) cam4_battery_pane_g1

0xd9c4,	// (0x0001aa93) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0001cc42) cam4_battery_pane_g

0xc310,	// (0x000193df) popup_blid_sat_info2_window_t11

0x304c,	// (0x0001011b) aid_size_touch_mv_arrow_left_ParamLimits

0x3075,	// (0x00010144) aid_size_touch_mv_arrow_right_ParamLimits

0xaa08,	// (0x00017ad7) navi_pane_g1_ParamLimits

0x309e,	// (0x0001016d) navi_pane_g2_ParamLimits

0x30cc,	// (0x0001019b) navi_pane_g3_ParamLimits

0xf44c,	// (0x0001c51b) navi_pane_g_ParamLimits

0x3126,	// (0x000101f5) navi_pane_mv_t1_ParamLimits

0x5a81,	// (0x00012b50) grid_imed_effect_pane_ParamLimits

0xa162,	// (0x00017231) aid_placing_vt_slider_lsc

0xa16a,	// (0x00017239) aid_placing_vt_slider_prt

0x9607,	// (0x000166d6) bg_tb_trans_pane_cp01_ParamLimits

0xc59a,	// (0x00019669) popup_image_details_window_g1_ParamLimits

0xc5ad,	// (0x0001967c) popup_image_details_window_g2_ParamLimits

0xc5c2,	// (0x00019691) popup_image_details_window_g3_ParamLimits

0xc5c2,	// (0x00019691) popup_image_details_window_g3

0xf77f,	// (0x0001c84e) popup_image_details_window_g_ParamLimits

0xc5d6,	// (0x000196a5) popup_image_details_window_t1_ParamLimits

0xc5e8,	// (0x000196b7) popup_image_details_window_t2_ParamLimits

0xc601,	// (0x000196d0) popup_image_details_window_t3_ParamLimits

0xc615,	// (0x000196e4) popup_image_details_window_t4_ParamLimits

0xc630,	// (0x000196ff) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0001c855) popup_image_details_window_t_ParamLimits

0x75bf,	// (0x0001468e) cl_header_name_pane_ParamLimits

0x75bf,	// (0x0001468e) cl_header_name_pane

0x7956,	// (0x00014a25) cl_header_name_pane_t1_ParamLimits

0x7956,	// (0x00014a25) cl_header_name_pane_t1

0x7977,	// (0x00014a46) cl_header_name_pane_t2_ParamLimits

0x7977,	// (0x00014a46) cl_header_name_pane_t2

0x79b9,	// (0x00014a88) cl_header_name_pane_t3_ParamLimits

0x79b9,	// (0x00014a88) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0001cc47) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0001cc47) cl_header_name_pane_t

0x30f7,	// (0x000101c6) navi_pane_mv_g2_ParamLimits

0xd15e,	// (0x0001a22d) field_vitu2_entry_pane_g1_ParamLimits

0xd16a,	// (0x0001a239) field_vitu2_entry_pane_g2_ParamLimits

0xd176,	// (0x0001a245) field_vitu2_entry_pane_g3_ParamLimits

0xd176,	// (0x0001a245) field_vitu2_entry_pane_g3

0xf974,	// (0x0001ca43) field_vitu2_entry_pane_g_ParamLimits

0x6813,	// (0x000138e2) cell_vitu2_itu_pane_g1_ParamLimits

0x6823,	// (0x000138f2) cell_vitu2_itu_pane_g2_ParamLimits

0x6823,	// (0x000138f2) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0001ca4f) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0001ca4f) cell_vitu2_itu_pane_g

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp05_ParamLimits

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp05

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp03

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp04

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp10_ParamLimits

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp10

0x7561,	// (0x00014630) bg_vkb2_func_pane_cp08

0x7547,	// (0x00014616) bg_vkb2_func_pane_cp06

0x7555,	// (0x00014624) bg_vkb2_func_pane_cp07

0xd8d5,	// (0x0001a9a4) bg_vkb2_func_pane_cp11_ParamLimits

0xd8d5,	// (0x0001a9a4) bg_vkb2_func_pane_cp11

0xd8ea,	// (0x0001a9b9) bg_vkb2_func_pane_cp12_ParamLimits

0xd8ea,	// (0x0001a9b9) bg_vkb2_func_pane_cp12

0x9596,	// (0x00016665) bg_vkb2_func_pane_cp09

0xd1b3,	// (0x0001a282) bg_vkb2_func_pane_g1

0xa32e,	// (0x000173fd) bg_vkb2_func_pane_g2

0xd1bb,	// (0x0001a28a) bg_vkb2_func_pane_g3

0xd1c3,	// (0x0001a292) bg_vkb2_func_pane_g4

0xd446,	// (0x0001a515) bg_vkb2_func_pane_g5

0xd1db,	// (0x0001a2aa) bg_vkb2_func_pane_g6

0xd1e3,	// (0x0001a2b2) bg_vkb2_func_pane_g7

0xd1d3,	// (0x0001a2a2) bg_vkb2_func_pane_g8

0xa30e,	// (0x000173dd) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0001cc4e) bg_vkb2_func_pane_g

0x787c,	// (0x0001494b) blid2_tripm_pane_g6_ParamLimits

0x787c,	// (0x0001494b) blid2_tripm_pane_g6

0xcf76,	// (0x0001a045) mp4_progress_pane_g1

0x78f5,	// (0x000149c4) blid2_tripm_values_pane_ParamLimits

0x78f5,	// (0x000149c4) blid2_tripm_values_pane

0x79ea,	// (0x00014ab9) blid2_tripm_values_pane_t1

0x79f8,	// (0x00014ac7) blid2_tripm_values_pane_t2

0x7a06,	// (0x00014ad5) blid2_tripm_values_pane_t3

0x7a14,	// (0x00014ae3) blid2_tripm_values_pane_t4

0x7a22,	// (0x00014af1) blid2_tripm_values_pane_t5

0x7a30,	// (0x00014aff) blid2_tripm_values_pane_t6

0x7a3e,	// (0x00014b0d) blid2_tripm_values_pane_t7

0x7a4c,	// (0x00014b1b) blid2_tripm_values_pane_t8

0x7a5a,	// (0x00014b29) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0001cc61) blid2_tripm_values_pane_t

0x2001,	// (0x0000f0d0) call_video_pane_t1_ParamLimits

0x2013,	// (0x0000f0e2) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0001c3a4) call_video_pane_t_ParamLimits

0x366f,	// (0x0001073e) msg_header_pane_g1_ParamLimits

0xac45,	// (0x00017d14) msg_header_pane_g2_ParamLimits

0xac45,	// (0x00017d14) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0001c5be) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0001c5be) msg_header_pane_g

0x9d70,	// (0x00016e3f) main_clock2_pane_ParamLimits

0x578f,	// (0x0001285e) grid_clock2_toolbar_pane_ParamLimits

0x578f,	// (0x0001285e) grid_clock2_toolbar_pane

0x578f,	// (0x0001285e) listscroll_clock2_pane_ParamLimits

0x578f,	// (0x0001285e) listscroll_clock2_pane

0x5873,	// (0x00012942) main_clock2_pane_t3_ParamLimits

0x5873,	// (0x00012942) main_clock2_pane_t3

0x588e,	// (0x0001295d) main_clock2_pane_t4_ParamLimits

0x588e,	// (0x0001295d) main_clock2_pane_t4

0xd9ce,	// (0x0001aa9d) cell_clock2_toolbar_pane

0xd9d6,	// (0x0001aaa5) cell_clock2_toolbar_pane_cp01

0xd9d6,	// (0x0001aaa5) cell_clock2_toolbar_pane_cp02

0xd9de,	// (0x0001aaad) cell_clock2_toolbar_pane_cp03

0xd9e6,	// (0x0001aab5) list_clock2_pane

0xa96e,	// (0x00017a3d) scroll_pane_cp10

0xd9ee,	// (0x0001aabd) list_single_clock2_pane_ParamLimits

0xd9ee,	// (0x0001aabd) list_single_clock2_pane

0xaaa8,	// (0x00017b77) list_highlight_pane_cp08

0xd9fb,	// (0x0001aaca) list_single_clock2_pane_t1

0xda09,	// (0x0001aad8) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0001cc74) list_single_clock2_pane_t

0x9596,	// (0x00016665) bg_button_pane_cp10

0xda17,	// (0x0001aae6) cell_clock2_toolbar_pane_g1

0x36f8,	// (0x000107c7) aid_main_viewer_pane_g1_ParamLimits

0x36f8,	// (0x000107c7) aid_main_viewer_pane_g1

0x3706,	// (0x000107d5) aid_main_viewer_pane_g2_ParamLimits

0x3706,	// (0x000107d5) aid_main_viewer_pane_g2

0x3714,	// (0x000107e3) aid_main_viewer_pane_g3_ParamLimits

0x3714,	// (0x000107e3) aid_main_viewer_pane_g3

0x3723,	// (0x000107f2) aid_main_viewer_pane_g4_ParamLimits

0x3723,	// (0x000107f2) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0001c5cf) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0001c5cf) aid_main_viewer_pane_g

0x407b,	// (0x0001114a) main_calc_pane_ParamLimits

0x408f,	// (0x0001115e) main_dialer2_pane_ParamLimits

0x9596,	// (0x00016665) main_cam6_pane

0x9596,	// (0x00016665) main_vid6_pane

0x579b,	// (0x0001286a) listscroll_gen_pane_cp06_ParamLimits

0x579b,	// (0x0001286a) listscroll_gen_pane_cp06

0x58a9,	// (0x00012978) main_clock2_pane_t5_ParamLimits

0x58a9,	// (0x00012978) main_clock2_pane_t5

0x5906,	// (0x000129d5) aid_call2_pane_cp10_ParamLimits

0x5918,	// (0x000129e7) aid_call_pane_cp10_ParamLimits

0xa9dd,	// (0x00017aac) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9dd,	// (0x00017aac) popup_clock_analogue_window_cp10_g2_ParamLimits

0x592a,	// (0x000129f9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x592a,	// (0x000129f9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9dd,	// (0x00017aac) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0001c905) popup_clock_analogue_window_cp10_g_ParamLimits

0x5940,	// (0x00012a0f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fe7,	// (0x000130b6) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fe7,	// (0x000130b6) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0001c9eb) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0001c9eb) cell_dialer2_keypad_pane_g

0x6003,	// (0x000130d2) cell_dialer2_keypad_pane_t1

0x6c9e,	// (0x00013d6d) main_cset_text2_pane_ParamLimits

0x6c9e,	// (0x00013d6d) main_cset_text2_pane

0xd6a7,	// (0x0001a776) area_vitu2_query_pane_g1_ParamLimits

0x74e6,	// (0x000145b5) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0001cb91) area_vitu2_query_pane_g_ParamLimits

0xd72b,	// (0x0001a7fa) area_vitu2_query_pane_t7_ParamLimits

0xd72b,	// (0x0001a7fa) area_vitu2_query_pane_t7

0x7547,	// (0x00014616) bg_button_pane_cp018_ParamLimits

0x7555,	// (0x00014624) bg_button_pane_cp021_ParamLimits

0x7561,	// (0x00014630) bg_button_pane_cp022_ParamLimits

0x7561,	// (0x00014630) bg_vkb2_func_pane_cp08_ParamLimits

0x7547,	// (0x00014616) bg_vkb2_func_pane_cp06_ParamLimits

0x7555,	// (0x00014624) bg_vkb2_func_pane_cp07_ParamLimits

0x7572,	// (0x00014641) input_focus_pane_cp09_ParamLimits

0xda1f,	// (0x0001aaee) cam6_autofocus_pane_ParamLimits

0xda1f,	// (0x0001aaee) cam6_autofocus_pane

0x7a68,	// (0x00014b37) cam6_image_uncrop_pane_ParamLimits

0x7a68,	// (0x00014b37) cam6_image_uncrop_pane

0x7a77,	// (0x00014b46) cam6_indi_pane_ParamLimits

0x7a77,	// (0x00014b46) cam6_indi_pane

0x7a8d,	// (0x00014b5c) cam6_mode_pane_ParamLimits

0x7a8d,	// (0x00014b5c) cam6_mode_pane

0x7a9f,	// (0x00014b6e) cam6_timer_pane_ParamLimits

0x7a9f,	// (0x00014b6e) cam6_timer_pane

0x7aab,	// (0x00014b7a) cam6_zoom_pane_ParamLimits

0x7aab,	// (0x00014b7a) cam6_zoom_pane

0x7ab9,	// (0x00014b88) cam6_mode_pane_g1_ParamLimits

0x7ab9,	// (0x00014b88) cam6_mode_pane_g1

0x7ac9,	// (0x00014b98) cam6_mode_pane_g2_ParamLimits

0x7ac9,	// (0x00014b98) cam6_mode_pane_g2

0x7ad9,	// (0x00014ba8) cam6_mode_pane_g3_ParamLimits

0x7ad9,	// (0x00014ba8) cam6_mode_pane_g3

0x7ae9,	// (0x00014bb8) cam6_mode_pane_g4_ParamLimits

0x7ae9,	// (0x00014bb8) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0001cc79) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0001cc79) cam6_mode_pane_g

0xda2d,	// (0x0001aafc) bg_tb_trans_pane_cp08_ParamLimits

0xda2d,	// (0x0001aafc) bg_tb_trans_pane_cp08

0xda3b,	// (0x0001ab0a) cam6_battery_pane_ParamLimits

0xda3b,	// (0x0001ab0a) cam6_battery_pane

0xda51,	// (0x0001ab20) cam6_indi_pane_g1_ParamLimits

0xda51,	// (0x0001ab20) cam6_indi_pane_g1

0xda63,	// (0x0001ab32) cam6_indi_pane_g2_ParamLimits

0xda63,	// (0x0001ab32) cam6_indi_pane_g2

0xda75,	// (0x0001ab44) cam6_indi_pane_g3_ParamLimits

0xda75,	// (0x0001ab44) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0001cc82) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0001cc82) cam6_indi_pane_g

0xda87,	// (0x0001ab56) cam6_indi_pane_t1_ParamLimits

0xda87,	// (0x0001ab56) cam6_indi_pane_t1

0x65c8,	// (0x00013697) cam6_autofocus_pane_g1

0x65d0,	// (0x0001369f) cam6_autofocus_pane_g2

0x65d8,	// (0x000136a7) cam6_autofocus_pane_g3

0x65e0,	// (0x000136af) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0001cc89) cam6_autofocus_pane_g

0xdaad,	// (0x0001ab7c) cam6_timer_pane_g1

0xdab5,	// (0x0001ab84) cam6_timer_pane_t1

0xdac3,	// (0x0001ab92) cam6_zoom_cont_pane

0xdacb,	// (0x0001ab9a) cam6_zoom_pane_g1

0xdad3,	// (0x0001aba2) cam6_zoom_pane_g2

0x7af9,	// (0x00014bc8) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0001cc92) cam6_zoom_pane_g

0xc44a,	// (0x00019519) cam6_battery_pane_g1

0xc44a,	// (0x00019519) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0001c812) cam6_battery_pane_g

0xdadb,	// (0x0001abaa) cam6_zoom_cont_pane_g1

0xdae4,	// (0x0001abb3) cam6_zoom_cont_pane_g2

0xdaed,	// (0x0001abbc) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0001cc99) cam6_zoom_cont_pane_g

0x7b16,	// (0x00014be5) cam6_mode_pane_cp_ParamLimits

0x7b16,	// (0x00014be5) cam6_mode_pane_cp

0x7aab,	// (0x00014b7a) cam6_zoom_pane_cp_ParamLimits

0x7aab,	// (0x00014b7a) cam6_zoom_pane_cp

0x7b28,	// (0x00014bf7) vid6_image_uncrop_cif_pane_ParamLimits

0x7b28,	// (0x00014bf7) vid6_image_uncrop_cif_pane

0x7b38,	// (0x00014c07) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b38,	// (0x00014c07) vid6_image_uncrop_nhd_pane

0x7a68,	// (0x00014b37) vid6_image_uncrop_vga_pane_ParamLimits

0x7a68,	// (0x00014b37) vid6_image_uncrop_vga_pane

0x7b47,	// (0x00014c16) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b47,	// (0x00014c16) vid6_image_uncrop_wvga_pane

0x7b56,	// (0x00014c25) vid6_indi_pane_ParamLimits

0x7b56,	// (0x00014c25) vid6_indi_pane

0xda2d,	// (0x0001aafc) bg_tb_trans_pane_cp09_ParamLimits

0xda2d,	// (0x0001aafc) bg_tb_trans_pane_cp09

0xdb05,	// (0x0001abd4) cam6_battery_pane_cp_ParamLimits

0xdb05,	// (0x0001abd4) cam6_battery_pane_cp

0xdb11,	// (0x0001abe0) vid6_indi_pane_g1_ParamLimits

0xdb11,	// (0x0001abe0) vid6_indi_pane_g1

0xdb23,	// (0x0001abf2) vid6_indi_pane_g2_ParamLimits

0xdb23,	// (0x0001abf2) vid6_indi_pane_g2

0xdb35,	// (0x0001ac04) vid6_indi_pane_g3_ParamLimits

0xdb35,	// (0x0001ac04) vid6_indi_pane_g3

0xdb4c,	// (0x0001ac1b) vid6_indi_pane_g4_ParamLimits

0xdb4c,	// (0x0001ac1b) vid6_indi_pane_g4

0xdb63,	// (0x0001ac32) vid6_indi_pane_g5_ParamLimits

0xdb63,	// (0x0001ac32) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0001cca0) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0001cca0) vid6_indi_pane_g

0xdb7d,	// (0x0001ac4c) vid6_indi_pane_t1_ParamLimits

0xdb7d,	// (0x0001ac4c) vid6_indi_pane_t1

0xdb93,	// (0x0001ac62) vid6_indi_pane_t2_ParamLimits

0xdb93,	// (0x0001ac62) vid6_indi_pane_t2

0xdbbb,	// (0x0001ac8a) vid6_indi_pane_t3_ParamLimits

0xdbbb,	// (0x0001ac8a) vid6_indi_pane_t3

0xdbe3,	// (0x0001acb2) vid6_indi_pane_t4_ParamLimits

0xdbe3,	// (0x0001acb2) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0001ccab) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0001ccab) vid6_indi_pane_t

0xdc07,	// (0x0001acd6) wait_bar_pane_cp08

0x7b6e,	// (0x00014c3d) main_cset_text2_pane_t1_ParamLimits

0x7b6e,	// (0x00014c3d) main_cset_text2_pane_t1

0x7b01,	// (0x00014bd0) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b01,	// (0x00014bd0) listscroll_gen_pane_cp06_t1

0x9596,	// (0x00016665) main_cam6_set_pane

0xc753,	// (0x00019822) bg_tb_trans_pane_cp06_ParamLimits

0x648b,	// (0x0001355a) cam4_indicators_pane_g1_ParamLimits

0x6498,	// (0x00013567) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0001ca1f) cam4_indicators_pane_g_ParamLimits

0x64b0,	// (0x0001357f) cam4_indicators_pane_t1_ParamLimits

0xc87c,	// (0x0001994b) bg_tb_trans_pane_cp07_ParamLimits

0x648b,	// (0x0001355a) vid4_indicators_pane_g1_ParamLimits

0x6590,	// (0x0001365f) vid4_indicators_pane_g2_ParamLimits

0x659d,	// (0x0001366c) vid4_indicators_pane_g3_ParamLimits

0x65aa,	// (0x00013679) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0001ca31) vid4_indicators_pane_g_ParamLimits

0x65b6,	// (0x00013685) vid4_indicators_pane_t1_ParamLimits

0xd7a8,	// (0x0001a877) vid4_progress_pane_g1_ParamLimits

0xd7b4,	// (0x0001a883) vid4_progress_pane_g2_ParamLimits

0xd7c0,	// (0x0001a88f) vid4_progress_pane_g3_ParamLimits

0xd7cf,	// (0x0001a89e) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0001cbdc) vid4_progress_pane_g_ParamLimits

0xd7ed,	// (0x0001a8bc) vid4_progress_pane_t1_ParamLimits

0xd803,	// (0x0001a8d2) vid4_progress_pane_t2_ParamLimits

0xd819,	// (0x0001a8e8) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0001cbe7) vid4_progress_pane_t_ParamLimits

0xd82e,	// (0x0001a8fd) wait_bar_pane_cp07_ParamLimits

0x7b8f,	// (0x00014c5e) main_cam6_set_pane_g2_ParamLimits

0x7b8f,	// (0x00014c5e) main_cam6_set_pane_g2

0x7bb5,	// (0x00014c84) main_cset6_listscroll_pane_ParamLimits

0x7bb5,	// (0x00014c84) main_cset6_listscroll_pane

0x7bd3,	// (0x00014ca2) main_cset6_slider_pane_ParamLimits

0x7bd3,	// (0x00014ca2) main_cset6_slider_pane

0x7be9,	// (0x00014cb8) main_cset6_text2_pane_ParamLimits

0x7be9,	// (0x00014cb8) main_cset6_text2_pane

0xdc16,	// (0x0001ace5) main_cset6_text_pane

0xdc1e,	// (0x0001aced) main_cset_list_pane_copy1_ParamLimits

0xdc1e,	// (0x0001aced) main_cset_list_pane_copy1

0xdc2e,	// (0x0001acfd) scroll_pane_cp028_copy1

0x7bf7,	// (0x00014cc6) cset_list_set_pane_copy1

0x7c0b,	// (0x00014cda) aid_position_infowindow_above_copy1

0x7c13,	// (0x00014ce2) aid_position_infowindow_below_copy1

0x7c1b,	// (0x00014cea) cset_list_set_pane_g1_copy1

0xdc37,	// (0x0001ad06) cset_list_set_pane_g3_copy1_ParamLimits

0xdc37,	// (0x0001ad06) cset_list_set_pane_g3_copy1

0xdc46,	// (0x0001ad15) cset_list_set_pane_t1_copy1_ParamLimits

0xdc46,	// (0x0001ad15) cset_list_set_pane_t1_copy1

0x9607,	// (0x000166d6) list_highlight_pane_cp021_copy1_ParamLimits

0x9607,	// (0x000166d6) list_highlight_pane_cp021_copy1

0xdc5b,	// (0x0001ad2a) cset6_slider_pane_ParamLimits

0xdc5b,	// (0x0001ad2a) cset6_slider_pane

0xdc87,	// (0x0001ad56) main_cset6_slider_pane_g1_ParamLimits

0xdc87,	// (0x0001ad56) main_cset6_slider_pane_g1

0x7c23,	// (0x00014cf2) main_cset6_slider_pane_g2_ParamLimits

0x7c23,	// (0x00014cf2) main_cset6_slider_pane_g2

0xdcaf,	// (0x0001ad7e) main_cset6_slider_pane_g3_ParamLimits

0xdcaf,	// (0x0001ad7e) main_cset6_slider_pane_g3

0x7c4b,	// (0x00014d1a) main_cset6_slider_pane_g4_ParamLimits

0x7c4b,	// (0x00014d1a) main_cset6_slider_pane_g4

0x7c57,	// (0x00014d26) main_cset6_slider_pane_g5_ParamLimits

0x7c57,	// (0x00014d26) main_cset6_slider_pane_g5

0xd2e6,	// (0x0001a3b5) main_cset6_slider_pane_g7_ParamLimits

0xd2e6,	// (0x0001a3b5) main_cset6_slider_pane_g7

0xd2f2,	// (0x0001a3c1) main_cset6_slider_pane_g8_ParamLimits

0xd2f2,	// (0x0001a3c1) main_cset6_slider_pane_g8

0x6d4d,	// (0x00013e1c) main_cset6_slider_pane_g9_ParamLimits

0x6d4d,	// (0x00013e1c) main_cset6_slider_pane_g9

0x6d59,	// (0x00013e28) main_cset6_slider_pane_g10_ParamLimits

0x6d59,	// (0x00013e28) main_cset6_slider_pane_g10

0x6d65,	// (0x00013e34) main_cset6_slider_pane_g11_ParamLimits

0x6d65,	// (0x00013e34) main_cset6_slider_pane_g11

0x6d71,	// (0x00013e40) main_cset6_slider_pane_g12_ParamLimits

0x6d71,	// (0x00013e40) main_cset6_slider_pane_g12

0x6d7d,	// (0x00013e4c) main_cset6_slider_pane_g13_ParamLimits

0x6d7d,	// (0x00013e4c) main_cset6_slider_pane_g13

0x6d89,	// (0x00013e58) main_cset6_slider_pane_g14_ParamLimits

0x6d89,	// (0x00013e58) main_cset6_slider_pane_g14

0x7c65,	// (0x00014d34) main_cset6_slider_pane_g15_ParamLimits

0x7c65,	// (0x00014d34) main_cset6_slider_pane_g15

0x6dad,	// (0x00013e7c) main_cset6_slider_pane_g16_ParamLimits

0x6dad,	// (0x00013e7c) main_cset6_slider_pane_g16

0x6dbb,	// (0x00013e8a) main_cset6_slider_pane_g17_ParamLimits

0x6dbb,	// (0x00013e8a) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0001ccb4) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0001ccb4) main_cset6_slider_pane_g

0xdcbb,	// (0x0001ad8a) main_cset6_slider_pane_t1_ParamLimits

0xdcbb,	// (0x0001ad8a) main_cset6_slider_pane_t1

0x7c95,	// (0x00014d64) main_cset6_slider_pane_t2_ParamLimits

0x7c95,	// (0x00014d64) main_cset6_slider_pane_t2

0x7cc0,	// (0x00014d8f) main_cset6_slider_pane_t3_ParamLimits

0x7cc0,	// (0x00014d8f) main_cset6_slider_pane_t3

0x7ceb,	// (0x00014dba) main_cset6_slider_pane_t4_ParamLimits

0x7ceb,	// (0x00014dba) main_cset6_slider_pane_t4

0x7d18,	// (0x00014de7) main_cset6_slider_pane_t5_ParamLimits

0x7d18,	// (0x00014de7) main_cset6_slider_pane_t5

0xdd0a,	// (0x0001add9) main_cset6_slider_pane_t7_ParamLimits

0xdd0a,	// (0x0001add9) main_cset6_slider_pane_t7

0x7d45,	// (0x00014e14) main_cset6_slider_pane_t8_ParamLimits

0x7d45,	// (0x00014e14) main_cset6_slider_pane_t8

0x7d69,	// (0x00014e38) main_cset6_slider_pane_t9_ParamLimits

0x7d69,	// (0x00014e38) main_cset6_slider_pane_t9

0x7d8d,	// (0x00014e5c) main_cset6_slider_pane_t10_ParamLimits

0x7d8d,	// (0x00014e5c) main_cset6_slider_pane_t10

0x7db1,	// (0x00014e80) main_cset6_slider_pane_t11_ParamLimits

0x7db1,	// (0x00014e80) main_cset6_slider_pane_t11

0xdd40,	// (0x0001ae0f) main_cset6_slider_pane_t14_ParamLimits

0xdd40,	// (0x0001ae0f) main_cset6_slider_pane_t14

0xdd79,	// (0x0001ae48) main_cset6_slider_pane_t15_ParamLimits

0xdd79,	// (0x0001ae48) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0001ccd9) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0001ccd9) main_cset6_slider_pane_t

0xd3d6,	// (0x0001a4a5) cset_slider_pane_g1_copy1

0xd3df,	// (0x0001a4ae) cset_slider_pane_g2_copy1

0xd3e8,	// (0x0001a4b7) cset_slider_pane_g3_copy1

0x9596,	// (0x00016665) bg_popup_sub_pane_cp011_copy1

0xd4c7,	// (0x0001a596) main_cset_text_pane_g1_copy1

0xd4cf,	// (0x0001a59e) main_cset_text_pane_t1_copy1

0xd4dd,	// (0x0001a5ac) main_cset_text_pane_t2_copy1

0xd4eb,	// (0x0001a5ba) main_cset_text_pane_t3_copy1

0xd4f9,	// (0x0001a5c8) main_cset_text_pane_t4_copy1

0xd507,	// (0x0001a5d6) main_cset_text_pane_t5_copy1

0xd515,	// (0x0001a5e4) main_cset_text_pane_t6_copy1

0xd523,	// (0x0001a5f2) main_cset_text_pane_t7_copy1

0x7b6e,	// (0x00014c3d) main_cset_text2_pane_t1_copy1

0x9596,	// (0x00016665) main_ncimui_pane

0x431d,	// (0x000113ec) popup_query_ncimui_window_ParamLimits

0x431d,	// (0x000113ec) popup_query_ncimui_window

0xc71b,	// (0x000197ea) field_cale_ev2_pane_g4_ParamLimits

0xc71b,	// (0x000197ea) field_cale_ev2_pane_g4

0x5eb2,	// (0x00012f81) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5eb2,	// (0x00012f81) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0001c9c6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0001c9c6) cell_video_dialer_keypad_pane_g

0x5eca,	// (0x00012f99) cell_video_dialer_keypad_pane_t1

0x9596,	// (0x00016665) bg_popup_window_pane_cp012

0xa85a,	// (0x00017929) heading_pane_cp06

0xdea1,	// (0x0001af70) ncim_query_content_pane

0x9596,	// (0x00016665) bg_popup_heading_pane_cp01

0xdea9,	// (0x0001af78) ncim_heading_pane_t1

0xdeb7,	// (0x0001af86) ncim_indicator_popup_pane

0xdec9,	// (0x0001af98) ncim_query_button_pane

0xdedf,	// (0x0001afae) ncim_query_content_pane_t1

0xdef1,	// (0x0001afc0) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0001cd18) ncim_query_content_pane_t

0xdf2b,	// (0x0001affa) ncim_query_list_pane

0xdf3d,	// (0x0001b00c) ncim_query_popup_pane

0xdeb7,	// (0x0001af86) ncim_indicator_popup_pane_ParamLimits

0x7e9d,	// (0x00014f6c) ncim_query_content_pane_g1_ParamLimits

0x7e9d,	// (0x00014f6c) ncim_query_content_pane_g1

0xdedf,	// (0x0001afae) ncim_query_content_pane_t1_ParamLimits

0xdef1,	// (0x0001afc0) ncim_query_content_pane_t2_ParamLimits

0x7ea9,	// (0x00014f78) ncim_query_content_pane_t3_ParamLimits

0x7ea9,	// (0x00014f78) ncim_query_content_pane_t3

0x7ed1,	// (0x00014fa0) ncim_query_content_pane_t4_ParamLimits

0x7ed1,	// (0x00014fa0) ncim_query_content_pane_t4

0x7ef9,	// (0x00014fc8) ncim_query_content_pane_t5_ParamLimits

0x7ef9,	// (0x00014fc8) ncim_query_content_pane_t5

0xdf03,	// (0x0001afd2) ncim_query_content_pane_t6_ParamLimits

0xdf03,	// (0x0001afd2) ncim_query_content_pane_t6

0xfc49,	// (0x0001cd18) ncim_query_content_pane_t_ParamLimits

0xdf2b,	// (0x0001affa) ncim_query_list_pane_ParamLimits

0xdf3d,	// (0x0001b00c) ncim_query_popup_pane_ParamLimits

0xdf51,	// (0x0001b020) wait_bar_pane_cp04

0x9596,	// (0x00016665) input_focus_pane_cp011

0xdf59,	// (0x0001b028) ncim_query_popup_pane_t1

0xdf67,	// (0x0001b036) ncim_list_query_list_pane_ParamLimits

0xdf67,	// (0x0001b036) ncim_list_query_list_pane

0x9596,	// (0x00016665) bg_button_pane_cp027

0xdf7a,	// (0x0001b049) ncim_query_button_pane_g1

0x9596,	// (0x00016665) list_highlight_pane_cp012

0xdf84,	// (0x0001b053) ncim_list_query_list_pane_g1

0xdf8c,	// (0x0001b05b) ncim_list_query_list_pane_t1

0x64a4,	// (0x00013573) cam4_indicators_pane_g3_ParamLimits

0x64a4,	// (0x00013573) cam4_indicators_pane_g3

0x64a4,	// (0x00013573) vid4_indicators_pane_g5_ParamLimits

0x64a4,	// (0x00013573) vid4_indicators_pane_g5

0xd7de,	// (0x0001a8ad) vid4_progress_pane_g5_ParamLimits

0xd7de,	// (0x0001a8ad) vid4_progress_pane_g5

0x7de5,	// (0x00014eb4) main_ncimui_pane_g1

0x7e2b,	// (0x00014efa) ncimui_group_query_pane_ParamLimits

0x7e2b,	// (0x00014efa) ncimui_group_query_pane

0x7e5f,	// (0x00014f2e) ncimui_list_pane_ParamLimits

0x7e5f,	// (0x00014f2e) ncimui_list_pane

0x7e79,	// (0x00014f48) ncimui_text_pane_ParamLimits

0x7e79,	// (0x00014f48) ncimui_text_pane

0x7f21,	// (0x00014ff0) ncimui_text_pane_t1_ParamLimits

0x7f21,	// (0x00014ff0) ncimui_text_pane_t1

0xdf9a,	// (0x0001b069) ncimui_list_single_graphic_pane_ParamLimits

0xdf9a,	// (0x0001b069) ncimui_list_single_graphic_pane

0x7f3e,	// (0x0001500d) ncimui_query_pane_ParamLimits

0x7f3e,	// (0x0001500d) ncimui_query_pane

0x9596,	// (0x00016665) list_highlight_pane_cp013

0xdfaa,	// (0x0001b079) ncim_list_query_list_pane_t1_copy1

0xdf84,	// (0x0001b053) ncim_list_single_graphic_pane_g1

0xdfb8,	// (0x0001b087) ncim_query_button_pane_cp01

0xdfc0,	// (0x0001b08f) ncim_query_entry_pane_ParamLimits

0xdfc0,	// (0x0001b08f) ncim_query_entry_pane

0xdfd0,	// (0x0001b09f) ncimui_query_pane_g1

0xdfd8,	// (0x0001b0a7) ncimui_query_pane_t1_ParamLimits

0xdfd8,	// (0x0001b0a7) ncimui_query_pane_t1

0x9596,	// (0x00016665) input_focus_pane_cp012

0xdf59,	// (0x0001b028) ncim_query_entry_pane_t1

0x9d70,	// (0x00016e3f) main_im_pane_ParamLimits

0x9607,	// (0x000166d6) main_mobtv_pane_ParamLimits

0x9607,	// (0x000166d6) main_mobtv_pane

0x7c7d,	// (0x00014d4c) main_cset6_slider_pane_g18_ParamLimits

0x7c7d,	// (0x00014d4c) main_cset6_slider_pane_g18

0x7c89,	// (0x00014d58) main_cset6_slider_pane_g19_ParamLimits

0x7c89,	// (0x00014d58) main_cset6_slider_pane_g19

0xdcfc,	// (0x0001adcb) bg_main_mobtv_pane_ParamLimits

0xdcfc,	// (0x0001adcb) bg_main_mobtv_pane

0x7f4e,	// (0x0001501d) main_mobtv_info_pane

0x7f59,	// (0x00015028) main_mobtv_loading_pane_ParamLimits

0x7f59,	// (0x00015028) main_mobtv_loading_pane

0xdfee,	// (0x0001b0bd) main_mobtv_pg_channel_list_pane

0xdff8,	// (0x0001b0c7) main_mobtv_pg_hdr_pane

0x7f66,	// (0x00015035) main_mobtv_programe_curr_pane_ParamLimits

0x7f66,	// (0x00015035) main_mobtv_programe_curr_pane

0x7f73,	// (0x00015042) main_mobtv_programe_next_pane_ParamLimits

0x7f73,	// (0x00015042) main_mobtv_programe_next_pane

0xe001,	// (0x0001b0d0) popup_mobtv_noti_window

0xc44a,	// (0x00019519) main_tv_pg_hdr_pane_g1

0xe00b,	// (0x0001b0da) main_tv_pg_hdr_pane_g2

0xe013,	// (0x0001b0e2) main_tv_pg_hdr_pane_g3

0xe01b,	// (0x0001b0ea) main_tv_pg_hdr_pane_g4

0xe023,	// (0x0001b0f2) main_tv_pg_hdr_pane_g5

0xe02d,	// (0x0001b0fc) main_tv_pg_hdr_pane_g6

0xe037,	// (0x0001b106) main_tv_pg_hdr_pane_g7

0xe041,	// (0x0001b110) main_tv_pg_hdr_pane_g8

0xe04b,	// (0x0001b11a) main_tv_pg_hdr_pane_g9

0xe055,	// (0x0001b124) main_tv_pg_hdr_pane_g10

0xe05f,	// (0x0001b12e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0001cd25) main_tv_pg_hdr_pane_g

0xe069,	// (0x0001b138) main_tv_pg_hdr_pane_t1

0xe077,	// (0x0001b146) main_tv_pg_hdr_pane_t2

0xe085,	// (0x0001b154) main_tv_pg_hdr_pane_t3

0xe095,	// (0x0001b164) main_tv_pg_hdr_pane_t4

0xe0a5,	// (0x0001b174) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0001cd3c) main_tv_pg_hdr_pane_t

0xe0b5,	// (0x0001b184) single_mobtv_pg_channel_pane_ParamLimits

0xe0b5,	// (0x0001b184) single_mobtv_pg_channel_pane

0xe0c7,	// (0x0001b196) single_mobtv_pg_channel_table_pane

0xe0d0,	// (0x0001b19f) single_mobtv_pg_channel_thumb_pane

0xe0d9,	// (0x0001b1a8) single_tv_pg_channel_pane_g1

0xe0e2,	// (0x0001b1b1) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0001cd47) single_tv_pg_channel_pane_g

0xc67a,	// (0x00019749) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc67a,	// (0x00019749) bg_single_mobtv_pg_channel_thumb_pane

0xe0eb,	// (0x0001b1ba) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe0eb,	// (0x0001b1ba) single_mobtv_pg_channel_thumb_pane_g1

0xe0f9,	// (0x0001b1c8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe0f9,	// (0x0001b1c8) single_mobtv_pg_channel_thumb_pane_g2

0xe105,	// (0x0001b1d4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe105,	// (0x0001b1d4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0001cd4c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0001cd4c) single_mobtv_pg_channel_thumb_pane_g

0xe111,	// (0x0001b1e0) single_mobtv_pg_channel_thumb_pane_t1

0xe11f,	// (0x0001b1ee) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0001cd53) single_mobtv_pg_channel_thumb_pane_t

0xc44a,	// (0x00019519) bg_single_mobtv_pg_channel_table_pane_g1

0xc44a,	// (0x00019519) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0001c812) bg_single_mobtv_pg_channel_table_pane_g

0xe12d,	// (0x0001b1fc) single_mobtv_pg_channel_table_pane_t1

0xe13b,	// (0x0001b20a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0001cd58) single_mobtv_pg_channel_table_pane_t

0x7f88,	// (0x00015057) main_mobtv_info_pane_g1_ParamLimits

0x7f88,	// (0x00015057) main_mobtv_info_pane_g1

0x7fa6,	// (0x00015075) main_mobtv_info_pane_t1_ParamLimits

0x7fa6,	// (0x00015075) main_mobtv_info_pane_t1

0x801e,	// (0x000150ed) main_mobtv_info_pane_t2_ParamLimits

0x801e,	// (0x000150ed) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0001cd62) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0001cd62) main_mobtv_info_pane_t

0x80af,	// (0x0001517e) wait_bar_pane_cp05

0x80c1,	// (0x00015190) main_mobtv_loading_pane_g1_ParamLimits

0x80c1,	// (0x00015190) main_mobtv_loading_pane_g1

0x80d2,	// (0x000151a1) main_mobtv_loading_pane_g2_ParamLimits

0x80d2,	// (0x000151a1) main_mobtv_loading_pane_g2

0x80de,	// (0x000151ad) main_mobtv_loading_pane_g3_ParamLimits

0x80de,	// (0x000151ad) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0001cd69) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0001cd69) main_mobtv_loading_pane_g

0xe149,	// (0x0001b218) main_mobtv_loading_pane_t1_ParamLimits

0xe149,	// (0x0001b218) main_mobtv_loading_pane_t1

0xe161,	// (0x0001b230) main_mobtv_loading_pane_t2_ParamLimits

0xe161,	// (0x0001b230) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0001cd70) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0001cd70) main_mobtv_loading_pane_t

0x80f1,	// (0x000151c0) wait_bar_pane_cp06_ParamLimits

0x80f1,	// (0x000151c0) wait_bar_pane_cp06

0xe185,	// (0x0001b254) main_mobtv_programe_curr_pane_t1

0xe193,	// (0x0001b262) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0001cd75) main_mobtv_programe_curr_pane_t

0xe1a1,	// (0x0001b270) main_mobtv_programe_next_pane_t1

0xe1af,	// (0x0001b27e) main_mobtv_programe_next_pane_t2

0xe1bd,	// (0x0001b28c) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0001cd7a) main_mobtv_programe_next_pane_t

0x9596,	// (0x00016665) bg_popup_mobtv_noti_window_pane

0xe1cb,	// (0x0001b29a) popup_mobtv_noti_window_g1

0xe1d3,	// (0x0001b2a2) popup_mobtv_noti_window_t1

0xe1e1,	// (0x0001b2b0) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0001cd81) popup_mobtv_noti_window_t

0xc44a,	// (0x00019519) bg_popup_mobtv_noti_window_pane_g1

0x9596,	// (0x00016665) sc_clock_pane

0x9596,	// (0x00016665) main_fs_bigclock_pane

0x78df,	// (0x000149ae) blid2_tripm_pane_t4_ParamLimits

0x78df,	// (0x000149ae) blid2_tripm_pane_t4

0x8100,	// (0x000151cf) sc_clock_pane_g1_ParamLimits

0x8100,	// (0x000151cf) sc_clock_pane_g1

0x8112,	// (0x000151e1) sc_clock_pane_t1_ParamLimits

0x8112,	// (0x000151e1) sc_clock_pane_t1

0x8136,	// (0x00015205) sc_clock_pane_t2_ParamLimits

0x8136,	// (0x00015205) sc_clock_pane_t2

0x814e,	// (0x0001521d) sc_clock_pane_t3_ParamLimits

0x814e,	// (0x0001521d) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0001cd86) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0001cd86) sc_clock_pane_t

0x8eff,	// (0x00015fce) main_fs_bigclock_indicator_pane_ParamLimits

0x8eff,	// (0x00015fce) main_fs_bigclock_indicator_pane

0xc64a,	// (0x00019719) main_fs_bigclock_pane_g1_ParamLimits

0xc64a,	// (0x00019719) main_fs_bigclock_pane_g1

0x8f0b,	// (0x00015fda) main_fs_bigclock_pane_t1_ParamLimits

0x8f0b,	// (0x00015fda) main_fs_bigclock_pane_t1

0x8f1d,	// (0x00015fec) main_fs_bigclock_pane_t2_ParamLimits

0x8f1d,	// (0x00015fec) main_fs_bigclock_pane_t2

0x8f31,	// (0x00016000) main_fs_bigclock_pane_t3_ParamLimits

0x8f31,	// (0x00016000) main_fs_bigclock_pane_t3

0x0002,

0xfeb1,	// (0x0001cf80) main_fs_bigclock_pane_t_ParamLimits

0xfeb1,	// (0x0001cf80) main_fs_bigclock_pane_t

0xee2f,	// (0x0001befe) main_fs_bigclock_indicator_pane_g1

0xded1,	// (0x0001afa0) ncim_query_content_pane_g2_ParamLimits

0xded1,	// (0x0001afa0) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0001cd13) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0001cd13) ncim_query_content_pane_g

0x8163,	// (0x00015232) sc_clock_pane_t4_ParamLimits

0x8163,	// (0x00015232) sc_clock_pane_t4

0x9607,	// (0x000166d6) main_radioblah_pane

0xd09b,	// (0x0001a16a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd09b,	// (0x0001a16a) cell_call4_button_pane_t1_copy1

0x7ded,	// (0x00014ebc) main_ncimui_pane_t1_ParamLimits

0x7ded,	// (0x00014ebc) main_ncimui_pane_t1

0x7dff,	// (0x00014ece) main_ncimui_pane_t2_ParamLimits

0x7dff,	// (0x00014ece) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0001cd0c) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0001cd0c) main_ncimui_pane_t

0xe319,	// (0x0001b3e8) main_radioblah_anim_pane_ParamLimits

0xe319,	// (0x0001b3e8) main_radioblah_anim_pane

0xe32a,	// (0x0001b3f9) main_radioblah_info_pane_ParamLimits

0xe32a,	// (0x0001b3f9) main_radioblah_info_pane

0xe33e,	// (0x0001b40d) main_radioblah_pane_t1_ParamLimits

0xe33e,	// (0x0001b40d) main_radioblah_pane_t1

0xe35a,	// (0x0001b429) main_radioblah_pane_t2_ParamLimits

0xe35a,	// (0x0001b429) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0001cda7) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0001cda7) main_radioblah_pane_t

0x8211,	// (0x000152e0) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8211,	// (0x000152e0) main_radioblah_rocker_ctrl_pane

0xe3a2,	// (0x0001b471) main_radioblah_info_pane_t1_ParamLimits

0xe3a2,	// (0x0001b471) main_radioblah_info_pane_t1

0x8269,	// (0x00015338) main_radioblah_info_pane_t2_ParamLimits

0x8269,	// (0x00015338) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0001cdb0) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0001cdb0) main_radioblah_info_pane_t

0xc44a,	// (0x00019519) main_radioblah_rocker_ctrl_pane_g1

0x8319,	// (0x000153e8) main_radioblah_rocker_ctrl_pane_g2

0x8321,	// (0x000153f0) main_radioblah_rocker_ctrl_pane_g3

0x8329,	// (0x000153f8) main_radioblah_rocker_ctrl_pane_g4

0x8331,	// (0x00015400) main_radioblah_rocker_ctrl_pane_g5

0x8339,	// (0x00015408) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0001cdb9) main_radioblah_rocker_ctrl_pane_g

0x7b6e,	// (0x00014c3d) main_cset_text2_pane_t1_copy1_ParamLimits

0xd11f,	// (0x0001a1ee) cam4_image_uncrop_qvga_pane

0xd131,	// (0x0001a200) vid4_image_uncrop_qcif_pane

0xda1f,	// (0x0001aaee) cam6_image_uncrop_qvga_pane_ParamLimits

0xda1f,	// (0x0001aaee) cam6_image_uncrop_qvga_pane

0xdaf5,	// (0x0001abc4) vid6_image_uncrop_qcif_pane_ParamLimits

0xdaf5,	// (0x0001abc4) vid6_image_uncrop_qcif_pane

0x9596,	// (0x00016665) bg_popup_preview_window_pane_cp03

0xde83,	// (0x0001af52) list_cset_text2_pane

0xde8b,	// (0x0001af5a) main_cset6_text2_pane_g1

0xde93,	// (0x0001af62) main_cset6_text2_pane_t1

0x8341,	// (0x00015410) list_cset_text2_pane_t1_ParamLimits

0x8341,	// (0x00015410) list_cset_text2_pane_t1

0x9607,	// (0x000166d6) main_radioblah_pane_ParamLimits

0x809b,	// (0x0001516a) main_mobtv_info_pane_t3_ParamLimits

0x809b,	// (0x0001516a) main_mobtv_info_pane_t3

0x81ff,	// (0x000152ce) main_radioblah_pane_g1

0x8239,	// (0x00015308) main_radioblah_info_pane_g1

0x82be,	// (0x0001538d) main_radioblah_info_pane_t3_ParamLimits

0x82be,	// (0x0001538d) main_radioblah_info_pane_t3

0x2b27,	// (0x0000fbf6) highlight_cell_cale_month_pane_ParamLimits

0x2b27,	// (0x0000fbf6) highlight_cell_cale_month_pane

0x9596,	// (0x00016665) main_phob_fisheye_pane

0xc7d0,	// (0x0001989f) scroll_pane_cp0031_ParamLimits

0xc7d0,	// (0x0001989f) scroll_pane_cp0031

0xdc07,	// (0x0001acd6) wait_bar_pane_cp08_ParamLimits

0x7bf7,	// (0x00014cc6) cset_list_set_pane_copy1_ParamLimits

0xe3dc,	// (0x0001b4ab) highlight_cell_cale_month_pane_g1

0x835b,	// (0x0001542a) highlight_cell_cale_month_pane_t1

0xd797,	// (0x0001a866) list_gen_pane_cp01

0xd2d1,	// (0x0001a3a0) scroll_pane_01

0x8369,	// (0x00015438) list_single_double_fisheye_pane

0xe3e4,	// (0x0001b4b3) list_double_fisheye_pane_g1_ParamLimits

0xe3e4,	// (0x0001b4b3) list_double_fisheye_pane_g1

0xe3f0,	// (0x0001b4bf) list_double_fisheye_pane_g2_ParamLimits

0xe3f0,	// (0x0001b4bf) list_double_fisheye_pane_g2

0x8372,	// (0x00015441) list_double_fisheye_pane_g3_ParamLimits

0x8372,	// (0x00015441) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0001cdc6) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0001cdc6) list_double_fisheye_pane_g

0x837e,	// (0x0001544d) list_double_fisheye_pane_t1_ParamLimits

0x837e,	// (0x0001544d) list_double_fisheye_pane_t1

0x8399,	// (0x00015468) list_double_fisheye_pane_t2_ParamLimits

0x8399,	// (0x00015468) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0001cdd1) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0001cdd1) list_double_fisheye_pane_t

0x9596,	// (0x00016665) main_call5_pane

0x818e,	// (0x0001525d) sc_swipe_pane_ParamLimits

0x818e,	// (0x0001525d) sc_swipe_pane

0x83ce,	// (0x0001549d) call5_image_pane_ParamLimits

0x83ce,	// (0x0001549d) call5_image_pane

0x83eb,	// (0x000154ba) call5_swipe_1_pane_ParamLimits

0x83eb,	// (0x000154ba) call5_swipe_1_pane

0x83fe,	// (0x000154cd) call5_swipe_2_pane_ParamLimits

0x83fe,	// (0x000154cd) call5_swipe_2_pane

0x842b,	// (0x000154fa) popup_call5_audio_first_window_ParamLimits

0x842b,	// (0x000154fa) popup_call5_audio_first_window

0xc67a,	// (0x00019749) call5_swipe_1_pane_g1_ParamLimits

0xc67a,	// (0x00019749) call5_swipe_1_pane_g1

0xe421,	// (0x0001b4f0) call5_swipe_1_pane_g2_ParamLimits

0xe421,	// (0x0001b4f0) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0001cdd6) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0001cdd6) call5_swipe_1_pane_g

0xe42d,	// (0x0001b4fc) call5_swipe_1_pane_t1_ParamLimits

0xe42d,	// (0x0001b4fc) call5_swipe_1_pane_t1

0xc67a,	// (0x00019749) call5_swipe_2_pane_g1_ParamLimits

0xc67a,	// (0x00019749) call5_swipe_2_pane_g1

0xe442,	// (0x0001b511) call5_swipe_2_pane_g2_ParamLimits

0xe442,	// (0x0001b511) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0001cddb) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0001cddb) call5_swipe_2_pane_g

0xe44e,	// (0x0001b51d) call5_swipe_2_pane_t1_ParamLimits

0xe44e,	// (0x0001b51d) call5_swipe_2_pane_t1

0xe463,	// (0x0001b532) sc_swipe_pane_g1_ParamLimits

0xe463,	// (0x0001b532) sc_swipe_pane_g1

0xe470,	// (0x0001b53f) sc_swipe_pane_g2_ParamLimits

0xe470,	// (0x0001b53f) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0001cde0) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0001cde0) sc_swipe_pane_g

0xe47c,	// (0x0001b54b) sc_swipe_pane_t1_ParamLimits

0xe47c,	// (0x0001b54b) sc_swipe_pane_t1

0x9596,	// (0x00016665) main_cmail_launcher_pane

0x8440,	// (0x0001550f) aid_size_cell_cmail_l_ParamLimits

0x8440,	// (0x0001550f) aid_size_cell_cmail_l

0x845a,	// (0x00015529) grid_cmail_l_pane_ParamLimits

0x845a,	// (0x00015529) grid_cmail_l_pane

0x8476,	// (0x00015545) cell_cmail_l_pane_ParamLimits

0x8476,	// (0x00015545) cell_cmail_l_pane

0x849e,	// (0x0001556d) cell_cmail_l_pane_g1_ParamLimits

0x849e,	// (0x0001556d) cell_cmail_l_pane_g1

0x84aa,	// (0x00015579) cell_cmail_l_pane_t1_ParamLimits

0x84aa,	// (0x00015579) cell_cmail_l_pane_t1

0xe491,	// (0x0001b560) cell_cmail_l_pane_t2_ParamLimits

0xe491,	// (0x0001b560) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0001cde5) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0001cde5) cell_cmail_l_pane_t

0x9607,	// (0x000166d6) grid_highlight_pane_cp018_ParamLimits

0x9607,	// (0x000166d6) grid_highlight_pane_cp018

0x11d2,	// (0x0000e2a1) main2_pane_ParamLimits

0x11d2,	// (0x0000e2a1) main2_pane

0x9e49,	// (0x00016f18) popup_sp_fs_action_menu_bg_pane_g1

0x9e51,	// (0x00016f20) popup_sp_fs_action_menu_bg_pane_g2

0x9e59,	// (0x00016f28) popup_sp_fs_action_menu_bg_pane_g3

0x9e61,	// (0x00016f30) popup_sp_fs_action_menu_bg_pane_g4

0x9e69,	// (0x00016f38) popup_sp_fs_action_menu_bg_pane_g5

0x9e71,	// (0x00016f40) popup_sp_fs_action_menu_bg_pane_g6

0x9e79,	// (0x00016f48) popup_sp_fs_action_menu_bg_pane_g7

0x9e81,	// (0x00016f50) popup_sp_fs_action_menu_bg_pane_g8

0x9e89,	// (0x00016f58) popup_sp_fs_action_menu_bg_pane_g9

0x9e91,	// (0x00016f60) popup_sp_fs_action_menu_bg_pane_g10

0x9e91,	// (0x00016f60) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0001c2be) popup_sp_fs_action_menu_bg_pane_g

0xa06f,	// (0x0001713e) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t3_g3_g1

0xa07b,	// (0x0001714a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x2_t3_g3_g2

0xa087,	// (0x00017156) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa087,	// (0x00017156) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0001c36e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0001c36e) list_medium_line_x2_t3_g3_g

0xa093,	// (0x00017162) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa093,	// (0x00017162) list_medium_line_x2_t3_g3_t1

0x1f1b,	// (0x0000efea) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f1b,	// (0x0000efea) list_medium_line_x2_t3_g3_t2

0xa0a8,	// (0x00017177) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa0a8,	// (0x00017177) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0001c375) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0001c375) list_medium_line_x2_t3_g3_t

0xa06f,	// (0x0001713e) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t3_g2_g1

0xa087,	// (0x00017156) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa087,	// (0x00017156) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0001c37c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0001c37c) list_medium_line_x2_t3_g2_g

0xa0bd,	// (0x0001718c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa0bd,	// (0x0001718c) list_medium_line_x2_t3_g2_t1

0xa0d3,	// (0x000171a2) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa0d3,	// (0x000171a2) list_medium_line_x2_t3_g2_t2

0xa0e5,	// (0x000171b4) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa0e5,	// (0x000171b4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0001c381) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0001c381) list_medium_line_x2_t3_g2_t

0xa06f,	// (0x0001713e) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t4_g4_g1

0xa103,	// (0x000171d2) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa103,	// (0x000171d2) list_medium_line_x2_t4_g4_g2

0xa07b,	// (0x0001714a) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x2_t4_g4_g3

0xa10f,	// (0x000171de) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa10f,	// (0x000171de) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0001c388) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0001c388) list_medium_line_x2_t4_g4_g

0x1f2f,	// (0x0000effe) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f2f,	// (0x0000effe) list_medium_line_x2_t4_g4_t1

0x1f46,	// (0x0000f015) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f46,	// (0x0000f015) list_medium_line_x2_t4_g4_t2

0x1f5b,	// (0x0000f02a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f5b,	// (0x0000f02a) list_medium_line_x2_t4_g4_t3

0xa11b,	// (0x000171ea) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa11b,	// (0x000171ea) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0001c391) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0001c391) list_medium_line_x2_t4_g4_t

0xa06f,	// (0x0001713e) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t2_g4_g1

0xa103,	// (0x000171d2) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa103,	// (0x000171d2) list_medium_line_x2_t2_g4_g2

0xa07b,	// (0x0001714a) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x2_t2_g4_g3

0xa087,	// (0x00017156) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa087,	// (0x00017156) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0001c3f8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0001c3f8) list_medium_line_x2_t2_g4_g

0xa40f,	// (0x000174de) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa40f,	// (0x000174de) list_medium_line_x2_t2_g4_t1

0xa0a8,	// (0x00017177) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa0a8,	// (0x00017177) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0001c401) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0001c401) list_medium_line_x2_t2_g4_t

0xa06f,	// (0x0001713e) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t2_g3_g1

0xa07b,	// (0x0001714a) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x2_t2_g3_g2

0xa087,	// (0x00017156) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa087,	// (0x00017156) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0001c36e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0001c36e) list_medium_line_x2_t2_g3_g

0xa424,	// (0x000174f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa424,	// (0x000174f3) list_medium_line_x2_t2_g3_t1

0xa0a8,	// (0x00017177) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa0a8,	// (0x00017177) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0001c406) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0001c406) list_medium_line_x2_t2_g3_t

0x2d00,	// (0x0000fdcf) main_sp_fs_list_pane_ParamLimits

0x2d00,	// (0x0000fdcf) main_sp_fs_list_pane

0x2d0c,	// (0x0000fddb) sp_fs_scroll_pane_ParamLimits

0x2d0c,	// (0x0000fddb) sp_fs_scroll_pane

0x2d18,	// (0x0000fde7) list_medium_line_x2_t3_t1

0x2d28,	// (0x0000fdf7) list_medium_line_x2_t3_t2

0xa5fd,	// (0x000176cc) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0001c451) list_medium_line_x2_t3_t

0x2d36,	// (0x0000fe05) list_medium_line_x3_t4_t1

0x2d46,	// (0x0000fe15) list_medium_line_x3_t4_t2

0xa60b,	// (0x000176da) list_medium_line_x3_t4_t3

0xa5fd,	// (0x000176cc) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0001c458) list_medium_line_x3_t4_t

0x2d54,	// (0x0000fe23) list_medium_line_x4_t5_t1

0x2d64,	// (0x0000fe33) list_medium_line_x4_t5_t2

0xa60b,	// (0x000176da) list_medium_line_x4_t5_t3

0xa619,	// (0x000176e8) list_medium_line_x4_t5_t4

0xa5fd,	// (0x000176cc) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0001c461) list_medium_line_x4_t5_t

0xa06f,	// (0x0001713e) list_medium_line_t4_g4_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_t4_g4_g1

0xa10f,	// (0x000171de) list_medium_line_t4_g4_g2_ParamLimits

0xa10f,	// (0x000171de) list_medium_line_t4_g4_g2

0xa627,	// (0x000176f6) list_medium_line_t4_g4_g3_ParamLimits

0xa627,	// (0x000176f6) list_medium_line_t4_g4_g3

0xa087,	// (0x00017156) list_medium_line_t4_g4_g4_ParamLimits

0xa087,	// (0x00017156) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0001c46c) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0001c46c) list_medium_line_t4_g4_g

0xa633,	// (0x00017702) list_medium_line_t4_g4_t1_ParamLimits

0xa633,	// (0x00017702) list_medium_line_t4_g4_t1

0xa648,	// (0x00017717) list_medium_line_t4_g4_t2_ParamLimits

0xa648,	// (0x00017717) list_medium_line_t4_g4_t2

0xa65e,	// (0x0001772d) list_medium_line_t4_g4_t3_ParamLimits

0xa65e,	// (0x0001772d) list_medium_line_t4_g4_t3

0xa0a8,	// (0x00017177) list_medium_line_t4_g4_t4_ParamLimits

0xa0a8,	// (0x00017177) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0001c475) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0001c475) list_medium_line_t4_g4_t

0x2e38,	// (0x0000ff07) chi_dic_find_pane_g1

0x40a3,	// (0x00011172) main_tport_pane

0xd41c,	// (0x0001a4eb) list_medium_line_plain_t1

0xd46e,	// (0x0001a53d) list_medium_line_t2_g2_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_t2_g2_g1

0xd47a,	// (0x0001a549) list_medium_line_t2_g2_g2_ParamLimits

0xd47a,	// (0x0001a549) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0001cb28) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0001cb28) list_medium_line_t2_g2_g

0x7131,	// (0x00014200) list_medium_line_t2_g2_t1_ParamLimits

0x7131,	// (0x00014200) list_medium_line_t2_g2_t1

0x7148,	// (0x00014217) list_medium_line_t2_g2_t2_ParamLimits

0x7148,	// (0x00014217) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0001cb2d) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0001cb2d) list_medium_line_t2_g2_t

0xd840,	// (0x0001a90f) aid_sp_fs_list_icon_a_sm

0xd848,	// (0x0001a917) aid_sp_fs_list_icon_d

0xd850,	// (0x0001a91f) aid_sp_fs_text_primary

0xd859,	// (0x0001a928) aid_sp_fs_text_secondary

0xd862,	// (0x0001a931) list_medium_line

0xd862,	// (0x0001a931) list_medium_line_g2

0xd862,	// (0x0001a931) list_medium_line_g3

0xd862,	// (0x0001a931) list_medium_line_plain

0xd862,	// (0x0001a931) list_medium_line_plain_t2

0xd862,	// (0x0001a931) list_medium_line_plain_t3

0xd862,	// (0x0001a931) list_medium_line_right_icon

0xd862,	// (0x0001a931) list_medium_line_right_iconx2

0xd862,	// (0x0001a931) list_medium_line_t2

0xd862,	// (0x0001a931) list_medium_line_t2_g2

0xd862,	// (0x0001a931) list_medium_line_t2_g3

0xd862,	// (0x0001a931) list_medium_line_t2_right_icon

0xd862,	// (0x0001a931) list_medium_line_t2_right_iconx2

0xd862,	// (0x0001a931) list_medium_line_t3

0xd862,	// (0x0001a931) list_medium_line_t3_g2

0xd862,	// (0x0001a931) list_medium_line_t3_g3

0xd862,	// (0x0001a931) list_medium_line_t3_right_iconx2

0xd86b,	// (0x0001a93a) list_medium_line_t4_g4

0xd874,	// (0x0001a943) list_medium_line_x2

0xd874,	// (0x0001a943) list_medium_line_x2_t2_g2

0xd874,	// (0x0001a943) list_medium_line_x2_t2_g3

0xd874,	// (0x0001a943) list_medium_line_x2_t2_g4

0xd874,	// (0x0001a943) list_medium_line_x2_t3

0xd874,	// (0x0001a943) list_medium_line_x2_t3_g2

0xd874,	// (0x0001a943) list_medium_line_x2_t3_g3

0xd874,	// (0x0001a943) list_medium_line_x2_t3_g4

0xd874,	// (0x0001a943) list_medium_line_x2_t4_g2

0xd874,	// (0x0001a943) list_medium_line_x2_t4_g4

0xd87d,	// (0x0001a94c) list_medium_line_x3

0xd87d,	// (0x0001a94c) list_medium_line_x3_t4

0xd87d,	// (0x0001a94c) list_medium_line_x3_t4_g4

0xd86b,	// (0x0001a93a) list_medium_line_x4_t4

0xd86b,	// (0x0001a93a) list_medium_line_x4_t4_g7

0xd86b,	// (0x0001a93a) list_medium_line_x4_t5

0xd886,	// (0x0001a955) list_single_fs_dyc_pane_ParamLimits

0xd886,	// (0x0001a955) list_single_fs_dyc_pane

0xa06f,	// (0x0001713e) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x4_t4_g7_g1

0xddb2,	// (0x0001ae81) list_medium_line_x4_t4_g7_g2_ParamLimits

0xddb2,	// (0x0001ae81) list_medium_line_x4_t4_g7_g2

0xddbe,	// (0x0001ae8d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddbe,	// (0x0001ae8d) list_medium_line_x4_t4_g7_g3

0xddcd,	// (0x0001ae9c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddcd,	// (0x0001ae9c) list_medium_line_x4_t4_g7_g4

0xddd9,	// (0x0001aea8) list_medium_line_x4_t4_g7_g5_ParamLimits

0xddd9,	// (0x0001aea8) list_medium_line_x4_t4_g7_g5

0xdde8,	// (0x0001aeb7) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdde8,	// (0x0001aeb7) list_medium_line_x4_t4_g7_g6

0xddf7,	// (0x0001aec6) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddf7,	// (0x0001aec6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0001ccf2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0001ccf2) list_medium_line_x4_t4_g7_g

0xde03,	// (0x0001aed2) list_medium_line_x4_t4_g7_t1_ParamLimits

0xde03,	// (0x0001aed2) list_medium_line_x4_t4_g7_t1

0xde18,	// (0x0001aee7) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde18,	// (0x0001aee7) list_medium_line_x4_t4_g7_t2

0xde2d,	// (0x0001aefc) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde2d,	// (0x0001aefc) list_medium_line_x4_t4_g7_t3

0xde42,	// (0x0001af11) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde42,	// (0x0001af11) list_medium_line_x4_t4_g7_t4

0xde54,	// (0x0001af23) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde54,	// (0x0001af23) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0001cd01) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0001cd01) list_medium_line_x4_t4_g7_t

0xde66,	// (0x0001af35) list_single_dyc_row_pane_ParamLimits

0xde66,	// (0x0001af35) list_single_dyc_row_pane

0x83bb,	// (0x0001548a) call5_gesture_pane_ParamLimits

0x83bb,	// (0x0001548a) call5_gesture_pane

0x8411,	// (0x000154e0) call5_windows_pane_ParamLimits

0x8411,	// (0x000154e0) call5_windows_pane

0x84c0,	// (0x0001558f) call5_swipe_1_pane_cp_ParamLimits

0x84c0,	// (0x0001558f) call5_swipe_1_pane_cp

0x84cc,	// (0x0001559b) call5_swipe_2_pane_cp_ParamLimits

0x84cc,	// (0x0001559b) call5_swipe_2_pane_cp

0xaaa8,	// (0x00017b77) call5_image_pane_cp

0x84d8,	// (0x000155a7) popup_call5_audio_first_window_cp_ParamLimits

0x84d8,	// (0x000155a7) popup_call5_audio_first_window_cp

0xe463,	// (0x0001b532) call5_swipe_1_pane_g1_cp_ParamLimits

0xe463,	// (0x0001b532) call5_swipe_1_pane_g1_cp

0xe4a3,	// (0x0001b572) call5_swipe_1_pane_g2_cp

0xe47c,	// (0x0001b54b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe47c,	// (0x0001b54b) call5_swipe_1_pane_t1_cp

0xe463,	// (0x0001b532) call5_swipe_2_pane_g1_cp_ParamLimits

0xe463,	// (0x0001b532) call5_swipe_2_pane_g1_cp

0xe4ab,	// (0x0001b57a) call5_swipe_2_pane_g2_cp

0xe4b3,	// (0x0001b582) call5_swipe_2_pane_t1_cp_ParamLimits

0xe4b3,	// (0x0001b582) call5_swipe_2_pane_t1_cp

0x9607,	// (0x000166d6) main_sp_fs_email_pane

0xe4c8,	// (0x0001b597) main_sp_fs_listscroll_pane_te

0xe4d1,	// (0x0001b5a0) popup_sp_fs_action_menu_pane_ParamLimits

0xe4d1,	// (0x0001b5a0) popup_sp_fs_action_menu_pane

0xc44a,	// (0x00019519) bg_sp_fs_ctrlbar_pane_g1

0xe517,	// (0x0001b5e6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe520,	// (0x0001b5ef) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe529,	// (0x0001b5f8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc44a,	// (0x00019519) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0001cdea) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc229,	// (0x000192f8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc229,	// (0x000192f8) bg_sp_fs_ctrlbar_ddmenu_pane

0xe532,	// (0x0001b601) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe532,	// (0x0001b601) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe53e,	// (0x0001b60d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe53e,	// (0x0001b60d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0001cdf3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0001cdf3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe54a,	// (0x0001b619) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe54a,	// (0x0001b619) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe564,	// (0x0001b633) list_medium_line_t2_right_icon_g1

0x84e6,	// (0x000155b5) list_medium_line_t2_right_icon_t1

0x84f6,	// (0x000155c5) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0001cdf8) list_medium_line_t2_right_icon_t

0xbf15,	// (0x00018fe4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf15,	// (0x00018fe4) bg_sp_fs_ctrlbar_pane

0x854c,	// (0x0001561b) main_sp_fs_ctrlbar_button_pane_cp01

0x8554,	// (0x00015623) main_sp_fs_ctrlbar_ddmenu_pane

0xe5a6,	// (0x0001b675) main_sp_fs_ctrlbar_pane_g1

0xe5b2,	// (0x0001b681) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0001cdfd) main_sp_fs_ctrlbar_pane_g

0xe5be,	// (0x0001b68d) main_sp_fs_ctrlbar_pane_t1

0x855e,	// (0x0001562d) main_sp_fs_ctrlbar_pane

0x8582,	// (0x00015651) main_sp_fs_listscroll_pane_te_cp01

0x85a2,	// (0x00015671) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85a2,	// (0x00015671) popup_sp_fs_action_menu_pane_cp01

0x9607,	// (0x000166d6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9607,	// (0x000166d6) bg_sp_fs_highlight_list_pane_cp01

0xe5d3,	// (0x0001b6a2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe5d3,	// (0x0001b6a2) sp_fs_action_menu_list_gene_pane_g1

0xe5e2,	// (0x0001b6b1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe5e2,	// (0x0001b6b1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0001ce02) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0001ce02) sp_fs_action_menu_list_gene_pane_g

0xe5ef,	// (0x0001b6be) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe5ef,	// (0x0001b6be) sp_fs_action_menu_list_gene_pane_t1

0xe607,	// (0x0001b6d6) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe607,	// (0x0001b6d6) sp_fs_action_menu_list_gene_pane

0xe62a,	// (0x0001b6f9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe62a,	// (0x0001b6f9) popup_sp_fs_action_menu_bg_pane

0xe638,	// (0x0001b707) sp_fs_action_menu_list_pane_ParamLimits

0xe638,	// (0x0001b707) sp_fs_action_menu_list_pane

0xe65c,	// (0x0001b72b) sp_fs_scroll_pane_cp01_ParamLimits

0xe65c,	// (0x0001b72b) sp_fs_scroll_pane_cp01

0x85be,	// (0x0001568d) list_medium_line_plain_t2_t1

0x85ce,	// (0x0001569d) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0001ce07) list_medium_line_plain_t2_t

0x85dc,	// (0x000156ab) list_medium_line_plain_t3_t1

0x85ec,	// (0x000156bb) list_medium_line_plain_t3_t2

0x85fa,	// (0x000156c9) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0001ce0c) list_medium_line_plain_t3_t

0xa06f,	// (0x0001713e) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t2_g2_g1

0xa087,	// (0x00017156) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa087,	// (0x00017156) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0001c37c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0001c37c) list_medium_line_x2_t2_g2_g

0xa633,	// (0x00017702) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa633,	// (0x00017702) list_medium_line_x2_t2_g2_t1

0xa0a8,	// (0x00017177) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa0a8,	// (0x00017177) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0001ce13) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0001ce13) list_medium_line_x2_t2_g2_t

0xa06f,	// (0x0001713e) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t4_g2_g1

0xa087,	// (0x00017156) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa087,	// (0x00017156) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x0001c37c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x0001c37c) list_medium_line_x2_t4_g2_g

0x8608,	// (0x000156d7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8608,	// (0x000156d7) list_medium_line_x2_t4_g2_t1

0x8622,	// (0x000156f1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8622,	// (0x000156f1) list_medium_line_x2_t4_g2_t2

0x8638,	// (0x00015707) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8638,	// (0x00015707) list_medium_line_x2_t4_g2_t3

0xa0a8,	// (0x00017177) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa0a8,	// (0x00017177) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd49,	// (0x0001ce18) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd49,	// (0x0001ce18) list_medium_line_x2_t4_g2_t

0xe682,	// (0x0001b751) list_medium_line_t3_right_iconx2_g1

0xe564,	// (0x0001b633) list_medium_line_t3_right_iconx2_g2

0x864d,	// (0x0001571c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd52,	// (0x0001ce21) list_medium_line_t3_right_iconx2_g

0x8657,	// (0x00015726) list_medium_line_t3_right_iconx2_t1

0x8667,	// (0x00015736) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd59,	// (0x0001ce28) list_medium_line_t3_right_iconx2_t

0xa06f,	// (0x0001713e) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x3_t4_g4_g1

0xa07b,	// (0x0001714a) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x3_t4_g4_g2

0xa10f,	// (0x000171de) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa10f,	// (0x000171de) list_medium_line_x3_t4_g4_g3

0xe68a,	// (0x0001b759) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe68a,	// (0x0001b759) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5e,	// (0x0001ce2d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5e,	// (0x0001ce2d) list_medium_line_x3_t4_g4_g

0x8675,	// (0x00015744) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8675,	// (0x00015744) list_medium_line_x3_t4_g4_t1

0x868c,	// (0x0001575b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x868c,	// (0x0001575b) list_medium_line_x3_t4_g4_t2

0xe696,	// (0x0001b765) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe696,	// (0x0001b765) list_medium_line_x3_t4_g4_t3

0xe6ab,	// (0x0001b77a) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe6ab,	// (0x0001b77a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd67,	// (0x0001ce36) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd67,	// (0x0001ce36) list_medium_line_x3_t4_g4_t

0x86a1,	// (0x00015770) list_single_dyc_row_text_pane_t1_ParamLimits

0x86a1,	// (0x00015770) list_single_dyc_row_text_pane_t1

0x86e6,	// (0x000157b5) list_single_dyc_row_text_pane_t2_ParamLimits

0x86e6,	// (0x000157b5) list_single_dyc_row_text_pane_t2

0xe6c8,	// (0x0001b797) list_single_dyc_row_text_pane_t3_ParamLimits

0xe6c8,	// (0x0001b797) list_single_dyc_row_text_pane_t3

0x0002,

0xfd70,	// (0x0001ce3f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd70,	// (0x0001ce3f) list_single_dyc_row_text_pane_t

0xe6da,	// (0x0001b7a9) list_single_dyc_row_pane_g1_ParamLimits

0xe6da,	// (0x0001b7a9) list_single_dyc_row_pane_g1

0xe6e6,	// (0x0001b7b5) list_single_dyc_row_pane_g2_ParamLimits

0xe6e6,	// (0x0001b7b5) list_single_dyc_row_pane_g2

0xe6f2,	// (0x0001b7c1) list_single_dyc_row_pane_g3_ParamLimits

0xe6f2,	// (0x0001b7c1) list_single_dyc_row_pane_g3

0xe6fe,	// (0x0001b7cd) list_single_dyc_row_pane_g4_ParamLimits

0xe6fe,	// (0x0001b7cd) list_single_dyc_row_pane_g4

0x0003,

0xfd77,	// (0x0001ce46) list_single_dyc_row_pane_g_ParamLimits

0xfd77,	// (0x0001ce46) list_single_dyc_row_pane_g

0xe70a,	// (0x0001b7d9) list_single_dyc_row_text_pane_ParamLimits

0xe70a,	// (0x0001b7d9) list_single_dyc_row_text_pane

0x9596,	// (0x00016665) bg_sp_fs_scroll_pane

0xe729,	// (0x0001b7f8) thumb_sp_fs_scroll_pane

0xd46e,	// (0x0001a53d) list_medium_line_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_g1

0xe732,	// (0x0001b801) list_medium_line_t1_ParamLimits

0xe732,	// (0x0001b801) list_medium_line_t1

0xa06f,	// (0x0001713e) list_medium_line_x2_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_g1

0xa07b,	// (0x0001714a) list_medium_line_x2_g2_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x2_g2

0x0001,

0xfd80,	// (0x0001ce4f) list_medium_line_x2_g_ParamLimits

0xfd80,	// (0x0001ce4f) list_medium_line_x2_g

0xe747,	// (0x0001b816) list_medium_line_x2_t1_ParamLimits

0xe747,	// (0x0001b816) list_medium_line_x2_t1

0xa06f,	// (0x0001713e) list_medium_line_x3_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x3_g1

0xa07b,	// (0x0001714a) list_medium_line_x3_g2_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x3_g2

0x0001,

0xfd80,	// (0x0001ce4f) list_medium_line_x3_g_ParamLimits

0xfd80,	// (0x0001ce4f) list_medium_line_x3_g

0xe747,	// (0x0001b816) list_medium_line_x3_t1_ParamLimits

0xe747,	// (0x0001b816) list_medium_line_x3_t1

0xe75d,	// (0x0001b82c) thumb_sp_fs_scroll_pane_g1

0xe766,	// (0x0001b835) thumb_sp_fs_scroll_pane_g2

0xe76f,	// (0x0001b83e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0001ce54) thumb_sp_fs_scroll_pane_g

0xe75d,	// (0x0001b82c) bg_sp_fs_scroll_pane_g1

0xe766,	// (0x0001b835) bg_sp_fs_scroll_pane_g2

0xe76f,	// (0x0001b83e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0001ce54) bg_sp_fs_scroll_pane_g

0xa06f,	// (0x0001713e) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa06f,	// (0x0001713e) list_medium_line_x2_t3_g4_g1

0xa103,	// (0x000171d2) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa103,	// (0x000171d2) list_medium_line_x2_t3_g4_g2

0xa07b,	// (0x0001714a) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa07b,	// (0x0001714a) list_medium_line_x2_t3_g4_g3

0xa087,	// (0x00017156) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa087,	// (0x00017156) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0001c3f8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0001c3f8) list_medium_line_x2_t3_g4_g

0x8740,	// (0x0001580f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8740,	// (0x0001580f) list_medium_line_x2_t3_g4_t1

0x8756,	// (0x00015825) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8756,	// (0x00015825) list_medium_line_x2_t3_g4_t2

0xa0a8,	// (0x00017177) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa0a8,	// (0x00017177) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8c,	// (0x0001ce5b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8c,	// (0x0001ce5b) list_medium_line_x2_t3_g4_t

0xd46e,	// (0x0001a53d) list_medium_line_g2_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_g2_g1

0xd47a,	// (0x0001a549) list_medium_line_g2_g2_ParamLimits

0xd47a,	// (0x0001a549) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0001cb28) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0001cb28) list_medium_line_g2_g

0xe778,	// (0x0001b847) list_medium_line_g2_t1_ParamLimits

0xe778,	// (0x0001b847) list_medium_line_g2_t1

0xd46e,	// (0x0001a53d) list_medium_line_t3_g2_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_t3_g2_g1

0xd47a,	// (0x0001a549) list_medium_line_t3_g2_g2_ParamLimits

0xd47a,	// (0x0001a549) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0001cb28) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0001cb28) list_medium_line_t3_g2_g

0x876f,	// (0x0001583e) list_medium_line_t3_g2_t1_ParamLimits

0x876f,	// (0x0001583e) list_medium_line_t3_g2_t1

0x8789,	// (0x00015858) list_medium_line_t3_g2_t2_ParamLimits

0x8789,	// (0x00015858) list_medium_line_t3_g2_t2

0x879f,	// (0x0001586e) list_medium_line_t3_g2_t3_ParamLimits

0x879f,	// (0x0001586e) list_medium_line_t3_g2_t3

0x0002,

0xfd93,	// (0x0001ce62) list_medium_line_t3_g2_t_ParamLimits

0xfd93,	// (0x0001ce62) list_medium_line_t3_g2_t

0xe564,	// (0x0001b633) list_medium_line_right_icon_g1

0xe78d,	// (0x0001b85c) list_medium_line_right_icon_t1

0xd46e,	// (0x0001a53d) list_medium_line_t2_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_t2_g1

0x87b6,	// (0x00015885) list_medium_line_t2_t1_ParamLimits

0x87b6,	// (0x00015885) list_medium_line_t2_t1

0x87d0,	// (0x0001589f) list_medium_line_t2_t2_ParamLimits

0x87d0,	// (0x0001589f) list_medium_line_t2_t2

0x0001,

0xfd9a,	// (0x0001ce69) list_medium_line_t2_t_ParamLimits

0xfd9a,	// (0x0001ce69) list_medium_line_t2_t

0xd46e,	// (0x0001a53d) list_medium_line_t3_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_t3_g1

0x87e5,	// (0x000158b4) list_medium_line_t3_t1_ParamLimits

0x87e5,	// (0x000158b4) list_medium_line_t3_t1

0x87ff,	// (0x000158ce) list_medium_line_t3_t2_ParamLimits

0x87ff,	// (0x000158ce) list_medium_line_t3_t2

0x8815,	// (0x000158e4) list_medium_line_t3_t3_ParamLimits

0x8815,	// (0x000158e4) list_medium_line_t3_t3

0x0002,

0xfd9f,	// (0x0001ce6e) list_medium_line_t3_t_ParamLimits

0xfd9f,	// (0x0001ce6e) list_medium_line_t3_t

0xd46e,	// (0x0001a53d) list_medium_line_g3_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_g3_g1

0xe79b,	// (0x0001b86a) list_medium_line_g3_g2_ParamLimits

0xe79b,	// (0x0001b86a) list_medium_line_g3_g2

0xd47a,	// (0x0001a549) list_medium_line_g3_g3_ParamLimits

0xd47a,	// (0x0001a549) list_medium_line_g3_g3

0x0002,

0xfda6,	// (0x0001ce75) list_medium_line_g3_g_ParamLimits

0xfda6,	// (0x0001ce75) list_medium_line_g3_g

0xe7a7,	// (0x0001b876) list_medium_line_g3_t1_ParamLimits

0xe7a7,	// (0x0001b876) list_medium_line_g3_t1

0xd46e,	// (0x0001a53d) list_medium_line_t2_g3_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_t2_g3_g1

0xe79b,	// (0x0001b86a) list_medium_line_t2_g3_g2_ParamLimits

0xe79b,	// (0x0001b86a) list_medium_line_t2_g3_g2

0xd47a,	// (0x0001a549) list_medium_line_t2_g3_g3_ParamLimits

0xd47a,	// (0x0001a549) list_medium_line_t2_g3_g3

0x0002,

0xfda6,	// (0x0001ce75) list_medium_line_t2_g3_g_ParamLimits

0xfda6,	// (0x0001ce75) list_medium_line_t2_g3_g

0x882a,	// (0x000158f9) list_medium_line_t2_g3_t1_ParamLimits

0x882a,	// (0x000158f9) list_medium_line_t2_g3_t1

0x8841,	// (0x00015910) list_medium_line_t2_g3_t2_ParamLimits

0x8841,	// (0x00015910) list_medium_line_t2_g3_t2

0x0001,

0xfdad,	// (0x0001ce7c) list_medium_line_t2_g3_t_ParamLimits

0xfdad,	// (0x0001ce7c) list_medium_line_t2_g3_t

0xd46e,	// (0x0001a53d) list_medium_line_t3_g3_g1_ParamLimits

0xd46e,	// (0x0001a53d) list_medium_line_t3_g3_g1

0xe79b,	// (0x0001b86a) list_medium_line_t3_g3_g2_ParamLimits

0xe79b,	// (0x0001b86a) list_medium_line_t3_g3_g2

0xd47a,	// (0x0001a549) list_medium_line_t3_g3_g3_ParamLimits

0xd47a,	// (0x0001a549) list_medium_line_t3_g3_g3

0x0002,

0xfda6,	// (0x0001ce75) list_medium_line_t3_g3_g_ParamLimits

0xfda6,	// (0x0001ce75) list_medium_line_t3_g3_g

0x8856,	// (0x00015925) list_medium_line_t3_g3_t1_ParamLimits

0x8856,	// (0x00015925) list_medium_line_t3_g3_t1

0x886f,	// (0x0001593e) list_medium_line_t3_g3_t2_ParamLimits

0x886f,	// (0x0001593e) list_medium_line_t3_g3_t2

0x8885,	// (0x00015954) list_medium_line_t3_g3_t3_ParamLimits

0x8885,	// (0x00015954) list_medium_line_t3_g3_t3

0x0002,

0xfdb2,	// (0x0001ce81) list_medium_line_t3_g3_t_ParamLimits

0xfdb2,	// (0x0001ce81) list_medium_line_t3_g3_t

0xe682,	// (0x0001b751) list_medium_line_right_iconx2_g1

0xe564,	// (0x0001b633) list_medium_line_right_iconx2_g2

0x0001,

0xfdb9,	// (0x0001ce88) list_medium_line_right_iconx2_g

0xe7bc,	// (0x0001b88b) list_medium_line_right_iconx2_t1

0xe682,	// (0x0001b751) list_medium_line_t2_right_iconx2_g1

0xe564,	// (0x0001b633) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb9,	// (0x0001ce88) list_medium_line_t2_right_iconx2_g

0x889f,	// (0x0001596e) list_medium_line_t2_right_iconx2_t1

0x88af,	// (0x0001597e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbe,	// (0x0001ce8d) list_medium_line_t2_right_iconx2_t

0xe7ca,	// (0x0001b899) list_medium_line_x4_t4_t1

0x88bd,	// (0x0001598c) list_medium_line_x4_t4_t2

0x88cd,	// (0x0001599c) list_medium_line_x4_t4_t3

0x88dd,	// (0x000159ac) list_medium_line_x4_t4_t4

0x0003,

0xfdc3,	// (0x0001ce92) list_medium_line_x4_t4_t

0x8927,	// (0x000159f6) tport_appsw_pane_ParamLimits

0x8927,	// (0x000159f6) tport_appsw_pane

0x893a,	// (0x00015a09) tport_contact_pane_ParamLimits

0x893a,	// (0x00015a09) tport_contact_pane

0x894d,	// (0x00015a1c) tport_listscroll_pane_ParamLimits

0x894d,	// (0x00015a1c) tport_listscroll_pane

0x8963,	// (0x00015a32) cell_tport_appsw_pane_ParamLimits

0x8963,	// (0x00015a32) cell_tport_appsw_pane

0xd176,	// (0x0001a245) tport_appsw_pane_g1_ParamLimits

0xd176,	// (0x0001a245) tport_appsw_pane_g1

0xe7d8,	// (0x0001b8a7) tport_contact_pane_g1

0xe7e1,	// (0x0001b8b0) tport_contact_pane_t1

0xe7ef,	// (0x0001b8be) tport_contact_pane_t2

0x0001,

0xfdcc,	// (0x0001ce9b) tport_contact_pane_t

0xe7fd,	// (0x0001b8cc) list_tport_pane

0xe806,	// (0x0001b8d5) scroll_pane_cp_030

0x8980,	// (0x00015a4f) cell_tport_appsw_pane_g1

0xe80f,	// (0x0001b8de) cell_tport_appsw_pane_t1

0x9596,	// (0x00016665) grid_highlight_pane_cp019

0x8998,	// (0x00015a67) list_tport_double_graphic_pane_ParamLimits

0x8998,	// (0x00015a67) list_tport_double_graphic_pane

0x9607,	// (0x000166d6) list_highlight_pane_cp023_ParamLimits

0x9607,	// (0x000166d6) list_highlight_pane_cp023

0x89a8,	// (0x00015a77) list_tport_double_graphic_pane_g1_ParamLimits

0x89a8,	// (0x00015a77) list_tport_double_graphic_pane_g1

0x89b5,	// (0x00015a84) list_tport_double_graphic_pane_t1_ParamLimits

0x89b5,	// (0x00015a84) list_tport_double_graphic_pane_t1

0x89ca,	// (0x00015a99) list_tport_double_graphic_pane_t2_ParamLimits

0x89ca,	// (0x00015a99) list_tport_double_graphic_pane_t2

0x0001,

0xfdd8,	// (0x0001cea7) list_tport_double_graphic_pane_t_ParamLimits

0xfdd8,	// (0x0001cea7) list_tport_double_graphic_pane_t

0x9596,	// (0x00016665) main_cale_note_pane

0x67cd,	// (0x0001389c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67cd,	// (0x0001389c) cell_vitu2_function_top_wide_pane_cp01

0x80af,	// (0x0001517e) wait_bar_pane_cp05_ParamLimits

0x9596,	// (0x00016665) listscroll_cmail_pane

0xe825,	// (0x0001b8f4) list_cmail_pane

0x89e6,	// (0x00015ab5) list_cmail_body_pane

0x89fe,	// (0x00015acd) list_single_cmail_header_caption_pane

0x8a1e,	// (0x00015aed) list_single_cmail_header_detail_pane_ParamLimits

0x8a1e,	// (0x00015aed) list_single_cmail_header_detail_pane

0x8a50,	// (0x00015b1f) list_single_cmail_header_caption_pane_t1

0x8a60,	// (0x00015b2f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8a60,	// (0x00015b2f) list_single_cmail_header_detail_pane_g1

0xe845,	// (0x0001b914) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe845,	// (0x0001b914) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddd,	// (0x0001ceac) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddd,	// (0x0001ceac) list_single_cmail_header_detail_pane_g

0xe85e,	// (0x0001b92d) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe85e,	// (0x0001b92d) list_single_cmail_header_detail_pane_t1

0xe89c,	// (0x0001b96b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe89c,	// (0x0001b96b) list_single_cmail_header_editor_pane_bg

0xe0e2,	// (0x0001b1b1) list_cmail_body_pane_g1

0xe8ae,	// (0x0001b97d) list_cmail_body_pane_t1

0xd1b3,	// (0x0001a282) list_single_cmail_header_editor_pane_bg_g1

0xa32e,	// (0x000173fd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1c3,	// (0x0001a292) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1bb,	// (0x0001a28a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd446,	// (0x0001a515) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1e3,	// (0x0001a2b2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1d3,	// (0x0001a2a2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1db,	// (0x0001a2aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa30e,	// (0x000173dd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a9e,	// (0x00015b6d) calenote_gesture_pane_ParamLimits

0x8a9e,	// (0x00015b6d) calenote_gesture_pane

0x8abe,	// (0x00015b8d) calenote_window_pane_ParamLimits

0x8abe,	// (0x00015b8d) calenote_window_pane

0xe8bc,	// (0x0001b98b) popup_note_window_cp01

0x8ada,	// (0x00015ba9) calenote_swipe_1_pane_ParamLimits

0x8ada,	// (0x00015ba9) calenote_swipe_1_pane

0x84cc,	// (0x0001559b) calenote_swipe_2_pane_ParamLimits

0x84cc,	// (0x0001559b) calenote_swipe_2_pane

0xe463,	// (0x0001b532) calenote_swipe_1_pane_g1_ParamLimits

0xe463,	// (0x0001b532) calenote_swipe_1_pane_g1

0xe470,	// (0x0001b53f) calenote_swipe_1_pane_g2_ParamLimits

0xe470,	// (0x0001b53f) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0001cde0) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0001cde0) calenote_swipe_1_pane_g

0xe8ce,	// (0x0001b99d) calenote_swipe_1_pane_t1_ParamLimits

0xe8ce,	// (0x0001b99d) calenote_swipe_1_pane_t1

0xe463,	// (0x0001b532) calenote_swipe_2_pane_g1_ParamLimits

0xe463,	// (0x0001b532) calenote_swipe_2_pane_g1

0xe8ed,	// (0x0001b9bc) calenote_swipe_2_pane_g2_ParamLimits

0xe8ed,	// (0x0001b9bc) calenote_swipe_2_pane_g2

0x0001,

0xfde9,	// (0x0001ceb8) calenote_swipe_2_pane_g_ParamLimits

0xfde9,	// (0x0001ceb8) calenote_swipe_2_pane_g

0xe8f9,	// (0x0001b9c8) calenote_swipe_2_pane_t1_ParamLimits

0xe8f9,	// (0x0001b9c8) calenote_swipe_2_pane_t1

0x9596,	// (0x00016665) main_mup_navstr_pane

0x544d,	// (0x0001251c) main_mup3_pane_t7_ParamLimits

0x544d,	// (0x0001251c) main_mup3_pane_t7

0xcde2,	// (0x00019eb1) main_mp4_pane_g6_ParamLimits

0xcde2,	// (0x00019eb1) main_mp4_pane_g6

0xcffc,	// (0x0001a0cb) main_image3_pane_t4_ParamLimits

0xcffc,	// (0x0001a0cb) main_image3_pane_t4

0x8aef,	// (0x00015bbe) popup_navstr_preview_pane_ParamLimits

0x8aef,	// (0x00015bbe) popup_navstr_preview_pane

0x8aff,	// (0x00015bce) scroll_navstr_pane_ParamLimits

0x8aff,	// (0x00015bce) scroll_navstr_pane

0x9596,	// (0x00016665) bg_popup_preview_window_pane_cp04

0xe920,	// (0x0001b9ef) popup_navstr_preview_pane_t1

0x8b13,	// (0x00015be2) scroll_navstr_pane_g1_ParamLimits

0x8b13,	// (0x00015be2) scroll_navstr_pane_g1

0x8b27,	// (0x00015bf6) scroll_navstr_pane_t1_ParamLimits

0x8b27,	// (0x00015bf6) scroll_navstr_pane_t1

0xe8c5,	// (0x0001b994) bg_button_pane_cp014

0xe8c5,	// (0x0001b994) bg_button_pane_cp030

0xe404,	// (0x0001b4d3) list_double_fisheye_pane_g4_ParamLimits

0xe404,	// (0x0001b4d3) list_double_fisheye_pane_g4

0xe410,	// (0x0001b4df) list_double_fisheye_pane_g5_ParamLimits

0xe410,	// (0x0001b4df) list_double_fisheye_pane_g5

0xe82d,	// (0x0001b8fc) sp_fs_scroll_pane_cp03

0xe5a6,	// (0x0001b675) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe5b2,	// (0x0001b681) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0001cdfd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe5be,	// (0x0001b68d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x89dc,	// (0x00015aab) sp_fs_scroll_pane_cp02

0x9f0a,	// (0x00016fd9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f0a,	// (0x00016fd9) popup_sp_fs_calendar_preview_list_single_pane

0x9596,	// (0x00016665) main_cam6_pano_pane

0x9607,	// (0x000166d6) main_mup3_pane_ParamLimits

0x9596,	// (0x00016665) main_phacti_pane

0x7f80,	// (0x0001504f) bg_button_pane_cp11

0x7f9a,	// (0x00015069) main_mobtv_info_pane_g2_ParamLimits

0x7f9a,	// (0x00015069) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0001cd5d) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0001cd5d) main_mobtv_info_pane_g

0x8175,	// (0x00015244) sc_clock_pane_t5_ParamLimits

0x8175,	// (0x00015244) sc_clock_pane_t5

0x81ff,	// (0x000152ce) main_radioblah_pane_g1_ParamLimits

0xe372,	// (0x0001b441) main_radioblah_pane_t3_ParamLimits

0xe372,	// (0x0001b441) main_radioblah_pane_t3

0xe38a,	// (0x0001b459) main_radioblah_pane_t4_ParamLimits

0xe38a,	// (0x0001b459) main_radioblah_pane_t4

0x8227,	// (0x000152f6) main_radioblah_text_pane_ParamLimits

0x8227,	// (0x000152f6) main_radioblah_text_pane

0x8239,	// (0x00015308) main_radioblah_info_pane_g1_ParamLimits

0x82d2,	// (0x000153a1) main_radioblah_info_pane_t4_ParamLimits

0x82d2,	// (0x000153a1) main_radioblah_info_pane_t4

0x9607,	// (0x000166d6) main_sp_fs_calendar_pane

0x8b3e,	// (0x00015c0d) main_phacti_pane_g1

0x8b46,	// (0x00015c15) phacti_note_pane_ParamLimits

0x8b46,	// (0x00015c15) phacti_note_pane

0xe937,	// (0x0001ba06) phacti_term_pane_ParamLimits

0xe937,	// (0x0001ba06) phacti_term_pane

0xe94c,	// (0x0001ba1b) phacti_note_pane_t1_ParamLimits

0xe94c,	// (0x0001ba1b) phacti_note_pane_t1

0xe963,	// (0x0001ba32) phacti_term_pane_g1

0xe96b,	// (0x0001ba3a) phacti_term_pane_t1_ParamLimits

0xe96b,	// (0x0001ba3a) phacti_term_pane_t1

0xe995,	// (0x0001ba64) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe99d,	// (0x0001ba6c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf3,	// (0x0001cec2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe9a5,	// (0x0001ba74) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe9a5,	// (0x0001ba74) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9bb,	// (0x0001ba8a) aid_popup_sp_fs_bg_corner_pane

0xc44a,	// (0x00019519) popup_sp_fs_calendar_preview_bg_pane_g1

0x9596,	// (0x00016665) popup_sp_fs_calendar_preview_bg_pane

0xe9c3,	// (0x0001ba92) popup_sp_fs_calendar_preview_list_pane

0x9607,	// (0x000166d6) bg_main_sp_fs_cale_pane_ParamLimits

0x9607,	// (0x000166d6) bg_main_sp_fs_cale_pane

0xe9d4,	// (0x0001baa3) listscroll_cale_mrui_pane_ParamLimits

0xe9d4,	// (0x0001baa3) listscroll_cale_mrui_pane

0xe9e8,	// (0x0001bab7) listscroll_sp_fs_schedule_track_pane

0xe9f1,	// (0x0001bac0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe9f1,	// (0x0001bac0) main_sp_fs_ctrlbar_pane_cp01

0xea02,	// (0x0001bad1) main_sp_fs_ribbon_pane

0xea0a,	// (0x0001bad9) popup_sp_fs_cale_preview_window

0x8b9d,	// (0x00015c6c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b9d,	// (0x00015c6c) list_single_sp_fs_schedule_track_pane

0x9607,	// (0x000166d6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9607,	// (0x000166d6) bg_sp_fs_highlight_list_pane_cp03

0x8bb1,	// (0x00015c80) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8bb1,	// (0x00015c80) list_single_sp_fs_schedule_track_pane_g1

0x8bbd,	// (0x00015c8c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8bbd,	// (0x00015c8c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf8,	// (0x0001cec7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf8,	// (0x0001cec7) list_single_sp_fs_schedule_track_pane_g

0x8bc9,	// (0x00015c98) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bc9,	// (0x00015c98) list_single_sp_fs_schedule_track_pane_t1

0x8beb,	// (0x00015cba) sp_fs_schedule_track_pane_ParamLimits

0x8beb,	// (0x00015cba) sp_fs_schedule_track_pane

0xea1c,	// (0x0001baeb) sp_fs_schedule_track_pane_g1

0xea24,	// (0x0001baf3) sp_fs_schedule_track_pane_g2

0xea2c,	// (0x0001bafb) sp_fs_schedule_track_pane_g3

0xea34,	// (0x0001bb03) sp_fs_schedule_track_pane_g4

0xea3c,	// (0x0001bb0b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfd,	// (0x0001cecc) sp_fs_schedule_track_pane_g

0xd1b3,	// (0x0001a282) bg_sp_fs_schedule_viewer_highlight_g1

0xa32e,	// (0x000173fd) bg_sp_fs_schedule_viewer_highlight_g2

0xd1bb,	// (0x0001a28a) bg_sp_fs_schedule_viewer_highlight_g3

0xd1c3,	// (0x0001a292) bg_sp_fs_schedule_viewer_highlight_g4

0xd446,	// (0x0001a515) bg_sp_fs_schedule_viewer_highlight_g5

0xd1d3,	// (0x0001a2a2) bg_sp_fs_schedule_viewer_highlight_g6

0xd1db,	// (0x0001a2aa) bg_sp_fs_schedule_viewer_highlight_g7

0xd1e3,	// (0x0001a2b2) bg_sp_fs_schedule_viewer_highlight_g8

0xa30e,	// (0x000173dd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe08,	// (0x0001ced7) bg_sp_fs_schedule_viewer_highlight_g

0x9596,	// (0x00016665) bg_main_sp_fs_ribbon_pane

0x8c00,	// (0x00015ccf) main_sp_fs_ribbon_pane_g1

0xea44,	// (0x0001bb13) main_sp_fs_ribbon_pane_t1

0x8c09,	// (0x00015cd8) main_sp_fs_ribbon_pane_t2

0xea53,	// (0x0001bb22) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe1b,	// (0x0001ceea) main_sp_fs_ribbon_pane_t

0xea62,	// (0x0001bb31) main_sp_fs_ribbon_scheduler_pane

0xea6a,	// (0x0001bb39) bg_main_sp_fs_ribbon_pane_g1

0xea73,	// (0x0001bb42) bg_main_sp_fs_ribbon_pane_g2

0xea7c,	// (0x0001bb4b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe22,	// (0x0001cef1) bg_main_sp_fs_ribbon_pane_g

0xea84,	// (0x0001bb53) main_sp_fs_ribbon_scheduler_pane_g1

0xea8d,	// (0x0001bb5c) main_sp_fs_ribbon_scheduler_pane_g2

0xea96,	// (0x0001bb65) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe29,	// (0x0001cef8) main_sp_fs_ribbon_scheduler_pane_g

0xea9f,	// (0x0001bb6e) list_cale_mrui_pane

0x8c18,	// (0x00015ce7) sp_fs_scroll_pane_cp07_ParamLimits

0x8c18,	// (0x00015ce7) sp_fs_scroll_pane_cp07

0x8c2e,	// (0x00015cfd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c2e,	// (0x00015cfd) bg_sp_fs_schedule_viewer_highlight

0xeaa8,	// (0x0001bb77) list_single_sp_fs_schedule_track_pane_cp01

0xeab0,	// (0x0001bb7f) list_sp_fs_schedule_track_pane

0xeab8,	// (0x0001bb87) sp_fs_scroll_pane_cp06_ParamLimits

0xeab8,	// (0x0001bb87) sp_fs_scroll_pane_cp06

0xc44a,	// (0x00019519) bgmain_sp_fs_calendar_pane_g1

0x8c40,	// (0x00015d0f) list_single_cale_mrui_pane_ParamLimits

0x8c40,	// (0x00015d0f) list_single_cale_mrui_pane

0xeaca,	// (0x0001bb99) list_single_cale_mrui_row_pane_ParamLimits

0xeaca,	// (0x0001bb99) list_single_cale_mrui_row_pane

0xead7,	// (0x0001bba6) list_single_cale_mrui_row_pane_g1_ParamLimits

0xead7,	// (0x0001bba6) list_single_cale_mrui_row_pane_g1

0xeb0f,	// (0x0001bbde) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeb0f,	// (0x0001bbde) list_single_cale_mrui_row_pane_t1

0x8c67,	// (0x00015d36) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8c67,	// (0x00015d36) list_single_cale_mrui_row_pane_t2

0xeb21,	// (0x0001bbf0) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeb21,	// (0x0001bbf0) list_single_cale_mrui_row_pane_t3

0xeb50,	// (0x0001bc1f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb50,	// (0x0001bc1f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe35,	// (0x0001cf04) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe35,	// (0x0001cf04) list_single_cale_mrui_row_pane_t

0x8ccd,	// (0x00015d9c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ccd,	// (0x00015d9c) list_single_cmail_header_editor_pane_bg_cp01

0x8cf1,	// (0x00015dc0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8cf1,	// (0x00015dc0) list_single_cmail_header_editor_pane_bg_cp02

0x8d0d,	// (0x00015ddc) main_radioblah_text_pane_t1_ParamLimits

0x8d0d,	// (0x00015ddc) main_radioblah_text_pane_t1

0xeb7f,	// (0x0001bc4e) cam6_indi_pane_cp01

0xeb87,	// (0x0001bc56) cam6_mode_pane_cp01

0xeb8f,	// (0x0001bc5e) cam6_pano_pane

0xeb98,	// (0x0001bc67) cam6_zoom_pane_cp01

0xeba2,	// (0x0001bc71) cam6_pano_image_pane

0xebab,	// (0x0001bc7a) cam6_pano_pane_g1

0xe0e2,	// (0x0001b1b1) cam6_pano_pane_g2

0xebb4,	// (0x0001bc83) cam6_pano_pane_g3

0xebbd,	// (0x0001bc8c) cam6_pano_pane_g4

0xca5f,	// (0x00019b2e) cam6_pano_pane_g5

0xebc6,	// (0x0001bc95) cam6_pano_pane_g6

0xebce,	// (0x0001bc9d) cam6_pano_pane_g7

0xebd6,	// (0x0001bca5) cam6_pano_pane_g8

0xebdf,	// (0x0001bcae) cam6_pano_pane_g9

0x0008,

0xfe3e,	// (0x0001cf0d) cam6_pano_pane_g

0x9596,	// (0x00016665) main_browser_tag_pane

0xe918,	// (0x0001b9e7) grid_navstr_albumart_pane

0xebea,	// (0x0001bcb9) cell_navstr_albumart_pane_ParamLimits

0xebea,	// (0x0001bcb9) cell_navstr_albumart_pane

0xec06,	// (0x0001bcd5) cell_navstr_albumart_pane_g1

0xbd2e,	// (0x00018dfd) cell_navstr_albumart_pane_g2

0xbd3e,	// (0x00018e0d) cell_navstr_albumart_pane_g3

0xbd36,	// (0x00018e05) cell_navstr_albumart_pane_g4

0x0003,

0xfe51,	// (0x0001cf20) cell_navstr_albumart_pane_g

0x8d28,	// (0x00015df7) bt_list_pane_ParamLimits

0x8d28,	// (0x00015df7) bt_list_pane

0x8d3e,	// (0x00015e0d) bt_list_pane_t1

0x8d4d,	// (0x00015e1c) bt_list_pane_t2

0x0001,

0xfe5a,	// (0x0001cf29) bt_list_pane_t

0x9596,	// (0x00016665) main_cale_prevew_pane

0x8d5c,	// (0x00015e2b) popup_cale_preview_window_ParamLimits

0x8d5c,	// (0x00015e2b) popup_cale_preview_window

0x9607,	// (0x000166d6) bg_popup_preview_window_pane_cp05_ParamLimits

0x9607,	// (0x000166d6) bg_popup_preview_window_pane_cp05

0xec0e,	// (0x0001bcdd) list_cale_preview_pane_ParamLimits

0xec0e,	// (0x0001bcdd) list_cale_preview_pane

0x8d77,	// (0x00015e46) list_double_cale_preview_pane_ParamLimits

0x8d77,	// (0x00015e46) list_double_cale_preview_pane

0x8d8b,	// (0x00015e5a) list_single_cale_preview_pane_ParamLimits

0x8d8b,	// (0x00015e5a) list_single_cale_preview_pane

0x8da3,	// (0x00015e72) list_single_cale_preview_pane_g1

0x8dab,	// (0x00015e7a) list_single_cale_preview_pane_t1_ParamLimits

0x8dab,	// (0x00015e7a) list_single_cale_preview_pane_t1

0x8dc0,	// (0x00015e8f) list_double_cale_preview_pane_g1

0x8dc8,	// (0x00015e97) list_double_cale_preview_pane_t1_ParamLimits

0x8dc8,	// (0x00015e97) list_double_cale_preview_pane_t1

0x8ddd,	// (0x00015eac) list_double_cale_preview_pane_t2_ParamLimits

0x8ddd,	// (0x00015eac) list_double_cale_preview_pane_t2

0x0001,

0xfe5f,	// (0x0001cf2e) list_double_cale_preview_pane_t_ParamLimits

0xfe5f,	// (0x0001cf2e) list_double_cale_preview_pane_t

0x9596,	// (0x00016665) main_ezdial_pane

0x9607,	// (0x000166d6) main_sp_fs_email_pane_ParamLimits

0x8504,	// (0x000155d3) cmail_ddmenu_btn01_pane_ParamLimits

0x8504,	// (0x000155d3) cmail_ddmenu_btn01_pane

0x8517,	// (0x000155e6) cmail_ddmenu_btn02_pane_ParamLimits

0x8517,	// (0x000155e6) cmail_ddmenu_btn02_pane

0x853a,	// (0x00015609) cmail_ddmenu_btn03_pane_ParamLimits

0x853a,	// (0x00015609) cmail_ddmenu_btn03_pane

0x855e,	// (0x0001562d) main_sp_fs_ctrlbar_pane_ParamLimits

0x8582,	// (0x00015651) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x89e6,	// (0x00015ab5) list_cmail_body_pane_ParamLimits

0xe83c,	// (0x0001b90b) bg_button_pane_cp12

0xe851,	// (0x0001b920) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x0001b920) list_single_cmail_header_detail_pane_g3

0x8a78,	// (0x00015b47) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8a78,	// (0x00015b47) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde4,	// (0x0001ceb3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde4,	// (0x0001ceb3) list_single_cmail_header_detail_pane_t

0xe980,	// (0x0001ba4f) phacti_term_pane_t2_ParamLimits

0xe980,	// (0x0001ba4f) phacti_term_pane_t2

0x0001,

0xfdee,	// (0x0001cebd) phacti_term_pane_t_ParamLimits

0xfdee,	// (0x0001cebd) phacti_term_pane_t

0xec1a,	// (0x0001bce9) aid_size_list_single_double

0x8df5,	// (0x00015ec4) popup_ezdial_listscroll_window

0x8e11,	// (0x00015ee0) popup_number_entry_window_cp01

0xaaa8,	// (0x00017b77) bg_popup_call_pane_cp09

0xec26,	// (0x0001bcf5) ezdial_list_pane

0xec2e,	// (0x0001bcfd) scroll_pane_cp23

0xbf15,	// (0x00018fe4) bg_button_pane_cp028_ParamLimits

0xbf15,	// (0x00018fe4) bg_button_pane_cp028

0x8e1f,	// (0x00015eee) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e1f,	// (0x00015eee) cmail_ddmenu_btn01_pane_g1

0x8e2b,	// (0x00015efa) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e2b,	// (0x00015efa) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe64,	// (0x0001cf33) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe64,	// (0x0001cf33) cmail_ddmenu_btn01_pane_g

0xec36,	// (0x0001bd05) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xec36,	// (0x0001bd05) cmail_ddmenu_btn01_pane_t1

0xbf15,	// (0x00018fe4) bg_button_pane_cp029_ParamLimits

0xbf15,	// (0x00018fe4) bg_button_pane_cp029

0x8e37,	// (0x00015f06) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e37,	// (0x00015f06) cmail_ddmenu_btn02_pane_g1

0x8e4f,	// (0x00015f1e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e4f,	// (0x00015f1e) cmail_ddmenu_btn02_pane_t1

0x9607,	// (0x000166d6) bg_button_pane_cp031_ParamLimits

0x9607,	// (0x000166d6) bg_button_pane_cp031

0x8e37,	// (0x00015f06) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e37,	// (0x00015f06) cmail_ddmenu_btn03_pane_g1

0x8e4f,	// (0x00015f1e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e4f,	// (0x00015f1e) cmail_ddmenu_btn03_pane_t1

0x6003,	// (0x000130d2) cell_dialer2_keypad_pane_t1_ParamLimits

0x601d,	// (0x000130ec) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x601d,	// (0x000130ec) cell_dialer2_keypad_pane_t1_copy1

0x7e23,	// (0x00014ef2) ncimui_group_button_pane

0x9607,	// (0x000166d6) main_sp_fs_calendar_pane_ParamLimits

0x89fe,	// (0x00015acd) list_single_cmail_header_caption_pane_ParamLimits

0xe9cb,	// (0x0001ba9a) aid_recal_txt_sm_pane

0x9596,	// (0x00016665) mian_recal_day_pane

0xea0a,	// (0x0001bad9) popup_sp_fs_cale_preview_window_ParamLimits

0x9596,	// (0x00016665) list_recal_day_pane

0xec6d,	// (0x0001bd3c) list_single_recal_day_pane_ParamLimits

0xec6d,	// (0x0001bd3c) list_single_recal_day_pane

0xec7f,	// (0x0001bd4e) list_single_recal_day_pane_g1_ParamLimits

0xec7f,	// (0x0001bd4e) list_single_recal_day_pane_g1

0xec8b,	// (0x0001bd5a) list_single_recal_day_pane_g2_ParamLimits

0xec8b,	// (0x0001bd5a) list_single_recal_day_pane_g2

0xec97,	// (0x0001bd66) list_single_recal_day_pane_g3_ParamLimits

0xec97,	// (0x0001bd66) list_single_recal_day_pane_g3

0x8e73,	// (0x00015f42) list_single_recal_day_pane_g4_ParamLimits

0x8e73,	// (0x00015f42) list_single_recal_day_pane_g4

0xeca3,	// (0x0001bd72) list_single_recal_day_pane_g5_ParamLimits

0xeca3,	// (0x0001bd72) list_single_recal_day_pane_g5

0xecaf,	// (0x0001bd7e) list_single_recal_day_pane_g6_ParamLimits

0xecaf,	// (0x0001bd7e) list_single_recal_day_pane_g6

0x0005,

0xfe73,	// (0x0001cf42) list_single_recal_day_pane_g_ParamLimits

0xfe73,	// (0x0001cf42) list_single_recal_day_pane_g

0xecbb,	// (0x0001bd8a) list_single_recal_day_pane_t1

0xecc9,	// (0x0001bd98) list_single_recal_day_pane_t2

0x0001,

0xfe80,	// (0x0001cf4f) list_single_recal_day_pane_t

0x8e81,	// (0x00015f50) ncimui_query_button_pane_ParamLimits

0x8e81,	// (0x00015f50) ncimui_query_button_pane

0x8e91,	// (0x00015f60) ncimui_query_button_pane_t1_ParamLimits

0x8e91,	// (0x00015f60) ncimui_query_button_pane_t1

0xecd7,	// (0x0001bda6) ncimui_query_button_pane_t2_ParamLimits

0xecd7,	// (0x0001bda6) ncimui_query_button_pane_t2

0x0001,

0xfe85,	// (0x0001cf54) ncimui_query_button_pane_t_ParamLimits

0xfe85,	// (0x0001cf54) ncimui_query_button_pane_t

0x8ea4,	// (0x00015f73) query_button_pane_ParamLimits

0x8ea4,	// (0x00015f73) query_button_pane

0x9596,	// (0x00016665) bg_button_pane_cp0028

0xecea,	// (0x0001bdb9) query_button_pane_t1

0x40a3,	// (0x00011172) main_tport_pane_ParamLimits

0x88ed,	// (0x000159bc) bg_popup_window_pane_cp01_ParamLimits

0x88ed,	// (0x000159bc) bg_popup_window_pane_cp01

0x8903,	// (0x000159d2) heading_pane_cp08_ParamLimits

0x8903,	// (0x000159d2) heading_pane_cp08

0x8914,	// (0x000159e3) heading_pane_cp07_ParamLimits

0x8914,	// (0x000159e3) heading_pane_cp07

0x8988,	// (0x00015a57) cell_tport_appsw_pane_g2

0x0002,

0xfdd1,	// (0x0001cea0) cell_tport_appsw_pane_g

0x35ee,	// (0x000106bd) input_candi_list_open_g1

0xa521,	// (0x000175f0) list_cale_time_pane_g6_ParamLimits

0xa521,	// (0x000175f0) list_cale_time_pane_g6

0x4e91,	// (0x00011f60) aid_size_touch_calib_1_ParamLimits

0x4e91,	// (0x00011f60) aid_size_touch_calib_1

0x4e9d,	// (0x00011f6c) aid_size_touch_calib_2_ParamLimits

0x4e9d,	// (0x00011f6c) aid_size_touch_calib_2

0x4eb3,	// (0x00011f82) aid_size_touch_calib_3_ParamLimits

0x4eb3,	// (0x00011f82) aid_size_touch_calib_3

0x4ed1,	// (0x00011fa0) aid_size_touch_calib_4_ParamLimits

0x4ed1,	// (0x00011fa0) aid_size_touch_calib_4

0x4ee7,	// (0x00011fb6) main_touch_calib_button_group_pane_ParamLimits

0x4ee7,	// (0x00011fb6) main_touch_calib_button_group_pane

0x4efe,	// (0x00011fcd) main_touch_calib_pane_g1_ParamLimits

0x4f0a,	// (0x00011fd9) main_touch_calib_pane_g2_ParamLimits

0x4f16,	// (0x00011fe5) main_touch_calib_pane_g3_ParamLimits

0x4f22,	// (0x00011ff1) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0001c887) main_touch_calib_pane_g_ParamLimits

0x4f2e,	// (0x00011ffd) main_touch_calib_pane_t1_ParamLimits

0x4f48,	// (0x00012017) main_touch_calib_pane_t2_ParamLimits

0x4f62,	// (0x00012031) main_touch_calib_pane_t3_ParamLimits

0x4f76,	// (0x00012045) main_touch_calib_pane_t4_ParamLimits

0x4f8a,	// (0x00012059) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0001c890) main_touch_calib_pane_t_ParamLimits

0xc7f4,	// (0x000198c3) list_single_fp_cale_pane_g3_ParamLimits

0xc7f4,	// (0x000198c3) list_single_fp_cale_pane_g3

0x9607,	// (0x000166d6) bg_button_pane_cp012_ParamLimits

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp03_ParamLimits

0x70e7,	// (0x000141b6) cell_vitu2_function_top_pane_g1_ParamLimits

0x9607,	// (0x000166d6) bg_vkb2_func_pane_cp04_ParamLimits

0x7dd7,	// (0x00014ea6) main_ncimui_button_group_pane_ParamLimits

0x7dd7,	// (0x00014ea6) main_ncimui_button_group_pane

0x7e11,	// (0x00014ee0) main_ncimui_pane_t3_ParamLimits

0x7e11,	// (0x00014ee0) main_ncimui_pane_t3

0xe92e,	// (0x0001b9fd) phacti_button_group_pane

0xec1a,	// (0x0001bce9) aid_size_list_single_double_ParamLimits

0x8df5,	// (0x00015ec4) popup_ezdial_listscroll_window_ParamLimits

0x8e11,	// (0x00015ee0) popup_number_entry_window_cp01_ParamLimits

0x8eb7,	// (0x00015f86) phacti_button_pane_ParamLimits

0x8eb7,	// (0x00015f86) phacti_button_pane

0x9596,	// (0x00016665) bg_button_pane_cp14

0xecf8,	// (0x0001bdc7) phacti_button_pane_t1

0x8ec8,	// (0x00015f97) main_touch_calib_button_pane_ParamLimits

0x8ec8,	// (0x00015f97) main_touch_calib_button_pane

0x9d70,	// (0x00016e3f) bg_button_pane_cp18_ParamLimits

0x9d70,	// (0x00016e3f) bg_button_pane_cp18

0xed06,	// (0x0001bdd5) main_touch_calib_button_pane_t1_ParamLimits

0xed06,	// (0x0001bdd5) main_touch_calib_button_pane_t1

0xed1c,	// (0x0001bdeb) main_touch_calib_button_pane_t2_ParamLimits

0xed1c,	// (0x0001bdeb) main_touch_calib_button_pane_t2

0x0001,

0xfe8a,	// (0x0001cf59) main_touch_calib_button_pane_t_ParamLimits

0xfe8a,	// (0x0001cf59) main_touch_calib_button_pane_t

0x9596,	// (0x00016665) cell_ncimui_button_pane

0x9596,	// (0x00016665) bg_button_pane_cp032

0xed3a,	// (0x0001be09) cell_ncimui_button_pane_t1

0xcfda,	// (0x0001a0a9) image3_infobar_pane_ParamLimits

0xcfda,	// (0x0001a0a9) image3_infobar_pane

0x81a1,	// (0x00015270) fs_bigclock_status_pane_ParamLimits

0x81a1,	// (0x00015270) fs_bigclock_status_pane

0x81ae,	// (0x0001527d) main_fs_bigclock_clock_pane_ParamLimits

0x81ae,	// (0x0001527d) main_fs_bigclock_clock_pane

0x81c1,	// (0x00015290) main_fs_bigclock_indi_pane_ParamLimits

0x81c1,	// (0x00015290) main_fs_bigclock_indi_pane

0x81dc,	// (0x000152ab) main_fs_bigclock_swipe_pane_ParamLimits

0x81dc,	// (0x000152ab) main_fs_bigclock_swipe_pane

0x9596,	// (0x00016665) main_fs_clock_dumped_data

0xe1ef,	// (0x0001b2be) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe1ef,	// (0x0001b2be) list_single_fs_bigclock_indicator_pane_g1

0xe20f,	// (0x0001b2de) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe20f,	// (0x0001b2de) list_single_fs_bigclock_indicator_pane_g2

0xe229,	// (0x0001b2f8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe229,	// (0x0001b2f8) list_single_fs_bigclock_indicator_pane_g3

0xe245,	// (0x0001b314) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe245,	// (0x0001b314) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0001cd91) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0001cd91) list_single_fs_bigclock_indicator_pane_g

0xe26b,	// (0x0001b33a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe26b,	// (0x0001b33a) list_single_fs_bigclock_indicator_pane_t1

0xe293,	// (0x0001b362) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe293,	// (0x0001b362) list_single_fs_bigclock_indicator_pane_t2

0xe2bb,	// (0x0001b38a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe2bb,	// (0x0001b38a) list_single_fs_bigclock_indicator_pane_t3

0xe2e5,	// (0x0001b3b4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe2e5,	// (0x0001b3b4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0001cd9c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0001cd9c) list_single_fs_bigclock_indicator_pane_t

0xed48,	// (0x0001be17) image3_infobar_fav_pane_ParamLimits

0xed48,	// (0x0001be17) image3_infobar_fav_pane

0xed58,	// (0x0001be27) image3_infobar_loc_pane_ParamLimits

0xed58,	// (0x0001be27) image3_infobar_loc_pane

0xed6e,	// (0x0001be3d) image3_infobar_time_pane_ParamLimits

0xed6e,	// (0x0001be3d) image3_infobar_time_pane

0xc44a,	// (0x00019519) image3_infobar_time_pane_g1

0xed7e,	// (0x0001be4d) image3_infobar_time_pane_t1

0xc44a,	// (0x00019519) image3_infobar_loc_pane_g1

0xed8c,	// (0x0001be5b) image3_infobar_loc_pane_g2

0x0001,

0xfe8f,	// (0x0001cf5e) image3_infobar_loc_pane_g

0xed94,	// (0x0001be63) image3_infobar_loc_pane_t1

0xc44a,	// (0x00019519) image3_infobar_fav_pane_g1

0xeda2,	// (0x0001be71) image3_infobar_fav_pane_g2

0x0001,

0xfe94,	// (0x0001cf63) image3_infobar_fav_pane_g

0xedaa,	// (0x0001be79) fs_bigclock_status_battery_pane

0xedb3,	// (0x0001be82) fs_bigclock_status_signal_pane

0xedbc,	// (0x0001be8b) fs_bigclock_status_title_pane

0xedc5,	// (0x0001be94) fs_bigclock_status_signal_pane_g1

0xedce,	// (0x0001be9d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe99,	// (0x0001cf68) fs_bigclock_status_signal_pane_g

0xedd6,	// (0x0001bea5) fs_bigclock_status_battery_pane_g1

0xeddf,	// (0x0001beae) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9e,	// (0x0001cf6d) fs_bigclock_status_battery_pane_g

0xede7,	// (0x0001beb6) fs_bigclock_status_title_pane_t1

0xc44a,	// (0x00019519) main_fs_bigclock_clock_pane_g1

0xedf5,	// (0x0001bec4) main_fs_bigclock_clock_pane_g2

0xedf5,	// (0x0001bec4) main_fs_bigclock_clock_pane_g3

0xedf5,	// (0x0001bec4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea3,	// (0x0001cf72) main_fs_bigclock_clock_pane_g

0xee01,	// (0x0001bed0) main_fs_bigclock_clock_pane_t1

0xee0f,	// (0x0001bede) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeac,	// (0x0001cf7b) main_fs_bigclock_clock_pane_t

0xee1e,	// (0x0001beed) list_single_fs_bigclock_indicator_pane_ParamLimits

0xee1e,	// (0x0001beed) list_single_fs_bigclock_indicator_pane

0x8edd,	// (0x00015fac) list_single_fs_bigclock_pane_ParamLimits

0x8edd,	// (0x00015fac) list_single_fs_bigclock_pane

0xee38,	// (0x0001bf07) main_fs_bigclock_indicator_pane_t1

0xee47,	// (0x0001bf16) list_single_fs_bigclock_pane_g1

0xee4f,	// (0x0001bf1e) list_single_fs_bigclock_pane_t1

0xc44a,	// (0x00019519) main_fs_bigclock_swipe_pane_g1

0xee8d,	// (0x0001bf5c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebd,	// (0x0001cf8c) main_fs_bigclock_swipe_pane_g

0xee95,	// (0x0001bf64) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xee95,	// (0x0001bf64) main_fs_bigclock_swipe_pane_t1

0x2d72,	// (0x0000fe41) call_type_pane_ParamLimits

0x9596,	// (0x00016665) main_btmg_pane

0xeb03,	// (0x0001bbd2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeb03,	// (0x0001bbd2) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe30,	// (0x0001ceff) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe30,	// (0x0001ceff) list_single_cale_mrui_row_pane_g

0xec54,	// (0x0001bd23) list_recal_vselct_arw_lo_pane

0xec5c,	// (0x0001bd2b) list_recal_vselct_arw_up_pane

0xec64,	// (0x0001bd33) list_recal_vselct_pane

0xeeb2,	// (0x0001bf81) btmg_button_pane

0x8f43,	// (0x00016012) main_btmg_pane_g1

0x9596,	// (0x00016665) bg_button_pane_cp044

0xeebc,	// (0x0001bf8b) btmg_button_pane_t1

0xbf0d,	// (0x00018fdc) aid_listscroll_gen

0x9607,	// (0x000166d6) main_cntbar_detail_pane

0xe81d,	// (0x0001b8ec) list_cmail_folder_pane

0xe82d,	// (0x0001b8fc) sp_fs_scroll_pane_cp03_ParamLimits

0x8f4d,	// (0x0001601c) list_single_fs_dyc_pane_cp01_ParamLimits

0x8f4d,	// (0x0001601c) list_single_fs_dyc_pane_cp01

0xeeca,	// (0x0001bf99) aid_size_cmail_indent

0xeed3,	// (0x0001bfa2) list_single_dyc_row_pane_cp01

0x8f9d,	// (0x0001606c) cntbar_detail_list_pane_ParamLimits

0x8f9d,	// (0x0001606c) cntbar_detail_list_pane

0x8fef,	// (0x000160be) main_cntbar_detail_cont_pane_ParamLimits

0x8fef,	// (0x000160be) main_cntbar_detail_cont_pane

0x2d0c,	// (0x0000fddb) scroll_pane_cp032_ParamLimits

0x2d0c,	// (0x0000fddb) scroll_pane_cp032

0x9003,	// (0x000160d2) cntbar_detail_list_event_pane_ParamLimits

0x9003,	// (0x000160d2) cntbar_detail_list_event_pane

0x8faf,	// (0x0001607e) cntbar_detail_list_shct_pane

0xa37c,	// (0x0001744b) aid_list_gen

0xeedc,	// (0x0001bfab) aid_scroll

0xeee5,	// (0x0001bfb4) aid_size_touch_scroll_bar

0xeeee,	// (0x0001bfbd) aid_list_double

0xeef7,	// (0x0001bfc6) aid_list_single

0x00fd,	// (0x0000d1cc) aid_list_single_lg

0xef00,	// (0x0001bfcf) aid_list_z_g_a_sm

0xef08,	// (0x0001bfd7) aid_list_z_g_d

0xef10,	// (0x0001bfdf) aid_txt_z_prm

0xef1e,	// (0x0001bfed) aid_txt_z_prm_cp01

0xef2c,	// (0x0001bffb) aid_txt_z_sec

0x9013,	// (0x000160e2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9013,	// (0x000160e2) main_cntbar_detail_cont_pane_g1

0x9027,	// (0x000160f6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9027,	// (0x000160f6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec2,	// (0x0001cf91) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec2,	// (0x0001cf91) main_cntbar_detail_cont_pane_g

0xef3a,	// (0x0001c009) main_cntbar_detail_cont_pane_t1

0xef48,	// (0x0001c017) main_cntbar_detail_cont_pane_t2

0xef56,	// (0x0001c025) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec7,	// (0x0001cf96) main_cntbar_detail_cont_pane_t

0x9037,	// (0x00016106) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9037,	// (0x00016106) cell_cntbar_detail_list_shct_pane

0xef64,	// (0x0001c033) cntbar_detail_list_shct_pane_g1

0xef6d,	// (0x0001c03c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfece,	// (0x0001cf9d) cntbar_detail_list_shct_pane_g

0x9049,	// (0x00016118) cntbar_detail_list_event_pane_g1_ParamLimits

0x9049,	// (0x00016118) cntbar_detail_list_event_pane_g1

0x9055,	// (0x00016124) cntbar_detail_list_event_pane_g2_ParamLimits

0x9055,	// (0x00016124) cntbar_detail_list_event_pane_g2

0x0005,

0xfed3,	// (0x0001cfa2) cntbar_detail_list_event_pane_g_ParamLimits

0xfed3,	// (0x0001cfa2) cntbar_detail_list_event_pane_g

0x90c3,	// (0x00016192) cntbar_detail_list_event_pane_t1_ParamLimits

0x90c3,	// (0x00016192) cntbar_detail_list_event_pane_t1

0x90d8,	// (0x000161a7) cntbar_detail_list_event_pane_t2_ParamLimits

0x90d8,	// (0x000161a7) cntbar_detail_list_event_pane_t2

0x0002,

0xfee0,	// (0x0001cfaf) cntbar_detail_list_event_pane_t_ParamLimits

0xfee0,	// (0x0001cfaf) cntbar_detail_list_event_pane_t

0xc44a,	// (0x00019519) cell_cntbar_detail_list_shct_pane_g1

0x3116,	// (0x000101e5) navi_pane_mv_g3

0x9607,	// (0x000166d6) main_cntbar_detail_pane_ParamLimits

0x9596,	// (0x00016665) main_notif_wgt_pane

0xcd98,	// (0x00019e67) aid_tch_main_mp4_pane_g4

0xcf6c,	// (0x0001a03b) popup_slider_window_cp02

0xec4b,	// (0x0001bd1a) list_recal_day_event_pane

0x8f6d,	// (0x0001603c) cntbar_detail_btn_pane_ParamLimits

0x8f6d,	// (0x0001603c) cntbar_detail_btn_pane

0x8f85,	// (0x00016054) cntbar_detail_btn_pane_cp01_ParamLimits

0x8f85,	// (0x00016054) cntbar_detail_btn_pane_cp01

0x8faf,	// (0x0001607e) cntbar_detail_list_shct_pane_ParamLimits

0x8fbf,	// (0x0001608e) cntbar_detail_pane_g1_ParamLimits

0x8fbf,	// (0x0001608e) cntbar_detail_pane_g1

0x8fd3,	// (0x000160a2) cntbar_detail_pane_t1_ParamLimits

0x8fd3,	// (0x000160a2) cntbar_detail_pane_t1

0x9061,	// (0x00016130) cntbar_detail_list_event_pane_g3_ParamLimits

0x9061,	// (0x00016130) cntbar_detail_list_event_pane_g3

0x9079,	// (0x00016148) cntbar_detail_list_event_pane_g4_ParamLimits

0x9079,	// (0x00016148) cntbar_detail_list_event_pane_g4

0x9091,	// (0x00016160) cntbar_detail_list_event_pane_g5_ParamLimits

0x9091,	// (0x00016160) cntbar_detail_list_event_pane_g5

0x90a9,	// (0x00016178) cntbar_detail_list_event_pane_g6_ParamLimits

0x90a9,	// (0x00016178) cntbar_detail_list_event_pane_g6

0x90ed,	// (0x000161bc) cntbar_detail_list_event_pane_t3_ParamLimits

0x90ed,	// (0x000161bc) cntbar_detail_list_event_pane_t3

0x90ff,	// (0x000161ce) popup_notif_wgt_window_ParamLimits

0x90ff,	// (0x000161ce) popup_notif_wgt_window

0x9118,	// (0x000161e7) popup_submenu_window_cp01_ParamLimits

0x9118,	// (0x000161e7) popup_submenu_window_cp01

0xaaa8,	// (0x00017b77) bg_popup_window_pane_cp10

0xef76,	// (0x0001c045) listscroll_notif_wgt_pane

0xef80,	// (0x0001c04f) list_notif_wgt_window

0xef89,	// (0x0001c058) scroll_pane_cp033

0xef92,	// (0x0001c061) list_notif_wgt_row_pane_ParamLimits

0xef92,	// (0x0001c061) list_notif_wgt_row_pane

0xefa6,	// (0x0001c075) aid_size_list_notif_wgt_del

0xefaf,	// (0x0001c07e) list_notif_wgt_row_pane_g1

0xefb7,	// (0x0001c086) list_notif_wgt_row_pane_g2

0xefbf,	// (0x0001c08e) list_notif_wgt_row_pane_g3

0x0002,

0xfee7,	// (0x0001cfb6) list_notif_wgt_row_pane_g

0xefc8,	// (0x0001c097) list_notif_wgt_row_pane_t1

0xefd6,	// (0x0001c0a5) list_notif_wgt_row_pane_t2

0xefe4,	// (0x0001c0b3) list_notif_wgt_row_pane_t3

0x0002,

0xfeee,	// (0x0001cfbd) list_notif_wgt_row_pane_t

0xd486,	// (0x0001a555) list_recal_day_event_pane_g1

0xeff2,	// (0x0001c0c1) list_recal_day_event_pane_t1

0x9596,	// (0x00016665) bg_button_pane_cp045

0xf001,	// (0x0001c0d0) cntbar_detail_btn_pane_t1

0xbf15,	// (0x00018fe4) main_callh_pane_ParamLimits

0xbf15,	// (0x00018fe4) main_callh_pane

0x9596,	// (0x00016665) main_coverflow0_pane

0x9596,	// (0x00016665) main_wgtman_pane

0x81ea,	// (0x000152b9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81ea,	// (0x000152b9) main_fs_bigclock_unlock_btn_pane

0x8978,	// (0x00015a47) bg_button_pane_cp16

0x8990,	// (0x00015a5f) cell_tport_appsw_pane_g3

0x912a,	// (0x000161f9) cf0_flow_pane_ParamLimits

0x912a,	// (0x000161f9) cf0_flow_pane

0xf00f,	// (0x0001c0de) listscroll_cf0_pane

0xf018,	// (0x0001c0e7) main_cf0_pane_g1

0x913f,	// (0x0001620e) main_cf0_pane_t1_ParamLimits

0x913f,	// (0x0001620e) main_cf0_pane_t1

0x9157,	// (0x00016226) main_cf0_pane_t2_ParamLimits

0x9157,	// (0x00016226) main_cf0_pane_t2

0x0001,

0xfef5,	// (0x0001cfc4) main_cf0_pane_t_ParamLimits

0xfef5,	// (0x0001cfc4) main_cf0_pane_t

0xf022,	// (0x0001c0f1) scroll_pane_cp11

0x916f,	// (0x0001623e) cf0_flow_pane_g1

0x917b,	// (0x0001624a) cf0_flow_pane_g2

0x0001,

0xfefa,	// (0x0001cfc9) cf0_flow_pane_g

0x9187,	// (0x00016256) cf0_flow_pane_t1

0x9596,	// (0x00016665) main_call6_pane

0x9596,	// (0x00016665) main_calllock_pane

0x9199,	// (0x00016268) call6_btn_grp_pane_ParamLimits

0x9199,	// (0x00016268) call6_btn_grp_pane

0x91b5,	// (0x00016284) call6_pane_g1_ParamLimits

0x91b5,	// (0x00016284) call6_pane_g1

0x91cb,	// (0x0001629a) popup_call6_1st_window_ParamLimits

0x91cb,	// (0x0001629a) popup_call6_1st_window

0x91dc,	// (0x000162ab) popup_call6_2nd_window_ParamLimits

0x91dc,	// (0x000162ab) popup_call6_2nd_window

0x91ed,	// (0x000162bc) cell_call6_btn_pane_ParamLimits

0x91ed,	// (0x000162bc) cell_call6_btn_pane

0xaaa8,	// (0x00017b77) bg_popup_call2_in_pane_cp03

0xf02d,	// (0x0001c0fc) popup_call6_1st_window_g1

0xf035,	// (0x0001c104) popup_call6_1st_window_g2

0xf03d,	// (0x0001c10c) popup_call6_1st_window_g3

0x0002,

0xfeff,	// (0x0001cfce) popup_call6_1st_window_g

0xf045,	// (0x0001c114) popup_call6_1st_window_t1

0xf054,	// (0x0001c123) popup_call6_1st_window_t2

0xf064,	// (0x0001c133) popup_call6_1st_window_t3

0x0002,

0xff06,	// (0x0001cfd5) popup_call6_1st_window_t

0xaaa8,	// (0x00017b77) bg_popup_call2_in_pane_cp04

0xf02d,	// (0x0001c0fc) popup_call6_2nd_window_g1

0xf035,	// (0x0001c104) popup_call6_2nd_window_g2

0xf03d,	// (0x0001c10c) popup_call6_2nd_window_g3

0x0002,

0xfeff,	// (0x0001cfce) popup_call6_2nd_window_g

0xf045,	// (0x0001c114) popup_call6_2nd_window_t1

0x9596,	// (0x00016665) bg_button_pane_cp15

0xf074,	// (0x0001c143) cell_call6_btn_pane_g1

0xf07d,	// (0x0001c14c) cell_call6_btn_pane_t1

0x9201,	// (0x000162d0) listscroll_wgtman_pane_ParamLimits

0x9201,	// (0x000162d0) listscroll_wgtman_pane

0x9219,	// (0x000162e8) wgtman_btn_pane_ParamLimits

0x9219,	// (0x000162e8) wgtman_btn_pane

0xa96e,	// (0x00017a3d) aid_scroll_copy1

0xf08c,	// (0x0001c15b) list_wgtman_pane

0x9232,	// (0x00016301) wgtman_btn_pane_g1_ParamLimits

0x9232,	// (0x00016301) wgtman_btn_pane_g1

0x9246,	// (0x00016315) wgtman_btn_pane_t1_ParamLimits

0x9246,	// (0x00016315) wgtman_btn_pane_t1

0xf096,	// (0x0001c165) wgtman_btn_pane_t2_ParamLimits

0xf096,	// (0x0001c165) wgtman_btn_pane_t2

0x0001,

0xff0d,	// (0x0001cfdc) wgtman_btn_pane_t_ParamLimits

0xff0d,	// (0x0001cfdc) wgtman_btn_pane_t

0xf0aa,	// (0x0001c179) listrow_wgtman_pane_ParamLimits

0xf0aa,	// (0x0001c179) listrow_wgtman_pane

0xf0be,	// (0x0001c18d) listrow_wgtman_pane_g1

0x9261,	// (0x00016330) listrow_wgtman_pane_g2

0x0001,

0xff12,	// (0x0001cfe1) listrow_wgtman_pane_g

0xf0c7,	// (0x0001c196) listrow_wgtman_pane_t1

0xf0d5,	// (0x0001c1a4) listrow_wgtman_pane_t2

0x0001,

0xff17,	// (0x0001cfe6) listrow_wgtman_pane_t

0xf0e3,	// (0x0001c1b2) wait_bar_pane_cp09

0xf0eb,	// (0x0001c1ba) main_calllock_btn_pane

0xf0f5,	// (0x0001c1c4) main_calllock_pane_g1

0x9596,	// (0x00016665) bg_button_pane_cp17

0xf101,	// (0x0001c1d0) main_calllock_btn_pane_g1

0xf10a,	// (0x0001c1d9) main_calllock_btn_pane_t1

0x9596,	// (0x00016665) main_dialer3_pane

0x9596,	// (0x00016665) main_fmrd2_pane

0xc44a,	// (0x00019519) main_fs_bigclock_unlock_btn_pane_g1

0xf121,	// (0x0001c1f0) main_fs_bigclock_unlock_btn_pane_t1

0x926b,	// (0x0001633a) area_fmrd2_info_pane_ParamLimits

0x926b,	// (0x0001633a) area_fmrd2_info_pane

0x927f,	// (0x0001634e) area_fmrd2_visual_pane_ParamLimits

0x927f,	// (0x0001634e) area_fmrd2_visual_pane

0x928d,	// (0x0001635c) fmrd2_indi_pane_ParamLimits

0x928d,	// (0x0001635c) fmrd2_indi_pane

0x929a,	// (0x00016369) area_fmrd2_visual_pane_g1

0x92a2,	// (0x00016371) area_fmrd2_visual_pane_t1

0x92b2,	// (0x00016381) area_fmrd2_visual_pane_t2

0x92c2,	// (0x00016391) area_fmrd2_visual_pane_t3

0x0002,

0xff21,	// (0x0001cff0) area_fmrd2_visual_pane_t

0x92d2,	// (0x000163a1) area_fmrd2_info_pane_g1

0x92da,	// (0x000163a9) area_fmrd2_info_pane_t1

0x92ea,	// (0x000163b9) area_fmrd2_info_pane_t2

0x92fa,	// (0x000163c9) area_fmrd2_info_pane_t3

0x930a,	// (0x000163d9) area_fmrd2_info_pane_t4

0x0003,

0xff28,	// (0x0001cff7) area_fmrd2_info_pane_t

0x931a,	// (0x000163e9) fmrd2_indi_pane_t1

0x932a,	// (0x000163f9) fmrd2_indi_pane_t2

0x933a,	// (0x00016409) fmrd2_indi_pane_t3

0x0002,

0xff31,	// (0x0001d000) fmrd2_indi_pane_t

0xe254,	// (0x0001b323) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe254,	// (0x0001b323) list_single_fs_bigclock_indicator_pane_g5

0xe2fa,	// (0x0001b3c9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe2fa,	// (0x0001b3c9) list_single_fs_bigclock_indicator_pane_t5

0x8b5a,	// (0x00015c29) aid_cell_bcale_month_pane_ParamLimits

0x8b5a,	// (0x00015c29) aid_cell_bcale_month_pane

0x8b6c,	// (0x00015c3b) bcale_month_pane_ParamLimits

0x8b6c,	// (0x00015c3b) bcale_month_pane

0x8b84,	// (0x00015c53) bcale_preview_pane_ParamLimits

0x8b84,	// (0x00015c53) bcale_preview_pane

0xee4f,	// (0x0001bf1e) list_single_fs_bigclock_pane_t1_ParamLimits

0xee69,	// (0x0001bf38) list_single_fs_bigclock_pane_t2_ParamLimits

0xee69,	// (0x0001bf38) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb8,	// (0x0001cf87) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb8,	// (0x0001cf87) list_single_fs_bigclock_pane_t

0xf119,	// (0x0001c1e8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1c,	// (0x0001cfeb) main_fs_bigclock_unlock_btn_pane_g

0x934a,	// (0x00016419) aid_dia3_key_size_ParamLimits

0x934a,	// (0x00016419) aid_dia3_key_size

0x9359,	// (0x00016428) aid_dia3_listrow_size_ParamLimits

0x9359,	// (0x00016428) aid_dia3_listrow_size

0x9367,	// (0x00016436) dia3_keypad_fun_pane_ParamLimits

0x9367,	// (0x00016436) dia3_keypad_fun_pane

0x9383,	// (0x00016452) dia3_keypad_num_pane_ParamLimits

0x9383,	// (0x00016452) dia3_keypad_num_pane

0x939c,	// (0x0001646b) dia3_listscroll_pane_ParamLimits

0x939c,	// (0x0001646b) dia3_listscroll_pane

0x93af,	// (0x0001647e) dia3_numentry_pane_ParamLimits

0x93af,	// (0x0001647e) dia3_numentry_pane

0x00b6,	// (0x0000d185) dia3_list_pane

0x00c1,	// (0x0000d190) scroll_pane_cp12

0x9596,	// (0x00016665) bg_dia3_numentry_pane

0x00cc,	// (0x0000d19b) dia3_numentry_pane_t1

0x93c0,	// (0x0001648f) cell_dia3_key_num_pane

0x93c8,	// (0x00016497) cell_dia3_key0_fun_pane_ParamLimits

0x93c8,	// (0x00016497) cell_dia3_key0_fun_pane

0x93dc,	// (0x000164ab) cell_dia3_key1_fun_pane_ParamLimits

0x93dc,	// (0x000164ab) cell_dia3_key1_fun_pane

0x93f4,	// (0x000164c3) dia3_listrow_pane

0xdf7a,	// (0x0001b049) bg_dia3_numentry_pane_g1

0x9596,	// (0x00016665) bg_button_pane_cp21

0x0106,	// (0x0000d1d5) cell_dia3_key_num_pane_t1

0x0114,	// (0x0000d1e3) cell_dia3_key_num_pane_t2

0x0123,	// (0x0000d1f2) cell_dia3_key_num_pane_t3

0x0132,	// (0x0000d201) cell_dia3_key_num_pane_t4

0x0003,

0xff38,	// (0x0001d007) cell_dia3_key_num_pane_t

0x9596,	// (0x00016665) bg_button_pane_cp19

0x93fd,	// (0x000164cc) cell_dia3_key0_fun_pane_g1

0x9596,	// (0x00016665) bg_button_pane_cp20

0x9405,	// (0x000164d4) cell_dia3_key1_fun_pane_g1

0x940d,	// (0x000164dc) area_left_week_number_pane

0x9416,	// (0x000164e5) area_top_day_name_pane

0x941f,	// (0x000164ee) frame_month_view_pane

0x942b,	// (0x000164fa) grid_month_view_pane

0x9435,	// (0x00016504) cell_top_day_name_pane_ParamLimits

0x9435,	// (0x00016504) cell_top_day_name_pane

0x9451,	// (0x00016520) cell_area_left_week_number_pane_ParamLimits

0x9451,	// (0x00016520) cell_area_left_week_number_pane

0x9467,	// (0x00016536) cell_month_view_pane_ParamLimits

0x9467,	// (0x00016536) cell_month_view_pane

0x01c6,	// (0x0000d295) frm_month_g1

0x9488,	// (0x00016557) frm_month_g2

0x9492,	// (0x00016561) frm_month_g3

0x949c,	// (0x0001656b) frm_month_g4

0x94a6,	// (0x00016575) frm_month_g5

0x94b0,	// (0x0001657f) frm_month_g6

0x94bc,	// (0x0001658b) frm_month_g7

0x020b,	// (0x0000d2da) frm_month_g8

0x94c8,	// (0x00016597) frm_month_g9

0x94d1,	// (0x000165a0) frm_month_g10

0x94da,	// (0x000165a9) frm_month_g11

0x94e3,	// (0x000165b2) frm_month_g12

0x94ec,	// (0x000165bb) frm_month_g13

0x94f5,	// (0x000165c4) frm_month_g14

0x9500,	// (0x000165cf) frm_month_g15

0x950b,	// (0x000165da) frm_month_g16

0x000f,

0xff41,	// (0x0001d010) frm_month_g

0x9516,	// (0x000165e5) cell_top_day_name_pane_t1

0x9525,	// (0x000165f4) cell_area_left_week_number_pane_g1

0x9516,	// (0x000165e5) cell_area_left_week_number_pane_t1

0xc44a,	// (0x00019519) cell_month_view_pane_g1

0x952d,	// (0x000165fc) cell_month_view_pane_t1

0x9596,	// (0x00016665) main_fps_pane

0xe56c,	// (0x0001b63b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe56c,	// (0x0001b63b) cmail_ddmenu_btn02_pane_cp1

0xe588,	// (0x0001b657) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe588,	// (0x0001b657) cmail_ddmenu_btn02_pane_cp2

0x8e43,	// (0x00015f12) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e43,	// (0x00015f12) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe69,	// (0x0001cf38) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe69,	// (0x0001cf38) cmail_ddmenu_btn02_pane_g

0x8e61,	// (0x00015f30) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e61,	// (0x00015f30) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6e,	// (0x0001cf3d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6e,	// (0x0001cf3d) cmail_ddmenu_btn02_pane_t

0x953c,	// (0x0001660b) fps_text_pane_ParamLimits

0x953c,	// (0x0001660b) fps_text_pane

0x9553,	// (0x00016622) main_fps_pane_g1_ParamLimits

0x9553,	// (0x00016622) main_fps_pane_g1

0x956b,	// (0x0001663a) wait_bar_pane_cp010_ParamLimits

0x956b,	// (0x0001663a) wait_bar_pane_cp010

0x957e,	// (0x0001664d) fps_text_pane_t1_ParamLimits

0x957e,	// (0x0001664d) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal

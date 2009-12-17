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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000797d7 };

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
0x5ed4,	// (0x0007f6ab) Screen

0x5ee0,	// (0x0007f6b7) application_window

0x5f20,	// (0x0007f6f7) area_bottom_pane_ParamLimits

0x5f20,	// (0x0007f6f7) area_bottom_pane

0x5f55,	// (0x0007f72c) area_top_pane_ParamLimits

0x5f55,	// (0x0007f72c) area_top_pane

0xdff2,	// (0x000877c9) call_video_uplink_pane_ParamLimits

0xdff2,	// (0x000877c9) call_video_uplink_pane

0x5fe3,	// (0x0007f7ba) main_pane_ParamLimits

0x5fe3,	// (0x0007f7ba) main_pane

0x4a2e,	// (0x0007e205) context_pane

0x90f2,	// (0x000828c9) navi_pane

0x9116,	// (0x000828ed) popup_cale_events_window_ParamLimits

0x9116,	// (0x000828ed) popup_cale_events_window

0x4a41,	// (0x0007e218) popup_mup_playback_window

0x912e,	// (0x00082905) signal_pane

0xe749,	// (0x00087f20) main_browser_pane

0x112a,	// (0x0007a901) main_burst_pane

0x8fa4,	// (0x0008277b) main_calc_pane

0x112a,	// (0x0007a901) main_cale_day_pane

0xe749,	// (0x00087f20) main_cale_month_pane

0x112a,	// (0x0007a901) main_cale_week_pane

0x112a,	// (0x0007a901) main_call_pane

0xe423,	// (0x00087bfa) main_call_poc_pane

0x112a,	// (0x0007a901) main_camera_pane

0x112a,	// (0x0007a901) main_chi_dic_pane

0x0fcc,	// (0x0007a7a3) main_clock_pane

0xe423,	// (0x00087bfa) main_fmradio_pane

0x112a,	// (0x0007a901) main_graph_messa_pane

0xe423,	// (0x00087bfa) main_help_pane

0xe749,	// (0x00087f20) main_im_pane

0xe67e,	// (0x00087e55) main_image_pane_ParamLimits

0xe67e,	// (0x00087e55) main_image_pane

0xe423,	// (0x00087bfa) main_location2_pane

0x112a,	// (0x0007a901) main_location_pane

0xe423,	// (0x00087bfa) main_messa_pane

0xe423,	// (0x00087bfa) main_mp2_pane

0x112a,	// (0x0007a901) main_mp_pane

0xe423,	// (0x00087bfa) main_msg_pane

0xe423,	// (0x00087bfa) main_mup_eq_pane

0xe423,	// (0x00087bfa) main_mup_pane

0x112a,	// (0x0007a901) main_notes_pane

0xe423,	// (0x00087bfa) main_pec_pane

0xe423,	// (0x00087bfa) main_phob_pane

0xe423,	// (0x00087bfa) main_pinb_pane

0xe423,	// (0x00087bfa) main_postcard_pane

0xe423,	// (0x00087bfa) main_qdial_pane

0x112a,	// (0x0007a901) main_skin_pane

0xe423,	// (0x00087bfa) main_smil2_pane

0x112a,	// (0x0007a901) main_smil_pane

0x112a,	// (0x0007a901) main_video_pane

0x112a,	// (0x0007a901) main_video_tele_pane

0xe67e,	// (0x00087e55) main_viewer_pane_ParamLimits

0xe67e,	// (0x00087e55) main_viewer_pane

0x112a,	// (0x0007a901) main_vorec_pane

0x8fdc,	// (0x000827b3) popup_blid_sat_info_window_ParamLimits

0x8fdc,	// (0x000827b3) popup_blid_sat_info_window

0x8ff6,	// (0x000827cd) popup_dyc_status_message_window_ParamLimits

0x8ff6,	// (0x000827cd) popup_dyc_status_message_window

0x9006,	// (0x000827dd) popup_grid_large_graphic_window_ParamLimits

0x9006,	// (0x000827dd) popup_grid_large_graphic_window

0x907e,	// (0x00082855) popup_loc_request_window_ParamLimits

0x907e,	// (0x00082855) popup_loc_request_window

0x90c6,	// (0x0008289d) popup_wml_address_window_ParamLimits

0x90c6,	// (0x0008289d) popup_wml_address_window

0x8e7c,	// (0x00082653) call_muted_g1

0x8b38,	// (0x0008230f) popup_call_audio_conf_window_ParamLimits

0x8b38,	// (0x0008230f) popup_call_audio_conf_window

0x8e8c,	// (0x00082663) popup_call_audio_first_window_ParamLimits

0x8e8c,	// (0x00082663) popup_call_audio_first_window

0x8ecc,	// (0x000826a3) popup_call_audio_in_window_ParamLimits

0x8ecc,	// (0x000826a3) popup_call_audio_in_window

0x8ef0,	// (0x000826c7) popup_call_audio_out_window_ParamLimits

0x8ef0,	// (0x000826c7) popup_call_audio_out_window

0x8f12,	// (0x000826e9) popup_call_audio_second_window_ParamLimits

0x8f12,	// (0x000826e9) popup_call_audio_second_window

0x8f42,	// (0x00082719) popup_call_audio_wait_window_ParamLimits

0x8f42,	// (0x00082719) popup_call_audio_wait_window

0x8f63,	// (0x0008273a) popup_number_entry_window_ParamLimits

0x8f63,	// (0x0008273a) popup_number_entry_window

0xe010,	// (0x000877e7) bg_popup_call_pane_cp05_ParamLimits

0xe010,	// (0x000877e7) bg_popup_call_pane_cp05

0xe030,	// (0x00087807) popup_number_entry_window_t1

0xe043,	// (0x0008781a) popup_number_entry_window_t2

0xe055,	// (0x0008782c) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00088906) popup_number_entry_window_t

0xe067,	// (0x0008783e) text_title_cp2

0xe07a,	// (0x00087851) bg_popup_call_pane_cp_ParamLimits

0xe07a,	// (0x00087851) bg_popup_call_pane_cp

0xe088,	// (0x0008785f) call_thumbnail_pane

0xe090,	// (0x00087867) popup_call_audio_in_window_g1_ParamLimits

0xe090,	// (0x00087867) popup_call_audio_in_window_g1

0xe09c,	// (0x00087873) popup_call_audio_in_window_g2_ParamLimits

0xe09c,	// (0x00087873) popup_call_audio_in_window_g2

0xe0a8,	// (0x0008787f) popup_call_audio_in_window_g3_ParamLimits

0xe0a8,	// (0x0008787f) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0008890f) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0008890f) popup_call_audio_in_window_g

0xe0b4,	// (0x0008788b) popup_call_audio_in_window_t1_ParamLimits

0xe0b4,	// (0x0008788b) popup_call_audio_in_window_t1

0xe0d0,	// (0x000878a7) popup_call_audio_in_window_t2_ParamLimits

0xe0d0,	// (0x000878a7) popup_call_audio_in_window_t2

0xe0ec,	// (0x000878c3) popup_call_audio_in_window_t3_ParamLimits

0xe0ec,	// (0x000878c3) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00088916) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00088916) popup_call_audio_in_window_t

0xe07a,	// (0x00087851) bg_popup_call_pane_cp01_ParamLimits

0xe07a,	// (0x00087851) bg_popup_call_pane_cp01

0xe088,	// (0x0008785f) call_thumbnail_pane_cp02

0xe0ff,	// (0x000878d6) call_type_pane_cp022

0xe107,	// (0x000878de) popup_call_audio_out_window_g1_ParamLimits

0xe107,	// (0x000878de) popup_call_audio_out_window_g1

0xe119,	// (0x000878f0) popup_call_audio_out_window_g2_ParamLimits

0xe119,	// (0x000878f0) popup_call_audio_out_window_g2

0xe125,	// (0x000878fc) popup_call_audio_out_window_g3_ParamLimits

0xe125,	// (0x000878fc) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0008891d) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0008891d) popup_call_audio_out_window_g

0xe137,	// (0x0008790e) popup_call_audio_out_window_t1_ParamLimits

0xe137,	// (0x0008790e) popup_call_audio_out_window_t1

0xe14f,	// (0x00087926) popup_call_audio_out_window_t2_ParamLimits

0xe14f,	// (0x00087926) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00088924) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00088924) popup_call_audio_out_window_t

0xe164,	// (0x0008793b) bg_popup_call_pane_ParamLimits

0xe164,	// (0x0008793b) bg_popup_call_pane

0x61cb,	// (0x0007f9a2) call_thumbnail_pane_cp_ParamLimits

0x61cb,	// (0x0007f9a2) call_thumbnail_pane_cp

0xe1e8,	// (0x000879bf) call_type_pane_cp01_ParamLimits

0xe1e8,	// (0x000879bf) call_type_pane_cp01

0xe22c,	// (0x00087a03) popup_call_audio_first_window_g1_ParamLimits

0xe22c,	// (0x00087a03) popup_call_audio_first_window_g1

0xe278,	// (0x00087a4f) popup_call_audio_first_window_g2_ParamLimits

0xe278,	// (0x00087a4f) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00088929) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00088929) popup_call_audio_first_window_g

0xe2bc,	// (0x00087a93) popup_call_audio_first_window_t1_ParamLimits

0xe2bc,	// (0x00087a93) popup_call_audio_first_window_t1

0xe368,	// (0x00087b3f) popup_call_audio_first_window_t4_ParamLimits

0xe368,	// (0x00087b3f) popup_call_audio_first_window_t4

0xe3f4,	// (0x00087bcb) popup_call_audio_first_window_t5_ParamLimits

0xe3f4,	// (0x00087bcb) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0008892e) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0008892e) popup_call_audio_first_window_t

0xe423,	// (0x00087bfa) bg_popup_call_pane_cp02

0xe42d,	// (0x00087c04) call_type_pane_cp023

0xe435,	// (0x00087c0c) popup_call_audio_wait_window_g1

0xe43d,	// (0x00087c14) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00088935) popup_call_audio_wait_window_g

0xe445,	// (0x00087c1c) popup_call_audio_wait_window_t3

0xe453,	// (0x00087c2a) bg_popup_call_pane_cp03_ParamLimits

0xe453,	// (0x00087c2a) bg_popup_call_pane_cp03

0xe4b3,	// (0x00087c8a) call_thumbnail_pane_cp011_ParamLimits

0xe4b3,	// (0x00087c8a) call_thumbnail_pane_cp011

0xe4bf,	// (0x00087c96) call_type_pane_cp034_ParamLimits

0xe4bf,	// (0x00087c96) call_type_pane_cp034

0xe4fb,	// (0x00087cd2) popup_call_audio_second_window_g1_ParamLimits

0xe4fb,	// (0x00087cd2) popup_call_audio_second_window_g1

0xe537,	// (0x00087d0e) popup_call_audio_second_window_g2_ParamLimits

0xe537,	// (0x00087d0e) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0008893a) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0008893a) popup_call_audio_second_window_g

0xe573,	// (0x00087d4a) popup_call_audio_second_window_t1_ParamLimits

0xe573,	// (0x00087d4a) popup_call_audio_second_window_t1

0xe5f4,	// (0x00087dcb) popup_call_audio_second_window_t2_ParamLimits

0xe5f4,	// (0x00087dcb) popup_call_audio_second_window_t2

0xe62a,	// (0x00087e01) popup_call_audio_second_window_t3_ParamLimits

0xe62a,	// (0x00087e01) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0008893f) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0008893f) popup_call_audio_second_window_t

0xe423,	// (0x00087bfa) bg_popup_call_pane_cp04

0xe660,	// (0x00087e37) list_conf_pane

0xe668,	// (0x00087e3f) popup_call_audio_conf_window_t1

0xe676,	// (0x00087e4d) call_thumbnail_pane_g1

0xe67e,	// (0x00087e55) bg_pinb_pane_ParamLimits

0xe67e,	// (0x00087e55) bg_pinb_pane

0xe68c,	// (0x00087e63) find_pinb_pane

0xe695,	// (0x00087e6c) listscroll_pinb_pane_ParamLimits

0xe695,	// (0x00087e6c) listscroll_pinb_pane

0xe6a4,	// (0x00087e7b) pinb_bg_pane_g1

0x61ef,	// (0x0007f9c6) pinb_bg_pane_g2

0x61fb,	// (0x0007f9d2) pinb_bg_pane_g3

0x6207,	// (0x0007f9de) pinb_bg_pane_g4

0x6213,	// (0x0007f9ea) pinb_bg_pane_g5

0x621f,	// (0x0007f9f6) pinb_bg_pane_g6

0x622a,	// (0x0007fa01) pinb_bg_pane_g7

0x6235,	// (0x0007fa0c) pinb_bg_pane_g8

0x6240,	// (0x0007fa17) pinb_bg_pane_g9

0x624a,	// (0x0007fa21) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00088946) pinb_bg_pane_g

0x6267,	// (0x0007fa3e) grid_pinb_pane

0x6272,	// (0x0007fa49) list_pinb_pane

0x627d,	// (0x0007fa54) scroll_pane_cp01_ParamLimits

0x627d,	// (0x0007fa54) scroll_pane_cp01

0xe6ae,	// (0x00087e85) find_pinb_pane_g1_ParamLimits

0xe6ae,	// (0x00087e85) find_pinb_pane_g1

0xe6c6,	// (0x00087e9d) find_pinb_pane_t1

0xe6d8,	// (0x00087eaf) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00088960) find_pinb_pane_t

0xe6ed,	// (0x00087ec4) input_focus_pane_cp01_ParamLimits

0xe6ed,	// (0x00087ec4) input_focus_pane_cp01

0x628f,	// (0x0007fa66) cell_pinb_pane_ParamLimits

0x628f,	// (0x0007fa66) cell_pinb_pane

0x62af,	// (0x0007fa86) cell_pinb_pane_g1_ParamLimits

0x62af,	// (0x0007fa86) cell_pinb_pane_g1

0x62c4,	// (0x0007fa9b) cell_pinb_pane_g2_ParamLimits

0x62c4,	// (0x0007fa9b) cell_pinb_pane_g2

0xe6f9,	// (0x00087ed0) cell_pinb_pane_g3_ParamLimits

0xe6f9,	// (0x00087ed0) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00088965) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00088965) cell_pinb_pane_g

0xe423,	// (0x00087bfa) grid_highlight_pane_cp01

0x62d0,	// (0x0007faa7) list_pinb_item_pane_ParamLimits

0x62d0,	// (0x0007faa7) list_pinb_item_pane

0xe423,	// (0x00087bfa) list_highlight_pane_cp02

0x62eb,	// (0x0007fac2) list_pinb_item_pane_g1_ParamLimits

0x62eb,	// (0x0007fac2) list_pinb_item_pane_g1

0x62f8,	// (0x0007facf) list_pinb_item_pane_g2_ParamLimits

0x62f8,	// (0x0007facf) list_pinb_item_pane_g2

0x6304,	// (0x0007fadb) list_pinb_item_pane_g3_ParamLimits

0x6304,	// (0x0007fadb) list_pinb_item_pane_g3

0x6315,	// (0x0007faec) list_pinb_item_pane_g4_ParamLimits

0x6315,	// (0x0007faec) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0008896c) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0008896c) list_pinb_item_pane_g

0x6321,	// (0x0007faf8) list_pinb_item_pane_t1_ParamLimits

0x6321,	// (0x0007faf8) list_pinb_item_pane_t1

0x6352,	// (0x0007fb29) calc_display_pane

0x6370,	// (0x0007fb47) calc_paper_pane

0x638c,	// (0x0007fb63) grid_calc_pane

0xe423,	// (0x00087bfa) bg_list_pane_cp01

0x63b8,	// (0x0007fb8f) clock_g1

0x63c0,	// (0x0007fb97) clock_g2

0x0001,

0xf19e,	// (0x00088975) clock_g

0x63ca,	// (0x0007fba1) clock_t1_ParamLimits

0x63ca,	// (0x0007fba1) clock_t1

0x63df,	// (0x0007fbb6) clock_t2_ParamLimits

0x63df,	// (0x0007fbb6) clock_t2

0x63f1,	// (0x0007fbc8) clock_t3_ParamLimits

0x63f1,	// (0x0007fbc8) clock_t3

0x6403,	// (0x0007fbda) clock_t4_ParamLimits

0x6403,	// (0x0007fbda) clock_t4

0x6415,	// (0x0007fbec) clock_t5_ParamLimits

0x6415,	// (0x0007fbec) clock_t5

0x642a,	// (0x0007fc01) clock_t6_ParamLimits

0x642a,	// (0x0007fc01) clock_t6

0x643c,	// (0x0007fc13) clock_t7_ParamLimits

0x643c,	// (0x0007fc13) clock_t7

0x644e,	// (0x0007fc25) clock_t8_ParamLimits

0x644e,	// (0x0007fc25) clock_t8

0x6464,	// (0x0007fc3b) clock_t9_ParamLimits

0x6464,	// (0x0007fc3b) clock_t9

0x0008,

0xf1a3,	// (0x0008897a) clock_t_ParamLimits

0xf1a3,	// (0x0008897a) clock_t

0xe705,	// (0x00087edc) popup_clock_analogue_window_cp02

0xe705,	// (0x00087edc) popup_clock_digital_window_cp01

0xe70d,	// (0x00087ee4) listscroll_help_pane

0xe423,	// (0x00087bfa) phob_pre_status_pane

0xe717,	// (0x00087eee) grid_qdial_pane

0xe423,	// (0x00087bfa) listscroll_mce_pane

0xe721,	// (0x00087ef8) bg_notes_pane

0xe72b,	// (0x00087f02) list_notes_pane

0x647a,	// (0x0007fc51) scroll_pane_cp06

0xe735,	// (0x00087f0c) bg_calc_paper_pane

0x648f,	// (0x0007fc66) list_calc_pane

0xe749,	// (0x00087f20) bg_calc_display_pane

0x64a9,	// (0x0007fc80) calc_display_pane_t1

0x64be,	// (0x0007fc95) calc_display_pane_t2

0x64d3,	// (0x0007fcaa) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0008898d) calc_display_pane_t

0x64e5,	// (0x0007fcbc) cell_calc_pane_ParamLimits

0x64e5,	// (0x0007fcbc) cell_calc_pane

0xe755,	// (0x00087f2c) bg_calc_paper_pane_g1

0xe761,	// (0x00087f38) bg_calc_paper_pane_g2

0xe76d,	// (0x00087f44) bg_calc_paper_pane_g3

0xe779,	// (0x00087f50) bg_calc_paper_pane_g4

0xe785,	// (0x00087f5c) bg_calc_paper_pane_g5

0x6514,	// (0x0007fceb) bg_calc_paper_pane_g6

0x6525,	// (0x0007fcfc) bg_calc_paper_pane_g7

0x6536,	// (0x0007fd0d) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00088994) bg_calc_paper_pane_g

0x6547,	// (0x0007fd1e) calc_bg_paper_pane_g9

0x6558,	// (0x0007fd2f) list_calc_item_pane_ParamLimits

0x6558,	// (0x0007fd2f) list_calc_item_pane

0xe791,	// (0x00087f68) list_calc_item_pane_g1

0x657c,	// (0x0007fd53) list_calc_item_pane_t1_ParamLimits

0x657c,	// (0x0007fd53) list_calc_item_pane_t1

0x658e,	// (0x0007fd65) list_calc_item_pane_t2_ParamLimits

0x658e,	// (0x0007fd65) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x000889a5) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x000889a5) list_calc_item_pane_t

0xe79e,	// (0x00087f75) cell_calc_pane_g1

0xe7a8,	// (0x00087f7f) grid_highlight_pane_cp02

0xe7ca,	// (0x00087fa1) bg_calc_display_pane_g1

0x65be,	// (0x0007fd95) bg_calc_display_pane_g2

0xe7d3,	// (0x00087faa) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x000889af) bg_calc_display_pane_g

0x65c8,	// (0x0007fd9f) cell_qdial_pane_ParamLimits

0x65c8,	// (0x0007fd9f) cell_qdial_pane

0x65de,	// (0x0007fdb5) cell_qdial_pane_g1_ParamLimits

0x65de,	// (0x0007fdb5) cell_qdial_pane_g1

0x65eb,	// (0x0007fdc2) cell_qdial_pane_g2_ParamLimits

0x65eb,	// (0x0007fdc2) cell_qdial_pane_g2

0xe7dc,	// (0x00087fb3) cell_qdial_pane_g3_ParamLimits

0xe7dc,	// (0x00087fb3) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x000889b6) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x000889b6) cell_qdial_pane_g

0x6609,	// (0x0007fde0) cell_qdial_pane_t1_ParamLimits

0x6609,	// (0x0007fde0) cell_qdial_pane_t1

0x6621,	// (0x0007fdf8) cell_qdial_pane_t2_ParamLimits

0x6621,	// (0x0007fdf8) cell_qdial_pane_t2

0x6634,	// (0x0007fe0b) cell_qdial_pane_t3_ParamLimits

0x6634,	// (0x0007fe0b) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x000889bf) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x000889bf) cell_qdial_pane_t

0xe423,	// (0x00087bfa) grid_highlight_pane_cp04

0xe7e8,	// (0x00087fbf) thumbnail_qdial_pane_ParamLimits

0xe7e8,	// (0x00087fbf) thumbnail_qdial_pane

0xe844,	// (0x0008801b) list_help_pane

0xe84d,	// (0x00088024) scroll_pane_cp02

0x6647,	// (0x0007fe1e) help_list_pane_t1_ParamLimits

0x6647,	// (0x0007fe1e) help_list_pane_t1

0x6671,	// (0x0007fe48) bg_notes_pane_g2

0x6679,	// (0x0007fe50) bg_notes_pane_g3

0x6681,	// (0x0007fe58) notes_bg_pane_g1

0x6689,	// (0x0007fe60) notes_bg_pane_g4

0x6691,	// (0x0007fe68) notes_bg_pane_g5

0x6699,	// (0x0007fe70) notes_bg_pane_g6

0x66a1,	// (0x0007fe78) notes_bg_pane_g7

0x66a9,	// (0x0007fe80) notes_bg_pane_g8

0x66b1,	// (0x0007fe88) notes_bg_pane_g9

0x0006,

0xf206,	// (0x000889dd) notes_bg_pane_g

0x66b9,	// (0x0007fe90) list_notes_text_pane_ParamLimits

0x66b9,	// (0x0007fe90) list_notes_text_pane

0xe856,	// (0x0008802d) list_notes_text_pane_g1

0x08f9,	// (0x0007a0d0) list_notes_text_pane_t1

0xe749,	// (0x00087f20) listscroll_cale_week_pane

0x66f3,	// (0x0007feca) bg_cale_heading_pane

0xe870,	// (0x00088047) bg_cale_pane_cp01

0x6707,	// (0x0007fede) cale_week_corner_pane

0x671d,	// (0x0007fef4) cale_week_day_heading_pane

0x6731,	// (0x0007ff08) cale_week_scroll_pane_g1

0x6742,	// (0x0007ff19) cale_week_scroll_pane_g2

0x6753,	// (0x0007ff2a) cale_week_scroll_pane_g3

0x6764,	// (0x0007ff3b) cale_week_scroll_pane_g4

0x6775,	// (0x0007ff4c) cale_week_scroll_pane_g5

0x6786,	// (0x0007ff5d) cale_week_scroll_pane_g6

0x6799,	// (0x0007ff70) cale_week_scroll_pane_g7

0x67ac,	// (0x0007ff83) cale_week_scroll_pane_g8

0x67bf,	// (0x0007ff96) cale_week_scroll_pane_g9

0x67d0,	// (0x0007ffa7) cale_week_scroll_pane_g10

0x67e1,	// (0x0007ffb8) cale_week_scroll_pane_g11

0x67f2,	// (0x0007ffc9) cale_week_scroll_pane_g12

0x6803,	// (0x0007ffda) cale_week_scroll_pane_g13

0x6814,	// (0x0007ffeb) cale_week_scroll_pane_g14

0x6825,	// (0x0007fffc) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x000889ec) cale_week_scroll_pane_g

0x6836,	// (0x0008000d) cale_week_time_pane

0x6849,	// (0x00080020) grid_cale_week_pane

0x685e,	// (0x00080035) scroll_pane_cp08

0x6878,	// (0x0008004f) cell_cale_week_pane_ParamLimits

0x6878,	// (0x0008004f) cell_cale_week_pane

0x68b6,	// (0x0008008d) cale_week_day_heading_pane_t1

0x68e3,	// (0x000800ba) cale_week_day_heading_pane_t2

0x6910,	// (0x000800e7) cale_week_day_heading_pane_t3

0x693d,	// (0x00080114) cale_week_day_heading_pane_t4

0x696a,	// (0x00080141) cale_week_day_heading_pane_t5

0x6997,	// (0x0008016e) cale_week_day_heading_pane_t6

0x69c4,	// (0x0008019b) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00088a0b) cale_week_day_heading_pane_t

0xe89b,	// (0x00088072) bg_cale_side_pane

0x69f1,	// (0x000801c8) cale_week_time_pane_t1

0x6a1d,	// (0x000801f4) cale_week_time_pane_t2

0x6a49,	// (0x00080220) cale_week_time_pane_t3

0x6a75,	// (0x0008024c) cale_week_time_pane_t4

0x6aa1,	// (0x00080278) cale_week_time_pane_t5

0x6acd,	// (0x000802a4) cale_week_time_pane_t6

0x6af9,	// (0x000802d0) cale_week_time_pane_t7

0x6b25,	// (0x000802fc) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00088a1a) cale_week_time_pane_t

0x6b51,	// (0x00080328) cell_cale_week_pane_g2

0x6b6a,	// (0x00080341) cell_cale_week_pane_g3_ParamLimits

0x6b6a,	// (0x00080341) cell_cale_week_pane_g3

0xe8a9,	// (0x00088080) grid_highlight_pane_cp07

0xe8b1,	// (0x00088088) listscroll_gms_pane

0xe8bb,	// (0x00088092) grid_gms_pane

0xe8c4,	// (0x0008809b) listscroll_gms_pane_g1

0xe8cc,	// (0x000880a3) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00088a2b) listscroll_gms_pane_g

0x6b82,	// (0x00080359) scroll_pane_cp010

0x6b8d,	// (0x00080364) cell_gms_pane_ParamLimits

0x6b8d,	// (0x00080364) cell_gms_pane

0x6ba0,	// (0x00080377) cell_gms_pane_g1

0xe8d4,	// (0x000880ab) cell_gms_pane_g2

0xe8dc,	// (0x000880b3) cell_gms_pane_g3

0xe8e5,	// (0x000880bc) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00088a30) cell_gms_pane_g

0xe8ee,	// (0x000880c5) grid_highlight_pane_cp09

0x8e24,	// (0x000825fb) phob_pre_status_pane_g1

0x8e2c,	// (0x00082603) phob_pre_status_pane_g2

0x8e34,	// (0x0008260b) phob_pre_status_pane_g3

0x8e3c,	// (0x00082613) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00088e1f) phob_pre_status_pane_g

0x8e4c,	// (0x00082623) phob_pre_status_pane_t1

0x8e5c,	// (0x00082633) phob_pre_status_pane_t2

0x8e6c,	// (0x00082643) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00088e2a) phob_pre_status_pane_t

0xe423,	// (0x00087bfa) bg_list_pane_cp05

0x6bb0,	// (0x00080387) grid_vorec_pane

0x6bba,	// (0x00080391) vorec_t1

0x6bc8,	// (0x0008039f) vorec_t2

0x6bd6,	// (0x000803ad) vorec_t3

0x6be4,	// (0x000803bb) vorec_t4

0x6bf2,	// (0x000803c9) vorec_t5

0x6c00,	// (0x000803d7) vorec_t6

0x0006,

0xf262,	// (0x00088a39) vorec_t

0x6c1c,	// (0x000803f3) wait_bar_pane_cp01

0x6c24,	// (0x000803fb) cell_vorec_pane_ParamLimits

0x6c24,	// (0x000803fb) cell_vorec_pane

0xe8f6,	// (0x000880cd) cell_vorec_pane_g1

0xe423,	// (0x00087bfa) grid_highlight_pane_cp05

0x6c49,	// (0x00080420) cams_zoom_pane

0x6c55,	// (0x0008042c) image_vga_pane

0x6c64,	// (0x0008043b) main_camera_pane_g1

0x6c72,	// (0x00080449) main_camera_pane_g2

0x6c7e,	// (0x00080455) main_camera_pane_g3

0x6c8c,	// (0x00080463) main_camera_pane_g4

0x6c9a,	// (0x00080471) main_camera_pane_g5

0x6ca8,	// (0x0008047f) main_camera_pane_g6

0x6cb6,	// (0x0008048d) main_camera_pane_g7

0x0007,

0xf271,	// (0x00088a48) main_camera_pane_g

0x6cc4,	// (0x0008049b) main_camera_pane_t1

0x6cd6,	// (0x000804ad) main_camera_pane_t2

0x0001,

0xf282,	// (0x00088a59) main_camera_pane_t

0x6cf9,	// (0x000804d0) cams_zoom_pane_cp_ParamLimits

0x6cf9,	// (0x000804d0) cams_zoom_pane_cp

0x6d1d,	// (0x000804f4) image_cif_pane_ParamLimits

0x6d1d,	// (0x000804f4) image_cif_pane

0x6d3b,	// (0x00080512) image_subqcif_pane

0x6d45,	// (0x0008051c) main_video_pane_g1_ParamLimits

0x6d45,	// (0x0008051c) main_video_pane_g1

0x6d65,	// (0x0008053c) main_video_pane_g2_ParamLimits

0x6d65,	// (0x0008053c) main_video_pane_g2

0x6d95,	// (0x0008056c) main_video_pane_g3_ParamLimits

0x6d95,	// (0x0008056c) main_video_pane_g3

0x6dbe,	// (0x00080595) main_video_pane_g4_ParamLimits

0x6dbe,	// (0x00080595) main_video_pane_g4

0x6de7,	// (0x000805be) main_video_pane_g5_ParamLimits

0x6de7,	// (0x000805be) main_video_pane_g5

0xe90c,	// (0x000880e3) main_video_pane_g6_ParamLimits

0xe90c,	// (0x000880e3) main_video_pane_g6

0x0006,

0xf287,	// (0x00088a5e) main_video_pane_g_ParamLimits

0xf287,	// (0x00088a5e) main_video_pane_g

0x6e09,	// (0x000805e0) main_video_pane_t1_ParamLimits

0x6e09,	// (0x000805e0) main_video_pane_t1

0xe926,	// (0x000880fd) cams_zoom_pane_g1

0xe92f,	// (0x00088106) cams_zoom_pane_g2

0xe938,	// (0x0008810f) cams_zoom_pane_g3

0xe941,	// (0x00088118) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00088a6d) cams_zoom_pane_g

0x6e53,	// (0x0008062a) grid_cams_pane

0x6e61,	// (0x00080638) linegrid_cams_pane

0x6e6f,	// (0x00080646) cell_cams_pane_ParamLimits

0x6e6f,	// (0x00080646) cell_cams_pane

0xe94a,	// (0x00088121) cams_burst_image_pane

0xe952,	// (0x00088129) cell_cams_pane_g1

0xe423,	// (0x00087bfa) grid_highlight_pane_cp03

0xe79e,	// (0x00087f75) mp_bg_pane_g1

0xe423,	// (0x00087bfa) bg_list_pane_cp03

0x24ba,	// (0x0007bc91) bg_mp_pane

0x24c2,	// (0x0007bc99) grid_mp_pane

0x24ca,	// (0x0007bca1) media_player_g1

0x24d4,	// (0x0007bcab) media_player_t1

0x24e2,	// (0x0007bcb9) media_player_t2

0x24f0,	// (0x0007bcc7) media_player_t3

0x24fe,	// (0x0007bcd5) media_player_t4

0x250c,	// (0x0007bce3) media_player_t5

0x251a,	// (0x0007bcf1) media_player_t6

0x2528,	// (0x0007bcff) media_player_t7

0x0006,

0xf632,	// (0x00088e09) media_player_t

0x2536,	// (0x0007bd0d) wait_bar_pane_cp02

0xf617,	// (0x00088dee) main_usb_pane_t

0x8e1b,	// (0x000825f2) cell_mp_pane

0xe79e,	// (0x00087f75) cell_mp_pane_g1

0xe423,	// (0x00087bfa) grid_highlight_pane_cp06

0xe95a,	// (0x00088131) grid_skin_colour_pane

0xe962,	// (0x00088139) list_highlight_pane_cp03

0x6edb,	// (0x000806b2) skin_g1

0xe96a,	// (0x00088141) skin_t1

0xe979,	// (0x00088150) skin_t2

0x0001,

0xf2cb,	// (0x00088aa2) skin_t

0x6ee5,	// (0x000806bc) cell_skin_colour_pane_ParamLimits

0x6ee5,	// (0x000806bc) cell_skin_colour_pane

0xe987,	// (0x0008815e) cell_skin_colour_pane_g1

0x6f34,	// (0x0008070b) call_video_g1_ParamLimits

0x6f34,	// (0x0008070b) call_video_g1

0x6f44,	// (0x0008071b) call_video_g2_ParamLimits

0x6f44,	// (0x0008071b) call_video_g2

0x0001,

0xf2d0,	// (0x00088aa7) call_video_g_ParamLimits

0xf2d0,	// (0x00088aa7) call_video_g

0x6f7c,	// (0x00080753) call_video_uplink_pane_cp1_ParamLimits

0x6f7c,	// (0x00080753) call_video_uplink_pane_cp1

0xe9a1,	// (0x00088178) call_video_uplink_pane_cp2

0x702a,	// (0x00080801) video_down_crop_pane_ParamLimits

0x702a,	// (0x00080801) video_down_crop_pane

0x7102,	// (0x000808d9) video_down_pane_ParamLimits

0x7102,	// (0x000808d9) video_down_pane

0xe9a9,	// (0x00088180) video_down_subqcif_pane_ParamLimits

0xe9a9,	// (0x00088180) video_down_subqcif_pane

0xe9c3,	// (0x0008819a) video_down_subqcif_pane_cp_ParamLimits

0xe9c3,	// (0x0008819a) video_down_subqcif_pane_cp

0xe9e9,	// (0x000881c0) im_reading_pane_ParamLimits

0xe9e9,	// (0x000881c0) im_reading_pane

0x71df,	// (0x000809b6) im_writing_pane_ParamLimits

0x71df,	// (0x000809b6) im_writing_pane

0x71fd,	// (0x000809d4) im_reading_pane_t1

0xea03,	// (0x000881da) list_im_pane

0xea14,	// (0x000881eb) scroll_pane_cp07

0x7245,	// (0x00080a1c) im_writing_pane_t1_ParamLimits

0x7245,	// (0x00080a1c) im_writing_pane_t1

0xea2d,	// (0x00088204) im_writing_pane_t2_ParamLimits

0xea2d,	// (0x00088204) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00088ab1) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00088ab1) im_writing_pane_t

0xe423,	// (0x00087bfa) input_focus_pane_cp04

0xe423,	// (0x00087bfa) input_focus_pane_cp05

0x7257,	// (0x00080a2e) list_im_single_pane_ParamLimits

0x7257,	// (0x00080a2e) list_im_single_pane

0x7273,	// (0x00080a4a) list_single_im_pane_t1

0x8ddf,	// (0x000825b6) blid_accuracy_pane

0x8de7,	// (0x000825be) blid_compass_pane

0x8df1,	// (0x000825c8) main_location_t1

0x8dff,	// (0x000825d6) main_location_t2

0x8e0d,	// (0x000825e4) main_location_t3

0x0002,

0xf641,	// (0x00088e18) main_location_t

0xe423,	// (0x00087bfa) aid_levels_location

0xe79e,	// (0x00087f75) blid_accuracy_pane_g1

0xe79e,	// (0x00087f75) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00088b13) blid_accuracy_pane_g

0xea75,	// (0x0008824c) wml_content_pane

0xeab3,	// (0x0008828a) wml_button_pane_ParamLimits

0xeab3,	// (0x0008828a) wml_button_pane

0x7282,	// (0x00080a59) wml_list_single_large_pane_ParamLimits

0x7282,	// (0x00080a59) wml_list_single_large_pane

0x72a4,	// (0x00080a7b) wml_list_single_medium_pane_ParamLimits

0x72a4,	// (0x00080a7b) wml_list_single_medium_pane

0x72ca,	// (0x00080aa1) wml_list_single_small_pane_ParamLimits

0x72ca,	// (0x00080aa1) wml_list_single_small_pane

0xeac7,	// (0x0008829e) wml_selection_box_pane_ParamLimits

0xeac7,	// (0x0008829e) wml_selection_box_pane

0xeada,	// (0x000882b1) wml_list_single_pane_t1

0xeae9,	// (0x000882c0) wml_list_single_medium_pane_t1

0xeaf8,	// (0x000882cf) wml_list_single_large_pane_t1

0xeb07,	// (0x000882de) input_focus_pane_cp02_ParamLimits

0xeb07,	// (0x000882de) input_focus_pane_cp02

0xeb1a,	// (0x000882f1) wml_selection_box_pane_g1

0xeb23,	// (0x000882fa) wml_selection_box_pane_t1_ParamLimits

0xeb23,	// (0x000882fa) wml_selection_box_pane_t1

0xe67e,	// (0x00087e55) bg_wml_button_pane_ParamLimits

0xe67e,	// (0x00087e55) bg_wml_button_pane

0xeb3b,	// (0x00088312) wml_button_pane_g1

0xeb43,	// (0x0008831a) wml_button_pane_t1

0xeb3b,	// (0x00088312) wml_button_bg_pane_g1

0xeb53,	// (0x0008832a) wml_button_bg_pane_g2

0xeb5b,	// (0x00088332) wml_button_bg_pane_g3

0xeb63,	// (0x0008833a) wml_button_bg_pane_g4

0xeb6b,	// (0x00088342) wml_button_bg_pane_g5

0xeb73,	// (0x0008834a) wml_button_bg_pane_g6

0xeb7b,	// (0x00088352) wml_button_bg_pane_g7

0xeb83,	// (0x0008835a) wml_button_bg_pane_g8

0xeb8b,	// (0x00088362) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00088ab6) wml_button_bg_pane_g

0x72f5,	// (0x00080acc) bg_list_pane_cp02

0xeb93,	// (0x0008836a) mce_header_pane_ParamLimits

0xeb93,	// (0x0008836a) mce_header_pane

0xeba9,	// (0x00088380) mce_icon_pane

0xeba9,	// (0x00088380) mce_image_pane

0xebb2,	// (0x00088389) mce_text_pane_ParamLimits

0xebb2,	// (0x00088389) mce_text_pane

0x72ff,	// (0x00080ad6) scroll_pane_cp03

0xeaab,	// (0x00088282) scroll_pane_cp04

0xebc5,	// (0x0008839c) scroll_pane_cp05_ParamLimits

0xebc5,	// (0x0008839c) scroll_pane_cp05

0x7309,	// (0x00080ae0) mce_header_field_pane_ParamLimits

0x7309,	// (0x00080ae0) mce_header_field_pane

0x732b,	// (0x00080b02) mce_header_field_pane_2_ParamLimits

0x732b,	// (0x00080b02) mce_header_field_pane_2

0x7341,	// (0x00080b18) mce_header_field_pane_3

0x7349,	// (0x00080b20) list_single_mce_message_pane_ParamLimits

0x7349,	// (0x00080b20) list_single_mce_message_pane

0x7368,	// (0x00080b3f) list_single_mce_smart_pane_ParamLimits

0x7368,	// (0x00080b3f) list_single_mce_smart_pane

0xebd1,	// (0x000883a8) input_focus_pane_cp03

0x0a2f,	// (0x0007a206) list_header_data_pane

0x7392,	// (0x00080b69) mce_header_field_pane_t1

0x73a2,	// (0x00080b79) list_single_mce_header_pane_ParamLimits

0x73a2,	// (0x00080b79) list_single_mce_header_pane

0x0a37,	// (0x0007a20e) list_single_mce_header_pane_t1

0x0a46,	// (0x0007a21d) list_single_mce_message_pane_g1

0x0a4e,	// (0x0007a225) list_single_mce_message_pane_t1

0x73de,	// (0x00080bb5) bg_cale_heading_pane_cp01_ParamLimits

0x73de,	// (0x00080bb5) bg_cale_heading_pane_cp01

0x0a5c,	// (0x0007a233) bg_cale_pane_cp02_ParamLimits

0x0a5c,	// (0x0007a233) bg_cale_pane_cp02

0x7401,	// (0x00080bd8) cale_month_corner_pane

0x7417,	// (0x00080bee) cale_month_day_heading_pane_ParamLimits

0x7417,	// (0x00080bee) cale_month_day_heading_pane

0x744a,	// (0x00080c21) cale_month_pane_g1_ParamLimits

0x744a,	// (0x00080c21) cale_month_pane_g1

0x7466,	// (0x00080c3d) cale_month_pane_g2_ParamLimits

0x7466,	// (0x00080c3d) cale_month_pane_g2

0x7481,	// (0x00080c58) cale_month_pane_g3_ParamLimits

0x7481,	// (0x00080c58) cale_month_pane_g3

0x74ad,	// (0x00080c84) cale_month_pane_g4_ParamLimits

0x74ad,	// (0x00080c84) cale_month_pane_g4

0x74d9,	// (0x00080cb0) cale_month_pane_g5_ParamLimits

0x74d9,	// (0x00080cb0) cale_month_pane_g5

0x7505,	// (0x00080cdc) cale_month_pane_g6_ParamLimits

0x7505,	// (0x00080cdc) cale_month_pane_g6

0x7541,	// (0x00080d18) cale_month_pane_g7_ParamLimits

0x7541,	// (0x00080d18) cale_month_pane_g7

0x757d,	// (0x00080d54) cale_month_pane_g8_ParamLimits

0x757d,	// (0x00080d54) cale_month_pane_g8

0x75b9,	// (0x00080d90) cale_month_pane_g9_ParamLimits

0x75b9,	// (0x00080d90) cale_month_pane_g9

0x75f3,	// (0x00080dca) cale_month_pane_g10_ParamLimits

0x75f3,	// (0x00080dca) cale_month_pane_g10

0x762d,	// (0x00080e04) cale_month_pane_g11_ParamLimits

0x762d,	// (0x00080e04) cale_month_pane_g11

0x7667,	// (0x00080e3e) cale_month_pane_g12_ParamLimits

0x7667,	// (0x00080e3e) cale_month_pane_g12

0x76a1,	// (0x00080e78) cale_month_pane_g13_ParamLimits

0x76a1,	// (0x00080e78) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00088ac9) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00088ac9) cale_month_pane_g

0x76db,	// (0x00080eb2) cale_month_week_pane

0x76ee,	// (0x00080ec5) grid_cale_month_pane_ParamLimits

0x76ee,	// (0x00080ec5) grid_cale_month_pane

0x771c,	// (0x00080ef3) cale_month_day_heading_pane_t1

0x777a,	// (0x00080f51) cale_month_day_heading_pane_t2

0x77df,	// (0x00080fb6) cale_month_day_heading_pane_t3

0x7844,	// (0x0008101b) cale_month_day_heading_pane_t4

0x78a9,	// (0x00081080) cale_month_day_heading_pane_t5

0x7916,	// (0x000810ed) cale_month_day_heading_pane_t6

0x798b,	// (0x00081162) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00088ae4) cale_month_day_heading_pane_t

0xe89b,	// (0x00088072) bg_cale_side_pane_cp01

0x7a00,	// (0x000811d7) cale_month_week_pane_t1

0x7a2b,	// (0x00081202) cale_month_week_pane_t2

0x7a56,	// (0x0008122d) cale_month_week_pane_t3

0x7a81,	// (0x00081258) cale_month_week_pane_t4

0x7aac,	// (0x00081283) cale_month_week_pane_t5

0x7ad7,	// (0x000812ae) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00088af3) cale_month_week_pane_t

0x7b02,	// (0x000812d9) cell_cale_month_pane_ParamLimits

0x7b02,	// (0x000812d9) cell_cale_month_pane

0x7bd0,	// (0x000813a7) cell_cale_month_pane_g1

0x7bdc,	// (0x000813b3) cell_cale_month_pane_t1_ParamLimits

0x7bdc,	// (0x000813b3) cell_cale_month_pane_t1

0xe8a9,	// (0x00088080) grid_highlight_pane_cp08

0xe79e,	// (0x00087f75) main_smil_g1

0x7bf8,	// (0x000813cf) smil_status_pane

0x0ac7,	// (0x0007a29e) smil_text_pane

0x23d8,	// (0x0007bbaf) bg_popup_call3_rect_pane_g8

0x23e0,	// (0x0007bbb7) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00088dac) bg_popup_call3_rect_pane_g

0x4ace,	// (0x0007e2a5) smil_status_volume_pane_g1

0x0ad1,	// (0x0007a2a8) smil_status_pane_t1

0x91c0,	// (0x00082997) volume_smil_pane

0x0ae8,	// (0x0007a2bf) list_smil_text_pane

0x7c0b,	// (0x000813e2) scroll_pane_cp011

0x7c16,	// (0x000813ed) smil_text_list_pane_t1_ParamLimits

0x7c16,	// (0x000813ed) smil_text_list_pane_t1

0x7c7a,	// (0x00081451) aid_volume_smil_ParamLimits

0x7c7a,	// (0x00081451) aid_volume_smil

0xe79e,	// (0x00087f75) smil_volume_pane_g1

0xe79e,	// (0x00087f75) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00088b13) smil_volume_pane_g

0xe749,	// (0x00087f20) listscroll_cale_day_pane

0x0b14,	// (0x0007a2eb) bg_cale_pane

0x0b2c,	// (0x0007a303) list_cale_pane

0x0b3d,	// (0x0007a314) scroll_pane_cp09

0x0b4e,	// (0x0007a325) cale_bg_pane_g1

0x0b56,	// (0x0007a32d) cale_bg_pane_g2

0x0b5e,	// (0x0007a335) cale_bg_pane_g3

0x0b66,	// (0x0007a33d) cale_bg_pane_g4

0x0b6e,	// (0x0007a345) cale_bg_pane_g5

0x0b76,	// (0x0007a34d) cale_bg_pane_g6

0x0b7e,	// (0x0007a355) cale_bg_pane_g7

0x0b86,	// (0x0007a35d) cale_bg_pane_g8

0x0b8e,	// (0x0007a365) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00088b18) cale_bg_pane_g

0x7c9c,	// (0x00081473) list_cale_time_pane_ParamLimits

0x7c9c,	// (0x00081473) list_cale_time_pane

0x7cb4,	// (0x0008148b) list_cale_time_pane_g1_ParamLimits

0x7cb4,	// (0x0008148b) list_cale_time_pane_g1

0x0b96,	// (0x0007a36d) list_cale_time_pane_g2_ParamLimits

0x0b96,	// (0x0007a36d) list_cale_time_pane_g2

0x7cc0,	// (0x00081497) list_cale_time_pane_g3_ParamLimits

0x7cc0,	// (0x00081497) list_cale_time_pane_g3

0x7cce,	// (0x000814a5) list_cale_time_pane_g4_ParamLimits

0x7cce,	// (0x000814a5) list_cale_time_pane_g4

0x7cdc,	// (0x000814b3) list_cale_time_pane_g5_ParamLimits

0x7cdc,	// (0x000814b3) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00088b2b) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00088b2b) list_cale_time_pane_g

0x7cea,	// (0x000814c1) list_cale_time_pane_t1_ParamLimits

0x7cea,	// (0x000814c1) list_cale_time_pane_t1

0x7d12,	// (0x000814e9) list_cale_time_pane_t2_ParamLimits

0x7d12,	// (0x000814e9) list_cale_time_pane_t2

0x8081,	// (0x00081858) aid_blid_cardinal_pane

0x80c3,	// (0x0008189a) compass_pane_t4

0x7d3a,	// (0x00081511) list_cale_time_pane_t4_ParamLimits

0x7d3a,	// (0x00081511) list_cale_time_pane_t4

0x80d1,	// (0x000818a8) compass_pane_t5

0x80e1,	// (0x000818b8) compass_pane_t6

0x80ef,	// (0x000818c6) compass_pane_t7

0x107c,	// (0x0007a853) navi_pane_cc_t1

0x11e3,	// (0x0007a9ba) aid_phob_thumbnail_center_pane

0x88d5,	// (0x000820ac) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00088b38) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00088b38) list_cale_time_pane_t

0xe07a,	// (0x00087851) bg_popup_window_pane_cp02_ParamLimits

0xe07a,	// (0x00087851) bg_popup_window_pane_cp02

0x0bb0,	// (0x0007a387) heading_pane_cp01_ParamLimits

0x0bb0,	// (0x0007a387) heading_pane_cp01

0x0bbc,	// (0x0007a393) loc_req_pane_ParamLimits

0x0bbc,	// (0x0007a393) loc_req_pane

0x0bcc,	// (0x0007a3a3) loc_type_pane_ParamLimits

0x0bcc,	// (0x0007a3a3) loc_type_pane

0x0bde,	// (0x0007a3b5) loc_type_pane_t1_ParamLimits

0x0bde,	// (0x0007a3b5) loc_type_pane_t1

0x0bf0,	// (0x0007a3c7) loc_type_pane_t2_ParamLimits

0x0bf0,	// (0x0007a3c7) loc_type_pane_t2

0x0c02,	// (0x0007a3d9) loc_type_pane_t3_ParamLimits

0x0c02,	// (0x0007a3d9) loc_type_pane_t3

0x0002,

0xf368,	// (0x00088b3f) loc_type_pane_t_ParamLimits

0xf368,	// (0x00088b3f) loc_type_pane_t

0x0c14,	// (0x0007a3eb) list_loc_req_pane

0x0c1e,	// (0x0007a3f5) scroll_pane_cp012

0x7d62,	// (0x00081539) list_single_loc_request_popup_menu_pane_ParamLimits

0x7d62,	// (0x00081539) list_single_loc_request_popup_menu_pane

0x0c29,	// (0x0007a400) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0c29,	// (0x0007a400) list_single_loc_request_popup_menu_pane_g1

0x0c35,	// (0x0007a40c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0c35,	// (0x0007a40c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00088b46) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00088b46) list_single_loc_request_popup_menu_pane_g

0x0c41,	// (0x0007a418) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0c41,	// (0x0007a418) list_single_loc_request_popup_menu_pane_t1

0x7d74,	// (0x0008154b) bg_popup_window_pane_cp03_ParamLimits

0x7d74,	// (0x0008154b) bg_popup_window_pane_cp03

0x7d82,	// (0x00081559) heading_loc_req_pane_ParamLimits

0x7d82,	// (0x00081559) heading_loc_req_pane

0x7d8e,	// (0x00081565) popup_dyc_status_message_window_g1_ParamLimits

0x7d8e,	// (0x00081565) popup_dyc_status_message_window_g1

0x7d9a,	// (0x00081571) popup_dyc_status_message_window_t1_ParamLimits

0x7d9a,	// (0x00081571) popup_dyc_status_message_window_t1

0x7dac,	// (0x00081583) popup_dyc_status_message_window_t2_ParamLimits

0x7dac,	// (0x00081583) popup_dyc_status_message_window_t2

0x7dbe,	// (0x00081595) popup_dyc_status_message_window_t3_ParamLimits

0x7dbe,	// (0x00081595) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00088b4b) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00088b4b) popup_dyc_status_message_window_t

0xe423,	// (0x00087bfa) bg_heading_pane_cp01

0x0c57,	// (0x0007a42e) heading_loc_req_pane_g1

0x0c5f,	// (0x0007a436) heading_loc_req_pane_g2

0x0c67,	// (0x0007a43e) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00088b52) heading_loc_req_pane_g

0x0c6f,	// (0x0007a446) heading_loc_req_pane_t1

0x0cf6,	// (0x0007a4cd) bg_popup_sub_pane_cp01_ParamLimits

0x0cf6,	// (0x0007a4cd) bg_popup_sub_pane_cp01

0x0d04,	// (0x0007a4db) popup_cale_events_window_g1_ParamLimits

0x0d04,	// (0x0007a4db) popup_cale_events_window_g1

0x0d24,	// (0x0007a4fb) popup_cale_events_window_g2_ParamLimits

0x0d24,	// (0x0007a4fb) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00088b86) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00088b86) popup_cale_events_window_g

0x0d44,	// (0x0007a51b) popup_cale_events_window_t1_ParamLimits

0x0d44,	// (0x0007a51b) popup_cale_events_window_t1

0x0d56,	// (0x0007a52d) popup_cale_events_window_t2_ParamLimits

0x0d56,	// (0x0007a52d) popup_cale_events_window_t2

0x0d94,	// (0x0007a56b) popup_cale_events_window_t3_ParamLimits

0x0d94,	// (0x0007a56b) popup_cale_events_window_t3

0x0dce,	// (0x0007a5a5) popup_cale_events_window_t4_ParamLimits

0x0dce,	// (0x0007a5a5) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00088b8b) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00088b8b) popup_cale_events_window_t

0x7e42,	// (0x00081619) call_type_pane

0x11fb,	// (0x0007a9d2) popup_call_status_window_g1

0x7e4e,	// (0x00081625) popup_call_status_window_g2

0x7e5a,	// (0x00081631) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00088b94) popup_call_status_window_g

0x0e04,	// (0x0007a5db) call_type_pane_g1

0x0e0d,	// (0x0007a5e4) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00088b9b) call_type_pane_g

0xe423,	// (0x00087bfa) bg_popup_sub_pane_cp02

0x0e16,	// (0x0007a5ed) listscroll_popup_wml_pane

0x0e1e,	// (0x0007a5f5) list_wml_pane

0x0e28,	// (0x0007a5ff) scroll_pane_cp013

0x0e33,	// (0x0007a60a) list_single_graphic_popup_wml_pane_ParamLimits

0x0e33,	// (0x0007a60a) list_single_graphic_popup_wml_pane

0xe79e,	// (0x00087f75) list_single_graphic_popup_wml_pane_g1

0x0e47,	// (0x0007a61e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00088ba0) list_single_graphic_popup_wml_pane_g

0x0e4f,	// (0x0007a626) list_single_graphic_popup_wml_pane_t1

0x0e5d,	// (0x0007a634) aid_call_pane

0xe676,	// (0x00087e4d) popup_clock_analogue_window_g1

0xe676,	// (0x00087e4d) popup_clock_analogue_window_g2

0x7e66,	// (0x0008163d) popup_clock_analogue_window_g3

0x7e66,	// (0x0008163d) popup_clock_analogue_window_g4

0xe79e,	// (0x00087f75) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00088ba5) popup_clock_analogue_window_g

0x7e6e,	// (0x00081645) popup_clock_analogue_window_t1

0x7e7c,	// (0x00081653) clock_digital_number_pane_ParamLimits

0x7e7c,	// (0x00081653) clock_digital_number_pane

0x7e88,	// (0x0008165f) clock_digital_number_pane_cp02_ParamLimits

0x7e88,	// (0x0008165f) clock_digital_number_pane_cp02

0x7e94,	// (0x0008166b) clock_digital_number_pane_cp03_ParamLimits

0x7e94,	// (0x0008166b) clock_digital_number_pane_cp03

0x7ea0,	// (0x00081677) clock_digital_number_pane_cp04_ParamLimits

0x7ea0,	// (0x00081677) clock_digital_number_pane_cp04

0x7eac,	// (0x00081683) clock_digital_separator_pane_ParamLimits

0x7eac,	// (0x00081683) clock_digital_separator_pane

0x7eb8,	// (0x0008168f) popup_clock_digital_window_t1

0xe79e,	// (0x00087f75) clock_digital_number_pane_g1

0xe79e,	// (0x00087f75) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00088b13) clock_digital_number_pane_g

0xe79e,	// (0x00087f75) clock_digital_separator_pane_g1

0xe79e,	// (0x00087f75) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00088b13) clock_digital_separator_pane_g

0xe423,	// (0x00087bfa) bg_popup_window_pane_cp04

0x0edc,	// (0x0007a6b3) heading_pane_cp03

0x0ee4,	// (0x0007a6bb) listscroll_popup_gms_pane

0x0eec,	// (0x0007a6c3) grid_large_graphic_popup_pane

0x0ef6,	// (0x0007a6cd) listscroll_popup_gms_pane_g1

0x0efe,	// (0x0007a6d5) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00088bb0) listscroll_popup_gms_pane_g

0xeaab,	// (0x00088282) scroll_pane_cp014

0x7ed5,	// (0x000816ac) cell_large_graphic_popup_pane_ParamLimits

0x7ed5,	// (0x000816ac) cell_large_graphic_popup_pane

0x7eef,	// (0x000816c6) cell_large_graphic_popup_pane_g1_ParamLimits

0x7eef,	// (0x000816c6) cell_large_graphic_popup_pane_g1

0x0f06,	// (0x0007a6dd) cell_large_graphic_popup_pane_g2_ParamLimits

0x0f06,	// (0x0007a6dd) cell_large_graphic_popup_pane_g2

0x0f12,	// (0x0007a6e9) cell_large_graphic_popup_pane_g3_ParamLimits

0x0f12,	// (0x0007a6e9) cell_large_graphic_popup_pane_g3

0x0f1f,	// (0x0007a6f6) cell_large_graphic_popup_pane_g4_ParamLimits

0x0f1f,	// (0x0007a6f6) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00088bb5) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00088bb5) cell_large_graphic_popup_pane_g

0x0f2f,	// (0x0007a706) grid_highlight_pane_cp010

0xe79e,	// (0x00087f75) bg_popup_call_pane_g1

0x0f39,	// (0x0007a710) list_single_graphic_popup_conf_pane_ParamLimits

0x0f39,	// (0x0007a710) list_single_graphic_popup_conf_pane

0x0f4b,	// (0x0007a722) list_highlight_pane_cp01

0x0f54,	// (0x0007a72b) list_single_graphic_popup_conf_pane_g1

0x0f5c,	// (0x0007a733) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00088bbe) list_single_graphic_popup_conf_pane_g

0x0f64,	// (0x0007a73b) list_single_graphic_popup_conf_pane_t1

0x0f72,	// (0x0007a749) linegrid_cams_pane_g1

0x7efb,	// (0x000816d2) linegrid_cams_pane_g2

0xe8dc,	// (0x000880b3) linegrid_cams_pane_g3

0x0f7b,	// (0x0007a752) linegrid_cams_pane_g4

0x7f04,	// (0x000816db) linegrid_cams_pane_g5

0x7f0d,	// (0x000816e4) linegrid_cams_pane_g6

0xe8e5,	// (0x000880bc) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00088bc3) linegrid_cams_pane_g

0x0f84,	// (0x0007a75b) popup_clock_analogue_window

0x0f84,	// (0x0007a75b) popup_clock_digital_window

0xe423,	// (0x00087bfa) popup_phob_thumbnail_window

0xe79e,	// (0x00087f75) call_video_uplink_pane_g1

0x0f8d,	// (0x0007a764) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00088bd2) call_video_uplink_pane_g

0x0f95,	// (0x0007a76c) video_uplink_pane

0x0f9d,	// (0x0007a774) mce_image_pane_g1

0x7f18,	// (0x000816ef) mce_image_pane_g2

0x7f22,	// (0x000816f9) mce_image_pane_g3

0x7f2c,	// (0x00081703) mce_image_pane_g4

0x7f34,	// (0x0008170b) mce_image_pane_g5

0x0004,

0xf400,	// (0x00088bd7) mce_image_pane_g

0x0fa7,	// (0x0007a77e) control_top_pane_stacon_cp01_ParamLimits

0x0fa7,	// (0x0007a77e) control_top_pane_stacon_cp01

0x0fbb,	// (0x0007a792) uni_indicator_pane_stacon_cp01_ParamLimits

0x0fbb,	// (0x0007a792) uni_indicator_pane_stacon_cp01

0x0fcc,	// (0x0007a7a3) bg_popup_sub_pane_cp03

0x7f3c,	// (0x00081713) chi_dic_find_pane

0x7f44,	// (0x0008171b) listscroll_chi_dic_pane

0x7f4d,	// (0x00081724) main_pane_chidic_g1

0x7f60,	// (0x00081737) chi_dic_find_pane_t1

0x0fd6,	// (0x0007a7ad) find_chidic_pane

0x0fdf,	// (0x0007a7b6) chi_dic_list_pane_ParamLimits

0x0fdf,	// (0x0007a7b6) chi_dic_list_pane

0x0ff0,	// (0x0007a7c7) scroll_pane_cp020

0x7f6e,	// (0x00081745) find_chidic_pane_t1

0xe423,	// (0x00087bfa) input_focus_pane_cp06

0x7f7d,	// (0x00081754) list_chi_dic_pane_ParamLimits

0x7f7d,	// (0x00081754) list_chi_dic_pane

0x7f95,	// (0x0008176c) list_chi_dic_pane_t1_ParamLimits

0x7f95,	// (0x0008176c) list_chi_dic_pane_t1

0xe423,	// (0x00087bfa) list_highlight_pane_cp020

0x0ff8,	// (0x0007a7cf) bg_cale_heading_pane_g1

0x7fa8,	// (0x0008177f) bg_cale_heading_pane_g2

0x7fb0,	// (0x00081787) bg_cale_heading_pane_g3

0x7fb8,	// (0x0008178f) bg_cale_heading_pane_g4

0x7fc2,	// (0x00081799) bg_cale_heading_pane_g5

0x7fcc,	// (0x000817a3) bg_cale_heading_pane_g6

0x7fd4,	// (0x000817ab) bg_cale_heading_pane_g7

0x7fdc,	// (0x000817b3) bg_cale_heading_pane_g8

0x7fe6,	// (0x000817bd) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00088be2) bg_cale_heading_pane_g

0x0ff8,	// (0x0007a7cf) bg_cale_side_pane_g1

0x7ff0,	// (0x000817c7) bg_cale_side_pane_g2

0x7ff8,	// (0x000817cf) bg_cale_side_pane_g3

0x8000,	// (0x000817d7) bg_cale_side_pane_g4

0x8008,	// (0x000817df) bg_cale_side_pane_g5

0x8010,	// (0x000817e7) bg_cale_side_pane_g6

0x8018,	// (0x000817ef) bg_cale_side_pane_g7

0x8020,	// (0x000817f7) bg_cale_side_pane_g8

0x8028,	// (0x000817ff) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00088bf5) bg_cale_side_pane_g

0x8030,	// (0x00081807) popup_call_status_window_ParamLimits

0x8030,	// (0x00081807) popup_call_status_window

0x1000,	// (0x0007a7d7) stacon_top_pane

0x1008,	// (0x0007a7df) status_pane_ParamLimits

0x1008,	// (0x0007a7df) status_pane

0x101d,	// (0x0007a7f4) status_small_pane

0x1025,	// (0x0007a7fc) control_pane

0xe423,	// (0x00087bfa) stacon_bottom_pane

0x102d,	// (0x0007a804) list_single_mce_smart_pane_t1_ParamLimits

0x102d,	// (0x0007a804) list_single_mce_smart_pane_t1

0x1040,	// (0x0007a817) list_single_mce_smart_pane_t2_ParamLimits

0x1040,	// (0x0007a817) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00088c08) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00088c08) list_single_mce_smart_pane_t

0x803c,	// (0x00081813) compass_pane

0x8047,	// (0x0008181e) main_location2_pane_t1

0x805b,	// (0x00081832) main_location2_pane_t2

0x805b,	// (0x00081832) main_location2_pane_t3

0x0003,

0xf436,	// (0x00088c0d) main_location2_pane_t

0x105f,	// (0x0007a836) compass_pane_g1_ParamLimits

0x105f,	// (0x0007a836) compass_pane_g1

0x80a5,	// (0x0008187c) compass_pane_t1

0x80b4,	// (0x0008188b) compass_pane_t2

0x0005,

0xf43f,	// (0x00088c16) compass_pane_t

0x80ff,	// (0x000818d6) text_secondary_cp61

0x1073,	// (0x0007a84a) navi_pane_cams_g5

0x1096,	// (0x0007a86d) navi_pane_im_t1

0x10a4,	// (0x0007a87b) navi_pane_mp_g1_ParamLimits

0x10a4,	// (0x0007a87b) navi_pane_mp_g1

0x10b8,	// (0x0007a88f) navi_pane_mp_g2_ParamLimits

0x10b8,	// (0x0007a88f) navi_pane_mp_g2

0x10c4,	// (0x0007a89b) navi_pane_mp_g3_ParamLimits

0x10c4,	// (0x0007a89b) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00088c2a) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00088c2a) navi_pane_mp_g

0x10d0,	// (0x0007a8a7) navi_pane_mp_t1

0x10de,	// (0x0007a8b5) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00088c31) navi_pane_mp_t

0x111a,	// (0x0007a8f1) navi_pane_vt_g1

0x10d0,	// (0x0007a8a7) navi_pane_vt_t1

0x1122,	// (0x0007a8f9) navi_slider_pane

0x112a,	// (0x0007a901) zooming_pane

0x1132,	// (0x0007a909) navi_slider_pane_g1

0x8216,	// (0x000819ed) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00088c38) navi_slider_pane_g

0x1168,	// (0x0007a93f) aid_levels_zoom

0x1170,	// (0x0007a947) zooming_pane_g1

0x1178,	// (0x0007a94f) zooming_pane_g2

0x1178,	// (0x0007a94f) zooming_pane_g3

0x0002,

0xf470,	// (0x00088c47) zooming_pane_g

0x1180,	// (0x0007a957) level_10_zoom

0x1189,	// (0x0007a960) level_11_zoom

0x1192,	// (0x0007a969) level_1_zoom

0x119b,	// (0x0007a972) level_2_zoom

0x11a4,	// (0x0007a97b) level_3_zoom

0x11ad,	// (0x0007a984) level_4_zoom

0x11b6,	// (0x0007a98d) level_5_zoom

0x11bf,	// (0x0007a996) level_6_zoom

0x11c8,	// (0x0007a99f) level_7_zoom

0x11d1,	// (0x0007a9a8) level_8_zoom

0x11da,	// (0x0007a9b1) level_9_zoom

0x11eb,	// (0x0007a9c2) popup_phob_thumbnail_window_g1

0x11f3,	// (0x0007a9ca) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00088c4e) popup_phob_thumbnail_window_g

0x4984,	// (0x0007e15b) level_1_location

0x498c,	// (0x0007e163) level_2_location

0x4994,	// (0x0007e16b) level_3_location

0x499c,	// (0x0007e173) level_4_location

0x112a,	// (0x0007a901) level_5_location

0x8228,	// (0x000819ff) mce_icon_pane_g1

0x8230,	// (0x00081a07) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00088c53) mce_icon_pane_g

0x8238,	// (0x00081a0f) main_mup_pane_g1_ParamLimits

0x8238,	// (0x00081a0f) main_mup_pane_g1

0x8250,	// (0x00081a27) main_mup_pane_g2_ParamLimits

0x8250,	// (0x00081a27) main_mup_pane_g2

0x826c,	// (0x00081a43) main_mup_pane_g3_ParamLimits

0x826c,	// (0x00081a43) main_mup_pane_g3

0x8288,	// (0x00081a5f) main_mup_pane_g4_ParamLimits

0x8288,	// (0x00081a5f) main_mup_pane_g4

0x829c,	// (0x00081a73) main_mup_pane_g5_ParamLimits

0x829c,	// (0x00081a73) main_mup_pane_g5

0x82bd,	// (0x00081a94) main_mup_pane_g6_ParamLimits

0x82bd,	// (0x00081a94) main_mup_pane_g6

0x82dd,	// (0x00081ab4) main_mup_pane_g7_ParamLimits

0x82dd,	// (0x00081ab4) main_mup_pane_g7

0x8301,	// (0x00081ad8) main_mup_pane_g8_ParamLimits

0x8301,	// (0x00081ad8) main_mup_pane_g8

0x8325,	// (0x00081afc) main_mup_pane_g9_ParamLimits

0x8325,	// (0x00081afc) main_mup_pane_g9

0x8348,	// (0x00081b1f) main_mup_pane_g10_ParamLimits

0x8348,	// (0x00081b1f) main_mup_pane_g10

0x836b,	// (0x00081b42) main_mup_pane_g11_ParamLimits

0x836b,	// (0x00081b42) main_mup_pane_g11

0x838b,	// (0x00081b62) main_mup_pane_g12_ParamLimits

0x838b,	// (0x00081b62) main_mup_pane_g12

0x8399,	// (0x00081b70) main_mup_pane_g13_ParamLimits

0x8399,	// (0x00081b70) main_mup_pane_g13

0x000c,

0xf481,	// (0x00088c58) main_mup_pane_g_ParamLimits

0xf481,	// (0x00088c58) main_mup_pane_g

0x83af,	// (0x00081b86) main_mup_pane_t1_ParamLimits

0x83af,	// (0x00081b86) main_mup_pane_t1

0x83ce,	// (0x00081ba5) main_mup_pane_t2_ParamLimits

0x83ce,	// (0x00081ba5) main_mup_pane_t2

0x83e8,	// (0x00081bbf) main_mup_pane_t3_ParamLimits

0x83e8,	// (0x00081bbf) main_mup_pane_t3

0x8402,	// (0x00081bd9) main_mup_pane_t4_ParamLimits

0x8402,	// (0x00081bd9) main_mup_pane_t4

0x8414,	// (0x00081beb) main_mup_pane_t5_ParamLimits

0x8414,	// (0x00081beb) main_mup_pane_t5

0x8426,	// (0x00081bfd) main_mup_pane_t6_ParamLimits

0x8426,	// (0x00081bfd) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00088c73) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00088c73) main_mup_pane_t

0x843c,	// (0x00081c13) mup_progress_pane_ParamLimits

0x843c,	// (0x00081c13) mup_progress_pane

0x8448,	// (0x00081c1f) mup_visualizer_pane_ParamLimits

0x8448,	// (0x00081c1f) mup_visualizer_pane

0x8486,	// (0x00081c5d) mup_volume_pane_ParamLimits

0x8486,	// (0x00081c5d) mup_volume_pane

0x11fb,	// (0x0007a9d2) mup_visualizer_pane_g1_ParamLimits

0x11fb,	// (0x0007a9d2) mup_visualizer_pane_g1

0x11fb,	// (0x0007a9d2) mup_visualizer_pane_g2_ParamLimits

0x11fb,	// (0x0007a9d2) mup_visualizer_pane_g2

0x105f,	// (0x0007a836) mup_visualizer_pane_g3_ParamLimits

0x105f,	// (0x0007a836) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00088c80) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00088c80) mup_visualizer_pane_g

0xe79e,	// (0x00087f75) mup_volume_pane_g1

0x1211,	// (0x0007a9e8) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00088c87) mup_volume_pane_g

0xe79e,	// (0x00087f75) mup_progress_pane_g1

0x121a,	// (0x0007a9f1) mup_progress_pane_g2

0x1223,	// (0x0007a9fa) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00088c8c) mup_progress_pane_g

0xe423,	// (0x00087bfa) bg_popup_window_pane_cp05

0x122c,	// (0x0007aa03) heading_pane_cp02_ParamLimits

0x122c,	// (0x0007aa03) heading_pane_cp02

0x1248,	// (0x0007aa1f) list_popup_blid_pane

0x1250,	// (0x0007aa27) list_blid_sat_info_pane_ParamLimits

0x1250,	// (0x0007aa27) list_blid_sat_info_pane

0x1263,	// (0x0007aa3a) list_blid_sat_info_pane_g1

0x126b,	// (0x0007aa42) list_blid_sat_info_pane_t1

0x85a5,	// (0x00081d7c) mup_equalizer_pane_ParamLimits

0x85a5,	// (0x00081d7c) mup_equalizer_pane

0x85c6,	// (0x00081d9d) mup_equalizer_pane_cp1_ParamLimits

0x85c6,	// (0x00081d9d) mup_equalizer_pane_cp1

0x85e7,	// (0x00081dbe) mup_equalizer_pane_cp2_ParamLimits

0x85e7,	// (0x00081dbe) mup_equalizer_pane_cp2

0x8608,	// (0x00081ddf) mup_equalizer_pane_cp3_ParamLimits

0x8608,	// (0x00081ddf) mup_equalizer_pane_cp3

0x862d,	// (0x00081e04) mup_equalizer_pane_cp4_ParamLimits

0x862d,	// (0x00081e04) mup_equalizer_pane_cp4

0x8652,	// (0x00081e29) mup_equalizer_pane_cp5

0x866a,	// (0x00081e41) mup_equalizer_pane_cp6

0x8682,	// (0x00081e59) mup_equalizer_pane_cp7

0x2458,	// (0x0007bc2f) bg_popup_call_poc_act_pane_g9

0x2460,	// (0x0007bc37) bg_popup_call_poc_act_pane_g10

0x2468,	// (0x0007bc3f) bg_popup_call_poc_act_pane_g11

0x000a,

0xe67e,	// (0x00087e55) mup_scale_pane

0xe79e,	// (0x00087f75) mup_scale_pane_g1

0x1279,	// (0x0007aa50) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00088ca8) mup_scale_pane_g

0x129d,	// (0x0007aa74) msg_data_pane

0x12a5,	// (0x0007aa7c) scroll_pane_cp017

0x86ac,	// (0x00081e83) bg_list_pane_cp04_ParamLimits

0x86ac,	// (0x00081e83) bg_list_pane_cp04

0x12ad,	// (0x0007aa84) msg_data_pane_g1

0x86d4,	// (0x00081eab) msg_data_pane_g2

0x86de,	// (0x00081eb5) msg_data_pane_g3

0x86e8,	// (0x00081ebf) msg_data_pane_g4

0x86f0,	// (0x00081ec7) msg_data_pane_g5

0x86f8,	// (0x00081ecf) msg_data_pane_g6

0x8700,	// (0x00081ed7) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00088cb7) msg_data_pane_g

0x8708,	// (0x00081edf) msg_text_pane_ParamLimits

0x8708,	// (0x00081edf) msg_text_pane

0x8734,	// (0x00081f0b) qrid_highlight_pane_cp011_ParamLimits

0x8734,	// (0x00081f0b) qrid_highlight_pane_cp011

0xe423,	// (0x00087bfa) msg_body_pane

0xe423,	// (0x00087bfa) msg_header_pane

0x12be,	// (0x0007aa95) input_focus_pane_cp07

0x8758,	// (0x00081f2f) msg_header_pane_t1_ParamLimits

0x8758,	// (0x00081f2f) msg_header_pane_t1

0x876c,	// (0x00081f43) msg_header_pane_t2_ParamLimits

0x876c,	// (0x00081f43) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00088ccb) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00088ccb) msg_header_pane_t

0x12d3,	// (0x0007aaaa) msg_body_pane_g1

0x877e,	// (0x00081f55) msg_body_pane_t1_ParamLimits

0x877e,	// (0x00081f55) msg_body_pane_t1

0x87af,	// (0x00081f86) msg_body_pane_t2_ParamLimits

0x87af,	// (0x00081f86) msg_body_pane_t2

0x87c1,	// (0x00081f98) msg_body_pane_t3_ParamLimits

0x87c1,	// (0x00081f98) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00088cd0) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00088cd0) msg_body_pane_t

0x8825,	// (0x00081ffc) main_viewer_pane_g1_ParamLimits

0x8825,	// (0x00081ffc) main_viewer_pane_g1

0x8831,	// (0x00082008) main_viewer_pane_g2_ParamLimits

0x8831,	// (0x00082008) main_viewer_pane_g2

0x883d,	// (0x00082014) main_viewer_pane_g3_ParamLimits

0x883d,	// (0x00082014) main_viewer_pane_g3

0x884e,	// (0x00082025) main_viewer_pane_g4_ParamLimits

0x884e,	// (0x00082025) main_viewer_pane_g4

0x885f,	// (0x00082036) main_viewer_pane_g5_ParamLimits

0x885f,	// (0x00082036) main_viewer_pane_g5

0x885f,	// (0x00082036) main_viewer_pane_g7_ParamLimits

0x885f,	// (0x00082036) main_viewer_pane_g7

0x8871,	// (0x00082048) main_viewer_pane_g8_ParamLimits

0x8871,	// (0x00082048) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00088ce0) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00088ce0) main_viewer_pane_g

0x131d,	// (0x0007aaf4) viewer_content_pane_ParamLimits

0x131d,	// (0x0007aaf4) viewer_content_pane

0x88a9,	// (0x00082080) main_postcard_pane_g1_ParamLimits

0x88a9,	// (0x00082080) main_postcard_pane_g1

0x88b7,	// (0x0008208e) main_postcard_pane_g2_ParamLimits

0x88b7,	// (0x0008208e) main_postcard_pane_g2

0x88c5,	// (0x0008209c) main_postcard_pane_g3_ParamLimits

0x88c5,	// (0x0008209c) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00088cf1) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00088cf1) main_postcard_pane_g

0x88d5,	// (0x000820ac) main_postcard_pane_g4

0x4abb,	// (0x0007e292) smil_status_volume_pane_g2

0x8901,	// (0x000820d8) postcard_pane_ParamLimits

0x8901,	// (0x000820d8) postcard_pane

0x11fb,	// (0x0007a9d2) postcard_pane_g1_ParamLimits

0x11fb,	// (0x0007a9d2) postcard_pane_g1

0x893b,	// (0x00082112) postcard_pane_g2_ParamLimits

0x893b,	// (0x00082112) postcard_pane_g2

0x8947,	// (0x0008211e) postcard_pane_g3_ParamLimits

0x8947,	// (0x0008211e) postcard_pane_g3

0x1339,	// (0x0007ab10) postcard_pane_g4_ParamLimits

0x1339,	// (0x0007ab10) postcard_pane_g4

0x8953,	// (0x0008212a) postcard_pane_g5_ParamLimits

0x8953,	// (0x0008212a) postcard_pane_g5

0x895f,	// (0x00082136) postcard_pane_g6_ParamLimits

0x895f,	// (0x00082136) postcard_pane_g6

0x132b,	// (0x0007ab02) postcard_pane_g7_ParamLimits

0x132b,	// (0x0007ab02) postcard_pane_g7

0x0006,

0xf527,	// (0x00088cfe) postcard_pane_g_ParamLimits

0xf527,	// (0x00088cfe) postcard_pane_g

0x896d,	// (0x00082144) main_mp2_pane_g1_ParamLimits

0x896d,	// (0x00082144) main_mp2_pane_g1

0x897b,	// (0x00082152) main_mp2_pane_g2_ParamLimits

0x897b,	// (0x00082152) main_mp2_pane_g2

0x8987,	// (0x0008215e) main_mp2_pane_g3_ParamLimits

0x8987,	// (0x0008215e) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00088d0d) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00088d0d) main_mp2_pane_g

0x8993,	// (0x0008216a) main_mp2_pane_t1_ParamLimits

0x8993,	// (0x0008216a) main_mp2_pane_t1

0x89aa,	// (0x00082181) main_mp2_pane_t2_ParamLimits

0x89aa,	// (0x00082181) main_mp2_pane_t2

0x89be,	// (0x00082195) main_mp2_pane_t3_ParamLimits

0x89be,	// (0x00082195) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00088d14) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00088d14) main_mp2_pane_t

0x1347,	// (0x0007ab1e) pec_content_pane_ParamLimits

0x1347,	// (0x0007ab1e) pec_content_pane

0xeaab,	// (0x00088282) scroll_pane_cp015

0x1359,	// (0x0007ab30) pec_attribute_pane_ParamLimits

0x1359,	// (0x0007ab30) pec_attribute_pane

0x89d0,	// (0x000821a7) pec_content_pane_g1_ParamLimits

0x89d0,	// (0x000821a7) pec_content_pane_g1

0x1369,	// (0x0007ab40) pec_content_pane_t1_ParamLimits

0x1369,	// (0x0007ab40) pec_content_pane_t1

0x137b,	// (0x0007ab52) pec_content_pane_t2_ParamLimits

0x137b,	// (0x0007ab52) pec_content_pane_t2

0x0001,

0xf544,	// (0x00088d1b) pec_content_pane_t_ParamLimits

0xf544,	// (0x00088d1b) pec_content_pane_t

0x89dc,	// (0x000821b3) list_single_graphic_pane_cp01_ParamLimits

0x89dc,	// (0x000821b3) list_single_graphic_pane_cp01

0xe67e,	// (0x00087e55) bg_popup_sub_pane_cp04

0x138d,	// (0x0007ab64) popup_mup_playback_window_g1

0x1399,	// (0x0007ab70) popup_mup_playback_window_t1

0x13ae,	// (0x0007ab85) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00088d20) popup_mup_playback_window_t

0x13e5,	// (0x0007abbc) main_image_pane_g1_ParamLimits

0x13e5,	// (0x0007abbc) main_image_pane_g1

0x1428,	// (0x0007abff) scroll_pane_cp018_ParamLimits

0x1428,	// (0x0007abff) scroll_pane_cp018

0x1440,	// (0x0007ac17) scroll_pane_cp016_ParamLimits

0x1440,	// (0x0007ac17) scroll_pane_cp016

0x8a6d,	// (0x00082244) smil2_image_pane_ParamLimits

0x8a6d,	// (0x00082244) smil2_image_pane

0x8aa3,	// (0x0008227a) smil2_root_pane_ParamLimits

0x8aa3,	// (0x0008227a) smil2_root_pane

0x8acf,	// (0x000822a6) smil2_text_pane_ParamLimits

0x8acf,	// (0x000822a6) smil2_text_pane

0xe423,	// (0x00087bfa) bg_list_pane_cp06

0x147c,	// (0x0007ac53) grid_radio_pane

0xe423,	// (0x00087bfa) bg_popup_window_pane_cp06

0x1486,	// (0x0007ac5d) main_fmradio_pane_t1

0x0edc,	// (0x0007a6b3) heading_pane_cp04

0x1494,	// (0x0007ac6b) main_fmradio_pane_t2

0x2470,	// (0x0007bc47) popup_cale_lunar_info_window_g1

0x14a2,	// (0x0007ac79) main_fmradio_pane_t3

0x2478,	// (0x0007bc4f) popup_cale_lunar_info_window_g2

0x14b2,	// (0x0007ac89) main_fmradio_pane_t4

0x0001,

0x14c0,	// (0x0007ac97) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00088dfb) popup_cale_lunar_info_window_g

0xf55e,	// (0x00088d35) main_fmradio_pane_t

0x14ce,	// (0x0007aca5) wait_bar_pane_cp03

0x14d6,	// (0x0007acad) cell_fmradio_pane_ParamLimits

0x14d6,	// (0x0007acad) cell_fmradio_pane

0x132b,	// (0x0007ab02) cell_fmradio_pane_g1_ParamLimits

0x132b,	// (0x0007ab02) cell_fmradio_pane_g1

0xe423,	// (0x00087bfa) grid_highlight_pane_cp011

0x14eb,	// (0x0007acc2) poc_content_pane_ParamLimits

0x14eb,	// (0x0007acc2) poc_content_pane

0x14fd,	// (0x0007acd4) scroll_pane_cp019

0x8b0f,	// (0x000822e6) popup_call_poc_act_window_ParamLimits

0x8b0f,	// (0x000822e6) popup_call_poc_act_window

0x8b1c,	// (0x000822f3) popup_call_poc_inact_window_ParamLimits

0x8b1c,	// (0x000822f3) popup_call_poc_inact_window

0xf5fb,	// (0x00088dd2) bg_popup_call_poc_act_pane_g

0x23e8,	// (0x0007bbbf) bg_popup_call_poc_inact_pane_g1

0x23f0,	// (0x0007bbc7) bg_popup_call_poc_inact_pane_g2

0x1505,	// (0x0007acdc) popup_call_poc_act_window_g2

0x23f8,	// (0x0007bbcf) bg_popup_call_poc_inact_pane_g3

0x2400,	// (0x0007bbd7) bg_popup_call_poc_inact_pane_g4

0x2408,	// (0x0007bbdf) bg_popup_call_poc_inact_pane_g5

0x150d,	// (0x0007ace4) popup_call_poc_act_window_t1_ParamLimits

0x150d,	// (0x0007ace4) popup_call_poc_act_window_t1

0x1535,	// (0x0007ad0c) popup_call_poc_act_window_t2_ParamLimits

0x1535,	// (0x0007ad0c) popup_call_poc_act_window_t2

0x155d,	// (0x0007ad34) popup_call_poc_act_window_t3_ParamLimits

0x155d,	// (0x0007ad34) popup_call_poc_act_window_t3

0x1585,	// (0x0007ad5c) popup_call_poc_act_window_t4_ParamLimits

0x1585,	// (0x0007ad5c) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00088d40) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00088d40) popup_call_poc_act_window_t

0x2410,	// (0x0007bbe7) bg_popup_call_poc_inact_pane_g6

0x2418,	// (0x0007bbef) bg_popup_call_poc_inact_pane_g7

0x2420,	// (0x0007bbf7) bg_popup_call_poc_inact_pane_g8

0x1597,	// (0x0007ad6e) popup_call_poc_inact_window_g2

0x2428,	// (0x0007bbff) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00088dbf) bg_popup_call_poc_inact_pane_g

0x159f,	// (0x0007ad76) popup_call_poc_inact_window_t1_ParamLimits

0x159f,	// (0x0007ad76) popup_call_poc_inact_window_t1

0x15b4,	// (0x0007ad8b) popup_call_poc_inact_window_t2_ParamLimits

0x15b4,	// (0x0007ad8b) popup_call_poc_inact_window_t2

0x15c9,	// (0x0007ada0) popup_call_poc_inact_window_t3_ParamLimits

0x15c9,	// (0x0007ada0) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00088d49) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00088d49) popup_call_poc_inact_window_t

0x4a2e,	// (0x0007e205) context_pane_ParamLimits

0x912e,	// (0x00082905) signal_pane_ParamLimits

0x112a,	// (0x0007a901) main_call2_pane

0x4a1c,	// (0x0007e1f3) popup_phob_thumbnail2_window_ParamLimits

0x4a1c,	// (0x0007e1f3) popup_phob_thumbnail2_window

0x87d3,	// (0x00081faa) aid_hotspot_pointer_arrow_pane

0x87db,	// (0x00081fb2) aid_hotspot_pointer_hand_pane

0x8e44,	// (0x0008261b) phob_pre_status_pane_g5

0x6c49,	// (0x00080420) cams_zoom_pane_ParamLimits

0x6c55,	// (0x0008042c) image_vga_pane_ParamLimits

0x6c64,	// (0x0008043b) main_camera_pane_g1_ParamLimits

0x6c72,	// (0x00080449) main_camera_pane_g2_ParamLimits

0x6c7e,	// (0x00080455) main_camera_pane_g3_ParamLimits

0x6c8c,	// (0x00080463) main_camera_pane_g4_ParamLimits

0x6c9a,	// (0x00080471) main_camera_pane_g5_ParamLimits

0x6ca8,	// (0x0008047f) main_camera_pane_g6_ParamLimits

0x6cb6,	// (0x0008048d) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00088a48) main_camera_pane_g_ParamLimits

0x6cc4,	// (0x0008049b) main_camera_pane_t1_ParamLimits

0x6cd6,	// (0x000804ad) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00088a59) main_camera_pane_t_ParamLimits

0xe67e,	// (0x00087e55) bg_popup_preview_window_pane_cp01_ParamLimits

0xe67e,	// (0x00087e55) bg_popup_preview_window_pane_cp01

0x15de,	// (0x0007adb5) popup_phob_thumbnail2_window_g1_ParamLimits

0x15de,	// (0x0007adb5) popup_phob_thumbnail2_window_g1

0xe423,	// (0x00087bfa) call2_cli_visual_pane

0x8b38,	// (0x0008230f) popup_call2_audio_conf_window_ParamLimits

0x8b38,	// (0x0008230f) popup_call2_audio_conf_window

0x8b51,	// (0x00082328) popup_call2_audio_first_window_ParamLimits

0x8b51,	// (0x00082328) popup_call2_audio_first_window

0x8bef,	// (0x000823c6) popup_call2_audio_in_window_ParamLimits

0x8bef,	// (0x000823c6) popup_call2_audio_in_window

0x8c33,	// (0x0008240a) popup_call2_audio_out_window_ParamLimits

0x8c33,	// (0x0008240a) popup_call2_audio_out_window

0x8c9d,	// (0x00082474) popup_call2_audio_second_window_ParamLimits

0x8c9d,	// (0x00082474) popup_call2_audio_second_window

0x8cfb,	// (0x000824d2) popup_call2_audio_wait_window_ParamLimits

0x8cfb,	// (0x000824d2) popup_call2_audio_wait_window

0xe423,	// (0x00087bfa) bg_popup_call2_act_pane_cp03

0xe660,	// (0x00087e37) list_conf_pane_cp

0x15ea,	// (0x0007adc1) popup_call2_audio_conf_window_t1

0x15f8,	// (0x0007adcf) list_single_graphic_popup_conf2_pane_ParamLimits

0x15f8,	// (0x0007adcf) list_single_graphic_popup_conf2_pane

0x0f4b,	// (0x0007a722) list_highlight_pane_cp04

0x160b,	// (0x0007ade2) list_single_graphic_popup_conf2_pane_g1

0x0f5c,	// (0x0007a733) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00088d50) list_single_graphic_popup_conf2_pane_g

0x1615,	// (0x0007adec) list_single_graphic_popup_conf2_pane_t1

0x1623,	// (0x0007adfa) bg_popup_call2_act_pane_cp01_ParamLimits

0x1623,	// (0x0007adfa) bg_popup_call2_act_pane_cp01

0x16ad,	// (0x0007ae84) call_type_pane_cp05_ParamLimits

0x16ad,	// (0x0007ae84) call_type_pane_cp05

0x1701,	// (0x0007aed8) popup_call2_audio_second_window_g1_ParamLimits

0x1701,	// (0x0007aed8) popup_call2_audio_second_window_g1

0x1755,	// (0x0007af2c) popup_call2_audio_second_window_g2_ParamLimits

0x1755,	// (0x0007af2c) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00088d55) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00088d55) popup_call2_audio_second_window_g

0x17ba,	// (0x0007af91) popup_call2_audio_second_window_t1_ParamLimits

0x17ba,	// (0x0007af91) popup_call2_audio_second_window_t1

0x1875,	// (0x0007b04c) popup_call2_audio_second_window_t2_ParamLimits

0x1875,	// (0x0007b04c) popup_call2_audio_second_window_t2

0x18c8,	// (0x0007b09f) popup_call2_audio_second_window_t3_ParamLimits

0x18c8,	// (0x0007b09f) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00088d5c) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00088d5c) popup_call2_audio_second_window_t

0xe423,	// (0x00087bfa) bg_popup_call2_in_pane_cp02

0xe42d,	// (0x00087c04) call_type_pane_cp04

0xe435,	// (0x00087c0c) popup_call2_audio_wait_window_g1

0xe43d,	// (0x00087c14) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00088935) popup_call2_audio_wait_window_g

0xe445,	// (0x00087c1c) popup_call2_audio_wait_window_t3

0x19bb,	// (0x0007b192) bg_popup_call2_act_pane_ParamLimits

0x19bb,	// (0x0007b192) bg_popup_call2_act_pane

0x1a7b,	// (0x0007b252) call_type_pane_cp03_ParamLimits

0x1a7b,	// (0x0007b252) call_type_pane_cp03

0x1adf,	// (0x0007b2b6) popup_call2_audio_first_window_g1_ParamLimits

0x1adf,	// (0x0007b2b6) popup_call2_audio_first_window_g1

0x1b4f,	// (0x0007b326) popup_call2_audio_first_window_g2_ParamLimits

0x1b4f,	// (0x0007b326) popup_call2_audio_first_window_g2

0x11fb,	// (0x0007a9d2) popup_call2_audio_first_window_g3_ParamLimits

0x11fb,	// (0x0007a9d2) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00088d65) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00088d65) popup_call2_audio_first_window_g

0x1c2d,	// (0x0007b404) popup_call2_audio_first_window_t1_ParamLimits

0x1c2d,	// (0x0007b404) popup_call2_audio_first_window_t1

0x1d30,	// (0x0007b507) popup_call2_audio_first_window_t4_ParamLimits

0x1d30,	// (0x0007b507) popup_call2_audio_first_window_t4

0x1e13,	// (0x0007b5ea) popup_call2_audio_first_window_t5_ParamLimits

0x1e13,	// (0x0007b5ea) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00088d70) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00088d70) popup_call2_audio_first_window_t

0xe676,	// (0x00087e4d) bg_popup_call2_act_pane_g1

0x2482,	// (0x0007bc59) popup_cale_lunar_info_window_t1

0x2490,	// (0x0007bc67) popup_cale_lunar_info_window_t2

0x249e,	// (0x0007bc75) popup_cale_lunar_info_window_t3

0xe423,	// (0x00087bfa) bg_popup_call2_bubble_pane

0x1f14,	// (0x0007b6eb) bg_popup_call2_in_pane_cp01_ParamLimits

0x1f14,	// (0x0007b6eb) bg_popup_call2_in_pane_cp01

0xe0ff,	// (0x000878d6) call_type_pane_cp02

0x1f5c,	// (0x0007b733) popup_call2_audio_out_window_g1_ParamLimits

0x1f5c,	// (0x0007b733) popup_call2_audio_out_window_g1

0x1f88,	// (0x0007b75f) popup_call2_audio_out_window_g2_ParamLimits

0x1f88,	// (0x0007b75f) popup_call2_audio_out_window_g2

0x1fb0,	// (0x0007b787) popup_call2_audio_out_window_g3_ParamLimits

0x1fb0,	// (0x0007b787) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00088d79) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00088d79) popup_call2_audio_out_window_g

0x1feb,	// (0x0007b7c2) popup_call2_audio_out_window_t1_ParamLimits

0x1feb,	// (0x0007b7c2) popup_call2_audio_out_window_t1

0x204a,	// (0x0007b821) popup_call2_audio_out_window_t2_ParamLimits

0x204a,	// (0x0007b821) popup_call2_audio_out_window_t2

0x209e,	// (0x0007b875) popup_call2_audio_out_window_t3_ParamLimits

0x209e,	// (0x0007b875) popup_call2_audio_out_window_t3

0x20b4,	// (0x0007b88b) popup_call2_audio_out_window_t4_ParamLimits

0x20b4,	// (0x0007b88b) popup_call2_audio_out_window_t4

0x20ca,	// (0x0007b8a1) popup_call2_audio_out_window_t5_ParamLimits

0x20ca,	// (0x0007b8a1) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00088d82) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00088d82) popup_call2_audio_out_window_t

0x212e,	// (0x0007b905) bg_popup_call2_in_pane_ParamLimits

0x212e,	// (0x0007b905) bg_popup_call2_in_pane

0x218a,	// (0x0007b961) popup_call2_audio_in_window_g1_ParamLimits

0x218a,	// (0x0007b961) popup_call2_audio_in_window_g1

0x21c2,	// (0x0007b999) popup_call2_audio_in_window_g2_ParamLimits

0x21c2,	// (0x0007b999) popup_call2_audio_in_window_g2

0x21fa,	// (0x0007b9d1) popup_call2_audio_in_window_g3_ParamLimits

0x21fa,	// (0x0007b9d1) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00088d8f) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00088d8f) popup_call2_audio_in_window_g

0x2252,	// (0x0007ba29) popup_call2_audio_in_window_t1_ParamLimits

0x2252,	// (0x0007ba29) popup_call2_audio_in_window_t1

0x22d2,	// (0x0007baa9) popup_call2_audio_in_window_t2_ParamLimits

0x22d2,	// (0x0007baa9) popup_call2_audio_in_window_t2

0x2352,	// (0x0007bb29) popup_call2_audio_in_window_t3_ParamLimits

0x2352,	// (0x0007bb29) popup_call2_audio_in_window_t3

0x236c,	// (0x0007bb43) popup_call2_audio_in_window_t4_ParamLimits

0x236c,	// (0x0007bb43) popup_call2_audio_in_window_t4

0x237e,	// (0x0007bb55) popup_call2_audio_in_window_t5_ParamLimits

0x237e,	// (0x0007bb55) popup_call2_audio_in_window_t5

0x2393,	// (0x0007bb6a) popup_call2_audio_in_window_t6_ParamLimits

0x2393,	// (0x0007bb6a) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00088d98) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00088d98) popup_call2_audio_in_window_t

0xe676,	// (0x00087e4d) bg_popup_call2_in_pane_g1

0x24ac,	// (0x0007bc83) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00088e00) popup_cale_lunar_info_window_t

0xe67e,	// (0x00087e55) bg_popup_call2_rect_pane_ParamLimits

0xe67e,	// (0x00087e55) bg_popup_call2_rect_pane

0xe423,	// (0x00087bfa) call2_cli_visual_graphic_pane

0xe423,	// (0x00087bfa) call2_cli_visual_text_pane

0x91b3,	// (0x0008298a) smil_status_volume_pane_g3

0x0002,

0xe79e,	// (0x00087f75) call2_cli_visual_graphic_pane_g1

0xe79e,	// (0x00087f75) call2_cli_visual_graphic_pane_g2

0xe79e,	// (0x00087f75) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00088da5) call2_cli_visual_graphic_pane_g

0x23a8,	// (0x0007bb7f) bg_popup_call2_rect_pane_g1

0xe83c,	// (0x00088013) bg_popup_call2_rect_pane_g2

0x23b0,	// (0x0007bb87) bg_popup_call2_rect_pane_g3

0x23b8,	// (0x0007bb8f) bg_popup_call2_rect_pane_g4

0x23c0,	// (0x0007bb97) bg_popup_call2_rect_pane_g5

0x23c8,	// (0x0007bb9f) bg_popup_call2_rect_pane_g6

0x23d0,	// (0x0007bba7) bg_popup_call2_rect_pane_g7

0x23d8,	// (0x0007bbaf) bg_popup_call2_rect_pane_g8

0x23e0,	// (0x0007bbb7) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00088dac) bg_popup_call2_rect_pane_g

0x23e8,	// (0x0007bbbf) bg_popup_call2_bubble_pane_g1

0x23f0,	// (0x0007bbc7) bg_popup_call2_bubble_pane_g2

0x23f8,	// (0x0007bbcf) bg_popup_call2_bubble_pane_g3

0x2400,	// (0x0007bbd7) bg_popup_call2_bubble_pane_g4

0x2408,	// (0x0007bbdf) bg_popup_call2_bubble_pane_g5

0x2410,	// (0x0007bbe7) bg_popup_call2_bubble_pane_g6

0x2418,	// (0x0007bbef) bg_popup_call2_bubble_pane_g7

0x2420,	// (0x0007bbf7) bg_popup_call2_bubble_pane_g8

0x2428,	// (0x0007bbff) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00088dbf) bg_popup_call2_bubble_pane_g

0x66e0,	// (0x0007feb7) aid_cale_week_size_cell_pane

0x6cea,	// (0x000804c1) aid_cams_cif_uncrop_pane_ParamLimits

0x6cea,	// (0x000804c1) aid_cams_cif_uncrop_pane

0x6e47,	// (0x0008061e) aid_cams_size_cell_ParamLimits

0x6e47,	// (0x0008061e) aid_cams_size_cell

0x6e53,	// (0x0008062a) grid_cams_pane_ParamLimits

0x6e61,	// (0x00080638) linegrid_cams_pane_ParamLimits

0x6f50,	// (0x00080727) call_video_pane_t1

0x6f66,	// (0x0008073d) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00088aac) call_video_pane_t

0x73c0,	// (0x00080b97) aid_cale_month_size_cell_pane_ParamLimits

0x73c0,	// (0x00080b97) aid_cale_month_size_cell_pane

0xf672,	// (0x00088e49) smil_status_volume_pane_g

0x91c0,	// (0x00082997) volume_smil_pane_ParamLimits

0xdfc1,	// (0x00087798) aid_popup2_width_pane

0x65fc,	// (0x0007fdd3) cell_qdial_pane_g4_ParamLimits

0x65fc,	// (0x0007fdd3) cell_qdial_pane_g4

0x8081,	// (0x00081858) aid_blid_cardinal_pane_ParamLimits

0x8091,	// (0x00081868) aid_blid_destination_pane_ParamLimits

0x8091,	// (0x00081868) aid_blid_destination_pane

0xe67e,	// (0x00087e55) bg_popup_call_poc_act_pane_ParamLimits

0xe67e,	// (0x00087e55) bg_popup_call_poc_act_pane

0xe67e,	// (0x00087e55) bg_popup_call_poc_inact_pane_ParamLimits

0xe67e,	// (0x00087e55) bg_popup_call_poc_inact_pane

0x2430,	// (0x0007bc07) bg_popup_call_poc_act_pane_g1

0x2438,	// (0x0007bc0f) bg_popup_call_poc_act_pane_g2

0x2440,	// (0x0007bc17) bg_popup_call_poc_act_pane_g3

0x2400,	// (0x0007bbd7) bg_popup_call_poc_act_pane_g4

0x2408,	// (0x0007bbdf) bg_popup_call_poc_act_pane_g5

0x2448,	// (0x0007bc1f) bg_popup_call_poc_act_pane_g6

0x2418,	// (0x0007bbef) bg_popup_call_poc_act_pane_g7

0x2450,	// (0x0007bc27) bg_popup_call_poc_act_pane_g8

0xe423,	// (0x00087bfa) main_usb_pane

0x49f3,	// (0x0007e1ca) popup_cale_lunar_info_window

0x71fd,	// (0x000809d4) im_reading_pane_t1_ParamLimits

0xea03,	// (0x000881da) list_im_pane_ParamLimits

0xea14,	// (0x000881eb) scroll_pane_cp07_ParamLimits

0xe423,	// (0x00087bfa) grid_highlight_pane_cp012

0xe67e,	// (0x00087e55) mup_scale_pane_ParamLimits

0x11fb,	// (0x0007a9d2) main_usb_pane_g1_ParamLimits

0x11fb,	// (0x0007a9d2) main_usb_pane_g1

0x8d67,	// (0x0008253e) main_usb_pane_g2_ParamLimits

0x8d67,	// (0x0008253e) main_usb_pane_g2

0x0001,

0xf612,	// (0x00088de9) main_usb_pane_g_ParamLimits

0xf612,	// (0x00088de9) main_usb_pane_g

0x8d73,	// (0x0008254a) main_usb_pane_t1_ParamLimits

0x8d73,	// (0x0008254a) main_usb_pane_t1

0x8d85,	// (0x0008255c) main_usb_pane_t2_ParamLimits

0x8d85,	// (0x0008255c) main_usb_pane_t2

0x8d97,	// (0x0008256e) main_usb_pane_t3_ParamLimits

0x8d97,	// (0x0008256e) main_usb_pane_t3

0x8da9,	// (0x00082580) main_usb_pane_t4_ParamLimits

0x8da9,	// (0x00082580) main_usb_pane_t4

0x8dbb,	// (0x00082592) main_usb_pane_t5_ParamLimits

0x8dbb,	// (0x00082592) main_usb_pane_t5

0x8dcd,	// (0x000825a4) main_usb_pane_t6_ParamLimits

0x8dcd,	// (0x000825a4) main_usb_pane_t6

0x0005,

0xf617,	// (0x00088dee) main_usb_pane_t_ParamLimits

0x803c,	// (0x00081813) aid_text_placing

0x8047,	// (0x0008181e) main_location2_pane_t1_ParamLimits

0x805b,	// (0x00081832) main_location2_pane_t2_ParamLimits

0x805b,	// (0x00081832) main_location2_pane_t3_ParamLimits

0x806f,	// (0x00081846) main_location2_pane_t4_ParamLimits

0x806f,	// (0x00081846) main_location2_pane_t4

0xf436,	// (0x00088c0d) main_location2_pane_t_ParamLimits

0xe6ba,	// (0x00087e91) find_pinb_pane_g2_ParamLimits

0xe6ba,	// (0x00087e91) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0008895b) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0008895b) find_pinb_pane_g

0xe6c6,	// (0x00087e9d) find_pinb_pane_t1_ParamLimits

0xe6d8,	// (0x00087eaf) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00088960) find_pinb_pane_t_ParamLimits

0xe423,	// (0x00087bfa) main_call3_pane

0x771c,	// (0x00080ef3) cale_month_day_heading_pane_t1_ParamLimits

0x777a,	// (0x00080f51) cale_month_day_heading_pane_t2_ParamLimits

0x77df,	// (0x00080fb6) cale_month_day_heading_pane_t3_ParamLimits

0x7844,	// (0x0008101b) cale_month_day_heading_pane_t4_ParamLimits

0x78a9,	// (0x00081080) cale_month_day_heading_pane_t5_ParamLimits

0x7916,	// (0x000810ed) cale_month_day_heading_pane_t6_ParamLimits

0x798b,	// (0x00081162) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00088ae4) cale_month_day_heading_pane_t_ParamLimits

0x0adf,	// (0x0007a2b6) smil_status_volume_pane

0x891f,	// (0x000820f6) postcard_address_pane_ParamLimits

0x891f,	// (0x000820f6) postcard_address_pane

0x892d,	// (0x00082104) postcard_message_pane_ParamLimits

0x892d,	// (0x00082104) postcard_message_pane

0x8d3a,	// (0x00082511) call2_cli_visual_pane_t1_ParamLimits

0x8d3a,	// (0x00082511) call2_cli_visual_pane_t1

0x9306,	// (0x00082add) postcard_message_pane_t1_ParamLimits

0x9306,	// (0x00082add) postcard_message_pane_t1

0x4b03,	// (0x0007e2da) postcard_address_pane_t1_ParamLimits

0x4b03,	// (0x0007e2da) postcard_address_pane_t1

0x92f7,	// (0x00082ace) popup_call3_audio_in_window_ParamLimits

0x92f7,	// (0x00082ace) popup_call3_audio_in_window

0x91d5,	// (0x000829ac) bg_popup_call3_in_pane_ParamLimits

0x91d5,	// (0x000829ac) bg_popup_call3_in_pane

0x923d,	// (0x00082a14) popup_call3_audio_in_window_g1_ParamLimits

0x923d,	// (0x00082a14) popup_call3_audio_in_window_g1

0x9255,	// (0x00082a2c) popup_call3_audio_in_window_g2_ParamLimits

0x9255,	// (0x00082a2c) popup_call3_audio_in_window_g2

0x926d,	// (0x00082a44) popup_call3_audio_in_window_g3_ParamLimits

0x926d,	// (0x00082a44) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00088e50) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00088e50) popup_call3_audio_in_window_g

0x9295,	// (0x00082a6c) popup_call3_audio_in_window_t1_ParamLimits

0x9295,	// (0x00082a6c) popup_call3_audio_in_window_t1

0x92bd,	// (0x00082a94) popup_call3_audio_in_window_t2_ParamLimits

0x92bd,	// (0x00082a94) popup_call3_audio_in_window_t2

0x92e5,	// (0x00082abc) popup_call3_audio_in_window_t3_ParamLimits

0x92e5,	// (0x00082abc) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00088e59) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00088e59) popup_call3_audio_in_window_t

0x112a,	// (0x0007a901) bg_popup_call3_rect_pane

0x23a8,	// (0x0007bb7f) bg_popup_call3_rect_pane_g1

0xe83c,	// (0x00088013) bg_popup_call3_rect_pane_g2

0x23b0,	// (0x0007bb87) bg_popup_call3_rect_pane_g3

0x23b8,	// (0x0007bb8f) bg_popup_call3_rect_pane_g4

0x23c0,	// (0x0007bb97) bg_popup_call3_rect_pane_g5

0x23c8,	// (0x0007bb9f) bg_popup_call3_rect_pane_g6

0x23d0,	// (0x0007bba7) bg_popup_call3_rect_pane_g7

0x84a1,	// (0x00081c78) mup_visualizer_osc_pane

0x1209,	// (0x0007a9e0) mup_visualizer_spec_pane

0x91f5,	// (0x000829cc) call3_video_qcif_pane_ParamLimits

0x91f5,	// (0x000829cc) call3_video_qcif_pane

0x9207,	// (0x000829de) call3_video_qcif_uncrop_pane_ParamLimits

0x9207,	// (0x000829de) call3_video_qcif_uncrop_pane

0x9217,	// (0x000829ee) call3_video_subqcif_pane_ParamLimits

0x9217,	// (0x000829ee) call3_video_subqcif_pane

0x922b,	// (0x00082a02) call3_video_subqcif_uncrop_pane_ParamLimits

0x922b,	// (0x00082a02) call3_video_subqcif_uncrop_pane

0x9285,	// (0x00082a5c) popup_call3_audio_in_window_g4_ParamLimits

0x9285,	// (0x00082a5c) popup_call3_audio_in_window_g4

0x91a2,	// (0x00082979) mup_spec_half_pane

0x91ab,	// (0x00082982) mup_spec_half_pane_cp

0x4aa1,	// (0x0007e278) mup_osc_middle_pane

0x4aaa,	// (0x0007e281) mup_visualizer_osc_pane_g1

0x9182,	// (0x00082959) mup_spec_bar_pane_ParamLimits

0x9182,	// (0x00082959) mup_spec_bar_pane

0x4a8e,	// (0x0007e265) mup_spec_bar_pane_g1

0x4a98,	// (0x0007e26f) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00088e44) mup_spec_bar_pane_g

0x66e0,	// (0x0007feb7) aid_cale_week_size_cell_pane_ParamLimits

0x66f3,	// (0x0007feca) bg_cale_heading_pane_ParamLimits

0xe870,	// (0x00088047) bg_cale_pane_cp01_ParamLimits

0x6707,	// (0x0007fede) cale_week_corner_pane_ParamLimits

0x671d,	// (0x0007fef4) cale_week_day_heading_pane_ParamLimits

0x6731,	// (0x0007ff08) cale_week_scroll_pane_g1_ParamLimits

0x6742,	// (0x0007ff19) cale_week_scroll_pane_g2_ParamLimits

0x6753,	// (0x0007ff2a) cale_week_scroll_pane_g3_ParamLimits

0x6764,	// (0x0007ff3b) cale_week_scroll_pane_g4_ParamLimits

0x6775,	// (0x0007ff4c) cale_week_scroll_pane_g5_ParamLimits

0x6786,	// (0x0007ff5d) cale_week_scroll_pane_g6_ParamLimits

0x6799,	// (0x0007ff70) cale_week_scroll_pane_g7_ParamLimits

0x67ac,	// (0x0007ff83) cale_week_scroll_pane_g8_ParamLimits

0x67bf,	// (0x0007ff96) cale_week_scroll_pane_g9_ParamLimits

0x67d0,	// (0x0007ffa7) cale_week_scroll_pane_g10_ParamLimits

0x67e1,	// (0x0007ffb8) cale_week_scroll_pane_g11_ParamLimits

0x67f2,	// (0x0007ffc9) cale_week_scroll_pane_g12_ParamLimits

0x6803,	// (0x0007ffda) cale_week_scroll_pane_g13_ParamLimits

0x6814,	// (0x0007ffeb) cale_week_scroll_pane_g14_ParamLimits

0x6825,	// (0x0007fffc) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x000889ec) cale_week_scroll_pane_g_ParamLimits

0x6836,	// (0x0008000d) cale_week_time_pane_ParamLimits

0x6849,	// (0x00080020) grid_cale_week_pane_ParamLimits

0xe889,	// (0x00088060) listscroll_cale_week_pane_t1

0x685e,	// (0x00080035) scroll_pane_cp08_ParamLimits

0x7401,	// (0x00080bd8) cale_month_corner_pane_ParamLimits

0x0a7f,	// (0x0007a256) cale_month_pane_t1

0x76db,	// (0x00080eb2) cale_month_week_pane_ParamLimits

0x11fb,	// (0x0007a9d2) popup_call_status_window_g1_ParamLimits

0x7e4e,	// (0x00081625) popup_call_status_window_g2_ParamLimits

0x7e5a,	// (0x00081631) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00088b94) popup_call_status_window_g_ParamLimits

0x0e65,	// (0x0007a63c) aid_call2_pane

0x874a,	// (0x00081f21) msg_header_pane_g1

0x891f,	// (0x000820f6) postcard_address2_pane_ParamLimits

0x891f,	// (0x000820f6) postcard_address2_pane

0x892d,	// (0x00082104) postcard_message2_pane_ParamLimits

0x892d,	// (0x00082104) postcard_message2_pane

0x913c,	// (0x00082913) message2_row_pane_ParamLimits

0x913c,	// (0x00082913) message2_row_pane

0x4a49,	// (0x0007e220) address2_row_pane_ParamLimits

0x4a49,	// (0x0007e220) address2_row_pane

0x4a5c,	// (0x0007e233) postcard_message2_row_pane_g1

0x4a64,	// (0x0007e23b) postcard_message2_row_pane_t1

0x4a5c,	// (0x0007e233) address2_row_pane_g1

0x4a64,	// (0x0007e23b) address2_row_pane_t1

0x6ba8,	// (0x0008037f) aid_size_cell_vorec

0xe423,	// (0x00087bfa) main_rss_pane

0x9156,	// (0x0008292d) rss_list_single_pane_ParamLimits

0x9156,	// (0x0008292d) rss_list_single_pane

0x4a72,	// (0x0007e249) rss_list_single_pane_t1

0x4a80,	// (0x0007e257) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00088e3f) rss_list_single_pane_t

0xe423,	// (0x00087bfa) main_camera2_pane

0xe423,	// (0x00087bfa) main_video2_pane

0x936a,	// (0x00082b41) cams_zoom_pane_cp2_ParamLimits

0x936a,	// (0x00082b41) cams_zoom_pane_cp2

0x9376,	// (0x00082b4d) image2_vga_pane_ParamLimits

0x9376,	// (0x00082b4d) image2_vga_pane

0x9385,	// (0x00082b5c) main_camera2_pane_g1_ParamLimits

0x9385,	// (0x00082b5c) main_camera2_pane_g1

0x9391,	// (0x00082b68) main_camera2_pane_g2_ParamLimits

0x9391,	// (0x00082b68) main_camera2_pane_g2

0x939d,	// (0x00082b74) main_camera2_pane_g3_ParamLimits

0x939d,	// (0x00082b74) main_camera2_pane_g3

0x93a9,	// (0x00082b80) main_camera2_pane_g4_ParamLimits

0x93a9,	// (0x00082b80) main_camera2_pane_g4

0x93b5,	// (0x00082b8c) main_camera2_pane_g5_ParamLimits

0x93b5,	// (0x00082b8c) main_camera2_pane_g5

0x93c1,	// (0x00082b98) main_camera2_pane_g6_ParamLimits

0x93c1,	// (0x00082b98) main_camera2_pane_g6

0x93cd,	// (0x00082ba4) main_camera2_pane_g7_ParamLimits

0x93cd,	// (0x00082ba4) main_camera2_pane_g7

0x93d9,	// (0x00082bb0) main_camera2_pane_g8_ParamLimits

0x93d9,	// (0x00082bb0) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00088e60) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00088e60) main_camera2_pane_g

0x93f1,	// (0x00082bc8) main_camera2_pane_t1_ParamLimits

0x93f1,	// (0x00082bc8) main_camera2_pane_t1

0x9403,	// (0x00082bda) main_camera2_pane_t2_ParamLimits

0x9403,	// (0x00082bda) main_camera2_pane_t2

0x9415,	// (0x00082bec) main_camera2_pane_t3_ParamLimits

0x9415,	// (0x00082bec) main_camera2_pane_t3

0x9427,	// (0x00082bfe) main_camera2_pane_t4_ParamLimits

0x9427,	// (0x00082bfe) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00088e73) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00088e73) main_camera2_pane_t

0x9484,	// (0x00082c5b) cams_zoom_pane_cp4_ParamLimits

0x9484,	// (0x00082c5b) cams_zoom_pane_cp4

0x9494,	// (0x00082c6b) image2_cif_pane_ParamLimits

0x9494,	// (0x00082c6b) image2_cif_pane

0x94a9,	// (0x00082c80) image2_subqcif_pane_ParamLimits

0x94a9,	// (0x00082c80) image2_subqcif_pane

0x94b8,	// (0x00082c8f) main_video2_pane_g1_ParamLimits

0x94b8,	// (0x00082c8f) main_video2_pane_g1

0x94ca,	// (0x00082ca1) main_video2_pane_g2_ParamLimits

0x94ca,	// (0x00082ca1) main_video2_pane_g2

0x94da,	// (0x00082cb1) main_video2_pane_g3_ParamLimits

0x94da,	// (0x00082cb1) main_video2_pane_g3

0x94ea,	// (0x00082cc1) main_video2_pane_g4_ParamLimits

0x94ea,	// (0x00082cc1) main_video2_pane_g4

0x94fa,	// (0x00082cd1) main_video2_pane_g5_ParamLimits

0x94fa,	// (0x00082cd1) main_video2_pane_g5

0x950a,	// (0x00082ce1) main_video2_pane_g6_ParamLimits

0x950a,	// (0x00082ce1) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00088e82) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00088e82) main_video2_pane_g

0x951c,	// (0x00082cf3) main_video2_pane_t1_ParamLimits

0x951c,	// (0x00082cf3) main_video2_pane_t1

0x9536,	// (0x00082d0d) main_video2_pane_t2_ParamLimits

0x9536,	// (0x00082d0d) main_video2_pane_t2

0x955c,	// (0x00082d33) main_video2_pane_t3_ParamLimits

0x955c,	// (0x00082d33) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00088e8f) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00088e8f) main_video2_pane_t

0x8e84,	// (0x0008265b) call_muted_g2

0x0001,

0xf65a,	// (0x00088e31) call_muted_g

0xe423,	// (0x00087bfa) main_mup2_pane

0x9582,	// (0x00082d59) main_mup2_pane_g1_ParamLimits

0x9582,	// (0x00082d59) main_mup2_pane_g1

0x958e,	// (0x00082d65) main_mup2_pane_g2_ParamLimits

0x958e,	// (0x00082d65) main_mup2_pane_g2

0x989c,	// (0x00083073) main_mup_pane_g13_cp1

0x98a4,	// (0x0008307b) mup_volume_pane_cp1

0x95b0,	// (0x00082d87) main_mup2_pane_g4_ParamLimits

0x95b0,	// (0x00082d87) main_mup2_pane_g4

0x95c5,	// (0x00082d9c) main_mup2_pane_g5_ParamLimits

0x95c5,	// (0x00082d9c) main_mup2_pane_g5

0x95da,	// (0x00082db1) main_mup2_pane_g6_ParamLimits

0x95da,	// (0x00082db1) main_mup2_pane_g6

0x95ef,	// (0x00082dc6) main_mup2_pane_g7_ParamLimits

0x95ef,	// (0x00082dc6) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00088e96) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00088e96) main_mup2_pane_g

0x960b,	// (0x00082de2) main_mup2_pane_t1_ParamLimits

0x960b,	// (0x00082de2) main_mup2_pane_t1

0x9622,	// (0x00082df9) main_mup2_pane_t2_ParamLimits

0x9622,	// (0x00082df9) main_mup2_pane_t2

0x9639,	// (0x00082e10) main_mup2_pane_t3_ParamLimits

0x9639,	// (0x00082e10) main_mup2_pane_t3

0x9650,	// (0x00082e27) main_mup2_pane_t4_ParamLimits

0x9650,	// (0x00082e27) main_mup2_pane_t4

0x966a,	// (0x00082e41) main_mup2_pane_t5_ParamLimits

0x966a,	// (0x00082e41) main_mup2_pane_t5

0x9684,	// (0x00082e5b) main_mup2_pane_t6_ParamLimits

0x9684,	// (0x00082e5b) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00088ea5) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00088ea5) main_mup2_pane_t

0x96bc,	// (0x00082e93) mup2_visualizer_pane_ParamLimits

0x96bc,	// (0x00082e93) mup2_visualizer_pane

0x96f2,	// (0x00082ec9) mup_progress_pane_cp_ParamLimits

0x96f2,	// (0x00082ec9) mup_progress_pane_cp

0x987e,	// (0x00083055) mup_volume_pane_cp_ParamLimits

0x987e,	// (0x00083055) mup_volume_pane_cp

0x970b,	// (0x00082ee2) mup2_visualizer_pane_g1_ParamLimits

0x970b,	// (0x00082ee2) mup2_visualizer_pane_g1

0x4b45,	// (0x0007e31c) mup2_visualizer_pane_g2_ParamLimits

0x4b45,	// (0x0007e31c) mup2_visualizer_pane_g2

0x9720,	// (0x00082ef7) mup2_visualizer_pane_g3_ParamLimits

0x9720,	// (0x00082ef7) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00088eb2) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00088eb2) mup2_visualizer_pane_g

0x1474,	// (0x0007ac4b) aid_size_cell_fmradio

0x8f9a,	// (0x00082771) aid_height_parent_landcape

0xea92,	// (0x00088269) wml_content_pane_cp

0xea9a,	// (0x00088271) wml_tabs_pane

0xeaa3,	// (0x0008827a) popup_wml_miniature_window

0xeaab,	// (0x00088282) scroll_pane_cp021

0xeabf,	// (0x00088296) wml_content_pane_comp8

0xe423,	// (0x00087bfa) bg_popup_sub_pane_cp05

0x4b63,	// (0x0007e33a) popup_wml_miniature_window_g1

0x4b6b,	// (0x0007e342) wml_miniature_view_pane

0x972e,	// (0x00082f05) aid_size_wml_view

0x9736,	// (0x00082f0d) wml_miniature_view_pane_g1

0x973f,	// (0x00082f16) wml_miniature_view_pane_g2

0x9748,	// (0x00082f1f) wml_miniature_view_pane_g3

0x9750,	// (0x00082f27) wml_miniature_view_pane_g4

0x9758,	// (0x00082f2f) wml_miniature_view_pane_g5

0x9760,	// (0x00082f37) wml_miniature_view_pane_g6

0x9768,	// (0x00082f3f) wml_miniature_view_pane_g7

0x9770,	// (0x00082f47) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00088eb9) wml_miniature_view_pane_g

0x9582,	// (0x00082d59) background_graphic_ParamLimits

0x9582,	// (0x00082d59) background_graphic

0x9778,	// (0x00082f4f) wml_tabs_2_pane

0x9781,	// (0x00082f58) wml_tabs_3_pane_ParamLimits

0x9781,	// (0x00082f58) wml_tabs_3_pane

0x9793,	// (0x00082f6a) wml_tabs_4_pane_ParamLimits

0x9793,	// (0x00082f6a) wml_tabs_4_pane

0x97a9,	// (0x00082f80) wml_tabs_5_pane_ParamLimits

0x97a9,	// (0x00082f80) wml_tabs_5_pane

0x97c3,	// (0x00082f9a) wml_tabs_pane_g2_ParamLimits

0x97c3,	// (0x00082f9a) wml_tabs_pane_g2

0x97d7,	// (0x00082fae) wml_tabs_pane_g3_ParamLimits

0x97d7,	// (0x00082fae) wml_tabs_pane_g3

0x97eb,	// (0x00082fc2) wml_tabs_2_active_pane_ParamLimits

0x97eb,	// (0x00082fc2) wml_tabs_2_active_pane

0x97fd,	// (0x00082fd4) wml_tabs_2_passive_pane_ParamLimits

0x97fd,	// (0x00082fd4) wml_tabs_2_passive_pane

0x980f,	// (0x00082fe6) wml_tabs_3_active_pane_cp_ParamLimits

0x980f,	// (0x00082fe6) wml_tabs_3_active_pane_cp

0x9822,	// (0x00082ff9) wml_tabs_3_passive_pane_ParamLimits

0x9822,	// (0x00082ff9) wml_tabs_3_passive_pane

0x9833,	// (0x0008300a) wml_tabs_3_passive_pane_cp_ParamLimits

0x9833,	// (0x0008300a) wml_tabs_3_passive_pane_cp

0x9848,	// (0x0008301f) tabs_4_active_pane

0x9850,	// (0x00083027) tabs_4_passive_pane

0x9858,	// (0x0008302f) tabs_4_passive_pane_cp

0x9860,	// (0x00083037) tabs_4_passive_pane_cp2

0x8d5f,	// (0x00082536) aid_height_text

0x846a,	// (0x00081c41) mup_volume_cont_pane_ParamLimits

0x846a,	// (0x00081c41) mup_volume_cont_pane

0x6255,	// (0x0007fa2c) aid_size_cell_pinb

0x625f,	// (0x0007fa36) aid_size_list_pinb

0x96db,	// (0x00082eb2) mup2_volume_cont_pane_ParamLimits

0x96db,	// (0x00082eb2) mup2_volume_cont_pane

0x986a,	// (0x00083041) mup2_volume_cont_pane_g1_ParamLimits

0x986a,	// (0x00083041) mup2_volume_cont_pane_g1

0x5eec,	// (0x0007f6c3) aid_size_cell_touch_ParamLimits

0x5eec,	// (0x0007f6c3) aid_size_cell_touch

0x613c,	// (0x0007f913) touch_pane_ParamLimits

0x613c,	// (0x0007f913) touch_pane

0xdfaf,	// (0x00087786) main_rss2_pane

0x98ac,	// (0x00083083) listscroll_rss2_pane

0x98b5,	// (0x0008308c) rss2_navigation_pane

0x98bd,	// (0x00083094) list_rss2_pane

0x0ff0,	// (0x0007a7c7) scroll_pane_cp22

0x98c5,	// (0x0008309c) rss2_navigation_pane_g1

0x98ce,	// (0x000830a5) rss2_navigation_pane_g2

0x98d6,	// (0x000830ad) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00088eca) rss2_navigation_pane_g

0x98de,	// (0x000830b5) rss2_navigation_pane_t1

0x98ec,	// (0x000830c3) rss2_list_single_pane_ParamLimits

0x98ec,	// (0x000830c3) rss2_list_single_pane

0x9912,	// (0x000830e9) rss2_list_single_pane_t2

0x9920,	// (0x000830f7) rss2_list_single_pane_t3_ParamLimits

0x9920,	// (0x000830f7) rss2_list_single_pane_t3

0x993d,	// (0x00083114) rss2_list_single_pane_t4

0x7c03,	// (0x000813da) smil_status_pane_g1

0x496a,	// (0x0007e141) main_image2_pane_ParamLimits

0x496a,	// (0x0007e141) main_image2_pane

0x93e5,	// (0x00082bbc) main_camera2_pane_g9_ParamLimits

0x93e5,	// (0x00082bbc) main_camera2_pane_g9

0x9439,	// (0x00082c10) main_camera2_pane_t5_ParamLimits

0x9439,	// (0x00082c10) main_camera2_pane_t5

0x944b,	// (0x00082c22) main_camera2_pane_t6_ParamLimits

0x944b,	// (0x00082c22) main_camera2_pane_t6

0x994b,	// (0x00083122) main_image2_pane_g1_ParamLimits

0x994b,	// (0x00083122) main_image2_pane_g1

0x8af9,	// (0x000822d0) smil2_video_pane_ParamLimits

0x8af9,	// (0x000822d0) smil2_video_pane

0x0859,	// (0x0007a030) aid_zoom_text_primary_cp

0xe006,	// (0x000877dd) popup_preview_fixed_window

0xe9fb,	// (0x000881d2) im_reading_pane_g1

0x932f,	// (0x00082b06) cams2_bc_adjust_pane_cp_ParamLimits

0x932f,	// (0x00082b06) cams2_bc_adjust_pane_cp

0x9476,	// (0x00082c4d) cams2_bc_adjust_pane_ParamLimits

0x9476,	// (0x00082c4d) cams2_bc_adjust_pane

0xf127,	// (0x000888fe) cams2_bc_adjust_pane_g1

0x9957,	// (0x0008312e) cams2_slider_pane

0x9960,	// (0x00083137) cams2_slider_pane_g1

0x9969,	// (0x00083140) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00088ed1) cams2_slider_pane_g

0x6352,	// (0x0007fb29) calc_display_pane_ParamLimits

0x6370,	// (0x0007fb47) calc_paper_pane_ParamLimits

0x638c,	// (0x0007fb63) grid_calc_pane_ParamLimits

0x7eb8,	// (0x0008168f) popup_clock_digital_window_t1_ParamLimits

0x1411,	// (0x0007abe8) main_image_pane_t1

0x6338,	// (0x0007fb0f) aid_size_cell_calc_ParamLimits

0x6338,	// (0x0007fb0f) aid_size_cell_calc

0x8fcc,	// (0x000827a3) popup_blid_sat_info2_window_ParamLimits

0x8fcc,	// (0x000827a3) popup_blid_sat_info2_window

0x998b,	// (0x00083162) aid_size_cell_blid

0x9993,	// (0x0008316a) bg_popup_window_pane_cp07

0x99b6,	// (0x0008318d) grid_popup_blid_pane

0x99c0,	// (0x00083197) heading_pane_cp05_ParamLimits

0x99c0,	// (0x00083197) heading_pane_cp05

0x9a8a,	// (0x00083261) cell_popup_blid_pane_ParamLimits

0x9a8a,	// (0x00083261) cell_popup_blid_pane

0x9ab4,	// (0x0008328b) cell_popup_blid_pane_g1

0x9abc,	// (0x00083293) cell_popup_blid_pane_t1

0x96a1,	// (0x00082e78) mup2_indicator_pane_ParamLimits

0x96a1,	// (0x00082e78) mup2_indicator_pane

0x112a,	// (0x0007a901) mup2_visualizer_osc_pane

0x4b51,	// (0x0007e328) mup2_visualizer_spec_pane_ParamLimits

0x4b51,	// (0x0007e328) mup2_visualizer_spec_pane

0x9aca,	// (0x000832a1) mup2_spec_half_pane

0x9ad3,	// (0x000832aa) mup2_spec_half_pane_cp

0x9add,	// (0x000832b4) mup2_spec_bar_pane_ParamLimits

0x9add,	// (0x000832b4) mup2_spec_bar_pane

0x4a8e,	// (0x0007e265) mup2_spec_bar_pane_g1

0x4a98,	// (0x0007e26f) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00088e44) mup2_spec_bar_pane_g

0x9afc,	// (0x000832d3) mup2_osc_middle_pane

0x4aaa,	// (0x0007e281) mup2_visualizer_osc_pane_g1

0xe030,	// (0x00087807) popup_number_entry_window_t1_ParamLimits

0xe043,	// (0x0008781a) popup_number_entry_window_t2_ParamLimits

0xe055,	// (0x0008782c) popup_number_entry_window_t3_ParamLimits

0x6193,	// (0x0007f96a) popup_number_entry_window_t5_ParamLimits

0x6193,	// (0x0007f96a) popup_number_entry_window_t5

0xf12f,	// (0x00088906) popup_number_entry_window_t_ParamLimits

0xe067,	// (0x0008783e) text_title_cp2_ParamLimits

0x87e3,	// (0x00081fba) aid_hotspot_pointer_text2_pane

0x887d,	// (0x00082054) main_viewer_pane_g9_ParamLimits

0x887d,	// (0x00082054) main_viewer_pane_g9

0x0a7f,	// (0x0007a256) cale_month_pane_t1_ParamLimits

0x0b14,	// (0x0007a2eb) bg_cale_pane_ParamLimits

0x0b2c,	// (0x0007a303) list_cale_pane_ParamLimits

0xe889,	// (0x00088060) listscroll_cale_day_pane_t1

0x0b3d,	// (0x0007a314) scroll_pane_cp09_ParamLimits

0x84a9,	// (0x00081c80) main_mup_eq_pane_t1_ParamLimits

0x84a9,	// (0x00081c80) main_mup_eq_pane_t1

0x84c5,	// (0x00081c9c) main_mup_eq_pane_t2_ParamLimits

0x84c5,	// (0x00081c9c) main_mup_eq_pane_t2

0x84e1,	// (0x00081cb8) main_mup_eq_pane_t3_ParamLimits

0x84e1,	// (0x00081cb8) main_mup_eq_pane_t3

0x84fb,	// (0x00081cd2) main_mup_eq_pane_t4_ParamLimits

0x84fb,	// (0x00081cd2) main_mup_eq_pane_t4

0x8515,	// (0x00081cec) main_mup_eq_pane_t5_ParamLimits

0x8515,	// (0x00081cec) main_mup_eq_pane_t5

0x852f,	// (0x00081d06) main_mup_eq_pane_t6_ParamLimits

0x852f,	// (0x00081d06) main_mup_eq_pane_t6

0x8545,	// (0x00081d1c) main_mup_eq_pane_t7_ParamLimits

0x8545,	// (0x00081d1c) main_mup_eq_pane_t7

0x855b,	// (0x00081d32) main_mup_eq_pane_t8_ParamLimits

0x855b,	// (0x00081d32) main_mup_eq_pane_t8

0x8571,	// (0x00081d48) main_mup_eq_pane_t9_ParamLimits

0x8571,	// (0x00081d48) main_mup_eq_pane_t9

0x858d,	// (0x00081d64) main_mup_eq_pane_t10_ParamLimits

0x858d,	// (0x00081d64) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00088c93) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00088c93) main_mup_eq_pane_t

0x8652,	// (0x00081e29) mup_equalizer_pane_cp5_ParamLimits

0x866a,	// (0x00081e41) mup_equalizer_pane_cp6_ParamLimits

0x8682,	// (0x00081e59) mup_equalizer_pane_cp7_ParamLimits

0xdfaf,	// (0x00087786) main_gallery_pane

0x4ab3,	// (0x0007e28a) smil2_volume_pane

0x4ace,	// (0x0007e2a5) smil_status_volume_pane_g1_ParamLimits

0x4abb,	// (0x0007e292) smil_status_volume_pane_g2_ParamLimits

0x91b3,	// (0x0008298a) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00088e49) smil_status_volume_pane_g_ParamLimits

0x9993,	// (0x0008316a) bg_popup_window_pane_cp07_ParamLimits

0x99a1,	// (0x00083178) blid_firmament_pane

0x9b05,	// (0x000832dc) aid_size_cell_gallery_ParamLimits

0x9b05,	// (0x000832dc) aid_size_cell_gallery

0x9b13,	// (0x000832ea) grid_gallery_pane_ParamLimits

0x9b13,	// (0x000832ea) grid_gallery_pane

0x9b23,	// (0x000832fa) cell_gallery_pane_ParamLimits

0x9b23,	// (0x000832fa) cell_gallery_pane

0x9b71,	// (0x00083348) bg_cell_gallery_focus_pane_ParamLimits

0x9b71,	// (0x00083348) bg_cell_gallery_focus_pane

0x9b83,	// (0x0008335a) cell_gallery_pane_g1_ParamLimits

0x9b83,	// (0x0008335a) cell_gallery_pane_g1

0x9b8f,	// (0x00083366) cell_gallery_pane_g2_ParamLimits

0x9b8f,	// (0x00083366) cell_gallery_pane_g2

0x9b9c,	// (0x00083373) cell_gallery_pane_g3_ParamLimits

0x9b9c,	// (0x00083373) cell_gallery_pane_g3

0x9ba9,	// (0x00083380) cell_gallery_pane_g4_ParamLimits

0x9ba9,	// (0x00083380) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00088ef7) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00088ef7) cell_gallery_pane_g

0x9bb5,	// (0x0008338c) bg_cell_gallery_focus_pane_g1

0x9bbd,	// (0x00083394) bg_cell_gallery_focus_pane_g2

0x9bc5,	// (0x0008339c) bg_cell_gallery_focus_pane_g3

0x9bcd,	// (0x000833a4) bg_cell_gallery_focus_pane_g4

0xebda,	// (0x000883b1) bg_cell_gallery_focus_pane_g5

0xebe2,	// (0x000883b9) bg_cell_gallery_focus_pane_g6

0xebea,	// (0x000883c1) bg_cell_gallery_focus_pane_g7

0xebf2,	// (0x000883c9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00088f00) bg_cell_gallery_focus_pane_g

0xebfa,	// (0x000883d1) aid_firma_cardinal

0xec0e,	// (0x000883e5) blid_firmament_pane_t1

0xec25,	// (0x000883fc) blid_firmament_pane_t2

0xec3c,	// (0x00088413) blid_firmament_pane_t3

0xec53,	// (0x0008842a) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00088f11) blid_firmament_pane_t

0xec6a,	// (0x00088441) blid_sat_info_pane

0xec7a,	// (0x00088451) blid_sat_info_pane_g1

0xec7a,	// (0x00088451) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00088f1a) blid_sat_info_pane_g

0xec84,	// (0x0008845b) blid_sat_info_pane_t1

0xec92,	// (0x00088469) smil2_volume_content_pane

0xec9b,	// (0x00088472) smil2_volume_pane_g1

0xeca3,	// (0x0008847a) smil2_volume_content_pane_g1

0xecac,	// (0x00088483) smil2_volume_content_pane_g2

0xecb5,	// (0x0008848c) smil2_volume_content_pane_g3

0xecbe,	// (0x00088495) smil2_volume_content_pane_g4

0xecc7,	// (0x0008849e) smil2_volume_content_pane_g5

0xecd0,	// (0x000884a7) smil2_volume_content_pane_g6

0xecd9,	// (0x000884b0) smil2_volume_content_pane_g7

0xece2,	// (0x000884b9) smil2_volume_content_pane_g8

0xeceb,	// (0x000884c2) smil2_volume_content_pane_g9

0xecf4,	// (0x000884cb) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00088f1f) smil2_volume_content_pane_g

0x68b6,	// (0x0008008d) cale_week_day_heading_pane_t1_ParamLimits

0x68e3,	// (0x000800ba) cale_week_day_heading_pane_t2_ParamLimits

0x6910,	// (0x000800e7) cale_week_day_heading_pane_t3_ParamLimits

0x693d,	// (0x00080114) cale_week_day_heading_pane_t4_ParamLimits

0x696a,	// (0x00080141) cale_week_day_heading_pane_t5_ParamLimits

0x6997,	// (0x0008016e) cale_week_day_heading_pane_t6_ParamLimits

0x69c4,	// (0x0008019b) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00088a0b) cale_week_day_heading_pane_t_ParamLimits

0xe89b,	// (0x00088072) bg_cale_side_pane_ParamLimits

0x69f1,	// (0x000801c8) cale_week_time_pane_t1_ParamLimits

0x6a1d,	// (0x000801f4) cale_week_time_pane_t2_ParamLimits

0x6a49,	// (0x00080220) cale_week_time_pane_t3_ParamLimits

0x6a75,	// (0x0008024c) cale_week_time_pane_t4_ParamLimits

0x6aa1,	// (0x00080278) cale_week_time_pane_t5_ParamLimits

0x6acd,	// (0x000802a4) cale_week_time_pane_t6_ParamLimits

0x6af9,	// (0x000802d0) cale_week_time_pane_t7_ParamLimits

0x6b25,	// (0x000802fc) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00088a1a) cale_week_time_pane_t_ParamLimits

0x6b51,	// (0x00080328) cell_cale_week_pane_g2_ParamLimits

0xe89b,	// (0x00088072) bg_cale_side_pane_cp01_ParamLimits

0x7a00,	// (0x000811d7) cale_month_week_pane_t1_ParamLimits

0x7a2b,	// (0x00081202) cale_month_week_pane_t2_ParamLimits

0x7a56,	// (0x0008122d) cale_month_week_pane_t3_ParamLimits

0x7a81,	// (0x00081258) cale_month_week_pane_t4_ParamLimits

0x7aac,	// (0x00081283) cale_month_week_pane_t5_ParamLimits

0x7ad7,	// (0x000812ae) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00088af3) cale_month_week_pane_t_ParamLimits

0x7bd0,	// (0x000813a7) cell_cale_month_pane_g1_ParamLimits

0xdfaf,	// (0x00087786) main_cale_event_viewer_pane

0xdfaf,	// (0x00087786) listscroll_cale_event_viewer_pane

0xecfd,	// (0x000884d4) list_cale_ev_pane

0xed05,	// (0x000884dc) scroll_pane_cp023

0x9bd5,	// (0x000833ac) field_cale_ev_pane_ParamLimits

0x9bd5,	// (0x000833ac) field_cale_ev_pane

0xed11,	// (0x000884e8) field_cale_ev_content_pane_ParamLimits

0xed11,	// (0x000884e8) field_cale_ev_content_pane

0xed1d,	// (0x000884f4) field_cale_ev_pane_g1_ParamLimits

0xed1d,	// (0x000884f4) field_cale_ev_pane_g1

0xed29,	// (0x00088500) field_cale_ev_pane_g2_ParamLimits

0xed29,	// (0x00088500) field_cale_ev_pane_g2

0xed41,	// (0x00088518) field_cale_ev_pane_g3_ParamLimits

0xed41,	// (0x00088518) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00088f34) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00088f34) field_cale_ev_pane_g

0xed59,	// (0x00088530) field_cale_ev_pane_t1_ParamLimits

0xed59,	// (0x00088530) field_cale_ev_pane_t1

0x9bf9,	// (0x000833d0) field_cale_ev_content_pane_t1_ParamLimits

0x9bf9,	// (0x000833d0) field_cale_ev_content_pane_t1

0x12b5,	// (0x0007aa8c) bg_button_pane_cp01

0xe749,	// (0x00087f20) listscroll_cale_week_pane_ParamLimits

0x66d6,	// (0x0007fead) popup_toolbar_window_cp01

0xe889,	// (0x00088060) listscroll_cale_week_pane_t1_ParamLimits

0xe749,	// (0x00087f20) listscroll_cale_day_pane_ParamLimits

0x66d6,	// (0x0007fead) popup_toolbar_window_cp02

0xe889,	// (0x00088060) listscroll_cale_day_pane_t1_ParamLimits

0xe749,	// (0x00087f20) main_cale_month_pane_ParamLimits

0x90b0,	// (0x00082887) popup_toolbar_window_cp03_ParamLimits

0x90b0,	// (0x00082887) popup_toolbar_window_cp03

0x8a09,	// (0x000821e0) main_image_pane_g2_ParamLimits

0x8a09,	// (0x000821e0) main_image_pane_g2

0x8a15,	// (0x000821ec) main_image_pane_g3_ParamLimits

0x8a15,	// (0x000821ec) main_image_pane_g3

0x0002,

0xf54e,	// (0x00088d25) main_image_pane_g_ParamLimits

0xf54e,	// (0x00088d25) main_image_pane_g

0x1411,	// (0x0007abe8) main_image_pane_t1_ParamLimits

0x8a21,	// (0x000821f8) main_image_pane_t2_ParamLimits

0x8a21,	// (0x000821f8) main_image_pane_t2

0x8a33,	// (0x0008220a) main_image_pane_t3_ParamLimits

0x8a33,	// (0x0008220a) main_image_pane_t3

0x8a45,	// (0x0008221c) main_image_pane_t4_ParamLimits

0x8a45,	// (0x0008221c) main_image_pane_t4

0x0003,

0xf555,	// (0x00088d2c) main_image_pane_t_ParamLimits

0xf555,	// (0x00088d2c) main_image_pane_t

0x8a57,	// (0x0008222e) popup_image_details_window_cp01

0x8a61,	// (0x00082238) popup_toobar_trans_pane_cp01_ParamLimits

0x8a61,	// (0x00082238) popup_toobar_trans_pane_cp01

0x9021,	// (0x000827f8) popup_image_details_window_ParamLimits

0x9021,	// (0x000827f8) popup_image_details_window

0x49ff,	// (0x0007e1d6) popup_image_focus_window

0x9321,	// (0x00082af8) camera2_autofocus_pane_ParamLimits

0x9321,	// (0x00082af8) camera2_autofocus_pane

0xdfaf,	// (0x00087786) bg_popup_sub_pane_cp06

0xed70,	// (0x00088547) popup_image_focus_window_g1

0xed78,	// (0x0008854f) popup_image_focus_window_g2

0xed80,	// (0x00088557) popup_image_focus_window_g3

0xed88,	// (0x0008855f) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00088f3b) popup_image_focus_window_g

0xed90,	// (0x00088567) popup_image_focus_window_t1

0xed9e,	// (0x00088575) popup_image_focus_window_t2

0xedae,	// (0x00088585) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00088f44) popup_image_focus_window_t

0xedbc,	// (0x00088593) camera2_autofocus_pane_g1

0x496a,	// (0x0007e141) bg_tb_trans_pane_cp01

0xedca,	// (0x000885a1) popup_image_details_window_g1

0xeddd,	// (0x000885b4) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00088f56) popup_image_details_window_g

0xee06,	// (0x000885dd) popup_image_details_window_t1

0xee18,	// (0x000885ef) popup_image_details_window_t2

0xee31,	// (0x00088608) popup_image_details_window_t3

0xee45,	// (0x0008861c) popup_image_details_window_t4

0xee60,	// (0x00088637) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00088f5d) popup_image_details_window_t

0xe735,	// (0x00087f0c) bg_calc_paper_pane_ParamLimits

0x6485,	// (0x0007fc5c) grid_highlight_pane_cp013

0x648f,	// (0x0007fc66) list_calc_pane_ParamLimits

0x64a1,	// (0x0007fc78) scroll_pane_cp024

0xe749,	// (0x00087f20) bg_calc_display_pane_ParamLimits

0x64a9,	// (0x0007fc80) calc_display_pane_t1_ParamLimits

0x64be,	// (0x0007fc95) calc_display_pane_t2_ParamLimits

0x64d3,	// (0x0007fcaa) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0008898d) calc_display_pane_t_ParamLimits

0x65a6,	// (0x0007fd7d) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x000889aa) cell_calc_pane_g

0x65af,	// (0x0007fd86) cell_calc_pane_t1

0xe7a8,	// (0x00087f7f) grid_highlight_pane_cp02_ParamLimits

0xe7be,	// (0x00087f95) toolbar_button_pane_cp01_ParamLimits

0xe7be,	// (0x00087f95) toolbar_button_pane_cp01

0x1456,	// (0x0007ac2d) temp_image_control_pane_ParamLimits

0x1456,	// (0x0007ac2d) temp_image_control_pane

0x496a,	// (0x0007e141) main_mp3_pane

0xee7a,	// (0x00088651) temp_image_control_pane_g1_ParamLimits

0xee7a,	// (0x00088651) temp_image_control_pane_g1

0xee88,	// (0x0008865f) temp_image_control_pane_g2_ParamLimits

0xee88,	// (0x0008865f) temp_image_control_pane_g2

0xee9a,	// (0x00088671) temp_image_control_pane_g3_ParamLimits

0xee9a,	// (0x00088671) temp_image_control_pane_g3

0x9c47,	// (0x0008341e) temp_image_control_pane_g4_ParamLimits

0x9c47,	// (0x0008341e) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00088f68) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00088f68) temp_image_control_pane_g

0xee7a,	// (0x00088651) main_mp3_pane_g1

0x9c58,	// (0x0008342f) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00088f71) main_mp3_pane_g

0xeedd,	// (0x000886b4) main_mp3_pane_t1

0xe900,	// (0x000880d7) main_camera_pane_g8_ParamLimits

0xe900,	// (0x000880d7) main_camera_pane_g8

0x6dfd,	// (0x000805d4) main_video_pane_g7_ParamLimits

0x6dfd,	// (0x000805d4) main_video_pane_g7

0x9464,	// (0x00082c3b) main_camera2_pane_t7_ParamLimits

0x9464,	// (0x00082c3b) main_camera2_pane_t7

0xea52,	// (0x00088229) scroll_pane_cp025_ParamLimits

0xea52,	// (0x00088229) scroll_pane_cp025

0xea66,	// (0x0008823d) scroll_pane_cp026_ParamLimits

0xea66,	// (0x0008823d) scroll_pane_cp026

0xea75,	// (0x0008824c) wml_content_pane_ParamLimits

0xdfaf,	// (0x00087786) main_touch_calib_pane

0x9cfc,	// (0x000834d3) main_touch_calib_pane_g1

0x9d08,	// (0x000834df) main_touch_calib_pane_g2

0x9d14,	// (0x000834eb) main_touch_calib_pane_g3

0x9d20,	// (0x000834f7) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00088f8f) main_touch_calib_pane_g

0x9d2c,	// (0x00083503) main_touch_calib_pane_t1

0x9d43,	// (0x0008351a) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00088f98) main_touch_calib_pane_t

0x106b,	// (0x0007a842) mup_progress_pane_cp02

0x108a,	// (0x0007a861) navi_pane_g1

0x10ec,	// (0x0007a8c3) navi_pane_mp_t3

0x496a,	// (0x0007e141) main_mp3_pane_ParamLimits

0x90f2,	// (0x000828c9) navi_pane_ParamLimits

0xee7a,	// (0x00088651) main_mp3_pane_g1_ParamLimits

0x9c58,	// (0x0008342f) main_mp3_pane_g2_ParamLimits

0x9c64,	// (0x0008343b) main_mp3_pane_g3_ParamLimits

0x9c64,	// (0x0008343b) main_mp3_pane_g3

0x9c70,	// (0x00083447) main_mp3_pane_g4_ParamLimits

0x9c70,	// (0x00083447) main_mp3_pane_g4

0xeeaa,	// (0x00088681) main_mp3_pane_g5_ParamLimits

0xeeaa,	// (0x00088681) main_mp3_pane_g5

0xeeb8,	// (0x0008868f) main_mp3_pane_g6_ParamLimits

0xeeb8,	// (0x0008868f) main_mp3_pane_g6

0xeec5,	// (0x0008869c) main_mp3_pane_g7_ParamLimits

0xeec5,	// (0x0008869c) main_mp3_pane_g7

0xeed1,	// (0x000886a8) main_mp3_pane_g8_ParamLimits

0xeed1,	// (0x000886a8) main_mp3_pane_g8

0xf79a,	// (0x00088f71) main_mp3_pane_g_ParamLimits

0x9c7c,	// (0x00083453) main_mp3_pane_t2

0x9c8c,	// (0x00083463) main_mp3_pane_t3

0xeeeb,	// (0x000886c2) main_mp3_pane_t4

0xeef9,	// (0x000886d0) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00088f82) main_mp3_pane_t

0xef07,	// (0x000886de) mup_progress_pane_cp01

0x0859,	// (0x0007a030) aid_zoom_text_secondary2

0xecfd,	// (0x000884d4) list_cale_ev2_pane

0xed05,	// (0x000884dc) scroll_pane_cp023_ParamLimits

0x9d9a,	// (0x00083571) field_cale_ev2_pane_ParamLimits

0x9d9a,	// (0x00083571) field_cale_ev2_pane

0x4be0,	// (0x0007e3b7) field_cale_ev2_pane_g1_ParamLimits

0x4be0,	// (0x0007e3b7) field_cale_ev2_pane_g1

0x4bec,	// (0x0007e3c3) field_cale_ev2_pane_g2_ParamLimits

0x4bec,	// (0x0007e3c3) field_cale_ev2_pane_g2

0x4c04,	// (0x0007e3db) field_cale_ev2_pane_g3_ParamLimits

0x4c04,	// (0x0007e3db) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00088fa3) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00088fa3) field_cale_ev2_pane_g

0x253e,	// (0x0007bd15) field_cale_ev2_pane_t1_ParamLimits

0x253e,	// (0x0007bd15) field_cale_ev2_pane_t1

0x2555,	// (0x0007bd2c) field_cale_ev2_pane_t2_ParamLimits

0x2555,	// (0x0007bd2c) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00088fac) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00088fac) field_cale_ev2_pane_t

0x88e5,	// (0x000820bc) main_postcard_pane_g5_ParamLimits

0x88e5,	// (0x000820bc) main_postcard_pane_g5

0x88f3,	// (0x000820ca) main_postcard_pane_g6_ParamLimits

0x88f3,	// (0x000820ca) main_postcard_pane_g6

0x6c3b,	// (0x00080412) camera2_autofocus_pane_cp_ParamLimits

0x6c3b,	// (0x00080412) camera2_autofocus_pane_cp

0x496a,	// (0x0007e141) main_mup3_pane

0x9dd8,	// (0x000835af) main_mup3_pane_g1_ParamLimits

0x9dd8,	// (0x000835af) main_mup3_pane_g1

0x9df9,	// (0x000835d0) main_mup3_pane_g2_ParamLimits

0x9df9,	// (0x000835d0) main_mup3_pane_g2

0x9e75,	// (0x0008364c) main_mup3_pane_g3_ParamLimits

0x9e75,	// (0x0008364c) main_mup3_pane_g3

0x9eb6,	// (0x0008368d) main_mup3_pane_g4_ParamLimits

0x9eb6,	// (0x0008368d) main_mup3_pane_g4

0x9ef7,	// (0x000836ce) main_mup3_pane_g5_ParamLimits

0x9ef7,	// (0x000836ce) main_mup3_pane_g5

0x9f38,	// (0x0008370f) main_mup3_pane_g6_ParamLimits

0x9f38,	// (0x0008370f) main_mup3_pane_g6

0xef0f,	// (0x000886e6) main_mup3_pane_g7_ParamLimits

0xef0f,	// (0x000886e6) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00088fbc) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00088fbc) main_mup3_pane_g

0x9faa,	// (0x00083781) main_mup3_pane_t1_ParamLimits

0x9faa,	// (0x00083781) main_mup3_pane_t1

0xa01d,	// (0x000837f4) main_mup3_pane_t2_ParamLimits

0xa01d,	// (0x000837f4) main_mup3_pane_t2

0xa0ea,	// (0x000838c1) main_mup3_pane_t4_ParamLimits

0xa0ea,	// (0x000838c1) main_mup3_pane_t4

0xa13e,	// (0x00083915) main_mup3_pane_t5_ParamLimits

0xa13e,	// (0x00083915) main_mup3_pane_t5

0xa1ea,	// (0x000839c1) main_mup3_pane_t6_ParamLimits

0xa1ea,	// (0x000839c1) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00088fcd) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00088fcd) main_mup3_pane_t

0xa292,	// (0x00083a69) mup3_progress_pane_ParamLimits

0xa292,	// (0x00083a69) mup3_progress_pane

0xa2fd,	// (0x00083ad4) popup_mup3_control_window_ParamLimits

0xa2fd,	// (0x00083ad4) popup_mup3_control_window

0xef1d,	// (0x000886f4) popup_mup3_text_window

0xa31a,	// (0x00083af1) mup3_progress_pane_t1

0xa331,	// (0x00083b08) mup3_progress_pane_t2

0xef25,	// (0x000886fc) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00088fda) mup3_progress_pane_t

0xef3c,	// (0x00088713) mup_progress_pane_cp03

0xdfaf,	// (0x00087786) bg_tb_trans_pane_cp04

0xa348,	// (0x00083b1f) mup3_volume_pane

0xa350,	// (0x00083b27) popup_mup3_control_window_g1

0x31a1,	// (0x0007c978) mup3_volume_pane_g1

0x31aa,	// (0x0007c981) mup3_volume_pane_g2

0x31b3,	// (0x0007c98a) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00088fe1) mup3_volume_pane_g

0xdfaf,	// (0x00087786) bg_tb_trans_pane_cp03

0xef4c,	// (0x00088723) popup_mup3_text_window_g1

0xef54,	// (0x0008872b) popup_mup3_text_window_t1

0xe791,	// (0x00087f68) list_calc_item_pane_g1_ParamLimits

0x9893,	// (0x0008306a) mup_volume_pane_cp_g1

0x9d5a,	// (0x00083531) main_touch_calib_pane_t3

0x9d6e,	// (0x00083545) main_touch_calib_pane_t4

0x9d84,	// (0x0008355b) main_touch_calib_pane_t5

0xdfb9,	// (0x00087790) aid_cell_size_toolbar2

0xdfc1,	// (0x00087798) aid_popup3_width_pane

0x0849,	// (0x0007a020) aid_zoom_text_msg_primary

0x6c0e,	// (0x000803e5) vorec_t7

0xe755,	// (0x00087f2c) bg_calc_paper_pane_g1_ParamLimits

0xe761,	// (0x00087f38) bg_calc_paper_pane_g2_ParamLimits

0xe76d,	// (0x00087f44) bg_calc_paper_pane_g3_ParamLimits

0xe779,	// (0x00087f50) bg_calc_paper_pane_g4_ParamLimits

0xe785,	// (0x00087f5c) bg_calc_paper_pane_g5_ParamLimits

0x6514,	// (0x0007fceb) bg_calc_paper_pane_g6_ParamLimits

0x6525,	// (0x0007fcfc) bg_calc_paper_pane_g7_ParamLimits

0x6536,	// (0x0007fd0d) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00088994) bg_calc_paper_pane_g_ParamLimits

0x6547,	// (0x0007fd1e) calc_bg_paper_pane_g9_ParamLimits

0x6d2c,	// (0x00080503) image_qvga_pane_ParamLimits

0x6d2c,	// (0x00080503) image_qvga_pane

0xe67e,	// (0x00087e55) bg_popup_sub_pane_cp04_ParamLimits

0x138d,	// (0x0007ab64) popup_mup_playback_window_g1_ParamLimits

0x1399,	// (0x0007ab70) popup_mup_playback_window_t1_ParamLimits

0x13ae,	// (0x0007ab85) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00088d20) popup_mup_playback_window_t_ParamLimits

0x959f,	// (0x00082d76) main_mup2_pane_g3_ParamLimits

0x959f,	// (0x00082d76) main_mup2_pane_g3

0x6fc8,	// (0x0008079f) popup_toolbar_window_cp04

0x17a9,	// (0x0007af80) popup_call2_audio_second_window_g3_ParamLimits

0x17a9,	// (0x0007af80) popup_call2_audio_second_window_g3

0x1bb3,	// (0x0007b38a) popup_call2_audio_first_window_g4_ParamLimits

0x1bb3,	// (0x0007b38a) popup_call2_audio_first_window_g4

0x2232,	// (0x0007ba09) popup_call2_audio_in_window_g4_ParamLimits

0x2232,	// (0x0007ba09) popup_call2_audio_in_window_g4

0x89fc,	// (0x000821d3) aid_area_sk_bg_cut_ParamLimits

0x89fc,	// (0x000821d3) aid_area_sk_bg_cut

0x13c3,	// (0x0007ab9a) aid_area_sk_bg_cut_2_ParamLimits

0x13c3,	// (0x0007ab9a) aid_area_sk_bg_cut_2

0x9b61,	// (0x00083338) aid_placing_details_win

0x9b69,	// (0x00083340) aid_placing_details_win_2

0xedbc,	// (0x00088593) camera2_autofocus_pane_g1_ParamLimits

0x60f6,	// (0x0007f8cd) popup_fixed_preview_cale_window_ParamLimits

0x60f6,	// (0x0007f8cd) popup_fixed_preview_cale_window

0x1156,	// (0x0007a92d) navi_slider_pane_g3

0x114d,	// (0x0007a924) navi_slider_pane_g4

0x1144,	// (0x0007a91b) navi_slider_pane_g5

0x1156,	// (0x0007a92d) navi_slider_pane_g6

0x821f,	// (0x000819f6) navi_slider_pane_g7

0x1282,	// (0x0007aa59) mup_scale_pane_g3

0x128b,	// (0x0007aa62) mup_scale_pane_g4

0x1294,	// (0x0007aa6b) mup_scale_pane_g5

0x869a,	// (0x00081e71) mup_scale_pane_g6

0x86a3,	// (0x00081e7a) mup_scale_pane_g7

0x1156,	// (0x0007a92d) cams2_slider_pane_g3

0x9972,	// (0x00083149) cams2_slider_pane_g4

0x997a,	// (0x00083151) cams2_slider_pane_g5

0x1156,	// (0x0007a92d) cams2_slider_pane_g6

0x9982,	// (0x00083159) cams2_slider_pane_g7

0xec7a,	// (0x00088451) camera2_autofocus_pane_cp_g1

0xef62,	// (0x00088739) bg_popup_preview_window_pane_cp02_ParamLimits

0xef62,	// (0x00088739) bg_popup_preview_window_pane_cp02

0xef6e,	// (0x00088745) list_fp_cale_pane_ParamLimits

0xef6e,	// (0x00088745) list_fp_cale_pane

0xef7a,	// (0x00088751) popup_fixed_preview_cale_window_t1_ParamLimits

0xef7a,	// (0x00088751) popup_fixed_preview_cale_window_t1

0xa359,	// (0x00083b30) popup_fixed_preview_cale_window_t2_ParamLimits

0xa359,	// (0x00083b30) popup_fixed_preview_cale_window_t2

0xa36e,	// (0x00083b45) popup_fixed_preview_cale_window_t3_ParamLimits

0xa36e,	// (0x00083b45) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00088fe8) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00088fe8) popup_fixed_preview_cale_window_t

0xa383,	// (0x00083b5a) list_single_fp_cale_pane_ParamLimits

0xa383,	// (0x00083b5a) list_single_fp_cale_pane

0xef98,	// (0x0008876f) list_single_fp_cale_pane_g1_ParamLimits

0xef98,	// (0x0008876f) list_single_fp_cale_pane_g1

0xefa4,	// (0x0008877b) list_single_fp_cale_pane_g2_ParamLimits

0xefa4,	// (0x0008877b) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00088fef) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00088fef) list_single_fp_cale_pane_g

0xefbd,	// (0x00088794) list_single_fp_cale_pane_t1_ParamLimits

0xefbd,	// (0x00088794) list_single_fp_cale_pane_t1

0xefcf,	// (0x000887a6) list_single_fp_cale_pane_t2_ParamLimits

0xefcf,	// (0x000887a6) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00088ff6) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00088ff6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdfaf,	// (0x00087786) main_dialer_pane

0xa393,	// (0x00083b6a) aid_cell_size_keypad

0xa39d,	// (0x00083b74) dialer_ne_pane

0xa3a7,	// (0x00083b7e) grid_dialer_command_1_pane

0xa3af,	// (0x00083b86) grid_dialer_command_2_pane

0xa3b7,	// (0x00083b8e) grid_dialer_keypad_pane

0xa3cb,	// (0x00083ba2) bg_popup_call_pane_cp06_ParamLimits

0xa3cb,	// (0x00083ba2) bg_popup_call_pane_cp06

0xa3d7,	// (0x00083bae) dialer_ne_clear_pane_ParamLimits

0xa3d7,	// (0x00083bae) dialer_ne_clear_pane

0xf002,	// (0x000887d9) dialer_ne_pane_g1

0xf00a,	// (0x000887e1) dialer_ne_pane_t1_ParamLimits

0xf00a,	// (0x000887e1) dialer_ne_pane_t1

0xa3e3,	// (0x00083bba) dialer_ne_pane_t2_ParamLimits

0xa3e3,	// (0x00083bba) dialer_ne_pane_t2

0xa400,	// (0x00083bd7) dialer_ne_pane_t3_ParamLimits

0xa400,	// (0x00083bd7) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00088ffb) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00088ffb) dialer_ne_pane_t

0xa424,	// (0x00083bfb) dialer_ne_pane_t3_copy1_ParamLimits

0xa424,	// (0x00083bfb) dialer_ne_pane_t3_copy1

0xa448,	// (0x00083c1f) cell_dialer_keypad_pane_ParamLimits

0xa448,	// (0x00083c1f) cell_dialer_keypad_pane

0xa45f,	// (0x00083c36) cell_dialer_command_1_pane_ParamLimits

0xa45f,	// (0x00083c36) cell_dialer_command_1_pane

0xa475,	// (0x00083c4c) cell_dialer_command_2_pane_ParamLimits

0xa475,	// (0x00083c4c) cell_dialer_command_2_pane

0xf01c,	// (0x000887f3) bg_button_pane_cp02_ParamLimits

0xf01c,	// (0x000887f3) bg_button_pane_cp02

0xa484,	// (0x00083c5b) cell_dialer_keypad_pane_g1_ParamLimits

0xa484,	// (0x00083c5b) cell_dialer_keypad_pane_g1

0xf01c,	// (0x000887f3) bg_button_pane_cp03_ParamLimits

0xf01c,	// (0x000887f3) bg_button_pane_cp03

0xa498,	// (0x00083c6f) cell_dialer_command_1_pane_g1_ParamLimits

0xa498,	// (0x00083c6f) cell_dialer_command_1_pane_g1

0xf028,	// (0x000887ff) bg_button_pane_cp04

0xa4ac,	// (0x00083c83) cell_dialer_command_2_pane_g1

0x112a,	// (0x0007a901) bg_button_pane_cp06

0xf030,	// (0x00088807) dialer_ne_clear_pane_g1

0x8162,	// (0x00081939) navi_pane_g2

0x8190,	// (0x00081967) navi_pane_g3

0x0002,

0xf44c,	// (0x00088c23) navi_pane_g

0x81bb,	// (0x00081992) navi_pane_mv_g2

0x81e2,	// (0x000819b9) navi_pane_mv_g5

0x81ea,	// (0x000819c1) navi_pane_mv_t1

0xe749,	// (0x00087f20) main_clock2_pane

0xa4de,	// (0x00083cb5) main_clock2_list_pane_ParamLimits

0xa4de,	// (0x00083cb5) main_clock2_list_pane

0xa508,	// (0x00083cdf) main_clock2_pane_t1_ParamLimits

0xa508,	// (0x00083cdf) main_clock2_pane_t1

0xa536,	// (0x00083d0d) main_clock2_pane_t2_ParamLimits

0xa536,	// (0x00083d0d) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00089002) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00089002) main_clock2_pane_t

0xa59f,	// (0x00083d76) popup_clock_analogue_window_cp03_ParamLimits

0xa59f,	// (0x00083d76) popup_clock_analogue_window_cp03

0xa5bf,	// (0x00083d96) popup_clock_digital_window_cp02_ParamLimits

0xa5bf,	// (0x00083d96) popup_clock_digital_window_cp02

0xa630,	// (0x00083e07) main_clock2_list_single_pane_ParamLimits

0xa630,	// (0x00083e07) main_clock2_list_single_pane

0x112a,	// (0x0007a901) list_highlight_pane_cp05

0xf038,	// (0x0008880f) main_clock2_list_single_pane_t1

0x6fc8,	// (0x0008079f) popup_toolbar_window_cp04_ParamLimits

0x9c17,	// (0x000833ee) camera2_autofocus_pane_g2_ParamLimits

0x9c17,	// (0x000833ee) camera2_autofocus_pane_g2

0x9c23,	// (0x000833fa) camera2_autofocus_pane_g3_ParamLimits

0x9c23,	// (0x000833fa) camera2_autofocus_pane_g3

0x9c2f,	// (0x00083406) camera2_autofocus_pane_g4_ParamLimits

0x9c2f,	// (0x00083406) camera2_autofocus_pane_g4

0x9c3b,	// (0x00083412) camera2_autofocus_pane_g5_ParamLimits

0x9c3b,	// (0x00083412) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00088f4b) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00088f4b) camera2_autofocus_pane_g

0x9db8,	// (0x0008358f) camera2_autofocus_pane_cp_g2

0x9dc0,	// (0x00083597) camera2_autofocus_pane_cp_g3

0x9dc8,	// (0x0008359f) camera2_autofocus_pane_cp_g4

0x9dd0,	// (0x000835a7) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00088fb1) camera2_autofocus_pane_cp_g

0xa3c3,	// (0x00083b9a) popup_dialer_spcha_window

0xdfaf,	// (0x00087786) bg_popup_sub_pane_cp07

0xf046,	// (0x0008881d) list_spcha_pane

0xf04e,	// (0x00088825) list_single_spcha_pane_ParamLimits

0xf04e,	// (0x00088825) list_single_spcha_pane

0xdfaf,	// (0x00087786) list_highlight_pane_cp06

0xf05f,	// (0x00088836) list_single_spcha_pane_t1

0x1fdc,	// (0x0007b7b3) popup_call2_audio_out_window_g4_ParamLimits

0x1fdc,	// (0x0007b7b3) popup_call2_audio_out_window_g4

0xdfaf,	// (0x00087786) main_imed2_pane

0x4a09,	// (0x0007e1e0) popup_imed_adjust2_window

0x902f,	// (0x00082806) popup_imed_trans_window_ParamLimits

0x902f,	// (0x00082806) popup_imed_trans_window

0x99ec,	// (0x000831c3) popup_blid_sat_info2_window_t1

0x99fa,	// (0x000831d1) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00088ee0) popup_blid_sat_info2_window_t

0xa6da,	// (0x00083eb1) aid_size_cell_colour_35

0xa6f4,	// (0x00083ecb) aid_size_cell_colour_112

0xa70b,	// (0x00083ee2) aid_size_cell_effect

0x496a,	// (0x0007e141) bg_tb_trans_pane_cp02

0x4978,	// (0x0007e14f) heading_imed_pane

0xa725,	// (0x00083efc) listscroll_imed_pane

0xf06d,	// (0x00088844) heading_imed_pane_g1

0xf075,	// (0x0008884c) heading_imed_pane_t1

0xf083,	// (0x0008885a) grid_imed_colour_35_pane_ParamLimits

0xf083,	// (0x0008885a) grid_imed_colour_35_pane

0xa731,	// (0x00083f08) grid_imed_effect_pane

0xf09f,	// (0x00088876) list_imed_aspect_pane

0xa741,	// (0x00083f18) scroll_pane_cp027_ParamLimits

0xa741,	// (0x00083f18) scroll_pane_cp027

0xa74d,	// (0x00083f24) cell_imed_effect_pane_ParamLimits

0xa74d,	// (0x00083f24) cell_imed_effect_pane

0xf0a7,	// (0x0008887e) cell_imed_colour_pane_ParamLimits

0xf0a7,	// (0x0008887e) cell_imed_colour_pane

0xf0f1,	// (0x000888c8) cell_imed_colour_pane_g1_ParamLimits

0xf0f1,	// (0x000888c8) cell_imed_colour_pane_g1

0xf102,	// (0x000888d9) hgihlgiht_grid_pane_cp016_ParamLimits

0xf102,	// (0x000888d9) hgihlgiht_grid_pane_cp016

0xa769,	// (0x00083f40) cell_imed_effect_pane_g1

0xa771,	// (0x00083f48) grid_highlight_pane_cp017

0xf113,	// (0x000888ea) list_imed_single_pane_ParamLimits

0xf113,	// (0x000888ea) list_imed_single_pane

0xdfaf,	// (0x00087786) list_highlight_pane_cp07

0x256a,	// (0x0007bd41) list_imed_aspect_pane_comp1_t1

0x49dd,	// (0x0007e1b4) bg_tb_trans_pane_cp05

0x258c,	// (0x0007bd63) popup_imed_adjust2_window_g1

0x25b3,	// (0x0007bd8a) popup_imed_adjust2_window_t1

0x25cb,	// (0x0007bda2) slider_imed_adjust_pane

0x25df,	// (0x0007bdb6) slider_imed_adjust_pane_g1

0x25ef,	// (0x0007bdc6) slider_imed_adjust_pane_g2

0x25ff,	// (0x0007bdd6) slider_imed_adjust_pane_g3

0x2610,	// (0x0007bde7) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0008901f) slider_imed_adjust_pane_g

0xa77a,	// (0x00083f51) aid_size_cell_clipart2

0xa786,	// (0x00083f5d) grid_imed_clipart_pane

0x2621,	// (0x0007bdf8) scroll_pane_cp031

0xa790,	// (0x00083f67) cell_imed_clipart_pane_ParamLimits

0xa790,	// (0x00083f67) cell_imed_clipart_pane

0xa7ae,	// (0x00083f85) cell_imed_clipart_pane_g1

0xdfaf,	// (0x00087786) grid_highlight_pane_cp014

0xa4ea,	// (0x00083cc1) main_clock2_pane_g1_ParamLimits

0xa4ea,	// (0x00083cc1) main_clock2_pane_g1

0xa5db,	// (0x00083db2) aid_call2_pane_cp10

0xa5ed,	// (0x00083dc4) aid_call_pane_cp10

0x105f,	// (0x0007a836) popup_clock_analogue_window_cp10_g1

0x105f,	// (0x0007a836) popup_clock_analogue_window_cp10_g2

0xa5ff,	// (0x00083dd6) popup_clock_analogue_window_cp10_g3

0xa5ff,	// (0x00083dd6) popup_clock_analogue_window_cp10_g4

0x105f,	// (0x0007a836) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0008900d) popup_clock_analogue_window_cp10_g

0xa611,	// (0x00083de8) popup_clock_analogue_window_cp10_t1

0xa642,	// (0x00083e19) clock_digital_number_pane_cp10_ParamLimits

0xa642,	// (0x00083e19) clock_digital_number_pane_cp10

0xa65a,	// (0x00083e31) clock_digital_number_pane_cp11_ParamLimits

0xa65a,	// (0x00083e31) clock_digital_number_pane_cp11

0xa672,	// (0x00083e49) clock_digital_number_pane_cp12_ParamLimits

0xa672,	// (0x00083e49) clock_digital_number_pane_cp12

0xa68a,	// (0x00083e61) clock_digital_number_pane_cp13_ParamLimits

0xa68a,	// (0x00083e61) clock_digital_number_pane_cp13

0xa6a2,	// (0x00083e79) clock_digital_separator_pane_cp10_ParamLimits

0xa6a2,	// (0x00083e79) clock_digital_separator_pane_cp10

0xa6ba,	// (0x00083e91) popup_clock_digital_window_cp02_t1_ParamLimits

0xa6ba,	// (0x00083e91) popup_clock_digital_window_cp02_t1

0xe676,	// (0x00087e4d) clock_digital_number_pane_cp10_g1

0xe676,	// (0x00087e4d) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00089028) clock_digital_number_pane_cp10_g

0xe676,	// (0x00087e4d) clock_digital_separator_pane_cp10_g1

0xe676,	// (0x00087e4d) clock_digital_separator_pane_g2_cp10

0x10fa,	// (0x0007a8d1) navi_pane_vded_g4

0x1103,	// (0x0007a8da) navi_pane_vded_g5

0x110c,	// (0x0007a8e3) navi_pane_vded_t1

0xdfaf,	// (0x00087786) main_vded_pane

0xa7b7,	// (0x00083f8e) main_vded_pane_g1

0xa7c3,	// (0x00083f9a) main_vded_pane_g2

0xa7cd,	// (0x00083fa4) main_vded_pane_g3

0x0002,

0xf856,	// (0x0008902d) main_vded_pane_g

0xa7d7,	// (0x00083fae) main_vded_pane_t1

0xa7e5,	// (0x00083fbc) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00089034) main_vded_pane_t

0xa7f3,	// (0x00083fca) vded_slider_pane

0xa7fd,	// (0x00083fd4) vded_video_pane

0x2629,	// (0x0007be00) vded_video_pane_g1

0xa809,	// (0x00083fe0) vded_video_pane_g2

0xec7a,	// (0x00088451) vded_video_pane_g3

0x0002,

0xf862,	// (0x00089039) vded_video_pane_g

0x2633,	// (0x0007be0a) vded_slider_pane_g1

0x9893,	// (0x0008306a) vded_slider_pane_g2

0x263c,	// (0x0007be13) vded_slider_pane_g3

0x2645,	// (0x0007be1c) vded_slider_pane_g4

0x264e,	// (0x0007be25) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00089040) vded_slider_pane_g

0xa2f1,	// (0x00083ac8) mup3_rocker_pane_ParamLimits

0xa2f1,	// (0x00083ac8) mup3_rocker_pane

0xa812,	// (0x00083fe9) mup3_control_keys_pane_g1

0xa81a,	// (0x00083ff1) mup3_control_keys_pane_g2

0xa822,	// (0x00083ff9) mup3_control_keys_pane_g3

0xa82a,	// (0x00084001) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0008904b) mup3_control_keys_pane_g

0x6114,	// (0x0007f8eb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6114,	// (0x0007f8eb) popup_toolbar2_fixed_window_cp01

0xa30d,	// (0x00083ae4) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa30d,	// (0x00083ae4) popup_toolbar2_fixed_window_cp02

0x191b,	// (0x0007b0f2) popup_call2_audio_second_window_t4_ParamLimits

0x191b,	// (0x0007b0f2) popup_call2_audio_second_window_t4

0x1e49,	// (0x0007b620) popup_call2_audio_first_window_t6_ParamLimits

0x1e49,	// (0x0007b620) popup_call2_audio_first_window_t6

0x20df,	// (0x0007b8b6) popup_call2_audio_out_window_t6_ParamLimits

0x20df,	// (0x0007b8b6) popup_call2_audio_out_window_t6

0xdfaf,	// (0x00087786) main_vitu_pane

0xa83a,	// (0x00084011) aid_size_cell_itu_ParamLimits

0xa83a,	// (0x00084011) aid_size_cell_itu

0x2a88,	// (0x0007c25f) bg_popup_window_pane_cp08_ParamLimits

0x2a88,	// (0x0007c25f) bg_popup_window_pane_cp08

0xa848,	// (0x0008401f) field_vitu_entry_pane_ParamLimits

0xa848,	// (0x0008401f) field_vitu_entry_pane

0xa857,	// (0x0008402e) grid_vitu_function_pane_ParamLimits

0xa857,	// (0x0008402e) grid_vitu_function_pane

0xa867,	// (0x0008403e) grid_vitu_itu_pane_ParamLimits

0xa867,	// (0x0008403e) grid_vitu_itu_pane

0xa877,	// (0x0008404e) cell_vitu_itu_pane_ParamLimits

0xa877,	// (0x0008404e) cell_vitu_itu_pane

0xa88e,	// (0x00084065) cell_vitu_function_pane_ParamLimits

0xa88e,	// (0x00084065) cell_vitu_function_pane

0x496a,	// (0x0007e141) bg_popup_sub_pane_cp08_ParamLimits

0x496a,	// (0x0007e141) bg_popup_sub_pane_cp08

0xa8a2,	// (0x00084079) field_vitu_entry_pane_t1_ParamLimits

0xa8a2,	// (0x00084079) field_vitu_entry_pane_t1

0x266f,	// (0x0007be46) field_vitu_entry_pane_t2_ParamLimits

0x266f,	// (0x0007be46) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00089059) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00089059) field_vitu_entry_pane_t

0x268c,	// (0x0007be63) bg_button_pane_cp05_ParamLimits

0x268c,	// (0x0007be63) bg_button_pane_cp05

0xa8bc,	// (0x00084093) cell_vitu_itu_pane_g1

0xa8d4,	// (0x000840ab) cell_vitu_itu_pane_t1_ParamLimits

0xa8d4,	// (0x000840ab) cell_vitu_itu_pane_t1

0xa8e6,	// (0x000840bd) cell_vitu_itu_pane_t2_ParamLimits

0xa8e6,	// (0x000840bd) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0008905e) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0008905e) cell_vitu_itu_pane_t

0x269a,	// (0x0007be71) bg_button_pane_cp07

0xa91b,	// (0x000840f2) cell_vitu_function_pane_g1

0x63b0,	// (0x0007fb87) main_calc_pane_g1

0x5f14,	// (0x0007f6eb) aid_visual_content_pane

0xdfaf,	// (0x00087786) main_vradio_pane

0xa924,	// (0x000840fb) main_vradio_pane_g1_ParamLimits

0xa924,	// (0x000840fb) main_vradio_pane_g1

0x26a4,	// (0x0007be7b) main_vradio_pane_g2_ParamLimits

0x26a4,	// (0x0007be7b) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00089065) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00089065) main_vradio_pane_g

0xa932,	// (0x00084109) main_vradio_pane_t1_ParamLimits

0xa932,	// (0x00084109) main_vradio_pane_t1

0xa944,	// (0x0008411b) main_vradio_pane_t2_ParamLimits

0xa944,	// (0x0008411b) main_vradio_pane_t2

0x26b1,	// (0x0007be88) main_vradio_pane_t3_ParamLimits

0x26b1,	// (0x0007be88) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0008906a) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0008906a) main_vradio_pane_t

0xa956,	// (0x0008412d) vradio_rocker_control_pane_ParamLimits

0xa956,	// (0x0008412d) vradio_rocker_control_pane

0xa962,	// (0x00084139) vradio_station_info_pane_ParamLimits

0xa962,	// (0x00084139) vradio_station_info_pane

0x26c5,	// (0x0007be9c) vradio_frequency_info_pane_ParamLimits

0x26c5,	// (0x0007be9c) vradio_frequency_info_pane

0xec7a,	// (0x00088451) vradio_station_info_pane_g1

0x26d4,	// (0x0007beab) vradio_station_info_pane_t1_ParamLimits

0x26d4,	// (0x0007beab) vradio_station_info_pane_t1

0x26f6,	// (0x0007becd) vradio_station_info_pane_t2_ParamLimits

0x26f6,	// (0x0007becd) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00089071) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00089071) vradio_station_info_pane_t

0x2708,	// (0x0007bedf) vradio_tuning_pane

0x2710,	// (0x0007bee7) vradio_rocker_control_pane_g1

0x2718,	// (0x0007beef) vradio_rocker_control_pane_g2

0x2720,	// (0x0007bef7) vradio_rocker_control_pane_g3

0x2728,	// (0x0007beff) vradio_rocker_control_pane_g4

0x2730,	// (0x0007bf07) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00089076) vradio_rocker_control_pane_g

0xa96f,	// (0x00084146) vradio_frequency_info_pane_g1

0x2738,	// (0x0007bf0f) vradio_frequency_info_pane_t1_ParamLimits

0x2738,	// (0x0007bf0f) vradio_frequency_info_pane_t1

0xa979,	// (0x00084150) vradio_tuning_pane_g1

0xa984,	// (0x0008415b) vradio_tuning_pane_t1

0xdfcd,	// (0x000877a4) area_side_right_pane_ParamLimits

0xdfcd,	// (0x000877a4) area_side_right_pane

0x49a4,	// (0x0007e17b) status_small_pane_g1

0x49ac,	// (0x0007e183) status_small_pane_g2

0x49b5,	// (0x0007e18c) status_small_pane_g3

0x49be,	// (0x0007e195) status_small_pane_g4

0x0003,

0xf65f,	// (0x00088e36) status_small_pane_g

0x49c7,	// (0x0007e19e) status_small_pane_t1

0xdfaf,	// (0x00087786) main_video3_pane

0x274c,	// (0x0007bf23) cams_zoom_vslider_pane

0x2754,	// (0x0007bf2b) image3_wide_pane_ParamLimits

0x2754,	// (0x0007bf2b) image3_wide_pane

0x276e,	// (0x0007bf45) image3_wide_small_pane

0x277a,	// (0x0007bf51) main_video3_pane_g1_ParamLimits

0x277a,	// (0x0007bf51) main_video3_pane_g1

0x2796,	// (0x0007bf6d) main_video3_pane_g2_ParamLimits

0x2796,	// (0x0007bf6d) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00089081) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00089081) main_video3_pane_g

0x27b2,	// (0x0007bf89) main_video3_pane_t1_ParamLimits

0x27b2,	// (0x0007bf89) main_video3_pane_t1

0x27dd,	// (0x0007bfb4) main_video3_pane_t2_ParamLimits

0x27dd,	// (0x0007bfb4) main_video3_pane_t2

0x280a,	// (0x0007bfe1) main_video3_pane_t3_ParamLimits

0x280a,	// (0x0007bfe1) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00089086) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00089086) main_video3_pane_t

0x2837,	// (0x0007c00e) cams_zoom_vslider_pane_g1

0x2840,	// (0x0007c017) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0008908d) cams_zoom_vslider_pane_g

0x2848,	// (0x0007c01f) small_slider_vertical_pane

0xec7a,	// (0x00088451) small_slider_vertical_pane_g1

0xec7a,	// (0x00088451) small_slider_vertical_pane_g2

0x2850,	// (0x0007c027) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00089092) small_slider_vertical_pane_g

0xdfaf,	// (0x00087786) main_hwr_training_pane

0x2859,	// (0x0007c030) hwr_training_instruct_pane_ParamLimits

0x2859,	// (0x0007c030) hwr_training_instruct_pane

0xa993,	// (0x0008416a) hwr_training_navi_pane_ParamLimits

0xa993,	// (0x0008416a) hwr_training_navi_pane

0xa9ad,	// (0x00084184) hwr_training_write_pane_ParamLimits

0xa9ad,	// (0x00084184) hwr_training_write_pane

0xdfaf,	// (0x00087786) bg_frame_shadow_pane

0x2890,	// (0x0007c067) hwr_training_write_pane_g1

0x2898,	// (0x0007c06f) hwr_training_write_pane_g2

0x28a0,	// (0x0007c077) hwr_training_write_pane_g3

0x28a8,	// (0x0007c07f) hwr_training_write_pane_g4

0x28b0,	// (0x0007c087) hwr_training_write_pane_g5

0x28b8,	// (0x0007c08f) hwr_training_write_pane_g6

0x28c0,	// (0x0007c097) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00089099) hwr_training_write_pane_g

0xa9e5,	// (0x000841bc) hwr_training_navi_pane_g1_ParamLimits

0xa9e5,	// (0x000841bc) hwr_training_navi_pane_g1

0xa9f7,	// (0x000841ce) hwr_training_navi_pane_g2_ParamLimits

0xa9f7,	// (0x000841ce) hwr_training_navi_pane_g2

0xaa09,	// (0x000841e0) hwr_training_navi_pane_g3_ParamLimits

0xaa09,	// (0x000841e0) hwr_training_navi_pane_g3

0xaa19,	// (0x000841f0) hwr_training_navi_pane_g4_ParamLimits

0xaa19,	// (0x000841f0) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x000890a8) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x000890a8) hwr_training_navi_pane_g

0xaa33,	// (0x0008420a) hwr_training_navi_pane_t1

0xaa41,	// (0x00084218) list_single_hwr_training_instruct_pane_ParamLimits

0xaa41,	// (0x00084218) list_single_hwr_training_instruct_pane

0x28c8,	// (0x0007c09f) list_single_hwr_training_instruct_pane_t1

0x9bb5,	// (0x0008338c) bg_frame_shadow_pane_g1

0x28d7,	// (0x0007c0ae) bg_frame_shadow_pane_g2

0x28df,	// (0x0007c0b6) bg_frame_shadow_pane_g3

0x28e7,	// (0x0007c0be) bg_frame_shadow_pane_g4

0x28ef,	// (0x0007c0c6) bg_frame_shadow_pane_g5

0x28f7,	// (0x0007c0ce) bg_frame_shadow_pane_g6

0x28ff,	// (0x0007c0d6) bg_frame_shadow_pane_g7

0xe814,	// (0x00087feb) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x000890b3) bg_frame_shadow_pane_g

0xdfaf,	// (0x00087786) main_video_tele_dialer_pane

0xaa60,	// (0x00084237) aid_size_cell_video_keypad_ParamLimits

0xaa60,	// (0x00084237) aid_size_cell_video_keypad

0xaa70,	// (0x00084247) grid_video_dialer_keypad_pane_ParamLimits

0xaa70,	// (0x00084247) grid_video_dialer_keypad_pane

0xaaa4,	// (0x0008427b) video_down_pane_cp_ParamLimits

0xaaa4,	// (0x0008427b) video_down_pane_cp

0xaace,	// (0x000842a5) cell_video_dialer_keypad_pane_ParamLimits

0xaace,	// (0x000842a5) cell_video_dialer_keypad_pane

0x2907,	// (0x0007c0de) bg_button_pane_cp08_ParamLimits

0x2907,	// (0x0007c0de) bg_button_pane_cp08

0xaae5,	// (0x000842bc) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaae5,	// (0x000842bc) cell_video_dialer_keypad_pane_g1

0xa2e5,	// (0x00083abc) mup3_rocker2_pane_ParamLimits

0xa2e5,	// (0x00083abc) mup3_rocker2_pane

0xec7a,	// (0x00088451) mup3_rocker2_pane_g1

0x8fb1,	// (0x00082788) main_dialer2_pane

0xdfaf,	// (0x00087786) main_mp4_pane

0xab28,	// (0x000842ff) main_mp4_pane_g1_ParamLimits

0xab28,	// (0x000842ff) main_mp4_pane_g1

0xab36,	// (0x0008430d) main_mp4_pane_g2_ParamLimits

0xab36,	// (0x0008430d) main_mp4_pane_g2

0xab44,	// (0x0008431b) main_mp4_pane_g3_ParamLimits

0xab44,	// (0x0008431b) main_mp4_pane_g3

0xab97,	// (0x0008436e) main_mp4_pane_g4_ParamLimits

0xab97,	// (0x0008436e) main_mp4_pane_g4

0xabb1,	// (0x00084388) main_mp4_pane_g5_ParamLimits

0xabb1,	// (0x00084388) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x000890d3) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x000890d3) main_mp4_pane_g

0xabe5,	// (0x000843bc) main_mp4_pane_t1_ParamLimits

0xabe5,	// (0x000843bc) main_mp4_pane_t1

0xac41,	// (0x00084418) main_mp4_pane_t2_ParamLimits

0xac41,	// (0x00084418) main_mp4_pane_t2

0x2913,	// (0x0007c0ea) main_mp4_pane_t3_ParamLimits

0x2913,	// (0x0007c0ea) main_mp4_pane_t3

0xac93,	// (0x0008446a) main_mp4_pane_t4_ParamLimits

0xac93,	// (0x0008446a) main_mp4_pane_t4

0x0003,

0xf909,	// (0x000890e0) main_mp4_pane_t_ParamLimits

0xf909,	// (0x000890e0) main_mp4_pane_t

0xacd3,	// (0x000844aa) mp4_progress_pane_ParamLimits

0xacd3,	// (0x000844aa) mp4_progress_pane

0xad1d,	// (0x000844f4) mp4_rocker_pane_ParamLimits

0xad1d,	// (0x000844f4) mp4_rocker_pane

0x293b,	// (0x0007c112) mp4_progress_pane_t1

0x2954,	// (0x0007c12b) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x000890e9) mp4_progress_pane_t

0x296d,	// (0x0007c144) mup_progress_pane_cp04

0x3218,	// (0x0007c9ef) mp4_rocker_pane_g1

0xad3f,	// (0x00084516) aid_cell_size_keypad2_ParamLimits

0xad3f,	// (0x00084516) aid_cell_size_keypad2

0xad4f,	// (0x00084526) dialer2_ne_pane_ParamLimits

0xad4f,	// (0x00084526) dialer2_ne_pane

0xad5b,	// (0x00084532) grid_dialer2_keypad_pane_ParamLimits

0xad5b,	// (0x00084532) grid_dialer2_keypad_pane

0x3273,	// (0x0007ca4a) bg_popup_call_pane_cp07_ParamLimits

0x3273,	// (0x0007ca4a) bg_popup_call_pane_cp07

0xad69,	// (0x00084540) dialer2_ne_pane_t1_ParamLimits

0xad69,	// (0x00084540) dialer2_ne_pane_t1

0xad8e,	// (0x00084565) cell_dialer2_keypad_pane_ParamLimits

0xad8e,	// (0x00084565) cell_dialer2_keypad_pane

0x298b,	// (0x0007c162) bg_button_pane_pane_cp04_ParamLimits

0x298b,	// (0x0007c162) bg_button_pane_pane_cp04

0xada5,	// (0x0008457c) cell_dialer2_keypad_pane_g1_ParamLimits

0xada5,	// (0x0008457c) cell_dialer2_keypad_pane_g1

0x6f03,	// (0x000806da) aid_placing_vt_set_content_ParamLimits

0x6f03,	// (0x000806da) aid_placing_vt_set_content

0x6f1d,	// (0x000806f4) aid_placing_vt_set_title_ParamLimits

0x6f1d,	// (0x000806f4) aid_placing_vt_set_title

0xdfaf,	// (0x00087786) main_image3_pane

0xae3f,	// (0x00084616) area_side_right_pane_cp01_ParamLimits

0xae3f,	// (0x00084616) area_side_right_pane_cp01

0xae6e,	// (0x00084645) main_image3_pane_g1_ParamLimits

0xae6e,	// (0x00084645) main_image3_pane_g1

0xae7c,	// (0x00084653) main_image3_pane_g2_ParamLimits

0xae7c,	// (0x00084653) main_image3_pane_g2

0xae95,	// (0x0008466c) main_image3_pane_g3_ParamLimits

0xae95,	// (0x0008466c) main_image3_pane_g3

0xaeae,	// (0x00084685) main_image3_pane_g4_ParamLimits

0xaeae,	// (0x00084685) main_image3_pane_g4

0x0003,

0xf921,	// (0x000890f8) main_image3_pane_g_ParamLimits

0xf921,	// (0x000890f8) main_image3_pane_g

0xaec7,	// (0x0008469e) main_image3_pane_t1_ParamLimits

0xaec7,	// (0x0008469e) main_image3_pane_t1

0xaeec,	// (0x000846c3) main_image3_pane_t2_ParamLimits

0xaeec,	// (0x000846c3) main_image3_pane_t2

0xaf0b,	// (0x000846e2) main_image3_pane_t3_ParamLimits

0xaf0b,	// (0x000846e2) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00089101) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00089101) main_image3_pane_t

0x2a88,	// (0x0007c25f) grid_sctrl_middle_pane_cp01_ParamLimits

0x2a88,	// (0x0007c25f) grid_sctrl_middle_pane_cp01

0xaf6c,	// (0x00084743) cell_sctrl_middle_pane_cp01_ParamLimits

0xaf6c,	// (0x00084743) cell_sctrl_middle_pane_cp01

0xaf7d,	// (0x00084754) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaf7d,	// (0x00084754) cell_sctrl_middle_pane_cp01_g1

0xdfaf,	// (0x00087786) main_call4_pane

0xaf8a,	// (0x00084761) aid_size_button_call4_ParamLimits

0xaf8a,	// (0x00084761) aid_size_button_call4

0xafbc,	// (0x00084793) call4_windows_pane_ParamLimits

0xafbc,	// (0x00084793) call4_windows_pane

0xafd8,	// (0x000847af) grid_call4_button_pane_ParamLimits

0xafd8,	// (0x000847af) grid_call4_button_pane

0x2997,	// (0x0007c16e) call4_windows_conf_pane

0x29b2,	// (0x0007c189) popup_call4_audio_first_window_ParamLimits

0x29b2,	// (0x0007c189) popup_call4_audio_first_window

0x2a00,	// (0x0007c1d7) popup_call4_audio_second_window_ParamLimits

0x2a00,	// (0x0007c1d7) popup_call4_audio_second_window

0x2a16,	// (0x0007c1ed) popup_call4_audio_wait_window_ParamLimits

0x2a16,	// (0x0007c1ed) popup_call4_audio_wait_window

0xaffc,	// (0x000847d3) cell_call4_button_pane_ParamLimits

0xaffc,	// (0x000847d3) cell_call4_button_pane

0xb01f,	// (0x000847f6) bg_button_pane_cp09_ParamLimits

0xb01f,	// (0x000847f6) bg_button_pane_cp09

0xb02b,	// (0x00084802) cell_call4_button_pane_g1_ParamLimits

0xb02b,	// (0x00084802) cell_call4_button_pane_g1

0xb038,	// (0x0008480f) cell_call4_button_pane_t1_ParamLimits

0xb038,	// (0x0008480f) cell_call4_button_pane_t1

0x2a5e,	// (0x0007c235) popup_call4_audio_conf_window_ParamLimits

0x2a5e,	// (0x0007c235) popup_call4_audio_conf_window

0xa31a,	// (0x00083af1) mup3_progress_pane_t1_ParamLimits

0xa331,	// (0x00083b08) mup3_progress_pane_t2_ParamLimits

0xef25,	// (0x000886fc) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00088fda) mup3_progress_pane_t_ParamLimits

0xef3c,	// (0x00088713) mup_progress_pane_cp03_ParamLimits

0xa832,	// (0x00084009) mup3_control_keys_pane_g4_copy1

0xad01,	// (0x000844d8) mp4_rocker2_pane_ParamLimits

0xad01,	// (0x000844d8) mp4_rocker2_pane

0x2a80,	// (0x0007c257) mp4_rocker2_pane_g1

0x2a78,	// (0x0007c24f) mp4_rocker2_pane_g2

0xb04a,	// (0x00084821) mp4_rocker2_pane_g3

0xb052,	// (0x00084829) mp4_rocker2_pane_g4

0xb05a,	// (0x00084831) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0008910a) mp4_rocker2_pane_g

0xdfaf,	// (0x00087786) main_camera4_pane

0xdfaf,	// (0x00087786) main_video4_pane

0xaa80,	// (0x00084257) main_video_tele_dialer_pane_t1_ParamLimits

0xaa80,	// (0x00084257) main_video_tele_dialer_pane_t1

0xaa92,	// (0x00084269) main_video_tele_dialer_pane_t2_ParamLimits

0xaa92,	// (0x00084269) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x000890c4) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x000890c4) main_video_tele_dialer_pane_t

0xb07a,	// (0x00084851) cam4_autofocus_pane_ParamLimits

0xb07a,	// (0x00084851) cam4_autofocus_pane

0xb086,	// (0x0008485d) cam4_image_uncrop_pane_ParamLimits

0xb086,	// (0x0008485d) cam4_image_uncrop_pane

0xb09f,	// (0x00084876) cam4_indicators_pane_ParamLimits

0xb09f,	// (0x00084876) cam4_indicators_pane

0xb0bb,	// (0x00084892) main_camera4_pane_g1_ParamLimits

0xb0bb,	// (0x00084892) main_camera4_pane_g1

0xb0c7,	// (0x0008489e) main_camera4_pane_g2_ParamLimits

0xb0c7,	// (0x0008489e) main_camera4_pane_g2

0xb0d3,	// (0x000848aa) main_camera4_pane_g3_ParamLimits

0xb0d3,	// (0x000848aa) main_camera4_pane_g3

0xb0df,	// (0x000848b6) main_camera4_pane_g4_ParamLimits

0xb0df,	// (0x000848b6) main_camera4_pane_g4

0xb0eb,	// (0x000848c2) main_camera4_pane_g5_ParamLimits

0xb0eb,	// (0x000848c2) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00089115) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00089115) main_camera4_pane_g

0xb105,	// (0x000848dc) main_camera4_pane_t1_ParamLimits

0xb105,	// (0x000848dc) main_camera4_pane_t1

0xb129,	// (0x00084900) bg_tb_trans_pane_cp06

0xb13f,	// (0x00084916) cam4_indicators_pane_g1

0xb14c,	// (0x00084923) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00089127) cam4_indicators_pane_g

0xb16c,	// (0x00084943) cam4_indicators_pane_t1

0xb196,	// (0x0008496d) main_video4_pane_g1_ParamLimits

0xb196,	// (0x0008496d) main_video4_pane_g1

0xb1a2,	// (0x00084979) main_video4_pane_g2_ParamLimits

0xb1a2,	// (0x00084979) main_video4_pane_g2

0xb1ae,	// (0x00084985) main_video4_pane_g3_ParamLimits

0xb1ae,	// (0x00084985) main_video4_pane_g3

0xb1ba,	// (0x00084991) main_video4_pane_g4_ParamLimits

0xb1ba,	// (0x00084991) main_video4_pane_g4

0x0004,

0xf957,	// (0x0008912e) main_video4_pane_g_ParamLimits

0xf957,	// (0x0008912e) main_video4_pane_g

0xb1dc,	// (0x000849b3) vid4_indicators_pane_ParamLimits

0xb1dc,	// (0x000849b3) vid4_indicators_pane

0xb1fa,	// (0x000849d1) video4_image_uncrop_cif_pane_ParamLimits

0xb1fa,	// (0x000849d1) video4_image_uncrop_cif_pane

0xb209,	// (0x000849e0) video4_image_uncrop_nhd_pane_ParamLimits

0xb209,	// (0x000849e0) video4_image_uncrop_nhd_pane

0xb086,	// (0x0008485d) video4_image_uncrop_vga_pane_ParamLimits

0xb086,	// (0x0008485d) video4_image_uncrop_vga_pane

0xb218,	// (0x000849ef) bg_tb_trans_pane_cp07

0xb13f,	// (0x00084916) vid4_indicators_pane_g1

0xb230,	// (0x00084a07) vid4_indicators_pane_g2

0xb23d,	// (0x00084a14) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00089139) vid4_indicators_pane_g

0xb26a,	// (0x00084a41) vid4_indicators_pane_t1

0xb284,	// (0x00084a5b) cam4_autofocus_pane_g1

0xb28c,	// (0x00084a63) cam4_autofocus_pane_g2

0xb294,	// (0x00084a6b) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00089144) cam4_autofocus_pane_g

0xb29c,	// (0x00084a73) cam4_autofocus_pane_g3_copy1

0xaab2,	// (0x00084289) video_down_pane_cp_t1

0xaac0,	// (0x00084297) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x000890c9) video_down_pane_cp_t

0x2a88,	// (0x0007c25f) popup_vitu2_window_ParamLimits

0x2a88,	// (0x0007c25f) popup_vitu2_window

0xb2a4,	// (0x00084a7b) aid_size_cell2_itu2_ParamLimits

0xb2a4,	// (0x00084a7b) aid_size_cell2_itu2

0xb2c6,	// (0x00084a9d) aid_size_cell_itu2_ParamLimits

0xb2c6,	// (0x00084a9d) aid_size_cell_itu2

0xb30a,	// (0x00084ae1) bg_popup_window_pane_cp09_ParamLimits

0xb30a,	// (0x00084ae1) bg_popup_window_pane_cp09

0xb318,	// (0x00084aef) field_vitu2_entry_pane_ParamLimits

0xb318,	// (0x00084aef) field_vitu2_entry_pane

0xb338,	// (0x00084b0f) grid_vitu2_function_pane_ParamLimits

0xb338,	// (0x00084b0f) grid_vitu2_function_pane

0xb37c,	// (0x00084b53) grid_vitu2_itu_pane_ParamLimits

0xb37c,	// (0x00084b53) grid_vitu2_itu_pane

0xb3f0,	// (0x00084bc7) cell_vitu2_itu_pane_ParamLimits

0xb3f0,	// (0x00084bc7) cell_vitu2_itu_pane

0xb407,	// (0x00084bde) cell_vitu2_function_pane_ParamLimits

0xb407,	// (0x00084bde) cell_vitu2_function_pane

0x2a96,	// (0x0007c26d) bg_popup_call_pane_cp08_ParamLimits

0x2a96,	// (0x0007c26d) bg_popup_call_pane_cp08

0x2aaf,	// (0x0007c286) field_vitu2_entry_pane_g1

0x2abb,	// (0x0007c292) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0008914b) field_vitu2_entry_pane_g

0xb44b,	// (0x00084c22) field_vitu2_entry_pane_t1_ParamLimits

0xb44b,	// (0x00084c22) field_vitu2_entry_pane_t1

0x2ad5,	// (0x0007c2ac) field_vitu2_entry_pane_t2_ParamLimits

0x2ad5,	// (0x0007c2ac) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00089152) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00089152) field_vitu2_entry_pane_t

0xb466,	// (0x00084c3d) bg_button_pane_cp010_ParamLimits

0xb466,	// (0x00084c3d) bg_button_pane_cp010

0xb474,	// (0x00084c4b) cell_vitu2_itu_pane_g1

0xb492,	// (0x00084c69) cell_vitu2_itu_pane_t1_ParamLimits

0xb492,	// (0x00084c69) cell_vitu2_itu_pane_t1

0x5e19,	// (0x0007f5f0) cell_vitu2_itu_pane_t2_ParamLimits

0x5e19,	// (0x0007f5f0) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0008915c) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0008915c) cell_vitu2_itu_pane_t

0xb218,	// (0x000849ef) bg_button_pane_cp011

0xb4e4,	// (0x00084cbb) cell_vitu2_function_pane_g1

0xdfaf,	// (0x00087786) main_myfav_hc_pane

0xaf4d,	// (0x00084724) popup_image3_note_pane_ParamLimits

0xaf4d,	// (0x00084724) popup_image3_note_pane

0xaf5b,	// (0x00084732) popup_image3_tool_bar_pane_ParamLimits

0xaf5b,	// (0x00084732) popup_image3_tool_bar_pane

0x5e87,	// (0x0007f65e) cell_vitu2_itu_pane_t3_ParamLimits

0x5e87,	// (0x0007f65e) cell_vitu2_itu_pane_t3

0xdfaf,	// (0x00087786) bg_popup_trans_pane

0x2afa,	// (0x0007c2d1) grid_image3_tool_bar_pane

0x2b04,	// (0x0007c2db) bg_popup_trans_pane_g1

0xeb5b,	// (0x00088332) bg_popup_trans_pane_g2

0x2b0c,	// (0x0007c2e3) bg_popup_trans_pane_g3

0x2b14,	// (0x0007c2eb) bg_popup_trans_pane_g4

0x2b1c,	// (0x0007c2f3) bg_popup_trans_pane_g5

0x2b24,	// (0x0007c2fb) bg_popup_trans_pane_g6

0x2b2c,	// (0x0007c303) bg_popup_trans_pane_g7

0x2b34,	// (0x0007c30b) bg_popup_trans_pane_g8

0xeb3b,	// (0x00088312) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00089163) bg_popup_trans_pane_g

0x2b3c,	// (0x0007c313) cell_image3_tool_bar_pane_ParamLimits

0x2b3c,	// (0x0007c313) cell_image3_tool_bar_pane

0xec7a,	// (0x00088451) cell_image3_tool_bar_pane_g1

0xdfaf,	// (0x00087786) bg_popup_trans_pane_cp1

0x2b52,	// (0x0007c329) popup_image3_note_pane_t1

0x2b60,	// (0x0007c337) popup_image3_note_pane_t2

0x2b6e,	// (0x0007c345) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00089176) popup_image3_note_pane_t

0x2b7e,	// (0x0007c355) popup_image3_note_pane_t3_copy1

0xb4f8,	// (0x00084ccf) bg_myfav_hc_instruction_pane_ParamLimits

0xb4f8,	// (0x00084ccf) bg_myfav_hc_instruction_pane

0xb510,	// (0x00084ce7) cell_myfav_contact_pane_ParamLimits

0xb510,	// (0x00084ce7) cell_myfav_contact_pane

0xb52a,	// (0x00084d01) cell_myfav_contact_pane_cp1_ParamLimits

0xb52a,	// (0x00084d01) cell_myfav_contact_pane_cp1

0xb542,	// (0x00084d19) cell_myfav_contact_pane_cp2_ParamLimits

0xb542,	// (0x00084d19) cell_myfav_contact_pane_cp2

0xb55a,	// (0x00084d31) cell_myfav_contact_pane_cp3_ParamLimits

0xb55a,	// (0x00084d31) cell_myfav_contact_pane_cp3

0xb571,	// (0x00084d48) cell_myfav_contact_pane_cp4_ParamLimits

0xb571,	// (0x00084d48) cell_myfav_contact_pane_cp4

0xb587,	// (0x00084d5e) cell_myfav_contact_pane_cp5_ParamLimits

0xb587,	// (0x00084d5e) cell_myfav_contact_pane_cp5

0xb59b,	// (0x00084d72) cell_myfav_contact_pane_cp6_ParamLimits

0xb59b,	// (0x00084d72) cell_myfav_contact_pane_cp6

0xb5af,	// (0x00084d86) cell_myfav_contact_pane_cp7_ParamLimits

0xb5af,	// (0x00084d86) cell_myfav_contact_pane_cp7

0x2b8c,	// (0x0007c363) listscroll_gen_pane_cp05

0xb5c7,	// (0x00084d9e) main_myfav_hc_pane_g1_ParamLimits

0xb5c7,	// (0x00084d9e) main_myfav_hc_pane_g1

0xb5e1,	// (0x00084db8) main_myfav_hc_pane_g2_ParamLimits

0xb5e1,	// (0x00084db8) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0008917d) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0008917d) main_myfav_hc_pane_g

0xb613,	// (0x00084dea) main_myfav_hc_pane_t1_ParamLimits

0xb613,	// (0x00084dea) main_myfav_hc_pane_t1

0x2b95,	// (0x0007c36c) main_myfav_hc_pane_t2_ParamLimits

0x2b95,	// (0x0007c36c) main_myfav_hc_pane_t2

0x2ba7,	// (0x0007c37e) main_myfav_hc_pane_t3_ParamLimits

0x2ba7,	// (0x0007c37e) main_myfav_hc_pane_t3

0xb62a,	// (0x00084e01) main_myfav_hc_pane_t4_ParamLimits

0xb62a,	// (0x00084e01) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00089184) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00089184) main_myfav_hc_pane_t

0xec7a,	// (0x00088451) bg_myfav_hc_instruction_pane_g1

0x2bb9,	// (0x0007c390) cell_myfav_contact_pane_g1_ParamLimits

0x2bb9,	// (0x0007c390) cell_myfav_contact_pane_g1

0x2bb9,	// (0x0007c390) cell_myfav_contact_pane_g2_ParamLimits

0x2bb9,	// (0x0007c390) cell_myfav_contact_pane_g2

0x2bc5,	// (0x0007c39c) cell_myfav_contact_pane_g3_ParamLimits

0x2bc5,	// (0x0007c39c) cell_myfav_contact_pane_g3

0xef0f,	// (0x000886e6) cell_myfav_contact_pane_g4_ParamLimits

0xef0f,	// (0x000886e6) cell_myfav_contact_pane_g4

0x2bd2,	// (0x0007c3a9) cell_myfav_contact_pane_g5_ParamLimits

0x2bd2,	// (0x0007c3a9) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0008918f) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0008918f) cell_myfav_contact_pane_g

0xb5fb,	// (0x00084dd2) main_myfav_hc_pane_g3_ParamLimits

0xb5fb,	// (0x00084dd2) main_myfav_hc_pane_g3

0x6057,	// (0x0007f82e) popup_adpt_find_window

0xb654,	// (0x00084e2b) afind_page_pane_ParamLimits

0xb654,	// (0x00084e2b) afind_page_pane

0xb661,	// (0x00084e38) aid_size_cell_afind_ParamLimits

0xb661,	// (0x00084e38) aid_size_cell_afind

0xb67b,	// (0x00084e52) bg_popup_sub_pane_cp09_ParamLimits

0xb67b,	// (0x00084e52) bg_popup_sub_pane_cp09

0xb688,	// (0x00084e5f) find_pane_cp01_ParamLimits

0xb688,	// (0x00084e5f) find_pane_cp01

0x2bde,	// (0x0007c3b5) grid_afind_control_pane_ParamLimits

0x2bde,	// (0x0007c3b5) grid_afind_control_pane

0xb695,	// (0x00084e6c) grid_afind_pane_ParamLimits

0xb695,	// (0x00084e6c) grid_afind_pane

0xb6b1,	// (0x00084e88) cell_afind_pane_ParamLimits

0xb6b1,	// (0x00084e88) cell_afind_pane

0xec7a,	// (0x00088451) afind_page_pane_g1

0xb6fd,	// (0x00084ed4) afind_page_pane_g2

0xb706,	// (0x00084edd) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0008919a) afind_page_pane_g

0xb70f,	// (0x00084ee6) afind_page_pane_t1

0x2bf2,	// (0x0007c3c9) cell_afind_grid_control_pane_ParamLimits

0x2bf2,	// (0x0007c3c9) cell_afind_grid_control_pane

0x298b,	// (0x0007c162) bg_button_pane_cp69_ParamLimits

0x298b,	// (0x0007c162) bg_button_pane_cp69

0xb72f,	// (0x00084f06) cell_afind_pane_g1_ParamLimits

0xb72f,	// (0x00084f06) cell_afind_pane_g1

0xb73c,	// (0x00084f13) cell_afind_pane_t1_ParamLimits

0xb73c,	// (0x00084f13) cell_afind_pane_t1

0xe94a,	// (0x00088121) bg_button_pane_cp72

0x2c01,	// (0x0007c3d8) cell_afind_grid_control_pane_g1

0x8b29,	// (0x00082300) aid_image_placing_area_ParamLimits

0x8b29,	// (0x00082300) aid_image_placing_area

0x2657,	// (0x0007be2e) field_vitu_entry_pane_g1_ParamLimits

0x2657,	// (0x0007be2e) field_vitu_entry_pane_g1

0x2663,	// (0x0007be3a) field_vitu_entry_pane_g2_ParamLimits

0x2663,	// (0x0007be3a) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00089054) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00089054) field_vitu_entry_pane_g

0xa8bc,	// (0x00084093) cell_vitu_itu_pane_g1_ParamLimits

0xa8fe,	// (0x000840d5) cell_vitu_itu_pane_t3_ParamLimits

0xa8fe,	// (0x000840d5) cell_vitu_itu_pane_t3

0x293b,	// (0x0007c112) mp4_progress_pane_t1_ParamLimits

0x2954,	// (0x0007c12b) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x000890e9) mp4_progress_pane_t_ParamLimits

0x296d,	// (0x0007c144) mup_progress_pane_cp04_ParamLimits

0xb63e,	// (0x00084e15) main_myfav_hc_pane_t5_ParamLimits

0xb63e,	// (0x00084e15) main_myfav_hc_pane_t5

0x0851,	// (0x0007a028) aid_zoom_text_primary

0x6057,	// (0x0007f82e) popup_adpt_find_window_ParamLimits

0x496a,	// (0x0007e141) main_cam_set_pane

0xb0ad,	// (0x00084884) cam4_zoom_pane_ParamLimits

0xb0ad,	// (0x00084884) cam4_zoom_pane

0xb74e,	// (0x00084f25) main_cam_set_pane_g1_ParamLimits

0xb74e,	// (0x00084f25) main_cam_set_pane_g1

0xb75c,	// (0x00084f33) main_cam_set_pane_g2_ParamLimits

0xb75c,	// (0x00084f33) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x000891a1) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x000891a1) main_cam_set_pane_g

0xb768,	// (0x00084f3f) main_cam_set_pane_t1_ParamLimits

0xb768,	// (0x00084f3f) main_cam_set_pane_t1

0xb784,	// (0x00084f5b) main_cset_listscroll_pane_ParamLimits

0xb784,	// (0x00084f5b) main_cset_listscroll_pane

0xb7b3,	// (0x00084f8a) main_cset_slider_pane_ParamLimits

0xb7b3,	// (0x00084f8a) main_cset_slider_pane

0x2c12,	// (0x0007c3e9) main_cset_list_pane_ParamLimits

0x2c12,	// (0x0007c3e9) main_cset_list_pane

0x2c22,	// (0x0007c3f9) scroll_pane_cp028

0xb7d4,	// (0x00084fab) aid_area_touch_slider

0xb7f0,	// (0x00084fc7) cset_slider_pane

0xb81a,	// (0x00084ff1) main_cset_slider_pane_g1

0xb82f,	// (0x00085006) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x000891a6) main_cset_slider_pane_g

0x2c5b,	// (0x0007c432) main_cset_slider_pane_t1

0xb8eb,	// (0x000850c2) main_cset_slider_pane_t2

0xb905,	// (0x000850dc) main_cset_slider_pane_t3

0xb91f,	// (0x000850f6) main_cset_slider_pane_t4

0xb939,	// (0x00085110) main_cset_slider_pane_t5

0xb955,	// (0x0008512c) main_cset_slider_pane_t6

0xb96a,	// (0x00085141) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x000891cb) main_cset_slider_pane_t

0xba6e,	// (0x00085245) cset_list_set_pane_ParamLimits

0xba6e,	// (0x00085245) cset_list_set_pane

0xba7f,	// (0x00085256) aid_position_infowindow_above

0xba87,	// (0x0008525e) aid_position_infowindow_below

0x4eaf,	// (0x0007e686) cset_list_set_pane_g1_ParamLimits

0x4eaf,	// (0x0007e686) cset_list_set_pane_g1

0x347d,	// (0x0007cc54) cset_list_set_pane_g3_ParamLimits

0x347d,	// (0x0007cc54) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x000891ea) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x000891ea) cset_list_set_pane_g

0x348c,	// (0x0007cc63) cset_list_set_pane_t1_ParamLimits

0x348c,	// (0x0007cc63) cset_list_set_pane_t1

0x496a,	// (0x0007e141) list_highlight_pane_cp021_ParamLimits

0x496a,	// (0x0007e141) list_highlight_pane_cp021

0x1282,	// (0x0007aa59) cset_slider_pane_g1

0x1294,	// (0x0007aa6b) cset_slider_pane_g2

0x128b,	// (0x0007aa62) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x000891ef) cset_slider_pane_g

0xba8f,	// (0x00085266) aid_area_touch_cam4_zoom

0xba97,	// (0x0008526e) cam4_zoom_cont_pane

0xba9f,	// (0x00085276) cam4_zoom_pane_g1

0xbaa7,	// (0x0008527e) cam4_zoom_pane_g2

0xbaaf,	// (0x00085286) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x000891f6) cam4_zoom_pane_g

0xbab7,	// (0x0008528e) cam4_zoom_cont_pane_g1

0xbac0,	// (0x00085297) cam4_zoom_cont_pane_g2

0xbac9,	// (0x000852a0) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x000891fd) cam4_zoom_cont_pane_g

0xafa4,	// (0x0008477b) call4_image_pane_ParamLimits

0xafa4,	// (0x0008477b) call4_image_pane

0x2997,	// (0x0007c16e) call4_windows_conf_pane_ParamLimits

0x29de,	// (0x0007c1b5) popup_call4_audio_in_window_ParamLimits

0x29de,	// (0x0007c1b5) popup_call4_audio_in_window

0xdfaf,	// (0x00087786) bg_popup_call2_act_pane_cp02

0x2a56,	// (0x0007c22d) call4_list_conf_pane

0xec7a,	// (0x00088451) call4_image_pane_g1

0xec7a,	// (0x00088451) call4_image_pane_g2

0x0001,

0xf743,	// (0x00088f1a) call4_image_pane_g

0x2d16,	// (0x0007c4ed) list_single_graphic_popup_conf4_pane_ParamLimits

0x2d16,	// (0x0007c4ed) list_single_graphic_popup_conf4_pane

0xdfaf,	// (0x00087786) list_highlight_pane_cp022

0x2d2b,	// (0x0007c502) list_single_graphic_popup_conf4_pane_g1

0x0f5c,	// (0x0007a733) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00089204) list_single_graphic_popup_conf4_pane_g

0x2d33,	// (0x0007c50a) list_single_graphic_popup_conf4_pane_t1

0x701c,	// (0x000807f3) popup_vtel_slider_window_ParamLimits

0x701c,	// (0x000807f3) popup_vtel_slider_window

0x2979,	// (0x0007c150) dialer2_ne_pane_t2_ParamLimits

0x2979,	// (0x0007c150) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x000890ee) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x000890ee) dialer2_ne_pane_t

0x496a,	// (0x0007e141) bg_popup_sub_pane_cp010_ParamLimits

0x496a,	// (0x0007e141) bg_popup_sub_pane_cp010

0xbad2,	// (0x000852a9) popup_vtel_slider_window_g1_ParamLimits

0xbad2,	// (0x000852a9) popup_vtel_slider_window_g1

0xbade,	// (0x000852b5) popup_vtel_slider_window_g2_ParamLimits

0xbade,	// (0x000852b5) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00089209) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00089209) popup_vtel_slider_window_g

0xbb26,	// (0x000852fd) vtel_slider_pane_ParamLimits

0xbb26,	// (0x000852fd) vtel_slider_pane

0xbb35,	// (0x0008530c) vtel_slider_pane_g1_ParamLimits

0xbb35,	// (0x0008530c) vtel_slider_pane_g1

0xbb42,	// (0x00085319) vtel_slider_pane_g2_ParamLimits

0xbb42,	// (0x00085319) vtel_slider_pane_g2

0xbb4f,	// (0x00085326) vtel_slider_pane_g3_ParamLimits

0xbb4f,	// (0x00085326) vtel_slider_pane_g3

0xbb35,	// (0x0008530c) vtel_slider_pane_g4_ParamLimits

0xbb35,	// (0x0008530c) vtel_slider_pane_g4

0xbb5c,	// (0x00085333) vtel_slider_pane_g5_ParamLimits

0xbb5c,	// (0x00085333) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00089212) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00089212) vtel_slider_pane_g

0xdfaf,	// (0x00087786) main_gallery2_pane

0xb2ec,	// (0x00084ac3) aid_size_row_itut2_dropdow_list_ParamLimits

0xb2ec,	// (0x00084ac3) aid_size_row_itut2_dropdow_list

0xb35a,	// (0x00084b31) grid_vitu2_function_top_pane_ParamLimits

0xb35a,	// (0x00084b31) grid_vitu2_function_top_pane

0xb3ac,	// (0x00084b83) popup_vitu2_dropdown_list_window_ParamLimits

0xb3ac,	// (0x00084b83) popup_vitu2_dropdown_list_window

0xb3cc,	// (0x00084ba3) popup_vitu2_match_list_window

0xbb69,	// (0x00085340) cell_vitu2_function_top_pane_ParamLimits

0xbb69,	// (0x00085340) cell_vitu2_function_top_pane

0xbb89,	// (0x00085360) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbb89,	// (0x00085360) cell_vitu2_function_top_pane_cp01

0xbba7,	// (0x0008537e) cell_vitu2_function_top_wide_pane_ParamLimits

0xbba7,	// (0x0008537e) cell_vitu2_function_top_wide_pane

0xb218,	// (0x000849ef) bg_button_pane_cp012

0xbbc5,	// (0x0008539c) cell_vitu2_function_top_pane_g1

0xbbd4,	// (0x000853ab) bg_button_pane_cp013_ParamLimits

0xbbd4,	// (0x000853ab) bg_button_pane_cp013

0xbbf0,	// (0x000853c7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbbf0,	// (0x000853c7) cell_vitu2_function_top_wide_pane_g1

0xbc08,	// (0x000853df) bg_popup_sub_pane_cp20

0xbc16,	// (0x000853ed) list_vitu2_match_list_pane

0x2b04,	// (0x0007c2db) bg_popup_sub_pane_cp20_g1

0x2b0c,	// (0x0007c2e3) bg_popup_sub_pane_cp20_g2

0xeb5b,	// (0x00088332) bg_popup_sub_pane_cp20_g3

0x2b14,	// (0x0007c2eb) bg_popup_sub_pane_cp20_g4

0xeb3b,	// (0x00088312) bg_popup_sub_pane_cp20_g5

0x2d4f,	// (0x0007c526) bg_popup_sub_pane_cp20_g6

0x2b24,	// (0x0007c2fb) bg_popup_sub_pane_cp20_g7

0x2b2c,	// (0x0007c303) bg_popup_sub_pane_cp20_g8

0x2b34,	// (0x0007c30b) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0008921d) bg_popup_sub_pane_cp20_g

0xbc2e,	// (0x00085405) list_vitu2_match_list_item_pane_ParamLimits

0xbc2e,	// (0x00085405) list_vitu2_match_list_item_pane

0xbc40,	// (0x00085417) list_vitu2_match_list_item_pane_t1

0x6485,	// (0x0007fc5c) bg_popup_sub_pane_cp21

0xbc7a,	// (0x00085451) grid_vitu2_dropdown_list_pane

0xbc82,	// (0x00085459) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbc82,	// (0x00085459) cell_vitu2_dropdown_list_char_pane

0xbca7,	// (0x0008547e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbca7,	// (0x0008547e) cell_vitu2_dropdown_list_ctrl_pane

0x2d81,	// (0x0007c558) cell_vitu2_dropdown_list_char_pane_g1

0x2d78,	// (0x0007c54f) cell_vitu2_dropdown_list_char_pane_g2

0x2d6f,	// (0x0007c546) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0008923a) cell_vitu2_dropdown_list_char_pane_g

0xbcd5,	// (0x000854ac) cell_vitu2_dropdown_list_char_pane_t1

0xbce3,	// (0x000854ba) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbce3,	// (0x000854ba) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbcf3,	// (0x000854ca) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbcf3,	// (0x000854ca) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbd04,	// (0x000854db) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbd04,	// (0x000854db) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbd14,	// (0x000854eb) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbd14,	// (0x000854eb) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb129,	// (0x00084900) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb129,	// (0x00084900) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00089241) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00089241) cell_vitu2_dropdown_list_ctrl_pane_g

0xbd2d,	// (0x00085504) aid_size_cell_gallery2_ParamLimits

0xbd2d,	// (0x00085504) aid_size_cell_gallery2

0xbd3b,	// (0x00085512) grid_gallery2_pane_ParamLimits

0xbd3b,	// (0x00085512) grid_gallery2_pane

0xbd4a,	// (0x00085521) scroll_pane_cp029_ParamLimits

0xbd4a,	// (0x00085521) scroll_pane_cp029

0xbd56,	// (0x0008552d) cell_gallery2_pane_ParamLimits

0xbd56,	// (0x0008552d) cell_gallery2_pane

0x2d8a,	// (0x0007c561) cell_gallery2_pane_g2

0xbd80,	// (0x00085557) cell_gallery2_pane_g3

0x2d94,	// (0x0007c56b) cell_gallery2_pane_g4

0x2d9c,	// (0x0007c573) cell_gallery2_pane_g5

0x112a,	// (0x0007a901) grid_highlight_pane_cp10

0xb3cc,	// (0x00084ba3) popup_vitu2_match_list_window_ParamLimits

0xb3e0,	// (0x00084bb7) popup_vitu2_query_window_ParamLimits

0xb3e0,	// (0x00084bb7) popup_vitu2_query_window

0x6485,	// (0x0007fc5c) bg_vitu2_candi_button_pane

0x2d81,	// (0x0007c558) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2d78,	// (0x0007c54f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2d6f,	// (0x0007c546) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xbd88,	// (0x0008555f) bg_button_pane_cp015

0xbd92,	// (0x00085569) bg_button_pane_cp016

0xbd9c,	// (0x00085573) bg_button_pane_cp017

0x496a,	// (0x0007e141) bg_popup_sub_pane_cp22

0x2da4,	// (0x0007c57b) popup_vitu2_query_window_g1

0xbdc4,	// (0x0008559b) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0008924c) popup_vitu2_query_window_g

0xbdd2,	// (0x000855a9) popup_vitu2_query_window_t1_ParamLimits

0xbdd2,	// (0x000855a9) popup_vitu2_query_window_t1

0xbdfa,	// (0x000855d1) popup_vitu2_query_window_t2_ParamLimits

0xbdfa,	// (0x000855d1) popup_vitu2_query_window_t2

0xbe0c,	// (0x000855e3) popup_vitu2_query_window_t3_ParamLimits

0xbe0c,	// (0x000855e3) popup_vitu2_query_window_t3

0xbe34,	// (0x0008560b) popup_vitu2_query_window_t4_ParamLimits

0xbe34,	// (0x0008560b) popup_vitu2_query_window_t4

0xbe4a,	// (0x00085621) popup_vitu2_query_window_t5_ParamLimits

0xbe4a,	// (0x00085621) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00089251) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00089251) popup_vitu2_query_window_t

0x2c0a,	// (0x0007c3e1) main_cset_text_pane

0xb7d4,	// (0x00084fab) aid_area_touch_slider_ParamLimits

0xb7f0,	// (0x00084fc7) cset_slider_pane_ParamLimits

0xb81a,	// (0x00084ff1) main_cset_slider_pane_g1_ParamLimits

0xb82f,	// (0x00085006) main_cset_slider_pane_g2_ParamLimits

0x2c2b,	// (0x0007c402) main_cset_slider_pane_g3_ParamLimits

0x2c2b,	// (0x0007c402) main_cset_slider_pane_g3

0xb844,	// (0x0008501b) main_cset_slider_pane_g4_ParamLimits

0xb844,	// (0x0008501b) main_cset_slider_pane_g4

0xb853,	// (0x0008502a) main_cset_slider_pane_g5_ParamLimits

0xb853,	// (0x0008502a) main_cset_slider_pane_g5

0xb85f,	// (0x00085036) main_cset_slider_pane_g6_ParamLimits

0xb85f,	// (0x00085036) main_cset_slider_pane_g6

0xf9cf,	// (0x000891a6) main_cset_slider_pane_g_ParamLimits

0x2c5b,	// (0x0007c432) main_cset_slider_pane_t1_ParamLimits

0xb8eb,	// (0x000850c2) main_cset_slider_pane_t2_ParamLimits

0xb905,	// (0x000850dc) main_cset_slider_pane_t3_ParamLimits

0xb91f,	// (0x000850f6) main_cset_slider_pane_t4_ParamLimits

0xb939,	// (0x00085110) main_cset_slider_pane_t5_ParamLimits

0xb955,	// (0x0008512c) main_cset_slider_pane_t6_ParamLimits

0xb96a,	// (0x00085141) main_cset_slider_pane_t7_ParamLimits

0xb994,	// (0x0008516b) main_cset_slider_pane_t8_ParamLimits

0xb994,	// (0x0008516b) main_cset_slider_pane_t8

0xb9bc,	// (0x00085193) main_cset_slider_pane_t9_ParamLimits

0xb9bc,	// (0x00085193) main_cset_slider_pane_t9

0xb9e4,	// (0x000851bb) main_cset_slider_pane_t10_ParamLimits

0xb9e4,	// (0x000851bb) main_cset_slider_pane_t10

0xba0c,	// (0x000851e3) main_cset_slider_pane_t11_ParamLimits

0xba0c,	// (0x000851e3) main_cset_slider_pane_t11

0xba34,	// (0x0008520b) main_cset_slider_pane_t12_ParamLimits

0xba34,	// (0x0008520b) main_cset_slider_pane_t12

0xba51,	// (0x00085228) main_cset_slider_pane_t13_ParamLimits

0xba51,	// (0x00085228) main_cset_slider_pane_t13

0xf9f4,	// (0x000891cb) main_cset_slider_pane_t_ParamLimits

0xdfaf,	// (0x00087786) bg_popup_sub_pane_cp011

0x2db0,	// (0x0007c587) main_cset_text_pane_g1

0x2db8,	// (0x0007c58f) main_cset_text_pane_t1

0x2dc6,	// (0x0007c59d) main_cset_text_pane_t2

0x2dd4,	// (0x0007c5ab) main_cset_text_pane_t3

0x2de2,	// (0x0007c5b9) main_cset_text_pane_t4

0x2df0,	// (0x0007c5c7) main_cset_text_pane_t5

0x2dfe,	// (0x0007c5d5) main_cset_text_pane_t6

0x2e0c,	// (0x0007c5e3) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0008925c) main_cset_text_pane_t

0xdfaf,	// (0x00087786) main_cam4_burst_pane

0xdfaf,	// (0x00087786) main_cam5_pane

0xb71d,	// (0x00084ef4) bg_button_pane_cp019

0xb726,	// (0x00084efd) bg_button_pane_cp020

0x2c37,	// (0x0007c40e) main_cset_slider_pane_g7_ParamLimits

0x2c37,	// (0x0007c40e) main_cset_slider_pane_g7

0x2c43,	// (0x0007c41a) main_cset_slider_pane_g8_ParamLimits

0x2c43,	// (0x0007c41a) main_cset_slider_pane_g8

0xb873,	// (0x0008504a) main_cset_slider_pane_g9_ParamLimits

0xb873,	// (0x0008504a) main_cset_slider_pane_g9

0xb87f,	// (0x00085056) main_cset_slider_pane_g10_ParamLimits

0xb87f,	// (0x00085056) main_cset_slider_pane_g10

0xb88b,	// (0x00085062) main_cset_slider_pane_g11_ParamLimits

0xb88b,	// (0x00085062) main_cset_slider_pane_g11

0xb897,	// (0x0008506e) main_cset_slider_pane_g12_ParamLimits

0xb897,	// (0x0008506e) main_cset_slider_pane_g12

0xb8a3,	// (0x0008507a) main_cset_slider_pane_g13_ParamLimits

0xb8a3,	// (0x0008507a) main_cset_slider_pane_g13

0xb8af,	// (0x00085086) main_cset_slider_pane_g14_ParamLimits

0xb8af,	// (0x00085086) main_cset_slider_pane_g14

0xb8bb,	// (0x00085092) main_cset_slider_pane_g15_ParamLimits

0xb8bb,	// (0x00085092) main_cset_slider_pane_g15

0x2c89,	// (0x0007c460) main_cset_slider_pane_t14_ParamLimits

0x2c89,	// (0x0007c460) main_cset_slider_pane_t14

0x2cc2,	// (0x0007c499) main_cset_slider_pane_t15_ParamLimits

0x2cc2,	// (0x0007c499) main_cset_slider_pane_t15

0xbe60,	// (0x00085637) aid_cam4_burst_size_cell_ParamLimits

0xbe60,	// (0x00085637) aid_cam4_burst_size_cell

0xbe7c,	// (0x00085653) grid_cam4_burst_pane_ParamLimits

0xbe7c,	// (0x00085653) grid_cam4_burst_pane

0xbeae,	// (0x00085685) linegrid_cam4_burst_pane_ParamLimits

0xbeae,	// (0x00085685) linegrid_cam4_burst_pane

0xbece,	// (0x000856a5) scroll_pane_cp30_ParamLimits

0xbece,	// (0x000856a5) scroll_pane_cp30

0xbeda,	// (0x000856b1) cell_cam4_burst_pane_ParamLimits

0xbeda,	// (0x000856b1) cell_cam4_burst_pane

0x2e1a,	// (0x0007c5f1) linegrid_cam4_burst_pane_g1_ParamLimits

0x2e1a,	// (0x0007c5f1) linegrid_cam4_burst_pane_g1

0xbf1a,	// (0x000856f1) linegrid_cam4_burst_pane_g2_ParamLimits

0xbf1a,	// (0x000856f1) linegrid_cam4_burst_pane_g2

0x2e27,	// (0x0007c5fe) linegrid_cam4_burst_pane_g3_ParamLimits

0x2e27,	// (0x0007c5fe) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0008926b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0008926b) linegrid_cam4_burst_pane_g

0xbf2b,	// (0x00085702) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbf2b,	// (0x00085702) linegrid_cam4_burst_pane_g3_copy1

0x2e34,	// (0x0007c60b) linegrid_cam4_burst_pane_g4_ParamLimits

0x2e34,	// (0x0007c60b) linegrid_cam4_burst_pane_g4

0xbf45,	// (0x0008571c) linegrid_cam4_burst_pane_g5_ParamLimits

0xbf45,	// (0x0008571c) linegrid_cam4_burst_pane_g5

0xbf56,	// (0x0008572d) linegrid_cam4_burst_pane_g6_ParamLimits

0xbf56,	// (0x0008572d) linegrid_cam4_burst_pane_g6

0x2e41,	// (0x0007c618) linegrid_cam4_burst_pane_g7_ParamLimits

0x2e41,	// (0x0007c618) linegrid_cam4_burst_pane_g7

0xbf6d,	// (0x00085744) cell_cam4_burst_pane_g1

0x2e5a,	// (0x0007c631) main_cam5_pane_t1_ParamLimits

0x2e5a,	// (0x0007c631) main_cam5_pane_t1

0x2e6c,	// (0x0007c643) main_cam5_pane_t2_ParamLimits

0x2e6c,	// (0x0007c643) main_cam5_pane_t2

0x2e7e,	// (0x0007c655) main_cam5_pane_t3_ParamLimits

0x2e7e,	// (0x0007c655) main_cam5_pane_t3

0x2e90,	// (0x0007c667) main_cam5_pane_t4_ParamLimits

0x2e90,	// (0x0007c667) main_cam5_pane_t4

0x2ea8,	// (0x0007c67f) main_cam5_pane_t5_ParamLimits

0x2ea8,	// (0x0007c67f) main_cam5_pane_t5

0x2ebc,	// (0x0007c693) main_cam5_pane_t6_ParamLimits

0x2ebc,	// (0x0007c693) main_cam5_pane_t6

0x2ed0,	// (0x0007c6a7) main_cam5_pane_t7_ParamLimits

0x2ed0,	// (0x0007c6a7) main_cam5_pane_t7

0x2ee2,	// (0x0007c6b9) main_cam5_pane_t8_ParamLimits

0x2ee2,	// (0x0007c6b9) main_cam5_pane_t8

0x2f00,	// (0x0007c6d7) main_cam5_pane_t9_ParamLimits

0x2f00,	// (0x0007c6d7) main_cam5_pane_t9

0x2f12,	// (0x0007c6e9) main_cam5_pane_t10_ParamLimits

0x2f12,	// (0x0007c6e9) main_cam5_pane_t10

0x2f24,	// (0x0007c6fb) main_cam5_pane_t11_ParamLimits

0x2f24,	// (0x0007c6fb) main_cam5_pane_t11

0x2f38,	// (0x0007c70f) main_cam5_pane_t12_ParamLimits

0x2f38,	// (0x0007c70f) main_cam5_pane_t12

0x2f4f,	// (0x0007c726) main_cam5_pane_t13_ParamLimits

0x2f4f,	// (0x0007c726) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00089277) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00089277) main_cam5_pane_t

0x6105,	// (0x0007f8dc) popup_scut_keymap_window_ParamLimits

0x6105,	// (0x0007f8dc) popup_scut_keymap_window

0xbf80,	// (0x00085757) aid_size_cell_brow_shortcut

0x112a,	// (0x0007a901) bg_popup_window_pane_cp010

0xbf8c,	// (0x00085763) grid_scut_pane

0xbf98,	// (0x0008576f) cell_scut_pane_ParamLimits

0xbf98,	// (0x0008576f) cell_scut_pane

0xbfb3,	// (0x0008578a) cell_scut_pane_g1

0x2f72,	// (0x0007c749) cell_scut_pane_t1

0x2f81,	// (0x0007c758) cell_scut_pane_t2

0xbfbc,	// (0x00085793) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00089292) cell_scut_pane_t

0x9f46,	// (0x0008371d) main_mup3_pane_g8_ParamLimits

0x9f46,	// (0x0008371d) main_mup3_pane_g8

0xb2fa,	// (0x00084ad1) area_vitu2_query_pane_ParamLimits

0xb2fa,	// (0x00084ad1) area_vitu2_query_pane

0xbda6,	// (0x0008557d) input_focus_pane_cp08

0x2f90,	// (0x0007c767) area_vitu2_query_pane_g1

0xbfca,	// (0x000857a1) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00089299) area_vitu2_query_pane_g

0xbfdb,	// (0x000857b2) area_vitu2_query_pane_t1_ParamLimits

0xbfdb,	// (0x000857b2) area_vitu2_query_pane_t1

0xbfef,	// (0x000857c6) area_vitu2_query_pane_t2_ParamLimits

0xbfef,	// (0x000857c6) area_vitu2_query_pane_t2

0xc003,	// (0x000857da) area_vitu2_query_pane_t3_ParamLimits

0xc003,	// (0x000857da) area_vitu2_query_pane_t3

0x2f9c,	// (0x0007c773) area_vitu2_query_pane_t4_ParamLimits

0x2f9c,	// (0x0007c773) area_vitu2_query_pane_t4

0x2fc4,	// (0x0007c79b) area_vitu2_query_pane_t5_ParamLimits

0x2fc4,	// (0x0007c79b) area_vitu2_query_pane_t5

0x2fec,	// (0x0007c7c3) area_vitu2_query_pane_t6_ParamLimits

0x2fec,	// (0x0007c7c3) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0008929e) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0008929e) area_vitu2_query_pane_t

0xc02b,	// (0x00085802) bg_button_pane_cp018

0xc039,	// (0x00085810) bg_button_pane_cp021

0xc045,	// (0x0008581c) bg_button_pane_cp022

0xc056,	// (0x0008582d) input_focus_pane_cp09

0x810e,	// (0x000818e5) aid_size_touch_mv_arrow_left

0x8139,	// (0x00081910) aid_size_touch_mv_arrow_right

0xb8d3,	// (0x000850aa) main_cset_slider_pane_g16_ParamLimits

0xb8d3,	// (0x000850aa) main_cset_slider_pane_g16

0xb8df,	// (0x000850b6) main_cset_slider_pane_g17_ParamLimits

0xb8df,	// (0x000850b6) main_cset_slider_pane_g17

0xbf6d,	// (0x00085744) cell_cam4_burst_pane_g1_ParamLimits

0xdfaf,	// (0x00087786) compa_mode_pane

0xbaea,	// (0x000852c1) popup_vtel_slider_window_g3_ParamLimits

0xbaea,	// (0x000852c1) popup_vtel_slider_window_g3

0xbafe,	// (0x000852d5) popup_vtel_slider_window_g4_ParamLimits

0xbafe,	// (0x000852d5) popup_vtel_slider_window_g4

0xbb12,	// (0x000852e9) popup_vtel_slider_window_t1_ParamLimits

0xbb12,	// (0x000852e9) popup_vtel_slider_window_t1

0xdfaf,	// (0x00087786) main_cl_pane

0x4a09,	// (0x0007e1e0) popup_imed_adjust2_window_ParamLimits

0x49dd,	// (0x0007e1b4) bg_tb_trans_pane_cp05_ParamLimits

0x258c,	// (0x0007bd63) popup_imed_adjust2_window_g1_ParamLimits

0x259b,	// (0x0007bd72) popup_imed_adjust2_window_g2_ParamLimits

0x259b,	// (0x0007bd72) popup_imed_adjust2_window_g2

0x25a7,	// (0x0007bd7e) popup_imed_adjust2_window_g3_ParamLimits

0x25a7,	// (0x0007bd7e) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00089018) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00089018) popup_imed_adjust2_window_g

0x25b3,	// (0x0007bd8a) popup_imed_adjust2_window_t1_ParamLimits

0x25cb,	// (0x0007bda2) slider_imed_adjust_pane_ParamLimits

0x25df,	// (0x0007bdb6) slider_imed_adjust_pane_g1_ParamLimits

0x25ef,	// (0x0007bdc6) slider_imed_adjust_pane_g2_ParamLimits

0x25ff,	// (0x0007bdd6) slider_imed_adjust_pane_g3_ParamLimits

0x2610,	// (0x0007bde7) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0008901f) slider_imed_adjust_pane_g_ParamLimits

0xb062,	// (0x00084839) aid_touch_area_cam4_ParamLimits

0xb062,	// (0x00084839) aid_touch_area_cam4

0xb072,	// (0x00084849) battery_pane_cp01

0xb0f9,	// (0x000848d0) main_camera4_pane_g6_ParamLimits

0xb0f9,	// (0x000848d0) main_camera4_pane_g6

0xb117,	// (0x000848ee) main_camera4_pane_t2_ParamLimits

0xb117,	// (0x000848ee) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00089122) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00089122) main_camera4_pane_t

0xb186,	// (0x0008495d) aid_touch_area_vid4_ParamLimits

0xb186,	// (0x0008495d) aid_touch_area_vid4

0xb1c6,	// (0x0008499d) main_video4_pane_g5_ParamLimits

0xb1c6,	// (0x0008499d) main_video4_pane_g5

0xb1ea,	// (0x000849c1) vid4_progress_pane_ParamLimits

0xb1ea,	// (0x000849c1) vid4_progress_pane

0x2c4f,	// (0x0007c426) main_cset_slider_pane_g18_ParamLimits

0x2c4f,	// (0x0007c426) main_cset_slider_pane_g18

0x2e4e,	// (0x0007c625) cell_cam4_burst_pane_g2_ParamLimits

0x2e4e,	// (0x0007c625) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00089272) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00089272) cell_cam4_burst_pane_g

0xc067,	// (0x0008583e) bg_cl_pane_ParamLimits

0xc067,	// (0x0008583e) bg_cl_pane

0xc073,	// (0x0008584a) cl_header_pane_ParamLimits

0xc073,	// (0x0008584a) cl_header_pane

0xc07f,	// (0x00085856) cl_listscroll_pane_ParamLimits

0xc07f,	// (0x00085856) cl_listscroll_pane

0x3038,	// (0x0007c80f) bg_cl_pane_g1

0x3040,	// (0x0007c817) bg_cl_pane_g2

0x3048,	// (0x0007c81f) bg_cl_pane_g3

0x3050,	// (0x0007c827) bg_cl_pane_g4

0x3058,	// (0x0007c82f) bg_cl_pane_g5

0x3060,	// (0x0007c837) bg_cl_pane_g6

0x3068,	// (0x0007c83f) bg_cl_pane_g7

0x3070,	// (0x0007c847) bg_cl_pane_g8

0x3078,	// (0x0007c84f) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x000892ad) bg_cl_pane_g

0xc08b,	// (0x00085862) aid_height_cl_leading_ParamLimits

0xc08b,	// (0x00085862) aid_height_cl_leading

0xc097,	// (0x0008586e) aid_height_cl_text_ParamLimits

0xc097,	// (0x0008586e) aid_height_cl_text

0x2a88,	// (0x0007c25f) bg_cl_header_pane_ParamLimits

0x2a88,	// (0x0007c25f) bg_cl_header_pane

0xc0af,	// (0x00085886) cl_header_pane_g1_ParamLimits

0xc0af,	// (0x00085886) cl_header_pane_g1

0xc0bc,	// (0x00085893) cl_header_pane_t1_ParamLimits

0xc0bc,	// (0x00085893) cl_header_pane_t1

0x3080,	// (0x0007c857) cl_list_pane

0x2c22,	// (0x0007c3f9) hc_scroll_pane_cp01

0xeb3b,	// (0x00088312) bg_cl_header_pane_g1

0x2b04,	// (0x0007c2db) bg_cl_header_pane_g2

0xeb5b,	// (0x00088332) bg_cl_header_pane_g3

0x2b14,	// (0x0007c2eb) bg_cl_header_pane_g4

0x2b0c,	// (0x0007c2e3) bg_cl_header_pane_g5

0x2d4f,	// (0x0007c526) bg_cl_header_pane_g6

0x2b2c,	// (0x0007c303) bg_cl_header_pane_g7

0x2b34,	// (0x0007c30b) bg_cl_header_pane_g8

0x2b24,	// (0x0007c2fb) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x000892c0) bg_cl_header_pane_g

0xc0ce,	// (0x000858a5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc0ce,	// (0x000858a5) hc_cl_list_double_graphic_heading_pane

0x4ef7,	// (0x0007e6ce) hc_cl_list_single_graphic_pane_ParamLimits

0x4ef7,	// (0x0007e6ce) hc_cl_list_single_graphic_pane

0xc0de,	// (0x000858b5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc0de,	// (0x000858b5) hc_cl_list_single_graphic_pane_g1

0xc0ea,	// (0x000858c1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc0ea,	// (0x000858c1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x000892d3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x000892d3) hc_cl_list_single_graphic_pane_g

0xc0fe,	// (0x000858d5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc0fe,	// (0x000858d5) hc_cl_list_single_graphic_pane_t1

0xc0de,	// (0x000858b5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc0de,	// (0x000858b5) hc_cl_list_double_graphic_heading_pane_g1

0xc113,	// (0x000858ea) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc113,	// (0x000858ea) hc_cl_list_double_graphic_heading_pane_g2

0xc127,	// (0x000858fe) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc127,	// (0x000858fe) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x000892d8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x000892d8) hc_cl_list_double_graphic_heading_pane_g

0xc13b,	// (0x00085912) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc13b,	// (0x00085912) hc_cl_list_double_graphic_heading_pane_t1

0xc150,	// (0x00085927) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc150,	// (0x00085927) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x000892df) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x000892df) hc_cl_list_double_graphic_heading_pane_t

0xc177,	// (0x0008594e) vid4_progress_pane_g1

0xc183,	// (0x0008595a) vid4_progress_pane_g2

0xc18f,	// (0x00085966) vid4_progress_pane_g3

0xc19e,	// (0x00085975) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x000892e4) vid4_progress_pane_g

0xc1bc,	// (0x00085993) vid4_progress_pane_t1

0xc1d2,	// (0x000859a9) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x000892ef) vid4_progress_pane_t

0xc1fd,	// (0x000859d4) wait_bar_pane_cp07

0x99a1,	// (0x00083178) blid_firmament_pane_ParamLimits

0x99e4,	// (0x000831bb) popup_blid_sat_info2_window_g1

0x9a08,	// (0x000831df) popup_blid_sat_info2_window_t3

0x9a16,	// (0x000831ed) popup_blid_sat_info2_window_t4

0x9a24,	// (0x000831fb) popup_blid_sat_info2_window_t5

0x9a32,	// (0x00083209) popup_blid_sat_info2_window_t6

0x9a42,	// (0x00083219) popup_blid_sat_info2_window_t7

0x9a50,	// (0x00083227) popup_blid_sat_info2_window_t8

0x9a5e,	// (0x00083235) popup_blid_sat_info2_window_t9

0x9a6c,	// (0x00083243) popup_blid_sat_info2_window_t10

0xebfa,	// (0x000883d1) aid_firma_cardinal_ParamLimits

0xec0e,	// (0x000883e5) blid_firmament_pane_t1_ParamLimits

0xec25,	// (0x000883fc) blid_firmament_pane_t2_ParamLimits

0xec3c,	// (0x00088413) blid_firmament_pane_t3_ParamLimits

0xec53,	// (0x0008842a) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00088f11) blid_firmament_pane_t_ParamLimits

0xec6a,	// (0x00088441) blid_sat_info_pane_ParamLimits

0x496a,	// (0x0007e141) main_cam_set_pane_ParamLimits

0xa6da,	// (0x00083eb1) aid_size_cell_colour_35_ParamLimits

0xa6f4,	// (0x00083ecb) aid_size_cell_colour_112_ParamLimits

0xa70b,	// (0x00083ee2) aid_size_cell_effect_ParamLimits

0x496a,	// (0x0007e141) bg_tb_trans_pane_cp02_ParamLimits

0x4978,	// (0x0007e14f) heading_imed_pane_ParamLimits

0xa725,	// (0x00083efc) listscroll_imed_pane_ParamLimits

0x1bc5,	// (0x0007b39c) popup_call2_audio_first_window_g5_ParamLimits

0x1bc5,	// (0x0007b39c) popup_call2_audio_first_window_g5

0xae0d,	// (0x000845e4) aid_size_touch_image3_arrow_left_ParamLimits

0xae0d,	// (0x000845e4) aid_size_touch_image3_arrow_left

0xae23,	// (0x000845fa) aid_size_touch_image3_arrow_right_ParamLimits

0xae23,	// (0x000845fa) aid_size_touch_image3_arrow_right

0xc1e8,	// (0x000859bf) vid4_progress_pane_t3

0xa9c5,	// (0x0008419c) main_hwr_training_symbol_option_pane_ParamLimits

0xa9c5,	// (0x0008419c) main_hwr_training_symbol_option_pane

0x287b,	// (0x0007c052) popup_hwr_training_preview_window_ParamLimits

0x287b,	// (0x0007c052) popup_hwr_training_preview_window

0xaa26,	// (0x000841fd) hwr_training_navi_pane_g5_ParamLimits

0xaa26,	// (0x000841fd) hwr_training_navi_pane_g5

0x2af2,	// (0x0007c2c9) popup_char_count_window

0xbc08,	// (0x000853df) bg_popup_sub_pane_cp20_ParamLimits

0xbc16,	// (0x000853ed) list_vitu2_match_list_pane_ParamLimits

0xbc22,	// (0x000853f9) vitu2_page_scroll_pane_ParamLimits

0xbc22,	// (0x000853f9) vitu2_page_scroll_pane

0x30db,	// (0x0007c8b2) list_single_hwr_training_symbol_option_pane_ParamLimits

0x30db,	// (0x0007c8b2) list_single_hwr_training_symbol_option_pane

0x30ee,	// (0x0007c8c5) list_single_hwr_training_symbol_option_pane_g1

0x30f6,	// (0x0007c8cd) list_single_hwr_training_symbol_option_pane_t1

0x3104,	// (0x0007c8db) bg_button_pane_cp023

0x310d,	// (0x0007c8e4) bg_button_pane_cp024

0xc20f,	// (0x000859e6) vitu2_page_scroll_pane_g1

0xc217,	// (0x000859ee) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x000892f6) vitu2_page_scroll_pane_g

0xc221,	// (0x000859f8) vitu2_page_scroll_pane_t1

0x9893,	// (0x0008306a) popup_char_count_window_g1

0x3140,	// (0x0007c917) popup_char_count_window_g2

0x3149,	// (0x0007c920) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x000892fb) popup_char_count_window_g

0x3152,	// (0x0007c929) popup_char_count_window_t1

0xdfaf,	// (0x00087786) main_vded2_pane

0x2578,	// (0x0007bd4f) aid_size_cell_imed_line

0x2582,	// (0x0007bd59) grid_imed_line_width_pane

0xb24e,	// (0x00084a25) vid4_indicators_pane_g4

0x3160,	// (0x0007c937) cell_imed_line_width_pane_ParamLimits

0x3160,	// (0x0007c937) cell_imed_line_width_pane

0x3176,	// (0x0007c94d) cell_imed_line_width_pane_g1

0xf127,	// (0x000888fe) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00089302) cell_imed_line_width_pane_g

0xc230,	// (0x00085a07) main_vded2_pane_g1_ParamLimits

0xc230,	// (0x00085a07) main_vded2_pane_g1

0xc23f,	// (0x00085a16) main_vded2_pane_g2_ParamLimits

0xc23f,	// (0x00085a16) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00089307) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00089307) main_vded2_pane_g

0xc24d,	// (0x00085a24) vded2_slider_pane_ParamLimits

0xc24d,	// (0x00085a24) vded2_slider_pane

0xc25a,	// (0x00085a31) aid_size_touch_vded2_end

0xc264,	// (0x00085a3b) aid_size_touch_vded2_playhead

0x317f,	// (0x0007c956) aid_size_touch_vded2_start

0x3187,	// (0x0007c95e) vded2_slider_bg_pane

0x3190,	// (0x0007c967) vded2_slider_pane_g1

0x3199,	// (0x0007c970) vded2_slider_pane_g2

0xc26c,	// (0x00085a43) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0008930c) vded2_slider_pane_g

0x31a1,	// (0x0007c978) vded2_slider_bg_pane_g1

0x31aa,	// (0x0007c981) vded2_slider_bg_pane_g2

0x31b3,	// (0x0007c98a) vded2_slider_bg_pane_g3

0x0002,

0xf80a,	// (0x00088fe1) vded2_slider_bg_pane_g

0x8889,	// (0x00082060) aid_postcard_touch_down_pane_ParamLimits

0x8889,	// (0x00082060) aid_postcard_touch_down_pane

0x8899,	// (0x00082070) aid_postcard_touch_up_pane_ParamLimits

0x8899,	// (0x00082070) aid_postcard_touch_up_pane

0xdfaf,	// (0x00087786) main_blid2_pane

0x49eb,	// (0x0007e1c2) popup_blid2_search_window

0xdfaf,	// (0x00087786) blid2_gps_pane

0xdfaf,	// (0x00087786) blid2_navig_pane

0xdfaf,	// (0x00087786) blid2_search_pane

0xdfaf,	// (0x00087786) blid2_tripm_pane

0xc275,	// (0x00085a4c) blid2_search_pane_g1_ParamLimits

0xc275,	// (0x00085a4c) blid2_search_pane_g1

0xc285,	// (0x00085a5c) blid2_search_pane_t1_ParamLimits

0xc285,	// (0x00085a5c) blid2_search_pane_t1

0xc297,	// (0x00085a6e) aid_size_cell_blid2_gps_ParamLimits

0xc297,	// (0x00085a6e) aid_size_cell_blid2_gps

0xc2a7,	// (0x00085a7e) blid2_gps_pane_g1_ParamLimits

0xc2a7,	// (0x00085a7e) blid2_gps_pane_g1

0xc2b3,	// (0x00085a8a) grid_blid2_satellite_pane_ParamLimits

0xc2b3,	// (0x00085a8a) grid_blid2_satellite_pane

0xc2c1,	// (0x00085a98) blid2_navig_pane_g1_ParamLimits

0xc2c1,	// (0x00085a98) blid2_navig_pane_g1

0xc2cd,	// (0x00085aa4) blid2_navig_pane_t1_ParamLimits

0xc2cd,	// (0x00085aa4) blid2_navig_pane_t1

0xc2df,	// (0x00085ab6) blid2_navig_pane_t2_ParamLimits

0xc2df,	// (0x00085ab6) blid2_navig_pane_t2

0x0001,

0xfb3c,	// (0x00089313) blid2_navig_pane_t_ParamLimits

0xfb3c,	// (0x00089313) blid2_navig_pane_t

0xc2f1,	// (0x00085ac8) blid2_navig_ring_pane_ParamLimits

0xc2f1,	// (0x00085ac8) blid2_navig_ring_pane

0xc301,	// (0x00085ad8) blid2_speed_pane_ParamLimits

0xc301,	// (0x00085ad8) blid2_speed_pane

0xc30d,	// (0x00085ae4) blid2_tripm_pane_g1_ParamLimits

0xc30d,	// (0x00085ae4) blid2_tripm_pane_g1

0xc31d,	// (0x00085af4) blid2_tripm_pane_g2_ParamLimits

0xc31d,	// (0x00085af4) blid2_tripm_pane_g2

0xc329,	// (0x00085b00) blid2_tripm_pane_g3_ParamLimits

0xc329,	// (0x00085b00) blid2_tripm_pane_g3

0xc335,	// (0x00085b0c) blid2_tripm_pane_g4_ParamLimits

0xc335,	// (0x00085b0c) blid2_tripm_pane_g4

0xc341,	// (0x00085b18) blid2_tripm_pane_g5_ParamLimits

0xc341,	// (0x00085b18) blid2_tripm_pane_g5

0x0005,

0xfb41,	// (0x00089318) blid2_tripm_pane_g_ParamLimits

0xfb41,	// (0x00089318) blid2_tripm_pane_g

0xc35d,	// (0x00085b34) blid2_tripm_pane_t1_ParamLimits

0xc35d,	// (0x00085b34) blid2_tripm_pane_t1

0xc371,	// (0x00085b48) blid2_tripm_pane_t2_ParamLimits

0xc371,	// (0x00085b48) blid2_tripm_pane_t2

0xc383,	// (0x00085b5a) blid2_tripm_pane_t3_ParamLimits

0xc383,	// (0x00085b5a) blid2_tripm_pane_t3

0x0003,

0xfb4e,	// (0x00089325) blid2_tripm_pane_t_ParamLimits

0xfb4e,	// (0x00089325) blid2_tripm_pane_t

0xc3b5,	// (0x00085b8c) cell_blid2_satellite_pane_ParamLimits

0xc3b5,	// (0x00085b8c) cell_blid2_satellite_pane

0xc3d3,	// (0x00085baa) cell_blid2_satellite_pane_g1

0x31bc,	// (0x0007c993) cell_blid2_satellite_pane_t1

0xec7a,	// (0x00088451) blid2_speed_pane_g1

0x31ca,	// (0x0007c9a1) blid2_speed_pane_t1

0x31d8,	// (0x0007c9af) blid2_speed_pane_t2

0x0001,

0xfb57,	// (0x0008932e) blid2_speed_pane_t

0xec7a,	// (0x00088451) blid2_navig_ring_pane_g1

0xc3dc,	// (0x00085bb3) blid2_navig_ring_pane_g2

0xc3e4,	// (0x00085bbb) blid2_navig_ring_pane_g3

0xc3ec,	// (0x00085bc3) blid2_navig_ring_pane_g4

0xc3f4,	// (0x00085bcb) blid2_navig_ring_pane_g5

0x0004,

0xfb5c,	// (0x00089333) blid2_navig_ring_pane_g

0xdfaf,	// (0x00087786) bg_popup_window_pane_cp011

0x31e6,	// (0x0007c9bd) popup_blid2_search_window_g1

0x31ee,	// (0x0007c9c5) popup_blid2_search_window_t1

0x31fc,	// (0x0007c9d3) popup_blid2_search_window_t2

0x0001,

0xfb67,	// (0x0008933e) popup_blid2_search_window_t

0xea4a,	// (0x00088221) main_browser_pane_g1

0xe749,	// (0x00087f20) main_browser_pane_ParamLimits

0xb218,	// (0x000849ef) bg_button_pane_cp011_ParamLimits

0xb4e4,	// (0x00084cbb) cell_vitu2_function_pane_g1_ParamLimits

0x496a,	// (0x0007e141) bg_popup_sub_pane_cp22_ParamLimits

0xbda6,	// (0x0008557d) input_focus_pane_cp08_ParamLimits

0xbdb3,	// (0x0008558a) popup_vitu2_query_button_pane_ParamLimits

0xbdb3,	// (0x0008558a) popup_vitu2_query_button_pane

0xbd88,	// (0x0008555f) popup_vitu2_query_input_button_pane

0x2da4,	// (0x0007c57b) popup_vitu2_query_window_g1_ParamLimits

0xbdc4,	// (0x0008559b) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0008924c) popup_vitu2_query_window_g_ParamLimits

0xdfaf,	// (0x00087786) bg_button_pane_cp026

0xc3fc,	// (0x00085bd3) popup_vitu2_query_input_button_pane_g1

0xdfaf,	// (0x00087786) bg_button_pane_cp025

0x320a,	// (0x0007c9e1) popup_vitu2_query_button_pane_t1

0x9c9c,	// (0x00083473) main_mp3_pane_t6

0x9cac,	// (0x00083483) popup_slider_window_cp01

0xb137,	// (0x0008490e) cam4_battery_pane

0xb226,	// (0x000849fd) cam4_battery_pane_cp02

0xc165,	// (0x0008593c) cam4_battery_pane_cp01

0xc16f,	// (0x00085946) cam4_battery_pane_cp03

0x3218,	// (0x0007c9ef) cam4_battery_pane_g1

0xec7a,	// (0x00088451) cam4_battery_pane_g2

0x0001,

0xfb6c,	// (0x00089343) cam4_battery_pane_g

0x9a7a,	// (0x00083251) popup_blid_sat_info2_window_t11

0x810e,	// (0x000818e5) aid_size_touch_mv_arrow_left_ParamLimits

0x8139,	// (0x00081910) aid_size_touch_mv_arrow_right_ParamLimits

0x108a,	// (0x0007a861) navi_pane_g1_ParamLimits

0x8162,	// (0x00081939) navi_pane_g2_ParamLimits

0x8190,	// (0x00081967) navi_pane_g3_ParamLimits

0xf44c,	// (0x00088c23) navi_pane_g_ParamLimits

0x81ea,	// (0x000819c1) navi_pane_mv_t1_ParamLimits

0xa731,	// (0x00083f08) grid_imed_effect_pane_ParamLimits

0xe98f,	// (0x00088166) aid_placing_vt_slider_lsc

0xe997,	// (0x0008816e) aid_placing_vt_slider_prt

0x496a,	// (0x0007e141) bg_tb_trans_pane_cp01_ParamLimits

0xedca,	// (0x000885a1) popup_image_details_window_g1_ParamLimits

0xeddd,	// (0x000885b4) popup_image_details_window_g2_ParamLimits

0xedf2,	// (0x000885c9) popup_image_details_window_g3_ParamLimits

0xedf2,	// (0x000885c9) popup_image_details_window_g3

0xf77f,	// (0x00088f56) popup_image_details_window_g_ParamLimits

0xee06,	// (0x000885dd) popup_image_details_window_t1_ParamLimits

0xee18,	// (0x000885ef) popup_image_details_window_t2_ParamLimits

0xee31,	// (0x00088608) popup_image_details_window_t3_ParamLimits

0xee45,	// (0x0008861c) popup_image_details_window_t4_ParamLimits

0xee60,	// (0x00088637) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00088f5d) popup_image_details_window_t_ParamLimits

0xc0a3,	// (0x0008587a) cl_header_name_pane_ParamLimits

0xc0a3,	// (0x0008587a) cl_header_name_pane

0xc404,	// (0x00085bdb) cl_header_name_pane_t1_ParamLimits

0xc404,	// (0x00085bdb) cl_header_name_pane_t1

0xc41b,	// (0x00085bf2) cl_header_name_pane_t2_ParamLimits

0xc41b,	// (0x00085bf2) cl_header_name_pane_t2

0xc445,	// (0x00085c1c) cl_header_name_pane_t3_ParamLimits

0xc445,	// (0x00085c1c) cl_header_name_pane_t3

0x0002,

0xfb71,	// (0x00089348) cl_header_name_pane_t_ParamLimits

0xfb71,	// (0x00089348) cl_header_name_pane_t

0x81bb,	// (0x00081992) navi_pane_mv_g2_ParamLimits

0x2aaf,	// (0x0007c286) field_vitu2_entry_pane_g1_ParamLimits

0x2abb,	// (0x0007c292) field_vitu2_entry_pane_g2_ParamLimits

0x2ac7,	// (0x0007c29e) field_vitu2_entry_pane_g3_ParamLimits

0x2ac7,	// (0x0007c29e) field_vitu2_entry_pane_g3

0xf974,	// (0x0008914b) field_vitu2_entry_pane_g_ParamLimits

0xb474,	// (0x00084c4b) cell_vitu2_itu_pane_g1_ParamLimits

0xb484,	// (0x00084c5b) cell_vitu2_itu_pane_g2_ParamLimits

0xb484,	// (0x00084c5b) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00089157) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00089157) cell_vitu2_itu_pane_g

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp05_ParamLimits

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp05

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp03

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp04

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp10_ParamLimits

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp10

0xc045,	// (0x0008581c) bg_vkb2_func_pane_cp08

0xc02b,	// (0x00085802) bg_vkb2_func_pane_cp06

0xc039,	// (0x00085810) bg_vkb2_func_pane_cp07

0x3116,	// (0x0007c8ed) bg_vkb2_func_pane_cp11_ParamLimits

0x3116,	// (0x0007c8ed) bg_vkb2_func_pane_cp11

0x312b,	// (0x0007c902) bg_vkb2_func_pane_cp12_ParamLimits

0x312b,	// (0x0007c902) bg_vkb2_func_pane_cp12

0xdfaf,	// (0x00087786) bg_vkb2_func_pane_cp09

0x2b04,	// (0x0007c2db) bg_vkb2_func_pane_g1

0xeb5b,	// (0x00088332) bg_vkb2_func_pane_g2

0x2b0c,	// (0x0007c2e3) bg_vkb2_func_pane_g3

0x2b14,	// (0x0007c2eb) bg_vkb2_func_pane_g4

0x2d4f,	// (0x0007c526) bg_vkb2_func_pane_g5

0x2b2c,	// (0x0007c303) bg_vkb2_func_pane_g6

0x2b34,	// (0x0007c30b) bg_vkb2_func_pane_g7

0x2b24,	// (0x0007c2fb) bg_vkb2_func_pane_g8

0xeb3b,	// (0x00088312) bg_vkb2_func_pane_g9

0x0008,

0xfb78,	// (0x0008934f) bg_vkb2_func_pane_g

0xc34f,	// (0x00085b26) blid2_tripm_pane_g6_ParamLimits

0xc34f,	// (0x00085b26) blid2_tripm_pane_g6

0x2933,	// (0x0007c10a) mp4_progress_pane_g1

0xc3a9,	// (0x00085b80) blid2_tripm_values_pane_ParamLimits

0xc3a9,	// (0x00085b80) blid2_tripm_values_pane

0xc46a,	// (0x00085c41) blid2_tripm_values_pane_t1

0xc478,	// (0x00085c4f) blid2_tripm_values_pane_t2

0xc486,	// (0x00085c5d) blid2_tripm_values_pane_t3

0xc494,	// (0x00085c6b) blid2_tripm_values_pane_t4

0xc4a2,	// (0x00085c79) blid2_tripm_values_pane_t5

0xc4b0,	// (0x00085c87) blid2_tripm_values_pane_t6

0xc4be,	// (0x00085c95) blid2_tripm_values_pane_t7

0xc4cc,	// (0x00085ca3) blid2_tripm_values_pane_t8

0xc4da,	// (0x00085cb1) blid2_tripm_values_pane_t9

0x0008,

0xfb8b,	// (0x00089362) blid2_tripm_values_pane_t

0x6f50,	// (0x00080727) call_video_pane_t1_ParamLimits

0x6f66,	// (0x0008073d) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00088aac) call_video_pane_t_ParamLimits

0x874a,	// (0x00081f21) msg_header_pane_g1_ParamLimits

0x12c7,	// (0x0007aa9e) msg_header_pane_g2_ParamLimits

0x12c7,	// (0x0007aa9e) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00088cc6) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00088cc6) msg_header_pane_g

0xe749,	// (0x00087f20) main_clock2_pane_ParamLimits

0xa4b4,	// (0x00083c8b) grid_clock2_toolbar_pane_ParamLimits

0xa4b4,	// (0x00083c8b) grid_clock2_toolbar_pane

0xa4b4,	// (0x00083c8b) listscroll_clock2_pane_ParamLimits

0xa4b4,	// (0x00083c8b) listscroll_clock2_pane

0xa568,	// (0x00083d3f) main_clock2_pane_t3_ParamLimits

0xa568,	// (0x00083d3f) main_clock2_pane_t3

0xa57a,	// (0x00083d51) main_clock2_pane_t4_ParamLimits

0xa57a,	// (0x00083d51) main_clock2_pane_t4

0x3222,	// (0x0007c9f9) cell_clock2_toolbar_pane

0x322a,	// (0x0007ca01) cell_clock2_toolbar_pane_cp01

0x322a,	// (0x0007ca01) cell_clock2_toolbar_pane_cp02

0x3232,	// (0x0007ca09) cell_clock2_toolbar_pane_cp03

0x323a,	// (0x0007ca11) list_clock2_pane

0x0ff0,	// (0x0007a7c7) scroll_pane_cp10

0x3242,	// (0x0007ca19) list_single_clock2_pane_ParamLimits

0x3242,	// (0x0007ca19) list_single_clock2_pane

0x112a,	// (0x0007a901) list_highlight_pane_cp08

0x324f,	// (0x0007ca26) list_single_clock2_pane_t1

0x325d,	// (0x0007ca34) list_single_clock2_pane_t2

0x0001,

0xfb9e,	// (0x00089375) list_single_clock2_pane_t

0xdfaf,	// (0x00087786) bg_button_pane_cp10

0x326b,	// (0x0007ca42) cell_clock2_toolbar_pane_g1

0x87eb,	// (0x00081fc2) aid_main_viewer_pane_g1_ParamLimits

0x87eb,	// (0x00081fc2) aid_main_viewer_pane_g1

0x87f7,	// (0x00081fce) aid_main_viewer_pane_g2_ParamLimits

0x87f7,	// (0x00081fce) aid_main_viewer_pane_g2

0x8803,	// (0x00081fda) aid_main_viewer_pane_g3_ParamLimits

0x8803,	// (0x00081fda) aid_main_viewer_pane_g3

0x8814,	// (0x00081feb) aid_main_viewer_pane_g4_ParamLimits

0x8814,	// (0x00081feb) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00088cd7) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00088cd7) aid_main_viewer_pane_g

0x8fa4,	// (0x0008277b) main_calc_pane_ParamLimits

0x8fb1,	// (0x00082788) main_dialer2_pane_ParamLimits

0xdfaf,	// (0x00087786) main_cam6_pane

0xdfaf,	// (0x00087786) main_vid6_pane

0xa4c0,	// (0x00083c97) listscroll_gen_pane_cp06_ParamLimits

0xa4c0,	// (0x00083c97) listscroll_gen_pane_cp06

0xa58c,	// (0x00083d63) main_clock2_pane_t5_ParamLimits

0xa58c,	// (0x00083d63) main_clock2_pane_t5

0xa5db,	// (0x00083db2) aid_call2_pane_cp10_ParamLimits

0xa5ed,	// (0x00083dc4) aid_call_pane_cp10_ParamLimits

0x105f,	// (0x0007a836) popup_clock_analogue_window_cp10_g1_ParamLimits

0x105f,	// (0x0007a836) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa5ff,	// (0x00083dd6) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa5ff,	// (0x00083dd6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x105f,	// (0x0007a836) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0008900d) popup_clock_analogue_window_cp10_g_ParamLimits

0xa611,	// (0x00083de8) popup_clock_analogue_window_cp10_t1_ParamLimits

0xadba,	// (0x00084591) cell_dialer2_keypad_pane_g2_ParamLimits

0xadba,	// (0x00084591) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x000890f3) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x000890f3) cell_dialer2_keypad_pane_g

0xadd6,	// (0x000845ad) cell_dialer2_keypad_pane_t1

0xb7c1,	// (0x00084f98) main_cset_text2_pane_ParamLimits

0xb7c1,	// (0x00084f98) main_cset_text2_pane

0x2f90,	// (0x0007c767) area_vitu2_query_pane_g1_ParamLimits

0xbfca,	// (0x000857a1) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00089299) area_vitu2_query_pane_g_ParamLimits

0x3014,	// (0x0007c7eb) area_vitu2_query_pane_t7_ParamLimits

0x3014,	// (0x0007c7eb) area_vitu2_query_pane_t7

0xc02b,	// (0x00085802) bg_button_pane_cp018_ParamLimits

0xc039,	// (0x00085810) bg_button_pane_cp021_ParamLimits

0xc045,	// (0x0008581c) bg_button_pane_cp022_ParamLimits

0xc045,	// (0x0008581c) bg_vkb2_func_pane_cp08_ParamLimits

0xc02b,	// (0x00085802) bg_vkb2_func_pane_cp06_ParamLimits

0xc039,	// (0x00085810) bg_vkb2_func_pane_cp07_ParamLimits

0xc056,	// (0x0008582d) input_focus_pane_cp09_ParamLimits

0xc4e8,	// (0x00085cbf) cam6_autofocus_pane_ParamLimits

0xc4e8,	// (0x00085cbf) cam6_autofocus_pane

0xc50a,	// (0x00085ce1) cam6_image_uncrop_pane_ParamLimits

0xc50a,	// (0x00085ce1) cam6_image_uncrop_pane

0xc537,	// (0x00085d0e) cam6_indi_pane_ParamLimits

0xc537,	// (0x00085d0e) cam6_indi_pane

0xc551,	// (0x00085d28) cam6_mode_pane_ParamLimits

0xc551,	// (0x00085d28) cam6_mode_pane

0xc565,	// (0x00085d3c) cam6_timer_pane_ParamLimits

0xc565,	// (0x00085d3c) cam6_timer_pane

0xc571,	// (0x00085d48) cam6_zoom_pane_ParamLimits

0xc571,	// (0x00085d48) cam6_zoom_pane

0xc58f,	// (0x00085d66) cam6_mode_pane_g1_ParamLimits

0xc58f,	// (0x00085d66) cam6_mode_pane_g1

0xc59b,	// (0x00085d72) cam6_mode_pane_g2_ParamLimits

0xc59b,	// (0x00085d72) cam6_mode_pane_g2

0xc5a7,	// (0x00085d7e) cam6_mode_pane_g3_ParamLimits

0xc5a7,	// (0x00085d7e) cam6_mode_pane_g3

0xc5b3,	// (0x00085d8a) cam6_mode_pane_g4_ParamLimits

0xc5b3,	// (0x00085d8a) cam6_mode_pane_g4

0x0003,

0xfba3,	// (0x0008937a) cam6_mode_pane_g_ParamLimits

0xfba3,	// (0x0008937a) cam6_mode_pane_g

0x3273,	// (0x0007ca4a) bg_tb_trans_pane_cp08_ParamLimits

0x3273,	// (0x0007ca4a) bg_tb_trans_pane_cp08

0x3281,	// (0x0007ca58) cam6_battery_pane_ParamLimits

0x3281,	// (0x0007ca58) cam6_battery_pane

0x3297,	// (0x0007ca6e) cam6_indi_pane_g1_ParamLimits

0x3297,	// (0x0007ca6e) cam6_indi_pane_g1

0x32a9,	// (0x0007ca80) cam6_indi_pane_g2_ParamLimits

0x32a9,	// (0x0007ca80) cam6_indi_pane_g2

0x32bb,	// (0x0007ca92) cam6_indi_pane_g3_ParamLimits

0x32bb,	// (0x0007ca92) cam6_indi_pane_g3

0x0002,

0xfbac,	// (0x00089383) cam6_indi_pane_g_ParamLimits

0xfbac,	// (0x00089383) cam6_indi_pane_g

0x32cd,	// (0x0007caa4) cam6_indi_pane_t1_ParamLimits

0x32cd,	// (0x0007caa4) cam6_indi_pane_t1

0xb28c,	// (0x00084a63) cam6_autofocus_pane_g1

0xb284,	// (0x00084a5b) cam6_autofocus_pane_g2

0xb29c,	// (0x00084a73) cam6_autofocus_pane_g3

0xb294,	// (0x00084a6b) cam6_autofocus_pane_g4

0x0003,

0xfbb3,	// (0x0008938a) cam6_autofocus_pane_g

0x32f3,	// (0x0007caca) cam6_timer_pane_g1

0x32fb,	// (0x0007cad2) cam6_timer_pane_t1

0x3309,	// (0x0007cae0) cam6_zoom_cont_pane

0x3311,	// (0x0007cae8) cam6_zoom_pane_g1

0x3319,	// (0x0007caf0) cam6_zoom_pane_g2

0xc5bf,	// (0x00085d96) cam6_zoom_pane_g3

0x0002,

0xfbbc,	// (0x00089393) cam6_zoom_pane_g

0xec7a,	// (0x00088451) cam6_battery_pane_g1

0xec7a,	// (0x00088451) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00088f1a) cam6_battery_pane_g

0x3321,	// (0x0007caf8) cam6_zoom_cont_pane_g1

0x332a,	// (0x0007cb01) cam6_zoom_cont_pane_g2

0x3333,	// (0x0007cb0a) cam6_zoom_cont_pane_g3

0x0002,

0xfbc3,	// (0x0008939a) cam6_zoom_cont_pane_g

0xc5dc,	// (0x00085db3) cam6_mode_pane_cp_ParamLimits

0xc5dc,	// (0x00085db3) cam6_mode_pane_cp

0xc5f0,	// (0x00085dc7) cam6_zoom_pane_cp_ParamLimits

0xc5f0,	// (0x00085dc7) cam6_zoom_pane_cp

0xc60e,	// (0x00085de5) vid6_image_uncrop_cif_pane_ParamLimits

0xc60e,	// (0x00085de5) vid6_image_uncrop_cif_pane

0xc63a,	// (0x00085e11) vid6_image_uncrop_nhd_pane_ParamLimits

0xc63a,	// (0x00085e11) vid6_image_uncrop_nhd_pane

0xc659,	// (0x00085e30) vid6_image_uncrop_vga_pane_ParamLimits

0xc659,	// (0x00085e30) vid6_image_uncrop_vga_pane

0xc678,	// (0x00085e4f) vid6_image_uncrop_wvga_pane_ParamLimits

0xc678,	// (0x00085e4f) vid6_image_uncrop_wvga_pane

0xc697,	// (0x00085e6e) vid6_indi_pane_ParamLimits

0xc697,	// (0x00085e6e) vid6_indi_pane

0x3273,	// (0x0007ca4a) bg_tb_trans_pane_cp09_ParamLimits

0x3273,	// (0x0007ca4a) bg_tb_trans_pane_cp09

0x334b,	// (0x0007cb22) cam6_battery_pane_cp_ParamLimits

0x334b,	// (0x0007cb22) cam6_battery_pane_cp

0x3357,	// (0x0007cb2e) vid6_indi_pane_g1_ParamLimits

0x3357,	// (0x0007cb2e) vid6_indi_pane_g1

0x3369,	// (0x0007cb40) vid6_indi_pane_g2_ParamLimits

0x3369,	// (0x0007cb40) vid6_indi_pane_g2

0x337b,	// (0x0007cb52) vid6_indi_pane_g3_ParamLimits

0x337b,	// (0x0007cb52) vid6_indi_pane_g3

0x3392,	// (0x0007cb69) vid6_indi_pane_g4_ParamLimits

0x3392,	// (0x0007cb69) vid6_indi_pane_g4

0x33a9,	// (0x0007cb80) vid6_indi_pane_g5_ParamLimits

0x33a9,	// (0x0007cb80) vid6_indi_pane_g5

0x0004,

0xfbca,	// (0x000893a1) vid6_indi_pane_g_ParamLimits

0xfbca,	// (0x000893a1) vid6_indi_pane_g

0x33c3,	// (0x0007cb9a) vid6_indi_pane_t1_ParamLimits

0x33c3,	// (0x0007cb9a) vid6_indi_pane_t1

0x33d9,	// (0x0007cbb0) vid6_indi_pane_t2_ParamLimits

0x33d9,	// (0x0007cbb0) vid6_indi_pane_t2

0x3401,	// (0x0007cbd8) vid6_indi_pane_t3_ParamLimits

0x3401,	// (0x0007cbd8) vid6_indi_pane_t3

0x3429,	// (0x0007cc00) vid6_indi_pane_t4_ParamLimits

0x3429,	// (0x0007cc00) vid6_indi_pane_t4

0x0003,

0xfbd5,	// (0x000893ac) vid6_indi_pane_t_ParamLimits

0xfbd5,	// (0x000893ac) vid6_indi_pane_t

0x344d,	// (0x0007cc24) wait_bar_pane_cp08

0xc6bc,	// (0x00085e93) main_cset_text2_pane_t1_ParamLimits

0xc6bc,	// (0x00085e93) main_cset_text2_pane_t1

0xc5c7,	// (0x00085d9e) listscroll_gen_pane_cp06_t1_ParamLimits

0xc5c7,	// (0x00085d9e) listscroll_gen_pane_cp06_t1

0xdfaf,	// (0x00087786) main_cam6_set_pane

0xb129,	// (0x00084900) bg_tb_trans_pane_cp06_ParamLimits

0xb13f,	// (0x00084916) cam4_indicators_pane_g1_ParamLimits

0xb14c,	// (0x00084923) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00089127) cam4_indicators_pane_g_ParamLimits

0xb16c,	// (0x00084943) cam4_indicators_pane_t1_ParamLimits

0xb218,	// (0x000849ef) bg_tb_trans_pane_cp07_ParamLimits

0xb13f,	// (0x00084916) vid4_indicators_pane_g1_ParamLimits

0xb230,	// (0x00084a07) vid4_indicators_pane_g2_ParamLimits

0xb23d,	// (0x00084a14) vid4_indicators_pane_g3_ParamLimits

0xb24e,	// (0x00084a25) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00089139) vid4_indicators_pane_g_ParamLimits

0xb26a,	// (0x00084a41) vid4_indicators_pane_t1_ParamLimits

0xc177,	// (0x0008594e) vid4_progress_pane_g1_ParamLimits

0xc183,	// (0x0008595a) vid4_progress_pane_g2_ParamLimits

0xc18f,	// (0x00085966) vid4_progress_pane_g3_ParamLimits

0xc19e,	// (0x00085975) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x000892e4) vid4_progress_pane_g_ParamLimits

0xc1bc,	// (0x00085993) vid4_progress_pane_t1_ParamLimits

0xc1d2,	// (0x000859a9) vid4_progress_pane_t2_ParamLimits

0xc1e8,	// (0x000859bf) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x000892ef) vid4_progress_pane_t_ParamLimits

0xc1fd,	// (0x000859d4) wait_bar_pane_cp07_ParamLimits

0xc6e3,	// (0x00085eba) main_cam6_set_pane_g2_ParamLimits

0xc6e3,	// (0x00085eba) main_cam6_set_pane_g2

0xc6ef,	// (0x00085ec6) main_cset6_listscroll_pane_ParamLimits

0xc6ef,	// (0x00085ec6) main_cset6_listscroll_pane

0xc71c,	// (0x00085ef3) main_cset6_slider_pane_ParamLimits

0xc71c,	// (0x00085ef3) main_cset6_slider_pane

0xc728,	// (0x00085eff) main_cset6_text2_pane_ParamLimits

0xc728,	// (0x00085eff) main_cset6_text2_pane

0x345c,	// (0x0007cc33) main_cset6_text_pane

0x3464,	// (0x0007cc3b) main_cset_list_pane_copy1_ParamLimits

0x3464,	// (0x0007cc3b) main_cset_list_pane_copy1

0x3474,	// (0x0007cc4b) scroll_pane_cp028_copy1

0xc73b,	// (0x00085f12) cset_list_set_pane_copy1

0xc74b,	// (0x00085f22) aid_position_infowindow_above_copy1

0xc753,	// (0x00085f2a) aid_position_infowindow_below_copy1

0xc75b,	// (0x00085f32) cset_list_set_pane_g1_copy1

0xc763,	// (0x00085f3a) cset_list_set_pane_g3_copy1_ParamLimits

0xc763,	// (0x00085f3a) cset_list_set_pane_g3_copy1

0xc772,	// (0x00085f49) cset_list_set_pane_t1_copy1_ParamLimits

0xc772,	// (0x00085f49) cset_list_set_pane_t1_copy1

0x496a,	// (0x0007e141) list_highlight_pane_cp021_copy1_ParamLimits

0x496a,	// (0x0007e141) list_highlight_pane_cp021_copy1

0x34a1,	// (0x0007cc78) cset6_slider_pane_ParamLimits

0x34a1,	// (0x0007cc78) cset6_slider_pane

0x34cd,	// (0x0007cca4) main_cset6_slider_pane_g1_ParamLimits

0x34cd,	// (0x0007cca4) main_cset6_slider_pane_g1

0xc787,	// (0x00085f5e) main_cset6_slider_pane_g2_ParamLimits

0xc787,	// (0x00085f5e) main_cset6_slider_pane_g2

0x34f5,	// (0x0007cccc) main_cset6_slider_pane_g3_ParamLimits

0x34f5,	// (0x0007cccc) main_cset6_slider_pane_g3

0xc7af,	// (0x00085f86) main_cset6_slider_pane_g4_ParamLimits

0xc7af,	// (0x00085f86) main_cset6_slider_pane_g4

0xc7bb,	// (0x00085f92) main_cset6_slider_pane_g5_ParamLimits

0xc7bb,	// (0x00085f92) main_cset6_slider_pane_g5

0x2c37,	// (0x0007c40e) main_cset6_slider_pane_g7_ParamLimits

0x2c37,	// (0x0007c40e) main_cset6_slider_pane_g7

0x2c43,	// (0x0007c41a) main_cset6_slider_pane_g8_ParamLimits

0x2c43,	// (0x0007c41a) main_cset6_slider_pane_g8

0xc7c7,	// (0x00085f9e) main_cset6_slider_pane_g9_ParamLimits

0xc7c7,	// (0x00085f9e) main_cset6_slider_pane_g9

0xc7d3,	// (0x00085faa) main_cset6_slider_pane_g10_ParamLimits

0xc7d3,	// (0x00085faa) main_cset6_slider_pane_g10

0xc7df,	// (0x00085fb6) main_cset6_slider_pane_g11_ParamLimits

0xc7df,	// (0x00085fb6) main_cset6_slider_pane_g11

0xc7eb,	// (0x00085fc2) main_cset6_slider_pane_g12_ParamLimits

0xc7eb,	// (0x00085fc2) main_cset6_slider_pane_g12

0xc7f7,	// (0x00085fce) main_cset6_slider_pane_g13_ParamLimits

0xc7f7,	// (0x00085fce) main_cset6_slider_pane_g13

0xc803,	// (0x00085fda) main_cset6_slider_pane_g14_ParamLimits

0xc803,	// (0x00085fda) main_cset6_slider_pane_g14

0xc80f,	// (0x00085fe6) main_cset6_slider_pane_g15_ParamLimits

0xc80f,	// (0x00085fe6) main_cset6_slider_pane_g15

0xc827,	// (0x00085ffe) main_cset6_slider_pane_g16_ParamLimits

0xc827,	// (0x00085ffe) main_cset6_slider_pane_g16

0xc833,	// (0x0008600a) main_cset6_slider_pane_g17_ParamLimits

0xc833,	// (0x0008600a) main_cset6_slider_pane_g17

0x0011,

0xfbde,	// (0x000893b5) main_cset6_slider_pane_g_ParamLimits

0xfbde,	// (0x000893b5) main_cset6_slider_pane_g

0x3501,	// (0x0007ccd8) main_cset6_slider_pane_t1_ParamLimits

0x3501,	// (0x0007ccd8) main_cset6_slider_pane_t1

0xc857,	// (0x0008602e) main_cset6_slider_pane_t2_ParamLimits

0xc857,	// (0x0008602e) main_cset6_slider_pane_t2

0xc882,	// (0x00086059) main_cset6_slider_pane_t3_ParamLimits

0xc882,	// (0x00086059) main_cset6_slider_pane_t3

0xc8ad,	// (0x00086084) main_cset6_slider_pane_t4_ParamLimits

0xc8ad,	// (0x00086084) main_cset6_slider_pane_t4

0xc8d8,	// (0x000860af) main_cset6_slider_pane_t5_ParamLimits

0xc8d8,	// (0x000860af) main_cset6_slider_pane_t5

0x3542,	// (0x0007cd19) main_cset6_slider_pane_t7_ParamLimits

0x3542,	// (0x0007cd19) main_cset6_slider_pane_t7

0xc903,	// (0x000860da) main_cset6_slider_pane_t8_ParamLimits

0xc903,	// (0x000860da) main_cset6_slider_pane_t8

0xc927,	// (0x000860fe) main_cset6_slider_pane_t9_ParamLimits

0xc927,	// (0x000860fe) main_cset6_slider_pane_t9

0xc94b,	// (0x00086122) main_cset6_slider_pane_t10_ParamLimits

0xc94b,	// (0x00086122) main_cset6_slider_pane_t10

0xc96f,	// (0x00086146) main_cset6_slider_pane_t11_ParamLimits

0xc96f,	// (0x00086146) main_cset6_slider_pane_t11

0x3578,	// (0x0007cd4f) main_cset6_slider_pane_t14_ParamLimits

0x3578,	// (0x0007cd4f) main_cset6_slider_pane_t14

0x35b1,	// (0x0007cd88) main_cset6_slider_pane_t15_ParamLimits

0x35b1,	// (0x0007cd88) main_cset6_slider_pane_t15

0x000b,

0xfc03,	// (0x000893da) main_cset6_slider_pane_t_ParamLimits

0xfc03,	// (0x000893da) main_cset6_slider_pane_t

0x2cfb,	// (0x0007c4d2) cset_slider_pane_g1_copy1

0x2d04,	// (0x0007c4db) cset_slider_pane_g2_copy1

0x2d0d,	// (0x0007c4e4) cset_slider_pane_g3_copy1

0xdfaf,	// (0x00087786) bg_popup_sub_pane_cp011_copy1

0x2db0,	// (0x0007c587) main_cset_text_pane_g1_copy1

0x2db8,	// (0x0007c58f) main_cset_text_pane_t1_copy1

0x2dc6,	// (0x0007c59d) main_cset_text_pane_t2_copy1

0x2dd4,	// (0x0007c5ab) main_cset_text_pane_t3_copy1

0x2de2,	// (0x0007c5b9) main_cset_text_pane_t4_copy1

0x2df0,	// (0x0007c5c7) main_cset_text_pane_t5_copy1

0x2dfe,	// (0x0007c5d5) main_cset_text_pane_t6_copy1

0x2e0c,	// (0x0007c5e3) main_cset_text_pane_t7_copy1

0xc993,	// (0x0008616a) main_cset_text2_pane_t1_copy1

0xdfaf,	// (0x00087786) main_ncimui_pane

0x8ff6,	// (0x000827cd) popup_query_ncimui_window_ParamLimits

0x8ff6,	// (0x000827cd) popup_query_ncimui_window

0x4c1c,	// (0x0007e3f3) field_cale_ev2_pane_g4_ParamLimits

0x4c1c,	// (0x0007e3f3) field_cale_ev2_pane_g4

0xaafa,	// (0x000842d1) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaafa,	// (0x000842d1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x000890ce) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x000890ce) cell_video_dialer_keypad_pane_g

0xab12,	// (0x000842e9) cell_video_dialer_keypad_pane_t1

0xdfaf,	// (0x00087786) bg_popup_window_pane_cp012

0x0edc,	// (0x0007a6b3) heading_pane_cp06

0x36d9,	// (0x0007ceb0) ncim_query_content_pane

0xdfaf,	// (0x00087786) bg_popup_heading_pane_cp01

0x36e1,	// (0x0007ceb8) ncim_heading_pane_t1

0x36ef,	// (0x0007cec6) ncim_indicator_popup_pane

0x3701,	// (0x0007ced8) ncim_query_button_pane

0x3717,	// (0x0007ceee) ncim_query_content_pane_t1

0x3729,	// (0x0007cf00) ncim_query_content_pane_t2

0x0005,

0xfc42,	// (0x00089419) ncim_query_content_pane_t

0x3763,	// (0x0007cf3a) ncim_query_list_pane

0x3775,	// (0x0007cf4c) ncim_query_popup_pane

0x36ef,	// (0x0007cec6) ncim_indicator_popup_pane_ParamLimits

0xca88,	// (0x0008625f) ncim_query_content_pane_g1_ParamLimits

0xca88,	// (0x0008625f) ncim_query_content_pane_g1

0x3717,	// (0x0007ceee) ncim_query_content_pane_t1_ParamLimits

0x3729,	// (0x0007cf00) ncim_query_content_pane_t2_ParamLimits

0xca94,	// (0x0008626b) ncim_query_content_pane_t3_ParamLimits

0xca94,	// (0x0008626b) ncim_query_content_pane_t3

0xcab1,	// (0x00086288) ncim_query_content_pane_t4_ParamLimits

0xcab1,	// (0x00086288) ncim_query_content_pane_t4

0xcace,	// (0x000862a5) ncim_query_content_pane_t5_ParamLimits

0xcace,	// (0x000862a5) ncim_query_content_pane_t5

0x373b,	// (0x0007cf12) ncim_query_content_pane_t6_ParamLimits

0x373b,	// (0x0007cf12) ncim_query_content_pane_t6

0xfc42,	// (0x00089419) ncim_query_content_pane_t_ParamLimits

0x3763,	// (0x0007cf3a) ncim_query_list_pane_ParamLimits

0x3775,	// (0x0007cf4c) ncim_query_popup_pane_ParamLimits

0x3789,	// (0x0007cf60) wait_bar_pane_cp04

0xdfaf,	// (0x00087786) input_focus_pane_cp011

0x3791,	// (0x0007cf68) ncim_query_popup_pane_t1

0x379f,	// (0x0007cf76) ncim_list_query_list_pane_ParamLimits

0x379f,	// (0x0007cf76) ncim_list_query_list_pane

0xdfaf,	// (0x00087786) bg_button_pane_cp027

0x37b2,	// (0x0007cf89) ncim_query_button_pane_g1

0xdfaf,	// (0x00087786) list_highlight_pane_cp012

0x37bc,	// (0x0007cf93) ncim_list_query_list_pane_g1

0x37c4,	// (0x0007cf9b) ncim_list_query_list_pane_t1

0xb15c,	// (0x00084933) cam4_indicators_pane_g3_ParamLimits

0xb15c,	// (0x00084933) cam4_indicators_pane_g3

0xb25a,	// (0x00084a31) vid4_indicators_pane_g5_ParamLimits

0xb25a,	// (0x00084a31) vid4_indicators_pane_g5

0xc1ad,	// (0x00085984) vid4_progress_pane_g5_ParamLimits

0xc1ad,	// (0x00085984) vid4_progress_pane_g5

0xc9c2,	// (0x00086199) main_ncimui_pane_g1

0xca0c,	// (0x000861e3) ncimui_group_query_pane_ParamLimits

0xca0c,	// (0x000861e3) ncimui_group_query_pane

0xca4a,	// (0x00086221) ncimui_list_pane_ParamLimits

0xca4a,	// (0x00086221) ncimui_list_pane

0xca64,	// (0x0008623b) ncimui_text_pane_ParamLimits

0xca64,	// (0x0008623b) ncimui_text_pane

0xcaeb,	// (0x000862c2) ncimui_text_pane_t1_ParamLimits

0xcaeb,	// (0x000862c2) ncimui_text_pane_t1

0x37d2,	// (0x0007cfa9) ncimui_list_single_graphic_pane_ParamLimits

0x37d2,	// (0x0007cfa9) ncimui_list_single_graphic_pane

0xcb0a,	// (0x000862e1) ncimui_query_pane_ParamLimits

0xcb0a,	// (0x000862e1) ncimui_query_pane

0xdfaf,	// (0x00087786) list_highlight_pane_cp013

0x37e2,	// (0x0007cfb9) ncim_list_query_list_pane_t1_copy1

0x37bc,	// (0x0007cf93) ncim_list_single_graphic_pane_g1

0x37f0,	// (0x0007cfc7) ncim_query_button_pane_cp01

0x37f8,	// (0x0007cfcf) ncim_query_entry_pane_ParamLimits

0x37f8,	// (0x0007cfcf) ncim_query_entry_pane

0x3808,	// (0x0007cfdf) ncimui_query_pane_g1

0x3810,	// (0x0007cfe7) ncimui_query_pane_t1_ParamLimits

0x3810,	// (0x0007cfe7) ncimui_query_pane_t1

0xdfaf,	// (0x00087786) input_focus_pane_cp012

0x3791,	// (0x0007cf68) ncim_query_entry_pane_t1

0xe749,	// (0x00087f20) main_im_pane_ParamLimits

0x496a,	// (0x0007e141) main_mobtv_pane_ParamLimits

0x496a,	// (0x0007e141) main_mobtv_pane

0xc83f,	// (0x00086016) main_cset6_slider_pane_g18_ParamLimits

0xc83f,	// (0x00086016) main_cset6_slider_pane_g18

0xc84b,	// (0x00086022) main_cset6_slider_pane_g19_ParamLimits

0xc84b,	// (0x00086022) main_cset6_slider_pane_g19

0x2ac7,	// (0x0007c29e) bg_main_mobtv_pane_ParamLimits

0x2ac7,	// (0x0007c29e) bg_main_mobtv_pane

0xcb1a,	// (0x000862f1) main_mobtv_info_pane

0xcb25,	// (0x000862fc) main_mobtv_loading_pane_ParamLimits

0xcb25,	// (0x000862fc) main_mobtv_loading_pane

0x3834,	// (0x0007d00b) main_mobtv_pg_channel_list_pane

0x383e,	// (0x0007d015) main_mobtv_pg_hdr_pane

0xcb32,	// (0x00086309) main_mobtv_programe_curr_pane_ParamLimits

0xcb32,	// (0x00086309) main_mobtv_programe_curr_pane

0xcb3f,	// (0x00086316) main_mobtv_programe_next_pane_ParamLimits

0xcb3f,	// (0x00086316) main_mobtv_programe_next_pane

0x3847,	// (0x0007d01e) popup_mobtv_noti_window

0xec7a,	// (0x00088451) main_tv_pg_hdr_pane_g1

0x3851,	// (0x0007d028) main_tv_pg_hdr_pane_g2

0x3859,	// (0x0007d030) main_tv_pg_hdr_pane_g3

0x3861,	// (0x0007d038) main_tv_pg_hdr_pane_g4

0x3869,	// (0x0007d040) main_tv_pg_hdr_pane_g5

0x3873,	// (0x0007d04a) main_tv_pg_hdr_pane_g6

0x387d,	// (0x0007d054) main_tv_pg_hdr_pane_g7

0x3887,	// (0x0007d05e) main_tv_pg_hdr_pane_g8

0x3891,	// (0x0007d068) main_tv_pg_hdr_pane_g9

0x389b,	// (0x0007d072) main_tv_pg_hdr_pane_g10

0x38a5,	// (0x0007d07c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc4f,	// (0x00089426) main_tv_pg_hdr_pane_g

0x38af,	// (0x0007d086) main_tv_pg_hdr_pane_t1

0x38bd,	// (0x0007d094) main_tv_pg_hdr_pane_t2

0x38cb,	// (0x0007d0a2) main_tv_pg_hdr_pane_t3

0x38db,	// (0x0007d0b2) main_tv_pg_hdr_pane_t4

0x38eb,	// (0x0007d0c2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc66,	// (0x0008943d) main_tv_pg_hdr_pane_t

0x38fb,	// (0x0007d0d2) single_mobtv_pg_channel_pane_ParamLimits

0x38fb,	// (0x0007d0d2) single_mobtv_pg_channel_pane

0x390d,	// (0x0007d0e4) single_mobtv_pg_channel_table_pane

0x3916,	// (0x0007d0ed) single_mobtv_pg_channel_thumb_pane

0x391f,	// (0x0007d0f6) single_tv_pg_channel_pane_g1

0x3928,	// (0x0007d0ff) single_tv_pg_channel_pane_g2

0x0001,

0xfc71,	// (0x00089448) single_tv_pg_channel_pane_g

0xeeaa,	// (0x00088681) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeeaa,	// (0x00088681) bg_single_mobtv_pg_channel_thumb_pane

0x3931,	// (0x0007d108) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3931,	// (0x0007d108) single_mobtv_pg_channel_thumb_pane_g1

0x393f,	// (0x0007d116) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x393f,	// (0x0007d116) single_mobtv_pg_channel_thumb_pane_g2

0x394b,	// (0x0007d122) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x394b,	// (0x0007d122) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc76,	// (0x0008944d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc76,	// (0x0008944d) single_mobtv_pg_channel_thumb_pane_g

0x3957,	// (0x0007d12e) single_mobtv_pg_channel_thumb_pane_t1

0x3965,	// (0x0007d13c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc7d,	// (0x00089454) single_mobtv_pg_channel_thumb_pane_t

0xec7a,	// (0x00088451) bg_single_mobtv_pg_channel_table_pane_g1

0xec7a,	// (0x00088451) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00088f1a) bg_single_mobtv_pg_channel_table_pane_g

0x3973,	// (0x0007d14a) single_mobtv_pg_channel_table_pane_t1

0x3981,	// (0x0007d158) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc82,	// (0x00089459) single_mobtv_pg_channel_table_pane_t

0xcb54,	// (0x0008632b) main_mobtv_info_pane_g1_ParamLimits

0xcb54,	// (0x0008632b) main_mobtv_info_pane_g1

0xcb70,	// (0x00086347) main_mobtv_info_pane_t1_ParamLimits

0xcb70,	// (0x00086347) main_mobtv_info_pane_t1

0xcbe8,	// (0x000863bf) main_mobtv_info_pane_t2_ParamLimits

0xcbe8,	// (0x000863bf) main_mobtv_info_pane_t2

0x0002,

0xfc8c,	// (0x00089463) main_mobtv_info_pane_t_ParamLimits

0xfc8c,	// (0x00089463) main_mobtv_info_pane_t

0xcc7b,	// (0x00086452) wait_bar_pane_cp05

0xcc8d,	// (0x00086464) main_mobtv_loading_pane_g1_ParamLimits

0xcc8d,	// (0x00086464) main_mobtv_loading_pane_g1

0xcc99,	// (0x00086470) main_mobtv_loading_pane_g2_ParamLimits

0xcc99,	// (0x00086470) main_mobtv_loading_pane_g2

0xcca5,	// (0x0008647c) main_mobtv_loading_pane_g3_ParamLimits

0xcca5,	// (0x0008647c) main_mobtv_loading_pane_g3

0x0002,

0xfc93,	// (0x0008946a) main_mobtv_loading_pane_g_ParamLimits

0xfc93,	// (0x0008946a) main_mobtv_loading_pane_g

0x398f,	// (0x0007d166) main_mobtv_loading_pane_t1_ParamLimits

0x398f,	// (0x0007d166) main_mobtv_loading_pane_t1

0x39a7,	// (0x0007d17e) main_mobtv_loading_pane_t2_ParamLimits

0x39a7,	// (0x0007d17e) main_mobtv_loading_pane_t2

0x0001,

0xfc9a,	// (0x00089471) main_mobtv_loading_pane_t_ParamLimits

0xfc9a,	// (0x00089471) main_mobtv_loading_pane_t

0xccb3,	// (0x0008648a) wait_bar_pane_cp06_ParamLimits

0xccb3,	// (0x0008648a) wait_bar_pane_cp06

0x39cb,	// (0x0007d1a2) main_mobtv_programe_curr_pane_t1

0x39d9,	// (0x0007d1b0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc9f,	// (0x00089476) main_mobtv_programe_curr_pane_t

0x39e7,	// (0x0007d1be) main_mobtv_programe_next_pane_t1

0x39f5,	// (0x0007d1cc) main_mobtv_programe_next_pane_t2

0x3a03,	// (0x0007d1da) main_mobtv_programe_next_pane_t3

0x0002,

0xfca4,	// (0x0008947b) main_mobtv_programe_next_pane_t

0xdfaf,	// (0x00087786) bg_popup_mobtv_noti_window_pane

0x3a11,	// (0x0007d1e8) popup_mobtv_noti_window_g1

0x3a19,	// (0x0007d1f0) popup_mobtv_noti_window_t1

0x3a27,	// (0x0007d1fe) popup_mobtv_noti_window_t2

0x0001,

0xfcab,	// (0x00089482) popup_mobtv_noti_window_t

0xec7a,	// (0x00088451) bg_popup_mobtv_noti_window_pane_g1

0xdfaf,	// (0x00087786) sc_clock_pane

0xdfaf,	// (0x00087786) main_fs_bigclock_pane

0xc397,	// (0x00085b6e) blid2_tripm_pane_t4_ParamLimits

0xc397,	// (0x00085b6e) blid2_tripm_pane_t4

0xccbf,	// (0x00086496) sc_clock_pane_g1_ParamLimits

0xccbf,	// (0x00086496) sc_clock_pane_g1

0xcccd,	// (0x000864a4) sc_clock_pane_t1_ParamLimits

0xcccd,	// (0x000864a4) sc_clock_pane_t1

0xcce2,	// (0x000864b9) sc_clock_pane_t2_ParamLimits

0xcce2,	// (0x000864b9) sc_clock_pane_t2

0xccf4,	// (0x000864cb) sc_clock_pane_t3_ParamLimits

0xccf4,	// (0x000864cb) sc_clock_pane_t3

0x0004,

0xfcb0,	// (0x00089487) sc_clock_pane_t_ParamLimits

0xfcb0,	// (0x00089487) sc_clock_pane_t

0xd9a0,	// (0x00087177) main_fs_bigclock_indicator_pane_ParamLimits

0xd9a0,	// (0x00087177) main_fs_bigclock_indicator_pane

0xcd7b,	// (0x00086552) main_fs_bigclock_pane_g1_ParamLimits

0xcd7b,	// (0x00086552) main_fs_bigclock_pane_g1

0xd9ac,	// (0x00087183) main_fs_bigclock_pane_t1_ParamLimits

0xd9ac,	// (0x00087183) main_fs_bigclock_pane_t1

0xd9be,	// (0x00087195) main_fs_bigclock_pane_t2_ParamLimits

0xd9be,	// (0x00087195) main_fs_bigclock_pane_t2

0xd9d2,	// (0x000871a9) main_fs_bigclock_pane_t3_ParamLimits

0xd9d2,	// (0x000871a9) main_fs_bigclock_pane_t3

0x0002,

0xfeaf,	// (0x00089686) main_fs_bigclock_pane_t_ParamLimits

0xfeaf,	// (0x00089686) main_fs_bigclock_pane_t

0x4672,	// (0x0007de49) main_fs_bigclock_indicator_pane_g1

0x3709,	// (0x0007cee0) ncim_query_content_pane_g2_ParamLimits

0x3709,	// (0x0007cee0) ncim_query_content_pane_g2

0x0001,

0xfc3d,	// (0x00089414) ncim_query_content_pane_g_ParamLimits

0xfc3d,	// (0x00089414) ncim_query_content_pane_g

0xcd06,	// (0x000864dd) sc_clock_pane_t4_ParamLimits

0xcd06,	// (0x000864dd) sc_clock_pane_t4

0x496a,	// (0x0007e141) main_radioblah_pane

0x2a24,	// (0x0007c1fb) cell_call4_button_pane_t1_copy1_ParamLimits

0x2a24,	// (0x0007c1fb) cell_call4_button_pane_t1_copy1

0xc9cc,	// (0x000861a3) main_ncimui_pane_t1_ParamLimits

0xc9cc,	// (0x000861a3) main_ncimui_pane_t1

0xc9de,	// (0x000861b5) main_ncimui_pane_t2_ParamLimits

0xc9de,	// (0x000861b5) main_ncimui_pane_t2

0x0002,

0xfc36,	// (0x0008940d) main_ncimui_pane_t_ParamLimits

0xfc36,	// (0x0008940d) main_ncimui_pane_t

0x3b5f,	// (0x0007d336) main_radioblah_anim_pane_ParamLimits

0x3b5f,	// (0x0007d336) main_radioblah_anim_pane

0x3b70,	// (0x0007d347) main_radioblah_info_pane_ParamLimits

0x3b70,	// (0x0007d347) main_radioblah_info_pane

0x3b84,	// (0x0007d35b) main_radioblah_pane_t1_ParamLimits

0x3b84,	// (0x0007d35b) main_radioblah_pane_t1

0x3ba0,	// (0x0007d377) main_radioblah_pane_t2_ParamLimits

0x3ba0,	// (0x0007d377) main_radioblah_pane_t2

0x0003,

0xfcd1,	// (0x000894a8) main_radioblah_pane_t_ParamLimits

0xfcd1,	// (0x000894a8) main_radioblah_pane_t

0xcdcf,	// (0x000865a6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcdcf,	// (0x000865a6) main_radioblah_rocker_ctrl_pane

0x3be8,	// (0x0007d3bf) main_radioblah_info_pane_t1_ParamLimits

0x3be8,	// (0x0007d3bf) main_radioblah_info_pane_t1

0xce18,	// (0x000865ef) main_radioblah_info_pane_t2_ParamLimits

0xce18,	// (0x000865ef) main_radioblah_info_pane_t2

0x0003,

0xfcda,	// (0x000894b1) main_radioblah_info_pane_t_ParamLimits

0xfcda,	// (0x000894b1) main_radioblah_info_pane_t

0xec7a,	// (0x00088451) main_radioblah_rocker_ctrl_pane_g1

0xcec8,	// (0x0008669f) main_radioblah_rocker_ctrl_pane_g2

0xced0,	// (0x000866a7) main_radioblah_rocker_ctrl_pane_g3

0xced8,	// (0x000866af) main_radioblah_rocker_ctrl_pane_g4

0xcee0,	// (0x000866b7) main_radioblah_rocker_ctrl_pane_g5

0xcee8,	// (0x000866bf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfce3,	// (0x000894ba) main_radioblah_rocker_ctrl_pane_g

0xc993,	// (0x0008616a) main_cset_text2_pane_t1_copy1_ParamLimits

0xb095,	// (0x0008486c) cam4_image_uncrop_qvga_pane

0xb1d2,	// (0x000849a9) vid4_image_uncrop_qcif_pane

0xc529,	// (0x00085d00) cam6_image_uncrop_qvga_pane_ParamLimits

0xc529,	// (0x00085d00) cam6_image_uncrop_qvga_pane

0x333b,	// (0x0007cb12) vid6_image_uncrop_qcif_pane_ParamLimits

0x333b,	// (0x0007cb12) vid6_image_uncrop_qcif_pane

0xdfaf,	// (0x00087786) bg_popup_preview_window_pane_cp03

0x36bb,	// (0x0007ce92) list_cset_text2_pane

0x36c3,	// (0x0007ce9a) main_cset6_text2_pane_g1

0x36cb,	// (0x0007cea2) main_cset6_text2_pane_t1

0xcef0,	// (0x000866c7) list_cset_text2_pane_t1_ParamLimits

0xcef0,	// (0x000866c7) list_cset_text2_pane_t1

0x496a,	// (0x0007e141) main_radioblah_pane_ParamLimits

0xcc67,	// (0x0008643e) main_mobtv_info_pane_t3_ParamLimits

0xcc67,	// (0x0008643e) main_mobtv_info_pane_t3

0xcdbd,	// (0x00086594) main_radioblah_pane_g1

0xcde8,	// (0x000865bf) main_radioblah_info_pane_g1

0xce6d,	// (0x00086644) main_radioblah_info_pane_t3_ParamLimits

0xce6d,	// (0x00086644) main_radioblah_info_pane_t3

0x7bb2,	// (0x00081389) highlight_cell_cale_month_pane_ParamLimits

0x7bb2,	// (0x00081389) highlight_cell_cale_month_pane

0xdfaf,	// (0x00087786) main_phob_fisheye_pane

0xef8c,	// (0x00088763) scroll_pane_cp0031_ParamLimits

0xef8c,	// (0x00088763) scroll_pane_cp0031

0x344d,	// (0x0007cc24) wait_bar_pane_cp08_ParamLimits

0xc73b,	// (0x00085f12) cset_list_set_pane_copy1_ParamLimits

0x3c22,	// (0x0007d3f9) highlight_cell_cale_month_pane_g1

0xcf09,	// (0x000866e0) highlight_cell_cale_month_pane_t1

0x3080,	// (0x0007c857) list_gen_pane_cp01

0x2c22,	// (0x0007c3f9) scroll_pane_01

0xcf17,	// (0x000866ee) list_single_double_fisheye_pane

0x3c2a,	// (0x0007d401) list_double_fisheye_pane_g1_ParamLimits

0x3c2a,	// (0x0007d401) list_double_fisheye_pane_g1

0x3c36,	// (0x0007d40d) list_double_fisheye_pane_g2_ParamLimits

0x3c36,	// (0x0007d40d) list_double_fisheye_pane_g2

0xcf20,	// (0x000866f7) list_double_fisheye_pane_g3_ParamLimits

0xcf20,	// (0x000866f7) list_double_fisheye_pane_g3

0x0004,

0xfcf0,	// (0x000894c7) list_double_fisheye_pane_g_ParamLimits

0xfcf0,	// (0x000894c7) list_double_fisheye_pane_g

0xcf2c,	// (0x00086703) list_double_fisheye_pane_t1_ParamLimits

0xcf2c,	// (0x00086703) list_double_fisheye_pane_t1

0xcf47,	// (0x0008671e) list_double_fisheye_pane_t2_ParamLimits

0xcf47,	// (0x0008671e) list_double_fisheye_pane_t2

0x0001,

0xfcfb,	// (0x000894d2) list_double_fisheye_pane_t_ParamLimits

0xfcfb,	// (0x000894d2) list_double_fisheye_pane_t

0xdfaf,	// (0x00087786) main_call5_pane

0xcd2c,	// (0x00086503) sc_swipe_pane_ParamLimits

0xcd2c,	// (0x00086503) sc_swipe_pane

0xcf75,	// (0x0008674c) call5_image_pane_ParamLimits

0xcf75,	// (0x0008674c) call5_image_pane

0xcf87,	// (0x0008675e) call5_swipe_1_pane_ParamLimits

0xcf87,	// (0x0008675e) call5_swipe_1_pane

0xcf93,	// (0x0008676a) call5_swipe_2_pane_ParamLimits

0xcf93,	// (0x0008676a) call5_swipe_2_pane

0xcfaf,	// (0x00086786) popup_call5_audio_first_window_ParamLimits

0xcfaf,	// (0x00086786) popup_call5_audio_first_window

0xeeaa,	// (0x00088681) call5_swipe_1_pane_g1_ParamLimits

0xeeaa,	// (0x00088681) call5_swipe_1_pane_g1

0x3c67,	// (0x0007d43e) call5_swipe_1_pane_g2_ParamLimits

0x3c67,	// (0x0007d43e) call5_swipe_1_pane_g2

0x0001,

0xfd00,	// (0x000894d7) call5_swipe_1_pane_g_ParamLimits

0xfd00,	// (0x000894d7) call5_swipe_1_pane_g

0x3c73,	// (0x0007d44a) call5_swipe_1_pane_t1_ParamLimits

0x3c73,	// (0x0007d44a) call5_swipe_1_pane_t1

0xeeaa,	// (0x00088681) call5_swipe_2_pane_g1_ParamLimits

0xeeaa,	// (0x00088681) call5_swipe_2_pane_g1

0x3c88,	// (0x0007d45f) call5_swipe_2_pane_g2_ParamLimits

0x3c88,	// (0x0007d45f) call5_swipe_2_pane_g2

0x0001,

0xfd05,	// (0x000894dc) call5_swipe_2_pane_g_ParamLimits

0xfd05,	// (0x000894dc) call5_swipe_2_pane_g

0x3c94,	// (0x0007d46b) call5_swipe_2_pane_t1_ParamLimits

0x3c94,	// (0x0007d46b) call5_swipe_2_pane_t1

0x3ca9,	// (0x0007d480) sc_swipe_pane_g1_ParamLimits

0x3ca9,	// (0x0007d480) sc_swipe_pane_g1

0x3cb6,	// (0x0007d48d) sc_swipe_pane_g2_ParamLimits

0x3cb6,	// (0x0007d48d) sc_swipe_pane_g2

0x0001,

0xfd0a,	// (0x000894e1) sc_swipe_pane_g_ParamLimits

0xfd0a,	// (0x000894e1) sc_swipe_pane_g

0x3cc2,	// (0x0007d499) sc_swipe_pane_t1_ParamLimits

0x3cc2,	// (0x0007d499) sc_swipe_pane_t1

0xdfaf,	// (0x00087786) main_cmail_launcher_pane

0xcfbf,	// (0x00086796) aid_size_cell_cmail_l_ParamLimits

0xcfbf,	// (0x00086796) aid_size_cell_cmail_l

0xcfcf,	// (0x000867a6) grid_cmail_l_pane_ParamLimits

0xcfcf,	// (0x000867a6) grid_cmail_l_pane

0xcfdf,	// (0x000867b6) cell_cmail_l_pane_ParamLimits

0xcfdf,	// (0x000867b6) cell_cmail_l_pane

0xcff5,	// (0x000867cc) cell_cmail_l_pane_g1_ParamLimits

0xcff5,	// (0x000867cc) cell_cmail_l_pane_g1

0xd001,	// (0x000867d8) cell_cmail_l_pane_t1_ParamLimits

0xd001,	// (0x000867d8) cell_cmail_l_pane_t1

0x3cd7,	// (0x0007d4ae) cell_cmail_l_pane_t2_ParamLimits

0x3cd7,	// (0x0007d4ae) cell_cmail_l_pane_t2

0x0001,

0xfd0f,	// (0x000894e6) cell_cmail_l_pane_t_ParamLimits

0xfd0f,	// (0x000894e6) cell_cmail_l_pane_t

0x496a,	// (0x0007e141) grid_highlight_pane_cp018_ParamLimits

0x496a,	// (0x0007e141) grid_highlight_pane_cp018

0x5fb9,	// (0x0007f790) main2_pane_ParamLimits

0x5fb9,	// (0x0007f790) main2_pane

0xe7f4,	// (0x00087fcb) popup_sp_fs_action_menu_bg_pane_g1

0xe7fc,	// (0x00087fd3) popup_sp_fs_action_menu_bg_pane_g2

0xe804,	// (0x00087fdb) popup_sp_fs_action_menu_bg_pane_g3

0xe80c,	// (0x00087fe3) popup_sp_fs_action_menu_bg_pane_g4

0xe814,	// (0x00087feb) popup_sp_fs_action_menu_bg_pane_g5

0xe81c,	// (0x00087ff3) popup_sp_fs_action_menu_bg_pane_g6

0xe824,	// (0x00087ffb) popup_sp_fs_action_menu_bg_pane_g7

0xe82c,	// (0x00088003) popup_sp_fs_action_menu_bg_pane_g8

0xe834,	// (0x0008800b) popup_sp_fs_action_menu_bg_pane_g9

0xe83c,	// (0x00088013) popup_sp_fs_action_menu_bg_pane_g10

0xe83c,	// (0x00088013) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x000889c6) popup_sp_fs_action_menu_bg_pane_g

0x0971,	// (0x0007a148) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t3_g3_g1

0x097d,	// (0x0007a154) list_medium_line_x2_t3_g3_g2_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x2_t3_g3_g2

0x0989,	// (0x0007a160) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0989,	// (0x0007a160) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00088a76) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00088a76) list_medium_line_x2_t3_g3_g

0x0995,	// (0x0007a16c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0995,	// (0x0007a16c) list_medium_line_x2_t3_g3_t1

0x6e84,	// (0x0008065b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6e84,	// (0x0008065b) list_medium_line_x2_t3_g3_t2

0x09aa,	// (0x0007a181) list_medium_line_x2_t3_g3_t3_ParamLimits

0x09aa,	// (0x0007a181) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00088a7d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00088a7d) list_medium_line_x2_t3_g3_t

0x0971,	// (0x0007a148) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t3_g2_g1

0x0989,	// (0x0007a160) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0989,	// (0x0007a160) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00088a84) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00088a84) list_medium_line_x2_t3_g2_g

0x09bf,	// (0x0007a196) list_medium_line_x2_t3_g2_t1_ParamLimits

0x09bf,	// (0x0007a196) list_medium_line_x2_t3_g2_t1

0x09d5,	// (0x0007a1ac) list_medium_line_x2_t3_g2_t2_ParamLimits

0x09d5,	// (0x0007a1ac) list_medium_line_x2_t3_g2_t2

0x09e7,	// (0x0007a1be) list_medium_line_x2_t3_g2_t3_ParamLimits

0x09e7,	// (0x0007a1be) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00088a89) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00088a89) list_medium_line_x2_t3_g2_t

0x0971,	// (0x0007a148) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t4_g4_g1

0x0a05,	// (0x0007a1dc) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0a05,	// (0x0007a1dc) list_medium_line_x2_t4_g4_g2

0x097d,	// (0x0007a154) list_medium_line_x2_t4_g4_g3_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x2_t4_g4_g3

0x0a11,	// (0x0007a1e8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0a11,	// (0x0007a1e8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00088a90) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00088a90) list_medium_line_x2_t4_g4_g

0x6e96,	// (0x0008066d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6e96,	// (0x0008066d) list_medium_line_x2_t4_g4_t1

0x6eb0,	// (0x00080687) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6eb0,	// (0x00080687) list_medium_line_x2_t4_g4_t2

0x6ec6,	// (0x0008069d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6ec6,	// (0x0008069d) list_medium_line_x2_t4_g4_t3

0x0a1d,	// (0x0007a1f4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0a1d,	// (0x0007a1f4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00088a99) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00088a99) list_medium_line_x2_t4_g4_t

0x0971,	// (0x0007a148) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t2_g4_g1

0x0a05,	// (0x0007a1dc) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0a05,	// (0x0007a1dc) list_medium_line_x2_t2_g4_g2

0x097d,	// (0x0007a154) list_medium_line_x2_t2_g4_g3_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x2_t2_g4_g3

0x0989,	// (0x0007a160) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0989,	// (0x0007a160) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00088b00) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00088b00) list_medium_line_x2_t2_g4_g

0x0a91,	// (0x0007a268) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0a91,	// (0x0007a268) list_medium_line_x2_t2_g4_t1

0x09aa,	// (0x0007a181) list_medium_line_x2_t2_g4_t2_ParamLimits

0x09aa,	// (0x0007a181) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00088b09) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00088b09) list_medium_line_x2_t2_g4_t

0x0971,	// (0x0007a148) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t2_g3_g1

0x097d,	// (0x0007a154) list_medium_line_x2_t2_g3_g2_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x2_t2_g3_g2

0x0989,	// (0x0007a160) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0989,	// (0x0007a160) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00088a76) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00088a76) list_medium_line_x2_t2_g3_g

0x0aa6,	// (0x0007a27d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0aa6,	// (0x0007a27d) list_medium_line_x2_t2_g3_t1

0x09aa,	// (0x0007a181) list_medium_line_x2_t2_g3_t2_ParamLimits

0x09aa,	// (0x0007a181) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00088b0e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00088b0e) list_medium_line_x2_t2_g3_t

0x7dd0,	// (0x000815a7) main_sp_fs_list_pane_ParamLimits

0x7dd0,	// (0x000815a7) main_sp_fs_list_pane

0x7ddc,	// (0x000815b3) sp_fs_scroll_pane_ParamLimits

0x7ddc,	// (0x000815b3) sp_fs_scroll_pane

0x7de8,	// (0x000815bf) list_medium_line_x2_t3_t1

0x7df8,	// (0x000815cf) list_medium_line_x2_t3_t2

0x0c7f,	// (0x0007a456) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00088b59) list_medium_line_x2_t3_t

0x7e06,	// (0x000815dd) list_medium_line_x3_t4_t1

0x7e16,	// (0x000815ed) list_medium_line_x3_t4_t2

0x0c8d,	// (0x0007a464) list_medium_line_x3_t4_t3

0x0c7f,	// (0x0007a456) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00088b60) list_medium_line_x3_t4_t

0x7e24,	// (0x000815fb) list_medium_line_x4_t5_t1

0x7e34,	// (0x0008160b) list_medium_line_x4_t5_t2

0x0c8d,	// (0x0007a464) list_medium_line_x4_t5_t3

0x0c9b,	// (0x0007a472) list_medium_line_x4_t5_t4

0x0c7f,	// (0x0007a456) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00088b69) list_medium_line_x4_t5_t

0x0971,	// (0x0007a148) list_medium_line_t4_g4_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_t4_g4_g1

0x0a11,	// (0x0007a1e8) list_medium_line_t4_g4_g2_ParamLimits

0x0a11,	// (0x0007a1e8) list_medium_line_t4_g4_g2

0x0ca9,	// (0x0007a480) list_medium_line_t4_g4_g3_ParamLimits

0x0ca9,	// (0x0007a480) list_medium_line_t4_g4_g3

0x0989,	// (0x0007a160) list_medium_line_t4_g4_g4_ParamLimits

0x0989,	// (0x0007a160) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00088b74) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00088b74) list_medium_line_t4_g4_g

0x0cb5,	// (0x0007a48c) list_medium_line_t4_g4_t1_ParamLimits

0x0cb5,	// (0x0007a48c) list_medium_line_t4_g4_t1

0x0cca,	// (0x0007a4a1) list_medium_line_t4_g4_t2_ParamLimits

0x0cca,	// (0x0007a4a1) list_medium_line_t4_g4_t2

0x0ce0,	// (0x0007a4b7) list_medium_line_t4_g4_t3_ParamLimits

0x0ce0,	// (0x0007a4b7) list_medium_line_t4_g4_t3

0x09aa,	// (0x0007a181) list_medium_line_t4_g4_t4_ParamLimits

0x09aa,	// (0x0007a181) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00088b7d) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00088b7d) list_medium_line_t4_g4_t

0x7f55,	// (0x0008172c) chi_dic_find_pane_g1

0x8fbf,	// (0x00082796) main_tport_pane

0x2d41,	// (0x0007c518) list_medium_line_plain_t1

0x2d57,	// (0x0007c52e) list_medium_line_t2_g2_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_t2_g2_g1

0x2d63,	// (0x0007c53a) list_medium_line_t2_g2_g2_ParamLimits

0x2d63,	// (0x0007c53a) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00089230) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00089230) list_medium_line_t2_g2_g

0xbc4e,	// (0x00085425) list_medium_line_t2_g2_t1_ParamLimits

0xbc4e,	// (0x00085425) list_medium_line_t2_g2_t1

0xbc65,	// (0x0008543c) list_medium_line_t2_g2_t2_ParamLimits

0xbc65,	// (0x0008543c) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00089235) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00089235) list_medium_line_t2_g2_t

0x3089,	// (0x0007c860) aid_sp_fs_list_icon_a_sm

0x4fb7,	// (0x0007e78e) aid_sp_fs_list_icon_d

0x3091,	// (0x0007c868) aid_sp_fs_text_primary

0x309a,	// (0x0007c871) aid_sp_fs_text_secondary

0x30a3,	// (0x0007c87a) list_medium_line

0x30a3,	// (0x0007c87a) list_medium_line_g2

0x30a3,	// (0x0007c87a) list_medium_line_g3

0x30a3,	// (0x0007c87a) list_medium_line_plain

0x30a3,	// (0x0007c87a) list_medium_line_plain_t2

0x30a3,	// (0x0007c87a) list_medium_line_plain_t3

0x30a3,	// (0x0007c87a) list_medium_line_right_icon

0x30a3,	// (0x0007c87a) list_medium_line_right_iconx2

0x30a3,	// (0x0007c87a) list_medium_line_t2

0x30a3,	// (0x0007c87a) list_medium_line_t2_g2

0x30a3,	// (0x0007c87a) list_medium_line_t2_g3

0x30a3,	// (0x0007c87a) list_medium_line_t2_right_icon

0x30a3,	// (0x0007c87a) list_medium_line_t2_right_iconx2

0x30a3,	// (0x0007c87a) list_medium_line_t3

0x30a3,	// (0x0007c87a) list_medium_line_t3_g2

0x30a3,	// (0x0007c87a) list_medium_line_t3_g3

0x30a3,	// (0x0007c87a) list_medium_line_t3_right_iconx2

0x30ac,	// (0x0007c883) list_medium_line_t4_g4

0x30b5,	// (0x0007c88c) list_medium_line_x2

0x30b5,	// (0x0007c88c) list_medium_line_x2_t2_g2

0x30b5,	// (0x0007c88c) list_medium_line_x2_t2_g3

0x30b5,	// (0x0007c88c) list_medium_line_x2_t2_g4

0x30b5,	// (0x0007c88c) list_medium_line_x2_t3

0x30b5,	// (0x0007c88c) list_medium_line_x2_t3_g2

0x30b5,	// (0x0007c88c) list_medium_line_x2_t3_g3

0x30b5,	// (0x0007c88c) list_medium_line_x2_t3_g4

0x30b5,	// (0x0007c88c) list_medium_line_x2_t4_g2

0x30b5,	// (0x0007c88c) list_medium_line_x2_t4_g4

0x30be,	// (0x0007c895) list_medium_line_x3

0x30be,	// (0x0007c895) list_medium_line_x3_t4

0x30be,	// (0x0007c895) list_medium_line_x3_t4_g4

0x30ac,	// (0x0007c883) list_medium_line_x4_t4

0x30ac,	// (0x0007c883) list_medium_line_x4_t4_g7

0x30ac,	// (0x0007c883) list_medium_line_x4_t5

0x30c7,	// (0x0007c89e) list_single_fs_dyc_pane_ParamLimits

0x30c7,	// (0x0007c89e) list_single_fs_dyc_pane

0x0971,	// (0x0007a148) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x4_t4_g7_g1

0x35ea,	// (0x0007cdc1) list_medium_line_x4_t4_g7_g2_ParamLimits

0x35ea,	// (0x0007cdc1) list_medium_line_x4_t4_g7_g2

0x35f6,	// (0x0007cdcd) list_medium_line_x4_t4_g7_g3_ParamLimits

0x35f6,	// (0x0007cdcd) list_medium_line_x4_t4_g7_g3

0x3605,	// (0x0007cddc) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3605,	// (0x0007cddc) list_medium_line_x4_t4_g7_g4

0x3611,	// (0x0007cde8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3611,	// (0x0007cde8) list_medium_line_x4_t4_g7_g5

0x3620,	// (0x0007cdf7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3620,	// (0x0007cdf7) list_medium_line_x4_t4_g7_g6

0x362f,	// (0x0007ce06) list_medium_line_x4_t4_g7_g7_ParamLimits

0x362f,	// (0x0007ce06) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc1c,	// (0x000893f3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc1c,	// (0x000893f3) list_medium_line_x4_t4_g7_g

0x363b,	// (0x0007ce12) list_medium_line_x4_t4_g7_t1_ParamLimits

0x363b,	// (0x0007ce12) list_medium_line_x4_t4_g7_t1

0x3650,	// (0x0007ce27) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3650,	// (0x0007ce27) list_medium_line_x4_t4_g7_t2

0x3665,	// (0x0007ce3c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3665,	// (0x0007ce3c) list_medium_line_x4_t4_g7_t3

0x367a,	// (0x0007ce51) list_medium_line_x4_t4_g7_t4_ParamLimits

0x367a,	// (0x0007ce51) list_medium_line_x4_t4_g7_t4

0x368c,	// (0x0007ce63) list_medium_line_x4_t4_g7_t5_ParamLimits

0x368c,	// (0x0007ce63) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc2b,	// (0x00089402) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc2b,	// (0x00089402) list_medium_line_x4_t4_g7_t

0x369e,	// (0x0007ce75) list_single_dyc_row_pane_ParamLimits

0x369e,	// (0x0007ce75) list_single_dyc_row_pane

0xcf69,	// (0x00086740) call5_gesture_pane_ParamLimits

0xcf69,	// (0x00086740) call5_gesture_pane

0xcf9f,	// (0x00086776) call5_windows_pane_ParamLimits

0xcf9f,	// (0x00086776) call5_windows_pane

0xd017,	// (0x000867ee) call5_swipe_1_pane_cp_ParamLimits

0xd017,	// (0x000867ee) call5_swipe_1_pane_cp

0xd023,	// (0x000867fa) call5_swipe_2_pane_cp_ParamLimits

0xd023,	// (0x000867fa) call5_swipe_2_pane_cp

0x112a,	// (0x0007a901) call5_image_pane_cp

0xd02f,	// (0x00086806) popup_call5_audio_first_window_cp_ParamLimits

0xd02f,	// (0x00086806) popup_call5_audio_first_window_cp

0x3ca9,	// (0x0007d480) call5_swipe_1_pane_g1_cp_ParamLimits

0x3ca9,	// (0x0007d480) call5_swipe_1_pane_g1_cp

0x3ce9,	// (0x0007d4c0) call5_swipe_1_pane_g2_cp

0x3cc2,	// (0x0007d499) call5_swipe_1_pane_t1_cp_ParamLimits

0x3cc2,	// (0x0007d499) call5_swipe_1_pane_t1_cp

0x3ca9,	// (0x0007d480) call5_swipe_2_pane_g1_cp_ParamLimits

0x3ca9,	// (0x0007d480) call5_swipe_2_pane_g1_cp

0x3cf1,	// (0x0007d4c8) call5_swipe_2_pane_g2_cp

0x3cf9,	// (0x0007d4d0) call5_swipe_2_pane_t1_cp_ParamLimits

0x3cf9,	// (0x0007d4d0) call5_swipe_2_pane_t1_cp

0x496a,	// (0x0007e141) main_sp_fs_email_pane

0x3d0e,	// (0x0007d4e5) main_sp_fs_listscroll_pane_te

0x3d17,	// (0x0007d4ee) popup_sp_fs_action_menu_pane_ParamLimits

0x3d17,	// (0x0007d4ee) popup_sp_fs_action_menu_pane

0xec7a,	// (0x00088451) bg_sp_fs_ctrlbar_pane_g1

0x3d5d,	// (0x0007d534) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d66,	// (0x0007d53d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3d6f,	// (0x0007d546) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xec7a,	// (0x00088451) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd14,	// (0x000894eb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x9993,	// (0x0008316a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x9993,	// (0x0008316a) bg_sp_fs_ctrlbar_ddmenu_pane

0x3d78,	// (0x0007d54f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3d78,	// (0x0007d54f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d84,	// (0x0007d55b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3d84,	// (0x0007d55b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd1d,	// (0x000894f4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd1d,	// (0x000894f4) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3d90,	// (0x0007d567) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3d90,	// (0x0007d567) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3daa,	// (0x0007d581) list_medium_line_t2_right_icon_g1

0xd03d,	// (0x00086814) list_medium_line_t2_right_icon_t1

0xd04d,	// (0x00086824) list_medium_line_t2_right_icon_t2

0x0001,

0xfd22,	// (0x000894f9) list_medium_line_t2_right_icon_t

0x49dd,	// (0x0007e1b4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x49dd,	// (0x0007e1b4) bg_sp_fs_ctrlbar_pane

0xd0b2,	// (0x00086889) main_sp_fs_ctrlbar_button_pane_cp01

0xd0ba,	// (0x00086891) main_sp_fs_ctrlbar_ddmenu_pane

0x3dec,	// (0x0007d5c3) main_sp_fs_ctrlbar_pane_g1

0x3df8,	// (0x0007d5cf) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd27,	// (0x000894fe) main_sp_fs_ctrlbar_pane_g

0x3e04,	// (0x0007d5db) main_sp_fs_ctrlbar_pane_t1

0xd0c4,	// (0x0008689b) main_sp_fs_ctrlbar_pane

0xd0e0,	// (0x000868b7) main_sp_fs_listscroll_pane_te_cp01

0xd0f1,	// (0x000868c8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd0f1,	// (0x000868c8) popup_sp_fs_action_menu_pane_cp01

0x496a,	// (0x0007e141) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x496a,	// (0x0007e141) bg_sp_fs_highlight_list_pane_cp01

0x3e19,	// (0x0007d5f0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3e19,	// (0x0007d5f0) sp_fs_action_menu_list_gene_pane_g1

0x3e28,	// (0x0007d5ff) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3e28,	// (0x0007d5ff) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd2c,	// (0x00089503) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd2c,	// (0x00089503) sp_fs_action_menu_list_gene_pane_g

0x3e35,	// (0x0007d60c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3e35,	// (0x0007d60c) sp_fs_action_menu_list_gene_pane_t1

0x3e4d,	// (0x0007d624) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3e4d,	// (0x0007d624) sp_fs_action_menu_list_gene_pane

0x3e70,	// (0x0007d647) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3e70,	// (0x0007d647) popup_sp_fs_action_menu_bg_pane

0x3e7e,	// (0x0007d655) sp_fs_action_menu_list_pane_ParamLimits

0x3e7e,	// (0x0007d655) sp_fs_action_menu_list_pane

0x3ea2,	// (0x0007d679) sp_fs_scroll_pane_cp01_ParamLimits

0x3ea2,	// (0x0007d679) sp_fs_scroll_pane_cp01

0xd10b,	// (0x000868e2) list_medium_line_plain_t2_t1

0xd11b,	// (0x000868f2) list_medium_line_plain_t2_t2

0x0001,

0xfd31,	// (0x00089508) list_medium_line_plain_t2_t

0xd129,	// (0x00086900) list_medium_line_plain_t3_t1

0xd139,	// (0x00086910) list_medium_line_plain_t3_t2

0xd147,	// (0x0008691e) list_medium_line_plain_t3_t3

0x0002,

0xfd36,	// (0x0008950d) list_medium_line_plain_t3_t

0x0971,	// (0x0007a148) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t2_g2_g1

0x0989,	// (0x0007a160) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0989,	// (0x0007a160) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00088a84) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00088a84) list_medium_line_x2_t2_g2_g

0x0cb5,	// (0x0007a48c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0cb5,	// (0x0007a48c) list_medium_line_x2_t2_g2_t1

0x09aa,	// (0x0007a181) list_medium_line_x2_t2_g2_t2_ParamLimits

0x09aa,	// (0x0007a181) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd3d,	// (0x00089514) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd3d,	// (0x00089514) list_medium_line_x2_t2_g2_t

0x0971,	// (0x0007a148) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t4_g2_g1

0x3ec8,	// (0x0007d69f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3ec8,	// (0x0007d69f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd42,	// (0x00089519) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd42,	// (0x00089519) list_medium_line_x2_t4_g2_g

0xd155,	// (0x0008692c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd155,	// (0x0008692c) list_medium_line_x2_t4_g2_t1

0xd16f,	// (0x00086946) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd16f,	// (0x00086946) list_medium_line_x2_t4_g2_t2

0xd185,	// (0x0008695c) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd185,	// (0x0008695c) list_medium_line_x2_t4_g2_t3

0x09aa,	// (0x0007a181) list_medium_line_x2_t4_g2_t4_ParamLimits

0x09aa,	// (0x0007a181) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd47,	// (0x0008951e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd47,	// (0x0008951e) list_medium_line_x2_t4_g2_t

0x3eda,	// (0x0007d6b1) list_medium_line_t3_right_iconx2_g1

0x3daa,	// (0x0007d581) list_medium_line_t3_right_iconx2_g2

0xd19a,	// (0x00086971) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd50,	// (0x00089527) list_medium_line_t3_right_iconx2_g

0xd1a2,	// (0x00086979) list_medium_line_t3_right_iconx2_t1

0xd1b2,	// (0x00086989) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd57,	// (0x0008952e) list_medium_line_t3_right_iconx2_t

0x0971,	// (0x0007a148) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x3_t4_g4_g1

0x097d,	// (0x0007a154) list_medium_line_x3_t4_g4_g2_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x3_t4_g4_g2

0x0a11,	// (0x0007a1e8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0a11,	// (0x0007a1e8) list_medium_line_x3_t4_g4_g3

0x3ee2,	// (0x0007d6b9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3ee2,	// (0x0007d6b9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5c,	// (0x00089533) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5c,	// (0x00089533) list_medium_line_x3_t4_g4_g

0xd1c0,	// (0x00086997) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd1c0,	// (0x00086997) list_medium_line_x3_t4_g4_t1

0xd1d7,	// (0x000869ae) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd1d7,	// (0x000869ae) list_medium_line_x3_t4_g4_t2

0x3eee,	// (0x0007d6c5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3eee,	// (0x0007d6c5) list_medium_line_x3_t4_g4_t3

0x3f03,	// (0x0007d6da) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3f03,	// (0x0007d6da) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd65,	// (0x0008953c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd65,	// (0x0008953c) list_medium_line_x3_t4_g4_t

0xd1ec,	// (0x000869c3) list_single_dyc_row_text_pane_t1_ParamLimits

0xd1ec,	// (0x000869c3) list_single_dyc_row_text_pane_t1

0xd22f,	// (0x00086a06) list_single_dyc_row_text_pane_t2_ParamLimits

0xd22f,	// (0x00086a06) list_single_dyc_row_text_pane_t2

0x3f20,	// (0x0007d6f7) list_single_dyc_row_text_pane_t3_ParamLimits

0x3f20,	// (0x0007d6f7) list_single_dyc_row_text_pane_t3

0x0002,

0xfd6e,	// (0x00089545) list_single_dyc_row_text_pane_t_ParamLimits

0xfd6e,	// (0x00089545) list_single_dyc_row_text_pane_t

0x3f32,	// (0x0007d709) list_single_dyc_row_pane_g1_ParamLimits

0x3f32,	// (0x0007d709) list_single_dyc_row_pane_g1

0x3f3e,	// (0x0007d715) list_single_dyc_row_pane_g2_ParamLimits

0x3f3e,	// (0x0007d715) list_single_dyc_row_pane_g2

0x3f4a,	// (0x0007d721) list_single_dyc_row_pane_g3_ParamLimits

0x3f4a,	// (0x0007d721) list_single_dyc_row_pane_g3

0x3f56,	// (0x0007d72d) list_single_dyc_row_pane_g4_ParamLimits

0x3f56,	// (0x0007d72d) list_single_dyc_row_pane_g4

0x0003,

0xfd75,	// (0x0008954c) list_single_dyc_row_pane_g_ParamLimits

0xfd75,	// (0x0008954c) list_single_dyc_row_pane_g

0x3f62,	// (0x0007d739) list_single_dyc_row_text_pane_ParamLimits

0x3f62,	// (0x0007d739) list_single_dyc_row_text_pane

0xdfaf,	// (0x00087786) bg_sp_fs_scroll_pane

0x3f81,	// (0x0007d758) thumb_sp_fs_scroll_pane

0x2d57,	// (0x0007c52e) list_medium_line_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_g1

0x3f8a,	// (0x0007d761) list_medium_line_t1_ParamLimits

0x3f8a,	// (0x0007d761) list_medium_line_t1

0x0971,	// (0x0007a148) list_medium_line_x2_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_g1

0x097d,	// (0x0007a154) list_medium_line_x2_g2_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x2_g2

0x0001,

0xfd7e,	// (0x00089555) list_medium_line_x2_g_ParamLimits

0xfd7e,	// (0x00089555) list_medium_line_x2_g

0x3f9f,	// (0x0007d776) list_medium_line_x2_t1_ParamLimits

0x3f9f,	// (0x0007d776) list_medium_line_x2_t1

0x0971,	// (0x0007a148) list_medium_line_x3_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x3_g1

0x097d,	// (0x0007a154) list_medium_line_x3_g2_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x3_g2

0x0001,

0xfd7e,	// (0x00089555) list_medium_line_x3_g_ParamLimits

0xfd7e,	// (0x00089555) list_medium_line_x3_g

0x3f9f,	// (0x0007d776) list_medium_line_x3_t1_ParamLimits

0x3f9f,	// (0x0007d776) list_medium_line_x3_t1

0x3fb5,	// (0x0007d78c) thumb_sp_fs_scroll_pane_g1

0x3fbe,	// (0x0007d795) thumb_sp_fs_scroll_pane_g2

0x3fc7,	// (0x0007d79e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x0008955a) thumb_sp_fs_scroll_pane_g

0x3fb5,	// (0x0007d78c) bg_sp_fs_scroll_pane_g1

0x3fbe,	// (0x0007d795) bg_sp_fs_scroll_pane_g2

0x3fc7,	// (0x0007d79e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd83,	// (0x0008955a) bg_sp_fs_scroll_pane_g

0x0971,	// (0x0007a148) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0971,	// (0x0007a148) list_medium_line_x2_t3_g4_g1

0x0a05,	// (0x0007a1dc) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0a05,	// (0x0007a1dc) list_medium_line_x2_t3_g4_g2

0x097d,	// (0x0007a154) list_medium_line_x2_t3_g4_g3_ParamLimits

0x097d,	// (0x0007a154) list_medium_line_x2_t3_g4_g3

0x0989,	// (0x0007a160) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0989,	// (0x0007a160) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00088b00) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00088b00) list_medium_line_x2_t3_g4_g

0xd289,	// (0x00086a60) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd289,	// (0x00086a60) list_medium_line_x2_t3_g4_t1

0xd29f,	// (0x00086a76) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd29f,	// (0x00086a76) list_medium_line_x2_t3_g4_t2

0x09aa,	// (0x0007a181) list_medium_line_x2_t3_g4_t3_ParamLimits

0x09aa,	// (0x0007a181) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8a,	// (0x00089561) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8a,	// (0x00089561) list_medium_line_x2_t3_g4_t

0x2d57,	// (0x0007c52e) list_medium_line_g2_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_g2_g1

0x2d63,	// (0x0007c53a) list_medium_line_g2_g2_ParamLimits

0x2d63,	// (0x0007c53a) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00089230) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00089230) list_medium_line_g2_g

0x3fd0,	// (0x0007d7a7) list_medium_line_g2_t1_ParamLimits

0x3fd0,	// (0x0007d7a7) list_medium_line_g2_t1

0x2d57,	// (0x0007c52e) list_medium_line_t3_g2_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_t3_g2_g1

0x2d63,	// (0x0007c53a) list_medium_line_t3_g2_g2_ParamLimits

0x2d63,	// (0x0007c53a) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00089230) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00089230) list_medium_line_t3_g2_g

0xd2b8,	// (0x00086a8f) list_medium_line_t3_g2_t1_ParamLimits

0xd2b8,	// (0x00086a8f) list_medium_line_t3_g2_t1

0xd2d2,	// (0x00086aa9) list_medium_line_t3_g2_t2_ParamLimits

0xd2d2,	// (0x00086aa9) list_medium_line_t3_g2_t2

0xd2e8,	// (0x00086abf) list_medium_line_t3_g2_t3_ParamLimits

0xd2e8,	// (0x00086abf) list_medium_line_t3_g2_t3

0x0002,

0xfd91,	// (0x00089568) list_medium_line_t3_g2_t_ParamLimits

0xfd91,	// (0x00089568) list_medium_line_t3_g2_t

0x3daa,	// (0x0007d581) list_medium_line_right_icon_g1

0x3fe5,	// (0x0007d7bc) list_medium_line_right_icon_t1

0x2d57,	// (0x0007c52e) list_medium_line_t2_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_t2_g1

0xd2ff,	// (0x00086ad6) list_medium_line_t2_t1_ParamLimits

0xd2ff,	// (0x00086ad6) list_medium_line_t2_t1

0xd319,	// (0x00086af0) list_medium_line_t2_t2_ParamLimits

0xd319,	// (0x00086af0) list_medium_line_t2_t2

0x0001,

0xfd98,	// (0x0008956f) list_medium_line_t2_t_ParamLimits

0xfd98,	// (0x0008956f) list_medium_line_t2_t

0x2d57,	// (0x0007c52e) list_medium_line_t3_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_t3_g1

0xd32e,	// (0x00086b05) list_medium_line_t3_t1_ParamLimits

0xd32e,	// (0x00086b05) list_medium_line_t3_t1

0xd345,	// (0x00086b1c) list_medium_line_t3_t2_ParamLimits

0xd345,	// (0x00086b1c) list_medium_line_t3_t2

0xd35a,	// (0x00086b31) list_medium_line_t3_t3_ParamLimits

0xd35a,	// (0x00086b31) list_medium_line_t3_t3

0x0002,

0xfd9d,	// (0x00089574) list_medium_line_t3_t_ParamLimits

0xfd9d,	// (0x00089574) list_medium_line_t3_t

0x2d57,	// (0x0007c52e) list_medium_line_g3_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_g3_g1

0x3ff3,	// (0x0007d7ca) list_medium_line_g3_g2_ParamLimits

0x3ff3,	// (0x0007d7ca) list_medium_line_g3_g2

0x2d63,	// (0x0007c53a) list_medium_line_g3_g3_ParamLimits

0x2d63,	// (0x0007c53a) list_medium_line_g3_g3

0x0002,

0xfda4,	// (0x0008957b) list_medium_line_g3_g_ParamLimits

0xfda4,	// (0x0008957b) list_medium_line_g3_g

0x3fff,	// (0x0007d7d6) list_medium_line_g3_t1_ParamLimits

0x3fff,	// (0x0007d7d6) list_medium_line_g3_t1

0x2d57,	// (0x0007c52e) list_medium_line_t2_g3_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_t2_g3_g1

0x3ff3,	// (0x0007d7ca) list_medium_line_t2_g3_g2_ParamLimits

0x3ff3,	// (0x0007d7ca) list_medium_line_t2_g3_g2

0x2d63,	// (0x0007c53a) list_medium_line_t2_g3_g3_ParamLimits

0x2d63,	// (0x0007c53a) list_medium_line_t2_g3_g3

0x0002,

0xfda4,	// (0x0008957b) list_medium_line_t2_g3_g_ParamLimits

0xfda4,	// (0x0008957b) list_medium_line_t2_g3_g

0xd36c,	// (0x00086b43) list_medium_line_t2_g3_t1_ParamLimits

0xd36c,	// (0x00086b43) list_medium_line_t2_g3_t1

0xd383,	// (0x00086b5a) list_medium_line_t2_g3_t2_ParamLimits

0xd383,	// (0x00086b5a) list_medium_line_t2_g3_t2

0x0001,

0xfdab,	// (0x00089582) list_medium_line_t2_g3_t_ParamLimits

0xfdab,	// (0x00089582) list_medium_line_t2_g3_t

0x2d57,	// (0x0007c52e) list_medium_line_t3_g3_g1_ParamLimits

0x2d57,	// (0x0007c52e) list_medium_line_t3_g3_g1

0x3ff3,	// (0x0007d7ca) list_medium_line_t3_g3_g2_ParamLimits

0x3ff3,	// (0x0007d7ca) list_medium_line_t3_g3_g2

0x2d63,	// (0x0007c53a) list_medium_line_t3_g3_g3_ParamLimits

0x2d63,	// (0x0007c53a) list_medium_line_t3_g3_g3

0x0002,

0xfda4,	// (0x0008957b) list_medium_line_t3_g3_g_ParamLimits

0xfda4,	// (0x0008957b) list_medium_line_t3_g3_g

0xd398,	// (0x00086b6f) list_medium_line_t3_g3_t1_ParamLimits

0xd398,	// (0x00086b6f) list_medium_line_t3_g3_t1

0xd3ac,	// (0x00086b83) list_medium_line_t3_g3_t2_ParamLimits

0xd3ac,	// (0x00086b83) list_medium_line_t3_g3_t2

0xd3be,	// (0x00086b95) list_medium_line_t3_g3_t3_ParamLimits

0xd3be,	// (0x00086b95) list_medium_line_t3_g3_t3

0x0002,

0xfdb0,	// (0x00089587) list_medium_line_t3_g3_t_ParamLimits

0xfdb0,	// (0x00089587) list_medium_line_t3_g3_t

0x3eda,	// (0x0007d6b1) list_medium_line_right_iconx2_g1

0x3daa,	// (0x0007d581) list_medium_line_right_iconx2_g2

0x0001,

0xfdb7,	// (0x0008958e) list_medium_line_right_iconx2_g

0x4014,	// (0x0007d7eb) list_medium_line_right_iconx2_t1

0x3eda,	// (0x0007d6b1) list_medium_line_t2_right_iconx2_g1

0x3daa,	// (0x0007d581) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb7,	// (0x0008958e) list_medium_line_t2_right_iconx2_g

0xd3d2,	// (0x00086ba9) list_medium_line_t2_right_iconx2_t1

0xd3e2,	// (0x00086bb9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbc,	// (0x00089593) list_medium_line_t2_right_iconx2_t

0x4022,	// (0x0007d7f9) list_medium_line_x4_t4_t1

0xd3f0,	// (0x00086bc7) list_medium_line_x4_t4_t2

0xd400,	// (0x00086bd7) list_medium_line_x4_t4_t3

0xd410,	// (0x00086be7) list_medium_line_x4_t4_t4

0x0003,

0xfdc1,	// (0x00089598) list_medium_line_x4_t4_t

0xd449,	// (0x00086c20) tport_appsw_pane_ParamLimits

0xd449,	// (0x00086c20) tport_appsw_pane

0xd457,	// (0x00086c2e) tport_contact_pane_ParamLimits

0xd457,	// (0x00086c2e) tport_contact_pane

0xd465,	// (0x00086c3c) tport_listscroll_pane_ParamLimits

0xd465,	// (0x00086c3c) tport_listscroll_pane

0xd473,	// (0x00086c4a) cell_tport_appsw_pane_ParamLimits

0xd473,	// (0x00086c4a) cell_tport_appsw_pane

0xef0f,	// (0x000886e6) tport_appsw_pane_g1_ParamLimits

0xef0f,	// (0x000886e6) tport_appsw_pane_g1

0x4030,	// (0x0007d807) tport_contact_pane_g1

0x4039,	// (0x0007d810) tport_contact_pane_t1

0x4047,	// (0x0007d81e) tport_contact_pane_t2

0x0001,

0xfdca,	// (0x000895a1) tport_contact_pane_t

0x4055,	// (0x0007d82c) list_tport_pane

0x405e,	// (0x0007d835) scroll_pane_cp_030

0xd488,	// (0x00086c5f) cell_tport_appsw_pane_g1

0x4067,	// (0x0007d83e) cell_tport_appsw_pane_t1

0xdfaf,	// (0x00087786) grid_highlight_pane_cp019

0xd4a0,	// (0x00086c77) list_tport_double_graphic_pane_ParamLimits

0xd4a0,	// (0x00086c77) list_tport_double_graphic_pane

0x496a,	// (0x0007e141) list_highlight_pane_cp023_ParamLimits

0x496a,	// (0x0007e141) list_highlight_pane_cp023

0xd4b1,	// (0x00086c88) list_tport_double_graphic_pane_g1_ParamLimits

0xd4b1,	// (0x00086c88) list_tport_double_graphic_pane_g1

0xd4be,	// (0x00086c95) list_tport_double_graphic_pane_t1_ParamLimits

0xd4be,	// (0x00086c95) list_tport_double_graphic_pane_t1

0xd4d3,	// (0x00086caa) list_tport_double_graphic_pane_t2_ParamLimits

0xd4d3,	// (0x00086caa) list_tport_double_graphic_pane_t2

0x0001,

0xfdd6,	// (0x000895ad) list_tport_double_graphic_pane_t_ParamLimits

0xfdd6,	// (0x000895ad) list_tport_double_graphic_pane_t

0xdfaf,	// (0x00087786) main_cale_note_pane

0xb430,	// (0x00084c07) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb430,	// (0x00084c07) cell_vitu2_function_top_wide_pane_cp01

0xcc7b,	// (0x00086452) wait_bar_pane_cp05_ParamLimits

0xdfaf,	// (0x00087786) listscroll_cmail_pane

0x407d,	// (0x0007d854) list_cmail_pane

0xd4ef,	// (0x00086cc6) list_cmail_body_pane

0xd504,	// (0x00086cdb) list_single_cmail_header_caption_pane

0xd51e,	// (0x00086cf5) list_single_cmail_header_detail_pane_ParamLimits

0xd51e,	// (0x00086cf5) list_single_cmail_header_detail_pane

0xd54d,	// (0x00086d24) list_single_cmail_header_caption_pane_t1

0xd55d,	// (0x00086d34) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd55d,	// (0x00086d34) list_single_cmail_header_detail_pane_g1

0x4fcd,	// (0x0007e7a4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4fcd,	// (0x0007e7a4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddb,	// (0x000895b2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddb,	// (0x000895b2) list_single_cmail_header_detail_pane_g

0x40aa,	// (0x0007d881) list_single_cmail_header_detail_pane_t1_ParamLimits

0x40aa,	// (0x0007d881) list_single_cmail_header_detail_pane_t1

0x40e8,	// (0x0007d8bf) list_single_cmail_header_editor_pane_bg_ParamLimits

0x40e8,	// (0x0007d8bf) list_single_cmail_header_editor_pane_bg

0x3928,	// (0x0007d0ff) list_cmail_body_pane_g1

0x40fa,	// (0x0007d8d1) list_cmail_body_pane_t1

0x2b04,	// (0x0007c2db) list_single_cmail_header_editor_pane_bg_g1

0xeb5b,	// (0x00088332) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2b14,	// (0x0007c2eb) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2b0c,	// (0x0007c2e3) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2d4f,	// (0x0007c526) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2b34,	// (0x0007c30b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2b24,	// (0x0007c2fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2b2c,	// (0x0007c303) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xeb3b,	// (0x00088312) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd59b,	// (0x00086d72) calenote_gesture_pane_ParamLimits

0xd59b,	// (0x00086d72) calenote_gesture_pane

0xd5b5,	// (0x00086d8c) calenote_window_pane_ParamLimits

0xd5b5,	// (0x00086d8c) calenote_window_pane

0x4108,	// (0x0007d8df) popup_note_window_cp01

0xd5cd,	// (0x00086da4) calenote_swipe_1_pane_ParamLimits

0xd5cd,	// (0x00086da4) calenote_swipe_1_pane

0xd023,	// (0x000867fa) calenote_swipe_2_pane_ParamLimits

0xd023,	// (0x000867fa) calenote_swipe_2_pane

0x3ca9,	// (0x0007d480) calenote_swipe_1_pane_g1_ParamLimits

0x3ca9,	// (0x0007d480) calenote_swipe_1_pane_g1

0x3cb6,	// (0x0007d48d) calenote_swipe_1_pane_g2_ParamLimits

0x3cb6,	// (0x0007d48d) calenote_swipe_1_pane_g2

0x0001,

0xfd0a,	// (0x000894e1) calenote_swipe_1_pane_g_ParamLimits

0xfd0a,	// (0x000894e1) calenote_swipe_1_pane_g

0x411a,	// (0x0007d8f1) calenote_swipe_1_pane_t1_ParamLimits

0x411a,	// (0x0007d8f1) calenote_swipe_1_pane_t1

0x3ca9,	// (0x0007d480) calenote_swipe_2_pane_g1_ParamLimits

0x3ca9,	// (0x0007d480) calenote_swipe_2_pane_g1

0x4139,	// (0x0007d910) calenote_swipe_2_pane_g2_ParamLimits

0x4139,	// (0x0007d910) calenote_swipe_2_pane_g2

0x0001,

0xfde7,	// (0x000895be) calenote_swipe_2_pane_g_ParamLimits

0xfde7,	// (0x000895be) calenote_swipe_2_pane_g

0x4145,	// (0x0007d91c) calenote_swipe_2_pane_t1_ParamLimits

0x4145,	// (0x0007d91c) calenote_swipe_2_pane_t1

0xdfaf,	// (0x00087786) main_mup_navstr_pane

0xa1fc,	// (0x000839d3) main_mup3_pane_t7_ParamLimits

0xa1fc,	// (0x000839d3) main_mup3_pane_t7

0xabcb,	// (0x000843a2) main_mp4_pane_g6_ParamLimits

0xabcb,	// (0x000843a2) main_mp4_pane_g6

0xaf3b,	// (0x00084712) main_image3_pane_t4_ParamLimits

0xaf3b,	// (0x00084712) main_image3_pane_t4

0xd5e0,	// (0x00086db7) popup_navstr_preview_pane_ParamLimits

0xd5e0,	// (0x00086db7) popup_navstr_preview_pane

0xd5ec,	// (0x00086dc3) scroll_navstr_pane_ParamLimits

0xd5ec,	// (0x00086dc3) scroll_navstr_pane

0xdfaf,	// (0x00087786) bg_popup_preview_window_pane_cp04

0x416c,	// (0x0007d943) popup_navstr_preview_pane_t1

0xd5f8,	// (0x00086dcf) scroll_navstr_pane_g1_ParamLimits

0xd5f8,	// (0x00086dcf) scroll_navstr_pane_g1

0xd605,	// (0x00086ddc) scroll_navstr_pane_t1_ParamLimits

0xd605,	// (0x00086ddc) scroll_navstr_pane_t1

0x4111,	// (0x0007d8e8) bg_button_pane_cp014

0x4111,	// (0x0007d8e8) bg_button_pane_cp030

0x3c4a,	// (0x0007d421) list_double_fisheye_pane_g4_ParamLimits

0x3c4a,	// (0x0007d421) list_double_fisheye_pane_g4

0x3c56,	// (0x0007d42d) list_double_fisheye_pane_g5_ParamLimits

0x3c56,	// (0x0007d42d) list_double_fisheye_pane_g5

0x4085,	// (0x0007d85c) sp_fs_scroll_pane_cp03

0x3dec,	// (0x0007d5c3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3df8,	// (0x0007d5cf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd27,	// (0x000894fe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3e04,	// (0x0007d5db) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd4e5,	// (0x00086cbc) sp_fs_scroll_pane_cp02

0xe85f,	// (0x00088036) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe85f,	// (0x00088036) popup_sp_fs_calendar_preview_list_single_pane

0xdfaf,	// (0x00087786) main_cam6_pano_pane

0x496a,	// (0x0007e141) main_mup3_pane_ParamLimits

0xdfaf,	// (0x00087786) main_phacti_pane

0xcb4c,	// (0x00086323) bg_button_pane_cp11

0xcb64,	// (0x0008633b) main_mobtv_info_pane_g2_ParamLimits

0xcb64,	// (0x0008633b) main_mobtv_info_pane_g2

0x0001,

0xfc87,	// (0x0008945e) main_mobtv_info_pane_g_ParamLimits

0xfc87,	// (0x0008945e) main_mobtv_info_pane_g

0xcd18,	// (0x000864ef) sc_clock_pane_t5_ParamLimits

0xcd18,	// (0x000864ef) sc_clock_pane_t5

0xcdbd,	// (0x00086594) main_radioblah_pane_g1_ParamLimits

0x3bb8,	// (0x0007d38f) main_radioblah_pane_t3_ParamLimits

0x3bb8,	// (0x0007d38f) main_radioblah_pane_t3

0x3bd0,	// (0x0007d3a7) main_radioblah_pane_t4_ParamLimits

0x3bd0,	// (0x0007d3a7) main_radioblah_pane_t4

0xcddb,	// (0x000865b2) main_radioblah_text_pane_ParamLimits

0xcddb,	// (0x000865b2) main_radioblah_text_pane

0xcde8,	// (0x000865bf) main_radioblah_info_pane_g1_ParamLimits

0xce81,	// (0x00086658) main_radioblah_info_pane_t4_ParamLimits

0xce81,	// (0x00086658) main_radioblah_info_pane_t4

0x496a,	// (0x0007e141) main_sp_fs_calendar_pane

0xd617,	// (0x00086dee) main_phacti_pane_g1

0xd61f,	// (0x00086df6) phacti_note_pane_ParamLimits

0xd61f,	// (0x00086df6) phacti_note_pane

0x4183,	// (0x0007d95a) phacti_term_pane_ParamLimits

0x4183,	// (0x0007d95a) phacti_term_pane

0x4198,	// (0x0007d96f) phacti_note_pane_t1_ParamLimits

0x4198,	// (0x0007d96f) phacti_note_pane_t1

0x41af,	// (0x0007d986) phacti_term_pane_g1

0x41b7,	// (0x0007d98e) phacti_term_pane_t1_ParamLimits

0x41b7,	// (0x0007d98e) phacti_term_pane_t1

0x41e1,	// (0x0007d9b8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x41e9,	// (0x0007d9c0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf1,	// (0x000895c8) popup_sp_fs_calendar_preview_list_single_pane_g

0x41f1,	// (0x0007d9c8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x41f1,	// (0x0007d9c8) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4207,	// (0x0007d9de) aid_popup_sp_fs_bg_corner_pane

0xec7a,	// (0x00088451) popup_sp_fs_calendar_preview_bg_pane_g1

0xdfaf,	// (0x00087786) popup_sp_fs_calendar_preview_bg_pane

0x420f,	// (0x0007d9e6) popup_sp_fs_calendar_preview_list_pane

0x496a,	// (0x0007e141) bg_main_sp_fs_cale_pane_ParamLimits

0x496a,	// (0x0007e141) bg_main_sp_fs_cale_pane

0x4220,	// (0x0007d9f7) listscroll_cale_mrui_pane_ParamLimits

0x4220,	// (0x0007d9f7) listscroll_cale_mrui_pane

0x4234,	// (0x0007da0b) listscroll_sp_fs_schedule_track_pane

0x423d,	// (0x0007da14) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x423d,	// (0x0007da14) main_sp_fs_ctrlbar_pane_cp01

0x424e,	// (0x0007da25) main_sp_fs_ribbon_pane

0x4256,	// (0x0007da2d) popup_sp_fs_cale_preview_window

0xd65e,	// (0x00086e35) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd65e,	// (0x00086e35) list_single_sp_fs_schedule_track_pane

0x2a88,	// (0x0007c25f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2a88,	// (0x0007c25f) bg_sp_fs_highlight_list_pane_cp03

0xd670,	// (0x00086e47) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd670,	// (0x00086e47) list_single_sp_fs_schedule_track_pane_g1

0xd67c,	// (0x00086e53) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd67c,	// (0x00086e53) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf6,	// (0x000895cd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf6,	// (0x000895cd) list_single_sp_fs_schedule_track_pane_g

0xd688,	// (0x00086e5f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd688,	// (0x00086e5f) list_single_sp_fs_schedule_track_pane_t1

0xd6a6,	// (0x00086e7d) sp_fs_schedule_track_pane_ParamLimits

0xd6a6,	// (0x00086e7d) sp_fs_schedule_track_pane

0x4268,	// (0x0007da3f) sp_fs_schedule_track_pane_g1

0x4270,	// (0x0007da47) sp_fs_schedule_track_pane_g2

0x4278,	// (0x0007da4f) sp_fs_schedule_track_pane_g3

0x4280,	// (0x0007da57) sp_fs_schedule_track_pane_g4

0x4288,	// (0x0007da5f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfb,	// (0x000895d2) sp_fs_schedule_track_pane_g

0x2b04,	// (0x0007c2db) bg_sp_fs_schedule_viewer_highlight_g1

0xeb5b,	// (0x00088332) bg_sp_fs_schedule_viewer_highlight_g2

0x2b0c,	// (0x0007c2e3) bg_sp_fs_schedule_viewer_highlight_g3

0x2b14,	// (0x0007c2eb) bg_sp_fs_schedule_viewer_highlight_g4

0x2d4f,	// (0x0007c526) bg_sp_fs_schedule_viewer_highlight_g5

0x2b24,	// (0x0007c2fb) bg_sp_fs_schedule_viewer_highlight_g6

0x2b2c,	// (0x0007c303) bg_sp_fs_schedule_viewer_highlight_g7

0x2b34,	// (0x0007c30b) bg_sp_fs_schedule_viewer_highlight_g8

0xeb3b,	// (0x00088312) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe06,	// (0x000895dd) bg_sp_fs_schedule_viewer_highlight_g

0xdfaf,	// (0x00087786) bg_main_sp_fs_ribbon_pane

0xd6b8,	// (0x00086e8f) main_sp_fs_ribbon_pane_g1

0x4290,	// (0x0007da67) main_sp_fs_ribbon_pane_t1

0xd6c1,	// (0x00086e98) main_sp_fs_ribbon_pane_t2

0x429f,	// (0x0007da76) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe19,	// (0x000895f0) main_sp_fs_ribbon_pane_t

0x42ae,	// (0x0007da85) main_sp_fs_ribbon_scheduler_pane

0x42b6,	// (0x0007da8d) bg_main_sp_fs_ribbon_pane_g1

0x42bf,	// (0x0007da96) bg_main_sp_fs_ribbon_pane_g2

0x42c8,	// (0x0007da9f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe20,	// (0x000895f7) bg_main_sp_fs_ribbon_pane_g

0x42d0,	// (0x0007daa7) main_sp_fs_ribbon_scheduler_pane_g1

0x42d9,	// (0x0007dab0) main_sp_fs_ribbon_scheduler_pane_g2

0x42e2,	// (0x0007dab9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe27,	// (0x000895fe) main_sp_fs_ribbon_scheduler_pane_g

0x42eb,	// (0x0007dac2) list_cale_mrui_pane

0xd6d0,	// (0x00086ea7) sp_fs_scroll_pane_cp07_ParamLimits

0xd6d0,	// (0x00086ea7) sp_fs_scroll_pane_cp07

0xd6e6,	// (0x00086ebd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd6e6,	// (0x00086ebd) bg_sp_fs_schedule_viewer_highlight

0x42f4,	// (0x0007dacb) list_single_sp_fs_schedule_track_pane_cp01

0x42fc,	// (0x0007dad3) list_sp_fs_schedule_track_pane

0x4304,	// (0x0007dadb) sp_fs_scroll_pane_cp06_ParamLimits

0x4304,	// (0x0007dadb) sp_fs_scroll_pane_cp06

0xec7a,	// (0x00088451) bgmain_sp_fs_calendar_pane_g1

0xd6f3,	// (0x00086eca) list_single_cale_mrui_pane_ParamLimits

0xd6f3,	// (0x00086eca) list_single_cale_mrui_pane

0x4316,	// (0x0007daed) list_single_cale_mrui_row_pane_ParamLimits

0x4316,	// (0x0007daed) list_single_cale_mrui_row_pane

0x4323,	// (0x0007dafa) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4323,	// (0x0007dafa) list_single_cale_mrui_row_pane_g1

0x435b,	// (0x0007db32) list_single_cale_mrui_row_pane_t1_ParamLimits

0x435b,	// (0x0007db32) list_single_cale_mrui_row_pane_t1

0xd717,	// (0x00086eee) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd717,	// (0x00086eee) list_single_cale_mrui_row_pane_t2

0x436d,	// (0x0007db44) list_single_cale_mrui_row_pane_t3_ParamLimits

0x436d,	// (0x0007db44) list_single_cale_mrui_row_pane_t3

0x439c,	// (0x0007db73) list_single_cale_mrui_row_pane_t4_ParamLimits

0x439c,	// (0x0007db73) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe33,	// (0x0008960a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe33,	// (0x0008960a) list_single_cale_mrui_row_pane_t

0xd77d,	// (0x00086f54) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd77d,	// (0x00086f54) list_single_cmail_header_editor_pane_bg_cp01

0xd79f,	// (0x00086f76) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd79f,	// (0x00086f76) list_single_cmail_header_editor_pane_bg_cp02

0xd7bb,	// (0x00086f92) main_radioblah_text_pane_t1_ParamLimits

0xd7bb,	// (0x00086f92) main_radioblah_text_pane_t1

0x43cb,	// (0x0007dba2) cam6_indi_pane_cp01

0x43d3,	// (0x0007dbaa) cam6_mode_pane_cp01

0x43db,	// (0x0007dbb2) cam6_pano_pane

0x43e4,	// (0x0007dbbb) cam6_zoom_pane_cp01

0x43ee,	// (0x0007dbc5) cam6_pano_image_pane

0x43f7,	// (0x0007dbce) cam6_pano_pane_g1

0x3928,	// (0x0007d0ff) cam6_pano_pane_g2

0x4400,	// (0x0007dbd7) cam6_pano_pane_g3

0x4409,	// (0x0007dbe0) cam6_pano_pane_g4

0x2629,	// (0x0007be00) cam6_pano_pane_g5

0x4412,	// (0x0007dbe9) cam6_pano_pane_g6

0x441a,	// (0x0007dbf1) cam6_pano_pane_g7

0x4422,	// (0x0007dbf9) cam6_pano_pane_g8

0x442b,	// (0x0007dc02) cam6_pano_pane_g9

0x0008,

0xfe3c,	// (0x00089613) cam6_pano_pane_g

0xdfaf,	// (0x00087786) main_browser_tag_pane

0x4164,	// (0x0007d93b) grid_navstr_albumart_pane

0x4436,	// (0x0007dc0d) cell_navstr_albumart_pane_ParamLimits

0x4436,	// (0x0007dc0d) cell_navstr_albumart_pane

0x4452,	// (0x0007dc29) cell_navstr_albumart_pane_g1

0x23b0,	// (0x0007bb87) cell_navstr_albumart_pane_g2

0x23c0,	// (0x0007bb97) cell_navstr_albumart_pane_g3

0x23b8,	// (0x0007bb8f) cell_navstr_albumart_pane_g4

0x0003,

0xfe4f,	// (0x00089626) cell_navstr_albumart_pane_g

0xd7d6,	// (0x00086fad) bt_list_pane_ParamLimits

0xd7d6,	// (0x00086fad) bt_list_pane

0xd7ef,	// (0x00086fc6) bt_list_pane_t1

0xd7fe,	// (0x00086fd5) bt_list_pane_t2

0x0001,

0xfe58,	// (0x0008962f) bt_list_pane_t

0xdfaf,	// (0x00087786) main_cale_prevew_pane

0xd80d,	// (0x00086fe4) popup_cale_preview_window_ParamLimits

0xd80d,	// (0x00086fe4) popup_cale_preview_window

0x496a,	// (0x0007e141) bg_popup_preview_window_pane_cp05_ParamLimits

0x496a,	// (0x0007e141) bg_popup_preview_window_pane_cp05

0x445a,	// (0x0007dc31) list_cale_preview_pane_ParamLimits

0x445a,	// (0x0007dc31) list_cale_preview_pane

0xd828,	// (0x00086fff) list_double_cale_preview_pane_ParamLimits

0xd828,	// (0x00086fff) list_double_cale_preview_pane

0xd83c,	// (0x00087013) list_single_cale_preview_pane_ParamLimits

0xd83c,	// (0x00087013) list_single_cale_preview_pane

0xd854,	// (0x0008702b) list_single_cale_preview_pane_g1

0xd85c,	// (0x00087033) list_single_cale_preview_pane_t1_ParamLimits

0xd85c,	// (0x00087033) list_single_cale_preview_pane_t1

0xd871,	// (0x00087048) list_double_cale_preview_pane_g1

0xd879,	// (0x00087050) list_double_cale_preview_pane_t1_ParamLimits

0xd879,	// (0x00087050) list_double_cale_preview_pane_t1

0xd88e,	// (0x00087065) list_double_cale_preview_pane_t2_ParamLimits

0xd88e,	// (0x00087065) list_double_cale_preview_pane_t2

0x0001,

0xfe5d,	// (0x00089634) list_double_cale_preview_pane_t_ParamLimits

0xfe5d,	// (0x00089634) list_double_cale_preview_pane_t

0xdfaf,	// (0x00087786) main_ezdial_pane

0x496a,	// (0x0007e141) main_sp_fs_email_pane_ParamLimits

0xd05b,	// (0x00086832) cmail_ddmenu_btn01_pane_ParamLimits

0xd05b,	// (0x00086832) cmail_ddmenu_btn01_pane

0xd078,	// (0x0008684f) cmail_ddmenu_btn02_pane_ParamLimits

0xd078,	// (0x0008684f) cmail_ddmenu_btn02_pane

0xd096,	// (0x0008686d) cmail_ddmenu_btn03_pane_ParamLimits

0xd096,	// (0x0008686d) cmail_ddmenu_btn03_pane

0xd0c4,	// (0x0008689b) main_sp_fs_ctrlbar_pane_ParamLimits

0xd0e0,	// (0x000868b7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd4ef,	// (0x00086cc6) list_cmail_body_pane_ParamLimits

0x4094,	// (0x0007d86b) bg_button_pane_cp12

0x409d,	// (0x0007d874) list_single_cmail_header_detail_pane_g3_ParamLimits

0x409d,	// (0x0007d874) list_single_cmail_header_detail_pane_g3

0xd575,	// (0x00086d4c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd575,	// (0x00086d4c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde2,	// (0x000895b9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde2,	// (0x000895b9) list_single_cmail_header_detail_pane_t

0x41cc,	// (0x0007d9a3) phacti_term_pane_t2_ParamLimits

0x41cc,	// (0x0007d9a3) phacti_term_pane_t2

0x0001,

0xfdec,	// (0x000895c3) phacti_term_pane_t_ParamLimits

0xfdec,	// (0x000895c3) phacti_term_pane_t

0x4466,	// (0x0007dc3d) aid_size_list_single_double

0xd8a6,	// (0x0008707d) popup_ezdial_listscroll_window

0xd8c6,	// (0x0008709d) popup_number_entry_window_cp01

0x112a,	// (0x0007a901) bg_popup_call_pane_cp09

0x4472,	// (0x0007dc49) ezdial_list_pane

0x447a,	// (0x0007dc51) scroll_pane_cp23

0x9993,	// (0x0008316a) bg_button_pane_cp028_ParamLimits

0x9993,	// (0x0008316a) bg_button_pane_cp028

0xd8d4,	// (0x000870ab) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd8d4,	// (0x000870ab) cmail_ddmenu_btn01_pane_g1

0xd8e4,	// (0x000870bb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd8e4,	// (0x000870bb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe62,	// (0x00089639) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe62,	// (0x00089639) cmail_ddmenu_btn01_pane_g

0x4482,	// (0x0007dc59) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x4482,	// (0x0007dc59) cmail_ddmenu_btn01_pane_t1

0x49dd,	// (0x0007e1b4) bg_button_pane_cp029_ParamLimits

0x49dd,	// (0x0007e1b4) bg_button_pane_cp029

0xd8e4,	// (0x000870bb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd8e4,	// (0x000870bb) cmail_ddmenu_btn02_pane_g1

0xd8fc,	// (0x000870d3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd8fc,	// (0x000870d3) cmail_ddmenu_btn02_pane_t1

0x2a88,	// (0x0007c25f) bg_button_pane_cp031_ParamLimits

0x2a88,	// (0x0007c25f) bg_button_pane_cp031

0xd8e4,	// (0x000870bb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd8e4,	// (0x000870bb) cmail_ddmenu_btn03_pane_g1

0xd8fc,	// (0x000870d3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd8fc,	// (0x000870d3) cmail_ddmenu_btn03_pane_t1

0xadd6,	// (0x000845ad) cell_dialer2_keypad_pane_t1_ParamLimits

0xadf0,	// (0x000845c7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xadf0,	// (0x000845c7) cell_dialer2_keypad_pane_t1_copy1

0xca02,	// (0x000861d9) ncimui_group_button_pane

0x496a,	// (0x0007e141) main_sp_fs_calendar_pane_ParamLimits

0xd504,	// (0x00086cdb) list_single_cmail_header_caption_pane_ParamLimits

0x4217,	// (0x0007d9ee) aid_recal_txt_sm_pane

0xdfaf,	// (0x00087786) mian_recal_day_pane

0x4256,	// (0x0007da2d) popup_sp_fs_cale_preview_window_ParamLimits

0xdfaf,	// (0x00087786) list_recal_day_pane

0x44b0,	// (0x0007dc87) list_single_recal_day_pane_ParamLimits

0x44b0,	// (0x0007dc87) list_single_recal_day_pane

0x44c2,	// (0x0007dc99) list_single_recal_day_pane_g1_ParamLimits

0x44c2,	// (0x0007dc99) list_single_recal_day_pane_g1

0x44ce,	// (0x0007dca5) list_single_recal_day_pane_g2_ParamLimits

0x44ce,	// (0x0007dca5) list_single_recal_day_pane_g2

0x44da,	// (0x0007dcb1) list_single_recal_day_pane_g3_ParamLimits

0x44da,	// (0x0007dcb1) list_single_recal_day_pane_g3

0xd920,	// (0x000870f7) list_single_recal_day_pane_g4_ParamLimits

0xd920,	// (0x000870f7) list_single_recal_day_pane_g4

0x44e6,	// (0x0007dcbd) list_single_recal_day_pane_g5_ParamLimits

0x44e6,	// (0x0007dcbd) list_single_recal_day_pane_g5

0x44f2,	// (0x0007dcc9) list_single_recal_day_pane_g6_ParamLimits

0x44f2,	// (0x0007dcc9) list_single_recal_day_pane_g6

0x0005,

0xfe71,	// (0x00089648) list_single_recal_day_pane_g_ParamLimits

0xfe71,	// (0x00089648) list_single_recal_day_pane_g

0x44fe,	// (0x0007dcd5) list_single_recal_day_pane_t1

0x450c,	// (0x0007dce3) list_single_recal_day_pane_t2

0x0001,

0xfe7e,	// (0x00089655) list_single_recal_day_pane_t

0xd92e,	// (0x00087105) ncimui_query_button_pane_ParamLimits

0xd92e,	// (0x00087105) ncimui_query_button_pane

0xd93e,	// (0x00087115) ncimui_query_button_pane_t1_ParamLimits

0xd93e,	// (0x00087115) ncimui_query_button_pane_t1

0x451a,	// (0x0007dcf1) ncimui_query_button_pane_t2_ParamLimits

0x451a,	// (0x0007dcf1) ncimui_query_button_pane_t2

0x0001,

0xfe83,	// (0x0008965a) ncimui_query_button_pane_t_ParamLimits

0xfe83,	// (0x0008965a) ncimui_query_button_pane_t

0xd951,	// (0x00087128) query_button_pane_ParamLimits

0xd951,	// (0x00087128) query_button_pane

0xdfaf,	// (0x00087786) bg_button_pane_cp0028

0x452d,	// (0x0007dd04) query_button_pane_t1

0x8fbf,	// (0x00082796) main_tport_pane_ParamLimits

0xd420,	// (0x00086bf7) bg_popup_window_pane_cp01_ParamLimits

0xd420,	// (0x00086bf7) bg_popup_window_pane_cp01

0xd42d,	// (0x00086c04) heading_pane_cp08_ParamLimits

0xd42d,	// (0x00086c04) heading_pane_cp08

0xd43b,	// (0x00086c12) heading_pane_cp07_ParamLimits

0xd43b,	// (0x00086c12) heading_pane_cp07

0xd490,	// (0x00086c67) cell_tport_appsw_pane_g2

0x0002,

0xfdcf,	// (0x000895a6) cell_tport_appsw_pane_g

0x86cc,	// (0x00081ea3) input_candi_list_open_g1

0x0ba3,	// (0x0007a37a) list_cale_time_pane_g6_ParamLimits

0x0ba3,	// (0x0007a37a) list_cale_time_pane_g6

0x9cb6,	// (0x0008348d) aid_size_touch_calib_1_ParamLimits

0x9cb6,	// (0x0008348d) aid_size_touch_calib_1

0x9cc2,	// (0x00083499) aid_size_touch_calib_2_ParamLimits

0x9cc2,	// (0x00083499) aid_size_touch_calib_2

0x9cd0,	// (0x000834a7) aid_size_touch_calib_3_ParamLimits

0x9cd0,	// (0x000834a7) aid_size_touch_calib_3

0x9ce0,	// (0x000834b7) aid_size_touch_calib_4_ParamLimits

0x9ce0,	// (0x000834b7) aid_size_touch_calib_4

0x9cee,	// (0x000834c5) main_touch_calib_button_group_pane_ParamLimits

0x9cee,	// (0x000834c5) main_touch_calib_button_group_pane

0x9cfc,	// (0x000834d3) main_touch_calib_pane_g1_ParamLimits

0x9d08,	// (0x000834df) main_touch_calib_pane_g2_ParamLimits

0x9d14,	// (0x000834eb) main_touch_calib_pane_g3_ParamLimits

0x9d20,	// (0x000834f7) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00088f8f) main_touch_calib_pane_g_ParamLimits

0x9d2c,	// (0x00083503) main_touch_calib_pane_t1_ParamLimits

0x9d43,	// (0x0008351a) main_touch_calib_pane_t2_ParamLimits

0x9d5a,	// (0x00083531) main_touch_calib_pane_t3_ParamLimits

0x9d6e,	// (0x00083545) main_touch_calib_pane_t4_ParamLimits

0x9d84,	// (0x0008355b) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00088f98) main_touch_calib_pane_t_ParamLimits

0xefb0,	// (0x00088787) list_single_fp_cale_pane_g3_ParamLimits

0xefb0,	// (0x00088787) list_single_fp_cale_pane_g3

0xb218,	// (0x000849ef) bg_button_pane_cp012_ParamLimits

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp03_ParamLimits

0xbbc5,	// (0x0008539c) cell_vitu2_function_top_pane_g1_ParamLimits

0xb218,	// (0x000849ef) bg_vkb2_func_pane_cp04_ParamLimits

0xc9b1,	// (0x00086188) main_ncimui_button_group_pane_ParamLimits

0xc9b1,	// (0x00086188) main_ncimui_button_group_pane

0xc9f0,	// (0x000861c7) main_ncimui_pane_t3_ParamLimits

0xc9f0,	// (0x000861c7) main_ncimui_pane_t3

0x417a,	// (0x0007d951) phacti_button_group_pane

0x4466,	// (0x0007dc3d) aid_size_list_single_double_ParamLimits

0xd8a6,	// (0x0008707d) popup_ezdial_listscroll_window_ParamLimits

0xd8c6,	// (0x0008709d) popup_number_entry_window_cp01_ParamLimits

0xd95e,	// (0x00087135) phacti_button_pane_ParamLimits

0xd95e,	// (0x00087135) phacti_button_pane

0xdfaf,	// (0x00087786) bg_button_pane_cp14

0x453b,	// (0x0007dd12) phacti_button_pane_t1

0xd96f,	// (0x00087146) main_touch_calib_button_pane_ParamLimits

0xd96f,	// (0x00087146) main_touch_calib_button_pane

0xe749,	// (0x00087f20) bg_button_pane_cp18_ParamLimits

0xe749,	// (0x00087f20) bg_button_pane_cp18

0x4549,	// (0x0007dd20) main_touch_calib_button_pane_t1_ParamLimits

0x4549,	// (0x0007dd20) main_touch_calib_button_pane_t1

0x455f,	// (0x0007dd36) main_touch_calib_button_pane_t2_ParamLimits

0x455f,	// (0x0007dd36) main_touch_calib_button_pane_t2

0x0001,

0xfe88,	// (0x0008965f) main_touch_calib_button_pane_t_ParamLimits

0xfe88,	// (0x0008965f) main_touch_calib_button_pane_t

0xdfaf,	// (0x00087786) cell_ncimui_button_pane

0xdfaf,	// (0x00087786) bg_button_pane_cp032

0x457d,	// (0x0007dd54) cell_ncimui_button_pane_t1

0xae4c,	// (0x00084623) image3_infobar_pane_ParamLimits

0xae4c,	// (0x00084623) image3_infobar_pane

0xcd3a,	// (0x00086511) fs_bigclock_status_pane_ParamLimits

0xcd3a,	// (0x00086511) fs_bigclock_status_pane

0xcd47,	// (0x0008651e) main_fs_bigclock_clock_pane_ParamLimits

0xcd47,	// (0x0008651e) main_fs_bigclock_clock_pane

0xcd57,	// (0x0008652e) main_fs_bigclock_indi_pane_ParamLimits

0xcd57,	// (0x0008652e) main_fs_bigclock_indi_pane

0xcd89,	// (0x00086560) main_fs_bigclock_swipe_pane_ParamLimits

0xcd89,	// (0x00086560) main_fs_bigclock_swipe_pane

0xdfaf,	// (0x00087786) main_fs_clock_dumped_data

0x3a35,	// (0x0007d20c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3a35,	// (0x0007d20c) list_single_fs_bigclock_indicator_pane_g1

0x3a55,	// (0x0007d22c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3a55,	// (0x0007d22c) list_single_fs_bigclock_indicator_pane_g2

0x3a6f,	// (0x0007d246) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3a6f,	// (0x0007d246) list_single_fs_bigclock_indicator_pane_g3

0x3a8b,	// (0x0007d262) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3a8b,	// (0x0007d262) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcbb,	// (0x00089492) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcbb,	// (0x00089492) list_single_fs_bigclock_indicator_pane_g

0x3ab1,	// (0x0007d288) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3ab1,	// (0x0007d288) list_single_fs_bigclock_indicator_pane_t1

0x3ad9,	// (0x0007d2b0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3ad9,	// (0x0007d2b0) list_single_fs_bigclock_indicator_pane_t2

0x3b01,	// (0x0007d2d8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3b01,	// (0x0007d2d8) list_single_fs_bigclock_indicator_pane_t3

0x3b2b,	// (0x0007d302) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3b2b,	// (0x0007d302) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcc6,	// (0x0008949d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcc6,	// (0x0008949d) list_single_fs_bigclock_indicator_pane_t

0x458b,	// (0x0007dd62) image3_infobar_fav_pane_ParamLimits

0x458b,	// (0x0007dd62) image3_infobar_fav_pane

0x459b,	// (0x0007dd72) image3_infobar_loc_pane_ParamLimits

0x459b,	// (0x0007dd72) image3_infobar_loc_pane

0x45b1,	// (0x0007dd88) image3_infobar_time_pane_ParamLimits

0x45b1,	// (0x0007dd88) image3_infobar_time_pane

0xec7a,	// (0x00088451) image3_infobar_time_pane_g1

0x45c1,	// (0x0007dd98) image3_infobar_time_pane_t1

0xec7a,	// (0x00088451) image3_infobar_loc_pane_g1

0x45cf,	// (0x0007dda6) image3_infobar_loc_pane_g2

0x0001,

0xfe8d,	// (0x00089664) image3_infobar_loc_pane_g

0x45d7,	// (0x0007ddae) image3_infobar_loc_pane_t1

0xec7a,	// (0x00088451) image3_infobar_fav_pane_g1

0x45e5,	// (0x0007ddbc) image3_infobar_fav_pane_g2

0x0001,

0xfe92,	// (0x00089669) image3_infobar_fav_pane_g

0x45ed,	// (0x0007ddc4) fs_bigclock_status_battery_pane

0x45f6,	// (0x0007ddcd) fs_bigclock_status_signal_pane

0x45ff,	// (0x0007ddd6) fs_bigclock_status_title_pane

0x4608,	// (0x0007dddf) fs_bigclock_status_signal_pane_g1

0x4611,	// (0x0007dde8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe97,	// (0x0008966e) fs_bigclock_status_signal_pane_g

0x4619,	// (0x0007ddf0) fs_bigclock_status_battery_pane_g1

0x4622,	// (0x0007ddf9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9c,	// (0x00089673) fs_bigclock_status_battery_pane_g

0x462a,	// (0x0007de01) fs_bigclock_status_title_pane_t1

0xec7a,	// (0x00088451) main_fs_bigclock_clock_pane_g1

0x4638,	// (0x0007de0f) main_fs_bigclock_clock_pane_g2

0x4638,	// (0x0007de0f) main_fs_bigclock_clock_pane_g3

0x4638,	// (0x0007de0f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea1,	// (0x00089678) main_fs_bigclock_clock_pane_g

0x4644,	// (0x0007de1b) main_fs_bigclock_clock_pane_t1

0x4652,	// (0x0007de29) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeaa,	// (0x00089681) main_fs_bigclock_clock_pane_t

0x4661,	// (0x0007de38) list_single_fs_bigclock_indicator_pane_ParamLimits

0x4661,	// (0x0007de38) list_single_fs_bigclock_indicator_pane

0xd981,	// (0x00087158) list_single_fs_bigclock_pane_ParamLimits

0xd981,	// (0x00087158) list_single_fs_bigclock_pane

0x467b,	// (0x0007de52) main_fs_bigclock_indicator_pane_t1

0x468a,	// (0x0007de61) list_single_fs_bigclock_pane_g1

0x4692,	// (0x0007de69) list_single_fs_bigclock_pane_t1

0xec7a,	// (0x00088451) main_fs_bigclock_swipe_pane_g1

0x46d0,	// (0x0007dea7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebb,	// (0x00089692) main_fs_bigclock_swipe_pane_g

0x46d8,	// (0x0007deaf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x46d8,	// (0x0007deaf) main_fs_bigclock_swipe_pane_t1

0x7e42,	// (0x00081619) call_type_pane_ParamLimits

0xdfaf,	// (0x00087786) main_btmg_pane

0x434f,	// (0x0007db26) list_single_cale_mrui_row_pane_g2_ParamLimits

0x434f,	// (0x0007db26) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe2e,	// (0x00089605) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe2e,	// (0x00089605) list_single_cale_mrui_row_pane_g

0x44a0,	// (0x0007dc77) list_recal_vselct_arw_lo_pane

0x44a8,	// (0x0007dc7f) list_recal_vselct_arw_up_pane

0x309a,	// (0x0007c871) list_recal_vselct_pane

0x46f5,	// (0x0007decc) btmg_button_pane

0xd9e4,	// (0x000871bb) main_btmg_pane_g1

0xdfaf,	// (0x00087786) bg_button_pane_cp044

0x46ff,	// (0x0007ded6) btmg_button_pane_t1

0x49d5,	// (0x0007e1ac) aid_listscroll_gen

0x496a,	// (0x0007e141) main_cntbar_detail_pane

0x4075,	// (0x0007d84c) list_cmail_folder_pane

0x4085,	// (0x0007d85c) sp_fs_scroll_pane_cp03_ParamLimits

0xd9ec,	// (0x000871c3) list_single_fs_dyc_pane_cp01_ParamLimits

0xd9ec,	// (0x000871c3) list_single_fs_dyc_pane_cp01

0x470d,	// (0x0007dee4) aid_size_cmail_indent

0x4716,	// (0x0007deed) list_single_dyc_row_pane_cp01

0xda23,	// (0x000871fa) cntbar_detail_list_pane_ParamLimits

0xda23,	// (0x000871fa) cntbar_detail_list_pane

0xda63,	// (0x0008723a) main_cntbar_detail_cont_pane_ParamLimits

0xda63,	// (0x0008723a) main_cntbar_detail_cont_pane

0x7ddc,	// (0x000815b3) scroll_pane_cp032_ParamLimits

0x7ddc,	// (0x000815b3) scroll_pane_cp032

0xda6f,	// (0x00087246) cntbar_detail_list_event_pane_ParamLimits

0xda6f,	// (0x00087246) cntbar_detail_list_event_pane

0xda31,	// (0x00087208) cntbar_detail_list_shct_pane

0xeba9,	// (0x00088380) aid_list_gen

0x471f,	// (0x0007def6) aid_scroll

0x4728,	// (0x0007deff) aid_size_touch_scroll_bar

0x4731,	// (0x0007df08) aid_list_double

0x473a,	// (0x0007df11) aid_list_single

0xda7f,	// (0x00087256) aid_list_single_lg

0x4743,	// (0x0007df1a) aid_list_z_g_a_sm

0x4fd9,	// (0x0007e7b0) aid_list_z_g_d

0x474b,	// (0x0007df22) aid_txt_z_prm

0x4759,	// (0x0007df30) aid_txt_z_prm_cp01

0x4767,	// (0x0007df3e) aid_txt_z_sec

0xda88,	// (0x0008725f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xda88,	// (0x0008725f) main_cntbar_detail_cont_pane_g1

0xda95,	// (0x0008726c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xda95,	// (0x0008726c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec0,	// (0x00089697) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec0,	// (0x00089697) main_cntbar_detail_cont_pane_g

0x4775,	// (0x0007df4c) main_cntbar_detail_cont_pane_t1

0x4783,	// (0x0007df5a) main_cntbar_detail_cont_pane_t2

0x4791,	// (0x0007df68) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec5,	// (0x0008969c) main_cntbar_detail_cont_pane_t

0xdaa1,	// (0x00087278) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdaa1,	// (0x00087278) cell_cntbar_detail_list_shct_pane

0x479f,	// (0x0007df76) cntbar_detail_list_shct_pane_g1

0x47a8,	// (0x0007df7f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfecc,	// (0x000896a3) cntbar_detail_list_shct_pane_g

0xdab5,	// (0x0008728c) cntbar_detail_list_event_pane_g1_ParamLimits

0xdab5,	// (0x0008728c) cntbar_detail_list_event_pane_g1

0xdac1,	// (0x00087298) cntbar_detail_list_event_pane_g2_ParamLimits

0xdac1,	// (0x00087298) cntbar_detail_list_event_pane_g2

0x0005,

0xfed1,	// (0x000896a8) cntbar_detail_list_event_pane_g_ParamLimits

0xfed1,	// (0x000896a8) cntbar_detail_list_event_pane_g

0xdb2f,	// (0x00087306) cntbar_detail_list_event_pane_t1_ParamLimits

0xdb2f,	// (0x00087306) cntbar_detail_list_event_pane_t1

0xdb44,	// (0x0008731b) cntbar_detail_list_event_pane_t2_ParamLimits

0xdb44,	// (0x0008731b) cntbar_detail_list_event_pane_t2

0x0002,

0xfede,	// (0x000896b5) cntbar_detail_list_event_pane_t_ParamLimits

0xfede,	// (0x000896b5) cntbar_detail_list_event_pane_t

0xec7a,	// (0x00088451) cell_cntbar_detail_list_shct_pane_g1

0x81da,	// (0x000819b1) navi_pane_mv_g3

0x496a,	// (0x0007e141) main_cntbar_detail_pane_ParamLimits

0xdfaf,	// (0x00087786) main_notif_wgt_pane

0xab20,	// (0x000842f7) aid_tch_main_mp4_pane_g4

0xad35,	// (0x0008450c) popup_slider_window_cp02

0x4497,	// (0x0007dc6e) list_recal_day_event_pane

0xda03,	// (0x000871da) cntbar_detail_btn_pane_ParamLimits

0xda03,	// (0x000871da) cntbar_detail_btn_pane

0xda13,	// (0x000871ea) cntbar_detail_btn_pane_cp01_ParamLimits

0xda13,	// (0x000871ea) cntbar_detail_btn_pane_cp01

0xda31,	// (0x00087208) cntbar_detail_list_shct_pane_ParamLimits

0xda3d,	// (0x00087214) cntbar_detail_pane_g1_ParamLimits

0xda3d,	// (0x00087214) cntbar_detail_pane_g1

0xda4d,	// (0x00087224) cntbar_detail_pane_t1_ParamLimits

0xda4d,	// (0x00087224) cntbar_detail_pane_t1

0xdacd,	// (0x000872a4) cntbar_detail_list_event_pane_g3_ParamLimits

0xdacd,	// (0x000872a4) cntbar_detail_list_event_pane_g3

0xdae5,	// (0x000872bc) cntbar_detail_list_event_pane_g4_ParamLimits

0xdae5,	// (0x000872bc) cntbar_detail_list_event_pane_g4

0xdafd,	// (0x000872d4) cntbar_detail_list_event_pane_g5_ParamLimits

0xdafd,	// (0x000872d4) cntbar_detail_list_event_pane_g5

0xdb15,	// (0x000872ec) cntbar_detail_list_event_pane_g6_ParamLimits

0xdb15,	// (0x000872ec) cntbar_detail_list_event_pane_g6

0xdb59,	// (0x00087330) cntbar_detail_list_event_pane_t3_ParamLimits

0xdb59,	// (0x00087330) cntbar_detail_list_event_pane_t3

0xdb6b,	// (0x00087342) popup_notif_wgt_window_ParamLimits

0xdb6b,	// (0x00087342) popup_notif_wgt_window

0xdb7b,	// (0x00087352) popup_submenu_window_cp01_ParamLimits

0xdb7b,	// (0x00087352) popup_submenu_window_cp01

0x112a,	// (0x0007a901) bg_popup_window_pane_cp10

0x47b1,	// (0x0007df88) listscroll_notif_wgt_pane

0x47bb,	// (0x0007df92) list_notif_wgt_window

0x47c4,	// (0x0007df9b) scroll_pane_cp033

0x47cd,	// (0x0007dfa4) list_notif_wgt_row_pane_ParamLimits

0x47cd,	// (0x0007dfa4) list_notif_wgt_row_pane

0x47e1,	// (0x0007dfb8) aid_size_list_notif_wgt_del

0x47ea,	// (0x0007dfc1) list_notif_wgt_row_pane_g1

0x47f2,	// (0x0007dfc9) list_notif_wgt_row_pane_g2

0x47fa,	// (0x0007dfd1) list_notif_wgt_row_pane_g3

0x0002,

0xfee5,	// (0x000896bc) list_notif_wgt_row_pane_g

0x4803,	// (0x0007dfda) list_notif_wgt_row_pane_t1

0x4811,	// (0x0007dfe8) list_notif_wgt_row_pane_t2

0x481f,	// (0x0007dff6) list_notif_wgt_row_pane_t3

0x0002,

0xfeec,	// (0x000896c3) list_notif_wgt_row_pane_t

0x2d6f,	// (0x0007c546) list_recal_day_event_pane_g1

0x482d,	// (0x0007e004) list_recal_day_event_pane_t1

0xdfaf,	// (0x00087786) bg_button_pane_cp045

0x483c,	// (0x0007e013) cntbar_detail_btn_pane_t1

0x49dd,	// (0x0007e1b4) main_callh_pane_ParamLimits

0x49dd,	// (0x0007e1b4) main_callh_pane

0xdfaf,	// (0x00087786) main_coverflow0_pane

0xdfaf,	// (0x00087786) main_wgtman_pane

0xcda1,	// (0x00086578) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcda1,	// (0x00086578) main_fs_bigclock_unlock_btn_pane

0xd480,	// (0x00086c57) bg_button_pane_cp16

0xd498,	// (0x00086c6f) cell_tport_appsw_pane_g3

0xdb89,	// (0x00087360) cf0_flow_pane_ParamLimits

0xdb89,	// (0x00087360) cf0_flow_pane

0x484a,	// (0x0007e021) listscroll_cf0_pane

0x4853,	// (0x0007e02a) main_cf0_pane_g1

0xdb98,	// (0x0008736f) main_cf0_pane_t1_ParamLimits

0xdb98,	// (0x0008736f) main_cf0_pane_t1

0xdbac,	// (0x00087383) main_cf0_pane_t2_ParamLimits

0xdbac,	// (0x00087383) main_cf0_pane_t2

0x0001,

0xfef3,	// (0x000896ca) main_cf0_pane_t_ParamLimits

0xfef3,	// (0x000896ca) main_cf0_pane_t

0x485d,	// (0x0007e034) scroll_pane_cp11

0xdbc0,	// (0x00087397) cf0_flow_pane_g1

0xdbc8,	// (0x0008739f) cf0_flow_pane_g2

0x0001,

0xfef8,	// (0x000896cf) cf0_flow_pane_g

0xdbd0,	// (0x000873a7) cf0_flow_pane_t1

0xdfaf,	// (0x00087786) main_call6_pane

0xdfaf,	// (0x00087786) main_calllock_pane

0xdbde,	// (0x000873b5) call6_btn_grp_pane_ParamLimits

0xdbde,	// (0x000873b5) call6_btn_grp_pane

0xdbed,	// (0x000873c4) call6_pane_g1_ParamLimits

0xdbed,	// (0x000873c4) call6_pane_g1

0xdbfd,	// (0x000873d4) popup_call6_1st_window_ParamLimits

0xdbfd,	// (0x000873d4) popup_call6_1st_window

0xdc0b,	// (0x000873e2) popup_call6_2nd_window_ParamLimits

0xdc0b,	// (0x000873e2) popup_call6_2nd_window

0xdc19,	// (0x000873f0) cell_call6_btn_pane_ParamLimits

0xdc19,	// (0x000873f0) cell_call6_btn_pane

0x112a,	// (0x0007a901) bg_popup_call2_in_pane_cp03

0x4868,	// (0x0007e03f) popup_call6_1st_window_g1

0x4870,	// (0x0007e047) popup_call6_1st_window_g2

0x4878,	// (0x0007e04f) popup_call6_1st_window_g3

0x0002,

0xfefd,	// (0x000896d4) popup_call6_1st_window_g

0x4880,	// (0x0007e057) popup_call6_1st_window_t1

0x488f,	// (0x0007e066) popup_call6_1st_window_t2

0x489f,	// (0x0007e076) popup_call6_1st_window_t3

0x0002,

0xff04,	// (0x000896db) popup_call6_1st_window_t

0x112a,	// (0x0007a901) bg_popup_call2_in_pane_cp04

0x4868,	// (0x0007e03f) popup_call6_2nd_window_g1

0x4870,	// (0x0007e047) popup_call6_2nd_window_g2

0x4878,	// (0x0007e04f) popup_call6_2nd_window_g3

0x0002,

0xfefd,	// (0x000896d4) popup_call6_2nd_window_g

0x4880,	// (0x0007e057) popup_call6_2nd_window_t1

0xdfaf,	// (0x00087786) bg_button_pane_cp15

0x48af,	// (0x0007e086) cell_call6_btn_pane_g1

0x48b8,	// (0x0007e08f) cell_call6_btn_pane_t1

0xdc28,	// (0x000873ff) listscroll_wgtman_pane_ParamLimits

0xdc28,	// (0x000873ff) listscroll_wgtman_pane

0xdc37,	// (0x0008740e) wgtman_btn_pane_ParamLimits

0xdc37,	// (0x0008740e) wgtman_btn_pane

0x0ff0,	// (0x0007a7c7) aid_scroll_copy1

0x48c7,	// (0x0007e09e) list_wgtman_pane

0xdc45,	// (0x0008741c) wgtman_btn_pane_g1_ParamLimits

0xdc45,	// (0x0008741c) wgtman_btn_pane_g1

0xdc51,	// (0x00087428) wgtman_btn_pane_t1_ParamLimits

0xdc51,	// (0x00087428) wgtman_btn_pane_t1

0x48d1,	// (0x0007e0a8) wgtman_btn_pane_t2_ParamLimits

0x48d1,	// (0x0007e0a8) wgtman_btn_pane_t2

0x0001,

0xff0b,	// (0x000896e2) wgtman_btn_pane_t_ParamLimits

0xff0b,	// (0x000896e2) wgtman_btn_pane_t

0x48e5,	// (0x0007e0bc) listrow_wgtman_pane_ParamLimits

0x48e5,	// (0x0007e0bc) listrow_wgtman_pane

0x48f9,	// (0x0007e0d0) listrow_wgtman_pane_g1

0xdc63,	// (0x0008743a) listrow_wgtman_pane_g2

0x0001,

0xff10,	// (0x000896e7) listrow_wgtman_pane_g

0x4902,	// (0x0007e0d9) listrow_wgtman_pane_t1

0x4910,	// (0x0007e0e7) listrow_wgtman_pane_t2

0x0001,

0xff15,	// (0x000896ec) listrow_wgtman_pane_t

0x491e,	// (0x0007e0f5) wait_bar_pane_cp09

0x4926,	// (0x0007e0fd) main_calllock_btn_pane

0x4930,	// (0x0007e107) main_calllock_pane_g1

0xdfaf,	// (0x00087786) bg_button_pane_cp17

0x493c,	// (0x0007e113) main_calllock_btn_pane_g1

0x4945,	// (0x0007e11c) main_calllock_btn_pane_t1

0xdfaf,	// (0x00087786) main_dialer3_pane

0xdfaf,	// (0x00087786) main_fmrd2_pane

0xec7a,	// (0x00088451) main_fs_bigclock_unlock_btn_pane_g1

0x495c,	// (0x0007e133) main_fs_bigclock_unlock_btn_pane_t1

0xdc6d,	// (0x00087444) area_fmrd2_info_pane_ParamLimits

0xdc6d,	// (0x00087444) area_fmrd2_info_pane

0xdc7c,	// (0x00087453) area_fmrd2_visual_pane_ParamLimits

0xdc7c,	// (0x00087453) area_fmrd2_visual_pane

0xdc8a,	// (0x00087461) fmrd2_indi_pane_ParamLimits

0xdc8a,	// (0x00087461) fmrd2_indi_pane

0xdc97,	// (0x0008746e) area_fmrd2_visual_pane_g1

0xdc9f,	// (0x00087476) area_fmrd2_visual_pane_t1

0xdcaf,	// (0x00087486) area_fmrd2_visual_pane_t2

0xdcbf,	// (0x00087496) area_fmrd2_visual_pane_t3

0x0002,

0xff1f,	// (0x000896f6) area_fmrd2_visual_pane_t

0xdccf,	// (0x000874a6) area_fmrd2_info_pane_g1

0xdcd7,	// (0x000874ae) area_fmrd2_info_pane_t1

0xdce7,	// (0x000874be) area_fmrd2_info_pane_t2

0xdcf7,	// (0x000874ce) area_fmrd2_info_pane_t3

0xdd07,	// (0x000874de) area_fmrd2_info_pane_t4

0x0003,

0xff26,	// (0x000896fd) area_fmrd2_info_pane_t

0xdd17,	// (0x000874ee) fmrd2_indi_pane_t1

0xdd27,	// (0x000874fe) fmrd2_indi_pane_t2

0xdd37,	// (0x0008750e) fmrd2_indi_pane_t3

0x0002,

0xff2f,	// (0x00089706) fmrd2_indi_pane_t

0x3a9a,	// (0x0007d271) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3a9a,	// (0x0007d271) list_single_fs_bigclock_indicator_pane_g5

0x3b40,	// (0x0007d317) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3b40,	// (0x0007d317) list_single_fs_bigclock_indicator_pane_t5

0xd635,	// (0x00086e0c) aid_cell_bcale_month_pane_ParamLimits

0xd635,	// (0x00086e0c) aid_cell_bcale_month_pane

0xd641,	// (0x00086e18) bcale_month_pane_ParamLimits

0xd641,	// (0x00086e18) bcale_month_pane

0xd64f,	// (0x00086e26) bcale_preview_pane_ParamLimits

0xd64f,	// (0x00086e26) bcale_preview_pane

0x4692,	// (0x0007de69) list_single_fs_bigclock_pane_t1_ParamLimits

0x46ac,	// (0x0007de83) list_single_fs_bigclock_pane_t2_ParamLimits

0x46ac,	// (0x0007de83) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb6,	// (0x0008968d) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0008968d) list_single_fs_bigclock_pane_t

0x4954,	// (0x0007e12b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1a,	// (0x000896f1) main_fs_bigclock_unlock_btn_pane_g

0xdd47,	// (0x0008751e) aid_dia3_key_size_ParamLimits

0xdd47,	// (0x0008751e) aid_dia3_key_size

0xdd53,	// (0x0008752a) aid_dia3_listrow_size_ParamLimits

0xdd53,	// (0x0008752a) aid_dia3_listrow_size

0xdd61,	// (0x00087538) dia3_keypad_fun_pane_ParamLimits

0xdd61,	// (0x00087538) dia3_keypad_fun_pane

0xdd71,	// (0x00087548) dia3_keypad_num_pane_ParamLimits

0xdd71,	// (0x00087548) dia3_keypad_num_pane

0xdd81,	// (0x00087558) dia3_listscroll_pane_ParamLimits

0xdd81,	// (0x00087558) dia3_listscroll_pane

0xdd8f,	// (0x00087566) dia3_numentry_pane_ParamLimits

0xdd8f,	// (0x00087566) dia3_numentry_pane

0xdd9d,	// (0x00087574) dia3_list_pane

0xdda8,	// (0x0008757f) scroll_pane_cp12

0xdfaf,	// (0x00087786) bg_dia3_numentry_pane

0xddb3,	// (0x0008758a) dia3_numentry_pane_t1

0xddc2,	// (0x00087599) cell_dia3_key_num_pane

0xddca,	// (0x000875a1) cell_dia3_key0_fun_pane_ParamLimits

0xddca,	// (0x000875a1) cell_dia3_key0_fun_pane

0xddd7,	// (0x000875ae) cell_dia3_key1_fun_pane_ParamLimits

0xddd7,	// (0x000875ae) cell_dia3_key1_fun_pane

0xdde4,	// (0x000875bb) dia3_listrow_pane

0x37b2,	// (0x0007cf89) bg_dia3_numentry_pane_g1

0xdfaf,	// (0x00087786) bg_button_pane_cp21

0xdded,	// (0x000875c4) cell_dia3_key_num_pane_t1

0xddfb,	// (0x000875d2) cell_dia3_key_num_pane_t2

0xde0a,	// (0x000875e1) cell_dia3_key_num_pane_t3

0xde19,	// (0x000875f0) cell_dia3_key_num_pane_t4

0x0003,

0xff36,	// (0x0008970d) cell_dia3_key_num_pane_t

0xdfaf,	// (0x00087786) bg_button_pane_cp19

0xde28,	// (0x000875ff) cell_dia3_key0_fun_pane_g1

0xdfaf,	// (0x00087786) bg_button_pane_cp20

0xde30,	// (0x00087607) cell_dia3_key1_fun_pane_g1

0xde38,	// (0x0008760f) area_left_week_number_pane

0xde41,	// (0x00087618) area_top_day_name_pane

0xde4a,	// (0x00087621) frame_month_view_pane

0xde54,	// (0x0008762b) grid_month_view_pane

0xde5e,	// (0x00087635) cell_top_day_name_pane_ParamLimits

0xde5e,	// (0x00087635) cell_top_day_name_pane

0xde7a,	// (0x00087651) cell_area_left_week_number_pane_ParamLimits

0xde7a,	// (0x00087651) cell_area_left_week_number_pane

0xde8e,	// (0x00087665) cell_month_view_pane_ParamLimits

0xde8e,	// (0x00087665) cell_month_view_pane

0xdead,	// (0x00087684) frm_month_g1

0xdeb6,	// (0x0008768d) frm_month_g2

0xdec0,	// (0x00087697) frm_month_g3

0xdeca,	// (0x000876a1) frm_month_g4

0xded4,	// (0x000876ab) frm_month_g5

0xdede,	// (0x000876b5) frm_month_g6

0xdee8,	// (0x000876bf) frm_month_g7

0xdef2,	// (0x000876c9) frm_month_g8

0xdefb,	// (0x000876d2) frm_month_g9

0xdf04,	// (0x000876db) frm_month_g10

0xdf0d,	// (0x000876e4) frm_month_g11

0xdf16,	// (0x000876ed) frm_month_g12

0xdf1f,	// (0x000876f6) frm_month_g13

0xdf2a,	// (0x00087701) frm_month_g14

0xdf35,	// (0x0008770c) frm_month_g15

0xdf40,	// (0x00087717) frm_month_g16

0x000f,

0xff3f,	// (0x00089716) frm_month_g

0xdf4b,	// (0x00087722) cell_top_day_name_pane_t1

0xdf5a,	// (0x00087731) cell_area_left_week_number_pane_g1

0xdf4b,	// (0x00087722) cell_area_left_week_number_pane_t1

0xec7a,	// (0x00088451) cell_month_view_pane_g1

0xdf62,	// (0x00087739) cell_month_view_pane_t1

0xdfaf,	// (0x00087786) main_fps_pane

0x3db2,	// (0x0007d589) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3db2,	// (0x0007d589) cmail_ddmenu_btn02_pane_cp1

0x3dce,	// (0x0007d5a5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3dce,	// (0x0007d5a5) cmail_ddmenu_btn02_pane_cp2

0xd8f0,	// (0x000870c7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd8f0,	// (0x000870c7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe67,	// (0x0008963e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe67,	// (0x0008963e) cmail_ddmenu_btn02_pane_g

0xd90e,	// (0x000870e5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd90e,	// (0x000870e5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6c,	// (0x00089643) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6c,	// (0x00089643) cmail_ddmenu_btn02_pane_t

0xdf71,	// (0x00087748) fps_text_pane_ParamLimits

0xdf71,	// (0x00087748) fps_text_pane

0xdf7e,	// (0x00087755) main_fps_pane_g1_ParamLimits

0xdf7e,	// (0x00087755) main_fps_pane_g1

0xdf8a,	// (0x00087761) wait_bar_pane_cp010_ParamLimits

0xdf8a,	// (0x00087761) wait_bar_pane_cp010

0xdf96,	// (0x0008776d) fps_text_pane_t1_ParamLimits

0xdf96,	// (0x0008776d) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large

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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00016971 };

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
0x82f4,	// (0x0001ec65) Screen

0x8300,	// (0x0001ec71) application_window

0x830c,	// (0x0001ec7d) area_bottom_pane_ParamLimits

0x830c,	// (0x0001ec7d) area_bottom_pane

0x6b74,	// (0x0001d4e5) area_top_pane_ParamLimits

0x6b74,	// (0x0001d4e5) area_top_pane

0x6bd8,	// (0x0001d549) call_video_uplink_pane_ParamLimits

0x6bd8,	// (0x0001d549) call_video_uplink_pane

0x6c17,	// (0x0001d588) main_pane_ParamLimits

0x6c17,	// (0x0001d588) main_pane

0x2a82,	// (0x000193f3) context_pane

0xab0a,	// (0x0002147b) navi_pane

0xab30,	// (0x000214a1) popup_cale_events_window_ParamLimits

0xab30,	// (0x000214a1) popup_cale_events_window

0x2a95,	// (0x00019406) popup_mup_playback_window

0xab48,	// (0x000214b9) signal_pane

0x093a,	// (0x000172ab) main_browser_pane

0x0b6f,	// (0x000174e0) main_burst_pane

0x71d3,	// (0x0001db44) main_calc_pane

0x2a22,	// (0x00019393) main_cale_day_pane

0x85ed,	// (0x0001ef5e) main_cale_month_pane

0x2a22,	// (0x00019393) main_cale_week_pane

0x0b6f,	// (0x000174e0) main_call_pane

0x05d0,	// (0x00016f41) main_call_poc_pane

0x0b6f,	// (0x000174e0) main_camera_pane

0x0b6f,	// (0x000174e0) main_chi_dic_pane

0x13eb,	// (0x00017d5c) main_clock_pane

0x05d0,	// (0x00016f41) main_fmradio_pane

0x0b6f,	// (0x000174e0) main_graph_messa_pane

0x05d0,	// (0x00016f41) main_help_pane

0x093a,	// (0x000172ab) main_im_pane

0x082b,	// (0x0001719c) main_image_pane_ParamLimits

0x082b,	// (0x0001719c) main_image_pane

0x05d0,	// (0x00016f41) main_location2_pane

0x0b6f,	// (0x000174e0) main_location_pane

0x082b,	// (0x0001719c) main_messa_pane

0x05d0,	// (0x00016f41) main_mp2_pane

0x0b6f,	// (0x000174e0) main_mp_pane

0x05d0,	// (0x00016f41) main_msg_pane

0x05d0,	// (0x00016f41) main_mup_eq_pane

0x05d0,	// (0x00016f41) main_mup_pane

0x093a,	// (0x000172ab) main_notes_pane

0x05d0,	// (0x00016f41) main_pec_pane

0x05d0,	// (0x00016f41) main_phob_pane

0x05d0,	// (0x00016f41) main_pinb_pane

0x05d0,	// (0x00016f41) main_postcard_pane

0x05d0,	// (0x00016f41) main_qdial_pane

0x0b6f,	// (0x000174e0) main_skin_pane

0x05d0,	// (0x00016f41) main_smil2_pane

0x0b6f,	// (0x000174e0) main_smil_pane

0x0b6f,	// (0x000174e0) main_video_pane

0x0b6f,	// (0x000174e0) main_video_tele_pane

0x082b,	// (0x0001719c) main_viewer_pane_ParamLimits

0x082b,	// (0x0001719c) main_viewer_pane

0x0b6f,	// (0x000174e0) main_vorec_pane

0x721f,	// (0x0001db90) popup_blid_sat_info_window_ParamLimits

0x721f,	// (0x0001db90) popup_blid_sat_info_window

0x723f,	// (0x0001dbb0) popup_dyc_status_message_window_ParamLimits

0x723f,	// (0x0001dbb0) popup_dyc_status_message_window

0x724d,	// (0x0001dbbe) popup_grid_large_graphic_window_ParamLimits

0x724d,	// (0x0001dbbe) popup_grid_large_graphic_window

0x72dc,	// (0x0001dc4d) popup_loc_request_window_ParamLimits

0x72dc,	// (0x0001dc4d) popup_loc_request_window

0x7329,	// (0x0001dc9a) popup_wml_address_window_ParamLimits

0x7329,	// (0x0001dc9a) popup_wml_address_window

0xa9ec,	// (0x0002135d) call_muted_g1

0xa661,	// (0x00020fd2) popup_call_audio_conf_window_ParamLimits

0xa661,	// (0x00020fd2) popup_call_audio_conf_window

0xa9fc,	// (0x0002136d) popup_call_audio_first_window_ParamLimits

0xa9fc,	// (0x0002136d) popup_call_audio_first_window

0xaa3c,	// (0x000213ad) popup_call_audio_in_window_ParamLimits

0xaa3c,	// (0x000213ad) popup_call_audio_in_window

0xaa60,	// (0x000213d1) popup_call_audio_out_window_ParamLimits

0xaa60,	// (0x000213d1) popup_call_audio_out_window

0xaa82,	// (0x000213f3) popup_call_audio_second_window_ParamLimits

0xaa82,	// (0x000213f3) popup_call_audio_second_window

0xaab2,	// (0x00021423) popup_call_audio_wait_window_ParamLimits

0xaab2,	// (0x00021423) popup_call_audio_wait_window

0xaad3,	// (0x00021444) popup_number_entry_window_ParamLimits

0xaad3,	// (0x00021444) popup_number_entry_window

0x01bd,	// (0x00016b2e) bg_popup_call_pane_cp05_ParamLimits

0x01bd,	// (0x00016b2e) bg_popup_call_pane_cp05

0x01dd,	// (0x00016b4e) popup_number_entry_window_t1

0x01f0,	// (0x00016b61) popup_number_entry_window_t2

0x0202,	// (0x00016b73) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000259dc) popup_number_entry_window_t

0x0214,	// (0x00016b85) text_title_cp2

0x0227,	// (0x00016b98) bg_popup_call_pane_cp_ParamLimits

0x0227,	// (0x00016b98) bg_popup_call_pane_cp

0x0235,	// (0x00016ba6) call_thumbnail_pane

0x023d,	// (0x00016bae) popup_call_audio_in_window_g1_ParamLimits

0x023d,	// (0x00016bae) popup_call_audio_in_window_g1

0x0249,	// (0x00016bba) popup_call_audio_in_window_g2_ParamLimits

0x0249,	// (0x00016bba) popup_call_audio_in_window_g2

0x0255,	// (0x00016bc6) popup_call_audio_in_window_g3_ParamLimits

0x0255,	// (0x00016bc6) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000259e5) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000259e5) popup_call_audio_in_window_g

0x0261,	// (0x00016bd2) popup_call_audio_in_window_t1_ParamLimits

0x0261,	// (0x00016bd2) popup_call_audio_in_window_t1

0x027d,	// (0x00016bee) popup_call_audio_in_window_t2_ParamLimits

0x027d,	// (0x00016bee) popup_call_audio_in_window_t2

0x0299,	// (0x00016c0a) popup_call_audio_in_window_t3_ParamLimits

0x0299,	// (0x00016c0a) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000259ec) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000259ec) popup_call_audio_in_window_t

0x0227,	// (0x00016b98) bg_popup_call_pane_cp01_ParamLimits

0x0227,	// (0x00016b98) bg_popup_call_pane_cp01

0x0235,	// (0x00016ba6) call_thumbnail_pane_cp02

0x02ac,	// (0x00016c1d) call_type_pane_cp022

0x02b4,	// (0x00016c25) popup_call_audio_out_window_g1_ParamLimits

0x02b4,	// (0x00016c25) popup_call_audio_out_window_g1

0x02c6,	// (0x00016c37) popup_call_audio_out_window_g2_ParamLimits

0x02c6,	// (0x00016c37) popup_call_audio_out_window_g2

0x02d2,	// (0x00016c43) popup_call_audio_out_window_g3_ParamLimits

0x02d2,	// (0x00016c43) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000259f3) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000259f3) popup_call_audio_out_window_g

0x02e4,	// (0x00016c55) popup_call_audio_out_window_t1_ParamLimits

0x02e4,	// (0x00016c55) popup_call_audio_out_window_t1

0x02fc,	// (0x00016c6d) popup_call_audio_out_window_t2_ParamLimits

0x02fc,	// (0x00016c6d) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x000259fa) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x000259fa) popup_call_audio_out_window_t

0x0311,	// (0x00016c82) bg_popup_call_pane_ParamLimits

0x0311,	// (0x00016c82) bg_popup_call_pane

0x8389,	// (0x0001ecfa) call_thumbnail_pane_cp_ParamLimits

0x8389,	// (0x0001ecfa) call_thumbnail_pane_cp

0x0395,	// (0x00016d06) call_type_pane_cp01_ParamLimits

0x0395,	// (0x00016d06) call_type_pane_cp01

0x03d9,	// (0x00016d4a) popup_call_audio_first_window_g1_ParamLimits

0x03d9,	// (0x00016d4a) popup_call_audio_first_window_g1

0x0425,	// (0x00016d96) popup_call_audio_first_window_g2_ParamLimits

0x0425,	// (0x00016d96) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x000259ff) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x000259ff) popup_call_audio_first_window_g

0x0469,	// (0x00016dda) popup_call_audio_first_window_t1_ParamLimits

0x0469,	// (0x00016dda) popup_call_audio_first_window_t1

0x0515,	// (0x00016e86) popup_call_audio_first_window_t4_ParamLimits

0x0515,	// (0x00016e86) popup_call_audio_first_window_t4

0x05a1,	// (0x00016f12) popup_call_audio_first_window_t5_ParamLimits

0x05a1,	// (0x00016f12) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00025a04) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00025a04) popup_call_audio_first_window_t

0x05d0,	// (0x00016f41) bg_popup_call_pane_cp02

0x05da,	// (0x00016f4b) call_type_pane_cp023

0x05e2,	// (0x00016f53) popup_call_audio_wait_window_g1

0x05ea,	// (0x00016f5b) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00025a0b) popup_call_audio_wait_window_g

0x05f2,	// (0x00016f63) popup_call_audio_wait_window_t3

0x0600,	// (0x00016f71) bg_popup_call_pane_cp03_ParamLimits

0x0600,	// (0x00016f71) bg_popup_call_pane_cp03

0x0660,	// (0x00016fd1) call_thumbnail_pane_cp011_ParamLimits

0x0660,	// (0x00016fd1) call_thumbnail_pane_cp011

0x066c,	// (0x00016fdd) call_type_pane_cp034_ParamLimits

0x066c,	// (0x00016fdd) call_type_pane_cp034

0x06a8,	// (0x00017019) popup_call_audio_second_window_g1_ParamLimits

0x06a8,	// (0x00017019) popup_call_audio_second_window_g1

0x06e4,	// (0x00017055) popup_call_audio_second_window_g2_ParamLimits

0x06e4,	// (0x00017055) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00025a10) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00025a10) popup_call_audio_second_window_g

0x0720,	// (0x00017091) popup_call_audio_second_window_t1_ParamLimits

0x0720,	// (0x00017091) popup_call_audio_second_window_t1

0x07a1,	// (0x00017112) popup_call_audio_second_window_t2_ParamLimits

0x07a1,	// (0x00017112) popup_call_audio_second_window_t2

0x07d7,	// (0x00017148) popup_call_audio_second_window_t3_ParamLimits

0x07d7,	// (0x00017148) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00025a15) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00025a15) popup_call_audio_second_window_t

0x05d0,	// (0x00016f41) bg_popup_call_pane_cp04

0x080d,	// (0x0001717e) list_conf_pane

0x0815,	// (0x00017186) popup_call_audio_conf_window_t1

0x0823,	// (0x00017194) call_thumbnail_pane_g1

0x082b,	// (0x0001719c) bg_pinb_pane_ParamLimits

0x082b,	// (0x0001719c) bg_pinb_pane

0x0839,	// (0x000171aa) find_pinb_pane

0x082b,	// (0x0001719c) listscroll_pinb_pane_ParamLimits

0x082b,	// (0x0001719c) listscroll_pinb_pane

0x0843,	// (0x000171b4) pinb_bg_pane_g1

0x0843,	// (0x000171b4) pinb_bg_pane_g2

0x0843,	// (0x000171b4) pinb_bg_pane_g3

0x0843,	// (0x000171b4) pinb_bg_pane_g4

0x0843,	// (0x000171b4) pinb_bg_pane_g5

0x0843,	// (0x000171b4) pinb_bg_pane_g6

0x0843,	// (0x000171b4) pinb_bg_pane_g7

0x0843,	// (0x000171b4) pinb_bg_pane_g8

0x0843,	// (0x000171b4) pinb_bg_pane_g9

0x0843,	// (0x000171b4) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00025a1c) pinb_bg_pane_g

0x0140,	// (0x00016ab1) grid_pinb_pane

0x0140,	// (0x00016ab1) list_pinb_pane

0x01af,	// (0x00016b20) scroll_pane_cp01_ParamLimits

0x01af,	// (0x00016b20) scroll_pane_cp01

0x084d,	// (0x000171be) find_pinb_pane_g1_ParamLimits

0x084d,	// (0x000171be) find_pinb_pane_g1

0x0865,	// (0x000171d6) find_pinb_pane_t1

0x0877,	// (0x000171e8) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00025a36) find_pinb_pane_t

0x088c,	// (0x000171fd) input_focus_pane_cp01_ParamLimits

0x088c,	// (0x000171fd) input_focus_pane_cp01

0x0898,	// (0x00017209) cell_pinb_pane_ParamLimits

0x0898,	// (0x00017209) cell_pinb_pane

0x08a6,	// (0x00017217) cell_pinb_pane_g1_ParamLimits

0x08a6,	// (0x00017217) cell_pinb_pane_g1

0x08b4,	// (0x00017225) cell_pinb_pane_g2_ParamLimits

0x08b4,	// (0x00017225) cell_pinb_pane_g2

0x08b4,	// (0x00017225) cell_pinb_pane_g3_ParamLimits

0x08b4,	// (0x00017225) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00025a3b) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00025a3b) cell_pinb_pane_g

0x05d0,	// (0x00016f41) grid_highlight_pane_cp01

0x0898,	// (0x00017209) list_pinb_item_pane_ParamLimits

0x0898,	// (0x00017209) list_pinb_item_pane

0x0140,	// (0x00016ab1) list_highlight_pane_cp02

0x08c2,	// (0x00017233) list_pinb_item_pane_g1_ParamLimits

0x08c2,	// (0x00017233) list_pinb_item_pane_g1

0x08b4,	// (0x00017225) list_pinb_item_pane_g2_ParamLimits

0x08b4,	// (0x00017225) list_pinb_item_pane_g2

0x08a6,	// (0x00017217) list_pinb_item_pane_g3_ParamLimits

0x08a6,	// (0x00017217) list_pinb_item_pane_g3

0x08b4,	// (0x00017225) list_pinb_item_pane_g4_ParamLimits

0x08b4,	// (0x00017225) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00025a42) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00025a42) list_pinb_item_pane_g

0x08d0,	// (0x00017241) list_pinb_item_pane_t1_ParamLimits

0x08d0,	// (0x00017241) list_pinb_item_pane_t1

0x6e05,	// (0x0001d776) calc_display_pane

0x6e23,	// (0x0001d794) calc_paper_pane

0x6e3f,	// (0x0001d7b0) grid_calc_pane

0x05d0,	// (0x00016f41) bg_list_pane_cp01

0x83ad,	// (0x0001ed1e) clock_g1

0x83b5,	// (0x0001ed26) clock_g2

0x0001,

0xf0da,	// (0x00025a4b) clock_g

0x83bf,	// (0x0001ed30) clock_t1_ParamLimits

0x83bf,	// (0x0001ed30) clock_t1

0x83d4,	// (0x0001ed45) clock_t2_ParamLimits

0x83d4,	// (0x0001ed45) clock_t2

0x83e6,	// (0x0001ed57) clock_t3_ParamLimits

0x83e6,	// (0x0001ed57) clock_t3

0x83f8,	// (0x0001ed69) clock_t4_ParamLimits

0x83f8,	// (0x0001ed69) clock_t4

0x840a,	// (0x0001ed7b) clock_t5_ParamLimits

0x840a,	// (0x0001ed7b) clock_t5

0x841f,	// (0x0001ed90) clock_t6_ParamLimits

0x841f,	// (0x0001ed90) clock_t6

0x8431,	// (0x0001eda2) clock_t7_ParamLimits

0x8431,	// (0x0001eda2) clock_t7

0x8443,	// (0x0001edb4) clock_t8_ParamLimits

0x8443,	// (0x0001edb4) clock_t8

0x8459,	// (0x0001edca) clock_t9_ParamLimits

0x8459,	// (0x0001edca) clock_t9

0x0008,

0xf0df,	// (0x00025a50) clock_t_ParamLimits

0xf0df,	// (0x00025a50) clock_t

0x08ec,	// (0x0001725d) popup_clock_analogue_window_cp02

0x08ec,	// (0x0001725d) popup_clock_digital_window_cp01

0x05d0,	// (0x00016f41) listscroll_help_pane

0x05d0,	// (0x00016f41) phob_pre_status_pane

0x08f4,	// (0x00017265) grid_qdial_pane

0x846f,	// (0x0001ede0) listscroll_mce_pane

0x082b,	// (0x0001719c) bg_notes_pane

0x08fe,	// (0x0001726f) list_notes_pane

0x848d,	// (0x0001edfe) scroll_pane_cp06

0x090c,	// (0x0001727d) bg_calc_paper_pane

0x6e6b,	// (0x0001d7dc) list_calc_pane

0x093a,	// (0x000172ab) bg_calc_display_pane

0x6e85,	// (0x0001d7f6) calc_display_pane_t1

0x6e9a,	// (0x0001d80b) calc_display_pane_t2

0x6eaf,	// (0x0001d820) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00025a63) calc_display_pane_t

0x6ec1,	// (0x0001d832) cell_calc_pane_ParamLimits

0x6ec1,	// (0x0001d832) cell_calc_pane

0x0958,	// (0x000172c9) bg_calc_paper_pane_g1

0x0970,	// (0x000172e1) bg_calc_paper_pane_g2

0x0964,	// (0x000172d5) bg_calc_paper_pane_g3

0x0988,	// (0x000172f9) bg_calc_paper_pane_g4

0x097c,	// (0x000172ed) bg_calc_paper_pane_g5

0x849c,	// (0x0001ee0d) bg_calc_paper_pane_g6

0x84ad,	// (0x0001ee1e) bg_calc_paper_pane_g7

0x84be,	// (0x0001ee2f) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00025a6a) bg_calc_paper_pane_g

0x84cf,	// (0x0001ee40) calc_bg_paper_pane_g9

0x84e0,	// (0x0001ee51) list_calc_item_pane_ParamLimits

0x84e0,	// (0x0001ee51) list_calc_item_pane

0x0994,	// (0x00017305) list_calc_item_pane_g1

0x6eee,	// (0x0001d85f) list_calc_item_pane_t1_ParamLimits

0x6eee,	// (0x0001d85f) list_calc_item_pane_t1

0x6f00,	// (0x0001d871) list_calc_item_pane_t2_ParamLimits

0x6f00,	// (0x0001d871) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00025a7b) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00025a7b) list_calc_item_pane_t

0x0843,	// (0x000171b4) cell_calc_pane_g1

0x09b3,	// (0x00017324) grid_highlight_pane_cp02

0x850d,	// (0x0001ee7e) bg_calc_display_pane_g1

0x6f30,	// (0x0001d8a1) bg_calc_display_pane_g2

0x8516,	// (0x0001ee87) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00025a85) bg_calc_display_pane_g

0x6f3a,	// (0x0001d8ab) cell_qdial_pane_ParamLimits

0x6f3a,	// (0x0001d8ab) cell_qdial_pane

0x851f,	// (0x0001ee90) cell_qdial_pane_g1_ParamLimits

0x851f,	// (0x0001ee90) cell_qdial_pane_g1

0x852c,	// (0x0001ee9d) cell_qdial_pane_g2_ParamLimits

0x852c,	// (0x0001ee9d) cell_qdial_pane_g2

0x09de,	// (0x0001734f) cell_qdial_pane_g3_ParamLimits

0x09de,	// (0x0001734f) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00025a8c) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00025a8c) cell_qdial_pane_g

0x8549,	// (0x0001eeba) cell_qdial_pane_t1_ParamLimits

0x8549,	// (0x0001eeba) cell_qdial_pane_t1

0x8561,	// (0x0001eed2) cell_qdial_pane_t2_ParamLimits

0x8561,	// (0x0001eed2) cell_qdial_pane_t2

0x8574,	// (0x0001eee5) cell_qdial_pane_t3_ParamLimits

0x8574,	// (0x0001eee5) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00025a95) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00025a95) cell_qdial_pane_t

0x05d0,	// (0x00016f41) grid_highlight_pane_cp04

0x09ea,	// (0x0001735b) thumbnail_qdial_pane_ParamLimits

0x09ea,	// (0x0001735b) thumbnail_qdial_pane

0x0a46,	// (0x000173b7) list_help_pane

0x0a4f,	// (0x000173c0) scroll_pane_cp02

0x8587,	// (0x0001eef8) help_list_pane_t1_ParamLimits

0x8587,	// (0x0001eef8) help_list_pane_t1

0x6f4e,	// (0x0001d8bf) bg_notes_pane_g2

0x6f56,	// (0x0001d8c7) bg_notes_pane_g3

0x6f5e,	// (0x0001d8cf) notes_bg_pane_g1

0x6f66,	// (0x0001d8d7) notes_bg_pane_g4

0x6f6e,	// (0x0001d8df) notes_bg_pane_g5

0x6f76,	// (0x0001d8e7) notes_bg_pane_g6

0x6f7e,	// (0x0001d8ef) notes_bg_pane_g7

0x6f86,	// (0x0001d8f7) notes_bg_pane_g8

0x6f8e,	// (0x0001d8ff) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00025ab3) notes_bg_pane_g

0x85c1,	// (0x0001ef32) list_notes_text_pane_ParamLimits

0x85c1,	// (0x0001ef32) list_notes_text_pane

0x0aa0,	// (0x00017411) list_notes_text_pane_g1

0x0aa9,	// (0x0001741a) list_notes_text_pane_t1

0x85ed,	// (0x0001ef5e) listscroll_cale_week_pane

0x8612,	// (0x0001ef83) bg_cale_heading_pane

0x0ad1,	// (0x00017442) bg_cale_pane_cp01

0x8634,	// (0x0001efa5) cale_week_corner_pane

0x864e,	// (0x0001efbf) cale_week_day_heading_pane

0x8670,	// (0x0001efe1) cale_week_scroll_pane_g1

0x868d,	// (0x0001effe) cale_week_scroll_pane_g2

0x86a0,	// (0x0001f011) cale_week_scroll_pane_g3

0x86b3,	// (0x0001f024) cale_week_scroll_pane_g4

0x86c6,	// (0x0001f037) cale_week_scroll_pane_g5

0x86d9,	// (0x0001f04a) cale_week_scroll_pane_g6

0x86ec,	// (0x0001f05d) cale_week_scroll_pane_g7

0x8701,	// (0x0001f072) cale_week_scroll_pane_g8

0x8716,	// (0x0001f087) cale_week_scroll_pane_g9

0x8729,	// (0x0001f09a) cale_week_scroll_pane_g10

0x873c,	// (0x0001f0ad) cale_week_scroll_pane_g11

0x874f,	// (0x0001f0c0) cale_week_scroll_pane_g12

0x8766,	// (0x0001f0d7) cale_week_scroll_pane_g13

0x8781,	// (0x0001f0f2) cale_week_scroll_pane_g14

0x879c,	// (0x0001f10d) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00025ac2) cale_week_scroll_pane_g

0x87cc,	// (0x0001f13d) cale_week_time_pane

0x87e1,	// (0x0001f152) grid_cale_week_pane

0x0b00,	// (0x00017471) scroll_pane_cp08

0x8800,	// (0x0001f171) cell_cale_week_pane_ParamLimits

0x8800,	// (0x0001f171) cell_cale_week_pane

0x8862,	// (0x0001f1d3) cale_week_day_heading_pane_t1

0x887d,	// (0x0001f1ee) cale_week_day_heading_pane_t2

0x8898,	// (0x0001f209) cale_week_day_heading_pane_t3

0x88b3,	// (0x0001f224) cale_week_day_heading_pane_t4

0x88ce,	// (0x0001f23f) cale_week_day_heading_pane_t5

0x88e9,	// (0x0001f25a) cale_week_day_heading_pane_t6

0x8904,	// (0x0001f275) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00025ae3) cale_week_day_heading_pane_t

0x0b1d,	// (0x0001748e) bg_cale_side_pane

0x6f96,	// (0x0001d907) cale_week_time_pane_t1

0x6fb0,	// (0x0001d921) cale_week_time_pane_t2

0x6fca,	// (0x0001d93b) cale_week_time_pane_t3

0x6fe4,	// (0x0001d955) cale_week_time_pane_t4

0x6ffe,	// (0x0001d96f) cale_week_time_pane_t5

0x7018,	// (0x0001d989) cale_week_time_pane_t6

0x7038,	// (0x0001d9a9) cale_week_time_pane_t7

0x705a,	// (0x0001d9cb) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00025af2) cale_week_time_pane_t

0x891f,	// (0x0001f290) cell_cale_week_pane_g2

0x8943,	// (0x0001f2b4) cell_cale_week_pane_g3_ParamLimits

0x8943,	// (0x0001f2b4) cell_cale_week_pane_g3

0x0b2b,	// (0x0001749c) grid_highlight_pane_cp07

0x0b33,	// (0x000174a4) listscroll_gms_pane

0x0b3d,	// (0x000174ae) grid_gms_pane

0x0b46,	// (0x000174b7) listscroll_gms_pane_g1

0x0b4e,	// (0x000174bf) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00025b03) listscroll_gms_pane_g

0x895b,	// (0x0001f2cc) scroll_pane_cp010

0x8966,	// (0x0001f2d7) cell_gms_pane_ParamLimits

0x8966,	// (0x0001f2d7) cell_gms_pane

0x8976,	// (0x0001f2e7) cell_gms_pane_g1

0x0b56,	// (0x000174c7) cell_gms_pane_g2

0x0aa0,	// (0x00017411) cell_gms_pane_g3

0x0b5e,	// (0x000174cf) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00025b08) cell_gms_pane_g

0x0b67,	// (0x000174d8) grid_highlight_pane_cp09

0xa970,	// (0x000212e1) phob_pre_status_pane_g1

0xa978,	// (0x000212e9) phob_pre_status_pane_g2

0xa980,	// (0x000212f1) phob_pre_status_pane_g3

0xa988,	// (0x000212f9) phob_pre_status_pane_g4

0x0004,

0xf573,	// (0x00025ee4) phob_pre_status_pane_g

0xa998,	// (0x00021309) phob_pre_status_pane_t1

0xa9a8,	// (0x00021319) phob_pre_status_pane_t2

0xa9b8,	// (0x00021329) phob_pre_status_pane_t3

0x0002,

0xf57e,	// (0x00025eef) phob_pre_status_pane_t

0x0b6f,	// (0x000174e0) bg_list_pane_cp05

0x8986,	// (0x0001f2f7) grid_vorec_pane

0x8990,	// (0x0001f301) vorec_t1

0x899e,	// (0x0001f30f) vorec_t2

0x89ac,	// (0x0001f31d) vorec_t3

0x89ba,	// (0x0001f32b) vorec_t4

0x82ce,	// (0x0001ec3f) vorec_t5

0x82dc,	// (0x0001ec4d) vorec_t6

0x0004,

0xf1a0,	// (0x00025b11) vorec_t

0x82ea,	// (0x0001ec5b) wait_bar_pane_cp01

0x89d6,	// (0x0001f347) cell_vorec_pane_ParamLimits

0x89d6,	// (0x0001f347) cell_vorec_pane

0x707e,	// (0x0001d9ef) cell_vorec_pane_g1

0x05d0,	// (0x00016f41) grid_highlight_pane_cp05

0x0898,	// (0x00017209) cams_zoom_pane

0x0898,	// (0x00017209) image_vga_pane

0x08b4,	// (0x00017225) main_camera_pane_g1

0x08b4,	// (0x00017225) main_camera_pane_g2

0x08b4,	// (0x00017225) main_camera_pane_g3

0x08b4,	// (0x00017225) main_camera_pane_g4

0x08b4,	// (0x00017225) main_camera_pane_g5

0x08b4,	// (0x00017225) main_camera_pane_g6

0x08b4,	// (0x00017225) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00025b1c) main_camera_pane_g

0x172e,	// (0x0001809f) main_camera_pane_t1

0x172e,	// (0x0001809f) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00025b2d) main_camera_pane_t

0x89e9,	// (0x0001f35a) cams_zoom_pane_cp_ParamLimits

0x89e9,	// (0x0001f35a) cams_zoom_pane_cp

0x8a17,	// (0x0001f388) image_cif_pane_ParamLimits

0x8a17,	// (0x0001f388) image_cif_pane

0x0140,	// (0x00016ab1) image_subqcif_pane

0x8a25,	// (0x0001f396) main_video_pane_g1_ParamLimits

0x8a25,	// (0x0001f396) main_video_pane_g1

0x8a4d,	// (0x0001f3be) main_video_pane_g2_ParamLimits

0x8a4d,	// (0x0001f3be) main_video_pane_g2

0x8a80,	// (0x0001f3f1) main_video_pane_g3_ParamLimits

0x8a80,	// (0x0001f3f1) main_video_pane_g3

0x8a80,	// (0x0001f3f1) main_video_pane_g4_ParamLimits

0x8a80,	// (0x0001f3f1) main_video_pane_g4

0x8aae,	// (0x0001f41f) main_video_pane_g5_ParamLimits

0x8aae,	// (0x0001f41f) main_video_pane_g5

0x0b95,	// (0x00017506) main_video_pane_g6_ParamLimits

0x0b95,	// (0x00017506) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00025b32) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00025b32) main_video_pane_g

0x8aca,	// (0x0001f43b) main_video_pane_t1_ParamLimits

0x8aca,	// (0x0001f43b) main_video_pane_t1

0x0baf,	// (0x00017520) cams_zoom_pane_g1

0x0baf,	// (0x00017520) cams_zoom_pane_g2

0x0baf,	// (0x00017520) cams_zoom_pane_g3

0x0baf,	// (0x00017520) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00025b41) cams_zoom_pane_g

0x8b10,	// (0x0001f481) grid_cams_pane

0x8b1e,	// (0x0001f48f) linegrid_cams_pane

0x8b2c,	// (0x0001f49d) cell_cams_pane_ParamLimits

0x8b2c,	// (0x0001f49d) cell_cams_pane

0x0bb9,	// (0x0001752a) cams_burst_image_pane

0x0bc1,	// (0x00017532) cell_cams_pane_g1

0x05d0,	// (0x00016f41) grid_highlight_pane_cp03

0x0843,	// (0x000171b4) mp_bg_pane_g1

0x0140,	// (0x00016ab1) bg_list_pane_cp03

0x0140,	// (0x00016ab1) bg_mp_pane

0x0140,	// (0x00016ab1) grid_mp_pane

0x0baf,	// (0x00017520) media_player_g1

0x1110,	// (0x00017a81) media_player_t1

0x1110,	// (0x00017a81) media_player_t2

0x1110,	// (0x00017a81) media_player_t3

0x1110,	// (0x00017a81) media_player_t4

0x1110,	// (0x00017a81) media_player_t5

0x1110,	// (0x00017a81) media_player_t6

0x1110,	// (0x00017a81) media_player_t7

0x0006,

0xf55d,	// (0x00025ece) media_player_t

0x0140,	// (0x00016ab1) wait_bar_pane_cp02

0xf542,	// (0x00025eb3) main_usb_pane_t

0x13eb,	// (0x00017d5c) cell_mp_pane

0x0843,	// (0x000171b4) cell_mp_pane_g1

0x05d0,	// (0x00016f41) grid_highlight_pane_cp06

0x0bc9,	// (0x0001753a) grid_skin_colour_pane

0x0bd1,	// (0x00017542) list_highlight_pane_cp03

0x8b3f,	// (0x0001f4b0) skin_g1

0x0bd9,	// (0x0001754a) skin_t1

0x0be8,	// (0x00017559) skin_t2

0x0001,

0xf1fe,	// (0x00025b6f) skin_t

0x8b49,	// (0x0001f4ba) cell_skin_colour_pane_ParamLimits

0x8b49,	// (0x0001f4ba) cell_skin_colour_pane

0x0bf6,	// (0x00017567) cell_skin_colour_pane_g1

0x8bcd,	// (0x0001f53e) call_video_g1_ParamLimits

0x8bcd,	// (0x0001f53e) call_video_g1

0x8bdd,	// (0x0001f54e) call_video_g2_ParamLimits

0x8bdd,	// (0x0001f54e) call_video_g2

0x0001,

0xf203,	// (0x00025b74) call_video_g_ParamLimits

0xf203,	// (0x00025b74) call_video_g

0x8c37,	// (0x0001f5a8) call_video_uplink_pane_cp1_ParamLimits

0x8c37,	// (0x0001f5a8) call_video_uplink_pane_cp1

0x0c08,	// (0x00017579) call_video_uplink_pane_cp2

0x8d03,	// (0x0001f674) video_down_crop_pane_ParamLimits

0x8d03,	// (0x0001f674) video_down_crop_pane

0x8df5,	// (0x0001f766) video_down_pane_ParamLimits

0x8df5,	// (0x0001f766) video_down_pane

0x0c10,	// (0x00017581) video_down_subqcif_pane_ParamLimits

0x0c10,	// (0x00017581) video_down_subqcif_pane

0x0c28,	// (0x00017599) video_down_subqcif_pane_cp_ParamLimits

0x0c28,	// (0x00017599) video_down_subqcif_pane_cp

0x0c4e,	// (0x000175bf) im_reading_pane_ParamLimits

0x0c4e,	// (0x000175bf) im_reading_pane

0x8f15,	// (0x0001f886) im_writing_pane_ParamLimits

0x8f15,	// (0x0001f886) im_writing_pane

0x8f33,	// (0x0001f8a4) im_reading_pane_t1

0x0c68,	// (0x000175d9) list_im_pane

0x0c79,	// (0x000175ea) scroll_pane_cp07

0x8f8b,	// (0x0001f8fc) im_writing_pane_t1_ParamLimits

0x8f8b,	// (0x0001f8fc) im_writing_pane_t1

0x0c92,	// (0x00017603) im_writing_pane_t2_ParamLimits

0x0c92,	// (0x00017603) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00025b7e) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00025b7e) im_writing_pane_t

0x05d0,	// (0x00016f41) input_focus_pane_cp04

0x05d0,	// (0x00016f41) input_focus_pane_cp05

0x8f9d,	// (0x0001f90e) list_im_single_pane_ParamLimits

0x8f9d,	// (0x0001f90e) list_im_single_pane

0x8fc4,	// (0x0001f935) list_single_im_pane_t1

0x0b6f,	// (0x000174e0) blid_accuracy_pane

0x0b6f,	// (0x000174e0) blid_compass_pane

0x29da,	// (0x0001934b) main_location_t1

0x29da,	// (0x0001934b) main_location_t2

0x29da,	// (0x0001934b) main_location_t3

0x0002,

0xf56c,	// (0x00025edd) main_location_t

0x05d0,	// (0x00016f41) aid_levels_location

0x0843,	// (0x000171b4) blid_accuracy_pane_g1

0x0843,	// (0x000171b4) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00025bd2) blid_accuracy_pane_g

0x0cda,	// (0x0001764b) wml_content_pane

0x0d18,	// (0x00017689) wml_button_pane_ParamLimits

0x0d18,	// (0x00017689) wml_button_pane

0x8fd3,	// (0x0001f944) wml_list_single_large_pane_ParamLimits

0x8fd3,	// (0x0001f944) wml_list_single_large_pane

0x8ffe,	// (0x0001f96f) wml_list_single_medium_pane_ParamLimits

0x8ffe,	// (0x0001f96f) wml_list_single_medium_pane

0x9030,	// (0x0001f9a1) wml_list_single_small_pane_ParamLimits

0x9030,	// (0x0001f9a1) wml_list_single_small_pane

0x0d2c,	// (0x0001769d) wml_selection_box_pane_ParamLimits

0x0d2c,	// (0x0001769d) wml_selection_box_pane

0x0d3f,	// (0x000176b0) wml_list_single_pane_t1

0x0d4e,	// (0x000176bf) wml_list_single_medium_pane_t1

0x0d5d,	// (0x000176ce) wml_list_single_large_pane_t1

0x0d6c,	// (0x000176dd) input_focus_pane_cp02_ParamLimits

0x0d6c,	// (0x000176dd) input_focus_pane_cp02

0x0d7f,	// (0x000176f0) wml_selection_box_pane_g1

0x0d88,	// (0x000176f9) wml_selection_box_pane_t1_ParamLimits

0x0d88,	// (0x000176f9) wml_selection_box_pane_t1

0x082b,	// (0x0001719c) bg_wml_button_pane_ParamLimits

0x082b,	// (0x0001719c) bg_wml_button_pane

0x0da0,	// (0x00017711) wml_button_pane_g1

0x0da8,	// (0x00017719) wml_button_pane_t1

0x0da0,	// (0x00017711) wml_button_bg_pane_g1

0x0db8,	// (0x00017729) wml_button_bg_pane_g2

0x0dc0,	// (0x00017731) wml_button_bg_pane_g3

0x0dc8,	// (0x00017739) wml_button_bg_pane_g4

0x0dd0,	// (0x00017741) wml_button_bg_pane_g5

0x0dd8,	// (0x00017749) wml_button_bg_pane_g6

0x0de0,	// (0x00017751) wml_button_bg_pane_g7

0x0de8,	// (0x00017759) wml_button_bg_pane_g8

0x0df0,	// (0x00017761) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00025b83) wml_button_bg_pane_g

0x906d,	// (0x0001f9de) bg_list_pane_cp02

0x0df8,	// (0x00017769) mce_header_pane_ParamLimits

0x0df8,	// (0x00017769) mce_header_pane

0x0e0e,	// (0x0001777f) mce_icon_pane

0x0e0e,	// (0x0001777f) mce_image_pane

0x0e17,	// (0x00017788) mce_text_pane_ParamLimits

0x0e17,	// (0x00017788) mce_text_pane

0x9075,	// (0x0001f9e6) scroll_pane_cp03

0x0d10,	// (0x00017681) scroll_pane_cp04

0x0e2a,	// (0x0001779b) scroll_pane_cp05_ParamLimits

0x0e2a,	// (0x0001779b) scroll_pane_cp05

0x907d,	// (0x0001f9ee) mce_header_field_pane_ParamLimits

0x907d,	// (0x0001f9ee) mce_header_field_pane

0x909d,	// (0x0001fa0e) mce_header_field_pane_2_ParamLimits

0x909d,	// (0x0001fa0e) mce_header_field_pane_2

0x90b3,	// (0x0001fa24) mce_header_field_pane_3

0x90bb,	// (0x0001fa2c) list_single_mce_message_pane_ParamLimits

0x90bb,	// (0x0001fa2c) list_single_mce_message_pane

0x90cc,	// (0x0001fa3d) list_single_mce_smart_pane_ParamLimits

0x90cc,	// (0x0001fa3d) list_single_mce_smart_pane

0x0e36,	// (0x000177a7) input_focus_pane_cp03

0x0e3f,	// (0x000177b0) list_header_data_pane

0x90e8,	// (0x0001fa59) mce_header_field_pane_t1

0x90f6,	// (0x0001fa67) list_single_mce_header_pane_ParamLimits

0x90f6,	// (0x0001fa67) list_single_mce_header_pane

0x0e47,	// (0x000177b8) list_single_mce_header_pane_t1

0x0e56,	// (0x000177c7) list_single_mce_message_pane_g1

0x0e5e,	// (0x000177cf) list_single_mce_message_pane_t1

0x912e,	// (0x0001fa9f) bg_cale_heading_pane_cp01_ParamLimits

0x912e,	// (0x0001fa9f) bg_cale_heading_pane_cp01

0x0e6c,	// (0x000177dd) bg_cale_pane_cp02_ParamLimits

0x0e6c,	// (0x000177dd) bg_cale_pane_cp02

0x917c,	// (0x0001faed) cale_month_corner_pane

0x919b,	// (0x0001fb0c) cale_month_day_heading_pane_ParamLimits

0x919b,	// (0x0001fb0c) cale_month_day_heading_pane

0x9201,	// (0x0001fb72) cale_month_pane_g1_ParamLimits

0x9201,	// (0x0001fb72) cale_month_pane_g1

0x9244,	// (0x0001fbb5) cale_month_pane_g2_ParamLimits

0x9244,	// (0x0001fbb5) cale_month_pane_g2

0x927e,	// (0x0001fbef) cale_month_pane_g3_ParamLimits

0x927e,	// (0x0001fbef) cale_month_pane_g3

0x92ce,	// (0x0001fc3f) cale_month_pane_g4_ParamLimits

0x92ce,	// (0x0001fc3f) cale_month_pane_g4

0x931e,	// (0x0001fc8f) cale_month_pane_g5_ParamLimits

0x931e,	// (0x0001fc8f) cale_month_pane_g5

0x936e,	// (0x0001fcdf) cale_month_pane_g6_ParamLimits

0x936e,	// (0x0001fcdf) cale_month_pane_g6

0x93be,	// (0x0001fd2f) cale_month_pane_g7_ParamLimits

0x93be,	// (0x0001fd2f) cale_month_pane_g7

0x9426,	// (0x0001fd97) cale_month_pane_g8_ParamLimits

0x9426,	// (0x0001fd97) cale_month_pane_g8

0x948e,	// (0x0001fdff) cale_month_pane_g9_ParamLimits

0x948e,	// (0x0001fdff) cale_month_pane_g9

0x94ec,	// (0x0001fe5d) cale_month_pane_g10_ParamLimits

0x94ec,	// (0x0001fe5d) cale_month_pane_g10

0x954a,	// (0x0001febb) cale_month_pane_g11_ParamLimits

0x954a,	// (0x0001febb) cale_month_pane_g11

0x959e,	// (0x0001ff0f) cale_month_pane_g12_ParamLimits

0x959e,	// (0x0001ff0f) cale_month_pane_g12

0x95f4,	// (0x0001ff65) cale_month_pane_g13_ParamLimits

0x95f4,	// (0x0001ff65) cale_month_pane_g13

0x000c,

0xf225,	// (0x00025b96) cale_month_pane_g_ParamLimits

0xf225,	// (0x00025b96) cale_month_pane_g

0x964a,	// (0x0001ffbb) cale_month_week_pane

0x966e,	// (0x0001ffdf) grid_cale_month_pane_ParamLimits

0x966e,	// (0x0001ffdf) grid_cale_month_pane

0x96cb,	// (0x0002003c) cale_month_day_heading_pane_t1

0x9751,	// (0x000200c2) cale_month_day_heading_pane_t2

0x97ca,	// (0x0002013b) cale_month_day_heading_pane_t3

0x9843,	// (0x000201b4) cale_month_day_heading_pane_t4

0x98bc,	// (0x0002022d) cale_month_day_heading_pane_t5

0x9935,	// (0x000202a6) cale_month_day_heading_pane_t6

0x99ae,	// (0x0002031f) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00025bb1) cale_month_day_heading_pane_t

0x0b1d,	// (0x0001748e) bg_cale_side_pane_cp01

0x9a3f,	// (0x000203b0) cale_month_week_pane_t1

0x9a58,	// (0x000203c9) cale_month_week_pane_t2

0x9a71,	// (0x000203e2) cale_month_week_pane_t3

0x9a8a,	// (0x000203fb) cale_month_week_pane_t4

0x9aa5,	// (0x00020416) cale_month_week_pane_t5

0x9ac6,	// (0x00020437) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00025bc0) cale_month_week_pane_t

0x9ae7,	// (0x00020458) cell_cale_month_pane_ParamLimits

0x9ae7,	// (0x00020458) cell_cale_month_pane

0x7088,	// (0x0001d9f9) cell_cale_month_pane_g1

0x7094,	// (0x0001da05) cell_cale_month_pane_t1_ParamLimits

0x7094,	// (0x0001da05) cell_cale_month_pane_t1

0x0b2b,	// (0x0001749c) grid_highlight_pane_cp08

0x0843,	// (0x000171b4) main_smil_g1

0x9c0d,	// (0x0002057e) smil_status_pane

0x0eb7,	// (0x00017828) smil_text_pane

0x28b2,	// (0x00019223) bg_popup_call3_rect_pane_g8

0x28ba,	// (0x0001922b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00025e5e) bg_popup_call3_rect_pane_g

0x2b0a,	// (0x0001947b) smil_status_volume_pane_g1

0x0ec1,	// (0x00017832) smil_status_pane_t1

0x735e,	// (0x0001dccf) volume_smil_pane

0x0ed8,	// (0x00017849) list_smil_text_pane

0x9c20,	// (0x00020591) scroll_pane_cp011

0x9c2b,	// (0x0002059c) smil_text_list_pane_t1_ParamLimits

0x9c2b,	// (0x0002059c) smil_text_list_pane_t1

0x70c0,	// (0x0001da31) aid_volume_smil_ParamLimits

0x70c0,	// (0x0001da31) aid_volume_smil

0x0843,	// (0x000171b4) smil_volume_pane_g1

0x0843,	// (0x000171b4) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00025bd2) smil_volume_pane_g

0x85ed,	// (0x0001ef5e) listscroll_cale_day_pane

0x0f04,	// (0x00017875) bg_cale_pane

0x0f1c,	// (0x0001788d) list_cale_pane

0x0f3f,	// (0x000178b0) scroll_pane_cp09

0x0f50,	// (0x000178c1) cale_bg_pane_g1

0x0f58,	// (0x000178c9) cale_bg_pane_g2

0x0f60,	// (0x000178d1) cale_bg_pane_g3

0x0f68,	// (0x000178d9) cale_bg_pane_g4

0x0f70,	// (0x000178e1) cale_bg_pane_g5

0x0f78,	// (0x000178e9) cale_bg_pane_g6

0x0f80,	// (0x000178f1) cale_bg_pane_g7

0x0f88,	// (0x000178f9) cale_bg_pane_g8

0x0f90,	// (0x00017901) cale_bg_pane_g9

0x0008,

0xf266,	// (0x00025bd7) cale_bg_pane_g

0x9cc0,	// (0x00020631) list_cale_time_pane_ParamLimits

0x9cc0,	// (0x00020631) list_cale_time_pane

0x0f98,	// (0x00017909) list_cale_time_pane_g1_ParamLimits

0x0f98,	// (0x00017909) list_cale_time_pane_g1

0x0fa4,	// (0x00017915) list_cale_time_pane_g2_ParamLimits

0x0fa4,	// (0x00017915) list_cale_time_pane_g2

0x9ce8,	// (0x00020659) list_cale_time_pane_g3_ParamLimits

0x9ce8,	// (0x00020659) list_cale_time_pane_g3

0x9cf6,	// (0x00020667) list_cale_time_pane_g4_ParamLimits

0x9cf6,	// (0x00020667) list_cale_time_pane_g4

0x9d04,	// (0x00020675) list_cale_time_pane_g5_ParamLimits

0x9d04,	// (0x00020675) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x00025bea) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x00025bea) list_cale_time_pane_g

0x0fbe,	// (0x0001792f) list_cale_time_pane_t1_ParamLimits

0x0fbe,	// (0x0001792f) list_cale_time_pane_t1

0x0fe6,	// (0x00017957) list_cale_time_pane_t2_ParamLimits

0x0fe6,	// (0x00017957) list_cale_time_pane_t2

0x9f68,	// (0x000208d9) aid_blid_cardinal_pane

0x9faa,	// (0x0002091b) compass_pane_t4

0x100e,	// (0x0001797f) list_cale_time_pane_t4_ParamLimits

0x100e,	// (0x0001797f) list_cale_time_pane_t4

0x9fb8,	// (0x00020929) compass_pane_t5

0x9fc8,	// (0x00020939) compass_pane_t6

0x9fd6,	// (0x00020947) compass_pane_t7

0x1505,	// (0x00017e76) navi_pane_cc_t1

0x16f4,	// (0x00018065) aid_phob_thumbnail_center_pane

0xa409,	// (0x00020d7a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00025bf7) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00025bf7) list_cale_time_pane_t

0x0227,	// (0x00016b98) bg_popup_window_pane_cp02_ParamLimits

0x0227,	// (0x00016b98) bg_popup_window_pane_cp02

0x1036,	// (0x000179a7) heading_pane_cp01_ParamLimits

0x1036,	// (0x000179a7) heading_pane_cp01

0x1042,	// (0x000179b3) loc_req_pane_ParamLimits

0x1042,	// (0x000179b3) loc_req_pane

0x1052,	// (0x000179c3) loc_type_pane_ParamLimits

0x1052,	// (0x000179c3) loc_type_pane

0x1064,	// (0x000179d5) loc_type_pane_t1_ParamLimits

0x1064,	// (0x000179d5) loc_type_pane_t1

0x1076,	// (0x000179e7) loc_type_pane_t2_ParamLimits

0x1076,	// (0x000179e7) loc_type_pane_t2

0x1088,	// (0x000179f9) loc_type_pane_t3_ParamLimits

0x1088,	// (0x000179f9) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00025bfe) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00025bfe) loc_type_pane_t

0x109a,	// (0x00017a0b) list_loc_req_pane

0x10a4,	// (0x00017a15) scroll_pane_cp012

0x9d12,	// (0x00020683) list_single_loc_request_popup_menu_pane_ParamLimits

0x9d12,	// (0x00020683) list_single_loc_request_popup_menu_pane

0x10af,	// (0x00017a20) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x10af,	// (0x00017a20) list_single_loc_request_popup_menu_pane_g1

0x10bb,	// (0x00017a2c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x10bb,	// (0x00017a2c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00025c05) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00025c05) list_single_loc_request_popup_menu_pane_g

0x10c7,	// (0x00017a38) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x10c7,	// (0x00017a38) list_single_loc_request_popup_menu_pane_t1

0x9d2a,	// (0x0002069b) bg_popup_window_pane_cp03_ParamLimits

0x9d2a,	// (0x0002069b) bg_popup_window_pane_cp03

0x9d38,	// (0x000206a9) heading_loc_req_pane_ParamLimits

0x9d38,	// (0x000206a9) heading_loc_req_pane

0x9d44,	// (0x000206b5) popup_dyc_status_message_window_g1_ParamLimits

0x9d44,	// (0x000206b5) popup_dyc_status_message_window_g1

0x9d50,	// (0x000206c1) popup_dyc_status_message_window_t1_ParamLimits

0x9d50,	// (0x000206c1) popup_dyc_status_message_window_t1

0x9d62,	// (0x000206d3) popup_dyc_status_message_window_t2_ParamLimits

0x9d62,	// (0x000206d3) popup_dyc_status_message_window_t2

0x9d74,	// (0x000206e5) popup_dyc_status_message_window_t3_ParamLimits

0x9d74,	// (0x000206e5) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x00025c0a) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x00025c0a) popup_dyc_status_message_window_t

0x05d0,	// (0x00016f41) bg_heading_pane_cp01

0x10e9,	// (0x00017a5a) heading_loc_req_pane_g1

0x10f1,	// (0x00017a62) heading_loc_req_pane_g2

0x10f9,	// (0x00017a6a) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00025c11) heading_loc_req_pane_g

0x1101,	// (0x00017a72) heading_loc_req_pane_t1

0x1120,	// (0x00017a91) bg_popup_sub_pane_cp01_ParamLimits

0x1120,	// (0x00017a91) bg_popup_sub_pane_cp01

0x112e,	// (0x00017a9f) popup_cale_events_window_g1_ParamLimits

0x112e,	// (0x00017a9f) popup_cale_events_window_g1

0x114e,	// (0x00017abf) popup_cale_events_window_g2_ParamLimits

0x114e,	// (0x00017abf) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x00025c33) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x00025c33) popup_cale_events_window_g

0x116e,	// (0x00017adf) popup_cale_events_window_t1_ParamLimits

0x116e,	// (0x00017adf) popup_cale_events_window_t1

0x1180,	// (0x00017af1) popup_cale_events_window_t2_ParamLimits

0x1180,	// (0x00017af1) popup_cale_events_window_t2

0x11be,	// (0x00017b2f) popup_cale_events_window_t3_ParamLimits

0x11be,	// (0x00017b2f) popup_cale_events_window_t3

0x11f8,	// (0x00017b69) popup_cale_events_window_t4_ParamLimits

0x11f8,	// (0x00017b69) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00025c38) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00025c38) popup_cale_events_window_t

0x9d9e,	// (0x0002070f) call_type_pane

0x20dd,	// (0x00018a4e) popup_call_status_window_g1

0x9daa,	// (0x0002071b) popup_call_status_window_g2

0x9db6,	// (0x00020727) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00025c41) popup_call_status_window_g

0x122e,	// (0x00017b9f) call_type_pane_g1

0x1237,	// (0x00017ba8) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00025c48) call_type_pane_g

0x05d0,	// (0x00016f41) bg_popup_sub_pane_cp02

0x1240,	// (0x00017bb1) listscroll_popup_wml_pane

0x1248,	// (0x00017bb9) list_wml_pane

0x1252,	// (0x00017bc3) scroll_pane_cp013

0x125d,	// (0x00017bce) list_single_graphic_popup_wml_pane_ParamLimits

0x125d,	// (0x00017bce) list_single_graphic_popup_wml_pane

0x0843,	// (0x000171b4) list_single_graphic_popup_wml_pane_g1

0x1271,	// (0x00017be2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00025c4d) list_single_graphic_popup_wml_pane_g

0x1279,	// (0x00017bea) list_single_graphic_popup_wml_pane_t1

0x1287,	// (0x00017bf8) aid_call_pane

0x0823,	// (0x00017194) popup_clock_analogue_window_g1

0x0823,	// (0x00017194) popup_clock_analogue_window_g2

0x70e2,	// (0x0001da53) popup_clock_analogue_window_g3

0x70e2,	// (0x0001da53) popup_clock_analogue_window_g4

0x0843,	// (0x000171b4) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x00025c52) popup_clock_analogue_window_g

0x70ea,	// (0x0001da5b) popup_clock_analogue_window_t1

0x70f8,	// (0x0001da69) clock_digital_number_pane_ParamLimits

0x70f8,	// (0x0001da69) clock_digital_number_pane

0x7104,	// (0x0001da75) clock_digital_number_pane_cp02_ParamLimits

0x7104,	// (0x0001da75) clock_digital_number_pane_cp02

0x7110,	// (0x0001da81) clock_digital_number_pane_cp03_ParamLimits

0x7110,	// (0x0001da81) clock_digital_number_pane_cp03

0x711c,	// (0x0001da8d) clock_digital_number_pane_cp04_ParamLimits

0x711c,	// (0x0001da8d) clock_digital_number_pane_cp04

0x7128,	// (0x0001da99) clock_digital_separator_pane_ParamLimits

0x7128,	// (0x0001da99) clock_digital_separator_pane

0x7134,	// (0x0001daa5) popup_clock_digital_window_t1

0x0843,	// (0x000171b4) clock_digital_number_pane_g1

0x0843,	// (0x000171b4) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00025bd2) clock_digital_number_pane_g

0x0843,	// (0x000171b4) clock_digital_separator_pane_g1

0x0843,	// (0x000171b4) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00025bd2) clock_digital_separator_pane_g

0x05d0,	// (0x00016f41) bg_popup_window_pane_cp04

0x1306,	// (0x00017c77) heading_pane_cp03

0x0b6f,	// (0x000174e0) listscroll_popup_gms_pane

0x05d0,	// (0x00016f41) grid_large_graphic_popup_pane

0x130f,	// (0x00017c80) listscroll_popup_gms_pane_g1

0x1318,	// (0x00017c89) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00025c5d) listscroll_popup_gms_pane_g

0x1321,	// (0x00017c92) scroll_pane_cp014

0x0898,	// (0x00017209) cell_large_graphic_popup_pane_ParamLimits

0x0898,	// (0x00017209) cell_large_graphic_popup_pane

0x08a6,	// (0x00017217) cell_large_graphic_popup_pane_g1_ParamLimits

0x08a6,	// (0x00017217) cell_large_graphic_popup_pane_g1

0x132a,	// (0x00017c9b) cell_large_graphic_popup_pane_g2_ParamLimits

0x132a,	// (0x00017c9b) cell_large_graphic_popup_pane_g2

0x1338,	// (0x00017ca9) cell_large_graphic_popup_pane_g3_ParamLimits

0x1338,	// (0x00017ca9) cell_large_graphic_popup_pane_g3

0x1346,	// (0x00017cb7) cell_large_graphic_popup_pane_g4_ParamLimits

0x1346,	// (0x00017cb7) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x00025c62) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x00025c62) cell_large_graphic_popup_pane_g

0x05d0,	// (0x00016f41) grid_highlight_pane_cp010

0x0843,	// (0x000171b4) bg_popup_call_pane_g1

0x1357,	// (0x00017cc8) list_single_graphic_popup_conf_pane_ParamLimits

0x1357,	// (0x00017cc8) list_single_graphic_popup_conf_pane

0x136a,	// (0x00017cdb) list_highlight_pane_cp01

0x1373,	// (0x00017ce4) list_single_graphic_popup_conf_pane_g1

0x137b,	// (0x00017cec) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00025c6b) list_single_graphic_popup_conf_pane_g

0x1383,	// (0x00017cf4) list_single_graphic_popup_conf_pane_t1

0x1391,	// (0x00017d02) linegrid_cams_pane_g1

0x9dc2,	// (0x00020733) linegrid_cams_pane_g2

0x0aa0,	// (0x00017411) linegrid_cams_pane_g3

0x139a,	// (0x00017d0b) linegrid_cams_pane_g4

0x9dcb,	// (0x0002073c) linegrid_cams_pane_g5

0x9dd4,	// (0x00020745) linegrid_cams_pane_g6

0x0b5e,	// (0x000174cf) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00025c70) linegrid_cams_pane_g

0x13a3,	// (0x00017d14) popup_clock_analogue_window

0x13a3,	// (0x00017d14) popup_clock_digital_window

0x05d0,	// (0x00016f41) popup_phob_thumbnail_window

0x0843,	// (0x000171b4) call_video_uplink_pane_g1

0x13ac,	// (0x00017d1d) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00025c7f) call_video_uplink_pane_g

0x13b4,	// (0x00017d25) video_uplink_pane

0x13bc,	// (0x00017d2d) mce_image_pane_g1

0x9ddd,	// (0x0002074e) mce_image_pane_g2

0x9de5,	// (0x00020756) mce_image_pane_g3

0x9ded,	// (0x0002075e) mce_image_pane_g4

0x9df5,	// (0x00020766) mce_image_pane_g5

0x0004,

0xf313,	// (0x00025c84) mce_image_pane_g

0x13c6,	// (0x00017d37) control_top_pane_stacon_cp01_ParamLimits

0x13c6,	// (0x00017d37) control_top_pane_stacon_cp01

0x13da,	// (0x00017d4b) uni_indicator_pane_stacon_cp01_ParamLimits

0x13da,	// (0x00017d4b) uni_indicator_pane_stacon_cp01

0x13eb,	// (0x00017d5c) bg_popup_sub_pane_cp03

0x9dfd,	// (0x0002076e) chi_dic_find_pane

0x9e05,	// (0x00020776) listscroll_chi_dic_pane

0x9e0e,	// (0x0002077f) main_pane_chidic_g1

0x9e21,	// (0x00020792) chi_dic_find_pane_t1

0x13f5,	// (0x00017d66) find_chidic_pane

0x13fe,	// (0x00017d6f) chi_dic_list_pane_ParamLimits

0x13fe,	// (0x00017d6f) chi_dic_list_pane

0x140f,	// (0x00017d80) scroll_pane_cp020

0x9e2f,	// (0x000207a0) find_chidic_pane_t1

0x05d0,	// (0x00016f41) input_focus_pane_cp06

0x9e3e,	// (0x000207af) list_chi_dic_pane_ParamLimits

0x9e3e,	// (0x000207af) list_chi_dic_pane

0x9e5b,	// (0x000207cc) list_chi_dic_pane_t1_ParamLimits

0x9e5b,	// (0x000207cc) list_chi_dic_pane_t1

0x05d0,	// (0x00016f41) list_highlight_pane_cp020

0x1417,	// (0x00017d88) bg_cale_heading_pane_g1

0x9e6e,	// (0x000207df) bg_cale_heading_pane_g2

0x9e76,	// (0x000207e7) bg_cale_heading_pane_g3

0x9e7e,	// (0x000207ef) bg_cale_heading_pane_g4

0x9e88,	// (0x000207f9) bg_cale_heading_pane_g5

0x9e92,	// (0x00020803) bg_cale_heading_pane_g6

0x9e9a,	// (0x0002080b) bg_cale_heading_pane_g7

0x9ea2,	// (0x00020813) bg_cale_heading_pane_g8

0x9eac,	// (0x0002081d) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00025c8f) bg_cale_heading_pane_g

0x1417,	// (0x00017d88) bg_cale_side_pane_g1

0x9eb6,	// (0x00020827) bg_cale_side_pane_g2

0x9ec0,	// (0x00020831) bg_cale_side_pane_g3

0x9eca,	// (0x0002083b) bg_cale_side_pane_g4

0x9ed4,	// (0x00020845) bg_cale_side_pane_g5

0x9ede,	// (0x0002084f) bg_cale_side_pane_g6

0x9ee8,	// (0x00020859) bg_cale_side_pane_g7

0x9ef2,	// (0x00020863) bg_cale_side_pane_g8

0x9efa,	// (0x0002086b) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00025ca2) bg_cale_side_pane_g

0x9f02,	// (0x00020873) popup_call_status_window_ParamLimits

0x9f02,	// (0x00020873) popup_call_status_window

0x141f,	// (0x00017d90) stacon_top_pane

0x1427,	// (0x00017d98) status_pane_ParamLimits

0x1427,	// (0x00017d98) status_pane

0x143c,	// (0x00017dad) status_small_pane

0x1444,	// (0x00017db5) control_pane

0x05d0,	// (0x00016f41) stacon_bottom_pane

0x144c,	// (0x00017dbd) list_single_mce_smart_pane_t1_ParamLimits

0x144c,	// (0x00017dbd) list_single_mce_smart_pane_t1

0x145f,	// (0x00017dd0) list_single_mce_smart_pane_t2_ParamLimits

0x145f,	// (0x00017dd0) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00025cb5) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00025cb5) list_single_mce_smart_pane_t

0x9f0e,	// (0x0002087f) compass_pane

0x9f1a,	// (0x0002088b) main_location2_pane_t1

0x9f2e,	// (0x0002089f) main_location2_pane_t2

0x9f42,	// (0x000208b3) main_location2_pane_t3

0x0003,

0xf349,	// (0x00025cba) main_location2_pane_t

0x147e,	// (0x00017def) compass_pane_g1_ParamLimits

0x147e,	// (0x00017def) compass_pane_g1

0x9f8c,	// (0x000208fd) compass_pane_t1

0x9f9b,	// (0x0002090c) compass_pane_t2

0x0005,

0xf352,	// (0x00025cc3) compass_pane_t

0x9fe6,	// (0x00020957) text_secondary_cp61

0x14fc,	// (0x00017e6d) navi_pane_cams_g5

0x1578,	// (0x00017ee9) navi_pane_im_t1

0x1586,	// (0x00017ef7) navi_pane_mp_g1_ParamLimits

0x1586,	// (0x00017ef7) navi_pane_mp_g1

0x159a,	// (0x00017f0b) navi_pane_mp_g2_ParamLimits

0x159a,	// (0x00017f0b) navi_pane_mp_g2

0x15a6,	// (0x00017f17) navi_pane_mp_g3_ParamLimits

0x15a6,	// (0x00017f17) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00025cd7) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00025cd7) navi_pane_mp_g

0x15b2,	// (0x00017f23) navi_pane_mp_t1

0x15c0,	// (0x00017f31) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00025cde) navi_pane_mp_t

0x162b,	// (0x00017f9c) navi_pane_vt_g1

0x15b2,	// (0x00017f23) navi_pane_vt_t1

0x1633,	// (0x00017fa4) navi_slider_pane

0x0b6f,	// (0x000174e0) zooming_pane

0x1643,	// (0x00017fb4) navi_slider_pane_g1

0x7151,	// (0x0001dac2) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00025ce5) navi_slider_pane_g

0x1679,	// (0x00017fea) aid_levels_zoom

0x1681,	// (0x00017ff2) zooming_pane_g1

0x1689,	// (0x00017ffa) zooming_pane_g2

0x1689,	// (0x00017ffa) zooming_pane_g3

0x0002,

0xf383,	// (0x00025cf4) zooming_pane_g

0x1691,	// (0x00018002) level_10_zoom

0x169a,	// (0x0001800b) level_11_zoom

0x16a3,	// (0x00018014) level_1_zoom

0x16ac,	// (0x0001801d) level_2_zoom

0x16b5,	// (0x00018026) level_3_zoom

0x16be,	// (0x0001802f) level_4_zoom

0x16c7,	// (0x00018038) level_5_zoom

0x16d0,	// (0x00018041) level_6_zoom

0x16d9,	// (0x0001804a) level_7_zoom

0x16e2,	// (0x00018053) level_8_zoom

0x16eb,	// (0x0001805c) level_9_zoom

0x16fc,	// (0x0001806d) popup_phob_thumbnail_window_g1

0x1704,	// (0x00018075) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00025cfb) popup_phob_thumbnail_window_g

0xa9c8,	// (0x00021339) level_1_location

0xa9d0,	// (0x00021341) level_2_location

0xa9d8,	// (0x00021349) level_3_location

0xa9e2,	// (0x00021353) level_4_location

0x0b6f,	// (0x000174e0) level_5_location

0xa021,	// (0x00020992) mce_icon_pane_g1

0xa029,	// (0x0002099a) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00025d00) mce_icon_pane_g

0xa031,	// (0x000209a2) main_mup_pane_g1_ParamLimits

0xa031,	// (0x000209a2) main_mup_pane_g1

0x08c2,	// (0x00017233) main_mup_pane_g2_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g2

0x08c2,	// (0x00017233) main_mup_pane_g3_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g3

0x08c2,	// (0x00017233) main_mup_pane_g4_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g4

0x08c2,	// (0x00017233) main_mup_pane_g5_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g5

0x08c2,	// (0x00017233) main_mup_pane_g6_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g6

0x08c2,	// (0x00017233) main_mup_pane_g7_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g7

0x08c2,	// (0x00017233) main_mup_pane_g8_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g8

0x08c2,	// (0x00017233) main_mup_pane_g9_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g9

0x08c2,	// (0x00017233) main_mup_pane_g10_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g10

0x08c2,	// (0x00017233) main_mup_pane_g11_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g11

0x08b4,	// (0x00017225) main_mup_pane_g12_ParamLimits

0x08b4,	// (0x00017225) main_mup_pane_g12

0x08c2,	// (0x00017233) main_mup_pane_g13_ParamLimits

0x08c2,	// (0x00017233) main_mup_pane_g13

0x000c,

0xf394,	// (0x00025d05) main_mup_pane_g_ParamLimits

0xf394,	// (0x00025d05) main_mup_pane_g

0x08d0,	// (0x00017241) main_mup_pane_t1_ParamLimits

0x08d0,	// (0x00017241) main_mup_pane_t1

0x08d0,	// (0x00017241) main_mup_pane_t2_ParamLimits

0x08d0,	// (0x00017241) main_mup_pane_t2

0x08d0,	// (0x00017241) main_mup_pane_t3_ParamLimits

0x08d0,	// (0x00017241) main_mup_pane_t3

0x172e,	// (0x0001809f) main_mup_pane_t4_ParamLimits

0x172e,	// (0x0001809f) main_mup_pane_t4

0x172e,	// (0x0001809f) main_mup_pane_t5_ParamLimits

0x172e,	// (0x0001809f) main_mup_pane_t5

0x0b81,	// (0x000174f2) main_mup_pane_t6_ParamLimits

0x0b81,	// (0x000174f2) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00025d20) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00025d20) main_mup_pane_t

0x01af,	// (0x00016b20) mup_progress_pane_ParamLimits

0x01af,	// (0x00016b20) mup_progress_pane

0x2ba3,	// (0x00019514) mup_visualizer_pane_ParamLimits

0x2ba3,	// (0x00019514) mup_visualizer_pane

0x2ba3,	// (0x00019514) mup_volume_pane_ParamLimits

0x2ba3,	// (0x00019514) mup_volume_pane

0x08b4,	// (0x00017225) mup_visualizer_pane_g1_ParamLimits

0x08b4,	// (0x00017225) mup_visualizer_pane_g1

0x1750,	// (0x000180c1) mup_visualizer_pane_g2_ParamLimits

0x1750,	// (0x000180c1) mup_visualizer_pane_g2

0x08a6,	// (0x00017217) mup_visualizer_pane_g3_ParamLimits

0x08a6,	// (0x00017217) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00025d2d) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00025d2d) mup_visualizer_pane_g

0x0baf,	// (0x00017520) mup_volume_pane_g1

0x0baf,	// (0x00017520) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x00025d34) mup_volume_pane_g

0x0baf,	// (0x00017520) mup_progress_pane_g1

0x0baf,	// (0x00017520) mup_progress_pane_g2

0x0baf,	// (0x00017520) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00025d39) mup_progress_pane_g

0x05d0,	// (0x00016f41) bg_popup_window_pane_cp05

0x175e,	// (0x000180cf) heading_pane_cp02_ParamLimits

0x175e,	// (0x000180cf) heading_pane_cp02

0x1778,	// (0x000180e9) list_popup_blid_pane

0x1780,	// (0x000180f1) list_blid_sat_info_pane_ParamLimits

0x1780,	// (0x000180f1) list_blid_sat_info_pane

0x1793,	// (0x00018104) list_blid_sat_info_pane_g1

0x179b,	// (0x0001810c) list_blid_sat_info_pane_t1

0xa12c,	// (0x00020a9d) mup_equalizer_pane_ParamLimits

0xa12c,	// (0x00020a9d) mup_equalizer_pane

0xa14d,	// (0x00020abe) mup_equalizer_pane_cp1_ParamLimits

0xa14d,	// (0x00020abe) mup_equalizer_pane_cp1

0xa16e,	// (0x00020adf) mup_equalizer_pane_cp2_ParamLimits

0xa16e,	// (0x00020adf) mup_equalizer_pane_cp2

0xa18f,	// (0x00020b00) mup_equalizer_pane_cp3_ParamLimits

0xa18f,	// (0x00020b00) mup_equalizer_pane_cp3

0xa1b0,	// (0x00020b21) mup_equalizer_pane_cp4_ParamLimits

0xa1b0,	// (0x00020b21) mup_equalizer_pane_cp4

0xa1d1,	// (0x00020b42) mup_equalizer_pane_cp5

0xa1e7,	// (0x00020b58) mup_equalizer_pane_cp6

0xa1ff,	// (0x00020b70) mup_equalizer_pane_cp7

0x2932,	// (0x000192a3) bg_popup_call_poc_act_pane_g9

0x293a,	// (0x000192ab) bg_popup_call_poc_act_pane_g10

0x2942,	// (0x000192b3) bg_popup_call_poc_act_pane_g11

0x000a,

0x082b,	// (0x0001719c) mup_scale_pane

0x0843,	// (0x000171b4) mup_scale_pane_g1

0x17a9,	// (0x0001811a) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x00025d55) mup_scale_pane_g

0x17cd,	// (0x0001813e) msg_data_pane

0x17d5,	// (0x00018146) scroll_pane_cp017

0xa229,	// (0x00020b9a) bg_list_pane_cp04_ParamLimits

0xa229,	// (0x00020b9a) bg_list_pane_cp04

0x17dd,	// (0x0001814e) msg_data_pane_g1

0xa24d,	// (0x00020bbe) msg_data_pane_g2

0xa255,	// (0x00020bc6) msg_data_pane_g3

0xa25d,	// (0x00020bce) msg_data_pane_g4

0xa265,	// (0x00020bd6) msg_data_pane_g5

0xa26d,	// (0x00020bde) msg_data_pane_g6

0xa275,	// (0x00020be6) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x00025d64) msg_data_pane_g

0xa27d,	// (0x00020bee) msg_text_pane_ParamLimits

0xa27d,	// (0x00020bee) msg_text_pane

0xa2cf,	// (0x00020c40) qrid_highlight_pane_cp011_ParamLimits

0xa2cf,	// (0x00020c40) qrid_highlight_pane_cp011

0x05d0,	// (0x00016f41) msg_body_pane

0x05d0,	// (0x00016f41) msg_header_pane

0x17ee,	// (0x0001815f) input_focus_pane_cp07

0xa2f7,	// (0x00020c68) msg_header_pane_t1_ParamLimits

0xa2f7,	// (0x00020c68) msg_header_pane_t1

0xa30d,	// (0x00020c7e) msg_header_pane_t2_ParamLimits

0xa30d,	// (0x00020c7e) msg_header_pane_t2

0x0001,

0xf407,	// (0x00025d78) msg_header_pane_t_ParamLimits

0xf407,	// (0x00025d78) msg_header_pane_t

0x1803,	// (0x00018174) msg_body_pane_g1

0xa324,	// (0x00020c95) msg_body_pane_t1_ParamLimits

0xa324,	// (0x00020c95) msg_body_pane_t1

0xa355,	// (0x00020cc6) msg_body_pane_t2_ParamLimits

0xa355,	// (0x00020cc6) msg_body_pane_t2

0xa367,	// (0x00020cd8) msg_body_pane_t3_ParamLimits

0xa367,	// (0x00020cd8) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00025d7d) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00025d7d) msg_body_pane_t

0x7193,	// (0x0001db04) main_viewer_pane_g1_ParamLimits

0x7193,	// (0x0001db04) main_viewer_pane_g1

0x719f,	// (0x0001db10) main_viewer_pane_g2_ParamLimits

0x719f,	// (0x0001db10) main_viewer_pane_g2

0xa39b,	// (0x00020d0c) main_viewer_pane_g3_ParamLimits

0xa39b,	// (0x00020d0c) main_viewer_pane_g3

0xa3ac,	// (0x00020d1d) main_viewer_pane_g4_ParamLimits

0xa3ac,	// (0x00020d1d) main_viewer_pane_g4

0x71ab,	// (0x0001db1c) main_viewer_pane_g5_ParamLimits

0x71ab,	// (0x0001db1c) main_viewer_pane_g5

0x71ab,	// (0x0001db1c) main_viewer_pane_g7_ParamLimits

0x71ab,	// (0x0001db1c) main_viewer_pane_g7

0x10af,	// (0x00017a20) main_viewer_pane_g8_ParamLimits

0x10af,	// (0x00017a20) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00025d8d) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00025d8d) main_viewer_pane_g

0x184d,	// (0x000181be) viewer_content_pane_ParamLimits

0x184d,	// (0x000181be) viewer_content_pane

0xa3dd,	// (0x00020d4e) main_postcard_pane_g1_ParamLimits

0xa3dd,	// (0x00020d4e) main_postcard_pane_g1

0xa3eb,	// (0x00020d5c) main_postcard_pane_g2_ParamLimits

0xa3eb,	// (0x00020d5c) main_postcard_pane_g2

0xa3f9,	// (0x00020d6a) main_postcard_pane_g3_ParamLimits

0xa3f9,	// (0x00020d6a) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00025d9e) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00025d9e) main_postcard_pane_g

0xa409,	// (0x00020d7a) main_postcard_pane_g4

0x2af7,	// (0x00019468) smil_status_volume_pane_g2

0xa435,	// (0x00020da6) postcard_pane_ParamLimits

0xa435,	// (0x00020da6) postcard_pane

0x20dd,	// (0x00018a4e) postcard_pane_g1_ParamLimits

0x20dd,	// (0x00018a4e) postcard_pane_g1

0xa467,	// (0x00020dd8) postcard_pane_g2_ParamLimits

0xa467,	// (0x00020dd8) postcard_pane_g2

0xa473,	// (0x00020de4) postcard_pane_g3_ParamLimits

0xa473,	// (0x00020de4) postcard_pane_g3

0x1869,	// (0x000181da) postcard_pane_g4_ParamLimits

0x1869,	// (0x000181da) postcard_pane_g4

0xa47f,	// (0x00020df0) postcard_pane_g5_ParamLimits

0xa47f,	// (0x00020df0) postcard_pane_g5

0xa48b,	// (0x00020dfc) postcard_pane_g6_ParamLimits

0xa48b,	// (0x00020dfc) postcard_pane_g6

0x185b,	// (0x000181cc) postcard_pane_g7_ParamLimits

0x185b,	// (0x000181cc) postcard_pane_g7

0x0006,

0xf43a,	// (0x00025dab) postcard_pane_g_ParamLimits

0xf43a,	// (0x00025dab) postcard_pane_g

0xa497,	// (0x00020e08) main_mp2_pane_g1_ParamLimits

0xa497,	// (0x00020e08) main_mp2_pane_g1

0xa4a3,	// (0x00020e14) main_mp2_pane_g2_ParamLimits

0xa4a3,	// (0x00020e14) main_mp2_pane_g2

0xa4af,	// (0x00020e20) main_mp2_pane_g3_ParamLimits

0xa4af,	// (0x00020e20) main_mp2_pane_g3

0x0002,

0xf449,	// (0x00025dba) main_mp2_pane_g_ParamLimits

0xf449,	// (0x00025dba) main_mp2_pane_g

0xa4bb,	// (0x00020e2c) main_mp2_pane_t1_ParamLimits

0xa4bb,	// (0x00020e2c) main_mp2_pane_t1

0xa4d2,	// (0x00020e43) main_mp2_pane_t2_ParamLimits

0xa4d2,	// (0x00020e43) main_mp2_pane_t2

0xa4e4,	// (0x00020e55) main_mp2_pane_t3_ParamLimits

0xa4e4,	// (0x00020e55) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00025dc1) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00025dc1) main_mp2_pane_t

0x1877,	// (0x000181e8) pec_content_pane_ParamLimits

0x1877,	// (0x000181e8) pec_content_pane

0x0d10,	// (0x00017681) scroll_pane_cp015

0x1889,	// (0x000181fa) pec_attribute_pane_ParamLimits

0x1889,	// (0x000181fa) pec_attribute_pane

0xa4f6,	// (0x00020e67) pec_content_pane_g1_ParamLimits

0xa4f6,	// (0x00020e67) pec_content_pane_g1

0x1899,	// (0x0001820a) pec_content_pane_t1_ParamLimits

0x1899,	// (0x0001820a) pec_content_pane_t1

0x18ab,	// (0x0001821c) pec_content_pane_t2_ParamLimits

0x18ab,	// (0x0001821c) pec_content_pane_t2

0x0001,

0xf457,	// (0x00025dc8) pec_content_pane_t_ParamLimits

0xf457,	// (0x00025dc8) pec_content_pane_t

0xa502,	// (0x00020e73) list_single_graphic_pane_cp01_ParamLimits

0xa502,	// (0x00020e73) list_single_graphic_pane_cp01

0x082b,	// (0x0001719c) bg_popup_sub_pane_cp04

0x18bd,	// (0x0001822e) popup_mup_playback_window_g1

0x18c9,	// (0x0001823a) popup_mup_playback_window_t1

0x18de,	// (0x0001824f) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00025dcd) popup_mup_playback_window_t

0x1915,	// (0x00018286) main_image_pane_g1_ParamLimits

0x1915,	// (0x00018286) main_image_pane_g1

0x1958,	// (0x000182c9) scroll_pane_cp018_ParamLimits

0x1958,	// (0x000182c9) scroll_pane_cp018

0x1970,	// (0x000182e1) scroll_pane_cp016_ParamLimits

0x1970,	// (0x000182e1) scroll_pane_cp016

0xa59c,	// (0x00020f0d) smil2_image_pane_ParamLimits

0xa59c,	// (0x00020f0d) smil2_image_pane

0xa5cc,	// (0x00020f3d) smil2_root_pane_ParamLimits

0xa5cc,	// (0x00020f3d) smil2_root_pane

0xa5f8,	// (0x00020f69) smil2_text_pane_ParamLimits

0xa5f8,	// (0x00020f69) smil2_text_pane

0x05d0,	// (0x00016f41) bg_list_pane_cp06

0x19ac,	// (0x0001831d) grid_radio_pane

0x05d0,	// (0x00016f41) bg_popup_window_pane_cp06

0x19b4,	// (0x00018325) main_fmradio_pane_t1

0x298a,	// (0x000192fb) heading_pane_cp04

0x19c2,	// (0x00018333) main_fmradio_pane_t2

0x2992,	// (0x00019303) popup_cale_lunar_info_window_g1

0x19d0,	// (0x00018341) main_fmradio_pane_t3

0x299a,	// (0x0001930b) popup_cale_lunar_info_window_g2

0x19de,	// (0x0001834f) main_fmradio_pane_t4

0x0001,

0x19ec,	// (0x0001835d) main_fmradio_pane_t5

0x0004,

0xf54f,	// (0x00025ec0) popup_cale_lunar_info_window_g

0xf471,	// (0x00025de2) main_fmradio_pane_t

0x19fa,	// (0x0001836b) wait_bar_pane_cp03

0x1a02,	// (0x00018373) cell_fmradio_pane_ParamLimits

0x1a02,	// (0x00018373) cell_fmradio_pane

0x185b,	// (0x000181cc) cell_fmradio_pane_g1_ParamLimits

0x185b,	// (0x000181cc) cell_fmradio_pane_g1

0x05d0,	// (0x00016f41) grid_highlight_pane_cp011

0x1a15,	// (0x00018386) poc_content_pane_ParamLimits

0x1a15,	// (0x00018386) poc_content_pane

0x1a27,	// (0x00018398) scroll_pane_cp019

0xa638,	// (0x00020fa9) popup_call_poc_act_window_ParamLimits

0xa638,	// (0x00020fa9) popup_call_poc_act_window

0xa645,	// (0x00020fb6) popup_call_poc_inact_window_ParamLimits

0xa645,	// (0x00020fb6) popup_call_poc_inact_window

0xf513,	// (0x00025e84) bg_popup_call_poc_act_pane_g

0x294a,	// (0x000192bb) bg_popup_call_poc_inact_pane_g1

0x2952,	// (0x000192c3) bg_popup_call_poc_inact_pane_g2

0x1a2f,	// (0x000183a0) popup_call_poc_act_window_g2

0x295a,	// (0x000192cb) bg_popup_call_poc_inact_pane_g3

0x28da,	// (0x0001924b) bg_popup_call_poc_inact_pane_g4

0x2962,	// (0x000192d3) bg_popup_call_poc_inact_pane_g5

0x1a37,	// (0x000183a8) popup_call_poc_act_window_t1_ParamLimits

0x1a37,	// (0x000183a8) popup_call_poc_act_window_t1

0x1a5f,	// (0x000183d0) popup_call_poc_act_window_t2_ParamLimits

0x1a5f,	// (0x000183d0) popup_call_poc_act_window_t2

0x1a87,	// (0x000183f8) popup_call_poc_act_window_t3_ParamLimits

0x1a87,	// (0x000183f8) popup_call_poc_act_window_t3

0x1aaf,	// (0x00018420) popup_call_poc_act_window_t4_ParamLimits

0x1aaf,	// (0x00018420) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00025ded) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00025ded) popup_call_poc_act_window_t

0x296a,	// (0x000192db) bg_popup_call_poc_inact_pane_g6

0x2972,	// (0x000192e3) bg_popup_call_poc_inact_pane_g7

0x297a,	// (0x000192eb) bg_popup_call_poc_inact_pane_g8

0x1ac1,	// (0x00018432) popup_call_poc_inact_window_g2

0x2982,	// (0x000192f3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf52a,	// (0x00025e9b) bg_popup_call_poc_inact_pane_g

0x1ac9,	// (0x0001843a) popup_call_poc_inact_window_t1_ParamLimits

0x1ac9,	// (0x0001843a) popup_call_poc_inact_window_t1

0x1ade,	// (0x0001844f) popup_call_poc_inact_window_t2_ParamLimits

0x1ade,	// (0x0001844f) popup_call_poc_inact_window_t2

0x1af3,	// (0x00018464) popup_call_poc_inact_window_t3_ParamLimits

0x1af3,	// (0x00018464) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00025df6) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00025df6) popup_call_poc_inact_window_t

0x2a82,	// (0x000193f3) context_pane_ParamLimits

0xab48,	// (0x000214b9) signal_pane_ParamLimits

0x0b6f,	// (0x000174e0) main_call2_pane

0x7302,	// (0x0001dc73) popup_phob_thumbnail2_window_ParamLimits

0x7302,	// (0x0001dc73) popup_phob_thumbnail2_window

0x7163,	// (0x0001dad4) aid_hotspot_pointer_arrow_pane

0x716b,	// (0x0001dadc) aid_hotspot_pointer_hand_pane

0xa990,	// (0x00021301) phob_pre_status_pane_g5

0x0898,	// (0x00017209) cams_zoom_pane_ParamLimits

0x0898,	// (0x00017209) image_vga_pane_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g1_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g2_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g3_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g4_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g5_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g6_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00025b1c) main_camera_pane_g_ParamLimits

0x172e,	// (0x0001809f) main_camera_pane_t1_ParamLimits

0x172e,	// (0x0001809f) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00025b2d) main_camera_pane_t_ParamLimits

0x082b,	// (0x0001719c) bg_popup_preview_window_pane_cp01_ParamLimits

0x082b,	// (0x0001719c) bg_popup_preview_window_pane_cp01

0x1b08,	// (0x00018479) popup_phob_thumbnail2_window_g1_ParamLimits

0x1b08,	// (0x00018479) popup_phob_thumbnail2_window_g1

0x05d0,	// (0x00016f41) call2_cli_visual_pane

0xa661,	// (0x00020fd2) popup_call2_audio_conf_window_ParamLimits

0xa661,	// (0x00020fd2) popup_call2_audio_conf_window

0xa676,	// (0x00020fe7) popup_call2_audio_first_window_ParamLimits

0xa676,	// (0x00020fe7) popup_call2_audio_first_window

0xa714,	// (0x00021085) popup_call2_audio_in_window_ParamLimits

0xa714,	// (0x00021085) popup_call2_audio_in_window

0xa756,	// (0x000210c7) popup_call2_audio_out_window_ParamLimits

0xa756,	// (0x000210c7) popup_call2_audio_out_window

0xa7b8,	// (0x00021129) popup_call2_audio_second_window_ParamLimits

0xa7b8,	// (0x00021129) popup_call2_audio_second_window

0xa816,	// (0x00021187) popup_call2_audio_wait_window_ParamLimits

0xa816,	// (0x00021187) popup_call2_audio_wait_window

0x05d0,	// (0x00016f41) bg_popup_call2_act_pane_cp03

0x080d,	// (0x0001717e) list_conf_pane_cp

0x1b14,	// (0x00018485) popup_call2_audio_conf_window_t1

0x1b22,	// (0x00018493) list_single_graphic_popup_conf2_pane_ParamLimits

0x1b22,	// (0x00018493) list_single_graphic_popup_conf2_pane

0x136a,	// (0x00017cdb) list_highlight_pane_cp04

0x1b35,	// (0x000184a6) list_single_graphic_popup_conf2_pane_g1

0x137b,	// (0x00017cec) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00025dfd) list_single_graphic_popup_conf2_pane_g

0x1b3f,	// (0x000184b0) list_single_graphic_popup_conf2_pane_t1

0x1b4d,	// (0x000184be) bg_popup_call2_act_pane_cp01_ParamLimits

0x1b4d,	// (0x000184be) bg_popup_call2_act_pane_cp01

0x1bd7,	// (0x00018548) call_type_pane_cp05_ParamLimits

0x1bd7,	// (0x00018548) call_type_pane_cp05

0x1c2b,	// (0x0001859c) popup_call2_audio_second_window_g1_ParamLimits

0x1c2b,	// (0x0001859c) popup_call2_audio_second_window_g1

0x1c7f,	// (0x000185f0) popup_call2_audio_second_window_g2_ParamLimits

0x1c7f,	// (0x000185f0) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00025e02) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00025e02) popup_call2_audio_second_window_g

0x1ce4,	// (0x00018655) popup_call2_audio_second_window_t1_ParamLimits

0x1ce4,	// (0x00018655) popup_call2_audio_second_window_t1

0x1d9f,	// (0x00018710) popup_call2_audio_second_window_t2_ParamLimits

0x1d9f,	// (0x00018710) popup_call2_audio_second_window_t2

0x1df2,	// (0x00018763) popup_call2_audio_second_window_t3_ParamLimits

0x1df2,	// (0x00018763) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x00025e09) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x00025e09) popup_call2_audio_second_window_t

0x05d0,	// (0x00016f41) bg_popup_call2_in_pane_cp02

0x05da,	// (0x00016f4b) call_type_pane_cp04

0xa855,	// (0x000211c6) popup_call2_audio_wait_window_g1

0xa85d,	// (0x000211ce) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00025e12) popup_call2_audio_wait_window_g

0x05f2,	// (0x00016f63) popup_call2_audio_wait_window_t3

0x1ee5,	// (0x00018856) bg_popup_call2_act_pane_ParamLimits

0x1ee5,	// (0x00018856) bg_popup_call2_act_pane

0x1fa5,	// (0x00018916) call_type_pane_cp03_ParamLimits

0x1fa5,	// (0x00018916) call_type_pane_cp03

0x2009,	// (0x0001897a) popup_call2_audio_first_window_g1_ParamLimits

0x2009,	// (0x0001897a) popup_call2_audio_first_window_g1

0x2079,	// (0x000189ea) popup_call2_audio_first_window_g2_ParamLimits

0x2079,	// (0x000189ea) popup_call2_audio_first_window_g2

0x20dd,	// (0x00018a4e) popup_call2_audio_first_window_g3_ParamLimits

0x20dd,	// (0x00018a4e) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x00025e17) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x00025e17) popup_call2_audio_first_window_g

0x2165,	// (0x00018ad6) popup_call2_audio_first_window_t1_ParamLimits

0x2165,	// (0x00018ad6) popup_call2_audio_first_window_t1

0x2268,	// (0x00018bd9) popup_call2_audio_first_window_t4_ParamLimits

0x2268,	// (0x00018bd9) popup_call2_audio_first_window_t4

0x234b,	// (0x00018cbc) popup_call2_audio_first_window_t5_ParamLimits

0x234b,	// (0x00018cbc) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00025e22) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00025e22) popup_call2_audio_first_window_t

0x0823,	// (0x00017194) bg_popup_call2_act_pane_g1

0x29a2,	// (0x00019313) popup_cale_lunar_info_window_t1

0x29b0,	// (0x00019321) popup_cale_lunar_info_window_t2

0x29be,	// (0x0001932f) popup_cale_lunar_info_window_t3

0x05d0,	// (0x00016f41) bg_popup_call2_bubble_pane

0x244c,	// (0x00018dbd) bg_popup_call2_in_pane_cp01_ParamLimits

0x244c,	// (0x00018dbd) bg_popup_call2_in_pane_cp01

0x02ac,	// (0x00016c1d) call_type_pane_cp02

0xa865,	// (0x000211d6) popup_call2_audio_out_window_g1_ParamLimits

0xa865,	// (0x000211d6) popup_call2_audio_out_window_g1

0x2494,	// (0x00018e05) popup_call2_audio_out_window_g2_ParamLimits

0x2494,	// (0x00018e05) popup_call2_audio_out_window_g2

0xa891,	// (0x00021202) popup_call2_audio_out_window_g3_ParamLimits

0xa891,	// (0x00021202) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x00025e2b) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x00025e2b) popup_call2_audio_out_window_g

0x24cb,	// (0x00018e3c) popup_call2_audio_out_window_t1_ParamLimits

0x24cb,	// (0x00018e3c) popup_call2_audio_out_window_t1

0x252a,	// (0x00018e9b) popup_call2_audio_out_window_t2_ParamLimits

0x252a,	// (0x00018e9b) popup_call2_audio_out_window_t2

0x257e,	// (0x00018eef) popup_call2_audio_out_window_t3_ParamLimits

0x257e,	// (0x00018eef) popup_call2_audio_out_window_t3

0x2594,	// (0x00018f05) popup_call2_audio_out_window_t4_ParamLimits

0x2594,	// (0x00018f05) popup_call2_audio_out_window_t4

0x25aa,	// (0x00018f1b) popup_call2_audio_out_window_t5_ParamLimits

0x25aa,	// (0x00018f1b) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00025e34) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00025e34) popup_call2_audio_out_window_t

0x260e,	// (0x00018f7f) bg_popup_call2_in_pane_ParamLimits

0x260e,	// (0x00018f7f) bg_popup_call2_in_pane

0x266a,	// (0x00018fdb) popup_call2_audio_in_window_g1_ParamLimits

0x266a,	// (0x00018fdb) popup_call2_audio_in_window_g1

0x26a2,	// (0x00019013) popup_call2_audio_in_window_g2_ParamLimits

0x26a2,	// (0x00019013) popup_call2_audio_in_window_g2

0x26da,	// (0x0001904b) popup_call2_audio_in_window_g3_ParamLimits

0x26da,	// (0x0001904b) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00025e41) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00025e41) popup_call2_audio_in_window_g

0x2732,	// (0x000190a3) popup_call2_audio_in_window_t1_ParamLimits

0x2732,	// (0x000190a3) popup_call2_audio_in_window_t1

0x27b2,	// (0x00019123) popup_call2_audio_in_window_t2_ParamLimits

0x27b2,	// (0x00019123) popup_call2_audio_in_window_t2

0x2832,	// (0x000191a3) popup_call2_audio_in_window_t3_ParamLimits

0x2832,	// (0x000191a3) popup_call2_audio_in_window_t3

0x284c,	// (0x000191bd) popup_call2_audio_in_window_t4_ParamLimits

0x284c,	// (0x000191bd) popup_call2_audio_in_window_t4

0x285e,	// (0x000191cf) popup_call2_audio_in_window_t5_ParamLimits

0x285e,	// (0x000191cf) popup_call2_audio_in_window_t5

0x2870,	// (0x000191e1) popup_call2_audio_in_window_t6_ParamLimits

0x2870,	// (0x000191e1) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x00025e4a) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x00025e4a) popup_call2_audio_in_window_t

0x0823,	// (0x00017194) bg_popup_call2_in_pane_g1

0x29cc,	// (0x0001933d) popup_cale_lunar_info_window_t4

0x0003,

0xf554,	// (0x00025ec5) popup_cale_lunar_info_window_t

0x082b,	// (0x0001719c) bg_popup_call2_rect_pane_ParamLimits

0x082b,	// (0x0001719c) bg_popup_call2_rect_pane

0x05d0,	// (0x00016f41) call2_cli_visual_graphic_pane

0x05d0,	// (0x00016f41) call2_cli_visual_text_pane

0x7351,	// (0x0001dcc2) smil_status_volume_pane_g3

0x0002,

0x0843,	// (0x000171b4) call2_cli_visual_graphic_pane_g1

0x0843,	// (0x000171b4) call2_cli_visual_graphic_pane_g2

0x0843,	// (0x000171b4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x00025e57) call2_cli_visual_graphic_pane_g

0x2882,	// (0x000191f3) bg_popup_call2_rect_pane_g1

0x0a3e,	// (0x000173af) bg_popup_call2_rect_pane_g2

0x288a,	// (0x000191fb) bg_popup_call2_rect_pane_g3

0x2892,	// (0x00019203) bg_popup_call2_rect_pane_g4

0x289a,	// (0x0001920b) bg_popup_call2_rect_pane_g5

0x28a2,	// (0x00019213) bg_popup_call2_rect_pane_g6

0x28aa,	// (0x0001921b) bg_popup_call2_rect_pane_g7

0x28b2,	// (0x00019223) bg_popup_call2_rect_pane_g8

0x28ba,	// (0x0001922b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00025e5e) bg_popup_call2_rect_pane_g

0x28c2,	// (0x00019233) bg_popup_call2_bubble_pane_g1

0x28ca,	// (0x0001923b) bg_popup_call2_bubble_pane_g2

0x28d2,	// (0x00019243) bg_popup_call2_bubble_pane_g3

0x28da,	// (0x0001924b) bg_popup_call2_bubble_pane_g4

0x28e2,	// (0x00019253) bg_popup_call2_bubble_pane_g5

0x28ea,	// (0x0001925b) bg_popup_call2_bubble_pane_g6

0x28f2,	// (0x00019263) bg_popup_call2_bubble_pane_g7

0x28fa,	// (0x0001926b) bg_popup_call2_bubble_pane_g8

0x2902,	// (0x00019273) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00025e71) bg_popup_call2_bubble_pane_g

0x85fd,	// (0x0001ef6e) aid_cale_week_size_cell_pane

0x082b,	// (0x0001719c) aid_cams_cif_uncrop_pane_ParamLimits

0x082b,	// (0x0001719c) aid_cams_cif_uncrop_pane

0x8b04,	// (0x0001f475) aid_cams_size_cell_ParamLimits

0x8b04,	// (0x0001f475) aid_cams_size_cell

0x8b10,	// (0x0001f481) grid_cams_pane_ParamLimits

0x8b1e,	// (0x0001f48f) linegrid_cams_pane_ParamLimits

0x8bf5,	// (0x0001f566) call_video_pane_t1

0x8c16,	// (0x0001f587) call_video_pane_t2

0x0001,

0xf208,	// (0x00025b79) call_video_pane_t

0x9108,	// (0x0001fa79) aid_cale_month_size_cell_pane_ParamLimits

0x9108,	// (0x0001fa79) aid_cale_month_size_cell_pane

0xf598,	// (0x00025f09) smil_status_volume_pane_g

0x735e,	// (0x0001dccf) volume_smil_pane_ParamLimits

0x6b01,	// (0x0001d472) aid_popup2_width_pane

0x853c,	// (0x0001eead) cell_qdial_pane_g4_ParamLimits

0x853c,	// (0x0001eead) cell_qdial_pane_g4

0x9f68,	// (0x000208d9) aid_blid_cardinal_pane_ParamLimits

0x9f78,	// (0x000208e9) aid_blid_destination_pane_ParamLimits

0x9f78,	// (0x000208e9) aid_blid_destination_pane

0x082b,	// (0x0001719c) bg_popup_call_poc_act_pane_ParamLimits

0x082b,	// (0x0001719c) bg_popup_call_poc_act_pane

0x082b,	// (0x0001719c) bg_popup_call_poc_inact_pane_ParamLimits

0x082b,	// (0x0001719c) bg_popup_call_poc_inact_pane

0x290a,	// (0x0001927b) bg_popup_call_poc_act_pane_g1

0x2912,	// (0x00019283) bg_popup_call_poc_act_pane_g2

0x291a,	// (0x0001928b) bg_popup_call_poc_act_pane_g3

0x28da,	// (0x0001924b) bg_popup_call_poc_act_pane_g4

0x28e2,	// (0x00019253) bg_popup_call_poc_act_pane_g5

0x2922,	// (0x00019293) bg_popup_call_poc_act_pane_g6

0x28f2,	// (0x00019263) bg_popup_call_poc_act_pane_g7

0x292a,	// (0x0001929b) bg_popup_call_poc_act_pane_g8

0x05d0,	// (0x00016f41) main_usb_pane

0x7235,	// (0x0001dba6) popup_cale_lunar_info_window

0x8f33,	// (0x0001f8a4) im_reading_pane_t1_ParamLimits

0x0c68,	// (0x000175d9) list_im_pane_ParamLimits

0x0c79,	// (0x000175ea) scroll_pane_cp07_ParamLimits

0x05d0,	// (0x00016f41) grid_highlight_pane_cp012

0x082b,	// (0x0001719c) mup_scale_pane_ParamLimits

0x20dd,	// (0x00018a4e) main_usb_pane_g1_ParamLimits

0x20dd,	// (0x00018a4e) main_usb_pane_g1

0xa8f8,	// (0x00021269) main_usb_pane_g2_ParamLimits

0xa8f8,	// (0x00021269) main_usb_pane_g2

0x0001,

0xf53d,	// (0x00025eae) main_usb_pane_g_ParamLimits

0xf53d,	// (0x00025eae) main_usb_pane_g

0xa904,	// (0x00021275) main_usb_pane_t1_ParamLimits

0xa904,	// (0x00021275) main_usb_pane_t1

0xa916,	// (0x00021287) main_usb_pane_t2_ParamLimits

0xa916,	// (0x00021287) main_usb_pane_t2

0xa928,	// (0x00021299) main_usb_pane_t3_ParamLimits

0xa928,	// (0x00021299) main_usb_pane_t3

0xa93a,	// (0x000212ab) main_usb_pane_t4_ParamLimits

0xa93a,	// (0x000212ab) main_usb_pane_t4

0xa94c,	// (0x000212bd) main_usb_pane_t5_ParamLimits

0xa94c,	// (0x000212bd) main_usb_pane_t5

0xa95e,	// (0x000212cf) main_usb_pane_t6_ParamLimits

0xa95e,	// (0x000212cf) main_usb_pane_t6

0x0005,

0xf542,	// (0x00025eb3) main_usb_pane_t_ParamLimits

0x9f0e,	// (0x0002087f) aid_text_placing

0x9f1a,	// (0x0002088b) main_location2_pane_t1_ParamLimits

0x9f2e,	// (0x0002089f) main_location2_pane_t2_ParamLimits

0x9f42,	// (0x000208b3) main_location2_pane_t3_ParamLimits

0x9f56,	// (0x000208c7) main_location2_pane_t4_ParamLimits

0x9f56,	// (0x000208c7) main_location2_pane_t4

0xf349,	// (0x00025cba) main_location2_pane_t_ParamLimits

0x0859,	// (0x000171ca) find_pinb_pane_g2_ParamLimits

0x0859,	// (0x000171ca) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00025a31) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00025a31) find_pinb_pane_g

0x0865,	// (0x000171d6) find_pinb_pane_t1_ParamLimits

0x0877,	// (0x000171e8) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00025a36) find_pinb_pane_t_ParamLimits

0x05d0,	// (0x00016f41) main_call3_pane

0x96cb,	// (0x0002003c) cale_month_day_heading_pane_t1_ParamLimits

0x9751,	// (0x000200c2) cale_month_day_heading_pane_t2_ParamLimits

0x97ca,	// (0x0002013b) cale_month_day_heading_pane_t3_ParamLimits

0x9843,	// (0x000201b4) cale_month_day_heading_pane_t4_ParamLimits

0x98bc,	// (0x0002022d) cale_month_day_heading_pane_t5_ParamLimits

0x9935,	// (0x000202a6) cale_month_day_heading_pane_t6_ParamLimits

0x99ae,	// (0x0002031f) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00025bb1) cale_month_day_heading_pane_t_ParamLimits

0x0ecf,	// (0x00017840) smil_status_volume_pane

0xa44f,	// (0x00020dc0) postcard_address_pane_ParamLimits

0xa44f,	// (0x00020dc0) postcard_address_pane

0xa45b,	// (0x00020dcc) postcard_message_pane_ParamLimits

0xa45b,	// (0x00020dcc) postcard_message_pane

0xa8bd,	// (0x0002122e) call2_cli_visual_pane_t1_ParamLimits

0xa8bd,	// (0x0002122e) call2_cli_visual_pane_t1

0x2b57,	// (0x000194c8) postcard_message_pane_t1_ParamLimits

0x2b57,	// (0x000194c8) postcard_message_pane_t1

0x2b3f,	// (0x000194b0) postcard_address_pane_t1_ParamLimits

0x2b3f,	// (0x000194b0) postcard_address_pane_t1

0xaca0,	// (0x00021611) popup_call3_audio_in_window_ParamLimits

0xaca0,	// (0x00021611) popup_call3_audio_in_window

0xab84,	// (0x000214f5) bg_popup_call3_in_pane_ParamLimits

0xab84,	// (0x000214f5) bg_popup_call3_in_pane

0xabe6,	// (0x00021557) popup_call3_audio_in_window_g1_ParamLimits

0xabe6,	// (0x00021557) popup_call3_audio_in_window_g1

0xabfe,	// (0x0002156f) popup_call3_audio_in_window_g2_ParamLimits

0xabfe,	// (0x0002156f) popup_call3_audio_in_window_g2

0xac16,	// (0x00021587) popup_call3_audio_in_window_g3_ParamLimits

0xac16,	// (0x00021587) popup_call3_audio_in_window_g3

0x0003,

0xf59f,	// (0x00025f10) popup_call3_audio_in_window_g_ParamLimits

0xf59f,	// (0x00025f10) popup_call3_audio_in_window_g

0xac3e,	// (0x000215af) popup_call3_audio_in_window_t1_ParamLimits

0xac3e,	// (0x000215af) popup_call3_audio_in_window_t1

0xac66,	// (0x000215d7) popup_call3_audio_in_window_t2_ParamLimits

0xac66,	// (0x000215d7) popup_call3_audio_in_window_t2

0xac8e,	// (0x000215ff) popup_call3_audio_in_window_t3_ParamLimits

0xac8e,	// (0x000215ff) popup_call3_audio_in_window_t3

0x0002,

0xf5a8,	// (0x00025f19) popup_call3_audio_in_window_t_ParamLimits

0xf5a8,	// (0x00025f19) popup_call3_audio_in_window_t

0x0b6f,	// (0x000174e0) bg_popup_call3_rect_pane

0x2882,	// (0x000191f3) bg_popup_call3_rect_pane_g1

0x0a3e,	// (0x000173af) bg_popup_call3_rect_pane_g2

0x288a,	// (0x000191fb) bg_popup_call3_rect_pane_g3

0x2892,	// (0x00019203) bg_popup_call3_rect_pane_g4

0x289a,	// (0x0001920b) bg_popup_call3_rect_pane_g5

0x28a2,	// (0x00019213) bg_popup_call3_rect_pane_g6

0x28aa,	// (0x0001921b) bg_popup_call3_rect_pane_g7

0x0140,	// (0x00016ab1) mup_visualizer_osc_pane

0x0140,	// (0x00016ab1) mup_visualizer_spec_pane

0xaba4,	// (0x00021515) call3_video_qcif_pane_ParamLimits

0xaba4,	// (0x00021515) call3_video_qcif_pane

0xabb6,	// (0x00021527) call3_video_qcif_uncrop_pane_ParamLimits

0xabb6,	// (0x00021527) call3_video_qcif_uncrop_pane

0xabc4,	// (0x00021535) call3_video_subqcif_pane_ParamLimits

0xabc4,	// (0x00021535) call3_video_subqcif_pane

0xabd6,	// (0x00021547) call3_video_subqcif_uncrop_pane_ParamLimits

0xabd6,	// (0x00021547) call3_video_subqcif_uncrop_pane

0xac2e,	// (0x0002159f) popup_call3_audio_in_window_g4_ParamLimits

0xac2e,	// (0x0002159f) popup_call3_audio_in_window_g4

0x0140,	// (0x00016ab1) mup_spec_half_pane

0x0140,	// (0x00016ab1) mup_spec_half_pane_cp

0x0140,	// (0x00016ab1) mup_osc_middle_pane

0x0baf,	// (0x00017520) mup_visualizer_osc_pane_g1

0x2ad0,	// (0x00019441) mup_spec_bar_pane_ParamLimits

0x2ad0,	// (0x00019441) mup_spec_bar_pane

0x0baf,	// (0x00017520) mup_spec_bar_pane_g1

0x0baf,	// (0x00017520) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x00025d34) mup_spec_bar_pane_g

0x85fd,	// (0x0001ef6e) aid_cale_week_size_cell_pane_ParamLimits

0x8612,	// (0x0001ef83) bg_cale_heading_pane_ParamLimits

0x0ad1,	// (0x00017442) bg_cale_pane_cp01_ParamLimits

0x8634,	// (0x0001efa5) cale_week_corner_pane_ParamLimits

0x864e,	// (0x0001efbf) cale_week_day_heading_pane_ParamLimits

0x8670,	// (0x0001efe1) cale_week_scroll_pane_g1_ParamLimits

0x868d,	// (0x0001effe) cale_week_scroll_pane_g2_ParamLimits

0x86a0,	// (0x0001f011) cale_week_scroll_pane_g3_ParamLimits

0x86b3,	// (0x0001f024) cale_week_scroll_pane_g4_ParamLimits

0x86c6,	// (0x0001f037) cale_week_scroll_pane_g5_ParamLimits

0x86d9,	// (0x0001f04a) cale_week_scroll_pane_g6_ParamLimits

0x86ec,	// (0x0001f05d) cale_week_scroll_pane_g7_ParamLimits

0x8701,	// (0x0001f072) cale_week_scroll_pane_g8_ParamLimits

0x8716,	// (0x0001f087) cale_week_scroll_pane_g9_ParamLimits

0x8729,	// (0x0001f09a) cale_week_scroll_pane_g10_ParamLimits

0x873c,	// (0x0001f0ad) cale_week_scroll_pane_g11_ParamLimits

0x874f,	// (0x0001f0c0) cale_week_scroll_pane_g12_ParamLimits

0x8766,	// (0x0001f0d7) cale_week_scroll_pane_g13_ParamLimits

0x8781,	// (0x0001f0f2) cale_week_scroll_pane_g14_ParamLimits

0x879c,	// (0x0001f10d) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00025ac2) cale_week_scroll_pane_g_ParamLimits

0x87cc,	// (0x0001f13d) cale_week_time_pane_ParamLimits

0x87e1,	// (0x0001f152) grid_cale_week_pane_ParamLimits

0x0aee,	// (0x0001745f) listscroll_cale_week_pane_t1

0x0b00,	// (0x00017471) scroll_pane_cp08_ParamLimits

0x917c,	// (0x0001faed) cale_month_corner_pane_ParamLimits

0x0e99,	// (0x0001780a) cale_month_pane_t1

0x964a,	// (0x0001ffbb) cale_month_week_pane_ParamLimits

0x20dd,	// (0x00018a4e) popup_call_status_window_g1_ParamLimits

0x9daa,	// (0x0002071b) popup_call_status_window_g2_ParamLimits

0x9db6,	// (0x00020727) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00025c41) popup_call_status_window_g_ParamLimits

0x128f,	// (0x00017c00) aid_call2_pane

0xa2eb,	// (0x00020c5c) msg_header_pane_g1

0xa44f,	// (0x00020dc0) postcard_address2_pane_ParamLimits

0xa44f,	// (0x00020dc0) postcard_address2_pane

0xa45b,	// (0x00020dcc) postcard_message2_pane_ParamLimits

0xa45b,	// (0x00020dcc) postcard_message2_pane

0xab56,	// (0x000214c7) message2_row_pane_ParamLimits

0xab56,	// (0x000214c7) message2_row_pane

0xab71,	// (0x000214e2) address2_row_pane_ParamLimits

0xab71,	// (0x000214e2) address2_row_pane

0x2a9d,	// (0x0001940e) postcard_message2_row_pane_g1

0x2aa5,	// (0x00019416) postcard_message2_row_pane_t1

0x2a9d,	// (0x0001940e) address2_row_pane_g1

0x2aa5,	// (0x00019416) address2_row_pane_t1

0x897e,	// (0x0001f2ef) aid_size_cell_vorec

0x05d0,	// (0x00016f41) main_rss_pane

0x2ab3,	// (0x00019424) rss_list_single_pane_ParamLimits

0x2ab3,	// (0x00019424) rss_list_single_pane

0x2ac1,	// (0x00019432) rss_list_single_pane_t1

0x2ac1,	// (0x00019432) rss_list_single_pane_t2

0x0001,

0xf593,	// (0x00025f04) rss_list_single_pane_t

0x05d0,	// (0x00016f41) main_camera2_pane

0x05d0,	// (0x00016f41) main_video2_pane

0x6d7c,	// (0x0001d6ed) cams_zoom_pane_cp2_ParamLimits

0x6d7c,	// (0x0001d6ed) cams_zoom_pane_cp2

0x6d7c,	// (0x0001d6ed) image2_vga_pane_ParamLimits

0x6d7c,	// (0x0001d6ed) image2_vga_pane

0x132a,	// (0x00017c9b) main_camera2_pane_g1_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g1

0x132a,	// (0x00017c9b) main_camera2_pane_g2_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g2

0x132a,	// (0x00017c9b) main_camera2_pane_g3_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g3

0x132a,	// (0x00017c9b) main_camera2_pane_g4_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g4

0x132a,	// (0x00017c9b) main_camera2_pane_g5_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g5

0x132a,	// (0x00017c9b) main_camera2_pane_g6_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g6

0x132a,	// (0x00017c9b) main_camera2_pane_g7_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g7

0x132a,	// (0x00017c9b) main_camera2_pane_g8_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g8

0x0008,

0xf5af,	// (0x00025f20) main_camera2_pane_g_ParamLimits

0xf5af,	// (0x00025f20) main_camera2_pane_g

0x7381,	// (0x0001dcf2) main_camera2_pane_t1_ParamLimits

0x7381,	// (0x0001dcf2) main_camera2_pane_t1

0x7381,	// (0x0001dcf2) main_camera2_pane_t2_ParamLimits

0x7381,	// (0x0001dcf2) main_camera2_pane_t2

0x7381,	// (0x0001dcf2) main_camera2_pane_t3_ParamLimits

0x7381,	// (0x0001dcf2) main_camera2_pane_t3

0x7381,	// (0x0001dcf2) main_camera2_pane_t4_ParamLimits

0x7381,	// (0x0001dcf2) main_camera2_pane_t4

0x0006,

0xf5c2,	// (0x00025f33) main_camera2_pane_t_ParamLimits

0xf5c2,	// (0x00025f33) main_camera2_pane_t

0x73a9,	// (0x0001dd1a) cams_zoom_pane_cp4_ParamLimits

0x73a9,	// (0x0001dd1a) cams_zoom_pane_cp4

0x71e0,	// (0x0001db51) image2_cif_pane_ParamLimits

0x71e0,	// (0x0001db51) image2_cif_pane

0x6d7c,	// (0x0001d6ed) image2_subqcif_pane_ParamLimits

0x6d7c,	// (0x0001d6ed) image2_subqcif_pane

0x73b7,	// (0x0001dd28) main_video2_pane_g1_ParamLimits

0x73b7,	// (0x0001dd28) main_video2_pane_g1

0x73b7,	// (0x0001dd28) main_video2_pane_g2_ParamLimits

0x73b7,	// (0x0001dd28) main_video2_pane_g2

0x73b7,	// (0x0001dd28) main_video2_pane_g3_ParamLimits

0x73b7,	// (0x0001dd28) main_video2_pane_g3

0x73b7,	// (0x0001dd28) main_video2_pane_g4_ParamLimits

0x73b7,	// (0x0001dd28) main_video2_pane_g4

0x73b7,	// (0x0001dd28) main_video2_pane_g5_ParamLimits

0x73b7,	// (0x0001dd28) main_video2_pane_g5

0x73b7,	// (0x0001dd28) main_video2_pane_g6_ParamLimits

0x73b7,	// (0x0001dd28) main_video2_pane_g6

0x0005,

0xf5d1,	// (0x00025f42) main_video2_pane_g_ParamLimits

0xf5d1,	// (0x00025f42) main_video2_pane_g

0x73c5,	// (0x0001dd36) main_video2_pane_t1_ParamLimits

0x73c5,	// (0x0001dd36) main_video2_pane_t1

0x73c5,	// (0x0001dd36) main_video2_pane_t2_ParamLimits

0x73c5,	// (0x0001dd36) main_video2_pane_t2

0x73c5,	// (0x0001dd36) main_video2_pane_t3_ParamLimits

0x73c5,	// (0x0001dd36) main_video2_pane_t3

0x0002,

0xf5de,	// (0x00025f4f) main_video2_pane_t_ParamLimits

0xf5de,	// (0x00025f4f) main_video2_pane_t

0xa9f4,	// (0x00021365) call_muted_g2

0x0001,

0xf585,	// (0x00025ef6) call_muted_g

0x05d0,	// (0x00016f41) main_mup2_pane

0x08c2,	// (0x00017233) main_mup2_pane_g1_ParamLimits

0x08c2,	// (0x00017233) main_mup2_pane_g1

0x08c2,	// (0x00017233) main_mup2_pane_g2_ParamLimits

0x08c2,	// (0x00017233) main_mup2_pane_g2

0x43e7,	// (0x0001ad58) main_mup_pane_g13_cp1

0x6d8a,	// (0x0001d6fb) mup_volume_pane_cp1

0x08c2,	// (0x00017233) main_mup2_pane_g4_ParamLimits

0x08c2,	// (0x00017233) main_mup2_pane_g4

0x08c2,	// (0x00017233) main_mup2_pane_g5_ParamLimits

0x08c2,	// (0x00017233) main_mup2_pane_g5

0x08c2,	// (0x00017233) main_mup2_pane_g6_ParamLimits

0x08c2,	// (0x00017233) main_mup2_pane_g6

0x08c2,	// (0x00017233) main_mup2_pane_g7_ParamLimits

0x08c2,	// (0x00017233) main_mup2_pane_g7

0x0006,

0xf5e5,	// (0x00025f56) main_mup2_pane_g_ParamLimits

0xf5e5,	// (0x00025f56) main_mup2_pane_g

0x08d0,	// (0x00017241) main_mup2_pane_t1_ParamLimits

0x08d0,	// (0x00017241) main_mup2_pane_t1

0x08d0,	// (0x00017241) main_mup2_pane_t2_ParamLimits

0x08d0,	// (0x00017241) main_mup2_pane_t2

0x08d0,	// (0x00017241) main_mup2_pane_t3_ParamLimits

0x08d0,	// (0x00017241) main_mup2_pane_t3

0x08d0,	// (0x00017241) main_mup2_pane_t4_ParamLimits

0x08d0,	// (0x00017241) main_mup2_pane_t4

0x08d0,	// (0x00017241) main_mup2_pane_t5_ParamLimits

0x08d0,	// (0x00017241) main_mup2_pane_t5

0x08d0,	// (0x00017241) main_mup2_pane_t6_ParamLimits

0x08d0,	// (0x00017241) main_mup2_pane_t6

0x0005,

0xf5f4,	// (0x00025f65) main_mup2_pane_t_ParamLimits

0xf5f4,	// (0x00025f65) main_mup2_pane_t

0x2ba3,	// (0x00019514) mup2_visualizer_pane_ParamLimits

0x2ba3,	// (0x00019514) mup2_visualizer_pane

0x2ba3,	// (0x00019514) mup_progress_pane_cp_ParamLimits

0x2ba3,	// (0x00019514) mup_progress_pane_cp

0x73ef,	// (0x0001dd60) mup_volume_pane_cp_ParamLimits

0x73ef,	// (0x0001dd60) mup_volume_pane_cp

0x08a6,	// (0x00017217) mup2_visualizer_pane_g1_ParamLimits

0x08a6,	// (0x00017217) mup2_visualizer_pane_g1

0x08b4,	// (0x00017225) mup2_visualizer_pane_g2_ParamLimits

0x08b4,	// (0x00017225) mup2_visualizer_pane_g2

0x08b4,	// (0x00017225) mup2_visualizer_pane_g3_ParamLimits

0x08b4,	// (0x00017225) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00025a3b) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00025a3b) mup2_visualizer_pane_g

0x19a4,	// (0x00018315) aid_size_cell_fmradio

0x71c9,	// (0x0001db3a) aid_height_parent_landcape

0x0cf7,	// (0x00017668) wml_content_pane_cp

0x0cff,	// (0x00017670) wml_tabs_pane

0x0d08,	// (0x00017679) popup_wml_miniature_window

0x0d10,	// (0x00017681) scroll_pane_cp021

0x0d24,	// (0x00017695) wml_content_pane_comp8

0x05d0,	// (0x00016f41) bg_popup_sub_pane_cp05

0x2bc7,	// (0x00019538) popup_wml_miniature_window_g1

0x2bcf,	// (0x00019540) wml_miniature_view_pane

0xacaf,	// (0x00021620) aid_size_wml_view

0xacb7,	// (0x00021628) wml_miniature_view_pane_g1

0xacc0,	// (0x00021631) wml_miniature_view_pane_g2

0xacc9,	// (0x0002163a) wml_miniature_view_pane_g3

0xacd1,	// (0x00021642) wml_miniature_view_pane_g4

0xacd9,	// (0x0002164a) wml_miniature_view_pane_g5

0xace1,	// (0x00021652) wml_miniature_view_pane_g6

0xace9,	// (0x0002165a) wml_miniature_view_pane_g7

0xacf1,	// (0x00021662) wml_miniature_view_pane_g8

0x0007,

0xf601,	// (0x00025f72) wml_miniature_view_pane_g

0x2bd7,	// (0x00019548) background_graphic_ParamLimits

0x2bd7,	// (0x00019548) background_graphic

0x2be3,	// (0x00019554) wml_tabs_2_pane

0x2bec,	// (0x0001955d) wml_tabs_3_pane_ParamLimits

0x2bec,	// (0x0001955d) wml_tabs_3_pane

0x2bfe,	// (0x0001956f) wml_tabs_4_pane_ParamLimits

0x2bfe,	// (0x0001956f) wml_tabs_4_pane

0x2c14,	// (0x00019585) wml_tabs_5_pane_ParamLimits

0x2c14,	// (0x00019585) wml_tabs_5_pane

0x2c2e,	// (0x0001959f) wml_tabs_pane_g2_ParamLimits

0x2c2e,	// (0x0001959f) wml_tabs_pane_g2

0x2c43,	// (0x000195b4) wml_tabs_pane_g3_ParamLimits

0x2c43,	// (0x000195b4) wml_tabs_pane_g3

0x2c58,	// (0x000195c9) wml_tabs_2_active_pane_ParamLimits

0x2c58,	// (0x000195c9) wml_tabs_2_active_pane

0x2c58,	// (0x000195c9) wml_tabs_2_passive_pane_ParamLimits

0x2c58,	// (0x000195c9) wml_tabs_2_passive_pane

0xacf9,	// (0x0002166a) wml_tabs_3_active_pane_cp_ParamLimits

0xacf9,	// (0x0002166a) wml_tabs_3_active_pane_cp

0xad0a,	// (0x0002167b) wml_tabs_3_passive_pane_ParamLimits

0xad0a,	// (0x0002167b) wml_tabs_3_passive_pane

0xad1b,	// (0x0002168c) wml_tabs_3_passive_pane_cp_ParamLimits

0xad1b,	// (0x0002168c) wml_tabs_3_passive_pane_cp

0xad2c,	// (0x0002169d) tabs_4_active_pane

0xad34,	// (0x000216a5) tabs_4_passive_pane

0xad3c,	// (0x000216ad) tabs_4_passive_pane_cp

0xad44,	// (0x000216b5) tabs_4_passive_pane_cp2

0xa8f0,	// (0x00021261) aid_height_text

0x2ba3,	// (0x00019514) mup_volume_cont_pane_ParamLimits

0x2ba3,	// (0x00019514) mup_volume_cont_pane

0x0140,	// (0x00016ab1) aid_size_cell_pinb

0x0140,	// (0x00016ab1) aid_size_list_pinb

0x2ba3,	// (0x00019514) mup2_volume_cont_pane_ParamLimits

0x2ba3,	// (0x00019514) mup2_volume_cont_pane

0x73d9,	// (0x0001dd4a) mup2_volume_cont_pane_g1_ParamLimits

0x73d9,	// (0x0001dd4a) mup2_volume_cont_pane_g1

0x6b0d,	// (0x0001d47e) aid_size_cell_touch_ParamLimits

0x6b0d,	// (0x0001d47e) aid_size_cell_touch

0x6d94,	// (0x0001d705) touch_pane_ParamLimits

0x6d94,	// (0x0001d705) touch_pane

0x6d8a,	// (0x0001d6fb) main_rss2_pane

0x2c85,	// (0x000195f6) listscroll_rss2_pane

0x2c8e,	// (0x000195ff) rss2_navigation_pane

0x2c96,	// (0x00019607) list_rss2_pane

0x140f,	// (0x00017d80) scroll_pane_cp22

0x2c9e,	// (0x0001960f) rss2_navigation_pane_g1

0x2ca7,	// (0x00019618) rss2_navigation_pane_g2

0x2caf,	// (0x00019620) rss2_navigation_pane_g3

0x0002,

0xf612,	// (0x00025f83) rss2_navigation_pane_g

0x2cb7,	// (0x00019628) rss2_navigation_pane_t1

0xad4c,	// (0x000216bd) rss2_list_single_pane_ParamLimits

0xad4c,	// (0x000216bd) rss2_list_single_pane

0x2cc5,	// (0x00019636) rss2_list_single_pane_t2

0x2cd3,	// (0x00019644) rss2_list_single_pane_t3_ParamLimits

0x2cd3,	// (0x00019644) rss2_list_single_pane_t3

0x2cf0,	// (0x00019661) rss2_list_single_pane_t4

0x9c18,	// (0x00020589) smil_status_pane_g1

0x71e0,	// (0x0001db51) main_image2_pane_ParamLimits

0x71e0,	// (0x0001db51) main_image2_pane

0x132a,	// (0x00017c9b) main_camera2_pane_g9_ParamLimits

0x132a,	// (0x00017c9b) main_camera2_pane_g9

0x7381,	// (0x0001dcf2) main_camera2_pane_t5_ParamLimits

0x7381,	// (0x0001dcf2) main_camera2_pane_t5

0x7395,	// (0x0001dd06) main_camera2_pane_t6_ParamLimits

0x7395,	// (0x0001dd06) main_camera2_pane_t6

0xad80,	// (0x000216f1) main_image2_pane_g1_ParamLimits

0xad80,	// (0x000216f1) main_image2_pane_g1

0xa622,	// (0x00020f93) smil2_video_pane_ParamLimits

0xa622,	// (0x00020f93) smil2_video_pane

0x6b41,	// (0x0001d4b2) aid_zoom_text_primary_cp

0x6d31,	// (0x0001d6a2) popup_preview_fixed_window

0x0c60,	// (0x000175d1) im_reading_pane_g1

0x7373,	// (0x0001dce4) cams2_bc_adjust_pane_cp_ParamLimits

0x7373,	// (0x0001dce4) cams2_bc_adjust_pane_cp

0x6d7c,	// (0x0001d6ed) cams2_bc_adjust_pane_ParamLimits

0x6d7c,	// (0x0001d6ed) cams2_bc_adjust_pane

0x43e7,	// (0x0001ad58) cams2_bc_adjust_pane_g1

0x6d8a,	// (0x0001d6fb) cams2_slider_pane

0x43e7,	// (0x0001ad58) cams2_slider_pane_g1

0x43e7,	// (0x0001ad58) cams2_slider_pane_g2

0x0006,

0xf619,	// (0x00025f8a) cams2_slider_pane_g

0x6e05,	// (0x0001d776) calc_display_pane_ParamLimits

0x6e23,	// (0x0001d794) calc_paper_pane_ParamLimits

0x6e3f,	// (0x0001d7b0) grid_calc_pane_ParamLimits

0x7134,	// (0x0001daa5) popup_clock_digital_window_t1_ParamLimits

0x1941,	// (0x000182b2) main_image_pane_t1

0x6deb,	// (0x0001d75c) aid_size_cell_calc_ParamLimits

0x6deb,	// (0x0001d75c) aid_size_cell_calc

0x7211,	// (0x0001db82) popup_blid_sat_info2_window_ParamLimits

0x7211,	// (0x0001db82) popup_blid_sat_info2_window

0x2cfe,	// (0x0001966f) aid_size_cell_blid

0x2ba3,	// (0x00019514) bg_popup_window_pane_cp07

0x2d1b,	// (0x0001968c) grid_popup_blid_pane

0x2d25,	// (0x00019696) heading_pane_cp05_ParamLimits

0x2d25,	// (0x00019696) heading_pane_cp05

0x2def,	// (0x00019760) cell_popup_blid_pane_ParamLimits

0x2def,	// (0x00019760) cell_popup_blid_pane

0x2e13,	// (0x00019784) cell_popup_blid_pane_g1

0x2e1b,	// (0x0001978c) cell_popup_blid_pane_t1

0x2ba3,	// (0x00019514) mup2_indicator_pane_ParamLimits

0x2ba3,	// (0x00019514) mup2_indicator_pane

0x0140,	// (0x00016ab1) mup2_visualizer_osc_pane

0x2bb1,	// (0x00019522) mup2_visualizer_spec_pane_ParamLimits

0x2bb1,	// (0x00019522) mup2_visualizer_spec_pane

0x0140,	// (0x00016ab1) mup2_spec_half_pane

0x0140,	// (0x00016ab1) mup2_spec_half_pane_cp

0x2e29,	// (0x0001979a) mup2_spec_bar_pane_ParamLimits

0x2e29,	// (0x0001979a) mup2_spec_bar_pane

0x0baf,	// (0x00017520) mup2_spec_bar_pane_g1

0x2e48,	// (0x000197b9) mup2_spec_bar_pane_g2

0x0001,

0xf63f,	// (0x00025fb0) mup2_spec_bar_pane_g

0x0140,	// (0x00016ab1) mup2_osc_middle_pane

0x0baf,	// (0x00017520) mup2_visualizer_osc_pane_g1

0x01dd,	// (0x00016b4e) popup_number_entry_window_t1_ParamLimits

0x01f0,	// (0x00016b61) popup_number_entry_window_t2_ParamLimits

0x0202,	// (0x00016b73) popup_number_entry_window_t3_ParamLimits

0x834d,	// (0x0001ecbe) popup_number_entry_window_t5_ParamLimits

0x834d,	// (0x0001ecbe) popup_number_entry_window_t5

0xf06b,	// (0x000259dc) popup_number_entry_window_t_ParamLimits

0x0214,	// (0x00016b85) text_title_cp2_ParamLimits

0x7173,	// (0x0001dae4) aid_hotspot_pointer_text2_pane

0x71bd,	// (0x0001db2e) main_viewer_pane_g9_ParamLimits

0x71bd,	// (0x0001db2e) main_viewer_pane_g9

0x0e99,	// (0x0001780a) cale_month_pane_t1_ParamLimits

0x0f04,	// (0x00017875) bg_cale_pane_ParamLimits

0x0f1c,	// (0x0001788d) list_cale_pane_ParamLimits

0x0f2d,	// (0x0001789e) listscroll_cale_day_pane_t1

0x0f3f,	// (0x000178b0) scroll_pane_cp09_ParamLimits

0xa044,	// (0x000209b5) main_mup_eq_pane_t1_ParamLimits

0xa044,	// (0x000209b5) main_mup_eq_pane_t1

0xa05e,	// (0x000209cf) main_mup_eq_pane_t2_ParamLimits

0xa05e,	// (0x000209cf) main_mup_eq_pane_t2

0xa076,	// (0x000209e7) main_mup_eq_pane_t3_ParamLimits

0xa076,	// (0x000209e7) main_mup_eq_pane_t3

0xa08e,	// (0x000209ff) main_mup_eq_pane_t4_ParamLimits

0xa08e,	// (0x000209ff) main_mup_eq_pane_t4

0xa0a6,	// (0x00020a17) main_mup_eq_pane_t5_ParamLimits

0xa0a6,	// (0x00020a17) main_mup_eq_pane_t5

0xa0be,	// (0x00020a2f) main_mup_eq_pane_t6_ParamLimits

0xa0be,	// (0x00020a2f) main_mup_eq_pane_t6

0xa0d2,	// (0x00020a43) main_mup_eq_pane_t7_ParamLimits

0xa0d2,	// (0x00020a43) main_mup_eq_pane_t7

0xa0e6,	// (0x00020a57) main_mup_eq_pane_t8_ParamLimits

0xa0e6,	// (0x00020a57) main_mup_eq_pane_t8

0xa0fc,	// (0x00020a6d) main_mup_eq_pane_t9_ParamLimits

0xa0fc,	// (0x00020a6d) main_mup_eq_pane_t9

0xa114,	// (0x00020a85) main_mup_eq_pane_t10_ParamLimits

0xa114,	// (0x00020a85) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00025d40) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00025d40) main_mup_eq_pane_t

0xa1d1,	// (0x00020b42) mup_equalizer_pane_cp5_ParamLimits

0xa1e7,	// (0x00020b58) mup_equalizer_pane_cp6_ParamLimits

0xa1ff,	// (0x00020b70) mup_equalizer_pane_cp7_ParamLimits

0x6d8a,	// (0x0001d6fb) main_gallery_pane

0x2aef,	// (0x00019460) smil2_volume_pane

0x2b0a,	// (0x0001947b) smil_status_volume_pane_g1_ParamLimits

0x2af7,	// (0x00019468) smil_status_volume_pane_g2_ParamLimits

0x7351,	// (0x0001dcc2) smil_status_volume_pane_g3_ParamLimits

0xf598,	// (0x00025f09) smil_status_volume_pane_g_ParamLimits

0x2ba3,	// (0x00019514) bg_popup_window_pane_cp07_ParamLimits

0x2d06,	// (0x00019677) blid_firmament_pane

0x0898,	// (0x00017209) aid_size_cell_gallery_ParamLimits

0x0898,	// (0x00017209) aid_size_cell_gallery

0x0898,	// (0x00017209) grid_gallery_pane_ParamLimits

0x0898,	// (0x00017209) grid_gallery_pane

0x1742,	// (0x000180b3) cell_gallery_pane_ParamLimits

0x1742,	// (0x000180b3) cell_gallery_pane

0x01af,	// (0x00016b20) bg_cell_gallery_focus_pane_ParamLimits

0x01af,	// (0x00016b20) bg_cell_gallery_focus_pane

0x08a6,	// (0x00017217) cell_gallery_pane_g1_ParamLimits

0x08a6,	// (0x00017217) cell_gallery_pane_g1

0x08a6,	// (0x00017217) cell_gallery_pane_g2_ParamLimits

0x08a6,	// (0x00017217) cell_gallery_pane_g2

0x08a6,	// (0x00017217) cell_gallery_pane_g3_ParamLimits

0x08a6,	// (0x00017217) cell_gallery_pane_g3

0x08b4,	// (0x00017225) cell_gallery_pane_g4_ParamLimits

0x08b4,	// (0x00017225) cell_gallery_pane_g4

0x0003,

0xf644,	// (0x00025fb5) cell_gallery_pane_g_ParamLimits

0xf644,	// (0x00025fb5) cell_gallery_pane_g

0x2e52,	// (0x000197c3) bg_cell_gallery_focus_pane_g1

0x2e5a,	// (0x000197cb) bg_cell_gallery_focus_pane_g2

0x2e62,	// (0x000197d3) bg_cell_gallery_focus_pane_g3

0x2e6a,	// (0x000197db) bg_cell_gallery_focus_pane_g4

0x2e72,	// (0x000197e3) bg_cell_gallery_focus_pane_g5

0x2e7a,	// (0x000197eb) bg_cell_gallery_focus_pane_g6

0x2e82,	// (0x000197f3) bg_cell_gallery_focus_pane_g7

0x2e8a,	// (0x000197fb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64d,	// (0x00025fbe) bg_cell_gallery_focus_pane_g

0x2e92,	// (0x00019803) aid_firma_cardinal

0x2ea6,	// (0x00019817) blid_firmament_pane_t1

0x2ebd,	// (0x0001982e) blid_firmament_pane_t2

0x2ed4,	// (0x00019845) blid_firmament_pane_t3

0x2eeb,	// (0x0001985c) blid_firmament_pane_t4

0x0003,

0xf65e,	// (0x00025fcf) blid_firmament_pane_t

0x2f02,	// (0x00019873) blid_sat_info_pane

0x0baf,	// (0x00017520) blid_sat_info_pane_g1

0x0baf,	// (0x00017520) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x00025d34) blid_sat_info_pane_g

0x2f12,	// (0x00019883) blid_sat_info_pane_t1

0x2f20,	// (0x00019891) smil2_volume_content_pane

0x2f29,	// (0x0001989a) smil2_volume_pane_g1

0x09d5,	// (0x00017346) smil2_volume_content_pane_g1

0x2f31,	// (0x000198a2) smil2_volume_content_pane_g2

0x2f3a,	// (0x000198ab) smil2_volume_content_pane_g3

0x2f43,	// (0x000198b4) smil2_volume_content_pane_g4

0x2f4c,	// (0x000198bd) smil2_volume_content_pane_g5

0x2f55,	// (0x000198c6) smil2_volume_content_pane_g6

0x2f5e,	// (0x000198cf) smil2_volume_content_pane_g7

0x2f67,	// (0x000198d8) smil2_volume_content_pane_g8

0x2f70,	// (0x000198e1) smil2_volume_content_pane_g9

0x2f79,	// (0x000198ea) smil2_volume_content_pane_g10

0x0009,

0xf667,	// (0x00025fd8) smil2_volume_content_pane_g

0x8862,	// (0x0001f1d3) cale_week_day_heading_pane_t1_ParamLimits

0x887d,	// (0x0001f1ee) cale_week_day_heading_pane_t2_ParamLimits

0x8898,	// (0x0001f209) cale_week_day_heading_pane_t3_ParamLimits

0x88b3,	// (0x0001f224) cale_week_day_heading_pane_t4_ParamLimits

0x88ce,	// (0x0001f23f) cale_week_day_heading_pane_t5_ParamLimits

0x88e9,	// (0x0001f25a) cale_week_day_heading_pane_t6_ParamLimits

0x8904,	// (0x0001f275) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00025ae3) cale_week_day_heading_pane_t_ParamLimits

0x0b1d,	// (0x0001748e) bg_cale_side_pane_ParamLimits

0x6f96,	// (0x0001d907) cale_week_time_pane_t1_ParamLimits

0x6fb0,	// (0x0001d921) cale_week_time_pane_t2_ParamLimits

0x6fca,	// (0x0001d93b) cale_week_time_pane_t3_ParamLimits

0x6fe4,	// (0x0001d955) cale_week_time_pane_t4_ParamLimits

0x6ffe,	// (0x0001d96f) cale_week_time_pane_t5_ParamLimits

0x7018,	// (0x0001d989) cale_week_time_pane_t6_ParamLimits

0x7038,	// (0x0001d9a9) cale_week_time_pane_t7_ParamLimits

0x705a,	// (0x0001d9cb) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00025af2) cale_week_time_pane_t_ParamLimits

0x891f,	// (0x0001f290) cell_cale_week_pane_g2_ParamLimits

0x0b1d,	// (0x0001748e) bg_cale_side_pane_cp01_ParamLimits

0x9a3f,	// (0x000203b0) cale_month_week_pane_t1_ParamLimits

0x9a58,	// (0x000203c9) cale_month_week_pane_t2_ParamLimits

0x9a71,	// (0x000203e2) cale_month_week_pane_t3_ParamLimits

0x9a8a,	// (0x000203fb) cale_month_week_pane_t4_ParamLimits

0x9aa5,	// (0x00020416) cale_month_week_pane_t5_ParamLimits

0x9ac6,	// (0x00020437) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00025bc0) cale_month_week_pane_t_ParamLimits

0x7088,	// (0x0001d9f9) cell_cale_month_pane_g1_ParamLimits

0x6d8a,	// (0x0001d6fb) main_cale_event_viewer_pane

0x0140,	// (0x00016ab1) listscroll_cale_event_viewer_pane

0x2f82,	// (0x000198f3) list_cale_ev_pane

0x2f8a,	// (0x000198fb) scroll_pane_cp023

0x2f96,	// (0x00019907) field_cale_ev_pane_ParamLimits

0x2f96,	// (0x00019907) field_cale_ev_pane

0x2fb4,	// (0x00019925) field_cale_ev_content_pane_ParamLimits

0x2fb4,	// (0x00019925) field_cale_ev_content_pane

0x2fc0,	// (0x00019931) field_cale_ev_pane_g1_ParamLimits

0x2fc0,	// (0x00019931) field_cale_ev_pane_g1

0x2fcc,	// (0x0001993d) field_cale_ev_pane_g2_ParamLimits

0x2fcc,	// (0x0001993d) field_cale_ev_pane_g2

0x2fe4,	// (0x00019955) field_cale_ev_pane_g3_ParamLimits

0x2fe4,	// (0x00019955) field_cale_ev_pane_g3

0x0002,

0xf67c,	// (0x00025fed) field_cale_ev_pane_g_ParamLimits

0xf67c,	// (0x00025fed) field_cale_ev_pane_g

0x2ffc,	// (0x0001996d) field_cale_ev_pane_t1_ParamLimits

0x2ffc,	// (0x0001996d) field_cale_ev_pane_t1

0x3013,	// (0x00019984) field_cale_ev_content_pane_t1_ParamLimits

0x3013,	// (0x00019984) field_cale_ev_content_pane_t1

0x17e5,	// (0x00018156) bg_button_pane_cp01

0x85ed,	// (0x0001ef5e) listscroll_cale_week_pane_ParamLimits

0x0ac8,	// (0x00017439) popup_toolbar_window_cp01

0x0aee,	// (0x0001745f) listscroll_cale_week_pane_t1_ParamLimits

0x85ed,	// (0x0001ef5e) listscroll_cale_day_pane_ParamLimits

0x0ac8,	// (0x00017439) popup_toolbar_window_cp02

0x0f2d,	// (0x0001789e) listscroll_cale_day_pane_t1_ParamLimits

0x85ed,	// (0x0001ef5e) main_cale_month_pane_ParamLimits

0x7314,	// (0x0001dc85) popup_toolbar_window_cp03_ParamLimits

0x7314,	// (0x0001dc85) popup_toolbar_window_cp03

0xa538,	// (0x00020ea9) main_image_pane_g2_ParamLimits

0xa538,	// (0x00020ea9) main_image_pane_g2

0xa544,	// (0x00020eb5) main_image_pane_g3_ParamLimits

0xa544,	// (0x00020eb5) main_image_pane_g3

0x0002,

0xf461,	// (0x00025dd2) main_image_pane_g_ParamLimits

0xf461,	// (0x00025dd2) main_image_pane_g

0x1941,	// (0x000182b2) main_image_pane_t1_ParamLimits

0xa550,	// (0x00020ec1) main_image_pane_t2_ParamLimits

0xa550,	// (0x00020ec1) main_image_pane_t2

0xa562,	// (0x00020ed3) main_image_pane_t3_ParamLimits

0xa562,	// (0x00020ed3) main_image_pane_t3

0xa574,	// (0x00020ee5) main_image_pane_t4_ParamLimits

0xa574,	// (0x00020ee5) main_image_pane_t4

0x0003,

0xf468,	// (0x00025dd9) main_image_pane_t_ParamLimits

0xf468,	// (0x00025dd9) main_image_pane_t

0xa586,	// (0x00020ef7) popup_image_details_window_cp01

0xa590,	// (0x00020f01) popup_toobar_trans_pane_cp01_ParamLimits

0xa590,	// (0x00020f01) popup_toobar_trans_pane_cp01

0x7264,	// (0x0001dbd5) popup_image_details_window_ParamLimits

0x7264,	// (0x0001dbd5) popup_image_details_window

0x7272,	// (0x0001dbe3) popup_image_focus_window

0x6d7c,	// (0x0001d6ed) camera2_autofocus_pane_ParamLimits

0x6d7c,	// (0x0001d6ed) camera2_autofocus_pane

0x0140,	// (0x00016ab1) bg_popup_sub_pane_cp06

0x3031,	// (0x000199a2) popup_image_focus_window_g1

0x3039,	// (0x000199aa) popup_image_focus_window_g2

0x3041,	// (0x000199b2) popup_image_focus_window_g3

0x3049,	// (0x000199ba) popup_image_focus_window_g4

0x0003,

0xf683,	// (0x00025ff4) popup_image_focus_window_g

0x3051,	// (0x000199c2) popup_image_focus_window_t1

0x305f,	// (0x000199d0) popup_image_focus_window_t2

0x306f,	// (0x000199e0) popup_image_focus_window_t3

0x0002,

0xf68c,	// (0x00025ffd) popup_image_focus_window_t

0x08a6,	// (0x00017217) camera2_autofocus_pane_g1

0x01af,	// (0x00016b20) bg_tb_trans_pane_cp01

0x307d,	// (0x000199ee) popup_image_details_window_g1

0x3090,	// (0x00019a01) popup_image_details_window_g2

0x0002,

0xf69e,	// (0x0002600f) popup_image_details_window_g

0x30b9,	// (0x00019a2a) popup_image_details_window_t1

0x30cb,	// (0x00019a3c) popup_image_details_window_t2

0x30e4,	// (0x00019a55) popup_image_details_window_t3

0x30f8,	// (0x00019a69) popup_image_details_window_t4

0x3113,	// (0x00019a84) popup_image_details_window_t5

0x0004,

0xf6a5,	// (0x00026016) popup_image_details_window_t

0x090c,	// (0x0001727d) bg_calc_paper_pane_ParamLimits

0x6d8a,	// (0x0001d6fb) grid_highlight_pane_cp013

0x6e6b,	// (0x0001d7dc) list_calc_pane_ParamLimits

0x6e7d,	// (0x0001d7ee) scroll_pane_cp024

0x093a,	// (0x000172ab) bg_calc_display_pane_ParamLimits

0x6e85,	// (0x0001d7f6) calc_display_pane_t1_ParamLimits

0x6e9a,	// (0x0001d80b) calc_display_pane_t2_ParamLimits

0x6eaf,	// (0x0001d820) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00025a63) calc_display_pane_t_ParamLimits

0x6f18,	// (0x0001d889) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00025a80) cell_calc_pane_g

0x6f21,	// (0x0001d892) cell_calc_pane_t1

0x09b3,	// (0x00017324) grid_highlight_pane_cp02_ParamLimits

0x09c9,	// (0x0001733a) toolbar_button_pane_cp01_ParamLimits

0x09c9,	// (0x0001733a) toolbar_button_pane_cp01

0x1986,	// (0x000182f7) temp_image_control_pane_ParamLimits

0x1986,	// (0x000182f7) temp_image_control_pane

0x71e0,	// (0x0001db51) main_mp3_pane

0x312d,	// (0x00019a9e) temp_image_control_pane_g1_ParamLimits

0x312d,	// (0x00019a9e) temp_image_control_pane_g1

0x313b,	// (0x00019aac) temp_image_control_pane_g2_ParamLimits

0x313b,	// (0x00019aac) temp_image_control_pane_g2

0x314d,	// (0x00019abe) temp_image_control_pane_g3_ParamLimits

0x314d,	// (0x00019abe) temp_image_control_pane_g3

0xad8c,	// (0x000216fd) temp_image_control_pane_g4_ParamLimits

0xad8c,	// (0x000216fd) temp_image_control_pane_g4

0x0003,

0xf6b0,	// (0x00026021) temp_image_control_pane_g_ParamLimits

0xf6b0,	// (0x00026021) temp_image_control_pane_g

0x312d,	// (0x00019a9e) main_mp3_pane_g1

0xad9d,	// (0x0002170e) main_mp3_pane_g2

0x0007,

0xf6b9,	// (0x0002602a) main_mp3_pane_g

0x3182,	// (0x00019af3) main_mp3_pane_t1

0x08b4,	// (0x00017225) main_camera_pane_g8_ParamLimits

0x08b4,	// (0x00017225) main_camera_pane_g8

0x8abc,	// (0x0001f42d) main_video_pane_g7_ParamLimits

0x8abc,	// (0x0001f42d) main_video_pane_g7

0x7381,	// (0x0001dcf2) main_camera2_pane_t7_ParamLimits

0x7381,	// (0x0001dcf2) main_camera2_pane_t7

0x0cb7,	// (0x00017628) scroll_pane_cp025_ParamLimits

0x0cb7,	// (0x00017628) scroll_pane_cp025

0x0ccb,	// (0x0001763c) scroll_pane_cp026_ParamLimits

0x0ccb,	// (0x0001763c) scroll_pane_cp026

0x0cda,	// (0x0001764b) wml_content_pane_ParamLimits

0x6d8a,	// (0x0001d6fb) main_touch_calib_pane

0xae41,	// (0x000217b2) main_touch_calib_pane_g1

0xae4d,	// (0x000217be) main_touch_calib_pane_g2

0xae59,	// (0x000217ca) main_touch_calib_pane_g3

0xae65,	// (0x000217d6) main_touch_calib_pane_g4

0x0003,

0xf6d7,	// (0x00026048) main_touch_calib_pane_g

0xae71,	// (0x000217e2) main_touch_calib_pane_t1

0xae8a,	// (0x000217fb) main_touch_calib_pane_t2

0x0004,

0xf6e0,	// (0x00026051) main_touch_calib_pane_t

0x14de,	// (0x00017e4f) mup_progress_pane_cp02

0x1513,	// (0x00017e84) navi_pane_g1

0x15ce,	// (0x00017f3f) navi_pane_mp_t3

0x71e0,	// (0x0001db51) main_mp3_pane_ParamLimits

0xab0a,	// (0x0002147b) navi_pane_ParamLimits

0x312d,	// (0x00019a9e) main_mp3_pane_g1_ParamLimits

0xad9d,	// (0x0002170e) main_mp3_pane_g2_ParamLimits

0xada9,	// (0x0002171a) main_mp3_pane_g3_ParamLimits

0xada9,	// (0x0002171a) main_mp3_pane_g3

0xadb5,	// (0x00021726) main_mp3_pane_g4_ParamLimits

0xadb5,	// (0x00021726) main_mp3_pane_g4

0x08a6,	// (0x00017217) main_mp3_pane_g5_ParamLimits

0x08a6,	// (0x00017217) main_mp3_pane_g5

0x315d,	// (0x00019ace) main_mp3_pane_g6_ParamLimits

0x315d,	// (0x00019ace) main_mp3_pane_g6

0x316a,	// (0x00019adb) main_mp3_pane_g7_ParamLimits

0x316a,	// (0x00019adb) main_mp3_pane_g7

0x3176,	// (0x00019ae7) main_mp3_pane_g8_ParamLimits

0x3176,	// (0x00019ae7) main_mp3_pane_g8

0xf6b9,	// (0x0002602a) main_mp3_pane_g_ParamLimits

0xadc1,	// (0x00021732) main_mp3_pane_t2

0xadd1,	// (0x00021742) main_mp3_pane_t3

0x3190,	// (0x00019b01) main_mp3_pane_t4

0x319e,	// (0x00019b0f) main_mp3_pane_t5

0x0005,

0xf6ca,	// (0x0002603b) main_mp3_pane_t

0x31ac,	// (0x00019b1d) mup_progress_pane_cp01

0x6b41,	// (0x0001d4b2) aid_zoom_text_secondary2

0x2f82,	// (0x000198f3) list_cale_ev2_pane

0x2f8a,	// (0x000198fb) scroll_pane_cp023_ParamLimits

0xaee5,	// (0x00021856) field_cale_ev2_pane_ParamLimits

0xaee5,	// (0x00021856) field_cale_ev2_pane

0x31b4,	// (0x00019b25) field_cale_ev2_pane_g1_ParamLimits

0x31b4,	// (0x00019b25) field_cale_ev2_pane_g1

0x31c0,	// (0x00019b31) field_cale_ev2_pane_g2_ParamLimits

0x31c0,	// (0x00019b31) field_cale_ev2_pane_g2

0x31d8,	// (0x00019b49) field_cale_ev2_pane_g3_ParamLimits

0x31d8,	// (0x00019b49) field_cale_ev2_pane_g3

0x0003,

0xf6eb,	// (0x0002605c) field_cale_ev2_pane_g_ParamLimits

0xf6eb,	// (0x0002605c) field_cale_ev2_pane_g

0x31fc,	// (0x00019b6d) field_cale_ev2_pane_t1_ParamLimits

0x31fc,	// (0x00019b6d) field_cale_ev2_pane_t1

0x3213,	// (0x00019b84) field_cale_ev2_pane_t2_ParamLimits

0x3213,	// (0x00019b84) field_cale_ev2_pane_t2

0x0001,

0xf6f4,	// (0x00026065) field_cale_ev2_pane_t_ParamLimits

0xf6f4,	// (0x00026065) field_cale_ev2_pane_t

0xa419,	// (0x00020d8a) main_postcard_pane_g5_ParamLimits

0xa419,	// (0x00020d8a) main_postcard_pane_g5

0xa427,	// (0x00020d98) main_postcard_pane_g6_ParamLimits

0xa427,	// (0x00020d98) main_postcard_pane_g6

0x0898,	// (0x00017209) camera2_autofocus_pane_cp_ParamLimits

0x0898,	// (0x00017209) camera2_autofocus_pane_cp

0x71e0,	// (0x0001db51) main_mup3_pane

0xaf4e,	// (0x000218bf) main_mup3_pane_g1_ParamLimits

0xaf4e,	// (0x000218bf) main_mup3_pane_g1

0xaf6f,	// (0x000218e0) main_mup3_pane_g2_ParamLimits

0xaf6f,	// (0x000218e0) main_mup3_pane_g2

0xafe9,	// (0x0002195a) main_mup3_pane_g3_ParamLimits

0xafe9,	// (0x0002195a) main_mup3_pane_g3

0xb02c,	// (0x0002199d) main_mup3_pane_g4_ParamLimits

0xb02c,	// (0x0002199d) main_mup3_pane_g4

0xb06f,	// (0x000219e0) main_mup3_pane_g5_ParamLimits

0xb06f,	// (0x000219e0) main_mup3_pane_g5

0xb0b2,	// (0x00021a23) main_mup3_pane_g6_ParamLimits

0xb0b2,	// (0x00021a23) main_mup3_pane_g6

0x08b4,	// (0x00017225) main_mup3_pane_g7_ParamLimits

0x08b4,	// (0x00017225) main_mup3_pane_g7

0x0007,

0xf704,	// (0x00026075) main_mup3_pane_g_ParamLimits

0xf704,	// (0x00026075) main_mup3_pane_g

0xb128,	// (0x00021a99) main_mup3_pane_t1_ParamLimits

0xb128,	// (0x00021a99) main_mup3_pane_t1

0xb197,	// (0x00021b08) main_mup3_pane_t2_ParamLimits

0xb197,	// (0x00021b08) main_mup3_pane_t2

0xb260,	// (0x00021bd1) main_mup3_pane_t4_ParamLimits

0xb260,	// (0x00021bd1) main_mup3_pane_t4

0xb2ae,	// (0x00021c1f) main_mup3_pane_t5_ParamLimits

0xb2ae,	// (0x00021c1f) main_mup3_pane_t5

0xb35e,	// (0x00021ccf) main_mup3_pane_t6_ParamLimits

0xb35e,	// (0x00021ccf) main_mup3_pane_t6

0x0005,

0xf715,	// (0x00026086) main_mup3_pane_t_ParamLimits

0xf715,	// (0x00026086) main_mup3_pane_t

0xb40a,	// (0x00021d7b) mup3_progress_pane_ParamLimits

0xb40a,	// (0x00021d7b) mup3_progress_pane

0xb47e,	// (0x00021def) popup_mup3_control_window_ParamLimits

0xb47e,	// (0x00021def) popup_mup3_control_window

0x3228,	// (0x00019b99) popup_mup3_text_window

0xb497,	// (0x00021e08) mup3_progress_pane_t1

0xb4b6,	// (0x00021e27) mup3_progress_pane_t2

0x3230,	// (0x00019ba1) mup3_progress_pane_t3

0x0002,

0xf722,	// (0x00026093) mup3_progress_pane_t

0x324d,	// (0x00019bbe) mup_progress_pane_cp03

0x0140,	// (0x00016ab1) bg_tb_trans_pane_cp04

0xb4d5,	// (0x00021e46) mup3_volume_pane

0xb4dd,	// (0x00021e4e) popup_mup3_control_window_g1

0xb4e6,	// (0x00021e57) mup3_volume_pane_g1

0xb4ef,	// (0x00021e60) mup3_volume_pane_g2

0xb4f8,	// (0x00021e69) mup3_volume_pane_g3

0x0002,

0xf729,	// (0x0002609a) mup3_volume_pane_g

0x0140,	// (0x00016ab1) bg_tb_trans_pane_cp03

0x325d,	// (0x00019bce) popup_mup3_text_window_g1

0x3265,	// (0x00019bd6) popup_mup3_text_window_t1

0x0994,	// (0x00017305) list_calc_item_pane_g1_ParamLimits

0x2c7c,	// (0x000195ed) mup_volume_pane_cp_g1

0xaea3,	// (0x00021814) main_touch_calib_pane_t3

0xaeb9,	// (0x0002182a) main_touch_calib_pane_t4

0xaecf,	// (0x00021840) main_touch_calib_pane_t5

0x6af9,	// (0x0001d46a) aid_cell_size_toolbar2

0x6b01,	// (0x0001d472) aid_popup3_width_pane

0x6b41,	// (0x0001d4b2) aid_zoom_text_msg_primary

0x89c8,	// (0x0001f339) vorec_t7

0x0958,	// (0x000172c9) bg_calc_paper_pane_g1_ParamLimits

0x0970,	// (0x000172e1) bg_calc_paper_pane_g2_ParamLimits

0x0964,	// (0x000172d5) bg_calc_paper_pane_g3_ParamLimits

0x0988,	// (0x000172f9) bg_calc_paper_pane_g4_ParamLimits

0x097c,	// (0x000172ed) bg_calc_paper_pane_g5_ParamLimits

0x849c,	// (0x0001ee0d) bg_calc_paper_pane_g6_ParamLimits

0x84ad,	// (0x0001ee1e) bg_calc_paper_pane_g7_ParamLimits

0x84be,	// (0x0001ee2f) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00025a6a) bg_calc_paper_pane_g_ParamLimits

0x84cf,	// (0x0001ee40) calc_bg_paper_pane_g9_ParamLimits

0x0898,	// (0x00017209) image_qvga_pane_ParamLimits

0x0898,	// (0x00017209) image_qvga_pane

0x082b,	// (0x0001719c) bg_popup_sub_pane_cp04_ParamLimits

0x18bd,	// (0x0001822e) popup_mup_playback_window_g1_ParamLimits

0x18c9,	// (0x0001823a) popup_mup_playback_window_t1_ParamLimits

0x18de,	// (0x0001824f) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00025dcd) popup_mup_playback_window_t_ParamLimits

0x08a6,	// (0x00017217) main_mup2_pane_g3_ParamLimits

0x08a6,	// (0x00017217) main_mup2_pane_g3

0x8ca3,	// (0x0001f614) popup_toolbar_window_cp04

0x1cd3,	// (0x00018644) popup_call2_audio_second_window_g3_ParamLimits

0x1cd3,	// (0x00018644) popup_call2_audio_second_window_g3

0x20eb,	// (0x00018a5c) popup_call2_audio_first_window_g4_ParamLimits

0x20eb,	// (0x00018a5c) popup_call2_audio_first_window_g4

0x2712,	// (0x00019083) popup_call2_audio_in_window_g4_ParamLimits

0x2712,	// (0x00019083) popup_call2_audio_in_window_g4

0xa52b,	// (0x00020e9c) aid_area_sk_bg_cut_ParamLimits

0xa52b,	// (0x00020e9c) aid_area_sk_bg_cut

0x18f3,	// (0x00018264) aid_area_sk_bg_cut_2_ParamLimits

0x18f3,	// (0x00018264) aid_area_sk_bg_cut_2

0x0140,	// (0x00016ab1) aid_placing_details_win

0x0140,	// (0x00016ab1) aid_placing_details_win_2

0x08a6,	// (0x00017217) camera2_autofocus_pane_g1_ParamLimits

0x6d22,	// (0x0001d693) popup_fixed_preview_cale_window_ParamLimits

0x6d22,	// (0x0001d693) popup_fixed_preview_cale_window

0x1667,	// (0x00017fd8) navi_slider_pane_g3

0x165e,	// (0x00017fcf) navi_slider_pane_g4

0x1655,	// (0x00017fc6) navi_slider_pane_g5

0x1667,	// (0x00017fd8) navi_slider_pane_g6

0x715a,	// (0x0001dacb) navi_slider_pane_g7

0x17b2,	// (0x00018123) mup_scale_pane_g3

0x17bb,	// (0x0001812c) mup_scale_pane_g4

0x17c4,	// (0x00018135) mup_scale_pane_g5

0xa217,	// (0x00020b88) mup_scale_pane_g6

0xa220,	// (0x00020b91) mup_scale_pane_g7

0x43e7,	// (0x0001ad58) cams2_slider_pane_g3

0x43e7,	// (0x0001ad58) cams2_slider_pane_g4

0x43e7,	// (0x0001ad58) cams2_slider_pane_g5

0x43e7,	// (0x0001ad58) cams2_slider_pane_g6

0x43e7,	// (0x0001ad58) cams2_slider_pane_g7

0x0baf,	// (0x00017520) camera2_autofocus_pane_cp_g1

0x2a22,	// (0x00019393) bg_popup_preview_window_pane_cp02_ParamLimits

0x2a22,	// (0x00019393) bg_popup_preview_window_pane_cp02

0x3273,	// (0x00019be4) list_fp_cale_pane_ParamLimits

0x3273,	// (0x00019be4) list_fp_cale_pane

0x327f,	// (0x00019bf0) popup_fixed_preview_cale_window_t1_ParamLimits

0x327f,	// (0x00019bf0) popup_fixed_preview_cale_window_t1

0xb501,	// (0x00021e72) popup_fixed_preview_cale_window_t2_ParamLimits

0xb501,	// (0x00021e72) popup_fixed_preview_cale_window_t2

0xb516,	// (0x00021e87) popup_fixed_preview_cale_window_t3_ParamLimits

0xb516,	// (0x00021e87) popup_fixed_preview_cale_window_t3

0x0002,

0xf730,	// (0x000260a1) popup_fixed_preview_cale_window_t_ParamLimits

0xf730,	// (0x000260a1) popup_fixed_preview_cale_window_t

0xb52b,	// (0x00021e9c) list_single_fp_cale_pane_ParamLimits

0xb52b,	// (0x00021e9c) list_single_fp_cale_pane

0x329d,	// (0x00019c0e) list_single_fp_cale_pane_g1_ParamLimits

0x329d,	// (0x00019c0e) list_single_fp_cale_pane_g1

0x32a9,	// (0x00019c1a) list_single_fp_cale_pane_g2_ParamLimits

0x32a9,	// (0x00019c1a) list_single_fp_cale_pane_g2

0x0002,

0xf737,	// (0x000260a8) list_single_fp_cale_pane_g_ParamLimits

0xf737,	// (0x000260a8) list_single_fp_cale_pane_g

0x32c2,	// (0x00019c33) list_single_fp_cale_pane_t1_ParamLimits

0x32c2,	// (0x00019c33) list_single_fp_cale_pane_t1

0x32d4,	// (0x00019c45) list_single_fp_cale_pane_t2_ParamLimits

0x32d4,	// (0x00019c45) list_single_fp_cale_pane_t2

0x0001,

0xf73e,	// (0x000260af) list_single_fp_cale_pane_t_ParamLimits

0xf73e,	// (0x000260af) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6d8a,	// (0x0001d6fb) main_dialer_pane

0x0140,	// (0x00016ab1) aid_cell_size_keypad

0x0140,	// (0x00016ab1) dialer_ne_pane

0x0140,	// (0x00016ab1) grid_dialer_command_1_pane

0x0140,	// (0x00016ab1) grid_dialer_command_2_pane

0x0140,	// (0x00016ab1) grid_dialer_keypad_pane

0x2ba3,	// (0x00019514) bg_popup_call_pane_cp06_ParamLimits

0x2ba3,	// (0x00019514) bg_popup_call_pane_cp06

0x2ba3,	// (0x00019514) dialer_ne_clear_pane_ParamLimits

0x2ba3,	// (0x00019514) dialer_ne_clear_pane

0x0baf,	// (0x00017520) dialer_ne_pane_g1

0x172e,	// (0x0001809f) dialer_ne_pane_t1_ParamLimits

0x172e,	// (0x0001809f) dialer_ne_pane_t1

0x351d,	// (0x00019e8e) dialer_ne_pane_t2_ParamLimits

0x351d,	// (0x00019e8e) dialer_ne_pane_t2

0xb53e,	// (0x00021eaf) dialer_ne_pane_t3_ParamLimits

0xb53e,	// (0x00021eaf) dialer_ne_pane_t3

0x0002,

0xf743,	// (0x000260b4) dialer_ne_pane_t_ParamLimits

0xf743,	// (0x000260b4) dialer_ne_pane_t

0xb53e,	// (0x00021eaf) dialer_ne_pane_t3_copy1_ParamLimits

0xb53e,	// (0x00021eaf) dialer_ne_pane_t3_copy1

0x3307,	// (0x00019c78) cell_dialer_keypad_pane_ParamLimits

0x3307,	// (0x00019c78) cell_dialer_keypad_pane

0x01af,	// (0x00016b20) cell_dialer_command_1_pane_ParamLimits

0x01af,	// (0x00016b20) cell_dialer_command_1_pane

0x331e,	// (0x00019c8f) cell_dialer_command_2_pane_ParamLimits

0x331e,	// (0x00019c8f) cell_dialer_command_2_pane

0x01af,	// (0x00016b20) bg_button_pane_cp02_ParamLimits

0x01af,	// (0x00016b20) bg_button_pane_cp02

0x08a6,	// (0x00017217) cell_dialer_keypad_pane_g1_ParamLimits

0x08a6,	// (0x00017217) cell_dialer_keypad_pane_g1

0x01af,	// (0x00016b20) bg_button_pane_cp03_ParamLimits

0x01af,	// (0x00016b20) bg_button_pane_cp03

0x08a6,	// (0x00017217) cell_dialer_command_1_pane_g1_ParamLimits

0x08a6,	// (0x00017217) cell_dialer_command_1_pane_g1

0x0140,	// (0x00016ab1) bg_button_pane_cp04

0x0baf,	// (0x00017520) cell_dialer_command_2_pane_g1

0x0140,	// (0x00016ab1) bg_button_pane_cp06

0x0baf,	// (0x00017520) dialer_ne_clear_pane_g1

0x151f,	// (0x00017e90) navi_pane_g2

0x154d,	// (0x00017ebe) navi_pane_g3

0x0002,

0xf35f,	// (0x00025cd0) navi_pane_g

0x15dc,	// (0x00017f4d) navi_pane_mv_g2

0x1603,	// (0x00017f74) navi_pane_mv_g5

0x9ff5,	// (0x00020966) navi_pane_mv_t1

0x093a,	// (0x000172ab) main_clock2_pane

0x0898,	// (0x00017209) main_clock2_list_pane_ParamLimits

0x0898,	// (0x00017209) main_clock2_list_pane

0xb5b4,	// (0x00021f25) main_clock2_pane_t1_ParamLimits

0xb5b4,	// (0x00021f25) main_clock2_pane_t1

0xb5e2,	// (0x00021f53) main_clock2_pane_t2_ParamLimits

0xb5e2,	// (0x00021f53) main_clock2_pane_t2

0x0004,

0xf74f,	// (0x000260c0) main_clock2_pane_t_ParamLimits

0xf74f,	// (0x000260c0) main_clock2_pane_t

0xb647,	// (0x00021fb8) popup_clock_analogue_window_cp03_ParamLimits

0xb647,	// (0x00021fb8) popup_clock_analogue_window_cp03

0xb665,	// (0x00021fd6) popup_clock_digital_window_cp02_ParamLimits

0xb665,	// (0x00021fd6) popup_clock_digital_window_cp02

0xb6a5,	// (0x00022016) main_clock2_list_single_pane_ParamLimits

0xb6a5,	// (0x00022016) main_clock2_list_single_pane

0x0b6f,	// (0x000174e0) list_highlight_pane_cp05

0x3361,	// (0x00019cd2) main_clock2_list_single_pane_t1

0x8ca3,	// (0x0001f614) popup_toolbar_window_cp04_ParamLimits

0x08b4,	// (0x00017225) camera2_autofocus_pane_g2_ParamLimits

0x08b4,	// (0x00017225) camera2_autofocus_pane_g2

0x08b4,	// (0x00017225) camera2_autofocus_pane_g3_ParamLimits

0x08b4,	// (0x00017225) camera2_autofocus_pane_g3

0x08b4,	// (0x00017225) camera2_autofocus_pane_g4_ParamLimits

0x08b4,	// (0x00017225) camera2_autofocus_pane_g4

0x08b4,	// (0x00017225) camera2_autofocus_pane_g5_ParamLimits

0x08b4,	// (0x00017225) camera2_autofocus_pane_g5

0x0004,

0xf693,	// (0x00026004) camera2_autofocus_pane_g_ParamLimits

0xf693,	// (0x00026004) camera2_autofocus_pane_g

0xaf0f,	// (0x00021880) camera2_autofocus_pane_cp_g2

0xaf17,	// (0x00021888) camera2_autofocus_pane_cp_g3

0xaf1f,	// (0x00021890) camera2_autofocus_pane_cp_g4

0xaf27,	// (0x00021898) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f9,	// (0x0002606a) camera2_autofocus_pane_cp_g

0x0140,	// (0x00016ab1) popup_dialer_spcha_window

0x0140,	// (0x00016ab1) bg_popup_sub_pane_cp07

0x0140,	// (0x00016ab1) list_spcha_pane

0x336f,	// (0x00019ce0) list_single_spcha_pane_ParamLimits

0x336f,	// (0x00019ce0) list_single_spcha_pane

0x0140,	// (0x00016ab1) list_highlight_pane_cp06

0x1110,	// (0x00017a81) list_single_spcha_pane_t1

0x24bc,	// (0x00018e2d) popup_call2_audio_out_window_g4_ParamLimits

0x24bc,	// (0x00018e2d) popup_call2_audio_out_window_g4

0x6d8a,	// (0x0001d6fb) main_imed2_pane

0x727a,	// (0x0001dbeb) popup_imed_adjust2_window

0x728d,	// (0x0001dbfe) popup_imed_trans_window_ParamLimits

0x728d,	// (0x0001dbfe) popup_imed_trans_window

0x2d51,	// (0x000196c2) popup_blid_sat_info2_window_t1

0x2d5f,	// (0x000196d0) popup_blid_sat_info2_window_t2

0x000a,

0xf628,	// (0x00025f99) popup_blid_sat_info2_window_t

0xb6b7,	// (0x00022028) aid_size_cell_colour_35

0xb6d1,	// (0x00022042) aid_size_cell_colour_112

0xb6e8,	// (0x00022059) aid_size_cell_effect

0x01af,	// (0x00016b20) bg_tb_trans_pane_cp02

0x10dd,	// (0x00017a4e) heading_imed_pane

0xb702,	// (0x00022073) listscroll_imed_pane

0x3381,	// (0x00019cf2) heading_imed_pane_g1

0x3389,	// (0x00019cfa) heading_imed_pane_t1

0x3397,	// (0x00019d08) grid_imed_colour_35_pane_ParamLimits

0x3397,	// (0x00019d08) grid_imed_colour_35_pane

0xb70e,	// (0x0002207f) grid_imed_effect_pane

0x33af,	// (0x00019d20) list_imed_aspect_pane

0xb71e,	// (0x0002208f) scroll_pane_cp027_ParamLimits

0xb71e,	// (0x0002208f) scroll_pane_cp027

0xb72a,	// (0x0002209b) cell_imed_effect_pane_ParamLimits

0xb72a,	// (0x0002209b) cell_imed_effect_pane

0x33b7,	// (0x00019d28) cell_imed_colour_pane_ParamLimits

0x33b7,	// (0x00019d28) cell_imed_colour_pane

0x33f9,	// (0x00019d6a) cell_imed_colour_pane_g1_ParamLimits

0x33f9,	// (0x00019d6a) cell_imed_colour_pane_g1

0x340a,	// (0x00019d7b) hgihlgiht_grid_pane_cp016_ParamLimits

0x340a,	// (0x00019d7b) hgihlgiht_grid_pane_cp016

0xb742,	// (0x000220b3) cell_imed_effect_pane_g1

0xb74a,	// (0x000220bb) grid_highlight_pane_cp017

0x341b,	// (0x00019d8c) list_imed_single_pane_ParamLimits

0x341b,	// (0x00019d8c) list_imed_single_pane

0x0140,	// (0x00016ab1) list_highlight_pane_cp07

0x3430,	// (0x00019da1) list_imed_aspect_pane_comp1_t1

0x1742,	// (0x000180b3) bg_tb_trans_pane_cp05

0x3452,	// (0x00019dc3) popup_imed_adjust2_window_g1

0x3479,	// (0x00019dea) popup_imed_adjust2_window_t1

0x3491,	// (0x00019e02) slider_imed_adjust_pane

0x34a5,	// (0x00019e16) slider_imed_adjust_pane_g1

0x34b5,	// (0x00019e26) slider_imed_adjust_pane_g2

0x34c5,	// (0x00019e36) slider_imed_adjust_pane_g3

0x34d6,	// (0x00019e47) slider_imed_adjust_pane_g4

0x0003,

0xf76c,	// (0x000260dd) slider_imed_adjust_pane_g

0xb753,	// (0x000220c4) aid_size_cell_clipart2

0xb75f,	// (0x000220d0) grid_imed_clipart_pane

0x34e7,	// (0x00019e58) scroll_pane_cp031

0xb769,	// (0x000220da) cell_imed_clipart_pane_ParamLimits

0xb769,	// (0x000220da) cell_imed_clipart_pane

0xb78c,	// (0x000220fd) cell_imed_clipart_pane_g1

0x0140,	// (0x00016ab1) grid_highlight_pane_cp014

0xb596,	// (0x00021f07) main_clock2_pane_g1_ParamLimits

0xb596,	// (0x00021f07) main_clock2_pane_g1

0xb681,	// (0x00021ff2) aid_call2_pane_cp10

0xb693,	// (0x00022004) aid_call_pane_cp10

0x147e,	// (0x00017def) popup_clock_analogue_window_cp10_g1

0x147e,	// (0x00017def) popup_clock_analogue_window_cp10_g2

0x7405,	// (0x0001dd76) popup_clock_analogue_window_cp10_g3

0x7405,	// (0x0001dd76) popup_clock_analogue_window_cp10_g4

0x147e,	// (0x00017def) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75a,	// (0x000260cb) popup_clock_analogue_window_cp10_g

0x741b,	// (0x0001dd8c) popup_clock_analogue_window_cp10_t1

0x743a,	// (0x0001ddab) clock_digital_number_pane_cp10_ParamLimits

0x743a,	// (0x0001ddab) clock_digital_number_pane_cp10

0x7454,	// (0x0001ddc5) clock_digital_number_pane_cp11_ParamLimits

0x7454,	// (0x0001ddc5) clock_digital_number_pane_cp11

0x746e,	// (0x0001dddf) clock_digital_number_pane_cp12_ParamLimits

0x746e,	// (0x0001dddf) clock_digital_number_pane_cp12

0x7488,	// (0x0001ddf9) clock_digital_number_pane_cp13_ParamLimits

0x7488,	// (0x0001ddf9) clock_digital_number_pane_cp13

0x74a2,	// (0x0001de13) clock_digital_separator_pane_cp10_ParamLimits

0x74a2,	// (0x0001de13) clock_digital_separator_pane_cp10

0x74bc,	// (0x0001de2d) popup_clock_digital_window_cp02_t1_ParamLimits

0x74bc,	// (0x0001de2d) popup_clock_digital_window_cp02_t1

0x0823,	// (0x00017194) clock_digital_number_pane_cp10_g1

0x0823,	// (0x00017194) clock_digital_number_pane_cp10_g2

0x0001,

0xf775,	// (0x000260e6) clock_digital_number_pane_cp10_g

0x0823,	// (0x00017194) clock_digital_separator_pane_cp10_g1

0x0823,	// (0x00017194) clock_digital_separator_pane_g2_cp10

0x160b,	// (0x00017f7c) navi_pane_vded_g4

0x1614,	// (0x00017f85) navi_pane_vded_g5

0x161d,	// (0x00017f8e) navi_pane_vded_t1

0x6d8a,	// (0x0001d6fb) main_vded_pane

0xb795,	// (0x00022106) main_vded_pane_g1

0xb7a1,	// (0x00022112) main_vded_pane_g2

0xb7ab,	// (0x0002211c) main_vded_pane_g3

0x0002,

0xf77a,	// (0x000260eb) main_vded_pane_g

0xb7b5,	// (0x00022126) main_vded_pane_t1

0xb7c3,	// (0x00022134) main_vded_pane_t2

0x0001,

0xf781,	// (0x000260f2) main_vded_pane_t

0xb7d1,	// (0x00022142) vded_slider_pane

0xb7db,	// (0x0002214c) vded_video_pane

0x34ef,	// (0x00019e60) vded_video_pane_g1

0xb7e5,	// (0x00022156) vded_video_pane_g2

0x0baf,	// (0x00017520) vded_video_pane_g3

0x0002,

0xf786,	// (0x000260f7) vded_video_pane_g

0x34f9,	// (0x00019e6a) vded_slider_pane_g1

0x2c7c,	// (0x000195ed) vded_slider_pane_g2

0x3502,	// (0x00019e73) vded_slider_pane_g3

0x350b,	// (0x00019e7c) vded_slider_pane_g4

0x3514,	// (0x00019e85) vded_slider_pane_g5

0x0004,

0xf78d,	// (0x000260fe) vded_slider_pane_g

0xb470,	// (0x00021de1) mup3_rocker_pane_ParamLimits

0xb470,	// (0x00021de1) mup3_rocker_pane

0xb7ee,	// (0x0002215f) mup3_control_keys_pane_g1

0xb7f6,	// (0x00022167) mup3_control_keys_pane_g2

0xb7fe,	// (0x0002216f) mup3_control_keys_pane_g3

0xb806,	// (0x00022177) mup3_control_keys_pane_g4

0x0003,

0xf798,	// (0x00026109) mup3_control_keys_pane_g

0x6d4a,	// (0x0001d6bb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6d4a,	// (0x0001d6bb) popup_toolbar2_fixed_window_cp01

0xb48a,	// (0x00021dfb) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb48a,	// (0x00021dfb) popup_toolbar2_fixed_window_cp02

0x1e45,	// (0x000187b6) popup_call2_audio_second_window_t4_ParamLimits

0x1e45,	// (0x000187b6) popup_call2_audio_second_window_t4

0x2381,	// (0x00018cf2) popup_call2_audio_first_window_t6_ParamLimits

0x2381,	// (0x00018cf2) popup_call2_audio_first_window_t6

0x25bf,	// (0x00018f30) popup_call2_audio_out_window_t6_ParamLimits

0x25bf,	// (0x00018f30) popup_call2_audio_out_window_t6

0x6d8a,	// (0x0001d6fb) main_vitu_pane

0x0898,	// (0x00017209) aid_size_cell_itu_ParamLimits

0x0898,	// (0x00017209) aid_size_cell_itu

0x0898,	// (0x00017209) bg_popup_window_pane_cp08_ParamLimits

0x0898,	// (0x00017209) bg_popup_window_pane_cp08

0x0898,	// (0x00017209) field_vitu_entry_pane_ParamLimits

0x0898,	// (0x00017209) field_vitu_entry_pane

0x0898,	// (0x00017209) grid_vitu_function_pane_ParamLimits

0x0898,	// (0x00017209) grid_vitu_function_pane

0x0898,	// (0x00017209) grid_vitu_itu_pane_ParamLimits

0x0898,	// (0x00017209) grid_vitu_itu_pane

0x0898,	// (0x00017209) cell_vitu_itu_pane_ParamLimits

0x0898,	// (0x00017209) cell_vitu_itu_pane

0x0898,	// (0x00017209) cell_vitu_function_pane_ParamLimits

0x0898,	// (0x00017209) cell_vitu_function_pane

0x01af,	// (0x00016b20) bg_popup_sub_pane_cp08_ParamLimits

0x01af,	// (0x00016b20) bg_popup_sub_pane_cp08

0x0b81,	// (0x000174f2) field_vitu_entry_pane_t1_ParamLimits

0x0b81,	// (0x000174f2) field_vitu_entry_pane_t1

0x351d,	// (0x00019e8e) field_vitu_entry_pane_t2_ParamLimits

0x351d,	// (0x00019e8e) field_vitu_entry_pane_t2

0x0001,

0xf7a1,	// (0x00026112) field_vitu_entry_pane_t_ParamLimits

0xf7a1,	// (0x00026112) field_vitu_entry_pane_t

0x2ba3,	// (0x00019514) bg_button_pane_cp05_ParamLimits

0x2ba3,	// (0x00019514) bg_button_pane_cp05

0x353a,	// (0x00019eab) cell_vitu_itu_pane_g1

0x171a,	// (0x0001808b) cell_vitu_itu_pane_t1_ParamLimits

0x171a,	// (0x0001808b) cell_vitu_itu_pane_t1

0x171a,	// (0x0001808b) cell_vitu_itu_pane_t2_ParamLimits

0x171a,	// (0x0001808b) cell_vitu_itu_pane_t2

0x0002,

0xf7a6,	// (0x00026117) cell_vitu_itu_pane_t_ParamLimits

0xf7a6,	// (0x00026117) cell_vitu_itu_pane_t

0x0140,	// (0x00016ab1) bg_button_pane_cp07

0x0baf,	// (0x00017520) cell_vitu_function_pane_g1

0x6e63,	// (0x0001d7d4) main_calc_pane_g1

0x6b35,	// (0x0001d4a6) aid_visual_content_pane

0x6d8a,	// (0x0001d6fb) main_vradio_pane

0x08b4,	// (0x00017225) main_vradio_pane_g1_ParamLimits

0x08b4,	// (0x00017225) main_vradio_pane_g1

0x08b4,	// (0x00017225) main_vradio_pane_g2_ParamLimits

0x08b4,	// (0x00017225) main_vradio_pane_g2

0x0001,

0xf7ad,	// (0x0002611e) main_vradio_pane_g_ParamLimits

0xf7ad,	// (0x0002611e) main_vradio_pane_g

0x172e,	// (0x0001809f) main_vradio_pane_t1_ParamLimits

0x172e,	// (0x0001809f) main_vradio_pane_t1

0x172e,	// (0x0001809f) main_vradio_pane_t2_ParamLimits

0x172e,	// (0x0001809f) main_vradio_pane_t2

0x172e,	// (0x0001809f) main_vradio_pane_t3_ParamLimits

0x172e,	// (0x0001809f) main_vradio_pane_t3

0x0002,

0xf7b2,	// (0x00026123) main_vradio_pane_t_ParamLimits

0xf7b2,	// (0x00026123) main_vradio_pane_t

0x0898,	// (0x00017209) vradio_rocker_control_pane_ParamLimits

0x0898,	// (0x00017209) vradio_rocker_control_pane

0x0898,	// (0x00017209) vradio_station_info_pane_ParamLimits

0x0898,	// (0x00017209) vradio_station_info_pane

0x01af,	// (0x00016b20) vradio_frequency_info_pane_ParamLimits

0x01af,	// (0x00016b20) vradio_frequency_info_pane

0x0baf,	// (0x00017520) vradio_station_info_pane_g1

0x171a,	// (0x0001808b) vradio_station_info_pane_t1_ParamLimits

0x171a,	// (0x0001808b) vradio_station_info_pane_t1

0x172e,	// (0x0001809f) vradio_station_info_pane_t2_ParamLimits

0x172e,	// (0x0001809f) vradio_station_info_pane_t2

0x0001,

0xf7b9,	// (0x0002612a) vradio_station_info_pane_t_ParamLimits

0xf7b9,	// (0x0002612a) vradio_station_info_pane_t

0x0140,	// (0x00016ab1) vradio_tuning_pane

0xb816,	// (0x00022187) vradio_rocker_control_pane_g1

0x3556,	// (0x00019ec7) vradio_rocker_control_pane_g2

0xb81e,	// (0x0002218f) vradio_rocker_control_pane_g3

0xb826,	// (0x00022197) vradio_rocker_control_pane_g4

0xb82e,	// (0x0002219f) vradio_rocker_control_pane_g5

0x0004,

0xf7be,	// (0x0002612f) vradio_rocker_control_pane_g

0x0baf,	// (0x00017520) vradio_frequency_info_pane_g1

0x0b81,	// (0x000174f2) vradio_frequency_info_pane_t1_ParamLimits

0x0b81,	// (0x000174f2) vradio_frequency_info_pane_t1

0xb836,	// (0x000221a7) vradio_tuning_pane_g1

0xb843,	// (0x000221b4) vradio_tuning_pane_t1

0x6b51,	// (0x0001d4c2) area_side_right_pane_ParamLimits

0x6b51,	// (0x0001d4c2) area_side_right_pane

0x29e9,	// (0x0001935a) status_small_pane_g1

0x29f1,	// (0x00019362) status_small_pane_g2

0x29fa,	// (0x0001936b) status_small_pane_g3

0x2a03,	// (0x00019374) status_small_pane_g4

0x0003,

0xf58a,	// (0x00025efb) status_small_pane_g

0x2a0c,	// (0x0001937d) status_small_pane_t1

0x6d8a,	// (0x0001d6fb) main_video3_pane

0x355e,	// (0x00019ecf) cams_zoom_vslider_pane

0x3566,	// (0x00019ed7) image3_wide_pane_ParamLimits

0x3566,	// (0x00019ed7) image3_wide_pane

0x3580,	// (0x00019ef1) image3_wide_small_pane

0x358c,	// (0x00019efd) main_video3_pane_g1_ParamLimits

0x358c,	// (0x00019efd) main_video3_pane_g1

0x35a8,	// (0x00019f19) main_video3_pane_g2_ParamLimits

0x35a8,	// (0x00019f19) main_video3_pane_g2

0x0001,

0xf7c9,	// (0x0002613a) main_video3_pane_g_ParamLimits

0xf7c9,	// (0x0002613a) main_video3_pane_g

0x35c4,	// (0x00019f35) main_video3_pane_t1_ParamLimits

0x35c4,	// (0x00019f35) main_video3_pane_t1

0x35ef,	// (0x00019f60) main_video3_pane_t2_ParamLimits

0x35ef,	// (0x00019f60) main_video3_pane_t2

0x361a,	// (0x00019f8b) main_video3_pane_t3_ParamLimits

0x361a,	// (0x00019f8b) main_video3_pane_t3

0x0002,

0xf7ce,	// (0x0002613f) main_video3_pane_t_ParamLimits

0xf7ce,	// (0x0002613f) main_video3_pane_t

0x3647,	// (0x00019fb8) cams_zoom_vslider_pane_g1

0x3650,	// (0x00019fc1) cams_zoom_vslider_pane_g2

0x0001,

0xf7d5,	// (0x00026146) cams_zoom_vslider_pane_g

0x3658,	// (0x00019fc9) small_slider_vertical_pane

0x0baf,	// (0x00017520) small_slider_vertical_pane_g1

0x0baf,	// (0x00017520) small_slider_vertical_pane_g2

0x3660,	// (0x00019fd1) small_slider_vertical_pane_g3

0x0002,

0xf7da,	// (0x0002614b) small_slider_vertical_pane_g

0x6d8a,	// (0x0001d6fb) main_hwr_training_pane

0x3669,	// (0x00019fda) hwr_training_instruct_pane_ParamLimits

0x3669,	// (0x00019fda) hwr_training_instruct_pane

0xb852,	// (0x000221c3) hwr_training_navi_pane_ParamLimits

0xb852,	// (0x000221c3) hwr_training_navi_pane

0xb86c,	// (0x000221dd) hwr_training_write_pane_ParamLimits

0xb86c,	// (0x000221dd) hwr_training_write_pane

0x0140,	// (0x00016ab1) bg_frame_shadow_pane

0x36a0,	// (0x0001a011) hwr_training_write_pane_g1

0x36a8,	// (0x0001a019) hwr_training_write_pane_g2

0x36b0,	// (0x0001a021) hwr_training_write_pane_g3

0x36b8,	// (0x0001a029) hwr_training_write_pane_g4

0x36c0,	// (0x0001a031) hwr_training_write_pane_g5

0x36c8,	// (0x0001a039) hwr_training_write_pane_g6

0x36d0,	// (0x0001a041) hwr_training_write_pane_g7

0x0006,

0xf7e1,	// (0x00026152) hwr_training_write_pane_g

0x74dd,	// (0x0001de4e) hwr_training_navi_pane_g1_ParamLimits

0x74dd,	// (0x0001de4e) hwr_training_navi_pane_g1

0x74ef,	// (0x0001de60) hwr_training_navi_pane_g2_ParamLimits

0x74ef,	// (0x0001de60) hwr_training_navi_pane_g2

0x7501,	// (0x0001de72) hwr_training_navi_pane_g3_ParamLimits

0x7501,	// (0x0001de72) hwr_training_navi_pane_g3

0x7511,	// (0x0001de82) hwr_training_navi_pane_g4_ParamLimits

0x7511,	// (0x0001de82) hwr_training_navi_pane_g4

0x0004,

0xf7f0,	// (0x00026161) hwr_training_navi_pane_g_ParamLimits

0xf7f0,	// (0x00026161) hwr_training_navi_pane_g

0x752b,	// (0x0001de9c) hwr_training_navi_pane_t1

0xb8a4,	// (0x00022215) list_single_hwr_training_instruct_pane_ParamLimits

0xb8a4,	// (0x00022215) list_single_hwr_training_instruct_pane

0x3727,	// (0x0001a098) list_single_hwr_training_instruct_pane_t1

0x2e52,	// (0x000197c3) bg_frame_shadow_pane_g1

0x3736,	// (0x0001a0a7) bg_frame_shadow_pane_g2

0x373e,	// (0x0001a0af) bg_frame_shadow_pane_g3

0x3746,	// (0x0001a0b7) bg_frame_shadow_pane_g4

0x374e,	// (0x0001a0bf) bg_frame_shadow_pane_g5

0x3756,	// (0x0001a0c7) bg_frame_shadow_pane_g6

0x375e,	// (0x0001a0cf) bg_frame_shadow_pane_g7

0x0a16,	// (0x00017387) bg_frame_shadow_pane_g8

0x0007,

0xf7fb,	// (0x0002616c) bg_frame_shadow_pane_g

0x6d8a,	// (0x0001d6fb) main_video_tele_dialer_pane

0x7539,	// (0x0001deaa) aid_size_cell_video_keypad_ParamLimits

0x7539,	// (0x0001deaa) aid_size_cell_video_keypad

0x7549,	// (0x0001deba) grid_video_dialer_keypad_pane_ParamLimits

0x7549,	// (0x0001deba) grid_video_dialer_keypad_pane

0x757d,	// (0x0001deee) video_down_pane_cp_ParamLimits

0x757d,	// (0x0001deee) video_down_pane_cp

0x758b,	// (0x0001defc) cell_video_dialer_keypad_pane_ParamLimits

0x758b,	// (0x0001defc) cell_video_dialer_keypad_pane

0x3766,	// (0x0001a0d7) bg_button_pane_cp08_ParamLimits

0x3766,	// (0x0001a0d7) bg_button_pane_cp08

0xb8e9,	// (0x0002225a) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb8e9,	// (0x0002225a) cell_video_dialer_keypad_pane_g1

0xb464,	// (0x00021dd5) mup3_rocker2_pane_ParamLimits

0xb464,	// (0x00021dd5) mup3_rocker2_pane

0x0baf,	// (0x00017520) mup3_rocker2_pane_g1

0x71ee,	// (0x0001db5f) main_dialer2_pane

0x6d8a,	// (0x0001d6fb) main_mp4_pane

0x75be,	// (0x0001df2f) main_mp4_pane_g1_ParamLimits

0x75be,	// (0x0001df2f) main_mp4_pane_g1

0x75cc,	// (0x0001df3d) main_mp4_pane_g2_ParamLimits

0x75cc,	// (0x0001df3d) main_mp4_pane_g2

0x75da,	// (0x0001df4b) main_mp4_pane_g3_ParamLimits

0x75da,	// (0x0001df4b) main_mp4_pane_g3

0x761f,	// (0x0001df90) main_mp4_pane_g4_ParamLimits

0x761f,	// (0x0001df90) main_mp4_pane_g4

0x764d,	// (0x0001dfbe) main_mp4_pane_g5_ParamLimits

0x764d,	// (0x0001dfbe) main_mp4_pane_g5

0x0007,

0xf81b,	// (0x0002618c) main_mp4_pane_g_ParamLimits

0xf81b,	// (0x0002618c) main_mp4_pane_g

0x76c1,	// (0x0001e032) main_mp4_pane_t1_ParamLimits

0x76c1,	// (0x0001e032) main_mp4_pane_t1

0x771d,	// (0x0001e08e) main_mp4_pane_t2_ParamLimits

0x771d,	// (0x0001e08e) main_mp4_pane_t2

0x38ee,	// (0x0001a25f) main_mp4_pane_t3_ParamLimits

0x38ee,	// (0x0001a25f) main_mp4_pane_t3

0x776f,	// (0x0001e0e0) main_mp4_pane_t4_ParamLimits

0x776f,	// (0x0001e0e0) main_mp4_pane_t4

0x0003,

0xf82c,	// (0x0002619d) main_mp4_pane_t_ParamLimits

0xf82c,	// (0x0002619d) main_mp4_pane_t

0x77b3,	// (0x0001e124) mp4_progress_pane_ParamLimits

0x77b3,	// (0x0001e124) mp4_progress_pane

0x77fd,	// (0x0001e16e) mp4_rocker_pane_ParamLimits

0x77fd,	// (0x0001e16e) mp4_rocker_pane

0x39ca,	// (0x0001a33b) mp4_progress_pane_t1

0x39e3,	// (0x0001a354) mp4_progress_pane_t2

0x0001,

0xf835,	// (0x000261a6) mp4_progress_pane_t

0x39fc,	// (0x0001a36d) mup_progress_pane_cp04

0x43e7,	// (0x0001ad58) mp4_rocker_pane_g1

0x781d,	// (0x0001e18e) aid_cell_size_keypad2_ParamLimits

0x781d,	// (0x0001e18e) aid_cell_size_keypad2

0x782d,	// (0x0001e19e) dialer2_ne_pane_ParamLimits

0x782d,	// (0x0001e19e) dialer2_ne_pane

0x783b,	// (0x0001e1ac) grid_dialer2_keypad_pane_ParamLimits

0x783b,	// (0x0001e1ac) grid_dialer2_keypad_pane

0x2b95,	// (0x00019506) bg_popup_call_pane_cp07_ParamLimits

0x2b95,	// (0x00019506) bg_popup_call_pane_cp07

0xb923,	// (0x00022294) dialer2_ne_pane_t1_ParamLimits

0xb923,	// (0x00022294) dialer2_ne_pane_t1

0x784b,	// (0x0001e1bc) cell_dialer2_keypad_pane_ParamLimits

0x784b,	// (0x0001e1bc) cell_dialer2_keypad_pane

0x3a21,	// (0x0001a392) bg_button_pane_pane_cp04_ParamLimits

0x3a21,	// (0x0001a392) bg_button_pane_pane_cp04

0xb948,	// (0x000222b9) cell_dialer2_keypad_pane_g1_ParamLimits

0xb948,	// (0x000222b9) cell_dialer2_keypad_pane_g1

0x8b65,	// (0x0001f4d6) aid_placing_vt_set_content_ParamLimits

0x8b65,	// (0x0001f4d6) aid_placing_vt_set_content

0x8b91,	// (0x0001f502) aid_placing_vt_set_title_ParamLimits

0x8b91,	// (0x0001f502) aid_placing_vt_set_title

0x6d8a,	// (0x0001d6fb) main_image3_pane

0x7892,	// (0x0001e203) area_side_right_pane_cp01_ParamLimits

0x7892,	// (0x0001e203) area_side_right_pane_cp01

0x78bf,	// (0x0001e230) main_image3_pane_g1_ParamLimits

0x78bf,	// (0x0001e230) main_image3_pane_g1

0x78cd,	// (0x0001e23e) main_image3_pane_g2_ParamLimits

0x78cd,	// (0x0001e23e) main_image3_pane_g2

0x78e6,	// (0x0001e257) main_image3_pane_g3_ParamLimits

0x78e6,	// (0x0001e257) main_image3_pane_g3

0x78ff,	// (0x0001e270) main_image3_pane_g4_ParamLimits

0x78ff,	// (0x0001e270) main_image3_pane_g4

0x0003,

0xf844,	// (0x000261b5) main_image3_pane_g_ParamLimits

0xf844,	// (0x000261b5) main_image3_pane_g

0x7918,	// (0x0001e289) main_image3_pane_t1_ParamLimits

0x7918,	// (0x0001e289) main_image3_pane_t1

0x793d,	// (0x0001e2ae) main_image3_pane_t2_ParamLimits

0x793d,	// (0x0001e2ae) main_image3_pane_t2

0x795c,	// (0x0001e2cd) main_image3_pane_t3_ParamLimits

0x795c,	// (0x0001e2cd) main_image3_pane_t3

0x0003,

0xf84d,	// (0x000261be) main_image3_pane_t_ParamLimits

0xf84d,	// (0x000261be) main_image3_pane_t

0x0898,	// (0x00017209) grid_sctrl_middle_pane_cp01_ParamLimits

0x0898,	// (0x00017209) grid_sctrl_middle_pane_cp01

0xb9b0,	// (0x00022321) cell_sctrl_middle_pane_cp01_ParamLimits

0xb9b0,	// (0x00022321) cell_sctrl_middle_pane_cp01

0xb9c1,	// (0x00022332) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb9c1,	// (0x00022332) cell_sctrl_middle_pane_cp01_g1

0x6d8a,	// (0x0001d6fb) main_call4_pane

0x79bd,	// (0x0001e32e) aid_size_button_call4_ParamLimits

0x79bd,	// (0x0001e32e) aid_size_button_call4

0x79f3,	// (0x0001e364) call4_windows_pane_ParamLimits

0x79f3,	// (0x0001e364) call4_windows_pane

0x7a08,	// (0x0001e379) grid_call4_button_pane_ParamLimits

0x7a08,	// (0x0001e379) grid_call4_button_pane

0xb9da,	// (0x0002234b) call4_windows_conf_pane

0xb9ef,	// (0x00022360) popup_call4_audio_first_window_ParamLimits

0xb9ef,	// (0x00022360) popup_call4_audio_first_window

0xba3f,	// (0x000223b0) popup_call4_audio_second_window_ParamLimits

0xba3f,	// (0x000223b0) popup_call4_audio_second_window

0xba58,	// (0x000223c9) popup_call4_audio_wait_window_ParamLimits

0xba58,	// (0x000223c9) popup_call4_audio_wait_window

0x7a2a,	// (0x0001e39b) cell_call4_button_pane_ParamLimits

0x7a2a,	// (0x0001e39b) cell_call4_button_pane

0xba66,	// (0x000223d7) bg_button_pane_cp09_ParamLimits

0xba66,	// (0x000223d7) bg_button_pane_cp09

0x7a4d,	// (0x0001e3be) cell_call4_button_pane_g1_ParamLimits

0x7a4d,	// (0x0001e3be) cell_call4_button_pane_g1

0xba72,	// (0x000223e3) cell_call4_button_pane_t1_ParamLimits

0xba72,	// (0x000223e3) cell_call4_button_pane_t1

0x3ab0,	// (0x0001a421) popup_call4_audio_conf_window_ParamLimits

0x3ab0,	// (0x0001a421) popup_call4_audio_conf_window

0xb497,	// (0x00021e08) mup3_progress_pane_t1_ParamLimits

0xb4b6,	// (0x00021e27) mup3_progress_pane_t2_ParamLimits

0x3230,	// (0x00019ba1) mup3_progress_pane_t3_ParamLimits

0xf722,	// (0x00026093) mup3_progress_pane_t_ParamLimits

0x324d,	// (0x00019bbe) mup_progress_pane_cp03_ParamLimits

0xb80e,	// (0x0002217f) mup3_control_keys_pane_g4_copy1

0x77e1,	// (0x0001e152) mp4_rocker2_pane_ParamLimits

0x77e1,	// (0x0001e152) mp4_rocker2_pane

0x3acc,	// (0x0001a43d) mp4_rocker2_pane_g1

0x3ac4,	// (0x0001a435) mp4_rocker2_pane_g2

0x7a8c,	// (0x0001e3fd) mp4_rocker2_pane_g3

0x7a94,	// (0x0001e405) mp4_rocker2_pane_g4

0x7a9c,	// (0x0001e40d) mp4_rocker2_pane_g5

0x0004,

0xf856,	// (0x000261c7) mp4_rocker2_pane_g

0x6d8a,	// (0x0001d6fb) main_camera4_pane

0x6d8a,	// (0x0001d6fb) main_video4_pane

0x7559,	// (0x0001deca) main_video_tele_dialer_pane_t1_ParamLimits

0x7559,	// (0x0001deca) main_video_tele_dialer_pane_t1

0x756b,	// (0x0001dedc) main_video_tele_dialer_pane_t2_ParamLimits

0x756b,	// (0x0001dedc) main_video_tele_dialer_pane_t2

0x0001,

0xf80c,	// (0x0002617d) main_video_tele_dialer_pane_t_ParamLimits

0xf80c,	// (0x0002617d) main_video_tele_dialer_pane_t

0x7abc,	// (0x0001e42d) cam4_autofocus_pane_ParamLimits

0x7abc,	// (0x0001e42d) cam4_autofocus_pane

0x7ad6,	// (0x0001e447) cam4_image_uncrop_pane_ParamLimits

0x7ad6,	// (0x0001e447) cam4_image_uncrop_pane

0x7aed,	// (0x0001e45e) cam4_indicators_pane_ParamLimits

0x7aed,	// (0x0001e45e) cam4_indicators_pane

0x7b09,	// (0x0001e47a) main_camera4_pane_g1_ParamLimits

0x7b09,	// (0x0001e47a) main_camera4_pane_g1

0x7b15,	// (0x0001e486) main_camera4_pane_g2_ParamLimits

0x7b15,	// (0x0001e486) main_camera4_pane_g2

0x7b15,	// (0x0001e486) main_camera4_pane_g3_ParamLimits

0x7b15,	// (0x0001e486) main_camera4_pane_g3

0x7b21,	// (0x0001e492) main_camera4_pane_g4_ParamLimits

0x7b21,	// (0x0001e492) main_camera4_pane_g4

0x7b2d,	// (0x0001e49e) main_camera4_pane_g5_ParamLimits

0x7b2d,	// (0x0001e49e) main_camera4_pane_g5

0x0005,

0xf861,	// (0x000261d2) main_camera4_pane_g_ParamLimits

0xf861,	// (0x000261d2) main_camera4_pane_g

0x7b47,	// (0x0001e4b8) main_camera4_pane_t1_ParamLimits

0x7b47,	// (0x0001e4b8) main_camera4_pane_t1

0x4fbf,	// (0x0001b930) bg_tb_trans_pane_cp06

0x7b73,	// (0x0001e4e4) cam4_indicators_pane_g1

0x7b84,	// (0x0001e4f5) cam4_indicators_pane_g2

0x0002,

0xf87c,	// (0x000261ed) cam4_indicators_pane_g

0x7b9c,	// (0x0001e50d) cam4_indicators_pane_t1

0x7bc6,	// (0x0001e537) main_video4_pane_g1_ParamLimits

0x7bc6,	// (0x0001e537) main_video4_pane_g1

0x7bd2,	// (0x0001e543) main_video4_pane_g2_ParamLimits

0x7bd2,	// (0x0001e543) main_video4_pane_g2

0x7bde,	// (0x0001e54f) main_video4_pane_g3_ParamLimits

0x7bde,	// (0x0001e54f) main_video4_pane_g3

0x7bea,	// (0x0001e55b) main_video4_pane_g4_ParamLimits

0x7bea,	// (0x0001e55b) main_video4_pane_g4

0x0004,

0xf883,	// (0x000261f4) main_video4_pane_g_ParamLimits

0xf883,	// (0x000261f4) main_video4_pane_g

0x7c0a,	// (0x0001e57b) vid4_indicators_pane_ParamLimits

0x7c0a,	// (0x0001e57b) vid4_indicators_pane

0x7c29,	// (0x0001e59a) video4_image_uncrop_cif_pane_ParamLimits

0x7c29,	// (0x0001e59a) video4_image_uncrop_cif_pane

0x7c38,	// (0x0001e5a9) video4_image_uncrop_nhd_pane_ParamLimits

0x7c38,	// (0x0001e5a9) video4_image_uncrop_nhd_pane

0x7ad6,	// (0x0001e447) video4_image_uncrop_vga_pane_ParamLimits

0x7ad6,	// (0x0001e447) video4_image_uncrop_vga_pane

0x71e0,	// (0x0001db51) bg_tb_trans_pane_cp07

0x7c4d,	// (0x0001e5be) vid4_indicators_pane_g1

0x7c61,	// (0x0001e5d2) vid4_indicators_pane_g2

0x7c75,	// (0x0001e5e6) vid4_indicators_pane_g3

0x0004,

0xf88e,	// (0x000261ff) vid4_indicators_pane_g

0x7ca2,	// (0x0001e613) vid4_indicators_pane_t1

0xbaa8,	// (0x00022419) cam4_autofocus_pane_g1

0xbab0,	// (0x00022421) cam4_autofocus_pane_g2

0xbab8,	// (0x00022429) cam4_autofocus_pane_g3

0x0002,

0xf899,	// (0x0002620a) cam4_autofocus_pane_g

0xbac0,	// (0x00022431) cam4_autofocus_pane_g3_copy1

0xb8cd,	// (0x0002223e) video_down_pane_cp_t1

0xb8db,	// (0x0002224c) video_down_pane_cp_t2

0x0001,

0xf811,	// (0x00026182) video_down_pane_cp_t

0x6d7c,	// (0x0001d6ed) popup_vitu2_window_ParamLimits

0x6d7c,	// (0x0001d6ed) popup_vitu2_window

0x7cb9,	// (0x0001e62a) aid_size_cell2_itu2_ParamLimits

0x7cb9,	// (0x0001e62a) aid_size_cell2_itu2

0x7cdb,	// (0x0001e64c) aid_size_cell_itu2_ParamLimits

0x7cdb,	// (0x0001e64c) aid_size_cell_itu2

0x7d1f,	// (0x0001e690) bg_popup_window_pane_cp09_ParamLimits

0x7d1f,	// (0x0001e690) bg_popup_window_pane_cp09

0x7d2d,	// (0x0001e69e) field_vitu2_entry_pane_ParamLimits

0x7d2d,	// (0x0001e69e) field_vitu2_entry_pane

0x7d4d,	// (0x0001e6be) grid_vitu2_function_pane_ParamLimits

0x7d4d,	// (0x0001e6be) grid_vitu2_function_pane

0x7d91,	// (0x0001e702) grid_vitu2_itu_pane_ParamLimits

0x7d91,	// (0x0001e702) grid_vitu2_itu_pane

0x7e09,	// (0x0001e77a) cell_vitu2_itu_pane_ParamLimits

0x7e09,	// (0x0001e77a) cell_vitu2_itu_pane

0x7e22,	// (0x0001e793) cell_vitu2_function_pane_ParamLimits

0x7e22,	// (0x0001e793) cell_vitu2_function_pane

0x3bcf,	// (0x0001a540) bg_popup_call_pane_cp08_ParamLimits

0x3bcf,	// (0x0001a540) bg_popup_call_pane_cp08

0x3be6,	// (0x0001a557) field_vitu2_entry_pane_g1

0x3bf2,	// (0x0001a563) field_vitu2_entry_pane_g2

0x0002,

0xf8a0,	// (0x00026211) field_vitu2_entry_pane_g

0xbac8,	// (0x00022439) field_vitu2_entry_pane_t1_ParamLimits

0xbac8,	// (0x00022439) field_vitu2_entry_pane_t1

0x3bfe,	// (0x0001a56f) field_vitu2_entry_pane_t2_ParamLimits

0x3bfe,	// (0x0001a56f) field_vitu2_entry_pane_t2

0x0001,

0xf8a7,	// (0x00026218) field_vitu2_entry_pane_t_ParamLimits

0xf8a7,	// (0x00026218) field_vitu2_entry_pane_t

0x7373,	// (0x0001dce4) bg_button_pane_cp010_ParamLimits

0x7373,	// (0x0001dce4) bg_button_pane_cp010

0x7e63,	// (0x0001e7d4) cell_vitu2_itu_pane_g1

0x7e89,	// (0x0001e7fa) cell_vitu2_itu_pane_t1_ParamLimits

0x7e89,	// (0x0001e7fa) cell_vitu2_itu_pane_t1

0x7ed5,	// (0x0001e846) cell_vitu2_itu_pane_t2_ParamLimits

0x7ed5,	// (0x0001e846) cell_vitu2_itu_pane_t2

0x0002,

0xf8b1,	// (0x00026222) cell_vitu2_itu_pane_t_ParamLimits

0xf8b1,	// (0x00026222) cell_vitu2_itu_pane_t

0x71e0,	// (0x0001db51) bg_button_pane_cp011

0x7f9d,	// (0x0001e90e) cell_vitu2_function_pane_g1

0x6d8a,	// (0x0001d6fb) main_myfav_hc_pane

0x799e,	// (0x0001e30f) popup_image3_note_pane_ParamLimits

0x799e,	// (0x0001e30f) popup_image3_note_pane

0x79ac,	// (0x0001e31d) popup_image3_tool_bar_pane_ParamLimits

0x79ac,	// (0x0001e31d) popup_image3_tool_bar_pane

0x7f4b,	// (0x0001e8bc) cell_vitu2_itu_pane_t3_ParamLimits

0x7f4b,	// (0x0001e8bc) cell_vitu2_itu_pane_t3

0x0140,	// (0x00016ab1) bg_popup_trans_pane

0x3c23,	// (0x0001a594) grid_image3_tool_bar_pane

0x3c2d,	// (0x0001a59e) bg_popup_trans_pane_g1

0x0dc0,	// (0x00017731) bg_popup_trans_pane_g2

0x3c35,	// (0x0001a5a6) bg_popup_trans_pane_g3

0x3c3d,	// (0x0001a5ae) bg_popup_trans_pane_g4

0x3c45,	// (0x0001a5b6) bg_popup_trans_pane_g5

0x3c4d,	// (0x0001a5be) bg_popup_trans_pane_g6

0x3c55,	// (0x0001a5c6) bg_popup_trans_pane_g7

0x3c5d,	// (0x0001a5ce) bg_popup_trans_pane_g8

0x0da0,	// (0x00017711) bg_popup_trans_pane_g9

0x0008,

0xf8b8,	// (0x00026229) bg_popup_trans_pane_g

0x3c65,	// (0x0001a5d6) cell_image3_tool_bar_pane_ParamLimits

0x3c65,	// (0x0001a5d6) cell_image3_tool_bar_pane

0x0baf,	// (0x00017520) cell_image3_tool_bar_pane_g1

0x0140,	// (0x00016ab1) bg_popup_trans_pane_cp1

0x3c79,	// (0x0001a5ea) popup_image3_note_pane_t1

0x3c87,	// (0x0001a5f8) popup_image3_note_pane_t2

0x3c95,	// (0x0001a606) popup_image3_note_pane_t3

0x0002,

0xf8cb,	// (0x0002623c) popup_image3_note_pane_t

0x3ca3,	// (0x0001a614) popup_image3_note_pane_t3_copy1

0xbafb,	// (0x0002246c) bg_myfav_hc_instruction_pane_ParamLimits

0xbafb,	// (0x0002246c) bg_myfav_hc_instruction_pane

0xbb13,	// (0x00022484) cell_myfav_contact_pane_ParamLimits

0xbb13,	// (0x00022484) cell_myfav_contact_pane

0xbb2d,	// (0x0002249e) cell_myfav_contact_pane_cp1_ParamLimits

0xbb2d,	// (0x0002249e) cell_myfav_contact_pane_cp1

0xbb45,	// (0x000224b6) cell_myfav_contact_pane_cp2_ParamLimits

0xbb45,	// (0x000224b6) cell_myfav_contact_pane_cp2

0xbb5d,	// (0x000224ce) cell_myfav_contact_pane_cp3_ParamLimits

0xbb5d,	// (0x000224ce) cell_myfav_contact_pane_cp3

0xbb74,	// (0x000224e5) cell_myfav_contact_pane_cp4_ParamLimits

0xbb74,	// (0x000224e5) cell_myfav_contact_pane_cp4

0xbb8a,	// (0x000224fb) cell_myfav_contact_pane_cp5_ParamLimits

0xbb8a,	// (0x000224fb) cell_myfav_contact_pane_cp5

0xbb9e,	// (0x0002250f) cell_myfav_contact_pane_cp6_ParamLimits

0xbb9e,	// (0x0002250f) cell_myfav_contact_pane_cp6

0xbbb2,	// (0x00022523) cell_myfav_contact_pane_cp7_ParamLimits

0xbbb2,	// (0x00022523) cell_myfav_contact_pane_cp7

0x3cb1,	// (0x0001a622) listscroll_gen_pane_cp05

0xbbca,	// (0x0002253b) main_myfav_hc_pane_g1_ParamLimits

0xbbca,	// (0x0002253b) main_myfav_hc_pane_g1

0xbbe0,	// (0x00022551) main_myfav_hc_pane_g2_ParamLimits

0xbbe0,	// (0x00022551) main_myfav_hc_pane_g2

0x0002,

0xf8d2,	// (0x00026243) main_myfav_hc_pane_g_ParamLimits

0xf8d2,	// (0x00026243) main_myfav_hc_pane_g

0xbc10,	// (0x00022581) main_myfav_hc_pane_t1_ParamLimits

0xbc10,	// (0x00022581) main_myfav_hc_pane_t1

0x3cba,	// (0x0001a62b) main_myfav_hc_pane_t2_ParamLimits

0x3cba,	// (0x0001a62b) main_myfav_hc_pane_t2

0x3ccc,	// (0x0001a63d) main_myfav_hc_pane_t3_ParamLimits

0x3ccc,	// (0x0001a63d) main_myfav_hc_pane_t3

0xbc27,	// (0x00022598) main_myfav_hc_pane_t4_ParamLimits

0xbc27,	// (0x00022598) main_myfav_hc_pane_t4

0x0004,

0xf8d9,	// (0x0002624a) main_myfav_hc_pane_t_ParamLimits

0xf8d9,	// (0x0002624a) main_myfav_hc_pane_t

0x0baf,	// (0x00017520) bg_myfav_hc_instruction_pane_g1

0x3cde,	// (0x0001a64f) cell_myfav_contact_pane_g1_ParamLimits

0x3cde,	// (0x0001a64f) cell_myfav_contact_pane_g1

0x3cde,	// (0x0001a64f) cell_myfav_contact_pane_g2_ParamLimits

0x3cde,	// (0x0001a64f) cell_myfav_contact_pane_g2

0x3cea,	// (0x0001a65b) cell_myfav_contact_pane_g3_ParamLimits

0x3cea,	// (0x0001a65b) cell_myfav_contact_pane_g3

0x08b4,	// (0x00017225) cell_myfav_contact_pane_g4_ParamLimits

0x08b4,	// (0x00017225) cell_myfav_contact_pane_g4

0x3cf7,	// (0x0001a668) cell_myfav_contact_pane_g5_ParamLimits

0x3cf7,	// (0x0001a668) cell_myfav_contact_pane_g5

0x0004,

0xf8e4,	// (0x00026255) cell_myfav_contact_pane_g_ParamLimits

0xf8e4,	// (0x00026255) cell_myfav_contact_pane_g

0xbbf8,	// (0x00022569) main_myfav_hc_pane_g3_ParamLimits

0xbbf8,	// (0x00022569) main_myfav_hc_pane_g3

0x6c85,	// (0x0001d5f6) popup_adpt_find_window

0xbc51,	// (0x000225c2) afind_page_pane_ParamLimits

0xbc51,	// (0x000225c2) afind_page_pane

0xbc5e,	// (0x000225cf) aid_size_cell_afind_ParamLimits

0xbc5e,	// (0x000225cf) aid_size_cell_afind

0xbc78,	// (0x000225e9) bg_popup_sub_pane_cp09_ParamLimits

0xbc78,	// (0x000225e9) bg_popup_sub_pane_cp09

0xbc85,	// (0x000225f6) find_pane_cp01_ParamLimits

0xbc85,	// (0x000225f6) find_pane_cp01

0x3d03,	// (0x0001a674) grid_afind_control_pane_ParamLimits

0x3d03,	// (0x0001a674) grid_afind_control_pane

0xbc92,	// (0x00022603) grid_afind_pane_ParamLimits

0xbc92,	// (0x00022603) grid_afind_pane

0xbcac,	// (0x0002261d) cell_afind_pane_ParamLimits

0xbcac,	// (0x0002261d) cell_afind_pane

0x0baf,	// (0x00017520) afind_page_pane_g1

0xbcf4,	// (0x00022665) afind_page_pane_g2

0xbcfd,	// (0x0002266e) afind_page_pane_g3

0x0002,

0xf8ef,	// (0x00026260) afind_page_pane_g

0xbd06,	// (0x00022677) afind_page_pane_t1

0x3d17,	// (0x0001a688) cell_afind_grid_control_pane_ParamLimits

0x3d17,	// (0x0001a688) cell_afind_grid_control_pane

0x3a21,	// (0x0001a392) bg_button_pane_cp69_ParamLimits

0x3a21,	// (0x0001a392) bg_button_pane_cp69

0xbd26,	// (0x00022697) cell_afind_pane_g1_ParamLimits

0xbd26,	// (0x00022697) cell_afind_pane_g1

0xbd33,	// (0x000226a4) cell_afind_pane_t1_ParamLimits

0xbd33,	// (0x000226a4) cell_afind_pane_t1

0x0bb9,	// (0x0001752a) bg_button_pane_cp72

0x3d26,	// (0x0001a697) cell_afind_grid_control_pane_g1

0xa652,	// (0x00020fc3) aid_image_placing_area_ParamLimits

0xa652,	// (0x00020fc3) aid_image_placing_area

0x08a6,	// (0x00017217) field_vitu_entry_pane_g1_ParamLimits

0x08a6,	// (0x00017217) field_vitu_entry_pane_g1

0x08a6,	// (0x00017217) field_vitu_entry_pane_g2_ParamLimits

0x08a6,	// (0x00017217) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00025b58) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00025b58) field_vitu_entry_pane_g

0x353a,	// (0x00019eab) cell_vitu_itu_pane_g1_ParamLimits

0x351d,	// (0x00019e8e) cell_vitu_itu_pane_t3_ParamLimits

0x351d,	// (0x00019e8e) cell_vitu_itu_pane_t3

0x39ca,	// (0x0001a33b) mp4_progress_pane_t1_ParamLimits

0x39e3,	// (0x0001a354) mp4_progress_pane_t2_ParamLimits

0xf835,	// (0x000261a6) mp4_progress_pane_t_ParamLimits

0x39fc,	// (0x0001a36d) mup_progress_pane_cp04_ParamLimits

0xbc3b,	// (0x000225ac) main_myfav_hc_pane_t5_ParamLimits

0xbc3b,	// (0x000225ac) main_myfav_hc_pane_t5

0x6b49,	// (0x0001d4ba) aid_zoom_text_primary

0x6c85,	// (0x0001d5f6) popup_adpt_find_window_ParamLimits

0x71e0,	// (0x0001db51) main_cam_set_pane

0x7afb,	// (0x0001e46c) cam4_zoom_pane_ParamLimits

0x7afb,	// (0x0001e46c) cam4_zoom_pane

0xbd45,	// (0x000226b6) main_cam_set_pane_g1_ParamLimits

0xbd45,	// (0x000226b6) main_cam_set_pane_g1

0xbd53,	// (0x000226c4) main_cam_set_pane_g2_ParamLimits

0xbd53,	// (0x000226c4) main_cam_set_pane_g2

0x0001,

0xf8f6,	// (0x00026267) main_cam_set_pane_g_ParamLimits

0xf8f6,	// (0x00026267) main_cam_set_pane_g

0xbd5f,	// (0x000226d0) main_cam_set_pane_t1_ParamLimits

0xbd5f,	// (0x000226d0) main_cam_set_pane_t1

0xbd7b,	// (0x000226ec) main_cset_listscroll_pane_ParamLimits

0xbd7b,	// (0x000226ec) main_cset_listscroll_pane

0xbdad,	// (0x0002271e) main_cset_slider_pane_ParamLimits

0xbdad,	// (0x0002271e) main_cset_slider_pane

0x3d37,	// (0x0001a6a8) main_cset_list_pane_ParamLimits

0x3d37,	// (0x0001a6a8) main_cset_list_pane

0x3d47,	// (0x0001a6b8) scroll_pane_cp028

0xbdcc,	// (0x0002273d) aid_area_touch_slider

0xbde8,	// (0x00022759) cset_slider_pane

0xbe0b,	// (0x0002277c) main_cset_slider_pane_g1

0xbe20,	// (0x00022791) main_cset_slider_pane_g2

0x0011,

0xf8fb,	// (0x0002626c) main_cset_slider_pane_g

0x3d98,	// (0x0001a709) main_cset_slider_pane_t1

0xbee6,	// (0x00022857) main_cset_slider_pane_t2

0xbf00,	// (0x00022871) main_cset_slider_pane_t3

0xbf1a,	// (0x0002288b) main_cset_slider_pane_t4

0xbf38,	// (0x000228a9) main_cset_slider_pane_t5

0xbf56,	// (0x000228c7) main_cset_slider_pane_t6

0xbf6d,	// (0x000228de) main_cset_slider_pane_t7

0x000e,

0xf920,	// (0x00026291) main_cset_slider_pane_t

0xc07b,	// (0x000229ec) cset_list_set_pane_ParamLimits

0xc07b,	// (0x000229ec) cset_list_set_pane

0x3e32,	// (0x0001a7a3) aid_position_infowindow_above

0x3e3a,	// (0x0001a7ab) aid_position_infowindow_below

0xc094,	// (0x00022a05) cset_list_set_pane_g1_ParamLimits

0xc094,	// (0x00022a05) cset_list_set_pane_g1

0xc0a0,	// (0x00022a11) cset_list_set_pane_g3_ParamLimits

0xc0a0,	// (0x00022a11) cset_list_set_pane_g3

0x0001,

0xf93f,	// (0x000262b0) cset_list_set_pane_g_ParamLimits

0xf93f,	// (0x000262b0) cset_list_set_pane_g

0xc0af,	// (0x00022a20) cset_list_set_pane_t1_ParamLimits

0xc0af,	// (0x00022a20) cset_list_set_pane_t1

0x01af,	// (0x00016b20) list_highlight_pane_cp021_ParamLimits

0x01af,	// (0x00016b20) list_highlight_pane_cp021

0x17b2,	// (0x00018123) cset_slider_pane_g1

0x17c4,	// (0x00018135) cset_slider_pane_g2

0x17bb,	// (0x0001812c) cset_slider_pane_g3

0x0002,

0xf944,	// (0x000262b5) cset_slider_pane_g

0x7fb1,	// (0x0001e922) aid_area_touch_cam4_zoom

0x7fb9,	// (0x0001e92a) cam4_zoom_cont_pane

0x7fc1,	// (0x0001e932) cam4_zoom_pane_g1

0x7fc9,	// (0x0001e93a) cam4_zoom_pane_g2

0x7fd1,	// (0x0001e942) cam4_zoom_pane_g3

0x0002,

0xf94b,	// (0x000262bc) cam4_zoom_pane_g

0x7fd9,	// (0x0001e94a) cam4_zoom_cont_pane_g1

0x7fe2,	// (0x0001e953) cam4_zoom_cont_pane_g2

0x7feb,	// (0x0001e95c) cam4_zoom_cont_pane_g3

0x0002,

0xf952,	// (0x000262c3) cam4_zoom_cont_pane_g

0x79d7,	// (0x0001e348) call4_image_pane_ParamLimits

0x79d7,	// (0x0001e348) call4_image_pane

0xb9da,	// (0x0002234b) call4_windows_conf_pane_ParamLimits

0xba1d,	// (0x0002238e) popup_call4_audio_in_window_ParamLimits

0xba1d,	// (0x0002238e) popup_call4_audio_in_window

0x0140,	// (0x00016ab1) bg_popup_call2_act_pane_cp02

0x3aa8,	// (0x0001a419) call4_list_conf_pane

0x0baf,	// (0x00017520) call4_image_pane_g1

0x0baf,	// (0x00017520) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x00025d34) call4_image_pane_g

0x3e74,	// (0x0001a7e5) list_single_graphic_popup_conf4_pane_ParamLimits

0x3e74,	// (0x0001a7e5) list_single_graphic_popup_conf4_pane

0x0140,	// (0x00016ab1) list_highlight_pane_cp022

0x3e87,	// (0x0001a7f8) list_single_graphic_popup_conf4_pane_g1

0x137b,	// (0x00017cec) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf959,	// (0x000262ca) list_single_graphic_popup_conf4_pane_g

0x3e8f,	// (0x0001a800) list_single_graphic_popup_conf4_pane_t1

0x8cf5,	// (0x0001f666) popup_vtel_slider_window_ParamLimits

0x8cf5,	// (0x0001f666) popup_vtel_slider_window

0x3a0f,	// (0x0001a380) dialer2_ne_pane_t2_ParamLimits

0x3a0f,	// (0x0001a380) dialer2_ne_pane_t2

0x0001,

0xf83a,	// (0x000261ab) dialer2_ne_pane_t_ParamLimits

0xf83a,	// (0x000261ab) dialer2_ne_pane_t

0x01af,	// (0x00016b20) bg_popup_sub_pane_cp010_ParamLimits

0x01af,	// (0x00016b20) bg_popup_sub_pane_cp010

0xc0c4,	// (0x00022a35) popup_vtel_slider_window_g1_ParamLimits

0xc0c4,	// (0x00022a35) popup_vtel_slider_window_g1

0xc0d0,	// (0x00022a41) popup_vtel_slider_window_g2_ParamLimits

0xc0d0,	// (0x00022a41) popup_vtel_slider_window_g2

0x0003,

0xf95e,	// (0x000262cf) popup_vtel_slider_window_g_ParamLimits

0xf95e,	// (0x000262cf) popup_vtel_slider_window_g

0xc118,	// (0x00022a89) vtel_slider_pane_ParamLimits

0xc118,	// (0x00022a89) vtel_slider_pane

0xc127,	// (0x00022a98) vtel_slider_pane_g1_ParamLimits

0xc127,	// (0x00022a98) vtel_slider_pane_g1

0xc134,	// (0x00022aa5) vtel_slider_pane_g2_ParamLimits

0xc134,	// (0x00022aa5) vtel_slider_pane_g2

0xc141,	// (0x00022ab2) vtel_slider_pane_g3_ParamLimits

0xc141,	// (0x00022ab2) vtel_slider_pane_g3

0xc127,	// (0x00022a98) vtel_slider_pane_g4_ParamLimits

0xc127,	// (0x00022a98) vtel_slider_pane_g4

0xc14e,	// (0x00022abf) vtel_slider_pane_g5_ParamLimits

0xc14e,	// (0x00022abf) vtel_slider_pane_g5

0x0004,

0xf967,	// (0x000262d8) vtel_slider_pane_g_ParamLimits

0xf967,	// (0x000262d8) vtel_slider_pane_g

0x71e0,	// (0x0001db51) main_gallery2_pane

0x7d01,	// (0x0001e672) aid_size_row_itut2_dropdow_list_ParamLimits

0x7d01,	// (0x0001e672) aid_size_row_itut2_dropdow_list

0x7d6f,	// (0x0001e6e0) grid_vitu2_function_top_pane_ParamLimits

0x7d6f,	// (0x0001e6e0) grid_vitu2_function_top_pane

0x7dc9,	// (0x0001e73a) popup_vitu2_dropdown_list_window_ParamLimits

0x7dc9,	// (0x0001e73a) popup_vitu2_dropdown_list_window

0x7de7,	// (0x0001e758) popup_vitu2_match_list_window

0x7ff4,	// (0x0001e965) cell_vitu2_function_top_pane_ParamLimits

0x7ff4,	// (0x0001e965) cell_vitu2_function_top_pane

0x800e,	// (0x0001e97f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x800e,	// (0x0001e97f) cell_vitu2_function_top_pane_cp01

0x802a,	// (0x0001e99b) cell_vitu2_function_top_wide_pane_ParamLimits

0x802a,	// (0x0001e99b) cell_vitu2_function_top_wide_pane

0x71e0,	// (0x0001db51) bg_button_pane_cp012

0x8048,	// (0x0001e9b9) cell_vitu2_function_top_pane_g1

0x805c,	// (0x0001e9cd) bg_button_pane_cp013_ParamLimits

0x805c,	// (0x0001e9cd) bg_button_pane_cp013

0xc15b,	// (0x00022acc) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc15b,	// (0x00022acc) cell_vitu2_function_top_wide_pane_g1

0x6d7c,	// (0x0001d6ed) bg_popup_sub_pane_cp20

0x8078,	// (0x0001e9e9) list_vitu2_match_list_pane

0x3c2d,	// (0x0001a59e) bg_popup_sub_pane_cp20_g1

0x3c35,	// (0x0001a5a6) bg_popup_sub_pane_cp20_g2

0x0dc0,	// (0x00017731) bg_popup_sub_pane_cp20_g3

0x3c3d,	// (0x0001a5ae) bg_popup_sub_pane_cp20_g4

0x0da0,	// (0x00017711) bg_popup_sub_pane_cp20_g5

0x3ec1,	// (0x0001a832) bg_popup_sub_pane_cp20_g6

0x3c4d,	// (0x0001a5be) bg_popup_sub_pane_cp20_g7

0x3c55,	// (0x0001a5c6) bg_popup_sub_pane_cp20_g8

0x3c5d,	// (0x0001a5ce) bg_popup_sub_pane_cp20_g9

0x0008,

0xf972,	// (0x000262e3) bg_popup_sub_pane_cp20_g

0x8090,	// (0x0001ea01) list_vitu2_match_list_item_pane_ParamLimits

0x8090,	// (0x0001ea01) list_vitu2_match_list_item_pane

0x80a2,	// (0x0001ea13) list_vitu2_match_list_item_pane_t1

0x6d8a,	// (0x0001d6fb) bg_popup_sub_pane_cp21

0x0b6f,	// (0x000174e0) grid_vitu2_dropdown_list_pane

0x80b0,	// (0x0001ea21) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x80b0,	// (0x0001ea21) cell_vitu2_dropdown_list_char_pane

0x80d0,	// (0x0001ea41) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x80d0,	// (0x0001ea41) cell_vitu2_dropdown_list_ctrl_pane

0x3efb,	// (0x0001a86c) cell_vitu2_dropdown_list_char_pane_g1

0x3ef2,	// (0x0001a863) cell_vitu2_dropdown_list_char_pane_g2

0x3ee9,	// (0x0001a85a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf985,	// (0x000262f6) cell_vitu2_dropdown_list_char_pane_g

0x80f8,	// (0x0001ea69) cell_vitu2_dropdown_list_char_pane_t1

0xc173,	// (0x00022ae4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc173,	// (0x00022ae4) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc180,	// (0x00022af1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc180,	// (0x00022af1) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc18d,	// (0x00022afe) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc18d,	// (0x00022afe) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8106,	// (0x0001ea77) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8106,	// (0x0001ea77) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4fbf,	// (0x0001b930) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4fbf,	// (0x0001b930) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98c,	// (0x000262fd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98c,	// (0x000262fd) cell_vitu2_dropdown_list_ctrl_pane_g

0xc19a,	// (0x00022b0b) aid_size_cell_gallery2_ParamLimits

0xc19a,	// (0x00022b0b) aid_size_cell_gallery2

0xc1b4,	// (0x00022b25) grid_gallery2_pane_ParamLimits

0xc1b4,	// (0x00022b25) grid_gallery2_pane

0xc1cb,	// (0x00022b3c) scroll_pane_cp029_ParamLimits

0xc1cb,	// (0x00022b3c) scroll_pane_cp029

0xc1db,	// (0x00022b4c) cell_gallery2_pane_ParamLimits

0xc1db,	// (0x00022b4c) cell_gallery2_pane

0x3f04,	// (0x0001a875) cell_gallery2_pane_g2

0xc230,	// (0x00022ba1) cell_gallery2_pane_g3

0x3f0c,	// (0x0001a87d) cell_gallery2_pane_g4

0x3f14,	// (0x0001a885) cell_gallery2_pane_g5

0x0b6f,	// (0x000174e0) grid_highlight_pane_cp10

0x7de7,	// (0x0001e758) popup_vitu2_match_list_window_ParamLimits

0x7df9,	// (0x0001e76a) popup_vitu2_query_window_ParamLimits

0x7df9,	// (0x0001e76a) popup_vitu2_query_window

0x6d8a,	// (0x0001d6fb) bg_vitu2_candi_button_pane

0x3efb,	// (0x0001a86c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3ef2,	// (0x0001a863) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3ee9,	// (0x0001a85a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc238,	// (0x00022ba9) bg_button_pane_cp015

0xc24d,	// (0x00022bbe) bg_button_pane_cp016

0xc259,	// (0x00022bca) bg_button_pane_cp017

0x1742,	// (0x000180b3) bg_popup_sub_pane_cp22

0x3f1c,	// (0x0001a88d) popup_vitu2_query_window_g1

0xc299,	// (0x00022c0a) popup_vitu2_query_window_g2

0x0002,

0xf997,	// (0x00026308) popup_vitu2_query_window_g

0xc2bd,	// (0x00022c2e) popup_vitu2_query_window_t1_ParamLimits

0xc2bd,	// (0x00022c2e) popup_vitu2_query_window_t1

0xc2f0,	// (0x00022c61) popup_vitu2_query_window_t2_ParamLimits

0xc2f0,	// (0x00022c61) popup_vitu2_query_window_t2

0xc302,	// (0x00022c73) popup_vitu2_query_window_t3_ParamLimits

0xc302,	// (0x00022c73) popup_vitu2_query_window_t3

0xc32a,	// (0x00022c9b) popup_vitu2_query_window_t4_ParamLimits

0xc32a,	// (0x00022c9b) popup_vitu2_query_window_t4

0xc33e,	// (0x00022caf) popup_vitu2_query_window_t5_ParamLimits

0xc33e,	// (0x00022caf) popup_vitu2_query_window_t5

0x0006,

0xf99e,	// (0x0002630f) popup_vitu2_query_window_t_ParamLimits

0xf99e,	// (0x0002630f) popup_vitu2_query_window_t

0x3d2f,	// (0x0001a6a0) main_cset_text_pane

0xbdcc,	// (0x0002273d) aid_area_touch_slider_ParamLimits

0xbde8,	// (0x00022759) cset_slider_pane_ParamLimits

0xbe0b,	// (0x0002277c) main_cset_slider_pane_g1_ParamLimits

0xbe20,	// (0x00022791) main_cset_slider_pane_g2_ParamLimits

0x3d50,	// (0x0001a6c1) main_cset_slider_pane_g3_ParamLimits

0x3d50,	// (0x0001a6c1) main_cset_slider_pane_g3

0xbe35,	// (0x000227a6) main_cset_slider_pane_g4_ParamLimits

0xbe35,	// (0x000227a6) main_cset_slider_pane_g4

0xbe44,	// (0x000227b5) main_cset_slider_pane_g5_ParamLimits

0xbe44,	// (0x000227b5) main_cset_slider_pane_g5

0xbe52,	// (0x000227c3) main_cset_slider_pane_g6_ParamLimits

0xbe52,	// (0x000227c3) main_cset_slider_pane_g6

0xf8fb,	// (0x0002626c) main_cset_slider_pane_g_ParamLimits

0x3d98,	// (0x0001a709) main_cset_slider_pane_t1_ParamLimits

0xbee6,	// (0x00022857) main_cset_slider_pane_t2_ParamLimits

0xbf00,	// (0x00022871) main_cset_slider_pane_t3_ParamLimits

0xbf1a,	// (0x0002288b) main_cset_slider_pane_t4_ParamLimits

0xbf38,	// (0x000228a9) main_cset_slider_pane_t5_ParamLimits

0xbf56,	// (0x000228c7) main_cset_slider_pane_t6_ParamLimits

0xbf6d,	// (0x000228de) main_cset_slider_pane_t7_ParamLimits

0xbf9b,	// (0x0002290c) main_cset_slider_pane_t8_ParamLimits

0xbf9b,	// (0x0002290c) main_cset_slider_pane_t8

0xbfc3,	// (0x00022934) main_cset_slider_pane_t9_ParamLimits

0xbfc3,	// (0x00022934) main_cset_slider_pane_t9

0xbfeb,	// (0x0002295c) main_cset_slider_pane_t10_ParamLimits

0xbfeb,	// (0x0002295c) main_cset_slider_pane_t10

0xc013,	// (0x00022984) main_cset_slider_pane_t11_ParamLimits

0xc013,	// (0x00022984) main_cset_slider_pane_t11

0xc03d,	// (0x000229ae) main_cset_slider_pane_t12_ParamLimits

0xc03d,	// (0x000229ae) main_cset_slider_pane_t12

0xc05c,	// (0x000229cd) main_cset_slider_pane_t13_ParamLimits

0xc05c,	// (0x000229cd) main_cset_slider_pane_t13

0xf920,	// (0x00026291) main_cset_slider_pane_t_ParamLimits

0x0140,	// (0x00016ab1) bg_popup_sub_pane_cp011

0x3f28,	// (0x0001a899) main_cset_text_pane_g1

0x3f30,	// (0x0001a8a1) main_cset_text_pane_t1

0x3f3e,	// (0x0001a8af) main_cset_text_pane_t2

0x3f4c,	// (0x0001a8bd) main_cset_text_pane_t3

0x3f5a,	// (0x0001a8cb) main_cset_text_pane_t4

0x3f68,	// (0x0001a8d9) main_cset_text_pane_t5

0x3f76,	// (0x0001a8e7) main_cset_text_pane_t6

0x3f84,	// (0x0001a8f5) main_cset_text_pane_t7

0x0006,

0xf9ad,	// (0x0002631e) main_cset_text_pane_t

0x6d8a,	// (0x0001d6fb) main_cam4_burst_pane

0x6d8a,	// (0x0001d6fb) main_cam5_pane

0xbd14,	// (0x00022685) bg_button_pane_cp019

0xbd1d,	// (0x0002268e) bg_button_pane_cp020

0x3d5c,	// (0x0001a6cd) main_cset_slider_pane_g7_ParamLimits

0x3d5c,	// (0x0001a6cd) main_cset_slider_pane_g7

0x3d68,	// (0x0001a6d9) main_cset_slider_pane_g8_ParamLimits

0x3d68,	// (0x0001a6d9) main_cset_slider_pane_g8

0xbe66,	// (0x000227d7) main_cset_slider_pane_g9_ParamLimits

0xbe66,	// (0x000227d7) main_cset_slider_pane_g9

0xbe72,	// (0x000227e3) main_cset_slider_pane_g10_ParamLimits

0xbe72,	// (0x000227e3) main_cset_slider_pane_g10

0xbe7e,	// (0x000227ef) main_cset_slider_pane_g11_ParamLimits

0xbe7e,	// (0x000227ef) main_cset_slider_pane_g11

0xbe8a,	// (0x000227fb) main_cset_slider_pane_g12_ParamLimits

0xbe8a,	// (0x000227fb) main_cset_slider_pane_g12

0xbe96,	// (0x00022807) main_cset_slider_pane_g13_ParamLimits

0xbe96,	// (0x00022807) main_cset_slider_pane_g13

0xbea4,	// (0x00022815) main_cset_slider_pane_g14_ParamLimits

0xbea4,	// (0x00022815) main_cset_slider_pane_g14

0xbeb2,	// (0x00022823) main_cset_slider_pane_g15_ParamLimits

0xbeb2,	// (0x00022823) main_cset_slider_pane_g15

0x3dc0,	// (0x0001a731) main_cset_slider_pane_t14_ParamLimits

0x3dc0,	// (0x0001a731) main_cset_slider_pane_t14

0x3df9,	// (0x0001a76a) main_cset_slider_pane_t15_ParamLimits

0x3df9,	// (0x0001a76a) main_cset_slider_pane_t15

0xc3a8,	// (0x00022d19) aid_cam4_burst_size_cell_ParamLimits

0xc3a8,	// (0x00022d19) aid_cam4_burst_size_cell

0xc3c4,	// (0x00022d35) grid_cam4_burst_pane_ParamLimits

0xc3c4,	// (0x00022d35) grid_cam4_burst_pane

0xc3f4,	// (0x00022d65) linegrid_cam4_burst_pane_ParamLimits

0xc3f4,	// (0x00022d65) linegrid_cam4_burst_pane

0xc414,	// (0x00022d85) scroll_pane_cp30_ParamLimits

0xc414,	// (0x00022d85) scroll_pane_cp30

0xc420,	// (0x00022d91) cell_cam4_burst_pane_ParamLimits

0xc420,	// (0x00022d91) cell_cam4_burst_pane

0x3f9e,	// (0x0001a90f) linegrid_cam4_burst_pane_g1_ParamLimits

0x3f9e,	// (0x0001a90f) linegrid_cam4_burst_pane_g1

0xc45c,	// (0x00022dcd) linegrid_cam4_burst_pane_g2_ParamLimits

0xc45c,	// (0x00022dcd) linegrid_cam4_burst_pane_g2

0x3fab,	// (0x0001a91c) linegrid_cam4_burst_pane_g3_ParamLimits

0x3fab,	// (0x0001a91c) linegrid_cam4_burst_pane_g3

0x0002,

0xf9bc,	// (0x0002632d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9bc,	// (0x0002632d) linegrid_cam4_burst_pane_g

0xc46d,	// (0x00022dde) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc46d,	// (0x00022dde) linegrid_cam4_burst_pane_g3_copy1

0x3fb8,	// (0x0001a929) linegrid_cam4_burst_pane_g4_ParamLimits

0x3fb8,	// (0x0001a929) linegrid_cam4_burst_pane_g4

0xc487,	// (0x00022df8) linegrid_cam4_burst_pane_g5_ParamLimits

0xc487,	// (0x00022df8) linegrid_cam4_burst_pane_g5

0xc498,	// (0x00022e09) linegrid_cam4_burst_pane_g6_ParamLimits

0xc498,	// (0x00022e09) linegrid_cam4_burst_pane_g6

0x3fc5,	// (0x0001a936) linegrid_cam4_burst_pane_g7_ParamLimits

0x3fc5,	// (0x0001a936) linegrid_cam4_burst_pane_g7

0xc4a9,	// (0x00022e1a) cell_cam4_burst_pane_g1

0x3fde,	// (0x0001a94f) main_cam5_pane_t1_ParamLimits

0x3fde,	// (0x0001a94f) main_cam5_pane_t1

0x3ff0,	// (0x0001a961) main_cam5_pane_t2_ParamLimits

0x3ff0,	// (0x0001a961) main_cam5_pane_t2

0x4002,	// (0x0001a973) main_cam5_pane_t3_ParamLimits

0x4002,	// (0x0001a973) main_cam5_pane_t3

0x4014,	// (0x0001a985) main_cam5_pane_t4_ParamLimits

0x4014,	// (0x0001a985) main_cam5_pane_t4

0x402c,	// (0x0001a99d) main_cam5_pane_t5_ParamLimits

0x402c,	// (0x0001a99d) main_cam5_pane_t5

0x4040,	// (0x0001a9b1) main_cam5_pane_t6_ParamLimits

0x4040,	// (0x0001a9b1) main_cam5_pane_t6

0x4054,	// (0x0001a9c5) main_cam5_pane_t7_ParamLimits

0x4054,	// (0x0001a9c5) main_cam5_pane_t7

0x4066,	// (0x0001a9d7) main_cam5_pane_t8_ParamLimits

0x4066,	// (0x0001a9d7) main_cam5_pane_t8

0x4082,	// (0x0001a9f3) main_cam5_pane_t9_ParamLimits

0x4082,	// (0x0001a9f3) main_cam5_pane_t9

0x4094,	// (0x0001aa05) main_cam5_pane_t10_ParamLimits

0x4094,	// (0x0001aa05) main_cam5_pane_t10

0x40a6,	// (0x0001aa17) main_cam5_pane_t11_ParamLimits

0x40a6,	// (0x0001aa17) main_cam5_pane_t11

0x40b8,	// (0x0001aa29) main_cam5_pane_t12_ParamLimits

0x40b8,	// (0x0001aa29) main_cam5_pane_t12

0x40cd,	// (0x0001aa3e) main_cam5_pane_t13_ParamLimits

0x40cd,	// (0x0001aa3e) main_cam5_pane_t13

0x000c,

0xf9c8,	// (0x00026339) main_cam5_pane_t_ParamLimits

0xf9c8,	// (0x00026339) main_cam5_pane_t

0x6d3b,	// (0x0001d6ac) popup_scut_keymap_window_ParamLimits

0x6d3b,	// (0x0001d6ac) popup_scut_keymap_window

0xc4bc,	// (0x00022e2d) aid_size_cell_brow_shortcut

0x0b6f,	// (0x000174e0) bg_popup_window_pane_cp010

0xc4c8,	// (0x00022e39) grid_scut_pane

0xc4d4,	// (0x00022e45) cell_scut_pane_ParamLimits

0xc4d4,	// (0x00022e45) cell_scut_pane

0xc4eb,	// (0x00022e5c) cell_scut_pane_g1

0x40ea,	// (0x0001aa5b) cell_scut_pane_t1

0x40f9,	// (0x0001aa6a) cell_scut_pane_t2

0xc4f4,	// (0x00022e65) cell_scut_pane_t3

0x0002,

0xf9e3,	// (0x00026354) cell_scut_pane_t

0xb0c0,	// (0x00021a31) main_mup3_pane_g8_ParamLimits

0xb0c0,	// (0x00021a31) main_mup3_pane_g8

0x7d0f,	// (0x0001e680) area_vitu2_query_pane_ParamLimits

0x7d0f,	// (0x0001e680) area_vitu2_query_pane

0xc265,	// (0x00022bd6) input_focus_pane_cp08

0x4108,	// (0x0001aa79) area_vitu2_query_pane_g1

0xc502,	// (0x00022e73) area_vitu2_query_pane_g2

0x0001,

0xf9ea,	// (0x0002635b) area_vitu2_query_pane_g

0xc513,	// (0x00022e84) area_vitu2_query_pane_t1_ParamLimits

0xc513,	// (0x00022e84) area_vitu2_query_pane_t1

0xc527,	// (0x00022e98) area_vitu2_query_pane_t2_ParamLimits

0xc527,	// (0x00022e98) area_vitu2_query_pane_t2

0xc53b,	// (0x00022eac) area_vitu2_query_pane_t3_ParamLimits

0xc53b,	// (0x00022eac) area_vitu2_query_pane_t3

0x4114,	// (0x0001aa85) area_vitu2_query_pane_t4_ParamLimits

0x4114,	// (0x0001aa85) area_vitu2_query_pane_t4

0x413c,	// (0x0001aaad) area_vitu2_query_pane_t5_ParamLimits

0x413c,	// (0x0001aaad) area_vitu2_query_pane_t5

0x4164,	// (0x0001aad5) area_vitu2_query_pane_t6_ParamLimits

0x4164,	// (0x0001aad5) area_vitu2_query_pane_t6

0x0006,

0xf9ef,	// (0x00026360) area_vitu2_query_pane_t_ParamLimits

0xf9ef,	// (0x00026360) area_vitu2_query_pane_t

0xc24d,	// (0x00022bbe) bg_button_pane_cp018

0xc563,	// (0x00022ed4) bg_button_pane_cp021

0xc56f,	// (0x00022ee0) bg_button_pane_cp022

0xc592,	// (0x00022f03) input_focus_pane_cp09

0x148a,	// (0x00017dfb) aid_size_touch_mv_arrow_left

0x14b5,	// (0x00017e26) aid_size_touch_mv_arrow_right

0xbeca,	// (0x0002283b) main_cset_slider_pane_g16_ParamLimits

0xbeca,	// (0x0002283b) main_cset_slider_pane_g16

0xbed8,	// (0x00022849) main_cset_slider_pane_g17_ParamLimits

0xbed8,	// (0x00022849) main_cset_slider_pane_g17

0xc4a9,	// (0x00022e1a) cell_cam4_burst_pane_g1_ParamLimits

0x0140,	// (0x00016ab1) compa_mode_pane

0xc0dc,	// (0x00022a4d) popup_vtel_slider_window_g3_ParamLimits

0xc0dc,	// (0x00022a4d) popup_vtel_slider_window_g3

0xc0f0,	// (0x00022a61) popup_vtel_slider_window_g4_ParamLimits

0xc0f0,	// (0x00022a61) popup_vtel_slider_window_g4

0xc104,	// (0x00022a75) popup_vtel_slider_window_t1_ParamLimits

0xc104,	// (0x00022a75) popup_vtel_slider_window_t1

0x6d8a,	// (0x0001d6fb) main_cl_pane

0x727a,	// (0x0001dbeb) popup_imed_adjust2_window_ParamLimits

0x1742,	// (0x000180b3) bg_tb_trans_pane_cp05_ParamLimits

0x3452,	// (0x00019dc3) popup_imed_adjust2_window_g1_ParamLimits

0x3461,	// (0x00019dd2) popup_imed_adjust2_window_g2_ParamLimits

0x3461,	// (0x00019dd2) popup_imed_adjust2_window_g2

0x346d,	// (0x00019dde) popup_imed_adjust2_window_g3_ParamLimits

0x346d,	// (0x00019dde) popup_imed_adjust2_window_g3

0x0002,

0xf765,	// (0x000260d6) popup_imed_adjust2_window_g_ParamLimits

0xf765,	// (0x000260d6) popup_imed_adjust2_window_g

0x3479,	// (0x00019dea) popup_imed_adjust2_window_t1_ParamLimits

0x3491,	// (0x00019e02) slider_imed_adjust_pane_ParamLimits

0x34a5,	// (0x00019e16) slider_imed_adjust_pane_g1_ParamLimits

0x34b5,	// (0x00019e26) slider_imed_adjust_pane_g2_ParamLimits

0x34c5,	// (0x00019e36) slider_imed_adjust_pane_g3_ParamLimits

0x34d6,	// (0x00019e47) slider_imed_adjust_pane_g4_ParamLimits

0xf76c,	// (0x000260dd) slider_imed_adjust_pane_g_ParamLimits

0x7aa4,	// (0x0001e415) aid_touch_area_cam4_ParamLimits

0x7aa4,	// (0x0001e415) aid_touch_area_cam4

0x7ab4,	// (0x0001e425) battery_pane_cp01

0x7b3b,	// (0x0001e4ac) main_camera4_pane_g6_ParamLimits

0x7b3b,	// (0x0001e4ac) main_camera4_pane_g6

0x7b59,	// (0x0001e4ca) main_camera4_pane_t2_ParamLimits

0x7b59,	// (0x0001e4ca) main_camera4_pane_t2

0x0001,

0xf86e,	// (0x000261df) main_camera4_pane_t_ParamLimits

0xf86e,	// (0x000261df) main_camera4_pane_t

0x7bb6,	// (0x0001e527) aid_touch_area_vid4_ParamLimits

0x7bb6,	// (0x0001e527) aid_touch_area_vid4

0x7bf6,	// (0x0001e567) main_video4_pane_g5_ParamLimits

0x7bf6,	// (0x0001e567) main_video4_pane_g5

0x7c1a,	// (0x0001e58b) vid4_progress_pane_ParamLimits

0x7c1a,	// (0x0001e58b) vid4_progress_pane

0x3d8c,	// (0x0001a6fd) main_cset_slider_pane_g18_ParamLimits

0x3d8c,	// (0x0001a6fd) main_cset_slider_pane_g18

0x3fd2,	// (0x0001a943) cell_cam4_burst_pane_g2_ParamLimits

0x3fd2,	// (0x0001a943) cell_cam4_burst_pane_g2

0x0001,

0xf9c3,	// (0x00026334) cell_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x00026334) cell_cam4_burst_pane_g

0xc5a2,	// (0x00022f13) bg_cl_pane_ParamLimits

0xc5a2,	// (0x00022f13) bg_cl_pane

0xc5ae,	// (0x00022f1f) cl_header_pane_ParamLimits

0xc5ae,	// (0x00022f1f) cl_header_pane

0xc5ba,	// (0x00022f2b) cl_listscroll_pane_ParamLimits

0xc5ba,	// (0x00022f2b) cl_listscroll_pane

0x41b0,	// (0x0001ab21) bg_cl_pane_g1

0x41b8,	// (0x0001ab29) bg_cl_pane_g2

0x41c0,	// (0x0001ab31) bg_cl_pane_g3

0x41c8,	// (0x0001ab39) bg_cl_pane_g4

0x41d0,	// (0x0001ab41) bg_cl_pane_g5

0x41d8,	// (0x0001ab49) bg_cl_pane_g6

0x41e0,	// (0x0001ab51) bg_cl_pane_g7

0x41e8,	// (0x0001ab59) bg_cl_pane_g8

0x41f0,	// (0x0001ab61) bg_cl_pane_g9

0x0008,

0xf9fe,	// (0x0002636f) bg_cl_pane_g

0xc5c6,	// (0x00022f37) aid_height_cl_leading_ParamLimits

0xc5c6,	// (0x00022f37) aid_height_cl_leading

0xc5d2,	// (0x00022f43) aid_height_cl_text_ParamLimits

0xc5d2,	// (0x00022f43) aid_height_cl_text

0x0898,	// (0x00017209) bg_cl_header_pane_ParamLimits

0x0898,	// (0x00017209) bg_cl_header_pane

0xc5ea,	// (0x00022f5b) cl_header_pane_g1_ParamLimits

0xc5ea,	// (0x00022f5b) cl_header_pane_g1

0xc5f7,	// (0x00022f68) cl_header_pane_t1_ParamLimits

0xc5f7,	// (0x00022f68) cl_header_pane_t1

0x41f8,	// (0x0001ab69) cl_list_pane

0x3d47,	// (0x0001a6b8) hc_scroll_pane_cp01

0x0da0,	// (0x00017711) bg_cl_header_pane_g1

0x3c2d,	// (0x0001a59e) bg_cl_header_pane_g2

0x0dc0,	// (0x00017731) bg_cl_header_pane_g3

0x3c3d,	// (0x0001a5ae) bg_cl_header_pane_g4

0x3c35,	// (0x0001a5a6) bg_cl_header_pane_g5

0x3ec1,	// (0x0001a832) bg_cl_header_pane_g6

0x3c55,	// (0x0001a5c6) bg_cl_header_pane_g7

0x3c5d,	// (0x0001a5ce) bg_cl_header_pane_g8

0x3c4d,	// (0x0001a5be) bg_cl_header_pane_g9

0x0008,

0xfa11,	// (0x00026382) bg_cl_header_pane_g

0xc609,	// (0x00022f7a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc609,	// (0x00022f7a) hc_cl_list_double_graphic_heading_pane

0xc61d,	// (0x00022f8e) hc_cl_list_single_graphic_pane_ParamLimits

0xc61d,	// (0x00022f8e) hc_cl_list_single_graphic_pane

0xc637,	// (0x00022fa8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc637,	// (0x00022fa8) hc_cl_list_single_graphic_pane_g1

0xc643,	// (0x00022fb4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc643,	// (0x00022fb4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa24,	// (0x00026395) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa24,	// (0x00026395) hc_cl_list_single_graphic_pane_g

0xc657,	// (0x00022fc8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc657,	// (0x00022fc8) hc_cl_list_single_graphic_pane_t1

0xc637,	// (0x00022fa8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc637,	// (0x00022fa8) hc_cl_list_double_graphic_heading_pane_g1

0xc66c,	// (0x00022fdd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc66c,	// (0x00022fdd) hc_cl_list_double_graphic_heading_pane_g2

0xc680,	// (0x00022ff1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc680,	// (0x00022ff1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa29,	// (0x0002639a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa29,	// (0x0002639a) hc_cl_list_double_graphic_heading_pane_g

0xc694,	// (0x00023005) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc694,	// (0x00023005) hc_cl_list_double_graphic_heading_pane_t1

0xc6a9,	// (0x0002301a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc6a9,	// (0x0002301a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa30,	// (0x000263a1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa30,	// (0x000263a1) hc_cl_list_double_graphic_heading_pane_t

0x812a,	// (0x0001ea9b) vid4_progress_pane_g1

0x813a,	// (0x0001eaab) vid4_progress_pane_g2

0x814a,	// (0x0001eabb) vid4_progress_pane_g3

0x815c,	// (0x0001eacd) vid4_progress_pane_g4

0x0004,

0xfa35,	// (0x000263a6) vid4_progress_pane_g

0x8174,	// (0x0001eae5) vid4_progress_pane_t1

0x818a,	// (0x0001eafb) vid4_progress_pane_t2

0x0002,

0xfa40,	// (0x000263b1) vid4_progress_pane_t

0x81b5,	// (0x0001eb26) wait_bar_pane_cp07

0x2d06,	// (0x00019677) blid_firmament_pane_ParamLimits

0x2d49,	// (0x000196ba) popup_blid_sat_info2_window_g1

0x2d6d,	// (0x000196de) popup_blid_sat_info2_window_t3

0x2d7b,	// (0x000196ec) popup_blid_sat_info2_window_t4

0x2d89,	// (0x000196fa) popup_blid_sat_info2_window_t5

0x2d97,	// (0x00019708) popup_blid_sat_info2_window_t6

0x2da7,	// (0x00019718) popup_blid_sat_info2_window_t7

0x2db5,	// (0x00019726) popup_blid_sat_info2_window_t8

0x2dc3,	// (0x00019734) popup_blid_sat_info2_window_t9

0x2dd1,	// (0x00019742) popup_blid_sat_info2_window_t10

0x2e92,	// (0x00019803) aid_firma_cardinal_ParamLimits

0x2ea6,	// (0x00019817) blid_firmament_pane_t1_ParamLimits

0x2ebd,	// (0x0001982e) blid_firmament_pane_t2_ParamLimits

0x2ed4,	// (0x00019845) blid_firmament_pane_t3_ParamLimits

0x2eeb,	// (0x0001985c) blid_firmament_pane_t4_ParamLimits

0xf65e,	// (0x00025fcf) blid_firmament_pane_t_ParamLimits

0x2f02,	// (0x00019873) blid_sat_info_pane_ParamLimits

0x71e0,	// (0x0001db51) main_cam_set_pane_ParamLimits

0xb6b7,	// (0x00022028) aid_size_cell_colour_35_ParamLimits

0xb6d1,	// (0x00022042) aid_size_cell_colour_112_ParamLimits

0xb6e8,	// (0x00022059) aid_size_cell_effect_ParamLimits

0x01af,	// (0x00016b20) bg_tb_trans_pane_cp02_ParamLimits

0x10dd,	// (0x00017a4e) heading_imed_pane_ParamLimits

0xb702,	// (0x00022073) listscroll_imed_pane_ParamLimits

0x20fd,	// (0x00018a6e) popup_call2_audio_first_window_g5_ParamLimits

0x20fd,	// (0x00018a6e) popup_call2_audio_first_window_g5

0x7860,	// (0x0001e1d1) aid_size_touch_image3_arrow_left_ParamLimits

0x7860,	// (0x0001e1d1) aid_size_touch_image3_arrow_left

0x7876,	// (0x0001e1e7) aid_size_touch_image3_arrow_right_ParamLimits

0x7876,	// (0x0001e1e7) aid_size_touch_image3_arrow_right

0x819f,	// (0x0001eb10) vid4_progress_pane_t3

0xb884,	// (0x000221f5) main_hwr_training_symbol_option_pane_ParamLimits

0xb884,	// (0x000221f5) main_hwr_training_symbol_option_pane

0x368b,	// (0x00019ffc) popup_hwr_training_preview_window_ParamLimits

0x368b,	// (0x00019ffc) popup_hwr_training_preview_window

0x751e,	// (0x0001de8f) hwr_training_navi_pane_g5_ParamLimits

0x751e,	// (0x0001de8f) hwr_training_navi_pane_g5

0x3c1b,	// (0x0001a58c) popup_char_count_window

0x6d7c,	// (0x0001d6ed) bg_popup_sub_pane_cp20_ParamLimits

0x8078,	// (0x0001e9e9) list_vitu2_match_list_pane_ParamLimits

0x8084,	// (0x0001e9f5) vitu2_page_scroll_pane_ParamLimits

0x8084,	// (0x0001e9f5) vitu2_page_scroll_pane

0x428e,	// (0x0001abff) list_single_hwr_training_symbol_option_pane_ParamLimits

0x428e,	// (0x0001abff) list_single_hwr_training_symbol_option_pane

0x42a1,	// (0x0001ac12) list_single_hwr_training_symbol_option_pane_g1

0x42a9,	// (0x0001ac1a) list_single_hwr_training_symbol_option_pane_t1

0x42b7,	// (0x0001ac28) bg_button_pane_cp023

0x42c0,	// (0x0001ac31) bg_button_pane_cp024

0x42f3,	// (0x0001ac64) vitu2_page_scroll_pane_g1

0x42fb,	// (0x0001ac6c) vitu2_page_scroll_pane_g2

0x0001,

0xfa47,	// (0x000263b8) vitu2_page_scroll_pane_g

0x4303,	// (0x0001ac74) vitu2_page_scroll_pane_t1

0x09d5,	// (0x00017346) popup_char_count_window_g1

0x4312,	// (0x0001ac83) popup_char_count_window_g2

0x3a5f,	// (0x0001a3d0) popup_char_count_window_g3

0x0002,

0xfa4c,	// (0x000263bd) popup_char_count_window_g

0x431b,	// (0x0001ac8c) popup_char_count_window_t1

0x6d8a,	// (0x0001d6fb) main_vded2_pane

0x343e,	// (0x00019daf) aid_size_cell_imed_line

0x3448,	// (0x00019db9) grid_imed_line_width_pane

0x7c86,	// (0x0001e5f7) vid4_indicators_pane_g4

0x4329,	// (0x0001ac9a) cell_imed_line_width_pane_ParamLimits

0x4329,	// (0x0001ac9a) cell_imed_line_width_pane

0x433d,	// (0x0001acae) cell_imed_line_width_pane_g1

0x4346,	// (0x0001acb7) cell_imed_line_width_pane_g2

0x0001,

0xfa53,	// (0x000263c4) cell_imed_line_width_pane_g

0xc6d2,	// (0x00023043) main_vded2_pane_g1_ParamLimits

0xc6d2,	// (0x00023043) main_vded2_pane_g1

0xc6df,	// (0x00023050) main_vded2_pane_g2_ParamLimits

0xc6df,	// (0x00023050) main_vded2_pane_g2

0x0001,

0xfa58,	// (0x000263c9) main_vded2_pane_g_ParamLimits

0xfa58,	// (0x000263c9) main_vded2_pane_g

0xc6ed,	// (0x0002305e) vded2_slider_pane_ParamLimits

0xc6ed,	// (0x0002305e) vded2_slider_pane

0xc6fa,	// (0x0002306b) aid_size_touch_vded2_end

0xc704,	// (0x00023075) aid_size_touch_vded2_playhead

0x434e,	// (0x0001acbf) aid_size_touch_vded2_start

0x4356,	// (0x0001acc7) vded2_slider_bg_pane

0x435f,	// (0x0001acd0) vded2_slider_pane_g1

0x4368,	// (0x0001acd9) vded2_slider_pane_g2

0xc70c,	// (0x0002307d) vded2_slider_pane_g3

0x0002,

0xfa5d,	// (0x000263ce) vded2_slider_pane_g

0x4370,	// (0x0001ace1) vded2_slider_bg_pane_g1

0x4379,	// (0x0001acea) vded2_slider_bg_pane_g2

0x4382,	// (0x0001acf3) vded2_slider_bg_pane_g3

0x0002,

0xfa64,	// (0x000263d5) vded2_slider_bg_pane_g

0xa3bd,	// (0x00020d2e) aid_postcard_touch_down_pane_ParamLimits

0xa3bd,	// (0x00020d2e) aid_postcard_touch_down_pane

0xa3cd,	// (0x00020d3e) aid_postcard_touch_up_pane_ParamLimits

0xa3cd,	// (0x00020d3e) aid_postcard_touch_up_pane

0x6d8a,	// (0x0001d6fb) main_blid2_pane

0x7209,	// (0x0001db7a) popup_blid2_search_window

0x0140,	// (0x00016ab1) blid2_gps_pane

0x0140,	// (0x00016ab1) blid2_navig_pane

0x0140,	// (0x00016ab1) blid2_search_pane

0x0140,	// (0x00016ab1) blid2_tripm_pane

0xc715,	// (0x00023086) blid2_search_pane_g1_ParamLimits

0xc715,	// (0x00023086) blid2_search_pane_g1

0xc725,	// (0x00023096) blid2_search_pane_t1_ParamLimits

0xc725,	// (0x00023096) blid2_search_pane_t1

0xc737,	// (0x000230a8) aid_size_cell_blid2_gps_ParamLimits

0xc737,	// (0x000230a8) aid_size_cell_blid2_gps

0xc747,	// (0x000230b8) blid2_gps_pane_g1_ParamLimits

0xc747,	// (0x000230b8) blid2_gps_pane_g1

0xc753,	// (0x000230c4) grid_blid2_satellite_pane_ParamLimits

0xc753,	// (0x000230c4) grid_blid2_satellite_pane

0xc763,	// (0x000230d4) blid2_navig_pane_g1_ParamLimits

0xc763,	// (0x000230d4) blid2_navig_pane_g1

0xc76f,	// (0x000230e0) blid2_navig_pane_t1_ParamLimits

0xc76f,	// (0x000230e0) blid2_navig_pane_t1

0xc781,	// (0x000230f2) blid2_navig_pane_t2_ParamLimits

0xc781,	// (0x000230f2) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x000263dc) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x000263dc) blid2_navig_pane_t

0xc793,	// (0x00023104) blid2_navig_ring_pane_ParamLimits

0xc793,	// (0x00023104) blid2_navig_ring_pane

0xc7a3,	// (0x00023114) blid2_speed_pane_ParamLimits

0xc7a3,	// (0x00023114) blid2_speed_pane

0xc7af,	// (0x00023120) blid2_tripm_pane_g1_ParamLimits

0xc7af,	// (0x00023120) blid2_tripm_pane_g1

0xc7bf,	// (0x00023130) blid2_tripm_pane_g2_ParamLimits

0xc7bf,	// (0x00023130) blid2_tripm_pane_g2

0xc7cb,	// (0x0002313c) blid2_tripm_pane_g3_ParamLimits

0xc7cb,	// (0x0002313c) blid2_tripm_pane_g3

0xc7d7,	// (0x00023148) blid2_tripm_pane_g4_ParamLimits

0xc7d7,	// (0x00023148) blid2_tripm_pane_g4

0xc7e3,	// (0x00023154) blid2_tripm_pane_g5_ParamLimits

0xc7e3,	// (0x00023154) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x000263e1) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x000263e1) blid2_tripm_pane_g

0xc7ff,	// (0x00023170) blid2_tripm_pane_t1_ParamLimits

0xc7ff,	// (0x00023170) blid2_tripm_pane_t1

0xc813,	// (0x00023184) blid2_tripm_pane_t2_ParamLimits

0xc813,	// (0x00023184) blid2_tripm_pane_t2

0xc825,	// (0x00023196) blid2_tripm_pane_t3_ParamLimits

0xc825,	// (0x00023196) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x000263ee) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x000263ee) blid2_tripm_pane_t

0xc857,	// (0x000231c8) cell_blid2_satellite_pane_ParamLimits

0xc857,	// (0x000231c8) cell_blid2_satellite_pane

0xc871,	// (0x000231e2) cell_blid2_satellite_pane_g1

0x438b,	// (0x0001acfc) cell_blid2_satellite_pane_t1

0x0baf,	// (0x00017520) blid2_speed_pane_g1

0x4399,	// (0x0001ad0a) blid2_speed_pane_t1

0x43a7,	// (0x0001ad18) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x000263f7) blid2_speed_pane_t

0x0baf,	// (0x00017520) blid2_navig_ring_pane_g1

0xc87a,	// (0x000231eb) blid2_navig_ring_pane_g2

0xc882,	// (0x000231f3) blid2_navig_ring_pane_g3

0xc88a,	// (0x000231fb) blid2_navig_ring_pane_g4

0xc892,	// (0x00023203) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x000263fc) blid2_navig_ring_pane_g

0x0140,	// (0x00016ab1) bg_popup_window_pane_cp011

0x43b5,	// (0x0001ad26) popup_blid2_search_window_g1

0x43bd,	// (0x0001ad2e) popup_blid2_search_window_t1

0x43cb,	// (0x0001ad3c) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x00026407) popup_blid2_search_window_t

0x0caf,	// (0x00017620) main_browser_pane_g1

0x093a,	// (0x000172ab) main_browser_pane_ParamLimits

0x71e0,	// (0x0001db51) bg_button_pane_cp011_ParamLimits

0x7f9d,	// (0x0001e90e) cell_vitu2_function_pane_g1_ParamLimits

0x1742,	// (0x000180b3) bg_popup_sub_pane_cp22_ParamLimits

0xc265,	// (0x00022bd6) input_focus_pane_cp08_ParamLimits

0xc280,	// (0x00022bf1) popup_vitu2_query_button_pane_ParamLimits

0xc280,	// (0x00022bf1) popup_vitu2_query_button_pane

0xc28f,	// (0x00022c00) popup_vitu2_query_input_button_pane

0x3f1c,	// (0x0001a88d) popup_vitu2_query_window_g1_ParamLimits

0xc299,	// (0x00022c0a) popup_vitu2_query_window_g2_ParamLimits

0xf997,	// (0x00026308) popup_vitu2_query_window_g_ParamLimits

0x0140,	// (0x00016ab1) bg_button_pane_cp026

0xc89a,	// (0x0002320b) popup_vitu2_query_input_button_pane_g1

0x0140,	// (0x00016ab1) bg_button_pane_cp025

0x43d9,	// (0x0001ad4a) popup_vitu2_query_button_pane_t1

0xade1,	// (0x00021752) main_mp3_pane_t6

0xadf1,	// (0x00021762) popup_slider_window_cp01

0x7b6b,	// (0x0001e4dc) cam4_battery_pane

0x7c45,	// (0x0001e5b6) cam4_battery_pane_cp02

0x8122,	// (0x0001ea93) cam4_battery_pane_cp01

0x8122,	// (0x0001ea93) cam4_battery_pane_cp03

0x43e7,	// (0x0001ad58) cam4_battery_pane_g1

0x0baf,	// (0x00017520) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x0002640c) cam4_battery_pane_g

0x2ddf,	// (0x00019750) popup_blid_sat_info2_window_t11

0x148a,	// (0x00017dfb) aid_size_touch_mv_arrow_left_ParamLimits

0x14b5,	// (0x00017e26) aid_size_touch_mv_arrow_right_ParamLimits

0x1513,	// (0x00017e84) navi_pane_g1_ParamLimits

0x151f,	// (0x00017e90) navi_pane_g2_ParamLimits

0x154d,	// (0x00017ebe) navi_pane_g3_ParamLimits

0xf35f,	// (0x00025cd0) navi_pane_g_ParamLimits

0x9ff5,	// (0x00020966) navi_pane_mv_t1_ParamLimits

0xb70e,	// (0x0002207f) grid_imed_effect_pane_ParamLimits

0x8bb5,	// (0x0001f526) aid_placing_vt_slider_lsc

0x0bfe,	// (0x0001756f) aid_placing_vt_slider_prt

0x01af,	// (0x00016b20) bg_tb_trans_pane_cp01_ParamLimits

0x307d,	// (0x000199ee) popup_image_details_window_g1_ParamLimits

0x3090,	// (0x00019a01) popup_image_details_window_g2_ParamLimits

0x30a5,	// (0x00019a16) popup_image_details_window_g3_ParamLimits

0x30a5,	// (0x00019a16) popup_image_details_window_g3

0xf69e,	// (0x0002600f) popup_image_details_window_g_ParamLimits

0x30b9,	// (0x00019a2a) popup_image_details_window_t1_ParamLimits

0x30cb,	// (0x00019a3c) popup_image_details_window_t2_ParamLimits

0x30e4,	// (0x00019a55) popup_image_details_window_t3_ParamLimits

0x30f8,	// (0x00019a69) popup_image_details_window_t4_ParamLimits

0x3113,	// (0x00019a84) popup_image_details_window_t5_ParamLimits

0xf6a5,	// (0x00026016) popup_image_details_window_t_ParamLimits

0xc5de,	// (0x00022f4f) cl_header_name_pane_ParamLimits

0xc5de,	// (0x00022f4f) cl_header_name_pane

0xc8a2,	// (0x00023213) cl_header_name_pane_t1_ParamLimits

0xc8a2,	// (0x00023213) cl_header_name_pane_t1

0xc8b9,	// (0x0002322a) cl_header_name_pane_t2_ParamLimits

0xc8b9,	// (0x0002322a) cl_header_name_pane_t2

0xc8e3,	// (0x00023254) cl_header_name_pane_t3_ParamLimits

0xc8e3,	// (0x00023254) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x00026411) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x00026411) cl_header_name_pane_t

0x15dc,	// (0x00017f4d) navi_pane_mv_g2_ParamLimits

0x3be6,	// (0x0001a557) field_vitu2_entry_pane_g1_ParamLimits

0x3bf2,	// (0x0001a563) field_vitu2_entry_pane_g2_ParamLimits

0x170c,	// (0x0001807d) field_vitu2_entry_pane_g3_ParamLimits

0x170c,	// (0x0001807d) field_vitu2_entry_pane_g3

0xf8a0,	// (0x00026211) field_vitu2_entry_pane_g_ParamLimits

0x7e63,	// (0x0001e7d4) cell_vitu2_itu_pane_g1_ParamLimits

0x7e7b,	// (0x0001e7ec) cell_vitu2_itu_pane_g2_ParamLimits

0x7e7b,	// (0x0001e7ec) cell_vitu2_itu_pane_g2

0x0001,

0xf8ac,	// (0x0002621d) cell_vitu2_itu_pane_g_ParamLimits

0xf8ac,	// (0x0002621d) cell_vitu2_itu_pane_g

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp05_ParamLimits

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp05

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp03

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp04

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp10_ParamLimits

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp10

0xc580,	// (0x00022ef1) bg_vkb2_func_pane_cp08

0xc24d,	// (0x00022bbe) bg_vkb2_func_pane_cp06

0xc563,	// (0x00022ed4) bg_vkb2_func_pane_cp07

0x42c9,	// (0x0001ac3a) bg_vkb2_func_pane_cp11_ParamLimits

0x42c9,	// (0x0001ac3a) bg_vkb2_func_pane_cp11

0x42de,	// (0x0001ac4f) bg_vkb2_func_pane_cp12_ParamLimits

0x42de,	// (0x0001ac4f) bg_vkb2_func_pane_cp12

0x0140,	// (0x00016ab1) bg_vkb2_func_pane_cp09

0x3c2d,	// (0x0001a59e) bg_vkb2_func_pane_g1

0x0dc0,	// (0x00017731) bg_vkb2_func_pane_g2

0x3c35,	// (0x0001a5a6) bg_vkb2_func_pane_g3

0x3c3d,	// (0x0001a5ae) bg_vkb2_func_pane_g4

0x3ec1,	// (0x0001a832) bg_vkb2_func_pane_g5

0x3c55,	// (0x0001a5c6) bg_vkb2_func_pane_g6

0x3c5d,	// (0x0001a5ce) bg_vkb2_func_pane_g7

0x3c4d,	// (0x0001a5be) bg_vkb2_func_pane_g8

0x0da0,	// (0x00017711) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x00026418) bg_vkb2_func_pane_g

0xc7f1,	// (0x00023162) blid2_tripm_pane_g6_ParamLimits

0xc7f1,	// (0x00023162) blid2_tripm_pane_g6

0x39c2,	// (0x0001a333) mp4_progress_pane_g1

0xc84b,	// (0x000231bc) blid2_tripm_values_pane_ParamLimits

0xc84b,	// (0x000231bc) blid2_tripm_values_pane

0xc908,	// (0x00023279) blid2_tripm_values_pane_t1

0xc916,	// (0x00023287) blid2_tripm_values_pane_t2

0xc924,	// (0x00023295) blid2_tripm_values_pane_t3

0xc932,	// (0x000232a3) blid2_tripm_values_pane_t4

0xc940,	// (0x000232b1) blid2_tripm_values_pane_t5

0xc94e,	// (0x000232bf) blid2_tripm_values_pane_t6

0xc95c,	// (0x000232cd) blid2_tripm_values_pane_t7

0xc96a,	// (0x000232db) blid2_tripm_values_pane_t8

0xc978,	// (0x000232e9) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x0002642b) blid2_tripm_values_pane_t

0x8bf5,	// (0x0001f566) call_video_pane_t1_ParamLimits

0x8c16,	// (0x0001f587) call_video_pane_t2_ParamLimits

0xf208,	// (0x00025b79) call_video_pane_t_ParamLimits

0xa2eb,	// (0x00020c5c) msg_header_pane_g1_ParamLimits

0x17f7,	// (0x00018168) msg_header_pane_g2_ParamLimits

0x17f7,	// (0x00018168) msg_header_pane_g2

0x0001,

0xf402,	// (0x00025d73) msg_header_pane_g_ParamLimits

0xf402,	// (0x00025d73) msg_header_pane_g

0x093a,	// (0x000172ab) main_clock2_pane_ParamLimits

0xb560,	// (0x00021ed1) grid_clock2_toolbar_pane_ParamLimits

0xb560,	// (0x00021ed1) grid_clock2_toolbar_pane

0xb560,	// (0x00021ed1) listscroll_clock2_pane_ParamLimits

0xb560,	// (0x00021ed1) listscroll_clock2_pane

0xb610,	// (0x00021f81) main_clock2_pane_t3_ParamLimits

0xb610,	// (0x00021f81) main_clock2_pane_t3

0xb622,	// (0x00021f93) main_clock2_pane_t4_ParamLimits

0xb622,	// (0x00021f93) main_clock2_pane_t4

0x43f1,	// (0x0001ad62) cell_clock2_toolbar_pane

0x43f9,	// (0x0001ad6a) cell_clock2_toolbar_pane_cp01

0x43f9,	// (0x0001ad6a) cell_clock2_toolbar_pane_cp02

0x4401,	// (0x0001ad72) cell_clock2_toolbar_pane_cp03

0x4409,	// (0x0001ad7a) list_clock2_pane

0x140f,	// (0x00017d80) scroll_pane_cp10

0x4411,	// (0x0001ad82) list_single_clock2_pane_ParamLimits

0x4411,	// (0x0001ad82) list_single_clock2_pane

0x0b6f,	// (0x000174e0) list_highlight_pane_cp08

0x441e,	// (0x0001ad8f) list_single_clock2_pane_t1

0x442c,	// (0x0001ad9d) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x0002643e) list_single_clock2_pane_t

0x0140,	// (0x00016ab1) bg_button_pane_cp10

0x443a,	// (0x0001adab) cell_clock2_toolbar_pane_g1

0x717b,	// (0x0001daec) aid_main_viewer_pane_g1_ParamLimits

0x717b,	// (0x0001daec) aid_main_viewer_pane_g1

0x7187,	// (0x0001daf8) aid_main_viewer_pane_g2_ParamLimits

0x7187,	// (0x0001daf8) aid_main_viewer_pane_g2

0xa379,	// (0x00020cea) aid_main_viewer_pane_g3_ParamLimits

0xa379,	// (0x00020cea) aid_main_viewer_pane_g3

0xa38a,	// (0x00020cfb) aid_main_viewer_pane_g4_ParamLimits

0xa38a,	// (0x00020cfb) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00025d84) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00025d84) aid_main_viewer_pane_g

0x71d3,	// (0x0001db44) main_calc_pane_ParamLimits

0x71ee,	// (0x0001db5f) main_dialer2_pane_ParamLimits

0x6d8a,	// (0x0001d6fb) main_cam6_pane

0x6d8a,	// (0x0001d6fb) main_vid6_pane

0xb56c,	// (0x00021edd) listscroll_gen_pane_cp06_ParamLimits

0xb56c,	// (0x00021edd) listscroll_gen_pane_cp06

0xb634,	// (0x00021fa5) main_clock2_pane_t5_ParamLimits

0xb634,	// (0x00021fa5) main_clock2_pane_t5

0xb681,	// (0x00021ff2) aid_call2_pane_cp10_ParamLimits

0xb693,	// (0x00022004) aid_call_pane_cp10_ParamLimits

0x147e,	// (0x00017def) popup_clock_analogue_window_cp10_g1_ParamLimits

0x147e,	// (0x00017def) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7405,	// (0x0001dd76) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7405,	// (0x0001dd76) popup_clock_analogue_window_cp10_g4_ParamLimits

0x147e,	// (0x00017def) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75a,	// (0x000260cb) popup_clock_analogue_window_cp10_g_ParamLimits

0x741b,	// (0x0001dd8c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb95d,	// (0x000222ce) cell_dialer2_keypad_pane_g2_ParamLimits

0xb95d,	// (0x000222ce) cell_dialer2_keypad_pane_g2

0x0001,

0xf83f,	// (0x000261b0) cell_dialer2_keypad_pane_g_ParamLimits

0xf83f,	// (0x000261b0) cell_dialer2_keypad_pane_g

0xb979,	// (0x000222ea) cell_dialer2_keypad_pane_t1

0xbdb9,	// (0x0002272a) main_cset_text2_pane_ParamLimits

0xbdb9,	// (0x0002272a) main_cset_text2_pane

0x4108,	// (0x0001aa79) area_vitu2_query_pane_g1_ParamLimits

0xc502,	// (0x00022e73) area_vitu2_query_pane_g2_ParamLimits

0xf9ea,	// (0x0002635b) area_vitu2_query_pane_g_ParamLimits

0x418c,	// (0x0001aafd) area_vitu2_query_pane_t7_ParamLimits

0x418c,	// (0x0001aafd) area_vitu2_query_pane_t7

0xc24d,	// (0x00022bbe) bg_button_pane_cp018_ParamLimits

0xc563,	// (0x00022ed4) bg_button_pane_cp021_ParamLimits

0xc56f,	// (0x00022ee0) bg_button_pane_cp022_ParamLimits

0xc580,	// (0x00022ef1) bg_vkb2_func_pane_cp08_ParamLimits

0xc24d,	// (0x00022bbe) bg_vkb2_func_pane_cp06_ParamLimits

0xc563,	// (0x00022ed4) bg_vkb2_func_pane_cp07_ParamLimits

0xc592,	// (0x00022f03) input_focus_pane_cp09_ParamLimits

0x81c6,	// (0x0001eb37) cam6_autofocus_pane_ParamLimits

0x81c6,	// (0x0001eb37) cam6_autofocus_pane

0x81e8,	// (0x0001eb59) cam6_image_uncrop_pane_ParamLimits

0x81e8,	// (0x0001eb59) cam6_image_uncrop_pane

0x8215,	// (0x0001eb86) cam6_indi_pane_ParamLimits

0x8215,	// (0x0001eb86) cam6_indi_pane

0x822f,	// (0x0001eba0) cam6_mode_pane_ParamLimits

0x822f,	// (0x0001eba0) cam6_mode_pane

0x8243,	// (0x0001ebb4) cam6_timer_pane_ParamLimits

0x8243,	// (0x0001ebb4) cam6_timer_pane

0x8254,	// (0x0001ebc5) cam6_zoom_pane_ParamLimits

0x8254,	// (0x0001ebc5) cam6_zoom_pane

0xc986,	// (0x000232f7) cam6_mode_pane_g1_ParamLimits

0xc986,	// (0x000232f7) cam6_mode_pane_g1

0xc992,	// (0x00023303) cam6_mode_pane_g2_ParamLimits

0xc992,	// (0x00023303) cam6_mode_pane_g2

0xc99e,	// (0x0002330f) cam6_mode_pane_g3_ParamLimits

0xc99e,	// (0x0002330f) cam6_mode_pane_g3

0xc9aa,	// (0x0002331b) cam6_mode_pane_g4_ParamLimits

0xc9aa,	// (0x0002331b) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x00026443) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x00026443) cam6_mode_pane_g

0x2b95,	// (0x00019506) bg_tb_trans_pane_cp08_ParamLimits

0x2b95,	// (0x00019506) bg_tb_trans_pane_cp08

0x4450,	// (0x0001adc1) cam6_battery_pane_ParamLimits

0x4450,	// (0x0001adc1) cam6_battery_pane

0x4466,	// (0x0001add7) cam6_indi_pane_g1_ParamLimits

0x4466,	// (0x0001add7) cam6_indi_pane_g1

0x4478,	// (0x0001ade9) cam6_indi_pane_g2_ParamLimits

0x4478,	// (0x0001ade9) cam6_indi_pane_g2

0x448a,	// (0x0001adfb) cam6_indi_pane_g3_ParamLimits

0x448a,	// (0x0001adfb) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x0002644c) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x0002644c) cam6_indi_pane_g

0x449c,	// (0x0001ae0d) cam6_indi_pane_t1_ParamLimits

0x449c,	// (0x0001ae0d) cam6_indi_pane_t1

0xbab0,	// (0x00022421) cam6_autofocus_pane_g1

0xbaa8,	// (0x00022419) cam6_autofocus_pane_g2

0xbac0,	// (0x00022431) cam6_autofocus_pane_g3

0xbab8,	// (0x00022429) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x00026453) cam6_autofocus_pane_g

0x44c2,	// (0x0001ae33) cam6_timer_pane_g1

0x44ca,	// (0x0001ae3b) cam6_timer_pane_t1

0x44d8,	// (0x0001ae49) cam6_zoom_cont_pane

0x44e0,	// (0x0001ae51) cam6_zoom_pane_g1

0x44e8,	// (0x0001ae59) cam6_zoom_pane_g2

0xc9b6,	// (0x00023327) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x0002645c) cam6_zoom_pane_g

0x0baf,	// (0x00017520) cam6_battery_pane_g1

0x0baf,	// (0x00017520) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x00025d34) cam6_battery_pane_g

0x44f0,	// (0x0001ae61) cam6_zoom_cont_pane_g1

0x44f9,	// (0x0001ae6a) cam6_zoom_cont_pane_g2

0x4502,	// (0x0001ae73) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x00026463) cam6_zoom_cont_pane_g

0xc9d3,	// (0x00023344) cam6_mode_pane_cp_ParamLimits

0xc9d3,	// (0x00023344) cam6_mode_pane_cp

0xc9e7,	// (0x00023358) cam6_zoom_pane_cp_ParamLimits

0xc9e7,	// (0x00023358) cam6_zoom_pane_cp

0xc9ff,	// (0x00023370) vid6_image_uncrop_cif_pane_ParamLimits

0xc9ff,	// (0x00023370) vid6_image_uncrop_cif_pane

0xca2b,	// (0x0002339c) vid6_image_uncrop_nhd_pane_ParamLimits

0xca2b,	// (0x0002339c) vid6_image_uncrop_nhd_pane

0xca48,	// (0x000233b9) vid6_image_uncrop_vga_pane_ParamLimits

0xca48,	// (0x000233b9) vid6_image_uncrop_vga_pane

0xca67,	// (0x000233d8) vid6_image_uncrop_wvga_pane_ParamLimits

0xca67,	// (0x000233d8) vid6_image_uncrop_wvga_pane

0xca84,	// (0x000233f5) vid6_indi_pane_ParamLimits

0xca84,	// (0x000233f5) vid6_indi_pane

0x2b95,	// (0x00019506) bg_tb_trans_pane_cp09_ParamLimits

0x2b95,	// (0x00019506) bg_tb_trans_pane_cp09

0x451a,	// (0x0001ae8b) cam6_battery_pane_cp_ParamLimits

0x451a,	// (0x0001ae8b) cam6_battery_pane_cp

0x4526,	// (0x0001ae97) vid6_indi_pane_g1_ParamLimits

0x4526,	// (0x0001ae97) vid6_indi_pane_g1

0x4538,	// (0x0001aea9) vid6_indi_pane_g2_ParamLimits

0x4538,	// (0x0001aea9) vid6_indi_pane_g2

0x454a,	// (0x0001aebb) vid6_indi_pane_g3_ParamLimits

0x454a,	// (0x0001aebb) vid6_indi_pane_g3

0x455f,	// (0x0001aed0) vid6_indi_pane_g4_ParamLimits

0x455f,	// (0x0001aed0) vid6_indi_pane_g4

0x4574,	// (0x0001aee5) vid6_indi_pane_g5_ParamLimits

0x4574,	// (0x0001aee5) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x0002646a) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x0002646a) vid6_indi_pane_g

0x458e,	// (0x0001aeff) vid6_indi_pane_t1_ParamLimits

0x458e,	// (0x0001aeff) vid6_indi_pane_t1

0x45a4,	// (0x0001af15) vid6_indi_pane_t2_ParamLimits

0x45a4,	// (0x0001af15) vid6_indi_pane_t2

0x45cc,	// (0x0001af3d) vid6_indi_pane_t3_ParamLimits

0x45cc,	// (0x0001af3d) vid6_indi_pane_t3

0x45f4,	// (0x0001af65) vid6_indi_pane_t4_ParamLimits

0x45f4,	// (0x0001af65) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x00026475) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x00026475) vid6_indi_pane_t

0x4618,	// (0x0001af89) wait_bar_pane_cp08

0xcaa7,	// (0x00023418) main_cset_text2_pane_t1_ParamLimits

0xcaa7,	// (0x00023418) main_cset_text2_pane_t1

0xc9be,	// (0x0002332f) listscroll_gen_pane_cp06_t1_ParamLimits

0xc9be,	// (0x0002332f) listscroll_gen_pane_cp06_t1

0x6d8a,	// (0x0001d6fb) main_cam6_set_pane

0x4fbf,	// (0x0001b930) bg_tb_trans_pane_cp06_ParamLimits

0x7b73,	// (0x0001e4e4) cam4_indicators_pane_g1_ParamLimits

0x7b84,	// (0x0001e4f5) cam4_indicators_pane_g2_ParamLimits

0xf87c,	// (0x000261ed) cam4_indicators_pane_g_ParamLimits

0x7b9c,	// (0x0001e50d) cam4_indicators_pane_t1_ParamLimits

0x71e0,	// (0x0001db51) bg_tb_trans_pane_cp07_ParamLimits

0x7c4d,	// (0x0001e5be) vid4_indicators_pane_g1_ParamLimits

0x7c61,	// (0x0001e5d2) vid4_indicators_pane_g2_ParamLimits

0x7c75,	// (0x0001e5e6) vid4_indicators_pane_g3_ParamLimits

0x7c86,	// (0x0001e5f7) vid4_indicators_pane_g4_ParamLimits

0xf88e,	// (0x000261ff) vid4_indicators_pane_g_ParamLimits

0x7ca2,	// (0x0001e613) vid4_indicators_pane_t1_ParamLimits

0x812a,	// (0x0001ea9b) vid4_progress_pane_g1_ParamLimits

0x813a,	// (0x0001eaab) vid4_progress_pane_g2_ParamLimits

0x814a,	// (0x0001eabb) vid4_progress_pane_g3_ParamLimits

0x815c,	// (0x0001eacd) vid4_progress_pane_g4_ParamLimits

0xfa35,	// (0x000263a6) vid4_progress_pane_g_ParamLimits

0x8174,	// (0x0001eae5) vid4_progress_pane_t1_ParamLimits

0x818a,	// (0x0001eafb) vid4_progress_pane_t2_ParamLimits

0x819f,	// (0x0001eb10) vid4_progress_pane_t3_ParamLimits

0xfa40,	// (0x000263b1) vid4_progress_pane_t_ParamLimits

0x81b5,	// (0x0001eb26) wait_bar_pane_cp07_ParamLimits

0xcade,	// (0x0002344f) main_cam6_set_pane_g2_ParamLimits

0xcade,	// (0x0002344f) main_cam6_set_pane_g2

0xcaea,	// (0x0002345b) main_cset6_listscroll_pane_ParamLimits

0xcaea,	// (0x0002345b) main_cset6_listscroll_pane

0xcb15,	// (0x00023486) main_cset6_slider_pane_ParamLimits

0xcb15,	// (0x00023486) main_cset6_slider_pane

0xcb21,	// (0x00023492) main_cset6_text2_pane_ParamLimits

0xcb21,	// (0x00023492) main_cset6_text2_pane

0x4627,	// (0x0001af98) main_cset6_text_pane

0x462f,	// (0x0001afa0) main_cset_list_pane_copy1_ParamLimits

0x462f,	// (0x0001afa0) main_cset_list_pane_copy1

0x463f,	// (0x0001afb0) scroll_pane_cp028_copy1

0xcb34,	// (0x000234a5) cset_list_set_pane_copy1

0xcb4a,	// (0x000234bb) aid_position_infowindow_above_copy1

0xcb52,	// (0x000234c3) aid_position_infowindow_below_copy1

0x4648,	// (0x0001afb9) cset_list_set_pane_g1_copy1

0x4650,	// (0x0001afc1) cset_list_set_pane_g3_copy1_ParamLimits

0x4650,	// (0x0001afc1) cset_list_set_pane_g3_copy1

0x465f,	// (0x0001afd0) cset_list_set_pane_t1_copy1_ParamLimits

0x465f,	// (0x0001afd0) cset_list_set_pane_t1_copy1

0x01af,	// (0x00016b20) list_highlight_pane_cp021_copy1_ParamLimits

0x01af,	// (0x00016b20) list_highlight_pane_cp021_copy1

0x4674,	// (0x0001afe5) cset6_slider_pane_ParamLimits

0x4674,	// (0x0001afe5) cset6_slider_pane

0x46a0,	// (0x0001b011) main_cset6_slider_pane_g1_ParamLimits

0x46a0,	// (0x0001b011) main_cset6_slider_pane_g1

0xcb5a,	// (0x000234cb) main_cset6_slider_pane_g2_ParamLimits

0xcb5a,	// (0x000234cb) main_cset6_slider_pane_g2

0x46c8,	// (0x0001b039) main_cset6_slider_pane_g3_ParamLimits

0x46c8,	// (0x0001b039) main_cset6_slider_pane_g3

0xcb82,	// (0x000234f3) main_cset6_slider_pane_g4_ParamLimits

0xcb82,	// (0x000234f3) main_cset6_slider_pane_g4

0xcb8e,	// (0x000234ff) main_cset6_slider_pane_g5_ParamLimits

0xcb8e,	// (0x000234ff) main_cset6_slider_pane_g5

0x3d5c,	// (0x0001a6cd) main_cset6_slider_pane_g7_ParamLimits

0x3d5c,	// (0x0001a6cd) main_cset6_slider_pane_g7

0x3d68,	// (0x0001a6d9) main_cset6_slider_pane_g8_ParamLimits

0x3d68,	// (0x0001a6d9) main_cset6_slider_pane_g8

0xcb9c,	// (0x0002350d) main_cset6_slider_pane_g9_ParamLimits

0xcb9c,	// (0x0002350d) main_cset6_slider_pane_g9

0xcba8,	// (0x00023519) main_cset6_slider_pane_g10_ParamLimits

0xcba8,	// (0x00023519) main_cset6_slider_pane_g10

0xcbb4,	// (0x00023525) main_cset6_slider_pane_g11_ParamLimits

0xcbb4,	// (0x00023525) main_cset6_slider_pane_g11

0xcbc0,	// (0x00023531) main_cset6_slider_pane_g12_ParamLimits

0xcbc0,	// (0x00023531) main_cset6_slider_pane_g12

0x3d74,	// (0x0001a6e5) main_cset6_slider_pane_g13_ParamLimits

0x3d74,	// (0x0001a6e5) main_cset6_slider_pane_g13

0x3d80,	// (0x0001a6f1) main_cset6_slider_pane_g14_ParamLimits

0x3d80,	// (0x0001a6f1) main_cset6_slider_pane_g14

0xcbcc,	// (0x0002353d) main_cset6_slider_pane_g15_ParamLimits

0xcbcc,	// (0x0002353d) main_cset6_slider_pane_g15

0xcbe4,	// (0x00023555) main_cset6_slider_pane_g16_ParamLimits

0xcbe4,	// (0x00023555) main_cset6_slider_pane_g16

0xcbf2,	// (0x00023563) main_cset6_slider_pane_g17_ParamLimits

0xcbf2,	// (0x00023563) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x0002647e) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x0002647e) main_cset6_slider_pane_g

0x46e0,	// (0x0001b051) main_cset6_slider_pane_t1_ParamLimits

0x46e0,	// (0x0001b051) main_cset6_slider_pane_t1

0xcc0c,	// (0x0002357d) main_cset6_slider_pane_t2_ParamLimits

0xcc0c,	// (0x0002357d) main_cset6_slider_pane_t2

0xcc37,	// (0x000235a8) main_cset6_slider_pane_t3_ParamLimits

0xcc37,	// (0x000235a8) main_cset6_slider_pane_t3

0xcc62,	// (0x000235d3) main_cset6_slider_pane_t4_ParamLimits

0xcc62,	// (0x000235d3) main_cset6_slider_pane_t4

0xcc8d,	// (0x000235fe) main_cset6_slider_pane_t5_ParamLimits

0xcc8d,	// (0x000235fe) main_cset6_slider_pane_t5

0x4721,	// (0x0001b092) main_cset6_slider_pane_t7_ParamLimits

0x4721,	// (0x0001b092) main_cset6_slider_pane_t7

0xccba,	// (0x0002362b) main_cset6_slider_pane_t8_ParamLimits

0xccba,	// (0x0002362b) main_cset6_slider_pane_t8

0xccde,	// (0x0002364f) main_cset6_slider_pane_t9_ParamLimits

0xccde,	// (0x0002364f) main_cset6_slider_pane_t9

0xcd02,	// (0x00023673) main_cset6_slider_pane_t10_ParamLimits

0xcd02,	// (0x00023673) main_cset6_slider_pane_t10

0xcd26,	// (0x00023697) main_cset6_slider_pane_t11_ParamLimits

0xcd26,	// (0x00023697) main_cset6_slider_pane_t11

0x4757,	// (0x0001b0c8) main_cset6_slider_pane_t14_ParamLimits

0x4757,	// (0x0001b0c8) main_cset6_slider_pane_t14

0x4790,	// (0x0001b101) main_cset6_slider_pane_t15_ParamLimits

0x4790,	// (0x0001b101) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x000264a3) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x000264a3) main_cset6_slider_pane_t

0x3660,	// (0x00019fd1) cset_slider_pane_g1_copy1

0x3e62,	// (0x0001a7d3) cset_slider_pane_g2_copy1

0x3e6b,	// (0x0001a7dc) cset_slider_pane_g3_copy1

0x0140,	// (0x00016ab1) bg_popup_sub_pane_cp011_copy1

0x47d2,	// (0x0001b143) main_cset_text_pane_g1_copy1

0x3f30,	// (0x0001a8a1) main_cset_text_pane_t1_copy1

0x3f3e,	// (0x0001a8af) main_cset_text_pane_t2_copy1

0x3f4c,	// (0x0001a8bd) main_cset_text_pane_t3_copy1

0x3f5a,	// (0x0001a8cb) main_cset_text_pane_t4_copy1

0x3f68,	// (0x0001a8d9) main_cset_text_pane_t5_copy1

0x47da,	// (0x0001b14b) main_cset_text_pane_t6_copy1

0x47e8,	// (0x0001b159) main_cset_text_pane_t7_copy1

0xcd69,	// (0x000236da) main_cset_text2_pane_t1_copy1

0x71e0,	// (0x0001db51) main_ncimui_pane

0x723f,	// (0x0001dbb0) popup_query_ncimui_window_ParamLimits

0x723f,	// (0x0001dbb0) popup_query_ncimui_window

0x31f0,	// (0x00019b61) field_cale_ev2_pane_g4_ParamLimits

0x31f0,	// (0x00019b61) field_cale_ev2_pane_g4

0xb8fd,	// (0x0002226e) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb8fd,	// (0x0002226e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf816,	// (0x00026187) cell_video_dialer_keypad_pane_g_ParamLimits

0xf816,	// (0x00026187) cell_video_dialer_keypad_pane_g

0xb915,	// (0x00022286) cell_video_dialer_keypad_pane_t1

0x0140,	// (0x00016ab1) bg_popup_window_pane_cp012

0x298a,	// (0x000192fb) heading_pane_cp06

0x4814,	// (0x0001b185) ncim_query_content_pane

0x0140,	// (0x00016ab1) bg_popup_heading_pane_cp01

0x481c,	// (0x0001b18d) ncim_heading_pane_t1

0x482a,	// (0x0001b19b) ncim_indicator_popup_pane

0x483c,	// (0x0001b1ad) ncim_query_button_pane

0x4850,	// (0x0001b1c1) ncim_query_content_pane_t1

0x4862,	// (0x0001b1d3) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x000264e7) ncim_query_content_pane_t

0x489c,	// (0x0001b20d) ncim_query_list_pane

0x48ae,	// (0x0001b21f) ncim_query_popup_pane

0x482a,	// (0x0001b19b) ncim_indicator_popup_pane_ParamLimits

0xcebd,	// (0x0002382e) ncim_query_content_pane_g1_ParamLimits

0xcebd,	// (0x0002382e) ncim_query_content_pane_g1

0x4850,	// (0x0001b1c1) ncim_query_content_pane_t1_ParamLimits

0x4862,	// (0x0001b1d3) ncim_query_content_pane_t2_ParamLimits

0xcec9,	// (0x0002383a) ncim_query_content_pane_t3_ParamLimits

0xcec9,	// (0x0002383a) ncim_query_content_pane_t3

0xcee6,	// (0x00023857) ncim_query_content_pane_t4_ParamLimits

0xcee6,	// (0x00023857) ncim_query_content_pane_t4

0xcf03,	// (0x00023874) ncim_query_content_pane_t5_ParamLimits

0xcf03,	// (0x00023874) ncim_query_content_pane_t5

0x4874,	// (0x0001b1e5) ncim_query_content_pane_t6_ParamLimits

0x4874,	// (0x0001b1e5) ncim_query_content_pane_t6

0xfb76,	// (0x000264e7) ncim_query_content_pane_t_ParamLimits

0x489c,	// (0x0001b20d) ncim_query_list_pane_ParamLimits

0x48ae,	// (0x0001b21f) ncim_query_popup_pane_ParamLimits

0x48c2,	// (0x0001b233) wait_bar_pane_cp04

0x0140,	// (0x00016ab1) input_focus_pane_cp011

0x48ca,	// (0x0001b23b) ncim_query_popup_pane_t1

0x48d8,	// (0x0001b249) ncim_list_query_list_pane_ParamLimits

0x48d8,	// (0x0001b249) ncim_list_query_list_pane

0x0140,	// (0x00016ab1) bg_button_pane_cp027

0x48e5,	// (0x0001b256) ncim_query_button_pane_g1

0x0140,	// (0x00016ab1) list_highlight_pane_cp012

0x48ef,	// (0x0001b260) ncim_list_query_list_pane_g1

0x48f7,	// (0x0001b268) ncim_list_query_list_pane_t1

0x7b90,	// (0x0001e501) cam4_indicators_pane_g3_ParamLimits

0x7b90,	// (0x0001e501) cam4_indicators_pane_g3

0x7c92,	// (0x0001e603) vid4_indicators_pane_g5_ParamLimits

0x7c92,	// (0x0001e603) vid4_indicators_pane_g5

0x8168,	// (0x0001ead9) vid4_progress_pane_g5_ParamLimits

0x8168,	// (0x0001ead9) vid4_progress_pane_g5

0xcda9,	// (0x0002371a) main_ncimui_pane_g1

0xce11,	// (0x00023782) ncimui_group_query_pane_ParamLimits

0xce11,	// (0x00023782) ncimui_group_query_pane

0xce59,	// (0x000237ca) ncimui_list_pane_ParamLimits

0xce59,	// (0x000237ca) ncimui_list_pane

0xce80,	// (0x000237f1) ncimui_text_pane_ParamLimits

0xce80,	// (0x000237f1) ncimui_text_pane

0xcf20,	// (0x00023891) ncimui_text_pane_t1_ParamLimits

0xcf20,	// (0x00023891) ncimui_text_pane_t1

0x4905,	// (0x0001b276) ncimui_list_single_graphic_pane_ParamLimits

0x4905,	// (0x0001b276) ncimui_list_single_graphic_pane

0xcf3f,	// (0x000238b0) ncimui_query_pane_ParamLimits

0xcf3f,	// (0x000238b0) ncimui_query_pane

0x0140,	// (0x00016ab1) list_highlight_pane_cp013

0x4915,	// (0x0001b286) ncim_list_query_list_pane_t1_copy1

0x4923,	// (0x0001b294) ncim_list_single_graphic_pane_g1

0xcf52,	// (0x000238c3) ncim_query_button_pane_cp01

0xcf5e,	// (0x000238cf) ncim_query_entry_pane_ParamLimits

0xcf5e,	// (0x000238cf) ncim_query_entry_pane

0xcf71,	// (0x000238e2) ncimui_query_pane_g1

0xcf7d,	// (0x000238ee) ncimui_query_pane_t1_ParamLimits

0xcf7d,	// (0x000238ee) ncimui_query_pane_t1

0x01af,	// (0x00016b20) input_focus_pane_cp012

0x492b,	// (0x0001b29c) ncim_query_entry_pane_t1

0x093a,	// (0x000172ab) main_im_pane_ParamLimits

0x71e0,	// (0x0001db51) main_mobtv_pane_ParamLimits

0x71e0,	// (0x0001db51) main_mobtv_pane

0xcc00,	// (0x00023571) main_cset6_slider_pane_g18_ParamLimits

0xcc00,	// (0x00023571) main_cset6_slider_pane_g18

0x46d4,	// (0x0001b045) main_cset6_slider_pane_g19_ParamLimits

0x46d4,	// (0x0001b045) main_cset6_slider_pane_g19

0x170c,	// (0x0001807d) bg_main_mobtv_pane_ParamLimits

0x170c,	// (0x0001807d) bg_main_mobtv_pane

0xcf96,	// (0x00023907) main_mobtv_info_pane

0xcfa1,	// (0x00023912) main_mobtv_loading_pane_ParamLimits

0xcfa1,	// (0x00023912) main_mobtv_loading_pane

0x493d,	// (0x0001b2ae) main_mobtv_pg_channel_list_pane

0x4947,	// (0x0001b2b8) main_mobtv_pg_hdr_pane

0xcfae,	// (0x0002391f) main_mobtv_programe_curr_pane_ParamLimits

0xcfae,	// (0x0002391f) main_mobtv_programe_curr_pane

0xcfbb,	// (0x0002392c) main_mobtv_programe_next_pane_ParamLimits

0xcfbb,	// (0x0002392c) main_mobtv_programe_next_pane

0x4950,	// (0x0001b2c1) popup_mobtv_noti_window

0x0baf,	// (0x00017520) main_tv_pg_hdr_pane_g1

0x4958,	// (0x0001b2c9) main_tv_pg_hdr_pane_g2

0x4960,	// (0x0001b2d1) main_tv_pg_hdr_pane_g3

0x4968,	// (0x0001b2d9) main_tv_pg_hdr_pane_g4

0x4970,	// (0x0001b2e1) main_tv_pg_hdr_pane_g5

0x497a,	// (0x0001b2eb) main_tv_pg_hdr_pane_g6

0x4984,	// (0x0001b2f5) main_tv_pg_hdr_pane_g7

0x498e,	// (0x0001b2ff) main_tv_pg_hdr_pane_g8

0x4998,	// (0x0001b309) main_tv_pg_hdr_pane_g9

0x49a2,	// (0x0001b313) main_tv_pg_hdr_pane_g10

0x49ac,	// (0x0001b31d) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x000264f4) main_tv_pg_hdr_pane_g

0x49b6,	// (0x0001b327) main_tv_pg_hdr_pane_t1

0x49c4,	// (0x0001b335) main_tv_pg_hdr_pane_t2

0x49d2,	// (0x0001b343) main_tv_pg_hdr_pane_t3

0x49e2,	// (0x0001b353) main_tv_pg_hdr_pane_t4

0x49f2,	// (0x0001b363) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x0002650b) main_tv_pg_hdr_pane_t

0x4a02,	// (0x0001b373) single_mobtv_pg_channel_pane_ParamLimits

0x4a02,	// (0x0001b373) single_mobtv_pg_channel_pane

0x4a14,	// (0x0001b385) single_mobtv_pg_channel_table_pane

0x0ecf,	// (0x00017840) single_mobtv_pg_channel_thumb_pane

0x4a1d,	// (0x0001b38e) single_tv_pg_channel_pane_g1

0x4a26,	// (0x0001b397) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x00026516) single_tv_pg_channel_pane_g

0x08a6,	// (0x00017217) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x08a6,	// (0x00017217) bg_single_mobtv_pg_channel_thumb_pane

0x4a2f,	// (0x0001b3a0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4a2f,	// (0x0001b3a0) single_mobtv_pg_channel_thumb_pane_g1

0x4a3d,	// (0x0001b3ae) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4a3d,	// (0x0001b3ae) single_mobtv_pg_channel_thumb_pane_g2

0x4a49,	// (0x0001b3ba) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4a49,	// (0x0001b3ba) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x0002651b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x0002651b) single_mobtv_pg_channel_thumb_pane_g

0x4a55,	// (0x0001b3c6) single_mobtv_pg_channel_thumb_pane_t1

0x4a63,	// (0x0001b3d4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x00026522) single_mobtv_pg_channel_thumb_pane_t

0x0baf,	// (0x00017520) bg_single_mobtv_pg_channel_table_pane_g1

0x0baf,	// (0x00017520) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x00025d34) bg_single_mobtv_pg_channel_table_pane_g

0x4a71,	// (0x0001b3e2) single_mobtv_pg_channel_table_pane_t1

0x4a7f,	// (0x0001b3f0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x00026527) single_mobtv_pg_channel_table_pane_t

0xcfd0,	// (0x00023941) main_mobtv_info_pane_g1_ParamLimits

0xcfd0,	// (0x00023941) main_mobtv_info_pane_g1

0xcfec,	// (0x0002395d) main_mobtv_info_pane_t1_ParamLimits

0xcfec,	// (0x0002395d) main_mobtv_info_pane_t1

0xd064,	// (0x000239d5) main_mobtv_info_pane_t2_ParamLimits

0xd064,	// (0x000239d5) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x00026531) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x00026531) main_mobtv_info_pane_t

0xd0f3,	// (0x00023a64) wait_bar_pane_cp05

0xd105,	// (0x00023a76) main_mobtv_loading_pane_g1_ParamLimits

0xd105,	// (0x00023a76) main_mobtv_loading_pane_g1

0xd113,	// (0x00023a84) main_mobtv_loading_pane_g2_ParamLimits

0xd113,	// (0x00023a84) main_mobtv_loading_pane_g2

0xd11f,	// (0x00023a90) main_mobtv_loading_pane_g3_ParamLimits

0xd11f,	// (0x00023a90) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x00026538) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x00026538) main_mobtv_loading_pane_g

0x4a8d,	// (0x0001b3fe) main_mobtv_loading_pane_t1_ParamLimits

0x4a8d,	// (0x0001b3fe) main_mobtv_loading_pane_t1

0x4aa5,	// (0x0001b416) main_mobtv_loading_pane_t2_ParamLimits

0x4aa5,	// (0x0001b416) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x0002653f) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x0002653f) main_mobtv_loading_pane_t

0xd12d,	// (0x00023a9e) wait_bar_pane_cp06_ParamLimits

0xd12d,	// (0x00023a9e) wait_bar_pane_cp06

0x4ac9,	// (0x0001b43a) main_mobtv_programe_curr_pane_t1

0x4ad7,	// (0x0001b448) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x00026544) main_mobtv_programe_curr_pane_t

0x4ae5,	// (0x0001b456) main_mobtv_programe_next_pane_t1

0x4af3,	// (0x0001b464) main_mobtv_programe_next_pane_t2

0x4b01,	// (0x0001b472) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x00026549) main_mobtv_programe_next_pane_t

0x0140,	// (0x00016ab1) bg_popup_mobtv_noti_window_pane

0x4b0f,	// (0x0001b480) popup_mobtv_noti_window_g1

0x4b17,	// (0x0001b488) popup_mobtv_noti_window_t1

0x4b25,	// (0x0001b496) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x00026550) popup_mobtv_noti_window_t

0x0baf,	// (0x00017520) bg_popup_mobtv_noti_window_pane_g1

0x6d8a,	// (0x0001d6fb) sc_clock_pane

0x6d8a,	// (0x0001d6fb) main_fs_bigclock_pane

0xc839,	// (0x000231aa) blid2_tripm_pane_t4_ParamLimits

0xc839,	// (0x000231aa) blid2_tripm_pane_t4

0xd139,	// (0x00023aaa) sc_clock_pane_g1_ParamLimits

0xd139,	// (0x00023aaa) sc_clock_pane_g1

0xd147,	// (0x00023ab8) sc_clock_pane_t1_ParamLimits

0xd147,	// (0x00023ab8) sc_clock_pane_t1

0xd15a,	// (0x00023acb) sc_clock_pane_t2_ParamLimits

0xd15a,	// (0x00023acb) sc_clock_pane_t2

0xd16c,	// (0x00023add) sc_clock_pane_t3_ParamLimits

0xd16c,	// (0x00023add) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x00026555) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x00026555) sc_clock_pane_t

0xdda5,	// (0x00024716) main_fs_bigclock_indicator_pane_ParamLimits

0xdda5,	// (0x00024716) main_fs_bigclock_indicator_pane

0xd1ef,	// (0x00023b60) main_fs_bigclock_pane_g1_ParamLimits

0xd1ef,	// (0x00023b60) main_fs_bigclock_pane_g1

0xddb1,	// (0x00024722) main_fs_bigclock_pane_t1_ParamLimits

0xddb1,	// (0x00024722) main_fs_bigclock_pane_t1

0xddc3,	// (0x00024734) main_fs_bigclock_pane_t2_ParamLimits

0xddc3,	// (0x00024734) main_fs_bigclock_pane_t2

0xddd7,	// (0x00024748) main_fs_bigclock_pane_t3_ParamLimits

0xddd7,	// (0x00024748) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x000266e6) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x000266e6) main_fs_bigclock_pane_t

0x56b3,	// (0x0001c024) main_fs_bigclock_indicator_pane_g1

0x4844,	// (0x0001b1b5) ncim_query_content_pane_g2_ParamLimits

0x4844,	// (0x0001b1b5) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x000264e2) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x000264e2) ncim_query_content_pane_g

0xd180,	// (0x00023af1) sc_clock_pane_t4_ParamLimits

0xd180,	// (0x00023af1) sc_clock_pane_t4

0x71e0,	// (0x0001db51) main_radioblah_pane

0x7a5a,	// (0x0001e3cb) cell_call4_button_pane_t1_copy1_ParamLimits

0x7a5a,	// (0x0001e3cb) cell_call4_button_pane_t1_copy1

0xcdc3,	// (0x00023734) main_ncimui_pane_t1_ParamLimits

0xcdc3,	// (0x00023734) main_ncimui_pane_t1

0xcddd,	// (0x0002374e) main_ncimui_pane_t2_ParamLimits

0xcddd,	// (0x0002374e) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x000264db) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x000264db) main_ncimui_pane_t

0x4c6b,	// (0x0001b5dc) main_radioblah_anim_pane_ParamLimits

0x4c6b,	// (0x0001b5dc) main_radioblah_anim_pane

0x4c7c,	// (0x0001b5ed) main_radioblah_info_pane_ParamLimits

0x4c7c,	// (0x0001b5ed) main_radioblah_info_pane

0x4c90,	// (0x0001b601) main_radioblah_pane_t1_ParamLimits

0x4c90,	// (0x0001b601) main_radioblah_pane_t1

0x4cac,	// (0x0001b61d) main_radioblah_pane_t2_ParamLimits

0x4cac,	// (0x0001b61d) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x00026576) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x00026576) main_radioblah_pane_t

0xd245,	// (0x00023bb6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd245,	// (0x00023bb6) main_radioblah_rocker_ctrl_pane

0x4cf4,	// (0x0001b665) main_radioblah_info_pane_t1_ParamLimits

0x4cf4,	// (0x0001b665) main_radioblah_info_pane_t1

0xd28a,	// (0x00023bfb) main_radioblah_info_pane_t2_ParamLimits

0xd28a,	// (0x00023bfb) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x0002657f) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x0002657f) main_radioblah_info_pane_t

0x0baf,	// (0x00017520) main_radioblah_rocker_ctrl_pane_g1

0xd33a,	// (0x00023cab) main_radioblah_rocker_ctrl_pane_g2

0xd342,	// (0x00023cb3) main_radioblah_rocker_ctrl_pane_g3

0xd34a,	// (0x00023cbb) main_radioblah_rocker_ctrl_pane_g4

0xd352,	// (0x00023cc3) main_radioblah_rocker_ctrl_pane_g5

0xd35a,	// (0x00023ccb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x00026588) main_radioblah_rocker_ctrl_pane_g

0xcd69,	// (0x000236da) main_cset_text2_pane_t1_copy1_ParamLimits

0x7ae5,	// (0x0001e456) cam4_image_uncrop_qvga_pane

0x7c02,	// (0x0001e573) vid4_image_uncrop_qcif_pane

0x8207,	// (0x0001eb78) cam6_image_uncrop_qvga_pane_ParamLimits

0x8207,	// (0x0001eb78) cam6_image_uncrop_qvga_pane

0x450a,	// (0x0001ae7b) vid6_image_uncrop_qcif_pane_ParamLimits

0x450a,	// (0x0001ae7b) vid6_image_uncrop_qcif_pane

0x0140,	// (0x00016ab1) bg_popup_preview_window_pane_cp03

0x47f6,	// (0x0001b167) list_cset_text2_pane

0x47fe,	// (0x0001b16f) main_cset6_text2_pane_g1

0x4806,	// (0x0001b177) main_cset6_text2_pane_t1

0xd362,	// (0x00023cd3) list_cset_text2_pane_t1_ParamLimits

0xd362,	// (0x00023cd3) list_cset_text2_pane_t1

0x71e0,	// (0x0001db51) main_radioblah_pane_ParamLimits

0xd0df,	// (0x00023a50) main_mobtv_info_pane_t3_ParamLimits

0xd0df,	// (0x00023a50) main_mobtv_info_pane_t3

0xd233,	// (0x00023ba4) main_radioblah_pane_g1

0xd25e,	// (0x00023bcf) main_radioblah_info_pane_g1

0xd2df,	// (0x00023c50) main_radioblah_info_pane_t3_ParamLimits

0xd2df,	// (0x00023c50) main_radioblah_info_pane_t3

0x9be7,	// (0x00020558) highlight_cell_cale_month_pane_ParamLimits

0x9be7,	// (0x00020558) highlight_cell_cale_month_pane

0x6d8a,	// (0x0001d6fb) main_phob_fisheye_pane

0x3291,	// (0x00019c02) scroll_pane_cp0031_ParamLimits

0x3291,	// (0x00019c02) scroll_pane_cp0031

0x4618,	// (0x0001af89) wait_bar_pane_cp08_ParamLimits

0xcb34,	// (0x000234a5) cset_list_set_pane_copy1_ParamLimits

0x4d2e,	// (0x0001b69f) highlight_cell_cale_month_pane_g1

0xd383,	// (0x00023cf4) highlight_cell_cale_month_pane_t1

0x41f8,	// (0x0001ab69) list_gen_pane_cp01

0x3d47,	// (0x0001a6b8) scroll_pane_01

0xd391,	// (0x00023d02) list_single_double_fisheye_pane

0xd39a,	// (0x00023d0b) list_double_fisheye_pane_g1_ParamLimits

0xd39a,	// (0x00023d0b) list_double_fisheye_pane_g1

0xd3a6,	// (0x00023d17) list_double_fisheye_pane_g2_ParamLimits

0xd3a6,	// (0x00023d17) list_double_fisheye_pane_g2

0xd3ba,	// (0x00023d2b) list_double_fisheye_pane_g3_ParamLimits

0xd3ba,	// (0x00023d2b) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x00026595) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x00026595) list_double_fisheye_pane_g

0xd3e3,	// (0x00023d54) list_double_fisheye_pane_t1_ParamLimits

0xd3e3,	// (0x00023d54) list_double_fisheye_pane_t1

0xd3fe,	// (0x00023d6f) list_double_fisheye_pane_t2_ParamLimits

0xd3fe,	// (0x00023d6f) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x000265a0) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x000265a0) list_double_fisheye_pane_t

0x6d8a,	// (0x0001d6fb) main_call5_pane

0xd1a6,	// (0x00023b17) sc_swipe_pane_ParamLimits

0xd1a6,	// (0x00023b17) sc_swipe_pane

0xd42c,	// (0x00023d9d) call5_image_pane_ParamLimits

0xd42c,	// (0x00023d9d) call5_image_pane

0xd43c,	// (0x00023dad) call5_swipe_1_pane_ParamLimits

0xd43c,	// (0x00023dad) call5_swipe_1_pane

0xd448,	// (0x00023db9) call5_swipe_2_pane_ParamLimits

0xd448,	// (0x00023db9) call5_swipe_2_pane

0xd462,	// (0x00023dd3) popup_call5_audio_first_window_ParamLimits

0xd462,	// (0x00023dd3) popup_call5_audio_first_window

0x08a6,	// (0x00017217) call5_swipe_1_pane_g1_ParamLimits

0x08a6,	// (0x00017217) call5_swipe_1_pane_g1

0x4d36,	// (0x0001b6a7) call5_swipe_1_pane_g2_ParamLimits

0x4d36,	// (0x0001b6a7) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x000265a5) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x000265a5) call5_swipe_1_pane_g

0x4d42,	// (0x0001b6b3) call5_swipe_1_pane_t1_ParamLimits

0x4d42,	// (0x0001b6b3) call5_swipe_1_pane_t1

0x08a6,	// (0x00017217) call5_swipe_2_pane_g1_ParamLimits

0x08a6,	// (0x00017217) call5_swipe_2_pane_g1

0x4d57,	// (0x0001b6c8) call5_swipe_2_pane_g2_ParamLimits

0x4d57,	// (0x0001b6c8) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x000265aa) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x000265aa) call5_swipe_2_pane_g

0x4d63,	// (0x0001b6d4) call5_swipe_2_pane_t1_ParamLimits

0x4d63,	// (0x0001b6d4) call5_swipe_2_pane_t1

0x4d78,	// (0x0001b6e9) sc_swipe_pane_g1_ParamLimits

0x4d78,	// (0x0001b6e9) sc_swipe_pane_g1

0x4d85,	// (0x0001b6f6) sc_swipe_pane_g2_ParamLimits

0x4d85,	// (0x0001b6f6) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x000265af) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x000265af) sc_swipe_pane_g

0x4d91,	// (0x0001b702) sc_swipe_pane_t1_ParamLimits

0x4d91,	// (0x0001b702) sc_swipe_pane_t1

0x6d8a,	// (0x0001d6fb) main_cmail_launcher_pane

0xd470,	// (0x00023de1) aid_size_cell_cmail_l_ParamLimits

0xd470,	// (0x00023de1) aid_size_cell_cmail_l

0xd47e,	// (0x00023def) grid_cmail_l_pane_ParamLimits

0xd47e,	// (0x00023def) grid_cmail_l_pane

0xd48e,	// (0x00023dff) cell_cmail_l_pane_ParamLimits

0xd48e,	// (0x00023dff) cell_cmail_l_pane

0x4da6,	// (0x0001b717) cell_cmail_l_pane_g1_ParamLimits

0x4da6,	// (0x0001b717) cell_cmail_l_pane_g1

0x4db2,	// (0x0001b723) cell_cmail_l_pane_t1_ParamLimits

0x4db2,	// (0x0001b723) cell_cmail_l_pane_t1

0x4dc8,	// (0x0001b739) cell_cmail_l_pane_t2_ParamLimits

0x4dc8,	// (0x0001b739) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x000265b4) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x000265b4) cell_cmail_l_pane_t

0x01af,	// (0x00016b20) grid_highlight_pane_cp018_ParamLimits

0x01af,	// (0x00016b20) grid_highlight_pane_cp018

0x6bec,	// (0x0001d55d) main2_pane_ParamLimits

0x6bec,	// (0x0001d55d) main2_pane

0x09f6,	// (0x00017367) popup_sp_fs_action_menu_bg_pane_g1

0x09fe,	// (0x0001736f) popup_sp_fs_action_menu_bg_pane_g2

0x0a06,	// (0x00017377) popup_sp_fs_action_menu_bg_pane_g3

0x0a0e,	// (0x0001737f) popup_sp_fs_action_menu_bg_pane_g4

0x0a16,	// (0x00017387) popup_sp_fs_action_menu_bg_pane_g5

0x0a1e,	// (0x0001738f) popup_sp_fs_action_menu_bg_pane_g6

0x0a26,	// (0x00017397) popup_sp_fs_action_menu_bg_pane_g7

0x0a2e,	// (0x0001739f) popup_sp_fs_action_menu_bg_pane_g8

0x0a36,	// (0x000173a7) popup_sp_fs_action_menu_bg_pane_g9

0x0a3e,	// (0x000173af) popup_sp_fs_action_menu_bg_pane_g10

0x0a3e,	// (0x000173af) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00025a9c) popup_sp_fs_action_menu_bg_pane_g

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g3_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g3_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g3_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g3_g2

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g3_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00025b4a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00025b4a) list_medium_line_x2_t3_g3_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g3_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g3_t2

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00025b51) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00025b51) list_medium_line_x2_t3_g3_t

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g2_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g2_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00025b58) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00025b58) list_medium_line_x2_t3_g2_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g2_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g2_t2

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00025b51) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00025b51) list_medium_line_x2_t3_g2_t

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g2

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g3

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g4_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00025b5d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00025b5d) list_medium_line_x2_t4_g4_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t2

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t3

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00025b66) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00025b66) list_medium_line_x2_t4_g4_t

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g2

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g3

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g4_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00025b5d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00025b5d) list_medium_line_x2_t2_g4_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g4_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x00025bcd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x00025bcd) list_medium_line_x2_t2_g4_t

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g3_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g3_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g3_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g3_g2

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g3_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00025b4a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00025b4a) list_medium_line_x2_t2_g3_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g3_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x00025bcd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x00025bcd) list_medium_line_x2_t2_g3_t

0x9d86,	// (0x000206f7) main_sp_fs_list_pane_ParamLimits

0x9d86,	// (0x000206f7) main_sp_fs_list_pane

0x9d92,	// (0x00020703) sp_fs_scroll_pane_ParamLimits

0x9d92,	// (0x00020703) sp_fs_scroll_pane

0x1110,	// (0x00017a81) list_medium_line_x2_t3_t1

0x1110,	// (0x00017a81) list_medium_line_x2_t3_t2

0x1110,	// (0x00017a81) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00025c18) list_medium_line_x2_t3_t

0x1110,	// (0x00017a81) list_medium_line_x3_t4_t1

0x1110,	// (0x00017a81) list_medium_line_x3_t4_t2

0x1110,	// (0x00017a81) list_medium_line_x3_t4_t3

0x1110,	// (0x00017a81) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00025c1f) list_medium_line_x3_t4_t

0x1110,	// (0x00017a81) list_medium_line_x4_t5_t1

0x1110,	// (0x00017a81) list_medium_line_x4_t5_t2

0x1110,	// (0x00017a81) list_medium_line_x4_t5_t3

0x1110,	// (0x00017a81) list_medium_line_x4_t5_t4

0x1110,	// (0x00017a81) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00025c28) list_medium_line_x4_t5_t

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g1

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g2

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g3

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g4_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00025b5d) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00025b5d) list_medium_line_t4_g4_g

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t1

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t2

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t3

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t4_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00025b66) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00025b66) list_medium_line_t4_g4_t

0x9e16,	// (0x00020787) chi_dic_find_pane_g1

0x71fc,	// (0x0001db6d) main_tport_pane

0x1110,	// (0x00017a81) list_medium_line_plain_t1

0x08a6,	// (0x00017217) list_medium_line_t2_g2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t2_g2_g1

0x08a6,	// (0x00017217) list_medium_line_t2_g2_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00025b58) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00025b58) list_medium_line_t2_g2_g

0x0b81,	// (0x000174f2) list_medium_line_t2_g2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t2_g2_t1

0x0b81,	// (0x000174f2) list_medium_line_t2_g2_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x00025bcd) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x00025bcd) list_medium_line_t2_g2_t

0x426c,	// (0x0001abdd) aid_sp_fs_list_icon_a_sm

0x4274,	// (0x0001abe5) aid_sp_fs_list_icon_d

0x427c,	// (0x0001abed) aid_sp_fs_text_primary

0x4285,	// (0x0001abf6) aid_sp_fs_text_secondary

0x0140,	// (0x00016ab1) list_medium_line

0x0140,	// (0x00016ab1) list_medium_line_g2

0x0140,	// (0x00016ab1) list_medium_line_g3

0x0140,	// (0x00016ab1) list_medium_line_plain

0x0140,	// (0x00016ab1) list_medium_line_plain_t2

0x0140,	// (0x00016ab1) list_medium_line_plain_t3

0x0140,	// (0x00016ab1) list_medium_line_right_icon

0x0140,	// (0x00016ab1) list_medium_line_right_iconx2

0x0140,	// (0x00016ab1) list_medium_line_t2

0x0140,	// (0x00016ab1) list_medium_line_t2_g2

0x0140,	// (0x00016ab1) list_medium_line_t2_g3

0x0140,	// (0x00016ab1) list_medium_line_t2_right_icon

0x0140,	// (0x00016ab1) list_medium_line_t2_right_iconx2

0x0140,	// (0x00016ab1) list_medium_line_t3

0x0140,	// (0x00016ab1) list_medium_line_t3_g2

0x0140,	// (0x00016ab1) list_medium_line_t3_g3

0x0140,	// (0x00016ab1) list_medium_line_t3_right_iconx2

0x0140,	// (0x00016ab1) list_medium_line_t4_g4

0x0140,	// (0x00016ab1) list_medium_line_x2

0x0140,	// (0x00016ab1) list_medium_line_x2_t2_g2

0x0140,	// (0x00016ab1) list_medium_line_x2_t2_g3

0x0140,	// (0x00016ab1) list_medium_line_x2_t2_g4

0x0140,	// (0x00016ab1) list_medium_line_x2_t3

0x0140,	// (0x00016ab1) list_medium_line_x2_t3_g2

0x0140,	// (0x00016ab1) list_medium_line_x2_t3_g3

0x0140,	// (0x00016ab1) list_medium_line_x2_t3_g4

0x0140,	// (0x00016ab1) list_medium_line_x2_t4_g2

0x0140,	// (0x00016ab1) list_medium_line_x2_t4_g4

0x0140,	// (0x00016ab1) list_medium_line_x3

0x0140,	// (0x00016ab1) list_medium_line_x3_t4

0x0140,	// (0x00016ab1) list_medium_line_x3_t4_g4

0x0140,	// (0x00016ab1) list_medium_line_x4_t4

0x0140,	// (0x00016ab1) list_medium_line_x4_t4_g7

0x0140,	// (0x00016ab1) list_medium_line_x4_t5

0xc6be,	// (0x0002302f) list_single_fs_dyc_pane_ParamLimits

0xc6be,	// (0x0002302f) list_single_fs_dyc_pane

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g1

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g2

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g3

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g4_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g4

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g5_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g5

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g6_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x4_t4_g7_g6

0x08b4,	// (0x00017225) list_medium_line_x4_t4_g7_g7_ParamLimits

0x08b4,	// (0x00017225) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x000264bc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x000264bc) list_medium_line_x4_t4_g7_g

0x0b81,	// (0x000174f2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x4_t4_g7_t1

0x0b81,	// (0x000174f2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x4_t4_g7_t2

0x0b81,	// (0x000174f2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x4_t4_g7_t3

0x172e,	// (0x0001809f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x172e,	// (0x0001809f) list_medium_line_x4_t4_g7_t4

0x172e,	// (0x0001809f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x172e,	// (0x0001809f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x000264cb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x000264cb) list_medium_line_x4_t4_g7_t

0xcd4c,	// (0x000236bd) list_single_dyc_row_pane_ParamLimits

0xcd4c,	// (0x000236bd) list_single_dyc_row_pane

0xd420,	// (0x00023d91) call5_gesture_pane_ParamLimits

0xd420,	// (0x00023d91) call5_gesture_pane

0xd454,	// (0x00023dc5) call5_windows_pane_ParamLimits

0xd454,	// (0x00023dc5) call5_windows_pane

0xd4a7,	// (0x00023e18) call5_swipe_1_pane_cp_ParamLimits

0xd4a7,	// (0x00023e18) call5_swipe_1_pane_cp

0xd4b3,	// (0x00023e24) call5_swipe_2_pane_cp_ParamLimits

0xd4b3,	// (0x00023e24) call5_swipe_2_pane_cp

0x0b6f,	// (0x000174e0) call5_image_pane_cp

0xd4bf,	// (0x00023e30) popup_call5_audio_first_window_cp_ParamLimits

0xd4bf,	// (0x00023e30) popup_call5_audio_first_window_cp

0x4d78,	// (0x0001b6e9) call5_swipe_1_pane_g1_cp_ParamLimits

0x4d78,	// (0x0001b6e9) call5_swipe_1_pane_g1_cp

0x4de5,	// (0x0001b756) call5_swipe_1_pane_g2_cp

0x4d91,	// (0x0001b702) call5_swipe_1_pane_t1_cp_ParamLimits

0x4d91,	// (0x0001b702) call5_swipe_1_pane_t1_cp

0x4d78,	// (0x0001b6e9) call5_swipe_2_pane_g1_cp_ParamLimits

0x4d78,	// (0x0001b6e9) call5_swipe_2_pane_g1_cp

0x4ded,	// (0x0001b75e) call5_swipe_2_pane_g2_cp

0x4df5,	// (0x0001b766) call5_swipe_2_pane_t1_cp_ParamLimits

0x4df5,	// (0x0001b766) call5_swipe_2_pane_t1_cp

0x01af,	// (0x00016b20) main_sp_fs_email_pane

0x4e0a,	// (0x0001b77b) main_sp_fs_listscroll_pane_te

0xd4cd,	// (0x00023e3e) popup_sp_fs_action_menu_pane_ParamLimits

0xd4cd,	// (0x00023e3e) popup_sp_fs_action_menu_pane

0x0baf,	// (0x00017520) bg_sp_fs_ctrlbar_pane_g1

0x4e13,	// (0x0001b784) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4e1c,	// (0x0001b78d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2a03,	// (0x00019374) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0baf,	// (0x00017520) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x000265b9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2ba3,	// (0x00019514) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2ba3,	// (0x00019514) bg_sp_fs_ctrlbar_ddmenu_pane

0x4e25,	// (0x0001b796) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4e25,	// (0x0001b796) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4e31,	// (0x0001b7a2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4e31,	// (0x0001b7a2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x000265c2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x000265c2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4e3d,	// (0x0001b7ae) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4e3d,	// (0x0001b7ae) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0baf,	// (0x00017520) list_medium_line_t2_right_icon_g1

0x1110,	// (0x00017a81) list_medium_line_t2_right_icon_t1

0x1110,	// (0x00017a81) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x000265c7) list_medium_line_t2_right_icon_t

0x1742,	// (0x000180b3) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1742,	// (0x000180b3) bg_sp_fs_ctrlbar_pane

0xd554,	// (0x00023ec5) main_sp_fs_ctrlbar_button_pane_cp01

0xd55c,	// (0x00023ecd) main_sp_fs_ctrlbar_ddmenu_pane

0x4e8f,	// (0x0001b800) main_sp_fs_ctrlbar_pane_g1

0x4e9b,	// (0x0001b80c) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x000265cc) main_sp_fs_ctrlbar_pane_g

0xd598,	// (0x00023f09) main_sp_fs_ctrlbar_pane_t1

0xd5d3,	// (0x00023f44) main_sp_fs_ctrlbar_pane

0xd5e9,	// (0x00023f5a) main_sp_fs_listscroll_pane_te_cp01

0xd5fa,	// (0x00023f6b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd5fa,	// (0x00023f6b) popup_sp_fs_action_menu_pane_cp01

0x01af,	// (0x00016b20) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x01af,	// (0x00016b20) bg_sp_fs_highlight_list_pane_cp01

0x4ec2,	// (0x0001b833) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4ec2,	// (0x0001b833) sp_fs_action_menu_list_gene_pane_g1

0x4ed1,	// (0x0001b842) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4ed1,	// (0x0001b842) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x000265da) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x000265da) sp_fs_action_menu_list_gene_pane_g

0x4ede,	// (0x0001b84f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4ede,	// (0x0001b84f) sp_fs_action_menu_list_gene_pane_t1

0x4ef6,	// (0x0001b867) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4ef6,	// (0x0001b867) sp_fs_action_menu_list_gene_pane

0x4f15,	// (0x0001b886) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4f15,	// (0x0001b886) popup_sp_fs_action_menu_bg_pane

0x4f23,	// (0x0001b894) sp_fs_action_menu_list_pane_ParamLimits

0x4f23,	// (0x0001b894) sp_fs_action_menu_list_pane

0xd61a,	// (0x00023f8b) sp_fs_scroll_pane_cp01_ParamLimits

0xd61a,	// (0x00023f8b) sp_fs_scroll_pane_cp01

0x1110,	// (0x00017a81) list_medium_line_plain_t2_t1

0x1110,	// (0x00017a81) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x000265c7) list_medium_line_plain_t2_t

0x1110,	// (0x00017a81) list_medium_line_plain_t3_t1

0x1110,	// (0x00017a81) list_medium_line_plain_t3_t2

0x1110,	// (0x00017a81) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00025c18) list_medium_line_plain_t3_t

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g2_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g2_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00025b58) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00025b58) list_medium_line_x2_t2_g2_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g2_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x00025bcd) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x00025bcd) list_medium_line_x2_t2_g2_t

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g2_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g2_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00025b58) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00025b58) list_medium_line_x2_t4_g2_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t2

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t3

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00025b66) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00025b66) list_medium_line_x2_t4_g2_t

0x0baf,	// (0x00017520) list_medium_line_t3_right_iconx2_g1

0x0baf,	// (0x00017520) list_medium_line_t3_right_iconx2_g2

0x0baf,	// (0x00017520) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00025d39) list_medium_line_t3_right_iconx2_g

0x1110,	// (0x00017a81) list_medium_line_t3_right_iconx2_t1

0x1110,	// (0x00017a81) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x000265c7) list_medium_line_t3_right_iconx2_t

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g1

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g2

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g3

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g4_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00025b5d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00025b5d) list_medium_line_x3_t4_g4_g

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t1

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t2

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t3

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00025b66) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00025b66) list_medium_line_x3_t4_g4_t

0xd640,	// (0x00023fb1) list_single_dyc_row_text_pane_t1_ParamLimits

0xd640,	// (0x00023fb1) list_single_dyc_row_text_pane_t1

0xd677,	// (0x00023fe8) list_single_dyc_row_text_pane_t2_ParamLimits

0xd677,	// (0x00023fe8) list_single_dyc_row_text_pane_t2

0x4f43,	// (0x0001b8b4) list_single_dyc_row_text_pane_t3_ParamLimits

0x4f43,	// (0x0001b8b4) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x000265df) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x000265df) list_single_dyc_row_text_pane_t

0x4f67,	// (0x0001b8d8) list_single_dyc_row_pane_g1_ParamLimits

0x4f67,	// (0x0001b8d8) list_single_dyc_row_pane_g1

0x4f73,	// (0x0001b8e4) list_single_dyc_row_pane_g2_ParamLimits

0x4f73,	// (0x0001b8e4) list_single_dyc_row_pane_g2

0x4f7f,	// (0x0001b8f0) list_single_dyc_row_pane_g3_ParamLimits

0x4f7f,	// (0x0001b8f0) list_single_dyc_row_pane_g3

0x4f8b,	// (0x0001b8fc) list_single_dyc_row_pane_g4_ParamLimits

0x4f8b,	// (0x0001b8fc) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x000265ec) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x000265ec) list_single_dyc_row_pane_g

0x4f97,	// (0x0001b908) list_single_dyc_row_text_pane_ParamLimits

0x4f97,	// (0x0001b908) list_single_dyc_row_text_pane

0x0140,	// (0x00016ab1) bg_sp_fs_scroll_pane

0x4fb6,	// (0x0001b927) thumb_sp_fs_scroll_pane

0x08a6,	// (0x00017217) list_medium_line_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_g1

0x0b81,	// (0x000174f2) list_medium_line_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t1

0x08a6,	// (0x00017217) list_medium_line_x2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_g1

0x08a6,	// (0x00017217) list_medium_line_x2_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00025b58) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00025b58) list_medium_line_x2_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t1

0x08a6,	// (0x00017217) list_medium_line_x3_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x3_g1

0x4fbf,	// (0x0001b930) list_medium_line_x3_g2_ParamLimits

0x4fbf,	// (0x0001b930) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x000265f5) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x000265f5) list_medium_line_x3_g

0x4fcd,	// (0x0001b93e) list_medium_line_x3_t1_ParamLimits

0x4fcd,	// (0x0001b93e) list_medium_line_x3_t1

0x4fe1,	// (0x0001b952) thumb_sp_fs_scroll_pane_g1

0x4fea,	// (0x0001b95b) thumb_sp_fs_scroll_pane_g2

0x4ff3,	// (0x0001b964) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x000265fa) thumb_sp_fs_scroll_pane_g

0x4fe1,	// (0x0001b952) bg_sp_fs_scroll_pane_g1

0x4fea,	// (0x0001b95b) bg_sp_fs_scroll_pane_g2

0x4ff3,	// (0x0001b964) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x000265fa) bg_sp_fs_scroll_pane_g

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g1

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g2

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g3

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g4_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00025b5d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00025b5d) list_medium_line_x2_t3_g4_g

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g4_t1

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g4_t2

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00025b51) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00025b51) list_medium_line_x2_t3_g4_t

0x08a6,	// (0x00017217) list_medium_line_g2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_g2_g1

0x08a6,	// (0x00017217) list_medium_line_g2_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00025b58) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00025b58) list_medium_line_g2_g

0x0b81,	// (0x000174f2) list_medium_line_g2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_g2_t1

0x08a6,	// (0x00017217) list_medium_line_t3_g2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t3_g2_g1

0x08a6,	// (0x00017217) list_medium_line_t3_g2_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00025b58) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00025b58) list_medium_line_t3_g2_g

0x0b81,	// (0x000174f2) list_medium_line_t3_g2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_g2_t1

0x0b81,	// (0x000174f2) list_medium_line_t3_g2_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_g2_t2

0x0b81,	// (0x000174f2) list_medium_line_t3_g2_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00025b51) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00025b51) list_medium_line_t3_g2_t

0x0baf,	// (0x00017520) list_medium_line_right_icon_g1

0x1110,	// (0x00017a81) list_medium_line_right_icon_t1

0x08a6,	// (0x00017217) list_medium_line_t2_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t2_g1

0x0b81,	// (0x000174f2) list_medium_line_t2_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t2_t1

0x0b81,	// (0x000174f2) list_medium_line_t2_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x00025bcd) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x00025bcd) list_medium_line_t2_t

0x08a6,	// (0x00017217) list_medium_line_t3_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t3_g1

0x0b81,	// (0x000174f2) list_medium_line_t3_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_t1

0x0b81,	// (0x000174f2) list_medium_line_t3_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_t2

0x0b81,	// (0x000174f2) list_medium_line_t3_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00025b51) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00025b51) list_medium_line_t3_t

0x08a6,	// (0x00017217) list_medium_line_g3_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_g3_g1

0x08a6,	// (0x00017217) list_medium_line_g3_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_g3_g2

0x08a6,	// (0x00017217) list_medium_line_g3_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00025b4a) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00025b4a) list_medium_line_g3_g

0x0b81,	// (0x000174f2) list_medium_line_g3_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_g3_t1

0x08a6,	// (0x00017217) list_medium_line_t2_g3_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t2_g3_g1

0x08a6,	// (0x00017217) list_medium_line_t2_g3_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t2_g3_g2

0x08a6,	// (0x00017217) list_medium_line_t2_g3_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00025b4a) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00025b4a) list_medium_line_t2_g3_g

0x0b81,	// (0x000174f2) list_medium_line_t2_g3_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t2_g3_t1

0x0b81,	// (0x000174f2) list_medium_line_t2_g3_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x00025bcd) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x00025bcd) list_medium_line_t2_g3_t

0x08a6,	// (0x00017217) list_medium_line_t3_g3_g1_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t3_g3_g1

0x08a6,	// (0x00017217) list_medium_line_t3_g3_g2_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t3_g3_g2

0x08a6,	// (0x00017217) list_medium_line_t3_g3_g3_ParamLimits

0x08a6,	// (0x00017217) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00025b4a) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00025b4a) list_medium_line_t3_g3_g

0x0b81,	// (0x000174f2) list_medium_line_t3_g3_t1_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_g3_t1

0x0b81,	// (0x000174f2) list_medium_line_t3_g3_t2_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_g3_t2

0x0b81,	// (0x000174f2) list_medium_line_t3_g3_t3_ParamLimits

0x0b81,	// (0x000174f2) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00025b51) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00025b51) list_medium_line_t3_g3_t

0x0baf,	// (0x00017520) list_medium_line_right_iconx2_g1

0x0baf,	// (0x00017520) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00025d34) list_medium_line_right_iconx2_g

0x1110,	// (0x00017a81) list_medium_line_right_iconx2_t1

0x0baf,	// (0x00017520) list_medium_line_t2_right_iconx2_g1

0x0baf,	// (0x00017520) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00025d34) list_medium_line_t2_right_iconx2_g

0x1110,	// (0x00017a81) list_medium_line_t2_right_iconx2_t1

0x1110,	// (0x00017a81) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x000265c7) list_medium_line_t2_right_iconx2_t

0x1110,	// (0x00017a81) list_medium_line_x4_t4_t1

0x1110,	// (0x00017a81) list_medium_line_x4_t4_t2

0x1110,	// (0x00017a81) list_medium_line_x4_t4_t3

0x1110,	// (0x00017a81) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00025c1f) list_medium_line_x4_t4_t

0xd7c4,	// (0x00024135) tport_appsw_pane_ParamLimits

0xd7c4,	// (0x00024135) tport_appsw_pane

0xd7d2,	// (0x00024143) tport_contact_pane_ParamLimits

0xd7d2,	// (0x00024143) tport_contact_pane

0xd7e2,	// (0x00024153) tport_listscroll_pane_ParamLimits

0xd7e2,	// (0x00024153) tport_listscroll_pane

0xd7f2,	// (0x00024163) cell_tport_appsw_pane_ParamLimits

0xd7f2,	// (0x00024163) cell_tport_appsw_pane

0x08b4,	// (0x00017225) tport_appsw_pane_g1_ParamLimits

0x08b4,	// (0x00017225) tport_appsw_pane_g1

0x4ffc,	// (0x0001b96d) tport_contact_pane_g1

0x5005,	// (0x0001b976) tport_contact_pane_t1

0x5013,	// (0x0001b984) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x00026601) tport_contact_pane_t

0x5021,	// (0x0001b992) list_tport_pane

0x502a,	// (0x0001b99b) scroll_pane_cp_030

0xd825,	// (0x00024196) cell_tport_appsw_pane_g1

0xd835,	// (0x000241a6) cell_tport_appsw_pane_t1

0xd843,	// (0x000241b4) grid_highlight_pane_cp019

0xd84b,	// (0x000241bc) list_tport_double_graphic_pane_ParamLimits

0xd84b,	// (0x000241bc) list_tport_double_graphic_pane

0x01af,	// (0x00016b20) list_highlight_pane_cp023_ParamLimits

0x01af,	// (0x00016b20) list_highlight_pane_cp023

0xd85c,	// (0x000241cd) list_tport_double_graphic_pane_g1_ParamLimits

0xd85c,	// (0x000241cd) list_tport_double_graphic_pane_g1

0xd869,	// (0x000241da) list_tport_double_graphic_pane_t1_ParamLimits

0xd869,	// (0x000241da) list_tport_double_graphic_pane_t1

0xd87e,	// (0x000241ef) list_tport_double_graphic_pane_t2_ParamLimits

0xd87e,	// (0x000241ef) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x0002660d) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x0002660d) list_tport_double_graphic_pane_t

0x0140,	// (0x00016ab1) main_cale_note_pane

0x7e49,	// (0x0001e7ba) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7e49,	// (0x0001e7ba) cell_vitu2_function_top_wide_pane_cp01

0xd0f3,	// (0x00023a64) wait_bar_pane_cp05_ParamLimits

0x01af,	// (0x00016b20) listscroll_cmail_pane

0x503f,	// (0x0001b9b0) list_cmail_pane

0xd890,	// (0x00024201) list_cmail_body_pane

0xd8b8,	// (0x00024229) list_single_cmail_header_caption_pane

0xd8e7,	// (0x00024258) list_single_cmail_header_detail_pane_ParamLimits

0xd8e7,	// (0x00024258) list_single_cmail_header_detail_pane

0x504f,	// (0x0001b9c0) list_single_cmail_header_caption_pane_t1

0xd920,	// (0x00024291) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd920,	// (0x00024291) list_single_cmail_header_detail_pane_g1

0x5066,	// (0x0001b9d7) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5066,	// (0x0001b9d7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x00026612) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x00026612) list_single_cmail_header_detail_pane_g

0x507f,	// (0x0001b9f0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x507f,	// (0x0001b9f0) list_single_cmail_header_detail_pane_t1

0x50df,	// (0x0001ba50) list_single_cmail_header_editor_pane_bg_ParamLimits

0x50df,	// (0x0001ba50) list_single_cmail_header_editor_pane_bg

0x4a26,	// (0x0001b397) list_cmail_body_pane_g1

0x50f6,	// (0x0001ba67) list_cmail_body_pane_t1

0x3c2d,	// (0x0001a59e) list_single_cmail_header_editor_pane_bg_g1

0x0dc0,	// (0x00017731) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3c3d,	// (0x0001a5ae) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3c35,	// (0x0001a5a6) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3ec1,	// (0x0001a832) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3c5d,	// (0x0001a5ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3c4d,	// (0x0001a5be) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3c55,	// (0x0001a5c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0da0,	// (0x00017711) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd936,	// (0x000242a7) calenote_gesture_pane_ParamLimits

0xd936,	// (0x000242a7) calenote_gesture_pane

0xd950,	// (0x000242c1) calenote_window_pane_ParamLimits

0xd950,	// (0x000242c1) calenote_window_pane

0x5104,	// (0x0001ba75) popup_note_window_cp01

0xd968,	// (0x000242d9) calenote_swipe_1_pane_ParamLimits

0xd968,	// (0x000242d9) calenote_swipe_1_pane

0xd4b3,	// (0x00023e24) calenote_swipe_2_pane_ParamLimits

0xd4b3,	// (0x00023e24) calenote_swipe_2_pane

0x4d78,	// (0x0001b6e9) calenote_swipe_1_pane_g1_ParamLimits

0x4d78,	// (0x0001b6e9) calenote_swipe_1_pane_g1

0x4d85,	// (0x0001b6f6) calenote_swipe_1_pane_g2_ParamLimits

0x4d85,	// (0x0001b6f6) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x000265af) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x000265af) calenote_swipe_1_pane_g

0x5116,	// (0x0001ba87) calenote_swipe_1_pane_t1_ParamLimits

0x5116,	// (0x0001ba87) calenote_swipe_1_pane_t1

0x4d78,	// (0x0001b6e9) calenote_swipe_2_pane_g1_ParamLimits

0x4d78,	// (0x0001b6e9) calenote_swipe_2_pane_g1

0x5135,	// (0x0001baa6) calenote_swipe_2_pane_g2_ParamLimits

0x5135,	// (0x0001baa6) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x0002661e) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x0002661e) calenote_swipe_2_pane_g

0x5141,	// (0x0001bab2) calenote_swipe_2_pane_t1_ParamLimits

0x5141,	// (0x0001bab2) calenote_swipe_2_pane_t1

0x0140,	// (0x00016ab1) main_mup_navstr_pane

0xb370,	// (0x00021ce1) main_mup3_pane_t7_ParamLimits

0xb370,	// (0x00021ce1) main_mup3_pane_t7

0x767b,	// (0x0001dfec) main_mp4_pane_g6_ParamLimits

0x767b,	// (0x0001dfec) main_mp4_pane_g6

0x798c,	// (0x0001e2fd) main_image3_pane_t4_ParamLimits

0x798c,	// (0x0001e2fd) main_image3_pane_t4

0xd97b,	// (0x000242ec) popup_navstr_preview_pane_ParamLimits

0xd97b,	// (0x000242ec) popup_navstr_preview_pane

0xd987,	// (0x000242f8) scroll_navstr_pane_ParamLimits

0xd987,	// (0x000242f8) scroll_navstr_pane

0x0140,	// (0x00016ab1) bg_popup_preview_window_pane_cp04

0x5168,	// (0x0001bad9) popup_navstr_preview_pane_t1

0xd993,	// (0x00024304) scroll_navstr_pane_g1_ParamLimits

0xd993,	// (0x00024304) scroll_navstr_pane_g1

0xd9a0,	// (0x00024311) scroll_navstr_pane_t1_ParamLimits

0xd9a0,	// (0x00024311) scroll_navstr_pane_t1

0x510d,	// (0x0001ba7e) bg_button_pane_cp014

0x510d,	// (0x0001ba7e) bg_button_pane_cp030

0xd3c6,	// (0x00023d37) list_double_fisheye_pane_g4_ParamLimits

0xd3c6,	// (0x00023d37) list_double_fisheye_pane_g4

0xd3d2,	// (0x00023d43) list_double_fisheye_pane_g5_ParamLimits

0xd3d2,	// (0x00023d43) list_double_fisheye_pane_g5

0x5033,	// (0x0001b9a4) sp_fs_scroll_pane_cp03

0x4e8f,	// (0x0001b800) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4e9b,	// (0x0001b80c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x000265cc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd598,	// (0x00023f09) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x5047,	// (0x0001b9b8) sp_fs_scroll_pane_cp02

0x0ab7,	// (0x00017428) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0ab7,	// (0x00017428) popup_sp_fs_calendar_preview_list_single_pane

0x0140,	// (0x00016ab1) main_cam6_pano_pane

0x71e0,	// (0x0001db51) main_mup3_pane_ParamLimits

0x0140,	// (0x00016ab1) main_phacti_pane

0xcfc8,	// (0x00023939) bg_button_pane_cp11

0xcfe0,	// (0x00023951) main_mobtv_info_pane_g2_ParamLimits

0xcfe0,	// (0x00023951) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x0002652c) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x0002652c) main_mobtv_info_pane_g

0xd192,	// (0x00023b03) sc_clock_pane_t5_ParamLimits

0xd192,	// (0x00023b03) sc_clock_pane_t5

0xd233,	// (0x00023ba4) main_radioblah_pane_g1_ParamLimits

0x4cc4,	// (0x0001b635) main_radioblah_pane_t3_ParamLimits

0x4cc4,	// (0x0001b635) main_radioblah_pane_t3

0x4cdc,	// (0x0001b64d) main_radioblah_pane_t4_ParamLimits

0x4cdc,	// (0x0001b64d) main_radioblah_pane_t4

0xd251,	// (0x00023bc2) main_radioblah_text_pane_ParamLimits

0xd251,	// (0x00023bc2) main_radioblah_text_pane

0xd25e,	// (0x00023bcf) main_radioblah_info_pane_g1_ParamLimits

0xd2f3,	// (0x00023c64) main_radioblah_info_pane_t4_ParamLimits

0xd2f3,	// (0x00023c64) main_radioblah_info_pane_t4

0x01af,	// (0x00016b20) main_sp_fs_calendar_pane

0xd9b2,	// (0x00024323) main_phacti_pane_g1

0xd9ba,	// (0x0002432b) phacti_note_pane_ParamLimits

0xd9ba,	// (0x0002432b) phacti_note_pane

0x517f,	// (0x0001baf0) phacti_term_pane_ParamLimits

0x517f,	// (0x0001baf0) phacti_term_pane

0x5194,	// (0x0001bb05) phacti_note_pane_t1_ParamLimits

0x5194,	// (0x0001bb05) phacti_note_pane_t1

0x51ab,	// (0x0001bb1c) phacti_term_pane_g1

0x51b3,	// (0x0001bb24) phacti_term_pane_t1_ParamLimits

0x51b3,	// (0x0001bb24) phacti_term_pane_t1

0x51dd,	// (0x0001bb4e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x51e5,	// (0x0001bb56) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x00026628) popup_sp_fs_calendar_preview_list_single_pane_g

0x51ed,	// (0x0001bb5e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x51ed,	// (0x0001bb5e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5203,	// (0x0001bb74) aid_popup_sp_fs_bg_corner_pane

0x0baf,	// (0x00017520) popup_sp_fs_calendar_preview_bg_pane_g1

0x0140,	// (0x00016ab1) popup_sp_fs_calendar_preview_bg_pane

0x520b,	// (0x0001bb7c) popup_sp_fs_calendar_preview_list_pane

0x1742,	// (0x000180b3) bg_main_sp_fs_cale_pane_ParamLimits

0x1742,	// (0x000180b3) bg_main_sp_fs_cale_pane

0x521c,	// (0x0001bb8d) listscroll_cale_mrui_pane_ParamLimits

0x521c,	// (0x0001bb8d) listscroll_cale_mrui_pane

0x5231,	// (0x0001bba2) listscroll_sp_fs_schedule_track_pane

0x523a,	// (0x0001bbab) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x523a,	// (0x0001bbab) main_sp_fs_ctrlbar_pane_cp01

0x524d,	// (0x0001bbbe) main_sp_fs_ribbon_pane

0x5255,	// (0x0001bbc6) popup_sp_fs_cale_preview_window

0xda1d,	// (0x0002438e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xda1d,	// (0x0002438e) list_single_sp_fs_schedule_track_pane

0x0898,	// (0x00017209) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0898,	// (0x00017209) bg_sp_fs_highlight_list_pane_cp03

0xda43,	// (0x000243b4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xda43,	// (0x000243b4) list_single_sp_fs_schedule_track_pane_g1

0xda4f,	// (0x000243c0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xda4f,	// (0x000243c0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x0002662d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x0002662d) list_single_sp_fs_schedule_track_pane_g

0xda5b,	// (0x000243cc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xda5b,	// (0x000243cc) list_single_sp_fs_schedule_track_pane_t1

0xda73,	// (0x000243e4) sp_fs_schedule_track_pane_ParamLimits

0xda73,	// (0x000243e4) sp_fs_schedule_track_pane

0x5267,	// (0x0001bbd8) sp_fs_schedule_track_pane_g1

0x526f,	// (0x0001bbe0) sp_fs_schedule_track_pane_g2

0x5277,	// (0x0001bbe8) sp_fs_schedule_track_pane_g3

0x527f,	// (0x0001bbf0) sp_fs_schedule_track_pane_g4

0x5287,	// (0x0001bbf8) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x00026632) sp_fs_schedule_track_pane_g

0x3c2d,	// (0x0001a59e) bg_sp_fs_schedule_viewer_highlight_g1

0x0dc0,	// (0x00017731) bg_sp_fs_schedule_viewer_highlight_g2

0x3c35,	// (0x0001a5a6) bg_sp_fs_schedule_viewer_highlight_g3

0x3c3d,	// (0x0001a5ae) bg_sp_fs_schedule_viewer_highlight_g4

0x3ec1,	// (0x0001a832) bg_sp_fs_schedule_viewer_highlight_g5

0x3c4d,	// (0x0001a5be) bg_sp_fs_schedule_viewer_highlight_g6

0x3c55,	// (0x0001a5c6) bg_sp_fs_schedule_viewer_highlight_g7

0x3c5d,	// (0x0001a5ce) bg_sp_fs_schedule_viewer_highlight_g8

0x0da0,	// (0x00017711) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x0002663d) bg_sp_fs_schedule_viewer_highlight_g

0x0140,	// (0x00016ab1) bg_main_sp_fs_ribbon_pane

0xda83,	// (0x000243f4) main_sp_fs_ribbon_pane_g1

0x528f,	// (0x0001bc00) main_sp_fs_ribbon_pane_t1

0xda8c,	// (0x000243fd) main_sp_fs_ribbon_pane_t2

0x529e,	// (0x0001bc0f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x00026650) main_sp_fs_ribbon_pane_t

0x52ad,	// (0x0001bc1e) main_sp_fs_ribbon_scheduler_pane

0x52b5,	// (0x0001bc26) bg_main_sp_fs_ribbon_pane_g1

0x52be,	// (0x0001bc2f) bg_main_sp_fs_ribbon_pane_g2

0x52c7,	// (0x0001bc38) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x00026657) bg_main_sp_fs_ribbon_pane_g

0x52cf,	// (0x0001bc40) main_sp_fs_ribbon_scheduler_pane_g1

0x52d8,	// (0x0001bc49) main_sp_fs_ribbon_scheduler_pane_g2

0x52e1,	// (0x0001bc52) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x0002665e) main_sp_fs_ribbon_scheduler_pane_g

0x52ea,	// (0x0001bc5b) list_cale_mrui_pane

0xda9b,	// (0x0002440c) sp_fs_scroll_pane_cp07_ParamLimits

0xda9b,	// (0x0002440c) sp_fs_scroll_pane_cp07

0xdab7,	// (0x00024428) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdab7,	// (0x00024428) bg_sp_fs_schedule_viewer_highlight

0x52f7,	// (0x0001bc68) list_single_sp_fs_schedule_track_pane_cp01

0x52ff,	// (0x0001bc70) list_sp_fs_schedule_track_pane

0x5307,	// (0x0001bc78) sp_fs_scroll_pane_cp06_ParamLimits

0x5307,	// (0x0001bc78) sp_fs_scroll_pane_cp06

0x0baf,	// (0x00017520) bgmain_sp_fs_calendar_pane_g1

0xdac4,	// (0x00024435) list_single_cale_mrui_pane_ParamLimits

0xdac4,	// (0x00024435) list_single_cale_mrui_pane

0x5319,	// (0x0001bc8a) list_single_cale_mrui_row_pane_ParamLimits

0x5319,	// (0x0001bc8a) list_single_cale_mrui_row_pane

0x5326,	// (0x0001bc97) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5326,	// (0x0001bc97) list_single_cale_mrui_row_pane_g1

0x536b,	// (0x0001bcdc) list_single_cale_mrui_row_pane_t1_ParamLimits

0x536b,	// (0x0001bcdc) list_single_cale_mrui_row_pane_t1

0xdaf2,	// (0x00024463) list_single_cale_mrui_row_pane_t2_ParamLimits

0xdaf2,	// (0x00024463) list_single_cale_mrui_row_pane_t2

0x537d,	// (0x0001bcee) list_single_cale_mrui_row_pane_t3_ParamLimits

0x537d,	// (0x0001bcee) list_single_cale_mrui_row_pane_t3

0x53ac,	// (0x0001bd1d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x53ac,	// (0x0001bd1d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x0002666c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x0002666c) list_single_cale_mrui_row_pane_t

0xdb58,	// (0x000244c9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xdb58,	// (0x000244c9) list_single_cmail_header_editor_pane_bg_cp01

0xdb78,	// (0x000244e9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xdb78,	// (0x000244e9) list_single_cmail_header_editor_pane_bg_cp02

0xdb94,	// (0x00024505) main_radioblah_text_pane_t1_ParamLimits

0xdb94,	// (0x00024505) main_radioblah_text_pane_t1

0x53db,	// (0x0001bd4c) cam6_indi_pane_cp01

0x53e3,	// (0x0001bd54) cam6_mode_pane_cp01

0x53eb,	// (0x0001bd5c) cam6_pano_pane

0x53f4,	// (0x0001bd65) cam6_zoom_pane_cp01

0x53fc,	// (0x0001bd6d) cam6_pano_image_pane

0x5407,	// (0x0001bd78) cam6_pano_pane_g1

0x4a26,	// (0x0001b397) cam6_pano_pane_g2

0x5410,	// (0x0001bd81) cam6_pano_pane_g3

0x5419,	// (0x0001bd8a) cam6_pano_pane_g4

0x34ef,	// (0x00019e60) cam6_pano_pane_g5

0x5422,	// (0x0001bd93) cam6_pano_pane_g6

0x542c,	// (0x0001bd9d) cam6_pano_pane_g7

0x5434,	// (0x0001bda5) cam6_pano_pane_g8

0x543d,	// (0x0001bdae) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x00026675) cam6_pano_pane_g

0x0140,	// (0x00016ab1) main_browser_tag_pane

0x5160,	// (0x0001bad1) grid_navstr_albumart_pane

0x5448,	// (0x0001bdb9) cell_navstr_albumart_pane_ParamLimits

0x5448,	// (0x0001bdb9) cell_navstr_albumart_pane

0x5468,	// (0x0001bdd9) cell_navstr_albumart_pane_g1

0x288a,	// (0x000191fb) cell_navstr_albumart_pane_g2

0x289a,	// (0x0001920b) cell_navstr_albumart_pane_g3

0x2892,	// (0x00019203) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x00026688) cell_navstr_albumart_pane_g

0xdbaf,	// (0x00024520) bt_list_pane_ParamLimits

0xdbaf,	// (0x00024520) bt_list_pane

0xdbd0,	// (0x00024541) bt_list_pane_t1

0xdbdf,	// (0x00024550) bt_list_pane_t2

0x0001,

0xfd20,	// (0x00026691) bt_list_pane_t

0x0140,	// (0x00016ab1) main_cale_prevew_pane

0xdbee,	// (0x0002455f) popup_cale_preview_window_ParamLimits

0xdbee,	// (0x0002455f) popup_cale_preview_window

0x01af,	// (0x00016b20) bg_popup_preview_window_pane_cp05_ParamLimits

0x01af,	// (0x00016b20) bg_popup_preview_window_pane_cp05

0x5470,	// (0x0001bde1) list_cale_preview_pane_ParamLimits

0x5470,	// (0x0001bde1) list_cale_preview_pane

0xdc07,	// (0x00024578) list_double_cale_preview_pane_ParamLimits

0xdc07,	// (0x00024578) list_double_cale_preview_pane

0xdc19,	// (0x0002458a) list_single_cale_preview_pane_ParamLimits

0xdc19,	// (0x0002458a) list_single_cale_preview_pane

0xdc2d,	// (0x0002459e) list_single_cale_preview_pane_g1

0xdc35,	// (0x000245a6) list_single_cale_preview_pane_t1_ParamLimits

0xdc35,	// (0x000245a6) list_single_cale_preview_pane_t1

0xdc4a,	// (0x000245bb) list_double_cale_preview_pane_g1

0xdc52,	// (0x000245c3) list_double_cale_preview_pane_t1_ParamLimits

0xdc52,	// (0x000245c3) list_double_cale_preview_pane_t1

0xdc67,	// (0x000245d8) list_double_cale_preview_pane_t2_ParamLimits

0xdc67,	// (0x000245d8) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x00026696) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x00026696) list_double_cale_preview_pane_t

0x0140,	// (0x00016ab1) main_ezdial_pane

0x01af,	// (0x00016b20) main_sp_fs_email_pane_ParamLimits

0xd511,	// (0x00023e82) cmail_ddmenu_btn01_pane_ParamLimits

0xd511,	// (0x00023e82) cmail_ddmenu_btn01_pane

0xd526,	// (0x00023e97) cmail_ddmenu_btn02_pane_ParamLimits

0xd526,	// (0x00023e97) cmail_ddmenu_btn02_pane

0xd53e,	// (0x00023eaf) cmail_ddmenu_btn03_pane_ParamLimits

0xd53e,	// (0x00023eaf) cmail_ddmenu_btn03_pane

0xd5d3,	// (0x00023f44) main_sp_fs_ctrlbar_pane_ParamLimits

0xd5e9,	// (0x00023f5a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd890,	// (0x00024201) list_cmail_body_pane_ParamLimits

0x505d,	// (0x0001b9ce) bg_button_pane_cp12

0x5072,	// (0x0001b9e3) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5072,	// (0x0001b9e3) list_single_cmail_header_detail_pane_g3

0x50bb,	// (0x0001ba2c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x50bb,	// (0x0001ba2c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x00026619) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x00026619) list_single_cmail_header_detail_pane_t

0x51c8,	// (0x0001bb39) phacti_term_pane_t2_ParamLimits

0x51c8,	// (0x0001bb39) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x00026623) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x00026623) phacti_term_pane_t

0x547c,	// (0x0001bded) aid_size_list_single_double

0xdc7f,	// (0x000245f0) popup_ezdial_listscroll_window

0xdca3,	// (0x00024614) popup_number_entry_window_cp01

0x0b6f,	// (0x000174e0) bg_popup_call_pane_cp09

0x5488,	// (0x0001bdf9) ezdial_list_pane

0x5490,	// (0x0001be01) scroll_pane_cp23

0x2ba3,	// (0x00019514) bg_button_pane_cp028_ParamLimits

0x2ba3,	// (0x00019514) bg_button_pane_cp028

0xdcb1,	// (0x00024622) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdcb1,	// (0x00024622) cmail_ddmenu_btn01_pane_g1

0xdcc1,	// (0x00024632) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdcc1,	// (0x00024632) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x0002669b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x0002669b) cmail_ddmenu_btn01_pane_g

0x5498,	// (0x0001be09) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5498,	// (0x0001be09) cmail_ddmenu_btn01_pane_t1

0x1742,	// (0x000180b3) bg_button_pane_cp029_ParamLimits

0x1742,	// (0x000180b3) bg_button_pane_cp029

0xdcc1,	// (0x00024632) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdcc1,	// (0x00024632) cmail_ddmenu_btn02_pane_g1

0xdcd9,	// (0x0002464a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdcd9,	// (0x0002464a) cmail_ddmenu_btn02_pane_t1

0x0898,	// (0x00017209) bg_button_pane_cp031_ParamLimits

0x0898,	// (0x00017209) bg_button_pane_cp031

0xdcc1,	// (0x00024632) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdcc1,	// (0x00024632) cmail_ddmenu_btn03_pane_g1

0xdcd9,	// (0x0002464a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdcd9,	// (0x0002464a) cmail_ddmenu_btn03_pane_t1

0xb979,	// (0x000222ea) cell_dialer2_keypad_pane_t1_ParamLimits

0xb993,	// (0x00022304) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb993,	// (0x00022304) cell_dialer2_keypad_pane_t1_copy1

0xce09,	// (0x0002377a) ncimui_group_button_pane

0x01af,	// (0x00016b20) main_sp_fs_calendar_pane_ParamLimits

0xd8b8,	// (0x00024229) list_single_cmail_header_caption_pane_ParamLimits

0x5213,	// (0x0001bb84) aid_recal_txt_sm_pane

0x0140,	// (0x00016ab1) mian_recal_day_pane

0x5255,	// (0x0001bbc6) popup_sp_fs_cale_preview_window_ParamLimits

0x54ad,	// (0x0001be1e) list_recal_day_pane

0x54ef,	// (0x0001be60) list_single_recal_day_pane_ParamLimits

0x54ef,	// (0x0001be60) list_single_recal_day_pane

0x5501,	// (0x0001be72) list_single_recal_day_pane_g1_ParamLimits

0x5501,	// (0x0001be72) list_single_recal_day_pane_g1

0x550d,	// (0x0001be7e) list_single_recal_day_pane_g2_ParamLimits

0x550d,	// (0x0001be7e) list_single_recal_day_pane_g2

0x5519,	// (0x0001be8a) list_single_recal_day_pane_g3_ParamLimits

0x5519,	// (0x0001be8a) list_single_recal_day_pane_g3

0xdcfd,	// (0x0002466e) list_single_recal_day_pane_g4_ParamLimits

0xdcfd,	// (0x0002466e) list_single_recal_day_pane_g4

0x5525,	// (0x0001be96) list_single_recal_day_pane_g5_ParamLimits

0x5525,	// (0x0001be96) list_single_recal_day_pane_g5

0x5531,	// (0x0001bea2) list_single_recal_day_pane_g6_ParamLimits

0x5531,	// (0x0001bea2) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x000266aa) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x000266aa) list_single_recal_day_pane_g

0x5545,	// (0x0001beb6) list_single_recal_day_pane_t1

0x5557,	// (0x0001bec8) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x000266b5) list_single_recal_day_pane_t

0xdd15,	// (0x00024686) ncimui_query_button_pane_ParamLimits

0xdd15,	// (0x00024686) ncimui_query_button_pane

0xdd25,	// (0x00024696) ncimui_query_button_pane_t1_ParamLimits

0xdd25,	// (0x00024696) ncimui_query_button_pane_t1

0x5569,	// (0x0001beda) ncimui_query_button_pane_t2_ParamLimits

0x5569,	// (0x0001beda) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x000266ba) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x000266ba) ncimui_query_button_pane_t

0xdd38,	// (0x000246a9) query_button_pane_ParamLimits

0xdd38,	// (0x000246a9) query_button_pane

0x0140,	// (0x00016ab1) bg_button_pane_cp0028

0x557c,	// (0x0001beed) query_button_pane_t1

0x71fc,	// (0x0001db6d) main_tport_pane_ParamLimits

0xd79a,	// (0x0002410b) bg_popup_window_pane_cp01_ParamLimits

0xd79a,	// (0x0002410b) bg_popup_window_pane_cp01

0xd7a8,	// (0x00024119) heading_pane_cp08_ParamLimits

0xd7a8,	// (0x00024119) heading_pane_cp08

0xd7b6,	// (0x00024127) heading_pane_cp07_ParamLimits

0xd7b6,	// (0x00024127) heading_pane_cp07

0xd825,	// (0x00024196) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x00026606) cell_tport_appsw_pane_g

0xa245,	// (0x00020bb6) input_candi_list_open_g1

0x0fb1,	// (0x00017922) list_cale_time_pane_g6_ParamLimits

0x0fb1,	// (0x00017922) list_cale_time_pane_g6

0xadfb,	// (0x0002176c) aid_size_touch_calib_1_ParamLimits

0xadfb,	// (0x0002176c) aid_size_touch_calib_1

0xae07,	// (0x00021778) aid_size_touch_calib_2_ParamLimits

0xae07,	// (0x00021778) aid_size_touch_calib_2

0xae15,	// (0x00021786) aid_size_touch_calib_3_ParamLimits

0xae15,	// (0x00021786) aid_size_touch_calib_3

0xae25,	// (0x00021796) aid_size_touch_calib_4_ParamLimits

0xae25,	// (0x00021796) aid_size_touch_calib_4

0xae33,	// (0x000217a4) main_touch_calib_button_group_pane_ParamLimits

0xae33,	// (0x000217a4) main_touch_calib_button_group_pane

0xae41,	// (0x000217b2) main_touch_calib_pane_g1_ParamLimits

0xae4d,	// (0x000217be) main_touch_calib_pane_g2_ParamLimits

0xae59,	// (0x000217ca) main_touch_calib_pane_g3_ParamLimits

0xae65,	// (0x000217d6) main_touch_calib_pane_g4_ParamLimits

0xf6d7,	// (0x00026048) main_touch_calib_pane_g_ParamLimits

0xae71,	// (0x000217e2) main_touch_calib_pane_t1_ParamLimits

0xae8a,	// (0x000217fb) main_touch_calib_pane_t2_ParamLimits

0xaea3,	// (0x00021814) main_touch_calib_pane_t3_ParamLimits

0xaeb9,	// (0x0002182a) main_touch_calib_pane_t4_ParamLimits

0xaecf,	// (0x00021840) main_touch_calib_pane_t5_ParamLimits

0xf6e0,	// (0x00026051) main_touch_calib_pane_t_ParamLimits

0x32b5,	// (0x00019c26) list_single_fp_cale_pane_g3_ParamLimits

0x32b5,	// (0x00019c26) list_single_fp_cale_pane_g3

0x71e0,	// (0x0001db51) bg_button_pane_cp012_ParamLimits

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp03_ParamLimits

0x8048,	// (0x0001e9b9) cell_vitu2_function_top_pane_g1_ParamLimits

0x71e0,	// (0x0001db51) bg_vkb2_func_pane_cp04_ParamLimits

0xcd91,	// (0x00023702) main_ncimui_button_group_pane_ParamLimits

0xcd91,	// (0x00023702) main_ncimui_button_group_pane

0xcdf7,	// (0x00023768) main_ncimui_pane_t3_ParamLimits

0xcdf7,	// (0x00023768) main_ncimui_pane_t3

0x5176,	// (0x0001bae7) phacti_button_group_pane

0x547c,	// (0x0001bded) aid_size_list_single_double_ParamLimits

0xdc7f,	// (0x000245f0) popup_ezdial_listscroll_window_ParamLimits

0xdca3,	// (0x00024614) popup_number_entry_window_cp01_ParamLimits

0xdd45,	// (0x000246b6) phacti_button_pane_ParamLimits

0xdd45,	// (0x000246b6) phacti_button_pane

0x0140,	// (0x00016ab1) bg_button_pane_cp14

0x558a,	// (0x0001befb) phacti_button_pane_t1

0xdd56,	// (0x000246c7) main_touch_calib_button_pane_ParamLimits

0xdd56,	// (0x000246c7) main_touch_calib_button_pane

0x093a,	// (0x000172ab) bg_button_pane_cp18_ParamLimits

0x093a,	// (0x000172ab) bg_button_pane_cp18

0x5598,	// (0x0001bf09) main_touch_calib_button_pane_t1_ParamLimits

0x5598,	// (0x0001bf09) main_touch_calib_button_pane_t1

0x55ae,	// (0x0001bf1f) main_touch_calib_button_pane_t2_ParamLimits

0x55ae,	// (0x0001bf1f) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x000266bf) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x000266bf) main_touch_calib_button_pane_t

0x0140,	// (0x00016ab1) cell_ncimui_button_pane

0x0140,	// (0x00016ab1) bg_button_pane_cp032

0x55cc,	// (0x0001bf3d) cell_ncimui_button_pane_t1

0x789f,	// (0x0001e210) image3_infobar_pane_ParamLimits

0x789f,	// (0x0001e210) image3_infobar_pane

0xd1b4,	// (0x00023b25) fs_bigclock_status_pane_ParamLimits

0xd1b4,	// (0x00023b25) fs_bigclock_status_pane

0xd1c1,	// (0x00023b32) main_fs_bigclock_clock_pane_ParamLimits

0xd1c1,	// (0x00023b32) main_fs_bigclock_clock_pane

0xd1d5,	// (0x00023b46) main_fs_bigclock_indi_pane_ParamLimits

0xd1d5,	// (0x00023b46) main_fs_bigclock_indi_pane

0xd1fd,	// (0x00023b6e) main_fs_bigclock_swipe_pane_ParamLimits

0xd1fd,	// (0x00023b6e) main_fs_bigclock_swipe_pane

0x0140,	// (0x00016ab1) main_fs_clock_dumped_data

0x4b33,	// (0x0001b4a4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4b33,	// (0x0001b4a4) list_single_fs_bigclock_indicator_pane_g1

0x4b4f,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4b4f,	// (0x0001b4c0) list_single_fs_bigclock_indicator_pane_g2

0x4b69,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4b69,	// (0x0001b4da) list_single_fs_bigclock_indicator_pane_g3

0x4b83,	// (0x0001b4f4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4b83,	// (0x0001b4f4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x00026560) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x00026560) list_single_fs_bigclock_indicator_pane_g

0x4bae,	// (0x0001b51f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4bae,	// (0x0001b51f) list_single_fs_bigclock_indicator_pane_t1

0x4bd6,	// (0x0001b547) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4bd6,	// (0x0001b547) list_single_fs_bigclock_indicator_pane_t2

0x4bfe,	// (0x0001b56f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4bfe,	// (0x0001b56f) list_single_fs_bigclock_indicator_pane_t3

0x4c26,	// (0x0001b597) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4c26,	// (0x0001b597) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x0002656b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x0002656b) list_single_fs_bigclock_indicator_pane_t

0x55da,	// (0x0001bf4b) image3_infobar_fav_pane_ParamLimits

0x55da,	// (0x0001bf4b) image3_infobar_fav_pane

0x55ea,	// (0x0001bf5b) image3_infobar_loc_pane_ParamLimits

0x55ea,	// (0x0001bf5b) image3_infobar_loc_pane

0x55fe,	// (0x0001bf6f) image3_infobar_time_pane_ParamLimits

0x55fe,	// (0x0001bf6f) image3_infobar_time_pane

0x0baf,	// (0x00017520) image3_infobar_time_pane_g1

0x560e,	// (0x0001bf7f) image3_infobar_time_pane_t1

0x0baf,	// (0x00017520) image3_infobar_loc_pane_g1

0x561c,	// (0x0001bf8d) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x000266c4) image3_infobar_loc_pane_g

0x5624,	// (0x0001bf95) image3_infobar_loc_pane_t1

0x0baf,	// (0x00017520) image3_infobar_fav_pane_g1

0x5632,	// (0x0001bfa3) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x000266c9) image3_infobar_fav_pane_g

0x563a,	// (0x0001bfab) fs_bigclock_status_battery_pane

0x5643,	// (0x0001bfb4) fs_bigclock_status_signal_pane

0x564c,	// (0x0001bfbd) fs_bigclock_status_title_pane

0x5655,	// (0x0001bfc6) fs_bigclock_status_signal_pane_g1

0x565e,	// (0x0001bfcf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x000266ce) fs_bigclock_status_signal_pane_g

0x5666,	// (0x0001bfd7) fs_bigclock_status_battery_pane_g1

0x566f,	// (0x0001bfe0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x000266d3) fs_bigclock_status_battery_pane_g

0x5677,	// (0x0001bfe8) fs_bigclock_status_title_pane_t1

0xdd66,	// (0x000246d7) main_fs_bigclock_clock_pane_g1

0xdd66,	// (0x000246d7) main_fs_bigclock_clock_pane_g2

0xdd73,	// (0x000246e4) main_fs_bigclock_clock_pane_g3

0xdd73,	// (0x000246e4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x000266d8) main_fs_bigclock_clock_pane_g

0xdd7f,	// (0x000246f0) main_fs_bigclock_clock_pane_t1

0xdd92,	// (0x00024703) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x000266e1) main_fs_bigclock_clock_pane_t

0x5685,	// (0x0001bff6) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5685,	// (0x0001bff6) list_single_fs_bigclock_indicator_pane

0x5696,	// (0x0001c007) list_single_fs_bigclock_pane_ParamLimits

0x5696,	// (0x0001c007) list_single_fs_bigclock_pane

0x56bc,	// (0x0001c02d) main_fs_bigclock_indicator_pane_t1

0x56cb,	// (0x0001c03c) list_single_fs_bigclock_pane_g1

0x56d3,	// (0x0001c044) list_single_fs_bigclock_pane_t1

0x0baf,	// (0x00017520) main_fs_bigclock_swipe_pane_g1

0x5716,	// (0x0001c087) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x000266f2) main_fs_bigclock_swipe_pane_g

0x571e,	// (0x0001c08f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x571e,	// (0x0001c08f) main_fs_bigclock_swipe_pane_t1

0x9d9e,	// (0x0002070f) call_type_pane_ParamLimits

0x0140,	// (0x00016ab1) main_btmg_pane

0x5352,	// (0x0001bcc3) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5352,	// (0x0001bcc3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x00026665) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x00026665) list_single_cale_mrui_row_pane_g

0x54d6,	// (0x0001be47) list_recal_vselct_arw_lo_pane

0x54de,	// (0x0001be4f) list_recal_vselct_arw_up_pane

0x54e6,	// (0x0001be57) list_recal_vselct_pane

0xdde9,	// (0x0002475a) btmg_button_pane

0xddf5,	// (0x00024766) main_btmg_pane_g1

0x0140,	// (0x00016ab1) bg_button_pane_cp044

0x573b,	// (0x0001c0ac) btmg_button_pane_t1

0x2a1a,	// (0x0001938b) aid_listscroll_gen

0x01af,	// (0x00016b20) main_cntbar_detail_pane

0x503f,	// (0x0001b9b0) list_cmail_folder_pane

0x5033,	// (0x0001b9a4) sp_fs_scroll_pane_cp03_ParamLimits

0xddfd,	// (0x0002476e) list_single_fs_dyc_pane_cp01_ParamLimits

0xddfd,	// (0x0002476e) list_single_fs_dyc_pane_cp01

0x5749,	// (0x0001c0ba) aid_size_cmail_indent

0x5752,	// (0x0001c0c3) list_single_dyc_row_pane_cp01

0xde49,	// (0x000247ba) cntbar_detail_list_pane_ParamLimits

0xde49,	// (0x000247ba) cntbar_detail_list_pane

0xde83,	// (0x000247f4) main_cntbar_detail_cont_pane_ParamLimits

0xde83,	// (0x000247f4) main_cntbar_detail_cont_pane

0x9d92,	// (0x00020703) scroll_pane_cp032_ParamLimits

0x9d92,	// (0x00020703) scroll_pane_cp032

0xde8f,	// (0x00024800) cntbar_detail_list_event_pane_ParamLimits

0xde8f,	// (0x00024800) cntbar_detail_list_event_pane

0xde55,	// (0x000247c6) cntbar_detail_list_shct_pane

0x0e0e,	// (0x0001777f) aid_list_gen

0x575b,	// (0x0001c0cc) aid_scroll

0x5764,	// (0x0001c0d5) aid_size_touch_scroll_bar

0xd391,	// (0x00023d02) aid_list_double

0xdea3,	// (0x00024814) aid_list_single

0xdea3,	// (0x00024814) aid_list_single_lg

0xdeac,	// (0x0002481d) aid_list_z_g_a_sm

0xdeb4,	// (0x00024825) aid_list_z_g_d

0xdebc,	// (0x0002482d) aid_txt_z_prm

0xdeca,	// (0x0002483b) aid_txt_z_prm_cp01

0xded8,	// (0x00024849) aid_txt_z_sec

0xdee6,	// (0x00024857) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdee6,	// (0x00024857) main_cntbar_detail_cont_pane_g1

0xdef3,	// (0x00024864) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdef3,	// (0x00024864) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x000266f7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x000266f7) main_cntbar_detail_cont_pane_g

0x576d,	// (0x0001c0de) main_cntbar_detail_cont_pane_t1

0x577b,	// (0x0001c0ec) main_cntbar_detail_cont_pane_t2

0x5789,	// (0x0001c0fa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x000266fc) main_cntbar_detail_cont_pane_t

0xdeff,	// (0x00024870) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdeff,	// (0x00024870) cell_cntbar_detail_list_shct_pane

0x5797,	// (0x0001c108) cntbar_detail_list_shct_pane_g1

0x57a0,	// (0x0001c111) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x00026703) cntbar_detail_list_shct_pane_g

0xdf13,	// (0x00024884) cntbar_detail_list_event_pane_g1_ParamLimits

0xdf13,	// (0x00024884) cntbar_detail_list_event_pane_g1

0xdf1f,	// (0x00024890) cntbar_detail_list_event_pane_g2_ParamLimits

0xdf1f,	// (0x00024890) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x00026708) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x00026708) cntbar_detail_list_event_pane_g

0xdf8b,	// (0x000248fc) cntbar_detail_list_event_pane_t1_ParamLimits

0xdf8b,	// (0x000248fc) cntbar_detail_list_event_pane_t1

0xdfa0,	// (0x00024911) cntbar_detail_list_event_pane_t2_ParamLimits

0xdfa0,	// (0x00024911) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x00026715) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x00026715) cntbar_detail_list_event_pane_t

0x0baf,	// (0x00017520) cell_cntbar_detail_list_shct_pane_g1

0x15fb,	// (0x00017f6c) navi_pane_mv_g3

0x01af,	// (0x00016b20) main_cntbar_detail_pane_ParamLimits

0x0140,	// (0x00016ab1) main_notif_wgt_pane

0x75b6,	// (0x0001df27) aid_tch_main_mp4_pane_g4

0x7815,	// (0x0001e186) popup_slider_window_cp02

0x54cc,	// (0x0001be3d) list_recal_day_event_pane

0xde29,	// (0x0002479a) cntbar_detail_btn_pane_ParamLimits

0xde29,	// (0x0002479a) cntbar_detail_btn_pane

0xde39,	// (0x000247aa) cntbar_detail_btn_pane_cp01_ParamLimits

0xde39,	// (0x000247aa) cntbar_detail_btn_pane_cp01

0xde55,	// (0x000247c6) cntbar_detail_list_shct_pane_ParamLimits

0xde61,	// (0x000247d2) cntbar_detail_pane_g1_ParamLimits

0xde61,	// (0x000247d2) cntbar_detail_pane_g1

0xde6d,	// (0x000247de) cntbar_detail_pane_t1_ParamLimits

0xde6d,	// (0x000247de) cntbar_detail_pane_t1

0xdf2b,	// (0x0002489c) cntbar_detail_list_event_pane_g3_ParamLimits

0xdf2b,	// (0x0002489c) cntbar_detail_list_event_pane_g3

0xdf43,	// (0x000248b4) cntbar_detail_list_event_pane_g4_ParamLimits

0xdf43,	// (0x000248b4) cntbar_detail_list_event_pane_g4

0xdf5b,	// (0x000248cc) cntbar_detail_list_event_pane_g5_ParamLimits

0xdf5b,	// (0x000248cc) cntbar_detail_list_event_pane_g5

0xdf73,	// (0x000248e4) cntbar_detail_list_event_pane_g6_ParamLimits

0xdf73,	// (0x000248e4) cntbar_detail_list_event_pane_g6

0xdfb5,	// (0x00024926) cntbar_detail_list_event_pane_t3_ParamLimits

0xdfb5,	// (0x00024926) cntbar_detail_list_event_pane_t3

0xdfc7,	// (0x00024938) popup_notif_wgt_window_ParamLimits

0xdfc7,	// (0x00024938) popup_notif_wgt_window

0xdfd7,	// (0x00024948) popup_submenu_window_cp01_ParamLimits

0xdfd7,	// (0x00024948) popup_submenu_window_cp01

0x0b6f,	// (0x000174e0) bg_popup_window_pane_cp10

0x57a9,	// (0x0001c11a) listscroll_notif_wgt_pane

0x57bb,	// (0x0001c12c) list_notif_wgt_window

0x57c4,	// (0x0001c135) scroll_pane_cp033

0xdfe5,	// (0x00024956) list_notif_wgt_row_pane_ParamLimits

0xdfe5,	// (0x00024956) list_notif_wgt_row_pane

0x57cd,	// (0x0001c13e) aid_size_list_notif_wgt_del

0x57da,	// (0x0001c14b) list_notif_wgt_row_pane_g1

0x57e6,	// (0x0001c157) list_notif_wgt_row_pane_g2

0x57f5,	// (0x0001c166) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x0002671c) list_notif_wgt_row_pane_g

0x5802,	// (0x0001c173) list_notif_wgt_row_pane_t1

0x5818,	// (0x0001c189) list_notif_wgt_row_pane_t2

0x582a,	// (0x0001c19b) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x00026723) list_notif_wgt_row_pane_t

0x3ee9,	// (0x0001a85a) list_recal_day_event_pane_g1

0x583c,	// (0x0001c1ad) list_recal_day_event_pane_t1

0x0140,	// (0x00016ab1) bg_button_pane_cp045

0xdff7,	// (0x00024968) cntbar_detail_btn_pane_t1

0x1742,	// (0x000180b3) main_callh_pane_ParamLimits

0x1742,	// (0x000180b3) main_callh_pane

0x0140,	// (0x00016ab1) main_coverflow0_pane

0x0140,	// (0x00016ab1) main_wgtman_pane

0xd215,	// (0x00023b86) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd215,	// (0x00023b86) main_fs_bigclock_unlock_btn_pane

0xd81d,	// (0x0002418e) bg_button_pane_cp16

0xd82d,	// (0x0002419e) cell_tport_appsw_pane_g3

0xe005,	// (0x00024976) cf0_flow_pane_ParamLimits

0xe005,	// (0x00024976) cf0_flow_pane

0x584b,	// (0x0001c1bc) listscroll_cf0_pane

0x5856,	// (0x0001c1c7) main_cf0_pane_g1

0xe014,	// (0x00024985) main_cf0_pane_t1_ParamLimits

0xe014,	// (0x00024985) main_cf0_pane_t1

0xe028,	// (0x00024999) main_cf0_pane_t2_ParamLimits

0xe028,	// (0x00024999) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x0002672f) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x0002672f) main_cf0_pane_t

0x5868,	// (0x0001c1d9) scroll_pane_cp11

0xe03c,	// (0x000249ad) cf0_flow_pane_g1

0xe044,	// (0x000249b5) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x00026734) cf0_flow_pane_g

0xe04c,	// (0x000249bd) cf0_flow_pane_t1

0x0140,	// (0x00016ab1) main_call6_pane

0x0140,	// (0x00016ab1) main_calllock_pane

0x826c,	// (0x0001ebdd) call6_btn_grp_pane_ParamLimits

0x826c,	// (0x0001ebdd) call6_btn_grp_pane

0x827b,	// (0x0001ebec) call6_pane_g1_ParamLimits

0x827b,	// (0x0001ebec) call6_pane_g1

0x828b,	// (0x0001ebfc) popup_call6_1st_window_ParamLimits

0x828b,	// (0x0001ebfc) popup_call6_1st_window

0x8299,	// (0x0001ec0a) popup_call6_2nd_window_ParamLimits

0x8299,	// (0x0001ec0a) popup_call6_2nd_window

0x82a7,	// (0x0001ec18) cell_call6_btn_pane_ParamLimits

0x82a7,	// (0x0001ec18) cell_call6_btn_pane

0x0b6f,	// (0x000174e0) bg_popup_call2_in_pane_cp03

0x5873,	// (0x0001c1e4) popup_call6_1st_window_g1

0x587b,	// (0x0001c1ec) popup_call6_1st_window_g2

0x5883,	// (0x0001c1f4) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x00026739) popup_call6_1st_window_g

0x588b,	// (0x0001c1fc) popup_call6_1st_window_t1

0x589a,	// (0x0001c20b) popup_call6_1st_window_t2

0x58a8,	// (0x0001c219) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x00026740) popup_call6_1st_window_t

0x0b6f,	// (0x000174e0) bg_popup_call2_in_pane_cp04

0x58b6,	// (0x0001c227) popup_call6_2nd_window_g1

0x58be,	// (0x0001c22f) popup_call6_2nd_window_g2

0x58c6,	// (0x0001c237) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x00026747) popup_call6_2nd_window_g

0x58ce,	// (0x0001c23f) popup_call6_2nd_window_t1

0x6d8a,	// (0x0001d6fb) bg_button_pane_cp15

0x82b6,	// (0x0001ec27) cell_call6_btn_pane_g1

0x82bf,	// (0x0001ec30) cell_call6_btn_pane_t1

0xe05a,	// (0x000249cb) listscroll_wgtman_pane_ParamLimits

0xe05a,	// (0x000249cb) listscroll_wgtman_pane

0xe076,	// (0x000249e7) wgtman_btn_pane_ParamLimits

0xe076,	// (0x000249e7) wgtman_btn_pane

0x140f,	// (0x00017d80) aid_scroll_copy1

0x58f5,	// (0x0001c266) list_wgtman_pane

0xe0ab,	// (0x00024a1c) wgtman_btn_pane_g1_ParamLimits

0xe0ab,	// (0x00024a1c) wgtman_btn_pane_g1

0xe0d3,	// (0x00024a44) wgtman_btn_pane_t1_ParamLimits

0xe0d3,	// (0x00024a44) wgtman_btn_pane_t1

0x58ff,	// (0x0001c270) wgtman_btn_pane_t2_ParamLimits

0x58ff,	// (0x0001c270) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x0002674e) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x0002674e) wgtman_btn_pane_t

0xe10a,	// (0x00024a7b) listrow_wgtman_pane_ParamLimits

0xe10a,	// (0x00024a7b) listrow_wgtman_pane

0xe126,	// (0x00024a97) listrow_wgtman_pane_g1

0xe133,	// (0x00024aa4) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x00026753) listrow_wgtman_pane_g

0xe151,	// (0x00024ac2) listrow_wgtman_pane_t1

0xe169,	// (0x00024ada) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x00026758) listrow_wgtman_pane_t

0xe18f,	// (0x00024b00) wait_bar_pane_cp09

0x5916,	// (0x0001c287) main_calllock_btn_pane

0x5920,	// (0x0001c291) main_calllock_pane_g1

0x0140,	// (0x00016ab1) bg_button_pane_cp17

0x58dd,	// (0x0001c24e) main_calllock_btn_pane_g1

0x5928,	// (0x0001c299) main_calllock_btn_pane_t1

0x0140,	// (0x00016ab1) main_dialer3_pane

0x0140,	// (0x00016ab1) main_fmrd2_pane

0x0baf,	// (0x00017520) main_fs_bigclock_unlock_btn_pane_g1

0xe1a9,	// (0x00024b1a) main_fs_bigclock_unlock_btn_pane_t1

0xe1b7,	// (0x00024b28) area_fmrd2_info_pane_ParamLimits

0xe1b7,	// (0x00024b28) area_fmrd2_info_pane

0xe1c5,	// (0x00024b36) area_fmrd2_visual_pane_ParamLimits

0xe1c5,	// (0x00024b36) area_fmrd2_visual_pane

0xe1d3,	// (0x00024b44) fmrd2_indi_pane_ParamLimits

0xe1d3,	// (0x00024b44) fmrd2_indi_pane

0xe1e0,	// (0x00024b51) area_fmrd2_visual_pane_g1

0xe1e8,	// (0x00024b59) area_fmrd2_visual_pane_t1

0xe1f8,	// (0x00024b69) area_fmrd2_visual_pane_t2

0xe208,	// (0x00024b79) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x00026762) area_fmrd2_visual_pane_t

0xe218,	// (0x00024b89) area_fmrd2_info_pane_g1

0xe220,	// (0x00024b91) area_fmrd2_info_pane_t1

0xe230,	// (0x00024ba1) area_fmrd2_info_pane_t2

0xe240,	// (0x00024bb1) area_fmrd2_info_pane_t3

0xe250,	// (0x00024bc1) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x00026769) area_fmrd2_info_pane_t

0xe25e,	// (0x00024bcf) fmrd2_indi_pane_t1

0xe26e,	// (0x00024bdf) fmrd2_indi_pane_t2

0xe27e,	// (0x00024bef) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x00026772) fmrd2_indi_pane_t

0x4b92,	// (0x0001b503) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4b92,	// (0x0001b503) list_single_fs_bigclock_indicator_pane_g5

0x4c43,	// (0x0001b5b4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4c43,	// (0x0001b5b4) list_single_fs_bigclock_indicator_pane_t5

0xd9d0,	// (0x00024341) aid_cell_bcale_month_pane_ParamLimits

0xd9d0,	// (0x00024341) aid_cell_bcale_month_pane

0xd9ee,	// (0x0002435f) bcale_month_pane_ParamLimits

0xd9ee,	// (0x0002435f) bcale_month_pane

0xda0c,	// (0x0002437d) bcale_preview_pane_ParamLimits

0xda0c,	// (0x0002437d) bcale_preview_pane

0x56d3,	// (0x0001c044) list_single_fs_bigclock_pane_t1_ParamLimits

0x56f2,	// (0x0001c063) list_single_fs_bigclock_pane_t2_ParamLimits

0x56f2,	// (0x0001c063) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x000266ed) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x000266ed) list_single_fs_bigclock_pane_t

0xe1a1,	// (0x00024b12) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x0002675d) main_fs_bigclock_unlock_btn_pane_g

0xe28c,	// (0x00024bfd) aid_dia3_key_size_ParamLimits

0xe28c,	// (0x00024bfd) aid_dia3_key_size

0xe298,	// (0x00024c09) aid_dia3_listrow_size_ParamLimits

0xe298,	// (0x00024c09) aid_dia3_listrow_size

0xe2a8,	// (0x00024c19) dia3_keypad_fun_pane_ParamLimits

0xe2a8,	// (0x00024c19) dia3_keypad_fun_pane

0xe2ba,	// (0x00024c2b) dia3_keypad_num_pane_ParamLimits

0xe2ba,	// (0x00024c2b) dia3_keypad_num_pane

0xe2cc,	// (0x00024c3d) dia3_listscroll_pane_ParamLimits

0xe2cc,	// (0x00024c3d) dia3_listscroll_pane

0xe2da,	// (0x00024c4b) dia3_numentry_pane_ParamLimits

0xe2da,	// (0x00024c4b) dia3_numentry_pane

0x5937,	// (0x0001c2a8) dia3_list_pane

0x5942,	// (0x0001c2b3) scroll_pane_cp12

0x0140,	// (0x00016ab1) bg_dia3_numentry_pane

0xe2e8,	// (0x00024c59) dia3_numentry_pane_t1

0xe2f7,	// (0x00024c68) cell_dia3_key_num_pane

0xe2ff,	// (0x00024c70) cell_dia3_key0_fun_pane_ParamLimits

0xe2ff,	// (0x00024c70) cell_dia3_key0_fun_pane

0xe30c,	// (0x00024c7d) cell_dia3_key1_fun_pane_ParamLimits

0xe30c,	// (0x00024c7d) cell_dia3_key1_fun_pane

0xe319,	// (0x00024c8a) dia3_listrow_pane

0x48e5,	// (0x0001b256) bg_dia3_numentry_pane_g1

0x0140,	// (0x00016ab1) bg_button_pane_cp21

0x594d,	// (0x0001c2be) cell_dia3_key_num_pane_t1

0x595b,	// (0x0001c2cc) cell_dia3_key_num_pane_t2

0x596a,	// (0x0001c2db) cell_dia3_key_num_pane_t3

0x5979,	// (0x0001c2ea) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x00026779) cell_dia3_key_num_pane_t

0x0140,	// (0x00016ab1) bg_button_pane_cp19

0xe326,	// (0x00024c97) cell_dia3_key0_fun_pane_g1

0x0140,	// (0x00016ab1) bg_button_pane_cp20

0xe32e,	// (0x00024c9f) cell_dia3_key1_fun_pane_g1

0xe336,	// (0x00024ca7) area_left_week_number_pane

0xe349,	// (0x00024cba) area_top_day_name_pane

0xe357,	// (0x00024cc8) frame_month_view_pane

0x5988,	// (0x0001c2f9) grid_month_view_pane

0xe36c,	// (0x00024cdd) cell_top_day_name_pane_ParamLimits

0xe36c,	// (0x00024cdd) cell_top_day_name_pane

0xe386,	// (0x00024cf7) cell_area_left_week_number_pane_ParamLimits

0xe386,	// (0x00024cf7) cell_area_left_week_number_pane

0xe3a9,	// (0x00024d1a) cell_month_view_pane_ParamLimits

0xe3a9,	// (0x00024d1a) cell_month_view_pane

0x5996,	// (0x0001c307) frm_month_g1

0xe3d5,	// (0x00024d46) frm_month_g2

0xe3e6,	// (0x00024d57) frm_month_g3

0xe3f7,	// (0x00024d68) frm_month_g4

0xe408,	// (0x00024d79) frm_month_g5

0xe41b,	// (0x00024d8c) frm_month_g6

0xe42e,	// (0x00024d9f) frm_month_g7

0x59a3,	// (0x0001c314) frm_month_g8

0xe441,	// (0x00024db2) frm_month_g9

0xe44e,	// (0x00024dbf) frm_month_g10

0xe45b,	// (0x00024dcc) frm_month_g11

0xe468,	// (0x00024dd9) frm_month_g12

0xe475,	// (0x00024de6) frm_month_g13

0xe482,	// (0x00024df3) frm_month_g14

0xe491,	// (0x00024e02) frm_month_g15

0xe4a0,	// (0x00024e11) frm_month_g16

0x000f,

0xfe11,	// (0x00026782) frm_month_g

0x59dd,	// (0x0001c34e) cell_top_day_name_pane_t1

0xe4af,	// (0x00024e20) cell_area_left_week_number_pane_g1

0xe4be,	// (0x00024e2f) cell_area_left_week_number_pane_t1

0x08a6,	// (0x00017217) cell_month_view_pane_g1

0xe4d4,	// (0x00024e45) cell_month_view_pane_t1

0x0140,	// (0x00016ab1) main_fps_pane

0x4e57,	// (0x0001b7c8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4e57,	// (0x0001b7c8) cmail_ddmenu_btn02_pane_cp1

0x4e73,	// (0x0001b7e4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4e73,	// (0x0001b7e4) cmail_ddmenu_btn02_pane_cp2

0xdccd,	// (0x0002463e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdccd,	// (0x0002463e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x000266a0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x000266a0) cmail_ddmenu_btn02_pane_g

0xdceb,	// (0x0002465c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdceb,	// (0x0002465c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x000266a5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x000266a5) cmail_ddmenu_btn02_pane_t

0xe4ea,	// (0x00024e5b) fps_text_pane_ParamLimits

0xe4ea,	// (0x00024e5b) fps_text_pane

0xe4f7,	// (0x00024e68) main_fps_pane_g1_ParamLimits

0xe4f7,	// (0x00024e68) main_fps_pane_g1

0xe505,	// (0x00024e76) wait_bar_pane_cp010_ParamLimits

0xe505,	// (0x00024e76) wait_bar_pane_cp010

0xe511,	// (0x00024e82) fps_text_pane_t1_ParamLimits

0xe511,	// (0x00024e82) fps_text_pane_t1

0xba84,	// (0x000223f5) cam4_image_uncrop_pane_g1

0xba8d,	// (0x000223fe) cam4_image_uncrop_pane_g2

0xba96,	// (0x00022407) cam4_image_uncrop_pane_g3

0xba9f,	// (0x00022410) cam4_image_uncrop_pane_g4

0x0003,

0xf873,	// (0x000261e4) cam4_image_uncrop_pane_g

0xe319,	// (0x00024c8a) dia3_listrow_pane_ParamLimits

0x0140,	// (0x00016ab1) main_phob2_pane

0xd7ff,	// (0x00024170) cell_tport_appsw_pane_cp02_ParamLimits

0xd7ff,	// (0x00024170) cell_tport_appsw_pane_cp02

0xd80e,	// (0x0002417f) cell_tport_appsw_pane_cp03_ParamLimits

0xd80e,	// (0x0002417f) cell_tport_appsw_pane_cp03

0x0140,	// (0x00016ab1) phob2_contact_card_pane

0x0140,	// (0x00016ab1) phob2_listscroll_pane

0x59f0,	// (0x0001c361) phob2_list_pane

0x59f8,	// (0x0001c369) scroll_pane_cp034

0xe52a,	// (0x00024e9b) phob2_cc_data_pane_ParamLimits

0xe52a,	// (0x00024e9b) phob2_cc_data_pane

0xe544,	// (0x00024eb5) phob2_cc_listscroll_pane_ParamLimits

0xe544,	// (0x00024eb5) phob2_cc_listscroll_pane

0xe10a,	// (0x00024a7b) list_double_large_graphic_phob2_pane_ParamLimits

0xe10a,	// (0x00024a7b) list_double_large_graphic_phob2_pane

0xe55e,	// (0x00024ecf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe55e,	// (0x00024ecf) list_double_large_graphic_phob2_pane_g1

0xe56b,	// (0x00024edc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe56b,	// (0x00024edc) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x000267a3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x000267a3) list_double_large_graphic_phob2_pane_g

0xe591,	// (0x00024f02) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe591,	// (0x00024f02) list_double_large_graphic_phob2_pane_t1

0xe5a6,	// (0x00024f17) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe5a6,	// (0x00024f17) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x000267ac) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x000267ac) list_double_large_graphic_phob2_pane_t

0x0140,	// (0x00016ab1) list_highlight_pane_cp024

0x5a00,	// (0x0001c371) phob2_cc_button_pane

0xe5bb,	// (0x00024f2c) phob2_cc_data_pane_g1_ParamLimits

0xe5bb,	// (0x00024f2c) phob2_cc_data_pane_g1

0xe5ca,	// (0x00024f3b) phob2_cc_data_pane_g2_ParamLimits

0xe5ca,	// (0x00024f3b) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x000267b1) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x000267b1) phob2_cc_data_pane_g

0xe5d9,	// (0x00024f4a) phob2_cc_data_pane_t1_ParamLimits

0xe5d9,	// (0x00024f4a) phob2_cc_data_pane_t1

0xe5ee,	// (0x00024f5f) phob2_cc_data_pane_t2_ParamLimits

0xe5ee,	// (0x00024f5f) phob2_cc_data_pane_t2

0xe603,	// (0x00024f74) phob2_cc_data_pane_t3_ParamLimits

0xe603,	// (0x00024f74) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x000267b6) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x000267b6) phob2_cc_data_pane_t

0x5a08,	// (0x0001c379) phob2_cc_list_pane_ParamLimits

0x5a08,	// (0x0001c379) phob2_cc_list_pane

0x3f92,	// (0x0001a903) scroll_pane_cp035_ParamLimits

0x3f92,	// (0x0001a903) scroll_pane_cp035

0x01af,	// (0x00016b20) bg_button_pane_cp033

0x5a14,	// (0x0001c385) phob2_cc_button_pane_g1

0x5a20,	// (0x0001c391) phob2_cc_button_pane_t1

0x5a35,	// (0x0001c3a6) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x000267bd) phob2_cc_button_pane_t

0xe618,	// (0x00024f89) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe618,	// (0x00024f89) list_double_large_graphic_phob2_cc_pane

0xe68c,	// (0x00024ffd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe68c,	// (0x00024ffd) list_double_large_graphic_phob2_cc_pane_g1

0xe69d,	// (0x0002500e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe69d,	// (0x0002500e) list_double_large_graphic_phob2_cc_pane_g2

0xe6a9,	// (0x0002501a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xe6a9,	// (0x0002501a) list_double_large_graphic_phob2_cc_pane_g3

0xe6b5,	// (0x00025026) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xe6b5,	// (0x00025026) list_double_large_graphic_phob2_cc_pane_g4

0x5a47,	// (0x0001c3b8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5a47,	// (0x0001c3b8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x000267c2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x000267c2) list_double_large_graphic_phob2_cc_pane_g

0xe6c1,	// (0x00025032) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xe6c1,	// (0x00025032) list_double_large_graphic_phob2_cc_pane_t1

0xe6ea,	// (0x0002505b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xe6ea,	// (0x0002505b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x000267cd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x000267cd) list_double_large_graphic_phob2_cc_pane_t

0x5a53,	// (0x0001c3c4) list_highlight_pane_cp025_ParamLimits

0x5a53,	// (0x0001c3c4) list_highlight_pane_cp025

0x01af,	// (0x00016b20) bg_button_pane_cp033_ParamLimits

0x5a14,	// (0x0001c385) phob2_cc_button_pane_g1_ParamLimits

0x5a20,	// (0x0001c391) phob2_cc_button_pane_t1_ParamLimits

0x5a35,	// (0x0001c3a6) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x000267bd) phob2_cc_button_pane_t_ParamLimits

0x8341,	// (0x0001ecb2) popup_wgtman_window

0x3d47,	// (0x0001a6b8) scroll_pane_cp038

0xe093,	// (0x00024a04) wgtman_btn_pane_cp_01_ParamLimits

0xe093,	// (0x00024a04) wgtman_btn_pane_cp_01

0x5a61,	// (0x0001c3d2) wgtman_content_pane

0x5a6a,	// (0x0001c3db) wgtman_heading_pane

0x0140,	// (0x00016ab1) bg_heading_pane_cp02

0x5a73,	// (0x0001c3e4) wgtman_heading_pane_g1

0x5a7b,	// (0x0001c3ec) wgtman_heading_pane_t1

0x5a89,	// (0x0001c3fa) scroll_pane_cp036

0x5a91,	// (0x0001c402) wgtman_list_pane

0x59c2,	// (0x0001c333) wgtman_list_pane_t1_ParamLimits

0x59c2,	// (0x0001c333) wgtman_list_pane_t1

0x7aca,	// (0x0001e43b) cam4_grid_pane

0xc238,	// (0x00022ba9) bg_button_pane_cp015_ParamLimits

0xc24d,	// (0x00022bbe) bg_button_pane_cp016_ParamLimits

0xc259,	// (0x00022bca) bg_button_pane_cp017_ParamLimits

0xc2b1,	// (0x00022c22) popup_vitu2_query_window_g3_ParamLimits

0xc2b1,	// (0x00022c22) popup_vitu2_query_window_g3

0xc352,	// (0x00022cc3) popup_vitu2_query_window_t6_ParamLimits

0xc352,	// (0x00022cc3) popup_vitu2_query_window_t6

0xc37d,	// (0x00022cee) popup_vitu2_query_window_t7_ParamLimits

0xc37d,	// (0x00022cee) popup_vitu2_query_window_t7

0x59b0,	// (0x0001c321) cam4_grid_pane_g1

0x59b9,	// (0x0001c32a) cam4_grid_pane_g2

0x5a99,	// (0x0001c40a) cam4_grid_pane_g3

0x5aa2,	// (0x0001c413) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x000267d2) cam4_grid_pane_g

0x8bb5,	// (0x0001f526) aid_placing_vt_slider_lsc_ParamLimits

0x8ef5,	// (0x0001f866) vidtel_button_pane_ParamLimits

0x8ef5,	// (0x0001f866) vidtel_button_pane

0x0140,	// (0x00016ab1) bg_button_pane_cp034

0x5aad,	// (0x0001c41e) vidtel_button_pane_g1

0x5ab5,	// (0x0001c426) vidtel_button_pane_t1

0x3e9d,	// (0x0001a80e) aid_size_vtel_slider_touch

0x3f92,	// (0x0001a903) scroll_pane_cp039

0xcf52,	// (0x000238c3) ncim_query_button_pane_cp01_ParamLimits

0xcf71,	// (0x000238e2) ncimui_query_pane_g1_ParamLimits

0x01af,	// (0x00016b20) input_focus_pane_cp012_ParamLimits

0x492b,	// (0x0001b29c) ncim_query_entry_pane_t1_ParamLimits

0x3f92,	// (0x0001a903) scroll_pane_cp039_ParamLimits

0x14e6,	// (0x00017e57) navi_pane_bcale_mc_g1

0x14ee,	// (0x00017e5f) navi_pane_bcale_mc_t1

0x4ea7,	// (0x0001b818) main_sp_fs_email_pane_g1

0x4eb3,	// (0x0001b824) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x000265d5) main_sp_fs_email_pane_g

0x535e,	// (0x0001bccf) list_single_cale_mrui_row_pane_g3_ParamLimits

0x535e,	// (0x0001bccf) list_single_cale_mrui_row_pane_g3

0xdd0b,	// (0x0002467c) list_single_recal_day_pane_g5_event_pane

0x553d,	// (0x0001beae) list_single_recal_day_pane_g7

0x5acb,	// (0x0001c43c) list_recal_day_event_pane_cp01

0x5ad4,	// (0x0001c445) list_recal_vselct_arw_lo_pane_cp01

0x5adc,	// (0x0001c44d) list_recal_vselct_arw_up_pane_cp01

0x5ae4,	// (0x0001c455) list_recal_vselct_pane_cp01

0x3ee9,	// (0x0001a85a) list_recal_day_event_pane_cp01_g1

0x5aee,	// (0x0001c45f) list_recal_day_event_pane_cp01_t1

0x5545,	// (0x0001beb6) list_single_recal_day_pane_t1_ParamLimits

0x5557,	// (0x0001bec8) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x000266b5) list_single_recal_day_pane_t_ParamLimits

0x082b,	// (0x0001719c) bg_notes_pane_ParamLimits

0x08fe,	// (0x0001726f) list_notes_pane_ParamLimits

0x848d,	// (0x0001edfe) scroll_pane_cp06_ParamLimits

0x093a,	// (0x000172ab) main_notes_pane_ParamLimits

0x01af,	// (0x00016b20) main_welc_pane

0xe734,	// (0x000250a5) main_welc_body_pane_ParamLimits

0xe734,	// (0x000250a5) main_welc_body_pane

0xe74d,	// (0x000250be) main_welc_opti_pane_ParamLimits

0xe74d,	// (0x000250be) main_welc_opti_pane

0xe7a8,	// (0x00025119) main_welc_pane_t1_ParamLimits

0xe7a8,	// (0x00025119) main_welc_pane_t1

0xe930,	// (0x000252a1) main_welc_body_row_pane_ParamLimits

0xe930,	// (0x000252a1) main_welc_body_row_pane

0x0898,	// (0x00017209) main_welc_opti_row_pane_ParamLimits

0x0898,	// (0x00017209) main_welc_opti_row_pane

0x5b0c,	// (0x0001c47d) main_welc_opti_row_pane_g1

0xe959,	// (0x000252ca) main_welc_opti_row_pane_t1

0x5b14,	// (0x0001c485) main_welc_body_row_pane_t1

0x57b3,	// (0x0001c124) popup_notif_wgt_heading_pane

0x57cd,	// (0x0001c13e) aid_size_list_notif_wgt_del_ParamLimits

0x57da,	// (0x0001c14b) list_notif_wgt_row_pane_g1_ParamLimits

0x57e6,	// (0x0001c157) list_notif_wgt_row_pane_g2_ParamLimits

0x57f5,	// (0x0001c166) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x0002671c) list_notif_wgt_row_pane_g_ParamLimits

0x5802,	// (0x0001c173) list_notif_wgt_row_pane_t1_ParamLimits

0x5818,	// (0x0001c189) list_notif_wgt_row_pane_t2_ParamLimits

0x582a,	// (0x0001c19b) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x00026723) list_notif_wgt_row_pane_t_ParamLimits

0xe126,	// (0x00024a97) listrow_wgtman_pane_g1_ParamLimits

0xe133,	// (0x00024aa4) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x00026753) listrow_wgtman_pane_g_ParamLimits

0xe151,	// (0x00024ac2) listrow_wgtman_pane_t1_ParamLimits

0xe169,	// (0x00024ada) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x00026758) listrow_wgtman_pane_t_ParamLimits

0xe18f,	// (0x00024b00) wait_bar_pane_cp09_ParamLimits

0x0140,	// (0x00016ab1) bg_popup_heading_pane_cp02

0x5b23,	// (0x0001c494) popup_notif_wgt_heading_pane_g1

0x5b2b,	// (0x0001c49c) popup_notif_wgt_heading_pane_t1

0x0140,	// (0x00016ab1) main_vids_pane

0x0140,	// (0x00016ab1) vids_listscroll_pane

0xe968,	// (0x000252d9) scroll_pane_cp040

0x0140,	// (0x00016ab1) vids_list_pane

0xe973,	// (0x000252e4) vids_list_double_pane_ParamLimits

0xe973,	// (0x000252e4) vids_list_double_pane

0xe98b,	// (0x000252fc) vids_list_double_pane_g1

0xe994,	// (0x00025305) vids_list_double_pane_t1

0xe9a4,	// (0x00025315) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x000267f1) vids_list_double_pane_t

0x71e0,	// (0x0001db51) main_ncimui_pane_ParamLimits

0xcda9,	// (0x0002371a) main_ncimui_pane_g1_ParamLimits

0xcdb5,	// (0x00023726) main_ncimui_pane_g2_ParamLimits

0xcdb5,	// (0x00023726) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x000264d6) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x000264d6) main_ncimui_pane_g

0xe766,	// (0x000250d7) main_welc_pane_g1_ParamLimits

0xe766,	// (0x000250d7) main_welc_pane_g1

0xe772,	// (0x000250e3) main_welc_pane_g2_ParamLimits

0xe772,	// (0x000250e3) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x000267db) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x000267db) main_welc_pane_g

0x846f,	// (0x0001ede0) listscroll_mce_pane_ParamLimits

0x163b,	// (0x00017fac) wait_bar_pane_cp10

0x2a22,	// (0x00019393) main_cale_day_pane_ParamLimits

0x2a22,	// (0x00019393) main_cale_week_pane_ParamLimits

0x082b,	// (0x0001719c) main_messa_pane_ParamLimits

0xb58a,	// (0x00021efb) main_clock2_btn_pane_ParamLimits

0xb58a,	// (0x00021efb) main_clock2_btn_pane

0x332f,	// (0x00019ca0) main_clock2_btn_pane_cp01_ParamLimits

0x332f,	// (0x00019ca0) main_clock2_btn_pane_cp01

0x52ea,	// (0x0001bc5b) list_cale_mrui_pane_ParamLimits

0x5860,	// (0x0001c1d1) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x0002672a) main_cf0_pane_g

0xe336,	// (0x00024ca7) area_left_week_number_pane_ParamLimits

0xe349,	// (0x00024cba) area_top_day_name_pane_ParamLimits

0xe357,	// (0x00024cc8) frame_month_view_pane_ParamLimits

0x5988,	// (0x0001c2f9) grid_month_view_pane_ParamLimits

0x5996,	// (0x0001c307) frm_month_g1_ParamLimits

0xe3d5,	// (0x00024d46) frm_month_g2_ParamLimits

0xe3e6,	// (0x00024d57) frm_month_g3_ParamLimits

0xe3f7,	// (0x00024d68) frm_month_g4_ParamLimits

0xe408,	// (0x00024d79) frm_month_g5_ParamLimits

0xe41b,	// (0x00024d8c) frm_month_g6_ParamLimits

0xe42e,	// (0x00024d9f) frm_month_g7_ParamLimits

0x59a3,	// (0x0001c314) frm_month_g8_ParamLimits

0xe441,	// (0x00024db2) frm_month_g9_ParamLimits

0xe44e,	// (0x00024dbf) frm_month_g10_ParamLimits

0xe45b,	// (0x00024dcc) frm_month_g11_ParamLimits

0xe468,	// (0x00024dd9) frm_month_g12_ParamLimits

0xe475,	// (0x00024de6) frm_month_g13_ParamLimits

0xe482,	// (0x00024df3) frm_month_g14_ParamLimits

0xe491,	// (0x00024e02) frm_month_g15_ParamLimits

0xe4a0,	// (0x00024e11) frm_month_g16_ParamLimits

0xfe11,	// (0x00026782) frm_month_g_ParamLimits

0x59dd,	// (0x0001c34e) cell_top_day_name_pane_t1_ParamLimits

0xe4af,	// (0x00024e20) cell_area_left_week_number_pane_g1_ParamLimits

0xe4be,	// (0x00024e2f) cell_area_left_week_number_pane_t1_ParamLimits

0x08a6,	// (0x00017217) cell_month_view_pane_g1_ParamLimits

0xe4d4,	// (0x00024e45) cell_month_view_pane_t1_ParamLimits

0x0823,	// (0x00017194) main_clock2_btn_pane_g1

0x5b39,	// (0x0001c4aa) main_clock2_btn_pane_t1

0x01af,	// (0x00016b20) listscroll_cmail_pane_ParamLimits

0x4ea7,	// (0x0001b818) main_sp_fs_email_pane_g1_ParamLimits

0x4eb3,	// (0x0001b824) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x000265d5) main_sp_fs_email_pane_g_ParamLimits

0x54ad,	// (0x0001be1e) list_recal_day_pane_ParamLimits

0x54be,	// (0x0001be2f) mian_recal_day_pane_t1

0xd6ed,	// (0x0002405e) list_single_dyc_row_text_pane_t4_ParamLimits

0xd6ed,	// (0x0002405e) list_single_dyc_row_text_pane_t4

0xd724,	// (0x00024095) list_single_dyc_row_text_pane_t5_ParamLimits

0xd724,	// (0x00024095) list_single_dyc_row_text_pane_t5

0x4f55,	// (0x0001b8c6) list_single_dyc_row_text_pane_t6_ParamLimits

0x4f55,	// (0x0001b8c6) list_single_dyc_row_text_pane_t6

0x9cb8,	// (0x00020629) aid_mgn_list_cale_time_pane

0x71e0,	// (0x0001db51) main_gallery2_pane_ParamLimits

0x3345,	// (0x00019cb6) main_clock2_pane_cp01_t1

0x3353,	// (0x00019cc4) main_clock2_pane_cp01_t3

0x0001,

0xf74a,	// (0x000260bb) main_clock2_pane_cp01_t

0x87b7,	// (0x0001f128) cale_week_scroll_pane_g16_ParamLimits

0x87b7,	// (0x0001f128) cale_week_scroll_pane_g16

0x0b6f,	// (0x000174e0) vorec_slider_pane

0x5ab5,	// (0x0001c426) vidtel_button_pane_t1_ParamLimits

0xdd66,	// (0x000246d7) main_fs_bigclock_clock_pane_g1_ParamLimits

0xdd66,	// (0x000246d7) main_fs_bigclock_clock_pane_g2_ParamLimits

0xdd73,	// (0x000246e4) main_fs_bigclock_clock_pane_g3_ParamLimits

0xdd73,	// (0x000246e4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x000266d8) main_fs_bigclock_clock_pane_g_ParamLimits

0xdd7f,	// (0x000246f0) main_fs_bigclock_clock_pane_t1_ParamLimits

0xdd92,	// (0x00024703) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x000266e1) main_fs_bigclock_clock_pane_t_ParamLimits

0xaf2f,	// (0x000218a0) main_mup3_lyrics_pane_ParamLimits

0xaf2f,	// (0x000218a0) main_mup3_lyrics_pane

0xe9b2,	// (0x00025323) main_mup3_lyrics_pane_t1_ParamLimits

0xe9b2,	// (0x00025323) main_mup3_lyrics_pane_t1

0x75a0,	// (0x0001df11) aid_main_mp4_pane_t1_area

0x75aa,	// (0x0001df1b) aid_main_mp4_pane_t2_area

0x76a9,	// (0x0001e01a) main_mp4_pane_g7_ParamLimits

0x76a9,	// (0x0001e01a) main_mp4_pane_g7

0x76b5,	// (0x0001e026) main_mp4_pane_g8_ParamLimits

0x76b5,	// (0x0001e026) main_mp4_pane_g8

0xb9ce,	// (0x0002233f) aid_call6_pane_g1_size

0xe65e,	// (0x00024fcf) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe65e,	// (0x00024fcf) list_double_large_graphic_phob2_other_pane

0x0f50,	// (0x000178c1) list_double_large_graphic_phob2_other_pane_g1

0x0140,	// (0x00016ab1) list_highlight_pane_cp026

0x01af,	// (0x00016b20) main_welc_pane_ParamLimits

0xd566,	// (0x00023ed7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd566,	// (0x00023ed7) main_sp_fs_ctrlbar_pane_g3

0xd57e,	// (0x00023eef) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd57e,	// (0x00023eef) main_sp_fs_ctrlbar_pane_g4

0xd5b0,	// (0x00023f21) toolbar2_fixed_button_pane_cp01

0xd5bb,	// (0x00023f2c) toolbar2_fixed_button_pane_cp02

0xd5c6,	// (0x00023f37) toolbar2_fixed_button_pane_cp03

0xe725,	// (0x00025096) list_welc_entry_pane_ParamLimits

0xe725,	// (0x00025096) list_welc_entry_pane

0xe780,	// (0x000250f1) main_welc_pane_g3_ParamLimits

0xe780,	// (0x000250f1) main_welc_pane_g3

0xe7c2,	// (0x00025133) main_welc_pane_t2_ParamLimits

0xe7c2,	// (0x00025133) main_welc_pane_t2

0xe7d6,	// (0x00025147) main_welc_pane_t3_ParamLimits

0xe7d6,	// (0x00025147) main_welc_pane_t3

0x0005,

0xfe73,	// (0x000267e4) main_welc_pane_t_ParamLimits

0xfe73,	// (0x000267e4) main_welc_pane_t

0xe8d2,	// (0x00025243) welc_button_pane_ParamLimits

0xe8d2,	// (0x00025243) welc_button_pane

0xe922,	// (0x00025293) welc_service_logo_pane_ParamLimits

0xe922,	// (0x00025293) welc_service_logo_pane

0xe9e8,	// (0x00025359) list_single_welc_entry_pane_ParamLimits

0xe9e8,	// (0x00025359) list_single_welc_entry_pane

0xe9f9,	// (0x0002536a) list_single_welc_entry_pane_g1

0xea01,	// (0x00025372) list_single_welc_entry_pane_t1

0xea0f,	// (0x00025380) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x000267f6) list_single_welc_entry_pane_t

0x0140,	// (0x00016ab1) bg_button_pane_cp035

0x5b47,	// (0x0001c4b8) welc_button_pane_t1

0x5b55,	// (0x0001c4c6) welc_service_logo_pane_g1

0x5b5e,	// (0x0001c4cf) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x000267fb) welc_service_logo_pane_g

0x6d8a,	// (0x0001d6fb) main_int_radio_pane

0x47c9,	// (0x0001b13a) list_single_fs_dyc_pane_g1

0xe577,	// (0x00024ee8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xe577,	// (0x00024ee8) list_double_large_graphic_phob2_pane_g3

0xe583,	// (0x00024ef4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe583,	// (0x00024ef4) list_double_large_graphic_phob2_pane_g4

0xea1d,	// (0x0002538e) main_int_radio1_pane_ParamLimits

0xea1d,	// (0x0002538e) main_int_radio1_pane

0x5b67,	// (0x0001c4d8) find_pane_cp02

0xea2f,	// (0x000253a0) input_focus_pane_cp12_ParamLimits

0xea2f,	// (0x000253a0) input_focus_pane_cp12

0xea3b,	// (0x000253ac) input_focus_pane_cp13_ParamLimits

0xea3b,	// (0x000253ac) input_focus_pane_cp13

0xea53,	// (0x000253c4) input_focus_pane_cp14_ParamLimits

0xea53,	// (0x000253c4) input_focus_pane_cp14

0x5b70,	// (0x0001c4e1) int_radio1_listscroll_pane

0xea6b,	// (0x000253dc) main_int_radio1_pane_g1_ParamLimits

0xea6b,	// (0x000253dc) main_int_radio1_pane_g1

0xea7b,	// (0x000253ec) main_int_radio1_pane_t1_ParamLimits

0xea7b,	// (0x000253ec) main_int_radio1_pane_t1

0xea8f,	// (0x00025400) main_int_radio1_pane_t2_ParamLimits

0xea8f,	// (0x00025400) main_int_radio1_pane_t2

0xeaa3,	// (0x00025414) main_int_radio1_pane_t3_ParamLimits

0xeaa3,	// (0x00025414) main_int_radio1_pane_t3

0xeab7,	// (0x00025428) main_int_radio1_pane_t4_ParamLimits

0xeab7,	// (0x00025428) main_int_radio1_pane_t4

0x5b7a,	// (0x0001c4eb) main_int_radio1_pane_t5_ParamLimits

0x5b7a,	// (0x0001c4eb) main_int_radio1_pane_t5

0xeace,	// (0x0002543f) main_int_radio1_pane_t6_ParamLimits

0xeace,	// (0x0002543f) main_int_radio1_pane_t6

0xeae0,	// (0x00025451) main_int_radio1_pane_t7_ParamLimits

0xeae0,	// (0x00025451) main_int_radio1_pane_t7

0xeaf2,	// (0x00025463) main_int_radio1_pane_t8_ParamLimits

0xeaf2,	// (0x00025463) main_int_radio1_pane_t8

0xeb06,	// (0x00025477) main_int_radio1_pane_t9_ParamLimits

0xeb06,	// (0x00025477) main_int_radio1_pane_t9

0xeb18,	// (0x00025489) main_int_radio1_pane_t10_ParamLimits

0xeb18,	// (0x00025489) main_int_radio1_pane_t10

0xeb49,	// (0x000254ba) main_int_radio1_pane_t11_ParamLimits

0xeb49,	// (0x000254ba) main_int_radio1_pane_t11

0xeb7a,	// (0x000254eb) main_int_radio1_pane_t12_ParamLimits

0xeb7a,	// (0x000254eb) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x00026800) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x00026800) main_int_radio1_pane_t

0x5b8c,	// (0x0001c4fd) int_radio_list_pane

0x59f8,	// (0x0001c369) scroll_pane_cp037

0x5b94,	// (0x0001c505) list_double_large_graphic_int_radio_pane_ParamLimits

0x5b94,	// (0x0001c505) list_double_large_graphic_int_radio_pane

0x5bad,	// (0x0001c51e) list_double_large_graphic_int_radio_pane_g1

0x5bb6,	// (0x0001c527) list_double_large_graphic_int_radio_pane_t1

0x5bc4,	// (0x0001c535) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x00026819) list_double_large_graphic_int_radio_pane_t

0x0140,	// (0x00016ab1) list_highlight_pane_cp027

0x5afc,	// (0x0001c46d) main_button_pane_4

0xe78c,	// (0x000250fd) main_welc_pane_g4_ParamLimits

0xe78c,	// (0x000250fd) main_welc_pane_g4

0xe7e8,	// (0x00025159) main_welc_pane_t4_ParamLimits

0xe7e8,	// (0x00025159) main_welc_pane_t4

0xe7fa,	// (0x0002516b) main_welc_pane_t5_ParamLimits

0xe7fa,	// (0x0002516b) main_welc_pane_t5

0xe82a,	// (0x0002519b) main_welc_pane_t6_ParamLimits

0xe82a,	// (0x0002519b) main_welc_pane_t6

0xe8e0,	// (0x00025251) welc_button_pane_2_ParamLimits

0xe8e0,	// (0x00025251) welc_button_pane_2

0xe8f8,	// (0x00025269) welc_button_pane_3_ParamLimits

0xe8f8,	// (0x00025269) welc_button_pane_3

0x5b04,	// (0x0001c475) welc_button_pane_4

0xe912,	// (0x00025283) welc_button_pane_5_ParamLimits

0xe912,	// (0x00025283) welc_button_pane_5

0x6b35,	// (0x0001d4a6) main_popup_welc_pane

0x5be1,	// (0x0001c552) main_welc_sk_g3

0x5beb,	// (0x0001c55c) main_welc_sk_g4

0x5bf5,	// (0x0001c566) main_welc_sk_t3

0x5c05,	// (0x0001c576) main_welc_sk_t4

0x5c15,	// (0x0001c586) popup_welc_pane_t4

0x5c23,	// (0x0001c594) popup_welc_pane_t5

0x5c33,	// (0x0001c5a4) popup_welc_pane_t6

0x6d8a,	// (0x0001d6fb) main_acti_pane

0x0140,	// (0x00016ab1) main_sso_pane

0xeb91,	// (0x00025502) sso_body_pane_ParamLimits

0xeb91,	// (0x00025502) sso_body_pane

0xeb9f,	// (0x00025510) sso_logo_pane_ParamLimits

0xeb9f,	// (0x00025510) sso_logo_pane

0xebc6,	// (0x00025537) sso_sk_pane_ParamLimits

0xebc6,	// (0x00025537) sso_sk_pane

0x0baf,	// (0x00017520) main_sso_logo_pane_g1

0xebd3,	// (0x00025544) sso_sk_pane_t1_ParamLimits

0xebd3,	// (0x00025544) sso_sk_pane_t1

0xebe7,	// (0x00025558) sso_sk_pane_t2_ParamLimits

0xebe7,	// (0x00025558) sso_sk_pane_t2

0x0001,

0xfead,	// (0x0002681e) sso_sk_pane_t_ParamLimits

0xfead,	// (0x0002681e) sso_sk_pane_t

0x5c71,	// (0x0001c5e2) aid_sso_gap

0x5c7a,	// (0x0001c5eb) aid_sso_txt1

0x5c84,	// (0x0001c5f5) aid_sso_txt2

0x5c8e,	// (0x0001c5ff) aid_sso_txt3

0x0002,

0xfeb2,	// (0x00026823) aid_sso_txt

0x5c98,	// (0x0001c609) aid_sso_widget

0xec46,	// (0x000255b7) sso_btn_pane_ParamLimits

0xec46,	// (0x000255b7) sso_btn_pane

0xecbf,	// (0x00025630) sso_option_pane_ParamLimits

0xecbf,	// (0x00025630) sso_option_pane

0xed39,	// (0x000256aa) sso_query_pane_ParamLimits

0xed39,	// (0x000256aa) sso_query_pane

0xed89,	// (0x000256fa) sso_query_pane_cp01_ParamLimits

0xed89,	// (0x000256fa) sso_query_pane_cp01

0xeddb,	// (0x0002574c) sso_t_hdr_pane_ParamLimits

0xeddb,	// (0x0002574c) sso_t_hdr_pane

0xedfa,	// (0x0002576b) sso_t_nml_pane_ParamLimits

0xedfa,	// (0x0002576b) sso_t_nml_pane

0x5c8e,	// (0x0001c5ff) sso_t_sub_pane

0xebac,	// (0x0002551d) sso_popup_window_ParamLimits

0xebac,	// (0x0002551d) sso_popup_window

0xebf9,	// (0x0002556a) sso_apps_pane_ParamLimits

0xebf9,	// (0x0002556a) sso_apps_pane

0xec1c,	// (0x0002558d) sso_body_pane_g1

0xec26,	// (0x00025597) sso_body_pane_t1

0xec36,	// (0x000255a7) sso_body_pane_t2

0x0001,

0xfeb9,	// (0x0002682a) sso_body_pane_t

0xec91,	// (0x00025602) sso_btn_pane_cp01_ParamLimits

0xec91,	// (0x00025602) sso_btn_pane_cp01

0xed0b,	// (0x0002567c) sso_prog_pane_ParamLimits

0xed0b,	// (0x0002567c) sso_prog_pane

0xee4a,	// (0x000257bb) sso_t_hdr_pane_t1_ParamLimits

0xee4a,	// (0x000257bb) sso_t_hdr_pane_t1

0xee5d,	// (0x000257ce) input_focus_pane_cp10_ParamLimits

0xee5d,	// (0x000257ce) input_focus_pane_cp10

0xee73,	// (0x000257e4) sso_query_pane_t1_ParamLimits

0xee73,	// (0x000257e4) sso_query_pane_t1

0xee86,	// (0x000257f7) sso_query_pane_t2_ParamLimits

0xee86,	// (0x000257f7) sso_query_pane_t2

0xee9f,	// (0x00025810) sso_query_pane_t3_ParamLimits

0xee9f,	// (0x00025810) sso_query_pane_t3

0xeec9,	// (0x0002583a) sso_query_pane_t4_ParamLimits

0xeec9,	// (0x0002583a) sso_query_pane_t4

0x0003,

0xfebe,	// (0x0002682f) sso_query_pane_t_ParamLimits

0xfebe,	// (0x0002682f) sso_query_pane_t

0x0140,	// (0x00016ab1) bg_button_pane_cp22

0x5bd2,	// (0x0001c543) sso_btn_pane_t1

0xeeed,	// (0x0002585e) sso_t_nml_pane_t1_ParamLimits

0xeeed,	// (0x0002585e) sso_t_nml_pane_t1

0xef0a,	// (0x0002587b) sso_option_row_pane_ParamLimits

0xef0a,	// (0x0002587b) sso_option_row_pane

0xef17,	// (0x00025888) sso_t_sub_pane_t1_ParamLimits

0xef17,	// (0x00025888) sso_t_sub_pane_t1

0x01af,	// (0x00016b20) bg_popup_window_pane_cp11_ParamLimits

0x01af,	// (0x00016b20) bg_popup_window_pane_cp11

0xef2a,	// (0x0002589b) popup_sk_window_cp01_ParamLimits

0xef2a,	// (0x0002589b) popup_sk_window_cp01

0xef37,	// (0x000258a8) sso_popup_body_pane_ParamLimits

0xef37,	// (0x000258a8) sso_popup_body_pane

0xef44,	// (0x000258b5) scroll_pane_cp21_ParamLimits

0xef44,	// (0x000258b5) scroll_pane_cp21

0xef51,	// (0x000258c2) sso_popup_body_t_pane_ParamLimits

0xef51,	// (0x000258c2) sso_popup_body_t_pane

0xef5e,	// (0x000258cf) sso_popup_body_t_hdr_pane_ParamLimits

0xef5e,	// (0x000258cf) sso_popup_body_t_hdr_pane

0xef6c,	// (0x000258dd) sso_popup_body_t_nml_pane_ParamLimits

0xef6c,	// (0x000258dd) sso_popup_body_t_nml_pane

0xef87,	// (0x000258f8) sso_popup_body_t_sub_pane_ParamLimits

0xef87,	// (0x000258f8) sso_popup_body_t_sub_pane

0xefaa,	// (0x0002591b) sso_popup_body_t_hdr_pane_t1

0xefba,	// (0x0002592b) sso_popup_body_t_nml_pane_t1_ParamLimits

0xefba,	// (0x0002592b) sso_popup_body_t_nml_pane_t1

0xeffe,	// (0x0002596f) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeffe,	// (0x0002596f) sso_popup_body_t_sub_pane_t1

0x0baf,	// (0x00017520) sso_prog_pane_g1

0xf023,	// (0x00025994) sso_apps_pane_comp1_ParamLimits

0xf023,	// (0x00025994) sso_apps_pane_comp1

0xf03f,	// (0x000259b0) sso_apps_pane_comp1_g1

0xf047,	// (0x000259b8) sso_apps_pane_comp1_t1

0xf055,	// (0x000259c6) sso_option_row_pane_g1

0xf05d,	// (0x000259ce) sso_option_row_pane_t1

0xe713,	// (0x00025084) bg_welc_area_ParamLimits

0xe713,	// (0x00025084) bg_welc_area

0xe860,	// (0x000251d1) sso_t_hdr_pane_a_t1_ParamLimits

0xe860,	// (0x000251d1) sso_t_hdr_pane_a_t1

0xe874,	// (0x000251e5) sso_t_nml_pane_a_t1_ParamLimits

0xe874,	// (0x000251e5) sso_t_nml_pane_a_t1

0xe89e,	// (0x0002520f) sso_t_sub_pane_a_t1_ParamLimits

0xe89e,	// (0x0002520f) sso_t_sub_pane_a_t1

0x5bd2,	// (0x0001c543) sso_btn_pane_t1_copy1

0x0140,	// (0x00016ab1) welc_button_pane_2_comp1

0x5c41,	// (0x0001c5b2) sso_t_hdr_pane_p_t1

0x5c51,	// (0x0001c5c2) sso_t_nml_pane_p_t1

0x5c61,	// (0x0001c5d2) sso_t_sub_pane_p_t1
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal

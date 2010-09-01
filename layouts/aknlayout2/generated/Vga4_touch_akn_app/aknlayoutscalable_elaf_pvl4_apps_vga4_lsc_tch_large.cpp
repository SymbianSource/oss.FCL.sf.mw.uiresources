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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00071c86 };

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
0x1689,	// (0x0007330f) Screen

0x1695,	// (0x0007331b) application_window

0x16db,	// (0x00073361) area_bottom_pane_ParamLimits

0x16db,	// (0x00073361) area_bottom_pane

0x1714,	// (0x0007339a) area_top_pane_ParamLimits

0x1714,	// (0x0007339a) area_top_pane

0xaa3d,	// (0x0007c6c3) call_video_uplink_pane_ParamLimits

0xaa3d,	// (0x0007c6c3) call_video_uplink_pane

0x17a2,	// (0x00073428) main_pane_ParamLimits

0x17a2,	// (0x00073428) main_pane

0xc049,	// (0x0007dccf) context_pane

0x5c21,	// (0x000778a7) navi_pane

0x5c58,	// (0x000778de) popup_cale_events_window_ParamLimits

0x5c58,	// (0x000778de) popup_cale_events_window

0xc05c,	// (0x0007dce2) popup_mup_playback_window

0x5c70,	// (0x000778f6) signal_pane

0x2253,	// (0x00073ed9) main_browser_pane

0x2bb1,	// (0x00074837) main_burst_pane

0x592d,	// (0x000775b3) main_calc_pane

0xbfe5,	// (0x0007dc6b) main_cale_day_pane

0x252f,	// (0x000741b5) main_cale_month_pane

0xbfe5,	// (0x0007dc6b) main_cale_week_pane

0x2bb1,	// (0x00074837) main_call_pane

0x1da3,	// (0x00073a29) main_call_poc_pane

0x2bb1,	// (0x00074837) main_camera_pane

0x2bb1,	// (0x00074837) main_chi_dic_pane

0x482c,	// (0x000764b2) main_clock_pane

0x1da3,	// (0x00073a29) main_fmradio_pane

0x2bb1,	// (0x00074837) main_graph_messa_pane

0x1da3,	// (0x00073a29) main_help_pane

0x2253,	// (0x00073ed9) main_im_pane

0x1ffe,	// (0x00073c84) main_image_pane_ParamLimits

0x1ffe,	// (0x00073c84) main_image_pane

0x1da3,	// (0x00073a29) main_location2_pane

0x2bb1,	// (0x00074837) main_location_pane

0x1ffe,	// (0x00073c84) main_messa_pane

0x1da3,	// (0x00073a29) main_mp2_pane

0x2bb1,	// (0x00074837) main_mp_pane

0x1da3,	// (0x00073a29) main_msg_pane

0x1da3,	// (0x00073a29) main_mup_eq_pane

0x1da3,	// (0x00073a29) main_mup_pane

0x2253,	// (0x00073ed9) main_notes_pane

0x1da3,	// (0x00073a29) main_pec_pane

0x1da3,	// (0x00073a29) main_phob_pane

0x1da3,	// (0x00073a29) main_pinb_pane

0x1da3,	// (0x00073a29) main_postcard_pane

0x1da3,	// (0x00073a29) main_qdial_pane

0x2bb1,	// (0x00074837) main_skin_pane

0x1da3,	// (0x00073a29) main_smil2_pane

0x2bb1,	// (0x00074837) main_smil_pane

0x2bb1,	// (0x00074837) main_video_pane

0x2bb1,	// (0x00074837) main_video_tele_pane

0x1ffe,	// (0x00073c84) main_viewer_pane_ParamLimits

0x1ffe,	// (0x00073c84) main_viewer_pane

0x2bb1,	// (0x00074837) main_vorec_pane

0x598f,	// (0x00077615) popup_blid_sat_info_window_ParamLimits

0x598f,	// (0x00077615) popup_blid_sat_info_window

0x59f3,	// (0x00077679) popup_dyc_status_message_window_ParamLimits

0x59f3,	// (0x00077679) popup_dyc_status_message_window

0x5a0d,	// (0x00077693) popup_grid_large_graphic_window_ParamLimits

0x5a0d,	// (0x00077693) popup_grid_large_graphic_window

0x5acf,	// (0x00077755) popup_loc_request_window_ParamLimits

0x5acf,	// (0x00077755) popup_loc_request_window

0x5bf5,	// (0x0007787b) popup_wml_address_window_ParamLimits

0x5bf5,	// (0x0007787b) popup_wml_address_window

0x576b,	// (0x000773f1) call_muted_g1

0x53b9,	// (0x0007703f) popup_call_audio_conf_window_ParamLimits

0x53b9,	// (0x0007703f) popup_call_audio_conf_window

0x577b,	// (0x00077401) popup_call_audio_first_window_ParamLimits

0x577b,	// (0x00077401) popup_call_audio_first_window

0x57f1,	// (0x00077477) popup_call_audio_in_window_ParamLimits

0x57f1,	// (0x00077477) popup_call_audio_in_window

0x582d,	// (0x000774b3) popup_call_audio_out_window_ParamLimits

0x582d,	// (0x000774b3) popup_call_audio_out_window

0x5867,	// (0x000774ed) popup_call_audio_second_window_ParamLimits

0x5867,	// (0x000774ed) popup_call_audio_second_window

0x58bd,	// (0x00077543) popup_call_audio_wait_window_ParamLimits

0x58bd,	// (0x00077543) popup_call_audio_wait_window

0x58f2,	// (0x00077578) popup_number_entry_window_ParamLimits

0x58f2,	// (0x00077578) popup_number_entry_window

0x1937,	// (0x000735bd) bg_popup_call_pane_cp05_ParamLimits

0x1937,	// (0x000735bd) bg_popup_call_pane_cp05

0x1957,	// (0x000735dd) popup_number_entry_window_t1

0x196a,	// (0x000735f0) popup_number_entry_window_t2

0x197c,	// (0x00073602) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00080d0b) popup_number_entry_window_t

0x19c3,	// (0x00073649) text_title_cp2

0x19d6,	// (0x0007365c) bg_popup_call_pane_cp_ParamLimits

0x19d6,	// (0x0007365c) bg_popup_call_pane_cp

0x19e4,	// (0x0007366a) call_thumbnail_pane

0x19ec,	// (0x00073672) popup_call_audio_in_window_g1_ParamLimits

0x19ec,	// (0x00073672) popup_call_audio_in_window_g1

0x19f8,	// (0x0007367e) popup_call_audio_in_window_g2_ParamLimits

0x19f8,	// (0x0007367e) popup_call_audio_in_window_g2

0x1a04,	// (0x0007368a) popup_call_audio_in_window_g3_ParamLimits

0x1a04,	// (0x0007368a) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00080d14) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00080d14) popup_call_audio_in_window_g

0x1a10,	// (0x00073696) popup_call_audio_in_window_t1_ParamLimits

0x1a10,	// (0x00073696) popup_call_audio_in_window_t1

0x1a2c,	// (0x000736b2) popup_call_audio_in_window_t2_ParamLimits

0x1a2c,	// (0x000736b2) popup_call_audio_in_window_t2

0x1a48,	// (0x000736ce) popup_call_audio_in_window_t3_ParamLimits

0x1a48,	// (0x000736ce) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00080d1b) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00080d1b) popup_call_audio_in_window_t

0x19d6,	// (0x0007365c) bg_popup_call_pane_cp01_ParamLimits

0x19d6,	// (0x0007365c) bg_popup_call_pane_cp01

0x19e4,	// (0x0007366a) call_thumbnail_pane_cp02

0x1a5b,	// (0x000736e1) call_type_pane_cp022

0x1a63,	// (0x000736e9) popup_call_audio_out_window_g1_ParamLimits

0x1a63,	// (0x000736e9) popup_call_audio_out_window_g1

0x1a75,	// (0x000736fb) popup_call_audio_out_window_g2_ParamLimits

0x1a75,	// (0x000736fb) popup_call_audio_out_window_g2

0x1a81,	// (0x00073707) popup_call_audio_out_window_g3_ParamLimits

0x1a81,	// (0x00073707) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00080d22) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00080d22) popup_call_audio_out_window_g

0x1a93,	// (0x00073719) popup_call_audio_out_window_t1_ParamLimits

0x1a93,	// (0x00073719) popup_call_audio_out_window_t1

0x1aab,	// (0x00073731) popup_call_audio_out_window_t2_ParamLimits

0x1aab,	// (0x00073731) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00080d29) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00080d29) popup_call_audio_out_window_t

0x1ac0,	// (0x00073746) bg_popup_call_pane_ParamLimits

0x1ac0,	// (0x00073746) bg_popup_call_pane

0x1b44,	// (0x000737ca) call_thumbnail_pane_cp_ParamLimits

0x1b44,	// (0x000737ca) call_thumbnail_pane_cp

0x1b68,	// (0x000737ee) call_type_pane_cp01_ParamLimits

0x1b68,	// (0x000737ee) call_type_pane_cp01

0x1bac,	// (0x00073832) popup_call_audio_first_window_g1_ParamLimits

0x1bac,	// (0x00073832) popup_call_audio_first_window_g1

0x1bf8,	// (0x0007387e) popup_call_audio_first_window_g2_ParamLimits

0x1bf8,	// (0x0007387e) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00080d2e) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00080d2e) popup_call_audio_first_window_g

0x1c3c,	// (0x000738c2) popup_call_audio_first_window_t1_ParamLimits

0x1c3c,	// (0x000738c2) popup_call_audio_first_window_t1

0x1ce8,	// (0x0007396e) popup_call_audio_first_window_t4_ParamLimits

0x1ce8,	// (0x0007396e) popup_call_audio_first_window_t4

0x1d74,	// (0x000739fa) popup_call_audio_first_window_t5_ParamLimits

0x1d74,	// (0x000739fa) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00080d33) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00080d33) popup_call_audio_first_window_t

0x1da3,	// (0x00073a29) bg_popup_call_pane_cp02

0x1dad,	// (0x00073a33) call_type_pane_cp023

0x1db5,	// (0x00073a3b) popup_call_audio_wait_window_g1

0x1dbd,	// (0x00073a43) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00080d3a) popup_call_audio_wait_window_g

0x1dc5,	// (0x00073a4b) popup_call_audio_wait_window_t3

0x1dd3,	// (0x00073a59) bg_popup_call_pane_cp03_ParamLimits

0x1dd3,	// (0x00073a59) bg_popup_call_pane_cp03

0x1e33,	// (0x00073ab9) call_thumbnail_pane_cp011_ParamLimits

0x1e33,	// (0x00073ab9) call_thumbnail_pane_cp011

0x1e3f,	// (0x00073ac5) call_type_pane_cp034_ParamLimits

0x1e3f,	// (0x00073ac5) call_type_pane_cp034

0x1e7b,	// (0x00073b01) popup_call_audio_second_window_g1_ParamLimits

0x1e7b,	// (0x00073b01) popup_call_audio_second_window_g1

0x1eb7,	// (0x00073b3d) popup_call_audio_second_window_g2_ParamLimits

0x1eb7,	// (0x00073b3d) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00080d3f) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00080d3f) popup_call_audio_second_window_g

0x1ef3,	// (0x00073b79) popup_call_audio_second_window_t1_ParamLimits

0x1ef3,	// (0x00073b79) popup_call_audio_second_window_t1

0x1f74,	// (0x00073bfa) popup_call_audio_second_window_t2_ParamLimits

0x1f74,	// (0x00073bfa) popup_call_audio_second_window_t2

0x1faa,	// (0x00073c30) popup_call_audio_second_window_t3_ParamLimits

0x1faa,	// (0x00073c30) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00080d44) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00080d44) popup_call_audio_second_window_t

0x1da3,	// (0x00073a29) bg_popup_call_pane_cp04

0x1fe0,	// (0x00073c66) list_conf_pane

0x1fe8,	// (0x00073c6e) popup_call_audio_conf_window_t1

0x1ff6,	// (0x00073c7c) call_thumbnail_pane_g1

0x1ffe,	// (0x00073c84) bg_pinb_pane_ParamLimits

0x1ffe,	// (0x00073c84) bg_pinb_pane

0x200c,	// (0x00073c92) find_pinb_pane

0x1ffe,	// (0x00073c84) listscroll_pinb_pane_ParamLimits

0x1ffe,	// (0x00073c84) listscroll_pinb_pane

0x2016,	// (0x00073c9c) pinb_bg_pane_g1

0x2016,	// (0x00073c9c) pinb_bg_pane_g2

0x2016,	// (0x00073c9c) pinb_bg_pane_g3

0x2016,	// (0x00073c9c) pinb_bg_pane_g4

0x2016,	// (0x00073c9c) pinb_bg_pane_g5

0x2016,	// (0x00073c9c) pinb_bg_pane_g6

0x2016,	// (0x00073c9c) pinb_bg_pane_g7

0x2016,	// (0x00073c9c) pinb_bg_pane_g8

0x2016,	// (0x00073c9c) pinb_bg_pane_g9

0x2016,	// (0x00073c9c) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00080d4b) pinb_bg_pane_g

0x16a1,	// (0x00073327) grid_pinb_pane

0x16a1,	// (0x00073327) list_pinb_pane

0x18cb,	// (0x00073551) scroll_pane_cp01_ParamLimits

0x18cb,	// (0x00073551) scroll_pane_cp01

0x2020,	// (0x00073ca6) find_pinb_pane_g1_ParamLimits

0x2020,	// (0x00073ca6) find_pinb_pane_g1

0x2038,	// (0x00073cbe) find_pinb_pane_t1

0x204a,	// (0x00073cd0) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00080d65) find_pinb_pane_t

0x205f,	// (0x00073ce5) input_focus_pane_cp01_ParamLimits

0x205f,	// (0x00073ce5) input_focus_pane_cp01

0x206b,	// (0x00073cf1) cell_pinb_pane_ParamLimits

0x206b,	// (0x00073cf1) cell_pinb_pane

0x2079,	// (0x00073cff) cell_pinb_pane_g1_ParamLimits

0x2079,	// (0x00073cff) cell_pinb_pane_g1

0x2087,	// (0x00073d0d) cell_pinb_pane_g2_ParamLimits

0x2087,	// (0x00073d0d) cell_pinb_pane_g2

0x2087,	// (0x00073d0d) cell_pinb_pane_g3_ParamLimits

0x2087,	// (0x00073d0d) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00080d6a) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00080d6a) cell_pinb_pane_g

0x1da3,	// (0x00073a29) grid_highlight_pane_cp01

0x206b,	// (0x00073cf1) list_pinb_item_pane_ParamLimits

0x206b,	// (0x00073cf1) list_pinb_item_pane

0x16a1,	// (0x00073327) list_highlight_pane_cp02

0x2095,	// (0x00073d1b) list_pinb_item_pane_g1_ParamLimits

0x2095,	// (0x00073d1b) list_pinb_item_pane_g1

0x2087,	// (0x00073d0d) list_pinb_item_pane_g2_ParamLimits

0x2087,	// (0x00073d0d) list_pinb_item_pane_g2

0x2079,	// (0x00073cff) list_pinb_item_pane_g3_ParamLimits

0x2079,	// (0x00073cff) list_pinb_item_pane_g3

0x2087,	// (0x00073d0d) list_pinb_item_pane_g4_ParamLimits

0x2087,	// (0x00073d0d) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00080d71) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00080d71) list_pinb_item_pane_g

0x20a3,	// (0x00073d29) list_pinb_item_pane_t1_ParamLimits

0x20a3,	// (0x00073d29) list_pinb_item_pane_t1

0x20d7,	// (0x00073d5d) calc_display_pane

0x20fc,	// (0x00073d82) calc_paper_pane

0x211f,	// (0x00073da5) grid_calc_pane

0x1da3,	// (0x00073a29) bg_list_pane_cp01

0x214d,	// (0x00073dd3) clock_g1

0x2155,	// (0x00073ddb) clock_g2

0x0001,

0xf0f4,	// (0x00080d7a) clock_g

0x215d,	// (0x00073de3) clock_t1_ParamLimits

0x215d,	// (0x00073de3) clock_t1

0x2172,	// (0x00073df8) clock_t2_ParamLimits

0x2172,	// (0x00073df8) clock_t2

0x2184,	// (0x00073e0a) clock_t3_ParamLimits

0x2184,	// (0x00073e0a) clock_t3

0x2196,	// (0x00073e1c) clock_t4_ParamLimits

0x2196,	// (0x00073e1c) clock_t4

0x21a8,	// (0x00073e2e) clock_t5_ParamLimits

0x21a8,	// (0x00073e2e) clock_t5

0x21bd,	// (0x00073e43) clock_t6_ParamLimits

0x21bd,	// (0x00073e43) clock_t6

0x21cf,	// (0x00073e55) clock_t7_ParamLimits

0x21cf,	// (0x00073e55) clock_t7

0x21e1,	// (0x00073e67) clock_t8_ParamLimits

0x21e1,	// (0x00073e67) clock_t8

0x21f5,	// (0x00073e7b) clock_t9_ParamLimits

0x21f5,	// (0x00073e7b) clock_t9

0x0008,

0xf0f9,	// (0x00080d7f) clock_t_ParamLimits

0xf0f9,	// (0x00080d7f) clock_t

0x220b,	// (0x00073e91) popup_clock_analogue_window_cp02

0x220b,	// (0x00073e91) popup_clock_digital_window_cp01

0x1da3,	// (0x00073a29) listscroll_help_pane

0x1da3,	// (0x00073a29) phob_pre_status_pane

0x2213,	// (0x00073e99) grid_qdial_pane

0x1ffe,	// (0x00073c84) listscroll_mce_pane

0x1ffe,	// (0x00073c84) bg_notes_pane

0x221d,	// (0x00073ea3) list_notes_pane

0x222b,	// (0x00073eb1) scroll_pane_cp06

0x223f,	// (0x00073ec5) bg_calc_paper_pane

0xaa63,	// (0x0007c6e9) list_calc_pane

0x2253,	// (0x00073ed9) bg_calc_display_pane

0x225f,	// (0x00073ee5) calc_display_pane_t1

0x2271,	// (0x00073ef7) calc_display_pane_t2

0xaa7d,	// (0x0007c703) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00080d92) calc_display_pane_t

0x2283,	// (0x00073f09) cell_calc_pane_ParamLimits

0x2283,	// (0x00073f09) cell_calc_pane

0x22be,	// (0x00073f44) bg_calc_paper_pane_g1

0x22ca,	// (0x00073f50) bg_calc_paper_pane_g2

0x22d6,	// (0x00073f5c) bg_calc_paper_pane_g3

0x22e2,	// (0x00073f68) bg_calc_paper_pane_g4

0x22ee,	// (0x00073f74) bg_calc_paper_pane_g5

0x22fa,	// (0x00073f80) bg_calc_paper_pane_g6

0x2308,	// (0x00073f8e) bg_calc_paper_pane_g7

0x2316,	// (0x00073f9c) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00080d99) bg_calc_paper_pane_g

0x2329,	// (0x00073faf) calc_bg_paper_pane_g9

0x233c,	// (0x00073fc2) list_calc_item_pane_ParamLimits

0x233c,	// (0x00073fc2) list_calc_item_pane

0x2354,	// (0x00073fda) list_calc_item_pane_g1

0xaa8f,	// (0x0007c715) list_calc_item_pane_t1_ParamLimits

0xaa8f,	// (0x0007c715) list_calc_item_pane_t1

0x2361,	// (0x00073fe7) list_calc_item_pane_t2_ParamLimits

0x2361,	// (0x00073fe7) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00080daa) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00080daa) list_calc_item_pane_t

0x2016,	// (0x00073c9c) cell_calc_pane_g1

0x2393,	// (0x00074019) grid_highlight_pane_cp02

0x23b5,	// (0x0007403b) bg_calc_display_pane_g1

0x23be,	// (0x00074044) bg_calc_display_pane_g2

0x23c8,	// (0x0007404e) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00080db4) bg_calc_display_pane_g

0x23d1,	// (0x00074057) cell_qdial_pane_ParamLimits

0x23d1,	// (0x00074057) cell_qdial_pane

0x23e5,	// (0x0007406b) cell_qdial_pane_g1_ParamLimits

0x23e5,	// (0x0007406b) cell_qdial_pane_g1

0x23fb,	// (0x00074081) cell_qdial_pane_g2_ParamLimits

0x23fb,	// (0x00074081) cell_qdial_pane_g2

0x240c,	// (0x00074092) cell_qdial_pane_g3_ParamLimits

0x240c,	// (0x00074092) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00080dbb) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00080dbb) cell_qdial_pane_g

0x242e,	// (0x000740b4) cell_qdial_pane_t1_ParamLimits

0x242e,	// (0x000740b4) cell_qdial_pane_t1

0x2446,	// (0x000740cc) cell_qdial_pane_t2_ParamLimits

0x2446,	// (0x000740cc) cell_qdial_pane_t2

0x2459,	// (0x000740df) cell_qdial_pane_t3_ParamLimits

0x2459,	// (0x000740df) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00080dc4) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00080dc4) cell_qdial_pane_t

0x1da3,	// (0x00073a29) grid_highlight_pane_cp04

0x246c,	// (0x000740f2) thumbnail_qdial_pane_ParamLimits

0x246c,	// (0x000740f2) thumbnail_qdial_pane

0x24c8,	// (0x0007414e) list_help_pane

0x24d1,	// (0x00074157) scroll_pane_cp02

0x24da,	// (0x00074160) help_list_pane_t1_ParamLimits

0x24da,	// (0x00074160) help_list_pane_t1

0xaaa1,	// (0x0007c727) bg_notes_pane_g2

0xaaa9,	// (0x0007c72f) bg_notes_pane_g3

0xaab1,	// (0x0007c737) notes_bg_pane_g1

0xaab9,	// (0x0007c73f) notes_bg_pane_g4

0xaac1,	// (0x0007c747) notes_bg_pane_g5

0xaac9,	// (0x0007c74f) notes_bg_pane_g6

0xaad1,	// (0x0007c757) notes_bg_pane_g7

0xaad9,	// (0x0007c75f) notes_bg_pane_g8

0xaae1,	// (0x0007c767) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00080de2) notes_bg_pane_g

0x24fe,	// (0x00074184) list_notes_text_pane_ParamLimits

0x24fe,	// (0x00074184) list_notes_text_pane

0x2515,	// (0x0007419b) list_notes_text_pane_g1

0x0e1c,	// (0x00072aa2) list_notes_text_pane_t1

0x252f,	// (0x000741b5) listscroll_cale_week_pane

0x2562,	// (0x000741e8) bg_cale_heading_pane

0x2586,	// (0x0007420c) bg_cale_pane_cp01

0x25a3,	// (0x00074229) cale_week_corner_pane

0x25c2,	// (0x00074248) cale_week_day_heading_pane

0x25eb,	// (0x00074271) cale_week_scroll_pane_g1

0x260a,	// (0x00074290) cale_week_scroll_pane_g2

0x2622,	// (0x000742a8) cale_week_scroll_pane_g3

0x263a,	// (0x000742c0) cale_week_scroll_pane_g4

0x2652,	// (0x000742d8) cale_week_scroll_pane_g5

0x2672,	// (0x000742f8) cale_week_scroll_pane_g6

0x2692,	// (0x00074318) cale_week_scroll_pane_g7

0x26b6,	// (0x0007433c) cale_week_scroll_pane_g8

0x26da,	// (0x00074360) cale_week_scroll_pane_g9

0x26f2,	// (0x00074378) cale_week_scroll_pane_g10

0x270a,	// (0x00074390) cale_week_scroll_pane_g11

0x2722,	// (0x000743a8) cale_week_scroll_pane_g12

0x2746,	// (0x000743cc) cale_week_scroll_pane_g13

0x2746,	// (0x000743cc) cale_week_scroll_pane_g14

0x2746,	// (0x000743cc) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00080df1) cale_week_scroll_pane_g

0x278e,	// (0x00074414) cale_week_time_pane

0x27b2,	// (0x00074438) grid_cale_week_pane

0x27f6,	// (0x0007447c) scroll_pane_cp08

0x2813,	// (0x00074499) cell_cale_week_pane_ParamLimits

0x2813,	// (0x00074499) cell_cale_week_pane

0x28af,	// (0x00074535) cale_week_day_heading_pane_t1

0x28d9,	// (0x0007455f) cale_week_day_heading_pane_t2

0x2908,	// (0x0007458e) cale_week_day_heading_pane_t3

0x2937,	// (0x000745bd) cale_week_day_heading_pane_t4

0x2966,	// (0x000745ec) cale_week_day_heading_pane_t5

0x2999,	// (0x0007461f) cale_week_day_heading_pane_t6

0x29d0,	// (0x00074656) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00080e12) cale_week_day_heading_pane_t

0x29fa,	// (0x00074680) bg_cale_side_pane

0x2a08,	// (0x0007468e) cale_week_time_pane_t1

0x2a22,	// (0x000746a8) cale_week_time_pane_t2

0x2a3c,	// (0x000746c2) cale_week_time_pane_t3

0x2a56,	// (0x000746dc) cale_week_time_pane_t4

0x2a70,	// (0x000746f6) cale_week_time_pane_t5

0x2a8a,	// (0x00074710) cale_week_time_pane_t6

0x2aaa,	// (0x00074730) cale_week_time_pane_t7

0x2ad0,	// (0x00074756) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00080e21) cale_week_time_pane_t

0x2af6,	// (0x0007477c) cell_cale_week_pane_g2

0x2b1a,	// (0x000747a0) cell_cale_week_pane_g3_ParamLimits

0x2b1a,	// (0x000747a0) cell_cale_week_pane_g3

0x2b32,	// (0x000747b8) grid_highlight_pane_cp07

0x2b3a,	// (0x000747c0) listscroll_gms_pane

0x2b44,	// (0x000747ca) grid_gms_pane

0x2b4d,	// (0x000747d3) listscroll_gms_pane_g1

0x2b55,	// (0x000747db) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00080e32) listscroll_gms_pane_g

0x2b5d,	// (0x000747e3) scroll_pane_cp010

0x2b68,	// (0x000747ee) cell_gms_pane_ParamLimits

0x2b68,	// (0x000747ee) cell_gms_pane

0x2b7f,	// (0x00074805) cell_gms_pane_g1

0x2b87,	// (0x0007480d) cell_gms_pane_g2

0x2b8f,	// (0x00074815) cell_gms_pane_g3

0x2b98,	// (0x0007481e) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00080e37) cell_gms_pane_g

0x2ba1,	// (0x00074827) grid_highlight_pane_cp09

0x56ef,	// (0x00077375) phob_pre_status_pane_g1

0x56f7,	// (0x0007737d) phob_pre_status_pane_g2

0x56ff,	// (0x00077385) phob_pre_status_pane_g3

0x5707,	// (0x0007738d) phob_pre_status_pane_g4

0x0004,

0xf575,	// (0x000811fb) phob_pre_status_pane_g

0x5717,	// (0x0007739d) phob_pre_status_pane_t1

0x5727,	// (0x000773ad) phob_pre_status_pane_t2

0x5737,	// (0x000773bd) phob_pre_status_pane_t3

0x0002,

0xf580,	// (0x00081206) phob_pre_status_pane_t

0x2bb1,	// (0x00074837) bg_list_pane_cp05

0x2bb9,	// (0x0007483f) grid_vorec_pane

0x2bc3,	// (0x00074849) vorec_t1

0x2bd1,	// (0x00074857) vorec_t2

0x2bdf,	// (0x00074865) vorec_t3

0x2bed,	// (0x00074873) vorec_t4

0xa7e5,	// (0x0007c46b) vorec_t5

0xa7f3,	// (0x0007c479) vorec_t6

0x0004,

0xf1ba,	// (0x00080e40) vorec_t

0xa801,	// (0x0007c487) wait_bar_pane_cp01

0x2c09,	// (0x0007488f) cell_vorec_pane_ParamLimits

0x2c09,	// (0x0007488f) cell_vorec_pane

0xaae9,	// (0x0007c76f) cell_vorec_pane_g1

0x1da3,	// (0x00073a29) grid_highlight_pane_cp05

0x18cb,	// (0x00073551) cams_zoom_pane

0x18cb,	// (0x00073551) image_vga_pane

0x2079,	// (0x00073cff) main_camera_pane_g1

0x2079,	// (0x00073cff) main_camera_pane_g2

0x2079,	// (0x00073cff) main_camera_pane_g3

0x2079,	// (0x00073cff) main_camera_pane_g4

0x2079,	// (0x00073cff) main_camera_pane_g5

0x2079,	// (0x00073cff) main_camera_pane_g6

0x2079,	// (0x00073cff) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00080e4b) main_camera_pane_g

0x2c1e,	// (0x000748a4) main_camera_pane_t1

0x2c1e,	// (0x000748a4) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00080e5c) main_camera_pane_t

0x2c46,	// (0x000748cc) cams_zoom_pane_cp_ParamLimits

0x2c46,	// (0x000748cc) cams_zoom_pane_cp

0x2c7a,	// (0x00074900) image_cif_pane_ParamLimits

0x2c7a,	// (0x00074900) image_cif_pane

0x16a1,	// (0x00073327) image_subqcif_pane

0x2c8c,	// (0x00074912) main_video_pane_g1_ParamLimits

0x2c8c,	// (0x00074912) main_video_pane_g1

0x2cba,	// (0x00074940) main_video_pane_g2_ParamLimits

0x2cba,	// (0x00074940) main_video_pane_g2

0x2cf4,	// (0x0007497a) main_video_pane_g3_ParamLimits

0x2cf4,	// (0x0007497a) main_video_pane_g3

0x2cf4,	// (0x0007497a) main_video_pane_g4_ParamLimits

0x2cf4,	// (0x0007497a) main_video_pane_g4

0x2d28,	// (0x000749ae) main_video_pane_g5_ParamLimits

0x2d28,	// (0x000749ae) main_video_pane_g5

0x2d36,	// (0x000749bc) main_video_pane_g6_ParamLimits

0x2d36,	// (0x000749bc) main_video_pane_g6

0x0006,

0xf1db,	// (0x00080e61) main_video_pane_g_ParamLimits

0xf1db,	// (0x00080e61) main_video_pane_g

0x2d5e,	// (0x000749e4) main_video_pane_t1_ParamLimits

0x2d5e,	// (0x000749e4) main_video_pane_t1

0x2da2,	// (0x00074a28) cams_zoom_pane_g1

0x2da2,	// (0x00074a28) cams_zoom_pane_g2

0x2da2,	// (0x00074a28) cams_zoom_pane_g3

0x2da2,	// (0x00074a28) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00080e70) cams_zoom_pane_g

0x2dc0,	// (0x00074a46) grid_cams_pane

0x2dda,	// (0x00074a60) linegrid_cams_pane

0x2dec,	// (0x00074a72) cell_cams_pane_ParamLimits

0x2dec,	// (0x00074a72) cell_cams_pane

0x2e0e,	// (0x00074a94) cams_burst_image_pane

0x2e16,	// (0x00074a9c) cell_cams_pane_g1

0x1da3,	// (0x00073a29) grid_highlight_pane_cp03

0x2016,	// (0x00073c9c) mp_bg_pane_g1

0x16a1,	// (0x00073327) bg_list_pane_cp03

0x16a1,	// (0x00073327) bg_mp_pane

0x16a1,	// (0x00073327) grid_mp_pane

0x2da2,	// (0x00074a28) media_player_g1

0x4538,	// (0x000761be) media_player_t1

0x4538,	// (0x000761be) media_player_t2

0x4538,	// (0x000761be) media_player_t3

0x4538,	// (0x000761be) media_player_t4

0x4538,	// (0x000761be) media_player_t5

0x4538,	// (0x000761be) media_player_t6

0x4538,	// (0x000761be) media_player_t7

0x0006,

0xf55f,	// (0x000811e5) media_player_t

0x16a1,	// (0x00073327) wait_bar_pane_cp02

0xf544,	// (0x000811ca) main_usb_pane_t

0x482c,	// (0x000764b2) cell_mp_pane

0x2016,	// (0x00073c9c) cell_mp_pane_g1

0x1da3,	// (0x00073a29) grid_highlight_pane_cp06

0x2e1e,	// (0x00074aa4) grid_skin_colour_pane

0x2e26,	// (0x00074aac) list_highlight_pane_cp03

0x2e2e,	// (0x00074ab4) skin_g1

0x2e38,	// (0x00074abe) skin_t1

0x2e47,	// (0x00074acd) skin_t2

0x0001,

0xf218,	// (0x00080e9e) skin_t

0x2e55,	// (0x00074adb) cell_skin_colour_pane_ParamLimits

0x2e55,	// (0x00074adb) cell_skin_colour_pane

0x2e75,	// (0x00074afb) cell_skin_colour_pane_g1

0x2eda,	// (0x00074b60) call_video_g1_ParamLimits

0x2eda,	// (0x00074b60) call_video_g1

0x2ef6,	// (0x00074b7c) call_video_g2_ParamLimits

0x2ef6,	// (0x00074b7c) call_video_g2

0x0001,

0xf21d,	// (0x00080ea3) call_video_g_ParamLimits

0xf21d,	// (0x00080ea3) call_video_g

0x2f3b,	// (0x00074bc1) call_video_uplink_pane_cp1_ParamLimits

0x2f3b,	// (0x00074bc1) call_video_uplink_pane_cp1

0x2fa0,	// (0x00074c26) call_video_uplink_pane_cp2

0x2fe4,	// (0x00074c6a) video_down_crop_pane_ParamLimits

0x2fe4,	// (0x00074c6a) video_down_crop_pane

0x30cd,	// (0x00074d53) video_down_pane_ParamLimits

0x30cd,	// (0x00074d53) video_down_pane

0x31bf,	// (0x00074e45) video_down_subqcif_pane_ParamLimits

0x31bf,	// (0x00074e45) video_down_subqcif_pane

0x31d9,	// (0x00074e5f) video_down_subqcif_pane_cp_ParamLimits

0x31d9,	// (0x00074e5f) video_down_subqcif_pane_cp

0x321a,	// (0x00074ea0) im_reading_pane_ParamLimits

0x321a,	// (0x00074ea0) im_reading_pane

0x322c,	// (0x00074eb2) im_writing_pane_ParamLimits

0x322c,	// (0x00074eb2) im_writing_pane

0x3252,	// (0x00074ed8) im_reading_pane_t1

0x3291,	// (0x00074f17) list_im_pane

0x32a2,	// (0x00074f28) scroll_pane_cp07

0x32bb,	// (0x00074f41) im_writing_pane_t1_ParamLimits

0x32bb,	// (0x00074f41) im_writing_pane_t1

0x32d0,	// (0x00074f56) im_writing_pane_t2_ParamLimits

0x32d0,	// (0x00074f56) im_writing_pane_t2

0x0001,

0xf227,	// (0x00080ead) im_writing_pane_t_ParamLimits

0xf227,	// (0x00080ead) im_writing_pane_t

0x1da3,	// (0x00073a29) input_focus_pane_cp04

0x1da3,	// (0x00073a29) input_focus_pane_cp05

0x32ed,	// (0x00074f73) list_im_single_pane_ParamLimits

0x32ed,	// (0x00074f73) list_im_single_pane

0x3306,	// (0x00074f8c) list_single_im_pane_t1

0x2bb1,	// (0x00074837) blid_accuracy_pane

0x2bb1,	// (0x00074837) blid_compass_pane

0xbf9d,	// (0x0007dc23) main_location_t1

0xbf9d,	// (0x0007dc23) main_location_t2

0xbf9d,	// (0x0007dc23) main_location_t3

0x0002,

0xf56e,	// (0x000811f4) main_location_t

0x1da3,	// (0x00073a29) aid_levels_location

0x2016,	// (0x00073c9c) blid_accuracy_pane_g1

0x2016,	// (0x00073c9c) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x00080efc) blid_accuracy_pane_g

0x3340,	// (0x00074fc6) wml_content_pane

0x337e,	// (0x00075004) wml_button_pane_ParamLimits

0x337e,	// (0x00075004) wml_button_pane

0x3392,	// (0x00075018) wml_list_single_large_pane_ParamLimits

0x3392,	// (0x00075018) wml_list_single_large_pane

0x33ab,	// (0x00075031) wml_list_single_medium_pane_ParamLimits

0x33ab,	// (0x00075031) wml_list_single_medium_pane

0x33c5,	// (0x0007504b) wml_list_single_small_pane_ParamLimits

0x33c5,	// (0x0007504b) wml_list_single_small_pane

0x33e4,	// (0x0007506a) wml_selection_box_pane_ParamLimits

0x33e4,	// (0x0007506a) wml_selection_box_pane

0x33f7,	// (0x0007507d) wml_list_single_pane_t1

0x3406,	// (0x0007508c) wml_list_single_medium_pane_t1

0x3415,	// (0x0007509b) wml_list_single_large_pane_t1

0x3424,	// (0x000750aa) input_focus_pane_cp02_ParamLimits

0x3424,	// (0x000750aa) input_focus_pane_cp02

0x3437,	// (0x000750bd) wml_selection_box_pane_g1

0x3440,	// (0x000750c6) wml_selection_box_pane_t1_ParamLimits

0x3440,	// (0x000750c6) wml_selection_box_pane_t1

0x1ffe,	// (0x00073c84) bg_wml_button_pane_ParamLimits

0x1ffe,	// (0x00073c84) bg_wml_button_pane

0x3458,	// (0x000750de) wml_button_pane_g1

0x3460,	// (0x000750e6) wml_button_pane_t1

0x3458,	// (0x000750de) wml_button_bg_pane_g1

0x3470,	// (0x000750f6) wml_button_bg_pane_g2

0x3478,	// (0x000750fe) wml_button_bg_pane_g3

0x3480,	// (0x00075106) wml_button_bg_pane_g4

0x3488,	// (0x0007510e) wml_button_bg_pane_g5

0x3490,	// (0x00075116) wml_button_bg_pane_g6

0x3498,	// (0x0007511e) wml_button_bg_pane_g7

0x34a0,	// (0x00075126) wml_button_bg_pane_g8

0x34a8,	// (0x0007512e) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00080eb2) wml_button_bg_pane_g

0x34b0,	// (0x00075136) bg_list_pane_cp02

0x34ba,	// (0x00075140) mce_header_pane_ParamLimits

0x34ba,	// (0x00075140) mce_header_pane

0x34d0,	// (0x00075156) mce_icon_pane

0x34d0,	// (0x00075156) mce_image_pane

0x34d9,	// (0x0007515f) mce_text_pane_ParamLimits

0x34d9,	// (0x0007515f) mce_text_pane

0x34ec,	// (0x00075172) scroll_pane_cp03

0x3376,	// (0x00074ffc) scroll_pane_cp04

0x34f6,	// (0x0007517c) scroll_pane_cp05_ParamLimits

0x34f6,	// (0x0007517c) scroll_pane_cp05

0x3502,	// (0x00075188) mce_header_field_pane_ParamLimits

0x3502,	// (0x00075188) mce_header_field_pane

0x351b,	// (0x000751a1) mce_header_field_pane_2_ParamLimits

0x351b,	// (0x000751a1) mce_header_field_pane_2

0x3531,	// (0x000751b7) mce_header_field_pane_3

0x3539,	// (0x000751bf) list_single_mce_message_pane_ParamLimits

0x3539,	// (0x000751bf) list_single_mce_message_pane

0x3555,	// (0x000751db) list_single_mce_smart_pane_ParamLimits

0x3555,	// (0x000751db) list_single_mce_smart_pane

0x357c,	// (0x00075202) input_focus_pane_cp03

0x3585,	// (0x0007520b) list_header_data_pane

0x358d,	// (0x00075213) mce_header_field_pane_t1

0x359d,	// (0x00075223) list_single_mce_header_pane_ParamLimits

0x359d,	// (0x00075223) list_single_mce_header_pane

0x35b1,	// (0x00075237) list_single_mce_header_pane_t1

0x35c0,	// (0x00075246) list_single_mce_message_pane_g1

0x35c8,	// (0x0007524e) list_single_mce_message_pane_t1

0x35fc,	// (0x00075282) bg_cale_heading_pane_cp01_ParamLimits

0x35fc,	// (0x00075282) bg_cale_heading_pane_cp01

0x364e,	// (0x000752d4) bg_cale_pane_cp02_ParamLimits

0x364e,	// (0x000752d4) bg_cale_pane_cp02

0x367b,	// (0x00075301) cale_month_corner_pane

0x369a,	// (0x00075320) cale_month_day_heading_pane_ParamLimits

0x369a,	// (0x00075320) cale_month_day_heading_pane

0x3704,	// (0x0007538a) cale_month_pane_g1_ParamLimits

0x3704,	// (0x0007538a) cale_month_pane_g1

0x374b,	// (0x000753d1) cale_month_pane_g2_ParamLimits

0x374b,	// (0x000753d1) cale_month_pane_g2

0x3787,	// (0x0007540d) cale_month_pane_g3_ParamLimits

0x3787,	// (0x0007540d) cale_month_pane_g3

0x37db,	// (0x00075461) cale_month_pane_g4_ParamLimits

0x37db,	// (0x00075461) cale_month_pane_g4

0x382f,	// (0x000754b5) cale_month_pane_g5_ParamLimits

0x382f,	// (0x000754b5) cale_month_pane_g5

0x388b,	// (0x00075511) cale_month_pane_g6_ParamLimits

0x388b,	// (0x00075511) cale_month_pane_g6

0x38f3,	// (0x00075579) cale_month_pane_g7_ParamLimits

0x38f3,	// (0x00075579) cale_month_pane_g7

0x395f,	// (0x000755e5) cale_month_pane_g8_ParamLimits

0x395f,	// (0x000755e5) cale_month_pane_g8

0x39cb,	// (0x00075651) cale_month_pane_g9_ParamLimits

0x39cb,	// (0x00075651) cale_month_pane_g9

0x3a2f,	// (0x000756b5) cale_month_pane_g10_ParamLimits

0x3a2f,	// (0x000756b5) cale_month_pane_g10

0x3a81,	// (0x00075707) cale_month_pane_g11_ParamLimits

0x3a81,	// (0x00075707) cale_month_pane_g11

0x3ad3,	// (0x00075759) cale_month_pane_g12_ParamLimits

0x3ad3,	// (0x00075759) cale_month_pane_g12

0x3b2b,	// (0x000757b1) cale_month_pane_g13_ParamLimits

0x3b2b,	// (0x000757b1) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00080ec5) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00080ec5) cale_month_pane_g

0x3b95,	// (0x0007581b) cale_month_week_pane

0x3bb9,	// (0x0007583f) grid_cale_month_pane_ParamLimits

0x3bb9,	// (0x0007583f) grid_cale_month_pane

0x3c1a,	// (0x000758a0) cale_month_day_heading_pane_t1

0x3ca0,	// (0x00075926) cale_month_day_heading_pane_t2

0x3d19,	// (0x0007599f) cale_month_day_heading_pane_t3

0x3d92,	// (0x00075a18) cale_month_day_heading_pane_t4

0x3e13,	// (0x00075a99) cale_month_day_heading_pane_t5

0x3e9c,	// (0x00075b22) cale_month_day_heading_pane_t6

0x3f2d,	// (0x00075bb3) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00080ee0) cale_month_day_heading_pane_t

0x29fa,	// (0x00074680) bg_cale_side_pane_cp01

0x3fbe,	// (0x00075c44) cale_month_week_pane_t1

0x3fd7,	// (0x00075c5d) cale_month_week_pane_t2

0x3ff0,	// (0x00075c76) cale_month_week_pane_t3

0x4009,	// (0x00075c8f) cale_month_week_pane_t4

0x4022,	// (0x00075ca8) cale_month_week_pane_t5

0x403b,	// (0x00075cc1) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00080eef) cale_month_week_pane_t

0x4060,	// (0x00075ce6) cell_cale_month_pane_ParamLimits

0x4060,	// (0x00075ce6) cell_cale_month_pane

0xaaf3,	// (0x0007c779) cell_cale_month_pane_g1

0x41aa,	// (0x00075e30) cell_cale_month_pane_t1_ParamLimits

0x41aa,	// (0x00075e30) cell_cale_month_pane_t1

0x2b32,	// (0x000747b8) grid_highlight_pane_cp08

0x2016,	// (0x00073c9c) main_smil_g1

0x41d6,	// (0x00075e5c) smil_status_pane

0x41e1,	// (0x00075e67) smil_text_pane

0xbeb3,	// (0x0007db39) bg_popup_call3_rect_pane_g8

0xbebb,	// (0x0007db41) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x00081188) bg_popup_call3_rect_pane_g

0xc0d1,	// (0x0007dd57) smil_status_volume_pane_g1

0x41f5,	// (0x00075e7b) smil_status_pane_t1

0xc104,	// (0x0007dd8a) volume_smil_pane

0x420c,	// (0x00075e92) list_smil_text_pane

0x4216,	// (0x00075e9c) scroll_pane_cp011

0x4221,	// (0x00075ea7) smil_text_list_pane_t1_ParamLimits

0x4221,	// (0x00075ea7) smil_text_list_pane_t1

0xaaff,	// (0x0007c785) aid_volume_smil_ParamLimits

0xaaff,	// (0x0007c785) aid_volume_smil

0x2016,	// (0x00073c9c) smil_volume_pane_g1

0x2016,	// (0x00073c9c) smil_volume_pane_g2

0x0001,

0xf276,	// (0x00080efc) smil_volume_pane_g

0x252f,	// (0x000741b5) listscroll_cale_day_pane

0x426c,	// (0x00075ef2) bg_cale_pane

0x4284,	// (0x00075f0a) list_cale_pane

0x42a7,	// (0x00075f2d) scroll_pane_cp09

0x42b8,	// (0x00075f3e) cale_bg_pane_g1

0x42c0,	// (0x00075f46) cale_bg_pane_g2

0x42c8,	// (0x00075f4e) cale_bg_pane_g3

0x42d0,	// (0x00075f56) cale_bg_pane_g4

0x42d8,	// (0x00075f5e) cale_bg_pane_g5

0x42e0,	// (0x00075f66) cale_bg_pane_g6

0x42e8,	// (0x00075f6e) cale_bg_pane_g7

0x42f0,	// (0x00075f76) cale_bg_pane_g8

0x42f8,	// (0x00075f7e) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x00080f01) cale_bg_pane_g

0x4308,	// (0x00075f8e) list_cale_time_pane_ParamLimits

0x4308,	// (0x00075f8e) list_cale_time_pane

0x4322,	// (0x00075fa8) list_cale_time_pane_g1_ParamLimits

0x4322,	// (0x00075fa8) list_cale_time_pane_g1

0x432e,	// (0x00075fb4) list_cale_time_pane_g2_ParamLimits

0x432e,	// (0x00075fb4) list_cale_time_pane_g2

0x433b,	// (0x00075fc1) list_cale_time_pane_g3_ParamLimits

0x433b,	// (0x00075fc1) list_cale_time_pane_g3

0x4349,	// (0x00075fcf) list_cale_time_pane_g4_ParamLimits

0x4349,	// (0x00075fcf) list_cale_time_pane_g4

0x4357,	// (0x00075fdd) list_cale_time_pane_g5_ParamLimits

0x4357,	// (0x00075fdd) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x00080f14) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x00080f14) list_cale_time_pane_g

0x4372,	// (0x00075ff8) list_cale_time_pane_t1_ParamLimits

0x4372,	// (0x00075ff8) list_cale_time_pane_t1

0x439a,	// (0x00076020) list_cale_time_pane_t2_ParamLimits

0x439a,	// (0x00076020) list_cale_time_pane_t2

0x4a67,	// (0x000766ed) aid_blid_cardinal_pane

0x4ab5,	// (0x0007673b) compass_pane_t4

0x43c2,	// (0x00076048) list_cale_time_pane_t4_ParamLimits

0x43c2,	// (0x00076048) list_cale_time_pane_t4

0x4ac3,	// (0x00076749) compass_pane_t5

0x4ad3,	// (0x00076759) compass_pane_t6

0x4ae1,	// (0x00076767) compass_pane_t7

0x4b79,	// (0x000767ff) navi_pane_cc_t1

0xac5d,	// (0x0007c8e3) aid_phob_thumbnail_center_pane

0x504a,	// (0x00076cd0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x00080f21) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x00080f21) list_cale_time_pane_t

0x19d6,	// (0x0007365c) bg_popup_window_pane_cp02_ParamLimits

0x19d6,	// (0x0007365c) bg_popup_window_pane_cp02

0x43ea,	// (0x00076070) heading_pane_cp01_ParamLimits

0x43ea,	// (0x00076070) heading_pane_cp01

0x43f6,	// (0x0007607c) loc_req_pane_ParamLimits

0x43f6,	// (0x0007607c) loc_req_pane

0x4406,	// (0x0007608c) loc_type_pane_ParamLimits

0x4406,	// (0x0007608c) loc_type_pane

0x4418,	// (0x0007609e) loc_type_pane_t1_ParamLimits

0x4418,	// (0x0007609e) loc_type_pane_t1

0x442a,	// (0x000760b0) loc_type_pane_t2_ParamLimits

0x442a,	// (0x000760b0) loc_type_pane_t2

0x443c,	// (0x000760c2) loc_type_pane_t3_ParamLimits

0x443c,	// (0x000760c2) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x00080f28) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x00080f28) loc_type_pane_t

0x444e,	// (0x000760d4) list_loc_req_pane

0x4458,	// (0x000760de) scroll_pane_cp012

0x4463,	// (0x000760e9) list_single_loc_request_popup_menu_pane_ParamLimits

0x4463,	// (0x000760e9) list_single_loc_request_popup_menu_pane

0x4470,	// (0x000760f6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4470,	// (0x000760f6) list_single_loc_request_popup_menu_pane_g1

0x447c,	// (0x00076102) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x447c,	// (0x00076102) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x00080f2f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x00080f2f) list_single_loc_request_popup_menu_pane_g

0x4488,	// (0x0007610e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4488,	// (0x0007610e) list_single_loc_request_popup_menu_pane_t1

0x1ffe,	// (0x00073c84) bg_popup_window_pane_cp03_ParamLimits

0x1ffe,	// (0x00073c84) bg_popup_window_pane_cp03

0x449e,	// (0x00076124) heading_loc_req_pane_ParamLimits

0x449e,	// (0x00076124) heading_loc_req_pane

0x44aa,	// (0x00076130) popup_dyc_status_message_window_g1_ParamLimits

0x44aa,	// (0x00076130) popup_dyc_status_message_window_g1

0x44be,	// (0x00076144) popup_dyc_status_message_window_t1_ParamLimits

0x44be,	// (0x00076144) popup_dyc_status_message_window_t1

0x44d3,	// (0x00076159) popup_dyc_status_message_window_t2_ParamLimits

0x44d3,	// (0x00076159) popup_dyc_status_message_window_t2

0x44e8,	// (0x0007616e) popup_dyc_status_message_window_t3_ParamLimits

0x44e8,	// (0x0007616e) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x00080f34) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x00080f34) popup_dyc_status_message_window_t

0x1da3,	// (0x00073a29) bg_heading_pane_cp01

0x4504,	// (0x0007618a) heading_loc_req_pane_g1

0x450c,	// (0x00076192) heading_loc_req_pane_g2

0x4514,	// (0x0007619a) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x00080f3b) heading_loc_req_pane_g

0x451c,	// (0x000761a2) heading_loc_req_pane_t1

0x4548,	// (0x000761ce) bg_popup_sub_pane_cp01_ParamLimits

0x4548,	// (0x000761ce) bg_popup_sub_pane_cp01

0x4556,	// (0x000761dc) popup_cale_events_window_g1_ParamLimits

0x4556,	// (0x000761dc) popup_cale_events_window_g1

0x4576,	// (0x000761fc) popup_cale_events_window_g2_ParamLimits

0x4576,	// (0x000761fc) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x00080f5d) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x00080f5d) popup_cale_events_window_g

0x4596,	// (0x0007621c) popup_cale_events_window_t1_ParamLimits

0x4596,	// (0x0007621c) popup_cale_events_window_t1

0x45a8,	// (0x0007622e) popup_cale_events_window_t2_ParamLimits

0x45a8,	// (0x0007622e) popup_cale_events_window_t2

0x45e6,	// (0x0007626c) popup_cale_events_window_t3_ParamLimits

0x45e6,	// (0x0007626c) popup_cale_events_window_t3

0x4620,	// (0x000762a6) popup_cale_events_window_t4_ParamLimits

0x4620,	// (0x000762a6) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x00080f62) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x00080f62) popup_cale_events_window_t

0x4656,	// (0x000762dc) call_type_pane

0x4666,	// (0x000762ec) popup_call_status_window_g1

0x467a,	// (0x00076300) popup_call_status_window_g2

0x468e,	// (0x00076314) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x00080f6b) popup_call_status_window_g

0x469e,	// (0x00076324) call_type_pane_g1

0x46a7,	// (0x0007632d) call_type_pane_g2

0x0001,

0xf2ec,	// (0x00080f72) call_type_pane_g

0x1da3,	// (0x00073a29) bg_popup_sub_pane_cp02

0x46b0,	// (0x00076336) listscroll_popup_wml_pane

0x46b8,	// (0x0007633e) list_wml_pane

0x46c2,	// (0x00076348) scroll_pane_cp013

0x46cd,	// (0x00076353) list_single_graphic_popup_wml_pane_ParamLimits

0x46cd,	// (0x00076353) list_single_graphic_popup_wml_pane

0x2016,	// (0x00073c9c) list_single_graphic_popup_wml_pane_g1

0x46e1,	// (0x00076367) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x00080f77) list_single_graphic_popup_wml_pane_g

0x46e9,	// (0x0007636f) list_single_graphic_popup_wml_pane_t1

0x46ff,	// (0x00076385) aid_call_pane

0x1ff6,	// (0x00073c7c) popup_clock_analogue_window_g1

0x1ff6,	// (0x00073c7c) popup_clock_analogue_window_g2

0xab2d,	// (0x0007c7b3) popup_clock_analogue_window_g3

0xab2d,	// (0x0007c7b3) popup_clock_analogue_window_g4

0x2016,	// (0x00073c9c) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x00080f7c) popup_clock_analogue_window_g

0xab35,	// (0x0007c7bb) popup_clock_analogue_window_t1

0xab43,	// (0x0007c7c9) clock_digital_number_pane_ParamLimits

0xab43,	// (0x0007c7c9) clock_digital_number_pane

0xab4f,	// (0x0007c7d5) clock_digital_number_pane_cp02_ParamLimits

0xab4f,	// (0x0007c7d5) clock_digital_number_pane_cp02

0xab5b,	// (0x0007c7e1) clock_digital_number_pane_cp03_ParamLimits

0xab5b,	// (0x0007c7e1) clock_digital_number_pane_cp03

0xab67,	// (0x0007c7ed) clock_digital_number_pane_cp04_ParamLimits

0xab67,	// (0x0007c7ed) clock_digital_number_pane_cp04

0xab73,	// (0x0007c7f9) clock_digital_separator_pane_ParamLimits

0xab73,	// (0x0007c7f9) clock_digital_separator_pane

0xab7f,	// (0x0007c805) popup_clock_digital_window_t1

0x2016,	// (0x00073c9c) clock_digital_number_pane_g1

0x2016,	// (0x00073c9c) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x00080efc) clock_digital_number_pane_g

0x2016,	// (0x00073c9c) clock_digital_separator_pane_g1

0x2016,	// (0x00073c9c) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x00080efc) clock_digital_separator_pane_g

0x1da3,	// (0x00073a29) bg_popup_window_pane_cp04

0x4707,	// (0x0007638d) heading_pane_cp03

0x2bb1,	// (0x00074837) listscroll_popup_gms_pane

0x1da3,	// (0x00073a29) grid_large_graphic_popup_pane

0x4710,	// (0x00076396) listscroll_popup_gms_pane_g1

0x4719,	// (0x0007639f) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x00080f87) listscroll_popup_gms_pane_g

0x4722,	// (0x000763a8) scroll_pane_cp014

0x206b,	// (0x00073cf1) cell_large_graphic_popup_pane_ParamLimits

0x206b,	// (0x00073cf1) cell_large_graphic_popup_pane

0x2079,	// (0x00073cff) cell_large_graphic_popup_pane_g1_ParamLimits

0x2079,	// (0x00073cff) cell_large_graphic_popup_pane_g1

0x472b,	// (0x000763b1) cell_large_graphic_popup_pane_g2_ParamLimits

0x472b,	// (0x000763b1) cell_large_graphic_popup_pane_g2

0x4739,	// (0x000763bf) cell_large_graphic_popup_pane_g3_ParamLimits

0x4739,	// (0x000763bf) cell_large_graphic_popup_pane_g3

0x4747,	// (0x000763cd) cell_large_graphic_popup_pane_g4_ParamLimits

0x4747,	// (0x000763cd) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x00080f8c) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x00080f8c) cell_large_graphic_popup_pane_g

0x1da3,	// (0x00073a29) grid_highlight_pane_cp010

0x2016,	// (0x00073c9c) bg_popup_call_pane_g1

0x4758,	// (0x000763de) list_single_graphic_popup_conf_pane_ParamLimits

0x4758,	// (0x000763de) list_single_graphic_popup_conf_pane

0x476a,	// (0x000763f0) list_highlight_pane_cp01

0x4773,	// (0x000763f9) list_single_graphic_popup_conf_pane_g1

0x477b,	// (0x00076401) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x00080f95) list_single_graphic_popup_conf_pane_g

0x4783,	// (0x00076409) list_single_graphic_popup_conf_pane_t1

0x4791,	// (0x00076417) linegrid_cams_pane_g1

0x479a,	// (0x00076420) linegrid_cams_pane_g2

0x2b8f,	// (0x00074815) linegrid_cams_pane_g3

0x47a3,	// (0x00076429) linegrid_cams_pane_g4

0x47ac,	// (0x00076432) linegrid_cams_pane_g5

0x47b5,	// (0x0007643b) linegrid_cams_pane_g6

0x2b98,	// (0x0007481e) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x00080f9a) linegrid_cams_pane_g

0x47c0,	// (0x00076446) popup_clock_analogue_window

0x47c0,	// (0x00076446) popup_clock_digital_window

0x1da3,	// (0x00073a29) popup_phob_thumbnail_window

0x2016,	// (0x00073c9c) call_video_uplink_pane_g1

0x47c9,	// (0x0007644f) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x00080fa9) call_video_uplink_pane_g

0x47d1,	// (0x00076457) video_uplink_pane

0x47d9,	// (0x0007645f) mce_image_pane_g1

0x47e3,	// (0x00076469) mce_image_pane_g2

0x47ed,	// (0x00076473) mce_image_pane_g3

0x47f7,	// (0x0007647d) mce_image_pane_g4

0x47ff,	// (0x00076485) mce_image_pane_g5

0x0004,

0xf328,	// (0x00080fae) mce_image_pane_g

0x4807,	// (0x0007648d) control_top_pane_stacon_cp01_ParamLimits

0x4807,	// (0x0007648d) control_top_pane_stacon_cp01

0x481b,	// (0x000764a1) uni_indicator_pane_stacon_cp01_ParamLimits

0x481b,	// (0x000764a1) uni_indicator_pane_stacon_cp01

0x482c,	// (0x000764b2) bg_popup_sub_pane_cp03

0x4836,	// (0x000764bc) chi_dic_find_pane

0x483e,	// (0x000764c4) listscroll_chi_dic_pane

0x4847,	// (0x000764cd) main_pane_chidic_g1

0x485a,	// (0x000764e0) chi_dic_find_pane_t1

0x4868,	// (0x000764ee) find_chidic_pane

0x4871,	// (0x000764f7) chi_dic_list_pane_ParamLimits

0x4871,	// (0x000764f7) chi_dic_list_pane

0x4882,	// (0x00076508) scroll_pane_cp020

0x488a,	// (0x00076510) find_chidic_pane_t1

0x1da3,	// (0x00073a29) input_focus_pane_cp06

0x4899,	// (0x0007651f) list_chi_dic_pane_ParamLimits

0x4899,	// (0x0007651f) list_chi_dic_pane

0x48ab,	// (0x00076531) list_chi_dic_pane_t1_ParamLimits

0x48ab,	// (0x00076531) list_chi_dic_pane_t1

0x1da3,	// (0x00073a29) list_highlight_pane_cp020

0x48be,	// (0x00076544) bg_cale_heading_pane_g1

0x48c6,	// (0x0007654c) bg_cale_heading_pane_g2

0x48ce,	// (0x00076554) bg_cale_heading_pane_g3

0x48d6,	// (0x0007655c) bg_cale_heading_pane_g4

0x48e0,	// (0x00076566) bg_cale_heading_pane_g5

0x48ea,	// (0x00076570) bg_cale_heading_pane_g6

0x48f2,	// (0x00076578) bg_cale_heading_pane_g7

0x48fa,	// (0x00076580) bg_cale_heading_pane_g8

0x4904,	// (0x0007658a) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x00080fb9) bg_cale_heading_pane_g

0x48be,	// (0x00076544) bg_cale_side_pane_g1

0x490e,	// (0x00076594) bg_cale_side_pane_g2

0x4918,	// (0x0007659e) bg_cale_side_pane_g3

0x4922,	// (0x000765a8) bg_cale_side_pane_g4

0x492c,	// (0x000765b2) bg_cale_side_pane_g5

0x4936,	// (0x000765bc) bg_cale_side_pane_g6

0x4940,	// (0x000765c6) bg_cale_side_pane_g7

0x494a,	// (0x000765d0) bg_cale_side_pane_g8

0x4952,	// (0x000765d8) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x00080fcc) bg_cale_side_pane_g

0x495a,	// (0x000765e0) popup_call_status_window_ParamLimits

0x495a,	// (0x000765e0) popup_call_status_window

0x49a7,	// (0x0007662d) stacon_top_pane

0x49af,	// (0x00076635) status_pane_ParamLimits

0x49af,	// (0x00076635) status_pane

0x49c4,	// (0x0007664a) status_small_pane

0x49cc,	// (0x00076652) control_pane

0x1da3,	// (0x00073a29) stacon_bottom_pane

0x49d4,	// (0x0007665a) list_single_mce_smart_pane_t1_ParamLimits

0x49d4,	// (0x0007665a) list_single_mce_smart_pane_t1

0x49e7,	// (0x0007666d) list_single_mce_smart_pane_t2_ParamLimits

0x49e7,	// (0x0007666d) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x00080fdf) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x00080fdf) list_single_mce_smart_pane_t

0x4a06,	// (0x0007668c) compass_pane

0x4a11,	// (0x00076697) main_location2_pane_t1

0x4a27,	// (0x000766ad) main_location2_pane_t2

0x4a3d,	// (0x000766c3) main_location2_pane_t3

0x0003,

0xf35e,	// (0x00080fe4) main_location2_pane_t

0x4a8b,	// (0x00076711) compass_pane_g1_ParamLimits

0x4a8b,	// (0x00076711) compass_pane_g1

0x4a97,	// (0x0007671d) compass_pane_t1

0x4aa6,	// (0x0007672c) compass_pane_t2

0x0005,

0xf367,	// (0x00080fed) compass_pane_t

0x4af1,	// (0x00076777) text_secondary_cp61

0x4b70,	// (0x000767f6) navi_pane_cams_g5

0x4bec,	// (0x00076872) navi_pane_im_t1

0x4bfa,	// (0x00076880) navi_pane_mp_g1_ParamLimits

0x4bfa,	// (0x00076880) navi_pane_mp_g1

0x4c0e,	// (0x00076894) navi_pane_mp_g2_ParamLimits

0x4c0e,	// (0x00076894) navi_pane_mp_g2

0x4c1a,	// (0x000768a0) navi_pane_mp_g3_ParamLimits

0x4c1a,	// (0x000768a0) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x00081001) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x00081001) navi_pane_mp_g

0x4c26,	// (0x000768ac) navi_pane_mp_t1

0x4c34,	// (0x000768ba) navi_pane_mp_t2

0x0002,

0xf382,	// (0x00081008) navi_pane_mp_t

0xab9c,	// (0x0007c822) navi_pane_vt_g1

0x4c26,	// (0x000768ac) navi_pane_vt_t1

0xaba4,	// (0x0007c82a) navi_slider_pane

0x2bb1,	// (0x00074837) zooming_pane

0xabac,	// (0x0007c832) navi_slider_pane_g1

0xabb5,	// (0x0007c83b) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0008100f) navi_slider_pane_g

0xabe2,	// (0x0007c868) aid_levels_zoom

0xabea,	// (0x0007c870) zooming_pane_g1

0xabf2,	// (0x0007c878) zooming_pane_g2

0xabf2,	// (0x0007c878) zooming_pane_g3

0x0002,

0xf398,	// (0x0008101e) zooming_pane_g

0xabfa,	// (0x0007c880) level_10_zoom

0xac03,	// (0x0007c889) level_11_zoom

0xac0c,	// (0x0007c892) level_1_zoom

0xac15,	// (0x0007c89b) level_2_zoom

0xac1e,	// (0x0007c8a4) level_3_zoom

0xac27,	// (0x0007c8ad) level_4_zoom

0xac30,	// (0x0007c8b6) level_5_zoom

0xac39,	// (0x0007c8bf) level_6_zoom

0xac42,	// (0x0007c8c8) level_7_zoom

0xac4b,	// (0x0007c8d1) level_8_zoom

0xac54,	// (0x0007c8da) level_9_zoom

0xac65,	// (0x0007c8eb) popup_phob_thumbnail_window_g1

0xac6d,	// (0x0007c8f3) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x00081025) popup_phob_thumbnail_window_g

0x5747,	// (0x000773cd) level_1_location

0x574f,	// (0x000773d5) level_2_location

0x5757,	// (0x000773dd) level_3_location

0x5761,	// (0x000773e7) level_4_location

0x2bb1,	// (0x00074837) level_5_location

0x4ce9,	// (0x0007696f) mce_icon_pane_g1

0x4cf3,	// (0x00076979) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0008102a) mce_icon_pane_g

0xac75,	// (0x0007c8fb) main_mup_pane_g1_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g1

0xac75,	// (0x0007c8fb) main_mup_pane_g2_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g2

0xac75,	// (0x0007c8fb) main_mup_pane_g3_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g3

0xac75,	// (0x0007c8fb) main_mup_pane_g4_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g4

0xac75,	// (0x0007c8fb) main_mup_pane_g5_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g5

0xac75,	// (0x0007c8fb) main_mup_pane_g6_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g6

0xac75,	// (0x0007c8fb) main_mup_pane_g7_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g7

0xac75,	// (0x0007c8fb) main_mup_pane_g8_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g8

0xac75,	// (0x0007c8fb) main_mup_pane_g9_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g9

0xac75,	// (0x0007c8fb) main_mup_pane_g10_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g10

0xac75,	// (0x0007c8fb) main_mup_pane_g11_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g11

0x2079,	// (0x00073cff) main_mup_pane_g12_ParamLimits

0x2079,	// (0x00073cff) main_mup_pane_g12

0xac75,	// (0x0007c8fb) main_mup_pane_g13_ParamLimits

0xac75,	// (0x0007c8fb) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0008102f) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0008102f) main_mup_pane_g

0xac83,	// (0x0007c909) main_mup_pane_t1_ParamLimits

0xac83,	// (0x0007c909) main_mup_pane_t1

0xac83,	// (0x0007c909) main_mup_pane_t2_ParamLimits

0xac83,	// (0x0007c909) main_mup_pane_t2

0xac83,	// (0x0007c909) main_mup_pane_t3_ParamLimits

0xac83,	// (0x0007c909) main_mup_pane_t3

0x2c1e,	// (0x000748a4) main_mup_pane_t4_ParamLimits

0x2c1e,	// (0x000748a4) main_mup_pane_t4

0x2c1e,	// (0x000748a4) main_mup_pane_t5_ParamLimits

0x2c1e,	// (0x000748a4) main_mup_pane_t5

0xac97,	// (0x0007c91d) main_mup_pane_t6_ParamLimits

0xac97,	// (0x0007c91d) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0008104a) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0008104a) main_mup_pane_t

0x206b,	// (0x00073cf1) mup_progress_pane_ParamLimits

0x206b,	// (0x00073cf1) mup_progress_pane

0xacab,	// (0x0007c931) mup_visualizer_pane_ParamLimits

0xacab,	// (0x0007c931) mup_visualizer_pane

0xacab,	// (0x0007c931) mup_volume_pane_ParamLimits

0xacab,	// (0x0007c931) mup_volume_pane

0x2087,	// (0x00073d0d) mup_visualizer_pane_g1_ParamLimits

0x2087,	// (0x00073d0d) mup_visualizer_pane_g1

0xacb9,	// (0x0007c93f) mup_visualizer_pane_g2_ParamLimits

0xacb9,	// (0x0007c93f) mup_visualizer_pane_g2

0x2079,	// (0x00073cff) mup_visualizer_pane_g3_ParamLimits

0x2079,	// (0x00073cff) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x00081057) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x00081057) mup_visualizer_pane_g

0x2da2,	// (0x00074a28) mup_volume_pane_g1

0x2da2,	// (0x00074a28) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0008105e) mup_volume_pane_g

0x2da2,	// (0x00074a28) mup_progress_pane_g1

0x2da2,	// (0x00074a28) mup_progress_pane_g2

0x2da2,	// (0x00074a28) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x00081063) mup_progress_pane_g

0x1da3,	// (0x00073a29) bg_popup_window_pane_cp05

0xacc7,	// (0x0007c94d) heading_pane_cp02_ParamLimits

0xacc7,	// (0x0007c94d) heading_pane_cp02

0xace3,	// (0x0007c969) list_popup_blid_pane

0xaceb,	// (0x0007c971) list_blid_sat_info_pane_ParamLimits

0xaceb,	// (0x0007c971) list_blid_sat_info_pane

0xacfe,	// (0x0007c984) list_blid_sat_info_pane_g1

0xad06,	// (0x0007c98c) list_blid_sat_info_pane_t1

0x4e07,	// (0x00076a8d) mup_equalizer_pane_ParamLimits

0x4e07,	// (0x00076a8d) mup_equalizer_pane

0x4e28,	// (0x00076aae) mup_equalizer_pane_cp1_ParamLimits

0x4e28,	// (0x00076aae) mup_equalizer_pane_cp1

0x4e49,	// (0x00076acf) mup_equalizer_pane_cp2_ParamLimits

0x4e49,	// (0x00076acf) mup_equalizer_pane_cp2

0x4e6e,	// (0x00076af4) mup_equalizer_pane_cp3_ParamLimits

0x4e6e,	// (0x00076af4) mup_equalizer_pane_cp3

0x4e97,	// (0x00076b1d) mup_equalizer_pane_cp4_ParamLimits

0x4e97,	// (0x00076b1d) mup_equalizer_pane_cp4

0x4ec0,	// (0x00076b46) mup_equalizer_pane_cp5

0x4ed8,	// (0x00076b5e) mup_equalizer_pane_cp6

0x4ef0,	// (0x00076b76) mup_equalizer_pane_cp7

0xbf33,	// (0x0007dbb9) bg_popup_call_poc_act_pane_g9

0xbf3b,	// (0x0007dbc1) bg_popup_call_poc_act_pane_g10

0xbf43,	// (0x0007dbc9) bg_popup_call_poc_act_pane_g11

0x000a,

0x1ffe,	// (0x00073c84) mup_scale_pane

0x2016,	// (0x00073c9c) mup_scale_pane_g1

0xad14,	// (0x0007c99a) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0008107f) mup_scale_pane_g

0xad38,	// (0x0007c9be) msg_data_pane

0xad40,	// (0x0007c9c6) scroll_pane_cp017

0x0e2a,	// (0x00072ab0) bg_list_pane_cp04_ParamLimits

0x0e2a,	// (0x00072ab0) bg_list_pane_cp04

0xad50,	// (0x0007c9d6) msg_data_pane_g1

0x4f1a,	// (0x00076ba0) msg_data_pane_g2

0x4f24,	// (0x00076baa) msg_data_pane_g3

0x4f2e,	// (0x00076bb4) msg_data_pane_g4

0x4f36,	// (0x00076bbc) msg_data_pane_g5

0x4f3e,	// (0x00076bc4) msg_data_pane_g6

0x4f46,	// (0x00076bcc) msg_data_pane_g7

0x0006,

0xf408,	// (0x0008108e) msg_data_pane_g

0x0e4a,	// (0x00072ad0) msg_text_pane_ParamLimits

0x0e4a,	// (0x00072ad0) msg_text_pane

0x4f4e,	// (0x00076bd4) qrid_highlight_pane_cp011_ParamLimits

0x4f4e,	// (0x00076bd4) qrid_highlight_pane_cp011

0x1da3,	// (0x00073a29) msg_body_pane

0x1da3,	// (0x00073a29) msg_header_pane

0xad61,	// (0x0007c9e7) input_focus_pane_cp07

0xad76,	// (0x0007c9fc) msg_header_pane_t1_ParamLimits

0xad76,	// (0x0007c9fc) msg_header_pane_t1

0xad8c,	// (0x0007ca12) msg_header_pane_t2_ParamLimits

0xad8c,	// (0x0007ca12) msg_header_pane_t2

0x0001,

0xf41c,	// (0x000810a2) msg_header_pane_t_ParamLimits

0xf41c,	// (0x000810a2) msg_header_pane_t

0xada3,	// (0x0007ca29) msg_body_pane_g1

0xadab,	// (0x0007ca31) msg_body_pane_t1_ParamLimits

0xadab,	// (0x0007ca31) msg_body_pane_t1

0xaddc,	// (0x0007ca62) msg_body_pane_t2_ParamLimits

0xaddc,	// (0x0007ca62) msg_body_pane_t2

0xadee,	// (0x0007ca74) msg_body_pane_t3_ParamLimits

0xadee,	// (0x0007ca74) msg_body_pane_t3

0x0002,

0xf421,	// (0x000810a7) msg_body_pane_t_ParamLimits

0xf421,	// (0x000810a7) msg_body_pane_t

0x4f9e,	// (0x00076c24) main_viewer_pane_g1_ParamLimits

0x4f9e,	// (0x00076c24) main_viewer_pane_g1

0x4fac,	// (0x00076c32) main_viewer_pane_g2_ParamLimits

0x4fac,	// (0x00076c32) main_viewer_pane_g2

0x4fba,	// (0x00076c40) main_viewer_pane_g3_ParamLimits

0x4fba,	// (0x00076c40) main_viewer_pane_g3

0x4fc9,	// (0x00076c4f) main_viewer_pane_g4_ParamLimits

0x4fc9,	// (0x00076c4f) main_viewer_pane_g4

0xae18,	// (0x0007ca9e) main_viewer_pane_g5_ParamLimits

0xae18,	// (0x0007ca9e) main_viewer_pane_g5

0xae18,	// (0x0007ca9e) main_viewer_pane_g7_ParamLimits

0xae18,	// (0x0007ca9e) main_viewer_pane_g7

0xae2a,	// (0x0007cab0) main_viewer_pane_g8_ParamLimits

0xae2a,	// (0x0007cab0) main_viewer_pane_g8

0x0007,

0xf431,	// (0x000810b7) main_viewer_pane_g_ParamLimits

0xf431,	// (0x000810b7) main_viewer_pane_g

0xae42,	// (0x0007cac8) viewer_content_pane_ParamLimits

0xae42,	// (0x0007cac8) viewer_content_pane

0x5007,	// (0x00076c8d) main_postcard_pane_g1_ParamLimits

0x5007,	// (0x00076c8d) main_postcard_pane_g1

0x501d,	// (0x00076ca3) main_postcard_pane_g2_ParamLimits

0x501d,	// (0x00076ca3) main_postcard_pane_g2

0x5033,	// (0x00076cb9) main_postcard_pane_g3_ParamLimits

0x5033,	// (0x00076cb9) main_postcard_pane_g3

0x0005,

0xf442,	// (0x000810c8) main_postcard_pane_g_ParamLimits

0xf442,	// (0x000810c8) main_postcard_pane_g

0x504a,	// (0x00076cd0) main_postcard_pane_g4

0xc0e4,	// (0x0007dd6a) smil_status_volume_pane_g2

0x508d,	// (0x00076d13) postcard_pane_ParamLimits

0x508d,	// (0x00076d13) postcard_pane

0xae50,	// (0x0007cad6) postcard_pane_g1_ParamLimits

0xae50,	// (0x0007cad6) postcard_pane_g1

0x50dd,	// (0x00076d63) postcard_pane_g2_ParamLimits

0x50dd,	// (0x00076d63) postcard_pane_g2

0x50e9,	// (0x00076d6f) postcard_pane_g3_ParamLimits

0x50e9,	// (0x00076d6f) postcard_pane_g3

0xae5e,	// (0x0007cae4) postcard_pane_g4_ParamLimits

0xae5e,	// (0x0007cae4) postcard_pane_g4

0x50f5,	// (0x00076d7b) postcard_pane_g5_ParamLimits

0x50f5,	// (0x00076d7b) postcard_pane_g5

0x510a,	// (0x00076d90) postcard_pane_g6_ParamLimits

0x510a,	// (0x00076d90) postcard_pane_g6

0xae50,	// (0x0007cad6) postcard_pane_g7_ParamLimits

0xae50,	// (0x0007cad6) postcard_pane_g7

0x0006,

0xf44f,	// (0x000810d5) postcard_pane_g_ParamLimits

0xf44f,	// (0x000810d5) postcard_pane_g

0x5122,	// (0x00076da8) main_mp2_pane_g1_ParamLimits

0x5122,	// (0x00076da8) main_mp2_pane_g1

0x5130,	// (0x00076db6) main_mp2_pane_g2_ParamLimits

0x5130,	// (0x00076db6) main_mp2_pane_g2

0x513c,	// (0x00076dc2) main_mp2_pane_g3_ParamLimits

0x513c,	// (0x00076dc2) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x000810e4) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x000810e4) main_mp2_pane_g

0x5148,	// (0x00076dce) main_mp2_pane_t1_ParamLimits

0x5148,	// (0x00076dce) main_mp2_pane_t1

0x515f,	// (0x00076de5) main_mp2_pane_t2_ParamLimits

0x515f,	// (0x00076de5) main_mp2_pane_t2

0x5173,	// (0x00076df9) main_mp2_pane_t3_ParamLimits

0x5173,	// (0x00076df9) main_mp2_pane_t3

0x0002,

0xf465,	// (0x000810eb) main_mp2_pane_t_ParamLimits

0xf465,	// (0x000810eb) main_mp2_pane_t

0xae6c,	// (0x0007caf2) pec_content_pane_ParamLimits

0xae6c,	// (0x0007caf2) pec_content_pane

0x3376,	// (0x00074ffc) scroll_pane_cp015

0xae7e,	// (0x0007cb04) pec_attribute_pane_ParamLimits

0xae7e,	// (0x0007cb04) pec_attribute_pane

0x5185,	// (0x00076e0b) pec_content_pane_g1_ParamLimits

0x5185,	// (0x00076e0b) pec_content_pane_g1

0xae8e,	// (0x0007cb14) pec_content_pane_t1_ParamLimits

0xae8e,	// (0x0007cb14) pec_content_pane_t1

0xaea0,	// (0x0007cb26) pec_content_pane_t2_ParamLimits

0xaea0,	// (0x0007cb26) pec_content_pane_t2

0x0001,

0xf46c,	// (0x000810f2) pec_content_pane_t_ParamLimits

0xf46c,	// (0x000810f2) pec_content_pane_t

0x5191,	// (0x00076e17) list_single_graphic_pane_cp01_ParamLimits

0x5191,	// (0x00076e17) list_single_graphic_pane_cp01

0x1ffe,	// (0x00073c84) bg_popup_sub_pane_cp04

0xaeb2,	// (0x0007cb38) popup_mup_playback_window_g1

0xaebe,	// (0x0007cb44) popup_mup_playback_window_t1

0xaed3,	// (0x0007cb59) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x000810f7) popup_mup_playback_window_t

0xaf0a,	// (0x0007cb90) main_image_pane_g1_ParamLimits

0xaf0a,	// (0x0007cb90) main_image_pane_g1

0xaf4d,	// (0x0007cbd3) scroll_pane_cp018_ParamLimits

0xaf4d,	// (0x0007cbd3) scroll_pane_cp018

0xaf65,	// (0x0007cbeb) scroll_pane_cp016_ParamLimits

0xaf65,	// (0x0007cbeb) scroll_pane_cp016

0x5263,	// (0x00076ee9) smil2_image_pane_ParamLimits

0x5263,	// (0x00076ee9) smil2_image_pane

0x5299,	// (0x00076f1f) smil2_root_pane_ParamLimits

0x5299,	// (0x00076f1f) smil2_root_pane

0x52d1,	// (0x00076f57) smil2_text_pane_ParamLimits

0x52d1,	// (0x00076f57) smil2_text_pane

0x1da3,	// (0x00073a29) bg_list_pane_cp06

0xafa1,	// (0x0007cc27) grid_radio_pane

0x1da3,	// (0x00073a29) bg_popup_window_pane_cp06

0xafab,	// (0x0007cc31) main_fmradio_pane_t1

0xbf4b,	// (0x0007dbd1) heading_pane_cp04

0xafb9,	// (0x0007cc3f) main_fmradio_pane_t2

0xbf53,	// (0x0007dbd9) popup_cale_lunar_info_window_g1

0xafc7,	// (0x0007cc4d) main_fmradio_pane_t3

0xbf5b,	// (0x0007dbe1) popup_cale_lunar_info_window_g2

0xafd7,	// (0x0007cc5d) main_fmradio_pane_t4

0x0001,

0xafe5,	// (0x0007cc6b) main_fmradio_pane_t5

0x0004,

0xf551,	// (0x000811d7) popup_cale_lunar_info_window_g

0xf486,	// (0x0008110c) main_fmradio_pane_t

0xaff3,	// (0x0007cc79) wait_bar_pane_cp03

0xaffb,	// (0x0007cc81) cell_fmradio_pane_ParamLimits

0xaffb,	// (0x0007cc81) cell_fmradio_pane

0xae50,	// (0x0007cad6) cell_fmradio_pane_g1_ParamLimits

0xae50,	// (0x0007cad6) cell_fmradio_pane_g1

0x1da3,	// (0x00073a29) grid_highlight_pane_cp011

0xb010,	// (0x0007cc96) poc_content_pane_ParamLimits

0xb010,	// (0x0007cc96) poc_content_pane

0xb022,	// (0x0007cca8) scroll_pane_cp019

0x5361,	// (0x00076fe7) popup_call_poc_act_window_ParamLimits

0x5361,	// (0x00076fe7) popup_call_poc_act_window

0x5385,	// (0x0007700b) popup_call_poc_inact_window_ParamLimits

0x5385,	// (0x0007700b) popup_call_poc_inact_window

0xf528,	// (0x000811ae) bg_popup_call_poc_act_pane_g

0xbec3,	// (0x0007db49) bg_popup_call_poc_inact_pane_g1

0xbecb,	// (0x0007db51) bg_popup_call_poc_inact_pane_g2

0xb02a,	// (0x0007ccb0) popup_call_poc_act_window_g2

0xbed3,	// (0x0007db59) bg_popup_call_poc_inact_pane_g3

0xbedb,	// (0x0007db61) bg_popup_call_poc_inact_pane_g4

0xbee3,	// (0x0007db69) bg_popup_call_poc_inact_pane_g5

0xb032,	// (0x0007ccb8) popup_call_poc_act_window_t1_ParamLimits

0xb032,	// (0x0007ccb8) popup_call_poc_act_window_t1

0xb05a,	// (0x0007cce0) popup_call_poc_act_window_t2_ParamLimits

0xb05a,	// (0x0007cce0) popup_call_poc_act_window_t2

0xb082,	// (0x0007cd08) popup_call_poc_act_window_t3_ParamLimits

0xb082,	// (0x0007cd08) popup_call_poc_act_window_t3

0xb0aa,	// (0x0007cd30) popup_call_poc_act_window_t4_ParamLimits

0xb0aa,	// (0x0007cd30) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x00081117) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x00081117) popup_call_poc_act_window_t

0xbeeb,	// (0x0007db71) bg_popup_call_poc_inact_pane_g6

0xbef3,	// (0x0007db79) bg_popup_call_poc_inact_pane_g7

0xbefb,	// (0x0007db81) bg_popup_call_poc_inact_pane_g8

0xb0bc,	// (0x0007cd42) popup_call_poc_inact_window_g2

0xbf03,	// (0x0007db89) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf515,	// (0x0008119b) bg_popup_call_poc_inact_pane_g

0xb0c4,	// (0x0007cd4a) popup_call_poc_inact_window_t1_ParamLimits

0xb0c4,	// (0x0007cd4a) popup_call_poc_inact_window_t1

0xb0d9,	// (0x0007cd5f) popup_call_poc_inact_window_t2_ParamLimits

0xb0d9,	// (0x0007cd5f) popup_call_poc_inact_window_t2

0xb0ee,	// (0x0007cd74) popup_call_poc_inact_window_t3_ParamLimits

0xb0ee,	// (0x0007cd74) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x00081120) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x00081120) popup_call_poc_inact_window_t

0xc049,	// (0x0007dccf) context_pane_ParamLimits

0x5c70,	// (0x000778f6) signal_pane_ParamLimits

0x2bb1,	// (0x00074837) main_call2_pane

0xc022,	// (0x0007dca8) popup_phob_thumbnail2_window_ParamLimits

0xc022,	// (0x0007dca8) popup_phob_thumbnail2_window

0xae00,	// (0x0007ca86) aid_hotspot_pointer_arrow_pane

0xae08,	// (0x0007ca8e) aid_hotspot_pointer_hand_pane

0x570f,	// (0x00077395) phob_pre_status_pane_g5

0x18cb,	// (0x00073551) cams_zoom_pane_ParamLimits

0x18cb,	// (0x00073551) image_vga_pane_ParamLimits

0x2079,	// (0x00073cff) main_camera_pane_g1_ParamLimits

0x2079,	// (0x00073cff) main_camera_pane_g2_ParamLimits

0x2079,	// (0x00073cff) main_camera_pane_g3_ParamLimits

0x2079,	// (0x00073cff) main_camera_pane_g4_ParamLimits

0x2079,	// (0x00073cff) main_camera_pane_g5_ParamLimits

0x2079,	// (0x00073cff) main_camera_pane_g6_ParamLimits

0x2079,	// (0x00073cff) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00080e4b) main_camera_pane_g_ParamLimits

0x2c1e,	// (0x000748a4) main_camera_pane_t1_ParamLimits

0x2c1e,	// (0x000748a4) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00080e5c) main_camera_pane_t_ParamLimits

0x1ffe,	// (0x00073c84) bg_popup_preview_window_pane_cp01_ParamLimits

0x1ffe,	// (0x00073c84) bg_popup_preview_window_pane_cp01

0xb103,	// (0x0007cd89) popup_phob_thumbnail2_window_g1_ParamLimits

0xb103,	// (0x0007cd89) popup_phob_thumbnail2_window_g1

0x1da3,	// (0x00073a29) call2_cli_visual_pane

0x53b9,	// (0x0007703f) popup_call2_audio_conf_window_ParamLimits

0x53b9,	// (0x0007703f) popup_call2_audio_conf_window

0x53e1,	// (0x00077067) popup_call2_audio_first_window_ParamLimits

0x53e1,	// (0x00077067) popup_call2_audio_first_window

0x5477,	// (0x000770fd) popup_call2_audio_in_window_ParamLimits

0x5477,	// (0x000770fd) popup_call2_audio_in_window

0x54c3,	// (0x00077149) popup_call2_audio_out_window_ParamLimits

0x54c3,	// (0x00077149) popup_call2_audio_out_window

0x5535,	// (0x000771bb) popup_call2_audio_second_window_ParamLimits

0x5535,	// (0x000771bb) popup_call2_audio_second_window

0x559b,	// (0x00077221) popup_call2_audio_wait_window_ParamLimits

0x559b,	// (0x00077221) popup_call2_audio_wait_window

0x1da3,	// (0x00073a29) bg_popup_call2_act_pane_cp03

0x1fe0,	// (0x00073c66) list_conf_pane_cp

0xb10f,	// (0x0007cd95) popup_call2_audio_conf_window_t1

0xb11d,	// (0x0007cda3) list_single_graphic_popup_conf2_pane_ParamLimits

0xb11d,	// (0x0007cda3) list_single_graphic_popup_conf2_pane

0x476a,	// (0x000763f0) list_highlight_pane_cp04

0xb130,	// (0x0007cdb6) list_single_graphic_popup_conf2_pane_g1

0x477b,	// (0x00076401) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x00081127) list_single_graphic_popup_conf2_pane_g

0xb13a,	// (0x0007cdc0) list_single_graphic_popup_conf2_pane_t1

0xb148,	// (0x0007cdce) bg_popup_call2_act_pane_cp01_ParamLimits

0xb148,	// (0x0007cdce) bg_popup_call2_act_pane_cp01

0xb1d2,	// (0x0007ce58) call_type_pane_cp05_ParamLimits

0xb1d2,	// (0x0007ce58) call_type_pane_cp05

0xb226,	// (0x0007ceac) popup_call2_audio_second_window_g1_ParamLimits

0xb226,	// (0x0007ceac) popup_call2_audio_second_window_g1

0xb27a,	// (0x0007cf00) popup_call2_audio_second_window_g2_ParamLimits

0xb27a,	// (0x0007cf00) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0008112c) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0008112c) popup_call2_audio_second_window_g

0xb2df,	// (0x0007cf65) popup_call2_audio_second_window_t1_ParamLimits

0xb2df,	// (0x0007cf65) popup_call2_audio_second_window_t1

0xb39a,	// (0x0007d020) popup_call2_audio_second_window_t2_ParamLimits

0xb39a,	// (0x0007d020) popup_call2_audio_second_window_t2

0xb3ed,	// (0x0007d073) popup_call2_audio_second_window_t3_ParamLimits

0xb3ed,	// (0x0007d073) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x00081133) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x00081133) popup_call2_audio_second_window_t

0x1da3,	// (0x00073a29) bg_popup_call2_in_pane_cp02

0x1dad,	// (0x00073a33) call_type_pane_cp04

0x55d5,	// (0x0007725b) popup_call2_audio_wait_window_g1

0x55dd,	// (0x00077263) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0008113c) popup_call2_audio_wait_window_g

0x1dc5,	// (0x00073a4b) popup_call2_audio_wait_window_t3

0xb4e0,	// (0x0007d166) bg_popup_call2_act_pane_ParamLimits

0xb4e0,	// (0x0007d166) bg_popup_call2_act_pane

0xb5a0,	// (0x0007d226) call_type_pane_cp03_ParamLimits

0xb5a0,	// (0x0007d226) call_type_pane_cp03

0xb604,	// (0x0007d28a) popup_call2_audio_first_window_g1_ParamLimits

0xb604,	// (0x0007d28a) popup_call2_audio_first_window_g1

0xb674,	// (0x0007d2fa) popup_call2_audio_first_window_g2_ParamLimits

0xb674,	// (0x0007d2fa) popup_call2_audio_first_window_g2

0xb6d8,	// (0x0007d35e) popup_call2_audio_first_window_g3_ParamLimits

0xb6d8,	// (0x0007d35e) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x00081141) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x00081141) popup_call2_audio_first_window_g

0xb760,	// (0x0007d3e6) popup_call2_audio_first_window_t1_ParamLimits

0xb760,	// (0x0007d3e6) popup_call2_audio_first_window_t1

0xb863,	// (0x0007d4e9) popup_call2_audio_first_window_t4_ParamLimits

0xb863,	// (0x0007d4e9) popup_call2_audio_first_window_t4

0xb946,	// (0x0007d5cc) popup_call2_audio_first_window_t5_ParamLimits

0xb946,	// (0x0007d5cc) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x0008114c) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x0008114c) popup_call2_audio_first_window_t

0x1ff6,	// (0x00073c7c) bg_popup_call2_act_pane_g1

0xbf65,	// (0x0007dbeb) popup_cale_lunar_info_window_t1

0xbf73,	// (0x0007dbf9) popup_cale_lunar_info_window_t2

0xbf81,	// (0x0007dc07) popup_cale_lunar_info_window_t3

0x1da3,	// (0x00073a29) bg_popup_call2_bubble_pane

0xba47,	// (0x0007d6cd) bg_popup_call2_in_pane_cp01_ParamLimits

0xba47,	// (0x0007d6cd) bg_popup_call2_in_pane_cp01

0x1a5b,	// (0x000736e1) call_type_pane_cp02

0x55e5,	// (0x0007726b) popup_call2_audio_out_window_g1_ParamLimits

0x55e5,	// (0x0007726b) popup_call2_audio_out_window_g1

0xba8f,	// (0x0007d715) popup_call2_audio_out_window_g2_ParamLimits

0xba8f,	// (0x0007d715) popup_call2_audio_out_window_g2

0x5611,	// (0x00077297) popup_call2_audio_out_window_g3_ParamLimits

0x5611,	// (0x00077297) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x00081155) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x00081155) popup_call2_audio_out_window_g

0xbac6,	// (0x0007d74c) popup_call2_audio_out_window_t1_ParamLimits

0xbac6,	// (0x0007d74c) popup_call2_audio_out_window_t1

0xbb25,	// (0x0007d7ab) popup_call2_audio_out_window_t2_ParamLimits

0xbb25,	// (0x0007d7ab) popup_call2_audio_out_window_t2

0xbb79,	// (0x0007d7ff) popup_call2_audio_out_window_t3_ParamLimits

0xbb79,	// (0x0007d7ff) popup_call2_audio_out_window_t3

0xbb8f,	// (0x0007d815) popup_call2_audio_out_window_t4_ParamLimits

0xbb8f,	// (0x0007d815) popup_call2_audio_out_window_t4

0xbba5,	// (0x0007d82b) popup_call2_audio_out_window_t5_ParamLimits

0xbba5,	// (0x0007d82b) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x0008115e) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x0008115e) popup_call2_audio_out_window_t

0xbc09,	// (0x0007d88f) bg_popup_call2_in_pane_ParamLimits

0xbc09,	// (0x0007d88f) bg_popup_call2_in_pane

0xbc65,	// (0x0007d8eb) popup_call2_audio_in_window_g1_ParamLimits

0xbc65,	// (0x0007d8eb) popup_call2_audio_in_window_g1

0xbc9d,	// (0x0007d923) popup_call2_audio_in_window_g2_ParamLimits

0xbc9d,	// (0x0007d923) popup_call2_audio_in_window_g2

0xbcd5,	// (0x0007d95b) popup_call2_audio_in_window_g3_ParamLimits

0xbcd5,	// (0x0007d95b) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x0008116b) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x0008116b) popup_call2_audio_in_window_g

0xbd2d,	// (0x0007d9b3) popup_call2_audio_in_window_t1_ParamLimits

0xbd2d,	// (0x0007d9b3) popup_call2_audio_in_window_t1

0xbdad,	// (0x0007da33) popup_call2_audio_in_window_t2_ParamLimits

0xbdad,	// (0x0007da33) popup_call2_audio_in_window_t2

0xbe2d,	// (0x0007dab3) popup_call2_audio_in_window_t3_ParamLimits

0xbe2d,	// (0x0007dab3) popup_call2_audio_in_window_t3

0xbe47,	// (0x0007dacd) popup_call2_audio_in_window_t4_ParamLimits

0xbe47,	// (0x0007dacd) popup_call2_audio_in_window_t4

0xbe59,	// (0x0007dadf) popup_call2_audio_in_window_t5_ParamLimits

0xbe59,	// (0x0007dadf) popup_call2_audio_in_window_t5

0xbe6e,	// (0x0007daf4) popup_call2_audio_in_window_t6_ParamLimits

0xbe6e,	// (0x0007daf4) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x00081174) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x00081174) popup_call2_audio_in_window_t

0x1ff6,	// (0x00073c7c) bg_popup_call2_in_pane_g1

0xbf8f,	// (0x0007dc15) popup_cale_lunar_info_window_t4

0x0003,

0xf556,	// (0x000811dc) popup_cale_lunar_info_window_t

0x1ffe,	// (0x00073c84) bg_popup_call2_rect_pane_ParamLimits

0x1ffe,	// (0x00073c84) bg_popup_call2_rect_pane

0x1da3,	// (0x00073a29) call2_cli_visual_graphic_pane

0x1da3,	// (0x00073a29) call2_cli_visual_text_pane

0xc0f7,	// (0x0007dd7d) smil_status_volume_pane_g3

0x0002,

0x2016,	// (0x00073c9c) call2_cli_visual_graphic_pane_g1

0x2016,	// (0x00073c9c) call2_cli_visual_graphic_pane_g2

0x2016,	// (0x00073c9c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x00081181) call2_cli_visual_graphic_pane_g

0xbe83,	// (0x0007db09) bg_popup_call2_rect_pane_g1

0x24c0,	// (0x00074146) bg_popup_call2_rect_pane_g2

0xbe8b,	// (0x0007db11) bg_popup_call2_rect_pane_g3

0xbe93,	// (0x0007db19) bg_popup_call2_rect_pane_g4

0xbe9b,	// (0x0007db21) bg_popup_call2_rect_pane_g5

0xbea3,	// (0x0007db29) bg_popup_call2_rect_pane_g6

0xbeab,	// (0x0007db31) bg_popup_call2_rect_pane_g7

0xbeb3,	// (0x0007db39) bg_popup_call2_rect_pane_g8

0xbebb,	// (0x0007db41) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x00081188) bg_popup_call2_rect_pane_g

0xbec3,	// (0x0007db49) bg_popup_call2_bubble_pane_g1

0xbecb,	// (0x0007db51) bg_popup_call2_bubble_pane_g2

0xbed3,	// (0x0007db59) bg_popup_call2_bubble_pane_g3

0xbedb,	// (0x0007db61) bg_popup_call2_bubble_pane_g4

0xbee3,	// (0x0007db69) bg_popup_call2_bubble_pane_g5

0xbeeb,	// (0x0007db71) bg_popup_call2_bubble_pane_g6

0xbef3,	// (0x0007db79) bg_popup_call2_bubble_pane_g7

0xbefb,	// (0x0007db81) bg_popup_call2_bubble_pane_g8

0xbf03,	// (0x0007db89) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x0008119b) bg_popup_call2_bubble_pane_g

0x2548,	// (0x000741ce) aid_cale_week_size_cell_pane

0x2c32,	// (0x000748b8) aid_cams_cif_uncrop_pane_ParamLimits

0x2c32,	// (0x000748b8) aid_cams_cif_uncrop_pane

0x2dac,	// (0x00074a32) aid_cams_size_cell_ParamLimits

0x2dac,	// (0x00074a32) aid_cams_size_cell

0x2dc0,	// (0x00074a46) grid_cams_pane_ParamLimits

0x2dda,	// (0x00074a60) linegrid_cams_pane_ParamLimits

0x2f07,	// (0x00074b8d) call_video_pane_t1

0x2f21,	// (0x00074ba7) call_video_pane_t2

0x0001,

0xf222,	// (0x00080ea8) call_video_pane_t

0x35d6,	// (0x0007525c) aid_cale_month_size_cell_pane_ParamLimits

0x35d6,	// (0x0007525c) aid_cale_month_size_cell_pane

0xf59a,	// (0x00081220) smil_status_volume_pane_g

0xc104,	// (0x0007dd8a) volume_smil_pane_ParamLimits

0xa9f0,	// (0x0007c676) aid_popup2_width_pane

0x2418,	// (0x0007409e) cell_qdial_pane_g4_ParamLimits

0x2418,	// (0x0007409e) cell_qdial_pane_g4

0x4a67,	// (0x000766ed) aid_blid_cardinal_pane_ParamLimits

0x4a77,	// (0x000766fd) aid_blid_destination_pane_ParamLimits

0x4a77,	// (0x000766fd) aid_blid_destination_pane

0x1ffe,	// (0x00073c84) bg_popup_call_poc_act_pane_ParamLimits

0x1ffe,	// (0x00073c84) bg_popup_call_poc_act_pane

0x1ffe,	// (0x00073c84) bg_popup_call_poc_inact_pane_ParamLimits

0x1ffe,	// (0x00073c84) bg_popup_call_poc_inact_pane

0xbf0b,	// (0x0007db91) bg_popup_call_poc_act_pane_g1

0xbf13,	// (0x0007db99) bg_popup_call_poc_act_pane_g2

0xbf1b,	// (0x0007dba1) bg_popup_call_poc_act_pane_g3

0xbedb,	// (0x0007db61) bg_popup_call_poc_act_pane_g4

0xbee3,	// (0x0007db69) bg_popup_call_poc_act_pane_g5

0xbf23,	// (0x0007dba9) bg_popup_call_poc_act_pane_g6

0xbef3,	// (0x0007db79) bg_popup_call_poc_act_pane_g7

0xbf2b,	// (0x0007dbb1) bg_popup_call_poc_act_pane_g8

0x1da3,	// (0x00073a29) main_usb_pane

0xbff9,	// (0x0007dc7f) popup_cale_lunar_info_window

0x3252,	// (0x00074ed8) im_reading_pane_t1_ParamLimits

0x3291,	// (0x00074f17) list_im_pane_ParamLimits

0x32a2,	// (0x00074f28) scroll_pane_cp07_ParamLimits

0x1da3,	// (0x00073a29) grid_highlight_pane_cp012

0x1ffe,	// (0x00073c84) mup_scale_pane_ParamLimits

0xae50,	// (0x0007cad6) main_usb_pane_g1_ParamLimits

0xae50,	// (0x0007cad6) main_usb_pane_g1

0x5664,	// (0x000772ea) main_usb_pane_g2_ParamLimits

0x5664,	// (0x000772ea) main_usb_pane_g2

0x0001,

0xf53f,	// (0x000811c5) main_usb_pane_g_ParamLimits

0xf53f,	// (0x000811c5) main_usb_pane_g

0x567a,	// (0x00077300) main_usb_pane_t1_ParamLimits

0x567a,	// (0x00077300) main_usb_pane_t1

0x568c,	// (0x00077312) main_usb_pane_t2_ParamLimits

0x568c,	// (0x00077312) main_usb_pane_t2

0x569e,	// (0x00077324) main_usb_pane_t3_ParamLimits

0x569e,	// (0x00077324) main_usb_pane_t3

0x56b0,	// (0x00077336) main_usb_pane_t4_ParamLimits

0x56b0,	// (0x00077336) main_usb_pane_t4

0x56c5,	// (0x0007734b) main_usb_pane_t5_ParamLimits

0x56c5,	// (0x0007734b) main_usb_pane_t5

0x56da,	// (0x00077360) main_usb_pane_t6_ParamLimits

0x56da,	// (0x00077360) main_usb_pane_t6

0x0005,

0xf544,	// (0x000811ca) main_usb_pane_t_ParamLimits

0x4a06,	// (0x0007668c) aid_text_placing

0x4a11,	// (0x00076697) main_location2_pane_t1_ParamLimits

0x4a27,	// (0x000766ad) main_location2_pane_t2_ParamLimits

0x4a3d,	// (0x000766c3) main_location2_pane_t3_ParamLimits

0x4a53,	// (0x000766d9) main_location2_pane_t4_ParamLimits

0x4a53,	// (0x000766d9) main_location2_pane_t4

0xf35e,	// (0x00080fe4) main_location2_pane_t_ParamLimits

0x202c,	// (0x00073cb2) find_pinb_pane_g2_ParamLimits

0x202c,	// (0x00073cb2) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00080d60) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00080d60) find_pinb_pane_g

0x2038,	// (0x00073cbe) find_pinb_pane_t1_ParamLimits

0x204a,	// (0x00073cd0) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00080d65) find_pinb_pane_t_ParamLimits

0x1da3,	// (0x00073a29) main_call3_pane

0x3c1a,	// (0x000758a0) cale_month_day_heading_pane_t1_ParamLimits

0x3ca0,	// (0x00075926) cale_month_day_heading_pane_t2_ParamLimits

0x3d19,	// (0x0007599f) cale_month_day_heading_pane_t3_ParamLimits

0x3d92,	// (0x00075a18) cale_month_day_heading_pane_t4_ParamLimits

0x3e13,	// (0x00075a99) cale_month_day_heading_pane_t5_ParamLimits

0x3e9c,	// (0x00075b22) cale_month_day_heading_pane_t6_ParamLimits

0x3f2d,	// (0x00075bb3) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00080ee0) cale_month_day_heading_pane_t_ParamLimits

0x4203,	// (0x00075e89) smil_status_volume_pane

0x50b1,	// (0x00076d37) postcard_address_pane_ParamLimits

0x50b1,	// (0x00076d37) postcard_address_pane

0x50c7,	// (0x00076d4d) postcard_message_pane_ParamLimits

0x50c7,	// (0x00076d4d) postcard_message_pane

0x563d,	// (0x000772c3) call2_cli_visual_pane_t1_ParamLimits

0x563d,	// (0x000772c3) call2_cli_visual_pane_t1

0xc131,	// (0x0007ddb7) postcard_message_pane_t1_ParamLimits

0xc131,	// (0x0007ddb7) postcard_message_pane_t1

0xc119,	// (0x0007dd9f) postcard_address_pane_t1_ParamLimits

0xc119,	// (0x0007dd9f) postcard_address_pane_t1

0x5e1c,	// (0x00077aa2) popup_call3_audio_in_window_ParamLimits

0x5e1c,	// (0x00077aa2) popup_call3_audio_in_window

0x5ca1,	// (0x00077927) bg_popup_call3_in_pane_ParamLimits

0x5ca1,	// (0x00077927) bg_popup_call3_in_pane

0x5d1d,	// (0x000779a3) popup_call3_audio_in_window_g1_ParamLimits

0x5d1d,	// (0x000779a3) popup_call3_audio_in_window_g1

0x5d3d,	// (0x000779c3) popup_call3_audio_in_window_g2_ParamLimits

0x5d3d,	// (0x000779c3) popup_call3_audio_in_window_g2

0x5d5d,	// (0x000779e3) popup_call3_audio_in_window_g3_ParamLimits

0x5d5d,	// (0x000779e3) popup_call3_audio_in_window_g3

0x0003,

0xf5a1,	// (0x00081227) popup_call3_audio_in_window_g_ParamLimits

0xf5a1,	// (0x00081227) popup_call3_audio_in_window_g

0x5d8e,	// (0x00077a14) popup_call3_audio_in_window_t1_ParamLimits

0x5d8e,	// (0x00077a14) popup_call3_audio_in_window_t1

0x5dcc,	// (0x00077a52) popup_call3_audio_in_window_t2_ParamLimits

0x5dcc,	// (0x00077a52) popup_call3_audio_in_window_t2

0x5e0a,	// (0x00077a90) popup_call3_audio_in_window_t3_ParamLimits

0x5e0a,	// (0x00077a90) popup_call3_audio_in_window_t3

0x0002,

0xf5aa,	// (0x00081230) popup_call3_audio_in_window_t_ParamLimits

0xf5aa,	// (0x00081230) popup_call3_audio_in_window_t

0x2bb1,	// (0x00074837) bg_popup_call3_rect_pane

0xbe83,	// (0x0007db09) bg_popup_call3_rect_pane_g1

0x24c0,	// (0x00074146) bg_popup_call3_rect_pane_g2

0xbe8b,	// (0x0007db11) bg_popup_call3_rect_pane_g3

0xbe93,	// (0x0007db19) bg_popup_call3_rect_pane_g4

0xbe9b,	// (0x0007db21) bg_popup_call3_rect_pane_g5

0xbea3,	// (0x0007db29) bg_popup_call3_rect_pane_g6

0xbeab,	// (0x0007db31) bg_popup_call3_rect_pane_g7

0x16a1,	// (0x00073327) mup_visualizer_osc_pane

0x16a1,	// (0x00073327) mup_visualizer_spec_pane

0x5cd1,	// (0x00077957) call3_video_qcif_pane_ParamLimits

0x5cd1,	// (0x00077957) call3_video_qcif_pane

0x5ce4,	// (0x0007796a) call3_video_qcif_uncrop_pane_ParamLimits

0x5ce4,	// (0x0007796a) call3_video_qcif_uncrop_pane

0x5cf4,	// (0x0007797a) call3_video_subqcif_pane_ParamLimits

0x5cf4,	// (0x0007797a) call3_video_subqcif_pane

0x5d0a,	// (0x00077990) call3_video_subqcif_uncrop_pane_ParamLimits

0x5d0a,	// (0x00077990) call3_video_subqcif_uncrop_pane

0x5d7d,	// (0x00077a03) popup_call3_audio_in_window_g4_ParamLimits

0x5d7d,	// (0x00077a03) popup_call3_audio_in_window_g4

0x16a1,	// (0x00073327) mup_spec_half_pane

0x16a1,	// (0x00073327) mup_spec_half_pane_cp

0x16a1,	// (0x00073327) mup_osc_middle_pane

0x2da2,	// (0x00074a28) mup_visualizer_osc_pane_g1

0xc0aa,	// (0x0007dd30) mup_spec_bar_pane_ParamLimits

0xc0aa,	// (0x0007dd30) mup_spec_bar_pane

0x2da2,	// (0x00074a28) mup_spec_bar_pane_g1

0x2da2,	// (0x00074a28) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0008105e) mup_spec_bar_pane_g

0x2548,	// (0x000741ce) aid_cale_week_size_cell_pane_ParamLimits

0x2562,	// (0x000741e8) bg_cale_heading_pane_ParamLimits

0x2586,	// (0x0007420c) bg_cale_pane_cp01_ParamLimits

0x25a3,	// (0x00074229) cale_week_corner_pane_ParamLimits

0x25c2,	// (0x00074248) cale_week_day_heading_pane_ParamLimits

0x25eb,	// (0x00074271) cale_week_scroll_pane_g1_ParamLimits

0x260a,	// (0x00074290) cale_week_scroll_pane_g2_ParamLimits

0x2622,	// (0x000742a8) cale_week_scroll_pane_g3_ParamLimits

0x263a,	// (0x000742c0) cale_week_scroll_pane_g4_ParamLimits

0x2652,	// (0x000742d8) cale_week_scroll_pane_g5_ParamLimits

0x2672,	// (0x000742f8) cale_week_scroll_pane_g6_ParamLimits

0x2692,	// (0x00074318) cale_week_scroll_pane_g7_ParamLimits

0x26b6,	// (0x0007433c) cale_week_scroll_pane_g8_ParamLimits

0x26da,	// (0x00074360) cale_week_scroll_pane_g9_ParamLimits

0x26f2,	// (0x00074378) cale_week_scroll_pane_g10_ParamLimits

0x270a,	// (0x00074390) cale_week_scroll_pane_g11_ParamLimits

0x2722,	// (0x000743a8) cale_week_scroll_pane_g12_ParamLimits

0x2746,	// (0x000743cc) cale_week_scroll_pane_g13_ParamLimits

0x2746,	// (0x000743cc) cale_week_scroll_pane_g14_ParamLimits

0x2746,	// (0x000743cc) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00080df1) cale_week_scroll_pane_g_ParamLimits

0x278e,	// (0x00074414) cale_week_time_pane_ParamLimits

0x27b2,	// (0x00074438) grid_cale_week_pane_ParamLimits

0x27e4,	// (0x0007446a) listscroll_cale_week_pane_t1

0x27f6,	// (0x0007447c) scroll_pane_cp08_ParamLimits

0x367b,	// (0x00075301) cale_month_corner_pane_ParamLimits

0x3b83,	// (0x00075809) cale_month_pane_t1

0x3b95,	// (0x0007581b) cale_month_week_pane_ParamLimits

0x4666,	// (0x000762ec) popup_call_status_window_g1_ParamLimits

0x467a,	// (0x00076300) popup_call_status_window_g2_ParamLimits

0x468e,	// (0x00076314) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x00080f6b) popup_call_status_window_g_ParamLimits

0x46f7,	// (0x0007637d) aid_call2_pane

0x0e7d,	// (0x00072b03) msg_header_pane_g1

0x50b1,	// (0x00076d37) postcard_address2_pane_ParamLimits

0x50b1,	// (0x00076d37) postcard_address2_pane

0x50c7,	// (0x00076d4d) postcard_message2_pane_ParamLimits

0x50c7,	// (0x00076d4d) postcard_message2_pane

0x5c7e,	// (0x00077904) message2_row_pane_ParamLimits

0x5c7e,	// (0x00077904) message2_row_pane

0xc064,	// (0x0007dcea) address2_row_pane_ParamLimits

0xc064,	// (0x0007dcea) address2_row_pane

0xc077,	// (0x0007dcfd) postcard_message2_row_pane_g1

0xc07f,	// (0x0007dd05) postcard_message2_row_pane_t1

0xc077,	// (0x0007dcfd) address2_row_pane_g1

0xc07f,	// (0x0007dd05) address2_row_pane_t1

0x2ba9,	// (0x0007482f) aid_size_cell_vorec

0x1da3,	// (0x00073a29) main_rss_pane

0xc08d,	// (0x0007dd13) rss_list_single_pane_ParamLimits

0xc08d,	// (0x0007dd13) rss_list_single_pane

0xc09b,	// (0x0007dd21) rss_list_single_pane_t1

0xc09b,	// (0x0007dd21) rss_list_single_pane_t2

0x0001,

0xf595,	// (0x0008121b) rss_list_single_pane_t

0x1da3,	// (0x00073a29) main_camera2_pane

0x1da3,	// (0x00073a29) main_video2_pane

0xc14d,	// (0x0007ddd3) cams_zoom_pane_cp2_ParamLimits

0xc14d,	// (0x0007ddd3) cams_zoom_pane_cp2

0xc14d,	// (0x0007ddd3) image2_vga_pane_ParamLimits

0xc14d,	// (0x0007ddd3) image2_vga_pane

0xe802,	// (0x00080488) main_camera2_pane_g1_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g1

0xe802,	// (0x00080488) main_camera2_pane_g2_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g2

0xe802,	// (0x00080488) main_camera2_pane_g3_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g3

0xe802,	// (0x00080488) main_camera2_pane_g4_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g4

0xe802,	// (0x00080488) main_camera2_pane_g5_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g5

0xe802,	// (0x00080488) main_camera2_pane_g6_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g6

0xe802,	// (0x00080488) main_camera2_pane_g7_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g7

0xe802,	// (0x00080488) main_camera2_pane_g8_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g8

0x0008,

0xf5b1,	// (0x00081237) main_camera2_pane_g_ParamLimits

0xf5b1,	// (0x00081237) main_camera2_pane_g

0x5e3e,	// (0x00077ac4) main_camera2_pane_t1_ParamLimits

0x5e3e,	// (0x00077ac4) main_camera2_pane_t1

0x5e3e,	// (0x00077ac4) main_camera2_pane_t2_ParamLimits

0x5e3e,	// (0x00077ac4) main_camera2_pane_t2

0x5e3e,	// (0x00077ac4) main_camera2_pane_t3_ParamLimits

0x5e3e,	// (0x00077ac4) main_camera2_pane_t3

0x5e3e,	// (0x00077ac4) main_camera2_pane_t4_ParamLimits

0x5e3e,	// (0x00077ac4) main_camera2_pane_t4

0x0006,

0xf5c4,	// (0x0008124a) main_camera2_pane_t_ParamLimits

0xf5c4,	// (0x0008124a) main_camera2_pane_t

0xf013,	// (0x00080c99) cams_zoom_pane_cp4_ParamLimits

0xf013,	// (0x00080c99) cams_zoom_pane_cp4

0xc16f,	// (0x0007ddf5) image2_cif_pane_ParamLimits

0xc16f,	// (0x0007ddf5) image2_cif_pane

0x18cb,	// (0x00073551) image2_subqcif_pane_ParamLimits

0x18cb,	// (0x00073551) image2_subqcif_pane

0x5e52,	// (0x00077ad8) main_video2_pane_g1_ParamLimits

0x5e52,	// (0x00077ad8) main_video2_pane_g1

0x5e52,	// (0x00077ad8) main_video2_pane_g2_ParamLimits

0x5e52,	// (0x00077ad8) main_video2_pane_g2

0x5e52,	// (0x00077ad8) main_video2_pane_g3_ParamLimits

0x5e52,	// (0x00077ad8) main_video2_pane_g3

0x5e52,	// (0x00077ad8) main_video2_pane_g4_ParamLimits

0x5e52,	// (0x00077ad8) main_video2_pane_g4

0x5e52,	// (0x00077ad8) main_video2_pane_g5_ParamLimits

0x5e52,	// (0x00077ad8) main_video2_pane_g5

0x5e52,	// (0x00077ad8) main_video2_pane_g6_ParamLimits

0x5e52,	// (0x00077ad8) main_video2_pane_g6

0x0005,

0xf5d3,	// (0x00081259) main_video2_pane_g_ParamLimits

0xf5d3,	// (0x00081259) main_video2_pane_g

0x5e60,	// (0x00077ae6) main_video2_pane_t1_ParamLimits

0x5e60,	// (0x00077ae6) main_video2_pane_t1

0x5e60,	// (0x00077ae6) main_video2_pane_t2_ParamLimits

0x5e60,	// (0x00077ae6) main_video2_pane_t2

0x5e60,	// (0x00077ae6) main_video2_pane_t3_ParamLimits

0x5e60,	// (0x00077ae6) main_video2_pane_t3

0x0002,

0xf5e0,	// (0x00081266) main_video2_pane_t_ParamLimits

0xf5e0,	// (0x00081266) main_video2_pane_t

0x5773,	// (0x000773f9) call_muted_g2

0x0001,

0xf587,	// (0x0008120d) call_muted_g

0x1da3,	// (0x00073a29) main_mup2_pane

0xac75,	// (0x0007c8fb) main_mup2_pane_g1_ParamLimits

0xac75,	// (0x0007c8fb) main_mup2_pane_g1

0xac75,	// (0x0007c8fb) main_mup2_pane_g2_ParamLimits

0xac75,	// (0x0007c8fb) main_mup2_pane_g2

0x2da2,	// (0x00074a28) main_mup_pane_g13_cp1

0x16a1,	// (0x00073327) mup_volume_pane_cp1

0xac75,	// (0x0007c8fb) main_mup2_pane_g4_ParamLimits

0xac75,	// (0x0007c8fb) main_mup2_pane_g4

0xac75,	// (0x0007c8fb) main_mup2_pane_g5_ParamLimits

0xac75,	// (0x0007c8fb) main_mup2_pane_g5

0xac75,	// (0x0007c8fb) main_mup2_pane_g6_ParamLimits

0xac75,	// (0x0007c8fb) main_mup2_pane_g6

0xac75,	// (0x0007c8fb) main_mup2_pane_g7_ParamLimits

0xac75,	// (0x0007c8fb) main_mup2_pane_g7

0x0006,

0xf5e7,	// (0x0008126d) main_mup2_pane_g_ParamLimits

0xf5e7,	// (0x0008126d) main_mup2_pane_g

0xac83,	// (0x0007c909) main_mup2_pane_t1_ParamLimits

0xac83,	// (0x0007c909) main_mup2_pane_t1

0xac83,	// (0x0007c909) main_mup2_pane_t2_ParamLimits

0xac83,	// (0x0007c909) main_mup2_pane_t2

0xac83,	// (0x0007c909) main_mup2_pane_t3_ParamLimits

0xac83,	// (0x0007c909) main_mup2_pane_t3

0xac83,	// (0x0007c909) main_mup2_pane_t4_ParamLimits

0xac83,	// (0x0007c909) main_mup2_pane_t4

0xac83,	// (0x0007c909) main_mup2_pane_t5_ParamLimits

0xac83,	// (0x0007c909) main_mup2_pane_t5

0xac83,	// (0x0007c909) main_mup2_pane_t6_ParamLimits

0xac83,	// (0x0007c909) main_mup2_pane_t6

0x0005,

0xf5f6,	// (0x0008127c) main_mup2_pane_t_ParamLimits

0xf5f6,	// (0x0008127c) main_mup2_pane_t

0xacab,	// (0x0007c931) mup2_visualizer_pane_ParamLimits

0xacab,	// (0x0007c931) mup2_visualizer_pane

0xacab,	// (0x0007c931) mup_progress_pane_cp_ParamLimits

0xacab,	// (0x0007c931) mup_progress_pane_cp

0xc17d,	// (0x0007de03) mup_volume_pane_cp_ParamLimits

0xc17d,	// (0x0007de03) mup_volume_pane_cp

0x2079,	// (0x00073cff) mup2_visualizer_pane_g1_ParamLimits

0x2079,	// (0x00073cff) mup2_visualizer_pane_g1

0x2087,	// (0x00073d0d) mup2_visualizer_pane_g2_ParamLimits

0x2087,	// (0x00073d0d) mup2_visualizer_pane_g2

0x2087,	// (0x00073d0d) mup2_visualizer_pane_g3_ParamLimits

0x2087,	// (0x00073d0d) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00080d6a) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00080d6a) mup2_visualizer_pane_g

0xaf99,	// (0x0007cc1f) aid_size_cell_fmradio

0x5923,	// (0x000775a9) aid_height_parent_landcape

0x335d,	// (0x00074fe3) wml_content_pane_cp

0x3365,	// (0x00074feb) wml_tabs_pane

0x336e,	// (0x00074ff4) popup_wml_miniature_window

0x3376,	// (0x00074ffc) scroll_pane_cp021

0x338a,	// (0x00075010) wml_content_pane_comp8

0x1da3,	// (0x00073a29) bg_popup_sub_pane_cp05

0xc193,	// (0x0007de19) popup_wml_miniature_window_g1

0xc19b,	// (0x0007de21) wml_miniature_view_pane

0x5e74,	// (0x00077afa) aid_size_wml_view

0x5e7c,	// (0x00077b02) wml_miniature_view_pane_g1

0x5e85,	// (0x00077b0b) wml_miniature_view_pane_g2

0x5e8e,	// (0x00077b14) wml_miniature_view_pane_g3

0x5e96,	// (0x00077b1c) wml_miniature_view_pane_g4

0x5e9e,	// (0x00077b24) wml_miniature_view_pane_g5

0x5ea6,	// (0x00077b2c) wml_miniature_view_pane_g6

0x5eae,	// (0x00077b34) wml_miniature_view_pane_g7

0x5eb6,	// (0x00077b3c) wml_miniature_view_pane_g8

0x0007,

0xf603,	// (0x00081289) wml_miniature_view_pane_g

0xc1a3,	// (0x0007de29) background_graphic_ParamLimits

0xc1a3,	// (0x0007de29) background_graphic

0xc1af,	// (0x0007de35) wml_tabs_2_pane

0xc1b8,	// (0x0007de3e) wml_tabs_3_pane_ParamLimits

0xc1b8,	// (0x0007de3e) wml_tabs_3_pane

0xc1ca,	// (0x0007de50) wml_tabs_4_pane_ParamLimits

0xc1ca,	// (0x0007de50) wml_tabs_4_pane

0xc1e0,	// (0x0007de66) wml_tabs_5_pane_ParamLimits

0xc1e0,	// (0x0007de66) wml_tabs_5_pane

0xc1fa,	// (0x0007de80) wml_tabs_pane_g2_ParamLimits

0xc1fa,	// (0x0007de80) wml_tabs_pane_g2

0xc20f,	// (0x0007de95) wml_tabs_pane_g3_ParamLimits

0xc20f,	// (0x0007de95) wml_tabs_pane_g3

0xc224,	// (0x0007deaa) wml_tabs_2_active_pane_ParamLimits

0xc224,	// (0x0007deaa) wml_tabs_2_active_pane

0xc224,	// (0x0007deaa) wml_tabs_2_passive_pane_ParamLimits

0xc224,	// (0x0007deaa) wml_tabs_2_passive_pane

0x5ebe,	// (0x00077b44) wml_tabs_3_active_pane_cp_ParamLimits

0x5ebe,	// (0x00077b44) wml_tabs_3_active_pane_cp

0x5ed3,	// (0x00077b59) wml_tabs_3_passive_pane_ParamLimits

0x5ed3,	// (0x00077b59) wml_tabs_3_passive_pane

0x5ee6,	// (0x00077b6c) wml_tabs_3_passive_pane_cp_ParamLimits

0x5ee6,	// (0x00077b6c) wml_tabs_3_passive_pane_cp

0x5efd,	// (0x00077b83) tabs_4_active_pane

0x5f05,	// (0x00077b8b) tabs_4_passive_pane

0x5f0f,	// (0x00077b95) tabs_4_passive_pane_cp

0x5f17,	// (0x00077b9d) tabs_4_passive_pane_cp2

0x565c,	// (0x000772e2) aid_height_text

0xacab,	// (0x0007c931) mup_volume_cont_pane_ParamLimits

0xacab,	// (0x0007c931) mup_volume_cont_pane

0x16a1,	// (0x00073327) aid_size_cell_pinb

0x16a1,	// (0x00073327) aid_size_list_pinb

0xacab,	// (0x0007c931) mup2_volume_cont_pane_ParamLimits

0xacab,	// (0x0007c931) mup2_volume_cont_pane

0xc232,	// (0x0007deb8) mup2_volume_cont_pane_g1_ParamLimits

0xc232,	// (0x0007deb8) mup2_volume_cont_pane_g1

0x16ab,	// (0x00073331) aid_size_cell_touch_ParamLimits

0x16ab,	// (0x00073331) aid_size_cell_touch

0x18e5,	// (0x0007356b) touch_pane_ParamLimits

0x18e5,	// (0x0007356b) touch_pane

0x16a1,	// (0x00073327) main_rss2_pane

0xc251,	// (0x0007ded7) listscroll_rss2_pane

0xc25a,	// (0x0007dee0) rss2_navigation_pane

0xc262,	// (0x0007dee8) list_rss2_pane

0x4882,	// (0x00076508) scroll_pane_cp22

0xc26a,	// (0x0007def0) rss2_navigation_pane_g1

0xc273,	// (0x0007def9) rss2_navigation_pane_g2

0xc27b,	// (0x0007df01) rss2_navigation_pane_g3

0x0002,

0xf614,	// (0x0008129a) rss2_navigation_pane_g

0xc283,	// (0x0007df09) rss2_navigation_pane_t1

0x5f21,	// (0x00077ba7) rss2_list_single_pane_ParamLimits

0x5f21,	// (0x00077ba7) rss2_list_single_pane

0xc291,	// (0x0007df17) rss2_list_single_pane_t2

0xc29f,	// (0x0007df25) rss2_list_single_pane_t3_ParamLimits

0xc29f,	// (0x0007df25) rss2_list_single_pane_t3

0xc2bc,	// (0x0007df42) rss2_list_single_pane_t4

0x41eb,	// (0x00075e71) smil_status_pane_g1

0x18cb,	// (0x00073551) main_image2_pane_ParamLimits

0x18cb,	// (0x00073551) main_image2_pane

0xe802,	// (0x00080488) main_camera2_pane_g9_ParamLimits

0xe802,	// (0x00080488) main_camera2_pane_g9

0x5e3e,	// (0x00077ac4) main_camera2_pane_t5_ParamLimits

0x5e3e,	// (0x00077ac4) main_camera2_pane_t5

0xc15b,	// (0x0007dde1) main_camera2_pane_t6_ParamLimits

0xc15b,	// (0x0007dde1) main_camera2_pane_t6

0x5f3b,	// (0x00077bc1) main_image2_pane_g1_ParamLimits

0x5f3b,	// (0x00077bc1) main_image2_pane_g1

0x530b,	// (0x00076f91) smil2_video_pane_ParamLimits

0x530b,	// (0x00076f91) smil2_video_pane

0xaa0c,	// (0x0007c692) aid_zoom_text_primary_cp

0xaa51,	// (0x0007c6d7) popup_preview_fixed_window

0x324a,	// (0x00074ed0) im_reading_pane_g1

0x5e30,	// (0x00077ab6) cams2_bc_adjust_pane_cp_ParamLimits

0x5e30,	// (0x00077ab6) cams2_bc_adjust_pane_cp

0xacab,	// (0x0007c931) cams2_bc_adjust_pane_ParamLimits

0xacab,	// (0x0007c931) cams2_bc_adjust_pane

0x2da2,	// (0x00074a28) cams2_bc_adjust_pane_g1

0x16a1,	// (0x00073327) cams2_slider_pane

0x2da2,	// (0x00074a28) cams2_slider_pane_g1

0x2da2,	// (0x00074a28) cams2_slider_pane_g2

0x0006,

0xf61b,	// (0x000812a1) cams2_slider_pane_g

0x20d7,	// (0x00073d5d) calc_display_pane_ParamLimits

0x20fc,	// (0x00073d82) calc_paper_pane_ParamLimits

0x211f,	// (0x00073da5) grid_calc_pane_ParamLimits

0xab7f,	// (0x0007c805) popup_clock_digital_window_t1_ParamLimits

0xaf36,	// (0x0007cbbc) main_image_pane_t1

0x20b7,	// (0x00073d3d) aid_size_cell_calc_ParamLimits

0x20b7,	// (0x00073d3d) aid_size_cell_calc

0x5975,	// (0x000775fb) popup_blid_sat_info2_window_ParamLimits

0x5975,	// (0x000775fb) popup_blid_sat_info2_window

0xc2ca,	// (0x0007df50) aid_size_cell_blid

0xc16f,	// (0x0007ddf5) bg_popup_window_pane_cp07

0xc2e7,	// (0x0007df6d) grid_popup_blid_pane

0xc2f1,	// (0x0007df77) heading_pane_cp05_ParamLimits

0xc2f1,	// (0x0007df77) heading_pane_cp05

0xc3bb,	// (0x0007e041) cell_popup_blid_pane_ParamLimits

0xc3bb,	// (0x0007e041) cell_popup_blid_pane

0xc3e5,	// (0x0007e06b) cell_popup_blid_pane_g1

0xc3ed,	// (0x0007e073) cell_popup_blid_pane_t1

0xacab,	// (0x0007c931) mup2_indicator_pane_ParamLimits

0xacab,	// (0x0007c931) mup2_indicator_pane

0x16a1,	// (0x00073327) mup2_visualizer_osc_pane

0xc17d,	// (0x0007de03) mup2_visualizer_spec_pane_ParamLimits

0xc17d,	// (0x0007de03) mup2_visualizer_spec_pane

0x16a1,	// (0x00073327) mup2_spec_half_pane

0x16a1,	// (0x00073327) mup2_spec_half_pane_cp

0xc3fb,	// (0x0007e081) mup2_spec_bar_pane_ParamLimits

0xc3fb,	// (0x0007e081) mup2_spec_bar_pane

0x2da2,	// (0x00074a28) mup2_spec_bar_pane_g1

0xc41a,	// (0x0007e0a0) mup2_spec_bar_pane_g2

0x0001,

0xf641,	// (0x000812c7) mup2_spec_bar_pane_g

0x16a1,	// (0x00073327) mup2_osc_middle_pane

0x2da2,	// (0x00074a28) mup2_visualizer_osc_pane_g1

0x1957,	// (0x000735dd) popup_number_entry_window_t1_ParamLimits

0x196a,	// (0x000735f0) popup_number_entry_window_t2_ParamLimits

0x197c,	// (0x00073602) popup_number_entry_window_t3_ParamLimits

0x198e,	// (0x00073614) popup_number_entry_window_t5_ParamLimits

0x198e,	// (0x00073614) popup_number_entry_window_t5

0xf085,	// (0x00080d0b) popup_number_entry_window_t_ParamLimits

0x19c3,	// (0x00073649) text_title_cp2_ParamLimits

0xae10,	// (0x0007ca96) aid_hotspot_pointer_text2_pane

0xae36,	// (0x0007cabc) main_viewer_pane_g9_ParamLimits

0xae36,	// (0x0007cabc) main_viewer_pane_g9

0x3b83,	// (0x00075809) cale_month_pane_t1_ParamLimits

0x426c,	// (0x00075ef2) bg_cale_pane_ParamLimits

0x4284,	// (0x00075f0a) list_cale_pane_ParamLimits

0x4295,	// (0x00075f1b) listscroll_cale_day_pane_t1

0x42a7,	// (0x00075f2d) scroll_pane_cp09_ParamLimits

0x4cfb,	// (0x00076981) main_mup_eq_pane_t1_ParamLimits

0x4cfb,	// (0x00076981) main_mup_eq_pane_t1

0x4d17,	// (0x0007699d) main_mup_eq_pane_t2_ParamLimits

0x4d17,	// (0x0007699d) main_mup_eq_pane_t2

0x4d33,	// (0x000769b9) main_mup_eq_pane_t3_ParamLimits

0x4d33,	// (0x000769b9) main_mup_eq_pane_t3

0x4d51,	// (0x000769d7) main_mup_eq_pane_t4_ParamLimits

0x4d51,	// (0x000769d7) main_mup_eq_pane_t4

0x4d6f,	// (0x000769f5) main_mup_eq_pane_t5_ParamLimits

0x4d6f,	// (0x000769f5) main_mup_eq_pane_t5

0x4d8d,	// (0x00076a13) main_mup_eq_pane_t6_ParamLimits

0x4d8d,	// (0x00076a13) main_mup_eq_pane_t6

0x4da3,	// (0x00076a29) main_mup_eq_pane_t7_ParamLimits

0x4da3,	// (0x00076a29) main_mup_eq_pane_t7

0x4db9,	// (0x00076a3f) main_mup_eq_pane_t8_ParamLimits

0x4db9,	// (0x00076a3f) main_mup_eq_pane_t8

0x4dcf,	// (0x00076a55) main_mup_eq_pane_t9_ParamLimits

0x4dcf,	// (0x00076a55) main_mup_eq_pane_t9

0x4deb,	// (0x00076a71) main_mup_eq_pane_t10_ParamLimits

0x4deb,	// (0x00076a71) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0008106a) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0008106a) main_mup_eq_pane_t

0x4ec0,	// (0x00076b46) mup_equalizer_pane_cp5_ParamLimits

0x4ed8,	// (0x00076b5e) mup_equalizer_pane_cp6_ParamLimits

0x4ef0,	// (0x00076b76) mup_equalizer_pane_cp7_ParamLimits

0x16a1,	// (0x00073327) main_gallery_pane

0xc0c9,	// (0x0007dd4f) smil2_volume_pane

0xc0d1,	// (0x0007dd57) smil_status_volume_pane_g1_ParamLimits

0xc0e4,	// (0x0007dd6a) smil_status_volume_pane_g2_ParamLimits

0xc0f7,	// (0x0007dd7d) smil_status_volume_pane_g3_ParamLimits

0xf59a,	// (0x00081220) smil_status_volume_pane_g_ParamLimits

0xc16f,	// (0x0007ddf5) bg_popup_window_pane_cp07_ParamLimits

0xc2d2,	// (0x0007df58) blid_firmament_pane

0x18cb,	// (0x00073551) aid_size_cell_gallery_ParamLimits

0x18cb,	// (0x00073551) aid_size_cell_gallery

0x18cb,	// (0x00073551) grid_gallery_pane_ParamLimits

0x18cb,	// (0x00073551) grid_gallery_pane

0xc16f,	// (0x0007ddf5) cell_gallery_pane_ParamLimits

0xc16f,	// (0x0007ddf5) cell_gallery_pane

0x18cb,	// (0x00073551) bg_cell_gallery_focus_pane_ParamLimits

0x18cb,	// (0x00073551) bg_cell_gallery_focus_pane

0x2079,	// (0x00073cff) cell_gallery_pane_g1_ParamLimits

0x2079,	// (0x00073cff) cell_gallery_pane_g1

0x2079,	// (0x00073cff) cell_gallery_pane_g2_ParamLimits

0x2079,	// (0x00073cff) cell_gallery_pane_g2

0x2079,	// (0x00073cff) cell_gallery_pane_g3_ParamLimits

0x2079,	// (0x00073cff) cell_gallery_pane_g3

0x2087,	// (0x00073d0d) cell_gallery_pane_g4_ParamLimits

0x2087,	// (0x00073d0d) cell_gallery_pane_g4

0x0003,

0xf646,	// (0x000812cc) cell_gallery_pane_g_ParamLimits

0xf646,	// (0x000812cc) cell_gallery_pane_g

0xc424,	// (0x0007e0aa) bg_cell_gallery_focus_pane_g1

0xc42c,	// (0x0007e0b2) bg_cell_gallery_focus_pane_g2

0xc434,	// (0x0007e0ba) bg_cell_gallery_focus_pane_g3

0xc43c,	// (0x0007e0c2) bg_cell_gallery_focus_pane_g4

0xc444,	// (0x0007e0ca) bg_cell_gallery_focus_pane_g5

0xc44c,	// (0x0007e0d2) bg_cell_gallery_focus_pane_g6

0xc454,	// (0x0007e0da) bg_cell_gallery_focus_pane_g7

0xc45c,	// (0x0007e0e2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64f,	// (0x000812d5) bg_cell_gallery_focus_pane_g

0xc464,	// (0x0007e0ea) aid_firma_cardinal

0xc478,	// (0x0007e0fe) blid_firmament_pane_t1

0xc48f,	// (0x0007e115) blid_firmament_pane_t2

0xc4a6,	// (0x0007e12c) blid_firmament_pane_t3

0xc4bd,	// (0x0007e143) blid_firmament_pane_t4

0x0003,

0xf660,	// (0x000812e6) blid_firmament_pane_t

0xc4d4,	// (0x0007e15a) blid_sat_info_pane

0x2da2,	// (0x00074a28) blid_sat_info_pane_g1

0x2da2,	// (0x00074a28) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0008105e) blid_sat_info_pane_g

0xc4e4,	// (0x0007e16a) blid_sat_info_pane_t1

0xc4f2,	// (0x0007e178) smil2_volume_content_pane

0xc4fb,	// (0x0007e181) smil2_volume_pane_g1

0x23b5,	// (0x0007403b) smil2_volume_content_pane_g1

0xc503,	// (0x0007e189) smil2_volume_content_pane_g2

0xc50c,	// (0x0007e192) smil2_volume_content_pane_g3

0xc515,	// (0x0007e19b) smil2_volume_content_pane_g4

0xc51e,	// (0x0007e1a4) smil2_volume_content_pane_g5

0xc527,	// (0x0007e1ad) smil2_volume_content_pane_g6

0xc530,	// (0x0007e1b6) smil2_volume_content_pane_g7

0xc539,	// (0x0007e1bf) smil2_volume_content_pane_g8

0xc542,	// (0x0007e1c8) smil2_volume_content_pane_g9

0xc54b,	// (0x0007e1d1) smil2_volume_content_pane_g10

0x0009,

0xf669,	// (0x000812ef) smil2_volume_content_pane_g

0x28af,	// (0x00074535) cale_week_day_heading_pane_t1_ParamLimits

0x28d9,	// (0x0007455f) cale_week_day_heading_pane_t2_ParamLimits

0x2908,	// (0x0007458e) cale_week_day_heading_pane_t3_ParamLimits

0x2937,	// (0x000745bd) cale_week_day_heading_pane_t4_ParamLimits

0x2966,	// (0x000745ec) cale_week_day_heading_pane_t5_ParamLimits

0x2999,	// (0x0007461f) cale_week_day_heading_pane_t6_ParamLimits

0x29d0,	// (0x00074656) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00080e12) cale_week_day_heading_pane_t_ParamLimits

0x29fa,	// (0x00074680) bg_cale_side_pane_ParamLimits

0x2a08,	// (0x0007468e) cale_week_time_pane_t1_ParamLimits

0x2a22,	// (0x000746a8) cale_week_time_pane_t2_ParamLimits

0x2a3c,	// (0x000746c2) cale_week_time_pane_t3_ParamLimits

0x2a56,	// (0x000746dc) cale_week_time_pane_t4_ParamLimits

0x2a70,	// (0x000746f6) cale_week_time_pane_t5_ParamLimits

0x2a8a,	// (0x00074710) cale_week_time_pane_t6_ParamLimits

0x2aaa,	// (0x00074730) cale_week_time_pane_t7_ParamLimits

0x2ad0,	// (0x00074756) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00080e21) cale_week_time_pane_t_ParamLimits

0x2af6,	// (0x0007477c) cell_cale_week_pane_g2_ParamLimits

0x29fa,	// (0x00074680) bg_cale_side_pane_cp01_ParamLimits

0x3fbe,	// (0x00075c44) cale_month_week_pane_t1_ParamLimits

0x3fd7,	// (0x00075c5d) cale_month_week_pane_t2_ParamLimits

0x3ff0,	// (0x00075c76) cale_month_week_pane_t3_ParamLimits

0x4009,	// (0x00075c8f) cale_month_week_pane_t4_ParamLimits

0x4022,	// (0x00075ca8) cale_month_week_pane_t5_ParamLimits

0x403b,	// (0x00075cc1) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00080eef) cale_month_week_pane_t_ParamLimits

0xaaf3,	// (0x0007c779) cell_cale_month_pane_g1_ParamLimits

0x16a1,	// (0x00073327) main_cale_event_viewer_pane

0x16a1,	// (0x00073327) listscroll_cale_event_viewer_pane

0xc554,	// (0x0007e1da) list_cale_ev_pane

0xc55c,	// (0x0007e1e2) scroll_pane_cp023

0x5f51,	// (0x00077bd7) field_cale_ev_pane_ParamLimits

0x5f51,	// (0x00077bd7) field_cale_ev_pane

0xc568,	// (0x0007e1ee) field_cale_ev_content_pane_ParamLimits

0xc568,	// (0x0007e1ee) field_cale_ev_content_pane

0xc574,	// (0x0007e1fa) field_cale_ev_pane_g1_ParamLimits

0xc574,	// (0x0007e1fa) field_cale_ev_pane_g1

0xc580,	// (0x0007e206) field_cale_ev_pane_g2_ParamLimits

0xc580,	// (0x0007e206) field_cale_ev_pane_g2

0xc598,	// (0x0007e21e) field_cale_ev_pane_g3_ParamLimits

0xc598,	// (0x0007e21e) field_cale_ev_pane_g3

0x0002,

0xf67e,	// (0x00081304) field_cale_ev_pane_g_ParamLimits

0xf67e,	// (0x00081304) field_cale_ev_pane_g

0xc5b0,	// (0x0007e236) field_cale_ev_pane_t1_ParamLimits

0xc5b0,	// (0x0007e236) field_cale_ev_pane_t1

0x5f75,	// (0x00077bfb) field_cale_ev_content_pane_t1_ParamLimits

0x5f75,	// (0x00077bfb) field_cale_ev_content_pane_t1

0xad58,	// (0x0007c9de) bg_button_pane_cp01

0x252f,	// (0x000741b5) listscroll_cale_week_pane_ParamLimits

0x253f,	// (0x000741c5) popup_toolbar_window_cp01

0x27e4,	// (0x0007446a) listscroll_cale_week_pane_t1_ParamLimits

0x252f,	// (0x000741b5) listscroll_cale_day_pane_ParamLimits

0x253f,	// (0x000741c5) popup_toolbar_window_cp02

0x4295,	// (0x00075f1b) listscroll_cale_day_pane_t1_ParamLimits

0x252f,	// (0x000741b5) main_cale_month_pane_ParamLimits

0xc034,	// (0x0007dcba) popup_toolbar_window_cp03_ParamLimits

0xc034,	// (0x0007dcba) popup_toolbar_window_cp03

0x51c9,	// (0x00076e4f) main_image_pane_g2_ParamLimits

0x51c9,	// (0x00076e4f) main_image_pane_g2

0x51da,	// (0x00076e60) main_image_pane_g3_ParamLimits

0x51da,	// (0x00076e60) main_image_pane_g3

0x0002,

0xf476,	// (0x000810fc) main_image_pane_g_ParamLimits

0xf476,	// (0x000810fc) main_image_pane_g

0xaf36,	// (0x0007cbbc) main_image_pane_t1_ParamLimits

0x51eb,	// (0x00076e71) main_image_pane_t2_ParamLimits

0x51eb,	// (0x00076e71) main_image_pane_t2

0x51fd,	// (0x00076e83) main_image_pane_t3_ParamLimits

0x51fd,	// (0x00076e83) main_image_pane_t3

0x5225,	// (0x00076eab) main_image_pane_t4_ParamLimits

0x5225,	// (0x00076eab) main_image_pane_t4

0x0003,

0xf47d,	// (0x00081103) main_image_pane_t_ParamLimits

0xf47d,	// (0x00081103) main_image_pane_t

0x5245,	// (0x00076ecb) popup_image_details_window_cp01

0x524f,	// (0x00076ed5) popup_toobar_trans_pane_cp01_ParamLimits

0x524f,	// (0x00076ed5) popup_toobar_trans_pane_cp01

0x5a68,	// (0x000776ee) popup_image_details_window_ParamLimits

0x5a68,	// (0x000776ee) popup_image_details_window

0xc005,	// (0x0007dc8b) popup_image_focus_window

0xc14d,	// (0x0007ddd3) camera2_autofocus_pane_ParamLimits

0xc14d,	// (0x0007ddd3) camera2_autofocus_pane

0x16a1,	// (0x00073327) bg_popup_sub_pane_cp06

0xc5c7,	// (0x0007e24d) popup_image_focus_window_g1

0xc5cf,	// (0x0007e255) popup_image_focus_window_g2

0xc5d7,	// (0x0007e25d) popup_image_focus_window_g3

0xc5df,	// (0x0007e265) popup_image_focus_window_g4

0x0003,

0xf685,	// (0x0008130b) popup_image_focus_window_g

0xc5e7,	// (0x0007e26d) popup_image_focus_window_t1

0xc5f5,	// (0x0007e27b) popup_image_focus_window_t2

0xc605,	// (0x0007e28b) popup_image_focus_window_t3

0x0002,

0xf68e,	// (0x00081314) popup_image_focus_window_t

0x2079,	// (0x00073cff) camera2_autofocus_pane_g1

0x18cb,	// (0x00073551) bg_tb_trans_pane_cp01

0xc613,	// (0x0007e299) popup_image_details_window_g1

0xc626,	// (0x0007e2ac) popup_image_details_window_g2

0x0002,

0xf6a0,	// (0x00081326) popup_image_details_window_g

0xc64f,	// (0x0007e2d5) popup_image_details_window_t1

0xc661,	// (0x0007e2e7) popup_image_details_window_t2

0xc67a,	// (0x0007e300) popup_image_details_window_t3

0xc68e,	// (0x0007e314) popup_image_details_window_t4

0xc6a9,	// (0x0007e32f) popup_image_details_window_t5

0x0004,

0xf6a7,	// (0x0008132d) popup_image_details_window_t

0x223f,	// (0x00073ec5) bg_calc_paper_pane_ParamLimits

0x16a1,	// (0x00073327) grid_highlight_pane_cp013

0xaa63,	// (0x0007c6e9) list_calc_pane_ParamLimits

0xaa75,	// (0x0007c6fb) scroll_pane_cp024

0x2253,	// (0x00073ed9) bg_calc_display_pane_ParamLimits

0x225f,	// (0x00073ee5) calc_display_pane_t1_ParamLimits

0x2271,	// (0x00073ef7) calc_display_pane_t2_ParamLimits

0xaa7d,	// (0x0007c703) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00080d92) calc_display_pane_t_ParamLimits

0x237b,	// (0x00074001) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00080daf) cell_calc_pane_g

0x2384,	// (0x0007400a) cell_calc_pane_t1

0x2393,	// (0x00074019) grid_highlight_pane_cp02_ParamLimits

0x23a9,	// (0x0007402f) toolbar_button_pane_cp01_ParamLimits

0x23a9,	// (0x0007402f) toolbar_button_pane_cp01

0xaf7b,	// (0x0007cc01) temp_image_control_pane_ParamLimits

0xaf7b,	// (0x0007cc01) temp_image_control_pane

0x18cb,	// (0x00073551) main_mp3_pane

0xc6c3,	// (0x0007e349) temp_image_control_pane_g1_ParamLimits

0xc6c3,	// (0x0007e349) temp_image_control_pane_g1

0xc6d1,	// (0x0007e357) temp_image_control_pane_g2_ParamLimits

0xc6d1,	// (0x0007e357) temp_image_control_pane_g2

0xc6e3,	// (0x0007e369) temp_image_control_pane_g3_ParamLimits

0xc6e3,	// (0x0007e369) temp_image_control_pane_g3

0x5f96,	// (0x00077c1c) temp_image_control_pane_g4_ParamLimits

0x5f96,	// (0x00077c1c) temp_image_control_pane_g4

0x0003,

0xf6b2,	// (0x00081338) temp_image_control_pane_g_ParamLimits

0xf6b2,	// (0x00081338) temp_image_control_pane_g

0xc6c3,	// (0x0007e349) main_mp3_pane_g1

0x5fa9,	// (0x00077c2f) main_mp3_pane_g2

0x0007,

0xf6bb,	// (0x00081341) main_mp3_pane_g

0xc718,	// (0x0007e39e) main_mp3_pane_t1

0x2087,	// (0x00073d0d) main_camera_pane_g8_ParamLimits

0x2087,	// (0x00073d0d) main_camera_pane_g8

0x2d50,	// (0x000749d6) main_video_pane_g7_ParamLimits

0x2d50,	// (0x000749d6) main_video_pane_g7

0xac97,	// (0x0007c91d) main_camera2_pane_t7_ParamLimits

0xac97,	// (0x0007c91d) main_camera2_pane_t7

0x331d,	// (0x00074fa3) scroll_pane_cp025_ParamLimits

0x331d,	// (0x00074fa3) scroll_pane_cp025

0x3331,	// (0x00074fb7) scroll_pane_cp026_ParamLimits

0x3331,	// (0x00074fb7) scroll_pane_cp026

0x3340,	// (0x00074fc6) wml_content_pane_ParamLimits

0x16a1,	// (0x00073327) main_touch_calib_pane

0x607b,	// (0x00077d01) main_touch_calib_pane_g1

0x608d,	// (0x00077d13) main_touch_calib_pane_g2

0x609f,	// (0x00077d25) main_touch_calib_pane_g3

0x60b1,	// (0x00077d37) main_touch_calib_pane_g4

0x0003,

0xf6d9,	// (0x0008135f) main_touch_calib_pane_g

0x60c3,	// (0x00077d49) main_touch_calib_pane_t1

0x60dd,	// (0x00077d63) main_touch_calib_pane_t2

0x0004,

0xf6e2,	// (0x00081368) main_touch_calib_pane_t

0x4b52,	// (0x000767d8) mup_progress_pane_cp02

0x4b87,	// (0x0007680d) navi_pane_g1

0x4c42,	// (0x000768c8) navi_pane_mp_t3

0x18cb,	// (0x00073551) main_mp3_pane_ParamLimits

0x5c21,	// (0x000778a7) navi_pane_ParamLimits

0xc6c3,	// (0x0007e349) main_mp3_pane_g1_ParamLimits

0x5fa9,	// (0x00077c2f) main_mp3_pane_g2_ParamLimits

0x5fb5,	// (0x00077c3b) main_mp3_pane_g3_ParamLimits

0x5fb5,	// (0x00077c3b) main_mp3_pane_g3

0x5fc3,	// (0x00077c49) main_mp3_pane_g4_ParamLimits

0x5fc3,	// (0x00077c49) main_mp3_pane_g4

0x2079,	// (0x00073cff) main_mp3_pane_g5_ParamLimits

0x2079,	// (0x00073cff) main_mp3_pane_g5

0xc6f3,	// (0x0007e379) main_mp3_pane_g6_ParamLimits

0xc6f3,	// (0x0007e379) main_mp3_pane_g6

0xc700,	// (0x0007e386) main_mp3_pane_g7_ParamLimits

0xc700,	// (0x0007e386) main_mp3_pane_g7

0xc70c,	// (0x0007e392) main_mp3_pane_g8_ParamLimits

0xc70c,	// (0x0007e392) main_mp3_pane_g8

0xf6bb,	// (0x00081341) main_mp3_pane_g_ParamLimits

0x5fcf,	// (0x00077c55) main_mp3_pane_t2

0x5fdd,	// (0x00077c63) main_mp3_pane_t3

0xc726,	// (0x0007e3ac) main_mp3_pane_t4

0xc734,	// (0x0007e3ba) main_mp3_pane_t5

0x0005,

0xf6cc,	// (0x00081352) main_mp3_pane_t

0xc742,	// (0x0007e3c8) mup_progress_pane_cp01

0xaa0c,	// (0x0007c692) aid_zoom_text_secondary2

0xc554,	// (0x0007e1da) list_cale_ev2_pane

0xc55c,	// (0x0007e1e2) scroll_pane_cp023_ParamLimits

0x6137,	// (0x00077dbd) field_cale_ev2_pane_ParamLimits

0x6137,	// (0x00077dbd) field_cale_ev2_pane

0x615b,	// (0x00077de1) field_cale_ev2_pane_g1_ParamLimits

0x615b,	// (0x00077de1) field_cale_ev2_pane_g1

0x6167,	// (0x00077ded) field_cale_ev2_pane_g2_ParamLimits

0x6167,	// (0x00077ded) field_cale_ev2_pane_g2

0x617f,	// (0x00077e05) field_cale_ev2_pane_g3_ParamLimits

0x617f,	// (0x00077e05) field_cale_ev2_pane_g3

0x0003,

0xf6ed,	// (0x00081373) field_cale_ev2_pane_g_ParamLimits

0xf6ed,	// (0x00081373) field_cale_ev2_pane_g

0x0e8b,	// (0x00072b11) field_cale_ev2_pane_t1_ParamLimits

0x0e8b,	// (0x00072b11) field_cale_ev2_pane_t1

0x0ea2,	// (0x00072b28) field_cale_ev2_pane_t2_ParamLimits

0x0ea2,	// (0x00072b28) field_cale_ev2_pane_t2

0x0001,

0xf6f6,	// (0x0008137c) field_cale_ev2_pane_t_ParamLimits

0xf6f6,	// (0x0008137c) field_cale_ev2_pane_t

0x5061,	// (0x00076ce7) main_postcard_pane_g5_ParamLimits

0x5061,	// (0x00076ce7) main_postcard_pane_g5

0x5077,	// (0x00076cfd) main_postcard_pane_g6_ParamLimits

0x5077,	// (0x00076cfd) main_postcard_pane_g6

0x18cb,	// (0x00073551) camera2_autofocus_pane_cp_ParamLimits

0x18cb,	// (0x00073551) camera2_autofocus_pane_cp

0x18cb,	// (0x00073551) main_mup3_pane

0x61e1,	// (0x00077e67) main_mup3_pane_g1_ParamLimits

0x61e1,	// (0x00077e67) main_mup3_pane_g1

0x6203,	// (0x00077e89) main_mup3_pane_g2_ParamLimits

0x6203,	// (0x00077e89) main_mup3_pane_g2

0x627e,	// (0x00077f04) main_mup3_pane_g3_ParamLimits

0x627e,	// (0x00077f04) main_mup3_pane_g3

0x62e8,	// (0x00077f6e) main_mup3_pane_g4_ParamLimits

0x62e8,	// (0x00077f6e) main_mup3_pane_g4

0x6352,	// (0x00077fd8) main_mup3_pane_g5_ParamLimits

0x6352,	// (0x00077fd8) main_mup3_pane_g5

0x63bc,	// (0x00078042) main_mup3_pane_g6_ParamLimits

0x63bc,	// (0x00078042) main_mup3_pane_g6

0x2087,	// (0x00073d0d) main_mup3_pane_g7_ParamLimits

0x2087,	// (0x00073d0d) main_mup3_pane_g7

0x0007,

0xf706,	// (0x0008138c) main_mup3_pane_g_ParamLimits

0xf706,	// (0x0008138c) main_mup3_pane_g

0x6440,	// (0x000780c6) main_mup3_pane_t1_ParamLimits

0x6440,	// (0x000780c6) main_mup3_pane_t1

0x64b2,	// (0x00078138) main_mup3_pane_t2_ParamLimits

0x64b2,	// (0x00078138) main_mup3_pane_t2

0x6588,	// (0x0007820e) main_mup3_pane_t4_ParamLimits

0x6588,	// (0x0007820e) main_mup3_pane_t4

0x65e6,	// (0x0007826c) main_mup3_pane_t5_ParamLimits

0x65e6,	// (0x0007826c) main_mup3_pane_t5

0x66aa,	// (0x00078330) main_mup3_pane_t6_ParamLimits

0x66aa,	// (0x00078330) main_mup3_pane_t6

0x0005,

0xf717,	// (0x0008139d) main_mup3_pane_t_ParamLimits

0xf717,	// (0x0008139d) main_mup3_pane_t

0x6762,	// (0x000783e8) mup3_progress_pane_ParamLimits

0x6762,	// (0x000783e8) mup3_progress_pane

0x67fa,	// (0x00078480) popup_mup3_control_window_ParamLimits

0x67fa,	// (0x00078480) popup_mup3_control_window

0xc756,	// (0x0007e3dc) popup_mup3_text_window

0x6830,	// (0x000784b6) mup3_progress_pane_t1

0x684f,	// (0x000784d5) mup3_progress_pane_t2

0xc75e,	// (0x0007e3e4) mup3_progress_pane_t3

0x0002,

0xf724,	// (0x000813aa) mup3_progress_pane_t

0xc77b,	// (0x0007e401) mup_progress_pane_cp03

0x16a1,	// (0x00073327) bg_tb_trans_pane_cp04

0x686e,	// (0x000784f4) mup3_volume_pane

0x6876,	// (0x000784fc) popup_mup3_control_window_g1

0x687f,	// (0x00078505) mup3_volume_pane_g1

0x6888,	// (0x0007850e) mup3_volume_pane_g2

0x6891,	// (0x00078517) mup3_volume_pane_g3

0x0002,

0xf72b,	// (0x000813b1) mup3_volume_pane_g

0x16a1,	// (0x00073327) bg_tb_trans_pane_cp03

0xc78b,	// (0x0007e411) popup_mup3_text_window_g1

0xc793,	// (0x0007e419) popup_mup3_text_window_t1

0x2354,	// (0x00073fda) list_calc_item_pane_g1_ParamLimits

0xc248,	// (0x0007dece) mup_volume_pane_cp_g1

0x60f7,	// (0x00077d7d) main_touch_calib_pane_t3

0x610b,	// (0x00077d91) main_touch_calib_pane_t4

0x6121,	// (0x00077da7) main_touch_calib_pane_t5

0xa9e8,	// (0x0007c66e) aid_cell_size_toolbar2

0xa9f0,	// (0x0007c676) aid_popup3_width_pane

0xa9fc,	// (0x0007c682) aid_zoom_text_msg_primary

0x2bfb,	// (0x00074881) vorec_t7

0x22be,	// (0x00073f44) bg_calc_paper_pane_g1_ParamLimits

0x22ca,	// (0x00073f50) bg_calc_paper_pane_g2_ParamLimits

0x22d6,	// (0x00073f5c) bg_calc_paper_pane_g3_ParamLimits

0x22e2,	// (0x00073f68) bg_calc_paper_pane_g4_ParamLimits

0x22ee,	// (0x00073f74) bg_calc_paper_pane_g5_ParamLimits

0x22fa,	// (0x00073f80) bg_calc_paper_pane_g6_ParamLimits

0x2308,	// (0x00073f8e) bg_calc_paper_pane_g7_ParamLimits

0x2316,	// (0x00073f9c) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00080d99) bg_calc_paper_pane_g_ParamLimits

0x2329,	// (0x00073faf) calc_bg_paper_pane_g9_ParamLimits

0x18cb,	// (0x00073551) image_qvga_pane_ParamLimits

0x18cb,	// (0x00073551) image_qvga_pane

0x1ffe,	// (0x00073c84) bg_popup_sub_pane_cp04_ParamLimits

0xaeb2,	// (0x0007cb38) popup_mup_playback_window_g1_ParamLimits

0xaebe,	// (0x0007cb44) popup_mup_playback_window_t1_ParamLimits

0xaed3,	// (0x0007cb59) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x000810f7) popup_mup_playback_window_t_ParamLimits

0x2087,	// (0x00073d0d) main_mup2_pane_g3_ParamLimits

0x2087,	// (0x00073d0d) main_mup2_pane_g3

0x2fa8,	// (0x00074c2e) popup_toolbar_window_cp04

0xb2ce,	// (0x0007cf54) popup_call2_audio_second_window_g3_ParamLimits

0xb2ce,	// (0x0007cf54) popup_call2_audio_second_window_g3

0xb6e6,	// (0x0007d36c) popup_call2_audio_first_window_g4_ParamLimits

0xb6e6,	// (0x0007d36c) popup_call2_audio_first_window_g4

0xbd0d,	// (0x0007d993) popup_call2_audio_in_window_g4_ParamLimits

0xbd0d,	// (0x0007d993) popup_call2_audio_in_window_g4

0x51ab,	// (0x00076e31) aid_area_sk_bg_cut_ParamLimits

0x51ab,	// (0x00076e31) aid_area_sk_bg_cut

0xaee8,	// (0x0007cb6e) aid_area_sk_bg_cut_2_ParamLimits

0xaee8,	// (0x0007cb6e) aid_area_sk_bg_cut_2

0x16a1,	// (0x00073327) aid_placing_details_win

0x16a1,	// (0x00073327) aid_placing_details_win_2

0x2079,	// (0x00073cff) camera2_autofocus_pane_g1_ParamLimits

0x1872,	// (0x000734f8) popup_fixed_preview_cale_window_ParamLimits

0x1872,	// (0x000734f8) popup_fixed_preview_cale_window

0xabbe,	// (0x0007c844) navi_slider_pane_g3

0xabc7,	// (0x0007c84d) navi_slider_pane_g4

0xabd0,	// (0x0007c856) navi_slider_pane_g5

0xabbe,	// (0x0007c844) navi_slider_pane_g6

0xabd9,	// (0x0007c85f) navi_slider_pane_g7

0xad1d,	// (0x0007c9a3) mup_scale_pane_g3

0xad26,	// (0x0007c9ac) mup_scale_pane_g4

0xad2f,	// (0x0007c9b5) mup_scale_pane_g5

0x4f08,	// (0x00076b8e) mup_scale_pane_g6

0x4f11,	// (0x00076b97) mup_scale_pane_g7

0x2da2,	// (0x00074a28) cams2_slider_pane_g3

0x2da2,	// (0x00074a28) cams2_slider_pane_g4

0x2da2,	// (0x00074a28) cams2_slider_pane_g5

0x2da2,	// (0x00074a28) cams2_slider_pane_g6

0x2da2,	// (0x00074a28) cams2_slider_pane_g7

0x2da2,	// (0x00074a28) camera2_autofocus_pane_cp_g1

0xbfe5,	// (0x0007dc6b) bg_popup_preview_window_pane_cp02_ParamLimits

0xbfe5,	// (0x0007dc6b) bg_popup_preview_window_pane_cp02

0xc7a1,	// (0x0007e427) list_fp_cale_pane_ParamLimits

0xc7a1,	// (0x0007e427) list_fp_cale_pane

0xc7ad,	// (0x0007e433) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7ad,	// (0x0007e433) popup_fixed_preview_cale_window_t1

0x689a,	// (0x00078520) popup_fixed_preview_cale_window_t2_ParamLimits

0x689a,	// (0x00078520) popup_fixed_preview_cale_window_t2

0x68af,	// (0x00078535) popup_fixed_preview_cale_window_t3_ParamLimits

0x68af,	// (0x00078535) popup_fixed_preview_cale_window_t3

0x0002,

0xf732,	// (0x000813b8) popup_fixed_preview_cale_window_t_ParamLimits

0xf732,	// (0x000813b8) popup_fixed_preview_cale_window_t

0x68c6,	// (0x0007854c) list_single_fp_cale_pane_ParamLimits

0x68c6,	// (0x0007854c) list_single_fp_cale_pane

0xc7cb,	// (0x0007e451) list_single_fp_cale_pane_g1_ParamLimits

0xc7cb,	// (0x0007e451) list_single_fp_cale_pane_g1

0xc7d7,	// (0x0007e45d) list_single_fp_cale_pane_g2_ParamLimits

0xc7d7,	// (0x0007e45d) list_single_fp_cale_pane_g2

0x0002,

0xf739,	// (0x000813bf) list_single_fp_cale_pane_g_ParamLimits

0xf739,	// (0x000813bf) list_single_fp_cale_pane_g

0xc7f0,	// (0x0007e476) list_single_fp_cale_pane_t1_ParamLimits

0xc7f0,	// (0x0007e476) list_single_fp_cale_pane_t1

0xc802,	// (0x0007e488) list_single_fp_cale_pane_t2_ParamLimits

0xc802,	// (0x0007e488) list_single_fp_cale_pane_t2

0x0001,

0xf740,	// (0x000813c6) list_single_fp_cale_pane_t_ParamLimits

0xf740,	// (0x000813c6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x16a1,	// (0x00073327) main_dialer_pane

0x16a1,	// (0x00073327) aid_cell_size_keypad

0x16a1,	// (0x00073327) dialer_ne_pane

0x16a1,	// (0x00073327) grid_dialer_command_1_pane

0x16a1,	// (0x00073327) grid_dialer_command_2_pane

0x16a1,	// (0x00073327) grid_dialer_keypad_pane

0x68de,	// (0x00078564) bg_popup_call_pane_cp06_ParamLimits

0x68de,	// (0x00078564) bg_popup_call_pane_cp06

0x68de,	// (0x00078564) dialer_ne_clear_pane_ParamLimits

0x68de,	// (0x00078564) dialer_ne_clear_pane

0x2da2,	// (0x00074a28) dialer_ne_pane_g1

0xac97,	// (0x0007c91d) dialer_ne_pane_t1_ParamLimits

0xac97,	// (0x0007c91d) dialer_ne_pane_t1

0x68ec,	// (0x00078572) dialer_ne_pane_t2_ParamLimits

0x68ec,	// (0x00078572) dialer_ne_pane_t2

0x6914,	// (0x0007859a) dialer_ne_pane_t3_ParamLimits

0x6914,	// (0x0007859a) dialer_ne_pane_t3

0x0002,

0xf745,	// (0x000813cb) dialer_ne_pane_t_ParamLimits

0xf745,	// (0x000813cb) dialer_ne_pane_t

0x6914,	// (0x0007859a) dialer_ne_pane_t3_copy1_ParamLimits

0x6914,	// (0x0007859a) dialer_ne_pane_t3_copy1

0xc835,	// (0x0007e4bb) cell_dialer_keypad_pane_ParamLimits

0xc835,	// (0x0007e4bb) cell_dialer_keypad_pane

0x18cb,	// (0x00073551) cell_dialer_command_1_pane_ParamLimits

0x18cb,	// (0x00073551) cell_dialer_command_1_pane

0xc84c,	// (0x0007e4d2) cell_dialer_command_2_pane_ParamLimits

0xc84c,	// (0x0007e4d2) cell_dialer_command_2_pane

0x18cb,	// (0x00073551) bg_button_pane_cp02_ParamLimits

0x18cb,	// (0x00073551) bg_button_pane_cp02

0x2079,	// (0x00073cff) cell_dialer_keypad_pane_g1_ParamLimits

0x2079,	// (0x00073cff) cell_dialer_keypad_pane_g1

0x18cb,	// (0x00073551) bg_button_pane_cp03_ParamLimits

0x18cb,	// (0x00073551) bg_button_pane_cp03

0x2079,	// (0x00073cff) cell_dialer_command_1_pane_g1_ParamLimits

0x2079,	// (0x00073cff) cell_dialer_command_1_pane_g1

0x16a1,	// (0x00073327) bg_button_pane_cp04

0x2da2,	// (0x00074a28) cell_dialer_command_2_pane_g1

0x16a1,	// (0x00073327) bg_button_pane_cp06

0x2da2,	// (0x00074a28) dialer_ne_clear_pane_g1

0x4b93,	// (0x00076819) navi_pane_g2

0x4bc1,	// (0x00076847) navi_pane_g3

0x0002,

0xf374,	// (0x00080ffa) navi_pane_g

0x4c50,	// (0x000768d6) navi_pane_mv_g2

0x4c77,	// (0x000768fd) navi_pane_mv_g5

0x4c7f,	// (0x00076905) navi_pane_mv_t1

0x2253,	// (0x00073ed9) main_clock2_pane

0x18cb,	// (0x00073551) main_clock2_list_pane_ParamLimits

0x18cb,	// (0x00073551) main_clock2_list_pane

0x69a5,	// (0x0007862b) main_clock2_pane_t1_ParamLimits

0x69a5,	// (0x0007862b) main_clock2_pane_t1

0x69e0,	// (0x00078666) main_clock2_pane_t2_ParamLimits

0x69e0,	// (0x00078666) main_clock2_pane_t2

0x0004,

0xf751,	// (0x000813d7) main_clock2_pane_t_ParamLimits

0xf751,	// (0x000813d7) main_clock2_pane_t

0x6a7f,	// (0x00078705) popup_clock_analogue_window_cp03_ParamLimits

0x6a7f,	// (0x00078705) popup_clock_analogue_window_cp03

0x6aa4,	// (0x0007872a) popup_clock_digital_window_cp02_ParamLimits

0x6aa4,	// (0x0007872a) popup_clock_digital_window_cp02

0x6b1d,	// (0x000787a3) main_clock2_list_single_pane_ParamLimits

0x6b1d,	// (0x000787a3) main_clock2_list_single_pane

0x2bb1,	// (0x00074837) list_highlight_pane_cp05

0xc88d,	// (0x0007e513) main_clock2_list_single_pane_t1

0x2fa8,	// (0x00074c2e) popup_toolbar_window_cp04_ParamLimits

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g2_ParamLimits

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g2

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g3_ParamLimits

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g3

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g4_ParamLimits

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g4

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g5_ParamLimits

0x2087,	// (0x00073d0d) camera2_autofocus_pane_g5

0x0004,

0xf695,	// (0x0008131b) camera2_autofocus_pane_g_ParamLimits

0xf695,	// (0x0008131b) camera2_autofocus_pane_g

0x6197,	// (0x00077e1d) camera2_autofocus_pane_cp_g2

0x619f,	// (0x00077e25) camera2_autofocus_pane_cp_g3

0x61a7,	// (0x00077e2d) camera2_autofocus_pane_cp_g4

0x61af,	// (0x00077e35) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fb,	// (0x00081381) camera2_autofocus_pane_cp_g

0x16a1,	// (0x00073327) popup_dialer_spcha_window

0x16a1,	// (0x00073327) bg_popup_sub_pane_cp07

0x16a1,	// (0x00073327) list_spcha_pane

0xc89b,	// (0x0007e521) list_single_spcha_pane_ParamLimits

0xc89b,	// (0x0007e521) list_single_spcha_pane

0x16a1,	// (0x00073327) list_highlight_pane_cp06

0x4538,	// (0x000761be) list_single_spcha_pane_t1

0xbab7,	// (0x0007d73d) popup_call2_audio_out_window_g4_ParamLimits

0xbab7,	// (0x0007d73d) popup_call2_audio_out_window_g4

0x16a1,	// (0x00073327) main_imed2_pane

0xc00f,	// (0x0007dc95) popup_imed_adjust2_window

0x5a80,	// (0x00077706) popup_imed_trans_window_ParamLimits

0x5a80,	// (0x00077706) popup_imed_trans_window

0xc31d,	// (0x0007dfa3) popup_blid_sat_info2_window_t1

0xc32b,	// (0x0007dfb1) popup_blid_sat_info2_window_t2

0x000a,

0xf62a,	// (0x000812b0) popup_blid_sat_info2_window_t

0x6bd8,	// (0x0007885e) aid_size_cell_colour_35

0x6bf8,	// (0x0007887e) aid_size_cell_colour_112

0x6c18,	// (0x0007889e) aid_size_cell_effect

0xacab,	// (0x0007c931) bg_tb_trans_pane_cp02

0x43ea,	// (0x00076070) heading_imed_pane

0x6c38,	// (0x000788be) listscroll_imed_pane

0xc8ad,	// (0x0007e533) heading_imed_pane_g1

0xc8b5,	// (0x0007e53b) heading_imed_pane_t1

0xc8c3,	// (0x0007e549) grid_imed_colour_35_pane_ParamLimits

0xc8c3,	// (0x0007e549) grid_imed_colour_35_pane

0x6c44,	// (0x000788ca) grid_imed_effect_pane

0xc8df,	// (0x0007e565) list_imed_aspect_pane

0x6c5b,	// (0x000788e1) scroll_pane_cp027_ParamLimits

0x6c5b,	// (0x000788e1) scroll_pane_cp027

0x6c6c,	// (0x000788f2) cell_imed_effect_pane_ParamLimits

0x6c6c,	// (0x000788f2) cell_imed_effect_pane

0xc8e7,	// (0x0007e56d) cell_imed_colour_pane_ParamLimits

0xc8e7,	// (0x0007e56d) cell_imed_colour_pane

0xc931,	// (0x0007e5b7) cell_imed_colour_pane_g1_ParamLimits

0xc931,	// (0x0007e5b7) cell_imed_colour_pane_g1

0xc942,	// (0x0007e5c8) hgihlgiht_grid_pane_cp016_ParamLimits

0xc942,	// (0x0007e5c8) hgihlgiht_grid_pane_cp016

0x6c97,	// (0x0007891d) cell_imed_effect_pane_g1

0x6c9f,	// (0x00078925) grid_highlight_pane_cp017

0xc953,	// (0x0007e5d9) list_imed_single_pane_ParamLimits

0xc953,	// (0x0007e5d9) list_imed_single_pane

0x16a1,	// (0x00073327) list_highlight_pane_cp07

0xc967,	// (0x0007e5ed) list_imed_aspect_pane_comp1_t1

0xacab,	// (0x0007c931) bg_tb_trans_pane_cp05

0xc989,	// (0x0007e60f) popup_imed_adjust2_window_g1

0xc9b0,	// (0x0007e636) popup_imed_adjust2_window_t1

0xc9c8,	// (0x0007e64e) slider_imed_adjust_pane

0xed33,	// (0x000809b9) slider_imed_adjust_pane_g1

0xed43,	// (0x000809c9) slider_imed_adjust_pane_g2

0xed53,	// (0x000809d9) slider_imed_adjust_pane_g3

0xed64,	// (0x000809ea) slider_imed_adjust_pane_g4

0x0003,

0x06e2,	// (0x00072368) slider_imed_adjust_pane_g

0x6ca8,	// (0x0007892e) aid_size_cell_clipart2

0xed75,	// (0x000809fb) grid_imed_clipart_pane

0xed7f,	// (0x00080a05) scroll_pane_cp031

0x6cb4,	// (0x0007893a) cell_imed_clipart_pane_ParamLimits

0x6cb4,	// (0x0007893a) cell_imed_clipart_pane

0x6cd1,	// (0x00078957) cell_imed_clipart_pane_g1

0x16a1,	// (0x00073327) grid_highlight_pane_cp014

0x6983,	// (0x00078609) main_clock2_pane_g1_ParamLimits

0x6983,	// (0x00078609) main_clock2_pane_g1

0x6ac4,	// (0x0007874a) aid_call2_pane_cp10

0x6ad6,	// (0x0007875c) aid_call_pane_cp10

0x4a8b,	// (0x00076711) popup_clock_analogue_window_cp10_g1

0x4a8b,	// (0x00076711) popup_clock_analogue_window_cp10_g2

0x6ae8,	// (0x0007876e) popup_clock_analogue_window_cp10_g3

0x6ae8,	// (0x0007876e) popup_clock_analogue_window_cp10_g4

0x4a8b,	// (0x00076711) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75c,	// (0x000813e2) popup_clock_analogue_window_cp10_g

0x6afe,	// (0x00078784) popup_clock_analogue_window_cp10_t1

0x6b2f,	// (0x000787b5) clock_digital_number_pane_cp10_ParamLimits

0x6b2f,	// (0x000787b5) clock_digital_number_pane_cp10

0x6b49,	// (0x000787cf) clock_digital_number_pane_cp11_ParamLimits

0x6b49,	// (0x000787cf) clock_digital_number_pane_cp11

0x6b63,	// (0x000787e9) clock_digital_number_pane_cp12_ParamLimits

0x6b63,	// (0x000787e9) clock_digital_number_pane_cp12

0x6b7f,	// (0x00078805) clock_digital_number_pane_cp13_ParamLimits

0x6b7f,	// (0x00078805) clock_digital_number_pane_cp13

0x6b9b,	// (0x00078821) clock_digital_separator_pane_cp10_ParamLimits

0x6b9b,	// (0x00078821) clock_digital_separator_pane_cp10

0x6bb7,	// (0x0007883d) popup_clock_digital_window_cp02_t1_ParamLimits

0x6bb7,	// (0x0007883d) popup_clock_digital_window_cp02_t1

0x1ff6,	// (0x00073c7c) clock_digital_number_pane_cp10_g1

0x1ff6,	// (0x00073c7c) clock_digital_number_pane_cp10_g2

0x0001,

0xf76e,	// (0x000813f4) clock_digital_number_pane_cp10_g

0x1ff6,	// (0x00073c7c) clock_digital_separator_pane_cp10_g1

0x1ff6,	// (0x00073c7c) clock_digital_separator_pane_g2_cp10

0x4cc1,	// (0x00076947) navi_pane_vded_g4

0x4cca,	// (0x00076950) navi_pane_vded_g5

0x4cd3,	// (0x00076959) navi_pane_vded_t1

0x16a1,	// (0x00073327) main_vded_pane

0x6cda,	// (0x00078960) main_vded_pane_g1

0x6ce6,	// (0x0007896c) main_vded_pane_g2

0x6cf2,	// (0x00078978) main_vded_pane_g3

0x0002,

0xf773,	// (0x000813f9) main_vded_pane_g

0x6cfe,	// (0x00078984) main_vded_pane_t1

0x6d0c,	// (0x00078992) main_vded_pane_t2

0x0001,

0xf77a,	// (0x00081400) main_vded_pane_t

0x6d1a,	// (0x000789a0) vded_slider_pane

0x6d24,	// (0x000789aa) vded_video_pane

0xed87,	// (0x00080a0d) vded_video_pane_g1

0x6d30,	// (0x000789b6) vded_video_pane_g2

0x2da2,	// (0x00074a28) vded_video_pane_g3

0x0002,

0xf77f,	// (0x00081405) vded_video_pane_g

0xed91,	// (0x00080a17) vded_slider_pane_g1

0xc248,	// (0x0007dece) vded_slider_pane_g2

0xed9a,	// (0x00080a20) vded_slider_pane_g3

0xeda3,	// (0x00080a29) vded_slider_pane_g4

0xedac,	// (0x00080a32) vded_slider_pane_g5

0x0004,

0xf786,	// (0x0008140c) vded_slider_pane_g

0x67e4,	// (0x0007846a) mup3_rocker_pane_ParamLimits

0x67e4,	// (0x0007846a) mup3_rocker_pane

0x6d39,	// (0x000789bf) mup3_control_keys_pane_g1

0x6d41,	// (0x000789c7) mup3_control_keys_pane_g2

0x6d49,	// (0x000789cf) mup3_control_keys_pane_g3

0x6d51,	// (0x000789d7) mup3_control_keys_pane_g4

0x0003,

0xf791,	// (0x00081417) mup3_control_keys_pane_g

0x18a7,	// (0x0007352d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x18a7,	// (0x0007352d) popup_toolbar2_fixed_window_cp01

0x681a,	// (0x000784a0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x681a,	// (0x000784a0) popup_toolbar2_fixed_window_cp02

0xb440,	// (0x0007d0c6) popup_call2_audio_second_window_t4_ParamLimits

0xb440,	// (0x0007d0c6) popup_call2_audio_second_window_t4

0xb97c,	// (0x0007d602) popup_call2_audio_first_window_t6_ParamLimits

0xb97c,	// (0x0007d602) popup_call2_audio_first_window_t6

0xbbba,	// (0x0007d840) popup_call2_audio_out_window_t6_ParamLimits

0xbbba,	// (0x0007d840) popup_call2_audio_out_window_t6

0x16a1,	// (0x00073327) main_vitu_pane

0x18cb,	// (0x00073551) aid_size_cell_itu_ParamLimits

0x18cb,	// (0x00073551) aid_size_cell_itu

0x18cb,	// (0x00073551) bg_popup_window_pane_cp08_ParamLimits

0x18cb,	// (0x00073551) bg_popup_window_pane_cp08

0x18cb,	// (0x00073551) field_vitu_entry_pane_ParamLimits

0x18cb,	// (0x00073551) field_vitu_entry_pane

0x18cb,	// (0x00073551) grid_vitu_function_pane_ParamLimits

0x18cb,	// (0x00073551) grid_vitu_function_pane

0x18cb,	// (0x00073551) grid_vitu_itu_pane_ParamLimits

0x18cb,	// (0x00073551) grid_vitu_itu_pane

0x18cb,	// (0x00073551) cell_vitu_itu_pane_ParamLimits

0x18cb,	// (0x00073551) cell_vitu_itu_pane

0x18cb,	// (0x00073551) cell_vitu_function_pane_ParamLimits

0x18cb,	// (0x00073551) cell_vitu_function_pane

0x18cb,	// (0x00073551) bg_popup_sub_pane_cp08_ParamLimits

0x18cb,	// (0x00073551) bg_popup_sub_pane_cp08

0x2c1e,	// (0x000748a4) field_vitu_entry_pane_t1_ParamLimits

0x2c1e,	// (0x000748a4) field_vitu_entry_pane_t1

0xed16,	// (0x0008099c) field_vitu_entry_pane_t2_ParamLimits

0xed16,	// (0x0008099c) field_vitu_entry_pane_t2

0x0001,

0xf79a,	// (0x00081420) field_vitu_entry_pane_t_ParamLimits

0xf79a,	// (0x00081420) field_vitu_entry_pane_t

0xc16f,	// (0x0007ddf5) bg_button_pane_cp05_ParamLimits

0xc16f,	// (0x0007ddf5) bg_button_pane_cp05

0xedb5,	// (0x00080a3b) cell_vitu_itu_pane_g1

0xac83,	// (0x0007c909) cell_vitu_itu_pane_t1_ParamLimits

0xac83,	// (0x0007c909) cell_vitu_itu_pane_t1

0xac83,	// (0x0007c909) cell_vitu_itu_pane_t2_ParamLimits

0xac83,	// (0x0007c909) cell_vitu_itu_pane_t2

0x0002,

0xf79f,	// (0x00081425) cell_vitu_itu_pane_t_ParamLimits

0xf79f,	// (0x00081425) cell_vitu_itu_pane_t

0x16a1,	// (0x00073327) bg_button_pane_cp07

0x2da2,	// (0x00074a28) cell_vitu_function_pane_g1

0xaa5b,	// (0x0007c6e1) main_calc_pane_g1

0x16cf,	// (0x00073355) aid_visual_content_pane

0x16a1,	// (0x00073327) main_vradio_pane

0x2079,	// (0x00073cff) main_vradio_pane_g1_ParamLimits

0x2079,	// (0x00073cff) main_vradio_pane_g1

0x2087,	// (0x00073d0d) main_vradio_pane_g2_ParamLimits

0x2087,	// (0x00073d0d) main_vradio_pane_g2

0x0001,

0xf7a6,	// (0x0008142c) main_vradio_pane_g_ParamLimits

0xf7a6,	// (0x0008142c) main_vradio_pane_g

0x2c1e,	// (0x000748a4) main_vradio_pane_t1_ParamLimits

0x2c1e,	// (0x000748a4) main_vradio_pane_t1

0x2c1e,	// (0x000748a4) main_vradio_pane_t2_ParamLimits

0x2c1e,	// (0x000748a4) main_vradio_pane_t2

0xac97,	// (0x0007c91d) main_vradio_pane_t3_ParamLimits

0xac97,	// (0x0007c91d) main_vradio_pane_t3

0x0002,

0xf7ab,	// (0x00081431) main_vradio_pane_t_ParamLimits

0xf7ab,	// (0x00081431) main_vradio_pane_t

0x18cb,	// (0x00073551) vradio_rocker_control_pane_ParamLimits

0x18cb,	// (0x00073551) vradio_rocker_control_pane

0x18cb,	// (0x00073551) vradio_station_info_pane_ParamLimits

0x18cb,	// (0x00073551) vradio_station_info_pane

0x18cb,	// (0x00073551) vradio_frequency_info_pane_ParamLimits

0x18cb,	// (0x00073551) vradio_frequency_info_pane

0x2da2,	// (0x00074a28) vradio_station_info_pane_g1

0xac83,	// (0x0007c909) vradio_station_info_pane_t1_ParamLimits

0xac83,	// (0x0007c909) vradio_station_info_pane_t1

0xac97,	// (0x0007c91d) vradio_station_info_pane_t2_ParamLimits

0xac97,	// (0x0007c91d) vradio_station_info_pane_t2

0x0001,

0xf7b2,	// (0x00081438) vradio_station_info_pane_t_ParamLimits

0xf7b2,	// (0x00081438) vradio_station_info_pane_t

0x16a1,	// (0x00073327) vradio_tuning_pane

0x6d61,	// (0x000789e7) vradio_rocker_control_pane_g1

0xedd1,	// (0x00080a57) vradio_rocker_control_pane_g2

0x6d6b,	// (0x000789f1) vradio_rocker_control_pane_g3

0x6d75,	// (0x000789fb) vradio_rocker_control_pane_g4

0x6d7f,	// (0x00078a05) vradio_rocker_control_pane_g5

0x0004,

0xf7b7,	// (0x0008143d) vradio_rocker_control_pane_g

0x2da2,	// (0x00074a28) vradio_frequency_info_pane_g1

0x2c1e,	// (0x000748a4) vradio_frequency_info_pane_t1_ParamLimits

0x2c1e,	// (0x000748a4) vradio_frequency_info_pane_t1

0x6d89,	// (0x00078a0f) vradio_tuning_pane_g1

0x6d94,	// (0x00078a1a) vradio_tuning_pane_t1

0xaa14,	// (0x0007c69a) area_side_right_pane_ParamLimits

0xaa14,	// (0x0007c69a) area_side_right_pane

0xbfac,	// (0x0007dc32) status_small_pane_g1

0xbfb4,	// (0x0007dc3a) status_small_pane_g2

0xbfbd,	// (0x0007dc43) status_small_pane_g3

0xbfc6,	// (0x0007dc4c) status_small_pane_g4

0x0003,

0xf58c,	// (0x00081212) status_small_pane_g

0xbfcf,	// (0x0007dc55) status_small_pane_t1

0x16a1,	// (0x00073327) main_video3_pane

0xedd9,	// (0x00080a5f) cams_zoom_vslider_pane

0xede1,	// (0x00080a67) image3_wide_pane_ParamLimits

0xede1,	// (0x00080a67) image3_wide_pane

0xedfb,	// (0x00080a81) image3_wide_small_pane

0xee07,	// (0x00080a8d) main_video3_pane_g1_ParamLimits

0xee07,	// (0x00080a8d) main_video3_pane_g1

0xee23,	// (0x00080aa9) main_video3_pane_g2_ParamLimits

0xee23,	// (0x00080aa9) main_video3_pane_g2

0x0001,

0x073f,	// (0x000723c5) main_video3_pane_g_ParamLimits

0x073f,	// (0x000723c5) main_video3_pane_g

0xee3f,	// (0x00080ac5) main_video3_pane_t1_ParamLimits

0xee3f,	// (0x00080ac5) main_video3_pane_t1

0xee6a,	// (0x00080af0) main_video3_pane_t2_ParamLimits

0xee6a,	// (0x00080af0) main_video3_pane_t2

0xee97,	// (0x00080b1d) main_video3_pane_t3_ParamLimits

0xee97,	// (0x00080b1d) main_video3_pane_t3

0x0002,

0x0744,	// (0x000723ca) main_video3_pane_t_ParamLimits

0x0744,	// (0x000723ca) main_video3_pane_t

0xeec4,	// (0x00080b4a) cams_zoom_vslider_pane_g1

0xeecd,	// (0x00080b53) cams_zoom_vslider_pane_g2

0x0001,

0x074b,	// (0x000723d1) cams_zoom_vslider_pane_g

0xeed5,	// (0x00080b5b) small_slider_vertical_pane

0x2da2,	// (0x00074a28) small_slider_vertical_pane_g1

0x2da2,	// (0x00074a28) small_slider_vertical_pane_g2

0xeedd,	// (0x00080b63) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x00081448) small_slider_vertical_pane_g

0x16a1,	// (0x00073327) main_hwr_training_pane

0xeee6,	// (0x00080b6c) hwr_training_instruct_pane_ParamLimits

0xeee6,	// (0x00080b6c) hwr_training_instruct_pane

0x6da3,	// (0x00078a29) hwr_training_navi_pane_ParamLimits

0x6da3,	// (0x00078a29) hwr_training_navi_pane

0x6dc2,	// (0x00078a48) hwr_training_write_pane_ParamLimits

0x6dc2,	// (0x00078a48) hwr_training_write_pane

0x16a1,	// (0x00073327) bg_frame_shadow_pane

0xef1d,	// (0x00080ba3) hwr_training_write_pane_g1

0xef25,	// (0x00080bab) hwr_training_write_pane_g2

0xef2d,	// (0x00080bb3) hwr_training_write_pane_g3

0xef35,	// (0x00080bbb) hwr_training_write_pane_g4

0xef3d,	// (0x00080bc3) hwr_training_write_pane_g5

0xef45,	// (0x00080bcb) hwr_training_write_pane_g6

0xef4d,	// (0x00080bd3) hwr_training_write_pane_g7

0x0006,

0x0757,	// (0x000723dd) hwr_training_write_pane_g

0xe810,	// (0x00080496) hwr_training_navi_pane_g1_ParamLimits

0xe810,	// (0x00080496) hwr_training_navi_pane_g1

0xe822,	// (0x000804a8) hwr_training_navi_pane_g2_ParamLimits

0xe822,	// (0x000804a8) hwr_training_navi_pane_g2

0xe834,	// (0x000804ba) hwr_training_navi_pane_g3_ParamLimits

0xe834,	// (0x000804ba) hwr_training_navi_pane_g3

0xe844,	// (0x000804ca) hwr_training_navi_pane_g4_ParamLimits

0xe844,	// (0x000804ca) hwr_training_navi_pane_g4

0x0004,

0xf7c9,	// (0x0008144f) hwr_training_navi_pane_g_ParamLimits

0xf7c9,	// (0x0008144f) hwr_training_navi_pane_g

0xe851,	// (0x000804d7) hwr_training_navi_pane_t1

0x6e0a,	// (0x00078a90) list_single_hwr_training_instruct_pane_ParamLimits

0x6e0a,	// (0x00078a90) list_single_hwr_training_instruct_pane

0xef55,	// (0x00080bdb) list_single_hwr_training_instruct_pane_t1

0xc424,	// (0x0007e0aa) bg_frame_shadow_pane_g1

0xef64,	// (0x00080bea) bg_frame_shadow_pane_g2

0xef6c,	// (0x00080bf2) bg_frame_shadow_pane_g3

0xef74,	// (0x00080bfa) bg_frame_shadow_pane_g4

0xef7c,	// (0x00080c02) bg_frame_shadow_pane_g5

0xef84,	// (0x00080c0a) bg_frame_shadow_pane_g6

0xef8c,	// (0x00080c12) bg_frame_shadow_pane_g7

0x2498,	// (0x0007411e) bg_frame_shadow_pane_g8

0x0007,

0xf7d4,	// (0x0008145a) bg_frame_shadow_pane_g

0x16a1,	// (0x00073327) main_video_tele_dialer_pane

0x6e26,	// (0x00078aac) aid_size_cell_video_keypad_ParamLimits

0x6e26,	// (0x00078aac) aid_size_cell_video_keypad

0x6e40,	// (0x00078ac6) grid_video_dialer_keypad_pane_ParamLimits

0x6e40,	// (0x00078ac6) grid_video_dialer_keypad_pane

0x6e8c,	// (0x00078b12) video_down_pane_cp_ParamLimits

0x6e8c,	// (0x00078b12) video_down_pane_cp

0x6ebe,	// (0x00078b44) cell_video_dialer_keypad_pane_ParamLimits

0x6ebe,	// (0x00078b44) cell_video_dialer_keypad_pane

0xef94,	// (0x00080c1a) bg_button_pane_cp08_ParamLimits

0xef94,	// (0x00080c1a) bg_button_pane_cp08

0x6ee4,	// (0x00078b6a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ee4,	// (0x00078b6a) cell_video_dialer_keypad_pane_g1

0x67ce,	// (0x00078454) mup3_rocker2_pane_ParamLimits

0x67ce,	// (0x00078454) mup3_rocker2_pane

0x2da2,	// (0x00074a28) mup3_rocker2_pane_g1

0x5941,	// (0x000775c7) main_dialer2_pane

0x16a1,	// (0x00073327) main_mp4_pane

0xe87d,	// (0x00080503) main_mp4_pane_g1_ParamLimits

0xe87d,	// (0x00080503) main_mp4_pane_g1

0xe87d,	// (0x00080503) main_mp4_pane_g2_ParamLimits

0xe87d,	// (0x00080503) main_mp4_pane_g2

0x6f1f,	// (0x00078ba5) main_mp4_pane_g3_ParamLimits

0x6f1f,	// (0x00078ba5) main_mp4_pane_g3

0xe88b,	// (0x00080511) main_mp4_pane_g4_ParamLimits

0xe88b,	// (0x00080511) main_mp4_pane_g4

0xe8b9,	// (0x0008053f) main_mp4_pane_g5_ParamLimits

0xe8b9,	// (0x0008053f) main_mp4_pane_g5

0x0007,

0xf7f4,	// (0x0008147a) main_mp4_pane_g_ParamLimits

0xf7f4,	// (0x0008147a) main_mp4_pane_g

0xe92d,	// (0x000805b3) main_mp4_pane_t1_ParamLimits

0xe92d,	// (0x000805b3) main_mp4_pane_t1

0xe989,	// (0x0008060f) main_mp4_pane_t2_ParamLimits

0xe989,	// (0x0008060f) main_mp4_pane_t2

0xefa0,	// (0x00080c26) main_mp4_pane_t3_ParamLimits

0xefa0,	// (0x00080c26) main_mp4_pane_t3

0xe9db,	// (0x00080661) main_mp4_pane_t4_ParamLimits

0xe9db,	// (0x00080661) main_mp4_pane_t4

0x0003,

0xf805,	// (0x0008148b) main_mp4_pane_t_ParamLimits

0xf805,	// (0x0008148b) main_mp4_pane_t

0xea1b,	// (0x000806a1) mp4_progress_pane_ParamLimits

0xea1b,	// (0x000806a1) mp4_progress_pane

0xea65,	// (0x000806eb) mp4_rocker_pane_ParamLimits

0xea65,	// (0x000806eb) mp4_rocker_pane

0xefce,	// (0x00080c54) mp4_progress_pane_t1

0xefe7,	// (0x00080c6d) mp4_progress_pane_t2

0x0001,

0x07ab,	// (0x00072431) mp4_progress_pane_t

0xf000,	// (0x00080c86) mup_progress_pane_cp04

0x2da2,	// (0x00074a28) mp4_rocker_pane_g1

0x6f69,	// (0x00078bef) aid_cell_size_keypad2_ParamLimits

0x6f69,	// (0x00078bef) aid_cell_size_keypad2

0x6f7f,	// (0x00078c05) dialer2_ne_pane_ParamLimits

0x6f7f,	// (0x00078c05) dialer2_ne_pane

0x6f97,	// (0x00078c1d) grid_dialer2_keypad_pane_ParamLimits

0x6f97,	// (0x00078c1d) grid_dialer2_keypad_pane

0xc16f,	// (0x0007ddf5) bg_popup_call_pane_cp07_ParamLimits

0xc16f,	// (0x0007ddf5) bg_popup_call_pane_cp07

0x6fb3,	// (0x00078c39) dialer2_ne_pane_t1_ParamLimits

0x6fb3,	// (0x00078c39) dialer2_ne_pane_t1

0x6ff3,	// (0x00078c79) cell_dialer2_keypad_pane_ParamLimits

0x6ff3,	// (0x00078c79) cell_dialer2_keypad_pane

0xf033,	// (0x00080cb9) bg_button_pane_pane_cp04_ParamLimits

0xf033,	// (0x00080cb9) bg_button_pane_pane_cp04

0x7019,	// (0x00078c9f) cell_dialer2_keypad_pane_g1_ParamLimits

0x7019,	// (0x00078c9f) cell_dialer2_keypad_pane_g1

0x2e7d,	// (0x00074b03) aid_placing_vt_set_content_ParamLimits

0x2e7d,	// (0x00074b03) aid_placing_vt_set_content

0x2ea1,	// (0x00074b27) aid_placing_vt_set_title_ParamLimits

0x2ea1,	// (0x00074b27) aid_placing_vt_set_title

0x16a1,	// (0x00073327) main_image3_pane

0x70df,	// (0x00078d65) area_side_right_pane_cp01_ParamLimits

0x70df,	// (0x00078d65) area_side_right_pane_cp01

0xe87d,	// (0x00080503) main_image3_pane_g1_ParamLimits

0xe87d,	// (0x00080503) main_image3_pane_g1

0x70f8,	// (0x00078d7e) main_image3_pane_g2_ParamLimits

0x70f8,	// (0x00078d7e) main_image3_pane_g2

0x7120,	// (0x00078da6) main_image3_pane_g3_ParamLimits

0x7120,	// (0x00078da6) main_image3_pane_g3

0x714a,	// (0x00078dd0) main_image3_pane_g4_ParamLimits

0x714a,	// (0x00078dd0) main_image3_pane_g4

0x0003,

0xf818,	// (0x0008149e) main_image3_pane_g_ParamLimits

0xf818,	// (0x0008149e) main_image3_pane_g

0x7174,	// (0x00078dfa) main_image3_pane_t1_ParamLimits

0x7174,	// (0x00078dfa) main_image3_pane_t1

0x71cc,	// (0x00078e52) main_image3_pane_t2_ParamLimits

0x71cc,	// (0x00078e52) main_image3_pane_t2

0x721e,	// (0x00078ea4) main_image3_pane_t3_ParamLimits

0x721e,	// (0x00078ea4) main_image3_pane_t3

0x0003,

0xf821,	// (0x000814a7) main_image3_pane_t_ParamLimits

0xf821,	// (0x000814a7) main_image3_pane_t

0x18cb,	// (0x00073551) grid_sctrl_middle_pane_cp01_ParamLimits

0x18cb,	// (0x00073551) grid_sctrl_middle_pane_cp01

0x72a6,	// (0x00078f2c) cell_sctrl_middle_pane_cp01_ParamLimits

0x72a6,	// (0x00078f2c) cell_sctrl_middle_pane_cp01

0x72c3,	// (0x00078f49) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72c3,	// (0x00078f49) cell_sctrl_middle_pane_cp01_g1

0x16a1,	// (0x00073327) main_call4_pane

0x72d8,	// (0x00078f5e) aid_size_button_call4_ParamLimits

0x72d8,	// (0x00078f5e) aid_size_button_call4

0x730b,	// (0x00078f91) call4_windows_pane_ParamLimits

0x730b,	// (0x00078f91) call4_windows_pane

0x732a,	// (0x00078fb0) grid_call4_button_pane_ParamLimits

0x732a,	// (0x00078fb0) grid_call4_button_pane

0x7361,	// (0x00078fe7) call4_windows_conf_pane

0x737a,	// (0x00079000) popup_call4_audio_first_window_ParamLimits

0x737a,	// (0x00079000) popup_call4_audio_first_window

0x73ca,	// (0x00079050) popup_call4_audio_second_window_ParamLimits

0x73ca,	// (0x00079050) popup_call4_audio_second_window

0x73e3,	// (0x00079069) popup_call4_audio_wait_window_ParamLimits

0x73e3,	// (0x00079069) popup_call4_audio_wait_window

0x73f1,	// (0x00079077) cell_call4_button_pane_ParamLimits

0x73f1,	// (0x00079077) cell_call4_button_pane

0x7418,	// (0x0007909e) bg_button_pane_cp09_ParamLimits

0x7418,	// (0x0007909e) bg_button_pane_cp09

0x7424,	// (0x000790aa) cell_call4_button_pane_g1_ParamLimits

0x7424,	// (0x000790aa) cell_call4_button_pane_g1

0x744a,	// (0x000790d0) cell_call4_button_pane_t1_ParamLimits

0x744a,	// (0x000790d0) cell_call4_button_pane_t1

0xf047,	// (0x00080ccd) popup_call4_audio_conf_window_ParamLimits

0xf047,	// (0x00080ccd) popup_call4_audio_conf_window

0x6830,	// (0x000784b6) mup3_progress_pane_t1_ParamLimits

0x684f,	// (0x000784d5) mup3_progress_pane_t2_ParamLimits

0xc75e,	// (0x0007e3e4) mup3_progress_pane_t3_ParamLimits

0xf724,	// (0x000813aa) mup3_progress_pane_t_ParamLimits

0xc77b,	// (0x0007e401) mup_progress_pane_cp03_ParamLimits

0x6d59,	// (0x000789df) mup3_control_keys_pane_g4_copy1

0xea49,	// (0x000806cf) mp4_rocker2_pane_ParamLimits

0xea49,	// (0x000806cf) mp4_rocker2_pane

0xf061,	// (0x00080ce7) mp4_rocker2_pane_g1

0xf069,	// (0x00080cef) mp4_rocker2_pane_g2

0xeaeb,	// (0x00080771) mp4_rocker2_pane_g3

0xeaf3,	// (0x00080779) mp4_rocker2_pane_g4

0xeafb,	// (0x00080781) mp4_rocker2_pane_g5

0x0004,

0xf82a,	// (0x000814b0) mp4_rocker2_pane_g

0x16a1,	// (0x00073327) main_camera4_pane

0x16a1,	// (0x00073327) main_video4_pane

0x6e5a,	// (0x00078ae0) main_video_tele_dialer_pane_t1_ParamLimits

0x6e5a,	// (0x00078ae0) main_video_tele_dialer_pane_t1

0x6e73,	// (0x00078af9) main_video_tele_dialer_pane_t2_ParamLimits

0x6e73,	// (0x00078af9) main_video_tele_dialer_pane_t2

0x0001,

0xf7e5,	// (0x0008146b) main_video_tele_dialer_pane_t_ParamLimits

0xf7e5,	// (0x0008146b) main_video_tele_dialer_pane_t

0x7488,	// (0x0007910e) cam4_autofocus_pane_ParamLimits

0x7488,	// (0x0007910e) cam4_autofocus_pane

0x749e,	// (0x00079124) cam4_image_uncrop_pane_ParamLimits

0x749e,	// (0x00079124) cam4_image_uncrop_pane

0x74b7,	// (0x0007913d) cam4_indicators_pane_ParamLimits

0x74b7,	// (0x0007913d) cam4_indicators_pane

0x74e7,	// (0x0007916d) main_camera4_pane_g1_ParamLimits

0x74e7,	// (0x0007916d) main_camera4_pane_g1

0x74f9,	// (0x0007917f) main_camera4_pane_g2_ParamLimits

0x74f9,	// (0x0007917f) main_camera4_pane_g2

0x750c,	// (0x00079192) main_camera4_pane_g3_ParamLimits

0x750c,	// (0x00079192) main_camera4_pane_g3

0x751f,	// (0x000791a5) main_camera4_pane_g4_ParamLimits

0x751f,	// (0x000791a5) main_camera4_pane_g4

0x7532,	// (0x000791b8) main_camera4_pane_g5_ParamLimits

0x7532,	// (0x000791b8) main_camera4_pane_g5

0x0005,

0xf835,	// (0x000814bb) main_camera4_pane_g_ParamLimits

0xf835,	// (0x000814bb) main_camera4_pane_g

0x7556,	// (0x000791dc) main_camera4_pane_t1_ParamLimits

0x7556,	// (0x000791dc) main_camera4_pane_t1

0x2079,	// (0x00073cff) bg_tb_trans_pane_cp06

0xeb29,	// (0x000807af) cam4_indicators_pane_g1

0xeb3a,	// (0x000807c0) cam4_indicators_pane_g2

0x0002,

0xf850,	// (0x000814d6) cam4_indicators_pane_g

0xeb52,	// (0x000807d8) cam4_indicators_pane_t1

0x75ba,	// (0x00079240) main_video4_pane_g1_ParamLimits

0x75ba,	// (0x00079240) main_video4_pane_g1

0x75c9,	// (0x0007924f) main_video4_pane_g2_ParamLimits

0x75c9,	// (0x0007924f) main_video4_pane_g2

0x75d9,	// (0x0007925f) main_video4_pane_g3_ParamLimits

0x75d9,	// (0x0007925f) main_video4_pane_g3

0x75e9,	// (0x0007926f) main_video4_pane_g4_ParamLimits

0x75e9,	// (0x0007926f) main_video4_pane_g4

0x0004,

0xf857,	// (0x000814dd) main_video4_pane_g_ParamLimits

0xf857,	// (0x000814dd) main_video4_pane_g

0x7609,	// (0x0007928f) vid4_indicators_pane_ParamLimits

0x7609,	// (0x0007928f) vid4_indicators_pane

0x7633,	// (0x000792b9) video4_image_uncrop_cif_pane_ParamLimits

0x7633,	// (0x000792b9) video4_image_uncrop_cif_pane

0x764d,	// (0x000792d3) video4_image_uncrop_nhd_pane_ParamLimits

0x764d,	// (0x000792d3) video4_image_uncrop_nhd_pane

0x749e,	// (0x00079124) video4_image_uncrop_vga_pane_ParamLimits

0x749e,	// (0x00079124) video4_image_uncrop_vga_pane

0x18cb,	// (0x00073551) bg_tb_trans_pane_cp07

0xeb80,	// (0x00080806) vid4_indicators_pane_g1

0xeb96,	// (0x0008081c) vid4_indicators_pane_g2

0xebaa,	// (0x00080830) vid4_indicators_pane_g3

0x0004,

0xf862,	// (0x000814e8) vid4_indicators_pane_g

0xebdb,	// (0x00080861) vid4_indicators_pane_t1

0x7664,	// (0x000792ea) cam4_autofocus_pane_g1

0x766c,	// (0x000792f2) cam4_autofocus_pane_g2

0x7674,	// (0x000792fa) cam4_autofocus_pane_g3

0x0002,

0xf86d,	// (0x000814f3) cam4_autofocus_pane_g

0x767c,	// (0x00079302) cam4_autofocus_pane_g3_copy1

0x6ea2,	// (0x00078b28) video_down_pane_cp_t1

0x6eb0,	// (0x00078b36) video_down_pane_cp_t2

0x0001,

0xf7ea,	// (0x00081470) video_down_pane_cp_t

0x18cb,	// (0x00073551) popup_vitu2_window_ParamLimits

0x18cb,	// (0x00073551) popup_vitu2_window

0x7684,	// (0x0007930a) aid_size_cell2_itu2_ParamLimits

0x7684,	// (0x0007930a) aid_size_cell2_itu2

0x76a4,	// (0x0007932a) aid_size_cell_itu2_ParamLimits

0x76a4,	// (0x0007932a) aid_size_cell_itu2

0x68de,	// (0x00078564) bg_popup_window_pane_cp09_ParamLimits

0x68de,	// (0x00078564) bg_popup_window_pane_cp09

0x76f3,	// (0x00079379) field_vitu2_entry_pane_ParamLimits

0x76f3,	// (0x00079379) field_vitu2_entry_pane

0x7718,	// (0x0007939e) grid_vitu2_function_pane_ParamLimits

0x7718,	// (0x0007939e) grid_vitu2_function_pane

0x7763,	// (0x000793e9) grid_vitu2_itu_pane_ParamLimits

0x7763,	// (0x000793e9) grid_vitu2_itu_pane

0x77eb,	// (0x00079471) cell_vitu2_itu_pane_ParamLimits

0x77eb,	// (0x00079471) cell_vitu2_itu_pane

0x7819,	// (0x0007949f) cell_vitu2_function_pane_ParamLimits

0x7819,	// (0x0007949f) cell_vitu2_function_pane

0xc9dc,	// (0x0007e662) bg_popup_call_pane_cp08_ParamLimits

0xc9dc,	// (0x0007e662) bg_popup_call_pane_cp08

0xc9f3,	// (0x0007e679) field_vitu2_entry_pane_g1

0xc9ff,	// (0x0007e685) field_vitu2_entry_pane_g2

0x0002,

0xf874,	// (0x000814fa) field_vitu2_entry_pane_g

0xca0b,	// (0x0007e691) field_vitu2_entry_pane_t1_ParamLimits

0xca0b,	// (0x0007e691) field_vitu2_entry_pane_t1

0xca3a,	// (0x0007e6c0) field_vitu2_entry_pane_t2_ParamLimits

0xca3a,	// (0x0007e6c0) field_vitu2_entry_pane_t2

0x0001,

0xf87b,	// (0x00081501) field_vitu2_entry_pane_t_ParamLimits

0xf87b,	// (0x00081501) field_vitu2_entry_pane_t

0x785d,	// (0x000794e3) bg_button_pane_cp010_ParamLimits

0x785d,	// (0x000794e3) bg_button_pane_cp010

0x786b,	// (0x000794f1) cell_vitu2_itu_pane_g1

0x7891,	// (0x00079517) cell_vitu2_itu_pane_t1_ParamLimits

0x7891,	// (0x00079517) cell_vitu2_itu_pane_t1

0x0eb7,	// (0x00072b3d) cell_vitu2_itu_pane_t2_ParamLimits

0x0eb7,	// (0x00072b3d) cell_vitu2_itu_pane_t2

0x0002,

0xf885,	// (0x0008150b) cell_vitu2_itu_pane_t_ParamLimits

0xf885,	// (0x0008150b) cell_vitu2_itu_pane_t

0x18cb,	// (0x00073551) bg_button_pane_cp011

0x78ef,	// (0x00079575) cell_vitu2_function_pane_g1

0x16a1,	// (0x00073327) main_myfav_hc_pane

0x726e,	// (0x00078ef4) popup_image3_note_pane_ParamLimits

0x726e,	// (0x00078ef4) popup_image3_note_pane

0x728a,	// (0x00078f10) popup_image3_tool_bar_pane_ParamLimits

0x728a,	// (0x00078f10) popup_image3_tool_bar_pane

0x0f45,	// (0x00072bcb) cell_vitu2_itu_pane_t3_ParamLimits

0x0f45,	// (0x00072bcb) cell_vitu2_itu_pane_t3

0x16a1,	// (0x00073327) bg_popup_trans_pane

0xca5f,	// (0x0007e6e5) grid_image3_tool_bar_pane

0xca69,	// (0x0007e6ef) bg_popup_trans_pane_g1

0x3478,	// (0x000750fe) bg_popup_trans_pane_g2

0xca71,	// (0x0007e6f7) bg_popup_trans_pane_g3

0xca79,	// (0x0007e6ff) bg_popup_trans_pane_g4

0xca81,	// (0x0007e707) bg_popup_trans_pane_g5

0xca89,	// (0x0007e70f) bg_popup_trans_pane_g6

0xca91,	// (0x0007e717) bg_popup_trans_pane_g7

0xca99,	// (0x0007e71f) bg_popup_trans_pane_g8

0x3458,	// (0x000750de) bg_popup_trans_pane_g9

0x0008,

0xf88c,	// (0x00081512) bg_popup_trans_pane_g

0xcaa1,	// (0x0007e727) cell_image3_tool_bar_pane_ParamLimits

0xcaa1,	// (0x0007e727) cell_image3_tool_bar_pane

0x2da2,	// (0x00074a28) cell_image3_tool_bar_pane_g1

0x16a1,	// (0x00073327) bg_popup_trans_pane_cp1

0xcab7,	// (0x0007e73d) popup_image3_note_pane_t1

0xcac5,	// (0x0007e74b) popup_image3_note_pane_t2

0xcad3,	// (0x0007e759) popup_image3_note_pane_t3

0x0002,

0xf89f,	// (0x00081525) popup_image3_note_pane_t

0xcae3,	// (0x0007e769) popup_image3_note_pane_t3_copy1

0x7903,	// (0x00079589) bg_myfav_hc_instruction_pane_ParamLimits

0x7903,	// (0x00079589) bg_myfav_hc_instruction_pane

0x791b,	// (0x000795a1) cell_myfav_contact_pane_ParamLimits

0x791b,	// (0x000795a1) cell_myfav_contact_pane

0x7937,	// (0x000795bd) cell_myfav_contact_pane_cp1_ParamLimits

0x7937,	// (0x000795bd) cell_myfav_contact_pane_cp1

0x794f,	// (0x000795d5) cell_myfav_contact_pane_cp2_ParamLimits

0x794f,	// (0x000795d5) cell_myfav_contact_pane_cp2

0x7967,	// (0x000795ed) cell_myfav_contact_pane_cp3_ParamLimits

0x7967,	// (0x000795ed) cell_myfav_contact_pane_cp3

0x797e,	// (0x00079604) cell_myfav_contact_pane_cp4_ParamLimits

0x797e,	// (0x00079604) cell_myfav_contact_pane_cp4

0x7996,	// (0x0007961c) cell_myfav_contact_pane_cp5_ParamLimits

0x7996,	// (0x0007961c) cell_myfav_contact_pane_cp5

0x79aa,	// (0x00079630) cell_myfav_contact_pane_cp6_ParamLimits

0x79aa,	// (0x00079630) cell_myfav_contact_pane_cp6

0x79c0,	// (0x00079646) cell_myfav_contact_pane_cp7_ParamLimits

0x79c0,	// (0x00079646) cell_myfav_contact_pane_cp7

0xcaf1,	// (0x0007e777) listscroll_gen_pane_cp05

0x79d8,	// (0x0007965e) main_myfav_hc_pane_g1_ParamLimits

0x79d8,	// (0x0007965e) main_myfav_hc_pane_g1

0x79f2,	// (0x00079678) main_myfav_hc_pane_g2_ParamLimits

0x79f2,	// (0x00079678) main_myfav_hc_pane_g2

0x0002,

0xf8a6,	// (0x0008152c) main_myfav_hc_pane_g_ParamLimits

0xf8a6,	// (0x0008152c) main_myfav_hc_pane_g

0x7a26,	// (0x000796ac) main_myfav_hc_pane_t1_ParamLimits

0x7a26,	// (0x000796ac) main_myfav_hc_pane_t1

0xcafa,	// (0x0007e780) main_myfav_hc_pane_t2_ParamLimits

0xcafa,	// (0x0007e780) main_myfav_hc_pane_t2

0xcb0c,	// (0x0007e792) main_myfav_hc_pane_t3_ParamLimits

0xcb0c,	// (0x0007e792) main_myfav_hc_pane_t3

0x7a3d,	// (0x000796c3) main_myfav_hc_pane_t4_ParamLimits

0x7a3d,	// (0x000796c3) main_myfav_hc_pane_t4

0x0004,

0xf8ad,	// (0x00081533) main_myfav_hc_pane_t_ParamLimits

0xf8ad,	// (0x00081533) main_myfav_hc_pane_t

0x2da2,	// (0x00074a28) bg_myfav_hc_instruction_pane_g1

0xcb1e,	// (0x0007e7a4) cell_myfav_contact_pane_g1_ParamLimits

0xcb1e,	// (0x0007e7a4) cell_myfav_contact_pane_g1

0xcb1e,	// (0x0007e7a4) cell_myfav_contact_pane_g2_ParamLimits

0xcb1e,	// (0x0007e7a4) cell_myfav_contact_pane_g2

0xcb2a,	// (0x0007e7b0) cell_myfav_contact_pane_g3_ParamLimits

0xcb2a,	// (0x0007e7b0) cell_myfav_contact_pane_g3

0x2087,	// (0x00073d0d) cell_myfav_contact_pane_g4_ParamLimits

0x2087,	// (0x00073d0d) cell_myfav_contact_pane_g4

0xcb37,	// (0x0007e7bd) cell_myfav_contact_pane_g5_ParamLimits

0xcb37,	// (0x0007e7bd) cell_myfav_contact_pane_g5

0x0004,

0xf8b8,	// (0x0008153e) cell_myfav_contact_pane_g_ParamLimits

0xf8b8,	// (0x0008153e) cell_myfav_contact_pane_g

0x7a0c,	// (0x00079692) main_myfav_hc_pane_g3_ParamLimits

0x7a0c,	// (0x00079692) main_myfav_hc_pane_g3

0x180a,	// (0x00073490) popup_adpt_find_window

0x7a67,	// (0x000796ed) afind_page_pane_ParamLimits

0x7a67,	// (0x000796ed) afind_page_pane

0x7a7c,	// (0x00079702) aid_size_cell_afind_ParamLimits

0x7a7c,	// (0x00079702) aid_size_cell_afind

0x7a9a,	// (0x00079720) bg_popup_sub_pane_cp09_ParamLimits

0x7a9a,	// (0x00079720) bg_popup_sub_pane_cp09

0x7aa7,	// (0x0007972d) find_pane_cp01_ParamLimits

0x7aa7,	// (0x0007972d) find_pane_cp01

0xcb43,	// (0x0007e7c9) grid_afind_control_pane_ParamLimits

0xcb43,	// (0x0007e7c9) grid_afind_control_pane

0x7ab4,	// (0x0007973a) grid_afind_pane_ParamLimits

0x7ab4,	// (0x0007973a) grid_afind_pane

0x7ad6,	// (0x0007975c) cell_afind_pane_ParamLimits

0x7ad6,	// (0x0007975c) cell_afind_pane

0x2da2,	// (0x00074a28) afind_page_pane_g1

0x7b43,	// (0x000797c9) afind_page_pane_g2

0x7b4c,	// (0x000797d2) afind_page_pane_g3

0x0002,

0xf8c3,	// (0x00081549) afind_page_pane_g

0x7b55,	// (0x000797db) afind_page_pane_t1

0xcb57,	// (0x0007e7dd) cell_afind_grid_control_pane_ParamLimits

0xcb57,	// (0x0007e7dd) cell_afind_grid_control_pane

0xf033,	// (0x00080cb9) bg_button_pane_cp69_ParamLimits

0xf033,	// (0x00080cb9) bg_button_pane_cp69

0x7b75,	// (0x000797fb) cell_afind_pane_g1_ParamLimits

0x7b75,	// (0x000797fb) cell_afind_pane_g1

0x7b82,	// (0x00079808) cell_afind_pane_t1_ParamLimits

0x7b82,	// (0x00079808) cell_afind_pane_t1

0x2e0e,	// (0x00074a94) bg_button_pane_cp72

0xcb66,	// (0x0007e7ec) cell_afind_grid_control_pane_g1

0x539e,	// (0x00077024) aid_image_placing_area_ParamLimits

0x539e,	// (0x00077024) aid_image_placing_area

0x2079,	// (0x00073cff) field_vitu_entry_pane_g1_ParamLimits

0x2079,	// (0x00073cff) field_vitu_entry_pane_g1

0x2079,	// (0x00073cff) field_vitu_entry_pane_g2_ParamLimits

0x2079,	// (0x00073cff) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00080e87) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00080e87) field_vitu_entry_pane_g

0xedb5,	// (0x00080a3b) cell_vitu_itu_pane_g1_ParamLimits

0xed16,	// (0x0008099c) cell_vitu_itu_pane_t3_ParamLimits

0xed16,	// (0x0008099c) cell_vitu_itu_pane_t3

0xefce,	// (0x00080c54) mp4_progress_pane_t1_ParamLimits

0xefe7,	// (0x00080c6d) mp4_progress_pane_t2_ParamLimits

0x07ab,	// (0x00072431) mp4_progress_pane_t_ParamLimits

0xf000,	// (0x00080c86) mup_progress_pane_cp04_ParamLimits

0x7a51,	// (0x000796d7) main_myfav_hc_pane_t5_ParamLimits

0x7a51,	// (0x000796d7) main_myfav_hc_pane_t5

0xaa04,	// (0x0007c68a) aid_zoom_text_primary

0x180a,	// (0x00073490) popup_adpt_find_window_ParamLimits

0x18cb,	// (0x00073551) main_cam_set_pane

0x74d0,	// (0x00079156) cam4_zoom_pane_ParamLimits

0x74d0,	// (0x00079156) cam4_zoom_pane

0x7b94,	// (0x0007981a) main_cam_set_pane_g1_ParamLimits

0x7b94,	// (0x0007981a) main_cam_set_pane_g1

0x7ba2,	// (0x00079828) main_cam_set_pane_g2_ParamLimits

0x7ba2,	// (0x00079828) main_cam_set_pane_g2

0x0001,

0xf8ca,	// (0x00081550) main_cam_set_pane_g_ParamLimits

0xf8ca,	// (0x00081550) main_cam_set_pane_g

0x7bc3,	// (0x00079849) main_cam_set_pane_t1_ParamLimits

0x7bc3,	// (0x00079849) main_cam_set_pane_t1

0x7bde,	// (0x00079864) main_cset_listscroll_pane_ParamLimits

0x7bde,	// (0x00079864) main_cset_listscroll_pane

0x7c06,	// (0x0007988c) main_cset_slider_pane_ParamLimits

0x7c06,	// (0x0007988c) main_cset_slider_pane

0xcb77,	// (0x0007e7fd) main_cset_list_pane_ParamLimits

0xcb77,	// (0x0007e7fd) main_cset_list_pane

0xcb87,	// (0x0007e80d) scroll_pane_cp028

0x7c30,	// (0x000798b6) aid_area_touch_slider

0x7c4c,	// (0x000798d2) cset_slider_pane

0x7c6f,	// (0x000798f5) main_cset_slider_pane_g1

0x7c84,	// (0x0007990a) main_cset_slider_pane_g2

0x0011,

0xf8cf,	// (0x00081555) main_cset_slider_pane_g

0xcbc0,	// (0x0007e846) main_cset_slider_pane_t1

0x7d46,	// (0x000799cc) main_cset_slider_pane_t2

0x7d60,	// (0x000799e6) main_cset_slider_pane_t3

0x7d7a,	// (0x00079a00) main_cset_slider_pane_t4

0x7d94,	// (0x00079a1a) main_cset_slider_pane_t5

0x7db2,	// (0x00079a38) main_cset_slider_pane_t6

0x7dc9,	// (0x00079a4f) main_cset_slider_pane_t7

0x000e,

0xf8f4,	// (0x0008157a) main_cset_slider_pane_t

0x7ed5,	// (0x00079b5b) cset_list_set_pane_ParamLimits

0x7ed5,	// (0x00079b5b) cset_list_set_pane

0xcc5a,	// (0x0007e8e0) aid_position_infowindow_above

0xcc62,	// (0x0007e8e8) aid_position_infowindow_below

0x7ee9,	// (0x00079b6f) cset_list_set_pane_g1_ParamLimits

0x7ee9,	// (0x00079b6f) cset_list_set_pane_g1

0x0fa3,	// (0x00072c29) cset_list_set_pane_g3_ParamLimits

0x0fa3,	// (0x00072c29) cset_list_set_pane_g3

0x0001,

0xf913,	// (0x00081599) cset_list_set_pane_g_ParamLimits

0xf913,	// (0x00081599) cset_list_set_pane_g

0x0fb2,	// (0x00072c38) cset_list_set_pane_t1_ParamLimits

0x0fb2,	// (0x00072c38) cset_list_set_pane_t1

0x18cb,	// (0x00073551) list_highlight_pane_cp021_ParamLimits

0x18cb,	// (0x00073551) list_highlight_pane_cp021

0xad1d,	// (0x0007c9a3) cset_slider_pane_g1

0xad2f,	// (0x0007c9b5) cset_slider_pane_g2

0xad26,	// (0x0007c9ac) cset_slider_pane_g3

0x0002,

0xf918,	// (0x0008159e) cset_slider_pane_g

0xcc6a,	// (0x0007e8f0) aid_area_touch_cam4_zoom

0x7ef5,	// (0x00079b7b) cam4_zoom_cont_pane

0x7efd,	// (0x00079b83) cam4_zoom_pane_g1

0x7f05,	// (0x00079b8b) cam4_zoom_pane_g2

0x7f0d,	// (0x00079b93) cam4_zoom_pane_g3

0x0002,

0xf91f,	// (0x000815a5) cam4_zoom_pane_g

0xebf2,	// (0x00080878) cam4_zoom_cont_pane_g1

0xebfb,	// (0x00080881) cam4_zoom_cont_pane_g2

0xec04,	// (0x0008088a) cam4_zoom_cont_pane_g3

0x0002,

0xf926,	// (0x000815ac) cam4_zoom_cont_pane_g

0x72f6,	// (0x00078f7c) call4_image_pane_ParamLimits

0x72f6,	// (0x00078f7c) call4_image_pane

0x7361,	// (0x00078fe7) call4_windows_conf_pane_ParamLimits

0x73a8,	// (0x0007902e) popup_call4_audio_in_window_ParamLimits

0x73a8,	// (0x0007902e) popup_call4_audio_in_window

0x16a1,	// (0x00073327) bg_popup_call2_act_pane_cp02

0xf03f,	// (0x00080cc5) call4_list_conf_pane

0x2da2,	// (0x00074a28) call4_image_pane_g1

0x2da2,	// (0x00074a28) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0008105e) call4_image_pane_g

0xcc73,	// (0x0007e8f9) list_single_graphic_popup_conf4_pane_ParamLimits

0xcc73,	// (0x0007e8f9) list_single_graphic_popup_conf4_pane

0x16a1,	// (0x00073327) list_highlight_pane_cp022

0xcc88,	// (0x0007e90e) list_single_graphic_popup_conf4_pane_g1

0x477b,	// (0x00076401) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf92d,	// (0x000815b3) list_single_graphic_popup_conf4_pane_g

0xcc90,	// (0x0007e916) list_single_graphic_popup_conf4_pane_t1

0x2fca,	// (0x00074c50) popup_vtel_slider_window_ParamLimits

0x2fca,	// (0x00074c50) popup_vtel_slider_window

0xf021,	// (0x00080ca7) dialer2_ne_pane_t2_ParamLimits

0xf021,	// (0x00080ca7) dialer2_ne_pane_t2

0x0001,

0xf80e,	// (0x00081494) dialer2_ne_pane_t_ParamLimits

0xf80e,	// (0x00081494) dialer2_ne_pane_t

0xc16f,	// (0x0007ddf5) bg_popup_sub_pane_cp010_ParamLimits

0xc16f,	// (0x0007ddf5) bg_popup_sub_pane_cp010

0x7f15,	// (0x00079b9b) popup_vtel_slider_window_g1_ParamLimits

0x7f15,	// (0x00079b9b) popup_vtel_slider_window_g1

0x7f28,	// (0x00079bae) popup_vtel_slider_window_g2_ParamLimits

0x7f28,	// (0x00079bae) popup_vtel_slider_window_g2

0x0003,

0xf932,	// (0x000815b8) popup_vtel_slider_window_g_ParamLimits

0xf932,	// (0x000815b8) popup_vtel_slider_window_g

0x7f7e,	// (0x00079c04) vtel_slider_pane_ParamLimits

0x7f7e,	// (0x00079c04) vtel_slider_pane

0x7fa0,	// (0x00079c26) vtel_slider_pane_g1_ParamLimits

0x7fa0,	// (0x00079c26) vtel_slider_pane_g1

0x7fb4,	// (0x00079c3a) vtel_slider_pane_g2_ParamLimits

0x7fb4,	// (0x00079c3a) vtel_slider_pane_g2

0x7fcc,	// (0x00079c52) vtel_slider_pane_g3_ParamLimits

0x7fcc,	// (0x00079c52) vtel_slider_pane_g3

0x7fa0,	// (0x00079c26) vtel_slider_pane_g4_ParamLimits

0x7fa0,	// (0x00079c26) vtel_slider_pane_g4

0x7fe2,	// (0x00079c68) vtel_slider_pane_g5_ParamLimits

0x7fe2,	// (0x00079c68) vtel_slider_pane_g5

0x0004,

0xf93b,	// (0x000815c1) vtel_slider_pane_g_ParamLimits

0xf93b,	// (0x000815c1) vtel_slider_pane_g

0x18cb,	// (0x00073551) main_gallery2_pane

0x76c4,	// (0x0007934a) aid_size_row_itut2_dropdow_list_ParamLimits

0x76c4,	// (0x0007934a) aid_size_row_itut2_dropdow_list

0x773d,	// (0x000793c3) grid_vitu2_function_top_pane_ParamLimits

0x773d,	// (0x000793c3) grid_vitu2_function_top_pane

0x7799,	// (0x0007941f) popup_vitu2_dropdown_list_window_ParamLimits

0x7799,	// (0x0007941f) popup_vitu2_dropdown_list_window

0x77bf,	// (0x00079445) popup_vitu2_match_list_window

0x7ff8,	// (0x00079c7e) cell_vitu2_function_top_pane_ParamLimits

0x7ff8,	// (0x00079c7e) cell_vitu2_function_top_pane

0x8012,	// (0x00079c98) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8012,	// (0x00079c98) cell_vitu2_function_top_pane_cp01

0x802e,	// (0x00079cb4) cell_vitu2_function_top_wide_pane_ParamLimits

0x802e,	// (0x00079cb4) cell_vitu2_function_top_wide_pane

0x18cb,	// (0x00073551) bg_button_pane_cp012

0x804c,	// (0x00079cd2) cell_vitu2_function_top_pane_g1

0xec0d,	// (0x00080893) bg_button_pane_cp013_ParamLimits

0xec0d,	// (0x00080893) bg_button_pane_cp013

0x8060,	// (0x00079ce6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8060,	// (0x00079ce6) cell_vitu2_function_top_wide_pane_g1

0x18cb,	// (0x00073551) bg_popup_sub_pane_cp20

0x8078,	// (0x00079cfe) list_vitu2_match_list_pane

0xca69,	// (0x0007e6ef) bg_popup_sub_pane_cp20_g1

0xca71,	// (0x0007e6f7) bg_popup_sub_pane_cp20_g2

0x3478,	// (0x000750fe) bg_popup_sub_pane_cp20_g3

0xca79,	// (0x0007e6ff) bg_popup_sub_pane_cp20_g4

0x3458,	// (0x000750de) bg_popup_sub_pane_cp20_g5

0xcca6,	// (0x0007e92c) bg_popup_sub_pane_cp20_g6

0xca89,	// (0x0007e70f) bg_popup_sub_pane_cp20_g7

0xca91,	// (0x0007e717) bg_popup_sub_pane_cp20_g8

0xca99,	// (0x0007e71f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf946,	// (0x000815cc) bg_popup_sub_pane_cp20_g

0xec29,	// (0x000808af) list_vitu2_match_list_item_pane_ParamLimits

0xec29,	// (0x000808af) list_vitu2_match_list_item_pane

0xec3b,	// (0x000808c1) list_vitu2_match_list_item_pane_t1

0x16a1,	// (0x00073327) bg_popup_sub_pane_cp21

0x2bb1,	// (0x00074837) grid_vitu2_dropdown_list_pane

0x8090,	// (0x00079d16) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8090,	// (0x00079d16) cell_vitu2_dropdown_list_char_pane

0x80b3,	// (0x00079d39) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x80b3,	// (0x00079d39) cell_vitu2_dropdown_list_ctrl_pane

0xccae,	// (0x0007e934) cell_vitu2_dropdown_list_char_pane_g1

0xccb7,	// (0x0007e93d) cell_vitu2_dropdown_list_char_pane_g2

0xccc0,	// (0x0007e946) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf959,	// (0x000815df) cell_vitu2_dropdown_list_char_pane_g

0x80df,	// (0x00079d65) cell_vitu2_dropdown_list_char_pane_t1

0x80ed,	// (0x00079d73) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x80ed,	// (0x00079d73) cell_vitu2_dropdown_list_ctrl_pane_g1

0x80fd,	// (0x00079d83) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x80fd,	// (0x00079d83) cell_vitu2_dropdown_list_ctrl_pane_g2

0x810e,	// (0x00079d94) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x810e,	// (0x00079d94) cell_vitu2_dropdown_list_ctrl_pane_g3

0x811e,	// (0x00079da4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x811e,	// (0x00079da4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2079,	// (0x00073cff) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2079,	// (0x00073cff) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf960,	// (0x000815e6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf960,	// (0x000815e6) cell_vitu2_dropdown_list_ctrl_pane_g

0x813a,	// (0x00079dc0) aid_size_cell_gallery2_ParamLimits

0x813a,	// (0x00079dc0) aid_size_cell_gallery2

0x8158,	// (0x00079dde) grid_gallery2_pane_ParamLimits

0x8158,	// (0x00079dde) grid_gallery2_pane

0x8172,	// (0x00079df8) scroll_pane_cp029_ParamLimits

0x8172,	// (0x00079df8) scroll_pane_cp029

0x8183,	// (0x00079e09) cell_gallery2_pane_ParamLimits

0x8183,	// (0x00079e09) cell_gallery2_pane

0xccc9,	// (0x0007e94f) cell_gallery2_pane_g2

0x81e7,	// (0x00079e6d) cell_gallery2_pane_g3

0xccd1,	// (0x0007e957) cell_gallery2_pane_g4

0xccd9,	// (0x0007e95f) cell_gallery2_pane_g5

0x2bb1,	// (0x00074837) grid_highlight_pane_cp10

0x77bf,	// (0x00079445) popup_vitu2_match_list_window_ParamLimits

0x77d6,	// (0x0007945c) popup_vitu2_query_window_ParamLimits

0x77d6,	// (0x0007945c) popup_vitu2_query_window

0x16a1,	// (0x00073327) bg_vitu2_candi_button_pane

0xccae,	// (0x0007e934) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xccb7,	// (0x0007e93d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xccc0,	// (0x0007e946) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fc7,	// (0x00072c4d) bg_button_pane_cp015

0x81ef,	// (0x00079e75) bg_button_pane_cp016

0x8202,	// (0x00079e88) bg_button_pane_cp017

0xacab,	// (0x0007c931) bg_popup_sub_pane_cp22

0xcce1,	// (0x0007e967) popup_vitu2_query_window_g1

0x0ffc,	// (0x00072c82) popup_vitu2_query_window_g2

0x0002,

0xf96b,	// (0x000815f1) popup_vitu2_query_window_g

0x101b,	// (0x00072ca1) popup_vitu2_query_window_t1_ParamLimits

0x101b,	// (0x00072ca1) popup_vitu2_query_window_t1

0x1050,	// (0x00072cd6) popup_vitu2_query_window_t2_ParamLimits

0x1050,	// (0x00072cd6) popup_vitu2_query_window_t2

0x1062,	// (0x00072ce8) popup_vitu2_query_window_t3_ParamLimits

0x1062,	// (0x00072ce8) popup_vitu2_query_window_t3

0x8226,	// (0x00079eac) popup_vitu2_query_window_t4_ParamLimits

0x8226,	// (0x00079eac) popup_vitu2_query_window_t4

0x8247,	// (0x00079ecd) popup_vitu2_query_window_t5_ParamLimits

0x8247,	// (0x00079ecd) popup_vitu2_query_window_t5

0x0006,

0xf972,	// (0x000815f8) popup_vitu2_query_window_t_ParamLimits

0xf972,	// (0x000815f8) popup_vitu2_query_window_t

0xcb6f,	// (0x0007e7f5) main_cset_text_pane

0x7c30,	// (0x000798b6) aid_area_touch_slider_ParamLimits

0x7c4c,	// (0x000798d2) cset_slider_pane_ParamLimits

0x7c6f,	// (0x000798f5) main_cset_slider_pane_g1_ParamLimits

0x7c84,	// (0x0007990a) main_cset_slider_pane_g2_ParamLimits

0xcb90,	// (0x0007e816) main_cset_slider_pane_g3_ParamLimits

0xcb90,	// (0x0007e816) main_cset_slider_pane_g3

0x7c99,	// (0x0007991f) main_cset_slider_pane_g4_ParamLimits

0x7c99,	// (0x0007991f) main_cset_slider_pane_g4

0x7ca8,	// (0x0007992e) main_cset_slider_pane_g5_ParamLimits

0x7ca8,	// (0x0007992e) main_cset_slider_pane_g5

0x7cb6,	// (0x0007993c) main_cset_slider_pane_g6_ParamLimits

0x7cb6,	// (0x0007993c) main_cset_slider_pane_g6

0xf8cf,	// (0x00081555) main_cset_slider_pane_g_ParamLimits

0xcbc0,	// (0x0007e846) main_cset_slider_pane_t1_ParamLimits

0x7d46,	// (0x000799cc) main_cset_slider_pane_t2_ParamLimits

0x7d60,	// (0x000799e6) main_cset_slider_pane_t3_ParamLimits

0x7d7a,	// (0x00079a00) main_cset_slider_pane_t4_ParamLimits

0x7d94,	// (0x00079a1a) main_cset_slider_pane_t5_ParamLimits

0x7db2,	// (0x00079a38) main_cset_slider_pane_t6_ParamLimits

0x7dc9,	// (0x00079a4f) main_cset_slider_pane_t7_ParamLimits

0x7df7,	// (0x00079a7d) main_cset_slider_pane_t8_ParamLimits

0x7df7,	// (0x00079a7d) main_cset_slider_pane_t8

0x7e1f,	// (0x00079aa5) main_cset_slider_pane_t9_ParamLimits

0x7e1f,	// (0x00079aa5) main_cset_slider_pane_t9

0x7e47,	// (0x00079acd) main_cset_slider_pane_t10_ParamLimits

0x7e47,	// (0x00079acd) main_cset_slider_pane_t10

0x7e6f,	// (0x00079af5) main_cset_slider_pane_t11_ParamLimits

0x7e6f,	// (0x00079af5) main_cset_slider_pane_t11

0x7e99,	// (0x00079b1f) main_cset_slider_pane_t12_ParamLimits

0x7e99,	// (0x00079b1f) main_cset_slider_pane_t12

0x7eb6,	// (0x00079b3c) main_cset_slider_pane_t13_ParamLimits

0x7eb6,	// (0x00079b3c) main_cset_slider_pane_t13

0xf8f4,	// (0x0008157a) main_cset_slider_pane_t_ParamLimits

0x16a1,	// (0x00073327) bg_popup_sub_pane_cp011

0xcced,	// (0x0007e973) main_cset_text_pane_g1

0xccf5,	// (0x0007e97b) main_cset_text_pane_t1

0xcd03,	// (0x0007e989) main_cset_text_pane_t2

0xcd11,	// (0x0007e997) main_cset_text_pane_t3

0xcd1f,	// (0x0007e9a5) main_cset_text_pane_t4

0xcd2d,	// (0x0007e9b3) main_cset_text_pane_t5

0xcd3b,	// (0x0007e9c1) main_cset_text_pane_t6

0xcd49,	// (0x0007e9cf) main_cset_text_pane_t7

0x0006,

0xf981,	// (0x00081607) main_cset_text_pane_t

0x16a1,	// (0x00073327) main_cam4_burst_pane

0x16a1,	// (0x00073327) main_cam5_pane

0x7b63,	// (0x000797e9) bg_button_pane_cp019

0x7b6c,	// (0x000797f2) bg_button_pane_cp020

0xcb9c,	// (0x0007e822) main_cset_slider_pane_g7_ParamLimits

0xcb9c,	// (0x0007e822) main_cset_slider_pane_g7

0xcba8,	// (0x0007e82e) main_cset_slider_pane_g8_ParamLimits

0xcba8,	// (0x0007e82e) main_cset_slider_pane_g8

0x7cca,	// (0x00079950) main_cset_slider_pane_g9_ParamLimits

0x7cca,	// (0x00079950) main_cset_slider_pane_g9

0x7cd6,	// (0x0007995c) main_cset_slider_pane_g10_ParamLimits

0x7cd6,	// (0x0007995c) main_cset_slider_pane_g10

0x7ce2,	// (0x00079968) main_cset_slider_pane_g11_ParamLimits

0x7ce2,	// (0x00079968) main_cset_slider_pane_g11

0x7cee,	// (0x00079974) main_cset_slider_pane_g12_ParamLimits

0x7cee,	// (0x00079974) main_cset_slider_pane_g12

0x7cfa,	// (0x00079980) main_cset_slider_pane_g13_ParamLimits

0x7cfa,	// (0x00079980) main_cset_slider_pane_g13

0x7d06,	// (0x0007998c) main_cset_slider_pane_g14_ParamLimits

0x7d06,	// (0x0007998c) main_cset_slider_pane_g14

0x7d12,	// (0x00079998) main_cset_slider_pane_g15_ParamLimits

0x7d12,	// (0x00079998) main_cset_slider_pane_g15

0xcbe8,	// (0x0007e86e) main_cset_slider_pane_t14_ParamLimits

0xcbe8,	// (0x0007e86e) main_cset_slider_pane_t14

0xcc21,	// (0x0007e8a7) main_cset_slider_pane_t15_ParamLimits

0xcc21,	// (0x0007e8a7) main_cset_slider_pane_t15

0x8268,	// (0x00079eee) aid_cam4_burst_size_cell_ParamLimits

0x8268,	// (0x00079eee) aid_cam4_burst_size_cell

0x8288,	// (0x00079f0e) grid_cam4_burst_pane_ParamLimits

0x8288,	// (0x00079f0e) grid_cam4_burst_pane

0x82c2,	// (0x00079f48) linegrid_cam4_burst_pane_ParamLimits

0x82c2,	// (0x00079f48) linegrid_cam4_burst_pane

0xcd57,	// (0x0007e9dd) scroll_pane_cp30_ParamLimits

0xcd57,	// (0x0007e9dd) scroll_pane_cp30

0x82e4,	// (0x00079f6a) cell_cam4_burst_pane_ParamLimits

0x82e4,	// (0x00079f6a) cell_cam4_burst_pane

0xcd63,	// (0x0007e9e9) linegrid_cam4_burst_pane_g1_ParamLimits

0xcd63,	// (0x0007e9e9) linegrid_cam4_burst_pane_g1

0x8339,	// (0x00079fbf) linegrid_cam4_burst_pane_g2_ParamLimits

0x8339,	// (0x00079fbf) linegrid_cam4_burst_pane_g2

0xcd70,	// (0x0007e9f6) linegrid_cam4_burst_pane_g3_ParamLimits

0xcd70,	// (0x0007e9f6) linegrid_cam4_burst_pane_g3

0x0002,

0xf990,	// (0x00081616) linegrid_cam4_burst_pane_g_ParamLimits

0xf990,	// (0x00081616) linegrid_cam4_burst_pane_g

0x834a,	// (0x00079fd0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x834a,	// (0x00079fd0) linegrid_cam4_burst_pane_g3_copy1

0xcd7d,	// (0x0007ea03) linegrid_cam4_burst_pane_g4_ParamLimits

0xcd7d,	// (0x0007ea03) linegrid_cam4_burst_pane_g4

0x8368,	// (0x00079fee) linegrid_cam4_burst_pane_g5_ParamLimits

0x8368,	// (0x00079fee) linegrid_cam4_burst_pane_g5

0x8379,	// (0x00079fff) linegrid_cam4_burst_pane_g6_ParamLimits

0x8379,	// (0x00079fff) linegrid_cam4_burst_pane_g6

0xcd8a,	// (0x0007ea10) linegrid_cam4_burst_pane_g7_ParamLimits

0xcd8a,	// (0x0007ea10) linegrid_cam4_burst_pane_g7

0x8390,	// (0x0007a016) cell_cam4_burst_pane_g1

0xcda3,	// (0x0007ea29) main_cam5_pane_t1_ParamLimits

0xcda3,	// (0x0007ea29) main_cam5_pane_t1

0xcdb5,	// (0x0007ea3b) main_cam5_pane_t2_ParamLimits

0xcdb5,	// (0x0007ea3b) main_cam5_pane_t2

0xcdc7,	// (0x0007ea4d) main_cam5_pane_t3_ParamLimits

0xcdc7,	// (0x0007ea4d) main_cam5_pane_t3

0xcdd9,	// (0x0007ea5f) main_cam5_pane_t4_ParamLimits

0xcdd9,	// (0x0007ea5f) main_cam5_pane_t4

0xcdf1,	// (0x0007ea77) main_cam5_pane_t5_ParamLimits

0xcdf1,	// (0x0007ea77) main_cam5_pane_t5

0xce05,	// (0x0007ea8b) main_cam5_pane_t6_ParamLimits

0xce05,	// (0x0007ea8b) main_cam5_pane_t6

0xce19,	// (0x0007ea9f) main_cam5_pane_t7_ParamLimits

0xce19,	// (0x0007ea9f) main_cam5_pane_t7

0xce2b,	// (0x0007eab1) main_cam5_pane_t8_ParamLimits

0xce2b,	// (0x0007eab1) main_cam5_pane_t8

0xce49,	// (0x0007eacf) main_cam5_pane_t9_ParamLimits

0xce49,	// (0x0007eacf) main_cam5_pane_t9

0xce5b,	// (0x0007eae1) main_cam5_pane_t10_ParamLimits

0xce5b,	// (0x0007eae1) main_cam5_pane_t10

0xce6d,	// (0x0007eaf3) main_cam5_pane_t11_ParamLimits

0xce6d,	// (0x0007eaf3) main_cam5_pane_t11

0xce81,	// (0x0007eb07) main_cam5_pane_t12_ParamLimits

0xce81,	// (0x0007eb07) main_cam5_pane_t12

0xce98,	// (0x0007eb1e) main_cam5_pane_t13_ParamLimits

0xce98,	// (0x0007eb1e) main_cam5_pane_t13

0x000c,

0xf99c,	// (0x00081622) main_cam5_pane_t_ParamLimits

0xf99c,	// (0x00081622) main_cam5_pane_t

0x188b,	// (0x00073511) popup_scut_keymap_window_ParamLimits

0x188b,	// (0x00073511) popup_scut_keymap_window

0x83a3,	// (0x0007a029) aid_size_cell_brow_shortcut

0x2bb1,	// (0x00074837) bg_popup_window_pane_cp010

0x83af,	// (0x0007a035) grid_scut_pane

0x83bb,	// (0x0007a041) cell_scut_pane_ParamLimits

0x83bb,	// (0x0007a041) cell_scut_pane

0x83d4,	// (0x0007a05a) cell_scut_pane_g1

0xcebb,	// (0x0007eb41) cell_scut_pane_t1

0xceca,	// (0x0007eb50) cell_scut_pane_t2

0x83dd,	// (0x0007a063) cell_scut_pane_t3

0x0002,

0xf9b7,	// (0x0008163d) cell_scut_pane_t

0x63cf,	// (0x00078055) main_mup3_pane_g8_ParamLimits

0x63cf,	// (0x00078055) main_mup3_pane_g8

0x76dd,	// (0x00079363) area_vitu2_query_pane_ParamLimits

0x76dd,	// (0x00079363) area_vitu2_query_pane

0x0fdb,	// (0x00072c61) input_focus_pane_cp08

0xced9,	// (0x0007eb5f) area_vitu2_query_pane_g1

0x10e0,	// (0x00072d66) area_vitu2_query_pane_g2

0x0001,

0xf9be,	// (0x00081644) area_vitu2_query_pane_g

0x83eb,	// (0x0007a071) area_vitu2_query_pane_t1_ParamLimits

0x83eb,	// (0x0007a071) area_vitu2_query_pane_t1

0x83ff,	// (0x0007a085) area_vitu2_query_pane_t2_ParamLimits

0x83ff,	// (0x0007a085) area_vitu2_query_pane_t2

0x10f5,	// (0x00072d7b) area_vitu2_query_pane_t3_ParamLimits

0x10f5,	// (0x00072d7b) area_vitu2_query_pane_t3

0xcee5,	// (0x0007eb6b) area_vitu2_query_pane_t4_ParamLimits

0xcee5,	// (0x0007eb6b) area_vitu2_query_pane_t4

0xcf0d,	// (0x0007eb93) area_vitu2_query_pane_t5_ParamLimits

0xcf0d,	// (0x0007eb93) area_vitu2_query_pane_t5

0xcf35,	// (0x0007ebbb) area_vitu2_query_pane_t6_ParamLimits

0xcf35,	// (0x0007ebbb) area_vitu2_query_pane_t6

0x0006,

0xf9c3,	// (0x00081649) area_vitu2_query_pane_t_ParamLimits

0xf9c3,	// (0x00081649) area_vitu2_query_pane_t

0x8413,	// (0x0007a099) bg_button_pane_cp018

0x8421,	// (0x0007a0a7) bg_button_pane_cp021

0x1121,	// (0x00072da7) bg_button_pane_cp022

0x1136,	// (0x00072dbc) input_focus_pane_cp09

0x4b00,	// (0x00076786) aid_size_touch_mv_arrow_left

0x4b29,	// (0x000767af) aid_size_touch_mv_arrow_right

0x7d2a,	// (0x000799b0) main_cset_slider_pane_g16_ParamLimits

0x7d2a,	// (0x000799b0) main_cset_slider_pane_g16

0x7d38,	// (0x000799be) main_cset_slider_pane_g17_ParamLimits

0x7d38,	// (0x000799be) main_cset_slider_pane_g17

0x8390,	// (0x0007a016) cell_cam4_burst_pane_g1_ParamLimits

0x16a1,	// (0x00073327) compa_mode_pane

0x7f38,	// (0x00079bbe) popup_vtel_slider_window_g3_ParamLimits

0x7f38,	// (0x00079bbe) popup_vtel_slider_window_g3

0x7f4f,	// (0x00079bd5) popup_vtel_slider_window_g4_ParamLimits

0x7f4f,	// (0x00079bd5) popup_vtel_slider_window_g4

0x7f66,	// (0x00079bec) popup_vtel_slider_window_t1_ParamLimits

0x7f66,	// (0x00079bec) popup_vtel_slider_window_t1

0x16a1,	// (0x00073327) main_cl_pane

0xc00f,	// (0x0007dc95) popup_imed_adjust2_window_ParamLimits

0xacab,	// (0x0007c931) bg_tb_trans_pane_cp05_ParamLimits

0xc989,	// (0x0007e60f) popup_imed_adjust2_window_g1_ParamLimits

0xc998,	// (0x0007e61e) popup_imed_adjust2_window_g2_ParamLimits

0xc998,	// (0x0007e61e) popup_imed_adjust2_window_g2

0xc9a4,	// (0x0007e62a) popup_imed_adjust2_window_g3_ParamLimits

0xc9a4,	// (0x0007e62a) popup_imed_adjust2_window_g3

0x0002,

0xf767,	// (0x000813ed) popup_imed_adjust2_window_g_ParamLimits

0xf767,	// (0x000813ed) popup_imed_adjust2_window_g

0xc9b0,	// (0x0007e636) popup_imed_adjust2_window_t1_ParamLimits

0xc9c8,	// (0x0007e64e) slider_imed_adjust_pane_ParamLimits

0xed33,	// (0x000809b9) slider_imed_adjust_pane_g1_ParamLimits

0xed43,	// (0x000809c9) slider_imed_adjust_pane_g2_ParamLimits

0xed53,	// (0x000809d9) slider_imed_adjust_pane_g3_ParamLimits

0xed64,	// (0x000809ea) slider_imed_adjust_pane_g4_ParamLimits

0x06e2,	// (0x00072368) slider_imed_adjust_pane_g_ParamLimits

0x7470,	// (0x000790f6) aid_touch_area_cam4_ParamLimits

0x7470,	// (0x000790f6) aid_touch_area_cam4

0xeb03,	// (0x00080789) battery_pane_cp01

0x7543,	// (0x000791c9) main_camera4_pane_g6_ParamLimits

0x7543,	// (0x000791c9) main_camera4_pane_g6

0x756d,	// (0x000791f3) main_camera4_pane_t2_ParamLimits

0x756d,	// (0x000791f3) main_camera4_pane_t2

0x0001,

0xf842,	// (0x000814c8) main_camera4_pane_t_ParamLimits

0xf842,	// (0x000814c8) main_camera4_pane_t

0x75a2,	// (0x00079228) aid_touch_area_vid4_ParamLimits

0x75a2,	// (0x00079228) aid_touch_area_vid4

0x75f9,	// (0x0007927f) main_video4_pane_g5_ParamLimits

0x75f9,	// (0x0007927f) main_video4_pane_g5

0x761f,	// (0x000792a5) vid4_progress_pane_ParamLimits

0x761f,	// (0x000792a5) vid4_progress_pane

0xcbb4,	// (0x0007e83a) main_cset_slider_pane_g18_ParamLimits

0xcbb4,	// (0x0007e83a) main_cset_slider_pane_g18

0xcd97,	// (0x0007ea1d) cell_cam4_burst_pane_g2_ParamLimits

0xcd97,	// (0x0007ea1d) cell_cam4_burst_pane_g2

0x0001,

0xf997,	// (0x0008161d) cell_cam4_burst_pane_g_ParamLimits

0xf997,	// (0x0008161d) cell_cam4_burst_pane_g

0x2253,	// (0x00073ed9) bg_cl_pane_ParamLimits

0x2253,	// (0x00073ed9) bg_cl_pane

0x842d,	// (0x0007a0b3) cl_header_pane_ParamLimits

0x842d,	// (0x0007a0b3) cl_header_pane

0x8441,	// (0x0007a0c7) cl_listscroll_pane_ParamLimits

0x8441,	// (0x0007a0c7) cl_listscroll_pane

0xcf81,	// (0x0007ec07) bg_cl_pane_g1

0xcf89,	// (0x0007ec0f) bg_cl_pane_g2

0xcf91,	// (0x0007ec17) bg_cl_pane_g3

0xcf99,	// (0x0007ec1f) bg_cl_pane_g4

0xcfa1,	// (0x0007ec27) bg_cl_pane_g5

0xcfa9,	// (0x0007ec2f) bg_cl_pane_g6

0xcfb1,	// (0x0007ec37) bg_cl_pane_g7

0xcfb9,	// (0x0007ec3f) bg_cl_pane_g8

0xcfc1,	// (0x0007ec47) bg_cl_pane_g9

0x0008,

0xf9d2,	// (0x00081658) bg_cl_pane_g

0x8451,	// (0x0007a0d7) aid_height_cl_leading_ParamLimits

0x8451,	// (0x0007a0d7) aid_height_cl_leading

0x845d,	// (0x0007a0e3) aid_height_cl_text_ParamLimits

0x845d,	// (0x0007a0e3) aid_height_cl_text

0x18cb,	// (0x00073551) bg_cl_header_pane_ParamLimits

0x18cb,	// (0x00073551) bg_cl_header_pane

0x847c,	// (0x0007a102) cl_header_pane_g1_ParamLimits

0x847c,	// (0x0007a102) cl_header_pane_g1

0x8492,	// (0x0007a118) cl_header_pane_t1_ParamLimits

0x8492,	// (0x0007a118) cl_header_pane_t1

0xcfc9,	// (0x0007ec4f) cl_list_pane

0xcb87,	// (0x0007e80d) hc_scroll_pane_cp01

0x3458,	// (0x000750de) bg_cl_header_pane_g1

0xca69,	// (0x0007e6ef) bg_cl_header_pane_g2

0x3478,	// (0x000750fe) bg_cl_header_pane_g3

0xca79,	// (0x0007e6ff) bg_cl_header_pane_g4

0xca71,	// (0x0007e6f7) bg_cl_header_pane_g5

0xcca6,	// (0x0007e92c) bg_cl_header_pane_g6

0xca91,	// (0x0007e717) bg_cl_header_pane_g7

0xca99,	// (0x0007e71f) bg_cl_header_pane_g8

0xca89,	// (0x0007e70f) bg_cl_header_pane_g9

0x0008,

0xf9e5,	// (0x0008166b) bg_cl_header_pane_g

0x84ab,	// (0x0007a131) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x84ab,	// (0x0007a131) hc_cl_list_double_graphic_heading_pane

0x84be,	// (0x0007a144) hc_cl_list_single_graphic_pane_ParamLimits

0x84be,	// (0x0007a144) hc_cl_list_single_graphic_pane

0x84d6,	// (0x0007a15c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x84d6,	// (0x0007a15c) hc_cl_list_single_graphic_pane_g1

0x84e2,	// (0x0007a168) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x84e2,	// (0x0007a168) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9f8,	// (0x0008167e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9f8,	// (0x0008167e) hc_cl_list_single_graphic_pane_g

0x84f6,	// (0x0007a17c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x84f6,	// (0x0007a17c) hc_cl_list_single_graphic_pane_t1

0x84d6,	// (0x0007a15c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x84d6,	// (0x0007a15c) hc_cl_list_double_graphic_heading_pane_g1

0x850b,	// (0x0007a191) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x850b,	// (0x0007a191) hc_cl_list_double_graphic_heading_pane_g2

0x851f,	// (0x0007a1a5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x851f,	// (0x0007a1a5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9fd,	// (0x00081683) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9fd,	// (0x00081683) hc_cl_list_double_graphic_heading_pane_g

0x8533,	// (0x0007a1b9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8533,	// (0x0007a1b9) hc_cl_list_double_graphic_heading_pane_t1

0x8548,	// (0x0007a1ce) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8548,	// (0x0007a1ce) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa04,	// (0x0008168a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa04,	// (0x0008168a) hc_cl_list_double_graphic_heading_pane_t

0xec51,	// (0x000808d7) vid4_progress_pane_g1

0xec61,	// (0x000808e7) vid4_progress_pane_g2

0xec71,	// (0x000808f7) vid4_progress_pane_g3

0xec83,	// (0x00080909) vid4_progress_pane_g4

0x0004,

0xfa09,	// (0x0008168f) vid4_progress_pane_g

0xeca1,	// (0x00080927) vid4_progress_pane_t1

0xecbb,	// (0x00080941) vid4_progress_pane_t2

0x0002,

0xfa14,	// (0x0008169a) vid4_progress_pane_t

0x855d,	// (0x0007a1e3) wait_bar_pane_cp07

0xc2d2,	// (0x0007df58) blid_firmament_pane_ParamLimits

0xc315,	// (0x0007df9b) popup_blid_sat_info2_window_g1

0xc339,	// (0x0007dfbf) popup_blid_sat_info2_window_t3

0xc347,	// (0x0007dfcd) popup_blid_sat_info2_window_t4

0xc355,	// (0x0007dfdb) popup_blid_sat_info2_window_t5

0xc363,	// (0x0007dfe9) popup_blid_sat_info2_window_t6

0xc373,	// (0x0007dff9) popup_blid_sat_info2_window_t7

0xc381,	// (0x0007e007) popup_blid_sat_info2_window_t8

0xc38f,	// (0x0007e015) popup_blid_sat_info2_window_t9

0xc39d,	// (0x0007e023) popup_blid_sat_info2_window_t10

0xc464,	// (0x0007e0ea) aid_firma_cardinal_ParamLimits

0xc478,	// (0x0007e0fe) blid_firmament_pane_t1_ParamLimits

0xc48f,	// (0x0007e115) blid_firmament_pane_t2_ParamLimits

0xc4a6,	// (0x0007e12c) blid_firmament_pane_t3_ParamLimits

0xc4bd,	// (0x0007e143) blid_firmament_pane_t4_ParamLimits

0xf660,	// (0x000812e6) blid_firmament_pane_t_ParamLimits

0xc4d4,	// (0x0007e15a) blid_sat_info_pane_ParamLimits

0x18cb,	// (0x00073551) main_cam_set_pane_ParamLimits

0x6bd8,	// (0x0007885e) aid_size_cell_colour_35_ParamLimits

0x6bf8,	// (0x0007887e) aid_size_cell_colour_112_ParamLimits

0x6c18,	// (0x0007889e) aid_size_cell_effect_ParamLimits

0xacab,	// (0x0007c931) bg_tb_trans_pane_cp02_ParamLimits

0x43ea,	// (0x00076070) heading_imed_pane_ParamLimits

0x6c38,	// (0x000788be) listscroll_imed_pane_ParamLimits

0xb6f8,	// (0x0007d37e) popup_call2_audio_first_window_g5_ParamLimits

0xb6f8,	// (0x0007d37e) popup_call2_audio_first_window_g5

0x7081,	// (0x00078d07) aid_size_touch_image3_arrow_left_ParamLimits

0x7081,	// (0x00078d07) aid_size_touch_image3_arrow_left

0x70ad,	// (0x00078d33) aid_size_touch_image3_arrow_right_ParamLimits

0x70ad,	// (0x00078d33) aid_size_touch_image3_arrow_right

0xecd0,	// (0x00080956) vid4_progress_pane_t3

0x6ddd,	// (0x00078a63) main_hwr_training_symbol_option_pane_ParamLimits

0x6ddd,	// (0x00078a63) main_hwr_training_symbol_option_pane

0xef08,	// (0x00080b8e) popup_hwr_training_preview_window_ParamLimits

0xef08,	// (0x00080b8e) popup_hwr_training_preview_window

0x6dfd,	// (0x00078a83) hwr_training_navi_pane_g5_ParamLimits

0x6dfd,	// (0x00078a83) hwr_training_navi_pane_g5

0xca57,	// (0x0007e6dd) popup_char_count_window

0x18cb,	// (0x00073551) bg_popup_sub_pane_cp20_ParamLimits

0x8078,	// (0x00079cfe) list_vitu2_match_list_pane_ParamLimits

0x8084,	// (0x00079d0a) vitu2_page_scroll_pane_ParamLimits

0x8084,	// (0x00079d0a) vitu2_page_scroll_pane

0xcfec,	// (0x0007ec72) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcfec,	// (0x0007ec72) list_single_hwr_training_symbol_option_pane

0xcfff,	// (0x0007ec85) list_single_hwr_training_symbol_option_pane_g1

0xd007,	// (0x0007ec8d) list_single_hwr_training_symbol_option_pane_t1

0xd015,	// (0x0007ec9b) bg_button_pane_cp023

0xd01e,	// (0x0007eca4) bg_button_pane_cp024

0xd051,	// (0x0007ecd7) vitu2_page_scroll_pane_g1

0xd059,	// (0x0007ecdf) vitu2_page_scroll_pane_g2

0x0001,

0xfa1b,	// (0x000816a1) vitu2_page_scroll_pane_g

0xd061,	// (0x0007ece7) vitu2_page_scroll_pane_t1

0xd070,	// (0x0007ecf6) popup_char_count_window_g1

0xd079,	// (0x0007ecff) popup_char_count_window_g2

0xd082,	// (0x0007ed08) popup_char_count_window_g3

0x0002,

0xfa20,	// (0x000816a6) popup_char_count_window_g

0xd08b,	// (0x0007ed11) popup_char_count_window_t1

0x16a1,	// (0x00073327) main_vded2_pane

0xc975,	// (0x0007e5fb) aid_size_cell_imed_line

0xc97f,	// (0x0007e605) grid_imed_line_width_pane

0xebbd,	// (0x00080843) vid4_indicators_pane_g4

0xd099,	// (0x0007ed1f) cell_imed_line_width_pane_ParamLimits

0xd099,	// (0x0007ed1f) cell_imed_line_width_pane

0xd0af,	// (0x0007ed35) cell_imed_line_width_pane_g1

0xd0b8,	// (0x0007ed3e) cell_imed_line_width_pane_g2

0x0001,

0xfa27,	// (0x000816ad) cell_imed_line_width_pane_g

0x8570,	// (0x0007a1f6) main_vded2_pane_g1_ParamLimits

0x8570,	// (0x0007a1f6) main_vded2_pane_g1

0x858b,	// (0x0007a211) main_vded2_pane_g2_ParamLimits

0x858b,	// (0x0007a211) main_vded2_pane_g2

0x0001,

0xfa2c,	// (0x000816b2) main_vded2_pane_g_ParamLimits

0xfa2c,	// (0x000816b2) main_vded2_pane_g

0x859d,	// (0x0007a223) vded2_slider_pane_ParamLimits

0x859d,	// (0x0007a223) vded2_slider_pane

0x85ad,	// (0x0007a233) aid_size_touch_vded2_end

0x85b7,	// (0x0007a23d) aid_size_touch_vded2_playhead

0xd0c0,	// (0x0007ed46) aid_size_touch_vded2_start

0xd0c8,	// (0x0007ed4e) vded2_slider_bg_pane

0xd0d1,	// (0x0007ed57) vded2_slider_pane_g1

0xd0da,	// (0x0007ed60) vded2_slider_pane_g2

0x85c1,	// (0x0007a247) vded2_slider_pane_g3

0x0002,

0xfa31,	// (0x000816b7) vded2_slider_pane_g

0xd0e2,	// (0x0007ed68) vded2_slider_bg_pane_g1

0xd0eb,	// (0x0007ed71) vded2_slider_bg_pane_g2

0xd0f4,	// (0x0007ed7a) vded2_slider_bg_pane_g3

0x0002,

0xfa38,	// (0x000816be) vded2_slider_bg_pane_g

0x4fd8,	// (0x00076c5e) aid_postcard_touch_down_pane_ParamLimits

0x4fd8,	// (0x00076c5e) aid_postcard_touch_down_pane

0x4ff0,	// (0x00076c76) aid_postcard_touch_up_pane_ParamLimits

0x4ff0,	// (0x00076c76) aid_postcard_touch_up_pane

0x16a1,	// (0x00073327) main_blid2_pane

0xbff1,	// (0x0007dc77) popup_blid2_search_window

0x16a1,	// (0x00073327) blid2_gps_pane

0x16a1,	// (0x00073327) blid2_navig_pane

0x16a1,	// (0x00073327) blid2_search_pane

0x16a1,	// (0x00073327) blid2_tripm_pane

0x85cc,	// (0x0007a252) blid2_search_pane_g1_ParamLimits

0x85cc,	// (0x0007a252) blid2_search_pane_g1

0x85df,	// (0x0007a265) blid2_search_pane_t1_ParamLimits

0x85df,	// (0x0007a265) blid2_search_pane_t1

0x85f1,	// (0x0007a277) aid_size_cell_blid2_gps_ParamLimits

0x85f1,	// (0x0007a277) aid_size_cell_blid2_gps

0x8609,	// (0x0007a28f) blid2_gps_pane_g1_ParamLimits

0x8609,	// (0x0007a28f) blid2_gps_pane_g1

0x861d,	// (0x0007a2a3) grid_blid2_satellite_pane_ParamLimits

0x861d,	// (0x0007a2a3) grid_blid2_satellite_pane

0x8635,	// (0x0007a2bb) blid2_navig_pane_g1_ParamLimits

0x8635,	// (0x0007a2bb) blid2_navig_pane_g1

0x8641,	// (0x0007a2c7) blid2_navig_pane_t1_ParamLimits

0x8641,	// (0x0007a2c7) blid2_navig_pane_t1

0x865c,	// (0x0007a2e2) blid2_navig_pane_t2_ParamLimits

0x865c,	// (0x0007a2e2) blid2_navig_pane_t2

0x0001,

0xfa3f,	// (0x000816c5) blid2_navig_pane_t_ParamLimits

0xfa3f,	// (0x000816c5) blid2_navig_pane_t

0x8677,	// (0x0007a2fd) blid2_navig_ring_pane_ParamLimits

0x8677,	// (0x0007a2fd) blid2_navig_ring_pane

0x8692,	// (0x0007a318) blid2_speed_pane_ParamLimits

0x8692,	// (0x0007a318) blid2_speed_pane

0x869e,	// (0x0007a324) blid2_tripm_pane_g1_ParamLimits

0x869e,	// (0x0007a324) blid2_tripm_pane_g1

0x86b9,	// (0x0007a33f) blid2_tripm_pane_g2_ParamLimits

0x86b9,	// (0x0007a33f) blid2_tripm_pane_g2

0x86cd,	// (0x0007a353) blid2_tripm_pane_g3_ParamLimits

0x86cd,	// (0x0007a353) blid2_tripm_pane_g3

0x86e1,	// (0x0007a367) blid2_tripm_pane_g4_ParamLimits

0x86e1,	// (0x0007a367) blid2_tripm_pane_g4

0x86f5,	// (0x0007a37b) blid2_tripm_pane_g5_ParamLimits

0x86f5,	// (0x0007a37b) blid2_tripm_pane_g5

0x0005,

0xfa44,	// (0x000816ca) blid2_tripm_pane_g_ParamLimits

0xfa44,	// (0x000816ca) blid2_tripm_pane_g

0x871b,	// (0x0007a3a1) blid2_tripm_pane_t1_ParamLimits

0x871b,	// (0x0007a3a1) blid2_tripm_pane_t1

0x8734,	// (0x0007a3ba) blid2_tripm_pane_t2_ParamLimits

0x8734,	// (0x0007a3ba) blid2_tripm_pane_t2

0x874d,	// (0x0007a3d3) blid2_tripm_pane_t3_ParamLimits

0x874d,	// (0x0007a3d3) blid2_tripm_pane_t3

0x0003,

0xfa51,	// (0x000816d7) blid2_tripm_pane_t_ParamLimits

0xfa51,	// (0x000816d7) blid2_tripm_pane_t

0x8794,	// (0x0007a41a) cell_blid2_satellite_pane_ParamLimits

0x8794,	// (0x0007a41a) cell_blid2_satellite_pane

0x87b0,	// (0x0007a436) cell_blid2_satellite_pane_g1

0xd0fd,	// (0x0007ed83) cell_blid2_satellite_pane_t1

0x2da2,	// (0x00074a28) blid2_speed_pane_g1

0xd10b,	// (0x0007ed91) blid2_speed_pane_t1

0xd119,	// (0x0007ed9f) blid2_speed_pane_t2

0x0001,

0xfa5a,	// (0x000816e0) blid2_speed_pane_t

0x2da2,	// (0x00074a28) blid2_navig_ring_pane_g1

0x87b9,	// (0x0007a43f) blid2_navig_ring_pane_g2

0x87c1,	// (0x0007a447) blid2_navig_ring_pane_g3

0x87c9,	// (0x0007a44f) blid2_navig_ring_pane_g4

0x87d1,	// (0x0007a457) blid2_navig_ring_pane_g5

0x0004,

0xfa5f,	// (0x000816e5) blid2_navig_ring_pane_g

0x16a1,	// (0x00073327) bg_popup_window_pane_cp011

0xd127,	// (0x0007edad) popup_blid2_search_window_g1

0xd12f,	// (0x0007edb5) popup_blid2_search_window_t1

0xd13d,	// (0x0007edc3) popup_blid2_search_window_t2

0x0001,

0xfa6a,	// (0x000816f0) popup_blid2_search_window_t

0x3315,	// (0x00074f9b) main_browser_pane_g1

0x2253,	// (0x00073ed9) main_browser_pane_ParamLimits

0x18cb,	// (0x00073551) bg_button_pane_cp011_ParamLimits

0x78ef,	// (0x00079575) cell_vitu2_function_pane_g1_ParamLimits

0xacab,	// (0x0007c931) bg_popup_sub_pane_cp22_ParamLimits

0x0fdb,	// (0x00072c61) input_focus_pane_cp08_ParamLimits

0x8215,	// (0x00079e9b) popup_vitu2_query_button_pane_ParamLimits

0x8215,	// (0x00079e9b) popup_vitu2_query_button_pane

0x0ff2,	// (0x00072c78) popup_vitu2_query_input_button_pane

0xcce1,	// (0x0007e967) popup_vitu2_query_window_g1_ParamLimits

0x0ffc,	// (0x00072c82) popup_vitu2_query_window_g2_ParamLimits

0xf96b,	// (0x000815f1) popup_vitu2_query_window_g_ParamLimits

0x16a1,	// (0x00073327) bg_button_pane_cp026

0x87d9,	// (0x0007a45f) popup_vitu2_query_input_button_pane_g1

0x16a1,	// (0x00073327) bg_button_pane_cp025

0xd14b,	// (0x0007edd1) popup_vitu2_query_button_pane_t1

0x5feb,	// (0x00077c71) main_mp3_pane_t6

0x5ff9,	// (0x00077c7f) popup_slider_window_cp01

0xeb21,	// (0x000807a7) cam4_battery_pane

0xeb76,	// (0x000807fc) cam4_battery_pane_cp02

0xec49,	// (0x000808cf) cam4_battery_pane_cp01

0xec49,	// (0x000808cf) cam4_battery_pane_cp03

0x2da2,	// (0x00074a28) cam4_battery_pane_g1

0xd159,	// (0x0007eddf) cam4_battery_pane_g2

0x0001,

0xfa6f,	// (0x000816f5) cam4_battery_pane_g

0xc3ab,	// (0x0007e031) popup_blid_sat_info2_window_t11

0x4b00,	// (0x00076786) aid_size_touch_mv_arrow_left_ParamLimits

0x4b29,	// (0x000767af) aid_size_touch_mv_arrow_right_ParamLimits

0x4b87,	// (0x0007680d) navi_pane_g1_ParamLimits

0x4b93,	// (0x00076819) navi_pane_g2_ParamLimits

0x4bc1,	// (0x00076847) navi_pane_g3_ParamLimits

0xf374,	// (0x00080ffa) navi_pane_g_ParamLimits

0x4c7f,	// (0x00076905) navi_pane_mv_t1_ParamLimits

0x6c44,	// (0x000788ca) grid_imed_effect_pane_ParamLimits

0x2ec0,	// (0x00074b46) aid_placing_vt_slider_lsc

0x2ed0,	// (0x00074b56) aid_placing_vt_slider_prt

0x18cb,	// (0x00073551) bg_tb_trans_pane_cp01_ParamLimits

0xc613,	// (0x0007e299) popup_image_details_window_g1_ParamLimits

0xc626,	// (0x0007e2ac) popup_image_details_window_g2_ParamLimits

0xc63b,	// (0x0007e2c1) popup_image_details_window_g3_ParamLimits

0xc63b,	// (0x0007e2c1) popup_image_details_window_g3

0xf6a0,	// (0x00081326) popup_image_details_window_g_ParamLimits

0xc64f,	// (0x0007e2d5) popup_image_details_window_t1_ParamLimits

0xc661,	// (0x0007e2e7) popup_image_details_window_t2_ParamLimits

0xc67a,	// (0x0007e300) popup_image_details_window_t3_ParamLimits

0xc68e,	// (0x0007e314) popup_image_details_window_t4_ParamLimits

0xc6a9,	// (0x0007e32f) popup_image_details_window_t5_ParamLimits

0xf6a7,	// (0x0008132d) popup_image_details_window_t_ParamLimits

0x8469,	// (0x0007a0ef) cl_header_name_pane_ParamLimits

0x8469,	// (0x0007a0ef) cl_header_name_pane

0x87e1,	// (0x0007a467) cl_header_name_pane_t1_ParamLimits

0x87e1,	// (0x0007a467) cl_header_name_pane_t1

0x8802,	// (0x0007a488) cl_header_name_pane_t2_ParamLimits

0x8802,	// (0x0007a488) cl_header_name_pane_t2

0x8844,	// (0x0007a4ca) cl_header_name_pane_t3_ParamLimits

0x8844,	// (0x0007a4ca) cl_header_name_pane_t3

0x0002,

0xfa74,	// (0x000816fa) cl_header_name_pane_t_ParamLimits

0xfa74,	// (0x000816fa) cl_header_name_pane_t

0x4c50,	// (0x000768d6) navi_pane_mv_g2_ParamLimits

0xc9f3,	// (0x0007e679) field_vitu2_entry_pane_g1_ParamLimits

0xc9ff,	// (0x0007e685) field_vitu2_entry_pane_g2_ParamLimits

0xac75,	// (0x0007c8fb) field_vitu2_entry_pane_g3_ParamLimits

0xac75,	// (0x0007c8fb) field_vitu2_entry_pane_g3

0xf874,	// (0x000814fa) field_vitu2_entry_pane_g_ParamLimits

0x786b,	// (0x000794f1) cell_vitu2_itu_pane_g1_ParamLimits

0x7883,	// (0x00079509) cell_vitu2_itu_pane_g2_ParamLimits

0x7883,	// (0x00079509) cell_vitu2_itu_pane_g2

0x0001,

0xf880,	// (0x00081506) cell_vitu2_itu_pane_g_ParamLimits

0xf880,	// (0x00081506) cell_vitu2_itu_pane_g

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp05_ParamLimits

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp05

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp03

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp04

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp10_ParamLimits

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp10

0x1121,	// (0x00072da7) bg_vkb2_func_pane_cp08

0x8413,	// (0x0007a099) bg_vkb2_func_pane_cp06

0x8421,	// (0x0007a0a7) bg_vkb2_func_pane_cp07

0xd027,	// (0x0007ecad) bg_vkb2_func_pane_cp11_ParamLimits

0xd027,	// (0x0007ecad) bg_vkb2_func_pane_cp11

0xd03c,	// (0x0007ecc2) bg_vkb2_func_pane_cp12_ParamLimits

0xd03c,	// (0x0007ecc2) bg_vkb2_func_pane_cp12

0x16a1,	// (0x00073327) bg_vkb2_func_pane_cp09

0xca69,	// (0x0007e6ef) bg_vkb2_func_pane_g1

0x3478,	// (0x000750fe) bg_vkb2_func_pane_g2

0xca71,	// (0x0007e6f7) bg_vkb2_func_pane_g3

0xca79,	// (0x0007e6ff) bg_vkb2_func_pane_g4

0xcca6,	// (0x0007e92c) bg_vkb2_func_pane_g5

0xca91,	// (0x0007e717) bg_vkb2_func_pane_g6

0xca99,	// (0x0007e71f) bg_vkb2_func_pane_g7

0xca89,	// (0x0007e70f) bg_vkb2_func_pane_g8

0x3458,	// (0x000750de) bg_vkb2_func_pane_g9

0x0008,

0xfa7b,	// (0x00081701) bg_vkb2_func_pane_g

0x8709,	// (0x0007a38f) blid2_tripm_pane_g6_ParamLimits

0x8709,	// (0x0007a38f) blid2_tripm_pane_g6

0xefc6,	// (0x00080c4c) mp4_progress_pane_g1

0x8780,	// (0x0007a406) blid2_tripm_values_pane_ParamLimits

0x8780,	// (0x0007a406) blid2_tripm_values_pane

0x8875,	// (0x0007a4fb) blid2_tripm_values_pane_t1

0x8883,	// (0x0007a509) blid2_tripm_values_pane_t2

0x8891,	// (0x0007a517) blid2_tripm_values_pane_t3

0x889f,	// (0x0007a525) blid2_tripm_values_pane_t4

0x88ad,	// (0x0007a533) blid2_tripm_values_pane_t5

0x88bb,	// (0x0007a541) blid2_tripm_values_pane_t6

0x88c9,	// (0x0007a54f) blid2_tripm_values_pane_t7

0x88d7,	// (0x0007a55d) blid2_tripm_values_pane_t8

0x88e5,	// (0x0007a56b) blid2_tripm_values_pane_t9

0x0008,

0xfa8e,	// (0x00081714) blid2_tripm_values_pane_t

0x2f07,	// (0x00074b8d) call_video_pane_t1_ParamLimits

0x2f21,	// (0x00074ba7) call_video_pane_t2_ParamLimits

0xf222,	// (0x00080ea8) call_video_pane_t_ParamLimits

0x0e7d,	// (0x00072b03) msg_header_pane_g1_ParamLimits

0xad6a,	// (0x0007c9f0) msg_header_pane_g2_ParamLimits

0xad6a,	// (0x0007c9f0) msg_header_pane_g2

0x0001,

0xf417,	// (0x0008109d) msg_header_pane_g_ParamLimits

0xf417,	// (0x0008109d) msg_header_pane_g

0x2253,	// (0x00073ed9) main_clock2_pane_ParamLimits

0x6941,	// (0x000785c7) grid_clock2_toolbar_pane_ParamLimits

0x6941,	// (0x000785c7) grid_clock2_toolbar_pane

0x6941,	// (0x000785c7) listscroll_clock2_pane_ParamLimits

0x6941,	// (0x000785c7) listscroll_clock2_pane

0x6a20,	// (0x000786a6) main_clock2_pane_t3_ParamLimits

0x6a20,	// (0x000786a6) main_clock2_pane_t3

0x6a43,	// (0x000786c9) main_clock2_pane_t4_ParamLimits

0x6a43,	// (0x000786c9) main_clock2_pane_t4

0xd163,	// (0x0007ede9) cell_clock2_toolbar_pane

0xd16b,	// (0x0007edf1) cell_clock2_toolbar_pane_cp01

0xd16b,	// (0x0007edf1) cell_clock2_toolbar_pane_cp02

0xd173,	// (0x0007edf9) cell_clock2_toolbar_pane_cp03

0xd17b,	// (0x0007ee01) list_clock2_pane

0x4882,	// (0x00076508) scroll_pane_cp10

0xd183,	// (0x0007ee09) list_single_clock2_pane_ParamLimits

0xd183,	// (0x0007ee09) list_single_clock2_pane

0x2bb1,	// (0x00074837) list_highlight_pane_cp08

0xd190,	// (0x0007ee16) list_single_clock2_pane_t1

0xd19e,	// (0x0007ee24) list_single_clock2_pane_t2

0x0001,

0xfaa1,	// (0x00081727) list_single_clock2_pane_t

0x16a1,	// (0x00073327) bg_button_pane_cp10

0xd1ac,	// (0x0007ee32) cell_clock2_toolbar_pane_g1

0x4f64,	// (0x00076bea) aid_main_viewer_pane_g1_ParamLimits

0x4f64,	// (0x00076bea) aid_main_viewer_pane_g1

0x4f72,	// (0x00076bf8) aid_main_viewer_pane_g2_ParamLimits

0x4f72,	// (0x00076bf8) aid_main_viewer_pane_g2

0x4f80,	// (0x00076c06) aid_main_viewer_pane_g3_ParamLimits

0x4f80,	// (0x00076c06) aid_main_viewer_pane_g3

0x4f8f,	// (0x00076c15) aid_main_viewer_pane_g4_ParamLimits

0x4f8f,	// (0x00076c15) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x000810ae) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x000810ae) aid_main_viewer_pane_g

0x592d,	// (0x000775b3) main_calc_pane_ParamLimits

0x5941,	// (0x000775c7) main_dialer2_pane_ParamLimits

0x16a1,	// (0x00073327) main_cam6_pane

0x16a1,	// (0x00073327) main_vid6_pane

0x694d,	// (0x000785d3) listscroll_gen_pane_cp06_ParamLimits

0x694d,	// (0x000785d3) listscroll_gen_pane_cp06

0x6a66,	// (0x000786ec) main_clock2_pane_t5_ParamLimits

0x6a66,	// (0x000786ec) main_clock2_pane_t5

0x6ac4,	// (0x0007874a) aid_call2_pane_cp10_ParamLimits

0x6ad6,	// (0x0007875c) aid_call_pane_cp10_ParamLimits

0x4a8b,	// (0x00076711) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4a8b,	// (0x00076711) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6ae8,	// (0x0007876e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6ae8,	// (0x0007876e) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4a8b,	// (0x00076711) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75c,	// (0x000813e2) popup_clock_analogue_window_cp10_g_ParamLimits

0x6afe,	// (0x00078784) popup_clock_analogue_window_cp10_t1_ParamLimits

0x702e,	// (0x00078cb4) cell_dialer2_keypad_pane_g2_ParamLimits

0x702e,	// (0x00078cb4) cell_dialer2_keypad_pane_g2

0x0001,

0xf813,	// (0x00081499) cell_dialer2_keypad_pane_g_ParamLimits

0xf813,	// (0x00081499) cell_dialer2_keypad_pane_g

0x704a,	// (0x00078cd0) cell_dialer2_keypad_pane_t1

0x7c22,	// (0x000798a8) main_cset_text2_pane_ParamLimits

0x7c22,	// (0x000798a8) main_cset_text2_pane

0xced9,	// (0x0007eb5f) area_vitu2_query_pane_g1_ParamLimits

0x10e0,	// (0x00072d66) area_vitu2_query_pane_g2_ParamLimits

0xf9be,	// (0x00081644) area_vitu2_query_pane_g_ParamLimits

0xcf5d,	// (0x0007ebe3) area_vitu2_query_pane_t7_ParamLimits

0xcf5d,	// (0x0007ebe3) area_vitu2_query_pane_t7

0x8413,	// (0x0007a099) bg_button_pane_cp018_ParamLimits

0x8421,	// (0x0007a0a7) bg_button_pane_cp021_ParamLimits

0x1121,	// (0x00072da7) bg_button_pane_cp022_ParamLimits

0x1121,	// (0x00072da7) bg_vkb2_func_pane_cp08_ParamLimits

0x8413,	// (0x0007a099) bg_vkb2_func_pane_cp06_ParamLimits

0x8421,	// (0x0007a0a7) bg_vkb2_func_pane_cp07_ParamLimits

0x1136,	// (0x00072dbc) input_focus_pane_cp09_ParamLimits

0xeced,	// (0x00080973) cam6_autofocus_pane_ParamLimits

0xeced,	// (0x00080973) cam6_autofocus_pane

0x88f3,	// (0x0007a579) cam6_image_uncrop_pane_ParamLimits

0x88f3,	// (0x0007a579) cam6_image_uncrop_pane

0x8902,	// (0x0007a588) cam6_indi_pane_ParamLimits

0x8902,	// (0x0007a588) cam6_indi_pane

0x8918,	// (0x0007a59e) cam6_mode_pane_ParamLimits

0x8918,	// (0x0007a59e) cam6_mode_pane

0x892a,	// (0x0007a5b0) cam6_timer_pane_ParamLimits

0x892a,	// (0x0007a5b0) cam6_timer_pane

0x8936,	// (0x0007a5bc) cam6_zoom_pane_ParamLimits

0x8936,	// (0x0007a5bc) cam6_zoom_pane

0x8944,	// (0x0007a5ca) cam6_mode_pane_g1_ParamLimits

0x8944,	// (0x0007a5ca) cam6_mode_pane_g1

0x8954,	// (0x0007a5da) cam6_mode_pane_g2_ParamLimits

0x8954,	// (0x0007a5da) cam6_mode_pane_g2

0x8964,	// (0x0007a5ea) cam6_mode_pane_g3_ParamLimits

0x8964,	// (0x0007a5ea) cam6_mode_pane_g3

0x8974,	// (0x0007a5fa) cam6_mode_pane_g4_ParamLimits

0x8974,	// (0x0007a5fa) cam6_mode_pane_g4

0x0003,

0xfaa6,	// (0x0008172c) cam6_mode_pane_g_ParamLimits

0xfaa6,	// (0x0008172c) cam6_mode_pane_g

0xf013,	// (0x00080c99) bg_tb_trans_pane_cp08_ParamLimits

0xf013,	// (0x00080c99) bg_tb_trans_pane_cp08

0xd1b4,	// (0x0007ee3a) cam6_battery_pane_ParamLimits

0xd1b4,	// (0x0007ee3a) cam6_battery_pane

0xd1ca,	// (0x0007ee50) cam6_indi_pane_g1_ParamLimits

0xd1ca,	// (0x0007ee50) cam6_indi_pane_g1

0xd1dc,	// (0x0007ee62) cam6_indi_pane_g2_ParamLimits

0xd1dc,	// (0x0007ee62) cam6_indi_pane_g2

0xd1ee,	// (0x0007ee74) cam6_indi_pane_g3_ParamLimits

0xd1ee,	// (0x0007ee74) cam6_indi_pane_g3

0x0002,

0xfaaf,	// (0x00081735) cam6_indi_pane_g_ParamLimits

0xfaaf,	// (0x00081735) cam6_indi_pane_g

0xd200,	// (0x0007ee86) cam6_indi_pane_t1_ParamLimits

0xd200,	// (0x0007ee86) cam6_indi_pane_t1

0x7664,	// (0x000792ea) cam6_autofocus_pane_g1

0x766c,	// (0x000792f2) cam6_autofocus_pane_g2

0x7674,	// (0x000792fa) cam6_autofocus_pane_g3

0x767c,	// (0x00079302) cam6_autofocus_pane_g4

0x0003,

0xfab6,	// (0x0008173c) cam6_autofocus_pane_g

0xd226,	// (0x0007eeac) cam6_timer_pane_g1

0xd22e,	// (0x0007eeb4) cam6_timer_pane_t1

0xd23c,	// (0x0007eec2) cam6_zoom_cont_pane

0xd244,	// (0x0007eeca) cam6_zoom_pane_g1

0xd24c,	// (0x0007eed2) cam6_zoom_pane_g2

0x8984,	// (0x0007a60a) cam6_zoom_pane_g3

0x0002,

0xfabf,	// (0x00081745) cam6_zoom_pane_g

0x2da2,	// (0x00074a28) cam6_battery_pane_g1

0x2da2,	// (0x00074a28) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0008105e) cam6_battery_pane_g

0xd254,	// (0x0007eeda) cam6_zoom_cont_pane_g1

0xd25d,	// (0x0007eee3) cam6_zoom_cont_pane_g2

0xd266,	// (0x0007eeec) cam6_zoom_cont_pane_g3

0x0002,

0xfac6,	// (0x0008174c) cam6_zoom_cont_pane_g

0x89a1,	// (0x0007a627) cam6_mode_pane_cp_ParamLimits

0x89a1,	// (0x0007a627) cam6_mode_pane_cp

0x8936,	// (0x0007a5bc) cam6_zoom_pane_cp_ParamLimits

0x8936,	// (0x0007a5bc) cam6_zoom_pane_cp

0x89b3,	// (0x0007a639) vid6_image_uncrop_cif_pane_ParamLimits

0x89b3,	// (0x0007a639) vid6_image_uncrop_cif_pane

0x89c3,	// (0x0007a649) vid6_image_uncrop_nhd_pane_ParamLimits

0x89c3,	// (0x0007a649) vid6_image_uncrop_nhd_pane

0x88f3,	// (0x0007a579) vid6_image_uncrop_vga_pane_ParamLimits

0x88f3,	// (0x0007a579) vid6_image_uncrop_vga_pane

0x89d2,	// (0x0007a658) vid6_image_uncrop_wvga_pane_ParamLimits

0x89d2,	// (0x0007a658) vid6_image_uncrop_wvga_pane

0x89e1,	// (0x0007a667) vid6_indi_pane_ParamLimits

0x89e1,	// (0x0007a667) vid6_indi_pane

0xf013,	// (0x00080c99) bg_tb_trans_pane_cp09_ParamLimits

0xf013,	// (0x00080c99) bg_tb_trans_pane_cp09

0xd27e,	// (0x0007ef04) cam6_battery_pane_cp_ParamLimits

0xd27e,	// (0x0007ef04) cam6_battery_pane_cp

0xd28a,	// (0x0007ef10) vid6_indi_pane_g1_ParamLimits

0xd28a,	// (0x0007ef10) vid6_indi_pane_g1

0xd29c,	// (0x0007ef22) vid6_indi_pane_g2_ParamLimits

0xd29c,	// (0x0007ef22) vid6_indi_pane_g2

0xd2ae,	// (0x0007ef34) vid6_indi_pane_g3_ParamLimits

0xd2ae,	// (0x0007ef34) vid6_indi_pane_g3

0xd2c5,	// (0x0007ef4b) vid6_indi_pane_g4_ParamLimits

0xd2c5,	// (0x0007ef4b) vid6_indi_pane_g4

0xd2dc,	// (0x0007ef62) vid6_indi_pane_g5_ParamLimits

0xd2dc,	// (0x0007ef62) vid6_indi_pane_g5

0x0004,

0xfacd,	// (0x00081753) vid6_indi_pane_g_ParamLimits

0xfacd,	// (0x00081753) vid6_indi_pane_g

0xd2f6,	// (0x0007ef7c) vid6_indi_pane_t1_ParamLimits

0xd2f6,	// (0x0007ef7c) vid6_indi_pane_t1

0xd30c,	// (0x0007ef92) vid6_indi_pane_t2_ParamLimits

0xd30c,	// (0x0007ef92) vid6_indi_pane_t2

0xd334,	// (0x0007efba) vid6_indi_pane_t3_ParamLimits

0xd334,	// (0x0007efba) vid6_indi_pane_t3

0xd35c,	// (0x0007efe2) vid6_indi_pane_t4_ParamLimits

0xd35c,	// (0x0007efe2) vid6_indi_pane_t4

0x0003,

0xfad8,	// (0x0008175e) vid6_indi_pane_t_ParamLimits

0xfad8,	// (0x0008175e) vid6_indi_pane_t

0xd380,	// (0x0007f006) wait_bar_pane_cp08

0x89f9,	// (0x0007a67f) main_cset_text2_pane_t1_ParamLimits

0x89f9,	// (0x0007a67f) main_cset_text2_pane_t1

0x898c,	// (0x0007a612) listscroll_gen_pane_cp06_t1_ParamLimits

0x898c,	// (0x0007a612) listscroll_gen_pane_cp06_t1

0x16a1,	// (0x00073327) main_cam6_set_pane

0x2079,	// (0x00073cff) bg_tb_trans_pane_cp06_ParamLimits

0xeb29,	// (0x000807af) cam4_indicators_pane_g1_ParamLimits

0xeb3a,	// (0x000807c0) cam4_indicators_pane_g2_ParamLimits

0xf850,	// (0x000814d6) cam4_indicators_pane_g_ParamLimits

0xeb52,	// (0x000807d8) cam4_indicators_pane_t1_ParamLimits

0x18cb,	// (0x00073551) bg_tb_trans_pane_cp07_ParamLimits

0xeb80,	// (0x00080806) vid4_indicators_pane_g1_ParamLimits

0xeb96,	// (0x0008081c) vid4_indicators_pane_g2_ParamLimits

0xebaa,	// (0x00080830) vid4_indicators_pane_g3_ParamLimits

0xebbd,	// (0x00080843) vid4_indicators_pane_g4_ParamLimits

0xf862,	// (0x000814e8) vid4_indicators_pane_g_ParamLimits

0xebdb,	// (0x00080861) vid4_indicators_pane_t1_ParamLimits

0xec51,	// (0x000808d7) vid4_progress_pane_g1_ParamLimits

0xec61,	// (0x000808e7) vid4_progress_pane_g2_ParamLimits

0xec71,	// (0x000808f7) vid4_progress_pane_g3_ParamLimits

0xec83,	// (0x00080909) vid4_progress_pane_g4_ParamLimits

0xfa09,	// (0x0008168f) vid4_progress_pane_g_ParamLimits

0xeca1,	// (0x00080927) vid4_progress_pane_t1_ParamLimits

0xecbb,	// (0x00080941) vid4_progress_pane_t2_ParamLimits

0xecd0,	// (0x00080956) vid4_progress_pane_t3_ParamLimits

0xfa14,	// (0x0008169a) vid4_progress_pane_t_ParamLimits

0x855d,	// (0x0007a1e3) wait_bar_pane_cp07_ParamLimits

0x8a1a,	// (0x0007a6a0) main_cam6_set_pane_g2_ParamLimits

0x8a1a,	// (0x0007a6a0) main_cam6_set_pane_g2

0x8a40,	// (0x0007a6c6) main_cset6_listscroll_pane_ParamLimits

0x8a40,	// (0x0007a6c6) main_cset6_listscroll_pane

0x8a5e,	// (0x0007a6e4) main_cset6_slider_pane_ParamLimits

0x8a5e,	// (0x0007a6e4) main_cset6_slider_pane

0x8a74,	// (0x0007a6fa) main_cset6_text2_pane_ParamLimits

0x8a74,	// (0x0007a6fa) main_cset6_text2_pane

0xd38f,	// (0x0007f015) main_cset6_text_pane

0xd397,	// (0x0007f01d) main_cset_list_pane_copy1_ParamLimits

0xd397,	// (0x0007f01d) main_cset_list_pane_copy1

0xd3a7,	// (0x0007f02d) scroll_pane_cp028_copy1

0x8a82,	// (0x0007a708) cset_list_set_pane_copy1

0x8a96,	// (0x0007a71c) aid_position_infowindow_above_copy1

0x8a9e,	// (0x0007a724) aid_position_infowindow_below_copy1

0x8aa6,	// (0x0007a72c) cset_list_set_pane_g1_copy1

0x115b,	// (0x00072de1) cset_list_set_pane_g3_copy1_ParamLimits

0x115b,	// (0x00072de1) cset_list_set_pane_g3_copy1

0x116a,	// (0x00072df0) cset_list_set_pane_t1_copy1_ParamLimits

0x116a,	// (0x00072df0) cset_list_set_pane_t1_copy1

0x18cb,	// (0x00073551) list_highlight_pane_cp021_copy1_ParamLimits

0x18cb,	// (0x00073551) list_highlight_pane_cp021_copy1

0xd3b0,	// (0x0007f036) cset6_slider_pane_ParamLimits

0xd3b0,	// (0x0007f036) cset6_slider_pane

0xd3dc,	// (0x0007f062) main_cset6_slider_pane_g1_ParamLimits

0xd3dc,	// (0x0007f062) main_cset6_slider_pane_g1

0x8aae,	// (0x0007a734) main_cset6_slider_pane_g2_ParamLimits

0x8aae,	// (0x0007a734) main_cset6_slider_pane_g2

0xd404,	// (0x0007f08a) main_cset6_slider_pane_g3_ParamLimits

0xd404,	// (0x0007f08a) main_cset6_slider_pane_g3

0x8ad6,	// (0x0007a75c) main_cset6_slider_pane_g4_ParamLimits

0x8ad6,	// (0x0007a75c) main_cset6_slider_pane_g4

0x8ae2,	// (0x0007a768) main_cset6_slider_pane_g5_ParamLimits

0x8ae2,	// (0x0007a768) main_cset6_slider_pane_g5

0xcb9c,	// (0x0007e822) main_cset6_slider_pane_g7_ParamLimits

0xcb9c,	// (0x0007e822) main_cset6_slider_pane_g7

0xcba8,	// (0x0007e82e) main_cset6_slider_pane_g8_ParamLimits

0xcba8,	// (0x0007e82e) main_cset6_slider_pane_g8

0x7cca,	// (0x00079950) main_cset6_slider_pane_g9_ParamLimits

0x7cca,	// (0x00079950) main_cset6_slider_pane_g9

0x7cd6,	// (0x0007995c) main_cset6_slider_pane_g10_ParamLimits

0x7cd6,	// (0x0007995c) main_cset6_slider_pane_g10

0x7ce2,	// (0x00079968) main_cset6_slider_pane_g11_ParamLimits

0x7ce2,	// (0x00079968) main_cset6_slider_pane_g11

0x7cee,	// (0x00079974) main_cset6_slider_pane_g12_ParamLimits

0x7cee,	// (0x00079974) main_cset6_slider_pane_g12

0x7cfa,	// (0x00079980) main_cset6_slider_pane_g13_ParamLimits

0x7cfa,	// (0x00079980) main_cset6_slider_pane_g13

0x7d06,	// (0x0007998c) main_cset6_slider_pane_g14_ParamLimits

0x7d06,	// (0x0007998c) main_cset6_slider_pane_g14

0x8af0,	// (0x0007a776) main_cset6_slider_pane_g15_ParamLimits

0x8af0,	// (0x0007a776) main_cset6_slider_pane_g15

0x7d2a,	// (0x000799b0) main_cset6_slider_pane_g16_ParamLimits

0x7d2a,	// (0x000799b0) main_cset6_slider_pane_g16

0x7d38,	// (0x000799be) main_cset6_slider_pane_g17_ParamLimits

0x7d38,	// (0x000799be) main_cset6_slider_pane_g17

0x0011,

0xfae1,	// (0x00081767) main_cset6_slider_pane_g_ParamLimits

0xfae1,	// (0x00081767) main_cset6_slider_pane_g

0xd410,	// (0x0007f096) main_cset6_slider_pane_t1_ParamLimits

0xd410,	// (0x0007f096) main_cset6_slider_pane_t1

0x8b20,	// (0x0007a7a6) main_cset6_slider_pane_t2_ParamLimits

0x8b20,	// (0x0007a7a6) main_cset6_slider_pane_t2

0x8b4b,	// (0x0007a7d1) main_cset6_slider_pane_t3_ParamLimits

0x8b4b,	// (0x0007a7d1) main_cset6_slider_pane_t3

0x8b76,	// (0x0007a7fc) main_cset6_slider_pane_t4_ParamLimits

0x8b76,	// (0x0007a7fc) main_cset6_slider_pane_t4

0x8ba3,	// (0x0007a829) main_cset6_slider_pane_t5_ParamLimits

0x8ba3,	// (0x0007a829) main_cset6_slider_pane_t5

0xd451,	// (0x0007f0d7) main_cset6_slider_pane_t7_ParamLimits

0xd451,	// (0x0007f0d7) main_cset6_slider_pane_t7

0x8bd0,	// (0x0007a856) main_cset6_slider_pane_t8_ParamLimits

0x8bd0,	// (0x0007a856) main_cset6_slider_pane_t8

0x8bf4,	// (0x0007a87a) main_cset6_slider_pane_t9_ParamLimits

0x8bf4,	// (0x0007a87a) main_cset6_slider_pane_t9

0x8c18,	// (0x0007a89e) main_cset6_slider_pane_t10_ParamLimits

0x8c18,	// (0x0007a89e) main_cset6_slider_pane_t10

0x8c3c,	// (0x0007a8c2) main_cset6_slider_pane_t11_ParamLimits

0x8c3c,	// (0x0007a8c2) main_cset6_slider_pane_t11

0xd487,	// (0x0007f10d) main_cset6_slider_pane_t14_ParamLimits

0xd487,	// (0x0007f10d) main_cset6_slider_pane_t14

0xd4c0,	// (0x0007f146) main_cset6_slider_pane_t15_ParamLimits

0xd4c0,	// (0x0007f146) main_cset6_slider_pane_t15

0x000b,

0xfb06,	// (0x0008178c) main_cset6_slider_pane_t_ParamLimits

0xfb06,	// (0x0008178c) main_cset6_slider_pane_t

0xd4f9,	// (0x0007f17f) cset_slider_pane_g1_copy1

0xd502,	// (0x0007f188) cset_slider_pane_g2_copy1

0xd50b,	// (0x0007f191) cset_slider_pane_g3_copy1

0x16a1,	// (0x00073327) bg_popup_sub_pane_cp011_copy1

0xd51d,	// (0x0007f1a3) main_cset_text_pane_g1_copy1

0xccf5,	// (0x0007e97b) main_cset_text_pane_t1_copy1

0xcd03,	// (0x0007e989) main_cset_text_pane_t2_copy1

0xcd11,	// (0x0007e997) main_cset_text_pane_t3_copy1

0xcd1f,	// (0x0007e9a5) main_cset_text_pane_t4_copy1

0xcd2d,	// (0x0007e9b3) main_cset_text_pane_t5_copy1

0xd525,	// (0x0007f1ab) main_cset_text_pane_t6_copy1

0xd533,	// (0x0007f1b9) main_cset_text_pane_t7_copy1

0x89f9,	// (0x0007a67f) main_cset_text2_pane_t1_copy1

0x18cb,	// (0x00073551) main_ncimui_pane

0x5bdb,	// (0x00077861) popup_query_ncimui_window_ParamLimits

0x5bdb,	// (0x00077861) popup_query_ncimui_window

0xc74a,	// (0x0007e3d0) field_cale_ev2_pane_g4_ParamLimits

0xc74a,	// (0x0007e3d0) field_cale_ev2_pane_g4

0x6ef9,	// (0x00078b7f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6ef9,	// (0x00078b7f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7ef,	// (0x00081475) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7ef,	// (0x00081475) cell_video_dialer_keypad_pane_g

0x6f11,	// (0x00078b97) cell_video_dialer_keypad_pane_t1

0x16a1,	// (0x00073327) bg_popup_window_pane_cp012

0xbf4b,	// (0x0007dbd1) heading_pane_cp06

0xd55f,	// (0x0007f1e5) ncim_query_content_pane

0x16a1,	// (0x00073327) bg_popup_heading_pane_cp01

0xd567,	// (0x0007f1ed) ncim_heading_pane_t1

0xd575,	// (0x0007f1fb) ncim_indicator_popup_pane

0xd587,	// (0x0007f20d) ncim_query_button_pane

0xd59d,	// (0x0007f223) ncim_query_content_pane_t1

0xd5af,	// (0x0007f235) ncim_query_content_pane_t2

0x0005,

0xfb4a,	// (0x000817d0) ncim_query_content_pane_t

0xd5e9,	// (0x0007f26f) ncim_query_list_pane

0xd5fb,	// (0x0007f281) ncim_query_popup_pane

0xd575,	// (0x0007f1fb) ncim_indicator_popup_pane_ParamLimits

0x8d8b,	// (0x0007aa11) ncim_query_content_pane_g1_ParamLimits

0x8d8b,	// (0x0007aa11) ncim_query_content_pane_g1

0xd59d,	// (0x0007f223) ncim_query_content_pane_t1_ParamLimits

0xd5af,	// (0x0007f235) ncim_query_content_pane_t2_ParamLimits

0x8d97,	// (0x0007aa1d) ncim_query_content_pane_t3_ParamLimits

0x8d97,	// (0x0007aa1d) ncim_query_content_pane_t3

0x8dbf,	// (0x0007aa45) ncim_query_content_pane_t4_ParamLimits

0x8dbf,	// (0x0007aa45) ncim_query_content_pane_t4

0x8de7,	// (0x0007aa6d) ncim_query_content_pane_t5_ParamLimits

0x8de7,	// (0x0007aa6d) ncim_query_content_pane_t5

0xd5c1,	// (0x0007f247) ncim_query_content_pane_t6_ParamLimits

0xd5c1,	// (0x0007f247) ncim_query_content_pane_t6

0xfb4a,	// (0x000817d0) ncim_query_content_pane_t_ParamLimits

0xd5e9,	// (0x0007f26f) ncim_query_list_pane_ParamLimits

0xd5fb,	// (0x0007f281) ncim_query_popup_pane_ParamLimits

0xd60f,	// (0x0007f295) wait_bar_pane_cp04

0x16a1,	// (0x00073327) input_focus_pane_cp011

0xd617,	// (0x0007f29d) ncim_query_popup_pane_t1

0xd625,	// (0x0007f2ab) ncim_list_query_list_pane_ParamLimits

0xd625,	// (0x0007f2ab) ncim_list_query_list_pane

0x16a1,	// (0x00073327) bg_button_pane_cp027

0xd638,	// (0x0007f2be) ncim_query_button_pane_g1

0x16a1,	// (0x00073327) list_highlight_pane_cp012

0xd642,	// (0x0007f2c8) ncim_list_query_list_pane_g1

0xd64a,	// (0x0007f2d0) ncim_list_query_list_pane_t1

0xeb46,	// (0x000807cc) cam4_indicators_pane_g3_ParamLimits

0xeb46,	// (0x000807cc) cam4_indicators_pane_g3

0xebc9,	// (0x0008084f) vid4_indicators_pane_g5_ParamLimits

0xebc9,	// (0x0008084f) vid4_indicators_pane_g5

0xec92,	// (0x00080918) vid4_progress_pane_g5_ParamLimits

0xec92,	// (0x00080918) vid4_progress_pane_g5

0x8c76,	// (0x0007a8fc) main_ncimui_pane_g1

0x8cdf,	// (0x0007a965) ncimui_group_query_pane_ParamLimits

0x8cdf,	// (0x0007a965) ncimui_group_query_pane

0x8d27,	// (0x0007a9ad) ncimui_list_pane_ParamLimits

0x8d27,	// (0x0007a9ad) ncimui_list_pane

0x8d4e,	// (0x0007a9d4) ncimui_text_pane_ParamLimits

0x8d4e,	// (0x0007a9d4) ncimui_text_pane

0x8e0f,	// (0x0007aa95) ncimui_text_pane_t1_ParamLimits

0x8e0f,	// (0x0007aa95) ncimui_text_pane_t1

0xd658,	// (0x0007f2de) ncimui_list_single_graphic_pane_ParamLimits

0xd658,	// (0x0007f2de) ncimui_list_single_graphic_pane

0x8e2d,	// (0x0007aab3) ncimui_query_pane_ParamLimits

0x8e2d,	// (0x0007aab3) ncimui_query_pane

0x16a1,	// (0x00073327) list_highlight_pane_cp013

0xd668,	// (0x0007f2ee) ncim_list_query_list_pane_t1_copy1

0xd642,	// (0x0007f2c8) ncim_list_single_graphic_pane_g1

0x8e40,	// (0x0007aac6) ncim_query_button_pane_cp01

0x8e4c,	// (0x0007aad2) ncim_query_entry_pane_ParamLimits

0x8e4c,	// (0x0007aad2) ncim_query_entry_pane

0x8e5f,	// (0x0007aae5) ncimui_query_pane_g1

0x8e6b,	// (0x0007aaf1) ncimui_query_pane_t1_ParamLimits

0x8e6b,	// (0x0007aaf1) ncimui_query_pane_t1

0x18cb,	// (0x00073551) input_focus_pane_cp012

0xd676,	// (0x0007f2fc) ncim_query_entry_pane_t1

0x2253,	// (0x00073ed9) main_im_pane_ParamLimits

0x18cb,	// (0x00073551) main_mobtv_pane_ParamLimits

0x18cb,	// (0x00073551) main_mobtv_pane

0x8b08,	// (0x0007a78e) main_cset6_slider_pane_g18_ParamLimits

0x8b08,	// (0x0007a78e) main_cset6_slider_pane_g18

0x8b14,	// (0x0007a79a) main_cset6_slider_pane_g19_ParamLimits

0x8b14,	// (0x0007a79a) main_cset6_slider_pane_g19

0x2095,	// (0x00073d1b) bg_main_mobtv_pane_ParamLimits

0x2095,	// (0x00073d1b) bg_main_mobtv_pane

0x8e84,	// (0x0007ab0a) main_mobtv_info_pane

0x8e8f,	// (0x0007ab15) main_mobtv_loading_pane_ParamLimits

0x8e8f,	// (0x0007ab15) main_mobtv_loading_pane

0xd688,	// (0x0007f30e) main_mobtv_pg_channel_list_pane

0xd692,	// (0x0007f318) main_mobtv_pg_hdr_pane

0x8e9c,	// (0x0007ab22) main_mobtv_programe_curr_pane_ParamLimits

0x8e9c,	// (0x0007ab22) main_mobtv_programe_curr_pane

0x8ea9,	// (0x0007ab2f) main_mobtv_programe_next_pane_ParamLimits

0x8ea9,	// (0x0007ab2f) main_mobtv_programe_next_pane

0xd69b,	// (0x0007f321) popup_mobtv_noti_window

0x2da2,	// (0x00074a28) main_tv_pg_hdr_pane_g1

0xd6a5,	// (0x0007f32b) main_tv_pg_hdr_pane_g2

0xd6ad,	// (0x0007f333) main_tv_pg_hdr_pane_g3

0xd6b5,	// (0x0007f33b) main_tv_pg_hdr_pane_g4

0xd6bd,	// (0x0007f343) main_tv_pg_hdr_pane_g5

0xd6c7,	// (0x0007f34d) main_tv_pg_hdr_pane_g6

0xd6d1,	// (0x0007f357) main_tv_pg_hdr_pane_g7

0xd6db,	// (0x0007f361) main_tv_pg_hdr_pane_g8

0xd6e5,	// (0x0007f36b) main_tv_pg_hdr_pane_g9

0xd6ef,	// (0x0007f375) main_tv_pg_hdr_pane_g10

0xd6f9,	// (0x0007f37f) main_tv_pg_hdr_pane_g11

0x000a,

0xfb57,	// (0x000817dd) main_tv_pg_hdr_pane_g

0xd703,	// (0x0007f389) main_tv_pg_hdr_pane_t1

0xd711,	// (0x0007f397) main_tv_pg_hdr_pane_t2

0xd71f,	// (0x0007f3a5) main_tv_pg_hdr_pane_t3

0xd72f,	// (0x0007f3b5) main_tv_pg_hdr_pane_t4

0xd73f,	// (0x0007f3c5) main_tv_pg_hdr_pane_t5

0x0004,

0xfb6e,	// (0x000817f4) main_tv_pg_hdr_pane_t

0xd74f,	// (0x0007f3d5) single_mobtv_pg_channel_pane_ParamLimits

0xd74f,	// (0x0007f3d5) single_mobtv_pg_channel_pane

0xd761,	// (0x0007f3e7) single_mobtv_pg_channel_table_pane

0xd76a,	// (0x0007f3f0) single_mobtv_pg_channel_thumb_pane

0xd773,	// (0x0007f3f9) single_tv_pg_channel_pane_g1

0xd77c,	// (0x0007f402) single_tv_pg_channel_pane_g2

0x0001,

0xfb79,	// (0x000817ff) single_tv_pg_channel_pane_g

0x2079,	// (0x00073cff) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2079,	// (0x00073cff) bg_single_mobtv_pg_channel_thumb_pane

0xd785,	// (0x0007f40b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd785,	// (0x0007f40b) single_mobtv_pg_channel_thumb_pane_g1

0xd793,	// (0x0007f419) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd793,	// (0x0007f419) single_mobtv_pg_channel_thumb_pane_g2

0xd79f,	// (0x0007f425) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd79f,	// (0x0007f425) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb7e,	// (0x00081804) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb7e,	// (0x00081804) single_mobtv_pg_channel_thumb_pane_g

0xd7ab,	// (0x0007f431) single_mobtv_pg_channel_thumb_pane_t1

0xd7b9,	// (0x0007f43f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb85,	// (0x0008180b) single_mobtv_pg_channel_thumb_pane_t

0x2da2,	// (0x00074a28) bg_single_mobtv_pg_channel_table_pane_g1

0x2da2,	// (0x00074a28) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0008105e) bg_single_mobtv_pg_channel_table_pane_g

0xd7c7,	// (0x0007f44d) single_mobtv_pg_channel_table_pane_t1

0xd7d5,	// (0x0007f45b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb8a,	// (0x00081810) single_mobtv_pg_channel_table_pane_t

0x8ebe,	// (0x0007ab44) main_mobtv_info_pane_g1_ParamLimits

0x8ebe,	// (0x0007ab44) main_mobtv_info_pane_g1

0x8edc,	// (0x0007ab62) main_mobtv_info_pane_t1_ParamLimits

0x8edc,	// (0x0007ab62) main_mobtv_info_pane_t1

0x8f54,	// (0x0007abda) main_mobtv_info_pane_t2_ParamLimits

0x8f54,	// (0x0007abda) main_mobtv_info_pane_t2

0x0002,

0xfb94,	// (0x0008181a) main_mobtv_info_pane_t_ParamLimits

0xfb94,	// (0x0008181a) main_mobtv_info_pane_t

0x8fe5,	// (0x0007ac6b) wait_bar_pane_cp05

0x8ff7,	// (0x0007ac7d) main_mobtv_loading_pane_g1_ParamLimits

0x8ff7,	// (0x0007ac7d) main_mobtv_loading_pane_g1

0x9008,	// (0x0007ac8e) main_mobtv_loading_pane_g2_ParamLimits

0x9008,	// (0x0007ac8e) main_mobtv_loading_pane_g2

0x9014,	// (0x0007ac9a) main_mobtv_loading_pane_g3_ParamLimits

0x9014,	// (0x0007ac9a) main_mobtv_loading_pane_g3

0x0002,

0xfb9b,	// (0x00081821) main_mobtv_loading_pane_g_ParamLimits

0xfb9b,	// (0x00081821) main_mobtv_loading_pane_g

0xd7e3,	// (0x0007f469) main_mobtv_loading_pane_t1_ParamLimits

0xd7e3,	// (0x0007f469) main_mobtv_loading_pane_t1

0xd7fb,	// (0x0007f481) main_mobtv_loading_pane_t2_ParamLimits

0xd7fb,	// (0x0007f481) main_mobtv_loading_pane_t2

0x0001,

0xfba2,	// (0x00081828) main_mobtv_loading_pane_t_ParamLimits

0xfba2,	// (0x00081828) main_mobtv_loading_pane_t

0x9027,	// (0x0007acad) wait_bar_pane_cp06_ParamLimits

0x9027,	// (0x0007acad) wait_bar_pane_cp06

0xd81f,	// (0x0007f4a5) main_mobtv_programe_curr_pane_t1

0xd82d,	// (0x0007f4b3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfba7,	// (0x0008182d) main_mobtv_programe_curr_pane_t

0xd83b,	// (0x0007f4c1) main_mobtv_programe_next_pane_t1

0xd849,	// (0x0007f4cf) main_mobtv_programe_next_pane_t2

0xd857,	// (0x0007f4dd) main_mobtv_programe_next_pane_t3

0x0002,

0xfbac,	// (0x00081832) main_mobtv_programe_next_pane_t

0x16a1,	// (0x00073327) bg_popup_mobtv_noti_window_pane

0xd865,	// (0x0007f4eb) popup_mobtv_noti_window_g1

0xd86d,	// (0x0007f4f3) popup_mobtv_noti_window_t1

0xd87b,	// (0x0007f501) popup_mobtv_noti_window_t2

0x0001,

0xfbb3,	// (0x00081839) popup_mobtv_noti_window_t

0x2da2,	// (0x00074a28) bg_popup_mobtv_noti_window_pane_g1

0x16a1,	// (0x00073327) sc_clock_pane

0x16a1,	// (0x00073327) main_fs_bigclock_pane

0x876a,	// (0x0007a3f0) blid2_tripm_pane_t4_ParamLimits

0x876a,	// (0x0007a3f0) blid2_tripm_pane_t4

0x9036,	// (0x0007acbc) sc_clock_pane_g1_ParamLimits

0x9036,	// (0x0007acbc) sc_clock_pane_g1

0x9048,	// (0x0007acce) sc_clock_pane_t1_ParamLimits

0x9048,	// (0x0007acce) sc_clock_pane_t1

0x906c,	// (0x0007acf2) sc_clock_pane_t2_ParamLimits

0x906c,	// (0x0007acf2) sc_clock_pane_t2

0x9084,	// (0x0007ad0a) sc_clock_pane_t3_ParamLimits

0x9084,	// (0x0007ad0a) sc_clock_pane_t3

0x0004,

0xfbb8,	// (0x0008183e) sc_clock_pane_t_ParamLimits

0xfbb8,	// (0x0008183e) sc_clock_pane_t

0x9bae,	// (0x0007b834) main_fs_bigclock_indicator_pane_ParamLimits

0x9bae,	// (0x0007b834) main_fs_bigclock_indicator_pane

0x914a,	// (0x0007add0) main_fs_bigclock_pane_g1_ParamLimits

0x914a,	// (0x0007add0) main_fs_bigclock_pane_g1

0x9bba,	// (0x0007b840) main_fs_bigclock_pane_t1_ParamLimits

0x9bba,	// (0x0007b840) main_fs_bigclock_pane_t1

0x9bcc,	// (0x0007b852) main_fs_bigclock_pane_t2_ParamLimits

0x9bcc,	// (0x0007b852) main_fs_bigclock_pane_t2

0x9be0,	// (0x0007b866) main_fs_bigclock_pane_t3_ParamLimits

0x9be0,	// (0x0007b866) main_fs_bigclock_pane_t3

0x0002,

0xfd49,	// (0x000819cf) main_fs_bigclock_pane_t_ParamLimits

0xfd49,	// (0x000819cf) main_fs_bigclock_pane_t

0xe30f,	// (0x0007ff95) main_fs_bigclock_indicator_pane_g1

0xd58f,	// (0x0007f215) ncim_query_content_pane_g2_ParamLimits

0xd58f,	// (0x0007f215) ncim_query_content_pane_g2

0x0001,

0xfb45,	// (0x000817cb) ncim_query_content_pane_g_ParamLimits

0xfb45,	// (0x000817cb) ncim_query_content_pane_g

0x909b,	// (0x0007ad21) sc_clock_pane_t4_ParamLimits

0x909b,	// (0x0007ad21) sc_clock_pane_t4

0x18cb,	// (0x00073551) main_radioblah_pane

0xeab9,	// (0x0008073f) cell_call4_button_pane_t1_copy1_ParamLimits

0xeab9,	// (0x0008073f) cell_call4_button_pane_t1_copy1

0x8c8e,	// (0x0007a914) main_ncimui_pane_t1_ParamLimits

0x8c8e,	// (0x0007a914) main_ncimui_pane_t1

0x8ca8,	// (0x0007a92e) main_ncimui_pane_t2_ParamLimits

0x8ca8,	// (0x0007a92e) main_ncimui_pane_t2

0x0002,

0xfb3e,	// (0x000817c4) main_ncimui_pane_t_ParamLimits

0xfb3e,	// (0x000817c4) main_ncimui_pane_t

0xd889,	// (0x0007f50f) main_radioblah_anim_pane_ParamLimits

0xd889,	// (0x0007f50f) main_radioblah_anim_pane

0xd89a,	// (0x0007f520) main_radioblah_info_pane_ParamLimits

0xd89a,	// (0x0007f520) main_radioblah_info_pane

0xd8ae,	// (0x0007f534) main_radioblah_pane_t1_ParamLimits

0xd8ae,	// (0x0007f534) main_radioblah_pane_t1

0xd8ca,	// (0x0007f550) main_radioblah_pane_t2_ParamLimits

0xd8ca,	// (0x0007f550) main_radioblah_pane_t2

0x0003,

0xfbd9,	// (0x0008185f) main_radioblah_pane_t_ParamLimits

0xfbd9,	// (0x0008185f) main_radioblah_pane_t

0x92f3,	// (0x0007af79) main_radioblah_rocker_ctrl_pane_ParamLimits

0x92f3,	// (0x0007af79) main_radioblah_rocker_ctrl_pane

0xd912,	// (0x0007f598) main_radioblah_info_pane_t1_ParamLimits

0xd912,	// (0x0007f598) main_radioblah_info_pane_t1

0x934b,	// (0x0007afd1) main_radioblah_info_pane_t2_ParamLimits

0x934b,	// (0x0007afd1) main_radioblah_info_pane_t2

0x0003,

0xfbe2,	// (0x00081868) main_radioblah_info_pane_t_ParamLimits

0xfbe2,	// (0x00081868) main_radioblah_info_pane_t

0x2da2,	// (0x00074a28) main_radioblah_rocker_ctrl_pane_g1

0x93fb,	// (0x0007b081) main_radioblah_rocker_ctrl_pane_g2

0x9403,	// (0x0007b089) main_radioblah_rocker_ctrl_pane_g3

0x940b,	// (0x0007b091) main_radioblah_rocker_ctrl_pane_g4

0x9413,	// (0x0007b099) main_radioblah_rocker_ctrl_pane_g5

0x941b,	// (0x0007b0a1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbeb,	// (0x00081871) main_radioblah_rocker_ctrl_pane_g

0x89f9,	// (0x0007a67f) main_cset_text2_pane_t1_copy1_ParamLimits

0xeb17,	// (0x0008079d) cam4_image_uncrop_qvga_pane

0xeb6c,	// (0x000807f2) vid4_image_uncrop_qcif_pane

0xeced,	// (0x00080973) cam6_image_uncrop_qvga_pane_ParamLimits

0xeced,	// (0x00080973) cam6_image_uncrop_qvga_pane

0xd26e,	// (0x0007eef4) vid6_image_uncrop_qcif_pane_ParamLimits

0xd26e,	// (0x0007eef4) vid6_image_uncrop_qcif_pane

0x16a1,	// (0x00073327) bg_popup_preview_window_pane_cp03

0xd541,	// (0x0007f1c7) list_cset_text2_pane

0xd549,	// (0x0007f1cf) main_cset6_text2_pane_g1

0xd551,	// (0x0007f1d7) main_cset6_text2_pane_t1

0xd94c,	// (0x0007f5d2) list_cset_text2_pane_t1_ParamLimits

0xd94c,	// (0x0007f5d2) list_cset_text2_pane_t1

0x18cb,	// (0x00073551) main_radioblah_pane_ParamLimits

0x8fd1,	// (0x0007ac57) main_mobtv_info_pane_t3_ParamLimits

0x8fd1,	// (0x0007ac57) main_mobtv_info_pane_t3

0x92e1,	// (0x0007af67) main_radioblah_pane_g1

0x931b,	// (0x0007afa1) main_radioblah_info_pane_g1

0x93a0,	// (0x0007b026) main_radioblah_info_pane_t3_ParamLimits

0x93a0,	// (0x0007b026) main_radioblah_info_pane_t3

0x4184,	// (0x00075e0a) highlight_cell_cale_month_pane_ParamLimits

0x4184,	// (0x00075e0a) highlight_cell_cale_month_pane

0x16a1,	// (0x00073327) main_phob_fisheye_pane

0xc7bf,	// (0x0007e445) scroll_pane_cp0031_ParamLimits

0xc7bf,	// (0x0007e445) scroll_pane_cp0031

0xd380,	// (0x0007f006) wait_bar_pane_cp08_ParamLimits

0x8a82,	// (0x0007a708) cset_list_set_pane_copy1_ParamLimits

0xd966,	// (0x0007f5ec) highlight_cell_cale_month_pane_g1

0x9423,	// (0x0007b0a9) highlight_cell_cale_month_pane_t1

0xcfc9,	// (0x0007ec4f) list_gen_pane_cp01

0xcb87,	// (0x0007e80d) scroll_pane_01

0x9431,	// (0x0007b0b7) list_single_double_fisheye_pane

0x119c,	// (0x00072e22) list_double_fisheye_pane_g1_ParamLimits

0x119c,	// (0x00072e22) list_double_fisheye_pane_g1

0x11a8,	// (0x00072e2e) list_double_fisheye_pane_g2_ParamLimits

0x11a8,	// (0x00072e2e) list_double_fisheye_pane_g2

0x943a,	// (0x0007b0c0) list_double_fisheye_pane_g3_ParamLimits

0x943a,	// (0x0007b0c0) list_double_fisheye_pane_g3

0x0004,

0xfbf8,	// (0x0008187e) list_double_fisheye_pane_g_ParamLimits

0xfbf8,	// (0x0008187e) list_double_fisheye_pane_g

0x11d9,	// (0x00072e5f) list_double_fisheye_pane_t1_ParamLimits

0x11d9,	// (0x00072e5f) list_double_fisheye_pane_t1

0x11f4,	// (0x00072e7a) list_double_fisheye_pane_t2_ParamLimits

0x11f4,	// (0x00072e7a) list_double_fisheye_pane_t2

0x0001,

0xfc03,	// (0x00081889) list_double_fisheye_pane_t_ParamLimits

0xfc03,	// (0x00081889) list_double_fisheye_pane_t

0x16a1,	// (0x00073327) main_call5_pane

0x90c6,	// (0x0007ad4c) sc_swipe_pane_ParamLimits

0x90c6,	// (0x0007ad4c) sc_swipe_pane

0x9459,	// (0x0007b0df) call5_image_pane_ParamLimits

0x9459,	// (0x0007b0df) call5_image_pane

0x9476,	// (0x0007b0fc) call5_swipe_1_pane_ParamLimits

0x9476,	// (0x0007b0fc) call5_swipe_1_pane

0x9489,	// (0x0007b10f) call5_swipe_2_pane_ParamLimits

0x9489,	// (0x0007b10f) call5_swipe_2_pane

0x94b4,	// (0x0007b13a) popup_call5_audio_first_window_ParamLimits

0x94b4,	// (0x0007b13a) popup_call5_audio_first_window

0x2079,	// (0x00073cff) call5_swipe_1_pane_g1_ParamLimits

0x2079,	// (0x00073cff) call5_swipe_1_pane_g1

0xd96e,	// (0x0007f5f4) call5_swipe_1_pane_g2_ParamLimits

0xd96e,	// (0x0007f5f4) call5_swipe_1_pane_g2

0x0001,

0xfc08,	// (0x0008188e) call5_swipe_1_pane_g_ParamLimits

0xfc08,	// (0x0008188e) call5_swipe_1_pane_g

0xd97a,	// (0x0007f600) call5_swipe_1_pane_t1_ParamLimits

0xd97a,	// (0x0007f600) call5_swipe_1_pane_t1

0x2079,	// (0x00073cff) call5_swipe_2_pane_g1_ParamLimits

0x2079,	// (0x00073cff) call5_swipe_2_pane_g1

0xd98f,	// (0x0007f615) call5_swipe_2_pane_g2_ParamLimits

0xd98f,	// (0x0007f615) call5_swipe_2_pane_g2

0x0001,

0xfc0d,	// (0x00081893) call5_swipe_2_pane_g_ParamLimits

0xfc0d,	// (0x00081893) call5_swipe_2_pane_g

0xd99b,	// (0x0007f621) call5_swipe_2_pane_t1_ParamLimits

0xd99b,	// (0x0007f621) call5_swipe_2_pane_t1

0xd9b0,	// (0x0007f636) sc_swipe_pane_g1_ParamLimits

0xd9b0,	// (0x0007f636) sc_swipe_pane_g1

0xd9bd,	// (0x0007f643) sc_swipe_pane_g2_ParamLimits

0xd9bd,	// (0x0007f643) sc_swipe_pane_g2

0x0001,

0xfc12,	// (0x00081898) sc_swipe_pane_g_ParamLimits

0xfc12,	// (0x00081898) sc_swipe_pane_g

0xd9c9,	// (0x0007f64f) sc_swipe_pane_t1_ParamLimits

0xd9c9,	// (0x0007f64f) sc_swipe_pane_t1

0x16a1,	// (0x00073327) main_cmail_launcher_pane

0x94c9,	// (0x0007b14f) aid_size_cell_cmail_l_ParamLimits

0x94c9,	// (0x0007b14f) aid_size_cell_cmail_l

0x94d7,	// (0x0007b15d) grid_cmail_l_pane_ParamLimits

0x94d7,	// (0x0007b15d) grid_cmail_l_pane

0x94f0,	// (0x0007b176) cell_cmail_l_pane_ParamLimits

0x94f0,	// (0x0007b176) cell_cmail_l_pane

0xd9de,	// (0x0007f664) cell_cmail_l_pane_g1_ParamLimits

0xd9de,	// (0x0007f664) cell_cmail_l_pane_g1

0xd9ea,	// (0x0007f670) cell_cmail_l_pane_t1_ParamLimits

0xd9ea,	// (0x0007f670) cell_cmail_l_pane_t1

0xda00,	// (0x0007f686) cell_cmail_l_pane_t2_ParamLimits

0xda00,	// (0x0007f686) cell_cmail_l_pane_t2

0x0001,

0xfc17,	// (0x0008189d) cell_cmail_l_pane_t_ParamLimits

0xfc17,	// (0x0008189d) cell_cmail_l_pane_t

0x18cb,	// (0x00073551) grid_highlight_pane_cp018_ParamLimits

0x18cb,	// (0x00073551) grid_highlight_pane_cp018

0x1771,	// (0x000733f7) main2_pane_ParamLimits

0x1771,	// (0x000733f7) main2_pane

0x2478,	// (0x000740fe) popup_sp_fs_action_menu_bg_pane_g1

0x2480,	// (0x00074106) popup_sp_fs_action_menu_bg_pane_g2

0x2488,	// (0x0007410e) popup_sp_fs_action_menu_bg_pane_g3

0x2490,	// (0x00074116) popup_sp_fs_action_menu_bg_pane_g4

0x2498,	// (0x0007411e) popup_sp_fs_action_menu_bg_pane_g5

0x24a0,	// (0x00074126) popup_sp_fs_action_menu_bg_pane_g6

0x24a8,	// (0x0007412e) popup_sp_fs_action_menu_bg_pane_g7

0x24b0,	// (0x00074136) popup_sp_fs_action_menu_bg_pane_g8

0x24b8,	// (0x0007413e) popup_sp_fs_action_menu_bg_pane_g9

0x24c0,	// (0x00074146) popup_sp_fs_action_menu_bg_pane_g10

0x24c0,	// (0x00074146) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00080dcb) popup_sp_fs_action_menu_bg_pane_g

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g3_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g3_g2

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00080e79) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00080e79) list_medium_line_x2_t3_g3_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g3_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g3_t2

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00080e80) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00080e80) list_medium_line_x2_t3_g3_t

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g2_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00080e87) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00080e87) list_medium_line_x2_t3_g2_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g2_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g2_t2

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00080e80) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00080e80) list_medium_line_x2_t3_g2_t

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g2

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g3

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00080e8c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00080e8c) list_medium_line_x2_t4_g4_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t2

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t3

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00080e95) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00080e95) list_medium_line_x2_t4_g4_t

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g2

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g3

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00080e8c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00080e8c) list_medium_line_x2_t2_g4_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g4_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x00080e5c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x00080e5c) list_medium_line_x2_t2_g4_t

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g3_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g3_g2

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00080e79) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00080e79) list_medium_line_x2_t2_g3_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g3_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x00080e5c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x00080e5c) list_medium_line_x2_t2_g3_t

0x452c,	// (0x000761b2) main_sp_fs_list_pane_ParamLimits

0x452c,	// (0x000761b2) main_sp_fs_list_pane

0xab21,	// (0x0007c7a7) sp_fs_scroll_pane_ParamLimits

0xab21,	// (0x0007c7a7) sp_fs_scroll_pane

0x4538,	// (0x000761be) list_medium_line_x2_t3_t1

0x4538,	// (0x000761be) list_medium_line_x2_t3_t2

0x4538,	// (0x000761be) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x00080f42) list_medium_line_x2_t3_t

0x4538,	// (0x000761be) list_medium_line_x3_t4_t1

0x4538,	// (0x000761be) list_medium_line_x3_t4_t2

0x4538,	// (0x000761be) list_medium_line_x3_t4_t3

0x4538,	// (0x000761be) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x00080f49) list_medium_line_x3_t4_t

0x4538,	// (0x000761be) list_medium_line_x4_t5_t1

0x4538,	// (0x000761be) list_medium_line_x4_t5_t2

0x4538,	// (0x000761be) list_medium_line_x4_t5_t3

0x4538,	// (0x000761be) list_medium_line_x4_t5_t4

0x4538,	// (0x000761be) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x00080f52) list_medium_line_x4_t5_t

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g1

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g2

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g3

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g4_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00080e8c) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00080e8c) list_medium_line_t4_g4_g

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t1

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t2

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t3

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t4_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00080e95) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00080e95) list_medium_line_t4_g4_t

0x484f,	// (0x000764d5) chi_dic_find_pane_g1

0x5961,	// (0x000775e7) main_tport_pane

0x4538,	// (0x000761be) list_medium_line_plain_t1

0x2079,	// (0x00073cff) list_medium_line_t2_g2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t2_g2_g1

0x2079,	// (0x00073cff) list_medium_line_t2_g2_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00080e87) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00080e87) list_medium_line_t2_g2_g

0x2c1e,	// (0x000748a4) list_medium_line_t2_g2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t2_g2_t1

0x2c1e,	// (0x000748a4) list_medium_line_t2_g2_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x00080e5c) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x00080e5c) list_medium_line_t2_g2_t

0xcfd2,	// (0x0007ec58) aid_sp_fs_list_icon_a_sm

0xece5,	// (0x0008096b) aid_sp_fs_list_icon_d

0xcfda,	// (0x0007ec60) aid_sp_fs_text_primary

0xcfe3,	// (0x0007ec69) aid_sp_fs_text_secondary

0x16a1,	// (0x00073327) list_medium_line

0x16a1,	// (0x00073327) list_medium_line_g2

0x16a1,	// (0x00073327) list_medium_line_g3

0x16a1,	// (0x00073327) list_medium_line_plain

0x16a1,	// (0x00073327) list_medium_line_plain_t2

0x16a1,	// (0x00073327) list_medium_line_plain_t3

0x16a1,	// (0x00073327) list_medium_line_right_icon

0x16a1,	// (0x00073327) list_medium_line_right_iconx2

0x16a1,	// (0x00073327) list_medium_line_t2

0x16a1,	// (0x00073327) list_medium_line_t2_g2

0x16a1,	// (0x00073327) list_medium_line_t2_g3

0x16a1,	// (0x00073327) list_medium_line_t2_right_icon

0x16a1,	// (0x00073327) list_medium_line_t2_right_iconx2

0x16a1,	// (0x00073327) list_medium_line_t3

0x16a1,	// (0x00073327) list_medium_line_t3_g2

0x16a1,	// (0x00073327) list_medium_line_t3_g3

0x16a1,	// (0x00073327) list_medium_line_t3_right_iconx2

0x16a1,	// (0x00073327) list_medium_line_t4_g4

0x16a1,	// (0x00073327) list_medium_line_x2

0x16a1,	// (0x00073327) list_medium_line_x2_t2_g2

0x16a1,	// (0x00073327) list_medium_line_x2_t2_g3

0x16a1,	// (0x00073327) list_medium_line_x2_t2_g4

0x16a1,	// (0x00073327) list_medium_line_x2_t3

0x16a1,	// (0x00073327) list_medium_line_x2_t3_g2

0x16a1,	// (0x00073327) list_medium_line_x2_t3_g3

0x16a1,	// (0x00073327) list_medium_line_x2_t3_g4

0x16a1,	// (0x00073327) list_medium_line_x2_t4_g2

0x16a1,	// (0x00073327) list_medium_line_x2_t4_g4

0x16a1,	// (0x00073327) list_medium_line_x3

0x16a1,	// (0x00073327) list_medium_line_x3_t4

0x16a1,	// (0x00073327) list_medium_line_x3_t4_g4

0x16a1,	// (0x00073327) list_medium_line_x4_t4

0x16a1,	// (0x00073327) list_medium_line_x4_t4_g7

0x16a1,	// (0x00073327) list_medium_line_x4_t5

0x1147,	// (0x00072dcd) list_single_fs_dyc_pane_ParamLimits

0x1147,	// (0x00072dcd) list_single_fs_dyc_pane

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g1

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g2

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g3

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g4

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g5

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x4_t4_g7_g6

0x2087,	// (0x00073d0d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2087,	// (0x00073d0d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb1f,	// (0x000817a5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb1f,	// (0x000817a5) list_medium_line_x4_t4_g7_g

0x2c1e,	// (0x000748a4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x4_t4_g7_t1

0x2c1e,	// (0x000748a4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x4_t4_g7_t2

0x2c1e,	// (0x000748a4) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x4_t4_g7_t3

0xac97,	// (0x0007c91d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xac97,	// (0x0007c91d) list_medium_line_x4_t4_g7_t4

0xac97,	// (0x0007c91d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xac97,	// (0x0007c91d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb2e,	// (0x000817b4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb2e,	// (0x000817b4) list_medium_line_x4_t4_g7_t

0x117f,	// (0x00072e05) list_single_dyc_row_pane_ParamLimits

0x117f,	// (0x00072e05) list_single_dyc_row_pane

0x9446,	// (0x0007b0cc) call5_gesture_pane_ParamLimits

0x9446,	// (0x0007b0cc) call5_gesture_pane

0x949c,	// (0x0007b122) call5_windows_pane_ParamLimits

0x949c,	// (0x0007b122) call5_windows_pane

0x9502,	// (0x0007b188) call5_swipe_1_pane_cp_ParamLimits

0x9502,	// (0x0007b188) call5_swipe_1_pane_cp

0x950e,	// (0x0007b194) call5_swipe_2_pane_cp_ParamLimits

0x950e,	// (0x0007b194) call5_swipe_2_pane_cp

0x2bb1,	// (0x00074837) call5_image_pane_cp

0x951a,	// (0x0007b1a0) popup_call5_audio_first_window_cp_ParamLimits

0x951a,	// (0x0007b1a0) popup_call5_audio_first_window_cp

0xd9b0,	// (0x0007f636) call5_swipe_1_pane_g1_cp_ParamLimits

0xd9b0,	// (0x0007f636) call5_swipe_1_pane_g1_cp

0xda1d,	// (0x0007f6a3) call5_swipe_1_pane_g2_cp

0xd9c9,	// (0x0007f64f) call5_swipe_1_pane_t1_cp_ParamLimits

0xd9c9,	// (0x0007f64f) call5_swipe_1_pane_t1_cp

0xd9b0,	// (0x0007f636) call5_swipe_2_pane_g1_cp_ParamLimits

0xd9b0,	// (0x0007f636) call5_swipe_2_pane_g1_cp

0xda25,	// (0x0007f6ab) call5_swipe_2_pane_g2_cp

0xda2d,	// (0x0007f6b3) call5_swipe_2_pane_t1_cp_ParamLimits

0xda2d,	// (0x0007f6b3) call5_swipe_2_pane_t1_cp

0x18cb,	// (0x00073551) main_sp_fs_email_pane

0xcc6a,	// (0x0007e8f0) main_sp_fs_listscroll_pane_te

0x1216,	// (0x00072e9c) popup_sp_fs_action_menu_pane_ParamLimits

0x1216,	// (0x00072e9c) popup_sp_fs_action_menu_pane

0x2da2,	// (0x00074a28) bg_sp_fs_ctrlbar_pane_g1

0xda42,	// (0x0007f6c8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xda4b,	// (0x0007f6d1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xda54,	// (0x0007f6da) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2da2,	// (0x00074a28) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc1c,	// (0x000818a2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc16f,	// (0x0007ddf5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc16f,	// (0x0007ddf5) bg_sp_fs_ctrlbar_ddmenu_pane

0xda5d,	// (0x0007f6e3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xda5d,	// (0x0007f6e3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xda69,	// (0x0007f6ef) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xda69,	// (0x0007f6ef) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc25,	// (0x000818ab) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc25,	// (0x000818ab) main_sp_fs_ctrlbar_ddmenu_pane_g

0xda75,	// (0x0007f6fb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xda75,	// (0x0007f6fb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2da2,	// (0x00074a28) list_medium_line_t2_right_icon_g1

0x4538,	// (0x000761be) list_medium_line_t2_right_icon_t1

0x4538,	// (0x000761be) list_medium_line_t2_right_icon_t2

0x0001,

0xfc2a,	// (0x000818b0) list_medium_line_t2_right_icon_t

0xacab,	// (0x0007c931) bg_sp_fs_ctrlbar_pane_ParamLimits

0xacab,	// (0x0007c931) bg_sp_fs_ctrlbar_pane

0x9575,	// (0x0007b1fb) main_sp_fs_ctrlbar_button_pane_cp01

0x957f,	// (0x0007b205) main_sp_fs_ctrlbar_ddmenu_pane

0xdac9,	// (0x0007f74f) main_sp_fs_ctrlbar_pane_g1

0xdad5,	// (0x0007f75b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc2f,	// (0x000818b5) main_sp_fs_ctrlbar_pane_g

0x95bd,	// (0x0007b243) main_sp_fs_ctrlbar_pane_t1

0x95fc,	// (0x0007b282) main_sp_fs_ctrlbar_pane

0x9620,	// (0x0007b2a6) main_sp_fs_listscroll_pane_te_cp01

0x125e,	// (0x00072ee4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x125e,	// (0x00072ee4) popup_sp_fs_action_menu_pane_cp01

0x18cb,	// (0x00073551) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x18cb,	// (0x00073551) bg_sp_fs_highlight_list_pane_cp01

0xdafc,	// (0x0007f782) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdafc,	// (0x0007f782) sp_fs_action_menu_list_gene_pane_g1

0xdb0b,	// (0x0007f791) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdb0b,	// (0x0007f791) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc3d,	// (0x000818c3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc3d,	// (0x000818c3) sp_fs_action_menu_list_gene_pane_g

0xdb18,	// (0x0007f79e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdb18,	// (0x0007f79e) sp_fs_action_menu_list_gene_pane_t1

0xdb30,	// (0x0007f7b6) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdb30,	// (0x0007f7b6) sp_fs_action_menu_list_gene_pane

0xdb53,	// (0x0007f7d9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdb53,	// (0x0007f7d9) popup_sp_fs_action_menu_bg_pane

0xdb61,	// (0x0007f7e7) sp_fs_action_menu_list_pane_ParamLimits

0xdb61,	// (0x0007f7e7) sp_fs_action_menu_list_pane

0x1283,	// (0x00072f09) sp_fs_scroll_pane_cp01_ParamLimits

0x1283,	// (0x00072f09) sp_fs_scroll_pane_cp01

0x4538,	// (0x000761be) list_medium_line_plain_t2_t1

0x4538,	// (0x000761be) list_medium_line_plain_t2_t2

0x0001,

0xfc2a,	// (0x000818b0) list_medium_line_plain_t2_t

0x4538,	// (0x000761be) list_medium_line_plain_t3_t1

0x4538,	// (0x000761be) list_medium_line_plain_t3_t2

0x4538,	// (0x000761be) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x00080f42) list_medium_line_plain_t3_t

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g2_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00080e87) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00080e87) list_medium_line_x2_t2_g2_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g2_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x00080e5c) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x00080e5c) list_medium_line_x2_t2_g2_t

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g2_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00080e87) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00080e87) list_medium_line_x2_t4_g2_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t2

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t3

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00080e95) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00080e95) list_medium_line_x2_t4_g2_t

0x2da2,	// (0x00074a28) list_medium_line_t3_right_iconx2_g1

0x2da2,	// (0x00074a28) list_medium_line_t3_right_iconx2_g2

0x2da2,	// (0x00074a28) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x00081063) list_medium_line_t3_right_iconx2_g

0x4538,	// (0x000761be) list_medium_line_t3_right_iconx2_t1

0x4538,	// (0x000761be) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc2a,	// (0x000818b0) list_medium_line_t3_right_iconx2_t

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g1

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g2

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g3

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00080e8c) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00080e8c) list_medium_line_x3_t4_g4_g

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t1

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t2

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t3

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00080e95) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00080e95) list_medium_line_x3_t4_g4_t

0x12a9,	// (0x00072f2f) list_single_dyc_row_text_pane_t1_ParamLimits

0x12a9,	// (0x00072f2f) list_single_dyc_row_text_pane_t1

0x12f2,	// (0x00072f78) list_single_dyc_row_text_pane_t2_ParamLimits

0x12f2,	// (0x00072f78) list_single_dyc_row_text_pane_t2

0xdb85,	// (0x0007f80b) list_single_dyc_row_text_pane_t3_ParamLimits

0xdb85,	// (0x0007f80b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc42,	// (0x000818c8) list_single_dyc_row_text_pane_t_ParamLimits

0xfc42,	// (0x000818c8) list_single_dyc_row_text_pane_t

0xdba9,	// (0x0007f82f) list_single_dyc_row_pane_g1_ParamLimits

0xdba9,	// (0x0007f82f) list_single_dyc_row_pane_g1

0xdbb5,	// (0x0007f83b) list_single_dyc_row_pane_g2_ParamLimits

0xdbb5,	// (0x0007f83b) list_single_dyc_row_pane_g2

0xdbc1,	// (0x0007f847) list_single_dyc_row_pane_g3_ParamLimits

0xdbc1,	// (0x0007f847) list_single_dyc_row_pane_g3

0xdbcd,	// (0x0007f853) list_single_dyc_row_pane_g4_ParamLimits

0xdbcd,	// (0x0007f853) list_single_dyc_row_pane_g4

0x0003,

0xfc4f,	// (0x000818d5) list_single_dyc_row_pane_g_ParamLimits

0xfc4f,	// (0x000818d5) list_single_dyc_row_pane_g

0xdbd9,	// (0x0007f85f) list_single_dyc_row_text_pane_ParamLimits

0xdbd9,	// (0x0007f85f) list_single_dyc_row_text_pane

0x16a1,	// (0x00073327) bg_sp_fs_scroll_pane

0xdbf8,	// (0x0007f87e) thumb_sp_fs_scroll_pane

0x2079,	// (0x00073cff) list_medium_line_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_g1

0x2c1e,	// (0x000748a4) list_medium_line_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t1

0x2079,	// (0x00073cff) list_medium_line_x2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_g1

0x2079,	// (0x00073cff) list_medium_line_x2_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00080e87) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00080e87) list_medium_line_x2_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t1

0x2079,	// (0x00073cff) list_medium_line_x3_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x3_g1

0xdc01,	// (0x0007f887) list_medium_line_x3_g2_ParamLimits

0xdc01,	// (0x0007f887) list_medium_line_x3_g2

0x0001,

0xfc58,	// (0x000818de) list_medium_line_x3_g_ParamLimits

0xfc58,	// (0x000818de) list_medium_line_x3_g

0xdc0f,	// (0x0007f895) list_medium_line_x3_t1_ParamLimits

0xdc0f,	// (0x0007f895) list_medium_line_x3_t1

0xdc23,	// (0x0007f8a9) thumb_sp_fs_scroll_pane_g1

0xdc2c,	// (0x0007f8b2) thumb_sp_fs_scroll_pane_g2

0xdc35,	// (0x0007f8bb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc5d,	// (0x000818e3) thumb_sp_fs_scroll_pane_g

0xdc23,	// (0x0007f8a9) bg_sp_fs_scroll_pane_g1

0xdc2c,	// (0x0007f8b2) bg_sp_fs_scroll_pane_g2

0xdc35,	// (0x0007f8bb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc5d,	// (0x000818e3) bg_sp_fs_scroll_pane_g

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g1

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g2

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g3

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00080e8c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00080e8c) list_medium_line_x2_t3_g4_g

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g4_t1

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g4_t2

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00080e80) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00080e80) list_medium_line_x2_t3_g4_t

0x2079,	// (0x00073cff) list_medium_line_g2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_g2_g1

0x2079,	// (0x00073cff) list_medium_line_g2_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00080e87) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00080e87) list_medium_line_g2_g

0x2c1e,	// (0x000748a4) list_medium_line_g2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_g2_t1

0x2079,	// (0x00073cff) list_medium_line_t3_g2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t3_g2_g1

0x2079,	// (0x00073cff) list_medium_line_t3_g2_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00080e87) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00080e87) list_medium_line_t3_g2_g

0x2c1e,	// (0x000748a4) list_medium_line_t3_g2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_g2_t1

0x2c1e,	// (0x000748a4) list_medium_line_t3_g2_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_g2_t2

0x2c1e,	// (0x000748a4) list_medium_line_t3_g2_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00080e80) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00080e80) list_medium_line_t3_g2_t

0x2da2,	// (0x00074a28) list_medium_line_right_icon_g1

0x4538,	// (0x000761be) list_medium_line_right_icon_t1

0x2079,	// (0x00073cff) list_medium_line_t2_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t2_g1

0x2c1e,	// (0x000748a4) list_medium_line_t2_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t2_t1

0x2c1e,	// (0x000748a4) list_medium_line_t2_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x00080e5c) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x00080e5c) list_medium_line_t2_t

0x2079,	// (0x00073cff) list_medium_line_t3_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t3_g1

0x2c1e,	// (0x000748a4) list_medium_line_t3_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_t1

0x2c1e,	// (0x000748a4) list_medium_line_t3_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_t2

0x2c1e,	// (0x000748a4) list_medium_line_t3_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00080e80) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00080e80) list_medium_line_t3_t

0x2079,	// (0x00073cff) list_medium_line_g3_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_g3_g1

0x2079,	// (0x00073cff) list_medium_line_g3_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_g3_g2

0x2079,	// (0x00073cff) list_medium_line_g3_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00080e79) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00080e79) list_medium_line_g3_g

0x2c1e,	// (0x000748a4) list_medium_line_g3_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_g3_t1

0x2079,	// (0x00073cff) list_medium_line_t2_g3_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t2_g3_g1

0x2079,	// (0x00073cff) list_medium_line_t2_g3_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t2_g3_g2

0x2079,	// (0x00073cff) list_medium_line_t2_g3_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00080e79) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00080e79) list_medium_line_t2_g3_g

0x2c1e,	// (0x000748a4) list_medium_line_t2_g3_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t2_g3_t1

0x2c1e,	// (0x000748a4) list_medium_line_t2_g3_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x00080e5c) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x00080e5c) list_medium_line_t2_g3_t

0x2079,	// (0x00073cff) list_medium_line_t3_g3_g1_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t3_g3_g1

0x2079,	// (0x00073cff) list_medium_line_t3_g3_g2_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t3_g3_g2

0x2079,	// (0x00073cff) list_medium_line_t3_g3_g3_ParamLimits

0x2079,	// (0x00073cff) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00080e79) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00080e79) list_medium_line_t3_g3_g

0x2c1e,	// (0x000748a4) list_medium_line_t3_g3_t1_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_g3_t1

0x2c1e,	// (0x000748a4) list_medium_line_t3_g3_t2_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_g3_t2

0x2c1e,	// (0x000748a4) list_medium_line_t3_g3_t3_ParamLimits

0x2c1e,	// (0x000748a4) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00080e80) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00080e80) list_medium_line_t3_g3_t

0x2da2,	// (0x00074a28) list_medium_line_right_iconx2_g1

0x2da2,	// (0x00074a28) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0008105e) list_medium_line_right_iconx2_g

0x4538,	// (0x000761be) list_medium_line_right_iconx2_t1

0x2da2,	// (0x00074a28) list_medium_line_t2_right_iconx2_g1

0x2da2,	// (0x00074a28) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0008105e) list_medium_line_t2_right_iconx2_g

0x4538,	// (0x000761be) list_medium_line_t2_right_iconx2_t1

0x4538,	// (0x000761be) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc2a,	// (0x000818b0) list_medium_line_t2_right_iconx2_t

0x4538,	// (0x000761be) list_medium_line_x4_t4_t1

0x4538,	// (0x000761be) list_medium_line_x4_t4_t2

0x4538,	// (0x000761be) list_medium_line_x4_t4_t3

0x4538,	// (0x000761be) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x00080f49) list_medium_line_x4_t4_t

0x9681,	// (0x0007b307) tport_appsw_pane_ParamLimits

0x9681,	// (0x0007b307) tport_appsw_pane

0x9698,	// (0x0007b31e) tport_contact_pane_ParamLimits

0x9698,	// (0x0007b31e) tport_contact_pane

0x96b0,	// (0x0007b336) tport_listscroll_pane_ParamLimits

0x96b0,	// (0x0007b336) tport_listscroll_pane

0x96c4,	// (0x0007b34a) cell_tport_appsw_pane_ParamLimits

0x96c4,	// (0x0007b34a) cell_tport_appsw_pane

0xac75,	// (0x0007c8fb) tport_appsw_pane_g1_ParamLimits

0xac75,	// (0x0007c8fb) tport_appsw_pane_g1

0xdc3e,	// (0x0007f8c4) tport_contact_pane_g1

0xdc47,	// (0x0007f8cd) tport_contact_pane_t1

0xdc55,	// (0x0007f8db) tport_contact_pane_t2

0x0001,

0xfc64,	// (0x000818ea) tport_contact_pane_t

0xdc63,	// (0x0007f8e9) list_tport_pane

0xdc6c,	// (0x0007f8f2) scroll_pane_cp_030

0x970e,	// (0x0007b394) cell_tport_appsw_pane_g1

0x971e,	// (0x0007b3a4) cell_tport_appsw_pane_t1

0x972c,	// (0x0007b3b2) grid_highlight_pane_cp019

0x9734,	// (0x0007b3ba) list_tport_double_graphic_pane_ParamLimits

0x9734,	// (0x0007b3ba) list_tport_double_graphic_pane

0x18cb,	// (0x00073551) list_highlight_pane_cp023_ParamLimits

0x18cb,	// (0x00073551) list_highlight_pane_cp023

0x974b,	// (0x0007b3d1) list_tport_double_graphic_pane_g1_ParamLimits

0x974b,	// (0x0007b3d1) list_tport_double_graphic_pane_g1

0x9758,	// (0x0007b3de) list_tport_double_graphic_pane_t1_ParamLimits

0x9758,	// (0x0007b3de) list_tport_double_graphic_pane_t1

0x976d,	// (0x0007b3f3) list_tport_double_graphic_pane_t2_ParamLimits

0x976d,	// (0x0007b3f3) list_tport_double_graphic_pane_t2

0x0001,

0xfc70,	// (0x000818f6) list_tport_double_graphic_pane_t_ParamLimits

0xfc70,	// (0x000818f6) list_tport_double_graphic_pane_t

0x16a1,	// (0x00073327) main_cale_note_pane

0x7842,	// (0x000794c8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7842,	// (0x000794c8) cell_vitu2_function_top_wide_pane_cp01

0x8fe5,	// (0x0007ac6b) wait_bar_pane_cp05_ParamLimits

0x18cb,	// (0x00073551) listscroll_cmail_pane

0xdc75,	// (0x0007f8fb) list_cmail_pane

0x977f,	// (0x0007b405) list_cmail_body_pane

0x9796,	// (0x0007b41c) list_single_cmail_header_caption_pane

0xdc85,	// (0x0007f90b) list_single_cmail_header_detail_pane_ParamLimits

0xdc85,	// (0x0007f90b) list_single_cmail_header_detail_pane

0xdcb7,	// (0x0007f93d) list_single_cmail_header_caption_pane_t1

0x1427,	// (0x000730ad) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1427,	// (0x000730ad) list_single_cmail_header_detail_pane_g1

0xecfb,	// (0x00080981) list_single_cmail_header_detail_pane_g2_ParamLimits

0xecfb,	// (0x00080981) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc75,	// (0x000818fb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc75,	// (0x000818fb) list_single_cmail_header_detail_pane_g

0xdcdb,	// (0x0007f961) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdcdb,	// (0x0007f961) list_single_cmail_header_detail_pane_t1

0xdd3b,	// (0x0007f9c1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdd3b,	// (0x0007f9c1) list_single_cmail_header_editor_pane_bg

0xd77c,	// (0x0007f402) list_cmail_body_pane_g1

0xdd52,	// (0x0007f9d8) list_cmail_body_pane_t1

0xca69,	// (0x0007e6ef) list_single_cmail_header_editor_pane_bg_g1

0x3478,	// (0x000750fe) list_single_cmail_header_editor_pane_bg_g1_copy1

0xca79,	// (0x0007e6ff) list_single_cmail_header_editor_pane_bg_g1_copy2

0xca71,	// (0x0007e6f7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcca6,	// (0x0007e92c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xca99,	// (0x0007e71f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xca89,	// (0x0007e70f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xca91,	// (0x0007e717) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3458,	// (0x000750de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x97b3,	// (0x0007b439) calenote_gesture_pane_ParamLimits

0x97b3,	// (0x0007b439) calenote_gesture_pane

0x97d3,	// (0x0007b459) calenote_window_pane_ParamLimits

0x97d3,	// (0x0007b459) calenote_window_pane

0xdd60,	// (0x0007f9e6) popup_note_window_cp01

0x97ef,	// (0x0007b475) calenote_swipe_1_pane_ParamLimits

0x97ef,	// (0x0007b475) calenote_swipe_1_pane

0x950e,	// (0x0007b194) calenote_swipe_2_pane_ParamLimits

0x950e,	// (0x0007b194) calenote_swipe_2_pane

0xd9b0,	// (0x0007f636) calenote_swipe_1_pane_g1_ParamLimits

0xd9b0,	// (0x0007f636) calenote_swipe_1_pane_g1

0xd9bd,	// (0x0007f643) calenote_swipe_1_pane_g2_ParamLimits

0xd9bd,	// (0x0007f643) calenote_swipe_1_pane_g2

0x0001,

0xfc12,	// (0x00081898) calenote_swipe_1_pane_g_ParamLimits

0xfc12,	// (0x00081898) calenote_swipe_1_pane_g

0xdd72,	// (0x0007f9f8) calenote_swipe_1_pane_t1_ParamLimits

0xdd72,	// (0x0007f9f8) calenote_swipe_1_pane_t1

0xd9b0,	// (0x0007f636) calenote_swipe_2_pane_g1_ParamLimits

0xd9b0,	// (0x0007f636) calenote_swipe_2_pane_g1

0xdd91,	// (0x0007fa17) calenote_swipe_2_pane_g2_ParamLimits

0xdd91,	// (0x0007fa17) calenote_swipe_2_pane_g2

0x0001,

0xfc81,	// (0x00081907) calenote_swipe_2_pane_g_ParamLimits

0xfc81,	// (0x00081907) calenote_swipe_2_pane_g

0xdd9d,	// (0x0007fa23) calenote_swipe_2_pane_t1_ParamLimits

0xdd9d,	// (0x0007fa23) calenote_swipe_2_pane_t1

0x16a1,	// (0x00073327) main_mup_navstr_pane

0x66bc,	// (0x00078342) main_mup3_pane_t7_ParamLimits

0x66bc,	// (0x00078342) main_mup3_pane_t7

0xe8e7,	// (0x0008056d) main_mp4_pane_g6_ParamLimits

0xe8e7,	// (0x0008056d) main_mp4_pane_g6

0xeaa7,	// (0x0008072d) main_image3_pane_t4_ParamLimits

0xeaa7,	// (0x0008072d) main_image3_pane_t4

0x9804,	// (0x0007b48a) popup_navstr_preview_pane_ParamLimits

0x9804,	// (0x0007b48a) popup_navstr_preview_pane

0x9814,	// (0x0007b49a) scroll_navstr_pane_ParamLimits

0x9814,	// (0x0007b49a) scroll_navstr_pane

0x16a1,	// (0x00073327) bg_popup_preview_window_pane_cp04

0xddc4,	// (0x0007fa4a) popup_navstr_preview_pane_t1

0x9828,	// (0x0007b4ae) scroll_navstr_pane_g1_ParamLimits

0x9828,	// (0x0007b4ae) scroll_navstr_pane_g1

0x983c,	// (0x0007b4c2) scroll_navstr_pane_t1_ParamLimits

0x983c,	// (0x0007b4c2) scroll_navstr_pane_t1

0xdd69,	// (0x0007f9ef) bg_button_pane_cp014

0xdd69,	// (0x0007f9ef) bg_button_pane_cp030

0x11bc,	// (0x00072e42) list_double_fisheye_pane_g4_ParamLimits

0x11bc,	// (0x00072e42) list_double_fisheye_pane_g4

0x11c8,	// (0x00072e4e) list_double_fisheye_pane_g5_ParamLimits

0x11c8,	// (0x00072e4e) list_double_fisheye_pane_g5

0xab21,	// (0x0007c7a7) sp_fs_scroll_pane_cp03

0xdac9,	// (0x0007f74f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdad5,	// (0x0007f75b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc2f,	// (0x000818b5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x95bd,	// (0x0007b243) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdc7d,	// (0x0007f903) sp_fs_scroll_pane_cp02

0x251e,	// (0x000741a4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x251e,	// (0x000741a4) popup_sp_fs_calendar_preview_list_single_pane

0x16a1,	// (0x00073327) main_cam6_pano_pane

0x18cb,	// (0x00073551) main_mup3_pane_ParamLimits

0x16a1,	// (0x00073327) main_phacti_pane

0x8eb6,	// (0x0007ab3c) bg_button_pane_cp11

0x8ed0,	// (0x0007ab56) main_mobtv_info_pane_g2_ParamLimits

0x8ed0,	// (0x0007ab56) main_mobtv_info_pane_g2

0x0001,

0xfb8f,	// (0x00081815) main_mobtv_info_pane_g_ParamLimits

0xfb8f,	// (0x00081815) main_mobtv_info_pane_g

0x90ad,	// (0x0007ad33) sc_clock_pane_t5_ParamLimits

0x90ad,	// (0x0007ad33) sc_clock_pane_t5

0x92e1,	// (0x0007af67) main_radioblah_pane_g1_ParamLimits

0xd8e2,	// (0x0007f568) main_radioblah_pane_t3_ParamLimits

0xd8e2,	// (0x0007f568) main_radioblah_pane_t3

0xd8fa,	// (0x0007f580) main_radioblah_pane_t4_ParamLimits

0xd8fa,	// (0x0007f580) main_radioblah_pane_t4

0x9309,	// (0x0007af8f) main_radioblah_text_pane_ParamLimits

0x9309,	// (0x0007af8f) main_radioblah_text_pane

0x931b,	// (0x0007afa1) main_radioblah_info_pane_g1_ParamLimits

0x93b4,	// (0x0007b03a) main_radioblah_info_pane_t4_ParamLimits

0x93b4,	// (0x0007b03a) main_radioblah_info_pane_t4

0x18cb,	// (0x00073551) main_sp_fs_calendar_pane

0x9853,	// (0x0007b4d9) main_phacti_pane_g1

0x985b,	// (0x0007b4e1) phacti_note_pane_ParamLimits

0x985b,	// (0x0007b4e1) phacti_note_pane

0xdddb,	// (0x0007fa61) phacti_term_pane_ParamLimits

0xdddb,	// (0x0007fa61) phacti_term_pane

0xddf0,	// (0x0007fa76) phacti_note_pane_t1_ParamLimits

0xddf0,	// (0x0007fa76) phacti_note_pane_t1

0xde07,	// (0x0007fa8d) phacti_term_pane_g1

0xde0f,	// (0x0007fa95) phacti_term_pane_t1_ParamLimits

0xde0f,	// (0x0007fa95) phacti_term_pane_t1

0xde39,	// (0x0007fabf) popup_sp_fs_calendar_preview_list_single_pane_g1

0xde41,	// (0x0007fac7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc8b,	// (0x00081911) popup_sp_fs_calendar_preview_list_single_pane_g

0xde49,	// (0x0007facf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde49,	// (0x0007facf) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde5f,	// (0x0007fae5) aid_popup_sp_fs_bg_corner_pane

0x2da2,	// (0x00074a28) popup_sp_fs_calendar_preview_bg_pane_g1

0x16a1,	// (0x00073327) popup_sp_fs_calendar_preview_bg_pane

0xde67,	// (0x0007faed) popup_sp_fs_calendar_preview_list_pane

0xacab,	// (0x0007c931) bg_main_sp_fs_cale_pane_ParamLimits

0xacab,	// (0x0007c931) bg_main_sp_fs_cale_pane

0xde78,	// (0x0007fafe) listscroll_cale_mrui_pane_ParamLimits

0xde78,	// (0x0007fafe) listscroll_cale_mrui_pane

0xde8d,	// (0x0007fb13) listscroll_sp_fs_schedule_track_pane

0xde96,	// (0x0007fb1c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde96,	// (0x0007fb1c) main_sp_fs_ctrlbar_pane_cp01

0xdea9,	// (0x0007fb2f) main_sp_fs_ribbon_pane

0xdeb1,	// (0x0007fb37) popup_sp_fs_cale_preview_window

0x98d0,	// (0x0007b556) list_single_sp_fs_schedule_track_pane_ParamLimits

0x98d0,	// (0x0007b556) list_single_sp_fs_schedule_track_pane

0x18cb,	// (0x00073551) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x18cb,	// (0x00073551) bg_sp_fs_highlight_list_pane_cp03

0x98e4,	// (0x0007b56a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x98e4,	// (0x0007b56a) list_single_sp_fs_schedule_track_pane_g1

0x98f0,	// (0x0007b576) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x98f0,	// (0x0007b576) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc90,	// (0x00081916) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc90,	// (0x00081916) list_single_sp_fs_schedule_track_pane_g

0x98fc,	// (0x0007b582) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x98fc,	// (0x0007b582) list_single_sp_fs_schedule_track_pane_t1

0x991e,	// (0x0007b5a4) sp_fs_schedule_track_pane_ParamLimits

0x991e,	// (0x0007b5a4) sp_fs_schedule_track_pane

0xdec3,	// (0x0007fb49) sp_fs_schedule_track_pane_g1

0xdecb,	// (0x0007fb51) sp_fs_schedule_track_pane_g2

0xded3,	// (0x0007fb59) sp_fs_schedule_track_pane_g3

0xdedb,	// (0x0007fb61) sp_fs_schedule_track_pane_g4

0xdee3,	// (0x0007fb69) sp_fs_schedule_track_pane_g5

0x0004,

0xfc95,	// (0x0008191b) sp_fs_schedule_track_pane_g

0xca69,	// (0x0007e6ef) bg_sp_fs_schedule_viewer_highlight_g1

0x3478,	// (0x000750fe) bg_sp_fs_schedule_viewer_highlight_g2

0xca71,	// (0x0007e6f7) bg_sp_fs_schedule_viewer_highlight_g3

0xca79,	// (0x0007e6ff) bg_sp_fs_schedule_viewer_highlight_g4

0xcca6,	// (0x0007e92c) bg_sp_fs_schedule_viewer_highlight_g5

0xca89,	// (0x0007e70f) bg_sp_fs_schedule_viewer_highlight_g6

0xca91,	// (0x0007e717) bg_sp_fs_schedule_viewer_highlight_g7

0xca99,	// (0x0007e71f) bg_sp_fs_schedule_viewer_highlight_g8

0x3458,	// (0x000750de) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca0,	// (0x00081926) bg_sp_fs_schedule_viewer_highlight_g

0x16a1,	// (0x00073327) bg_main_sp_fs_ribbon_pane

0x9933,	// (0x0007b5b9) main_sp_fs_ribbon_pane_g1

0xdeeb,	// (0x0007fb71) main_sp_fs_ribbon_pane_t1

0x993c,	// (0x0007b5c2) main_sp_fs_ribbon_pane_t2

0xdefa,	// (0x0007fb80) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb3,	// (0x00081939) main_sp_fs_ribbon_pane_t

0xdf09,	// (0x0007fb8f) main_sp_fs_ribbon_scheduler_pane

0xdf11,	// (0x0007fb97) bg_main_sp_fs_ribbon_pane_g1

0xdf1a,	// (0x0007fba0) bg_main_sp_fs_ribbon_pane_g2

0xdf23,	// (0x0007fba9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcba,	// (0x00081940) bg_main_sp_fs_ribbon_pane_g

0xdf2b,	// (0x0007fbb1) main_sp_fs_ribbon_scheduler_pane_g1

0xdf34,	// (0x0007fbba) main_sp_fs_ribbon_scheduler_pane_g2

0xdf3d,	// (0x0007fbc3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc1,	// (0x00081947) main_sp_fs_ribbon_scheduler_pane_g

0xdf46,	// (0x0007fbcc) list_cale_mrui_pane

0x994b,	// (0x0007b5d1) sp_fs_scroll_pane_cp07_ParamLimits

0x994b,	// (0x0007b5d1) sp_fs_scroll_pane_cp07

0x9967,	// (0x0007b5ed) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9967,	// (0x0007b5ed) bg_sp_fs_schedule_viewer_highlight

0xdf53,	// (0x0007fbd9) list_single_sp_fs_schedule_track_pane_cp01

0xdf5b,	// (0x0007fbe1) list_sp_fs_schedule_track_pane

0xdf63,	// (0x0007fbe9) sp_fs_scroll_pane_cp06_ParamLimits

0xdf63,	// (0x0007fbe9) sp_fs_scroll_pane_cp06

0x2da2,	// (0x00074a28) bgmain_sp_fs_calendar_pane_g1

0x143f,	// (0x000730c5) list_single_cale_mrui_pane_ParamLimits

0x143f,	// (0x000730c5) list_single_cale_mrui_pane

0xdf75,	// (0x0007fbfb) list_single_cale_mrui_row_pane_ParamLimits

0xdf75,	// (0x0007fbfb) list_single_cale_mrui_row_pane

0xdf82,	// (0x0007fc08) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdf82,	// (0x0007fc08) list_single_cale_mrui_row_pane_g1

0xdfc7,	// (0x0007fc4d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdfc7,	// (0x0007fc4d) list_single_cale_mrui_row_pane_t1

0x145f,	// (0x000730e5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x145f,	// (0x000730e5) list_single_cale_mrui_row_pane_t2

0xdfd9,	// (0x0007fc5f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdfd9,	// (0x0007fc5f) list_single_cale_mrui_row_pane_t3

0xe008,	// (0x0007fc8e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe008,	// (0x0007fc8e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfccf,	// (0x00081955) list_single_cale_mrui_row_pane_t_ParamLimits

0xfccf,	// (0x00081955) list_single_cale_mrui_row_pane_t

0x14c5,	// (0x0007314b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x14c5,	// (0x0007314b) list_single_cmail_header_editor_pane_bg_cp01

0x14e9,	// (0x0007316f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x14e9,	// (0x0007316f) list_single_cmail_header_editor_pane_bg_cp02

0x9979,	// (0x0007b5ff) main_radioblah_text_pane_t1_ParamLimits

0x9979,	// (0x0007b5ff) main_radioblah_text_pane_t1

0xe039,	// (0x0007fcbf) cam6_indi_pane_cp01

0xe041,	// (0x0007fcc7) cam6_mode_pane_cp01

0xe049,	// (0x0007fccf) cam6_pano_pane

0xe052,	// (0x0007fcd8) cam6_zoom_pane_cp01

0xe05c,	// (0x0007fce2) cam6_pano_image_pane

0xe065,	// (0x0007fceb) cam6_pano_pane_g1

0xd77c,	// (0x0007f402) cam6_pano_pane_g2

0xe06e,	// (0x0007fcf4) cam6_pano_pane_g3

0xe077,	// (0x0007fcfd) cam6_pano_pane_g4

0xed87,	// (0x00080a0d) cam6_pano_pane_g5

0xe080,	// (0x0007fd06) cam6_pano_pane_g6

0xe088,	// (0x0007fd0e) cam6_pano_pane_g7

0xe090,	// (0x0007fd16) cam6_pano_pane_g8

0xe099,	// (0x0007fd1f) cam6_pano_pane_g9

0x0008,

0xfcd8,	// (0x0008195e) cam6_pano_pane_g

0x16a1,	// (0x00073327) main_browser_tag_pane

0xddbc,	// (0x0007fa42) grid_navstr_albumart_pane

0xe0a4,	// (0x0007fd2a) cell_navstr_albumart_pane_ParamLimits

0xe0a4,	// (0x0007fd2a) cell_navstr_albumart_pane

0xe0c0,	// (0x0007fd46) cell_navstr_albumart_pane_g1

0xbe8b,	// (0x0007db11) cell_navstr_albumart_pane_g2

0xbe9b,	// (0x0007db21) cell_navstr_albumart_pane_g3

0xbe93,	// (0x0007db19) cell_navstr_albumart_pane_g4

0x0003,

0xfceb,	// (0x00081971) cell_navstr_albumart_pane_g

0x9994,	// (0x0007b61a) bt_list_pane_ParamLimits

0x9994,	// (0x0007b61a) bt_list_pane

0x99aa,	// (0x0007b630) bt_list_pane_t1

0x99b9,	// (0x0007b63f) bt_list_pane_t2

0x0001,

0xfcf4,	// (0x0008197a) bt_list_pane_t

0x16a1,	// (0x00073327) main_cale_prevew_pane

0x99c8,	// (0x0007b64e) popup_cale_preview_window_ParamLimits

0x99c8,	// (0x0007b64e) popup_cale_preview_window

0x18cb,	// (0x00073551) bg_popup_preview_window_pane_cp05_ParamLimits

0x18cb,	// (0x00073551) bg_popup_preview_window_pane_cp05

0xe0c8,	// (0x0007fd4e) list_cale_preview_pane_ParamLimits

0xe0c8,	// (0x0007fd4e) list_cale_preview_pane

0x99e5,	// (0x0007b66b) list_double_cale_preview_pane_ParamLimits

0x99e5,	// (0x0007b66b) list_double_cale_preview_pane

0x99f9,	// (0x0007b67f) list_single_cale_preview_pane_ParamLimits

0x99f9,	// (0x0007b67f) list_single_cale_preview_pane

0x9a11,	// (0x0007b697) list_single_cale_preview_pane_g1

0x9a19,	// (0x0007b69f) list_single_cale_preview_pane_t1_ParamLimits

0x9a19,	// (0x0007b69f) list_single_cale_preview_pane_t1

0x9a2e,	// (0x0007b6b4) list_double_cale_preview_pane_g1

0x9a36,	// (0x0007b6bc) list_double_cale_preview_pane_t1_ParamLimits

0x9a36,	// (0x0007b6bc) list_double_cale_preview_pane_t1

0x9a4b,	// (0x0007b6d1) list_double_cale_preview_pane_t2_ParamLimits

0x9a4b,	// (0x0007b6d1) list_double_cale_preview_pane_t2

0x0001,

0xfcf9,	// (0x0008197f) list_double_cale_preview_pane_t_ParamLimits

0xfcf9,	// (0x0008197f) list_double_cale_preview_pane_t

0x16a1,	// (0x00073327) main_ezdial_pane

0x18cb,	// (0x00073551) main_sp_fs_email_pane_ParamLimits

0x9528,	// (0x0007b1ae) cmail_ddmenu_btn01_pane_ParamLimits

0x9528,	// (0x0007b1ae) cmail_ddmenu_btn01_pane

0x953b,	// (0x0007b1c1) cmail_ddmenu_btn02_pane_ParamLimits

0x953b,	// (0x0007b1c1) cmail_ddmenu_btn02_pane

0x955e,	// (0x0007b1e4) cmail_ddmenu_btn03_pane_ParamLimits

0x955e,	// (0x0007b1e4) cmail_ddmenu_btn03_pane

0x95fc,	// (0x0007b282) main_sp_fs_ctrlbar_pane_ParamLimits

0x9620,	// (0x0007b2a6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x977f,	// (0x0007b405) list_cmail_body_pane_ParamLimits

0xdcc5,	// (0x0007f94b) bg_button_pane_cp12

0xdcce,	// (0x0007f954) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdcce,	// (0x0007f954) list_single_cmail_header_detail_pane_g3

0xdd17,	// (0x0007f99d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdd17,	// (0x0007f99d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc7c,	// (0x00081902) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc7c,	// (0x00081902) list_single_cmail_header_detail_pane_t

0xde24,	// (0x0007faaa) phacti_term_pane_t2_ParamLimits

0xde24,	// (0x0007faaa) phacti_term_pane_t2

0x0001,

0xfc86,	// (0x0008190c) phacti_term_pane_t_ParamLimits

0xfc86,	// (0x0008190c) phacti_term_pane_t

0xe0d4,	// (0x0007fd5a) aid_size_list_single_double

0x9a63,	// (0x0007b6e9) popup_ezdial_listscroll_window

0x9a7f,	// (0x0007b705) popup_number_entry_window_cp01

0x2bb1,	// (0x00074837) bg_popup_call_pane_cp09

0xe0e0,	// (0x0007fd66) ezdial_list_pane

0xe0e8,	// (0x0007fd6e) scroll_pane_cp23

0xacab,	// (0x0007c931) bg_button_pane_cp028_ParamLimits

0xacab,	// (0x0007c931) bg_button_pane_cp028

0x9a8d,	// (0x0007b713) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9a8d,	// (0x0007b713) cmail_ddmenu_btn01_pane_g1

0x9a9c,	// (0x0007b722) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9a9c,	// (0x0007b722) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcfe,	// (0x00081984) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcfe,	// (0x00081984) cmail_ddmenu_btn01_pane_g

0xe0f0,	// (0x0007fd76) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe0f0,	// (0x0007fd76) cmail_ddmenu_btn01_pane_t1

0xacab,	// (0x0007c931) bg_button_pane_cp029_ParamLimits

0xacab,	// (0x0007c931) bg_button_pane_cp029

0x9ab2,	// (0x0007b738) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9ab2,	// (0x0007b738) cmail_ddmenu_btn02_pane_g1

0x9acd,	// (0x0007b753) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9acd,	// (0x0007b753) cmail_ddmenu_btn02_pane_t1

0x18cb,	// (0x00073551) bg_button_pane_cp031_ParamLimits

0x18cb,	// (0x00073551) bg_button_pane_cp031

0x9ab2,	// (0x0007b738) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9ab2,	// (0x0007b738) cmail_ddmenu_btn03_pane_g1

0x9acd,	// (0x0007b753) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9acd,	// (0x0007b753) cmail_ddmenu_btn03_pane_t1

0x704a,	// (0x00078cd0) cell_dialer2_keypad_pane_t1_ParamLimits

0x7064,	// (0x00078cea) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7064,	// (0x00078cea) cell_dialer2_keypad_pane_t1_copy1

0x8cd7,	// (0x0007a95d) ncimui_group_button_pane

0x18cb,	// (0x00073551) main_sp_fs_calendar_pane_ParamLimits

0x9796,	// (0x0007b41c) list_single_cmail_header_caption_pane_ParamLimits

0xde6f,	// (0x0007faf5) aid_recal_txt_sm_pane

0x16a1,	// (0x00073327) mian_recal_day_pane

0xdeb1,	// (0x0007fb37) popup_sp_fs_cale_preview_window_ParamLimits

0xe106,	// (0x0007fd8c) list_recal_day_pane

0xe149,	// (0x0007fdcf) list_single_recal_day_pane_ParamLimits

0xe149,	// (0x0007fdcf) list_single_recal_day_pane

0xe15b,	// (0x0007fde1) list_single_recal_day_pane_g1_ParamLimits

0xe15b,	// (0x0007fde1) list_single_recal_day_pane_g1

0xe167,	// (0x0007fded) list_single_recal_day_pane_g2_ParamLimits

0xe167,	// (0x0007fded) list_single_recal_day_pane_g2

0xe173,	// (0x0007fdf9) list_single_recal_day_pane_g3_ParamLimits

0xe173,	// (0x0007fdf9) list_single_recal_day_pane_g3

0x1509,	// (0x0007318f) list_single_recal_day_pane_g4_ParamLimits

0x1509,	// (0x0007318f) list_single_recal_day_pane_g4

0xe17f,	// (0x0007fe05) list_single_recal_day_pane_g5_ParamLimits

0xe17f,	// (0x0007fe05) list_single_recal_day_pane_g5

0xe18b,	// (0x0007fe11) list_single_recal_day_pane_g6_ParamLimits

0xe18b,	// (0x0007fe11) list_single_recal_day_pane_g6

0x0004,

0xfd0d,	// (0x00081993) list_single_recal_day_pane_g_ParamLimits

0xfd0d,	// (0x00081993) list_single_recal_day_pane_g

0xe19f,	// (0x0007fe25) list_single_recal_day_pane_t1

0xe1b1,	// (0x0007fe37) list_single_recal_day_pane_t2

0x0001,

0xfd18,	// (0x0008199e) list_single_recal_day_pane_t

0x9af4,	// (0x0007b77a) ncimui_query_button_pane_ParamLimits

0x9af4,	// (0x0007b77a) ncimui_query_button_pane

0x9b04,	// (0x0007b78a) ncimui_query_button_pane_t1_ParamLimits

0x9b04,	// (0x0007b78a) ncimui_query_button_pane_t1

0xe1c3,	// (0x0007fe49) ncimui_query_button_pane_t2_ParamLimits

0xe1c3,	// (0x0007fe49) ncimui_query_button_pane_t2

0x0001,

0xfd1d,	// (0x000819a3) ncimui_query_button_pane_t_ParamLimits

0xfd1d,	// (0x000819a3) ncimui_query_button_pane_t

0x9b17,	// (0x0007b79d) query_button_pane_ParamLimits

0x9b17,	// (0x0007b79d) query_button_pane

0x16a1,	// (0x00073327) bg_button_pane_cp0028

0xe1d6,	// (0x0007fe5c) query_button_pane_t1

0x5961,	// (0x000775e7) main_tport_pane_ParamLimits

0x9640,	// (0x0007b2c6) bg_popup_window_pane_cp01_ParamLimits

0x9640,	// (0x0007b2c6) bg_popup_window_pane_cp01

0x9659,	// (0x0007b2df) heading_pane_cp08_ParamLimits

0x9659,	// (0x0007b2df) heading_pane_cp08

0x966c,	// (0x0007b2f2) heading_pane_cp07_ParamLimits

0x966c,	// (0x0007b2f2) heading_pane_cp07

0x970e,	// (0x0007b394) cell_tport_appsw_pane_g2

0x0002,

0xfc69,	// (0x000818ef) cell_tport_appsw_pane_g

0xad48,	// (0x0007c9ce) input_candi_list_open_g1

0x4365,	// (0x00075feb) list_cale_time_pane_g6_ParamLimits

0x4365,	// (0x00075feb) list_cale_time_pane_g6

0x6003,	// (0x00077c89) aid_size_touch_calib_1_ParamLimits

0x6003,	// (0x00077c89) aid_size_touch_calib_1

0x6015,	// (0x00077c9b) aid_size_touch_calib_2_ParamLimits

0x6015,	// (0x00077c9b) aid_size_touch_calib_2

0x602d,	// (0x00077cb3) aid_size_touch_calib_3_ParamLimits

0x602d,	// (0x00077cb3) aid_size_touch_calib_3

0x604b,	// (0x00077cd1) aid_size_touch_calib_4_ParamLimits

0x604b,	// (0x00077cd1) aid_size_touch_calib_4

0x6063,	// (0x00077ce9) main_touch_calib_button_group_pane_ParamLimits

0x6063,	// (0x00077ce9) main_touch_calib_button_group_pane

0x607b,	// (0x00077d01) main_touch_calib_pane_g1_ParamLimits

0x608d,	// (0x00077d13) main_touch_calib_pane_g2_ParamLimits

0x609f,	// (0x00077d25) main_touch_calib_pane_g3_ParamLimits

0x60b1,	// (0x00077d37) main_touch_calib_pane_g4_ParamLimits

0xf6d9,	// (0x0008135f) main_touch_calib_pane_g_ParamLimits

0x60c3,	// (0x00077d49) main_touch_calib_pane_t1_ParamLimits

0x60dd,	// (0x00077d63) main_touch_calib_pane_t2_ParamLimits

0x60f7,	// (0x00077d7d) main_touch_calib_pane_t3_ParamLimits

0x610b,	// (0x00077d91) main_touch_calib_pane_t4_ParamLimits

0x6121,	// (0x00077da7) main_touch_calib_pane_t5_ParamLimits

0xf6e2,	// (0x00081368) main_touch_calib_pane_t_ParamLimits

0xc7e3,	// (0x0007e469) list_single_fp_cale_pane_g3_ParamLimits

0xc7e3,	// (0x0007e469) list_single_fp_cale_pane_g3

0x18cb,	// (0x00073551) bg_button_pane_cp012_ParamLimits

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp03_ParamLimits

0x804c,	// (0x00079cd2) cell_vitu2_function_top_pane_g1_ParamLimits

0x18cb,	// (0x00073551) bg_vkb2_func_pane_cp04_ParamLimits

0x8c62,	// (0x0007a8e8) main_ncimui_button_group_pane_ParamLimits

0x8c62,	// (0x0007a8e8) main_ncimui_button_group_pane

0x8cc2,	// (0x0007a948) main_ncimui_pane_t3_ParamLimits

0x8cc2,	// (0x0007a948) main_ncimui_pane_t3

0xddd2,	// (0x0007fa58) phacti_button_group_pane

0xe0d4,	// (0x0007fd5a) aid_size_list_single_double_ParamLimits

0x9a63,	// (0x0007b6e9) popup_ezdial_listscroll_window_ParamLimits

0x9a7f,	// (0x0007b705) popup_number_entry_window_cp01_ParamLimits

0x9b2a,	// (0x0007b7b0) phacti_button_pane_ParamLimits

0x9b2a,	// (0x0007b7b0) phacti_button_pane

0x16a1,	// (0x00073327) bg_button_pane_cp14

0xe1e4,	// (0x0007fe6a) phacti_button_pane_t1

0x9b3b,	// (0x0007b7c1) main_touch_calib_button_pane_ParamLimits

0x9b3b,	// (0x0007b7c1) main_touch_calib_button_pane

0x2253,	// (0x00073ed9) bg_button_pane_cp18_ParamLimits

0x2253,	// (0x00073ed9) bg_button_pane_cp18

0xe1f2,	// (0x0007fe78) main_touch_calib_button_pane_t1_ParamLimits

0xe1f2,	// (0x0007fe78) main_touch_calib_button_pane_t1

0xe208,	// (0x0007fe8e) main_touch_calib_button_pane_t2_ParamLimits

0xe208,	// (0x0007fe8e) main_touch_calib_button_pane_t2

0x0001,

0xfd22,	// (0x000819a8) main_touch_calib_button_pane_t_ParamLimits

0xfd22,	// (0x000819a8) main_touch_calib_button_pane_t

0x16a1,	// (0x00073327) cell_ncimui_button_pane

0x16a1,	// (0x00073327) bg_button_pane_cp032

0xe226,	// (0x0007feac) cell_ncimui_button_pane_t1

0xea85,	// (0x0008070b) image3_infobar_pane_ParamLimits

0xea85,	// (0x0008070b) image3_infobar_pane

0x90d9,	// (0x0007ad5f) fs_bigclock_status_pane_ParamLimits

0x90d9,	// (0x0007ad5f) fs_bigclock_status_pane

0x90e6,	// (0x0007ad6c) main_fs_bigclock_clock_pane_ParamLimits

0x90e6,	// (0x0007ad6c) main_fs_bigclock_clock_pane

0x9118,	// (0x0007ad9e) main_fs_bigclock_indi_pane_ParamLimits

0x9118,	// (0x0007ad9e) main_fs_bigclock_indi_pane

0x9158,	// (0x0007adde) main_fs_bigclock_swipe_pane_ParamLimits

0x9158,	// (0x0007adde) main_fs_bigclock_swipe_pane

0x16a1,	// (0x00073327) main_fs_clock_dumped_data

0x91a4,	// (0x0007ae2a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x91a4,	// (0x0007ae2a) list_single_fs_bigclock_indicator_pane_g1

0x91bd,	// (0x0007ae43) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x91bd,	// (0x0007ae43) list_single_fs_bigclock_indicator_pane_g2

0x91d7,	// (0x0007ae5d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x91d7,	// (0x0007ae5d) list_single_fs_bigclock_indicator_pane_g3

0x91f1,	// (0x0007ae77) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x91f1,	// (0x0007ae77) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc3,	// (0x00081849) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc3,	// (0x00081849) list_single_fs_bigclock_indicator_pane_g

0x9220,	// (0x0007aea6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x9220,	// (0x0007aea6) list_single_fs_bigclock_indicator_pane_t1

0x9248,	// (0x0007aece) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9248,	// (0x0007aece) list_single_fs_bigclock_indicator_pane_t2

0x9270,	// (0x0007aef6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9270,	// (0x0007aef6) list_single_fs_bigclock_indicator_pane_t3

0x9298,	// (0x0007af1e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9298,	// (0x0007af1e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbce,	// (0x00081854) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbce,	// (0x00081854) list_single_fs_bigclock_indicator_pane_t

0xe234,	// (0x0007feba) image3_infobar_fav_pane_ParamLimits

0xe234,	// (0x0007feba) image3_infobar_fav_pane

0xe244,	// (0x0007feca) image3_infobar_loc_pane_ParamLimits

0xe244,	// (0x0007feca) image3_infobar_loc_pane

0xe25a,	// (0x0007fee0) image3_infobar_time_pane_ParamLimits

0xe25a,	// (0x0007fee0) image3_infobar_time_pane

0x2da2,	// (0x00074a28) image3_infobar_time_pane_g1

0xe26a,	// (0x0007fef0) image3_infobar_time_pane_t1

0x2da2,	// (0x00074a28) image3_infobar_loc_pane_g1

0xe278,	// (0x0007fefe) image3_infobar_loc_pane_g2

0x0001,

0xfd27,	// (0x000819ad) image3_infobar_loc_pane_g

0xe280,	// (0x0007ff06) image3_infobar_loc_pane_t1

0x2da2,	// (0x00074a28) image3_infobar_fav_pane_g1

0xe28e,	// (0x0007ff14) image3_infobar_fav_pane_g2

0x0001,

0xfd2c,	// (0x000819b2) image3_infobar_fav_pane_g

0xe296,	// (0x0007ff1c) fs_bigclock_status_battery_pane

0xe29f,	// (0x0007ff25) fs_bigclock_status_signal_pane

0xe2a8,	// (0x0007ff2e) fs_bigclock_status_title_pane

0xe2b1,	// (0x0007ff37) fs_bigclock_status_signal_pane_g1

0xe2ba,	// (0x0007ff40) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd31,	// (0x000819b7) fs_bigclock_status_signal_pane_g

0xe2c2,	// (0x0007ff48) fs_bigclock_status_battery_pane_g1

0xe2cb,	// (0x0007ff51) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd36,	// (0x000819bc) fs_bigclock_status_battery_pane_g

0xe2d3,	// (0x0007ff59) fs_bigclock_status_title_pane_t1

0x9b50,	// (0x0007b7d6) main_fs_bigclock_clock_pane_g1

0x9b50,	// (0x0007b7d6) main_fs_bigclock_clock_pane_g2

0x9b63,	// (0x0007b7e9) main_fs_bigclock_clock_pane_g3

0x9b63,	// (0x0007b7e9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd3b,	// (0x000819c1) main_fs_bigclock_clock_pane_g

0x9b7a,	// (0x0007b800) main_fs_bigclock_clock_pane_t1

0x9b90,	// (0x0007b816) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd44,	// (0x000819ca) main_fs_bigclock_clock_pane_t

0xe2e1,	// (0x0007ff67) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe2e1,	// (0x0007ff67) list_single_fs_bigclock_indicator_pane

0xe2f2,	// (0x0007ff78) list_single_fs_bigclock_pane_ParamLimits

0xe2f2,	// (0x0007ff78) list_single_fs_bigclock_pane

0xe318,	// (0x0007ff9e) main_fs_bigclock_indicator_pane_t1

0xe327,	// (0x0007ffad) list_single_fs_bigclock_pane_g1

0xe32f,	// (0x0007ffb5) list_single_fs_bigclock_pane_t1

0x2da2,	// (0x00074a28) main_fs_bigclock_swipe_pane_g1

0xe372,	// (0x0007fff8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd55,	// (0x000819db) main_fs_bigclock_swipe_pane_g

0xe37a,	// (0x00080000) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe37a,	// (0x00080000) main_fs_bigclock_swipe_pane_t1

0x4656,	// (0x000762dc) call_type_pane_ParamLimits

0x16a1,	// (0x00073327) main_btmg_pane

0xdfae,	// (0x0007fc34) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdfae,	// (0x0007fc34) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcc8,	// (0x0008194e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcc8,	// (0x0008194e) list_single_cale_mrui_row_pane_g

0xe12f,	// (0x0007fdb5) list_recal_vselct_arw_lo_pane

0xe137,	// (0x0007fdbd) list_recal_vselct_arw_up_pane

0xe13f,	// (0x0007fdc5) list_recal_vselct_pane

0x9bf2,	// (0x0007b878) btmg_button_pane

0x9bfc,	// (0x0007b882) main_btmg_pane_g1

0x16a1,	// (0x00073327) bg_button_pane_cp044

0xe397,	// (0x0008001d) btmg_button_pane_t1

0xbfdd,	// (0x0007dc63) aid_listscroll_gen

0x18cb,	// (0x00073551) main_cntbar_detail_pane

0xdc75,	// (0x0007f8fb) list_cmail_folder_pane

0xab21,	// (0x0007c7a7) sp_fs_scroll_pane_cp03_ParamLimits

0x1521,	// (0x000731a7) list_single_fs_dyc_pane_cp01_ParamLimits

0x1521,	// (0x000731a7) list_single_fs_dyc_pane_cp01

0xe3a5,	// (0x0008002b) aid_size_cmail_indent

0xe3ae,	// (0x00080034) list_single_dyc_row_pane_cp01

0x9c3a,	// (0x0007b8c0) cntbar_detail_list_pane_ParamLimits

0x9c3a,	// (0x0007b8c0) cntbar_detail_list_pane

0x9c8c,	// (0x0007b912) main_cntbar_detail_cont_pane_ParamLimits

0x9c8c,	// (0x0007b912) main_cntbar_detail_cont_pane

0xab21,	// (0x0007c7a7) scroll_pane_cp032_ParamLimits

0xab21,	// (0x0007c7a7) scroll_pane_cp032

0x9ca0,	// (0x0007b926) cntbar_detail_list_event_pane_ParamLimits

0x9ca0,	// (0x0007b926) cntbar_detail_list_event_pane

0x9c4c,	// (0x0007b8d2) cntbar_detail_list_shct_pane

0x34d0,	// (0x00075156) aid_list_gen

0xe3b7,	// (0x0008003d) aid_scroll

0xe3c0,	// (0x00080046) aid_size_touch_scroll_bar

0x9431,	// (0x0007b0b7) aid_list_double

0x9cb0,	// (0x0007b936) aid_list_single

0x9cb0,	// (0x0007b936) aid_list_single_lg

0x153b,	// (0x000731c1) aid_list_z_g_a_sm

0x1543,	// (0x000731c9) aid_list_z_g_d

0x154b,	// (0x000731d1) aid_txt_z_prm

0x1559,	// (0x000731df) aid_txt_z_prm_cp01

0x1567,	// (0x000731ed) aid_txt_z_sec

0x9cb9,	// (0x0007b93f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9cb9,	// (0x0007b93f) main_cntbar_detail_cont_pane_g1

0x9ccd,	// (0x0007b953) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9ccd,	// (0x0007b953) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd5a,	// (0x000819e0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd5a,	// (0x000819e0) main_cntbar_detail_cont_pane_g

0xe3c9,	// (0x0008004f) main_cntbar_detail_cont_pane_t1

0xe3d7,	// (0x0008005d) main_cntbar_detail_cont_pane_t2

0xe3e5,	// (0x0008006b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd5f,	// (0x000819e5) main_cntbar_detail_cont_pane_t

0x9cdd,	// (0x0007b963) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9cdd,	// (0x0007b963) cell_cntbar_detail_list_shct_pane

0xe3f3,	// (0x00080079) cntbar_detail_list_shct_pane_g1

0xe3fc,	// (0x00080082) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd66,	// (0x000819ec) cntbar_detail_list_shct_pane_g

0x9cef,	// (0x0007b975) cntbar_detail_list_event_pane_g1_ParamLimits

0x9cef,	// (0x0007b975) cntbar_detail_list_event_pane_g1

0x9cfb,	// (0x0007b981) cntbar_detail_list_event_pane_g2_ParamLimits

0x9cfb,	// (0x0007b981) cntbar_detail_list_event_pane_g2

0x0005,

0xfd6b,	// (0x000819f1) cntbar_detail_list_event_pane_g_ParamLimits

0xfd6b,	// (0x000819f1) cntbar_detail_list_event_pane_g

0x9d69,	// (0x0007b9ef) cntbar_detail_list_event_pane_t1_ParamLimits

0x9d69,	// (0x0007b9ef) cntbar_detail_list_event_pane_t1

0x9d7e,	// (0x0007ba04) cntbar_detail_list_event_pane_t2_ParamLimits

0x9d7e,	// (0x0007ba04) cntbar_detail_list_event_pane_t2

0x0002,

0xfd78,	// (0x000819fe) cntbar_detail_list_event_pane_t_ParamLimits

0xfd78,	// (0x000819fe) cntbar_detail_list_event_pane_t

0x2da2,	// (0x00074a28) cell_cntbar_detail_list_shct_pane_g1

0x4c6f,	// (0x000768f5) navi_pane_mv_g3

0x18cb,	// (0x00073551) main_cntbar_detail_pane_ParamLimits

0x16a1,	// (0x00073327) main_notif_wgt_pane

0xe875,	// (0x000804fb) aid_tch_main_mp4_pane_g4

0xea7d,	// (0x00080703) popup_slider_window_cp02

0xe125,	// (0x0007fdab) list_recal_day_event_pane

0x9c06,	// (0x0007b88c) cntbar_detail_btn_pane_ParamLimits

0x9c06,	// (0x0007b88c) cntbar_detail_btn_pane

0x9c1f,	// (0x0007b8a5) cntbar_detail_btn_pane_cp01_ParamLimits

0x9c1f,	// (0x0007b8a5) cntbar_detail_btn_pane_cp01

0x9c4c,	// (0x0007b8d2) cntbar_detail_list_shct_pane_ParamLimits

0x9c5c,	// (0x0007b8e2) cntbar_detail_pane_g1_ParamLimits

0x9c5c,	// (0x0007b8e2) cntbar_detail_pane_g1

0x9c70,	// (0x0007b8f6) cntbar_detail_pane_t1_ParamLimits

0x9c70,	// (0x0007b8f6) cntbar_detail_pane_t1

0x9d07,	// (0x0007b98d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9d07,	// (0x0007b98d) cntbar_detail_list_event_pane_g3

0x9d1f,	// (0x0007b9a5) cntbar_detail_list_event_pane_g4_ParamLimits

0x9d1f,	// (0x0007b9a5) cntbar_detail_list_event_pane_g4

0x9d37,	// (0x0007b9bd) cntbar_detail_list_event_pane_g5_ParamLimits

0x9d37,	// (0x0007b9bd) cntbar_detail_list_event_pane_g5

0x9d4f,	// (0x0007b9d5) cntbar_detail_list_event_pane_g6_ParamLimits

0x9d4f,	// (0x0007b9d5) cntbar_detail_list_event_pane_g6

0x9d93,	// (0x0007ba19) cntbar_detail_list_event_pane_t3_ParamLimits

0x9d93,	// (0x0007ba19) cntbar_detail_list_event_pane_t3

0x9da5,	// (0x0007ba2b) popup_notif_wgt_window_ParamLimits

0x9da5,	// (0x0007ba2b) popup_notif_wgt_window

0x9dbe,	// (0x0007ba44) popup_submenu_window_cp01_ParamLimits

0x9dbe,	// (0x0007ba44) popup_submenu_window_cp01

0x2bb1,	// (0x00074837) bg_popup_window_pane_cp10

0xe405,	// (0x0008008b) listscroll_notif_wgt_pane

0xe417,	// (0x0008009d) list_notif_wgt_window

0xe420,	// (0x000800a6) scroll_pane_cp033

0x9dd2,	// (0x0007ba58) list_notif_wgt_row_pane_ParamLimits

0x9dd2,	// (0x0007ba58) list_notif_wgt_row_pane

0xe429,	// (0x000800af) aid_size_list_notif_wgt_del

0xe436,	// (0x000800bc) list_notif_wgt_row_pane_g1

0xe442,	// (0x000800c8) list_notif_wgt_row_pane_g2

0xe451,	// (0x000800d7) list_notif_wgt_row_pane_g3

0x0002,

0xfd7f,	// (0x00081a05) list_notif_wgt_row_pane_g

0xe45e,	// (0x000800e4) list_notif_wgt_row_pane_t1

0xe474,	// (0x000800fa) list_notif_wgt_row_pane_t2

0xe486,	// (0x0008010c) list_notif_wgt_row_pane_t3

0x0002,

0xfd86,	// (0x00081a0c) list_notif_wgt_row_pane_t

0xccae,	// (0x0007e934) list_recal_day_event_pane_g1

0xe498,	// (0x0008011e) list_recal_day_event_pane_t1

0x16a1,	// (0x00073327) bg_button_pane_cp045

0x9de2,	// (0x0007ba68) cntbar_detail_btn_pane_t1

0xacab,	// (0x0007c931) main_callh_pane_ParamLimits

0xacab,	// (0x0007c931) main_callh_pane

0x16a1,	// (0x00073327) main_coverflow0_pane

0x16a1,	// (0x00073327) main_wgtman_pane

0x9179,	// (0x0007adff) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9179,	// (0x0007adff) main_fs_bigclock_unlock_btn_pane

0x9706,	// (0x0007b38c) bg_button_pane_cp16

0x9716,	// (0x0007b39c) cell_tport_appsw_pane_g3

0x9df0,	// (0x0007ba76) cf0_flow_pane_ParamLimits

0x9df0,	// (0x0007ba76) cf0_flow_pane

0xe4a7,	// (0x0008012d) listscroll_cf0_pane

0xe4b2,	// (0x00080138) main_cf0_pane_g1

0x9e05,	// (0x0007ba8b) main_cf0_pane_t1_ParamLimits

0x9e05,	// (0x0007ba8b) main_cf0_pane_t1

0x9e1c,	// (0x0007baa2) main_cf0_pane_t2_ParamLimits

0x9e1c,	// (0x0007baa2) main_cf0_pane_t2

0x0001,

0xfd92,	// (0x00081a18) main_cf0_pane_t_ParamLimits

0xfd92,	// (0x00081a18) main_cf0_pane_t

0xe4c4,	// (0x0008014a) scroll_pane_cp11

0x9e33,	// (0x0007bab9) cf0_flow_pane_g1

0x9e3f,	// (0x0007bac5) cf0_flow_pane_g2

0x0001,

0xfd97,	// (0x00081a1d) cf0_flow_pane_g

0x9e4b,	// (0x0007bad1) cf0_flow_pane_t1

0x16a1,	// (0x00073327) main_call6_pane

0x16a1,	// (0x00073327) main_calllock_pane

0x9e5d,	// (0x0007bae3) call6_btn_grp_pane_ParamLimits

0x9e5d,	// (0x0007bae3) call6_btn_grp_pane

0x9e77,	// (0x0007bafd) call6_pane_g1_ParamLimits

0x9e77,	// (0x0007bafd) call6_pane_g1

0x9e90,	// (0x0007bb16) popup_call6_1st_window_ParamLimits

0x9e90,	// (0x0007bb16) popup_call6_1st_window

0x9ea4,	// (0x0007bb2a) popup_call6_2nd_window_ParamLimits

0x9ea4,	// (0x0007bb2a) popup_call6_2nd_window

0x9eb8,	// (0x0007bb3e) cell_call6_btn_pane_ParamLimits

0x9eb8,	// (0x0007bb3e) cell_call6_btn_pane

0x2bb1,	// (0x00074837) bg_popup_call2_in_pane_cp03

0xe4cf,	// (0x00080155) popup_call6_1st_window_g1

0xe4d7,	// (0x0008015d) popup_call6_1st_window_g2

0xe4df,	// (0x00080165) popup_call6_1st_window_g3

0x0002,

0xfd9c,	// (0x00081a22) popup_call6_1st_window_g

0xe4e7,	// (0x0008016d) popup_call6_1st_window_t1

0xe4f6,	// (0x0008017c) popup_call6_1st_window_t2

0xe506,	// (0x0008018c) popup_call6_1st_window_t3

0x0002,

0xfda3,	// (0x00081a29) popup_call6_1st_window_t

0x2bb1,	// (0x00074837) bg_popup_call2_in_pane_cp04

0xe516,	// (0x0008019c) popup_call6_2nd_window_g1

0xe51e,	// (0x000801a4) popup_call6_2nd_window_g2

0xe526,	// (0x000801ac) popup_call6_2nd_window_g3

0x0002,

0xfdaa,	// (0x00081a30) popup_call6_2nd_window_g

0xe52e,	// (0x000801b4) popup_call6_2nd_window_t1

0x16a1,	// (0x00073327) bg_button_pane_cp15

0xe53d,	// (0x000801c3) cell_call6_btn_pane_g1

0xed07,	// (0x0008098d) cell_call6_btn_pane_t1

0x9ecc,	// (0x0007bb52) listscroll_wgtman_pane_ParamLimits

0x9ecc,	// (0x0007bb52) listscroll_wgtman_pane

0x9eed,	// (0x0007bb73) wgtman_btn_pane_ParamLimits

0x9eed,	// (0x0007bb73) wgtman_btn_pane

0x4882,	// (0x00076508) aid_scroll_copy1

0xe546,	// (0x000801cc) list_wgtman_pane

0x9f30,	// (0x0007bbb6) wgtman_btn_pane_g1_ParamLimits

0x9f30,	// (0x0007bbb6) wgtman_btn_pane_g1

0x9f5c,	// (0x0007bbe2) wgtman_btn_pane_t1_ParamLimits

0x9f5c,	// (0x0007bbe2) wgtman_btn_pane_t1

0xe550,	// (0x000801d6) wgtman_btn_pane_t2_ParamLimits

0xe550,	// (0x000801d6) wgtman_btn_pane_t2

0x0001,

0xfdb1,	// (0x00081a37) wgtman_btn_pane_t_ParamLimits

0xfdb1,	// (0x00081a37) wgtman_btn_pane_t

0x9f99,	// (0x0007bc1f) listrow_wgtman_pane_ParamLimits

0x9f99,	// (0x0007bc1f) listrow_wgtman_pane

0x9fad,	// (0x0007bc33) listrow_wgtman_pane_g1

0x9fba,	// (0x0007bc40) listrow_wgtman_pane_g2

0x0001,

0xfdb6,	// (0x00081a3c) listrow_wgtman_pane_g

0x1575,	// (0x000731fb) listrow_wgtman_pane_t1

0x158d,	// (0x00073213) listrow_wgtman_pane_t2

0x0001,

0xfdbb,	// (0x00081a41) listrow_wgtman_pane_t

0x15b3,	// (0x00073239) wait_bar_pane_cp09

0xe567,	// (0x000801ed) main_calllock_btn_pane

0xe571,	// (0x000801f7) main_calllock_pane_g1

0x16a1,	// (0x00073327) bg_button_pane_cp17

0xe53d,	// (0x000801c3) main_calllock_btn_pane_g1

0xe57d,	// (0x00080203) main_calllock_btn_pane_t1

0x16a1,	// (0x00073327) main_dialer3_pane

0x16a1,	// (0x00073327) main_fmrd2_pane

0x2da2,	// (0x00074a28) main_fs_bigclock_unlock_btn_pane_g1

0x9fe0,	// (0x0007bc66) main_fs_bigclock_unlock_btn_pane_t1

0x9fee,	// (0x0007bc74) area_fmrd2_info_pane_ParamLimits

0x9fee,	// (0x0007bc74) area_fmrd2_info_pane

0x9fff,	// (0x0007bc85) area_fmrd2_visual_pane_ParamLimits

0x9fff,	// (0x0007bc85) area_fmrd2_visual_pane

0xa00d,	// (0x0007bc93) fmrd2_indi_pane_ParamLimits

0xa00d,	// (0x0007bc93) fmrd2_indi_pane

0xa01a,	// (0x0007bca0) area_fmrd2_visual_pane_g1

0xa022,	// (0x0007bca8) area_fmrd2_visual_pane_t1

0xa032,	// (0x0007bcb8) area_fmrd2_visual_pane_t2

0xa042,	// (0x0007bcc8) area_fmrd2_visual_pane_t3

0x0002,

0xfdc5,	// (0x00081a4b) area_fmrd2_visual_pane_t

0xa052,	// (0x0007bcd8) area_fmrd2_info_pane_g1

0xa05a,	// (0x0007bce0) area_fmrd2_info_pane_t1

0xa06a,	// (0x0007bcf0) area_fmrd2_info_pane_t2

0xa07a,	// (0x0007bd00) area_fmrd2_info_pane_t3

0xa08a,	// (0x0007bd10) area_fmrd2_info_pane_t4

0x0003,

0xfdcc,	// (0x00081a52) area_fmrd2_info_pane_t

0xa09a,	// (0x0007bd20) fmrd2_indi_pane_t1

0xa0aa,	// (0x0007bd30) fmrd2_indi_pane_t2

0xa0ba,	// (0x0007bd40) fmrd2_indi_pane_t3

0x0002,

0xfdd5,	// (0x00081a5b) fmrd2_indi_pane_t

0x9202,	// (0x0007ae88) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9202,	// (0x0007ae88) list_single_fs_bigclock_indicator_pane_g5

0x92b7,	// (0x0007af3d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x92b7,	// (0x0007af3d) list_single_fs_bigclock_indicator_pane_t5

0x986f,	// (0x0007b4f5) aid_cell_bcale_month_pane_ParamLimits

0x986f,	// (0x0007b4f5) aid_cell_bcale_month_pane

0x988d,	// (0x0007b513) bcale_month_pane_ParamLimits

0x988d,	// (0x0007b513) bcale_month_pane

0x98b1,	// (0x0007b537) bcale_preview_pane_ParamLimits

0x98b1,	// (0x0007b537) bcale_preview_pane

0xe32f,	// (0x0007ffb5) list_single_fs_bigclock_pane_t1_ParamLimits

0xe34e,	// (0x0007ffd4) list_single_fs_bigclock_pane_t2_ParamLimits

0xe34e,	// (0x0007ffd4) list_single_fs_bigclock_pane_t2

0x0001,

0xfd50,	// (0x000819d6) list_single_fs_bigclock_pane_t_ParamLimits

0xfd50,	// (0x000819d6) list_single_fs_bigclock_pane_t

0x9fd8,	// (0x0007bc5e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc0,	// (0x00081a46) main_fs_bigclock_unlock_btn_pane_g

0xa0ca,	// (0x0007bd50) aid_dia3_key_size_ParamLimits

0xa0ca,	// (0x0007bd50) aid_dia3_key_size

0xa0de,	// (0x0007bd64) aid_dia3_listrow_size_ParamLimits

0xa0de,	// (0x0007bd64) aid_dia3_listrow_size

0xa0f8,	// (0x0007bd7e) dia3_keypad_fun_pane_ParamLimits

0xa0f8,	// (0x0007bd7e) dia3_keypad_fun_pane

0xa112,	// (0x0007bd98) dia3_keypad_num_pane_ParamLimits

0xa112,	// (0x0007bd98) dia3_keypad_num_pane

0xa12c,	// (0x0007bdb2) dia3_listscroll_pane_ParamLimits

0xa12c,	// (0x0007bdb2) dia3_listscroll_pane

0xa142,	// (0x0007bdc8) dia3_numentry_pane_ParamLimits

0xa142,	// (0x0007bdc8) dia3_numentry_pane

0xe58c,	// (0x00080212) dia3_list_pane

0xa15c,	// (0x0007bde2) scroll_pane_cp12

0x16a1,	// (0x00073327) bg_dia3_numentry_pane

0xa167,	// (0x0007bded) dia3_numentry_pane_t1

0xa176,	// (0x0007bdfc) cell_dia3_key_num_pane

0xa17e,	// (0x0007be04) cell_dia3_key0_fun_pane_ParamLimits

0xa17e,	// (0x0007be04) cell_dia3_key0_fun_pane

0xa192,	// (0x0007be18) cell_dia3_key1_fun_pane_ParamLimits

0xa192,	// (0x0007be18) cell_dia3_key1_fun_pane

0xa1a7,	// (0x0007be2d) dia3_listrow_pane

0xd638,	// (0x0007f2be) bg_dia3_numentry_pane_g1

0x16a1,	// (0x00073327) bg_button_pane_cp21

0xa1b9,	// (0x0007be3f) cell_dia3_key_num_pane_t1

0xa1c7,	// (0x0007be4d) cell_dia3_key_num_pane_t2

0xa1c7,	// (0x0007be4d) cell_dia3_key_num_pane_t3

0xa1c7,	// (0x0007be4d) cell_dia3_key_num_pane_t4

0x0003,

0xfddc,	// (0x00081a62) cell_dia3_key_num_pane_t

0x16a1,	// (0x00073327) bg_button_pane_cp19

0xa1d6,	// (0x0007be5c) cell_dia3_key0_fun_pane_g1

0x16a1,	// (0x00073327) bg_button_pane_cp20

0xa1de,	// (0x0007be64) cell_dia3_key1_fun_pane_g1

0xa1e6,	// (0x0007be6c) area_left_week_number_pane

0xa1f4,	// (0x0007be7a) area_top_day_name_pane

0xa207,	// (0x0007be8d) frame_month_view_pane

0xe597,	// (0x0008021d) grid_month_view_pane

0xa21c,	// (0x0007bea2) cell_top_day_name_pane_ParamLimits

0xa21c,	// (0x0007bea2) cell_top_day_name_pane

0xa24b,	// (0x0007bed1) cell_area_left_week_number_pane_ParamLimits

0xa24b,	// (0x0007bed1) cell_area_left_week_number_pane

0xa261,	// (0x0007bee7) cell_month_view_pane_ParamLimits

0xa261,	// (0x0007bee7) cell_month_view_pane

0xe5a5,	// (0x0008022b) frm_month_g1

0xa292,	// (0x0007bf18) frm_month_g2

0xa2a5,	// (0x0007bf2b) frm_month_g3

0xa2b8,	// (0x0007bf3e) frm_month_g4

0xa2cb,	// (0x0007bf51) frm_month_g5

0xa2de,	// (0x0007bf64) frm_month_g6

0xa2f3,	// (0x0007bf79) frm_month_g7

0xe5b2,	// (0x00080238) frm_month_g8

0xa308,	// (0x0007bf8e) frm_month_g9

0xa318,	// (0x0007bf9e) frm_month_g10

0xa328,	// (0x0007bfae) frm_month_g11

0xa338,	// (0x0007bfbe) frm_month_g12

0xa34a,	// (0x0007bfd0) frm_month_g13

0xa35e,	// (0x0007bfe4) frm_month_g14

0xa372,	// (0x0007bff8) frm_month_g15

0xa386,	// (0x0007c00c) frm_month_g16

0x000f,

0xfde5,	// (0x00081a6b) frm_month_g

0xe5bf,	// (0x00080245) cell_top_day_name_pane_t1

0xa39a,	// (0x0007c020) cell_area_left_week_number_pane_g1

0xa3a6,	// (0x0007c02c) cell_area_left_week_number_pane_t1

0x2079,	// (0x00073cff) cell_month_view_pane_g1

0xa3b9,	// (0x0007c03f) cell_month_view_pane_t1

0x16a1,	// (0x00073327) main_fps_pane

0xda8f,	// (0x0007f715) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xda8f,	// (0x0007f715) cmail_ddmenu_btn02_pane_cp1

0xdaab,	// (0x0007f731) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdaab,	// (0x0007f731) cmail_ddmenu_btn02_pane_cp2

0x9ac1,	// (0x0007b747) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9ac1,	// (0x0007b747) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd03,	// (0x00081989) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd03,	// (0x00081989) cmail_ddmenu_btn02_pane_g

0x9ae2,	// (0x0007b768) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9ae2,	// (0x0007b768) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd08,	// (0x0008198e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd08,	// (0x0008198e) cmail_ddmenu_btn02_pane_t

0xa3cc,	// (0x0007c052) fps_text_pane_ParamLimits

0xa3cc,	// (0x0007c052) fps_text_pane

0xa3e3,	// (0x0007c069) main_fps_pane_g1_ParamLimits

0xa3e3,	// (0x0007c069) main_fps_pane_g1

0xa3fb,	// (0x0007c081) wait_bar_pane_cp010_ParamLimits

0xa3fb,	// (0x0007c081) wait_bar_pane_cp010

0xa40e,	// (0x0007c094) fps_text_pane_t1_ParamLimits

0xa40e,	// (0x0007c094) fps_text_pane_t1

0xf071,	// (0x00080cf7) cam4_image_uncrop_pane_g1

0xf07a,	// (0x00080d00) cam4_image_uncrop_pane_g2

0x758e,	// (0x00079214) cam4_image_uncrop_pane_g3

0x7597,	// (0x0007921d) cam4_image_uncrop_pane_g4

0x0003,

0xf847,	// (0x000814cd) cam4_image_uncrop_pane_g

0xa1a7,	// (0x0007be2d) dia3_listrow_pane_ParamLimits

0x16a1,	// (0x00073327) main_phob2_pane

0x96d9,	// (0x0007b35f) cell_tport_appsw_pane_cp02_ParamLimits

0x96d9,	// (0x0007b35f) cell_tport_appsw_pane_cp02

0x96ed,	// (0x0007b373) cell_tport_appsw_pane_cp03_ParamLimits

0x96ed,	// (0x0007b373) cell_tport_appsw_pane_cp03

0x16a1,	// (0x00073327) phob2_contact_card_pane

0x16a1,	// (0x00073327) phob2_listscroll_pane

0xe5d2,	// (0x00080258) phob2_list_pane

0xe5da,	// (0x00080260) scroll_pane_cp034

0xa426,	// (0x0007c0ac) phob2_cc_data_pane_ParamLimits

0xa426,	// (0x0007c0ac) phob2_cc_data_pane

0xa43f,	// (0x0007c0c5) phob2_cc_listscroll_pane_ParamLimits

0xa43f,	// (0x0007c0c5) phob2_cc_listscroll_pane

0x9f99,	// (0x0007bc1f) list_double_large_graphic_phob2_pane_ParamLimits

0x9f99,	// (0x0007bc1f) list_double_large_graphic_phob2_pane

0xa461,	// (0x0007c0e7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa461,	// (0x0007c0e7) list_double_large_graphic_phob2_pane_g1

0x15c5,	// (0x0007324b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x15c5,	// (0x0007324b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe06,	// (0x00081a8c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe06,	// (0x00081a8c) list_double_large_graphic_phob2_pane_g

0x15dd,	// (0x00073263) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x15dd,	// (0x00073263) list_double_large_graphic_phob2_pane_t1

0x15f2,	// (0x00073278) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x15f2,	// (0x00073278) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe0f,	// (0x00081a95) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe0f,	// (0x00081a95) list_double_large_graphic_phob2_pane_t

0x16a1,	// (0x00073327) list_highlight_pane_cp024

0xa47c,	// (0x0007c102) phob2_cc_button_pane

0xa486,	// (0x0007c10c) phob2_cc_data_pane_g1_ParamLimits

0xa486,	// (0x0007c10c) phob2_cc_data_pane_g1

0xa4a0,	// (0x0007c126) phob2_cc_data_pane_g2_ParamLimits

0xa4a0,	// (0x0007c126) phob2_cc_data_pane_g2

0x0001,

0xfe14,	// (0x00081a9a) phob2_cc_data_pane_g_ParamLimits

0xfe14,	// (0x00081a9a) phob2_cc_data_pane_g

0xa4b2,	// (0x0007c138) phob2_cc_data_pane_t1_ParamLimits

0xa4b2,	// (0x0007c138) phob2_cc_data_pane_t1

0xa4d2,	// (0x0007c158) phob2_cc_data_pane_t2_ParamLimits

0xa4d2,	// (0x0007c158) phob2_cc_data_pane_t2

0xa4f2,	// (0x0007c178) phob2_cc_data_pane_t3_ParamLimits

0xa4f2,	// (0x0007c178) phob2_cc_data_pane_t3

0x0002,

0xfe19,	// (0x00081a9f) phob2_cc_data_pane_t_ParamLimits

0xfe19,	// (0x00081a9f) phob2_cc_data_pane_t

0xe5e2,	// (0x00080268) phob2_cc_list_pane_ParamLimits

0xe5e2,	// (0x00080268) phob2_cc_list_pane

0xcd57,	// (0x0007e9dd) scroll_pane_cp035_ParamLimits

0xcd57,	// (0x0007e9dd) scroll_pane_cp035

0x18cb,	// (0x00073551) bg_button_pane_cp033

0xe5ee,	// (0x00080274) phob2_cc_button_pane_g1

0xe5fa,	// (0x00080280) phob2_cc_button_pane_t1

0xe60f,	// (0x00080295) phob2_cc_button_pane_t2

0x0001,

0xfe20,	// (0x00081aa6) phob2_cc_button_pane_t

0xa512,	// (0x0007c198) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa512,	// (0x0007c198) list_double_large_graphic_phob2_cc_pane

0xa550,	// (0x0007c1d6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa550,	// (0x0007c1d6) list_double_large_graphic_phob2_cc_pane_g1

0x1607,	// (0x0007328d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1607,	// (0x0007328d) list_double_large_graphic_phob2_cc_pane_g2

0x1613,	// (0x00073299) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1613,	// (0x00073299) list_double_large_graphic_phob2_cc_pane_g3

0x161f,	// (0x000732a5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x161f,	// (0x000732a5) list_double_large_graphic_phob2_cc_pane_g4

0x162b,	// (0x000732b1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x162b,	// (0x000732b1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe25,	// (0x00081aab) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe25,	// (0x00081aab) list_double_large_graphic_phob2_cc_pane_g

0x1637,	// (0x000732bd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1637,	// (0x000732bd) list_double_large_graphic_phob2_cc_pane_t1

0x1660,	// (0x000732e6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1660,	// (0x000732e6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe30,	// (0x00081ab6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe30,	// (0x00081ab6) list_double_large_graphic_phob2_cc_pane_t

0xe621,	// (0x000802a7) list_highlight_pane_cp025_ParamLimits

0xe621,	// (0x000802a7) list_highlight_pane_cp025

0x18cb,	// (0x00073551) bg_button_pane_cp033_ParamLimits

0xe5ee,	// (0x00080274) phob2_cc_button_pane_g1_ParamLimits

0xe5fa,	// (0x00080280) phob2_cc_button_pane_t1_ParamLimits

0xe60f,	// (0x00080295) phob2_cc_button_pane_t2_ParamLimits

0xfe20,	// (0x00081aa6) phob2_cc_button_pane_t_ParamLimits

0x18d9,	// (0x0007355f) popup_wgtman_window

0xcb87,	// (0x0007e80d) scroll_pane_cp038

0x9f12,	// (0x0007bb98) wgtman_btn_pane_cp_01_ParamLimits

0x9f12,	// (0x0007bb98) wgtman_btn_pane_cp_01

0xe62f,	// (0x000802b5) wgtman_content_pane

0xe638,	// (0x000802be) wgtman_heading_pane

0x16a1,	// (0x00073327) bg_heading_pane_cp02

0xe641,	// (0x000802c7) wgtman_heading_pane_g1

0xe649,	// (0x000802cf) wgtman_heading_pane_t1

0xe657,	// (0x000802dd) scroll_pane_cp036

0xe65f,	// (0x000802e5) wgtman_list_pane

0xd94c,	// (0x0007f5d2) wgtman_list_pane_t1_ParamLimits

0xd94c,	// (0x0007f5d2) wgtman_list_pane_t1

0xeb0b,	// (0x00080791) cam4_grid_pane

0x0fc7,	// (0x00072c4d) bg_button_pane_cp015_ParamLimits

0x81ef,	// (0x00079e75) bg_button_pane_cp016_ParamLimits

0x8202,	// (0x00079e88) bg_button_pane_cp017_ParamLimits

0x100f,	// (0x00072c95) popup_vitu2_query_window_g3_ParamLimits

0x100f,	// (0x00072c95) popup_vitu2_query_window_g3

0x108a,	// (0x00072d10) popup_vitu2_query_window_t6_ParamLimits

0x108a,	// (0x00072d10) popup_vitu2_query_window_t6

0x10b5,	// (0x00072d3b) popup_vitu2_query_window_t7_ParamLimits

0x10b5,	// (0x00072d3b) popup_vitu2_query_window_t7

0xf071,	// (0x00080cf7) cam4_grid_pane_g1

0xf07a,	// (0x00080d00) cam4_grid_pane_g2

0xe667,	// (0x000802ed) cam4_grid_pane_g3

0xe670,	// (0x000802f6) cam4_grid_pane_g4

0x0003,

0xfe35,	// (0x00081abb) cam4_grid_pane_g

0x2ec0,	// (0x00074b46) aid_placing_vt_slider_lsc_ParamLimits

0x3201,	// (0x00074e87) vidtel_button_pane_ParamLimits

0x3201,	// (0x00074e87) vidtel_button_pane

0x16a1,	// (0x00073327) bg_button_pane_cp034

0xe67b,	// (0x00080301) vidtel_button_pane_g1

0xe683,	// (0x00080309) vidtel_button_pane_t1

0xcc9e,	// (0x0007e924) aid_size_vtel_slider_touch

0xcd57,	// (0x0007e9dd) scroll_pane_cp039

0x8e40,	// (0x0007aac6) ncim_query_button_pane_cp01_ParamLimits

0x8e5f,	// (0x0007aae5) ncimui_query_pane_g1_ParamLimits

0x18cb,	// (0x00073551) input_focus_pane_cp012_ParamLimits

0xd676,	// (0x0007f2fc) ncim_query_entry_pane_t1_ParamLimits

0xcd57,	// (0x0007e9dd) scroll_pane_cp039_ParamLimits

0x4b5a,	// (0x000767e0) navi_pane_bcale_mc_g1

0x4b62,	// (0x000767e8) navi_pane_bcale_mc_t1

0xdae1,	// (0x0007f767) main_sp_fs_email_pane_g1

0xdaed,	// (0x0007f773) main_sp_fs_email_pane_g2

0x0001,

0xfc38,	// (0x000818be) main_sp_fs_email_pane_g

0xdfba,	// (0x0007fc40) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdfba,	// (0x0007fc40) list_single_cale_mrui_row_pane_g3

0x1517,	// (0x0007319d) list_single_recal_day_pane_g5_event_pane

0xe197,	// (0x0007fe1d) list_single_recal_day_pane_g7

0xe699,	// (0x0008031f) list_recal_day_event_pane_cp01

0xe6a2,	// (0x00080328) list_recal_vselct_arw_lo_pane_cp01

0xe6aa,	// (0x00080330) list_recal_vselct_arw_up_pane_cp01

0xe6b2,	// (0x00080338) list_recal_vselct_pane_cp01

0xccae,	// (0x0007e934) list_recal_day_event_pane_cp01_g1

0xe6bc,	// (0x00080342) list_recal_day_event_pane_cp01_t1

0xe19f,	// (0x0007fe25) list_single_recal_day_pane_t1_ParamLimits

0xe1b1,	// (0x0007fe37) list_single_recal_day_pane_t2_ParamLimits

0xfd18,	// (0x0008199e) list_single_recal_day_pane_t_ParamLimits

0x1ffe,	// (0x00073c84) bg_notes_pane_ParamLimits

0x221d,	// (0x00073ea3) list_notes_pane_ParamLimits

0x222b,	// (0x00073eb1) scroll_pane_cp06_ParamLimits

0x2253,	// (0x00073ed9) main_notes_pane_ParamLimits

0x18cb,	// (0x00073551) main_welc_pane

0xa578,	// (0x0007c1fe) main_welc_body_pane_ParamLimits

0xa578,	// (0x0007c1fe) main_welc_body_pane

0xa597,	// (0x0007c21d) main_welc_opti_pane_ParamLimits

0xa597,	// (0x0007c21d) main_welc_opti_pane

0xa613,	// (0x0007c299) main_welc_pane_t1_ParamLimits

0xa613,	// (0x0007c299) main_welc_pane_t1

0xe6d2,	// (0x00080358) main_welc_body_row_pane_ParamLimits

0xe6d2,	// (0x00080358) main_welc_body_row_pane

0x206b,	// (0x00073cf1) main_welc_opti_row_pane_ParamLimits

0x206b,	// (0x00073cf1) main_welc_opti_row_pane

0xe6e9,	// (0x0008036f) main_welc_opti_row_pane_g1

0xa78f,	// (0x0007c415) main_welc_opti_row_pane_t1

0xe6f1,	// (0x00080377) main_welc_body_row_pane_t1

0xe40f,	// (0x00080095) popup_notif_wgt_heading_pane

0xe429,	// (0x000800af) aid_size_list_notif_wgt_del_ParamLimits

0xe436,	// (0x000800bc) list_notif_wgt_row_pane_g1_ParamLimits

0xe442,	// (0x000800c8) list_notif_wgt_row_pane_g2_ParamLimits

0xe451,	// (0x000800d7) list_notif_wgt_row_pane_g3_ParamLimits

0xfd7f,	// (0x00081a05) list_notif_wgt_row_pane_g_ParamLimits

0xe45e,	// (0x000800e4) list_notif_wgt_row_pane_t1_ParamLimits

0xe474,	// (0x000800fa) list_notif_wgt_row_pane_t2_ParamLimits

0xe486,	// (0x0008010c) list_notif_wgt_row_pane_t3_ParamLimits

0xfd86,	// (0x00081a0c) list_notif_wgt_row_pane_t_ParamLimits

0x9fad,	// (0x0007bc33) listrow_wgtman_pane_g1_ParamLimits

0x9fba,	// (0x0007bc40) listrow_wgtman_pane_g2_ParamLimits

0xfdb6,	// (0x00081a3c) listrow_wgtman_pane_g_ParamLimits

0x1575,	// (0x000731fb) listrow_wgtman_pane_t1_ParamLimits

0x158d,	// (0x00073213) listrow_wgtman_pane_t2_ParamLimits

0xfdbb,	// (0x00081a41) listrow_wgtman_pane_t_ParamLimits

0x15b3,	// (0x00073239) wait_bar_pane_cp09_ParamLimits

0x16a1,	// (0x00073327) bg_popup_heading_pane_cp02

0xe700,	// (0x00080386) popup_notif_wgt_heading_pane_g1

0xe708,	// (0x0008038e) popup_notif_wgt_heading_pane_t1

0x16a1,	// (0x00073327) main_vids_pane

0x16a1,	// (0x00073327) vids_listscroll_pane

0xa79e,	// (0x0007c424) scroll_pane_cp040

0x16a1,	// (0x00073327) vids_list_pane

0xa7a9,	// (0x0007c42f) vids_list_double_pane_ParamLimits

0xa7a9,	// (0x0007c42f) vids_list_double_pane

0xa7bc,	// (0x0007c442) vids_list_double_pane_g1

0xa7c5,	// (0x0007c44b) vids_list_double_pane_t1

0xa7d5,	// (0x0007c45b) vids_list_double_pane_t2

0x0001,

0xfe54,	// (0x00081ada) vids_list_double_pane_t

0x18cb,	// (0x00073551) main_ncimui_pane_ParamLimits

0x8c76,	// (0x0007a8fc) main_ncimui_pane_g1_ParamLimits

0x8c82,	// (0x0007a908) main_ncimui_pane_g2_ParamLimits

0x8c82,	// (0x0007a908) main_ncimui_pane_g2

0x0001,

0xfb39,	// (0x000817bf) main_ncimui_pane_g_ParamLimits

0xfb39,	// (0x000817bf) main_ncimui_pane_g

0xa5b6,	// (0x0007c23c) main_welc_pane_g1_ParamLimits

0xa5b6,	// (0x0007c23c) main_welc_pane_g1

0xa5cb,	// (0x0007c251) main_welc_pane_g2_ParamLimits

0xa5cb,	// (0x0007c251) main_welc_pane_g2

0x0003,

0xfe3e,	// (0x00081ac4) main_welc_pane_g_ParamLimits

0xfe3e,	// (0x00081ac4) main_welc_pane_g

0x1ffe,	// (0x00073c84) listscroll_mce_pane_ParamLimits

0x4ce1,	// (0x00076967) wait_bar_pane_cp10

0xbfe5,	// (0x0007dc6b) main_cale_day_pane_ParamLimits

0xbfe5,	// (0x0007dc6b) main_cale_week_pane_ParamLimits

0x1ffe,	// (0x00073c84) main_messa_pane_ParamLimits

0x6971,	// (0x000785f7) main_clock2_btn_pane_ParamLimits

0x6971,	// (0x000785f7) main_clock2_btn_pane

0xc85d,	// (0x0007e4e3) main_clock2_btn_pane_cp01_ParamLimits

0xc85d,	// (0x0007e4e3) main_clock2_btn_pane_cp01

0xdf46,	// (0x0007fbcc) list_cale_mrui_pane_ParamLimits

0xe4bc,	// (0x00080142) main_cf0_pane_g2

0x0001,

0xfd8d,	// (0x00081a13) main_cf0_pane_g

0xa1e6,	// (0x0007be6c) area_left_week_number_pane_ParamLimits

0xa1f4,	// (0x0007be7a) area_top_day_name_pane_ParamLimits

0xa207,	// (0x0007be8d) frame_month_view_pane_ParamLimits

0xe597,	// (0x0008021d) grid_month_view_pane_ParamLimits

0xe5a5,	// (0x0008022b) frm_month_g1_ParamLimits

0xa292,	// (0x0007bf18) frm_month_g2_ParamLimits

0xa2a5,	// (0x0007bf2b) frm_month_g3_ParamLimits

0xa2b8,	// (0x0007bf3e) frm_month_g4_ParamLimits

0xa2cb,	// (0x0007bf51) frm_month_g5_ParamLimits

0xa2de,	// (0x0007bf64) frm_month_g6_ParamLimits

0xa2f3,	// (0x0007bf79) frm_month_g7_ParamLimits

0xe5b2,	// (0x00080238) frm_month_g8_ParamLimits

0xa308,	// (0x0007bf8e) frm_month_g9_ParamLimits

0xa318,	// (0x0007bf9e) frm_month_g10_ParamLimits

0xa328,	// (0x0007bfae) frm_month_g11_ParamLimits

0xa338,	// (0x0007bfbe) frm_month_g12_ParamLimits

0xa34a,	// (0x0007bfd0) frm_month_g13_ParamLimits

0xa35e,	// (0x0007bfe4) frm_month_g14_ParamLimits

0xa372,	// (0x0007bff8) frm_month_g15_ParamLimits

0xa386,	// (0x0007c00c) frm_month_g16_ParamLimits

0xfde5,	// (0x00081a6b) frm_month_g_ParamLimits

0xe5bf,	// (0x00080245) cell_top_day_name_pane_t1_ParamLimits

0xa39a,	// (0x0007c020) cell_area_left_week_number_pane_g1_ParamLimits

0xa3a6,	// (0x0007c02c) cell_area_left_week_number_pane_t1_ParamLimits

0x2079,	// (0x00073cff) cell_month_view_pane_g1_ParamLimits

0xa3b9,	// (0x0007c03f) cell_month_view_pane_t1_ParamLimits

0x1ff6,	// (0x00073c7c) main_clock2_btn_pane_g1

0xe716,	// (0x0008039c) main_clock2_btn_pane_t1

0x18cb,	// (0x00073551) listscroll_cmail_pane_ParamLimits

0xdae1,	// (0x0007f767) main_sp_fs_email_pane_g1_ParamLimits

0xdaed,	// (0x0007f773) main_sp_fs_email_pane_g2_ParamLimits

0xfc38,	// (0x000818be) main_sp_fs_email_pane_g_ParamLimits

0xe106,	// (0x0007fd8c) list_recal_day_pane_ParamLimits

0xe117,	// (0x0007fd9d) mian_recal_day_pane_t1

0x1368,	// (0x00072fee) list_single_dyc_row_text_pane_t4_ParamLimits

0x1368,	// (0x00072fee) list_single_dyc_row_text_pane_t4

0x13b1,	// (0x00073037) list_single_dyc_row_text_pane_t5_ParamLimits

0x13b1,	// (0x00073037) list_single_dyc_row_text_pane_t5

0xdb97,	// (0x0007f81d) list_single_dyc_row_text_pane_t6_ParamLimits

0xdb97,	// (0x0007f81d) list_single_dyc_row_text_pane_t6

0x4300,	// (0x00075f86) aid_mgn_list_cale_time_pane

0x18cb,	// (0x00073551) main_gallery2_pane_ParamLimits

0xc871,	// (0x0007e4f7) main_clock2_pane_cp01_t1

0xc87f,	// (0x0007e505) main_clock2_pane_cp01_t3

0x0001,

0xf74c,	// (0x000813d2) main_clock2_pane_cp01_t

0x276a,	// (0x000743f0) cale_week_scroll_pane_g16_ParamLimits

0x276a,	// (0x000743f0) cale_week_scroll_pane_g16

0x2bb1,	// (0x00074837) vorec_slider_pane

0xe683,	// (0x00080309) vidtel_button_pane_t1_ParamLimits

0x9b50,	// (0x0007b7d6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9b50,	// (0x0007b7d6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9b63,	// (0x0007b7e9) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9b63,	// (0x0007b7e9) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd3b,	// (0x000819c1) main_fs_bigclock_clock_pane_g_ParamLimits

0x9b7a,	// (0x0007b800) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9b90,	// (0x0007b816) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd44,	// (0x000819ca) main_fs_bigclock_clock_pane_t_ParamLimits

0x61b7,	// (0x00077e3d) main_mup3_lyrics_pane_ParamLimits

0x61b7,	// (0x00077e3d) main_mup3_lyrics_pane

0xa80b,	// (0x0007c491) main_mup3_lyrics_pane_t1_ParamLimits

0xa80b,	// (0x0007c491) main_mup3_lyrics_pane_t1

0xe85f,	// (0x000804e5) aid_main_mp4_pane_t1_area

0xe869,	// (0x000804ef) aid_main_mp4_pane_t2_area

0xe915,	// (0x0008059b) main_mp4_pane_g7_ParamLimits

0xe915,	// (0x0008059b) main_mp4_pane_g7

0xe921,	// (0x000805a7) main_mp4_pane_g8_ParamLimits

0xe921,	// (0x000805a7) main_mp4_pane_g8

0x7355,	// (0x00078fdb) aid_call6_pane_g1_size

0xa540,	// (0x0007c1c6) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa540,	// (0x0007c1c6) list_double_large_graphic_phob2_other_pane

0xa826,	// (0x0007c4ac) list_double_large_graphic_phob2_other_pane_g1

0x16a1,	// (0x00073327) list_highlight_pane_cp026

0x18cb,	// (0x00073551) main_welc_pane_ParamLimits

0x9589,	// (0x0007b20f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9589,	// (0x0007b20f) main_sp_fs_ctrlbar_pane_g3

0x95a3,	// (0x0007b229) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x95a3,	// (0x0007b229) main_sp_fs_ctrlbar_pane_g4

0x95d7,	// (0x0007b25d) toolbar2_fixed_button_pane_cp01

0x95e2,	// (0x0007b268) toolbar2_fixed_button_pane_cp02

0x95ef,	// (0x0007b275) toolbar2_fixed_button_pane_cp03

0xa55c,	// (0x0007c1e2) list_welc_entry_pane_ParamLimits

0xa55c,	// (0x0007c1e2) list_welc_entry_pane

0xa5e0,	// (0x0007c266) main_welc_pane_g3_ParamLimits

0xa5e0,	// (0x0007c266) main_welc_pane_g3

0xa635,	// (0x0007c2bb) main_welc_pane_t2_ParamLimits

0xa635,	// (0x0007c2bb) main_welc_pane_t2

0xa650,	// (0x0007c2d6) main_welc_pane_t3_ParamLimits

0xa650,	// (0x0007c2d6) main_welc_pane_t3

0x0005,

0xfe47,	// (0x00081acd) main_welc_pane_t_ParamLimits

0xfe47,	// (0x00081acd) main_welc_pane_t

0xa70d,	// (0x0007c393) welc_button_pane_ParamLimits

0xa70d,	// (0x0007c393) welc_button_pane

0xa77b,	// (0x0007c401) welc_service_logo_pane_ParamLimits

0xa77b,	// (0x0007c401) welc_service_logo_pane

0xa82e,	// (0x0007c4b4) list_single_welc_entry_pane_ParamLimits

0xa82e,	// (0x0007c4b4) list_single_welc_entry_pane

0xa841,	// (0x0007c4c7) list_single_welc_entry_pane_g1

0xa849,	// (0x0007c4cf) list_single_welc_entry_pane_t1

0xa857,	// (0x0007c4dd) list_single_welc_entry_pane_t2

0x0001,

0xfe59,	// (0x00081adf) list_single_welc_entry_pane_t

0x16a1,	// (0x00073327) bg_button_pane_cp035

0xe724,	// (0x000803aa) welc_button_pane_t1

0xe732,	// (0x000803b8) welc_service_logo_pane_g1

0xe73b,	// (0x000803c1) welc_service_logo_pane_g2

0x0001,

0xfe5e,	// (0x00081ae4) welc_service_logo_pane_g

0x16a1,	// (0x00073327) main_int_radio_pane

0xd514,	// (0x0007f19a) list_single_fs_dyc_pane_g1

0x15d1,	// (0x00073257) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x15d1,	// (0x00073257) list_double_large_graphic_phob2_pane_g3

0xa46e,	// (0x0007c0f4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa46e,	// (0x0007c0f4) list_double_large_graphic_phob2_pane_g4

0xa865,	// (0x0007c4eb) main_int_radio1_pane_ParamLimits

0xa865,	// (0x0007c4eb) main_int_radio1_pane

0xe744,	// (0x000803ca) find_pane_cp02

0xa882,	// (0x0007c508) input_focus_pane_cp12_ParamLimits

0xa882,	// (0x0007c508) input_focus_pane_cp12

0xa892,	// (0x0007c518) input_focus_pane_cp13_ParamLimits

0xa892,	// (0x0007c518) input_focus_pane_cp13

0xa8a6,	// (0x0007c52c) input_focus_pane_cp14_ParamLimits

0xa8a6,	// (0x0007c52c) input_focus_pane_cp14

0xe74d,	// (0x000803d3) int_radio1_listscroll_pane

0xa8ba,	// (0x0007c540) main_int_radio1_pane_g1_ParamLimits

0xa8ba,	// (0x0007c540) main_int_radio1_pane_g1

0xa8d0,	// (0x0007c556) main_int_radio1_pane_t1_ParamLimits

0xa8d0,	// (0x0007c556) main_int_radio1_pane_t1

0xa8e9,	// (0x0007c56f) main_int_radio1_pane_t2_ParamLimits

0xa8e9,	// (0x0007c56f) main_int_radio1_pane_t2

0xa904,	// (0x0007c58a) main_int_radio1_pane_t3_ParamLimits

0xa904,	// (0x0007c58a) main_int_radio1_pane_t3

0xa91f,	// (0x0007c5a5) main_int_radio1_pane_t4_ParamLimits

0xa91f,	// (0x0007c5a5) main_int_radio1_pane_t4

0xe757,	// (0x000803dd) main_int_radio1_pane_t5_ParamLimits

0xe757,	// (0x000803dd) main_int_radio1_pane_t5

0xa931,	// (0x0007c5b7) main_int_radio1_pane_t6_ParamLimits

0xa931,	// (0x0007c5b7) main_int_radio1_pane_t6

0xa946,	// (0x0007c5cc) main_int_radio1_pane_t7_ParamLimits

0xa946,	// (0x0007c5cc) main_int_radio1_pane_t7

0xa95b,	// (0x0007c5e1) main_int_radio1_pane_t8_ParamLimits

0xa95b,	// (0x0007c5e1) main_int_radio1_pane_t8

0xa978,	// (0x0007c5fe) main_int_radio1_pane_t9_ParamLimits

0xa978,	// (0x0007c5fe) main_int_radio1_pane_t9

0xa98a,	// (0x0007c610) main_int_radio1_pane_t10_ParamLimits

0xa98a,	// (0x0007c610) main_int_radio1_pane_t10

0xa9b0,	// (0x0007c636) main_int_radio1_pane_t11_ParamLimits

0xa9b0,	// (0x0007c636) main_int_radio1_pane_t11

0xa9d6,	// (0x0007c65c) main_int_radio1_pane_t12_ParamLimits

0xa9d6,	// (0x0007c65c) main_int_radio1_pane_t12

0x000b,

0xfe63,	// (0x00081ae9) main_int_radio1_pane_t_ParamLimits

0xfe63,	// (0x00081ae9) main_int_radio1_pane_t

0xe5d2,	// (0x00080258) int_radio_list_pane

0xe5da,	// (0x00080260) scroll_pane_cp037

0xe769,	// (0x000803ef) list_double_large_graphic_int_radio_pane_ParamLimits

0xe769,	// (0x000803ef) list_double_large_graphic_int_radio_pane

0xe77d,	// (0x00080403) list_double_large_graphic_int_radio_pane_g1

0xe786,	// (0x0008040c) list_double_large_graphic_int_radio_pane_t1

0xe794,	// (0x0008041a) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe7c,	// (0x00081b02) list_double_large_graphic_int_radio_pane_t

0x16a1,	// (0x00073327) list_highlight_pane_cp027

0xe6ca,	// (0x00080350) main_button_pane_4

0xa5f4,	// (0x0007c27a) main_welc_pane_g4_ParamLimits

0xa5f4,	// (0x0007c27a) main_welc_pane_g4

0xa66d,	// (0x0007c2f3) main_welc_pane_t4_ParamLimits

0xa66d,	// (0x0007c2f3) main_welc_pane_t4

0xa682,	// (0x0007c308) main_welc_pane_t5_ParamLimits

0xa682,	// (0x0007c308) main_welc_pane_t5

0xa6d2,	// (0x0007c358) main_welc_pane_t6_ParamLimits

0xa6d2,	// (0x0007c358) main_welc_pane_t6

0xa724,	// (0x0007c3aa) welc_button_pane_2_ParamLimits

0xa724,	// (0x0007c3aa) welc_button_pane_2

0xa742,	// (0x0007c3c8) welc_button_pane_3_ParamLimits

0xa742,	// (0x0007c3c8) welc_button_pane_3

0xe6ca,	// (0x00080350) welc_button_pane_4

0xa763,	// (0x0007c3e9) welc_button_pane_5_ParamLimits

0xa763,	// (0x0007c3e9) welc_button_pane_5

0x5955,	// (0x000775db) main_popup_welc_pane

0xe7a2,	// (0x00080428) main_welc_sk_g3

0xe7ac,	// (0x00080432) main_welc_sk_g4

0xe7b6,	// (0x0008043c) main_welc_sk_t3

0xe7c6,	// (0x0008044c) main_welc_sk_t4

0xe7d6,	// (0x0008045c) popup_welc_pane_t4

0xe7e4,	// (0x0008046a) popup_welc_pane_t5

0xe7f2,	// (0x00080478) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large

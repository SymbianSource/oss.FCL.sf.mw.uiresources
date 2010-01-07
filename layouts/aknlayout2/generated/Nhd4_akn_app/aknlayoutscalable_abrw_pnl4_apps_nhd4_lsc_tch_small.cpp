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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00055fbf };

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
0x32ef,	// (0x000592ae) Screen

0x32fb,	// (0x000592ba) application_window

0x3347,	// (0x00059306) area_bottom_pane_ParamLimits

0x3347,	// (0x00059306) area_bottom_pane

0x3380,	// (0x0005933f) area_top_pane_ParamLimits

0x3380,	// (0x0005933f) area_top_pane

0xbdbc,	// (0x00061d7b) call_video_uplink_pane_ParamLimits

0xbdbc,	// (0x00061d7b) call_video_uplink_pane

0x33fa,	// (0x000593b9) main_pane_ParamLimits

0x33fa,	// (0x000593b9) main_pane

0x1ce6,	// (0x00057ca5) context_pane

0x640a,	// (0x0005c3c9) navi_pane

0x6432,	// (0x0005c3f1) popup_cale_events_window_ParamLimits

0x6432,	// (0x0005c3f1) popup_cale_events_window

0x1cf9,	// (0x00057cb8) popup_mup_playback_window

0x644a,	// (0x0005c409) signal_pane

0xc581,	// (0x00062540) main_browser_pane

0x088c,	// (0x0005684b) main_burst_pane

0x616a,	// (0x0005c129) main_calc_pane

0x088c,	// (0x0005684b) main_cale_day_pane

0xc581,	// (0x00062540) main_cale_month_pane

0x088c,	// (0x0005684b) main_cale_week_pane

0x088c,	// (0x0005684b) main_call_pane

0xc1eb,	// (0x000621aa) main_call_poc_pane

0x088c,	// (0x0005684b) main_camera_pane

0x088c,	// (0x0005684b) main_chi_dic_pane

0x071b,	// (0x000566da) main_clock_pane

0xc1eb,	// (0x000621aa) main_fmradio_pane

0x088c,	// (0x0005684b) main_graph_messa_pane

0xc1eb,	// (0x000621aa) main_help_pane

0xc581,	// (0x00062540) main_im_pane

0xc446,	// (0x00062405) main_image_pane_ParamLimits

0xc446,	// (0x00062405) main_image_pane

0xc1eb,	// (0x000621aa) main_location2_pane

0x088c,	// (0x0005684b) main_location_pane

0xc1eb,	// (0x000621aa) main_messa_pane

0xc1eb,	// (0x000621aa) main_mp2_pane

0x088c,	// (0x0005684b) main_mp_pane

0xc1eb,	// (0x000621aa) main_msg_pane

0xc1eb,	// (0x000621aa) main_mup_eq_pane

0xc1eb,	// (0x000621aa) main_mup_pane

0x088c,	// (0x0005684b) main_notes_pane

0xc1eb,	// (0x000621aa) main_pec_pane

0xc1eb,	// (0x000621aa) main_phob_pane

0xc1eb,	// (0x000621aa) main_pinb_pane

0xc1eb,	// (0x000621aa) main_postcard_pane

0xc1eb,	// (0x000621aa) main_qdial_pane

0x088c,	// (0x0005684b) main_skin_pane

0xc1eb,	// (0x000621aa) main_smil2_pane

0x088c,	// (0x0005684b) main_smil_pane

0x088c,	// (0x0005684b) main_video_pane

0x088c,	// (0x0005684b) main_video_tele_pane

0xc446,	// (0x00062405) main_viewer_pane_ParamLimits

0xc446,	// (0x00062405) main_viewer_pane

0x088c,	// (0x0005684b) main_vorec_pane

0x61be,	// (0x0005c17d) popup_blid_sat_info_window_ParamLimits

0x61be,	// (0x0005c17d) popup_blid_sat_info_window

0x6216,	// (0x0005c1d5) popup_dyc_status_message_window_ParamLimits

0x6216,	// (0x0005c1d5) popup_dyc_status_message_window

0x622e,	// (0x0005c1ed) popup_grid_large_graphic_window_ParamLimits

0x622e,	// (0x0005c1ed) popup_grid_large_graphic_window

0x62e4,	// (0x0005c2a3) popup_loc_request_window_ParamLimits

0x62e4,	// (0x0005c2a3) popup_loc_request_window

0x63e2,	// (0x0005c3a1) popup_wml_address_window_ParamLimits

0x63e2,	// (0x0005c3a1) popup_wml_address_window

0x5fa4,	// (0x0005bf63) call_muted_g1

0x5c54,	// (0x0005bc13) popup_call_audio_conf_window_ParamLimits

0x5c54,	// (0x0005bc13) popup_call_audio_conf_window

0x5fb8,	// (0x0005bf77) popup_call_audio_first_window_ParamLimits

0x5fb8,	// (0x0005bf77) popup_call_audio_first_window

0x602e,	// (0x0005bfed) popup_call_audio_in_window_ParamLimits

0x602e,	// (0x0005bfed) popup_call_audio_in_window

0x606a,	// (0x0005c029) popup_call_audio_out_window_ParamLimits

0x606a,	// (0x0005c029) popup_call_audio_out_window

0x60a4,	// (0x0005c063) popup_call_audio_second_window_ParamLimits

0x60a4,	// (0x0005c063) popup_call_audio_second_window

0x60fa,	// (0x0005c0b9) popup_call_audio_wait_window_ParamLimits

0x60fa,	// (0x0005c0b9) popup_call_audio_wait_window

0x612f,	// (0x0005c0ee) popup_number_entry_window_ParamLimits

0x612f,	// (0x0005c0ee) popup_number_entry_window

0xbdda,	// (0x00061d99) bg_popup_call_pane_cp05_ParamLimits

0xbdda,	// (0x00061d99) bg_popup_call_pane_cp05

0xbdfa,	// (0x00061db9) popup_number_entry_window_t1

0xbe0d,	// (0x00061dcc) popup_number_entry_window_t2

0xbe1f,	// (0x00061dde) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000650ba) popup_number_entry_window_t

0xbe31,	// (0x00061df0) text_title_cp2

0xbe44,	// (0x00061e03) bg_popup_call_pane_cp_ParamLimits

0xbe44,	// (0x00061e03) bg_popup_call_pane_cp

0xbe52,	// (0x00061e11) call_thumbnail_pane

0xbe5a,	// (0x00061e19) popup_call_audio_in_window_g1_ParamLimits

0xbe5a,	// (0x00061e19) popup_call_audio_in_window_g1

0xbe66,	// (0x00061e25) popup_call_audio_in_window_g2_ParamLimits

0xbe66,	// (0x00061e25) popup_call_audio_in_window_g2

0xbe72,	// (0x00061e31) popup_call_audio_in_window_g3_ParamLimits

0xbe72,	// (0x00061e31) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000650c3) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000650c3) popup_call_audio_in_window_g

0xbe7e,	// (0x00061e3d) popup_call_audio_in_window_t1_ParamLimits

0xbe7e,	// (0x00061e3d) popup_call_audio_in_window_t1

0xbe99,	// (0x00061e58) popup_call_audio_in_window_t2_ParamLimits

0xbe99,	// (0x00061e58) popup_call_audio_in_window_t2

0xbeb4,	// (0x00061e73) popup_call_audio_in_window_t3_ParamLimits

0xbeb4,	// (0x00061e73) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000650ca) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000650ca) popup_call_audio_in_window_t

0xbe44,	// (0x00061e03) bg_popup_call_pane_cp01_ParamLimits

0xbe44,	// (0x00061e03) bg_popup_call_pane_cp01

0xbe52,	// (0x00061e11) call_thumbnail_pane_cp02

0xbec7,	// (0x00061e86) call_type_pane_cp022

0xbecf,	// (0x00061e8e) popup_call_audio_out_window_g1_ParamLimits

0xbecf,	// (0x00061e8e) popup_call_audio_out_window_g1

0xbee1,	// (0x00061ea0) popup_call_audio_out_window_g2_ParamLimits

0xbee1,	// (0x00061ea0) popup_call_audio_out_window_g2

0xbeed,	// (0x00061eac) popup_call_audio_out_window_g3_ParamLimits

0xbeed,	// (0x00061eac) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000650d1) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000650d1) popup_call_audio_out_window_g

0xbeff,	// (0x00061ebe) popup_call_audio_out_window_t1_ParamLimits

0xbeff,	// (0x00061ebe) popup_call_audio_out_window_t1

0xbf17,	// (0x00061ed6) popup_call_audio_out_window_t2_ParamLimits

0xbf17,	// (0x00061ed6) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000650d8) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000650d8) popup_call_audio_out_window_t

0xbf2c,	// (0x00061eeb) bg_popup_call_pane_ParamLimits

0xbf2c,	// (0x00061eeb) bg_popup_call_pane

0x35b6,	// (0x00059575) call_thumbnail_pane_cp_ParamLimits

0x35b6,	// (0x00059575) call_thumbnail_pane_cp

0xbfb0,	// (0x00061f6f) call_type_pane_cp01_ParamLimits

0xbfb0,	// (0x00061f6f) call_type_pane_cp01

0xbff4,	// (0x00061fb3) popup_call_audio_first_window_g1_ParamLimits

0xbff4,	// (0x00061fb3) popup_call_audio_first_window_g1

0xc040,	// (0x00061fff) popup_call_audio_first_window_g2_ParamLimits

0xc040,	// (0x00061fff) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000650dd) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000650dd) popup_call_audio_first_window_g

0xc084,	// (0x00062043) popup_call_audio_first_window_t1_ParamLimits

0xc084,	// (0x00062043) popup_call_audio_first_window_t1

0xc130,	// (0x000620ef) popup_call_audio_first_window_t4_ParamLimits

0xc130,	// (0x000620ef) popup_call_audio_first_window_t4

0xc1bc,	// (0x0006217b) popup_call_audio_first_window_t5_ParamLimits

0xc1bc,	// (0x0006217b) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000650e2) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000650e2) popup_call_audio_first_window_t

0xc1eb,	// (0x000621aa) bg_popup_call_pane_cp02

0xc1f5,	// (0x000621b4) call_type_pane_cp023

0xc1fd,	// (0x000621bc) popup_call_audio_wait_window_g1

0xc205,	// (0x000621c4) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000650e9) popup_call_audio_wait_window_g

0xc20d,	// (0x000621cc) popup_call_audio_wait_window_t3

0xc21b,	// (0x000621da) bg_popup_call_pane_cp03_ParamLimits

0xc21b,	// (0x000621da) bg_popup_call_pane_cp03

0xc27b,	// (0x0006223a) call_thumbnail_pane_cp011_ParamLimits

0xc27b,	// (0x0006223a) call_thumbnail_pane_cp011

0xc287,	// (0x00062246) call_type_pane_cp034_ParamLimits

0xc287,	// (0x00062246) call_type_pane_cp034

0xc2c3,	// (0x00062282) popup_call_audio_second_window_g1_ParamLimits

0xc2c3,	// (0x00062282) popup_call_audio_second_window_g1

0xc2ff,	// (0x000622be) popup_call_audio_second_window_g2_ParamLimits

0xc2ff,	// (0x000622be) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000650ee) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000650ee) popup_call_audio_second_window_g

0xc33b,	// (0x000622fa) popup_call_audio_second_window_t1_ParamLimits

0xc33b,	// (0x000622fa) popup_call_audio_second_window_t1

0xc3bc,	// (0x0006237b) popup_call_audio_second_window_t2_ParamLimits

0xc3bc,	// (0x0006237b) popup_call_audio_second_window_t2

0xc3f2,	// (0x000623b1) popup_call_audio_second_window_t3_ParamLimits

0xc3f2,	// (0x000623b1) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000650f3) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000650f3) popup_call_audio_second_window_t

0xc1eb,	// (0x000621aa) bg_popup_call_pane_cp04

0xc428,	// (0x000623e7) list_conf_pane

0xc430,	// (0x000623ef) popup_call_audio_conf_window_t1

0xc43e,	// (0x000623fd) call_thumbnail_pane_g1

0xc446,	// (0x00062405) bg_pinb_pane_ParamLimits

0xc446,	// (0x00062405) bg_pinb_pane

0xc454,	// (0x00062413) find_pinb_pane

0xc45d,	// (0x0006241c) listscroll_pinb_pane_ParamLimits

0xc45d,	// (0x0006241c) listscroll_pinb_pane

0xc46c,	// (0x0006242b) pinb_bg_pane_g1

0x35da,	// (0x00059599) pinb_bg_pane_g2

0x35e6,	// (0x000595a5) pinb_bg_pane_g3

0x35f2,	// (0x000595b1) pinb_bg_pane_g4

0x35fe,	// (0x000595bd) pinb_bg_pane_g5

0x360a,	// (0x000595c9) pinb_bg_pane_g6

0x3615,	// (0x000595d4) pinb_bg_pane_g7

0x3620,	// (0x000595df) pinb_bg_pane_g8

0x362b,	// (0x000595ea) pinb_bg_pane_g9

0x3635,	// (0x000595f4) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000650fa) pinb_bg_pane_g

0x364a,	// (0x00059609) grid_pinb_pane

0x3653,	// (0x00059612) list_pinb_pane

0x365c,	// (0x0005961b) scroll_pane_cp01_ParamLimits

0x365c,	// (0x0005961b) scroll_pane_cp01

0xc47e,	// (0x0006243d) find_pinb_pane_g1_ParamLimits

0xc47e,	// (0x0006243d) find_pinb_pane_g1

0xc496,	// (0x00062455) find_pinb_pane_t1

0xc4a8,	// (0x00062467) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00065114) find_pinb_pane_t

0xc4bd,	// (0x0006247c) input_focus_pane_cp01_ParamLimits

0xc4bd,	// (0x0006247c) input_focus_pane_cp01

0x366e,	// (0x0005962d) cell_pinb_pane_ParamLimits

0x366e,	// (0x0005962d) cell_pinb_pane

0x36a0,	// (0x0005965f) cell_pinb_pane_g1_ParamLimits

0x36a0,	// (0x0005965f) cell_pinb_pane_g1

0x36b0,	// (0x0005966f) cell_pinb_pane_g2_ParamLimits

0x36b0,	// (0x0005966f) cell_pinb_pane_g2

0xc4c9,	// (0x00062488) cell_pinb_pane_g3_ParamLimits

0xc4c9,	// (0x00062488) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00065119) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00065119) cell_pinb_pane_g

0xc1eb,	// (0x000621aa) grid_highlight_pane_cp01

0x36bc,	// (0x0005967b) list_pinb_item_pane_ParamLimits

0x36bc,	// (0x0005967b) list_pinb_item_pane

0xc1eb,	// (0x000621aa) list_highlight_pane_cp02

0xc4d5,	// (0x00062494) list_pinb_item_pane_g1_ParamLimits

0xc4d5,	// (0x00062494) list_pinb_item_pane_g1

0xc4e2,	// (0x000624a1) list_pinb_item_pane_g2_ParamLimits

0xc4e2,	// (0x000624a1) list_pinb_item_pane_g2

0x36d0,	// (0x0005968f) list_pinb_item_pane_g3_ParamLimits

0x36d0,	// (0x0005968f) list_pinb_item_pane_g3

0xc4ee,	// (0x000624ad) list_pinb_item_pane_g4_ParamLimits

0xc4ee,	// (0x000624ad) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00065120) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00065120) list_pinb_item_pane_g

0xc4fa,	// (0x000624b9) list_pinb_item_pane_t1_ParamLimits

0xc4fa,	// (0x000624b9) list_pinb_item_pane_t1

0x36ff,	// (0x000596be) calc_display_pane

0x3725,	// (0x000596e4) calc_paper_pane

0x3748,	// (0x00059707) grid_calc_pane

0xc1eb,	// (0x000621aa) bg_list_pane_cp01

0x3774,	// (0x00059733) clock_g1

0x377c,	// (0x0005973b) clock_g2

0x0001,

0xf16a,	// (0x00065129) clock_g

0x3784,	// (0x00059743) clock_t1_ParamLimits

0x3784,	// (0x00059743) clock_t1

0x3799,	// (0x00059758) clock_t2_ParamLimits

0x3799,	// (0x00059758) clock_t2

0x37ab,	// (0x0005976a) clock_t3_ParamLimits

0x37ab,	// (0x0005976a) clock_t3

0x37bd,	// (0x0005977c) clock_t4_ParamLimits

0x37bd,	// (0x0005977c) clock_t4

0x37cf,	// (0x0005978e) clock_t5_ParamLimits

0x37cf,	// (0x0005978e) clock_t5

0x37e4,	// (0x000597a3) clock_t6_ParamLimits

0x37e4,	// (0x000597a3) clock_t6

0x37f6,	// (0x000597b5) clock_t7_ParamLimits

0x37f6,	// (0x000597b5) clock_t7

0x3808,	// (0x000597c7) clock_t8_ParamLimits

0x3808,	// (0x000597c7) clock_t8

0x381c,	// (0x000597db) clock_t9_ParamLimits

0x381c,	// (0x000597db) clock_t9

0x0008,

0xf16f,	// (0x0006512e) clock_t_ParamLimits

0xf16f,	// (0x0006512e) clock_t

0xc519,	// (0x000624d8) popup_clock_analogue_window_cp02

0xc519,	// (0x000624d8) popup_clock_digital_window_cp01

0xc521,	// (0x000624e0) listscroll_help_pane

0xc1eb,	// (0x000621aa) phob_pre_status_pane

0xc52b,	// (0x000624ea) grid_qdial_pane

0xc1eb,	// (0x000621aa) listscroll_mce_pane

0xc535,	// (0x000624f4) bg_notes_pane

0xc53f,	// (0x000624fe) list_notes_pane

0x3830,	// (0x000597ef) scroll_pane_cp06

0xc549,	// (0x00062508) bg_calc_paper_pane

0xc567,	// (0x00062526) list_calc_pane

0xc581,	// (0x00062540) bg_calc_display_pane

0x383b,	// (0x000597fa) calc_display_pane_t1

0x384d,	// (0x0005980c) calc_display_pane_t2

0xc58d,	// (0x0006254c) calc_display_pane_t3

0x0002,

0xf182,	// (0x00065141) calc_display_pane_t

0x385f,	// (0x0005981e) cell_calc_pane_ParamLimits

0x385f,	// (0x0005981e) cell_calc_pane

0xc59f,	// (0x0006255e) bg_calc_paper_pane_g1

0xc5ab,	// (0x0006256a) bg_calc_paper_pane_g2

0xc5b7,	// (0x00062576) bg_calc_paper_pane_g3

0xc5c3,	// (0x00062582) bg_calc_paper_pane_g4

0xc5cf,	// (0x0006258e) bg_calc_paper_pane_g5

0x3894,	// (0x00059853) bg_calc_paper_pane_g6

0x38a3,	// (0x00059862) bg_calc_paper_pane_g7

0x38b2,	// (0x00059871) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00065148) bg_calc_paper_pane_g

0x38c5,	// (0x00059884) calc_bg_paper_pane_g9

0x38d8,	// (0x00059897) list_calc_item_pane_ParamLimits

0x38d8,	// (0x00059897) list_calc_item_pane

0xc5db,	// (0x0006259a) list_calc_item_pane_g1

0xc5e8,	// (0x000625a7) list_calc_item_pane_t1_ParamLimits

0xc5e8,	// (0x000625a7) list_calc_item_pane_t1

0x38ee,	// (0x000598ad) list_calc_item_pane_t2_ParamLimits

0x38ee,	// (0x000598ad) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00065159) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00065159) list_calc_item_pane_t

0xc5fa,	// (0x000625b9) cell_calc_pane_g1

0xc604,	// (0x000625c3) grid_highlight_pane_cp02

0xc626,	// (0x000625e5) bg_calc_display_pane_g1

0xc62f,	// (0x000625ee) bg_calc_display_pane_g2

0xc639,	// (0x000625f8) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00065163) bg_calc_display_pane_g

0x3922,	// (0x000598e1) cell_qdial_pane_ParamLimits

0x3922,	// (0x000598e1) cell_qdial_pane

0x3936,	// (0x000598f5) cell_qdial_pane_g1_ParamLimits

0x3936,	// (0x000598f5) cell_qdial_pane_g1

0x394c,	// (0x0005990b) cell_qdial_pane_g2_ParamLimits

0x394c,	// (0x0005990b) cell_qdial_pane_g2

0xc642,	// (0x00062601) cell_qdial_pane_g3_ParamLimits

0xc642,	// (0x00062601) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0006516a) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0006516a) cell_qdial_pane_g

0x3973,	// (0x00059932) cell_qdial_pane_t1_ParamLimits

0x3973,	// (0x00059932) cell_qdial_pane_t1

0x398b,	// (0x0005994a) cell_qdial_pane_t2_ParamLimits

0x398b,	// (0x0005994a) cell_qdial_pane_t2

0x399e,	// (0x0005995d) cell_qdial_pane_t3_ParamLimits

0x399e,	// (0x0005995d) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00065173) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00065173) cell_qdial_pane_t

0xc1eb,	// (0x000621aa) grid_highlight_pane_cp04

0xc64e,	// (0x0006260d) thumbnail_qdial_pane_ParamLimits

0xc64e,	// (0x0006260d) thumbnail_qdial_pane

0xc6aa,	// (0x00062669) list_help_pane

0xc6b3,	// (0x00062672) scroll_pane_cp02

0x39b1,	// (0x00059970) help_list_pane_t1_ParamLimits

0x39b1,	// (0x00059970) help_list_pane_t1

0xc6bc,	// (0x0006267b) bg_notes_pane_g2

0xc6c4,	// (0x00062683) bg_notes_pane_g3

0xc6cc,	// (0x0006268b) notes_bg_pane_g1

0xc6d4,	// (0x00062693) notes_bg_pane_g4

0xc6dc,	// (0x0006269b) notes_bg_pane_g5

0xc6e4,	// (0x000626a3) notes_bg_pane_g6

0xc6ec,	// (0x000626ab) notes_bg_pane_g7

0xc6f4,	// (0x000626b3) notes_bg_pane_g8

0xc6fc,	// (0x000626bb) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00065191) notes_bg_pane_g

0x237c,	// (0x0005833b) list_notes_text_pane_ParamLimits

0x237c,	// (0x0005833b) list_notes_text_pane

0xc704,	// (0x000626c3) list_notes_text_pane_g1

0x39d1,	// (0x00059990) list_notes_text_pane_t1

0xc581,	// (0x00062540) listscroll_cale_week_pane

0x39fc,	// (0x000599bb) bg_cale_heading_pane

0xc71e,	// (0x000626dd) bg_cale_pane_cp01

0x3a14,	// (0x000599d3) cale_week_corner_pane

0x3a25,	// (0x000599e4) cale_week_day_heading_pane

0x3a3d,	// (0x000599fc) cale_week_scroll_pane_g1

0x3a52,	// (0x00059a11) cale_week_scroll_pane_g2

0x3a63,	// (0x00059a22) cale_week_scroll_pane_g3

0x3a74,	// (0x00059a33) cale_week_scroll_pane_g4

0x3a85,	// (0x00059a44) cale_week_scroll_pane_g5

0x3a96,	// (0x00059a55) cale_week_scroll_pane_g6

0x3aa7,	// (0x00059a66) cale_week_scroll_pane_g7

0x3ab8,	// (0x00059a77) cale_week_scroll_pane_g8

0x3ac9,	// (0x00059a88) cale_week_scroll_pane_g9

0x3ada,	// (0x00059a99) cale_week_scroll_pane_g10

0x3aeb,	// (0x00059aaa) cale_week_scroll_pane_g11

0x3afc,	// (0x00059abb) cale_week_scroll_pane_g12

0x3b0d,	// (0x00059acc) cale_week_scroll_pane_g13

0x3b1e,	// (0x00059add) cale_week_scroll_pane_g14

0x3b2f,	// (0x00059aee) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x000651a0) cale_week_scroll_pane_g

0x3b40,	// (0x00059aff) cale_week_time_pane

0x3b51,	// (0x00059b10) grid_cale_week_pane

0x3b64,	// (0x00059b23) scroll_pane_cp08

0x3b7e,	// (0x00059b3d) cell_cale_week_pane_ParamLimits

0x3b7e,	// (0x00059b3d) cell_cale_week_pane

0x3bba,	// (0x00059b79) cale_week_day_heading_pane_t1

0x3bce,	// (0x00059b8d) cale_week_day_heading_pane_t2

0x3be2,	// (0x00059ba1) cale_week_day_heading_pane_t3

0x3bf6,	// (0x00059bb5) cale_week_day_heading_pane_t4

0x3c0a,	// (0x00059bc9) cale_week_day_heading_pane_t5

0x3c1e,	// (0x00059bdd) cale_week_day_heading_pane_t6

0x3c32,	// (0x00059bf1) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000651bf) cale_week_day_heading_pane_t

0xc749,	// (0x00062708) bg_cale_side_pane

0x3c46,	// (0x00059c05) cale_week_time_pane_t1

0x3c5e,	// (0x00059c1d) cale_week_time_pane_t2

0x3c76,	// (0x00059c35) cale_week_time_pane_t3

0x3c8e,	// (0x00059c4d) cale_week_time_pane_t4

0x3ca6,	// (0x00059c65) cale_week_time_pane_t5

0x3cbe,	// (0x00059c7d) cale_week_time_pane_t6

0x3cd6,	// (0x00059c95) cale_week_time_pane_t7

0x3cee,	// (0x00059cad) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000651ce) cale_week_time_pane_t

0x3d06,	// (0x00059cc5) cell_cale_week_pane_g2

0x3d22,	// (0x00059ce1) cell_cale_week_pane_g3_ParamLimits

0x3d22,	// (0x00059ce1) cell_cale_week_pane_g3

0xc757,	// (0x00062716) grid_highlight_pane_cp07

0xc75f,	// (0x0006271e) listscroll_gms_pane

0xc769,	// (0x00062728) grid_gms_pane

0xc772,	// (0x00062731) listscroll_gms_pane_g1

0xc77a,	// (0x00062739) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000651df) listscroll_gms_pane_g

0x3d3a,	// (0x00059cf9) scroll_pane_cp010

0x3d45,	// (0x00059d04) cell_gms_pane_ParamLimits

0x3d45,	// (0x00059d04) cell_gms_pane

0x3d58,	// (0x00059d17) cell_gms_pane_g1

0xc782,	// (0x00062741) cell_gms_pane_g2

0xc704,	// (0x000626c3) cell_gms_pane_g3

0xc78a,	// (0x00062749) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000651e4) cell_gms_pane_g

0xc793,	// (0x00062752) grid_highlight_pane_cp09

0x5f4c,	// (0x0005bf0b) phob_pre_status_pane_g1

0x5f54,	// (0x0005bf13) phob_pre_status_pane_g2

0x5f5c,	// (0x0005bf1b) phob_pre_status_pane_g3

0x5f64,	// (0x0005bf23) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x000655d3) phob_pre_status_pane_g

0x5f76,	// (0x0005bf35) phob_pre_status_pane_t1

0x5f84,	// (0x0005bf43) phob_pre_status_pane_t2

0x5f94,	// (0x0005bf53) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x000655de) phob_pre_status_pane_t

0xc1eb,	// (0x000621aa) bg_list_pane_cp05

0xc7a3,	// (0x00062762) grid_vorec_pane

0xc7ab,	// (0x0006276a) vorec_t1

0xc7b9,	// (0x00062778) vorec_t2

0xc7c7,	// (0x00062786) vorec_t3

0xc7d5,	// (0x00062794) vorec_t4

0xc7e3,	// (0x000627a2) vorec_t5

0xc7f1,	// (0x000627b0) vorec_t6

0x0006,

0xf22e,	// (0x000651ed) vorec_t

0xc80d,	// (0x000627cc) wait_bar_pane_cp01

0xc815,	// (0x000627d4) cell_vorec_pane_ParamLimits

0xc815,	// (0x000627d4) cell_vorec_pane

0xc828,	// (0x000627e7) cell_vorec_pane_g1

0xc1eb,	// (0x000621aa) grid_highlight_pane_cp05

0x3d78,	// (0x00059d37) cams_zoom_pane

0x3d87,	// (0x00059d46) image_vga_pane

0x3da1,	// (0x00059d60) main_camera_pane_g1

0x3db3,	// (0x00059d72) main_camera_pane_g2

0x3dc5,	// (0x00059d84) main_camera_pane_g3

0x3dd7,	// (0x00059d96) main_camera_pane_g4

0x3de9,	// (0x00059da8) main_camera_pane_g5

0x3dfb,	// (0x00059dba) main_camera_pane_g6

0x3e0d,	// (0x00059dcc) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000651fc) main_camera_pane_g

0x3e1f,	// (0x00059dde) main_camera_pane_t1

0x3e35,	// (0x00059df4) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0006520d) main_camera_pane_t

0x3e71,	// (0x00059e30) cams_zoom_pane_cp_ParamLimits

0x3e71,	// (0x00059e30) cams_zoom_pane_cp

0x3e99,	// (0x00059e58) image_cif_pane_ParamLimits

0x3e99,	// (0x00059e58) image_cif_pane

0x3ed4,	// (0x00059e93) image_subqcif_pane

0x3edc,	// (0x00059e9b) main_video_pane_g1_ParamLimits

0x3edc,	// (0x00059e9b) main_video_pane_g1

0x3f00,	// (0x00059ebf) main_video_pane_g2_ParamLimits

0x3f00,	// (0x00059ebf) main_video_pane_g2

0x3f36,	// (0x00059ef5) main_video_pane_g3_ParamLimits

0x3f36,	// (0x00059ef5) main_video_pane_g3

0x3f66,	// (0x00059f25) main_video_pane_g4_ParamLimits

0x3f66,	// (0x00059f25) main_video_pane_g4

0x3f96,	// (0x00059f55) main_video_pane_g5_ParamLimits

0x3f96,	// (0x00059f55) main_video_pane_g5

0xc83e,	// (0x000627fd) main_video_pane_g6_ParamLimits

0xc83e,	// (0x000627fd) main_video_pane_g6

0x0006,

0xf253,	// (0x00065212) main_video_pane_g_ParamLimits

0xf253,	// (0x00065212) main_video_pane_g

0x3fc1,	// (0x00059f80) main_video_pane_t1_ParamLimits

0x3fc1,	// (0x00059f80) main_video_pane_t1

0xc858,	// (0x00062817) cams_zoom_pane_g1

0xc861,	// (0x00062820) cams_zoom_pane_g2

0xc86a,	// (0x00062829) cams_zoom_pane_g3

0xc873,	// (0x00062832) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00065221) cams_zoom_pane_g

0x401e,	// (0x00059fdd) grid_cams_pane

0x4038,	// (0x00059ff7) linegrid_cams_pane

0x404b,	// (0x0005a00a) cell_cams_pane_ParamLimits

0x404b,	// (0x0005a00a) cell_cams_pane

0xc87c,	// (0x0006283b) cams_burst_image_pane

0xc884,	// (0x00062843) cell_cams_pane_g1

0xc1eb,	// (0x000621aa) grid_highlight_pane_cp03

0xc5fa,	// (0x000625b9) mp_bg_pane_g1

0xc1eb,	// (0x000621aa) bg_list_pane_cp03

0x1bb0,	// (0x00057b6f) bg_mp_pane

0x1bb8,	// (0x00057b77) grid_mp_pane

0x1bc0,	// (0x00057b7f) media_player_g1

0x1bc8,	// (0x00057b87) media_player_t1

0x1bd6,	// (0x00057b95) media_player_t2

0x1be4,	// (0x00057ba3) media_player_t3

0x1bf2,	// (0x00057bb1) media_player_t4

0x1c00,	// (0x00057bbf) media_player_t5

0x1c0e,	// (0x00057bcd) media_player_t6

0x1c1c,	// (0x00057bdb) media_player_t7

0x0006,

0xf5fe,	// (0x000655bd) media_player_t

0x1c2a,	// (0x00057be9) wait_bar_pane_cp02

0xf5e3,	// (0x000655a2) main_usb_pane_t

0x5f43,	// (0x0005bf02) cell_mp_pane

0xc5fa,	// (0x000625b9) cell_mp_pane_g1

0xc1eb,	// (0x000621aa) grid_highlight_pane_cp06

0xc88c,	// (0x0006284b) grid_skin_colour_pane

0xc894,	// (0x00062853) list_highlight_pane_cp03

0x4163,	// (0x0005a122) skin_g1

0xc89c,	// (0x0006285b) skin_t1

0xc8ab,	// (0x0006286a) skin_t2

0x0001,

0xf297,	// (0x00065256) skin_t

0x416b,	// (0x0005a12a) cell_skin_colour_pane_ParamLimits

0x416b,	// (0x0005a12a) cell_skin_colour_pane

0xc8b9,	// (0x00062878) cell_skin_colour_pane_g1

0x41c9,	// (0x0005a188) call_video_g1_ParamLimits

0x41c9,	// (0x0005a188) call_video_g1

0x41e5,	// (0x0005a1a4) call_video_g2_ParamLimits

0x41e5,	// (0x0005a1a4) call_video_g2

0x0001,

0xf29c,	// (0x0006525b) call_video_g_ParamLimits

0xf29c,	// (0x0006525b) call_video_g

0x421b,	// (0x0005a1da) call_video_uplink_pane_cp1_ParamLimits

0x421b,	// (0x0005a1da) call_video_uplink_pane_cp1

0xc8d3,	// (0x00062892) call_video_uplink_pane_cp2

0x4299,	// (0x0005a258) video_down_crop_pane_ParamLimits

0x4299,	// (0x0005a258) video_down_crop_pane

0x435f,	// (0x0005a31e) video_down_pane_ParamLimits

0x435f,	// (0x0005a31e) video_down_pane

0xc8db,	// (0x0006289a) video_down_subqcif_pane_ParamLimits

0xc8db,	// (0x0006289a) video_down_subqcif_pane

0xc8f3,	// (0x000628b2) video_down_subqcif_pane_cp_ParamLimits

0xc8f3,	// (0x000628b2) video_down_subqcif_pane_cp

0xc917,	// (0x000628d6) im_reading_pane_ParamLimits

0xc917,	// (0x000628d6) im_reading_pane

0x4430,	// (0x0005a3ef) im_writing_pane_ParamLimits

0x4430,	// (0x0005a3ef) im_writing_pane

0x4446,	// (0x0005a405) im_reading_pane_t1

0xc931,	// (0x000628f0) list_im_pane

0xc942,	// (0x00062901) scroll_pane_cp07

0x4482,	// (0x0005a441) im_writing_pane_t1_ParamLimits

0x4482,	// (0x0005a441) im_writing_pane_t1

0xc95b,	// (0x0006291a) im_writing_pane_t2_ParamLimits

0xc95b,	// (0x0006291a) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00065265) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00065265) im_writing_pane_t

0xc1eb,	// (0x000621aa) input_focus_pane_cp04

0xc1eb,	// (0x000621aa) input_focus_pane_cp05

0x4497,	// (0x0005a456) list_im_single_pane_ParamLimits

0x4497,	// (0x0005a456) list_im_single_pane

0x44ad,	// (0x0005a46c) list_single_im_pane_t1

0x5f03,	// (0x0005bec2) blid_accuracy_pane

0x5f0b,	// (0x0005beca) blid_compass_pane

0x5f15,	// (0x0005bed4) main_location_t1

0x5f25,	// (0x0005bee4) main_location_t2

0x5f35,	// (0x0005bef4) main_location_t3

0x0002,

0xf60d,	// (0x000655cc) main_location_t

0xc1eb,	// (0x000621aa) aid_levels_location

0xc5fa,	// (0x000625b9) blid_accuracy_pane_g1

0xc5fa,	// (0x000625b9) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000652c7) blid_accuracy_pane_g

0xc9a3,	// (0x00062962) wml_content_pane

0xc9e1,	// (0x000629a0) wml_button_pane_ParamLimits

0xc9e1,	// (0x000629a0) wml_button_pane

0x44bc,	// (0x0005a47b) wml_list_single_large_pane_ParamLimits

0x44bc,	// (0x0005a47b) wml_list_single_large_pane

0x44d3,	// (0x0005a492) wml_list_single_medium_pane_ParamLimits

0x44d3,	// (0x0005a492) wml_list_single_medium_pane

0x44eb,	// (0x0005a4aa) wml_list_single_small_pane_ParamLimits

0x44eb,	// (0x0005a4aa) wml_list_single_small_pane

0xc9f5,	// (0x000629b4) wml_selection_box_pane_ParamLimits

0xc9f5,	// (0x000629b4) wml_selection_box_pane

0xca08,	// (0x000629c7) wml_list_single_pane_t1

0xca17,	// (0x000629d6) wml_list_single_medium_pane_t1

0xca26,	// (0x000629e5) wml_list_single_large_pane_t1

0xca35,	// (0x000629f4) input_focus_pane_cp02_ParamLimits

0xca35,	// (0x000629f4) input_focus_pane_cp02

0xca48,	// (0x00062a07) wml_selection_box_pane_g1

0xca51,	// (0x00062a10) wml_selection_box_pane_t1_ParamLimits

0xca51,	// (0x00062a10) wml_selection_box_pane_t1

0xc446,	// (0x00062405) bg_wml_button_pane_ParamLimits

0xc446,	// (0x00062405) bg_wml_button_pane

0xca69,	// (0x00062a28) wml_button_pane_g1

0xca71,	// (0x00062a30) wml_button_pane_t1

0xca69,	// (0x00062a28) wml_button_bg_pane_g1

0xca81,	// (0x00062a40) wml_button_bg_pane_g2

0xca89,	// (0x00062a48) wml_button_bg_pane_g3

0xca91,	// (0x00062a50) wml_button_bg_pane_g4

0xca99,	// (0x00062a58) wml_button_bg_pane_g5

0xcaa1,	// (0x00062a60) wml_button_bg_pane_g6

0xcaa9,	// (0x00062a68) wml_button_bg_pane_g7

0xcab1,	// (0x00062a70) wml_button_bg_pane_g8

0xcab9,	// (0x00062a78) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0006526a) wml_button_bg_pane_g

0x4509,	// (0x0005a4c8) bg_list_pane_cp02

0xcac1,	// (0x00062a80) mce_header_pane_ParamLimits

0xcac1,	// (0x00062a80) mce_header_pane

0xcad7,	// (0x00062a96) mce_icon_pane

0xcad7,	// (0x00062a96) mce_image_pane

0xcae0,	// (0x00062a9f) mce_text_pane_ParamLimits

0xcae0,	// (0x00062a9f) mce_text_pane

0x4511,	// (0x0005a4d0) scroll_pane_cp03

0xc9d9,	// (0x00062998) scroll_pane_cp04

0x027e,	// (0x0005623d) scroll_pane_cp05_ParamLimits

0x027e,	// (0x0005623d) scroll_pane_cp05

0x451b,	// (0x0005a4da) mce_header_field_pane_ParamLimits

0x451b,	// (0x0005a4da) mce_header_field_pane

0x4532,	// (0x0005a4f1) mce_header_field_pane_2_ParamLimits

0x4532,	// (0x0005a4f1) mce_header_field_pane_2

0x4548,	// (0x0005a507) mce_header_field_pane_3

0x4550,	// (0x0005a50f) list_single_mce_message_pane_ParamLimits

0x4550,	// (0x0005a50f) list_single_mce_message_pane

0x4568,	// (0x0005a527) list_single_mce_smart_pane_ParamLimits

0x4568,	// (0x0005a527) list_single_mce_smart_pane

0x028a,	// (0x00056249) input_focus_pane_cp03

0x0293,	// (0x00056252) list_header_data_pane

0x458b,	// (0x0005a54a) mce_header_field_pane_t1

0x459b,	// (0x0005a55a) list_single_mce_header_pane_ParamLimits

0x459b,	// (0x0005a55a) list_single_mce_header_pane

0x029b,	// (0x0005625a) list_single_mce_header_pane_t1

0x02aa,	// (0x00056269) list_single_mce_message_pane_g1

0x02b2,	// (0x00056271) list_single_mce_message_pane_t1

0x45cd,	// (0x0005a58c) bg_cale_heading_pane_cp01_ParamLimits

0x45cd,	// (0x0005a58c) bg_cale_heading_pane_cp01

0x02c0,	// (0x0005627f) bg_cale_pane_cp02_ParamLimits

0x02c0,	// (0x0005627f) bg_cale_pane_cp02

0x45f0,	// (0x0005a5af) cale_month_corner_pane

0x4606,	// (0x0005a5c5) cale_month_day_heading_pane_ParamLimits

0x4606,	// (0x0005a5c5) cale_month_day_heading_pane

0x4631,	// (0x0005a5f0) cale_month_pane_g1_ParamLimits

0x4631,	// (0x0005a5f0) cale_month_pane_g1

0x464d,	// (0x0005a60c) cale_month_pane_g2_ParamLimits

0x464d,	// (0x0005a60c) cale_month_pane_g2

0x4666,	// (0x0005a625) cale_month_pane_g3_ParamLimits

0x4666,	// (0x0005a625) cale_month_pane_g3

0x4692,	// (0x0005a651) cale_month_pane_g4_ParamLimits

0x4692,	// (0x0005a651) cale_month_pane_g4

0x46be,	// (0x0005a67d) cale_month_pane_g5_ParamLimits

0x46be,	// (0x0005a67d) cale_month_pane_g5

0x46ea,	// (0x0005a6a9) cale_month_pane_g6_ParamLimits

0x46ea,	// (0x0005a6a9) cale_month_pane_g6

0x4716,	// (0x0005a6d5) cale_month_pane_g7_ParamLimits

0x4716,	// (0x0005a6d5) cale_month_pane_g7

0x4742,	// (0x0005a701) cale_month_pane_g8_ParamLimits

0x4742,	// (0x0005a701) cale_month_pane_g8

0x4776,	// (0x0005a735) cale_month_pane_g9_ParamLimits

0x4776,	// (0x0005a735) cale_month_pane_g9

0x47a8,	// (0x0005a767) cale_month_pane_g10_ParamLimits

0x47a8,	// (0x0005a767) cale_month_pane_g10

0x47da,	// (0x0005a799) cale_month_pane_g11_ParamLimits

0x47da,	// (0x0005a799) cale_month_pane_g11

0x480c,	// (0x0005a7cb) cale_month_pane_g12_ParamLimits

0x480c,	// (0x0005a7cb) cale_month_pane_g12

0x483e,	// (0x0005a7fd) cale_month_pane_g13_ParamLimits

0x483e,	// (0x0005a7fd) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0006527d) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0006527d) cale_month_pane_g

0x4870,	// (0x0005a82f) cale_month_week_pane

0x4881,	// (0x0005a840) grid_cale_month_pane_ParamLimits

0x4881,	// (0x0005a840) grid_cale_month_pane

0x48a7,	// (0x0005a866) cale_month_day_heading_pane_t1

0x4905,	// (0x0005a8c4) cale_month_day_heading_pane_t2

0x496a,	// (0x0005a929) cale_month_day_heading_pane_t3

0x49cf,	// (0x0005a98e) cale_month_day_heading_pane_t4

0x4a34,	// (0x0005a9f3) cale_month_day_heading_pane_t5

0x4a99,	// (0x0005aa58) cale_month_day_heading_pane_t6

0x4afe,	// (0x0005aabd) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00065298) cale_month_day_heading_pane_t

0xc749,	// (0x00062708) bg_cale_side_pane_cp01

0x4b63,	// (0x0005ab22) cale_month_week_pane_t1

0x4b7a,	// (0x0005ab39) cale_month_week_pane_t2

0x4b91,	// (0x0005ab50) cale_month_week_pane_t3

0x4ba8,	// (0x0005ab67) cale_month_week_pane_t4

0x4bbf,	// (0x0005ab7e) cale_month_week_pane_t5

0x4bd6,	// (0x0005ab95) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000652a7) cale_month_week_pane_t

0x4bed,	// (0x0005abac) cell_cale_month_pane_ParamLimits

0x4bed,	// (0x0005abac) cell_cale_month_pane

0xcaf3,	// (0x00062ab2) cell_cale_month_pane_g1

0x4cbd,	// (0x0005ac7c) cell_cale_month_pane_t1_ParamLimits

0x4cbd,	// (0x0005ac7c) cell_cale_month_pane_t1

0xc757,	// (0x00062716) grid_highlight_pane_cp08

0xc5fa,	// (0x000625b9) main_smil_g1

0x4cd9,	// (0x0005ac98) smil_status_pane

0x02f5,	// (0x000562b4) smil_text_pane

0x1ad0,	// (0x00057a8f) bg_popup_call3_rect_pane_g8

0x1ad8,	// (0x00057a97) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00065560) bg_popup_call3_rect_pane_g

0x1d60,	// (0x00057d1f) smil_status_volume_pane_g1

0x02ff,	// (0x000562be) smil_status_pane_t1

0xcbf1,	// (0x00062bb0) volume_smil_pane

0x0316,	// (0x000562d5) list_smil_text_pane

0x4cee,	// (0x0005acad) scroll_pane_cp011

0x4cf9,	// (0x0005acb8) smil_text_list_pane_t1_ParamLimits

0x4cf9,	// (0x0005acb8) smil_text_list_pane_t1

0xcaff,	// (0x00062abe) aid_volume_smil_ParamLimits

0xcaff,	// (0x00062abe) aid_volume_smil

0xc5fa,	// (0x000625b9) smil_volume_pane_g1

0xc5fa,	// (0x000625b9) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000652c7) smil_volume_pane_g

0xc581,	// (0x00062540) listscroll_cale_day_pane

0x0320,	// (0x000562df) bg_cale_pane

0x0338,	// (0x000562f7) list_cale_pane

0x0349,	// (0x00056308) scroll_pane_cp09

0x035a,	// (0x00056319) cale_bg_pane_g1

0x0362,	// (0x00056321) cale_bg_pane_g2

0x036a,	// (0x00056329) cale_bg_pane_g3

0x0372,	// (0x00056331) cale_bg_pane_g4

0x037a,	// (0x00056339) cale_bg_pane_g5

0x0382,	// (0x00056341) cale_bg_pane_g6

0x038a,	// (0x00056349) cale_bg_pane_g7

0x0392,	// (0x00056351) cale_bg_pane_g8

0x039a,	// (0x00056359) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000652cc) cale_bg_pane_g

0x4d4d,	// (0x0005ad0c) list_cale_time_pane_ParamLimits

0x4d4d,	// (0x0005ad0c) list_cale_time_pane

0x4d62,	// (0x0005ad21) list_cale_time_pane_g1_ParamLimits

0x4d62,	// (0x0005ad21) list_cale_time_pane_g1

0x03a2,	// (0x00056361) list_cale_time_pane_g2_ParamLimits

0x03a2,	// (0x00056361) list_cale_time_pane_g2

0x4d6e,	// (0x0005ad2d) list_cale_time_pane_g3_ParamLimits

0x4d6e,	// (0x0005ad2d) list_cale_time_pane_g3

0x4d8a,	// (0x0005ad49) list_cale_time_pane_g4_ParamLimits

0x4d8a,	// (0x0005ad49) list_cale_time_pane_g4

0x4d98,	// (0x0005ad57) list_cale_time_pane_g5_ParamLimits

0x4d98,	// (0x0005ad57) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000652df) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000652df) list_cale_time_pane_g

0x4da6,	// (0x0005ad65) list_cale_time_pane_t1_ParamLimits

0x4da6,	// (0x0005ad65) list_cale_time_pane_t1

0x4dce,	// (0x0005ad8d) list_cale_time_pane_t2_ParamLimits

0x4dce,	// (0x0005ad8d) list_cale_time_pane_t2

0x5170,	// (0x0005b12f) aid_blid_cardinal_pane

0x51ae,	// (0x0005b16d) compass_pane_t4

0x4df6,	// (0x0005adb5) list_cale_time_pane_t4_ParamLimits

0x4df6,	// (0x0005adb5) list_cale_time_pane_t4

0x51bc,	// (0x0005b17b) compass_pane_t5

0x51ca,	// (0x0005b189) compass_pane_t6

0x51d8,	// (0x0005b197) compass_pane_t7

0x07de,	// (0x0005679d) navi_pane_cc_t1

0x0933,	// (0x000568f2) aid_phob_thumbnail_center_pane

0x590f,	// (0x0005b8ce) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000652ec) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000652ec) list_cale_time_pane_t

0xbe44,	// (0x00061e03) bg_popup_window_pane_cp02_ParamLimits

0xbe44,	// (0x00061e03) bg_popup_window_pane_cp02

0x03bc,	// (0x0005637b) heading_pane_cp01_ParamLimits

0x03bc,	// (0x0005637b) heading_pane_cp01

0x03c8,	// (0x00056387) loc_req_pane_ParamLimits

0x03c8,	// (0x00056387) loc_req_pane

0x03d8,	// (0x00056397) loc_type_pane_ParamLimits

0x03d8,	// (0x00056397) loc_type_pane

0x03ea,	// (0x000563a9) loc_type_pane_t1_ParamLimits

0x03ea,	// (0x000563a9) loc_type_pane_t1

0x03fc,	// (0x000563bb) loc_type_pane_t2_ParamLimits

0x03fc,	// (0x000563bb) loc_type_pane_t2

0x040e,	// (0x000563cd) loc_type_pane_t3_ParamLimits

0x040e,	// (0x000563cd) loc_type_pane_t3

0x0002,

0xf334,	// (0x000652f3) loc_type_pane_t_ParamLimits

0xf334,	// (0x000652f3) loc_type_pane_t

0x0420,	// (0x000563df) list_loc_req_pane

0x042a,	// (0x000563e9) scroll_pane_cp012

0x4e1e,	// (0x0005addd) list_single_loc_request_popup_menu_pane_ParamLimits

0x4e1e,	// (0x0005addd) list_single_loc_request_popup_menu_pane

0x0435,	// (0x000563f4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0435,	// (0x000563f4) list_single_loc_request_popup_menu_pane_g1

0x0441,	// (0x00056400) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0441,	// (0x00056400) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000652fa) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000652fa) list_single_loc_request_popup_menu_pane_g

0x044d,	// (0x0005640c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x044d,	// (0x0005640c) list_single_loc_request_popup_menu_pane_t1

0xc446,	// (0x00062405) bg_popup_window_pane_cp03_ParamLimits

0xc446,	// (0x00062405) bg_popup_window_pane_cp03

0x2370,	// (0x0005832f) heading_loc_req_pane_ParamLimits

0x2370,	// (0x0005832f) heading_loc_req_pane

0x4e2b,	// (0x0005adea) popup_dyc_status_message_window_g1_ParamLimits

0x4e2b,	// (0x0005adea) popup_dyc_status_message_window_g1

0x4e3f,	// (0x0005adfe) popup_dyc_status_message_window_t1_ParamLimits

0x4e3f,	// (0x0005adfe) popup_dyc_status_message_window_t1

0x4e54,	// (0x0005ae13) popup_dyc_status_message_window_t2_ParamLimits

0x4e54,	// (0x0005ae13) popup_dyc_status_message_window_t2

0x4e69,	// (0x0005ae28) popup_dyc_status_message_window_t3_ParamLimits

0x4e69,	// (0x0005ae28) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000652ff) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000652ff) popup_dyc_status_message_window_t

0xc1eb,	// (0x000621aa) bg_heading_pane_cp01

0x0463,	// (0x00056422) heading_loc_req_pane_g1

0x046b,	// (0x0005642a) heading_loc_req_pane_g2

0x0473,	// (0x00056432) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00065306) heading_loc_req_pane_g

0x047b,	// (0x0005643a) heading_loc_req_pane_t1

0x048a,	// (0x00056449) bg_popup_sub_pane_cp01_ParamLimits

0x048a,	// (0x00056449) bg_popup_sub_pane_cp01

0x0498,	// (0x00056457) popup_cale_events_window_g1_ParamLimits

0x0498,	// (0x00056457) popup_cale_events_window_g1

0x04b8,	// (0x00056477) popup_cale_events_window_g2_ParamLimits

0x04b8,	// (0x00056477) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0006533a) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0006533a) popup_cale_events_window_g

0x04d8,	// (0x00056497) popup_cale_events_window_t1_ParamLimits

0x04d8,	// (0x00056497) popup_cale_events_window_t1

0x04ea,	// (0x000564a9) popup_cale_events_window_t2_ParamLimits

0x04ea,	// (0x000564a9) popup_cale_events_window_t2

0x0528,	// (0x000564e7) popup_cale_events_window_t3_ParamLimits

0x0528,	// (0x000564e7) popup_cale_events_window_t3

0x0562,	// (0x00056521) popup_cale_events_window_t4_ParamLimits

0x0562,	// (0x00056521) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0006533f) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0006533f) popup_cale_events_window_t

0x4f6c,	// (0x0005af2b) call_type_pane

0x4f7c,	// (0x0005af3b) popup_call_status_window_g1

0x4f90,	// (0x0005af4f) popup_call_status_window_g2

0x4fa4,	// (0x0005af63) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00065348) popup_call_status_window_g

0x05a6,	// (0x00056565) call_type_pane_g1

0x05af,	// (0x0005656e) call_type_pane_g2

0x0001,

0xf390,	// (0x0006534f) call_type_pane_g

0xc1eb,	// (0x000621aa) bg_popup_sub_pane_cp02

0x05b8,	// (0x00056577) listscroll_popup_wml_pane

0x05c0,	// (0x0005657f) list_wml_pane

0x05ca,	// (0x00056589) scroll_pane_cp013

0x05d5,	// (0x00056594) list_single_graphic_popup_wml_pane_ParamLimits

0x05d5,	// (0x00056594) list_single_graphic_popup_wml_pane

0xc5fa,	// (0x000625b9) list_single_graphic_popup_wml_pane_g1

0x05e9,	// (0x000565a8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00065354) list_single_graphic_popup_wml_pane_g

0x05f1,	// (0x000565b0) list_single_graphic_popup_wml_pane_t1

0x0607,	// (0x000565c6) aid_call_pane

0xc43e,	// (0x000623fd) popup_clock_analogue_window_g1

0xc43e,	// (0x000623fd) popup_clock_analogue_window_g2

0xcb21,	// (0x00062ae0) popup_clock_analogue_window_g3

0xcb21,	// (0x00062ae0) popup_clock_analogue_window_g4

0xc5fa,	// (0x000625b9) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00065359) popup_clock_analogue_window_g

0xcb29,	// (0x00062ae8) popup_clock_analogue_window_t1

0xcb37,	// (0x00062af6) clock_digital_number_pane_ParamLimits

0xcb37,	// (0x00062af6) clock_digital_number_pane

0xcb43,	// (0x00062b02) clock_digital_number_pane_cp02_ParamLimits

0xcb43,	// (0x00062b02) clock_digital_number_pane_cp02

0xcb4f,	// (0x00062b0e) clock_digital_number_pane_cp03_ParamLimits

0xcb4f,	// (0x00062b0e) clock_digital_number_pane_cp03

0xcb5b,	// (0x00062b1a) clock_digital_number_pane_cp04_ParamLimits

0xcb5b,	// (0x00062b1a) clock_digital_number_pane_cp04

0xcb67,	// (0x00062b26) clock_digital_separator_pane_ParamLimits

0xcb67,	// (0x00062b26) clock_digital_separator_pane

0xcb73,	// (0x00062b32) popup_clock_digital_window_t1

0xc5fa,	// (0x000625b9) clock_digital_number_pane_g1

0xc5fa,	// (0x000625b9) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000652c7) clock_digital_number_pane_g

0xc5fa,	// (0x000625b9) clock_digital_separator_pane_g1

0xc5fa,	// (0x000625b9) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000652c7) clock_digital_separator_pane_g

0xc1eb,	// (0x000621aa) bg_popup_window_pane_cp04

0x060f,	// (0x000565ce) heading_pane_cp03

0x0617,	// (0x000565d6) listscroll_popup_gms_pane

0x061f,	// (0x000565de) grid_large_graphic_popup_pane

0x0629,	// (0x000565e8) listscroll_popup_gms_pane_g1

0x0631,	// (0x000565f0) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00065364) listscroll_popup_gms_pane_g

0xc9d9,	// (0x00062998) scroll_pane_cp014

0x0639,	// (0x000565f8) cell_large_graphic_popup_pane_ParamLimits

0x0639,	// (0x000565f8) cell_large_graphic_popup_pane

0x0651,	// (0x00056610) cell_large_graphic_popup_pane_g1_ParamLimits

0x0651,	// (0x00056610) cell_large_graphic_popup_pane_g1

0x065d,	// (0x0005661c) cell_large_graphic_popup_pane_g2_ParamLimits

0x065d,	// (0x0005661c) cell_large_graphic_popup_pane_g2

0x0669,	// (0x00056628) cell_large_graphic_popup_pane_g3_ParamLimits

0x0669,	// (0x00056628) cell_large_graphic_popup_pane_g3

0x0676,	// (0x00056635) cell_large_graphic_popup_pane_g4_ParamLimits

0x0676,	// (0x00056635) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00065369) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00065369) cell_large_graphic_popup_pane_g

0x0686,	// (0x00056645) grid_highlight_pane_cp010

0xc5fa,	// (0x000625b9) bg_popup_call_pane_g1

0x0690,	// (0x0005664f) list_single_graphic_popup_conf_pane_ParamLimits

0x0690,	// (0x0005664f) list_single_graphic_popup_conf_pane

0x06a2,	// (0x00056661) list_highlight_pane_cp01

0x06ab,	// (0x0005666a) list_single_graphic_popup_conf_pane_g1

0x06b3,	// (0x00056672) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00065372) list_single_graphic_popup_conf_pane_g

0x06bb,	// (0x0005667a) list_single_graphic_popup_conf_pane_t1

0x06c9,	// (0x00056688) linegrid_cams_pane_g1

0x4fb4,	// (0x0005af73) linegrid_cams_pane_g2

0xc704,	// (0x000626c3) linegrid_cams_pane_g3

0x06d2,	// (0x00056691) linegrid_cams_pane_g4

0x4fbd,	// (0x0005af7c) linegrid_cams_pane_g5

0x4fc6,	// (0x0005af85) linegrid_cams_pane_g6

0xc78a,	// (0x00062749) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00065377) linegrid_cams_pane_g

0x06db,	// (0x0005669a) popup_clock_analogue_window

0x06db,	// (0x0005669a) popup_clock_digital_window

0xc1eb,	// (0x000621aa) popup_phob_thumbnail_window

0xc5fa,	// (0x000625b9) call_video_uplink_pane_g1

0x06e4,	// (0x000566a3) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00065386) call_video_uplink_pane_g

0xc757,	// (0x00062716) video_uplink_pane

0x06ec,	// (0x000566ab) mce_image_pane_g1

0x4fd1,	// (0x0005af90) mce_image_pane_g2

0x4fd9,	// (0x0005af98) mce_image_pane_g3

0x4fe1,	// (0x0005afa0) mce_image_pane_g4

0x4fe9,	// (0x0005afa8) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0006538b) mce_image_pane_g

0x06f6,	// (0x000566b5) control_top_pane_stacon_cp01_ParamLimits

0x06f6,	// (0x000566b5) control_top_pane_stacon_cp01

0x070a,	// (0x000566c9) uni_indicator_pane_stacon_cp01_ParamLimits

0x070a,	// (0x000566c9) uni_indicator_pane_stacon_cp01

0x071b,	// (0x000566da) bg_popup_sub_pane_cp03

0x4ff1,	// (0x0005afb0) chi_dic_find_pane

0x4ff9,	// (0x0005afb8) listscroll_chi_dic_pane

0x5002,	// (0x0005afc1) main_pane_chidic_g1

0x5015,	// (0x0005afd4) chi_dic_find_pane_t1

0x0725,	// (0x000566e4) find_chidic_pane

0x072e,	// (0x000566ed) chi_dic_list_pane_ParamLimits

0x072e,	// (0x000566ed) chi_dic_list_pane

0x073f,	// (0x000566fe) scroll_pane_cp020

0x5023,	// (0x0005afe2) find_chidic_pane_t1

0xc1eb,	// (0x000621aa) input_focus_pane_cp06

0x5032,	// (0x0005aff1) list_chi_dic_pane_ParamLimits

0x5032,	// (0x0005aff1) list_chi_dic_pane

0x0747,	// (0x00056706) list_chi_dic_pane_t1_ParamLimits

0x0747,	// (0x00056706) list_chi_dic_pane_t1

0xc1eb,	// (0x000621aa) list_highlight_pane_cp020

0x075a,	// (0x00056719) bg_cale_heading_pane_g1

0x5046,	// (0x0005b005) bg_cale_heading_pane_g2

0x504e,	// (0x0005b00d) bg_cale_heading_pane_g3

0x5056,	// (0x0005b015) bg_cale_heading_pane_g4

0x5060,	// (0x0005b01f) bg_cale_heading_pane_g5

0x506a,	// (0x0005b029) bg_cale_heading_pane_g6

0x5072,	// (0x0005b031) bg_cale_heading_pane_g7

0x507a,	// (0x0005b039) bg_cale_heading_pane_g8

0x5084,	// (0x0005b043) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00065396) bg_cale_heading_pane_g

0x075a,	// (0x00056719) bg_cale_side_pane_g1

0x508e,	// (0x0005b04d) bg_cale_side_pane_g2

0x5096,	// (0x0005b055) bg_cale_side_pane_g3

0x509e,	// (0x0005b05d) bg_cale_side_pane_g4

0x50a6,	// (0x0005b065) bg_cale_side_pane_g5

0x50ae,	// (0x0005b06d) bg_cale_side_pane_g6

0x50b6,	// (0x0005b075) bg_cale_side_pane_g7

0x50be,	// (0x0005b07d) bg_cale_side_pane_g8

0x50c6,	// (0x0005b085) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000653a9) bg_cale_side_pane_g

0x50ce,	// (0x0005b08d) popup_call_status_window_ParamLimits

0x50ce,	// (0x0005b08d) popup_call_status_window

0x0762,	// (0x00056721) stacon_top_pane

0x076a,	// (0x00056729) status_pane_ParamLimits

0x076a,	// (0x00056729) status_pane

0x077f,	// (0x0005673e) status_small_pane

0x0787,	// (0x00056746) control_pane

0xc1eb,	// (0x000621aa) stacon_bottom_pane

0x078f,	// (0x0005674e) list_single_mce_smart_pane_t1_ParamLimits

0x078f,	// (0x0005674e) list_single_mce_smart_pane_t1

0x07a2,	// (0x00056761) list_single_mce_smart_pane_t2_ParamLimits

0x07a2,	// (0x00056761) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000653bc) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000653bc) list_single_mce_smart_pane_t

0x5115,	// (0x0005b0d4) compass_pane

0x511e,	// (0x0005b0dd) main_location2_pane_t1

0x5132,	// (0x0005b0f1) main_location2_pane_t2

0x5146,	// (0x0005b105) main_location2_pane_t3

0x0003,

0xf402,	// (0x000653c1) main_location2_pane_t

0x07c1,	// (0x00056780) compass_pane_g1_ParamLimits

0x07c1,	// (0x00056780) compass_pane_g1

0x5190,	// (0x0005b14f) compass_pane_t1

0x519f,	// (0x0005b15e) compass_pane_t2

0x0005,

0xf40b,	// (0x000653ca) compass_pane_t

0x51e6,	// (0x0005b1a5) text_secondary_cp61

0x07d5,	// (0x00056794) navi_pane_cams_g5

0x07f8,	// (0x000567b7) navi_pane_im_t1

0x0806,	// (0x000567c5) navi_pane_mp_g1_ParamLimits

0x0806,	// (0x000567c5) navi_pane_mp_g1

0x081a,	// (0x000567d9) navi_pane_mp_g2_ParamLimits

0x081a,	// (0x000567d9) navi_pane_mp_g2

0x0826,	// (0x000567e5) navi_pane_mp_g3_ParamLimits

0x0826,	// (0x000567e5) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x000653de) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x000653de) navi_pane_mp_g

0x0832,	// (0x000567f1) navi_pane_mp_t1

0x0840,	// (0x000567ff) navi_pane_mp_t2

0x0002,

0xf426,	// (0x000653e5) navi_pane_mp_t

0x087c,	// (0x0005683b) navi_pane_vt_g1

0x0832,	// (0x000567f1) navi_pane_vt_t1

0x0884,	// (0x00056843) navi_slider_pane

0x088c,	// (0x0005684b) zooming_pane

0x0894,	// (0x00056853) navi_slider_pane_g1

0xcb90,	// (0x00062b4f) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000653ec) navi_slider_pane_g

0x08b8,	// (0x00056877) aid_levels_zoom

0x08c0,	// (0x0005687f) zooming_pane_g1

0x08c8,	// (0x00056887) zooming_pane_g2

0x08c8,	// (0x00056887) zooming_pane_g3

0x0002,

0xf43c,	// (0x000653fb) zooming_pane_g

0x08d0,	// (0x0005688f) level_10_zoom

0x08d9,	// (0x00056898) level_11_zoom

0x08e2,	// (0x000568a1) level_1_zoom

0x08eb,	// (0x000568aa) level_2_zoom

0x08f4,	// (0x000568b3) level_3_zoom

0x08fd,	// (0x000568bc) level_4_zoom

0x0906,	// (0x000568c5) level_5_zoom

0x090f,	// (0x000568ce) level_6_zoom

0x0918,	// (0x000568d7) level_7_zoom

0x0921,	// (0x000568e0) level_8_zoom

0x092a,	// (0x000568e9) level_9_zoom

0x093b,	// (0x000568fa) popup_phob_thumbnail_window_g1

0x0943,	// (0x00056902) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00065402) popup_phob_thumbnail_window_g

0x1c32,	// (0x00057bf1) level_1_location

0x1c3a,	// (0x00057bf9) level_2_location

0x1c42,	// (0x00057c01) level_3_location

0x1c4a,	// (0x00057c09) level_4_location

0x088c,	// (0x0005684b) level_5_location

0x530f,	// (0x0005b2ce) mce_icon_pane_g1

0x5317,	// (0x0005b2d6) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00065407) mce_icon_pane_g

0x531f,	// (0x0005b2de) main_mup_pane_g1_ParamLimits

0x531f,	// (0x0005b2de) main_mup_pane_g1

0x5335,	// (0x0005b2f4) main_mup_pane_g2_ParamLimits

0x5335,	// (0x0005b2f4) main_mup_pane_g2

0x534d,	// (0x0005b30c) main_mup_pane_g3_ParamLimits

0x534d,	// (0x0005b30c) main_mup_pane_g3

0x5365,	// (0x0005b324) main_mup_pane_g4_ParamLimits

0x5365,	// (0x0005b324) main_mup_pane_g4

0x537d,	// (0x0005b33c) main_mup_pane_g5_ParamLimits

0x537d,	// (0x0005b33c) main_mup_pane_g5

0x5399,	// (0x0005b358) main_mup_pane_g6_ParamLimits

0x5399,	// (0x0005b358) main_mup_pane_g6

0x53b1,	// (0x0005b370) main_mup_pane_g7_ParamLimits

0x53b1,	// (0x0005b370) main_mup_pane_g7

0x53c9,	// (0x0005b388) main_mup_pane_g8_ParamLimits

0x53c9,	// (0x0005b388) main_mup_pane_g8

0x53e1,	// (0x0005b3a0) main_mup_pane_g9_ParamLimits

0x53e1,	// (0x0005b3a0) main_mup_pane_g9

0x53fb,	// (0x0005b3ba) main_mup_pane_g10_ParamLimits

0x53fb,	// (0x0005b3ba) main_mup_pane_g10

0x5415,	// (0x0005b3d4) main_mup_pane_g11_ParamLimits

0x5415,	// (0x0005b3d4) main_mup_pane_g11

0x5429,	// (0x0005b3e8) main_mup_pane_g12_ParamLimits

0x5429,	// (0x0005b3e8) main_mup_pane_g12

0x543f,	// (0x0005b3fe) main_mup_pane_g13_ParamLimits

0x543f,	// (0x0005b3fe) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0006540c) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0006540c) main_mup_pane_g

0x5453,	// (0x0005b412) main_mup_pane_t1_ParamLimits

0x5453,	// (0x0005b412) main_mup_pane_t1

0x546d,	// (0x0005b42c) main_mup_pane_t2_ParamLimits

0x546d,	// (0x0005b42c) main_mup_pane_t2

0x5485,	// (0x0005b444) main_mup_pane_t3_ParamLimits

0x5485,	// (0x0005b444) main_mup_pane_t3

0x549d,	// (0x0005b45c) main_mup_pane_t4_ParamLimits

0x549d,	// (0x0005b45c) main_mup_pane_t4

0x54bb,	// (0x0005b47a) main_mup_pane_t5_ParamLimits

0x54bb,	// (0x0005b47a) main_mup_pane_t5

0x54d0,	// (0x0005b48f) main_mup_pane_t6_ParamLimits

0x54d0,	// (0x0005b48f) main_mup_pane_t6

0x0005,

0xf468,	// (0x00065427) main_mup_pane_t_ParamLimits

0xf468,	// (0x00065427) main_mup_pane_t

0x54e2,	// (0x0005b4a1) mup_progress_pane_ParamLimits

0x54e2,	// (0x0005b4a1) mup_progress_pane

0x54ee,	// (0x0005b4ad) mup_visualizer_pane_ParamLimits

0x54ee,	// (0x0005b4ad) mup_visualizer_pane

0x5522,	// (0x0005b4e1) mup_volume_pane_ParamLimits

0x5522,	// (0x0005b4e1) mup_volume_pane

0x0598,	// (0x00056557) mup_visualizer_pane_g1_ParamLimits

0x0598,	// (0x00056557) mup_visualizer_pane_g1

0x0598,	// (0x00056557) mup_visualizer_pane_g2_ParamLimits

0x0598,	// (0x00056557) mup_visualizer_pane_g2

0x07c1,	// (0x00056780) mup_visualizer_pane_g3_ParamLimits

0x07c1,	// (0x00056780) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00065434) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00065434) mup_visualizer_pane_g

0xc5fa,	// (0x000625b9) mup_volume_pane_g1

0x0953,	// (0x00056912) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0006543b) mup_volume_pane_g

0xc5fa,	// (0x000625b9) mup_progress_pane_g1

0x095c,	// (0x0005691b) mup_progress_pane_g2

0x0965,	// (0x00056924) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00065440) mup_progress_pane_g

0xc1eb,	// (0x000621aa) bg_popup_window_pane_cp05

0x096e,	// (0x0005692d) heading_pane_cp02_ParamLimits

0x096e,	// (0x0005692d) heading_pane_cp02

0x0988,	// (0x00056947) list_popup_blid_pane

0x0990,	// (0x0005694f) list_blid_sat_info_pane_ParamLimits

0x0990,	// (0x0005694f) list_blid_sat_info_pane

0x09a3,	// (0x00056962) list_blid_sat_info_pane_g1

0x09ab,	// (0x0005696a) list_blid_sat_info_pane_t1

0x5638,	// (0x0005b5f7) mup_equalizer_pane_ParamLimits

0x5638,	// (0x0005b5f7) mup_equalizer_pane

0x5651,	// (0x0005b610) mup_equalizer_pane_cp1_ParamLimits

0x5651,	// (0x0005b610) mup_equalizer_pane_cp1

0x566e,	// (0x0005b62d) mup_equalizer_pane_cp2_ParamLimits

0x566e,	// (0x0005b62d) mup_equalizer_pane_cp2

0x568b,	// (0x0005b64a) mup_equalizer_pane_cp3_ParamLimits

0x568b,	// (0x0005b64a) mup_equalizer_pane_cp3

0x56ac,	// (0x0005b66b) mup_equalizer_pane_cp4_ParamLimits

0x56ac,	// (0x0005b66b) mup_equalizer_pane_cp4

0x56cd,	// (0x0005b68c) mup_equalizer_pane_cp5

0x56e1,	// (0x0005b6a0) mup_equalizer_pane_cp6

0x56f5,	// (0x0005b6b4) mup_equalizer_pane_cp7

0x1b50,	// (0x00057b0f) bg_popup_call_poc_act_pane_g9

0x1b58,	// (0x00057b17) bg_popup_call_poc_act_pane_g10

0x1b60,	// (0x00057b1f) bg_popup_call_poc_act_pane_g11

0x000a,

0xc446,	// (0x00062405) mup_scale_pane

0xc5fa,	// (0x000625b9) mup_scale_pane_g1

0x09b9,	// (0x00056978) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0006545c) mup_scale_pane_g

0x09dd,	// (0x0005699c) msg_data_pane

0x09e5,	// (0x000569a4) scroll_pane_cp017

0x571b,	// (0x0005b6da) bg_list_pane_cp04_ParamLimits

0x571b,	// (0x0005b6da) bg_list_pane_cp04

0x09ed,	// (0x000569ac) msg_data_pane_g1

0x573b,	// (0x0005b6fa) msg_data_pane_g2

0x4fd9,	// (0x0005af98) msg_data_pane_g3

0x5743,	// (0x0005b702) msg_data_pane_g4

0x574b,	// (0x0005b70a) msg_data_pane_g5

0x5753,	// (0x0005b712) msg_data_pane_g6

0x575b,	// (0x0005b71a) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0006546b) msg_data_pane_g

0x5763,	// (0x0005b722) msg_text_pane_ParamLimits

0x5763,	// (0x0005b722) msg_text_pane

0x578c,	// (0x0005b74b) qrid_highlight_pane_cp011_ParamLimits

0x578c,	// (0x0005b74b) qrid_highlight_pane_cp011

0xc1eb,	// (0x000621aa) msg_body_pane

0xc1eb,	// (0x000621aa) msg_header_pane

0x09fe,	// (0x000569bd) input_focus_pane_cp07

0x57b0,	// (0x0005b76f) msg_header_pane_t1_ParamLimits

0x57b0,	// (0x0005b76f) msg_header_pane_t1

0x57c4,	// (0x0005b783) msg_header_pane_t2_ParamLimits

0x57c4,	// (0x0005b783) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0006547f) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0006547f) msg_header_pane_t

0x0a13,	// (0x000569d2) msg_body_pane_g1

0x57d6,	// (0x0005b795) msg_body_pane_t1_ParamLimits

0x57d6,	// (0x0005b795) msg_body_pane_t1

0x5807,	// (0x0005b7c6) msg_body_pane_t2_ParamLimits

0x5807,	// (0x0005b7c6) msg_body_pane_t2

0x5819,	// (0x0005b7d8) msg_body_pane_t3_ParamLimits

0x5819,	// (0x0005b7d8) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00065484) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00065484) msg_body_pane_t

0x5865,	// (0x0005b824) main_viewer_pane_g1_ParamLimits

0x5865,	// (0x0005b824) main_viewer_pane_g1

0x5873,	// (0x0005b832) main_viewer_pane_g2_ParamLimits

0x5873,	// (0x0005b832) main_viewer_pane_g2

0x5881,	// (0x0005b840) main_viewer_pane_g3_ParamLimits

0x5881,	// (0x0005b840) main_viewer_pane_g3

0x5890,	// (0x0005b84f) main_viewer_pane_g4_ParamLimits

0x5890,	// (0x0005b84f) main_viewer_pane_g4

0xcbba,	// (0x00062b79) main_viewer_pane_g5_ParamLimits

0xcbba,	// (0x00062b79) main_viewer_pane_g5

0xcbba,	// (0x00062b79) main_viewer_pane_g7_ParamLimits

0xcbba,	// (0x00062b79) main_viewer_pane_g7

0xcbcc,	// (0x00062b8b) main_viewer_pane_g8_ParamLimits

0xcbcc,	// (0x00062b8b) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00065494) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00065494) main_viewer_pane_g

0x0a1b,	// (0x000569da) viewer_content_pane_ParamLimits

0x0a1b,	// (0x000569da) viewer_content_pane

0x58cc,	// (0x0005b88b) main_postcard_pane_g1_ParamLimits

0x58cc,	// (0x0005b88b) main_postcard_pane_g1

0x58e2,	// (0x0005b8a1) main_postcard_pane_g2_ParamLimits

0x58e2,	// (0x0005b8a1) main_postcard_pane_g2

0x58f8,	// (0x0005b8b7) main_postcard_pane_g3_ParamLimits

0x58f8,	// (0x0005b8b7) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000654a5) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000654a5) main_postcard_pane_g

0x590f,	// (0x0005b8ce) main_postcard_pane_g4

0x1d73,	// (0x00057d32) smil_status_volume_pane_g2

0x5952,	// (0x0005b911) postcard_pane_ParamLimits

0x5952,	// (0x0005b911) postcard_pane

0x0a37,	// (0x000569f6) postcard_pane_g1_ParamLimits

0x0a37,	// (0x000569f6) postcard_pane_g1

0x5994,	// (0x0005b953) postcard_pane_g2_ParamLimits

0x5994,	// (0x0005b953) postcard_pane_g2

0x59a0,	// (0x0005b95f) postcard_pane_g3_ParamLimits

0x59a0,	// (0x0005b95f) postcard_pane_g3

0x0a29,	// (0x000569e8) postcard_pane_g4_ParamLimits

0x0a29,	// (0x000569e8) postcard_pane_g4

0x59ac,	// (0x0005b96b) postcard_pane_g5_ParamLimits

0x59ac,	// (0x0005b96b) postcard_pane_g5

0x59c1,	// (0x0005b980) postcard_pane_g6_ParamLimits

0x59c1,	// (0x0005b980) postcard_pane_g6

0x0a37,	// (0x000569f6) postcard_pane_g7_ParamLimits

0x0a37,	// (0x000569f6) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000654b2) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000654b2) postcard_pane_g

0x59d5,	// (0x0005b994) main_mp2_pane_g1_ParamLimits

0x59d5,	// (0x0005b994) main_mp2_pane_g1

0x59e1,	// (0x0005b9a0) main_mp2_pane_g2_ParamLimits

0x59e1,	// (0x0005b9a0) main_mp2_pane_g2

0x59ed,	// (0x0005b9ac) main_mp2_pane_g3_ParamLimits

0x59ed,	// (0x0005b9ac) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000654c1) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000654c1) main_mp2_pane_g

0x59f9,	// (0x0005b9b8) main_mp2_pane_t1_ParamLimits

0x59f9,	// (0x0005b9b8) main_mp2_pane_t1

0x5a0e,	// (0x0005b9cd) main_mp2_pane_t2_ParamLimits

0x5a0e,	// (0x0005b9cd) main_mp2_pane_t2

0x5a20,	// (0x0005b9df) main_mp2_pane_t3_ParamLimits

0x5a20,	// (0x0005b9df) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000654c8) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000654c8) main_mp2_pane_t

0x0a45,	// (0x00056a04) pec_content_pane_ParamLimits

0x0a45,	// (0x00056a04) pec_content_pane

0xc9d9,	// (0x00062998) scroll_pane_cp015

0x0a57,	// (0x00056a16) pec_attribute_pane_ParamLimits

0x0a57,	// (0x00056a16) pec_attribute_pane

0x5a32,	// (0x0005b9f1) pec_content_pane_g1_ParamLimits

0x5a32,	// (0x0005b9f1) pec_content_pane_g1

0x0a67,	// (0x00056a26) pec_content_pane_t1_ParamLimits

0x0a67,	// (0x00056a26) pec_content_pane_t1

0x0a79,	// (0x00056a38) pec_content_pane_t2_ParamLimits

0x0a79,	// (0x00056a38) pec_content_pane_t2

0x0001,

0xf510,	// (0x000654cf) pec_content_pane_t_ParamLimits

0xf510,	// (0x000654cf) pec_content_pane_t

0x5a40,	// (0x0005b9ff) list_single_graphic_pane_cp01_ParamLimits

0x5a40,	// (0x0005b9ff) list_single_graphic_pane_cp01

0xc446,	// (0x00062405) bg_popup_sub_pane_cp04

0x0a8b,	// (0x00056a4a) popup_mup_playback_window_g1

0x0a97,	// (0x00056a56) popup_mup_playback_window_t1

0x0aac,	// (0x00056a6b) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000654d4) popup_mup_playback_window_t

0x0ae3,	// (0x00056aa2) main_image_pane_g1_ParamLimits

0x0ae3,	// (0x00056aa2) main_image_pane_g1

0x0b26,	// (0x00056ae5) scroll_pane_cp018_ParamLimits

0x0b26,	// (0x00056ae5) scroll_pane_cp018

0x0b3e,	// (0x00056afd) scroll_pane_cp016_ParamLimits

0x0b3e,	// (0x00056afd) scroll_pane_cp016

0x5b10,	// (0x0005bacf) smil2_image_pane_ParamLimits

0x5b10,	// (0x0005bacf) smil2_image_pane

0x5b44,	// (0x0005bb03) smil2_root_pane_ParamLimits

0x5b44,	// (0x0005bb03) smil2_root_pane

0x5b7c,	// (0x0005bb3b) smil2_text_pane_ParamLimits

0x5b7c,	// (0x0005bb3b) smil2_text_pane

0xc1eb,	// (0x000621aa) bg_list_pane_cp06

0x0b7a,	// (0x00056b39) grid_radio_pane

0xc1eb,	// (0x000621aa) bg_popup_window_pane_cp06

0x0b82,	// (0x00056b41) main_fmradio_pane_t1

0x060f,	// (0x000565ce) heading_pane_cp04

0x0b90,	// (0x00056b4f) main_fmradio_pane_t2

0x1b68,	// (0x00057b27) popup_cale_lunar_info_window_g1

0x0b9e,	// (0x00056b5d) main_fmradio_pane_t3

0x1b70,	// (0x00057b2f) popup_cale_lunar_info_window_g2

0x0bac,	// (0x00056b6b) main_fmradio_pane_t4

0x0001,

0x0bba,	// (0x00056b79) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x000655af) popup_cale_lunar_info_window_g

0xf52a,	// (0x000654e9) main_fmradio_pane_t

0x0bc8,	// (0x00056b87) wait_bar_pane_cp03

0x0bd0,	// (0x00056b8f) cell_fmradio_pane_ParamLimits

0x0bd0,	// (0x00056b8f) cell_fmradio_pane

0x0a37,	// (0x000569f6) cell_fmradio_pane_g1_ParamLimits

0x0a37,	// (0x000569f6) cell_fmradio_pane_g1

0xc1eb,	// (0x000621aa) grid_highlight_pane_cp011

0x0be3,	// (0x00056ba2) poc_content_pane_ParamLimits

0x0be3,	// (0x00056ba2) poc_content_pane

0x0bf5,	// (0x00056bb4) scroll_pane_cp019

0x5bfc,	// (0x0005bbbb) popup_call_poc_act_window_ParamLimits

0x5bfc,	// (0x0005bbbb) popup_call_poc_act_window

0x5c20,	// (0x0005bbdf) popup_call_poc_inact_window_ParamLimits

0x5c20,	// (0x0005bbdf) popup_call_poc_inact_window

0xf5c7,	// (0x00065586) bg_popup_call_poc_act_pane_g

0x1ae0,	// (0x00057a9f) bg_popup_call_poc_inact_pane_g1

0x1ae8,	// (0x00057aa7) bg_popup_call_poc_inact_pane_g2

0x0bfd,	// (0x00056bbc) popup_call_poc_act_window_g2

0x1af0,	// (0x00057aaf) bg_popup_call_poc_inact_pane_g3

0x1af8,	// (0x00057ab7) bg_popup_call_poc_inact_pane_g4

0x1b00,	// (0x00057abf) bg_popup_call_poc_inact_pane_g5

0x0c05,	// (0x00056bc4) popup_call_poc_act_window_t1_ParamLimits

0x0c05,	// (0x00056bc4) popup_call_poc_act_window_t1

0x0c2d,	// (0x00056bec) popup_call_poc_act_window_t2_ParamLimits

0x0c2d,	// (0x00056bec) popup_call_poc_act_window_t2

0x0c55,	// (0x00056c14) popup_call_poc_act_window_t3_ParamLimits

0x0c55,	// (0x00056c14) popup_call_poc_act_window_t3

0x0c7d,	// (0x00056c3c) popup_call_poc_act_window_t4_ParamLimits

0x0c7d,	// (0x00056c3c) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000654f4) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000654f4) popup_call_poc_act_window_t

0x1b08,	// (0x00057ac7) bg_popup_call_poc_inact_pane_g6

0x1b10,	// (0x00057acf) bg_popup_call_poc_inact_pane_g7

0x1b18,	// (0x00057ad7) bg_popup_call_poc_inact_pane_g8

0x0c8f,	// (0x00056c4e) popup_call_poc_inact_window_g2

0x1b20,	// (0x00057adf) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x00065573) bg_popup_call_poc_inact_pane_g

0x0c97,	// (0x00056c56) popup_call_poc_inact_window_t1_ParamLimits

0x0c97,	// (0x00056c56) popup_call_poc_inact_window_t1

0x0cac,	// (0x00056c6b) popup_call_poc_inact_window_t2_ParamLimits

0x0cac,	// (0x00056c6b) popup_call_poc_inact_window_t2

0x0cc1,	// (0x00056c80) popup_call_poc_inact_window_t3_ParamLimits

0x0cc1,	// (0x00056c80) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000654fd) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000654fd) popup_call_poc_inact_window_t

0x1ce6,	// (0x00057ca5) context_pane_ParamLimits

0x644a,	// (0x0005c409) signal_pane_ParamLimits

0x088c,	// (0x0005684b) main_call2_pane

0x1cd4,	// (0x00057c93) popup_phob_thumbnail2_window_ParamLimits

0x1cd4,	// (0x00057c93) popup_phob_thumbnail2_window

0xcba2,	// (0x00062b61) aid_hotspot_pointer_arrow_pane

0xcbaa,	// (0x00062b69) aid_hotspot_pointer_hand_pane

0x5f6e,	// (0x0005bf2d) phob_pre_status_pane_g5

0x3d78,	// (0x00059d37) cams_zoom_pane_ParamLimits

0x3d87,	// (0x00059d46) image_vga_pane_ParamLimits

0x3da1,	// (0x00059d60) main_camera_pane_g1_ParamLimits

0x3db3,	// (0x00059d72) main_camera_pane_g2_ParamLimits

0x3dc5,	// (0x00059d84) main_camera_pane_g3_ParamLimits

0x3dd7,	// (0x00059d96) main_camera_pane_g4_ParamLimits

0x3de9,	// (0x00059da8) main_camera_pane_g5_ParamLimits

0x3dfb,	// (0x00059dba) main_camera_pane_g6_ParamLimits

0x3e0d,	// (0x00059dcc) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000651fc) main_camera_pane_g_ParamLimits

0x3e1f,	// (0x00059dde) main_camera_pane_t1_ParamLimits

0x3e35,	// (0x00059df4) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0006520d) main_camera_pane_t_ParamLimits

0xc446,	// (0x00062405) bg_popup_preview_window_pane_cp01_ParamLimits

0xc446,	// (0x00062405) bg_popup_preview_window_pane_cp01

0x0cd6,	// (0x00056c95) popup_phob_thumbnail2_window_g1_ParamLimits

0x0cd6,	// (0x00056c95) popup_phob_thumbnail2_window_g1

0xc1eb,	// (0x000621aa) call2_cli_visual_pane

0x5c54,	// (0x0005bc13) popup_call2_audio_conf_window_ParamLimits

0x5c54,	// (0x0005bc13) popup_call2_audio_conf_window

0x5c74,	// (0x0005bc33) popup_call2_audio_first_window_ParamLimits

0x5c74,	// (0x0005bc33) popup_call2_audio_first_window

0x5d0a,	// (0x0005bcc9) popup_call2_audio_in_window_ParamLimits

0x5d0a,	// (0x0005bcc9) popup_call2_audio_in_window

0x5d52,	// (0x0005bd11) popup_call2_audio_out_window_ParamLimits

0x5d52,	// (0x0005bd11) popup_call2_audio_out_window

0x5dbc,	// (0x0005bd7b) popup_call2_audio_second_window_ParamLimits

0x5dbc,	// (0x0005bd7b) popup_call2_audio_second_window

0x5e22,	// (0x0005bde1) popup_call2_audio_wait_window_ParamLimits

0x5e22,	// (0x0005bde1) popup_call2_audio_wait_window

0xc1eb,	// (0x000621aa) bg_popup_call2_act_pane_cp03

0xc428,	// (0x000623e7) list_conf_pane_cp

0x0ce2,	// (0x00056ca1) popup_call2_audio_conf_window_t1

0x0cf0,	// (0x00056caf) list_single_graphic_popup_conf2_pane_ParamLimits

0x0cf0,	// (0x00056caf) list_single_graphic_popup_conf2_pane

0x06a2,	// (0x00056661) list_highlight_pane_cp04

0x0d03,	// (0x00056cc2) list_single_graphic_popup_conf2_pane_g1

0x06b3,	// (0x00056672) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00065504) list_single_graphic_popup_conf2_pane_g

0x0d0d,	// (0x00056ccc) list_single_graphic_popup_conf2_pane_t1

0x0d1b,	// (0x00056cda) bg_popup_call2_act_pane_cp01_ParamLimits

0x0d1b,	// (0x00056cda) bg_popup_call2_act_pane_cp01

0x0da5,	// (0x00056d64) call_type_pane_cp05_ParamLimits

0x0da5,	// (0x00056d64) call_type_pane_cp05

0x0df9,	// (0x00056db8) popup_call2_audio_second_window_g1_ParamLimits

0x0df9,	// (0x00056db8) popup_call2_audio_second_window_g1

0x0e4d,	// (0x00056e0c) popup_call2_audio_second_window_g2_ParamLimits

0x0e4d,	// (0x00056e0c) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00065509) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00065509) popup_call2_audio_second_window_g

0x0eb2,	// (0x00056e71) popup_call2_audio_second_window_t1_ParamLimits

0x0eb2,	// (0x00056e71) popup_call2_audio_second_window_t1

0x0f6d,	// (0x00056f2c) popup_call2_audio_second_window_t2_ParamLimits

0x0f6d,	// (0x00056f2c) popup_call2_audio_second_window_t2

0x0fc0,	// (0x00056f7f) popup_call2_audio_second_window_t3_ParamLimits

0x0fc0,	// (0x00056f7f) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00065510) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00065510) popup_call2_audio_second_window_t

0xc1eb,	// (0x000621aa) bg_popup_call2_in_pane_cp02

0xc1f5,	// (0x000621b4) call_type_pane_cp04

0xc1fd,	// (0x000621bc) popup_call2_audio_wait_window_g1

0xc205,	// (0x000621c4) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000650e9) popup_call2_audio_wait_window_g

0xc20d,	// (0x000621cc) popup_call2_audio_wait_window_t3

0x10b3,	// (0x00057072) bg_popup_call2_act_pane_ParamLimits

0x10b3,	// (0x00057072) bg_popup_call2_act_pane

0x1173,	// (0x00057132) call_type_pane_cp03_ParamLimits

0x1173,	// (0x00057132) call_type_pane_cp03

0x11d7,	// (0x00057196) popup_call2_audio_first_window_g1_ParamLimits

0x11d7,	// (0x00057196) popup_call2_audio_first_window_g1

0x1247,	// (0x00057206) popup_call2_audio_first_window_g2_ParamLimits

0x1247,	// (0x00057206) popup_call2_audio_first_window_g2

0x0598,	// (0x00056557) popup_call2_audio_first_window_g3_ParamLimits

0x0598,	// (0x00056557) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00065519) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00065519) popup_call2_audio_first_window_g

0x1325,	// (0x000572e4) popup_call2_audio_first_window_t1_ParamLimits

0x1325,	// (0x000572e4) popup_call2_audio_first_window_t1

0x1428,	// (0x000573e7) popup_call2_audio_first_window_t4_ParamLimits

0x1428,	// (0x000573e7) popup_call2_audio_first_window_t4

0x150b,	// (0x000574ca) popup_call2_audio_first_window_t5_ParamLimits

0x150b,	// (0x000574ca) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00065524) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00065524) popup_call2_audio_first_window_t

0xc43e,	// (0x000623fd) bg_popup_call2_act_pane_g1

0x1b78,	// (0x00057b37) popup_cale_lunar_info_window_t1

0x1b86,	// (0x00057b45) popup_cale_lunar_info_window_t2

0x1b94,	// (0x00057b53) popup_cale_lunar_info_window_t3

0xc1eb,	// (0x000621aa) bg_popup_call2_bubble_pane

0x160c,	// (0x000575cb) bg_popup_call2_in_pane_cp01_ParamLimits

0x160c,	// (0x000575cb) bg_popup_call2_in_pane_cp01

0xbec7,	// (0x00061e86) call_type_pane_cp02

0x1654,	// (0x00057613) popup_call2_audio_out_window_g1_ParamLimits

0x1654,	// (0x00057613) popup_call2_audio_out_window_g1

0x1680,	// (0x0005763f) popup_call2_audio_out_window_g2_ParamLimits

0x1680,	// (0x0005763f) popup_call2_audio_out_window_g2

0x16a8,	// (0x00057667) popup_call2_audio_out_window_g3_ParamLimits

0x16a8,	// (0x00057667) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0006552d) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0006552d) popup_call2_audio_out_window_g

0x16e3,	// (0x000576a2) popup_call2_audio_out_window_t1_ParamLimits

0x16e3,	// (0x000576a2) popup_call2_audio_out_window_t1

0x1742,	// (0x00057701) popup_call2_audio_out_window_t2_ParamLimits

0x1742,	// (0x00057701) popup_call2_audio_out_window_t2

0x1796,	// (0x00057755) popup_call2_audio_out_window_t3_ParamLimits

0x1796,	// (0x00057755) popup_call2_audio_out_window_t3

0x17ac,	// (0x0005776b) popup_call2_audio_out_window_t4_ParamLimits

0x17ac,	// (0x0005776b) popup_call2_audio_out_window_t4

0x17c2,	// (0x00057781) popup_call2_audio_out_window_t5_ParamLimits

0x17c2,	// (0x00057781) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00065536) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00065536) popup_call2_audio_out_window_t

0x1826,	// (0x000577e5) bg_popup_call2_in_pane_ParamLimits

0x1826,	// (0x000577e5) bg_popup_call2_in_pane

0x1882,	// (0x00057841) popup_call2_audio_in_window_g1_ParamLimits

0x1882,	// (0x00057841) popup_call2_audio_in_window_g1

0x18ba,	// (0x00057879) popup_call2_audio_in_window_g2_ParamLimits

0x18ba,	// (0x00057879) popup_call2_audio_in_window_g2

0x18f2,	// (0x000578b1) popup_call2_audio_in_window_g3_ParamLimits

0x18f2,	// (0x000578b1) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00065543) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00065543) popup_call2_audio_in_window_g

0x194a,	// (0x00057909) popup_call2_audio_in_window_t1_ParamLimits

0x194a,	// (0x00057909) popup_call2_audio_in_window_t1

0x19ca,	// (0x00057989) popup_call2_audio_in_window_t2_ParamLimits

0x19ca,	// (0x00057989) popup_call2_audio_in_window_t2

0x1a4a,	// (0x00057a09) popup_call2_audio_in_window_t3_ParamLimits

0x1a4a,	// (0x00057a09) popup_call2_audio_in_window_t3

0x1a64,	// (0x00057a23) popup_call2_audio_in_window_t4_ParamLimits

0x1a64,	// (0x00057a23) popup_call2_audio_in_window_t4

0x1a76,	// (0x00057a35) popup_call2_audio_in_window_t5_ParamLimits

0x1a76,	// (0x00057a35) popup_call2_audio_in_window_t5

0x1a8b,	// (0x00057a4a) popup_call2_audio_in_window_t6_ParamLimits

0x1a8b,	// (0x00057a4a) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0006554c) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0006554c) popup_call2_audio_in_window_t

0xc43e,	// (0x000623fd) bg_popup_call2_in_pane_g1

0x1ba2,	// (0x00057b61) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x000655b4) popup_cale_lunar_info_window_t

0xc446,	// (0x00062405) bg_popup_call2_rect_pane_ParamLimits

0xc446,	// (0x00062405) bg_popup_call2_rect_pane

0xc1eb,	// (0x000621aa) call2_cli_visual_graphic_pane

0xc1eb,	// (0x000621aa) call2_cli_visual_text_pane

0xcbe4,	// (0x00062ba3) smil_status_volume_pane_g3

0x0002,

0xc5fa,	// (0x000625b9) call2_cli_visual_graphic_pane_g1

0xc5fa,	// (0x000625b9) call2_cli_visual_graphic_pane_g2

0xc5fa,	// (0x000625b9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00065559) call2_cli_visual_graphic_pane_g

0x1aa0,	// (0x00057a5f) bg_popup_call2_rect_pane_g1

0xc6a2,	// (0x00062661) bg_popup_call2_rect_pane_g2

0x1aa8,	// (0x00057a67) bg_popup_call2_rect_pane_g3

0x1ab0,	// (0x00057a6f) bg_popup_call2_rect_pane_g4

0x1ab8,	// (0x00057a77) bg_popup_call2_rect_pane_g5

0x1ac0,	// (0x00057a7f) bg_popup_call2_rect_pane_g6

0x1ac8,	// (0x00057a87) bg_popup_call2_rect_pane_g7

0x1ad0,	// (0x00057a8f) bg_popup_call2_rect_pane_g8

0x1ad8,	// (0x00057a97) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00065560) bg_popup_call2_rect_pane_g

0x1ae0,	// (0x00057a9f) bg_popup_call2_bubble_pane_g1

0x1ae8,	// (0x00057aa7) bg_popup_call2_bubble_pane_g2

0x1af0,	// (0x00057aaf) bg_popup_call2_bubble_pane_g3

0x1af8,	// (0x00057ab7) bg_popup_call2_bubble_pane_g4

0x1b00,	// (0x00057abf) bg_popup_call2_bubble_pane_g5

0x1b08,	// (0x00057ac7) bg_popup_call2_bubble_pane_g6

0x1b10,	// (0x00057acf) bg_popup_call2_bubble_pane_g7

0x1b18,	// (0x00057ad7) bg_popup_call2_bubble_pane_g8

0x1b20,	// (0x00057adf) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00065573) bg_popup_call2_bubble_pane_g

0x39e9,	// (0x000599a8) aid_cale_week_size_cell_pane

0x3e4d,	// (0x00059e0c) aid_cams_cif_uncrop_pane_ParamLimits

0x3e4d,	// (0x00059e0c) aid_cams_cif_uncrop_pane

0x400a,	// (0x00059fc9) aid_cams_size_cell_ParamLimits

0x400a,	// (0x00059fc9) aid_cams_size_cell

0x401e,	// (0x00059fdd) grid_cams_pane_ParamLimits

0x4038,	// (0x00059ff7) linegrid_cams_pane_ParamLimits

0x41f7,	// (0x0005a1b6) call_video_pane_t1

0x4209,	// (0x0005a1c8) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00065260) call_video_pane_t

0x45af,	// (0x0005a56e) aid_cale_month_size_cell_pane_ParamLimits

0x45af,	// (0x0005a56e) aid_cale_month_size_cell_pane

0xf63e,	// (0x000655fd) smil_status_volume_pane_g

0xcbf1,	// (0x00062bb0) volume_smil_pane_ParamLimits

0xbd84,	// (0x00061d43) aid_popup2_width_pane

0x395d,	// (0x0005991c) cell_qdial_pane_g4_ParamLimits

0x395d,	// (0x0005991c) cell_qdial_pane_g4

0x5170,	// (0x0005b12f) aid_blid_cardinal_pane_ParamLimits

0x517c,	// (0x0005b13b) aid_blid_destination_pane_ParamLimits

0x517c,	// (0x0005b13b) aid_blid_destination_pane

0xc446,	// (0x00062405) bg_popup_call_poc_act_pane_ParamLimits

0xc446,	// (0x00062405) bg_popup_call_poc_act_pane

0xc446,	// (0x00062405) bg_popup_call_poc_inact_pane_ParamLimits

0xc446,	// (0x00062405) bg_popup_call_poc_inact_pane

0x1b28,	// (0x00057ae7) bg_popup_call_poc_act_pane_g1

0x1b30,	// (0x00057aef) bg_popup_call_poc_act_pane_g2

0x1b38,	// (0x00057af7) bg_popup_call_poc_act_pane_g3

0x1af8,	// (0x00057ab7) bg_popup_call_poc_act_pane_g4

0x1b00,	// (0x00057abf) bg_popup_call_poc_act_pane_g5

0x1b40,	// (0x00057aff) bg_popup_call_poc_act_pane_g6

0x1b10,	// (0x00057acf) bg_popup_call_poc_act_pane_g7

0x1b48,	// (0x00057b07) bg_popup_call_poc_act_pane_g8

0xc1eb,	// (0x000621aa) main_usb_pane

0x1caf,	// (0x00057c6e) popup_cale_lunar_info_window

0x4446,	// (0x0005a405) im_reading_pane_t1_ParamLimits

0xc931,	// (0x000628f0) list_im_pane_ParamLimits

0xc942,	// (0x00062901) scroll_pane_cp07_ParamLimits

0xc1eb,	// (0x000621aa) grid_highlight_pane_cp012

0xc446,	// (0x00062405) mup_scale_pane_ParamLimits

0x0a37,	// (0x000569f6) main_usb_pane_g1_ParamLimits

0x0a37,	// (0x000569f6) main_usb_pane_g1

0x5e81,	// (0x0005be40) main_usb_pane_g2_ParamLimits

0x5e81,	// (0x0005be40) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0006559d) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0006559d) main_usb_pane_g

0x5e97,	// (0x0005be56) main_usb_pane_t1_ParamLimits

0x5e97,	// (0x0005be56) main_usb_pane_t1

0x5ea9,	// (0x0005be68) main_usb_pane_t2_ParamLimits

0x5ea9,	// (0x0005be68) main_usb_pane_t2

0x5ebb,	// (0x0005be7a) main_usb_pane_t3_ParamLimits

0x5ebb,	// (0x0005be7a) main_usb_pane_t3

0x5ecd,	// (0x0005be8c) main_usb_pane_t4_ParamLimits

0x5ecd,	// (0x0005be8c) main_usb_pane_t4

0x5edf,	// (0x0005be9e) main_usb_pane_t5_ParamLimits

0x5edf,	// (0x0005be9e) main_usb_pane_t5

0x5ef1,	// (0x0005beb0) main_usb_pane_t6_ParamLimits

0x5ef1,	// (0x0005beb0) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x000655a2) main_usb_pane_t_ParamLimits

0x5115,	// (0x0005b0d4) aid_text_placing

0x511e,	// (0x0005b0dd) main_location2_pane_t1_ParamLimits

0x5132,	// (0x0005b0f1) main_location2_pane_t2_ParamLimits

0x5146,	// (0x0005b105) main_location2_pane_t3_ParamLimits

0x515c,	// (0x0005b11b) main_location2_pane_t4_ParamLimits

0x515c,	// (0x0005b11b) main_location2_pane_t4

0xf402,	// (0x000653c1) main_location2_pane_t_ParamLimits

0xc48a,	// (0x00062449) find_pinb_pane_g2_ParamLimits

0xc48a,	// (0x00062449) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0006510f) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0006510f) find_pinb_pane_g

0xc496,	// (0x00062455) find_pinb_pane_t1_ParamLimits

0xc4a8,	// (0x00062467) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00065114) find_pinb_pane_t_ParamLimits

0xc1eb,	// (0x000621aa) main_call3_pane

0x48a7,	// (0x0005a866) cale_month_day_heading_pane_t1_ParamLimits

0x4905,	// (0x0005a8c4) cale_month_day_heading_pane_t2_ParamLimits

0x496a,	// (0x0005a929) cale_month_day_heading_pane_t3_ParamLimits

0x49cf,	// (0x0005a98e) cale_month_day_heading_pane_t4_ParamLimits

0x4a34,	// (0x0005a9f3) cale_month_day_heading_pane_t5_ParamLimits

0x4a99,	// (0x0005aa58) cale_month_day_heading_pane_t6_ParamLimits

0x4afe,	// (0x0005aabd) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00065298) cale_month_day_heading_pane_t_ParamLimits

0x030d,	// (0x000562cc) smil_status_volume_pane

0x5970,	// (0x0005b92f) postcard_address_pane_ParamLimits

0x5970,	// (0x0005b92f) postcard_address_pane

0x5982,	// (0x0005b941) postcard_message_pane_ParamLimits

0x5982,	// (0x0005b941) postcard_message_pane

0x5e5c,	// (0x0005be1b) call2_cli_visual_pane_t1_ParamLimits

0x5e5c,	// (0x0005be1b) call2_cli_visual_pane_t1

0x6678,	// (0x0005c637) postcard_message_pane_t1_ParamLimits

0x6678,	// (0x0005c637) postcard_message_pane_t1

0x6661,	// (0x0005c620) postcard_address_pane_t1_ParamLimits

0x6661,	// (0x0005c620) postcard_address_pane_t1

0x664d,	// (0x0005c60c) popup_call3_audio_in_window_ParamLimits

0x664d,	// (0x0005c60c) popup_call3_audio_in_window

0x64dc,	// (0x0005c49b) bg_popup_call3_in_pane_ParamLimits

0x64dc,	// (0x0005c49b) bg_popup_call3_in_pane

0x654e,	// (0x0005c50d) popup_call3_audio_in_window_g1_ParamLimits

0x654e,	// (0x0005c50d) popup_call3_audio_in_window_g1

0x656e,	// (0x0005c52d) popup_call3_audio_in_window_g2_ParamLimits

0x656e,	// (0x0005c52d) popup_call3_audio_in_window_g2

0x658e,	// (0x0005c54d) popup_call3_audio_in_window_g3_ParamLimits

0x658e,	// (0x0005c54d) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00065604) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00065604) popup_call3_audio_in_window_g

0x65bf,	// (0x0005c57e) popup_call3_audio_in_window_t1_ParamLimits

0x65bf,	// (0x0005c57e) popup_call3_audio_in_window_t1

0x65fd,	// (0x0005c5bc) popup_call3_audio_in_window_t2_ParamLimits

0x65fd,	// (0x0005c5bc) popup_call3_audio_in_window_t2

0x663b,	// (0x0005c5fa) popup_call3_audio_in_window_t3_ParamLimits

0x663b,	// (0x0005c5fa) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0006560d) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0006560d) popup_call3_audio_in_window_t

0x088c,	// (0x0005684b) bg_popup_call3_rect_pane

0x1aa0,	// (0x00057a5f) bg_popup_call3_rect_pane_g1

0xc6a2,	// (0x00062661) bg_popup_call3_rect_pane_g2

0x1aa8,	// (0x00057a67) bg_popup_call3_rect_pane_g3

0x1ab0,	// (0x00057a6f) bg_popup_call3_rect_pane_g4

0x1ab8,	// (0x00057a77) bg_popup_call3_rect_pane_g5

0x1ac0,	// (0x00057a7f) bg_popup_call3_rect_pane_g6

0x1ac8,	// (0x00057a87) bg_popup_call3_rect_pane_g7

0x5538,	// (0x0005b4f7) mup_visualizer_osc_pane

0x094b,	// (0x0005690a) mup_visualizer_spec_pane

0x650c,	// (0x0005c4cb) call3_video_qcif_pane_ParamLimits

0x650c,	// (0x0005c4cb) call3_video_qcif_pane

0x651d,	// (0x0005c4dc) call3_video_qcif_uncrop_pane_ParamLimits

0x651d,	// (0x0005c4dc) call3_video_qcif_uncrop_pane

0x6529,	// (0x0005c4e8) call3_video_subqcif_pane_ParamLimits

0x6529,	// (0x0005c4e8) call3_video_subqcif_pane

0x653d,	// (0x0005c4fc) call3_video_subqcif_uncrop_pane_ParamLimits

0x653d,	// (0x0005c4fc) call3_video_subqcif_uncrop_pane

0x65ae,	// (0x0005c56d) popup_call3_audio_in_window_g4_ParamLimits

0x65ae,	// (0x0005c56d) popup_call3_audio_in_window_g4

0x64cb,	// (0x0005c48a) mup_spec_half_pane

0x64d4,	// (0x0005c493) mup_spec_half_pane_cp

0x1d46,	// (0x00057d05) mup_osc_middle_pane

0x1d4f,	// (0x00057d0e) mup_visualizer_osc_pane_g1

0x64ab,	// (0x0005c46a) mup_spec_bar_pane_ParamLimits

0x64ab,	// (0x0005c46a) mup_spec_bar_pane

0x1d33,	// (0x00057cf2) mup_spec_bar_pane_g1

0x1d3d,	// (0x00057cfc) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x000655f8) mup_spec_bar_pane_g

0x39e9,	// (0x000599a8) aid_cale_week_size_cell_pane_ParamLimits

0x39fc,	// (0x000599bb) bg_cale_heading_pane_ParamLimits

0xc71e,	// (0x000626dd) bg_cale_pane_cp01_ParamLimits

0x3a14,	// (0x000599d3) cale_week_corner_pane_ParamLimits

0x3a25,	// (0x000599e4) cale_week_day_heading_pane_ParamLimits

0x3a3d,	// (0x000599fc) cale_week_scroll_pane_g1_ParamLimits

0x3a52,	// (0x00059a11) cale_week_scroll_pane_g2_ParamLimits

0x3a63,	// (0x00059a22) cale_week_scroll_pane_g3_ParamLimits

0x3a74,	// (0x00059a33) cale_week_scroll_pane_g4_ParamLimits

0x3a85,	// (0x00059a44) cale_week_scroll_pane_g5_ParamLimits

0x3a96,	// (0x00059a55) cale_week_scroll_pane_g6_ParamLimits

0x3aa7,	// (0x00059a66) cale_week_scroll_pane_g7_ParamLimits

0x3ab8,	// (0x00059a77) cale_week_scroll_pane_g8_ParamLimits

0x3ac9,	// (0x00059a88) cale_week_scroll_pane_g9_ParamLimits

0x3ada,	// (0x00059a99) cale_week_scroll_pane_g10_ParamLimits

0x3aeb,	// (0x00059aaa) cale_week_scroll_pane_g11_ParamLimits

0x3afc,	// (0x00059abb) cale_week_scroll_pane_g12_ParamLimits

0x3b0d,	// (0x00059acc) cale_week_scroll_pane_g13_ParamLimits

0x3b1e,	// (0x00059add) cale_week_scroll_pane_g14_ParamLimits

0x3b2f,	// (0x00059aee) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x000651a0) cale_week_scroll_pane_g_ParamLimits

0x3b40,	// (0x00059aff) cale_week_time_pane_ParamLimits

0x3b51,	// (0x00059b10) grid_cale_week_pane_ParamLimits

0xc737,	// (0x000626f6) listscroll_cale_week_pane_t1

0x3b64,	// (0x00059b23) scroll_pane_cp08_ParamLimits

0x45f0,	// (0x0005a5af) cale_month_corner_pane_ParamLimits

0x02e3,	// (0x000562a2) cale_month_pane_t1

0x4870,	// (0x0005a82f) cale_month_week_pane_ParamLimits

0x4f7c,	// (0x0005af3b) popup_call_status_window_g1_ParamLimits

0x4f90,	// (0x0005af4f) popup_call_status_window_g2_ParamLimits

0x4fa4,	// (0x0005af63) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00065348) popup_call_status_window_g_ParamLimits

0x05ff,	// (0x000565be) aid_call2_pane

0x57a2,	// (0x0005b761) msg_header_pane_g1

0x5970,	// (0x0005b92f) postcard_address2_pane_ParamLimits

0x5970,	// (0x0005b92f) postcard_address2_pane

0x5982,	// (0x0005b941) postcard_message2_pane_ParamLimits

0x5982,	// (0x0005b941) postcard_message2_pane

0x6458,	// (0x0005c417) message2_row_pane_ParamLimits

0x6458,	// (0x0005c417) message2_row_pane

0x6477,	// (0x0005c436) address2_row_pane_ParamLimits

0x6477,	// (0x0005c436) address2_row_pane

0x1d01,	// (0x00057cc0) postcard_message2_row_pane_g1

0x1d09,	// (0x00057cc8) postcard_message2_row_pane_t1

0x1d01,	// (0x00057cc0) address2_row_pane_g1

0x1d09,	// (0x00057cc8) address2_row_pane_t1

0xc79b,	// (0x0006275a) aid_size_cell_vorec

0xc1eb,	// (0x000621aa) main_rss_pane

0x648a,	// (0x0005c449) rss_list_single_pane_ParamLimits

0x648a,	// (0x0005c449) rss_list_single_pane

0x1d17,	// (0x00057cd6) rss_list_single_pane_t1

0x1d25,	// (0x00057ce4) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x000655f3) rss_list_single_pane_t

0xc1eb,	// (0x000621aa) main_camera2_pane

0xc1eb,	// (0x000621aa) main_video2_pane

0x66f1,	// (0x0005c6b0) cams_zoom_pane_cp2_ParamLimits

0x66f1,	// (0x0005c6b0) cams_zoom_pane_cp2

0x6711,	// (0x0005c6d0) image2_vga_pane_ParamLimits

0x6711,	// (0x0005c6d0) image2_vga_pane

0x6762,	// (0x0005c721) main_camera2_pane_g1_ParamLimits

0x6762,	// (0x0005c721) main_camera2_pane_g1

0x6782,	// (0x0005c741) main_camera2_pane_g2_ParamLimits

0x6782,	// (0x0005c741) main_camera2_pane_g2

0x67a2,	// (0x0005c761) main_camera2_pane_g3_ParamLimits

0x67a2,	// (0x0005c761) main_camera2_pane_g3

0x67c2,	// (0x0005c781) main_camera2_pane_g4_ParamLimits

0x67c2,	// (0x0005c781) main_camera2_pane_g4

0x67e2,	// (0x0005c7a1) main_camera2_pane_g5_ParamLimits

0x67e2,	// (0x0005c7a1) main_camera2_pane_g5

0x6802,	// (0x0005c7c1) main_camera2_pane_g6_ParamLimits

0x6802,	// (0x0005c7c1) main_camera2_pane_g6

0x6822,	// (0x0005c7e1) main_camera2_pane_g7_ParamLimits

0x6822,	// (0x0005c7e1) main_camera2_pane_g7

0x6842,	// (0x0005c801) main_camera2_pane_g8_ParamLimits

0x6842,	// (0x0005c801) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00065614) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00065614) main_camera2_pane_g

0x6882,	// (0x0005c841) main_camera2_pane_t1_ParamLimits

0x6882,	// (0x0005c841) main_camera2_pane_t1

0x68b7,	// (0x0005c876) main_camera2_pane_t2_ParamLimits

0x68b7,	// (0x0005c876) main_camera2_pane_t2

0x68dd,	// (0x0005c89c) main_camera2_pane_t3_ParamLimits

0x68dd,	// (0x0005c89c) main_camera2_pane_t3

0x693b,	// (0x0005c8fa) main_camera2_pane_t4_ParamLimits

0x693b,	// (0x0005c8fa) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00065627) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00065627) main_camera2_pane_t

0x69cd,	// (0x0005c98c) cams_zoom_pane_cp4_ParamLimits

0x69cd,	// (0x0005c98c) cams_zoom_pane_cp4

0x69e3,	// (0x0005c9a2) image2_cif_pane_ParamLimits

0x69e3,	// (0x0005c9a2) image2_cif_pane

0x6a0e,	// (0x0005c9cd) image2_subqcif_pane_ParamLimits

0x6a0e,	// (0x0005c9cd) image2_subqcif_pane

0x6a28,	// (0x0005c9e7) main_video2_pane_g1_ParamLimits

0x6a28,	// (0x0005c9e7) main_video2_pane_g1

0x6a42,	// (0x0005ca01) main_video2_pane_g2_ParamLimits

0x6a42,	// (0x0005ca01) main_video2_pane_g2

0x6a58,	// (0x0005ca17) main_video2_pane_g3_ParamLimits

0x6a58,	// (0x0005ca17) main_video2_pane_g3

0x6a6e,	// (0x0005ca2d) main_video2_pane_g4_ParamLimits

0x6a6e,	// (0x0005ca2d) main_video2_pane_g4

0x6a84,	// (0x0005ca43) main_video2_pane_g5_ParamLimits

0x6a84,	// (0x0005ca43) main_video2_pane_g5

0x6a9a,	// (0x0005ca59) main_video2_pane_g6_ParamLimits

0x6a9a,	// (0x0005ca59) main_video2_pane_g6

0x0005,

0xf677,	// (0x00065636) main_video2_pane_g_ParamLimits

0xf677,	// (0x00065636) main_video2_pane_g

0x6ab4,	// (0x0005ca73) main_video2_pane_t1_ParamLimits

0x6ab4,	// (0x0005ca73) main_video2_pane_t1

0x6ad8,	// (0x0005ca97) main_video2_pane_t2_ParamLimits

0x6ad8,	// (0x0005ca97) main_video2_pane_t2

0x6b26,	// (0x0005cae5) main_video2_pane_t3_ParamLimits

0x6b26,	// (0x0005cae5) main_video2_pane_t3

0x0002,

0xf684,	// (0x00065643) main_video2_pane_t_ParamLimits

0xf684,	// (0x00065643) main_video2_pane_t

0x5fae,	// (0x0005bf6d) call_muted_g2

0x0001,

0xf626,	// (0x000655e5) call_muted_g

0xc1eb,	// (0x000621aa) main_mup2_pane

0x6b6e,	// (0x0005cb2d) main_mup2_pane_g1_ParamLimits

0x6b6e,	// (0x0005cb2d) main_mup2_pane_g1

0x6b7a,	// (0x0005cb39) main_mup2_pane_g2_ParamLimits

0x6b7a,	// (0x0005cb39) main_mup2_pane_g2

0xcc5f,	// (0x00062c1e) main_mup_pane_g13_cp1

0xcc67,	// (0x00062c26) mup_volume_pane_cp1

0x6b96,	// (0x0005cb55) main_mup2_pane_g4_ParamLimits

0x6b96,	// (0x0005cb55) main_mup2_pane_g4

0x6ba8,	// (0x0005cb67) main_mup2_pane_g5_ParamLimits

0x6ba8,	// (0x0005cb67) main_mup2_pane_g5

0x6bba,	// (0x0005cb79) main_mup2_pane_g6_ParamLimits

0x6bba,	// (0x0005cb79) main_mup2_pane_g6

0x6bcc,	// (0x0005cb8b) main_mup2_pane_g7_ParamLimits

0x6bcc,	// (0x0005cb8b) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0006564a) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0006564a) main_mup2_pane_g

0x6be4,	// (0x0005cba3) main_mup2_pane_t1_ParamLimits

0x6be4,	// (0x0005cba3) main_mup2_pane_t1

0x6bfa,	// (0x0005cbb9) main_mup2_pane_t2_ParamLimits

0x6bfa,	// (0x0005cbb9) main_mup2_pane_t2

0x6c10,	// (0x0005cbcf) main_mup2_pane_t3_ParamLimits

0x6c10,	// (0x0005cbcf) main_mup2_pane_t3

0x6c26,	// (0x0005cbe5) main_mup2_pane_t4_ParamLimits

0x6c26,	// (0x0005cbe5) main_mup2_pane_t4

0x6c3e,	// (0x0005cbfd) main_mup2_pane_t5_ParamLimits

0x6c3e,	// (0x0005cbfd) main_mup2_pane_t5

0x6c56,	// (0x0005cc15) main_mup2_pane_t6_ParamLimits

0x6c56,	// (0x0005cc15) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00065659) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00065659) main_mup2_pane_t

0x6c86,	// (0x0005cc45) mup2_visualizer_pane_ParamLimits

0x6c86,	// (0x0005cc45) mup2_visualizer_pane

0x6cb4,	// (0x0005cc73) mup_progress_pane_cp_ParamLimits

0x6cb4,	// (0x0005cc73) mup_progress_pane_cp

0xcc4a,	// (0x00062c09) mup_volume_pane_cp_ParamLimits

0xcc4a,	// (0x00062c09) mup_volume_pane_cp

0x6cc8,	// (0x0005cc87) mup2_visualizer_pane_g1_ParamLimits

0x6cc8,	// (0x0005cc87) mup2_visualizer_pane_g1

0x1d92,	// (0x00057d51) mup2_visualizer_pane_g2_ParamLimits

0x1d92,	// (0x00057d51) mup2_visualizer_pane_g2

0x6cdf,	// (0x0005cc9e) mup2_visualizer_pane_g3_ParamLimits

0x6cdf,	// (0x0005cc9e) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00065666) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00065666) mup2_visualizer_pane_g

0x0b72,	// (0x00056b31) aid_size_cell_fmradio

0x6160,	// (0x0005c11f) aid_height_parent_landcape

0xc9c0,	// (0x0006297f) wml_content_pane_cp

0xc9c8,	// (0x00062987) wml_tabs_pane

0xc9d1,	// (0x00062990) popup_wml_miniature_window

0xc9d9,	// (0x00062998) scroll_pane_cp021

0xc9ed,	// (0x000629ac) wml_content_pane_comp8

0xc1eb,	// (0x000621aa) bg_popup_sub_pane_cp05

0x1db0,	// (0x00057d6f) popup_wml_miniature_window_g1

0x1db8,	// (0x00057d77) wml_miniature_view_pane

0x6ceb,	// (0x0005ccaa) aid_size_wml_view

0x6cf3,	// (0x0005ccb2) wml_miniature_view_pane_g1

0x6cfc,	// (0x0005ccbb) wml_miniature_view_pane_g2

0x6d05,	// (0x0005ccc4) wml_miniature_view_pane_g3

0x6d0d,	// (0x0005cccc) wml_miniature_view_pane_g4

0x6d15,	// (0x0005ccd4) wml_miniature_view_pane_g5

0x6d1d,	// (0x0005ccdc) wml_miniature_view_pane_g6

0x6d25,	// (0x0005cce4) wml_miniature_view_pane_g7

0x6d2d,	// (0x0005ccec) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0006566d) wml_miniature_view_pane_g

0x1d86,	// (0x00057d45) background_graphic_ParamLimits

0x1d86,	// (0x00057d45) background_graphic

0x1dc0,	// (0x00057d7f) wml_tabs_2_pane

0x1dc9,	// (0x00057d88) wml_tabs_3_pane_ParamLimits

0x1dc9,	// (0x00057d88) wml_tabs_3_pane

0x1ddb,	// (0x00057d9a) wml_tabs_4_pane_ParamLimits

0x1ddb,	// (0x00057d9a) wml_tabs_4_pane

0x1df1,	// (0x00057db0) wml_tabs_5_pane_ParamLimits

0x1df1,	// (0x00057db0) wml_tabs_5_pane

0x1e0b,	// (0x00057dca) wml_tabs_pane_g2_ParamLimits

0x1e0b,	// (0x00057dca) wml_tabs_pane_g2

0x1e1f,	// (0x00057dde) wml_tabs_pane_g3_ParamLimits

0x1e1f,	// (0x00057dde) wml_tabs_pane_g3

0x6d35,	// (0x0005ccf4) wml_tabs_2_active_pane_ParamLimits

0x6d35,	// (0x0005ccf4) wml_tabs_2_active_pane

0x6d49,	// (0x0005cd08) wml_tabs_2_passive_pane_ParamLimits

0x6d49,	// (0x0005cd08) wml_tabs_2_passive_pane

0x6d5d,	// (0x0005cd1c) wml_tabs_3_active_pane_cp_ParamLimits

0x6d5d,	// (0x0005cd1c) wml_tabs_3_active_pane_cp

0x6d72,	// (0x0005cd31) wml_tabs_3_passive_pane_ParamLimits

0x6d72,	// (0x0005cd31) wml_tabs_3_passive_pane

0x6d85,	// (0x0005cd44) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d85,	// (0x0005cd44) wml_tabs_3_passive_pane_cp

0x6d9c,	// (0x0005cd5b) tabs_4_active_pane

0x6da4,	// (0x0005cd63) tabs_4_passive_pane

0x6dae,	// (0x0005cd6d) tabs_4_passive_pane_cp

0x6db6,	// (0x0005cd75) tabs_4_passive_pane_cp2

0x5e79,	// (0x0005be38) aid_height_text

0x550a,	// (0x0005b4c9) mup_volume_cont_pane_ParamLimits

0x550a,	// (0x0005b4c9) mup_volume_cont_pane

0x3640,	// (0x000595ff) aid_size_cell_pinb

0xc476,	// (0x00062435) aid_size_list_pinb

0x6ca0,	// (0x0005cc5f) mup2_volume_cont_pane_ParamLimits

0x6ca0,	// (0x0005cc5f) mup2_volume_cont_pane

0xcc36,	// (0x00062bf5) mup2_volume_cont_pane_g1_ParamLimits

0xcc36,	// (0x00062bf5) mup2_volume_cont_pane_g1

0x3307,	// (0x000592c6) aid_size_cell_touch_ParamLimits

0x3307,	// (0x000592c6) aid_size_cell_touch

0x352f,	// (0x000594ee) touch_pane_ParamLimits

0x352f,	// (0x000594ee) touch_pane

0xbd72,	// (0x00061d31) main_rss2_pane

0x1e3c,	// (0x00057dfb) listscroll_rss2_pane

0x1e45,	// (0x00057e04) rss2_navigation_pane

0x1e4d,	// (0x00057e0c) list_rss2_pane

0x073f,	// (0x000566fe) scroll_pane_cp22

0x1e55,	// (0x00057e14) rss2_navigation_pane_g1

0x1e5e,	// (0x00057e1d) rss2_navigation_pane_g2

0x1e66,	// (0x00057e25) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0006567e) rss2_navigation_pane_g

0x1e6e,	// (0x00057e2d) rss2_navigation_pane_t1

0x6dc0,	// (0x0005cd7f) rss2_list_single_pane_ParamLimits

0x6dc0,	// (0x0005cd7f) rss2_list_single_pane

0x1e7c,	// (0x00057e3b) rss2_list_single_pane_t2

0x1e8a,	// (0x00057e49) rss2_list_single_pane_t3_ParamLimits

0x1e8a,	// (0x00057e49) rss2_list_single_pane_t3

0x1ea7,	// (0x00057e66) rss2_list_single_pane_t4

0x4ce4,	// (0x0005aca3) smil_status_pane_g1

0x1c99,	// (0x00057c58) main_image2_pane_ParamLimits

0x1c99,	// (0x00057c58) main_image2_pane

0x6862,	// (0x0005c821) main_camera2_pane_g9_ParamLimits

0x6862,	// (0x0005c821) main_camera2_pane_g9

0x6990,	// (0x0005c94f) main_camera2_pane_t5_ParamLimits

0x6990,	// (0x0005c94f) main_camera2_pane_t5

0xcc06,	// (0x00062bc5) main_camera2_pane_t6_ParamLimits

0xcc06,	// (0x00062bc5) main_camera2_pane_t6

0x6dd8,	// (0x0005cd97) main_image2_pane_g1_ParamLimits

0x6dd8,	// (0x0005cd97) main_image2_pane_g1

0x5bb2,	// (0x0005bb71) smil2_video_pane_ParamLimits

0x5bb2,	// (0x0005bb71) smil2_video_pane

0x333f,	// (0x000592fe) aid_zoom_text_primary_cp

0xbdd0,	// (0x00061d8f) popup_preview_fixed_window

0xc929,	// (0x000628e8) im_reading_pane_g1

0x66d9,	// (0x0005c698) cams2_bc_adjust_pane_cp_ParamLimits

0x66d9,	// (0x0005c698) cams2_bc_adjust_pane_cp

0x69bf,	// (0x0005c97e) cams2_bc_adjust_pane_ParamLimits

0x69bf,	// (0x0005c97e) cams2_bc_adjust_pane

0x239f,	// (0x0005835e) cams2_bc_adjust_pane_g1

0xcc6f,	// (0x00062c2e) cams2_slider_pane

0xcc78,	// (0x00062c37) cams2_slider_pane_g1

0xcc81,	// (0x00062c40) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00065685) cams2_slider_pane_g

0x36ff,	// (0x000596be) calc_display_pane_ParamLimits

0x3725,	// (0x000596e4) calc_paper_pane_ParamLimits

0x3748,	// (0x00059707) grid_calc_pane_ParamLimits

0xcb73,	// (0x00062b32) popup_clock_digital_window_t1_ParamLimits

0x0b0f,	// (0x00056ace) main_image_pane_t1

0x36e1,	// (0x000596a0) aid_size_cell_calc_ParamLimits

0x36e1,	// (0x000596a0) aid_size_cell_calc

0x61a6,	// (0x0005c165) popup_blid_sat_info2_window_ParamLimits

0x61a6,	// (0x0005c165) popup_blid_sat_info2_window

0x1ebd,	// (0x00057e7c) aid_size_cell_blid

0x1ec5,	// (0x00057e84) bg_popup_window_pane_cp07

0x1ee8,	// (0x00057ea7) grid_popup_blid_pane

0x1ef2,	// (0x00057eb1) heading_pane_cp05_ParamLimits

0x1ef2,	// (0x00057eb1) heading_pane_cp05

0x1fbc,	// (0x00057f7b) cell_popup_blid_pane_ParamLimits

0x1fbc,	// (0x00057f7b) cell_popup_blid_pane

0x1fe2,	// (0x00057fa1) cell_popup_blid_pane_g1

0x1fea,	// (0x00057fa9) cell_popup_blid_pane_t1

0x6c70,	// (0x0005cc2f) mup2_indicator_pane_ParamLimits

0x6c70,	// (0x0005cc2f) mup2_indicator_pane

0x088c,	// (0x0005684b) mup2_visualizer_osc_pane

0x1d9e,	// (0x00057d5d) mup2_visualizer_spec_pane_ParamLimits

0x1d9e,	// (0x00057d5d) mup2_visualizer_spec_pane

0x6dee,	// (0x0005cdad) mup2_spec_half_pane

0x6df7,	// (0x0005cdb6) mup2_spec_half_pane_cp

0x6dff,	// (0x0005cdbe) mup2_spec_bar_pane_ParamLimits

0x6dff,	// (0x0005cdbe) mup2_spec_bar_pane

0x1d33,	// (0x00057cf2) mup2_spec_bar_pane_g1

0x1d3d,	// (0x00057cfc) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x000655f8) mup2_spec_bar_pane_g

0x6e1f,	// (0x0005cdde) mup2_osc_middle_pane

0x1d4f,	// (0x00057d0e) mup2_visualizer_osc_pane_g1

0xbdfa,	// (0x00061db9) popup_number_entry_window_t1_ParamLimits

0xbe0d,	// (0x00061dcc) popup_number_entry_window_t2_ParamLimits

0xbe1f,	// (0x00061dde) popup_number_entry_window_t3_ParamLimits

0x3581,	// (0x00059540) popup_number_entry_window_t5_ParamLimits

0x3581,	// (0x00059540) popup_number_entry_window_t5

0xf0fb,	// (0x000650ba) popup_number_entry_window_t_ParamLimits

0xbe31,	// (0x00061df0) text_title_cp2_ParamLimits

0xcbb2,	// (0x00062b71) aid_hotspot_pointer_text2_pane

0xcbd8,	// (0x00062b97) main_viewer_pane_g9_ParamLimits

0xcbd8,	// (0x00062b97) main_viewer_pane_g9

0x02e3,	// (0x000562a2) cale_month_pane_t1_ParamLimits

0x0320,	// (0x000562df) bg_cale_pane_ParamLimits

0x0338,	// (0x000562f7) list_cale_pane_ParamLimits

0xc737,	// (0x000626f6) listscroll_cale_day_pane_t1

0x0349,	// (0x00056308) scroll_pane_cp09_ParamLimits

0x5540,	// (0x0005b4ff) main_mup_eq_pane_t1_ParamLimits

0x5540,	// (0x0005b4ff) main_mup_eq_pane_t1

0x555a,	// (0x0005b519) main_mup_eq_pane_t2_ParamLimits

0x555a,	// (0x0005b519) main_mup_eq_pane_t2

0x5574,	// (0x0005b533) main_mup_eq_pane_t3_ParamLimits

0x5574,	// (0x0005b533) main_mup_eq_pane_t3

0x5590,	// (0x0005b54f) main_mup_eq_pane_t4_ParamLimits

0x5590,	// (0x0005b54f) main_mup_eq_pane_t4

0x55ac,	// (0x0005b56b) main_mup_eq_pane_t5_ParamLimits

0x55ac,	// (0x0005b56b) main_mup_eq_pane_t5

0x55c8,	// (0x0005b587) main_mup_eq_pane_t6_ParamLimits

0x55c8,	// (0x0005b587) main_mup_eq_pane_t6

0x55dc,	// (0x0005b59b) main_mup_eq_pane_t7_ParamLimits

0x55dc,	// (0x0005b59b) main_mup_eq_pane_t7

0x55f0,	// (0x0005b5af) main_mup_eq_pane_t8_ParamLimits

0x55f0,	// (0x0005b5af) main_mup_eq_pane_t8

0x5604,	// (0x0005b5c3) main_mup_eq_pane_t9_ParamLimits

0x5604,	// (0x0005b5c3) main_mup_eq_pane_t9

0x561e,	// (0x0005b5dd) main_mup_eq_pane_t10_ParamLimits

0x561e,	// (0x0005b5dd) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00065447) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00065447) main_mup_eq_pane_t

0x56cd,	// (0x0005b68c) mup_equalizer_pane_cp5_ParamLimits

0x56e1,	// (0x0005b6a0) mup_equalizer_pane_cp6_ParamLimits

0x56f5,	// (0x0005b6b4) mup_equalizer_pane_cp7_ParamLimits

0xbd72,	// (0x00061d31) main_gallery_pane

0x1d58,	// (0x00057d17) smil2_volume_pane

0x1d60,	// (0x00057d1f) smil_status_volume_pane_g1_ParamLimits

0x1d73,	// (0x00057d32) smil_status_volume_pane_g2_ParamLimits

0xcbe4,	// (0x00062ba3) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x000655fd) smil_status_volume_pane_g_ParamLimits

0x1ec5,	// (0x00057e84) bg_popup_window_pane_cp07_ParamLimits

0x1ed3,	// (0x00057e92) blid_firmament_pane

0x6e28,	// (0x0005cde7) aid_size_cell_gallery_ParamLimits

0x6e28,	// (0x0005cde7) aid_size_cell_gallery

0x6e3e,	// (0x0005cdfd) grid_gallery_pane_ParamLimits

0x6e3e,	// (0x0005cdfd) grid_gallery_pane

0x6e57,	// (0x0005ce16) cell_gallery_pane_ParamLimits

0x6e57,	// (0x0005ce16) cell_gallery_pane

0x1ff8,	// (0x00057fb7) bg_cell_gallery_focus_pane_ParamLimits

0x1ff8,	// (0x00057fb7) bg_cell_gallery_focus_pane

0x200a,	// (0x00057fc9) cell_gallery_pane_g1_ParamLimits

0x200a,	// (0x00057fc9) cell_gallery_pane_g1

0x6ea0,	// (0x0005ce5f) cell_gallery_pane_g2_ParamLimits

0x6ea0,	// (0x0005ce5f) cell_gallery_pane_g2

0x6ead,	// (0x0005ce6c) cell_gallery_pane_g3_ParamLimits

0x6ead,	// (0x0005ce6c) cell_gallery_pane_g3

0x2016,	// (0x00057fd5) cell_gallery_pane_g4_ParamLimits

0x2016,	// (0x00057fd5) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000656ab) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000656ab) cell_gallery_pane_g

0x2022,	// (0x00057fe1) bg_cell_gallery_focus_pane_g1

0x202a,	// (0x00057fe9) bg_cell_gallery_focus_pane_g2

0x2032,	// (0x00057ff1) bg_cell_gallery_focus_pane_g3

0x203a,	// (0x00057ff9) bg_cell_gallery_focus_pane_g4

0x2042,	// (0x00058001) bg_cell_gallery_focus_pane_g5

0x204a,	// (0x00058009) bg_cell_gallery_focus_pane_g6

0x2052,	// (0x00058011) bg_cell_gallery_focus_pane_g7

0x205a,	// (0x00058019) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x000656b4) bg_cell_gallery_focus_pane_g

0x2062,	// (0x00058021) aid_firma_cardinal

0x2076,	// (0x00058035) blid_firmament_pane_t1

0x208d,	// (0x0005804c) blid_firmament_pane_t2

0x20a4,	// (0x00058063) blid_firmament_pane_t3

0x20bb,	// (0x0005807a) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x000656c5) blid_firmament_pane_t

0x20d2,	// (0x00058091) blid_sat_info_pane

0x20e2,	// (0x000580a1) blid_sat_info_pane_g1

0x20e2,	// (0x000580a1) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x000656ce) blid_sat_info_pane_g

0x20ec,	// (0x000580ab) blid_sat_info_pane_t1

0x20fa,	// (0x000580b9) smil2_volume_content_pane

0x2103,	// (0x000580c2) smil2_volume_pane_g1

0x210b,	// (0x000580ca) smil2_volume_content_pane_g1

0x2114,	// (0x000580d3) smil2_volume_content_pane_g2

0x211d,	// (0x000580dc) smil2_volume_content_pane_g3

0x2126,	// (0x000580e5) smil2_volume_content_pane_g4

0x212f,	// (0x000580ee) smil2_volume_content_pane_g5

0x2138,	// (0x000580f7) smil2_volume_content_pane_g6

0x2141,	// (0x00058100) smil2_volume_content_pane_g7

0x214a,	// (0x00058109) smil2_volume_content_pane_g8

0x2153,	// (0x00058112) smil2_volume_content_pane_g9

0x215c,	// (0x0005811b) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x000656d3) smil2_volume_content_pane_g

0x3bba,	// (0x00059b79) cale_week_day_heading_pane_t1_ParamLimits

0x3bce,	// (0x00059b8d) cale_week_day_heading_pane_t2_ParamLimits

0x3be2,	// (0x00059ba1) cale_week_day_heading_pane_t3_ParamLimits

0x3bf6,	// (0x00059bb5) cale_week_day_heading_pane_t4_ParamLimits

0x3c0a,	// (0x00059bc9) cale_week_day_heading_pane_t5_ParamLimits

0x3c1e,	// (0x00059bdd) cale_week_day_heading_pane_t6_ParamLimits

0x3c32,	// (0x00059bf1) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000651bf) cale_week_day_heading_pane_t_ParamLimits

0xc749,	// (0x00062708) bg_cale_side_pane_ParamLimits

0x3c46,	// (0x00059c05) cale_week_time_pane_t1_ParamLimits

0x3c5e,	// (0x00059c1d) cale_week_time_pane_t2_ParamLimits

0x3c76,	// (0x00059c35) cale_week_time_pane_t3_ParamLimits

0x3c8e,	// (0x00059c4d) cale_week_time_pane_t4_ParamLimits

0x3ca6,	// (0x00059c65) cale_week_time_pane_t5_ParamLimits

0x3cbe,	// (0x00059c7d) cale_week_time_pane_t6_ParamLimits

0x3cd6,	// (0x00059c95) cale_week_time_pane_t7_ParamLimits

0x3cee,	// (0x00059cad) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000651ce) cale_week_time_pane_t_ParamLimits

0x3d06,	// (0x00059cc5) cell_cale_week_pane_g2_ParamLimits

0xc749,	// (0x00062708) bg_cale_side_pane_cp01_ParamLimits

0x4b63,	// (0x0005ab22) cale_month_week_pane_t1_ParamLimits

0x4b7a,	// (0x0005ab39) cale_month_week_pane_t2_ParamLimits

0x4b91,	// (0x0005ab50) cale_month_week_pane_t3_ParamLimits

0x4ba8,	// (0x0005ab67) cale_month_week_pane_t4_ParamLimits

0x4bbf,	// (0x0005ab7e) cale_month_week_pane_t5_ParamLimits

0x4bd6,	// (0x0005ab95) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000652a7) cale_month_week_pane_t_ParamLimits

0xcaf3,	// (0x00062ab2) cell_cale_month_pane_g1_ParamLimits

0xbd72,	// (0x00061d31) main_cale_event_viewer_pane

0xbd72,	// (0x00061d31) listscroll_cale_event_viewer_pane

0x2165,	// (0x00058124) list_cale_ev_pane

0x216d,	// (0x0005812c) scroll_pane_cp023

0x2179,	// (0x00058138) field_cale_ev_pane_ParamLimits

0x2179,	// (0x00058138) field_cale_ev_pane

0x2193,	// (0x00058152) field_cale_ev_content_pane_ParamLimits

0x2193,	// (0x00058152) field_cale_ev_content_pane

0x219f,	// (0x0005815e) field_cale_ev_pane_g1_ParamLimits

0x219f,	// (0x0005815e) field_cale_ev_pane_g1

0x21ab,	// (0x0005816a) field_cale_ev_pane_g2_ParamLimits

0x21ab,	// (0x0005816a) field_cale_ev_pane_g2

0x21c3,	// (0x00058182) field_cale_ev_pane_g3_ParamLimits

0x21c3,	// (0x00058182) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x000656e8) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x000656e8) field_cale_ev_pane_g

0x21db,	// (0x0005819a) field_cale_ev_pane_t1_ParamLimits

0x21db,	// (0x0005819a) field_cale_ev_pane_t1

0x21f2,	// (0x000581b1) field_cale_ev_content_pane_t1_ParamLimits

0x21f2,	// (0x000581b1) field_cale_ev_content_pane_t1

0x09f5,	// (0x000569b4) bg_button_pane_cp01

0xc581,	// (0x00062540) listscroll_cale_week_pane_ParamLimits

0x39df,	// (0x0005999e) popup_toolbar_window_cp01

0xc737,	// (0x000626f6) listscroll_cale_week_pane_t1_ParamLimits

0xc581,	// (0x00062540) listscroll_cale_day_pane_ParamLimits

0x4d43,	// (0x0005ad02) popup_toolbar_window_cp02

0xc737,	// (0x000626f6) listscroll_cale_day_pane_t1_ParamLimits

0xc581,	// (0x00062540) main_cale_month_pane_ParamLimits

0x63cc,	// (0x0005c38b) popup_toolbar_window_cp03_ParamLimits

0x63cc,	// (0x0005c38b) popup_toolbar_window_cp03

0x5a76,	// (0x0005ba35) main_image_pane_g2_ParamLimits

0x5a76,	// (0x0005ba35) main_image_pane_g2

0x5a87,	// (0x0005ba46) main_image_pane_g3_ParamLimits

0x5a87,	// (0x0005ba46) main_image_pane_g3

0x0002,

0xf51a,	// (0x000654d9) main_image_pane_g_ParamLimits

0xf51a,	// (0x000654d9) main_image_pane_g

0x0b0f,	// (0x00056ace) main_image_pane_t1_ParamLimits

0x5a98,	// (0x0005ba57) main_image_pane_t2_ParamLimits

0x5a98,	// (0x0005ba57) main_image_pane_t2

0x5aaa,	// (0x0005ba69) main_image_pane_t3_ParamLimits

0x5aaa,	// (0x0005ba69) main_image_pane_t3

0x5ad2,	// (0x0005ba91) main_image_pane_t4_ParamLimits

0x5ad2,	// (0x0005ba91) main_image_pane_t4

0x0003,

0xf521,	// (0x000654e0) main_image_pane_t_ParamLimits

0xf521,	// (0x000654e0) main_image_pane_t

0x5af2,	// (0x0005bab1) popup_image_details_window_cp01

0x5afc,	// (0x0005babb) popup_toobar_trans_pane_cp01_ParamLimits

0x5afc,	// (0x0005babb) popup_toobar_trans_pane_cp01

0x627d,	// (0x0005c23c) popup_image_details_window_ParamLimits

0x627d,	// (0x0005c23c) popup_image_details_window

0x1cb9,	// (0x00057c78) popup_image_focus_window

0x6693,	// (0x0005c652) camera2_autofocus_pane_ParamLimits

0x6693,	// (0x0005c652) camera2_autofocus_pane

0xbd72,	// (0x00061d31) bg_popup_sub_pane_cp06

0x220f,	// (0x000581ce) popup_image_focus_window_g1

0x2217,	// (0x000581d6) popup_image_focus_window_g2

0x221f,	// (0x000581de) popup_image_focus_window_g3

0x2227,	// (0x000581e6) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x000656ef) popup_image_focus_window_g

0x222f,	// (0x000581ee) popup_image_focus_window_t1

0x223d,	// (0x000581fc) popup_image_focus_window_t2

0x224d,	// (0x0005820c) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x000656f8) popup_image_focus_window_t

0x225b,	// (0x0005821a) camera2_autofocus_pane_g1

0x1c99,	// (0x00057c58) bg_tb_trans_pane_cp01

0x2269,	// (0x00058228) popup_image_details_window_g1

0x227c,	// (0x0005823b) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0006570a) popup_image_details_window_g

0x22a5,	// (0x00058264) popup_image_details_window_t1

0x22b7,	// (0x00058276) popup_image_details_window_t2

0x22d0,	// (0x0005828f) popup_image_details_window_t3

0x22e4,	// (0x000582a3) popup_image_details_window_t4

0x22ff,	// (0x000582be) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00065711) popup_image_details_window_t

0xc549,	// (0x00062508) bg_calc_paper_pane_ParamLimits

0xc55d,	// (0x0006251c) grid_highlight_pane_cp013

0xc567,	// (0x00062526) list_calc_pane_ParamLimits

0xc579,	// (0x00062538) scroll_pane_cp024

0xc581,	// (0x00062540) bg_calc_display_pane_ParamLimits

0x383b,	// (0x000597fa) calc_display_pane_t1_ParamLimits

0x384d,	// (0x0005980c) calc_display_pane_t2_ParamLimits

0xc58d,	// (0x0006254c) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00065141) calc_display_pane_t_ParamLimits

0x390a,	// (0x000598c9) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0006515e) cell_calc_pane_g

0x3913,	// (0x000598d2) cell_calc_pane_t1

0xc604,	// (0x000625c3) grid_highlight_pane_cp02_ParamLimits

0xc61a,	// (0x000625d9) toolbar_button_pane_cp01_ParamLimits

0xc61a,	// (0x000625d9) toolbar_button_pane_cp01

0x0b54,	// (0x00056b13) temp_image_control_pane_ParamLimits

0x0b54,	// (0x00056b13) temp_image_control_pane

0x1c99,	// (0x00057c58) main_mp3_pane

0x2319,	// (0x000582d8) temp_image_control_pane_g1_ParamLimits

0x2319,	// (0x000582d8) temp_image_control_pane_g1

0x2327,	// (0x000582e6) temp_image_control_pane_g2_ParamLimits

0x2327,	// (0x000582e6) temp_image_control_pane_g2

0x2339,	// (0x000582f8) temp_image_control_pane_g3_ParamLimits

0x2339,	// (0x000582f8) temp_image_control_pane_g3

0x6eea,	// (0x0005cea9) temp_image_control_pane_g4_ParamLimits

0x6eea,	// (0x0005cea9) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0006571c) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0006571c) temp_image_control_pane_g

0x2319,	// (0x000582d8) main_mp3_pane_g1

0x6efd,	// (0x0005cebc) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00065725) main_mp3_pane_g

0x6f33,	// (0x0005cef2) main_mp3_pane_t1

0xc832,	// (0x000627f1) main_camera_pane_g8_ParamLimits

0xc832,	// (0x000627f1) main_camera_pane_g8

0x3fb0,	// (0x00059f6f) main_video_pane_g7_ParamLimits

0x3fb0,	// (0x00059f6f) main_video_pane_g7

0xcc24,	// (0x00062be3) main_camera2_pane_t7_ParamLimits

0xcc24,	// (0x00062be3) main_camera2_pane_t7

0xc980,	// (0x0006293f) scroll_pane_cp025_ParamLimits

0xc980,	// (0x0006293f) scroll_pane_cp025

0xc994,	// (0x00062953) scroll_pane_cp026_ParamLimits

0xc994,	// (0x00062953) scroll_pane_cp026

0xc9a3,	// (0x00062962) wml_content_pane_ParamLimits

0xbd72,	// (0x00061d31) main_touch_calib_pane

0x7006,	// (0x0005cfc5) main_touch_calib_pane_g1

0x7012,	// (0x0005cfd1) main_touch_calib_pane_g2

0x701e,	// (0x0005cfdd) main_touch_calib_pane_g3

0x702a,	// (0x0005cfe9) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00065743) main_touch_calib_pane_g

0x7036,	// (0x0005cff5) main_touch_calib_pane_t1

0x7050,	// (0x0005d00f) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0006574c) main_touch_calib_pane_t

0x07cd,	// (0x0005678c) mup_progress_pane_cp02

0x07ec,	// (0x000567ab) navi_pane_g1

0x084e,	// (0x0005680d) navi_pane_mp_t3

0x1c99,	// (0x00057c58) main_mp3_pane_ParamLimits

0x640a,	// (0x0005c3c9) navi_pane_ParamLimits

0x2319,	// (0x000582d8) main_mp3_pane_g1_ParamLimits

0x6efd,	// (0x0005cebc) main_mp3_pane_g2_ParamLimits

0x6f0b,	// (0x0005ceca) main_mp3_pane_g3_ParamLimits

0x6f0b,	// (0x0005ceca) main_mp3_pane_g3

0x6f19,	// (0x0005ced8) main_mp3_pane_g4_ParamLimits

0x6f19,	// (0x0005ced8) main_mp3_pane_g4

0x2349,	// (0x00058308) main_mp3_pane_g5_ParamLimits

0x2349,	// (0x00058308) main_mp3_pane_g5

0x2357,	// (0x00058316) main_mp3_pane_g6_ParamLimits

0x2357,	// (0x00058316) main_mp3_pane_g6

0x2364,	// (0x00058323) main_mp3_pane_g7_ParamLimits

0x2364,	// (0x00058323) main_mp3_pane_g7

0x6f27,	// (0x0005cee6) main_mp3_pane_g8_ParamLimits

0x6f27,	// (0x0005cee6) main_mp3_pane_g8

0xf766,	// (0x00065725) main_mp3_pane_g_ParamLimits

0x6f41,	// (0x0005cf00) main_mp3_pane_t2

0x6f4f,	// (0x0005cf0e) main_mp3_pane_t3

0x6f5d,	// (0x0005cf1c) main_mp3_pane_t4

0x6f6b,	// (0x0005cf2a) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00065736) main_mp3_pane_t

0x6f87,	// (0x0005cf46) mup_progress_pane_cp01

0x333f,	// (0x000592fe) aid_zoom_text_secondary2

0x2165,	// (0x00058124) list_cale_ev2_pane

0x216d,	// (0x0005812c) scroll_pane_cp023_ParamLimits

0x70a6,	// (0x0005d065) field_cale_ev2_pane_ParamLimits

0x70a6,	// (0x0005d065) field_cale_ev2_pane

0x70cc,	// (0x0005d08b) field_cale_ev2_pane_g1_ParamLimits

0x70cc,	// (0x0005d08b) field_cale_ev2_pane_g1

0x70d8,	// (0x0005d097) field_cale_ev2_pane_g2_ParamLimits

0x70d8,	// (0x0005d097) field_cale_ev2_pane_g2

0x70f0,	// (0x0005d0af) field_cale_ev2_pane_g3_ParamLimits

0x70f0,	// (0x0005d0af) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00065757) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00065757) field_cale_ev2_pane_g

0x7114,	// (0x0005d0d3) field_cale_ev2_pane_t1_ParamLimits

0x7114,	// (0x0005d0d3) field_cale_ev2_pane_t1

0x712b,	// (0x0005d0ea) field_cale_ev2_pane_t2_ParamLimits

0x712b,	// (0x0005d0ea) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00065760) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00065760) field_cale_ev2_pane_t

0x5926,	// (0x0005b8e5) main_postcard_pane_g5_ParamLimits

0x5926,	// (0x0005b8e5) main_postcard_pane_g5

0x593c,	// (0x0005b8fb) main_postcard_pane_g6_ParamLimits

0x593c,	// (0x0005b8fb) main_postcard_pane_g6

0x3d60,	// (0x00059d1f) camera2_autofocus_pane_cp_ParamLimits

0x3d60,	// (0x00059d1f) camera2_autofocus_pane_cp

0x1c99,	// (0x00057c58) main_mup3_pane

0x7160,	// (0x0005d11f) main_mup3_pane_g1_ParamLimits

0x7160,	// (0x0005d11f) main_mup3_pane_g1

0x7182,	// (0x0005d141) main_mup3_pane_g2_ParamLimits

0x7182,	// (0x0005d141) main_mup3_pane_g2

0x7203,	// (0x0005d1c2) main_mup3_pane_g3_ParamLimits

0x7203,	// (0x0005d1c2) main_mup3_pane_g3

0x7245,	// (0x0005d204) main_mup3_pane_g4_ParamLimits

0x7245,	// (0x0005d204) main_mup3_pane_g4

0x7287,	// (0x0005d246) main_mup3_pane_g5_ParamLimits

0x7287,	// (0x0005d246) main_mup3_pane_g5

0x72cb,	// (0x0005d28a) main_mup3_pane_g6_ParamLimits

0x72cb,	// (0x0005d28a) main_mup3_pane_g6

0x72de,	// (0x0005d29d) main_mup3_pane_g7_ParamLimits

0x72de,	// (0x0005d29d) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00065770) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00065770) main_mup3_pane_g

0x7355,	// (0x0005d314) main_mup3_pane_t1_ParamLimits

0x7355,	// (0x0005d314) main_mup3_pane_t1

0x73c9,	// (0x0005d388) main_mup3_pane_t2_ParamLimits

0x73c9,	// (0x0005d388) main_mup3_pane_t2

0x749d,	// (0x0005d45c) main_mup3_pane_t4_ParamLimits

0x749d,	// (0x0005d45c) main_mup3_pane_t4

0x74f7,	// (0x0005d4b6) main_mup3_pane_t5_ParamLimits

0x74f7,	// (0x0005d4b6) main_mup3_pane_t5

0x75ab,	// (0x0005d56a) main_mup3_pane_t6_ParamLimits

0x75ab,	// (0x0005d56a) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00065781) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00065781) main_mup3_pane_t

0x765f,	// (0x0005d61e) mup3_progress_pane_ParamLimits

0x765f,	// (0x0005d61e) mup3_progress_pane

0x76db,	// (0x0005d69a) popup_mup3_control_window_ParamLimits

0x76db,	// (0x0005d69a) popup_mup3_control_window

0x76f7,	// (0x0005d6b6) popup_mup3_text_window

0x7715,	// (0x0005d6d4) mup3_progress_pane_t1

0x772c,	// (0x0005d6eb) mup3_progress_pane_t2

0x7743,	// (0x0005d702) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0006578e) mup3_progress_pane_t

0x775a,	// (0x0005d719) mup_progress_pane_cp03

0xbd72,	// (0x00061d31) bg_tb_trans_pane_cp04

0x776a,	// (0x0005d729) mup3_volume_pane

0x7772,	// (0x0005d731) popup_mup3_control_window_g1

0x777b,	// (0x0005d73a) mup3_volume_pane_g1

0x7784,	// (0x0005d743) mup3_volume_pane_g2

0x778d,	// (0x0005d74c) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00065795) mup3_volume_pane_g

0xbd72,	// (0x00061d31) bg_tb_trans_pane_cp03

0x7796,	// (0x0005d755) popup_mup3_text_window_g1

0x779e,	// (0x0005d75d) popup_mup3_text_window_t1

0xc5db,	// (0x0006259a) list_calc_item_pane_g1_ParamLimits

0x1e33,	// (0x00057df2) mup_volume_pane_cp_g1

0x706a,	// (0x0005d029) main_touch_calib_pane_t3

0x707e,	// (0x0005d03d) main_touch_calib_pane_t4

0x7092,	// (0x0005d051) main_touch_calib_pane_t5

0xbd7c,	// (0x00061d3b) aid_cell_size_toolbar2

0xbd84,	// (0x00061d43) aid_popup3_width_pane

0x3337,	// (0x000592f6) aid_zoom_text_msg_primary

0xc7ff,	// (0x000627be) vorec_t7

0xc59f,	// (0x0006255e) bg_calc_paper_pane_g1_ParamLimits

0xc5ab,	// (0x0006256a) bg_calc_paper_pane_g2_ParamLimits

0xc5b7,	// (0x00062576) bg_calc_paper_pane_g3_ParamLimits

0xc5c3,	// (0x00062582) bg_calc_paper_pane_g4_ParamLimits

0xc5cf,	// (0x0006258e) bg_calc_paper_pane_g5_ParamLimits

0x3894,	// (0x00059853) bg_calc_paper_pane_g6_ParamLimits

0x38a3,	// (0x00059862) bg_calc_paper_pane_g7_ParamLimits

0x38b2,	// (0x00059871) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00065148) bg_calc_paper_pane_g_ParamLimits

0x38c5,	// (0x00059884) calc_bg_paper_pane_g9_ParamLimits

0x3eba,	// (0x00059e79) image_qvga_pane_ParamLimits

0x3eba,	// (0x00059e79) image_qvga_pane

0xc446,	// (0x00062405) bg_popup_sub_pane_cp04_ParamLimits

0x0a8b,	// (0x00056a4a) popup_mup_playback_window_g1_ParamLimits

0x0a97,	// (0x00056a56) popup_mup_playback_window_t1_ParamLimits

0x0aac,	// (0x00056a6b) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000654d4) popup_mup_playback_window_t_ParamLimits

0x6b8a,	// (0x0005cb49) main_mup2_pane_g3_ParamLimits

0x6b8a,	// (0x0005cb49) main_mup2_pane_g3

0x425f,	// (0x0005a21e) popup_toolbar_window_cp04

0x0ea1,	// (0x00056e60) popup_call2_audio_second_window_g3_ParamLimits

0x0ea1,	// (0x00056e60) popup_call2_audio_second_window_g3

0x12ab,	// (0x0005726a) popup_call2_audio_first_window_g4_ParamLimits

0x12ab,	// (0x0005726a) popup_call2_audio_first_window_g4

0x192a,	// (0x000578e9) popup_call2_audio_in_window_g4_ParamLimits

0x192a,	// (0x000578e9) popup_call2_audio_in_window_g4

0x5a58,	// (0x0005ba17) aid_area_sk_bg_cut_ParamLimits

0x5a58,	// (0x0005ba17) aid_area_sk_bg_cut

0x0ac1,	// (0x00056a80) aid_area_sk_bg_cut_2_ParamLimits

0x0ac1,	// (0x00056a80) aid_area_sk_bg_cut_2

0x6e90,	// (0x0005ce4f) aid_placing_details_win

0x6e98,	// (0x0005ce57) aid_placing_details_win_2

0x225b,	// (0x0005821a) camera2_autofocus_pane_g1_ParamLimits

0x34ce,	// (0x0005948d) popup_fixed_preview_cale_window_ParamLimits

0x34ce,	// (0x0005948d) popup_fixed_preview_cale_window

0x089d,	// (0x0005685c) navi_slider_pane_g3

0x08a6,	// (0x00056865) navi_slider_pane_g4

0x08af,	// (0x0005686e) navi_slider_pane_g5

0x089d,	// (0x0005685c) navi_slider_pane_g6

0xcb99,	// (0x00062b58) navi_slider_pane_g7

0x09c2,	// (0x00056981) mup_scale_pane_g3

0x09cb,	// (0x0005698a) mup_scale_pane_g4

0x09d4,	// (0x00056993) mup_scale_pane_g5

0x5709,	// (0x0005b6c8) mup_scale_pane_g6

0x5712,	// (0x0005b6d1) mup_scale_pane_g7

0x089d,	// (0x0005685c) cams2_slider_pane_g3

0x1eb5,	// (0x00057e74) cams2_slider_pane_g4

0xcc8a,	// (0x00062c49) cams2_slider_pane_g5

0x089d,	// (0x0005685c) cams2_slider_pane_g6

0xcc92,	// (0x00062c51) cams2_slider_pane_g7

0x20e2,	// (0x000580a1) camera2_autofocus_pane_cp_g1

0x77ac,	// (0x0005d76b) bg_popup_preview_window_pane_cp02_ParamLimits

0x77ac,	// (0x0005d76b) bg_popup_preview_window_pane_cp02

0x77b8,	// (0x0005d777) list_fp_cale_pane_ParamLimits

0x77b8,	// (0x0005d777) list_fp_cale_pane

0x77c4,	// (0x0005d783) popup_fixed_preview_cale_window_t1_ParamLimits

0x77c4,	// (0x0005d783) popup_fixed_preview_cale_window_t1

0x77d6,	// (0x0005d795) popup_fixed_preview_cale_window_t2_ParamLimits

0x77d6,	// (0x0005d795) popup_fixed_preview_cale_window_t2

0x77eb,	// (0x0005d7aa) popup_fixed_preview_cale_window_t3_ParamLimits

0x77eb,	// (0x0005d7aa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0006579c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0006579c) popup_fixed_preview_cale_window_t

0x780c,	// (0x0005d7cb) list_single_fp_cale_pane_ParamLimits

0x780c,	// (0x0005d7cb) list_single_fp_cale_pane

0x7824,	// (0x0005d7e3) list_single_fp_cale_pane_g1_ParamLimits

0x7824,	// (0x0005d7e3) list_single_fp_cale_pane_g1

0x7830,	// (0x0005d7ef) list_single_fp_cale_pane_g2_ParamLimits

0x7830,	// (0x0005d7ef) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000657a3) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000657a3) list_single_fp_cale_pane_g

0x7849,	// (0x0005d808) list_single_fp_cale_pane_t1_ParamLimits

0x7849,	// (0x0005d808) list_single_fp_cale_pane_t1

0x785b,	// (0x0005d81a) list_single_fp_cale_pane_t2_ParamLimits

0x785b,	// (0x0005d81a) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000657aa) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000657aa) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbd72,	// (0x00061d31) main_dialer_pane

0x788e,	// (0x0005d84d) aid_cell_size_keypad

0x7898,	// (0x0005d857) dialer_ne_pane

0x78a0,	// (0x0005d85f) grid_dialer_command_1_pane

0x78a8,	// (0x0005d867) grid_dialer_command_2_pane

0x78b0,	// (0x0005d86f) grid_dialer_keypad_pane

0x78c2,	// (0x0005d881) bg_popup_call_pane_cp06_ParamLimits

0x78c2,	// (0x0005d881) bg_popup_call_pane_cp06

0x78ce,	// (0x0005d88d) dialer_ne_clear_pane_ParamLimits

0x78ce,	// (0x0005d88d) dialer_ne_clear_pane

0x78da,	// (0x0005d899) dialer_ne_pane_g1

0x78e2,	// (0x0005d8a1) dialer_ne_pane_t1_ParamLimits

0x78e2,	// (0x0005d8a1) dialer_ne_pane_t1

0x78f4,	// (0x0005d8b3) dialer_ne_pane_t2_ParamLimits

0x78f4,	// (0x0005d8b3) dialer_ne_pane_t2

0x791e,	// (0x0005d8dd) dialer_ne_pane_t3_ParamLimits

0x791e,	// (0x0005d8dd) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000657af) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000657af) dialer_ne_pane_t

0x794e,	// (0x0005d90d) dialer_ne_pane_t3_copy1_ParamLimits

0x794e,	// (0x0005d90d) dialer_ne_pane_t3_copy1

0x797d,	// (0x0005d93c) cell_dialer_keypad_pane_ParamLimits

0x797d,	// (0x0005d93c) cell_dialer_keypad_pane

0x7994,	// (0x0005d953) cell_dialer_command_1_pane_ParamLimits

0x7994,	// (0x0005d953) cell_dialer_command_1_pane

0x79aa,	// (0x0005d969) cell_dialer_command_2_pane_ParamLimits

0x79aa,	// (0x0005d969) cell_dialer_command_2_pane

0x79b9,	// (0x0005d978) bg_button_pane_cp02_ParamLimits

0x79b9,	// (0x0005d978) bg_button_pane_cp02

0x79c5,	// (0x0005d984) cell_dialer_keypad_pane_g1_ParamLimits

0x79c5,	// (0x0005d984) cell_dialer_keypad_pane_g1

0x79b9,	// (0x0005d978) bg_button_pane_cp03_ParamLimits

0x79b9,	// (0x0005d978) bg_button_pane_cp03

0x79da,	// (0x0005d999) cell_dialer_command_1_pane_g1_ParamLimits

0x79da,	// (0x0005d999) cell_dialer_command_1_pane_g1

0x79ee,	// (0x0005d9ad) bg_button_pane_cp04

0x79f6,	// (0x0005d9b5) cell_dialer_command_2_pane_g1

0x088c,	// (0x0005684b) bg_button_pane_cp06

0x79fe,	// (0x0005d9bd) dialer_ne_clear_pane_g1

0x5247,	// (0x0005b206) navi_pane_g2

0x5275,	// (0x0005b234) navi_pane_g3

0x0002,

0xf418,	// (0x000653d7) navi_pane_g

0x529e,	// (0x0005b25d) navi_pane_mv_g2

0x52c5,	// (0x0005b284) navi_pane_mv_g5

0x52cd,	// (0x0005b28c) navi_pane_mv_t1

0xc581,	// (0x00062540) main_clock2_pane

0x7a31,	// (0x0005d9f0) main_clock2_list_pane_ParamLimits

0x7a31,	// (0x0005d9f0) main_clock2_list_pane

0x7a67,	// (0x0005da26) main_clock2_pane_t1_ParamLimits

0x7a67,	// (0x0005da26) main_clock2_pane_t1

0x7aa5,	// (0x0005da64) main_clock2_pane_t2_ParamLimits

0x7aa5,	// (0x0005da64) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x000657b6) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x000657b6) main_clock2_pane_t

0x7b2f,	// (0x0005daee) popup_clock_analogue_window_cp03_ParamLimits

0x7b2f,	// (0x0005daee) popup_clock_analogue_window_cp03

0x7b56,	// (0x0005db15) popup_clock_digital_window_cp02_ParamLimits

0x7b56,	// (0x0005db15) popup_clock_digital_window_cp02

0x7bcb,	// (0x0005db8a) main_clock2_list_single_pane_ParamLimits

0x7bcb,	// (0x0005db8a) main_clock2_list_single_pane

0x088c,	// (0x0005684b) list_highlight_pane_cp05

0x7bdd,	// (0x0005db9c) main_clock2_list_single_pane_t1

0x425f,	// (0x0005a21e) popup_toolbar_window_cp04_ParamLimits

0x6eba,	// (0x0005ce79) camera2_autofocus_pane_g2_ParamLimits

0x6eba,	// (0x0005ce79) camera2_autofocus_pane_g2

0x6ec6,	// (0x0005ce85) camera2_autofocus_pane_g3_ParamLimits

0x6ec6,	// (0x0005ce85) camera2_autofocus_pane_g3

0x6ed2,	// (0x0005ce91) camera2_autofocus_pane_g4_ParamLimits

0x6ed2,	// (0x0005ce91) camera2_autofocus_pane_g4

0x6ede,	// (0x0005ce9d) camera2_autofocus_pane_g5_ParamLimits

0x6ede,	// (0x0005ce9d) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x000656ff) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x000656ff) camera2_autofocus_pane_g

0x7140,	// (0x0005d0ff) camera2_autofocus_pane_cp_g2

0x7148,	// (0x0005d107) camera2_autofocus_pane_cp_g3

0x7150,	// (0x0005d10f) camera2_autofocus_pane_cp_g4

0x7158,	// (0x0005d117) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00065765) camera2_autofocus_pane_cp_g

0x78ba,	// (0x0005d879) popup_dialer_spcha_window

0xbd72,	// (0x00061d31) bg_popup_sub_pane_cp07

0x7c83,	// (0x0005dc42) list_spcha_pane

0x7c8b,	// (0x0005dc4a) list_single_spcha_pane_ParamLimits

0x7c8b,	// (0x0005dc4a) list_single_spcha_pane

0xbd72,	// (0x00061d31) list_highlight_pane_cp06

0x7c9c,	// (0x0005dc5b) list_single_spcha_pane_t1

0x16d4,	// (0x00057693) popup_call2_audio_out_window_g4_ParamLimits

0x16d4,	// (0x00057693) popup_call2_audio_out_window_g4

0xbd72,	// (0x00061d31) main_imed2_pane

0x1cc1,	// (0x00057c80) popup_imed_adjust2_window

0x6295,	// (0x0005c254) popup_imed_trans_window_ParamLimits

0x6295,	// (0x0005c254) popup_imed_trans_window

0x1f1e,	// (0x00057edd) popup_blid_sat_info2_window_t1

0x1f2c,	// (0x00057eeb) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00065694) popup_blid_sat_info2_window_t

0x7caa,	// (0x0005dc69) aid_size_cell_colour_35

0x7cca,	// (0x0005dc89) aid_size_cell_colour_112

0x7cea,	// (0x0005dca9) aid_size_cell_effect

0x1c8b,	// (0x00057c4a) bg_tb_trans_pane_cp02

0x03bc,	// (0x0005637b) heading_imed_pane

0x7d0a,	// (0x0005dcc9) listscroll_imed_pane

0x7d16,	// (0x0005dcd5) heading_imed_pane_g1

0x7d1e,	// (0x0005dcdd) heading_imed_pane_t1

0x7d2c,	// (0x0005dceb) grid_imed_colour_35_pane_ParamLimits

0x7d2c,	// (0x0005dceb) grid_imed_colour_35_pane

0x7d47,	// (0x0005dd06) grid_imed_effect_pane

0x7d5c,	// (0x0005dd1b) list_imed_aspect_pane

0x7d64,	// (0x0005dd23) scroll_pane_cp027_ParamLimits

0x7d64,	// (0x0005dd23) scroll_pane_cp027

0x7d75,	// (0x0005dd34) cell_imed_effect_pane_ParamLimits

0x7d75,	// (0x0005dd34) cell_imed_effect_pane

0x7d9c,	// (0x0005dd5b) cell_imed_colour_pane_ParamLimits

0x7d9c,	// (0x0005dd5b) cell_imed_colour_pane

0x7dde,	// (0x0005dd9d) cell_imed_colour_pane_g1_ParamLimits

0x7dde,	// (0x0005dd9d) cell_imed_colour_pane_g1

0x7def,	// (0x0005ddae) hgihlgiht_grid_pane_cp016_ParamLimits

0x7def,	// (0x0005ddae) hgihlgiht_grid_pane_cp016

0x7e00,	// (0x0005ddbf) cell_imed_effect_pane_g1

0x7e08,	// (0x0005ddc7) grid_highlight_pane_cp017

0x237c,	// (0x0005833b) list_imed_single_pane_ParamLimits

0x237c,	// (0x0005833b) list_imed_single_pane

0xbd72,	// (0x00061d31) list_highlight_pane_cp07

0x7e11,	// (0x0005ddd0) list_imed_aspect_pane_comp1_t1

0x1c8b,	// (0x00057c4a) bg_tb_trans_pane_cp05

0x7e33,	// (0x0005ddf2) popup_imed_adjust2_window_g1

0x7e5a,	// (0x0005de19) popup_imed_adjust2_window_t1

0x7e72,	// (0x0005de31) slider_imed_adjust_pane

0x7e86,	// (0x0005de45) slider_imed_adjust_pane_g1

0x7e96,	// (0x0005de55) slider_imed_adjust_pane_g2

0x7ea6,	// (0x0005de65) slider_imed_adjust_pane_g3

0x7eb7,	// (0x0005de76) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x000657d3) slider_imed_adjust_pane_g

0x7ec8,	// (0x0005de87) aid_size_cell_clipart2

0x7ed4,	// (0x0005de93) grid_imed_clipart_pane

0x7ede,	// (0x0005de9d) scroll_pane_cp031

0x7ee6,	// (0x0005dea5) cell_imed_clipart_pane_ParamLimits

0x7ee6,	// (0x0005dea5) cell_imed_clipart_pane

0x7f0d,	// (0x0005decc) cell_imed_clipart_pane_g1

0xbd72,	// (0x00061d31) grid_highlight_pane_cp014

0x7a46,	// (0x0005da05) main_clock2_pane_g1_ParamLimits

0x7a46,	// (0x0005da05) main_clock2_pane_g1

0x7b76,	// (0x0005db35) aid_call2_pane_cp10

0x7b88,	// (0x0005db47) aid_call_pane_cp10

0x07c1,	// (0x00056780) popup_clock_analogue_window_cp10_g1

0x07c1,	// (0x00056780) popup_clock_analogue_window_cp10_g2

0x7b9a,	// (0x0005db59) popup_clock_analogue_window_cp10_g3

0x7b9a,	// (0x0005db59) popup_clock_analogue_window_cp10_g4

0x07c1,	// (0x00056780) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x000657c1) popup_clock_analogue_window_cp10_g

0x7bac,	// (0x0005db6b) popup_clock_analogue_window_cp10_t1

0x7beb,	// (0x0005dbaa) clock_digital_number_pane_cp10_ParamLimits

0x7beb,	// (0x0005dbaa) clock_digital_number_pane_cp10

0x7c03,	// (0x0005dbc2) clock_digital_number_pane_cp11_ParamLimits

0x7c03,	// (0x0005dbc2) clock_digital_number_pane_cp11

0x7c1b,	// (0x0005dbda) clock_digital_number_pane_cp12_ParamLimits

0x7c1b,	// (0x0005dbda) clock_digital_number_pane_cp12

0x7c33,	// (0x0005dbf2) clock_digital_number_pane_cp13_ParamLimits

0x7c33,	// (0x0005dbf2) clock_digital_number_pane_cp13

0x7c4b,	// (0x0005dc0a) clock_digital_separator_pane_cp10_ParamLimits

0x7c4b,	// (0x0005dc0a) clock_digital_separator_pane_cp10

0x7c63,	// (0x0005dc22) popup_clock_digital_window_cp02_t1_ParamLimits

0x7c63,	// (0x0005dc22) popup_clock_digital_window_cp02_t1

0xc43e,	// (0x000623fd) clock_digital_number_pane_cp10_g1

0xc43e,	// (0x000623fd) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x000657dc) clock_digital_number_pane_cp10_g

0xc43e,	// (0x000623fd) clock_digital_separator_pane_cp10_g1

0xc43e,	// (0x000623fd) clock_digital_separator_pane_g2_cp10

0x085c,	// (0x0005681b) navi_pane_vded_g4

0x0865,	// (0x00056824) navi_pane_vded_g5

0x086e,	// (0x0005682d) navi_pane_vded_t1

0xbd72,	// (0x00061d31) main_vded_pane

0x7f16,	// (0x0005ded5) main_vded_pane_g1

0x7f22,	// (0x0005dee1) main_vded_pane_g2

0x7f2c,	// (0x0005deeb) main_vded_pane_g3

0x0002,

0xf822,	// (0x000657e1) main_vded_pane_g

0x7f36,	// (0x0005def5) main_vded_pane_t1

0x7f44,	// (0x0005df03) main_vded_pane_t2

0x0001,

0xf829,	// (0x000657e8) main_vded_pane_t

0x7f52,	// (0x0005df11) vded_slider_pane

0x7f5c,	// (0x0005df1b) vded_video_pane

0x7f66,	// (0x0005df25) vded_video_pane_g1

0x7f70,	// (0x0005df2f) vded_video_pane_g2

0x20e2,	// (0x000580a1) vded_video_pane_g3

0x0002,

0xf82e,	// (0x000657ed) vded_video_pane_g

0x7f79,	// (0x0005df38) vded_slider_pane_g1

0x1e33,	// (0x00057df2) vded_slider_pane_g2

0x7f82,	// (0x0005df41) vded_slider_pane_g3

0x7f8b,	// (0x0005df4a) vded_slider_pane_g4

0x7f94,	// (0x0005df53) vded_slider_pane_g5

0x0004,

0xf835,	// (0x000657f4) vded_slider_pane_g

0x76c3,	// (0x0005d682) mup3_rocker_pane_ParamLimits

0x76c3,	// (0x0005d682) mup3_rocker_pane

0x7f9d,	// (0x0005df5c) mup3_control_keys_pane_g1

0x7fa5,	// (0x0005df64) mup3_control_keys_pane_g2

0x7fad,	// (0x0005df6c) mup3_control_keys_pane_g3

0x7fb5,	// (0x0005df74) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x000657ff) mup3_control_keys_pane_g

0x3505,	// (0x000594c4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3505,	// (0x000594c4) popup_toolbar2_fixed_window_cp01

0x76ff,	// (0x0005d6be) popup_toolbar2_fixed_window_cp02_ParamLimits

0x76ff,	// (0x0005d6be) popup_toolbar2_fixed_window_cp02

0x1013,	// (0x00056fd2) popup_call2_audio_second_window_t4_ParamLimits

0x1013,	// (0x00056fd2) popup_call2_audio_second_window_t4

0x1541,	// (0x00057500) popup_call2_audio_first_window_t6_ParamLimits

0x1541,	// (0x00057500) popup_call2_audio_first_window_t6

0x17d7,	// (0x00057796) popup_call2_audio_out_window_t6_ParamLimits

0x17d7,	// (0x00057796) popup_call2_audio_out_window_t6

0xbd72,	// (0x00061d31) main_vitu_pane

0x7fc5,	// (0x0005df84) aid_size_cell_itu_ParamLimits

0x7fc5,	// (0x0005df84) aid_size_cell_itu

0x1c99,	// (0x00057c58) bg_popup_window_pane_cp08_ParamLimits

0x1c99,	// (0x00057c58) bg_popup_window_pane_cp08

0x7fdb,	// (0x0005df9a) field_vitu_entry_pane_ParamLimits

0x7fdb,	// (0x0005df9a) field_vitu_entry_pane

0x7ff2,	// (0x0005dfb1) grid_vitu_function_pane_ParamLimits

0x7ff2,	// (0x0005dfb1) grid_vitu_function_pane

0x800d,	// (0x0005dfcc) grid_vitu_itu_pane_ParamLimits

0x800d,	// (0x0005dfcc) grid_vitu_itu_pane

0x802b,	// (0x0005dfea) cell_vitu_itu_pane_ParamLimits

0x802b,	// (0x0005dfea) cell_vitu_itu_pane

0x804f,	// (0x0005e00e) cell_vitu_function_pane_ParamLimits

0x804f,	// (0x0005e00e) cell_vitu_function_pane

0x1c99,	// (0x00057c58) bg_popup_sub_pane_cp08_ParamLimits

0x1c99,	// (0x00057c58) bg_popup_sub_pane_cp08

0x8082,	// (0x0005e041) field_vitu_entry_pane_t1_ParamLimits

0x8082,	// (0x0005e041) field_vitu_entry_pane_t1

0x80a2,	// (0x0005e061) field_vitu_entry_pane_t2_ParamLimits

0x80a2,	// (0x0005e061) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0006580d) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0006580d) field_vitu_entry_pane_t

0x80bf,	// (0x0005e07e) bg_button_pane_cp05_ParamLimits

0x80bf,	// (0x0005e07e) bg_button_pane_cp05

0x80cd,	// (0x0005e08c) cell_vitu_itu_pane_g1

0x80e5,	// (0x0005e0a4) cell_vitu_itu_pane_t1_ParamLimits

0x80e5,	// (0x0005e0a4) cell_vitu_itu_pane_t1

0x80f7,	// (0x0005e0b6) cell_vitu_itu_pane_t2_ParamLimits

0x80f7,	// (0x0005e0b6) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00065812) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00065812) cell_vitu_itu_pane_t

0x812c,	// (0x0005e0eb) bg_button_pane_cp07

0x8136,	// (0x0005e0f5) cell_vitu_function_pane_g1

0xc511,	// (0x000624d0) main_calc_pane_g1

0x332b,	// (0x000592ea) aid_visual_content_pane

0xbd72,	// (0x00061d31) main_vradio_pane

0x813f,	// (0x0005e0fe) main_vradio_pane_g1_ParamLimits

0x813f,	// (0x0005e0fe) main_vradio_pane_g1

0x8158,	// (0x0005e117) main_vradio_pane_g2_ParamLimits

0x8158,	// (0x0005e117) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00065819) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00065819) main_vradio_pane_g

0x8165,	// (0x0005e124) main_vradio_pane_t1_ParamLimits

0x8165,	// (0x0005e124) main_vradio_pane_t1

0x817a,	// (0x0005e139) main_vradio_pane_t2_ParamLimits

0x817a,	// (0x0005e139) main_vradio_pane_t2

0x818f,	// (0x0005e14e) main_vradio_pane_t3_ParamLimits

0x818f,	// (0x0005e14e) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0006581e) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0006581e) main_vradio_pane_t

0x81a3,	// (0x0005e162) vradio_rocker_control_pane_ParamLimits

0x81a3,	// (0x0005e162) vradio_rocker_control_pane

0x81b5,	// (0x0005e174) vradio_station_info_pane_ParamLimits

0x81b5,	// (0x0005e174) vradio_station_info_pane

0x81c7,	// (0x0005e186) vradio_frequency_info_pane_ParamLimits

0x81c7,	// (0x0005e186) vradio_frequency_info_pane

0x20e2,	// (0x000580a1) vradio_station_info_pane_g1

0x81d6,	// (0x0005e195) vradio_station_info_pane_t1_ParamLimits

0x81d6,	// (0x0005e195) vradio_station_info_pane_t1

0x81f8,	// (0x0005e1b7) vradio_station_info_pane_t2_ParamLimits

0x81f8,	// (0x0005e1b7) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00065825) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00065825) vradio_station_info_pane_t

0x820a,	// (0x0005e1c9) vradio_tuning_pane

0x8212,	// (0x0005e1d1) vradio_rocker_control_pane_g1

0x821a,	// (0x0005e1d9) vradio_rocker_control_pane_g2

0x8222,	// (0x0005e1e1) vradio_rocker_control_pane_g3

0x822a,	// (0x0005e1e9) vradio_rocker_control_pane_g4

0x8232,	// (0x0005e1f1) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0006582a) vradio_rocker_control_pane_g

0x823a,	// (0x0005e1f9) vradio_frequency_info_pane_g1

0x8244,	// (0x0005e203) vradio_frequency_info_pane_t1_ParamLimits

0x8244,	// (0x0005e203) vradio_frequency_info_pane_t1

0x8258,	// (0x0005e217) vradio_tuning_pane_g1

0x8263,	// (0x0005e222) vradio_tuning_pane_t1

0xbd98,	// (0x00061d57) area_side_right_pane_ParamLimits

0xbd98,	// (0x00061d57) area_side_right_pane

0x1c52,	// (0x00057c11) status_small_pane_g1

0x1c5a,	// (0x00057c19) status_small_pane_g2

0x1c63,	// (0x00057c22) status_small_pane_g3

0x1c6c,	// (0x00057c2b) status_small_pane_g4

0x0003,

0xf62b,	// (0x000655ea) status_small_pane_g

0x1c75,	// (0x00057c34) status_small_pane_t1

0xbd72,	// (0x00061d31) main_video3_pane

0x8272,	// (0x0005e231) cams_zoom_vslider_pane

0x827a,	// (0x0005e239) image3_wide_pane_ParamLimits

0x827a,	// (0x0005e239) image3_wide_pane

0x8294,	// (0x0005e253) image3_wide_small_pane

0x82a0,	// (0x0005e25f) main_video3_pane_g1_ParamLimits

0x82a0,	// (0x0005e25f) main_video3_pane_g1

0x82bc,	// (0x0005e27b) main_video3_pane_g2_ParamLimits

0x82bc,	// (0x0005e27b) main_video3_pane_g2

0x0001,

0xf876,	// (0x00065835) main_video3_pane_g_ParamLimits

0xf876,	// (0x00065835) main_video3_pane_g

0x82d8,	// (0x0005e297) main_video3_pane_t1_ParamLimits

0x82d8,	// (0x0005e297) main_video3_pane_t1

0x8303,	// (0x0005e2c2) main_video3_pane_t2_ParamLimits

0x8303,	// (0x0005e2c2) main_video3_pane_t2

0x832e,	// (0x0005e2ed) main_video3_pane_t3_ParamLimits

0x832e,	// (0x0005e2ed) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0006583a) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0006583a) main_video3_pane_t

0x835b,	// (0x0005e31a) cams_zoom_vslider_pane_g1

0x8364,	// (0x0005e323) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00065841) cams_zoom_vslider_pane_g

0x836c,	// (0x0005e32b) small_slider_vertical_pane

0x20e2,	// (0x000580a1) small_slider_vertical_pane_g1

0x20e2,	// (0x000580a1) small_slider_vertical_pane_g2

0x8374,	// (0x0005e333) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00065846) small_slider_vertical_pane_g

0xbd72,	// (0x00061d31) main_hwr_training_pane

0x837d,	// (0x0005e33c) hwr_training_instruct_pane_ParamLimits

0x837d,	// (0x0005e33c) hwr_training_instruct_pane

0x839f,	// (0x0005e35e) hwr_training_navi_pane_ParamLimits

0x839f,	// (0x0005e35e) hwr_training_navi_pane

0x83be,	// (0x0005e37d) hwr_training_write_pane_ParamLimits

0x83be,	// (0x0005e37d) hwr_training_write_pane

0xbd72,	// (0x00061d31) bg_frame_shadow_pane

0x840e,	// (0x0005e3cd) hwr_training_write_pane_g1

0x8416,	// (0x0005e3d5) hwr_training_write_pane_g2

0x841e,	// (0x0005e3dd) hwr_training_write_pane_g3

0x8426,	// (0x0005e3e5) hwr_training_write_pane_g4

0x842e,	// (0x0005e3ed) hwr_training_write_pane_g5

0x8436,	// (0x0005e3f5) hwr_training_write_pane_g6

0x843e,	// (0x0005e3fd) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0006584d) hwr_training_write_pane_g

0xcc9b,	// (0x00062c5a) hwr_training_navi_pane_g1_ParamLimits

0xcc9b,	// (0x00062c5a) hwr_training_navi_pane_g1

0xccad,	// (0x00062c6c) hwr_training_navi_pane_g2_ParamLimits

0xccad,	// (0x00062c6c) hwr_training_navi_pane_g2

0xccbf,	// (0x00062c7e) hwr_training_navi_pane_g3_ParamLimits

0xccbf,	// (0x00062c7e) hwr_training_navi_pane_g3

0xcccf,	// (0x00062c8e) hwr_training_navi_pane_g4_ParamLimits

0xcccf,	// (0x00062c8e) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0006585c) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0006585c) hwr_training_navi_pane_g

0xccdc,	// (0x00062c9b) hwr_training_navi_pane_t1

0x8455,	// (0x0005e414) list_single_hwr_training_instruct_pane_ParamLimits

0x8455,	// (0x0005e414) list_single_hwr_training_instruct_pane

0xccea,	// (0x00062ca9) list_single_hwr_training_instruct_pane_t1

0x2022,	// (0x00057fe1) bg_frame_shadow_pane_g1

0xccf9,	// (0x00062cb8) bg_frame_shadow_pane_g2

0xcd01,	// (0x00062cc0) bg_frame_shadow_pane_g3

0xcd09,	// (0x00062cc8) bg_frame_shadow_pane_g4

0xcd11,	// (0x00062cd0) bg_frame_shadow_pane_g5

0xcd19,	// (0x00062cd8) bg_frame_shadow_pane_g6

0xcd21,	// (0x00062ce0) bg_frame_shadow_pane_g7

0xc67a,	// (0x00062639) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00065867) bg_frame_shadow_pane_g

0xbd72,	// (0x00061d31) main_video_tele_dialer_pane

0x8472,	// (0x0005e431) aid_size_cell_video_keypad_ParamLimits

0x8472,	// (0x0005e431) aid_size_cell_video_keypad

0x848c,	// (0x0005e44b) grid_video_dialer_keypad_pane_ParamLimits

0x848c,	// (0x0005e44b) grid_video_dialer_keypad_pane

0x84d8,	// (0x0005e497) video_down_pane_cp_ParamLimits

0x84d8,	// (0x0005e497) video_down_pane_cp

0x850c,	// (0x0005e4cb) cell_video_dialer_keypad_pane_ParamLimits

0x850c,	// (0x0005e4cb) cell_video_dialer_keypad_pane

0xcd29,	// (0x00062ce8) bg_button_pane_cp08_ParamLimits

0xcd29,	// (0x00062ce8) bg_button_pane_cp08

0x852e,	// (0x0005e4ed) cell_video_dialer_keypad_pane_g1_ParamLimits

0x852e,	// (0x0005e4ed) cell_video_dialer_keypad_pane_g1

0x76ad,	// (0x0005d66c) mup3_rocker2_pane_ParamLimits

0x76ad,	// (0x0005d66c) mup3_rocker2_pane

0x20e2,	// (0x000580a1) mup3_rocker2_pane_g1

0x617e,	// (0x0005c13d) main_dialer2_pane

0xbd72,	// (0x00061d31) main_mp4_pane

0xcd3d,	// (0x00062cfc) main_mp4_pane_g1_ParamLimits

0xcd3d,	// (0x00062cfc) main_mp4_pane_g1

0xcd3d,	// (0x00062cfc) main_mp4_pane_g2_ParamLimits

0xcd3d,	// (0x00062cfc) main_mp4_pane_g2

0x8569,	// (0x0005e528) main_mp4_pane_g3_ParamLimits

0x8569,	// (0x0005e528) main_mp4_pane_g3

0xcd4b,	// (0x00062d0a) main_mp4_pane_g4_ParamLimits

0xcd4b,	// (0x00062d0a) main_mp4_pane_g4

0xcd73,	// (0x00062d32) main_mp4_pane_g5_ParamLimits

0xcd73,	// (0x00062d32) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00065887) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00065887) main_mp4_pane_g

0xcdc3,	// (0x00062d82) main_mp4_pane_t1_ParamLimits

0xcdc3,	// (0x00062d82) main_mp4_pane_t1

0xce1f,	// (0x00062dde) main_mp4_pane_t2_ParamLimits

0xce1f,	// (0x00062dde) main_mp4_pane_t2

0xce71,	// (0x00062e30) main_mp4_pane_t3_ParamLimits

0xce71,	// (0x00062e30) main_mp4_pane_t3

0xce91,	// (0x00062e50) main_mp4_pane_t4_ParamLimits

0xce91,	// (0x00062e50) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00065894) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00065894) main_mp4_pane_t

0xced5,	// (0x00062e94) mp4_progress_pane_ParamLimits

0xced5,	// (0x00062e94) mp4_progress_pane

0xeef1,	// (0x00064eb0) mp4_rocker_pane_ParamLimits

0xeef1,	// (0x00064eb0) mp4_rocker_pane

0xcf27,	// (0x00062ee6) mp4_progress_pane_t1

0xcf40,	// (0x00062eff) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0006589d) mp4_progress_pane_t

0xcf59,	// (0x00062f18) mup_progress_pane_cp04

0xcf65,	// (0x00062f24) mp4_rocker_pane_g1

0x85a5,	// (0x0005e564) aid_cell_size_keypad2_ParamLimits

0x85a5,	// (0x0005e564) aid_cell_size_keypad2

0x85bb,	// (0x0005e57a) dialer2_ne_pane_ParamLimits

0x85bb,	// (0x0005e57a) dialer2_ne_pane

0x85d5,	// (0x0005e594) grid_dialer2_keypad_pane_ParamLimits

0x85d5,	// (0x0005e594) grid_dialer2_keypad_pane

0x1ec5,	// (0x00057e84) bg_popup_call_pane_cp07_ParamLimits

0x1ec5,	// (0x00057e84) bg_popup_call_pane_cp07

0x85f3,	// (0x0005e5b2) dialer2_ne_pane_t1_ParamLimits

0x85f3,	// (0x0005e5b2) dialer2_ne_pane_t1

0x8632,	// (0x0005e5f1) cell_dialer2_keypad_pane_ParamLimits

0x8632,	// (0x0005e5f1) cell_dialer2_keypad_pane

0xcf81,	// (0x00062f40) bg_button_pane_pane_cp04_ParamLimits

0xcf81,	// (0x00062f40) bg_button_pane_pane_cp04

0x8656,	// (0x0005e615) cell_dialer2_keypad_pane_g1_ParamLimits

0x8656,	// (0x0005e615) cell_dialer2_keypad_pane_g1

0x418b,	// (0x0005a14a) aid_placing_vt_set_content_ParamLimits

0x418b,	// (0x0005a14a) aid_placing_vt_set_content

0x41ad,	// (0x0005a16c) aid_placing_vt_set_title_ParamLimits

0x41ad,	// (0x0005a16c) aid_placing_vt_set_title

0xbd72,	// (0x00061d31) main_image3_pane

0x871c,	// (0x0005e6db) area_side_right_pane_cp01_ParamLimits

0x871c,	// (0x0005e6db) area_side_right_pane_cp01

0xcd3d,	// (0x00062cfc) main_image3_pane_g1_ParamLimits

0xcd3d,	// (0x00062cfc) main_image3_pane_g1

0x8733,	// (0x0005e6f2) main_image3_pane_g2_ParamLimits

0x8733,	// (0x0005e6f2) main_image3_pane_g2

0x875b,	// (0x0005e71a) main_image3_pane_g3_ParamLimits

0x875b,	// (0x0005e71a) main_image3_pane_g3

0x8785,	// (0x0005e744) main_image3_pane_g4_ParamLimits

0x8785,	// (0x0005e744) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x000658ac) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x000658ac) main_image3_pane_g

0x87af,	// (0x0005e76e) main_image3_pane_t1_ParamLimits

0x87af,	// (0x0005e76e) main_image3_pane_t1

0x8807,	// (0x0005e7c6) main_image3_pane_t2_ParamLimits

0x8807,	// (0x0005e7c6) main_image3_pane_t2

0x8859,	// (0x0005e818) main_image3_pane_t3_ParamLimits

0x8859,	// (0x0005e818) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x000658b5) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x000658b5) main_image3_pane_t

0x1c99,	// (0x00057c58) grid_sctrl_middle_pane_cp01_ParamLimits

0x1c99,	// (0x00057c58) grid_sctrl_middle_pane_cp01

0x88e1,	// (0x0005e8a0) cell_sctrl_middle_pane_cp01_ParamLimits

0x88e1,	// (0x0005e8a0) cell_sctrl_middle_pane_cp01

0x88fe,	// (0x0005e8bd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x88fe,	// (0x0005e8bd) cell_sctrl_middle_pane_cp01_g1

0xbd72,	// (0x00061d31) main_call4_pane

0x8914,	// (0x0005e8d3) aid_size_button_call4_ParamLimits

0x8914,	// (0x0005e8d3) aid_size_button_call4

0x8945,	// (0x0005e904) call4_windows_pane_ParamLimits

0x8945,	// (0x0005e904) call4_windows_pane

0x8965,	// (0x0005e924) grid_call4_button_pane_ParamLimits

0x8965,	// (0x0005e924) grid_call4_button_pane

0xcf8d,	// (0x00062f4c) call4_windows_conf_pane

0xcfa2,	// (0x00062f61) popup_call4_audio_first_window_ParamLimits

0xcfa2,	// (0x00062f61) popup_call4_audio_first_window

0xcfee,	// (0x00062fad) popup_call4_audio_second_window_ParamLimits

0xcfee,	// (0x00062fad) popup_call4_audio_second_window

0xd002,	// (0x00062fc1) popup_call4_audio_wait_window_ParamLimits

0xd002,	// (0x00062fc1) popup_call4_audio_wait_window

0x8992,	// (0x0005e951) cell_call4_button_pane_ParamLimits

0x8992,	// (0x0005e951) cell_call4_button_pane

0x89bb,	// (0x0005e97a) bg_button_pane_cp09_ParamLimits

0x89bb,	// (0x0005e97a) bg_button_pane_cp09

0x89c7,	// (0x0005e986) cell_call4_button_pane_g1_ParamLimits

0x89c7,	// (0x0005e986) cell_call4_button_pane_g1

0x89ed,	// (0x0005e9ac) cell_call4_button_pane_t1_ParamLimits

0x89ed,	// (0x0005e9ac) cell_call4_button_pane_t1

0xd04a,	// (0x00063009) popup_call4_audio_conf_window_ParamLimits

0xd04a,	// (0x00063009) popup_call4_audio_conf_window

0x7715,	// (0x0005d6d4) mup3_progress_pane_t1_ParamLimits

0x772c,	// (0x0005d6eb) mup3_progress_pane_t2_ParamLimits

0x7743,	// (0x0005d702) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0006578e) mup3_progress_pane_t_ParamLimits

0x775a,	// (0x0005d719) mup_progress_pane_cp03_ParamLimits

0x7fbd,	// (0x0005df7c) mup3_control_keys_pane_g4_copy1

0xcf03,	// (0x00062ec2) mp4_rocker2_pane_ParamLimits

0xcf03,	// (0x00062ec2) mp4_rocker2_pane

0xd05e,	// (0x0006301d) mp4_rocker2_pane_g1

0xd066,	// (0x00063025) mp4_rocker2_pane_g2

0xef43,	// (0x00064f02) mp4_rocker2_pane_g3

0xef4b,	// (0x00064f0a) mp4_rocker2_pane_g4

0xef53,	// (0x00064f12) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x000658be) mp4_rocker2_pane_g

0xbd72,	// (0x00061d31) main_camera4_pane

0xbd72,	// (0x00061d31) main_video4_pane

0x84a8,	// (0x0005e467) main_video_tele_dialer_pane_t1_ParamLimits

0x84a8,	// (0x0005e467) main_video_tele_dialer_pane_t1

0x84c0,	// (0x0005e47f) main_video_tele_dialer_pane_t2_ParamLimits

0x84c0,	// (0x0005e47f) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00065878) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00065878) main_video_tele_dialer_pane_t

0x8a2f,	// (0x0005e9ee) cam4_autofocus_pane_ParamLimits

0x8a2f,	// (0x0005e9ee) cam4_autofocus_pane

0x8a45,	// (0x0005ea04) cam4_image_uncrop_pane_ParamLimits

0x8a45,	// (0x0005ea04) cam4_image_uncrop_pane

0x8a5f,	// (0x0005ea1e) cam4_indicators_pane_ParamLimits

0x8a5f,	// (0x0005ea1e) cam4_indicators_pane

0x8a8a,	// (0x0005ea49) main_camera4_pane_g1_ParamLimits

0x8a8a,	// (0x0005ea49) main_camera4_pane_g1

0x8a9d,	// (0x0005ea5c) main_camera4_pane_g2_ParamLimits

0x8a9d,	// (0x0005ea5c) main_camera4_pane_g2

0x8ab0,	// (0x0005ea6f) main_camera4_pane_g3_ParamLimits

0x8ab0,	// (0x0005ea6f) main_camera4_pane_g3

0x8ac3,	// (0x0005ea82) main_camera4_pane_g4_ParamLimits

0x8ac3,	// (0x0005ea82) main_camera4_pane_g4

0x8ad6,	// (0x0005ea95) main_camera4_pane_g5_ParamLimits

0x8ad6,	// (0x0005ea95) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x000658c9) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x000658c9) main_camera4_pane_g

0x8afa,	// (0x0005eab9) main_camera4_pane_t1_ParamLimits

0x8afa,	// (0x0005eab9) main_camera4_pane_t1

0xef6b,	// (0x00064f2a) bg_tb_trans_pane_cp06

0xef81,	// (0x00064f40) cam4_indicators_pane_g1

0xef92,	// (0x00064f51) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x000658e4) cam4_indicators_pane_g

0xefb0,	// (0x00064f6f) cam4_indicators_pane_t1

0x8b70,	// (0x0005eb2f) main_video4_pane_g1_ParamLimits

0x8b70,	// (0x0005eb2f) main_video4_pane_g1

0x8b83,	// (0x0005eb42) main_video4_pane_g2_ParamLimits

0x8b83,	// (0x0005eb42) main_video4_pane_g2

0x8b97,	// (0x0005eb56) main_video4_pane_g3_ParamLimits

0x8b97,	// (0x0005eb56) main_video4_pane_g3

0x8bab,	// (0x0005eb6a) main_video4_pane_g4_ParamLimits

0x8bab,	// (0x0005eb6a) main_video4_pane_g4

0x0004,

0xf92c,	// (0x000658eb) main_video4_pane_g_ParamLimits

0xf92c,	// (0x000658eb) main_video4_pane_g

0x8bd3,	// (0x0005eb92) vid4_indicators_pane_ParamLimits

0x8bd3,	// (0x0005eb92) vid4_indicators_pane

0x8c05,	// (0x0005ebc4) video4_image_uncrop_cif_pane_ParamLimits

0x8c05,	// (0x0005ebc4) video4_image_uncrop_cif_pane

0x8c1f,	// (0x0005ebde) video4_image_uncrop_nhd_pane_ParamLimits

0x8c1f,	// (0x0005ebde) video4_image_uncrop_nhd_pane

0x8a45,	// (0x0005ea04) video4_image_uncrop_vga_pane_ParamLimits

0x8a45,	// (0x0005ea04) video4_image_uncrop_vga_pane

0xefd2,	// (0x00064f91) bg_tb_trans_pane_cp07

0x8c33,	// (0x0005ebf2) vid4_indicators_pane_g1

0x8c40,	// (0x0005ebff) vid4_indicators_pane_g2

0x8c4d,	// (0x0005ec0c) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x000658f6) vid4_indicators_pane_g

0x8c72,	// (0x0005ec31) vid4_indicators_pane_t1

0x8c84,	// (0x0005ec43) cam4_autofocus_pane_g1

0x8c8c,	// (0x0005ec4b) cam4_autofocus_pane_g2

0x8c94,	// (0x0005ec53) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00065901) cam4_autofocus_pane_g

0x8c9c,	// (0x0005ec5b) cam4_autofocus_pane_g3_copy1

0x84f0,	// (0x0005e4af) video_down_pane_cp_t1

0x84fe,	// (0x0005e4bd) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0006587d) video_down_pane_cp_t

0x1c99,	// (0x00057c58) popup_vitu2_window_ParamLimits

0x1c99,	// (0x00057c58) popup_vitu2_window

0x8ca4,	// (0x0005ec63) aid_size_cell2_itu2_ParamLimits

0x8ca4,	// (0x0005ec63) aid_size_cell2_itu2

0x8cca,	// (0x0005ec89) aid_size_cell_itu2_ParamLimits

0x8cca,	// (0x0005ec89) aid_size_cell_itu2

0x8d26,	// (0x0005ece5) bg_popup_window_pane_cp09_ParamLimits

0x8d26,	// (0x0005ece5) bg_popup_window_pane_cp09

0x8d34,	// (0x0005ecf3) field_vitu2_entry_pane_ParamLimits

0x8d34,	// (0x0005ecf3) field_vitu2_entry_pane

0x8d5a,	// (0x0005ed19) grid_vitu2_function_pane_ParamLimits

0x8d5a,	// (0x0005ed19) grid_vitu2_function_pane

0x8dab,	// (0x0005ed6a) grid_vitu2_itu_pane_ParamLimits

0x8dab,	// (0x0005ed6a) grid_vitu2_itu_pane

0x8e3c,	// (0x0005edfb) cell_vitu2_itu_pane_ParamLimits

0x8e3c,	// (0x0005edfb) cell_vitu2_itu_pane

0x8e60,	// (0x0005ee1f) cell_vitu2_function_pane_ParamLimits

0x8e60,	// (0x0005ee1f) cell_vitu2_function_pane

0xd06e,	// (0x0006302d) bg_popup_call_pane_cp08_ParamLimits

0xd06e,	// (0x0006302d) bg_popup_call_pane_cp08

0xd087,	// (0x00063046) field_vitu2_entry_pane_g1

0xd093,	// (0x00063052) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00065908) field_vitu2_entry_pane_g

0xd0ad,	// (0x0006306c) field_vitu2_entry_pane_t1_ParamLimits

0xd0ad,	// (0x0006306c) field_vitu2_entry_pane_t1

0xd0df,	// (0x0006309e) field_vitu2_entry_pane_t2_ParamLimits

0xd0df,	// (0x0006309e) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0006590f) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0006590f) field_vitu2_entry_pane_t

0x8e9f,	// (0x0005ee5e) bg_button_pane_cp010_ParamLimits

0x8e9f,	// (0x0005ee5e) bg_button_pane_cp010

0x8ead,	// (0x0005ee6c) cell_vitu2_itu_pane_g1

0x8ecb,	// (0x0005ee8a) cell_vitu2_itu_pane_t1_ParamLimits

0x8ecb,	// (0x0005ee8a) cell_vitu2_itu_pane_t1

0x3213,	// (0x000591d2) cell_vitu2_itu_pane_t2_ParamLimits

0x3213,	// (0x000591d2) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00065919) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00065919) cell_vitu2_itu_pane_t

0xefe8,	// (0x00064fa7) bg_button_pane_cp011

0x8f31,	// (0x0005eef0) cell_vitu2_function_pane_g1

0xbd72,	// (0x00061d31) main_myfav_hc_pane

0x88a9,	// (0x0005e868) popup_image3_note_pane_ParamLimits

0x88a9,	// (0x0005e868) popup_image3_note_pane

0x88c5,	// (0x0005e884) popup_image3_tool_bar_pane_ParamLimits

0x88c5,	// (0x0005e884) popup_image3_tool_bar_pane

0x3297,	// (0x00059256) cell_vitu2_itu_pane_t3_ParamLimits

0x3297,	// (0x00059256) cell_vitu2_itu_pane_t3

0xbd72,	// (0x00061d31) bg_popup_trans_pane

0xd104,	// (0x000630c3) grid_image3_tool_bar_pane

0xd10e,	// (0x000630cd) bg_popup_trans_pane_g1

0xca89,	// (0x00062a48) bg_popup_trans_pane_g2

0xd116,	// (0x000630d5) bg_popup_trans_pane_g3

0xd11e,	// (0x000630dd) bg_popup_trans_pane_g4

0xd126,	// (0x000630e5) bg_popup_trans_pane_g5

0xd12e,	// (0x000630ed) bg_popup_trans_pane_g6

0xd136,	// (0x000630f5) bg_popup_trans_pane_g7

0xd13e,	// (0x000630fd) bg_popup_trans_pane_g8

0xca69,	// (0x00062a28) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00065920) bg_popup_trans_pane_g

0xd146,	// (0x00063105) cell_image3_tool_bar_pane_ParamLimits

0xd146,	// (0x00063105) cell_image3_tool_bar_pane

0x20e2,	// (0x000580a1) cell_image3_tool_bar_pane_g1

0xbd72,	// (0x00061d31) bg_popup_trans_pane_cp1

0xd15a,	// (0x00063119) popup_image3_note_pane_t1

0xd168,	// (0x00063127) popup_image3_note_pane_t2

0xd176,	// (0x00063135) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00065933) popup_image3_note_pane_t

0xd184,	// (0x00063143) popup_image3_note_pane_t3_copy1

0x8f45,	// (0x0005ef04) bg_myfav_hc_instruction_pane_ParamLimits

0x8f45,	// (0x0005ef04) bg_myfav_hc_instruction_pane

0x8f5b,	// (0x0005ef1a) cell_myfav_contact_pane_ParamLimits

0x8f5b,	// (0x0005ef1a) cell_myfav_contact_pane

0x8f77,	// (0x0005ef36) cell_myfav_contact_pane_cp1_ParamLimits

0x8f77,	// (0x0005ef36) cell_myfav_contact_pane_cp1

0x8f8f,	// (0x0005ef4e) cell_myfav_contact_pane_cp2_ParamLimits

0x8f8f,	// (0x0005ef4e) cell_myfav_contact_pane_cp2

0x8fa7,	// (0x0005ef66) cell_myfav_contact_pane_cp3_ParamLimits

0x8fa7,	// (0x0005ef66) cell_myfav_contact_pane_cp3

0x8fbe,	// (0x0005ef7d) cell_myfav_contact_pane_cp4_ParamLimits

0x8fbe,	// (0x0005ef7d) cell_myfav_contact_pane_cp4

0x8fd6,	// (0x0005ef95) cell_myfav_contact_pane_cp5_ParamLimits

0x8fd6,	// (0x0005ef95) cell_myfav_contact_pane_cp5

0x8fea,	// (0x0005efa9) cell_myfav_contact_pane_cp6_ParamLimits

0x8fea,	// (0x0005efa9) cell_myfav_contact_pane_cp6

0x9000,	// (0x0005efbf) cell_myfav_contact_pane_cp7_ParamLimits

0x9000,	// (0x0005efbf) cell_myfav_contact_pane_cp7

0xd192,	// (0x00063151) listscroll_gen_pane_cp05

0x901a,	// (0x0005efd9) main_myfav_hc_pane_g1_ParamLimits

0x901a,	// (0x0005efd9) main_myfav_hc_pane_g1

0x9034,	// (0x0005eff3) main_myfav_hc_pane_g2_ParamLimits

0x9034,	// (0x0005eff3) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0006593a) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0006593a) main_myfav_hc_pane_g

0x9066,	// (0x0005f025) main_myfav_hc_pane_t1_ParamLimits

0x9066,	// (0x0005f025) main_myfav_hc_pane_t1

0xd19b,	// (0x0006315a) main_myfav_hc_pane_t2_ParamLimits

0xd19b,	// (0x0006315a) main_myfav_hc_pane_t2

0xd1ad,	// (0x0006316c) main_myfav_hc_pane_t3_ParamLimits

0xd1ad,	// (0x0006316c) main_myfav_hc_pane_t3

0x907d,	// (0x0005f03c) main_myfav_hc_pane_t4_ParamLimits

0x907d,	// (0x0005f03c) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00065941) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00065941) main_myfav_hc_pane_t

0x20e2,	// (0x000580a1) bg_myfav_hc_instruction_pane_g1

0xd1bf,	// (0x0006317e) cell_myfav_contact_pane_g1_ParamLimits

0xd1bf,	// (0x0006317e) cell_myfav_contact_pane_g1

0xd1bf,	// (0x0006317e) cell_myfav_contact_pane_g2_ParamLimits

0xd1bf,	// (0x0006317e) cell_myfav_contact_pane_g2

0xd1cb,	// (0x0006318a) cell_myfav_contact_pane_g3_ParamLimits

0xd1cb,	// (0x0006318a) cell_myfav_contact_pane_g3

0x72de,	// (0x0005d29d) cell_myfav_contact_pane_g4_ParamLimits

0x72de,	// (0x0005d29d) cell_myfav_contact_pane_g4

0xd1d8,	// (0x00063197) cell_myfav_contact_pane_g5_ParamLimits

0xd1d8,	// (0x00063197) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0006594c) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0006594c) cell_myfav_contact_pane_g

0x904e,	// (0x0005f00d) main_myfav_hc_pane_g3_ParamLimits

0x904e,	// (0x0005f00d) main_myfav_hc_pane_g3

0x3466,	// (0x00059425) popup_adpt_find_window

0x90a5,	// (0x0005f064) afind_page_pane_ParamLimits

0x90a5,	// (0x0005f064) afind_page_pane

0x90ba,	// (0x0005f079) aid_size_cell_afind_ParamLimits

0x90ba,	// (0x0005f079) aid_size_cell_afind

0x90d8,	// (0x0005f097) bg_popup_sub_pane_cp09_ParamLimits

0x90d8,	// (0x0005f097) bg_popup_sub_pane_cp09

0x90e5,	// (0x0005f0a4) find_pane_cp01_ParamLimits

0x90e5,	// (0x0005f0a4) find_pane_cp01

0xd1e4,	// (0x000631a3) grid_afind_control_pane_ParamLimits

0xd1e4,	// (0x000631a3) grid_afind_control_pane

0x90f2,	// (0x0005f0b1) grid_afind_pane_ParamLimits

0x90f2,	// (0x0005f0b1) grid_afind_pane

0x9114,	// (0x0005f0d3) cell_afind_pane_ParamLimits

0x9114,	// (0x0005f0d3) cell_afind_pane

0x20e2,	// (0x000580a1) afind_page_pane_g1

0x9175,	// (0x0005f134) afind_page_pane_g2

0x917e,	// (0x0005f13d) afind_page_pane_g3

0x0002,

0xf998,	// (0x00065957) afind_page_pane_g

0x9187,	// (0x0005f146) afind_page_pane_t1

0xd1f8,	// (0x000631b7) cell_afind_grid_control_pane_ParamLimits

0xd1f8,	// (0x000631b7) cell_afind_grid_control_pane

0xcf81,	// (0x00062f40) bg_button_pane_cp69_ParamLimits

0xcf81,	// (0x00062f40) bg_button_pane_cp69

0x91a7,	// (0x0005f166) cell_afind_pane_g1_ParamLimits

0x91a7,	// (0x0005f166) cell_afind_pane_g1

0x91b4,	// (0x0005f173) cell_afind_pane_t1_ParamLimits

0x91b4,	// (0x0005f173) cell_afind_pane_t1

0xc87c,	// (0x0006283b) bg_button_pane_cp72

0xd207,	// (0x000631c6) cell_afind_grid_control_pane_g1

0x5c39,	// (0x0005bbf8) aid_image_placing_area_ParamLimits

0x5c39,	// (0x0005bbf8) aid_image_placing_area

0x806a,	// (0x0005e029) field_vitu_entry_pane_g1_ParamLimits

0x806a,	// (0x0005e029) field_vitu_entry_pane_g1

0x8076,	// (0x0005e035) field_vitu_entry_pane_g2_ParamLimits

0x8076,	// (0x0005e035) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00065808) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00065808) field_vitu_entry_pane_g

0x80cd,	// (0x0005e08c) cell_vitu_itu_pane_g1_ParamLimits

0x810f,	// (0x0005e0ce) cell_vitu_itu_pane_t3_ParamLimits

0x810f,	// (0x0005e0ce) cell_vitu_itu_pane_t3

0xcf27,	// (0x00062ee6) mp4_progress_pane_t1_ParamLimits

0xcf40,	// (0x00062eff) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0006589d) mp4_progress_pane_t_ParamLimits

0xcf59,	// (0x00062f18) mup_progress_pane_cp04_ParamLimits

0x9091,	// (0x0005f050) main_myfav_hc_pane_t5_ParamLimits

0x9091,	// (0x0005f050) main_myfav_hc_pane_t5

0xbd90,	// (0x00061d4f) aid_zoom_text_primary

0x3466,	// (0x00059425) popup_adpt_find_window_ParamLimits

0x1c99,	// (0x00057c58) main_cam_set_pane

0x8a76,	// (0x0005ea35) cam4_zoom_pane_ParamLimits

0x8a76,	// (0x0005ea35) cam4_zoom_pane

0x91c6,	// (0x0005f185) main_cam_set_pane_g1_ParamLimits

0x91c6,	// (0x0005f185) main_cam_set_pane_g1

0x91d4,	// (0x0005f193) main_cam_set_pane_g2_ParamLimits

0x91d4,	// (0x0005f193) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0006595e) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0006595e) main_cam_set_pane_g

0x91f5,	// (0x0005f1b4) main_cam_set_pane_t1_ParamLimits

0x91f5,	// (0x0005f1b4) main_cam_set_pane_t1

0x9210,	// (0x0005f1cf) main_cset_listscroll_pane_ParamLimits

0x9210,	// (0x0005f1cf) main_cset_listscroll_pane

0x9230,	// (0x0005f1ef) main_cset_slider_pane_ParamLimits

0x9230,	// (0x0005f1ef) main_cset_slider_pane

0xd218,	// (0x000631d7) main_cset_list_pane_ParamLimits

0xd218,	// (0x000631d7) main_cset_list_pane

0xd228,	// (0x000631e7) scroll_pane_cp028

0x9256,	// (0x0005f215) aid_area_touch_slider

0x9272,	// (0x0005f231) cset_slider_pane

0x929c,	// (0x0005f25b) main_cset_slider_pane_g1

0x92b1,	// (0x0005f270) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00065963) main_cset_slider_pane_g

0xd261,	// (0x00063220) main_cset_slider_pane_t1

0x936d,	// (0x0005f32c) main_cset_slider_pane_t2

0x9387,	// (0x0005f346) main_cset_slider_pane_t3

0x93a1,	// (0x0005f360) main_cset_slider_pane_t4

0x93bb,	// (0x0005f37a) main_cset_slider_pane_t5

0x93d7,	// (0x0005f396) main_cset_slider_pane_t6

0x93ec,	// (0x0005f3ab) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00065988) main_cset_slider_pane_t

0x94f0,	// (0x0005f4af) cset_list_set_pane_ParamLimits

0x94f0,	// (0x0005f4af) cset_list_set_pane

0x9504,	// (0x0005f4c3) aid_position_infowindow_above

0x950c,	// (0x0005f4cb) aid_position_infowindow_below

0x9514,	// (0x0005f4d3) cset_list_set_pane_g1_ParamLimits

0x9514,	// (0x0005f4d3) cset_list_set_pane_g1

0x9520,	// (0x0005f4df) cset_list_set_pane_g3_ParamLimits

0x9520,	// (0x0005f4df) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x000659a7) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x000659a7) cset_list_set_pane_g

0x952f,	// (0x0005f4ee) cset_list_set_pane_t1_ParamLimits

0x952f,	// (0x0005f4ee) cset_list_set_pane_t1

0x1c99,	// (0x00057c58) list_highlight_pane_cp021_ParamLimits

0x1c99,	// (0x00057c58) list_highlight_pane_cp021

0x09c2,	// (0x00056981) cset_slider_pane_g1

0x09d4,	// (0x00056993) cset_slider_pane_g2

0x09cb,	// (0x0005698a) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x000659ac) cset_slider_pane_g

0xeff6,	// (0x00064fb5) aid_area_touch_cam4_zoom

0xeffe,	// (0x00064fbd) cam4_zoom_cont_pane

0xf006,	// (0x00064fc5) cam4_zoom_pane_g1

0xf00e,	// (0x00064fcd) cam4_zoom_pane_g2

0x9544,	// (0x0005f503) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x000659b3) cam4_zoom_pane_g

0xf016,	// (0x00064fd5) cam4_zoom_cont_pane_g1

0xf01f,	// (0x00064fde) cam4_zoom_cont_pane_g2

0xf028,	// (0x00064fe7) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x000659ba) cam4_zoom_cont_pane_g

0x8932,	// (0x0005e8f1) call4_image_pane_ParamLimits

0x8932,	// (0x0005e8f1) call4_image_pane

0xcf8d,	// (0x00062f4c) call4_windows_conf_pane_ParamLimits

0xcfcc,	// (0x00062f8b) popup_call4_audio_in_window_ParamLimits

0xcfcc,	// (0x00062f8b) popup_call4_audio_in_window

0xbd72,	// (0x00061d31) bg_popup_call2_act_pane_cp02

0xd042,	// (0x00063001) call4_list_conf_pane

0x20e2,	// (0x000580a1) call4_image_pane_g1

0x20e2,	// (0x000580a1) call4_image_pane_g2

0x0001,

0xf70f,	// (0x000656ce) call4_image_pane_g

0xd301,	// (0x000632c0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd301,	// (0x000632c0) list_single_graphic_popup_conf4_pane

0xbd72,	// (0x00061d31) list_highlight_pane_cp022

0xd314,	// (0x000632d3) list_single_graphic_popup_conf4_pane_g1

0x06b3,	// (0x00056672) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x000659c1) list_single_graphic_popup_conf4_pane_g

0xd31c,	// (0x000632db) list_single_graphic_popup_conf4_pane_t1

0x427f,	// (0x0005a23e) popup_vtel_slider_window_ParamLimits

0x427f,	// (0x0005a23e) popup_vtel_slider_window

0xcf6f,	// (0x00062f2e) dialer2_ne_pane_t2_ParamLimits

0xcf6f,	// (0x00062f2e) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x000658a2) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x000658a2) dialer2_ne_pane_t

0x1ec5,	// (0x00057e84) bg_popup_sub_pane_cp010_ParamLimits

0x1ec5,	// (0x00057e84) bg_popup_sub_pane_cp010

0x954c,	// (0x0005f50b) popup_vtel_slider_window_g1_ParamLimits

0x954c,	// (0x0005f50b) popup_vtel_slider_window_g1

0x955f,	// (0x0005f51e) popup_vtel_slider_window_g2_ParamLimits

0x955f,	// (0x0005f51e) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x000659c6) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x000659c6) popup_vtel_slider_window_g

0x95b5,	// (0x0005f574) vtel_slider_pane_ParamLimits

0x95b5,	// (0x0005f574) vtel_slider_pane

0x95d7,	// (0x0005f596) vtel_slider_pane_g1_ParamLimits

0x95d7,	// (0x0005f596) vtel_slider_pane_g1

0x95eb,	// (0x0005f5aa) vtel_slider_pane_g2_ParamLimits

0x95eb,	// (0x0005f5aa) vtel_slider_pane_g2

0x9603,	// (0x0005f5c2) vtel_slider_pane_g3_ParamLimits

0x9603,	// (0x0005f5c2) vtel_slider_pane_g3

0x95d7,	// (0x0005f596) vtel_slider_pane_g4_ParamLimits

0x95d7,	// (0x0005f596) vtel_slider_pane_g4

0x9619,	// (0x0005f5d8) vtel_slider_pane_g5_ParamLimits

0x9619,	// (0x0005f5d8) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x000659cf) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x000659cf) vtel_slider_pane_g

0xbd72,	// (0x00061d31) main_gallery2_pane

0x8cf6,	// (0x0005ecb5) aid_size_row_itut2_dropdow_list_ParamLimits

0x8cf6,	// (0x0005ecb5) aid_size_row_itut2_dropdow_list

0x8d82,	// (0x0005ed41) grid_vitu2_function_top_pane_ParamLimits

0x8d82,	// (0x0005ed41) grid_vitu2_function_top_pane

0x8de7,	// (0x0005eda6) popup_vitu2_dropdown_list_window_ParamLimits

0x8de7,	// (0x0005eda6) popup_vitu2_dropdown_list_window

0x8e10,	// (0x0005edcf) popup_vitu2_match_list_window

0x962f,	// (0x0005f5ee) cell_vitu2_function_top_pane_ParamLimits

0x962f,	// (0x0005f5ee) cell_vitu2_function_top_pane

0x964d,	// (0x0005f60c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x964d,	// (0x0005f60c) cell_vitu2_function_top_pane_cp01

0x966b,	// (0x0005f62a) cell_vitu2_function_top_wide_pane_ParamLimits

0x966b,	// (0x0005f62a) cell_vitu2_function_top_wide_pane

0xefe8,	// (0x00064fa7) bg_button_pane_cp012

0x9689,	// (0x0005f648) cell_vitu2_function_top_pane_g1

0xf031,	// (0x00064ff0) bg_button_pane_cp013_ParamLimits

0xf031,	// (0x00064ff0) bg_button_pane_cp013

0x969d,	// (0x0005f65c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x969d,	// (0x0005f65c) cell_vitu2_function_top_wide_pane_g1

0xefe8,	// (0x00064fa7) bg_popup_sub_pane_cp20

0x96b5,	// (0x0005f674) list_vitu2_match_list_pane

0xd10e,	// (0x000630cd) bg_popup_sub_pane_cp20_g1

0xd116,	// (0x000630d5) bg_popup_sub_pane_cp20_g2

0xca89,	// (0x00062a48) bg_popup_sub_pane_cp20_g3

0xd11e,	// (0x000630dd) bg_popup_sub_pane_cp20_g4

0xca69,	// (0x00062a28) bg_popup_sub_pane_cp20_g5

0xd338,	// (0x000632f7) bg_popup_sub_pane_cp20_g6

0xd12e,	// (0x000630ed) bg_popup_sub_pane_cp20_g7

0xd136,	// (0x000630f5) bg_popup_sub_pane_cp20_g8

0xd13e,	// (0x000630fd) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x000659da) bg_popup_sub_pane_cp20_g

0xf04d,	// (0x0006500c) list_vitu2_match_list_item_pane_ParamLimits

0xf04d,	// (0x0006500c) list_vitu2_match_list_item_pane

0xf05f,	// (0x0006501e) list_vitu2_match_list_item_pane_t1

0xc55d,	// (0x0006251c) bg_popup_sub_pane_cp21

0xf06d,	// (0x0006502c) grid_vitu2_dropdown_list_pane

0x9704,	// (0x0005f6c3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9704,	// (0x0005f6c3) cell_vitu2_dropdown_list_char_pane

0x9725,	// (0x0005f6e4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9725,	// (0x0005f6e4) cell_vitu2_dropdown_list_ctrl_pane

0xd358,	// (0x00063317) cell_vitu2_dropdown_list_char_pane_g1

0xd361,	// (0x00063320) cell_vitu2_dropdown_list_char_pane_g2

0xd36a,	// (0x00063329) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x000659f7) cell_vitu2_dropdown_list_char_pane_g

0x9751,	// (0x0005f710) cell_vitu2_dropdown_list_char_pane_t1

0x975f,	// (0x0005f71e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x975f,	// (0x0005f71e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x976f,	// (0x0005f72e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x976f,	// (0x0005f72e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9780,	// (0x0005f73f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9780,	// (0x0005f73f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9790,	// (0x0005f74f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9790,	// (0x0005f74f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xef6b,	// (0x00064f2a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xef6b,	// (0x00064f2a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x000659fe) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x000659fe) cell_vitu2_dropdown_list_ctrl_pane_g

0x97ac,	// (0x0005f76b) aid_size_cell_gallery2_ParamLimits

0x97ac,	// (0x0005f76b) aid_size_cell_gallery2

0x97c2,	// (0x0005f781) grid_gallery2_pane_ParamLimits

0x97c2,	// (0x0005f781) grid_gallery2_pane

0x97d6,	// (0x0005f795) scroll_pane_cp029_ParamLimits

0x97d6,	// (0x0005f795) scroll_pane_cp029

0x97e2,	// (0x0005f7a1) cell_gallery2_pane_ParamLimits

0x97e2,	// (0x0005f7a1) cell_gallery2_pane

0xd373,	// (0x00063332) cell_gallery2_pane_g2

0x9818,	// (0x0005f7d7) cell_gallery2_pane_g3

0xd37d,	// (0x0006333c) cell_gallery2_pane_g4

0xd385,	// (0x00063344) cell_gallery2_pane_g5

0x088c,	// (0x0005684b) grid_highlight_pane_cp10

0x8e10,	// (0x0005edcf) popup_vitu2_match_list_window_ParamLimits

0x8e25,	// (0x0005ede4) popup_vitu2_query_window_ParamLimits

0x8e25,	// (0x0005ede4) popup_vitu2_query_window

0xc55d,	// (0x0006251c) bg_vitu2_candi_button_pane

0xd358,	// (0x00063317) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd361,	// (0x00063320) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd36a,	// (0x00063329) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9820,	// (0x0005f7df) bg_button_pane_cp015

0x982a,	// (0x0005f7e9) bg_button_pane_cp016

0x9834,	// (0x0005f7f3) bg_button_pane_cp017

0x1c99,	// (0x00057c58) bg_popup_sub_pane_cp22

0xd38d,	// (0x0006334c) popup_vitu2_query_window_g1

0x985c,	// (0x0005f81b) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00065a09) popup_vitu2_query_window_g

0x986a,	// (0x0005f829) popup_vitu2_query_window_t1_ParamLimits

0x986a,	// (0x0005f829) popup_vitu2_query_window_t1

0x9892,	// (0x0005f851) popup_vitu2_query_window_t2_ParamLimits

0x9892,	// (0x0005f851) popup_vitu2_query_window_t2

0x98a4,	// (0x0005f863) popup_vitu2_query_window_t3_ParamLimits

0x98a4,	// (0x0005f863) popup_vitu2_query_window_t3

0x98cc,	// (0x0005f88b) popup_vitu2_query_window_t4_ParamLimits

0x98cc,	// (0x0005f88b) popup_vitu2_query_window_t4

0x98e0,	// (0x0005f89f) popup_vitu2_query_window_t5_ParamLimits

0x98e0,	// (0x0005f89f) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00065a0e) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00065a0e) popup_vitu2_query_window_t

0xd210,	// (0x000631cf) main_cset_text_pane

0x9256,	// (0x0005f215) aid_area_touch_slider_ParamLimits

0x9272,	// (0x0005f231) cset_slider_pane_ParamLimits

0x929c,	// (0x0005f25b) main_cset_slider_pane_g1_ParamLimits

0x92b1,	// (0x0005f270) main_cset_slider_pane_g2_ParamLimits

0xd231,	// (0x000631f0) main_cset_slider_pane_g3_ParamLimits

0xd231,	// (0x000631f0) main_cset_slider_pane_g3

0x92c6,	// (0x0005f285) main_cset_slider_pane_g4_ParamLimits

0x92c6,	// (0x0005f285) main_cset_slider_pane_g4

0x92d5,	// (0x0005f294) main_cset_slider_pane_g5_ParamLimits

0x92d5,	// (0x0005f294) main_cset_slider_pane_g5

0x92e1,	// (0x0005f2a0) main_cset_slider_pane_g6_ParamLimits

0x92e1,	// (0x0005f2a0) main_cset_slider_pane_g6

0xf9a4,	// (0x00065963) main_cset_slider_pane_g_ParamLimits

0xd261,	// (0x00063220) main_cset_slider_pane_t1_ParamLimits

0x936d,	// (0x0005f32c) main_cset_slider_pane_t2_ParamLimits

0x9387,	// (0x0005f346) main_cset_slider_pane_t3_ParamLimits

0x93a1,	// (0x0005f360) main_cset_slider_pane_t4_ParamLimits

0x93bb,	// (0x0005f37a) main_cset_slider_pane_t5_ParamLimits

0x93d7,	// (0x0005f396) main_cset_slider_pane_t6_ParamLimits

0x93ec,	// (0x0005f3ab) main_cset_slider_pane_t7_ParamLimits

0x9416,	// (0x0005f3d5) main_cset_slider_pane_t8_ParamLimits

0x9416,	// (0x0005f3d5) main_cset_slider_pane_t8

0x943e,	// (0x0005f3fd) main_cset_slider_pane_t9_ParamLimits

0x943e,	// (0x0005f3fd) main_cset_slider_pane_t9

0x9466,	// (0x0005f425) main_cset_slider_pane_t10_ParamLimits

0x9466,	// (0x0005f425) main_cset_slider_pane_t10

0x948e,	// (0x0005f44d) main_cset_slider_pane_t11_ParamLimits

0x948e,	// (0x0005f44d) main_cset_slider_pane_t11

0x94b6,	// (0x0005f475) main_cset_slider_pane_t12_ParamLimits

0x94b6,	// (0x0005f475) main_cset_slider_pane_t12

0x94d3,	// (0x0005f492) main_cset_slider_pane_t13_ParamLimits

0x94d3,	// (0x0005f492) main_cset_slider_pane_t13

0xf9c9,	// (0x00065988) main_cset_slider_pane_t_ParamLimits

0xbd72,	// (0x00061d31) bg_popup_sub_pane_cp011

0xd399,	// (0x00063358) main_cset_text_pane_g1

0xd3a1,	// (0x00063360) main_cset_text_pane_t1

0xd3af,	// (0x0006336e) main_cset_text_pane_t2

0xd3bd,	// (0x0006337c) main_cset_text_pane_t3

0xd3cb,	// (0x0006338a) main_cset_text_pane_t4

0xd3d9,	// (0x00063398) main_cset_text_pane_t5

0xd3e7,	// (0x000633a6) main_cset_text_pane_t6

0xd3f5,	// (0x000633b4) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00065a19) main_cset_text_pane_t

0xbd72,	// (0x00061d31) main_cam4_burst_pane

0xbd72,	// (0x00061d31) main_cam5_pane

0x9195,	// (0x0005f154) bg_button_pane_cp019

0x919e,	// (0x0005f15d) bg_button_pane_cp020

0xd23d,	// (0x000631fc) main_cset_slider_pane_g7_ParamLimits

0xd23d,	// (0x000631fc) main_cset_slider_pane_g7

0xd249,	// (0x00063208) main_cset_slider_pane_g8_ParamLimits

0xd249,	// (0x00063208) main_cset_slider_pane_g8

0x92f5,	// (0x0005f2b4) main_cset_slider_pane_g9_ParamLimits

0x92f5,	// (0x0005f2b4) main_cset_slider_pane_g9

0x9301,	// (0x0005f2c0) main_cset_slider_pane_g10_ParamLimits

0x9301,	// (0x0005f2c0) main_cset_slider_pane_g10

0x930d,	// (0x0005f2cc) main_cset_slider_pane_g11_ParamLimits

0x930d,	// (0x0005f2cc) main_cset_slider_pane_g11

0x9319,	// (0x0005f2d8) main_cset_slider_pane_g12_ParamLimits

0x9319,	// (0x0005f2d8) main_cset_slider_pane_g12

0x9325,	// (0x0005f2e4) main_cset_slider_pane_g13_ParamLimits

0x9325,	// (0x0005f2e4) main_cset_slider_pane_g13

0x9331,	// (0x0005f2f0) main_cset_slider_pane_g14_ParamLimits

0x9331,	// (0x0005f2f0) main_cset_slider_pane_g14

0x933d,	// (0x0005f2fc) main_cset_slider_pane_g15_ParamLimits

0x933d,	// (0x0005f2fc) main_cset_slider_pane_g15

0xd28f,	// (0x0006324e) main_cset_slider_pane_t14_ParamLimits

0xd28f,	// (0x0006324e) main_cset_slider_pane_t14

0xd2c8,	// (0x00063287) main_cset_slider_pane_t15_ParamLimits

0xd2c8,	// (0x00063287) main_cset_slider_pane_t15

0x98f4,	// (0x0005f8b3) aid_cam4_burst_size_cell_ParamLimits

0x98f4,	// (0x0005f8b3) aid_cam4_burst_size_cell

0x9914,	// (0x0005f8d3) grid_cam4_burst_pane_ParamLimits

0x9914,	// (0x0005f8d3) grid_cam4_burst_pane

0x994c,	// (0x0005f90b) linegrid_cam4_burst_pane_ParamLimits

0x994c,	// (0x0005f90b) linegrid_cam4_burst_pane

0x010a,	// (0x000560c9) scroll_pane_cp30_ParamLimits

0x010a,	// (0x000560c9) scroll_pane_cp30

0x9972,	// (0x0005f931) cell_cam4_burst_pane_ParamLimits

0x9972,	// (0x0005f931) cell_cam4_burst_pane

0xd403,	// (0x000633c2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd403,	// (0x000633c2) linegrid_cam4_burst_pane_g1

0x99bf,	// (0x0005f97e) linegrid_cam4_burst_pane_g2_ParamLimits

0x99bf,	// (0x0005f97e) linegrid_cam4_burst_pane_g2

0xd410,	// (0x000633cf) linegrid_cam4_burst_pane_g3_ParamLimits

0xd410,	// (0x000633cf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00065a28) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00065a28) linegrid_cam4_burst_pane_g

0x99d0,	// (0x0005f98f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x99d0,	// (0x0005f98f) linegrid_cam4_burst_pane_g3_copy1

0xd41d,	// (0x000633dc) linegrid_cam4_burst_pane_g4_ParamLimits

0xd41d,	// (0x000633dc) linegrid_cam4_burst_pane_g4

0x99ea,	// (0x0005f9a9) linegrid_cam4_burst_pane_g5_ParamLimits

0x99ea,	// (0x0005f9a9) linegrid_cam4_burst_pane_g5

0x99fb,	// (0x0005f9ba) linegrid_cam4_burst_pane_g6_ParamLimits

0x99fb,	// (0x0005f9ba) linegrid_cam4_burst_pane_g6

0xd42a,	// (0x000633e9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd42a,	// (0x000633e9) linegrid_cam4_burst_pane_g7

0x9a12,	// (0x0005f9d1) cell_cam4_burst_pane_g1

0xd443,	// (0x00063402) main_cam5_pane_t1_ParamLimits

0xd443,	// (0x00063402) main_cam5_pane_t1

0xd455,	// (0x00063414) main_cam5_pane_t2_ParamLimits

0xd455,	// (0x00063414) main_cam5_pane_t2

0xd467,	// (0x00063426) main_cam5_pane_t3_ParamLimits

0xd467,	// (0x00063426) main_cam5_pane_t3

0xd479,	// (0x00063438) main_cam5_pane_t4_ParamLimits

0xd479,	// (0x00063438) main_cam5_pane_t4

0xd48f,	// (0x0006344e) main_cam5_pane_t5_ParamLimits

0xd48f,	// (0x0006344e) main_cam5_pane_t5

0xd4a1,	// (0x00063460) main_cam5_pane_t6_ParamLimits

0xd4a1,	// (0x00063460) main_cam5_pane_t6

0xd4b5,	// (0x00063474) main_cam5_pane_t7_ParamLimits

0xd4b5,	// (0x00063474) main_cam5_pane_t7

0xd4c7,	// (0x00063486) main_cam5_pane_t8_ParamLimits

0xd4c7,	// (0x00063486) main_cam5_pane_t8

0xd4e3,	// (0x000634a2) main_cam5_pane_t9_ParamLimits

0xd4e3,	// (0x000634a2) main_cam5_pane_t9

0xd4f5,	// (0x000634b4) main_cam5_pane_t10_ParamLimits

0xd4f5,	// (0x000634b4) main_cam5_pane_t10

0xd507,	// (0x000634c6) main_cam5_pane_t11_ParamLimits

0xd507,	// (0x000634c6) main_cam5_pane_t11

0xd519,	// (0x000634d8) main_cam5_pane_t12_ParamLimits

0xd519,	// (0x000634d8) main_cam5_pane_t12

0xd52e,	// (0x000634ed) main_cam5_pane_t13_ParamLimits

0xd52e,	// (0x000634ed) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00065a34) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00065a34) main_cam5_pane_t

0x34e9,	// (0x000594a8) popup_scut_keymap_window_ParamLimits

0x34e9,	// (0x000594a8) popup_scut_keymap_window

0x9a25,	// (0x0005f9e4) aid_size_cell_brow_shortcut

0x088c,	// (0x0005684b) bg_popup_window_pane_cp010

0x9a31,	// (0x0005f9f0) grid_scut_pane

0x9a3d,	// (0x0005f9fc) cell_scut_pane_ParamLimits

0x9a3d,	// (0x0005f9fc) cell_scut_pane

0x9a54,	// (0x0005fa13) cell_scut_pane_g1

0xd54b,	// (0x0006350a) cell_scut_pane_t1

0xd55a,	// (0x00063519) cell_scut_pane_t2

0x9a5d,	// (0x0005fa1c) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00065a4f) cell_scut_pane_t

0x72ec,	// (0x0005d2ab) main_mup3_pane_g8_ParamLimits

0x72ec,	// (0x0005d2ab) main_mup3_pane_g8

0x8d0e,	// (0x0005eccd) area_vitu2_query_pane_ParamLimits

0x8d0e,	// (0x0005eccd) area_vitu2_query_pane

0x983e,	// (0x0005f7fd) input_focus_pane_cp08

0xd569,	// (0x00063528) area_vitu2_query_pane_g1

0x9a6b,	// (0x0005fa2a) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00065a56) area_vitu2_query_pane_g

0x9a7c,	// (0x0005fa3b) area_vitu2_query_pane_t1_ParamLimits

0x9a7c,	// (0x0005fa3b) area_vitu2_query_pane_t1

0x9a90,	// (0x0005fa4f) area_vitu2_query_pane_t2_ParamLimits

0x9a90,	// (0x0005fa4f) area_vitu2_query_pane_t2

0x9aa4,	// (0x0005fa63) area_vitu2_query_pane_t3_ParamLimits

0x9aa4,	// (0x0005fa63) area_vitu2_query_pane_t3

0xd575,	// (0x00063534) area_vitu2_query_pane_t4_ParamLimits

0xd575,	// (0x00063534) area_vitu2_query_pane_t4

0xd59d,	// (0x0006355c) area_vitu2_query_pane_t5_ParamLimits

0xd59d,	// (0x0006355c) area_vitu2_query_pane_t5

0xd5c5,	// (0x00063584) area_vitu2_query_pane_t6_ParamLimits

0xd5c5,	// (0x00063584) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00065a5b) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00065a5b) area_vitu2_query_pane_t

0x9acc,	// (0x0005fa8b) bg_button_pane_cp018

0x9ada,	// (0x0005fa99) bg_button_pane_cp021

0x9ae6,	// (0x0005faa5) bg_button_pane_cp022

0x9af7,	// (0x0005fab6) input_focus_pane_cp09

0x51f5,	// (0x0005b1b4) aid_size_touch_mv_arrow_left

0x521e,	// (0x0005b1dd) aid_size_touch_mv_arrow_right

0x9355,	// (0x0005f314) main_cset_slider_pane_g16_ParamLimits

0x9355,	// (0x0005f314) main_cset_slider_pane_g16

0x9361,	// (0x0005f320) main_cset_slider_pane_g17_ParamLimits

0x9361,	// (0x0005f320) main_cset_slider_pane_g17

0x9a12,	// (0x0005f9d1) cell_cam4_burst_pane_g1_ParamLimits

0xbd72,	// (0x00061d31) compa_mode_pane

0x956f,	// (0x0005f52e) popup_vtel_slider_window_g3_ParamLimits

0x956f,	// (0x0005f52e) popup_vtel_slider_window_g3

0x9586,	// (0x0005f545) popup_vtel_slider_window_g4_ParamLimits

0x9586,	// (0x0005f545) popup_vtel_slider_window_g4

0x959d,	// (0x0005f55c) popup_vtel_slider_window_t1_ParamLimits

0x959d,	// (0x0005f55c) popup_vtel_slider_window_t1

0xbd72,	// (0x00061d31) main_cl_pane

0x1cc1,	// (0x00057c80) popup_imed_adjust2_window_ParamLimits

0x1c8b,	// (0x00057c4a) bg_tb_trans_pane_cp05_ParamLimits

0x7e33,	// (0x0005ddf2) popup_imed_adjust2_window_g1_ParamLimits

0x7e42,	// (0x0005de01) popup_imed_adjust2_window_g2_ParamLimits

0x7e42,	// (0x0005de01) popup_imed_adjust2_window_g2

0x7e4e,	// (0x0005de0d) popup_imed_adjust2_window_g3_ParamLimits

0x7e4e,	// (0x0005de0d) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x000657cc) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x000657cc) popup_imed_adjust2_window_g

0x7e5a,	// (0x0005de19) popup_imed_adjust2_window_t1_ParamLimits

0x7e72,	// (0x0005de31) slider_imed_adjust_pane_ParamLimits

0x7e86,	// (0x0005de45) slider_imed_adjust_pane_g1_ParamLimits

0x7e96,	// (0x0005de55) slider_imed_adjust_pane_g2_ParamLimits

0x7ea6,	// (0x0005de65) slider_imed_adjust_pane_g3_ParamLimits

0x7eb7,	// (0x0005de76) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x000657d3) slider_imed_adjust_pane_g_ParamLimits

0x8a17,	// (0x0005e9d6) aid_touch_area_cam4_ParamLimits

0x8a17,	// (0x0005e9d6) aid_touch_area_cam4

0xef5b,	// (0x00064f1a) battery_pane_cp01

0x8ae7,	// (0x0005eaa6) main_camera4_pane_g6_ParamLimits

0x8ae7,	// (0x0005eaa6) main_camera4_pane_g6

0x8b11,	// (0x0005ead0) main_camera4_pane_t2_ParamLimits

0x8b11,	// (0x0005ead0) main_camera4_pane_t2

0x0001,

0xf917,	// (0x000658d6) main_camera4_pane_t_ParamLimits

0xf917,	// (0x000658d6) main_camera4_pane_t

0x8b58,	// (0x0005eb17) aid_touch_area_vid4_ParamLimits

0x8b58,	// (0x0005eb17) aid_touch_area_vid4

0x8bbf,	// (0x0005eb7e) main_video4_pane_g5_ParamLimits

0x8bbf,	// (0x0005eb7e) main_video4_pane_g5

0x8bea,	// (0x0005eba9) vid4_progress_pane_ParamLimits

0x8bea,	// (0x0005eba9) vid4_progress_pane

0xd255,	// (0x00063214) main_cset_slider_pane_g18_ParamLimits

0xd255,	// (0x00063214) main_cset_slider_pane_g18

0xd437,	// (0x000633f6) cell_cam4_burst_pane_g2_ParamLimits

0xd437,	// (0x000633f6) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00065a2f) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00065a2f) cell_cam4_burst_pane_g

0xc581,	// (0x00062540) bg_cl_pane_ParamLimits

0xc581,	// (0x00062540) bg_cl_pane

0x9b08,	// (0x0005fac7) cl_header_pane_ParamLimits

0x9b08,	// (0x0005fac7) cl_header_pane

0x9b1c,	// (0x0005fadb) cl_listscroll_pane_ParamLimits

0x9b1c,	// (0x0005fadb) cl_listscroll_pane

0xd611,	// (0x000635d0) bg_cl_pane_g1

0xd619,	// (0x000635d8) bg_cl_pane_g2

0xd621,	// (0x000635e0) bg_cl_pane_g3

0xd629,	// (0x000635e8) bg_cl_pane_g4

0xd631,	// (0x000635f0) bg_cl_pane_g5

0xd639,	// (0x000635f8) bg_cl_pane_g6

0xd641,	// (0x00063600) bg_cl_pane_g7

0xd649,	// (0x00063608) bg_cl_pane_g8

0xd651,	// (0x00063610) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00065a6a) bg_cl_pane_g

0x9b2c,	// (0x0005faeb) aid_height_cl_leading_ParamLimits

0x9b2c,	// (0x0005faeb) aid_height_cl_leading

0x9b38,	// (0x0005faf7) aid_height_cl_text_ParamLimits

0x9b38,	// (0x0005faf7) aid_height_cl_text

0x1c99,	// (0x00057c58) bg_cl_header_pane_ParamLimits

0x1c99,	// (0x00057c58) bg_cl_header_pane

0x9b57,	// (0x0005fb16) cl_header_pane_g1_ParamLimits

0x9b57,	// (0x0005fb16) cl_header_pane_g1

0x9b6d,	// (0x0005fb2c) cl_header_pane_t1_ParamLimits

0x9b6d,	// (0x0005fb2c) cl_header_pane_t1

0xd659,	// (0x00063618) cl_list_pane

0xd228,	// (0x000631e7) hc_scroll_pane_cp01

0xca69,	// (0x00062a28) bg_cl_header_pane_g1

0xd10e,	// (0x000630cd) bg_cl_header_pane_g2

0xca89,	// (0x00062a48) bg_cl_header_pane_g3

0xd11e,	// (0x000630dd) bg_cl_header_pane_g4

0xd116,	// (0x000630d5) bg_cl_header_pane_g5

0xd338,	// (0x000632f7) bg_cl_header_pane_g6

0xd136,	// (0x000630f5) bg_cl_header_pane_g7

0xd13e,	// (0x000630fd) bg_cl_header_pane_g8

0xd12e,	// (0x000630ed) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00065a7d) bg_cl_header_pane_g

0x9b86,	// (0x0005fb45) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9b86,	// (0x0005fb45) hc_cl_list_double_graphic_heading_pane

0x9b9a,	// (0x0005fb59) hc_cl_list_single_graphic_pane_ParamLimits

0x9b9a,	// (0x0005fb59) hc_cl_list_single_graphic_pane

0x9bb4,	// (0x0005fb73) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9bb4,	// (0x0005fb73) hc_cl_list_single_graphic_pane_g1

0x9bc0,	// (0x0005fb7f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9bc0,	// (0x0005fb7f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00065a90) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00065a90) hc_cl_list_single_graphic_pane_g

0x9bd4,	// (0x0005fb93) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9bd4,	// (0x0005fb93) hc_cl_list_single_graphic_pane_t1

0x9bb4,	// (0x0005fb73) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9bb4,	// (0x0005fb73) hc_cl_list_double_graphic_heading_pane_g1

0x9be9,	// (0x0005fba8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9be9,	// (0x0005fba8) hc_cl_list_double_graphic_heading_pane_g2

0x9bfd,	// (0x0005fbbc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9bfd,	// (0x0005fbbc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00065a95) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00065a95) hc_cl_list_double_graphic_heading_pane_g

0x9c11,	// (0x0005fbd0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9c11,	// (0x0005fbd0) hc_cl_list_double_graphic_heading_pane_t1

0x9c26,	// (0x0005fbe5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9c26,	// (0x0005fbe5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00065a9c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00065a9c) hc_cl_list_double_graphic_heading_pane_t

0xf07d,	// (0x0006503c) vid4_progress_pane_g1

0xf08d,	// (0x0006504c) vid4_progress_pane_g2

0x0435,	// (0x000563f4) vid4_progress_pane_g3

0xef92,	// (0x00064f51) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00065aa1) vid4_progress_pane_g

0xf09d,	// (0x0006505c) vid4_progress_pane_t1

0xf0b2,	// (0x00065071) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00065aac) vid4_progress_pane_t

0xf0dd,	// (0x0006509c) wait_bar_pane_cp07

0x1ed3,	// (0x00057e92) blid_firmament_pane_ParamLimits

0x1f16,	// (0x00057ed5) popup_blid_sat_info2_window_g1

0x1f3a,	// (0x00057ef9) popup_blid_sat_info2_window_t3

0x1f48,	// (0x00057f07) popup_blid_sat_info2_window_t4

0x1f56,	// (0x00057f15) popup_blid_sat_info2_window_t5

0x1f64,	// (0x00057f23) popup_blid_sat_info2_window_t6

0x1f74,	// (0x00057f33) popup_blid_sat_info2_window_t7

0x1f82,	// (0x00057f41) popup_blid_sat_info2_window_t8

0x1f90,	// (0x00057f4f) popup_blid_sat_info2_window_t9

0x1f9e,	// (0x00057f5d) popup_blid_sat_info2_window_t10

0x2062,	// (0x00058021) aid_firma_cardinal_ParamLimits

0x2076,	// (0x00058035) blid_firmament_pane_t1_ParamLimits

0x208d,	// (0x0005804c) blid_firmament_pane_t2_ParamLimits

0x20a4,	// (0x00058063) blid_firmament_pane_t3_ParamLimits

0x20bb,	// (0x0005807a) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x000656c5) blid_firmament_pane_t_ParamLimits

0x20d2,	// (0x00058091) blid_sat_info_pane_ParamLimits

0x1c99,	// (0x00057c58) main_cam_set_pane_ParamLimits

0x7caa,	// (0x0005dc69) aid_size_cell_colour_35_ParamLimits

0x7cca,	// (0x0005dc89) aid_size_cell_colour_112_ParamLimits

0x7cea,	// (0x0005dca9) aid_size_cell_effect_ParamLimits

0x1c8b,	// (0x00057c4a) bg_tb_trans_pane_cp02_ParamLimits

0x03bc,	// (0x0005637b) heading_imed_pane_ParamLimits

0x7d0a,	// (0x0005dcc9) listscroll_imed_pane_ParamLimits

0x12bd,	// (0x0005727c) popup_call2_audio_first_window_g5_ParamLimits

0x12bd,	// (0x0005727c) popup_call2_audio_first_window_g5

0x86be,	// (0x0005e67d) aid_size_touch_image3_arrow_left_ParamLimits

0x86be,	// (0x0005e67d) aid_size_touch_image3_arrow_left

0x86ea,	// (0x0005e6a9) aid_size_touch_image3_arrow_right_ParamLimits

0x86ea,	// (0x0005e6a9) aid_size_touch_image3_arrow_right

0xf0c8,	// (0x00065087) vid4_progress_pane_t3

0x83d9,	// (0x0005e398) main_hwr_training_symbol_option_pane_ParamLimits

0x83d9,	// (0x0005e398) main_hwr_training_symbol_option_pane

0x83f9,	// (0x0005e3b8) popup_hwr_training_preview_window_ParamLimits

0x83f9,	// (0x0005e3b8) popup_hwr_training_preview_window

0x8446,	// (0x0005e405) hwr_training_navi_pane_g5_ParamLimits

0x8446,	// (0x0005e405) hwr_training_navi_pane_g5

0xd0fc,	// (0x000630bb) popup_char_count_window

0xefe8,	// (0x00064fa7) bg_popup_sub_pane_cp20_ParamLimits

0x96b5,	// (0x0005f674) list_vitu2_match_list_pane_ParamLimits

0x96c4,	// (0x0005f683) vitu2_page_scroll_pane_ParamLimits

0x96c4,	// (0x0005f683) vitu2_page_scroll_pane

0xd6bc,	// (0x0006367b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6bc,	// (0x0006367b) list_single_hwr_training_symbol_option_pane

0xd6cf,	// (0x0006368e) list_single_hwr_training_symbol_option_pane_g1

0xd6d7,	// (0x00063696) list_single_hwr_training_symbol_option_pane_t1

0xd6e5,	// (0x000636a4) bg_button_pane_cp023

0xd6ee,	// (0x000636ad) bg_button_pane_cp024

0x9c3b,	// (0x0005fbfa) vitu2_page_scroll_pane_g1

0x9c43,	// (0x0005fc02) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00065ab3) vitu2_page_scroll_pane_g

0x9c4b,	// (0x0005fc0a) vitu2_page_scroll_pane_t1

0x1e33,	// (0x00057df2) popup_char_count_window_g1

0xd721,	// (0x000636e0) popup_char_count_window_g2

0xd72a,	// (0x000636e9) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00065ab8) popup_char_count_window_g

0xd733,	// (0x000636f2) popup_char_count_window_t1

0xbd72,	// (0x00061d31) main_vded2_pane

0x7e1f,	// (0x0005ddde) aid_size_cell_imed_line

0x7e29,	// (0x0005dde8) grid_imed_line_width_pane

0x8c5a,	// (0x0005ec19) vid4_indicators_pane_g4

0xd741,	// (0x00063700) cell_imed_line_width_pane_ParamLimits

0xd741,	// (0x00063700) cell_imed_line_width_pane

0xd755,	// (0x00063714) cell_imed_line_width_pane_g1

0x239f,	// (0x0005835e) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00065abf) cell_imed_line_width_pane_g

0x9c5a,	// (0x0005fc19) main_vded2_pane_g1_ParamLimits

0x9c5a,	// (0x0005fc19) main_vded2_pane_g1

0x9c70,	// (0x0005fc2f) main_vded2_pane_g2_ParamLimits

0x9c70,	// (0x0005fc2f) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00065ac4) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00065ac4) main_vded2_pane_g

0x9c82,	// (0x0005fc41) vded2_slider_pane_ParamLimits

0x9c82,	// (0x0005fc41) vded2_slider_pane

0x9c92,	// (0x0005fc51) aid_size_touch_vded2_end

0x9c9c,	// (0x0005fc5b) aid_size_touch_vded2_playhead

0xd75e,	// (0x0006371d) aid_size_touch_vded2_start

0xd766,	// (0x00063725) vded2_slider_bg_pane

0xd76f,	// (0x0006372e) vded2_slider_pane_g1

0xd778,	// (0x00063737) vded2_slider_pane_g2

0x9ca6,	// (0x0005fc65) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00065ac9) vded2_slider_pane_g

0xd780,	// (0x0006373f) vded2_slider_bg_pane_g1

0xd789,	// (0x00063748) vded2_slider_bg_pane_g2

0xd792,	// (0x00063751) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00065ad0) vded2_slider_bg_pane_g

0x589f,	// (0x0005b85e) aid_postcard_touch_down_pane_ParamLimits

0x589f,	// (0x0005b85e) aid_postcard_touch_down_pane

0x58b5,	// (0x0005b874) aid_postcard_touch_up_pane_ParamLimits

0x58b5,	// (0x0005b874) aid_postcard_touch_up_pane

0xbd72,	// (0x00061d31) main_blid2_pane

0x1ca7,	// (0x00057c66) popup_blid2_search_window

0xbd72,	// (0x00061d31) blid2_gps_pane

0xbd72,	// (0x00061d31) blid2_navig_pane

0xbd72,	// (0x00061d31) blid2_search_pane

0xbd72,	// (0x00061d31) blid2_tripm_pane

0x9cb1,	// (0x0005fc70) blid2_search_pane_g1_ParamLimits

0x9cb1,	// (0x0005fc70) blid2_search_pane_g1

0x9cc9,	// (0x0005fc88) blid2_search_pane_t1_ParamLimits

0x9cc9,	// (0x0005fc88) blid2_search_pane_t1

0x9cdb,	// (0x0005fc9a) aid_size_cell_blid2_gps_ParamLimits

0x9cdb,	// (0x0005fc9a) aid_size_cell_blid2_gps

0x9cf3,	// (0x0005fcb2) blid2_gps_pane_g1_ParamLimits

0x9cf3,	// (0x0005fcb2) blid2_gps_pane_g1

0x9d07,	// (0x0005fcc6) grid_blid2_satellite_pane_ParamLimits

0x9d07,	// (0x0005fcc6) grid_blid2_satellite_pane

0x9d21,	// (0x0005fce0) blid2_navig_pane_g1_ParamLimits

0x9d21,	// (0x0005fce0) blid2_navig_pane_g1

0x9d2d,	// (0x0005fcec) blid2_navig_pane_t1_ParamLimits

0x9d2d,	// (0x0005fcec) blid2_navig_pane_t1

0x9d48,	// (0x0005fd07) blid2_navig_pane_t2_ParamLimits

0x9d48,	// (0x0005fd07) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00065ad7) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00065ad7) blid2_navig_pane_t

0x9d63,	// (0x0005fd22) blid2_navig_ring_pane_ParamLimits

0x9d63,	// (0x0005fd22) blid2_navig_ring_pane

0x9d7c,	// (0x0005fd3b) blid2_speed_pane_ParamLimits

0x9d7c,	// (0x0005fd3b) blid2_speed_pane

0x9d88,	// (0x0005fd47) blid2_tripm_pane_g1_ParamLimits

0x9d88,	// (0x0005fd47) blid2_tripm_pane_g1

0x9da3,	// (0x0005fd62) blid2_tripm_pane_g2_ParamLimits

0x9da3,	// (0x0005fd62) blid2_tripm_pane_g2

0x9db7,	// (0x0005fd76) blid2_tripm_pane_g3_ParamLimits

0x9db7,	// (0x0005fd76) blid2_tripm_pane_g3

0x9dcb,	// (0x0005fd8a) blid2_tripm_pane_g4_ParamLimits

0x9dcb,	// (0x0005fd8a) blid2_tripm_pane_g4

0x9ddf,	// (0x0005fd9e) blid2_tripm_pane_g5_ParamLimits

0x9ddf,	// (0x0005fd9e) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00065adc) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00065adc) blid2_tripm_pane_g

0x9e05,	// (0x0005fdc4) blid2_tripm_pane_t1_ParamLimits

0x9e05,	// (0x0005fdc4) blid2_tripm_pane_t1

0x9e20,	// (0x0005fddf) blid2_tripm_pane_t2_ParamLimits

0x9e20,	// (0x0005fddf) blid2_tripm_pane_t2

0x9e3b,	// (0x0005fdfa) blid2_tripm_pane_t3_ParamLimits

0x9e3b,	// (0x0005fdfa) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00065ae9) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00065ae9) blid2_tripm_pane_t

0x9e82,	// (0x0005fe41) cell_blid2_satellite_pane_ParamLimits

0x9e82,	// (0x0005fe41) cell_blid2_satellite_pane

0x9ea0,	// (0x0005fe5f) cell_blid2_satellite_pane_g1

0xd79b,	// (0x0006375a) cell_blid2_satellite_pane_t1

0x20e2,	// (0x000580a1) blid2_speed_pane_g1

0xd7a9,	// (0x00063768) blid2_speed_pane_t1

0xd7b7,	// (0x00063776) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00065af2) blid2_speed_pane_t

0x20e2,	// (0x000580a1) blid2_navig_ring_pane_g1

0x9ea9,	// (0x0005fe68) blid2_navig_ring_pane_g2

0x9eb1,	// (0x0005fe70) blid2_navig_ring_pane_g3

0x9eb9,	// (0x0005fe78) blid2_navig_ring_pane_g4

0x9ec1,	// (0x0005fe80) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00065af7) blid2_navig_ring_pane_g

0xbd72,	// (0x00061d31) bg_popup_window_pane_cp011

0xd7c5,	// (0x00063784) popup_blid2_search_window_g1

0xd7cd,	// (0x0006378c) popup_blid2_search_window_t1

0xd7db,	// (0x0006379a) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00065b02) popup_blid2_search_window_t

0xc978,	// (0x00062937) main_browser_pane_g1

0xc581,	// (0x00062540) main_browser_pane_ParamLimits

0xefe8,	// (0x00064fa7) bg_button_pane_cp011_ParamLimits

0x8f31,	// (0x0005eef0) cell_vitu2_function_pane_g1_ParamLimits

0x1c99,	// (0x00057c58) bg_popup_sub_pane_cp22_ParamLimits

0x983e,	// (0x0005f7fd) input_focus_pane_cp08_ParamLimits

0x984b,	// (0x0005f80a) popup_vitu2_query_button_pane_ParamLimits

0x984b,	// (0x0005f80a) popup_vitu2_query_button_pane

0x9820,	// (0x0005f7df) popup_vitu2_query_input_button_pane

0xd38d,	// (0x0006334c) popup_vitu2_query_window_g1_ParamLimits

0x985c,	// (0x0005f81b) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00065a09) popup_vitu2_query_window_g_ParamLimits

0xbd72,	// (0x00061d31) bg_button_pane_cp026

0x9ec9,	// (0x0005fe88) popup_vitu2_query_input_button_pane_g1

0xbd72,	// (0x00061d31) bg_button_pane_cp025

0xd7e9,	// (0x000637a8) popup_vitu2_query_button_pane_t1

0x6f79,	// (0x0005cf38) main_mp3_pane_t6

0x6f8f,	// (0x0005cf4e) popup_slider_window_cp01

0xef79,	// (0x00064f38) cam4_battery_pane

0xefe0,	// (0x00064f9f) cam4_battery_pane_cp02

0xf075,	// (0x00065034) cam4_battery_pane_cp01

0xf075,	// (0x00065034) cam4_battery_pane_cp03

0xcf65,	// (0x00062f24) cam4_battery_pane_g1

0x20e2,	// (0x000580a1) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00065b07) cam4_battery_pane_g

0x1fac,	// (0x00057f6b) popup_blid_sat_info2_window_t11

0x51f5,	// (0x0005b1b4) aid_size_touch_mv_arrow_left_ParamLimits

0x521e,	// (0x0005b1dd) aid_size_touch_mv_arrow_right_ParamLimits

0x07ec,	// (0x000567ab) navi_pane_g1_ParamLimits

0x5247,	// (0x0005b206) navi_pane_g2_ParamLimits

0x5275,	// (0x0005b234) navi_pane_g3_ParamLimits

0xf418,	// (0x000653d7) navi_pane_g_ParamLimits

0x52cd,	// (0x0005b28c) navi_pane_mv_t1_ParamLimits

0x7d47,	// (0x0005dd06) grid_imed_effect_pane_ParamLimits

0xc8c1,	// (0x00062880) aid_placing_vt_slider_lsc

0xc8c9,	// (0x00062888) aid_placing_vt_slider_prt

0x1c99,	// (0x00057c58) bg_tb_trans_pane_cp01_ParamLimits

0x2269,	// (0x00058228) popup_image_details_window_g1_ParamLimits

0x227c,	// (0x0005823b) popup_image_details_window_g2_ParamLimits

0x2291,	// (0x00058250) popup_image_details_window_g3_ParamLimits

0x2291,	// (0x00058250) popup_image_details_window_g3

0xf74b,	// (0x0006570a) popup_image_details_window_g_ParamLimits

0x22a5,	// (0x00058264) popup_image_details_window_t1_ParamLimits

0x22b7,	// (0x00058276) popup_image_details_window_t2_ParamLimits

0x22d0,	// (0x0005828f) popup_image_details_window_t3_ParamLimits

0x22e4,	// (0x000582a3) popup_image_details_window_t4_ParamLimits

0x22ff,	// (0x000582be) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00065711) popup_image_details_window_t_ParamLimits

0x9b44,	// (0x0005fb03) cl_header_name_pane_ParamLimits

0x9b44,	// (0x0005fb03) cl_header_name_pane

0x9ed1,	// (0x0005fe90) cl_header_name_pane_t1_ParamLimits

0x9ed1,	// (0x0005fe90) cl_header_name_pane_t1

0x9ef2,	// (0x0005feb1) cl_header_name_pane_t2_ParamLimits

0x9ef2,	// (0x0005feb1) cl_header_name_pane_t2

0x9f34,	// (0x0005fef3) cl_header_name_pane_t3_ParamLimits

0x9f34,	// (0x0005fef3) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x00065b0c) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x00065b0c) cl_header_name_pane_t

0x529e,	// (0x0005b25d) navi_pane_mv_g2_ParamLimits

0xd087,	// (0x00063046) field_vitu2_entry_pane_g1_ParamLimits

0xd093,	// (0x00063052) field_vitu2_entry_pane_g2_ParamLimits

0xd09f,	// (0x0006305e) field_vitu2_entry_pane_g3_ParamLimits

0xd09f,	// (0x0006305e) field_vitu2_entry_pane_g3

0xf949,	// (0x00065908) field_vitu2_entry_pane_g_ParamLimits

0x8ead,	// (0x0005ee6c) cell_vitu2_itu_pane_g1_ParamLimits

0x8ebd,	// (0x0005ee7c) cell_vitu2_itu_pane_g2_ParamLimits

0x8ebd,	// (0x0005ee7c) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00065914) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00065914) cell_vitu2_itu_pane_g

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp05_ParamLimits

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp05

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp03

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp04

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp10_ParamLimits

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp10

0x9ae6,	// (0x0005faa5) bg_vkb2_func_pane_cp08

0x9acc,	// (0x0005fa8b) bg_vkb2_func_pane_cp06

0x9ada,	// (0x0005fa99) bg_vkb2_func_pane_cp07

0xd6f7,	// (0x000636b6) bg_vkb2_func_pane_cp11_ParamLimits

0xd6f7,	// (0x000636b6) bg_vkb2_func_pane_cp11

0xd70c,	// (0x000636cb) bg_vkb2_func_pane_cp12_ParamLimits

0xd70c,	// (0x000636cb) bg_vkb2_func_pane_cp12

0xbd72,	// (0x00061d31) bg_vkb2_func_pane_cp09

0xd10e,	// (0x000630cd) bg_vkb2_func_pane_g1

0xca89,	// (0x00062a48) bg_vkb2_func_pane_g2

0xd116,	// (0x000630d5) bg_vkb2_func_pane_g3

0xd11e,	// (0x000630dd) bg_vkb2_func_pane_g4

0xd338,	// (0x000632f7) bg_vkb2_func_pane_g5

0xd136,	// (0x000630f5) bg_vkb2_func_pane_g6

0xd13e,	// (0x000630fd) bg_vkb2_func_pane_g7

0xd12e,	// (0x000630ed) bg_vkb2_func_pane_g8

0xca69,	// (0x00062a28) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00065b13) bg_vkb2_func_pane_g

0x9df3,	// (0x0005fdb2) blid2_tripm_pane_g6_ParamLimits

0x9df3,	// (0x0005fdb2) blid2_tripm_pane_g6

0xcf1f,	// (0x00062ede) mp4_progress_pane_g1

0x9e6e,	// (0x0005fe2d) blid2_tripm_values_pane_ParamLimits

0x9e6e,	// (0x0005fe2d) blid2_tripm_values_pane

0x9f65,	// (0x0005ff24) blid2_tripm_values_pane_t1

0x9f73,	// (0x0005ff32) blid2_tripm_values_pane_t2

0x9f81,	// (0x0005ff40) blid2_tripm_values_pane_t3

0x9f8f,	// (0x0005ff4e) blid2_tripm_values_pane_t4

0x9f9d,	// (0x0005ff5c) blid2_tripm_values_pane_t5

0x9fab,	// (0x0005ff6a) blid2_tripm_values_pane_t6

0x9fb9,	// (0x0005ff78) blid2_tripm_values_pane_t7

0x9fc7,	// (0x0005ff86) blid2_tripm_values_pane_t8

0x9fd5,	// (0x0005ff94) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00065b26) blid2_tripm_values_pane_t

0x41f7,	// (0x0005a1b6) call_video_pane_t1_ParamLimits

0x4209,	// (0x0005a1c8) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00065260) call_video_pane_t_ParamLimits

0x57a2,	// (0x0005b761) msg_header_pane_g1_ParamLimits

0x0a07,	// (0x000569c6) msg_header_pane_g2_ParamLimits

0x0a07,	// (0x000569c6) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0006547a) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0006547a) msg_header_pane_g

0xc581,	// (0x00062540) main_clock2_pane_ParamLimits

0x7a06,	// (0x0005d9c5) grid_clock2_toolbar_pane_ParamLimits

0x7a06,	// (0x0005d9c5) grid_clock2_toolbar_pane

0x7a06,	// (0x0005d9c5) listscroll_clock2_pane_ParamLimits

0x7a06,	// (0x0005d9c5) listscroll_clock2_pane

0x7ae3,	// (0x0005daa2) main_clock2_pane_t3_ParamLimits

0x7ae3,	// (0x0005daa2) main_clock2_pane_t3

0x7afe,	// (0x0005dabd) main_clock2_pane_t4_ParamLimits

0x7afe,	// (0x0005dabd) main_clock2_pane_t4

0xd7f7,	// (0x000637b6) cell_clock2_toolbar_pane

0xd7ff,	// (0x000637be) cell_clock2_toolbar_pane_cp01

0xd7ff,	// (0x000637be) cell_clock2_toolbar_pane_cp02

0xd807,	// (0x000637c6) cell_clock2_toolbar_pane_cp03

0xd80f,	// (0x000637ce) list_clock2_pane

0x073f,	// (0x000566fe) scroll_pane_cp10

0xd817,	// (0x000637d6) list_single_clock2_pane_ParamLimits

0xd817,	// (0x000637d6) list_single_clock2_pane

0x088c,	// (0x0005684b) list_highlight_pane_cp08

0xd824,	// (0x000637e3) list_single_clock2_pane_t1

0xd832,	// (0x000637f1) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x00065b39) list_single_clock2_pane_t

0xbd72,	// (0x00061d31) bg_button_pane_cp10

0xd840,	// (0x000637ff) cell_clock2_toolbar_pane_g1

0x582b,	// (0x0005b7ea) aid_main_viewer_pane_g1_ParamLimits

0x582b,	// (0x0005b7ea) aid_main_viewer_pane_g1

0x5839,	// (0x0005b7f8) aid_main_viewer_pane_g2_ParamLimits

0x5839,	// (0x0005b7f8) aid_main_viewer_pane_g2

0x5847,	// (0x0005b806) aid_main_viewer_pane_g3_ParamLimits

0x5847,	// (0x0005b806) aid_main_viewer_pane_g3

0x5856,	// (0x0005b815) aid_main_viewer_pane_g4_ParamLimits

0x5856,	// (0x0005b815) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0006548b) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0006548b) aid_main_viewer_pane_g

0x616a,	// (0x0005c129) main_calc_pane_ParamLimits

0x617e,	// (0x0005c13d) main_dialer2_pane_ParamLimits

0xbd72,	// (0x00061d31) main_cam6_pane

0xbd72,	// (0x00061d31) main_vid6_pane

0x7a12,	// (0x0005d9d1) listscroll_gen_pane_cp06_ParamLimits

0x7a12,	// (0x0005d9d1) listscroll_gen_pane_cp06

0x7b19,	// (0x0005dad8) main_clock2_pane_t5_ParamLimits

0x7b19,	// (0x0005dad8) main_clock2_pane_t5

0x7b76,	// (0x0005db35) aid_call2_pane_cp10_ParamLimits

0x7b88,	// (0x0005db47) aid_call_pane_cp10_ParamLimits

0x07c1,	// (0x00056780) popup_clock_analogue_window_cp10_g1_ParamLimits

0x07c1,	// (0x00056780) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7b9a,	// (0x0005db59) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7b9a,	// (0x0005db59) popup_clock_analogue_window_cp10_g4_ParamLimits

0x07c1,	// (0x00056780) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x000657c1) popup_clock_analogue_window_cp10_g_ParamLimits

0x7bac,	// (0x0005db6b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x866b,	// (0x0005e62a) cell_dialer2_keypad_pane_g2_ParamLimits

0x866b,	// (0x0005e62a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x000658a7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x000658a7) cell_dialer2_keypad_pane_g

0x8687,	// (0x0005e646) cell_dialer2_keypad_pane_t1

0x9248,	// (0x0005f207) main_cset_text2_pane_ParamLimits

0x9248,	// (0x0005f207) main_cset_text2_pane

0xd569,	// (0x00063528) area_vitu2_query_pane_g1_ParamLimits

0x9a6b,	// (0x0005fa2a) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00065a56) area_vitu2_query_pane_g_ParamLimits

0xd5ed,	// (0x000635ac) area_vitu2_query_pane_t7_ParamLimits

0xd5ed,	// (0x000635ac) area_vitu2_query_pane_t7

0x9acc,	// (0x0005fa8b) bg_button_pane_cp018_ParamLimits

0x9ada,	// (0x0005fa99) bg_button_pane_cp021_ParamLimits

0x9ae6,	// (0x0005faa5) bg_button_pane_cp022_ParamLimits

0x9ae6,	// (0x0005faa5) bg_vkb2_func_pane_cp08_ParamLimits

0x9acc,	// (0x0005fa8b) bg_vkb2_func_pane_cp06_ParamLimits

0x9ada,	// (0x0005fa99) bg_vkb2_func_pane_cp07_ParamLimits

0x9af7,	// (0x0005fab6) input_focus_pane_cp09_ParamLimits

0xf0ed,	// (0x000650ac) cam6_autofocus_pane_ParamLimits

0xf0ed,	// (0x000650ac) cam6_autofocus_pane

0x9fe3,	// (0x0005ffa2) cam6_image_uncrop_pane_ParamLimits

0x9fe3,	// (0x0005ffa2) cam6_image_uncrop_pane

0x9ff2,	// (0x0005ffb1) cam6_indi_pane_ParamLimits

0x9ff2,	// (0x0005ffb1) cam6_indi_pane

0xa008,	// (0x0005ffc7) cam6_mode_pane_ParamLimits

0xa008,	// (0x0005ffc7) cam6_mode_pane

0xa01a,	// (0x0005ffd9) cam6_timer_pane_ParamLimits

0xa01a,	// (0x0005ffd9) cam6_timer_pane

0xa026,	// (0x0005ffe5) cam6_zoom_pane_ParamLimits

0xa026,	// (0x0005ffe5) cam6_zoom_pane

0xa032,	// (0x0005fff1) cam6_mode_pane_g1_ParamLimits

0xa032,	// (0x0005fff1) cam6_mode_pane_g1

0xa042,	// (0x00060001) cam6_mode_pane_g2_ParamLimits

0xa042,	// (0x00060001) cam6_mode_pane_g2

0xa052,	// (0x00060011) cam6_mode_pane_g3_ParamLimits

0xa052,	// (0x00060011) cam6_mode_pane_g3

0xa062,	// (0x00060021) cam6_mode_pane_g4_ParamLimits

0xa062,	// (0x00060021) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00065b3e) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00065b3e) cam6_mode_pane_g

0xd848,	// (0x00063807) bg_tb_trans_pane_cp08_ParamLimits

0xd848,	// (0x00063807) bg_tb_trans_pane_cp08

0xd856,	// (0x00063815) cam6_battery_pane_ParamLimits

0xd856,	// (0x00063815) cam6_battery_pane

0xd86c,	// (0x0006382b) cam6_indi_pane_g1_ParamLimits

0xd86c,	// (0x0006382b) cam6_indi_pane_g1

0xd87e,	// (0x0006383d) cam6_indi_pane_g2_ParamLimits

0xd87e,	// (0x0006383d) cam6_indi_pane_g2

0xd890,	// (0x0006384f) cam6_indi_pane_g3_ParamLimits

0xd890,	// (0x0006384f) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00065b47) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00065b47) cam6_indi_pane_g

0xd8a2,	// (0x00063861) cam6_indi_pane_t1_ParamLimits

0xd8a2,	// (0x00063861) cam6_indi_pane_t1

0xa072,	// (0x00060031) cam6_autofocus_pane_g1

0xa07a,	// (0x00060039) cam6_autofocus_pane_g2

0xa082,	// (0x00060041) cam6_autofocus_pane_g3

0xa08a,	// (0x00060049) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00065b4e) cam6_autofocus_pane_g

0xd8c8,	// (0x00063887) cam6_timer_pane_g1

0xd8d0,	// (0x0006388f) cam6_timer_pane_t1

0xd8de,	// (0x0006389d) cam6_zoom_cont_pane

0xd8e6,	// (0x000638a5) cam6_zoom_pane_g1

0xd8ee,	// (0x000638ad) cam6_zoom_pane_g2

0xa092,	// (0x00060051) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00065b57) cam6_zoom_pane_g

0x20e2,	// (0x000580a1) cam6_battery_pane_g1

0x20e2,	// (0x000580a1) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x000656ce) cam6_battery_pane_g

0xd8f6,	// (0x000638b5) cam6_zoom_cont_pane_g1

0xd8ff,	// (0x000638be) cam6_zoom_cont_pane_g2

0xd908,	// (0x000638c7) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x00065b5e) cam6_zoom_cont_pane_g

0xa0af,	// (0x0006006e) cam6_mode_pane_cp_ParamLimits

0xa0af,	// (0x0006006e) cam6_mode_pane_cp

0xa0c1,	// (0x00060080) cam6_zoom_pane_cp_ParamLimits

0xa0c1,	// (0x00060080) cam6_zoom_pane_cp

0xa0cd,	// (0x0006008c) vid6_image_uncrop_cif_pane_ParamLimits

0xa0cd,	// (0x0006008c) vid6_image_uncrop_cif_pane

0xa0dd,	// (0x0006009c) vid6_image_uncrop_nhd_pane_ParamLimits

0xa0dd,	// (0x0006009c) vid6_image_uncrop_nhd_pane

0xa0ec,	// (0x000600ab) vid6_image_uncrop_vga_pane_ParamLimits

0xa0ec,	// (0x000600ab) vid6_image_uncrop_vga_pane

0xa0fb,	// (0x000600ba) vid6_image_uncrop_wvga_pane_ParamLimits

0xa0fb,	// (0x000600ba) vid6_image_uncrop_wvga_pane

0xa10a,	// (0x000600c9) vid6_indi_pane_ParamLimits

0xa10a,	// (0x000600c9) vid6_indi_pane

0xd848,	// (0x00063807) bg_tb_trans_pane_cp09_ParamLimits

0xd848,	// (0x00063807) bg_tb_trans_pane_cp09

0xd920,	// (0x000638df) cam6_battery_pane_cp_ParamLimits

0xd920,	// (0x000638df) cam6_battery_pane_cp

0xd92c,	// (0x000638eb) vid6_indi_pane_g1_ParamLimits

0xd92c,	// (0x000638eb) vid6_indi_pane_g1

0xd93e,	// (0x000638fd) vid6_indi_pane_g2_ParamLimits

0xd93e,	// (0x000638fd) vid6_indi_pane_g2

0xd950,	// (0x0006390f) vid6_indi_pane_g3_ParamLimits

0xd950,	// (0x0006390f) vid6_indi_pane_g3

0xd965,	// (0x00063924) vid6_indi_pane_g4_ParamLimits

0xd965,	// (0x00063924) vid6_indi_pane_g4

0xd97a,	// (0x00063939) vid6_indi_pane_g5_ParamLimits

0xd97a,	// (0x00063939) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00065b65) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00065b65) vid6_indi_pane_g

0xd994,	// (0x00063953) vid6_indi_pane_t1_ParamLimits

0xd994,	// (0x00063953) vid6_indi_pane_t1

0xd9aa,	// (0x00063969) vid6_indi_pane_t2_ParamLimits

0xd9aa,	// (0x00063969) vid6_indi_pane_t2

0xd9d2,	// (0x00063991) vid6_indi_pane_t3_ParamLimits

0xd9d2,	// (0x00063991) vid6_indi_pane_t3

0xd9fa,	// (0x000639b9) vid6_indi_pane_t4_ParamLimits

0xd9fa,	// (0x000639b9) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00065b70) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00065b70) vid6_indi_pane_t

0xda1e,	// (0x000639dd) wait_bar_pane_cp08

0xa122,	// (0x000600e1) main_cset_text2_pane_t1_ParamLimits

0xa122,	// (0x000600e1) main_cset_text2_pane_t1

0xa09a,	// (0x00060059) listscroll_gen_pane_cp06_t1_ParamLimits

0xa09a,	// (0x00060059) listscroll_gen_pane_cp06_t1

0xbd72,	// (0x00061d31) main_cam6_set_pane

0xef6b,	// (0x00064f2a) bg_tb_trans_pane_cp06_ParamLimits

0xef81,	// (0x00064f40) cam4_indicators_pane_g1_ParamLimits

0xef92,	// (0x00064f51) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x000658e4) cam4_indicators_pane_g_ParamLimits

0xefb0,	// (0x00064f6f) cam4_indicators_pane_t1_ParamLimits

0xefd2,	// (0x00064f91) bg_tb_trans_pane_cp07_ParamLimits

0x8c33,	// (0x0005ebf2) vid4_indicators_pane_g1_ParamLimits

0x8c40,	// (0x0005ebff) vid4_indicators_pane_g2_ParamLimits

0x8c4d,	// (0x0005ec0c) vid4_indicators_pane_g3_ParamLimits

0x8c5a,	// (0x0005ec19) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x000658f6) vid4_indicators_pane_g_ParamLimits

0x8c72,	// (0x0005ec31) vid4_indicators_pane_t1_ParamLimits

0xf07d,	// (0x0006503c) vid4_progress_pane_g1_ParamLimits

0xf08d,	// (0x0006504c) vid4_progress_pane_g2_ParamLimits

0x0435,	// (0x000563f4) vid4_progress_pane_g3_ParamLimits

0xef92,	// (0x00064f51) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00065aa1) vid4_progress_pane_g_ParamLimits

0xf09d,	// (0x0006505c) vid4_progress_pane_t1_ParamLimits

0xf0b2,	// (0x00065071) vid4_progress_pane_t2_ParamLimits

0xf0c8,	// (0x00065087) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00065aac) vid4_progress_pane_t_ParamLimits

0xf0dd,	// (0x0006509c) wait_bar_pane_cp07_ParamLimits

0xa142,	// (0x00060101) main_cam6_set_pane_g2_ParamLimits

0xa142,	// (0x00060101) main_cam6_set_pane_g2

0xa166,	// (0x00060125) main_cset6_listscroll_pane_ParamLimits

0xa166,	// (0x00060125) main_cset6_listscroll_pane

0xa182,	// (0x00060141) main_cset6_slider_pane_ParamLimits

0xa182,	// (0x00060141) main_cset6_slider_pane

0xa198,	// (0x00060157) main_cset6_text2_pane_ParamLimits

0xa198,	// (0x00060157) main_cset6_text2_pane

0xda2d,	// (0x000639ec) main_cset6_text_pane

0xda35,	// (0x000639f4) main_cset_list_pane_copy1_ParamLimits

0xda35,	// (0x000639f4) main_cset_list_pane_copy1

0xda45,	// (0x00063a04) scroll_pane_cp028_copy1

0xa1a6,	// (0x00060165) cset_list_set_pane_copy1

0xa1b9,	// (0x00060178) aid_position_infowindow_above_copy1

0xa1c1,	// (0x00060180) aid_position_infowindow_below_copy1

0xa1c9,	// (0x00060188) cset_list_set_pane_g1_copy1

0xda4e,	// (0x00063a0d) cset_list_set_pane_g3_copy1_ParamLimits

0xda4e,	// (0x00063a0d) cset_list_set_pane_g3_copy1

0x952f,	// (0x0005f4ee) cset_list_set_pane_t1_copy1_ParamLimits

0x952f,	// (0x0005f4ee) cset_list_set_pane_t1_copy1

0x1c99,	// (0x00057c58) list_highlight_pane_cp021_copy1_ParamLimits

0x1c99,	// (0x00057c58) list_highlight_pane_cp021_copy1

0xda5d,	// (0x00063a1c) cset6_slider_pane_ParamLimits

0xda5d,	// (0x00063a1c) cset6_slider_pane

0xda89,	// (0x00063a48) main_cset6_slider_pane_g1_ParamLimits

0xda89,	// (0x00063a48) main_cset6_slider_pane_g1

0xa1d1,	// (0x00060190) main_cset6_slider_pane_g2_ParamLimits

0xa1d1,	// (0x00060190) main_cset6_slider_pane_g2

0xd23d,	// (0x000631fc) main_cset6_slider_pane_g3_ParamLimits

0xd23d,	// (0x000631fc) main_cset6_slider_pane_g3

0x930d,	// (0x0005f2cc) main_cset6_slider_pane_g4_ParamLimits

0x930d,	// (0x0005f2cc) main_cset6_slider_pane_g4

0x9355,	// (0x0005f314) main_cset6_slider_pane_g5_ParamLimits

0x9355,	// (0x0005f314) main_cset6_slider_pane_g5

0xd23d,	// (0x000631fc) main_cset6_slider_pane_g7_ParamLimits

0xd23d,	// (0x000631fc) main_cset6_slider_pane_g7

0xd249,	// (0x00063208) main_cset6_slider_pane_g8_ParamLimits

0xd249,	// (0x00063208) main_cset6_slider_pane_g8

0x92f5,	// (0x0005f2b4) main_cset6_slider_pane_g9_ParamLimits

0x92f5,	// (0x0005f2b4) main_cset6_slider_pane_g9

0x9301,	// (0x0005f2c0) main_cset6_slider_pane_g10_ParamLimits

0x9301,	// (0x0005f2c0) main_cset6_slider_pane_g10

0x930d,	// (0x0005f2cc) main_cset6_slider_pane_g11_ParamLimits

0x930d,	// (0x0005f2cc) main_cset6_slider_pane_g11

0x9319,	// (0x0005f2d8) main_cset6_slider_pane_g12_ParamLimits

0x9319,	// (0x0005f2d8) main_cset6_slider_pane_g12

0x9325,	// (0x0005f2e4) main_cset6_slider_pane_g13_ParamLimits

0x9325,	// (0x0005f2e4) main_cset6_slider_pane_g13

0x9331,	// (0x0005f2f0) main_cset6_slider_pane_g14_ParamLimits

0x9331,	// (0x0005f2f0) main_cset6_slider_pane_g14

0xa1f9,	// (0x000601b8) main_cset6_slider_pane_g15_ParamLimits

0xa1f9,	// (0x000601b8) main_cset6_slider_pane_g15

0x9355,	// (0x0005f314) main_cset6_slider_pane_g16_ParamLimits

0x9355,	// (0x0005f314) main_cset6_slider_pane_g16

0x9361,	// (0x0005f320) main_cset6_slider_pane_g17_ParamLimits

0x9361,	// (0x0005f320) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00065b79) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00065b79) main_cset6_slider_pane_g

0xdab1,	// (0x00063a70) main_cset6_slider_pane_t1_ParamLimits

0xdab1,	// (0x00063a70) main_cset6_slider_pane_t1

0xa211,	// (0x000601d0) main_cset6_slider_pane_t2_ParamLimits

0xa211,	// (0x000601d0) main_cset6_slider_pane_t2

0xa23c,	// (0x000601fb) main_cset6_slider_pane_t3_ParamLimits

0xa23c,	// (0x000601fb) main_cset6_slider_pane_t3

0xa267,	// (0x00060226) main_cset6_slider_pane_t4_ParamLimits

0xa267,	// (0x00060226) main_cset6_slider_pane_t4

0xa292,	// (0x00060251) main_cset6_slider_pane_t5_ParamLimits

0xa292,	// (0x00060251) main_cset6_slider_pane_t5

0xdaf2,	// (0x00063ab1) main_cset6_slider_pane_t7_ParamLimits

0xdaf2,	// (0x00063ab1) main_cset6_slider_pane_t7

0xa2bd,	// (0x0006027c) main_cset6_slider_pane_t8_ParamLimits

0xa2bd,	// (0x0006027c) main_cset6_slider_pane_t8

0xa2e1,	// (0x000602a0) main_cset6_slider_pane_t9_ParamLimits

0xa2e1,	// (0x000602a0) main_cset6_slider_pane_t9

0xa305,	// (0x000602c4) main_cset6_slider_pane_t10_ParamLimits

0xa305,	// (0x000602c4) main_cset6_slider_pane_t10

0xa329,	// (0x000602e8) main_cset6_slider_pane_t11_ParamLimits

0xa329,	// (0x000602e8) main_cset6_slider_pane_t11

0xdb28,	// (0x00063ae7) main_cset6_slider_pane_t14_ParamLimits

0xdb28,	// (0x00063ae7) main_cset6_slider_pane_t14

0xdb61,	// (0x00063b20) main_cset6_slider_pane_t15_ParamLimits

0xdb61,	// (0x00063b20) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00065b9e) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00065b9e) main_cset6_slider_pane_t

0xdb9a,	// (0x00063b59) cset_slider_pane_g1_copy1

0xdba3,	// (0x00063b62) cset_slider_pane_g2_copy1

0xdbac,	// (0x00063b6b) cset_slider_pane_g3_copy1

0xbd72,	// (0x00061d31) bg_popup_sub_pane_cp011_copy1

0xd399,	// (0x00063358) main_cset_text_pane_g1_copy1

0xd3a1,	// (0x00063360) main_cset_text_pane_t1_copy1

0xd3af,	// (0x0006336e) main_cset_text_pane_t2_copy1

0xd3bd,	// (0x0006337c) main_cset_text_pane_t3_copy1

0xd3cb,	// (0x0006338a) main_cset_text_pane_t4_copy1

0xd3d9,	// (0x00063398) main_cset_text_pane_t5_copy1

0xd3e7,	// (0x000633a6) main_cset_text_pane_t6_copy1

0xd3f5,	// (0x000633b4) main_cset_text_pane_t7_copy1

0xa122,	// (0x000600e1) main_cset_text2_pane_t1_copy1

0xbd72,	// (0x00061d31) main_ncimui_pane

0x63b4,	// (0x0005c373) popup_query_ncimui_window_ParamLimits

0x63b4,	// (0x0005c373) popup_query_ncimui_window

0x7108,	// (0x0005d0c7) field_cale_ev2_pane_g4_ParamLimits

0x7108,	// (0x0005d0c7) field_cale_ev2_pane_g4

0x8543,	// (0x0005e502) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8543,	// (0x0005e502) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00065882) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00065882) cell_video_dialer_keypad_pane_g

0x855b,	// (0x0005e51a) cell_video_dialer_keypad_pane_t1

0xbd72,	// (0x00061d31) bg_popup_window_pane_cp012

0x060f,	// (0x000565ce) heading_pane_cp06

0xdca4,	// (0x00063c63) ncim_query_content_pane

0xbd72,	// (0x00061d31) bg_popup_heading_pane_cp01

0xdcac,	// (0x00063c6b) ncim_heading_pane_t1

0xdcba,	// (0x00063c79) ncim_indicator_popup_pane

0xdccc,	// (0x00063c8b) ncim_query_button_pane

0xdce0,	// (0x00063c9f) ncim_query_content_pane_t1

0xdcf2,	// (0x00063cb1) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00065bdd) ncim_query_content_pane_t

0xdd2c,	// (0x00063ceb) ncim_query_list_pane

0xdd3e,	// (0x00063cfd) ncim_query_popup_pane

0xdcba,	// (0x00063c79) ncim_indicator_popup_pane_ParamLimits

0xa413,	// (0x000603d2) ncim_query_content_pane_g1_ParamLimits

0xa413,	// (0x000603d2) ncim_query_content_pane_g1

0xdce0,	// (0x00063c9f) ncim_query_content_pane_t1_ParamLimits

0xdcf2,	// (0x00063cb1) ncim_query_content_pane_t2_ParamLimits

0xa41f,	// (0x000603de) ncim_query_content_pane_t3_ParamLimits

0xa41f,	// (0x000603de) ncim_query_content_pane_t3

0xa447,	// (0x00060406) ncim_query_content_pane_t4_ParamLimits

0xa447,	// (0x00060406) ncim_query_content_pane_t4

0xa46f,	// (0x0006042e) ncim_query_content_pane_t5_ParamLimits

0xa46f,	// (0x0006042e) ncim_query_content_pane_t5

0xdd04,	// (0x00063cc3) ncim_query_content_pane_t6_ParamLimits

0xdd04,	// (0x00063cc3) ncim_query_content_pane_t6

0xfc1e,	// (0x00065bdd) ncim_query_content_pane_t_ParamLimits

0xdd2c,	// (0x00063ceb) ncim_query_list_pane_ParamLimits

0xdd3e,	// (0x00063cfd) ncim_query_popup_pane_ParamLimits

0xdd52,	// (0x00063d11) wait_bar_pane_cp04

0xbd72,	// (0x00061d31) input_focus_pane_cp011

0xdd5a,	// (0x00063d19) ncim_query_popup_pane_t1

0xdd68,	// (0x00063d27) ncim_list_query_list_pane_ParamLimits

0xdd68,	// (0x00063d27) ncim_list_query_list_pane

0xbd72,	// (0x00061d31) bg_button_pane_cp027

0xdd7b,	// (0x00063d3a) ncim_query_button_pane_g1

0xbd72,	// (0x00061d31) list_highlight_pane_cp012

0xdd85,	// (0x00063d44) ncim_list_query_list_pane_g1

0xdd8d,	// (0x00063d4c) ncim_list_query_list_pane_t1

0xefa1,	// (0x00064f60) cam4_indicators_pane_g3_ParamLimits

0xefa1,	// (0x00064f60) cam4_indicators_pane_g3

0x8c66,	// (0x0005ec25) vid4_indicators_pane_g5_ParamLimits

0x8c66,	// (0x0005ec25) vid4_indicators_pane_g5

0xefa1,	// (0x00064f60) vid4_progress_pane_g5_ParamLimits

0xefa1,	// (0x00064f60) vid4_progress_pane_g5

0xa35b,	// (0x0006031a) main_ncimui_pane_g1

0xa3a1,	// (0x00060360) ncimui_group_query_pane_ParamLimits

0xa3a1,	// (0x00060360) ncimui_group_query_pane

0xa3d5,	// (0x00060394) ncimui_list_pane_ParamLimits

0xa3d5,	// (0x00060394) ncimui_list_pane

0xa3ef,	// (0x000603ae) ncimui_text_pane_ParamLimits

0xa3ef,	// (0x000603ae) ncimui_text_pane

0xa497,	// (0x00060456) ncimui_text_pane_t1_ParamLimits

0xa497,	// (0x00060456) ncimui_text_pane_t1

0xdd9b,	// (0x00063d5a) ncimui_list_single_graphic_pane_ParamLimits

0xdd9b,	// (0x00063d5a) ncimui_list_single_graphic_pane

0xa4bd,	// (0x0006047c) ncimui_query_pane_ParamLimits

0xa4bd,	// (0x0006047c) ncimui_query_pane

0xbd72,	// (0x00061d31) list_highlight_pane_cp013

0xddab,	// (0x00063d6a) ncim_list_query_list_pane_t1_copy1

0xdd85,	// (0x00063d44) ncim_list_single_graphic_pane_g1

0xddb9,	// (0x00063d78) ncim_query_button_pane_cp01

0xddc1,	// (0x00063d80) ncim_query_entry_pane_ParamLimits

0xddc1,	// (0x00063d80) ncim_query_entry_pane

0xddd1,	// (0x00063d90) ncimui_query_pane_g1

0xddd9,	// (0x00063d98) ncimui_query_pane_t1_ParamLimits

0xddd9,	// (0x00063d98) ncimui_query_pane_t1

0xbd72,	// (0x00061d31) input_focus_pane_cp012

0xdd5a,	// (0x00063d19) ncim_query_entry_pane_t1

0xc581,	// (0x00062540) main_im_pane_ParamLimits

0x1c99,	// (0x00057c58) main_mobtv_pane_ParamLimits

0x1c99,	// (0x00057c58) main_mobtv_pane

0x92f5,	// (0x0005f2b4) main_cset6_slider_pane_g18_ParamLimits

0x92f5,	// (0x0005f2b4) main_cset6_slider_pane_g18

0x9325,	// (0x0005f2e4) main_cset6_slider_pane_g19_ParamLimits

0x9325,	// (0x0005f2e4) main_cset6_slider_pane_g19

0xddef,	// (0x00063dae) bg_main_mobtv_pane_ParamLimits

0xddef,	// (0x00063dae) bg_main_mobtv_pane

0xa4cd,	// (0x0006048c) main_mobtv_info_pane

0xa4d6,	// (0x00060495) main_mobtv_loading_pane_ParamLimits

0xa4d6,	// (0x00060495) main_mobtv_loading_pane

0xddfd,	// (0x00063dbc) main_mobtv_pg_channel_list_pane

0xde07,	// (0x00063dc6) main_mobtv_pg_hdr_pane

0xa4e3,	// (0x000604a2) main_mobtv_programe_curr_pane_ParamLimits

0xa4e3,	// (0x000604a2) main_mobtv_programe_curr_pane

0xa4f0,	// (0x000604af) main_mobtv_programe_next_pane_ParamLimits

0xa4f0,	// (0x000604af) main_mobtv_programe_next_pane

0xde10,	// (0x00063dcf) popup_mobtv_noti_window

0x20e2,	// (0x000580a1) main_tv_pg_hdr_pane_g1

0xde18,	// (0x00063dd7) main_tv_pg_hdr_pane_g2

0xde20,	// (0x00063ddf) main_tv_pg_hdr_pane_g3

0xde28,	// (0x00063de7) main_tv_pg_hdr_pane_g4

0xde30,	// (0x00063def) main_tv_pg_hdr_pane_g5

0xde3a,	// (0x00063df9) main_tv_pg_hdr_pane_g6

0xde44,	// (0x00063e03) main_tv_pg_hdr_pane_g7

0xde4e,	// (0x00063e0d) main_tv_pg_hdr_pane_g8

0xde58,	// (0x00063e17) main_tv_pg_hdr_pane_g9

0xde62,	// (0x00063e21) main_tv_pg_hdr_pane_g10

0xde6c,	// (0x00063e2b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00065bea) main_tv_pg_hdr_pane_g

0xde76,	// (0x00063e35) main_tv_pg_hdr_pane_t1

0xde84,	// (0x00063e43) main_tv_pg_hdr_pane_t2

0xde92,	// (0x00063e51) main_tv_pg_hdr_pane_t3

0xdea2,	// (0x00063e61) main_tv_pg_hdr_pane_t4

0xdeb2,	// (0x00063e71) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00065c01) main_tv_pg_hdr_pane_t

0xdec2,	// (0x00063e81) single_mobtv_pg_channel_pane_ParamLimits

0xdec2,	// (0x00063e81) single_mobtv_pg_channel_pane

0xded4,	// (0x00063e93) single_mobtv_pg_channel_table_pane

0xdedd,	// (0x00063e9c) single_mobtv_pg_channel_thumb_pane

0xdee6,	// (0x00063ea5) single_tv_pg_channel_pane_g1

0xdeef,	// (0x00063eae) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00065c0c) single_tv_pg_channel_pane_g

0x2349,	// (0x00058308) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2349,	// (0x00058308) bg_single_mobtv_pg_channel_thumb_pane

0xdef8,	// (0x00063eb7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdef8,	// (0x00063eb7) single_mobtv_pg_channel_thumb_pane_g1

0xdf06,	// (0x00063ec5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf06,	// (0x00063ec5) single_mobtv_pg_channel_thumb_pane_g2

0xdf12,	// (0x00063ed1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf12,	// (0x00063ed1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00065c11) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00065c11) single_mobtv_pg_channel_thumb_pane_g

0xdf1e,	// (0x00063edd) single_mobtv_pg_channel_thumb_pane_t1

0xdf2c,	// (0x00063eeb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00065c18) single_mobtv_pg_channel_thumb_pane_t

0x20e2,	// (0x000580a1) bg_single_mobtv_pg_channel_table_pane_g1

0x20e2,	// (0x000580a1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x000656ce) bg_single_mobtv_pg_channel_table_pane_g

0xdf3a,	// (0x00063ef9) single_mobtv_pg_channel_table_pane_t1

0xdf48,	// (0x00063f07) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00065c1d) single_mobtv_pg_channel_table_pane_t

0xa505,	// (0x000604c4) main_mobtv_info_pane_g1_ParamLimits

0xa505,	// (0x000604c4) main_mobtv_info_pane_g1

0xa523,	// (0x000604e2) main_mobtv_info_pane_t1_ParamLimits

0xa523,	// (0x000604e2) main_mobtv_info_pane_t1

0xa59b,	// (0x0006055a) main_mobtv_info_pane_t2_ParamLimits

0xa59b,	// (0x0006055a) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00065c27) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00065c27) main_mobtv_info_pane_t

0xa62a,	// (0x000605e9) wait_bar_pane_cp05

0xa63c,	// (0x000605fb) main_mobtv_loading_pane_g1_ParamLimits

0xa63c,	// (0x000605fb) main_mobtv_loading_pane_g1

0xa64f,	// (0x0006060e) main_mobtv_loading_pane_g2_ParamLimits

0xa64f,	// (0x0006060e) main_mobtv_loading_pane_g2

0xa65b,	// (0x0006061a) main_mobtv_loading_pane_g3_ParamLimits

0xa65b,	// (0x0006061a) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00065c2e) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00065c2e) main_mobtv_loading_pane_g

0xdf56,	// (0x00063f15) main_mobtv_loading_pane_t1_ParamLimits

0xdf56,	// (0x00063f15) main_mobtv_loading_pane_t1

0xdf6e,	// (0x00063f2d) main_mobtv_loading_pane_t2_ParamLimits

0xdf6e,	// (0x00063f2d) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00065c35) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00065c35) main_mobtv_loading_pane_t

0xa66e,	// (0x0006062d) wait_bar_pane_cp06_ParamLimits

0xa66e,	// (0x0006062d) wait_bar_pane_cp06

0xdf92,	// (0x00063f51) main_mobtv_programe_curr_pane_t1

0xdfa0,	// (0x00063f5f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x00065c3a) main_mobtv_programe_curr_pane_t

0xdfae,	// (0x00063f6d) main_mobtv_programe_next_pane_t1

0xdfbc,	// (0x00063f7b) main_mobtv_programe_next_pane_t2

0xdfca,	// (0x00063f89) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00065c3f) main_mobtv_programe_next_pane_t

0xbd72,	// (0x00061d31) bg_popup_mobtv_noti_window_pane

0xdfd8,	// (0x00063f97) popup_mobtv_noti_window_g1

0xdfe0,	// (0x00063f9f) popup_mobtv_noti_window_t1

0xdfee,	// (0x00063fad) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00065c46) popup_mobtv_noti_window_t

0x20e2,	// (0x000580a1) bg_popup_mobtv_noti_window_pane_g1

0xbd72,	// (0x00061d31) sc_clock_pane

0xbd72,	// (0x00061d31) main_fs_bigclock_pane

0x9e58,	// (0x0005fe17) blid2_tripm_pane_t4_ParamLimits

0x9e58,	// (0x0005fe17) blid2_tripm_pane_t4

0xa67d,	// (0x0006063c) sc_clock_pane_g1_ParamLimits

0xa67d,	// (0x0006063c) sc_clock_pane_g1

0xa68f,	// (0x0006064e) sc_clock_pane_t1_ParamLimits

0xa68f,	// (0x0006064e) sc_clock_pane_t1

0xa6b1,	// (0x00060670) sc_clock_pane_t2_ParamLimits

0xa6b1,	// (0x00060670) sc_clock_pane_t2

0xa6c9,	// (0x00060688) sc_clock_pane_t3_ParamLimits

0xa6c9,	// (0x00060688) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x00065c4b) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x00065c4b) sc_clock_pane_t

0xb498,	// (0x00061457) main_fs_bigclock_indicator_pane_ParamLimits

0xb498,	// (0x00061457) main_fs_bigclock_indicator_pane

0x2319,	// (0x000582d8) main_fs_bigclock_pane_g1_ParamLimits

0x2319,	// (0x000582d8) main_fs_bigclock_pane_g1

0xb4a4,	// (0x00061463) main_fs_bigclock_pane_t1_ParamLimits

0xb4a4,	// (0x00061463) main_fs_bigclock_pane_t1

0xb4b6,	// (0x00061475) main_fs_bigclock_pane_t2_ParamLimits

0xb4b6,	// (0x00061475) main_fs_bigclock_pane_t2

0xb4c8,	// (0x00061487) main_fs_bigclock_pane_t3_ParamLimits

0xb4c8,	// (0x00061487) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x00065e4a) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00065e4a) main_fs_bigclock_pane_t

0xebe0,	// (0x00064b9f) main_fs_bigclock_indicator_pane_g1

0xdcd4,	// (0x00063c93) ncim_query_content_pane_g2_ParamLimits

0xdcd4,	// (0x00063c93) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00065bd8) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00065bd8) ncim_query_content_pane_g

0xa6e0,	// (0x0006069f) sc_clock_pane_t4_ParamLimits

0xa6e0,	// (0x0006069f) sc_clock_pane_t4

0x1c99,	// (0x00057c58) main_radioblah_pane

0xd010,	// (0x00062fcf) cell_call4_button_pane_t1_copy1_ParamLimits

0xd010,	// (0x00062fcf) cell_call4_button_pane_t1_copy1

0xa363,	// (0x00060322) main_ncimui_pane_t1_ParamLimits

0xa363,	// (0x00060322) main_ncimui_pane_t1

0xa375,	// (0x00060334) main_ncimui_pane_t2_ParamLimits

0xa375,	// (0x00060334) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00065bd1) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00065bd1) main_ncimui_pane_t

0xe11e,	// (0x000640dd) main_radioblah_anim_pane_ParamLimits

0xe11e,	// (0x000640dd) main_radioblah_anim_pane

0xe12f,	// (0x000640ee) main_radioblah_info_pane_ParamLimits

0xe12f,	// (0x000640ee) main_radioblah_info_pane

0xe143,	// (0x00064102) main_radioblah_pane_t1_ParamLimits

0xe143,	// (0x00064102) main_radioblah_pane_t1

0xe15f,	// (0x0006411e) main_radioblah_pane_t2_ParamLimits

0xe15f,	// (0x0006411e) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00065c6c) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00065c6c) main_radioblah_pane_t

0xa789,	// (0x00060748) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa789,	// (0x00060748) main_radioblah_rocker_ctrl_pane

0xe1a7,	// (0x00064166) main_radioblah_info_pane_t1_ParamLimits

0xe1a7,	// (0x00064166) main_radioblah_info_pane_t1

0xa7e1,	// (0x000607a0) main_radioblah_info_pane_t2_ParamLimits

0xa7e1,	// (0x000607a0) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00065c75) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00065c75) main_radioblah_info_pane_t

0x20e2,	// (0x000580a1) main_radioblah_rocker_ctrl_pane_g1

0xa893,	// (0x00060852) main_radioblah_rocker_ctrl_pane_g2

0xa89b,	// (0x0006085a) main_radioblah_rocker_ctrl_pane_g3

0xa8a3,	// (0x00060862) main_radioblah_rocker_ctrl_pane_g4

0xa8ab,	// (0x0006086a) main_radioblah_rocker_ctrl_pane_g5

0xa8b3,	// (0x00060872) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x00065c7e) main_radioblah_rocker_ctrl_pane_g

0xa122,	// (0x000600e1) main_cset_text2_pane_t1_copy1_ParamLimits

0xef63,	// (0x00064f22) cam4_image_uncrop_qvga_pane

0xefca,	// (0x00064f89) vid4_image_uncrop_qcif_pane

0xf0ed,	// (0x000650ac) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0ed,	// (0x000650ac) cam6_image_uncrop_qvga_pane

0xd910,	// (0x000638cf) vid6_image_uncrop_qcif_pane_ParamLimits

0xd910,	// (0x000638cf) vid6_image_uncrop_qcif_pane

0xbd72,	// (0x00061d31) bg_popup_preview_window_pane_cp03

0xdc86,	// (0x00063c45) list_cset_text2_pane

0xdc8e,	// (0x00063c4d) main_cset6_text2_pane_g1

0xdc96,	// (0x00063c55) main_cset6_text2_pane_t1

0xa8bb,	// (0x0006087a) list_cset_text2_pane_t1_ParamLimits

0xa8bb,	// (0x0006087a) list_cset_text2_pane_t1

0x1c99,	// (0x00057c58) main_radioblah_pane_ParamLimits

0xa616,	// (0x000605d5) main_mobtv_info_pane_t3_ParamLimits

0xa616,	// (0x000605d5) main_mobtv_info_pane_t3

0xa777,	// (0x00060736) main_radioblah_pane_g1

0xa7b1,	// (0x00060770) main_radioblah_info_pane_g1

0xa838,	// (0x000607f7) main_radioblah_info_pane_t3_ParamLimits

0xa838,	// (0x000607f7) main_radioblah_info_pane_t3

0x4c75,	// (0x0005ac34) highlight_cell_cale_month_pane_ParamLimits

0x4c75,	// (0x0005ac34) highlight_cell_cale_month_pane

0xbd72,	// (0x00061d31) main_phob_fisheye_pane

0x7800,	// (0x0005d7bf) scroll_pane_cp0031_ParamLimits

0x7800,	// (0x0005d7bf) scroll_pane_cp0031

0xda1e,	// (0x000639dd) wait_bar_pane_cp08_ParamLimits

0xa1a6,	// (0x00060165) cset_list_set_pane_copy1_ParamLimits

0xe1e1,	// (0x000641a0) highlight_cell_cale_month_pane_g1

0xa8d8,	// (0x00060897) highlight_cell_cale_month_pane_t1

0xd659,	// (0x00063618) list_gen_pane_cp01

0xd228,	// (0x000631e7) scroll_pane_01

0xe1e9,	// (0x000641a8) list_single_double_fisheye_pane

0xa8e6,	// (0x000608a5) list_double_fisheye_pane_g1_ParamLimits

0xa8e6,	// (0x000608a5) list_double_fisheye_pane_g1

0xa8f2,	// (0x000608b1) list_double_fisheye_pane_g2_ParamLimits

0xa8f2,	// (0x000608b1) list_double_fisheye_pane_g2

0xa906,	// (0x000608c5) list_double_fisheye_pane_g3_ParamLimits

0xa906,	// (0x000608c5) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00065c8b) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00065c8b) list_double_fisheye_pane_g

0xa92f,	// (0x000608ee) list_double_fisheye_pane_t1_ParamLimits

0xa92f,	// (0x000608ee) list_double_fisheye_pane_t1

0xa94a,	// (0x00060909) list_double_fisheye_pane_t2_ParamLimits

0xa94a,	// (0x00060909) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00065c96) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00065c96) list_double_fisheye_pane_t

0xbd72,	// (0x00061d31) main_call5_pane

0xa70b,	// (0x000606ca) sc_swipe_pane_ParamLimits

0xa70b,	// (0x000606ca) sc_swipe_pane

0xa97f,	// (0x0006093e) call5_image_pane_ParamLimits

0xa97f,	// (0x0006093e) call5_image_pane

0xa99c,	// (0x0006095b) call5_swipe_1_pane_ParamLimits

0xa99c,	// (0x0006095b) call5_swipe_1_pane

0xa9af,	// (0x0006096e) call5_swipe_2_pane_ParamLimits

0xa9af,	// (0x0006096e) call5_swipe_2_pane

0xa9da,	// (0x00060999) popup_call5_audio_first_window_ParamLimits

0xa9da,	// (0x00060999) popup_call5_audio_first_window

0x2349,	// (0x00058308) call5_swipe_1_pane_g1_ParamLimits

0x2349,	// (0x00058308) call5_swipe_1_pane_g1

0xe1f2,	// (0x000641b1) call5_swipe_1_pane_g2_ParamLimits

0xe1f2,	// (0x000641b1) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00065c9b) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00065c9b) call5_swipe_1_pane_g

0xe1fe,	// (0x000641bd) call5_swipe_1_pane_t1_ParamLimits

0xe1fe,	// (0x000641bd) call5_swipe_1_pane_t1

0x2349,	// (0x00058308) call5_swipe_2_pane_g1_ParamLimits

0x2349,	// (0x00058308) call5_swipe_2_pane_g1

0xe213,	// (0x000641d2) call5_swipe_2_pane_g2_ParamLimits

0xe213,	// (0x000641d2) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00065ca0) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00065ca0) call5_swipe_2_pane_g

0xe21f,	// (0x000641de) call5_swipe_2_pane_t1_ParamLimits

0xe21f,	// (0x000641de) call5_swipe_2_pane_t1

0xe234,	// (0x000641f3) sc_swipe_pane_g1_ParamLimits

0xe234,	// (0x000641f3) sc_swipe_pane_g1

0xe241,	// (0x00064200) sc_swipe_pane_g2_ParamLimits

0xe241,	// (0x00064200) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00065ca5) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00065ca5) sc_swipe_pane_g

0xe24d,	// (0x0006420c) sc_swipe_pane_t1_ParamLimits

0xe24d,	// (0x0006420c) sc_swipe_pane_t1

0xbd72,	// (0x00061d31) main_cmail_launcher_pane

0xa9eb,	// (0x000609aa) aid_size_cell_cmail_l_ParamLimits

0xa9eb,	// (0x000609aa) aid_size_cell_cmail_l

0xaa05,	// (0x000609c4) grid_cmail_l_pane_ParamLimits

0xaa05,	// (0x000609c4) grid_cmail_l_pane

0xaa20,	// (0x000609df) cell_cmail_l_pane_ParamLimits

0xaa20,	// (0x000609df) cell_cmail_l_pane

0xaa46,	// (0x00060a05) cell_cmail_l_pane_g1_ParamLimits

0xaa46,	// (0x00060a05) cell_cmail_l_pane_g1

0xaa52,	// (0x00060a11) cell_cmail_l_pane_t1_ParamLimits

0xaa52,	// (0x00060a11) cell_cmail_l_pane_t1

0xe262,	// (0x00064221) cell_cmail_l_pane_t2_ParamLimits

0xe262,	// (0x00064221) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00065caa) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00065caa) cell_cmail_l_pane_t

0x1c99,	// (0x00057c58) grid_highlight_pane_cp018_ParamLimits

0x1c99,	// (0x00057c58) grid_highlight_pane_cp018

0x33dd,	// (0x0005939c) main2_pane_ParamLimits

0x33dd,	// (0x0005939c) main2_pane

0xc65a,	// (0x00062619) popup_sp_fs_action_menu_bg_pane_g1

0xc662,	// (0x00062621) popup_sp_fs_action_menu_bg_pane_g2

0xc66a,	// (0x00062629) popup_sp_fs_action_menu_bg_pane_g3

0xc672,	// (0x00062631) popup_sp_fs_action_menu_bg_pane_g4

0xc67a,	// (0x00062639) popup_sp_fs_action_menu_bg_pane_g5

0xc682,	// (0x00062641) popup_sp_fs_action_menu_bg_pane_g6

0xc68a,	// (0x00062649) popup_sp_fs_action_menu_bg_pane_g7

0xc692,	// (0x00062651) popup_sp_fs_action_menu_bg_pane_g8

0xc69a,	// (0x00062659) popup_sp_fs_action_menu_bg_pane_g9

0xc6a2,	// (0x00062661) popup_sp_fs_action_menu_bg_pane_g10

0xc6a2,	// (0x00062661) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0006517a) popup_sp_fs_action_menu_bg_pane_g

0x406b,	// (0x0005a02a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t3_g3_g1

0x4077,	// (0x0005a036) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x2_t3_g3_g2

0x4083,	// (0x0005a042) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4083,	// (0x0005a042) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0006522a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0006522a) list_medium_line_x2_t3_g3_g

0x408f,	// (0x0005a04e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x408f,	// (0x0005a04e) list_medium_line_x2_t3_g3_t1

0x40a4,	// (0x0005a063) list_medium_line_x2_t3_g3_t2_ParamLimits

0x40a4,	// (0x0005a063) list_medium_line_x2_t3_g3_t2

0x40b8,	// (0x0005a077) list_medium_line_x2_t3_g3_t3_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00065231) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00065231) list_medium_line_x2_t3_g3_t

0x406b,	// (0x0005a02a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t3_g2_g1

0x4083,	// (0x0005a042) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4083,	// (0x0005a042) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00065238) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00065238) list_medium_line_x2_t3_g2_g

0x40cd,	// (0x0005a08c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x40cd,	// (0x0005a08c) list_medium_line_x2_t3_g2_t1

0x40e3,	// (0x0005a0a2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x40e3,	// (0x0005a0a2) list_medium_line_x2_t3_g2_t2

0x40b8,	// (0x0005a077) list_medium_line_x2_t3_g2_t3_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0006523d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0006523d) list_medium_line_x2_t3_g2_t

0x406b,	// (0x0005a02a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t4_g4_g1

0x40f5,	// (0x0005a0b4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x40f5,	// (0x0005a0b4) list_medium_line_x2_t4_g4_g2

0x4077,	// (0x0005a036) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x2_t4_g4_g3

0x4101,	// (0x0005a0c0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4101,	// (0x0005a0c0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00065244) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00065244) list_medium_line_x2_t4_g4_g

0x410d,	// (0x0005a0cc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x410d,	// (0x0005a0cc) list_medium_line_x2_t4_g4_t1

0x4127,	// (0x0005a0e6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4127,	// (0x0005a0e6) list_medium_line_x2_t4_g4_t2

0x413c,	// (0x0005a0fb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x413c,	// (0x0005a0fb) list_medium_line_x2_t4_g4_t3

0x4151,	// (0x0005a110) list_medium_line_x2_t4_g4_t4_ParamLimits

0x4151,	// (0x0005a110) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0006524d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0006524d) list_medium_line_x2_t4_g4_t

0x406b,	// (0x0005a02a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t2_g4_g1

0x40f5,	// (0x0005a0b4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x40f5,	// (0x0005a0b4) list_medium_line_x2_t2_g4_g2

0x4077,	// (0x0005a036) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x2_t2_g4_g3

0x4083,	// (0x0005a042) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4083,	// (0x0005a042) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000652b4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000652b4) list_medium_line_x2_t2_g4_g

0x4c93,	// (0x0005ac52) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4c93,	// (0x0005ac52) list_medium_line_x2_t2_g4_t1

0x40b8,	// (0x0005a077) list_medium_line_x2_t2_g4_t2_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000652bd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000652bd) list_medium_line_x2_t2_g4_t

0x406b,	// (0x0005a02a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t2_g3_g1

0x4077,	// (0x0005a036) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x2_t2_g3_g2

0x4083,	// (0x0005a042) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4083,	// (0x0005a042) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0006522a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0006522a) list_medium_line_x2_t2_g3_g

0x4ca8,	// (0x0005ac67) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4ca8,	// (0x0005ac67) list_medium_line_x2_t2_g3_t1

0x40b8,	// (0x0005a077) list_medium_line_x2_t2_g3_t2_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000652c2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000652c2) list_medium_line_x2_t2_g3_t

0x4e85,	// (0x0005ae44) main_sp_fs_list_pane_ParamLimits

0x4e85,	// (0x0005ae44) main_sp_fs_list_pane

0x4e91,	// (0x0005ae50) sp_fs_scroll_pane_ParamLimits

0x4e91,	// (0x0005ae50) sp_fs_scroll_pane

0x4e9d,	// (0x0005ae5c) list_medium_line_x2_t3_t1

0x4ead,	// (0x0005ae6c) list_medium_line_x2_t3_t2

0x4ebb,	// (0x0005ae7a) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0006530d) list_medium_line_x2_t3_t

0x4ec9,	// (0x0005ae88) list_medium_line_x3_t4_t1

0x4ed9,	// (0x0005ae98) list_medium_line_x3_t4_t2

0x4ee7,	// (0x0005aea6) list_medium_line_x3_t4_t3

0x4ebb,	// (0x0005ae7a) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00065314) list_medium_line_x3_t4_t

0x4ef5,	// (0x0005aeb4) list_medium_line_x4_t5_t1

0x4f05,	// (0x0005aec4) list_medium_line_x4_t5_t2

0x4ee7,	// (0x0005aea6) list_medium_line_x4_t5_t3

0x4f13,	// (0x0005aed2) list_medium_line_x4_t5_t4

0x4ebb,	// (0x0005ae7a) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0006531d) list_medium_line_x4_t5_t

0x406b,	// (0x0005a02a) list_medium_line_t4_g4_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_t4_g4_g1

0x4101,	// (0x0005a0c0) list_medium_line_t4_g4_g2_ParamLimits

0x4101,	// (0x0005a0c0) list_medium_line_t4_g4_g2

0x4f21,	// (0x0005aee0) list_medium_line_t4_g4_g3_ParamLimits

0x4f21,	// (0x0005aee0) list_medium_line_t4_g4_g3

0x4083,	// (0x0005a042) list_medium_line_t4_g4_g4_ParamLimits

0x4083,	// (0x0005a042) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00065328) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00065328) list_medium_line_t4_g4_g

0x4f2d,	// (0x0005aeec) list_medium_line_t4_g4_t1_ParamLimits

0x4f2d,	// (0x0005aeec) list_medium_line_t4_g4_t1

0x4f42,	// (0x0005af01) list_medium_line_t4_g4_t2_ParamLimits

0x4f42,	// (0x0005af01) list_medium_line_t4_g4_t2

0x4f57,	// (0x0005af16) list_medium_line_t4_g4_t3_ParamLimits

0x4f57,	// (0x0005af16) list_medium_line_t4_g4_t3

0x40b8,	// (0x0005a077) list_medium_line_t4_g4_t4_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00065331) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00065331) list_medium_line_t4_g4_t

0x500a,	// (0x0005afc9) chi_dic_find_pane_g1

0x6192,	// (0x0005c151) main_tport_pane

0xd32a,	// (0x000632e9) list_medium_line_plain_t1

0xd340,	// (0x000632ff) list_medium_line_t2_g2_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_t2_g2_g1

0xd34c,	// (0x0006330b) list_medium_line_t2_g2_g2_ParamLimits

0xd34c,	// (0x0006330b) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x000659ed) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x000659ed) list_medium_line_t2_g2_g

0x96d3,	// (0x0005f692) list_medium_line_t2_g2_t1_ParamLimits

0x96d3,	// (0x0005f692) list_medium_line_t2_g2_t1

0x96ed,	// (0x0005f6ac) list_medium_line_t2_g2_t2_ParamLimits

0x96ed,	// (0x0005f6ac) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x000659f2) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x000659f2) list_medium_line_t2_g2_t

0xd662,	// (0x00063621) aid_sp_fs_list_icon_a_sm

0xd66a,	// (0x00063629) aid_sp_fs_list_icon_d

0xd672,	// (0x00063631) aid_sp_fs_text_primary

0xd67b,	// (0x0006363a) aid_sp_fs_text_secondary

0xd684,	// (0x00063643) list_medium_line

0xd684,	// (0x00063643) list_medium_line_g2

0xd684,	// (0x00063643) list_medium_line_g3

0xd684,	// (0x00063643) list_medium_line_plain

0xd684,	// (0x00063643) list_medium_line_plain_t2

0xd684,	// (0x00063643) list_medium_line_plain_t3

0xd684,	// (0x00063643) list_medium_line_right_icon

0xd684,	// (0x00063643) list_medium_line_right_iconx2

0xd684,	// (0x00063643) list_medium_line_t2

0xd684,	// (0x00063643) list_medium_line_t2_g2

0xd684,	// (0x00063643) list_medium_line_t2_g3

0xd684,	// (0x00063643) list_medium_line_t2_right_icon

0xd684,	// (0x00063643) list_medium_line_t2_right_iconx2

0xd684,	// (0x00063643) list_medium_line_t3

0xd684,	// (0x00063643) list_medium_line_t3_g2

0xd684,	// (0x00063643) list_medium_line_t3_g3

0xd684,	// (0x00063643) list_medium_line_t3_right_iconx2

0xd68d,	// (0x0006364c) list_medium_line_t4_g4

0xd696,	// (0x00063655) list_medium_line_x2

0xd696,	// (0x00063655) list_medium_line_x2_t2_g2

0xd696,	// (0x00063655) list_medium_line_x2_t2_g3

0xd696,	// (0x00063655) list_medium_line_x2_t2_g4

0xd696,	// (0x00063655) list_medium_line_x2_t3

0xd696,	// (0x00063655) list_medium_line_x2_t3_g2

0xd696,	// (0x00063655) list_medium_line_x2_t3_g3

0xd696,	// (0x00063655) list_medium_line_x2_t3_g4

0xd696,	// (0x00063655) list_medium_line_x2_t4_g2

0xd696,	// (0x00063655) list_medium_line_x2_t4_g4

0xd69f,	// (0x0006365e) list_medium_line_x3

0xd69f,	// (0x0006365e) list_medium_line_x3_t4

0xd69f,	// (0x0006365e) list_medium_line_x3_t4_g4

0xd68d,	// (0x0006364c) list_medium_line_x4_t4

0xd68d,	// (0x0006364c) list_medium_line_x4_t4_g7

0xd68d,	// (0x0006364c) list_medium_line_x4_t5

0xd6a8,	// (0x00063667) list_single_fs_dyc_pane_ParamLimits

0xd6a8,	// (0x00063667) list_single_fs_dyc_pane

0x406b,	// (0x0005a02a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x4_t4_g7_g1

0xdbb5,	// (0x00063b74) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdbb5,	// (0x00063b74) list_medium_line_x4_t4_g7_g2

0xdbc1,	// (0x00063b80) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdbc1,	// (0x00063b80) list_medium_line_x4_t4_g7_g3

0xdbd0,	// (0x00063b8f) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdbd0,	// (0x00063b8f) list_medium_line_x4_t4_g7_g4

0xdbdc,	// (0x00063b9b) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdbdc,	// (0x00063b9b) list_medium_line_x4_t4_g7_g5

0xdbeb,	// (0x00063baa) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdbeb,	// (0x00063baa) list_medium_line_x4_t4_g7_g6

0xdbfa,	// (0x00063bb9) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdbfa,	// (0x00063bb9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00065bb7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00065bb7) list_medium_line_x4_t4_g7_g

0xdc06,	// (0x00063bc5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc06,	// (0x00063bc5) list_medium_line_x4_t4_g7_t1

0xdc1b,	// (0x00063bda) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc1b,	// (0x00063bda) list_medium_line_x4_t4_g7_t2

0xdc30,	// (0x00063bef) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc30,	// (0x00063bef) list_medium_line_x4_t4_g7_t3

0xdc45,	// (0x00063c04) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc45,	// (0x00063c04) list_medium_line_x4_t4_g7_t4

0xdc57,	// (0x00063c16) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc57,	// (0x00063c16) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00065bc6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00065bc6) list_medium_line_x4_t4_g7_t

0xdc69,	// (0x00063c28) list_single_dyc_row_pane_ParamLimits

0xdc69,	// (0x00063c28) list_single_dyc_row_pane

0xa96c,	// (0x0006092b) call5_gesture_pane_ParamLimits

0xa96c,	// (0x0006092b) call5_gesture_pane

0xa9c2,	// (0x00060981) call5_windows_pane_ParamLimits

0xa9c2,	// (0x00060981) call5_windows_pane

0xaa68,	// (0x00060a27) call5_swipe_1_pane_cp_ParamLimits

0xaa68,	// (0x00060a27) call5_swipe_1_pane_cp

0xaa74,	// (0x00060a33) call5_swipe_2_pane_cp_ParamLimits

0xaa74,	// (0x00060a33) call5_swipe_2_pane_cp

0x088c,	// (0x0005684b) call5_image_pane_cp

0xaa80,	// (0x00060a3f) popup_call5_audio_first_window_cp_ParamLimits

0xaa80,	// (0x00060a3f) popup_call5_audio_first_window_cp

0xe234,	// (0x000641f3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe234,	// (0x000641f3) call5_swipe_1_pane_g1_cp

0xe274,	// (0x00064233) call5_swipe_1_pane_g2_cp

0xe24d,	// (0x0006420c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe24d,	// (0x0006420c) call5_swipe_1_pane_t1_cp

0xe234,	// (0x000641f3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe234,	// (0x000641f3) call5_swipe_2_pane_g1_cp

0xe27c,	// (0x0006423b) call5_swipe_2_pane_g2_cp

0xe284,	// (0x00064243) call5_swipe_2_pane_t1_cp_ParamLimits

0xe284,	// (0x00064243) call5_swipe_2_pane_t1_cp

0x1c99,	// (0x00057c58) main_sp_fs_email_pane

0xe299,	// (0x00064258) main_sp_fs_listscroll_pane_te

0xe2a2,	// (0x00064261) popup_sp_fs_action_menu_pane_ParamLimits

0xe2a2,	// (0x00064261) popup_sp_fs_action_menu_pane

0x20e2,	// (0x000580a1) bg_sp_fs_ctrlbar_pane_g1

0xe2e2,	// (0x000642a1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2eb,	// (0x000642aa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2f4,	// (0x000642b3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x20e2,	// (0x000580a1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00065caf) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1ec5,	// (0x00057e84) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1ec5,	// (0x00057e84) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2fd,	// (0x000642bc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2fd,	// (0x000642bc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe309,	// (0x000642c8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe309,	// (0x000642c8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00065cb8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00065cb8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe315,	// (0x000642d4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe315,	// (0x000642d4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe32f,	// (0x000642ee) list_medium_line_t2_right_icon_g1

0xaa8c,	// (0x00060a4b) list_medium_line_t2_right_icon_t1

0xaa9c,	// (0x00060a5b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00065cbd) list_medium_line_t2_right_icon_t

0x1c8b,	// (0x00057c4a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1c8b,	// (0x00057c4a) bg_sp_fs_ctrlbar_pane

0xaaf4,	// (0x00060ab3) main_sp_fs_ctrlbar_button_pane_cp01

0xaafc,	// (0x00060abb) main_sp_fs_ctrlbar_ddmenu_pane

0x2393,	// (0x00058352) main_sp_fs_ctrlbar_pane_g1

0xe36f,	// (0x0006432e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00065cc2) main_sp_fs_ctrlbar_pane_g

0xe37b,	// (0x0006433a) main_sp_fs_ctrlbar_pane_t1

0xab06,	// (0x00060ac5) main_sp_fs_ctrlbar_pane

0xab2a,	// (0x00060ae9) main_sp_fs_listscroll_pane_te_cp01

0xab4a,	// (0x00060b09) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xab4a,	// (0x00060b09) popup_sp_fs_action_menu_pane_cp01

0x1c99,	// (0x00057c58) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1c99,	// (0x00057c58) bg_sp_fs_highlight_list_pane_cp01

0xe390,	// (0x0006434f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe390,	// (0x0006434f) sp_fs_action_menu_list_gene_pane_g1

0xe39f,	// (0x0006435e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe39f,	// (0x0006435e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00065cc7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00065cc7) sp_fs_action_menu_list_gene_pane_g

0xe3ac,	// (0x0006436b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ac,	// (0x0006436b) sp_fs_action_menu_list_gene_pane_t1

0xe3c4,	// (0x00064383) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3c4,	// (0x00064383) sp_fs_action_menu_list_gene_pane

0xe3e1,	// (0x000643a0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3e1,	// (0x000643a0) popup_sp_fs_action_menu_bg_pane

0xe3ef,	// (0x000643ae) sp_fs_action_menu_list_pane_ParamLimits

0xe3ef,	// (0x000643ae) sp_fs_action_menu_list_pane

0xe40d,	// (0x000643cc) sp_fs_scroll_pane_cp01_ParamLimits

0xe40d,	// (0x000643cc) sp_fs_scroll_pane_cp01

0xab64,	// (0x00060b23) list_medium_line_plain_t2_t1

0xab74,	// (0x00060b33) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00065ccc) list_medium_line_plain_t2_t

0xab84,	// (0x00060b43) list_medium_line_plain_t3_t1

0xab94,	// (0x00060b53) list_medium_line_plain_t3_t2

0xaba2,	// (0x00060b61) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00065cd1) list_medium_line_plain_t3_t

0x406b,	// (0x0005a02a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t2_g2_g1

0x4083,	// (0x0005a042) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4083,	// (0x0005a042) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00065238) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00065238) list_medium_line_x2_t2_g2_g

0x4f2d,	// (0x0005aeec) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4f2d,	// (0x0005aeec) list_medium_line_x2_t2_g2_t1

0x40b8,	// (0x0005a077) list_medium_line_x2_t2_g2_t2_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00065cd8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00065cd8) list_medium_line_x2_t2_g2_t

0x406b,	// (0x0005a02a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t4_g2_g1

0xe433,	// (0x000643f2) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe433,	// (0x000643f2) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x00065cdd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x00065cdd) list_medium_line_x2_t4_g2_g

0xabb0,	// (0x00060b6f) list_medium_line_x2_t4_g2_t1_ParamLimits

0xabb0,	// (0x00060b6f) list_medium_line_x2_t4_g2_t1

0xabc7,	// (0x00060b86) list_medium_line_x2_t4_g2_t2_ParamLimits

0xabc7,	// (0x00060b86) list_medium_line_x2_t4_g2_t2

0xabdc,	// (0x00060b9b) list_medium_line_x2_t4_g2_t3_ParamLimits

0xabdc,	// (0x00060b9b) list_medium_line_x2_t4_g2_t3

0x40b8,	// (0x0005a077) list_medium_line_x2_t4_g2_t4_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x00065ce2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x00065ce2) list_medium_line_x2_t4_g2_t

0xe445,	// (0x00064404) list_medium_line_t3_right_iconx2_g1

0xe32f,	// (0x000642ee) list_medium_line_t3_right_iconx2_g2

0xabee,	// (0x00060bad) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x00065ceb) list_medium_line_t3_right_iconx2_g

0xabf8,	// (0x00060bb7) list_medium_line_t3_right_iconx2_t1

0xac08,	// (0x00060bc7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x00065cf2) list_medium_line_t3_right_iconx2_t

0x406b,	// (0x0005a02a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x3_t4_g4_g1

0x4077,	// (0x0005a036) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x3_t4_g4_g2

0x4101,	// (0x0005a0c0) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4101,	// (0x0005a0c0) list_medium_line_x3_t4_g4_g3

0xe44d,	// (0x0006440c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe44d,	// (0x0006440c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x00065cf7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x00065cf7) list_medium_line_x3_t4_g4_g

0xac16,	// (0x00060bd5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xac16,	// (0x00060bd5) list_medium_line_x3_t4_g4_t1

0xac2d,	// (0x00060bec) list_medium_line_x3_t4_g4_t2_ParamLimits

0xac2d,	// (0x00060bec) list_medium_line_x3_t4_g4_t2

0x4f42,	// (0x0005af01) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4f42,	// (0x0005af01) list_medium_line_x3_t4_g4_t3

0xe459,	// (0x00064418) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe459,	// (0x00064418) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x00065d00) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x00065d00) list_medium_line_x3_t4_g4_t

0xac46,	// (0x00060c05) list_single_dyc_row_text_pane_t1_ParamLimits

0xac46,	// (0x00060c05) list_single_dyc_row_text_pane_t1

0xac8f,	// (0x00060c4e) list_single_dyc_row_text_pane_t2_ParamLimits

0xac8f,	// (0x00060c4e) list_single_dyc_row_text_pane_t2

0xe476,	// (0x00064435) list_single_dyc_row_text_pane_t3_ParamLimits

0xe476,	// (0x00064435) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x00065d09) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x00065d09) list_single_dyc_row_text_pane_t

0xe488,	// (0x00064447) list_single_dyc_row_pane_g1_ParamLimits

0xe488,	// (0x00064447) list_single_dyc_row_pane_g1

0xe494,	// (0x00064453) list_single_dyc_row_pane_g2_ParamLimits

0xe494,	// (0x00064453) list_single_dyc_row_pane_g2

0xe4a0,	// (0x0006445f) list_single_dyc_row_pane_g3_ParamLimits

0xe4a0,	// (0x0006445f) list_single_dyc_row_pane_g3

0xe4ac,	// (0x0006446b) list_single_dyc_row_pane_g4_ParamLimits

0xe4ac,	// (0x0006446b) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x00065d10) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x00065d10) list_single_dyc_row_pane_g

0xe4b8,	// (0x00064477) list_single_dyc_row_text_pane_ParamLimits

0xe4b8,	// (0x00064477) list_single_dyc_row_text_pane

0xbd72,	// (0x00061d31) bg_sp_fs_scroll_pane

0xe4d7,	// (0x00064496) thumb_sp_fs_scroll_pane

0xd340,	// (0x000632ff) list_medium_line_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_g1

0xe4e0,	// (0x0006449f) list_medium_line_t1_ParamLimits

0xe4e0,	// (0x0006449f) list_medium_line_t1

0x406b,	// (0x0005a02a) list_medium_line_x2_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_g1

0x4077,	// (0x0005a036) list_medium_line_x2_g2_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x00065d19) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x00065d19) list_medium_line_x2_g

0xe4f5,	// (0x000644b4) list_medium_line_x2_t1_ParamLimits

0xe4f5,	// (0x000644b4) list_medium_line_x2_t1

0x406b,	// (0x0005a02a) list_medium_line_x3_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x3_g1

0x4077,	// (0x0005a036) list_medium_line_x3_g2_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x00065d19) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x00065d19) list_medium_line_x3_g

0xe4f5,	// (0x000644b4) list_medium_line_x3_t1_ParamLimits

0xe4f5,	// (0x000644b4) list_medium_line_x3_t1

0xe50b,	// (0x000644ca) thumb_sp_fs_scroll_pane_g1

0xe514,	// (0x000644d3) thumb_sp_fs_scroll_pane_g2

0xe51d,	// (0x000644dc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00065d1e) thumb_sp_fs_scroll_pane_g

0xe50b,	// (0x000644ca) bg_sp_fs_scroll_pane_g1

0xe514,	// (0x000644d3) bg_sp_fs_scroll_pane_g2

0xe51d,	// (0x000644dc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00065d1e) bg_sp_fs_scroll_pane_g

0x406b,	// (0x0005a02a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x406b,	// (0x0005a02a) list_medium_line_x2_t3_g4_g1

0x40f5,	// (0x0005a0b4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x40f5,	// (0x0005a0b4) list_medium_line_x2_t3_g4_g2

0x4077,	// (0x0005a036) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4077,	// (0x0005a036) list_medium_line_x2_t3_g4_g3

0x4083,	// (0x0005a042) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4083,	// (0x0005a042) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000652b4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000652b4) list_medium_line_x2_t3_g4_g

0xace9,	// (0x00060ca8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xace9,	// (0x00060ca8) list_medium_line_x2_t3_g4_t1

0xacff,	// (0x00060cbe) list_medium_line_x2_t3_g4_t2_ParamLimits

0xacff,	// (0x00060cbe) list_medium_line_x2_t3_g4_t2

0x40b8,	// (0x0005a077) list_medium_line_x2_t3_g4_t3_ParamLimits

0x40b8,	// (0x0005a077) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x00065d25) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x00065d25) list_medium_line_x2_t3_g4_t

0xd340,	// (0x000632ff) list_medium_line_g2_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_g2_g1

0xd34c,	// (0x0006330b) list_medium_line_g2_g2_ParamLimits

0xd34c,	// (0x0006330b) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x000659ed) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x000659ed) list_medium_line_g2_g

0xe526,	// (0x000644e5) list_medium_line_g2_t1_ParamLimits

0xe526,	// (0x000644e5) list_medium_line_g2_t1

0xd340,	// (0x000632ff) list_medium_line_t3_g2_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_t3_g2_g1

0xd34c,	// (0x0006330b) list_medium_line_t3_g2_g2_ParamLimits

0xd34c,	// (0x0006330b) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x000659ed) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x000659ed) list_medium_line_t3_g2_g

0xad18,	// (0x00060cd7) list_medium_line_t3_g2_t1_ParamLimits

0xad18,	// (0x00060cd7) list_medium_line_t3_g2_t1

0xad2f,	// (0x00060cee) list_medium_line_t3_g2_t2_ParamLimits

0xad2f,	// (0x00060cee) list_medium_line_t3_g2_t2

0xad44,	// (0x00060d03) list_medium_line_t3_g2_t3_ParamLimits

0xad44,	// (0x00060d03) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x00065d2c) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x00065d2c) list_medium_line_t3_g2_t

0xe32f,	// (0x000642ee) list_medium_line_right_icon_g1

0xe53b,	// (0x000644fa) list_medium_line_right_icon_t1

0xd340,	// (0x000632ff) list_medium_line_t2_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_t2_g1

0xad5d,	// (0x00060d1c) list_medium_line_t2_t1_ParamLimits

0xad5d,	// (0x00060d1c) list_medium_line_t2_t1

0xad74,	// (0x00060d33) list_medium_line_t2_t2_ParamLimits

0xad74,	// (0x00060d33) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x00065d33) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x00065d33) list_medium_line_t2_t

0xd340,	// (0x000632ff) list_medium_line_t3_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_t3_g1

0xad86,	// (0x00060d45) list_medium_line_t3_t1_ParamLimits

0xad86,	// (0x00060d45) list_medium_line_t3_t1

0xad9d,	// (0x00060d5c) list_medium_line_t3_t2_ParamLimits

0xad9d,	// (0x00060d5c) list_medium_line_t3_t2

0xadb2,	// (0x00060d71) list_medium_line_t3_t3_ParamLimits

0xadb2,	// (0x00060d71) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x00065d38) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x00065d38) list_medium_line_t3_t

0xd340,	// (0x000632ff) list_medium_line_g3_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_g3_g1

0xe549,	// (0x00064508) list_medium_line_g3_g2_ParamLimits

0xe549,	// (0x00064508) list_medium_line_g3_g2

0xd34c,	// (0x0006330b) list_medium_line_g3_g3_ParamLimits

0xd34c,	// (0x0006330b) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x00065d3f) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x00065d3f) list_medium_line_g3_g

0xe555,	// (0x00064514) list_medium_line_g3_t1_ParamLimits

0xe555,	// (0x00064514) list_medium_line_g3_t1

0xd340,	// (0x000632ff) list_medium_line_t2_g3_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_t2_g3_g1

0xe549,	// (0x00064508) list_medium_line_t2_g3_g2_ParamLimits

0xe549,	// (0x00064508) list_medium_line_t2_g3_g2

0xd34c,	// (0x0006330b) list_medium_line_t2_g3_g3_ParamLimits

0xd34c,	// (0x0006330b) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x00065d3f) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x00065d3f) list_medium_line_t2_g3_g

0xadc4,	// (0x00060d83) list_medium_line_t2_g3_t1_ParamLimits

0xadc4,	// (0x00060d83) list_medium_line_t2_g3_t1

0xadde,	// (0x00060d9d) list_medium_line_t2_g3_t2_ParamLimits

0xadde,	// (0x00060d9d) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x00065d46) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x00065d46) list_medium_line_t2_g3_t

0xd340,	// (0x000632ff) list_medium_line_t3_g3_g1_ParamLimits

0xd340,	// (0x000632ff) list_medium_line_t3_g3_g1

0xe549,	// (0x00064508) list_medium_line_t3_g3_g2_ParamLimits

0xe549,	// (0x00064508) list_medium_line_t3_g3_g2

0xd34c,	// (0x0006330b) list_medium_line_t3_g3_g3_ParamLimits

0xd34c,	// (0x0006330b) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x00065d3f) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x00065d3f) list_medium_line_t3_g3_g

0xadf5,	// (0x00060db4) list_medium_line_t3_g3_t1_ParamLimits

0xadf5,	// (0x00060db4) list_medium_line_t3_g3_t1

0xae09,	// (0x00060dc8) list_medium_line_t3_g3_t2_ParamLimits

0xae09,	// (0x00060dc8) list_medium_line_t3_g3_t2

0xae1b,	// (0x00060dda) list_medium_line_t3_g3_t3_ParamLimits

0xae1b,	// (0x00060dda) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x00065d4b) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x00065d4b) list_medium_line_t3_g3_t

0xe445,	// (0x00064404) list_medium_line_right_iconx2_g1

0xe32f,	// (0x000642ee) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x00065d52) list_medium_line_right_iconx2_g

0xe56a,	// (0x00064529) list_medium_line_right_iconx2_t1

0xe445,	// (0x00064404) list_medium_line_t2_right_iconx2_g1

0xe32f,	// (0x000642ee) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x00065d52) list_medium_line_t2_right_iconx2_g

0xae2f,	// (0x00060dee) list_medium_line_t2_right_iconx2_t1

0xae3f,	// (0x00060dfe) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x00065d57) list_medium_line_t2_right_iconx2_t

0xe578,	// (0x00064537) list_medium_line_x4_t4_t1

0xae4d,	// (0x00060e0c) list_medium_line_x4_t4_t2

0xae5d,	// (0x00060e1c) list_medium_line_x4_t4_t3

0xae6d,	// (0x00060e2c) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x00065d5c) list_medium_line_x4_t4_t

0xaec0,	// (0x00060e7f) tport_appsw_pane_ParamLimits

0xaec0,	// (0x00060e7f) tport_appsw_pane

0xaed1,	// (0x00060e90) tport_contact_pane_ParamLimits

0xaed1,	// (0x00060e90) tport_contact_pane

0xaeea,	// (0x00060ea9) tport_listscroll_pane_ParamLimits

0xaeea,	// (0x00060ea9) tport_listscroll_pane

0xaf05,	// (0x00060ec4) cell_tport_appsw_pane_ParamLimits

0xaf05,	// (0x00060ec4) cell_tport_appsw_pane

0xd09f,	// (0x0006305e) tport_appsw_pane_g1_ParamLimits

0xd09f,	// (0x0006305e) tport_appsw_pane_g1

0xe586,	// (0x00064545) tport_contact_pane_g1

0xe58f,	// (0x0006454e) tport_contact_pane_t1

0xe59d,	// (0x0006455c) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x00065d65) tport_contact_pane_t

0xe5ab,	// (0x0006456a) list_tport_pane

0xe5b4,	// (0x00064573) scroll_pane_cp_030

0xe5c5,	// (0x00064584) cell_tport_appsw_pane_g1

0xe5d5,	// (0x00064594) cell_tport_appsw_pane_t1

0xbd72,	// (0x00061d31) grid_highlight_pane_cp019

0xaf45,	// (0x00060f04) list_tport_double_graphic_pane_ParamLimits

0xaf45,	// (0x00060f04) list_tport_double_graphic_pane

0x1c99,	// (0x00057c58) list_highlight_pane_cp023_ParamLimits

0x1c99,	// (0x00057c58) list_highlight_pane_cp023

0xaf52,	// (0x00060f11) list_tport_double_graphic_pane_g1_ParamLimits

0xaf52,	// (0x00060f11) list_tport_double_graphic_pane_g1

0xaf5f,	// (0x00060f1e) list_tport_double_graphic_pane_t1_ParamLimits

0xaf5f,	// (0x00060f1e) list_tport_double_graphic_pane_t1

0xaf74,	// (0x00060f33) list_tport_double_graphic_pane_t2_ParamLimits

0xaf74,	// (0x00060f33) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x00065d71) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x00065d71) list_tport_double_graphic_pane_t

0xbd72,	// (0x00061d31) main_cale_note_pane

0x8e85,	// (0x0005ee44) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8e85,	// (0x0005ee44) cell_vitu2_function_top_wide_pane_cp01

0xa62a,	// (0x000605e9) wait_bar_pane_cp05_ParamLimits

0xbd72,	// (0x00061d31) listscroll_cmail_pane

0xe5eb,	// (0x000645aa) list_cmail_pane

0xaf90,	// (0x00060f4f) list_cmail_body_pane

0xafa8,	// (0x00060f67) list_single_cmail_header_caption_pane

0xafc4,	// (0x00060f83) list_single_cmail_header_detail_pane_ParamLimits

0xafc4,	// (0x00060f83) list_single_cmail_header_detail_pane

0xaff0,	// (0x00060faf) list_single_cmail_header_caption_pane_t1

0xb000,	// (0x00060fbf) list_single_cmail_header_detail_pane_g1_ParamLimits

0xb000,	// (0x00060fbf) list_single_cmail_header_detail_pane_g1

0xe60b,	// (0x000645ca) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe60b,	// (0x000645ca) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x00065d76) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x00065d76) list_single_cmail_header_detail_pane_g

0xe624,	// (0x000645e3) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe624,	// (0x000645e3) list_single_cmail_header_detail_pane_t1

0xe656,	// (0x00064615) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe656,	// (0x00064615) list_single_cmail_header_editor_pane_bg

0xe668,	// (0x00064627) list_cmail_body_pane_g1

0xe671,	// (0x00064630) list_cmail_body_pane_t1

0xd10e,	// (0x000630cd) list_single_cmail_header_editor_pane_bg_g1

0xca89,	// (0x00062a48) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd11e,	// (0x000630dd) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd116,	// (0x000630d5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd338,	// (0x000632f7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd13e,	// (0x000630fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd12e,	// (0x000630ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd136,	// (0x000630f5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xca69,	// (0x00062a28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb03e,	// (0x00060ffd) calenote_gesture_pane_ParamLimits

0xb03e,	// (0x00060ffd) calenote_gesture_pane

0xb05e,	// (0x0006101d) calenote_window_pane_ParamLimits

0xb05e,	// (0x0006101d) calenote_window_pane

0xe67f,	// (0x0006463e) popup_note_window_cp01

0xb07a,	// (0x00061039) calenote_swipe_1_pane_ParamLimits

0xb07a,	// (0x00061039) calenote_swipe_1_pane

0xaa74,	// (0x00060a33) calenote_swipe_2_pane_ParamLimits

0xaa74,	// (0x00060a33) calenote_swipe_2_pane

0xe234,	// (0x000641f3) calenote_swipe_1_pane_g1_ParamLimits

0xe234,	// (0x000641f3) calenote_swipe_1_pane_g1

0xe241,	// (0x00064200) calenote_swipe_1_pane_g2_ParamLimits

0xe241,	// (0x00064200) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00065ca5) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00065ca5) calenote_swipe_1_pane_g

0xe691,	// (0x00064650) calenote_swipe_1_pane_t1_ParamLimits

0xe691,	// (0x00064650) calenote_swipe_1_pane_t1

0xe234,	// (0x000641f3) calenote_swipe_2_pane_g1_ParamLimits

0xe234,	// (0x000641f3) calenote_swipe_2_pane_g1

0xe6b0,	// (0x0006466f) calenote_swipe_2_pane_g2_ParamLimits

0xe6b0,	// (0x0006466f) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x00065d82) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x00065d82) calenote_swipe_2_pane_g

0xe6bc,	// (0x0006467b) calenote_swipe_2_pane_t1_ParamLimits

0xe6bc,	// (0x0006467b) calenote_swipe_2_pane_t1

0xbd72,	// (0x00061d31) main_mup_navstr_pane

0x75bd,	// (0x0005d57c) main_mup3_pane_t7_ParamLimits

0x75bd,	// (0x0005d57c) main_mup3_pane_t7

0xcd9b,	// (0x00062d5a) main_mp4_pane_g6_ParamLimits

0xcd9b,	// (0x00062d5a) main_mp4_pane_g6

0xef31,	// (0x00064ef0) main_image3_pane_t4_ParamLimits

0xef31,	// (0x00064ef0) main_image3_pane_t4

0xb08f,	// (0x0006104e) popup_navstr_preview_pane_ParamLimits

0xb08f,	// (0x0006104e) popup_navstr_preview_pane

0xb0a3,	// (0x00061062) scroll_navstr_pane_ParamLimits

0xb0a3,	// (0x00061062) scroll_navstr_pane

0xbd72,	// (0x00061d31) bg_popup_preview_window_pane_cp04

0xe6e3,	// (0x000646a2) popup_navstr_preview_pane_t1

0xb0b7,	// (0x00061076) scroll_navstr_pane_g1_ParamLimits

0xb0b7,	// (0x00061076) scroll_navstr_pane_g1

0xb0cb,	// (0x0006108a) scroll_navstr_pane_t1_ParamLimits

0xb0cb,	// (0x0006108a) scroll_navstr_pane_t1

0xe688,	// (0x00064647) bg_button_pane_cp014

0xe688,	// (0x00064647) bg_button_pane_cp030

0xa912,	// (0x000608d1) list_double_fisheye_pane_g4_ParamLimits

0xa912,	// (0x000608d1) list_double_fisheye_pane_g4

0xa91e,	// (0x000608dd) list_double_fisheye_pane_g5_ParamLimits

0xa91e,	// (0x000608dd) list_double_fisheye_pane_g5

0xe5f3,	// (0x000645b2) sp_fs_scroll_pane_cp03

0x2393,	// (0x00058352) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe36f,	// (0x0006432e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00065cc2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe37b,	// (0x0006433a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xaf86,	// (0x00060f45) sp_fs_scroll_pane_cp02

0xc70d,	// (0x000626cc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc70d,	// (0x000626cc) popup_sp_fs_calendar_preview_list_single_pane

0xbd72,	// (0x00061d31) main_cam6_pano_pane

0x1c99,	// (0x00057c58) main_mup3_pane_ParamLimits

0xbd72,	// (0x00061d31) main_phacti_pane

0xa4fd,	// (0x000604bc) bg_button_pane_cp11

0xa517,	// (0x000604d6) main_mobtv_info_pane_g2_ParamLimits

0xa517,	// (0x000604d6) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00065c22) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00065c22) main_mobtv_info_pane_g

0xa6f2,	// (0x000606b1) sc_clock_pane_t5_ParamLimits

0xa6f2,	// (0x000606b1) sc_clock_pane_t5

0xa777,	// (0x00060736) main_radioblah_pane_g1_ParamLimits

0xe177,	// (0x00064136) main_radioblah_pane_t3_ParamLimits

0xe177,	// (0x00064136) main_radioblah_pane_t3

0xe18f,	// (0x0006414e) main_radioblah_pane_t4_ParamLimits

0xe18f,	// (0x0006414e) main_radioblah_pane_t4

0xa79f,	// (0x0006075e) main_radioblah_text_pane_ParamLimits

0xa79f,	// (0x0006075e) main_radioblah_text_pane

0xa7b1,	// (0x00060770) main_radioblah_info_pane_g1_ParamLimits

0xa84c,	// (0x0006080b) main_radioblah_info_pane_t4_ParamLimits

0xa84c,	// (0x0006080b) main_radioblah_info_pane_t4

0x1c99,	// (0x00057c58) main_sp_fs_calendar_pane

0xb0e1,	// (0x000610a0) main_phacti_pane_g1

0xb0e9,	// (0x000610a8) phacti_note_pane_ParamLimits

0xb0e9,	// (0x000610a8) phacti_note_pane

0xe6fa,	// (0x000646b9) phacti_term_pane_ParamLimits

0xe6fa,	// (0x000646b9) phacti_term_pane

0xe70f,	// (0x000646ce) phacti_note_pane_t1_ParamLimits

0xe70f,	// (0x000646ce) phacti_note_pane_t1

0xe726,	// (0x000646e5) phacti_term_pane_g1

0xe72e,	// (0x000646ed) phacti_term_pane_t1_ParamLimits

0xe72e,	// (0x000646ed) phacti_term_pane_t1

0xe758,	// (0x00064717) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe760,	// (0x0006471f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x00065d8c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe768,	// (0x00064727) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe768,	// (0x00064727) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe77e,	// (0x0006473d) aid_popup_sp_fs_bg_corner_pane

0x20e2,	// (0x000580a1) popup_sp_fs_calendar_preview_bg_pane_g1

0xbd72,	// (0x00061d31) popup_sp_fs_calendar_preview_bg_pane

0xe786,	// (0x00064745) popup_sp_fs_calendar_preview_list_pane

0x1c99,	// (0x00057c58) bg_main_sp_fs_cale_pane_ParamLimits

0x1c99,	// (0x00057c58) bg_main_sp_fs_cale_pane

0xe78e,	// (0x0006474d) listscroll_cale_mrui_pane_ParamLimits

0xe78e,	// (0x0006474d) listscroll_cale_mrui_pane

0xe7a2,	// (0x00064761) listscroll_sp_fs_schedule_track_pane

0xe7ab,	// (0x0006476a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7ab,	// (0x0006476a) main_sp_fs_ctrlbar_pane_cp01

0xe7bc,	// (0x0006477b) main_sp_fs_ribbon_pane

0xe7c4,	// (0x00064783) popup_sp_fs_cale_preview_window

0xb144,	// (0x00061103) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb144,	// (0x00061103) list_single_sp_fs_schedule_track_pane

0x1c99,	// (0x00057c58) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1c99,	// (0x00057c58) bg_sp_fs_highlight_list_pane_cp03

0xb15a,	// (0x00061119) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb15a,	// (0x00061119) list_single_sp_fs_schedule_track_pane_g1

0xb166,	// (0x00061125) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb166,	// (0x00061125) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x00065d91) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x00065d91) list_single_sp_fs_schedule_track_pane_g

0xb172,	// (0x00061131) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb172,	// (0x00061131) list_single_sp_fs_schedule_track_pane_t1

0xb18c,	// (0x0006114b) sp_fs_schedule_track_pane_ParamLimits

0xb18c,	// (0x0006114b) sp_fs_schedule_track_pane

0xe7d6,	// (0x00064795) sp_fs_schedule_track_pane_g1

0xe7de,	// (0x0006479d) sp_fs_schedule_track_pane_g2

0xe7e6,	// (0x000647a5) sp_fs_schedule_track_pane_g3

0xe7ee,	// (0x000647ad) sp_fs_schedule_track_pane_g4

0xe7f6,	// (0x000647b5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x00065d96) sp_fs_schedule_track_pane_g

0xd10e,	// (0x000630cd) bg_sp_fs_schedule_viewer_highlight_g1

0xca89,	// (0x00062a48) bg_sp_fs_schedule_viewer_highlight_g2

0xd116,	// (0x000630d5) bg_sp_fs_schedule_viewer_highlight_g3

0xd11e,	// (0x000630dd) bg_sp_fs_schedule_viewer_highlight_g4

0xd338,	// (0x000632f7) bg_sp_fs_schedule_viewer_highlight_g5

0xd12e,	// (0x000630ed) bg_sp_fs_schedule_viewer_highlight_g6

0xd136,	// (0x000630f5) bg_sp_fs_schedule_viewer_highlight_g7

0xd13e,	// (0x000630fd) bg_sp_fs_schedule_viewer_highlight_g8

0xca69,	// (0x00062a28) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x00065da1) bg_sp_fs_schedule_viewer_highlight_g

0xbd72,	// (0x00061d31) bg_main_sp_fs_ribbon_pane

0xb19d,	// (0x0006115c) main_sp_fs_ribbon_pane_g1

0xe7fe,	// (0x000647bd) main_sp_fs_ribbon_pane_t1

0xb1a6,	// (0x00061165) main_sp_fs_ribbon_pane_t2

0xe80d,	// (0x000647cc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x00065db4) main_sp_fs_ribbon_pane_t

0xe81c,	// (0x000647db) main_sp_fs_ribbon_scheduler_pane

0xe824,	// (0x000647e3) bg_main_sp_fs_ribbon_pane_g1

0xe82d,	// (0x000647ec) bg_main_sp_fs_ribbon_pane_g2

0xe836,	// (0x000647f5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x00065dbb) bg_main_sp_fs_ribbon_pane_g

0xe83e,	// (0x000647fd) main_sp_fs_ribbon_scheduler_pane_g1

0xe847,	// (0x00064806) main_sp_fs_ribbon_scheduler_pane_g2

0xe850,	// (0x0006480f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x00065dc2) main_sp_fs_ribbon_scheduler_pane_g

0xe859,	// (0x00064818) list_cale_mrui_pane

0xb1b5,	// (0x00061174) sp_fs_scroll_pane_cp07_ParamLimits

0xb1b5,	// (0x00061174) sp_fs_scroll_pane_cp07

0xb1cb,	// (0x0006118a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb1cb,	// (0x0006118a) bg_sp_fs_schedule_viewer_highlight

0xe862,	// (0x00064821) list_single_sp_fs_schedule_track_pane_cp01

0xe86a,	// (0x00064829) list_sp_fs_schedule_track_pane

0xe872,	// (0x00064831) sp_fs_scroll_pane_cp06_ParamLimits

0xe872,	// (0x00064831) sp_fs_scroll_pane_cp06

0x20e2,	// (0x000580a1) bgmain_sp_fs_calendar_pane_g1

0xb1db,	// (0x0006119a) list_single_cale_mrui_pane_ParamLimits

0xb1db,	// (0x0006119a) list_single_cale_mrui_pane

0xe884,	// (0x00064843) list_single_cale_mrui_row_pane_ParamLimits

0xe884,	// (0x00064843) list_single_cale_mrui_row_pane

0xe891,	// (0x00064850) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe891,	// (0x00064850) list_single_cale_mrui_row_pane_g1

0xe8c9,	// (0x00064888) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8c9,	// (0x00064888) list_single_cale_mrui_row_pane_t1

0xb1fe,	// (0x000611bd) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb1fe,	// (0x000611bd) list_single_cale_mrui_row_pane_t2

0xe8db,	// (0x0006489a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8db,	// (0x0006489a) list_single_cale_mrui_row_pane_t3

0xe90a,	// (0x000648c9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe90a,	// (0x000648c9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x00065dce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x00065dce) list_single_cale_mrui_row_pane_t

0xb266,	// (0x00061225) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb266,	// (0x00061225) list_single_cmail_header_editor_pane_bg_cp01

0xb28c,	// (0x0006124b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb28c,	// (0x0006124b) list_single_cmail_header_editor_pane_bg_cp02

0xb2ac,	// (0x0006126b) main_radioblah_text_pane_t1_ParamLimits

0xb2ac,	// (0x0006126b) main_radioblah_text_pane_t1

0xe939,	// (0x000648f8) cam6_indi_pane_cp01

0xe941,	// (0x00064900) cam6_mode_pane_cp01

0xe949,	// (0x00064908) cam6_pano_pane

0xe952,	// (0x00064911) cam6_zoom_pane_cp01

0xe95a,	// (0x00064919) cam6_pano_image_pane

0xe965,	// (0x00064924) cam6_pano_pane_g1

0xdeef,	// (0x00063eae) cam6_pano_pane_g2

0xe96e,	// (0x0006492d) cam6_pano_pane_g3

0xe977,	// (0x00064936) cam6_pano_pane_g4

0x7f66,	// (0x0005df25) cam6_pano_pane_g5

0xe980,	// (0x0006493f) cam6_pano_pane_g6

0xe98a,	// (0x00064949) cam6_pano_pane_g7

0xe992,	// (0x00064951) cam6_pano_pane_g8

0xe99b,	// (0x0006495a) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00065dd7) cam6_pano_pane_g

0xbd72,	// (0x00061d31) main_browser_tag_pane

0xe6db,	// (0x0006469a) grid_navstr_albumart_pane

0xe9a6,	// (0x00064965) cell_navstr_albumart_pane_ParamLimits

0xe9a6,	// (0x00064965) cell_navstr_albumart_pane

0x09ed,	// (0x000569ac) cell_navstr_albumart_pane_g1

0x1aa8,	// (0x00057a67) cell_navstr_albumart_pane_g2

0x1ab8,	// (0x00057a77) cell_navstr_albumart_pane_g3

0x1ab0,	// (0x00057a6f) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x00065dea) cell_navstr_albumart_pane_g

0xb2c7,	// (0x00061286) bt_list_pane_ParamLimits

0xb2c7,	// (0x00061286) bt_list_pane

0xb2dc,	// (0x0006129b) bt_list_pane_t1

0xb2eb,	// (0x000612aa) bt_list_pane_t2

0x0001,

0xfe34,	// (0x00065df3) bt_list_pane_t

0xbd72,	// (0x00061d31) main_cale_prevew_pane

0xb2fa,	// (0x000612b9) popup_cale_preview_window_ParamLimits

0xb2fa,	// (0x000612b9) popup_cale_preview_window

0x1c99,	// (0x00057c58) bg_popup_preview_window_pane_cp05_ParamLimits

0x1c99,	// (0x00057c58) bg_popup_preview_window_pane_cp05

0xe9c8,	// (0x00064987) list_cale_preview_pane_ParamLimits

0xe9c8,	// (0x00064987) list_cale_preview_pane

0xb30f,	// (0x000612ce) list_double_cale_preview_pane_ParamLimits

0xb30f,	// (0x000612ce) list_double_cale_preview_pane

0xb321,	// (0x000612e0) list_single_cale_preview_pane_ParamLimits

0xb321,	// (0x000612e0) list_single_cale_preview_pane

0xb335,	// (0x000612f4) list_single_cale_preview_pane_g1

0xb33d,	// (0x000612fc) list_single_cale_preview_pane_t1_ParamLimits

0xb33d,	// (0x000612fc) list_single_cale_preview_pane_t1

0xb352,	// (0x00061311) list_double_cale_preview_pane_g1

0xb35a,	// (0x00061319) list_double_cale_preview_pane_t1_ParamLimits

0xb35a,	// (0x00061319) list_double_cale_preview_pane_t1

0xb36f,	// (0x0006132e) list_double_cale_preview_pane_t2_ParamLimits

0xb36f,	// (0x0006132e) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x00065df8) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x00065df8) list_double_cale_preview_pane_t

0xbd72,	// (0x00061d31) main_ezdial_pane

0x1c99,	// (0x00057c58) main_sp_fs_email_pane_ParamLimits

0xaaac,	// (0x00060a6b) cmail_ddmenu_btn01_pane_ParamLimits

0xaaac,	// (0x00060a6b) cmail_ddmenu_btn01_pane

0xaabf,	// (0x00060a7e) cmail_ddmenu_btn02_pane_ParamLimits

0xaabf,	// (0x00060a7e) cmail_ddmenu_btn02_pane

0xaae2,	// (0x00060aa1) cmail_ddmenu_btn03_pane_ParamLimits

0xaae2,	// (0x00060aa1) cmail_ddmenu_btn03_pane

0xab06,	// (0x00060ac5) main_sp_fs_ctrlbar_pane_ParamLimits

0xab2a,	// (0x00060ae9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xaf90,	// (0x00060f4f) list_cmail_body_pane_ParamLimits

0xe602,	// (0x000645c1) bg_button_pane_cp12

0xe617,	// (0x000645d6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe617,	// (0x000645d6) list_single_cmail_header_detail_pane_g3

0xb018,	// (0x00060fd7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xb018,	// (0x00060fd7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x00065d7d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x00065d7d) list_single_cmail_header_detail_pane_t

0xe743,	// (0x00064702) phacti_term_pane_t2_ParamLimits

0xe743,	// (0x00064702) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00065d87) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00065d87) phacti_term_pane_t

0xe9d4,	// (0x00064993) aid_size_list_single_double

0xb387,	// (0x00061346) popup_ezdial_listscroll_window

0xb3a3,	// (0x00061362) popup_number_entry_window_cp01

0x088c,	// (0x0005684b) bg_popup_call_pane_cp09

0xe9e0,	// (0x0006499f) ezdial_list_pane

0xe9e8,	// (0x000649a7) scroll_pane_cp23

0x1c8b,	// (0x00057c4a) bg_button_pane_cp028_ParamLimits

0x1c8b,	// (0x00057c4a) bg_button_pane_cp028

0xb3b1,	// (0x00061370) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb3b1,	// (0x00061370) cmail_ddmenu_btn01_pane_g1

0xb3bd,	// (0x0006137c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb3bd,	// (0x0006137c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x00065dfd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x00065dfd) cmail_ddmenu_btn01_pane_g

0xe9f0,	// (0x000649af) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9f0,	// (0x000649af) cmail_ddmenu_btn01_pane_t1

0x1c8b,	// (0x00057c4a) bg_button_pane_cp029_ParamLimits

0x1c8b,	// (0x00057c4a) bg_button_pane_cp029

0xb3c9,	// (0x00061388) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb3c9,	// (0x00061388) cmail_ddmenu_btn02_pane_g1

0xb3e1,	// (0x000613a0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb3e1,	// (0x000613a0) cmail_ddmenu_btn02_pane_t1

0x1c99,	// (0x00057c58) bg_button_pane_cp031_ParamLimits

0x1c99,	// (0x00057c58) bg_button_pane_cp031

0xb3c9,	// (0x00061388) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb3c9,	// (0x00061388) cmail_ddmenu_btn03_pane_g1

0xb3e1,	// (0x000613a0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb3e1,	// (0x000613a0) cmail_ddmenu_btn03_pane_t1

0x8687,	// (0x0005e646) cell_dialer2_keypad_pane_t1_ParamLimits

0x86a1,	// (0x0005e660) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x86a1,	// (0x0005e660) cell_dialer2_keypad_pane_t1_copy1

0xa399,	// (0x00060358) ncimui_group_button_pane

0x1c99,	// (0x00057c58) main_sp_fs_calendar_pane_ParamLimits

0xafa8,	// (0x00060f67) list_single_cmail_header_caption_pane_ParamLimits

0xd67b,	// (0x0006363a) aid_recal_txt_sm_pane

0xbd72,	// (0x00061d31) mian_recal_day_pane

0xe7c4,	// (0x00064783) popup_sp_fs_cale_preview_window_ParamLimits

0xbd72,	// (0x00061d31) list_recal_day_pane

0xea1e,	// (0x000649dd) list_single_recal_day_pane_ParamLimits

0xea1e,	// (0x000649dd) list_single_recal_day_pane

0xea30,	// (0x000649ef) list_single_recal_day_pane_g1_ParamLimits

0xea30,	// (0x000649ef) list_single_recal_day_pane_g1

0xea3c,	// (0x000649fb) list_single_recal_day_pane_g2_ParamLimits

0xea3c,	// (0x000649fb) list_single_recal_day_pane_g2

0xea4b,	// (0x00064a0a) list_single_recal_day_pane_g3_ParamLimits

0xea4b,	// (0x00064a0a) list_single_recal_day_pane_g3

0xb405,	// (0x000613c4) list_single_recal_day_pane_g4_ParamLimits

0xb405,	// (0x000613c4) list_single_recal_day_pane_g4

0xea57,	// (0x00064a16) list_single_recal_day_pane_g5_ParamLimits

0xea57,	// (0x00064a16) list_single_recal_day_pane_g5

0xea66,	// (0x00064a25) list_single_recal_day_pane_g6_ParamLimits

0xea66,	// (0x00064a25) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x00065e0c) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x00065e0c) list_single_recal_day_pane_g

0xea72,	// (0x00064a31) list_single_recal_day_pane_t1

0xea80,	// (0x00064a3f) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x00065e19) list_single_recal_day_pane_t

0xb418,	// (0x000613d7) ncimui_query_button_pane_ParamLimits

0xb418,	// (0x000613d7) ncimui_query_button_pane

0xb428,	// (0x000613e7) ncimui_query_button_pane_t1_ParamLimits

0xb428,	// (0x000613e7) ncimui_query_button_pane_t1

0xea8e,	// (0x00064a4d) ncimui_query_button_pane_t2_ParamLimits

0xea8e,	// (0x00064a4d) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x00065e1e) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x00065e1e) ncimui_query_button_pane_t

0xb43b,	// (0x000613fa) query_button_pane_ParamLimits

0xb43b,	// (0x000613fa) query_button_pane

0xbd72,	// (0x00061d31) bg_button_pane_cp0028

0xeaa1,	// (0x00064a60) query_button_pane_t1

0x6192,	// (0x0005c151) main_tport_pane_ParamLimits

0xae7d,	// (0x00060e3c) bg_popup_window_pane_cp01_ParamLimits

0xae7d,	// (0x00060e3c) bg_popup_window_pane_cp01

0xae97,	// (0x00060e56) heading_pane_cp08_ParamLimits

0xae97,	// (0x00060e56) heading_pane_cp08

0xaeab,	// (0x00060e6a) heading_pane_cp07_ParamLimits

0xaeab,	// (0x00060e6a) heading_pane_cp07

0xe5c5,	// (0x00064584) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x00065d6a) cell_tport_appsw_pane_g

0x5733,	// (0x0005b6f2) input_candi_list_open_g1

0x03af,	// (0x0005636e) list_cale_time_pane_g6_ParamLimits

0x03af,	// (0x0005636e) list_cale_time_pane_g6

0x6f99,	// (0x0005cf58) aid_size_touch_calib_1_ParamLimits

0x6f99,	// (0x0005cf58) aid_size_touch_calib_1

0x6fa5,	// (0x0005cf64) aid_size_touch_calib_2_ParamLimits

0x6fa5,	// (0x0005cf64) aid_size_touch_calib_2

0x6fbb,	// (0x0005cf7a) aid_size_touch_calib_3_ParamLimits

0x6fbb,	// (0x0005cf7a) aid_size_touch_calib_3

0x6fd9,	// (0x0005cf98) aid_size_touch_calib_4_ParamLimits

0x6fd9,	// (0x0005cf98) aid_size_touch_calib_4

0x6fef,	// (0x0005cfae) main_touch_calib_button_group_pane_ParamLimits

0x6fef,	// (0x0005cfae) main_touch_calib_button_group_pane

0x7006,	// (0x0005cfc5) main_touch_calib_pane_g1_ParamLimits

0x7012,	// (0x0005cfd1) main_touch_calib_pane_g2_ParamLimits

0x701e,	// (0x0005cfdd) main_touch_calib_pane_g3_ParamLimits

0x702a,	// (0x0005cfe9) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00065743) main_touch_calib_pane_g_ParamLimits

0x7036,	// (0x0005cff5) main_touch_calib_pane_t1_ParamLimits

0x7050,	// (0x0005d00f) main_touch_calib_pane_t2_ParamLimits

0x706a,	// (0x0005d029) main_touch_calib_pane_t3_ParamLimits

0x707e,	// (0x0005d03d) main_touch_calib_pane_t4_ParamLimits

0x7092,	// (0x0005d051) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0006574c) main_touch_calib_pane_t_ParamLimits

0x783c,	// (0x0005d7fb) list_single_fp_cale_pane_g3_ParamLimits

0x783c,	// (0x0005d7fb) list_single_fp_cale_pane_g3

0xefe8,	// (0x00064fa7) bg_button_pane_cp012_ParamLimits

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp03_ParamLimits

0x9689,	// (0x0005f648) cell_vitu2_function_top_pane_g1_ParamLimits

0xefe8,	// (0x00064fa7) bg_vkb2_func_pane_cp04_ParamLimits

0xa34d,	// (0x0006030c) main_ncimui_button_group_pane_ParamLimits

0xa34d,	// (0x0006030c) main_ncimui_button_group_pane

0xa387,	// (0x00060346) main_ncimui_pane_t3_ParamLimits

0xa387,	// (0x00060346) main_ncimui_pane_t3

0xe6f1,	// (0x000646b0) phacti_button_group_pane

0xe9d4,	// (0x00064993) aid_size_list_single_double_ParamLimits

0xb387,	// (0x00061346) popup_ezdial_listscroll_window_ParamLimits

0xb3a3,	// (0x00061362) popup_number_entry_window_cp01_ParamLimits

0xb44e,	// (0x0006140d) phacti_button_pane_ParamLimits

0xb44e,	// (0x0006140d) phacti_button_pane

0xbd72,	// (0x00061d31) bg_button_pane_cp14

0xeaaf,	// (0x00064a6e) phacti_button_pane_t1

0xb45f,	// (0x0006141e) main_touch_calib_button_pane_ParamLimits

0xb45f,	// (0x0006141e) main_touch_calib_button_pane

0xc581,	// (0x00062540) bg_button_pane_cp18_ParamLimits

0xc581,	// (0x00062540) bg_button_pane_cp18

0xeabd,	// (0x00064a7c) main_touch_calib_button_pane_t1_ParamLimits

0xeabd,	// (0x00064a7c) main_touch_calib_button_pane_t1

0xead3,	// (0x00064a92) main_touch_calib_button_pane_t2_ParamLimits

0xead3,	// (0x00064a92) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x00065e23) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x00065e23) main_touch_calib_button_pane_t

0xbd72,	// (0x00061d31) cell_ncimui_button_pane

0xbd72,	// (0x00061d31) bg_button_pane_cp032

0xeaf1,	// (0x00064ab0) cell_ncimui_button_pane_t1

0xef11,	// (0x00064ed0) image3_infobar_pane_ParamLimits

0xef11,	// (0x00064ed0) image3_infobar_pane

0xa71e,	// (0x000606dd) fs_bigclock_status_pane_ParamLimits

0xa71e,	// (0x000606dd) fs_bigclock_status_pane

0xa72b,	// (0x000606ea) main_fs_bigclock_clock_pane_ParamLimits

0xa72b,	// (0x000606ea) main_fs_bigclock_clock_pane

0xa73e,	// (0x000606fd) main_fs_bigclock_indi_pane_ParamLimits

0xa73e,	// (0x000606fd) main_fs_bigclock_indi_pane

0xa756,	// (0x00060715) main_fs_bigclock_swipe_pane_ParamLimits

0xa756,	// (0x00060715) main_fs_bigclock_swipe_pane

0xbd72,	// (0x00061d31) main_fs_clock_dumped_data

0xdffc,	// (0x00063fbb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdffc,	// (0x00063fbb) list_single_fs_bigclock_indicator_pane_g1

0xe01a,	// (0x00063fd9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe01a,	// (0x00063fd9) list_single_fs_bigclock_indicator_pane_g2

0xe034,	// (0x00063ff3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe034,	// (0x00063ff3) list_single_fs_bigclock_indicator_pane_g3

0xe04e,	// (0x0006400d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe04e,	// (0x0006400d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00065c56) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00065c56) list_single_fs_bigclock_indicator_pane_g

0xe074,	// (0x00064033) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe074,	// (0x00064033) list_single_fs_bigclock_indicator_pane_t1

0xe09c,	// (0x0006405b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe09c,	// (0x0006405b) list_single_fs_bigclock_indicator_pane_t2

0xe0c4,	// (0x00064083) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0c4,	// (0x00064083) list_single_fs_bigclock_indicator_pane_t3

0xe0ec,	// (0x000640ab) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0ec,	// (0x000640ab) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00065c61) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00065c61) list_single_fs_bigclock_indicator_pane_t

0xeaff,	// (0x00064abe) image3_infobar_fav_pane_ParamLimits

0xeaff,	// (0x00064abe) image3_infobar_fav_pane

0xeb0f,	// (0x00064ace) image3_infobar_loc_pane_ParamLimits

0xeb0f,	// (0x00064ace) image3_infobar_loc_pane

0xeb23,	// (0x00064ae2) image3_infobar_time_pane_ParamLimits

0xeb23,	// (0x00064ae2) image3_infobar_time_pane

0x20e2,	// (0x000580a1) image3_infobar_time_pane_g1

0xeb33,	// (0x00064af2) image3_infobar_time_pane_t1

0x20e2,	// (0x000580a1) image3_infobar_loc_pane_g1

0xeb41,	// (0x00064b00) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x00065e28) image3_infobar_loc_pane_g

0xeb49,	// (0x00064b08) image3_infobar_loc_pane_t1

0x20e2,	// (0x000580a1) image3_infobar_fav_pane_g1

0xeb57,	// (0x00064b16) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x00065e2d) image3_infobar_fav_pane_g

0xeb5f,	// (0x00064b1e) fs_bigclock_status_battery_pane

0xeb68,	// (0x00064b27) fs_bigclock_status_signal_pane

0xeb71,	// (0x00064b30) fs_bigclock_status_title_pane

0xeb7a,	// (0x00064b39) fs_bigclock_status_signal_pane_g1

0xeb83,	// (0x00064b42) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x00065e32) fs_bigclock_status_signal_pane_g

0xeb8b,	// (0x00064b4a) fs_bigclock_status_battery_pane_g1

0xeb94,	// (0x00064b53) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x00065e37) fs_bigclock_status_battery_pane_g

0xeb9c,	// (0x00064b5b) fs_bigclock_status_title_pane_t1

0x20e2,	// (0x000580a1) main_fs_bigclock_clock_pane_g1

0xebaa,	// (0x00064b69) main_fs_bigclock_clock_pane_g2

0xebaa,	// (0x00064b69) main_fs_bigclock_clock_pane_g3

0xebaa,	// (0x00064b69) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x00065e3c) main_fs_bigclock_clock_pane_g

0xebb2,	// (0x00064b71) main_fs_bigclock_clock_pane_t1

0xebc0,	// (0x00064b7f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x00065e45) main_fs_bigclock_clock_pane_t

0xebcf,	// (0x00064b8e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebcf,	// (0x00064b8e) list_single_fs_bigclock_indicator_pane

0xb474,	// (0x00061433) list_single_fs_bigclock_pane_ParamLimits

0xb474,	// (0x00061433) list_single_fs_bigclock_pane

0xebe9,	// (0x00064ba8) main_fs_bigclock_indicator_pane_t1

0xebf8,	// (0x00064bb7) list_single_fs_bigclock_pane_g1

0xec00,	// (0x00064bbf) list_single_fs_bigclock_pane_t1

0x20e2,	// (0x000580a1) main_fs_bigclock_swipe_pane_g1

0xec3e,	// (0x00064bfd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x00065e56) main_fs_bigclock_swipe_pane_g

0xec46,	// (0x00064c05) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec46,	// (0x00064c05) main_fs_bigclock_swipe_pane_t1

0x4f6c,	// (0x0005af2b) call_type_pane_ParamLimits

0xbd72,	// (0x00061d31) main_btmg_pane

0xe8bd,	// (0x0006487c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8bd,	// (0x0006487c) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x00065dc9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x00065dc9) list_single_cale_mrui_row_pane_g

0xea0e,	// (0x000649cd) list_recal_vselct_arw_lo_pane

0xea16,	// (0x000649d5) list_recal_vselct_arw_up_pane

0xd672,	// (0x00063631) list_recal_vselct_pane

0xec63,	// (0x00064c22) btmg_button_pane

0xb4da,	// (0x00061499) main_btmg_pane_g1

0xbd72,	// (0x00061d31) bg_button_pane_cp044

0xec6d,	// (0x00064c2c) btmg_button_pane_t1

0x1c83,	// (0x00057c42) aid_listscroll_gen

0x1c99,	// (0x00057c58) main_cntbar_detail_pane

0xe5e3,	// (0x000645a2) list_cmail_folder_pane

0xe5f3,	// (0x000645b2) sp_fs_scroll_pane_cp03_ParamLimits

0xb4e4,	// (0x000614a3) list_single_fs_dyc_pane_cp01_ParamLimits

0xb4e4,	// (0x000614a3) list_single_fs_dyc_pane_cp01

0xec7b,	// (0x00064c3a) aid_size_cmail_indent

0xec84,	// (0x00064c43) list_single_dyc_row_pane_cp01

0xb52f,	// (0x000614ee) cntbar_detail_list_pane_ParamLimits

0xb52f,	// (0x000614ee) cntbar_detail_list_pane

0xb57b,	// (0x0006153a) main_cntbar_detail_cont_pane_ParamLimits

0xb57b,	// (0x0006153a) main_cntbar_detail_cont_pane

0x4e91,	// (0x0005ae50) scroll_pane_cp032_ParamLimits

0x4e91,	// (0x0005ae50) scroll_pane_cp032

0xb58f,	// (0x0006154e) cntbar_detail_list_event_pane_ParamLimits

0xb58f,	// (0x0006154e) cntbar_detail_list_event_pane

0xb53f,	// (0x000614fe) cntbar_detail_list_shct_pane

0xcad7,	// (0x00062a96) aid_list_gen

0xec8d,	// (0x00064c4c) aid_scroll

0xec96,	// (0x00064c55) aid_size_touch_scroll_bar

0x0231,	// (0x000561f0) aid_list_double

0xec9f,	// (0x00064c5e) aid_list_single

0xeca8,	// (0x00064c67) aid_list_single_lg

0xecb1,	// (0x00064c70) aid_list_z_g_a_sm

0xecb9,	// (0x00064c78) aid_list_z_g_d

0xecc1,	// (0x00064c80) aid_txt_z_prm

0xb59f,	// (0x0006155e) aid_txt_z_prm_cp01

0xb5ad,	// (0x0006156c) aid_txt_z_sec

0xb5bb,	// (0x0006157a) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb5bb,	// (0x0006157a) main_cntbar_detail_cont_pane_g1

0xb5cf,	// (0x0006158e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb5cf,	// (0x0006158e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x00065e5b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x00065e5b) main_cntbar_detail_cont_pane_g

0xeccf,	// (0x00064c8e) main_cntbar_detail_cont_pane_t1

0xecdd,	// (0x00064c9c) main_cntbar_detail_cont_pane_t2

0xeceb,	// (0x00064caa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00065e60) main_cntbar_detail_cont_pane_t

0xb5df,	// (0x0006159e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb5df,	// (0x0006159e) cell_cntbar_detail_list_shct_pane

0xecf9,	// (0x00064cb8) cntbar_detail_list_shct_pane_g1

0xed02,	// (0x00064cc1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00065e67) cntbar_detail_list_shct_pane_g

0xb5f3,	// (0x000615b2) cntbar_detail_list_event_pane_g1_ParamLimits

0xb5f3,	// (0x000615b2) cntbar_detail_list_event_pane_g1

0xb5ff,	// (0x000615be) cntbar_detail_list_event_pane_g2_ParamLimits

0xb5ff,	// (0x000615be) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x00065e6c) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x00065e6c) cntbar_detail_list_event_pane_g

0xb66b,	// (0x0006162a) cntbar_detail_list_event_pane_t1_ParamLimits

0xb66b,	// (0x0006162a) cntbar_detail_list_event_pane_t1

0xb680,	// (0x0006163f) cntbar_detail_list_event_pane_t2_ParamLimits

0xb680,	// (0x0006163f) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00065e79) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00065e79) cntbar_detail_list_event_pane_t

0x20e2,	// (0x000580a1) cell_cntbar_detail_list_shct_pane_g1

0x52bd,	// (0x0005b27c) navi_pane_mv_g3

0x1c99,	// (0x00057c58) main_cntbar_detail_pane_ParamLimits

0xbd72,	// (0x00061d31) main_notif_wgt_pane

0xcd35,	// (0x00062cf4) aid_tch_main_mp4_pane_g4

0xef09,	// (0x00064ec8) popup_slider_window_cp02

0xea05,	// (0x000649c4) list_recal_day_event_pane

0xb503,	// (0x000614c2) cntbar_detail_btn_pane_ParamLimits

0xb503,	// (0x000614c2) cntbar_detail_btn_pane

0xb519,	// (0x000614d8) cntbar_detail_btn_pane_cp01_ParamLimits

0xb519,	// (0x000614d8) cntbar_detail_btn_pane_cp01

0xb53f,	// (0x000614fe) cntbar_detail_list_shct_pane_ParamLimits

0xb54f,	// (0x0006150e) cntbar_detail_pane_g1_ParamLimits

0xb54f,	// (0x0006150e) cntbar_detail_pane_g1

0xb55f,	// (0x0006151e) cntbar_detail_pane_t1_ParamLimits

0xb55f,	// (0x0006151e) cntbar_detail_pane_t1

0xb60b,	// (0x000615ca) cntbar_detail_list_event_pane_g3_ParamLimits

0xb60b,	// (0x000615ca) cntbar_detail_list_event_pane_g3

0xb623,	// (0x000615e2) cntbar_detail_list_event_pane_g4_ParamLimits

0xb623,	// (0x000615e2) cntbar_detail_list_event_pane_g4

0xb63b,	// (0x000615fa) cntbar_detail_list_event_pane_g5_ParamLimits

0xb63b,	// (0x000615fa) cntbar_detail_list_event_pane_g5

0xb653,	// (0x00061612) cntbar_detail_list_event_pane_g6_ParamLimits

0xb653,	// (0x00061612) cntbar_detail_list_event_pane_g6

0xb695,	// (0x00061654) cntbar_detail_list_event_pane_t3_ParamLimits

0xb695,	// (0x00061654) cntbar_detail_list_event_pane_t3

0xb6a7,	// (0x00061666) popup_notif_wgt_window_ParamLimits

0xb6a7,	// (0x00061666) popup_notif_wgt_window

0xb6c0,	// (0x0006167f) popup_submenu_window_cp01_ParamLimits

0xb6c0,	// (0x0006167f) popup_submenu_window_cp01

0x088c,	// (0x0005684b) bg_popup_window_pane_cp10

0xed0b,	// (0x00064cca) listscroll_notif_wgt_pane

0xed15,	// (0x00064cd4) list_notif_wgt_window

0xed1e,	// (0x00064cdd) scroll_pane_cp033

0xed27,	// (0x00064ce6) list_notif_wgt_row_pane_ParamLimits

0xed27,	// (0x00064ce6) list_notif_wgt_row_pane

0xed3b,	// (0x00064cfa) aid_size_list_notif_wgt_del

0xed44,	// (0x00064d03) list_notif_wgt_row_pane_g1

0xed4c,	// (0x00064d0b) list_notif_wgt_row_pane_g2

0xed54,	// (0x00064d13) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00065e80) list_notif_wgt_row_pane_g

0xed5d,	// (0x00064d1c) list_notif_wgt_row_pane_t1

0xed6b,	// (0x00064d2a) list_notif_wgt_row_pane_t2

0xed79,	// (0x00064d38) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00065e87) list_notif_wgt_row_pane_t

0xd36a,	// (0x00063329) list_recal_day_event_pane_g1

0xed87,	// (0x00064d46) list_recal_day_event_pane_t1

0xbd72,	// (0x00061d31) bg_button_pane_cp045

0xed96,	// (0x00064d55) cntbar_detail_btn_pane_t1

0x1c8b,	// (0x00057c4a) main_callh_pane_ParamLimits

0x1c8b,	// (0x00057c4a) main_callh_pane

0xbd72,	// (0x00061d31) main_coverflow0_pane

0xbd72,	// (0x00061d31) main_wgtman_pane

0xa764,	// (0x00060723) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa764,	// (0x00060723) main_fs_bigclock_unlock_btn_pane

0xe5bd,	// (0x0006457c) bg_button_pane_cp16

0xe5cd,	// (0x0006458c) cell_tport_appsw_pane_g3

0xb6d2,	// (0x00061691) cf0_flow_pane_ParamLimits

0xb6d2,	// (0x00061691) cf0_flow_pane

0xeda4,	// (0x00064d63) listscroll_cf0_pane

0xedad,	// (0x00064d6c) main_cf0_pane_g1

0xb6e7,	// (0x000616a6) main_cf0_pane_t1_ParamLimits

0xb6e7,	// (0x000616a6) main_cf0_pane_t1

0xb6ff,	// (0x000616be) main_cf0_pane_t2_ParamLimits

0xb6ff,	// (0x000616be) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00065e8e) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00065e8e) main_cf0_pane_t

0xedb7,	// (0x00064d76) scroll_pane_cp11

0xb717,	// (0x000616d6) cf0_flow_pane_g1

0xb71f,	// (0x000616de) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00065e93) cf0_flow_pane_g

0xb727,	// (0x000616e6) cf0_flow_pane_t1

0xbd72,	// (0x00061d31) main_call6_pane

0xbd72,	// (0x00061d31) main_calllock_pane

0xb735,	// (0x000616f4) call6_btn_grp_pane_ParamLimits

0xb735,	// (0x000616f4) call6_btn_grp_pane

0xb74f,	// (0x0006170e) call6_pane_g1_ParamLimits

0xb74f,	// (0x0006170e) call6_pane_g1

0xb764,	// (0x00061723) popup_call6_1st_window_ParamLimits

0xb764,	// (0x00061723) popup_call6_1st_window

0xb775,	// (0x00061734) popup_call6_2nd_window_ParamLimits

0xb775,	// (0x00061734) popup_call6_2nd_window

0xb786,	// (0x00061745) cell_call6_btn_pane_ParamLimits

0xb786,	// (0x00061745) cell_call6_btn_pane

0x088c,	// (0x0005684b) bg_popup_call2_in_pane_cp03

0xedc2,	// (0x00064d81) popup_call6_1st_window_g1

0xedca,	// (0x00064d89) popup_call6_1st_window_g2

0xedd2,	// (0x00064d91) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00065e98) popup_call6_1st_window_g

0xedda,	// (0x00064d99) popup_call6_1st_window_t1

0xede9,	// (0x00064da8) popup_call6_1st_window_t2

0xedf9,	// (0x00064db8) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00065e9f) popup_call6_1st_window_t

0x088c,	// (0x0005684b) bg_popup_call2_in_pane_cp04

0xedc2,	// (0x00064d81) popup_call6_2nd_window_g1

0xedca,	// (0x00064d89) popup_call6_2nd_window_g2

0xedd2,	// (0x00064d91) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00065e98) popup_call6_2nd_window_g

0xedda,	// (0x00064d99) popup_call6_2nd_window_t1

0xbd72,	// (0x00061d31) bg_button_pane_cp15

0xee09,	// (0x00064dc8) cell_call6_btn_pane_g1

0xee12,	// (0x00064dd1) cell_call6_btn_pane_t1

0xb79a,	// (0x00061759) listscroll_wgtman_pane_ParamLimits

0xb79a,	// (0x00061759) listscroll_wgtman_pane

0xb7bd,	// (0x0006177c) wgtman_btn_pane_ParamLimits

0xb7bd,	// (0x0006177c) wgtman_btn_pane

0x073f,	// (0x000566fe) aid_scroll_copy1

0xee21,	// (0x00064de0) list_wgtman_pane

0xb800,	// (0x000617bf) wgtman_btn_pane_g1_ParamLimits

0xb800,	// (0x000617bf) wgtman_btn_pane_g1

0xb82c,	// (0x000617eb) wgtman_btn_pane_t1_ParamLimits

0xb82c,	// (0x000617eb) wgtman_btn_pane_t1

0xee2b,	// (0x00064dea) wgtman_btn_pane_t2_ParamLimits

0xee2b,	// (0x00064dea) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00065ea6) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00065ea6) wgtman_btn_pane_t

0xb869,	// (0x00061828) listrow_wgtman_pane_ParamLimits

0xb869,	// (0x00061828) listrow_wgtman_pane

0xb87c,	// (0x0006183b) listrow_wgtman_pane_g1

0xb885,	// (0x00061844) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00065eab) listrow_wgtman_pane_g

0xb88f,	// (0x0006184e) listrow_wgtman_pane_t1

0xb89d,	// (0x0006185c) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00065eb0) listrow_wgtman_pane_t

0xb8ab,	// (0x0006186a) wait_bar_pane_cp09

0xee42,	// (0x00064e01) main_calllock_btn_pane

0xee4c,	// (0x00064e0b) main_calllock_pane_g1

0xbd72,	// (0x00061d31) bg_button_pane_cp17

0xee57,	// (0x00064e16) main_calllock_btn_pane_g1

0xee60,	// (0x00064e1f) main_calllock_btn_pane_t1

0xbd72,	// (0x00061d31) main_dialer3_pane

0xbd72,	// (0x00061d31) main_fmrd2_pane

0x20e2,	// (0x000580a1) main_fs_bigclock_unlock_btn_pane_g1

0xee77,	// (0x00064e36) main_fs_bigclock_unlock_btn_pane_t1

0xb8b3,	// (0x00061872) area_fmrd2_info_pane_ParamLimits

0xb8b3,	// (0x00061872) area_fmrd2_info_pane

0xb8c4,	// (0x00061883) area_fmrd2_visual_pane_ParamLimits

0xb8c4,	// (0x00061883) area_fmrd2_visual_pane

0xb8d2,	// (0x00061891) fmrd2_indi_pane_ParamLimits

0xb8d2,	// (0x00061891) fmrd2_indi_pane

0xb8df,	// (0x0006189e) area_fmrd2_visual_pane_g1

0xb8e7,	// (0x000618a6) area_fmrd2_visual_pane_t1

0xb8f7,	// (0x000618b6) area_fmrd2_visual_pane_t2

0xb907,	// (0x000618c6) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00065eba) area_fmrd2_visual_pane_t

0xb917,	// (0x000618d6) area_fmrd2_info_pane_g1

0xb91f,	// (0x000618de) area_fmrd2_info_pane_t1

0xb92f,	// (0x000618ee) area_fmrd2_info_pane_t2

0xb93f,	// (0x000618fe) area_fmrd2_info_pane_t3

0xb94f,	// (0x0006190e) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00065ec1) area_fmrd2_info_pane_t

0xb95d,	// (0x0006191c) fmrd2_indi_pane_t1

0xb96d,	// (0x0006192c) fmrd2_indi_pane_t2

0xb97d,	// (0x0006193c) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00065eca) fmrd2_indi_pane_t

0xe05d,	// (0x0006401c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe05d,	// (0x0006401c) list_single_fs_bigclock_indicator_pane_g5

0xe101,	// (0x000640c0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe101,	// (0x000640c0) list_single_fs_bigclock_indicator_pane_t5

0xb0fd,	// (0x000610bc) aid_cell_bcale_month_pane_ParamLimits

0xb0fd,	// (0x000610bc) aid_cell_bcale_month_pane

0xb10f,	// (0x000610ce) bcale_month_pane_ParamLimits

0xb10f,	// (0x000610ce) bcale_month_pane

0xb129,	// (0x000610e8) bcale_preview_pane_ParamLimits

0xb129,	// (0x000610e8) bcale_preview_pane

0xec00,	// (0x00064bbf) list_single_fs_bigclock_pane_t1_ParamLimits

0xec1a,	// (0x00064bd9) list_single_fs_bigclock_pane_t2_ParamLimits

0xec1a,	// (0x00064bd9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x00065e51) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x00065e51) list_single_fs_bigclock_pane_t

0xee6f,	// (0x00064e2e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00065eb5) main_fs_bigclock_unlock_btn_pane_g

0xb98d,	// (0x0006194c) aid_dia3_key_size_ParamLimits

0xb98d,	// (0x0006194c) aid_dia3_key_size

0xb99c,	// (0x0006195b) aid_dia3_listrow_size_ParamLimits

0xb99c,	// (0x0006195b) aid_dia3_listrow_size

0xb9b1,	// (0x00061970) dia3_keypad_fun_pane_ParamLimits

0xb9b1,	// (0x00061970) dia3_keypad_fun_pane

0xb9cd,	// (0x0006198c) dia3_keypad_num_pane_ParamLimits

0xb9cd,	// (0x0006198c) dia3_keypad_num_pane

0xb9e8,	// (0x000619a7) dia3_listscroll_pane_ParamLimits

0xb9e8,	// (0x000619a7) dia3_listscroll_pane

0xb9fb,	// (0x000619ba) dia3_numentry_pane_ParamLimits

0xb9fb,	// (0x000619ba) dia3_numentry_pane

0xee85,	// (0x00064e44) dia3_list_pane

0xee90,	// (0x00064e4f) scroll_pane_cp12

0xbd72,	// (0x00061d31) bg_dia3_numentry_pane

0xba0f,	// (0x000619ce) dia3_numentry_pane_t1

0xba1e,	// (0x000619dd) cell_dia3_key_num_pane

0xba26,	// (0x000619e5) cell_dia3_key0_fun_pane_ParamLimits

0xba26,	// (0x000619e5) cell_dia3_key0_fun_pane

0xba3a,	// (0x000619f9) cell_dia3_key1_fun_pane_ParamLimits

0xba3a,	// (0x000619f9) cell_dia3_key1_fun_pane

0xba52,	// (0x00061a11) dia3_listrow_pane

0xdd7b,	// (0x00063d3a) bg_dia3_numentry_pane_g1

0xbd72,	// (0x00061d31) bg_button_pane_cp21

0xee9b,	// (0x00064e5a) cell_dia3_key_num_pane_t1

0xeea9,	// (0x00064e68) cell_dia3_key_num_pane_t2

0xeeb8,	// (0x00064e77) cell_dia3_key_num_pane_t3

0xeec7,	// (0x00064e86) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00065ed1) cell_dia3_key_num_pane_t

0xbd72,	// (0x00061d31) bg_button_pane_cp19

0xba64,	// (0x00061a23) cell_dia3_key0_fun_pane_g1

0xbd72,	// (0x00061d31) bg_button_pane_cp20

0xba6c,	// (0x00061a2b) cell_dia3_key1_fun_pane_g1

0xba74,	// (0x00061a33) area_left_week_number_pane

0xba7d,	// (0x00061a3c) area_top_day_name_pane

0xba86,	// (0x00061a45) frame_month_view_pane

0xba92,	// (0x00061a51) grid_month_view_pane

0xba9c,	// (0x00061a5b) cell_top_day_name_pane_ParamLimits

0xba9c,	// (0x00061a5b) cell_top_day_name_pane

0xbab4,	// (0x00061a73) cell_area_left_week_number_pane_ParamLimits

0xbab4,	// (0x00061a73) cell_area_left_week_number_pane

0xbac8,	// (0x00061a87) cell_month_view_pane_ParamLimits

0xbac8,	// (0x00061a87) cell_month_view_pane

0xeed6,	// (0x00064e95) frm_month_g1

0xbae3,	// (0x00061aa2) frm_month_g2

0xbaed,	// (0x00061aac) frm_month_g3

0xbaf7,	// (0x00061ab6) frm_month_g4

0xbb01,	// (0x00061ac0) frm_month_g5

0xbb0b,	// (0x00061aca) frm_month_g6

0xbb15,	// (0x00061ad4) frm_month_g7

0xeedf,	// (0x00064e9e) frm_month_g8

0xbb21,	// (0x00061ae0) frm_month_g9

0xbb2a,	// (0x00061ae9) frm_month_g10

0xbb33,	// (0x00061af2) frm_month_g11

0xbb3c,	// (0x00061afb) frm_month_g12

0xbb45,	// (0x00061b04) frm_month_g13

0xbb4e,	// (0x00061b0d) frm_month_g14

0xeee8,	// (0x00064ea7) frm_month_g15

0xbb57,	// (0x00061b16) frm_month_g16

0x000f,

0xff1b,	// (0x00065eda) frm_month_g

0xbb62,	// (0x00061b21) cell_top_day_name_pane_t1

0xbb71,	// (0x00061b30) cell_area_left_week_number_pane_g1

0xbb62,	// (0x00061b21) cell_area_left_week_number_pane_t1

0x20e2,	// (0x000580a1) cell_month_view_pane_g1

0xbb79,	// (0x00061b38) cell_month_view_pane_t1

0xbd72,	// (0x00061d31) main_fps_pane

0xe337,	// (0x000642f6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe337,	// (0x000642f6) cmail_ddmenu_btn02_pane_cp1

0xe353,	// (0x00064312) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe353,	// (0x00064312) cmail_ddmenu_btn02_pane_cp2

0xb3d5,	// (0x00061394) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb3d5,	// (0x00061394) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x00065e02) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x00065e02) cmail_ddmenu_btn02_pane_g

0xb3f3,	// (0x000613b2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb3f3,	// (0x000613b2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x00065e07) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x00065e07) cmail_ddmenu_btn02_pane_t

0xbb88,	// (0x00061b47) fps_text_pane_ParamLimits

0xbb88,	// (0x00061b47) fps_text_pane

0xbb9f,	// (0x00061b5e) main_fps_pane_g1_ParamLimits

0xbb9f,	// (0x00061b5e) main_fps_pane_g1

0xbbb9,	// (0x00061b78) wait_bar_pane_cp010_ParamLimits

0xbbb9,	// (0x00061b78) wait_bar_pane_cp010

0xbbca,	// (0x00061b89) fps_text_pane_t1_ParamLimits

0xbbca,	// (0x00061b89) fps_text_pane_t1

0x8b32,	// (0x0005eaf1) cam4_image_uncrop_pane_g1

0x8b3b,	// (0x0005eafa) cam4_image_uncrop_pane_g2

0x8b44,	// (0x0005eb03) cam4_image_uncrop_pane_g3

0x8b4d,	// (0x0005eb0c) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x000658db) cam4_image_uncrop_pane_g

0xba52,	// (0x00061a11) dia3_listrow_pane_ParamLimits

0xbd72,	// (0x00061d31) main_phob2_pane

0xaf16,	// (0x00060ed5) cell_tport_appsw_pane_cp02_ParamLimits

0xaf16,	// (0x00060ed5) cell_tport_appsw_pane_cp02

0xaf2a,	// (0x00060ee9) cell_tport_appsw_pane_cp03_ParamLimits

0xaf2a,	// (0x00060ee9) cell_tport_appsw_pane_cp03

0xbd72,	// (0x00061d31) phob2_contact_card_pane

0xbd72,	// (0x00061d31) phob2_listscroll_pane

0x0001,	// (0x00055fc0) phob2_list_pane

0x0009,	// (0x00055fc8) scroll_pane_cp034

0xbbe2,	// (0x00061ba1) phob2_cc_data_pane_ParamLimits

0xbbe2,	// (0x00061ba1) phob2_cc_data_pane

0xbc01,	// (0x00061bc0) phob2_cc_listscroll_pane_ParamLimits

0xbc01,	// (0x00061bc0) phob2_cc_listscroll_pane

0xd146,	// (0x00063105) list_double_large_graphic_phob2_pane_ParamLimits

0xd146,	// (0x00063105) list_double_large_graphic_phob2_pane

0xbc1f,	// (0x00061bde) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbc1f,	// (0x00061bde) list_double_large_graphic_phob2_pane_g1

0xbc2c,	// (0x00061beb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xbc2c,	// (0x00061beb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00065efb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00065efb) list_double_large_graphic_phob2_pane_g

0xbc38,	// (0x00061bf7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xbc38,	// (0x00061bf7) list_double_large_graphic_phob2_pane_t1

0xbc4d,	// (0x00061c0c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbc4d,	// (0x00061c0c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00065f00) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00065f00) list_double_large_graphic_phob2_pane_t

0xbd72,	// (0x00061d31) list_highlight_pane_cp024

0x00a8,	// (0x00056067) phob2_cc_button_pane

0xbc5f,	// (0x00061c1e) phob2_cc_data_pane_g1_ParamLimits

0xbc5f,	// (0x00061c1e) phob2_cc_data_pane_g1

0xbc74,	// (0x00061c33) phob2_cc_data_pane_g2_ParamLimits

0xbc74,	// (0x00061c33) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00065f05) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00065f05) phob2_cc_data_pane_g

0xbc86,	// (0x00061c45) phob2_cc_data_pane_t1_ParamLimits

0xbc86,	// (0x00061c45) phob2_cc_data_pane_t1

0xbc9e,	// (0x00061c5d) phob2_cc_data_pane_t2_ParamLimits

0xbc9e,	// (0x00061c5d) phob2_cc_data_pane_t2

0xbcb6,	// (0x00061c75) phob2_cc_data_pane_t3_ParamLimits

0xbcb6,	// (0x00061c75) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00065f0a) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00065f0a) phob2_cc_data_pane_t

0x00fe,	// (0x000560bd) phob2_cc_list_pane_ParamLimits

0x00fe,	// (0x000560bd) phob2_cc_list_pane

0x010a,	// (0x000560c9) scroll_pane_cp035_ParamLimits

0x010a,	// (0x000560c9) scroll_pane_cp035

0x1c99,	// (0x00057c58) bg_button_pane_cp033

0x0116,	// (0x000560d5) phob2_cc_button_pane_g1

0x0122,	// (0x000560e1) phob2_cc_button_pane_t1

0x0137,	// (0x000560f6) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00065f11) phob2_cc_button_pane_t

0xbcd0,	// (0x00061c8f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbcd0,	// (0x00061c8f) list_double_large_graphic_phob2_cc_pane

0xbce4,	// (0x00061ca3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbce4,	// (0x00061ca3) list_double_large_graphic_phob2_cc_pane_g1

0xbcf0,	// (0x00061caf) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xbcf0,	// (0x00061caf) list_double_large_graphic_phob2_cc_pane_g2

0xbcfc,	// (0x00061cbb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbcfc,	// (0x00061cbb) list_double_large_graphic_phob2_cc_pane_g3

0xbd08,	// (0x00061cc7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbd08,	// (0x00061cc7) list_double_large_graphic_phob2_cc_pane_g4

0xbd14,	// (0x00061cd3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbd14,	// (0x00061cd3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00065f16) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00065f16) list_double_large_graphic_phob2_cc_pane_g

0xbd20,	// (0x00061cdf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbd20,	// (0x00061cdf) list_double_large_graphic_phob2_cc_pane_t1

0xbd49,	// (0x00061d08) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbd49,	// (0x00061d08) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00065f21) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00065f21) list_double_large_graphic_phob2_cc_pane_t

0x021a,	// (0x000561d9) list_highlight_pane_cp025_ParamLimits

0x021a,	// (0x000561d9) list_highlight_pane_cp025

0x1c99,	// (0x00057c58) bg_button_pane_cp033_ParamLimits

0x0116,	// (0x000560d5) phob2_cc_button_pane_g1_ParamLimits

0x0122,	// (0x000560e1) phob2_cc_button_pane_t1_ParamLimits

0x0137,	// (0x000560f6) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00065f11) phob2_cc_button_pane_t_ParamLimits

0x3523,	// (0x000594e2) popup_wgtman_window

0xd228,	// (0x000631e7) scroll_pane_cp038

0xb7e2,	// (0x000617a1) wgtman_btn_pane_cp_01_ParamLimits

0xb7e2,	// (0x000617a1) wgtman_btn_pane_cp_01

0x0228,	// (0x000561e7) wgtman_content_pane

0x0231,	// (0x000561f0) wgtman_heading_pane

0xbd72,	// (0x00061d31) bg_heading_pane_cp02

0x023a,	// (0x000561f9) wgtman_heading_pane_g1

0x0242,	// (0x00056201) wgtman_heading_pane_t1

0x0250,	// (0x0005620f) scroll_pane_cp036

0x0258,	// (0x00056217) wgtman_list_pane

0x0260,	// (0x0005621f) wgtman_list_pane_t1_ParamLimits

0x0260,	// (0x0005621f) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small

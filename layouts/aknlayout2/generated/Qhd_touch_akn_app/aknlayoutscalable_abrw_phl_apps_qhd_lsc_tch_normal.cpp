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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002bfc0 };

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
0x1966,	// (0x0002d926) Screen

0x1972,	// (0x0002d932) application_window

0x197e,	// (0x0002d93e) area_bottom_pane_ParamLimits

0x197e,	// (0x0002d93e) area_bottom_pane

0x0236,	// (0x0002c1f6) area_top_pane_ParamLimits

0x0236,	// (0x0002c1f6) area_top_pane

0xb03c,	// (0x00036ffc) call_video_uplink_pane_ParamLimits

0xb03c,	// (0x00036ffc) call_video_uplink_pane

0x02c4,	// (0x0002c284) main_pane_ParamLimits

0x02c4,	// (0x0002c284) main_pane

0xdf7e,	// (0x00039f3e) context_pane

0x4800,	// (0x000307c0) navi_pane

0x4832,	// (0x000307f2) popup_cale_events_window_ParamLimits

0x4832,	// (0x000307f2) popup_cale_events_window

0xdf91,	// (0x00039f51) popup_mup_playback_window

0x484a,	// (0x0003080a) signal_pane

0xbeb8,	// (0x00037e78) main_browser_pane

0xc07d,	// (0x0003803d) main_burst_pane

0x06be,	// (0x0002c67e) main_calc_pane

0xdf64,	// (0x00039f24) main_cale_day_pane

0x06d2,	// (0x0002c692) main_cale_month_pane

0xdf64,	// (0x00039f24) main_cale_week_pane

0xc07d,	// (0x0003803d) main_call_pane

0xb485,	// (0x00037445) main_call_poc_pane

0xc07d,	// (0x0003803d) main_camera_pane

0xc07d,	// (0x0003803d) main_chi_dic_pane

0xc860,	// (0x00038820) main_clock_pane

0xb485,	// (0x00037445) main_fmradio_pane

0xc07d,	// (0x0003803d) main_graph_messa_pane

0xb485,	// (0x00037445) main_help_pane

0xbeb8,	// (0x00037e78) main_im_pane

0xbdf3,	// (0x00037db3) main_image_pane_ParamLimits

0xbdf3,	// (0x00037db3) main_image_pane

0xb485,	// (0x00037445) main_location2_pane

0xc07d,	// (0x0003803d) main_location_pane

0xbdf3,	// (0x00037db3) main_messa_pane

0xb485,	// (0x00037445) main_mp2_pane

0xc07d,	// (0x0003803d) main_mp_pane

0xb485,	// (0x00037445) main_msg_pane

0xb485,	// (0x00037445) main_mup_eq_pane

0xb485,	// (0x00037445) main_mup_pane

0xbeb8,	// (0x00037e78) main_notes_pane

0xb485,	// (0x00037445) main_pec_pane

0xb485,	// (0x00037445) main_phob_pane

0xb485,	// (0x00037445) main_pinb_pane

0xb485,	// (0x00037445) main_postcard_pane

0xb485,	// (0x00037445) main_qdial_pane

0xc07d,	// (0x0003803d) main_skin_pane

0xb485,	// (0x00037445) main_smil2_pane

0xc07d,	// (0x0003803d) main_smil_pane

0xc07d,	// (0x0003803d) main_video_pane

0xc07d,	// (0x0003803d) main_video_tele_pane

0xbdf3,	// (0x00037db3) main_viewer_pane_ParamLimits

0xbdf3,	// (0x00037db3) main_viewer_pane

0xc07d,	// (0x0003803d) main_vorec_pane

0x0724,	// (0x0002c6e4) popup_blid_sat_info_window_ParamLimits

0x0724,	// (0x0002c6e4) popup_blid_sat_info_window

0x077c,	// (0x0002c73c) popup_dyc_status_message_window_ParamLimits

0x077c,	// (0x0002c73c) popup_dyc_status_message_window

0x0796,	// (0x0002c756) popup_grid_large_graphic_window_ParamLimits

0x0796,	// (0x0002c756) popup_grid_large_graphic_window

0x0852,	// (0x0002c812) popup_loc_request_window_ParamLimits

0x0852,	// (0x0002c812) popup_loc_request_window

0x0948,	// (0x0002c908) popup_wml_address_window_ParamLimits

0x0948,	// (0x0002c908) popup_wml_address_window

0x4644,	// (0x00030604) call_muted_g1

0x42f9,	// (0x000302b9) popup_call_audio_conf_window_ParamLimits

0x42f9,	// (0x000302b9) popup_call_audio_conf_window

0x4658,	// (0x00030618) popup_call_audio_first_window_ParamLimits

0x4658,	// (0x00030618) popup_call_audio_first_window

0x46ce,	// (0x0003068e) popup_call_audio_in_window_ParamLimits

0x46ce,	// (0x0003068e) popup_call_audio_in_window

0x470a,	// (0x000306ca) popup_call_audio_out_window_ParamLimits

0x470a,	// (0x000306ca) popup_call_audio_out_window

0x4744,	// (0x00030704) popup_call_audio_second_window_ParamLimits

0x4744,	// (0x00030704) popup_call_audio_second_window

0x479a,	// (0x0003075a) popup_call_audio_wait_window_ParamLimits

0x479a,	// (0x0003075a) popup_call_audio_wait_window

0x47cf,	// (0x0003078f) popup_number_entry_window_ParamLimits

0x47cf,	// (0x0003078f) popup_number_entry_window

0xb072,	// (0x00037032) bg_popup_call_pane_cp05_ParamLimits

0xb072,	// (0x00037032) bg_popup_call_pane_cp05

0xb092,	// (0x00037052) popup_number_entry_window_t1

0xb0a5,	// (0x00037065) popup_number_entry_window_t2

0xb0b7,	// (0x00037077) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003b08a) popup_number_entry_window_t

0xb0c9,	// (0x00037089) text_title_cp2

0xb0dc,	// (0x0003709c) bg_popup_call_pane_cp_ParamLimits

0xb0dc,	// (0x0003709c) bg_popup_call_pane_cp

0xb0ea,	// (0x000370aa) call_thumbnail_pane

0xb0f2,	// (0x000370b2) popup_call_audio_in_window_g1_ParamLimits

0xb0f2,	// (0x000370b2) popup_call_audio_in_window_g1

0xb0fe,	// (0x000370be) popup_call_audio_in_window_g2_ParamLimits

0xb0fe,	// (0x000370be) popup_call_audio_in_window_g2

0xb10a,	// (0x000370ca) popup_call_audio_in_window_g3_ParamLimits

0xb10a,	// (0x000370ca) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003b093) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003b093) popup_call_audio_in_window_g

0xb116,	// (0x000370d6) popup_call_audio_in_window_t1_ParamLimits

0xb116,	// (0x000370d6) popup_call_audio_in_window_t1

0xb132,	// (0x000370f2) popup_call_audio_in_window_t2_ParamLimits

0xb132,	// (0x000370f2) popup_call_audio_in_window_t2

0xb14e,	// (0x0003710e) popup_call_audio_in_window_t3_ParamLimits

0xb14e,	// (0x0003710e) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003b09a) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003b09a) popup_call_audio_in_window_t

0xb0dc,	// (0x0003709c) bg_popup_call_pane_cp01_ParamLimits

0xb0dc,	// (0x0003709c) bg_popup_call_pane_cp01

0xb0ea,	// (0x000370aa) call_thumbnail_pane_cp02

0xb161,	// (0x00037121) call_type_pane_cp022

0xb169,	// (0x00037129) popup_call_audio_out_window_g1_ParamLimits

0xb169,	// (0x00037129) popup_call_audio_out_window_g1

0xb17b,	// (0x0003713b) popup_call_audio_out_window_g2_ParamLimits

0xb17b,	// (0x0003713b) popup_call_audio_out_window_g2

0xb187,	// (0x00037147) popup_call_audio_out_window_g3_ParamLimits

0xb187,	// (0x00037147) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003b0a1) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003b0a1) popup_call_audio_out_window_g

0xb199,	// (0x00037159) popup_call_audio_out_window_t1_ParamLimits

0xb199,	// (0x00037159) popup_call_audio_out_window_t1

0xb1b1,	// (0x00037171) popup_call_audio_out_window_t2_ParamLimits

0xb1b1,	// (0x00037171) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003b0a8) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003b0a8) popup_call_audio_out_window_t

0xb1c6,	// (0x00037186) bg_popup_call_pane_ParamLimits

0xb1c6,	// (0x00037186) bg_popup_call_pane

0x19f7,	// (0x0002d9b7) call_thumbnail_pane_cp_ParamLimits

0x19f7,	// (0x0002d9b7) call_thumbnail_pane_cp

0xb24a,	// (0x0003720a) call_type_pane_cp01_ParamLimits

0xb24a,	// (0x0003720a) call_type_pane_cp01

0xb28e,	// (0x0003724e) popup_call_audio_first_window_g1_ParamLimits

0xb28e,	// (0x0003724e) popup_call_audio_first_window_g1

0xb2da,	// (0x0003729a) popup_call_audio_first_window_g2_ParamLimits

0xb2da,	// (0x0003729a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003b0ad) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003b0ad) popup_call_audio_first_window_g

0xb31e,	// (0x000372de) popup_call_audio_first_window_t1_ParamLimits

0xb31e,	// (0x000372de) popup_call_audio_first_window_t1

0xb3ca,	// (0x0003738a) popup_call_audio_first_window_t4_ParamLimits

0xb3ca,	// (0x0003738a) popup_call_audio_first_window_t4

0xb456,	// (0x00037416) popup_call_audio_first_window_t5_ParamLimits

0xb456,	// (0x00037416) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003b0b2) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003b0b2) popup_call_audio_first_window_t

0xb485,	// (0x00037445) bg_popup_call_pane_cp02

0xb48f,	// (0x0003744f) call_type_pane_cp023

0xb497,	// (0x00037457) popup_call_audio_wait_window_g1

0xb49f,	// (0x0003745f) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003b0b9) popup_call_audio_wait_window_g

0xb4a7,	// (0x00037467) popup_call_audio_wait_window_t3

0xb4b5,	// (0x00037475) bg_popup_call_pane_cp03_ParamLimits

0xb4b5,	// (0x00037475) bg_popup_call_pane_cp03

0xb515,	// (0x000374d5) call_thumbnail_pane_cp011_ParamLimits

0xb515,	// (0x000374d5) call_thumbnail_pane_cp011

0xb521,	// (0x000374e1) call_type_pane_cp034_ParamLimits

0xb521,	// (0x000374e1) call_type_pane_cp034

0xb55d,	// (0x0003751d) popup_call_audio_second_window_g1_ParamLimits

0xb55d,	// (0x0003751d) popup_call_audio_second_window_g1

0xbcac,	// (0x00037c6c) popup_call_audio_second_window_g2_ParamLimits

0xbcac,	// (0x00037c6c) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003b0be) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003b0be) popup_call_audio_second_window_g

0xbce8,	// (0x00037ca8) popup_call_audio_second_window_t1_ParamLimits

0xbce8,	// (0x00037ca8) popup_call_audio_second_window_t1

0xbd69,	// (0x00037d29) popup_call_audio_second_window_t2_ParamLimits

0xbd69,	// (0x00037d29) popup_call_audio_second_window_t2

0xbd9f,	// (0x00037d5f) popup_call_audio_second_window_t3_ParamLimits

0xbd9f,	// (0x00037d5f) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003b0c3) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003b0c3) popup_call_audio_second_window_t

0xb485,	// (0x00037445) bg_popup_call_pane_cp04

0xbdd5,	// (0x00037d95) list_conf_pane

0xbddd,	// (0x00037d9d) popup_call_audio_conf_window_t1

0xbdeb,	// (0x00037dab) call_thumbnail_pane_g1

0xbdf3,	// (0x00037db3) bg_pinb_pane_ParamLimits

0xbdf3,	// (0x00037db3) bg_pinb_pane

0xbe01,	// (0x00037dc1) find_pinb_pane

0xbe0a,	// (0x00037dca) listscroll_pinb_pane_ParamLimits

0xbe0a,	// (0x00037dca) listscroll_pinb_pane

0xbe19,	// (0x00037dd9) pinb_bg_pane_g1

0x1a1b,	// (0x0002d9db) pinb_bg_pane_g2

0x1a27,	// (0x0002d9e7) pinb_bg_pane_g3

0x1a33,	// (0x0002d9f3) pinb_bg_pane_g4

0x1a3f,	// (0x0002d9ff) pinb_bg_pane_g5

0x1a4b,	// (0x0002da0b) pinb_bg_pane_g6

0x1a56,	// (0x0002da16) pinb_bg_pane_g7

0x1a61,	// (0x0002da21) pinb_bg_pane_g8

0x1a6c,	// (0x0002da2c) pinb_bg_pane_g9

0x1a76,	// (0x0002da36) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003b0ca) pinb_bg_pane_g

0x1a93,	// (0x0002da53) grid_pinb_pane

0x1a9c,	// (0x0002da5c) list_pinb_pane

0x1aa5,	// (0x0002da65) scroll_pane_cp01_ParamLimits

0x1aa5,	// (0x0002da65) scroll_pane_cp01

0xbe23,	// (0x00037de3) find_pinb_pane_g1_ParamLimits

0xbe23,	// (0x00037de3) find_pinb_pane_g1

0xbe3b,	// (0x00037dfb) find_pinb_pane_t1

0xbe4d,	// (0x00037e0d) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003b0e4) find_pinb_pane_t

0xbe62,	// (0x00037e22) input_focus_pane_cp01_ParamLimits

0xbe62,	// (0x00037e22) input_focus_pane_cp01

0x1ab7,	// (0x0002da77) cell_pinb_pane_ParamLimits

0x1ab7,	// (0x0002da77) cell_pinb_pane

0x1ae0,	// (0x0002daa0) cell_pinb_pane_g1_ParamLimits

0x1ae0,	// (0x0002daa0) cell_pinb_pane_g1

0x1af0,	// (0x0002dab0) cell_pinb_pane_g2_ParamLimits

0x1af0,	// (0x0002dab0) cell_pinb_pane_g2

0xbe6e,	// (0x00037e2e) cell_pinb_pane_g3_ParamLimits

0xbe6e,	// (0x00037e2e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003b0e9) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003b0e9) cell_pinb_pane_g

0xb485,	// (0x00037445) grid_highlight_pane_cp01

0x1afc,	// (0x0002dabc) list_pinb_item_pane_ParamLimits

0x1afc,	// (0x0002dabc) list_pinb_item_pane

0xb485,	// (0x00037445) list_highlight_pane_cp02

0x1b0e,	// (0x0002dace) list_pinb_item_pane_g1_ParamLimits

0x1b0e,	// (0x0002dace) list_pinb_item_pane_g1

0x1b1b,	// (0x0002dadb) list_pinb_item_pane_g2_ParamLimits

0x1b1b,	// (0x0002dadb) list_pinb_item_pane_g2

0x1b27,	// (0x0002dae7) list_pinb_item_pane_g3_ParamLimits

0x1b27,	// (0x0002dae7) list_pinb_item_pane_g3

0x1b38,	// (0x0002daf8) list_pinb_item_pane_g4_ParamLimits

0x1b38,	// (0x0002daf8) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003b0f0) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003b0f0) list_pinb_item_pane_g

0x1b44,	// (0x0002db04) list_pinb_item_pane_t1_ParamLimits

0x1b44,	// (0x0002db04) list_pinb_item_pane_t1

0x045e,	// (0x0002c41e) calc_display_pane

0x0486,	// (0x0002c446) calc_paper_pane

0x04a9,	// (0x0002c469) grid_calc_pane

0xb485,	// (0x00037445) bg_list_pane_cp01

0x1b5b,	// (0x0002db1b) clock_g1

0x1b63,	// (0x0002db23) clock_g2

0x0001,

0xf139,	// (0x0003b0f9) clock_g

0x1b6b,	// (0x0002db2b) clock_t1_ParamLimits

0x1b6b,	// (0x0002db2b) clock_t1

0x1b80,	// (0x0002db40) clock_t2_ParamLimits

0x1b80,	// (0x0002db40) clock_t2

0x1b92,	// (0x0002db52) clock_t3_ParamLimits

0x1b92,	// (0x0002db52) clock_t3

0x1ba4,	// (0x0002db64) clock_t4_ParamLimits

0x1ba4,	// (0x0002db64) clock_t4

0x1bb6,	// (0x0002db76) clock_t5_ParamLimits

0x1bb6,	// (0x0002db76) clock_t5

0x1bcb,	// (0x0002db8b) clock_t6_ParamLimits

0x1bcb,	// (0x0002db8b) clock_t6

0x1bdd,	// (0x0002db9d) clock_t7_ParamLimits

0x1bdd,	// (0x0002db9d) clock_t7

0x1bef,	// (0x0002dbaf) clock_t8_ParamLimits

0x1bef,	// (0x0002dbaf) clock_t8

0x1c03,	// (0x0002dbc3) clock_t9_ParamLimits

0x1c03,	// (0x0002dbc3) clock_t9

0x0008,

0xf13e,	// (0x0003b0fe) clock_t_ParamLimits

0xf13e,	// (0x0003b0fe) clock_t

0xbe7a,	// (0x00037e3a) popup_clock_analogue_window_cp02

0xbe7a,	// (0x00037e3a) popup_clock_digital_window_cp01

0xbe82,	// (0x00037e42) listscroll_help_pane

0xb485,	// (0x00037445) phob_pre_status_pane

0xbe8c,	// (0x00037e4c) grid_qdial_pane

0xbdf3,	// (0x00037db3) listscroll_mce_pane

0xbdf3,	// (0x00037db3) bg_notes_pane

0xbe96,	// (0x00037e56) list_notes_pane

0x1c17,	// (0x0002dbd7) scroll_pane_cp06

0xbea4,	// (0x00037e64) bg_calc_paper_pane

0xb5a1,	// (0x00037561) list_calc_pane

0xbeb8,	// (0x00037e78) bg_calc_display_pane

0x04d7,	// (0x0002c497) calc_display_pane_t1

0x04e9,	// (0x0002c4a9) calc_display_pane_t2

0xb5bb,	// (0x0003757b) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003b111) calc_display_pane_t

0x04fb,	// (0x0002c4bb) cell_calc_pane_ParamLimits

0x04fb,	// (0x0002c4bb) cell_calc_pane

0xbec4,	// (0x00037e84) bg_calc_paper_pane_g1

0xbed0,	// (0x00037e90) bg_calc_paper_pane_g2

0xbedc,	// (0x00037e9c) bg_calc_paper_pane_g3

0xbee8,	// (0x00037ea8) bg_calc_paper_pane_g4

0xbef4,	// (0x00037eb4) bg_calc_paper_pane_g5

0x1c2b,	// (0x0002dbeb) bg_calc_paper_pane_g6

0x1c3a,	// (0x0002dbfa) bg_calc_paper_pane_g7

0x1c49,	// (0x0002dc09) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003b118) bg_calc_paper_pane_g

0x1c5c,	// (0x0002dc1c) calc_bg_paper_pane_g9

0x1c6f,	// (0x0002dc2f) list_calc_item_pane_ParamLimits

0x1c6f,	// (0x0002dc2f) list_calc_item_pane

0xbf00,	// (0x00037ec0) list_calc_item_pane_g1

0xb5cd,	// (0x0003758d) list_calc_item_pane_t1_ParamLimits

0xb5cd,	// (0x0003758d) list_calc_item_pane_t1

0x0530,	// (0x0002c4f0) list_calc_item_pane_t2_ParamLimits

0x0530,	// (0x0002c4f0) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003b129) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003b129) list_calc_item_pane_t

0xbf0d,	// (0x00037ecd) cell_calc_pane_g1

0xbf17,	// (0x00037ed7) grid_highlight_pane_cp02

0x1c84,	// (0x0002dc44) bg_calc_display_pane_g1

0x0562,	// (0x0002c522) bg_calc_display_pane_g2

0x1c8d,	// (0x0002dc4d) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003b133) bg_calc_display_pane_g

0x056c,	// (0x0002c52c) cell_qdial_pane_ParamLimits

0x056c,	// (0x0002c52c) cell_qdial_pane

0x1c96,	// (0x0002dc56) cell_qdial_pane_g1_ParamLimits

0x1c96,	// (0x0002dc56) cell_qdial_pane_g1

0x1cac,	// (0x0002dc6c) cell_qdial_pane_g2_ParamLimits

0x1cac,	// (0x0002dc6c) cell_qdial_pane_g2

0xbf39,	// (0x00037ef9) cell_qdial_pane_g3_ParamLimits

0xbf39,	// (0x00037ef9) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003b13a) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003b13a) cell_qdial_pane_g

0x1cd3,	// (0x0002dc93) cell_qdial_pane_t1_ParamLimits

0x1cd3,	// (0x0002dc93) cell_qdial_pane_t1

0x1ceb,	// (0x0002dcab) cell_qdial_pane_t2_ParamLimits

0x1ceb,	// (0x0002dcab) cell_qdial_pane_t2

0x1cfe,	// (0x0002dcbe) cell_qdial_pane_t3_ParamLimits

0x1cfe,	// (0x0002dcbe) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003b143) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003b143) cell_qdial_pane_t

0xb485,	// (0x00037445) grid_highlight_pane_cp04

0xbf45,	// (0x00037f05) thumbnail_qdial_pane_ParamLimits

0xbf45,	// (0x00037f05) thumbnail_qdial_pane

0xbfa1,	// (0x00037f61) list_help_pane

0xbfaa,	// (0x00037f6a) scroll_pane_cp02

0x1d11,	// (0x0002dcd1) help_list_pane_t1_ParamLimits

0x1d11,	// (0x0002dcd1) help_list_pane_t1

0xb5df,	// (0x0003759f) bg_notes_pane_g2

0xb5e7,	// (0x000375a7) bg_notes_pane_g3

0xb5ef,	// (0x000375af) notes_bg_pane_g1

0xb5f7,	// (0x000375b7) notes_bg_pane_g4

0xb5ff,	// (0x000375bf) notes_bg_pane_g5

0xb607,	// (0x000375c7) notes_bg_pane_g6

0xb60f,	// (0x000375cf) notes_bg_pane_g7

0xb617,	// (0x000375d7) notes_bg_pane_g8

0xb61f,	// (0x000375df) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003b161) notes_bg_pane_g

0x1d2e,	// (0x0002dcee) list_notes_text_pane_ParamLimits

0x1d2e,	// (0x0002dcee) list_notes_text_pane

0xbfb3,	// (0x00037f73) list_notes_text_pane_g1

0x1d43,	// (0x0002dd03) list_notes_text_pane_t1

0x1d51,	// (0x0002dd11) listscroll_cale_week_pane

0x1d7d,	// (0x0002dd3d) bg_cale_heading_pane

0xbfd6,	// (0x00037f96) bg_cale_pane_cp01

0x1d95,	// (0x0002dd55) cale_week_corner_pane

0x1db4,	// (0x0002dd74) cale_week_day_heading_pane

0x1dd1,	// (0x0002dd91) cale_week_scroll_pane_g1

0x1de4,	// (0x0002dda4) cale_week_scroll_pane_g2

0x1dfc,	// (0x0002ddbc) cale_week_scroll_pane_g3

0x1e14,	// (0x0002ddd4) cale_week_scroll_pane_g4

0x1e2c,	// (0x0002ddec) cale_week_scroll_pane_g5

0x1e4c,	// (0x0002de0c) cale_week_scroll_pane_g6

0x1e6c,	// (0x0002de2c) cale_week_scroll_pane_g7

0x1e8c,	// (0x0002de4c) cale_week_scroll_pane_g8

0x1eb0,	// (0x0002de70) cale_week_scroll_pane_g9

0x1ec8,	// (0x0002de88) cale_week_scroll_pane_g10

0x1ee0,	// (0x0002dea0) cale_week_scroll_pane_g11

0x1ef8,	// (0x0002deb8) cale_week_scroll_pane_g12

0x1f10,	// (0x0002ded0) cale_week_scroll_pane_g13

0x1f10,	// (0x0002ded0) cale_week_scroll_pane_g14

0x1f10,	// (0x0002ded0) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003b170) cale_week_scroll_pane_g

0x1f4c,	// (0x0002df0c) cale_week_time_pane

0x1f70,	// (0x0002df30) grid_cale_week_pane

0xc005,	// (0x00037fc5) scroll_pane_cp08

0x1f96,	// (0x0002df56) cell_cale_week_pane_ParamLimits

0x1f96,	// (0x0002df56) cell_cale_week_pane

0x2024,	// (0x0002dfe4) cale_week_day_heading_pane_t1

0x204e,	// (0x0002e00e) cale_week_day_heading_pane_t2

0x207d,	// (0x0002e03d) cale_week_day_heading_pane_t3

0x20ac,	// (0x0002e06c) cale_week_day_heading_pane_t4

0x20db,	// (0x0002e09b) cale_week_day_heading_pane_t5

0x2112,	// (0x0002e0d2) cale_week_day_heading_pane_t6

0x2149,	// (0x0002e109) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003b191) cale_week_day_heading_pane_t

0xc022,	// (0x00037fe2) bg_cale_side_pane

0x0580,	// (0x0002c540) cale_week_time_pane_t1

0x059a,	// (0x0002c55a) cale_week_time_pane_t2

0x05b4,	// (0x0002c574) cale_week_time_pane_t3

0x05ce,	// (0x0002c58e) cale_week_time_pane_t4

0x05e8,	// (0x0002c5a8) cale_week_time_pane_t5

0x0602,	// (0x0002c5c2) cale_week_time_pane_t6

0x061c,	// (0x0002c5dc) cale_week_time_pane_t7

0x0636,	// (0x0002c5f6) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003b1a0) cale_week_time_pane_t

0x2173,	// (0x0002e133) cell_cale_week_pane_g2

0x2192,	// (0x0002e152) cell_cale_week_pane_g3_ParamLimits

0x2192,	// (0x0002e152) cell_cale_week_pane_g3

0xc030,	// (0x00037ff0) grid_highlight_pane_cp07

0xc038,	// (0x00037ff8) listscroll_gms_pane

0xc042,	// (0x00038002) grid_gms_pane

0xc04b,	// (0x0003800b) listscroll_gms_pane_g1

0xc053,	// (0x00038013) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003b1b1) listscroll_gms_pane_g

0x21aa,	// (0x0002e16a) scroll_pane_cp010

0x21b5,	// (0x0002e175) cell_gms_pane_ParamLimits

0x21b5,	// (0x0002e175) cell_gms_pane

0x21c8,	// (0x0002e188) cell_gms_pane_g1

0xc05b,	// (0x0003801b) cell_gms_pane_g2

0xc063,	// (0x00038023) cell_gms_pane_g3

0xc06c,	// (0x0003802c) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003b1b6) cell_gms_pane_g

0xc075,	// (0x00038035) grid_highlight_pane_cp09

0x45ee,	// (0x000305ae) phob_pre_status_pane_g1

0x45f6,	// (0x000305b6) phob_pre_status_pane_g2

0x45fe,	// (0x000305be) phob_pre_status_pane_g3

0x4606,	// (0x000305c6) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003b5a1) phob_pre_status_pane_g

0x4616,	// (0x000305d6) phob_pre_status_pane_t1

0x4624,	// (0x000305e4) phob_pre_status_pane_t2

0x4634,	// (0x000305f4) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003b5ac) phob_pre_status_pane_t

0xc07d,	// (0x0003803d) bg_list_pane_cp05

0x21d8,	// (0x0002e198) grid_vorec_pane

0x21e0,	// (0x0002e1a0) vorec_t1

0x21ee,	// (0x0002e1ae) vorec_t2

0x21fc,	// (0x0002e1bc) vorec_t3

0x220a,	// (0x0002e1ca) vorec_t4

0x1940,	// (0x0002d900) vorec_t5

0x194e,	// (0x0002d90e) vorec_t6

0x0004,

0xf1ff,	// (0x0003b1bf) vorec_t

0x195c,	// (0x0002d91c) wait_bar_pane_cp01

0x2226,	// (0x0002e1e6) cell_vorec_pane_ParamLimits

0x2226,	// (0x0002e1e6) cell_vorec_pane

0xb627,	// (0x000375e7) cell_vorec_pane_g1

0xb485,	// (0x00037445) grid_highlight_pane_cp05

0x224e,	// (0x0002e20e) cams_zoom_pane

0x225d,	// (0x0002e21d) image_vga_pane

0x2277,	// (0x0002e237) main_camera_pane_g1

0x2289,	// (0x0002e249) main_camera_pane_g2

0x2299,	// (0x0002e259) main_camera_pane_g3

0x22a9,	// (0x0002e269) main_camera_pane_g4

0x22b9,	// (0x0002e279) main_camera_pane_g5

0x22c9,	// (0x0002e289) main_camera_pane_g6

0x22db,	// (0x0002e29b) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003b1ca) main_camera_pane_g

0x22eb,	// (0x0002e2ab) main_camera_pane_t1

0x2301,	// (0x0002e2c1) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003b1db) main_camera_pane_t

0x233b,	// (0x0002e2fb) cams_zoom_pane_cp_ParamLimits

0x233b,	// (0x0002e2fb) cams_zoom_pane_cp

0x2363,	// (0x0002e323) image_cif_pane_ParamLimits

0x2363,	// (0x0002e323) image_cif_pane

0x2399,	// (0x0002e359) image_subqcif_pane

0x23a1,	// (0x0002e361) main_video_pane_g1_ParamLimits

0x23a1,	// (0x0002e361) main_video_pane_g1

0x23c5,	// (0x0002e385) main_video_pane_g2_ParamLimits

0x23c5,	// (0x0002e385) main_video_pane_g2

0x23f9,	// (0x0002e3b9) main_video_pane_g3_ParamLimits

0x23f9,	// (0x0002e3b9) main_video_pane_g3

0x2427,	// (0x0002e3e7) main_video_pane_g4_ParamLimits

0x2427,	// (0x0002e3e7) main_video_pane_g4

0x2455,	// (0x0002e415) main_video_pane_g5_ParamLimits

0x2455,	// (0x0002e415) main_video_pane_g5

0xc091,	// (0x00038051) main_video_pane_g6_ParamLimits

0xc091,	// (0x00038051) main_video_pane_g6

0x0006,

0xf220,	// (0x0003b1e0) main_video_pane_g_ParamLimits

0xf220,	// (0x0003b1e0) main_video_pane_g

0x247e,	// (0x0002e43e) main_video_pane_t1_ParamLimits

0x247e,	// (0x0002e43e) main_video_pane_t1

0xc0ab,	// (0x0003806b) cams_zoom_pane_g1

0xc0b4,	// (0x00038074) cams_zoom_pane_g2

0xc0bd,	// (0x0003807d) cams_zoom_pane_g3

0xc0c6,	// (0x00038086) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003b1ef) cams_zoom_pane_g

0x24db,	// (0x0002e49b) grid_cams_pane

0x24f5,	// (0x0002e4b5) linegrid_cams_pane

0x2509,	// (0x0002e4c9) cell_cams_pane_ParamLimits

0x2509,	// (0x0002e4c9) cell_cams_pane

0xc0cf,	// (0x0003808f) cams_burst_image_pane

0xc0d7,	// (0x00038097) cell_cams_pane_g1

0xb485,	// (0x00037445) grid_highlight_pane_cp03

0xbf0d,	// (0x00037ecd) mp_bg_pane_g1

0xb485,	// (0x00037445) bg_list_pane_cp03

0xde89,	// (0x00039e49) bg_mp_pane

0xde91,	// (0x00039e51) grid_mp_pane

0xde99,	// (0x00039e59) media_player_g1

0xdea1,	// (0x00039e61) media_player_t1

0xdeaf,	// (0x00039e6f) media_player_t2

0xdebd,	// (0x00039e7d) media_player_t3

0xdecb,	// (0x00039e8b) media_player_t4

0xded9,	// (0x00039e99) media_player_t5

0xdee7,	// (0x00039ea7) media_player_t6

0xdef5,	// (0x00039eb5) media_player_t7

0x0006,

0xf5cb,	// (0x0003b58b) media_player_t

0xdf03,	// (0x00039ec3) wait_bar_pane_cp02

0xf5b0,	// (0x0003b570) main_usb_pane_t

0x45e5,	// (0x000305a5) cell_mp_pane

0xbf0d,	// (0x00037ecd) cell_mp_pane_g1

0xb485,	// (0x00037445) grid_highlight_pane_cp06

0xc0df,	// (0x0003809f) grid_skin_colour_pane

0xc0e7,	// (0x000380a7) list_highlight_pane_cp03

0x263f,	// (0x0002e5ff) skin_g1

0xc0ef,	// (0x000380af) skin_t1

0xc0fe,	// (0x000380be) skin_t2

0x0001,

0xf264,	// (0x0003b224) skin_t

0x2647,	// (0x0002e607) cell_skin_colour_pane_ParamLimits

0x2647,	// (0x0002e607) cell_skin_colour_pane

0xc10c,	// (0x000380cc) cell_skin_colour_pane_g1

0x26c0,	// (0x0002e680) call_video_g1_ParamLimits

0x26c0,	// (0x0002e680) call_video_g1

0x26dc,	// (0x0002e69c) call_video_g2_ParamLimits

0x26dc,	// (0x0002e69c) call_video_g2

0x0001,

0xf269,	// (0x0003b229) call_video_g_ParamLimits

0xf269,	// (0x0003b229) call_video_g

0x272e,	// (0x0002e6ee) call_video_uplink_pane_cp1_ParamLimits

0x272e,	// (0x0002e6ee) call_video_uplink_pane_cp1

0xc11e,	// (0x000380de) call_video_uplink_pane_cp2

0x27cd,	// (0x0002e78d) video_down_crop_pane_ParamLimits

0x27cd,	// (0x0002e78d) video_down_crop_pane

0x28c4,	// (0x0002e884) video_down_pane_ParamLimits

0x28c4,	// (0x0002e884) video_down_pane

0xc126,	// (0x000380e6) video_down_subqcif_pane_ParamLimits

0xc126,	// (0x000380e6) video_down_subqcif_pane

0xc13e,	// (0x000380fe) video_down_subqcif_pane_cp_ParamLimits

0xc13e,	// (0x000380fe) video_down_subqcif_pane_cp

0xc164,	// (0x00038124) im_reading_pane_ParamLimits

0xc164,	// (0x00038124) im_reading_pane

0x29d2,	// (0x0002e992) im_writing_pane_ParamLimits

0x29d2,	// (0x0002e992) im_writing_pane

0x29e8,	// (0x0002e9a8) im_reading_pane_t1

0xc17e,	// (0x0003813e) list_im_pane

0xc18f,	// (0x0003814f) scroll_pane_cp07

0x2a21,	// (0x0002e9e1) im_writing_pane_t1_ParamLimits

0x2a21,	// (0x0002e9e1) im_writing_pane_t1

0xc1a8,	// (0x00038168) im_writing_pane_t2_ParamLimits

0xc1a8,	// (0x00038168) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003b233) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003b233) im_writing_pane_t

0xb485,	// (0x00037445) input_focus_pane_cp04

0xb485,	// (0x00037445) input_focus_pane_cp05

0x2a36,	// (0x0002e9f6) list_im_single_pane_ParamLimits

0x2a36,	// (0x0002e9f6) list_im_single_pane

0x2a4a,	// (0x0002ea0a) list_single_im_pane_t1

0x45a5,	// (0x00030565) blid_accuracy_pane

0x45ad,	// (0x0003056d) blid_compass_pane

0x45b7,	// (0x00030577) main_location_t1

0x45c7,	// (0x00030587) main_location_t2

0x45d7,	// (0x00030597) main_location_t3

0x0002,

0xf5da,	// (0x0003b59a) main_location_t

0xb485,	// (0x00037445) aid_levels_location

0xbf0d,	// (0x00037ecd) blid_accuracy_pane_g1

0xbf0d,	// (0x00037ecd) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003b295) blid_accuracy_pane_g

0xc1f0,	// (0x000381b0) wml_content_pane

0xc22e,	// (0x000381ee) wml_button_pane_ParamLimits

0xc22e,	// (0x000381ee) wml_button_pane

0x2a59,	// (0x0002ea19) wml_list_single_large_pane_ParamLimits

0x2a59,	// (0x0002ea19) wml_list_single_large_pane

0x2a6e,	// (0x0002ea2e) wml_list_single_medium_pane_ParamLimits

0x2a6e,	// (0x0002ea2e) wml_list_single_medium_pane

0x2a84,	// (0x0002ea44) wml_list_single_small_pane_ParamLimits

0x2a84,	// (0x0002ea44) wml_list_single_small_pane

0xc242,	// (0x00038202) wml_selection_box_pane_ParamLimits

0xc242,	// (0x00038202) wml_selection_box_pane

0xc255,	// (0x00038215) wml_list_single_pane_t1

0xc264,	// (0x00038224) wml_list_single_medium_pane_t1

0xc273,	// (0x00038233) wml_list_single_large_pane_t1

0xc282,	// (0x00038242) input_focus_pane_cp02_ParamLimits

0xc282,	// (0x00038242) input_focus_pane_cp02

0xc295,	// (0x00038255) wml_selection_box_pane_g1

0xc29e,	// (0x0003825e) wml_selection_box_pane_t1_ParamLimits

0xc29e,	// (0x0003825e) wml_selection_box_pane_t1

0xbdf3,	// (0x00037db3) bg_wml_button_pane_ParamLimits

0xbdf3,	// (0x00037db3) bg_wml_button_pane

0xc2b6,	// (0x00038276) wml_button_pane_g1

0xc2be,	// (0x0003827e) wml_button_pane_t1

0xc2b6,	// (0x00038276) wml_button_bg_pane_g1

0xc2ce,	// (0x0003828e) wml_button_bg_pane_g2

0xc2d6,	// (0x00038296) wml_button_bg_pane_g3

0xc2de,	// (0x0003829e) wml_button_bg_pane_g4

0xc2e6,	// (0x000382a6) wml_button_bg_pane_g5

0xc2ee,	// (0x000382ae) wml_button_bg_pane_g6

0xc2f6,	// (0x000382b6) wml_button_bg_pane_g7

0xc2fe,	// (0x000382be) wml_button_bg_pane_g8

0xc306,	// (0x000382c6) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003b238) wml_button_bg_pane_g

0x2a9c,	// (0x0002ea5c) bg_list_pane_cp02

0xc30e,	// (0x000382ce) mce_header_pane_ParamLimits

0xc30e,	// (0x000382ce) mce_header_pane

0xc324,	// (0x000382e4) mce_icon_pane

0xc324,	// (0x000382e4) mce_image_pane

0xc32d,	// (0x000382ed) mce_text_pane_ParamLimits

0xc32d,	// (0x000382ed) mce_text_pane

0x2aa4,	// (0x0002ea64) scroll_pane_cp03

0xc226,	// (0x000381e6) scroll_pane_cp04

0xc340,	// (0x00038300) scroll_pane_cp05_ParamLimits

0xc340,	// (0x00038300) scroll_pane_cp05

0x2aae,	// (0x0002ea6e) mce_header_field_pane_ParamLimits

0x2aae,	// (0x0002ea6e) mce_header_field_pane

0x2ac5,	// (0x0002ea85) mce_header_field_pane_2_ParamLimits

0x2ac5,	// (0x0002ea85) mce_header_field_pane_2

0x2adb,	// (0x0002ea9b) mce_header_field_pane_3

0x2ae3,	// (0x0002eaa3) list_single_mce_message_pane_ParamLimits

0x2ae3,	// (0x0002eaa3) list_single_mce_message_pane

0x2af8,	// (0x0002eab8) list_single_mce_smart_pane_ParamLimits

0x2af8,	// (0x0002eab8) list_single_mce_smart_pane

0xc34c,	// (0x0003830c) input_focus_pane_cp03

0xc355,	// (0x00038315) list_header_data_pane

0x2b18,	// (0x0002ead8) mce_header_field_pane_t1

0x2b28,	// (0x0002eae8) list_single_mce_header_pane_ParamLimits

0x2b28,	// (0x0002eae8) list_single_mce_header_pane

0xc35d,	// (0x0003831d) list_single_mce_header_pane_t1

0xc36c,	// (0x0003832c) list_single_mce_message_pane_g1

0xc374,	// (0x00038334) list_single_mce_message_pane_t1

0x2b62,	// (0x0002eb22) bg_cale_heading_pane_cp01_ParamLimits

0x2b62,	// (0x0002eb22) bg_cale_heading_pane_cp01

0xc382,	// (0x00038342) bg_cale_pane_cp02_ParamLimits

0xc382,	// (0x00038342) bg_cale_pane_cp02

0x2b9c,	// (0x0002eb5c) cale_month_corner_pane

0x2bbb,	// (0x0002eb7b) cale_month_day_heading_pane_ParamLimits

0x2bbb,	// (0x0002eb7b) cale_month_day_heading_pane

0x2c0d,	// (0x0002ebcd) cale_month_pane_g1_ParamLimits

0x2c0d,	// (0x0002ebcd) cale_month_pane_g1

0x2c3c,	// (0x0002ebfc) cale_month_pane_g2_ParamLimits

0x2c3c,	// (0x0002ebfc) cale_month_pane_g2

0x2c6c,	// (0x0002ec2c) cale_month_pane_g3_ParamLimits

0x2c6c,	// (0x0002ec2c) cale_month_pane_g3

0x2ca8,	// (0x0002ec68) cale_month_pane_g4_ParamLimits

0x2ca8,	// (0x0002ec68) cale_month_pane_g4

0x2ce4,	// (0x0002eca4) cale_month_pane_g5_ParamLimits

0x2ce4,	// (0x0002eca4) cale_month_pane_g5

0x2d2c,	// (0x0002ecec) cale_month_pane_g6_ParamLimits

0x2d2c,	// (0x0002ecec) cale_month_pane_g6

0x2d78,	// (0x0002ed38) cale_month_pane_g7_ParamLimits

0x2d78,	// (0x0002ed38) cale_month_pane_g7

0x2dcc,	// (0x0002ed8c) cale_month_pane_g8_ParamLimits

0x2dcc,	// (0x0002ed8c) cale_month_pane_g8

0x2e20,	// (0x0002ede0) cale_month_pane_g9_ParamLimits

0x2e20,	// (0x0002ede0) cale_month_pane_g9

0x2e72,	// (0x0002ee32) cale_month_pane_g10_ParamLimits

0x2e72,	// (0x0002ee32) cale_month_pane_g10

0x2ec4,	// (0x0002ee84) cale_month_pane_g11_ParamLimits

0x2ec4,	// (0x0002ee84) cale_month_pane_g11

0x2f16,	// (0x0002eed6) cale_month_pane_g12_ParamLimits

0x2f16,	// (0x0002eed6) cale_month_pane_g12

0x2f68,	// (0x0002ef28) cale_month_pane_g13_ParamLimits

0x2f68,	// (0x0002ef28) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003b24b) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003b24b) cale_month_pane_g

0x2fba,	// (0x0002ef7a) cale_month_week_pane

0x2fde,	// (0x0002ef9e) grid_cale_month_pane_ParamLimits

0x2fde,	// (0x0002ef9e) grid_cale_month_pane

0x3027,	// (0x0002efe7) cale_month_day_heading_pane_t1

0x30ad,	// (0x0002f06d) cale_month_day_heading_pane_t2

0x3126,	// (0x0002f0e6) cale_month_day_heading_pane_t3

0x319f,	// (0x0002f15f) cale_month_day_heading_pane_t4

0x3220,	// (0x0002f1e0) cale_month_day_heading_pane_t5

0x32a9,	// (0x0002f269) cale_month_day_heading_pane_t6

0x3332,	// (0x0002f2f2) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003b266) cale_month_day_heading_pane_t

0xc022,	// (0x00037fe2) bg_cale_side_pane_cp01

0x33c3,	// (0x0002f383) cale_month_week_pane_t1

0x33dc,	// (0x0002f39c) cale_month_week_pane_t2

0x33f5,	// (0x0002f3b5) cale_month_week_pane_t3

0x340e,	// (0x0002f3ce) cale_month_week_pane_t4

0x3427,	// (0x0002f3e7) cale_month_week_pane_t5

0x3440,	// (0x0002f400) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003b275) cale_month_week_pane_t

0x3459,	// (0x0002f419) cell_cale_month_pane_ParamLimits

0x3459,	// (0x0002f419) cell_cale_month_pane

0xb631,	// (0x000375f1) cell_cale_month_pane_g1

0x0650,	// (0x0002c610) cell_cale_month_pane_t1_ParamLimits

0x0650,	// (0x0002c610) cell_cale_month_pane_t1

0xc030,	// (0x00037ff0) grid_highlight_pane_cp08

0xbf0d,	// (0x00037ecd) main_smil_g1

0x35b1,	// (0x0002f571) smil_status_pane

0xc3c1,	// (0x00038381) smil_text_pane

0xdda9,	// (0x00039d69) bg_popup_call3_rect_pane_g8

0xddb1,	// (0x00039d71) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003b52e) bg_popup_call3_rect_pane_g

0xdff8,	// (0x00039fb8) smil_status_volume_pane_g1

0xc3cb,	// (0x0003838b) smil_status_pane_t1

0xb77b,	// (0x0003773b) volume_smil_pane

0xc3e2,	// (0x000383a2) list_smil_text_pane

0x35c4,	// (0x0002f584) scroll_pane_cp011

0x35cf,	// (0x0002f58f) smil_text_list_pane_t1_ParamLimits

0x35cf,	// (0x0002f58f) smil_text_list_pane_t1

0xb63d,	// (0x000375fd) aid_volume_smil_ParamLimits

0xb63d,	// (0x000375fd) aid_volume_smil

0xbf0d,	// (0x00037ecd) smil_volume_pane_g1

0xbf0d,	// (0x00037ecd) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003b295) smil_volume_pane_g

0x1d51,	// (0x0002dd11) listscroll_cale_day_pane

0xc3ec,	// (0x000383ac) bg_cale_pane

0xc404,	// (0x000383c4) list_cale_pane

0xc427,	// (0x000383e7) scroll_pane_cp09

0xc438,	// (0x000383f8) cale_bg_pane_g1

0xc440,	// (0x00038400) cale_bg_pane_g2

0xc448,	// (0x00038408) cale_bg_pane_g3

0xc450,	// (0x00038410) cale_bg_pane_g4

0xc458,	// (0x00038418) cale_bg_pane_g5

0xc460,	// (0x00038420) cale_bg_pane_g6

0xc468,	// (0x00038428) cale_bg_pane_g7

0xc470,	// (0x00038430) cale_bg_pane_g8

0xc478,	// (0x00038438) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003b29a) cale_bg_pane_g

0x3613,	// (0x0002f5d3) list_cale_time_pane_ParamLimits

0x3613,	// (0x0002f5d3) list_cale_time_pane

0xc480,	// (0x00038440) list_cale_time_pane_g1_ParamLimits

0xc480,	// (0x00038440) list_cale_time_pane_g1

0xc48c,	// (0x0003844c) list_cale_time_pane_g2_ParamLimits

0xc48c,	// (0x0003844c) list_cale_time_pane_g2

0x3628,	// (0x0002f5e8) list_cale_time_pane_g3_ParamLimits

0x3628,	// (0x0002f5e8) list_cale_time_pane_g3

0x3636,	// (0x0002f5f6) list_cale_time_pane_g4_ParamLimits

0x3636,	// (0x0002f5f6) list_cale_time_pane_g4

0x3644,	// (0x0002f604) list_cale_time_pane_g5_ParamLimits

0x3644,	// (0x0002f604) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003b2ad) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003b2ad) list_cale_time_pane_g

0xc4a6,	// (0x00038466) list_cale_time_pane_t1_ParamLimits

0xc4a6,	// (0x00038466) list_cale_time_pane_t1

0xc4ce,	// (0x0003848e) list_cale_time_pane_t2_ParamLimits

0xc4ce,	// (0x0003848e) list_cale_time_pane_t2

0x39a5,	// (0x0002f965) aid_blid_cardinal_pane

0x39e3,	// (0x0002f9a3) compass_pane_t4

0xc4f6,	// (0x000384b6) list_cale_time_pane_t4_ParamLimits

0xc4f6,	// (0x000384b6) list_cale_time_pane_t4

0x39f1,	// (0x0002f9b1) compass_pane_t5

0x39ff,	// (0x0002f9bf) compass_pane_t6

0x3a0d,	// (0x0002f9cd) compass_pane_t7

0xc9c1,	// (0x00038981) navi_pane_cc_t1

0xcb9e,	// (0x00038b5e) aid_phob_thumbnail_center_pane

0x3fbd,	// (0x0002ff7d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003b2ba) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003b2ba) list_cale_time_pane_t

0xb0dc,	// (0x0003709c) bg_popup_window_pane_cp02_ParamLimits

0xb0dc,	// (0x0003709c) bg_popup_window_pane_cp02

0xc51e,	// (0x000384de) heading_pane_cp01_ParamLimits

0xc51e,	// (0x000384de) heading_pane_cp01

0xc52a,	// (0x000384ea) loc_req_pane_ParamLimits

0xc52a,	// (0x000384ea) loc_req_pane

0xc53a,	// (0x000384fa) loc_type_pane_ParamLimits

0xc53a,	// (0x000384fa) loc_type_pane

0xc54c,	// (0x0003850c) loc_type_pane_t1_ParamLimits

0xc54c,	// (0x0003850c) loc_type_pane_t1

0xc55e,	// (0x0003851e) loc_type_pane_t2_ParamLimits

0xc55e,	// (0x0003851e) loc_type_pane_t2

0xc570,	// (0x00038530) loc_type_pane_t3_ParamLimits

0xc570,	// (0x00038530) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003b2c1) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003b2c1) loc_type_pane_t

0xc582,	// (0x00038542) list_loc_req_pane

0xc58c,	// (0x0003854c) scroll_pane_cp012

0x3652,	// (0x0002f612) list_single_loc_request_popup_menu_pane_ParamLimits

0x3652,	// (0x0002f612) list_single_loc_request_popup_menu_pane

0xc597,	// (0x00038557) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc597,	// (0x00038557) list_single_loc_request_popup_menu_pane_g1

0xc5a3,	// (0x00038563) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc5a3,	// (0x00038563) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003b2c8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003b2c8) list_single_loc_request_popup_menu_pane_g

0xc5af,	// (0x0003856f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc5af,	// (0x0003856f) list_single_loc_request_popup_menu_pane_t1

0xbdf3,	// (0x00037db3) bg_popup_window_pane_cp03_ParamLimits

0xbdf3,	// (0x00037db3) bg_popup_window_pane_cp03

0xc5c5,	// (0x00038585) heading_loc_req_pane_ParamLimits

0xc5c5,	// (0x00038585) heading_loc_req_pane

0x365f,	// (0x0002f61f) popup_dyc_status_message_window_g1_ParamLimits

0x365f,	// (0x0002f61f) popup_dyc_status_message_window_g1

0x3673,	// (0x0002f633) popup_dyc_status_message_window_t1_ParamLimits

0x3673,	// (0x0002f633) popup_dyc_status_message_window_t1

0x3688,	// (0x0002f648) popup_dyc_status_message_window_t2_ParamLimits

0x3688,	// (0x0002f648) popup_dyc_status_message_window_t2

0x369d,	// (0x0002f65d) popup_dyc_status_message_window_t3_ParamLimits

0x369d,	// (0x0002f65d) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003b2cd) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003b2cd) popup_dyc_status_message_window_t

0xb485,	// (0x00037445) bg_heading_pane_cp01

0xc5d1,	// (0x00038591) heading_loc_req_pane_g1

0xc5d9,	// (0x00038599) heading_loc_req_pane_g2

0xc5e1,	// (0x000385a1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003b2d4) heading_loc_req_pane_g

0xc5e9,	// (0x000385a9) heading_loc_req_pane_t1

0xc5f8,	// (0x000385b8) bg_popup_sub_pane_cp01_ParamLimits

0xc5f8,	// (0x000385b8) bg_popup_sub_pane_cp01

0xc606,	// (0x000385c6) popup_cale_events_window_g1_ParamLimits

0xc606,	// (0x000385c6) popup_cale_events_window_g1

0xc626,	// (0x000385e6) popup_cale_events_window_g2_ParamLimits

0xc626,	// (0x000385e6) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003b308) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003b308) popup_cale_events_window_g

0xc646,	// (0x00038606) popup_cale_events_window_t1_ParamLimits

0xc646,	// (0x00038606) popup_cale_events_window_t1

0xc658,	// (0x00038618) popup_cale_events_window_t2_ParamLimits

0xc658,	// (0x00038618) popup_cale_events_window_t2

0xc696,	// (0x00038656) popup_cale_events_window_t3_ParamLimits

0xc696,	// (0x00038656) popup_cale_events_window_t3

0xc6d0,	// (0x00038690) popup_cale_events_window_t4_ParamLimits

0xc6d0,	// (0x00038690) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003b30d) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003b30d) popup_cale_events_window_t

0x37a0,	// (0x0002f760) call_type_pane

0x37b0,	// (0x0002f770) popup_call_status_window_g1

0x37c4,	// (0x0002f784) popup_call_status_window_g2

0x37d8,	// (0x0002f798) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003b316) popup_call_status_window_g

0xc706,	// (0x000386c6) call_type_pane_g1

0xc70f,	// (0x000386cf) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003b31d) call_type_pane_g

0xb485,	// (0x00037445) bg_popup_sub_pane_cp02

0xc718,	// (0x000386d8) listscroll_popup_wml_pane

0xc720,	// (0x000386e0) list_wml_pane

0xc72a,	// (0x000386ea) scroll_pane_cp013

0xc735,	// (0x000386f5) list_single_graphic_popup_wml_pane_ParamLimits

0xc735,	// (0x000386f5) list_single_graphic_popup_wml_pane

0xbf0d,	// (0x00037ecd) list_single_graphic_popup_wml_pane_g1

0xc749,	// (0x00038709) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003b322) list_single_graphic_popup_wml_pane_g

0xc751,	// (0x00038711) list_single_graphic_popup_wml_pane_t1

0xc767,	// (0x00038727) aid_call_pane

0xbdeb,	// (0x00037dab) popup_clock_analogue_window_g1

0xbdeb,	// (0x00037dab) popup_clock_analogue_window_g2

0xb65f,	// (0x0003761f) popup_clock_analogue_window_g3

0xb65f,	// (0x0003761f) popup_clock_analogue_window_g4

0xbf0d,	// (0x00037ecd) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003b327) popup_clock_analogue_window_g

0xb667,	// (0x00037627) popup_clock_analogue_window_t1

0xb675,	// (0x00037635) clock_digital_number_pane_ParamLimits

0xb675,	// (0x00037635) clock_digital_number_pane

0xb681,	// (0x00037641) clock_digital_number_pane_cp02_ParamLimits

0xb681,	// (0x00037641) clock_digital_number_pane_cp02

0xb68d,	// (0x0003764d) clock_digital_number_pane_cp03_ParamLimits

0xb68d,	// (0x0003764d) clock_digital_number_pane_cp03

0xb699,	// (0x00037659) clock_digital_number_pane_cp04_ParamLimits

0xb699,	// (0x00037659) clock_digital_number_pane_cp04

0xb6a9,	// (0x00037669) clock_digital_separator_pane_ParamLimits

0xb6a9,	// (0x00037669) clock_digital_separator_pane

0xb6b5,	// (0x00037675) popup_clock_digital_window_t1

0xbf0d,	// (0x00037ecd) clock_digital_number_pane_g1

0xbf0d,	// (0x00037ecd) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003b295) clock_digital_number_pane_g

0xbf0d,	// (0x00037ecd) clock_digital_separator_pane_g1

0xbf0d,	// (0x00037ecd) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003b295) clock_digital_separator_pane_g

0xb485,	// (0x00037445) bg_popup_window_pane_cp04

0xc76f,	// (0x0003872f) heading_pane_cp03

0xc777,	// (0x00038737) listscroll_popup_gms_pane

0xc77f,	// (0x0003873f) grid_large_graphic_popup_pane

0xc789,	// (0x00038749) listscroll_popup_gms_pane_g1

0xc791,	// (0x00038751) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003b332) listscroll_popup_gms_pane_g

0xc226,	// (0x000381e6) scroll_pane_cp014

0x37e7,	// (0x0002f7a7) cell_large_graphic_popup_pane_ParamLimits

0x37e7,	// (0x0002f7a7) cell_large_graphic_popup_pane

0x37ff,	// (0x0002f7bf) cell_large_graphic_popup_pane_g1_ParamLimits

0x37ff,	// (0x0002f7bf) cell_large_graphic_popup_pane_g1

0xc799,	// (0x00038759) cell_large_graphic_popup_pane_g2_ParamLimits

0xc799,	// (0x00038759) cell_large_graphic_popup_pane_g2

0xc7a5,	// (0x00038765) cell_large_graphic_popup_pane_g3_ParamLimits

0xc7a5,	// (0x00038765) cell_large_graphic_popup_pane_g3

0xc7b2,	// (0x00038772) cell_large_graphic_popup_pane_g4_ParamLimits

0xc7b2,	// (0x00038772) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003b337) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003b337) cell_large_graphic_popup_pane_g

0xc7c2,	// (0x00038782) grid_highlight_pane_cp010

0xbf0d,	// (0x00037ecd) bg_popup_call_pane_g1

0xc7cc,	// (0x0003878c) list_single_graphic_popup_conf_pane_ParamLimits

0xc7cc,	// (0x0003878c) list_single_graphic_popup_conf_pane

0xc7df,	// (0x0003879f) list_highlight_pane_cp01

0xc7e8,	// (0x000387a8) list_single_graphic_popup_conf_pane_g1

0xc7f0,	// (0x000387b0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003b340) list_single_graphic_popup_conf_pane_g

0xc7f8,	// (0x000387b8) list_single_graphic_popup_conf_pane_t1

0xc806,	// (0x000387c6) linegrid_cams_pane_g1

0x380b,	// (0x0002f7cb) linegrid_cams_pane_g2

0xc063,	// (0x00038023) linegrid_cams_pane_g3

0xc80f,	// (0x000387cf) linegrid_cams_pane_g4

0x3814,	// (0x0002f7d4) linegrid_cams_pane_g5

0x381d,	// (0x0002f7dd) linegrid_cams_pane_g6

0xc06c,	// (0x0003802c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003b345) linegrid_cams_pane_g

0xc818,	// (0x000387d8) popup_clock_analogue_window

0xc818,	// (0x000387d8) popup_clock_digital_window

0xb485,	// (0x00037445) popup_phob_thumbnail_window

0xbf0d,	// (0x00037ecd) call_video_uplink_pane_g1

0xc821,	// (0x000387e1) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003b354) call_video_uplink_pane_g

0xc829,	// (0x000387e9) video_uplink_pane

0xc831,	// (0x000387f1) mce_image_pane_g1

0x3828,	// (0x0002f7e8) mce_image_pane_g2

0x3832,	// (0x0002f7f2) mce_image_pane_g3

0x383a,	// (0x0002f7fa) mce_image_pane_g4

0x3842,	// (0x0002f802) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003b359) mce_image_pane_g

0xc83b,	// (0x000387fb) control_top_pane_stacon_cp01_ParamLimits

0xc83b,	// (0x000387fb) control_top_pane_stacon_cp01

0xc84f,	// (0x0003880f) uni_indicator_pane_stacon_cp01_ParamLimits

0xc84f,	// (0x0003880f) uni_indicator_pane_stacon_cp01

0xc860,	// (0x00038820) bg_popup_sub_pane_cp03

0xc86a,	// (0x0003882a) chi_dic_find_pane

0x384a,	// (0x0002f80a) listscroll_chi_dic_pane

0xc872,	// (0x00038832) main_pane_chidic_g1

0xc87a,	// (0x0003883a) chi_dic_find_pane_t1

0xc888,	// (0x00038848) find_chidic_pane

0xc891,	// (0x00038851) chi_dic_list_pane_ParamLimits

0xc891,	// (0x00038851) chi_dic_list_pane

0xc8a2,	// (0x00038862) scroll_pane_cp020

0xc8aa,	// (0x0003886a) find_chidic_pane_t1

0xb485,	// (0x00037445) input_focus_pane_cp06

0x385e,	// (0x0002f81e) list_chi_dic_pane_ParamLimits

0x385e,	// (0x0002f81e) list_chi_dic_pane

0x3870,	// (0x0002f830) list_chi_dic_pane_t1_ParamLimits

0x3870,	// (0x0002f830) list_chi_dic_pane_t1

0xb485,	// (0x00037445) list_highlight_pane_cp020

0xc8b9,	// (0x00038879) bg_cale_heading_pane_g1

0x3883,	// (0x0002f843) bg_cale_heading_pane_g2

0x388b,	// (0x0002f84b) bg_cale_heading_pane_g3

0x3893,	// (0x0002f853) bg_cale_heading_pane_g4

0x389d,	// (0x0002f85d) bg_cale_heading_pane_g5

0x38a7,	// (0x0002f867) bg_cale_heading_pane_g6

0x38af,	// (0x0002f86f) bg_cale_heading_pane_g7

0x38b7,	// (0x0002f877) bg_cale_heading_pane_g8

0x38c1,	// (0x0002f881) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003b364) bg_cale_heading_pane_g

0xc8b9,	// (0x00038879) bg_cale_side_pane_g1

0x38cb,	// (0x0002f88b) bg_cale_side_pane_g2

0x38d3,	// (0x0002f893) bg_cale_side_pane_g3

0x38db,	// (0x0002f89b) bg_cale_side_pane_g4

0x38e3,	// (0x0002f8a3) bg_cale_side_pane_g5

0x38eb,	// (0x0002f8ab) bg_cale_side_pane_g6

0x38f3,	// (0x0002f8b3) bg_cale_side_pane_g7

0x38fb,	// (0x0002f8bb) bg_cale_side_pane_g8

0x3903,	// (0x0002f8c3) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003b377) bg_cale_side_pane_g

0x390b,	// (0x0002f8cb) popup_call_status_window_ParamLimits

0x390b,	// (0x0002f8cb) popup_call_status_window

0xc8c1,	// (0x00038881) stacon_top_pane

0xc8c9,	// (0x00038889) status_pane_ParamLimits

0xc8c9,	// (0x00038889) status_pane

0xc8de,	// (0x0003889e) status_small_pane

0xc8e6,	// (0x000388a6) control_pane

0xb485,	// (0x00037445) stacon_bottom_pane

0xc8ee,	// (0x000388ae) list_single_mce_smart_pane_t1_ParamLimits

0xc8ee,	// (0x000388ae) list_single_mce_smart_pane_t1

0xc901,	// (0x000388c1) list_single_mce_smart_pane_t2_ParamLimits

0xc901,	// (0x000388c1) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003b38a) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003b38a) list_single_mce_smart_pane_t

0x3954,	// (0x0002f914) compass_pane

0x395d,	// (0x0002f91d) main_location2_pane_t1

0x396f,	// (0x0002f92f) main_location2_pane_t2

0x3981,	// (0x0002f941) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003b38f) main_location2_pane_t

0xc920,	// (0x000388e0) compass_pane_g1_ParamLimits

0xc920,	// (0x000388e0) compass_pane_g1

0x39c5,	// (0x0002f985) compass_pane_t1

0x39d4,	// (0x0002f994) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003b398) compass_pane_t

0x3a1b,	// (0x0002f9db) text_secondary_cp61

0xc9b8,	// (0x00038978) navi_pane_cams_g5

0xca34,	// (0x000389f4) navi_pane_im_t1

0xca42,	// (0x00038a02) navi_pane_mp_g1_ParamLimits

0xca42,	// (0x00038a02) navi_pane_mp_g1

0xca56,	// (0x00038a16) navi_pane_mp_g2_ParamLimits

0xca56,	// (0x00038a16) navi_pane_mp_g2

0xca62,	// (0x00038a22) navi_pane_mp_g3_ParamLimits

0xca62,	// (0x00038a22) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003b3ac) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003b3ac) navi_pane_mp_g

0xca6e,	// (0x00038a2e) navi_pane_mp_t1

0xca7c,	// (0x00038a3c) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003b3b3) navi_pane_mp_t

0xcae7,	// (0x00038aa7) navi_pane_vt_g1

0xca6e,	// (0x00038a2e) navi_pane_vt_t1

0xcaef,	// (0x00038aaf) navi_slider_pane

0xc07d,	// (0x0003803d) zooming_pane

0xcaff,	// (0x00038abf) navi_slider_pane_g1

0xb6d2,	// (0x00037692) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003b3ba) navi_slider_pane_g

0xcb23,	// (0x00038ae3) aid_levels_zoom

0xcb2b,	// (0x00038aeb) zooming_pane_g1

0xcb33,	// (0x00038af3) zooming_pane_g2

0xcb33,	// (0x00038af3) zooming_pane_g3

0x0002,

0xf409,	// (0x0003b3c9) zooming_pane_g

0xcb3b,	// (0x00038afb) level_10_zoom

0xcb44,	// (0x00038b04) level_11_zoom

0xcb4d,	// (0x00038b0d) level_1_zoom

0xcb56,	// (0x00038b16) level_2_zoom

0xcb5f,	// (0x00038b1f) level_3_zoom

0xcb68,	// (0x00038b28) level_4_zoom

0xcb71,	// (0x00038b31) level_5_zoom

0xcb7a,	// (0x00038b3a) level_6_zoom

0xcb83,	// (0x00038b43) level_7_zoom

0xcb8c,	// (0x00038b4c) level_8_zoom

0xcb95,	// (0x00038b55) level_9_zoom

0xcba6,	// (0x00038b66) popup_phob_thumbnail_window_g1

0xcbae,	// (0x00038b6e) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003b3d0) popup_phob_thumbnail_window_g

0xdf0b,	// (0x00039ecb) level_1_location

0xdf13,	// (0x00039ed3) level_2_location

0xdf1b,	// (0x00039edb) level_3_location

0xdf23,	// (0x00039ee3) level_4_location

0xc07d,	// (0x0003803d) level_5_location

0x3a6c,	// (0x0002fa2c) mce_icon_pane_g1

0x3a76,	// (0x0002fa36) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003b3d5) mce_icon_pane_g

0x3a7e,	// (0x0002fa3e) main_mup_pane_g1_ParamLimits

0x3a7e,	// (0x0002fa3e) main_mup_pane_g1

0x3a94,	// (0x0002fa54) main_mup_pane_g2_ParamLimits

0x3a94,	// (0x0002fa54) main_mup_pane_g2

0x3aac,	// (0x0002fa6c) main_mup_pane_g3_ParamLimits

0x3aac,	// (0x0002fa6c) main_mup_pane_g3

0x3ac4,	// (0x0002fa84) main_mup_pane_g4_ParamLimits

0x3ac4,	// (0x0002fa84) main_mup_pane_g4

0x3adc,	// (0x0002fa9c) main_mup_pane_g5_ParamLimits

0x3adc,	// (0x0002fa9c) main_mup_pane_g5

0x3af8,	// (0x0002fab8) main_mup_pane_g6_ParamLimits

0x3af8,	// (0x0002fab8) main_mup_pane_g6

0x3b10,	// (0x0002fad0) main_mup_pane_g7_ParamLimits

0x3b10,	// (0x0002fad0) main_mup_pane_g7

0x3b28,	// (0x0002fae8) main_mup_pane_g8_ParamLimits

0x3b28,	// (0x0002fae8) main_mup_pane_g8

0x3b42,	// (0x0002fb02) main_mup_pane_g9_ParamLimits

0x3b42,	// (0x0002fb02) main_mup_pane_g9

0x3b5c,	// (0x0002fb1c) main_mup_pane_g10_ParamLimits

0x3b5c,	// (0x0002fb1c) main_mup_pane_g10

0x3b76,	// (0x0002fb36) main_mup_pane_g11_ParamLimits

0x3b76,	// (0x0002fb36) main_mup_pane_g11

0x3b8a,	// (0x0002fb4a) main_mup_pane_g12_ParamLimits

0x3b8a,	// (0x0002fb4a) main_mup_pane_g12

0x3ba0,	// (0x0002fb60) main_mup_pane_g13_ParamLimits

0x3ba0,	// (0x0002fb60) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003b3da) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003b3da) main_mup_pane_g

0x3bb4,	// (0x0002fb74) main_mup_pane_t1_ParamLimits

0x3bb4,	// (0x0002fb74) main_mup_pane_t1

0x3bce,	// (0x0002fb8e) main_mup_pane_t2_ParamLimits

0x3bce,	// (0x0002fb8e) main_mup_pane_t2

0x3be6,	// (0x0002fba6) main_mup_pane_t3_ParamLimits

0x3be6,	// (0x0002fba6) main_mup_pane_t3

0x3bfe,	// (0x0002fbbe) main_mup_pane_t4_ParamLimits

0x3bfe,	// (0x0002fbbe) main_mup_pane_t4

0x3c1c,	// (0x0002fbdc) main_mup_pane_t5_ParamLimits

0x3c1c,	// (0x0002fbdc) main_mup_pane_t5

0x3c31,	// (0x0002fbf1) main_mup_pane_t6_ParamLimits

0x3c31,	// (0x0002fbf1) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003b3f5) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003b3f5) main_mup_pane_t

0x3c43,	// (0x0002fc03) mup_progress_pane_ParamLimits

0x3c43,	// (0x0002fc03) mup_progress_pane

0x3c4f,	// (0x0002fc0f) mup_visualizer_pane_ParamLimits

0x3c4f,	// (0x0002fc0f) mup_visualizer_pane

0x3c7f,	// (0x0002fc3f) mup_volume_pane_ParamLimits

0x3c7f,	// (0x0002fc3f) mup_volume_pane

0xc92c,	// (0x000388ec) mup_visualizer_pane_g1_ParamLimits

0xc92c,	// (0x000388ec) mup_visualizer_pane_g1

0xc92c,	// (0x000388ec) mup_visualizer_pane_g2_ParamLimits

0xc92c,	// (0x000388ec) mup_visualizer_pane_g2

0xc920,	// (0x000388e0) mup_visualizer_pane_g3_ParamLimits

0xc920,	// (0x000388e0) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003b402) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003b402) mup_visualizer_pane_g

0xbf0d,	// (0x00037ecd) mup_volume_pane_g1

0xcbbe,	// (0x00038b7e) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003b409) mup_volume_pane_g

0xbf0d,	// (0x00037ecd) mup_progress_pane_g1

0xcbc7,	// (0x00038b87) mup_progress_pane_g2

0xcbd0,	// (0x00038b90) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003b40e) mup_progress_pane_g

0xb485,	// (0x00037445) bg_popup_window_pane_cp05

0xcbd9,	// (0x00038b99) heading_pane_cp02_ParamLimits

0xcbd9,	// (0x00038b99) heading_pane_cp02

0xcbf3,	// (0x00038bb3) list_popup_blid_pane

0xcbfb,	// (0x00038bbb) list_blid_sat_info_pane_ParamLimits

0xcbfb,	// (0x00038bbb) list_blid_sat_info_pane

0xcc0e,	// (0x00038bce) list_blid_sat_info_pane_g1

0xcc16,	// (0x00038bd6) list_blid_sat_info_pane_t1

0x3d95,	// (0x0002fd55) mup_equalizer_pane_ParamLimits

0x3d95,	// (0x0002fd55) mup_equalizer_pane

0x3dae,	// (0x0002fd6e) mup_equalizer_pane_cp1_ParamLimits

0x3dae,	// (0x0002fd6e) mup_equalizer_pane_cp1

0x3dcb,	// (0x0002fd8b) mup_equalizer_pane_cp2_ParamLimits

0x3dcb,	// (0x0002fd8b) mup_equalizer_pane_cp2

0x3de8,	// (0x0002fda8) mup_equalizer_pane_cp3_ParamLimits

0x3de8,	// (0x0002fda8) mup_equalizer_pane_cp3

0x3e09,	// (0x0002fdc9) mup_equalizer_pane_cp4_ParamLimits

0x3e09,	// (0x0002fdc9) mup_equalizer_pane_cp4

0x3e2a,	// (0x0002fdea) mup_equalizer_pane_cp5

0x3e3e,	// (0x0002fdfe) mup_equalizer_pane_cp6

0x3e52,	// (0x0002fe12) mup_equalizer_pane_cp7

0xde29,	// (0x00039de9) bg_popup_call_poc_act_pane_g9

0xde31,	// (0x00039df1) bg_popup_call_poc_act_pane_g10

0xde39,	// (0x00039df9) bg_popup_call_poc_act_pane_g11

0x000a,

0xbdf3,	// (0x00037db3) mup_scale_pane

0xbf0d,	// (0x00037ecd) mup_scale_pane_g1

0xcc24,	// (0x00038be4) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003b42a) mup_scale_pane_g

0xcc48,	// (0x00038c08) msg_data_pane

0xcc50,	// (0x00038c10) scroll_pane_cp017

0x3e78,	// (0x0002fe38) bg_list_pane_cp04_ParamLimits

0x3e78,	// (0x0002fe38) bg_list_pane_cp04

0xcc60,	// (0x00038c20) msg_data_pane_g1

0x3e90,	// (0x0002fe50) msg_data_pane_g2

0x3e9a,	// (0x0002fe5a) msg_data_pane_g3

0x3ea2,	// (0x0002fe62) msg_data_pane_g4

0x3eaa,	// (0x0002fe6a) msg_data_pane_g5

0x3eb2,	// (0x0002fe72) msg_data_pane_g6

0x3eba,	// (0x0002fe7a) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003b439) msg_data_pane_g

0x3ec2,	// (0x0002fe82) msg_text_pane_ParamLimits

0x3ec2,	// (0x0002fe82) msg_text_pane

0x3eed,	// (0x0002fead) qrid_highlight_pane_cp011_ParamLimits

0x3eed,	// (0x0002fead) qrid_highlight_pane_cp011

0xb485,	// (0x00037445) msg_body_pane

0xb485,	// (0x00037445) msg_header_pane

0xcc71,	// (0x00038c31) input_focus_pane_cp07

0xcc86,	// (0x00038c46) msg_header_pane_t1_ParamLimits

0xcc86,	// (0x00038c46) msg_header_pane_t1

0xcc98,	// (0x00038c58) msg_header_pane_t2_ParamLimits

0xcc98,	// (0x00038c58) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003b44d) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003b44d) msg_header_pane_t

0xccaa,	// (0x00038c6a) msg_body_pane_g1

0xccb2,	// (0x00038c72) msg_body_pane_t1_ParamLimits

0xccb2,	// (0x00038c72) msg_body_pane_t1

0xcce3,	// (0x00038ca3) msg_body_pane_t2_ParamLimits

0xcce3,	// (0x00038ca3) msg_body_pane_t2

0xccf5,	// (0x00038cb5) msg_body_pane_t3_ParamLimits

0xccf5,	// (0x00038cb5) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003b452) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003b452) msg_body_pane_t

0x0698,	// (0x0002c658) main_viewer_pane_g1_ParamLimits

0x0698,	// (0x0002c658) main_viewer_pane_g1

0x06a6,	// (0x0002c666) main_viewer_pane_g2_ParamLimits

0x06a6,	// (0x0002c666) main_viewer_pane_g2

0x3f2f,	// (0x0002feef) main_viewer_pane_g3_ParamLimits

0x3f2f,	// (0x0002feef) main_viewer_pane_g3

0x3f3e,	// (0x0002fefe) main_viewer_pane_g4_ParamLimits

0x3f3e,	// (0x0002fefe) main_viewer_pane_g4

0xb6fc,	// (0x000376bc) main_viewer_pane_g5_ParamLimits

0xb6fc,	// (0x000376bc) main_viewer_pane_g5

0xb6fc,	// (0x000376bc) main_viewer_pane_g7_ParamLimits

0xb6fc,	// (0x000376bc) main_viewer_pane_g7

0xc597,	// (0x00038557) main_viewer_pane_g8_ParamLimits

0xc597,	// (0x00038557) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003b462) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003b462) main_viewer_pane_g

0xcd07,	// (0x00038cc7) viewer_content_pane_ParamLimits

0xcd07,	// (0x00038cc7) viewer_content_pane

0x3f7a,	// (0x0002ff3a) main_postcard_pane_g1_ParamLimits

0x3f7a,	// (0x0002ff3a) main_postcard_pane_g1

0x3f90,	// (0x0002ff50) main_postcard_pane_g2_ParamLimits

0x3f90,	// (0x0002ff50) main_postcard_pane_g2

0x3fa6,	// (0x0002ff66) main_postcard_pane_g3_ParamLimits

0x3fa6,	// (0x0002ff66) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003b473) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003b473) main_postcard_pane_g

0x3fbd,	// (0x0002ff7d) main_postcard_pane_g4

0xe00b,	// (0x00039fcb) smil_status_volume_pane_g2

0x4000,	// (0x0002ffc0) postcard_pane_ParamLimits

0x4000,	// (0x0002ffc0) postcard_pane

0xcd15,	// (0x00038cd5) postcard_pane_g1_ParamLimits

0xcd15,	// (0x00038cd5) postcard_pane_g1

0x4042,	// (0x00030002) postcard_pane_g2_ParamLimits

0x4042,	// (0x00030002) postcard_pane_g2

0x404e,	// (0x0003000e) postcard_pane_g3_ParamLimits

0x404e,	// (0x0003000e) postcard_pane_g3

0xcd23,	// (0x00038ce3) postcard_pane_g4_ParamLimits

0xcd23,	// (0x00038ce3) postcard_pane_g4

0x405a,	// (0x0003001a) postcard_pane_g5_ParamLimits

0x405a,	// (0x0003001a) postcard_pane_g5

0x406f,	// (0x0003002f) postcard_pane_g6_ParamLimits

0x406f,	// (0x0003002f) postcard_pane_g6

0xcd15,	// (0x00038cd5) postcard_pane_g7_ParamLimits

0xcd15,	// (0x00038cd5) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003b480) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003b480) postcard_pane_g

0x4083,	// (0x00030043) main_mp2_pane_g1_ParamLimits

0x4083,	// (0x00030043) main_mp2_pane_g1

0x408f,	// (0x0003004f) main_mp2_pane_g2_ParamLimits

0x408f,	// (0x0003004f) main_mp2_pane_g2

0x409b,	// (0x0003005b) main_mp2_pane_g3_ParamLimits

0x409b,	// (0x0003005b) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003b48f) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003b48f) main_mp2_pane_g

0x40a7,	// (0x00030067) main_mp2_pane_t1_ParamLimits

0x40a7,	// (0x00030067) main_mp2_pane_t1

0x40bc,	// (0x0003007c) main_mp2_pane_t2_ParamLimits

0x40bc,	// (0x0003007c) main_mp2_pane_t2

0x40ce,	// (0x0003008e) main_mp2_pane_t3_ParamLimits

0x40ce,	// (0x0003008e) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003b496) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003b496) main_mp2_pane_t

0xcd31,	// (0x00038cf1) pec_content_pane_ParamLimits

0xcd31,	// (0x00038cf1) pec_content_pane

0xc226,	// (0x000381e6) scroll_pane_cp015

0xcd43,	// (0x00038d03) pec_attribute_pane_ParamLimits

0xcd43,	// (0x00038d03) pec_attribute_pane

0x40e0,	// (0x000300a0) pec_content_pane_g1_ParamLimits

0x40e0,	// (0x000300a0) pec_content_pane_g1

0xcd53,	// (0x00038d13) pec_content_pane_t1_ParamLimits

0xcd53,	// (0x00038d13) pec_content_pane_t1

0xcd65,	// (0x00038d25) pec_content_pane_t2_ParamLimits

0xcd65,	// (0x00038d25) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003b49d) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003b49d) pec_content_pane_t

0x40ec,	// (0x000300ac) list_single_graphic_pane_cp01_ParamLimits

0x40ec,	// (0x000300ac) list_single_graphic_pane_cp01

0xbdf3,	// (0x00037db3) bg_popup_sub_pane_cp04

0xcd77,	// (0x00038d37) popup_mup_playback_window_g1

0xcd83,	// (0x00038d43) popup_mup_playback_window_t1

0xcd98,	// (0x00038d58) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003b4a2) popup_mup_playback_window_t

0xcdcf,	// (0x00038d8f) main_image_pane_g1_ParamLimits

0xcdcf,	// (0x00038d8f) main_image_pane_g1

0xce12,	// (0x00038dd2) scroll_pane_cp018_ParamLimits

0xce12,	// (0x00038dd2) scroll_pane_cp018

0xce2a,	// (0x00038dea) scroll_pane_cp016_ParamLimits

0xce2a,	// (0x00038dea) scroll_pane_cp016

0x41b9,	// (0x00030179) smil2_image_pane_ParamLimits

0x41b9,	// (0x00030179) smil2_image_pane

0x41e9,	// (0x000301a9) smil2_root_pane_ParamLimits

0x41e9,	// (0x000301a9) smil2_root_pane

0x4221,	// (0x000301e1) smil2_text_pane_ParamLimits

0x4221,	// (0x000301e1) smil2_text_pane

0xb485,	// (0x00037445) bg_list_pane_cp06

0xce66,	// (0x00038e26) grid_radio_pane

0xb485,	// (0x00037445) bg_popup_window_pane_cp06

0xce6e,	// (0x00038e2e) main_fmradio_pane_t1

0xc76f,	// (0x0003872f) heading_pane_cp04

0xce7c,	// (0x00038e3c) main_fmradio_pane_t2

0xde41,	// (0x00039e01) popup_cale_lunar_info_window_g1

0xce8a,	// (0x00038e4a) main_fmradio_pane_t3

0xde49,	// (0x00039e09) popup_cale_lunar_info_window_g2

0xce98,	// (0x00038e58) main_fmradio_pane_t4

0x0001,

0xcea6,	// (0x00038e66) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003b57d) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003b4b7) main_fmradio_pane_t

0xceb4,	// (0x00038e74) wait_bar_pane_cp03

0xcebc,	// (0x00038e7c) cell_fmradio_pane_ParamLimits

0xcebc,	// (0x00038e7c) cell_fmradio_pane

0xcd15,	// (0x00038cd5) cell_fmradio_pane_g1_ParamLimits

0xcd15,	// (0x00038cd5) cell_fmradio_pane_g1

0xb485,	// (0x00037445) grid_highlight_pane_cp011

0xcecf,	// (0x00038e8f) poc_content_pane_ParamLimits

0xcecf,	// (0x00038e8f) poc_content_pane

0xcee1,	// (0x00038ea1) scroll_pane_cp019

0x42a1,	// (0x00030261) popup_call_poc_act_window_ParamLimits

0x42a1,	// (0x00030261) popup_call_poc_act_window

0x42c5,	// (0x00030285) popup_call_poc_inact_window_ParamLimits

0x42c5,	// (0x00030285) popup_call_poc_inact_window

0xf594,	// (0x0003b554) bg_popup_call_poc_act_pane_g

0xddb9,	// (0x00039d79) bg_popup_call_poc_inact_pane_g1

0xddc1,	// (0x00039d81) bg_popup_call_poc_inact_pane_g2

0xcee9,	// (0x00038ea9) popup_call_poc_act_window_g2

0xddc9,	// (0x00039d89) bg_popup_call_poc_inact_pane_g3

0xddd1,	// (0x00039d91) bg_popup_call_poc_inact_pane_g4

0xddd9,	// (0x00039d99) bg_popup_call_poc_inact_pane_g5

0xcef1,	// (0x00038eb1) popup_call_poc_act_window_t1_ParamLimits

0xcef1,	// (0x00038eb1) popup_call_poc_act_window_t1

0xcf19,	// (0x00038ed9) popup_call_poc_act_window_t2_ParamLimits

0xcf19,	// (0x00038ed9) popup_call_poc_act_window_t2

0xcf41,	// (0x00038f01) popup_call_poc_act_window_t3_ParamLimits

0xcf41,	// (0x00038f01) popup_call_poc_act_window_t3

0xcf69,	// (0x00038f29) popup_call_poc_act_window_t4_ParamLimits

0xcf69,	// (0x00038f29) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003b4c2) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003b4c2) popup_call_poc_act_window_t

0xdde1,	// (0x00039da1) bg_popup_call_poc_inact_pane_g6

0xdde9,	// (0x00039da9) bg_popup_call_poc_inact_pane_g7

0xddf1,	// (0x00039db1) bg_popup_call_poc_inact_pane_g8

0xcf7b,	// (0x00038f3b) popup_call_poc_inact_window_g2

0xddf9,	// (0x00039db9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003b541) bg_popup_call_poc_inact_pane_g

0xcf83,	// (0x00038f43) popup_call_poc_inact_window_t1_ParamLimits

0xcf83,	// (0x00038f43) popup_call_poc_inact_window_t1

0xcf98,	// (0x00038f58) popup_call_poc_inact_window_t2_ParamLimits

0xcf98,	// (0x00038f58) popup_call_poc_inact_window_t2

0xcfad,	// (0x00038f6d) popup_call_poc_inact_window_t3_ParamLimits

0xcfad,	// (0x00038f6d) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003b4cb) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003b4cb) popup_call_poc_inact_window_t

0xdf7e,	// (0x00039f3e) context_pane_ParamLimits

0x484a,	// (0x0003080a) signal_pane_ParamLimits

0xc07d,	// (0x0003803d) main_call2_pane

0xb747,	// (0x00037707) popup_phob_thumbnail2_window_ParamLimits

0xb747,	// (0x00037707) popup_phob_thumbnail2_window

0xb6e4,	// (0x000376a4) aid_hotspot_pointer_arrow_pane

0xb6ec,	// (0x000376ac) aid_hotspot_pointer_hand_pane

0x460e,	// (0x000305ce) phob_pre_status_pane_g5

0x224e,	// (0x0002e20e) cams_zoom_pane_ParamLimits

0x225d,	// (0x0002e21d) image_vga_pane_ParamLimits

0x2277,	// (0x0002e237) main_camera_pane_g1_ParamLimits

0x2289,	// (0x0002e249) main_camera_pane_g2_ParamLimits

0x2299,	// (0x0002e259) main_camera_pane_g3_ParamLimits

0x22a9,	// (0x0002e269) main_camera_pane_g4_ParamLimits

0x22b9,	// (0x0002e279) main_camera_pane_g5_ParamLimits

0x22c9,	// (0x0002e289) main_camera_pane_g6_ParamLimits

0x22db,	// (0x0002e29b) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003b1ca) main_camera_pane_g_ParamLimits

0x22eb,	// (0x0002e2ab) main_camera_pane_t1_ParamLimits

0x2301,	// (0x0002e2c1) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003b1db) main_camera_pane_t_ParamLimits

0xbdf3,	// (0x00037db3) bg_popup_preview_window_pane_cp01_ParamLimits

0xbdf3,	// (0x00037db3) bg_popup_preview_window_pane_cp01

0xcfc2,	// (0x00038f82) popup_phob_thumbnail2_window_g1_ParamLimits

0xcfc2,	// (0x00038f82) popup_phob_thumbnail2_window_g1

0xb485,	// (0x00037445) call2_cli_visual_pane

0x42f9,	// (0x000302b9) popup_call2_audio_conf_window_ParamLimits

0x42f9,	// (0x000302b9) popup_call2_audio_conf_window

0x4319,	// (0x000302d9) popup_call2_audio_first_window_ParamLimits

0x4319,	// (0x000302d9) popup_call2_audio_first_window

0x43af,	// (0x0003036f) popup_call2_audio_in_window_ParamLimits

0x43af,	// (0x0003036f) popup_call2_audio_in_window

0x43f7,	// (0x000303b7) popup_call2_audio_out_window_ParamLimits

0x43f7,	// (0x000303b7) popup_call2_audio_out_window

0x4461,	// (0x00030421) popup_call2_audio_second_window_ParamLimits

0x4461,	// (0x00030421) popup_call2_audio_second_window

0x44c7,	// (0x00030487) popup_call2_audio_wait_window_ParamLimits

0x44c7,	// (0x00030487) popup_call2_audio_wait_window

0xb485,	// (0x00037445) bg_popup_call2_act_pane_cp03

0xbdd5,	// (0x00037d95) list_conf_pane_cp

0xcfce,	// (0x00038f8e) popup_call2_audio_conf_window_t1

0xc7cc,	// (0x0003878c) list_single_graphic_popup_conf2_pane_ParamLimits

0xc7cc,	// (0x0003878c) list_single_graphic_popup_conf2_pane

0xc7df,	// (0x0003879f) list_highlight_pane_cp04

0xcfdc,	// (0x00038f9c) list_single_graphic_popup_conf2_pane_g1

0xc7f0,	// (0x000387b0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003b4d2) list_single_graphic_popup_conf2_pane_g

0xcfe6,	// (0x00038fa6) list_single_graphic_popup_conf2_pane_t1

0xcff4,	// (0x00038fb4) bg_popup_call2_act_pane_cp01_ParamLimits

0xcff4,	// (0x00038fb4) bg_popup_call2_act_pane_cp01

0xd07e,	// (0x0003903e) call_type_pane_cp05_ParamLimits

0xd07e,	// (0x0003903e) call_type_pane_cp05

0xd0d2,	// (0x00039092) popup_call2_audio_second_window_g1_ParamLimits

0xd0d2,	// (0x00039092) popup_call2_audio_second_window_g1

0xd126,	// (0x000390e6) popup_call2_audio_second_window_g2_ParamLimits

0xd126,	// (0x000390e6) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003b4d7) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003b4d7) popup_call2_audio_second_window_g

0xd18b,	// (0x0003914b) popup_call2_audio_second_window_t1_ParamLimits

0xd18b,	// (0x0003914b) popup_call2_audio_second_window_t1

0xd246,	// (0x00039206) popup_call2_audio_second_window_t2_ParamLimits

0xd246,	// (0x00039206) popup_call2_audio_second_window_t2

0xd299,	// (0x00039259) popup_call2_audio_second_window_t3_ParamLimits

0xd299,	// (0x00039259) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003b4de) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003b4de) popup_call2_audio_second_window_t

0xb485,	// (0x00037445) bg_popup_call2_in_pane_cp02

0xb48f,	// (0x0003744f) call_type_pane_cp04

0xb497,	// (0x00037457) popup_call2_audio_wait_window_g1

0xb49f,	// (0x0003745f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003b0b9) popup_call2_audio_wait_window_g

0xb4a7,	// (0x00037467) popup_call2_audio_wait_window_t3

0xd38c,	// (0x0003934c) bg_popup_call2_act_pane_ParamLimits

0xd38c,	// (0x0003934c) bg_popup_call2_act_pane

0xd44c,	// (0x0003940c) call_type_pane_cp03_ParamLimits

0xd44c,	// (0x0003940c) call_type_pane_cp03

0xd4b0,	// (0x00039470) popup_call2_audio_first_window_g1_ParamLimits

0xd4b0,	// (0x00039470) popup_call2_audio_first_window_g1

0xd520,	// (0x000394e0) popup_call2_audio_first_window_g2_ParamLimits

0xd520,	// (0x000394e0) popup_call2_audio_first_window_g2

0xc92c,	// (0x000388ec) popup_call2_audio_first_window_g3_ParamLimits

0xc92c,	// (0x000388ec) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003b4e7) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003b4e7) popup_call2_audio_first_window_g

0xd5fe,	// (0x000395be) popup_call2_audio_first_window_t1_ParamLimits

0xd5fe,	// (0x000395be) popup_call2_audio_first_window_t1

0xd701,	// (0x000396c1) popup_call2_audio_first_window_t4_ParamLimits

0xd701,	// (0x000396c1) popup_call2_audio_first_window_t4

0xd7e4,	// (0x000397a4) popup_call2_audio_first_window_t5_ParamLimits

0xd7e4,	// (0x000397a4) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003b4f2) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003b4f2) popup_call2_audio_first_window_t

0xbdeb,	// (0x00037dab) bg_popup_call2_act_pane_g1

0xde51,	// (0x00039e11) popup_cale_lunar_info_window_t1

0xde5f,	// (0x00039e1f) popup_cale_lunar_info_window_t2

0xde6d,	// (0x00039e2d) popup_cale_lunar_info_window_t3

0xb485,	// (0x00037445) bg_popup_call2_bubble_pane

0xd8e5,	// (0x000398a5) bg_popup_call2_in_pane_cp01_ParamLimits

0xd8e5,	// (0x000398a5) bg_popup_call2_in_pane_cp01

0xb161,	// (0x00037121) call_type_pane_cp02

0xd92d,	// (0x000398ed) popup_call2_audio_out_window_g1_ParamLimits

0xd92d,	// (0x000398ed) popup_call2_audio_out_window_g1

0xd959,	// (0x00039919) popup_call2_audio_out_window_g2_ParamLimits

0xd959,	// (0x00039919) popup_call2_audio_out_window_g2

0xd981,	// (0x00039941) popup_call2_audio_out_window_g3_ParamLimits

0xd981,	// (0x00039941) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003b4fb) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003b4fb) popup_call2_audio_out_window_g

0xd9bc,	// (0x0003997c) popup_call2_audio_out_window_t1_ParamLimits

0xd9bc,	// (0x0003997c) popup_call2_audio_out_window_t1

0xda1b,	// (0x000399db) popup_call2_audio_out_window_t2_ParamLimits

0xda1b,	// (0x000399db) popup_call2_audio_out_window_t2

0xda6f,	// (0x00039a2f) popup_call2_audio_out_window_t3_ParamLimits

0xda6f,	// (0x00039a2f) popup_call2_audio_out_window_t3

0xda85,	// (0x00039a45) popup_call2_audio_out_window_t4_ParamLimits

0xda85,	// (0x00039a45) popup_call2_audio_out_window_t4

0xda9b,	// (0x00039a5b) popup_call2_audio_out_window_t5_ParamLimits

0xda9b,	// (0x00039a5b) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003b504) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003b504) popup_call2_audio_out_window_t

0xdaff,	// (0x00039abf) bg_popup_call2_in_pane_ParamLimits

0xdaff,	// (0x00039abf) bg_popup_call2_in_pane

0xdb5b,	// (0x00039b1b) popup_call2_audio_in_window_g1_ParamLimits

0xdb5b,	// (0x00039b1b) popup_call2_audio_in_window_g1

0xdb93,	// (0x00039b53) popup_call2_audio_in_window_g2_ParamLimits

0xdb93,	// (0x00039b53) popup_call2_audio_in_window_g2

0xdbcb,	// (0x00039b8b) popup_call2_audio_in_window_g3_ParamLimits

0xdbcb,	// (0x00039b8b) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003b511) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003b511) popup_call2_audio_in_window_g

0xdc23,	// (0x00039be3) popup_call2_audio_in_window_t1_ParamLimits

0xdc23,	// (0x00039be3) popup_call2_audio_in_window_t1

0xdca3,	// (0x00039c63) popup_call2_audio_in_window_t2_ParamLimits

0xdca3,	// (0x00039c63) popup_call2_audio_in_window_t2

0xdd23,	// (0x00039ce3) popup_call2_audio_in_window_t3_ParamLimits

0xdd23,	// (0x00039ce3) popup_call2_audio_in_window_t3

0xdd3d,	// (0x00039cfd) popup_call2_audio_in_window_t4_ParamLimits

0xdd3d,	// (0x00039cfd) popup_call2_audio_in_window_t4

0xdd4f,	// (0x00039d0f) popup_call2_audio_in_window_t5_ParamLimits

0xdd4f,	// (0x00039d0f) popup_call2_audio_in_window_t5

0xdd64,	// (0x00039d24) popup_call2_audio_in_window_t6_ParamLimits

0xdd64,	// (0x00039d24) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003b51a) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003b51a) popup_call2_audio_in_window_t

0xbdeb,	// (0x00037dab) bg_popup_call2_in_pane_g1

0xde7b,	// (0x00039e3b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003b582) popup_cale_lunar_info_window_t

0xbdf3,	// (0x00037db3) bg_popup_call2_rect_pane_ParamLimits

0xbdf3,	// (0x00037db3) bg_popup_call2_rect_pane

0xb485,	// (0x00037445) call2_cli_visual_graphic_pane

0xb485,	// (0x00037445) call2_cli_visual_text_pane

0xb76e,	// (0x0003772e) smil_status_volume_pane_g3

0x0002,

0xbf0d,	// (0x00037ecd) call2_cli_visual_graphic_pane_g1

0xbf0d,	// (0x00037ecd) call2_cli_visual_graphic_pane_g2

0xbf0d,	// (0x00037ecd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003b527) call2_cli_visual_graphic_pane_g

0xdd79,	// (0x00039d39) bg_popup_call2_rect_pane_g1

0xbf99,	// (0x00037f59) bg_popup_call2_rect_pane_g2

0xdd81,	// (0x00039d41) bg_popup_call2_rect_pane_g3

0xdd89,	// (0x00039d49) bg_popup_call2_rect_pane_g4

0xdd91,	// (0x00039d51) bg_popup_call2_rect_pane_g5

0xdd99,	// (0x00039d59) bg_popup_call2_rect_pane_g6

0xdda1,	// (0x00039d61) bg_popup_call2_rect_pane_g7

0xdda9,	// (0x00039d69) bg_popup_call2_rect_pane_g8

0xddb1,	// (0x00039d71) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003b52e) bg_popup_call2_rect_pane_g

0xddb9,	// (0x00039d79) bg_popup_call2_bubble_pane_g1

0xddc1,	// (0x00039d81) bg_popup_call2_bubble_pane_g2

0xddc9,	// (0x00039d89) bg_popup_call2_bubble_pane_g3

0xddd1,	// (0x00039d91) bg_popup_call2_bubble_pane_g4

0xddd9,	// (0x00039d99) bg_popup_call2_bubble_pane_g5

0xdde1,	// (0x00039da1) bg_popup_call2_bubble_pane_g6

0xdde9,	// (0x00039da9) bg_popup_call2_bubble_pane_g7

0xddf1,	// (0x00039db1) bg_popup_call2_bubble_pane_g8

0xddf9,	// (0x00039db9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003b541) bg_popup_call2_bubble_pane_g

0x1d63,	// (0x0002dd23) aid_cale_week_size_cell_pane

0x2317,	// (0x0002e2d7) aid_cams_cif_uncrop_pane_ParamLimits

0x2317,	// (0x0002e2d7) aid_cams_cif_uncrop_pane

0x24c7,	// (0x0002e487) aid_cams_size_cell_ParamLimits

0x24c7,	// (0x0002e487) aid_cams_size_cell

0x24db,	// (0x0002e49b) grid_cams_pane_ParamLimits

0x24f5,	// (0x0002e4b5) linegrid_cams_pane_ParamLimits

0x26f2,	// (0x0002e6b2) call_video_pane_t1

0x2710,	// (0x0002e6d0) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003b22e) call_video_pane_t

0x2b3c,	// (0x0002eafc) aid_cale_month_size_cell_pane_ParamLimits

0x2b3c,	// (0x0002eafc) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003b5cb) smil_status_volume_pane_g

0xb77b,	// (0x0003773b) volume_smil_pane_ParamLimits

0xaffc,	// (0x00036fbc) aid_popup2_width_pane

0x1cbd,	// (0x0002dc7d) cell_qdial_pane_g4_ParamLimits

0x1cbd,	// (0x0002dc7d) cell_qdial_pane_g4

0x39a5,	// (0x0002f965) aid_blid_cardinal_pane_ParamLimits

0x39b1,	// (0x0002f971) aid_blid_destination_pane_ParamLimits

0x39b1,	// (0x0002f971) aid_blid_destination_pane

0xbdf3,	// (0x00037db3) bg_popup_call_poc_act_pane_ParamLimits

0xbdf3,	// (0x00037db3) bg_popup_call_poc_act_pane

0xbdf3,	// (0x00037db3) bg_popup_call_poc_inact_pane_ParamLimits

0xbdf3,	// (0x00037db3) bg_popup_call_poc_inact_pane

0xde01,	// (0x00039dc1) bg_popup_call_poc_act_pane_g1

0xde09,	// (0x00039dc9) bg_popup_call_poc_act_pane_g2

0xde11,	// (0x00039dd1) bg_popup_call_poc_act_pane_g3

0xddd1,	// (0x00039d91) bg_popup_call_poc_act_pane_g4

0xddd9,	// (0x00039d99) bg_popup_call_poc_act_pane_g5

0xde19,	// (0x00039dd9) bg_popup_call_poc_act_pane_g6

0xdde9,	// (0x00039da9) bg_popup_call_poc_act_pane_g7

0xde21,	// (0x00039de1) bg_popup_call_poc_act_pane_g8

0xb485,	// (0x00037445) main_usb_pane

0xb722,	// (0x000376e2) popup_cale_lunar_info_window

0x29e8,	// (0x0002e9a8) im_reading_pane_t1_ParamLimits

0xc17e,	// (0x0003813e) list_im_pane_ParamLimits

0xc18f,	// (0x0003814f) scroll_pane_cp07_ParamLimits

0xb485,	// (0x00037445) grid_highlight_pane_cp012

0xbdf3,	// (0x00037db3) mup_scale_pane_ParamLimits

0xcd15,	// (0x00038cd5) main_usb_pane_g1_ParamLimits

0xcd15,	// (0x00038cd5) main_usb_pane_g1

0x4523,	// (0x000304e3) main_usb_pane_g2_ParamLimits

0x4523,	// (0x000304e3) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003b56b) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003b56b) main_usb_pane_g

0x4539,	// (0x000304f9) main_usb_pane_t1_ParamLimits

0x4539,	// (0x000304f9) main_usb_pane_t1

0x454b,	// (0x0003050b) main_usb_pane_t2_ParamLimits

0x454b,	// (0x0003050b) main_usb_pane_t2

0x455d,	// (0x0003051d) main_usb_pane_t3_ParamLimits

0x455d,	// (0x0003051d) main_usb_pane_t3

0x456f,	// (0x0003052f) main_usb_pane_t4_ParamLimits

0x456f,	// (0x0003052f) main_usb_pane_t4

0x4581,	// (0x00030541) main_usb_pane_t5_ParamLimits

0x4581,	// (0x00030541) main_usb_pane_t5

0x4593,	// (0x00030553) main_usb_pane_t6_ParamLimits

0x4593,	// (0x00030553) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003b570) main_usb_pane_t_ParamLimits

0x3954,	// (0x0002f914) aid_text_placing

0x395d,	// (0x0002f91d) main_location2_pane_t1_ParamLimits

0x396f,	// (0x0002f92f) main_location2_pane_t2_ParamLimits

0x3981,	// (0x0002f941) main_location2_pane_t3_ParamLimits

0x3993,	// (0x0002f953) main_location2_pane_t4_ParamLimits

0x3993,	// (0x0002f953) main_location2_pane_t4

0xf3cf,	// (0x0003b38f) main_location2_pane_t_ParamLimits

0xbe2f,	// (0x00037def) find_pinb_pane_g2_ParamLimits

0xbe2f,	// (0x00037def) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003b0df) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003b0df) find_pinb_pane_g

0xbe3b,	// (0x00037dfb) find_pinb_pane_t1_ParamLimits

0xbe4d,	// (0x00037e0d) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003b0e4) find_pinb_pane_t_ParamLimits

0xb485,	// (0x00037445) main_call3_pane

0x3027,	// (0x0002efe7) cale_month_day_heading_pane_t1_ParamLimits

0x30ad,	// (0x0002f06d) cale_month_day_heading_pane_t2_ParamLimits

0x3126,	// (0x0002f0e6) cale_month_day_heading_pane_t3_ParamLimits

0x319f,	// (0x0002f15f) cale_month_day_heading_pane_t4_ParamLimits

0x3220,	// (0x0002f1e0) cale_month_day_heading_pane_t5_ParamLimits

0x32a9,	// (0x0002f269) cale_month_day_heading_pane_t6_ParamLimits

0x3332,	// (0x0002f2f2) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003b266) cale_month_day_heading_pane_t_ParamLimits

0xc3d9,	// (0x00038399) smil_status_volume_pane

0x401e,	// (0x0002ffde) postcard_address_pane_ParamLimits

0x401e,	// (0x0002ffde) postcard_address_pane

0x4030,	// (0x0002fff0) postcard_message_pane_ParamLimits

0x4030,	// (0x0002fff0) postcard_message_pane

0x4501,	// (0x000304c1) call2_cli_visual_pane_t1_ParamLimits

0x4501,	// (0x000304c1) call2_cli_visual_pane_t1

0x4a77,	// (0x00030a37) postcard_message_pane_t1_ParamLimits

0x4a77,	// (0x00030a37) postcard_message_pane_t1

0x4a60,	// (0x00030a20) postcard_address_pane_t1_ParamLimits

0x4a60,	// (0x00030a20) postcard_address_pane_t1

0x4a4c,	// (0x00030a0c) popup_call3_audio_in_window_ParamLimits

0x4a4c,	// (0x00030a0c) popup_call3_audio_in_window

0x48d7,	// (0x00030897) bg_popup_call3_in_pane_ParamLimits

0x48d7,	// (0x00030897) bg_popup_call3_in_pane

0x494d,	// (0x0003090d) popup_call3_audio_in_window_g1_ParamLimits

0x494d,	// (0x0003090d) popup_call3_audio_in_window_g1

0x496d,	// (0x0003092d) popup_call3_audio_in_window_g2_ParamLimits

0x496d,	// (0x0003092d) popup_call3_audio_in_window_g2

0x498d,	// (0x0003094d) popup_call3_audio_in_window_g3_ParamLimits

0x498d,	// (0x0003094d) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003b5d2) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003b5d2) popup_call3_audio_in_window_g

0x49be,	// (0x0003097e) popup_call3_audio_in_window_t1_ParamLimits

0x49be,	// (0x0003097e) popup_call3_audio_in_window_t1

0x49fc,	// (0x000309bc) popup_call3_audio_in_window_t2_ParamLimits

0x49fc,	// (0x000309bc) popup_call3_audio_in_window_t2

0x4a3a,	// (0x000309fa) popup_call3_audio_in_window_t3_ParamLimits

0x4a3a,	// (0x000309fa) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003b5db) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003b5db) popup_call3_audio_in_window_t

0xc07d,	// (0x0003803d) bg_popup_call3_rect_pane

0xdd79,	// (0x00039d39) bg_popup_call3_rect_pane_g1

0xbf99,	// (0x00037f59) bg_popup_call3_rect_pane_g2

0xdd81,	// (0x00039d41) bg_popup_call3_rect_pane_g3

0xdd89,	// (0x00039d49) bg_popup_call3_rect_pane_g4

0xdd91,	// (0x00039d51) bg_popup_call3_rect_pane_g5

0xdd99,	// (0x00039d59) bg_popup_call3_rect_pane_g6

0xdda1,	// (0x00039d61) bg_popup_call3_rect_pane_g7

0x3c95,	// (0x0002fc55) mup_visualizer_osc_pane

0xcbb6,	// (0x00038b76) mup_visualizer_spec_pane

0x4907,	// (0x000308c7) call3_video_qcif_pane_ParamLimits

0x4907,	// (0x000308c7) call3_video_qcif_pane

0x491a,	// (0x000308da) call3_video_qcif_uncrop_pane_ParamLimits

0x491a,	// (0x000308da) call3_video_qcif_uncrop_pane

0x4928,	// (0x000308e8) call3_video_subqcif_pane_ParamLimits

0x4928,	// (0x000308e8) call3_video_subqcif_pane

0x493c,	// (0x000308fc) call3_video_subqcif_uncrop_pane_ParamLimits

0x493c,	// (0x000308fc) call3_video_subqcif_uncrop_pane

0x49ad,	// (0x0003096d) popup_call3_audio_in_window_g4_ParamLimits

0x49ad,	// (0x0003096d) popup_call3_audio_in_window_g4

0x48c6,	// (0x00030886) mup_spec_half_pane

0x48cf,	// (0x0003088f) mup_spec_half_pane_cp

0xdfde,	// (0x00039f9e) mup_osc_middle_pane

0xdfe7,	// (0x00039fa7) mup_visualizer_osc_pane_g1

0x48a6,	// (0x00030866) mup_spec_bar_pane_ParamLimits

0x48a6,	// (0x00030866) mup_spec_bar_pane

0xdfcb,	// (0x00039f8b) mup_spec_bar_pane_g1

0xdfd5,	// (0x00039f95) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003b5c6) mup_spec_bar_pane_g

0x1d63,	// (0x0002dd23) aid_cale_week_size_cell_pane_ParamLimits

0x1d7d,	// (0x0002dd3d) bg_cale_heading_pane_ParamLimits

0xbfd6,	// (0x00037f96) bg_cale_pane_cp01_ParamLimits

0x1d95,	// (0x0002dd55) cale_week_corner_pane_ParamLimits

0x1db4,	// (0x0002dd74) cale_week_day_heading_pane_ParamLimits

0x1dd1,	// (0x0002dd91) cale_week_scroll_pane_g1_ParamLimits

0x1de4,	// (0x0002dda4) cale_week_scroll_pane_g2_ParamLimits

0x1dfc,	// (0x0002ddbc) cale_week_scroll_pane_g3_ParamLimits

0x1e14,	// (0x0002ddd4) cale_week_scroll_pane_g4_ParamLimits

0x1e2c,	// (0x0002ddec) cale_week_scroll_pane_g5_ParamLimits

0x1e4c,	// (0x0002de0c) cale_week_scroll_pane_g6_ParamLimits

0x1e6c,	// (0x0002de2c) cale_week_scroll_pane_g7_ParamLimits

0x1e8c,	// (0x0002de4c) cale_week_scroll_pane_g8_ParamLimits

0x1eb0,	// (0x0002de70) cale_week_scroll_pane_g9_ParamLimits

0x1ec8,	// (0x0002de88) cale_week_scroll_pane_g10_ParamLimits

0x1ee0,	// (0x0002dea0) cale_week_scroll_pane_g11_ParamLimits

0x1ef8,	// (0x0002deb8) cale_week_scroll_pane_g12_ParamLimits

0x1f10,	// (0x0002ded0) cale_week_scroll_pane_g13_ParamLimits

0x1f10,	// (0x0002ded0) cale_week_scroll_pane_g14_ParamLimits

0x1f10,	// (0x0002ded0) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003b170) cale_week_scroll_pane_g_ParamLimits

0x1f4c,	// (0x0002df0c) cale_week_time_pane_ParamLimits

0x1f70,	// (0x0002df30) grid_cale_week_pane_ParamLimits

0xbff3,	// (0x00037fb3) listscroll_cale_week_pane_t1

0xc005,	// (0x00037fc5) scroll_pane_cp08_ParamLimits

0x2b9c,	// (0x0002eb5c) cale_month_corner_pane_ParamLimits

0xc3af,	// (0x0003836f) cale_month_pane_t1

0x2fba,	// (0x0002ef7a) cale_month_week_pane_ParamLimits

0x37b0,	// (0x0002f770) popup_call_status_window_g1_ParamLimits

0x37c4,	// (0x0002f784) popup_call_status_window_g2_ParamLimits

0x37d8,	// (0x0002f798) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003b316) popup_call_status_window_g_ParamLimits

0xc75f,	// (0x0003871f) aid_call2_pane

0x3f03,	// (0x0002fec3) msg_header_pane_g1

0x401e,	// (0x0002ffde) postcard_address2_pane_ParamLimits

0x401e,	// (0x0002ffde) postcard_address2_pane

0x4030,	// (0x0002fff0) postcard_message2_pane_ParamLimits

0x4030,	// (0x0002fff0) postcard_message2_pane

0x4858,	// (0x00030818) message2_row_pane_ParamLimits

0x4858,	// (0x00030818) message2_row_pane

0x4874,	// (0x00030834) address2_row_pane_ParamLimits

0x4874,	// (0x00030834) address2_row_pane

0xdf99,	// (0x00039f59) postcard_message2_row_pane_g1

0xdfa1,	// (0x00039f61) postcard_message2_row_pane_t1

0xdf99,	// (0x00039f59) address2_row_pane_g1

0xdfa1,	// (0x00039f61) address2_row_pane_t1

0x21d0,	// (0x0002e190) aid_size_cell_vorec

0xb485,	// (0x00037445) main_rss_pane

0x4887,	// (0x00030847) rss_list_single_pane_ParamLimits

0x4887,	// (0x00030847) rss_list_single_pane

0xdfaf,	// (0x00039f6f) rss_list_single_pane_t1

0xdfbd,	// (0x00039f7d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003b5c1) rss_list_single_pane_t

0xb485,	// (0x00037445) main_camera2_pane

0xb485,	// (0x00037445) main_video2_pane

0x09ce,	// (0x0002c98e) cams_zoom_pane_cp2_ParamLimits

0x09ce,	// (0x0002c98e) cams_zoom_pane_cp2

0x09ee,	// (0x0002c9ae) image2_vga_pane_ParamLimits

0x09ee,	// (0x0002c9ae) image2_vga_pane

0x0a3f,	// (0x0002c9ff) main_camera2_pane_g1_ParamLimits

0x0a3f,	// (0x0002c9ff) main_camera2_pane_g1

0x0a5f,	// (0x0002ca1f) main_camera2_pane_g2_ParamLimits

0x0a5f,	// (0x0002ca1f) main_camera2_pane_g2

0x0a7f,	// (0x0002ca3f) main_camera2_pane_g3_ParamLimits

0x0a7f,	// (0x0002ca3f) main_camera2_pane_g3

0x0a9f,	// (0x0002ca5f) main_camera2_pane_g4_ParamLimits

0x0a9f,	// (0x0002ca5f) main_camera2_pane_g4

0x0abf,	// (0x0002ca7f) main_camera2_pane_g5_ParamLimits

0x0abf,	// (0x0002ca7f) main_camera2_pane_g5

0x0adf,	// (0x0002ca9f) main_camera2_pane_g6_ParamLimits

0x0adf,	// (0x0002ca9f) main_camera2_pane_g6

0x0aff,	// (0x0002cabf) main_camera2_pane_g7_ParamLimits

0x0aff,	// (0x0002cabf) main_camera2_pane_g7

0x0b1f,	// (0x0002cadf) main_camera2_pane_g8_ParamLimits

0x0b1f,	// (0x0002cadf) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003b5e2) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003b5e2) main_camera2_pane_g

0x0b5f,	// (0x0002cb1f) main_camera2_pane_t1_ParamLimits

0x0b5f,	// (0x0002cb1f) main_camera2_pane_t1

0x0b94,	// (0x0002cb54) main_camera2_pane_t2_ParamLimits

0x0b94,	// (0x0002cb54) main_camera2_pane_t2

0x0bba,	// (0x0002cb7a) main_camera2_pane_t3_ParamLimits

0x0bba,	// (0x0002cb7a) main_camera2_pane_t3

0x0c18,	// (0x0002cbd8) main_camera2_pane_t4_ParamLimits

0x0c18,	// (0x0002cbd8) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003b5f5) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003b5f5) main_camera2_pane_t

0x0caa,	// (0x0002cc6a) cams_zoom_pane_cp4_ParamLimits

0x0caa,	// (0x0002cc6a) cams_zoom_pane_cp4

0x0cc0,	// (0x0002cc80) image2_cif_pane_ParamLimits

0x0cc0,	// (0x0002cc80) image2_cif_pane

0x0ceb,	// (0x0002ccab) image2_subqcif_pane_ParamLimits

0x0ceb,	// (0x0002ccab) image2_subqcif_pane

0x0d05,	// (0x0002ccc5) main_video2_pane_g1_ParamLimits

0x0d05,	// (0x0002ccc5) main_video2_pane_g1

0x0d1f,	// (0x0002ccdf) main_video2_pane_g2_ParamLimits

0x0d1f,	// (0x0002ccdf) main_video2_pane_g2

0x0d35,	// (0x0002ccf5) main_video2_pane_g3_ParamLimits

0x0d35,	// (0x0002ccf5) main_video2_pane_g3

0x0d4b,	// (0x0002cd0b) main_video2_pane_g4_ParamLimits

0x0d4b,	// (0x0002cd0b) main_video2_pane_g4

0x0d61,	// (0x0002cd21) main_video2_pane_g5_ParamLimits

0x0d61,	// (0x0002cd21) main_video2_pane_g5

0x0d77,	// (0x0002cd37) main_video2_pane_g6_ParamLimits

0x0d77,	// (0x0002cd37) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003b604) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003b604) main_video2_pane_g

0x0d91,	// (0x0002cd51) main_video2_pane_t1_ParamLimits

0x0d91,	// (0x0002cd51) main_video2_pane_t1

0x0db5,	// (0x0002cd75) main_video2_pane_t2_ParamLimits

0x0db5,	// (0x0002cd75) main_video2_pane_t2

0x0e03,	// (0x0002cdc3) main_video2_pane_t3_ParamLimits

0x0e03,	// (0x0002cdc3) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003b611) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003b611) main_video2_pane_t

0x464e,	// (0x0003060e) call_muted_g2

0x0001,

0xf5f3,	// (0x0003b5b3) call_muted_g

0xb485,	// (0x00037445) main_mup2_pane

0x4a92,	// (0x00030a52) main_mup2_pane_g1_ParamLimits

0x4a92,	// (0x00030a52) main_mup2_pane_g1

0x4a9e,	// (0x00030a5e) main_mup2_pane_g2_ParamLimits

0x4a9e,	// (0x00030a5e) main_mup2_pane_g2

0xb7e9,	// (0x000377a9) main_mup_pane_g13_cp1

0xb7f1,	// (0x000377b1) mup_volume_pane_cp1

0x4aba,	// (0x00030a7a) main_mup2_pane_g4_ParamLimits

0x4aba,	// (0x00030a7a) main_mup2_pane_g4

0x4acc,	// (0x00030a8c) main_mup2_pane_g5_ParamLimits

0x4acc,	// (0x00030a8c) main_mup2_pane_g5

0x4ade,	// (0x00030a9e) main_mup2_pane_g6_ParamLimits

0x4ade,	// (0x00030a9e) main_mup2_pane_g6

0x4af0,	// (0x00030ab0) main_mup2_pane_g7_ParamLimits

0x4af0,	// (0x00030ab0) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003b618) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003b618) main_mup2_pane_g

0x4b08,	// (0x00030ac8) main_mup2_pane_t1_ParamLimits

0x4b08,	// (0x00030ac8) main_mup2_pane_t1

0x4b1e,	// (0x00030ade) main_mup2_pane_t2_ParamLimits

0x4b1e,	// (0x00030ade) main_mup2_pane_t2

0x4b34,	// (0x00030af4) main_mup2_pane_t3_ParamLimits

0x4b34,	// (0x00030af4) main_mup2_pane_t3

0x4b4a,	// (0x00030b0a) main_mup2_pane_t4_ParamLimits

0x4b4a,	// (0x00030b0a) main_mup2_pane_t4

0x4b62,	// (0x00030b22) main_mup2_pane_t5_ParamLimits

0x4b62,	// (0x00030b22) main_mup2_pane_t5

0x4b7a,	// (0x00030b3a) main_mup2_pane_t6_ParamLimits

0x4b7a,	// (0x00030b3a) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003b627) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003b627) main_mup2_pane_t

0x4baa,	// (0x00030b6a) mup2_visualizer_pane_ParamLimits

0x4baa,	// (0x00030b6a) mup2_visualizer_pane

0x4bd8,	// (0x00030b98) mup_progress_pane_cp_ParamLimits

0x4bd8,	// (0x00030b98) mup_progress_pane_cp

0xb7d4,	// (0x00037794) mup_volume_pane_cp_ParamLimits

0xb7d4,	// (0x00037794) mup_volume_pane_cp

0x4bec,	// (0x00030bac) mup2_visualizer_pane_g1_ParamLimits

0x4bec,	// (0x00030bac) mup2_visualizer_pane_g1

0xe01e,	// (0x00039fde) mup2_visualizer_pane_g2_ParamLimits

0xe01e,	// (0x00039fde) mup2_visualizer_pane_g2

0x4c03,	// (0x00030bc3) mup2_visualizer_pane_g3_ParamLimits

0x4c03,	// (0x00030bc3) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003b634) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003b634) mup2_visualizer_pane_g

0xce5e,	// (0x00038e1e) aid_size_cell_fmradio

0x06b4,	// (0x0002c674) aid_height_parent_landcape

0xc20d,	// (0x000381cd) wml_content_pane_cp

0xc215,	// (0x000381d5) wml_tabs_pane

0xc21e,	// (0x000381de) popup_wml_miniature_window

0xc226,	// (0x000381e6) scroll_pane_cp021

0xc23a,	// (0x000381fa) wml_content_pane_comp8

0xb485,	// (0x00037445) bg_popup_sub_pane_cp05

0xe03c,	// (0x00039ffc) popup_wml_miniature_window_g1

0xe044,	// (0x0003a004) wml_miniature_view_pane

0x4c0f,	// (0x00030bcf) aid_size_wml_view

0x4c17,	// (0x00030bd7) wml_miniature_view_pane_g1

0x4c20,	// (0x00030be0) wml_miniature_view_pane_g2

0x4c29,	// (0x00030be9) wml_miniature_view_pane_g3

0x4c31,	// (0x00030bf1) wml_miniature_view_pane_g4

0x4c39,	// (0x00030bf9) wml_miniature_view_pane_g5

0x4c41,	// (0x00030c01) wml_miniature_view_pane_g6

0x4c49,	// (0x00030c09) wml_miniature_view_pane_g7

0x4c51,	// (0x00030c11) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003b63b) wml_miniature_view_pane_g

0xe04c,	// (0x0003a00c) background_graphic_ParamLimits

0xe04c,	// (0x0003a00c) background_graphic

0xe058,	// (0x0003a018) wml_tabs_2_pane

0xe061,	// (0x0003a021) wml_tabs_3_pane_ParamLimits

0xe061,	// (0x0003a021) wml_tabs_3_pane

0xe073,	// (0x0003a033) wml_tabs_4_pane_ParamLimits

0xe073,	// (0x0003a033) wml_tabs_4_pane

0xe089,	// (0x0003a049) wml_tabs_5_pane_ParamLimits

0xe089,	// (0x0003a049) wml_tabs_5_pane

0xe0a3,	// (0x0003a063) wml_tabs_pane_g2_ParamLimits

0xe0a3,	// (0x0003a063) wml_tabs_pane_g2

0xe0b7,	// (0x0003a077) wml_tabs_pane_g3_ParamLimits

0xe0b7,	// (0x0003a077) wml_tabs_pane_g3

0x4c59,	// (0x00030c19) wml_tabs_2_active_pane_ParamLimits

0x4c59,	// (0x00030c19) wml_tabs_2_active_pane

0x4c6d,	// (0x00030c2d) wml_tabs_2_passive_pane_ParamLimits

0x4c6d,	// (0x00030c2d) wml_tabs_2_passive_pane

0x4c81,	// (0x00030c41) wml_tabs_3_active_pane_cp_ParamLimits

0x4c81,	// (0x00030c41) wml_tabs_3_active_pane_cp

0x4c96,	// (0x00030c56) wml_tabs_3_passive_pane_ParamLimits

0x4c96,	// (0x00030c56) wml_tabs_3_passive_pane

0x4ca9,	// (0x00030c69) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ca9,	// (0x00030c69) wml_tabs_3_passive_pane_cp

0x4cc0,	// (0x00030c80) tabs_4_active_pane

0x4cc8,	// (0x00030c88) tabs_4_passive_pane

0x4cd2,	// (0x00030c92) tabs_4_passive_pane_cp

0x4cda,	// (0x00030c9a) tabs_4_passive_pane_cp2

0x451b,	// (0x000304db) aid_height_text

0x3c6b,	// (0x0002fc2b) mup_volume_cont_pane_ParamLimits

0x3c6b,	// (0x0002fc2b) mup_volume_cont_pane

0x1a81,	// (0x0002da41) aid_size_cell_pinb

0x1a8b,	// (0x0002da4b) aid_size_list_pinb

0x4bc4,	// (0x00030b84) mup2_volume_cont_pane_ParamLimits

0x4bc4,	// (0x00030b84) mup2_volume_cont_pane

0xb7c0,	// (0x00037780) mup2_volume_cont_pane_g1_ParamLimits

0xb7c0,	// (0x00037780) mup2_volume_cont_pane_g1

0x0206,	// (0x0002c1c6) aid_size_cell_touch_ParamLimits

0x0206,	// (0x0002c1c6) aid_size_cell_touch

0x03ee,	// (0x0002c3ae) touch_pane_ParamLimits

0x03ee,	// (0x0002c3ae) touch_pane

0xb068,	// (0x00037028) main_rss2_pane

0xe0d4,	// (0x0003a094) listscroll_rss2_pane

0xe0dd,	// (0x0003a09d) rss2_navigation_pane

0xe0e5,	// (0x0003a0a5) list_rss2_pane

0xc8a2,	// (0x00038862) scroll_pane_cp22

0xe0ed,	// (0x0003a0ad) rss2_navigation_pane_g1

0xe0f6,	// (0x0003a0b6) rss2_navigation_pane_g2

0xe0fe,	// (0x0003a0be) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003b64c) rss2_navigation_pane_g

0xe106,	// (0x0003a0c6) rss2_navigation_pane_t1

0x4ce4,	// (0x00030ca4) rss2_list_single_pane_ParamLimits

0x4ce4,	// (0x00030ca4) rss2_list_single_pane

0xe114,	// (0x0003a0d4) rss2_list_single_pane_t2

0xe122,	// (0x0003a0e2) rss2_list_single_pane_t3_ParamLimits

0xe122,	// (0x0003a0e2) rss2_list_single_pane_t3

0xe13f,	// (0x0003a0ff) rss2_list_single_pane_t4

0x35ba,	// (0x0002f57a) smil_status_pane_g1

0xb05a,	// (0x0003701a) main_image2_pane_ParamLimits

0xb05a,	// (0x0003701a) main_image2_pane

0x0b3f,	// (0x0002caff) main_camera2_pane_g9_ParamLimits

0x0b3f,	// (0x0002caff) main_camera2_pane_g9

0x0c6d,	// (0x0002cc2d) main_camera2_pane_t5_ParamLimits

0x0c6d,	// (0x0002cc2d) main_camera2_pane_t5

0xb790,	// (0x00037750) main_camera2_pane_t6_ParamLimits

0xb790,	// (0x00037750) main_camera2_pane_t6

0x4cf9,	// (0x00030cb9) main_image2_pane_g1_ParamLimits

0x4cf9,	// (0x00030cb9) main_image2_pane_g1

0x4257,	// (0x00030217) smil2_video_pane_ParamLimits

0x4257,	// (0x00030217) smil2_video_pane

0xb008,	// (0x00036fc8) aid_zoom_text_primary_cp

0xb050,	// (0x00037010) popup_preview_fixed_window

0xc176,	// (0x00038136) im_reading_pane_g1

0x09b6,	// (0x0002c976) cams2_bc_adjust_pane_cp_ParamLimits

0x09b6,	// (0x0002c976) cams2_bc_adjust_pane_cp

0x0c9c,	// (0x0002cc5c) cams2_bc_adjust_pane_ParamLimits

0x0c9c,	// (0x0002cc5c) cams2_bc_adjust_pane

0x4d0f,	// (0x00030ccf) cams2_bc_adjust_pane_g1

0xb7f9,	// (0x000377b9) cams2_slider_pane

0xb802,	// (0x000377c2) cams2_slider_pane_g1

0xb80b,	// (0x000377cb) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003b653) cams2_slider_pane_g

0x045e,	// (0x0002c41e) calc_display_pane_ParamLimits

0x0486,	// (0x0002c446) calc_paper_pane_ParamLimits

0x04a9,	// (0x0002c469) grid_calc_pane_ParamLimits

0xb6b5,	// (0x00037675) popup_clock_digital_window_t1_ParamLimits

0xcdfb,	// (0x00038dbb) main_image_pane_t1

0x0440,	// (0x0002c400) aid_size_cell_calc_ParamLimits

0x0440,	// (0x0002c400) aid_size_cell_calc

0x070c,	// (0x0002c6cc) popup_blid_sat_info2_window_ParamLimits

0x070c,	// (0x0002c6cc) popup_blid_sat_info2_window

0xe155,	// (0x0003a115) aid_size_cell_blid

0xe15d,	// (0x0003a11d) bg_popup_window_pane_cp07

0xe180,	// (0x0003a140) grid_popup_blid_pane

0xe18a,	// (0x0003a14a) heading_pane_cp05_ParamLimits

0xe18a,	// (0x0003a14a) heading_pane_cp05

0xe254,	// (0x0003a214) cell_popup_blid_pane_ParamLimits

0xe254,	// (0x0003a214) cell_popup_blid_pane

0xe278,	// (0x0003a238) cell_popup_blid_pane_g1

0xe280,	// (0x0003a240) cell_popup_blid_pane_t1

0x4b94,	// (0x00030b54) mup2_indicator_pane_ParamLimits

0x4b94,	// (0x00030b54) mup2_indicator_pane

0xc07d,	// (0x0003803d) mup2_visualizer_osc_pane

0xe02a,	// (0x00039fea) mup2_visualizer_spec_pane_ParamLimits

0xe02a,	// (0x00039fea) mup2_visualizer_spec_pane

0x4d17,	// (0x00030cd7) mup2_spec_half_pane

0x4d20,	// (0x00030ce0) mup2_spec_half_pane_cp

0x4d28,	// (0x00030ce8) mup2_spec_bar_pane_ParamLimits

0x4d28,	// (0x00030ce8) mup2_spec_bar_pane

0xdfcb,	// (0x00039f8b) mup2_spec_bar_pane_g1

0xdfd5,	// (0x00039f95) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003b5c6) mup2_spec_bar_pane_g

0x4d48,	// (0x00030d08) mup2_osc_middle_pane

0xdfe7,	// (0x00039fa7) mup2_visualizer_osc_pane_g1

0xb092,	// (0x00037052) popup_number_entry_window_t1_ParamLimits

0xb0a5,	// (0x00037065) popup_number_entry_window_t2_ParamLimits

0xb0b7,	// (0x00037077) popup_number_entry_window_t3_ParamLimits

0x19c3,	// (0x0002d983) popup_number_entry_window_t5_ParamLimits

0x19c3,	// (0x0002d983) popup_number_entry_window_t5

0xf0ca,	// (0x0003b08a) popup_number_entry_window_t_ParamLimits

0xb0c9,	// (0x00037089) text_title_cp2_ParamLimits

0xb6f4,	// (0x000376b4) aid_hotspot_pointer_text2_pane

0xb70e,	// (0x000376ce) main_viewer_pane_g9_ParamLimits

0xb70e,	// (0x000376ce) main_viewer_pane_g9

0xc3af,	// (0x0003836f) cale_month_pane_t1_ParamLimits

0xc3ec,	// (0x000383ac) bg_cale_pane_ParamLimits

0xc404,	// (0x000383c4) list_cale_pane_ParamLimits

0xc415,	// (0x000383d5) listscroll_cale_day_pane_t1

0xc427,	// (0x000383e7) scroll_pane_cp09_ParamLimits

0x3c9d,	// (0x0002fc5d) main_mup_eq_pane_t1_ParamLimits

0x3c9d,	// (0x0002fc5d) main_mup_eq_pane_t1

0x3cb7,	// (0x0002fc77) main_mup_eq_pane_t2_ParamLimits

0x3cb7,	// (0x0002fc77) main_mup_eq_pane_t2

0x3cd1,	// (0x0002fc91) main_mup_eq_pane_t3_ParamLimits

0x3cd1,	// (0x0002fc91) main_mup_eq_pane_t3

0x3ced,	// (0x0002fcad) main_mup_eq_pane_t4_ParamLimits

0x3ced,	// (0x0002fcad) main_mup_eq_pane_t4

0x3d09,	// (0x0002fcc9) main_mup_eq_pane_t5_ParamLimits

0x3d09,	// (0x0002fcc9) main_mup_eq_pane_t5

0x3d25,	// (0x0002fce5) main_mup_eq_pane_t6_ParamLimits

0x3d25,	// (0x0002fce5) main_mup_eq_pane_t6

0x3d39,	// (0x0002fcf9) main_mup_eq_pane_t7_ParamLimits

0x3d39,	// (0x0002fcf9) main_mup_eq_pane_t7

0x3d4d,	// (0x0002fd0d) main_mup_eq_pane_t8_ParamLimits

0x3d4d,	// (0x0002fd0d) main_mup_eq_pane_t8

0x3d61,	// (0x0002fd21) main_mup_eq_pane_t9_ParamLimits

0x3d61,	// (0x0002fd21) main_mup_eq_pane_t9

0x3d7b,	// (0x0002fd3b) main_mup_eq_pane_t10_ParamLimits

0x3d7b,	// (0x0002fd3b) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003b415) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003b415) main_mup_eq_pane_t

0x3e2a,	// (0x0002fdea) mup_equalizer_pane_cp5_ParamLimits

0x3e3e,	// (0x0002fdfe) mup_equalizer_pane_cp6_ParamLimits

0x3e52,	// (0x0002fe12) mup_equalizer_pane_cp7_ParamLimits

0xb068,	// (0x00037028) main_gallery_pane

0xdff0,	// (0x00039fb0) smil2_volume_pane

0xdff8,	// (0x00039fb8) smil_status_volume_pane_g1_ParamLimits

0xe00b,	// (0x00039fcb) smil_status_volume_pane_g2_ParamLimits

0xb76e,	// (0x0003772e) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003b5cb) smil_status_volume_pane_g_ParamLimits

0xe15d,	// (0x0003a11d) bg_popup_window_pane_cp07_ParamLimits

0xe16b,	// (0x0003a12b) blid_firmament_pane

0x4d51,	// (0x00030d11) aid_size_cell_gallery_ParamLimits

0x4d51,	// (0x00030d11) aid_size_cell_gallery

0x4d67,	// (0x00030d27) grid_gallery_pane_ParamLimits

0x4d67,	// (0x00030d27) grid_gallery_pane

0x4d80,	// (0x00030d40) cell_gallery_pane_ParamLimits

0x4d80,	// (0x00030d40) cell_gallery_pane

0xe2a3,	// (0x0003a263) bg_cell_gallery_focus_pane_ParamLimits

0xe2a3,	// (0x0003a263) bg_cell_gallery_focus_pane

0xe2b5,	// (0x0003a275) cell_gallery_pane_g1_ParamLimits

0xe2b5,	// (0x0003a275) cell_gallery_pane_g1

0x4dc9,	// (0x00030d89) cell_gallery_pane_g2_ParamLimits

0x4dc9,	// (0x00030d89) cell_gallery_pane_g2

0x4dd6,	// (0x00030d96) cell_gallery_pane_g3_ParamLimits

0x4dd6,	// (0x00030d96) cell_gallery_pane_g3

0xe2c1,	// (0x0003a281) cell_gallery_pane_g4_ParamLimits

0xe2c1,	// (0x0003a281) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003b679) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003b679) cell_gallery_pane_g

0xe2cd,	// (0x0003a28d) bg_cell_gallery_focus_pane_g1

0xe2d5,	// (0x0003a295) bg_cell_gallery_focus_pane_g2

0xe2dd,	// (0x0003a29d) bg_cell_gallery_focus_pane_g3

0xe2e5,	// (0x0003a2a5) bg_cell_gallery_focus_pane_g4

0xe2ed,	// (0x0003a2ad) bg_cell_gallery_focus_pane_g5

0xe2f5,	// (0x0003a2b5) bg_cell_gallery_focus_pane_g6

0xe2fd,	// (0x0003a2bd) bg_cell_gallery_focus_pane_g7

0xe305,	// (0x0003a2c5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003b682) bg_cell_gallery_focus_pane_g

0xe30d,	// (0x0003a2cd) aid_firma_cardinal

0xe321,	// (0x0003a2e1) blid_firmament_pane_t1

0xe338,	// (0x0003a2f8) blid_firmament_pane_t2

0xe34f,	// (0x0003a30f) blid_firmament_pane_t3

0xe366,	// (0x0003a326) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003b693) blid_firmament_pane_t

0xe37d,	// (0x0003a33d) blid_sat_info_pane

0xe38d,	// (0x0003a34d) blid_sat_info_pane_g1

0xe38d,	// (0x0003a34d) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003b69c) blid_sat_info_pane_g

0xe397,	// (0x0003a357) blid_sat_info_pane_t1

0xe3a5,	// (0x0003a365) smil2_volume_content_pane

0xe3ae,	// (0x0003a36e) smil2_volume_pane_g1

0xe28e,	// (0x0003a24e) smil2_volume_content_pane_g1

0xe3b6,	// (0x0003a376) smil2_volume_content_pane_g2

0xe3bf,	// (0x0003a37f) smil2_volume_content_pane_g3

0xe3c8,	// (0x0003a388) smil2_volume_content_pane_g4

0xe3d1,	// (0x0003a391) smil2_volume_content_pane_g5

0xe3da,	// (0x0003a39a) smil2_volume_content_pane_g6

0xe3e3,	// (0x0003a3a3) smil2_volume_content_pane_g7

0xe3ec,	// (0x0003a3ac) smil2_volume_content_pane_g8

0xe3f5,	// (0x0003a3b5) smil2_volume_content_pane_g9

0xe3fe,	// (0x0003a3be) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003b6a1) smil2_volume_content_pane_g

0x2024,	// (0x0002dfe4) cale_week_day_heading_pane_t1_ParamLimits

0x204e,	// (0x0002e00e) cale_week_day_heading_pane_t2_ParamLimits

0x207d,	// (0x0002e03d) cale_week_day_heading_pane_t3_ParamLimits

0x20ac,	// (0x0002e06c) cale_week_day_heading_pane_t4_ParamLimits

0x20db,	// (0x0002e09b) cale_week_day_heading_pane_t5_ParamLimits

0x2112,	// (0x0002e0d2) cale_week_day_heading_pane_t6_ParamLimits

0x2149,	// (0x0002e109) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003b191) cale_week_day_heading_pane_t_ParamLimits

0xc022,	// (0x00037fe2) bg_cale_side_pane_ParamLimits

0x0580,	// (0x0002c540) cale_week_time_pane_t1_ParamLimits

0x059a,	// (0x0002c55a) cale_week_time_pane_t2_ParamLimits

0x05b4,	// (0x0002c574) cale_week_time_pane_t3_ParamLimits

0x05ce,	// (0x0002c58e) cale_week_time_pane_t4_ParamLimits

0x05e8,	// (0x0002c5a8) cale_week_time_pane_t5_ParamLimits

0x0602,	// (0x0002c5c2) cale_week_time_pane_t6_ParamLimits

0x061c,	// (0x0002c5dc) cale_week_time_pane_t7_ParamLimits

0x0636,	// (0x0002c5f6) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003b1a0) cale_week_time_pane_t_ParamLimits

0x2173,	// (0x0002e133) cell_cale_week_pane_g2_ParamLimits

0xc022,	// (0x00037fe2) bg_cale_side_pane_cp01_ParamLimits

0x33c3,	// (0x0002f383) cale_month_week_pane_t1_ParamLimits

0x33dc,	// (0x0002f39c) cale_month_week_pane_t2_ParamLimits

0x33f5,	// (0x0002f3b5) cale_month_week_pane_t3_ParamLimits

0x340e,	// (0x0002f3ce) cale_month_week_pane_t4_ParamLimits

0x3427,	// (0x0002f3e7) cale_month_week_pane_t5_ParamLimits

0x3440,	// (0x0002f400) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003b275) cale_month_week_pane_t_ParamLimits

0xb631,	// (0x000375f1) cell_cale_month_pane_g1_ParamLimits

0xb068,	// (0x00037028) main_cale_event_viewer_pane

0xafea,	// (0x00036faa) listscroll_cale_event_viewer_pane

0xe407,	// (0x0003a3c7) list_cale_ev_pane

0xe40f,	// (0x0003a3cf) scroll_pane_cp023

0xe41b,	// (0x0003a3db) field_cale_ev_pane_ParamLimits

0xe41b,	// (0x0003a3db) field_cale_ev_pane

0xe439,	// (0x0003a3f9) field_cale_ev_content_pane_ParamLimits

0xe439,	// (0x0003a3f9) field_cale_ev_content_pane

0xe445,	// (0x0003a405) field_cale_ev_pane_g1_ParamLimits

0xe445,	// (0x0003a405) field_cale_ev_pane_g1

0xe451,	// (0x0003a411) field_cale_ev_pane_g2_ParamLimits

0xe451,	// (0x0003a411) field_cale_ev_pane_g2

0xe469,	// (0x0003a429) field_cale_ev_pane_g3_ParamLimits

0xe469,	// (0x0003a429) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003b6b6) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003b6b6) field_cale_ev_pane_g

0xe481,	// (0x0003a441) field_cale_ev_pane_t1_ParamLimits

0xe481,	// (0x0003a441) field_cale_ev_pane_t1

0xe498,	// (0x0003a458) field_cale_ev_content_pane_t1_ParamLimits

0xe498,	// (0x0003a458) field_cale_ev_content_pane_t1

0xcc68,	// (0x00038c28) bg_button_pane_cp01

0x1d51,	// (0x0002dd11) listscroll_cale_week_pane_ParamLimits

0xbfcd,	// (0x00037f8d) popup_toolbar_window_cp01

0xbff3,	// (0x00037fb3) listscroll_cale_week_pane_t1_ParamLimits

0x1d51,	// (0x0002dd11) listscroll_cale_day_pane_ParamLimits

0xbfcd,	// (0x00037f8d) popup_toolbar_window_cp02

0xc415,	// (0x000383d5) listscroll_cale_day_pane_t1_ParamLimits

0x06d2,	// (0x0002c692) main_cale_month_pane_ParamLimits

0xb759,	// (0x00037719) popup_toolbar_window_cp03_ParamLimits

0xb759,	// (0x00037719) popup_toolbar_window_cp03

0x411f,	// (0x000300df) main_image_pane_g2_ParamLimits

0x411f,	// (0x000300df) main_image_pane_g2

0x4130,	// (0x000300f0) main_image_pane_g3_ParamLimits

0x4130,	// (0x000300f0) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003b4a7) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003b4a7) main_image_pane_g

0xcdfb,	// (0x00038dbb) main_image_pane_t1_ParamLimits

0x4141,	// (0x00030101) main_image_pane_t2_ParamLimits

0x4141,	// (0x00030101) main_image_pane_t2

0x4153,	// (0x00030113) main_image_pane_t3_ParamLimits

0x4153,	// (0x00030113) main_image_pane_t3

0x417b,	// (0x0003013b) main_image_pane_t4_ParamLimits

0x417b,	// (0x0003013b) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003b4ae) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003b4ae) main_image_pane_t

0x419b,	// (0x0003015b) popup_image_details_window_cp01

0x41a5,	// (0x00030165) popup_toobar_trans_pane_cp01_ParamLimits

0x41a5,	// (0x00030165) popup_toobar_trans_pane_cp01

0x07eb,	// (0x0002c7ab) popup_image_details_window_ParamLimits

0x07eb,	// (0x0002c7ab) popup_image_details_window

0xb72c,	// (0x000376ec) popup_image_focus_window

0x0970,	// (0x0002c930) camera2_autofocus_pane_ParamLimits

0x0970,	// (0x0002c930) camera2_autofocus_pane

0xafea,	// (0x00036faa) bg_popup_sub_pane_cp06

0xe4b6,	// (0x0003a476) popup_image_focus_window_g1

0xe4be,	// (0x0003a47e) popup_image_focus_window_g2

0xe4c6,	// (0x0003a486) popup_image_focus_window_g3

0xe4ce,	// (0x0003a48e) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003b6bd) popup_image_focus_window_g

0xe4d6,	// (0x0003a496) popup_image_focus_window_t1

0xe4e4,	// (0x0003a4a4) popup_image_focus_window_t2

0xe4f4,	// (0x0003a4b4) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003b6c6) popup_image_focus_window_t

0xe502,	// (0x0003a4c2) camera2_autofocus_pane_g1

0xc93a,	// (0x000388fa) bg_tb_trans_pane_cp01

0xe510,	// (0x0003a4d0) popup_image_details_window_g1

0xe523,	// (0x0003a4e3) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003b6d8) popup_image_details_window_g

0xe54c,	// (0x0003a50c) popup_image_details_window_t1

0xe55e,	// (0x0003a51e) popup_image_details_window_t2

0xe577,	// (0x0003a537) popup_image_details_window_t3

0xe58b,	// (0x0003a54b) popup_image_details_window_t4

0xe5a6,	// (0x0003a566) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003b6df) popup_image_details_window_t

0xbea4,	// (0x00037e64) bg_calc_paper_pane_ParamLimits

0xb068,	// (0x00037028) grid_highlight_pane_cp013

0xb5a1,	// (0x00037561) list_calc_pane_ParamLimits

0xb5b3,	// (0x00037573) scroll_pane_cp024

0xbeb8,	// (0x00037e78) bg_calc_display_pane_ParamLimits

0x04d7,	// (0x0002c497) calc_display_pane_t1_ParamLimits

0x04e9,	// (0x0002c4a9) calc_display_pane_t2_ParamLimits

0xb5bb,	// (0x0003757b) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003b111) calc_display_pane_t_ParamLimits

0x054a,	// (0x0002c50a) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003b12e) cell_calc_pane_g

0x0553,	// (0x0002c513) cell_calc_pane_t1

0xbf17,	// (0x00037ed7) grid_highlight_pane_cp02_ParamLimits

0xbf2d,	// (0x00037eed) toolbar_button_pane_cp01_ParamLimits

0xbf2d,	// (0x00037eed) toolbar_button_pane_cp01

0xce40,	// (0x00038e00) temp_image_control_pane_ParamLimits

0xce40,	// (0x00038e00) temp_image_control_pane

0xb05a,	// (0x0003701a) main_mp3_pane

0xe5c0,	// (0x0003a580) temp_image_control_pane_g1_ParamLimits

0xe5c0,	// (0x0003a580) temp_image_control_pane_g1

0xe5ce,	// (0x0003a58e) temp_image_control_pane_g2_ParamLimits

0xe5ce,	// (0x0003a58e) temp_image_control_pane_g2

0xe5e0,	// (0x0003a5a0) temp_image_control_pane_g3_ParamLimits

0xe5e0,	// (0x0003a5a0) temp_image_control_pane_g3

0x4e13,	// (0x00030dd3) temp_image_control_pane_g4_ParamLimits

0x4e13,	// (0x00030dd3) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003b6ea) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003b6ea) temp_image_control_pane_g

0xe5c0,	// (0x0003a580) main_mp3_pane_g1

0x4e26,	// (0x00030de6) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003b6f3) main_mp3_pane_g

0xe623,	// (0x0003a5e3) main_mp3_pane_t1

0xc085,	// (0x00038045) main_camera_pane_g8_ParamLimits

0xc085,	// (0x00038045) main_camera_pane_g8

0x246d,	// (0x0002e42d) main_video_pane_g7_ParamLimits

0x246d,	// (0x0002e42d) main_video_pane_g7

0xb7ae,	// (0x0003776e) main_camera2_pane_t7_ParamLimits

0xb7ae,	// (0x0003776e) main_camera2_pane_t7

0xc1cd,	// (0x0003818d) scroll_pane_cp025_ParamLimits

0xc1cd,	// (0x0003818d) scroll_pane_cp025

0xc1e1,	// (0x000381a1) scroll_pane_cp026_ParamLimits

0xc1e1,	// (0x000381a1) scroll_pane_cp026

0xc1f0,	// (0x000381b0) wml_content_pane_ParamLimits

0xb068,	// (0x00037028) main_touch_calib_pane

0x4efa,	// (0x00030eba) main_touch_calib_pane_g1

0x4f0c,	// (0x00030ecc) main_touch_calib_pane_g2

0x4f1e,	// (0x00030ede) main_touch_calib_pane_g3

0x4f30,	// (0x00030ef0) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003b711) main_touch_calib_pane_g

0x4f42,	// (0x00030f02) main_touch_calib_pane_t1

0x4f5c,	// (0x00030f1c) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003b71a) main_touch_calib_pane_t

0xc99a,	// (0x0003895a) mup_progress_pane_cp02

0xc9cf,	// (0x0003898f) navi_pane_g1

0xca8a,	// (0x00038a4a) navi_pane_mp_t3

0xb05a,	// (0x0003701a) main_mp3_pane_ParamLimits

0x4800,	// (0x000307c0) navi_pane_ParamLimits

0xe5c0,	// (0x0003a580) main_mp3_pane_g1_ParamLimits

0x4e26,	// (0x00030de6) main_mp3_pane_g2_ParamLimits

0x4e34,	// (0x00030df4) main_mp3_pane_g3_ParamLimits

0x4e34,	// (0x00030df4) main_mp3_pane_g3

0x4e42,	// (0x00030e02) main_mp3_pane_g4_ParamLimits

0x4e42,	// (0x00030e02) main_mp3_pane_g4

0xe5f0,	// (0x0003a5b0) main_mp3_pane_g5_ParamLimits

0xe5f0,	// (0x0003a5b0) main_mp3_pane_g5

0xe5fe,	// (0x0003a5be) main_mp3_pane_g6_ParamLimits

0xe5fe,	// (0x0003a5be) main_mp3_pane_g6

0xe60b,	// (0x0003a5cb) main_mp3_pane_g7_ParamLimits

0xe60b,	// (0x0003a5cb) main_mp3_pane_g7

0xe617,	// (0x0003a5d7) main_mp3_pane_g8_ParamLimits

0xe617,	// (0x0003a5d7) main_mp3_pane_g8

0xf733,	// (0x0003b6f3) main_mp3_pane_g_ParamLimits

0x4e4e,	// (0x00030e0e) main_mp3_pane_t2

0x4e5c,	// (0x00030e1c) main_mp3_pane_t3

0xe631,	// (0x0003a5f1) main_mp3_pane_t4

0xe63f,	// (0x0003a5ff) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003b704) main_mp3_pane_t

0xe64d,	// (0x0003a60d) mup_progress_pane_cp01

0xb008,	// (0x00036fc8) aid_zoom_text_secondary2

0xe407,	// (0x0003a3c7) list_cale_ev2_pane

0xe40f,	// (0x0003a3cf) scroll_pane_cp023_ParamLimits

0x4fb2,	// (0x00030f72) field_cale_ev2_pane_ParamLimits

0x4fb2,	// (0x00030f72) field_cale_ev2_pane

0x4fd2,	// (0x00030f92) field_cale_ev2_pane_g1_ParamLimits

0x4fd2,	// (0x00030f92) field_cale_ev2_pane_g1

0x4fde,	// (0x00030f9e) field_cale_ev2_pane_g2_ParamLimits

0x4fde,	// (0x00030f9e) field_cale_ev2_pane_g2

0x4ff6,	// (0x00030fb6) field_cale_ev2_pane_g3_ParamLimits

0x4ff6,	// (0x00030fb6) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003b725) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003b725) field_cale_ev2_pane_g

0x500e,	// (0x00030fce) field_cale_ev2_pane_t1_ParamLimits

0x500e,	// (0x00030fce) field_cale_ev2_pane_t1

0x5025,	// (0x00030fe5) field_cale_ev2_pane_t2_ParamLimits

0x5025,	// (0x00030fe5) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003b72e) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003b72e) field_cale_ev2_pane_t

0x3fd4,	// (0x0002ff94) main_postcard_pane_g5_ParamLimits

0x3fd4,	// (0x0002ff94) main_postcard_pane_g5

0x3fea,	// (0x0002ffaa) main_postcard_pane_g6_ParamLimits

0x3fea,	// (0x0002ffaa) main_postcard_pane_g6

0x2239,	// (0x0002e1f9) camera2_autofocus_pane_cp_ParamLimits

0x2239,	// (0x0002e1f9) camera2_autofocus_pane_cp

0xb05a,	// (0x0003701a) main_mup3_pane

0x503a,	// (0x00030ffa) main_mup3_pane_g1_ParamLimits

0x503a,	// (0x00030ffa) main_mup3_pane_g1

0x505c,	// (0x0003101c) main_mup3_pane_g2_ParamLimits

0x505c,	// (0x0003101c) main_mup3_pane_g2

0x50da,	// (0x0003109a) main_mup3_pane_g3_ParamLimits

0x50da,	// (0x0003109a) main_mup3_pane_g3

0x5120,	// (0x000310e0) main_mup3_pane_g4_ParamLimits

0x5120,	// (0x000310e0) main_mup3_pane_g4

0x5166,	// (0x00031126) main_mup3_pane_g5_ParamLimits

0x5166,	// (0x00031126) main_mup3_pane_g5

0x51ac,	// (0x0003116c) main_mup3_pane_g6_ParamLimits

0x51ac,	// (0x0003116c) main_mup3_pane_g6

0xe681,	// (0x0003a641) main_mup3_pane_g7_ParamLimits

0xe681,	// (0x0003a641) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003b73e) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003b73e) main_mup3_pane_g

0x522a,	// (0x000311ea) main_mup3_pane_t1_ParamLimits

0x522a,	// (0x000311ea) main_mup3_pane_t1

0x529e,	// (0x0003125e) main_mup3_pane_t2_ParamLimits

0x529e,	// (0x0003125e) main_mup3_pane_t2

0x5372,	// (0x00031332) main_mup3_pane_t4_ParamLimits

0x5372,	// (0x00031332) main_mup3_pane_t4

0x53c8,	// (0x00031388) main_mup3_pane_t5_ParamLimits

0x53c8,	// (0x00031388) main_mup3_pane_t5

0x5484,	// (0x00031444) main_mup3_pane_t6_ParamLimits

0x5484,	// (0x00031444) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003b74f) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003b74f) main_mup3_pane_t

0x553c,	// (0x000314fc) mup3_progress_pane_ParamLimits

0x553c,	// (0x000314fc) mup3_progress_pane

0x55d2,	// (0x00031592) popup_mup3_control_window_ParamLimits

0x55d2,	// (0x00031592) popup_mup3_control_window

0xe68f,	// (0x0003a64f) popup_mup3_text_window

0x5604,	// (0x000315c4) mup3_progress_pane_t1

0x5623,	// (0x000315e3) mup3_progress_pane_t2

0xe697,	// (0x0003a657) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003b75c) mup3_progress_pane_t

0xe6b4,	// (0x0003a674) mup_progress_pane_cp03

0xafea,	// (0x00036faa) bg_tb_trans_pane_cp04

0x5642,	// (0x00031602) mup3_volume_pane

0x564a,	// (0x0003160a) popup_mup3_control_window_g1

0x5653,	// (0x00031613) mup3_volume_pane_g1

0x565c,	// (0x0003161c) mup3_volume_pane_g2

0x5665,	// (0x00031625) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003b763) mup3_volume_pane_g

0xafea,	// (0x00036faa) bg_tb_trans_pane_cp03

0xe6c4,	// (0x0003a684) popup_mup3_text_window_g1

0xe6cc,	// (0x0003a68c) popup_mup3_text_window_t1

0xbf00,	// (0x00037ec0) list_calc_item_pane_g1_ParamLimits

0xe0cb,	// (0x0003a08b) mup_volume_pane_cp_g1

0x4f76,	// (0x00030f36) main_touch_calib_pane_t3

0x4f8a,	// (0x00030f4a) main_touch_calib_pane_t4

0x4f9e,	// (0x00030f5e) main_touch_calib_pane_t5

0xaff4,	// (0x00036fb4) aid_cell_size_toolbar2

0xaffc,	// (0x00036fbc) aid_popup3_width_pane

0xb008,	// (0x00036fc8) aid_zoom_text_msg_primary

0x2218,	// (0x0002e1d8) vorec_t7

0xbec4,	// (0x00037e84) bg_calc_paper_pane_g1_ParamLimits

0xbed0,	// (0x00037e90) bg_calc_paper_pane_g2_ParamLimits

0xbedc,	// (0x00037e9c) bg_calc_paper_pane_g3_ParamLimits

0xbee8,	// (0x00037ea8) bg_calc_paper_pane_g4_ParamLimits

0xbef4,	// (0x00037eb4) bg_calc_paper_pane_g5_ParamLimits

0x1c2b,	// (0x0002dbeb) bg_calc_paper_pane_g6_ParamLimits

0x1c3a,	// (0x0002dbfa) bg_calc_paper_pane_g7_ParamLimits

0x1c49,	// (0x0002dc09) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003b118) bg_calc_paper_pane_g_ParamLimits

0x1c5c,	// (0x0002dc1c) calc_bg_paper_pane_g9_ParamLimits

0x2384,	// (0x0002e344) image_qvga_pane_ParamLimits

0x2384,	// (0x0002e344) image_qvga_pane

0xbdf3,	// (0x00037db3) bg_popup_sub_pane_cp04_ParamLimits

0xcd77,	// (0x00038d37) popup_mup_playback_window_g1_ParamLimits

0xcd83,	// (0x00038d43) popup_mup_playback_window_t1_ParamLimits

0xcd98,	// (0x00038d58) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003b4a2) popup_mup_playback_window_t_ParamLimits

0x4aae,	// (0x00030a6e) main_mup2_pane_g3_ParamLimits

0x4aae,	// (0x00030a6e) main_mup2_pane_g3

0x2793,	// (0x0002e753) popup_toolbar_window_cp04

0xd17a,	// (0x0003913a) popup_call2_audio_second_window_g3_ParamLimits

0xd17a,	// (0x0003913a) popup_call2_audio_second_window_g3

0xd584,	// (0x00039544) popup_call2_audio_first_window_g4_ParamLimits

0xd584,	// (0x00039544) popup_call2_audio_first_window_g4

0xdc03,	// (0x00039bc3) popup_call2_audio_in_window_g4_ParamLimits

0xdc03,	// (0x00039bc3) popup_call2_audio_in_window_g4

0x4101,	// (0x000300c1) aid_area_sk_bg_cut_ParamLimits

0x4101,	// (0x000300c1) aid_area_sk_bg_cut

0xcdad,	// (0x00038d6d) aid_area_sk_bg_cut_2_ParamLimits

0xcdad,	// (0x00038d6d) aid_area_sk_bg_cut_2

0x4db9,	// (0x00030d79) aid_placing_details_win

0x4dc1,	// (0x00030d81) aid_placing_details_win_2

0xe502,	// (0x0003a4c2) camera2_autofocus_pane_g1_ParamLimits

0x0393,	// (0x0002c353) popup_fixed_preview_cale_window_ParamLimits

0x0393,	// (0x0002c353) popup_fixed_preview_cale_window

0xcb08,	// (0x00038ac8) navi_slider_pane_g3

0xcb11,	// (0x00038ad1) navi_slider_pane_g4

0xcb1a,	// (0x00038ada) navi_slider_pane_g5

0xcb08,	// (0x00038ac8) navi_slider_pane_g6

0xb6db,	// (0x0003769b) navi_slider_pane_g7

0xcc2d,	// (0x00038bed) mup_scale_pane_g3

0xcc36,	// (0x00038bf6) mup_scale_pane_g4

0xcc3f,	// (0x00038bff) mup_scale_pane_g5

0x3e66,	// (0x0002fe26) mup_scale_pane_g6

0x3e6f,	// (0x0002fe2f) mup_scale_pane_g7

0xcb08,	// (0x00038ac8) cams2_slider_pane_g3

0xe14d,	// (0x0003a10d) cams2_slider_pane_g4

0xb814,	// (0x000377d4) cams2_slider_pane_g5

0xcb08,	// (0x00038ac8) cams2_slider_pane_g6

0xb81c,	// (0x000377dc) cams2_slider_pane_g7

0xe38d,	// (0x0003a34d) camera2_autofocus_pane_cp_g1

0xdf64,	// (0x00039f24) bg_popup_preview_window_pane_cp02_ParamLimits

0xdf64,	// (0x00039f24) bg_popup_preview_window_pane_cp02

0xe6da,	// (0x0003a69a) list_fp_cale_pane_ParamLimits

0xe6da,	// (0x0003a69a) list_fp_cale_pane

0xe6e6,	// (0x0003a6a6) popup_fixed_preview_cale_window_t1_ParamLimits

0xe6e6,	// (0x0003a6a6) popup_fixed_preview_cale_window_t1

0x566e,	// (0x0003162e) popup_fixed_preview_cale_window_t2_ParamLimits

0x566e,	// (0x0003162e) popup_fixed_preview_cale_window_t2

0x5683,	// (0x00031643) popup_fixed_preview_cale_window_t3_ParamLimits

0x5683,	// (0x00031643) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003b76a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003b76a) popup_fixed_preview_cale_window_t

0x5698,	// (0x00031658) list_single_fp_cale_pane_ParamLimits

0x5698,	// (0x00031658) list_single_fp_cale_pane

0xe704,	// (0x0003a6c4) list_single_fp_cale_pane_g1_ParamLimits

0xe704,	// (0x0003a6c4) list_single_fp_cale_pane_g1

0xe710,	// (0x0003a6d0) list_single_fp_cale_pane_g2_ParamLimits

0xe710,	// (0x0003a6d0) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003b771) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003b771) list_single_fp_cale_pane_g

0xe729,	// (0x0003a6e9) list_single_fp_cale_pane_t1_ParamLimits

0xe729,	// (0x0003a6e9) list_single_fp_cale_pane_t1

0xe73b,	// (0x0003a6fb) list_single_fp_cale_pane_t2_ParamLimits

0xe73b,	// (0x0003a6fb) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003b778) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003b778) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb068,	// (0x00037028) main_dialer_pane

0x56ad,	// (0x0003166d) aid_cell_size_keypad

0x56b7,	// (0x00031677) dialer_ne_pane

0x56bf,	// (0x0003167f) grid_dialer_command_1_pane

0x56c7,	// (0x00031687) grid_dialer_command_2_pane

0x56cf,	// (0x0003168f) grid_dialer_keypad_pane

0x56e1,	// (0x000316a1) bg_popup_call_pane_cp06_ParamLimits

0x56e1,	// (0x000316a1) bg_popup_call_pane_cp06

0x56ed,	// (0x000316ad) dialer_ne_clear_pane_ParamLimits

0x56ed,	// (0x000316ad) dialer_ne_clear_pane

0xe76e,	// (0x0003a72e) dialer_ne_pane_g1

0xe776,	// (0x0003a736) dialer_ne_pane_t1_ParamLimits

0xe776,	// (0x0003a736) dialer_ne_pane_t1

0x56f9,	// (0x000316b9) dialer_ne_pane_t2_ParamLimits

0x56f9,	// (0x000316b9) dialer_ne_pane_t2

0x5723,	// (0x000316e3) dialer_ne_pane_t3_ParamLimits

0x5723,	// (0x000316e3) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003b77d) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003b77d) dialer_ne_pane_t

0x5753,	// (0x00031713) dialer_ne_pane_t3_copy1_ParamLimits

0x5753,	// (0x00031713) dialer_ne_pane_t3_copy1

0x5782,	// (0x00031742) cell_dialer_keypad_pane_ParamLimits

0x5782,	// (0x00031742) cell_dialer_keypad_pane

0x5799,	// (0x00031759) cell_dialer_command_1_pane_ParamLimits

0x5799,	// (0x00031759) cell_dialer_command_1_pane

0x57af,	// (0x0003176f) cell_dialer_command_2_pane_ParamLimits

0x57af,	// (0x0003176f) cell_dialer_command_2_pane

0xe788,	// (0x0003a748) bg_button_pane_cp02_ParamLimits

0xe788,	// (0x0003a748) bg_button_pane_cp02

0x57be,	// (0x0003177e) cell_dialer_keypad_pane_g1_ParamLimits

0x57be,	// (0x0003177e) cell_dialer_keypad_pane_g1

0xe788,	// (0x0003a748) bg_button_pane_cp03_ParamLimits

0xe788,	// (0x0003a748) bg_button_pane_cp03

0x57d2,	// (0x00031792) cell_dialer_command_1_pane_g1_ParamLimits

0x57d2,	// (0x00031792) cell_dialer_command_1_pane_g1

0xe794,	// (0x0003a754) bg_button_pane_cp04

0x57e6,	// (0x000317a6) cell_dialer_command_2_pane_g1

0xc07d,	// (0x0003803d) bg_button_pane_cp06

0xe79c,	// (0x0003a75c) dialer_ne_clear_pane_g1

0xc9db,	// (0x0003899b) navi_pane_g2

0xca09,	// (0x000389c9) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003b3a5) navi_pane_g

0xca98,	// (0x00038a58) navi_pane_mv_g2

0xcabf,	// (0x00038a7f) navi_pane_mv_g5

0x3a2a,	// (0x0002f9ea) navi_pane_mv_t1

0xbeb8,	// (0x00037e78) main_clock2_pane

0x5833,	// (0x000317f3) main_clock2_list_pane_ParamLimits

0x5833,	// (0x000317f3) main_clock2_list_pane

0x586b,	// (0x0003182b) main_clock2_pane_t1_ParamLimits

0x586b,	// (0x0003182b) main_clock2_pane_t1

0x58a7,	// (0x00031867) main_clock2_pane_t2_ParamLimits

0x58a7,	// (0x00031867) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003b789) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003b789) main_clock2_pane_t

0x5945,	// (0x00031905) popup_clock_analogue_window_cp03_ParamLimits

0x5945,	// (0x00031905) popup_clock_analogue_window_cp03

0x596a,	// (0x0003192a) popup_clock_digital_window_cp02_ParamLimits

0x596a,	// (0x0003192a) popup_clock_digital_window_cp02

0x59db,	// (0x0003199b) main_clock2_list_single_pane_ParamLimits

0x59db,	// (0x0003199b) main_clock2_list_single_pane

0xc07d,	// (0x0003803d) list_highlight_pane_cp05

0xe7da,	// (0x0003a79a) main_clock2_list_single_pane_t1

0x2793,	// (0x0002e753) popup_toolbar_window_cp04_ParamLimits

0x4de3,	// (0x00030da3) camera2_autofocus_pane_g2_ParamLimits

0x4de3,	// (0x00030da3) camera2_autofocus_pane_g2

0x4def,	// (0x00030daf) camera2_autofocus_pane_g3_ParamLimits

0x4def,	// (0x00030daf) camera2_autofocus_pane_g3

0x4dfb,	// (0x00030dbb) camera2_autofocus_pane_g4_ParamLimits

0x4dfb,	// (0x00030dbb) camera2_autofocus_pane_g4

0x4e07,	// (0x00030dc7) camera2_autofocus_pane_g5_ParamLimits

0x4e07,	// (0x00030dc7) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003b6cd) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003b6cd) camera2_autofocus_pane_g

0xe661,	// (0x0003a621) camera2_autofocus_pane_cp_g2

0xe669,	// (0x0003a629) camera2_autofocus_pane_cp_g3

0xe671,	// (0x0003a631) camera2_autofocus_pane_cp_g4

0xe679,	// (0x0003a639) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003b733) camera2_autofocus_pane_cp_g

0x56d9,	// (0x00031699) popup_dialer_spcha_window

0xafea,	// (0x00036faa) bg_popup_sub_pane_cp07

0xe7e8,	// (0x0003a7a8) list_spcha_pane

0xe7f0,	// (0x0003a7b0) list_single_spcha_pane_ParamLimits

0xe7f0,	// (0x0003a7b0) list_single_spcha_pane

0xafea,	// (0x00036faa) list_highlight_pane_cp06

0xe801,	// (0x0003a7c1) list_single_spcha_pane_t1

0xd9ad,	// (0x0003996d) popup_call2_audio_out_window_g4_ParamLimits

0xd9ad,	// (0x0003996d) popup_call2_audio_out_window_g4

0xb068,	// (0x00037028) main_imed2_pane

0xb734,	// (0x000376f4) popup_imed_adjust2_window

0x0803,	// (0x0002c7c3) popup_imed_trans_window_ParamLimits

0x0803,	// (0x0002c7c3) popup_imed_trans_window

0xe1b6,	// (0x0003a176) popup_blid_sat_info2_window_t1

0xe1c4,	// (0x0003a184) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003b662) popup_blid_sat_info2_window_t

0x59ed,	// (0x000319ad) aid_size_cell_colour_35

0x5a0d,	// (0x000319cd) aid_size_cell_colour_112

0x5a2d,	// (0x000319ed) aid_size_cell_effect

0xdf70,	// (0x00039f30) bg_tb_trans_pane_cp02

0xc51e,	// (0x000384de) heading_imed_pane

0x5a4d,	// (0x00031a0d) listscroll_imed_pane

0xe80f,	// (0x0003a7cf) heading_imed_pane_g1

0xe817,	// (0x0003a7d7) heading_imed_pane_t1

0xe825,	// (0x0003a7e5) grid_imed_colour_35_pane_ParamLimits

0xe825,	// (0x0003a7e5) grid_imed_colour_35_pane

0x5a59,	// (0x00031a19) grid_imed_effect_pane

0xe83c,	// (0x0003a7fc) list_imed_aspect_pane

0x5a6f,	// (0x00031a2f) scroll_pane_cp027_ParamLimits

0x5a6f,	// (0x00031a2f) scroll_pane_cp027

0x5a80,	// (0x00031a40) cell_imed_effect_pane_ParamLimits

0x5a80,	// (0x00031a40) cell_imed_effect_pane

0xe844,	// (0x0003a804) cell_imed_colour_pane_ParamLimits

0xe844,	// (0x0003a804) cell_imed_colour_pane

0xe886,	// (0x0003a846) cell_imed_colour_pane_g1_ParamLimits

0xe886,	// (0x0003a846) cell_imed_colour_pane_g1

0xe897,	// (0x0003a857) hgihlgiht_grid_pane_cp016_ParamLimits

0xe897,	// (0x0003a857) hgihlgiht_grid_pane_cp016

0x5aa7,	// (0x00031a67) cell_imed_effect_pane_g1

0x5aaf,	// (0x00031a6f) grid_highlight_pane_cp017

0xe8a8,	// (0x0003a868) list_imed_single_pane_ParamLimits

0xe8a8,	// (0x0003a868) list_imed_single_pane

0xafea,	// (0x00036faa) list_highlight_pane_cp07

0xe8bd,	// (0x0003a87d) list_imed_aspect_pane_comp1_t1

0xdf70,	// (0x00039f30) bg_tb_trans_pane_cp05

0xe8df,	// (0x0003a89f) popup_imed_adjust2_window_g1

0xe906,	// (0x0003a8c6) popup_imed_adjust2_window_t1

0xe91e,	// (0x0003a8de) slider_imed_adjust_pane

0xe932,	// (0x0003a8f2) slider_imed_adjust_pane_g1

0xe942,	// (0x0003a902) slider_imed_adjust_pane_g2

0xe952,	// (0x0003a912) slider_imed_adjust_pane_g3

0xe963,	// (0x0003a923) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003b7a6) slider_imed_adjust_pane_g

0x5ab8,	// (0x00031a78) aid_size_cell_clipart2

0x5ac4,	// (0x00031a84) grid_imed_clipart_pane

0xe974,	// (0x0003a934) scroll_pane_cp031

0x5ace,	// (0x00031a8e) cell_imed_clipart_pane_ParamLimits

0x5ace,	// (0x00031a8e) cell_imed_clipart_pane

0x5af0,	// (0x00031ab0) cell_imed_clipart_pane_g1

0xafea,	// (0x00036faa) grid_highlight_pane_cp014

0x5848,	// (0x00031808) main_clock2_pane_g1_ParamLimits

0x5848,	// (0x00031808) main_clock2_pane_g1

0x5986,	// (0x00031946) aid_call2_pane_cp10

0x5998,	// (0x00031958) aid_call_pane_cp10

0xc920,	// (0x000388e0) popup_clock_analogue_window_cp10_g1

0xc920,	// (0x000388e0) popup_clock_analogue_window_cp10_g2

0x59aa,	// (0x0003196a) popup_clock_analogue_window_cp10_g3

0x59aa,	// (0x0003196a) popup_clock_analogue_window_cp10_g4

0xc920,	// (0x000388e0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003b794) popup_clock_analogue_window_cp10_g

0x59bc,	// (0x0003197c) popup_clock_analogue_window_cp10_t1

0x0e47,	// (0x0002ce07) clock_digital_number_pane_cp10_ParamLimits

0x0e47,	// (0x0002ce07) clock_digital_number_pane_cp10

0x0e5f,	// (0x0002ce1f) clock_digital_number_pane_cp11_ParamLimits

0x0e5f,	// (0x0002ce1f) clock_digital_number_pane_cp11

0x0e77,	// (0x0002ce37) clock_digital_number_pane_cp12_ParamLimits

0x0e77,	// (0x0002ce37) clock_digital_number_pane_cp12

0x0e8f,	// (0x0002ce4f) clock_digital_number_pane_cp13_ParamLimits

0x0e8f,	// (0x0002ce4f) clock_digital_number_pane_cp13

0x0ea7,	// (0x0002ce67) clock_digital_separator_pane_cp10_ParamLimits

0x0ea7,	// (0x0002ce67) clock_digital_separator_pane_cp10

0x0ebf,	// (0x0002ce7f) popup_clock_digital_window_cp02_t1_ParamLimits

0x0ebf,	// (0x0002ce7f) popup_clock_digital_window_cp02_t1

0xbdeb,	// (0x00037dab) clock_digital_number_pane_cp10_g1

0xbdeb,	// (0x00037dab) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003b7af) clock_digital_number_pane_cp10_g

0xbdeb,	// (0x00037dab) clock_digital_separator_pane_cp10_g1

0xbdeb,	// (0x00037dab) clock_digital_separator_pane_g2_cp10

0xcac7,	// (0x00038a87) navi_pane_vded_g4

0xcad0,	// (0x00038a90) navi_pane_vded_g5

0xcad9,	// (0x00038a99) navi_pane_vded_t1

0xb068,	// (0x00037028) main_vded_pane

0x5af9,	// (0x00031ab9) main_vded_pane_g1

0x5b03,	// (0x00031ac3) main_vded_pane_g2

0x5b0d,	// (0x00031acd) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003b7b4) main_vded_pane_g

0x5b17,	// (0x00031ad7) main_vded_pane_t1

0x5b25,	// (0x00031ae5) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003b7bb) main_vded_pane_t

0x5b33,	// (0x00031af3) vded_slider_pane

0x5b3b,	// (0x00031afb) vded_video_pane

0xe97c,	// (0x0003a93c) vded_video_pane_g1

0x5b43,	// (0x00031b03) vded_video_pane_g2

0xe38d,	// (0x0003a34d) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003b7c0) vded_video_pane_g

0xe986,	// (0x0003a946) vded_slider_pane_g1

0xe0cb,	// (0x0003a08b) vded_slider_pane_g2

0xe98f,	// (0x0003a94f) vded_slider_pane_g3

0xe998,	// (0x0003a958) vded_slider_pane_g4

0xe9a1,	// (0x0003a961) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003b7c7) vded_slider_pane_g

0x55ba,	// (0x0003157a) mup3_rocker_pane_ParamLimits

0x55ba,	// (0x0003157a) mup3_rocker_pane

0x5b4c,	// (0x00031b0c) mup3_control_keys_pane_g1

0x5b54,	// (0x00031b14) mup3_control_keys_pane_g2

0x5b5c,	// (0x00031b1c) mup3_control_keys_pane_g3

0x5b64,	// (0x00031b24) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003b7d2) mup3_control_keys_pane_g

0x03ca,	// (0x0002c38a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x03ca,	// (0x0002c38a) popup_toolbar2_fixed_window_cp01

0x55ee,	// (0x000315ae) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55ee,	// (0x000315ae) popup_toolbar2_fixed_window_cp02

0xd2ec,	// (0x000392ac) popup_call2_audio_second_window_t4_ParamLimits

0xd2ec,	// (0x000392ac) popup_call2_audio_second_window_t4

0xd81a,	// (0x000397da) popup_call2_audio_first_window_t6_ParamLimits

0xd81a,	// (0x000397da) popup_call2_audio_first_window_t6

0xdab0,	// (0x00039a70) popup_call2_audio_out_window_t6_ParamLimits

0xdab0,	// (0x00039a70) popup_call2_audio_out_window_t6

0xb068,	// (0x00037028) main_vitu_pane

0x5b74,	// (0x00031b34) aid_size_cell_itu_ParamLimits

0x5b74,	// (0x00031b34) aid_size_cell_itu

0xc93a,	// (0x000388fa) bg_popup_window_pane_cp08_ParamLimits

0xc93a,	// (0x000388fa) bg_popup_window_pane_cp08

0x5b8a,	// (0x00031b4a) field_vitu_entry_pane_ParamLimits

0x5b8a,	// (0x00031b4a) field_vitu_entry_pane

0x5ba1,	// (0x00031b61) grid_vitu_function_pane_ParamLimits

0x5ba1,	// (0x00031b61) grid_vitu_function_pane

0x5bbc,	// (0x00031b7c) grid_vitu_itu_pane_ParamLimits

0x5bbc,	// (0x00031b7c) grid_vitu_itu_pane

0x5bda,	// (0x00031b9a) cell_vitu_itu_pane_ParamLimits

0x5bda,	// (0x00031b9a) cell_vitu_itu_pane

0x5bfc,	// (0x00031bbc) cell_vitu_function_pane_ParamLimits

0x5bfc,	// (0x00031bbc) cell_vitu_function_pane

0xc93a,	// (0x000388fa) bg_popup_sub_pane_cp08_ParamLimits

0xc93a,	// (0x000388fa) bg_popup_sub_pane_cp08

0x5c15,	// (0x00031bd5) field_vitu_entry_pane_t1_ParamLimits

0x5c15,	// (0x00031bd5) field_vitu_entry_pane_t1

0xe9c2,	// (0x0003a982) field_vitu_entry_pane_t2_ParamLimits

0xe9c2,	// (0x0003a982) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003b7e0) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003b7e0) field_vitu_entry_pane_t

0xe9df,	// (0x0003a99f) bg_button_pane_cp05_ParamLimits

0xe9df,	// (0x0003a99f) bg_button_pane_cp05

0x5c33,	// (0x00031bf3) cell_vitu_itu_pane_g1

0x5c4b,	// (0x00031c0b) cell_vitu_itu_pane_t1_ParamLimits

0x5c4b,	// (0x00031c0b) cell_vitu_itu_pane_t1

0x5c5d,	// (0x00031c1d) cell_vitu_itu_pane_t2_ParamLimits

0x5c5d,	// (0x00031c1d) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003b7e5) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003b7e5) cell_vitu_itu_pane_t

0xe9ed,	// (0x0003a9ad) bg_button_pane_cp07

0x5c92,	// (0x00031c52) cell_vitu_function_pane_g1

0xb599,	// (0x00037559) main_calc_pane_g1

0x022a,	// (0x0002c1ea) aid_visual_content_pane

0xb068,	// (0x00037028) main_vradio_pane

0x5c9b,	// (0x00031c5b) main_vradio_pane_g1_ParamLimits

0x5c9b,	// (0x00031c5b) main_vradio_pane_g1

0xe9f7,	// (0x0003a9b7) main_vradio_pane_g2_ParamLimits

0xe9f7,	// (0x0003a9b7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003b7ec) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003b7ec) main_vradio_pane_g

0x5cb4,	// (0x00031c74) main_vradio_pane_t1_ParamLimits

0x5cb4,	// (0x00031c74) main_vradio_pane_t1

0x5cc9,	// (0x00031c89) main_vradio_pane_t2_ParamLimits

0x5cc9,	// (0x00031c89) main_vradio_pane_t2

0xea04,	// (0x0003a9c4) main_vradio_pane_t3_ParamLimits

0xea04,	// (0x0003a9c4) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003b7f1) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003b7f1) main_vradio_pane_t

0x5cde,	// (0x00031c9e) vradio_rocker_control_pane_ParamLimits

0x5cde,	// (0x00031c9e) vradio_rocker_control_pane

0x5cf0,	// (0x00031cb0) vradio_station_info_pane_ParamLimits

0x5cf0,	// (0x00031cb0) vradio_station_info_pane

0xea18,	// (0x0003a9d8) vradio_frequency_info_pane_ParamLimits

0xea18,	// (0x0003a9d8) vradio_frequency_info_pane

0xe38d,	// (0x0003a34d) vradio_station_info_pane_g1

0xea27,	// (0x0003a9e7) vradio_station_info_pane_t1_ParamLimits

0xea27,	// (0x0003a9e7) vradio_station_info_pane_t1

0xea49,	// (0x0003aa09) vradio_station_info_pane_t2_ParamLimits

0xea49,	// (0x0003aa09) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003b7f8) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003b7f8) vradio_station_info_pane_t

0xea5b,	// (0x0003aa1b) vradio_tuning_pane

0xea63,	// (0x0003aa23) vradio_rocker_control_pane_g1

0xea6b,	// (0x0003aa2b) vradio_rocker_control_pane_g2

0xea73,	// (0x0003aa33) vradio_rocker_control_pane_g3

0xea7b,	// (0x0003aa3b) vradio_rocker_control_pane_g4

0xea83,	// (0x0003aa43) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003b7fd) vradio_rocker_control_pane_g

0x5d02,	// (0x00031cc2) vradio_frequency_info_pane_g1

0xea8b,	// (0x0003aa4b) vradio_frequency_info_pane_t1_ParamLimits

0xea8b,	// (0x0003aa4b) vradio_frequency_info_pane_t1

0x5d0c,	// (0x00031ccc) vradio_tuning_pane_g1

0x5d17,	// (0x00031cd7) vradio_tuning_pane_t1

0xb018,	// (0x00036fd8) area_side_right_pane_ParamLimits

0xb018,	// (0x00036fd8) area_side_right_pane

0xdf2b,	// (0x00039eeb) status_small_pane_g1

0xdf33,	// (0x00039ef3) status_small_pane_g2

0xdf3c,	// (0x00039efc) status_small_pane_g3

0xdf45,	// (0x00039f05) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003b5b8) status_small_pane_g

0xdf4e,	// (0x00039f0e) status_small_pane_t1

0xb068,	// (0x00037028) main_video3_pane

0xea9f,	// (0x0003aa5f) cams_zoom_vslider_pane

0xeaa7,	// (0x0003aa67) image3_wide_pane_ParamLimits

0xeaa7,	// (0x0003aa67) image3_wide_pane

0xeac1,	// (0x0003aa81) image3_wide_small_pane

0xeacd,	// (0x0003aa8d) main_video3_pane_g1_ParamLimits

0xeacd,	// (0x0003aa8d) main_video3_pane_g1

0xeae9,	// (0x0003aaa9) main_video3_pane_g2_ParamLimits

0xeae9,	// (0x0003aaa9) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003b808) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003b808) main_video3_pane_g

0xeb05,	// (0x0003aac5) main_video3_pane_t1_ParamLimits

0xeb05,	// (0x0003aac5) main_video3_pane_t1

0xeb30,	// (0x0003aaf0) main_video3_pane_t2_ParamLimits

0xeb30,	// (0x0003aaf0) main_video3_pane_t2

0xeb5b,	// (0x0003ab1b) main_video3_pane_t3_ParamLimits

0xeb5b,	// (0x0003ab1b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003b80d) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003b80d) main_video3_pane_t

0xeb88,	// (0x0003ab48) cams_zoom_vslider_pane_g1

0xeb91,	// (0x0003ab51) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003b814) cams_zoom_vslider_pane_g

0xeb99,	// (0x0003ab59) small_slider_vertical_pane

0xe38d,	// (0x0003a34d) small_slider_vertical_pane_g1

0xe38d,	// (0x0003a34d) small_slider_vertical_pane_g2

0xeba1,	// (0x0003ab61) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003b819) small_slider_vertical_pane_g

0xb068,	// (0x00037028) main_hwr_training_pane

0xebaa,	// (0x0003ab6a) hwr_training_instruct_pane_ParamLimits

0xebaa,	// (0x0003ab6a) hwr_training_instruct_pane

0x5d26,	// (0x00031ce6) hwr_training_navi_pane_ParamLimits

0x5d26,	// (0x00031ce6) hwr_training_navi_pane

0x5d45,	// (0x00031d05) hwr_training_write_pane_ParamLimits

0x5d45,	// (0x00031d05) hwr_training_write_pane

0xafea,	// (0x00036faa) bg_frame_shadow_pane

0xebe1,	// (0x0003aba1) hwr_training_write_pane_g1

0xebe9,	// (0x0003aba9) hwr_training_write_pane_g2

0xebf1,	// (0x0003abb1) hwr_training_write_pane_g3

0xebf9,	// (0x0003abb9) hwr_training_write_pane_g4

0xec01,	// (0x0003abc1) hwr_training_write_pane_g5

0xec09,	// (0x0003abc9) hwr_training_write_pane_g6

0xec11,	// (0x0003abd1) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003b820) hwr_training_write_pane_g

0xb825,	// (0x000377e5) hwr_training_navi_pane_g1_ParamLimits

0xb825,	// (0x000377e5) hwr_training_navi_pane_g1

0xb837,	// (0x000377f7) hwr_training_navi_pane_g2_ParamLimits

0xb837,	// (0x000377f7) hwr_training_navi_pane_g2

0xb849,	// (0x00037809) hwr_training_navi_pane_g3_ParamLimits

0xb849,	// (0x00037809) hwr_training_navi_pane_g3

0xb859,	// (0x00037819) hwr_training_navi_pane_g4_ParamLimits

0xb859,	// (0x00037819) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003b82f) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003b82f) hwr_training_navi_pane_g

0xb866,	// (0x00037826) hwr_training_navi_pane_t1

0x5d80,	// (0x00031d40) list_single_hwr_training_instruct_pane_ParamLimits

0x5d80,	// (0x00031d40) list_single_hwr_training_instruct_pane

0xec19,	// (0x0003abd9) list_single_hwr_training_instruct_pane_t1

0xe2cd,	// (0x0003a28d) bg_frame_shadow_pane_g1

0xec28,	// (0x0003abe8) bg_frame_shadow_pane_g2

0xec30,	// (0x0003abf0) bg_frame_shadow_pane_g3

0xec38,	// (0x0003abf8) bg_frame_shadow_pane_g4

0xec40,	// (0x0003ac00) bg_frame_shadow_pane_g5

0xec48,	// (0x0003ac08) bg_frame_shadow_pane_g6

0xec50,	// (0x0003ac10) bg_frame_shadow_pane_g7

0xbf71,	// (0x00037f31) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003b83a) bg_frame_shadow_pane_g

0xb068,	// (0x00037028) main_video_tele_dialer_pane

0x0eeb,	// (0x0002ceab) aid_size_cell_video_keypad_ParamLimits

0x0eeb,	// (0x0002ceab) aid_size_cell_video_keypad

0x0f05,	// (0x0002cec5) grid_video_dialer_keypad_pane_ParamLimits

0x0f05,	// (0x0002cec5) grid_video_dialer_keypad_pane

0x0f51,	// (0x0002cf11) video_down_pane_cp_ParamLimits

0x0f51,	// (0x0002cf11) video_down_pane_cp

0x0f67,	// (0x0002cf27) cell_video_dialer_keypad_pane_ParamLimits

0x0f67,	// (0x0002cf27) cell_video_dialer_keypad_pane

0xec58,	// (0x0003ac18) bg_button_pane_cp08_ParamLimits

0xec58,	// (0x0003ac18) bg_button_pane_cp08

0x5db1,	// (0x00031d71) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5db1,	// (0x00031d71) cell_video_dialer_keypad_pane_g1

0x55a4,	// (0x00031564) mup3_rocker2_pane_ParamLimits

0x55a4,	// (0x00031564) mup3_rocker2_pane

0xe38d,	// (0x0003a34d) mup3_rocker2_pane_g1

0x06e4,	// (0x0002c6a4) main_dialer2_pane

0xb068,	// (0x00037028) main_mp4_pane

0xb87c,	// (0x0003783c) main_mp4_pane_g1_ParamLimits

0xb87c,	// (0x0003783c) main_mp4_pane_g1

0xb87c,	// (0x0003783c) main_mp4_pane_g2_ParamLimits

0xb87c,	// (0x0003783c) main_mp4_pane_g2

0x0f89,	// (0x0002cf49) main_mp4_pane_g3_ParamLimits

0x0f89,	// (0x0002cf49) main_mp4_pane_g3

0xb88a,	// (0x0003784a) main_mp4_pane_g4_ParamLimits

0xb88a,	// (0x0003784a) main_mp4_pane_g4

0xb8b2,	// (0x00037872) main_mp4_pane_g5_ParamLimits

0xb8b2,	// (0x00037872) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003b85a) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003b85a) main_mp4_pane_g

0xb902,	// (0x000378c2) main_mp4_pane_t1_ParamLimits

0xb902,	// (0x000378c2) main_mp4_pane_t1

0xb95e,	// (0x0003791e) main_mp4_pane_t2_ParamLimits

0xb95e,	// (0x0003791e) main_mp4_pane_t2

0xec64,	// (0x0003ac24) main_mp4_pane_t3_ParamLimits

0xec64,	// (0x0003ac24) main_mp4_pane_t3

0xb9b0,	// (0x00037970) main_mp4_pane_t4_ParamLimits

0xb9b0,	// (0x00037970) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003b867) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003b867) main_mp4_pane_t

0xb9f4,	// (0x000379b4) mp4_progress_pane_ParamLimits

0xb9f4,	// (0x000379b4) mp4_progress_pane

0xba3e,	// (0x000379fe) mp4_rocker_pane_ParamLimits

0xba3e,	// (0x000379fe) mp4_rocker_pane

0xec8c,	// (0x0003ac4c) mp4_progress_pane_t1

0xeca5,	// (0x0003ac65) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003b870) mp4_progress_pane_t

0xecbe,	// (0x0003ac7e) mup_progress_pane_cp04

0x5de8,	// (0x00031da8) mp4_rocker_pane_g1

0x0fc5,	// (0x0002cf85) aid_cell_size_keypad2_ParamLimits

0x0fc5,	// (0x0002cf85) aid_cell_size_keypad2

0x0fdb,	// (0x0002cf9b) dialer2_ne_pane_ParamLimits

0x0fdb,	// (0x0002cf9b) dialer2_ne_pane

0x0ff5,	// (0x0002cfb5) grid_dialer2_keypad_pane_ParamLimits

0x0ff5,	// (0x0002cfb5) grid_dialer2_keypad_pane

0xe15d,	// (0x0003a11d) bg_popup_call_pane_cp07_ParamLimits

0xe15d,	// (0x0003a11d) bg_popup_call_pane_cp07

0x5df2,	// (0x00031db2) dialer2_ne_pane_t1_ParamLimits

0x5df2,	// (0x00031db2) dialer2_ne_pane_t1

0x1011,	// (0x0002cfd1) cell_dialer2_keypad_pane_ParamLimits

0x1011,	// (0x0002cfd1) cell_dialer2_keypad_pane

0xecdc,	// (0x0003ac9c) bg_button_pane_pane_cp04_ParamLimits

0xecdc,	// (0x0003ac9c) bg_button_pane_pane_cp04

0x5e2d,	// (0x00031ded) cell_dialer2_keypad_pane_g1_ParamLimits

0x5e2d,	// (0x00031ded) cell_dialer2_keypad_pane_g1

0x2667,	// (0x0002e627) aid_placing_vt_set_content_ParamLimits

0x2667,	// (0x0002e627) aid_placing_vt_set_content

0x268f,	// (0x0002e64f) aid_placing_vt_set_title_ParamLimits

0x268f,	// (0x0002e64f) aid_placing_vt_set_title

0xb068,	// (0x00037028) main_image3_pane

0x1091,	// (0x0002d051) area_side_right_pane_cp01_ParamLimits

0x1091,	// (0x0002d051) area_side_right_pane_cp01

0xb87c,	// (0x0003783c) main_image3_pane_g1_ParamLimits

0xb87c,	// (0x0003783c) main_image3_pane_g1

0x10a8,	// (0x0002d068) main_image3_pane_g2_ParamLimits

0x10a8,	// (0x0002d068) main_image3_pane_g2

0x10d0,	// (0x0002d090) main_image3_pane_g3_ParamLimits

0x10d0,	// (0x0002d090) main_image3_pane_g3

0x10fa,	// (0x0002d0ba) main_image3_pane_g4_ParamLimits

0x10fa,	// (0x0002d0ba) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003b87f) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003b87f) main_image3_pane_g

0x1124,	// (0x0002d0e4) main_image3_pane_t1_ParamLimits

0x1124,	// (0x0002d0e4) main_image3_pane_t1

0x117c,	// (0x0002d13c) main_image3_pane_t2_ParamLimits

0x117c,	// (0x0002d13c) main_image3_pane_t2

0x11ce,	// (0x0002d18e) main_image3_pane_t3_ParamLimits

0x11ce,	// (0x0002d18e) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003b888) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003b888) main_image3_pane_t

0xc93a,	// (0x000388fa) grid_sctrl_middle_pane_cp01_ParamLimits

0xc93a,	// (0x000388fa) grid_sctrl_middle_pane_cp01

0x5e95,	// (0x00031e55) cell_sctrl_middle_pane_cp01_ParamLimits

0x5e95,	// (0x00031e55) cell_sctrl_middle_pane_cp01

0x5eb2,	// (0x00031e72) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5eb2,	// (0x00031e72) cell_sctrl_middle_pane_cp01_g1

0xb068,	// (0x00037028) main_call4_pane

0x5ec8,	// (0x00031e88) aid_size_button_call4_ParamLimits

0x5ec8,	// (0x00031e88) aid_size_button_call4

0x5ef9,	// (0x00031eb9) call4_windows_pane_ParamLimits

0x5ef9,	// (0x00031eb9) call4_windows_pane

0x5f19,	// (0x00031ed9) grid_call4_button_pane_ParamLimits

0x5f19,	// (0x00031ed9) grid_call4_button_pane

0xece8,	// (0x0003aca8) call4_windows_conf_pane

0xecff,	// (0x0003acbf) popup_call4_audio_first_window_ParamLimits

0xecff,	// (0x0003acbf) popup_call4_audio_first_window

0xed4b,	// (0x0003ad0b) popup_call4_audio_second_window_ParamLimits

0xed4b,	// (0x0003ad0b) popup_call4_audio_second_window

0xed5f,	// (0x0003ad1f) popup_call4_audio_wait_window_ParamLimits

0xed5f,	// (0x0003ad1f) popup_call4_audio_wait_window

0x5f46,	// (0x00031f06) cell_call4_button_pane_ParamLimits

0x5f46,	// (0x00031f06) cell_call4_button_pane

0x5f6f,	// (0x00031f2f) bg_button_pane_cp09_ParamLimits

0x5f6f,	// (0x00031f2f) bg_button_pane_cp09

0x5f7b,	// (0x00031f3b) cell_call4_button_pane_g1_ParamLimits

0x5f7b,	// (0x00031f3b) cell_call4_button_pane_g1

0x5fa1,	// (0x00031f61) cell_call4_button_pane_t1_ParamLimits

0x5fa1,	// (0x00031f61) cell_call4_button_pane_t1

0xeda7,	// (0x0003ad67) popup_call4_audio_conf_window_ParamLimits

0xeda7,	// (0x0003ad67) popup_call4_audio_conf_window

0x5604,	// (0x000315c4) mup3_progress_pane_t1_ParamLimits

0x5623,	// (0x000315e3) mup3_progress_pane_t2_ParamLimits

0xe697,	// (0x0003a657) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003b75c) mup3_progress_pane_t_ParamLimits

0xe6b4,	// (0x0003a674) mup_progress_pane_cp03_ParamLimits

0x5b6c,	// (0x00031b2c) mup3_control_keys_pane_g4_copy1

0xba22,	// (0x000379e2) mp4_rocker2_pane_ParamLimits

0xba22,	// (0x000379e2) mp4_rocker2_pane

0xedbb,	// (0x0003ad7b) mp4_rocker2_pane_g1

0xedc3,	// (0x0003ad83) mp4_rocker2_pane_g2

0xba90,	// (0x00037a50) mp4_rocker2_pane_g3

0xba98,	// (0x00037a58) mp4_rocker2_pane_g4

0xbaa0,	// (0x00037a60) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003b891) mp4_rocker2_pane_g

0xb068,	// (0x00037028) main_camera4_pane

0xb068,	// (0x00037028) main_video4_pane

0x0f1f,	// (0x0002cedf) main_video_tele_dialer_pane_t1_ParamLimits

0x0f1f,	// (0x0002cedf) main_video_tele_dialer_pane_t1

0x0f38,	// (0x0002cef8) main_video_tele_dialer_pane_t2_ParamLimits

0x0f38,	// (0x0002cef8) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003b84b) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003b84b) main_video_tele_dialer_pane_t

0x126e,	// (0x0002d22e) cam4_autofocus_pane_ParamLimits

0x126e,	// (0x0002d22e) cam4_autofocus_pane

0x1284,	// (0x0002d244) cam4_image_uncrop_pane_ParamLimits

0x1284,	// (0x0002d244) cam4_image_uncrop_pane

0x129e,	// (0x0002d25e) cam4_indicators_pane_ParamLimits

0x129e,	// (0x0002d25e) cam4_indicators_pane

0x12c9,	// (0x0002d289) main_camera4_pane_g1_ParamLimits

0x12c9,	// (0x0002d289) main_camera4_pane_g1

0x12db,	// (0x0002d29b) main_camera4_pane_g2_ParamLimits

0x12db,	// (0x0002d29b) main_camera4_pane_g2

0x12ee,	// (0x0002d2ae) main_camera4_pane_g3_ParamLimits

0x12ee,	// (0x0002d2ae) main_camera4_pane_g3

0x1301,	// (0x0002d2c1) main_camera4_pane_g4_ParamLimits

0x1301,	// (0x0002d2c1) main_camera4_pane_g4

0x1314,	// (0x0002d2d4) main_camera4_pane_g5_ParamLimits

0x1314,	// (0x0002d2d4) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003b89c) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003b89c) main_camera4_pane_g

0x1338,	// (0x0002d2f8) main_camera4_pane_t1_ParamLimits

0x1338,	// (0x0002d2f8) main_camera4_pane_t1

0xbac4,	// (0x00037a84) bg_tb_trans_pane_cp06

0xbada,	// (0x00037a9a) cam4_indicators_pane_g1

0xbaeb,	// (0x00037aab) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003b8b7) cam4_indicators_pane_g

0xbb09,	// (0x00037ac9) cam4_indicators_pane_t1

0x1388,	// (0x0002d348) main_video4_pane_g1_ParamLimits

0x1388,	// (0x0002d348) main_video4_pane_g1

0x1397,	// (0x0002d357) main_video4_pane_g2_ParamLimits

0x1397,	// (0x0002d357) main_video4_pane_g2

0x13a6,	// (0x0002d366) main_video4_pane_g3_ParamLimits

0x13a6,	// (0x0002d366) main_video4_pane_g3

0x13b5,	// (0x0002d375) main_video4_pane_g4_ParamLimits

0x13b5,	// (0x0002d375) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003b8be) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003b8be) main_video4_pane_g

0x13d3,	// (0x0002d393) vid4_indicators_pane_ParamLimits

0x13d3,	// (0x0002d393) vid4_indicators_pane

0x1401,	// (0x0002d3c1) video4_image_uncrop_cif_pane_ParamLimits

0x1401,	// (0x0002d3c1) video4_image_uncrop_cif_pane

0x141b,	// (0x0002d3db) video4_image_uncrop_nhd_pane_ParamLimits

0x141b,	// (0x0002d3db) video4_image_uncrop_nhd_pane

0x1284,	// (0x0002d244) video4_image_uncrop_vga_pane_ParamLimits

0x1284,	// (0x0002d244) video4_image_uncrop_vga_pane

0xb05a,	// (0x0003701a) bg_tb_trans_pane_cp07

0xbb35,	// (0x00037af5) vid4_indicators_pane_g1

0xbb49,	// (0x00037b09) vid4_indicators_pane_g2

0xbb5d,	// (0x00037b1d) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003b8c9) vid4_indicators_pane_g

0xbb8c,	// (0x00037b4c) vid4_indicators_pane_t1

0x5fed,	// (0x00031fad) cam4_autofocus_pane_g1

0x5ff5,	// (0x00031fb5) cam4_autofocus_pane_g2

0x5ffd,	// (0x00031fbd) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003b8d4) cam4_autofocus_pane_g

0x6005,	// (0x00031fc5) cam4_autofocus_pane_g3_copy1

0x5d95,	// (0x00031d55) video_down_pane_cp_t1

0x5da3,	// (0x00031d63) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003b850) video_down_pane_cp_t

0xb05a,	// (0x0003701a) popup_vitu2_window_ParamLimits

0xb05a,	// (0x0003701a) popup_vitu2_window

0x142f,	// (0x0002d3ef) aid_size_cell2_itu2_ParamLimits

0x142f,	// (0x0002d3ef) aid_size_cell2_itu2

0x1455,	// (0x0002d415) aid_size_cell_itu2_ParamLimits

0x1455,	// (0x0002d415) aid_size_cell_itu2

0x14b1,	// (0x0002d471) bg_popup_window_pane_cp09_ParamLimits

0x14b1,	// (0x0002d471) bg_popup_window_pane_cp09

0x14bf,	// (0x0002d47f) field_vitu2_entry_pane_ParamLimits

0x14bf,	// (0x0002d47f) field_vitu2_entry_pane

0x14e5,	// (0x0002d4a5) grid_vitu2_function_pane_ParamLimits

0x14e5,	// (0x0002d4a5) grid_vitu2_function_pane

0x1536,	// (0x0002d4f6) grid_vitu2_itu_pane_ParamLimits

0x1536,	// (0x0002d4f6) grid_vitu2_itu_pane

0x15ce,	// (0x0002d58e) cell_vitu2_itu_pane_ParamLimits

0x15ce,	// (0x0002d58e) cell_vitu2_itu_pane

0x15fa,	// (0x0002d5ba) cell_vitu2_function_pane_ParamLimits

0x15fa,	// (0x0002d5ba) cell_vitu2_function_pane

0xedcb,	// (0x0003ad8b) bg_popup_call_pane_cp08_ParamLimits

0xedcb,	// (0x0003ad8b) bg_popup_call_pane_cp08

0xede2,	// (0x0003ada2) field_vitu2_entry_pane_g1

0xedee,	// (0x0003adae) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003b8db) field_vitu2_entry_pane_g

0x600d,	// (0x00031fcd) field_vitu2_entry_pane_t1_ParamLimits

0x600d,	// (0x00031fcd) field_vitu2_entry_pane_t1

0xee08,	// (0x0003adc8) field_vitu2_entry_pane_t2_ParamLimits

0xee08,	// (0x0003adc8) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003b8e2) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003b8e2) field_vitu2_entry_pane_t

0x1639,	// (0x0002d5f9) bg_button_pane_cp010_ParamLimits

0x1639,	// (0x0002d5f9) bg_button_pane_cp010

0xbba3,	// (0x00037b63) cell_vitu2_itu_pane_g1

0x1655,	// (0x0002d615) cell_vitu2_itu_pane_t1_ParamLimits

0x1655,	// (0x0002d615) cell_vitu2_itu_pane_t1

0x16b3,	// (0x0002d673) cell_vitu2_itu_pane_t2_ParamLimits

0x16b3,	// (0x0002d673) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003b8ec) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003b8ec) cell_vitu2_itu_pane_t

0xb05a,	// (0x0003701a) bg_button_pane_cp011

0x179f,	// (0x0002d75f) cell_vitu2_function_pane_g1

0xb068,	// (0x00037028) main_myfav_hc_pane

0x121e,	// (0x0002d1de) popup_image3_note_pane_ParamLimits

0x121e,	// (0x0002d1de) popup_image3_note_pane

0x123a,	// (0x0002d1fa) popup_image3_tool_bar_pane_ParamLimits

0x123a,	// (0x0002d1fa) popup_image3_tool_bar_pane

0x1741,	// (0x0002d701) cell_vitu2_itu_pane_t3_ParamLimits

0x1741,	// (0x0002d701) cell_vitu2_itu_pane_t3

0xafea,	// (0x00036faa) bg_popup_trans_pane

0xee2d,	// (0x0003aded) grid_image3_tool_bar_pane

0xee37,	// (0x0003adf7) bg_popup_trans_pane_g1

0xc2d6,	// (0x00038296) bg_popup_trans_pane_g2

0xee3f,	// (0x0003adff) bg_popup_trans_pane_g3

0xee47,	// (0x0003ae07) bg_popup_trans_pane_g4

0xee4f,	// (0x0003ae0f) bg_popup_trans_pane_g5

0xee57,	// (0x0003ae17) bg_popup_trans_pane_g6

0xee5f,	// (0x0003ae1f) bg_popup_trans_pane_g7

0xee67,	// (0x0003ae27) bg_popup_trans_pane_g8

0xc2b6,	// (0x00038276) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003b8f3) bg_popup_trans_pane_g

0xee6f,	// (0x0003ae2f) cell_image3_tool_bar_pane_ParamLimits

0xee6f,	// (0x0003ae2f) cell_image3_tool_bar_pane

0xe38d,	// (0x0003a34d) cell_image3_tool_bar_pane_g1

0xafea,	// (0x00036faa) bg_popup_trans_pane_cp1

0xee83,	// (0x0003ae43) popup_image3_note_pane_t1

0xee91,	// (0x0003ae51) popup_image3_note_pane_t2

0xee9f,	// (0x0003ae5f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003b906) popup_image3_note_pane_t

0xeead,	// (0x0003ae6d) popup_image3_note_pane_t3_copy1

0x603c,	// (0x00031ffc) bg_myfav_hc_instruction_pane_ParamLimits

0x603c,	// (0x00031ffc) bg_myfav_hc_instruction_pane

0x6050,	// (0x00032010) cell_myfav_contact_pane_ParamLimits

0x6050,	// (0x00032010) cell_myfav_contact_pane

0x606e,	// (0x0003202e) cell_myfav_contact_pane_cp1_ParamLimits

0x606e,	// (0x0003202e) cell_myfav_contact_pane_cp1

0x6086,	// (0x00032046) cell_myfav_contact_pane_cp2_ParamLimits

0x6086,	// (0x00032046) cell_myfav_contact_pane_cp2

0x609e,	// (0x0003205e) cell_myfav_contact_pane_cp3_ParamLimits

0x609e,	// (0x0003205e) cell_myfav_contact_pane_cp3

0x60b5,	// (0x00032075) cell_myfav_contact_pane_cp4_ParamLimits

0x60b5,	// (0x00032075) cell_myfav_contact_pane_cp4

0x60cd,	// (0x0003208d) cell_myfav_contact_pane_cp5_ParamLimits

0x60cd,	// (0x0003208d) cell_myfav_contact_pane_cp5

0x60e1,	// (0x000320a1) cell_myfav_contact_pane_cp6_ParamLimits

0x60e1,	// (0x000320a1) cell_myfav_contact_pane_cp6

0x60f7,	// (0x000320b7) cell_myfav_contact_pane_cp7_ParamLimits

0x60f7,	// (0x000320b7) cell_myfav_contact_pane_cp7

0xeebb,	// (0x0003ae7b) listscroll_gen_pane_cp05

0x6111,	// (0x000320d1) main_myfav_hc_pane_g1_ParamLimits

0x6111,	// (0x000320d1) main_myfav_hc_pane_g1

0x612b,	// (0x000320eb) main_myfav_hc_pane_g2_ParamLimits

0x612b,	// (0x000320eb) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003b90d) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003b90d) main_myfav_hc_pane_g

0x615d,	// (0x0003211d) main_myfav_hc_pane_t1_ParamLimits

0x615d,	// (0x0003211d) main_myfav_hc_pane_t1

0xeec4,	// (0x0003ae84) main_myfav_hc_pane_t2_ParamLimits

0xeec4,	// (0x0003ae84) main_myfav_hc_pane_t2

0xeed6,	// (0x0003ae96) main_myfav_hc_pane_t3_ParamLimits

0xeed6,	// (0x0003ae96) main_myfav_hc_pane_t3

0x6174,	// (0x00032134) main_myfav_hc_pane_t4_ParamLimits

0x6174,	// (0x00032134) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003b914) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003b914) main_myfav_hc_pane_t

0xe38d,	// (0x0003a34d) bg_myfav_hc_instruction_pane_g1

0xeee8,	// (0x0003aea8) cell_myfav_contact_pane_g1_ParamLimits

0xeee8,	// (0x0003aea8) cell_myfav_contact_pane_g1

0xeee8,	// (0x0003aea8) cell_myfav_contact_pane_g2_ParamLimits

0xeee8,	// (0x0003aea8) cell_myfav_contact_pane_g2

0xeef4,	// (0x0003aeb4) cell_myfav_contact_pane_g3_ParamLimits

0xeef4,	// (0x0003aeb4) cell_myfav_contact_pane_g3

0xe681,	// (0x0003a641) cell_myfav_contact_pane_g4_ParamLimits

0xe681,	// (0x0003a641) cell_myfav_contact_pane_g4

0xef01,	// (0x0003aec1) cell_myfav_contact_pane_g5_ParamLimits

0xef01,	// (0x0003aec1) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003b91f) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003b91f) cell_myfav_contact_pane_g

0x6145,	// (0x00032105) main_myfav_hc_pane_g3_ParamLimits

0x6145,	// (0x00032105) main_myfav_hc_pane_g3

0x032c,	// (0x0002c2ec) popup_adpt_find_window

0x619c,	// (0x0003215c) afind_page_pane_ParamLimits

0x619c,	// (0x0003215c) afind_page_pane

0x61b1,	// (0x00032171) aid_size_cell_afind_ParamLimits

0x61b1,	// (0x00032171) aid_size_cell_afind

0x61cf,	// (0x0003218f) bg_popup_sub_pane_cp09_ParamLimits

0x61cf,	// (0x0003218f) bg_popup_sub_pane_cp09

0x61dc,	// (0x0003219c) find_pane_cp01_ParamLimits

0x61dc,	// (0x0003219c) find_pane_cp01

0xef29,	// (0x0003aee9) grid_afind_control_pane_ParamLimits

0xef29,	// (0x0003aee9) grid_afind_control_pane

0x61e9,	// (0x000321a9) grid_afind_pane_ParamLimits

0x61e9,	// (0x000321a9) grid_afind_pane

0x620b,	// (0x000321cb) cell_afind_pane_ParamLimits

0x620b,	// (0x000321cb) cell_afind_pane

0xe38d,	// (0x0003a34d) afind_page_pane_g1

0x6272,	// (0x00032232) afind_page_pane_g2

0x627b,	// (0x0003223b) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003b92a) afind_page_pane_g

0x6284,	// (0x00032244) afind_page_pane_t1

0xef3d,	// (0x0003aefd) cell_afind_grid_control_pane_ParamLimits

0xef3d,	// (0x0003aefd) cell_afind_grid_control_pane

0xecdc,	// (0x0003ac9c) bg_button_pane_cp69_ParamLimits

0xecdc,	// (0x0003ac9c) bg_button_pane_cp69

0x62a4,	// (0x00032264) cell_afind_pane_g1_ParamLimits

0x62a4,	// (0x00032264) cell_afind_pane_g1

0x62b1,	// (0x00032271) cell_afind_pane_t1_ParamLimits

0x62b1,	// (0x00032271) cell_afind_pane_t1

0xc0cf,	// (0x0003808f) bg_button_pane_cp72

0xef4c,	// (0x0003af0c) cell_afind_grid_control_pane_g1

0x42de,	// (0x0003029e) aid_image_placing_area_ParamLimits

0x42de,	// (0x0003029e) aid_image_placing_area

0xe9aa,	// (0x0003a96a) field_vitu_entry_pane_g1_ParamLimits

0xe9aa,	// (0x0003a96a) field_vitu_entry_pane_g1

0xe9b6,	// (0x0003a976) field_vitu_entry_pane_g2_ParamLimits

0xe9b6,	// (0x0003a976) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003b7db) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003b7db) field_vitu_entry_pane_g

0x5c33,	// (0x00031bf3) cell_vitu_itu_pane_g1_ParamLimits

0x5c75,	// (0x00031c35) cell_vitu_itu_pane_t3_ParamLimits

0x5c75,	// (0x00031c35) cell_vitu_itu_pane_t3

0xec8c,	// (0x0003ac4c) mp4_progress_pane_t1_ParamLimits

0xeca5,	// (0x0003ac65) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003b870) mp4_progress_pane_t_ParamLimits

0xecbe,	// (0x0003ac7e) mup_progress_pane_cp04_ParamLimits

0x6188,	// (0x00032148) main_myfav_hc_pane_t5_ParamLimits

0x6188,	// (0x00032148) main_myfav_hc_pane_t5

0xb010,	// (0x00036fd0) aid_zoom_text_primary

0x032c,	// (0x0002c2ec) popup_adpt_find_window_ParamLimits

0xb05a,	// (0x0003701a) main_cam_set_pane

0x12b5,	// (0x0002d275) cam4_zoom_pane_ParamLimits

0x12b5,	// (0x0002d275) cam4_zoom_pane

0x62c3,	// (0x00032283) main_cam_set_pane_g1_ParamLimits

0x62c3,	// (0x00032283) main_cam_set_pane_g1

0x62d1,	// (0x00032291) main_cam_set_pane_g2_ParamLimits

0x62d1,	// (0x00032291) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003b931) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003b931) main_cam_set_pane_g

0x62f2,	// (0x000322b2) main_cam_set_pane_t1_ParamLimits

0x62f2,	// (0x000322b2) main_cam_set_pane_t1

0x630d,	// (0x000322cd) main_cset_listscroll_pane_ParamLimits

0x630d,	// (0x000322cd) main_cset_listscroll_pane

0x632d,	// (0x000322ed) main_cset_slider_pane_ParamLimits

0x632d,	// (0x000322ed) main_cset_slider_pane

0xef5d,	// (0x0003af1d) main_cset_list_pane_ParamLimits

0xef5d,	// (0x0003af1d) main_cset_list_pane

0xef6d,	// (0x0003af2d) scroll_pane_cp028

0x6353,	// (0x00032313) aid_area_touch_slider

0x636f,	// (0x0003232f) cset_slider_pane

0x6399,	// (0x00032359) main_cset_slider_pane_g1

0x63ae,	// (0x0003236e) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003b936) main_cset_slider_pane_g

0xefa6,	// (0x0003af66) main_cset_slider_pane_t1

0x646a,	// (0x0003242a) main_cset_slider_pane_t2

0x6484,	// (0x00032444) main_cset_slider_pane_t3

0x649e,	// (0x0003245e) main_cset_slider_pane_t4

0x64b8,	// (0x00032478) main_cset_slider_pane_t5

0x64d2,	// (0x00032492) main_cset_slider_pane_t6

0x64e7,	// (0x000324a7) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003b95b) main_cset_slider_pane_t

0x65eb,	// (0x000325ab) cset_list_set_pane_ParamLimits

0x65eb,	// (0x000325ab) cset_list_set_pane

0x65fd,	// (0x000325bd) aid_position_infowindow_above

0x6605,	// (0x000325c5) aid_position_infowindow_below

0xf046,	// (0x0003b006) cset_list_set_pane_g1_ParamLimits

0xf046,	// (0x0003b006) cset_list_set_pane_g1

0xf052,	// (0x0003b012) cset_list_set_pane_g3_ParamLimits

0xf052,	// (0x0003b012) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003b97a) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003b97a) cset_list_set_pane_g

0xf061,	// (0x0003b021) cset_list_set_pane_t1_ParamLimits

0xf061,	// (0x0003b021) cset_list_set_pane_t1

0xc93a,	// (0x000388fa) list_highlight_pane_cp021_ParamLimits

0xc93a,	// (0x000388fa) list_highlight_pane_cp021

0xcc2d,	// (0x00038bed) cset_slider_pane_g1

0xcc3f,	// (0x00038bff) cset_slider_pane_g2

0xcc36,	// (0x00038bf6) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003b97f) cset_slider_pane_g

0xbbb5,	// (0x00037b75) aid_area_touch_cam4_zoom

0xbbbd,	// (0x00037b7d) cam4_zoom_cont_pane

0xbbc5,	// (0x00037b85) cam4_zoom_pane_g1

0xbbcd,	// (0x00037b8d) cam4_zoom_pane_g2

0x17b3,	// (0x0002d773) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003b986) cam4_zoom_pane_g

0xbbd5,	// (0x00037b95) cam4_zoom_cont_pane_g1

0xbbde,	// (0x00037b9e) cam4_zoom_cont_pane_g2

0xbbe7,	// (0x00037ba7) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003b98d) cam4_zoom_cont_pane_g

0x5ee6,	// (0x00031ea6) call4_image_pane_ParamLimits

0x5ee6,	// (0x00031ea6) call4_image_pane

0xece8,	// (0x0003aca8) call4_windows_conf_pane_ParamLimits

0xed29,	// (0x0003ace9) popup_call4_audio_in_window_ParamLimits

0xed29,	// (0x0003ace9) popup_call4_audio_in_window

0xafea,	// (0x00036faa) bg_popup_call2_act_pane_cp02

0xed9f,	// (0x0003ad5f) call4_list_conf_pane

0xe38d,	// (0x0003a34d) call4_image_pane_g1

0xe38d,	// (0x0003a34d) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003b69c) call4_image_pane_g

0xf076,	// (0x0003b036) list_single_graphic_popup_conf4_pane_ParamLimits

0xf076,	// (0x0003b036) list_single_graphic_popup_conf4_pane

0xafea,	// (0x00036faa) list_highlight_pane_cp022

0xf089,	// (0x0003b049) list_single_graphic_popup_conf4_pane_g1

0xc7f0,	// (0x000387b0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003b994) list_single_graphic_popup_conf4_pane_g

0xf091,	// (0x0003b051) list_single_graphic_popup_conf4_pane_t1

0x27b3,	// (0x0002e773) popup_vtel_slider_window_ParamLimits

0x27b3,	// (0x0002e773) popup_vtel_slider_window

0xecca,	// (0x0003ac8a) dialer2_ne_pane_t2_ParamLimits

0xecca,	// (0x0003ac8a) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003b875) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003b875) dialer2_ne_pane_t

0xe15d,	// (0x0003a11d) bg_popup_sub_pane_cp010_ParamLimits

0xe15d,	// (0x0003a11d) bg_popup_sub_pane_cp010

0x660d,	// (0x000325cd) popup_vtel_slider_window_g1_ParamLimits

0x660d,	// (0x000325cd) popup_vtel_slider_window_g1

0x6620,	// (0x000325e0) popup_vtel_slider_window_g2_ParamLimits

0x6620,	// (0x000325e0) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003b999) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003b999) popup_vtel_slider_window_g

0x6676,	// (0x00032636) vtel_slider_pane_ParamLimits

0x6676,	// (0x00032636) vtel_slider_pane

0x6698,	// (0x00032658) vtel_slider_pane_g1_ParamLimits

0x6698,	// (0x00032658) vtel_slider_pane_g1

0x66ac,	// (0x0003266c) vtel_slider_pane_g2_ParamLimits

0x66ac,	// (0x0003266c) vtel_slider_pane_g2

0x66c4,	// (0x00032684) vtel_slider_pane_g3_ParamLimits

0x66c4,	// (0x00032684) vtel_slider_pane_g3

0x6698,	// (0x00032658) vtel_slider_pane_g4_ParamLimits

0x6698,	// (0x00032658) vtel_slider_pane_g4

0x66da,	// (0x0003269a) vtel_slider_pane_g5_ParamLimits

0x66da,	// (0x0003269a) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003b9a2) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003b9a2) vtel_slider_pane_g

0xb05a,	// (0x0003701a) main_gallery2_pane

0x1481,	// (0x0002d441) aid_size_row_itut2_dropdow_list_ParamLimits

0x1481,	// (0x0002d441) aid_size_row_itut2_dropdow_list

0x150d,	// (0x0002d4cd) grid_vitu2_function_top_pane_ParamLimits

0x150d,	// (0x0002d4cd) grid_vitu2_function_top_pane

0x1577,	// (0x0002d537) popup_vitu2_dropdown_list_window_ParamLimits

0x1577,	// (0x0002d537) popup_vitu2_dropdown_list_window

0x15a0,	// (0x0002d560) popup_vitu2_match_list_window

0x17bb,	// (0x0002d77b) cell_vitu2_function_top_pane_ParamLimits

0x17bb,	// (0x0002d77b) cell_vitu2_function_top_pane

0x17d3,	// (0x0002d793) cell_vitu2_function_top_pane_cp01_ParamLimits

0x17d3,	// (0x0002d793) cell_vitu2_function_top_pane_cp01

0x17ef,	// (0x0002d7af) cell_vitu2_function_top_wide_pane_ParamLimits

0x17ef,	// (0x0002d7af) cell_vitu2_function_top_wide_pane

0xb05a,	// (0x0003701a) bg_button_pane_cp012

0x180b,	// (0x0002d7cb) cell_vitu2_function_top_pane_g1

0xbbf0,	// (0x00037bb0) bg_button_pane_cp013_ParamLimits

0xbbf0,	// (0x00037bb0) bg_button_pane_cp013

0x66fe,	// (0x000326be) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x66fe,	// (0x000326be) cell_vitu2_function_top_wide_pane_g1

0xb05a,	// (0x0003701a) bg_popup_sub_pane_cp20

0x181f,	// (0x0002d7df) list_vitu2_match_list_pane

0xee37,	// (0x0003adf7) bg_popup_sub_pane_cp20_g1

0xee3f,	// (0x0003adff) bg_popup_sub_pane_cp20_g2

0xc2d6,	// (0x00038296) bg_popup_sub_pane_cp20_g3

0xee47,	// (0x0003ae07) bg_popup_sub_pane_cp20_g4

0xc2b6,	// (0x00038276) bg_popup_sub_pane_cp20_g5

0xf0a7,	// (0x0003b067) bg_popup_sub_pane_cp20_g6

0xee57,	// (0x0003ae17) bg_popup_sub_pane_cp20_g7

0xee5f,	// (0x0003ae1f) bg_popup_sub_pane_cp20_g8

0xee67,	// (0x0003ae27) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003b9ad) bg_popup_sub_pane_cp20_g

0xbc0c,	// (0x00037bcc) list_vitu2_match_list_item_pane_ParamLimits

0xbc0c,	// (0x00037bcc) list_vitu2_match_list_item_pane

0xbc1e,	// (0x00037bde) list_vitu2_match_list_item_pane_t1

0xb068,	// (0x00037028) bg_popup_sub_pane_cp21

0xbc2c,	// (0x00037bec) grid_vitu2_dropdown_list_pane

0x183d,	// (0x0002d7fd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x183d,	// (0x0002d7fd) cell_vitu2_dropdown_list_char_pane

0x185e,	// (0x0002d81e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x185e,	// (0x0002d81e) cell_vitu2_dropdown_list_ctrl_pane

0x6766,	// (0x00032726) cell_vitu2_dropdown_list_char_pane_g1

0x676f,	// (0x0003272f) cell_vitu2_dropdown_list_char_pane_g2

0x6778,	// (0x00032738) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003b9ca) cell_vitu2_dropdown_list_char_pane_g

0x188a,	// (0x0002d84a) cell_vitu2_dropdown_list_char_pane_t1

0x6781,	// (0x00032741) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6781,	// (0x00032741) cell_vitu2_dropdown_list_ctrl_pane_g1

0x678e,	// (0x0003274e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x678e,	// (0x0003274e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x679b,	// (0x0003275b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x679b,	// (0x0003275b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1898,	// (0x0002d858) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1898,	// (0x0002d858) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbac4,	// (0x00037a84) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbac4,	// (0x00037a84) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003b9d1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003b9d1) cell_vitu2_dropdown_list_ctrl_pane_g

0x67a8,	// (0x00032768) aid_size_cell_gallery2_ParamLimits

0x67a8,	// (0x00032768) aid_size_cell_gallery2

0x67c6,	// (0x00032786) grid_gallery2_pane_ParamLimits

0x67c6,	// (0x00032786) grid_gallery2_pane

0x67e0,	// (0x000327a0) scroll_pane_cp029_ParamLimits

0x67e0,	// (0x000327a0) scroll_pane_cp029

0x67ec,	// (0x000327ac) cell_gallery2_pane_ParamLimits

0x67ec,	// (0x000327ac) cell_gallery2_pane

0x6848,	// (0x00032808) cell_gallery2_pane_g2

0x6850,	// (0x00032810) cell_gallery2_pane_g3

0x6858,	// (0x00032818) cell_gallery2_pane_g4

0x6860,	// (0x00032820) cell_gallery2_pane_g5

0xc07d,	// (0x0003803d) grid_highlight_pane_cp10

0x15a0,	// (0x0002d560) popup_vitu2_match_list_window_ParamLimits

0x15b7,	// (0x0002d577) popup_vitu2_query_window_ParamLimits

0x15b7,	// (0x0002d577) popup_vitu2_query_window

0xb068,	// (0x00037028) bg_vitu2_candi_button_pane

0x6766,	// (0x00032726) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x676f,	// (0x0003272f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6778,	// (0x00032738) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6868,	// (0x00032828) bg_button_pane_cp015

0x687a,	// (0x0003283a) bg_button_pane_cp016

0x688d,	// (0x0003284d) bg_button_pane_cp017

0xdf70,	// (0x00039f30) bg_popup_sub_pane_cp22

0x68d2,	// (0x00032892) popup_vitu2_query_window_g1

0x68de,	// (0x0003289e) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003b9dc) popup_vitu2_query_window_g

0x68fd,	// (0x000328bd) popup_vitu2_query_window_t1_ParamLimits

0x68fd,	// (0x000328bd) popup_vitu2_query_window_t1

0x6932,	// (0x000328f2) popup_vitu2_query_window_t2_ParamLimits

0x6932,	// (0x000328f2) popup_vitu2_query_window_t2

0x6944,	// (0x00032904) popup_vitu2_query_window_t3_ParamLimits

0x6944,	// (0x00032904) popup_vitu2_query_window_t3

0x696c,	// (0x0003292c) popup_vitu2_query_window_t4_ParamLimits

0x696c,	// (0x0003292c) popup_vitu2_query_window_t4

0x698d,	// (0x0003294d) popup_vitu2_query_window_t5_ParamLimits

0x698d,	// (0x0003294d) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003b9e3) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003b9e3) popup_vitu2_query_window_t

0xef55,	// (0x0003af15) main_cset_text_pane

0x6353,	// (0x00032313) aid_area_touch_slider_ParamLimits

0x636f,	// (0x0003232f) cset_slider_pane_ParamLimits

0x6399,	// (0x00032359) main_cset_slider_pane_g1_ParamLimits

0x63ae,	// (0x0003236e) main_cset_slider_pane_g2_ParamLimits

0xef76,	// (0x0003af36) main_cset_slider_pane_g3_ParamLimits

0xef76,	// (0x0003af36) main_cset_slider_pane_g3

0x63c3,	// (0x00032383) main_cset_slider_pane_g4_ParamLimits

0x63c3,	// (0x00032383) main_cset_slider_pane_g4

0x63d2,	// (0x00032392) main_cset_slider_pane_g5_ParamLimits

0x63d2,	// (0x00032392) main_cset_slider_pane_g5

0x63de,	// (0x0003239e) main_cset_slider_pane_g6_ParamLimits

0x63de,	// (0x0003239e) main_cset_slider_pane_g6

0xf976,	// (0x0003b936) main_cset_slider_pane_g_ParamLimits

0xefa6,	// (0x0003af66) main_cset_slider_pane_t1_ParamLimits

0x646a,	// (0x0003242a) main_cset_slider_pane_t2_ParamLimits

0x6484,	// (0x00032444) main_cset_slider_pane_t3_ParamLimits

0x649e,	// (0x0003245e) main_cset_slider_pane_t4_ParamLimits

0x64b8,	// (0x00032478) main_cset_slider_pane_t5_ParamLimits

0x64d2,	// (0x00032492) main_cset_slider_pane_t6_ParamLimits

0x64e7,	// (0x000324a7) main_cset_slider_pane_t7_ParamLimits

0x6511,	// (0x000324d1) main_cset_slider_pane_t8_ParamLimits

0x6511,	// (0x000324d1) main_cset_slider_pane_t8

0x6539,	// (0x000324f9) main_cset_slider_pane_t9_ParamLimits

0x6539,	// (0x000324f9) main_cset_slider_pane_t9

0x6561,	// (0x00032521) main_cset_slider_pane_t10_ParamLimits

0x6561,	// (0x00032521) main_cset_slider_pane_t10

0x6589,	// (0x00032549) main_cset_slider_pane_t11_ParamLimits

0x6589,	// (0x00032549) main_cset_slider_pane_t11

0x65b1,	// (0x00032571) main_cset_slider_pane_t12_ParamLimits

0x65b1,	// (0x00032571) main_cset_slider_pane_t12

0x65ce,	// (0x0003258e) main_cset_slider_pane_t13_ParamLimits

0x65ce,	// (0x0003258e) main_cset_slider_pane_t13

0xf99b,	// (0x0003b95b) main_cset_slider_pane_t_ParamLimits

0xafea,	// (0x00036faa) bg_popup_sub_pane_cp011

0x6a04,	// (0x000329c4) main_cset_text_pane_g1

0x6a0c,	// (0x000329cc) main_cset_text_pane_t1

0x6a1a,	// (0x000329da) main_cset_text_pane_t2

0x6a28,	// (0x000329e8) main_cset_text_pane_t3

0x6a36,	// (0x000329f6) main_cset_text_pane_t4

0x6a44,	// (0x00032a04) main_cset_text_pane_t5

0x6a52,	// (0x00032a12) main_cset_text_pane_t6

0x6a60,	// (0x00032a20) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003b9f2) main_cset_text_pane_t

0xb068,	// (0x00037028) main_cam4_burst_pane

0xb068,	// (0x00037028) main_cam5_pane

0x6292,	// (0x00032252) bg_button_pane_cp019

0x629b,	// (0x0003225b) bg_button_pane_cp020

0xef82,	// (0x0003af42) main_cset_slider_pane_g7_ParamLimits

0xef82,	// (0x0003af42) main_cset_slider_pane_g7

0xef8e,	// (0x0003af4e) main_cset_slider_pane_g8_ParamLimits

0xef8e,	// (0x0003af4e) main_cset_slider_pane_g8

0x63f2,	// (0x000323b2) main_cset_slider_pane_g9_ParamLimits

0x63f2,	// (0x000323b2) main_cset_slider_pane_g9

0x63fe,	// (0x000323be) main_cset_slider_pane_g10_ParamLimits

0x63fe,	// (0x000323be) main_cset_slider_pane_g10

0x640a,	// (0x000323ca) main_cset_slider_pane_g11_ParamLimits

0x640a,	// (0x000323ca) main_cset_slider_pane_g11

0x6416,	// (0x000323d6) main_cset_slider_pane_g12_ParamLimits

0x6416,	// (0x000323d6) main_cset_slider_pane_g12

0x6422,	// (0x000323e2) main_cset_slider_pane_g13_ParamLimits

0x6422,	// (0x000323e2) main_cset_slider_pane_g13

0x642e,	// (0x000323ee) main_cset_slider_pane_g14_ParamLimits

0x642e,	// (0x000323ee) main_cset_slider_pane_g14

0x643a,	// (0x000323fa) main_cset_slider_pane_g15_ParamLimits

0x643a,	// (0x000323fa) main_cset_slider_pane_g15

0xefd4,	// (0x0003af94) main_cset_slider_pane_t14_ParamLimits

0xefd4,	// (0x0003af94) main_cset_slider_pane_t14

0xf00d,	// (0x0003afcd) main_cset_slider_pane_t15_ParamLimits

0xf00d,	// (0x0003afcd) main_cset_slider_pane_t15

0x6a6e,	// (0x00032a2e) aid_cam4_burst_size_cell_ParamLimits

0x6a6e,	// (0x00032a2e) aid_cam4_burst_size_cell

0x6a8e,	// (0x00032a4e) grid_cam4_burst_pane_ParamLimits

0x6a8e,	// (0x00032a4e) grid_cam4_burst_pane

0x6ac6,	// (0x00032a86) linegrid_cam4_burst_pane_ParamLimits

0x6ac6,	// (0x00032a86) linegrid_cam4_burst_pane

0x6aea,	// (0x00032aaa) scroll_pane_cp30_ParamLimits

0x6aea,	// (0x00032aaa) scroll_pane_cp30

0x6af6,	// (0x00032ab6) cell_cam4_burst_pane_ParamLimits

0x6af6,	// (0x00032ab6) cell_cam4_burst_pane

0x6b43,	// (0x00032b03) linegrid_cam4_burst_pane_g1_ParamLimits

0x6b43,	// (0x00032b03) linegrid_cam4_burst_pane_g1

0x6b50,	// (0x00032b10) linegrid_cam4_burst_pane_g2_ParamLimits

0x6b50,	// (0x00032b10) linegrid_cam4_burst_pane_g2

0x6b61,	// (0x00032b21) linegrid_cam4_burst_pane_g3_ParamLimits

0x6b61,	// (0x00032b21) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003ba01) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003ba01) linegrid_cam4_burst_pane_g

0x6b6e,	// (0x00032b2e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6b6e,	// (0x00032b2e) linegrid_cam4_burst_pane_g3_copy1

0x6b88,	// (0x00032b48) linegrid_cam4_burst_pane_g4_ParamLimits

0x6b88,	// (0x00032b48) linegrid_cam4_burst_pane_g4

0x6b95,	// (0x00032b55) linegrid_cam4_burst_pane_g5_ParamLimits

0x6b95,	// (0x00032b55) linegrid_cam4_burst_pane_g5

0x6ba6,	// (0x00032b66) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ba6,	// (0x00032b66) linegrid_cam4_burst_pane_g6

0x6bbd,	// (0x00032b7d) linegrid_cam4_burst_pane_g7_ParamLimits

0x6bbd,	// (0x00032b7d) linegrid_cam4_burst_pane_g7

0x6bca,	// (0x00032b8a) cell_cam4_burst_pane_g1

0x6be9,	// (0x00032ba9) main_cam5_pane_t1_ParamLimits

0x6be9,	// (0x00032ba9) main_cam5_pane_t1

0x6bfb,	// (0x00032bbb) main_cam5_pane_t2_ParamLimits

0x6bfb,	// (0x00032bbb) main_cam5_pane_t2

0x6c0d,	// (0x00032bcd) main_cam5_pane_t3_ParamLimits

0x6c0d,	// (0x00032bcd) main_cam5_pane_t3

0x6c1f,	// (0x00032bdf) main_cam5_pane_t4_ParamLimits

0x6c1f,	// (0x00032bdf) main_cam5_pane_t4

0x6c37,	// (0x00032bf7) main_cam5_pane_t5_ParamLimits

0x6c37,	// (0x00032bf7) main_cam5_pane_t5

0x6c4b,	// (0x00032c0b) main_cam5_pane_t6_ParamLimits

0x6c4b,	// (0x00032c0b) main_cam5_pane_t6

0x6c5f,	// (0x00032c1f) main_cam5_pane_t7_ParamLimits

0x6c5f,	// (0x00032c1f) main_cam5_pane_t7

0x6c71,	// (0x00032c31) main_cam5_pane_t8_ParamLimits

0x6c71,	// (0x00032c31) main_cam5_pane_t8

0x6c8d,	// (0x00032c4d) main_cam5_pane_t9_ParamLimits

0x6c8d,	// (0x00032c4d) main_cam5_pane_t9

0x6c9f,	// (0x00032c5f) main_cam5_pane_t10_ParamLimits

0x6c9f,	// (0x00032c5f) main_cam5_pane_t10

0x6cb1,	// (0x00032c71) main_cam5_pane_t11_ParamLimits

0x6cb1,	// (0x00032c71) main_cam5_pane_t11

0x6cc3,	// (0x00032c83) main_cam5_pane_t12_ParamLimits

0x6cc3,	// (0x00032c83) main_cam5_pane_t12

0x6cd8,	// (0x00032c98) main_cam5_pane_t13_ParamLimits

0x6cd8,	// (0x00032c98) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003ba0d) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003ba0d) main_cam5_pane_t

0x03ae,	// (0x0002c36e) popup_scut_keymap_window_ParamLimits

0x03ae,	// (0x0002c36e) popup_scut_keymap_window

0x6cf5,	// (0x00032cb5) aid_size_cell_brow_shortcut

0xc07d,	// (0x0003803d) bg_popup_window_pane_cp010

0x6d01,	// (0x00032cc1) grid_scut_pane

0x6d0d,	// (0x00032ccd) cell_scut_pane_ParamLimits

0x6d0d,	// (0x00032ccd) cell_scut_pane

0x6d24,	// (0x00032ce4) cell_scut_pane_g1

0x6d2d,	// (0x00032ced) cell_scut_pane_t1

0x6d3c,	// (0x00032cfc) cell_scut_pane_t2

0x6d4b,	// (0x00032d0b) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003ba28) cell_scut_pane_t

0x51bd,	// (0x0003117d) main_mup3_pane_g8_ParamLimits

0x51bd,	// (0x0003117d) main_mup3_pane_g8

0x1499,	// (0x0002d459) area_vitu2_query_pane_ParamLimits

0x1499,	// (0x0002d459) area_vitu2_query_pane

0x68a0,	// (0x00032860) input_focus_pane_cp08

0x6d59,	// (0x00032d19) area_vitu2_query_pane_g1

0x6d65,	// (0x00032d25) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003ba2f) area_vitu2_query_pane_g

0x6d76,	// (0x00032d36) area_vitu2_query_pane_t1_ParamLimits

0x6d76,	// (0x00032d36) area_vitu2_query_pane_t1

0x6d8a,	// (0x00032d4a) area_vitu2_query_pane_t2_ParamLimits

0x6d8a,	// (0x00032d4a) area_vitu2_query_pane_t2

0x6d9e,	// (0x00032d5e) area_vitu2_query_pane_t3_ParamLimits

0x6d9e,	// (0x00032d5e) area_vitu2_query_pane_t3

0x6dc6,	// (0x00032d86) area_vitu2_query_pane_t4_ParamLimits

0x6dc6,	// (0x00032d86) area_vitu2_query_pane_t4

0x6dee,	// (0x00032dae) area_vitu2_query_pane_t5_ParamLimits

0x6dee,	// (0x00032dae) area_vitu2_query_pane_t5

0x6e16,	// (0x00032dd6) area_vitu2_query_pane_t6_ParamLimits

0x6e16,	// (0x00032dd6) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003ba34) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003ba34) area_vitu2_query_pane_t

0x6e62,	// (0x00032e22) bg_button_pane_cp018

0x6e70,	// (0x00032e30) bg_button_pane_cp021

0x6e7c,	// (0x00032e3c) bg_button_pane_cp022

0x6e8b,	// (0x00032e4b) input_focus_pane_cp09

0xc948,	// (0x00038908) aid_size_touch_mv_arrow_left

0xc971,	// (0x00038931) aid_size_touch_mv_arrow_right

0x6452,	// (0x00032412) main_cset_slider_pane_g16_ParamLimits

0x6452,	// (0x00032412) main_cset_slider_pane_g16

0x645e,	// (0x0003241e) main_cset_slider_pane_g17_ParamLimits

0x645e,	// (0x0003241e) main_cset_slider_pane_g17

0x6bca,	// (0x00032b8a) cell_cam4_burst_pane_g1_ParamLimits

0xafea,	// (0x00036faa) compa_mode_pane

0x6630,	// (0x000325f0) popup_vtel_slider_window_g3_ParamLimits

0x6630,	// (0x000325f0) popup_vtel_slider_window_g3

0x6647,	// (0x00032607) popup_vtel_slider_window_g4_ParamLimits

0x6647,	// (0x00032607) popup_vtel_slider_window_g4

0x665e,	// (0x0003261e) popup_vtel_slider_window_t1_ParamLimits

0x665e,	// (0x0003261e) popup_vtel_slider_window_t1

0xb068,	// (0x00037028) main_cl_pane

0xb734,	// (0x000376f4) popup_imed_adjust2_window_ParamLimits

0xdf70,	// (0x00039f30) bg_tb_trans_pane_cp05_ParamLimits

0xe8df,	// (0x0003a89f) popup_imed_adjust2_window_g1_ParamLimits

0xe8ee,	// (0x0003a8ae) popup_imed_adjust2_window_g2_ParamLimits

0xe8ee,	// (0x0003a8ae) popup_imed_adjust2_window_g2

0xe8fa,	// (0x0003a8ba) popup_imed_adjust2_window_g3_ParamLimits

0xe8fa,	// (0x0003a8ba) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003b79f) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003b79f) popup_imed_adjust2_window_g

0xe906,	// (0x0003a8c6) popup_imed_adjust2_window_t1_ParamLimits

0xe91e,	// (0x0003a8de) slider_imed_adjust_pane_ParamLimits

0xe932,	// (0x0003a8f2) slider_imed_adjust_pane_g1_ParamLimits

0xe942,	// (0x0003a902) slider_imed_adjust_pane_g2_ParamLimits

0xe952,	// (0x0003a912) slider_imed_adjust_pane_g3_ParamLimits

0xe963,	// (0x0003a923) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003b7a6) slider_imed_adjust_pane_g_ParamLimits

0x1256,	// (0x0002d216) aid_touch_area_cam4_ParamLimits

0x1256,	// (0x0002d216) aid_touch_area_cam4

0xbaa8,	// (0x00037a68) battery_pane_cp01

0x1325,	// (0x0002d2e5) main_camera4_pane_g6_ParamLimits

0x1325,	// (0x0002d2e5) main_camera4_pane_g6

0x134f,	// (0x0002d30f) main_camera4_pane_t2_ParamLimits

0x134f,	// (0x0002d30f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003b8a9) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003b8a9) main_camera4_pane_t

0x1370,	// (0x0002d330) aid_touch_area_vid4_ParamLimits

0x1370,	// (0x0002d330) aid_touch_area_vid4

0x13c4,	// (0x0002d384) main_video4_pane_g5_ParamLimits

0x13c4,	// (0x0002d384) main_video4_pane_g5

0x13e9,	// (0x0002d3a9) vid4_progress_pane_ParamLimits

0x13e9,	// (0x0002d3a9) vid4_progress_pane

0xef9a,	// (0x0003af5a) main_cset_slider_pane_g18_ParamLimits

0xef9a,	// (0x0003af5a) main_cset_slider_pane_g18

0x6bdd,	// (0x00032b9d) cell_cam4_burst_pane_g2_ParamLimits

0x6bdd,	// (0x00032b9d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003ba08) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003ba08) cell_cam4_burst_pane_g

0xbeb8,	// (0x00037e78) bg_cl_pane_ParamLimits

0xbeb8,	// (0x00037e78) bg_cl_pane

0x6e9a,	// (0x00032e5a) cl_header_pane_ParamLimits

0x6e9a,	// (0x00032e5a) cl_header_pane

0x6eae,	// (0x00032e6e) cl_listscroll_pane_ParamLimits

0x6eae,	// (0x00032e6e) cl_listscroll_pane

0x6ebe,	// (0x00032e7e) bg_cl_pane_g1

0x6ec6,	// (0x00032e86) bg_cl_pane_g2

0x6ece,	// (0x00032e8e) bg_cl_pane_g3

0x6ed6,	// (0x00032e96) bg_cl_pane_g4

0x6ede,	// (0x00032e9e) bg_cl_pane_g5

0x6ee6,	// (0x00032ea6) bg_cl_pane_g6

0x6eee,	// (0x00032eae) bg_cl_pane_g7

0x6ef6,	// (0x00032eb6) bg_cl_pane_g8

0x6efe,	// (0x00032ebe) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003ba43) bg_cl_pane_g

0x6f06,	// (0x00032ec6) aid_height_cl_leading_ParamLimits

0x6f06,	// (0x00032ec6) aid_height_cl_leading

0x6f12,	// (0x00032ed2) aid_height_cl_text_ParamLimits

0x6f12,	// (0x00032ed2) aid_height_cl_text

0xc93a,	// (0x000388fa) bg_cl_header_pane_ParamLimits

0xc93a,	// (0x000388fa) bg_cl_header_pane

0x6f31,	// (0x00032ef1) cl_header_pane_g1_ParamLimits

0x6f31,	// (0x00032ef1) cl_header_pane_g1

0x6f47,	// (0x00032f07) cl_header_pane_t1_ParamLimits

0x6f47,	// (0x00032f07) cl_header_pane_t1

0x6f60,	// (0x00032f20) cl_list_pane

0xef6d,	// (0x0003af2d) hc_scroll_pane_cp01

0xc2b6,	// (0x00038276) bg_cl_header_pane_g1

0xee37,	// (0x0003adf7) bg_cl_header_pane_g2

0xc2d6,	// (0x00038296) bg_cl_header_pane_g3

0xee47,	// (0x0003ae07) bg_cl_header_pane_g4

0xee3f,	// (0x0003adff) bg_cl_header_pane_g5

0xf0a7,	// (0x0003b067) bg_cl_header_pane_g6

0xee5f,	// (0x0003ae1f) bg_cl_header_pane_g7

0xee67,	// (0x0003ae27) bg_cl_header_pane_g8

0xee57,	// (0x0003ae17) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003ba56) bg_cl_header_pane_g

0x6f69,	// (0x00032f29) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6f69,	// (0x00032f29) hc_cl_list_double_graphic_heading_pane

0x6f7a,	// (0x00032f3a) hc_cl_list_single_graphic_pane_ParamLimits

0x6f7a,	// (0x00032f3a) hc_cl_list_single_graphic_pane

0x6f90,	// (0x00032f50) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6f90,	// (0x00032f50) hc_cl_list_single_graphic_pane_g1

0x6f9c,	// (0x00032f5c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6f9c,	// (0x00032f5c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003ba69) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003ba69) hc_cl_list_single_graphic_pane_g

0x6fb0,	// (0x00032f70) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6fb0,	// (0x00032f70) hc_cl_list_single_graphic_pane_t1

0x6f90,	// (0x00032f50) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6f90,	// (0x00032f50) hc_cl_list_double_graphic_heading_pane_g1

0x6fc5,	// (0x00032f85) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6fc5,	// (0x00032f85) hc_cl_list_double_graphic_heading_pane_g2

0x6fd9,	// (0x00032f99) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6fd9,	// (0x00032f99) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003ba6e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003ba6e) hc_cl_list_double_graphic_heading_pane_g

0x6fed,	// (0x00032fad) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6fed,	// (0x00032fad) hc_cl_list_double_graphic_heading_pane_t1

0x7002,	// (0x00032fc2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7002,	// (0x00032fc2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003ba75) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003ba75) hc_cl_list_double_graphic_heading_pane_t

0xbc3c,	// (0x00037bfc) vid4_progress_pane_g1

0xbc4c,	// (0x00037c0c) vid4_progress_pane_g2

0x18b4,	// (0x0002d874) vid4_progress_pane_g3

0xbc5c,	// (0x00037c1c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003ba7a) vid4_progress_pane_g

0x18c6,	// (0x0002d886) vid4_progress_pane_t1

0xbc74,	// (0x00037c34) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003ba85) vid4_progress_pane_t

0x18de,	// (0x0002d89e) wait_bar_pane_cp07

0xe16b,	// (0x0003a12b) blid_firmament_pane_ParamLimits

0xe1ae,	// (0x0003a16e) popup_blid_sat_info2_window_g1

0xe1d2,	// (0x0003a192) popup_blid_sat_info2_window_t3

0xe1e0,	// (0x0003a1a0) popup_blid_sat_info2_window_t4

0xe1ee,	// (0x0003a1ae) popup_blid_sat_info2_window_t5

0xe1fc,	// (0x0003a1bc) popup_blid_sat_info2_window_t6

0xe20c,	// (0x0003a1cc) popup_blid_sat_info2_window_t7

0xe21a,	// (0x0003a1da) popup_blid_sat_info2_window_t8

0xe228,	// (0x0003a1e8) popup_blid_sat_info2_window_t9

0xe236,	// (0x0003a1f6) popup_blid_sat_info2_window_t10

0xe30d,	// (0x0003a2cd) aid_firma_cardinal_ParamLimits

0xe321,	// (0x0003a2e1) blid_firmament_pane_t1_ParamLimits

0xe338,	// (0x0003a2f8) blid_firmament_pane_t2_ParamLimits

0xe34f,	// (0x0003a30f) blid_firmament_pane_t3_ParamLimits

0xe366,	// (0x0003a326) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003b693) blid_firmament_pane_t_ParamLimits

0xe37d,	// (0x0003a33d) blid_sat_info_pane_ParamLimits

0xb05a,	// (0x0003701a) main_cam_set_pane_ParamLimits

0x59ed,	// (0x000319ad) aid_size_cell_colour_35_ParamLimits

0x5a0d,	// (0x000319cd) aid_size_cell_colour_112_ParamLimits

0x5a2d,	// (0x000319ed) aid_size_cell_effect_ParamLimits

0xdf70,	// (0x00039f30) bg_tb_trans_pane_cp02_ParamLimits

0xc51e,	// (0x000384de) heading_imed_pane_ParamLimits

0x5a4d,	// (0x00031a0d) listscroll_imed_pane_ParamLimits

0xd596,	// (0x00039556) popup_call2_audio_first_window_g5_ParamLimits

0xd596,	// (0x00039556) popup_call2_audio_first_window_g5

0x1033,	// (0x0002cff3) aid_size_touch_image3_arrow_left_ParamLimits

0x1033,	// (0x0002cff3) aid_size_touch_image3_arrow_left

0x105f,	// (0x0002d01f) aid_size_touch_image3_arrow_right_ParamLimits

0x105f,	// (0x0002d01f) aid_size_touch_image3_arrow_right

0xbc89,	// (0x00037c49) vid4_progress_pane_t3

0x5d60,	// (0x00031d20) main_hwr_training_symbol_option_pane_ParamLimits

0x5d60,	// (0x00031d20) main_hwr_training_symbol_option_pane

0xebcc,	// (0x0003ab8c) popup_hwr_training_preview_window_ParamLimits

0xebcc,	// (0x0003ab8c) popup_hwr_training_preview_window

0x0ede,	// (0x0002ce9e) hwr_training_navi_pane_g5_ParamLimits

0x0ede,	// (0x0002ce9e) hwr_training_navi_pane_g5

0xee25,	// (0x0003ade5) popup_char_count_window

0xb05a,	// (0x0003701a) bg_popup_sub_pane_cp20_ParamLimits

0x181f,	// (0x0002d7df) list_vitu2_match_list_pane_ParamLimits

0x182e,	// (0x0002d7ee) vitu2_page_scroll_pane_ParamLimits

0x182e,	// (0x0002d7ee) vitu2_page_scroll_pane

0x7071,	// (0x00033031) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7071,	// (0x00033031) list_single_hwr_training_symbol_option_pane

0x7084,	// (0x00033044) list_single_hwr_training_symbol_option_pane_g1

0x708c,	// (0x0003304c) list_single_hwr_training_symbol_option_pane_t1

0x709a,	// (0x0003305a) bg_button_pane_cp023

0x70a3,	// (0x00033063) bg_button_pane_cp024

0x70d6,	// (0x00033096) vitu2_page_scroll_pane_g1

0x70de,	// (0x0003309e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003ba8c) vitu2_page_scroll_pane_g

0x70e6,	// (0x000330a6) vitu2_page_scroll_pane_t1

0xe0cb,	// (0x0003a08b) popup_char_count_window_g1

0x70f5,	// (0x000330b5) popup_char_count_window_g2

0x70fe,	// (0x000330be) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003ba91) popup_char_count_window_g

0x7107,	// (0x000330c7) popup_char_count_window_t1

0xb068,	// (0x00037028) main_vded2_pane

0xe8cb,	// (0x0003a88b) aid_size_cell_imed_line

0xe8d5,	// (0x0003a895) grid_imed_line_width_pane

0xbb6e,	// (0x00037b2e) vid4_indicators_pane_g4

0x7115,	// (0x000330d5) cell_imed_line_width_pane_ParamLimits

0x7115,	// (0x000330d5) cell_imed_line_width_pane

0x7129,	// (0x000330e9) cell_imed_line_width_pane_g1

0x4d0f,	// (0x00030ccf) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003ba98) cell_imed_line_width_pane_g

0x7132,	// (0x000330f2) main_vded2_pane_g1_ParamLimits

0x7132,	// (0x000330f2) main_vded2_pane_g1

0x7148,	// (0x00033108) main_vded2_pane_g2_ParamLimits

0x7148,	// (0x00033108) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003ba9d) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003ba9d) main_vded2_pane_g

0x715a,	// (0x0003311a) vded2_slider_pane_ParamLimits

0x715a,	// (0x0003311a) vded2_slider_pane

0x716a,	// (0x0003312a) aid_size_touch_vded2_end

0x7174,	// (0x00033134) aid_size_touch_vded2_playhead

0x717e,	// (0x0003313e) aid_size_touch_vded2_start

0x7186,	// (0x00033146) vded2_slider_bg_pane

0x718f,	// (0x0003314f) vded2_slider_pane_g1

0x7198,	// (0x00033158) vded2_slider_pane_g2

0x71a0,	// (0x00033160) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003baa2) vded2_slider_pane_g

0x71ab,	// (0x0003316b) vded2_slider_bg_pane_g1

0x71b4,	// (0x00033174) vded2_slider_bg_pane_g2

0x71bd,	// (0x0003317d) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003baa9) vded2_slider_bg_pane_g

0x3f4d,	// (0x0002ff0d) aid_postcard_touch_down_pane_ParamLimits

0x3f4d,	// (0x0002ff0d) aid_postcard_touch_down_pane

0x3f63,	// (0x0002ff23) aid_postcard_touch_up_pane_ParamLimits

0x3f63,	// (0x0002ff23) aid_postcard_touch_up_pane

0xb068,	// (0x00037028) main_blid2_pane

0xb71a,	// (0x000376da) popup_blid2_search_window

0xafea,	// (0x00036faa) blid2_gps_pane

0xafea,	// (0x00036faa) blid2_navig_pane

0xafea,	// (0x00036faa) blid2_search_pane

0xafea,	// (0x00036faa) blid2_tripm_pane

0x71c6,	// (0x00033186) blid2_search_pane_g1_ParamLimits

0x71c6,	// (0x00033186) blid2_search_pane_g1

0x71e0,	// (0x000331a0) blid2_search_pane_t1_ParamLimits

0x71e0,	// (0x000331a0) blid2_search_pane_t1

0x71f2,	// (0x000331b2) aid_size_cell_blid2_gps_ParamLimits

0x71f2,	// (0x000331b2) aid_size_cell_blid2_gps

0x720a,	// (0x000331ca) blid2_gps_pane_g1_ParamLimits

0x720a,	// (0x000331ca) blid2_gps_pane_g1

0x721e,	// (0x000331de) grid_blid2_satellite_pane_ParamLimits

0x721e,	// (0x000331de) grid_blid2_satellite_pane

0x7238,	// (0x000331f8) blid2_navig_pane_g1_ParamLimits

0x7238,	// (0x000331f8) blid2_navig_pane_g1

0x7244,	// (0x00033204) blid2_navig_pane_t1_ParamLimits

0x7244,	// (0x00033204) blid2_navig_pane_t1

0x725f,	// (0x0003321f) blid2_navig_pane_t2_ParamLimits

0x725f,	// (0x0003321f) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003bab0) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003bab0) blid2_navig_pane_t

0x727a,	// (0x0003323a) blid2_navig_ring_pane_ParamLimits

0x727a,	// (0x0003323a) blid2_navig_ring_pane

0x7293,	// (0x00033253) blid2_speed_pane_ParamLimits

0x7293,	// (0x00033253) blid2_speed_pane

0x729f,	// (0x0003325f) blid2_tripm_pane_g1_ParamLimits

0x729f,	// (0x0003325f) blid2_tripm_pane_g1

0x72b8,	// (0x00033278) blid2_tripm_pane_g2_ParamLimits

0x72b8,	// (0x00033278) blid2_tripm_pane_g2

0x72cc,	// (0x0003328c) blid2_tripm_pane_g3_ParamLimits

0x72cc,	// (0x0003328c) blid2_tripm_pane_g3

0x72e0,	// (0x000332a0) blid2_tripm_pane_g4_ParamLimits

0x72e0,	// (0x000332a0) blid2_tripm_pane_g4

0x72f4,	// (0x000332b4) blid2_tripm_pane_g5_ParamLimits

0x72f4,	// (0x000332b4) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003bab5) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003bab5) blid2_tripm_pane_g

0x731a,	// (0x000332da) blid2_tripm_pane_t1_ParamLimits

0x731a,	// (0x000332da) blid2_tripm_pane_t1

0x7335,	// (0x000332f5) blid2_tripm_pane_t2_ParamLimits

0x7335,	// (0x000332f5) blid2_tripm_pane_t2

0x734e,	// (0x0003330e) blid2_tripm_pane_t3_ParamLimits

0x734e,	// (0x0003330e) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003bac2) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003bac2) blid2_tripm_pane_t

0x7395,	// (0x00033355) cell_blid2_satellite_pane_ParamLimits

0x7395,	// (0x00033355) cell_blid2_satellite_pane

0x73b3,	// (0x00033373) cell_blid2_satellite_pane_g1

0x73bc,	// (0x0003337c) cell_blid2_satellite_pane_t1

0xe38d,	// (0x0003a34d) blid2_speed_pane_g1

0x73ca,	// (0x0003338a) blid2_speed_pane_t1

0x73d8,	// (0x00033398) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003bacb) blid2_speed_pane_t

0xe38d,	// (0x0003a34d) blid2_navig_ring_pane_g1

0x73e6,	// (0x000333a6) blid2_navig_ring_pane_g2

0x73ee,	// (0x000333ae) blid2_navig_ring_pane_g3

0x73f6,	// (0x000333b6) blid2_navig_ring_pane_g4

0x73fe,	// (0x000333be) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003bad0) blid2_navig_ring_pane_g

0xafea,	// (0x00036faa) bg_popup_window_pane_cp011

0x7406,	// (0x000333c6) popup_blid2_search_window_g1

0x740e,	// (0x000333ce) popup_blid2_search_window_t1

0x741c,	// (0x000333dc) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003badb) popup_blid2_search_window_t

0xc1c5,	// (0x00038185) main_browser_pane_g1

0xbeb8,	// (0x00037e78) main_browser_pane_ParamLimits

0xb05a,	// (0x0003701a) bg_button_pane_cp011_ParamLimits

0x179f,	// (0x0002d75f) cell_vitu2_function_pane_g1_ParamLimits

0xdf70,	// (0x00039f30) bg_popup_sub_pane_cp22_ParamLimits

0x68a0,	// (0x00032860) input_focus_pane_cp08_ParamLimits

0x68b7,	// (0x00032877) popup_vitu2_query_button_pane_ParamLimits

0x68b7,	// (0x00032877) popup_vitu2_query_button_pane

0x68c8,	// (0x00032888) popup_vitu2_query_input_button_pane

0x68d2,	// (0x00032892) popup_vitu2_query_window_g1_ParamLimits

0x68de,	// (0x0003289e) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003b9dc) popup_vitu2_query_window_g_ParamLimits

0xafea,	// (0x00036faa) bg_button_pane_cp026

0x742a,	// (0x000333ea) popup_vitu2_query_input_button_pane_g1

0xafea,	// (0x00036faa) bg_button_pane_cp025

0x7432,	// (0x000333f2) popup_vitu2_query_button_pane_t1

0x4e6a,	// (0x00030e2a) main_mp3_pane_t6

0x4e78,	// (0x00030e38) popup_slider_window_cp01

0xbad2,	// (0x00037a92) cam4_battery_pane

0xbb2b,	// (0x00037aeb) cam4_battery_pane_cp02

0xbc34,	// (0x00037bf4) cam4_battery_pane_cp01

0xbc34,	// (0x00037bf4) cam4_battery_pane_cp03

0x5de8,	// (0x00031da8) cam4_battery_pane_g1

0xe38d,	// (0x0003a34d) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003bae0) cam4_battery_pane_g

0xe244,	// (0x0003a204) popup_blid_sat_info2_window_t11

0xc948,	// (0x00038908) aid_size_touch_mv_arrow_left_ParamLimits

0xc971,	// (0x00038931) aid_size_touch_mv_arrow_right_ParamLimits

0xc9cf,	// (0x0003898f) navi_pane_g1_ParamLimits

0xc9db,	// (0x0003899b) navi_pane_g2_ParamLimits

0xca09,	// (0x000389c9) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003b3a5) navi_pane_g_ParamLimits

0x3a2a,	// (0x0002f9ea) navi_pane_mv_t1_ParamLimits

0x5a59,	// (0x00031a19) grid_imed_effect_pane_ParamLimits

0x26b0,	// (0x0002e670) aid_placing_vt_slider_lsc

0xc114,	// (0x000380d4) aid_placing_vt_slider_prt

0xc93a,	// (0x000388fa) bg_tb_trans_pane_cp01_ParamLimits

0xe510,	// (0x0003a4d0) popup_image_details_window_g1_ParamLimits

0xe523,	// (0x0003a4e3) popup_image_details_window_g2_ParamLimits

0xe538,	// (0x0003a4f8) popup_image_details_window_g3_ParamLimits

0xe538,	// (0x0003a4f8) popup_image_details_window_g3

0xf718,	// (0x0003b6d8) popup_image_details_window_g_ParamLimits

0xe54c,	// (0x0003a50c) popup_image_details_window_t1_ParamLimits

0xe55e,	// (0x0003a51e) popup_image_details_window_t2_ParamLimits

0xe577,	// (0x0003a537) popup_image_details_window_t3_ParamLimits

0xe58b,	// (0x0003a54b) popup_image_details_window_t4_ParamLimits

0xe5a6,	// (0x0003a566) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003b6df) popup_image_details_window_t_ParamLimits

0x6f1e,	// (0x00032ede) cl_header_name_pane_ParamLimits

0x6f1e,	// (0x00032ede) cl_header_name_pane

0x7440,	// (0x00033400) cl_header_name_pane_t1_ParamLimits

0x7440,	// (0x00033400) cl_header_name_pane_t1

0x7461,	// (0x00033421) cl_header_name_pane_t2_ParamLimits

0x7461,	// (0x00033421) cl_header_name_pane_t2

0x74a3,	// (0x00033463) cl_header_name_pane_t3_ParamLimits

0x74a3,	// (0x00033463) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003bae5) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003bae5) cl_header_name_pane_t

0xca98,	// (0x00038a58) navi_pane_mv_g2_ParamLimits

0xede2,	// (0x0003ada2) field_vitu2_entry_pane_g1_ParamLimits

0xedee,	// (0x0003adae) field_vitu2_entry_pane_g2_ParamLimits

0xedfa,	// (0x0003adba) field_vitu2_entry_pane_g3_ParamLimits

0xedfa,	// (0x0003adba) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003b8db) field_vitu2_entry_pane_g_ParamLimits

0xbba3,	// (0x00037b63) cell_vitu2_itu_pane_g1_ParamLimits

0x1647,	// (0x0002d607) cell_vitu2_itu_pane_g2_ParamLimits

0x1647,	// (0x0002d607) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003b8e7) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003b8e7) cell_vitu2_itu_pane_g

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp05_ParamLimits

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp05

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp03

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp04

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp10_ParamLimits

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp10

0x6e7c,	// (0x00032e3c) bg_vkb2_func_pane_cp08

0x6e62,	// (0x00032e22) bg_vkb2_func_pane_cp06

0x6e70,	// (0x00032e30) bg_vkb2_func_pane_cp07

0x70ac,	// (0x0003306c) bg_vkb2_func_pane_cp11_ParamLimits

0x70ac,	// (0x0003306c) bg_vkb2_func_pane_cp11

0x70c1,	// (0x00033081) bg_vkb2_func_pane_cp12_ParamLimits

0x70c1,	// (0x00033081) bg_vkb2_func_pane_cp12

0xafea,	// (0x00036faa) bg_vkb2_func_pane_cp09

0xee37,	// (0x0003adf7) bg_vkb2_func_pane_g1

0xc2d6,	// (0x00038296) bg_vkb2_func_pane_g2

0xee3f,	// (0x0003adff) bg_vkb2_func_pane_g3

0xee47,	// (0x0003ae07) bg_vkb2_func_pane_g4

0xf0a7,	// (0x0003b067) bg_vkb2_func_pane_g5

0xee5f,	// (0x0003ae1f) bg_vkb2_func_pane_g6

0xee67,	// (0x0003ae27) bg_vkb2_func_pane_g7

0xee57,	// (0x0003ae17) bg_vkb2_func_pane_g8

0xc2b6,	// (0x00038276) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003baec) bg_vkb2_func_pane_g

0x7308,	// (0x000332c8) blid2_tripm_pane_g6_ParamLimits

0x7308,	// (0x000332c8) blid2_tripm_pane_g6

0xec84,	// (0x0003ac44) mp4_progress_pane_g1

0x7381,	// (0x00033341) blid2_tripm_values_pane_ParamLimits

0x7381,	// (0x00033341) blid2_tripm_values_pane

0x74d4,	// (0x00033494) blid2_tripm_values_pane_t1

0x74e2,	// (0x000334a2) blid2_tripm_values_pane_t2

0x74f0,	// (0x000334b0) blid2_tripm_values_pane_t3

0x74fe,	// (0x000334be) blid2_tripm_values_pane_t4

0x750c,	// (0x000334cc) blid2_tripm_values_pane_t5

0x751a,	// (0x000334da) blid2_tripm_values_pane_t6

0x7528,	// (0x000334e8) blid2_tripm_values_pane_t7

0x7536,	// (0x000334f6) blid2_tripm_values_pane_t8

0x7544,	// (0x00033504) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003baff) blid2_tripm_values_pane_t

0x26f2,	// (0x0002e6b2) call_video_pane_t1_ParamLimits

0x2710,	// (0x0002e6d0) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003b22e) call_video_pane_t_ParamLimits

0x3f03,	// (0x0002fec3) msg_header_pane_g1_ParamLimits

0xcc7a,	// (0x00038c3a) msg_header_pane_g2_ParamLimits

0xcc7a,	// (0x00038c3a) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003b448) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003b448) msg_header_pane_g

0xbeb8,	// (0x00037e78) main_clock2_pane_ParamLimits

0x57ee,	// (0x000317ae) grid_clock2_toolbar_pane_ParamLimits

0x57ee,	// (0x000317ae) grid_clock2_toolbar_pane

0x57ee,	// (0x000317ae) listscroll_clock2_pane_ParamLimits

0x57ee,	// (0x000317ae) listscroll_clock2_pane

0x58e5,	// (0x000318a5) main_clock2_pane_t3_ParamLimits

0x58e5,	// (0x000318a5) main_clock2_pane_t3

0x5909,	// (0x000318c9) main_clock2_pane_t4_ParamLimits

0x5909,	// (0x000318c9) main_clock2_pane_t4

0x7552,	// (0x00033512) cell_clock2_toolbar_pane

0x755a,	// (0x0003351a) cell_clock2_toolbar_pane_cp01

0x755a,	// (0x0003351a) cell_clock2_toolbar_pane_cp02

0x7562,	// (0x00033522) cell_clock2_toolbar_pane_cp03

0x756a,	// (0x0003352a) list_clock2_pane

0xc8a2,	// (0x00038862) scroll_pane_cp10

0x7572,	// (0x00033532) list_single_clock2_pane_ParamLimits

0x7572,	// (0x00033532) list_single_clock2_pane

0xc07d,	// (0x0003803d) list_highlight_pane_cp08

0x757f,	// (0x0003353f) list_single_clock2_pane_t1

0x758d,	// (0x0003354d) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003bb12) list_single_clock2_pane_t

0xafea,	// (0x00036faa) bg_button_pane_cp10

0x759b,	// (0x0003355b) cell_clock2_toolbar_pane_g1

0x067c,	// (0x0002c63c) aid_main_viewer_pane_g1_ParamLimits

0x067c,	// (0x0002c63c) aid_main_viewer_pane_g1

0x068a,	// (0x0002c64a) aid_main_viewer_pane_g2_ParamLimits

0x068a,	// (0x0002c64a) aid_main_viewer_pane_g2

0x3f11,	// (0x0002fed1) aid_main_viewer_pane_g3_ParamLimits

0x3f11,	// (0x0002fed1) aid_main_viewer_pane_g3

0x3f20,	// (0x0002fee0) aid_main_viewer_pane_g4_ParamLimits

0x3f20,	// (0x0002fee0) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003b459) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003b459) aid_main_viewer_pane_g

0x06be,	// (0x0002c67e) main_calc_pane_ParamLimits

0x06e4,	// (0x0002c6a4) main_dialer2_pane_ParamLimits

0xb068,	// (0x00037028) main_cam6_pane

0xb068,	// (0x00037028) main_vid6_pane

0x57fa,	// (0x000317ba) listscroll_gen_pane_cp06_ParamLimits

0x57fa,	// (0x000317ba) listscroll_gen_pane_cp06

0x592c,	// (0x000318ec) main_clock2_pane_t5_ParamLimits

0x592c,	// (0x000318ec) main_clock2_pane_t5

0x5986,	// (0x00031946) aid_call2_pane_cp10_ParamLimits

0x5998,	// (0x00031958) aid_call_pane_cp10_ParamLimits

0xc920,	// (0x000388e0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc920,	// (0x000388e0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x59aa,	// (0x0003196a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x59aa,	// (0x0003196a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc920,	// (0x000388e0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003b794) popup_clock_analogue_window_cp10_g_ParamLimits

0x59bc,	// (0x0003197c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e42,	// (0x00031e02) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e42,	// (0x00031e02) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003b87a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003b87a) cell_dialer2_keypad_pane_g

0x5e5e,	// (0x00031e1e) cell_dialer2_keypad_pane_t1

0x6345,	// (0x00032305) main_cset_text2_pane_ParamLimits

0x6345,	// (0x00032305) main_cset_text2_pane

0x6d59,	// (0x00032d19) area_vitu2_query_pane_g1_ParamLimits

0x6d65,	// (0x00032d25) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003ba2f) area_vitu2_query_pane_g_ParamLimits

0x6e3e,	// (0x00032dfe) area_vitu2_query_pane_t7_ParamLimits

0x6e3e,	// (0x00032dfe) area_vitu2_query_pane_t7

0x6e62,	// (0x00032e22) bg_button_pane_cp018_ParamLimits

0x6e70,	// (0x00032e30) bg_button_pane_cp021_ParamLimits

0x6e7c,	// (0x00032e3c) bg_button_pane_cp022_ParamLimits

0x6e7c,	// (0x00032e3c) bg_vkb2_func_pane_cp08_ParamLimits

0x6e62,	// (0x00032e22) bg_vkb2_func_pane_cp06_ParamLimits

0x6e70,	// (0x00032e30) bg_vkb2_func_pane_cp07_ParamLimits

0x6e8b,	// (0x00032e4b) input_focus_pane_cp09_ParamLimits

0xbc9e,	// (0x00037c5e) cam6_autofocus_pane_ParamLimits

0xbc9e,	// (0x00037c5e) cam6_autofocus_pane

0x18f1,	// (0x0002d8b1) cam6_image_uncrop_pane_ParamLimits

0x18f1,	// (0x0002d8b1) cam6_image_uncrop_pane

0x1900,	// (0x0002d8c0) cam6_indi_pane_ParamLimits

0x1900,	// (0x0002d8c0) cam6_indi_pane

0x1916,	// (0x0002d8d6) cam6_mode_pane_ParamLimits

0x1916,	// (0x0002d8d6) cam6_mode_pane

0x1928,	// (0x0002d8e8) cam6_timer_pane_ParamLimits

0x1928,	// (0x0002d8e8) cam6_timer_pane

0x1934,	// (0x0002d8f4) cam6_zoom_pane_ParamLimits

0x1934,	// (0x0002d8f4) cam6_zoom_pane

0x75a3,	// (0x00033563) cam6_mode_pane_g1_ParamLimits

0x75a3,	// (0x00033563) cam6_mode_pane_g1

0x75b3,	// (0x00033573) cam6_mode_pane_g2_ParamLimits

0x75b3,	// (0x00033573) cam6_mode_pane_g2

0x75c3,	// (0x00033583) cam6_mode_pane_g3_ParamLimits

0x75c3,	// (0x00033583) cam6_mode_pane_g3

0x75d3,	// (0x00033593) cam6_mode_pane_g4_ParamLimits

0x75d3,	// (0x00033593) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003bb17) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003bb17) cam6_mode_pane_g

0xef0d,	// (0x0003aecd) bg_tb_trans_pane_cp08_ParamLimits

0xef0d,	// (0x0003aecd) bg_tb_trans_pane_cp08

0x75e3,	// (0x000335a3) cam6_battery_pane_ParamLimits

0x75e3,	// (0x000335a3) cam6_battery_pane

0x75f9,	// (0x000335b9) cam6_indi_pane_g1_ParamLimits

0x75f9,	// (0x000335b9) cam6_indi_pane_g1

0x760b,	// (0x000335cb) cam6_indi_pane_g2_ParamLimits

0x760b,	// (0x000335cb) cam6_indi_pane_g2

0x761d,	// (0x000335dd) cam6_indi_pane_g3_ParamLimits

0x761d,	// (0x000335dd) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003bb20) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003bb20) cam6_indi_pane_g

0x762f,	// (0x000335ef) cam6_indi_pane_t1_ParamLimits

0x762f,	// (0x000335ef) cam6_indi_pane_t1

0x7655,	// (0x00033615) cam6_autofocus_pane_g1

0x765d,	// (0x0003361d) cam6_autofocus_pane_g2

0x7665,	// (0x00033625) cam6_autofocus_pane_g3

0x766d,	// (0x0003362d) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003bb27) cam6_autofocus_pane_g

0x7675,	// (0x00033635) cam6_timer_pane_g1

0x767d,	// (0x0003363d) cam6_timer_pane_t1

0x768b,	// (0x0003364b) cam6_zoom_cont_pane

0x7693,	// (0x00033653) cam6_zoom_pane_g1

0x769b,	// (0x0003365b) cam6_zoom_pane_g2

0x76a3,	// (0x00033663) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003bb30) cam6_zoom_pane_g

0xe38d,	// (0x0003a34d) cam6_battery_pane_g1

0xe38d,	// (0x0003a34d) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003b69c) cam6_battery_pane_g

0x76ab,	// (0x0003366b) cam6_zoom_cont_pane_g1

0x76b4,	// (0x00033674) cam6_zoom_cont_pane_g2

0x76bd,	// (0x0003367d) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003bb37) cam6_zoom_cont_pane_g

0x76da,	// (0x0003369a) cam6_mode_pane_cp_ParamLimits

0x76da,	// (0x0003369a) cam6_mode_pane_cp

0x76ec,	// (0x000336ac) cam6_zoom_pane_cp_ParamLimits

0x76ec,	// (0x000336ac) cam6_zoom_pane_cp

0x76f8,	// (0x000336b8) vid6_image_uncrop_cif_pane_ParamLimits

0x76f8,	// (0x000336b8) vid6_image_uncrop_cif_pane

0x7708,	// (0x000336c8) vid6_image_uncrop_nhd_pane_ParamLimits

0x7708,	// (0x000336c8) vid6_image_uncrop_nhd_pane

0x7727,	// (0x000336e7) vid6_image_uncrop_vga_pane_ParamLimits

0x7727,	// (0x000336e7) vid6_image_uncrop_vga_pane

0x7736,	// (0x000336f6) vid6_image_uncrop_wvga_pane_ParamLimits

0x7736,	// (0x000336f6) vid6_image_uncrop_wvga_pane

0x7745,	// (0x00033705) vid6_indi_pane_ParamLimits

0x7745,	// (0x00033705) vid6_indi_pane

0xef0d,	// (0x0003aecd) bg_tb_trans_pane_cp09_ParamLimits

0xef0d,	// (0x0003aecd) bg_tb_trans_pane_cp09

0x775d,	// (0x0003371d) cam6_battery_pane_cp_ParamLimits

0x775d,	// (0x0003371d) cam6_battery_pane_cp

0x7769,	// (0x00033729) vid6_indi_pane_g1_ParamLimits

0x7769,	// (0x00033729) vid6_indi_pane_g1

0x777b,	// (0x0003373b) vid6_indi_pane_g2_ParamLimits

0x777b,	// (0x0003373b) vid6_indi_pane_g2

0x778d,	// (0x0003374d) vid6_indi_pane_g3_ParamLimits

0x778d,	// (0x0003374d) vid6_indi_pane_g3

0x77a2,	// (0x00033762) vid6_indi_pane_g4_ParamLimits

0x77a2,	// (0x00033762) vid6_indi_pane_g4

0x77b7,	// (0x00033777) vid6_indi_pane_g5_ParamLimits

0x77b7,	// (0x00033777) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003bb3e) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003bb3e) vid6_indi_pane_g

0x77d1,	// (0x00033791) vid6_indi_pane_t1_ParamLimits

0x77d1,	// (0x00033791) vid6_indi_pane_t1

0x77e7,	// (0x000337a7) vid6_indi_pane_t2_ParamLimits

0x77e7,	// (0x000337a7) vid6_indi_pane_t2

0x780f,	// (0x000337cf) vid6_indi_pane_t3_ParamLimits

0x780f,	// (0x000337cf) vid6_indi_pane_t3

0x7837,	// (0x000337f7) vid6_indi_pane_t4_ParamLimits

0x7837,	// (0x000337f7) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003bb49) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003bb49) vid6_indi_pane_t

0x785b,	// (0x0003381b) wait_bar_pane_cp08

0x786a,	// (0x0003382a) main_cset_text2_pane_t1_ParamLimits

0x786a,	// (0x0003382a) main_cset_text2_pane_t1

0x76c5,	// (0x00033685) listscroll_gen_pane_cp06_t1_ParamLimits

0x76c5,	// (0x00033685) listscroll_gen_pane_cp06_t1

0xb068,	// (0x00037028) main_cam6_set_pane

0xbac4,	// (0x00037a84) bg_tb_trans_pane_cp06_ParamLimits

0xbada,	// (0x00037a9a) cam4_indicators_pane_g1_ParamLimits

0xbaeb,	// (0x00037aab) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003b8b7) cam4_indicators_pane_g_ParamLimits

0xbb09,	// (0x00037ac9) cam4_indicators_pane_t1_ParamLimits

0xb05a,	// (0x0003701a) bg_tb_trans_pane_cp07_ParamLimits

0xbb35,	// (0x00037af5) vid4_indicators_pane_g1_ParamLimits

0xbb49,	// (0x00037b09) vid4_indicators_pane_g2_ParamLimits

0xbb5d,	// (0x00037b1d) vid4_indicators_pane_g3_ParamLimits

0xbb6e,	// (0x00037b2e) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003b8c9) vid4_indicators_pane_g_ParamLimits

0xbb8c,	// (0x00037b4c) vid4_indicators_pane_t1_ParamLimits

0xbc3c,	// (0x00037bfc) vid4_progress_pane_g1_ParamLimits

0xbc4c,	// (0x00037c0c) vid4_progress_pane_g2_ParamLimits

0x18b4,	// (0x0002d874) vid4_progress_pane_g3_ParamLimits

0xbc5c,	// (0x00037c1c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003ba7a) vid4_progress_pane_g_ParamLimits

0x18c6,	// (0x0002d886) vid4_progress_pane_t1_ParamLimits

0xbc74,	// (0x00037c34) vid4_progress_pane_t2_ParamLimits

0xbc89,	// (0x00037c49) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003ba85) vid4_progress_pane_t_ParamLimits

0x18de,	// (0x0002d89e) wait_bar_pane_cp07_ParamLimits

0x7887,	// (0x00033847) main_cam6_set_pane_g2_ParamLimits

0x7887,	// (0x00033847) main_cam6_set_pane_g2

0x78ab,	// (0x0003386b) main_cset6_listscroll_pane_ParamLimits

0x78ab,	// (0x0003386b) main_cset6_listscroll_pane

0x78cb,	// (0x0003388b) main_cset6_slider_pane_ParamLimits

0x78cb,	// (0x0003388b) main_cset6_slider_pane

0x78e1,	// (0x000338a1) main_cset6_text2_pane_ParamLimits

0x78e1,	// (0x000338a1) main_cset6_text2_pane

0x78ef,	// (0x000338af) main_cset6_text_pane

0x78f7,	// (0x000338b7) main_cset_list_pane_copy1_ParamLimits

0x78f7,	// (0x000338b7) main_cset_list_pane_copy1

0x7907,	// (0x000338c7) scroll_pane_cp028_copy1

0x7910,	// (0x000338d0) cset_list_set_pane_copy1

0x7921,	// (0x000338e1) aid_position_infowindow_above_copy1

0x7929,	// (0x000338e9) aid_position_infowindow_below_copy1

0x7931,	// (0x000338f1) cset_list_set_pane_g1_copy1

0x7939,	// (0x000338f9) cset_list_set_pane_g3_copy1_ParamLimits

0x7939,	// (0x000338f9) cset_list_set_pane_g3_copy1

0x7948,	// (0x00033908) cset_list_set_pane_t1_copy1_ParamLimits

0x7948,	// (0x00033908) cset_list_set_pane_t1_copy1

0xc93a,	// (0x000388fa) list_highlight_pane_cp021_copy1_ParamLimits

0xc93a,	// (0x000388fa) list_highlight_pane_cp021_copy1

0x795d,	// (0x0003391d) cset6_slider_pane_ParamLimits

0x795d,	// (0x0003391d) cset6_slider_pane

0x7989,	// (0x00033949) main_cset6_slider_pane_g1_ParamLimits

0x7989,	// (0x00033949) main_cset6_slider_pane_g1

0x79b1,	// (0x00033971) main_cset6_slider_pane_g2_ParamLimits

0x79b1,	// (0x00033971) main_cset6_slider_pane_g2

0x79d9,	// (0x00033999) main_cset6_slider_pane_g3_ParamLimits

0x79d9,	// (0x00033999) main_cset6_slider_pane_g3

0x79e5,	// (0x000339a5) main_cset6_slider_pane_g4_ParamLimits

0x79e5,	// (0x000339a5) main_cset6_slider_pane_g4

0x79f1,	// (0x000339b1) main_cset6_slider_pane_g5_ParamLimits

0x79f1,	// (0x000339b1) main_cset6_slider_pane_g5

0xef82,	// (0x0003af42) main_cset6_slider_pane_g7_ParamLimits

0xef82,	// (0x0003af42) main_cset6_slider_pane_g7

0xef8e,	// (0x0003af4e) main_cset6_slider_pane_g8_ParamLimits

0xef8e,	// (0x0003af4e) main_cset6_slider_pane_g8

0x63f2,	// (0x000323b2) main_cset6_slider_pane_g9_ParamLimits

0x63f2,	// (0x000323b2) main_cset6_slider_pane_g9

0x63fe,	// (0x000323be) main_cset6_slider_pane_g10_ParamLimits

0x63fe,	// (0x000323be) main_cset6_slider_pane_g10

0x640a,	// (0x000323ca) main_cset6_slider_pane_g11_ParamLimits

0x640a,	// (0x000323ca) main_cset6_slider_pane_g11

0x6416,	// (0x000323d6) main_cset6_slider_pane_g12_ParamLimits

0x6416,	// (0x000323d6) main_cset6_slider_pane_g12

0x6422,	// (0x000323e2) main_cset6_slider_pane_g13_ParamLimits

0x6422,	// (0x000323e2) main_cset6_slider_pane_g13

0x642e,	// (0x000323ee) main_cset6_slider_pane_g14_ParamLimits

0x642e,	// (0x000323ee) main_cset6_slider_pane_g14

0x79fd,	// (0x000339bd) main_cset6_slider_pane_g15_ParamLimits

0x79fd,	// (0x000339bd) main_cset6_slider_pane_g15

0x6452,	// (0x00032412) main_cset6_slider_pane_g16_ParamLimits

0x6452,	// (0x00032412) main_cset6_slider_pane_g16

0x645e,	// (0x0003241e) main_cset6_slider_pane_g17_ParamLimits

0x645e,	// (0x0003241e) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003bb52) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003bb52) main_cset6_slider_pane_g

0x7a2d,	// (0x000339ed) main_cset6_slider_pane_t1_ParamLimits

0x7a2d,	// (0x000339ed) main_cset6_slider_pane_t1

0x7a6e,	// (0x00033a2e) main_cset6_slider_pane_t2_ParamLimits

0x7a6e,	// (0x00033a2e) main_cset6_slider_pane_t2

0x7a99,	// (0x00033a59) main_cset6_slider_pane_t3_ParamLimits

0x7a99,	// (0x00033a59) main_cset6_slider_pane_t3

0x7ac4,	// (0x00033a84) main_cset6_slider_pane_t4_ParamLimits

0x7ac4,	// (0x00033a84) main_cset6_slider_pane_t4

0x7aef,	// (0x00033aaf) main_cset6_slider_pane_t5_ParamLimits

0x7aef,	// (0x00033aaf) main_cset6_slider_pane_t5

0x7b1a,	// (0x00033ada) main_cset6_slider_pane_t7_ParamLimits

0x7b1a,	// (0x00033ada) main_cset6_slider_pane_t7

0x7b50,	// (0x00033b10) main_cset6_slider_pane_t8_ParamLimits

0x7b50,	// (0x00033b10) main_cset6_slider_pane_t8

0x7b74,	// (0x00033b34) main_cset6_slider_pane_t9_ParamLimits

0x7b74,	// (0x00033b34) main_cset6_slider_pane_t9

0x7b98,	// (0x00033b58) main_cset6_slider_pane_t10_ParamLimits

0x7b98,	// (0x00033b58) main_cset6_slider_pane_t10

0x7bbc,	// (0x00033b7c) main_cset6_slider_pane_t11_ParamLimits

0x7bbc,	// (0x00033b7c) main_cset6_slider_pane_t11

0x7be0,	// (0x00033ba0) main_cset6_slider_pane_t14_ParamLimits

0x7be0,	// (0x00033ba0) main_cset6_slider_pane_t14

0x7c19,	// (0x00033bd9) main_cset6_slider_pane_t15_ParamLimits

0x7c19,	// (0x00033bd9) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003bb77) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003bb77) main_cset6_slider_pane_t

0xf0af,	// (0x0003b06f) cset_slider_pane_g1_copy1

0xf0b8,	// (0x0003b078) cset_slider_pane_g2_copy1

0xf0c1,	// (0x0003b081) cset_slider_pane_g3_copy1

0xafea,	// (0x00036faa) bg_popup_sub_pane_cp011_copy1

0x7d23,	// (0x00033ce3) main_cset_text_pane_g1_copy1

0x6a0c,	// (0x000329cc) main_cset_text_pane_t1_copy1

0x6a1a,	// (0x000329da) main_cset_text_pane_t2_copy1

0x6a28,	// (0x000329e8) main_cset_text_pane_t3_copy1

0x6a36,	// (0x000329f6) main_cset_text_pane_t4_copy1

0x6a44,	// (0x00032a04) main_cset_text_pane_t5_copy1

0x7d2b,	// (0x00033ceb) main_cset_text_pane_t6_copy1

0x7d39,	// (0x00033cf9) main_cset_text_pane_t7_copy1

0x786a,	// (0x0003382a) main_cset_text2_pane_t1_copy1

0xb05a,	// (0x0003701a) main_ncimui_pane

0x092e,	// (0x0002c8ee) popup_query_ncimui_window_ParamLimits

0x092e,	// (0x0002c8ee) popup_query_ncimui_window

0xe655,	// (0x0003a615) field_cale_ev2_pane_g4_ParamLimits

0xe655,	// (0x0003a615) field_cale_ev2_pane_g4

0x5dc2,	// (0x00031d82) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5dc2,	// (0x00031d82) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003b855) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003b855) cell_video_dialer_keypad_pane_g

0x5dda,	// (0x00031d9a) cell_video_dialer_keypad_pane_t1

0xafea,	// (0x00036faa) bg_popup_window_pane_cp012

0xc76f,	// (0x0003872f) heading_pane_cp06

0x7e8e,	// (0x00033e4e) ncim_query_content_pane

0xafea,	// (0x00036faa) bg_popup_heading_pane_cp01

0x7e96,	// (0x00033e56) ncim_heading_pane_t1

0x7ea4,	// (0x00033e64) ncim_indicator_popup_pane

0x7eb6,	// (0x00033e76) ncim_query_button_pane

0x7ed6,	// (0x00033e96) ncim_query_content_pane_t1

0x7ee8,	// (0x00033ea8) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003bbbb) ncim_query_content_pane_t

0x7f9a,	// (0x00033f5a) ncim_query_list_pane

0x7fac,	// (0x00033f6c) ncim_query_popup_pane

0x7ea4,	// (0x00033e64) ncim_indicator_popup_pane_ParamLimits

0x7ebe,	// (0x00033e7e) ncim_query_content_pane_g1_ParamLimits

0x7ebe,	// (0x00033e7e) ncim_query_content_pane_g1

0x7ed6,	// (0x00033e96) ncim_query_content_pane_t1_ParamLimits

0x7ee8,	// (0x00033ea8) ncim_query_content_pane_t2_ParamLimits

0x7efa,	// (0x00033eba) ncim_query_content_pane_t3_ParamLimits

0x7efa,	// (0x00033eba) ncim_query_content_pane_t3

0x7f22,	// (0x00033ee2) ncim_query_content_pane_t4_ParamLimits

0x7f22,	// (0x00033ee2) ncim_query_content_pane_t4

0x7f4a,	// (0x00033f0a) ncim_query_content_pane_t5_ParamLimits

0x7f4a,	// (0x00033f0a) ncim_query_content_pane_t5

0x7f72,	// (0x00033f32) ncim_query_content_pane_t6_ParamLimits

0x7f72,	// (0x00033f32) ncim_query_content_pane_t6

0xfbfb,	// (0x0003bbbb) ncim_query_content_pane_t_ParamLimits

0x7f9a,	// (0x00033f5a) ncim_query_list_pane_ParamLimits

0x7fac,	// (0x00033f6c) ncim_query_popup_pane_ParamLimits

0x7fc0,	// (0x00033f80) wait_bar_pane_cp04

0xafea,	// (0x00036faa) input_focus_pane_cp011

0x7fc8,	// (0x00033f88) ncim_query_popup_pane_t1

0x7fd6,	// (0x00033f96) ncim_list_query_list_pane_ParamLimits

0x7fd6,	// (0x00033f96) ncim_list_query_list_pane

0xafea,	// (0x00036faa) bg_button_pane_cp027

0x7fe3,	// (0x00033fa3) ncim_query_button_pane_g1

0xafea,	// (0x00036faa) list_highlight_pane_cp012

0x7fed,	// (0x00033fad) ncim_list_query_list_pane_g1

0x7ff5,	// (0x00033fb5) ncim_list_query_list_pane_t1

0xbafa,	// (0x00037aba) cam4_indicators_pane_g3_ParamLimits

0xbafa,	// (0x00037aba) cam4_indicators_pane_g3

0xbb7a,	// (0x00037b3a) vid4_indicators_pane_g5_ParamLimits

0xbb7a,	// (0x00037b3a) vid4_indicators_pane_g5

0xbc68,	// (0x00037c28) vid4_progress_pane_g5_ParamLimits

0xbc68,	// (0x00037c28) vid4_progress_pane_g5

0x7d79,	// (0x00033d39) main_ncimui_pane_g1

0x7de2,	// (0x00033da2) ncimui_group_query_pane_ParamLimits

0x7de2,	// (0x00033da2) ncimui_group_query_pane

0x7e2a,	// (0x00033dea) ncimui_list_pane_ParamLimits

0x7e2a,	// (0x00033dea) ncimui_list_pane

0x7e51,	// (0x00033e11) ncimui_text_pane_ParamLimits

0x7e51,	// (0x00033e11) ncimui_text_pane

0x8003,	// (0x00033fc3) ncimui_text_pane_t1_ParamLimits

0x8003,	// (0x00033fc3) ncimui_text_pane_t1

0x8021,	// (0x00033fe1) ncimui_list_single_graphic_pane_ParamLimits

0x8021,	// (0x00033fe1) ncimui_list_single_graphic_pane

0x8031,	// (0x00033ff1) ncimui_query_pane_ParamLimits

0x8031,	// (0x00033ff1) ncimui_query_pane

0xafea,	// (0x00036faa) list_highlight_pane_cp013

0x8044,	// (0x00034004) ncim_list_query_list_pane_t1_copy1

0x7fed,	// (0x00033fad) ncim_list_single_graphic_pane_g1

0x8052,	// (0x00034012) ncim_query_button_pane_cp01

0x805e,	// (0x0003401e) ncim_query_entry_pane_ParamLimits

0x805e,	// (0x0003401e) ncim_query_entry_pane

0x8071,	// (0x00034031) ncimui_query_pane_g1

0x807d,	// (0x0003403d) ncimui_query_pane_t1_ParamLimits

0x807d,	// (0x0003403d) ncimui_query_pane_t1

0xc93a,	// (0x000388fa) input_focus_pane_cp012

0x8096,	// (0x00034056) ncim_query_entry_pane_t1

0xbeb8,	// (0x00037e78) main_im_pane_ParamLimits

0xb05a,	// (0x0003701a) main_mobtv_pane_ParamLimits

0xb05a,	// (0x0003701a) main_mobtv_pane

0x7a15,	// (0x000339d5) main_cset6_slider_pane_g18_ParamLimits

0x7a15,	// (0x000339d5) main_cset6_slider_pane_g18

0x7a21,	// (0x000339e1) main_cset6_slider_pane_g19_ParamLimits

0x7a21,	// (0x000339e1) main_cset6_slider_pane_g19

0x80a8,	// (0x00034068) bg_main_mobtv_pane_ParamLimits

0x80a8,	// (0x00034068) bg_main_mobtv_pane

0x80b6,	// (0x00034076) main_mobtv_info_pane

0x80bf,	// (0x0003407f) main_mobtv_loading_pane_ParamLimits

0x80bf,	// (0x0003407f) main_mobtv_loading_pane

0x80cc,	// (0x0003408c) main_mobtv_pg_channel_list_pane

0x80d6,	// (0x00034096) main_mobtv_pg_hdr_pane

0x80df,	// (0x0003409f) main_mobtv_programe_curr_pane_ParamLimits

0x80df,	// (0x0003409f) main_mobtv_programe_curr_pane

0x80ec,	// (0x000340ac) main_mobtv_programe_next_pane_ParamLimits

0x80ec,	// (0x000340ac) main_mobtv_programe_next_pane

0x80f9,	// (0x000340b9) popup_mobtv_noti_window

0xe38d,	// (0x0003a34d) main_tv_pg_hdr_pane_g1

0x8101,	// (0x000340c1) main_tv_pg_hdr_pane_g2

0x8109,	// (0x000340c9) main_tv_pg_hdr_pane_g3

0x8111,	// (0x000340d1) main_tv_pg_hdr_pane_g4

0x8119,	// (0x000340d9) main_tv_pg_hdr_pane_g5

0x8123,	// (0x000340e3) main_tv_pg_hdr_pane_g6

0x812d,	// (0x000340ed) main_tv_pg_hdr_pane_g7

0x8137,	// (0x000340f7) main_tv_pg_hdr_pane_g8

0x8141,	// (0x00034101) main_tv_pg_hdr_pane_g9

0x814b,	// (0x0003410b) main_tv_pg_hdr_pane_g10

0x8155,	// (0x00034115) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003bbc8) main_tv_pg_hdr_pane_g

0x815f,	// (0x0003411f) main_tv_pg_hdr_pane_t1

0x816d,	// (0x0003412d) main_tv_pg_hdr_pane_t2

0x817b,	// (0x0003413b) main_tv_pg_hdr_pane_t3

0x818b,	// (0x0003414b) main_tv_pg_hdr_pane_t4

0x819b,	// (0x0003415b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003bbdf) main_tv_pg_hdr_pane_t

0x81ab,	// (0x0003416b) single_mobtv_pg_channel_pane_ParamLimits

0x81ab,	// (0x0003416b) single_mobtv_pg_channel_pane

0x81bd,	// (0x0003417d) single_mobtv_pg_channel_table_pane

0x81c6,	// (0x00034186) single_mobtv_pg_channel_thumb_pane

0x81cf,	// (0x0003418f) single_tv_pg_channel_pane_g1

0x81d8,	// (0x00034198) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003bbea) single_tv_pg_channel_pane_g

0xe5f0,	// (0x0003a5b0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe5f0,	// (0x0003a5b0) bg_single_mobtv_pg_channel_thumb_pane

0x81e1,	// (0x000341a1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x81e1,	// (0x000341a1) single_mobtv_pg_channel_thumb_pane_g1

0x81ef,	// (0x000341af) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x81ef,	// (0x000341af) single_mobtv_pg_channel_thumb_pane_g2

0x81fb,	// (0x000341bb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x81fb,	// (0x000341bb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003bbef) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003bbef) single_mobtv_pg_channel_thumb_pane_g

0x8207,	// (0x000341c7) single_mobtv_pg_channel_thumb_pane_t1

0x8215,	// (0x000341d5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003bbf6) single_mobtv_pg_channel_thumb_pane_t

0xe38d,	// (0x0003a34d) bg_single_mobtv_pg_channel_table_pane_g1

0xe38d,	// (0x0003a34d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003b69c) bg_single_mobtv_pg_channel_table_pane_g

0x8223,	// (0x000341e3) single_mobtv_pg_channel_table_pane_t1

0x8231,	// (0x000341f1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003bbfb) single_mobtv_pg_channel_table_pane_t

0x8247,	// (0x00034207) main_mobtv_info_pane_g1_ParamLimits

0x8247,	// (0x00034207) main_mobtv_info_pane_g1

0x8265,	// (0x00034225) main_mobtv_info_pane_t1_ParamLimits

0x8265,	// (0x00034225) main_mobtv_info_pane_t1

0x82dd,	// (0x0003429d) main_mobtv_info_pane_t2_ParamLimits

0x82dd,	// (0x0003429d) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003bc05) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003bc05) main_mobtv_info_pane_t

0x836c,	// (0x0003432c) wait_bar_pane_cp05

0x837e,	// (0x0003433e) main_mobtv_loading_pane_g1_ParamLimits

0x837e,	// (0x0003433e) main_mobtv_loading_pane_g1

0x8391,	// (0x00034351) main_mobtv_loading_pane_g2_ParamLimits

0x8391,	// (0x00034351) main_mobtv_loading_pane_g2

0x839d,	// (0x0003435d) main_mobtv_loading_pane_g3_ParamLimits

0x839d,	// (0x0003435d) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003bc0c) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003bc0c) main_mobtv_loading_pane_g

0x83b0,	// (0x00034370) main_mobtv_loading_pane_t1_ParamLimits

0x83b0,	// (0x00034370) main_mobtv_loading_pane_t1

0x83c8,	// (0x00034388) main_mobtv_loading_pane_t2_ParamLimits

0x83c8,	// (0x00034388) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003bc13) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003bc13) main_mobtv_loading_pane_t

0x83ec,	// (0x000343ac) wait_bar_pane_cp06_ParamLimits

0x83ec,	// (0x000343ac) wait_bar_pane_cp06

0x83fb,	// (0x000343bb) main_mobtv_programe_curr_pane_t1

0x8409,	// (0x000343c9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003bc18) main_mobtv_programe_curr_pane_t

0x8417,	// (0x000343d7) main_mobtv_programe_next_pane_t1

0x8425,	// (0x000343e5) main_mobtv_programe_next_pane_t2

0x8433,	// (0x000343f3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003bc1d) main_mobtv_programe_next_pane_t

0xafea,	// (0x00036faa) bg_popup_mobtv_noti_window_pane

0x8441,	// (0x00034401) popup_mobtv_noti_window_g1

0x8449,	// (0x00034409) popup_mobtv_noti_window_t1

0x8457,	// (0x00034417) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003bc24) popup_mobtv_noti_window_t

0xe38d,	// (0x0003a34d) bg_popup_mobtv_noti_window_pane_g1

0xb068,	// (0x00037028) sc_clock_pane

0xb068,	// (0x00037028) main_fs_bigclock_pane

0x736b,	// (0x0003332b) blid2_tripm_pane_t4_ParamLimits

0x736b,	// (0x0003332b) blid2_tripm_pane_t4

0x8465,	// (0x00034425) sc_clock_pane_g1_ParamLimits

0x8465,	// (0x00034425) sc_clock_pane_g1

0x8477,	// (0x00034437) sc_clock_pane_t1_ParamLimits

0x8477,	// (0x00034437) sc_clock_pane_t1

0x8499,	// (0x00034459) sc_clock_pane_t2_ParamLimits

0x8499,	// (0x00034459) sc_clock_pane_t2

0x84b1,	// (0x00034471) sc_clock_pane_t3_ParamLimits

0x84b1,	// (0x00034471) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003bc29) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003bc29) sc_clock_pane_t

0xa08d,	// (0x0003604d) main_fs_bigclock_indicator_pane_ParamLimits

0xa08d,	// (0x0003604d) main_fs_bigclock_indicator_pane

0x8557,	// (0x00034517) main_fs_bigclock_pane_g1_ParamLimits

0x8557,	// (0x00034517) main_fs_bigclock_pane_g1

0xa099,	// (0x00036059) main_fs_bigclock_pane_t1_ParamLimits

0xa099,	// (0x00036059) main_fs_bigclock_pane_t1

0xa0ab,	// (0x0003606b) main_fs_bigclock_pane_t2_ParamLimits

0xa0ab,	// (0x0003606b) main_fs_bigclock_pane_t2

0xa0bf,	// (0x0003607f) main_fs_bigclock_pane_t3_ParamLimits

0xa0bf,	// (0x0003607f) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003be2e) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003be2e) main_fs_bigclock_pane_t

0xa0d1,	// (0x00036091) main_fs_bigclock_indicator_pane_g1

0x7eca,	// (0x00033e8a) ncim_query_content_pane_g2_ParamLimits

0x7eca,	// (0x00033e8a) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003bbb6) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003bbb6) ncim_query_content_pane_g

0x84ca,	// (0x0003448a) sc_clock_pane_t4_ParamLimits

0x84ca,	// (0x0003448a) sc_clock_pane_t4

0xb05a,	// (0x0003701a) main_radioblah_pane

0xed6d,	// (0x0003ad2d) cell_call4_button_pane_t1_copy1_ParamLimits

0xed6d,	// (0x0003ad2d) cell_call4_button_pane_t1_copy1

0x7d91,	// (0x00033d51) main_ncimui_pane_t1_ParamLimits

0x7d91,	// (0x00033d51) main_ncimui_pane_t1

0x7dab,	// (0x00033d6b) main_ncimui_pane_t2_ParamLimits

0x7dab,	// (0x00033d6b) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003bbaf) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003bbaf) main_ncimui_pane_t

0x86db,	// (0x0003469b) main_radioblah_anim_pane_ParamLimits

0x86db,	// (0x0003469b) main_radioblah_anim_pane

0x86ec,	// (0x000346ac) main_radioblah_info_pane_ParamLimits

0x86ec,	// (0x000346ac) main_radioblah_info_pane

0x8712,	// (0x000346d2) main_radioblah_pane_t1_ParamLimits

0x8712,	// (0x000346d2) main_radioblah_pane_t1

0x872e,	// (0x000346ee) main_radioblah_pane_t2_ParamLimits

0x872e,	// (0x000346ee) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003bc4a) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003bc4a) main_radioblah_pane_t

0x8776,	// (0x00034736) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8776,	// (0x00034736) main_radioblah_rocker_ctrl_pane

0x87ce,	// (0x0003478e) main_radioblah_info_pane_t1_ParamLimits

0x87ce,	// (0x0003478e) main_radioblah_info_pane_t1

0x8808,	// (0x000347c8) main_radioblah_info_pane_t2_ParamLimits

0x8808,	// (0x000347c8) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003bc53) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003bc53) main_radioblah_info_pane_t

0xe38d,	// (0x0003a34d) main_radioblah_rocker_ctrl_pane_g1

0x88b8,	// (0x00034878) main_radioblah_rocker_ctrl_pane_g2

0x88c0,	// (0x00034880) main_radioblah_rocker_ctrl_pane_g3

0x88c8,	// (0x00034888) main_radioblah_rocker_ctrl_pane_g4

0x88d0,	// (0x00034890) main_radioblah_rocker_ctrl_pane_g5

0x88d8,	// (0x00034898) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003bc5c) main_radioblah_rocker_ctrl_pane_g

0x786a,	// (0x0003382a) main_cset_text2_pane_t1_copy1_ParamLimits

0xbabc,	// (0x00037a7c) cam4_image_uncrop_qvga_pane

0xbb23,	// (0x00037ae3) vid4_image_uncrop_qcif_pane

0xbc9e,	// (0x00037c5e) cam6_image_uncrop_qvga_pane_ParamLimits

0xbc9e,	// (0x00037c5e) cam6_image_uncrop_qvga_pane

0x7717,	// (0x000336d7) vid6_image_uncrop_qcif_pane_ParamLimits

0x7717,	// (0x000336d7) vid6_image_uncrop_qcif_pane

0xafea,	// (0x00036faa) bg_popup_preview_window_pane_cp03

0x7d47,	// (0x00033d07) list_cset_text2_pane

0x7d4f,	// (0x00033d0f) main_cset6_text2_pane_g1

0x7d57,	// (0x00033d17) main_cset6_text2_pane_t1

0x88e0,	// (0x000348a0) list_cset_text2_pane_t1_ParamLimits

0x88e0,	// (0x000348a0) list_cset_text2_pane_t1

0xb05a,	// (0x0003701a) main_radioblah_pane_ParamLimits

0x8358,	// (0x00034318) main_mobtv_info_pane_t3_ParamLimits

0x8358,	// (0x00034318) main_mobtv_info_pane_t3

0x8700,	// (0x000346c0) main_radioblah_pane_g1

0x879e,	// (0x0003475e) main_radioblah_info_pane_g1

0x885d,	// (0x0003481d) main_radioblah_info_pane_t3_ParamLimits

0x885d,	// (0x0003481d) main_radioblah_info_pane_t3

0x3561,	// (0x0002f521) highlight_cell_cale_month_pane_ParamLimits

0x3561,	// (0x0002f521) highlight_cell_cale_month_pane

0xb068,	// (0x00037028) main_phob_fisheye_pane

0xe6f8,	// (0x0003a6b8) scroll_pane_cp0031_ParamLimits

0xe6f8,	// (0x0003a6b8) scroll_pane_cp0031

0x785b,	// (0x0003381b) wait_bar_pane_cp08_ParamLimits

0x7910,	// (0x000338d0) cset_list_set_pane_copy1_ParamLimits

0x88f9,	// (0x000348b9) highlight_cell_cale_month_pane_g1

0x8901,	// (0x000348c1) highlight_cell_cale_month_pane_t1

0x6f60,	// (0x00032f20) list_gen_pane_cp01

0xef6d,	// (0x0003af2d) scroll_pane_01

0x890f,	// (0x000348cf) list_single_double_fisheye_pane

0x8918,	// (0x000348d8) list_double_fisheye_pane_g1_ParamLimits

0x8918,	// (0x000348d8) list_double_fisheye_pane_g1

0x8924,	// (0x000348e4) list_double_fisheye_pane_g2_ParamLimits

0x8924,	// (0x000348e4) list_double_fisheye_pane_g2

0x8938,	// (0x000348f8) list_double_fisheye_pane_g3_ParamLimits

0x8938,	// (0x000348f8) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003bc69) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003bc69) list_double_fisheye_pane_g

0x8961,	// (0x00034921) list_double_fisheye_pane_t1_ParamLimits

0x8961,	// (0x00034921) list_double_fisheye_pane_t1

0x897c,	// (0x0003493c) list_double_fisheye_pane_t2_ParamLimits

0x897c,	// (0x0003493c) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003bc74) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003bc74) list_double_fisheye_pane_t

0xb068,	// (0x00037028) main_call5_pane

0x84f5,	// (0x000344b5) sc_swipe_pane_ParamLimits

0x84f5,	// (0x000344b5) sc_swipe_pane

0x89b1,	// (0x00034971) call5_image_pane_ParamLimits

0x89b1,	// (0x00034971) call5_image_pane

0x89ce,	// (0x0003498e) call5_swipe_1_pane_ParamLimits

0x89ce,	// (0x0003498e) call5_swipe_1_pane

0x89e1,	// (0x000349a1) call5_swipe_2_pane_ParamLimits

0x89e1,	// (0x000349a1) call5_swipe_2_pane

0x8a0c,	// (0x000349cc) popup_call5_audio_first_window_ParamLimits

0x8a0c,	// (0x000349cc) popup_call5_audio_first_window

0xe5f0,	// (0x0003a5b0) call5_swipe_1_pane_g1_ParamLimits

0xe5f0,	// (0x0003a5b0) call5_swipe_1_pane_g1

0x8a1d,	// (0x000349dd) call5_swipe_1_pane_g2_ParamLimits

0x8a1d,	// (0x000349dd) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003bc79) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003bc79) call5_swipe_1_pane_g

0x8a29,	// (0x000349e9) call5_swipe_1_pane_t1_ParamLimits

0x8a29,	// (0x000349e9) call5_swipe_1_pane_t1

0xe5f0,	// (0x0003a5b0) call5_swipe_2_pane_g1_ParamLimits

0xe5f0,	// (0x0003a5b0) call5_swipe_2_pane_g1

0x8a3e,	// (0x000349fe) call5_swipe_2_pane_g2_ParamLimits

0x8a3e,	// (0x000349fe) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003bc7e) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003bc7e) call5_swipe_2_pane_g

0x8a4a,	// (0x00034a0a) call5_swipe_2_pane_t1_ParamLimits

0x8a4a,	// (0x00034a0a) call5_swipe_2_pane_t1

0x8a5f,	// (0x00034a1f) sc_swipe_pane_g1_ParamLimits

0x8a5f,	// (0x00034a1f) sc_swipe_pane_g1

0x8a6c,	// (0x00034a2c) sc_swipe_pane_g2_ParamLimits

0x8a6c,	// (0x00034a2c) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003bc83) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003bc83) sc_swipe_pane_g

0x8a78,	// (0x00034a38) sc_swipe_pane_t1_ParamLimits

0x8a78,	// (0x00034a38) sc_swipe_pane_t1

0xb068,	// (0x00037028) main_cmail_launcher_pane

0x8a8d,	// (0x00034a4d) aid_size_cell_cmail_l_ParamLimits

0x8a8d,	// (0x00034a4d) aid_size_cell_cmail_l

0x8aa7,	// (0x00034a67) grid_cmail_l_pane_ParamLimits

0x8aa7,	// (0x00034a67) grid_cmail_l_pane

0x8ac2,	// (0x00034a82) cell_cmail_l_pane_ParamLimits

0x8ac2,	// (0x00034a82) cell_cmail_l_pane

0x8ae8,	// (0x00034aa8) cell_cmail_l_pane_g1_ParamLimits

0x8ae8,	// (0x00034aa8) cell_cmail_l_pane_g1

0x8af4,	// (0x00034ab4) cell_cmail_l_pane_t1_ParamLimits

0x8af4,	// (0x00034ab4) cell_cmail_l_pane_t1

0x8b0a,	// (0x00034aca) cell_cmail_l_pane_t2_ParamLimits

0x8b0a,	// (0x00034aca) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003bc88) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003bc88) cell_cmail_l_pane_t

0xc93a,	// (0x000388fa) grid_highlight_pane_cp018_ParamLimits

0xc93a,	// (0x000388fa) grid_highlight_pane_cp018

0x0293,	// (0x0002c253) main2_pane_ParamLimits

0x0293,	// (0x0002c253) main2_pane

0xbf51,	// (0x00037f11) popup_sp_fs_action_menu_bg_pane_g1

0xbf59,	// (0x00037f19) popup_sp_fs_action_menu_bg_pane_g2

0xbf61,	// (0x00037f21) popup_sp_fs_action_menu_bg_pane_g3

0xbf69,	// (0x00037f29) popup_sp_fs_action_menu_bg_pane_g4

0xbf71,	// (0x00037f31) popup_sp_fs_action_menu_bg_pane_g5

0xbf79,	// (0x00037f39) popup_sp_fs_action_menu_bg_pane_g6

0xbf81,	// (0x00037f41) popup_sp_fs_action_menu_bg_pane_g7

0xbf89,	// (0x00037f49) popup_sp_fs_action_menu_bg_pane_g8

0xbf91,	// (0x00037f51) popup_sp_fs_action_menu_bg_pane_g9

0xbf99,	// (0x00037f59) popup_sp_fs_action_menu_bg_pane_g10

0xbf99,	// (0x00037f59) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003b14a) popup_sp_fs_action_menu_bg_pane_g

0x2529,	// (0x0002e4e9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t3_g3_g1

0x2535,	// (0x0002e4f5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x2_t3_g3_g2

0x2541,	// (0x0002e501) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003b1f8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003b1f8) list_medium_line_x2_t3_g3_g

0x254d,	// (0x0002e50d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x254d,	// (0x0002e50d) list_medium_line_x2_t3_g3_t1

0x2562,	// (0x0002e522) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2562,	// (0x0002e522) list_medium_line_x2_t3_g3_t2

0x2576,	// (0x0002e536) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2576,	// (0x0002e536) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003b1ff) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003b1ff) list_medium_line_x2_t3_g3_t

0x2529,	// (0x0002e4e9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t3_g2_g1

0x2541,	// (0x0002e501) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003b206) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003b206) list_medium_line_x2_t3_g2_g

0x258b,	// (0x0002e54b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x258b,	// (0x0002e54b) list_medium_line_x2_t3_g2_t1

0x25a1,	// (0x0002e561) list_medium_line_x2_t3_g2_t2_ParamLimits

0x25a1,	// (0x0002e561) list_medium_line_x2_t3_g2_t2

0x25b3,	// (0x0002e573) list_medium_line_x2_t3_g2_t3_ParamLimits

0x25b3,	// (0x0002e573) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003b20b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003b20b) list_medium_line_x2_t3_g2_t

0x2529,	// (0x0002e4e9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t4_g4_g1

0x25d0,	// (0x0002e590) list_medium_line_x2_t4_g4_g2_ParamLimits

0x25d0,	// (0x0002e590) list_medium_line_x2_t4_g4_g2

0x2535,	// (0x0002e4f5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x2_t4_g4_g3

0x25dc,	// (0x0002e59c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x25dc,	// (0x0002e59c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003b212) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003b212) list_medium_line_x2_t4_g4_g

0x25e8,	// (0x0002e5a8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x25e8,	// (0x0002e5a8) list_medium_line_x2_t4_g4_t1

0x2602,	// (0x0002e5c2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2602,	// (0x0002e5c2) list_medium_line_x2_t4_g4_t2

0x2618,	// (0x0002e5d8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2618,	// (0x0002e5d8) list_medium_line_x2_t4_g4_t3

0x262d,	// (0x0002e5ed) list_medium_line_x2_t4_g4_t4_ParamLimits

0x262d,	// (0x0002e5ed) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003b21b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003b21b) list_medium_line_x2_t4_g4_t

0x2529,	// (0x0002e4e9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t2_g4_g1

0x25d0,	// (0x0002e590) list_medium_line_x2_t2_g4_g2_ParamLimits

0x25d0,	// (0x0002e590) list_medium_line_x2_t2_g4_g2

0x2535,	// (0x0002e4f5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x2_t2_g4_g3

0x2541,	// (0x0002e501) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003b282) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003b282) list_medium_line_x2_t2_g4_g

0x3587,	// (0x0002f547) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3587,	// (0x0002f547) list_medium_line_x2_t2_g4_t1

0x2576,	// (0x0002e536) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2576,	// (0x0002e536) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003b28b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003b28b) list_medium_line_x2_t2_g4_t

0x2529,	// (0x0002e4e9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t2_g3_g1

0x2535,	// (0x0002e4f5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x2_t2_g3_g2

0x2541,	// (0x0002e501) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003b1f8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003b1f8) list_medium_line_x2_t2_g3_g

0x359c,	// (0x0002f55c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x359c,	// (0x0002f55c) list_medium_line_x2_t2_g3_t1

0x2576,	// (0x0002e536) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2576,	// (0x0002e536) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003b290) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003b290) list_medium_line_x2_t2_g3_t

0x36b9,	// (0x0002f679) main_sp_fs_list_pane_ParamLimits

0x36b9,	// (0x0002f679) main_sp_fs_list_pane

0xe297,	// (0x0003a257) sp_fs_scroll_pane_ParamLimits

0xe297,	// (0x0003a257) sp_fs_scroll_pane

0x36c5,	// (0x0002f685) list_medium_line_x2_t3_t1

0x36d5,	// (0x0002f695) list_medium_line_x2_t3_t2

0x36e3,	// (0x0002f6a3) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003b2db) list_medium_line_x2_t3_t

0x36f1,	// (0x0002f6b1) list_medium_line_x3_t4_t1

0x3701,	// (0x0002f6c1) list_medium_line_x3_t4_t2

0x370f,	// (0x0002f6cf) list_medium_line_x3_t4_t3

0x36e3,	// (0x0002f6a3) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003b2e2) list_medium_line_x3_t4_t

0x371d,	// (0x0002f6dd) list_medium_line_x4_t5_t1

0x372d,	// (0x0002f6ed) list_medium_line_x4_t5_t2

0x370f,	// (0x0002f6cf) list_medium_line_x4_t5_t3

0x373b,	// (0x0002f6fb) list_medium_line_x4_t5_t4

0x36e3,	// (0x0002f6a3) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003b2eb) list_medium_line_x4_t5_t

0x2529,	// (0x0002e4e9) list_medium_line_t4_g4_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_t4_g4_g1

0x3749,	// (0x0002f709) list_medium_line_t4_g4_g2_ParamLimits

0x3749,	// (0x0002f709) list_medium_line_t4_g4_g2

0x3755,	// (0x0002f715) list_medium_line_t4_g4_g3_ParamLimits

0x3755,	// (0x0002f715) list_medium_line_t4_g4_g3

0x2541,	// (0x0002e501) list_medium_line_t4_g4_g4_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003b2f6) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003b2f6) list_medium_line_t4_g4_g

0x3761,	// (0x0002f721) list_medium_line_t4_g4_t1_ParamLimits

0x3761,	// (0x0002f721) list_medium_line_t4_g4_t1

0x3776,	// (0x0002f736) list_medium_line_t4_g4_t2_ParamLimits

0x3776,	// (0x0002f736) list_medium_line_t4_g4_t2

0x378b,	// (0x0002f74b) list_medium_line_t4_g4_t3_ParamLimits

0x378b,	// (0x0002f74b) list_medium_line_t4_g4_t3

0x2576,	// (0x0002e536) list_medium_line_t4_g4_t4_ParamLimits

0x2576,	// (0x0002e536) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003b2ff) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003b2ff) list_medium_line_t4_g4_t

0x3853,	// (0x0002f813) chi_dic_find_pane_g1

0x06f8,	// (0x0002c6b8) main_tport_pane

0x66f0,	// (0x000326b0) list_medium_line_plain_t1

0x6716,	// (0x000326d6) list_medium_line_t2_g2_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_t2_g2_g1

0x6722,	// (0x000326e2) list_medium_line_t2_g2_g2_ParamLimits

0x6722,	// (0x000326e2) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003b9c0) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003b9c0) list_medium_line_t2_g2_g

0x672e,	// (0x000326ee) list_medium_line_t2_g2_t1_ParamLimits

0x672e,	// (0x000326ee) list_medium_line_t2_g2_t1

0x6748,	// (0x00032708) list_medium_line_t2_g2_t2_ParamLimits

0x6748,	// (0x00032708) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003b9c5) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003b9c5) list_medium_line_t2_g2_t

0x7017,	// (0x00032fd7) aid_sp_fs_list_icon_a_sm

0x701f,	// (0x00032fdf) aid_sp_fs_list_icon_d

0x7027,	// (0x00032fe7) aid_sp_fs_text_primary

0x7030,	// (0x00032ff0) aid_sp_fs_text_secondary

0x7039,	// (0x00032ff9) list_medium_line

0x7039,	// (0x00032ff9) list_medium_line_g2

0x7039,	// (0x00032ff9) list_medium_line_g3

0x7039,	// (0x00032ff9) list_medium_line_plain

0x7039,	// (0x00032ff9) list_medium_line_plain_t2

0x7039,	// (0x00032ff9) list_medium_line_plain_t3

0x7039,	// (0x00032ff9) list_medium_line_right_icon

0x7039,	// (0x00032ff9) list_medium_line_right_iconx2

0x7039,	// (0x00032ff9) list_medium_line_t2

0x7039,	// (0x00032ff9) list_medium_line_t2_g2

0x7039,	// (0x00032ff9) list_medium_line_t2_g3

0x7039,	// (0x00032ff9) list_medium_line_t2_right_icon

0x7039,	// (0x00032ff9) list_medium_line_t2_right_iconx2

0x7039,	// (0x00032ff9) list_medium_line_t3

0x7039,	// (0x00032ff9) list_medium_line_t3_g2

0x7039,	// (0x00032ff9) list_medium_line_t3_g3

0x7039,	// (0x00032ff9) list_medium_line_t3_right_iconx2

0x7042,	// (0x00033002) list_medium_line_t4_g4

0x704b,	// (0x0003300b) list_medium_line_x2

0x704b,	// (0x0003300b) list_medium_line_x2_t2_g2

0x704b,	// (0x0003300b) list_medium_line_x2_t2_g3

0x704b,	// (0x0003300b) list_medium_line_x2_t2_g4

0x704b,	// (0x0003300b) list_medium_line_x2_t3

0x704b,	// (0x0003300b) list_medium_line_x2_t3_g2

0x704b,	// (0x0003300b) list_medium_line_x2_t3_g3

0x704b,	// (0x0003300b) list_medium_line_x2_t3_g4

0x704b,	// (0x0003300b) list_medium_line_x2_t4_g2

0x704b,	// (0x0003300b) list_medium_line_x2_t4_g4

0x7054,	// (0x00033014) list_medium_line_x3

0x7054,	// (0x00033014) list_medium_line_x3_t4

0x7054,	// (0x00033014) list_medium_line_x3_t4_g4

0x7042,	// (0x00033002) list_medium_line_x4_t4

0x7042,	// (0x00033002) list_medium_line_x4_t4_g7

0x7042,	// (0x00033002) list_medium_line_x4_t5

0x705d,	// (0x0003301d) list_single_fs_dyc_pane_ParamLimits

0x705d,	// (0x0003301d) list_single_fs_dyc_pane

0x2529,	// (0x0002e4e9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x4_t4_g7_g1

0x7c52,	// (0x00033c12) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c52,	// (0x00033c12) list_medium_line_x4_t4_g7_g2

0x7c5e,	// (0x00033c1e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c5e,	// (0x00033c1e) list_medium_line_x4_t4_g7_g3

0x7c6d,	// (0x00033c2d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c6d,	// (0x00033c2d) list_medium_line_x4_t4_g7_g4

0x7c79,	// (0x00033c39) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c79,	// (0x00033c39) list_medium_line_x4_t4_g7_g5

0x7c88,	// (0x00033c48) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c88,	// (0x00033c48) list_medium_line_x4_t4_g7_g6

0x7c97,	// (0x00033c57) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c97,	// (0x00033c57) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003bb90) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003bb90) list_medium_line_x4_t4_g7_g

0x7ca3,	// (0x00033c63) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ca3,	// (0x00033c63) list_medium_line_x4_t4_g7_t1

0x7cb8,	// (0x00033c78) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7cb8,	// (0x00033c78) list_medium_line_x4_t4_g7_t2

0x7ccd,	// (0x00033c8d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ccd,	// (0x00033c8d) list_medium_line_x4_t4_g7_t3

0x7ce2,	// (0x00033ca2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7ce2,	// (0x00033ca2) list_medium_line_x4_t4_g7_t4

0x7cf4,	// (0x00033cb4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7cf4,	// (0x00033cb4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003bb9f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003bb9f) list_medium_line_x4_t4_g7_t

0x7d06,	// (0x00033cc6) list_single_dyc_row_pane_ParamLimits

0x7d06,	// (0x00033cc6) list_single_dyc_row_pane

0x899e,	// (0x0003495e) call5_gesture_pane_ParamLimits

0x899e,	// (0x0003495e) call5_gesture_pane

0x89f4,	// (0x000349b4) call5_windows_pane_ParamLimits

0x89f4,	// (0x000349b4) call5_windows_pane

0x8b1c,	// (0x00034adc) call5_swipe_1_pane_cp_ParamLimits

0x8b1c,	// (0x00034adc) call5_swipe_1_pane_cp

0x8b28,	// (0x00034ae8) call5_swipe_2_pane_cp_ParamLimits

0x8b28,	// (0x00034ae8) call5_swipe_2_pane_cp

0xc07d,	// (0x0003803d) call5_image_pane_cp

0x8b34,	// (0x00034af4) popup_call5_audio_first_window_cp_ParamLimits

0x8b34,	// (0x00034af4) popup_call5_audio_first_window_cp

0x8a5f,	// (0x00034a1f) call5_swipe_1_pane_g1_cp_ParamLimits

0x8a5f,	// (0x00034a1f) call5_swipe_1_pane_g1_cp

0x8b42,	// (0x00034b02) call5_swipe_1_pane_g2_cp

0x8a78,	// (0x00034a38) call5_swipe_1_pane_t1_cp_ParamLimits

0x8a78,	// (0x00034a38) call5_swipe_1_pane_t1_cp

0x8a5f,	// (0x00034a1f) call5_swipe_2_pane_g1_cp_ParamLimits

0x8a5f,	// (0x00034a1f) call5_swipe_2_pane_g1_cp

0x8b4a,	// (0x00034b0a) call5_swipe_2_pane_g2_cp

0x8b52,	// (0x00034b12) call5_swipe_2_pane_t1_cp_ParamLimits

0x8b52,	// (0x00034b12) call5_swipe_2_pane_t1_cp

0xc93a,	// (0x000388fa) main_sp_fs_email_pane

0x8b67,	// (0x00034b27) main_sp_fs_listscroll_pane_te

0x8b70,	// (0x00034b30) popup_sp_fs_action_menu_pane_ParamLimits

0x8b70,	// (0x00034b30) popup_sp_fs_action_menu_pane

0xe38d,	// (0x0003a34d) bg_sp_fs_ctrlbar_pane_g1

0x8bb4,	// (0x00034b74) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x8bbd,	// (0x00034b7d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x8bc6,	// (0x00034b86) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe38d,	// (0x0003a34d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003bc8d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe15d,	// (0x0003a11d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe15d,	// (0x0003a11d) bg_sp_fs_ctrlbar_ddmenu_pane

0x8bcf,	// (0x00034b8f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x8bcf,	// (0x00034b8f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x8bdb,	// (0x00034b9b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x8bdb,	// (0x00034b9b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003bc96) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003bc96) main_sp_fs_ctrlbar_ddmenu_pane_g

0x8be7,	// (0x00034ba7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x8be7,	// (0x00034ba7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8c01,	// (0x00034bc1) list_medium_line_t2_right_icon_g1

0x8c09,	// (0x00034bc9) list_medium_line_t2_right_icon_t1

0x8c19,	// (0x00034bd9) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003bc9b) list_medium_line_t2_right_icon_t

0xdf70,	// (0x00039f30) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdf70,	// (0x00039f30) bg_sp_fs_ctrlbar_pane

0x8cab,	// (0x00034c6b) main_sp_fs_ctrlbar_button_pane_cp01

0x8cb5,	// (0x00034c75) main_sp_fs_ctrlbar_ddmenu_pane

0x8cbf,	// (0x00034c7f) main_sp_fs_ctrlbar_pane_g1

0x8ccb,	// (0x00034c8b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003bca0) main_sp_fs_ctrlbar_pane_g

0x8cd7,	// (0x00034c97) main_sp_fs_ctrlbar_pane_t1

0x8cec,	// (0x00034cac) main_sp_fs_ctrlbar_pane

0x8d2b,	// (0x00034ceb) main_sp_fs_listscroll_pane_te_cp01

0x8d4b,	// (0x00034d0b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8d4b,	// (0x00034d0b) popup_sp_fs_action_menu_pane_cp01

0xc93a,	// (0x000388fa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc93a,	// (0x000388fa) bg_sp_fs_highlight_list_pane_cp01

0x8d7b,	// (0x00034d3b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8d7b,	// (0x00034d3b) sp_fs_action_menu_list_gene_pane_g1

0x8d8a,	// (0x00034d4a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x8d8a,	// (0x00034d4a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003bcaa) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003bcaa) sp_fs_action_menu_list_gene_pane_g

0x8d97,	// (0x00034d57) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8d97,	// (0x00034d57) sp_fs_action_menu_list_gene_pane_t1

0x8daf,	// (0x00034d6f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8daf,	// (0x00034d6f) sp_fs_action_menu_list_gene_pane

0x8dd0,	// (0x00034d90) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x8dd0,	// (0x00034d90) popup_sp_fs_action_menu_bg_pane

0x8dde,	// (0x00034d9e) sp_fs_action_menu_list_pane_ParamLimits

0x8dde,	// (0x00034d9e) sp_fs_action_menu_list_pane

0x8e00,	// (0x00034dc0) sp_fs_scroll_pane_cp01_ParamLimits

0x8e00,	// (0x00034dc0) sp_fs_scroll_pane_cp01

0x8e26,	// (0x00034de6) list_medium_line_plain_t2_t1

0x8e36,	// (0x00034df6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003bcaf) list_medium_line_plain_t2_t

0x8e46,	// (0x00034e06) list_medium_line_plain_t3_t1

0x8e56,	// (0x00034e16) list_medium_line_plain_t3_t2

0x8e64,	// (0x00034e24) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003bcb4) list_medium_line_plain_t3_t

0x2529,	// (0x0002e4e9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t2_g2_g1

0x2541,	// (0x0002e501) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003b206) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003b206) list_medium_line_x2_t2_g2_g

0x3761,	// (0x0002f721) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3761,	// (0x0002f721) list_medium_line_x2_t2_g2_t1

0x2576,	// (0x0002e536) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2576,	// (0x0002e536) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003bcbb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003bcbb) list_medium_line_x2_t2_g2_t

0x2529,	// (0x0002e4e9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t4_g2_g1

0x2541,	// (0x0002e501) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003b206) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003b206) list_medium_line_x2_t4_g2_g

0x8e72,	// (0x00034e32) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8e72,	// (0x00034e32) list_medium_line_x2_t4_g2_t1

0x8e8c,	// (0x00034e4c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8e8c,	// (0x00034e4c) list_medium_line_x2_t4_g2_t2

0x8ea2,	// (0x00034e62) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8ea2,	// (0x00034e62) list_medium_line_x2_t4_g2_t3

0x2576,	// (0x0002e536) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2576,	// (0x0002e536) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003bcc0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003bcc0) list_medium_line_x2_t4_g2_t

0x8eb7,	// (0x00034e77) list_medium_line_t3_right_iconx2_g1

0x8c01,	// (0x00034bc1) list_medium_line_t3_right_iconx2_g2

0x8ebf,	// (0x00034e7f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003bcc9) list_medium_line_t3_right_iconx2_g

0x8ec9,	// (0x00034e89) list_medium_line_t3_right_iconx2_t1

0x8ed9,	// (0x00034e99) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003bcd0) list_medium_line_t3_right_iconx2_t

0x2529,	// (0x0002e4e9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x3_t4_g4_g1

0x2535,	// (0x0002e4f5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x3_t4_g4_g2

0x3749,	// (0x0002f709) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3749,	// (0x0002f709) list_medium_line_x3_t4_g4_g3

0x8ee7,	// (0x00034ea7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8ee7,	// (0x00034ea7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003bcd5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003bcd5) list_medium_line_x3_t4_g4_g

0x8ef3,	// (0x00034eb3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8ef3,	// (0x00034eb3) list_medium_line_x3_t4_g4_t1

0x8f0a,	// (0x00034eca) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8f0a,	// (0x00034eca) list_medium_line_x3_t4_g4_t2

0x3776,	// (0x0002f736) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3776,	// (0x0002f736) list_medium_line_x3_t4_g4_t3

0x8f25,	// (0x00034ee5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8f25,	// (0x00034ee5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003bcde) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003bcde) list_medium_line_x3_t4_g4_t

0x8f42,	// (0x00034f02) list_single_dyc_row_text_pane_t1_ParamLimits

0x8f42,	// (0x00034f02) list_single_dyc_row_text_pane_t1

0x8f8b,	// (0x00034f4b) list_single_dyc_row_text_pane_t2_ParamLimits

0x8f8b,	// (0x00034f4b) list_single_dyc_row_text_pane_t2

0x9001,	// (0x00034fc1) list_single_dyc_row_text_pane_t3_ParamLimits

0x9001,	// (0x00034fc1) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003bce7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003bce7) list_single_dyc_row_text_pane_t

0x90e4,	// (0x000350a4) list_single_dyc_row_pane_g1_ParamLimits

0x90e4,	// (0x000350a4) list_single_dyc_row_pane_g1

0x90f0,	// (0x000350b0) list_single_dyc_row_pane_g2_ParamLimits

0x90f0,	// (0x000350b0) list_single_dyc_row_pane_g2

0x90fc,	// (0x000350bc) list_single_dyc_row_pane_g3_ParamLimits

0x90fc,	// (0x000350bc) list_single_dyc_row_pane_g3

0x9108,	// (0x000350c8) list_single_dyc_row_pane_g4_ParamLimits

0x9108,	// (0x000350c8) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003bcf4) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003bcf4) list_single_dyc_row_pane_g

0x9114,	// (0x000350d4) list_single_dyc_row_text_pane_ParamLimits

0x9114,	// (0x000350d4) list_single_dyc_row_text_pane

0xafea,	// (0x00036faa) bg_sp_fs_scroll_pane

0x9133,	// (0x000350f3) thumb_sp_fs_scroll_pane

0x6716,	// (0x000326d6) list_medium_line_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_g1

0x913c,	// (0x000350fc) list_medium_line_t1_ParamLimits

0x913c,	// (0x000350fc) list_medium_line_t1

0x2529,	// (0x0002e4e9) list_medium_line_x2_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_g1

0x2535,	// (0x0002e4f5) list_medium_line_x2_g2_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003bcfd) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003bcfd) list_medium_line_x2_g

0x9151,	// (0x00035111) list_medium_line_x2_t1_ParamLimits

0x9151,	// (0x00035111) list_medium_line_x2_t1

0x2529,	// (0x0002e4e9) list_medium_line_x3_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x3_g1

0x2535,	// (0x0002e4f5) list_medium_line_x3_g2_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003bcfd) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003bcfd) list_medium_line_x3_g

0x9151,	// (0x00035111) list_medium_line_x3_t1_ParamLimits

0x9151,	// (0x00035111) list_medium_line_x3_t1

0x9167,	// (0x00035127) thumb_sp_fs_scroll_pane_g1

0x9170,	// (0x00035130) thumb_sp_fs_scroll_pane_g2

0x9179,	// (0x00035139) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003bd02) thumb_sp_fs_scroll_pane_g

0x9167,	// (0x00035127) bg_sp_fs_scroll_pane_g1

0x9170,	// (0x00035130) bg_sp_fs_scroll_pane_g2

0x9179,	// (0x00035139) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003bd02) bg_sp_fs_scroll_pane_g

0x2529,	// (0x0002e4e9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2529,	// (0x0002e4e9) list_medium_line_x2_t3_g4_g1

0x25d0,	// (0x0002e590) list_medium_line_x2_t3_g4_g2_ParamLimits

0x25d0,	// (0x0002e590) list_medium_line_x2_t3_g4_g2

0x2535,	// (0x0002e4f5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2535,	// (0x0002e4f5) list_medium_line_x2_t3_g4_g3

0x2541,	// (0x0002e501) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2541,	// (0x0002e501) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003b282) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003b282) list_medium_line_x2_t3_g4_g

0x9182,	// (0x00035142) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9182,	// (0x00035142) list_medium_line_x2_t3_g4_t1

0x919c,	// (0x0003515c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x919c,	// (0x0003515c) list_medium_line_x2_t3_g4_t2

0x2576,	// (0x0002e536) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2576,	// (0x0002e536) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003bd09) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003bd09) list_medium_line_x2_t3_g4_t

0x6716,	// (0x000326d6) list_medium_line_g2_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_g2_g1

0x6722,	// (0x000326e2) list_medium_line_g2_g2_ParamLimits

0x6722,	// (0x000326e2) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003b9c0) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003b9c0) list_medium_line_g2_g

0x91b6,	// (0x00035176) list_medium_line_g2_t1_ParamLimits

0x91b6,	// (0x00035176) list_medium_line_g2_t1

0x6716,	// (0x000326d6) list_medium_line_t3_g2_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_t3_g2_g1

0x6722,	// (0x000326e2) list_medium_line_t3_g2_g2_ParamLimits

0x6722,	// (0x000326e2) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003b9c0) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003b9c0) list_medium_line_t3_g2_g

0x91cb,	// (0x0003518b) list_medium_line_t3_g2_t1_ParamLimits

0x91cb,	// (0x0003518b) list_medium_line_t3_g2_t1

0x91e5,	// (0x000351a5) list_medium_line_t3_g2_t2_ParamLimits

0x91e5,	// (0x000351a5) list_medium_line_t3_g2_t2

0x91fb,	// (0x000351bb) list_medium_line_t3_g2_t3_ParamLimits

0x91fb,	// (0x000351bb) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003bd10) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003bd10) list_medium_line_t3_g2_t

0x8c01,	// (0x00034bc1) list_medium_line_right_icon_g1

0x9215,	// (0x000351d5) list_medium_line_right_icon_t1

0x6716,	// (0x000326d6) list_medium_line_t2_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_t2_g1

0x9223,	// (0x000351e3) list_medium_line_t2_t1_ParamLimits

0x9223,	// (0x000351e3) list_medium_line_t2_t1

0x923d,	// (0x000351fd) list_medium_line_t2_t2_ParamLimits

0x923d,	// (0x000351fd) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003bd17) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003bd17) list_medium_line_t2_t

0x6716,	// (0x000326d6) list_medium_line_t3_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_t3_g1

0x9256,	// (0x00035216) list_medium_line_t3_t1_ParamLimits

0x9256,	// (0x00035216) list_medium_line_t3_t1

0x9270,	// (0x00035230) list_medium_line_t3_t2_ParamLimits

0x9270,	// (0x00035230) list_medium_line_t3_t2

0x9286,	// (0x00035246) list_medium_line_t3_t3_ParamLimits

0x9286,	// (0x00035246) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003bd1c) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003bd1c) list_medium_line_t3_t

0x6716,	// (0x000326d6) list_medium_line_g3_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_g3_g1

0x929b,	// (0x0003525b) list_medium_line_g3_g2_ParamLimits

0x929b,	// (0x0003525b) list_medium_line_g3_g2

0x6722,	// (0x000326e2) list_medium_line_g3_g3_ParamLimits

0x6722,	// (0x000326e2) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003bd23) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003bd23) list_medium_line_g3_g

0x92a7,	// (0x00035267) list_medium_line_g3_t1_ParamLimits

0x92a7,	// (0x00035267) list_medium_line_g3_t1

0x6716,	// (0x000326d6) list_medium_line_t2_g3_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_t2_g3_g1

0x929b,	// (0x0003525b) list_medium_line_t2_g3_g2_ParamLimits

0x929b,	// (0x0003525b) list_medium_line_t2_g3_g2

0x6722,	// (0x000326e2) list_medium_line_t2_g3_g3_ParamLimits

0x6722,	// (0x000326e2) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003bd23) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003bd23) list_medium_line_t2_g3_g

0x92bc,	// (0x0003527c) list_medium_line_t2_g3_t1_ParamLimits

0x92bc,	// (0x0003527c) list_medium_line_t2_g3_t1

0x92d6,	// (0x00035296) list_medium_line_t2_g3_t2_ParamLimits

0x92d6,	// (0x00035296) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003bd2a) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003bd2a) list_medium_line_t2_g3_t

0x6716,	// (0x000326d6) list_medium_line_t3_g3_g1_ParamLimits

0x6716,	// (0x000326d6) list_medium_line_t3_g3_g1

0x929b,	// (0x0003525b) list_medium_line_t3_g3_g2_ParamLimits

0x929b,	// (0x0003525b) list_medium_line_t3_g3_g2

0x6722,	// (0x000326e2) list_medium_line_t3_g3_g3_ParamLimits

0x6722,	// (0x000326e2) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003bd23) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003bd23) list_medium_line_t3_g3_g

0x92f4,	// (0x000352b4) list_medium_line_t3_g3_t1_ParamLimits

0x92f4,	// (0x000352b4) list_medium_line_t3_g3_t1

0x930d,	// (0x000352cd) list_medium_line_t3_g3_t2_ParamLimits

0x930d,	// (0x000352cd) list_medium_line_t3_g3_t2

0x9323,	// (0x000352e3) list_medium_line_t3_g3_t3_ParamLimits

0x9323,	// (0x000352e3) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003bd2f) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003bd2f) list_medium_line_t3_g3_t

0x8eb7,	// (0x00034e77) list_medium_line_right_iconx2_g1

0x8c01,	// (0x00034bc1) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003bd36) list_medium_line_right_iconx2_g

0x933d,	// (0x000352fd) list_medium_line_right_iconx2_t1

0x8eb7,	// (0x00034e77) list_medium_line_t2_right_iconx2_g1

0x8c01,	// (0x00034bc1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003bd36) list_medium_line_t2_right_iconx2_g

0x934b,	// (0x0003530b) list_medium_line_t2_right_iconx2_t1

0x935b,	// (0x0003531b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003bd3b) list_medium_line_t2_right_iconx2_t

0x936d,	// (0x0003532d) list_medium_line_x4_t4_t1

0x937b,	// (0x0003533b) list_medium_line_x4_t4_t2

0x938b,	// (0x0003534b) list_medium_line_x4_t4_t3

0x939b,	// (0x0003535b) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003bd40) list_medium_line_x4_t4_t

0x93ee,	// (0x000353ae) tport_appsw_pane_ParamLimits

0x93ee,	// (0x000353ae) tport_appsw_pane

0x9406,	// (0x000353c6) tport_contact_pane_ParamLimits

0x9406,	// (0x000353c6) tport_contact_pane

0x941e,	// (0x000353de) tport_listscroll_pane_ParamLimits

0x941e,	// (0x000353de) tport_listscroll_pane

0x9438,	// (0x000353f8) cell_tport_appsw_pane_ParamLimits

0x9438,	// (0x000353f8) cell_tport_appsw_pane

0xedfa,	// (0x0003adba) tport_appsw_pane_g1_ParamLimits

0xedfa,	// (0x0003adba) tport_appsw_pane_g1

0x9478,	// (0x00035438) tport_contact_pane_g1

0x7fc8,	// (0x00033f88) tport_contact_pane_t1

0x9481,	// (0x00035441) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003bd49) tport_contact_pane_t

0x948f,	// (0x0003544f) list_tport_pane

0x9498,	// (0x00035458) scroll_pane_cp_030

0x94a9,	// (0x00035469) cell_tport_appsw_pane_g1

0x94b9,	// (0x00035479) cell_tport_appsw_pane_t1

0x94c7,	// (0x00035487) grid_highlight_pane_cp019

0x94cf,	// (0x0003548f) list_tport_double_graphic_pane_ParamLimits

0x94cf,	// (0x0003548f) list_tport_double_graphic_pane

0xc93a,	// (0x000388fa) list_highlight_pane_cp023_ParamLimits

0xc93a,	// (0x000388fa) list_highlight_pane_cp023

0x94dc,	// (0x0003549c) list_tport_double_graphic_pane_g1_ParamLimits

0x94dc,	// (0x0003549c) list_tport_double_graphic_pane_g1

0x94e9,	// (0x000354a9) list_tport_double_graphic_pane_t1_ParamLimits

0x94e9,	// (0x000354a9) list_tport_double_graphic_pane_t1

0x94fe,	// (0x000354be) list_tport_double_graphic_pane_t2_ParamLimits

0x94fe,	// (0x000354be) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003bd55) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003bd55) list_tport_double_graphic_pane_t

0xafea,	// (0x00036faa) main_cale_note_pane

0x161f,	// (0x0002d5df) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x161f,	// (0x0002d5df) cell_vitu2_function_top_wide_pane_cp01

0x836c,	// (0x0003432c) wait_bar_pane_cp05_ParamLimits

0xc93a,	// (0x000388fa) listscroll_cmail_pane

0x9510,	// (0x000354d0) list_cmail_pane

0x9520,	// (0x000354e0) list_cmail_body_pane

0x9535,	// (0x000354f5) list_single_cmail_header_caption_pane

0x954b,	// (0x0003550b) list_single_cmail_header_detail_pane_ParamLimits

0x954b,	// (0x0003550b) list_single_cmail_header_detail_pane

0x9574,	// (0x00035534) list_single_cmail_header_caption_pane_t1

0x958b,	// (0x0003554b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x958b,	// (0x0003554b) list_single_cmail_header_detail_pane_g1

0x95a3,	// (0x00035563) list_single_cmail_header_detail_pane_g2_ParamLimits

0x95a3,	// (0x00035563) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003bd5a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003bd5a) list_single_cmail_header_detail_pane_g

0x95bc,	// (0x0003557c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x95bc,	// (0x0003557c) list_single_cmail_header_detail_pane_t1

0x961c,	// (0x000355dc) list_single_cmail_header_editor_pane_bg_ParamLimits

0x961c,	// (0x000355dc) list_single_cmail_header_editor_pane_bg

0x81d8,	// (0x00034198) list_cmail_body_pane_g1

0x9633,	// (0x000355f3) list_cmail_body_pane_t1

0xee37,	// (0x0003adf7) list_single_cmail_header_editor_pane_bg_g1

0xc2d6,	// (0x00038296) list_single_cmail_header_editor_pane_bg_g1_copy1

0xee47,	// (0x0003ae07) list_single_cmail_header_editor_pane_bg_g1_copy2

0xee3f,	// (0x0003adff) list_single_cmail_header_editor_pane_bg_g1_copy3

0xf0a7,	// (0x0003b067) list_single_cmail_header_editor_pane_bg_g1_copy4

0xee67,	// (0x0003ae27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xee57,	// (0x0003ae17) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xee5f,	// (0x0003ae1f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc2b6,	// (0x00038276) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9641,	// (0x00035601) calenote_gesture_pane_ParamLimits

0x9641,	// (0x00035601) calenote_gesture_pane

0x9661,	// (0x00035621) calenote_window_pane_ParamLimits

0x9661,	// (0x00035621) calenote_window_pane

0x967d,	// (0x0003563d) popup_note_window_cp01

0x9686,	// (0x00035646) calenote_swipe_1_pane_ParamLimits

0x9686,	// (0x00035646) calenote_swipe_1_pane

0x8b28,	// (0x00034ae8) calenote_swipe_2_pane_ParamLimits

0x8b28,	// (0x00034ae8) calenote_swipe_2_pane

0x8a5f,	// (0x00034a1f) calenote_swipe_1_pane_g1_ParamLimits

0x8a5f,	// (0x00034a1f) calenote_swipe_1_pane_g1

0x8a6c,	// (0x00034a2c) calenote_swipe_1_pane_g2_ParamLimits

0x8a6c,	// (0x00034a2c) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003bc83) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003bc83) calenote_swipe_1_pane_g

0x96a4,	// (0x00035664) calenote_swipe_1_pane_t1_ParamLimits

0x96a4,	// (0x00035664) calenote_swipe_1_pane_t1

0x8a5f,	// (0x00034a1f) calenote_swipe_2_pane_g1_ParamLimits

0x8a5f,	// (0x00034a1f) calenote_swipe_2_pane_g1

0x96c3,	// (0x00035683) calenote_swipe_2_pane_g2_ParamLimits

0x96c3,	// (0x00035683) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003bd66) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003bd66) calenote_swipe_2_pane_g

0x96cf,	// (0x0003568f) calenote_swipe_2_pane_t1_ParamLimits

0x96cf,	// (0x0003568f) calenote_swipe_2_pane_t1

0xafea,	// (0x00036faa) main_mup_navstr_pane

0x5496,	// (0x00031456) main_mup3_pane_t7_ParamLimits

0x5496,	// (0x00031456) main_mup3_pane_t7

0xb8da,	// (0x0003789a) main_mp4_pane_g6_ParamLimits

0xb8da,	// (0x0003789a) main_mp4_pane_g6

0xba7e,	// (0x00037a3e) main_image3_pane_t4_ParamLimits

0xba7e,	// (0x00037a3e) main_image3_pane_t4

0x96f6,	// (0x000356b6) popup_navstr_preview_pane_ParamLimits

0x96f6,	// (0x000356b6) popup_navstr_preview_pane

0x970a,	// (0x000356ca) scroll_navstr_pane_ParamLimits

0x970a,	// (0x000356ca) scroll_navstr_pane

0xafea,	// (0x00036faa) bg_popup_preview_window_pane_cp04

0x971e,	// (0x000356de) popup_navstr_preview_pane_t1

0x972c,	// (0x000356ec) scroll_navstr_pane_g1_ParamLimits

0x972c,	// (0x000356ec) scroll_navstr_pane_g1

0x9740,	// (0x00035700) scroll_navstr_pane_t1_ParamLimits

0x9740,	// (0x00035700) scroll_navstr_pane_t1

0x969b,	// (0x0003565b) bg_button_pane_cp014

0x969b,	// (0x0003565b) bg_button_pane_cp030

0x8944,	// (0x00034904) list_double_fisheye_pane_g4_ParamLimits

0x8944,	// (0x00034904) list_double_fisheye_pane_g4

0x8950,	// (0x00034910) list_double_fisheye_pane_g5_ParamLimits

0x8950,	// (0x00034910) list_double_fisheye_pane_g5

0xe297,	// (0x0003a257) sp_fs_scroll_pane_cp03

0x8cbf,	// (0x00034c7f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x8ccb,	// (0x00034c8b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003bca0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8cd7,	// (0x00034c97) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9518,	// (0x000354d8) sp_fs_scroll_pane_cp02

0xbfbc,	// (0x00037f7c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbfbc,	// (0x00037f7c) popup_sp_fs_calendar_preview_list_single_pane

0xafea,	// (0x00036faa) main_cam6_pano_pane

0xb05a,	// (0x0003701a) main_mup3_pane_ParamLimits

0xafea,	// (0x00036faa) main_phacti_pane

0x823f,	// (0x000341ff) bg_button_pane_cp11

0x8259,	// (0x00034219) main_mobtv_info_pane_g2_ParamLimits

0x8259,	// (0x00034219) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003bc00) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003bc00) main_mobtv_info_pane_g

0x84dc,	// (0x0003449c) sc_clock_pane_t5_ParamLimits

0x84dc,	// (0x0003449c) sc_clock_pane_t5

0x8700,	// (0x000346c0) main_radioblah_pane_g1_ParamLimits

0x8746,	// (0x00034706) main_radioblah_pane_t3_ParamLimits

0x8746,	// (0x00034706) main_radioblah_pane_t3

0x875e,	// (0x0003471e) main_radioblah_pane_t4_ParamLimits

0x875e,	// (0x0003471e) main_radioblah_pane_t4

0x878c,	// (0x0003474c) main_radioblah_text_pane_ParamLimits

0x878c,	// (0x0003474c) main_radioblah_text_pane

0x879e,	// (0x0003475e) main_radioblah_info_pane_g1_ParamLimits

0x8871,	// (0x00034831) main_radioblah_info_pane_t4_ParamLimits

0x8871,	// (0x00034831) main_radioblah_info_pane_t4

0xc93a,	// (0x000388fa) main_sp_fs_calendar_pane

0x9757,	// (0x00035717) main_phacti_pane_g1

0x9768,	// (0x00035728) phacti_note_pane_ParamLimits

0x9768,	// (0x00035728) phacti_note_pane

0x977c,	// (0x0003573c) phacti_term_pane_ParamLimits

0x977c,	// (0x0003573c) phacti_term_pane

0x9791,	// (0x00035751) phacti_note_pane_t1_ParamLimits

0x9791,	// (0x00035751) phacti_note_pane_t1

0x97a8,	// (0x00035768) phacti_term_pane_g1

0x97b0,	// (0x00035770) phacti_term_pane_t1_ParamLimits

0x97b0,	// (0x00035770) phacti_term_pane_t1

0x97da,	// (0x0003579a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc05b,	// (0x0003801b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003bd70) popup_sp_fs_calendar_preview_list_single_pane_g

0x97e2,	// (0x000357a2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x97e2,	// (0x000357a2) popup_sp_fs_calendar_preview_list_single_pane_t1

0x97f8,	// (0x000357b8) aid_popup_sp_fs_bg_corner_pane

0xe38d,	// (0x0003a34d) popup_sp_fs_calendar_preview_bg_pane_g1

0xafea,	// (0x00036faa) popup_sp_fs_calendar_preview_bg_pane

0x9800,	// (0x000357c0) popup_sp_fs_calendar_preview_list_pane

0xdf70,	// (0x00039f30) bg_main_sp_fs_cale_pane_ParamLimits

0xdf70,	// (0x00039f30) bg_main_sp_fs_cale_pane

0x9872,	// (0x00035832) listscroll_cale_mrui_pane_ParamLimits

0x9872,	// (0x00035832) listscroll_cale_mrui_pane

0xeebb,	// (0x0003ae7b) listscroll_sp_fs_schedule_track_pane

0x9887,	// (0x00035847) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9887,	// (0x00035847) main_sp_fs_ctrlbar_pane_cp01

0x989a,	// (0x0003585a) main_sp_fs_ribbon_pane

0x98a2,	// (0x00035862) popup_sp_fs_cale_preview_window

0x98b4,	// (0x00035874) list_single_sp_fs_schedule_track_pane_ParamLimits

0x98b4,	// (0x00035874) list_single_sp_fs_schedule_track_pane

0xc93a,	// (0x000388fa) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc93a,	// (0x000388fa) bg_sp_fs_highlight_list_pane_cp03

0x98c7,	// (0x00035887) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x98c7,	// (0x00035887) list_single_sp_fs_schedule_track_pane_g1

0x98d3,	// (0x00035893) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x98d3,	// (0x00035893) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003bd75) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003bd75) list_single_sp_fs_schedule_track_pane_g

0x98df,	// (0x0003589f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x98df,	// (0x0003589f) list_single_sp_fs_schedule_track_pane_t1

0x98f9,	// (0x000358b9) sp_fs_schedule_track_pane_ParamLimits

0x98f9,	// (0x000358b9) sp_fs_schedule_track_pane

0x990a,	// (0x000358ca) sp_fs_schedule_track_pane_g1

0x9912,	// (0x000358d2) sp_fs_schedule_track_pane_g2

0x991a,	// (0x000358da) sp_fs_schedule_track_pane_g3

0x9922,	// (0x000358e2) sp_fs_schedule_track_pane_g4

0x992a,	// (0x000358ea) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003bd7a) sp_fs_schedule_track_pane_g

0xee37,	// (0x0003adf7) bg_sp_fs_schedule_viewer_highlight_g1

0xc2d6,	// (0x00038296) bg_sp_fs_schedule_viewer_highlight_g2

0xee3f,	// (0x0003adff) bg_sp_fs_schedule_viewer_highlight_g3

0xee47,	// (0x0003ae07) bg_sp_fs_schedule_viewer_highlight_g4

0xf0a7,	// (0x0003b067) bg_sp_fs_schedule_viewer_highlight_g5

0xee57,	// (0x0003ae17) bg_sp_fs_schedule_viewer_highlight_g6

0xee5f,	// (0x0003ae1f) bg_sp_fs_schedule_viewer_highlight_g7

0xee67,	// (0x0003ae27) bg_sp_fs_schedule_viewer_highlight_g8

0xc2b6,	// (0x00038276) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003bd85) bg_sp_fs_schedule_viewer_highlight_g

0xafea,	// (0x00036faa) bg_main_sp_fs_ribbon_pane

0x9932,	// (0x000358f2) main_sp_fs_ribbon_pane_g1

0x993b,	// (0x000358fb) main_sp_fs_ribbon_pane_t1

0x994a,	// (0x0003590a) main_sp_fs_ribbon_pane_t2

0x9959,	// (0x00035919) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003bd98) main_sp_fs_ribbon_pane_t

0x9968,	// (0x00035928) main_sp_fs_ribbon_scheduler_pane

0x9970,	// (0x00035930) bg_main_sp_fs_ribbon_pane_g1

0x9979,	// (0x00035939) bg_main_sp_fs_ribbon_pane_g2

0x9982,	// (0x00035942) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003bd9f) bg_main_sp_fs_ribbon_pane_g

0x998a,	// (0x0003594a) main_sp_fs_ribbon_scheduler_pane_g1

0x9993,	// (0x00035953) main_sp_fs_ribbon_scheduler_pane_g2

0x999c,	// (0x0003595c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003bda6) main_sp_fs_ribbon_scheduler_pane_g

0x99a5,	// (0x00035965) list_cale_mrui_pane

0x99b2,	// (0x00035972) sp_fs_scroll_pane_cp07_ParamLimits

0x99b2,	// (0x00035972) sp_fs_scroll_pane_cp07

0x99ce,	// (0x0003598e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x99ce,	// (0x0003598e) bg_sp_fs_schedule_viewer_highlight

0x99de,	// (0x0003599e) list_single_sp_fs_schedule_track_pane_cp01

0x99e6,	// (0x000359a6) list_sp_fs_schedule_track_pane

0x99ee,	// (0x000359ae) sp_fs_scroll_pane_cp06_ParamLimits

0x99ee,	// (0x000359ae) sp_fs_scroll_pane_cp06

0xe38d,	// (0x0003a34d) bgmain_sp_fs_calendar_pane_g1

0x9a00,	// (0x000359c0) list_single_cale_mrui_pane_ParamLimits

0x9a00,	// (0x000359c0) list_single_cale_mrui_pane

0x9a21,	// (0x000359e1) list_single_cale_mrui_row_pane_ParamLimits

0x9a21,	// (0x000359e1) list_single_cale_mrui_row_pane

0x9a2e,	// (0x000359ee) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9a2e,	// (0x000359ee) list_single_cale_mrui_row_pane_g1

0x9a73,	// (0x00035a33) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9a73,	// (0x00035a33) list_single_cale_mrui_row_pane_t1

0x9a85,	// (0x00035a45) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9a85,	// (0x00035a45) list_single_cale_mrui_row_pane_t2

0x9aed,	// (0x00035aad) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9aed,	// (0x00035aad) list_single_cale_mrui_row_pane_t3

0x9b1c,	// (0x00035adc) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9b1c,	// (0x00035adc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003bdb4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003bdb4) list_single_cale_mrui_row_pane_t

0x9b4b,	// (0x00035b0b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9b4b,	// (0x00035b0b) list_single_cmail_header_editor_pane_bg_cp01

0x9b71,	// (0x00035b31) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9b71,	// (0x00035b31) list_single_cmail_header_editor_pane_bg_cp02

0x9b91,	// (0x00035b51) main_radioblah_text_pane_t1_ParamLimits

0x9b91,	// (0x00035b51) main_radioblah_text_pane_t1

0x9bab,	// (0x00035b6b) cam6_indi_pane_cp01

0x9bb3,	// (0x00035b73) cam6_mode_pane_cp01

0x9bbb,	// (0x00035b7b) cam6_pano_pane

0x9bc4,	// (0x00035b84) cam6_zoom_pane_cp01

0x9bcc,	// (0x00035b8c) cam6_pano_image_pane

0x9bd7,	// (0x00035b97) cam6_pano_pane_g1

0x81d8,	// (0x00034198) cam6_pano_pane_g2

0x9be0,	// (0x00035ba0) cam6_pano_pane_g3

0x9be9,	// (0x00035ba9) cam6_pano_pane_g4

0xe97c,	// (0x0003a93c) cam6_pano_pane_g5

0x9bf2,	// (0x00035bb2) cam6_pano_pane_g6

0x9bfc,	// (0x00035bbc) cam6_pano_pane_g7

0x9c04,	// (0x00035bc4) cam6_pano_pane_g8

0x9c0d,	// (0x00035bcd) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003bdbd) cam6_pano_pane_g

0xafea,	// (0x00036faa) main_browser_tag_pane

0x96ee,	// (0x000356ae) grid_navstr_albumart_pane

0x9c18,	// (0x00035bd8) cell_navstr_albumart_pane_ParamLimits

0x9c18,	// (0x00035bd8) cell_navstr_albumart_pane

0x9c38,	// (0x00035bf8) cell_navstr_albumart_pane_g1

0xdd81,	// (0x00039d41) cell_navstr_albumart_pane_g2

0xdd91,	// (0x00039d51) cell_navstr_albumart_pane_g3

0xdd89,	// (0x00039d49) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003bdd0) cell_navstr_albumart_pane_g

0x9c40,	// (0x00035c00) bt_list_pane_ParamLimits

0x9c40,	// (0x00035c00) bt_list_pane

0x9c54,	// (0x00035c14) bt_list_pane_t1

0x9c63,	// (0x00035c23) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003bdd9) bt_list_pane_t

0xafea,	// (0x00036faa) main_cale_prevew_pane

0x9c72,	// (0x00035c32) popup_cale_preview_window_ParamLimits

0x9c72,	// (0x00035c32) popup_cale_preview_window

0xc93a,	// (0x000388fa) bg_popup_preview_window_pane_cp05_ParamLimits

0xc93a,	// (0x000388fa) bg_popup_preview_window_pane_cp05

0x9c8d,	// (0x00035c4d) list_cale_preview_pane_ParamLimits

0x9c8d,	// (0x00035c4d) list_cale_preview_pane

0x9c99,	// (0x00035c59) list_double_cale_preview_pane_ParamLimits

0x9c99,	// (0x00035c59) list_double_cale_preview_pane

0x9cab,	// (0x00035c6b) list_single_cale_preview_pane_ParamLimits

0x9cab,	// (0x00035c6b) list_single_cale_preview_pane

0x9cc1,	// (0x00035c81) list_single_cale_preview_pane_g1

0x9cc9,	// (0x00035c89) list_single_cale_preview_pane_t1_ParamLimits

0x9cc9,	// (0x00035c89) list_single_cale_preview_pane_t1

0x9cde,	// (0x00035c9e) list_double_cale_preview_pane_g1

0x9ce6,	// (0x00035ca6) list_double_cale_preview_pane_t1_ParamLimits

0x9ce6,	// (0x00035ca6) list_double_cale_preview_pane_t1

0x9cfb,	// (0x00035cbb) list_double_cale_preview_pane_t2_ParamLimits

0x9cfb,	// (0x00035cbb) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003bdde) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003bdde) list_double_cale_preview_pane_t

0xafea,	// (0x00036faa) main_ezdial_pane

0xc93a,	// (0x000388fa) main_sp_fs_email_pane_ParamLimits

0x8c2b,	// (0x00034beb) cmail_ddmenu_btn01_pane_ParamLimits

0x8c2b,	// (0x00034beb) cmail_ddmenu_btn01_pane

0x8c3e,	// (0x00034bfe) cmail_ddmenu_btn02_pane_ParamLimits

0x8c3e,	// (0x00034bfe) cmail_ddmenu_btn02_pane

0x8c99,	// (0x00034c59) cmail_ddmenu_btn03_pane_ParamLimits

0x8c99,	// (0x00034c59) cmail_ddmenu_btn03_pane

0x8cec,	// (0x00034cac) main_sp_fs_ctrlbar_pane_ParamLimits

0x8d2b,	// (0x00034ceb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9520,	// (0x000354e0) list_cmail_body_pane_ParamLimits

0x9582,	// (0x00035542) bg_button_pane_cp12

0x95af,	// (0x0003556f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x95af,	// (0x0003556f) list_single_cmail_header_detail_pane_g3

0x95f8,	// (0x000355b8) list_single_cmail_header_detail_pane_t2_ParamLimits

0x95f8,	// (0x000355b8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003bd61) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003bd61) list_single_cmail_header_detail_pane_t

0x97c5,	// (0x00035785) phacti_term_pane_t2_ParamLimits

0x97c5,	// (0x00035785) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003bd6b) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003bd6b) phacti_term_pane_t

0x9d13,	// (0x00035cd3) aid_size_list_single_double

0x9d1f,	// (0x00035cdf) popup_ezdial_listscroll_window

0x9d3b,	// (0x00035cfb) popup_number_entry_window_cp01

0xc07d,	// (0x0003803d) bg_popup_call_pane_cp09

0x9d49,	// (0x00035d09) ezdial_list_pane

0x9d51,	// (0x00035d11) scroll_pane_cp23

0xdf70,	// (0x00039f30) bg_button_pane_cp028_ParamLimits

0xdf70,	// (0x00039f30) bg_button_pane_cp028

0x9d59,	// (0x00035d19) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9d59,	// (0x00035d19) cmail_ddmenu_btn01_pane_g1

0x9d65,	// (0x00035d25) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9d65,	// (0x00035d25) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003bde3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003bde3) cmail_ddmenu_btn01_pane_g

0x9d71,	// (0x00035d31) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x9d71,	// (0x00035d31) cmail_ddmenu_btn01_pane_t1

0xdf70,	// (0x00039f30) bg_button_pane_cp029_ParamLimits

0xdf70,	// (0x00039f30) bg_button_pane_cp029

0x9d86,	// (0x00035d46) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9d86,	// (0x00035d46) cmail_ddmenu_btn02_pane_g1

0x9d9f,	// (0x00035d5f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9d9f,	// (0x00035d5f) cmail_ddmenu_btn02_pane_t1

0xc93a,	// (0x000388fa) bg_button_pane_cp031_ParamLimits

0xc93a,	// (0x000388fa) bg_button_pane_cp031

0x9d86,	// (0x00035d46) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9d86,	// (0x00035d46) cmail_ddmenu_btn03_pane_g1

0x9d9f,	// (0x00035d5f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9d9f,	// (0x00035d5f) cmail_ddmenu_btn03_pane_t1

0x5e5e,	// (0x00031e1e) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e78,	// (0x00031e38) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e78,	// (0x00031e38) cell_dialer2_keypad_pane_t1_copy1

0x7dda,	// (0x00033d9a) ncimui_group_button_pane

0xc93a,	// (0x000388fa) main_sp_fs_calendar_pane_ParamLimits

0x9535,	// (0x000354f5) list_single_cmail_header_caption_pane_ParamLimits

0x9826,	// (0x000357e6) aid_recal_txt_sm_pane

0xafea,	// (0x00036faa) mian_recal_day_pane

0x98a2,	// (0x00035862) popup_sp_fs_cale_preview_window_ParamLimits

0x9dc3,	// (0x00035d83) list_recal_day_pane

0x9e05,	// (0x00035dc5) list_single_recal_day_pane_ParamLimits

0x9e05,	// (0x00035dc5) list_single_recal_day_pane

0x9e17,	// (0x00035dd7) list_single_recal_day_pane_g1_ParamLimits

0x9e17,	// (0x00035dd7) list_single_recal_day_pane_g1

0x9e23,	// (0x00035de3) list_single_recal_day_pane_g2_ParamLimits

0x9e23,	// (0x00035de3) list_single_recal_day_pane_g2

0x9e2f,	// (0x00035def) list_single_recal_day_pane_g3_ParamLimits

0x9e2f,	// (0x00035def) list_single_recal_day_pane_g3

0x9e3b,	// (0x00035dfb) list_single_recal_day_pane_g4_ParamLimits

0x9e3b,	// (0x00035dfb) list_single_recal_day_pane_g4

0x9e49,	// (0x00035e09) list_single_recal_day_pane_g5_ParamLimits

0x9e49,	// (0x00035e09) list_single_recal_day_pane_g5

0x9e5f,	// (0x00035e1f) list_single_recal_day_pane_g6_ParamLimits

0x9e5f,	// (0x00035e1f) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003bdf2) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003bdf2) list_single_recal_day_pane_g

0x9e73,	// (0x00035e33) list_single_recal_day_pane_t1

0x9e85,	// (0x00035e45) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003bdfd) list_single_recal_day_pane_t

0x9e97,	// (0x00035e57) ncimui_query_button_pane_ParamLimits

0x9e97,	// (0x00035e57) ncimui_query_button_pane

0x9ea7,	// (0x00035e67) ncimui_query_button_pane_t1_ParamLimits

0x9ea7,	// (0x00035e67) ncimui_query_button_pane_t1

0x9eba,	// (0x00035e7a) ncimui_query_button_pane_t2_ParamLimits

0x9eba,	// (0x00035e7a) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003be02) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003be02) ncimui_query_button_pane_t

0x9ecd,	// (0x00035e8d) query_button_pane_ParamLimits

0x9ecd,	// (0x00035e8d) query_button_pane

0xafea,	// (0x00036faa) bg_button_pane_cp0028

0x9ee0,	// (0x00035ea0) query_button_pane_t1

0x06f8,	// (0x0002c6b8) main_tport_pane_ParamLimits

0x93ab,	// (0x0003536b) bg_popup_window_pane_cp01_ParamLimits

0x93ab,	// (0x0003536b) bg_popup_window_pane_cp01

0x93c6,	// (0x00035386) heading_pane_cp08_ParamLimits

0x93c6,	// (0x00035386) heading_pane_cp08

0x93d9,	// (0x00035399) heading_pane_cp07_ParamLimits

0x93d9,	// (0x00035399) heading_pane_cp07

0x94a9,	// (0x00035469) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003bd4e) cell_tport_appsw_pane_g

0xcc58,	// (0x00038c18) input_candi_list_open_g1

0xc499,	// (0x00038459) list_cale_time_pane_g6_ParamLimits

0xc499,	// (0x00038459) list_cale_time_pane_g6

0x4e82,	// (0x00030e42) aid_size_touch_calib_1_ParamLimits

0x4e82,	// (0x00030e42) aid_size_touch_calib_1

0x4e94,	// (0x00030e54) aid_size_touch_calib_2_ParamLimits

0x4e94,	// (0x00030e54) aid_size_touch_calib_2

0x4eac,	// (0x00030e6c) aid_size_touch_calib_3_ParamLimits

0x4eac,	// (0x00030e6c) aid_size_touch_calib_3

0x4eca,	// (0x00030e8a) aid_size_touch_calib_4_ParamLimits

0x4eca,	// (0x00030e8a) aid_size_touch_calib_4

0x4ee2,	// (0x00030ea2) main_touch_calib_button_group_pane_ParamLimits

0x4ee2,	// (0x00030ea2) main_touch_calib_button_group_pane

0x4efa,	// (0x00030eba) main_touch_calib_pane_g1_ParamLimits

0x4f0c,	// (0x00030ecc) main_touch_calib_pane_g2_ParamLimits

0x4f1e,	// (0x00030ede) main_touch_calib_pane_g3_ParamLimits

0x4f30,	// (0x00030ef0) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003b711) main_touch_calib_pane_g_ParamLimits

0x4f42,	// (0x00030f02) main_touch_calib_pane_t1_ParamLimits

0x4f5c,	// (0x00030f1c) main_touch_calib_pane_t2_ParamLimits

0x4f76,	// (0x00030f36) main_touch_calib_pane_t3_ParamLimits

0x4f8a,	// (0x00030f4a) main_touch_calib_pane_t4_ParamLimits

0x4f9e,	// (0x00030f5e) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003b71a) main_touch_calib_pane_t_ParamLimits

0xe71c,	// (0x0003a6dc) list_single_fp_cale_pane_g3_ParamLimits

0xe71c,	// (0x0003a6dc) list_single_fp_cale_pane_g3

0xb05a,	// (0x0003701a) bg_button_pane_cp012_ParamLimits

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp03_ParamLimits

0x180b,	// (0x0002d7cb) cell_vitu2_function_top_pane_g1_ParamLimits

0xb05a,	// (0x0003701a) bg_vkb2_func_pane_cp04_ParamLimits

0x7d65,	// (0x00033d25) main_ncimui_button_group_pane_ParamLimits

0x7d65,	// (0x00033d25) main_ncimui_button_group_pane

0x7dc5,	// (0x00033d85) main_ncimui_pane_t3_ParamLimits

0x7dc5,	// (0x00033d85) main_ncimui_pane_t3

0x975f,	// (0x0003571f) phacti_button_group_pane

0x9d13,	// (0x00035cd3) aid_size_list_single_double_ParamLimits

0x9d1f,	// (0x00035cdf) popup_ezdial_listscroll_window_ParamLimits

0x9d3b,	// (0x00035cfb) popup_number_entry_window_cp01_ParamLimits

0x9eee,	// (0x00035eae) phacti_button_pane_ParamLimits

0x9eee,	// (0x00035eae) phacti_button_pane

0xafea,	// (0x00036faa) bg_button_pane_cp14

0x9eff,	// (0x00035ebf) phacti_button_pane_t1

0x9f0d,	// (0x00035ecd) main_touch_calib_button_pane_ParamLimits

0x9f0d,	// (0x00035ecd) main_touch_calib_button_pane

0xbeb8,	// (0x00037e78) bg_button_pane_cp18_ParamLimits

0xbeb8,	// (0x00037e78) bg_button_pane_cp18

0x9f22,	// (0x00035ee2) main_touch_calib_button_pane_t1_ParamLimits

0x9f22,	// (0x00035ee2) main_touch_calib_button_pane_t1

0x9f38,	// (0x00035ef8) main_touch_calib_button_pane_t2_ParamLimits

0x9f38,	// (0x00035ef8) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003be07) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003be07) main_touch_calib_button_pane_t

0xafea,	// (0x00036faa) cell_ncimui_button_pane

0xafea,	// (0x00036faa) bg_button_pane_cp032

0x9f56,	// (0x00035f16) cell_ncimui_button_pane_t1

0xba5e,	// (0x00037a1e) image3_infobar_pane_ParamLimits

0xba5e,	// (0x00037a1e) image3_infobar_pane

0x8508,	// (0x000344c8) fs_bigclock_status_pane_ParamLimits

0x8508,	// (0x000344c8) fs_bigclock_status_pane

0x8515,	// (0x000344d5) main_fs_bigclock_clock_pane_ParamLimits

0x8515,	// (0x000344d5) main_fs_bigclock_clock_pane

0x8533,	// (0x000344f3) main_fs_bigclock_indi_pane_ParamLimits

0x8533,	// (0x000344f3) main_fs_bigclock_indi_pane

0x8565,	// (0x00034525) main_fs_bigclock_swipe_pane_ParamLimits

0x8565,	// (0x00034525) main_fs_bigclock_swipe_pane

0xafea,	// (0x00036faa) main_fs_clock_dumped_data

0x85a4,	// (0x00034564) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x85a4,	// (0x00034564) list_single_fs_bigclock_indicator_pane_g1

0x85bf,	// (0x0003457f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x85bf,	// (0x0003457f) list_single_fs_bigclock_indicator_pane_g2

0x85d9,	// (0x00034599) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x85d9,	// (0x00034599) list_single_fs_bigclock_indicator_pane_g3

0x85f3,	// (0x000345b3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x85f3,	// (0x000345b3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003bc34) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003bc34) list_single_fs_bigclock_indicator_pane_g

0x861e,	// (0x000345de) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x861e,	// (0x000345de) list_single_fs_bigclock_indicator_pane_t1

0x8646,	// (0x00034606) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8646,	// (0x00034606) list_single_fs_bigclock_indicator_pane_t2

0x866e,	// (0x0003462e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x866e,	// (0x0003462e) list_single_fs_bigclock_indicator_pane_t3

0x8696,	// (0x00034656) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8696,	// (0x00034656) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003bc3f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003bc3f) list_single_fs_bigclock_indicator_pane_t

0x9f64,	// (0x00035f24) image3_infobar_fav_pane_ParamLimits

0x9f64,	// (0x00035f24) image3_infobar_fav_pane

0x9f74,	// (0x00035f34) image3_infobar_loc_pane_ParamLimits

0x9f74,	// (0x00035f34) image3_infobar_loc_pane

0x9f88,	// (0x00035f48) image3_infobar_time_pane_ParamLimits

0x9f88,	// (0x00035f48) image3_infobar_time_pane

0xe38d,	// (0x0003a34d) image3_infobar_time_pane_g1

0x9f98,	// (0x00035f58) image3_infobar_time_pane_t1

0xe38d,	// (0x0003a34d) image3_infobar_loc_pane_g1

0x9fa6,	// (0x00035f66) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003be0c) image3_infobar_loc_pane_g

0x9fae,	// (0x00035f6e) image3_infobar_loc_pane_t1

0xe38d,	// (0x0003a34d) image3_infobar_fav_pane_g1

0x9fbc,	// (0x00035f7c) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003be11) image3_infobar_fav_pane_g

0x9fc4,	// (0x00035f84) fs_bigclock_status_battery_pane

0x9fcd,	// (0x00035f8d) fs_bigclock_status_signal_pane

0x9fd6,	// (0x00035f96) fs_bigclock_status_title_pane

0x9fdf,	// (0x00035f9f) fs_bigclock_status_signal_pane_g1

0x9fe8,	// (0x00035fa8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003be16) fs_bigclock_status_signal_pane_g

0x9ff0,	// (0x00035fb0) fs_bigclock_status_battery_pane_g1

0x9ff9,	// (0x00035fb9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003be1b) fs_bigclock_status_battery_pane_g

0xa001,	// (0x00035fc1) fs_bigclock_status_title_pane_t1

0xa00f,	// (0x00035fcf) main_fs_bigclock_clock_pane_g1

0xa00f,	// (0x00035fcf) main_fs_bigclock_clock_pane_g2

0xa020,	// (0x00035fe0) main_fs_bigclock_clock_pane_g3

0xa020,	// (0x00035fe0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003be20) main_fs_bigclock_clock_pane_g

0xa033,	// (0x00035ff3) main_fs_bigclock_clock_pane_t1

0xa049,	// (0x00036009) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003be29) main_fs_bigclock_clock_pane_t

0xa05f,	// (0x0003601f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa05f,	// (0x0003601f) list_single_fs_bigclock_indicator_pane

0xa070,	// (0x00036030) list_single_fs_bigclock_pane_ParamLimits

0xa070,	// (0x00036030) list_single_fs_bigclock_pane

0xa0da,	// (0x0003609a) main_fs_bigclock_indicator_pane_t1

0xa0e9,	// (0x000360a9) list_single_fs_bigclock_pane_g1

0xa0f1,	// (0x000360b1) list_single_fs_bigclock_pane_t1

0xe38d,	// (0x0003a34d) main_fs_bigclock_swipe_pane_g1

0xa134,	// (0x000360f4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003be3a) main_fs_bigclock_swipe_pane_g

0xa13c,	// (0x000360fc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xa13c,	// (0x000360fc) main_fs_bigclock_swipe_pane_t1

0x37a0,	// (0x0002f760) call_type_pane_ParamLimits

0xafea,	// (0x00036faa) main_btmg_pane

0x9a5a,	// (0x00035a1a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9a5a,	// (0x00035a1a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003bdad) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003bdad) list_single_cale_mrui_row_pane_g

0x9dec,	// (0x00035dac) list_recal_vselct_arw_lo_pane

0x9df4,	// (0x00035db4) list_recal_vselct_arw_up_pane

0x9dfc,	// (0x00035dbc) list_recal_vselct_pane

0xa159,	// (0x00036119) btmg_button_pane

0xa163,	// (0x00036123) main_btmg_pane_g1

0xafea,	// (0x00036faa) bg_button_pane_cp044

0xa16d,	// (0x0003612d) btmg_button_pane_t1

0xdf5c,	// (0x00039f1c) aid_listscroll_gen

0xc93a,	// (0x000388fa) main_cntbar_detail_pane

0x9510,	// (0x000354d0) list_cmail_folder_pane

0xe297,	// (0x0003a257) sp_fs_scroll_pane_cp03_ParamLimits

0x9535,	// (0x000354f5) list_single_fs_dyc_pane_cp01_ParamLimits

0x9535,	// (0x000354f5) list_single_fs_dyc_pane_cp01

0xa17b,	// (0x0003613b) aid_size_cmail_indent

0xa184,	// (0x00036144) list_single_dyc_row_pane_cp01

0xa1bf,	// (0x0003617f) cntbar_detail_list_pane_ParamLimits

0xa1bf,	// (0x0003617f) cntbar_detail_list_pane

0xa20b,	// (0x000361cb) main_cntbar_detail_cont_pane_ParamLimits

0xa20b,	// (0x000361cb) main_cntbar_detail_cont_pane

0xe297,	// (0x0003a257) scroll_pane_cp032_ParamLimits

0xe297,	// (0x0003a257) scroll_pane_cp032

0xa21f,	// (0x000361df) cntbar_detail_list_event_pane_ParamLimits

0xa21f,	// (0x000361df) cntbar_detail_list_event_pane

0xa1cf,	// (0x0003618f) cntbar_detail_list_shct_pane

0xc324,	// (0x000382e4) aid_list_gen

0xa22f,	// (0x000361ef) aid_scroll

0xa238,	// (0x000361f8) aid_size_touch_scroll_bar

0x704b,	// (0x0003300b) aid_list_double

0x7039,	// (0x00032ff9) aid_list_single

0x7039,	// (0x00032ff9) aid_list_single_lg

0xa241,	// (0x00036201) aid_list_z_g_a_sm

0xa249,	// (0x00036209) aid_list_z_g_d

0xa251,	// (0x00036211) aid_txt_z_prm

0xa25f,	// (0x0003621f) aid_txt_z_prm_cp01

0xa26d,	// (0x0003622d) aid_txt_z_sec

0xa27b,	// (0x0003623b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa27b,	// (0x0003623b) main_cntbar_detail_cont_pane_g1

0xa28f,	// (0x0003624f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa28f,	// (0x0003624f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003be3f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003be3f) main_cntbar_detail_cont_pane_g

0xa29f,	// (0x0003625f) main_cntbar_detail_cont_pane_t1

0xa2ad,	// (0x0003626d) main_cntbar_detail_cont_pane_t2

0xa2bb,	// (0x0003627b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003be44) main_cntbar_detail_cont_pane_t

0xa2c9,	// (0x00036289) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa2c9,	// (0x00036289) cell_cntbar_detail_list_shct_pane

0xa2dd,	// (0x0003629d) cntbar_detail_list_shct_pane_g1

0xa2e6,	// (0x000362a6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003be4b) cntbar_detail_list_shct_pane_g

0xa2ef,	// (0x000362af) cntbar_detail_list_event_pane_g1_ParamLimits

0xa2ef,	// (0x000362af) cntbar_detail_list_event_pane_g1

0xa2fb,	// (0x000362bb) cntbar_detail_list_event_pane_g2_ParamLimits

0xa2fb,	// (0x000362bb) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003be50) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003be50) cntbar_detail_list_event_pane_g

0xa367,	// (0x00036327) cntbar_detail_list_event_pane_t1_ParamLimits

0xa367,	// (0x00036327) cntbar_detail_list_event_pane_t1

0xa37c,	// (0x0003633c) cntbar_detail_list_event_pane_t2_ParamLimits

0xa37c,	// (0x0003633c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003be5d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003be5d) cntbar_detail_list_event_pane_t

0xe38d,	// (0x0003a34d) cell_cntbar_detail_list_shct_pane_g1

0xcab7,	// (0x00038a77) navi_pane_mv_g3

0xc93a,	// (0x000388fa) main_cntbar_detail_pane_ParamLimits

0xafea,	// (0x00036faa) main_notif_wgt_pane

0xb874,	// (0x00037834) aid_tch_main_mp4_pane_g4

0xba56,	// (0x00037a16) popup_slider_window_cp02

0x9de2,	// (0x00035da2) list_recal_day_event_pane

0xa18d,	// (0x0003614d) cntbar_detail_btn_pane_ParamLimits

0xa18d,	// (0x0003614d) cntbar_detail_btn_pane

0xa1a6,	// (0x00036166) cntbar_detail_btn_pane_cp01_ParamLimits

0xa1a6,	// (0x00036166) cntbar_detail_btn_pane_cp01

0xa1cf,	// (0x0003618f) cntbar_detail_list_shct_pane_ParamLimits

0xa1df,	// (0x0003619f) cntbar_detail_pane_g1_ParamLimits

0xa1df,	// (0x0003619f) cntbar_detail_pane_g1

0xa1ef,	// (0x000361af) cntbar_detail_pane_t1_ParamLimits

0xa1ef,	// (0x000361af) cntbar_detail_pane_t1

0xa307,	// (0x000362c7) cntbar_detail_list_event_pane_g3_ParamLimits

0xa307,	// (0x000362c7) cntbar_detail_list_event_pane_g3

0xa31f,	// (0x000362df) cntbar_detail_list_event_pane_g4_ParamLimits

0xa31f,	// (0x000362df) cntbar_detail_list_event_pane_g4

0xa337,	// (0x000362f7) cntbar_detail_list_event_pane_g5_ParamLimits

0xa337,	// (0x000362f7) cntbar_detail_list_event_pane_g5

0xa34f,	// (0x0003630f) cntbar_detail_list_event_pane_g6_ParamLimits

0xa34f,	// (0x0003630f) cntbar_detail_list_event_pane_g6

0xa391,	// (0x00036351) cntbar_detail_list_event_pane_t3_ParamLimits

0xa391,	// (0x00036351) cntbar_detail_list_event_pane_t3

0xa3a3,	// (0x00036363) popup_notif_wgt_window_ParamLimits

0xa3a3,	// (0x00036363) popup_notif_wgt_window

0xa3bc,	// (0x0003637c) popup_submenu_window_cp01_ParamLimits

0xa3bc,	// (0x0003637c) popup_submenu_window_cp01

0xc07d,	// (0x0003803d) bg_popup_window_pane_cp10

0xa3d2,	// (0x00036392) listscroll_notif_wgt_pane

0xa3e4,	// (0x000363a4) list_notif_wgt_window

0xa3ed,	// (0x000363ad) scroll_pane_cp033

0xa3f6,	// (0x000363b6) list_notif_wgt_row_pane_ParamLimits

0xa3f6,	// (0x000363b6) list_notif_wgt_row_pane

0xa406,	// (0x000363c6) aid_size_list_notif_wgt_del

0xa413,	// (0x000363d3) list_notif_wgt_row_pane_g1

0xa41f,	// (0x000363df) list_notif_wgt_row_pane_g2

0xa42e,	// (0x000363ee) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003be64) list_notif_wgt_row_pane_g

0xa43b,	// (0x000363fb) list_notif_wgt_row_pane_t1

0xa451,	// (0x00036411) list_notif_wgt_row_pane_t2

0xa463,	// (0x00036423) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003be6b) list_notif_wgt_row_pane_t

0x6778,	// (0x00032738) list_recal_day_event_pane_g1

0xa475,	// (0x00036435) list_recal_day_event_pane_t1

0xafea,	// (0x00036faa) bg_button_pane_cp045

0xa484,	// (0x00036444) cntbar_detail_btn_pane_t1

0xdf70,	// (0x00039f30) main_callh_pane_ParamLimits

0xdf70,	// (0x00039f30) main_callh_pane

0xafea,	// (0x00036faa) main_coverflow0_pane

0xafea,	// (0x00036faa) main_wgtman_pane

0x857d,	// (0x0003453d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x857d,	// (0x0003453d) main_fs_bigclock_unlock_btn_pane

0x94a1,	// (0x00035461) bg_button_pane_cp16

0x94b1,	// (0x00035471) cell_tport_appsw_pane_g3

0xa492,	// (0x00036452) cf0_flow_pane_ParamLimits

0xa492,	// (0x00036452) cf0_flow_pane

0xa4a7,	// (0x00036467) listscroll_cf0_pane

0xa4b2,	// (0x00036472) main_cf0_pane_g1

0xa4c4,	// (0x00036484) main_cf0_pane_t1_ParamLimits

0xa4c4,	// (0x00036484) main_cf0_pane_t1

0xa4db,	// (0x0003649b) main_cf0_pane_t2_ParamLimits

0xa4db,	// (0x0003649b) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003be77) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003be77) main_cf0_pane_t

0xa4f2,	// (0x000364b2) scroll_pane_cp11

0xa4fd,	// (0x000364bd) cf0_flow_pane_g1

0xa505,	// (0x000364c5) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003be7c) cf0_flow_pane_g

0xa50d,	// (0x000364cd) cf0_flow_pane_t1

0xafea,	// (0x00036faa) main_call6_pane

0xafea,	// (0x00036faa) main_calllock_pane

0xa51b,	// (0x000364db) call6_btn_grp_pane_ParamLimits

0xa51b,	// (0x000364db) call6_btn_grp_pane

0xa535,	// (0x000364f5) call6_pane_g1_ParamLimits

0xa535,	// (0x000364f5) call6_pane_g1

0xa54a,	// (0x0003650a) popup_call6_1st_window_ParamLimits

0xa54a,	// (0x0003650a) popup_call6_1st_window

0xa55b,	// (0x0003651b) popup_call6_2nd_window_ParamLimits

0xa55b,	// (0x0003651b) popup_call6_2nd_window

0xa56c,	// (0x0003652c) cell_call6_btn_pane_ParamLimits

0xa56c,	// (0x0003652c) cell_call6_btn_pane

0xc07d,	// (0x0003803d) bg_popup_call2_in_pane_cp03

0xa580,	// (0x00036540) popup_call6_1st_window_g1

0xa588,	// (0x00036548) popup_call6_1st_window_g2

0xa590,	// (0x00036550) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003be81) popup_call6_1st_window_g

0xa598,	// (0x00036558) popup_call6_1st_window_t1

0xa5a7,	// (0x00036567) popup_call6_1st_window_t2

0xa5b7,	// (0x00036577) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003be88) popup_call6_1st_window_t

0xc07d,	// (0x0003803d) bg_popup_call2_in_pane_cp04

0xa580,	// (0x00036540) popup_call6_2nd_window_g1

0xa588,	// (0x00036548) popup_call6_2nd_window_g2

0xa590,	// (0x00036550) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003be81) popup_call6_2nd_window_g

0xa598,	// (0x00036558) popup_call6_2nd_window_t1

0xafea,	// (0x00036faa) bg_button_pane_cp15

0xa5c7,	// (0x00036587) cell_call6_btn_pane_g1

0xa5d0,	// (0x00036590) cell_call6_btn_pane_t1

0xa5df,	// (0x0003659f) listscroll_wgtman_pane_ParamLimits

0xa5df,	// (0x0003659f) listscroll_wgtman_pane

0xa600,	// (0x000365c0) wgtman_btn_pane_ParamLimits

0xa600,	// (0x000365c0) wgtman_btn_pane

0xc8a2,	// (0x00038862) aid_scroll_copy1

0xa643,	// (0x00036603) list_wgtman_pane

0xa64d,	// (0x0003660d) wgtman_btn_pane_g1_ParamLimits

0xa64d,	// (0x0003660d) wgtman_btn_pane_g1

0xa679,	// (0x00036639) wgtman_btn_pane_t1_ParamLimits

0xa679,	// (0x00036639) wgtman_btn_pane_t1

0xa6b6,	// (0x00036676) wgtman_btn_pane_t2_ParamLimits

0xa6b6,	// (0x00036676) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003be8f) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003be8f) wgtman_btn_pane_t

0xa6cd,	// (0x0003668d) listrow_wgtman_pane_ParamLimits

0xa6cd,	// (0x0003668d) listrow_wgtman_pane

0xa6df,	// (0x0003669f) listrow_wgtman_pane_g1

0xa6ec,	// (0x000366ac) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003be94) listrow_wgtman_pane_g

0xa70a,	// (0x000366ca) listrow_wgtman_pane_t1

0xa722,	// (0x000366e2) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003be99) listrow_wgtman_pane_t

0xa748,	// (0x00036708) wait_bar_pane_cp09

0xa75a,	// (0x0003671a) main_calllock_btn_pane

0xa764,	// (0x00036724) main_calllock_pane_g1

0xafea,	// (0x00036faa) bg_button_pane_cp17

0xa770,	// (0x00036730) main_calllock_btn_pane_g1

0xa779,	// (0x00036739) main_calllock_btn_pane_t1

0xafea,	// (0x00036faa) main_dialer3_pane

0xafea,	// (0x00036faa) main_fmrd2_pane

0xe38d,	// (0x0003a34d) main_fs_bigclock_unlock_btn_pane_g1

0xa790,	// (0x00036750) main_fs_bigclock_unlock_btn_pane_t1

0xa79e,	// (0x0003675e) area_fmrd2_info_pane_ParamLimits

0xa79e,	// (0x0003675e) area_fmrd2_info_pane

0xa7af,	// (0x0003676f) area_fmrd2_visual_pane_ParamLimits

0xa7af,	// (0x0003676f) area_fmrd2_visual_pane

0xa7bd,	// (0x0003677d) fmrd2_indi_pane_ParamLimits

0xa7bd,	// (0x0003677d) fmrd2_indi_pane

0xa7ca,	// (0x0003678a) area_fmrd2_visual_pane_g1

0xa7d2,	// (0x00036792) area_fmrd2_visual_pane_t1

0xa7e2,	// (0x000367a2) area_fmrd2_visual_pane_t2

0xa7f2,	// (0x000367b2) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003bea3) area_fmrd2_visual_pane_t

0xa802,	// (0x000367c2) area_fmrd2_info_pane_g1

0xa80a,	// (0x000367ca) area_fmrd2_info_pane_t1

0xa81a,	// (0x000367da) area_fmrd2_info_pane_t2

0xa82a,	// (0x000367ea) area_fmrd2_info_pane_t3

0xa83a,	// (0x000367fa) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003beaa) area_fmrd2_info_pane_t

0xa848,	// (0x00036808) fmrd2_indi_pane_t1

0xa858,	// (0x00036818) fmrd2_indi_pane_t2

0xa868,	// (0x00036828) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003beb3) fmrd2_indi_pane_t

0x8602,	// (0x000345c2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8602,	// (0x000345c2) list_single_fs_bigclock_indicator_pane_g5

0x86b3,	// (0x00034673) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x86b3,	// (0x00034673) list_single_fs_bigclock_indicator_pane_t5

0x9808,	// (0x000357c8) aid_cell_bcale_month_pane_ParamLimits

0x9808,	// (0x000357c8) aid_cell_bcale_month_pane

0x982f,	// (0x000357ef) bcale_month_pane_ParamLimits

0x982f,	// (0x000357ef) bcale_month_pane

0x9853,	// (0x00035813) bcale_preview_pane_ParamLimits

0x9853,	// (0x00035813) bcale_preview_pane

0xa0f1,	// (0x000360b1) list_single_fs_bigclock_pane_t1_ParamLimits

0xa110,	// (0x000360d0) list_single_fs_bigclock_pane_t2_ParamLimits

0xa110,	// (0x000360d0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003be35) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003be35) list_single_fs_bigclock_pane_t

0xa788,	// (0x00036748) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003be9e) main_fs_bigclock_unlock_btn_pane_g

0xa878,	// (0x00036838) aid_dia3_key_size_ParamLimits

0xa878,	// (0x00036838) aid_dia3_key_size

0xa887,	// (0x00036847) aid_dia3_listrow_size_ParamLimits

0xa887,	// (0x00036847) aid_dia3_listrow_size

0xa89c,	// (0x0003685c) dia3_keypad_fun_pane_ParamLimits

0xa89c,	// (0x0003685c) dia3_keypad_fun_pane

0xa8b8,	// (0x00036878) dia3_keypad_num_pane_ParamLimits

0xa8b8,	// (0x00036878) dia3_keypad_num_pane

0xa8d3,	// (0x00036893) dia3_listscroll_pane_ParamLimits

0xa8d3,	// (0x00036893) dia3_listscroll_pane

0xa8e6,	// (0x000368a6) dia3_numentry_pane_ParamLimits

0xa8e6,	// (0x000368a6) dia3_numentry_pane

0xa8fa,	// (0x000368ba) dia3_list_pane

0xa905,	// (0x000368c5) scroll_pane_cp12

0xafea,	// (0x00036faa) bg_dia3_numentry_pane

0xa910,	// (0x000368d0) dia3_numentry_pane_t1

0xa91f,	// (0x000368df) cell_dia3_key_num_pane

0xa927,	// (0x000368e7) cell_dia3_key0_fun_pane_ParamLimits

0xa927,	// (0x000368e7) cell_dia3_key0_fun_pane

0xa93b,	// (0x000368fb) cell_dia3_key1_fun_pane_ParamLimits

0xa93b,	// (0x000368fb) cell_dia3_key1_fun_pane

0xa953,	// (0x00036913) dia3_listrow_pane

0x7fe3,	// (0x00033fa3) bg_dia3_numentry_pane_g1

0xafea,	// (0x00036faa) bg_button_pane_cp21

0xa965,	// (0x00036925) cell_dia3_key_num_pane_t1

0xa973,	// (0x00036933) cell_dia3_key_num_pane_t2

0xa982,	// (0x00036942) cell_dia3_key_num_pane_t3

0xa991,	// (0x00036951) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003beba) cell_dia3_key_num_pane_t

0xafea,	// (0x00036faa) bg_button_pane_cp19

0xa9a0,	// (0x00036960) cell_dia3_key0_fun_pane_g1

0xafea,	// (0x00036faa) bg_button_pane_cp20

0xa9a8,	// (0x00036968) cell_dia3_key1_fun_pane_g1

0xa9b0,	// (0x00036970) area_left_week_number_pane

0xa9bc,	// (0x0003697c) area_top_day_name_pane

0xa9cf,	// (0x0003698f) frame_month_view_pane

0xa9e2,	// (0x000369a2) grid_month_view_pane

0xa9f0,	// (0x000369b0) cell_top_day_name_pane_ParamLimits

0xa9f0,	// (0x000369b0) cell_top_day_name_pane

0xaa1d,	// (0x000369dd) cell_area_left_week_number_pane_ParamLimits

0xaa1d,	// (0x000369dd) cell_area_left_week_number_pane

0xaa31,	// (0x000369f1) cell_month_view_pane_ParamLimits

0xaa31,	// (0x000369f1) cell_month_view_pane

0xaa5e,	// (0x00036a1e) frm_month_g1

0xaa6b,	// (0x00036a2b) frm_month_g2

0xaa7e,	// (0x00036a3e) frm_month_g3

0xaa91,	// (0x00036a51) frm_month_g4

0xaaa4,	// (0x00036a64) frm_month_g5

0xaab7,	// (0x00036a77) frm_month_g6

0xaaca,	// (0x00036a8a) frm_month_g7

0xaadd,	// (0x00036a9d) frm_month_g8

0xaaea,	// (0x00036aaa) frm_month_g9

0xaafa,	// (0x00036aba) frm_month_g10

0xab0a,	// (0x00036aca) frm_month_g11

0xab1a,	// (0x00036ada) frm_month_g12

0xab2c,	// (0x00036aec) frm_month_g13

0xab3e,	// (0x00036afe) frm_month_g14

0xab52,	// (0x00036b12) frm_month_g15

0xab66,	// (0x00036b26) frm_month_g16

0x000f,

0xff03,	// (0x0003bec3) frm_month_g

0xab7a,	// (0x00036b3a) cell_top_day_name_pane_t1

0xab8d,	// (0x00036b4d) cell_area_left_week_number_pane_g1

0xab99,	// (0x00036b59) cell_area_left_week_number_pane_t1

0xe5f0,	// (0x0003a5b0) cell_month_view_pane_g1

0xabac,	// (0x00036b6c) cell_month_view_pane_t1

0xafea,	// (0x00036faa) main_fps_pane

0x8c61,	// (0x00034c21) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x8c61,	// (0x00034c21) cmail_ddmenu_btn02_pane_cp1

0x8c7d,	// (0x00034c3d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x8c7d,	// (0x00034c3d) cmail_ddmenu_btn02_pane_cp2

0x9d92,	// (0x00035d52) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9d92,	// (0x00035d52) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003bde8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003bde8) cmail_ddmenu_btn02_pane_g

0x9db1,	// (0x00035d71) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9db1,	// (0x00035d71) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003bded) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003bded) cmail_ddmenu_btn02_pane_t

0xabbf,	// (0x00036b7f) fps_text_pane_ParamLimits

0xabbf,	// (0x00036b7f) fps_text_pane

0xabd6,	// (0x00036b96) main_fps_pane_g1_ParamLimits

0xabd6,	// (0x00036b96) main_fps_pane_g1

0xabf0,	// (0x00036bb0) wait_bar_pane_cp010_ParamLimits

0xabf0,	// (0x00036bb0) wait_bar_pane_cp010

0xac01,	// (0x00036bc1) fps_text_pane_t1_ParamLimits

0xac01,	// (0x00036bc1) fps_text_pane_t1

0x5fc7,	// (0x00031f87) cam4_image_uncrop_pane_g1

0x5fd0,	// (0x00031f90) cam4_image_uncrop_pane_g2

0x5fd9,	// (0x00031f99) cam4_image_uncrop_pane_g3

0x5fe2,	// (0x00031fa2) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003b8ae) cam4_image_uncrop_pane_g

0xa953,	// (0x00036913) dia3_listrow_pane_ParamLimits

0xafea,	// (0x00036faa) main_phob2_pane

0x9449,	// (0x00035409) cell_tport_appsw_pane_cp02_ParamLimits

0x9449,	// (0x00035409) cell_tport_appsw_pane_cp02

0x945d,	// (0x0003541d) cell_tport_appsw_pane_cp03_ParamLimits

0x945d,	// (0x0003541d) cell_tport_appsw_pane_cp03

0xafea,	// (0x00036faa) phob2_contact_card_pane

0xafea,	// (0x00036faa) phob2_listscroll_pane

0xac19,	// (0x00036bd9) phob2_list_pane

0xac21,	// (0x00036be1) scroll_pane_cp034

0xac29,	// (0x00036be9) phob2_cc_data_pane_ParamLimits

0xac29,	// (0x00036be9) phob2_cc_data_pane

0xac48,	// (0x00036c08) phob2_cc_listscroll_pane_ParamLimits

0xac48,	// (0x00036c08) phob2_cc_listscroll_pane

0xa6cd,	// (0x0003668d) list_double_large_graphic_phob2_pane_ParamLimits

0xa6cd,	// (0x0003668d) list_double_large_graphic_phob2_pane

0xac66,	// (0x00036c26) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xac66,	// (0x00036c26) list_double_large_graphic_phob2_pane_g1

0xac7c,	// (0x00036c3c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xac7c,	// (0x00036c3c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003bee4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003bee4) list_double_large_graphic_phob2_pane_g

0xac88,	// (0x00036c48) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xac88,	// (0x00036c48) list_double_large_graphic_phob2_pane_t1

0xac9d,	// (0x00036c5d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xac9d,	// (0x00036c5d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003bee9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003bee9) list_double_large_graphic_phob2_pane_t

0xafea,	// (0x00036faa) list_highlight_pane_cp024

0xacaf,	// (0x00036c6f) phob2_cc_button_pane

0xacb7,	// (0x00036c77) phob2_cc_data_pane_g1_ParamLimits

0xacb7,	// (0x00036c77) phob2_cc_data_pane_g1

0xaccc,	// (0x00036c8c) phob2_cc_data_pane_g2_ParamLimits

0xaccc,	// (0x00036c8c) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003beee) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003beee) phob2_cc_data_pane_g

0xacdc,	// (0x00036c9c) phob2_cc_data_pane_t1_ParamLimits

0xacdc,	// (0x00036c9c) phob2_cc_data_pane_t1

0xacf4,	// (0x00036cb4) phob2_cc_data_pane_t2_ParamLimits

0xacf4,	// (0x00036cb4) phob2_cc_data_pane_t2

0xad0c,	// (0x00036ccc) phob2_cc_data_pane_t3_ParamLimits

0xad0c,	// (0x00036ccc) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003bef3) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003bef3) phob2_cc_data_pane_t

0xad24,	// (0x00036ce4) phob2_cc_list_pane_ParamLimits

0xad24,	// (0x00036ce4) phob2_cc_list_pane

0x6aea,	// (0x00032aaa) scroll_pane_cp035_ParamLimits

0x6aea,	// (0x00032aaa) scroll_pane_cp035

0xc93a,	// (0x000388fa) bg_button_pane_cp033

0xad30,	// (0x00036cf0) phob2_cc_button_pane_g1

0xad3c,	// (0x00036cfc) phob2_cc_button_pane_t1

0xad51,	// (0x00036d11) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003befa) phob2_cc_button_pane_t

0xad63,	// (0x00036d23) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad63,	// (0x00036d23) list_double_large_graphic_phob2_cc_pane

0xad75,	// (0x00036d35) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xad75,	// (0x00036d35) list_double_large_graphic_phob2_cc_pane_g1

0xad81,	// (0x00036d41) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xad81,	// (0x00036d41) list_double_large_graphic_phob2_cc_pane_g2

0xad8d,	// (0x00036d4d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xad8d,	// (0x00036d4d) list_double_large_graphic_phob2_cc_pane_g3

0xad99,	// (0x00036d59) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xad99,	// (0x00036d59) list_double_large_graphic_phob2_cc_pane_g4

0xada5,	// (0x00036d65) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xada5,	// (0x00036d65) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003beff) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003beff) list_double_large_graphic_phob2_cc_pane_g

0xadb1,	// (0x00036d71) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xadb1,	// (0x00036d71) list_double_large_graphic_phob2_cc_pane_t1

0xadda,	// (0x00036d9a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xadda,	// (0x00036d9a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003bf0a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003bf0a) list_double_large_graphic_phob2_cc_pane_t

0xae03,	// (0x00036dc3) list_highlight_pane_cp025_ParamLimits

0xae03,	// (0x00036dc3) list_highlight_pane_cp025

0xc93a,	// (0x000388fa) bg_button_pane_cp033_ParamLimits

0xad30,	// (0x00036cf0) phob2_cc_button_pane_g1_ParamLimits

0xad3c,	// (0x00036cfc) phob2_cc_button_pane_t1_ParamLimits

0xad51,	// (0x00036d11) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003befa) phob2_cc_button_pane_t_ParamLimits

0x19b7,	// (0x0002d977) popup_wgtman_window

0xef6d,	// (0x0003af2d) scroll_pane_cp038

0xa625,	// (0x000365e5) wgtman_btn_pane_cp_01_ParamLimits

0xa625,	// (0x000365e5) wgtman_btn_pane_cp_01

0xae11,	// (0x00036dd1) wgtman_content_pane

0xae1a,	// (0x00036dda) wgtman_heading_pane

0xafea,	// (0x00036faa) bg_heading_pane_cp02

0xae23,	// (0x00036de3) wgtman_heading_pane_g1

0xae2b,	// (0x00036deb) wgtman_heading_pane_t1

0xae39,	// (0x00036df9) scroll_pane_cp036

0xae41,	// (0x00036e01) wgtman_list_pane

0xae49,	// (0x00036e09) wgtman_list_pane_t1_ParamLimits

0xae49,	// (0x00036e09) wgtman_list_pane_t1

0xbab0,	// (0x00037a70) cam4_grid_pane

0x6868,	// (0x00032828) bg_button_pane_cp015_ParamLimits

0x687a,	// (0x0003283a) bg_button_pane_cp016_ParamLimits

0x688d,	// (0x0003284d) bg_button_pane_cp017_ParamLimits

0x68f1,	// (0x000328b1) popup_vitu2_query_window_g3_ParamLimits

0x68f1,	// (0x000328b1) popup_vitu2_query_window_g3

0x69ae,	// (0x0003296e) popup_vitu2_query_window_t6_ParamLimits

0x69ae,	// (0x0003296e) popup_vitu2_query_window_t6

0x69d9,	// (0x00032999) popup_vitu2_query_window_t7_ParamLimits

0x69d9,	// (0x00032999) popup_vitu2_query_window_t7

0x5fc7,	// (0x00031f87) cam4_grid_pane_g1

0x5fd0,	// (0x00031f90) cam4_grid_pane_g2

0xae63,	// (0x00036e23) cam4_grid_pane_g3

0xae6c,	// (0x00036e2c) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003bf0f) cam4_grid_pane_g

0x26b0,	// (0x0002e670) aid_placing_vt_slider_lsc_ParamLimits

0x29bb,	// (0x0002e97b) vidtel_button_pane_ParamLimits

0x29bb,	// (0x0002e97b) vidtel_button_pane

0xafea,	// (0x00036faa) bg_button_pane_cp034

0xae77,	// (0x00036e37) vidtel_button_pane_g1

0xae7f,	// (0x00036e3f) vidtel_button_pane_t1

0xf09f,	// (0x0003b05f) aid_size_vtel_slider_touch

0x6aea,	// (0x00032aaa) scroll_pane_cp039

0x8052,	// (0x00034012) ncim_query_button_pane_cp01_ParamLimits

0x8071,	// (0x00034031) ncimui_query_pane_g1_ParamLimits

0xc93a,	// (0x000388fa) input_focus_pane_cp012_ParamLimits

0x8096,	// (0x00034056) ncim_query_entry_pane_t1_ParamLimits

0x6aea,	// (0x00032aaa) scroll_pane_cp039_ParamLimits

0xc9a2,	// (0x00038962) navi_pane_bcale_mc_g1

0xc9aa,	// (0x0003896a) navi_pane_bcale_mc_t1

0x8d10,	// (0x00034cd0) main_sp_fs_email_pane_g1

0x8d1c,	// (0x00034cdc) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003bca5) main_sp_fs_email_pane_g

0x9a66,	// (0x00035a26) list_single_cale_mrui_row_pane_g3_ParamLimits

0x9a66,	// (0x00035a26) list_single_cale_mrui_row_pane_g3

0x9e55,	// (0x00035e15) list_single_recal_day_pane_g5_event_pane

0x9e6b,	// (0x00035e2b) list_single_recal_day_pane_g7

0xae95,	// (0x00036e55) list_recal_day_event_pane_cp01

0xae9e,	// (0x00036e5e) list_recal_vselct_arw_lo_pane_cp01

0xaea6,	// (0x00036e66) list_recal_vselct_arw_up_pane_cp01

0xaeae,	// (0x00036e6e) list_recal_vselct_pane_cp01

0x6778,	// (0x00032738) list_recal_day_event_pane_cp01_g1

0xaeb8,	// (0x00036e78) list_recal_day_event_pane_cp01_t1

0x9e73,	// (0x00035e33) list_single_recal_day_pane_t1_ParamLimits

0x9e85,	// (0x00035e45) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003bdfd) list_single_recal_day_pane_t_ParamLimits

0xbdf3,	// (0x00037db3) bg_notes_pane_ParamLimits

0xbe96,	// (0x00037e56) list_notes_pane_ParamLimits

0x1c17,	// (0x0002dbd7) scroll_pane_cp06_ParamLimits

0xbeb8,	// (0x00037e78) main_notes_pane_ParamLimits

0xafea,	// (0x00036faa) main_welc_pane

0xaec6,	// (0x00036e86) main_welc_body_pane_ParamLimits

0xaec6,	// (0x00036e86) main_welc_body_pane

0xaee4,	// (0x00036ea4) main_welc_opti_pane_ParamLimits

0xaee4,	// (0x00036ea4) main_welc_opti_pane

0xaf29,	// (0x00036ee9) main_welc_pane_t1_ParamLimits

0xaf29,	// (0x00036ee9) main_welc_pane_t1

0xaf47,	// (0x00036f07) main_welc_body_row_pane_ParamLimits

0xaf47,	// (0x00036f07) main_welc_body_row_pane

0xef1b,	// (0x0003aedb) main_welc_opti_row_pane_ParamLimits

0xef1b,	// (0x0003aedb) main_welc_opti_row_pane

0xaf5b,	// (0x00036f1b) main_welc_opti_row_pane_g1

0xaf63,	// (0x00036f23) main_welc_opti_row_pane_t1

0xaf72,	// (0x00036f32) main_welc_body_row_pane_t1

0xa3dc,	// (0x0003639c) popup_notif_wgt_heading_pane

0xa406,	// (0x000363c6) aid_size_list_notif_wgt_del_ParamLimits

0xa413,	// (0x000363d3) list_notif_wgt_row_pane_g1_ParamLimits

0xa41f,	// (0x000363df) list_notif_wgt_row_pane_g2_ParamLimits

0xa42e,	// (0x000363ee) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003be64) list_notif_wgt_row_pane_g_ParamLimits

0xa43b,	// (0x000363fb) list_notif_wgt_row_pane_t1_ParamLimits

0xa451,	// (0x00036411) list_notif_wgt_row_pane_t2_ParamLimits

0xa463,	// (0x00036423) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003be6b) list_notif_wgt_row_pane_t_ParamLimits

0xa6df,	// (0x0003669f) listrow_wgtman_pane_g1_ParamLimits

0xa6ec,	// (0x000366ac) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003be94) listrow_wgtman_pane_g_ParamLimits

0xa70a,	// (0x000366ca) listrow_wgtman_pane_t1_ParamLimits

0xa722,	// (0x000366e2) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003be99) listrow_wgtman_pane_t_ParamLimits

0xa748,	// (0x00036708) wait_bar_pane_cp09_ParamLimits

0xafea,	// (0x00036faa) bg_popup_heading_pane_cp02

0xaf81,	// (0x00036f41) popup_notif_wgt_heading_pane_g1

0xaf89,	// (0x00036f49) popup_notif_wgt_heading_pane_t1

0xafea,	// (0x00036faa) main_vids_pane

0xafea,	// (0x00036faa) vids_listscroll_pane

0xaf97,	// (0x00036f57) scroll_pane_cp040

0xafea,	// (0x00036faa) vids_list_pane

0xafa2,	// (0x00036f62) vids_list_double_pane_ParamLimits

0xafa2,	// (0x00036f62) vids_list_double_pane

0xafb3,	// (0x00036f73) vids_list_double_pane_g1

0xafbc,	// (0x00036f7c) vids_list_double_pane_t1

0xafcc,	// (0x00036f8c) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003bf1d) vids_list_double_pane_t

0xb05a,	// (0x0003701a) main_ncimui_pane_ParamLimits

0x7d79,	// (0x00033d39) main_ncimui_pane_g1_ParamLimits

0x7d85,	// (0x00033d45) main_ncimui_pane_g2_ParamLimits

0x7d85,	// (0x00033d45) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003bbaa) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003bbaa) main_ncimui_pane_g

0xaeff,	// (0x00036ebf) main_welc_pane_g1_ParamLimits

0xaeff,	// (0x00036ebf) main_welc_pane_g1

0xaf14,	// (0x00036ed4) main_welc_pane_g2_ParamLimits

0xaf14,	// (0x00036ed4) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003bf18) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003bf18) main_welc_pane_g

0xbdf3,	// (0x00037db3) listscroll_mce_pane_ParamLimits

0xcaf7,	// (0x00038ab7) wait_bar_pane_cp10

0xdf64,	// (0x00039f24) main_cale_day_pane_ParamLimits

0xdf64,	// (0x00039f24) main_cale_week_pane_ParamLimits

0xbdf3,	// (0x00037db3) main_messa_pane_ParamLimits

0x5822,	// (0x000317e2) main_clock2_btn_pane_ParamLimits

0x5822,	// (0x000317e2) main_clock2_btn_pane

0xe7a4,	// (0x0003a764) main_clock2_btn_pane_cp01_ParamLimits

0xe7a4,	// (0x0003a764) main_clock2_btn_pane_cp01

0x99a5,	// (0x00035965) list_cale_mrui_pane_ParamLimits

0xa4bc,	// (0x0003647c) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003be72) main_cf0_pane_g

0xa9b0,	// (0x00036970) area_left_week_number_pane_ParamLimits

0xa9bc,	// (0x0003697c) area_top_day_name_pane_ParamLimits

0xa9cf,	// (0x0003698f) frame_month_view_pane_ParamLimits

0xa9e2,	// (0x000369a2) grid_month_view_pane_ParamLimits

0xaa5e,	// (0x00036a1e) frm_month_g1_ParamLimits

0xaa6b,	// (0x00036a2b) frm_month_g2_ParamLimits

0xaa7e,	// (0x00036a3e) frm_month_g3_ParamLimits

0xaa91,	// (0x00036a51) frm_month_g4_ParamLimits

0xaaa4,	// (0x00036a64) frm_month_g5_ParamLimits

0xaab7,	// (0x00036a77) frm_month_g6_ParamLimits

0xaaca,	// (0x00036a8a) frm_month_g7_ParamLimits

0xaadd,	// (0x00036a9d) frm_month_g8_ParamLimits

0xaaea,	// (0x00036aaa) frm_month_g9_ParamLimits

0xaafa,	// (0x00036aba) frm_month_g10_ParamLimits

0xab0a,	// (0x00036aca) frm_month_g11_ParamLimits

0xab1a,	// (0x00036ada) frm_month_g12_ParamLimits

0xab2c,	// (0x00036aec) frm_month_g13_ParamLimits

0xab3e,	// (0x00036afe) frm_month_g14_ParamLimits

0xab52,	// (0x00036b12) frm_month_g15_ParamLimits

0xab66,	// (0x00036b26) frm_month_g16_ParamLimits

0xff03,	// (0x0003bec3) frm_month_g_ParamLimits

0xab7a,	// (0x00036b3a) cell_top_day_name_pane_t1_ParamLimits

0xab8d,	// (0x00036b4d) cell_area_left_week_number_pane_g1_ParamLimits

0xab99,	// (0x00036b59) cell_area_left_week_number_pane_t1_ParamLimits

0xe5f0,	// (0x0003a5b0) cell_month_view_pane_g1_ParamLimits

0xabac,	// (0x00036b6c) cell_month_view_pane_t1_ParamLimits

0xbdeb,	// (0x00037dab) main_clock2_btn_pane_g1

0xafdc,	// (0x00036f9c) main_clock2_btn_pane_t1

0xc93a,	// (0x000388fa) listscroll_cmail_pane_ParamLimits

0x8d10,	// (0x00034cd0) main_sp_fs_email_pane_g1_ParamLimits

0x8d1c,	// (0x00034cdc) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003bca5) main_sp_fs_email_pane_g_ParamLimits

0x9dc3,	// (0x00035d83) list_recal_day_pane_ParamLimits

0x9dd4,	// (0x00035d94) mian_recal_day_pane_t1

0x9013,	// (0x00034fd3) list_single_dyc_row_text_pane_t4_ParamLimits

0x9013,	// (0x00034fd3) list_single_dyc_row_text_pane_t4

0x905c,	// (0x0003501c) list_single_dyc_row_text_pane_t5_ParamLimits

0x905c,	// (0x0003501c) list_single_dyc_row_text_pane_t5

0x90d2,	// (0x00035092) list_single_dyc_row_text_pane_t6_ParamLimits

0x90d2,	// (0x00035092) list_single_dyc_row_text_pane_t6

0x360b,	// (0x0002f5cb) aid_mgn_list_cale_time_pane

0xb05a,	// (0x0003701a) main_gallery2_pane_ParamLimits

0xe7ba,	// (0x0003a77a) main_clock2_pane_cp01_t1

0xe7ca,	// (0x0003a78a) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003b784) main_clock2_pane_cp01_t

0x1f28,	// (0x0002dee8) cale_week_scroll_pane_g16_ParamLimits

0x1f28,	// (0x0002dee8) cale_week_scroll_pane_g16

0xc07d,	// (0x0003803d) vorec_slider_pane

0xae7f,	// (0x00036e3f) vidtel_button_pane_t1_ParamLimits

0xa00f,	// (0x00035fcf) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa00f,	// (0x00035fcf) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa020,	// (0x00035fe0) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa020,	// (0x00035fe0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0003be20) main_fs_bigclock_clock_pane_g_ParamLimits

0xa033,	// (0x00035ff3) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa049,	// (0x00036009) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0003be29) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal

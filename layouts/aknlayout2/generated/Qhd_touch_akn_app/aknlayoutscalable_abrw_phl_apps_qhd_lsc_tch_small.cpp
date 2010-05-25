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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000646f4 };

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
0x02ba,	// (0x000649ae) Screen

0x02c6,	// (0x000649ba) application_window

0x0302,	// (0x000649f6) area_bottom_pane_ParamLimits

0x0302,	// (0x000649f6) area_bottom_pane

0x033b,	// (0x00064a2f) area_top_pane_ParamLimits

0x033b,	// (0x00064a2f) area_top_pane

0xa42c,	// (0x0006eb20) call_video_uplink_pane_ParamLimits

0xa42c,	// (0x0006eb20) call_video_uplink_pane

0x03c9,	// (0x00064abd) main_pane_ParamLimits

0x03c9,	// (0x00064abd) main_pane

0xdf6a,	// (0x0007265e) context_pane

0x3903,	// (0x00067ff7) navi_pane

0x3935,	// (0x00068029) popup_cale_events_window_ParamLimits

0x3935,	// (0x00068029) popup_cale_events_window

0xdf7d,	// (0x00072671) popup_mup_playback_window

0x394d,	// (0x00068041) signal_pane

0xbedb,	// (0x000705cf) main_browser_pane

0xc0a0,	// (0x00070794) main_burst_pane

0x3651,	// (0x00067d45) main_calc_pane

0xdf42,	// (0x00072636) main_cale_day_pane

0x3665,	// (0x00067d59) main_cale_month_pane

0xdf42,	// (0x00072636) main_cale_week_pane

0xc0a0,	// (0x00070794) main_call_pane

0xa875,	// (0x0006ef69) main_call_poc_pane

0xc0a0,	// (0x00070794) main_camera_pane

0xc0a0,	// (0x00070794) main_chi_dic_pane

0xc877,	// (0x00070f6b) main_clock_pane

0xa875,	// (0x0006ef69) main_fmradio_pane

0xc0a0,	// (0x00070794) main_graph_messa_pane

0xa875,	// (0x0006ef69) main_help_pane

0xbedb,	// (0x000705cf) main_im_pane

0xbe16,	// (0x0007050a) main_image_pane_ParamLimits

0xbe16,	// (0x0007050a) main_image_pane

0xa875,	// (0x0006ef69) main_location2_pane

0xc0a0,	// (0x00070794) main_location_pane

0xbe16,	// (0x0007050a) main_messa_pane

0xa875,	// (0x0006ef69) main_mp2_pane

0xc0a0,	// (0x00070794) main_mp_pane

0xa875,	// (0x0006ef69) main_msg_pane

0xa875,	// (0x0006ef69) main_mup_eq_pane

0xa875,	// (0x0006ef69) main_mup_pane

0xbedb,	// (0x000705cf) main_notes_pane

0xa875,	// (0x0006ef69) main_pec_pane

0xa875,	// (0x0006ef69) main_phob_pane

0xa875,	// (0x0006ef69) main_pinb_pane

0xa875,	// (0x0006ef69) main_postcard_pane

0xa875,	// (0x0006ef69) main_qdial_pane

0xc0a0,	// (0x00070794) main_skin_pane

0xa875,	// (0x0006ef69) main_smil2_pane

0xc0a0,	// (0x00070794) main_smil_pane

0xc0a0,	// (0x00070794) main_video_pane

0xc0a0,	// (0x00070794) main_video_tele_pane

0xbe16,	// (0x0007050a) main_viewer_pane_ParamLimits

0xbe16,	// (0x0007050a) main_viewer_pane

0xc0a0,	// (0x00070794) main_vorec_pane

0x36b7,	// (0x00067dab) popup_blid_sat_info_window_ParamLimits

0x36b7,	// (0x00067dab) popup_blid_sat_info_window

0x370f,	// (0x00067e03) popup_dyc_status_message_window_ParamLimits

0x370f,	// (0x00067e03) popup_dyc_status_message_window

0x3729,	// (0x00067e1d) popup_grid_large_graphic_window_ParamLimits

0x3729,	// (0x00067e1d) popup_grid_large_graphic_window

0x37e5,	// (0x00067ed9) popup_loc_request_window_ParamLimits

0x37e5,	// (0x00067ed9) popup_loc_request_window

0x38db,	// (0x00067fcf) popup_wml_address_window_ParamLimits

0x38db,	// (0x00067fcf) popup_wml_address_window

0x348b,	// (0x00067b7f) call_muted_g1

0x3140,	// (0x00067834) popup_call_audio_conf_window_ParamLimits

0x3140,	// (0x00067834) popup_call_audio_conf_window

0x349f,	// (0x00067b93) popup_call_audio_first_window_ParamLimits

0x349f,	// (0x00067b93) popup_call_audio_first_window

0x3515,	// (0x00067c09) popup_call_audio_in_window_ParamLimits

0x3515,	// (0x00067c09) popup_call_audio_in_window

0x3551,	// (0x00067c45) popup_call_audio_out_window_ParamLimits

0x3551,	// (0x00067c45) popup_call_audio_out_window

0x358b,	// (0x00067c7f) popup_call_audio_second_window_ParamLimits

0x358b,	// (0x00067c7f) popup_call_audio_second_window

0x35e1,	// (0x00067cd5) popup_call_audio_wait_window_ParamLimits

0x35e1,	// (0x00067cd5) popup_call_audio_wait_window

0x3616,	// (0x00067d0a) popup_number_entry_window_ParamLimits

0x3616,	// (0x00067d0a) popup_number_entry_window

0xa462,	// (0x0006eb56) bg_popup_call_pane_cp05_ParamLimits

0xa462,	// (0x0006eb56) bg_popup_call_pane_cp05

0xa482,	// (0x0006eb76) popup_number_entry_window_t1

0xa495,	// (0x0006eb89) popup_number_entry_window_t2

0xa4a7,	// (0x0006eb9b) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000737be) popup_number_entry_window_t

0xa4b9,	// (0x0006ebad) text_title_cp2

0xa4cc,	// (0x0006ebc0) bg_popup_call_pane_cp_ParamLimits

0xa4cc,	// (0x0006ebc0) bg_popup_call_pane_cp

0xa4da,	// (0x0006ebce) call_thumbnail_pane

0xa4e2,	// (0x0006ebd6) popup_call_audio_in_window_g1_ParamLimits

0xa4e2,	// (0x0006ebd6) popup_call_audio_in_window_g1

0xa4ee,	// (0x0006ebe2) popup_call_audio_in_window_g2_ParamLimits

0xa4ee,	// (0x0006ebe2) popup_call_audio_in_window_g2

0xa4fa,	// (0x0006ebee) popup_call_audio_in_window_g3_ParamLimits

0xa4fa,	// (0x0006ebee) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000737c7) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000737c7) popup_call_audio_in_window_g

0xa506,	// (0x0006ebfa) popup_call_audio_in_window_t1_ParamLimits

0xa506,	// (0x0006ebfa) popup_call_audio_in_window_t1

0xa522,	// (0x0006ec16) popup_call_audio_in_window_t2_ParamLimits

0xa522,	// (0x0006ec16) popup_call_audio_in_window_t2

0xa53e,	// (0x0006ec32) popup_call_audio_in_window_t3_ParamLimits

0xa53e,	// (0x0006ec32) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000737ce) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000737ce) popup_call_audio_in_window_t

0xa4cc,	// (0x0006ebc0) bg_popup_call_pane_cp01_ParamLimits

0xa4cc,	// (0x0006ebc0) bg_popup_call_pane_cp01

0xa4da,	// (0x0006ebce) call_thumbnail_pane_cp02

0xa551,	// (0x0006ec45) call_type_pane_cp022

0xa559,	// (0x0006ec4d) popup_call_audio_out_window_g1_ParamLimits

0xa559,	// (0x0006ec4d) popup_call_audio_out_window_g1

0xa56b,	// (0x0006ec5f) popup_call_audio_out_window_g2_ParamLimits

0xa56b,	// (0x0006ec5f) popup_call_audio_out_window_g2

0xa577,	// (0x0006ec6b) popup_call_audio_out_window_g3_ParamLimits

0xa577,	// (0x0006ec6b) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000737d5) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000737d5) popup_call_audio_out_window_g

0xa589,	// (0x0006ec7d) popup_call_audio_out_window_t1_ParamLimits

0xa589,	// (0x0006ec7d) popup_call_audio_out_window_t1

0xa5a1,	// (0x0006ec95) popup_call_audio_out_window_t2_ParamLimits

0xa5a1,	// (0x0006ec95) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000737dc) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000737dc) popup_call_audio_out_window_t

0xa5b6,	// (0x0006ecaa) bg_popup_call_pane_ParamLimits

0xa5b6,	// (0x0006ecaa) bg_popup_call_pane

0x0585,	// (0x00064c79) call_thumbnail_pane_cp_ParamLimits

0x0585,	// (0x00064c79) call_thumbnail_pane_cp

0xa63a,	// (0x0006ed2e) call_type_pane_cp01_ParamLimits

0xa63a,	// (0x0006ed2e) call_type_pane_cp01

0xa67e,	// (0x0006ed72) popup_call_audio_first_window_g1_ParamLimits

0xa67e,	// (0x0006ed72) popup_call_audio_first_window_g1

0xa6ca,	// (0x0006edbe) popup_call_audio_first_window_g2_ParamLimits

0xa6ca,	// (0x0006edbe) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000737e1) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000737e1) popup_call_audio_first_window_g

0xa70e,	// (0x0006ee02) popup_call_audio_first_window_t1_ParamLimits

0xa70e,	// (0x0006ee02) popup_call_audio_first_window_t1

0xa7ba,	// (0x0006eeae) popup_call_audio_first_window_t4_ParamLimits

0xa7ba,	// (0x0006eeae) popup_call_audio_first_window_t4

0xa846,	// (0x0006ef3a) popup_call_audio_first_window_t5_ParamLimits

0xa846,	// (0x0006ef3a) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000737e6) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000737e6) popup_call_audio_first_window_t

0xa875,	// (0x0006ef69) bg_popup_call_pane_cp02

0xa87f,	// (0x0006ef73) call_type_pane_cp023

0xa887,	// (0x0006ef7b) popup_call_audio_wait_window_g1

0xa88f,	// (0x0006ef83) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000737ed) popup_call_audio_wait_window_g

0xa897,	// (0x0006ef8b) popup_call_audio_wait_window_t3

0xa8a5,	// (0x0006ef99) bg_popup_call_pane_cp03_ParamLimits

0xa8a5,	// (0x0006ef99) bg_popup_call_pane_cp03

0xa905,	// (0x0006eff9) call_thumbnail_pane_cp011_ParamLimits

0xa905,	// (0x0006eff9) call_thumbnail_pane_cp011

0xa911,	// (0x0006f005) call_type_pane_cp034_ParamLimits

0xa911,	// (0x0006f005) call_type_pane_cp034

0xa94d,	// (0x0006f041) popup_call_audio_second_window_g1_ParamLimits

0xa94d,	// (0x0006f041) popup_call_audio_second_window_g1

0xbccf,	// (0x000703c3) popup_call_audio_second_window_g2_ParamLimits

0xbccf,	// (0x000703c3) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000737f2) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000737f2) popup_call_audio_second_window_g

0xbd0b,	// (0x000703ff) popup_call_audio_second_window_t1_ParamLimits

0xbd0b,	// (0x000703ff) popup_call_audio_second_window_t1

0xbd8c,	// (0x00070480) popup_call_audio_second_window_t2_ParamLimits

0xbd8c,	// (0x00070480) popup_call_audio_second_window_t2

0xbdc2,	// (0x000704b6) popup_call_audio_second_window_t3_ParamLimits

0xbdc2,	// (0x000704b6) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000737f7) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000737f7) popup_call_audio_second_window_t

0xa875,	// (0x0006ef69) bg_popup_call_pane_cp04

0xbdf8,	// (0x000704ec) list_conf_pane

0xbe00,	// (0x000704f4) popup_call_audio_conf_window_t1

0xbe0e,	// (0x00070502) call_thumbnail_pane_g1

0xbe16,	// (0x0007050a) bg_pinb_pane_ParamLimits

0xbe16,	// (0x0007050a) bg_pinb_pane

0xbe24,	// (0x00070518) find_pinb_pane

0xbe2d,	// (0x00070521) listscroll_pinb_pane_ParamLimits

0xbe2d,	// (0x00070521) listscroll_pinb_pane

0xbe3c,	// (0x00070530) pinb_bg_pane_g1

0x05a9,	// (0x00064c9d) pinb_bg_pane_g2

0x05b5,	// (0x00064ca9) pinb_bg_pane_g3

0x05c1,	// (0x00064cb5) pinb_bg_pane_g4

0x05cd,	// (0x00064cc1) pinb_bg_pane_g5

0x05d9,	// (0x00064ccd) pinb_bg_pane_g6

0x05e4,	// (0x00064cd8) pinb_bg_pane_g7

0x05ef,	// (0x00064ce3) pinb_bg_pane_g8

0x05fa,	// (0x00064cee) pinb_bg_pane_g9

0x0604,	// (0x00064cf8) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000737fe) pinb_bg_pane_g

0x0621,	// (0x00064d15) grid_pinb_pane

0x062a,	// (0x00064d1e) list_pinb_pane

0x0633,	// (0x00064d27) scroll_pane_cp01_ParamLimits

0x0633,	// (0x00064d27) scroll_pane_cp01

0xbe46,	// (0x0007053a) find_pinb_pane_g1_ParamLimits

0xbe46,	// (0x0007053a) find_pinb_pane_g1

0xbe5e,	// (0x00070552) find_pinb_pane_t1

0xbe70,	// (0x00070564) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00073818) find_pinb_pane_t

0xbe85,	// (0x00070579) input_focus_pane_cp01_ParamLimits

0xbe85,	// (0x00070579) input_focus_pane_cp01

0x0645,	// (0x00064d39) cell_pinb_pane_ParamLimits

0x0645,	// (0x00064d39) cell_pinb_pane

0x066e,	// (0x00064d62) cell_pinb_pane_g1_ParamLimits

0x066e,	// (0x00064d62) cell_pinb_pane_g1

0x067e,	// (0x00064d72) cell_pinb_pane_g2_ParamLimits

0x067e,	// (0x00064d72) cell_pinb_pane_g2

0xbe91,	// (0x00070585) cell_pinb_pane_g3_ParamLimits

0xbe91,	// (0x00070585) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0007381d) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0007381d) cell_pinb_pane_g

0xa875,	// (0x0006ef69) grid_highlight_pane_cp01

0x068a,	// (0x00064d7e) list_pinb_item_pane_ParamLimits

0x068a,	// (0x00064d7e) list_pinb_item_pane

0xa875,	// (0x0006ef69) list_highlight_pane_cp02

0x069c,	// (0x00064d90) list_pinb_item_pane_g1_ParamLimits

0x069c,	// (0x00064d90) list_pinb_item_pane_g1

0x06a9,	// (0x00064d9d) list_pinb_item_pane_g2_ParamLimits

0x06a9,	// (0x00064d9d) list_pinb_item_pane_g2

0x06b5,	// (0x00064da9) list_pinb_item_pane_g3_ParamLimits

0x06b5,	// (0x00064da9) list_pinb_item_pane_g3

0x06c6,	// (0x00064dba) list_pinb_item_pane_g4_ParamLimits

0x06c6,	// (0x00064dba) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00073824) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00073824) list_pinb_item_pane_g

0x06d2,	// (0x00064dc6) list_pinb_item_pane_t1_ParamLimits

0x06d2,	// (0x00064dc6) list_pinb_item_pane_t1

0x0707,	// (0x00064dfb) calc_display_pane

0x072f,	// (0x00064e23) calc_paper_pane

0x0752,	// (0x00064e46) grid_calc_pane

0xa875,	// (0x0006ef69) bg_list_pane_cp01

0x0780,	// (0x00064e74) clock_g1

0x0788,	// (0x00064e7c) clock_g2

0x0001,

0xf139,	// (0x0007382d) clock_g

0x0790,	// (0x00064e84) clock_t1_ParamLimits

0x0790,	// (0x00064e84) clock_t1

0x07a5,	// (0x00064e99) clock_t2_ParamLimits

0x07a5,	// (0x00064e99) clock_t2

0x07b7,	// (0x00064eab) clock_t3_ParamLimits

0x07b7,	// (0x00064eab) clock_t3

0x07c9,	// (0x00064ebd) clock_t4_ParamLimits

0x07c9,	// (0x00064ebd) clock_t4

0x07db,	// (0x00064ecf) clock_t5_ParamLimits

0x07db,	// (0x00064ecf) clock_t5

0x07f0,	// (0x00064ee4) clock_t6_ParamLimits

0x07f0,	// (0x00064ee4) clock_t6

0x0802,	// (0x00064ef6) clock_t7_ParamLimits

0x0802,	// (0x00064ef6) clock_t7

0x0814,	// (0x00064f08) clock_t8_ParamLimits

0x0814,	// (0x00064f08) clock_t8

0x0828,	// (0x00064f1c) clock_t9_ParamLimits

0x0828,	// (0x00064f1c) clock_t9

0x0008,

0xf13e,	// (0x00073832) clock_t_ParamLimits

0xf13e,	// (0x00073832) clock_t

0xbe9d,	// (0x00070591) popup_clock_analogue_window_cp02

0xbe9d,	// (0x00070591) popup_clock_digital_window_cp01

0xbea5,	// (0x00070599) listscroll_help_pane

0xa875,	// (0x0006ef69) phob_pre_status_pane

0xbeaf,	// (0x000705a3) grid_qdial_pane

0xbe16,	// (0x0007050a) listscroll_mce_pane

0xbe16,	// (0x0007050a) bg_notes_pane

0xbeb9,	// (0x000705ad) list_notes_pane

0x083c,	// (0x00064f30) scroll_pane_cp06

0xbec7,	// (0x000705bb) bg_calc_paper_pane

0xa991,	// (0x0006f085) list_calc_pane

0xbedb,	// (0x000705cf) bg_calc_display_pane

0x0850,	// (0x00064f44) calc_display_pane_t1

0x0862,	// (0x00064f56) calc_display_pane_t2

0xa9ab,	// (0x0006f09f) calc_display_pane_t3

0x0002,

0xf151,	// (0x00073845) calc_display_pane_t

0x0874,	// (0x00064f68) cell_calc_pane_ParamLimits

0x0874,	// (0x00064f68) cell_calc_pane

0xbee7,	// (0x000705db) bg_calc_paper_pane_g1

0xbef3,	// (0x000705e7) bg_calc_paper_pane_g2

0xbeff,	// (0x000705f3) bg_calc_paper_pane_g3

0xbf0b,	// (0x000705ff) bg_calc_paper_pane_g4

0xbf17,	// (0x0007060b) bg_calc_paper_pane_g5

0x08a9,	// (0x00064f9d) bg_calc_paper_pane_g6

0x08b8,	// (0x00064fac) bg_calc_paper_pane_g7

0x08c7,	// (0x00064fbb) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0007384c) bg_calc_paper_pane_g

0x08da,	// (0x00064fce) calc_bg_paper_pane_g9

0x08ed,	// (0x00064fe1) list_calc_item_pane_ParamLimits

0x08ed,	// (0x00064fe1) list_calc_item_pane

0xbf23,	// (0x00070617) list_calc_item_pane_g1

0xa9bd,	// (0x0006f0b1) list_calc_item_pane_t1_ParamLimits

0xa9bd,	// (0x0006f0b1) list_calc_item_pane_t1

0x0902,	// (0x00064ff6) list_calc_item_pane_t2_ParamLimits

0x0902,	// (0x00064ff6) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0007385d) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0007385d) list_calc_item_pane_t

0xbf30,	// (0x00070624) cell_calc_pane_g1

0xbf3a,	// (0x0007062e) grid_highlight_pane_cp02

0x0934,	// (0x00065028) bg_calc_display_pane_g1

0x093d,	// (0x00065031) bg_calc_display_pane_g2

0x0947,	// (0x0006503b) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00073867) bg_calc_display_pane_g

0x0950,	// (0x00065044) cell_qdial_pane_ParamLimits

0x0950,	// (0x00065044) cell_qdial_pane

0x0964,	// (0x00065058) cell_qdial_pane_g1_ParamLimits

0x0964,	// (0x00065058) cell_qdial_pane_g1

0x097a,	// (0x0006506e) cell_qdial_pane_g2_ParamLimits

0x097a,	// (0x0006506e) cell_qdial_pane_g2

0xbf5c,	// (0x00070650) cell_qdial_pane_g3_ParamLimits

0xbf5c,	// (0x00070650) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0007386e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0007386e) cell_qdial_pane_g

0x09a1,	// (0x00065095) cell_qdial_pane_t1_ParamLimits

0x09a1,	// (0x00065095) cell_qdial_pane_t1

0x09b9,	// (0x000650ad) cell_qdial_pane_t2_ParamLimits

0x09b9,	// (0x000650ad) cell_qdial_pane_t2

0x09cc,	// (0x000650c0) cell_qdial_pane_t3_ParamLimits

0x09cc,	// (0x000650c0) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00073877) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00073877) cell_qdial_pane_t

0xa875,	// (0x0006ef69) grid_highlight_pane_cp04

0xbf68,	// (0x0007065c) thumbnail_qdial_pane_ParamLimits

0xbf68,	// (0x0007065c) thumbnail_qdial_pane

0xbfc4,	// (0x000706b8) list_help_pane

0xbfcd,	// (0x000706c1) scroll_pane_cp02

0x09df,	// (0x000650d3) help_list_pane_t1_ParamLimits

0x09df,	// (0x000650d3) help_list_pane_t1

0xa9cf,	// (0x0006f0c3) bg_notes_pane_g2

0xa9d7,	// (0x0006f0cb) bg_notes_pane_g3

0xa9df,	// (0x0006f0d3) notes_bg_pane_g1

0xa9e7,	// (0x0006f0db) notes_bg_pane_g4

0xa9ef,	// (0x0006f0e3) notes_bg_pane_g5

0xa9f7,	// (0x0006f0eb) notes_bg_pane_g6

0xa9ff,	// (0x0006f0f3) notes_bg_pane_g7

0xaa07,	// (0x0006f0fb) notes_bg_pane_g8

0xaa0f,	// (0x0006f103) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00073895) notes_bg_pane_g

0x09fc,	// (0x000650f0) list_notes_text_pane_ParamLimits

0x09fc,	// (0x000650f0) list_notes_text_pane

0xbfd6,	// (0x000706ca) list_notes_text_pane_g1

0x0a11,	// (0x00065105) list_notes_text_pane_t1

0x0a1f,	// (0x00065113) listscroll_cale_week_pane

0x0a4b,	// (0x0006513f) bg_cale_heading_pane

0xbff9,	// (0x000706ed) bg_cale_pane_cp01

0x0a63,	// (0x00065157) cale_week_corner_pane

0x0a82,	// (0x00065176) cale_week_day_heading_pane

0x0a9f,	// (0x00065193) cale_week_scroll_pane_g1

0x0ab2,	// (0x000651a6) cale_week_scroll_pane_g2

0x0aca,	// (0x000651be) cale_week_scroll_pane_g3

0x0ae2,	// (0x000651d6) cale_week_scroll_pane_g4

0x0afa,	// (0x000651ee) cale_week_scroll_pane_g5

0x0b1a,	// (0x0006520e) cale_week_scroll_pane_g6

0x0b3a,	// (0x0006522e) cale_week_scroll_pane_g7

0x0b5a,	// (0x0006524e) cale_week_scroll_pane_g8

0x0b7e,	// (0x00065272) cale_week_scroll_pane_g9

0x0b96,	// (0x0006528a) cale_week_scroll_pane_g10

0x0bae,	// (0x000652a2) cale_week_scroll_pane_g11

0x0bc6,	// (0x000652ba) cale_week_scroll_pane_g12

0x0bde,	// (0x000652d2) cale_week_scroll_pane_g13

0x0bde,	// (0x000652d2) cale_week_scroll_pane_g14

0x0bde,	// (0x000652d2) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000738a4) cale_week_scroll_pane_g

0x0c1a,	// (0x0006530e) cale_week_time_pane

0x0c3e,	// (0x00065332) grid_cale_week_pane

0xc028,	// (0x0007071c) scroll_pane_cp08

0x0c64,	// (0x00065358) cell_cale_week_pane_ParamLimits

0x0c64,	// (0x00065358) cell_cale_week_pane

0x0cf2,	// (0x000653e6) cale_week_day_heading_pane_t1

0x0d1c,	// (0x00065410) cale_week_day_heading_pane_t2

0x0d4b,	// (0x0006543f) cale_week_day_heading_pane_t3

0x0d7a,	// (0x0006546e) cale_week_day_heading_pane_t4

0x0da9,	// (0x0006549d) cale_week_day_heading_pane_t5

0x0de0,	// (0x000654d4) cale_week_day_heading_pane_t6

0x0e17,	// (0x0006550b) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000738c5) cale_week_day_heading_pane_t

0xc045,	// (0x00070739) bg_cale_side_pane

0x0e41,	// (0x00065535) cale_week_time_pane_t1

0x0e5b,	// (0x0006554f) cale_week_time_pane_t2

0x0e75,	// (0x00065569) cale_week_time_pane_t3

0x0e8f,	// (0x00065583) cale_week_time_pane_t4

0x0ea9,	// (0x0006559d) cale_week_time_pane_t5

0x0ec3,	// (0x000655b7) cale_week_time_pane_t6

0x0edd,	// (0x000655d1) cale_week_time_pane_t7

0x0ef7,	// (0x000655eb) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000738d4) cale_week_time_pane_t

0x0f11,	// (0x00065605) cell_cale_week_pane_g2

0x0f30,	// (0x00065624) cell_cale_week_pane_g3_ParamLimits

0x0f30,	// (0x00065624) cell_cale_week_pane_g3

0xc053,	// (0x00070747) grid_highlight_pane_cp07

0xc05b,	// (0x0007074f) listscroll_gms_pane

0xc065,	// (0x00070759) grid_gms_pane

0xc06e,	// (0x00070762) listscroll_gms_pane_g1

0xc076,	// (0x0007076a) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000738e5) listscroll_gms_pane_g

0x0f48,	// (0x0006563c) scroll_pane_cp010

0x0f53,	// (0x00065647) cell_gms_pane_ParamLimits

0x0f53,	// (0x00065647) cell_gms_pane

0x0f66,	// (0x0006565a) cell_gms_pane_g1

0xc07e,	// (0x00070772) cell_gms_pane_g2

0xc086,	// (0x0007077a) cell_gms_pane_g3

0xc08f,	// (0x00070783) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000738ea) cell_gms_pane_g

0xc098,	// (0x0007078c) grid_highlight_pane_cp09

0x3435,	// (0x00067b29) phob_pre_status_pane_g1

0x343d,	// (0x00067b31) phob_pre_status_pane_g2

0x3445,	// (0x00067b39) phob_pre_status_pane_g3

0x344d,	// (0x00067b41) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x00073cd5) phob_pre_status_pane_g

0x345d,	// (0x00067b51) phob_pre_status_pane_t1

0x346b,	// (0x00067b5f) phob_pre_status_pane_t2

0x347b,	// (0x00067b6f) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00073ce0) phob_pre_status_pane_t

0xc0a0,	// (0x00070794) bg_list_pane_cp05

0x0f76,	// (0x0006566a) grid_vorec_pane

0x0f7e,	// (0x00065672) vorec_t1

0x0f8c,	// (0x00065680) vorec_t2

0x0f9a,	// (0x0006568e) vorec_t3

0x0fa8,	// (0x0006569c) vorec_t4

0xa3ac,	// (0x0006eaa0) vorec_t5

0xa3ba,	// (0x0006eaae) vorec_t6

0x0004,

0xf1ff,	// (0x000738f3) vorec_t

0xa3c8,	// (0x0006eabc) wait_bar_pane_cp01

0x0fc4,	// (0x000656b8) cell_vorec_pane_ParamLimits

0x0fc4,	// (0x000656b8) cell_vorec_pane

0xaa17,	// (0x0006f10b) cell_vorec_pane_g1

0xa875,	// (0x0006ef69) grid_highlight_pane_cp05

0x0fec,	// (0x000656e0) cams_zoom_pane

0x0ffb,	// (0x000656ef) image_vga_pane

0x1015,	// (0x00065709) main_camera_pane_g1

0x1027,	// (0x0006571b) main_camera_pane_g2

0x1037,	// (0x0006572b) main_camera_pane_g3

0x1047,	// (0x0006573b) main_camera_pane_g4

0x1057,	// (0x0006574b) main_camera_pane_g5

0x1067,	// (0x0006575b) main_camera_pane_g6

0x1079,	// (0x0006576d) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000738fe) main_camera_pane_g

0x1089,	// (0x0006577d) main_camera_pane_t1

0x109f,	// (0x00065793) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007390f) main_camera_pane_t

0x10d9,	// (0x000657cd) cams_zoom_pane_cp_ParamLimits

0x10d9,	// (0x000657cd) cams_zoom_pane_cp

0x1101,	// (0x000657f5) image_cif_pane_ParamLimits

0x1101,	// (0x000657f5) image_cif_pane

0x1137,	// (0x0006582b) image_subqcif_pane

0x113f,	// (0x00065833) main_video_pane_g1_ParamLimits

0x113f,	// (0x00065833) main_video_pane_g1

0x1163,	// (0x00065857) main_video_pane_g2_ParamLimits

0x1163,	// (0x00065857) main_video_pane_g2

0x1197,	// (0x0006588b) main_video_pane_g3_ParamLimits

0x1197,	// (0x0006588b) main_video_pane_g3

0x11c5,	// (0x000658b9) main_video_pane_g4_ParamLimits

0x11c5,	// (0x000658b9) main_video_pane_g4

0x11f3,	// (0x000658e7) main_video_pane_g5_ParamLimits

0x11f3,	// (0x000658e7) main_video_pane_g5

0xc0b4,	// (0x000707a8) main_video_pane_g6_ParamLimits

0xc0b4,	// (0x000707a8) main_video_pane_g6

0x0006,

0xf220,	// (0x00073914) main_video_pane_g_ParamLimits

0xf220,	// (0x00073914) main_video_pane_g

0x121c,	// (0x00065910) main_video_pane_t1_ParamLimits

0x121c,	// (0x00065910) main_video_pane_t1

0xc0ce,	// (0x000707c2) cams_zoom_pane_g1

0xc0d7,	// (0x000707cb) cams_zoom_pane_g2

0xc0e0,	// (0x000707d4) cams_zoom_pane_g3

0xc0e9,	// (0x000707dd) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00073923) cams_zoom_pane_g

0x1279,	// (0x0006596d) grid_cams_pane

0x1293,	// (0x00065987) linegrid_cams_pane

0x12a7,	// (0x0006599b) cell_cams_pane_ParamLimits

0x12a7,	// (0x0006599b) cell_cams_pane

0xc0f2,	// (0x000707e6) cams_burst_image_pane

0xc0fa,	// (0x000707ee) cell_cams_pane_g1

0xa875,	// (0x0006ef69) grid_highlight_pane_cp03

0xbf30,	// (0x00070624) mp_bg_pane_g1

0xa875,	// (0x0006ef69) bg_list_pane_cp03

0xde67,	// (0x0007255b) bg_mp_pane

0xde6f,	// (0x00072563) grid_mp_pane

0xde77,	// (0x0007256b) media_player_g1

0xde7f,	// (0x00072573) media_player_t1

0xde8d,	// (0x00072581) media_player_t2

0xde9b,	// (0x0007258f) media_player_t3

0xdea9,	// (0x0007259d) media_player_t4

0xdeb7,	// (0x000725ab) media_player_t5

0xdec5,	// (0x000725b9) media_player_t6

0xded3,	// (0x000725c7) media_player_t7

0x0006,

0xf5cb,	// (0x00073cbf) media_player_t

0xdee1,	// (0x000725d5) wait_bar_pane_cp02

0xf5b0,	// (0x00073ca4) main_usb_pane_t

0x342c,	// (0x00067b20) cell_mp_pane

0xbf30,	// (0x00070624) cell_mp_pane_g1

0xa875,	// (0x0006ef69) grid_highlight_pane_cp06

0xc102,	// (0x000707f6) grid_skin_colour_pane

0xc10a,	// (0x000707fe) list_highlight_pane_cp03

0x13dd,	// (0x00065ad1) skin_g1

0xc112,	// (0x00070806) skin_t1

0xc121,	// (0x00070815) skin_t2

0x0001,

0xf264,	// (0x00073958) skin_t

0x13e5,	// (0x00065ad9) cell_skin_colour_pane_ParamLimits

0x13e5,	// (0x00065ad9) cell_skin_colour_pane

0xc12f,	// (0x00070823) cell_skin_colour_pane_g1

0x145e,	// (0x00065b52) call_video_g1_ParamLimits

0x145e,	// (0x00065b52) call_video_g1

0x147a,	// (0x00065b6e) call_video_g2_ParamLimits

0x147a,	// (0x00065b6e) call_video_g2

0x0001,

0xf269,	// (0x0007395d) call_video_g_ParamLimits

0xf269,	// (0x0007395d) call_video_g

0x14cc,	// (0x00065bc0) call_video_uplink_pane_cp1_ParamLimits

0x14cc,	// (0x00065bc0) call_video_uplink_pane_cp1

0xc141,	// (0x00070835) call_video_uplink_pane_cp2

0x156b,	// (0x00065c5f) video_down_crop_pane_ParamLimits

0x156b,	// (0x00065c5f) video_down_crop_pane

0x1662,	// (0x00065d56) video_down_pane_ParamLimits

0x1662,	// (0x00065d56) video_down_pane

0xc149,	// (0x0007083d) video_down_subqcif_pane_ParamLimits

0xc149,	// (0x0007083d) video_down_subqcif_pane

0xc161,	// (0x00070855) video_down_subqcif_pane_cp_ParamLimits

0xc161,	// (0x00070855) video_down_subqcif_pane_cp

0xc187,	// (0x0007087b) im_reading_pane_ParamLimits

0xc187,	// (0x0007087b) im_reading_pane

0x1770,	// (0x00065e64) im_writing_pane_ParamLimits

0x1770,	// (0x00065e64) im_writing_pane

0x1786,	// (0x00065e7a) im_reading_pane_t1

0xc1a1,	// (0x00070895) list_im_pane

0xc1b2,	// (0x000708a6) scroll_pane_cp07

0x17bf,	// (0x00065eb3) im_writing_pane_t1_ParamLimits

0x17bf,	// (0x00065eb3) im_writing_pane_t1

0xc1cb,	// (0x000708bf) im_writing_pane_t2_ParamLimits

0xc1cb,	// (0x000708bf) im_writing_pane_t2

0x0001,

0xf273,	// (0x00073967) im_writing_pane_t_ParamLimits

0xf273,	// (0x00073967) im_writing_pane_t

0xa875,	// (0x0006ef69) input_focus_pane_cp04

0xa875,	// (0x0006ef69) input_focus_pane_cp05

0x17d4,	// (0x00065ec8) list_im_single_pane_ParamLimits

0x17d4,	// (0x00065ec8) list_im_single_pane

0x17e8,	// (0x00065edc) list_single_im_pane_t1

0x33ec,	// (0x00067ae0) blid_accuracy_pane

0x33f4,	// (0x00067ae8) blid_compass_pane

0x33fe,	// (0x00067af2) main_location_t1

0x340e,	// (0x00067b02) main_location_t2

0x341e,	// (0x00067b12) main_location_t3

0x0002,

0xf5da,	// (0x00073cce) main_location_t

0xa875,	// (0x0006ef69) aid_levels_location

0xbf30,	// (0x00070624) blid_accuracy_pane_g1

0xbf30,	// (0x00070624) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000739c9) blid_accuracy_pane_g

0xc213,	// (0x00070907) wml_content_pane

0xc251,	// (0x00070945) wml_button_pane_ParamLimits

0xc251,	// (0x00070945) wml_button_pane

0x17f7,	// (0x00065eeb) wml_list_single_large_pane_ParamLimits

0x17f7,	// (0x00065eeb) wml_list_single_large_pane

0x180c,	// (0x00065f00) wml_list_single_medium_pane_ParamLimits

0x180c,	// (0x00065f00) wml_list_single_medium_pane

0x1822,	// (0x00065f16) wml_list_single_small_pane_ParamLimits

0x1822,	// (0x00065f16) wml_list_single_small_pane

0xc265,	// (0x00070959) wml_selection_box_pane_ParamLimits

0xc265,	// (0x00070959) wml_selection_box_pane

0xc278,	// (0x0007096c) wml_list_single_pane_t1

0xc287,	// (0x0007097b) wml_list_single_medium_pane_t1

0xc296,	// (0x0007098a) wml_list_single_large_pane_t1

0xc2a5,	// (0x00070999) input_focus_pane_cp02_ParamLimits

0xc2a5,	// (0x00070999) input_focus_pane_cp02

0xc2b8,	// (0x000709ac) wml_selection_box_pane_g1

0xc2c1,	// (0x000709b5) wml_selection_box_pane_t1_ParamLimits

0xc2c1,	// (0x000709b5) wml_selection_box_pane_t1

0xbe16,	// (0x0007050a) bg_wml_button_pane_ParamLimits

0xbe16,	// (0x0007050a) bg_wml_button_pane

0xc2d9,	// (0x000709cd) wml_button_pane_g1

0xc2e1,	// (0x000709d5) wml_button_pane_t1

0xc2d9,	// (0x000709cd) wml_button_bg_pane_g1

0xc2f1,	// (0x000709e5) wml_button_bg_pane_g2

0xc2f9,	// (0x000709ed) wml_button_bg_pane_g3

0xc301,	// (0x000709f5) wml_button_bg_pane_g4

0xc309,	// (0x000709fd) wml_button_bg_pane_g5

0xc311,	// (0x00070a05) wml_button_bg_pane_g6

0xc319,	// (0x00070a0d) wml_button_bg_pane_g7

0xc321,	// (0x00070a15) wml_button_bg_pane_g8

0xc329,	// (0x00070a1d) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007396c) wml_button_bg_pane_g

0x183a,	// (0x00065f2e) bg_list_pane_cp02

0xc331,	// (0x00070a25) mce_header_pane_ParamLimits

0xc331,	// (0x00070a25) mce_header_pane

0xc347,	// (0x00070a3b) mce_icon_pane

0xc347,	// (0x00070a3b) mce_image_pane

0xc350,	// (0x00070a44) mce_text_pane_ParamLimits

0xc350,	// (0x00070a44) mce_text_pane

0x1842,	// (0x00065f36) scroll_pane_cp03

0xc249,	// (0x0007093d) scroll_pane_cp04

0xc363,	// (0x00070a57) scroll_pane_cp05_ParamLimits

0xc363,	// (0x00070a57) scroll_pane_cp05

0x184c,	// (0x00065f40) mce_header_field_pane_ParamLimits

0x184c,	// (0x00065f40) mce_header_field_pane

0x1863,	// (0x00065f57) mce_header_field_pane_2_ParamLimits

0x1863,	// (0x00065f57) mce_header_field_pane_2

0x1879,	// (0x00065f6d) mce_header_field_pane_3

0x1881,	// (0x00065f75) list_single_mce_message_pane_ParamLimits

0x1881,	// (0x00065f75) list_single_mce_message_pane

0x1896,	// (0x00065f8a) list_single_mce_smart_pane_ParamLimits

0x1896,	// (0x00065f8a) list_single_mce_smart_pane

0xc36f,	// (0x00070a63) input_focus_pane_cp03

0xc378,	// (0x00070a6c) list_header_data_pane

0x18b6,	// (0x00065faa) mce_header_field_pane_t1

0x18c6,	// (0x00065fba) list_single_mce_header_pane_ParamLimits

0x18c6,	// (0x00065fba) list_single_mce_header_pane

0xc380,	// (0x00070a74) list_single_mce_header_pane_t1

0xc38f,	// (0x00070a83) list_single_mce_message_pane_g1

0xc397,	// (0x00070a8b) list_single_mce_message_pane_t1

0x1900,	// (0x00065ff4) bg_cale_heading_pane_cp01_ParamLimits

0x1900,	// (0x00065ff4) bg_cale_heading_pane_cp01

0xc3a5,	// (0x00070a99) bg_cale_pane_cp02_ParamLimits

0xc3a5,	// (0x00070a99) bg_cale_pane_cp02

0x193a,	// (0x0006602e) cale_month_corner_pane

0x1959,	// (0x0006604d) cale_month_day_heading_pane_ParamLimits

0x1959,	// (0x0006604d) cale_month_day_heading_pane

0x19ab,	// (0x0006609f) cale_month_pane_g1_ParamLimits

0x19ab,	// (0x0006609f) cale_month_pane_g1

0x19da,	// (0x000660ce) cale_month_pane_g2_ParamLimits

0x19da,	// (0x000660ce) cale_month_pane_g2

0x1a0a,	// (0x000660fe) cale_month_pane_g3_ParamLimits

0x1a0a,	// (0x000660fe) cale_month_pane_g3

0x1a46,	// (0x0006613a) cale_month_pane_g4_ParamLimits

0x1a46,	// (0x0006613a) cale_month_pane_g4

0x1a82,	// (0x00066176) cale_month_pane_g5_ParamLimits

0x1a82,	// (0x00066176) cale_month_pane_g5

0x1aca,	// (0x000661be) cale_month_pane_g6_ParamLimits

0x1aca,	// (0x000661be) cale_month_pane_g6

0x1b16,	// (0x0006620a) cale_month_pane_g7_ParamLimits

0x1b16,	// (0x0006620a) cale_month_pane_g7

0x1b6a,	// (0x0006625e) cale_month_pane_g8_ParamLimits

0x1b6a,	// (0x0006625e) cale_month_pane_g8

0x1bbe,	// (0x000662b2) cale_month_pane_g9_ParamLimits

0x1bbe,	// (0x000662b2) cale_month_pane_g9

0x1c10,	// (0x00066304) cale_month_pane_g10_ParamLimits

0x1c10,	// (0x00066304) cale_month_pane_g10

0x1c62,	// (0x00066356) cale_month_pane_g11_ParamLimits

0x1c62,	// (0x00066356) cale_month_pane_g11

0x1cb4,	// (0x000663a8) cale_month_pane_g12_ParamLimits

0x1cb4,	// (0x000663a8) cale_month_pane_g12

0x1d06,	// (0x000663fa) cale_month_pane_g13_ParamLimits

0x1d06,	// (0x000663fa) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007397f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007397f) cale_month_pane_g

0x1d58,	// (0x0006644c) cale_month_week_pane

0x1d7c,	// (0x00066470) grid_cale_month_pane_ParamLimits

0x1d7c,	// (0x00066470) grid_cale_month_pane

0x1dc5,	// (0x000664b9) cale_month_day_heading_pane_t1

0x1e4b,	// (0x0006653f) cale_month_day_heading_pane_t2

0x1ec4,	// (0x000665b8) cale_month_day_heading_pane_t3

0x1f3d,	// (0x00066631) cale_month_day_heading_pane_t4

0x1fbe,	// (0x000666b2) cale_month_day_heading_pane_t5

0x2047,	// (0x0006673b) cale_month_day_heading_pane_t6

0x20d0,	// (0x000667c4) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007399a) cale_month_day_heading_pane_t

0xc045,	// (0x00070739) bg_cale_side_pane_cp01

0x2161,	// (0x00066855) cale_month_week_pane_t1

0x217a,	// (0x0006686e) cale_month_week_pane_t2

0x2193,	// (0x00066887) cale_month_week_pane_t3

0x21ac,	// (0x000668a0) cale_month_week_pane_t4

0x21c5,	// (0x000668b9) cale_month_week_pane_t5

0x21de,	// (0x000668d2) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000739a9) cale_month_week_pane_t

0x21f7,	// (0x000668eb) cell_cale_month_pane_ParamLimits

0x21f7,	// (0x000668eb) cell_cale_month_pane

0xaa21,	// (0x0006f115) cell_cale_month_pane_g1

0x234f,	// (0x00066a43) cell_cale_month_pane_t1_ParamLimits

0x234f,	// (0x00066a43) cell_cale_month_pane_t1

0xc053,	// (0x00070747) grid_highlight_pane_cp08

0xbf30,	// (0x00070624) main_smil_g1

0x237b,	// (0x00066a6f) smil_status_pane

0xc3e4,	// (0x00070ad8) smil_text_pane

0xdd87,	// (0x0007247b) bg_popup_call3_rect_pane_g8

0xdd8f,	// (0x00072483) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00073c62) bg_popup_call3_rect_pane_g

0xdfe4,	// (0x000726d8) smil_status_volume_pane_g1

0xc3ee,	// (0x00070ae2) smil_status_pane_t1

0xab6b,	// (0x0006f25f) volume_smil_pane

0xc405,	// (0x00070af9) list_smil_text_pane

0x238e,	// (0x00066a82) scroll_pane_cp011

0x2399,	// (0x00066a8d) smil_text_list_pane_t1_ParamLimits

0x2399,	// (0x00066a8d) smil_text_list_pane_t1

0xaa2d,	// (0x0006f121) aid_volume_smil_ParamLimits

0xaa2d,	// (0x0006f121) aid_volume_smil

0xbf30,	// (0x00070624) smil_volume_pane_g1

0xbf30,	// (0x00070624) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000739c9) smil_volume_pane_g

0x0a1f,	// (0x00065113) listscroll_cale_day_pane

0xc40f,	// (0x00070b03) bg_cale_pane

0xc427,	// (0x00070b1b) list_cale_pane

0xc44a,	// (0x00070b3e) scroll_pane_cp09

0xc45b,	// (0x00070b4f) cale_bg_pane_g1

0xc463,	// (0x00070b57) cale_bg_pane_g2

0xc46b,	// (0x00070b5f) cale_bg_pane_g3

0xc473,	// (0x00070b67) cale_bg_pane_g4

0xc47b,	// (0x00070b6f) cale_bg_pane_g5

0xc483,	// (0x00070b77) cale_bg_pane_g6

0xc48b,	// (0x00070b7f) cale_bg_pane_g7

0xc493,	// (0x00070b87) cale_bg_pane_g8

0xc49b,	// (0x00070b8f) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000739ce) cale_bg_pane_g

0x23dd,	// (0x00066ad1) list_cale_time_pane_ParamLimits

0x23dd,	// (0x00066ad1) list_cale_time_pane

0xc4a3,	// (0x00070b97) list_cale_time_pane_g1_ParamLimits

0xc4a3,	// (0x00070b97) list_cale_time_pane_g1

0xc4af,	// (0x00070ba3) list_cale_time_pane_g2_ParamLimits

0xc4af,	// (0x00070ba3) list_cale_time_pane_g2

0x23f2,	// (0x00066ae6) list_cale_time_pane_g3_ParamLimits

0x23f2,	// (0x00066ae6) list_cale_time_pane_g3

0x2400,	// (0x00066af4) list_cale_time_pane_g4_ParamLimits

0x2400,	// (0x00066af4) list_cale_time_pane_g4

0x240e,	// (0x00066b02) list_cale_time_pane_g5_ParamLimits

0x240e,	// (0x00066b02) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000739e1) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000739e1) list_cale_time_pane_g

0xc4c9,	// (0x00070bbd) list_cale_time_pane_t1_ParamLimits

0xc4c9,	// (0x00070bbd) list_cale_time_pane_t1

0xc4f1,	// (0x00070be5) list_cale_time_pane_t2_ParamLimits

0xc4f1,	// (0x00070be5) list_cale_time_pane_t2

0x276f,	// (0x00066e63) aid_blid_cardinal_pane

0x27ad,	// (0x00066ea1) compass_pane_t4

0xc519,	// (0x00070c0d) list_cale_time_pane_t4_ParamLimits

0xc519,	// (0x00070c0d) list_cale_time_pane_t4

0x27bb,	// (0x00066eaf) compass_pane_t5

0x27c9,	// (0x00066ebd) compass_pane_t6

0x27d7,	// (0x00066ecb) compass_pane_t7

0xc9ca,	// (0x000710be) navi_pane_cc_t1

0xcba7,	// (0x0007129b) aid_phob_thumbnail_center_pane

0x2e04,	// (0x000674f8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000739ee) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000739ee) list_cale_time_pane_t

0xa4cc,	// (0x0006ebc0) bg_popup_window_pane_cp02_ParamLimits

0xa4cc,	// (0x0006ebc0) bg_popup_window_pane_cp02

0xc541,	// (0x00070c35) heading_pane_cp01_ParamLimits

0xc541,	// (0x00070c35) heading_pane_cp01

0xc54d,	// (0x00070c41) loc_req_pane_ParamLimits

0xc54d,	// (0x00070c41) loc_req_pane

0xc55d,	// (0x00070c51) loc_type_pane_ParamLimits

0xc55d,	// (0x00070c51) loc_type_pane

0xc56f,	// (0x00070c63) loc_type_pane_t1_ParamLimits

0xc56f,	// (0x00070c63) loc_type_pane_t1

0xc581,	// (0x00070c75) loc_type_pane_t2_ParamLimits

0xc581,	// (0x00070c75) loc_type_pane_t2

0xc593,	// (0x00070c87) loc_type_pane_t3_ParamLimits

0xc593,	// (0x00070c87) loc_type_pane_t3

0x0002,

0xf301,	// (0x000739f5) loc_type_pane_t_ParamLimits

0xf301,	// (0x000739f5) loc_type_pane_t

0xc5a5,	// (0x00070c99) list_loc_req_pane

0xc5af,	// (0x00070ca3) scroll_pane_cp012

0x241c,	// (0x00066b10) list_single_loc_request_popup_menu_pane_ParamLimits

0x241c,	// (0x00066b10) list_single_loc_request_popup_menu_pane

0xc5ba,	// (0x00070cae) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc5ba,	// (0x00070cae) list_single_loc_request_popup_menu_pane_g1

0xc5c6,	// (0x00070cba) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc5c6,	// (0x00070cba) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000739fc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000739fc) list_single_loc_request_popup_menu_pane_g

0xc5d2,	// (0x00070cc6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc5d2,	// (0x00070cc6) list_single_loc_request_popup_menu_pane_t1

0xbe16,	// (0x0007050a) bg_popup_window_pane_cp03_ParamLimits

0xbe16,	// (0x0007050a) bg_popup_window_pane_cp03

0xd689,	// (0x00071d7d) heading_loc_req_pane_ParamLimits

0xd689,	// (0x00071d7d) heading_loc_req_pane

0x2429,	// (0x00066b1d) popup_dyc_status_message_window_g1_ParamLimits

0x2429,	// (0x00066b1d) popup_dyc_status_message_window_g1

0x243d,	// (0x00066b31) popup_dyc_status_message_window_t1_ParamLimits

0x243d,	// (0x00066b31) popup_dyc_status_message_window_t1

0x2452,	// (0x00066b46) popup_dyc_status_message_window_t2_ParamLimits

0x2452,	// (0x00066b46) popup_dyc_status_message_window_t2

0x2467,	// (0x00066b5b) popup_dyc_status_message_window_t3_ParamLimits

0x2467,	// (0x00066b5b) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00073a01) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00073a01) popup_dyc_status_message_window_t

0xa875,	// (0x0006ef69) bg_heading_pane_cp01

0xc5e8,	// (0x00070cdc) heading_loc_req_pane_g1

0xc5f0,	// (0x00070ce4) heading_loc_req_pane_g2

0xc5f8,	// (0x00070cec) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00073a08) heading_loc_req_pane_g

0xc600,	// (0x00070cf4) heading_loc_req_pane_t1

0xc60f,	// (0x00070d03) bg_popup_sub_pane_cp01_ParamLimits

0xc60f,	// (0x00070d03) bg_popup_sub_pane_cp01

0xc61d,	// (0x00070d11) popup_cale_events_window_g1_ParamLimits

0xc61d,	// (0x00070d11) popup_cale_events_window_g1

0xc63d,	// (0x00070d31) popup_cale_events_window_g2_ParamLimits

0xc63d,	// (0x00070d31) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00073a3c) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00073a3c) popup_cale_events_window_g

0xc65d,	// (0x00070d51) popup_cale_events_window_t1_ParamLimits

0xc65d,	// (0x00070d51) popup_cale_events_window_t1

0xc66f,	// (0x00070d63) popup_cale_events_window_t2_ParamLimits

0xc66f,	// (0x00070d63) popup_cale_events_window_t2

0xc6ad,	// (0x00070da1) popup_cale_events_window_t3_ParamLimits

0xc6ad,	// (0x00070da1) popup_cale_events_window_t3

0xc6e7,	// (0x00070ddb) popup_cale_events_window_t4_ParamLimits

0xc6e7,	// (0x00070ddb) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00073a41) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00073a41) popup_cale_events_window_t

0x256a,	// (0x00066c5e) call_type_pane

0x257a,	// (0x00066c6e) popup_call_status_window_g1

0x258e,	// (0x00066c82) popup_call_status_window_g2

0x25a2,	// (0x00066c96) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00073a4a) popup_call_status_window_g

0xc71d,	// (0x00070e11) call_type_pane_g1

0xc726,	// (0x00070e1a) call_type_pane_g2

0x0001,

0xf35d,	// (0x00073a51) call_type_pane_g

0xa875,	// (0x0006ef69) bg_popup_sub_pane_cp02

0xc72f,	// (0x00070e23) listscroll_popup_wml_pane

0xc737,	// (0x00070e2b) list_wml_pane

0xc741,	// (0x00070e35) scroll_pane_cp013

0xc74c,	// (0x00070e40) list_single_graphic_popup_wml_pane_ParamLimits

0xc74c,	// (0x00070e40) list_single_graphic_popup_wml_pane

0xbf30,	// (0x00070624) list_single_graphic_popup_wml_pane_g1

0xc760,	// (0x00070e54) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00073a56) list_single_graphic_popup_wml_pane_g

0xc768,	// (0x00070e5c) list_single_graphic_popup_wml_pane_t1

0xc77e,	// (0x00070e72) aid_call_pane

0xbe0e,	// (0x00070502) popup_clock_analogue_window_g1

0xbe0e,	// (0x00070502) popup_clock_analogue_window_g2

0xaa4f,	// (0x0006f143) popup_clock_analogue_window_g3

0xaa4f,	// (0x0006f143) popup_clock_analogue_window_g4

0xbf30,	// (0x00070624) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00073a5b) popup_clock_analogue_window_g

0xaa57,	// (0x0006f14b) popup_clock_analogue_window_t1

0xaa65,	// (0x0006f159) clock_digital_number_pane_ParamLimits

0xaa65,	// (0x0006f159) clock_digital_number_pane

0xaa71,	// (0x0006f165) clock_digital_number_pane_cp02_ParamLimits

0xaa71,	// (0x0006f165) clock_digital_number_pane_cp02

0xaa7d,	// (0x0006f171) clock_digital_number_pane_cp03_ParamLimits

0xaa7d,	// (0x0006f171) clock_digital_number_pane_cp03

0xaa89,	// (0x0006f17d) clock_digital_number_pane_cp04_ParamLimits

0xaa89,	// (0x0006f17d) clock_digital_number_pane_cp04

0xaa99,	// (0x0006f18d) clock_digital_separator_pane_ParamLimits

0xaa99,	// (0x0006f18d) clock_digital_separator_pane

0xaaa5,	// (0x0006f199) popup_clock_digital_window_t1

0xbf30,	// (0x00070624) clock_digital_number_pane_g1

0xbf30,	// (0x00070624) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000739c9) clock_digital_number_pane_g

0xbf30,	// (0x00070624) clock_digital_separator_pane_g1

0xbf30,	// (0x00070624) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000739c9) clock_digital_separator_pane_g

0xa875,	// (0x0006ef69) bg_popup_window_pane_cp04

0xc786,	// (0x00070e7a) heading_pane_cp03

0xc78e,	// (0x00070e82) listscroll_popup_gms_pane

0xc796,	// (0x00070e8a) grid_large_graphic_popup_pane

0xc7a0,	// (0x00070e94) listscroll_popup_gms_pane_g1

0xc7a8,	// (0x00070e9c) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00073a66) listscroll_popup_gms_pane_g

0xc249,	// (0x0007093d) scroll_pane_cp014

0x25b1,	// (0x00066ca5) cell_large_graphic_popup_pane_ParamLimits

0x25b1,	// (0x00066ca5) cell_large_graphic_popup_pane

0x25c9,	// (0x00066cbd) cell_large_graphic_popup_pane_g1_ParamLimits

0x25c9,	// (0x00066cbd) cell_large_graphic_popup_pane_g1

0xc7b0,	// (0x00070ea4) cell_large_graphic_popup_pane_g2_ParamLimits

0xc7b0,	// (0x00070ea4) cell_large_graphic_popup_pane_g2

0xc7bc,	// (0x00070eb0) cell_large_graphic_popup_pane_g3_ParamLimits

0xc7bc,	// (0x00070eb0) cell_large_graphic_popup_pane_g3

0xc7c9,	// (0x00070ebd) cell_large_graphic_popup_pane_g4_ParamLimits

0xc7c9,	// (0x00070ebd) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00073a6b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00073a6b) cell_large_graphic_popup_pane_g

0xc7d9,	// (0x00070ecd) grid_highlight_pane_cp010

0xbf30,	// (0x00070624) bg_popup_call_pane_g1

0xc7e3,	// (0x00070ed7) list_single_graphic_popup_conf_pane_ParamLimits

0xc7e3,	// (0x00070ed7) list_single_graphic_popup_conf_pane

0xc7f6,	// (0x00070eea) list_highlight_pane_cp01

0xc7ff,	// (0x00070ef3) list_single_graphic_popup_conf_pane_g1

0xc807,	// (0x00070efb) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00073a74) list_single_graphic_popup_conf_pane_g

0xc80f,	// (0x00070f03) list_single_graphic_popup_conf_pane_t1

0xc81d,	// (0x00070f11) linegrid_cams_pane_g1

0x25d5,	// (0x00066cc9) linegrid_cams_pane_g2

0xc086,	// (0x0007077a) linegrid_cams_pane_g3

0xc826,	// (0x00070f1a) linegrid_cams_pane_g4

0x25de,	// (0x00066cd2) linegrid_cams_pane_g5

0x25e7,	// (0x00066cdb) linegrid_cams_pane_g6

0xc08f,	// (0x00070783) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00073a79) linegrid_cams_pane_g

0xc82f,	// (0x00070f23) popup_clock_analogue_window

0xc82f,	// (0x00070f23) popup_clock_digital_window

0xa875,	// (0x0006ef69) popup_phob_thumbnail_window

0xbf30,	// (0x00070624) call_video_uplink_pane_g1

0xc838,	// (0x00070f2c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00073a88) call_video_uplink_pane_g

0xc840,	// (0x00070f34) video_uplink_pane

0xc848,	// (0x00070f3c) mce_image_pane_g1

0x25f2,	// (0x00066ce6) mce_image_pane_g2

0x25fc,	// (0x00066cf0) mce_image_pane_g3

0x2604,	// (0x00066cf8) mce_image_pane_g4

0x260c,	// (0x00066d00) mce_image_pane_g5

0x0004,

0xf399,	// (0x00073a8d) mce_image_pane_g

0xc852,	// (0x00070f46) control_top_pane_stacon_cp01_ParamLimits

0xc852,	// (0x00070f46) control_top_pane_stacon_cp01

0xc866,	// (0x00070f5a) uni_indicator_pane_stacon_cp01_ParamLimits

0xc866,	// (0x00070f5a) uni_indicator_pane_stacon_cp01

0xc877,	// (0x00070f6b) bg_popup_sub_pane_cp03

0xc881,	// (0x00070f75) chi_dic_find_pane

0x2614,	// (0x00066d08) listscroll_chi_dic_pane

0xc889,	// (0x00070f7d) main_pane_chidic_g1

0xc891,	// (0x00070f85) chi_dic_find_pane_t1

0xc89f,	// (0x00070f93) find_chidic_pane

0xc8a8,	// (0x00070f9c) chi_dic_list_pane_ParamLimits

0xc8a8,	// (0x00070f9c) chi_dic_list_pane

0xc8b9,	// (0x00070fad) scroll_pane_cp020

0xc8c1,	// (0x00070fb5) find_chidic_pane_t1

0xa875,	// (0x0006ef69) input_focus_pane_cp06

0x2628,	// (0x00066d1c) list_chi_dic_pane_ParamLimits

0x2628,	// (0x00066d1c) list_chi_dic_pane

0x263a,	// (0x00066d2e) list_chi_dic_pane_t1_ParamLimits

0x263a,	// (0x00066d2e) list_chi_dic_pane_t1

0xa875,	// (0x0006ef69) list_highlight_pane_cp020

0xc8d0,	// (0x00070fc4) bg_cale_heading_pane_g1

0x264d,	// (0x00066d41) bg_cale_heading_pane_g2

0x2655,	// (0x00066d49) bg_cale_heading_pane_g3

0x265d,	// (0x00066d51) bg_cale_heading_pane_g4

0x2667,	// (0x00066d5b) bg_cale_heading_pane_g5

0x2671,	// (0x00066d65) bg_cale_heading_pane_g6

0x2679,	// (0x00066d6d) bg_cale_heading_pane_g7

0x2681,	// (0x00066d75) bg_cale_heading_pane_g8

0x268b,	// (0x00066d7f) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00073a98) bg_cale_heading_pane_g

0xc8d0,	// (0x00070fc4) bg_cale_side_pane_g1

0x2695,	// (0x00066d89) bg_cale_side_pane_g2

0x269d,	// (0x00066d91) bg_cale_side_pane_g3

0x26a5,	// (0x00066d99) bg_cale_side_pane_g4

0x26ad,	// (0x00066da1) bg_cale_side_pane_g5

0x26b5,	// (0x00066da9) bg_cale_side_pane_g6

0x26bd,	// (0x00066db1) bg_cale_side_pane_g7

0x26c5,	// (0x00066db9) bg_cale_side_pane_g8

0x26cd,	// (0x00066dc1) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00073aab) bg_cale_side_pane_g

0x26d5,	// (0x00066dc9) popup_call_status_window_ParamLimits

0x26d5,	// (0x00066dc9) popup_call_status_window

0xc8d8,	// (0x00070fcc) stacon_top_pane

0xc8e0,	// (0x00070fd4) status_pane_ParamLimits

0xc8e0,	// (0x00070fd4) status_pane

0xc8f5,	// (0x00070fe9) status_small_pane

0xc8fd,	// (0x00070ff1) control_pane

0xa875,	// (0x0006ef69) stacon_bottom_pane

0xc905,	// (0x00070ff9) list_single_mce_smart_pane_t1_ParamLimits

0xc905,	// (0x00070ff9) list_single_mce_smart_pane_t1

0xc918,	// (0x0007100c) list_single_mce_smart_pane_t2_ParamLimits

0xc918,	// (0x0007100c) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00073abe) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00073abe) list_single_mce_smart_pane_t

0x271e,	// (0x00066e12) compass_pane

0x2727,	// (0x00066e1b) main_location2_pane_t1

0x2739,	// (0x00066e2d) main_location2_pane_t2

0x274b,	// (0x00066e3f) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00073ac3) main_location2_pane_t

0xc937,	// (0x0007102b) compass_pane_g1_ParamLimits

0xc937,	// (0x0007102b) compass_pane_g1

0x278f,	// (0x00066e83) compass_pane_t1

0x279e,	// (0x00066e92) compass_pane_t2

0x0005,

0xf3d8,	// (0x00073acc) compass_pane_t

0x27e5,	// (0x00066ed9) text_secondary_cp61

0xc9c1,	// (0x000710b5) navi_pane_cams_g5

0xca3d,	// (0x00071131) navi_pane_im_t1

0xca4b,	// (0x0007113f) navi_pane_mp_g1_ParamLimits

0xca4b,	// (0x0007113f) navi_pane_mp_g1

0xca5f,	// (0x00071153) navi_pane_mp_g2_ParamLimits

0xca5f,	// (0x00071153) navi_pane_mp_g2

0xca6b,	// (0x0007115f) navi_pane_mp_g3_ParamLimits

0xca6b,	// (0x0007115f) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00073ae0) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00073ae0) navi_pane_mp_g

0xca77,	// (0x0007116b) navi_pane_mp_t1

0xca85,	// (0x00071179) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00073ae7) navi_pane_mp_t

0xcaf0,	// (0x000711e4) navi_pane_vt_g1

0xca77,	// (0x0007116b) navi_pane_vt_t1

0xcaf8,	// (0x000711ec) navi_slider_pane

0xc0a0,	// (0x00070794) zooming_pane

0xcb08,	// (0x000711fc) navi_slider_pane_g1

0xaac2,	// (0x0006f1b6) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00073aee) navi_slider_pane_g

0xcb2c,	// (0x00071220) aid_levels_zoom

0xcb34,	// (0x00071228) zooming_pane_g1

0xcb3c,	// (0x00071230) zooming_pane_g2

0xcb3c,	// (0x00071230) zooming_pane_g3

0x0002,

0xf409,	// (0x00073afd) zooming_pane_g

0xcb44,	// (0x00071238) level_10_zoom

0xcb4d,	// (0x00071241) level_11_zoom

0xcb56,	// (0x0007124a) level_1_zoom

0xcb5f,	// (0x00071253) level_2_zoom

0xcb68,	// (0x0007125c) level_3_zoom

0xcb71,	// (0x00071265) level_4_zoom

0xcb7a,	// (0x0007126e) level_5_zoom

0xcb83,	// (0x00071277) level_6_zoom

0xcb8c,	// (0x00071280) level_7_zoom

0xcb95,	// (0x00071289) level_8_zoom

0xcb9e,	// (0x00071292) level_9_zoom

0xcbaf,	// (0x000712a3) popup_phob_thumbnail_window_g1

0xcbb7,	// (0x000712ab) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00073b04) popup_phob_thumbnail_window_g

0xdee9,	// (0x000725dd) level_1_location

0xdef1,	// (0x000725e5) level_2_location

0xdef9,	// (0x000725ed) level_3_location

0xdf01,	// (0x000725f5) level_4_location

0xc0a0,	// (0x00070794) level_5_location

0x2836,	// (0x00066f2a) mce_icon_pane_g1

0x2840,	// (0x00066f34) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00073b09) mce_icon_pane_g

0x2848,	// (0x00066f3c) main_mup_pane_g1_ParamLimits

0x2848,	// (0x00066f3c) main_mup_pane_g1

0x285e,	// (0x00066f52) main_mup_pane_g2_ParamLimits

0x285e,	// (0x00066f52) main_mup_pane_g2

0x2876,	// (0x00066f6a) main_mup_pane_g3_ParamLimits

0x2876,	// (0x00066f6a) main_mup_pane_g3

0x288e,	// (0x00066f82) main_mup_pane_g4_ParamLimits

0x288e,	// (0x00066f82) main_mup_pane_g4

0x28a6,	// (0x00066f9a) main_mup_pane_g5_ParamLimits

0x28a6,	// (0x00066f9a) main_mup_pane_g5

0x28c2,	// (0x00066fb6) main_mup_pane_g6_ParamLimits

0x28c2,	// (0x00066fb6) main_mup_pane_g6

0x28da,	// (0x00066fce) main_mup_pane_g7_ParamLimits

0x28da,	// (0x00066fce) main_mup_pane_g7

0x28f2,	// (0x00066fe6) main_mup_pane_g8_ParamLimits

0x28f2,	// (0x00066fe6) main_mup_pane_g8

0x290c,	// (0x00067000) main_mup_pane_g9_ParamLimits

0x290c,	// (0x00067000) main_mup_pane_g9

0x2926,	// (0x0006701a) main_mup_pane_g10_ParamLimits

0x2926,	// (0x0006701a) main_mup_pane_g10

0x2940,	// (0x00067034) main_mup_pane_g11_ParamLimits

0x2940,	// (0x00067034) main_mup_pane_g11

0x2954,	// (0x00067048) main_mup_pane_g12_ParamLimits

0x2954,	// (0x00067048) main_mup_pane_g12

0x296a,	// (0x0006705e) main_mup_pane_g13_ParamLimits

0x296a,	// (0x0006705e) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00073b0e) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00073b0e) main_mup_pane_g

0x297e,	// (0x00067072) main_mup_pane_t1_ParamLimits

0x297e,	// (0x00067072) main_mup_pane_t1

0x2998,	// (0x0006708c) main_mup_pane_t2_ParamLimits

0x2998,	// (0x0006708c) main_mup_pane_t2

0x29b0,	// (0x000670a4) main_mup_pane_t3_ParamLimits

0x29b0,	// (0x000670a4) main_mup_pane_t3

0x29c8,	// (0x000670bc) main_mup_pane_t4_ParamLimits

0x29c8,	// (0x000670bc) main_mup_pane_t4

0x29e6,	// (0x000670da) main_mup_pane_t5_ParamLimits

0x29e6,	// (0x000670da) main_mup_pane_t5

0x29fb,	// (0x000670ef) main_mup_pane_t6_ParamLimits

0x29fb,	// (0x000670ef) main_mup_pane_t6

0x0005,

0xf435,	// (0x00073b29) main_mup_pane_t_ParamLimits

0xf435,	// (0x00073b29) main_mup_pane_t

0x2a0d,	// (0x00067101) mup_progress_pane_ParamLimits

0x2a0d,	// (0x00067101) mup_progress_pane

0x2a19,	// (0x0006710d) mup_visualizer_pane_ParamLimits

0x2a19,	// (0x0006710d) mup_visualizer_pane

0x2a49,	// (0x0006713d) mup_volume_pane_ParamLimits

0x2a49,	// (0x0006713d) mup_volume_pane

0xc995,	// (0x00071089) mup_visualizer_pane_g1_ParamLimits

0xc995,	// (0x00071089) mup_visualizer_pane_g1

0xc995,	// (0x00071089) mup_visualizer_pane_g2_ParamLimits

0xc995,	// (0x00071089) mup_visualizer_pane_g2

0xc937,	// (0x0007102b) mup_visualizer_pane_g3_ParamLimits

0xc937,	// (0x0007102b) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00073b36) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00073b36) mup_visualizer_pane_g

0xbf30,	// (0x00070624) mup_volume_pane_g1

0xcbc7,	// (0x000712bb) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00073b3d) mup_volume_pane_g

0xbf30,	// (0x00070624) mup_progress_pane_g1

0xcbd0,	// (0x000712c4) mup_progress_pane_g2

0xcbd9,	// (0x000712cd) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00073b42) mup_progress_pane_g

0xa875,	// (0x0006ef69) bg_popup_window_pane_cp05

0xcbe2,	// (0x000712d6) heading_pane_cp02_ParamLimits

0xcbe2,	// (0x000712d6) heading_pane_cp02

0xcbfc,	// (0x000712f0) list_popup_blid_pane

0xcc04,	// (0x000712f8) list_blid_sat_info_pane_ParamLimits

0xcc04,	// (0x000712f8) list_blid_sat_info_pane

0xcc17,	// (0x0007130b) list_blid_sat_info_pane_g1

0xcc1f,	// (0x00071313) list_blid_sat_info_pane_t1

0x2b5f,	// (0x00067253) mup_equalizer_pane_ParamLimits

0x2b5f,	// (0x00067253) mup_equalizer_pane

0x2b78,	// (0x0006726c) mup_equalizer_pane_cp1_ParamLimits

0x2b78,	// (0x0006726c) mup_equalizer_pane_cp1

0x2b95,	// (0x00067289) mup_equalizer_pane_cp2_ParamLimits

0x2b95,	// (0x00067289) mup_equalizer_pane_cp2

0x2bb2,	// (0x000672a6) mup_equalizer_pane_cp3_ParamLimits

0x2bb2,	// (0x000672a6) mup_equalizer_pane_cp3

0x2bd3,	// (0x000672c7) mup_equalizer_pane_cp4_ParamLimits

0x2bd3,	// (0x000672c7) mup_equalizer_pane_cp4

0x2bf4,	// (0x000672e8) mup_equalizer_pane_cp5

0x2c08,	// (0x000672fc) mup_equalizer_pane_cp6

0x2c1c,	// (0x00067310) mup_equalizer_pane_cp7

0xde07,	// (0x000724fb) bg_popup_call_poc_act_pane_g9

0xde0f,	// (0x00072503) bg_popup_call_poc_act_pane_g10

0xde17,	// (0x0007250b) bg_popup_call_poc_act_pane_g11

0x000a,

0xbe16,	// (0x0007050a) mup_scale_pane

0xbf30,	// (0x00070624) mup_scale_pane_g1

0xcc2d,	// (0x00071321) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00073b5e) mup_scale_pane_g

0xcc51,	// (0x00071345) msg_data_pane

0xcc59,	// (0x0007134d) scroll_pane_cp017

0x2c42,	// (0x00067336) bg_list_pane_cp04_ParamLimits

0x2c42,	// (0x00067336) bg_list_pane_cp04

0xcc61,	// (0x00071355) msg_data_pane_g1

0x2c5a,	// (0x0006734e) msg_data_pane_g2

0x2c64,	// (0x00067358) msg_data_pane_g3

0x2c6c,	// (0x00067360) msg_data_pane_g4

0x2c74,	// (0x00067368) msg_data_pane_g5

0x2c7c,	// (0x00067370) msg_data_pane_g6

0x2c84,	// (0x00067378) msg_data_pane_g7

0x0006,

0xf479,	// (0x00073b6d) msg_data_pane_g

0x2c8c,	// (0x00067380) msg_text_pane_ParamLimits

0x2c8c,	// (0x00067380) msg_text_pane

0x2cb9,	// (0x000673ad) qrid_highlight_pane_cp011_ParamLimits

0x2cb9,	// (0x000673ad) qrid_highlight_pane_cp011

0xa875,	// (0x0006ef69) msg_body_pane

0xa875,	// (0x0006ef69) msg_header_pane

0xcc72,	// (0x00071366) input_focus_pane_cp07

0x2cdd,	// (0x000673d1) msg_header_pane_t1_ParamLimits

0x2cdd,	// (0x000673d1) msg_header_pane_t1

0xd6a9,	// (0x00071d9d) msg_header_pane_t2_ParamLimits

0xd6a9,	// (0x00071d9d) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00073b81) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00073b81) msg_header_pane_t

0xcc87,	// (0x0007137b) msg_body_pane_g1

0x2cef,	// (0x000673e3) msg_body_pane_t1_ParamLimits

0x2cef,	// (0x000673e3) msg_body_pane_t1

0xd6bb,	// (0x00071daf) msg_body_pane_t2_ParamLimits

0xd6bb,	// (0x00071daf) msg_body_pane_t2

0xd6cd,	// (0x00071dc1) msg_body_pane_t3_ParamLimits

0xd6cd,	// (0x00071dc1) msg_body_pane_t3

0x0002,

0xf492,	// (0x00073b86) msg_body_pane_t_ParamLimits

0xf492,	// (0x00073b86) msg_body_pane_t

0x2d5a,	// (0x0006744e) main_viewer_pane_g1_ParamLimits

0x2d5a,	// (0x0006744e) main_viewer_pane_g1

0x2d68,	// (0x0006745c) main_viewer_pane_g2_ParamLimits

0x2d68,	// (0x0006745c) main_viewer_pane_g2

0x2d76,	// (0x0006746a) main_viewer_pane_g3_ParamLimits

0x2d76,	// (0x0006746a) main_viewer_pane_g3

0x2d85,	// (0x00067479) main_viewer_pane_g4_ParamLimits

0x2d85,	// (0x00067479) main_viewer_pane_g4

0xaaec,	// (0x0006f1e0) main_viewer_pane_g5_ParamLimits

0xaaec,	// (0x0006f1e0) main_viewer_pane_g5

0xaaec,	// (0x0006f1e0) main_viewer_pane_g7_ParamLimits

0xaaec,	// (0x0006f1e0) main_viewer_pane_g7

0xc5ba,	// (0x00070cae) main_viewer_pane_g8_ParamLimits

0xc5ba,	// (0x00070cae) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00073b96) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00073b96) main_viewer_pane_g

0xcc8f,	// (0x00071383) viewer_content_pane_ParamLimits

0xcc8f,	// (0x00071383) viewer_content_pane

0x2dc1,	// (0x000674b5) main_postcard_pane_g1_ParamLimits

0x2dc1,	// (0x000674b5) main_postcard_pane_g1

0x2dd7,	// (0x000674cb) main_postcard_pane_g2_ParamLimits

0x2dd7,	// (0x000674cb) main_postcard_pane_g2

0x2ded,	// (0x000674e1) main_postcard_pane_g3_ParamLimits

0x2ded,	// (0x000674e1) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00073ba7) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00073ba7) main_postcard_pane_g

0x2e04,	// (0x000674f8) main_postcard_pane_g4

0xdff7,	// (0x000726eb) smil_status_volume_pane_g2

0x2e47,	// (0x0006753b) postcard_pane_ParamLimits

0x2e47,	// (0x0006753b) postcard_pane

0xcc9d,	// (0x00071391) postcard_pane_g1_ParamLimits

0xcc9d,	// (0x00071391) postcard_pane_g1

0x2e89,	// (0x0006757d) postcard_pane_g2_ParamLimits

0x2e89,	// (0x0006757d) postcard_pane_g2

0x2e95,	// (0x00067589) postcard_pane_g3_ParamLimits

0x2e95,	// (0x00067589) postcard_pane_g3

0xccab,	// (0x0007139f) postcard_pane_g4_ParamLimits

0xccab,	// (0x0007139f) postcard_pane_g4

0x2ea1,	// (0x00067595) postcard_pane_g5_ParamLimits

0x2ea1,	// (0x00067595) postcard_pane_g5

0x2eb6,	// (0x000675aa) postcard_pane_g6_ParamLimits

0x2eb6,	// (0x000675aa) postcard_pane_g6

0xcc9d,	// (0x00071391) postcard_pane_g7_ParamLimits

0xcc9d,	// (0x00071391) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00073bb4) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00073bb4) postcard_pane_g

0x2eca,	// (0x000675be) main_mp2_pane_g1_ParamLimits

0x2eca,	// (0x000675be) main_mp2_pane_g1

0x2ed6,	// (0x000675ca) main_mp2_pane_g2_ParamLimits

0x2ed6,	// (0x000675ca) main_mp2_pane_g2

0x2ee2,	// (0x000675d6) main_mp2_pane_g3_ParamLimits

0x2ee2,	// (0x000675d6) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00073bc3) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00073bc3) main_mp2_pane_g

0x2eee,	// (0x000675e2) main_mp2_pane_t1_ParamLimits

0x2eee,	// (0x000675e2) main_mp2_pane_t1

0x2f03,	// (0x000675f7) main_mp2_pane_t2_ParamLimits

0x2f03,	// (0x000675f7) main_mp2_pane_t2

0x2f15,	// (0x00067609) main_mp2_pane_t3_ParamLimits

0x2f15,	// (0x00067609) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00073bca) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00073bca) main_mp2_pane_t

0xccb9,	// (0x000713ad) pec_content_pane_ParamLimits

0xccb9,	// (0x000713ad) pec_content_pane

0xc249,	// (0x0007093d) scroll_pane_cp015

0xcccb,	// (0x000713bf) pec_attribute_pane_ParamLimits

0xcccb,	// (0x000713bf) pec_attribute_pane

0x2f27,	// (0x0006761b) pec_content_pane_g1_ParamLimits

0x2f27,	// (0x0006761b) pec_content_pane_g1

0xccdb,	// (0x000713cf) pec_content_pane_t1_ParamLimits

0xccdb,	// (0x000713cf) pec_content_pane_t1

0xcced,	// (0x000713e1) pec_content_pane_t2_ParamLimits

0xcced,	// (0x000713e1) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00073bd1) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00073bd1) pec_content_pane_t

0x2f33,	// (0x00067627) list_single_graphic_pane_cp01_ParamLimits

0x2f33,	// (0x00067627) list_single_graphic_pane_cp01

0xbe16,	// (0x0007050a) bg_popup_sub_pane_cp04

0xccff,	// (0x000713f3) popup_mup_playback_window_g1

0xcd0b,	// (0x000713ff) popup_mup_playback_window_t1

0xcd20,	// (0x00071414) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00073bd6) popup_mup_playback_window_t

0xcd57,	// (0x0007144b) main_image_pane_g1_ParamLimits

0xcd57,	// (0x0007144b) main_image_pane_g1

0xcd9a,	// (0x0007148e) scroll_pane_cp018_ParamLimits

0xcd9a,	// (0x0007148e) scroll_pane_cp018

0xcdb2,	// (0x000714a6) scroll_pane_cp016_ParamLimits

0xcdb2,	// (0x000714a6) scroll_pane_cp016

0x3000,	// (0x000676f4) smil2_image_pane_ParamLimits

0x3000,	// (0x000676f4) smil2_image_pane

0x3030,	// (0x00067724) smil2_root_pane_ParamLimits

0x3030,	// (0x00067724) smil2_root_pane

0x3068,	// (0x0006775c) smil2_text_pane_ParamLimits

0x3068,	// (0x0006775c) smil2_text_pane

0xa875,	// (0x0006ef69) bg_list_pane_cp06

0xcdee,	// (0x000714e2) grid_radio_pane

0xa875,	// (0x0006ef69) bg_popup_window_pane_cp06

0xcdf6,	// (0x000714ea) main_fmradio_pane_t1

0xc786,	// (0x00070e7a) heading_pane_cp04

0xce04,	// (0x000714f8) main_fmradio_pane_t2

0xde1f,	// (0x00072513) popup_cale_lunar_info_window_g1

0xce12,	// (0x00071506) main_fmradio_pane_t3

0xde27,	// (0x0007251b) popup_cale_lunar_info_window_g2

0xce20,	// (0x00071514) main_fmradio_pane_t4

0x0001,

0xce2e,	// (0x00071522) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x00073cb1) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00073beb) main_fmradio_pane_t

0xce3c,	// (0x00071530) wait_bar_pane_cp03

0xce44,	// (0x00071538) cell_fmradio_pane_ParamLimits

0xce44,	// (0x00071538) cell_fmradio_pane

0xcc9d,	// (0x00071391) cell_fmradio_pane_g1_ParamLimits

0xcc9d,	// (0x00071391) cell_fmradio_pane_g1

0xa875,	// (0x0006ef69) grid_highlight_pane_cp011

0xce57,	// (0x0007154b) poc_content_pane_ParamLimits

0xce57,	// (0x0007154b) poc_content_pane

0xce69,	// (0x0007155d) scroll_pane_cp019

0x30e8,	// (0x000677dc) popup_call_poc_act_window_ParamLimits

0x30e8,	// (0x000677dc) popup_call_poc_act_window

0x310c,	// (0x00067800) popup_call_poc_inact_window_ParamLimits

0x310c,	// (0x00067800) popup_call_poc_inact_window

0xf594,	// (0x00073c88) bg_popup_call_poc_act_pane_g

0xdd97,	// (0x0007248b) bg_popup_call_poc_inact_pane_g1

0xdd9f,	// (0x00072493) bg_popup_call_poc_inact_pane_g2

0xce71,	// (0x00071565) popup_call_poc_act_window_g2

0xdda7,	// (0x0007249b) bg_popup_call_poc_inact_pane_g3

0xddaf,	// (0x000724a3) bg_popup_call_poc_inact_pane_g4

0xddb7,	// (0x000724ab) bg_popup_call_poc_inact_pane_g5

0xce79,	// (0x0007156d) popup_call_poc_act_window_t1_ParamLimits

0xce79,	// (0x0007156d) popup_call_poc_act_window_t1

0xcea1,	// (0x00071595) popup_call_poc_act_window_t2_ParamLimits

0xcea1,	// (0x00071595) popup_call_poc_act_window_t2

0xcec9,	// (0x000715bd) popup_call_poc_act_window_t3_ParamLimits

0xcec9,	// (0x000715bd) popup_call_poc_act_window_t3

0xcef1,	// (0x000715e5) popup_call_poc_act_window_t4_ParamLimits

0xcef1,	// (0x000715e5) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00073bf6) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00073bf6) popup_call_poc_act_window_t

0xddbf,	// (0x000724b3) bg_popup_call_poc_inact_pane_g6

0xddc7,	// (0x000724bb) bg_popup_call_poc_inact_pane_g7

0xddcf,	// (0x000724c3) bg_popup_call_poc_inact_pane_g8

0xcf03,	// (0x000715f7) popup_call_poc_inact_window_g2

0xddd7,	// (0x000724cb) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x00073c75) bg_popup_call_poc_inact_pane_g

0xcf0b,	// (0x000715ff) popup_call_poc_inact_window_t1_ParamLimits

0xcf0b,	// (0x000715ff) popup_call_poc_inact_window_t1

0xcf20,	// (0x00071614) popup_call_poc_inact_window_t2_ParamLimits

0xcf20,	// (0x00071614) popup_call_poc_inact_window_t2

0xcf35,	// (0x00071629) popup_call_poc_inact_window_t3_ParamLimits

0xcf35,	// (0x00071629) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00073bff) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00073bff) popup_call_poc_inact_window_t

0xdf6a,	// (0x0007265e) context_pane_ParamLimits

0x394d,	// (0x00068041) signal_pane_ParamLimits

0xc0a0,	// (0x00070794) main_call2_pane

0xab37,	// (0x0006f22b) popup_phob_thumbnail2_window_ParamLimits

0xab37,	// (0x0006f22b) popup_phob_thumbnail2_window

0xaad4,	// (0x0006f1c8) aid_hotspot_pointer_arrow_pane

0xaadc,	// (0x0006f1d0) aid_hotspot_pointer_hand_pane

0x3455,	// (0x00067b49) phob_pre_status_pane_g5

0x0fec,	// (0x000656e0) cams_zoom_pane_ParamLimits

0x0ffb,	// (0x000656ef) image_vga_pane_ParamLimits

0x1015,	// (0x00065709) main_camera_pane_g1_ParamLimits

0x1027,	// (0x0006571b) main_camera_pane_g2_ParamLimits

0x1037,	// (0x0006572b) main_camera_pane_g3_ParamLimits

0x1047,	// (0x0006573b) main_camera_pane_g4_ParamLimits

0x1057,	// (0x0006574b) main_camera_pane_g5_ParamLimits

0x1067,	// (0x0006575b) main_camera_pane_g6_ParamLimits

0x1079,	// (0x0006576d) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000738fe) main_camera_pane_g_ParamLimits

0x1089,	// (0x0006577d) main_camera_pane_t1_ParamLimits

0x109f,	// (0x00065793) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007390f) main_camera_pane_t_ParamLimits

0xbe16,	// (0x0007050a) bg_popup_preview_window_pane_cp01_ParamLimits

0xbe16,	// (0x0007050a) bg_popup_preview_window_pane_cp01

0xcf4a,	// (0x0007163e) popup_phob_thumbnail2_window_g1_ParamLimits

0xcf4a,	// (0x0007163e) popup_phob_thumbnail2_window_g1

0xa875,	// (0x0006ef69) call2_cli_visual_pane

0x3140,	// (0x00067834) popup_call2_audio_conf_window_ParamLimits

0x3140,	// (0x00067834) popup_call2_audio_conf_window

0x3160,	// (0x00067854) popup_call2_audio_first_window_ParamLimits

0x3160,	// (0x00067854) popup_call2_audio_first_window

0x31f6,	// (0x000678ea) popup_call2_audio_in_window_ParamLimits

0x31f6,	// (0x000678ea) popup_call2_audio_in_window

0x323e,	// (0x00067932) popup_call2_audio_out_window_ParamLimits

0x323e,	// (0x00067932) popup_call2_audio_out_window

0x32a8,	// (0x0006799c) popup_call2_audio_second_window_ParamLimits

0x32a8,	// (0x0006799c) popup_call2_audio_second_window

0x330e,	// (0x00067a02) popup_call2_audio_wait_window_ParamLimits

0x330e,	// (0x00067a02) popup_call2_audio_wait_window

0xa875,	// (0x0006ef69) bg_popup_call2_act_pane_cp03

0xbdf8,	// (0x000704ec) list_conf_pane_cp

0xcf56,	// (0x0007164a) popup_call2_audio_conf_window_t1

0xc7e3,	// (0x00070ed7) list_single_graphic_popup_conf2_pane_ParamLimits

0xc7e3,	// (0x00070ed7) list_single_graphic_popup_conf2_pane

0xc7f6,	// (0x00070eea) list_highlight_pane_cp04

0xcf64,	// (0x00071658) list_single_graphic_popup_conf2_pane_g1

0xc807,	// (0x00070efb) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00073c06) list_single_graphic_popup_conf2_pane_g

0xcf6e,	// (0x00071662) list_single_graphic_popup_conf2_pane_t1

0xcf7c,	// (0x00071670) bg_popup_call2_act_pane_cp01_ParamLimits

0xcf7c,	// (0x00071670) bg_popup_call2_act_pane_cp01

0xd006,	// (0x000716fa) call_type_pane_cp05_ParamLimits

0xd006,	// (0x000716fa) call_type_pane_cp05

0xd05a,	// (0x0007174e) popup_call2_audio_second_window_g1_ParamLimits

0xd05a,	// (0x0007174e) popup_call2_audio_second_window_g1

0xd0ae,	// (0x000717a2) popup_call2_audio_second_window_g2_ParamLimits

0xd0ae,	// (0x000717a2) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00073c0b) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00073c0b) popup_call2_audio_second_window_g

0xd113,	// (0x00071807) popup_call2_audio_second_window_t1_ParamLimits

0xd113,	// (0x00071807) popup_call2_audio_second_window_t1

0xd1ce,	// (0x000718c2) popup_call2_audio_second_window_t2_ParamLimits

0xd1ce,	// (0x000718c2) popup_call2_audio_second_window_t2

0xd221,	// (0x00071915) popup_call2_audio_second_window_t3_ParamLimits

0xd221,	// (0x00071915) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00073c12) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00073c12) popup_call2_audio_second_window_t

0xa875,	// (0x0006ef69) bg_popup_call2_in_pane_cp02

0xa87f,	// (0x0006ef73) call_type_pane_cp04

0xa887,	// (0x0006ef7b) popup_call2_audio_wait_window_g1

0xa88f,	// (0x0006ef83) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000737ed) popup_call2_audio_wait_window_g

0xa897,	// (0x0006ef8b) popup_call2_audio_wait_window_t3

0xd314,	// (0x00071a08) bg_popup_call2_act_pane_ParamLimits

0xd314,	// (0x00071a08) bg_popup_call2_act_pane

0xd3d4,	// (0x00071ac8) call_type_pane_cp03_ParamLimits

0xd3d4,	// (0x00071ac8) call_type_pane_cp03

0xd438,	// (0x00071b2c) popup_call2_audio_first_window_g1_ParamLimits

0xd438,	// (0x00071b2c) popup_call2_audio_first_window_g1

0xd4a8,	// (0x00071b9c) popup_call2_audio_first_window_g2_ParamLimits

0xd4a8,	// (0x00071b9c) popup_call2_audio_first_window_g2

0xc995,	// (0x00071089) popup_call2_audio_first_window_g3_ParamLimits

0xc995,	// (0x00071089) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00073c1b) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00073c1b) popup_call2_audio_first_window_g

0xd586,	// (0x00071c7a) popup_call2_audio_first_window_t1_ParamLimits

0xd586,	// (0x00071c7a) popup_call2_audio_first_window_t1

0xd6df,	// (0x00071dd3) popup_call2_audio_first_window_t4_ParamLimits

0xd6df,	// (0x00071dd3) popup_call2_audio_first_window_t4

0xd7c2,	// (0x00071eb6) popup_call2_audio_first_window_t5_ParamLimits

0xd7c2,	// (0x00071eb6) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00073c26) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00073c26) popup_call2_audio_first_window_t

0xbe0e,	// (0x00070502) bg_popup_call2_act_pane_g1

0xde2f,	// (0x00072523) popup_cale_lunar_info_window_t1

0xde3d,	// (0x00072531) popup_cale_lunar_info_window_t2

0xde4b,	// (0x0007253f) popup_cale_lunar_info_window_t3

0xa875,	// (0x0006ef69) bg_popup_call2_bubble_pane

0xd8c3,	// (0x00071fb7) bg_popup_call2_in_pane_cp01_ParamLimits

0xd8c3,	// (0x00071fb7) bg_popup_call2_in_pane_cp01

0xa551,	// (0x0006ec45) call_type_pane_cp02

0xd90b,	// (0x00071fff) popup_call2_audio_out_window_g1_ParamLimits

0xd90b,	// (0x00071fff) popup_call2_audio_out_window_g1

0xd937,	// (0x0007202b) popup_call2_audio_out_window_g2_ParamLimits

0xd937,	// (0x0007202b) popup_call2_audio_out_window_g2

0xd95f,	// (0x00072053) popup_call2_audio_out_window_g3_ParamLimits

0xd95f,	// (0x00072053) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00073c2f) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00073c2f) popup_call2_audio_out_window_g

0xd99a,	// (0x0007208e) popup_call2_audio_out_window_t1_ParamLimits

0xd99a,	// (0x0007208e) popup_call2_audio_out_window_t1

0xd9f9,	// (0x000720ed) popup_call2_audio_out_window_t2_ParamLimits

0xd9f9,	// (0x000720ed) popup_call2_audio_out_window_t2

0xda4d,	// (0x00072141) popup_call2_audio_out_window_t3_ParamLimits

0xda4d,	// (0x00072141) popup_call2_audio_out_window_t3

0xda63,	// (0x00072157) popup_call2_audio_out_window_t4_ParamLimits

0xda63,	// (0x00072157) popup_call2_audio_out_window_t4

0xda79,	// (0x0007216d) popup_call2_audio_out_window_t5_ParamLimits

0xda79,	// (0x0007216d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00073c38) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00073c38) popup_call2_audio_out_window_t

0xdadd,	// (0x000721d1) bg_popup_call2_in_pane_ParamLimits

0xdadd,	// (0x000721d1) bg_popup_call2_in_pane

0xdb39,	// (0x0007222d) popup_call2_audio_in_window_g1_ParamLimits

0xdb39,	// (0x0007222d) popup_call2_audio_in_window_g1

0xdb71,	// (0x00072265) popup_call2_audio_in_window_g2_ParamLimits

0xdb71,	// (0x00072265) popup_call2_audio_in_window_g2

0xdba9,	// (0x0007229d) popup_call2_audio_in_window_g3_ParamLimits

0xdba9,	// (0x0007229d) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00073c45) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00073c45) popup_call2_audio_in_window_g

0xdc01,	// (0x000722f5) popup_call2_audio_in_window_t1_ParamLimits

0xdc01,	// (0x000722f5) popup_call2_audio_in_window_t1

0xdc81,	// (0x00072375) popup_call2_audio_in_window_t2_ParamLimits

0xdc81,	// (0x00072375) popup_call2_audio_in_window_t2

0xdd01,	// (0x000723f5) popup_call2_audio_in_window_t3_ParamLimits

0xdd01,	// (0x000723f5) popup_call2_audio_in_window_t3

0xdd1b,	// (0x0007240f) popup_call2_audio_in_window_t4_ParamLimits

0xdd1b,	// (0x0007240f) popup_call2_audio_in_window_t4

0xdd2d,	// (0x00072421) popup_call2_audio_in_window_t5_ParamLimits

0xdd2d,	// (0x00072421) popup_call2_audio_in_window_t5

0xdd42,	// (0x00072436) popup_call2_audio_in_window_t6_ParamLimits

0xdd42,	// (0x00072436) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00073c4e) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00073c4e) popup_call2_audio_in_window_t

0xbe0e,	// (0x00070502) bg_popup_call2_in_pane_g1

0xde59,	// (0x0007254d) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x00073cb6) popup_cale_lunar_info_window_t

0xbe16,	// (0x0007050a) bg_popup_call2_rect_pane_ParamLimits

0xbe16,	// (0x0007050a) bg_popup_call2_rect_pane

0xa875,	// (0x0006ef69) call2_cli_visual_graphic_pane

0xa875,	// (0x0006ef69) call2_cli_visual_text_pane

0xab5e,	// (0x0006f252) smil_status_volume_pane_g3

0x0002,

0xbf30,	// (0x00070624) call2_cli_visual_graphic_pane_g1

0xbf30,	// (0x00070624) call2_cli_visual_graphic_pane_g2

0xbf30,	// (0x00070624) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00073c5b) call2_cli_visual_graphic_pane_g

0xdd57,	// (0x0007244b) bg_popup_call2_rect_pane_g1

0xbfbc,	// (0x000706b0) bg_popup_call2_rect_pane_g2

0xdd5f,	// (0x00072453) bg_popup_call2_rect_pane_g3

0xdd67,	// (0x0007245b) bg_popup_call2_rect_pane_g4

0xdd6f,	// (0x00072463) bg_popup_call2_rect_pane_g5

0xdd77,	// (0x0007246b) bg_popup_call2_rect_pane_g6

0xdd7f,	// (0x00072473) bg_popup_call2_rect_pane_g7

0xdd87,	// (0x0007247b) bg_popup_call2_rect_pane_g8

0xdd8f,	// (0x00072483) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00073c62) bg_popup_call2_rect_pane_g

0xdd97,	// (0x0007248b) bg_popup_call2_bubble_pane_g1

0xdd9f,	// (0x00072493) bg_popup_call2_bubble_pane_g2

0xdda7,	// (0x0007249b) bg_popup_call2_bubble_pane_g3

0xddaf,	// (0x000724a3) bg_popup_call2_bubble_pane_g4

0xddb7,	// (0x000724ab) bg_popup_call2_bubble_pane_g5

0xddbf,	// (0x000724b3) bg_popup_call2_bubble_pane_g6

0xddc7,	// (0x000724bb) bg_popup_call2_bubble_pane_g7

0xddcf,	// (0x000724c3) bg_popup_call2_bubble_pane_g8

0xddd7,	// (0x000724cb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00073c75) bg_popup_call2_bubble_pane_g

0x0a31,	// (0x00065125) aid_cale_week_size_cell_pane

0x10b5,	// (0x000657a9) aid_cams_cif_uncrop_pane_ParamLimits

0x10b5,	// (0x000657a9) aid_cams_cif_uncrop_pane

0x1265,	// (0x00065959) aid_cams_size_cell_ParamLimits

0x1265,	// (0x00065959) aid_cams_size_cell

0x1279,	// (0x0006596d) grid_cams_pane_ParamLimits

0x1293,	// (0x00065987) linegrid_cams_pane_ParamLimits

0x1490,	// (0x00065b84) call_video_pane_t1

0x14ae,	// (0x00065ba2) call_video_pane_t2

0x0001,

0xf26e,	// (0x00073962) call_video_pane_t

0x18da,	// (0x00065fce) aid_cale_month_size_cell_pane_ParamLimits

0x18da,	// (0x00065fce) aid_cale_month_size_cell_pane

0xf60b,	// (0x00073cff) smil_status_volume_pane_g

0xab6b,	// (0x0006f25f) volume_smil_pane_ParamLimits

0xa3e4,	// (0x0006ead8) aid_popup2_width_pane

0x098b,	// (0x0006507f) cell_qdial_pane_g4_ParamLimits

0x098b,	// (0x0006507f) cell_qdial_pane_g4

0x276f,	// (0x00066e63) aid_blid_cardinal_pane_ParamLimits

0x277b,	// (0x00066e6f) aid_blid_destination_pane_ParamLimits

0x277b,	// (0x00066e6f) aid_blid_destination_pane

0xbe16,	// (0x0007050a) bg_popup_call_poc_act_pane_ParamLimits

0xbe16,	// (0x0007050a) bg_popup_call_poc_act_pane

0xbe16,	// (0x0007050a) bg_popup_call_poc_inact_pane_ParamLimits

0xbe16,	// (0x0007050a) bg_popup_call_poc_inact_pane

0xdddf,	// (0x000724d3) bg_popup_call_poc_act_pane_g1

0xdde7,	// (0x000724db) bg_popup_call_poc_act_pane_g2

0xddef,	// (0x000724e3) bg_popup_call_poc_act_pane_g3

0xddaf,	// (0x000724a3) bg_popup_call_poc_act_pane_g4

0xddb7,	// (0x000724ab) bg_popup_call_poc_act_pane_g5

0xddf7,	// (0x000724eb) bg_popup_call_poc_act_pane_g6

0xddc7,	// (0x000724bb) bg_popup_call_poc_act_pane_g7

0xddff,	// (0x000724f3) bg_popup_call_poc_act_pane_g8

0xa875,	// (0x0006ef69) main_usb_pane

0xab12,	// (0x0006f206) popup_cale_lunar_info_window

0x1786,	// (0x00065e7a) im_reading_pane_t1_ParamLimits

0xc1a1,	// (0x00070895) list_im_pane_ParamLimits

0xc1b2,	// (0x000708a6) scroll_pane_cp07_ParamLimits

0xa875,	// (0x0006ef69) grid_highlight_pane_cp012

0xbe16,	// (0x0007050a) mup_scale_pane_ParamLimits

0xcc9d,	// (0x00071391) main_usb_pane_g1_ParamLimits

0xcc9d,	// (0x00071391) main_usb_pane_g1

0x336a,	// (0x00067a5e) main_usb_pane_g2_ParamLimits

0x336a,	// (0x00067a5e) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x00073c9f) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x00073c9f) main_usb_pane_g

0x3380,	// (0x00067a74) main_usb_pane_t1_ParamLimits

0x3380,	// (0x00067a74) main_usb_pane_t1

0x3392,	// (0x00067a86) main_usb_pane_t2_ParamLimits

0x3392,	// (0x00067a86) main_usb_pane_t2

0x33a4,	// (0x00067a98) main_usb_pane_t3_ParamLimits

0x33a4,	// (0x00067a98) main_usb_pane_t3

0x33b6,	// (0x00067aaa) main_usb_pane_t4_ParamLimits

0x33b6,	// (0x00067aaa) main_usb_pane_t4

0x33c8,	// (0x00067abc) main_usb_pane_t5_ParamLimits

0x33c8,	// (0x00067abc) main_usb_pane_t5

0x33da,	// (0x00067ace) main_usb_pane_t6_ParamLimits

0x33da,	// (0x00067ace) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x00073ca4) main_usb_pane_t_ParamLimits

0x271e,	// (0x00066e12) aid_text_placing

0x2727,	// (0x00066e1b) main_location2_pane_t1_ParamLimits

0x2739,	// (0x00066e2d) main_location2_pane_t2_ParamLimits

0x274b,	// (0x00066e3f) main_location2_pane_t3_ParamLimits

0x275d,	// (0x00066e51) main_location2_pane_t4_ParamLimits

0x275d,	// (0x00066e51) main_location2_pane_t4

0xf3cf,	// (0x00073ac3) main_location2_pane_t_ParamLimits

0xbe52,	// (0x00070546) find_pinb_pane_g2_ParamLimits

0xbe52,	// (0x00070546) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00073813) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00073813) find_pinb_pane_g

0xbe5e,	// (0x00070552) find_pinb_pane_t1_ParamLimits

0xbe70,	// (0x00070564) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00073818) find_pinb_pane_t_ParamLimits

0xa875,	// (0x0006ef69) main_call3_pane

0x1dc5,	// (0x000664b9) cale_month_day_heading_pane_t1_ParamLimits

0x1e4b,	// (0x0006653f) cale_month_day_heading_pane_t2_ParamLimits

0x1ec4,	// (0x000665b8) cale_month_day_heading_pane_t3_ParamLimits

0x1f3d,	// (0x00066631) cale_month_day_heading_pane_t4_ParamLimits

0x1fbe,	// (0x000666b2) cale_month_day_heading_pane_t5_ParamLimits

0x2047,	// (0x0006673b) cale_month_day_heading_pane_t6_ParamLimits

0x20d0,	// (0x000667c4) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007399a) cale_month_day_heading_pane_t_ParamLimits

0xc3fc,	// (0x00070af0) smil_status_volume_pane

0x2e65,	// (0x00067559) postcard_address_pane_ParamLimits

0x2e65,	// (0x00067559) postcard_address_pane

0x2e77,	// (0x0006756b) postcard_message_pane_ParamLimits

0x2e77,	// (0x0006756b) postcard_message_pane

0x3348,	// (0x00067a3c) call2_cli_visual_pane_t1_ParamLimits

0x3348,	// (0x00067a3c) call2_cli_visual_pane_t1

0x3b7a,	// (0x0006826e) postcard_message_pane_t1_ParamLimits

0x3b7a,	// (0x0006826e) postcard_message_pane_t1

0x3b63,	// (0x00068257) postcard_address_pane_t1_ParamLimits

0x3b63,	// (0x00068257) postcard_address_pane_t1

0x3b4f,	// (0x00068243) popup_call3_audio_in_window_ParamLimits

0x3b4f,	// (0x00068243) popup_call3_audio_in_window

0x39da,	// (0x000680ce) bg_popup_call3_in_pane_ParamLimits

0x39da,	// (0x000680ce) bg_popup_call3_in_pane

0x3a50,	// (0x00068144) popup_call3_audio_in_window_g1_ParamLimits

0x3a50,	// (0x00068144) popup_call3_audio_in_window_g1

0x3a70,	// (0x00068164) popup_call3_audio_in_window_g2_ParamLimits

0x3a70,	// (0x00068164) popup_call3_audio_in_window_g2

0x3a90,	// (0x00068184) popup_call3_audio_in_window_g3_ParamLimits

0x3a90,	// (0x00068184) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x00073d06) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x00073d06) popup_call3_audio_in_window_g

0x3ac1,	// (0x000681b5) popup_call3_audio_in_window_t1_ParamLimits

0x3ac1,	// (0x000681b5) popup_call3_audio_in_window_t1

0x3aff,	// (0x000681f3) popup_call3_audio_in_window_t2_ParamLimits

0x3aff,	// (0x000681f3) popup_call3_audio_in_window_t2

0x3b3d,	// (0x00068231) popup_call3_audio_in_window_t3_ParamLimits

0x3b3d,	// (0x00068231) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00073d0f) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00073d0f) popup_call3_audio_in_window_t

0xc0a0,	// (0x00070794) bg_popup_call3_rect_pane

0xdd57,	// (0x0007244b) bg_popup_call3_rect_pane_g1

0xbfbc,	// (0x000706b0) bg_popup_call3_rect_pane_g2

0xdd5f,	// (0x00072453) bg_popup_call3_rect_pane_g3

0xdd67,	// (0x0007245b) bg_popup_call3_rect_pane_g4

0xdd6f,	// (0x00072463) bg_popup_call3_rect_pane_g5

0xdd77,	// (0x0007246b) bg_popup_call3_rect_pane_g6

0xdd7f,	// (0x00072473) bg_popup_call3_rect_pane_g7

0x2a5f,	// (0x00067153) mup_visualizer_osc_pane

0xcbbf,	// (0x000712b3) mup_visualizer_spec_pane

0x3a0a,	// (0x000680fe) call3_video_qcif_pane_ParamLimits

0x3a0a,	// (0x000680fe) call3_video_qcif_pane

0x3a1d,	// (0x00068111) call3_video_qcif_uncrop_pane_ParamLimits

0x3a1d,	// (0x00068111) call3_video_qcif_uncrop_pane

0x3a2b,	// (0x0006811f) call3_video_subqcif_pane_ParamLimits

0x3a2b,	// (0x0006811f) call3_video_subqcif_pane

0x3a3f,	// (0x00068133) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a3f,	// (0x00068133) call3_video_subqcif_uncrop_pane

0x3ab0,	// (0x000681a4) popup_call3_audio_in_window_g4_ParamLimits

0x3ab0,	// (0x000681a4) popup_call3_audio_in_window_g4

0x39c9,	// (0x000680bd) mup_spec_half_pane

0x39d2,	// (0x000680c6) mup_spec_half_pane_cp

0xdfca,	// (0x000726be) mup_osc_middle_pane

0xdfd3,	// (0x000726c7) mup_visualizer_osc_pane_g1

0x39a9,	// (0x0006809d) mup_spec_bar_pane_ParamLimits

0x39a9,	// (0x0006809d) mup_spec_bar_pane

0xdfb7,	// (0x000726ab) mup_spec_bar_pane_g1

0xdfc1,	// (0x000726b5) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00073cfa) mup_spec_bar_pane_g

0x0a31,	// (0x00065125) aid_cale_week_size_cell_pane_ParamLimits

0x0a4b,	// (0x0006513f) bg_cale_heading_pane_ParamLimits

0xbff9,	// (0x000706ed) bg_cale_pane_cp01_ParamLimits

0x0a63,	// (0x00065157) cale_week_corner_pane_ParamLimits

0x0a82,	// (0x00065176) cale_week_day_heading_pane_ParamLimits

0x0a9f,	// (0x00065193) cale_week_scroll_pane_g1_ParamLimits

0x0ab2,	// (0x000651a6) cale_week_scroll_pane_g2_ParamLimits

0x0aca,	// (0x000651be) cale_week_scroll_pane_g3_ParamLimits

0x0ae2,	// (0x000651d6) cale_week_scroll_pane_g4_ParamLimits

0x0afa,	// (0x000651ee) cale_week_scroll_pane_g5_ParamLimits

0x0b1a,	// (0x0006520e) cale_week_scroll_pane_g6_ParamLimits

0x0b3a,	// (0x0006522e) cale_week_scroll_pane_g7_ParamLimits

0x0b5a,	// (0x0006524e) cale_week_scroll_pane_g8_ParamLimits

0x0b7e,	// (0x00065272) cale_week_scroll_pane_g9_ParamLimits

0x0b96,	// (0x0006528a) cale_week_scroll_pane_g10_ParamLimits

0x0bae,	// (0x000652a2) cale_week_scroll_pane_g11_ParamLimits

0x0bc6,	// (0x000652ba) cale_week_scroll_pane_g12_ParamLimits

0x0bde,	// (0x000652d2) cale_week_scroll_pane_g13_ParamLimits

0x0bde,	// (0x000652d2) cale_week_scroll_pane_g14_ParamLimits

0x0bde,	// (0x000652d2) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000738a4) cale_week_scroll_pane_g_ParamLimits

0x0c1a,	// (0x0006530e) cale_week_time_pane_ParamLimits

0x0c3e,	// (0x00065332) grid_cale_week_pane_ParamLimits

0xc016,	// (0x0007070a) listscroll_cale_week_pane_t1

0xc028,	// (0x0007071c) scroll_pane_cp08_ParamLimits

0x193a,	// (0x0006602e) cale_month_corner_pane_ParamLimits

0xc3d2,	// (0x00070ac6) cale_month_pane_t1

0x1d58,	// (0x0006644c) cale_month_week_pane_ParamLimits

0x257a,	// (0x00066c6e) popup_call_status_window_g1_ParamLimits

0x258e,	// (0x00066c82) popup_call_status_window_g2_ParamLimits

0x25a2,	// (0x00066c96) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00073a4a) popup_call_status_window_g_ParamLimits

0xc776,	// (0x00070e6a) aid_call2_pane

0x2ccf,	// (0x000673c3) msg_header_pane_g1

0x2e65,	// (0x00067559) postcard_address2_pane_ParamLimits

0x2e65,	// (0x00067559) postcard_address2_pane

0x2e77,	// (0x0006756b) postcard_message2_pane_ParamLimits

0x2e77,	// (0x0006756b) postcard_message2_pane

0x395b,	// (0x0006804f) message2_row_pane_ParamLimits

0x395b,	// (0x0006804f) message2_row_pane

0x3977,	// (0x0006806b) address2_row_pane_ParamLimits

0x3977,	// (0x0006806b) address2_row_pane

0xdf85,	// (0x00072679) postcard_message2_row_pane_g1

0xdf8d,	// (0x00072681) postcard_message2_row_pane_t1

0xdf85,	// (0x00072679) address2_row_pane_g1

0xdf8d,	// (0x00072681) address2_row_pane_t1

0x0f6e,	// (0x00065662) aid_size_cell_vorec

0xa875,	// (0x0006ef69) main_rss_pane

0x398a,	// (0x0006807e) rss_list_single_pane_ParamLimits

0x398a,	// (0x0006807e) rss_list_single_pane

0xdf9b,	// (0x0007268f) rss_list_single_pane_t1

0xdfa9,	// (0x0007269d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x00073cf5) rss_list_single_pane_t

0xa875,	// (0x0006ef69) main_camera2_pane

0xa875,	// (0x0006ef69) main_video2_pane

0x3bf3,	// (0x000682e7) cams_zoom_pane_cp2_ParamLimits

0x3bf3,	// (0x000682e7) cams_zoom_pane_cp2

0x3c13,	// (0x00068307) image2_vga_pane_ParamLimits

0x3c13,	// (0x00068307) image2_vga_pane

0x3c64,	// (0x00068358) main_camera2_pane_g1_ParamLimits

0x3c64,	// (0x00068358) main_camera2_pane_g1

0x3c84,	// (0x00068378) main_camera2_pane_g2_ParamLimits

0x3c84,	// (0x00068378) main_camera2_pane_g2

0x3ca4,	// (0x00068398) main_camera2_pane_g3_ParamLimits

0x3ca4,	// (0x00068398) main_camera2_pane_g3

0x3cc4,	// (0x000683b8) main_camera2_pane_g4_ParamLimits

0x3cc4,	// (0x000683b8) main_camera2_pane_g4

0x3ce4,	// (0x000683d8) main_camera2_pane_g5_ParamLimits

0x3ce4,	// (0x000683d8) main_camera2_pane_g5

0x3d04,	// (0x000683f8) main_camera2_pane_g6_ParamLimits

0x3d04,	// (0x000683f8) main_camera2_pane_g6

0x3d24,	// (0x00068418) main_camera2_pane_g7_ParamLimits

0x3d24,	// (0x00068418) main_camera2_pane_g7

0x3d44,	// (0x00068438) main_camera2_pane_g8_ParamLimits

0x3d44,	// (0x00068438) main_camera2_pane_g8

0x0008,

0xf622,	// (0x00073d16) main_camera2_pane_g_ParamLimits

0xf622,	// (0x00073d16) main_camera2_pane_g

0x3d84,	// (0x00068478) main_camera2_pane_t1_ParamLimits

0x3d84,	// (0x00068478) main_camera2_pane_t1

0x3db9,	// (0x000684ad) main_camera2_pane_t2_ParamLimits

0x3db9,	// (0x000684ad) main_camera2_pane_t2

0x3ddf,	// (0x000684d3) main_camera2_pane_t3_ParamLimits

0x3ddf,	// (0x000684d3) main_camera2_pane_t3

0x3e3d,	// (0x00068531) main_camera2_pane_t4_ParamLimits

0x3e3d,	// (0x00068531) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00073d29) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00073d29) main_camera2_pane_t

0x3ecf,	// (0x000685c3) cams_zoom_pane_cp4_ParamLimits

0x3ecf,	// (0x000685c3) cams_zoom_pane_cp4

0x3ee5,	// (0x000685d9) image2_cif_pane_ParamLimits

0x3ee5,	// (0x000685d9) image2_cif_pane

0x3f10,	// (0x00068604) image2_subqcif_pane_ParamLimits

0x3f10,	// (0x00068604) image2_subqcif_pane

0x3f2a,	// (0x0006861e) main_video2_pane_g1_ParamLimits

0x3f2a,	// (0x0006861e) main_video2_pane_g1

0x3f44,	// (0x00068638) main_video2_pane_g2_ParamLimits

0x3f44,	// (0x00068638) main_video2_pane_g2

0x3f5a,	// (0x0006864e) main_video2_pane_g3_ParamLimits

0x3f5a,	// (0x0006864e) main_video2_pane_g3

0x3f70,	// (0x00068664) main_video2_pane_g4_ParamLimits

0x3f70,	// (0x00068664) main_video2_pane_g4

0x3f86,	// (0x0006867a) main_video2_pane_g5_ParamLimits

0x3f86,	// (0x0006867a) main_video2_pane_g5

0x3f9c,	// (0x00068690) main_video2_pane_g6_ParamLimits

0x3f9c,	// (0x00068690) main_video2_pane_g6

0x0005,

0xf644,	// (0x00073d38) main_video2_pane_g_ParamLimits

0xf644,	// (0x00073d38) main_video2_pane_g

0x3fb6,	// (0x000686aa) main_video2_pane_t1_ParamLimits

0x3fb6,	// (0x000686aa) main_video2_pane_t1

0x3fda,	// (0x000686ce) main_video2_pane_t2_ParamLimits

0x3fda,	// (0x000686ce) main_video2_pane_t2

0x4028,	// (0x0006871c) main_video2_pane_t3_ParamLimits

0x4028,	// (0x0006871c) main_video2_pane_t3

0x0002,

0xf651,	// (0x00073d45) main_video2_pane_t_ParamLimits

0xf651,	// (0x00073d45) main_video2_pane_t

0x3495,	// (0x00067b89) call_muted_g2

0x0001,

0xf5f3,	// (0x00073ce7) call_muted_g

0xa875,	// (0x0006ef69) main_mup2_pane

0x406c,	// (0x00068760) main_mup2_pane_g1_ParamLimits

0x406c,	// (0x00068760) main_mup2_pane_g1

0x4078,	// (0x0006876c) main_mup2_pane_g2_ParamLimits

0x4078,	// (0x0006876c) main_mup2_pane_g2

0xabd9,	// (0x0006f2cd) main_mup_pane_g13_cp1

0xabe1,	// (0x0006f2d5) mup_volume_pane_cp1

0x4094,	// (0x00068788) main_mup2_pane_g4_ParamLimits

0x4094,	// (0x00068788) main_mup2_pane_g4

0x40a6,	// (0x0006879a) main_mup2_pane_g5_ParamLimits

0x40a6,	// (0x0006879a) main_mup2_pane_g5

0x40b8,	// (0x000687ac) main_mup2_pane_g6_ParamLimits

0x40b8,	// (0x000687ac) main_mup2_pane_g6

0x40ca,	// (0x000687be) main_mup2_pane_g7_ParamLimits

0x40ca,	// (0x000687be) main_mup2_pane_g7

0x0006,

0xf658,	// (0x00073d4c) main_mup2_pane_g_ParamLimits

0xf658,	// (0x00073d4c) main_mup2_pane_g

0x40e2,	// (0x000687d6) main_mup2_pane_t1_ParamLimits

0x40e2,	// (0x000687d6) main_mup2_pane_t1

0x40f8,	// (0x000687ec) main_mup2_pane_t2_ParamLimits

0x40f8,	// (0x000687ec) main_mup2_pane_t2

0x410e,	// (0x00068802) main_mup2_pane_t3_ParamLimits

0x410e,	// (0x00068802) main_mup2_pane_t3

0x4124,	// (0x00068818) main_mup2_pane_t4_ParamLimits

0x4124,	// (0x00068818) main_mup2_pane_t4

0x413c,	// (0x00068830) main_mup2_pane_t5_ParamLimits

0x413c,	// (0x00068830) main_mup2_pane_t5

0x4154,	// (0x00068848) main_mup2_pane_t6_ParamLimits

0x4154,	// (0x00068848) main_mup2_pane_t6

0x0005,

0xf667,	// (0x00073d5b) main_mup2_pane_t_ParamLimits

0xf667,	// (0x00073d5b) main_mup2_pane_t

0x4184,	// (0x00068878) mup2_visualizer_pane_ParamLimits

0x4184,	// (0x00068878) mup2_visualizer_pane

0x41b2,	// (0x000688a6) mup_progress_pane_cp_ParamLimits

0x41b2,	// (0x000688a6) mup_progress_pane_cp

0xabc4,	// (0x0006f2b8) mup_volume_pane_cp_ParamLimits

0xabc4,	// (0x0006f2b8) mup_volume_pane_cp

0x41c6,	// (0x000688ba) mup2_visualizer_pane_g1_ParamLimits

0x41c6,	// (0x000688ba) mup2_visualizer_pane_g1

0xe00a,	// (0x000726fe) mup2_visualizer_pane_g2_ParamLimits

0xe00a,	// (0x000726fe) mup2_visualizer_pane_g2

0x41dd,	// (0x000688d1) mup2_visualizer_pane_g3_ParamLimits

0x41dd,	// (0x000688d1) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x00073d68) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x00073d68) mup2_visualizer_pane_g

0xcde6,	// (0x000714da) aid_size_cell_fmradio

0x3647,	// (0x00067d3b) aid_height_parent_landcape

0xc230,	// (0x00070924) wml_content_pane_cp

0xc238,	// (0x0007092c) wml_tabs_pane

0xc241,	// (0x00070935) popup_wml_miniature_window

0xc249,	// (0x0007093d) scroll_pane_cp021

0xc25d,	// (0x00070951) wml_content_pane_comp8

0xa875,	// (0x0006ef69) bg_popup_sub_pane_cp05

0xe028,	// (0x0007271c) popup_wml_miniature_window_g1

0xe030,	// (0x00072724) wml_miniature_view_pane

0x41e9,	// (0x000688dd) aid_size_wml_view

0x41f1,	// (0x000688e5) wml_miniature_view_pane_g1

0x41fa,	// (0x000688ee) wml_miniature_view_pane_g2

0x4203,	// (0x000688f7) wml_miniature_view_pane_g3

0x420b,	// (0x000688ff) wml_miniature_view_pane_g4

0x4213,	// (0x00068907) wml_miniature_view_pane_g5

0x421b,	// (0x0006890f) wml_miniature_view_pane_g6

0x4223,	// (0x00068917) wml_miniature_view_pane_g7

0x422b,	// (0x0006891f) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x00073d6f) wml_miniature_view_pane_g

0xe038,	// (0x0007272c) background_graphic_ParamLimits

0xe038,	// (0x0007272c) background_graphic

0xe044,	// (0x00072738) wml_tabs_2_pane

0xe04d,	// (0x00072741) wml_tabs_3_pane_ParamLimits

0xe04d,	// (0x00072741) wml_tabs_3_pane

0xe05f,	// (0x00072753) wml_tabs_4_pane_ParamLimits

0xe05f,	// (0x00072753) wml_tabs_4_pane

0xe075,	// (0x00072769) wml_tabs_5_pane_ParamLimits

0xe075,	// (0x00072769) wml_tabs_5_pane

0xe08f,	// (0x00072783) wml_tabs_pane_g2_ParamLimits

0xe08f,	// (0x00072783) wml_tabs_pane_g2

0xe0a3,	// (0x00072797) wml_tabs_pane_g3_ParamLimits

0xe0a3,	// (0x00072797) wml_tabs_pane_g3

0x4233,	// (0x00068927) wml_tabs_2_active_pane_ParamLimits

0x4233,	// (0x00068927) wml_tabs_2_active_pane

0x4247,	// (0x0006893b) wml_tabs_2_passive_pane_ParamLimits

0x4247,	// (0x0006893b) wml_tabs_2_passive_pane

0x425b,	// (0x0006894f) wml_tabs_3_active_pane_cp_ParamLimits

0x425b,	// (0x0006894f) wml_tabs_3_active_pane_cp

0x4270,	// (0x00068964) wml_tabs_3_passive_pane_ParamLimits

0x4270,	// (0x00068964) wml_tabs_3_passive_pane

0x4283,	// (0x00068977) wml_tabs_3_passive_pane_cp_ParamLimits

0x4283,	// (0x00068977) wml_tabs_3_passive_pane_cp

0x429a,	// (0x0006898e) tabs_4_active_pane

0x42a2,	// (0x00068996) tabs_4_passive_pane

0x42ac,	// (0x000689a0) tabs_4_passive_pane_cp

0x42b4,	// (0x000689a8) tabs_4_passive_pane_cp2

0x3362,	// (0x00067a56) aid_height_text

0x2a35,	// (0x00067129) mup_volume_cont_pane_ParamLimits

0x2a35,	// (0x00067129) mup_volume_cont_pane

0x060f,	// (0x00064d03) aid_size_cell_pinb

0x0619,	// (0x00064d0d) aid_size_list_pinb

0x419e,	// (0x00068892) mup2_volume_cont_pane_ParamLimits

0x419e,	// (0x00068892) mup2_volume_cont_pane

0xabb0,	// (0x0006f2a4) mup2_volume_cont_pane_g1_ParamLimits

0xabb0,	// (0x0006f2a4) mup2_volume_cont_pane_g1

0x02d2,	// (0x000649c6) aid_size_cell_touch_ParamLimits

0x02d2,	// (0x000649c6) aid_size_cell_touch

0x04ff,	// (0x00064bf3) touch_pane_ParamLimits

0x04ff,	// (0x00064bf3) touch_pane

0xa458,	// (0x0006eb4c) main_rss2_pane

0xe0c0,	// (0x000727b4) listscroll_rss2_pane

0xe0c9,	// (0x000727bd) rss2_navigation_pane

0xe0d1,	// (0x000727c5) list_rss2_pane

0xc8b9,	// (0x00070fad) scroll_pane_cp22

0xe0d9,	// (0x000727cd) rss2_navigation_pane_g1

0xe0e2,	// (0x000727d6) rss2_navigation_pane_g2

0xe0ea,	// (0x000727de) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x00073d80) rss2_navigation_pane_g

0xe0f2,	// (0x000727e6) rss2_navigation_pane_t1

0x42be,	// (0x000689b2) rss2_list_single_pane_ParamLimits

0x42be,	// (0x000689b2) rss2_list_single_pane

0xe100,	// (0x000727f4) rss2_list_single_pane_t2

0xe10e,	// (0x00072802) rss2_list_single_pane_t3_ParamLimits

0xe10e,	// (0x00072802) rss2_list_single_pane_t3

0xe12b,	// (0x0007281f) rss2_list_single_pane_t4

0x2384,	// (0x00066a78) smil_status_pane_g1

0xa44a,	// (0x0006eb3e) main_image2_pane_ParamLimits

0xa44a,	// (0x0006eb3e) main_image2_pane

0x3d64,	// (0x00068458) main_camera2_pane_g9_ParamLimits

0x3d64,	// (0x00068458) main_camera2_pane_g9

0x3e92,	// (0x00068586) main_camera2_pane_t5_ParamLimits

0x3e92,	// (0x00068586) main_camera2_pane_t5

0xab80,	// (0x0006f274) main_camera2_pane_t6_ParamLimits

0xab80,	// (0x0006f274) main_camera2_pane_t6

0x42d3,	// (0x000689c7) main_image2_pane_g1_ParamLimits

0x42d3,	// (0x000689c7) main_image2_pane_g1

0x309e,	// (0x00067792) smil2_video_pane_ParamLimits

0x309e,	// (0x00067792) smil2_video_pane

0xa400,	// (0x0006eaf4) aid_zoom_text_primary_cp

0xa440,	// (0x0006eb34) popup_preview_fixed_window

0xc199,	// (0x0007088d) im_reading_pane_g1

0x3bdb,	// (0x000682cf) cams2_bc_adjust_pane_cp_ParamLimits

0x3bdb,	// (0x000682cf) cams2_bc_adjust_pane_cp

0x3ec1,	// (0x000685b5) cams2_bc_adjust_pane_ParamLimits

0x3ec1,	// (0x000685b5) cams2_bc_adjust_pane

0x42e9,	// (0x000689dd) cams2_bc_adjust_pane_g1

0xabe9,	// (0x0006f2dd) cams2_slider_pane

0xabf2,	// (0x0006f2e6) cams2_slider_pane_g1

0xabfb,	// (0x0006f2ef) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x00073d87) cams2_slider_pane_g

0x0707,	// (0x00064dfb) calc_display_pane_ParamLimits

0x072f,	// (0x00064e23) calc_paper_pane_ParamLimits

0x0752,	// (0x00064e46) grid_calc_pane_ParamLimits

0xaaa5,	// (0x0006f199) popup_clock_digital_window_t1_ParamLimits

0xcd83,	// (0x00071477) main_image_pane_t1

0x06e9,	// (0x00064ddd) aid_size_cell_calc_ParamLimits

0x06e9,	// (0x00064ddd) aid_size_cell_calc

0x369f,	// (0x00067d93) popup_blid_sat_info2_window_ParamLimits

0x369f,	// (0x00067d93) popup_blid_sat_info2_window

0xe141,	// (0x00072835) aid_size_cell_blid

0xe149,	// (0x0007283d) bg_popup_window_pane_cp07

0xe16c,	// (0x00072860) grid_popup_blid_pane

0xe176,	// (0x0007286a) heading_pane_cp05_ParamLimits

0xe176,	// (0x0007286a) heading_pane_cp05

0xe240,	// (0x00072934) cell_popup_blid_pane_ParamLimits

0xe240,	// (0x00072934) cell_popup_blid_pane

0xe264,	// (0x00072958) cell_popup_blid_pane_g1

0xe26c,	// (0x00072960) cell_popup_blid_pane_t1

0x416e,	// (0x00068862) mup2_indicator_pane_ParamLimits

0x416e,	// (0x00068862) mup2_indicator_pane

0xc0a0,	// (0x00070794) mup2_visualizer_osc_pane

0xe016,	// (0x0007270a) mup2_visualizer_spec_pane_ParamLimits

0xe016,	// (0x0007270a) mup2_visualizer_spec_pane

0x42f1,	// (0x000689e5) mup2_spec_half_pane

0x42fa,	// (0x000689ee) mup2_spec_half_pane_cp

0x4302,	// (0x000689f6) mup2_spec_bar_pane_ParamLimits

0x4302,	// (0x000689f6) mup2_spec_bar_pane

0xdfb7,	// (0x000726ab) mup2_spec_bar_pane_g1

0xdfc1,	// (0x000726b5) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00073cfa) mup2_spec_bar_pane_g

0x4322,	// (0x00068a16) mup2_osc_middle_pane

0xdfd3,	// (0x000726c7) mup2_visualizer_osc_pane_g1

0xa482,	// (0x0006eb76) popup_number_entry_window_t1_ParamLimits

0xa495,	// (0x0006eb89) popup_number_entry_window_t2_ParamLimits

0xa4a7,	// (0x0006eb9b) popup_number_entry_window_t3_ParamLimits

0x0551,	// (0x00064c45) popup_number_entry_window_t5_ParamLimits

0x0551,	// (0x00064c45) popup_number_entry_window_t5

0xf0ca,	// (0x000737be) popup_number_entry_window_t_ParamLimits

0xa4b9,	// (0x0006ebad) text_title_cp2_ParamLimits

0xaae4,	// (0x0006f1d8) aid_hotspot_pointer_text2_pane

0xaafe,	// (0x0006f1f2) main_viewer_pane_g9_ParamLimits

0xaafe,	// (0x0006f1f2) main_viewer_pane_g9

0xc3d2,	// (0x00070ac6) cale_month_pane_t1_ParamLimits

0xc40f,	// (0x00070b03) bg_cale_pane_ParamLimits

0xc427,	// (0x00070b1b) list_cale_pane_ParamLimits

0xc438,	// (0x00070b2c) listscroll_cale_day_pane_t1

0xc44a,	// (0x00070b3e) scroll_pane_cp09_ParamLimits

0x2a67,	// (0x0006715b) main_mup_eq_pane_t1_ParamLimits

0x2a67,	// (0x0006715b) main_mup_eq_pane_t1

0x2a81,	// (0x00067175) main_mup_eq_pane_t2_ParamLimits

0x2a81,	// (0x00067175) main_mup_eq_pane_t2

0x2a9b,	// (0x0006718f) main_mup_eq_pane_t3_ParamLimits

0x2a9b,	// (0x0006718f) main_mup_eq_pane_t3

0x2ab7,	// (0x000671ab) main_mup_eq_pane_t4_ParamLimits

0x2ab7,	// (0x000671ab) main_mup_eq_pane_t4

0x2ad3,	// (0x000671c7) main_mup_eq_pane_t5_ParamLimits

0x2ad3,	// (0x000671c7) main_mup_eq_pane_t5

0x2aef,	// (0x000671e3) main_mup_eq_pane_t6_ParamLimits

0x2aef,	// (0x000671e3) main_mup_eq_pane_t6

0x2b03,	// (0x000671f7) main_mup_eq_pane_t7_ParamLimits

0x2b03,	// (0x000671f7) main_mup_eq_pane_t7

0x2b17,	// (0x0006720b) main_mup_eq_pane_t8_ParamLimits

0x2b17,	// (0x0006720b) main_mup_eq_pane_t8

0x2b2b,	// (0x0006721f) main_mup_eq_pane_t9_ParamLimits

0x2b2b,	// (0x0006721f) main_mup_eq_pane_t9

0x2b45,	// (0x00067239) main_mup_eq_pane_t10_ParamLimits

0x2b45,	// (0x00067239) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00073b49) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00073b49) main_mup_eq_pane_t

0x2bf4,	// (0x000672e8) mup_equalizer_pane_cp5_ParamLimits

0x2c08,	// (0x000672fc) mup_equalizer_pane_cp6_ParamLimits

0x2c1c,	// (0x00067310) mup_equalizer_pane_cp7_ParamLimits

0xa458,	// (0x0006eb4c) main_gallery_pane

0xdfdc,	// (0x000726d0) smil2_volume_pane

0xdfe4,	// (0x000726d8) smil_status_volume_pane_g1_ParamLimits

0xdff7,	// (0x000726eb) smil_status_volume_pane_g2_ParamLimits

0xab5e,	// (0x0006f252) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00073cff) smil_status_volume_pane_g_ParamLimits

0xe149,	// (0x0007283d) bg_popup_window_pane_cp07_ParamLimits

0xe157,	// (0x0007284b) blid_firmament_pane

0x432b,	// (0x00068a1f) aid_size_cell_gallery_ParamLimits

0x432b,	// (0x00068a1f) aid_size_cell_gallery

0x4341,	// (0x00068a35) grid_gallery_pane_ParamLimits

0x4341,	// (0x00068a35) grid_gallery_pane

0x435a,	// (0x00068a4e) cell_gallery_pane_ParamLimits

0x435a,	// (0x00068a4e) cell_gallery_pane

0xe27a,	// (0x0007296e) bg_cell_gallery_focus_pane_ParamLimits

0xe27a,	// (0x0007296e) bg_cell_gallery_focus_pane

0xe28c,	// (0x00072980) cell_gallery_pane_g1_ParamLimits

0xe28c,	// (0x00072980) cell_gallery_pane_g1

0x43a3,	// (0x00068a97) cell_gallery_pane_g2_ParamLimits

0x43a3,	// (0x00068a97) cell_gallery_pane_g2

0x43b0,	// (0x00068aa4) cell_gallery_pane_g3_ParamLimits

0x43b0,	// (0x00068aa4) cell_gallery_pane_g3

0xe298,	// (0x0007298c) cell_gallery_pane_g4_ParamLimits

0xe298,	// (0x0007298c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x00073dad) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x00073dad) cell_gallery_pane_g

0xe2a4,	// (0x00072998) bg_cell_gallery_focus_pane_g1

0xe2ac,	// (0x000729a0) bg_cell_gallery_focus_pane_g2

0xe2b4,	// (0x000729a8) bg_cell_gallery_focus_pane_g3

0xe2bc,	// (0x000729b0) bg_cell_gallery_focus_pane_g4

0xe2c4,	// (0x000729b8) bg_cell_gallery_focus_pane_g5

0xe2cc,	// (0x000729c0) bg_cell_gallery_focus_pane_g6

0xe2d4,	// (0x000729c8) bg_cell_gallery_focus_pane_g7

0xe2dc,	// (0x000729d0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x00073db6) bg_cell_gallery_focus_pane_g

0xe2e4,	// (0x000729d8) aid_firma_cardinal

0xe2f8,	// (0x000729ec) blid_firmament_pane_t1

0xe30f,	// (0x00072a03) blid_firmament_pane_t2

0xe326,	// (0x00072a1a) blid_firmament_pane_t3

0xe33d,	// (0x00072a31) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00073dc7) blid_firmament_pane_t

0xe35d,	// (0x00072a51) blid_sat_info_pane

0xe36d,	// (0x00072a61) blid_sat_info_pane_g1

0xe36d,	// (0x00072a61) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00073dd0) blid_sat_info_pane_g

0xe377,	// (0x00072a6b) blid_sat_info_pane_t1

0xe385,	// (0x00072a79) smil2_volume_content_pane

0xe38e,	// (0x00072a82) smil2_volume_pane_g1

0xe354,	// (0x00072a48) smil2_volume_content_pane_g1

0xe396,	// (0x00072a8a) smil2_volume_content_pane_g2

0xe39f,	// (0x00072a93) smil2_volume_content_pane_g3

0xe3a8,	// (0x00072a9c) smil2_volume_content_pane_g4

0xe3b1,	// (0x00072aa5) smil2_volume_content_pane_g5

0xe3ba,	// (0x00072aae) smil2_volume_content_pane_g6

0xe3c3,	// (0x00072ab7) smil2_volume_content_pane_g7

0xe3cc,	// (0x00072ac0) smil2_volume_content_pane_g8

0xe3d5,	// (0x00072ac9) smil2_volume_content_pane_g9

0xe3de,	// (0x00072ad2) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x00073dd5) smil2_volume_content_pane_g

0x0cf2,	// (0x000653e6) cale_week_day_heading_pane_t1_ParamLimits

0x0d1c,	// (0x00065410) cale_week_day_heading_pane_t2_ParamLimits

0x0d4b,	// (0x0006543f) cale_week_day_heading_pane_t3_ParamLimits

0x0d7a,	// (0x0006546e) cale_week_day_heading_pane_t4_ParamLimits

0x0da9,	// (0x0006549d) cale_week_day_heading_pane_t5_ParamLimits

0x0de0,	// (0x000654d4) cale_week_day_heading_pane_t6_ParamLimits

0x0e17,	// (0x0006550b) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000738c5) cale_week_day_heading_pane_t_ParamLimits

0xc045,	// (0x00070739) bg_cale_side_pane_ParamLimits

0x0e41,	// (0x00065535) cale_week_time_pane_t1_ParamLimits

0x0e5b,	// (0x0006554f) cale_week_time_pane_t2_ParamLimits

0x0e75,	// (0x00065569) cale_week_time_pane_t3_ParamLimits

0x0e8f,	// (0x00065583) cale_week_time_pane_t4_ParamLimits

0x0ea9,	// (0x0006559d) cale_week_time_pane_t5_ParamLimits

0x0ec3,	// (0x000655b7) cale_week_time_pane_t6_ParamLimits

0x0edd,	// (0x000655d1) cale_week_time_pane_t7_ParamLimits

0x0ef7,	// (0x000655eb) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000738d4) cale_week_time_pane_t_ParamLimits

0x0f11,	// (0x00065605) cell_cale_week_pane_g2_ParamLimits

0xc045,	// (0x00070739) bg_cale_side_pane_cp01_ParamLimits

0x2161,	// (0x00066855) cale_month_week_pane_t1_ParamLimits

0x217a,	// (0x0006686e) cale_month_week_pane_t2_ParamLimits

0x2193,	// (0x00066887) cale_month_week_pane_t3_ParamLimits

0x21ac,	// (0x000668a0) cale_month_week_pane_t4_ParamLimits

0x21c5,	// (0x000668b9) cale_month_week_pane_t5_ParamLimits

0x21de,	// (0x000668d2) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000739a9) cale_month_week_pane_t_ParamLimits

0xaa21,	// (0x0006f115) cell_cale_month_pane_g1_ParamLimits

0xa458,	// (0x0006eb4c) main_cale_event_viewer_pane

0xa3d2,	// (0x0006eac6) listscroll_cale_event_viewer_pane

0xe3e7,	// (0x00072adb) list_cale_ev_pane

0xe3ef,	// (0x00072ae3) scroll_pane_cp023

0xe3fb,	// (0x00072aef) field_cale_ev_pane_ParamLimits

0xe3fb,	// (0x00072aef) field_cale_ev_pane

0xe419,	// (0x00072b0d) field_cale_ev_content_pane_ParamLimits

0xe419,	// (0x00072b0d) field_cale_ev_content_pane

0xe425,	// (0x00072b19) field_cale_ev_pane_g1_ParamLimits

0xe425,	// (0x00072b19) field_cale_ev_pane_g1

0xe431,	// (0x00072b25) field_cale_ev_pane_g2_ParamLimits

0xe431,	// (0x00072b25) field_cale_ev_pane_g2

0xe449,	// (0x00072b3d) field_cale_ev_pane_g3_ParamLimits

0xe449,	// (0x00072b3d) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x00073dea) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x00073dea) field_cale_ev_pane_g

0xe461,	// (0x00072b55) field_cale_ev_pane_t1_ParamLimits

0xe461,	// (0x00072b55) field_cale_ev_pane_t1

0xe478,	// (0x00072b6c) field_cale_ev_content_pane_t1_ParamLimits

0xe478,	// (0x00072b6c) field_cale_ev_content_pane_t1

0xcc69,	// (0x0007135d) bg_button_pane_cp01

0x0a1f,	// (0x00065113) listscroll_cale_week_pane_ParamLimits

0xbff0,	// (0x000706e4) popup_toolbar_window_cp01

0xc016,	// (0x0007070a) listscroll_cale_week_pane_t1_ParamLimits

0x0a1f,	// (0x00065113) listscroll_cale_day_pane_ParamLimits

0xbff0,	// (0x000706e4) popup_toolbar_window_cp02

0xc438,	// (0x00070b2c) listscroll_cale_day_pane_t1_ParamLimits

0x3665,	// (0x00067d59) main_cale_month_pane_ParamLimits

0xab49,	// (0x0006f23d) popup_toolbar_window_cp03_ParamLimits

0xab49,	// (0x0006f23d) popup_toolbar_window_cp03

0x2f66,	// (0x0006765a) main_image_pane_g2_ParamLimits

0x2f66,	// (0x0006765a) main_image_pane_g2

0x2f77,	// (0x0006766b) main_image_pane_g3_ParamLimits

0x2f77,	// (0x0006766b) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00073bdb) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00073bdb) main_image_pane_g

0xcd83,	// (0x00071477) main_image_pane_t1_ParamLimits

0x2f88,	// (0x0006767c) main_image_pane_t2_ParamLimits

0x2f88,	// (0x0006767c) main_image_pane_t2

0x2f9a,	// (0x0006768e) main_image_pane_t3_ParamLimits

0x2f9a,	// (0x0006768e) main_image_pane_t3

0x2fc2,	// (0x000676b6) main_image_pane_t4_ParamLimits

0x2fc2,	// (0x000676b6) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00073be2) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00073be2) main_image_pane_t

0x2fe2,	// (0x000676d6) popup_image_details_window_cp01

0x2fec,	// (0x000676e0) popup_toobar_trans_pane_cp01_ParamLimits

0x2fec,	// (0x000676e0) popup_toobar_trans_pane_cp01

0x377e,	// (0x00067e72) popup_image_details_window_ParamLimits

0x377e,	// (0x00067e72) popup_image_details_window

0xab1c,	// (0x0006f210) popup_image_focus_window

0x3b95,	// (0x00068289) camera2_autofocus_pane_ParamLimits

0x3b95,	// (0x00068289) camera2_autofocus_pane

0xa3d2,	// (0x0006eac6) bg_popup_sub_pane_cp06

0xe496,	// (0x00072b8a) popup_image_focus_window_g1

0xe49e,	// (0x00072b92) popup_image_focus_window_g2

0xe4a6,	// (0x00072b9a) popup_image_focus_window_g3

0xe4ae,	// (0x00072ba2) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x00073df1) popup_image_focus_window_g

0xe4b6,	// (0x00072baa) popup_image_focus_window_t1

0xe4c4,	// (0x00072bb8) popup_image_focus_window_t2

0xe4d4,	// (0x00072bc8) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x00073dfa) popup_image_focus_window_t

0xe4e2,	// (0x00072bd6) camera2_autofocus_pane_g1

0xdf5c,	// (0x00072650) bg_tb_trans_pane_cp01

0xe4f0,	// (0x00072be4) popup_image_details_window_g1

0xe503,	// (0x00072bf7) popup_image_details_window_g2

0x0002,

0xf718,	// (0x00073e0c) popup_image_details_window_g

0xe52c,	// (0x00072c20) popup_image_details_window_t1

0xe53e,	// (0x00072c32) popup_image_details_window_t2

0xe557,	// (0x00072c4b) popup_image_details_window_t3

0xe56b,	// (0x00072c5f) popup_image_details_window_t4

0xe586,	// (0x00072c7a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x00073e13) popup_image_details_window_t

0xbec7,	// (0x000705bb) bg_calc_paper_pane_ParamLimits

0xa458,	// (0x0006eb4c) grid_highlight_pane_cp013

0xa991,	// (0x0006f085) list_calc_pane_ParamLimits

0xa9a3,	// (0x0006f097) scroll_pane_cp024

0xbedb,	// (0x000705cf) bg_calc_display_pane_ParamLimits

0x0850,	// (0x00064f44) calc_display_pane_t1_ParamLimits

0x0862,	// (0x00064f56) calc_display_pane_t2_ParamLimits

0xa9ab,	// (0x0006f09f) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00073845) calc_display_pane_t_ParamLimits

0x091c,	// (0x00065010) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00073862) cell_calc_pane_g

0x0925,	// (0x00065019) cell_calc_pane_t1

0xbf3a,	// (0x0007062e) grid_highlight_pane_cp02_ParamLimits

0xbf50,	// (0x00070644) toolbar_button_pane_cp01_ParamLimits

0xbf50,	// (0x00070644) toolbar_button_pane_cp01

0xcdc8,	// (0x000714bc) temp_image_control_pane_ParamLimits

0xcdc8,	// (0x000714bc) temp_image_control_pane

0xa44a,	// (0x0006eb3e) main_mp3_pane

0xe5a0,	// (0x00072c94) temp_image_control_pane_g1_ParamLimits

0xe5a0,	// (0x00072c94) temp_image_control_pane_g1

0xe5ae,	// (0x00072ca2) temp_image_control_pane_g2_ParamLimits

0xe5ae,	// (0x00072ca2) temp_image_control_pane_g2

0xe5c0,	// (0x00072cb4) temp_image_control_pane_g3_ParamLimits

0xe5c0,	// (0x00072cb4) temp_image_control_pane_g3

0x43ed,	// (0x00068ae1) temp_image_control_pane_g4_ParamLimits

0x43ed,	// (0x00068ae1) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00073e1e) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00073e1e) temp_image_control_pane_g

0xe5a0,	// (0x00072c94) main_mp3_pane_g1

0x4400,	// (0x00068af4) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00073e27) main_mp3_pane_g

0xe603,	// (0x00072cf7) main_mp3_pane_t1

0xc0a8,	// (0x0007079c) main_camera_pane_g8_ParamLimits

0xc0a8,	// (0x0007079c) main_camera_pane_g8

0x120b,	// (0x000658ff) main_video_pane_g7_ParamLimits

0x120b,	// (0x000658ff) main_video_pane_g7

0xab9e,	// (0x0006f292) main_camera2_pane_t7_ParamLimits

0xab9e,	// (0x0006f292) main_camera2_pane_t7

0xc1f0,	// (0x000708e4) scroll_pane_cp025_ParamLimits

0xc1f0,	// (0x000708e4) scroll_pane_cp025

0xc204,	// (0x000708f8) scroll_pane_cp026_ParamLimits

0xc204,	// (0x000708f8) scroll_pane_cp026

0xc213,	// (0x00070907) wml_content_pane_ParamLimits

0xa458,	// (0x0006eb4c) main_touch_calib_pane

0x44d4,	// (0x00068bc8) main_touch_calib_pane_g1

0x44e6,	// (0x00068bda) main_touch_calib_pane_g2

0x44f8,	// (0x00068bec) main_touch_calib_pane_g3

0x450a,	// (0x00068bfe) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x00073e45) main_touch_calib_pane_g

0x451c,	// (0x00068c10) main_touch_calib_pane_t1

0x4536,	// (0x00068c2a) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x00073e4e) main_touch_calib_pane_t

0xc9a3,	// (0x00071097) mup_progress_pane_cp02

0xc9d8,	// (0x000710cc) navi_pane_g1

0xca93,	// (0x00071187) navi_pane_mp_t3

0xa44a,	// (0x0006eb3e) main_mp3_pane_ParamLimits

0x3903,	// (0x00067ff7) navi_pane_ParamLimits

0xe5a0,	// (0x00072c94) main_mp3_pane_g1_ParamLimits

0x4400,	// (0x00068af4) main_mp3_pane_g2_ParamLimits

0x440e,	// (0x00068b02) main_mp3_pane_g3_ParamLimits

0x440e,	// (0x00068b02) main_mp3_pane_g3

0x441c,	// (0x00068b10) main_mp3_pane_g4_ParamLimits

0x441c,	// (0x00068b10) main_mp3_pane_g4

0xe5d0,	// (0x00072cc4) main_mp3_pane_g5_ParamLimits

0xe5d0,	// (0x00072cc4) main_mp3_pane_g5

0xe5de,	// (0x00072cd2) main_mp3_pane_g6_ParamLimits

0xe5de,	// (0x00072cd2) main_mp3_pane_g6

0xe5eb,	// (0x00072cdf) main_mp3_pane_g7_ParamLimits

0xe5eb,	// (0x00072cdf) main_mp3_pane_g7

0xe5f7,	// (0x00072ceb) main_mp3_pane_g8_ParamLimits

0xe5f7,	// (0x00072ceb) main_mp3_pane_g8

0xf733,	// (0x00073e27) main_mp3_pane_g_ParamLimits

0x4428,	// (0x00068b1c) main_mp3_pane_t2

0x4436,	// (0x00068b2a) main_mp3_pane_t3

0xe611,	// (0x00072d05) main_mp3_pane_t4

0xe61f,	// (0x00072d13) main_mp3_pane_t5

0x0005,

0xf744,	// (0x00073e38) main_mp3_pane_t

0xe62d,	// (0x00072d21) mup_progress_pane_cp01

0xa400,	// (0x0006eaf4) aid_zoom_text_secondary2

0xe3e7,	// (0x00072adb) list_cale_ev2_pane

0xe3ef,	// (0x00072ae3) scroll_pane_cp023_ParamLimits

0x458c,	// (0x00068c80) field_cale_ev2_pane_ParamLimits

0x458c,	// (0x00068c80) field_cale_ev2_pane

0xe635,	// (0x00072d29) field_cale_ev2_pane_g1_ParamLimits

0xe635,	// (0x00072d29) field_cale_ev2_pane_g1

0xe641,	// (0x00072d35) field_cale_ev2_pane_g2_ParamLimits

0xe641,	// (0x00072d35) field_cale_ev2_pane_g2

0xe659,	// (0x00072d4d) field_cale_ev2_pane_g3_ParamLimits

0xe659,	// (0x00072d4d) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x00073e59) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x00073e59) field_cale_ev2_pane_g

0x45ac,	// (0x00068ca0) field_cale_ev2_pane_t1_ParamLimits

0x45ac,	// (0x00068ca0) field_cale_ev2_pane_t1

0x45c3,	// (0x00068cb7) field_cale_ev2_pane_t2_ParamLimits

0x45c3,	// (0x00068cb7) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x00073e62) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x00073e62) field_cale_ev2_pane_t

0x2e1b,	// (0x0006750f) main_postcard_pane_g5_ParamLimits

0x2e1b,	// (0x0006750f) main_postcard_pane_g5

0x2e31,	// (0x00067525) main_postcard_pane_g6_ParamLimits

0x2e31,	// (0x00067525) main_postcard_pane_g6

0x0fd7,	// (0x000656cb) camera2_autofocus_pane_cp_ParamLimits

0x0fd7,	// (0x000656cb) camera2_autofocus_pane_cp

0xa44a,	// (0x0006eb3e) main_mup3_pane

0x45d8,	// (0x00068ccc) main_mup3_pane_g1_ParamLimits

0x45d8,	// (0x00068ccc) main_mup3_pane_g1

0x45fa,	// (0x00068cee) main_mup3_pane_g2_ParamLimits

0x45fa,	// (0x00068cee) main_mup3_pane_g2

0x4678,	// (0x00068d6c) main_mup3_pane_g3_ParamLimits

0x4678,	// (0x00068d6c) main_mup3_pane_g3

0x46be,	// (0x00068db2) main_mup3_pane_g4_ParamLimits

0x46be,	// (0x00068db2) main_mup3_pane_g4

0x4704,	// (0x00068df8) main_mup3_pane_g5_ParamLimits

0x4704,	// (0x00068df8) main_mup3_pane_g5

0x474a,	// (0x00068e3e) main_mup3_pane_g6_ParamLimits

0x474a,	// (0x00068e3e) main_mup3_pane_g6

0xe69d,	// (0x00072d91) main_mup3_pane_g7_ParamLimits

0xe69d,	// (0x00072d91) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x00073e72) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x00073e72) main_mup3_pane_g

0x47c8,	// (0x00068ebc) main_mup3_pane_t1_ParamLimits

0x47c8,	// (0x00068ebc) main_mup3_pane_t1

0x483c,	// (0x00068f30) main_mup3_pane_t2_ParamLimits

0x483c,	// (0x00068f30) main_mup3_pane_t2

0x4910,	// (0x00069004) main_mup3_pane_t4_ParamLimits

0x4910,	// (0x00069004) main_mup3_pane_t4

0x4966,	// (0x0006905a) main_mup3_pane_t5_ParamLimits

0x4966,	// (0x0006905a) main_mup3_pane_t5

0x4a22,	// (0x00069116) main_mup3_pane_t6_ParamLimits

0x4a22,	// (0x00069116) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x00073e83) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x00073e83) main_mup3_pane_t

0x4ada,	// (0x000691ce) mup3_progress_pane_ParamLimits

0x4ada,	// (0x000691ce) mup3_progress_pane

0x4b70,	// (0x00069264) popup_mup3_control_window_ParamLimits

0x4b70,	// (0x00069264) popup_mup3_control_window

0xe6ab,	// (0x00072d9f) popup_mup3_text_window

0x4ba2,	// (0x00069296) mup3_progress_pane_t1

0x4bc1,	// (0x000692b5) mup3_progress_pane_t2

0xe6b3,	// (0x00072da7) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x00073e90) mup3_progress_pane_t

0xe6d0,	// (0x00072dc4) mup_progress_pane_cp03

0xa3d2,	// (0x0006eac6) bg_tb_trans_pane_cp04

0x4be0,	// (0x000692d4) mup3_volume_pane

0x4be8,	// (0x000692dc) popup_mup3_control_window_g1

0x4bf1,	// (0x000692e5) mup3_volume_pane_g1

0x4bfa,	// (0x000692ee) mup3_volume_pane_g2

0x4c03,	// (0x000692f7) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x00073e97) mup3_volume_pane_g

0xa3d2,	// (0x0006eac6) bg_tb_trans_pane_cp03

0xe6e0,	// (0x00072dd4) popup_mup3_text_window_g1

0xe6e8,	// (0x00072ddc) popup_mup3_text_window_t1

0xbf23,	// (0x00070617) list_calc_item_pane_g1_ParamLimits

0xe0b7,	// (0x000727ab) mup_volume_pane_cp_g1

0x4550,	// (0x00068c44) main_touch_calib_pane_t3

0x4564,	// (0x00068c58) main_touch_calib_pane_t4

0x4578,	// (0x00068c6c) main_touch_calib_pane_t5

0xa3dc,	// (0x0006ead0) aid_cell_size_toolbar2

0xa3e4,	// (0x0006ead8) aid_popup3_width_pane

0xa3f0,	// (0x0006eae4) aid_zoom_text_msg_primary

0x0fb6,	// (0x000656aa) vorec_t7

0xbee7,	// (0x000705db) bg_calc_paper_pane_g1_ParamLimits

0xbef3,	// (0x000705e7) bg_calc_paper_pane_g2_ParamLimits

0xbeff,	// (0x000705f3) bg_calc_paper_pane_g3_ParamLimits

0xbf0b,	// (0x000705ff) bg_calc_paper_pane_g4_ParamLimits

0xbf17,	// (0x0007060b) bg_calc_paper_pane_g5_ParamLimits

0x08a9,	// (0x00064f9d) bg_calc_paper_pane_g6_ParamLimits

0x08b8,	// (0x00064fac) bg_calc_paper_pane_g7_ParamLimits

0x08c7,	// (0x00064fbb) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0007384c) bg_calc_paper_pane_g_ParamLimits

0x08da,	// (0x00064fce) calc_bg_paper_pane_g9_ParamLimits

0x1122,	// (0x00065816) image_qvga_pane_ParamLimits

0x1122,	// (0x00065816) image_qvga_pane

0xbe16,	// (0x0007050a) bg_popup_sub_pane_cp04_ParamLimits

0xccff,	// (0x000713f3) popup_mup_playback_window_g1_ParamLimits

0xcd0b,	// (0x000713ff) popup_mup_playback_window_t1_ParamLimits

0xcd20,	// (0x00071414) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00073bd6) popup_mup_playback_window_t_ParamLimits

0x4088,	// (0x0006877c) main_mup2_pane_g3_ParamLimits

0x4088,	// (0x0006877c) main_mup2_pane_g3

0x1531,	// (0x00065c25) popup_toolbar_window_cp04

0xd102,	// (0x000717f6) popup_call2_audio_second_window_g3_ParamLimits

0xd102,	// (0x000717f6) popup_call2_audio_second_window_g3

0xd50c,	// (0x00071c00) popup_call2_audio_first_window_g4_ParamLimits

0xd50c,	// (0x00071c00) popup_call2_audio_first_window_g4

0xdbe1,	// (0x000722d5) popup_call2_audio_in_window_g4_ParamLimits

0xdbe1,	// (0x000722d5) popup_call2_audio_in_window_g4

0x2f48,	// (0x0006763c) aid_area_sk_bg_cut_ParamLimits

0x2f48,	// (0x0006763c) aid_area_sk_bg_cut

0xcd35,	// (0x00071429) aid_area_sk_bg_cut_2_ParamLimits

0xcd35,	// (0x00071429) aid_area_sk_bg_cut_2

0x4393,	// (0x00068a87) aid_placing_details_win

0x439b,	// (0x00068a8f) aid_placing_details_win_2

0xe4e2,	// (0x00072bd6) camera2_autofocus_pane_g1_ParamLimits

0x0498,	// (0x00064b8c) popup_fixed_preview_cale_window_ParamLimits

0x0498,	// (0x00064b8c) popup_fixed_preview_cale_window

0xcb11,	// (0x00071205) navi_slider_pane_g3

0xcb1a,	// (0x0007120e) navi_slider_pane_g4

0xcb23,	// (0x00071217) navi_slider_pane_g5

0xcb11,	// (0x00071205) navi_slider_pane_g6

0xaacb,	// (0x0006f1bf) navi_slider_pane_g7

0xcc36,	// (0x0007132a) mup_scale_pane_g3

0xcc3f,	// (0x00071333) mup_scale_pane_g4

0xcc48,	// (0x0007133c) mup_scale_pane_g5

0x2c30,	// (0x00067324) mup_scale_pane_g6

0x2c39,	// (0x0006732d) mup_scale_pane_g7

0xcb11,	// (0x00071205) cams2_slider_pane_g3

0xe139,	// (0x0007282d) cams2_slider_pane_g4

0xac04,	// (0x0006f2f8) cams2_slider_pane_g5

0xcb11,	// (0x00071205) cams2_slider_pane_g6

0xac0c,	// (0x0006f300) cams2_slider_pane_g7

0xe36d,	// (0x00072a61) camera2_autofocus_pane_cp_g1

0xdf42,	// (0x00072636) bg_popup_preview_window_pane_cp02_ParamLimits

0xdf42,	// (0x00072636) bg_popup_preview_window_pane_cp02

0xe6f6,	// (0x00072dea) list_fp_cale_pane_ParamLimits

0xe6f6,	// (0x00072dea) list_fp_cale_pane

0xe702,	// (0x00072df6) popup_fixed_preview_cale_window_t1_ParamLimits

0xe702,	// (0x00072df6) popup_fixed_preview_cale_window_t1

0x4c0c,	// (0x00069300) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c0c,	// (0x00069300) popup_fixed_preview_cale_window_t2

0x4c21,	// (0x00069315) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c21,	// (0x00069315) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x00073e9e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x00073e9e) popup_fixed_preview_cale_window_t

0x4c36,	// (0x0006932a) list_single_fp_cale_pane_ParamLimits

0x4c36,	// (0x0006932a) list_single_fp_cale_pane

0xe720,	// (0x00072e14) list_single_fp_cale_pane_g1_ParamLimits

0xe720,	// (0x00072e14) list_single_fp_cale_pane_g1

0xe72c,	// (0x00072e20) list_single_fp_cale_pane_g2_ParamLimits

0xe72c,	// (0x00072e20) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x00073ea5) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x00073ea5) list_single_fp_cale_pane_g

0xe745,	// (0x00072e39) list_single_fp_cale_pane_t1_ParamLimits

0xe745,	// (0x00072e39) list_single_fp_cale_pane_t1

0xe757,	// (0x00072e4b) list_single_fp_cale_pane_t2_ParamLimits

0xe757,	// (0x00072e4b) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x00073eac) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x00073eac) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa458,	// (0x0006eb4c) main_dialer_pane

0x4c4b,	// (0x0006933f) aid_cell_size_keypad

0x4c55,	// (0x00069349) dialer_ne_pane

0x4c5d,	// (0x00069351) grid_dialer_command_1_pane

0x4c65,	// (0x00069359) grid_dialer_command_2_pane

0x4c6d,	// (0x00069361) grid_dialer_keypad_pane

0x4c7f,	// (0x00069373) bg_popup_call_pane_cp06_ParamLimits

0x4c7f,	// (0x00069373) bg_popup_call_pane_cp06

0x4c8b,	// (0x0006937f) dialer_ne_clear_pane_ParamLimits

0x4c8b,	// (0x0006937f) dialer_ne_clear_pane

0xe78a,	// (0x00072e7e) dialer_ne_pane_g1

0xe792,	// (0x00072e86) dialer_ne_pane_t1_ParamLimits

0xe792,	// (0x00072e86) dialer_ne_pane_t1

0x4c97,	// (0x0006938b) dialer_ne_pane_t2_ParamLimits

0x4c97,	// (0x0006938b) dialer_ne_pane_t2

0x4cc1,	// (0x000693b5) dialer_ne_pane_t3_ParamLimits

0x4cc1,	// (0x000693b5) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x00073eb1) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x00073eb1) dialer_ne_pane_t

0x4cf1,	// (0x000693e5) dialer_ne_pane_t3_copy1_ParamLimits

0x4cf1,	// (0x000693e5) dialer_ne_pane_t3_copy1

0x4d20,	// (0x00069414) cell_dialer_keypad_pane_ParamLimits

0x4d20,	// (0x00069414) cell_dialer_keypad_pane

0x4d37,	// (0x0006942b) cell_dialer_command_1_pane_ParamLimits

0x4d37,	// (0x0006942b) cell_dialer_command_1_pane

0x4d4d,	// (0x00069441) cell_dialer_command_2_pane_ParamLimits

0x4d4d,	// (0x00069441) cell_dialer_command_2_pane

0xe7a4,	// (0x00072e98) bg_button_pane_cp02_ParamLimits

0xe7a4,	// (0x00072e98) bg_button_pane_cp02

0x4d5c,	// (0x00069450) cell_dialer_keypad_pane_g1_ParamLimits

0x4d5c,	// (0x00069450) cell_dialer_keypad_pane_g1

0xe7a4,	// (0x00072e98) bg_button_pane_cp03_ParamLimits

0xe7a4,	// (0x00072e98) bg_button_pane_cp03

0x4d70,	// (0x00069464) cell_dialer_command_1_pane_g1_ParamLimits

0x4d70,	// (0x00069464) cell_dialer_command_1_pane_g1

0xe7b0,	// (0x00072ea4) bg_button_pane_cp04

0x4d84,	// (0x00069478) cell_dialer_command_2_pane_g1

0xc0a0,	// (0x00070794) bg_button_pane_cp06

0xe7b8,	// (0x00072eac) dialer_ne_clear_pane_g1

0xc9e4,	// (0x000710d8) navi_pane_g2

0xca12,	// (0x00071106) navi_pane_g3

0x0002,

0xf3e5,	// (0x00073ad9) navi_pane_g

0xcaa1,	// (0x00071195) navi_pane_mv_g2

0xcac8,	// (0x000711bc) navi_pane_mv_g5

0x27f4,	// (0x00066ee8) navi_pane_mv_t1

0xbedb,	// (0x000705cf) main_clock2_pane

0x4dd1,	// (0x000694c5) main_clock2_list_pane_ParamLimits

0x4dd1,	// (0x000694c5) main_clock2_list_pane

0x4e09,	// (0x000694fd) main_clock2_pane_t1_ParamLimits

0x4e09,	// (0x000694fd) main_clock2_pane_t1

0x4e45,	// (0x00069539) main_clock2_pane_t2_ParamLimits

0x4e45,	// (0x00069539) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x00073ebd) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x00073ebd) main_clock2_pane_t

0x4ee3,	// (0x000695d7) popup_clock_analogue_window_cp03_ParamLimits

0x4ee3,	// (0x000695d7) popup_clock_analogue_window_cp03

0x4f08,	// (0x000695fc) popup_clock_digital_window_cp02_ParamLimits

0x4f08,	// (0x000695fc) popup_clock_digital_window_cp02

0x4f79,	// (0x0006966d) main_clock2_list_single_pane_ParamLimits

0x4f79,	// (0x0006966d) main_clock2_list_single_pane

0xc0a0,	// (0x00070794) list_highlight_pane_cp05

0xe7f6,	// (0x00072eea) main_clock2_list_single_pane_t1

0x1531,	// (0x00065c25) popup_toolbar_window_cp04_ParamLimits

0x43bd,	// (0x00068ab1) camera2_autofocus_pane_g2_ParamLimits

0x43bd,	// (0x00068ab1) camera2_autofocus_pane_g2

0x43c9,	// (0x00068abd) camera2_autofocus_pane_g3_ParamLimits

0x43c9,	// (0x00068abd) camera2_autofocus_pane_g3

0x43d5,	// (0x00068ac9) camera2_autofocus_pane_g4_ParamLimits

0x43d5,	// (0x00068ac9) camera2_autofocus_pane_g4

0x43e1,	// (0x00068ad5) camera2_autofocus_pane_g5_ParamLimits

0x43e1,	// (0x00068ad5) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x00073e01) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x00073e01) camera2_autofocus_pane_g

0xe67d,	// (0x00072d71) camera2_autofocus_pane_cp_g2

0xe685,	// (0x00072d79) camera2_autofocus_pane_cp_g3

0xe68d,	// (0x00072d81) camera2_autofocus_pane_cp_g4

0xe695,	// (0x00072d89) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x00073e67) camera2_autofocus_pane_cp_g

0x4c77,	// (0x0006936b) popup_dialer_spcha_window

0xa3d2,	// (0x0006eac6) bg_popup_sub_pane_cp07

0xe804,	// (0x00072ef8) list_spcha_pane

0xe80c,	// (0x00072f00) list_single_spcha_pane_ParamLimits

0xe80c,	// (0x00072f00) list_single_spcha_pane

0xa3d2,	// (0x0006eac6) list_highlight_pane_cp06

0xe81d,	// (0x00072f11) list_single_spcha_pane_t1

0xd98b,	// (0x0007207f) popup_call2_audio_out_window_g4_ParamLimits

0xd98b,	// (0x0007207f) popup_call2_audio_out_window_g4

0xa458,	// (0x0006eb4c) main_imed2_pane

0xab24,	// (0x0006f218) popup_imed_adjust2_window

0x3796,	// (0x00067e8a) popup_imed_trans_window_ParamLimits

0x3796,	// (0x00067e8a) popup_imed_trans_window

0xe1a2,	// (0x00072896) popup_blid_sat_info2_window_t1

0xe1b0,	// (0x000728a4) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x00073d96) popup_blid_sat_info2_window_t

0x5022,	// (0x00069716) aid_size_cell_colour_35

0x5042,	// (0x00069736) aid_size_cell_colour_112

0x5062,	// (0x00069756) aid_size_cell_effect

0xdf4e,	// (0x00072642) bg_tb_trans_pane_cp02

0xc541,	// (0x00070c35) heading_imed_pane

0x5082,	// (0x00069776) listscroll_imed_pane

0xe82b,	// (0x00072f1f) heading_imed_pane_g1

0xe833,	// (0x00072f27) heading_imed_pane_t1

0xe841,	// (0x00072f35) grid_imed_colour_35_pane_ParamLimits

0xe841,	// (0x00072f35) grid_imed_colour_35_pane

0x508e,	// (0x00069782) grid_imed_effect_pane

0xe858,	// (0x00072f4c) list_imed_aspect_pane

0x50a4,	// (0x00069798) scroll_pane_cp027_ParamLimits

0x50a4,	// (0x00069798) scroll_pane_cp027

0x50b5,	// (0x000697a9) cell_imed_effect_pane_ParamLimits

0x50b5,	// (0x000697a9) cell_imed_effect_pane

0xe860,	// (0x00072f54) cell_imed_colour_pane_ParamLimits

0xe860,	// (0x00072f54) cell_imed_colour_pane

0xe8a2,	// (0x00072f96) cell_imed_colour_pane_g1_ParamLimits

0xe8a2,	// (0x00072f96) cell_imed_colour_pane_g1

0xe8b3,	// (0x00072fa7) hgihlgiht_grid_pane_cp016_ParamLimits

0xe8b3,	// (0x00072fa7) hgihlgiht_grid_pane_cp016

0x50dc,	// (0x000697d0) cell_imed_effect_pane_g1

0x50e4,	// (0x000697d8) grid_highlight_pane_cp017

0xe8c4,	// (0x00072fb8) list_imed_single_pane_ParamLimits

0xe8c4,	// (0x00072fb8) list_imed_single_pane

0xa3d2,	// (0x0006eac6) list_highlight_pane_cp07

0xe8d9,	// (0x00072fcd) list_imed_aspect_pane_comp1_t1

0xdf4e,	// (0x00072642) bg_tb_trans_pane_cp05

0xe8fb,	// (0x00072fef) popup_imed_adjust2_window_g1

0xe922,	// (0x00073016) popup_imed_adjust2_window_t1

0xe93a,	// (0x0007302e) slider_imed_adjust_pane

0xe94e,	// (0x00073042) slider_imed_adjust_pane_g1

0xe95e,	// (0x00073052) slider_imed_adjust_pane_g2

0xe96e,	// (0x00073062) slider_imed_adjust_pane_g3

0xe97f,	// (0x00073073) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00073eda) slider_imed_adjust_pane_g

0x50ed,	// (0x000697e1) aid_size_cell_clipart2

0x50f9,	// (0x000697ed) grid_imed_clipart_pane

0xe990,	// (0x00073084) scroll_pane_cp031

0x5103,	// (0x000697f7) cell_imed_clipart_pane_ParamLimits

0x5103,	// (0x000697f7) cell_imed_clipart_pane

0x5125,	// (0x00069819) cell_imed_clipart_pane_g1

0xa3d2,	// (0x0006eac6) grid_highlight_pane_cp014

0x4de6,	// (0x000694da) main_clock2_pane_g1_ParamLimits

0x4de6,	// (0x000694da) main_clock2_pane_g1

0x4f24,	// (0x00069618) aid_call2_pane_cp10

0x4f36,	// (0x0006962a) aid_call_pane_cp10

0xc937,	// (0x0007102b) popup_clock_analogue_window_cp10_g1

0xc937,	// (0x0007102b) popup_clock_analogue_window_cp10_g2

0x4f48,	// (0x0006963c) popup_clock_analogue_window_cp10_g3

0x4f48,	// (0x0006963c) popup_clock_analogue_window_cp10_g4

0xc937,	// (0x0007102b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00073ec8) popup_clock_analogue_window_cp10_g

0x4f5a,	// (0x0006964e) popup_clock_analogue_window_cp10_t1

0x4f8b,	// (0x0006967f) clock_digital_number_pane_cp10_ParamLimits

0x4f8b,	// (0x0006967f) clock_digital_number_pane_cp10

0x4fa3,	// (0x00069697) clock_digital_number_pane_cp11_ParamLimits

0x4fa3,	// (0x00069697) clock_digital_number_pane_cp11

0x4fbb,	// (0x000696af) clock_digital_number_pane_cp12_ParamLimits

0x4fbb,	// (0x000696af) clock_digital_number_pane_cp12

0x4fd3,	// (0x000696c7) clock_digital_number_pane_cp13_ParamLimits

0x4fd3,	// (0x000696c7) clock_digital_number_pane_cp13

0x4feb,	// (0x000696df) clock_digital_separator_pane_cp10_ParamLimits

0x4feb,	// (0x000696df) clock_digital_separator_pane_cp10

0x5003,	// (0x000696f7) popup_clock_digital_window_cp02_t1_ParamLimits

0x5003,	// (0x000696f7) popup_clock_digital_window_cp02_t1

0xbe0e,	// (0x00070502) clock_digital_number_pane_cp10_g1

0xbe0e,	// (0x00070502) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x00073ee3) clock_digital_number_pane_cp10_g

0xbe0e,	// (0x00070502) clock_digital_separator_pane_cp10_g1

0xbe0e,	// (0x00070502) clock_digital_separator_pane_g2_cp10

0xcad0,	// (0x000711c4) navi_pane_vded_g4

0xcad9,	// (0x000711cd) navi_pane_vded_g5

0xcae2,	// (0x000711d6) navi_pane_vded_t1

0xa458,	// (0x0006eb4c) main_vded_pane

0x512e,	// (0x00069822) main_vded_pane_g1

0x5138,	// (0x0006982c) main_vded_pane_g2

0x5142,	// (0x00069836) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00073ee8) main_vded_pane_g

0x514c,	// (0x00069840) main_vded_pane_t1

0x515a,	// (0x0006984e) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00073eef) main_vded_pane_t

0x5168,	// (0x0006985c) vded_slider_pane

0x5170,	// (0x00069864) vded_video_pane

0xe998,	// (0x0007308c) vded_video_pane_g1

0x5178,	// (0x0006986c) vded_video_pane_g2

0xe36d,	// (0x00072a61) vded_video_pane_g3

0x0002,

0xf800,	// (0x00073ef4) vded_video_pane_g

0xe9a2,	// (0x00073096) vded_slider_pane_g1

0xe0b7,	// (0x000727ab) vded_slider_pane_g2

0xe9ab,	// (0x0007309f) vded_slider_pane_g3

0xe9b4,	// (0x000730a8) vded_slider_pane_g4

0xe9bd,	// (0x000730b1) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00073efb) vded_slider_pane_g

0x4b58,	// (0x0006924c) mup3_rocker_pane_ParamLimits

0x4b58,	// (0x0006924c) mup3_rocker_pane

0x5181,	// (0x00069875) mup3_control_keys_pane_g1

0x5189,	// (0x0006987d) mup3_control_keys_pane_g2

0x5191,	// (0x00069885) mup3_control_keys_pane_g3

0x5199,	// (0x0006988d) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x00073f06) mup3_control_keys_pane_g

0x04cf,	// (0x00064bc3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04cf,	// (0x00064bc3) popup_toolbar2_fixed_window_cp01

0x4b8c,	// (0x00069280) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b8c,	// (0x00069280) popup_toolbar2_fixed_window_cp02

0xd274,	// (0x00071968) popup_call2_audio_second_window_t4_ParamLimits

0xd274,	// (0x00071968) popup_call2_audio_second_window_t4

0xd7f8,	// (0x00071eec) popup_call2_audio_first_window_t6_ParamLimits

0xd7f8,	// (0x00071eec) popup_call2_audio_first_window_t6

0xda8e,	// (0x00072182) popup_call2_audio_out_window_t6_ParamLimits

0xda8e,	// (0x00072182) popup_call2_audio_out_window_t6

0xa458,	// (0x0006eb4c) main_vitu_pane

0x51a9,	// (0x0006989d) aid_size_cell_itu_ParamLimits

0x51a9,	// (0x0006989d) aid_size_cell_itu

0xdf5c,	// (0x00072650) bg_popup_window_pane_cp08_ParamLimits

0xdf5c,	// (0x00072650) bg_popup_window_pane_cp08

0x51bf,	// (0x000698b3) field_vitu_entry_pane_ParamLimits

0x51bf,	// (0x000698b3) field_vitu_entry_pane

0x51d6,	// (0x000698ca) grid_vitu_function_pane_ParamLimits

0x51d6,	// (0x000698ca) grid_vitu_function_pane

0x51f1,	// (0x000698e5) grid_vitu_itu_pane_ParamLimits

0x51f1,	// (0x000698e5) grid_vitu_itu_pane

0x520f,	// (0x00069903) cell_vitu_itu_pane_ParamLimits

0x520f,	// (0x00069903) cell_vitu_itu_pane

0x5231,	// (0x00069925) cell_vitu_function_pane_ParamLimits

0x5231,	// (0x00069925) cell_vitu_function_pane

0xdf5c,	// (0x00072650) bg_popup_sub_pane_cp08_ParamLimits

0xdf5c,	// (0x00072650) bg_popup_sub_pane_cp08

0x524a,	// (0x0006993e) field_vitu_entry_pane_t1_ParamLimits

0x524a,	// (0x0006993e) field_vitu_entry_pane_t1

0xe9de,	// (0x000730d2) field_vitu_entry_pane_t2_ParamLimits

0xe9de,	// (0x000730d2) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x00073f14) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x00073f14) field_vitu_entry_pane_t

0xe9fb,	// (0x000730ef) bg_button_pane_cp05_ParamLimits

0xe9fb,	// (0x000730ef) bg_button_pane_cp05

0x5268,	// (0x0006995c) cell_vitu_itu_pane_g1

0x5280,	// (0x00069974) cell_vitu_itu_pane_t1_ParamLimits

0x5280,	// (0x00069974) cell_vitu_itu_pane_t1

0x5292,	// (0x00069986) cell_vitu_itu_pane_t2_ParamLimits

0x5292,	// (0x00069986) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00073f19) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00073f19) cell_vitu_itu_pane_t

0xea09,	// (0x000730fd) bg_button_pane_cp07

0x52c7,	// (0x000699bb) cell_vitu_function_pane_g1

0xa989,	// (0x0006f07d) main_calc_pane_g1

0x02f6,	// (0x000649ea) aid_visual_content_pane

0xa458,	// (0x0006eb4c) main_vradio_pane

0x52d0,	// (0x000699c4) main_vradio_pane_g1_ParamLimits

0x52d0,	// (0x000699c4) main_vradio_pane_g1

0xea13,	// (0x00073107) main_vradio_pane_g2_ParamLimits

0xea13,	// (0x00073107) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00073f20) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00073f20) main_vradio_pane_g

0x52e9,	// (0x000699dd) main_vradio_pane_t1_ParamLimits

0x52e9,	// (0x000699dd) main_vradio_pane_t1

0x52fe,	// (0x000699f2) main_vradio_pane_t2_ParamLimits

0x52fe,	// (0x000699f2) main_vradio_pane_t2

0xea20,	// (0x00073114) main_vradio_pane_t3_ParamLimits

0xea20,	// (0x00073114) main_vradio_pane_t3

0x0002,

0xf831,	// (0x00073f25) main_vradio_pane_t_ParamLimits

0xf831,	// (0x00073f25) main_vradio_pane_t

0x5313,	// (0x00069a07) vradio_rocker_control_pane_ParamLimits

0x5313,	// (0x00069a07) vradio_rocker_control_pane

0x5325,	// (0x00069a19) vradio_station_info_pane_ParamLimits

0x5325,	// (0x00069a19) vradio_station_info_pane

0xea34,	// (0x00073128) vradio_frequency_info_pane_ParamLimits

0xea34,	// (0x00073128) vradio_frequency_info_pane

0xe36d,	// (0x00072a61) vradio_station_info_pane_g1

0xea43,	// (0x00073137) vradio_station_info_pane_t1_ParamLimits

0xea43,	// (0x00073137) vradio_station_info_pane_t1

0xea65,	// (0x00073159) vradio_station_info_pane_t2_ParamLimits

0xea65,	// (0x00073159) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00073f2c) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00073f2c) vradio_station_info_pane_t

0xea77,	// (0x0007316b) vradio_tuning_pane

0xea7f,	// (0x00073173) vradio_rocker_control_pane_g1

0xea87,	// (0x0007317b) vradio_rocker_control_pane_g2

0xea8f,	// (0x00073183) vradio_rocker_control_pane_g3

0xea97,	// (0x0007318b) vradio_rocker_control_pane_g4

0xea9f,	// (0x00073193) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00073f31) vradio_rocker_control_pane_g

0x5337,	// (0x00069a2b) vradio_frequency_info_pane_g1

0xeaa7,	// (0x0007319b) vradio_frequency_info_pane_t1_ParamLimits

0xeaa7,	// (0x0007319b) vradio_frequency_info_pane_t1

0x5341,	// (0x00069a35) vradio_tuning_pane_g1

0x534c,	// (0x00069a40) vradio_tuning_pane_t1

0xa408,	// (0x0006eafc) area_side_right_pane_ParamLimits

0xa408,	// (0x0006eafc) area_side_right_pane

0xdf09,	// (0x000725fd) status_small_pane_g1

0xdf11,	// (0x00072605) status_small_pane_g2

0xdf1a,	// (0x0007260e) status_small_pane_g3

0xdf23,	// (0x00072617) status_small_pane_g4

0x0003,

0xf5f8,	// (0x00073cec) status_small_pane_g

0xdf2c,	// (0x00072620) status_small_pane_t1

0xa458,	// (0x0006eb4c) main_video3_pane

0xeabb,	// (0x000731af) cams_zoom_vslider_pane

0xeac3,	// (0x000731b7) image3_wide_pane_ParamLimits

0xeac3,	// (0x000731b7) image3_wide_pane

0xeadd,	// (0x000731d1) image3_wide_small_pane

0xeae9,	// (0x000731dd) main_video3_pane_g1_ParamLimits

0xeae9,	// (0x000731dd) main_video3_pane_g1

0xeb05,	// (0x000731f9) main_video3_pane_g2_ParamLimits

0xeb05,	// (0x000731f9) main_video3_pane_g2

0x0001,

0xf848,	// (0x00073f3c) main_video3_pane_g_ParamLimits

0xf848,	// (0x00073f3c) main_video3_pane_g

0xeb21,	// (0x00073215) main_video3_pane_t1_ParamLimits

0xeb21,	// (0x00073215) main_video3_pane_t1

0xeb4c,	// (0x00073240) main_video3_pane_t2_ParamLimits

0xeb4c,	// (0x00073240) main_video3_pane_t2

0xeb77,	// (0x0007326b) main_video3_pane_t3_ParamLimits

0xeb77,	// (0x0007326b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00073f41) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00073f41) main_video3_pane_t

0xeba4,	// (0x00073298) cams_zoom_vslider_pane_g1

0xebad,	// (0x000732a1) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00073f48) cams_zoom_vslider_pane_g

0xebb5,	// (0x000732a9) small_slider_vertical_pane

0xe36d,	// (0x00072a61) small_slider_vertical_pane_g1

0xe36d,	// (0x00072a61) small_slider_vertical_pane_g2

0xebbd,	// (0x000732b1) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x00073f4d) small_slider_vertical_pane_g

0xa458,	// (0x0006eb4c) main_hwr_training_pane

0xebc6,	// (0x000732ba) hwr_training_instruct_pane_ParamLimits

0xebc6,	// (0x000732ba) hwr_training_instruct_pane

0x535b,	// (0x00069a4f) hwr_training_navi_pane_ParamLimits

0x535b,	// (0x00069a4f) hwr_training_navi_pane

0x537a,	// (0x00069a6e) hwr_training_write_pane_ParamLimits

0x537a,	// (0x00069a6e) hwr_training_write_pane

0xa3d2,	// (0x0006eac6) bg_frame_shadow_pane

0xebfd,	// (0x000732f1) hwr_training_write_pane_g1

0xec05,	// (0x000732f9) hwr_training_write_pane_g2

0xec0d,	// (0x00073301) hwr_training_write_pane_g3

0xec15,	// (0x00073309) hwr_training_write_pane_g4

0xec1d,	// (0x00073311) hwr_training_write_pane_g5

0xec25,	// (0x00073319) hwr_training_write_pane_g6

0xec2d,	// (0x00073321) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x00073f54) hwr_training_write_pane_g

0xac15,	// (0x0006f309) hwr_training_navi_pane_g1_ParamLimits

0xac15,	// (0x0006f309) hwr_training_navi_pane_g1

0xac27,	// (0x0006f31b) hwr_training_navi_pane_g2_ParamLimits

0xac27,	// (0x0006f31b) hwr_training_navi_pane_g2

0xac39,	// (0x0006f32d) hwr_training_navi_pane_g3_ParamLimits

0xac39,	// (0x0006f32d) hwr_training_navi_pane_g3

0xac49,	// (0x0006f33d) hwr_training_navi_pane_g4_ParamLimits

0xac49,	// (0x0006f33d) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x00073f63) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x00073f63) hwr_training_navi_pane_g

0xac56,	// (0x0006f34a) hwr_training_navi_pane_t1

0x53c2,	// (0x00069ab6) list_single_hwr_training_instruct_pane_ParamLimits

0x53c2,	// (0x00069ab6) list_single_hwr_training_instruct_pane

0xec35,	// (0x00073329) list_single_hwr_training_instruct_pane_t1

0xe2a4,	// (0x00072998) bg_frame_shadow_pane_g1

0xec44,	// (0x00073338) bg_frame_shadow_pane_g2

0xec4c,	// (0x00073340) bg_frame_shadow_pane_g3

0xec54,	// (0x00073348) bg_frame_shadow_pane_g4

0xec5c,	// (0x00073350) bg_frame_shadow_pane_g5

0xec64,	// (0x00073358) bg_frame_shadow_pane_g6

0xec6c,	// (0x00073360) bg_frame_shadow_pane_g7

0xbf94,	// (0x00070688) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x00073f6e) bg_frame_shadow_pane_g

0xa458,	// (0x0006eb4c) main_video_tele_dialer_pane

0x53d7,	// (0x00069acb) aid_size_cell_video_keypad_ParamLimits

0x53d7,	// (0x00069acb) aid_size_cell_video_keypad

0x53f1,	// (0x00069ae5) grid_video_dialer_keypad_pane_ParamLimits

0x53f1,	// (0x00069ae5) grid_video_dialer_keypad_pane

0x543d,	// (0x00069b31) video_down_pane_cp_ParamLimits

0x543d,	// (0x00069b31) video_down_pane_cp

0x546f,	// (0x00069b63) cell_video_dialer_keypad_pane_ParamLimits

0x546f,	// (0x00069b63) cell_video_dialer_keypad_pane

0xec74,	// (0x00073368) bg_button_pane_cp08_ParamLimits

0xec74,	// (0x00073368) bg_button_pane_cp08

0x5491,	// (0x00069b85) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5491,	// (0x00069b85) cell_video_dialer_keypad_pane_g1

0x4b42,	// (0x00069236) mup3_rocker2_pane_ParamLimits

0x4b42,	// (0x00069236) mup3_rocker2_pane

0xe36d,	// (0x00072a61) mup3_rocker2_pane_g1

0x3677,	// (0x00067d6b) main_dialer2_pane

0xa458,	// (0x0006eb4c) main_mp4_pane

0xac6c,	// (0x0006f360) main_mp4_pane_g1_ParamLimits

0xac6c,	// (0x0006f360) main_mp4_pane_g1

0xac6c,	// (0x0006f360) main_mp4_pane_g2_ParamLimits

0xac6c,	// (0x0006f360) main_mp4_pane_g2

0x54c8,	// (0x00069bbc) main_mp4_pane_g3_ParamLimits

0x54c8,	// (0x00069bbc) main_mp4_pane_g3

0xac7a,	// (0x0006f36e) main_mp4_pane_g4_ParamLimits

0xac7a,	// (0x0006f36e) main_mp4_pane_g4

0xaca2,	// (0x0006f396) main_mp4_pane_g5_ParamLimits

0xaca2,	// (0x0006f396) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x00073f8e) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x00073f8e) main_mp4_pane_g

0xacf2,	// (0x0006f3e6) main_mp4_pane_t1_ParamLimits

0xacf2,	// (0x0006f3e6) main_mp4_pane_t1

0xad4e,	// (0x0006f442) main_mp4_pane_t2_ParamLimits

0xad4e,	// (0x0006f442) main_mp4_pane_t2

0xec80,	// (0x00073374) main_mp4_pane_t3_ParamLimits

0xec80,	// (0x00073374) main_mp4_pane_t3

0xada0,	// (0x0006f494) main_mp4_pane_t4_ParamLimits

0xada0,	// (0x0006f494) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00073f9b) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00073f9b) main_mp4_pane_t

0xade4,	// (0x0006f4d8) mp4_progress_pane_ParamLimits

0xade4,	// (0x0006f4d8) mp4_progress_pane

0xae2e,	// (0x0006f522) mp4_rocker_pane_ParamLimits

0xae2e,	// (0x0006f522) mp4_rocker_pane

0xeca8,	// (0x0007339c) mp4_progress_pane_t1

0xecc1,	// (0x000733b5) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00073fa4) mp4_progress_pane_t

0xecda,	// (0x000733ce) mup_progress_pane_cp04

0x5504,	// (0x00069bf8) mp4_rocker_pane_g1

0x550e,	// (0x00069c02) aid_cell_size_keypad2_ParamLimits

0x550e,	// (0x00069c02) aid_cell_size_keypad2

0x5524,	// (0x00069c18) dialer2_ne_pane_ParamLimits

0x5524,	// (0x00069c18) dialer2_ne_pane

0x553e,	// (0x00069c32) grid_dialer2_keypad_pane_ParamLimits

0x553e,	// (0x00069c32) grid_dialer2_keypad_pane

0xe149,	// (0x0007283d) bg_popup_call_pane_cp07_ParamLimits

0xe149,	// (0x0007283d) bg_popup_call_pane_cp07

0x555a,	// (0x00069c4e) dialer2_ne_pane_t1_ParamLimits

0x555a,	// (0x00069c4e) dialer2_ne_pane_t1

0x5595,	// (0x00069c89) cell_dialer2_keypad_pane_ParamLimits

0x5595,	// (0x00069c89) cell_dialer2_keypad_pane

0xecf8,	// (0x000733ec) bg_button_pane_pane_cp04_ParamLimits

0xecf8,	// (0x000733ec) bg_button_pane_pane_cp04

0x55b7,	// (0x00069cab) cell_dialer2_keypad_pane_g1_ParamLimits

0x55b7,	// (0x00069cab) cell_dialer2_keypad_pane_g1

0x1405,	// (0x00065af9) aid_placing_vt_set_content_ParamLimits

0x1405,	// (0x00065af9) aid_placing_vt_set_content

0x142d,	// (0x00065b21) aid_placing_vt_set_title_ParamLimits

0x142d,	// (0x00065b21) aid_placing_vt_set_title

0xa458,	// (0x0006eb4c) main_image3_pane

0x567d,	// (0x00069d71) area_side_right_pane_cp01_ParamLimits

0x567d,	// (0x00069d71) area_side_right_pane_cp01

0xac6c,	// (0x0006f360) main_image3_pane_g1_ParamLimits

0xac6c,	// (0x0006f360) main_image3_pane_g1

0x5694,	// (0x00069d88) main_image3_pane_g2_ParamLimits

0x5694,	// (0x00069d88) main_image3_pane_g2

0x56bc,	// (0x00069db0) main_image3_pane_g3_ParamLimits

0x56bc,	// (0x00069db0) main_image3_pane_g3

0x56e6,	// (0x00069dda) main_image3_pane_g4_ParamLimits

0x56e6,	// (0x00069dda) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00073fb3) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00073fb3) main_image3_pane_g

0x5710,	// (0x00069e04) main_image3_pane_t1_ParamLimits

0x5710,	// (0x00069e04) main_image3_pane_t1

0x5768,	// (0x00069e5c) main_image3_pane_t2_ParamLimits

0x5768,	// (0x00069e5c) main_image3_pane_t2

0x57ba,	// (0x00069eae) main_image3_pane_t3_ParamLimits

0x57ba,	// (0x00069eae) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00073fbc) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00073fbc) main_image3_pane_t

0xdf5c,	// (0x00072650) grid_sctrl_middle_pane_cp01_ParamLimits

0xdf5c,	// (0x00072650) grid_sctrl_middle_pane_cp01

0x5842,	// (0x00069f36) cell_sctrl_middle_pane_cp01_ParamLimits

0x5842,	// (0x00069f36) cell_sctrl_middle_pane_cp01

0x585f,	// (0x00069f53) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x585f,	// (0x00069f53) cell_sctrl_middle_pane_cp01_g1

0xa458,	// (0x0006eb4c) main_call4_pane

0x5875,	// (0x00069f69) aid_size_button_call4_ParamLimits

0x5875,	// (0x00069f69) aid_size_button_call4

0x58a6,	// (0x00069f9a) call4_windows_pane_ParamLimits

0x58a6,	// (0x00069f9a) call4_windows_pane

0x58c6,	// (0x00069fba) grid_call4_button_pane_ParamLimits

0x58c6,	// (0x00069fba) grid_call4_button_pane

0xed04,	// (0x000733f8) call4_windows_conf_pane

0xed1b,	// (0x0007340f) popup_call4_audio_first_window_ParamLimits

0xed1b,	// (0x0007340f) popup_call4_audio_first_window

0xed67,	// (0x0007345b) popup_call4_audio_second_window_ParamLimits

0xed67,	// (0x0007345b) popup_call4_audio_second_window

0xed7b,	// (0x0007346f) popup_call4_audio_wait_window_ParamLimits

0xed7b,	// (0x0007346f) popup_call4_audio_wait_window

0x58f3,	// (0x00069fe7) cell_call4_button_pane_ParamLimits

0x58f3,	// (0x00069fe7) cell_call4_button_pane

0x591c,	// (0x0006a010) bg_button_pane_cp09_ParamLimits

0x591c,	// (0x0006a010) bg_button_pane_cp09

0x5928,	// (0x0006a01c) cell_call4_button_pane_g1_ParamLimits

0x5928,	// (0x0006a01c) cell_call4_button_pane_g1

0x594e,	// (0x0006a042) cell_call4_button_pane_t1_ParamLimits

0x594e,	// (0x0006a042) cell_call4_button_pane_t1

0xedc3,	// (0x000734b7) popup_call4_audio_conf_window_ParamLimits

0xedc3,	// (0x000734b7) popup_call4_audio_conf_window

0x4ba2,	// (0x00069296) mup3_progress_pane_t1_ParamLimits

0x4bc1,	// (0x000692b5) mup3_progress_pane_t2_ParamLimits

0xe6b3,	// (0x00072da7) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x00073e90) mup3_progress_pane_t_ParamLimits

0xe6d0,	// (0x00072dc4) mup_progress_pane_cp03_ParamLimits

0x51a1,	// (0x00069895) mup3_control_keys_pane_g4_copy1

0xae12,	// (0x0006f506) mp4_rocker2_pane_ParamLimits

0xae12,	// (0x0006f506) mp4_rocker2_pane

0xedd7,	// (0x000734cb) mp4_rocker2_pane_g1

0xeddf,	// (0x000734d3) mp4_rocker2_pane_g2

0xae80,	// (0x0006f574) mp4_rocker2_pane_g3

0xae88,	// (0x0006f57c) mp4_rocker2_pane_g4

0xae90,	// (0x0006f584) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00073fc5) mp4_rocker2_pane_g

0xa458,	// (0x0006eb4c) main_camera4_pane

0xa458,	// (0x0006eb4c) main_video4_pane

0x540b,	// (0x00069aff) main_video_tele_dialer_pane_t1_ParamLimits

0x540b,	// (0x00069aff) main_video_tele_dialer_pane_t1

0x5424,	// (0x00069b18) main_video_tele_dialer_pane_t2_ParamLimits

0x5424,	// (0x00069b18) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x00073f7f) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x00073f7f) main_video_tele_dialer_pane_t

0x598c,	// (0x0006a080) cam4_autofocus_pane_ParamLimits

0x598c,	// (0x0006a080) cam4_autofocus_pane

0x59a2,	// (0x0006a096) cam4_image_uncrop_pane_ParamLimits

0x59a2,	// (0x0006a096) cam4_image_uncrop_pane

0x59bc,	// (0x0006a0b0) cam4_indicators_pane_ParamLimits

0x59bc,	// (0x0006a0b0) cam4_indicators_pane

0x59e7,	// (0x0006a0db) main_camera4_pane_g1_ParamLimits

0x59e7,	// (0x0006a0db) main_camera4_pane_g1

0x59f9,	// (0x0006a0ed) main_camera4_pane_g2_ParamLimits

0x59f9,	// (0x0006a0ed) main_camera4_pane_g2

0x5a0c,	// (0x0006a100) main_camera4_pane_g3_ParamLimits

0x5a0c,	// (0x0006a100) main_camera4_pane_g3

0x5a1f,	// (0x0006a113) main_camera4_pane_g4_ParamLimits

0x5a1f,	// (0x0006a113) main_camera4_pane_g4

0x5a32,	// (0x0006a126) main_camera4_pane_g5_ParamLimits

0x5a32,	// (0x0006a126) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00073fd0) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00073fd0) main_camera4_pane_g

0x5a56,	// (0x0006a14a) main_camera4_pane_t1_ParamLimits

0x5a56,	// (0x0006a14a) main_camera4_pane_t1

0xaec6,	// (0x0006f5ba) bg_tb_trans_pane_cp06

0xaedc,	// (0x0006f5d0) cam4_indicators_pane_g1

0xaeed,	// (0x0006f5e1) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00073feb) cam4_indicators_pane_g

0xaf0b,	// (0x0006f5ff) cam4_indicators_pane_t1

0x5aba,	// (0x0006a1ae) main_video4_pane_g1_ParamLimits

0x5aba,	// (0x0006a1ae) main_video4_pane_g1

0x5ac9,	// (0x0006a1bd) main_video4_pane_g2_ParamLimits

0x5ac9,	// (0x0006a1bd) main_video4_pane_g2

0x5ad8,	// (0x0006a1cc) main_video4_pane_g3_ParamLimits

0x5ad8,	// (0x0006a1cc) main_video4_pane_g3

0x5ae7,	// (0x0006a1db) main_video4_pane_g4_ParamLimits

0x5ae7,	// (0x0006a1db) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00073ff2) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00073ff2) main_video4_pane_g

0x5b05,	// (0x0006a1f9) vid4_indicators_pane_ParamLimits

0x5b05,	// (0x0006a1f9) vid4_indicators_pane

0x5b33,	// (0x0006a227) video4_image_uncrop_cif_pane_ParamLimits

0x5b33,	// (0x0006a227) video4_image_uncrop_cif_pane

0x5b4d,	// (0x0006a241) video4_image_uncrop_nhd_pane_ParamLimits

0x5b4d,	// (0x0006a241) video4_image_uncrop_nhd_pane

0x59a2,	// (0x0006a096) video4_image_uncrop_vga_pane_ParamLimits

0x59a2,	// (0x0006a096) video4_image_uncrop_vga_pane

0xa44a,	// (0x0006eb3e) bg_tb_trans_pane_cp07

0xaf37,	// (0x0006f62b) vid4_indicators_pane_g1

0xaf4b,	// (0x0006f63f) vid4_indicators_pane_g2

0xaf5f,	// (0x0006f653) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00073ffd) vid4_indicators_pane_g

0xaf8e,	// (0x0006f682) vid4_indicators_pane_t1

0x5b61,	// (0x0006a255) cam4_autofocus_pane_g1

0x5b69,	// (0x0006a25d) cam4_autofocus_pane_g2

0x5b71,	// (0x0006a265) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00074008) cam4_autofocus_pane_g

0x5b79,	// (0x0006a26d) cam4_autofocus_pane_g3_copy1

0x5453,	// (0x00069b47) video_down_pane_cp_t1

0x5461,	// (0x00069b55) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x00073f84) video_down_pane_cp_t

0xa44a,	// (0x0006eb3e) popup_vitu2_window_ParamLimits

0xa44a,	// (0x0006eb3e) popup_vitu2_window

0x5b81,	// (0x0006a275) aid_size_cell2_itu2_ParamLimits

0x5b81,	// (0x0006a275) aid_size_cell2_itu2

0x5ba7,	// (0x0006a29b) aid_size_cell_itu2_ParamLimits

0x5ba7,	// (0x0006a29b) aid_size_cell_itu2

0x5c03,	// (0x0006a2f7) bg_popup_window_pane_cp09_ParamLimits

0x5c03,	// (0x0006a2f7) bg_popup_window_pane_cp09

0x5c11,	// (0x0006a305) field_vitu2_entry_pane_ParamLimits

0x5c11,	// (0x0006a305) field_vitu2_entry_pane

0x5c37,	// (0x0006a32b) grid_vitu2_function_pane_ParamLimits

0x5c37,	// (0x0006a32b) grid_vitu2_function_pane

0x5c88,	// (0x0006a37c) grid_vitu2_itu_pane_ParamLimits

0x5c88,	// (0x0006a37c) grid_vitu2_itu_pane

0x5d20,	// (0x0006a414) cell_vitu2_itu_pane_ParamLimits

0x5d20,	// (0x0006a414) cell_vitu2_itu_pane

0x5d4c,	// (0x0006a440) cell_vitu2_function_pane_ParamLimits

0x5d4c,	// (0x0006a440) cell_vitu2_function_pane

0xede7,	// (0x000734db) bg_popup_call_pane_cp08_ParamLimits

0xede7,	// (0x000734db) bg_popup_call_pane_cp08

0xedfe,	// (0x000734f2) field_vitu2_entry_pane_g1

0xee0a,	// (0x000734fe) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007400f) field_vitu2_entry_pane_g

0x5d8b,	// (0x0006a47f) field_vitu2_entry_pane_t1_ParamLimits

0x5d8b,	// (0x0006a47f) field_vitu2_entry_pane_t1

0xee24,	// (0x00073518) field_vitu2_entry_pane_t2_ParamLimits

0xee24,	// (0x00073518) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00074016) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00074016) field_vitu2_entry_pane_t

0x5dbb,	// (0x0006a4af) bg_button_pane_cp010_ParamLimits

0x5dbb,	// (0x0006a4af) bg_button_pane_cp010

0xafa5,	// (0x0006f699) cell_vitu2_itu_pane_g1

0x5dd7,	// (0x0006a4cb) cell_vitu2_itu_pane_t1_ParamLimits

0x5dd7,	// (0x0006a4cb) cell_vitu2_itu_pane_t1

0x01ce,	// (0x000648c2) cell_vitu2_itu_pane_t2_ParamLimits

0x01ce,	// (0x000648c2) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00074020) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00074020) cell_vitu2_itu_pane_t

0xa44a,	// (0x0006eb3e) bg_button_pane_cp011

0x5e35,	// (0x0006a529) cell_vitu2_function_pane_g1

0xa458,	// (0x0006eb4c) main_myfav_hc_pane

0x580a,	// (0x00069efe) popup_image3_note_pane_ParamLimits

0x580a,	// (0x00069efe) popup_image3_note_pane

0x5826,	// (0x00069f1a) popup_image3_tool_bar_pane_ParamLimits

0x5826,	// (0x00069f1a) popup_image3_tool_bar_pane

0x025c,	// (0x00064950) cell_vitu2_itu_pane_t3_ParamLimits

0x025c,	// (0x00064950) cell_vitu2_itu_pane_t3

0xa3d2,	// (0x0006eac6) bg_popup_trans_pane

0xee49,	// (0x0007353d) grid_image3_tool_bar_pane

0xee53,	// (0x00073547) bg_popup_trans_pane_g1

0xc2f9,	// (0x000709ed) bg_popup_trans_pane_g2

0xee5b,	// (0x0007354f) bg_popup_trans_pane_g3

0xee63,	// (0x00073557) bg_popup_trans_pane_g4

0xee6b,	// (0x0007355f) bg_popup_trans_pane_g5

0xee73,	// (0x00073567) bg_popup_trans_pane_g6

0xee7b,	// (0x0007356f) bg_popup_trans_pane_g7

0xee83,	// (0x00073577) bg_popup_trans_pane_g8

0xc2d9,	// (0x000709cd) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00074027) bg_popup_trans_pane_g

0xee8b,	// (0x0007357f) cell_image3_tool_bar_pane_ParamLimits

0xee8b,	// (0x0007357f) cell_image3_tool_bar_pane

0xe36d,	// (0x00072a61) cell_image3_tool_bar_pane_g1

0xa3d2,	// (0x0006eac6) bg_popup_trans_pane_cp1

0xee9f,	// (0x00073593) popup_image3_note_pane_t1

0xeead,	// (0x000735a1) popup_image3_note_pane_t2

0xeebb,	// (0x000735af) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007403a) popup_image3_note_pane_t

0xeec9,	// (0x000735bd) popup_image3_note_pane_t3_copy1

0x5e49,	// (0x0006a53d) bg_myfav_hc_instruction_pane_ParamLimits

0x5e49,	// (0x0006a53d) bg_myfav_hc_instruction_pane

0x5e5d,	// (0x0006a551) cell_myfav_contact_pane_ParamLimits

0x5e5d,	// (0x0006a551) cell_myfav_contact_pane

0x5e7b,	// (0x0006a56f) cell_myfav_contact_pane_cp1_ParamLimits

0x5e7b,	// (0x0006a56f) cell_myfav_contact_pane_cp1

0x5e93,	// (0x0006a587) cell_myfav_contact_pane_cp2_ParamLimits

0x5e93,	// (0x0006a587) cell_myfav_contact_pane_cp2

0x5eab,	// (0x0006a59f) cell_myfav_contact_pane_cp3_ParamLimits

0x5eab,	// (0x0006a59f) cell_myfav_contact_pane_cp3

0x5ec2,	// (0x0006a5b6) cell_myfav_contact_pane_cp4_ParamLimits

0x5ec2,	// (0x0006a5b6) cell_myfav_contact_pane_cp4

0x5eda,	// (0x0006a5ce) cell_myfav_contact_pane_cp5_ParamLimits

0x5eda,	// (0x0006a5ce) cell_myfav_contact_pane_cp5

0x5eee,	// (0x0006a5e2) cell_myfav_contact_pane_cp6_ParamLimits

0x5eee,	// (0x0006a5e2) cell_myfav_contact_pane_cp6

0x5f04,	// (0x0006a5f8) cell_myfav_contact_pane_cp7_ParamLimits

0x5f04,	// (0x0006a5f8) cell_myfav_contact_pane_cp7

0xeed7,	// (0x000735cb) listscroll_gen_pane_cp05

0x5f1e,	// (0x0006a612) main_myfav_hc_pane_g1_ParamLimits

0x5f1e,	// (0x0006a612) main_myfav_hc_pane_g1

0x5f38,	// (0x0006a62c) main_myfav_hc_pane_g2_ParamLimits

0x5f38,	// (0x0006a62c) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00074041) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00074041) main_myfav_hc_pane_g

0x5f6a,	// (0x0006a65e) main_myfav_hc_pane_t1_ParamLimits

0x5f6a,	// (0x0006a65e) main_myfav_hc_pane_t1

0xeee0,	// (0x000735d4) main_myfav_hc_pane_t2_ParamLimits

0xeee0,	// (0x000735d4) main_myfav_hc_pane_t2

0xeef2,	// (0x000735e6) main_myfav_hc_pane_t3_ParamLimits

0xeef2,	// (0x000735e6) main_myfav_hc_pane_t3

0x5f81,	// (0x0006a675) main_myfav_hc_pane_t4_ParamLimits

0x5f81,	// (0x0006a675) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00074048) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00074048) main_myfav_hc_pane_t

0xe36d,	// (0x00072a61) bg_myfav_hc_instruction_pane_g1

0xef04,	// (0x000735f8) cell_myfav_contact_pane_g1_ParamLimits

0xef04,	// (0x000735f8) cell_myfav_contact_pane_g1

0xef04,	// (0x000735f8) cell_myfav_contact_pane_g2_ParamLimits

0xef04,	// (0x000735f8) cell_myfav_contact_pane_g2

0xef10,	// (0x00073604) cell_myfav_contact_pane_g3_ParamLimits

0xef10,	// (0x00073604) cell_myfav_contact_pane_g3

0xe69d,	// (0x00072d91) cell_myfav_contact_pane_g4_ParamLimits

0xe69d,	// (0x00072d91) cell_myfav_contact_pane_g4

0xef1d,	// (0x00073611) cell_myfav_contact_pane_g5_ParamLimits

0xef1d,	// (0x00073611) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00074053) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00074053) cell_myfav_contact_pane_g

0x5f52,	// (0x0006a646) main_myfav_hc_pane_g3_ParamLimits

0x5f52,	// (0x0006a646) main_myfav_hc_pane_g3

0x0431,	// (0x00064b25) popup_adpt_find_window

0x5fa9,	// (0x0006a69d) afind_page_pane_ParamLimits

0x5fa9,	// (0x0006a69d) afind_page_pane

0x5fbe,	// (0x0006a6b2) aid_size_cell_afind_ParamLimits

0x5fbe,	// (0x0006a6b2) aid_size_cell_afind

0x5fdc,	// (0x0006a6d0) bg_popup_sub_pane_cp09_ParamLimits

0x5fdc,	// (0x0006a6d0) bg_popup_sub_pane_cp09

0x5fe9,	// (0x0006a6dd) find_pane_cp01_ParamLimits

0x5fe9,	// (0x0006a6dd) find_pane_cp01

0xef29,	// (0x0007361d) grid_afind_control_pane_ParamLimits

0xef29,	// (0x0007361d) grid_afind_control_pane

0x5ff6,	// (0x0006a6ea) grid_afind_pane_ParamLimits

0x5ff6,	// (0x0006a6ea) grid_afind_pane

0x6018,	// (0x0006a70c) cell_afind_pane_ParamLimits

0x6018,	// (0x0006a70c) cell_afind_pane

0xe36d,	// (0x00072a61) afind_page_pane_g1

0x607f,	// (0x0006a773) afind_page_pane_g2

0x6088,	// (0x0006a77c) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007405e) afind_page_pane_g

0x6091,	// (0x0006a785) afind_page_pane_t1

0xef3d,	// (0x00073631) cell_afind_grid_control_pane_ParamLimits

0xef3d,	// (0x00073631) cell_afind_grid_control_pane

0xecf8,	// (0x000733ec) bg_button_pane_cp69_ParamLimits

0xecf8,	// (0x000733ec) bg_button_pane_cp69

0x60b1,	// (0x0006a7a5) cell_afind_pane_g1_ParamLimits

0x60b1,	// (0x0006a7a5) cell_afind_pane_g1

0x60be,	// (0x0006a7b2) cell_afind_pane_t1_ParamLimits

0x60be,	// (0x0006a7b2) cell_afind_pane_t1

0xc0f2,	// (0x000707e6) bg_button_pane_cp72

0xef4c,	// (0x00073640) cell_afind_grid_control_pane_g1

0x3125,	// (0x00067819) aid_image_placing_area_ParamLimits

0x3125,	// (0x00067819) aid_image_placing_area

0xe9c6,	// (0x000730ba) field_vitu_entry_pane_g1_ParamLimits

0xe9c6,	// (0x000730ba) field_vitu_entry_pane_g1

0xe9d2,	// (0x000730c6) field_vitu_entry_pane_g2_ParamLimits

0xe9d2,	// (0x000730c6) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00073f0f) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00073f0f) field_vitu_entry_pane_g

0x5268,	// (0x0006995c) cell_vitu_itu_pane_g1_ParamLimits

0x52aa,	// (0x0006999e) cell_vitu_itu_pane_t3_ParamLimits

0x52aa,	// (0x0006999e) cell_vitu_itu_pane_t3

0xeca8,	// (0x0007339c) mp4_progress_pane_t1_ParamLimits

0xecc1,	// (0x000733b5) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00073fa4) mp4_progress_pane_t_ParamLimits

0xecda,	// (0x000733ce) mup_progress_pane_cp04_ParamLimits

0x5f95,	// (0x0006a689) main_myfav_hc_pane_t5_ParamLimits

0x5f95,	// (0x0006a689) main_myfav_hc_pane_t5

0xa3f8,	// (0x0006eaec) aid_zoom_text_primary

0x0431,	// (0x00064b25) popup_adpt_find_window_ParamLimits

0xa44a,	// (0x0006eb3e) main_cam_set_pane

0x59d3,	// (0x0006a0c7) cam4_zoom_pane_ParamLimits

0x59d3,	// (0x0006a0c7) cam4_zoom_pane

0x60d0,	// (0x0006a7c4) main_cam_set_pane_g1_ParamLimits

0x60d0,	// (0x0006a7c4) main_cam_set_pane_g1

0x60de,	// (0x0006a7d2) main_cam_set_pane_g2_ParamLimits

0x60de,	// (0x0006a7d2) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00074065) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00074065) main_cam_set_pane_g

0x60ff,	// (0x0006a7f3) main_cam_set_pane_t1_ParamLimits

0x60ff,	// (0x0006a7f3) main_cam_set_pane_t1

0x611a,	// (0x0006a80e) main_cset_listscroll_pane_ParamLimits

0x611a,	// (0x0006a80e) main_cset_listscroll_pane

0x613a,	// (0x0006a82e) main_cset_slider_pane_ParamLimits

0x613a,	// (0x0006a82e) main_cset_slider_pane

0xef5d,	// (0x00073651) main_cset_list_pane_ParamLimits

0xef5d,	// (0x00073651) main_cset_list_pane

0xef6d,	// (0x00073661) scroll_pane_cp028

0x6160,	// (0x0006a854) aid_area_touch_slider

0x617c,	// (0x0006a870) cset_slider_pane

0x61a6,	// (0x0006a89a) main_cset_slider_pane_g1

0x61bb,	// (0x0006a8af) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007406a) main_cset_slider_pane_g

0xefa6,	// (0x0007369a) main_cset_slider_pane_t1

0x6277,	// (0x0006a96b) main_cset_slider_pane_t2

0x6291,	// (0x0006a985) main_cset_slider_pane_t3

0x62ab,	// (0x0006a99f) main_cset_slider_pane_t4

0x62c5,	// (0x0006a9b9) main_cset_slider_pane_t5

0x62df,	// (0x0006a9d3) main_cset_slider_pane_t6

0x62f4,	// (0x0006a9e8) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007408f) main_cset_slider_pane_t

0x63f8,	// (0x0006aaec) cset_list_set_pane_ParamLimits

0x63f8,	// (0x0006aaec) cset_list_set_pane

0x640a,	// (0x0006aafe) aid_position_infowindow_above

0x6412,	// (0x0006ab06) aid_position_infowindow_below

0xf046,	// (0x0007373a) cset_list_set_pane_g1_ParamLimits

0xf046,	// (0x0007373a) cset_list_set_pane_g1

0xf052,	// (0x00073746) cset_list_set_pane_g3_ParamLimits

0xf052,	// (0x00073746) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000740ae) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000740ae) cset_list_set_pane_g

0xf061,	// (0x00073755) cset_list_set_pane_t1_ParamLimits

0xf061,	// (0x00073755) cset_list_set_pane_t1

0xdf5c,	// (0x00072650) list_highlight_pane_cp021_ParamLimits

0xdf5c,	// (0x00072650) list_highlight_pane_cp021

0xcc36,	// (0x0007132a) cset_slider_pane_g1

0xcc48,	// (0x0007133c) cset_slider_pane_g2

0xcc3f,	// (0x00071333) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000740b3) cset_slider_pane_g

0xafb7,	// (0x0006f6ab) aid_area_touch_cam4_zoom

0xafbf,	// (0x0006f6b3) cam4_zoom_cont_pane

0xafc7,	// (0x0006f6bb) cam4_zoom_pane_g1

0xafcf,	// (0x0006f6c3) cam4_zoom_pane_g2

0x641a,	// (0x0006ab0e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000740ba) cam4_zoom_pane_g

0xafd7,	// (0x0006f6cb) cam4_zoom_cont_pane_g1

0xafe0,	// (0x0006f6d4) cam4_zoom_cont_pane_g2

0xafe9,	// (0x0006f6dd) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000740c1) cam4_zoom_cont_pane_g

0x5893,	// (0x00069f87) call4_image_pane_ParamLimits

0x5893,	// (0x00069f87) call4_image_pane

0xed04,	// (0x000733f8) call4_windows_conf_pane_ParamLimits

0xed45,	// (0x00073439) popup_call4_audio_in_window_ParamLimits

0xed45,	// (0x00073439) popup_call4_audio_in_window

0xa3d2,	// (0x0006eac6) bg_popup_call2_act_pane_cp02

0xedbb,	// (0x000734af) call4_list_conf_pane

0xe36d,	// (0x00072a61) call4_image_pane_g1

0xe36d,	// (0x00072a61) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00073dd0) call4_image_pane_g

0xf076,	// (0x0007376a) list_single_graphic_popup_conf4_pane_ParamLimits

0xf076,	// (0x0007376a) list_single_graphic_popup_conf4_pane

0xa3d2,	// (0x0006eac6) list_highlight_pane_cp022

0xf089,	// (0x0007377d) list_single_graphic_popup_conf4_pane_g1

0xc807,	// (0x00070efb) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000740c8) list_single_graphic_popup_conf4_pane_g

0xf091,	// (0x00073785) list_single_graphic_popup_conf4_pane_t1

0x1551,	// (0x00065c45) popup_vtel_slider_window_ParamLimits

0x1551,	// (0x00065c45) popup_vtel_slider_window

0xece6,	// (0x000733da) dialer2_ne_pane_t2_ParamLimits

0xece6,	// (0x000733da) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00073fa9) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00073fa9) dialer2_ne_pane_t

0xe149,	// (0x0007283d) bg_popup_sub_pane_cp010_ParamLimits

0xe149,	// (0x0007283d) bg_popup_sub_pane_cp010

0x6422,	// (0x0006ab16) popup_vtel_slider_window_g1_ParamLimits

0x6422,	// (0x0006ab16) popup_vtel_slider_window_g1

0x6435,	// (0x0006ab29) popup_vtel_slider_window_g2_ParamLimits

0x6435,	// (0x0006ab29) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000740cd) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000740cd) popup_vtel_slider_window_g

0x648b,	// (0x0006ab7f) vtel_slider_pane_ParamLimits

0x648b,	// (0x0006ab7f) vtel_slider_pane

0x64ad,	// (0x0006aba1) vtel_slider_pane_g1_ParamLimits

0x64ad,	// (0x0006aba1) vtel_slider_pane_g1

0x64c1,	// (0x0006abb5) vtel_slider_pane_g2_ParamLimits

0x64c1,	// (0x0006abb5) vtel_slider_pane_g2

0x64d9,	// (0x0006abcd) vtel_slider_pane_g3_ParamLimits

0x64d9,	// (0x0006abcd) vtel_slider_pane_g3

0x64ad,	// (0x0006aba1) vtel_slider_pane_g4_ParamLimits

0x64ad,	// (0x0006aba1) vtel_slider_pane_g4

0x64ef,	// (0x0006abe3) vtel_slider_pane_g5_ParamLimits

0x64ef,	// (0x0006abe3) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000740d6) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000740d6) vtel_slider_pane_g

0xa44a,	// (0x0006eb3e) main_gallery2_pane

0x5bd3,	// (0x0006a2c7) aid_size_row_itut2_dropdow_list_ParamLimits

0x5bd3,	// (0x0006a2c7) aid_size_row_itut2_dropdow_list

0x5c5f,	// (0x0006a353) grid_vitu2_function_top_pane_ParamLimits

0x5c5f,	// (0x0006a353) grid_vitu2_function_top_pane

0x5cc9,	// (0x0006a3bd) popup_vitu2_dropdown_list_window_ParamLimits

0x5cc9,	// (0x0006a3bd) popup_vitu2_dropdown_list_window

0x5cf2,	// (0x0006a3e6) popup_vitu2_match_list_window

0x6513,	// (0x0006ac07) cell_vitu2_function_top_pane_ParamLimits

0x6513,	// (0x0006ac07) cell_vitu2_function_top_pane

0x652b,	// (0x0006ac1f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x652b,	// (0x0006ac1f) cell_vitu2_function_top_pane_cp01

0x6547,	// (0x0006ac3b) cell_vitu2_function_top_wide_pane_ParamLimits

0x6547,	// (0x0006ac3b) cell_vitu2_function_top_wide_pane

0xa44a,	// (0x0006eb3e) bg_button_pane_cp012

0x6563,	// (0x0006ac57) cell_vitu2_function_top_pane_g1

0xaff2,	// (0x0006f6e6) bg_button_pane_cp013_ParamLimits

0xaff2,	// (0x0006f6e6) bg_button_pane_cp013

0x6577,	// (0x0006ac6b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6577,	// (0x0006ac6b) cell_vitu2_function_top_wide_pane_g1

0xa44a,	// (0x0006eb3e) bg_popup_sub_pane_cp20

0x658f,	// (0x0006ac83) list_vitu2_match_list_pane

0xee53,	// (0x00073547) bg_popup_sub_pane_cp20_g1

0xee5b,	// (0x0007354f) bg_popup_sub_pane_cp20_g2

0xc2f9,	// (0x000709ed) bg_popup_sub_pane_cp20_g3

0xee63,	// (0x00073557) bg_popup_sub_pane_cp20_g4

0xc2d9,	// (0x000709cd) bg_popup_sub_pane_cp20_g5

0xf0a7,	// (0x0007379b) bg_popup_sub_pane_cp20_g6

0xee73,	// (0x00073567) bg_popup_sub_pane_cp20_g7

0xee7b,	// (0x0007356f) bg_popup_sub_pane_cp20_g8

0xee83,	// (0x00073577) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000740e1) bg_popup_sub_pane_cp20_g

0xb00e,	// (0x0006f702) list_vitu2_match_list_item_pane_ParamLimits

0xb00e,	// (0x0006f702) list_vitu2_match_list_item_pane

0xb020,	// (0x0006f714) list_vitu2_match_list_item_pane_t1

0xa458,	// (0x0006eb4c) bg_popup_sub_pane_cp21

0xb02e,	// (0x0006f722) grid_vitu2_dropdown_list_pane

0x65fd,	// (0x0006acf1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65fd,	// (0x0006acf1) cell_vitu2_dropdown_list_char_pane

0x661e,	// (0x0006ad12) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x661e,	// (0x0006ad12) cell_vitu2_dropdown_list_ctrl_pane

0x664a,	// (0x0006ad3e) cell_vitu2_dropdown_list_char_pane_g1

0x6653,	// (0x0006ad47) cell_vitu2_dropdown_list_char_pane_g2

0x665c,	// (0x0006ad50) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000740fe) cell_vitu2_dropdown_list_char_pane_g

0x6665,	// (0x0006ad59) cell_vitu2_dropdown_list_char_pane_t1

0x6673,	// (0x0006ad67) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6673,	// (0x0006ad67) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6680,	// (0x0006ad74) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6680,	// (0x0006ad74) cell_vitu2_dropdown_list_ctrl_pane_g2

0x668d,	// (0x0006ad81) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x668d,	// (0x0006ad81) cell_vitu2_dropdown_list_ctrl_pane_g3

0x669a,	// (0x0006ad8e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x669a,	// (0x0006ad8e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaec6,	// (0x0006f5ba) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaec6,	// (0x0006f5ba) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00074105) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00074105) cell_vitu2_dropdown_list_ctrl_pane_g

0x66b6,	// (0x0006adaa) aid_size_cell_gallery2_ParamLimits

0x66b6,	// (0x0006adaa) aid_size_cell_gallery2

0x66d4,	// (0x0006adc8) grid_gallery2_pane_ParamLimits

0x66d4,	// (0x0006adc8) grid_gallery2_pane

0x66ee,	// (0x0006ade2) scroll_pane_cp029_ParamLimits

0x66ee,	// (0x0006ade2) scroll_pane_cp029

0x66fa,	// (0x0006adee) cell_gallery2_pane_ParamLimits

0x66fa,	// (0x0006adee) cell_gallery2_pane

0x6756,	// (0x0006ae4a) cell_gallery2_pane_g2

0x675e,	// (0x0006ae52) cell_gallery2_pane_g3

0x6766,	// (0x0006ae5a) cell_gallery2_pane_g4

0x676e,	// (0x0006ae62) cell_gallery2_pane_g5

0xc0a0,	// (0x00070794) grid_highlight_pane_cp10

0x5cf2,	// (0x0006a3e6) popup_vitu2_match_list_window_ParamLimits

0x5d09,	// (0x0006a3fd) popup_vitu2_query_window_ParamLimits

0x5d09,	// (0x0006a3fd) popup_vitu2_query_window

0xa458,	// (0x0006eb4c) bg_vitu2_candi_button_pane

0x664a,	// (0x0006ad3e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x6653,	// (0x0006ad47) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x665c,	// (0x0006ad50) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6776,	// (0x0006ae6a) bg_button_pane_cp015

0x6788,	// (0x0006ae7c) bg_button_pane_cp016

0x679b,	// (0x0006ae8f) bg_button_pane_cp017

0xdf4e,	// (0x00072642) bg_popup_sub_pane_cp22

0x67e0,	// (0x0006aed4) popup_vitu2_query_window_g1

0x67ec,	// (0x0006aee0) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00074110) popup_vitu2_query_window_g

0x680b,	// (0x0006aeff) popup_vitu2_query_window_t1_ParamLimits

0x680b,	// (0x0006aeff) popup_vitu2_query_window_t1

0x6840,	// (0x0006af34) popup_vitu2_query_window_t2_ParamLimits

0x6840,	// (0x0006af34) popup_vitu2_query_window_t2

0x6852,	// (0x0006af46) popup_vitu2_query_window_t3_ParamLimits

0x6852,	// (0x0006af46) popup_vitu2_query_window_t3

0x687a,	// (0x0006af6e) popup_vitu2_query_window_t4_ParamLimits

0x687a,	// (0x0006af6e) popup_vitu2_query_window_t4

0x689b,	// (0x0006af8f) popup_vitu2_query_window_t5_ParamLimits

0x689b,	// (0x0006af8f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00074117) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00074117) popup_vitu2_query_window_t

0xef55,	// (0x00073649) main_cset_text_pane

0x6160,	// (0x0006a854) aid_area_touch_slider_ParamLimits

0x617c,	// (0x0006a870) cset_slider_pane_ParamLimits

0x61a6,	// (0x0006a89a) main_cset_slider_pane_g1_ParamLimits

0x61bb,	// (0x0006a8af) main_cset_slider_pane_g2_ParamLimits

0xef76,	// (0x0007366a) main_cset_slider_pane_g3_ParamLimits

0xef76,	// (0x0007366a) main_cset_slider_pane_g3

0x61d0,	// (0x0006a8c4) main_cset_slider_pane_g4_ParamLimits

0x61d0,	// (0x0006a8c4) main_cset_slider_pane_g4

0x61df,	// (0x0006a8d3) main_cset_slider_pane_g5_ParamLimits

0x61df,	// (0x0006a8d3) main_cset_slider_pane_g5

0x61eb,	// (0x0006a8df) main_cset_slider_pane_g6_ParamLimits

0x61eb,	// (0x0006a8df) main_cset_slider_pane_g6

0xf976,	// (0x0007406a) main_cset_slider_pane_g_ParamLimits

0xefa6,	// (0x0007369a) main_cset_slider_pane_t1_ParamLimits

0x6277,	// (0x0006a96b) main_cset_slider_pane_t2_ParamLimits

0x6291,	// (0x0006a985) main_cset_slider_pane_t3_ParamLimits

0x62ab,	// (0x0006a99f) main_cset_slider_pane_t4_ParamLimits

0x62c5,	// (0x0006a9b9) main_cset_slider_pane_t5_ParamLimits

0x62df,	// (0x0006a9d3) main_cset_slider_pane_t6_ParamLimits

0x62f4,	// (0x0006a9e8) main_cset_slider_pane_t7_ParamLimits

0x631e,	// (0x0006aa12) main_cset_slider_pane_t8_ParamLimits

0x631e,	// (0x0006aa12) main_cset_slider_pane_t8

0x6346,	// (0x0006aa3a) main_cset_slider_pane_t9_ParamLimits

0x6346,	// (0x0006aa3a) main_cset_slider_pane_t9

0x636e,	// (0x0006aa62) main_cset_slider_pane_t10_ParamLimits

0x636e,	// (0x0006aa62) main_cset_slider_pane_t10

0x6396,	// (0x0006aa8a) main_cset_slider_pane_t11_ParamLimits

0x6396,	// (0x0006aa8a) main_cset_slider_pane_t11

0x63be,	// (0x0006aab2) main_cset_slider_pane_t12_ParamLimits

0x63be,	// (0x0006aab2) main_cset_slider_pane_t12

0x63db,	// (0x0006aacf) main_cset_slider_pane_t13_ParamLimits

0x63db,	// (0x0006aacf) main_cset_slider_pane_t13

0xf99b,	// (0x0007408f) main_cset_slider_pane_t_ParamLimits

0xa3d2,	// (0x0006eac6) bg_popup_sub_pane_cp011

0x6912,	// (0x0006b006) main_cset_text_pane_g1

0x691a,	// (0x0006b00e) main_cset_text_pane_t1

0x6928,	// (0x0006b01c) main_cset_text_pane_t2

0x6936,	// (0x0006b02a) main_cset_text_pane_t3

0x6944,	// (0x0006b038) main_cset_text_pane_t4

0x6952,	// (0x0006b046) main_cset_text_pane_t5

0x6960,	// (0x0006b054) main_cset_text_pane_t6

0x696e,	// (0x0006b062) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00074126) main_cset_text_pane_t

0xa458,	// (0x0006eb4c) main_cam4_burst_pane

0xa458,	// (0x0006eb4c) main_cam5_pane

0x609f,	// (0x0006a793) bg_button_pane_cp019

0x60a8,	// (0x0006a79c) bg_button_pane_cp020

0xef82,	// (0x00073676) main_cset_slider_pane_g7_ParamLimits

0xef82,	// (0x00073676) main_cset_slider_pane_g7

0xef8e,	// (0x00073682) main_cset_slider_pane_g8_ParamLimits

0xef8e,	// (0x00073682) main_cset_slider_pane_g8

0x61ff,	// (0x0006a8f3) main_cset_slider_pane_g9_ParamLimits

0x61ff,	// (0x0006a8f3) main_cset_slider_pane_g9

0x620b,	// (0x0006a8ff) main_cset_slider_pane_g10_ParamLimits

0x620b,	// (0x0006a8ff) main_cset_slider_pane_g10

0x6217,	// (0x0006a90b) main_cset_slider_pane_g11_ParamLimits

0x6217,	// (0x0006a90b) main_cset_slider_pane_g11

0x6223,	// (0x0006a917) main_cset_slider_pane_g12_ParamLimits

0x6223,	// (0x0006a917) main_cset_slider_pane_g12

0x622f,	// (0x0006a923) main_cset_slider_pane_g13_ParamLimits

0x622f,	// (0x0006a923) main_cset_slider_pane_g13

0x623b,	// (0x0006a92f) main_cset_slider_pane_g14_ParamLimits

0x623b,	// (0x0006a92f) main_cset_slider_pane_g14

0x6247,	// (0x0006a93b) main_cset_slider_pane_g15_ParamLimits

0x6247,	// (0x0006a93b) main_cset_slider_pane_g15

0xefd4,	// (0x000736c8) main_cset_slider_pane_t14_ParamLimits

0xefd4,	// (0x000736c8) main_cset_slider_pane_t14

0xf00d,	// (0x00073701) main_cset_slider_pane_t15_ParamLimits

0xf00d,	// (0x00073701) main_cset_slider_pane_t15

0x697c,	// (0x0006b070) aid_cam4_burst_size_cell_ParamLimits

0x697c,	// (0x0006b070) aid_cam4_burst_size_cell

0x699c,	// (0x0006b090) grid_cam4_burst_pane_ParamLimits

0x699c,	// (0x0006b090) grid_cam4_burst_pane

0x69d4,	// (0x0006b0c8) linegrid_cam4_burst_pane_ParamLimits

0x69d4,	// (0x0006b0c8) linegrid_cam4_burst_pane

0x69f8,	// (0x0006b0ec) scroll_pane_cp30_ParamLimits

0x69f8,	// (0x0006b0ec) scroll_pane_cp30

0x6a04,	// (0x0006b0f8) cell_cam4_burst_pane_ParamLimits

0x6a04,	// (0x0006b0f8) cell_cam4_burst_pane

0x6a51,	// (0x0006b145) linegrid_cam4_burst_pane_g1_ParamLimits

0x6a51,	// (0x0006b145) linegrid_cam4_burst_pane_g1

0x6a5e,	// (0x0006b152) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a5e,	// (0x0006b152) linegrid_cam4_burst_pane_g2

0x6a6f,	// (0x0006b163) linegrid_cam4_burst_pane_g3_ParamLimits

0x6a6f,	// (0x0006b163) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00074135) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00074135) linegrid_cam4_burst_pane_g

0x6a7c,	// (0x0006b170) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a7c,	// (0x0006b170) linegrid_cam4_burst_pane_g3_copy1

0x6a96,	// (0x0006b18a) linegrid_cam4_burst_pane_g4_ParamLimits

0x6a96,	// (0x0006b18a) linegrid_cam4_burst_pane_g4

0x6aa3,	// (0x0006b197) linegrid_cam4_burst_pane_g5_ParamLimits

0x6aa3,	// (0x0006b197) linegrid_cam4_burst_pane_g5

0x6ab4,	// (0x0006b1a8) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ab4,	// (0x0006b1a8) linegrid_cam4_burst_pane_g6

0x6acb,	// (0x0006b1bf) linegrid_cam4_burst_pane_g7_ParamLimits

0x6acb,	// (0x0006b1bf) linegrid_cam4_burst_pane_g7

0x6ad8,	// (0x0006b1cc) cell_cam4_burst_pane_g1

0x6af7,	// (0x0006b1eb) main_cam5_pane_t1_ParamLimits

0x6af7,	// (0x0006b1eb) main_cam5_pane_t1

0x6b09,	// (0x0006b1fd) main_cam5_pane_t2_ParamLimits

0x6b09,	// (0x0006b1fd) main_cam5_pane_t2

0x6b1b,	// (0x0006b20f) main_cam5_pane_t3_ParamLimits

0x6b1b,	// (0x0006b20f) main_cam5_pane_t3

0x6b2d,	// (0x0006b221) main_cam5_pane_t4_ParamLimits

0x6b2d,	// (0x0006b221) main_cam5_pane_t4

0x6b45,	// (0x0006b239) main_cam5_pane_t5_ParamLimits

0x6b45,	// (0x0006b239) main_cam5_pane_t5

0x6b59,	// (0x0006b24d) main_cam5_pane_t6_ParamLimits

0x6b59,	// (0x0006b24d) main_cam5_pane_t6

0x6b6d,	// (0x0006b261) main_cam5_pane_t7_ParamLimits

0x6b6d,	// (0x0006b261) main_cam5_pane_t7

0x6b7f,	// (0x0006b273) main_cam5_pane_t8_ParamLimits

0x6b7f,	// (0x0006b273) main_cam5_pane_t8

0x6b9b,	// (0x0006b28f) main_cam5_pane_t9_ParamLimits

0x6b9b,	// (0x0006b28f) main_cam5_pane_t9

0x6bad,	// (0x0006b2a1) main_cam5_pane_t10_ParamLimits

0x6bad,	// (0x0006b2a1) main_cam5_pane_t10

0x6bbf,	// (0x0006b2b3) main_cam5_pane_t11_ParamLimits

0x6bbf,	// (0x0006b2b3) main_cam5_pane_t11

0x6bd1,	// (0x0006b2c5) main_cam5_pane_t12_ParamLimits

0x6bd1,	// (0x0006b2c5) main_cam5_pane_t12

0x6be6,	// (0x0006b2da) main_cam5_pane_t13_ParamLimits

0x6be6,	// (0x0006b2da) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00074141) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00074141) main_cam5_pane_t

0x04b3,	// (0x00064ba7) popup_scut_keymap_window_ParamLimits

0x04b3,	// (0x00064ba7) popup_scut_keymap_window

0x6c03,	// (0x0006b2f7) aid_size_cell_brow_shortcut

0xc0a0,	// (0x00070794) bg_popup_window_pane_cp010

0x6c0f,	// (0x0006b303) grid_scut_pane

0x6c1b,	// (0x0006b30f) cell_scut_pane_ParamLimits

0x6c1b,	// (0x0006b30f) cell_scut_pane

0x6c32,	// (0x0006b326) cell_scut_pane_g1

0x6c3b,	// (0x0006b32f) cell_scut_pane_t1

0x6c4a,	// (0x0006b33e) cell_scut_pane_t2

0x6c59,	// (0x0006b34d) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007415c) cell_scut_pane_t

0x475b,	// (0x00068e4f) main_mup3_pane_g8_ParamLimits

0x475b,	// (0x00068e4f) main_mup3_pane_g8

0x5beb,	// (0x0006a2df) area_vitu2_query_pane_ParamLimits

0x5beb,	// (0x0006a2df) area_vitu2_query_pane

0x67ae,	// (0x0006aea2) input_focus_pane_cp08

0x6c67,	// (0x0006b35b) area_vitu2_query_pane_g1

0x6c73,	// (0x0006b367) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00074163) area_vitu2_query_pane_g

0x6c84,	// (0x0006b378) area_vitu2_query_pane_t1_ParamLimits

0x6c84,	// (0x0006b378) area_vitu2_query_pane_t1

0x6c98,	// (0x0006b38c) area_vitu2_query_pane_t2_ParamLimits

0x6c98,	// (0x0006b38c) area_vitu2_query_pane_t2

0x6cac,	// (0x0006b3a0) area_vitu2_query_pane_t3_ParamLimits

0x6cac,	// (0x0006b3a0) area_vitu2_query_pane_t3

0x6cd4,	// (0x0006b3c8) area_vitu2_query_pane_t4_ParamLimits

0x6cd4,	// (0x0006b3c8) area_vitu2_query_pane_t4

0x6cfc,	// (0x0006b3f0) area_vitu2_query_pane_t5_ParamLimits

0x6cfc,	// (0x0006b3f0) area_vitu2_query_pane_t5

0x6d24,	// (0x0006b418) area_vitu2_query_pane_t6_ParamLimits

0x6d24,	// (0x0006b418) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00074168) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00074168) area_vitu2_query_pane_t

0x6d70,	// (0x0006b464) bg_button_pane_cp018

0x6d7e,	// (0x0006b472) bg_button_pane_cp021

0x6d8a,	// (0x0006b47e) bg_button_pane_cp022

0x6d99,	// (0x0006b48d) input_focus_pane_cp09

0xc943,	// (0x00071037) aid_size_touch_mv_arrow_left

0xc96c,	// (0x00071060) aid_size_touch_mv_arrow_right

0x625f,	// (0x0006a953) main_cset_slider_pane_g16_ParamLimits

0x625f,	// (0x0006a953) main_cset_slider_pane_g16

0x626b,	// (0x0006a95f) main_cset_slider_pane_g17_ParamLimits

0x626b,	// (0x0006a95f) main_cset_slider_pane_g17

0x6ad8,	// (0x0006b1cc) cell_cam4_burst_pane_g1_ParamLimits

0xa3d2,	// (0x0006eac6) compa_mode_pane

0x6445,	// (0x0006ab39) popup_vtel_slider_window_g3_ParamLimits

0x6445,	// (0x0006ab39) popup_vtel_slider_window_g3

0x645c,	// (0x0006ab50) popup_vtel_slider_window_g4_ParamLimits

0x645c,	// (0x0006ab50) popup_vtel_slider_window_g4

0x6473,	// (0x0006ab67) popup_vtel_slider_window_t1_ParamLimits

0x6473,	// (0x0006ab67) popup_vtel_slider_window_t1

0xa458,	// (0x0006eb4c) main_cl_pane

0xab24,	// (0x0006f218) popup_imed_adjust2_window_ParamLimits

0xdf4e,	// (0x00072642) bg_tb_trans_pane_cp05_ParamLimits

0xe8fb,	// (0x00072fef) popup_imed_adjust2_window_g1_ParamLimits

0xe90a,	// (0x00072ffe) popup_imed_adjust2_window_g2_ParamLimits

0xe90a,	// (0x00072ffe) popup_imed_adjust2_window_g2

0xe916,	// (0x0007300a) popup_imed_adjust2_window_g3_ParamLimits

0xe916,	// (0x0007300a) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x00073ed3) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x00073ed3) popup_imed_adjust2_window_g

0xe922,	// (0x00073016) popup_imed_adjust2_window_t1_ParamLimits

0xe93a,	// (0x0007302e) slider_imed_adjust_pane_ParamLimits

0xe94e,	// (0x00073042) slider_imed_adjust_pane_g1_ParamLimits

0xe95e,	// (0x00073052) slider_imed_adjust_pane_g2_ParamLimits

0xe96e,	// (0x00073062) slider_imed_adjust_pane_g3_ParamLimits

0xe97f,	// (0x00073073) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00073eda) slider_imed_adjust_pane_g_ParamLimits

0x5974,	// (0x0006a068) aid_touch_area_cam4_ParamLimits

0x5974,	// (0x0006a068) aid_touch_area_cam4

0xae98,	// (0x0006f58c) battery_pane_cp01

0x5a43,	// (0x0006a137) main_camera4_pane_g6_ParamLimits

0x5a43,	// (0x0006a137) main_camera4_pane_g6

0x5a6d,	// (0x0006a161) main_camera4_pane_t2_ParamLimits

0x5a6d,	// (0x0006a161) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00073fdd) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00073fdd) main_camera4_pane_t

0x5aa2,	// (0x0006a196) aid_touch_area_vid4_ParamLimits

0x5aa2,	// (0x0006a196) aid_touch_area_vid4

0x5af6,	// (0x0006a1ea) main_video4_pane_g5_ParamLimits

0x5af6,	// (0x0006a1ea) main_video4_pane_g5

0x5b1b,	// (0x0006a20f) vid4_progress_pane_ParamLimits

0x5b1b,	// (0x0006a20f) vid4_progress_pane

0xef9a,	// (0x0007368e) main_cset_slider_pane_g18_ParamLimits

0xef9a,	// (0x0007368e) main_cset_slider_pane_g18

0x6aeb,	// (0x0006b1df) cell_cam4_burst_pane_g2_ParamLimits

0x6aeb,	// (0x0006b1df) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007413c) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007413c) cell_cam4_burst_pane_g

0xbedb,	// (0x000705cf) bg_cl_pane_ParamLimits

0xbedb,	// (0x000705cf) bg_cl_pane

0x6da8,	// (0x0006b49c) cl_header_pane_ParamLimits

0x6da8,	// (0x0006b49c) cl_header_pane

0x6dbc,	// (0x0006b4b0) cl_listscroll_pane_ParamLimits

0x6dbc,	// (0x0006b4b0) cl_listscroll_pane

0x6dcc,	// (0x0006b4c0) bg_cl_pane_g1

0x6dd4,	// (0x0006b4c8) bg_cl_pane_g2

0x6ddc,	// (0x0006b4d0) bg_cl_pane_g3

0x6de4,	// (0x0006b4d8) bg_cl_pane_g4

0x6dec,	// (0x0006b4e0) bg_cl_pane_g5

0x6df4,	// (0x0006b4e8) bg_cl_pane_g6

0x6dfc,	// (0x0006b4f0) bg_cl_pane_g7

0x6e04,	// (0x0006b4f8) bg_cl_pane_g8

0x6e0c,	// (0x0006b500) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00074177) bg_cl_pane_g

0x6e14,	// (0x0006b508) aid_height_cl_leading_ParamLimits

0x6e14,	// (0x0006b508) aid_height_cl_leading

0x6e20,	// (0x0006b514) aid_height_cl_text_ParamLimits

0x6e20,	// (0x0006b514) aid_height_cl_text

0xdf5c,	// (0x00072650) bg_cl_header_pane_ParamLimits

0xdf5c,	// (0x00072650) bg_cl_header_pane

0x6e3f,	// (0x0006b533) cl_header_pane_g1_ParamLimits

0x6e3f,	// (0x0006b533) cl_header_pane_g1

0x6e55,	// (0x0006b549) cl_header_pane_t1_ParamLimits

0x6e55,	// (0x0006b549) cl_header_pane_t1

0x6e6e,	// (0x0006b562) cl_list_pane

0xef6d,	// (0x00073661) hc_scroll_pane_cp01

0xc2d9,	// (0x000709cd) bg_cl_header_pane_g1

0xee53,	// (0x00073547) bg_cl_header_pane_g2

0xc2f9,	// (0x000709ed) bg_cl_header_pane_g3

0xee63,	// (0x00073557) bg_cl_header_pane_g4

0xee5b,	// (0x0007354f) bg_cl_header_pane_g5

0xf0a7,	// (0x0007379b) bg_cl_header_pane_g6

0xee7b,	// (0x0007356f) bg_cl_header_pane_g7

0xee83,	// (0x00073577) bg_cl_header_pane_g8

0xee73,	// (0x00073567) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007418a) bg_cl_header_pane_g

0x6e77,	// (0x0006b56b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e77,	// (0x0006b56b) hc_cl_list_double_graphic_heading_pane

0x6e88,	// (0x0006b57c) hc_cl_list_single_graphic_pane_ParamLimits

0x6e88,	// (0x0006b57c) hc_cl_list_single_graphic_pane

0x6e9e,	// (0x0006b592) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e9e,	// (0x0006b592) hc_cl_list_single_graphic_pane_g1

0x6eaa,	// (0x0006b59e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6eaa,	// (0x0006b59e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007419d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007419d) hc_cl_list_single_graphic_pane_g

0x6ebe,	// (0x0006b5b2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ebe,	// (0x0006b5b2) hc_cl_list_single_graphic_pane_t1

0x6e9e,	// (0x0006b592) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e9e,	// (0x0006b592) hc_cl_list_double_graphic_heading_pane_g1

0x6ed3,	// (0x0006b5c7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ed3,	// (0x0006b5c7) hc_cl_list_double_graphic_heading_pane_g2

0x6ee7,	// (0x0006b5db) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ee7,	// (0x0006b5db) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000741a2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000741a2) hc_cl_list_double_graphic_heading_pane_g

0x6efb,	// (0x0006b5ef) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6efb,	// (0x0006b5ef) hc_cl_list_double_graphic_heading_pane_t1

0x6f10,	// (0x0006b604) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6f10,	// (0x0006b604) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000741a9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000741a9) hc_cl_list_double_graphic_heading_pane_t

0xb03e,	// (0x0006f732) vid4_progress_pane_g1

0xb04e,	// (0x0006f742) vid4_progress_pane_g2

0x6f25,	// (0x0006b619) vid4_progress_pane_g3

0xb05e,	// (0x0006f752) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000741ae) vid4_progress_pane_g

0x6f37,	// (0x0006b62b) vid4_progress_pane_t1

0xb076,	// (0x0006f76a) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000741b9) vid4_progress_pane_t

0x6f4f,	// (0x0006b643) wait_bar_pane_cp07

0xe157,	// (0x0007284b) blid_firmament_pane_ParamLimits

0xe19a,	// (0x0007288e) popup_blid_sat_info2_window_g1

0xe1be,	// (0x000728b2) popup_blid_sat_info2_window_t3

0xe1cc,	// (0x000728c0) popup_blid_sat_info2_window_t4

0xe1da,	// (0x000728ce) popup_blid_sat_info2_window_t5

0xe1e8,	// (0x000728dc) popup_blid_sat_info2_window_t6

0xe1f8,	// (0x000728ec) popup_blid_sat_info2_window_t7

0xe206,	// (0x000728fa) popup_blid_sat_info2_window_t8

0xe214,	// (0x00072908) popup_blid_sat_info2_window_t9

0xe222,	// (0x00072916) popup_blid_sat_info2_window_t10

0xe2e4,	// (0x000729d8) aid_firma_cardinal_ParamLimits

0xe2f8,	// (0x000729ec) blid_firmament_pane_t1_ParamLimits

0xe30f,	// (0x00072a03) blid_firmament_pane_t2_ParamLimits

0xe326,	// (0x00072a1a) blid_firmament_pane_t3_ParamLimits

0xe33d,	// (0x00072a31) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00073dc7) blid_firmament_pane_t_ParamLimits

0xe35d,	// (0x00072a51) blid_sat_info_pane_ParamLimits

0xa44a,	// (0x0006eb3e) main_cam_set_pane_ParamLimits

0x5022,	// (0x00069716) aid_size_cell_colour_35_ParamLimits

0x5042,	// (0x00069736) aid_size_cell_colour_112_ParamLimits

0x5062,	// (0x00069756) aid_size_cell_effect_ParamLimits

0xdf4e,	// (0x00072642) bg_tb_trans_pane_cp02_ParamLimits

0xc541,	// (0x00070c35) heading_imed_pane_ParamLimits

0x5082,	// (0x00069776) listscroll_imed_pane_ParamLimits

0xd51e,	// (0x00071c12) popup_call2_audio_first_window_g5_ParamLimits

0xd51e,	// (0x00071c12) popup_call2_audio_first_window_g5

0x561f,	// (0x00069d13) aid_size_touch_image3_arrow_left_ParamLimits

0x561f,	// (0x00069d13) aid_size_touch_image3_arrow_left

0x564b,	// (0x00069d3f) aid_size_touch_image3_arrow_right_ParamLimits

0x564b,	// (0x00069d3f) aid_size_touch_image3_arrow_right

0xb08b,	// (0x0006f77f) vid4_progress_pane_t3

0x5395,	// (0x00069a89) main_hwr_training_symbol_option_pane_ParamLimits

0x5395,	// (0x00069a89) main_hwr_training_symbol_option_pane

0xebe8,	// (0x000732dc) popup_hwr_training_preview_window_ParamLimits

0xebe8,	// (0x000732dc) popup_hwr_training_preview_window

0x53b5,	// (0x00069aa9) hwr_training_navi_pane_g5_ParamLimits

0x53b5,	// (0x00069aa9) hwr_training_navi_pane_g5

0xee41,	// (0x00073535) popup_char_count_window

0xa44a,	// (0x0006eb3e) bg_popup_sub_pane_cp20_ParamLimits

0x658f,	// (0x0006ac83) list_vitu2_match_list_pane_ParamLimits

0x659e,	// (0x0006ac92) vitu2_page_scroll_pane_ParamLimits

0x659e,	// (0x0006ac92) vitu2_page_scroll_pane

0x6fbc,	// (0x0006b6b0) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6fbc,	// (0x0006b6b0) list_single_hwr_training_symbol_option_pane

0x6fcf,	// (0x0006b6c3) list_single_hwr_training_symbol_option_pane_g1

0x6fd7,	// (0x0006b6cb) list_single_hwr_training_symbol_option_pane_t1

0x6fe5,	// (0x0006b6d9) bg_button_pane_cp023

0x6fee,	// (0x0006b6e2) bg_button_pane_cp024

0x7021,	// (0x0006b715) vitu2_page_scroll_pane_g1

0x7029,	// (0x0006b71d) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000741c0) vitu2_page_scroll_pane_g

0x7031,	// (0x0006b725) vitu2_page_scroll_pane_t1

0xe0b7,	// (0x000727ab) popup_char_count_window_g1

0x7040,	// (0x0006b734) popup_char_count_window_g2

0x7049,	// (0x0006b73d) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000741c5) popup_char_count_window_g

0x7052,	// (0x0006b746) popup_char_count_window_t1

0xa458,	// (0x0006eb4c) main_vded2_pane

0xe8e7,	// (0x00072fdb) aid_size_cell_imed_line

0xe8f1,	// (0x00072fe5) grid_imed_line_width_pane

0xaf70,	// (0x0006f664) vid4_indicators_pane_g4

0x7060,	// (0x0006b754) cell_imed_line_width_pane_ParamLimits

0x7060,	// (0x0006b754) cell_imed_line_width_pane

0x7074,	// (0x0006b768) cell_imed_line_width_pane_g1

0x42e9,	// (0x000689dd) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000741cc) cell_imed_line_width_pane_g

0x707d,	// (0x0006b771) main_vded2_pane_g1_ParamLimits

0x707d,	// (0x0006b771) main_vded2_pane_g1

0x7093,	// (0x0006b787) main_vded2_pane_g2_ParamLimits

0x7093,	// (0x0006b787) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000741d1) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000741d1) main_vded2_pane_g

0x70a5,	// (0x0006b799) vded2_slider_pane_ParamLimits

0x70a5,	// (0x0006b799) vded2_slider_pane

0x70b5,	// (0x0006b7a9) aid_size_touch_vded2_end

0x70bf,	// (0x0006b7b3) aid_size_touch_vded2_playhead

0x70c9,	// (0x0006b7bd) aid_size_touch_vded2_start

0x70d1,	// (0x0006b7c5) vded2_slider_bg_pane

0x70da,	// (0x0006b7ce) vded2_slider_pane_g1

0x70e3,	// (0x0006b7d7) vded2_slider_pane_g2

0x70eb,	// (0x0006b7df) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000741d6) vded2_slider_pane_g

0x70f6,	// (0x0006b7ea) vded2_slider_bg_pane_g1

0x70ff,	// (0x0006b7f3) vded2_slider_bg_pane_g2

0x7108,	// (0x0006b7fc) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000741dd) vded2_slider_bg_pane_g

0x2d94,	// (0x00067488) aid_postcard_touch_down_pane_ParamLimits

0x2d94,	// (0x00067488) aid_postcard_touch_down_pane

0x2daa,	// (0x0006749e) aid_postcard_touch_up_pane_ParamLimits

0x2daa,	// (0x0006749e) aid_postcard_touch_up_pane

0xa458,	// (0x0006eb4c) main_blid2_pane

0xab0a,	// (0x0006f1fe) popup_blid2_search_window

0xa3d2,	// (0x0006eac6) blid2_gps_pane

0xa3d2,	// (0x0006eac6) blid2_navig_pane

0xa3d2,	// (0x0006eac6) blid2_search_pane

0xa3d2,	// (0x0006eac6) blid2_tripm_pane

0x7111,	// (0x0006b805) blid2_search_pane_g1_ParamLimits

0x7111,	// (0x0006b805) blid2_search_pane_g1

0x712b,	// (0x0006b81f) blid2_search_pane_t1_ParamLimits

0x712b,	// (0x0006b81f) blid2_search_pane_t1

0x713d,	// (0x0006b831) aid_size_cell_blid2_gps_ParamLimits

0x713d,	// (0x0006b831) aid_size_cell_blid2_gps

0x7155,	// (0x0006b849) blid2_gps_pane_g1_ParamLimits

0x7155,	// (0x0006b849) blid2_gps_pane_g1

0x7169,	// (0x0006b85d) grid_blid2_satellite_pane_ParamLimits

0x7169,	// (0x0006b85d) grid_blid2_satellite_pane

0x7183,	// (0x0006b877) blid2_navig_pane_g1_ParamLimits

0x7183,	// (0x0006b877) blid2_navig_pane_g1

0x718f,	// (0x0006b883) blid2_navig_pane_t1_ParamLimits

0x718f,	// (0x0006b883) blid2_navig_pane_t1

0x71aa,	// (0x0006b89e) blid2_navig_pane_t2_ParamLimits

0x71aa,	// (0x0006b89e) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000741e4) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000741e4) blid2_navig_pane_t

0x71c5,	// (0x0006b8b9) blid2_navig_ring_pane_ParamLimits

0x71c5,	// (0x0006b8b9) blid2_navig_ring_pane

0x71de,	// (0x0006b8d2) blid2_speed_pane_ParamLimits

0x71de,	// (0x0006b8d2) blid2_speed_pane

0x71ea,	// (0x0006b8de) blid2_tripm_pane_g1_ParamLimits

0x71ea,	// (0x0006b8de) blid2_tripm_pane_g1

0x7203,	// (0x0006b8f7) blid2_tripm_pane_g2_ParamLimits

0x7203,	// (0x0006b8f7) blid2_tripm_pane_g2

0x7217,	// (0x0006b90b) blid2_tripm_pane_g3_ParamLimits

0x7217,	// (0x0006b90b) blid2_tripm_pane_g3

0x722b,	// (0x0006b91f) blid2_tripm_pane_g4_ParamLimits

0x722b,	// (0x0006b91f) blid2_tripm_pane_g4

0x723f,	// (0x0006b933) blid2_tripm_pane_g5_ParamLimits

0x723f,	// (0x0006b933) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000741e9) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000741e9) blid2_tripm_pane_g

0x7265,	// (0x0006b959) blid2_tripm_pane_t1_ParamLimits

0x7265,	// (0x0006b959) blid2_tripm_pane_t1

0x7280,	// (0x0006b974) blid2_tripm_pane_t2_ParamLimits

0x7280,	// (0x0006b974) blid2_tripm_pane_t2

0x7299,	// (0x0006b98d) blid2_tripm_pane_t3_ParamLimits

0x7299,	// (0x0006b98d) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000741f6) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000741f6) blid2_tripm_pane_t

0x72e0,	// (0x0006b9d4) cell_blid2_satellite_pane_ParamLimits

0x72e0,	// (0x0006b9d4) cell_blid2_satellite_pane

0x72fe,	// (0x0006b9f2) cell_blid2_satellite_pane_g1

0x7307,	// (0x0006b9fb) cell_blid2_satellite_pane_t1

0xe36d,	// (0x00072a61) blid2_speed_pane_g1

0x7315,	// (0x0006ba09) blid2_speed_pane_t1

0x7323,	// (0x0006ba17) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000741ff) blid2_speed_pane_t

0xe36d,	// (0x00072a61) blid2_navig_ring_pane_g1

0x7331,	// (0x0006ba25) blid2_navig_ring_pane_g2

0x7339,	// (0x0006ba2d) blid2_navig_ring_pane_g3

0x7341,	// (0x0006ba35) blid2_navig_ring_pane_g4

0x7349,	// (0x0006ba3d) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00074204) blid2_navig_ring_pane_g

0xa3d2,	// (0x0006eac6) bg_popup_window_pane_cp011

0x7351,	// (0x0006ba45) popup_blid2_search_window_g1

0x7359,	// (0x0006ba4d) popup_blid2_search_window_t1

0x7367,	// (0x0006ba5b) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007420f) popup_blid2_search_window_t

0xc1e8,	// (0x000708dc) main_browser_pane_g1

0xbedb,	// (0x000705cf) main_browser_pane_ParamLimits

0xa44a,	// (0x0006eb3e) bg_button_pane_cp011_ParamLimits

0x5e35,	// (0x0006a529) cell_vitu2_function_pane_g1_ParamLimits

0xdf4e,	// (0x00072642) bg_popup_sub_pane_cp22_ParamLimits

0x67ae,	// (0x0006aea2) input_focus_pane_cp08_ParamLimits

0x67c5,	// (0x0006aeb9) popup_vitu2_query_button_pane_ParamLimits

0x67c5,	// (0x0006aeb9) popup_vitu2_query_button_pane

0x67d6,	// (0x0006aeca) popup_vitu2_query_input_button_pane

0x67e0,	// (0x0006aed4) popup_vitu2_query_window_g1_ParamLimits

0x67ec,	// (0x0006aee0) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00074110) popup_vitu2_query_window_g_ParamLimits

0xa3d2,	// (0x0006eac6) bg_button_pane_cp026

0x7375,	// (0x0006ba69) popup_vitu2_query_input_button_pane_g1

0xa3d2,	// (0x0006eac6) bg_button_pane_cp025

0x737d,	// (0x0006ba71) popup_vitu2_query_button_pane_t1

0x4444,	// (0x00068b38) main_mp3_pane_t6

0x4452,	// (0x00068b46) popup_slider_window_cp01

0xaed4,	// (0x0006f5c8) cam4_battery_pane

0xaf2d,	// (0x0006f621) cam4_battery_pane_cp02

0xb036,	// (0x0006f72a) cam4_battery_pane_cp01

0xb036,	// (0x0006f72a) cam4_battery_pane_cp03

0x5504,	// (0x00069bf8) cam4_battery_pane_g1

0xe36d,	// (0x00072a61) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00074214) cam4_battery_pane_g

0xe230,	// (0x00072924) popup_blid_sat_info2_window_t11

0xc943,	// (0x00071037) aid_size_touch_mv_arrow_left_ParamLimits

0xc96c,	// (0x00071060) aid_size_touch_mv_arrow_right_ParamLimits

0xc9d8,	// (0x000710cc) navi_pane_g1_ParamLimits

0xc9e4,	// (0x000710d8) navi_pane_g2_ParamLimits

0xca12,	// (0x00071106) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00073ad9) navi_pane_g_ParamLimits

0x27f4,	// (0x00066ee8) navi_pane_mv_t1_ParamLimits

0x508e,	// (0x00069782) grid_imed_effect_pane_ParamLimits

0x144e,	// (0x00065b42) aid_placing_vt_slider_lsc

0xc137,	// (0x0007082b) aid_placing_vt_slider_prt

0xdf5c,	// (0x00072650) bg_tb_trans_pane_cp01_ParamLimits

0xe4f0,	// (0x00072be4) popup_image_details_window_g1_ParamLimits

0xe503,	// (0x00072bf7) popup_image_details_window_g2_ParamLimits

0xe518,	// (0x00072c0c) popup_image_details_window_g3_ParamLimits

0xe518,	// (0x00072c0c) popup_image_details_window_g3

0xf718,	// (0x00073e0c) popup_image_details_window_g_ParamLimits

0xe52c,	// (0x00072c20) popup_image_details_window_t1_ParamLimits

0xe53e,	// (0x00072c32) popup_image_details_window_t2_ParamLimits

0xe557,	// (0x00072c4b) popup_image_details_window_t3_ParamLimits

0xe56b,	// (0x00072c5f) popup_image_details_window_t4_ParamLimits

0xe586,	// (0x00072c7a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x00073e13) popup_image_details_window_t_ParamLimits

0x6e2c,	// (0x0006b520) cl_header_name_pane_ParamLimits

0x6e2c,	// (0x0006b520) cl_header_name_pane

0x738b,	// (0x0006ba7f) cl_header_name_pane_t1_ParamLimits

0x738b,	// (0x0006ba7f) cl_header_name_pane_t1

0x73ac,	// (0x0006baa0) cl_header_name_pane_t2_ParamLimits

0x73ac,	// (0x0006baa0) cl_header_name_pane_t2

0x73ee,	// (0x0006bae2) cl_header_name_pane_t3_ParamLimits

0x73ee,	// (0x0006bae2) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00074219) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00074219) cl_header_name_pane_t

0xcaa1,	// (0x00071195) navi_pane_mv_g2_ParamLimits

0xedfe,	// (0x000734f2) field_vitu2_entry_pane_g1_ParamLimits

0xee0a,	// (0x000734fe) field_vitu2_entry_pane_g2_ParamLimits

0xee16,	// (0x0007350a) field_vitu2_entry_pane_g3_ParamLimits

0xee16,	// (0x0007350a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007400f) field_vitu2_entry_pane_g_ParamLimits

0xafa5,	// (0x0006f699) cell_vitu2_itu_pane_g1_ParamLimits

0x5dc9,	// (0x0006a4bd) cell_vitu2_itu_pane_g2_ParamLimits

0x5dc9,	// (0x0006a4bd) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007401b) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007401b) cell_vitu2_itu_pane_g

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp05_ParamLimits

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp05

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp03

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp04

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp10_ParamLimits

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp10

0x6d8a,	// (0x0006b47e) bg_vkb2_func_pane_cp08

0x6d70,	// (0x0006b464) bg_vkb2_func_pane_cp06

0x6d7e,	// (0x0006b472) bg_vkb2_func_pane_cp07

0x6ff7,	// (0x0006b6eb) bg_vkb2_func_pane_cp11_ParamLimits

0x6ff7,	// (0x0006b6eb) bg_vkb2_func_pane_cp11

0x700c,	// (0x0006b700) bg_vkb2_func_pane_cp12_ParamLimits

0x700c,	// (0x0006b700) bg_vkb2_func_pane_cp12

0xa3d2,	// (0x0006eac6) bg_vkb2_func_pane_cp09

0xee53,	// (0x00073547) bg_vkb2_func_pane_g1

0xc2f9,	// (0x000709ed) bg_vkb2_func_pane_g2

0xee5b,	// (0x0007354f) bg_vkb2_func_pane_g3

0xee63,	// (0x00073557) bg_vkb2_func_pane_g4

0xf0a7,	// (0x0007379b) bg_vkb2_func_pane_g5

0xee7b,	// (0x0007356f) bg_vkb2_func_pane_g6

0xee83,	// (0x00073577) bg_vkb2_func_pane_g7

0xee73,	// (0x00073567) bg_vkb2_func_pane_g8

0xc2d9,	// (0x000709cd) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00074220) bg_vkb2_func_pane_g

0x7253,	// (0x0006b947) blid2_tripm_pane_g6_ParamLimits

0x7253,	// (0x0006b947) blid2_tripm_pane_g6

0xeca0,	// (0x00073394) mp4_progress_pane_g1

0x72cc,	// (0x0006b9c0) blid2_tripm_values_pane_ParamLimits

0x72cc,	// (0x0006b9c0) blid2_tripm_values_pane

0x741f,	// (0x0006bb13) blid2_tripm_values_pane_t1

0x742d,	// (0x0006bb21) blid2_tripm_values_pane_t2

0x743b,	// (0x0006bb2f) blid2_tripm_values_pane_t3

0x7449,	// (0x0006bb3d) blid2_tripm_values_pane_t4

0x7457,	// (0x0006bb4b) blid2_tripm_values_pane_t5

0x7465,	// (0x0006bb59) blid2_tripm_values_pane_t6

0x7473,	// (0x0006bb67) blid2_tripm_values_pane_t7

0x7481,	// (0x0006bb75) blid2_tripm_values_pane_t8

0x748f,	// (0x0006bb83) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00074233) blid2_tripm_values_pane_t

0x1490,	// (0x00065b84) call_video_pane_t1_ParamLimits

0x14ae,	// (0x00065ba2) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00073962) call_video_pane_t_ParamLimits

0x2ccf,	// (0x000673c3) msg_header_pane_g1_ParamLimits

0xcc7b,	// (0x0007136f) msg_header_pane_g2_ParamLimits

0xcc7b,	// (0x0007136f) msg_header_pane_g2

0x0001,

0xf488,	// (0x00073b7c) msg_header_pane_g_ParamLimits

0xf488,	// (0x00073b7c) msg_header_pane_g

0xbedb,	// (0x000705cf) main_clock2_pane_ParamLimits

0x4d8c,	// (0x00069480) grid_clock2_toolbar_pane_ParamLimits

0x4d8c,	// (0x00069480) grid_clock2_toolbar_pane

0x4d8c,	// (0x00069480) listscroll_clock2_pane_ParamLimits

0x4d8c,	// (0x00069480) listscroll_clock2_pane

0x4e83,	// (0x00069577) main_clock2_pane_t3_ParamLimits

0x4e83,	// (0x00069577) main_clock2_pane_t3

0x4ea7,	// (0x0006959b) main_clock2_pane_t4_ParamLimits

0x4ea7,	// (0x0006959b) main_clock2_pane_t4

0x749d,	// (0x0006bb91) cell_clock2_toolbar_pane

0x74a5,	// (0x0006bb99) cell_clock2_toolbar_pane_cp01

0x74a5,	// (0x0006bb99) cell_clock2_toolbar_pane_cp02

0x74ad,	// (0x0006bba1) cell_clock2_toolbar_pane_cp03

0x74b5,	// (0x0006bba9) list_clock2_pane

0xc8b9,	// (0x00070fad) scroll_pane_cp10

0x74bd,	// (0x0006bbb1) list_single_clock2_pane_ParamLimits

0x74bd,	// (0x0006bbb1) list_single_clock2_pane

0xc0a0,	// (0x00070794) list_highlight_pane_cp08

0x74ca,	// (0x0006bbbe) list_single_clock2_pane_t1

0x74d8,	// (0x0006bbcc) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00074246) list_single_clock2_pane_t

0xa3d2,	// (0x0006eac6) bg_button_pane_cp10

0x74e6,	// (0x0006bbda) cell_clock2_toolbar_pane_g1

0x2d20,	// (0x00067414) aid_main_viewer_pane_g1_ParamLimits

0x2d20,	// (0x00067414) aid_main_viewer_pane_g1

0x2d2e,	// (0x00067422) aid_main_viewer_pane_g2_ParamLimits

0x2d2e,	// (0x00067422) aid_main_viewer_pane_g2

0x2d3c,	// (0x00067430) aid_main_viewer_pane_g3_ParamLimits

0x2d3c,	// (0x00067430) aid_main_viewer_pane_g3

0x2d4b,	// (0x0006743f) aid_main_viewer_pane_g4_ParamLimits

0x2d4b,	// (0x0006743f) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00073b8d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00073b8d) aid_main_viewer_pane_g

0x3651,	// (0x00067d45) main_calc_pane_ParamLimits

0x3677,	// (0x00067d6b) main_dialer2_pane_ParamLimits

0xa458,	// (0x0006eb4c) main_cam6_pane

0xa458,	// (0x0006eb4c) main_vid6_pane

0x4d98,	// (0x0006948c) listscroll_gen_pane_cp06_ParamLimits

0x4d98,	// (0x0006948c) listscroll_gen_pane_cp06

0x4eca,	// (0x000695be) main_clock2_pane_t5_ParamLimits

0x4eca,	// (0x000695be) main_clock2_pane_t5

0x4f24,	// (0x00069618) aid_call2_pane_cp10_ParamLimits

0x4f36,	// (0x0006962a) aid_call_pane_cp10_ParamLimits

0xc937,	// (0x0007102b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc937,	// (0x0007102b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f48,	// (0x0006963c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f48,	// (0x0006963c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc937,	// (0x0007102b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00073ec8) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f5a,	// (0x0006964e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55cc,	// (0x00069cc0) cell_dialer2_keypad_pane_g2_ParamLimits

0x55cc,	// (0x00069cc0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00073fae) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00073fae) cell_dialer2_keypad_pane_g

0x55e8,	// (0x00069cdc) cell_dialer2_keypad_pane_t1

0x6152,	// (0x0006a846) main_cset_text2_pane_ParamLimits

0x6152,	// (0x0006a846) main_cset_text2_pane

0x6c67,	// (0x0006b35b) area_vitu2_query_pane_g1_ParamLimits

0x6c73,	// (0x0006b367) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00074163) area_vitu2_query_pane_g_ParamLimits

0x6d4c,	// (0x0006b440) area_vitu2_query_pane_t7_ParamLimits

0x6d4c,	// (0x0006b440) area_vitu2_query_pane_t7

0x6d70,	// (0x0006b464) bg_button_pane_cp018_ParamLimits

0x6d7e,	// (0x0006b472) bg_button_pane_cp021_ParamLimits

0x6d8a,	// (0x0006b47e) bg_button_pane_cp022_ParamLimits

0x6d8a,	// (0x0006b47e) bg_vkb2_func_pane_cp08_ParamLimits

0x6d70,	// (0x0006b464) bg_vkb2_func_pane_cp06_ParamLimits

0x6d7e,	// (0x0006b472) bg_vkb2_func_pane_cp07_ParamLimits

0x6d99,	// (0x0006b48d) input_focus_pane_cp09_ParamLimits

0xb0a0,	// (0x0006f794) cam6_autofocus_pane_ParamLimits

0xb0a0,	// (0x0006f794) cam6_autofocus_pane

0x74ee,	// (0x0006bbe2) cam6_image_uncrop_pane_ParamLimits

0x74ee,	// (0x0006bbe2) cam6_image_uncrop_pane

0x74fd,	// (0x0006bbf1) cam6_indi_pane_ParamLimits

0x74fd,	// (0x0006bbf1) cam6_indi_pane

0x7513,	// (0x0006bc07) cam6_mode_pane_ParamLimits

0x7513,	// (0x0006bc07) cam6_mode_pane

0x7525,	// (0x0006bc19) cam6_timer_pane_ParamLimits

0x7525,	// (0x0006bc19) cam6_timer_pane

0x7531,	// (0x0006bc25) cam6_zoom_pane_ParamLimits

0x7531,	// (0x0006bc25) cam6_zoom_pane

0x753d,	// (0x0006bc31) cam6_mode_pane_g1_ParamLimits

0x753d,	// (0x0006bc31) cam6_mode_pane_g1

0x754d,	// (0x0006bc41) cam6_mode_pane_g2_ParamLimits

0x754d,	// (0x0006bc41) cam6_mode_pane_g2

0x755d,	// (0x0006bc51) cam6_mode_pane_g3_ParamLimits

0x755d,	// (0x0006bc51) cam6_mode_pane_g3

0x756d,	// (0x0006bc61) cam6_mode_pane_g4_ParamLimits

0x756d,	// (0x0006bc61) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007424b) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007424b) cam6_mode_pane_g

0x757d,	// (0x0006bc71) bg_tb_trans_pane_cp08_ParamLimits

0x757d,	// (0x0006bc71) bg_tb_trans_pane_cp08

0x758b,	// (0x0006bc7f) cam6_battery_pane_ParamLimits

0x758b,	// (0x0006bc7f) cam6_battery_pane

0x75a1,	// (0x0006bc95) cam6_indi_pane_g1_ParamLimits

0x75a1,	// (0x0006bc95) cam6_indi_pane_g1

0x75b3,	// (0x0006bca7) cam6_indi_pane_g2_ParamLimits

0x75b3,	// (0x0006bca7) cam6_indi_pane_g2

0x75c5,	// (0x0006bcb9) cam6_indi_pane_g3_ParamLimits

0x75c5,	// (0x0006bcb9) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00074254) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00074254) cam6_indi_pane_g

0x75d7,	// (0x0006bccb) cam6_indi_pane_t1_ParamLimits

0x75d7,	// (0x0006bccb) cam6_indi_pane_t1

0x75fd,	// (0x0006bcf1) cam6_autofocus_pane_g1

0x7605,	// (0x0006bcf9) cam6_autofocus_pane_g2

0x760d,	// (0x0006bd01) cam6_autofocus_pane_g3

0x7615,	// (0x0006bd09) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007425b) cam6_autofocus_pane_g

0x761d,	// (0x0006bd11) cam6_timer_pane_g1

0x7625,	// (0x0006bd19) cam6_timer_pane_t1

0x7633,	// (0x0006bd27) cam6_zoom_cont_pane

0x763b,	// (0x0006bd2f) cam6_zoom_pane_g1

0x7643,	// (0x0006bd37) cam6_zoom_pane_g2

0x764b,	// (0x0006bd3f) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00074264) cam6_zoom_pane_g

0xe36d,	// (0x00072a61) cam6_battery_pane_g1

0xe36d,	// (0x00072a61) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00073dd0) cam6_battery_pane_g

0x7653,	// (0x0006bd47) cam6_zoom_cont_pane_g1

0x765c,	// (0x0006bd50) cam6_zoom_cont_pane_g2

0x7665,	// (0x0006bd59) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007426b) cam6_zoom_cont_pane_g

0x7682,	// (0x0006bd76) cam6_mode_pane_cp_ParamLimits

0x7682,	// (0x0006bd76) cam6_mode_pane_cp

0x7694,	// (0x0006bd88) cam6_zoom_pane_cp_ParamLimits

0x7694,	// (0x0006bd88) cam6_zoom_pane_cp

0x76a0,	// (0x0006bd94) vid6_image_uncrop_cif_pane_ParamLimits

0x76a0,	// (0x0006bd94) vid6_image_uncrop_cif_pane

0x76b0,	// (0x0006bda4) vid6_image_uncrop_nhd_pane_ParamLimits

0x76b0,	// (0x0006bda4) vid6_image_uncrop_nhd_pane

0x76cf,	// (0x0006bdc3) vid6_image_uncrop_vga_pane_ParamLimits

0x76cf,	// (0x0006bdc3) vid6_image_uncrop_vga_pane

0x76de,	// (0x0006bdd2) vid6_image_uncrop_wvga_pane_ParamLimits

0x76de,	// (0x0006bdd2) vid6_image_uncrop_wvga_pane

0x76ed,	// (0x0006bde1) vid6_indi_pane_ParamLimits

0x76ed,	// (0x0006bde1) vid6_indi_pane

0x757d,	// (0x0006bc71) bg_tb_trans_pane_cp09_ParamLimits

0x757d,	// (0x0006bc71) bg_tb_trans_pane_cp09

0x7705,	// (0x0006bdf9) cam6_battery_pane_cp_ParamLimits

0x7705,	// (0x0006bdf9) cam6_battery_pane_cp

0x7711,	// (0x0006be05) vid6_indi_pane_g1_ParamLimits

0x7711,	// (0x0006be05) vid6_indi_pane_g1

0x7723,	// (0x0006be17) vid6_indi_pane_g2_ParamLimits

0x7723,	// (0x0006be17) vid6_indi_pane_g2

0x7735,	// (0x0006be29) vid6_indi_pane_g3_ParamLimits

0x7735,	// (0x0006be29) vid6_indi_pane_g3

0x774a,	// (0x0006be3e) vid6_indi_pane_g4_ParamLimits

0x774a,	// (0x0006be3e) vid6_indi_pane_g4

0x775f,	// (0x0006be53) vid6_indi_pane_g5_ParamLimits

0x775f,	// (0x0006be53) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00074272) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00074272) vid6_indi_pane_g

0x7779,	// (0x0006be6d) vid6_indi_pane_t1_ParamLimits

0x7779,	// (0x0006be6d) vid6_indi_pane_t1

0x778f,	// (0x0006be83) vid6_indi_pane_t2_ParamLimits

0x778f,	// (0x0006be83) vid6_indi_pane_t2

0x77b7,	// (0x0006beab) vid6_indi_pane_t3_ParamLimits

0x77b7,	// (0x0006beab) vid6_indi_pane_t3

0x77df,	// (0x0006bed3) vid6_indi_pane_t4_ParamLimits

0x77df,	// (0x0006bed3) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007427d) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007427d) vid6_indi_pane_t

0x7803,	// (0x0006bef7) wait_bar_pane_cp08

0x7812,	// (0x0006bf06) main_cset_text2_pane_t1_ParamLimits

0x7812,	// (0x0006bf06) main_cset_text2_pane_t1

0x766d,	// (0x0006bd61) listscroll_gen_pane_cp06_t1_ParamLimits

0x766d,	// (0x0006bd61) listscroll_gen_pane_cp06_t1

0xa458,	// (0x0006eb4c) main_cam6_set_pane

0xaec6,	// (0x0006f5ba) bg_tb_trans_pane_cp06_ParamLimits

0xaedc,	// (0x0006f5d0) cam4_indicators_pane_g1_ParamLimits

0xaeed,	// (0x0006f5e1) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00073feb) cam4_indicators_pane_g_ParamLimits

0xaf0b,	// (0x0006f5ff) cam4_indicators_pane_t1_ParamLimits

0xa44a,	// (0x0006eb3e) bg_tb_trans_pane_cp07_ParamLimits

0xaf37,	// (0x0006f62b) vid4_indicators_pane_g1_ParamLimits

0xaf4b,	// (0x0006f63f) vid4_indicators_pane_g2_ParamLimits

0xaf5f,	// (0x0006f653) vid4_indicators_pane_g3_ParamLimits

0xaf70,	// (0x0006f664) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00073ffd) vid4_indicators_pane_g_ParamLimits

0xaf8e,	// (0x0006f682) vid4_indicators_pane_t1_ParamLimits

0xb03e,	// (0x0006f732) vid4_progress_pane_g1_ParamLimits

0xb04e,	// (0x0006f742) vid4_progress_pane_g2_ParamLimits

0x6f25,	// (0x0006b619) vid4_progress_pane_g3_ParamLimits

0xb05e,	// (0x0006f752) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000741ae) vid4_progress_pane_g_ParamLimits

0x6f37,	// (0x0006b62b) vid4_progress_pane_t1_ParamLimits

0xb076,	// (0x0006f76a) vid4_progress_pane_t2_ParamLimits

0xb08b,	// (0x0006f77f) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000741b9) vid4_progress_pane_t_ParamLimits

0x6f4f,	// (0x0006b643) wait_bar_pane_cp07_ParamLimits

0x782f,	// (0x0006bf23) main_cam6_set_pane_g2_ParamLimits

0x782f,	// (0x0006bf23) main_cam6_set_pane_g2

0x7853,	// (0x0006bf47) main_cset6_listscroll_pane_ParamLimits

0x7853,	// (0x0006bf47) main_cset6_listscroll_pane

0x7873,	// (0x0006bf67) main_cset6_slider_pane_ParamLimits

0x7873,	// (0x0006bf67) main_cset6_slider_pane

0x7889,	// (0x0006bf7d) main_cset6_text2_pane_ParamLimits

0x7889,	// (0x0006bf7d) main_cset6_text2_pane

0x7897,	// (0x0006bf8b) main_cset6_text_pane

0x789f,	// (0x0006bf93) main_cset_list_pane_copy1_ParamLimits

0x789f,	// (0x0006bf93) main_cset_list_pane_copy1

0x78af,	// (0x0006bfa3) scroll_pane_cp028_copy1

0x78b8,	// (0x0006bfac) cset_list_set_pane_copy1

0x78c9,	// (0x0006bfbd) aid_position_infowindow_above_copy1

0x78d1,	// (0x0006bfc5) aid_position_infowindow_below_copy1

0x78d9,	// (0x0006bfcd) cset_list_set_pane_g1_copy1

0x78e1,	// (0x0006bfd5) cset_list_set_pane_g3_copy1_ParamLimits

0x78e1,	// (0x0006bfd5) cset_list_set_pane_g3_copy1

0x78f0,	// (0x0006bfe4) cset_list_set_pane_t1_copy1_ParamLimits

0x78f0,	// (0x0006bfe4) cset_list_set_pane_t1_copy1

0xdf5c,	// (0x00072650) list_highlight_pane_cp021_copy1_ParamLimits

0xdf5c,	// (0x00072650) list_highlight_pane_cp021_copy1

0x7905,	// (0x0006bff9) cset6_slider_pane_ParamLimits

0x7905,	// (0x0006bff9) cset6_slider_pane

0x7931,	// (0x0006c025) main_cset6_slider_pane_g1_ParamLimits

0x7931,	// (0x0006c025) main_cset6_slider_pane_g1

0x7959,	// (0x0006c04d) main_cset6_slider_pane_g2_ParamLimits

0x7959,	// (0x0006c04d) main_cset6_slider_pane_g2

0x7981,	// (0x0006c075) main_cset6_slider_pane_g3_ParamLimits

0x7981,	// (0x0006c075) main_cset6_slider_pane_g3

0x798d,	// (0x0006c081) main_cset6_slider_pane_g4_ParamLimits

0x798d,	// (0x0006c081) main_cset6_slider_pane_g4

0x7999,	// (0x0006c08d) main_cset6_slider_pane_g5_ParamLimits

0x7999,	// (0x0006c08d) main_cset6_slider_pane_g5

0xef82,	// (0x00073676) main_cset6_slider_pane_g7_ParamLimits

0xef82,	// (0x00073676) main_cset6_slider_pane_g7

0xef8e,	// (0x00073682) main_cset6_slider_pane_g8_ParamLimits

0xef8e,	// (0x00073682) main_cset6_slider_pane_g8

0x61ff,	// (0x0006a8f3) main_cset6_slider_pane_g9_ParamLimits

0x61ff,	// (0x0006a8f3) main_cset6_slider_pane_g9

0x620b,	// (0x0006a8ff) main_cset6_slider_pane_g10_ParamLimits

0x620b,	// (0x0006a8ff) main_cset6_slider_pane_g10

0x6217,	// (0x0006a90b) main_cset6_slider_pane_g11_ParamLimits

0x6217,	// (0x0006a90b) main_cset6_slider_pane_g11

0x6223,	// (0x0006a917) main_cset6_slider_pane_g12_ParamLimits

0x6223,	// (0x0006a917) main_cset6_slider_pane_g12

0x622f,	// (0x0006a923) main_cset6_slider_pane_g13_ParamLimits

0x622f,	// (0x0006a923) main_cset6_slider_pane_g13

0x623b,	// (0x0006a92f) main_cset6_slider_pane_g14_ParamLimits

0x623b,	// (0x0006a92f) main_cset6_slider_pane_g14

0x79a5,	// (0x0006c099) main_cset6_slider_pane_g15_ParamLimits

0x79a5,	// (0x0006c099) main_cset6_slider_pane_g15

0x625f,	// (0x0006a953) main_cset6_slider_pane_g16_ParamLimits

0x625f,	// (0x0006a953) main_cset6_slider_pane_g16

0x626b,	// (0x0006a95f) main_cset6_slider_pane_g17_ParamLimits

0x626b,	// (0x0006a95f) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00074286) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00074286) main_cset6_slider_pane_g

0x79d5,	// (0x0006c0c9) main_cset6_slider_pane_t1_ParamLimits

0x79d5,	// (0x0006c0c9) main_cset6_slider_pane_t1

0x7a16,	// (0x0006c10a) main_cset6_slider_pane_t2_ParamLimits

0x7a16,	// (0x0006c10a) main_cset6_slider_pane_t2

0x7a41,	// (0x0006c135) main_cset6_slider_pane_t3_ParamLimits

0x7a41,	// (0x0006c135) main_cset6_slider_pane_t3

0x7a6c,	// (0x0006c160) main_cset6_slider_pane_t4_ParamLimits

0x7a6c,	// (0x0006c160) main_cset6_slider_pane_t4

0x7a97,	// (0x0006c18b) main_cset6_slider_pane_t5_ParamLimits

0x7a97,	// (0x0006c18b) main_cset6_slider_pane_t5

0x7ac2,	// (0x0006c1b6) main_cset6_slider_pane_t7_ParamLimits

0x7ac2,	// (0x0006c1b6) main_cset6_slider_pane_t7

0x7af8,	// (0x0006c1ec) main_cset6_slider_pane_t8_ParamLimits

0x7af8,	// (0x0006c1ec) main_cset6_slider_pane_t8

0x7b1c,	// (0x0006c210) main_cset6_slider_pane_t9_ParamLimits

0x7b1c,	// (0x0006c210) main_cset6_slider_pane_t9

0x7b40,	// (0x0006c234) main_cset6_slider_pane_t10_ParamLimits

0x7b40,	// (0x0006c234) main_cset6_slider_pane_t10

0x7b64,	// (0x0006c258) main_cset6_slider_pane_t11_ParamLimits

0x7b64,	// (0x0006c258) main_cset6_slider_pane_t11

0x7b88,	// (0x0006c27c) main_cset6_slider_pane_t14_ParamLimits

0x7b88,	// (0x0006c27c) main_cset6_slider_pane_t14

0x7bc1,	// (0x0006c2b5) main_cset6_slider_pane_t15_ParamLimits

0x7bc1,	// (0x0006c2b5) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000742ab) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000742ab) main_cset6_slider_pane_t

0xf0af,	// (0x000737a3) cset_slider_pane_g1_copy1

0xf0b8,	// (0x000737ac) cset_slider_pane_g2_copy1

0xf0c1,	// (0x000737b5) cset_slider_pane_g3_copy1

0xa3d2,	// (0x0006eac6) bg_popup_sub_pane_cp011_copy1

0x7ccb,	// (0x0006c3bf) main_cset_text_pane_g1_copy1

0x691a,	// (0x0006b00e) main_cset_text_pane_t1_copy1

0x6928,	// (0x0006b01c) main_cset_text_pane_t2_copy1

0x6936,	// (0x0006b02a) main_cset_text_pane_t3_copy1

0x6944,	// (0x0006b038) main_cset_text_pane_t4_copy1

0x6952,	// (0x0006b046) main_cset_text_pane_t5_copy1

0x7cd3,	// (0x0006c3c7) main_cset_text_pane_t6_copy1

0x7ce1,	// (0x0006c3d5) main_cset_text_pane_t7_copy1

0x7812,	// (0x0006bf06) main_cset_text2_pane_t1_copy1

0xa44a,	// (0x0006eb3e) main_ncimui_pane

0x38c1,	// (0x00067fb5) popup_query_ncimui_window_ParamLimits

0x38c1,	// (0x00067fb5) popup_query_ncimui_window

0xe671,	// (0x00072d65) field_cale_ev2_pane_g4_ParamLimits

0xe671,	// (0x00072d65) field_cale_ev2_pane_g4

0x54a2,	// (0x00069b96) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54a2,	// (0x00069b96) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x00073f89) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x00073f89) cell_video_dialer_keypad_pane_g

0x54ba,	// (0x00069bae) cell_video_dialer_keypad_pane_t1

0xa3d2,	// (0x0006eac6) bg_popup_window_pane_cp012

0xc786,	// (0x00070e7a) heading_pane_cp06

0x7e36,	// (0x0006c52a) ncim_query_content_pane

0xa3d2,	// (0x0006eac6) bg_popup_heading_pane_cp01

0x7e3e,	// (0x0006c532) ncim_heading_pane_t1

0x7e4c,	// (0x0006c540) ncim_indicator_popup_pane

0x7e5e,	// (0x0006c552) ncim_query_button_pane

0x7e7e,	// (0x0006c572) ncim_query_content_pane_t1

0x7e90,	// (0x0006c584) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000742ef) ncim_query_content_pane_t

0x7f42,	// (0x0006c636) ncim_query_list_pane

0x7f54,	// (0x0006c648) ncim_query_popup_pane

0x7e4c,	// (0x0006c540) ncim_indicator_popup_pane_ParamLimits

0x7e66,	// (0x0006c55a) ncim_query_content_pane_g1_ParamLimits

0x7e66,	// (0x0006c55a) ncim_query_content_pane_g1

0x7e7e,	// (0x0006c572) ncim_query_content_pane_t1_ParamLimits

0x7e90,	// (0x0006c584) ncim_query_content_pane_t2_ParamLimits

0x7ea2,	// (0x0006c596) ncim_query_content_pane_t3_ParamLimits

0x7ea2,	// (0x0006c596) ncim_query_content_pane_t3

0x7eca,	// (0x0006c5be) ncim_query_content_pane_t4_ParamLimits

0x7eca,	// (0x0006c5be) ncim_query_content_pane_t4

0x7ef2,	// (0x0006c5e6) ncim_query_content_pane_t5_ParamLimits

0x7ef2,	// (0x0006c5e6) ncim_query_content_pane_t5

0x7f1a,	// (0x0006c60e) ncim_query_content_pane_t6_ParamLimits

0x7f1a,	// (0x0006c60e) ncim_query_content_pane_t6

0xfbfb,	// (0x000742ef) ncim_query_content_pane_t_ParamLimits

0x7f42,	// (0x0006c636) ncim_query_list_pane_ParamLimits

0x7f54,	// (0x0006c648) ncim_query_popup_pane_ParamLimits

0x7f68,	// (0x0006c65c) wait_bar_pane_cp04

0xa3d2,	// (0x0006eac6) input_focus_pane_cp011

0x7f70,	// (0x0006c664) ncim_query_popup_pane_t1

0x7f7e,	// (0x0006c672) ncim_list_query_list_pane_ParamLimits

0x7f7e,	// (0x0006c672) ncim_list_query_list_pane

0xa3d2,	// (0x0006eac6) bg_button_pane_cp027

0x7f8b,	// (0x0006c67f) ncim_query_button_pane_g1

0xa3d2,	// (0x0006eac6) list_highlight_pane_cp012

0x7f95,	// (0x0006c689) ncim_list_query_list_pane_g1

0x7f9d,	// (0x0006c691) ncim_list_query_list_pane_t1

0xaefc,	// (0x0006f5f0) cam4_indicators_pane_g3_ParamLimits

0xaefc,	// (0x0006f5f0) cam4_indicators_pane_g3

0xaf7c,	// (0x0006f670) vid4_indicators_pane_g5_ParamLimits

0xaf7c,	// (0x0006f670) vid4_indicators_pane_g5

0xb06a,	// (0x0006f75e) vid4_progress_pane_g5_ParamLimits

0xb06a,	// (0x0006f75e) vid4_progress_pane_g5

0x7d21,	// (0x0006c415) main_ncimui_pane_g1

0x7d8a,	// (0x0006c47e) ncimui_group_query_pane_ParamLimits

0x7d8a,	// (0x0006c47e) ncimui_group_query_pane

0x7dd2,	// (0x0006c4c6) ncimui_list_pane_ParamLimits

0x7dd2,	// (0x0006c4c6) ncimui_list_pane

0x7df9,	// (0x0006c4ed) ncimui_text_pane_ParamLimits

0x7df9,	// (0x0006c4ed) ncimui_text_pane

0x7fab,	// (0x0006c69f) ncimui_text_pane_t1_ParamLimits

0x7fab,	// (0x0006c69f) ncimui_text_pane_t1

0x7fc9,	// (0x0006c6bd) ncimui_list_single_graphic_pane_ParamLimits

0x7fc9,	// (0x0006c6bd) ncimui_list_single_graphic_pane

0x7fd9,	// (0x0006c6cd) ncimui_query_pane_ParamLimits

0x7fd9,	// (0x0006c6cd) ncimui_query_pane

0xa3d2,	// (0x0006eac6) list_highlight_pane_cp013

0x7fec,	// (0x0006c6e0) ncim_list_query_list_pane_t1_copy1

0x7f95,	// (0x0006c689) ncim_list_single_graphic_pane_g1

0x7ffa,	// (0x0006c6ee) ncim_query_button_pane_cp01

0x8006,	// (0x0006c6fa) ncim_query_entry_pane_ParamLimits

0x8006,	// (0x0006c6fa) ncim_query_entry_pane

0x8019,	// (0x0006c70d) ncimui_query_pane_g1

0x8025,	// (0x0006c719) ncimui_query_pane_t1_ParamLimits

0x8025,	// (0x0006c719) ncimui_query_pane_t1

0xdf5c,	// (0x00072650) input_focus_pane_cp012

0x803e,	// (0x0006c732) ncim_query_entry_pane_t1

0xbedb,	// (0x000705cf) main_im_pane_ParamLimits

0xa44a,	// (0x0006eb3e) main_mobtv_pane_ParamLimits

0xa44a,	// (0x0006eb3e) main_mobtv_pane

0x79bd,	// (0x0006c0b1) main_cset6_slider_pane_g18_ParamLimits

0x79bd,	// (0x0006c0b1) main_cset6_slider_pane_g18

0x79c9,	// (0x0006c0bd) main_cset6_slider_pane_g19_ParamLimits

0x79c9,	// (0x0006c0bd) main_cset6_slider_pane_g19

0x8050,	// (0x0006c744) bg_main_mobtv_pane_ParamLimits

0x8050,	// (0x0006c744) bg_main_mobtv_pane

0x805e,	// (0x0006c752) main_mobtv_info_pane

0x8067,	// (0x0006c75b) main_mobtv_loading_pane_ParamLimits

0x8067,	// (0x0006c75b) main_mobtv_loading_pane

0x8074,	// (0x0006c768) main_mobtv_pg_channel_list_pane

0x807e,	// (0x0006c772) main_mobtv_pg_hdr_pane

0x8087,	// (0x0006c77b) main_mobtv_programe_curr_pane_ParamLimits

0x8087,	// (0x0006c77b) main_mobtv_programe_curr_pane

0x8094,	// (0x0006c788) main_mobtv_programe_next_pane_ParamLimits

0x8094,	// (0x0006c788) main_mobtv_programe_next_pane

0x80a1,	// (0x0006c795) popup_mobtv_noti_window

0xe36d,	// (0x00072a61) main_tv_pg_hdr_pane_g1

0x80a9,	// (0x0006c79d) main_tv_pg_hdr_pane_g2

0x80b1,	// (0x0006c7a5) main_tv_pg_hdr_pane_g3

0x80b9,	// (0x0006c7ad) main_tv_pg_hdr_pane_g4

0x80c1,	// (0x0006c7b5) main_tv_pg_hdr_pane_g5

0x80cb,	// (0x0006c7bf) main_tv_pg_hdr_pane_g6

0x80d5,	// (0x0006c7c9) main_tv_pg_hdr_pane_g7

0x80df,	// (0x0006c7d3) main_tv_pg_hdr_pane_g8

0x80e9,	// (0x0006c7dd) main_tv_pg_hdr_pane_g9

0x80f3,	// (0x0006c7e7) main_tv_pg_hdr_pane_g10

0x80fd,	// (0x0006c7f1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000742fc) main_tv_pg_hdr_pane_g

0x8107,	// (0x0006c7fb) main_tv_pg_hdr_pane_t1

0x8115,	// (0x0006c809) main_tv_pg_hdr_pane_t2

0x8123,	// (0x0006c817) main_tv_pg_hdr_pane_t3

0x8133,	// (0x0006c827) main_tv_pg_hdr_pane_t4

0x8143,	// (0x0006c837) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00074313) main_tv_pg_hdr_pane_t

0x8153,	// (0x0006c847) single_mobtv_pg_channel_pane_ParamLimits

0x8153,	// (0x0006c847) single_mobtv_pg_channel_pane

0x8165,	// (0x0006c859) single_mobtv_pg_channel_table_pane

0x816e,	// (0x0006c862) single_mobtv_pg_channel_thumb_pane

0x8177,	// (0x0006c86b) single_tv_pg_channel_pane_g1

0x8180,	// (0x0006c874) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007431e) single_tv_pg_channel_pane_g

0xe5d0,	// (0x00072cc4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe5d0,	// (0x00072cc4) bg_single_mobtv_pg_channel_thumb_pane

0x8189,	// (0x0006c87d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8189,	// (0x0006c87d) single_mobtv_pg_channel_thumb_pane_g1

0x8197,	// (0x0006c88b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8197,	// (0x0006c88b) single_mobtv_pg_channel_thumb_pane_g2

0x81a3,	// (0x0006c897) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x81a3,	// (0x0006c897) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00074323) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00074323) single_mobtv_pg_channel_thumb_pane_g

0x81af,	// (0x0006c8a3) single_mobtv_pg_channel_thumb_pane_t1

0x81bd,	// (0x0006c8b1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007432a) single_mobtv_pg_channel_thumb_pane_t

0xe36d,	// (0x00072a61) bg_single_mobtv_pg_channel_table_pane_g1

0xe36d,	// (0x00072a61) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00073dd0) bg_single_mobtv_pg_channel_table_pane_g

0x81cb,	// (0x0006c8bf) single_mobtv_pg_channel_table_pane_t1

0x81d9,	// (0x0006c8cd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007432f) single_mobtv_pg_channel_table_pane_t

0x81ef,	// (0x0006c8e3) main_mobtv_info_pane_g1_ParamLimits

0x81ef,	// (0x0006c8e3) main_mobtv_info_pane_g1

0x820d,	// (0x0006c901) main_mobtv_info_pane_t1_ParamLimits

0x820d,	// (0x0006c901) main_mobtv_info_pane_t1

0x8285,	// (0x0006c979) main_mobtv_info_pane_t2_ParamLimits

0x8285,	// (0x0006c979) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00074339) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00074339) main_mobtv_info_pane_t

0x8314,	// (0x0006ca08) wait_bar_pane_cp05

0x8326,	// (0x0006ca1a) main_mobtv_loading_pane_g1_ParamLimits

0x8326,	// (0x0006ca1a) main_mobtv_loading_pane_g1

0x8339,	// (0x0006ca2d) main_mobtv_loading_pane_g2_ParamLimits

0x8339,	// (0x0006ca2d) main_mobtv_loading_pane_g2

0x8345,	// (0x0006ca39) main_mobtv_loading_pane_g3_ParamLimits

0x8345,	// (0x0006ca39) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00074340) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00074340) main_mobtv_loading_pane_g

0x8358,	// (0x0006ca4c) main_mobtv_loading_pane_t1_ParamLimits

0x8358,	// (0x0006ca4c) main_mobtv_loading_pane_t1

0x8370,	// (0x0006ca64) main_mobtv_loading_pane_t2_ParamLimits

0x8370,	// (0x0006ca64) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00074347) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00074347) main_mobtv_loading_pane_t

0x8394,	// (0x0006ca88) wait_bar_pane_cp06_ParamLimits

0x8394,	// (0x0006ca88) wait_bar_pane_cp06

0x83a3,	// (0x0006ca97) main_mobtv_programe_curr_pane_t1

0x83b1,	// (0x0006caa5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007434c) main_mobtv_programe_curr_pane_t

0x83bf,	// (0x0006cab3) main_mobtv_programe_next_pane_t1

0x83cd,	// (0x0006cac1) main_mobtv_programe_next_pane_t2

0x83db,	// (0x0006cacf) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00074351) main_mobtv_programe_next_pane_t

0xa3d2,	// (0x0006eac6) bg_popup_mobtv_noti_window_pane

0x83e9,	// (0x0006cadd) popup_mobtv_noti_window_g1

0x83f1,	// (0x0006cae5) popup_mobtv_noti_window_t1

0x83ff,	// (0x0006caf3) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00074358) popup_mobtv_noti_window_t

0xe36d,	// (0x00072a61) bg_popup_mobtv_noti_window_pane_g1

0xa458,	// (0x0006eb4c) sc_clock_pane

0xa458,	// (0x0006eb4c) main_fs_bigclock_pane

0x72b6,	// (0x0006b9aa) blid2_tripm_pane_t4_ParamLimits

0x72b6,	// (0x0006b9aa) blid2_tripm_pane_t4

0x840d,	// (0x0006cb01) sc_clock_pane_g1_ParamLimits

0x840d,	// (0x0006cb01) sc_clock_pane_g1

0x841f,	// (0x0006cb13) sc_clock_pane_t1_ParamLimits

0x841f,	// (0x0006cb13) sc_clock_pane_t1

0x8441,	// (0x0006cb35) sc_clock_pane_t2_ParamLimits

0x8441,	// (0x0006cb35) sc_clock_pane_t2

0x8459,	// (0x0006cb4d) sc_clock_pane_t3_ParamLimits

0x8459,	// (0x0006cb4d) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007435d) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007435d) sc_clock_pane_t

0x9853,	// (0x0006df47) main_fs_bigclock_indicator_pane_ParamLimits

0x9853,	// (0x0006df47) main_fs_bigclock_indicator_pane

0x84ff,	// (0x0006cbf3) main_fs_bigclock_pane_g1_ParamLimits

0x84ff,	// (0x0006cbf3) main_fs_bigclock_pane_g1

0x985f,	// (0x0006df53) main_fs_bigclock_pane_t1_ParamLimits

0x985f,	// (0x0006df53) main_fs_bigclock_pane_t1

0x9871,	// (0x0006df65) main_fs_bigclock_pane_t2_ParamLimits

0x9871,	// (0x0006df65) main_fs_bigclock_pane_t2

0x9885,	// (0x0006df79) main_fs_bigclock_pane_t3_ParamLimits

0x9885,	// (0x0006df79) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00074567) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00074567) main_fs_bigclock_pane_t

0xb8a7,	// (0x0006ff9b) main_fs_bigclock_indicator_pane_g1

0x7e72,	// (0x0006c566) ncim_query_content_pane_g2_ParamLimits

0x7e72,	// (0x0006c566) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000742ea) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000742ea) ncim_query_content_pane_g

0x8472,	// (0x0006cb66) sc_clock_pane_t4_ParamLimits

0x8472,	// (0x0006cb66) sc_clock_pane_t4

0xa44a,	// (0x0006eb3e) main_radioblah_pane

0xed89,	// (0x0007347d) cell_call4_button_pane_t1_copy1_ParamLimits

0xed89,	// (0x0007347d) cell_call4_button_pane_t1_copy1

0x7d39,	// (0x0006c42d) main_ncimui_pane_t1_ParamLimits

0x7d39,	// (0x0006c42d) main_ncimui_pane_t1

0x7d53,	// (0x0006c447) main_ncimui_pane_t2_ParamLimits

0x7d53,	// (0x0006c447) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000742e3) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000742e3) main_ncimui_pane_t

0xb1ca,	// (0x0006f8be) main_radioblah_anim_pane_ParamLimits

0xb1ca,	// (0x0006f8be) main_radioblah_anim_pane

0xb1db,	// (0x0006f8cf) main_radioblah_info_pane_ParamLimits

0xb1db,	// (0x0006f8cf) main_radioblah_info_pane

0xb1ef,	// (0x0006f8e3) main_radioblah_pane_t1_ParamLimits

0xb1ef,	// (0x0006f8e3) main_radioblah_pane_t1

0xb20b,	// (0x0006f8ff) main_radioblah_pane_t2_ParamLimits

0xb20b,	// (0x0006f8ff) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007437e) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007437e) main_radioblah_pane_t

0x8579,	// (0x0006cc6d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8579,	// (0x0006cc6d) main_radioblah_rocker_ctrl_pane

0xb253,	// (0x0006f947) main_radioblah_info_pane_t1_ParamLimits

0xb253,	// (0x0006f947) main_radioblah_info_pane_t1

0x85d1,	// (0x0006ccc5) main_radioblah_info_pane_t2_ParamLimits

0x85d1,	// (0x0006ccc5) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00074387) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00074387) main_radioblah_info_pane_t

0xe36d,	// (0x00072a61) main_radioblah_rocker_ctrl_pane_g1

0x8681,	// (0x0006cd75) main_radioblah_rocker_ctrl_pane_g2

0x8689,	// (0x0006cd7d) main_radioblah_rocker_ctrl_pane_g3

0x8691,	// (0x0006cd85) main_radioblah_rocker_ctrl_pane_g4

0x8699,	// (0x0006cd8d) main_radioblah_rocker_ctrl_pane_g5

0x86a1,	// (0x0006cd95) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00074390) main_radioblah_rocker_ctrl_pane_g

0x7812,	// (0x0006bf06) main_cset_text2_pane_t1_copy1_ParamLimits

0xaeac,	// (0x0006f5a0) cam4_image_uncrop_qvga_pane

0xaf25,	// (0x0006f619) vid4_image_uncrop_qcif_pane

0xb0a0,	// (0x0006f794) cam6_image_uncrop_qvga_pane_ParamLimits

0xb0a0,	// (0x0006f794) cam6_image_uncrop_qvga_pane

0x76bf,	// (0x0006bdb3) vid6_image_uncrop_qcif_pane_ParamLimits

0x76bf,	// (0x0006bdb3) vid6_image_uncrop_qcif_pane

0xa3d2,	// (0x0006eac6) bg_popup_preview_window_pane_cp03

0x7cef,	// (0x0006c3e3) list_cset_text2_pane

0x7cf7,	// (0x0006c3eb) main_cset6_text2_pane_g1

0x7cff,	// (0x0006c3f3) main_cset6_text2_pane_t1

0x86a9,	// (0x0006cd9d) list_cset_text2_pane_t1_ParamLimits

0x86a9,	// (0x0006cd9d) list_cset_text2_pane_t1

0xa44a,	// (0x0006eb3e) main_radioblah_pane_ParamLimits

0x8300,	// (0x0006c9f4) main_mobtv_info_pane_t3_ParamLimits

0x8300,	// (0x0006c9f4) main_mobtv_info_pane_t3

0x8567,	// (0x0006cc5b) main_radioblah_pane_g1

0x85a1,	// (0x0006cc95) main_radioblah_info_pane_g1

0x8626,	// (0x0006cd1a) main_radioblah_info_pane_t3_ParamLimits

0x8626,	// (0x0006cd1a) main_radioblah_info_pane_t3

0x22ff,	// (0x000669f3) highlight_cell_cale_month_pane_ParamLimits

0x22ff,	// (0x000669f3) highlight_cell_cale_month_pane

0xa458,	// (0x0006eb4c) main_phob_fisheye_pane

0xe714,	// (0x00072e08) scroll_pane_cp0031_ParamLimits

0xe714,	// (0x00072e08) scroll_pane_cp0031

0x7803,	// (0x0006bef7) wait_bar_pane_cp08_ParamLimits

0x78b8,	// (0x0006bfac) cset_list_set_pane_copy1_ParamLimits

0xb28d,	// (0x0006f981) highlight_cell_cale_month_pane_g1

0x86c2,	// (0x0006cdb6) highlight_cell_cale_month_pane_t1

0x6e6e,	// (0x0006b562) list_gen_pane_cp01

0xef6d,	// (0x00073661) scroll_pane_01

0x86d0,	// (0x0006cdc4) list_single_double_fisheye_pane

0x86d9,	// (0x0006cdcd) list_double_fisheye_pane_g1_ParamLimits

0x86d9,	// (0x0006cdcd) list_double_fisheye_pane_g1

0x86e5,	// (0x0006cdd9) list_double_fisheye_pane_g2_ParamLimits

0x86e5,	// (0x0006cdd9) list_double_fisheye_pane_g2

0x86f9,	// (0x0006cded) list_double_fisheye_pane_g3_ParamLimits

0x86f9,	// (0x0006cded) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007439d) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007439d) list_double_fisheye_pane_g

0x8722,	// (0x0006ce16) list_double_fisheye_pane_t1_ParamLimits

0x8722,	// (0x0006ce16) list_double_fisheye_pane_t1

0x873d,	// (0x0006ce31) list_double_fisheye_pane_t2_ParamLimits

0x873d,	// (0x0006ce31) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000743a8) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000743a8) list_double_fisheye_pane_t

0xa458,	// (0x0006eb4c) main_call5_pane

0x849d,	// (0x0006cb91) sc_swipe_pane_ParamLimits

0x849d,	// (0x0006cb91) sc_swipe_pane

0x8772,	// (0x0006ce66) call5_image_pane_ParamLimits

0x8772,	// (0x0006ce66) call5_image_pane

0x878f,	// (0x0006ce83) call5_swipe_1_pane_ParamLimits

0x878f,	// (0x0006ce83) call5_swipe_1_pane

0x87a2,	// (0x0006ce96) call5_swipe_2_pane_ParamLimits

0x87a2,	// (0x0006ce96) call5_swipe_2_pane

0x87cd,	// (0x0006cec1) popup_call5_audio_first_window_ParamLimits

0x87cd,	// (0x0006cec1) popup_call5_audio_first_window

0xe5d0,	// (0x00072cc4) call5_swipe_1_pane_g1_ParamLimits

0xe5d0,	// (0x00072cc4) call5_swipe_1_pane_g1

0xb295,	// (0x0006f989) call5_swipe_1_pane_g2_ParamLimits

0xb295,	// (0x0006f989) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000743ad) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000743ad) call5_swipe_1_pane_g

0xb2a1,	// (0x0006f995) call5_swipe_1_pane_t1_ParamLimits

0xb2a1,	// (0x0006f995) call5_swipe_1_pane_t1

0xe5d0,	// (0x00072cc4) call5_swipe_2_pane_g1_ParamLimits

0xe5d0,	// (0x00072cc4) call5_swipe_2_pane_g1

0xb2b6,	// (0x0006f9aa) call5_swipe_2_pane_g2_ParamLimits

0xb2b6,	// (0x0006f9aa) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000743b2) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000743b2) call5_swipe_2_pane_g

0xb2c2,	// (0x0006f9b6) call5_swipe_2_pane_t1_ParamLimits

0xb2c2,	// (0x0006f9b6) call5_swipe_2_pane_t1

0xb2d7,	// (0x0006f9cb) sc_swipe_pane_g1_ParamLimits

0xb2d7,	// (0x0006f9cb) sc_swipe_pane_g1

0xb2e4,	// (0x0006f9d8) sc_swipe_pane_g2_ParamLimits

0xb2e4,	// (0x0006f9d8) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000743b7) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000743b7) sc_swipe_pane_g

0xb2f0,	// (0x0006f9e4) sc_swipe_pane_t1_ParamLimits

0xb2f0,	// (0x0006f9e4) sc_swipe_pane_t1

0xa458,	// (0x0006eb4c) main_cmail_launcher_pane

0x87de,	// (0x0006ced2) aid_size_cell_cmail_l_ParamLimits

0x87de,	// (0x0006ced2) aid_size_cell_cmail_l

0x87f8,	// (0x0006ceec) grid_cmail_l_pane_ParamLimits

0x87f8,	// (0x0006ceec) grid_cmail_l_pane

0x8813,	// (0x0006cf07) cell_cmail_l_pane_ParamLimits

0x8813,	// (0x0006cf07) cell_cmail_l_pane

0x8839,	// (0x0006cf2d) cell_cmail_l_pane_g1_ParamLimits

0x8839,	// (0x0006cf2d) cell_cmail_l_pane_g1

0x8845,	// (0x0006cf39) cell_cmail_l_pane_t1_ParamLimits

0x8845,	// (0x0006cf39) cell_cmail_l_pane_t1

0xb305,	// (0x0006f9f9) cell_cmail_l_pane_t2_ParamLimits

0xb305,	// (0x0006f9f9) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000743bc) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000743bc) cell_cmail_l_pane_t

0xdf5c,	// (0x00072650) grid_highlight_pane_cp018_ParamLimits

0xdf5c,	// (0x00072650) grid_highlight_pane_cp018

0x0398,	// (0x00064a8c) main2_pane_ParamLimits

0x0398,	// (0x00064a8c) main2_pane

0xbf74,	// (0x00070668) popup_sp_fs_action_menu_bg_pane_g1

0xbf7c,	// (0x00070670) popup_sp_fs_action_menu_bg_pane_g2

0xbf84,	// (0x00070678) popup_sp_fs_action_menu_bg_pane_g3

0xbf8c,	// (0x00070680) popup_sp_fs_action_menu_bg_pane_g4

0xbf94,	// (0x00070688) popup_sp_fs_action_menu_bg_pane_g5

0xbf9c,	// (0x00070690) popup_sp_fs_action_menu_bg_pane_g6

0xbfa4,	// (0x00070698) popup_sp_fs_action_menu_bg_pane_g7

0xbfac,	// (0x000706a0) popup_sp_fs_action_menu_bg_pane_g8

0xbfb4,	// (0x000706a8) popup_sp_fs_action_menu_bg_pane_g9

0xbfbc,	// (0x000706b0) popup_sp_fs_action_menu_bg_pane_g10

0xbfbc,	// (0x000706b0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0007387e) popup_sp_fs_action_menu_bg_pane_g

0x12c7,	// (0x000659bb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t3_g3_g1

0x12d3,	// (0x000659c7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x2_t3_g3_g2

0x12df,	// (0x000659d3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x12df,	// (0x000659d3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007392c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007392c) list_medium_line_x2_t3_g3_g

0x12eb,	// (0x000659df) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12eb,	// (0x000659df) list_medium_line_x2_t3_g3_t1

0x1300,	// (0x000659f4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1300,	// (0x000659f4) list_medium_line_x2_t3_g3_t2

0x1314,	// (0x00065a08) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1314,	// (0x00065a08) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00073933) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00073933) list_medium_line_x2_t3_g3_t

0x12c7,	// (0x000659bb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t3_g2_g1

0x12df,	// (0x000659d3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x12df,	// (0x000659d3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007393a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007393a) list_medium_line_x2_t3_g2_g

0x1329,	// (0x00065a1d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1329,	// (0x00065a1d) list_medium_line_x2_t3_g2_t1

0x133f,	// (0x00065a33) list_medium_line_x2_t3_g2_t2_ParamLimits

0x133f,	// (0x00065a33) list_medium_line_x2_t3_g2_t2

0x1351,	// (0x00065a45) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1351,	// (0x00065a45) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007393f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007393f) list_medium_line_x2_t3_g2_t

0x12c7,	// (0x000659bb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t4_g4_g1

0x136e,	// (0x00065a62) list_medium_line_x2_t4_g4_g2_ParamLimits

0x136e,	// (0x00065a62) list_medium_line_x2_t4_g4_g2

0x12d3,	// (0x000659c7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x2_t4_g4_g3

0x137a,	// (0x00065a6e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x137a,	// (0x00065a6e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00073946) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00073946) list_medium_line_x2_t4_g4_g

0x1386,	// (0x00065a7a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1386,	// (0x00065a7a) list_medium_line_x2_t4_g4_t1

0x13a0,	// (0x00065a94) list_medium_line_x2_t4_g4_t2_ParamLimits

0x13a0,	// (0x00065a94) list_medium_line_x2_t4_g4_t2

0x13b6,	// (0x00065aaa) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13b6,	// (0x00065aaa) list_medium_line_x2_t4_g4_t3

0x13cb,	// (0x00065abf) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13cb,	// (0x00065abf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007394f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007394f) list_medium_line_x2_t4_g4_t

0x12c7,	// (0x000659bb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t2_g4_g1

0x136e,	// (0x00065a62) list_medium_line_x2_t2_g4_g2_ParamLimits

0x136e,	// (0x00065a62) list_medium_line_x2_t2_g4_g2

0x12d3,	// (0x000659c7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x2_t2_g4_g3

0x12df,	// (0x000659d3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x12df,	// (0x000659d3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000739b6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000739b6) list_medium_line_x2_t2_g4_g

0x2325,	// (0x00066a19) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2325,	// (0x00066a19) list_medium_line_x2_t2_g4_t1

0x1314,	// (0x00065a08) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1314,	// (0x00065a08) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000739bf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000739bf) list_medium_line_x2_t2_g4_t

0x12c7,	// (0x000659bb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t2_g3_g1

0x12d3,	// (0x000659c7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x2_t2_g3_g2

0x12df,	// (0x000659d3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x12df,	// (0x000659d3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007392c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007392c) list_medium_line_x2_t2_g3_g

0x233a,	// (0x00066a2e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x233a,	// (0x00066a2e) list_medium_line_x2_t2_g3_t1

0x1314,	// (0x00065a08) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1314,	// (0x00065a08) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000739c4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000739c4) list_medium_line_x2_t2_g3_t

0x2483,	// (0x00066b77) main_sp_fs_list_pane_ParamLimits

0x2483,	// (0x00066b77) main_sp_fs_list_pane

0xd695,	// (0x00071d89) sp_fs_scroll_pane_ParamLimits

0xd695,	// (0x00071d89) sp_fs_scroll_pane

0x248f,	// (0x00066b83) list_medium_line_x2_t3_t1

0x249f,	// (0x00066b93) list_medium_line_x2_t3_t2

0x24ad,	// (0x00066ba1) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00073a0f) list_medium_line_x2_t3_t

0x24bb,	// (0x00066baf) list_medium_line_x3_t4_t1

0x24cb,	// (0x00066bbf) list_medium_line_x3_t4_t2

0x24d9,	// (0x00066bcd) list_medium_line_x3_t4_t3

0x24ad,	// (0x00066ba1) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00073a16) list_medium_line_x3_t4_t

0x24e7,	// (0x00066bdb) list_medium_line_x4_t5_t1

0x24f7,	// (0x00066beb) list_medium_line_x4_t5_t2

0x24d9,	// (0x00066bcd) list_medium_line_x4_t5_t3

0x2505,	// (0x00066bf9) list_medium_line_x4_t5_t4

0x24ad,	// (0x00066ba1) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00073a1f) list_medium_line_x4_t5_t

0x12c7,	// (0x000659bb) list_medium_line_t4_g4_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_t4_g4_g1

0x2513,	// (0x00066c07) list_medium_line_t4_g4_g2_ParamLimits

0x2513,	// (0x00066c07) list_medium_line_t4_g4_g2

0x251f,	// (0x00066c13) list_medium_line_t4_g4_g3_ParamLimits

0x251f,	// (0x00066c13) list_medium_line_t4_g4_g3

0x12df,	// (0x000659d3) list_medium_line_t4_g4_g4_ParamLimits

0x12df,	// (0x000659d3) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00073a2a) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00073a2a) list_medium_line_t4_g4_g

0x252b,	// (0x00066c1f) list_medium_line_t4_g4_t1_ParamLimits

0x252b,	// (0x00066c1f) list_medium_line_t4_g4_t1

0x2540,	// (0x00066c34) list_medium_line_t4_g4_t2_ParamLimits

0x2540,	// (0x00066c34) list_medium_line_t4_g4_t2

0x2555,	// (0x00066c49) list_medium_line_t4_g4_t3_ParamLimits

0x2555,	// (0x00066c49) list_medium_line_t4_g4_t3

0x1314,	// (0x00065a08) list_medium_line_t4_g4_t4_ParamLimits

0x1314,	// (0x00065a08) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00073a33) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00073a33) list_medium_line_t4_g4_t

0x261d,	// (0x00066d11) chi_dic_find_pane_g1

0x368b,	// (0x00067d7f) main_tport_pane

0x6505,	// (0x0006abf9) list_medium_line_plain_t1

0x65ad,	// (0x0006aca1) list_medium_line_t2_g2_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_t2_g2_g1

0x65b9,	// (0x0006acad) list_medium_line_t2_g2_g2_ParamLimits

0x65b9,	// (0x0006acad) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000740f4) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000740f4) list_medium_line_t2_g2_g

0x65c5,	// (0x0006acb9) list_medium_line_t2_g2_t1_ParamLimits

0x65c5,	// (0x0006acb9) list_medium_line_t2_g2_t1

0x65df,	// (0x0006acd3) list_medium_line_t2_g2_t2_ParamLimits

0x65df,	// (0x0006acd3) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000740f9) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000740f9) list_medium_line_t2_g2_t

0x6f62,	// (0x0006b656) aid_sp_fs_list_icon_a_sm

0x6f6a,	// (0x0006b65e) aid_sp_fs_list_icon_d

0x6f72,	// (0x0006b666) aid_sp_fs_text_primary

0x6f7b,	// (0x0006b66f) aid_sp_fs_text_secondary

0x6f84,	// (0x0006b678) list_medium_line

0x6f84,	// (0x0006b678) list_medium_line_g2

0x6f84,	// (0x0006b678) list_medium_line_g3

0x6f84,	// (0x0006b678) list_medium_line_plain

0x6f84,	// (0x0006b678) list_medium_line_plain_t2

0x6f84,	// (0x0006b678) list_medium_line_plain_t3

0x6f84,	// (0x0006b678) list_medium_line_right_icon

0x6f84,	// (0x0006b678) list_medium_line_right_iconx2

0x6f84,	// (0x0006b678) list_medium_line_t2

0x6f84,	// (0x0006b678) list_medium_line_t2_g2

0x6f84,	// (0x0006b678) list_medium_line_t2_g3

0x6f84,	// (0x0006b678) list_medium_line_t2_right_icon

0x6f84,	// (0x0006b678) list_medium_line_t2_right_iconx2

0x6f84,	// (0x0006b678) list_medium_line_t3

0x6f84,	// (0x0006b678) list_medium_line_t3_g2

0x6f84,	// (0x0006b678) list_medium_line_t3_g3

0x6f84,	// (0x0006b678) list_medium_line_t3_right_iconx2

0x6f8d,	// (0x0006b681) list_medium_line_t4_g4

0x6f96,	// (0x0006b68a) list_medium_line_x2

0x6f96,	// (0x0006b68a) list_medium_line_x2_t2_g2

0x6f96,	// (0x0006b68a) list_medium_line_x2_t2_g3

0x6f96,	// (0x0006b68a) list_medium_line_x2_t2_g4

0x6f96,	// (0x0006b68a) list_medium_line_x2_t3

0x6f96,	// (0x0006b68a) list_medium_line_x2_t3_g2

0x6f96,	// (0x0006b68a) list_medium_line_x2_t3_g3

0x6f96,	// (0x0006b68a) list_medium_line_x2_t3_g4

0x6f96,	// (0x0006b68a) list_medium_line_x2_t4_g2

0x6f96,	// (0x0006b68a) list_medium_line_x2_t4_g4

0x6f9f,	// (0x0006b693) list_medium_line_x3

0x6f9f,	// (0x0006b693) list_medium_line_x3_t4

0x6f9f,	// (0x0006b693) list_medium_line_x3_t4_g4

0x6f8d,	// (0x0006b681) list_medium_line_x4_t4

0x6f8d,	// (0x0006b681) list_medium_line_x4_t4_g7

0x6f8d,	// (0x0006b681) list_medium_line_x4_t5

0x6fa8,	// (0x0006b69c) list_single_fs_dyc_pane_ParamLimits

0x6fa8,	// (0x0006b69c) list_single_fs_dyc_pane

0x12c7,	// (0x000659bb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x4_t4_g7_g1

0x7bfa,	// (0x0006c2ee) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7bfa,	// (0x0006c2ee) list_medium_line_x4_t4_g7_g2

0x7c06,	// (0x0006c2fa) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c06,	// (0x0006c2fa) list_medium_line_x4_t4_g7_g3

0x7c15,	// (0x0006c309) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c15,	// (0x0006c309) list_medium_line_x4_t4_g7_g4

0x7c21,	// (0x0006c315) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c21,	// (0x0006c315) list_medium_line_x4_t4_g7_g5

0x7c30,	// (0x0006c324) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c30,	// (0x0006c324) list_medium_line_x4_t4_g7_g6

0x7c3f,	// (0x0006c333) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c3f,	// (0x0006c333) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000742c4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000742c4) list_medium_line_x4_t4_g7_g

0x7c4b,	// (0x0006c33f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c4b,	// (0x0006c33f) list_medium_line_x4_t4_g7_t1

0x7c60,	// (0x0006c354) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c60,	// (0x0006c354) list_medium_line_x4_t4_g7_t2

0x7c75,	// (0x0006c369) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c75,	// (0x0006c369) list_medium_line_x4_t4_g7_t3

0x7c8a,	// (0x0006c37e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c8a,	// (0x0006c37e) list_medium_line_x4_t4_g7_t4

0x7c9c,	// (0x0006c390) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c9c,	// (0x0006c390) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000742d3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000742d3) list_medium_line_x4_t4_g7_t

0x7cae,	// (0x0006c3a2) list_single_dyc_row_pane_ParamLimits

0x7cae,	// (0x0006c3a2) list_single_dyc_row_pane

0x875f,	// (0x0006ce53) call5_gesture_pane_ParamLimits

0x875f,	// (0x0006ce53) call5_gesture_pane

0x87b5,	// (0x0006cea9) call5_windows_pane_ParamLimits

0x87b5,	// (0x0006cea9) call5_windows_pane

0x885b,	// (0x0006cf4f) call5_swipe_1_pane_cp_ParamLimits

0x885b,	// (0x0006cf4f) call5_swipe_1_pane_cp

0x8867,	// (0x0006cf5b) call5_swipe_2_pane_cp_ParamLimits

0x8867,	// (0x0006cf5b) call5_swipe_2_pane_cp

0xc0a0,	// (0x00070794) call5_image_pane_cp

0x8873,	// (0x0006cf67) popup_call5_audio_first_window_cp_ParamLimits

0x8873,	// (0x0006cf67) popup_call5_audio_first_window_cp

0xb2d7,	// (0x0006f9cb) call5_swipe_1_pane_g1_cp_ParamLimits

0xb2d7,	// (0x0006f9cb) call5_swipe_1_pane_g1_cp

0xb317,	// (0x0006fa0b) call5_swipe_1_pane_g2_cp

0xb2f0,	// (0x0006f9e4) call5_swipe_1_pane_t1_cp_ParamLimits

0xb2f0,	// (0x0006f9e4) call5_swipe_1_pane_t1_cp

0xb2d7,	// (0x0006f9cb) call5_swipe_2_pane_g1_cp_ParamLimits

0xb2d7,	// (0x0006f9cb) call5_swipe_2_pane_g1_cp

0xb31f,	// (0x0006fa13) call5_swipe_2_pane_g2_cp

0xb327,	// (0x0006fa1b) call5_swipe_2_pane_t1_cp_ParamLimits

0xb327,	// (0x0006fa1b) call5_swipe_2_pane_t1_cp

0xdf5c,	// (0x00072650) main_sp_fs_email_pane

0xb33c,	// (0x0006fa30) main_sp_fs_listscroll_pane_te

0x8881,	// (0x0006cf75) popup_sp_fs_action_menu_pane_ParamLimits

0x8881,	// (0x0006cf75) popup_sp_fs_action_menu_pane

0xe36d,	// (0x00072a61) bg_sp_fs_ctrlbar_pane_g1

0xb345,	// (0x0006fa39) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb34e,	// (0x0006fa42) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb357,	// (0x0006fa4b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe36d,	// (0x00072a61) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000743c1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe149,	// (0x0007283d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe149,	// (0x0007283d) bg_sp_fs_ctrlbar_ddmenu_pane

0xb360,	// (0x0006fa54) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb360,	// (0x0006fa54) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb36c,	// (0x0006fa60) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb36c,	// (0x0006fa60) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000743ca) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000743ca) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb378,	// (0x0006fa6c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb378,	// (0x0006fa6c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x88c5,	// (0x0006cfb9) list_medium_line_t2_right_icon_g1

0x88cd,	// (0x0006cfc1) list_medium_line_t2_right_icon_t1

0x88dd,	// (0x0006cfd1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000743cf) list_medium_line_t2_right_icon_t

0xdf4e,	// (0x00072642) bg_sp_fs_ctrlbar_pane_ParamLimits

0xdf4e,	// (0x00072642) bg_sp_fs_ctrlbar_pane

0x8937,	// (0x0006d02b) main_sp_fs_ctrlbar_button_pane_cp01

0x8941,	// (0x0006d035) main_sp_fs_ctrlbar_ddmenu_pane

0xb3ca,	// (0x0006fabe) main_sp_fs_ctrlbar_pane_g1

0xb3d6,	// (0x0006faca) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000743d4) main_sp_fs_ctrlbar_pane_g

0xb3e2,	// (0x0006fad6) main_sp_fs_ctrlbar_pane_t1

0x894b,	// (0x0006d03f) main_sp_fs_ctrlbar_pane

0x896f,	// (0x0006d063) main_sp_fs_listscroll_pane_te_cp01

0x898f,	// (0x0006d083) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x898f,	// (0x0006d083) popup_sp_fs_action_menu_pane_cp01

0xdf5c,	// (0x00072650) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdf5c,	// (0x00072650) bg_sp_fs_highlight_list_pane_cp01

0x89bf,	// (0x0006d0b3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x89bf,	// (0x0006d0b3) sp_fs_action_menu_list_gene_pane_g1

0xb412,	// (0x0006fb06) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb412,	// (0x0006fb06) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000743de) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000743de) sp_fs_action_menu_list_gene_pane_g

0x89ce,	// (0x0006d0c2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x89ce,	// (0x0006d0c2) sp_fs_action_menu_list_gene_pane_t1

0x89e6,	// (0x0006d0da) sp_fs_action_menu_list_gene_pane_ParamLimits

0x89e6,	// (0x0006d0da) sp_fs_action_menu_list_gene_pane

0xb41f,	// (0x0006fb13) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb41f,	// (0x0006fb13) popup_sp_fs_action_menu_bg_pane

0x8a05,	// (0x0006d0f9) sp_fs_action_menu_list_pane_ParamLimits

0x8a05,	// (0x0006d0f9) sp_fs_action_menu_list_pane

0x8a25,	// (0x0006d119) sp_fs_scroll_pane_cp01_ParamLimits

0x8a25,	// (0x0006d119) sp_fs_scroll_pane_cp01

0x8a4b,	// (0x0006d13f) list_medium_line_plain_t2_t1

0x8a5b,	// (0x0006d14f) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000743e3) list_medium_line_plain_t2_t

0x8a6b,	// (0x0006d15f) list_medium_line_plain_t3_t1

0x8a7b,	// (0x0006d16f) list_medium_line_plain_t3_t2

0x8a89,	// (0x0006d17d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000743e8) list_medium_line_plain_t3_t

0x12c7,	// (0x000659bb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t2_g2_g1

0x12df,	// (0x000659d3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x12df,	// (0x000659d3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007393a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007393a) list_medium_line_x2_t2_g2_g

0x252b,	// (0x00066c1f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x252b,	// (0x00066c1f) list_medium_line_x2_t2_g2_t1

0x1314,	// (0x00065a08) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1314,	// (0x00065a08) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000743ef) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000743ef) list_medium_line_x2_t2_g2_t

0x12c7,	// (0x000659bb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t4_g2_g1

0x8a97,	// (0x0006d18b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8a97,	// (0x0006d18b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000743f4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000743f4) list_medium_line_x2_t4_g2_g

0x8aa9,	// (0x0006d19d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8aa9,	// (0x0006d19d) list_medium_line_x2_t4_g2_t1

0x8ac3,	// (0x0006d1b7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8ac3,	// (0x0006d1b7) list_medium_line_x2_t4_g2_t2

0x8ad9,	// (0x0006d1cd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8ad9,	// (0x0006d1cd) list_medium_line_x2_t4_g2_t3

0x1314,	// (0x00065a08) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1314,	// (0x00065a08) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000743f9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000743f9) list_medium_line_x2_t4_g2_t

0x8aee,	// (0x0006d1e2) list_medium_line_t3_right_iconx2_g1

0x88c5,	// (0x0006cfb9) list_medium_line_t3_right_iconx2_g2

0x8af6,	// (0x0006d1ea) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00074402) list_medium_line_t3_right_iconx2_g

0x8b00,	// (0x0006d1f4) list_medium_line_t3_right_iconx2_t1

0x8b10,	// (0x0006d204) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00074409) list_medium_line_t3_right_iconx2_t

0x12c7,	// (0x000659bb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x3_t4_g4_g1

0x12d3,	// (0x000659c7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x3_t4_g4_g2

0x2513,	// (0x00066c07) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2513,	// (0x00066c07) list_medium_line_x3_t4_g4_g3

0x8b1e,	// (0x0006d212) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8b1e,	// (0x0006d212) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007440e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007440e) list_medium_line_x3_t4_g4_g

0x8b2a,	// (0x0006d21e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8b2a,	// (0x0006d21e) list_medium_line_x3_t4_g4_t1

0x8b41,	// (0x0006d235) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8b41,	// (0x0006d235) list_medium_line_x3_t4_g4_t2

0x2540,	// (0x00066c34) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2540,	// (0x00066c34) list_medium_line_x3_t4_g4_t3

0x8b5c,	// (0x0006d250) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8b5c,	// (0x0006d250) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00074417) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00074417) list_medium_line_x3_t4_g4_t

0x8b79,	// (0x0006d26d) list_single_dyc_row_text_pane_t1_ParamLimits

0x8b79,	// (0x0006d26d) list_single_dyc_row_text_pane_t1

0x8bc2,	// (0x0006d2b6) list_single_dyc_row_text_pane_t2_ParamLimits

0x8bc2,	// (0x0006d2b6) list_single_dyc_row_text_pane_t2

0x8c38,	// (0x0006d32c) list_single_dyc_row_text_pane_t3_ParamLimits

0x8c38,	// (0x0006d32c) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00074420) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00074420) list_single_dyc_row_text_pane_t

0x8d1b,	// (0x0006d40f) list_single_dyc_row_pane_g1_ParamLimits

0x8d1b,	// (0x0006d40f) list_single_dyc_row_pane_g1

0x8d27,	// (0x0006d41b) list_single_dyc_row_pane_g2_ParamLimits

0x8d27,	// (0x0006d41b) list_single_dyc_row_pane_g2

0x8d33,	// (0x0006d427) list_single_dyc_row_pane_g3_ParamLimits

0x8d33,	// (0x0006d427) list_single_dyc_row_pane_g3

0x8d3f,	// (0x0006d433) list_single_dyc_row_pane_g4_ParamLimits

0x8d3f,	// (0x0006d433) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007442d) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007442d) list_single_dyc_row_pane_g

0x8d4b,	// (0x0006d43f) list_single_dyc_row_text_pane_ParamLimits

0x8d4b,	// (0x0006d43f) list_single_dyc_row_text_pane

0xa3d2,	// (0x0006eac6) bg_sp_fs_scroll_pane

0xb42d,	// (0x0006fb21) thumb_sp_fs_scroll_pane

0x65ad,	// (0x0006aca1) list_medium_line_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_g1

0x8d6a,	// (0x0006d45e) list_medium_line_t1_ParamLimits

0x8d6a,	// (0x0006d45e) list_medium_line_t1

0x12c7,	// (0x000659bb) list_medium_line_x2_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_g1

0x12d3,	// (0x000659c7) list_medium_line_x2_g2_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00074436) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00074436) list_medium_line_x2_g

0x8d7f,	// (0x0006d473) list_medium_line_x2_t1_ParamLimits

0x8d7f,	// (0x0006d473) list_medium_line_x2_t1

0x12c7,	// (0x000659bb) list_medium_line_x3_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x3_g1

0x12d3,	// (0x000659c7) list_medium_line_x3_g2_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00074436) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00074436) list_medium_line_x3_g

0x8d7f,	// (0x0006d473) list_medium_line_x3_t1_ParamLimits

0x8d7f,	// (0x0006d473) list_medium_line_x3_t1

0xb436,	// (0x0006fb2a) thumb_sp_fs_scroll_pane_g1

0xb43f,	// (0x0006fb33) thumb_sp_fs_scroll_pane_g2

0xb448,	// (0x0006fb3c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007443b) thumb_sp_fs_scroll_pane_g

0xb436,	// (0x0006fb2a) bg_sp_fs_scroll_pane_g1

0xb43f,	// (0x0006fb33) bg_sp_fs_scroll_pane_g2

0xb448,	// (0x0006fb3c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007443b) bg_sp_fs_scroll_pane_g

0x12c7,	// (0x000659bb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12c7,	// (0x000659bb) list_medium_line_x2_t3_g4_g1

0x136e,	// (0x00065a62) list_medium_line_x2_t3_g4_g2_ParamLimits

0x136e,	// (0x00065a62) list_medium_line_x2_t3_g4_g2

0x12d3,	// (0x000659c7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12d3,	// (0x000659c7) list_medium_line_x2_t3_g4_g3

0x12df,	// (0x000659d3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x12df,	// (0x000659d3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000739b6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000739b6) list_medium_line_x2_t3_g4_g

0x8d95,	// (0x0006d489) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8d95,	// (0x0006d489) list_medium_line_x2_t3_g4_t1

0x8daf,	// (0x0006d4a3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8daf,	// (0x0006d4a3) list_medium_line_x2_t3_g4_t2

0x1314,	// (0x00065a08) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1314,	// (0x00065a08) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00074442) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00074442) list_medium_line_x2_t3_g4_t

0x65ad,	// (0x0006aca1) list_medium_line_g2_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_g2_g1

0x65b9,	// (0x0006acad) list_medium_line_g2_g2_ParamLimits

0x65b9,	// (0x0006acad) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000740f4) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000740f4) list_medium_line_g2_g

0x8dc9,	// (0x0006d4bd) list_medium_line_g2_t1_ParamLimits

0x8dc9,	// (0x0006d4bd) list_medium_line_g2_t1

0x65ad,	// (0x0006aca1) list_medium_line_t3_g2_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_t3_g2_g1

0x65b9,	// (0x0006acad) list_medium_line_t3_g2_g2_ParamLimits

0x65b9,	// (0x0006acad) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000740f4) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000740f4) list_medium_line_t3_g2_g

0x8dde,	// (0x0006d4d2) list_medium_line_t3_g2_t1_ParamLimits

0x8dde,	// (0x0006d4d2) list_medium_line_t3_g2_t1

0x8df8,	// (0x0006d4ec) list_medium_line_t3_g2_t2_ParamLimits

0x8df8,	// (0x0006d4ec) list_medium_line_t3_g2_t2

0x8e0e,	// (0x0006d502) list_medium_line_t3_g2_t3_ParamLimits

0x8e0e,	// (0x0006d502) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00074449) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00074449) list_medium_line_t3_g2_t

0x88c5,	// (0x0006cfb9) list_medium_line_right_icon_g1

0x8e28,	// (0x0006d51c) list_medium_line_right_icon_t1

0x65ad,	// (0x0006aca1) list_medium_line_t2_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_t2_g1

0x8e36,	// (0x0006d52a) list_medium_line_t2_t1_ParamLimits

0x8e36,	// (0x0006d52a) list_medium_line_t2_t1

0x8e50,	// (0x0006d544) list_medium_line_t2_t2_ParamLimits

0x8e50,	// (0x0006d544) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00074450) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00074450) list_medium_line_t2_t

0x65ad,	// (0x0006aca1) list_medium_line_t3_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_t3_g1

0x8e69,	// (0x0006d55d) list_medium_line_t3_t1_ParamLimits

0x8e69,	// (0x0006d55d) list_medium_line_t3_t1

0x8e83,	// (0x0006d577) list_medium_line_t3_t2_ParamLimits

0x8e83,	// (0x0006d577) list_medium_line_t3_t2

0x8e99,	// (0x0006d58d) list_medium_line_t3_t3_ParamLimits

0x8e99,	// (0x0006d58d) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00074455) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00074455) list_medium_line_t3_t

0x65ad,	// (0x0006aca1) list_medium_line_g3_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_g3_g1

0x8eae,	// (0x0006d5a2) list_medium_line_g3_g2_ParamLimits

0x8eae,	// (0x0006d5a2) list_medium_line_g3_g2

0x65b9,	// (0x0006acad) list_medium_line_g3_g3_ParamLimits

0x65b9,	// (0x0006acad) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007445c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007445c) list_medium_line_g3_g

0x8eba,	// (0x0006d5ae) list_medium_line_g3_t1_ParamLimits

0x8eba,	// (0x0006d5ae) list_medium_line_g3_t1

0x65ad,	// (0x0006aca1) list_medium_line_t2_g3_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_t2_g3_g1

0x8eae,	// (0x0006d5a2) list_medium_line_t2_g3_g2_ParamLimits

0x8eae,	// (0x0006d5a2) list_medium_line_t2_g3_g2

0x65b9,	// (0x0006acad) list_medium_line_t2_g3_g3_ParamLimits

0x65b9,	// (0x0006acad) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007445c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007445c) list_medium_line_t2_g3_g

0x8ecf,	// (0x0006d5c3) list_medium_line_t2_g3_t1_ParamLimits

0x8ecf,	// (0x0006d5c3) list_medium_line_t2_g3_t1

0x8ee9,	// (0x0006d5dd) list_medium_line_t2_g3_t2_ParamLimits

0x8ee9,	// (0x0006d5dd) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00074463) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00074463) list_medium_line_t2_g3_t

0x65ad,	// (0x0006aca1) list_medium_line_t3_g3_g1_ParamLimits

0x65ad,	// (0x0006aca1) list_medium_line_t3_g3_g1

0x8eae,	// (0x0006d5a2) list_medium_line_t3_g3_g2_ParamLimits

0x8eae,	// (0x0006d5a2) list_medium_line_t3_g3_g2

0x65b9,	// (0x0006acad) list_medium_line_t3_g3_g3_ParamLimits

0x65b9,	// (0x0006acad) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007445c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007445c) list_medium_line_t3_g3_g

0x8f07,	// (0x0006d5fb) list_medium_line_t3_g3_t1_ParamLimits

0x8f07,	// (0x0006d5fb) list_medium_line_t3_g3_t1

0x8f20,	// (0x0006d614) list_medium_line_t3_g3_t2_ParamLimits

0x8f20,	// (0x0006d614) list_medium_line_t3_g3_t2

0x8f36,	// (0x0006d62a) list_medium_line_t3_g3_t3_ParamLimits

0x8f36,	// (0x0006d62a) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00074468) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00074468) list_medium_line_t3_g3_t

0x8aee,	// (0x0006d1e2) list_medium_line_right_iconx2_g1

0x88c5,	// (0x0006cfb9) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007446f) list_medium_line_right_iconx2_g

0x8f50,	// (0x0006d644) list_medium_line_right_iconx2_t1

0x8aee,	// (0x0006d1e2) list_medium_line_t2_right_iconx2_g1

0x88c5,	// (0x0006cfb9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007446f) list_medium_line_t2_right_iconx2_g

0x8f5e,	// (0x0006d652) list_medium_line_t2_right_iconx2_t1

0x8f6e,	// (0x0006d662) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00074474) list_medium_line_t2_right_iconx2_t

0x8f80,	// (0x0006d674) list_medium_line_x4_t4_t1

0x8f8e,	// (0x0006d682) list_medium_line_x4_t4_t2

0x8f9e,	// (0x0006d692) list_medium_line_x4_t4_t3

0x8fae,	// (0x0006d6a2) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00074479) list_medium_line_x4_t4_t

0x9001,	// (0x0006d6f5) tport_appsw_pane_ParamLimits

0x9001,	// (0x0006d6f5) tport_appsw_pane

0x9019,	// (0x0006d70d) tport_contact_pane_ParamLimits

0x9019,	// (0x0006d70d) tport_contact_pane

0x9031,	// (0x0006d725) tport_listscroll_pane_ParamLimits

0x9031,	// (0x0006d725) tport_listscroll_pane

0x904b,	// (0x0006d73f) cell_tport_appsw_pane_ParamLimits

0x904b,	// (0x0006d73f) cell_tport_appsw_pane

0xee16,	// (0x0007350a) tport_appsw_pane_g1_ParamLimits

0xee16,	// (0x0007350a) tport_appsw_pane_g1

0xb451,	// (0x0006fb45) tport_contact_pane_g1

0x7f70,	// (0x0006c664) tport_contact_pane_t1

0xb45a,	// (0x0006fb4e) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00074482) tport_contact_pane_t

0xb468,	// (0x0006fb5c) list_tport_pane

0xb471,	// (0x0006fb65) scroll_pane_cp_030

0x9093,	// (0x0006d787) cell_tport_appsw_pane_g1

0x90a3,	// (0x0006d797) cell_tport_appsw_pane_t1

0x90b1,	// (0x0006d7a5) grid_highlight_pane_cp019

0x90b9,	// (0x0006d7ad) list_tport_double_graphic_pane_ParamLimits

0x90b9,	// (0x0006d7ad) list_tport_double_graphic_pane

0xdf5c,	// (0x00072650) list_highlight_pane_cp023_ParamLimits

0xdf5c,	// (0x00072650) list_highlight_pane_cp023

0x90c6,	// (0x0006d7ba) list_tport_double_graphic_pane_g1_ParamLimits

0x90c6,	// (0x0006d7ba) list_tport_double_graphic_pane_g1

0x90d3,	// (0x0006d7c7) list_tport_double_graphic_pane_t1_ParamLimits

0x90d3,	// (0x0006d7c7) list_tport_double_graphic_pane_t1

0x90e8,	// (0x0006d7dc) list_tport_double_graphic_pane_t2_ParamLimits

0x90e8,	// (0x0006d7dc) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007448e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007448e) list_tport_double_graphic_pane_t

0xa3d2,	// (0x0006eac6) main_cale_note_pane

0x5d71,	// (0x0006a465) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d71,	// (0x0006a465) cell_vitu2_function_top_wide_pane_cp01

0x8314,	// (0x0006ca08) wait_bar_pane_cp05_ParamLimits

0xdf5c,	// (0x00072650) listscroll_cmail_pane

0xb47a,	// (0x0006fb6e) list_cmail_pane

0x90fa,	// (0x0006d7ee) list_cmail_body_pane

0x910f,	// (0x0006d803) list_single_cmail_header_caption_pane

0x9125,	// (0x0006d819) list_single_cmail_header_detail_pane_ParamLimits

0x9125,	// (0x0006d819) list_single_cmail_header_detail_pane

0xb48a,	// (0x0006fb7e) list_single_cmail_header_caption_pane_t1

0x914e,	// (0x0006d842) list_single_cmail_header_detail_pane_g1_ParamLimits

0x914e,	// (0x0006d842) list_single_cmail_header_detail_pane_g1

0x9166,	// (0x0006d85a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9166,	// (0x0006d85a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00074493) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00074493) list_single_cmail_header_detail_pane_g

0x9172,	// (0x0006d866) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9172,	// (0x0006d866) list_single_cmail_header_detail_pane_t1

0x91d2,	// (0x0006d8c6) list_single_cmail_header_editor_pane_bg_ParamLimits

0x91d2,	// (0x0006d8c6) list_single_cmail_header_editor_pane_bg

0x8180,	// (0x0006c874) list_cmail_body_pane_g1

0xb4ae,	// (0x0006fba2) list_cmail_body_pane_t1

0xee53,	// (0x00073547) list_single_cmail_header_editor_pane_bg_g1

0xc2f9,	// (0x000709ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0xee63,	// (0x00073557) list_single_cmail_header_editor_pane_bg_g1_copy2

0xee5b,	// (0x0007354f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xf0a7,	// (0x0007379b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xee83,	// (0x00073577) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xee73,	// (0x00073567) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xee7b,	// (0x0007356f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc2d9,	// (0x000709cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x91e9,	// (0x0006d8dd) calenote_gesture_pane_ParamLimits

0x91e9,	// (0x0006d8dd) calenote_gesture_pane

0x9209,	// (0x0006d8fd) calenote_window_pane_ParamLimits

0x9209,	// (0x0006d8fd) calenote_window_pane

0xb4bc,	// (0x0006fbb0) popup_note_window_cp01

0x9225,	// (0x0006d919) calenote_swipe_1_pane_ParamLimits

0x9225,	// (0x0006d919) calenote_swipe_1_pane

0x8867,	// (0x0006cf5b) calenote_swipe_2_pane_ParamLimits

0x8867,	// (0x0006cf5b) calenote_swipe_2_pane

0xb2d7,	// (0x0006f9cb) calenote_swipe_1_pane_g1_ParamLimits

0xb2d7,	// (0x0006f9cb) calenote_swipe_1_pane_g1

0xb2e4,	// (0x0006f9d8) calenote_swipe_1_pane_g2_ParamLimits

0xb2e4,	// (0x0006f9d8) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000743b7) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000743b7) calenote_swipe_1_pane_g

0xb4ce,	// (0x0006fbc2) calenote_swipe_1_pane_t1_ParamLimits

0xb4ce,	// (0x0006fbc2) calenote_swipe_1_pane_t1

0xb2d7,	// (0x0006f9cb) calenote_swipe_2_pane_g1_ParamLimits

0xb2d7,	// (0x0006f9cb) calenote_swipe_2_pane_g1

0xb4ed,	// (0x0006fbe1) calenote_swipe_2_pane_g2_ParamLimits

0xb4ed,	// (0x0006fbe1) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007449f) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007449f) calenote_swipe_2_pane_g

0xb4f9,	// (0x0006fbed) calenote_swipe_2_pane_t1_ParamLimits

0xb4f9,	// (0x0006fbed) calenote_swipe_2_pane_t1

0xa3d2,	// (0x0006eac6) main_mup_navstr_pane

0x4a34,	// (0x00069128) main_mup3_pane_t7_ParamLimits

0x4a34,	// (0x00069128) main_mup3_pane_t7

0xacca,	// (0x0006f3be) main_mp4_pane_g6_ParamLimits

0xacca,	// (0x0006f3be) main_mp4_pane_g6

0xae6e,	// (0x0006f562) main_image3_pane_t4_ParamLimits

0xae6e,	// (0x0006f562) main_image3_pane_t4

0x923a,	// (0x0006d92e) popup_navstr_preview_pane_ParamLimits

0x923a,	// (0x0006d92e) popup_navstr_preview_pane

0x924e,	// (0x0006d942) scroll_navstr_pane_ParamLimits

0x924e,	// (0x0006d942) scroll_navstr_pane

0xa3d2,	// (0x0006eac6) bg_popup_preview_window_pane_cp04

0xb520,	// (0x0006fc14) popup_navstr_preview_pane_t1

0x9262,	// (0x0006d956) scroll_navstr_pane_g1_ParamLimits

0x9262,	// (0x0006d956) scroll_navstr_pane_g1

0x9276,	// (0x0006d96a) scroll_navstr_pane_t1_ParamLimits

0x9276,	// (0x0006d96a) scroll_navstr_pane_t1

0xb4c5,	// (0x0006fbb9) bg_button_pane_cp014

0xb4c5,	// (0x0006fbb9) bg_button_pane_cp030

0x8705,	// (0x0006cdf9) list_double_fisheye_pane_g4_ParamLimits

0x8705,	// (0x0006cdf9) list_double_fisheye_pane_g4

0x8711,	// (0x0006ce05) list_double_fisheye_pane_g5_ParamLimits

0x8711,	// (0x0006ce05) list_double_fisheye_pane_g5

0xd695,	// (0x00071d89) sp_fs_scroll_pane_cp03

0xb3ca,	// (0x0006fabe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb3d6,	// (0x0006faca) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000743d4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb3e2,	// (0x0006fad6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb482,	// (0x0006fb76) sp_fs_scroll_pane_cp02

0xbfdf,	// (0x000706d3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbfdf,	// (0x000706d3) popup_sp_fs_calendar_preview_list_single_pane

0xa3d2,	// (0x0006eac6) main_cam6_pano_pane

0xa44a,	// (0x0006eb3e) main_mup3_pane_ParamLimits

0xa3d2,	// (0x0006eac6) main_phacti_pane

0x81e7,	// (0x0006c8db) bg_button_pane_cp11

0x8201,	// (0x0006c8f5) main_mobtv_info_pane_g2_ParamLimits

0x8201,	// (0x0006c8f5) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00074334) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00074334) main_mobtv_info_pane_g

0x8484,	// (0x0006cb78) sc_clock_pane_t5_ParamLimits

0x8484,	// (0x0006cb78) sc_clock_pane_t5

0x8567,	// (0x0006cc5b) main_radioblah_pane_g1_ParamLimits

0xb223,	// (0x0006f917) main_radioblah_pane_t3_ParamLimits

0xb223,	// (0x0006f917) main_radioblah_pane_t3

0xb23b,	// (0x0006f92f) main_radioblah_pane_t4_ParamLimits

0xb23b,	// (0x0006f92f) main_radioblah_pane_t4

0x858f,	// (0x0006cc83) main_radioblah_text_pane_ParamLimits

0x858f,	// (0x0006cc83) main_radioblah_text_pane

0x85a1,	// (0x0006cc95) main_radioblah_info_pane_g1_ParamLimits

0x863a,	// (0x0006cd2e) main_radioblah_info_pane_t4_ParamLimits

0x863a,	// (0x0006cd2e) main_radioblah_info_pane_t4

0xdf5c,	// (0x00072650) main_sp_fs_calendar_pane

0x928d,	// (0x0006d981) main_phacti_pane_g1

0x9295,	// (0x0006d989) phacti_note_pane_ParamLimits

0x9295,	// (0x0006d989) phacti_note_pane

0xb537,	// (0x0006fc2b) phacti_term_pane_ParamLimits

0xb537,	// (0x0006fc2b) phacti_term_pane

0xb54c,	// (0x0006fc40) phacti_note_pane_t1_ParamLimits

0xb54c,	// (0x0006fc40) phacti_note_pane_t1

0x92a9,	// (0x0006d99d) phacti_term_pane_g1

0x92b1,	// (0x0006d9a5) phacti_term_pane_t1_ParamLimits

0x92b1,	// (0x0006d9a5) phacti_term_pane_t1

0xb563,	// (0x0006fc57) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc07e,	// (0x00070772) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000744a9) popup_sp_fs_calendar_preview_list_single_pane_g

0xb56b,	// (0x0006fc5f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb56b,	// (0x0006fc5f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb581,	// (0x0006fc75) aid_popup_sp_fs_bg_corner_pane

0xe36d,	// (0x00072a61) popup_sp_fs_calendar_preview_bg_pane_g1

0xa3d2,	// (0x0006eac6) popup_sp_fs_calendar_preview_bg_pane

0xb589,	// (0x0006fc7d) popup_sp_fs_calendar_preview_list_pane

0xdf4e,	// (0x00072642) bg_main_sp_fs_cale_pane_ParamLimits

0xdf4e,	// (0x00072642) bg_main_sp_fs_cale_pane

0x9345,	// (0x0006da39) listscroll_cale_mrui_pane_ParamLimits

0x9345,	// (0x0006da39) listscroll_cale_mrui_pane

0x935a,	// (0x0006da4e) listscroll_sp_fs_schedule_track_pane

0x9363,	// (0x0006da57) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9363,	// (0x0006da57) main_sp_fs_ctrlbar_pane_cp01

0xb591,	// (0x0006fc85) main_sp_fs_ribbon_pane

0x9376,	// (0x0006da6a) popup_sp_fs_cale_preview_window

0x9388,	// (0x0006da7c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9388,	// (0x0006da7c) list_single_sp_fs_schedule_track_pane

0xdf5c,	// (0x00072650) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdf5c,	// (0x00072650) bg_sp_fs_highlight_list_pane_cp03

0x939b,	// (0x0006da8f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x939b,	// (0x0006da8f) list_single_sp_fs_schedule_track_pane_g1

0x93a7,	// (0x0006da9b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x93a7,	// (0x0006da9b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000744ae) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000744ae) list_single_sp_fs_schedule_track_pane_g

0x93b3,	// (0x0006daa7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x93b3,	// (0x0006daa7) list_single_sp_fs_schedule_track_pane_t1

0x93cd,	// (0x0006dac1) sp_fs_schedule_track_pane_ParamLimits

0x93cd,	// (0x0006dac1) sp_fs_schedule_track_pane

0xb599,	// (0x0006fc8d) sp_fs_schedule_track_pane_g1

0xb5a1,	// (0x0006fc95) sp_fs_schedule_track_pane_g2

0xb5a9,	// (0x0006fc9d) sp_fs_schedule_track_pane_g3

0xb5b1,	// (0x0006fca5) sp_fs_schedule_track_pane_g4

0xb5b9,	// (0x0006fcad) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000744b3) sp_fs_schedule_track_pane_g

0xee53,	// (0x00073547) bg_sp_fs_schedule_viewer_highlight_g1

0xc2f9,	// (0x000709ed) bg_sp_fs_schedule_viewer_highlight_g2

0xee5b,	// (0x0007354f) bg_sp_fs_schedule_viewer_highlight_g3

0xee63,	// (0x00073557) bg_sp_fs_schedule_viewer_highlight_g4

0xf0a7,	// (0x0007379b) bg_sp_fs_schedule_viewer_highlight_g5

0xee73,	// (0x00073567) bg_sp_fs_schedule_viewer_highlight_g6

0xee7b,	// (0x0007356f) bg_sp_fs_schedule_viewer_highlight_g7

0xee83,	// (0x00073577) bg_sp_fs_schedule_viewer_highlight_g8

0xc2d9,	// (0x000709cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000744be) bg_sp_fs_schedule_viewer_highlight_g

0xa3d2,	// (0x0006eac6) bg_main_sp_fs_ribbon_pane

0x93de,	// (0x0006dad2) main_sp_fs_ribbon_pane_g1

0xb5c1,	// (0x0006fcb5) main_sp_fs_ribbon_pane_t1

0x93e7,	// (0x0006dadb) main_sp_fs_ribbon_pane_t2

0xb5d0,	// (0x0006fcc4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000744d1) main_sp_fs_ribbon_pane_t

0xb5df,	// (0x0006fcd3) main_sp_fs_ribbon_scheduler_pane

0xb5e7,	// (0x0006fcdb) bg_main_sp_fs_ribbon_pane_g1

0xb5f0,	// (0x0006fce4) bg_main_sp_fs_ribbon_pane_g2

0xb5f9,	// (0x0006fced) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000744d8) bg_main_sp_fs_ribbon_pane_g

0xb601,	// (0x0006fcf5) main_sp_fs_ribbon_scheduler_pane_g1

0xb60a,	// (0x0006fcfe) main_sp_fs_ribbon_scheduler_pane_g2

0xb613,	// (0x0006fd07) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000744df) main_sp_fs_ribbon_scheduler_pane_g

0xb61c,	// (0x0006fd10) list_cale_mrui_pane

0x93f6,	// (0x0006daea) sp_fs_scroll_pane_cp07_ParamLimits

0x93f6,	// (0x0006daea) sp_fs_scroll_pane_cp07

0x9412,	// (0x0006db06) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9412,	// (0x0006db06) bg_sp_fs_schedule_viewer_highlight

0xb629,	// (0x0006fd1d) list_single_sp_fs_schedule_track_pane_cp01

0xb631,	// (0x0006fd25) list_sp_fs_schedule_track_pane

0xb639,	// (0x0006fd2d) sp_fs_scroll_pane_cp06_ParamLimits

0xb639,	// (0x0006fd2d) sp_fs_scroll_pane_cp06

0xe36d,	// (0x00072a61) bgmain_sp_fs_calendar_pane_g1

0x9422,	// (0x0006db16) list_single_cale_mrui_pane_ParamLimits

0x9422,	// (0x0006db16) list_single_cale_mrui_pane

0x9443,	// (0x0006db37) list_single_cale_mrui_row_pane_ParamLimits

0x9443,	// (0x0006db37) list_single_cale_mrui_row_pane

0x9450,	// (0x0006db44) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9450,	// (0x0006db44) list_single_cale_mrui_row_pane_g1

0x9488,	// (0x0006db7c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x9488,	// (0x0006db7c) list_single_cale_mrui_row_pane_t1

0x949a,	// (0x0006db8e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x949a,	// (0x0006db8e) list_single_cale_mrui_row_pane_t2

0x9502,	// (0x0006dbf6) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9502,	// (0x0006dbf6) list_single_cale_mrui_row_pane_t3

0x9531,	// (0x0006dc25) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9531,	// (0x0006dc25) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000744ed) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000744ed) list_single_cale_mrui_row_pane_t

0x9560,	// (0x0006dc54) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9560,	// (0x0006dc54) list_single_cmail_header_editor_pane_bg_cp01

0x9586,	// (0x0006dc7a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9586,	// (0x0006dc7a) list_single_cmail_header_editor_pane_bg_cp02

0x95a6,	// (0x0006dc9a) main_radioblah_text_pane_t1_ParamLimits

0x95a6,	// (0x0006dc9a) main_radioblah_text_pane_t1

0xb658,	// (0x0006fd4c) cam6_indi_pane_cp01

0xb660,	// (0x0006fd54) cam6_mode_pane_cp01

0xb668,	// (0x0006fd5c) cam6_pano_pane

0xb671,	// (0x0006fd65) cam6_zoom_pane_cp01

0xb679,	// (0x0006fd6d) cam6_pano_image_pane

0xb684,	// (0x0006fd78) cam6_pano_pane_g1

0x8180,	// (0x0006c874) cam6_pano_pane_g2

0xb68d,	// (0x0006fd81) cam6_pano_pane_g3

0xb696,	// (0x0006fd8a) cam6_pano_pane_g4

0xe998,	// (0x0007308c) cam6_pano_pane_g5

0xb69f,	// (0x0006fd93) cam6_pano_pane_g6

0xb6a9,	// (0x0006fd9d) cam6_pano_pane_g7

0xb6b1,	// (0x0006fda5) cam6_pano_pane_g8

0xb6ba,	// (0x0006fdae) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000744f6) cam6_pano_pane_g

0xa3d2,	// (0x0006eac6) main_browser_tag_pane

0xb518,	// (0x0006fc0c) grid_navstr_albumart_pane

0xb6c5,	// (0x0006fdb9) cell_navstr_albumart_pane_ParamLimits

0xb6c5,	// (0x0006fdb9) cell_navstr_albumart_pane

0xb6e5,	// (0x0006fdd9) cell_navstr_albumart_pane_g1

0xdd5f,	// (0x00072453) cell_navstr_albumart_pane_g2

0xdd6f,	// (0x00072463) cell_navstr_albumart_pane_g3

0xdd67,	// (0x0007245b) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00074509) cell_navstr_albumart_pane_g

0x95c0,	// (0x0006dcb4) bt_list_pane_ParamLimits

0x95c0,	// (0x0006dcb4) bt_list_pane

0x95d4,	// (0x0006dcc8) bt_list_pane_t1

0x95e3,	// (0x0006dcd7) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00074512) bt_list_pane_t

0xa3d2,	// (0x0006eac6) main_cale_prevew_pane

0x95f2,	// (0x0006dce6) popup_cale_preview_window_ParamLimits

0x95f2,	// (0x0006dce6) popup_cale_preview_window

0xdf5c,	// (0x00072650) bg_popup_preview_window_pane_cp05_ParamLimits

0xdf5c,	// (0x00072650) bg_popup_preview_window_pane_cp05

0xb6ed,	// (0x0006fde1) list_cale_preview_pane_ParamLimits

0xb6ed,	// (0x0006fde1) list_cale_preview_pane

0x960d,	// (0x0006dd01) list_double_cale_preview_pane_ParamLimits

0x960d,	// (0x0006dd01) list_double_cale_preview_pane

0x961f,	// (0x0006dd13) list_single_cale_preview_pane_ParamLimits

0x961f,	// (0x0006dd13) list_single_cale_preview_pane

0x9635,	// (0x0006dd29) list_single_cale_preview_pane_g1

0x963d,	// (0x0006dd31) list_single_cale_preview_pane_t1_ParamLimits

0x963d,	// (0x0006dd31) list_single_cale_preview_pane_t1

0x9652,	// (0x0006dd46) list_double_cale_preview_pane_g1

0x965a,	// (0x0006dd4e) list_double_cale_preview_pane_t1_ParamLimits

0x965a,	// (0x0006dd4e) list_double_cale_preview_pane_t1

0x966f,	// (0x0006dd63) list_double_cale_preview_pane_t2_ParamLimits

0x966f,	// (0x0006dd63) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00074517) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00074517) list_double_cale_preview_pane_t

0xa3d2,	// (0x0006eac6) main_ezdial_pane

0xdf5c,	// (0x00072650) main_sp_fs_email_pane_ParamLimits

0x88ef,	// (0x0006cfe3) cmail_ddmenu_btn01_pane_ParamLimits

0x88ef,	// (0x0006cfe3) cmail_ddmenu_btn01_pane

0x8902,	// (0x0006cff6) cmail_ddmenu_btn02_pane_ParamLimits

0x8902,	// (0x0006cff6) cmail_ddmenu_btn02_pane

0x8925,	// (0x0006d019) cmail_ddmenu_btn03_pane_ParamLimits

0x8925,	// (0x0006d019) cmail_ddmenu_btn03_pane

0x894b,	// (0x0006d03f) main_sp_fs_ctrlbar_pane_ParamLimits

0x896f,	// (0x0006d063) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x90fa,	// (0x0006d7ee) list_cmail_body_pane_ParamLimits

0xb498,	// (0x0006fb8c) bg_button_pane_cp12

0xb4a1,	// (0x0006fb95) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb4a1,	// (0x0006fb95) list_single_cmail_header_detail_pane_g3

0x91ae,	// (0x0006d8a2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x91ae,	// (0x0006d8a2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007449a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007449a) list_single_cmail_header_detail_pane_t

0x92c6,	// (0x0006d9ba) phacti_term_pane_t2_ParamLimits

0x92c6,	// (0x0006d9ba) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000744a4) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000744a4) phacti_term_pane_t

0xb6f9,	// (0x0006fded) aid_size_list_single_double

0x9687,	// (0x0006dd7b) popup_ezdial_listscroll_window

0x96a3,	// (0x0006dd97) popup_number_entry_window_cp01

0xc0a0,	// (0x00070794) bg_popup_call_pane_cp09

0xb705,	// (0x0006fdf9) ezdial_list_pane

0xb70d,	// (0x0006fe01) scroll_pane_cp23

0xdf4e,	// (0x00072642) bg_button_pane_cp028_ParamLimits

0xdf4e,	// (0x00072642) bg_button_pane_cp028

0x96b1,	// (0x0006dda5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96b1,	// (0x0006dda5) cmail_ddmenu_btn01_pane_g1

0x96bd,	// (0x0006ddb1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x96bd,	// (0x0006ddb1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007451c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007451c) cmail_ddmenu_btn01_pane_g

0xb715,	// (0x0006fe09) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb715,	// (0x0006fe09) cmail_ddmenu_btn01_pane_t1

0xdf4e,	// (0x00072642) bg_button_pane_cp029_ParamLimits

0xdf4e,	// (0x00072642) bg_button_pane_cp029

0x96c9,	// (0x0006ddbd) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x96c9,	// (0x0006ddbd) cmail_ddmenu_btn02_pane_g1

0x96e2,	// (0x0006ddd6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x96e2,	// (0x0006ddd6) cmail_ddmenu_btn02_pane_t1

0xdf5c,	// (0x00072650) bg_button_pane_cp031_ParamLimits

0xdf5c,	// (0x00072650) bg_button_pane_cp031

0x96c9,	// (0x0006ddbd) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x96c9,	// (0x0006ddbd) cmail_ddmenu_btn03_pane_g1

0x96e2,	// (0x0006ddd6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x96e2,	// (0x0006ddd6) cmail_ddmenu_btn03_pane_t1

0x55e8,	// (0x00069cdc) cell_dialer2_keypad_pane_t1_ParamLimits

0x5602,	// (0x00069cf6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5602,	// (0x00069cf6) cell_dialer2_keypad_pane_t1_copy1

0x7d82,	// (0x0006c476) ncimui_group_button_pane

0xdf5c,	// (0x00072650) main_sp_fs_calendar_pane_ParamLimits

0x910f,	// (0x0006d803) list_single_cmail_header_caption_pane_ParamLimits

0x92f9,	// (0x0006d9ed) aid_recal_txt_sm_pane

0xa3d2,	// (0x0006eac6) mian_recal_day_pane

0x9376,	// (0x0006da6a) popup_sp_fs_cale_preview_window_ParamLimits

0xb72a,	// (0x0006fe1e) list_recal_day_pane

0x9721,	// (0x0006de15) list_single_recal_day_pane_ParamLimits

0x9721,	// (0x0006de15) list_single_recal_day_pane

0xb751,	// (0x0006fe45) list_single_recal_day_pane_g1_ParamLimits

0xb751,	// (0x0006fe45) list_single_recal_day_pane_g1

0x9733,	// (0x0006de27) list_single_recal_day_pane_g2_ParamLimits

0x9733,	// (0x0006de27) list_single_recal_day_pane_g2

0x973f,	// (0x0006de33) list_single_recal_day_pane_g3_ParamLimits

0x973f,	// (0x0006de33) list_single_recal_day_pane_g3

0x974b,	// (0x0006de3f) list_single_recal_day_pane_g4_ParamLimits

0x974b,	// (0x0006de3f) list_single_recal_day_pane_g4

0x9759,	// (0x0006de4d) list_single_recal_day_pane_g5_ParamLimits

0x9759,	// (0x0006de4d) list_single_recal_day_pane_g5

0x976f,	// (0x0006de63) list_single_recal_day_pane_g6_ParamLimits

0x976f,	// (0x0006de63) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007452b) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007452b) list_single_recal_day_pane_g

0x9783,	// (0x0006de77) list_single_recal_day_pane_t1

0x9795,	// (0x0006de89) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00074536) list_single_recal_day_pane_t

0x97a7,	// (0x0006de9b) ncimui_query_button_pane_ParamLimits

0x97a7,	// (0x0006de9b) ncimui_query_button_pane

0x97b7,	// (0x0006deab) ncimui_query_button_pane_t1_ParamLimits

0x97b7,	// (0x0006deab) ncimui_query_button_pane_t1

0xb75d,	// (0x0006fe51) ncimui_query_button_pane_t2_ParamLimits

0xb75d,	// (0x0006fe51) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007453b) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007453b) ncimui_query_button_pane_t

0x97ca,	// (0x0006debe) query_button_pane_ParamLimits

0x97ca,	// (0x0006debe) query_button_pane

0xa3d2,	// (0x0006eac6) bg_button_pane_cp0028

0xb770,	// (0x0006fe64) query_button_pane_t1

0x368b,	// (0x00067d7f) main_tport_pane_ParamLimits

0x8fbe,	// (0x0006d6b2) bg_popup_window_pane_cp01_ParamLimits

0x8fbe,	// (0x0006d6b2) bg_popup_window_pane_cp01

0x8fd9,	// (0x0006d6cd) heading_pane_cp08_ParamLimits

0x8fd9,	// (0x0006d6cd) heading_pane_cp08

0x8fec,	// (0x0006d6e0) heading_pane_cp07_ParamLimits

0x8fec,	// (0x0006d6e0) heading_pane_cp07

0x9093,	// (0x0006d787) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00074487) cell_tport_appsw_pane_g

0xd6a1,	// (0x00071d95) input_candi_list_open_g1

0xc4bc,	// (0x00070bb0) list_cale_time_pane_g6_ParamLimits

0xc4bc,	// (0x00070bb0) list_cale_time_pane_g6

0x445c,	// (0x00068b50) aid_size_touch_calib_1_ParamLimits

0x445c,	// (0x00068b50) aid_size_touch_calib_1

0x446e,	// (0x00068b62) aid_size_touch_calib_2_ParamLimits

0x446e,	// (0x00068b62) aid_size_touch_calib_2

0x4486,	// (0x00068b7a) aid_size_touch_calib_3_ParamLimits

0x4486,	// (0x00068b7a) aid_size_touch_calib_3

0x44a4,	// (0x00068b98) aid_size_touch_calib_4_ParamLimits

0x44a4,	// (0x00068b98) aid_size_touch_calib_4

0x44bc,	// (0x00068bb0) main_touch_calib_button_group_pane_ParamLimits

0x44bc,	// (0x00068bb0) main_touch_calib_button_group_pane

0x44d4,	// (0x00068bc8) main_touch_calib_pane_g1_ParamLimits

0x44e6,	// (0x00068bda) main_touch_calib_pane_g2_ParamLimits

0x44f8,	// (0x00068bec) main_touch_calib_pane_g3_ParamLimits

0x450a,	// (0x00068bfe) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x00073e45) main_touch_calib_pane_g_ParamLimits

0x451c,	// (0x00068c10) main_touch_calib_pane_t1_ParamLimits

0x4536,	// (0x00068c2a) main_touch_calib_pane_t2_ParamLimits

0x4550,	// (0x00068c44) main_touch_calib_pane_t3_ParamLimits

0x4564,	// (0x00068c58) main_touch_calib_pane_t4_ParamLimits

0x4578,	// (0x00068c6c) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x00073e4e) main_touch_calib_pane_t_ParamLimits

0xe738,	// (0x00072e2c) list_single_fp_cale_pane_g3_ParamLimits

0xe738,	// (0x00072e2c) list_single_fp_cale_pane_g3

0xa44a,	// (0x0006eb3e) bg_button_pane_cp012_ParamLimits

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp03_ParamLimits

0x6563,	// (0x0006ac57) cell_vitu2_function_top_pane_g1_ParamLimits

0xa44a,	// (0x0006eb3e) bg_vkb2_func_pane_cp04_ParamLimits

0x7d0d,	// (0x0006c401) main_ncimui_button_group_pane_ParamLimits

0x7d0d,	// (0x0006c401) main_ncimui_button_group_pane

0x7d6d,	// (0x0006c461) main_ncimui_pane_t3_ParamLimits

0x7d6d,	// (0x0006c461) main_ncimui_pane_t3

0xb52e,	// (0x0006fc22) phacti_button_group_pane

0xb6f9,	// (0x0006fded) aid_size_list_single_double_ParamLimits

0x9687,	// (0x0006dd7b) popup_ezdial_listscroll_window_ParamLimits

0x96a3,	// (0x0006dd97) popup_number_entry_window_cp01_ParamLimits

0x97dd,	// (0x0006ded1) phacti_button_pane_ParamLimits

0x97dd,	// (0x0006ded1) phacti_button_pane

0xa3d2,	// (0x0006eac6) bg_button_pane_cp14

0xb77e,	// (0x0006fe72) phacti_button_pane_t1

0x97ee,	// (0x0006dee2) main_touch_calib_button_pane_ParamLimits

0x97ee,	// (0x0006dee2) main_touch_calib_button_pane

0xbedb,	// (0x000705cf) bg_button_pane_cp18_ParamLimits

0xbedb,	// (0x000705cf) bg_button_pane_cp18

0xb78c,	// (0x0006fe80) main_touch_calib_button_pane_t1_ParamLimits

0xb78c,	// (0x0006fe80) main_touch_calib_button_pane_t1

0xb7a2,	// (0x0006fe96) main_touch_calib_button_pane_t2_ParamLimits

0xb7a2,	// (0x0006fe96) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00074540) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00074540) main_touch_calib_button_pane_t

0xa3d2,	// (0x0006eac6) cell_ncimui_button_pane

0xa3d2,	// (0x0006eac6) bg_button_pane_cp032

0xb7c0,	// (0x0006feb4) cell_ncimui_button_pane_t1

0xae4e,	// (0x0006f542) image3_infobar_pane_ParamLimits

0xae4e,	// (0x0006f542) image3_infobar_pane

0x84b0,	// (0x0006cba4) fs_bigclock_status_pane_ParamLimits

0x84b0,	// (0x0006cba4) fs_bigclock_status_pane

0x84bd,	// (0x0006cbb1) main_fs_bigclock_clock_pane_ParamLimits

0x84bd,	// (0x0006cbb1) main_fs_bigclock_clock_pane

0x84db,	// (0x0006cbcf) main_fs_bigclock_indi_pane_ParamLimits

0x84db,	// (0x0006cbcf) main_fs_bigclock_indi_pane

0x850d,	// (0x0006cc01) main_fs_bigclock_swipe_pane_ParamLimits

0x850d,	// (0x0006cc01) main_fs_bigclock_swipe_pane

0xa3d2,	// (0x0006eac6) main_fs_clock_dumped_data

0x854c,	// (0x0006cc40) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x854c,	// (0x0006cc40) list_single_fs_bigclock_indicator_pane_g1

0xb0ae,	// (0x0006f7a2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb0ae,	// (0x0006f7a2) list_single_fs_bigclock_indicator_pane_g2

0xb0c8,	// (0x0006f7bc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb0c8,	// (0x0006f7bc) list_single_fs_bigclock_indicator_pane_g3

0xb0e2,	// (0x0006f7d6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb0e2,	// (0x0006f7d6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00074368) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00074368) list_single_fs_bigclock_indicator_pane_g

0xb10d,	// (0x0006f801) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb10d,	// (0x0006f801) list_single_fs_bigclock_indicator_pane_t1

0xb135,	// (0x0006f829) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb135,	// (0x0006f829) list_single_fs_bigclock_indicator_pane_t2

0xb15d,	// (0x0006f851) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb15d,	// (0x0006f851) list_single_fs_bigclock_indicator_pane_t3

0xb185,	// (0x0006f879) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb185,	// (0x0006f879) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00074373) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00074373) list_single_fs_bigclock_indicator_pane_t

0xb7ce,	// (0x0006fec2) image3_infobar_fav_pane_ParamLimits

0xb7ce,	// (0x0006fec2) image3_infobar_fav_pane

0xb7de,	// (0x0006fed2) image3_infobar_loc_pane_ParamLimits

0xb7de,	// (0x0006fed2) image3_infobar_loc_pane

0xb7f2,	// (0x0006fee6) image3_infobar_time_pane_ParamLimits

0xb7f2,	// (0x0006fee6) image3_infobar_time_pane

0xe36d,	// (0x00072a61) image3_infobar_time_pane_g1

0xb802,	// (0x0006fef6) image3_infobar_time_pane_t1

0xe36d,	// (0x00072a61) image3_infobar_loc_pane_g1

0xb810,	// (0x0006ff04) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00074545) image3_infobar_loc_pane_g

0xb818,	// (0x0006ff0c) image3_infobar_loc_pane_t1

0xe36d,	// (0x00072a61) image3_infobar_fav_pane_g1

0xb826,	// (0x0006ff1a) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007454a) image3_infobar_fav_pane_g

0xb82e,	// (0x0006ff22) fs_bigclock_status_battery_pane

0xb837,	// (0x0006ff2b) fs_bigclock_status_signal_pane

0xb840,	// (0x0006ff34) fs_bigclock_status_title_pane

0xb849,	// (0x0006ff3d) fs_bigclock_status_signal_pane_g1

0xb852,	// (0x0006ff46) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007454f) fs_bigclock_status_signal_pane_g

0xb85a,	// (0x0006ff4e) fs_bigclock_status_battery_pane_g1

0xb863,	// (0x0006ff57) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00074554) fs_bigclock_status_battery_pane_g

0xb86b,	// (0x0006ff5f) fs_bigclock_status_title_pane_t1

0x9803,	// (0x0006def7) main_fs_bigclock_clock_pane_g1

0x9803,	// (0x0006def7) main_fs_bigclock_clock_pane_g2

0x9814,	// (0x0006df08) main_fs_bigclock_clock_pane_g3

0x9814,	// (0x0006df08) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00074559) main_fs_bigclock_clock_pane_g

0x9827,	// (0x0006df1b) main_fs_bigclock_clock_pane_t1

0x983d,	// (0x0006df31) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00074562) main_fs_bigclock_clock_pane_t

0xb879,	// (0x0006ff6d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb879,	// (0x0006ff6d) list_single_fs_bigclock_indicator_pane

0xb88a,	// (0x0006ff7e) list_single_fs_bigclock_pane_ParamLimits

0xb88a,	// (0x0006ff7e) list_single_fs_bigclock_pane

0xb8b0,	// (0x0006ffa4) main_fs_bigclock_indicator_pane_t1

0xb8bf,	// (0x0006ffb3) list_single_fs_bigclock_pane_g1

0xb8c7,	// (0x0006ffbb) list_single_fs_bigclock_pane_t1

0xe36d,	// (0x00072a61) main_fs_bigclock_swipe_pane_g1

0xb90a,	// (0x0006fffe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00074573) main_fs_bigclock_swipe_pane_g

0xb912,	// (0x00070006) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb912,	// (0x00070006) main_fs_bigclock_swipe_pane_t1

0x256a,	// (0x00066c5e) call_type_pane_ParamLimits

0xa3d2,	// (0x0006eac6) main_btmg_pane

0x947c,	// (0x0006db70) list_single_cale_mrui_row_pane_g2_ParamLimits

0x947c,	// (0x0006db70) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000744e6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000744e6) list_single_cale_mrui_row_pane_g

0x9710,	// (0x0006de04) list_recal_vselct_arw_lo_pane

0xb749,	// (0x0006fe3d) list_recal_vselct_arw_up_pane

0x9718,	// (0x0006de0c) list_recal_vselct_pane

0x9897,	// (0x0006df8b) btmg_button_pane

0x98a1,	// (0x0006df95) main_btmg_pane_g1

0xa3d2,	// (0x0006eac6) bg_button_pane_cp044

0xb92f,	// (0x00070023) btmg_button_pane_t1

0xdf3a,	// (0x0007262e) aid_listscroll_gen

0xdf5c,	// (0x00072650) main_cntbar_detail_pane

0xb47a,	// (0x0006fb6e) list_cmail_folder_pane

0xd695,	// (0x00071d89) sp_fs_scroll_pane_cp03_ParamLimits

0x98ab,	// (0x0006df9f) list_single_fs_dyc_pane_cp01_ParamLimits

0x98ab,	// (0x0006df9f) list_single_fs_dyc_pane_cp01

0xb93d,	// (0x00070031) aid_size_cmail_indent

0x98c1,	// (0x0006dfb5) list_single_dyc_row_pane_cp01

0x98fc,	// (0x0006dff0) cntbar_detail_list_pane_ParamLimits

0x98fc,	// (0x0006dff0) cntbar_detail_list_pane

0x9948,	// (0x0006e03c) main_cntbar_detail_cont_pane_ParamLimits

0x9948,	// (0x0006e03c) main_cntbar_detail_cont_pane

0xd695,	// (0x00071d89) scroll_pane_cp032_ParamLimits

0xd695,	// (0x00071d89) scroll_pane_cp032

0x995c,	// (0x0006e050) cntbar_detail_list_event_pane_ParamLimits

0x995c,	// (0x0006e050) cntbar_detail_list_event_pane

0x990c,	// (0x0006e000) cntbar_detail_list_shct_pane

0xc347,	// (0x00070a3b) aid_list_gen

0xb946,	// (0x0007003a) aid_scroll

0xb94f,	// (0x00070043) aid_size_touch_scroll_bar

0x6f96,	// (0x0006b68a) aid_list_double

0x6f84,	// (0x0006b678) aid_list_single

0x6f84,	// (0x0006b678) aid_list_single_lg

0x996c,	// (0x0006e060) aid_list_z_g_a_sm

0x9974,	// (0x0006e068) aid_list_z_g_d

0x997c,	// (0x0006e070) aid_txt_z_prm

0x998a,	// (0x0006e07e) aid_txt_z_prm_cp01

0x9998,	// (0x0006e08c) aid_txt_z_sec

0x99a6,	// (0x0006e09a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x99a6,	// (0x0006e09a) main_cntbar_detail_cont_pane_g1

0x99ba,	// (0x0006e0ae) main_cntbar_detail_cont_pane_g2_ParamLimits

0x99ba,	// (0x0006e0ae) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00074578) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00074578) main_cntbar_detail_cont_pane_g

0xb958,	// (0x0007004c) main_cntbar_detail_cont_pane_t1

0xb966,	// (0x0007005a) main_cntbar_detail_cont_pane_t2

0xb974,	// (0x00070068) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007457d) main_cntbar_detail_cont_pane_t

0x99ca,	// (0x0006e0be) cell_cntbar_detail_list_shct_pane_ParamLimits

0x99ca,	// (0x0006e0be) cell_cntbar_detail_list_shct_pane

0xb982,	// (0x00070076) cntbar_detail_list_shct_pane_g1

0xb98b,	// (0x0007007f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00074584) cntbar_detail_list_shct_pane_g

0x99de,	// (0x0006e0d2) cntbar_detail_list_event_pane_g1_ParamLimits

0x99de,	// (0x0006e0d2) cntbar_detail_list_event_pane_g1

0x99ea,	// (0x0006e0de) cntbar_detail_list_event_pane_g2_ParamLimits

0x99ea,	// (0x0006e0de) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00074589) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00074589) cntbar_detail_list_event_pane_g

0x9a56,	// (0x0006e14a) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a56,	// (0x0006e14a) cntbar_detail_list_event_pane_t1

0x9a6b,	// (0x0006e15f) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a6b,	// (0x0006e15f) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00074596) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00074596) cntbar_detail_list_event_pane_t

0xe36d,	// (0x00072a61) cell_cntbar_detail_list_shct_pane_g1

0xcac0,	// (0x000711b4) navi_pane_mv_g3

0xdf5c,	// (0x00072650) main_cntbar_detail_pane_ParamLimits

0xa3d2,	// (0x0006eac6) main_notif_wgt_pane

0xac64,	// (0x0006f358) aid_tch_main_mp4_pane_g4

0xae46,	// (0x0006f53a) popup_slider_window_cp02

0x9706,	// (0x0006ddfa) list_recal_day_event_pane

0x98ca,	// (0x0006dfbe) cntbar_detail_btn_pane_ParamLimits

0x98ca,	// (0x0006dfbe) cntbar_detail_btn_pane

0x98e3,	// (0x0006dfd7) cntbar_detail_btn_pane_cp01_ParamLimits

0x98e3,	// (0x0006dfd7) cntbar_detail_btn_pane_cp01

0x990c,	// (0x0006e000) cntbar_detail_list_shct_pane_ParamLimits

0x991c,	// (0x0006e010) cntbar_detail_pane_g1_ParamLimits

0x991c,	// (0x0006e010) cntbar_detail_pane_g1

0x992c,	// (0x0006e020) cntbar_detail_pane_t1_ParamLimits

0x992c,	// (0x0006e020) cntbar_detail_pane_t1

0x99f6,	// (0x0006e0ea) cntbar_detail_list_event_pane_g3_ParamLimits

0x99f6,	// (0x0006e0ea) cntbar_detail_list_event_pane_g3

0x9a0e,	// (0x0006e102) cntbar_detail_list_event_pane_g4_ParamLimits

0x9a0e,	// (0x0006e102) cntbar_detail_list_event_pane_g4

0x9a26,	// (0x0006e11a) cntbar_detail_list_event_pane_g5_ParamLimits

0x9a26,	// (0x0006e11a) cntbar_detail_list_event_pane_g5

0x9a3e,	// (0x0006e132) cntbar_detail_list_event_pane_g6_ParamLimits

0x9a3e,	// (0x0006e132) cntbar_detail_list_event_pane_g6

0x9a80,	// (0x0006e174) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a80,	// (0x0006e174) cntbar_detail_list_event_pane_t3

0x9a92,	// (0x0006e186) popup_notif_wgt_window_ParamLimits

0x9a92,	// (0x0006e186) popup_notif_wgt_window

0x9aab,	// (0x0006e19f) popup_submenu_window_cp01_ParamLimits

0x9aab,	// (0x0006e19f) popup_submenu_window_cp01

0xc0a0,	// (0x00070794) bg_popup_window_pane_cp10

0xb994,	// (0x00070088) listscroll_notif_wgt_pane

0xb9a6,	// (0x0007009a) list_notif_wgt_window

0xb9af,	// (0x000700a3) scroll_pane_cp033

0x9ac1,	// (0x0006e1b5) list_notif_wgt_row_pane_ParamLimits

0x9ac1,	// (0x0006e1b5) list_notif_wgt_row_pane

0xb9b8,	// (0x000700ac) aid_size_list_notif_wgt_del

0xb9c5,	// (0x000700b9) list_notif_wgt_row_pane_g1

0xb9d1,	// (0x000700c5) list_notif_wgt_row_pane_g2

0xb9e0,	// (0x000700d4) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007459d) list_notif_wgt_row_pane_g

0xb9ed,	// (0x000700e1) list_notif_wgt_row_pane_t1

0xba03,	// (0x000700f7) list_notif_wgt_row_pane_t2

0xba15,	// (0x00070109) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000745a4) list_notif_wgt_row_pane_t

0x665c,	// (0x0006ad50) list_recal_day_event_pane_g1

0xba27,	// (0x0007011b) list_recal_day_event_pane_t1

0xa3d2,	// (0x0006eac6) bg_button_pane_cp045

0x9ad1,	// (0x0006e1c5) cntbar_detail_btn_pane_t1

0xdf4e,	// (0x00072642) main_callh_pane_ParamLimits

0xdf4e,	// (0x00072642) main_callh_pane

0xa3d2,	// (0x0006eac6) main_coverflow0_pane

0xa3d2,	// (0x0006eac6) main_wgtman_pane

0x8525,	// (0x0006cc19) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8525,	// (0x0006cc19) main_fs_bigclock_unlock_btn_pane

0x908b,	// (0x0006d77f) bg_button_pane_cp16

0x909b,	// (0x0006d78f) cell_tport_appsw_pane_g3

0x9adf,	// (0x0006e1d3) cf0_flow_pane_ParamLimits

0x9adf,	// (0x0006e1d3) cf0_flow_pane

0xba36,	// (0x0007012a) listscroll_cf0_pane

0xba41,	// (0x00070135) main_cf0_pane_g1

0x9af4,	// (0x0006e1e8) main_cf0_pane_t1_ParamLimits

0x9af4,	// (0x0006e1e8) main_cf0_pane_t1

0x9b0b,	// (0x0006e1ff) main_cf0_pane_t2_ParamLimits

0x9b0b,	// (0x0006e1ff) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000745b0) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000745b0) main_cf0_pane_t

0xba53,	// (0x00070147) scroll_pane_cp11

0x9b22,	// (0x0006e216) cf0_flow_pane_g1

0x9b2a,	// (0x0006e21e) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000745b5) cf0_flow_pane_g

0x9b32,	// (0x0006e226) cf0_flow_pane_t1

0xa3d2,	// (0x0006eac6) main_call6_pane

0xa3d2,	// (0x0006eac6) main_calllock_pane

0x9b40,	// (0x0006e234) call6_btn_grp_pane_ParamLimits

0x9b40,	// (0x0006e234) call6_btn_grp_pane

0x9b5a,	// (0x0006e24e) call6_pane_g1_ParamLimits

0x9b5a,	// (0x0006e24e) call6_pane_g1

0x9b6f,	// (0x0006e263) popup_call6_1st_window_ParamLimits

0x9b6f,	// (0x0006e263) popup_call6_1st_window

0x9b80,	// (0x0006e274) popup_call6_2nd_window_ParamLimits

0x9b80,	// (0x0006e274) popup_call6_2nd_window

0x9b91,	// (0x0006e285) cell_call6_btn_pane_ParamLimits

0x9b91,	// (0x0006e285) cell_call6_btn_pane

0xc0a0,	// (0x00070794) bg_popup_call2_in_pane_cp03

0xba5e,	// (0x00070152) popup_call6_1st_window_g1

0xba66,	// (0x0007015a) popup_call6_1st_window_g2

0xba6e,	// (0x00070162) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000745ba) popup_call6_1st_window_g

0xba76,	// (0x0007016a) popup_call6_1st_window_t1

0xba85,	// (0x00070179) popup_call6_1st_window_t2

0xba95,	// (0x00070189) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000745c1) popup_call6_1st_window_t

0xc0a0,	// (0x00070794) bg_popup_call2_in_pane_cp04

0xba5e,	// (0x00070152) popup_call6_2nd_window_g1

0xba66,	// (0x0007015a) popup_call6_2nd_window_g2

0xba6e,	// (0x00070162) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000745ba) popup_call6_2nd_window_g

0xba76,	// (0x0007016a) popup_call6_2nd_window_t1

0xa3d2,	// (0x0006eac6) bg_button_pane_cp15

0xbaa5,	// (0x00070199) cell_call6_btn_pane_g1

0xbaae,	// (0x000701a2) cell_call6_btn_pane_t1

0x9ba5,	// (0x0006e299) listscroll_wgtman_pane_ParamLimits

0x9ba5,	// (0x0006e299) listscroll_wgtman_pane

0x9bc6,	// (0x0006e2ba) wgtman_btn_pane_ParamLimits

0x9bc6,	// (0x0006e2ba) wgtman_btn_pane

0xc8b9,	// (0x00070fad) aid_scroll_copy1

0xbabd,	// (0x000701b1) list_wgtman_pane

0x9c09,	// (0x0006e2fd) wgtman_btn_pane_g1_ParamLimits

0x9c09,	// (0x0006e2fd) wgtman_btn_pane_g1

0x9c35,	// (0x0006e329) wgtman_btn_pane_t1_ParamLimits

0x9c35,	// (0x0006e329) wgtman_btn_pane_t1

0xbac7,	// (0x000701bb) wgtman_btn_pane_t2_ParamLimits

0xbac7,	// (0x000701bb) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000745c8) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000745c8) wgtman_btn_pane_t

0x9c72,	// (0x0006e366) listrow_wgtman_pane_ParamLimits

0x9c72,	// (0x0006e366) listrow_wgtman_pane

0x9c84,	// (0x0006e378) listrow_wgtman_pane_g1

0x9c91,	// (0x0006e385) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000745cd) listrow_wgtman_pane_g

0x9caf,	// (0x0006e3a3) listrow_wgtman_pane_t1

0x9cc7,	// (0x0006e3bb) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000745d2) listrow_wgtman_pane_t

0x9ced,	// (0x0006e3e1) wait_bar_pane_cp09

0xbade,	// (0x000701d2) main_calllock_btn_pane

0xbae8,	// (0x000701dc) main_calllock_pane_g1

0xa3d2,	// (0x0006eac6) bg_button_pane_cp17

0xbaf4,	// (0x000701e8) main_calllock_btn_pane_g1

0xbafd,	// (0x000701f1) main_calllock_btn_pane_t1

0xa3d2,	// (0x0006eac6) main_dialer3_pane

0xa3d2,	// (0x0006eac6) main_fmrd2_pane

0xe36d,	// (0x00072a61) main_fs_bigclock_unlock_btn_pane_g1

0x9d07,	// (0x0006e3fb) main_fs_bigclock_unlock_btn_pane_t1

0x9d15,	// (0x0006e409) area_fmrd2_info_pane_ParamLimits

0x9d15,	// (0x0006e409) area_fmrd2_info_pane

0x9d26,	// (0x0006e41a) area_fmrd2_visual_pane_ParamLimits

0x9d26,	// (0x0006e41a) area_fmrd2_visual_pane

0x9d34,	// (0x0006e428) fmrd2_indi_pane_ParamLimits

0x9d34,	// (0x0006e428) fmrd2_indi_pane

0x9d41,	// (0x0006e435) area_fmrd2_visual_pane_g1

0x9d49,	// (0x0006e43d) area_fmrd2_visual_pane_t1

0x9d59,	// (0x0006e44d) area_fmrd2_visual_pane_t2

0x9d69,	// (0x0006e45d) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000745dc) area_fmrd2_visual_pane_t

0x9d79,	// (0x0006e46d) area_fmrd2_info_pane_g1

0x9d81,	// (0x0006e475) area_fmrd2_info_pane_t1

0x9d91,	// (0x0006e485) area_fmrd2_info_pane_t2

0x9da1,	// (0x0006e495) area_fmrd2_info_pane_t3

0x9db1,	// (0x0006e4a5) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000745e3) area_fmrd2_info_pane_t

0x9dbf,	// (0x0006e4b3) fmrd2_indi_pane_t1

0x9dcf,	// (0x0006e4c3) fmrd2_indi_pane_t2

0x9ddf,	// (0x0006e4d3) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000745ec) fmrd2_indi_pane_t

0xb0f1,	// (0x0006f7e5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb0f1,	// (0x0006f7e5) list_single_fs_bigclock_indicator_pane_g5

0xb1a2,	// (0x0006f896) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb1a2,	// (0x0006f896) list_single_fs_bigclock_indicator_pane_t5

0x92db,	// (0x0006d9cf) aid_cell_bcale_month_pane_ParamLimits

0x92db,	// (0x0006d9cf) aid_cell_bcale_month_pane

0x9302,	// (0x0006d9f6) bcale_month_pane_ParamLimits

0x9302,	// (0x0006d9f6) bcale_month_pane

0x9326,	// (0x0006da1a) bcale_preview_pane_ParamLimits

0x9326,	// (0x0006da1a) bcale_preview_pane

0xb8c7,	// (0x0006ffbb) list_single_fs_bigclock_pane_t1_ParamLimits

0xb8e6,	// (0x0006ffda) list_single_fs_bigclock_pane_t2_ParamLimits

0xb8e6,	// (0x0006ffda) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007456e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007456e) list_single_fs_bigclock_pane_t

0x9cff,	// (0x0006e3f3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000745d7) main_fs_bigclock_unlock_btn_pane_g

0x9def,	// (0x0006e4e3) aid_dia3_key_size_ParamLimits

0x9def,	// (0x0006e4e3) aid_dia3_key_size

0x9dfe,	// (0x0006e4f2) aid_dia3_listrow_size_ParamLimits

0x9dfe,	// (0x0006e4f2) aid_dia3_listrow_size

0x9e13,	// (0x0006e507) dia3_keypad_fun_pane_ParamLimits

0x9e13,	// (0x0006e507) dia3_keypad_fun_pane

0x9e2f,	// (0x0006e523) dia3_keypad_num_pane_ParamLimits

0x9e2f,	// (0x0006e523) dia3_keypad_num_pane

0x9e4a,	// (0x0006e53e) dia3_listscroll_pane_ParamLimits

0x9e4a,	// (0x0006e53e) dia3_listscroll_pane

0x9e5d,	// (0x0006e551) dia3_numentry_pane_ParamLimits

0x9e5d,	// (0x0006e551) dia3_numentry_pane

0xbb0c,	// (0x00070200) dia3_list_pane

0xbb17,	// (0x0007020b) scroll_pane_cp12

0xa3d2,	// (0x0006eac6) bg_dia3_numentry_pane

0x9e71,	// (0x0006e565) dia3_numentry_pane_t1

0x9e80,	// (0x0006e574) cell_dia3_key_num_pane

0x9e88,	// (0x0006e57c) cell_dia3_key0_fun_pane_ParamLimits

0x9e88,	// (0x0006e57c) cell_dia3_key0_fun_pane

0x9e9c,	// (0x0006e590) cell_dia3_key1_fun_pane_ParamLimits

0x9e9c,	// (0x0006e590) cell_dia3_key1_fun_pane

0x9eb4,	// (0x0006e5a8) dia3_listrow_pane

0x7f8b,	// (0x0006c67f) bg_dia3_numentry_pane_g1

0xa3d2,	// (0x0006eac6) bg_button_pane_cp21

0xbb22,	// (0x00070216) cell_dia3_key_num_pane_t1

0xbb30,	// (0x00070224) cell_dia3_key_num_pane_t2

0xbb3f,	// (0x00070233) cell_dia3_key_num_pane_t3

0xbb4e,	// (0x00070242) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000745f3) cell_dia3_key_num_pane_t

0xa3d2,	// (0x0006eac6) bg_button_pane_cp19

0x9ec6,	// (0x0006e5ba) cell_dia3_key0_fun_pane_g1

0xa3d2,	// (0x0006eac6) bg_button_pane_cp20

0x9ece,	// (0x0006e5c2) cell_dia3_key1_fun_pane_g1

0x9ed6,	// (0x0006e5ca) area_left_week_number_pane

0x9ee2,	// (0x0006e5d6) area_top_day_name_pane

0x9ef5,	// (0x0006e5e9) frame_month_view_pane

0xbb5d,	// (0x00070251) grid_month_view_pane

0x9f08,	// (0x0006e5fc) cell_top_day_name_pane_ParamLimits

0x9f08,	// (0x0006e5fc) cell_top_day_name_pane

0x9f35,	// (0x0006e629) cell_area_left_week_number_pane_ParamLimits

0x9f35,	// (0x0006e629) cell_area_left_week_number_pane

0x9f49,	// (0x0006e63d) cell_month_view_pane_ParamLimits

0x9f49,	// (0x0006e63d) cell_month_view_pane

0xbb6b,	// (0x0007025f) frm_month_g1

0x9f76,	// (0x0006e66a) frm_month_g2

0x9f89,	// (0x0006e67d) frm_month_g3

0x9f9c,	// (0x0006e690) frm_month_g4

0x9faf,	// (0x0006e6a3) frm_month_g5

0x9fc2,	// (0x0006e6b6) frm_month_g6

0x9fd5,	// (0x0006e6c9) frm_month_g7

0xbb78,	// (0x0007026c) frm_month_g8

0x9fe8,	// (0x0006e6dc) frm_month_g9

0x9ff8,	// (0x0006e6ec) frm_month_g10

0xa008,	// (0x0006e6fc) frm_month_g11

0xa018,	// (0x0006e70c) frm_month_g12

0xa02a,	// (0x0006e71e) frm_month_g13

0xa03c,	// (0x0006e730) frm_month_g14

0xa050,	// (0x0006e744) frm_month_g15

0xa064,	// (0x0006e758) frm_month_g16

0x000f,

0xff08,	// (0x000745fc) frm_month_g

0xbb85,	// (0x00070279) cell_top_day_name_pane_t1

0xa078,	// (0x0006e76c) cell_area_left_week_number_pane_g1

0xa084,	// (0x0006e778) cell_area_left_week_number_pane_t1

0xe5d0,	// (0x00072cc4) cell_month_view_pane_g1

0xa097,	// (0x0006e78b) cell_month_view_pane_t1

0xa3d2,	// (0x0006eac6) main_fps_pane

0xb392,	// (0x0006fa86) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb392,	// (0x0006fa86) cmail_ddmenu_btn02_pane_cp1

0xb3ae,	// (0x0006faa2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb3ae,	// (0x0006faa2) cmail_ddmenu_btn02_pane_cp2

0x96d5,	// (0x0006ddc9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x96d5,	// (0x0006ddc9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00074521) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00074521) cmail_ddmenu_btn02_pane_g

0x96f4,	// (0x0006dde8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x96f4,	// (0x0006dde8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00074526) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00074526) cmail_ddmenu_btn02_pane_t

0xa0aa,	// (0x0006e79e) fps_text_pane_ParamLimits

0xa0aa,	// (0x0006e79e) fps_text_pane

0xa0c1,	// (0x0006e7b5) main_fps_pane_g1_ParamLimits

0xa0c1,	// (0x0006e7b5) main_fps_pane_g1

0xa0db,	// (0x0006e7cf) wait_bar_pane_cp010_ParamLimits

0xa0db,	// (0x0006e7cf) wait_bar_pane_cp010

0xa0ec,	// (0x0006e7e0) fps_text_pane_t1_ParamLimits

0xa0ec,	// (0x0006e7e0) fps_text_pane_t1

0xaeb4,	// (0x0006f5a8) cam4_image_uncrop_pane_g1

0xaebd,	// (0x0006f5b1) cam4_image_uncrop_pane_g2

0x5a8e,	// (0x0006a182) cam4_image_uncrop_pane_g3

0x5a97,	// (0x0006a18b) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00073fe2) cam4_image_uncrop_pane_g

0x9eb4,	// (0x0006e5a8) dia3_listrow_pane_ParamLimits

0xa3d2,	// (0x0006eac6) main_phob2_pane

0x905c,	// (0x0006d750) cell_tport_appsw_pane_cp02_ParamLimits

0x905c,	// (0x0006d750) cell_tport_appsw_pane_cp02

0x9070,	// (0x0006d764) cell_tport_appsw_pane_cp03_ParamLimits

0x9070,	// (0x0006d764) cell_tport_appsw_pane_cp03

0xa3d2,	// (0x0006eac6) phob2_contact_card_pane

0xa3d2,	// (0x0006eac6) phob2_listscroll_pane

0xbb98,	// (0x0007028c) phob2_list_pane

0xbba0,	// (0x00070294) scroll_pane_cp034

0xa104,	// (0x0006e7f8) phob2_cc_data_pane_ParamLimits

0xa104,	// (0x0006e7f8) phob2_cc_data_pane

0xa123,	// (0x0006e817) phob2_cc_listscroll_pane_ParamLimits

0xa123,	// (0x0006e817) phob2_cc_listscroll_pane

0x9c72,	// (0x0006e366) list_double_large_graphic_phob2_pane_ParamLimits

0x9c72,	// (0x0006e366) list_double_large_graphic_phob2_pane

0xa141,	// (0x0006e835) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa141,	// (0x0006e835) list_double_large_graphic_phob2_pane_g1

0xa157,	// (0x0006e84b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa157,	// (0x0006e84b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007461d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007461d) list_double_large_graphic_phob2_pane_g

0xa163,	// (0x0006e857) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa163,	// (0x0006e857) list_double_large_graphic_phob2_pane_t1

0xa178,	// (0x0006e86c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa178,	// (0x0006e86c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00074622) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00074622) list_double_large_graphic_phob2_pane_t

0xa3d2,	// (0x0006eac6) list_highlight_pane_cp024

0xa18a,	// (0x0006e87e) phob2_cc_button_pane

0xa192,	// (0x0006e886) phob2_cc_data_pane_g1_ParamLimits

0xa192,	// (0x0006e886) phob2_cc_data_pane_g1

0xa1a7,	// (0x0006e89b) phob2_cc_data_pane_g2_ParamLimits

0xa1a7,	// (0x0006e89b) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00074627) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00074627) phob2_cc_data_pane_g

0xa1b7,	// (0x0006e8ab) phob2_cc_data_pane_t1_ParamLimits

0xa1b7,	// (0x0006e8ab) phob2_cc_data_pane_t1

0xa1cf,	// (0x0006e8c3) phob2_cc_data_pane_t2_ParamLimits

0xa1cf,	// (0x0006e8c3) phob2_cc_data_pane_t2

0xa1e7,	// (0x0006e8db) phob2_cc_data_pane_t3_ParamLimits

0xa1e7,	// (0x0006e8db) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007462c) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007462c) phob2_cc_data_pane_t

0xbba8,	// (0x0007029c) phob2_cc_list_pane_ParamLimits

0xbba8,	// (0x0007029c) phob2_cc_list_pane

0x69f8,	// (0x0006b0ec) scroll_pane_cp035_ParamLimits

0x69f8,	// (0x0006b0ec) scroll_pane_cp035

0xdf5c,	// (0x00072650) bg_button_pane_cp033

0xbbb4,	// (0x000702a8) phob2_cc_button_pane_g1

0xbbc0,	// (0x000702b4) phob2_cc_button_pane_t1

0xbbd5,	// (0x000702c9) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00074633) phob2_cc_button_pane_t

0xa1ff,	// (0x0006e8f3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa1ff,	// (0x0006e8f3) list_double_large_graphic_phob2_cc_pane

0xa211,	// (0x0006e905) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa211,	// (0x0006e905) list_double_large_graphic_phob2_cc_pane_g1

0xa21d,	// (0x0006e911) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa21d,	// (0x0006e911) list_double_large_graphic_phob2_cc_pane_g2

0xa229,	// (0x0006e91d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa229,	// (0x0006e91d) list_double_large_graphic_phob2_cc_pane_g3

0xa235,	// (0x0006e929) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa235,	// (0x0006e929) list_double_large_graphic_phob2_cc_pane_g4

0xa241,	// (0x0006e935) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa241,	// (0x0006e935) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00074638) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00074638) list_double_large_graphic_phob2_cc_pane_g

0xa24d,	// (0x0006e941) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa24d,	// (0x0006e941) list_double_large_graphic_phob2_cc_pane_t1

0xa276,	// (0x0006e96a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa276,	// (0x0006e96a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00074643) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00074643) list_double_large_graphic_phob2_cc_pane_t

0xbbe7,	// (0x000702db) list_highlight_pane_cp025_ParamLimits

0xbbe7,	// (0x000702db) list_highlight_pane_cp025

0xdf5c,	// (0x00072650) bg_button_pane_cp033_ParamLimits

0xbbb4,	// (0x000702a8) phob2_cc_button_pane_g1_ParamLimits

0xbbc0,	// (0x000702b4) phob2_cc_button_pane_t1_ParamLimits

0xbbd5,	// (0x000702c9) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00074633) phob2_cc_button_pane_t_ParamLimits

0x04f3,	// (0x00064be7) popup_wgtman_window

0xef6d,	// (0x00073661) scroll_pane_cp038

0x9beb,	// (0x0006e2df) wgtman_btn_pane_cp_01_ParamLimits

0x9beb,	// (0x0006e2df) wgtman_btn_pane_cp_01

0xbbf5,	// (0x000702e9) wgtman_content_pane

0xbbfe,	// (0x000702f2) wgtman_heading_pane

0xa3d2,	// (0x0006eac6) bg_heading_pane_cp02

0xbc07,	// (0x000702fb) wgtman_heading_pane_g1

0xbc0f,	// (0x00070303) wgtman_heading_pane_t1

0xbc1d,	// (0x00070311) scroll_pane_cp036

0xbc25,	// (0x00070319) wgtman_list_pane

0xbc2d,	// (0x00070321) wgtman_list_pane_t1_ParamLimits

0xbc2d,	// (0x00070321) wgtman_list_pane_t1

0xaea0,	// (0x0006f594) cam4_grid_pane

0x6776,	// (0x0006ae6a) bg_button_pane_cp015_ParamLimits

0x6788,	// (0x0006ae7c) bg_button_pane_cp016_ParamLimits

0x679b,	// (0x0006ae8f) bg_button_pane_cp017_ParamLimits

0x67ff,	// (0x0006aef3) popup_vitu2_query_window_g3_ParamLimits

0x67ff,	// (0x0006aef3) popup_vitu2_query_window_g3

0x68bc,	// (0x0006afb0) popup_vitu2_query_window_t6_ParamLimits

0x68bc,	// (0x0006afb0) popup_vitu2_query_window_t6

0x68e7,	// (0x0006afdb) popup_vitu2_query_window_t7_ParamLimits

0x68e7,	// (0x0006afdb) popup_vitu2_query_window_t7

0xaeb4,	// (0x0006f5a8) cam4_grid_pane_g1

0xaebd,	// (0x0006f5b1) cam4_grid_pane_g2

0xbc47,	// (0x0007033b) cam4_grid_pane_g3

0xbc50,	// (0x00070344) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00074648) cam4_grid_pane_g

0x144e,	// (0x00065b42) aid_placing_vt_slider_lsc_ParamLimits

0x1759,	// (0x00065e4d) vidtel_button_pane_ParamLimits

0x1759,	// (0x00065e4d) vidtel_button_pane

0xa3d2,	// (0x0006eac6) bg_button_pane_cp034

0xa29f,	// (0x0006e993) vidtel_button_pane_g1

0xbc5b,	// (0x0007034f) vidtel_button_pane_t1

0xf09f,	// (0x00073793) aid_size_vtel_slider_touch

0x69f8,	// (0x0006b0ec) scroll_pane_cp039

0x7ffa,	// (0x0006c6ee) ncim_query_button_pane_cp01_ParamLimits

0x8019,	// (0x0006c70d) ncimui_query_pane_g1_ParamLimits

0xdf5c,	// (0x00072650) input_focus_pane_cp012_ParamLimits

0x803e,	// (0x0006c732) ncim_query_entry_pane_t1_ParamLimits

0x69f8,	// (0x0006b0ec) scroll_pane_cp039_ParamLimits

0xc9ab,	// (0x0007109f) navi_pane_bcale_mc_g1

0xc9b3,	// (0x000710a7) navi_pane_bcale_mc_t1

0xb3f7,	// (0x0006faeb) main_sp_fs_email_pane_g1

0xb403,	// (0x0006faf7) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000743d9) main_sp_fs_email_pane_g

0xb64b,	// (0x0006fd3f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb64b,	// (0x0006fd3f) list_single_cale_mrui_row_pane_g3

0x9765,	// (0x0006de59) list_single_recal_day_pane_g5_event_pane

0x977b,	// (0x0006de6f) list_single_recal_day_pane_g7

0xbc71,	// (0x00070365) list_recal_day_event_pane_cp01

0xbc7a,	// (0x0007036e) list_recal_vselct_arw_lo_pane_cp01

0xbc82,	// (0x00070376) list_recal_vselct_arw_up_pane_cp01

0xbc8a,	// (0x0007037e) list_recal_vselct_pane_cp01

0x665c,	// (0x0006ad50) list_recal_day_event_pane_cp01_g1

0xa2a7,	// (0x0006e99b) list_recal_day_event_pane_cp01_t1

0x9783,	// (0x0006de77) list_single_recal_day_pane_t1_ParamLimits

0x9795,	// (0x0006de89) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00074536) list_single_recal_day_pane_t_ParamLimits

0xbe16,	// (0x0007050a) bg_notes_pane_ParamLimits

0xbeb9,	// (0x000705ad) list_notes_pane_ParamLimits

0x083c,	// (0x00064f30) scroll_pane_cp06_ParamLimits

0xbedb,	// (0x000705cf) main_notes_pane_ParamLimits

0xa3d2,	// (0x0006eac6) main_welc_pane

0xa2b5,	// (0x0006e9a9) main_welc_body_pane_ParamLimits

0xa2b5,	// (0x0006e9a9) main_welc_body_pane

0xa2d3,	// (0x0006e9c7) main_welc_opti_pane_ParamLimits

0xa2d3,	// (0x0006e9c7) main_welc_opti_pane

0xa318,	// (0x0006ea0c) main_welc_pane_t1_ParamLimits

0xa318,	// (0x0006ea0c) main_welc_pane_t1

0xa336,	// (0x0006ea2a) main_welc_body_row_pane_ParamLimits

0xa336,	// (0x0006ea2a) main_welc_body_row_pane

0xa34a,	// (0x0006ea3e) main_welc_opti_row_pane_ParamLimits

0xa34a,	// (0x0006ea3e) main_welc_opti_row_pane

0xbc94,	// (0x00070388) main_welc_opti_row_pane_g1

0xa358,	// (0x0006ea4c) main_welc_opti_row_pane_t1

0xbc9c,	// (0x00070390) main_welc_body_row_pane_t1

0xb99e,	// (0x00070092) popup_notif_wgt_heading_pane

0xb9b8,	// (0x000700ac) aid_size_list_notif_wgt_del_ParamLimits

0xb9c5,	// (0x000700b9) list_notif_wgt_row_pane_g1_ParamLimits

0xb9d1,	// (0x000700c5) list_notif_wgt_row_pane_g2_ParamLimits

0xb9e0,	// (0x000700d4) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007459d) list_notif_wgt_row_pane_g_ParamLimits

0xb9ed,	// (0x000700e1) list_notif_wgt_row_pane_t1_ParamLimits

0xba03,	// (0x000700f7) list_notif_wgt_row_pane_t2_ParamLimits

0xba15,	// (0x00070109) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000745a4) list_notif_wgt_row_pane_t_ParamLimits

0x9c84,	// (0x0006e378) listrow_wgtman_pane_g1_ParamLimits

0x9c91,	// (0x0006e385) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000745cd) listrow_wgtman_pane_g_ParamLimits

0x9caf,	// (0x0006e3a3) listrow_wgtman_pane_t1_ParamLimits

0x9cc7,	// (0x0006e3bb) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000745d2) listrow_wgtman_pane_t_ParamLimits

0x9ced,	// (0x0006e3e1) wait_bar_pane_cp09_ParamLimits

0xa3d2,	// (0x0006eac6) bg_popup_heading_pane_cp02

0xbcab,	// (0x0007039f) popup_notif_wgt_heading_pane_g1

0xbcb3,	// (0x000703a7) popup_notif_wgt_heading_pane_t1

0xa3d2,	// (0x0006eac6) main_vids_pane

0xa3d2,	// (0x0006eac6) vids_listscroll_pane

0xa367,	// (0x0006ea5b) scroll_pane_cp040

0xa3d2,	// (0x0006eac6) vids_list_pane

0xa372,	// (0x0006ea66) vids_list_double_pane_ParamLimits

0xa372,	// (0x0006ea66) vids_list_double_pane

0xa383,	// (0x0006ea77) vids_list_double_pane_g1

0xa38c,	// (0x0006ea80) vids_list_double_pane_t1

0xa39c,	// (0x0006ea90) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00074656) vids_list_double_pane_t

0xa44a,	// (0x0006eb3e) main_ncimui_pane_ParamLimits

0x7d21,	// (0x0006c415) main_ncimui_pane_g1_ParamLimits

0x7d2d,	// (0x0006c421) main_ncimui_pane_g2_ParamLimits

0x7d2d,	// (0x0006c421) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000742de) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000742de) main_ncimui_pane_g

0xa2ee,	// (0x0006e9e2) main_welc_pane_g1_ParamLimits

0xa2ee,	// (0x0006e9e2) main_welc_pane_g1

0xa303,	// (0x0006e9f7) main_welc_pane_g2_ParamLimits

0xa303,	// (0x0006e9f7) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00074651) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00074651) main_welc_pane_g

0xbe16,	// (0x0007050a) listscroll_mce_pane_ParamLimits

0xcb00,	// (0x000711f4) wait_bar_pane_cp10

0xdf42,	// (0x00072636) main_cale_day_pane_ParamLimits

0xdf42,	// (0x00072636) main_cale_week_pane_ParamLimits

0xbe16,	// (0x0007050a) main_messa_pane_ParamLimits

0x4dc0,	// (0x000694b4) main_clock2_btn_pane_ParamLimits

0x4dc0,	// (0x000694b4) main_clock2_btn_pane

0xe7c0,	// (0x00072eb4) main_clock2_btn_pane_cp01_ParamLimits

0xe7c0,	// (0x00072eb4) main_clock2_btn_pane_cp01

0xb61c,	// (0x0006fd10) list_cale_mrui_pane_ParamLimits

0xba4b,	// (0x0007013f) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000745ab) main_cf0_pane_g

0x9ed6,	// (0x0006e5ca) area_left_week_number_pane_ParamLimits

0x9ee2,	// (0x0006e5d6) area_top_day_name_pane_ParamLimits

0x9ef5,	// (0x0006e5e9) frame_month_view_pane_ParamLimits

0xbb5d,	// (0x00070251) grid_month_view_pane_ParamLimits

0xbb6b,	// (0x0007025f) frm_month_g1_ParamLimits

0x9f76,	// (0x0006e66a) frm_month_g2_ParamLimits

0x9f89,	// (0x0006e67d) frm_month_g3_ParamLimits

0x9f9c,	// (0x0006e690) frm_month_g4_ParamLimits

0x9faf,	// (0x0006e6a3) frm_month_g5_ParamLimits

0x9fc2,	// (0x0006e6b6) frm_month_g6_ParamLimits

0x9fd5,	// (0x0006e6c9) frm_month_g7_ParamLimits

0xbb78,	// (0x0007026c) frm_month_g8_ParamLimits

0x9fe8,	// (0x0006e6dc) frm_month_g9_ParamLimits

0x9ff8,	// (0x0006e6ec) frm_month_g10_ParamLimits

0xa008,	// (0x0006e6fc) frm_month_g11_ParamLimits

0xa018,	// (0x0006e70c) frm_month_g12_ParamLimits

0xa02a,	// (0x0006e71e) frm_month_g13_ParamLimits

0xa03c,	// (0x0006e730) frm_month_g14_ParamLimits

0xa050,	// (0x0006e744) frm_month_g15_ParamLimits

0xa064,	// (0x0006e758) frm_month_g16_ParamLimits

0xff08,	// (0x000745fc) frm_month_g_ParamLimits

0xbb85,	// (0x00070279) cell_top_day_name_pane_t1_ParamLimits

0xa078,	// (0x0006e76c) cell_area_left_week_number_pane_g1_ParamLimits

0xa084,	// (0x0006e778) cell_area_left_week_number_pane_t1_ParamLimits

0xe5d0,	// (0x00072cc4) cell_month_view_pane_g1_ParamLimits

0xa097,	// (0x0006e78b) cell_month_view_pane_t1_ParamLimits

0xbe0e,	// (0x00070502) main_clock2_btn_pane_g1

0xbcc1,	// (0x000703b5) main_clock2_btn_pane_t1

0xdf5c,	// (0x00072650) listscroll_cmail_pane_ParamLimits

0xb3f7,	// (0x0006faeb) main_sp_fs_email_pane_g1_ParamLimits

0xb403,	// (0x0006faf7) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000743d9) main_sp_fs_email_pane_g_ParamLimits

0xb72a,	// (0x0006fe1e) list_recal_day_pane_ParamLimits

0xb73b,	// (0x0006fe2f) mian_recal_day_pane_t1

0x8c4a,	// (0x0006d33e) list_single_dyc_row_text_pane_t4_ParamLimits

0x8c4a,	// (0x0006d33e) list_single_dyc_row_text_pane_t4

0x8c93,	// (0x0006d387) list_single_dyc_row_text_pane_t5_ParamLimits

0x8c93,	// (0x0006d387) list_single_dyc_row_text_pane_t5

0x8d09,	// (0x0006d3fd) list_single_dyc_row_text_pane_t6_ParamLimits

0x8d09,	// (0x0006d3fd) list_single_dyc_row_text_pane_t6

0x23d5,	// (0x00066ac9) aid_mgn_list_cale_time_pane

0xa44a,	// (0x0006eb3e) main_gallery2_pane_ParamLimits

0xe7d6,	// (0x00072eca) main_clock2_pane_cp01_t1

0xe7e6,	// (0x00072eda) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x00073eb8) main_clock2_pane_cp01_t

0x0bf6,	// (0x000652ea) cale_week_scroll_pane_g16_ParamLimits

0x0bf6,	// (0x000652ea) cale_week_scroll_pane_g16

0xc0a0,	// (0x00070794) vorec_slider_pane

0xbc5b,	// (0x0007034f) vidtel_button_pane_t1_ParamLimits

0x9803,	// (0x0006def7) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9803,	// (0x0006def7) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9814,	// (0x0006df08) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9814,	// (0x0006df08) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x00074559) main_fs_bigclock_clock_pane_g_ParamLimits

0x9827,	// (0x0006df1b) main_fs_bigclock_clock_pane_t1_ParamLimits

0x983d,	// (0x0006df31) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x00074562) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small

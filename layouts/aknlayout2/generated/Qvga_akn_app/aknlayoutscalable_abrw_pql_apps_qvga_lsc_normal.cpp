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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00022095 };

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
0x3223,	// (0x000252b8) Screen

0x322d,	// (0x000252c2) application_window

0x3241,	// (0x000252d6) area_bottom_pane_ParamLimits

0x3241,	// (0x000252d6) area_bottom_pane

0x1fbb,	// (0x00024050) area_top_pane_ParamLimits

0x1fbb,	// (0x00024050) area_top_pane

0xa99f,	// (0x0002ca34) call_video_uplink_pane_ParamLimits

0xa99f,	// (0x0002ca34) call_video_uplink_pane

0x203b,	// (0x000240d0) main_pane_ParamLimits

0x203b,	// (0x000240d0) main_pane

0xc55d,	// (0x0002e5f2) context_pane

0x66d8,	// (0x0002876d) navi_pane

0x6701,	// (0x00028796) popup_cale_events_window_ParamLimits

0x6701,	// (0x00028796) popup_cale_events_window

0xc570,	// (0x0002e605) popup_mup_playback_window

0x6719,	// (0x000287ae) signal_pane

0x3b17,	// (0x00025bac) main_browser_pane

0x4247,	// (0x000262dc) main_burst_pane

0xa9bb,	// (0x0002ca50) main_calc_pane

0xc4f7,	// (0x0002e58c) main_cale_day_pane

0x249a,	// (0x0002452f) main_cale_month_pane

0xc4f7,	// (0x0002e58c) main_cale_week_pane

0x4247,	// (0x000262dc) main_call_pane

0x36e5,	// (0x0002577a) main_call_poc_pane

0x4247,	// (0x000262dc) main_camera_pane

0x4247,	// (0x000262dc) main_chi_dic_pane

0xad40,	// (0x0002cdd5) main_clock_pane

0x36e5,	// (0x0002577a) main_fmradio_pane

0x4247,	// (0x000262dc) main_graph_messa_pane

0x36e5,	// (0x0002577a) main_help_pane

0x3b17,	// (0x00025bac) main_im_pane

0x3940,	// (0x000259d5) main_image_pane_ParamLimits

0x3940,	// (0x000259d5) main_image_pane

0x36e5,	// (0x0002577a) main_location2_pane

0x4247,	// (0x000262dc) main_location_pane

0x3940,	// (0x000259d5) main_messa_pane

0x36e5,	// (0x0002577a) main_mp2_pane

0x4247,	// (0x000262dc) main_mp_pane

0x36e5,	// (0x0002577a) main_msg_pane

0x36e5,	// (0x0002577a) main_mup_eq_pane

0x36e5,	// (0x0002577a) main_mup_pane

0x3b17,	// (0x00025bac) main_notes_pane

0x36e5,	// (0x0002577a) main_pec_pane

0x36e5,	// (0x0002577a) main_phob_pane

0x36e5,	// (0x0002577a) main_pinb_pane

0x36e5,	// (0x0002577a) main_postcard_pane

0x36e5,	// (0x0002577a) main_qdial_pane

0x4247,	// (0x000262dc) main_skin_pane

0x36e5,	// (0x0002577a) main_smil2_pane

0x4247,	// (0x000262dc) main_smil_pane

0x4247,	// (0x000262dc) main_video_pane

0x4247,	// (0x000262dc) main_video_tele_pane

0x3940,	// (0x000259d5) main_viewer_pane_ParamLimits

0x3940,	// (0x000259d5) main_viewer_pane

0x4247,	// (0x000262dc) main_vorec_pane

0x24e8,	// (0x0002457d) popup_blid_sat_info_window_ParamLimits

0x24e8,	// (0x0002457d) popup_blid_sat_info_window

0x253e,	// (0x000245d3) popup_dyc_status_message_window_ParamLimits

0x253e,	// (0x000245d3) popup_dyc_status_message_window

0x2554,	// (0x000245e9) popup_grid_large_graphic_window_ParamLimits

0x2554,	// (0x000245e9) popup_grid_large_graphic_window

0x25ea,	// (0x0002467f) popup_loc_request_window_ParamLimits

0x25ea,	// (0x0002467f) popup_loc_request_window

0x26ce,	// (0x00024763) popup_wml_address_window_ParamLimits

0x26ce,	// (0x00024763) popup_wml_address_window

0x6556,	// (0x000285eb) call_muted_g1

0x6566,	// (0x000285fb) popup_call_audio_conf_window_ParamLimits

0x6566,	// (0x000285fb) popup_call_audio_conf_window

0x6584,	// (0x00028619) popup_call_audio_first_window_ParamLimits

0x6584,	// (0x00028619) popup_call_audio_first_window

0x65e2,	// (0x00028677) popup_call_audio_in_window_ParamLimits

0x65e2,	// (0x00028677) popup_call_audio_in_window

0x660e,	// (0x000286a3) popup_call_audio_out_window_ParamLimits

0x660e,	// (0x000286a3) popup_call_audio_out_window

0x663c,	// (0x000286d1) popup_call_audio_second_window_ParamLimits

0x663c,	// (0x000286d1) popup_call_audio_second_window

0x6682,	// (0x00028717) popup_call_audio_wait_window_ParamLimits

0x6682,	// (0x00028717) popup_call_audio_wait_window

0x66b5,	// (0x0002874a) popup_number_entry_window_ParamLimits

0x66b5,	// (0x0002874a) popup_number_entry_window

0x327c,	// (0x00025311) bg_popup_call_pane_cp05_ParamLimits

0x327c,	// (0x00025311) bg_popup_call_pane_cp05

0x329c,	// (0x00025331) popup_number_entry_window_t1

0x32af,	// (0x00025344) popup_number_entry_window_t2

0x32c1,	// (0x00025356) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0003111a) popup_number_entry_window_t

0x3307,	// (0x0002539c) text_title_cp2

0x331a,	// (0x000253af) bg_popup_call_pane_cp_ParamLimits

0x331a,	// (0x000253af) bg_popup_call_pane_cp

0x3328,	// (0x000253bd) call_thumbnail_pane

0x3330,	// (0x000253c5) popup_call_audio_in_window_g1_ParamLimits

0x3330,	// (0x000253c5) popup_call_audio_in_window_g1

0x333c,	// (0x000253d1) popup_call_audio_in_window_g2_ParamLimits

0x333c,	// (0x000253d1) popup_call_audio_in_window_g2

0x3348,	// (0x000253dd) popup_call_audio_in_window_g3_ParamLimits

0x3348,	// (0x000253dd) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00031123) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00031123) popup_call_audio_in_window_g

0x3354,	// (0x000253e9) popup_call_audio_in_window_t1_ParamLimits

0x3354,	// (0x000253e9) popup_call_audio_in_window_t1

0x336f,	// (0x00025404) popup_call_audio_in_window_t2_ParamLimits

0x336f,	// (0x00025404) popup_call_audio_in_window_t2

0x338a,	// (0x0002541f) popup_call_audio_in_window_t3_ParamLimits

0x338a,	// (0x0002541f) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0003112a) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0003112a) popup_call_audio_in_window_t

0x331a,	// (0x000253af) bg_popup_call_pane_cp01_ParamLimits

0x331a,	// (0x000253af) bg_popup_call_pane_cp01

0x3328,	// (0x000253bd) call_thumbnail_pane_cp02

0x339d,	// (0x00025432) call_type_pane_cp022

0x33a5,	// (0x0002543a) popup_call_audio_out_window_g1_ParamLimits

0x33a5,	// (0x0002543a) popup_call_audio_out_window_g1

0x33b7,	// (0x0002544c) popup_call_audio_out_window_g2_ParamLimits

0x33b7,	// (0x0002544c) popup_call_audio_out_window_g2

0x33c3,	// (0x00025458) popup_call_audio_out_window_g3_ParamLimits

0x33c3,	// (0x00025458) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00031131) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00031131) popup_call_audio_out_window_g

0x33d5,	// (0x0002546a) popup_call_audio_out_window_t1_ParamLimits

0x33d5,	// (0x0002546a) popup_call_audio_out_window_t1

0x33ed,	// (0x00025482) popup_call_audio_out_window_t2_ParamLimits

0x33ed,	// (0x00025482) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00031138) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00031138) popup_call_audio_out_window_t

0x3402,	// (0x00025497) bg_popup_call_pane_ParamLimits

0x3402,	// (0x00025497) bg_popup_call_pane

0x3486,	// (0x0002551b) call_thumbnail_pane_cp_ParamLimits

0x3486,	// (0x0002551b) call_thumbnail_pane_cp

0x34aa,	// (0x0002553f) call_type_pane_cp01_ParamLimits

0x34aa,	// (0x0002553f) call_type_pane_cp01

0x34ee,	// (0x00025583) popup_call_audio_first_window_g1_ParamLimits

0x34ee,	// (0x00025583) popup_call_audio_first_window_g1

0x353a,	// (0x000255cf) popup_call_audio_first_window_g2_ParamLimits

0x353a,	// (0x000255cf) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0003113d) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0003113d) popup_call_audio_first_window_g

0x357e,	// (0x00025613) popup_call_audio_first_window_t1_ParamLimits

0x357e,	// (0x00025613) popup_call_audio_first_window_t1

0x362a,	// (0x000256bf) popup_call_audio_first_window_t4_ParamLimits

0x362a,	// (0x000256bf) popup_call_audio_first_window_t4

0x36b6,	// (0x0002574b) popup_call_audio_first_window_t5_ParamLimits

0x36b6,	// (0x0002574b) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00031142) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00031142) popup_call_audio_first_window_t

0x36e5,	// (0x0002577a) bg_popup_call_pane_cp02

0x36ef,	// (0x00025784) call_type_pane_cp023

0x36f7,	// (0x0002578c) popup_call_audio_wait_window_g1

0x36ff,	// (0x00025794) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00031149) popup_call_audio_wait_window_g

0x3707,	// (0x0002579c) popup_call_audio_wait_window_t3

0x3715,	// (0x000257aa) bg_popup_call_pane_cp03_ParamLimits

0x3715,	// (0x000257aa) bg_popup_call_pane_cp03

0x3775,	// (0x0002580a) call_thumbnail_pane_cp011_ParamLimits

0x3775,	// (0x0002580a) call_thumbnail_pane_cp011

0x3781,	// (0x00025816) call_type_pane_cp034_ParamLimits

0x3781,	// (0x00025816) call_type_pane_cp034

0x37bd,	// (0x00025852) popup_call_audio_second_window_g1_ParamLimits

0x37bd,	// (0x00025852) popup_call_audio_second_window_g1

0x37f9,	// (0x0002588e) popup_call_audio_second_window_g2_ParamLimits

0x37f9,	// (0x0002588e) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0003114e) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0003114e) popup_call_audio_second_window_g

0x3835,	// (0x000258ca) popup_call_audio_second_window_t1_ParamLimits

0x3835,	// (0x000258ca) popup_call_audio_second_window_t1

0x38b6,	// (0x0002594b) popup_call_audio_second_window_t2_ParamLimits

0x38b6,	// (0x0002594b) popup_call_audio_second_window_t2

0x38ec,	// (0x00025981) popup_call_audio_second_window_t3_ParamLimits

0x38ec,	// (0x00025981) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00031153) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00031153) popup_call_audio_second_window_t

0x36e5,	// (0x0002577a) bg_popup_call_pane_cp04

0x3922,	// (0x000259b7) list_conf_pane

0x392a,	// (0x000259bf) popup_call_audio_conf_window_t1

0x3938,	// (0x000259cd) call_thumbnail_pane_g1

0x3940,	// (0x000259d5) bg_pinb_pane_ParamLimits

0x3940,	// (0x000259d5) bg_pinb_pane

0x394e,	// (0x000259e3) find_pinb_pane

0x3940,	// (0x000259d5) listscroll_pinb_pane_ParamLimits

0x3940,	// (0x000259d5) listscroll_pinb_pane

0x3958,	// (0x000259ed) pinb_bg_pane_g1

0x3958,	// (0x000259ed) pinb_bg_pane_g2

0x3958,	// (0x000259ed) pinb_bg_pane_g3

0x3958,	// (0x000259ed) pinb_bg_pane_g4

0x3958,	// (0x000259ed) pinb_bg_pane_g5

0x3958,	// (0x000259ed) pinb_bg_pane_g6

0x3958,	// (0x000259ed) pinb_bg_pane_g7

0x3958,	// (0x000259ed) pinb_bg_pane_g8

0x3958,	// (0x000259ed) pinb_bg_pane_g9

0x3958,	// (0x000259ed) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0003115a) pinb_bg_pane_g

0x396d,	// (0x00025a02) grid_pinb_pane

0x3237,	// (0x000252cc) list_pinb_pane

0x3977,	// (0x00025a0c) scroll_pane_cp01_ParamLimits

0x3977,	// (0x00025a0c) scroll_pane_cp01

0x3984,	// (0x00025a19) find_pinb_pane_g1_ParamLimits

0x3984,	// (0x00025a19) find_pinb_pane_g1

0x399c,	// (0x00025a31) find_pinb_pane_t1

0x39ae,	// (0x00025a43) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00031174) find_pinb_pane_t

0x39c3,	// (0x00025a58) input_focus_pane_cp01_ParamLimits

0x39c3,	// (0x00025a58) input_focus_pane_cp01

0x39cf,	// (0x00025a64) cell_pinb_pane_ParamLimits

0x39cf,	// (0x00025a64) cell_pinb_pane

0x39d7,	// (0x00025a6c) cell_pinb_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) cell_pinb_pane_g1

0x39e5,	// (0x00025a7a) cell_pinb_pane_g2_ParamLimits

0x39e5,	// (0x00025a7a) cell_pinb_pane_g2

0x39e5,	// (0x00025a7a) cell_pinb_pane_g3_ParamLimits

0x39e5,	// (0x00025a7a) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00031179) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00031179) cell_pinb_pane_g

0x36e5,	// (0x0002577a) grid_highlight_pane_cp01

0x3237,	// (0x000252cc) list_pinb_item_pane_ParamLimits

0x3237,	// (0x000252cc) list_pinb_item_pane

0x3237,	// (0x000252cc) list_highlight_pane_cp02

0x39f3,	// (0x00025a88) list_pinb_item_pane_g1_ParamLimits

0x39f3,	// (0x00025a88) list_pinb_item_pane_g1

0x39e5,	// (0x00025a7a) list_pinb_item_pane_g2_ParamLimits

0x39e5,	// (0x00025a7a) list_pinb_item_pane_g2

0x39d7,	// (0x00025a6c) list_pinb_item_pane_g3_ParamLimits

0x39d7,	// (0x00025a6c) list_pinb_item_pane_g3

0x39e5,	// (0x00025a7a) list_pinb_item_pane_g4_ParamLimits

0x39e5,	// (0x00025a7a) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00031180) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00031180) list_pinb_item_pane_g

0x3a01,	// (0x00025a96) list_pinb_item_pane_t1_ParamLimits

0x3a01,	// (0x00025a96) list_pinb_item_pane_t1

0x21a6,	// (0x0002423b) calc_display_pane

0x21c2,	// (0x00024257) calc_paper_pane

0x21e3,	// (0x00024278) grid_calc_pane

0x36e5,	// (0x0002577a) bg_list_pane_cp01

0x3a15,	// (0x00025aaa) clock_g1

0x3a1d,	// (0x00025ab2) clock_g2

0x0001,

0xf0f4,	// (0x00031189) clock_g

0x3a25,	// (0x00025aba) clock_t1_ParamLimits

0x3a25,	// (0x00025aba) clock_t1

0x3a3a,	// (0x00025acf) clock_t2_ParamLimits

0x3a3a,	// (0x00025acf) clock_t2

0x3a4c,	// (0x00025ae1) clock_t3_ParamLimits

0x3a4c,	// (0x00025ae1) clock_t3

0x3a5e,	// (0x00025af3) clock_t4_ParamLimits

0x3a5e,	// (0x00025af3) clock_t4

0x3a70,	// (0x00025b05) clock_t5_ParamLimits

0x3a70,	// (0x00025b05) clock_t5

0x3a85,	// (0x00025b1a) clock_t6_ParamLimits

0x3a85,	// (0x00025b1a) clock_t6

0x3a97,	// (0x00025b2c) clock_t7_ParamLimits

0x3a97,	// (0x00025b2c) clock_t7

0x3aa9,	// (0x00025b3e) clock_t8_ParamLimits

0x3aa9,	// (0x00025b3e) clock_t8

0x3abb,	// (0x00025b50) clock_t9_ParamLimits

0x3abb,	// (0x00025b50) clock_t9

0x0008,

0xf0f9,	// (0x0003118e) clock_t_ParamLimits

0xf0f9,	// (0x0003118e) clock_t

0x3acd,	// (0x00025b62) popup_clock_analogue_window_cp02

0x3acd,	// (0x00025b62) popup_clock_digital_window_cp01

0x36e5,	// (0x0002577a) listscroll_help_pane

0x36e5,	// (0x0002577a) phob_pre_status_pane

0x3ad5,	// (0x00025b6a) grid_qdial_pane

0x3940,	// (0x000259d5) listscroll_mce_pane

0x3940,	// (0x000259d5) bg_notes_pane

0x3adf,	// (0x00025b74) list_notes_pane

0x3aed,	// (0x00025b82) scroll_pane_cp06

0x3aff,	// (0x00025b94) bg_calc_paper_pane

0xa9db,	// (0x0002ca70) list_calc_pane

0x3b17,	// (0x00025bac) bg_calc_display_pane

0xa9f5,	// (0x0002ca8a) calc_display_pane_t1

0xaa0a,	// (0x0002ca9f) calc_display_pane_t2

0xaa1f,	// (0x0002cab4) calc_display_pane_t3

0x0002,

0xf10c,	// (0x000311a1) calc_display_pane_t

0x21ff,	// (0x00024294) cell_calc_pane_ParamLimits

0x21ff,	// (0x00024294) cell_calc_pane

0x3b23,	// (0x00025bb8) bg_calc_paper_pane_g1

0x3b2f,	// (0x00025bc4) bg_calc_paper_pane_g2

0x3b3b,	// (0x00025bd0) bg_calc_paper_pane_g3

0x3b47,	// (0x00025bdc) bg_calc_paper_pane_g4

0x3b53,	// (0x00025be8) bg_calc_paper_pane_g5

0x3b5f,	// (0x00025bf4) bg_calc_paper_pane_g6

0x3b6e,	// (0x00025c03) bg_calc_paper_pane_g7

0x3b7d,	// (0x00025c12) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x000311a8) bg_calc_paper_pane_g

0x3b8c,	// (0x00025c21) calc_bg_paper_pane_g9

0x3b9b,	// (0x00025c30) list_calc_item_pane_ParamLimits

0x3b9b,	// (0x00025c30) list_calc_item_pane

0x3baf,	// (0x00025c44) list_calc_item_pane_g1

0xaa31,	// (0x0002cac6) list_calc_item_pane_t1_ParamLimits

0xaa31,	// (0x0002cac6) list_calc_item_pane_t1

0x2232,	// (0x000242c7) list_calc_item_pane_t2_ParamLimits

0x2232,	// (0x000242c7) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x000311b9) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x000311b9) list_calc_item_pane_t

0x3958,	// (0x000259ed) cell_calc_pane_g1

0x3bbc,	// (0x00025c51) grid_highlight_pane_cp02

0x3bde,	// (0x00025c73) bg_calc_display_pane_g1

0xaa43,	// (0x0002cad8) bg_calc_display_pane_g2

0x3be7,	// (0x00025c7c) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x000311c3) bg_calc_display_pane_g

0x2260,	// (0x000242f5) cell_qdial_pane_ParamLimits

0x2260,	// (0x000242f5) cell_qdial_pane

0x3bf0,	// (0x00025c85) cell_qdial_pane_g1_ParamLimits

0x3bf0,	// (0x00025c85) cell_qdial_pane_g1

0x3c06,	// (0x00025c9b) cell_qdial_pane_g2_ParamLimits

0x3c06,	// (0x00025c9b) cell_qdial_pane_g2

0x3c17,	// (0x00025cac) cell_qdial_pane_g3_ParamLimits

0x3c17,	// (0x00025cac) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x000311ca) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x000311ca) cell_qdial_pane_g

0x3c39,	// (0x00025cce) cell_qdial_pane_t1_ParamLimits

0x3c39,	// (0x00025cce) cell_qdial_pane_t1

0x3c51,	// (0x00025ce6) cell_qdial_pane_t2_ParamLimits

0x3c51,	// (0x00025ce6) cell_qdial_pane_t2

0x3c64,	// (0x00025cf9) cell_qdial_pane_t3_ParamLimits

0x3c64,	// (0x00025cf9) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x000311d3) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x000311d3) cell_qdial_pane_t

0x36e5,	// (0x0002577a) grid_highlight_pane_cp04

0x3c77,	// (0x00025d0c) thumbnail_qdial_pane_ParamLimits

0x3c77,	// (0x00025d0c) thumbnail_qdial_pane

0x3cd3,	// (0x00025d68) list_help_pane

0x3cdd,	// (0x00025d72) scroll_pane_cp02

0x3ce6,	// (0x00025d7b) help_list_pane_t1_ParamLimits

0x3ce6,	// (0x00025d7b) help_list_pane_t1

0xaa4d,	// (0x0002cae2) bg_notes_pane_g2

0xaa55,	// (0x0002caea) bg_notes_pane_g3

0xaa5d,	// (0x0002caf2) notes_bg_pane_g1

0xaa65,	// (0x0002cafa) notes_bg_pane_g4

0xaa6d,	// (0x0002cb02) notes_bg_pane_g5

0xaa75,	// (0x0002cb0a) notes_bg_pane_g6

0xaa7d,	// (0x0002cb12) notes_bg_pane_g7

0xaa85,	// (0x0002cb1a) notes_bg_pane_g8

0xaa8d,	// (0x0002cb22) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x000311f1) notes_bg_pane_g

0x3d03,	// (0x00025d98) list_notes_text_pane_ParamLimits

0x3d03,	// (0x00025d98) list_notes_text_pane

0x3d26,	// (0x00025dbb) list_notes_text_pane_g1

0x3d2f,	// (0x00025dc4) list_notes_text_pane_t1

0x3d4e,	// (0x00025de3) listscroll_cale_week_pane

0x3d81,	// (0x00025e16) bg_cale_heading_pane

0x3d99,	// (0x00025e2e) bg_cale_pane_cp01

0x3db6,	// (0x00025e4b) cale_week_corner_pane

0x3dd5,	// (0x00025e6a) cale_week_day_heading_pane

0x3df2,	// (0x00025e87) cale_week_scroll_pane_g1

0x3e05,	// (0x00025e9a) cale_week_scroll_pane_g2

0x3e1d,	// (0x00025eb2) cale_week_scroll_pane_g3

0x3e35,	// (0x00025eca) cale_week_scroll_pane_g4

0x3e4d,	// (0x00025ee2) cale_week_scroll_pane_g5

0x3e65,	// (0x00025efa) cale_week_scroll_pane_g6

0x3e7d,	// (0x00025f12) cale_week_scroll_pane_g7

0x3e95,	// (0x00025f2a) cale_week_scroll_pane_g8

0x3eb1,	// (0x00025f46) cale_week_scroll_pane_g9

0x3ec9,	// (0x00025f5e) cale_week_scroll_pane_g10

0x3ee1,	// (0x00025f76) cale_week_scroll_pane_g11

0x3ef9,	// (0x00025f8e) cale_week_scroll_pane_g12

0x3f11,	// (0x00025fa6) cale_week_scroll_pane_g13

0x3f29,	// (0x00025fbe) cale_week_scroll_pane_g14

0x3f41,	// (0x00025fd6) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00031200) cale_week_scroll_pane_g

0x3f75,	// (0x0002600a) cale_week_time_pane

0x3f91,	// (0x00026026) grid_cale_week_pane

0x3fc1,	// (0x00026056) scroll_pane_cp08

0x3fde,	// (0x00026073) cell_cale_week_pane_ParamLimits

0x3fde,	// (0x00026073) cell_cale_week_pane

0x4054,	// (0x000260e9) cale_week_day_heading_pane_t1

0x407e,	// (0x00026113) cale_week_day_heading_pane_t2

0x40ad,	// (0x00026142) cale_week_day_heading_pane_t3

0x40dc,	// (0x00026171) cale_week_day_heading_pane_t4

0x410b,	// (0x000261a0) cale_week_day_heading_pane_t5

0x413a,	// (0x000261cf) cale_week_day_heading_pane_t6

0x4169,	// (0x000261fe) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00031221) cale_week_day_heading_pane_t

0x4193,	// (0x00026228) bg_cale_side_pane

0x2272,	// (0x00024307) cale_week_time_pane_t1

0x22ac,	// (0x00024341) cale_week_time_pane_t2

0x22e6,	// (0x0002437b) cale_week_time_pane_t3

0x2320,	// (0x000243b5) cale_week_time_pane_t4

0x235a,	// (0x000243ef) cale_week_time_pane_t5

0x2394,	// (0x00024429) cale_week_time_pane_t6

0x23ce,	// (0x00024463) cale_week_time_pane_t7

0x2408,	// (0x0002449d) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00031230) cale_week_time_pane_t

0x41a1,	// (0x00026236) cell_cale_week_pane_g2

0x41c0,	// (0x00026255) cell_cale_week_pane_g3_ParamLimits

0x41c0,	// (0x00026255) cell_cale_week_pane_g3

0x41d8,	// (0x0002626d) grid_highlight_pane_cp07

0x41e0,	// (0x00026275) listscroll_gms_pane

0x41ea,	// (0x0002627f) grid_gms_pane

0x41f3,	// (0x00026288) listscroll_gms_pane_g1

0x41fb,	// (0x00026290) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00031241) listscroll_gms_pane_g

0x4203,	// (0x00026298) scroll_pane_cp010

0x420e,	// (0x000262a3) cell_gms_pane_ParamLimits

0x420e,	// (0x000262a3) cell_gms_pane

0x421e,	// (0x000262b3) cell_gms_pane_g1

0x4226,	// (0x000262bb) cell_gms_pane_g2

0x3d26,	// (0x00025dbb) cell_gms_pane_g3

0x422e,	// (0x000262c3) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00031246) cell_gms_pane_g

0x4237,	// (0x000262cc) grid_highlight_pane_cp09

0x6504,	// (0x00028599) phob_pre_status_pane_g1

0x650c,	// (0x000285a1) phob_pre_status_pane_g2

0x6514,	// (0x000285a9) phob_pre_status_pane_g3

0x651c,	// (0x000285b1) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x00031634) phob_pre_status_pane_g

0x652c,	// (0x000285c1) phob_pre_status_pane_t1

0x653a,	// (0x000285cf) phob_pre_status_pane_t2

0x6548,	// (0x000285dd) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x0003163f) phob_pre_status_pane_t

0x4247,	// (0x000262dc) bg_list_pane_cp05

0x424f,	// (0x000262e4) grid_vorec_pane

0x4257,	// (0x000262ec) vorec_t1

0x4265,	// (0x000262fa) vorec_t2

0x4273,	// (0x00026308) vorec_t3

0x4281,	// (0x00026316) vorec_t4

0x31ff,	// (0x00025294) vorec_t5

0x320d,	// (0x000252a2) vorec_t6

0x0004,

0xf1ba,	// (0x0003124f) vorec_t

0x321b,	// (0x000252b0) wait_bar_pane_cp01

0x429d,	// (0x00026332) cell_vorec_pane_ParamLimits

0x429d,	// (0x00026332) cell_vorec_pane

0xaa95,	// (0x0002cb2a) cell_vorec_pane_g1

0x36e5,	// (0x0002577a) grid_highlight_pane_cp05

0x42b0,	// (0x00026345) cams_zoom_pane

0x42be,	// (0x00026353) image_vga_pane

0x39d7,	// (0x00025a6c) main_camera_pane_g1

0x39d7,	// (0x00025a6c) main_camera_pane_g2

0x39d7,	// (0x00025a6c) main_camera_pane_g3

0x39d7,	// (0x00025a6c) main_camera_pane_g4

0x39d7,	// (0x00025a6c) main_camera_pane_g5

0x39d7,	// (0x00025a6c) main_camera_pane_g6

0x39d7,	// (0x00025a6c) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0003125a) main_camera_pane_g

0x42d1,	// (0x00026366) main_camera_pane_t1

0x42d1,	// (0x00026366) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0003126b) main_camera_pane_t

0x4301,	// (0x00026396) cams_zoom_pane_cp_ParamLimits

0x4301,	// (0x00026396) cams_zoom_pane_cp

0x4329,	// (0x000263be) image_cif_pane_ParamLimits

0x4329,	// (0x000263be) image_cif_pane

0x435a,	// (0x000263ef) image_subqcif_pane

0x4362,	// (0x000263f7) main_video_pane_g1_ParamLimits

0x4362,	// (0x000263f7) main_video_pane_g1

0x4386,	// (0x0002641b) main_video_pane_g2_ParamLimits

0x4386,	// (0x0002641b) main_video_pane_g2

0x43ba,	// (0x0002644f) main_video_pane_g3_ParamLimits

0x43ba,	// (0x0002644f) main_video_pane_g3

0x43e8,	// (0x0002647d) main_video_pane_g4_ParamLimits

0x43e8,	// (0x0002647d) main_video_pane_g4

0x4416,	// (0x000264ab) main_video_pane_g5_ParamLimits

0x4416,	// (0x000264ab) main_video_pane_g5

0x442e,	// (0x000264c3) main_video_pane_g6_ParamLimits

0x442e,	// (0x000264c3) main_video_pane_g6

0x0006,

0xf1db,	// (0x00031270) main_video_pane_g_ParamLimits

0xf1db,	// (0x00031270) main_video_pane_g

0x4457,	// (0x000264ec) main_video_pane_t1_ParamLimits

0x4457,	// (0x000264ec) main_video_pane_t1

0x44a0,	// (0x00026535) cams_zoom_pane_g1

0x44a0,	// (0x00026535) cams_zoom_pane_g2

0x44a0,	// (0x00026535) cams_zoom_pane_g3

0x44a0,	// (0x00026535) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0003127f) cams_zoom_pane_g

0x44be,	// (0x00026553) grid_cams_pane

0x44d3,	// (0x00026568) linegrid_cams_pane

0x44e4,	// (0x00026579) cell_cams_pane_ParamLimits

0x44e4,	// (0x00026579) cell_cams_pane

0x4502,	// (0x00026597) cams_burst_image_pane

0x450a,	// (0x0002659f) cell_cams_pane_g1

0x36e5,	// (0x0002577a) grid_highlight_pane_cp03

0x3958,	// (0x000259ed) mp_bg_pane_g1

0x36e5,	// (0x0002577a) bg_list_pane_cp03

0xc41c,	// (0x0002e4b1) bg_mp_pane

0xc424,	// (0x0002e4b9) grid_mp_pane

0xc42c,	// (0x0002e4c1) media_player_g1

0xc434,	// (0x0002e4c9) media_player_t1

0xc442,	// (0x0002e4d7) media_player_t2

0xc450,	// (0x0002e4e5) media_player_t3

0xc45e,	// (0x0002e4f3) media_player_t4

0xc46c,	// (0x0002e501) media_player_t5

0xc47a,	// (0x0002e50f) media_player_t6

0xc488,	// (0x0002e51d) media_player_t7

0x0006,

0xf589,	// (0x0003161e) media_player_t

0xc496,	// (0x0002e52b) wait_bar_pane_cp02

0xf56e,	// (0x00031603) main_usb_pane_t

0x64fb,	// (0x00028590) cell_mp_pane

0x3958,	// (0x000259ed) cell_mp_pane_g1

0x36e5,	// (0x0002577a) grid_highlight_pane_cp06

0x4550,	// (0x000265e5) grid_skin_colour_pane

0x4558,	// (0x000265ed) list_highlight_pane_cp03

0x4560,	// (0x000265f5) skin_g1

0x4568,	// (0x000265fd) skin_t1

0x4577,	// (0x0002660c) skin_t2

0x0001,

0xf218,	// (0x000312ad) skin_t

0x4585,	// (0x0002661a) cell_skin_colour_pane_ParamLimits

0x4585,	// (0x0002661a) cell_skin_colour_pane

0x459f,	// (0x00026634) cell_skin_colour_pane_g1

0x4600,	// (0x00026695) call_video_g1_ParamLimits

0x4600,	// (0x00026695) call_video_g1

0x4616,	// (0x000266ab) call_video_g2_ParamLimits

0x4616,	// (0x000266ab) call_video_g2

0x0001,

0xf21d,	// (0x000312b2) call_video_g_ParamLimits

0xf21d,	// (0x000312b2) call_video_g

0x465e,	// (0x000266f3) call_video_uplink_pane_cp1_ParamLimits

0x465e,	// (0x000266f3) call_video_uplink_pane_cp1

0x46c3,	// (0x00026758) call_video_uplink_pane_cp2

0x46fb,	// (0x00026790) video_down_crop_pane_ParamLimits

0x46fb,	// (0x00026790) video_down_crop_pane

0x47be,	// (0x00026853) video_down_pane_ParamLimits

0x47be,	// (0x00026853) video_down_pane

0x4868,	// (0x000268fd) video_down_subqcif_pane_ParamLimits

0x4868,	// (0x000268fd) video_down_subqcif_pane

0x4880,	// (0x00026915) video_down_subqcif_pane_cp_ParamLimits

0x4880,	// (0x00026915) video_down_subqcif_pane_cp

0x48b7,	// (0x0002694c) im_reading_pane_ParamLimits

0x48b7,	// (0x0002694c) im_reading_pane

0x48c9,	// (0x0002695e) im_writing_pane_ParamLimits

0x48c9,	// (0x0002695e) im_writing_pane

0x48e7,	// (0x0002697c) im_reading_pane_t1

0x491d,	// (0x000269b2) list_im_pane

0x492e,	// (0x000269c3) scroll_pane_cp07

0x4947,	// (0x000269dc) im_writing_pane_t1_ParamLimits

0x4947,	// (0x000269dc) im_writing_pane_t1

0x495c,	// (0x000269f1) im_writing_pane_t2_ParamLimits

0x495c,	// (0x000269f1) im_writing_pane_t2

0x0001,

0xf227,	// (0x000312bc) im_writing_pane_t_ParamLimits

0xf227,	// (0x000312bc) im_writing_pane_t

0x36e5,	// (0x0002577a) input_focus_pane_cp04

0x36e5,	// (0x0002577a) input_focus_pane_cp05

0x4979,	// (0x00026a0e) list_im_single_pane_ParamLimits

0x4979,	// (0x00026a0e) list_im_single_pane

0x498f,	// (0x00026a24) list_single_im_pane_t1

0x64c1,	// (0x00028556) blid_accuracy_pane

0x64c9,	// (0x0002855e) blid_compass_pane

0x64d1,	// (0x00028566) main_location_t1

0x64df,	// (0x00028574) main_location_t2

0x64ed,	// (0x00028582) main_location_t3

0x0002,

0xf598,	// (0x0003162d) main_location_t

0x36e5,	// (0x0002577a) aid_levels_location

0x3958,	// (0x000259ed) blid_accuracy_pane_g1

0x3958,	// (0x000259ed) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00031310) blid_accuracy_pane_g

0x49c9,	// (0x00026a5e) wml_content_pane

0x4a07,	// (0x00026a9c) wml_button_pane_ParamLimits

0x4a07,	// (0x00026a9c) wml_button_pane

0x4a1b,	// (0x00026ab0) wml_list_single_large_pane_ParamLimits

0x4a1b,	// (0x00026ab0) wml_list_single_large_pane

0x4a2f,	// (0x00026ac4) wml_list_single_medium_pane_ParamLimits

0x4a2f,	// (0x00026ac4) wml_list_single_medium_pane

0x4a44,	// (0x00026ad9) wml_list_single_small_pane_ParamLimits

0x4a44,	// (0x00026ad9) wml_list_single_small_pane

0x4a5b,	// (0x00026af0) wml_selection_box_pane_ParamLimits

0x4a5b,	// (0x00026af0) wml_selection_box_pane

0x4a6e,	// (0x00026b03) wml_list_single_pane_t1

0x4a7d,	// (0x00026b12) wml_list_single_medium_pane_t1

0x4a8c,	// (0x00026b21) wml_list_single_large_pane_t1

0x4a9b,	// (0x00026b30) input_focus_pane_cp02_ParamLimits

0x4a9b,	// (0x00026b30) input_focus_pane_cp02

0x4aae,	// (0x00026b43) wml_selection_box_pane_g1

0x4ab7,	// (0x00026b4c) wml_selection_box_pane_t1_ParamLimits

0x4ab7,	// (0x00026b4c) wml_selection_box_pane_t1

0x3940,	// (0x000259d5) bg_wml_button_pane_ParamLimits

0x3940,	// (0x000259d5) bg_wml_button_pane

0x4acf,	// (0x00026b64) wml_button_pane_g1

0x4ad7,	// (0x00026b6c) wml_button_pane_t1

0x4acf,	// (0x00026b64) wml_button_bg_pane_g1

0x4ae7,	// (0x00026b7c) wml_button_bg_pane_g2

0x4aef,	// (0x00026b84) wml_button_bg_pane_g3

0x4af7,	// (0x00026b8c) wml_button_bg_pane_g4

0x4aff,	// (0x00026b94) wml_button_bg_pane_g5

0x4b07,	// (0x00026b9c) wml_button_bg_pane_g6

0x4b0f,	// (0x00026ba4) wml_button_bg_pane_g7

0x4b17,	// (0x00026bac) wml_button_bg_pane_g8

0x4b1f,	// (0x00026bb4) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x000312c1) wml_button_bg_pane_g

0x4b27,	// (0x00026bbc) bg_list_pane_cp02

0x4b30,	// (0x00026bc5) mce_header_pane_ParamLimits

0x4b30,	// (0x00026bc5) mce_header_pane

0x4b44,	// (0x00026bd9) mce_icon_pane

0x4b44,	// (0x00026bd9) mce_image_pane

0x4b4d,	// (0x00026be2) mce_text_pane_ParamLimits

0x4b4d,	// (0x00026be2) mce_text_pane

0x4b61,	// (0x00026bf6) scroll_pane_cp03

0x4b61,	// (0x00026bf6) scroll_pane_cp04

0x4b6b,	// (0x00026c00) scroll_pane_cp05_ParamLimits

0x4b6b,	// (0x00026c00) scroll_pane_cp05

0x4b77,	// (0x00026c0c) mce_header_field_pane_ParamLimits

0x4b77,	// (0x00026c0c) mce_header_field_pane

0x4b8e,	// (0x00026c23) mce_header_field_pane_2_ParamLimits

0x4b8e,	// (0x00026c23) mce_header_field_pane_2

0x4ba4,	// (0x00026c39) mce_header_field_pane_3

0x4bac,	// (0x00026c41) list_single_mce_message_pane_ParamLimits

0x4bac,	// (0x00026c41) list_single_mce_message_pane

0x4bc1,	// (0x00026c56) list_single_mce_smart_pane_ParamLimits

0x4bc1,	// (0x00026c56) list_single_mce_smart_pane

0x4be1,	// (0x00026c76) input_focus_pane_cp03

0x4bea,	// (0x00026c7f) list_header_data_pane

0x4bf2,	// (0x00026c87) mce_header_field_pane_t1

0x4c00,	// (0x00026c95) list_single_mce_header_pane_ParamLimits

0x4c00,	// (0x00026c95) list_single_mce_header_pane

0x4c14,	// (0x00026ca9) list_single_mce_header_pane_t1

0x4c23,	// (0x00026cb8) list_single_mce_message_pane_g1

0x4c2c,	// (0x00026cc1) list_single_mce_message_pane_t1

0x4c61,	// (0x00026cf6) bg_cale_heading_pane_cp01_ParamLimits

0x4c61,	// (0x00026cf6) bg_cale_heading_pane_cp01

0x4c90,	// (0x00026d25) bg_cale_pane_cp02_ParamLimits

0x4c90,	// (0x00026d25) bg_cale_pane_cp02

0x4cbd,	// (0x00026d52) cale_month_corner_pane

0x4cdc,	// (0x00026d71) cale_month_day_heading_pane_ParamLimits

0x4cdc,	// (0x00026d71) cale_month_day_heading_pane

0x4d13,	// (0x00026da8) cale_month_pane_g1_ParamLimits

0x4d13,	// (0x00026da8) cale_month_pane_g1

0x4d37,	// (0x00026dcc) cale_month_pane_g2_ParamLimits

0x4d37,	// (0x00026dcc) cale_month_pane_g2

0x4d5f,	// (0x00026df4) cale_month_pane_g3_ParamLimits

0x4d5f,	// (0x00026df4) cale_month_pane_g3

0x4d9b,	// (0x00026e30) cale_month_pane_g4_ParamLimits

0x4d9b,	// (0x00026e30) cale_month_pane_g4

0x4dd7,	// (0x00026e6c) cale_month_pane_g5_ParamLimits

0x4dd7,	// (0x00026e6c) cale_month_pane_g5

0x4e13,	// (0x00026ea8) cale_month_pane_g6_ParamLimits

0x4e13,	// (0x00026ea8) cale_month_pane_g6

0x4e4f,	// (0x00026ee4) cale_month_pane_g7_ParamLimits

0x4e4f,	// (0x00026ee4) cale_month_pane_g7

0x4e8b,	// (0x00026f20) cale_month_pane_g8_ParamLimits

0x4e8b,	// (0x00026f20) cale_month_pane_g8

0x4ecf,	// (0x00026f64) cale_month_pane_g9_ParamLimits

0x4ecf,	// (0x00026f64) cale_month_pane_g9

0x4f11,	// (0x00026fa6) cale_month_pane_g10_ParamLimits

0x4f11,	// (0x00026fa6) cale_month_pane_g10

0x4f53,	// (0x00026fe8) cale_month_pane_g11_ParamLimits

0x4f53,	// (0x00026fe8) cale_month_pane_g11

0x4f95,	// (0x0002702a) cale_month_pane_g12_ParamLimits

0x4f95,	// (0x0002702a) cale_month_pane_g12

0x4fd7,	// (0x0002706c) cale_month_pane_g13_ParamLimits

0x4fd7,	// (0x0002706c) cale_month_pane_g13

0x000c,

0xf23f,	// (0x000312d4) cale_month_pane_g_ParamLimits

0xf23f,	// (0x000312d4) cale_month_pane_g

0x502b,	// (0x000270c0) cale_month_week_pane

0x5047,	// (0x000270dc) grid_cale_month_pane_ParamLimits

0x5047,	// (0x000270dc) grid_cale_month_pane

0x5075,	// (0x0002710a) cale_month_day_heading_pane_t1

0x50fb,	// (0x00027190) cale_month_day_heading_pane_t2

0x518c,	// (0x00027221) cale_month_day_heading_pane_t3

0x521d,	// (0x000272b2) cale_month_day_heading_pane_t4

0x52ae,	// (0x00027343) cale_month_day_heading_pane_t5

0x533f,	// (0x000273d4) cale_month_day_heading_pane_t6

0x53d0,	// (0x00027465) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x000312ef) cale_month_day_heading_pane_t

0x4193,	// (0x00026228) bg_cale_side_pane_cp01

0x5465,	// (0x000274fa) cale_month_week_pane_t1

0x547e,	// (0x00027513) cale_month_week_pane_t2

0x5497,	// (0x0002752c) cale_month_week_pane_t3

0x54b0,	// (0x00027545) cale_month_week_pane_t4

0x54c9,	// (0x0002755e) cale_month_week_pane_t5

0x54e2,	// (0x00027577) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x000312fe) cale_month_week_pane_t

0x54fb,	// (0x00027590) cell_cale_month_pane_ParamLimits

0x54fb,	// (0x00027590) cell_cale_month_pane

0xaa9f,	// (0x0002cb34) cell_cale_month_pane_g1

0x2442,	// (0x000244d7) cell_cale_month_pane_t1_ParamLimits

0x2442,	// (0x000244d7) cell_cale_month_pane_t1

0x41d8,	// (0x0002626d) grid_highlight_pane_cp08

0x3958,	// (0x000259ed) main_smil_g1

0x55ed,	// (0x00027682) smil_status_pane

0x55f6,	// (0x0002768b) smil_text_pane

0xc2e4,	// (0x0002e379) bg_popup_call3_rect_pane_g8

0xc2ec,	// (0x0002e381) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x000315ae) bg_popup_call3_rect_pane_g

0xc5bc,	// (0x0002e651) smil_status_volume_pane_g1

0x5608,	// (0x0002769d) smil_status_pane_t1

0xc5ef,	// (0x0002e684) volume_smil_pane

0x561f,	// (0x000276b4) list_smil_text_pane

0x5629,	// (0x000276be) scroll_pane_cp011

0x5634,	// (0x000276c9) smil_text_list_pane_t1_ParamLimits

0x5634,	// (0x000276c9) smil_text_list_pane_t1

0xaaab,	// (0x0002cb40) aid_volume_smil_ParamLimits

0xaaab,	// (0x0002cb40) aid_volume_smil

0x3958,	// (0x000259ed) smil_volume_pane_g1

0x3958,	// (0x000259ed) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00031310) smil_volume_pane_g

0x3d4e,	// (0x00025de3) listscroll_cale_day_pane

0x5670,	// (0x00027705) bg_cale_pane

0x5688,	// (0x0002771d) list_cale_pane

0x56ab,	// (0x00027740) scroll_pane_cp09

0x56bc,	// (0x00027751) cale_bg_pane_g1

0x56c4,	// (0x00027759) cale_bg_pane_g2

0x56cc,	// (0x00027761) cale_bg_pane_g3

0x56d4,	// (0x00027769) cale_bg_pane_g4

0x56dc,	// (0x00027771) cale_bg_pane_g5

0x56e4,	// (0x00027779) cale_bg_pane_g6

0x56ec,	// (0x00027781) cale_bg_pane_g7

0x56f4,	// (0x00027789) cale_bg_pane_g8

0x56fc,	// (0x00027791) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00031315) cale_bg_pane_g

0x570c,	// (0x000277a1) list_cale_time_pane_ParamLimits

0x570c,	// (0x000277a1) list_cale_time_pane

0x5721,	// (0x000277b6) list_cale_time_pane_g1_ParamLimits

0x5721,	// (0x000277b6) list_cale_time_pane_g1

0x572d,	// (0x000277c2) list_cale_time_pane_g2_ParamLimits

0x572d,	// (0x000277c2) list_cale_time_pane_g2

0x573a,	// (0x000277cf) list_cale_time_pane_g3_ParamLimits

0x573a,	// (0x000277cf) list_cale_time_pane_g3

0x5746,	// (0x000277db) list_cale_time_pane_g4_ParamLimits

0x5746,	// (0x000277db) list_cale_time_pane_g4

0x5752,	// (0x000277e7) list_cale_time_pane_g5_ParamLimits

0x5752,	// (0x000277e7) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00031328) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00031328) list_cale_time_pane_g

0x576b,	// (0x00027800) list_cale_time_pane_t1_ParamLimits

0x576b,	// (0x00027800) list_cale_time_pane_t1

0x5793,	// (0x00027828) list_cale_time_pane_t2_ParamLimits

0x5793,	// (0x00027828) list_cale_time_pane_t2

0x5bb1,	// (0x00027c46) aid_blid_cardinal_pane

0x5bef,	// (0x00027c84) compass_pane_t4

0x57bb,	// (0x00027850) list_cale_time_pane_t4_ParamLimits

0x57bb,	// (0x00027850) list_cale_time_pane_t4

0x5bfd,	// (0x00027c92) compass_pane_t5

0x5c0b,	// (0x00027ca0) compass_pane_t6

0x5c19,	// (0x00027cae) compass_pane_t7

0xae65,	// (0x0002cefa) navi_pane_cc_t1

0xb01c,	// (0x0002d0b1) aid_phob_thumbnail_center_pane

0x5f73,	// (0x00028008) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00031335) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00031335) list_cale_time_pane_t

0x331a,	// (0x000253af) bg_popup_window_pane_cp02_ParamLimits

0x331a,	// (0x000253af) bg_popup_window_pane_cp02

0x57e3,	// (0x00027878) heading_pane_cp01_ParamLimits

0x57e3,	// (0x00027878) heading_pane_cp01

0x57ef,	// (0x00027884) loc_req_pane_ParamLimits

0x57ef,	// (0x00027884) loc_req_pane

0x57ff,	// (0x00027894) loc_type_pane_ParamLimits

0x57ff,	// (0x00027894) loc_type_pane

0x5811,	// (0x000278a6) loc_type_pane_t1_ParamLimits

0x5811,	// (0x000278a6) loc_type_pane_t1

0x5823,	// (0x000278b8) loc_type_pane_t2_ParamLimits

0x5823,	// (0x000278b8) loc_type_pane_t2

0x5835,	// (0x000278ca) loc_type_pane_t3_ParamLimits

0x5835,	// (0x000278ca) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0003133c) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0003133c) loc_type_pane_t

0x5847,	// (0x000278dc) list_loc_req_pane

0x5851,	// (0x000278e6) scroll_pane_cp012

0x585a,	// (0x000278ef) list_single_loc_request_popup_menu_pane_ParamLimits

0x585a,	// (0x000278ef) list_single_loc_request_popup_menu_pane

0x5867,	// (0x000278fc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x5867,	// (0x000278fc) list_single_loc_request_popup_menu_pane_g1

0x5873,	// (0x00027908) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x5873,	// (0x00027908) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00031343) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00031343) list_single_loc_request_popup_menu_pane_g

0x587f,	// (0x00027914) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x587f,	// (0x00027914) list_single_loc_request_popup_menu_pane_t1

0x3940,	// (0x000259d5) bg_popup_window_pane_cp03_ParamLimits

0x3940,	// (0x000259d5) bg_popup_window_pane_cp03

0xaacd,	// (0x0002cb62) heading_loc_req_pane_ParamLimits

0xaacd,	// (0x0002cb62) heading_loc_req_pane

0x5895,	// (0x0002792a) popup_dyc_status_message_window_g1_ParamLimits

0x5895,	// (0x0002792a) popup_dyc_status_message_window_g1

0x58a9,	// (0x0002793e) popup_dyc_status_message_window_t1_ParamLimits

0x58a9,	// (0x0002793e) popup_dyc_status_message_window_t1

0x58be,	// (0x00027953) popup_dyc_status_message_window_t2_ParamLimits

0x58be,	// (0x00027953) popup_dyc_status_message_window_t2

0x58d3,	// (0x00027968) popup_dyc_status_message_window_t3_ParamLimits

0x58d3,	// (0x00027968) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00031348) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00031348) popup_dyc_status_message_window_t

0x36e5,	// (0x0002577a) bg_heading_pane_cp01

0x58ef,	// (0x00027984) heading_loc_req_pane_g1

0x58f7,	// (0x0002798c) heading_loc_req_pane_g2

0x58ff,	// (0x00027994) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0003134f) heading_loc_req_pane_g

0x5907,	// (0x0002799c) heading_loc_req_pane_t1

0x594e,	// (0x000279e3) bg_popup_sub_pane_cp01_ParamLimits

0x594e,	// (0x000279e3) bg_popup_sub_pane_cp01

0x595c,	// (0x000279f1) popup_cale_events_window_g1_ParamLimits

0x595c,	// (0x000279f1) popup_cale_events_window_g1

0x597c,	// (0x00027a11) popup_cale_events_window_g2_ParamLimits

0x597c,	// (0x00027a11) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x00031383) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x00031383) popup_cale_events_window_g

0xaad9,	// (0x0002cb6e) popup_cale_events_window_t1_ParamLimits

0xaad9,	// (0x0002cb6e) popup_cale_events_window_t1

0xaaeb,	// (0x0002cb80) popup_cale_events_window_t2_ParamLimits

0xaaeb,	// (0x0002cb80) popup_cale_events_window_t2

0xab29,	// (0x0002cbbe) popup_cale_events_window_t3_ParamLimits

0xab29,	// (0x0002cbbe) popup_cale_events_window_t3

0xab63,	// (0x0002cbf8) popup_cale_events_window_t4_ParamLimits

0xab63,	// (0x0002cbf8) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x00031388) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x00031388) popup_cale_events_window_t

0x599c,	// (0x00027a31) call_type_pane

0x59ac,	// (0x00027a41) popup_call_status_window_g1

0x59c0,	// (0x00027a55) popup_call_status_window_g2

0x59d4,	// (0x00027a69) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x00031391) popup_call_status_window_g

0xab99,	// (0x0002cc2e) call_type_pane_g1

0xaba2,	// (0x0002cc37) call_type_pane_g2

0x0001,

0xf303,	// (0x00031398) call_type_pane_g

0x36e5,	// (0x0002577a) bg_popup_sub_pane_cp02

0xabab,	// (0x0002cc40) listscroll_popup_wml_pane

0xabb3,	// (0x0002cc48) list_wml_pane

0xabbd,	// (0x0002cc52) scroll_pane_cp013

0x59e4,	// (0x00027a79) list_single_graphic_popup_wml_pane_ParamLimits

0x59e4,	// (0x00027a79) list_single_graphic_popup_wml_pane

0x3958,	// (0x000259ed) list_single_graphic_popup_wml_pane_g1

0xabc6,	// (0x0002cc5b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x0003139d) list_single_graphic_popup_wml_pane_g

0xabce,	// (0x0002cc63) list_single_graphic_popup_wml_pane_t1

0xabe4,	// (0x0002cc79) aid_call_pane

0x3938,	// (0x000259cd) popup_clock_analogue_window_g1

0x3938,	// (0x000259cd) popup_clock_analogue_window_g2

0xabec,	// (0x0002cc81) popup_clock_analogue_window_g3

0xabec,	// (0x0002cc81) popup_clock_analogue_window_g4

0x3958,	// (0x000259ed) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x000313a2) popup_clock_analogue_window_g

0xabf4,	// (0x0002cc89) popup_clock_analogue_window_t1

0xac02,	// (0x0002cc97) clock_digital_number_pane_ParamLimits

0xac02,	// (0x0002cc97) clock_digital_number_pane

0xac0e,	// (0x0002cca3) clock_digital_number_pane_cp02_ParamLimits

0xac0e,	// (0x0002cca3) clock_digital_number_pane_cp02

0xac1a,	// (0x0002ccaf) clock_digital_number_pane_cp03_ParamLimits

0xac1a,	// (0x0002ccaf) clock_digital_number_pane_cp03

0xac26,	// (0x0002ccbb) clock_digital_number_pane_cp04_ParamLimits

0xac26,	// (0x0002ccbb) clock_digital_number_pane_cp04

0xac32,	// (0x0002ccc7) clock_digital_separator_pane_ParamLimits

0xac32,	// (0x0002ccc7) clock_digital_separator_pane

0xac3e,	// (0x0002ccd3) popup_clock_digital_window_t1

0x3958,	// (0x000259ed) clock_digital_number_pane_g1

0x3958,	// (0x000259ed) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00031310) clock_digital_number_pane_g

0x3958,	// (0x000259ed) clock_digital_separator_pane_g1

0x3958,	// (0x000259ed) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00031310) clock_digital_separator_pane_g

0x36e5,	// (0x0002577a) bg_popup_window_pane_cp04

0xac5b,	// (0x0002ccf0) heading_pane_cp03

0xac63,	// (0x0002ccf8) listscroll_popup_gms_pane

0xac6b,	// (0x0002cd00) grid_large_graphic_popup_pane

0xac75,	// (0x0002cd0a) listscroll_popup_gms_pane_g1

0xac7d,	// (0x0002cd12) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x000313ad) listscroll_popup_gms_pane_g

0x49ff,	// (0x00026a94) scroll_pane_cp014

0x59f7,	// (0x00027a8c) cell_large_graphic_popup_pane_ParamLimits

0x59f7,	// (0x00027a8c) cell_large_graphic_popup_pane

0x5a0d,	// (0x00027aa2) cell_large_graphic_popup_pane_g1_ParamLimits

0x5a0d,	// (0x00027aa2) cell_large_graphic_popup_pane_g1

0xac85,	// (0x0002cd1a) cell_large_graphic_popup_pane_g2_ParamLimits

0xac85,	// (0x0002cd1a) cell_large_graphic_popup_pane_g2

0xac91,	// (0x0002cd26) cell_large_graphic_popup_pane_g3_ParamLimits

0xac91,	// (0x0002cd26) cell_large_graphic_popup_pane_g3

0xac9e,	// (0x0002cd33) cell_large_graphic_popup_pane_g4_ParamLimits

0xac9e,	// (0x0002cd33) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x000313b2) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x000313b2) cell_large_graphic_popup_pane_g

0xacae,	// (0x0002cd43) grid_highlight_pane_cp010

0x3958,	// (0x000259ed) bg_popup_call_pane_g1

0xacb8,	// (0x0002cd4d) list_single_graphic_popup_conf_pane_ParamLimits

0xacb8,	// (0x0002cd4d) list_single_graphic_popup_conf_pane

0xaccb,	// (0x0002cd60) list_highlight_pane_cp01

0xacd4,	// (0x0002cd69) list_single_graphic_popup_conf_pane_g1

0xacdc,	// (0x0002cd71) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x000313bb) list_single_graphic_popup_conf_pane_g

0xace4,	// (0x0002cd79) list_single_graphic_popup_conf_pane_t1

0xacf2,	// (0x0002cd87) linegrid_cams_pane_g1

0x5a19,	// (0x00027aae) linegrid_cams_pane_g2

0x3d26,	// (0x00025dbb) linegrid_cams_pane_g3

0xacfb,	// (0x0002cd90) linegrid_cams_pane_g4

0x5a22,	// (0x00027ab7) linegrid_cams_pane_g5

0x5a2b,	// (0x00027ac0) linegrid_cams_pane_g6

0x422e,	// (0x000262c3) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x000313c0) linegrid_cams_pane_g

0xad04,	// (0x0002cd99) popup_clock_analogue_window

0xad04,	// (0x0002cd99) popup_clock_digital_window

0x36e5,	// (0x0002577a) popup_phob_thumbnail_window

0x3958,	// (0x000259ed) call_video_uplink_pane_g1

0xad0d,	// (0x0002cda2) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x000313cf) call_video_uplink_pane_g

0x41d8,	// (0x0002626d) video_uplink_pane

0xad15,	// (0x0002cdaa) mce_image_pane_g1

0x5a34,	// (0x00027ac9) mce_image_pane_g2

0x5a3c,	// (0x00027ad1) mce_image_pane_g3

0x5a44,	// (0x00027ad9) mce_image_pane_g4

0x5a4c,	// (0x00027ae1) mce_image_pane_g5

0x0004,

0xf33f,	// (0x000313d4) mce_image_pane_g

0xad1f,	// (0x0002cdb4) control_top_pane_stacon_cp01_ParamLimits

0xad1f,	// (0x0002cdb4) control_top_pane_stacon_cp01

0xad2f,	// (0x0002cdc4) uni_indicator_pane_stacon_cp01_ParamLimits

0xad2f,	// (0x0002cdc4) uni_indicator_pane_stacon_cp01

0xad40,	// (0x0002cdd5) bg_popup_sub_pane_cp03

0xad4a,	// (0x0002cddf) chi_dic_find_pane

0x5a54,	// (0x00027ae9) listscroll_chi_dic_pane

0xad52,	// (0x0002cde7) main_pane_chidic_g1

0xad5a,	// (0x0002cdef) chi_dic_find_pane_t1

0xad68,	// (0x0002cdfd) find_chidic_pane

0xad71,	// (0x0002ce06) chi_dic_list_pane_ParamLimits

0xad71,	// (0x0002ce06) chi_dic_list_pane

0xad82,	// (0x0002ce17) scroll_pane_cp020

0xad8a,	// (0x0002ce1f) find_chidic_pane_t1

0x36e5,	// (0x0002577a) input_focus_pane_cp06

0x5a68,	// (0x00027afd) list_chi_dic_pane_ParamLimits

0x5a68,	// (0x00027afd) list_chi_dic_pane

0x5a7a,	// (0x00027b0f) list_chi_dic_pane_t1_ParamLimits

0x5a7a,	// (0x00027b0f) list_chi_dic_pane_t1

0x36e5,	// (0x0002577a) list_highlight_pane_cp020

0xad99,	// (0x0002ce2e) bg_cale_heading_pane_g1

0x5a8d,	// (0x00027b22) bg_cale_heading_pane_g2

0x5a95,	// (0x00027b2a) bg_cale_heading_pane_g3

0x5a9d,	// (0x00027b32) bg_cale_heading_pane_g4

0x5aa5,	// (0x00027b3a) bg_cale_heading_pane_g5

0x5aad,	// (0x00027b42) bg_cale_heading_pane_g6

0x5ab5,	// (0x00027b4a) bg_cale_heading_pane_g7

0x5abd,	// (0x00027b52) bg_cale_heading_pane_g8

0x5ac5,	// (0x00027b5a) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x000313df) bg_cale_heading_pane_g

0xad99,	// (0x0002ce2e) bg_cale_side_pane_g1

0x5acd,	// (0x00027b62) bg_cale_side_pane_g2

0x5ad5,	// (0x00027b6a) bg_cale_side_pane_g3

0x5add,	// (0x00027b72) bg_cale_side_pane_g4

0x5ae5,	// (0x00027b7a) bg_cale_side_pane_g5

0x5aed,	// (0x00027b82) bg_cale_side_pane_g6

0x5af5,	// (0x00027b8a) bg_cale_side_pane_g7

0x5afd,	// (0x00027b92) bg_cale_side_pane_g8

0x5b05,	// (0x00027b9a) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x000313f2) bg_cale_side_pane_g

0x5b0d,	// (0x00027ba2) popup_call_status_window_ParamLimits

0x5b0d,	// (0x00027ba2) popup_call_status_window

0xada1,	// (0x0002ce36) stacon_top_pane

0xada9,	// (0x0002ce3e) status_pane_ParamLimits

0xada9,	// (0x0002ce3e) status_pane

0xadc3,	// (0x0002ce58) status_small_pane

0xadcb,	// (0x0002ce60) control_pane

0x36e5,	// (0x0002577a) stacon_bottom_pane

0xadd3,	// (0x0002ce68) list_single_mce_smart_pane_t1_ParamLimits

0xadd3,	// (0x0002ce68) list_single_mce_smart_pane_t1

0xade6,	// (0x0002ce7b) list_single_mce_smart_pane_t2_ParamLimits

0xade6,	// (0x0002ce7b) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x00031405) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x00031405) list_single_mce_smart_pane_t

0x5b54,	// (0x00027be9) compass_pane

0x5b5d,	// (0x00027bf2) main_location2_pane_t1

0x5b73,	// (0x00027c08) main_location2_pane_t2

0x5b89,	// (0x00027c1e) main_location2_pane_t3

0x0003,

0xf375,	// (0x0003140a) main_location2_pane_t

0xae0e,	// (0x0002cea3) compass_pane_g1_ParamLimits

0xae0e,	// (0x0002cea3) compass_pane_g1

0x5bd1,	// (0x00027c66) compass_pane_t1

0x5be0,	// (0x00027c75) compass_pane_t2

0x0005,

0xf37e,	// (0x00031413) compass_pane_t

0x5c27,	// (0x00027cbc) text_secondary_cp61

0xae5c,	// (0x0002cef1) navi_pane_cams_g5

0xaea8,	// (0x0002cf3d) navi_pane_im_t1

0xaeb6,	// (0x0002cf4b) navi_pane_mp_g1_ParamLimits

0xaeb6,	// (0x0002cf4b) navi_pane_mp_g1

0xaeca,	// (0x0002cf5f) navi_pane_mp_g2_ParamLimits

0xaeca,	// (0x0002cf5f) navi_pane_mp_g2

0xaed6,	// (0x0002cf6b) navi_pane_mp_g3_ParamLimits

0xaed6,	// (0x0002cf6b) navi_pane_mp_g3

0x0002,

0xf392,	// (0x00031427) navi_pane_mp_g_ParamLimits

0xf392,	// (0x00031427) navi_pane_mp_g

0xaee2,	// (0x0002cf77) navi_pane_mp_t1

0xaef0,	// (0x0002cf85) navi_pane_mp_t2

0x0002,

0xf399,	// (0x0003142e) navi_pane_mp_t

0xaf5b,	// (0x0002cff0) navi_pane_vt_g1

0xaee2,	// (0x0002cf77) navi_pane_vt_t1

0xaf63,	// (0x0002cff8) navi_slider_pane

0x4247,	// (0x000262dc) zooming_pane

0xaf6b,	// (0x0002d000) navi_slider_pane_g1

0xaf74,	// (0x0002d009) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x00031435) navi_slider_pane_g

0xafa1,	// (0x0002d036) aid_levels_zoom

0xafa9,	// (0x0002d03e) zooming_pane_g1

0xafb1,	// (0x0002d046) zooming_pane_g2

0xafb1,	// (0x0002d046) zooming_pane_g3

0x0002,

0xf3af,	// (0x00031444) zooming_pane_g

0xafb9,	// (0x0002d04e) level_10_zoom

0xafc2,	// (0x0002d057) level_11_zoom

0xafcb,	// (0x0002d060) level_1_zoom

0xafd4,	// (0x0002d069) level_2_zoom

0xafdd,	// (0x0002d072) level_3_zoom

0xafe6,	// (0x0002d07b) level_4_zoom

0xafef,	// (0x0002d084) level_5_zoom

0xaff8,	// (0x0002d08d) level_6_zoom

0xb001,	// (0x0002d096) level_7_zoom

0xb00a,	// (0x0002d09f) level_8_zoom

0xb013,	// (0x0002d0a8) level_9_zoom

0xb024,	// (0x0002d0b9) popup_phob_thumbnail_window_g1

0xb02c,	// (0x0002d0c1) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x0003144b) popup_phob_thumbnail_window_g

0xc49e,	// (0x0002e533) level_1_location

0xc4a6,	// (0x0002e53b) level_2_location

0xc4ae,	// (0x0002e543) level_3_location

0xc4b6,	// (0x0002e54b) level_4_location

0x4247,	// (0x000262dc) level_5_location

0x5cbd,	// (0x00027d52) mce_icon_pane_g1

0x5cc5,	// (0x00027d5a) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x00031450) mce_icon_pane_g

0xb034,	// (0x0002d0c9) main_mup_pane_g1_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g1

0xb034,	// (0x0002d0c9) main_mup_pane_g2_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g2

0xb034,	// (0x0002d0c9) main_mup_pane_g3_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g3

0xb034,	// (0x0002d0c9) main_mup_pane_g4_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g4

0xb034,	// (0x0002d0c9) main_mup_pane_g5_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g5

0xb034,	// (0x0002d0c9) main_mup_pane_g6_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g6

0xb034,	// (0x0002d0c9) main_mup_pane_g7_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g7

0xb034,	// (0x0002d0c9) main_mup_pane_g8_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g8

0xb034,	// (0x0002d0c9) main_mup_pane_g9_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g9

0xb034,	// (0x0002d0c9) main_mup_pane_g10_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g10

0xb034,	// (0x0002d0c9) main_mup_pane_g11_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g11

0x39d7,	// (0x00025a6c) main_mup_pane_g12_ParamLimits

0x39d7,	// (0x00025a6c) main_mup_pane_g12

0xb034,	// (0x0002d0c9) main_mup_pane_g13_ParamLimits

0xb034,	// (0x0002d0c9) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x00031455) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x00031455) main_mup_pane_g

0xb042,	// (0x0002d0d7) main_mup_pane_t1_ParamLimits

0xb042,	// (0x0002d0d7) main_mup_pane_t1

0xb042,	// (0x0002d0d7) main_mup_pane_t2_ParamLimits

0xb042,	// (0x0002d0d7) main_mup_pane_t2

0xb042,	// (0x0002d0d7) main_mup_pane_t3_ParamLimits

0xb042,	// (0x0002d0d7) main_mup_pane_t3

0x42d1,	// (0x00026366) main_mup_pane_t4_ParamLimits

0x42d1,	// (0x00026366) main_mup_pane_t4

0x42d1,	// (0x00026366) main_mup_pane_t5_ParamLimits

0x42d1,	// (0x00026366) main_mup_pane_t5

0xb056,	// (0x0002d0eb) main_mup_pane_t6_ParamLimits

0xb056,	// (0x0002d0eb) main_mup_pane_t6

0x0005,

0xf3db,	// (0x00031470) main_mup_pane_t_ParamLimits

0xf3db,	// (0x00031470) main_mup_pane_t

0xb06a,	// (0x0002d0ff) mup_progress_pane_ParamLimits

0xb06a,	// (0x0002d0ff) mup_progress_pane

0xb078,	// (0x0002d10d) mup_visualizer_pane_ParamLimits

0xb078,	// (0x0002d10d) mup_visualizer_pane

0xb078,	// (0x0002d10d) mup_volume_pane_ParamLimits

0xb078,	// (0x0002d10d) mup_volume_pane

0x39e5,	// (0x00025a7a) mup_visualizer_pane_g1_ParamLimits

0x39e5,	// (0x00025a7a) mup_visualizer_pane_g1

0xb086,	// (0x0002d11b) mup_visualizer_pane_g2_ParamLimits

0xb086,	// (0x0002d11b) mup_visualizer_pane_g2

0x39d7,	// (0x00025a6c) mup_visualizer_pane_g3_ParamLimits

0x39d7,	// (0x00025a6c) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x0003147d) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x0003147d) mup_visualizer_pane_g

0x44a0,	// (0x00026535) mup_volume_pane_g1

0x44a0,	// (0x00026535) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x00031484) mup_volume_pane_g

0x44a0,	// (0x00026535) mup_progress_pane_g1

0x44a0,	// (0x00026535) mup_progress_pane_g2

0x44a0,	// (0x00026535) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x00031489) mup_progress_pane_g

0x36e5,	// (0x0002577a) bg_popup_window_pane_cp05

0xb094,	// (0x0002d129) heading_pane_cp02_ParamLimits

0xb094,	// (0x0002d129) heading_pane_cp02

0xb0ae,	// (0x0002d143) list_popup_blid_pane

0xb0b6,	// (0x0002d14b) list_blid_sat_info_pane_ParamLimits

0xb0b6,	// (0x0002d14b) list_blid_sat_info_pane

0xb0c9,	// (0x0002d15e) list_blid_sat_info_pane_g1

0xb0d1,	// (0x0002d166) list_blid_sat_info_pane_t1

0x5d9f,	// (0x00027e34) mup_equalizer_pane_ParamLimits

0x5d9f,	// (0x00027e34) mup_equalizer_pane

0x5db8,	// (0x00027e4d) mup_equalizer_pane_cp1_ParamLimits

0x5db8,	// (0x00027e4d) mup_equalizer_pane_cp1

0x5dd1,	// (0x00027e66) mup_equalizer_pane_cp2_ParamLimits

0x5dd1,	// (0x00027e66) mup_equalizer_pane_cp2

0x5dea,	// (0x00027e7f) mup_equalizer_pane_cp3_ParamLimits

0x5dea,	// (0x00027e7f) mup_equalizer_pane_cp3

0x5e03,	// (0x00027e98) mup_equalizer_pane_cp4_ParamLimits

0x5e03,	// (0x00027e98) mup_equalizer_pane_cp4

0x5e1c,	// (0x00027eb1) mup_equalizer_pane_cp5

0x5e2e,	// (0x00027ec3) mup_equalizer_pane_cp6

0x5e40,	// (0x00027ed5) mup_equalizer_pane_cp7

0xc37c,	// (0x0002e411) bg_popup_call_poc_act_pane_g9

0xc384,	// (0x0002e419) bg_popup_call_poc_act_pane_g10

0xc38c,	// (0x0002e421) bg_popup_call_poc_act_pane_g11

0x000a,

0x3940,	// (0x000259d5) mup_scale_pane

0x3958,	// (0x000259ed) mup_scale_pane_g1

0xb0df,	// (0x0002d174) mup_scale_pane_g2

0x0006,

0xf410,	// (0x000314a5) mup_scale_pane_g

0xb103,	// (0x0002d198) msg_data_pane

0xb10b,	// (0x0002d1a0) scroll_pane_cp017

0x5e66,	// (0x00027efb) bg_list_pane_cp04_ParamLimits

0x5e66,	// (0x00027efb) bg_list_pane_cp04

0xb11b,	// (0x0002d1b0) msg_data_pane_g1

0x5a34,	// (0x00027ac9) msg_data_pane_g2

0x5a3c,	// (0x00027ad1) msg_data_pane_g3

0x5e7e,	// (0x00027f13) msg_data_pane_g4

0x5a4c,	// (0x00027ae1) msg_data_pane_g5

0x5cbd,	// (0x00027d52) msg_data_pane_g6

0x5e86,	// (0x00027f1b) msg_data_pane_g7

0x0006,

0xf41f,	// (0x000314b4) msg_data_pane_g

0x5e8e,	// (0x00027f23) msg_text_pane_ParamLimits

0x5e8e,	// (0x00027f23) msg_text_pane

0x5eb5,	// (0x00027f4a) qrid_highlight_pane_cp011_ParamLimits

0x5eb5,	// (0x00027f4a) qrid_highlight_pane_cp011

0x36e5,	// (0x0002577a) msg_body_pane

0x36e5,	// (0x0002577a) msg_header_pane

0xb12c,	// (0x0002d1c1) input_focus_pane_cp07

0xb141,	// (0x0002d1d6) msg_header_pane_t1_ParamLimits

0xb141,	// (0x0002d1d6) msg_header_pane_t1

0xb157,	// (0x0002d1ec) msg_header_pane_t2_ParamLimits

0xb157,	// (0x0002d1ec) msg_header_pane_t2

0x0001,

0xf433,	// (0x000314c8) msg_header_pane_t_ParamLimits

0xf433,	// (0x000314c8) msg_header_pane_t

0xb16e,	// (0x0002d203) msg_body_pane_g1

0xb176,	// (0x0002d20b) msg_body_pane_t1_ParamLimits

0xb176,	// (0x0002d20b) msg_body_pane_t1

0xb1a1,	// (0x0002d236) msg_body_pane_t2_ParamLimits

0xb1a1,	// (0x0002d236) msg_body_pane_t2

0xb1b3,	// (0x0002d248) msg_body_pane_t3_ParamLimits

0xb1b3,	// (0x0002d248) msg_body_pane_t3

0x0002,

0xf438,	// (0x000314cd) msg_body_pane_t_ParamLimits

0xf438,	// (0x000314cd) msg_body_pane_t

0x247a,	// (0x0002450f) main_viewer_pane_g1_ParamLimits

0x247a,	// (0x0002450f) main_viewer_pane_g1

0x2486,	// (0x0002451b) main_viewer_pane_g2_ParamLimits

0x2486,	// (0x0002451b) main_viewer_pane_g2

0x5ef5,	// (0x00027f8a) main_viewer_pane_g3_ParamLimits

0x5ef5,	// (0x00027f8a) main_viewer_pane_g3

0x5f04,	// (0x00027f99) main_viewer_pane_g4_ParamLimits

0x5f04,	// (0x00027f99) main_viewer_pane_g4

0xb1dd,	// (0x0002d272) main_viewer_pane_g5_ParamLimits

0xb1dd,	// (0x0002d272) main_viewer_pane_g5

0xb1dd,	// (0x0002d272) main_viewer_pane_g7_ParamLimits

0xb1dd,	// (0x0002d272) main_viewer_pane_g7

0xb1ef,	// (0x0002d284) main_viewer_pane_g8_ParamLimits

0xb1ef,	// (0x0002d284) main_viewer_pane_g8

0x0007,

0xf448,	// (0x000314dd) main_viewer_pane_g_ParamLimits

0xf448,	// (0x000314dd) main_viewer_pane_g

0xb207,	// (0x0002d29c) viewer_content_pane_ParamLimits

0xb207,	// (0x0002d29c) viewer_content_pane

0x5f38,	// (0x00027fcd) main_postcard_pane_g1_ParamLimits

0x5f38,	// (0x00027fcd) main_postcard_pane_g1

0x5f4c,	// (0x00027fe1) main_postcard_pane_g2_ParamLimits

0x5f4c,	// (0x00027fe1) main_postcard_pane_g2

0x5f60,	// (0x00027ff5) main_postcard_pane_g3_ParamLimits

0x5f60,	// (0x00027ff5) main_postcard_pane_g3

0x0005,

0xf459,	// (0x000314ee) main_postcard_pane_g_ParamLimits

0xf459,	// (0x000314ee) main_postcard_pane_g

0x5f73,	// (0x00028008) main_postcard_pane_g4

0xc5cf,	// (0x0002e664) smil_status_volume_pane_g2

0x5fae,	// (0x00028043) postcard_pane_ParamLimits

0x5fae,	// (0x00028043) postcard_pane

0xb215,	// (0x0002d2aa) postcard_pane_g1_ParamLimits

0xb215,	// (0x0002d2aa) postcard_pane_g1

0x5fee,	// (0x00028083) postcard_pane_g2_ParamLimits

0x5fee,	// (0x00028083) postcard_pane_g2

0x5ffa,	// (0x0002808f) postcard_pane_g3_ParamLimits

0x5ffa,	// (0x0002808f) postcard_pane_g3

0xb223,	// (0x0002d2b8) postcard_pane_g4_ParamLimits

0xb223,	// (0x0002d2b8) postcard_pane_g4

0x6006,	// (0x0002809b) postcard_pane_g5_ParamLimits

0x6006,	// (0x0002809b) postcard_pane_g5

0x601b,	// (0x000280b0) postcard_pane_g6_ParamLimits

0x601b,	// (0x000280b0) postcard_pane_g6

0xb215,	// (0x0002d2aa) postcard_pane_g7_ParamLimits

0xb215,	// (0x0002d2aa) postcard_pane_g7

0x0006,

0xf466,	// (0x000314fb) postcard_pane_g_ParamLimits

0xf466,	// (0x000314fb) postcard_pane_g

0x602f,	// (0x000280c4) main_mp2_pane_g1_ParamLimits

0x602f,	// (0x000280c4) main_mp2_pane_g1

0x603b,	// (0x000280d0) main_mp2_pane_g2_ParamLimits

0x603b,	// (0x000280d0) main_mp2_pane_g2

0x6047,	// (0x000280dc) main_mp2_pane_g3_ParamLimits

0x6047,	// (0x000280dc) main_mp2_pane_g3

0x0002,

0xf475,	// (0x0003150a) main_mp2_pane_g_ParamLimits

0xf475,	// (0x0003150a) main_mp2_pane_g

0x6053,	// (0x000280e8) main_mp2_pane_t1_ParamLimits

0x6053,	// (0x000280e8) main_mp2_pane_t1

0x6068,	// (0x000280fd) main_mp2_pane_t2_ParamLimits

0x6068,	// (0x000280fd) main_mp2_pane_t2

0x607a,	// (0x0002810f) main_mp2_pane_t3_ParamLimits

0x607a,	// (0x0002810f) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x00031511) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x00031511) main_mp2_pane_t

0xb231,	// (0x0002d2c6) pec_content_pane_ParamLimits

0xb231,	// (0x0002d2c6) pec_content_pane

0x49ff,	// (0x00026a94) scroll_pane_cp015

0xb243,	// (0x0002d2d8) pec_attribute_pane_ParamLimits

0xb243,	// (0x0002d2d8) pec_attribute_pane

0x608c,	// (0x00028121) pec_content_pane_g1_ParamLimits

0x608c,	// (0x00028121) pec_content_pane_g1

0xb253,	// (0x0002d2e8) pec_content_pane_t1_ParamLimits

0xb253,	// (0x0002d2e8) pec_content_pane_t1

0xb265,	// (0x0002d2fa) pec_content_pane_t2_ParamLimits

0xb265,	// (0x0002d2fa) pec_content_pane_t2

0x0001,

0xf483,	// (0x00031518) pec_content_pane_t_ParamLimits

0xf483,	// (0x00031518) pec_content_pane_t

0x6098,	// (0x0002812d) list_single_graphic_pane_cp01_ParamLimits

0x6098,	// (0x0002812d) list_single_graphic_pane_cp01

0x3940,	// (0x000259d5) bg_popup_sub_pane_cp04

0xb277,	// (0x0002d30c) popup_mup_playback_window_g1

0xb283,	// (0x0002d318) popup_mup_playback_window_t1

0xb298,	// (0x0002d32d) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x0003151d) popup_mup_playback_window_t

0xb2cf,	// (0x0002d364) main_image_pane_g1_ParamLimits

0xb2cf,	// (0x0002d364) main_image_pane_g1

0xb312,	// (0x0002d3a7) scroll_pane_cp018_ParamLimits

0xb312,	// (0x0002d3a7) scroll_pane_cp018

0xb32a,	// (0x0002d3bf) scroll_pane_cp016_ParamLimits

0xb32a,	// (0x0002d3bf) scroll_pane_cp016

0x6163,	// (0x000281f8) smil2_image_pane_ParamLimits

0x6163,	// (0x000281f8) smil2_image_pane

0x618b,	// (0x00028220) smil2_root_pane_ParamLimits

0x618b,	// (0x00028220) smil2_root_pane

0x61c3,	// (0x00028258) smil2_text_pane_ParamLimits

0x61c3,	// (0x00028258) smil2_text_pane

0x36e5,	// (0x0002577a) bg_list_pane_cp06

0xb366,	// (0x0002d3fb) grid_radio_pane

0x36e5,	// (0x0002577a) bg_popup_window_pane_cp06

0xb36e,	// (0x0002d403) main_fmradio_pane_t1

0xac5b,	// (0x0002ccf0) heading_pane_cp04

0xb37c,	// (0x0002d411) main_fmradio_pane_t2

0xc3d4,	// (0x0002e469) popup_cale_lunar_info_window_g1

0xb38a,	// (0x0002d41f) main_fmradio_pane_t3

0xc3dc,	// (0x0002e471) popup_cale_lunar_info_window_g2

0xb398,	// (0x0002d42d) main_fmradio_pane_t4

0x0001,

0xb3a6,	// (0x0002d43b) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x00031610) popup_cale_lunar_info_window_g

0xf49d,	// (0x00031532) main_fmradio_pane_t

0xb3b4,	// (0x0002d449) wait_bar_pane_cp03

0xb3bc,	// (0x0002d451) cell_fmradio_pane_ParamLimits

0xb3bc,	// (0x0002d451) cell_fmradio_pane

0xb215,	// (0x0002d2aa) cell_fmradio_pane_g1_ParamLimits

0xb215,	// (0x0002d2aa) cell_fmradio_pane_g1

0x36e5,	// (0x0002577a) grid_highlight_pane_cp011

0xb3cf,	// (0x0002d464) poc_content_pane_ParamLimits

0xb3cf,	// (0x0002d464) poc_content_pane

0xb3e2,	// (0x0002d477) scroll_pane_cp019

0x622f,	// (0x000282c4) popup_call_poc_act_window_ParamLimits

0x622f,	// (0x000282c4) popup_call_poc_act_window

0x624f,	// (0x000282e4) popup_call_poc_inact_window_ParamLimits

0x624f,	// (0x000282e4) popup_call_poc_inact_window

0xf53f,	// (0x000315d4) bg_popup_call_poc_act_pane_g

0xc394,	// (0x0002e429) bg_popup_call_poc_inact_pane_g1

0xc39c,	// (0x0002e431) bg_popup_call_poc_inact_pane_g2

0xb3ea,	// (0x0002d47f) popup_call_poc_act_window_g2

0xc3a4,	// (0x0002e439) bg_popup_call_poc_inact_pane_g3

0xc354,	// (0x0002e3e9) bg_popup_call_poc_inact_pane_g4

0xc3ac,	// (0x0002e441) bg_popup_call_poc_inact_pane_g5

0xb3f2,	// (0x0002d487) popup_call_poc_act_window_t1_ParamLimits

0xb3f2,	// (0x0002d487) popup_call_poc_act_window_t1

0xb41a,	// (0x0002d4af) popup_call_poc_act_window_t2_ParamLimits

0xb41a,	// (0x0002d4af) popup_call_poc_act_window_t2

0xb442,	// (0x0002d4d7) popup_call_poc_act_window_t3_ParamLimits

0xb442,	// (0x0002d4d7) popup_call_poc_act_window_t3

0xb46a,	// (0x0002d4ff) popup_call_poc_act_window_t4_ParamLimits

0xb46a,	// (0x0002d4ff) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x0003153d) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x0003153d) popup_call_poc_act_window_t

0xc3b4,	// (0x0002e449) bg_popup_call_poc_inact_pane_g6

0xc3bc,	// (0x0002e451) bg_popup_call_poc_inact_pane_g7

0xc3c4,	// (0x0002e459) bg_popup_call_poc_inact_pane_g8

0xb47c,	// (0x0002d511) popup_call_poc_inact_window_g2

0xc3cc,	// (0x0002e461) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x000315eb) bg_popup_call_poc_inact_pane_g

0xb484,	// (0x0002d519) popup_call_poc_inact_window_t1_ParamLimits

0xb484,	// (0x0002d519) popup_call_poc_inact_window_t1

0xb499,	// (0x0002d52e) popup_call_poc_inact_window_t2_ParamLimits

0xb499,	// (0x0002d52e) popup_call_poc_inact_window_t2

0xb4ae,	// (0x0002d543) popup_call_poc_inact_window_t3_ParamLimits

0xb4ae,	// (0x0002d543) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x00031546) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x00031546) popup_call_poc_inact_window_t

0xc55d,	// (0x0002e5f2) context_pane_ParamLimits

0x6719,	// (0x000287ae) signal_pane_ParamLimits

0x4247,	// (0x000262dc) main_call2_pane

0xc536,	// (0x0002e5cb) popup_phob_thumbnail2_window_ParamLimits

0xc536,	// (0x0002e5cb) popup_phob_thumbnail2_window

0xb1c5,	// (0x0002d25a) aid_hotspot_pointer_arrow_pane

0xb1cd,	// (0x0002d262) aid_hotspot_pointer_hand_pane

0x6524,	// (0x000285b9) phob_pre_status_pane_g5

0x42b0,	// (0x00026345) cams_zoom_pane_ParamLimits

0x42be,	// (0x00026353) image_vga_pane_ParamLimits

0x39d7,	// (0x00025a6c) main_camera_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) main_camera_pane_g2_ParamLimits

0x39d7,	// (0x00025a6c) main_camera_pane_g3_ParamLimits

0x39d7,	// (0x00025a6c) main_camera_pane_g4_ParamLimits

0x39d7,	// (0x00025a6c) main_camera_pane_g5_ParamLimits

0x39d7,	// (0x00025a6c) main_camera_pane_g6_ParamLimits

0x39d7,	// (0x00025a6c) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0003125a) main_camera_pane_g_ParamLimits

0x42d1,	// (0x00026366) main_camera_pane_t1_ParamLimits

0x42d1,	// (0x00026366) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0003126b) main_camera_pane_t_ParamLimits

0x3940,	// (0x000259d5) bg_popup_preview_window_pane_cp01_ParamLimits

0x3940,	// (0x000259d5) bg_popup_preview_window_pane_cp01

0xb4c3,	// (0x0002d558) popup_phob_thumbnail2_window_g1_ParamLimits

0xb4c3,	// (0x0002d558) popup_phob_thumbnail2_window_g1

0x36e5,	// (0x0002577a) call2_cli_visual_pane

0x627b,	// (0x00028310) popup_call2_audio_conf_window_ParamLimits

0x627b,	// (0x00028310) popup_call2_audio_conf_window

0x6299,	// (0x0002832e) popup_call2_audio_first_window_ParamLimits

0x6299,	// (0x0002832e) popup_call2_audio_first_window

0x630f,	// (0x000283a4) popup_call2_audio_in_window_ParamLimits

0x630f,	// (0x000283a4) popup_call2_audio_in_window

0x6343,	// (0x000283d8) popup_call2_audio_out_window_ParamLimits

0x6343,	// (0x000283d8) popup_call2_audio_out_window

0x6395,	// (0x0002842a) popup_call2_audio_second_window_ParamLimits

0x6395,	// (0x0002842a) popup_call2_audio_second_window

0x63e7,	// (0x0002847c) popup_call2_audio_wait_window_ParamLimits

0x63e7,	// (0x0002847c) popup_call2_audio_wait_window

0x36e5,	// (0x0002577a) bg_popup_call2_act_pane_cp03

0xb4cf,	// (0x0002d564) list_conf_pane_cp

0xb4d7,	// (0x0002d56c) popup_call2_audio_conf_window_t1

0xacb8,	// (0x0002cd4d) list_single_graphic_popup_conf2_pane_ParamLimits

0xacb8,	// (0x0002cd4d) list_single_graphic_popup_conf2_pane

0xaccb,	// (0x0002cd60) list_highlight_pane_cp04

0xb4e5,	// (0x0002d57a) list_single_graphic_popup_conf2_pane_g1

0xacdc,	// (0x0002cd71) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x0003154d) list_single_graphic_popup_conf2_pane_g

0xb4ed,	// (0x0002d582) list_single_graphic_popup_conf2_pane_t1

0xb4fb,	// (0x0002d590) bg_popup_call2_act_pane_cp01_ParamLimits

0xb4fb,	// (0x0002d590) bg_popup_call2_act_pane_cp01

0xb585,	// (0x0002d61a) call_type_pane_cp05_ParamLimits

0xb585,	// (0x0002d61a) call_type_pane_cp05

0xb5d9,	// (0x0002d66e) popup_call2_audio_second_window_g1_ParamLimits

0xb5d9,	// (0x0002d66e) popup_call2_audio_second_window_g1

0xb62d,	// (0x0002d6c2) popup_call2_audio_second_window_g2_ParamLimits

0xb62d,	// (0x0002d6c2) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x00031552) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x00031552) popup_call2_audio_second_window_g

0xb692,	// (0x0002d727) popup_call2_audio_second_window_t1_ParamLimits

0xb692,	// (0x0002d727) popup_call2_audio_second_window_t1

0xb74d,	// (0x0002d7e2) popup_call2_audio_second_window_t2_ParamLimits

0xb74d,	// (0x0002d7e2) popup_call2_audio_second_window_t2

0xb7a0,	// (0x0002d835) popup_call2_audio_second_window_t3_ParamLimits

0xb7a0,	// (0x0002d835) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x00031559) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x00031559) popup_call2_audio_second_window_t

0x36e5,	// (0x0002577a) bg_popup_call2_in_pane_cp02

0xb893,	// (0x0002d928) call_type_pane_cp04

0xb89b,	// (0x0002d930) popup_call2_audio_wait_window_g1

0xb8a3,	// (0x0002d938) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x00031562) popup_call2_audio_wait_window_g

0xb8ab,	// (0x0002d940) popup_call2_audio_wait_window_t3

0xb8b9,	// (0x0002d94e) bg_popup_call2_act_pane_ParamLimits

0xb8b9,	// (0x0002d94e) bg_popup_call2_act_pane

0xb979,	// (0x0002da0e) call_type_pane_cp03_ParamLimits

0xb979,	// (0x0002da0e) call_type_pane_cp03

0xb9dd,	// (0x0002da72) popup_call2_audio_first_window_g1_ParamLimits

0xb9dd,	// (0x0002da72) popup_call2_audio_first_window_g1

0xba4d,	// (0x0002dae2) popup_call2_audio_first_window_g2_ParamLimits

0xba4d,	// (0x0002dae2) popup_call2_audio_first_window_g2

0xbab1,	// (0x0002db46) popup_call2_audio_first_window_g3_ParamLimits

0xbab1,	// (0x0002db46) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x00031567) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x00031567) popup_call2_audio_first_window_g

0xbb39,	// (0x0002dbce) popup_call2_audio_first_window_t1_ParamLimits

0xbb39,	// (0x0002dbce) popup_call2_audio_first_window_t1

0xbc3c,	// (0x0002dcd1) popup_call2_audio_first_window_t4_ParamLimits

0xbc3c,	// (0x0002dcd1) popup_call2_audio_first_window_t4

0xbd1f,	// (0x0002ddb4) popup_call2_audio_first_window_t5_ParamLimits

0xbd1f,	// (0x0002ddb4) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x00031572) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x00031572) popup_call2_audio_first_window_t

0x3938,	// (0x000259cd) bg_popup_call2_act_pane_g1

0xc3e4,	// (0x0002e479) popup_cale_lunar_info_window_t1

0xc3f2,	// (0x0002e487) popup_cale_lunar_info_window_t2

0xc400,	// (0x0002e495) popup_cale_lunar_info_window_t3

0x36e5,	// (0x0002577a) bg_popup_call2_bubble_pane

0xbe20,	// (0x0002deb5) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe20,	// (0x0002deb5) bg_popup_call2_in_pane_cp01

0xb893,	// (0x0002d928) call_type_pane_cp02

0xbe68,	// (0x0002defd) popup_call2_audio_out_window_g1_ParamLimits

0xbe68,	// (0x0002defd) popup_call2_audio_out_window_g1

0xbe94,	// (0x0002df29) popup_call2_audio_out_window_g2_ParamLimits

0xbe94,	// (0x0002df29) popup_call2_audio_out_window_g2

0xbebc,	// (0x0002df51) popup_call2_audio_out_window_g3_ParamLimits

0xbebc,	// (0x0002df51) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x0003157b) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x0003157b) popup_call2_audio_out_window_g

0xbef7,	// (0x0002df8c) popup_call2_audio_out_window_t1_ParamLimits

0xbef7,	// (0x0002df8c) popup_call2_audio_out_window_t1

0xbf56,	// (0x0002dfeb) popup_call2_audio_out_window_t2_ParamLimits

0xbf56,	// (0x0002dfeb) popup_call2_audio_out_window_t2

0xbfaa,	// (0x0002e03f) popup_call2_audio_out_window_t3_ParamLimits

0xbfaa,	// (0x0002e03f) popup_call2_audio_out_window_t3

0xbfc0,	// (0x0002e055) popup_call2_audio_out_window_t4_ParamLimits

0xbfc0,	// (0x0002e055) popup_call2_audio_out_window_t4

0xbfd6,	// (0x0002e06b) popup_call2_audio_out_window_t5_ParamLimits

0xbfd6,	// (0x0002e06b) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x00031584) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x00031584) popup_call2_audio_out_window_t

0xc03a,	// (0x0002e0cf) bg_popup_call2_in_pane_ParamLimits

0xc03a,	// (0x0002e0cf) bg_popup_call2_in_pane

0xc096,	// (0x0002e12b) popup_call2_audio_in_window_g1_ParamLimits

0xc096,	// (0x0002e12b) popup_call2_audio_in_window_g1

0xc0ce,	// (0x0002e163) popup_call2_audio_in_window_g2_ParamLimits

0xc0ce,	// (0x0002e163) popup_call2_audio_in_window_g2

0xc106,	// (0x0002e19b) popup_call2_audio_in_window_g3_ParamLimits

0xc106,	// (0x0002e19b) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x00031591) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x00031591) popup_call2_audio_in_window_g

0xc15e,	// (0x0002e1f3) popup_call2_audio_in_window_t1_ParamLimits

0xc15e,	// (0x0002e1f3) popup_call2_audio_in_window_t1

0xc1de,	// (0x0002e273) popup_call2_audio_in_window_t2_ParamLimits

0xc1de,	// (0x0002e273) popup_call2_audio_in_window_t2

0xc25e,	// (0x0002e2f3) popup_call2_audio_in_window_t3_ParamLimits

0xc25e,	// (0x0002e2f3) popup_call2_audio_in_window_t3

0xc278,	// (0x0002e30d) popup_call2_audio_in_window_t4_ParamLimits

0xc278,	// (0x0002e30d) popup_call2_audio_in_window_t4

0xc28a,	// (0x0002e31f) popup_call2_audio_in_window_t5_ParamLimits

0xc28a,	// (0x0002e31f) popup_call2_audio_in_window_t5

0xc29f,	// (0x0002e334) popup_call2_audio_in_window_t6_ParamLimits

0xc29f,	// (0x0002e334) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x0003159a) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x0003159a) popup_call2_audio_in_window_t

0x3938,	// (0x000259cd) bg_popup_call2_in_pane_g1

0xc40e,	// (0x0002e4a3) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x00031615) popup_cale_lunar_info_window_t

0x3940,	// (0x000259d5) bg_popup_call2_rect_pane_ParamLimits

0x3940,	// (0x000259d5) bg_popup_call2_rect_pane

0x36e5,	// (0x0002577a) call2_cli_visual_graphic_pane

0x36e5,	// (0x0002577a) call2_cli_visual_text_pane

0xc5e2,	// (0x0002e677) smil_status_volume_pane_g3

0x0002,

0x3958,	// (0x000259ed) call2_cli_visual_graphic_pane_g1

0x3958,	// (0x000259ed) call2_cli_visual_graphic_pane_g2

0x3958,	// (0x000259ed) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x000315a7) call2_cli_visual_graphic_pane_g

0xc2b4,	// (0x0002e349) bg_popup_call2_rect_pane_g1

0x3ccb,	// (0x00025d60) bg_popup_call2_rect_pane_g2

0xc2bc,	// (0x0002e351) bg_popup_call2_rect_pane_g3

0xc2c4,	// (0x0002e359) bg_popup_call2_rect_pane_g4

0xc2cc,	// (0x0002e361) bg_popup_call2_rect_pane_g5

0xc2d4,	// (0x0002e369) bg_popup_call2_rect_pane_g6

0xc2dc,	// (0x0002e371) bg_popup_call2_rect_pane_g7

0xc2e4,	// (0x0002e379) bg_popup_call2_rect_pane_g8

0xc2ec,	// (0x0002e381) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x000315ae) bg_popup_call2_rect_pane_g

0xc2f4,	// (0x0002e389) bg_popup_call2_bubble_pane_g1

0xc2fc,	// (0x0002e391) bg_popup_call2_bubble_pane_g2

0xc304,	// (0x0002e399) bg_popup_call2_bubble_pane_g3

0xc30c,	// (0x0002e3a1) bg_popup_call2_bubble_pane_g4

0xc314,	// (0x0002e3a9) bg_popup_call2_bubble_pane_g5

0xc31c,	// (0x0002e3b1) bg_popup_call2_bubble_pane_g6

0xc324,	// (0x0002e3b9) bg_popup_call2_bubble_pane_g7

0xc32c,	// (0x0002e3c1) bg_popup_call2_bubble_pane_g8

0xc334,	// (0x0002e3c9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x000315c1) bg_popup_call2_bubble_pane_g

0x3d67,	// (0x00025dfc) aid_cale_week_size_cell_pane

0x42e5,	// (0x0002637a) aid_cams_cif_uncrop_pane_ParamLimits

0x42e5,	// (0x0002637a) aid_cams_cif_uncrop_pane

0x44aa,	// (0x0002653f) aid_cams_size_cell_ParamLimits

0x44aa,	// (0x0002653f) aid_cams_size_cell

0x44be,	// (0x00026553) grid_cams_pane_ParamLimits

0x44d3,	// (0x00026568) linegrid_cams_pane_ParamLimits

0x462a,	// (0x000266bf) call_video_pane_t1

0x4644,	// (0x000266d9) call_video_pane_t2

0x0001,

0xf222,	// (0x000312b7) call_video_pane_t

0x4c3b,	// (0x00026cd0) aid_cale_month_size_cell_pane_ParamLimits

0x4c3b,	// (0x00026cd0) aid_cale_month_size_cell_pane

0xf5c4,	// (0x00031659) smil_status_volume_pane_g

0xc5ef,	// (0x0002e684) volume_smil_pane_ParamLimits

0xa97a,	// (0x0002ca0f) aid_popup2_width_pane

0x3c23,	// (0x00025cb8) cell_qdial_pane_g4_ParamLimits

0x3c23,	// (0x00025cb8) cell_qdial_pane_g4

0x5bb1,	// (0x00027c46) aid_blid_cardinal_pane_ParamLimits

0x5bbd,	// (0x00027c52) aid_blid_destination_pane_ParamLimits

0x5bbd,	// (0x00027c52) aid_blid_destination_pane

0x3940,	// (0x000259d5) bg_popup_call_poc_act_pane_ParamLimits

0x3940,	// (0x000259d5) bg_popup_call_poc_act_pane

0x3940,	// (0x000259d5) bg_popup_call_poc_inact_pane_ParamLimits

0x3940,	// (0x000259d5) bg_popup_call_poc_inact_pane

0xc33c,	// (0x0002e3d1) bg_popup_call_poc_act_pane_g1

0xc344,	// (0x0002e3d9) bg_popup_call_poc_act_pane_g2

0xc34c,	// (0x0002e3e1) bg_popup_call_poc_act_pane_g3

0xc354,	// (0x0002e3e9) bg_popup_call_poc_act_pane_g4

0xc35c,	// (0x0002e3f1) bg_popup_call_poc_act_pane_g5

0xc364,	// (0x0002e3f9) bg_popup_call_poc_act_pane_g6

0xc36c,	// (0x0002e401) bg_popup_call_poc_act_pane_g7

0xc374,	// (0x0002e409) bg_popup_call_poc_act_pane_g8

0x36e5,	// (0x0002577a) main_usb_pane

0xc515,	// (0x0002e5aa) popup_cale_lunar_info_window

0x48e7,	// (0x0002697c) im_reading_pane_t1_ParamLimits

0x491d,	// (0x000269b2) list_im_pane_ParamLimits

0x492e,	// (0x000269c3) scroll_pane_cp07_ParamLimits

0x36e5,	// (0x0002577a) grid_highlight_pane_cp012

0x3940,	// (0x000259d5) mup_scale_pane_ParamLimits

0xb215,	// (0x0002d2aa) main_usb_pane_g1_ParamLimits

0xb215,	// (0x0002d2aa) main_usb_pane_g1

0x6441,	// (0x000284d6) main_usb_pane_g2_ParamLimits

0x6441,	// (0x000284d6) main_usb_pane_g2

0x0001,

0xf569,	// (0x000315fe) main_usb_pane_g_ParamLimits

0xf569,	// (0x000315fe) main_usb_pane_g

0x6455,	// (0x000284ea) main_usb_pane_t1_ParamLimits

0x6455,	// (0x000284ea) main_usb_pane_t1

0x6467,	// (0x000284fc) main_usb_pane_t2_ParamLimits

0x6467,	// (0x000284fc) main_usb_pane_t2

0x6479,	// (0x0002850e) main_usb_pane_t3_ParamLimits

0x6479,	// (0x0002850e) main_usb_pane_t3

0x648b,	// (0x00028520) main_usb_pane_t4_ParamLimits

0x648b,	// (0x00028520) main_usb_pane_t4

0x649d,	// (0x00028532) main_usb_pane_t5_ParamLimits

0x649d,	// (0x00028532) main_usb_pane_t5

0x64af,	// (0x00028544) main_usb_pane_t6_ParamLimits

0x64af,	// (0x00028544) main_usb_pane_t6

0x0005,

0xf56e,	// (0x00031603) main_usb_pane_t_ParamLimits

0xae05,	// (0x0002ce9a) aid_text_placing

0x5b5d,	// (0x00027bf2) main_location2_pane_t1_ParamLimits

0x5b73,	// (0x00027c08) main_location2_pane_t2_ParamLimits

0x5b89,	// (0x00027c1e) main_location2_pane_t3_ParamLimits

0x5b9f,	// (0x00027c34) main_location2_pane_t4_ParamLimits

0x5b9f,	// (0x00027c34) main_location2_pane_t4

0xf375,	// (0x0003140a) main_location2_pane_t_ParamLimits

0x3990,	// (0x00025a25) find_pinb_pane_g2_ParamLimits

0x3990,	// (0x00025a25) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0003116f) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0003116f) find_pinb_pane_g

0x399c,	// (0x00025a31) find_pinb_pane_t1_ParamLimits

0x39ae,	// (0x00025a43) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00031174) find_pinb_pane_t_ParamLimits

0x36e5,	// (0x0002577a) main_call3_pane

0x5075,	// (0x0002710a) cale_month_day_heading_pane_t1_ParamLimits

0x50fb,	// (0x00027190) cale_month_day_heading_pane_t2_ParamLimits

0x518c,	// (0x00027221) cale_month_day_heading_pane_t3_ParamLimits

0x521d,	// (0x000272b2) cale_month_day_heading_pane_t4_ParamLimits

0x52ae,	// (0x00027343) cale_month_day_heading_pane_t5_ParamLimits

0x533f,	// (0x000273d4) cale_month_day_heading_pane_t6_ParamLimits

0x53d0,	// (0x00027465) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x000312ef) cale_month_day_heading_pane_t_ParamLimits

0x5616,	// (0x000276ab) smil_status_volume_pane

0x5fca,	// (0x0002805f) postcard_address_pane_ParamLimits

0x5fca,	// (0x0002805f) postcard_address_pane

0x5fdc,	// (0x00028071) postcard_message_pane_ParamLimits

0x5fdc,	// (0x00028071) postcard_message_pane

0x641f,	// (0x000284b4) call2_cli_visual_pane_t1_ParamLimits

0x641f,	// (0x000284b4) call2_cli_visual_pane_t1

0x6905,	// (0x0002899a) postcard_message_pane_t1_ParamLimits

0x6905,	// (0x0002899a) postcard_message_pane_t1

0x68ee,	// (0x00028983) postcard_address_pane_t1_ParamLimits

0x68ee,	// (0x00028983) postcard_address_pane_t1

0x68dc,	// (0x00028971) popup_call3_audio_in_window_ParamLimits

0x68dc,	// (0x00028971) popup_call3_audio_in_window

0x676b,	// (0x00028800) bg_popup_call3_in_pane_ParamLimits

0x676b,	// (0x00028800) bg_popup_call3_in_pane

0x67dd,	// (0x00028872) popup_call3_audio_in_window_g1_ParamLimits

0x67dd,	// (0x00028872) popup_call3_audio_in_window_g1

0x67fd,	// (0x00028892) popup_call3_audio_in_window_g2_ParamLimits

0x67fd,	// (0x00028892) popup_call3_audio_in_window_g2

0x681d,	// (0x000288b2) popup_call3_audio_in_window_g3_ParamLimits

0x681d,	// (0x000288b2) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x00031660) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x00031660) popup_call3_audio_in_window_g

0x684e,	// (0x000288e3) popup_call3_audio_in_window_t1_ParamLimits

0x684e,	// (0x000288e3) popup_call3_audio_in_window_t1

0x688c,	// (0x00028921) popup_call3_audio_in_window_t2_ParamLimits

0x688c,	// (0x00028921) popup_call3_audio_in_window_t2

0x68ca,	// (0x0002895f) popup_call3_audio_in_window_t3_ParamLimits

0x68ca,	// (0x0002895f) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x00031669) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x00031669) popup_call3_audio_in_window_t

0x4247,	// (0x000262dc) bg_popup_call3_rect_pane

0xc2b4,	// (0x0002e349) bg_popup_call3_rect_pane_g1

0x3ccb,	// (0x00025d60) bg_popup_call3_rect_pane_g2

0xc2bc,	// (0x0002e351) bg_popup_call3_rect_pane_g3

0xc2c4,	// (0x0002e359) bg_popup_call3_rect_pane_g4

0xc2cc,	// (0x0002e361) bg_popup_call3_rect_pane_g5

0xc2d4,	// (0x0002e369) bg_popup_call3_rect_pane_g6

0xc2dc,	// (0x0002e371) bg_popup_call3_rect_pane_g7

0x3237,	// (0x000252cc) mup_visualizer_osc_pane

0x3237,	// (0x000252cc) mup_visualizer_spec_pane

0x679b,	// (0x00028830) call3_video_qcif_pane_ParamLimits

0x679b,	// (0x00028830) call3_video_qcif_pane

0x67ac,	// (0x00028841) call3_video_qcif_uncrop_pane_ParamLimits

0x67ac,	// (0x00028841) call3_video_qcif_uncrop_pane

0x67b8,	// (0x0002884d) call3_video_subqcif_pane_ParamLimits

0x67b8,	// (0x0002884d) call3_video_subqcif_pane

0x67cc,	// (0x00028861) call3_video_subqcif_uncrop_pane_ParamLimits

0x67cc,	// (0x00028861) call3_video_subqcif_uncrop_pane

0x683d,	// (0x000288d2) popup_call3_audio_in_window_g4_ParamLimits

0x683d,	// (0x000288d2) popup_call3_audio_in_window_g4

0x3237,	// (0x000252cc) mup_spec_half_pane

0x3237,	// (0x000252cc) mup_spec_half_pane_cp

0x3237,	// (0x000252cc) mup_osc_middle_pane

0x44a0,	// (0x00026535) mup_visualizer_osc_pane_g1

0xc5aa,	// (0x0002e63f) mup_spec_bar_pane_ParamLimits

0xc5aa,	// (0x0002e63f) mup_spec_bar_pane

0x44a0,	// (0x00026535) mup_spec_bar_pane_g1

0x44a0,	// (0x00026535) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x00031484) mup_spec_bar_pane_g

0x3d67,	// (0x00025dfc) aid_cale_week_size_cell_pane_ParamLimits

0x3d81,	// (0x00025e16) bg_cale_heading_pane_ParamLimits

0x3d99,	// (0x00025e2e) bg_cale_pane_cp01_ParamLimits

0x3db6,	// (0x00025e4b) cale_week_corner_pane_ParamLimits

0x3dd5,	// (0x00025e6a) cale_week_day_heading_pane_ParamLimits

0x3df2,	// (0x00025e87) cale_week_scroll_pane_g1_ParamLimits

0x3e05,	// (0x00025e9a) cale_week_scroll_pane_g2_ParamLimits

0x3e1d,	// (0x00025eb2) cale_week_scroll_pane_g3_ParamLimits

0x3e35,	// (0x00025eca) cale_week_scroll_pane_g4_ParamLimits

0x3e4d,	// (0x00025ee2) cale_week_scroll_pane_g5_ParamLimits

0x3e65,	// (0x00025efa) cale_week_scroll_pane_g6_ParamLimits

0x3e7d,	// (0x00025f12) cale_week_scroll_pane_g7_ParamLimits

0x3e95,	// (0x00025f2a) cale_week_scroll_pane_g8_ParamLimits

0x3eb1,	// (0x00025f46) cale_week_scroll_pane_g9_ParamLimits

0x3ec9,	// (0x00025f5e) cale_week_scroll_pane_g10_ParamLimits

0x3ee1,	// (0x00025f76) cale_week_scroll_pane_g11_ParamLimits

0x3ef9,	// (0x00025f8e) cale_week_scroll_pane_g12_ParamLimits

0x3f11,	// (0x00025fa6) cale_week_scroll_pane_g13_ParamLimits

0x3f29,	// (0x00025fbe) cale_week_scroll_pane_g14_ParamLimits

0x3f41,	// (0x00025fd6) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00031200) cale_week_scroll_pane_g_ParamLimits

0x3f75,	// (0x0002600a) cale_week_time_pane_ParamLimits

0x3f91,	// (0x00026026) grid_cale_week_pane_ParamLimits

0x3faf,	// (0x00026044) listscroll_cale_week_pane_t1

0x3fc1,	// (0x00026056) scroll_pane_cp08_ParamLimits

0x4cbd,	// (0x00026d52) cale_month_corner_pane_ParamLimits

0x5019,	// (0x000270ae) cale_month_pane_t1

0x502b,	// (0x000270c0) cale_month_week_pane_ParamLimits

0x59ac,	// (0x00027a41) popup_call_status_window_g1_ParamLimits

0x59c0,	// (0x00027a55) popup_call_status_window_g2_ParamLimits

0x59d4,	// (0x00027a69) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x00031391) popup_call_status_window_g_ParamLimits

0xabdc,	// (0x0002cc71) aid_call2_pane

0x5ecb,	// (0x00027f60) msg_header_pane_g1

0x5fca,	// (0x0002805f) postcard_address2_pane_ParamLimits

0x5fca,	// (0x0002805f) postcard_address2_pane

0x5fdc,	// (0x00028071) postcard_message2_pane_ParamLimits

0x5fdc,	// (0x00028071) postcard_message2_pane

0x6727,	// (0x000287bc) message2_row_pane_ParamLimits

0x6727,	// (0x000287bc) message2_row_pane

0x6741,	// (0x000287d6) address2_row_pane_ParamLimits

0x6741,	// (0x000287d6) address2_row_pane

0xc578,	// (0x0002e60d) postcard_message2_row_pane_g1

0xc580,	// (0x0002e615) postcard_message2_row_pane_t1

0xc578,	// (0x0002e60d) address2_row_pane_g1

0xc580,	// (0x0002e615) address2_row_pane_t1

0x423f,	// (0x000262d4) aid_size_cell_vorec

0x36e5,	// (0x0002577a) main_rss_pane

0x6754,	// (0x000287e9) rss_list_single_pane_ParamLimits

0x6754,	// (0x000287e9) rss_list_single_pane

0xc58e,	// (0x0002e623) rss_list_single_pane_t1

0xc59c,	// (0x0002e631) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x00031654) rss_list_single_pane_t

0x36e5,	// (0x0002577a) main_camera2_pane

0x36e5,	// (0x0002577a) main_video2_pane

0xc604,	// (0x0002e699) cams_zoom_pane_cp2_ParamLimits

0xc604,	// (0x0002e699) cams_zoom_pane_cp2

0xc604,	// (0x0002e699) image2_vga_pane_ParamLimits

0xc604,	// (0x0002e699) image2_vga_pane

0xc612,	// (0x0002e6a7) main_camera2_pane_g1_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g1

0xc612,	// (0x0002e6a7) main_camera2_pane_g2_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g2

0xc612,	// (0x0002e6a7) main_camera2_pane_g3_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g3

0xc612,	// (0x0002e6a7) main_camera2_pane_g4_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g4

0xc612,	// (0x0002e6a7) main_camera2_pane_g5_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g5

0xc612,	// (0x0002e6a7) main_camera2_pane_g6_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g6

0xc612,	// (0x0002e6a7) main_camera2_pane_g7_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g7

0xc612,	// (0x0002e6a7) main_camera2_pane_g8_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x00031670) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x00031670) main_camera2_pane_g

0x2702,	// (0x00024797) main_camera2_pane_t1_ParamLimits

0x2702,	// (0x00024797) main_camera2_pane_t1

0x2702,	// (0x00024797) main_camera2_pane_t2_ParamLimits

0x2702,	// (0x00024797) main_camera2_pane_t2

0x2702,	// (0x00024797) main_camera2_pane_t3_ParamLimits

0x2702,	// (0x00024797) main_camera2_pane_t3

0x2702,	// (0x00024797) main_camera2_pane_t4_ParamLimits

0x2702,	// (0x00024797) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x00031683) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x00031683) main_camera2_pane_t

0xc656,	// (0x0002e6eb) cams_zoom_pane_cp4_ParamLimits

0xc656,	// (0x0002e6eb) cams_zoom_pane_cp4

0x2716,	// (0x000247ab) image2_cif_pane_ParamLimits

0x2716,	// (0x000247ab) image2_cif_pane

0xa9bb,	// (0x0002ca50) image2_subqcif_pane_ParamLimits

0xa9bb,	// (0x0002ca50) image2_subqcif_pane

0x2724,	// (0x000247b9) main_video2_pane_g1_ParamLimits

0x2724,	// (0x000247b9) main_video2_pane_g1

0x2724,	// (0x000247b9) main_video2_pane_g2_ParamLimits

0x2724,	// (0x000247b9) main_video2_pane_g2

0x2724,	// (0x000247b9) main_video2_pane_g3_ParamLimits

0x2724,	// (0x000247b9) main_video2_pane_g3

0x2724,	// (0x000247b9) main_video2_pane_g4_ParamLimits

0x2724,	// (0x000247b9) main_video2_pane_g4

0x2724,	// (0x000247b9) main_video2_pane_g5_ParamLimits

0x2724,	// (0x000247b9) main_video2_pane_g5

0x2724,	// (0x000247b9) main_video2_pane_g6_ParamLimits

0x2724,	// (0x000247b9) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x00031692) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x00031692) main_video2_pane_g

0x2732,	// (0x000247c7) main_video2_pane_t1_ParamLimits

0x2732,	// (0x000247c7) main_video2_pane_t1

0x2732,	// (0x000247c7) main_video2_pane_t2_ParamLimits

0x2732,	// (0x000247c7) main_video2_pane_t2

0x2732,	// (0x000247c7) main_video2_pane_t3_ParamLimits

0x2732,	// (0x000247c7) main_video2_pane_t3

0x0002,

0xf60a,	// (0x0003169f) main_video2_pane_t_ParamLimits

0xf60a,	// (0x0003169f) main_video2_pane_t

0x655e,	// (0x000285f3) call_muted_g2

0x0001,

0xf5b1,	// (0x00031646) call_muted_g

0x36e5,	// (0x0002577a) main_mup2_pane

0xb034,	// (0x0002d0c9) main_mup2_pane_g1_ParamLimits

0xb034,	// (0x0002d0c9) main_mup2_pane_g1

0xb034,	// (0x0002d0c9) main_mup2_pane_g2_ParamLimits

0xb034,	// (0x0002d0c9) main_mup2_pane_g2

0xc73e,	// (0x0002e7d3) main_mup_pane_g13_cp1

0xa9c9,	// (0x0002ca5e) mup_volume_pane_cp1

0xb034,	// (0x0002d0c9) main_mup2_pane_g4_ParamLimits

0xb034,	// (0x0002d0c9) main_mup2_pane_g4

0xb034,	// (0x0002d0c9) main_mup2_pane_g5_ParamLimits

0xb034,	// (0x0002d0c9) main_mup2_pane_g5

0xb034,	// (0x0002d0c9) main_mup2_pane_g6_ParamLimits

0xb034,	// (0x0002d0c9) main_mup2_pane_g6

0xb034,	// (0x0002d0c9) main_mup2_pane_g7_ParamLimits

0xb034,	// (0x0002d0c9) main_mup2_pane_g7

0x0006,

0xf611,	// (0x000316a6) main_mup2_pane_g_ParamLimits

0xf611,	// (0x000316a6) main_mup2_pane_g

0xb042,	// (0x0002d0d7) main_mup2_pane_t1_ParamLimits

0xb042,	// (0x0002d0d7) main_mup2_pane_t1

0xb042,	// (0x0002d0d7) main_mup2_pane_t2_ParamLimits

0xb042,	// (0x0002d0d7) main_mup2_pane_t2

0xb042,	// (0x0002d0d7) main_mup2_pane_t3_ParamLimits

0xb042,	// (0x0002d0d7) main_mup2_pane_t3

0xb042,	// (0x0002d0d7) main_mup2_pane_t4_ParamLimits

0xb042,	// (0x0002d0d7) main_mup2_pane_t4

0xb042,	// (0x0002d0d7) main_mup2_pane_t5_ParamLimits

0xb042,	// (0x0002d0d7) main_mup2_pane_t5

0xb042,	// (0x0002d0d7) main_mup2_pane_t6_ParamLimits

0xb042,	// (0x0002d0d7) main_mup2_pane_t6

0x0005,

0xf620,	// (0x000316b5) main_mup2_pane_t_ParamLimits

0xf620,	// (0x000316b5) main_mup2_pane_t

0xb078,	// (0x0002d10d) mup2_visualizer_pane_ParamLimits

0xb078,	// (0x0002d10d) mup2_visualizer_pane

0xb078,	// (0x0002d10d) mup_progress_pane_cp_ParamLimits

0xb078,	// (0x0002d10d) mup_progress_pane_cp

0xc71f,	// (0x0002e7b4) mup_volume_pane_cp_ParamLimits

0xc71f,	// (0x0002e7b4) mup_volume_pane_cp

0x39d7,	// (0x00025a6c) mup2_visualizer_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) mup2_visualizer_pane_g1

0x39e5,	// (0x00025a7a) mup2_visualizer_pane_g2_ParamLimits

0x39e5,	// (0x00025a7a) mup2_visualizer_pane_g2

0x39e5,	// (0x00025a7a) mup2_visualizer_pane_g3_ParamLimits

0x39e5,	// (0x00025a7a) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00031179) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00031179) mup2_visualizer_pane_g

0xb35e,	// (0x0002d3f3) aid_size_cell_fmradio

0x2492,	// (0x00024527) aid_height_parent_landcape

0x49e6,	// (0x00026a7b) wml_content_pane_cp

0x49ee,	// (0x00026a83) wml_tabs_pane

0x49f7,	// (0x00026a8c) popup_wml_miniature_window

0x49ff,	// (0x00026a94) scroll_pane_cp021

0x4a13,	// (0x00026aa8) wml_content_pane_comp8

0x36e5,	// (0x0002577a) bg_popup_sub_pane_cp05

0xc67a,	// (0x0002e70f) popup_wml_miniature_window_g1

0xc682,	// (0x0002e717) wml_miniature_view_pane

0x6920,	// (0x000289b5) aid_size_wml_view

0x6928,	// (0x000289bd) wml_miniature_view_pane_g1

0x6931,	// (0x000289c6) wml_miniature_view_pane_g2

0x693a,	// (0x000289cf) wml_miniature_view_pane_g3

0x6942,	// (0x000289d7) wml_miniature_view_pane_g4

0x694a,	// (0x000289df) wml_miniature_view_pane_g5

0x6952,	// (0x000289e7) wml_miniature_view_pane_g6

0x695a,	// (0x000289ef) wml_miniature_view_pane_g7

0x6962,	// (0x000289f7) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x000316c2) wml_miniature_view_pane_g

0xc68a,	// (0x0002e71f) background_graphic_ParamLimits

0xc68a,	// (0x0002e71f) background_graphic

0xc696,	// (0x0002e72b) wml_tabs_2_pane

0xc69f,	// (0x0002e734) wml_tabs_3_pane_ParamLimits

0xc69f,	// (0x0002e734) wml_tabs_3_pane

0xc6b1,	// (0x0002e746) wml_tabs_4_pane_ParamLimits

0xc6b1,	// (0x0002e746) wml_tabs_4_pane

0xc6c7,	// (0x0002e75c) wml_tabs_5_pane_ParamLimits

0xc6c7,	// (0x0002e75c) wml_tabs_5_pane

0xc6e1,	// (0x0002e776) wml_tabs_pane_g2_ParamLimits

0xc6e1,	// (0x0002e776) wml_tabs_pane_g2

0xc6f5,	// (0x0002e78a) wml_tabs_pane_g3_ParamLimits

0xc6f5,	// (0x0002e78a) wml_tabs_pane_g3

0x696a,	// (0x000289ff) wml_tabs_2_active_pane_ParamLimits

0x696a,	// (0x000289ff) wml_tabs_2_active_pane

0x697a,	// (0x00028a0f) wml_tabs_2_passive_pane_ParamLimits

0x697a,	// (0x00028a0f) wml_tabs_2_passive_pane

0x698a,	// (0x00028a1f) wml_tabs_3_active_pane_cp_ParamLimits

0x698a,	// (0x00028a1f) wml_tabs_3_active_pane_cp

0x699b,	// (0x00028a30) wml_tabs_3_passive_pane_ParamLimits

0x699b,	// (0x00028a30) wml_tabs_3_passive_pane

0x69ac,	// (0x00028a41) wml_tabs_3_passive_pane_cp_ParamLimits

0x69ac,	// (0x00028a41) wml_tabs_3_passive_pane_cp

0x69bd,	// (0x00028a52) tabs_4_active_pane

0x69c5,	// (0x00028a5a) tabs_4_passive_pane

0x69cd,	// (0x00028a62) tabs_4_passive_pane_cp

0x69d5,	// (0x00028a6a) tabs_4_passive_pane_cp2

0x6439,	// (0x000284ce) aid_height_text

0xb078,	// (0x0002d10d) mup_volume_cont_pane_ParamLimits

0xb078,	// (0x0002d10d) mup_volume_cont_pane

0x3962,	// (0x000259f7) aid_size_cell_pinb

0x3237,	// (0x000252cc) aid_size_list_pinb

0xb078,	// (0x0002d10d) mup2_volume_cont_pane_ParamLimits

0xb078,	// (0x0002d10d) mup2_volume_cont_pane

0xc709,	// (0x0002e79e) mup2_volume_cont_pane_g1_ParamLimits

0xc709,	// (0x0002e79e) mup2_volume_cont_pane_g1

0x1f8f,	// (0x00024024) aid_size_cell_touch_ParamLimits

0x1f8f,	// (0x00024024) aid_size_cell_touch

0x2140,	// (0x000241d5) touch_pane_ParamLimits

0x2140,	// (0x000241d5) touch_pane

0xa9c9,	// (0x0002ca5e) main_rss2_pane

0xc748,	// (0x0002e7dd) listscroll_rss2_pane

0xc751,	// (0x0002e7e6) rss2_navigation_pane

0xc759,	// (0x0002e7ee) list_rss2_pane

0xad82,	// (0x0002ce17) scroll_pane_cp22

0xc761,	// (0x0002e7f6) rss2_navigation_pane_g1

0xc76a,	// (0x0002e7ff) rss2_navigation_pane_g2

0xc772,	// (0x0002e807) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x000316d3) rss2_navigation_pane_g

0xc77a,	// (0x0002e80f) rss2_navigation_pane_t1

0x69dd,	// (0x00028a72) rss2_list_single_pane_ParamLimits

0x69dd,	// (0x00028a72) rss2_list_single_pane

0xc788,	// (0x0002e81d) rss2_list_single_pane_t2

0xc796,	// (0x0002e82b) rss2_list_single_pane_t3_ParamLimits

0xc796,	// (0x0002e82b) rss2_list_single_pane_t3

0xc7b3,	// (0x0002e848) rss2_list_single_pane_t4

0x5600,	// (0x00027695) smil_status_pane_g1

0xa9bb,	// (0x0002ca50) main_image2_pane_ParamLimits

0xa9bb,	// (0x0002ca50) main_image2_pane

0xc612,	// (0x0002e6a7) main_camera2_pane_g9_ParamLimits

0xc612,	// (0x0002e6a7) main_camera2_pane_g9

0x2702,	// (0x00024797) main_camera2_pane_t5_ParamLimits

0x2702,	// (0x00024797) main_camera2_pane_t5

0xc620,	// (0x0002e6b5) main_camera2_pane_t6_ParamLimits

0xc620,	// (0x0002e6b5) main_camera2_pane_t6

0x69f1,	// (0x00028a86) main_image2_pane_g1_ParamLimits

0x69f1,	// (0x00028a86) main_image2_pane_g1

0x61f1,	// (0x00028286) smil2_video_pane_ParamLimits

0x61f1,	// (0x00028286) smil2_video_pane

0xa982,	// (0x0002ca17) aid_zoom_text_primary_cp

0xa9b3,	// (0x0002ca48) popup_preview_fixed_window

0x48df,	// (0x00026974) im_reading_pane_g1

0x26f4,	// (0x00024789) cams2_bc_adjust_pane_cp_ParamLimits

0x26f4,	// (0x00024789) cams2_bc_adjust_pane_cp

0xc648,	// (0x0002e6dd) cams2_bc_adjust_pane_ParamLimits

0xc648,	// (0x0002e6dd) cams2_bc_adjust_pane

0xc73e,	// (0x0002e7d3) cams2_bc_adjust_pane_g1

0xa9c9,	// (0x0002ca5e) cams2_slider_pane

0xc73e,	// (0x0002e7d3) cams2_slider_pane_g1

0xc73e,	// (0x0002e7d3) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x000316da) cams2_slider_pane_g

0x21a6,	// (0x0002423b) calc_display_pane_ParamLimits

0x21c2,	// (0x00024257) calc_paper_pane_ParamLimits

0x21e3,	// (0x00024278) grid_calc_pane_ParamLimits

0xac3e,	// (0x0002ccd3) popup_clock_digital_window_t1_ParamLimits

0xb2fb,	// (0x0002d390) main_image_pane_t1

0x2188,	// (0x0002421d) aid_size_cell_calc_ParamLimits

0x2188,	// (0x0002421d) aid_size_cell_calc

0x24d2,	// (0x00024567) popup_blid_sat_info2_window_ParamLimits

0x24d2,	// (0x00024567) popup_blid_sat_info2_window

0xc7c1,	// (0x0002e856) aid_size_cell_blid

0xc7c9,	// (0x0002e85e) bg_popup_window_pane_cp07

0xc7ec,	// (0x0002e881) grid_popup_blid_pane

0xc7f4,	// (0x0002e889) heading_pane_cp05_ParamLimits

0xc7f4,	// (0x0002e889) heading_pane_cp05

0xc8bc,	// (0x0002e951) cell_popup_blid_pane_ParamLimits

0xc8bc,	// (0x0002e951) cell_popup_blid_pane

0xc8dc,	// (0x0002e971) cell_popup_blid_pane_g1

0xc8e4,	// (0x0002e979) cell_popup_blid_pane_t1

0xb078,	// (0x0002d10d) mup2_indicator_pane_ParamLimits

0xb078,	// (0x0002d10d) mup2_indicator_pane

0x3237,	// (0x000252cc) mup2_visualizer_osc_pane

0xc664,	// (0x0002e6f9) mup2_visualizer_spec_pane_ParamLimits

0xc664,	// (0x0002e6f9) mup2_visualizer_spec_pane

0x3237,	// (0x000252cc) mup2_spec_half_pane

0x3237,	// (0x000252cc) mup2_spec_half_pane_cp

0x3237,	// (0x000252cc) mup2_spec_bar_pane_ParamLimits

0x3237,	// (0x000252cc) mup2_spec_bar_pane

0x44a0,	// (0x00026535) mup2_spec_bar_pane_g1

0xc8f2,	// (0x0002e987) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x00031700) mup2_spec_bar_pane_g

0x3237,	// (0x000252cc) mup2_osc_middle_pane

0x44a0,	// (0x00026535) mup2_visualizer_osc_pane_g1

0x329c,	// (0x00025331) popup_number_entry_window_t1_ParamLimits

0x32af,	// (0x00025344) popup_number_entry_window_t2_ParamLimits

0x32c1,	// (0x00025356) popup_number_entry_window_t3_ParamLimits

0x32d3,	// (0x00025368) popup_number_entry_window_t5_ParamLimits

0x32d3,	// (0x00025368) popup_number_entry_window_t5

0xf085,	// (0x0003111a) popup_number_entry_window_t_ParamLimits

0x3307,	// (0x0002539c) text_title_cp2_ParamLimits

0xb1d5,	// (0x0002d26a) aid_hotspot_pointer_text2_pane

0xb1fb,	// (0x0002d290) main_viewer_pane_g9_ParamLimits

0xb1fb,	// (0x0002d290) main_viewer_pane_g9

0x5019,	// (0x000270ae) cale_month_pane_t1_ParamLimits

0x5670,	// (0x00027705) bg_cale_pane_ParamLimits

0x5688,	// (0x0002771d) list_cale_pane_ParamLimits

0x5699,	// (0x0002772e) listscroll_cale_day_pane_t1

0x56ab,	// (0x00027740) scroll_pane_cp09_ParamLimits

0x5ccd,	// (0x00027d62) main_mup_eq_pane_t1_ParamLimits

0x5ccd,	// (0x00027d62) main_mup_eq_pane_t1

0x5ce5,	// (0x00027d7a) main_mup_eq_pane_t2_ParamLimits

0x5ce5,	// (0x00027d7a) main_mup_eq_pane_t2

0x5cfb,	// (0x00027d90) main_mup_eq_pane_t3_ParamLimits

0x5cfb,	// (0x00027d90) main_mup_eq_pane_t3

0x5d11,	// (0x00027da6) main_mup_eq_pane_t4_ParamLimits

0x5d11,	// (0x00027da6) main_mup_eq_pane_t4

0x5d27,	// (0x00027dbc) main_mup_eq_pane_t5_ParamLimits

0x5d27,	// (0x00027dbc) main_mup_eq_pane_t5

0x5d3d,	// (0x00027dd2) main_mup_eq_pane_t6_ParamLimits

0x5d3d,	// (0x00027dd2) main_mup_eq_pane_t6

0x5d4f,	// (0x00027de4) main_mup_eq_pane_t7_ParamLimits

0x5d4f,	// (0x00027de4) main_mup_eq_pane_t7

0x5d61,	// (0x00027df6) main_mup_eq_pane_t8_ParamLimits

0x5d61,	// (0x00027df6) main_mup_eq_pane_t8

0x5d73,	// (0x00027e08) main_mup_eq_pane_t9_ParamLimits

0x5d73,	// (0x00027e08) main_mup_eq_pane_t9

0x5d89,	// (0x00027e1e) main_mup_eq_pane_t10_ParamLimits

0x5d89,	// (0x00027e1e) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x00031490) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x00031490) main_mup_eq_pane_t

0x5e1c,	// (0x00027eb1) mup_equalizer_pane_cp5_ParamLimits

0x5e2e,	// (0x00027ec3) mup_equalizer_pane_cp6_ParamLimits

0x5e40,	// (0x00027ed5) mup_equalizer_pane_cp7_ParamLimits

0xa9c9,	// (0x0002ca5e) main_gallery_pane

0xc5b4,	// (0x0002e649) smil2_volume_pane

0xc5bc,	// (0x0002e651) smil_status_volume_pane_g1_ParamLimits

0xc5cf,	// (0x0002e664) smil_status_volume_pane_g2_ParamLimits

0xc5e2,	// (0x0002e677) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x00031659) smil_status_volume_pane_g_ParamLimits

0xc7c9,	// (0x0002e85e) bg_popup_window_pane_cp07_ParamLimits

0xc7d7,	// (0x0002e86c) blid_firmament_pane

0x42b0,	// (0x00026345) aid_size_cell_gallery_ParamLimits

0x42b0,	// (0x00026345) aid_size_cell_gallery

0x6a05,	// (0x00028a9a) grid_gallery_pane_ParamLimits

0x6a05,	// (0x00028a9a) grid_gallery_pane

0x6a1b,	// (0x00028ab0) cell_gallery_pane_ParamLimits

0x6a1b,	// (0x00028ab0) cell_gallery_pane

0x42b0,	// (0x00026345) bg_cell_gallery_focus_pane_ParamLimits

0x42b0,	// (0x00026345) bg_cell_gallery_focus_pane

0x39d7,	// (0x00025a6c) cell_gallery_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) cell_gallery_pane_g1

0x39d7,	// (0x00025a6c) cell_gallery_pane_g2_ParamLimits

0x39d7,	// (0x00025a6c) cell_gallery_pane_g2

0x39d7,	// (0x00025a6c) cell_gallery_pane_g3_ParamLimits

0x39d7,	// (0x00025a6c) cell_gallery_pane_g3

0x39e5,	// (0x00025a7a) cell_gallery_pane_g4_ParamLimits

0x39e5,	// (0x00025a7a) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x00031705) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x00031705) cell_gallery_pane_g

0xc8fc,	// (0x0002e991) bg_cell_gallery_focus_pane_g1

0xc904,	// (0x0002e999) bg_cell_gallery_focus_pane_g2

0xc90c,	// (0x0002e9a1) bg_cell_gallery_focus_pane_g3

0xc914,	// (0x0002e9a9) bg_cell_gallery_focus_pane_g4

0xc91c,	// (0x0002e9b1) bg_cell_gallery_focus_pane_g5

0xc924,	// (0x0002e9b9) bg_cell_gallery_focus_pane_g6

0xc92c,	// (0x0002e9c1) bg_cell_gallery_focus_pane_g7

0xc934,	// (0x0002e9c9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x0003170e) bg_cell_gallery_focus_pane_g

0xc93c,	// (0x0002e9d1) aid_firma_cardinal

0xc950,	// (0x0002e9e5) blid_firmament_pane_t1

0xc967,	// (0x0002e9fc) blid_firmament_pane_t2

0xc97e,	// (0x0002ea13) blid_firmament_pane_t3

0xc995,	// (0x0002ea2a) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x0003171f) blid_firmament_pane_t

0xc9ac,	// (0x0002ea41) blid_sat_info_pane

0x44a0,	// (0x00026535) blid_sat_info_pane_g1

0x44a0,	// (0x00026535) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x00031484) blid_sat_info_pane_g

0xc9bc,	// (0x0002ea51) blid_sat_info_pane_t1

0xc9ca,	// (0x0002ea5f) smil2_volume_content_pane

0xc9d3,	// (0x0002ea68) smil2_volume_pane_g1

0xc9db,	// (0x0002ea70) smil2_volume_content_pane_g1

0xc9e4,	// (0x0002ea79) smil2_volume_content_pane_g2

0xc9ed,	// (0x0002ea82) smil2_volume_content_pane_g3

0xc9f6,	// (0x0002ea8b) smil2_volume_content_pane_g4

0xc9ff,	// (0x0002ea94) smil2_volume_content_pane_g5

0xca08,	// (0x0002ea9d) smil2_volume_content_pane_g6

0xca11,	// (0x0002eaa6) smil2_volume_content_pane_g7

0xca1a,	// (0x0002eaaf) smil2_volume_content_pane_g8

0xca23,	// (0x0002eab8) smil2_volume_content_pane_g9

0xca2c,	// (0x0002eac1) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x00031728) smil2_volume_content_pane_g

0x4054,	// (0x000260e9) cale_week_day_heading_pane_t1_ParamLimits

0x407e,	// (0x00026113) cale_week_day_heading_pane_t2_ParamLimits

0x40ad,	// (0x00026142) cale_week_day_heading_pane_t3_ParamLimits

0x40dc,	// (0x00026171) cale_week_day_heading_pane_t4_ParamLimits

0x410b,	// (0x000261a0) cale_week_day_heading_pane_t5_ParamLimits

0x413a,	// (0x000261cf) cale_week_day_heading_pane_t6_ParamLimits

0x4169,	// (0x000261fe) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00031221) cale_week_day_heading_pane_t_ParamLimits

0x4193,	// (0x00026228) bg_cale_side_pane_ParamLimits

0x2272,	// (0x00024307) cale_week_time_pane_t1_ParamLimits

0x22ac,	// (0x00024341) cale_week_time_pane_t2_ParamLimits

0x22e6,	// (0x0002437b) cale_week_time_pane_t3_ParamLimits

0x2320,	// (0x000243b5) cale_week_time_pane_t4_ParamLimits

0x235a,	// (0x000243ef) cale_week_time_pane_t5_ParamLimits

0x2394,	// (0x00024429) cale_week_time_pane_t6_ParamLimits

0x23ce,	// (0x00024463) cale_week_time_pane_t7_ParamLimits

0x2408,	// (0x0002449d) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00031230) cale_week_time_pane_t_ParamLimits

0x41a1,	// (0x00026236) cell_cale_week_pane_g2_ParamLimits

0x4193,	// (0x00026228) bg_cale_side_pane_cp01_ParamLimits

0x5465,	// (0x000274fa) cale_month_week_pane_t1_ParamLimits

0x547e,	// (0x00027513) cale_month_week_pane_t2_ParamLimits

0x5497,	// (0x0002752c) cale_month_week_pane_t3_ParamLimits

0x54b0,	// (0x00027545) cale_month_week_pane_t4_ParamLimits

0x54c9,	// (0x0002755e) cale_month_week_pane_t5_ParamLimits

0x54e2,	// (0x00027577) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x000312fe) cale_month_week_pane_t_ParamLimits

0xaa9f,	// (0x0002cb34) cell_cale_month_pane_g1_ParamLimits

0xa9c9,	// (0x0002ca5e) main_cale_event_viewer_pane

0x3237,	// (0x000252cc) listscroll_cale_event_viewer_pane

0xca35,	// (0x0002eaca) list_cale_ev_pane

0xca3d,	// (0x0002ead2) scroll_pane_cp023

0x6a3b,	// (0x00028ad0) field_cale_ev_pane_ParamLimits

0x6a3b,	// (0x00028ad0) field_cale_ev_pane

0xca49,	// (0x0002eade) field_cale_ev_content_pane_ParamLimits

0xca49,	// (0x0002eade) field_cale_ev_content_pane

0xca55,	// (0x0002eaea) field_cale_ev_pane_g1_ParamLimits

0xca55,	// (0x0002eaea) field_cale_ev_pane_g1

0xca61,	// (0x0002eaf6) field_cale_ev_pane_g2_ParamLimits

0xca61,	// (0x0002eaf6) field_cale_ev_pane_g2

0xca79,	// (0x0002eb0e) field_cale_ev_pane_g3_ParamLimits

0xca79,	// (0x0002eb0e) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x0003173d) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x0003173d) field_cale_ev_pane_g

0xca91,	// (0x0002eb26) field_cale_ev_pane_t1_ParamLimits

0xca91,	// (0x0002eb26) field_cale_ev_pane_t1

0x3ce6,	// (0x00025d7b) field_cale_ev_content_pane_t1_ParamLimits

0x3ce6,	// (0x00025d7b) field_cale_ev_content_pane_t1

0xb123,	// (0x0002d1b8) bg_button_pane_cp01

0x3d4e,	// (0x00025de3) listscroll_cale_week_pane_ParamLimits

0x3d5e,	// (0x00025df3) popup_toolbar_window_cp01

0x3faf,	// (0x00026044) listscroll_cale_week_pane_t1_ParamLimits

0x3d4e,	// (0x00025de3) listscroll_cale_day_pane_ParamLimits

0x3d5e,	// (0x00025df3) popup_toolbar_window_cp02

0x5699,	// (0x0002772e) listscroll_cale_day_pane_t1_ParamLimits

0x249a,	// (0x0002452f) main_cale_month_pane_ParamLimits

0xc548,	// (0x0002e5dd) popup_toolbar_window_cp03_ParamLimits

0xc548,	// (0x0002e5dd) popup_toolbar_window_cp03

0x60cb,	// (0x00028160) main_image_pane_g2_ParamLimits

0x60cb,	// (0x00028160) main_image_pane_g2

0x60dc,	// (0x00028171) main_image_pane_g3_ParamLimits

0x60dc,	// (0x00028171) main_image_pane_g3

0x0002,

0xf48d,	// (0x00031522) main_image_pane_g_ParamLimits

0xf48d,	// (0x00031522) main_image_pane_g

0xb2fb,	// (0x0002d390) main_image_pane_t1_ParamLimits

0x60ed,	// (0x00028182) main_image_pane_t2_ParamLimits

0x60ed,	// (0x00028182) main_image_pane_t2

0x60ff,	// (0x00028194) main_image_pane_t3_ParamLimits

0x60ff,	// (0x00028194) main_image_pane_t3

0x6127,	// (0x000281bc) main_image_pane_t4_ParamLimits

0x6127,	// (0x000281bc) main_image_pane_t4

0x0003,

0xf494,	// (0x00031529) main_image_pane_t_ParamLimits

0xf494,	// (0x00031529) main_image_pane_t

0x6147,	// (0x000281dc) popup_image_details_window_cp01

0x614f,	// (0x000281e4) popup_toobar_trans_pane_cp01_ParamLimits

0x614f,	// (0x000281e4) popup_toobar_trans_pane_cp01

0x259b,	// (0x00024630) popup_image_details_window_ParamLimits

0x259b,	// (0x00024630) popup_image_details_window

0xc51d,	// (0x0002e5b2) popup_image_focus_window

0xc604,	// (0x0002e699) camera2_autofocus_pane_ParamLimits

0xc604,	// (0x0002e699) camera2_autofocus_pane

0x3237,	// (0x000252cc) bg_popup_sub_pane_cp06

0xcaa8,	// (0x0002eb3d) popup_image_focus_window_g1

0xcab0,	// (0x0002eb45) popup_image_focus_window_g2

0xcab8,	// (0x0002eb4d) popup_image_focus_window_g3

0xcac0,	// (0x0002eb55) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x00031744) popup_image_focus_window_g

0xcac8,	// (0x0002eb5d) popup_image_focus_window_t1

0xcad6,	// (0x0002eb6b) popup_image_focus_window_t2

0xcae5,	// (0x0002eb7a) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x0003174d) popup_image_focus_window_t

0x39d7,	// (0x00025a6c) camera2_autofocus_pane_g1

0x42b0,	// (0x00026345) bg_tb_trans_pane_cp01

0xcaf3,	// (0x0002eb88) popup_image_details_window_g1

0xcb06,	// (0x0002eb9b) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x0003175f) popup_image_details_window_g

0xcb2f,	// (0x0002ebc4) popup_image_details_window_t1

0xcb41,	// (0x0002ebd6) popup_image_details_window_t2

0xcb5a,	// (0x0002ebef) popup_image_details_window_t3

0xcb6e,	// (0x0002ec03) popup_image_details_window_t4

0xcb89,	// (0x0002ec1e) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x00031766) popup_image_details_window_t

0x3aff,	// (0x00025b94) bg_calc_paper_pane_ParamLimits

0xa9c9,	// (0x0002ca5e) grid_highlight_pane_cp013

0xa9db,	// (0x0002ca70) list_calc_pane_ParamLimits

0xa9ed,	// (0x0002ca82) scroll_pane_cp024

0x3b17,	// (0x00025bac) bg_calc_display_pane_ParamLimits

0xa9f5,	// (0x0002ca8a) calc_display_pane_t1_ParamLimits

0xaa0a,	// (0x0002ca9f) calc_display_pane_t2_ParamLimits

0xaa1f,	// (0x0002cab4) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x000311a1) calc_display_pane_t_ParamLimits

0x2248,	// (0x000242dd) cell_calc_pane_g2

0x0001,

0xf129,	// (0x000311be) cell_calc_pane_g

0x2251,	// (0x000242e6) cell_calc_pane_t1

0x3bbc,	// (0x00025c51) grid_highlight_pane_cp02_ParamLimits

0x3bd2,	// (0x00025c67) toolbar_button_pane_cp01_ParamLimits

0x3bd2,	// (0x00025c67) toolbar_button_pane_cp01

0xb340,	// (0x0002d3d5) temp_image_control_pane_ParamLimits

0xb340,	// (0x0002d3d5) temp_image_control_pane

0xa9bb,	// (0x0002ca50) main_mp3_pane

0xcba3,	// (0x0002ec38) temp_image_control_pane_g1_ParamLimits

0xcba3,	// (0x0002ec38) temp_image_control_pane_g1

0xcbb1,	// (0x0002ec46) temp_image_control_pane_g2_ParamLimits

0xcbb1,	// (0x0002ec46) temp_image_control_pane_g2

0xcbc3,	// (0x0002ec58) temp_image_control_pane_g3_ParamLimits

0xcbc3,	// (0x0002ec58) temp_image_control_pane_g3

0x6a55,	// (0x00028aea) temp_image_control_pane_g4_ParamLimits

0x6a55,	// (0x00028aea) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x00031771) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x00031771) temp_image_control_pane_g

0xcba3,	// (0x0002ec38) main_mp3_pane_g1

0x6a66,	// (0x00028afb) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x0003177a) main_mp3_pane_g

0xcbf8,	// (0x0002ec8d) main_mp3_pane_t1

0x39e5,	// (0x00025a7a) main_camera_pane_g8_ParamLimits

0x39e5,	// (0x00025a7a) main_camera_pane_g8

0x4448,	// (0x000264dd) main_video_pane_g7_ParamLimits

0x4448,	// (0x000264dd) main_video_pane_g7

0xc634,	// (0x0002e6c9) main_camera2_pane_t7_ParamLimits

0xc634,	// (0x0002e6c9) main_camera2_pane_t7

0x49a6,	// (0x00026a3b) scroll_pane_cp025_ParamLimits

0x49a6,	// (0x00026a3b) scroll_pane_cp025

0x49ba,	// (0x00026a4f) scroll_pane_cp026_ParamLimits

0x49ba,	// (0x00026a4f) scroll_pane_cp026

0x49c9,	// (0x00026a5e) wml_content_pane_ParamLimits

0xa9c9,	// (0x0002ca5e) main_touch_calib_pane

0x6b28,	// (0x00028bbd) main_touch_calib_pane_g1

0x6b3a,	// (0x00028bcf) main_touch_calib_pane_g2

0x6b4c,	// (0x00028be1) main_touch_calib_pane_g3

0x6b5e,	// (0x00028bf3) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x00031798) main_touch_calib_pane_g

0x6b70,	// (0x00028c05) main_touch_calib_pane_t1

0x6b88,	// (0x00028c1d) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x000317a1) main_touch_calib_pane_t

0xae3e,	// (0x0002ced3) mup_progress_pane_cp02

0xae73,	// (0x0002cf08) navi_pane_g1

0xaefe,	// (0x0002cf93) navi_pane_mp_t3

0xa9bb,	// (0x0002ca50) main_mp3_pane_ParamLimits

0x66d8,	// (0x0002876d) navi_pane_ParamLimits

0xcba3,	// (0x0002ec38) main_mp3_pane_g1_ParamLimits

0x6a66,	// (0x00028afb) main_mp3_pane_g2_ParamLimits

0x6a72,	// (0x00028b07) main_mp3_pane_g3_ParamLimits

0x6a72,	// (0x00028b07) main_mp3_pane_g3

0x6a7e,	// (0x00028b13) main_mp3_pane_g4_ParamLimits

0x6a7e,	// (0x00028b13) main_mp3_pane_g4

0x39d7,	// (0x00025a6c) main_mp3_pane_g5_ParamLimits

0x39d7,	// (0x00025a6c) main_mp3_pane_g5

0xcbd3,	// (0x0002ec68) main_mp3_pane_g6_ParamLimits

0xcbd3,	// (0x0002ec68) main_mp3_pane_g6

0xcbe0,	// (0x0002ec75) main_mp3_pane_g7_ParamLimits

0xcbe0,	// (0x0002ec75) main_mp3_pane_g7

0xcbec,	// (0x0002ec81) main_mp3_pane_g8_ParamLimits

0xcbec,	// (0x0002ec81) main_mp3_pane_g8

0xf6e5,	// (0x0003177a) main_mp3_pane_g_ParamLimits

0x6a8a,	// (0x00028b1f) main_mp3_pane_t2

0x6a98,	// (0x00028b2d) main_mp3_pane_t3

0xcc06,	// (0x0002ec9b) main_mp3_pane_t4

0xcc14,	// (0x0002eca9) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x0003178b) main_mp3_pane_t

0xcc22,	// (0x0002ecb7) mup_progress_pane_cp01

0xa982,	// (0x0002ca17) aid_zoom_text_secondary2

0xca35,	// (0x0002eaca) list_cale_ev2_pane

0xca3d,	// (0x0002ead2) scroll_pane_cp023_ParamLimits

0x6bd6,	// (0x00028c6b) field_cale_ev2_pane_ParamLimits

0x6bd6,	// (0x00028c6b) field_cale_ev2_pane

0xcc2a,	// (0x0002ecbf) field_cale_ev2_pane_g1_ParamLimits

0xcc2a,	// (0x0002ecbf) field_cale_ev2_pane_g1

0xcc36,	// (0x0002eccb) field_cale_ev2_pane_g2_ParamLimits

0xcc36,	// (0x0002eccb) field_cale_ev2_pane_g2

0xcc4e,	// (0x0002ece3) field_cale_ev2_pane_g3_ParamLimits

0xcc4e,	// (0x0002ece3) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x000317ac) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x000317ac) field_cale_ev2_pane_g

0xcc72,	// (0x0002ed07) field_cale_ev2_pane_t1_ParamLimits

0xcc72,	// (0x0002ed07) field_cale_ev2_pane_t1

0xcc89,	// (0x0002ed1e) field_cale_ev2_pane_t2_ParamLimits

0xcc89,	// (0x0002ed1e) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x000317b5) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x000317b5) field_cale_ev2_pane_t

0x5f86,	// (0x0002801b) main_postcard_pane_g5_ParamLimits

0x5f86,	// (0x0002801b) main_postcard_pane_g5

0x5f9a,	// (0x0002802f) main_postcard_pane_g6_ParamLimits

0x5f9a,	// (0x0002802f) main_postcard_pane_g6

0x42b0,	// (0x00026345) camera2_autofocus_pane_cp_ParamLimits

0x42b0,	// (0x00026345) camera2_autofocus_pane_cp

0xa9bb,	// (0x0002ca50) main_mup3_pane

0x6c2c,	// (0x00028cc1) main_mup3_pane_g1_ParamLimits

0x6c2c,	// (0x00028cc1) main_mup3_pane_g1

0x6c4e,	// (0x00028ce3) main_mup3_pane_g2_ParamLimits

0x6c4e,	// (0x00028ce3) main_mup3_pane_g2

0x6cc1,	// (0x00028d56) main_mup3_pane_g3_ParamLimits

0x6cc1,	// (0x00028d56) main_mup3_pane_g3

0x6cff,	// (0x00028d94) main_mup3_pane_g4_ParamLimits

0x6cff,	// (0x00028d94) main_mup3_pane_g4

0x6d3d,	// (0x00028dd2) main_mup3_pane_g5_ParamLimits

0x6d3d,	// (0x00028dd2) main_mup3_pane_g5

0x6d7b,	// (0x00028e10) main_mup3_pane_g6_ParamLimits

0x6d7b,	// (0x00028e10) main_mup3_pane_g6

0x39e5,	// (0x00025a7a) main_mup3_pane_g7_ParamLimits

0x39e5,	// (0x00025a7a) main_mup3_pane_g7

0x0007,

0xf730,	// (0x000317c5) main_mup3_pane_g_ParamLimits

0xf730,	// (0x000317c5) main_mup3_pane_g

0x6df1,	// (0x00028e86) main_mup3_pane_t1_ParamLimits

0x6df1,	// (0x00028e86) main_mup3_pane_t1

0x6e57,	// (0x00028eec) main_mup3_pane_t2_ParamLimits

0x6e57,	// (0x00028eec) main_mup3_pane_t2

0x6f1d,	// (0x00028fb2) main_mup3_pane_t4_ParamLimits

0x6f1d,	// (0x00028fb2) main_mup3_pane_t4

0x6f6b,	// (0x00029000) main_mup3_pane_t5_ParamLimits

0x6f6b,	// (0x00029000) main_mup3_pane_t5

0x7019,	// (0x000290ae) main_mup3_pane_t6_ParamLimits

0x7019,	// (0x000290ae) main_mup3_pane_t6

0x0005,

0xf741,	// (0x000317d6) main_mup3_pane_t_ParamLimits

0xf741,	// (0x000317d6) main_mup3_pane_t

0x70cd,	// (0x00029162) mup3_progress_pane_ParamLimits

0x70cd,	// (0x00029162) mup3_progress_pane

0x7149,	// (0x000291de) popup_mup3_control_window_ParamLimits

0x7149,	// (0x000291de) popup_mup3_control_window

0xcc9e,	// (0x0002ed33) popup_mup3_text_window

0x7177,	// (0x0002920c) mup3_progress_pane_t1

0x7195,	// (0x0002922a) mup3_progress_pane_t2

0xcca6,	// (0x0002ed3b) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x000317e3) mup3_progress_pane_t

0xccc3,	// (0x0002ed58) mup_progress_pane_cp03

0x3237,	// (0x000252cc) bg_tb_trans_pane_cp04

0x71b3,	// (0x00029248) mup3_volume_pane

0x71bb,	// (0x00029250) popup_mup3_control_window_g1

0x71c4,	// (0x00029259) mup3_volume_pane_g1

0x71cd,	// (0x00029262) mup3_volume_pane_g2

0x71d6,	// (0x0002926b) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x000317ea) mup3_volume_pane_g

0x3237,	// (0x000252cc) bg_tb_trans_pane_cp03

0xccd3,	// (0x0002ed68) popup_mup3_text_window_g1

0xccdb,	// (0x0002ed70) popup_mup3_text_window_t1

0x3baf,	// (0x00025c44) list_calc_item_pane_g1_ParamLimits

0xc735,	// (0x0002e7ca) mup_volume_pane_cp_g1

0x6ba0,	// (0x00028c35) main_touch_calib_pane_t3

0x6bb2,	// (0x00028c47) main_touch_calib_pane_t4

0x6bc4,	// (0x00028c59) main_touch_calib_pane_t5

0xa972,	// (0x0002ca07) aid_cell_size_toolbar2

0xa97a,	// (0x0002ca0f) aid_popup3_width_pane

0xa982,	// (0x0002ca17) aid_zoom_text_msg_primary

0x428f,	// (0x00026324) vorec_t7

0x3b23,	// (0x00025bb8) bg_calc_paper_pane_g1_ParamLimits

0x3b2f,	// (0x00025bc4) bg_calc_paper_pane_g2_ParamLimits

0x3b3b,	// (0x00025bd0) bg_calc_paper_pane_g3_ParamLimits

0x3b47,	// (0x00025bdc) bg_calc_paper_pane_g4_ParamLimits

0x3b53,	// (0x00025be8) bg_calc_paper_pane_g5_ParamLimits

0x3b5f,	// (0x00025bf4) bg_calc_paper_pane_g6_ParamLimits

0x3b6e,	// (0x00025c03) bg_calc_paper_pane_g7_ParamLimits

0x3b7d,	// (0x00025c12) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x000311a8) bg_calc_paper_pane_g_ParamLimits

0x3b8c,	// (0x00025c21) calc_bg_paper_pane_g9_ParamLimits

0x4344,	// (0x000263d9) image_qvga_pane_ParamLimits

0x4344,	// (0x000263d9) image_qvga_pane

0x3940,	// (0x000259d5) bg_popup_sub_pane_cp04_ParamLimits

0xb277,	// (0x0002d30c) popup_mup_playback_window_g1_ParamLimits

0xb283,	// (0x0002d318) popup_mup_playback_window_t1_ParamLimits

0xb298,	// (0x0002d32d) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x0003151d) popup_mup_playback_window_t_ParamLimits

0x39e5,	// (0x00025a7a) main_mup2_pane_g3_ParamLimits

0x39e5,	// (0x00025a7a) main_mup2_pane_g3

0x46cb,	// (0x00026760) popup_toolbar_window_cp04

0xb681,	// (0x0002d716) popup_call2_audio_second_window_g3_ParamLimits

0xb681,	// (0x0002d716) popup_call2_audio_second_window_g3

0xbabf,	// (0x0002db54) popup_call2_audio_first_window_g4_ParamLimits

0xbabf,	// (0x0002db54) popup_call2_audio_first_window_g4

0xc13e,	// (0x0002e1d3) popup_call2_audio_in_window_g4_ParamLimits

0xc13e,	// (0x0002e1d3) popup_call2_audio_in_window_g4

0x60ad,	// (0x00028142) aid_area_sk_bg_cut_ParamLimits

0x60ad,	// (0x00028142) aid_area_sk_bg_cut

0xb2ad,	// (0x0002d342) aid_area_sk_bg_cut_2_ParamLimits

0xb2ad,	// (0x0002d342) aid_area_sk_bg_cut_2

0x3237,	// (0x000252cc) aid_placing_details_win

0x3237,	// (0x000252cc) aid_placing_details_win_2

0x39d7,	// (0x00025a6c) camera2_autofocus_pane_g1_ParamLimits

0x20e9,	// (0x0002417e) popup_fixed_preview_cale_window_ParamLimits

0x20e9,	// (0x0002417e) popup_fixed_preview_cale_window

0xaf7d,	// (0x0002d012) navi_slider_pane_g3

0xaf86,	// (0x0002d01b) navi_slider_pane_g4

0xaf8f,	// (0x0002d024) navi_slider_pane_g5

0xaf7d,	// (0x0002d012) navi_slider_pane_g6

0xaf98,	// (0x0002d02d) navi_slider_pane_g7

0xb0e8,	// (0x0002d17d) mup_scale_pane_g3

0xb0f1,	// (0x0002d186) mup_scale_pane_g4

0xb0fa,	// (0x0002d18f) mup_scale_pane_g5

0x5e54,	// (0x00027ee9) mup_scale_pane_g6

0x5e5d,	// (0x00027ef2) mup_scale_pane_g7

0xc73e,	// (0x0002e7d3) cams2_slider_pane_g3

0xc73e,	// (0x0002e7d3) cams2_slider_pane_g4

0xc73e,	// (0x0002e7d3) cams2_slider_pane_g5

0xc73e,	// (0x0002e7d3) cams2_slider_pane_g6

0xc73e,	// (0x0002e7d3) cams2_slider_pane_g7

0x44a0,	// (0x00026535) camera2_autofocus_pane_cp_g1

0xc4f7,	// (0x0002e58c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4f7,	// (0x0002e58c) bg_popup_preview_window_pane_cp02

0xcce9,	// (0x0002ed7e) list_fp_cale_pane_ParamLimits

0xcce9,	// (0x0002ed7e) list_fp_cale_pane

0xccf5,	// (0x0002ed8a) popup_fixed_preview_cale_window_t1_ParamLimits

0xccf5,	// (0x0002ed8a) popup_fixed_preview_cale_window_t1

0x71df,	// (0x00029274) popup_fixed_preview_cale_window_t2_ParamLimits

0x71df,	// (0x00029274) popup_fixed_preview_cale_window_t2

0x71f4,	// (0x00029289) popup_fixed_preview_cale_window_t3_ParamLimits

0x71f4,	// (0x00029289) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x000317f1) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x000317f1) popup_fixed_preview_cale_window_t

0x7209,	// (0x0002929e) list_single_fp_cale_pane_ParamLimits

0x7209,	// (0x0002929e) list_single_fp_cale_pane

0xcd13,	// (0x0002eda8) list_single_fp_cale_pane_g1_ParamLimits

0xcd13,	// (0x0002eda8) list_single_fp_cale_pane_g1

0xcd1f,	// (0x0002edb4) list_single_fp_cale_pane_g2_ParamLimits

0xcd1f,	// (0x0002edb4) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x000317f8) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x000317f8) list_single_fp_cale_pane_g

0xcd38,	// (0x0002edcd) list_single_fp_cale_pane_t1_ParamLimits

0xcd38,	// (0x0002edcd) list_single_fp_cale_pane_t1

0xcd4a,	// (0x0002eddf) list_single_fp_cale_pane_t2_ParamLimits

0xcd4a,	// (0x0002eddf) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x000317ff) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x000317ff) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa9c9,	// (0x0002ca5e) main_dialer_pane

0x721d,	// (0x000292b2) aid_cell_size_keypad

0x3237,	// (0x000252cc) dialer_ne_pane

0x3237,	// (0x000252cc) grid_dialer_command_1_pane

0x3237,	// (0x000252cc) grid_dialer_command_2_pane

0x3237,	// (0x000252cc) grid_dialer_keypad_pane

0x7227,	// (0x000292bc) bg_popup_call_pane_cp06_ParamLimits

0x7227,	// (0x000292bc) bg_popup_call_pane_cp06

0x7227,	// (0x000292bc) dialer_ne_clear_pane_ParamLimits

0x7227,	// (0x000292bc) dialer_ne_clear_pane

0x44a0,	// (0x00026535) dialer_ne_pane_g1

0xb056,	// (0x0002d0eb) dialer_ne_pane_t1_ParamLimits

0xb056,	// (0x0002d0eb) dialer_ne_pane_t1

0x7235,	// (0x000292ca) dialer_ne_pane_t2_ParamLimits

0x7235,	// (0x000292ca) dialer_ne_pane_t2

0x725d,	// (0x000292f2) dialer_ne_pane_t3_ParamLimits

0x725d,	// (0x000292f2) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x00031804) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x00031804) dialer_ne_pane_t

0x725d,	// (0x000292f2) dialer_ne_pane_t3_copy1_ParamLimits

0x725d,	// (0x000292f2) dialer_ne_pane_t3_copy1

0x728a,	// (0x0002931f) cell_dialer_keypad_pane_ParamLimits

0x728a,	// (0x0002931f) cell_dialer_keypad_pane

0x7292,	// (0x00029327) cell_dialer_command_1_pane_ParamLimits

0x7292,	// (0x00029327) cell_dialer_command_1_pane

0x728a,	// (0x0002931f) cell_dialer_command_2_pane_ParamLimits

0x728a,	// (0x0002931f) cell_dialer_command_2_pane

0x42b0,	// (0x00026345) bg_button_pane_cp02_ParamLimits

0x42b0,	// (0x00026345) bg_button_pane_cp02

0x39d7,	// (0x00025a6c) cell_dialer_keypad_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) cell_dialer_keypad_pane_g1

0x42b0,	// (0x00026345) bg_button_pane_cp03_ParamLimits

0x42b0,	// (0x00026345) bg_button_pane_cp03

0x39d7,	// (0x00025a6c) cell_dialer_command_1_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) cell_dialer_command_1_pane_g1

0x3237,	// (0x000252cc) bg_button_pane_cp04

0x44a0,	// (0x00026535) cell_dialer_command_2_pane_g1

0x3237,	// (0x000252cc) bg_button_pane_cp06

0x44a0,	// (0x00026535) dialer_ne_clear_pane_g1

0xae7f,	// (0x0002cf14) navi_pane_g2

0x5c5a,	// (0x00027cef) navi_pane_g3

0x0002,

0xf38b,	// (0x00031420) navi_pane_g

0xaf0c,	// (0x0002cfa1) navi_pane_mv_g2

0xaf33,	// (0x0002cfc8) navi_pane_mv_g5

0x5c77,	// (0x00027d0c) navi_pane_mv_t1

0x3b17,	// (0x00025bac) main_clock2_pane

0x72e0,	// (0x00029375) main_clock2_list_pane_ParamLimits

0x72e0,	// (0x00029375) main_clock2_list_pane

0x7312,	// (0x000293a7) main_clock2_pane_t1_ParamLimits

0x7312,	// (0x000293a7) main_clock2_pane_t1

0x734c,	// (0x000293e1) main_clock2_pane_t2_ParamLimits

0x734c,	// (0x000293e1) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x00031810) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x00031810) main_clock2_pane_t

0x73e0,	// (0x00029475) popup_clock_analogue_window_cp03_ParamLimits

0x73e0,	// (0x00029475) popup_clock_analogue_window_cp03

0x7405,	// (0x0002949a) popup_clock_digital_window_cp02_ParamLimits

0x7405,	// (0x0002949a) popup_clock_digital_window_cp02

0x7476,	// (0x0002950b) main_clock2_list_single_pane_ParamLimits

0x7476,	// (0x0002950b) main_clock2_list_single_pane

0x4247,	// (0x000262dc) list_highlight_pane_cp05

0xcdad,	// (0x0002ee42) main_clock2_list_single_pane_t1

0x46cb,	// (0x00026760) popup_toolbar_window_cp04_ParamLimits

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g2_ParamLimits

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g2

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g3_ParamLimits

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g3

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g4_ParamLimits

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g4

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g5_ParamLimits

0x39e5,	// (0x00025a7a) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x00031754) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x00031754) camera2_autofocus_pane_g

0x6bee,	// (0x00028c83) camera2_autofocus_pane_cp_g2

0x6bf6,	// (0x00028c8b) camera2_autofocus_pane_cp_g3

0x6bfe,	// (0x00028c93) camera2_autofocus_pane_cp_g4

0x6c06,	// (0x00028c9b) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x000317ba) camera2_autofocus_pane_cp_g

0x3237,	// (0x000252cc) popup_dialer_spcha_window

0x3237,	// (0x000252cc) bg_popup_sub_pane_cp07

0x3237,	// (0x000252cc) list_spcha_pane

0x3237,	// (0x000252cc) list_single_spcha_pane_ParamLimits

0x3237,	// (0x000252cc) list_single_spcha_pane

0x3237,	// (0x000252cc) list_highlight_pane_cp06

0xcdbb,	// (0x0002ee50) list_single_spcha_pane_t1

0xbee8,	// (0x0002df7d) popup_call2_audio_out_window_g4_ParamLimits

0xbee8,	// (0x0002df7d) popup_call2_audio_out_window_g4

0xa9c9,	// (0x0002ca5e) main_imed2_pane

0xc525,	// (0x0002e5ba) popup_imed_adjust2_window

0x25b1,	// (0x00024646) popup_imed_trans_window_ParamLimits

0x25b1,	// (0x00024646) popup_imed_trans_window

0xc820,	// (0x0002e8b5) popup_blid_sat_info2_window_t1

0xc82e,	// (0x0002e8c3) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x000316e9) popup_blid_sat_info2_window_t

0x74a8,	// (0x0002953d) aid_size_cell_colour_35

0x74c8,	// (0x0002955d) aid_size_cell_colour_112

0x74e8,	// (0x0002957d) aid_size_cell_effect

0xb078,	// (0x0002d10d) bg_tb_trans_pane_cp02

0x57e3,	// (0x00027878) heading_imed_pane

0x7508,	// (0x0002959d) listscroll_imed_pane

0xcdcb,	// (0x0002ee60) heading_imed_pane_g1

0xcdd3,	// (0x0002ee68) heading_imed_pane_t1

0xcde1,	// (0x0002ee76) grid_imed_colour_35_pane_ParamLimits

0xcde1,	// (0x0002ee76) grid_imed_colour_35_pane

0x7514,	// (0x000295a9) grid_imed_effect_pane

0xcdf4,	// (0x0002ee89) list_imed_aspect_pane

0x7527,	// (0x000295bc) scroll_pane_cp027_ParamLimits

0x7527,	// (0x000295bc) scroll_pane_cp027

0x7533,	// (0x000295c8) cell_imed_effect_pane_ParamLimits

0x7533,	// (0x000295c8) cell_imed_effect_pane

0xcdfc,	// (0x0002ee91) cell_imed_colour_pane_ParamLimits

0xcdfc,	// (0x0002ee91) cell_imed_colour_pane

0xce36,	// (0x0002eecb) cell_imed_colour_pane_g1_ParamLimits

0xce36,	// (0x0002eecb) cell_imed_colour_pane_g1

0xce47,	// (0x0002eedc) hgihlgiht_grid_pane_cp016_ParamLimits

0xce47,	// (0x0002eedc) hgihlgiht_grid_pane_cp016

0x7558,	// (0x000295ed) cell_imed_effect_pane_g1

0x7560,	// (0x000295f5) grid_highlight_pane_cp017

0xce58,	// (0x0002eeed) list_imed_single_pane_ParamLimits

0xce58,	// (0x0002eeed) list_imed_single_pane

0x3237,	// (0x000252cc) list_highlight_pane_cp07

0xce6b,	// (0x0002ef00) list_imed_aspect_pane_comp1_t1

0xb078,	// (0x0002d10d) bg_tb_trans_pane_cp05

0xce8b,	// (0x0002ef20) popup_imed_adjust2_window_g1

0xceb2,	// (0x0002ef47) popup_imed_adjust2_window_t1

0xceca,	// (0x0002ef5f) slider_imed_adjust_pane

0xcede,	// (0x0002ef73) slider_imed_adjust_pane_g1

0xceee,	// (0x0002ef83) slider_imed_adjust_pane_g2

0xcefe,	// (0x0002ef93) slider_imed_adjust_pane_g3

0xcf0f,	// (0x0002efa4) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x0003182d) slider_imed_adjust_pane_g

0x7569,	// (0x000295fe) aid_size_cell_clipart2

0x7575,	// (0x0002960a) grid_imed_clipart_pane

0xcf20,	// (0x0002efb5) scroll_pane_cp031

0x757f,	// (0x00029614) cell_imed_clipart_pane_ParamLimits

0x757f,	// (0x00029614) cell_imed_clipart_pane

0x7597,	// (0x0002962c) cell_imed_clipart_pane_g1

0x3237,	// (0x000252cc) grid_highlight_pane_cp014

0x72f3,	// (0x00029388) main_clock2_pane_g1_ParamLimits

0x72f3,	// (0x00029388) main_clock2_pane_g1

0x7421,	// (0x000294b6) aid_call2_pane_cp10

0x7433,	// (0x000294c8) aid_call_pane_cp10

0xae0e,	// (0x0002cea3) popup_clock_analogue_window_cp10_g1

0xae0e,	// (0x0002cea3) popup_clock_analogue_window_cp10_g2

0x7445,	// (0x000294da) popup_clock_analogue_window_cp10_g3

0x7445,	// (0x000294da) popup_clock_analogue_window_cp10_g4

0xae0e,	// (0x0002cea3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x0003181b) popup_clock_analogue_window_cp10_g

0x7457,	// (0x000294ec) popup_clock_analogue_window_cp10_t1

0x2746,	// (0x000247db) clock_digital_number_pane_cp10_ParamLimits

0x2746,	// (0x000247db) clock_digital_number_pane_cp10

0x275e,	// (0x000247f3) clock_digital_number_pane_cp11_ParamLimits

0x275e,	// (0x000247f3) clock_digital_number_pane_cp11

0x2776,	// (0x0002480b) clock_digital_number_pane_cp12_ParamLimits

0x2776,	// (0x0002480b) clock_digital_number_pane_cp12

0x278e,	// (0x00024823) clock_digital_number_pane_cp13_ParamLimits

0x278e,	// (0x00024823) clock_digital_number_pane_cp13

0x27a6,	// (0x0002483b) clock_digital_separator_pane_cp10_ParamLimits

0x27a6,	// (0x0002483b) clock_digital_separator_pane_cp10

0x7488,	// (0x0002951d) popup_clock_digital_window_cp02_t1_ParamLimits

0x7488,	// (0x0002951d) popup_clock_digital_window_cp02_t1

0x3938,	// (0x000259cd) clock_digital_number_pane_cp10_g1

0x3938,	// (0x000259cd) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x00031836) clock_digital_number_pane_cp10_g

0x3938,	// (0x000259cd) clock_digital_separator_pane_cp10_g1

0x3938,	// (0x000259cd) clock_digital_separator_pane_g2_cp10

0xaf3b,	// (0x0002cfd0) navi_pane_vded_g4

0xaf44,	// (0x0002cfd9) navi_pane_vded_g5

0xaf4d,	// (0x0002cfe2) navi_pane_vded_t1

0xa9c9,	// (0x0002ca5e) main_vded_pane

0x75a0,	// (0x00029635) main_vded_pane_g1

0x75aa,	// (0x0002963f) main_vded_pane_g2

0x75b2,	// (0x00029647) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x0003183b) main_vded_pane_g

0x75ba,	// (0x0002964f) main_vded_pane_t1

0x75c8,	// (0x0002965d) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x00031842) main_vded_pane_t

0x75d6,	// (0x0002966b) vded_slider_pane

0x75de,	// (0x00029673) vded_video_pane

0xcf28,	// (0x0002efbd) vded_video_pane_g1

0x75e6,	// (0x0002967b) vded_video_pane_g2

0x44a0,	// (0x00026535) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x00031847) vded_video_pane_g

0xcf32,	// (0x0002efc7) vded_slider_pane_g1

0xc735,	// (0x0002e7ca) vded_slider_pane_g2

0xcf3b,	// (0x0002efd0) vded_slider_pane_g3

0xcf44,	// (0x0002efd9) vded_slider_pane_g4

0xcf4d,	// (0x0002efe2) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x0003184e) vded_slider_pane_g

0x7133,	// (0x000291c8) mup3_rocker_pane_ParamLimits

0x7133,	// (0x000291c8) mup3_rocker_pane

0x75ef,	// (0x00029684) mup3_control_keys_pane_g1

0x75f7,	// (0x0002968c) mup3_control_keys_pane_g2

0x75ff,	// (0x00029694) mup3_control_keys_pane_g3

0x7607,	// (0x0002969c) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x00031859) mup3_control_keys_pane_g

0x211c,	// (0x000241b1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x211c,	// (0x000241b1) popup_toolbar2_fixed_window_cp01

0x7161,	// (0x000291f6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7161,	// (0x000291f6) popup_toolbar2_fixed_window_cp02

0xb7f3,	// (0x0002d888) popup_call2_audio_second_window_t4_ParamLimits

0xb7f3,	// (0x0002d888) popup_call2_audio_second_window_t4

0xbd55,	// (0x0002ddea) popup_call2_audio_first_window_t6_ParamLimits

0xbd55,	// (0x0002ddea) popup_call2_audio_first_window_t6

0xbfeb,	// (0x0002e080) popup_call2_audio_out_window_t6_ParamLimits

0xbfeb,	// (0x0002e080) popup_call2_audio_out_window_t6

0xa9c9,	// (0x0002ca5e) main_vitu_pane

0x42b0,	// (0x00026345) aid_size_cell_itu_ParamLimits

0x42b0,	// (0x00026345) aid_size_cell_itu

0x42b0,	// (0x00026345) bg_popup_window_pane_cp08_ParamLimits

0x42b0,	// (0x00026345) bg_popup_window_pane_cp08

0x42b0,	// (0x00026345) field_vitu_entry_pane_ParamLimits

0x42b0,	// (0x00026345) field_vitu_entry_pane

0x42b0,	// (0x00026345) grid_vitu_function_pane_ParamLimits

0x42b0,	// (0x00026345) grid_vitu_function_pane

0x42b0,	// (0x00026345) grid_vitu_itu_pane_ParamLimits

0x42b0,	// (0x00026345) grid_vitu_itu_pane

0x7617,	// (0x000296ac) cell_vitu_itu_pane_ParamLimits

0x7617,	// (0x000296ac) cell_vitu_itu_pane

0x42b0,	// (0x00026345) cell_vitu_function_pane_ParamLimits

0x42b0,	// (0x00026345) cell_vitu_function_pane

0x42b0,	// (0x00026345) bg_popup_sub_pane_cp08_ParamLimits

0x42b0,	// (0x00026345) bg_popup_sub_pane_cp08

0x42d1,	// (0x00026366) field_vitu_entry_pane_t1_ParamLimits

0x42d1,	// (0x00026366) field_vitu_entry_pane_t1

0xcf56,	// (0x0002efeb) field_vitu_entry_pane_t2_ParamLimits

0xcf56,	// (0x0002efeb) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x00031867) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x00031867) field_vitu_entry_pane_t

0xc7c9,	// (0x0002e85e) bg_button_pane_cp05_ParamLimits

0xc7c9,	// (0x0002e85e) bg_button_pane_cp05

0xcf73,	// (0x0002f008) cell_vitu_itu_pane_g1

0xb042,	// (0x0002d0d7) cell_vitu_itu_pane_t1_ParamLimits

0xb042,	// (0x0002d0d7) cell_vitu_itu_pane_t1

0xb042,	// (0x0002d0d7) cell_vitu_itu_pane_t2_ParamLimits

0xb042,	// (0x0002d0d7) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x0003186c) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x0003186c) cell_vitu_itu_pane_t

0x3237,	// (0x000252cc) bg_button_pane_cp07

0x44a0,	// (0x00026535) cell_vitu_function_pane_g1

0xa9d3,	// (0x0002ca68) main_calc_pane_g1

0x1fb3,	// (0x00024048) aid_visual_content_pane

0xa9c9,	// (0x0002ca5e) main_vradio_pane

0x39d7,	// (0x00025a6c) main_vradio_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) main_vradio_pane_g1

0x39e5,	// (0x00025a7a) main_vradio_pane_g2_ParamLimits

0x39e5,	// (0x00025a7a) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x00031873) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x00031873) main_vradio_pane_g

0x42d1,	// (0x00026366) main_vradio_pane_t1_ParamLimits

0x42d1,	// (0x00026366) main_vradio_pane_t1

0x42d1,	// (0x00026366) main_vradio_pane_t2_ParamLimits

0x42d1,	// (0x00026366) main_vradio_pane_t2

0xb056,	// (0x0002d0eb) main_vradio_pane_t3_ParamLimits

0xb056,	// (0x0002d0eb) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x00031878) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x00031878) main_vradio_pane_t

0x42b0,	// (0x00026345) vradio_rocker_control_pane_ParamLimits

0x42b0,	// (0x00026345) vradio_rocker_control_pane

0x42b0,	// (0x00026345) vradio_station_info_pane_ParamLimits

0x42b0,	// (0x00026345) vradio_station_info_pane

0x42b0,	// (0x00026345) vradio_frequency_info_pane_ParamLimits

0x42b0,	// (0x00026345) vradio_frequency_info_pane

0x44a0,	// (0x00026535) vradio_station_info_pane_g1

0xb042,	// (0x0002d0d7) vradio_station_info_pane_t1_ParamLimits

0xb042,	// (0x0002d0d7) vradio_station_info_pane_t1

0xb056,	// (0x0002d0eb) vradio_station_info_pane_t2_ParamLimits

0xb056,	// (0x0002d0eb) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x0003187f) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x0003187f) vradio_station_info_pane_t

0x3237,	// (0x000252cc) vradio_tuning_pane

0x762b,	// (0x000296c0) vradio_rocker_control_pane_g1

0xcf8f,	// (0x0002f024) vradio_rocker_control_pane_g2

0x7633,	// (0x000296c8) vradio_rocker_control_pane_g3

0x763b,	// (0x000296d0) vradio_rocker_control_pane_g4

0x7643,	// (0x000296d8) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x00031884) vradio_rocker_control_pane_g

0x44a0,	// (0x00026535) vradio_frequency_info_pane_g1

0x42d1,	// (0x00026366) vradio_frequency_info_pane_t1_ParamLimits

0x42d1,	// (0x00026366) vradio_frequency_info_pane_t1

0x764b,	// (0x000296e0) vradio_tuning_pane_g1

0x7654,	// (0x000296e9) vradio_tuning_pane_t1

0xa992,	// (0x0002ca27) area_side_right_pane_ParamLimits

0xa992,	// (0x0002ca27) area_side_right_pane

0xc4be,	// (0x0002e553) status_small_pane_g1

0xc4c6,	// (0x0002e55b) status_small_pane_g2

0xc4cf,	// (0x0002e564) status_small_pane_g3

0xc4d8,	// (0x0002e56d) status_small_pane_g4

0x0003,

0xf5b6,	// (0x0003164b) status_small_pane_g

0xc4e1,	// (0x0002e576) status_small_pane_t1

0xa9c9,	// (0x0002ca5e) main_video3_pane

0xcf97,	// (0x0002f02c) cams_zoom_vslider_pane

0xcf9f,	// (0x0002f034) image3_wide_pane_ParamLimits

0xcf9f,	// (0x0002f034) image3_wide_pane

0xcfb9,	// (0x0002f04e) image3_wide_small_pane

0xcfc3,	// (0x0002f058) main_video3_pane_g1_ParamLimits

0xcfc3,	// (0x0002f058) main_video3_pane_g1

0xcfdf,	// (0x0002f074) main_video3_pane_g2_ParamLimits

0xcfdf,	// (0x0002f074) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x0003188f) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x0003188f) main_video3_pane_g

0xcffb,	// (0x0002f090) main_video3_pane_t1_ParamLimits

0xcffb,	// (0x0002f090) main_video3_pane_t1

0xd026,	// (0x0002f0bb) main_video3_pane_t2_ParamLimits

0xd026,	// (0x0002f0bb) main_video3_pane_t2

0xd051,	// (0x0002f0e6) main_video3_pane_t3_ParamLimits

0xd051,	// (0x0002f0e6) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x00031894) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x00031894) main_video3_pane_t

0xd07c,	// (0x0002f111) cams_zoom_vslider_pane_g1

0xd085,	// (0x0002f11a) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0003189b) cams_zoom_vslider_pane_g

0xd08d,	// (0x0002f122) small_slider_vertical_pane

0x44a0,	// (0x00026535) small_slider_vertical_pane_g1

0x44a0,	// (0x00026535) small_slider_vertical_pane_g2

0xd095,	// (0x0002f12a) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x000318a0) small_slider_vertical_pane_g

0xa9c9,	// (0x0002ca5e) main_hwr_training_pane

0xd09e,	// (0x0002f133) hwr_training_instruct_pane_ParamLimits

0xd09e,	// (0x0002f133) hwr_training_instruct_pane

0x7663,	// (0x000296f8) hwr_training_navi_pane_ParamLimits

0x7663,	// (0x000296f8) hwr_training_navi_pane

0x767a,	// (0x0002970f) hwr_training_write_pane_ParamLimits

0x767a,	// (0x0002970f) hwr_training_write_pane

0x3237,	// (0x000252cc) bg_frame_shadow_pane

0xd0cd,	// (0x0002f162) hwr_training_write_pane_g1

0xd0d5,	// (0x0002f16a) hwr_training_write_pane_g2

0xd0dd,	// (0x0002f172) hwr_training_write_pane_g3

0xd0e5,	// (0x0002f17a) hwr_training_write_pane_g4

0xd0ed,	// (0x0002f182) hwr_training_write_pane_g5

0xd0f5,	// (0x0002f18a) hwr_training_write_pane_g6

0xd0fd,	// (0x0002f192) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x000318a7) hwr_training_write_pane_g

0xd105,	// (0x0002f19a) hwr_training_navi_pane_g1_ParamLimits

0xd105,	// (0x0002f19a) hwr_training_navi_pane_g1

0xd117,	// (0x0002f1ac) hwr_training_navi_pane_g2_ParamLimits

0xd117,	// (0x0002f1ac) hwr_training_navi_pane_g2

0xd129,	// (0x0002f1be) hwr_training_navi_pane_g3_ParamLimits

0xd129,	// (0x0002f1be) hwr_training_navi_pane_g3

0xd139,	// (0x0002f1ce) hwr_training_navi_pane_g4_ParamLimits

0xd139,	// (0x0002f1ce) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x000318b6) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x000318b6) hwr_training_navi_pane_g

0xd146,	// (0x0002f1db) hwr_training_navi_pane_t1

0x76ad,	// (0x00029742) list_single_hwr_training_instruct_pane_ParamLimits

0x76ad,	// (0x00029742) list_single_hwr_training_instruct_pane

0xd154,	// (0x0002f1e9) list_single_hwr_training_instruct_pane_t1

0xc8fc,	// (0x0002e991) bg_frame_shadow_pane_g1

0xd163,	// (0x0002f1f8) bg_frame_shadow_pane_g2

0xd16b,	// (0x0002f200) bg_frame_shadow_pane_g3

0xd173,	// (0x0002f208) bg_frame_shadow_pane_g4

0xd17b,	// (0x0002f210) bg_frame_shadow_pane_g5

0xd183,	// (0x0002f218) bg_frame_shadow_pane_g6

0xd18b,	// (0x0002f220) bg_frame_shadow_pane_g7

0x3ca3,	// (0x00025d38) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x000318c1) bg_frame_shadow_pane_g

0xa9c9,	// (0x0002ca5e) main_video_tele_dialer_pane

0x27cb,	// (0x00024860) aid_size_cell_video_keypad_ParamLimits

0x27cb,	// (0x00024860) aid_size_cell_video_keypad

0x27e5,	// (0x0002487a) grid_video_dialer_keypad_pane_ParamLimits

0x27e5,	// (0x0002487a) grid_video_dialer_keypad_pane

0x2827,	// (0x000248bc) video_down_pane_cp_ParamLimits

0x2827,	// (0x000248bc) video_down_pane_cp

0x283b,	// (0x000248d0) cell_video_dialer_keypad_pane_ParamLimits

0x283b,	// (0x000248d0) cell_video_dialer_keypad_pane

0xd193,	// (0x0002f228) bg_button_pane_cp08_ParamLimits

0xd193,	// (0x0002f228) bg_button_pane_cp08

0x76e1,	// (0x00029776) cell_video_dialer_keypad_pane_g1_ParamLimits

0x76e1,	// (0x00029776) cell_video_dialer_keypad_pane_g1

0x711d,	// (0x000291b2) mup3_rocker2_pane_ParamLimits

0x711d,	// (0x000291b2) mup3_rocker2_pane

0x44a0,	// (0x00026535) mup3_rocker2_pane_g1

0x24aa,	// (0x0002453f) main_dialer2_pane

0xa9c9,	// (0x0002ca5e) main_mp4_pane

0xd1bd,	// (0x0002f252) main_mp4_pane_g1_ParamLimits

0xd1bd,	// (0x0002f252) main_mp4_pane_g1

0xd1bd,	// (0x0002f252) main_mp4_pane_g2_ParamLimits

0xd1bd,	// (0x0002f252) main_mp4_pane_g2

0x285d,	// (0x000248f2) main_mp4_pane_g3_ParamLimits

0x285d,	// (0x000248f2) main_mp4_pane_g3

0xd1cb,	// (0x0002f260) main_mp4_pane_g4_ParamLimits

0xd1cb,	// (0x0002f260) main_mp4_pane_g4

0xd1f9,	// (0x0002f28e) main_mp4_pane_g5_ParamLimits

0xd1f9,	// (0x0002f28e) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x000318e1) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x000318e1) main_mp4_pane_g

0xd26d,	// (0x0002f302) main_mp4_pane_t1_ParamLimits

0xd26d,	// (0x0002f302) main_mp4_pane_t1

0xd2c5,	// (0x0002f35a) main_mp4_pane_t2_ParamLimits

0xd2c5,	// (0x0002f35a) main_mp4_pane_t2

0xd317,	// (0x0002f3ac) main_mp4_pane_t3_ParamLimits

0xd317,	// (0x0002f3ac) main_mp4_pane_t3

0xd33d,	// (0x0002f3d2) main_mp4_pane_t4_ParamLimits

0xd33d,	// (0x0002f3d2) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x000318f2) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x000318f2) main_mp4_pane_t

0xd37d,	// (0x0002f412) mp4_progress_pane_ParamLimits

0xd37d,	// (0x0002f412) mp4_progress_pane

0xd3c1,	// (0x0002f456) mp4_rocker_pane_ParamLimits

0xd3c1,	// (0x0002f456) mp4_rocker_pane

0xd3e7,	// (0x0002f47c) mp4_progress_pane_t1

0xd3fe,	// (0x0002f493) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x000318fb) mp4_progress_pane_t

0xd415,	// (0x0002f4aa) mup_progress_pane_cp04

0xc73e,	// (0x0002e7d3) mp4_rocker_pane_g1

0x288d,	// (0x00024922) aid_cell_size_keypad2_ParamLimits

0x288d,	// (0x00024922) aid_cell_size_keypad2

0x28a5,	// (0x0002493a) dialer2_ne_pane_ParamLimits

0x28a5,	// (0x0002493a) dialer2_ne_pane

0xa9bb,	// (0x0002ca50) grid_dialer2_keypad_pane_ParamLimits

0xa9bb,	// (0x0002ca50) grid_dialer2_keypad_pane

0xc7c9,	// (0x0002e85e) bg_popup_call_pane_cp07_ParamLimits

0xc7c9,	// (0x0002e85e) bg_popup_call_pane_cp07

0x3a01,	// (0x00025a96) dialer2_ne_pane_t1_ParamLimits

0x3a01,	// (0x00025a96) dialer2_ne_pane_t1

0x28c0,	// (0x00024955) cell_dialer2_keypad_pane_ParamLimits

0x28c0,	// (0x00024955) cell_dialer2_keypad_pane

0xd421,	// (0x0002f4b6) bg_button_pane_pane_cp04_ParamLimits

0xd421,	// (0x0002f4b6) bg_button_pane_pane_cp04

0x39d7,	// (0x00025a6c) cell_dialer2_keypad_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) cell_dialer2_keypad_pane_g1

0x45a7,	// (0x0002663c) aid_placing_vt_set_content_ParamLimits

0x45a7,	// (0x0002663c) aid_placing_vt_set_content

0x45c9,	// (0x0002665e) aid_placing_vt_set_title_ParamLimits

0x45c9,	// (0x0002665e) aid_placing_vt_set_title

0xa9c9,	// (0x0002ca5e) main_image3_pane

0x2916,	// (0x000249ab) area_side_right_pane_cp01_ParamLimits

0x2916,	// (0x000249ab) area_side_right_pane_cp01

0xd1bd,	// (0x0002f252) main_image3_pane_g1_ParamLimits

0xd1bd,	// (0x0002f252) main_image3_pane_g1

0x292d,	// (0x000249c2) main_image3_pane_g2_ParamLimits

0x292d,	// (0x000249c2) main_image3_pane_g2

0x2953,	// (0x000249e8) main_image3_pane_g3_ParamLimits

0x2953,	// (0x000249e8) main_image3_pane_g3

0x2979,	// (0x00024a0e) main_image3_pane_g4_ParamLimits

0x2979,	// (0x00024a0e) main_image3_pane_g4

0x0003,

0xf875,	// (0x0003190a) main_image3_pane_g_ParamLimits

0xf875,	// (0x0003190a) main_image3_pane_g

0x299f,	// (0x00024a34) main_image3_pane_t1_ParamLimits

0x299f,	// (0x00024a34) main_image3_pane_t1

0x29f7,	// (0x00024a8c) main_image3_pane_t2_ParamLimits

0x29f7,	// (0x00024a8c) main_image3_pane_t2

0x2a49,	// (0x00024ade) main_image3_pane_t3_ParamLimits

0x2a49,	// (0x00024ade) main_image3_pane_t3

0x0003,

0xf87e,	// (0x00031913) main_image3_pane_t_ParamLimits

0xf87e,	// (0x00031913) main_image3_pane_t

0x42b0,	// (0x00026345) grid_sctrl_middle_pane_cp01_ParamLimits

0x42b0,	// (0x00026345) grid_sctrl_middle_pane_cp01

0x771c,	// (0x000297b1) cell_sctrl_middle_pane_cp01_ParamLimits

0x771c,	// (0x000297b1) cell_sctrl_middle_pane_cp01

0x7739,	// (0x000297ce) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7739,	// (0x000297ce) cell_sctrl_middle_pane_cp01_g1

0xa9c9,	// (0x0002ca5e) main_call4_pane

0x2ac9,	// (0x00024b5e) aid_size_button_call4_ParamLimits

0x2ac9,	// (0x00024b5e) aid_size_button_call4

0x2af6,	// (0x00024b8b) call4_windows_pane_ParamLimits

0x2af6,	// (0x00024b8b) call4_windows_pane

0x2b0c,	// (0x00024ba1) grid_call4_button_pane_ParamLimits

0x2b0c,	// (0x00024ba1) grid_call4_button_pane

0xd487,	// (0x0002f51c) call4_windows_conf_pane

0xd49a,	// (0x0002f52f) popup_call4_audio_first_window_ParamLimits

0xd49a,	// (0x0002f52f) popup_call4_audio_first_window

0xd4da,	// (0x0002f56f) popup_call4_audio_second_window_ParamLimits

0xd4da,	// (0x0002f56f) popup_call4_audio_second_window

0xd4ec,	// (0x0002f581) popup_call4_audio_wait_window_ParamLimits

0xd4ec,	// (0x0002f581) popup_call4_audio_wait_window

0x2b2b,	// (0x00024bc0) cell_call4_button_pane_ParamLimits

0x2b2b,	// (0x00024bc0) cell_call4_button_pane

0x7757,	// (0x000297ec) bg_button_pane_cp09_ParamLimits

0x7757,	// (0x000297ec) bg_button_pane_cp09

0x2b50,	// (0x00024be5) cell_call4_button_pane_g1_ParamLimits

0x2b50,	// (0x00024be5) cell_call4_button_pane_g1

0x2b76,	// (0x00024c0b) cell_call4_button_pane_t1_ParamLimits

0x2b76,	// (0x00024c0b) cell_call4_button_pane_t1

0xd532,	// (0x0002f5c7) popup_call4_audio_conf_window_ParamLimits

0xd532,	// (0x0002f5c7) popup_call4_audio_conf_window

0x7177,	// (0x0002920c) mup3_progress_pane_t1_ParamLimits

0x7195,	// (0x0002922a) mup3_progress_pane_t2_ParamLimits

0xcca6,	// (0x0002ed3b) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x000317e3) mup3_progress_pane_t_ParamLimits

0xccc3,	// (0x0002ed58) mup_progress_pane_cp03_ParamLimits

0x760f,	// (0x000296a4) mup3_control_keys_pane_g4_copy1

0xd3ab,	// (0x0002f440) mp4_rocker2_pane_ParamLimits

0xd3ab,	// (0x0002f440) mp4_rocker2_pane

0xd546,	// (0x0002f5db) mp4_rocker2_pane_g1

0xd54e,	// (0x0002f5e3) mp4_rocker2_pane_g2

0xd556,	// (0x0002f5eb) mp4_rocker2_pane_g3

0xd55e,	// (0x0002f5f3) mp4_rocker2_pane_g4

0xd566,	// (0x0002f5fb) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x0003191c) mp4_rocker2_pane_g

0xa9c9,	// (0x0002ca5e) main_camera4_pane

0xa9c9,	// (0x0002ca5e) main_video4_pane

0x27f9,	// (0x0002488e) main_video_tele_dialer_pane_t1_ParamLimits

0x27f9,	// (0x0002488e) main_video_tele_dialer_pane_t1

0x2810,	// (0x000248a5) main_video_tele_dialer_pane_t2_ParamLimits

0x2810,	// (0x000248a5) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x000318d2) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x000318d2) main_video_tele_dialer_pane_t

0x2bb4,	// (0x00024c49) cam4_autofocus_pane_ParamLimits

0x2bb4,	// (0x00024c49) cam4_autofocus_pane

0x2bc8,	// (0x00024c5d) cam4_image_uncrop_pane_ParamLimits

0x2bc8,	// (0x00024c5d) cam4_image_uncrop_pane

0x2bdf,	// (0x00024c74) cam4_indicators_pane_ParamLimits

0x2bdf,	// (0x00024c74) cam4_indicators_pane

0x2c03,	// (0x00024c98) main_camera4_pane_g1_ParamLimits

0x2c03,	// (0x00024c98) main_camera4_pane_g1

0x2c0f,	// (0x00024ca4) main_camera4_pane_g2_ParamLimits

0x2c0f,	// (0x00024ca4) main_camera4_pane_g2

0x2c0f,	// (0x00024ca4) main_camera4_pane_g3_ParamLimits

0x2c0f,	// (0x00024ca4) main_camera4_pane_g3

0x2c1b,	// (0x00024cb0) main_camera4_pane_g4_ParamLimits

0x2c1b,	// (0x00024cb0) main_camera4_pane_g4

0x2c27,	// (0x00024cbc) main_camera4_pane_g5_ParamLimits

0x2c27,	// (0x00024cbc) main_camera4_pane_g5

0x0005,

0xf892,	// (0x00031927) main_camera4_pane_g_ParamLimits

0xf892,	// (0x00031927) main_camera4_pane_g

0x2c44,	// (0x00024cd9) main_camera4_pane_t1_ParamLimits

0x2c44,	// (0x00024cd9) main_camera4_pane_t1

0xd588,	// (0x0002f61d) bg_tb_trans_pane_cp06

0xd59e,	// (0x0002f633) cam4_indicators_pane_g1

0xd5ae,	// (0x0002f643) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x00031942) cam4_indicators_pane_g

0xd5ce,	// (0x0002f663) cam4_indicators_pane_t1

0x2c87,	// (0x00024d1c) main_video4_pane_g1_ParamLimits

0x2c87,	// (0x00024d1c) main_video4_pane_g1

0x2c99,	// (0x00024d2e) main_video4_pane_g2_ParamLimits

0x2c99,	// (0x00024d2e) main_video4_pane_g2

0x2c99,	// (0x00024d2e) main_video4_pane_g3_ParamLimits

0x2c99,	// (0x00024d2e) main_video4_pane_g3

0x2ca8,	// (0x00024d3d) main_video4_pane_g4_ParamLimits

0x2ca8,	// (0x00024d3d) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x00031949) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x00031949) main_video4_pane_g

0x2cc6,	// (0x00024d5b) vid4_indicators_pane_ParamLimits

0x2cc6,	// (0x00024d5b) vid4_indicators_pane

0x2cee,	// (0x00024d83) video4_image_uncrop_cif_pane_ParamLimits

0x2cee,	// (0x00024d83) video4_image_uncrop_cif_pane

0x2d06,	// (0x00024d9b) video4_image_uncrop_nhd_pane_ParamLimits

0x2d06,	// (0x00024d9b) video4_image_uncrop_nhd_pane

0x2d1a,	// (0x00024daf) video4_image_uncrop_vga_pane_ParamLimits

0x2d1a,	// (0x00024daf) video4_image_uncrop_vga_pane

0xa9bb,	// (0x0002ca50) bg_tb_trans_pane_cp07

0xd59e,	// (0x0002f633) vid4_indicators_pane_g1

0xd5f0,	// (0x0002f685) vid4_indicators_pane_g2

0xd600,	// (0x0002f695) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x00031954) vid4_indicators_pane_g

0xd62d,	// (0x0002f6c2) vid4_indicators_pane_t1

0x7775,	// (0x0002980a) cam4_autofocus_pane_g1

0x777d,	// (0x00029812) cam4_autofocus_pane_g2

0x7785,	// (0x0002981a) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x0003195f) cam4_autofocus_pane_g

0x778d,	// (0x00029822) cam4_autofocus_pane_g3_copy1

0x76c5,	// (0x0002975a) video_down_pane_cp_t1

0x76d3,	// (0x00029768) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x000318d7) video_down_pane_cp_t

0xa9bb,	// (0x0002ca50) popup_vitu2_window_ParamLimits

0xa9bb,	// (0x0002ca50) popup_vitu2_window

0x2d32,	// (0x00024dc7) aid_size_cell2_itu2_ParamLimits

0x2d32,	// (0x00024dc7) aid_size_cell2_itu2

0x2d58,	// (0x00024ded) aid_size_cell_itu2_ParamLimits

0x2d58,	// (0x00024ded) aid_size_cell_itu2

0x2daa,	// (0x00024e3f) bg_popup_window_pane_cp09_ParamLimits

0x2daa,	// (0x00024e3f) bg_popup_window_pane_cp09

0x2db8,	// (0x00024e4d) field_vitu2_entry_pane_ParamLimits

0x2db8,	// (0x00024e4d) field_vitu2_entry_pane

0x2dd2,	// (0x00024e67) grid_vitu2_function_pane_ParamLimits

0x2dd2,	// (0x00024e67) grid_vitu2_function_pane

0x2e0d,	// (0x00024ea2) grid_vitu2_itu_pane_ParamLimits

0x2e0d,	// (0x00024ea2) grid_vitu2_itu_pane

0x2e77,	// (0x00024f0c) cell_vitu2_itu_pane_ParamLimits

0x2e77,	// (0x00024f0c) cell_vitu2_itu_pane

0x2e9f,	// (0x00024f34) cell_vitu2_function_pane_ParamLimits

0x2e9f,	// (0x00024f34) cell_vitu2_function_pane

0xd647,	// (0x0002f6dc) bg_popup_call_pane_cp08_ParamLimits

0xd647,	// (0x0002f6dc) bg_popup_call_pane_cp08

0xd65e,	// (0x0002f6f3) field_vitu2_entry_pane_g1

0xd66a,	// (0x0002f6ff) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x00031966) field_vitu2_entry_pane_g

0x7795,	// (0x0002982a) field_vitu2_entry_pane_t1_ParamLimits

0x7795,	// (0x0002982a) field_vitu2_entry_pane_t1

0xd676,	// (0x0002f70b) field_vitu2_entry_pane_t2_ParamLimits

0xd676,	// (0x0002f70b) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x0003196d) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x0003196d) field_vitu2_entry_pane_t

0x2ede,	// (0x00024f73) bg_button_pane_cp010_ParamLimits

0x2ede,	// (0x00024f73) bg_button_pane_cp010

0xd69b,	// (0x0002f730) cell_vitu2_itu_pane_g1

0x2efa,	// (0x00024f8f) cell_vitu2_itu_pane_t1_ParamLimits

0x2efa,	// (0x00024f8f) cell_vitu2_itu_pane_t1

0x2f58,	// (0x00024fed) cell_vitu2_itu_pane_t2_ParamLimits

0x2f58,	// (0x00024fed) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x00031977) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x00031977) cell_vitu2_itu_pane_t

0xa9bb,	// (0x0002ca50) bg_button_pane_cp011

0x3044,	// (0x000250d9) cell_vitu2_function_pane_g1

0xa9c9,	// (0x0002ca5e) main_myfav_hc_pane

0x2a95,	// (0x00024b2a) popup_image3_note_pane_ParamLimits

0x2a95,	// (0x00024b2a) popup_image3_note_pane

0x2aaf,	// (0x00024b44) popup_image3_tool_bar_pane_ParamLimits

0x2aaf,	// (0x00024b44) popup_image3_tool_bar_pane

0x2fe6,	// (0x0002507b) cell_vitu2_itu_pane_t3_ParamLimits

0x2fe6,	// (0x0002507b) cell_vitu2_itu_pane_t3

0x3237,	// (0x000252cc) bg_popup_trans_pane

0xd6ad,	// (0x0002f742) grid_image3_tool_bar_pane

0xd6b7,	// (0x0002f74c) bg_popup_trans_pane_g1

0x4aef,	// (0x00026b84) bg_popup_trans_pane_g2

0xd6bf,	// (0x0002f754) bg_popup_trans_pane_g3

0xd6c7,	// (0x0002f75c) bg_popup_trans_pane_g4

0xd6cf,	// (0x0002f764) bg_popup_trans_pane_g5

0xd6d7,	// (0x0002f76c) bg_popup_trans_pane_g6

0xd6df,	// (0x0002f774) bg_popup_trans_pane_g7

0xd6e7,	// (0x0002f77c) bg_popup_trans_pane_g8

0x4acf,	// (0x00026b64) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x0003197e) bg_popup_trans_pane_g

0xd6ef,	// (0x0002f784) cell_image3_tool_bar_pane_ParamLimits

0xd6ef,	// (0x0002f784) cell_image3_tool_bar_pane

0x44a0,	// (0x00026535) cell_image3_tool_bar_pane_g1

0x3237,	// (0x000252cc) bg_popup_trans_pane_cp1

0xd703,	// (0x0002f798) popup_image3_note_pane_t1

0xd711,	// (0x0002f7a6) popup_image3_note_pane_t2

0xd71f,	// (0x0002f7b4) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x00031991) popup_image3_note_pane_t

0xd72d,	// (0x0002f7c2) popup_image3_note_pane_t3_copy1

0x77c2,	// (0x00029857) bg_myfav_hc_instruction_pane_ParamLimits

0x77c2,	// (0x00029857) bg_myfav_hc_instruction_pane

0x77d4,	// (0x00029869) cell_myfav_contact_pane_ParamLimits

0x77d4,	// (0x00029869) cell_myfav_contact_pane

0x77ee,	// (0x00029883) cell_myfav_contact_pane_cp1_ParamLimits

0x77ee,	// (0x00029883) cell_myfav_contact_pane_cp1

0x7804,	// (0x00029899) cell_myfav_contact_pane_cp2_ParamLimits

0x7804,	// (0x00029899) cell_myfav_contact_pane_cp2

0x781a,	// (0x000298af) cell_myfav_contact_pane_cp3_ParamLimits

0x781a,	// (0x000298af) cell_myfav_contact_pane_cp3

0x782f,	// (0x000298c4) cell_myfav_contact_pane_cp4_ParamLimits

0x782f,	// (0x000298c4) cell_myfav_contact_pane_cp4

0x7843,	// (0x000298d8) cell_myfav_contact_pane_cp5_ParamLimits

0x7843,	// (0x000298d8) cell_myfav_contact_pane_cp5

0x7857,	// (0x000298ec) cell_myfav_contact_pane_cp6_ParamLimits

0x7857,	// (0x000298ec) cell_myfav_contact_pane_cp6

0x786b,	// (0x00029900) cell_myfav_contact_pane_cp7_ParamLimits

0x786b,	// (0x00029900) cell_myfav_contact_pane_cp7

0xd73b,	// (0x0002f7d0) listscroll_gen_pane_cp05

0x7883,	// (0x00029918) main_myfav_hc_pane_g1_ParamLimits

0x7883,	// (0x00029918) main_myfav_hc_pane_g1

0x7899,	// (0x0002992e) main_myfav_hc_pane_g2_ParamLimits

0x7899,	// (0x0002992e) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x00031998) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x00031998) main_myfav_hc_pane_g

0x78c3,	// (0x00029958) main_myfav_hc_pane_t1_ParamLimits

0x78c3,	// (0x00029958) main_myfav_hc_pane_t1

0xd744,	// (0x0002f7d9) main_myfav_hc_pane_t2_ParamLimits

0xd744,	// (0x0002f7d9) main_myfav_hc_pane_t2

0xd756,	// (0x0002f7eb) main_myfav_hc_pane_t3_ParamLimits

0xd756,	// (0x0002f7eb) main_myfav_hc_pane_t3

0x78d8,	// (0x0002996d) main_myfav_hc_pane_t4_ParamLimits

0x78d8,	// (0x0002996d) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x0003199f) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x0003199f) main_myfav_hc_pane_t

0x44a0,	// (0x00026535) bg_myfav_hc_instruction_pane_g1

0xd768,	// (0x0002f7fd) cell_myfav_contact_pane_g1_ParamLimits

0xd768,	// (0x0002f7fd) cell_myfav_contact_pane_g1

0xd768,	// (0x0002f7fd) cell_myfav_contact_pane_g2_ParamLimits

0xd768,	// (0x0002f7fd) cell_myfav_contact_pane_g2

0xd774,	// (0x0002f809) cell_myfav_contact_pane_g3_ParamLimits

0xd774,	// (0x0002f809) cell_myfav_contact_pane_g3

0x39e5,	// (0x00025a7a) cell_myfav_contact_pane_g4_ParamLimits

0x39e5,	// (0x00025a7a) cell_myfav_contact_pane_g4

0xd781,	// (0x0002f816) cell_myfav_contact_pane_g5_ParamLimits

0xd781,	// (0x0002f816) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x000319aa) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x000319aa) cell_myfav_contact_pane_g

0x78af,	// (0x00029944) main_myfav_hc_pane_g3_ParamLimits

0x78af,	// (0x00029944) main_myfav_hc_pane_g3

0x20a2,	// (0x00024137) popup_adpt_find_window

0x78fc,	// (0x00029991) afind_page_pane_ParamLimits

0x78fc,	// (0x00029991) afind_page_pane

0x7911,	// (0x000299a6) aid_size_cell_afind_ParamLimits

0x7911,	// (0x000299a6) aid_size_cell_afind

0x792f,	// (0x000299c4) bg_popup_sub_pane_cp09_ParamLimits

0x792f,	// (0x000299c4) bg_popup_sub_pane_cp09

0x793c,	// (0x000299d1) find_pane_cp01_ParamLimits

0x793c,	// (0x000299d1) find_pane_cp01

0xd78d,	// (0x0002f822) grid_afind_control_pane_ParamLimits

0xd78d,	// (0x0002f822) grid_afind_control_pane

0x7949,	// (0x000299de) grid_afind_pane_ParamLimits

0x7949,	// (0x000299de) grid_afind_pane

0x7967,	// (0x000299fc) cell_afind_pane_ParamLimits

0x7967,	// (0x000299fc) cell_afind_pane

0x44a0,	// (0x00026535) afind_page_pane_g1

0x79b6,	// (0x00029a4b) afind_page_pane_g2

0x79bf,	// (0x00029a54) afind_page_pane_g3

0x0002,

0xf920,	// (0x000319b5) afind_page_pane_g

0x79c8,	// (0x00029a5d) afind_page_pane_t1

0xd7a1,	// (0x0002f836) cell_afind_grid_control_pane_ParamLimits

0xd7a1,	// (0x0002f836) cell_afind_grid_control_pane

0xd7b0,	// (0x0002f845) bg_button_pane_cp69_ParamLimits

0xd7b0,	// (0x0002f845) bg_button_pane_cp69

0x79e8,	// (0x00029a7d) cell_afind_pane_g1_ParamLimits

0x79e8,	// (0x00029a7d) cell_afind_pane_g1

0x79f5,	// (0x00029a8a) cell_afind_pane_t1_ParamLimits

0x79f5,	// (0x00029a8a) cell_afind_pane_t1

0x4502,	// (0x00026597) bg_button_pane_cp72

0xd7bc,	// (0x0002f851) cell_afind_grid_control_pane_g1

0x6264,	// (0x000282f9) aid_image_placing_area_ParamLimits

0x6264,	// (0x000282f9) aid_image_placing_area

0x39d7,	// (0x00025a6c) field_vitu_entry_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) field_vitu_entry_pane_g1

0x39d7,	// (0x00025a6c) field_vitu_entry_pane_g2_ParamLimits

0x39d7,	// (0x00025a6c) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x00031862) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x00031862) field_vitu_entry_pane_g

0xcf73,	// (0x0002f008) cell_vitu_itu_pane_g1_ParamLimits

0xcf56,	// (0x0002efeb) cell_vitu_itu_pane_t3_ParamLimits

0xcf56,	// (0x0002efeb) cell_vitu_itu_pane_t3

0xd3e7,	// (0x0002f47c) mp4_progress_pane_t1_ParamLimits

0xd3fe,	// (0x0002f493) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x000318fb) mp4_progress_pane_t_ParamLimits

0xd415,	// (0x0002f4aa) mup_progress_pane_cp04_ParamLimits

0x78ea,	// (0x0002997f) main_myfav_hc_pane_t5_ParamLimits

0x78ea,	// (0x0002997f) main_myfav_hc_pane_t5

0xa98a,	// (0x0002ca1f) aid_zoom_text_primary

0x20a2,	// (0x00024137) popup_adpt_find_window_ParamLimits

0xa9bb,	// (0x0002ca50) main_cam_set_pane

0x2bf1,	// (0x00024c86) cam4_zoom_pane_ParamLimits

0x2bf1,	// (0x00024c86) cam4_zoom_pane

0x7a07,	// (0x00029a9c) main_cam_set_pane_g1_ParamLimits

0x7a07,	// (0x00029a9c) main_cam_set_pane_g1

0x7a15,	// (0x00029aaa) main_cam_set_pane_g2_ParamLimits

0x7a15,	// (0x00029aaa) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x000319bc) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x000319bc) main_cam_set_pane_g

0x7a34,	// (0x00029ac9) main_cam_set_pane_t1_ParamLimits

0x7a34,	// (0x00029ac9) main_cam_set_pane_t1

0x7a46,	// (0x00029adb) main_cset_listscroll_pane_ParamLimits

0x7a46,	// (0x00029adb) main_cset_listscroll_pane

0x7a68,	// (0x00029afd) main_cset_slider_pane_ParamLimits

0x7a68,	// (0x00029afd) main_cset_slider_pane

0xd7cd,	// (0x0002f862) main_cset_list_pane_ParamLimits

0xd7cd,	// (0x0002f862) main_cset_list_pane

0xd7dd,	// (0x0002f872) scroll_pane_cp028

0x7a8c,	// (0x00029b21) aid_area_touch_slider

0x7aa8,	// (0x00029b3d) cset_slider_pane

0x7acb,	// (0x00029b60) main_cset_slider_pane_g1

0x7ae0,	// (0x00029b75) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x000319c1) main_cset_slider_pane_g

0xd816,	// (0x0002f8ab) main_cset_slider_pane_t1

0x7b9c,	// (0x00029c31) main_cset_slider_pane_t2

0x7bb6,	// (0x00029c4b) main_cset_slider_pane_t3

0x7bd0,	// (0x00029c65) main_cset_slider_pane_t4

0x7bea,	// (0x00029c7f) main_cset_slider_pane_t5

0x7c04,	// (0x00029c99) main_cset_slider_pane_t6

0x7c19,	// (0x00029cae) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x000319e6) main_cset_slider_pane_t

0x7d1d,	// (0x00029db2) cset_list_set_pane_ParamLimits

0x7d1d,	// (0x00029db2) cset_list_set_pane

0xd8b0,	// (0x0002f945) aid_position_infowindow_above

0xd8b8,	// (0x0002f94d) aid_position_infowindow_below

0x7d2e,	// (0x00029dc3) cset_list_set_pane_g1_ParamLimits

0x7d2e,	// (0x00029dc3) cset_list_set_pane_g1

0x7d3a,	// (0x00029dcf) cset_list_set_pane_g3_ParamLimits

0x7d3a,	// (0x00029dcf) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x00031a05) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x00031a05) cset_list_set_pane_g

0x7d49,	// (0x00029dde) cset_list_set_pane_t1_ParamLimits

0x7d49,	// (0x00029dde) cset_list_set_pane_t1

0x42b0,	// (0x00026345) list_highlight_pane_cp021_ParamLimits

0x42b0,	// (0x00026345) list_highlight_pane_cp021

0xb0e8,	// (0x0002d17d) cset_slider_pane_g1

0xb0fa,	// (0x0002d18f) cset_slider_pane_g2

0xb0f1,	// (0x0002d186) cset_slider_pane_g3

0x0002,

0xf975,	// (0x00031a0a) cset_slider_pane_g

0xd8c0,	// (0x0002f955) aid_area_touch_cam4_zoom

0xd8c8,	// (0x0002f95d) cam4_zoom_cont_pane

0xd8d0,	// (0x0002f965) cam4_zoom_pane_g1

0xd8d8,	// (0x0002f96d) cam4_zoom_pane_g2

0x3057,	// (0x000250ec) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x00031a11) cam4_zoom_pane_g

0xd8e0,	// (0x0002f975) cam4_zoom_cont_pane_g1

0xd8e9,	// (0x0002f97e) cam4_zoom_cont_pane_g2

0xd8f2,	// (0x0002f987) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x00031a18) cam4_zoom_cont_pane_g

0x2ae7,	// (0x00024b7c) call4_image_pane_ParamLimits

0x2ae7,	// (0x00024b7c) call4_image_pane

0xd487,	// (0x0002f51c) call4_windows_conf_pane_ParamLimits

0xd4ba,	// (0x0002f54f) popup_call4_audio_in_window_ParamLimits

0xd4ba,	// (0x0002f54f) popup_call4_audio_in_window

0x3237,	// (0x000252cc) bg_popup_call2_act_pane_cp02

0xd52a,	// (0x0002f5bf) call4_list_conf_pane

0x44a0,	// (0x00026535) call4_image_pane_g1

0x44a0,	// (0x00026535) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x00031484) call4_image_pane_g

0xd8fb,	// (0x0002f990) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8fb,	// (0x0002f990) list_single_graphic_popup_conf4_pane

0x3237,	// (0x000252cc) list_highlight_pane_cp022

0xd908,	// (0x0002f99d) list_single_graphic_popup_conf4_pane_g1

0xacdc,	// (0x0002cd71) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x00031a1f) list_single_graphic_popup_conf4_pane_g

0xd910,	// (0x0002f9a5) list_single_graphic_popup_conf4_pane_t1

0x46e5,	// (0x0002677a) popup_vtel_slider_window_ParamLimits

0x46e5,	// (0x0002677a) popup_vtel_slider_window

0xb056,	// (0x0002d0eb) dialer2_ne_pane_t2_ParamLimits

0xb056,	// (0x0002d0eb) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x00031900) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x00031900) dialer2_ne_pane_t

0xc7c9,	// (0x0002e85e) bg_popup_sub_pane_cp010_ParamLimits

0xc7c9,	// (0x0002e85e) bg_popup_sub_pane_cp010

0x7d5e,	// (0x00029df3) popup_vtel_slider_window_g1_ParamLimits

0x7d5e,	// (0x00029df3) popup_vtel_slider_window_g1

0x7d71,	// (0x00029e06) popup_vtel_slider_window_g2_ParamLimits

0x7d71,	// (0x00029e06) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x00031a24) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x00031a24) popup_vtel_slider_window_g

0x7dc5,	// (0x00029e5a) vtel_slider_pane_ParamLimits

0x7dc5,	// (0x00029e5a) vtel_slider_pane

0x7de7,	// (0x00029e7c) vtel_slider_pane_g1_ParamLimits

0x7de7,	// (0x00029e7c) vtel_slider_pane_g1

0x7dfb,	// (0x00029e90) vtel_slider_pane_g2_ParamLimits

0x7dfb,	// (0x00029e90) vtel_slider_pane_g2

0x7e13,	// (0x00029ea8) vtel_slider_pane_g3_ParamLimits

0x7e13,	// (0x00029ea8) vtel_slider_pane_g3

0x7de7,	// (0x00029e7c) vtel_slider_pane_g4_ParamLimits

0x7de7,	// (0x00029e7c) vtel_slider_pane_g4

0x7e29,	// (0x00029ebe) vtel_slider_pane_g5_ParamLimits

0x7e29,	// (0x00029ebe) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x00031a2d) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x00031a2d) vtel_slider_pane_g

0xa9bb,	// (0x0002ca50) main_gallery2_pane

0x2d84,	// (0x00024e19) aid_size_row_itut2_dropdow_list_ParamLimits

0x2d84,	// (0x00024e19) aid_size_row_itut2_dropdow_list

0x2dee,	// (0x00024e83) grid_vitu2_function_top_pane_ParamLimits

0x2dee,	// (0x00024e83) grid_vitu2_function_top_pane

0x2e36,	// (0x00024ecb) popup_vitu2_dropdown_list_window_ParamLimits

0x2e36,	// (0x00024ecb) popup_vitu2_dropdown_list_window

0x2e55,	// (0x00024eea) popup_vitu2_match_list_window

0x305f,	// (0x000250f4) cell_vitu2_function_top_pane_ParamLimits

0x305f,	// (0x000250f4) cell_vitu2_function_top_pane

0x3077,	// (0x0002510c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x3077,	// (0x0002510c) cell_vitu2_function_top_pane_cp01

0x3093,	// (0x00025128) cell_vitu2_function_top_wide_pane_ParamLimits

0x3093,	// (0x00025128) cell_vitu2_function_top_wide_pane

0xa9bb,	// (0x0002ca50) bg_button_pane_cp012

0x30b0,	// (0x00025145) cell_vitu2_function_top_pane_g1

0xd926,	// (0x0002f9bb) bg_button_pane_cp013_ParamLimits

0xd926,	// (0x0002f9bb) bg_button_pane_cp013

0x7e3f,	// (0x00029ed4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7e3f,	// (0x00029ed4) cell_vitu2_function_top_wide_pane_g1

0xa9bb,	// (0x0002ca50) bg_popup_sub_pane_cp20

0x30c4,	// (0x00025159) list_vitu2_match_list_pane

0xd6b7,	// (0x0002f74c) bg_popup_sub_pane_cp20_g1

0xd6bf,	// (0x0002f754) bg_popup_sub_pane_cp20_g2

0x4aef,	// (0x00026b84) bg_popup_sub_pane_cp20_g3

0xd6c7,	// (0x0002f75c) bg_popup_sub_pane_cp20_g4

0x4acf,	// (0x00026b64) bg_popup_sub_pane_cp20_g5

0xd942,	// (0x0002f9d7) bg_popup_sub_pane_cp20_g6

0xd6d7,	// (0x0002f76c) bg_popup_sub_pane_cp20_g7

0xd6df,	// (0x0002f774) bg_popup_sub_pane_cp20_g8

0xd6e7,	// (0x0002f77c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x00031a38) bg_popup_sub_pane_cp20_g

0xd94a,	// (0x0002f9df) list_vitu2_match_list_item_pane_ParamLimits

0xd94a,	// (0x0002f9df) list_vitu2_match_list_item_pane

0xd95c,	// (0x0002f9f1) list_vitu2_match_list_item_pane_t1

0xa9c9,	// (0x0002ca5e) bg_popup_sub_pane_cp21

0xd977,	// (0x0002fa0c) grid_vitu2_dropdown_list_pane

0x30e2,	// (0x00025177) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x30e2,	// (0x00025177) cell_vitu2_dropdown_list_char_pane

0x3103,	// (0x00025198) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x3103,	// (0x00025198) cell_vitu2_dropdown_list_ctrl_pane

0xd97f,	// (0x0002fa14) cell_vitu2_dropdown_list_char_pane_g1

0xd988,	// (0x0002fa1d) cell_vitu2_dropdown_list_char_pane_g2

0xd991,	// (0x0002fa26) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x00031a55) cell_vitu2_dropdown_list_char_pane_g

0x312d,	// (0x000251c2) cell_vitu2_dropdown_list_char_pane_t1

0x7e57,	// (0x00029eec) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7e57,	// (0x00029eec) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7e64,	// (0x00029ef9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7e64,	// (0x00029ef9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7e71,	// (0x00029f06) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7e71,	// (0x00029f06) cell_vitu2_dropdown_list_ctrl_pane_g3

0x313b,	// (0x000251d0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x313b,	// (0x000251d0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd588,	// (0x0002f61d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd588,	// (0x0002f61d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x00031a5c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x00031a5c) cell_vitu2_dropdown_list_ctrl_pane_g

0x7e7e,	// (0x00029f13) aid_size_cell_gallery2_ParamLimits

0x7e7e,	// (0x00029f13) aid_size_cell_gallery2

0x7e9c,	// (0x00029f31) grid_gallery2_pane_ParamLimits

0x7e9c,	// (0x00029f31) grid_gallery2_pane

0x7527,	// (0x000295bc) scroll_pane_cp029_ParamLimits

0x7527,	// (0x000295bc) scroll_pane_cp029

0x7eb0,	// (0x00029f45) cell_gallery2_pane_ParamLimits

0x7eb0,	// (0x00029f45) cell_gallery2_pane

0xd99a,	// (0x0002fa2f) cell_gallery2_pane_g2

0x7f09,	// (0x00029f9e) cell_gallery2_pane_g3

0xd9a2,	// (0x0002fa37) cell_gallery2_pane_g4

0xd9aa,	// (0x0002fa3f) cell_gallery2_pane_g5

0x4247,	// (0x000262dc) grid_highlight_pane_cp10

0x2e55,	// (0x00024eea) popup_vitu2_match_list_window_ParamLimits

0x2e66,	// (0x00024efb) popup_vitu2_query_window_ParamLimits

0x2e66,	// (0x00024efb) popup_vitu2_query_window

0xa9c9,	// (0x0002ca5e) bg_vitu2_candi_button_pane

0xd97f,	// (0x0002fa14) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd988,	// (0x0002fa1d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd991,	// (0x0002fa26) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7f11,	// (0x00029fa6) bg_button_pane_cp015

0x7f21,	// (0x00029fb6) bg_button_pane_cp016

0x7f33,	// (0x00029fc8) bg_button_pane_cp017

0xb078,	// (0x0002d10d) bg_popup_sub_pane_cp22

0xd9b2,	// (0x0002fa47) popup_vitu2_query_window_g1

0x7f74,	// (0x0002a009) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x00031a67) popup_vitu2_query_window_g

0x7f8f,	// (0x0002a024) popup_vitu2_query_window_t1_ParamLimits

0x7f8f,	// (0x0002a024) popup_vitu2_query_window_t1

0x7fc2,	// (0x0002a057) popup_vitu2_query_window_t2_ParamLimits

0x7fc2,	// (0x0002a057) popup_vitu2_query_window_t2

0x7fd4,	// (0x0002a069) popup_vitu2_query_window_t3_ParamLimits

0x7fd4,	// (0x0002a069) popup_vitu2_query_window_t3

0x7ffc,	// (0x0002a091) popup_vitu2_query_window_t4_ParamLimits

0x7ffc,	// (0x0002a091) popup_vitu2_query_window_t4

0x8019,	// (0x0002a0ae) popup_vitu2_query_window_t5_ParamLimits

0x8019,	// (0x0002a0ae) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x00031a6e) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x00031a6e) popup_vitu2_query_window_t

0xd7c5,	// (0x0002f85a) main_cset_text_pane

0x7a8c,	// (0x00029b21) aid_area_touch_slider_ParamLimits

0x7aa8,	// (0x00029b3d) cset_slider_pane_ParamLimits

0x7acb,	// (0x00029b60) main_cset_slider_pane_g1_ParamLimits

0x7ae0,	// (0x00029b75) main_cset_slider_pane_g2_ParamLimits

0xd7e6,	// (0x0002f87b) main_cset_slider_pane_g3_ParamLimits

0xd7e6,	// (0x0002f87b) main_cset_slider_pane_g3

0x7af5,	// (0x00029b8a) main_cset_slider_pane_g4_ParamLimits

0x7af5,	// (0x00029b8a) main_cset_slider_pane_g4

0x7b04,	// (0x00029b99) main_cset_slider_pane_g5_ParamLimits

0x7b04,	// (0x00029b99) main_cset_slider_pane_g5

0x7b10,	// (0x00029ba5) main_cset_slider_pane_g6_ParamLimits

0x7b10,	// (0x00029ba5) main_cset_slider_pane_g6

0xf92c,	// (0x000319c1) main_cset_slider_pane_g_ParamLimits

0xd816,	// (0x0002f8ab) main_cset_slider_pane_t1_ParamLimits

0x7b9c,	// (0x00029c31) main_cset_slider_pane_t2_ParamLimits

0x7bb6,	// (0x00029c4b) main_cset_slider_pane_t3_ParamLimits

0x7bd0,	// (0x00029c65) main_cset_slider_pane_t4_ParamLimits

0x7bea,	// (0x00029c7f) main_cset_slider_pane_t5_ParamLimits

0x7c04,	// (0x00029c99) main_cset_slider_pane_t6_ParamLimits

0x7c19,	// (0x00029cae) main_cset_slider_pane_t7_ParamLimits

0x7c43,	// (0x00029cd8) main_cset_slider_pane_t8_ParamLimits

0x7c43,	// (0x00029cd8) main_cset_slider_pane_t8

0x7c6b,	// (0x00029d00) main_cset_slider_pane_t9_ParamLimits

0x7c6b,	// (0x00029d00) main_cset_slider_pane_t9

0x7c93,	// (0x00029d28) main_cset_slider_pane_t10_ParamLimits

0x7c93,	// (0x00029d28) main_cset_slider_pane_t10

0x7cbb,	// (0x00029d50) main_cset_slider_pane_t11_ParamLimits

0x7cbb,	// (0x00029d50) main_cset_slider_pane_t11

0x7ce3,	// (0x00029d78) main_cset_slider_pane_t12_ParamLimits

0x7ce3,	// (0x00029d78) main_cset_slider_pane_t12

0x7d00,	// (0x00029d95) main_cset_slider_pane_t13_ParamLimits

0x7d00,	// (0x00029d95) main_cset_slider_pane_t13

0xf951,	// (0x000319e6) main_cset_slider_pane_t_ParamLimits

0x3237,	// (0x000252cc) bg_popup_sub_pane_cp011

0xd9be,	// (0x0002fa53) main_cset_text_pane_g1

0xd9c6,	// (0x0002fa5b) main_cset_text_pane_t1

0xd9d4,	// (0x0002fa69) main_cset_text_pane_t2

0xd9e2,	// (0x0002fa77) main_cset_text_pane_t3

0xd9f0,	// (0x0002fa85) main_cset_text_pane_t4

0xd9fe,	// (0x0002fa93) main_cset_text_pane_t5

0xda0c,	// (0x0002faa1) main_cset_text_pane_t6

0xda1a,	// (0x0002faaf) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x00031a7d) main_cset_text_pane_t

0xa9c9,	// (0x0002ca5e) main_cam4_burst_pane

0xa9c9,	// (0x0002ca5e) main_cam5_pane

0x79d6,	// (0x00029a6b) bg_button_pane_cp019

0x79df,	// (0x00029a74) bg_button_pane_cp020

0xd7f2,	// (0x0002f887) main_cset_slider_pane_g7_ParamLimits

0xd7f2,	// (0x0002f887) main_cset_slider_pane_g7

0xd7fe,	// (0x0002f893) main_cset_slider_pane_g8_ParamLimits

0xd7fe,	// (0x0002f893) main_cset_slider_pane_g8

0x7b24,	// (0x00029bb9) main_cset_slider_pane_g9_ParamLimits

0x7b24,	// (0x00029bb9) main_cset_slider_pane_g9

0x7b30,	// (0x00029bc5) main_cset_slider_pane_g10_ParamLimits

0x7b30,	// (0x00029bc5) main_cset_slider_pane_g10

0x7b3c,	// (0x00029bd1) main_cset_slider_pane_g11_ParamLimits

0x7b3c,	// (0x00029bd1) main_cset_slider_pane_g11

0x7b48,	// (0x00029bdd) main_cset_slider_pane_g12_ParamLimits

0x7b48,	// (0x00029bdd) main_cset_slider_pane_g12

0x7b54,	// (0x00029be9) main_cset_slider_pane_g13_ParamLimits

0x7b54,	// (0x00029be9) main_cset_slider_pane_g13

0x7b60,	// (0x00029bf5) main_cset_slider_pane_g14_ParamLimits

0x7b60,	// (0x00029bf5) main_cset_slider_pane_g14

0x7b6c,	// (0x00029c01) main_cset_slider_pane_g15_ParamLimits

0x7b6c,	// (0x00029c01) main_cset_slider_pane_g15

0xd83e,	// (0x0002f8d3) main_cset_slider_pane_t14_ParamLimits

0xd83e,	// (0x0002f8d3) main_cset_slider_pane_t14

0xd877,	// (0x0002f90c) main_cset_slider_pane_t15_ParamLimits

0xd877,	// (0x0002f90c) main_cset_slider_pane_t15

0x808c,	// (0x0002a121) aid_cam4_burst_size_cell_ParamLimits

0x808c,	// (0x0002a121) aid_cam4_burst_size_cell

0x80ac,	// (0x0002a141) grid_cam4_burst_pane_ParamLimits

0x80ac,	// (0x0002a141) grid_cam4_burst_pane

0x80d2,	// (0x0002a167) linegrid_cam4_burst_pane_ParamLimits

0x80d2,	// (0x0002a167) linegrid_cam4_burst_pane

0x80f4,	// (0x0002a189) scroll_pane_cp30_ParamLimits

0x80f4,	// (0x0002a189) scroll_pane_cp30

0x8100,	// (0x0002a195) cell_cam4_burst_pane_ParamLimits

0x8100,	// (0x0002a195) cell_cam4_burst_pane

0xda28,	// (0x0002fabd) linegrid_cam4_burst_pane_g1_ParamLimits

0xda28,	// (0x0002fabd) linegrid_cam4_burst_pane_g1

0x8147,	// (0x0002a1dc) linegrid_cam4_burst_pane_g2_ParamLimits

0x8147,	// (0x0002a1dc) linegrid_cam4_burst_pane_g2

0xda35,	// (0x0002faca) linegrid_cam4_burst_pane_g3_ParamLimits

0xda35,	// (0x0002faca) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x00031a8c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x00031a8c) linegrid_cam4_burst_pane_g

0x8158,	// (0x0002a1ed) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8158,	// (0x0002a1ed) linegrid_cam4_burst_pane_g3_copy1

0xda42,	// (0x0002fad7) linegrid_cam4_burst_pane_g4_ParamLimits

0xda42,	// (0x0002fad7) linegrid_cam4_burst_pane_g4

0x8172,	// (0x0002a207) linegrid_cam4_burst_pane_g5_ParamLimits

0x8172,	// (0x0002a207) linegrid_cam4_burst_pane_g5

0x8183,	// (0x0002a218) linegrid_cam4_burst_pane_g6_ParamLimits

0x8183,	// (0x0002a218) linegrid_cam4_burst_pane_g6

0xda4f,	// (0x0002fae4) linegrid_cam4_burst_pane_g7_ParamLimits

0xda4f,	// (0x0002fae4) linegrid_cam4_burst_pane_g7

0x8194,	// (0x0002a229) cell_cam4_burst_pane_g1

0xda68,	// (0x0002fafd) main_cam5_pane_t1_ParamLimits

0xda68,	// (0x0002fafd) main_cam5_pane_t1

0xda7a,	// (0x0002fb0f) main_cam5_pane_t2_ParamLimits

0xda7a,	// (0x0002fb0f) main_cam5_pane_t2

0xda8c,	// (0x0002fb21) main_cam5_pane_t3_ParamLimits

0xda8c,	// (0x0002fb21) main_cam5_pane_t3

0xda9e,	// (0x0002fb33) main_cam5_pane_t4_ParamLimits

0xda9e,	// (0x0002fb33) main_cam5_pane_t4

0xdab4,	// (0x0002fb49) main_cam5_pane_t5_ParamLimits

0xdab4,	// (0x0002fb49) main_cam5_pane_t5

0xdac6,	// (0x0002fb5b) main_cam5_pane_t6_ParamLimits

0xdac6,	// (0x0002fb5b) main_cam5_pane_t6

0xdad8,	// (0x0002fb6d) main_cam5_pane_t7_ParamLimits

0xdad8,	// (0x0002fb6d) main_cam5_pane_t7

0xdaea,	// (0x0002fb7f) main_cam5_pane_t8_ParamLimits

0xdaea,	// (0x0002fb7f) main_cam5_pane_t8

0xdb06,	// (0x0002fb9b) main_cam5_pane_t9_ParamLimits

0xdb06,	// (0x0002fb9b) main_cam5_pane_t9

0xdb18,	// (0x0002fbad) main_cam5_pane_t10_ParamLimits

0xdb18,	// (0x0002fbad) main_cam5_pane_t10

0xdb2a,	// (0x0002fbbf) main_cam5_pane_t11_ParamLimits

0xdb2a,	// (0x0002fbbf) main_cam5_pane_t11

0xdb3c,	// (0x0002fbd1) main_cam5_pane_t12_ParamLimits

0xdb3c,	// (0x0002fbd1) main_cam5_pane_t12

0xdb51,	// (0x0002fbe6) main_cam5_pane_t13_ParamLimits

0xdb51,	// (0x0002fbe6) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x00031a98) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x00031a98) main_cam5_pane_t

0x2100,	// (0x00024195) popup_scut_keymap_window_ParamLimits

0x2100,	// (0x00024195) popup_scut_keymap_window

0x81a9,	// (0x0002a23e) aid_size_cell_brow_shortcut

0x4247,	// (0x000262dc) bg_popup_window_pane_cp010

0x81b5,	// (0x0002a24a) grid_scut_pane

0x81bf,	// (0x0002a254) cell_scut_pane_ParamLimits

0x81bf,	// (0x0002a254) cell_scut_pane

0x81d4,	// (0x0002a269) cell_scut_pane_g1

0xdb6e,	// (0x0002fc03) cell_scut_pane_t1

0xdb7d,	// (0x0002fc12) cell_scut_pane_t2

0x81dd,	// (0x0002a272) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x00031ab3) cell_scut_pane_t

0x6d8a,	// (0x00028e1f) main_mup3_pane_g8_ParamLimits

0x6d8a,	// (0x00028e1f) main_mup3_pane_g8

0x2d98,	// (0x00024e2d) area_vitu2_query_pane_ParamLimits

0x2d98,	// (0x00024e2d) area_vitu2_query_pane

0x7f45,	// (0x00029fda) input_focus_pane_cp08

0xdb8c,	// (0x0002fc21) area_vitu2_query_pane_g1

0x81eb,	// (0x0002a280) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x00031aba) area_vitu2_query_pane_g

0x81fa,	// (0x0002a28f) area_vitu2_query_pane_t1_ParamLimits

0x81fa,	// (0x0002a28f) area_vitu2_query_pane_t1

0x820c,	// (0x0002a2a1) area_vitu2_query_pane_t2_ParamLimits

0x820c,	// (0x0002a2a1) area_vitu2_query_pane_t2

0x821e,	// (0x0002a2b3) area_vitu2_query_pane_t3_ParamLimits

0x821e,	// (0x0002a2b3) area_vitu2_query_pane_t3

0xdb98,	// (0x0002fc2d) area_vitu2_query_pane_t4_ParamLimits

0xdb98,	// (0x0002fc2d) area_vitu2_query_pane_t4

0xdbc0,	// (0x0002fc55) area_vitu2_query_pane_t5_ParamLimits

0xdbc0,	// (0x0002fc55) area_vitu2_query_pane_t5

0xdbe8,	// (0x0002fc7d) area_vitu2_query_pane_t6_ParamLimits

0xdbe8,	// (0x0002fc7d) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x00031abf) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x00031abf) area_vitu2_query_pane_t

0x8246,	// (0x0002a2db) bg_button_pane_cp018

0x8253,	// (0x0002a2e8) bg_button_pane_cp021

0x825f,	// (0x0002a2f4) bg_button_pane_cp022

0x826e,	// (0x0002a303) input_focus_pane_cp09

0x5c36,	// (0x00027ccb) aid_size_touch_mv_arrow_left

0xae1a,	// (0x0002ceaf) aid_size_touch_mv_arrow_right

0x7b84,	// (0x00029c19) main_cset_slider_pane_g16_ParamLimits

0x7b84,	// (0x00029c19) main_cset_slider_pane_g16

0x7b90,	// (0x00029c25) main_cset_slider_pane_g17_ParamLimits

0x7b90,	// (0x00029c25) main_cset_slider_pane_g17

0x8194,	// (0x0002a229) cell_cam4_burst_pane_g1_ParamLimits

0x3237,	// (0x000252cc) compa_mode_pane

0x7d81,	// (0x00029e16) popup_vtel_slider_window_g3_ParamLimits

0x7d81,	// (0x00029e16) popup_vtel_slider_window_g3

0x7d98,	// (0x00029e2d) popup_vtel_slider_window_g4_ParamLimits

0x7d98,	// (0x00029e2d) popup_vtel_slider_window_g4

0x7daf,	// (0x00029e44) popup_vtel_slider_window_t1_ParamLimits

0x7daf,	// (0x00029e44) popup_vtel_slider_window_t1

0xa9c9,	// (0x0002ca5e) main_cl_pane

0xc525,	// (0x0002e5ba) popup_imed_adjust2_window_ParamLimits

0xb078,	// (0x0002d10d) bg_tb_trans_pane_cp05_ParamLimits

0xce8b,	// (0x0002ef20) popup_imed_adjust2_window_g1_ParamLimits

0xce9a,	// (0x0002ef2f) popup_imed_adjust2_window_g2_ParamLimits

0xce9a,	// (0x0002ef2f) popup_imed_adjust2_window_g2

0xcea6,	// (0x0002ef3b) popup_imed_adjust2_window_g3_ParamLimits

0xcea6,	// (0x0002ef3b) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x00031826) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x00031826) popup_imed_adjust2_window_g

0xceb2,	// (0x0002ef47) popup_imed_adjust2_window_t1_ParamLimits

0xceca,	// (0x0002ef5f) slider_imed_adjust_pane_ParamLimits

0xcede,	// (0x0002ef73) slider_imed_adjust_pane_g1_ParamLimits

0xceee,	// (0x0002ef83) slider_imed_adjust_pane_g2_ParamLimits

0xcefe,	// (0x0002ef93) slider_imed_adjust_pane_g3_ParamLimits

0xcf0f,	// (0x0002efa4) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x0003182d) slider_imed_adjust_pane_g_ParamLimits

0x2ba0,	// (0x00024c35) aid_touch_area_cam4_ParamLimits

0x2ba0,	// (0x00024c35) aid_touch_area_cam4

0xd56e,	// (0x0002f603) battery_pane_cp01

0x2c38,	// (0x00024ccd) main_camera4_pane_g6_ParamLimits

0x2c38,	// (0x00024ccd) main_camera4_pane_g6

0x2c59,	// (0x00024cee) main_camera4_pane_t2_ParamLimits

0x2c59,	// (0x00024cee) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x00031934) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x00031934) main_camera4_pane_t

0x2c75,	// (0x00024d0a) aid_touch_area_vid4_ParamLimits

0x2c75,	// (0x00024d0a) aid_touch_area_vid4

0x2cb7,	// (0x00024d4c) main_video4_pane_g5_ParamLimits

0x2cb7,	// (0x00024d4c) main_video4_pane_g5

0x2cd8,	// (0x00024d6d) vid4_progress_pane_ParamLimits

0x2cd8,	// (0x00024d6d) vid4_progress_pane

0xd80a,	// (0x0002f89f) main_cset_slider_pane_g18_ParamLimits

0xd80a,	// (0x0002f89f) main_cset_slider_pane_g18

0xda5c,	// (0x0002faf1) cell_cam4_burst_pane_g2_ParamLimits

0xda5c,	// (0x0002faf1) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x00031a93) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x00031a93) cell_cam4_burst_pane_g

0x3b17,	// (0x00025bac) bg_cl_pane_ParamLimits

0x3b17,	// (0x00025bac) bg_cl_pane

0x827d,	// (0x0002a312) cl_header_pane_ParamLimits

0x827d,	// (0x0002a312) cl_header_pane

0x8291,	// (0x0002a326) cl_listscroll_pane_ParamLimits

0x8291,	// (0x0002a326) cl_listscroll_pane

0xdc34,	// (0x0002fcc9) bg_cl_pane_g1

0xdc3c,	// (0x0002fcd1) bg_cl_pane_g2

0xdc44,	// (0x0002fcd9) bg_cl_pane_g3

0xdc4c,	// (0x0002fce1) bg_cl_pane_g4

0xdc54,	// (0x0002fce9) bg_cl_pane_g5

0xdc5c,	// (0x0002fcf1) bg_cl_pane_g6

0xdc64,	// (0x0002fcf9) bg_cl_pane_g7

0xdc6c,	// (0x0002fd01) bg_cl_pane_g8

0xdc74,	// (0x0002fd09) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x00031ace) bg_cl_pane_g

0x82a1,	// (0x0002a336) aid_height_cl_leading_ParamLimits

0x82a1,	// (0x0002a336) aid_height_cl_leading

0x82ad,	// (0x0002a342) aid_height_cl_text_ParamLimits

0x82ad,	// (0x0002a342) aid_height_cl_text

0x42b0,	// (0x00026345) bg_cl_header_pane_ParamLimits

0x42b0,	// (0x00026345) bg_cl_header_pane

0x82cc,	// (0x0002a361) cl_header_pane_g1_ParamLimits

0x82cc,	// (0x0002a361) cl_header_pane_g1

0x82e2,	// (0x0002a377) cl_header_pane_t1_ParamLimits

0x82e2,	// (0x0002a377) cl_header_pane_t1

0xdc7c,	// (0x0002fd11) cl_list_pane

0xdc85,	// (0x0002fd1a) hc_scroll_pane_cp01

0x4acf,	// (0x00026b64) bg_cl_header_pane_g1

0xd6b7,	// (0x0002f74c) bg_cl_header_pane_g2

0x4aef,	// (0x00026b84) bg_cl_header_pane_g3

0xd6c7,	// (0x0002f75c) bg_cl_header_pane_g4

0xd6bf,	// (0x0002f754) bg_cl_header_pane_g5

0xd942,	// (0x0002f9d7) bg_cl_header_pane_g6

0xd6df,	// (0x0002f774) bg_cl_header_pane_g7

0xd6e7,	// (0x0002f77c) bg_cl_header_pane_g8

0xd6d7,	// (0x0002f76c) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x00031ae1) bg_cl_header_pane_g

0x82fb,	// (0x0002a390) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x82fb,	// (0x0002a390) hc_cl_list_double_graphic_heading_pane

0x830b,	// (0x0002a3a0) hc_cl_list_single_graphic_pane_ParamLimits

0x830b,	// (0x0002a3a0) hc_cl_list_single_graphic_pane

0x831e,	// (0x0002a3b3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x831e,	// (0x0002a3b3) hc_cl_list_single_graphic_pane_g1

0x832a,	// (0x0002a3bf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x832a,	// (0x0002a3bf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x00031af4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x00031af4) hc_cl_list_single_graphic_pane_g

0x833e,	// (0x0002a3d3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x833e,	// (0x0002a3d3) hc_cl_list_single_graphic_pane_t1

0x831e,	// (0x0002a3b3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x831e,	// (0x0002a3b3) hc_cl_list_double_graphic_heading_pane_g1

0x8353,	// (0x0002a3e8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8353,	// (0x0002a3e8) hc_cl_list_double_graphic_heading_pane_g2

0x8367,	// (0x0002a3fc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8367,	// (0x0002a3fc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x00031af9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x00031af9) hc_cl_list_double_graphic_heading_pane_g

0x837b,	// (0x0002a410) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x837b,	// (0x0002a410) hc_cl_list_double_graphic_heading_pane_t1

0x8390,	// (0x0002a425) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8390,	// (0x0002a425) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x00031b00) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x00031b00) hc_cl_list_double_graphic_heading_pane_t

0xdc8e,	// (0x0002fd23) vid4_progress_pane_g1

0xdc9d,	// (0x0002fd32) vid4_progress_pane_g2

0xdcac,	// (0x0002fd41) vid4_progress_pane_g3

0xdcbb,	// (0x0002fd50) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x00031b05) vid4_progress_pane_g

0xdcd3,	// (0x0002fd68) vid4_progress_pane_t1

0xdce9,	// (0x0002fd7e) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x00031b10) vid4_progress_pane_t

0xdd13,	// (0x0002fda8) wait_bar_pane_cp07

0xc7d7,	// (0x0002e86c) blid_firmament_pane_ParamLimits

0xc818,	// (0x0002e8ad) popup_blid_sat_info2_window_g1

0xc83c,	// (0x0002e8d1) popup_blid_sat_info2_window_t3

0xc84a,	// (0x0002e8df) popup_blid_sat_info2_window_t4

0xc858,	// (0x0002e8ed) popup_blid_sat_info2_window_t5

0xc866,	// (0x0002e8fb) popup_blid_sat_info2_window_t6

0xc876,	// (0x0002e90b) popup_blid_sat_info2_window_t7

0xc884,	// (0x0002e919) popup_blid_sat_info2_window_t8

0xc892,	// (0x0002e927) popup_blid_sat_info2_window_t9

0xc8a0,	// (0x0002e935) popup_blid_sat_info2_window_t10

0xc93c,	// (0x0002e9d1) aid_firma_cardinal_ParamLimits

0xc950,	// (0x0002e9e5) blid_firmament_pane_t1_ParamLimits

0xc967,	// (0x0002e9fc) blid_firmament_pane_t2_ParamLimits

0xc97e,	// (0x0002ea13) blid_firmament_pane_t3_ParamLimits

0xc995,	// (0x0002ea2a) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x0003171f) blid_firmament_pane_t_ParamLimits

0xc9ac,	// (0x0002ea41) blid_sat_info_pane_ParamLimits

0xa9bb,	// (0x0002ca50) main_cam_set_pane_ParamLimits

0x74a8,	// (0x0002953d) aid_size_cell_colour_35_ParamLimits

0x74c8,	// (0x0002955d) aid_size_cell_colour_112_ParamLimits

0x74e8,	// (0x0002957d) aid_size_cell_effect_ParamLimits

0xb078,	// (0x0002d10d) bg_tb_trans_pane_cp02_ParamLimits

0x57e3,	// (0x00027878) heading_imed_pane_ParamLimits

0x7508,	// (0x0002959d) listscroll_imed_pane_ParamLimits

0xbad1,	// (0x0002db66) popup_call2_audio_first_window_g5_ParamLimits

0xbad1,	// (0x0002db66) popup_call2_audio_first_window_g5

0x28d2,	// (0x00024967) aid_size_touch_image3_arrow_left_ParamLimits

0x28d2,	// (0x00024967) aid_size_touch_image3_arrow_left

0x28f2,	// (0x00024987) aid_size_touch_image3_arrow_right_ParamLimits

0x28f2,	// (0x00024987) aid_size_touch_image3_arrow_right

0xdcfe,	// (0x0002fd93) vid4_progress_pane_t3

0x7691,	// (0x00029726) main_hwr_training_symbol_option_pane_ParamLimits

0x7691,	// (0x00029726) main_hwr_training_symbol_option_pane

0xd0b8,	// (0x0002f14d) popup_hwr_training_preview_window_ParamLimits

0xd0b8,	// (0x0002f14d) popup_hwr_training_preview_window

0x27be,	// (0x00024853) hwr_training_navi_pane_g5_ParamLimits

0x27be,	// (0x00024853) hwr_training_navi_pane_g5

0xd693,	// (0x0002f728) popup_char_count_window

0xa9bb,	// (0x0002ca50) bg_popup_sub_pane_cp20_ParamLimits

0x30c4,	// (0x00025159) list_vitu2_match_list_pane_ParamLimits

0x30d3,	// (0x00025168) vitu2_page_scroll_pane_ParamLimits

0x30d3,	// (0x00025168) vitu2_page_scroll_pane

0xdd4e,	// (0x0002fde3) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdd4e,	// (0x0002fde3) list_single_hwr_training_symbol_option_pane

0xdd61,	// (0x0002fdf6) list_single_hwr_training_symbol_option_pane_g1

0xdd69,	// (0x0002fdfe) list_single_hwr_training_symbol_option_pane_t1

0xdd77,	// (0x0002fe0c) bg_button_pane_cp023

0xdd80,	// (0x0002fe15) bg_button_pane_cp024

0x83cb,	// (0x0002a460) vitu2_page_scroll_pane_g1

0x83d3,	// (0x0002a468) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x00031b17) vitu2_page_scroll_pane_g

0x83db,	// (0x0002a470) vitu2_page_scroll_pane_t1

0xc9db,	// (0x0002ea70) popup_char_count_window_g1

0xddb3,	// (0x0002fe48) popup_char_count_window_g2

0xddbc,	// (0x0002fe51) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x00031b1c) popup_char_count_window_g

0xddc5,	// (0x0002fe5a) popup_char_count_window_t1

0xa9c9,	// (0x0002ca5e) main_vded2_pane

0xce79,	// (0x0002ef0e) aid_size_cell_imed_line

0xce83,	// (0x0002ef18) grid_imed_line_width_pane

0xd611,	// (0x0002f6a6) vid4_indicators_pane_g4

0xddd3,	// (0x0002fe68) cell_imed_line_width_pane_ParamLimits

0xddd3,	// (0x0002fe68) cell_imed_line_width_pane

0xdde5,	// (0x0002fe7a) cell_imed_line_width_pane_g1

0xddee,	// (0x0002fe83) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x00031b23) cell_imed_line_width_pane_g

0x83ea,	// (0x0002a47f) main_vded2_pane_g1_ParamLimits

0x83ea,	// (0x0002a47f) main_vded2_pane_g1

0x8400,	// (0x0002a495) main_vded2_pane_g2_ParamLimits

0x8400,	// (0x0002a495) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x00031b28) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x00031b28) main_vded2_pane_g

0x8410,	// (0x0002a4a5) vded2_slider_pane_ParamLimits

0x8410,	// (0x0002a4a5) vded2_slider_pane

0x8423,	// (0x0002a4b8) aid_size_touch_vded2_end

0x842b,	// (0x0002a4c0) aid_size_touch_vded2_playhead

0x8433,	// (0x0002a4c8) aid_size_touch_vded2_start

0x843b,	// (0x0002a4d0) vded2_slider_bg_pane

0x8444,	// (0x0002a4d9) vded2_slider_pane_g1

0x844d,	// (0x0002a4e2) vded2_slider_pane_g2

0x8455,	// (0x0002a4ea) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x00031b2d) vded2_slider_pane_g

0x845e,	// (0x0002a4f3) vded2_slider_bg_pane_g1

0x8467,	// (0x0002a4fc) vded2_slider_bg_pane_g2

0x8470,	// (0x0002a505) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x00031b34) vded2_slider_bg_pane_g

0x5f13,	// (0x00027fa8) aid_postcard_touch_down_pane_ParamLimits

0x5f13,	// (0x00027fa8) aid_postcard_touch_down_pane

0x5f25,	// (0x00027fba) aid_postcard_touch_up_pane_ParamLimits

0x5f25,	// (0x00027fba) aid_postcard_touch_up_pane

0xa9c9,	// (0x0002ca5e) main_blid2_pane

0xc50d,	// (0x0002e5a2) popup_blid2_search_window

0x3237,	// (0x000252cc) blid2_gps_pane

0x3237,	// (0x000252cc) blid2_navig_pane

0x3237,	// (0x000252cc) blid2_search_pane

0x3237,	// (0x000252cc) blid2_tripm_pane

0x8479,	// (0x0002a50e) blid2_search_pane_g1_ParamLimits

0x8479,	// (0x0002a50e) blid2_search_pane_g1

0x848d,	// (0x0002a522) blid2_search_pane_t1_ParamLimits

0x848d,	// (0x0002a522) blid2_search_pane_t1

0x849f,	// (0x0002a534) aid_size_cell_blid2_gps_ParamLimits

0x849f,	// (0x0002a534) aid_size_cell_blid2_gps

0x84b7,	// (0x0002a54c) blid2_gps_pane_g1_ParamLimits

0x84b7,	// (0x0002a54c) blid2_gps_pane_g1

0x84cb,	// (0x0002a560) grid_blid2_satellite_pane_ParamLimits

0x84cb,	// (0x0002a560) grid_blid2_satellite_pane

0x84df,	// (0x0002a574) blid2_navig_pane_g1_ParamLimits

0x84df,	// (0x0002a574) blid2_navig_pane_g1

0x84eb,	// (0x0002a580) blid2_navig_pane_t1_ParamLimits

0x84eb,	// (0x0002a580) blid2_navig_pane_t1

0x8504,	// (0x0002a599) blid2_navig_pane_t2_ParamLimits

0x8504,	// (0x0002a599) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x00031b3b) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x00031b3b) blid2_navig_pane_t

0x851d,	// (0x0002a5b2) blid2_navig_ring_pane_ParamLimits

0x851d,	// (0x0002a5b2) blid2_navig_ring_pane

0x8532,	// (0x0002a5c7) blid2_speed_pane_ParamLimits

0x8532,	// (0x0002a5c7) blid2_speed_pane

0x853e,	// (0x0002a5d3) blid2_tripm_pane_g1_ParamLimits

0x853e,	// (0x0002a5d3) blid2_tripm_pane_g1

0x8553,	// (0x0002a5e8) blid2_tripm_pane_g2_ParamLimits

0x8553,	// (0x0002a5e8) blid2_tripm_pane_g2

0x8567,	// (0x0002a5fc) blid2_tripm_pane_g3_ParamLimits

0x8567,	// (0x0002a5fc) blid2_tripm_pane_g3

0x857b,	// (0x0002a610) blid2_tripm_pane_g4_ParamLimits

0x857b,	// (0x0002a610) blid2_tripm_pane_g4

0x858f,	// (0x0002a624) blid2_tripm_pane_g5_ParamLimits

0x858f,	// (0x0002a624) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x00031b40) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x00031b40) blid2_tripm_pane_g

0x85b1,	// (0x0002a646) blid2_tripm_pane_t1_ParamLimits

0x85b1,	// (0x0002a646) blid2_tripm_pane_t1

0x85c8,	// (0x0002a65d) blid2_tripm_pane_t2_ParamLimits

0x85c8,	// (0x0002a65d) blid2_tripm_pane_t2

0x85df,	// (0x0002a674) blid2_tripm_pane_t3_ParamLimits

0x85df,	// (0x0002a674) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x00031b4d) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x00031b4d) blid2_tripm_pane_t

0x8622,	// (0x0002a6b7) cell_blid2_satellite_pane_ParamLimits

0x8622,	// (0x0002a6b7) cell_blid2_satellite_pane

0x863a,	// (0x0002a6cf) cell_blid2_satellite_pane_g1

0xddf6,	// (0x0002fe8b) cell_blid2_satellite_pane_t1

0x44a0,	// (0x00026535) blid2_speed_pane_g1

0xde04,	// (0x0002fe99) blid2_speed_pane_t1

0xde12,	// (0x0002fea7) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x00031b56) blid2_speed_pane_t

0x44a0,	// (0x00026535) blid2_navig_ring_pane_g1

0x8643,	// (0x0002a6d8) blid2_navig_ring_pane_g2

0x864b,	// (0x0002a6e0) blid2_navig_ring_pane_g3

0x8653,	// (0x0002a6e8) blid2_navig_ring_pane_g4

0x865b,	// (0x0002a6f0) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x00031b5b) blid2_navig_ring_pane_g

0x3237,	// (0x000252cc) bg_popup_window_pane_cp011

0xde20,	// (0x0002feb5) popup_blid2_search_window_g1

0xde28,	// (0x0002febd) popup_blid2_search_window_t1

0xde36,	// (0x0002fecb) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x00031b66) popup_blid2_search_window_t

0x499e,	// (0x00026a33) main_browser_pane_g1

0x3b17,	// (0x00025bac) main_browser_pane_ParamLimits

0xa9bb,	// (0x0002ca50) bg_button_pane_cp011_ParamLimits

0x3044,	// (0x000250d9) cell_vitu2_function_pane_g1_ParamLimits

0xb078,	// (0x0002d10d) bg_popup_sub_pane_cp22_ParamLimits

0x7f45,	// (0x00029fda) input_focus_pane_cp08_ParamLimits

0x7f5c,	// (0x00029ff1) popup_vitu2_query_button_pane_ParamLimits

0x7f5c,	// (0x00029ff1) popup_vitu2_query_button_pane

0x7f6c,	// (0x0002a001) popup_vitu2_query_input_button_pane

0xd9b2,	// (0x0002fa47) popup_vitu2_query_window_g1_ParamLimits

0x7f74,	// (0x0002a009) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x00031a67) popup_vitu2_query_window_g_ParamLimits

0x3237,	// (0x000252cc) bg_button_pane_cp026

0x8663,	// (0x0002a6f8) popup_vitu2_query_input_button_pane_g1

0x3237,	// (0x000252cc) bg_button_pane_cp025

0xde44,	// (0x0002fed9) popup_vitu2_query_button_pane_t1

0x6aa6,	// (0x00028b3b) main_mp3_pane_t6

0x6ab4,	// (0x00028b49) popup_slider_window_cp01

0xd596,	// (0x0002f62b) cam4_battery_pane

0xd596,	// (0x0002f62b) cam4_battery_pane_cp02

0xd596,	// (0x0002f62b) cam4_battery_pane_cp01

0xd596,	// (0x0002f62b) cam4_battery_pane_cp03

0xc73e,	// (0x0002e7d3) cam4_battery_pane_g1

0x44a0,	// (0x00026535) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x00031b6b) cam4_battery_pane_g

0xc8ae,	// (0x0002e943) popup_blid_sat_info2_window_t11

0x5c36,	// (0x00027ccb) aid_size_touch_mv_arrow_left_ParamLimits

0xae1a,	// (0x0002ceaf) aid_size_touch_mv_arrow_right_ParamLimits

0xae73,	// (0x0002cf08) navi_pane_g1_ParamLimits

0xae7f,	// (0x0002cf14) navi_pane_g2_ParamLimits

0x5c5a,	// (0x00027cef) navi_pane_g3_ParamLimits

0xf38b,	// (0x00031420) navi_pane_g_ParamLimits

0x5c77,	// (0x00027d0c) navi_pane_mv_t1_ParamLimits

0x7514,	// (0x000295a9) grid_imed_effect_pane_ParamLimits

0x45e6,	// (0x0002667b) aid_placing_vt_slider_lsc

0x45f6,	// (0x0002668b) aid_placing_vt_slider_prt

0x42b0,	// (0x00026345) bg_tb_trans_pane_cp01_ParamLimits

0xcaf3,	// (0x0002eb88) popup_image_details_window_g1_ParamLimits

0xcb06,	// (0x0002eb9b) popup_image_details_window_g2_ParamLimits

0xcb1b,	// (0x0002ebb0) popup_image_details_window_g3_ParamLimits

0xcb1b,	// (0x0002ebb0) popup_image_details_window_g3

0xf6ca,	// (0x0003175f) popup_image_details_window_g_ParamLimits

0xcb2f,	// (0x0002ebc4) popup_image_details_window_t1_ParamLimits

0xcb41,	// (0x0002ebd6) popup_image_details_window_t2_ParamLimits

0xcb5a,	// (0x0002ebef) popup_image_details_window_t3_ParamLimits

0xcb6e,	// (0x0002ec03) popup_image_details_window_t4_ParamLimits

0xcb89,	// (0x0002ec1e) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x00031766) popup_image_details_window_t_ParamLimits

0x82b9,	// (0x0002a34e) cl_header_name_pane_ParamLimits

0x82b9,	// (0x0002a34e) cl_header_name_pane

0x866b,	// (0x0002a700) cl_header_name_pane_t1_ParamLimits

0x866b,	// (0x0002a700) cl_header_name_pane_t1

0x868c,	// (0x0002a721) cl_header_name_pane_t2_ParamLimits

0x868c,	// (0x0002a721) cl_header_name_pane_t2

0x86ce,	// (0x0002a763) cl_header_name_pane_t3_ParamLimits

0x86ce,	// (0x0002a763) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x00031b70) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x00031b70) cl_header_name_pane_t

0xaf0c,	// (0x0002cfa1) navi_pane_mv_g2_ParamLimits

0xd65e,	// (0x0002f6f3) field_vitu2_entry_pane_g1_ParamLimits

0xd66a,	// (0x0002f6ff) field_vitu2_entry_pane_g2_ParamLimits

0xb034,	// (0x0002d0c9) field_vitu2_entry_pane_g3_ParamLimits

0xb034,	// (0x0002d0c9) field_vitu2_entry_pane_g3

0xf8d1,	// (0x00031966) field_vitu2_entry_pane_g_ParamLimits

0xd69b,	// (0x0002f730) cell_vitu2_itu_pane_g1_ParamLimits

0x2eec,	// (0x00024f81) cell_vitu2_itu_pane_g2_ParamLimits

0x2eec,	// (0x00024f81) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x00031972) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x00031972) cell_vitu2_itu_pane_g

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp05_ParamLimits

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp05

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp03

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp04

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp10_ParamLimits

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp10

0x825f,	// (0x0002a2f4) bg_vkb2_func_pane_cp08

0x8246,	// (0x0002a2db) bg_vkb2_func_pane_cp06

0x8253,	// (0x0002a2e8) bg_vkb2_func_pane_cp07

0xdd89,	// (0x0002fe1e) bg_vkb2_func_pane_cp11_ParamLimits

0xdd89,	// (0x0002fe1e) bg_vkb2_func_pane_cp11

0xdd9e,	// (0x0002fe33) bg_vkb2_func_pane_cp12_ParamLimits

0xdd9e,	// (0x0002fe33) bg_vkb2_func_pane_cp12

0x3237,	// (0x000252cc) bg_vkb2_func_pane_cp09

0xd6b7,	// (0x0002f74c) bg_vkb2_func_pane_g1

0x4aef,	// (0x00026b84) bg_vkb2_func_pane_g2

0xd6bf,	// (0x0002f754) bg_vkb2_func_pane_g3

0xd6c7,	// (0x0002f75c) bg_vkb2_func_pane_g4

0xd942,	// (0x0002f9d7) bg_vkb2_func_pane_g5

0xd6df,	// (0x0002f774) bg_vkb2_func_pane_g6

0xd6e7,	// (0x0002f77c) bg_vkb2_func_pane_g7

0xd6d7,	// (0x0002f76c) bg_vkb2_func_pane_g8

0x4acf,	// (0x00026b64) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x00031b77) bg_vkb2_func_pane_g

0x85a1,	// (0x0002a636) blid2_tripm_pane_g6_ParamLimits

0x85a1,	// (0x0002a636) blid2_tripm_pane_g6

0xd3df,	// (0x0002f474) mp4_progress_pane_g1

0x8610,	// (0x0002a6a5) blid2_tripm_values_pane_ParamLimits

0x8610,	// (0x0002a6a5) blid2_tripm_values_pane

0x86ff,	// (0x0002a794) blid2_tripm_values_pane_t1

0x870d,	// (0x0002a7a2) blid2_tripm_values_pane_t2

0x871b,	// (0x0002a7b0) blid2_tripm_values_pane_t3

0x8729,	// (0x0002a7be) blid2_tripm_values_pane_t4

0x8737,	// (0x0002a7cc) blid2_tripm_values_pane_t5

0x8745,	// (0x0002a7da) blid2_tripm_values_pane_t6

0x8753,	// (0x0002a7e8) blid2_tripm_values_pane_t7

0x8761,	// (0x0002a7f6) blid2_tripm_values_pane_t8

0x876f,	// (0x0002a804) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x00031b8a) blid2_tripm_values_pane_t

0x462a,	// (0x000266bf) call_video_pane_t1_ParamLimits

0x4644,	// (0x000266d9) call_video_pane_t2_ParamLimits

0xf222,	// (0x000312b7) call_video_pane_t_ParamLimits

0x5ecb,	// (0x00027f60) msg_header_pane_g1_ParamLimits

0xb135,	// (0x0002d1ca) msg_header_pane_g2_ParamLimits

0xb135,	// (0x0002d1ca) msg_header_pane_g2

0x0001,

0xf42e,	// (0x000314c3) msg_header_pane_g_ParamLimits

0xf42e,	// (0x000314c3) msg_header_pane_g

0x3b17,	// (0x00025bac) main_clock2_pane_ParamLimits

0x72a3,	// (0x00029338) grid_clock2_toolbar_pane_ParamLimits

0x72a3,	// (0x00029338) grid_clock2_toolbar_pane

0x72a3,	// (0x00029338) listscroll_clock2_pane_ParamLimits

0x72a3,	// (0x00029338) listscroll_clock2_pane

0x7386,	// (0x0002941b) main_clock2_pane_t3_ParamLimits

0x7386,	// (0x0002941b) main_clock2_pane_t3

0x73a8,	// (0x0002943d) main_clock2_pane_t4_ParamLimits

0x73a8,	// (0x0002943d) main_clock2_pane_t4

0xde52,	// (0x0002fee7) cell_clock2_toolbar_pane

0xde5a,	// (0x0002feef) cell_clock2_toolbar_pane_cp01

0xde5a,	// (0x0002feef) cell_clock2_toolbar_pane_cp02

0xde62,	// (0x0002fef7) cell_clock2_toolbar_pane_cp03

0xde6a,	// (0x0002feff) list_clock2_pane

0xde72,	// (0x0002ff07) scroll_pane_cp10

0xde7a,	// (0x0002ff0f) list_single_clock2_pane_ParamLimits

0xde7a,	// (0x0002ff0f) list_single_clock2_pane

0x4247,	// (0x000262dc) list_highlight_pane_cp08

0xde87,	// (0x0002ff1c) list_single_clock2_pane_t1

0xde95,	// (0x0002ff2a) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x00031b9d) list_single_clock2_pane_t

0x3237,	// (0x000252cc) bg_button_pane_cp10

0xdea3,	// (0x0002ff38) cell_clock2_toolbar_pane_g1

0x2462,	// (0x000244f7) aid_main_viewer_pane_g1_ParamLimits

0x2462,	// (0x000244f7) aid_main_viewer_pane_g1

0x246e,	// (0x00024503) aid_main_viewer_pane_g2_ParamLimits

0x246e,	// (0x00024503) aid_main_viewer_pane_g2

0x5ed7,	// (0x00027f6c) aid_main_viewer_pane_g3_ParamLimits

0x5ed7,	// (0x00027f6c) aid_main_viewer_pane_g3

0x5ee6,	// (0x00027f7b) aid_main_viewer_pane_g4_ParamLimits

0x5ee6,	// (0x00027f7b) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x000314d4) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x000314d4) aid_main_viewer_pane_g

0xa9bb,	// (0x0002ca50) main_calc_pane_ParamLimits

0x24aa,	// (0x0002453f) main_dialer2_pane_ParamLimits

0xa9c9,	// (0x0002ca5e) main_cam6_pane

0xa9c9,	// (0x0002ca5e) main_vid6_pane

0x72af,	// (0x00029344) listscroll_gen_pane_cp06_ParamLimits

0x72af,	// (0x00029344) listscroll_gen_pane_cp06

0x73c9,	// (0x0002945e) main_clock2_pane_t5_ParamLimits

0x73c9,	// (0x0002945e) main_clock2_pane_t5

0x7421,	// (0x000294b6) aid_call2_pane_cp10_ParamLimits

0x7433,	// (0x000294c8) aid_call_pane_cp10_ParamLimits

0xae0e,	// (0x0002cea3) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae0e,	// (0x0002cea3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7445,	// (0x000294da) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7445,	// (0x000294da) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae0e,	// (0x0002cea3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x0003181b) popup_clock_analogue_window_cp10_g_ParamLimits

0x7457,	// (0x000294ec) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd437,	// (0x0002f4cc) cell_dialer2_keypad_pane_g2_ParamLimits

0xd437,	// (0x0002f4cc) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x00031905) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x00031905) cell_dialer2_keypad_pane_g

0x42d1,	// (0x00026366) cell_dialer2_keypad_pane_t1

0x7a7e,	// (0x00029b13) main_cset_text2_pane_ParamLimits

0x7a7e,	// (0x00029b13) main_cset_text2_pane

0xdb8c,	// (0x0002fc21) area_vitu2_query_pane_g1_ParamLimits

0x81eb,	// (0x0002a280) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x00031aba) area_vitu2_query_pane_g_ParamLimits

0xdc10,	// (0x0002fca5) area_vitu2_query_pane_t7_ParamLimits

0xdc10,	// (0x0002fca5) area_vitu2_query_pane_t7

0x8246,	// (0x0002a2db) bg_button_pane_cp018_ParamLimits

0x8253,	// (0x0002a2e8) bg_button_pane_cp021_ParamLimits

0x825f,	// (0x0002a2f4) bg_button_pane_cp022_ParamLimits

0x825f,	// (0x0002a2f4) bg_vkb2_func_pane_cp08_ParamLimits

0x8246,	// (0x0002a2db) bg_vkb2_func_pane_cp06_ParamLimits

0x8253,	// (0x0002a2e8) bg_vkb2_func_pane_cp07_ParamLimits

0x826e,	// (0x0002a303) input_focus_pane_cp09_ParamLimits

0xdeab,	// (0x0002ff40) cam6_autofocus_pane_ParamLimits

0xdeab,	// (0x0002ff40) cam6_autofocus_pane

0x3157,	// (0x000251ec) cam6_image_uncrop_pane_ParamLimits

0x3157,	// (0x000251ec) cam6_image_uncrop_pane

0x3164,	// (0x000251f9) cam6_indi_pane_ParamLimits

0x3164,	// (0x000251f9) cam6_indi_pane

0x317a,	// (0x0002520f) cam6_mode_pane_ParamLimits

0x317a,	// (0x0002520f) cam6_mode_pane

0x318c,	// (0x00025221) cam6_timer_pane_ParamLimits

0x318c,	// (0x00025221) cam6_timer_pane

0x3198,	// (0x0002522d) cam6_zoom_pane_ParamLimits

0x3198,	// (0x0002522d) cam6_zoom_pane

0x877d,	// (0x0002a812) cam6_mode_pane_g1_ParamLimits

0x877d,	// (0x0002a812) cam6_mode_pane_g1

0x878d,	// (0x0002a822) cam6_mode_pane_g2_ParamLimits

0x878d,	// (0x0002a822) cam6_mode_pane_g2

0x879d,	// (0x0002a832) cam6_mode_pane_g3_ParamLimits

0x879d,	// (0x0002a832) cam6_mode_pane_g3

0x87ad,	// (0x0002a842) cam6_mode_pane_g4_ParamLimits

0x87ad,	// (0x0002a842) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x00031ba2) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x00031ba2) cam6_mode_pane_g

0xdeb7,	// (0x0002ff4c) bg_tb_trans_pane_cp08_ParamLimits

0xdeb7,	// (0x0002ff4c) bg_tb_trans_pane_cp08

0xdec5,	// (0x0002ff5a) cam6_battery_pane_ParamLimits

0xdec5,	// (0x0002ff5a) cam6_battery_pane

0xdedb,	// (0x0002ff70) cam6_indi_pane_g1_ParamLimits

0xdedb,	// (0x0002ff70) cam6_indi_pane_g1

0xdeed,	// (0x0002ff82) cam6_indi_pane_g2_ParamLimits

0xdeed,	// (0x0002ff82) cam6_indi_pane_g2

0xdeff,	// (0x0002ff94) cam6_indi_pane_g3_ParamLimits

0xdeff,	// (0x0002ff94) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x00031bab) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x00031bab) cam6_indi_pane_g

0xdf11,	// (0x0002ffa6) cam6_indi_pane_t1_ParamLimits

0xdf11,	// (0x0002ffa6) cam6_indi_pane_t1

0x777d,	// (0x00029812) cam6_autofocus_pane_g1

0x7775,	// (0x0002980a) cam6_autofocus_pane_g2

0x778d,	// (0x00029822) cam6_autofocus_pane_g3

0x7785,	// (0x0002981a) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x00031bb2) cam6_autofocus_pane_g

0xdf37,	// (0x0002ffcc) cam6_timer_pane_g1

0xdf3f,	// (0x0002ffd4) cam6_timer_pane_t1

0xdf4d,	// (0x0002ffe2) cam6_zoom_cont_pane

0xdf55,	// (0x0002ffea) cam6_zoom_pane_g1

0xdf5d,	// (0x0002fff2) cam6_zoom_pane_g2

0x87bd,	// (0x0002a852) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x00031bbb) cam6_zoom_pane_g

0x44a0,	// (0x00026535) cam6_battery_pane_g1

0x44a0,	// (0x00026535) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x00031484) cam6_battery_pane_g

0xdf65,	// (0x0002fffa) cam6_zoom_cont_pane_g1

0xdf6e,	// (0x00030003) cam6_zoom_cont_pane_g2

0xdf77,	// (0x0003000c) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x00031bc2) cam6_zoom_cont_pane_g

0x87da,	// (0x0002a86f) cam6_mode_pane_cp_ParamLimits

0x87da,	// (0x0002a86f) cam6_mode_pane_cp

0x87ec,	// (0x0002a881) cam6_zoom_pane_cp_ParamLimits

0x87ec,	// (0x0002a881) cam6_zoom_pane_cp

0x87f8,	// (0x0002a88d) vid6_image_uncrop_cif_pane_ParamLimits

0x87f8,	// (0x0002a88d) vid6_image_uncrop_cif_pane

0x8806,	// (0x0002a89b) vid6_image_uncrop_nhd_pane_ParamLimits

0x8806,	// (0x0002a89b) vid6_image_uncrop_nhd_pane

0x8813,	// (0x0002a8a8) vid6_image_uncrop_vga_pane_ParamLimits

0x8813,	// (0x0002a8a8) vid6_image_uncrop_vga_pane

0x8820,	// (0x0002a8b5) vid6_image_uncrop_wvga_pane_ParamLimits

0x8820,	// (0x0002a8b5) vid6_image_uncrop_wvga_pane

0x882d,	// (0x0002a8c2) vid6_indi_pane_ParamLimits

0x882d,	// (0x0002a8c2) vid6_indi_pane

0xdeb7,	// (0x0002ff4c) bg_tb_trans_pane_cp09_ParamLimits

0xdeb7,	// (0x0002ff4c) bg_tb_trans_pane_cp09

0xdf8b,	// (0x00030020) cam6_battery_pane_cp_ParamLimits

0xdf8b,	// (0x00030020) cam6_battery_pane_cp

0xdf97,	// (0x0003002c) vid6_indi_pane_g1_ParamLimits

0xdf97,	// (0x0003002c) vid6_indi_pane_g1

0xdfa9,	// (0x0003003e) vid6_indi_pane_g2_ParamLimits

0xdfa9,	// (0x0003003e) vid6_indi_pane_g2

0xdfbb,	// (0x00030050) vid6_indi_pane_g3_ParamLimits

0xdfbb,	// (0x00030050) vid6_indi_pane_g3

0xdfd0,	// (0x00030065) vid6_indi_pane_g4_ParamLimits

0xdfd0,	// (0x00030065) vid6_indi_pane_g4

0xdfe5,	// (0x0003007a) vid6_indi_pane_g5_ParamLimits

0xdfe5,	// (0x0003007a) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x00031bc9) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x00031bc9) vid6_indi_pane_g

0xdfff,	// (0x00030094) vid6_indi_pane_t1_ParamLimits

0xdfff,	// (0x00030094) vid6_indi_pane_t1

0xe015,	// (0x000300aa) vid6_indi_pane_t2_ParamLimits

0xe015,	// (0x000300aa) vid6_indi_pane_t2

0xe03d,	// (0x000300d2) vid6_indi_pane_t3_ParamLimits

0xe03d,	// (0x000300d2) vid6_indi_pane_t3

0xe065,	// (0x000300fa) vid6_indi_pane_t4_ParamLimits

0xe065,	// (0x000300fa) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x00031bd4) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x00031bd4) vid6_indi_pane_t

0xe089,	// (0x0003011e) wait_bar_pane_cp08

0x8844,	// (0x0002a8d9) main_cset_text2_pane_t1_ParamLimits

0x8844,	// (0x0002a8d9) main_cset_text2_pane_t1

0x87c5,	// (0x0002a85a) listscroll_gen_pane_cp06_t1_ParamLimits

0x87c5,	// (0x0002a85a) listscroll_gen_pane_cp06_t1

0xa9c9,	// (0x0002ca5e) main_cam6_set_pane

0xd588,	// (0x0002f61d) bg_tb_trans_pane_cp06_ParamLimits

0xd59e,	// (0x0002f633) cam4_indicators_pane_g1_ParamLimits

0xd5ae,	// (0x0002f643) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x00031942) cam4_indicators_pane_g_ParamLimits

0xd5ce,	// (0x0002f663) cam4_indicators_pane_t1_ParamLimits

0xa9bb,	// (0x0002ca50) bg_tb_trans_pane_cp07_ParamLimits

0xd59e,	// (0x0002f633) vid4_indicators_pane_g1_ParamLimits

0xd5f0,	// (0x0002f685) vid4_indicators_pane_g2_ParamLimits

0xd600,	// (0x0002f695) vid4_indicators_pane_g3_ParamLimits

0xd611,	// (0x0002f6a6) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x00031954) vid4_indicators_pane_g_ParamLimits

0xd62d,	// (0x0002f6c2) vid4_indicators_pane_t1_ParamLimits

0xdc8e,	// (0x0002fd23) vid4_progress_pane_g1_ParamLimits

0xdc9d,	// (0x0002fd32) vid4_progress_pane_g2_ParamLimits

0xdcac,	// (0x0002fd41) vid4_progress_pane_g3_ParamLimits

0xdcbb,	// (0x0002fd50) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x00031b05) vid4_progress_pane_g_ParamLimits

0xdcd3,	// (0x0002fd68) vid4_progress_pane_t1_ParamLimits

0xdce9,	// (0x0002fd7e) vid4_progress_pane_t2_ParamLimits

0xdcfe,	// (0x0002fd93) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x00031b10) vid4_progress_pane_t_ParamLimits

0xdd13,	// (0x0002fda8) wait_bar_pane_cp07_ParamLimits

0x885f,	// (0x0002a8f4) main_cam6_set_pane_g2_ParamLimits

0x885f,	// (0x0002a8f4) main_cam6_set_pane_g2

0x8881,	// (0x0002a916) main_cset6_listscroll_pane_ParamLimits

0x8881,	// (0x0002a916) main_cset6_listscroll_pane

0x889b,	// (0x0002a930) main_cset6_slider_pane_ParamLimits

0x889b,	// (0x0002a930) main_cset6_slider_pane

0x88b1,	// (0x0002a946) main_cset6_text2_pane_ParamLimits

0x88b1,	// (0x0002a946) main_cset6_text2_pane

0xe099,	// (0x0003012e) main_cset6_text_pane

0xd7cd,	// (0x0002f862) main_cset_list_pane_copy1_ParamLimits

0xd7cd,	// (0x0002f862) main_cset_list_pane_copy1

0xd7dd,	// (0x0002f872) scroll_pane_cp028_copy1

0x88bf,	// (0x0002a954) cset_list_set_pane_copy1

0x88d1,	// (0x0002a966) aid_position_infowindow_above_copy1

0x88d9,	// (0x0002a96e) aid_position_infowindow_below_copy1

0x88e1,	// (0x0002a976) cset_list_set_pane_g1_copy1

0x88e9,	// (0x0002a97e) cset_list_set_pane_g3_copy1_ParamLimits

0x88e9,	// (0x0002a97e) cset_list_set_pane_g3_copy1

0x88f8,	// (0x0002a98d) cset_list_set_pane_t1_copy1_ParamLimits

0x88f8,	// (0x0002a98d) cset_list_set_pane_t1_copy1

0x42b0,	// (0x00026345) list_highlight_pane_cp021_copy1_ParamLimits

0x42b0,	// (0x00026345) list_highlight_pane_cp021_copy1

0xe0a1,	// (0x00030136) cset6_slider_pane_ParamLimits

0xe0a1,	// (0x00030136) cset6_slider_pane

0xe0cd,	// (0x00030162) main_cset6_slider_pane_g1_ParamLimits

0xe0cd,	// (0x00030162) main_cset6_slider_pane_g1

0x890d,	// (0x0002a9a2) main_cset6_slider_pane_g2_ParamLimits

0x890d,	// (0x0002a9a2) main_cset6_slider_pane_g2

0xd7f2,	// (0x0002f887) main_cset6_slider_pane_g3_ParamLimits

0xd7f2,	// (0x0002f887) main_cset6_slider_pane_g3

0x7b3c,	// (0x00029bd1) main_cset6_slider_pane_g4_ParamLimits

0x7b3c,	// (0x00029bd1) main_cset6_slider_pane_g4

0x7b84,	// (0x00029c19) main_cset6_slider_pane_g5_ParamLimits

0x7b84,	// (0x00029c19) main_cset6_slider_pane_g5

0xd7f2,	// (0x0002f887) main_cset6_slider_pane_g7_ParamLimits

0xd7f2,	// (0x0002f887) main_cset6_slider_pane_g7

0xd7fe,	// (0x0002f893) main_cset6_slider_pane_g8_ParamLimits

0xd7fe,	// (0x0002f893) main_cset6_slider_pane_g8

0x7b24,	// (0x00029bb9) main_cset6_slider_pane_g9_ParamLimits

0x7b24,	// (0x00029bb9) main_cset6_slider_pane_g9

0x7b30,	// (0x00029bc5) main_cset6_slider_pane_g10_ParamLimits

0x7b30,	// (0x00029bc5) main_cset6_slider_pane_g10

0x7b3c,	// (0x00029bd1) main_cset6_slider_pane_g11_ParamLimits

0x7b3c,	// (0x00029bd1) main_cset6_slider_pane_g11

0x7b48,	// (0x00029bdd) main_cset6_slider_pane_g12_ParamLimits

0x7b48,	// (0x00029bdd) main_cset6_slider_pane_g12

0x7b54,	// (0x00029be9) main_cset6_slider_pane_g13_ParamLimits

0x7b54,	// (0x00029be9) main_cset6_slider_pane_g13

0x7b60,	// (0x00029bf5) main_cset6_slider_pane_g14_ParamLimits

0x7b60,	// (0x00029bf5) main_cset6_slider_pane_g14

0x8935,	// (0x0002a9ca) main_cset6_slider_pane_g15_ParamLimits

0x8935,	// (0x0002a9ca) main_cset6_slider_pane_g15

0x7b84,	// (0x00029c19) main_cset6_slider_pane_g16_ParamLimits

0x7b84,	// (0x00029c19) main_cset6_slider_pane_g16

0x7b90,	// (0x00029c25) main_cset6_slider_pane_g17_ParamLimits

0x7b90,	// (0x00029c25) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x00031bdd) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x00031bdd) main_cset6_slider_pane_g

0xe0f5,	// (0x0003018a) main_cset6_slider_pane_t1_ParamLimits

0xe0f5,	// (0x0003018a) main_cset6_slider_pane_t1

0xe136,	// (0x000301cb) main_cset6_slider_pane_t2_ParamLimits

0xe136,	// (0x000301cb) main_cset6_slider_pane_t2

0xe161,	// (0x000301f6) main_cset6_slider_pane_t3_ParamLimits

0xe161,	// (0x000301f6) main_cset6_slider_pane_t3

0x894d,	// (0x0002a9e2) main_cset6_slider_pane_t4_ParamLimits

0x894d,	// (0x0002a9e2) main_cset6_slider_pane_t4

0x8978,	// (0x0002aa0d) main_cset6_slider_pane_t5_ParamLimits

0x8978,	// (0x0002aa0d) main_cset6_slider_pane_t5

0xe18c,	// (0x00030221) main_cset6_slider_pane_t7_ParamLimits

0xe18c,	// (0x00030221) main_cset6_slider_pane_t7

0x89a3,	// (0x0002aa38) main_cset6_slider_pane_t8_ParamLimits

0x89a3,	// (0x0002aa38) main_cset6_slider_pane_t8

0x89c7,	// (0x0002aa5c) main_cset6_slider_pane_t9_ParamLimits

0x89c7,	// (0x0002aa5c) main_cset6_slider_pane_t9

0x89eb,	// (0x0002aa80) main_cset6_slider_pane_t10_ParamLimits

0x89eb,	// (0x0002aa80) main_cset6_slider_pane_t10

0x8a0f,	// (0x0002aaa4) main_cset6_slider_pane_t11_ParamLimits

0x8a0f,	// (0x0002aaa4) main_cset6_slider_pane_t11

0xe1c2,	// (0x00030257) main_cset6_slider_pane_t14_ParamLimits

0xe1c2,	// (0x00030257) main_cset6_slider_pane_t14

0xe1fb,	// (0x00030290) main_cset6_slider_pane_t15_ParamLimits

0xe1fb,	// (0x00030290) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x00031c02) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x00031c02) main_cset6_slider_pane_t

0xe234,	// (0x000302c9) cset_slider_pane_g1_copy1

0xe23d,	// (0x000302d2) cset_slider_pane_g2_copy1

0xe246,	// (0x000302db) cset_slider_pane_g3_copy1

0x3237,	// (0x000252cc) bg_popup_sub_pane_cp011_copy1

0xd9be,	// (0x0002fa53) main_cset_text_pane_g1_copy1

0xd9c6,	// (0x0002fa5b) main_cset_text_pane_t1_copy1

0xd9d4,	// (0x0002fa69) main_cset_text_pane_t2_copy1

0xd9e2,	// (0x0002fa77) main_cset_text_pane_t3_copy1

0xd9f0,	// (0x0002fa85) main_cset_text_pane_t4_copy1

0xd9fe,	// (0x0002fa93) main_cset_text_pane_t5_copy1

0xda0c,	// (0x0002faa1) main_cset_text_pane_t6_copy1

0xda1a,	// (0x0002faaf) main_cset_text_pane_t7_copy1

0x8a50,	// (0x0002aae5) main_cset_text2_pane_t1_copy1

0xa9bb,	// (0x0002ca50) main_ncimui_pane

0x26b8,	// (0x0002474d) popup_query_ncimui_window_ParamLimits

0x26b8,	// (0x0002474d) popup_query_ncimui_window

0xcc66,	// (0x0002ecfb) field_cale_ev2_pane_g4_ParamLimits

0xcc66,	// (0x0002ecfb) field_cale_ev2_pane_g4

0x76f6,	// (0x0002978b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x76f6,	// (0x0002978b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x000318dc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x000318dc) cell_video_dialer_keypad_pane_g

0x770e,	// (0x000297a3) cell_video_dialer_keypad_pane_t1

0x3237,	// (0x000252cc) bg_popup_window_pane_cp012

0xac5b,	// (0x0002ccf0) heading_pane_cp06

0xe29f,	// (0x00030334) ncim_query_content_pane

0x3237,	// (0x000252cc) bg_popup_heading_pane_cp01

0xe2a7,	// (0x0003033c) ncim_heading_pane_t1

0xe2b5,	// (0x0003034a) ncim_indicator_popup_pane

0xe2c7,	// (0x0003035c) ncim_query_button_pane

0xe2db,	// (0x00030370) ncim_query_content_pane_t1

0xe2ed,	// (0x00030382) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x00031c46) ncim_query_content_pane_t

0xe327,	// (0x000303bc) ncim_query_list_pane

0xe339,	// (0x000303ce) ncim_query_popup_pane

0xe2b5,	// (0x0003034a) ncim_indicator_popup_pane_ParamLimits

0x8b8f,	// (0x0002ac24) ncim_query_content_pane_g1_ParamLimits

0x8b8f,	// (0x0002ac24) ncim_query_content_pane_g1

0xe2db,	// (0x00030370) ncim_query_content_pane_t1_ParamLimits

0xe2ed,	// (0x00030382) ncim_query_content_pane_t2_ParamLimits

0x8b9b,	// (0x0002ac30) ncim_query_content_pane_t3_ParamLimits

0x8b9b,	// (0x0002ac30) ncim_query_content_pane_t3

0x8bc3,	// (0x0002ac58) ncim_query_content_pane_t4_ParamLimits

0x8bc3,	// (0x0002ac58) ncim_query_content_pane_t4

0x8beb,	// (0x0002ac80) ncim_query_content_pane_t5_ParamLimits

0x8beb,	// (0x0002ac80) ncim_query_content_pane_t5

0xe2ff,	// (0x00030394) ncim_query_content_pane_t6_ParamLimits

0xe2ff,	// (0x00030394) ncim_query_content_pane_t6

0xfbb1,	// (0x00031c46) ncim_query_content_pane_t_ParamLimits

0xe327,	// (0x000303bc) ncim_query_list_pane_ParamLimits

0xe339,	// (0x000303ce) ncim_query_popup_pane_ParamLimits

0xe34d,	// (0x000303e2) wait_bar_pane_cp04

0x3237,	// (0x000252cc) input_focus_pane_cp011

0xe355,	// (0x000303ea) ncim_query_popup_pane_t1

0xe363,	// (0x000303f8) ncim_list_query_list_pane_ParamLimits

0xe363,	// (0x000303f8) ncim_list_query_list_pane

0x3237,	// (0x000252cc) bg_button_pane_cp027

0xe376,	// (0x0003040b) ncim_query_button_pane_g1

0x3237,	// (0x000252cc) list_highlight_pane_cp012

0xe380,	// (0x00030415) ncim_list_query_list_pane_g1

0xe388,	// (0x0003041d) ncim_list_query_list_pane_t1

0xd5be,	// (0x0002f653) cam4_indicators_pane_g3_ParamLimits

0xd5be,	// (0x0002f653) cam4_indicators_pane_g3

0xd61d,	// (0x0002f6b2) vid4_indicators_pane_g5_ParamLimits

0xd61d,	// (0x0002f6b2) vid4_indicators_pane_g5

0xdcc7,	// (0x0002fd5c) vid4_progress_pane_g5_ParamLimits

0xdcc7,	// (0x0002fd5c) vid4_progress_pane_g5

0x8a7f,	// (0x0002ab14) main_ncimui_pane_g1

0x8ae5,	// (0x0002ab7a) ncimui_group_query_pane_ParamLimits

0x8ae5,	// (0x0002ab7a) ncimui_group_query_pane

0x8b2d,	// (0x0002abc2) ncimui_list_pane_ParamLimits

0x8b2d,	// (0x0002abc2) ncimui_list_pane

0x8b52,	// (0x0002abe7) ncimui_text_pane_ParamLimits

0x8b52,	// (0x0002abe7) ncimui_text_pane

0x8c13,	// (0x0002aca8) ncimui_text_pane_t1_ParamLimits

0x8c13,	// (0x0002aca8) ncimui_text_pane_t1

0xe39f,	// (0x00030434) ncimui_list_single_graphic_pane_ParamLimits

0xe39f,	// (0x00030434) ncimui_list_single_graphic_pane

0x8c31,	// (0x0002acc6) ncimui_query_pane_ParamLimits

0x8c31,	// (0x0002acc6) ncimui_query_pane

0x3237,	// (0x000252cc) list_highlight_pane_cp013

0xe3af,	// (0x00030444) ncim_list_query_list_pane_t1_copy1

0xe3bd,	// (0x00030452) ncim_list_single_graphic_pane_g1

0xe3c5,	// (0x0003045a) ncim_query_button_pane_cp01

0xe3d1,	// (0x00030466) ncim_query_entry_pane_ParamLimits

0xe3d1,	// (0x00030466) ncim_query_entry_pane

0xe3e4,	// (0x00030479) ncimui_query_pane_g1

0xe3f0,	// (0x00030485) ncimui_query_pane_t1_ParamLimits

0xe3f0,	// (0x00030485) ncimui_query_pane_t1

0x42b0,	// (0x00026345) input_focus_pane_cp012

0xe409,	// (0x0003049e) ncim_query_entry_pane_t1

0x3b17,	// (0x00025bac) main_im_pane_ParamLimits

0xa9bb,	// (0x0002ca50) main_mobtv_pane_ParamLimits

0xa9bb,	// (0x0002ca50) main_mobtv_pane

0x7b24,	// (0x00029bb9) main_cset6_slider_pane_g18_ParamLimits

0x7b24,	// (0x00029bb9) main_cset6_slider_pane_g18

0x7b54,	// (0x00029be9) main_cset6_slider_pane_g19_ParamLimits

0x7b54,	// (0x00029be9) main_cset6_slider_pane_g19

0x39f3,	// (0x00025a88) bg_main_mobtv_pane_ParamLimits

0x39f3,	// (0x00025a88) bg_main_mobtv_pane

0x8c41,	// (0x0002acd6) main_mobtv_info_pane

0x8c4a,	// (0x0002acdf) main_mobtv_loading_pane_ParamLimits

0x8c4a,	// (0x0002acdf) main_mobtv_loading_pane

0xe41b,	// (0x000304b0) main_mobtv_pg_channel_list_pane

0xe425,	// (0x000304ba) main_mobtv_pg_hdr_pane

0x8c57,	// (0x0002acec) main_mobtv_programe_curr_pane_ParamLimits

0x8c57,	// (0x0002acec) main_mobtv_programe_curr_pane

0x8c64,	// (0x0002acf9) main_mobtv_programe_next_pane_ParamLimits

0x8c64,	// (0x0002acf9) main_mobtv_programe_next_pane

0xe42e,	// (0x000304c3) popup_mobtv_noti_window

0x44a0,	// (0x00026535) main_tv_pg_hdr_pane_g1

0xe436,	// (0x000304cb) main_tv_pg_hdr_pane_g2

0xe43e,	// (0x000304d3) main_tv_pg_hdr_pane_g3

0xe446,	// (0x000304db) main_tv_pg_hdr_pane_g4

0xe44e,	// (0x000304e3) main_tv_pg_hdr_pane_g5

0xe456,	// (0x000304eb) main_tv_pg_hdr_pane_g6

0xe45e,	// (0x000304f3) main_tv_pg_hdr_pane_g7

0xe466,	// (0x000304fb) main_tv_pg_hdr_pane_g8

0xe46e,	// (0x00030503) main_tv_pg_hdr_pane_g9

0xe476,	// (0x0003050b) main_tv_pg_hdr_pane_g10

0xe480,	// (0x00030515) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x00031c53) main_tv_pg_hdr_pane_g

0xe48a,	// (0x0003051f) main_tv_pg_hdr_pane_t1

0xe498,	// (0x0003052d) main_tv_pg_hdr_pane_t2

0xe4a6,	// (0x0003053b) main_tv_pg_hdr_pane_t3

0xe4b4,	// (0x00030549) main_tv_pg_hdr_pane_t4

0xe4c2,	// (0x00030557) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x00031c6a) main_tv_pg_hdr_pane_t

0xe4d0,	// (0x00030565) single_mobtv_pg_channel_pane_ParamLimits

0xe4d0,	// (0x00030565) single_mobtv_pg_channel_pane

0xe4e2,	// (0x00030577) single_mobtv_pg_channel_table_pane

0xe4eb,	// (0x00030580) single_mobtv_pg_channel_thumb_pane

0xe4f4,	// (0x00030589) single_tv_pg_channel_pane_g1

0xe4fd,	// (0x00030592) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x00031c75) single_tv_pg_channel_pane_g

0x39d7,	// (0x00025a6c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x39d7,	// (0x00025a6c) bg_single_mobtv_pg_channel_thumb_pane

0xe506,	// (0x0003059b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe506,	// (0x0003059b) single_mobtv_pg_channel_thumb_pane_g1

0xe514,	// (0x000305a9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe514,	// (0x000305a9) single_mobtv_pg_channel_thumb_pane_g2

0xe520,	// (0x000305b5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe520,	// (0x000305b5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x00031c7a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x00031c7a) single_mobtv_pg_channel_thumb_pane_g

0xe52c,	// (0x000305c1) single_mobtv_pg_channel_thumb_pane_t1

0xe53a,	// (0x000305cf) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x00031c81) single_mobtv_pg_channel_thumb_pane_t

0x44a0,	// (0x00026535) bg_single_mobtv_pg_channel_table_pane_g1

0x44a0,	// (0x00026535) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x00031484) bg_single_mobtv_pg_channel_table_pane_g

0xe548,	// (0x000305dd) single_mobtv_pg_channel_table_pane_t1

0xe556,	// (0x000305eb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x00031c86) single_mobtv_pg_channel_table_pane_t

0x8c79,	// (0x0002ad0e) main_mobtv_info_pane_g1_ParamLimits

0x8c79,	// (0x0002ad0e) main_mobtv_info_pane_g1

0x8c95,	// (0x0002ad2a) main_mobtv_info_pane_t1_ParamLimits

0x8c95,	// (0x0002ad2a) main_mobtv_info_pane_t1

0x8cfb,	// (0x0002ad90) main_mobtv_info_pane_t2_ParamLimits

0x8cfb,	// (0x0002ad90) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x00031c90) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x00031c90) main_mobtv_info_pane_t

0x8d7e,	// (0x0002ae13) wait_bar_pane_cp05

0x8d8e,	// (0x0002ae23) main_mobtv_loading_pane_g1_ParamLimits

0x8d8e,	// (0x0002ae23) main_mobtv_loading_pane_g1

0x8d9f,	// (0x0002ae34) main_mobtv_loading_pane_g2_ParamLimits

0x8d9f,	// (0x0002ae34) main_mobtv_loading_pane_g2

0x8dab,	// (0x0002ae40) main_mobtv_loading_pane_g3_ParamLimits

0x8dab,	// (0x0002ae40) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x00031c97) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x00031c97) main_mobtv_loading_pane_g

0xe564,	// (0x000305f9) main_mobtv_loading_pane_t1_ParamLimits

0xe564,	// (0x000305f9) main_mobtv_loading_pane_t1

0xe57c,	// (0x00030611) main_mobtv_loading_pane_t2_ParamLimits

0xe57c,	// (0x00030611) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x00031c9e) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x00031c9e) main_mobtv_loading_pane_t

0x8dbc,	// (0x0002ae51) wait_bar_pane_cp06_ParamLimits

0x8dbc,	// (0x0002ae51) wait_bar_pane_cp06

0xe5a0,	// (0x00030635) main_mobtv_programe_curr_pane_t1

0xe5ae,	// (0x00030643) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x00031ca3) main_mobtv_programe_curr_pane_t

0xe5bc,	// (0x00030651) main_mobtv_programe_next_pane_t1

0xe5ca,	// (0x0003065f) main_mobtv_programe_next_pane_t2

0xe5d8,	// (0x0003066d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x00031ca8) main_mobtv_programe_next_pane_t

0x3237,	// (0x000252cc) bg_popup_mobtv_noti_window_pane

0xe5e6,	// (0x0003067b) popup_mobtv_noti_window_g1

0xe5ee,	// (0x00030683) popup_mobtv_noti_window_t1

0xe5fc,	// (0x00030691) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x00031caf) popup_mobtv_noti_window_t

0x44a0,	// (0x00026535) bg_popup_mobtv_noti_window_pane_g1

0xa9c9,	// (0x0002ca5e) sc_clock_pane

0xa9c9,	// (0x0002ca5e) main_fs_bigclock_pane

0x85fa,	// (0x0002a68f) blid2_tripm_pane_t4_ParamLimits

0x85fa,	// (0x0002a68f) blid2_tripm_pane_t4

0x8dcb,	// (0x0002ae60) sc_clock_pane_g1_ParamLimits

0x8dcb,	// (0x0002ae60) sc_clock_pane_g1

0x8ddd,	// (0x0002ae72) sc_clock_pane_t1_ParamLimits

0x8ddd,	// (0x0002ae72) sc_clock_pane_t1

0x8dff,	// (0x0002ae94) sc_clock_pane_t2_ParamLimits

0x8dff,	// (0x0002ae94) sc_clock_pane_t2

0x8e15,	// (0x0002aeaa) sc_clock_pane_t3_ParamLimits

0x8e15,	// (0x0002aeaa) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x00031cb4) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x00031cb4) sc_clock_pane_t

0x9c0b,	// (0x0002bca0) main_fs_bigclock_indicator_pane_ParamLimits

0x9c0b,	// (0x0002bca0) main_fs_bigclock_indicator_pane

0x8eb1,	// (0x0002af46) main_fs_bigclock_pane_g1_ParamLimits

0x8eb1,	// (0x0002af46) main_fs_bigclock_pane_g1

0x9c17,	// (0x0002bcac) main_fs_bigclock_pane_t1_ParamLimits

0x9c17,	// (0x0002bcac) main_fs_bigclock_pane_t1

0x9c29,	// (0x0002bcbe) main_fs_bigclock_pane_t2_ParamLimits

0x9c29,	// (0x0002bcbe) main_fs_bigclock_pane_t2

0x9c3b,	// (0x0002bcd0) main_fs_bigclock_pane_t3_ParamLimits

0x9c3b,	// (0x0002bcd0) main_fs_bigclock_pane_t3

0x0002,

0xfde3,	// (0x00031e78) main_fs_bigclock_pane_t_ParamLimits

0xfde3,	// (0x00031e78) main_fs_bigclock_pane_t

0x000e,	// (0x000220a3) main_fs_bigclock_indicator_pane_g1

0xe2cf,	// (0x00030364) ncim_query_content_pane_g2_ParamLimits

0xe2cf,	// (0x00030364) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x00031c41) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x00031c41) ncim_query_content_pane_g

0x8e2c,	// (0x0002aec1) sc_clock_pane_t4_ParamLimits

0x8e2c,	// (0x0002aec1) sc_clock_pane_t4

0xa9bb,	// (0x0002ca50) main_radioblah_pane

0xd4f8,	// (0x0002f58d) cell_call4_button_pane_t1_copy1_ParamLimits

0xd4f8,	// (0x0002f58d) cell_call4_button_pane_t1_copy1

0x8a97,	// (0x0002ab2c) main_ncimui_pane_t1_ParamLimits

0x8a97,	// (0x0002ab2c) main_ncimui_pane_t1

0x8ab1,	// (0x0002ab46) main_ncimui_pane_t2_ParamLimits

0x8ab1,	// (0x0002ab46) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x00031c3a) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x00031c3a) main_ncimui_pane_t

0xe73d,	// (0x000307d2) main_radioblah_anim_pane_ParamLimits

0xe73d,	// (0x000307d2) main_radioblah_anim_pane

0xe74e,	// (0x000307e3) main_radioblah_info_pane_ParamLimits

0xe74e,	// (0x000307e3) main_radioblah_info_pane

0xe762,	// (0x000307f7) main_radioblah_pane_t1_ParamLimits

0xe762,	// (0x000307f7) main_radioblah_pane_t1

0xe77e,	// (0x00030813) main_radioblah_pane_t2_ParamLimits

0xe77e,	// (0x00030813) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x00031cd5) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x00031cd5) main_radioblah_pane_t

0x8efb,	// (0x0002af90) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8efb,	// (0x0002af90) main_radioblah_rocker_ctrl_pane

0xe7c6,	// (0x0003085b) main_radioblah_info_pane_t1_ParamLimits

0xe7c6,	// (0x0003085b) main_radioblah_info_pane_t1

0x8f4f,	// (0x0002afe4) main_radioblah_info_pane_t2_ParamLimits

0x8f4f,	// (0x0002afe4) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x00031cde) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x00031cde) main_radioblah_info_pane_t

0x44a0,	// (0x00026535) main_radioblah_rocker_ctrl_pane_g1

0x8ffd,	// (0x0002b092) main_radioblah_rocker_ctrl_pane_g2

0x9005,	// (0x0002b09a) main_radioblah_rocker_ctrl_pane_g3

0x900d,	// (0x0002b0a2) main_radioblah_rocker_ctrl_pane_g4

0x9015,	// (0x0002b0aa) main_radioblah_rocker_ctrl_pane_g5

0x901d,	// (0x0002b0b2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x00031ce7) main_radioblah_rocker_ctrl_pane_g

0x8a50,	// (0x0002aae5) main_cset_text2_pane_t1_copy1_ParamLimits

0xd580,	// (0x0002f615) cam4_image_uncrop_qvga_pane

0xd5e8,	// (0x0002f67d) vid4_image_uncrop_qcif_pane

0xdeab,	// (0x0002ff40) cam6_image_uncrop_qvga_pane_ParamLimits

0xdeab,	// (0x0002ff40) cam6_image_uncrop_qvga_pane

0xdf7f,	// (0x00030014) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf7f,	// (0x00030014) vid6_image_uncrop_qcif_pane

0x3237,	// (0x000252cc) bg_popup_preview_window_pane_cp03

0xe275,	// (0x0003030a) list_cset_text2_pane

0xe27d,	// (0x00030312) main_cset6_text2_pane_g1

0xe285,	// (0x0003031a) main_cset6_text2_pane_t1

0x9025,	// (0x0002b0ba) list_cset_text2_pane_t1_ParamLimits

0x9025,	// (0x0002b0ba) list_cset_text2_pane_t1

0xa9bb,	// (0x0002ca50) main_radioblah_pane_ParamLimits

0x8d6c,	// (0x0002ae01) main_mobtv_info_pane_t3_ParamLimits

0x8d6c,	// (0x0002ae01) main_mobtv_info_pane_t3

0x8ee9,	// (0x0002af7e) main_radioblah_pane_g1

0x8f23,	// (0x0002afb8) main_radioblah_info_pane_g1

0x8fa2,	// (0x0002b037) main_radioblah_info_pane_t3_ParamLimits

0x8fa2,	// (0x0002b037) main_radioblah_info_pane_t3

0x55c7,	// (0x0002765c) highlight_cell_cale_month_pane_ParamLimits

0x55c7,	// (0x0002765c) highlight_cell_cale_month_pane

0xa9c9,	// (0x0002ca5e) main_phob_fisheye_pane

0xcd07,	// (0x0002ed9c) scroll_pane_cp0031_ParamLimits

0xcd07,	// (0x0002ed9c) scroll_pane_cp0031

0xe089,	// (0x0003011e) wait_bar_pane_cp08_ParamLimits

0x88bf,	// (0x0002a954) cset_list_set_pane_copy1_ParamLimits

0xe800,	// (0x00030895) highlight_cell_cale_month_pane_g1

0x903e,	// (0x0002b0d3) highlight_cell_cale_month_pane_t1

0xe808,	// (0x0003089d) list_gen_pane_cp01

0xd7dd,	// (0x0002f872) scroll_pane_01

0x904c,	// (0x0002b0e1) list_single_double_fisheye_pane

0x9055,	// (0x0002b0ea) list_double_fisheye_pane_g1_ParamLimits

0x9055,	// (0x0002b0ea) list_double_fisheye_pane_g1

0x9061,	// (0x0002b0f6) list_double_fisheye_pane_g2_ParamLimits

0x9061,	// (0x0002b0f6) list_double_fisheye_pane_g2

0x906d,	// (0x0002b102) list_double_fisheye_pane_g3_ParamLimits

0x906d,	// (0x0002b102) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x00031cf4) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x00031cf4) list_double_fisheye_pane_g

0x9091,	// (0x0002b126) list_double_fisheye_pane_t1_ParamLimits

0x9091,	// (0x0002b126) list_double_fisheye_pane_t1

0x90ac,	// (0x0002b141) list_double_fisheye_pane_t2_ParamLimits

0x90ac,	// (0x0002b141) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x00031cff) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x00031cff) list_double_fisheye_pane_t

0xa9c9,	// (0x0002ca5e) main_call5_pane

0x8e55,	// (0x0002aeea) sc_swipe_pane_ParamLimits

0x8e55,	// (0x0002aeea) sc_swipe_pane

0x90df,	// (0x0002b174) call5_image_pane_ParamLimits

0x90df,	// (0x0002b174) call5_image_pane

0x90f4,	// (0x0002b189) call5_swipe_1_pane_ParamLimits

0x90f4,	// (0x0002b189) call5_swipe_1_pane

0x9105,	// (0x0002b19a) call5_swipe_2_pane_ParamLimits

0x9105,	// (0x0002b19a) call5_swipe_2_pane

0x912a,	// (0x0002b1bf) popup_call5_audio_first_window_ParamLimits

0x912a,	// (0x0002b1bf) popup_call5_audio_first_window

0x39d7,	// (0x00025a6c) call5_swipe_1_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) call5_swipe_1_pane_g1

0xe811,	// (0x000308a6) call5_swipe_1_pane_g2_ParamLimits

0xe811,	// (0x000308a6) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x00031d04) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x00031d04) call5_swipe_1_pane_g

0xe81d,	// (0x000308b2) call5_swipe_1_pane_t1_ParamLimits

0xe81d,	// (0x000308b2) call5_swipe_1_pane_t1

0x39d7,	// (0x00025a6c) call5_swipe_2_pane_g1_ParamLimits

0x39d7,	// (0x00025a6c) call5_swipe_2_pane_g1

0xe832,	// (0x000308c7) call5_swipe_2_pane_g2_ParamLimits

0xe832,	// (0x000308c7) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x00031d09) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x00031d09) call5_swipe_2_pane_g

0xe83e,	// (0x000308d3) call5_swipe_2_pane_t1_ParamLimits

0xe83e,	// (0x000308d3) call5_swipe_2_pane_t1

0xe853,	// (0x000308e8) sc_swipe_pane_g1_ParamLimits

0xe853,	// (0x000308e8) sc_swipe_pane_g1

0xe860,	// (0x000308f5) sc_swipe_pane_g2_ParamLimits

0xe860,	// (0x000308f5) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x00031d0e) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x00031d0e) sc_swipe_pane_g

0xe86c,	// (0x00030901) sc_swipe_pane_t1_ParamLimits

0xe86c,	// (0x00030901) sc_swipe_pane_t1

0xa9c9,	// (0x0002ca5e) main_cmail_launcher_pane

0x9139,	// (0x0002b1ce) aid_size_cell_cmail_l_ParamLimits

0x9139,	// (0x0002b1ce) aid_size_cell_cmail_l

0x9152,	// (0x0002b1e7) grid_cmail_l_pane_ParamLimits

0x9152,	// (0x0002b1e7) grid_cmail_l_pane

0x9167,	// (0x0002b1fc) cell_cmail_l_pane_ParamLimits

0x9167,	// (0x0002b1fc) cell_cmail_l_pane

0x9189,	// (0x0002b21e) cell_cmail_l_pane_g1_ParamLimits

0x9189,	// (0x0002b21e) cell_cmail_l_pane_g1

0x9199,	// (0x0002b22e) cell_cmail_l_pane_t1_ParamLimits

0x9199,	// (0x0002b22e) cell_cmail_l_pane_t1

0x91af,	// (0x0002b244) cell_cmail_l_pane_t2_ParamLimits

0x91af,	// (0x0002b244) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x00031d13) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x00031d13) cell_cmail_l_pane_t

0x42b0,	// (0x00026345) grid_highlight_pane_cp018_ParamLimits

0x42b0,	// (0x00026345) grid_highlight_pane_cp018

0x2010,	// (0x000240a5) main2_pane_ParamLimits

0x2010,	// (0x000240a5) main2_pane

0x3c83,	// (0x00025d18) popup_sp_fs_action_menu_bg_pane_g1

0x3c8b,	// (0x00025d20) popup_sp_fs_action_menu_bg_pane_g2

0x3c93,	// (0x00025d28) popup_sp_fs_action_menu_bg_pane_g3

0x3c9b,	// (0x00025d30) popup_sp_fs_action_menu_bg_pane_g4

0x3ca3,	// (0x00025d38) popup_sp_fs_action_menu_bg_pane_g5

0x3cab,	// (0x00025d40) popup_sp_fs_action_menu_bg_pane_g6

0x3cb3,	// (0x00025d48) popup_sp_fs_action_menu_bg_pane_g7

0x3cbb,	// (0x00025d50) popup_sp_fs_action_menu_bg_pane_g8

0x3cc3,	// (0x00025d58) popup_sp_fs_action_menu_bg_pane_g9

0x3ccb,	// (0x00025d60) popup_sp_fs_action_menu_bg_pane_g10

0x3ccb,	// (0x00025d60) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x000311da) popup_sp_fs_action_menu_bg_pane_g

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g3_g1

0x451e,	// (0x000265b3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t3_g3_g2

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00031288) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00031288) list_medium_line_x2_t3_g3_g

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g3_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g3_t1

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g3_t2

0x453d,	// (0x000265d2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0003128f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0003128f) list_medium_line_x2_t3_g3_t

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g2_g1

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00031296) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00031296) list_medium_line_x2_t3_g2_g

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g2_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g2_t1

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g2_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g2_t2

0x453d,	// (0x000265d2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0003128f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0003128f) list_medium_line_x2_t3_g2_t

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g4_g1

0x451e,	// (0x000265b3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t4_g4_g2

0x451e,	// (0x000265b3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t4_g4_g3

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0003129b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0003129b) list_medium_line_x2_t4_g4_g

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g4_t1

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g4_t2

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g4_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g4_t3

0x453d,	// (0x000265d2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x000312a4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x000312a4) list_medium_line_x2_t4_g4_t

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g4_g1

0x451e,	// (0x000265b3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t2_g4_g2

0x451e,	// (0x000265b3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t2_g4_g3

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0003129b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0003129b) list_medium_line_x2_t2_g4_g

0x452a,	// (0x000265bf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t2_g4_t1

0x453d,	// (0x000265d2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0003130b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0003130b) list_medium_line_x2_t2_g4_t

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g3_g1

0x451e,	// (0x000265b3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t2_g3_g2

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00031288) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00031288) list_medium_line_x2_t2_g3_g

0x452a,	// (0x000265bf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t2_g3_t1

0x453d,	// (0x000265d2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0003130b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0003130b) list_medium_line_x2_t2_g3_t

0x5916,	// (0x000279ab) main_sp_fs_list_pane_ParamLimits

0x5916,	// (0x000279ab) main_sp_fs_list_pane

0x5923,	// (0x000279b8) sp_fs_scroll_pane_ParamLimits

0x5923,	// (0x000279b8) sp_fs_scroll_pane

0x5930,	// (0x000279c5) list_medium_line_x2_t3_t1

0x5930,	// (0x000279c5) list_medium_line_x2_t3_t2

0x593f,	// (0x000279d4) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00031356) list_medium_line_x2_t3_t

0x5930,	// (0x000279c5) list_medium_line_x3_t4_t1

0x5930,	// (0x000279c5) list_medium_line_x3_t4_t2

0x5930,	// (0x000279c5) list_medium_line_x3_t4_t3

0x5930,	// (0x000279c5) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0003135d) list_medium_line_x3_t4_t

0x5930,	// (0x000279c5) list_medium_line_x4_t5_t1

0x5930,	// (0x000279c5) list_medium_line_x4_t5_t2

0x5930,	// (0x000279c5) list_medium_line_x4_t5_t3

0x5930,	// (0x000279c5) list_medium_line_x4_t5_t4

0x5930,	// (0x000279c5) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00031366) list_medium_line_x4_t5_t

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g1

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g2_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g2

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g3_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g3

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g4_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x00031371) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x00031371) list_medium_line_t4_g4_g

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t1

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t2

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t3

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t4_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x0003137a) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x0003137a) list_medium_line_t4_g4_t

0x5a5d,	// (0x00027af2) chi_dic_find_pane_g1

0x24be,	// (0x00024553) main_tport_pane

0x5930,	// (0x000279c5) list_medium_line_plain_t1

0x4512,	// (0x000265a7) list_medium_line_t2_g2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t2_g2_g1

0xd96a,	// (0x0002f9ff) list_medium_line_t2_g2_g2_ParamLimits

0xd96a,	// (0x0002f9ff) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x00031a4b) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x00031a4b) list_medium_line_t2_g2_g

0x452a,	// (0x000265bf) list_medium_line_t2_g2_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t2_g2_t1

0x452a,	// (0x000265bf) list_medium_line_t2_g2_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x00031a50) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x00031a50) list_medium_line_t2_g2_t

0xdd23,	// (0x0002fdb8) aid_sp_fs_list_icon_a_sm

0xdd2b,	// (0x0002fdc0) aid_sp_fs_list_icon_d

0xdd33,	// (0x0002fdc8) aid_sp_fs_text_primary

0xdd3c,	// (0x0002fdd1) aid_sp_fs_text_secondary

0xdd45,	// (0x0002fdda) list_medium_line

0xdd45,	// (0x0002fdda) list_medium_line_g2

0xdd45,	// (0x0002fdda) list_medium_line_g3

0xdd45,	// (0x0002fdda) list_medium_line_plain

0xdd45,	// (0x0002fdda) list_medium_line_plain_t2

0xdd45,	// (0x0002fdda) list_medium_line_plain_t3

0xdd45,	// (0x0002fdda) list_medium_line_right_icon

0xdd45,	// (0x0002fdda) list_medium_line_right_iconx2

0xdd45,	// (0x0002fdda) list_medium_line_t2

0xdd45,	// (0x0002fdda) list_medium_line_t2_g2

0xdd45,	// (0x0002fdda) list_medium_line_t2_g3

0xdd45,	// (0x0002fdda) list_medium_line_t2_right_icon

0xdd45,	// (0x0002fdda) list_medium_line_t2_right_iconx2

0xdd45,	// (0x0002fdda) list_medium_line_t3

0xdd45,	// (0x0002fdda) list_medium_line_t3_g2

0xdd45,	// (0x0002fdda) list_medium_line_t3_g3

0xdd45,	// (0x0002fdda) list_medium_line_t3_right_iconx2

0x83a5,	// (0x0002a43a) list_medium_line_t4_g4

0xdd45,	// (0x0002fdda) list_medium_line_x2

0xdd45,	// (0x0002fdda) list_medium_line_x2_t2_g2

0xdd45,	// (0x0002fdda) list_medium_line_x2_t2_g3

0xdd45,	// (0x0002fdda) list_medium_line_x2_t2_g4

0xdd45,	// (0x0002fdda) list_medium_line_x2_t3

0xdd45,	// (0x0002fdda) list_medium_line_x2_t3_g2

0xdd45,	// (0x0002fdda) list_medium_line_x2_t3_g3

0xdd45,	// (0x0002fdda) list_medium_line_x2_t3_g4

0xdd45,	// (0x0002fdda) list_medium_line_x2_t4_g2

0xdd45,	// (0x0002fdda) list_medium_line_x2_t4_g4

0x83ae,	// (0x0002a443) list_medium_line_x3

0x83ae,	// (0x0002a443) list_medium_line_x3_t4

0x83ae,	// (0x0002a443) list_medium_line_x3_t4_g4

0x83a5,	// (0x0002a43a) list_medium_line_x4_t4

0x83a5,	// (0x0002a43a) list_medium_line_x4_t4_g7

0x83a5,	// (0x0002a43a) list_medium_line_x4_t5

0x83b7,	// (0x0002a44c) list_single_fs_dyc_pane_ParamLimits

0x83b7,	// (0x0002a44c) list_single_fs_dyc_pane

0x4512,	// (0x000265a7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x4_t4_g7_g1

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g2

0x451e,	// (0x000265b3) list_medium_line_x4_t4_g7_g3_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x4_t4_g7_g3

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g4

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g5

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x39d7,	// (0x00025a6c) list_medium_line_x4_t4_g7_g6

0x39e5,	// (0x00025a7a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x39e5,	// (0x00025a7a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x00031c1b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x00031c1b) list_medium_line_x4_t4_g7_g

0x452a,	// (0x000265bf) list_medium_line_x4_t4_g7_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x4_t4_g7_t1

0x452a,	// (0x000265bf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x4_t4_g7_t2

0x452a,	// (0x000265bf) list_medium_line_x4_t4_g7_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x4_t4_g7_t3

0xe24f,	// (0x000302e4) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe24f,	// (0x000302e4) list_medium_line_x4_t4_g7_t4

0xe262,	// (0x000302f7) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe262,	// (0x000302f7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x00031c2a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x00031c2a) list_medium_line_x4_t4_g7_t

0x8a33,	// (0x0002aac8) list_single_dyc_row_pane_ParamLimits

0x8a33,	// (0x0002aac8) list_single_dyc_row_pane

0x90ce,	// (0x0002b163) call5_gesture_pane_ParamLimits

0x90ce,	// (0x0002b163) call5_gesture_pane

0x9116,	// (0x0002b1ab) call5_windows_pane_ParamLimits

0x9116,	// (0x0002b1ab) call5_windows_pane

0x91c7,	// (0x0002b25c) call5_swipe_1_pane_cp_ParamLimits

0x91c7,	// (0x0002b25c) call5_swipe_1_pane_cp

0x91d3,	// (0x0002b268) call5_swipe_2_pane_cp_ParamLimits

0x91d3,	// (0x0002b268) call5_swipe_2_pane_cp

0x4247,	// (0x000262dc) call5_image_pane_cp

0x91df,	// (0x0002b274) popup_call5_audio_first_window_cp_ParamLimits

0x91df,	// (0x0002b274) popup_call5_audio_first_window_cp

0xe853,	// (0x000308e8) call5_swipe_1_pane_g1_cp_ParamLimits

0xe853,	// (0x000308e8) call5_swipe_1_pane_g1_cp

0xe881,	// (0x00030916) call5_swipe_1_pane_g2_cp

0xe86c,	// (0x00030901) call5_swipe_1_pane_t1_cp_ParamLimits

0xe86c,	// (0x00030901) call5_swipe_1_pane_t1_cp

0xe853,	// (0x000308e8) call5_swipe_2_pane_g1_cp_ParamLimits

0xe853,	// (0x000308e8) call5_swipe_2_pane_g1_cp

0xe889,	// (0x0003091e) call5_swipe_2_pane_g2_cp

0xe891,	// (0x00030926) call5_swipe_2_pane_t1_cp_ParamLimits

0xe891,	// (0x00030926) call5_swipe_2_pane_t1_cp

0x42b0,	// (0x00026345) main_sp_fs_email_pane

0xe8a6,	// (0x0003093b) main_sp_fs_listscroll_pane_te

0x91eb,	// (0x0002b280) popup_sp_fs_action_menu_pane_ParamLimits

0x91eb,	// (0x0002b280) popup_sp_fs_action_menu_pane

0x44a0,	// (0x00026535) bg_sp_fs_ctrlbar_pane_g1

0xcf3b,	// (0x0002efd0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcf4d,	// (0x0002efe2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcf44,	// (0x0002efd9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x44a0,	// (0x00026535) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x00031d18) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc7c9,	// (0x0002e85e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc7c9,	// (0x0002e85e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe8af,	// (0x00030944) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe8af,	// (0x00030944) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe8bb,	// (0x00030950) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe8bb,	// (0x00030950) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x00031d21) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x00031d21) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe8c7,	// (0x0003095c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe8c7,	// (0x0003095c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe8e1,	// (0x00030976) list_medium_line_t2_right_icon_g1

0x5930,	// (0x000279c5) list_medium_line_t2_right_icon_t1

0x5930,	// (0x000279c5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x00031d26) list_medium_line_t2_right_icon_t

0xb078,	// (0x0002d10d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb078,	// (0x0002d10d) bg_sp_fs_ctrlbar_pane

0x9263,	// (0x0002b2f8) main_sp_fs_ctrlbar_button_pane_cp01

0x926b,	// (0x0002b300) main_sp_fs_ctrlbar_ddmenu_pane

0xe921,	// (0x000309b6) main_sp_fs_ctrlbar_pane_g1

0xe92d,	// (0x000309c2) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x00031d2b) main_sp_fs_ctrlbar_pane_g

0x92a7,	// (0x0002b33c) main_sp_fs_ctrlbar_pane_t1

0x92f0,	// (0x0002b385) main_sp_fs_ctrlbar_pane

0x9311,	// (0x0002b3a6) main_sp_fs_listscroll_pane_te_cp01

0x9331,	// (0x0002b3c6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9331,	// (0x0002b3c6) popup_sp_fs_action_menu_pane_cp01

0x42b0,	// (0x00026345) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x42b0,	// (0x00026345) bg_sp_fs_highlight_list_pane_cp01

0x935b,	// (0x0002b3f0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x935b,	// (0x0002b3f0) sp_fs_action_menu_list_gene_pane_g1

0xe954,	// (0x000309e9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe954,	// (0x000309e9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x00031d39) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x00031d39) sp_fs_action_menu_list_gene_pane_g

0x936a,	// (0x0002b3ff) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x936a,	// (0x0002b3ff) sp_fs_action_menu_list_gene_pane_t1

0x9382,	// (0x0002b417) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9382,	// (0x0002b417) sp_fs_action_menu_list_gene_pane

0xe961,	// (0x000309f6) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe961,	// (0x000309f6) popup_sp_fs_action_menu_bg_pane

0x939f,	// (0x0002b434) sp_fs_action_menu_list_pane_ParamLimits

0x939f,	// (0x0002b434) sp_fs_action_menu_list_pane

0xe96f,	// (0x00030a04) sp_fs_scroll_pane_cp01_ParamLimits

0xe96f,	// (0x00030a04) sp_fs_scroll_pane_cp01

0x5930,	// (0x000279c5) list_medium_line_plain_t2_t1

0x5930,	// (0x000279c5) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x00031d26) list_medium_line_plain_t2_t

0x5930,	// (0x000279c5) list_medium_line_plain_t3_t1

0x5930,	// (0x000279c5) list_medium_line_plain_t3_t2

0x5930,	// (0x000279c5) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x00031d3e) list_medium_line_plain_t3_t

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g2_g1

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00031296) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00031296) list_medium_line_x2_t2_g2_g

0x452a,	// (0x000265bf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t2_g2_t1

0x453d,	// (0x000265d2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0003130b) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0003130b) list_medium_line_x2_t2_g2_t

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g2_g1

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00031296) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00031296) list_medium_line_x2_t4_g2_g

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g2_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g2_t1

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g2_t2

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g2_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t4_g2_t3

0x453d,	// (0x000265d2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x000312a4) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x000312a4) list_medium_line_x2_t4_g2_t

0xe8e1,	// (0x00030976) list_medium_line_t3_right_iconx2_g1

0x44a0,	// (0x00026535) list_medium_line_t3_right_iconx2_g2

0xe995,	// (0x00030a2a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb0,	// (0x00031d45) list_medium_line_t3_right_iconx2_g

0x5930,	// (0x000279c5) list_medium_line_t3_right_iconx2_t1

0x5930,	// (0x000279c5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x00031d26) list_medium_line_t3_right_iconx2_t

0x4512,	// (0x000265a7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x3_t4_g4_g1

0x451e,	// (0x000265b3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x3_t4_g4_g2

0x4512,	// (0x000265a7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x3_t4_g4_g3

0x451e,	// (0x000265b3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcb7,	// (0x00031d4c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcb7,	// (0x00031d4c) list_medium_line_x3_t4_g4_g

0x452a,	// (0x000265bf) list_medium_line_x3_t4_g4_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x3_t4_g4_t1

0x452a,	// (0x000265bf) list_medium_line_x3_t4_g4_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x3_t4_g4_t2

0x452a,	// (0x000265bf) list_medium_line_x3_t4_g4_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x3_t4_g4_t3

0xe99e,	// (0x00030a33) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe99e,	// (0x00030a33) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc0,	// (0x00031d55) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc0,	// (0x00031d55) list_medium_line_x3_t4_g4_t

0x93bd,	// (0x0002b452) list_single_dyc_row_text_pane_t1_ParamLimits

0x93bd,	// (0x0002b452) list_single_dyc_row_text_pane_t1

0x93f4,	// (0x0002b489) list_single_dyc_row_text_pane_t2_ParamLimits

0x93f4,	// (0x0002b489) list_single_dyc_row_text_pane_t2

0xe9bb,	// (0x00030a50) list_single_dyc_row_text_pane_t3_ParamLimits

0xe9bb,	// (0x00030a50) list_single_dyc_row_text_pane_t3

0x0005,

0xfcc9,	// (0x00031d5e) list_single_dyc_row_text_pane_t_ParamLimits

0xfcc9,	// (0x00031d5e) list_single_dyc_row_text_pane_t

0xe9df,	// (0x00030a74) list_single_dyc_row_pane_g1_ParamLimits

0xe9df,	// (0x00030a74) list_single_dyc_row_pane_g1

0xe9eb,	// (0x00030a80) list_single_dyc_row_pane_g2_ParamLimits

0xe9eb,	// (0x00030a80) list_single_dyc_row_pane_g2

0xe9f7,	// (0x00030a8c) list_single_dyc_row_pane_g3_ParamLimits

0xe9f7,	// (0x00030a8c) list_single_dyc_row_pane_g3

0xea03,	// (0x00030a98) list_single_dyc_row_pane_g4_ParamLimits

0xea03,	// (0x00030a98) list_single_dyc_row_pane_g4

0x0003,

0xfcd6,	// (0x00031d6b) list_single_dyc_row_pane_g_ParamLimits

0xfcd6,	// (0x00031d6b) list_single_dyc_row_pane_g

0xea0f,	// (0x00030aa4) list_single_dyc_row_text_pane_ParamLimits

0xea0f,	// (0x00030aa4) list_single_dyc_row_text_pane

0x3237,	// (0x000252cc) bg_sp_fs_scroll_pane

0xea2e,	// (0x00030ac3) thumb_sp_fs_scroll_pane

0x4512,	// (0x000265a7) list_medium_line_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_g1

0x452a,	// (0x000265bf) list_medium_line_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t1

0x4512,	// (0x000265a7) list_medium_line_x2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_g1

0xd96a,	// (0x0002f9ff) list_medium_line_x2_g2_ParamLimits

0xd96a,	// (0x0002f9ff) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x00031a4b) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x00031a4b) list_medium_line_x2_g

0x42d1,	// (0x00026366) list_medium_line_x2_t1_ParamLimits

0x42d1,	// (0x00026366) list_medium_line_x2_t1

0x4512,	// (0x000265a7) list_medium_line_x3_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x3_g1

0xea37,	// (0x00030acc) list_medium_line_x3_g2_ParamLimits

0xea37,	// (0x00030acc) list_medium_line_x3_g2

0x0001,

0xfcdf,	// (0x00031d74) list_medium_line_x3_g_ParamLimits

0xfcdf,	// (0x00031d74) list_medium_line_x3_g

0xea44,	// (0x00030ad9) list_medium_line_x3_t1_ParamLimits

0xea44,	// (0x00030ad9) list_medium_line_x3_t1

0xea58,	// (0x00030aed) thumb_sp_fs_scroll_pane_g1

0xea61,	// (0x00030af6) thumb_sp_fs_scroll_pane_g2

0xea6a,	// (0x00030aff) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce4,	// (0x00031d79) thumb_sp_fs_scroll_pane_g

0xea58,	// (0x00030aed) bg_sp_fs_scroll_pane_g1

0xea61,	// (0x00030af6) bg_sp_fs_scroll_pane_g2

0xea6a,	// (0x00030aff) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce4,	// (0x00031d79) bg_sp_fs_scroll_pane_g

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g4_g1

0x451e,	// (0x000265b3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t3_g4_g2

0x451e,	// (0x000265b3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_x2_t3_g4_g3

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0003129b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0003129b) list_medium_line_x2_t3_g4_g

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g4_t1

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g4_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_x2_t3_g4_t2

0x453d,	// (0x000265d2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x453d,	// (0x000265d2) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0003128f) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0003128f) list_medium_line_x2_t3_g4_t

0x4512,	// (0x000265a7) list_medium_line_g2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_g2_g1

0xd96a,	// (0x0002f9ff) list_medium_line_g2_g2_ParamLimits

0xd96a,	// (0x0002f9ff) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x00031a4b) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x00031a4b) list_medium_line_g2_g

0x452a,	// (0x000265bf) list_medium_line_g2_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_g2_t1

0x4512,	// (0x000265a7) list_medium_line_t3_g2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t3_g2_g1

0xd96a,	// (0x0002f9ff) list_medium_line_t3_g2_g2_ParamLimits

0xd96a,	// (0x0002f9ff) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x00031a4b) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x00031a4b) list_medium_line_t3_g2_g

0x452a,	// (0x000265bf) list_medium_line_t3_g2_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_g2_t1

0x452a,	// (0x000265bf) list_medium_line_t3_g2_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_g2_t2

0x452a,	// (0x000265bf) list_medium_line_t3_g2_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_g2_t3

0x0002,

0xfceb,	// (0x00031d80) list_medium_line_t3_g2_t_ParamLimits

0xfceb,	// (0x00031d80) list_medium_line_t3_g2_t

0xea73,	// (0x00030b08) list_medium_line_right_icon_g1

0x5930,	// (0x000279c5) list_medium_line_right_icon_t1

0x4512,	// (0x000265a7) list_medium_line_t2_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t2_g1

0x452a,	// (0x000265bf) list_medium_line_t2_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t2_t1

0x452a,	// (0x000265bf) list_medium_line_t2_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x00031a50) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x00031a50) list_medium_line_t2_t

0x4512,	// (0x000265a7) list_medium_line_t3_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t3_g1

0x452a,	// (0x000265bf) list_medium_line_t3_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_t1

0x452a,	// (0x000265bf) list_medium_line_t3_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_t2

0x452a,	// (0x000265bf) list_medium_line_t3_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_t3

0x0002,

0xfceb,	// (0x00031d80) list_medium_line_t3_t_ParamLimits

0xfceb,	// (0x00031d80) list_medium_line_t3_t

0x4512,	// (0x000265a7) list_medium_line_g3_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_g3_g1

0x451e,	// (0x000265b3) list_medium_line_g3_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_g3_g2

0x451e,	// (0x000265b3) list_medium_line_g3_g3_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_g3_g3

0x0002,

0xfcf2,	// (0x00031d87) list_medium_line_g3_g_ParamLimits

0xfcf2,	// (0x00031d87) list_medium_line_g3_g

0x452a,	// (0x000265bf) list_medium_line_g3_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_g3_t1

0x4512,	// (0x000265a7) list_medium_line_t2_g3_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t2_g3_g1

0x451e,	// (0x000265b3) list_medium_line_t2_g3_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_t2_g3_g2

0x451e,	// (0x000265b3) list_medium_line_t2_g3_g3_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_t2_g3_g3

0x0002,

0xfcf2,	// (0x00031d87) list_medium_line_t2_g3_g_ParamLimits

0xfcf2,	// (0x00031d87) list_medium_line_t2_g3_g

0x452a,	// (0x000265bf) list_medium_line_t2_g3_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t2_g3_t1

0x452a,	// (0x000265bf) list_medium_line_t2_g3_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x00031a50) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x00031a50) list_medium_line_t2_g3_t

0x4512,	// (0x000265a7) list_medium_line_t3_g3_g1_ParamLimits

0x4512,	// (0x000265a7) list_medium_line_t3_g3_g1

0x451e,	// (0x000265b3) list_medium_line_t3_g3_g2_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_t3_g3_g2

0x451e,	// (0x000265b3) list_medium_line_t3_g3_g3_ParamLimits

0x451e,	// (0x000265b3) list_medium_line_t3_g3_g3

0x0002,

0xfcf2,	// (0x00031d87) list_medium_line_t3_g3_g_ParamLimits

0xfcf2,	// (0x00031d87) list_medium_line_t3_g3_g

0x452a,	// (0x000265bf) list_medium_line_t3_g3_t1_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_g3_t1

0x452a,	// (0x000265bf) list_medium_line_t3_g3_t2_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_g3_t2

0x452a,	// (0x000265bf) list_medium_line_t3_g3_t3_ParamLimits

0x452a,	// (0x000265bf) list_medium_line_t3_g3_t3

0x0002,

0xfceb,	// (0x00031d80) list_medium_line_t3_g3_t_ParamLimits

0xfceb,	// (0x00031d80) list_medium_line_t3_g3_t

0xe8e1,	// (0x00030976) list_medium_line_right_iconx2_g1

0xe8e1,	// (0x00030976) list_medium_line_right_iconx2_g2

0x0001,

0xfcf9,	// (0x00031d8e) list_medium_line_right_iconx2_g

0xea7c,	// (0x00030b11) list_medium_line_right_iconx2_t1

0xe8e1,	// (0x00030976) list_medium_line_t2_right_iconx2_g1

0xe8e1,	// (0x00030976) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcf9,	// (0x00031d8e) list_medium_line_t2_right_iconx2_g

0x5930,	// (0x000279c5) list_medium_line_t2_right_iconx2_t1

0x5930,	// (0x000279c5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x00031d26) list_medium_line_t2_right_iconx2_t

0x5930,	// (0x000279c5) list_medium_line_x4_t4_t1

0x5930,	// (0x000279c5) list_medium_line_x4_t4_t2

0x5930,	// (0x000279c5) list_medium_line_x4_t4_t3

0x5930,	// (0x000279c5) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0003135d) list_medium_line_x4_t4_t

0x9550,	// (0x0002b5e5) tport_appsw_pane_ParamLimits

0x9550,	// (0x0002b5e5) tport_appsw_pane

0x9561,	// (0x0002b5f6) tport_contact_pane_ParamLimits

0x9561,	// (0x0002b5f6) tport_contact_pane

0x9575,	// (0x0002b60a) tport_listscroll_pane_ParamLimits

0x9575,	// (0x0002b60a) tport_listscroll_pane

0x958d,	// (0x0002b622) cell_tport_appsw_pane_ParamLimits

0x958d,	// (0x0002b622) cell_tport_appsw_pane

0xb034,	// (0x0002d0c9) tport_appsw_pane_g1_ParamLimits

0xb034,	// (0x0002d0c9) tport_appsw_pane_g1

0xea8b,	// (0x00030b20) tport_contact_pane_g1

0xea94,	// (0x00030b29) tport_contact_pane_t1

0xeaa2,	// (0x00030b37) tport_contact_pane_t2

0x0001,

0xfcfe,	// (0x00031d93) tport_contact_pane_t

0xeab0,	// (0x00030b45) list_tport_pane

0x3cdd,	// (0x00025d72) scroll_pane_cp_030

0xeac1,	// (0x00030b56) cell_tport_appsw_pane_g1

0xead1,	// (0x00030b66) cell_tport_appsw_pane_t1

0xeadf,	// (0x00030b74) grid_highlight_pane_cp019

0x95c3,	// (0x0002b658) list_tport_double_graphic_pane_ParamLimits

0x95c3,	// (0x0002b658) list_tport_double_graphic_pane

0x42b0,	// (0x00026345) list_highlight_pane_cp023_ParamLimits

0x42b0,	// (0x00026345) list_highlight_pane_cp023

0x95d0,	// (0x0002b665) list_tport_double_graphic_pane_g1_ParamLimits

0x95d0,	// (0x0002b665) list_tport_double_graphic_pane_g1

0x95dd,	// (0x0002b672) list_tport_double_graphic_pane_t1_ParamLimits

0x95dd,	// (0x0002b672) list_tport_double_graphic_pane_t1

0x95f2,	// (0x0002b687) list_tport_double_graphic_pane_t2_ParamLimits

0x95f2,	// (0x0002b687) list_tport_double_graphic_pane_t2

0x0001,

0xfd0a,	// (0x00031d9f) list_tport_double_graphic_pane_t_ParamLimits

0xfd0a,	// (0x00031d9f) list_tport_double_graphic_pane_t

0x3237,	// (0x000252cc) main_cale_note_pane

0x2ec4,	// (0x00024f59) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2ec4,	// (0x00024f59) cell_vitu2_function_top_wide_pane_cp01

0x8d7e,	// (0x0002ae13) wait_bar_pane_cp05_ParamLimits

0x42b0,	// (0x00026345) listscroll_cmail_pane

0xeae7,	// (0x00030b7c) list_cmail_pane

0x9604,	// (0x0002b699) list_cmail_body_pane

0x9604,	// (0x0002b699) list_single_cmail_header_caption_pane

0x961b,	// (0x0002b6b0) list_single_cmail_header_detail_pane_ParamLimits

0x961b,	// (0x0002b6b0) list_single_cmail_header_detail_pane

0xeb03,	// (0x00030b98) list_single_cmail_header_caption_pane_t1

0x9644,	// (0x0002b6d9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9644,	// (0x0002b6d9) list_single_cmail_header_detail_pane_g1

0xeb11,	// (0x00030ba6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xeb11,	// (0x00030ba6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd0f,	// (0x00031da4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd0f,	// (0x00031da4) list_single_cmail_header_detail_pane_g

0x965a,	// (0x0002b6ef) list_single_cmail_header_detail_pane_t1_ParamLimits

0x965a,	// (0x0002b6ef) list_single_cmail_header_detail_pane_t1

0xeb4e,	// (0x00030be3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xeb4e,	// (0x00030be3) list_single_cmail_header_editor_pane_bg

0xeb65,	// (0x00030bfa) list_cmail_body_pane_g1

0xeb6e,	// (0x00030c03) list_cmail_body_pane_t1

0xd6b7,	// (0x0002f74c) list_single_cmail_header_editor_pane_bg_g1

0x4aef,	// (0x00026b84) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6c7,	// (0x0002f75c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6bf,	// (0x0002f754) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd942,	// (0x0002f9d7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6e7,	// (0x0002f77c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6d7,	// (0x0002f76c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6df,	// (0x0002f774) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x4acf,	// (0x00026b64) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9696,	// (0x0002b72b) calenote_gesture_pane_ParamLimits

0x9696,	// (0x0002b72b) calenote_gesture_pane

0x96b2,	// (0x0002b747) calenote_window_pane_ParamLimits

0x96b2,	// (0x0002b747) calenote_window_pane

0xeb7c,	// (0x00030c11) popup_note_window_cp01

0x96ce,	// (0x0002b763) calenote_swipe_1_pane_ParamLimits

0x96ce,	// (0x0002b763) calenote_swipe_1_pane

0x91d3,	// (0x0002b268) calenote_swipe_2_pane_ParamLimits

0x91d3,	// (0x0002b268) calenote_swipe_2_pane

0xe853,	// (0x000308e8) calenote_swipe_1_pane_g1_ParamLimits

0xe853,	// (0x000308e8) calenote_swipe_1_pane_g1

0xe860,	// (0x000308f5) calenote_swipe_1_pane_g2_ParamLimits

0xe860,	// (0x000308f5) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x00031d0e) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x00031d0e) calenote_swipe_1_pane_g

0xeb8e,	// (0x00030c23) calenote_swipe_1_pane_t1_ParamLimits

0xeb8e,	// (0x00030c23) calenote_swipe_1_pane_t1

0xe853,	// (0x000308e8) calenote_swipe_2_pane_g1_ParamLimits

0xe853,	// (0x000308e8) calenote_swipe_2_pane_g1

0xebad,	// (0x00030c42) calenote_swipe_2_pane_g2_ParamLimits

0xebad,	// (0x00030c42) calenote_swipe_2_pane_g2

0x0001,

0xfd1b,	// (0x00031db0) calenote_swipe_2_pane_g_ParamLimits

0xfd1b,	// (0x00031db0) calenote_swipe_2_pane_g

0xebb9,	// (0x00030c4e) calenote_swipe_2_pane_t1_ParamLimits

0xebb9,	// (0x00030c4e) calenote_swipe_2_pane_t1

0x3237,	// (0x000252cc) main_mup_navstr_pane

0x702b,	// (0x000290c0) main_mup3_pane_t7_ParamLimits

0x702b,	// (0x000290c0) main_mup3_pane_t7

0xd227,	// (0x0002f2bc) main_mp4_pane_g6_ParamLimits

0xd227,	// (0x0002f2bc) main_mp4_pane_g6

0xd475,	// (0x0002f50a) main_image3_pane_t4_ParamLimits

0xd475,	// (0x0002f50a) main_image3_pane_t4

0x96e3,	// (0x0002b778) popup_navstr_preview_pane_ParamLimits

0x96e3,	// (0x0002b778) popup_navstr_preview_pane

0x96f3,	// (0x0002b788) scroll_navstr_pane_ParamLimits

0x96f3,	// (0x0002b788) scroll_navstr_pane

0x3237,	// (0x000252cc) bg_popup_preview_window_pane_cp04

0xebe0,	// (0x00030c75) popup_navstr_preview_pane_t1

0x9707,	// (0x0002b79c) scroll_navstr_pane_g1_ParamLimits

0x9707,	// (0x0002b79c) scroll_navstr_pane_g1

0x971b,	// (0x0002b7b0) scroll_navstr_pane_t1_ParamLimits

0x971b,	// (0x0002b7b0) scroll_navstr_pane_t1

0xeb85,	// (0x00030c1a) bg_button_pane_cp014

0xeb85,	// (0x00030c1a) bg_button_pane_cp030

0x9079,	// (0x0002b10e) list_double_fisheye_pane_g4_ParamLimits

0x9079,	// (0x0002b10e) list_double_fisheye_pane_g4

0x9085,	// (0x0002b11a) list_double_fisheye_pane_g5_ParamLimits

0x9085,	// (0x0002b11a) list_double_fisheye_pane_g5

0xeaf7,	// (0x00030b8c) sp_fs_scroll_pane_cp03

0xe921,	// (0x000309b6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe92d,	// (0x000309c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x00031d2b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x92a7,	// (0x0002b33c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeaef,	// (0x00030b84) sp_fs_scroll_pane_cp02

0x3d3d,	// (0x00025dd2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3d3d,	// (0x00025dd2) popup_sp_fs_calendar_preview_list_single_pane

0x3237,	// (0x000252cc) main_cam6_pano_pane

0xa9bb,	// (0x0002ca50) main_mup3_pane_ParamLimits

0x3237,	// (0x000252cc) main_phacti_pane

0x8c71,	// (0x0002ad06) bg_button_pane_cp11

0x8c89,	// (0x0002ad1e) main_mobtv_info_pane_g2_ParamLimits

0x8c89,	// (0x0002ad1e) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x00031c8b) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x00031c8b) main_mobtv_info_pane_g

0x8e3e,	// (0x0002aed3) sc_clock_pane_t5_ParamLimits

0x8e3e,	// (0x0002aed3) sc_clock_pane_t5

0x8ee9,	// (0x0002af7e) main_radioblah_pane_g1_ParamLimits

0xe796,	// (0x0003082b) main_radioblah_pane_t3_ParamLimits

0xe796,	// (0x0003082b) main_radioblah_pane_t3

0xe7ae,	// (0x00030843) main_radioblah_pane_t4_ParamLimits

0xe7ae,	// (0x00030843) main_radioblah_pane_t4

0x8f11,	// (0x0002afa6) main_radioblah_text_pane_ParamLimits

0x8f11,	// (0x0002afa6) main_radioblah_text_pane

0x8f23,	// (0x0002afb8) main_radioblah_info_pane_g1_ParamLimits

0x8fb6,	// (0x0002b04b) main_radioblah_info_pane_t4_ParamLimits

0x8fb6,	// (0x0002b04b) main_radioblah_info_pane_t4

0x42b0,	// (0x00026345) main_sp_fs_calendar_pane

0x9731,	// (0x0002b7c6) main_phacti_pane_g1

0x9739,	// (0x0002b7ce) phacti_note_pane_ParamLimits

0x9739,	// (0x0002b7ce) phacti_note_pane

0xebf7,	// (0x00030c8c) phacti_term_pane_ParamLimits

0xebf7,	// (0x00030c8c) phacti_term_pane

0xec0c,	// (0x00030ca1) phacti_note_pane_t1_ParamLimits

0xec0c,	// (0x00030ca1) phacti_note_pane_t1

0xec23,	// (0x00030cb8) phacti_term_pane_g1

0xec2b,	// (0x00030cc0) phacti_term_pane_t1_ParamLimits

0xec2b,	// (0x00030cc0) phacti_term_pane_t1

0xec55,	// (0x00030cea) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec5d,	// (0x00030cf2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd25,	// (0x00031dba) popup_sp_fs_calendar_preview_list_single_pane_g

0xec65,	// (0x00030cfa) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec65,	// (0x00030cfa) popup_sp_fs_calendar_preview_list_single_pane_t1

0xec7b,	// (0x00030d10) aid_popup_sp_fs_bg_corner_pane

0x44a0,	// (0x00026535) popup_sp_fs_calendar_preview_bg_pane_g1

0x3237,	// (0x000252cc) popup_sp_fs_calendar_preview_bg_pane

0xec83,	// (0x00030d18) popup_sp_fs_calendar_preview_list_pane

0xb078,	// (0x0002d10d) bg_main_sp_fs_cale_pane_ParamLimits

0xb078,	// (0x0002d10d) bg_main_sp_fs_cale_pane

0xec94,	// (0x00030d29) listscroll_cale_mrui_pane_ParamLimits

0xec94,	// (0x00030d29) listscroll_cale_mrui_pane

0xeca9,	// (0x00030d3e) listscroll_sp_fs_schedule_track_pane

0xecb2,	// (0x00030d47) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xecb2,	// (0x00030d47) main_sp_fs_ctrlbar_pane_cp01

0xecc5,	// (0x00030d5a) main_sp_fs_ribbon_pane

0xeccd,	// (0x00030d62) popup_sp_fs_cale_preview_window

0x979c,	// (0x0002b831) list_single_sp_fs_schedule_track_pane_ParamLimits

0x979c,	// (0x0002b831) list_single_sp_fs_schedule_track_pane

0x42b0,	// (0x00026345) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x42b0,	// (0x00026345) bg_sp_fs_highlight_list_pane_cp03

0x97b0,	// (0x0002b845) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x97b0,	// (0x0002b845) list_single_sp_fs_schedule_track_pane_g1

0x97bc,	// (0x0002b851) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x97bc,	// (0x0002b851) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2a,	// (0x00031dbf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2a,	// (0x00031dbf) list_single_sp_fs_schedule_track_pane_g

0x97c8,	// (0x0002b85d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x97c8,	// (0x0002b85d) list_single_sp_fs_schedule_track_pane_t1

0x97e2,	// (0x0002b877) sp_fs_schedule_track_pane_ParamLimits

0x97e2,	// (0x0002b877) sp_fs_schedule_track_pane

0xecdf,	// (0x00030d74) sp_fs_schedule_track_pane_g1

0xece7,	// (0x00030d7c) sp_fs_schedule_track_pane_g2

0xecef,	// (0x00030d84) sp_fs_schedule_track_pane_g3

0xecf7,	// (0x00030d8c) sp_fs_schedule_track_pane_g4

0xecff,	// (0x00030d94) sp_fs_schedule_track_pane_g5

0x0004,

0xfd2f,	// (0x00031dc4) sp_fs_schedule_track_pane_g

0xd6b7,	// (0x0002f74c) bg_sp_fs_schedule_viewer_highlight_g1

0x4aef,	// (0x00026b84) bg_sp_fs_schedule_viewer_highlight_g2

0xd6bf,	// (0x0002f754) bg_sp_fs_schedule_viewer_highlight_g3

0xd6c7,	// (0x0002f75c) bg_sp_fs_schedule_viewer_highlight_g4

0xd942,	// (0x0002f9d7) bg_sp_fs_schedule_viewer_highlight_g5

0xd6d7,	// (0x0002f76c) bg_sp_fs_schedule_viewer_highlight_g6

0xd6df,	// (0x0002f774) bg_sp_fs_schedule_viewer_highlight_g7

0xd6e7,	// (0x0002f77c) bg_sp_fs_schedule_viewer_highlight_g8

0x4acf,	// (0x00026b64) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3a,	// (0x00031dcf) bg_sp_fs_schedule_viewer_highlight_g

0x3237,	// (0x000252cc) bg_main_sp_fs_ribbon_pane

0x97f3,	// (0x0002b888) main_sp_fs_ribbon_pane_g1

0xed07,	// (0x00030d9c) main_sp_fs_ribbon_pane_t1

0x97fc,	// (0x0002b891) main_sp_fs_ribbon_pane_t2

0xed16,	// (0x00030dab) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd4d,	// (0x00031de2) main_sp_fs_ribbon_pane_t

0xed25,	// (0x00030dba) main_sp_fs_ribbon_scheduler_pane

0xed2d,	// (0x00030dc2) bg_main_sp_fs_ribbon_pane_g1

0xed36,	// (0x00030dcb) bg_main_sp_fs_ribbon_pane_g2

0xed3f,	// (0x00030dd4) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd54,	// (0x00031de9) bg_main_sp_fs_ribbon_pane_g

0xed47,	// (0x00030ddc) main_sp_fs_ribbon_scheduler_pane_g1

0xed50,	// (0x00030de5) main_sp_fs_ribbon_scheduler_pane_g2

0xed59,	// (0x00030dee) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd5b,	// (0x00031df0) main_sp_fs_ribbon_scheduler_pane_g

0xed62,	// (0x00030df7) list_cale_mrui_pane

0x980b,	// (0x0002b8a0) sp_fs_scroll_pane_cp07_ParamLimits

0x980b,	// (0x0002b8a0) sp_fs_scroll_pane_cp07

0x9823,	// (0x0002b8b8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9823,	// (0x0002b8b8) bg_sp_fs_schedule_viewer_highlight

0xed6f,	// (0x00030e04) list_single_sp_fs_schedule_track_pane_cp01

0xed77,	// (0x00030e0c) list_sp_fs_schedule_track_pane

0xed7f,	// (0x00030e14) sp_fs_scroll_pane_cp06_ParamLimits

0xed7f,	// (0x00030e14) sp_fs_scroll_pane_cp06

0x44a0,	// (0x00026535) bgmain_sp_fs_calendar_pane_g1

0x9833,	// (0x0002b8c8) list_single_cale_mrui_pane_ParamLimits

0x9833,	// (0x0002b8c8) list_single_cale_mrui_pane

0xed91,	// (0x00030e26) list_single_cale_mrui_row_pane_ParamLimits

0xed91,	// (0x00030e26) list_single_cale_mrui_row_pane

0x9854,	// (0x0002b8e9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9854,	// (0x0002b8e9) list_single_cale_mrui_row_pane_g1

0x988c,	// (0x0002b921) list_single_cale_mrui_row_pane_t1_ParamLimits

0x988c,	// (0x0002b921) list_single_cale_mrui_row_pane_t1

0x989e,	// (0x0002b933) list_single_cale_mrui_row_pane_t2_ParamLimits

0x989e,	// (0x0002b933) list_single_cale_mrui_row_pane_t2

0x9904,	// (0x0002b999) list_single_cale_mrui_row_pane_t3_ParamLimits

0x9904,	// (0x0002b999) list_single_cale_mrui_row_pane_t3

0x9933,	// (0x0002b9c8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9933,	// (0x0002b9c8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd69,	// (0x00031dfe) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd69,	// (0x00031dfe) list_single_cale_mrui_row_pane_t

0x9962,	// (0x0002b9f7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9962,	// (0x0002b9f7) list_single_cmail_header_editor_pane_bg_cp01

0x9986,	// (0x0002ba1b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9986,	// (0x0002ba1b) list_single_cmail_header_editor_pane_bg_cp02

0x99a4,	// (0x0002ba39) main_radioblah_text_pane_t1_ParamLimits

0x99a4,	// (0x0002ba39) main_radioblah_text_pane_t1

0xedb4,	// (0x00030e49) cam6_indi_pane_cp01

0xedbc,	// (0x00030e51) cam6_mode_pane_cp01

0xedc4,	// (0x00030e59) cam6_pano_pane

0xedcd,	// (0x00030e62) cam6_zoom_pane_cp01

0xedd5,	// (0x00030e6a) cam6_pano_image_pane

0xedde,	// (0x00030e73) cam6_pano_pane_g1

0xe4fd,	// (0x00030592) cam6_pano_pane_g2

0xede7,	// (0x00030e7c) cam6_pano_pane_g3

0xedf0,	// (0x00030e85) cam6_pano_pane_g4

0xcf28,	// (0x0002efbd) cam6_pano_pane_g5

0xedf9,	// (0x00030e8e) cam6_pano_pane_g6

0xee01,	// (0x00030e96) cam6_pano_pane_g7

0xee09,	// (0x00030e9e) cam6_pano_pane_g8

0xee12,	// (0x00030ea7) cam6_pano_pane_g9

0x0008,

0xfd72,	// (0x00031e07) cam6_pano_pane_g

0x3237,	// (0x000252cc) main_browser_tag_pane

0xebd8,	// (0x00030c6d) grid_navstr_albumart_pane

0xee1b,	// (0x00030eb0) cell_navstr_albumart_pane_ParamLimits

0xee1b,	// (0x00030eb0) cell_navstr_albumart_pane

0xb11b,	// (0x0002d1b0) cell_navstr_albumart_pane_g1

0xc2bc,	// (0x0002e351) cell_navstr_albumart_pane_g2

0xc2cc,	// (0x0002e361) cell_navstr_albumart_pane_g3

0xc2c4,	// (0x0002e359) cell_navstr_albumart_pane_g4

0x0003,

0xfd85,	// (0x00031e1a) cell_navstr_albumart_pane_g

0x99bd,	// (0x0002ba52) bt_list_pane_ParamLimits

0x99bd,	// (0x0002ba52) bt_list_pane

0x99d0,	// (0x0002ba65) bt_list_pane_t1

0x99df,	// (0x0002ba74) bt_list_pane_t2

0x0001,

0xfd8e,	// (0x00031e23) bt_list_pane_t

0x3237,	// (0x000252cc) main_cale_prevew_pane

0x99ee,	// (0x0002ba83) popup_cale_preview_window_ParamLimits

0x99ee,	// (0x0002ba83) popup_cale_preview_window

0x42b0,	// (0x00026345) bg_popup_preview_window_pane_cp05_ParamLimits

0x42b0,	// (0x00026345) bg_popup_preview_window_pane_cp05

0xee32,	// (0x00030ec7) list_cale_preview_pane_ParamLimits

0xee32,	// (0x00030ec7) list_cale_preview_pane

0x9a03,	// (0x0002ba98) list_double_cale_preview_pane_ParamLimits

0x9a03,	// (0x0002ba98) list_double_cale_preview_pane

0x9a14,	// (0x0002baa9) list_single_cale_preview_pane_ParamLimits

0x9a14,	// (0x0002baa9) list_single_cale_preview_pane

0xee3e,	// (0x00030ed3) list_single_cale_preview_pane_g1

0xee46,	// (0x00030edb) list_single_cale_preview_pane_t1_ParamLimits

0xee46,	// (0x00030edb) list_single_cale_preview_pane_t1

0x9a28,	// (0x0002babd) list_double_cale_preview_pane_g1

0x9a30,	// (0x0002bac5) list_double_cale_preview_pane_t1_ParamLimits

0x9a30,	// (0x0002bac5) list_double_cale_preview_pane_t1

0x9a45,	// (0x0002bada) list_double_cale_preview_pane_t2_ParamLimits

0x9a45,	// (0x0002bada) list_double_cale_preview_pane_t2

0x0001,

0xfd93,	// (0x00031e28) list_double_cale_preview_pane_t_ParamLimits

0xfd93,	// (0x00031e28) list_double_cale_preview_pane_t

0x3237,	// (0x000252cc) main_ezdial_pane

0x42b0,	// (0x00026345) main_sp_fs_email_pane_ParamLimits

0x921d,	// (0x0002b2b2) cmail_ddmenu_btn01_pane_ParamLimits

0x921d,	// (0x0002b2b2) cmail_ddmenu_btn01_pane

0x9230,	// (0x0002b2c5) cmail_ddmenu_btn02_pane_ParamLimits

0x9230,	// (0x0002b2c5) cmail_ddmenu_btn02_pane

0x9253,	// (0x0002b2e8) cmail_ddmenu_btn03_pane_ParamLimits

0x9253,	// (0x0002b2e8) cmail_ddmenu_btn03_pane

0x92f0,	// (0x0002b385) main_sp_fs_ctrlbar_pane_ParamLimits

0x9311,	// (0x0002b3a6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9604,	// (0x0002b699) list_cmail_body_pane_ParamLimits

0xb123,	// (0x0002d1b8) bg_button_pane_cp12

0xeb1d,	// (0x00030bb2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xeb1d,	// (0x00030bb2) list_single_cmail_header_detail_pane_g3

0xeb2a,	// (0x00030bbf) list_single_cmail_header_detail_pane_t2_ParamLimits

0xeb2a,	// (0x00030bbf) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd16,	// (0x00031dab) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd16,	// (0x00031dab) list_single_cmail_header_detail_pane_t

0xec40,	// (0x00030cd5) phacti_term_pane_t2_ParamLimits

0xec40,	// (0x00030cd5) phacti_term_pane_t2

0x0001,

0xfd20,	// (0x00031db5) phacti_term_pane_t_ParamLimits

0xfd20,	// (0x00031db5) phacti_term_pane_t

0xee5b,	// (0x00030ef0) aid_size_list_single_double

0x9a5d,	// (0x0002baf2) popup_ezdial_listscroll_window

0x9a73,	// (0x0002bb08) popup_number_entry_window_cp01

0x4247,	// (0x000262dc) bg_popup_call_pane_cp09

0xee67,	// (0x00030efc) ezdial_list_pane

0xee6f,	// (0x00030f04) scroll_pane_cp23

0xb078,	// (0x0002d10d) bg_button_pane_cp028_ParamLimits

0xb078,	// (0x0002d10d) bg_button_pane_cp028

0x9a7f,	// (0x0002bb14) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9a7f,	// (0x0002bb14) cmail_ddmenu_btn01_pane_g1

0x9a8b,	// (0x0002bb20) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9a8b,	// (0x0002bb20) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd98,	// (0x00031e2d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd98,	// (0x00031e2d) cmail_ddmenu_btn01_pane_g

0xee77,	// (0x00030f0c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xee77,	// (0x00030f0c) cmail_ddmenu_btn01_pane_t1

0xb078,	// (0x0002d10d) bg_button_pane_cp029_ParamLimits

0xb078,	// (0x0002d10d) bg_button_pane_cp029

0x9a97,	// (0x0002bb2c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9a97,	// (0x0002bb2c) cmail_ddmenu_btn02_pane_g1

0x9aaf,	// (0x0002bb44) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9aaf,	// (0x0002bb44) cmail_ddmenu_btn02_pane_t1

0x42b0,	// (0x00026345) bg_button_pane_cp031_ParamLimits

0x42b0,	// (0x00026345) bg_button_pane_cp031

0x9a97,	// (0x0002bb2c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9a97,	// (0x0002bb2c) cmail_ddmenu_btn03_pane_g1

0x9aaf,	// (0x0002bb44) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9aaf,	// (0x0002bb44) cmail_ddmenu_btn03_pane_t1

0x42d1,	// (0x00026366) cell_dialer2_keypad_pane_t1_ParamLimits

0xcf56,	// (0x0002efeb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xcf56,	// (0x0002efeb) cell_dialer2_keypad_pane_t1_copy1

0x8add,	// (0x0002ab72) ncimui_group_button_pane

0x42b0,	// (0x00026345) main_sp_fs_calendar_pane_ParamLimits

0x9604,	// (0x0002b699) list_single_cmail_header_caption_pane_ParamLimits

0xec8b,	// (0x00030d20) aid_recal_txt_sm_pane

0x3237,	// (0x000252cc) mian_recal_day_pane

0xeccd,	// (0x00030d62) popup_sp_fs_cale_preview_window_ParamLimits

0xee8c,	// (0x00030f21) list_recal_day_pane

0xeece,	// (0x00030f63) list_single_recal_day_pane_ParamLimits

0xeece,	// (0x00030f63) list_single_recal_day_pane

0xeee0,	// (0x00030f75) list_single_recal_day_pane_g1_ParamLimits

0xeee0,	// (0x00030f75) list_single_recal_day_pane_g1

0xeeec,	// (0x00030f81) list_single_recal_day_pane_g2_ParamLimits

0xeeec,	// (0x00030f81) list_single_recal_day_pane_g2

0xeef8,	// (0x00030f8d) list_single_recal_day_pane_g3_ParamLimits

0xeef8,	// (0x00030f8d) list_single_recal_day_pane_g3

0x9ad3,	// (0x0002bb68) list_single_recal_day_pane_g4_ParamLimits

0x9ad3,	// (0x0002bb68) list_single_recal_day_pane_g4

0xef04,	// (0x00030f99) list_single_recal_day_pane_g5_ParamLimits

0xef04,	// (0x00030f99) list_single_recal_day_pane_g5

0x9aeb,	// (0x0002bb80) list_single_recal_day_pane_g6_ParamLimits

0x9aeb,	// (0x0002bb80) list_single_recal_day_pane_g6

0x0004,

0xfda7,	// (0x00031e3c) list_single_recal_day_pane_g_ParamLimits

0xfda7,	// (0x00031e3c) list_single_recal_day_pane_g

0xef18,	// (0x00030fad) list_single_recal_day_pane_t1

0x9af7,	// (0x0002bb8c) list_single_recal_day_pane_t2

0x0001,

0xfdb2,	// (0x00031e47) list_single_recal_day_pane_t

0x9b09,	// (0x0002bb9e) ncimui_query_button_pane_ParamLimits

0x9b09,	// (0x0002bb9e) ncimui_query_button_pane

0x9b19,	// (0x0002bbae) ncimui_query_button_pane_t1_ParamLimits

0x9b19,	// (0x0002bbae) ncimui_query_button_pane_t1

0xef2a,	// (0x00030fbf) ncimui_query_button_pane_t2_ParamLimits

0xef2a,	// (0x00030fbf) ncimui_query_button_pane_t2

0x0001,

0xfdb7,	// (0x00031e4c) ncimui_query_button_pane_t_ParamLimits

0xfdb7,	// (0x00031e4c) ncimui_query_button_pane_t

0x9b2c,	// (0x0002bbc1) query_button_pane_ParamLimits

0x9b2c,	// (0x0002bbc1) query_button_pane

0x3237,	// (0x000252cc) bg_button_pane_cp0028

0xef3d,	// (0x00030fd2) query_button_pane_t1

0x24be,	// (0x00024553) main_tport_pane_ParamLimits

0x9517,	// (0x0002b5ac) bg_popup_window_pane_cp01_ParamLimits

0x9517,	// (0x0002b5ac) bg_popup_window_pane_cp01

0x952e,	// (0x0002b5c3) heading_pane_cp08_ParamLimits

0x952e,	// (0x0002b5c3) heading_pane_cp08

0x953f,	// (0x0002b5d4) heading_pane_cp07_ParamLimits

0x953f,	// (0x0002b5d4) heading_pane_cp07

0xeac1,	// (0x00030b56) cell_tport_appsw_pane_g2

0x0002,

0xfd03,	// (0x00031d98) cell_tport_appsw_pane_g

0xb113,	// (0x0002d1a8) input_candi_list_open_g1

0x575e,	// (0x000277f3) list_cale_time_pane_g6_ParamLimits

0x575e,	// (0x000277f3) list_cale_time_pane_g6

0x6abc,	// (0x00028b51) aid_size_touch_calib_1_ParamLimits

0x6abc,	// (0x00028b51) aid_size_touch_calib_1

0x6ace,	// (0x00028b63) aid_size_touch_calib_2_ParamLimits

0x6ace,	// (0x00028b63) aid_size_touch_calib_2

0x6ae4,	// (0x00028b79) aid_size_touch_calib_3_ParamLimits

0x6ae4,	// (0x00028b79) aid_size_touch_calib_3

0x6afc,	// (0x00028b91) aid_size_touch_calib_4_ParamLimits

0x6afc,	// (0x00028b91) aid_size_touch_calib_4

0x6b10,	// (0x00028ba5) main_touch_calib_button_group_pane_ParamLimits

0x6b10,	// (0x00028ba5) main_touch_calib_button_group_pane

0x6b28,	// (0x00028bbd) main_touch_calib_pane_g1_ParamLimits

0x6b3a,	// (0x00028bcf) main_touch_calib_pane_g2_ParamLimits

0x6b4c,	// (0x00028be1) main_touch_calib_pane_g3_ParamLimits

0x6b5e,	// (0x00028bf3) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x00031798) main_touch_calib_pane_g_ParamLimits

0x6b70,	// (0x00028c05) main_touch_calib_pane_t1_ParamLimits

0x6b88,	// (0x00028c1d) main_touch_calib_pane_t2_ParamLimits

0x6ba0,	// (0x00028c35) main_touch_calib_pane_t3_ParamLimits

0x6bb2,	// (0x00028c47) main_touch_calib_pane_t4_ParamLimits

0x6bc4,	// (0x00028c59) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x000317a1) main_touch_calib_pane_t_ParamLimits

0xcd2b,	// (0x0002edc0) list_single_fp_cale_pane_g3_ParamLimits

0xcd2b,	// (0x0002edc0) list_single_fp_cale_pane_g3

0xa9bb,	// (0x0002ca50) bg_button_pane_cp012_ParamLimits

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp03_ParamLimits

0x30b0,	// (0x00025145) cell_vitu2_function_top_pane_g1_ParamLimits

0xa9bb,	// (0x0002ca50) bg_vkb2_func_pane_cp04_ParamLimits

0x8a6d,	// (0x0002ab02) main_ncimui_button_group_pane_ParamLimits

0x8a6d,	// (0x0002ab02) main_ncimui_button_group_pane

0x8acb,	// (0x0002ab60) main_ncimui_pane_t3_ParamLimits

0x8acb,	// (0x0002ab60) main_ncimui_pane_t3

0xebee,	// (0x00030c83) phacti_button_group_pane

0xee5b,	// (0x00030ef0) aid_size_list_single_double_ParamLimits

0x9a5d,	// (0x0002baf2) popup_ezdial_listscroll_window_ParamLimits

0x9a73,	// (0x0002bb08) popup_number_entry_window_cp01_ParamLimits

0x9b3e,	// (0x0002bbd3) phacti_button_pane_ParamLimits

0x9b3e,	// (0x0002bbd3) phacti_button_pane

0x3237,	// (0x000252cc) bg_button_pane_cp14

0xef4b,	// (0x00030fe0) phacti_button_pane_t1

0x9b4d,	// (0x0002bbe2) main_touch_calib_button_pane_ParamLimits

0x9b4d,	// (0x0002bbe2) main_touch_calib_button_pane

0x3b17,	// (0x00025bac) bg_button_pane_cp18_ParamLimits

0x3b17,	// (0x00025bac) bg_button_pane_cp18

0x9b68,	// (0x0002bbfd) main_touch_calib_button_pane_t1_ParamLimits

0x9b68,	// (0x0002bbfd) main_touch_calib_button_pane_t1

0x9b7e,	// (0x0002bc13) main_touch_calib_button_pane_t2_ParamLimits

0x9b7e,	// (0x0002bc13) main_touch_calib_button_pane_t2

0x0001,

0xfdbc,	// (0x00031e51) main_touch_calib_button_pane_t_ParamLimits

0xfdbc,	// (0x00031e51) main_touch_calib_button_pane_t

0x3237,	// (0x000252cc) cell_ncimui_button_pane

0x3237,	// (0x000252cc) bg_button_pane_cp032

0xef9e,	// (0x00031033) cell_ncimui_button_pane_t1

0xd455,	// (0x0002f4ea) image3_infobar_pane_ParamLimits

0xd455,	// (0x0002f4ea) image3_infobar_pane

0x8e66,	// (0x0002aefb) fs_bigclock_status_pane_ParamLimits

0x8e66,	// (0x0002aefb) fs_bigclock_status_pane

0x8e73,	// (0x0002af08) main_fs_bigclock_clock_pane_ParamLimits

0x8e73,	// (0x0002af08) main_fs_bigclock_clock_pane

0x8e95,	// (0x0002af2a) main_fs_bigclock_indi_pane_ParamLimits

0x8e95,	// (0x0002af2a) main_fs_bigclock_indi_pane

0x8ebf,	// (0x0002af54) main_fs_bigclock_swipe_pane_ParamLimits

0x8ebf,	// (0x0002af54) main_fs_bigclock_swipe_pane

0x3237,	// (0x000252cc) main_fs_clock_dumped_data

0xe60a,	// (0x0003069f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe60a,	// (0x0003069f) list_single_fs_bigclock_indicator_pane_g1

0xe624,	// (0x000306b9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe624,	// (0x000306b9) list_single_fs_bigclock_indicator_pane_g2

0xe63e,	// (0x000306d3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe63e,	// (0x000306d3) list_single_fs_bigclock_indicator_pane_g3

0xe658,	// (0x000306ed) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe658,	// (0x000306ed) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x00031cbf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x00031cbf) list_single_fs_bigclock_indicator_pane_g

0xe681,	// (0x00030716) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe681,	// (0x00030716) list_single_fs_bigclock_indicator_pane_t1

0xe6a9,	// (0x0003073e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe6a9,	// (0x0003073e) list_single_fs_bigclock_indicator_pane_t2

0xe6d1,	// (0x00030766) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe6d1,	// (0x00030766) list_single_fs_bigclock_indicator_pane_t3

0xe6f9,	// (0x0003078e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe6f9,	// (0x0003078e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x00031cca) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x00031cca) list_single_fs_bigclock_indicator_pane_t

0xefac,	// (0x00031041) image3_infobar_fav_pane_ParamLimits

0xefac,	// (0x00031041) image3_infobar_fav_pane

0xefbc,	// (0x00031051) image3_infobar_loc_pane_ParamLimits

0xefbc,	// (0x00031051) image3_infobar_loc_pane

0xefd0,	// (0x00031065) image3_infobar_time_pane_ParamLimits

0xefd0,	// (0x00031065) image3_infobar_time_pane

0x44a0,	// (0x00026535) image3_infobar_time_pane_g1

0xefe0,	// (0x00031075) image3_infobar_time_pane_t1

0x44a0,	// (0x00026535) image3_infobar_loc_pane_g1

0xefee,	// (0x00031083) image3_infobar_loc_pane_g2

0x0001,

0xfdc1,	// (0x00031e56) image3_infobar_loc_pane_g

0xeff6,	// (0x0003108b) image3_infobar_loc_pane_t1

0x44a0,	// (0x00026535) image3_infobar_fav_pane_g1

0xf004,	// (0x00031099) image3_infobar_fav_pane_g2

0x0001,

0xfdc6,	// (0x00031e5b) image3_infobar_fav_pane_g

0xf00c,	// (0x000310a1) fs_bigclock_status_battery_pane

0xf015,	// (0x000310aa) fs_bigclock_status_signal_pane

0xf01e,	// (0x000310b3) fs_bigclock_status_title_pane

0xf027,	// (0x000310bc) fs_bigclock_status_signal_pane_g1

0xf030,	// (0x000310c5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdcb,	// (0x00031e60) fs_bigclock_status_signal_pane_g

0xf038,	// (0x000310cd) fs_bigclock_status_battery_pane_g1

0xf041,	// (0x000310d6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd0,	// (0x00031e65) fs_bigclock_status_battery_pane_g

0xf049,	// (0x000310de) fs_bigclock_status_title_pane_t1

0x9b9c,	// (0x0002bc31) main_fs_bigclock_clock_pane_g1

0x9bae,	// (0x0002bc43) main_fs_bigclock_clock_pane_g2

0x9bbf,	// (0x0002bc54) main_fs_bigclock_clock_pane_g3

0x9bbf,	// (0x0002bc54) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdd5,	// (0x00031e6a) main_fs_bigclock_clock_pane_g

0x9bd2,	// (0x0002bc67) main_fs_bigclock_clock_pane_t1

0x9bed,	// (0x0002bc82) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdde,	// (0x00031e73) main_fs_bigclock_clock_pane_t

0xf057,	// (0x000310ec) list_single_fs_bigclock_indicator_pane_ParamLimits

0xf057,	// (0x000310ec) list_single_fs_bigclock_indicator_pane

0xf068,	// (0x000310fd) list_single_fs_bigclock_pane_ParamLimits

0xf068,	// (0x000310fd) list_single_fs_bigclock_pane

0x0017,	// (0x000220ac) main_fs_bigclock_indicator_pane_t1

0x0026,	// (0x000220bb) list_single_fs_bigclock_pane_g1

0x002e,	// (0x000220c3) list_single_fs_bigclock_pane_t1

0x44a0,	// (0x00026535) main_fs_bigclock_swipe_pane_g1

0x006e,	// (0x00022103) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdef,	// (0x00031e84) main_fs_bigclock_swipe_pane_g

0x0076,	// (0x0002210b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0076,	// (0x0002210b) main_fs_bigclock_swipe_pane_t1

0x599c,	// (0x00027a31) call_type_pane_ParamLimits

0x3237,	// (0x000252cc) main_btmg_pane

0x9880,	// (0x0002b915) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9880,	// (0x0002b915) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd62,	// (0x00031df7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd62,	// (0x00031df7) list_single_cale_mrui_row_pane_g

0xeeb5,	// (0x00030f4a) list_recal_vselct_arw_lo_pane

0xeebd,	// (0x00030f52) list_recal_vselct_arw_up_pane

0xeec5,	// (0x00030f5a) list_recal_vselct_pane

0x0093,	// (0x00022128) btmg_button_pane

0x9c4d,	// (0x0002bce2) main_btmg_pane_g1

0x3237,	// (0x000252cc) bg_button_pane_cp044

0x00a3,	// (0x00022138) btmg_button_pane_t1

0xc4ef,	// (0x0002e584) aid_listscroll_gen

0x42b0,	// (0x00026345) main_cntbar_detail_pane

0xeae7,	// (0x00030b7c) list_cmail_folder_pane

0xeaf7,	// (0x00030b8c) sp_fs_scroll_pane_cp03_ParamLimits

0xef59,	// (0x00030fee) list_single_fs_dyc_pane_cp01_ParamLimits

0xef59,	// (0x00030fee) list_single_fs_dyc_pane_cp01

0x00c9,	// (0x0002215e) aid_size_cmail_indent

0x00d2,	// (0x00022167) list_single_dyc_row_pane_cp01

0x9c7d,	// (0x0002bd12) cntbar_detail_list_pane_ParamLimits

0x9c7d,	// (0x0002bd12) cntbar_detail_list_pane

0x9cc3,	// (0x0002bd58) main_cntbar_detail_cont_pane_ParamLimits

0x9cc3,	// (0x0002bd58) main_cntbar_detail_cont_pane

0x9cd7,	// (0x0002bd6c) scroll_pane_cp032_ParamLimits

0x9cd7,	// (0x0002bd6c) scroll_pane_cp032

0x9ce3,	// (0x0002bd78) cntbar_detail_list_event_pane_ParamLimits

0x9ce3,	// (0x0002bd78) cntbar_detail_list_event_pane

0x9c8d,	// (0x0002bd22) cntbar_detail_list_shct_pane

0x0153,	// (0x000221e8) aid_list_gen

0x3cdd,	// (0x00025d72) aid_scroll

0xdc85,	// (0x0002fd1a) aid_size_touch_scroll_bar

0xdd45,	// (0x0002fdda) aid_list_double

0x9cf4,	// (0x0002bd89) aid_list_single

0xdd45,	// (0x0002fdda) aid_list_single_lg

0x9cfd,	// (0x0002bd92) aid_list_z_g_a_sm

0x9d05,	// (0x0002bd9a) aid_list_z_g_d

0x9d0d,	// (0x0002bda2) aid_txt_z_prm

0x9d1b,	// (0x0002bdb0) aid_txt_z_prm_cp01

0x9d29,	// (0x0002bdbe) aid_txt_z_sec

0x9d37,	// (0x0002bdcc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9d37,	// (0x0002bdcc) main_cntbar_detail_cont_pane_g1

0x9d4b,	// (0x0002bde0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9d4b,	// (0x0002bde0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf4,	// (0x00031e89) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf4,	// (0x00031e89) main_cntbar_detail_cont_pane_g

0x01b8,	// (0x0002224d) main_cntbar_detail_cont_pane_t1

0x01c6,	// (0x0002225b) main_cntbar_detail_cont_pane_t2

0x01d4,	// (0x00022269) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdf9,	// (0x00031e8e) main_cntbar_detail_cont_pane_t

0x9d5b,	// (0x0002bdf0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9d5b,	// (0x0002bdf0) cell_cntbar_detail_list_shct_pane

0x01f4,	// (0x00022289) cntbar_detail_list_shct_pane_g1

0x01fd,	// (0x00022292) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe00,	// (0x00031e95) cntbar_detail_list_shct_pane_g

0x9d6d,	// (0x0002be02) cntbar_detail_list_event_pane_g1_ParamLimits

0x9d6d,	// (0x0002be02) cntbar_detail_list_event_pane_g1

0x9d79,	// (0x0002be0e) cntbar_detail_list_event_pane_g2_ParamLimits

0x9d79,	// (0x0002be0e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe05,	// (0x00031e9a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe05,	// (0x00031e9a) cntbar_detail_list_event_pane_g

0x9de5,	// (0x0002be7a) cntbar_detail_list_event_pane_t1_ParamLimits

0x9de5,	// (0x0002be7a) cntbar_detail_list_event_pane_t1

0x9dfa,	// (0x0002be8f) cntbar_detail_list_event_pane_t2_ParamLimits

0x9dfa,	// (0x0002be8f) cntbar_detail_list_event_pane_t2

0x0002,

0xfe12,	// (0x00031ea7) cntbar_detail_list_event_pane_t_ParamLimits

0xfe12,	// (0x00031ea7) cntbar_detail_list_event_pane_t

0x44a0,	// (0x00026535) cell_cntbar_detail_list_shct_pane_g1

0xaf2b,	// (0x0002cfc0) navi_pane_mv_g3

0x42b0,	// (0x00026345) main_cntbar_detail_pane_ParamLimits

0x3237,	// (0x000252cc) main_notif_wgt_pane

0xd1b5,	// (0x0002f24a) aid_tch_main_mp4_pane_g4

0xd3d7,	// (0x0002f46c) popup_slider_window_cp02

0xeeab,	// (0x00030f40) list_recal_day_event_pane

0x9c55,	// (0x0002bcea) cntbar_detail_btn_pane_ParamLimits

0x9c55,	// (0x0002bcea) cntbar_detail_btn_pane

0x9c68,	// (0x0002bcfd) cntbar_detail_btn_pane_cp01_ParamLimits

0x9c68,	// (0x0002bcfd) cntbar_detail_btn_pane_cp01

0x9c8d,	// (0x0002bd22) cntbar_detail_list_shct_pane_ParamLimits

0x9c9d,	// (0x0002bd32) cntbar_detail_pane_g1_ParamLimits

0x9c9d,	// (0x0002bd32) cntbar_detail_pane_g1

0x9cad,	// (0x0002bd42) cntbar_detail_pane_t1_ParamLimits

0x9cad,	// (0x0002bd42) cntbar_detail_pane_t1

0x9d85,	// (0x0002be1a) cntbar_detail_list_event_pane_g3_ParamLimits

0x9d85,	// (0x0002be1a) cntbar_detail_list_event_pane_g3

0x9d9d,	// (0x0002be32) cntbar_detail_list_event_pane_g4_ParamLimits

0x9d9d,	// (0x0002be32) cntbar_detail_list_event_pane_g4

0x9db5,	// (0x0002be4a) cntbar_detail_list_event_pane_g5_ParamLimits

0x9db5,	// (0x0002be4a) cntbar_detail_list_event_pane_g5

0x9dcd,	// (0x0002be62) cntbar_detail_list_event_pane_g6_ParamLimits

0x9dcd,	// (0x0002be62) cntbar_detail_list_event_pane_g6

0x9e0f,	// (0x0002bea4) cntbar_detail_list_event_pane_t3_ParamLimits

0x9e0f,	// (0x0002bea4) cntbar_detail_list_event_pane_t3

0x9e21,	// (0x0002beb6) popup_notif_wgt_window_ParamLimits

0x9e21,	// (0x0002beb6) popup_notif_wgt_window

0x9e36,	// (0x0002becb) popup_submenu_window_cp01_ParamLimits

0x9e36,	// (0x0002becb) popup_submenu_window_cp01

0x4247,	// (0x000262dc) bg_popup_window_pane_cp10

0x02d4,	// (0x00022369) listscroll_notif_wgt_pane

0x02e5,	// (0x0002237a) list_notif_wgt_window

0x02ee,	// (0x00022383) scroll_pane_cp033

0x9e46,	// (0x0002bedb) list_notif_wgt_row_pane_ParamLimits

0x9e46,	// (0x0002bedb) list_notif_wgt_row_pane

0x0309,	// (0x0002239e) aid_size_list_notif_wgt_del

0x0316,	// (0x000223ab) list_notif_wgt_row_pane_g1

0x0322,	// (0x000223b7) list_notif_wgt_row_pane_g2

0x0336,	// (0x000223cb) list_notif_wgt_row_pane_g3

0x0002,

0xfe19,	// (0x00031eae) list_notif_wgt_row_pane_g

0x0343,	// (0x000223d8) list_notif_wgt_row_pane_t1

0x0359,	// (0x000223ee) list_notif_wgt_row_pane_t2

0x036b,	// (0x00022400) list_notif_wgt_row_pane_t3

0x0002,

0xfe20,	// (0x00031eb5) list_notif_wgt_row_pane_t

0xd991,	// (0x0002fa26) list_recal_day_event_pane_g1

0x037d,	// (0x00022412) list_recal_day_event_pane_t1

0x3237,	// (0x000252cc) bg_button_pane_cp045

0x9e56,	// (0x0002beeb) cntbar_detail_btn_pane_t1

0xb078,	// (0x0002d10d) main_callh_pane_ParamLimits

0xb078,	// (0x0002d10d) main_callh_pane

0x3237,	// (0x000252cc) main_coverflow0_pane

0x3237,	// (0x000252cc) main_wgtman_pane

0x8ed3,	// (0x0002af68) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8ed3,	// (0x0002af68) main_fs_bigclock_unlock_btn_pane

0xeab9,	// (0x00030b4e) bg_button_pane_cp16

0xeac9,	// (0x00030b5e) cell_tport_appsw_pane_g3

0x9e64,	// (0x0002bef9) cf0_flow_pane_ParamLimits

0x9e64,	// (0x0002bef9) cf0_flow_pane

0x03a9,	// (0x0002243e) listscroll_cf0_pane

0x03b2,	// (0x00022447) main_cf0_pane_g1

0x9e79,	// (0x0002bf0e) main_cf0_pane_t1_ParamLimits

0x9e79,	// (0x0002bf0e) main_cf0_pane_t1

0x9e8e,	// (0x0002bf23) main_cf0_pane_t2_ParamLimits

0x9e8e,	// (0x0002bf23) main_cf0_pane_t2

0x0001,

0xfe2c,	// (0x00031ec1) main_cf0_pane_t_ParamLimits

0xfe2c,	// (0x00031ec1) main_cf0_pane_t

0x03e8,	// (0x0002247d) scroll_pane_cp11

0x9ea3,	// (0x0002bf38) cf0_flow_pane_g1

0x9eab,	// (0x0002bf40) cf0_flow_pane_g2

0x0001,

0xfe31,	// (0x00031ec6) cf0_flow_pane_g

0x9eb3,	// (0x0002bf48) cf0_flow_pane_t1

0x3237,	// (0x000252cc) main_call6_pane

0x3237,	// (0x000252cc) main_calllock_pane

0x31a4,	// (0x00025239) call6_btn_grp_pane_ParamLimits

0x31a4,	// (0x00025239) call6_btn_grp_pane

0x31ba,	// (0x0002524f) call6_pane_g1_ParamLimits

0x31ba,	// (0x0002524f) call6_pane_g1

0x31cd,	// (0x00025262) popup_call6_1st_window_ParamLimits

0x31cd,	// (0x00025262) popup_call6_1st_window

0x31dc,	// (0x00025271) popup_call6_2nd_window_ParamLimits

0x31dc,	// (0x00025271) popup_call6_2nd_window

0x31eb,	// (0x00025280) cell_call6_btn_pane_ParamLimits

0x31eb,	// (0x00025280) cell_call6_btn_pane

0x4247,	// (0x000262dc) bg_popup_call2_in_pane_cp03

0x040f,	// (0x000224a4) popup_call6_1st_window_g1

0x0417,	// (0x000224ac) popup_call6_1st_window_g2

0x041f,	// (0x000224b4) popup_call6_1st_window_g3

0x0002,

0xfe36,	// (0x00031ecb) popup_call6_1st_window_g

0x0427,	// (0x000224bc) popup_call6_1st_window_t1

0x0436,	// (0x000224cb) popup_call6_1st_window_t2

0x0444,	// (0x000224d9) popup_call6_1st_window_t3

0x0002,

0xfe3d,	// (0x00031ed2) popup_call6_1st_window_t

0x4247,	// (0x000262dc) bg_popup_call2_in_pane_cp04

0x0452,	// (0x000224e7) popup_call6_2nd_window_g1

0x045a,	// (0x000224ef) popup_call6_2nd_window_g2

0x0462,	// (0x000224f7) popup_call6_2nd_window_g3

0x0002,

0xfe44,	// (0x00031ed9) popup_call6_2nd_window_g

0x046a,	// (0x000224ff) popup_call6_2nd_window_t1

0xa9c9,	// (0x0002ca5e) bg_button_pane_cp15

0xef6f,	// (0x00031004) cell_call6_btn_pane_g1

0xef78,	// (0x0003100d) cell_call6_btn_pane_t1

0x9ec1,	// (0x0002bf56) listscroll_wgtman_pane_ParamLimits

0x9ec1,	// (0x0002bf56) listscroll_wgtman_pane

0x9ee2,	// (0x0002bf77) wgtman_btn_pane_ParamLimits

0x9ee2,	// (0x0002bf77) wgtman_btn_pane

0xad82,	// (0x0002ce17) aid_scroll_copy1

0x04c8,	// (0x0002255d) list_wgtman_pane

0x9f22,	// (0x0002bfb7) wgtman_btn_pane_g1_ParamLimits

0x9f22,	// (0x0002bfb7) wgtman_btn_pane_g1

0x9f4e,	// (0x0002bfe3) wgtman_btn_pane_t1_ParamLimits

0x9f4e,	// (0x0002bfe3) wgtman_btn_pane_t1

0x0531,	// (0x000225c6) wgtman_btn_pane_t2_ParamLimits

0x0531,	// (0x000225c6) wgtman_btn_pane_t2

0x0001,

0xfe4b,	// (0x00031ee0) wgtman_btn_pane_t_ParamLimits

0xfe4b,	// (0x00031ee0) wgtman_btn_pane_t

0x9f8b,	// (0x0002c020) listrow_wgtman_pane_ParamLimits

0x9f8b,	// (0x0002c020) listrow_wgtman_pane

0x9f9d,	// (0x0002c032) listrow_wgtman_pane_g1

0x9faa,	// (0x0002c03f) listrow_wgtman_pane_g2

0x0001,

0xfe50,	// (0x00031ee5) listrow_wgtman_pane_g

0x9fc2,	// (0x0002c057) listrow_wgtman_pane_t1

0x9fda,	// (0x0002c06f) listrow_wgtman_pane_t2

0x0001,

0xfe55,	// (0x00031eea) listrow_wgtman_pane_t

0xa000,	// (0x0002c095) wait_bar_pane_cp09

0x05ce,	// (0x00022663) main_calllock_btn_pane

0x05d6,	// (0x0002266b) main_calllock_pane_g1

0x3237,	// (0x000252cc) bg_button_pane_cp17

0x05df,	// (0x00022674) main_calllock_btn_pane_g1

0x05e8,	// (0x0002267d) main_calllock_btn_pane_t1

0x3237,	// (0x000252cc) main_dialer3_pane

0x3237,	// (0x000252cc) main_fmrd2_pane

0x44a0,	// (0x00026535) main_fs_bigclock_unlock_btn_pane_g1

0x05ff,	// (0x00022694) main_fs_bigclock_unlock_btn_pane_t1

0xa012,	// (0x0002c0a7) area_fmrd2_info_pane_ParamLimits

0xa012,	// (0x0002c0a7) area_fmrd2_info_pane

0xa021,	// (0x0002c0b6) area_fmrd2_visual_pane_ParamLimits

0xa021,	// (0x0002c0b6) area_fmrd2_visual_pane

0xa02f,	// (0x0002c0c4) fmrd2_indi_pane_ParamLimits

0xa02f,	// (0x0002c0c4) fmrd2_indi_pane

0xa03c,	// (0x0002c0d1) area_fmrd2_visual_pane_g1

0xa044,	// (0x0002c0d9) area_fmrd2_visual_pane_t1

0xa052,	// (0x0002c0e7) area_fmrd2_visual_pane_t2

0xa060,	// (0x0002c0f5) area_fmrd2_visual_pane_t3

0x0002,

0xfe5f,	// (0x00031ef4) area_fmrd2_visual_pane_t

0xa06e,	// (0x0002c103) area_fmrd2_info_pane_g1

0xa076,	// (0x0002c10b) area_fmrd2_info_pane_t1

0xa084,	// (0x0002c119) area_fmrd2_info_pane_t2

0xa092,	// (0x0002c127) area_fmrd2_info_pane_t3

0xa0a0,	// (0x0002c135) area_fmrd2_info_pane_t4

0x0003,

0xfe66,	// (0x00031efb) area_fmrd2_info_pane_t

0xa0ae,	// (0x0002c143) fmrd2_indi_pane_t1

0xa0bc,	// (0x0002c151) fmrd2_indi_pane_t2

0xa0ca,	// (0x0002c15f) fmrd2_indi_pane_t3

0x0002,

0xfe6f,	// (0x00031f04) fmrd2_indi_pane_t

0xe667,	// (0x000306fc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe667,	// (0x000306fc) list_single_fs_bigclock_indicator_pane_g5

0xe715,	// (0x000307aa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe715,	// (0x000307aa) list_single_fs_bigclock_indicator_pane_t5

0x974d,	// (0x0002b7e2) aid_cell_bcale_month_pane_ParamLimits

0x974d,	// (0x0002b7e2) aid_cell_bcale_month_pane

0x976b,	// (0x0002b800) bcale_month_pane_ParamLimits

0x976b,	// (0x0002b800) bcale_month_pane

0x9783,	// (0x0002b818) bcale_preview_pane_ParamLimits

0x9783,	// (0x0002b818) bcale_preview_pane

0x002e,	// (0x000220c3) list_single_fs_bigclock_pane_t1_ParamLimits

0x004a,	// (0x000220df) list_single_fs_bigclock_pane_t2_ParamLimits

0x004a,	// (0x000220df) list_single_fs_bigclock_pane_t2

0x0001,

0xfdea,	// (0x00031e7f) list_single_fs_bigclock_pane_t_ParamLimits

0xfdea,	// (0x00031e7f) list_single_fs_bigclock_pane_t

0x05f7,	// (0x0002268c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5a,	// (0x00031eef) main_fs_bigclock_unlock_btn_pane_g

0xa0d8,	// (0x0002c16d) aid_dia3_key_size_ParamLimits

0xa0d8,	// (0x0002c16d) aid_dia3_key_size

0xa0e7,	// (0x0002c17c) aid_dia3_listrow_size_ParamLimits

0xa0e7,	// (0x0002c17c) aid_dia3_listrow_size

0xa0fa,	// (0x0002c18f) dia3_keypad_fun_pane_ParamLimits

0xa0fa,	// (0x0002c18f) dia3_keypad_fun_pane

0xa10e,	// (0x0002c1a3) dia3_keypad_num_pane_ParamLimits

0xa10e,	// (0x0002c1a3) dia3_keypad_num_pane

0xa11f,	// (0x0002c1b4) dia3_listscroll_pane_ParamLimits

0xa11f,	// (0x0002c1b4) dia3_listscroll_pane

0xa130,	// (0x0002c1c5) dia3_numentry_pane_ParamLimits

0xa130,	// (0x0002c1c5) dia3_numentry_pane

0x071a,	// (0x000227af) dia3_list_pane

0x0723,	// (0x000227b8) scroll_pane_cp12

0x3237,	// (0x000252cc) bg_dia3_numentry_pane

0xa144,	// (0x0002c1d9) dia3_numentry_pane_t1

0xa153,	// (0x0002c1e8) cell_dia3_key_num_pane

0xa15b,	// (0x0002c1f0) cell_dia3_key0_fun_pane_ParamLimits

0xa15b,	// (0x0002c1f0) cell_dia3_key0_fun_pane

0xa16f,	// (0x0002c204) cell_dia3_key1_fun_pane_ParamLimits

0xa16f,	// (0x0002c204) cell_dia3_key1_fun_pane

0xa186,	// (0x0002c21b) dia3_listrow_pane

0xe376,	// (0x0003040b) bg_dia3_numentry_pane_g1

0x3237,	// (0x000252cc) bg_button_pane_cp21

0x076a,	// (0x000227ff) cell_dia3_key_num_pane_t1

0x0778,	// (0x0002280d) cell_dia3_key_num_pane_t2

0x0787,	// (0x0002281c) cell_dia3_key_num_pane_t3

0x0796,	// (0x0002282b) cell_dia3_key_num_pane_t4

0x0003,

0xfe76,	// (0x00031f0b) cell_dia3_key_num_pane_t

0x3237,	// (0x000252cc) bg_button_pane_cp19

0x07a5,	// (0x0002283a) cell_dia3_key0_fun_pane_g1

0x3237,	// (0x000252cc) bg_button_pane_cp20

0xa198,	// (0x0002c22d) cell_dia3_key1_fun_pane_g1

0xa1a0,	// (0x0002c235) area_left_week_number_pane

0xa1ac,	// (0x0002c241) area_top_day_name_pane

0xa1bd,	// (0x0002c252) frame_month_view_pane

0x07e3,	// (0x00022878) grid_month_view_pane

0xa1ce,	// (0x0002c263) cell_top_day_name_pane_ParamLimits

0xa1ce,	// (0x0002c263) cell_top_day_name_pane

0xa1f1,	// (0x0002c286) cell_area_left_week_number_pane_ParamLimits

0xa1f1,	// (0x0002c286) cell_area_left_week_number_pane

0xa205,	// (0x0002c29a) cell_month_view_pane_ParamLimits

0xa205,	// (0x0002c29a) cell_month_view_pane

0x084c,	// (0x000228e1) frm_month_g1

0xa22a,	// (0x0002c2bf) frm_month_g2

0xa23b,	// (0x0002c2d0) frm_month_g3

0xa24c,	// (0x0002c2e1) frm_month_g4

0xa25d,	// (0x0002c2f2) frm_month_g5

0xa26e,	// (0x0002c303) frm_month_g6

0xa27f,	// (0x0002c314) frm_month_g7

0x08b3,	// (0x00022948) frm_month_g8

0xa290,	// (0x0002c325) frm_month_g9

0xa2a0,	// (0x0002c335) frm_month_g10

0xa2b0,	// (0x0002c345) frm_month_g11

0xa2c0,	// (0x0002c355) frm_month_g12

0xa2d0,	// (0x0002c365) frm_month_g13

0xa2e0,	// (0x0002c375) frm_month_g14

0xa2f0,	// (0x0002c385) frm_month_g15

0xa302,	// (0x0002c397) frm_month_g16

0x000f,

0xfe7f,	// (0x00031f14) frm_month_g

0x0928,	// (0x000229bd) cell_top_day_name_pane_t1

0xa314,	// (0x0002c3a9) cell_area_left_week_number_pane_g1

0xa320,	// (0x0002c3b5) cell_area_left_week_number_pane_t1

0x39d7,	// (0x00025a6c) cell_month_view_pane_g1

0xa333,	// (0x0002c3c8) cell_month_view_pane_t1

0x3237,	// (0x000252cc) main_fps_pane

0xe8e9,	// (0x0003097e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe8e9,	// (0x0003097e) cmail_ddmenu_btn02_pane_cp1

0xe905,	// (0x0003099a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe905,	// (0x0003099a) cmail_ddmenu_btn02_pane_cp2

0x9aa3,	// (0x0002bb38) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9aa3,	// (0x0002bb38) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd9d,	// (0x00031e32) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd9d,	// (0x00031e32) cmail_ddmenu_btn02_pane_g

0x9ac1,	// (0x0002bb56) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9ac1,	// (0x0002bb56) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda2,	// (0x00031e37) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda2,	// (0x00031e37) cmail_ddmenu_btn02_pane_t

0xa346,	// (0x0002c3db) fps_text_pane_ParamLimits

0xa346,	// (0x0002c3db) fps_text_pane

0xa35c,	// (0x0002c3f1) main_fps_pane_g1_ParamLimits

0xa35c,	// (0x0002c3f1) main_fps_pane_g1

0xa372,	// (0x0002c407) wait_bar_pane_cp010_ParamLimits

0xa372,	// (0x0002c407) wait_bar_pane_cp010

0xa383,	// (0x0002c418) fps_text_pane_t1_ParamLimits

0xa383,	// (0x0002c418) fps_text_pane_t1

0x0c32,	// (0x00022cc7) cam4_image_uncrop_pane_g1

0x0c3b,	// (0x00022cd0) cam4_image_uncrop_pane_g2

0x7763,	// (0x000297f8) cam4_image_uncrop_pane_g3

0x776c,	// (0x00029801) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x00031939) cam4_image_uncrop_pane_g

0xa186,	// (0x0002c21b) dia3_listrow_pane_ParamLimits

0x3237,	// (0x000252cc) main_phob2_pane

0x959e,	// (0x0002b633) cell_tport_appsw_pane_cp02_ParamLimits

0x959e,	// (0x0002b633) cell_tport_appsw_pane_cp02

0x95ae,	// (0x0002b643) cell_tport_appsw_pane_cp03_ParamLimits

0x95ae,	// (0x0002b643) cell_tport_appsw_pane_cp03

0x3237,	// (0x000252cc) phob2_contact_card_pane

0x3237,	// (0x000252cc) phob2_listscroll_pane

0x09b4,	// (0x00022a49) phob2_list_pane

0x09bc,	// (0x00022a51) scroll_pane_cp034

0xa39b,	// (0x0002c430) phob2_cc_data_pane_ParamLimits

0xa39b,	// (0x0002c430) phob2_cc_data_pane

0xa3b8,	// (0x0002c44d) phob2_cc_listscroll_pane_ParamLimits

0xa3b8,	// (0x0002c44d) phob2_cc_listscroll_pane

0x9f8b,	// (0x0002c020) list_double_large_graphic_phob2_pane_ParamLimits

0x9f8b,	// (0x0002c020) list_double_large_graphic_phob2_pane

0xa3d4,	// (0x0002c469) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa3d4,	// (0x0002c469) list_double_large_graphic_phob2_pane_g1

0xa3e1,	// (0x0002c476) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa3e1,	// (0x0002c476) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea0,	// (0x00031f35) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea0,	// (0x00031f35) list_double_large_graphic_phob2_pane_g

0xa405,	// (0x0002c49a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa405,	// (0x0002c49a) list_double_large_graphic_phob2_pane_t1

0xa41a,	// (0x0002c4af) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa41a,	// (0x0002c4af) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfea9,	// (0x00031f3e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfea9,	// (0x00031f3e) list_double_large_graphic_phob2_pane_t

0x3237,	// (0x000252cc) list_highlight_pane_cp024

0x0a61,	// (0x00022af6) phob2_cc_button_pane

0xa42f,	// (0x0002c4c4) phob2_cc_data_pane_g1_ParamLimits

0xa42f,	// (0x0002c4c4) phob2_cc_data_pane_g1

0xa446,	// (0x0002c4db) phob2_cc_data_pane_g2_ParamLimits

0xa446,	// (0x0002c4db) phob2_cc_data_pane_g2

0x0001,

0xfeae,	// (0x00031f43) phob2_cc_data_pane_g_ParamLimits

0xfeae,	// (0x00031f43) phob2_cc_data_pane_g

0xa458,	// (0x0002c4ed) phob2_cc_data_pane_t1_ParamLimits

0xa458,	// (0x0002c4ed) phob2_cc_data_pane_t1

0xa470,	// (0x0002c505) phob2_cc_data_pane_t2_ParamLimits

0xa470,	// (0x0002c505) phob2_cc_data_pane_t2

0xa488,	// (0x0002c51d) phob2_cc_data_pane_t3_ParamLimits

0xa488,	// (0x0002c51d) phob2_cc_data_pane_t3

0x0002,

0xfeb3,	// (0x00031f48) phob2_cc_data_pane_t_ParamLimits

0xfeb3,	// (0x00031f48) phob2_cc_data_pane_t

0x0ac6,	// (0x00022b5b) phob2_cc_list_pane_ParamLimits

0x0ac6,	// (0x00022b5b) phob2_cc_list_pane

0xe293,	// (0x00030328) scroll_pane_cp035_ParamLimits

0xe293,	// (0x00030328) scroll_pane_cp035

0x42b0,	// (0x00026345) bg_button_pane_cp033

0x0ad2,	// (0x00022b67) phob2_cc_button_pane_g1

0x0ade,	// (0x00022b73) phob2_cc_button_pane_t1

0x0af3,	// (0x00022b88) phob2_cc_button_pane_t2

0x0001,

0xfeba,	// (0x00031f4f) phob2_cc_button_pane_t

0xa4a0,	// (0x0002c535) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa4a0,	// (0x0002c535) list_double_large_graphic_phob2_cc_pane

0xa4ce,	// (0x0002c563) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa4ce,	// (0x0002c563) list_double_large_graphic_phob2_cc_pane_g1

0xa4da,	// (0x0002c56f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa4da,	// (0x0002c56f) list_double_large_graphic_phob2_cc_pane_g2

0xa4e6,	// (0x0002c57b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa4e6,	// (0x0002c57b) list_double_large_graphic_phob2_cc_pane_g3

0xa4f2,	// (0x0002c587) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa4f2,	// (0x0002c587) list_double_large_graphic_phob2_cc_pane_g4

0xa4fe,	// (0x0002c593) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa4fe,	// (0x0002c593) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfebf,	// (0x00031f54) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfebf,	// (0x00031f54) list_double_large_graphic_phob2_cc_pane_g

0xa50a,	// (0x0002c59f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa50a,	// (0x0002c59f) list_double_large_graphic_phob2_cc_pane_t1

0xa533,	// (0x0002c5c8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa533,	// (0x0002c5c8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeca,	// (0x00031f5f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeca,	// (0x00031f5f) list_double_large_graphic_phob2_cc_pane_t

0x0bec,	// (0x00022c81) list_highlight_pane_cp025_ParamLimits

0x0bec,	// (0x00022c81) list_highlight_pane_cp025

0x42b0,	// (0x00026345) bg_button_pane_cp033_ParamLimits

0x0ad2,	// (0x00022b67) phob2_cc_button_pane_g1_ParamLimits

0x0ade,	// (0x00022b73) phob2_cc_button_pane_t1_ParamLimits

0x0af3,	// (0x00022b88) phob2_cc_button_pane_t2_ParamLimits

0xfeba,	// (0x00031f4f) phob2_cc_button_pane_t_ParamLimits

0x3274,	// (0x00025309) popup_wgtman_window

0xe396,	// (0x0003042b) scroll_pane_cp038

0x9f04,	// (0x0002bf99) wgtman_btn_pane_cp_01_ParamLimits

0x9f04,	// (0x0002bf99) wgtman_btn_pane_cp_01

0x0bfa,	// (0x00022c8f) wgtman_content_pane

0x0c03,	// (0x00022c98) wgtman_heading_pane

0x3237,	// (0x000252cc) bg_heading_pane_cp02

0x0c0c,	// (0x00022ca1) wgtman_heading_pane_g1

0x0c14,	// (0x00022ca9) wgtman_heading_pane_t1

0x0c22,	// (0x00022cb7) scroll_pane_cp036

0x0c2a,	// (0x00022cbf) wgtman_list_pane

0xef87,	// (0x0003101c) wgtman_list_pane_t1_ParamLimits

0xef87,	// (0x0003101c) wgtman_list_pane_t1

0xd576,	// (0x0002f60b) cam4_grid_pane

0x7f11,	// (0x00029fa6) bg_button_pane_cp015_ParamLimits

0x7f21,	// (0x00029fb6) bg_button_pane_cp016_ParamLimits

0x7f33,	// (0x00029fc8) bg_button_pane_cp017_ParamLimits

0x7f83,	// (0x0002a018) popup_vitu2_query_window_g3_ParamLimits

0x7f83,	// (0x0002a018) popup_vitu2_query_window_g3

0x8036,	// (0x0002a0cb) popup_vitu2_query_window_t6_ParamLimits

0x8036,	// (0x0002a0cb) popup_vitu2_query_window_t6

0x8061,	// (0x0002a0f6) popup_vitu2_query_window_t7_ParamLimits

0x8061,	// (0x0002a0f6) popup_vitu2_query_window_t7

0x0c32,	// (0x00022cc7) cam4_grid_pane_g1

0x0c3b,	// (0x00022cd0) cam4_grid_pane_g2

0x0c44,	// (0x00022cd9) cam4_grid_pane_g3

0x0c4d,	// (0x00022ce2) cam4_grid_pane_g4

0x0003,

0xfecf,	// (0x00031f64) cam4_grid_pane_g

0x45e6,	// (0x0002667b) aid_placing_vt_slider_lsc_ParamLimits

0x48a4,	// (0x00026939) vidtel_button_pane_ParamLimits

0x48a4,	// (0x00026939) vidtel_button_pane

0x3237,	// (0x000252cc) bg_button_pane_cp034

0xa55c,	// (0x0002c5f1) vidtel_button_pane_g1

0xa564,	// (0x0002c5f9) vidtel_button_pane_t1

0xd91e,	// (0x0002f9b3) aid_size_vtel_slider_touch

0xe293,	// (0x00030328) scroll_pane_cp039

0xe3c5,	// (0x0003045a) ncim_query_button_pane_cp01_ParamLimits

0xe3e4,	// (0x00030479) ncimui_query_pane_g1_ParamLimits

0x42b0,	// (0x00026345) input_focus_pane_cp012_ParamLimits

0xe409,	// (0x0003049e) ncim_query_entry_pane_t1_ParamLimits

0xe293,	// (0x00030328) scroll_pane_cp039_ParamLimits

0xae46,	// (0x0002cedb) navi_pane_bcale_mc_g1

0xae4e,	// (0x0002cee3) navi_pane_bcale_mc_t1

0xe939,	// (0x000309ce) main_sp_fs_email_pane_g1

0xe945,	// (0x000309da) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x00031d34) main_sp_fs_email_pane_g

0xeda7,	// (0x00030e3c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xeda7,	// (0x00030e3c) list_single_cale_mrui_row_pane_g3

0x9ae1,	// (0x0002bb76) list_single_recal_day_pane_g5_event_pane

0xef10,	// (0x00030fa5) list_single_recal_day_pane_g7

0x0c74,	// (0x00022d09) list_recal_day_event_pane_cp01

0x0c7d,	// (0x00022d12) list_recal_vselct_arw_lo_pane_cp01

0x0c85,	// (0x00022d1a) list_recal_vselct_arw_up_pane_cp01

0x0c8d,	// (0x00022d22) list_recal_vselct_pane_cp01

0xd991,	// (0x0002fa26) list_recal_day_event_pane_cp01_g1

0x0c97,	// (0x00022d2c) list_recal_day_event_pane_cp01_t1

0xef18,	// (0x00030fad) list_single_recal_day_pane_t1_ParamLimits

0x9af7,	// (0x0002bb8c) list_single_recal_day_pane_t2_ParamLimits

0xfdb2,	// (0x00031e47) list_single_recal_day_pane_t_ParamLimits

0x3940,	// (0x000259d5) bg_notes_pane_ParamLimits

0x3adf,	// (0x00025b74) list_notes_pane_ParamLimits

0x3aed,	// (0x00025b82) scroll_pane_cp06_ParamLimits

0x3b17,	// (0x00025bac) main_notes_pane_ParamLimits

0x42b0,	// (0x00026345) main_welc_pane

0xa590,	// (0x0002c625) main_welc_body_pane_ParamLimits

0xa590,	// (0x0002c625) main_welc_body_pane

0xa5ac,	// (0x0002c641) main_welc_opti_pane_ParamLimits

0xa5ac,	// (0x0002c641) main_welc_opti_pane

0xa618,	// (0x0002c6ad) main_welc_pane_t1_ParamLimits

0xa618,	// (0x0002c6ad) main_welc_pane_t1

0xa758,	// (0x0002c7ed) main_welc_body_row_pane_ParamLimits

0xa758,	// (0x0002c7ed) main_welc_body_row_pane

0xb06a,	// (0x0002d0ff) main_welc_opti_row_pane_ParamLimits

0xb06a,	// (0x0002d0ff) main_welc_opti_row_pane

0x0e41,	// (0x00022ed6) main_welc_opti_row_pane_g1

0xa76b,	// (0x0002c800) main_welc_opti_row_pane_t1

0x0e58,	// (0x00022eed) main_welc_body_row_pane_t1

0x02dd,	// (0x00022372) popup_notif_wgt_heading_pane

0x0309,	// (0x0002239e) aid_size_list_notif_wgt_del_ParamLimits

0x0316,	// (0x000223ab) list_notif_wgt_row_pane_g1_ParamLimits

0x0322,	// (0x000223b7) list_notif_wgt_row_pane_g2_ParamLimits

0x0336,	// (0x000223cb) list_notif_wgt_row_pane_g3_ParamLimits

0xfe19,	// (0x00031eae) list_notif_wgt_row_pane_g_ParamLimits

0x0343,	// (0x000223d8) list_notif_wgt_row_pane_t1_ParamLimits

0x0359,	// (0x000223ee) list_notif_wgt_row_pane_t2_ParamLimits

0x036b,	// (0x00022400) list_notif_wgt_row_pane_t3_ParamLimits

0xfe20,	// (0x00031eb5) list_notif_wgt_row_pane_t_ParamLimits

0x9f9d,	// (0x0002c032) listrow_wgtman_pane_g1_ParamLimits

0x9faa,	// (0x0002c03f) listrow_wgtman_pane_g2_ParamLimits

0xfe50,	// (0x00031ee5) listrow_wgtman_pane_g_ParamLimits

0x9fc2,	// (0x0002c057) listrow_wgtman_pane_t1_ParamLimits

0x9fda,	// (0x0002c06f) listrow_wgtman_pane_t2_ParamLimits

0xfe55,	// (0x00031eea) listrow_wgtman_pane_t_ParamLimits

0xa000,	// (0x0002c095) wait_bar_pane_cp09_ParamLimits

0x3237,	// (0x000252cc) bg_popup_heading_pane_cp02

0x0e67,	// (0x00022efc) popup_notif_wgt_heading_pane_g1

0x0e6f,	// (0x00022f04) popup_notif_wgt_heading_pane_t1

0xc503,	// (0x0002e598) main_vids_pane

0x3237,	// (0x000252cc) vids_listscroll_pane

0xa77a,	// (0x0002c80f) scroll_pane_cp040

0x3237,	// (0x000252cc) vids_list_pane

0x0143,	// (0x000221d8) vids_list_double_pane_ParamLimits

0x0143,	// (0x000221d8) vids_list_double_pane

0xa785,	// (0x0002c81a) vids_list_double_pane_g1

0xa78e,	// (0x0002c823) vids_list_double_pane_t1

0xa79d,	// (0x0002c832) vids_list_double_pane_t2

0x0001,

0xfeee,	// (0x00031f83) vids_list_double_pane_t

0xa9bb,	// (0x0002ca50) main_ncimui_pane_ParamLimits

0x8a7f,	// (0x0002ab14) main_ncimui_pane_g1_ParamLimits

0x8a8b,	// (0x0002ab20) main_ncimui_pane_g2_ParamLimits

0x8a8b,	// (0x0002ab20) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x00031c35) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x00031c35) main_ncimui_pane_g

0xa5c3,	// (0x0002c658) main_welc_pane_g1_ParamLimits

0xa5c3,	// (0x0002c658) main_welc_pane_g1

0xa5d6,	// (0x0002c66b) main_welc_pane_g2_ParamLimits

0xa5d6,	// (0x0002c66b) main_welc_pane_g2

0x0003,

0xfed8,	// (0x00031f6d) main_welc_pane_g_ParamLimits

0xfed8,	// (0x00031f6d) main_welc_pane_g

0x3940,	// (0x000259d5) listscroll_mce_pane_ParamLimits

0x5cb5,	// (0x00027d4a) wait_bar_pane_cp10

0xc4f7,	// (0x0002e58c) main_cale_day_pane_ParamLimits

0xc4f7,	// (0x0002e58c) main_cale_week_pane_ParamLimits

0x3940,	// (0x000259d5) main_messa_pane_ParamLimits

0x72d0,	// (0x00029365) main_clock2_btn_pane_ParamLimits

0x72d0,	// (0x00029365) main_clock2_btn_pane

0xcd7d,	// (0x0002ee12) main_clock2_btn_pane_cp01_ParamLimits

0xcd7d,	// (0x0002ee12) main_clock2_btn_pane_cp01

0xed62,	// (0x00030df7) list_cale_mrui_pane_ParamLimits

0x03bc,	// (0x00022451) main_cf0_pane_g2

0x0001,

0xfe27,	// (0x00031ebc) main_cf0_pane_g

0xa1a0,	// (0x0002c235) area_left_week_number_pane_ParamLimits

0xa1ac,	// (0x0002c241) area_top_day_name_pane_ParamLimits

0xa1bd,	// (0x0002c252) frame_month_view_pane_ParamLimits

0x07e3,	// (0x00022878) grid_month_view_pane_ParamLimits

0x084c,	// (0x000228e1) frm_month_g1_ParamLimits

0xa22a,	// (0x0002c2bf) frm_month_g2_ParamLimits

0xa23b,	// (0x0002c2d0) frm_month_g3_ParamLimits

0xa24c,	// (0x0002c2e1) frm_month_g4_ParamLimits

0xa25d,	// (0x0002c2f2) frm_month_g5_ParamLimits

0xa26e,	// (0x0002c303) frm_month_g6_ParamLimits

0xa27f,	// (0x0002c314) frm_month_g7_ParamLimits

0x08b3,	// (0x00022948) frm_month_g8_ParamLimits

0xa290,	// (0x0002c325) frm_month_g9_ParamLimits

0xa2a0,	// (0x0002c335) frm_month_g10_ParamLimits

0xa2b0,	// (0x0002c345) frm_month_g11_ParamLimits

0xa2c0,	// (0x0002c355) frm_month_g12_ParamLimits

0xa2d0,	// (0x0002c365) frm_month_g13_ParamLimits

0xa2e0,	// (0x0002c375) frm_month_g14_ParamLimits

0xa2f0,	// (0x0002c385) frm_month_g15_ParamLimits

0xa302,	// (0x0002c397) frm_month_g16_ParamLimits

0xfe7f,	// (0x00031f14) frm_month_g_ParamLimits

0x0928,	// (0x000229bd) cell_top_day_name_pane_t1_ParamLimits

0xa314,	// (0x0002c3a9) cell_area_left_week_number_pane_g1_ParamLimits

0xa320,	// (0x0002c3b5) cell_area_left_week_number_pane_t1_ParamLimits

0x39d7,	// (0x00025a6c) cell_month_view_pane_g1_ParamLimits

0xa333,	// (0x0002c3c8) cell_month_view_pane_t1_ParamLimits

0x3938,	// (0x000259cd) main_clock2_btn_pane_g1

0x0ebe,	// (0x00022f53) main_clock2_btn_pane_t1

0x42b0,	// (0x00026345) listscroll_cmail_pane_ParamLimits

0xe939,	// (0x000309ce) main_sp_fs_email_pane_g1_ParamLimits

0xe945,	// (0x000309da) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x00031d34) main_sp_fs_email_pane_g_ParamLimits

0xee8c,	// (0x00030f21) list_recal_day_pane_ParamLimits

0xee9d,	// (0x00030f32) mian_recal_day_pane_t1

0x946a,	// (0x0002b4ff) list_single_dyc_row_text_pane_t4_ParamLimits

0x946a,	// (0x0002b4ff) list_single_dyc_row_text_pane_t4

0x94a1,	// (0x0002b536) list_single_dyc_row_text_pane_t5_ParamLimits

0x94a1,	// (0x0002b536) list_single_dyc_row_text_pane_t5

0xe9cd,	// (0x00030a62) list_single_dyc_row_text_pane_t6_ParamLimits

0xe9cd,	// (0x00030a62) list_single_dyc_row_text_pane_t6

0x5704,	// (0x00027799) aid_mgn_list_cale_time_pane

0xa9bb,	// (0x0002ca50) main_gallery2_pane_ParamLimits

0xcd91,	// (0x0002ee26) main_clock2_pane_cp01_t1

0xcd9f,	// (0x0002ee34) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x0003180b) main_clock2_pane_cp01_t

0x3f59,	// (0x00025fee) cale_week_scroll_pane_g16_ParamLimits

0x3f59,	// (0x00025fee) cale_week_scroll_pane_g16

0x4247,	// (0x000262dc) vorec_slider_pane

0xa564,	// (0x0002c5f9) vidtel_button_pane_t1_ParamLimits

0x9b9c,	// (0x0002bc31) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9bae,	// (0x0002bc43) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9bbf,	// (0x0002bc54) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9bbf,	// (0x0002bc54) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdd5,	// (0x00031e6a) main_fs_bigclock_clock_pane_g_ParamLimits

0x9bd2,	// (0x0002bc67) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9bed,	// (0x0002bc82) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdde,	// (0x00031e73) main_fs_bigclock_clock_pane_t_ParamLimits

0x6c0e,	// (0x00028ca3) main_mup3_lyrics_pane_ParamLimits

0x6c0e,	// (0x00028ca3) main_mup3_lyrics_pane

0xa7ab,	// (0x0002c840) main_mup3_lyrics_pane_t1_ParamLimits

0xa7ab,	// (0x0002c840) main_mup3_lyrics_pane_t1

0xd19f,	// (0x0002f234) aid_main_mp4_pane_t1_area

0xd1a9,	// (0x0002f23e) aid_main_mp4_pane_t2_area

0xd255,	// (0x0002f2ea) main_mp4_pane_g7_ParamLimits

0xd255,	// (0x0002f2ea) main_mp4_pane_g7

0xd261,	// (0x0002f2f6) main_mp4_pane_g8_ParamLimits

0xd261,	// (0x0002f2f6) main_mp4_pane_g8

0x774f,	// (0x000297e4) aid_call6_pane_g1_size

0xa4ba,	// (0x0002c54f) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa4ba,	// (0x0002c54f) list_double_large_graphic_phob2_other_pane

0xad99,	// (0x0002ce2e) list_double_large_graphic_phob2_other_pane_g1

0x3237,	// (0x000252cc) list_highlight_pane_cp026

0x42b0,	// (0x00026345) main_welc_pane_ParamLimits

0x9275,	// (0x0002b30a) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9275,	// (0x0002b30a) main_sp_fs_ctrlbar_pane_g3

0x928d,	// (0x0002b322) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x928d,	// (0x0002b322) main_sp_fs_ctrlbar_pane_g4

0x92cf,	// (0x0002b364) toolbar2_fixed_button_pane_cp01

0x92da,	// (0x0002b36f) toolbar2_fixed_button_pane_cp02

0x92e5,	// (0x0002b37a) toolbar2_fixed_button_pane_cp03

0xa57a,	// (0x0002c60f) list_welc_entry_pane_ParamLimits

0xa57a,	// (0x0002c60f) list_welc_entry_pane

0xa5e9,	// (0x0002c67e) main_welc_pane_g3_ParamLimits

0xa5e9,	// (0x0002c67e) main_welc_pane_g3

0xa632,	// (0x0002c6c7) main_welc_pane_t2_ParamLimits

0xa632,	// (0x0002c6c7) main_welc_pane_t2

0xa648,	// (0x0002c6dd) main_welc_pane_t3_ParamLimits

0xa648,	// (0x0002c6dd) main_welc_pane_t3

0x0005,

0xfee1,	// (0x00031f76) main_welc_pane_t_ParamLimits

0xfee1,	// (0x00031f76) main_welc_pane_t

0xa6f4,	// (0x0002c789) welc_button_pane_ParamLimits

0xa6f4,	// (0x0002c789) welc_button_pane

0xa748,	// (0x0002c7dd) welc_service_logo_pane_ParamLimits

0xa748,	// (0x0002c7dd) welc_service_logo_pane

0xa7ca,	// (0x0002c85f) list_single_welc_entry_pane_ParamLimits

0xa7ca,	// (0x0002c85f) list_single_welc_entry_pane

0xa7db,	// (0x0002c870) list_single_welc_entry_pane_g1

0xa7e3,	// (0x0002c878) list_single_welc_entry_pane_t1

0xa7f1,	// (0x0002c886) list_single_welc_entry_pane_t2

0x0001,

0xfef3,	// (0x00031f88) list_single_welc_entry_pane_t

0x3237,	// (0x000252cc) bg_button_pane_cp035

0x0f1f,	// (0x00022fb4) welc_button_pane_t1

0x0f2d,	// (0x00022fc2) welc_service_logo_pane_g1

0x0f36,	// (0x00022fcb) welc_service_logo_pane_g2

0x0001,

0xfef8,	// (0x00031f8d) welc_service_logo_pane_g

0xa9c9,	// (0x0002ca5e) main_int_radio_pane

0x3be7,	// (0x00025c7c) list_single_fs_dyc_pane_g1

0xa3ed,	// (0x0002c482) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa3ed,	// (0x0002c482) list_double_large_graphic_phob2_pane_g3

0xa3f9,	// (0x0002c48e) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa3f9,	// (0x0002c48e) list_double_large_graphic_phob2_pane_g4

0xa7ff,	// (0x0002c894) main_int_radio1_pane_ParamLimits

0xa7ff,	// (0x0002c894) main_int_radio1_pane

0x0f55,	// (0x00022fea) find_pane_cp02

0xa81c,	// (0x0002c8b1) input_focus_pane_cp12_ParamLimits

0xa81c,	// (0x0002c8b1) input_focus_pane_cp12

0xa82c,	// (0x0002c8c1) input_focus_pane_cp13_ParamLimits

0xa82c,	// (0x0002c8c1) input_focus_pane_cp13

0xa840,	// (0x0002c8d5) input_focus_pane_cp14_ParamLimits

0xa840,	// (0x0002c8d5) input_focus_pane_cp14

0x0f9a,	// (0x0002302f) int_radio1_listscroll_pane

0xa854,	// (0x0002c8e9) main_int_radio1_pane_g1_ParamLimits

0xa854,	// (0x0002c8e9) main_int_radio1_pane_g1

0xa868,	// (0x0002c8fd) main_int_radio1_pane_t1_ParamLimits

0xa868,	// (0x0002c8fd) main_int_radio1_pane_t1

0xa87f,	// (0x0002c914) main_int_radio1_pane_t2_ParamLimits

0xa87f,	// (0x0002c914) main_int_radio1_pane_t2

0xa896,	// (0x0002c92b) main_int_radio1_pane_t3_ParamLimits

0xa896,	// (0x0002c92b) main_int_radio1_pane_t3

0xa8ad,	// (0x0002c942) main_int_radio1_pane_t4_ParamLimits

0xa8ad,	// (0x0002c942) main_int_radio1_pane_t4

0x0ffd,	// (0x00023092) main_int_radio1_pane_t5_ParamLimits

0x0ffd,	// (0x00023092) main_int_radio1_pane_t5

0xa8bf,	// (0x0002c954) main_int_radio1_pane_t6_ParamLimits

0xa8bf,	// (0x0002c954) main_int_radio1_pane_t6

0xa8d4,	// (0x0002c969) main_int_radio1_pane_t7_ParamLimits

0xa8d4,	// (0x0002c969) main_int_radio1_pane_t7

0xa8e9,	// (0x0002c97e) main_int_radio1_pane_t8_ParamLimits

0xa8e9,	// (0x0002c97e) main_int_radio1_pane_t8

0xa906,	// (0x0002c99b) main_int_radio1_pane_t9_ParamLimits

0xa906,	// (0x0002c99b) main_int_radio1_pane_t9

0xa918,	// (0x0002c9ad) main_int_radio1_pane_t10_ParamLimits

0xa918,	// (0x0002c9ad) main_int_radio1_pane_t10

0xa93c,	// (0x0002c9d1) main_int_radio1_pane_t11_ParamLimits

0xa93c,	// (0x0002c9d1) main_int_radio1_pane_t11

0xa960,	// (0x0002c9f5) main_int_radio1_pane_t12_ParamLimits

0xa960,	// (0x0002c9f5) main_int_radio1_pane_t12

0x000b,

0xfefd,	// (0x00031f92) main_int_radio1_pane_t_ParamLimits

0xfefd,	// (0x00031f92) main_int_radio1_pane_t

0x10cc,	// (0x00023161) int_radio_list_pane

0x09bc,	// (0x00022a51) scroll_pane_cp037

0x0548,	// (0x000225dd) list_double_large_graphic_int_radio_pane_ParamLimits

0x0548,	// (0x000225dd) list_double_large_graphic_int_radio_pane

0x10d4,	// (0x00023169) list_double_large_graphic_int_radio_pane_g1

0x10dd,	// (0x00023172) list_double_large_graphic_int_radio_pane_t1

0x10eb,	// (0x00023180) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff16,	// (0x00031fab) list_double_large_graphic_int_radio_pane_t

0x3237,	// (0x000252cc) list_highlight_pane_cp027

0x0cb2,	// (0x00022d47) main_button_pane_4

0xa5f9,	// (0x0002c68e) main_welc_pane_g4_ParamLimits

0xa5f9,	// (0x0002c68e) main_welc_pane_g4

0xa65e,	// (0x0002c6f3) main_welc_pane_t4_ParamLimits

0xa65e,	// (0x0002c6f3) main_welc_pane_t4

0xa673,	// (0x0002c708) main_welc_pane_t5_ParamLimits

0xa673,	// (0x0002c708) main_welc_pane_t5

0xa6bb,	// (0x0002c750) main_welc_pane_t6_ParamLimits

0xa6bb,	// (0x0002c750) main_welc_pane_t6

0xa705,	// (0x0002c79a) welc_button_pane_2_ParamLimits

0xa705,	// (0x0002c79a) welc_button_pane_2

0xa71b,	// (0x0002c7b0) welc_button_pane_3_ParamLimits

0xa71b,	// (0x0002c7b0) welc_button_pane_3

0x0cb2,	// (0x00022d47) welc_button_pane_4

0xa736,	// (0x0002c7cb) welc_button_pane_5_ParamLimits

0xa736,	// (0x0002c7cb) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	0, // AknLayoutScalable_Apps::Tmain_acti_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_logo_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_sso_logo_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_sk_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_gap_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt1_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt2_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt3_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_Limits_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_txt_sig*,
	0, // AknLayoutScalable_Apps::Taid_sso_widget_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_window_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_body_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tinput_focus_pane_cp10_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t2_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t3_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_Limits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_query_pane_t_sig*,
	0, // AknLayoutScalable_Apps::Tbg_button_pane_cp22_sig*,
	0, // AknLayoutScalable_Apps::Tsso_btn_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tbg_popup_window_pane_cp11_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_sk_window_cp01_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_pane_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tscroll_pane_cp21_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_hdr_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_nml_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_popup_body_t_sub_pane_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_prog_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_ParamLimits_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_apps_pane_comp1_t1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_g1_sig*,
	0, // AknLayoutScalable_Apps::Tsso_option_row_pane_t1_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal

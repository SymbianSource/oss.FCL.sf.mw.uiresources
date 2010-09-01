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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005f6f9 };

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
0x4e22,	// (0x0006451b) Screen

0x4e2e,	// (0x00064527) application_window

0x4e8a,	// (0x00064583) area_bottom_pane_ParamLimits

0x4e8a,	// (0x00064583) area_bottom_pane

0x4ee2,	// (0x000645db) area_top_pane_ParamLimits

0x4ee2,	// (0x000645db) area_top_pane

0x4f46,	// (0x0006463f) call_video_uplink_pane_ParamLimits

0x4f46,	// (0x0006463f) call_video_uplink_pane

0x4f85,	// (0x0006467e) main_pane_ParamLimits

0x4f85,	// (0x0006467e) main_pane

0xe911,	// (0x0006e00a) context_pane

0x8fc4,	// (0x000686bd) navi_pane

0x8fea,	// (0x000686e3) popup_cale_events_window_ParamLimits

0x8fea,	// (0x000686e3) popup_cale_events_window

0xe924,	// (0x0006e01d) popup_mup_playback_window

0x9002,	// (0x000686fb) signal_pane

0x5510,	// (0x00064c09) main_browser_pane

0x5da5,	// (0x0006549e) main_burst_pane

0x8e48,	// (0x00068541) main_calc_pane

0xe8f7,	// (0x0006dff0) main_cale_day_pane

0x587d,	// (0x00064f76) main_cale_month_pane

0xe8f7,	// (0x0006dff0) main_cale_week_pane

0x5da5,	// (0x0006549e) main_call_pane

0x079d,	// (0x0005fe96) main_call_poc_pane

0x5da5,	// (0x0006549e) main_camera_pane

0x5da5,	// (0x0006549e) main_chi_dic_pane

0x7b1e,	// (0x00067217) main_clock_pane

0x079d,	// (0x0005fe96) main_fmradio_pane

0x5da5,	// (0x0006549e) main_graph_messa_pane

0x079d,	// (0x0005fe96) main_help_pane

0x5510,	// (0x00064c09) main_im_pane

0x52b8,	// (0x000649b1) main_image_pane_ParamLimits

0x52b8,	// (0x000649b1) main_image_pane

0x079d,	// (0x0005fe96) main_location2_pane

0x5da5,	// (0x0006549e) main_location_pane

0x52b8,	// (0x000649b1) main_messa_pane

0x079d,	// (0x0005fe96) main_mp2_pane

0x5da5,	// (0x0006549e) main_mp_pane

0x079d,	// (0x0005fe96) main_msg_pane

0x079d,	// (0x0005fe96) main_mup_eq_pane

0x079d,	// (0x0005fe96) main_mup_pane

0x5510,	// (0x00064c09) main_notes_pane

0x079d,	// (0x0005fe96) main_pec_pane

0x079d,	// (0x0005fe96) main_phob_pane

0x079d,	// (0x0005fe96) main_pinb_pane

0x079d,	// (0x0005fe96) main_postcard_pane

0x079d,	// (0x0005fe96) main_qdial_pane

0x5da5,	// (0x0006549e) main_skin_pane

0x079d,	// (0x0005fe96) main_smil2_pane

0x5da5,	// (0x0006549e) main_smil_pane

0x5da5,	// (0x0006549e) main_video_pane

0x5da5,	// (0x0006549e) main_video_tele_pane

0x52b8,	// (0x000649b1) main_viewer_pane_ParamLimits

0x52b8,	// (0x000649b1) main_viewer_pane

0x5da5,	// (0x0006549e) main_vorec_pane

0x8e92,	// (0x0006858b) popup_blid_sat_info_window_ParamLimits

0x8e92,	// (0x0006858b) popup_blid_sat_info_window

0x8eb2,	// (0x000685ab) popup_dyc_status_message_window_ParamLimits

0x8eb2,	// (0x000685ab) popup_dyc_status_message_window

0x8ec0,	// (0x000685b9) popup_grid_large_graphic_window_ParamLimits

0x8ec0,	// (0x000685b9) popup_grid_large_graphic_window

0x8f4f,	// (0x00068648) popup_loc_request_window_ParamLimits

0x8f4f,	// (0x00068648) popup_loc_request_window

0x8f9c,	// (0x00068695) popup_wml_address_window_ParamLimits

0x8f9c,	// (0x00068695) popup_wml_address_window

0x8d20,	// (0x00068419) call_muted_g1

0x8995,	// (0x0006808e) popup_call_audio_conf_window_ParamLimits

0x8995,	// (0x0006808e) popup_call_audio_conf_window

0x8d30,	// (0x00068429) popup_call_audio_first_window_ParamLimits

0x8d30,	// (0x00068429) popup_call_audio_first_window

0x8d70,	// (0x00068469) popup_call_audio_in_window_ParamLimits

0x8d70,	// (0x00068469) popup_call_audio_in_window

0x8d94,	// (0x0006848d) popup_call_audio_out_window_ParamLimits

0x8d94,	// (0x0006848d) popup_call_audio_out_window

0x8db6,	// (0x000684af) popup_call_audio_second_window_ParamLimits

0x8db6,	// (0x000684af) popup_call_audio_second_window

0x8de6,	// (0x000684df) popup_call_audio_wait_window_ParamLimits

0x8de6,	// (0x000684df) popup_call_audio_wait_window

0x8e07,	// (0x00068500) popup_number_entry_window_ParamLimits

0x8e07,	// (0x00068500) popup_number_entry_window

0x038a,	// (0x0005fa83) bg_popup_call_pane_cp05_ParamLimits

0x038a,	// (0x0005fa83) bg_popup_call_pane_cp05

0x03aa,	// (0x0005faa3) popup_number_entry_window_t1

0x03bd,	// (0x0005fab6) popup_number_entry_window_t2

0x03cf,	// (0x0005fac8) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0006e77e) popup_number_entry_window_t

0x03e1,	// (0x0005fada) text_title_cp2

0x03f4,	// (0x0005faed) bg_popup_call_pane_cp_ParamLimits

0x03f4,	// (0x0005faed) bg_popup_call_pane_cp

0x0402,	// (0x0005fafb) call_thumbnail_pane

0x040a,	// (0x0005fb03) popup_call_audio_in_window_g1_ParamLimits

0x040a,	// (0x0005fb03) popup_call_audio_in_window_g1

0x0416,	// (0x0005fb0f) popup_call_audio_in_window_g2_ParamLimits

0x0416,	// (0x0005fb0f) popup_call_audio_in_window_g2

0x0422,	// (0x0005fb1b) popup_call_audio_in_window_g3_ParamLimits

0x0422,	// (0x0005fb1b) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0006e787) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0006e787) popup_call_audio_in_window_g

0x042e,	// (0x0005fb27) popup_call_audio_in_window_t1_ParamLimits

0x042e,	// (0x0005fb27) popup_call_audio_in_window_t1

0x044a,	// (0x0005fb43) popup_call_audio_in_window_t2_ParamLimits

0x044a,	// (0x0005fb43) popup_call_audio_in_window_t2

0x0466,	// (0x0005fb5f) popup_call_audio_in_window_t3_ParamLimits

0x0466,	// (0x0005fb5f) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0006e78e) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0006e78e) popup_call_audio_in_window_t

0x03f4,	// (0x0005faed) bg_popup_call_pane_cp01_ParamLimits

0x03f4,	// (0x0005faed) bg_popup_call_pane_cp01

0x0402,	// (0x0005fafb) call_thumbnail_pane_cp02

0x0479,	// (0x0005fb72) call_type_pane_cp022

0x0481,	// (0x0005fb7a) popup_call_audio_out_window_g1_ParamLimits

0x0481,	// (0x0005fb7a) popup_call_audio_out_window_g1

0x0493,	// (0x0005fb8c) popup_call_audio_out_window_g2_ParamLimits

0x0493,	// (0x0005fb8c) popup_call_audio_out_window_g2

0x049f,	// (0x0005fb98) popup_call_audio_out_window_g3_ParamLimits

0x049f,	// (0x0005fb98) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0006e795) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0006e795) popup_call_audio_out_window_g

0x04b1,	// (0x0005fbaa) popup_call_audio_out_window_t1_ParamLimits

0x04b1,	// (0x0005fbaa) popup_call_audio_out_window_t1

0x04c9,	// (0x0005fbc2) popup_call_audio_out_window_t2_ParamLimits

0x04c9,	// (0x0005fbc2) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0006e79c) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0006e79c) popup_call_audio_out_window_t

0x04de,	// (0x0005fbd7) bg_popup_call_pane_ParamLimits

0x04de,	// (0x0005fbd7) bg_popup_call_pane

0x5189,	// (0x00064882) call_thumbnail_pane_cp_ParamLimits

0x5189,	// (0x00064882) call_thumbnail_pane_cp

0x0562,	// (0x0005fc5b) call_type_pane_cp01_ParamLimits

0x0562,	// (0x0005fc5b) call_type_pane_cp01

0x05a6,	// (0x0005fc9f) popup_call_audio_first_window_g1_ParamLimits

0x05a6,	// (0x0005fc9f) popup_call_audio_first_window_g1

0x05f2,	// (0x0005fceb) popup_call_audio_first_window_g2_ParamLimits

0x05f2,	// (0x0005fceb) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0006e7a1) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0006e7a1) popup_call_audio_first_window_g

0x0636,	// (0x0005fd2f) popup_call_audio_first_window_t1_ParamLimits

0x0636,	// (0x0005fd2f) popup_call_audio_first_window_t1

0x06e2,	// (0x0005fddb) popup_call_audio_first_window_t4_ParamLimits

0x06e2,	// (0x0005fddb) popup_call_audio_first_window_t4

0x076e,	// (0x0005fe67) popup_call_audio_first_window_t5_ParamLimits

0x076e,	// (0x0005fe67) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0006e7a6) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0006e7a6) popup_call_audio_first_window_t

0x079d,	// (0x0005fe96) bg_popup_call_pane_cp02

0x07a7,	// (0x0005fea0) call_type_pane_cp023

0x07af,	// (0x0005fea8) popup_call_audio_wait_window_g1

0x07b7,	// (0x0005feb0) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0006e7ad) popup_call_audio_wait_window_g

0x07bf,	// (0x0005feb8) popup_call_audio_wait_window_t3

0x07cd,	// (0x0005fec6) bg_popup_call_pane_cp03_ParamLimits

0x07cd,	// (0x0005fec6) bg_popup_call_pane_cp03

0x082d,	// (0x0005ff26) call_thumbnail_pane_cp011_ParamLimits

0x082d,	// (0x0005ff26) call_thumbnail_pane_cp011

0x0839,	// (0x0005ff32) call_type_pane_cp034_ParamLimits

0x0839,	// (0x0005ff32) call_type_pane_cp034

0x0875,	// (0x0005ff6e) popup_call_audio_second_window_g1_ParamLimits

0x0875,	// (0x0005ff6e) popup_call_audio_second_window_g1

0x08b1,	// (0x0005ffaa) popup_call_audio_second_window_g2_ParamLimits

0x08b1,	// (0x0005ffaa) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0006e7b2) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0006e7b2) popup_call_audio_second_window_g

0x51ad,	// (0x000648a6) popup_call_audio_second_window_t1_ParamLimits

0x51ad,	// (0x000648a6) popup_call_audio_second_window_t1

0x522e,	// (0x00064927) popup_call_audio_second_window_t2_ParamLimits

0x522e,	// (0x00064927) popup_call_audio_second_window_t2

0x5264,	// (0x0006495d) popup_call_audio_second_window_t3_ParamLimits

0x5264,	// (0x0006495d) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0006e7b7) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0006e7b7) popup_call_audio_second_window_t

0x079d,	// (0x0005fe96) bg_popup_call_pane_cp04

0x529a,	// (0x00064993) list_conf_pane

0x52a2,	// (0x0006499b) popup_call_audio_conf_window_t1

0x52b0,	// (0x000649a9) call_thumbnail_pane_g1

0x52b8,	// (0x000649b1) bg_pinb_pane_ParamLimits

0x52b8,	// (0x000649b1) bg_pinb_pane

0x52c6,	// (0x000649bf) find_pinb_pane

0x52b8,	// (0x000649b1) listscroll_pinb_pane_ParamLimits

0x52b8,	// (0x000649b1) listscroll_pinb_pane

0x52d0,	// (0x000649c9) pinb_bg_pane_g1

0x52d0,	// (0x000649c9) pinb_bg_pane_g2

0x52d0,	// (0x000649c9) pinb_bg_pane_g3

0x52d0,	// (0x000649c9) pinb_bg_pane_g4

0x52d0,	// (0x000649c9) pinb_bg_pane_g5

0x52d0,	// (0x000649c9) pinb_bg_pane_g6

0x52d0,	// (0x000649c9) pinb_bg_pane_g7

0x52d0,	// (0x000649c9) pinb_bg_pane_g8

0x52d0,	// (0x000649c9) pinb_bg_pane_g9

0x52d0,	// (0x000649c9) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0006e7be) pinb_bg_pane_g

0x02fb,	// (0x0005f9f4) grid_pinb_pane

0x02fb,	// (0x0005f9f4) list_pinb_pane

0x52da,	// (0x000649d3) scroll_pane_cp01_ParamLimits

0x52da,	// (0x000649d3) scroll_pane_cp01

0x52e8,	// (0x000649e1) find_pinb_pane_g1_ParamLimits

0x52e8,	// (0x000649e1) find_pinb_pane_g1

0x5300,	// (0x000649f9) find_pinb_pane_t1

0x5312,	// (0x00064a0b) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0006e7d8) find_pinb_pane_t

0x5327,	// (0x00064a20) input_focus_pane_cp01_ParamLimits

0x5327,	// (0x00064a20) input_focus_pane_cp01

0x08ed,	// (0x0005ffe6) cell_pinb_pane_ParamLimits

0x08ed,	// (0x0005ffe6) cell_pinb_pane

0x5333,	// (0x00064a2c) cell_pinb_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) cell_pinb_pane_g1

0x5341,	// (0x00064a3a) cell_pinb_pane_g2_ParamLimits

0x5341,	// (0x00064a3a) cell_pinb_pane_g2

0x5341,	// (0x00064a3a) cell_pinb_pane_g3_ParamLimits

0x5341,	// (0x00064a3a) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0006e7dd) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0006e7dd) cell_pinb_pane_g

0x079d,	// (0x0005fe96) grid_highlight_pane_cp01

0x08ed,	// (0x0005ffe6) list_pinb_item_pane_ParamLimits

0x08ed,	// (0x0005ffe6) list_pinb_item_pane

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp02

0x534f,	// (0x00064a48) list_pinb_item_pane_g1_ParamLimits

0x534f,	// (0x00064a48) list_pinb_item_pane_g1

0x5341,	// (0x00064a3a) list_pinb_item_pane_g2_ParamLimits

0x5341,	// (0x00064a3a) list_pinb_item_pane_g2

0x5333,	// (0x00064a2c) list_pinb_item_pane_g3_ParamLimits

0x5333,	// (0x00064a2c) list_pinb_item_pane_g3

0x5341,	// (0x00064a3a) list_pinb_item_pane_g4_ParamLimits

0x5341,	// (0x00064a3a) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0006e7e4) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0006e7e4) list_pinb_item_pane_g

0x535d,	// (0x00064a56) list_pinb_item_pane_t1_ParamLimits

0x535d,	// (0x00064a56) list_pinb_item_pane_t1

0x538b,	// (0x00064a84) calc_display_pane

0x53a9,	// (0x00064aa2) calc_paper_pane

0x53c5,	// (0x00064abe) grid_calc_pane

0x079d,	// (0x0005fe96) bg_list_pane_cp01

0x53f1,	// (0x00064aea) clock_g1

0x53f9,	// (0x00064af2) clock_g2

0x0001,

0xf0f4,	// (0x0006e7ed) clock_g

0x5403,	// (0x00064afc) clock_t1_ParamLimits

0x5403,	// (0x00064afc) clock_t1

0x5418,	// (0x00064b11) clock_t2_ParamLimits

0x5418,	// (0x00064b11) clock_t2

0x542a,	// (0x00064b23) clock_t3_ParamLimits

0x542a,	// (0x00064b23) clock_t3

0x543c,	// (0x00064b35) clock_t4_ParamLimits

0x543c,	// (0x00064b35) clock_t4

0x544e,	// (0x00064b47) clock_t5_ParamLimits

0x544e,	// (0x00064b47) clock_t5

0x5463,	// (0x00064b5c) clock_t6_ParamLimits

0x5463,	// (0x00064b5c) clock_t6

0x5475,	// (0x00064b6e) clock_t7_ParamLimits

0x5475,	// (0x00064b6e) clock_t7

0x5487,	// (0x00064b80) clock_t8_ParamLimits

0x5487,	// (0x00064b80) clock_t8

0x549d,	// (0x00064b96) clock_t9_ParamLimits

0x549d,	// (0x00064b96) clock_t9

0x0008,

0xf0f9,	// (0x0006e7f2) clock_t_ParamLimits

0xf0f9,	// (0x0006e7f2) clock_t

0x54b3,	// (0x00064bac) popup_clock_analogue_window_cp02

0x54b3,	// (0x00064bac) popup_clock_digital_window_cp01

0x079d,	// (0x0005fe96) listscroll_help_pane

0x079d,	// (0x0005fe96) phob_pre_status_pane

0x54bb,	// (0x00064bb4) grid_qdial_pane

0x52b8,	// (0x000649b1) listscroll_mce_pane

0x52b8,	// (0x000649b1) bg_notes_pane

0x54c5,	// (0x00064bbe) list_notes_pane

0x54d3,	// (0x00064bcc) scroll_pane_cp06

0x54e2,	// (0x00064bdb) bg_calc_paper_pane

0x54f6,	// (0x00064bef) list_calc_pane

0x5510,	// (0x00064c09) bg_calc_display_pane

0x551c,	// (0x00064c15) calc_display_pane_t1

0x5531,	// (0x00064c2a) calc_display_pane_t2

0x5546,	// (0x00064c3f) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0006e805) calc_display_pane_t

0x5558,	// (0x00064c51) cell_calc_pane_ParamLimits

0x5558,	// (0x00064c51) cell_calc_pane

0x5585,	// (0x00064c7e) bg_calc_paper_pane_g1

0x5591,	// (0x00064c8a) bg_calc_paper_pane_g2

0x559d,	// (0x00064c96) bg_calc_paper_pane_g3

0x55a9,	// (0x00064ca2) bg_calc_paper_pane_g4

0x55b5,	// (0x00064cae) bg_calc_paper_pane_g5

0x55c1,	// (0x00064cba) bg_calc_paper_pane_g6

0x55d2,	// (0x00064ccb) bg_calc_paper_pane_g7

0x55e3,	// (0x00064cdc) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0006e80c) bg_calc_paper_pane_g

0x55f4,	// (0x00064ced) calc_bg_paper_pane_g9

0x5605,	// (0x00064cfe) list_calc_item_pane_ParamLimits

0x5605,	// (0x00064cfe) list_calc_item_pane

0x5632,	// (0x00064d2b) list_calc_item_pane_g1

0x563f,	// (0x00064d38) list_calc_item_pane_t1_ParamLimits

0x563f,	// (0x00064d38) list_calc_item_pane_t1

0x5651,	// (0x00064d4a) list_calc_item_pane_t2_ParamLimits

0x5651,	// (0x00064d4a) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0006e81d) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0006e81d) list_calc_item_pane_t

0x52d0,	// (0x000649c9) cell_calc_pane_g1

0x5681,	// (0x00064d7a) grid_highlight_pane_cp02

0x56a3,	// (0x00064d9c) bg_calc_display_pane_g1

0x56ac,	// (0x00064da5) bg_calc_display_pane_g2

0x56b6,	// (0x00064daf) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0006e827) bg_calc_display_pane_g

0x56bf,	// (0x00064db8) cell_qdial_pane_ParamLimits

0x56bf,	// (0x00064db8) cell_qdial_pane

0x56d3,	// (0x00064dcc) cell_qdial_pane_g1_ParamLimits

0x56d3,	// (0x00064dcc) cell_qdial_pane_g1

0x56e0,	// (0x00064dd9) cell_qdial_pane_g2_ParamLimits

0x56e0,	// (0x00064dd9) cell_qdial_pane_g2

0x56f0,	// (0x00064de9) cell_qdial_pane_g3_ParamLimits

0x56f0,	// (0x00064de9) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0006e82e) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0006e82e) cell_qdial_pane_g

0x5709,	// (0x00064e02) cell_qdial_pane_t1_ParamLimits

0x5709,	// (0x00064e02) cell_qdial_pane_t1

0x5721,	// (0x00064e1a) cell_qdial_pane_t2_ParamLimits

0x5721,	// (0x00064e1a) cell_qdial_pane_t2

0x5734,	// (0x00064e2d) cell_qdial_pane_t3_ParamLimits

0x5734,	// (0x00064e2d) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0006e837) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0006e837) cell_qdial_pane_t

0x079d,	// (0x0005fe96) grid_highlight_pane_cp04

0x5747,	// (0x00064e40) thumbnail_qdial_pane_ParamLimits

0x5747,	// (0x00064e40) thumbnail_qdial_pane

0x57a3,	// (0x00064e9c) list_help_pane

0x57ac,	// (0x00064ea5) scroll_pane_cp02

0x57b5,	// (0x00064eae) help_list_pane_t1_ParamLimits

0x57b5,	// (0x00064eae) help_list_pane_t1

0x57ef,	// (0x00064ee8) bg_notes_pane_g2

0x57f7,	// (0x00064ef0) bg_notes_pane_g3

0x57ff,	// (0x00064ef8) notes_bg_pane_g1

0x5807,	// (0x00064f00) notes_bg_pane_g4

0x580f,	// (0x00064f08) notes_bg_pane_g5

0x5817,	// (0x00064f10) notes_bg_pane_g6

0x581f,	// (0x00064f18) notes_bg_pane_g7

0x5827,	// (0x00064f20) notes_bg_pane_g8

0x582f,	// (0x00064f28) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0006e855) notes_bg_pane_g

0x5837,	// (0x00064f30) list_notes_text_pane_ParamLimits

0x5837,	// (0x00064f30) list_notes_text_pane

0x5863,	// (0x00064f5c) list_notes_text_pane_g1

0x4159,	// (0x00063852) list_notes_text_pane_t1

0x587d,	// (0x00064f76) listscroll_cale_week_pane

0x58ab,	// (0x00064fa4) bg_cale_heading_pane

0x58cd,	// (0x00064fc6) bg_cale_pane_cp01

0x58ea,	// (0x00064fe3) cale_week_corner_pane

0x5904,	// (0x00064ffd) cale_week_day_heading_pane

0x5926,	// (0x0006501f) cale_week_scroll_pane_g1

0x5943,	// (0x0006503c) cale_week_scroll_pane_g2

0x5956,	// (0x0006504f) cale_week_scroll_pane_g3

0x5969,	// (0x00065062) cale_week_scroll_pane_g4

0x597c,	// (0x00065075) cale_week_scroll_pane_g5

0x598f,	// (0x00065088) cale_week_scroll_pane_g6

0x59a2,	// (0x0006509b) cale_week_scroll_pane_g7

0x59b7,	// (0x000650b0) cale_week_scroll_pane_g8

0x59cc,	// (0x000650c5) cale_week_scroll_pane_g9

0x59df,	// (0x000650d8) cale_week_scroll_pane_g10

0x59f2,	// (0x000650eb) cale_week_scroll_pane_g11

0x5a05,	// (0x000650fe) cale_week_scroll_pane_g12

0x5a1c,	// (0x00065115) cale_week_scroll_pane_g13

0x5a37,	// (0x00065130) cale_week_scroll_pane_g14

0x5a52,	// (0x0006514b) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0006e864) cale_week_scroll_pane_g

0x5a82,	// (0x0006517b) cale_week_time_pane

0x5a97,	// (0x00065190) grid_cale_week_pane

0x5ac8,	// (0x000651c1) scroll_pane_cp08

0x5ae5,	// (0x000651de) cell_cale_week_pane_ParamLimits

0x5ae5,	// (0x000651de) cell_cale_week_pane

0x5b47,	// (0x00065240) cale_week_day_heading_pane_t1

0x5b62,	// (0x0006525b) cale_week_day_heading_pane_t2

0x5b7d,	// (0x00065276) cale_week_day_heading_pane_t3

0x5b98,	// (0x00065291) cale_week_day_heading_pane_t4

0x5bb3,	// (0x000652ac) cale_week_day_heading_pane_t5

0x5bce,	// (0x000652c7) cale_week_day_heading_pane_t6

0x5be9,	// (0x000652e2) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0006e885) cale_week_day_heading_pane_t

0x5c04,	// (0x000652fd) bg_cale_side_pane

0x5c12,	// (0x0006530b) cale_week_time_pane_t1

0x5c2c,	// (0x00065325) cale_week_time_pane_t2

0x5c46,	// (0x0006533f) cale_week_time_pane_t3

0x5c60,	// (0x00065359) cale_week_time_pane_t4

0x5c7a,	// (0x00065373) cale_week_time_pane_t5

0x5c94,	// (0x0006538d) cale_week_time_pane_t6

0x5cb4,	// (0x000653ad) cale_week_time_pane_t7

0x5cd6,	// (0x000653cf) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0006e894) cale_week_time_pane_t

0x5cfa,	// (0x000653f3) cell_cale_week_pane_g2

0x5d1e,	// (0x00065417) cell_cale_week_pane_g3_ParamLimits

0x5d1e,	// (0x00065417) cell_cale_week_pane_g3

0x5d36,	// (0x0006542f) grid_highlight_pane_cp07

0x5d3e,	// (0x00065437) listscroll_gms_pane

0x5d48,	// (0x00065441) grid_gms_pane

0x5d51,	// (0x0006544a) listscroll_gms_pane_g1

0x5d59,	// (0x00065452) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0006e8a5) listscroll_gms_pane_g

0x5d61,	// (0x0006545a) scroll_pane_cp010

0x5d6c,	// (0x00065465) cell_gms_pane_ParamLimits

0x5d6c,	// (0x00065465) cell_gms_pane

0x5d7c,	// (0x00065475) cell_gms_pane_g1

0x5d84,	// (0x0006547d) cell_gms_pane_g2

0x5863,	// (0x00064f5c) cell_gms_pane_g3

0x5d8c,	// (0x00065485) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0006e8aa) cell_gms_pane_g

0x5d95,	// (0x0006548e) grid_highlight_pane_cp09

0x8ca4,	// (0x0006839d) phob_pre_status_pane_g1

0x8cac,	// (0x000683a5) phob_pre_status_pane_g2

0x8cb4,	// (0x000683ad) phob_pre_status_pane_g3

0x8cbc,	// (0x000683b5) phob_pre_status_pane_g4

0x0004,

0xf58d,	// (0x0006ec86) phob_pre_status_pane_g

0x8ccc,	// (0x000683c5) phob_pre_status_pane_t1

0x8cdc,	// (0x000683d5) phob_pre_status_pane_t2

0x8cec,	// (0x000683e5) phob_pre_status_pane_t3

0x0002,

0xf598,	// (0x0006ec91) phob_pre_status_pane_t

0x5da5,	// (0x0006549e) bg_list_pane_cp05

0x5dad,	// (0x000654a6) grid_vorec_pane

0x5db7,	// (0x000654b0) vorec_t1

0x5dc5,	// (0x000654be) vorec_t2

0x5dd3,	// (0x000654cc) vorec_t3

0x5de1,	// (0x000654da) vorec_t4

0xd719,	// (0x0006ce12) vorec_t5

0xd727,	// (0x0006ce20) vorec_t6

0x0004,

0xf1ba,	// (0x0006e8b3) vorec_t

0xd735,	// (0x0006ce2e) wait_bar_pane_cp01

0x5dfd,	// (0x000654f6) cell_vorec_pane_ParamLimits

0x5dfd,	// (0x000654f6) cell_vorec_pane

0x5e10,	// (0x00065509) cell_vorec_pane_g1

0x079d,	// (0x0005fe96) grid_highlight_pane_cp05

0x08ed,	// (0x0005ffe6) cams_zoom_pane

0x08ed,	// (0x0005ffe6) image_vga_pane

0x5341,	// (0x00064a3a) main_camera_pane_g1

0x5341,	// (0x00064a3a) main_camera_pane_g2

0x5341,	// (0x00064a3a) main_camera_pane_g3

0x5341,	// (0x00064a3a) main_camera_pane_g4

0x5341,	// (0x00064a3a) main_camera_pane_g5

0x5341,	// (0x00064a3a) main_camera_pane_g6

0x5341,	// (0x00064a3a) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0006e8be) main_camera_pane_g

0x5e1a,	// (0x00065513) main_camera_pane_t1

0x5e1a,	// (0x00065513) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0006e8cf) main_camera_pane_t

0x5e2e,	// (0x00065527) cams_zoom_pane_cp_ParamLimits

0x5e2e,	// (0x00065527) cams_zoom_pane_cp

0x5e5c,	// (0x00065555) image_cif_pane_ParamLimits

0x5e5c,	// (0x00065555) image_cif_pane

0x02fb,	// (0x0005f9f4) image_subqcif_pane

0x5e6a,	// (0x00065563) main_video_pane_g1_ParamLimits

0x5e6a,	// (0x00065563) main_video_pane_g1

0x5e92,	// (0x0006558b) main_video_pane_g2_ParamLimits

0x5e92,	// (0x0006558b) main_video_pane_g2

0x5ec5,	// (0x000655be) main_video_pane_g3_ParamLimits

0x5ec5,	// (0x000655be) main_video_pane_g3

0x5ec5,	// (0x000655be) main_video_pane_g4_ParamLimits

0x5ec5,	// (0x000655be) main_video_pane_g4

0x5ef3,	// (0x000655ec) main_video_pane_g5_ParamLimits

0x5ef3,	// (0x000655ec) main_video_pane_g5

0x5f01,	// (0x000655fa) main_video_pane_g6_ParamLimits

0x5f01,	// (0x000655fa) main_video_pane_g6

0x0006,

0xf1db,	// (0x0006e8d4) main_video_pane_g_ParamLimits

0xf1db,	// (0x0006e8d4) main_video_pane_g

0x5f29,	// (0x00065622) main_video_pane_t1_ParamLimits

0x5f29,	// (0x00065622) main_video_pane_t1

0x5f63,	// (0x0006565c) cams_zoom_pane_g1

0x5f63,	// (0x0006565c) cams_zoom_pane_g2

0x5f63,	// (0x0006565c) cams_zoom_pane_g3

0x5f63,	// (0x0006565c) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0006e8e3) cams_zoom_pane_g

0x5f79,	// (0x00065672) grid_cams_pane

0x5f87,	// (0x00065680) linegrid_cams_pane

0x5f95,	// (0x0006568e) cell_cams_pane_ParamLimits

0x5f95,	// (0x0006568e) cell_cams_pane

0x5fa8,	// (0x000656a1) cams_burst_image_pane

0x5fb0,	// (0x000656a9) cell_cams_pane_g1

0x079d,	// (0x0005fe96) grid_highlight_pane_cp03

0x52d0,	// (0x000649c9) mp_bg_pane_g1

0x02fb,	// (0x0005f9f4) bg_list_pane_cp03

0x02fb,	// (0x0005f9f4) bg_mp_pane

0x02fb,	// (0x0005f9f4) grid_mp_pane

0x5f63,	// (0x0006565c) media_player_g1

0x77d6,	// (0x00066ecf) media_player_t1

0x77d6,	// (0x00066ecf) media_player_t2

0x77d6,	// (0x00066ecf) media_player_t3

0x77d6,	// (0x00066ecf) media_player_t4

0x77d6,	// (0x00066ecf) media_player_t5

0x77d6,	// (0x00066ecf) media_player_t6

0x77d6,	// (0x00066ecf) media_player_t7

0x0006,

0xf577,	// (0x0006ec70) media_player_t

0x02fb,	// (0x0005f9f4) wait_bar_pane_cp02

0xf55c,	// (0x0006ec55) main_usb_pane_t

0x7b1e,	// (0x00067217) cell_mp_pane

0x52d0,	// (0x000649c9) cell_mp_pane_g1

0x079d,	// (0x0005fe96) grid_highlight_pane_cp06

0x5fcc,	// (0x000656c5) grid_skin_colour_pane

0x5fd4,	// (0x000656cd) list_highlight_pane_cp03

0x5fdc,	// (0x000656d5) skin_g1

0x5fe6,	// (0x000656df) skin_t1

0x5ff5,	// (0x000656ee) skin_t2

0x0001,

0xf218,	// (0x0006e911) skin_t

0x6003,	// (0x000656fc) cell_skin_colour_pane_ParamLimits

0x6003,	// (0x000656fc) cell_skin_colour_pane

0x601f,	// (0x00065718) cell_skin_colour_pane_g1

0x6099,	// (0x00065792) call_video_g1_ParamLimits

0x6099,	// (0x00065792) call_video_g1

0x60a9,	// (0x000657a2) call_video_g2_ParamLimits

0x60a9,	// (0x000657a2) call_video_g2

0x0001,

0xf21d,	// (0x0006e916) call_video_g_ParamLimits

0xf21d,	// (0x0006e916) call_video_g

0x6103,	// (0x000657fc) call_video_uplink_pane_cp1_ParamLimits

0x6103,	// (0x000657fc) call_video_uplink_pane_cp1

0x616f,	// (0x00065868) call_video_uplink_pane_cp2

0x61d7,	// (0x000658d0) video_down_crop_pane_ParamLimits

0x61d7,	// (0x000658d0) video_down_crop_pane

0x62c9,	// (0x000659c2) video_down_pane_ParamLimits

0x62c9,	// (0x000659c2) video_down_pane

0x63c9,	// (0x00065ac2) video_down_subqcif_pane_ParamLimits

0x63c9,	// (0x00065ac2) video_down_subqcif_pane

0x63e1,	// (0x00065ada) video_down_subqcif_pane_cp_ParamLimits

0x63e1,	// (0x00065ada) video_down_subqcif_pane_cp

0x6427,	// (0x00065b20) im_reading_pane_ParamLimits

0x6427,	// (0x00065b20) im_reading_pane

0x6439,	// (0x00065b32) im_writing_pane_ParamLimits

0x6439,	// (0x00065b32) im_writing_pane

0x645f,	// (0x00065b58) im_reading_pane_t1

0x64b7,	// (0x00065bb0) list_im_pane

0x64c8,	// (0x00065bc1) scroll_pane_cp07

0x64e1,	// (0x00065bda) im_writing_pane_t1_ParamLimits

0x64e1,	// (0x00065bda) im_writing_pane_t1

0x64f3,	// (0x00065bec) im_writing_pane_t2_ParamLimits

0x64f3,	// (0x00065bec) im_writing_pane_t2

0x0001,

0xf227,	// (0x0006e920) im_writing_pane_t_ParamLimits

0xf227,	// (0x0006e920) im_writing_pane_t

0x079d,	// (0x0005fe96) input_focus_pane_cp04

0x079d,	// (0x0005fe96) input_focus_pane_cp05

0x6510,	// (0x00065c09) list_im_single_pane_ParamLimits

0x6510,	// (0x00065c09) list_im_single_pane

0x6537,	// (0x00065c30) list_single_im_pane_t1

0x5da5,	// (0x0006549e) blid_accuracy_pane

0x5da5,	// (0x0006549e) blid_compass_pane

0xe8af,	// (0x0006dfa8) main_location_t1

0xe8af,	// (0x0006dfa8) main_location_t2

0xe8af,	// (0x0006dfa8) main_location_t3

0x0002,

0xf586,	// (0x0006ec7f) main_location_t

0x079d,	// (0x0005fe96) aid_levels_location

0x52d0,	// (0x000649c9) blid_accuracy_pane_g1

0x52d0,	// (0x000649c9) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0006e974) blid_accuracy_pane_g

0x6571,	// (0x00065c6a) wml_content_pane

0x65af,	// (0x00065ca8) wml_button_pane_ParamLimits

0x65af,	// (0x00065ca8) wml_button_pane

0x65c3,	// (0x00065cbc) wml_list_single_large_pane_ParamLimits

0x65c3,	// (0x00065cbc) wml_list_single_large_pane

0x65ee,	// (0x00065ce7) wml_list_single_medium_pane_ParamLimits

0x65ee,	// (0x00065ce7) wml_list_single_medium_pane

0x6620,	// (0x00065d19) wml_list_single_small_pane_ParamLimits

0x6620,	// (0x00065d19) wml_list_single_small_pane

0x665d,	// (0x00065d56) wml_selection_box_pane_ParamLimits

0x665d,	// (0x00065d56) wml_selection_box_pane

0x6670,	// (0x00065d69) wml_list_single_pane_t1

0x667f,	// (0x00065d78) wml_list_single_medium_pane_t1

0x668e,	// (0x00065d87) wml_list_single_large_pane_t1

0x669d,	// (0x00065d96) input_focus_pane_cp02_ParamLimits

0x669d,	// (0x00065d96) input_focus_pane_cp02

0x66b0,	// (0x00065da9) wml_selection_box_pane_g1

0x66b9,	// (0x00065db2) wml_selection_box_pane_t1_ParamLimits

0x66b9,	// (0x00065db2) wml_selection_box_pane_t1

0x52b8,	// (0x000649b1) bg_wml_button_pane_ParamLimits

0x52b8,	// (0x000649b1) bg_wml_button_pane

0x66d1,	// (0x00065dca) wml_button_pane_g1

0x66d9,	// (0x00065dd2) wml_button_pane_t1

0x66d1,	// (0x00065dca) wml_button_bg_pane_g1

0x66e9,	// (0x00065de2) wml_button_bg_pane_g2

0x66f1,	// (0x00065dea) wml_button_bg_pane_g3

0x66f9,	// (0x00065df2) wml_button_bg_pane_g4

0x6701,	// (0x00065dfa) wml_button_bg_pane_g5

0x6709,	// (0x00065e02) wml_button_bg_pane_g6

0x6711,	// (0x00065e0a) wml_button_bg_pane_g7

0x6719,	// (0x00065e12) wml_button_bg_pane_g8

0x6721,	// (0x00065e1a) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0006e925) wml_button_bg_pane_g

0x6729,	// (0x00065e22) bg_list_pane_cp02

0x6733,	// (0x00065e2c) mce_header_pane_ParamLimits

0x6733,	// (0x00065e2c) mce_header_pane

0x6749,	// (0x00065e42) mce_icon_pane

0x6749,	// (0x00065e42) mce_image_pane

0x6752,	// (0x00065e4b) mce_text_pane_ParamLimits

0x6752,	// (0x00065e4b) mce_text_pane

0x6765,	// (0x00065e5e) scroll_pane_cp03

0x65a7,	// (0x00065ca0) scroll_pane_cp04

0x676f,	// (0x00065e68) scroll_pane_cp05_ParamLimits

0x676f,	// (0x00065e68) scroll_pane_cp05

0x677b,	// (0x00065e74) mce_header_field_pane_ParamLimits

0x677b,	// (0x00065e74) mce_header_field_pane

0x679b,	// (0x00065e94) mce_header_field_pane_2_ParamLimits

0x679b,	// (0x00065e94) mce_header_field_pane_2

0x67b1,	// (0x00065eaa) mce_header_field_pane_3

0x67b9,	// (0x00065eb2) list_single_mce_message_pane_ParamLimits

0x67b9,	// (0x00065eb2) list_single_mce_message_pane

0x67e7,	// (0x00065ee0) list_single_mce_smart_pane_ParamLimits

0x67e7,	// (0x00065ee0) list_single_mce_smart_pane

0x6820,	// (0x00065f19) input_focus_pane_cp03

0x6829,	// (0x00065f22) list_header_data_pane

0x6831,	// (0x00065f2a) mce_header_field_pane_t1

0x683f,	// (0x00065f38) list_single_mce_header_pane_ParamLimits

0x683f,	// (0x00065f38) list_single_mce_header_pane

0x686f,	// (0x00065f68) list_single_mce_header_pane_t1

0x687e,	// (0x00065f77) list_single_mce_message_pane_g1

0x6886,	// (0x00065f7f) list_single_mce_message_pane_t1

0x68ba,	// (0x00065fb3) bg_cale_heading_pane_cp01_ParamLimits

0x68ba,	// (0x00065fb3) bg_cale_heading_pane_cp01

0x6908,	// (0x00066001) bg_cale_pane_cp02_ParamLimits

0x6908,	// (0x00066001) bg_cale_pane_cp02

0x6935,	// (0x0006602e) cale_month_corner_pane

0x6954,	// (0x0006604d) cale_month_day_heading_pane_ParamLimits

0x6954,	// (0x0006604d) cale_month_day_heading_pane

0x69ba,	// (0x000660b3) cale_month_pane_g1_ParamLimits

0x69ba,	// (0x000660b3) cale_month_pane_g1

0x69fd,	// (0x000660f6) cale_month_pane_g2_ParamLimits

0x69fd,	// (0x000660f6) cale_month_pane_g2

0x6a37,	// (0x00066130) cale_month_pane_g3_ParamLimits

0x6a37,	// (0x00066130) cale_month_pane_g3

0x6a87,	// (0x00066180) cale_month_pane_g4_ParamLimits

0x6a87,	// (0x00066180) cale_month_pane_g4

0x6ad7,	// (0x000661d0) cale_month_pane_g5_ParamLimits

0x6ad7,	// (0x000661d0) cale_month_pane_g5

0x6b27,	// (0x00066220) cale_month_pane_g6_ParamLimits

0x6b27,	// (0x00066220) cale_month_pane_g6

0x6b77,	// (0x00066270) cale_month_pane_g7_ParamLimits

0x6b77,	// (0x00066270) cale_month_pane_g7

0x6bdf,	// (0x000662d8) cale_month_pane_g8_ParamLimits

0x6bdf,	// (0x000662d8) cale_month_pane_g8

0x6c47,	// (0x00066340) cale_month_pane_g9_ParamLimits

0x6c47,	// (0x00066340) cale_month_pane_g9

0x6ca5,	// (0x0006639e) cale_month_pane_g10_ParamLimits

0x6ca5,	// (0x0006639e) cale_month_pane_g10

0x6d03,	// (0x000663fc) cale_month_pane_g11_ParamLimits

0x6d03,	// (0x000663fc) cale_month_pane_g11

0x6d57,	// (0x00066450) cale_month_pane_g12_ParamLimits

0x6d57,	// (0x00066450) cale_month_pane_g12

0x6dad,	// (0x000664a6) cale_month_pane_g13_ParamLimits

0x6dad,	// (0x000664a6) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0006e938) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0006e938) cale_month_pane_g

0x6e15,	// (0x0006650e) cale_month_week_pane

0x6e39,	// (0x00066532) grid_cale_month_pane_ParamLimits

0x6e39,	// (0x00066532) grid_cale_month_pane

0x6e96,	// (0x0006658f) cale_month_day_heading_pane_t1

0x6f1c,	// (0x00066615) cale_month_day_heading_pane_t2

0x6f95,	// (0x0006668e) cale_month_day_heading_pane_t3

0x700e,	// (0x00066707) cale_month_day_heading_pane_t4

0x7087,	// (0x00066780) cale_month_day_heading_pane_t5

0x7100,	// (0x000667f9) cale_month_day_heading_pane_t6

0x7179,	// (0x00066872) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0006e953) cale_month_day_heading_pane_t

0x5c04,	// (0x000652fd) bg_cale_side_pane_cp01

0x720a,	// (0x00066903) cale_month_week_pane_t1

0x7223,	// (0x0006691c) cale_month_week_pane_t2

0x723c,	// (0x00066935) cale_month_week_pane_t3

0x7255,	// (0x0006694e) cale_month_week_pane_t4

0x7270,	// (0x00066969) cale_month_week_pane_t5

0x7291,	// (0x0006698a) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0006e962) cale_month_week_pane_t

0x72b2,	// (0x000669ab) cell_cale_month_pane_ParamLimits

0x72b2,	// (0x000669ab) cell_cale_month_pane

0x73d8,	// (0x00066ad1) cell_cale_month_pane_g1

0x73e4,	// (0x00066add) cell_cale_month_pane_t1_ParamLimits

0x73e4,	// (0x00066add) cell_cale_month_pane_t1

0x5d36,	// (0x0006542f) grid_highlight_pane_cp08

0x52d0,	// (0x000649c9) main_smil_g1

0x7410,	// (0x00066b09) smil_status_pane

0x741b,	// (0x00066b14) smil_text_pane

0xe787,	// (0x0006de80) bg_popup_call3_rect_pane_g8

0xe78f,	// (0x0006de88) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x0006ec00) bg_popup_call3_rect_pane_g

0xe986,	// (0x0006e07f) smil_status_volume_pane_g1

0x742d,	// (0x00066b26) smil_status_pane_t1

0x904b,	// (0x00068744) volume_smil_pane

0x7444,	// (0x00066b3d) list_smil_text_pane

0x744e,	// (0x00066b47) scroll_pane_cp011

0x7459,	// (0x00066b52) smil_text_list_pane_t1_ParamLimits

0x7459,	// (0x00066b52) smil_text_list_pane_t1

0x74e6,	// (0x00066bdf) aid_volume_smil_ParamLimits

0x74e6,	// (0x00066bdf) aid_volume_smil

0x52d0,	// (0x000649c9) smil_volume_pane_g1

0x52d0,	// (0x000649c9) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0006e974) smil_volume_pane_g

0x587d,	// (0x00064f76) listscroll_cale_day_pane

0x7508,	// (0x00066c01) bg_cale_pane

0x7520,	// (0x00066c19) list_cale_pane

0x7543,	// (0x00066c3c) scroll_pane_cp09

0x7554,	// (0x00066c4d) cale_bg_pane_g1

0x755c,	// (0x00066c55) cale_bg_pane_g2

0x7564,	// (0x00066c5d) cale_bg_pane_g3

0x756c,	// (0x00066c65) cale_bg_pane_g4

0x7574,	// (0x00066c6d) cale_bg_pane_g5

0x757c,	// (0x00066c75) cale_bg_pane_g6

0x7584,	// (0x00066c7d) cale_bg_pane_g7

0x758c,	// (0x00066c85) cale_bg_pane_g8

0x7594,	// (0x00066c8d) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0006e979) cale_bg_pane_g

0x75a4,	// (0x00066c9d) list_cale_time_pane_ParamLimits

0x75a4,	// (0x00066c9d) list_cale_time_pane

0x75cc,	// (0x00066cc5) list_cale_time_pane_g1_ParamLimits

0x75cc,	// (0x00066cc5) list_cale_time_pane_g1

0x75d8,	// (0x00066cd1) list_cale_time_pane_g2_ParamLimits

0x75d8,	// (0x00066cd1) list_cale_time_pane_g2

0x75e5,	// (0x00066cde) list_cale_time_pane_g3_ParamLimits

0x75e5,	// (0x00066cde) list_cale_time_pane_g3

0x75f3,	// (0x00066cec) list_cale_time_pane_g4_ParamLimits

0x75f3,	// (0x00066cec) list_cale_time_pane_g4

0x7601,	// (0x00066cfa) list_cale_time_pane_g5_ParamLimits

0x7601,	// (0x00066cfa) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0006e98c) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0006e98c) list_cale_time_pane_g

0x761c,	// (0x00066d15) list_cale_time_pane_t1_ParamLimits

0x761c,	// (0x00066d15) list_cale_time_pane_t1

0x7644,	// (0x00066d3d) list_cale_time_pane_t2_ParamLimits

0x7644,	// (0x00066d3d) list_cale_time_pane_t2

0x7d1c,	// (0x00067415) aid_blid_cardinal_pane

0x7d6a,	// (0x00067463) compass_pane_t4

0x766c,	// (0x00066d65) list_cale_time_pane_t4_ParamLimits

0x766c,	// (0x00066d65) list_cale_time_pane_t4

0x7d78,	// (0x00067471) compass_pane_t5

0x7d88,	// (0x00067481) compass_pane_t6

0x7d96,	// (0x0006748f) compass_pane_t7

0x7e30,	// (0x00067529) navi_pane_cc_t1

0x804b,	// (0x00067744) aid_phob_thumbnail_center_pane

0x8490,	// (0x00067b89) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0006e999) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0006e999) list_cale_time_pane_t

0x03f4,	// (0x0005faed) bg_popup_window_pane_cp02_ParamLimits

0x03f4,	// (0x0005faed) bg_popup_window_pane_cp02

0x7694,	// (0x00066d8d) heading_pane_cp01_ParamLimits

0x7694,	// (0x00066d8d) heading_pane_cp01

0x76a0,	// (0x00066d99) loc_req_pane_ParamLimits

0x76a0,	// (0x00066d99) loc_req_pane

0x76b0,	// (0x00066da9) loc_type_pane_ParamLimits

0x76b0,	// (0x00066da9) loc_type_pane

0x76c2,	// (0x00066dbb) loc_type_pane_t1_ParamLimits

0x76c2,	// (0x00066dbb) loc_type_pane_t1

0x76d4,	// (0x00066dcd) loc_type_pane_t2_ParamLimits

0x76d4,	// (0x00066dcd) loc_type_pane_t2

0x76e6,	// (0x00066ddf) loc_type_pane_t3_ParamLimits

0x76e6,	// (0x00066ddf) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0006e9a0) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0006e9a0) loc_type_pane_t

0x76f8,	// (0x00066df1) list_loc_req_pane

0x7702,	// (0x00066dfb) scroll_pane_cp012

0x4167,	// (0x00063860) list_single_loc_request_popup_menu_pane_ParamLimits

0x4167,	// (0x00063860) list_single_loc_request_popup_menu_pane

0x770d,	// (0x00066e06) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x770d,	// (0x00066e06) list_single_loc_request_popup_menu_pane_g1

0x7719,	// (0x00066e12) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x7719,	// (0x00066e12) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0006e9a7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0006e9a7) list_single_loc_request_popup_menu_pane_g

0x7725,	// (0x00066e1e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x7725,	// (0x00066e1e) list_single_loc_request_popup_menu_pane_t1

0x773b,	// (0x00066e34) bg_popup_window_pane_cp03_ParamLimits

0x773b,	// (0x00066e34) bg_popup_window_pane_cp03

0x7749,	// (0x00066e42) heading_loc_req_pane_ParamLimits

0x7749,	// (0x00066e42) heading_loc_req_pane

0x7755,	// (0x00066e4e) popup_dyc_status_message_window_g1_ParamLimits

0x7755,	// (0x00066e4e) popup_dyc_status_message_window_g1

0x7761,	// (0x00066e5a) popup_dyc_status_message_window_t1_ParamLimits

0x7761,	// (0x00066e5a) popup_dyc_status_message_window_t1

0x7773,	// (0x00066e6c) popup_dyc_status_message_window_t2_ParamLimits

0x7773,	// (0x00066e6c) popup_dyc_status_message_window_t2

0x7785,	// (0x00066e7e) popup_dyc_status_message_window_t3_ParamLimits

0x7785,	// (0x00066e7e) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0006e9ac) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0006e9ac) popup_dyc_status_message_window_t

0x079d,	// (0x0005fe96) bg_heading_pane_cp01

0x7797,	// (0x00066e90) heading_loc_req_pane_g1

0x779f,	// (0x00066e98) heading_loc_req_pane_g2

0x77a7,	// (0x00066ea0) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0006e9b3) heading_loc_req_pane_g

0x77af,	// (0x00066ea8) heading_loc_req_pane_t1

0x77e6,	// (0x00066edf) bg_popup_sub_pane_cp01_ParamLimits

0x77e6,	// (0x00066edf) bg_popup_sub_pane_cp01

0x77f4,	// (0x00066eed) popup_cale_events_window_g1_ParamLimits

0x77f4,	// (0x00066eed) popup_cale_events_window_g1

0x7814,	// (0x00066f0d) popup_cale_events_window_g2_ParamLimits

0x7814,	// (0x00066f0d) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x0006e9d5) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x0006e9d5) popup_cale_events_window_g

0x7834,	// (0x00066f2d) popup_cale_events_window_t1_ParamLimits

0x7834,	// (0x00066f2d) popup_cale_events_window_t1

0x7846,	// (0x00066f3f) popup_cale_events_window_t2_ParamLimits

0x7846,	// (0x00066f3f) popup_cale_events_window_t2

0x7884,	// (0x00066f7d) popup_cale_events_window_t3_ParamLimits

0x7884,	// (0x00066f7d) popup_cale_events_window_t3

0x78be,	// (0x00066fb7) popup_cale_events_window_t4_ParamLimits

0x78be,	// (0x00066fb7) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x0006e9da) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x0006e9da) popup_cale_events_window_t

0x78f4,	// (0x00066fed) call_type_pane

0x7900,	// (0x00066ff9) popup_call_status_window_g1

0x790e,	// (0x00067007) popup_call_status_window_g2

0x791a,	// (0x00067013) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x0006e9e3) popup_call_status_window_g

0x7926,	// (0x0006701f) call_type_pane_g1

0x792f,	// (0x00067028) call_type_pane_g2

0x0001,

0xf2f1,	// (0x0006e9ea) call_type_pane_g

0x079d,	// (0x0005fe96) bg_popup_sub_pane_cp02

0x7938,	// (0x00067031) listscroll_popup_wml_pane

0x7940,	// (0x00067039) list_wml_pane

0x794a,	// (0x00067043) scroll_pane_cp013

0x7955,	// (0x0006704e) list_single_graphic_popup_wml_pane_ParamLimits

0x7955,	// (0x0006704e) list_single_graphic_popup_wml_pane

0x52d0,	// (0x000649c9) list_single_graphic_popup_wml_pane_g1

0x7969,	// (0x00067062) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x0006e9ef) list_single_graphic_popup_wml_pane_g

0x7971,	// (0x0006706a) list_single_graphic_popup_wml_pane_t1

0x7987,	// (0x00067080) aid_call_pane

0x52b0,	// (0x000649a9) popup_clock_analogue_window_g1

0x52b0,	// (0x000649a9) popup_clock_analogue_window_g2

0x798f,	// (0x00067088) popup_clock_analogue_window_g3

0x798f,	// (0x00067088) popup_clock_analogue_window_g4

0x52d0,	// (0x000649c9) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x0006e9f4) popup_clock_analogue_window_g

0x7997,	// (0x00067090) popup_clock_analogue_window_t1

0x79a5,	// (0x0006709e) clock_digital_number_pane_ParamLimits

0x79a5,	// (0x0006709e) clock_digital_number_pane

0x79b1,	// (0x000670aa) clock_digital_number_pane_cp02_ParamLimits

0x79b1,	// (0x000670aa) clock_digital_number_pane_cp02

0x79bd,	// (0x000670b6) clock_digital_number_pane_cp03_ParamLimits

0x79bd,	// (0x000670b6) clock_digital_number_pane_cp03

0x79c9,	// (0x000670c2) clock_digital_number_pane_cp04_ParamLimits

0x79c9,	// (0x000670c2) clock_digital_number_pane_cp04

0x79d5,	// (0x000670ce) clock_digital_separator_pane_ParamLimits

0x79d5,	// (0x000670ce) clock_digital_separator_pane

0x79e1,	// (0x000670da) popup_clock_digital_window_t1

0x52d0,	// (0x000649c9) clock_digital_number_pane_g1

0x52d0,	// (0x000649c9) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0006e974) clock_digital_number_pane_g

0x52d0,	// (0x000649c9) clock_digital_separator_pane_g1

0x52d0,	// (0x000649c9) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0006e974) clock_digital_separator_pane_g

0x079d,	// (0x0005fe96) bg_popup_window_pane_cp04

0x79fe,	// (0x000670f7) heading_pane_cp03

0x5da5,	// (0x0006549e) listscroll_popup_gms_pane

0x079d,	// (0x0005fe96) grid_large_graphic_popup_pane

0x7a07,	// (0x00067100) listscroll_popup_gms_pane_g1

0x7a10,	// (0x00067109) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x0006e9ff) listscroll_popup_gms_pane_g

0x7a19,	// (0x00067112) scroll_pane_cp014

0x08ed,	// (0x0005ffe6) cell_large_graphic_popup_pane_ParamLimits

0x08ed,	// (0x0005ffe6) cell_large_graphic_popup_pane

0x5333,	// (0x00064a2c) cell_large_graphic_popup_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) cell_large_graphic_popup_pane_g1

0x7a22,	// (0x0006711b) cell_large_graphic_popup_pane_g2_ParamLimits

0x7a22,	// (0x0006711b) cell_large_graphic_popup_pane_g2

0x7a30,	// (0x00067129) cell_large_graphic_popup_pane_g3_ParamLimits

0x7a30,	// (0x00067129) cell_large_graphic_popup_pane_g3

0x7a3e,	// (0x00067137) cell_large_graphic_popup_pane_g4_ParamLimits

0x7a3e,	// (0x00067137) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x0006ea04) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x0006ea04) cell_large_graphic_popup_pane_g

0x079d,	// (0x0005fe96) grid_highlight_pane_cp010

0x52d0,	// (0x000649c9) bg_popup_call_pane_g1

0x7a4f,	// (0x00067148) list_single_graphic_popup_conf_pane_ParamLimits

0x7a4f,	// (0x00067148) list_single_graphic_popup_conf_pane

0x7a62,	// (0x0006715b) list_highlight_pane_cp01

0x7a6b,	// (0x00067164) list_single_graphic_popup_conf_pane_g1

0x7a73,	// (0x0006716c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x0006ea0d) list_single_graphic_popup_conf_pane_g

0x7a7b,	// (0x00067174) list_single_graphic_popup_conf_pane_t1

0x7a89,	// (0x00067182) linegrid_cams_pane_g1

0x7a92,	// (0x0006718b) linegrid_cams_pane_g2

0x5863,	// (0x00064f5c) linegrid_cams_pane_g3

0x7a9b,	// (0x00067194) linegrid_cams_pane_g4

0x7aa4,	// (0x0006719d) linegrid_cams_pane_g5

0x7aad,	// (0x000671a6) linegrid_cams_pane_g6

0x5d8c,	// (0x00065485) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x0006ea12) linegrid_cams_pane_g

0x7ab6,	// (0x000671af) popup_clock_analogue_window

0x7ab6,	// (0x000671af) popup_clock_digital_window

0x079d,	// (0x0005fe96) popup_phob_thumbnail_window

0x52d0,	// (0x000649c9) call_video_uplink_pane_g1

0x7abf,	// (0x000671b8) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x0006ea21) call_video_uplink_pane_g

0x7ac7,	// (0x000671c0) video_uplink_pane

0x7acf,	// (0x000671c8) mce_image_pane_g1

0x7ad9,	// (0x000671d2) mce_image_pane_g2

0x7ae1,	// (0x000671da) mce_image_pane_g3

0x7ae9,	// (0x000671e2) mce_image_pane_g4

0x7af1,	// (0x000671ea) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0006ea26) mce_image_pane_g

0x7af9,	// (0x000671f2) control_top_pane_stacon_cp01_ParamLimits

0x7af9,	// (0x000671f2) control_top_pane_stacon_cp01

0x7b0d,	// (0x00067206) uni_indicator_pane_stacon_cp01_ParamLimits

0x7b0d,	// (0x00067206) uni_indicator_pane_stacon_cp01

0x7b1e,	// (0x00067217) bg_popup_sub_pane_cp03

0x7b28,	// (0x00067221) chi_dic_find_pane

0x7b30,	// (0x00067229) listscroll_chi_dic_pane

0x7b39,	// (0x00067232) main_pane_chidic_g1

0x7b4c,	// (0x00067245) chi_dic_find_pane_t1

0x7b5a,	// (0x00067253) find_chidic_pane

0x7b63,	// (0x0006725c) chi_dic_list_pane_ParamLimits

0x7b63,	// (0x0006725c) chi_dic_list_pane

0x7b74,	// (0x0006726d) scroll_pane_cp020

0x7b7c,	// (0x00067275) find_chidic_pane_t1

0x079d,	// (0x0005fe96) input_focus_pane_cp06

0x7b8b,	// (0x00067284) list_chi_dic_pane_ParamLimits

0x7b8b,	// (0x00067284) list_chi_dic_pane

0x7ba8,	// (0x000672a1) list_chi_dic_pane_t1_ParamLimits

0x7ba8,	// (0x000672a1) list_chi_dic_pane_t1

0x079d,	// (0x0005fe96) list_highlight_pane_cp020

0x7bbb,	// (0x000672b4) bg_cale_heading_pane_g1

0x7bc3,	// (0x000672bc) bg_cale_heading_pane_g2

0x7bcb,	// (0x000672c4) bg_cale_heading_pane_g3

0x7bd3,	// (0x000672cc) bg_cale_heading_pane_g4

0x7bdd,	// (0x000672d6) bg_cale_heading_pane_g5

0x7be7,	// (0x000672e0) bg_cale_heading_pane_g6

0x7bef,	// (0x000672e8) bg_cale_heading_pane_g7

0x7bf7,	// (0x000672f0) bg_cale_heading_pane_g8

0x7c01,	// (0x000672fa) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x0006ea31) bg_cale_heading_pane_g

0x7bbb,	// (0x000672b4) bg_cale_side_pane_g1

0x7c0b,	// (0x00067304) bg_cale_side_pane_g2

0x7c15,	// (0x0006730e) bg_cale_side_pane_g3

0x7c1f,	// (0x00067318) bg_cale_side_pane_g4

0x7c29,	// (0x00067322) bg_cale_side_pane_g5

0x7c33,	// (0x0006732c) bg_cale_side_pane_g6

0x7c3d,	// (0x00067336) bg_cale_side_pane_g7

0x7c47,	// (0x00067340) bg_cale_side_pane_g8

0x7c4f,	// (0x00067348) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0006ea44) bg_cale_side_pane_g

0x7c57,	// (0x00067350) popup_call_status_window_ParamLimits

0x7c57,	// (0x00067350) popup_call_status_window

0x7c63,	// (0x0006735c) stacon_top_pane

0x7c6b,	// (0x00067364) status_pane_ParamLimits

0x7c6b,	// (0x00067364) status_pane

0x7c80,	// (0x00067379) status_small_pane

0x7c88,	// (0x00067381) control_pane

0x079d,	// (0x0005fe96) stacon_bottom_pane

0x7c90,	// (0x00067389) list_single_mce_smart_pane_t1_ParamLimits

0x7c90,	// (0x00067389) list_single_mce_smart_pane_t1

0x7ca3,	// (0x0006739c) list_single_mce_smart_pane_t2_ParamLimits

0x7ca3,	// (0x0006739c) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0006ea57) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0006ea57) list_single_mce_smart_pane_t

0x7cc2,	// (0x000673bb) compass_pane

0x7cce,	// (0x000673c7) main_location2_pane_t1

0x7ce2,	// (0x000673db) main_location2_pane_t2

0x7cf6,	// (0x000673ef) main_location2_pane_t3

0x0003,

0xf363,	// (0x0006ea5c) main_location2_pane_t

0x7d40,	// (0x00067439) compass_pane_g1_ParamLimits

0x7d40,	// (0x00067439) compass_pane_g1

0x7d4c,	// (0x00067445) compass_pane_t1

0x7d5b,	// (0x00067454) compass_pane_t2

0x0005,

0xf36c,	// (0x0006ea65) compass_pane_t

0x7da6,	// (0x0006749f) text_secondary_cp61

0x7e27,	// (0x00067520) navi_pane_cams_g5

0x7ea3,	// (0x0006759c) navi_pane_im_t1

0x7eb1,	// (0x000675aa) navi_pane_mp_g1_ParamLimits

0x7eb1,	// (0x000675aa) navi_pane_mp_g1

0x7ec5,	// (0x000675be) navi_pane_mp_g2_ParamLimits

0x7ec5,	// (0x000675be) navi_pane_mp_g2

0x7ed1,	// (0x000675ca) navi_pane_mp_g3_ParamLimits

0x7ed1,	// (0x000675ca) navi_pane_mp_g3

0x0002,

0xf380,	// (0x0006ea79) navi_pane_mp_g_ParamLimits

0xf380,	// (0x0006ea79) navi_pane_mp_g

0x7edd,	// (0x000675d6) navi_pane_mp_t1

0x7eeb,	// (0x000675e4) navi_pane_mp_t2

0x0002,

0xf387,	// (0x0006ea80) navi_pane_mp_t

0x7f82,	// (0x0006767b) navi_pane_vt_g1

0x7edd,	// (0x000675d6) navi_pane_vt_t1

0x7f8a,	// (0x00067683) navi_slider_pane

0x5da5,	// (0x0006549e) zooming_pane

0x7f9a,	// (0x00067693) navi_slider_pane_g1

0x7fa3,	// (0x0006769c) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x0006ea87) navi_slider_pane_g

0x7fd0,	// (0x000676c9) aid_levels_zoom

0x7fd8,	// (0x000676d1) zooming_pane_g1

0x7fe0,	// (0x000676d9) zooming_pane_g2

0x7fe0,	// (0x000676d9) zooming_pane_g3

0x0002,

0xf39d,	// (0x0006ea96) zooming_pane_g

0x7fe8,	// (0x000676e1) level_10_zoom

0x7ff1,	// (0x000676ea) level_11_zoom

0x7ffa,	// (0x000676f3) level_1_zoom

0x8003,	// (0x000676fc) level_2_zoom

0x800c,	// (0x00067705) level_3_zoom

0x8015,	// (0x0006770e) level_4_zoom

0x801e,	// (0x00067717) level_5_zoom

0x8027,	// (0x00067720) level_6_zoom

0x8030,	// (0x00067729) level_7_zoom

0x8039,	// (0x00067732) level_8_zoom

0x8042,	// (0x0006773b) level_9_zoom

0x8053,	// (0x0006774c) popup_phob_thumbnail_window_g1

0x805b,	// (0x00067754) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x0006ea9d) popup_phob_thumbnail_window_g

0x8cfc,	// (0x000683f5) level_1_location

0x8d04,	// (0x000683fd) level_2_location

0x8d0c,	// (0x00068405) level_3_location

0x8d16,	// (0x0006840f) level_4_location

0x5da5,	// (0x0006549e) level_5_location

0x8063,	// (0x0006775c) mce_icon_pane_g1

0x806b,	// (0x00067764) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x0006eaa2) mce_icon_pane_g

0x8073,	// (0x0006776c) main_mup_pane_g1_ParamLimits

0x8073,	// (0x0006776c) main_mup_pane_g1

0x534f,	// (0x00064a48) main_mup_pane_g2_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g2

0x534f,	// (0x00064a48) main_mup_pane_g3_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g3

0x534f,	// (0x00064a48) main_mup_pane_g4_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g4

0x534f,	// (0x00064a48) main_mup_pane_g5_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g5

0x534f,	// (0x00064a48) main_mup_pane_g6_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g6

0x534f,	// (0x00064a48) main_mup_pane_g7_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g7

0x534f,	// (0x00064a48) main_mup_pane_g8_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g8

0x534f,	// (0x00064a48) main_mup_pane_g9_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g9

0x534f,	// (0x00064a48) main_mup_pane_g10_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g10

0x534f,	// (0x00064a48) main_mup_pane_g11_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g11

0x5341,	// (0x00064a3a) main_mup_pane_g12_ParamLimits

0x5341,	// (0x00064a3a) main_mup_pane_g12

0x534f,	// (0x00064a48) main_mup_pane_g13_ParamLimits

0x534f,	// (0x00064a48) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x0006eaa7) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x0006eaa7) main_mup_pane_g

0x535d,	// (0x00064a56) main_mup_pane_t1_ParamLimits

0x535d,	// (0x00064a56) main_mup_pane_t1

0x535d,	// (0x00064a56) main_mup_pane_t2_ParamLimits

0x535d,	// (0x00064a56) main_mup_pane_t2

0x535d,	// (0x00064a56) main_mup_pane_t3_ParamLimits

0x535d,	// (0x00064a56) main_mup_pane_t3

0x5e1a,	// (0x00065513) main_mup_pane_t4_ParamLimits

0x5e1a,	// (0x00065513) main_mup_pane_t4

0x5e1a,	// (0x00065513) main_mup_pane_t5_ParamLimits

0x5e1a,	// (0x00065513) main_mup_pane_t5

0x5fb8,	// (0x000656b1) main_mup_pane_t6_ParamLimits

0x5fb8,	// (0x000656b1) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x0006eac2) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x0006eac2) main_mup_pane_t

0x52da,	// (0x000649d3) mup_progress_pane_ParamLimits

0x52da,	// (0x000649d3) mup_progress_pane

0x8086,	// (0x0006777f) mup_visualizer_pane_ParamLimits

0x8086,	// (0x0006777f) mup_visualizer_pane

0x8086,	// (0x0006777f) mup_volume_pane_ParamLimits

0x8086,	// (0x0006777f) mup_volume_pane

0x5341,	// (0x00064a3a) mup_visualizer_pane_g1_ParamLimits

0x5341,	// (0x00064a3a) mup_visualizer_pane_g1

0x8094,	// (0x0006778d) mup_visualizer_pane_g2_ParamLimits

0x8094,	// (0x0006778d) mup_visualizer_pane_g2

0x5333,	// (0x00064a2c) mup_visualizer_pane_g3_ParamLimits

0x5333,	// (0x00064a2c) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x0006eacf) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x0006eacf) mup_visualizer_pane_g

0x5f63,	// (0x0006565c) mup_volume_pane_g1

0x5f63,	// (0x0006565c) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x0006ead6) mup_volume_pane_g

0x5f63,	// (0x0006565c) mup_progress_pane_g1

0x5f63,	// (0x0006565c) mup_progress_pane_g2

0x5f63,	// (0x0006565c) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x0006eadb) mup_progress_pane_g

0x079d,	// (0x0005fe96) bg_popup_window_pane_cp05

0x80a2,	// (0x0006779b) heading_pane_cp02_ParamLimits

0x80a2,	// (0x0006779b) heading_pane_cp02

0x80bc,	// (0x000677b5) list_popup_blid_pane

0x80c4,	// (0x000677bd) list_blid_sat_info_pane_ParamLimits

0x80c4,	// (0x000677bd) list_blid_sat_info_pane

0x80d7,	// (0x000677d0) list_blid_sat_info_pane_g1

0x80df,	// (0x000677d8) list_blid_sat_info_pane_t1

0x81d5,	// (0x000678ce) mup_equalizer_pane_ParamLimits

0x81d5,	// (0x000678ce) mup_equalizer_pane

0x81f6,	// (0x000678ef) mup_equalizer_pane_cp1_ParamLimits

0x81f6,	// (0x000678ef) mup_equalizer_pane_cp1

0x8217,	// (0x00067910) mup_equalizer_pane_cp2_ParamLimits

0x8217,	// (0x00067910) mup_equalizer_pane_cp2

0x8238,	// (0x00067931) mup_equalizer_pane_cp3_ParamLimits

0x8238,	// (0x00067931) mup_equalizer_pane_cp3

0x8259,	// (0x00067952) mup_equalizer_pane_cp4_ParamLimits

0x8259,	// (0x00067952) mup_equalizer_pane_cp4

0x827a,	// (0x00067973) mup_equalizer_pane_cp5

0x8290,	// (0x00067989) mup_equalizer_pane_cp6

0x82a8,	// (0x000679a1) mup_equalizer_pane_cp7

0xe807,	// (0x0006df00) bg_popup_call_poc_act_pane_g9

0xe80f,	// (0x0006df08) bg_popup_call_poc_act_pane_g10

0xe817,	// (0x0006df10) bg_popup_call_poc_act_pane_g11

0x000a,

0x52b8,	// (0x000649b1) mup_scale_pane

0x52d0,	// (0x000649c9) mup_scale_pane_g1

0x82c0,	// (0x000679b9) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x0006eaf7) mup_scale_pane_g

0x82f6,	// (0x000679ef) msg_data_pane

0x82fe,	// (0x000679f7) scroll_pane_cp017

0x4181,	// (0x0006387a) bg_list_pane_cp04_ParamLimits

0x4181,	// (0x0006387a) bg_list_pane_cp04

0x8306,	// (0x000679ff) msg_data_pane_g1

0x830e,	// (0x00067a07) msg_data_pane_g2

0x8316,	// (0x00067a0f) msg_data_pane_g3

0x831e,	// (0x00067a17) msg_data_pane_g4

0x8326,	// (0x00067a1f) msg_data_pane_g5

0x832e,	// (0x00067a27) msg_data_pane_g6

0x8336,	// (0x00067a2f) msg_data_pane_g7

0x0006,

0xf40d,	// (0x0006eb06) msg_data_pane_g

0x41a5,	// (0x0006389e) msg_text_pane_ParamLimits

0x41a5,	// (0x0006389e) msg_text_pane

0x833e,	// (0x00067a37) qrid_highlight_pane_cp011_ParamLimits

0x833e,	// (0x00067a37) qrid_highlight_pane_cp011

0x079d,	// (0x0005fe96) msg_body_pane

0x079d,	// (0x0005fe96) msg_header_pane

0x8363,	// (0x00067a5c) input_focus_pane_cp07

0x41ff,	// (0x000638f8) msg_header_pane_t1_ParamLimits

0x41ff,	// (0x000638f8) msg_header_pane_t1

0x4215,	// (0x0006390e) msg_header_pane_t2_ParamLimits

0x4215,	// (0x0006390e) msg_header_pane_t2

0x0001,

0xf421,	// (0x0006eb1a) msg_header_pane_t_ParamLimits

0xf421,	// (0x0006eb1a) msg_header_pane_t

0x8378,	// (0x00067a71) msg_body_pane_g1

0x422c,	// (0x00063925) msg_body_pane_t1_ParamLimits

0x422c,	// (0x00063925) msg_body_pane_t1

0x425d,	// (0x00063956) msg_body_pane_t2_ParamLimits

0x425d,	// (0x00063956) msg_body_pane_t2

0x426f,	// (0x00063968) msg_body_pane_t3_ParamLimits

0x426f,	// (0x00063968) msg_body_pane_t3

0x0002,

0xf426,	// (0x0006eb1f) msg_body_pane_t_ParamLimits

0xf426,	// (0x0006eb1f) msg_body_pane_t

0x83d2,	// (0x00067acb) main_viewer_pane_g1_ParamLimits

0x83d2,	// (0x00067acb) main_viewer_pane_g1

0x83de,	// (0x00067ad7) main_viewer_pane_g2_ParamLimits

0x83de,	// (0x00067ad7) main_viewer_pane_g2

0x83ea,	// (0x00067ae3) main_viewer_pane_g3_ParamLimits

0x83ea,	// (0x00067ae3) main_viewer_pane_g3

0x83fb,	// (0x00067af4) main_viewer_pane_g4_ParamLimits

0x83fb,	// (0x00067af4) main_viewer_pane_g4

0x840c,	// (0x00067b05) main_viewer_pane_g5_ParamLimits

0x840c,	// (0x00067b05) main_viewer_pane_g5

0x840c,	// (0x00067b05) main_viewer_pane_g7_ParamLimits

0x840c,	// (0x00067b05) main_viewer_pane_g7

0x841e,	// (0x00067b17) main_viewer_pane_g8_ParamLimits

0x841e,	// (0x00067b17) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0006eb2f) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0006eb2f) main_viewer_pane_g

0x8436,	// (0x00067b2f) viewer_content_pane_ParamLimits

0x8436,	// (0x00067b2f) viewer_content_pane

0x8464,	// (0x00067b5d) main_postcard_pane_g1_ParamLimits

0x8464,	// (0x00067b5d) main_postcard_pane_g1

0x8472,	// (0x00067b6b) main_postcard_pane_g2_ParamLimits

0x8472,	// (0x00067b6b) main_postcard_pane_g2

0x8480,	// (0x00067b79) main_postcard_pane_g3_ParamLimits

0x8480,	// (0x00067b79) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0006eb40) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0006eb40) main_postcard_pane_g

0x8490,	// (0x00067b89) main_postcard_pane_g4

0xe999,	// (0x0006e092) smil_status_volume_pane_g2

0x84bc,	// (0x00067bb5) postcard_pane_ParamLimits

0x84bc,	// (0x00067bb5) postcard_pane

0x7900,	// (0x00066ff9) postcard_pane_g1_ParamLimits

0x7900,	// (0x00066ff9) postcard_pane_g1

0x84ee,	// (0x00067be7) postcard_pane_g2_ParamLimits

0x84ee,	// (0x00067be7) postcard_pane_g2

0x84fa,	// (0x00067bf3) postcard_pane_g3_ParamLimits

0x84fa,	// (0x00067bf3) postcard_pane_g3

0x8506,	// (0x00067bff) postcard_pane_g4_ParamLimits

0x8506,	// (0x00067bff) postcard_pane_g4

0x8514,	// (0x00067c0d) postcard_pane_g5_ParamLimits

0x8514,	// (0x00067c0d) postcard_pane_g5

0x8520,	// (0x00067c19) postcard_pane_g6_ParamLimits

0x8520,	// (0x00067c19) postcard_pane_g6

0x852c,	// (0x00067c25) postcard_pane_g7_ParamLimits

0x852c,	// (0x00067c25) postcard_pane_g7

0x0006,

0xf454,	// (0x0006eb4d) postcard_pane_g_ParamLimits

0xf454,	// (0x0006eb4d) postcard_pane_g

0x853a,	// (0x00067c33) main_mp2_pane_g1_ParamLimits

0x853a,	// (0x00067c33) main_mp2_pane_g1

0x8546,	// (0x00067c3f) main_mp2_pane_g2_ParamLimits

0x8546,	// (0x00067c3f) main_mp2_pane_g2

0x8552,	// (0x00067c4b) main_mp2_pane_g3_ParamLimits

0x8552,	// (0x00067c4b) main_mp2_pane_g3

0x0002,

0xf463,	// (0x0006eb5c) main_mp2_pane_g_ParamLimits

0xf463,	// (0x0006eb5c) main_mp2_pane_g

0x855e,	// (0x00067c57) main_mp2_pane_t1_ParamLimits

0x855e,	// (0x00067c57) main_mp2_pane_t1

0x8575,	// (0x00067c6e) main_mp2_pane_t2_ParamLimits

0x8575,	// (0x00067c6e) main_mp2_pane_t2

0x8587,	// (0x00067c80) main_mp2_pane_t3_ParamLimits

0x8587,	// (0x00067c80) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0006eb63) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0006eb63) main_mp2_pane_t

0x8599,	// (0x00067c92) pec_content_pane_ParamLimits

0x8599,	// (0x00067c92) pec_content_pane

0x65a7,	// (0x00065ca0) scroll_pane_cp015

0x85ab,	// (0x00067ca4) pec_attribute_pane_ParamLimits

0x85ab,	// (0x00067ca4) pec_attribute_pane

0x85bb,	// (0x00067cb4) pec_content_pane_g1_ParamLimits

0x85bb,	// (0x00067cb4) pec_content_pane_g1

0x85c7,	// (0x00067cc0) pec_content_pane_t1_ParamLimits

0x85c7,	// (0x00067cc0) pec_content_pane_t1

0x85d9,	// (0x00067cd2) pec_content_pane_t2_ParamLimits

0x85d9,	// (0x00067cd2) pec_content_pane_t2

0x0001,

0xf471,	// (0x0006eb6a) pec_content_pane_t_ParamLimits

0xf471,	// (0x0006eb6a) pec_content_pane_t

0x85eb,	// (0x00067ce4) list_single_graphic_pane_cp01_ParamLimits

0x85eb,	// (0x00067ce4) list_single_graphic_pane_cp01

0x52b8,	// (0x000649b1) bg_popup_sub_pane_cp04

0x8614,	// (0x00067d0d) popup_mup_playback_window_g1

0x8620,	// (0x00067d19) popup_mup_playback_window_t1

0x8635,	// (0x00067d2e) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0006eb6f) popup_mup_playback_window_t

0x8679,	// (0x00067d72) main_image_pane_g1_ParamLimits

0x8679,	// (0x00067d72) main_image_pane_g1

0x8720,	// (0x00067e19) scroll_pane_cp018_ParamLimits

0x8720,	// (0x00067e19) scroll_pane_cp018

0x8738,	// (0x00067e31) scroll_pane_cp016_ParamLimits

0x8738,	// (0x00067e31) scroll_pane_cp016

0x876c,	// (0x00067e65) smil2_image_pane_ParamLimits

0x876c,	// (0x00067e65) smil2_image_pane

0x879c,	// (0x00067e95) smil2_root_pane_ParamLimits

0x879c,	// (0x00067e95) smil2_root_pane

0x87c8,	// (0x00067ec1) smil2_text_pane_ParamLimits

0x87c8,	// (0x00067ec1) smil2_text_pane

0x079d,	// (0x0005fe96) bg_list_pane_cp06

0x8810,	// (0x00067f09) grid_radio_pane

0x079d,	// (0x0005fe96) bg_popup_window_pane_cp06

0x8818,	// (0x00067f11) main_fmradio_pane_t1

0xe85f,	// (0x0006df58) heading_pane_cp04

0x8826,	// (0x00067f1f) main_fmradio_pane_t2

0xe867,	// (0x0006df60) popup_cale_lunar_info_window_g1

0x8834,	// (0x00067f2d) main_fmradio_pane_t3

0xe86f,	// (0x0006df68) popup_cale_lunar_info_window_g2

0x8842,	// (0x00067f3b) main_fmradio_pane_t4

0x0001,

0x8850,	// (0x00067f49) main_fmradio_pane_t5

0x0004,

0xf569,	// (0x0006ec62) popup_cale_lunar_info_window_g

0xf48b,	// (0x0006eb84) main_fmradio_pane_t

0x885e,	// (0x00067f57) wait_bar_pane_cp03

0x8866,	// (0x00067f5f) cell_fmradio_pane_ParamLimits

0x8866,	// (0x00067f5f) cell_fmradio_pane

0x852c,	// (0x00067c25) cell_fmradio_pane_g1_ParamLimits

0x852c,	// (0x00067c25) cell_fmradio_pane_g1

0x079d,	// (0x0005fe96) grid_highlight_pane_cp011

0x8879,	// (0x00067f72) poc_content_pane_ParamLimits

0x8879,	// (0x00067f72) poc_content_pane

0x888b,	// (0x00067f84) scroll_pane_cp019

0x8893,	// (0x00067f8c) popup_call_poc_act_window_ParamLimits

0x8893,	// (0x00067f8c) popup_call_poc_act_window

0x88a0,	// (0x00067f99) popup_call_poc_inact_window_ParamLimits

0x88a0,	// (0x00067f99) popup_call_poc_inact_window

0xf52d,	// (0x0006ec26) bg_popup_call_poc_act_pane_g

0xe81f,	// (0x0006df18) bg_popup_call_poc_inact_pane_g1

0xe827,	// (0x0006df20) bg_popup_call_poc_inact_pane_g2

0x88ad,	// (0x00067fa6) popup_call_poc_act_window_g2

0xe82f,	// (0x0006df28) bg_popup_call_poc_inact_pane_g3

0xe7af,	// (0x0006dea8) bg_popup_call_poc_inact_pane_g4

0xe837,	// (0x0006df30) bg_popup_call_poc_inact_pane_g5

0x88b5,	// (0x00067fae) popup_call_poc_act_window_t1_ParamLimits

0x88b5,	// (0x00067fae) popup_call_poc_act_window_t1

0x88dd,	// (0x00067fd6) popup_call_poc_act_window_t2_ParamLimits

0x88dd,	// (0x00067fd6) popup_call_poc_act_window_t2

0x8905,	// (0x00067ffe) popup_call_poc_act_window_t3_ParamLimits

0x8905,	// (0x00067ffe) popup_call_poc_act_window_t3

0x892d,	// (0x00068026) popup_call_poc_act_window_t4_ParamLimits

0x892d,	// (0x00068026) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0006eb8f) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0006eb8f) popup_call_poc_act_window_t

0xe83f,	// (0x0006df38) bg_popup_call_poc_inact_pane_g6

0xe847,	// (0x0006df40) bg_popup_call_poc_inact_pane_g7

0xe84f,	// (0x0006df48) bg_popup_call_poc_inact_pane_g8

0x893f,	// (0x00068038) popup_call_poc_inact_window_g2

0xe857,	// (0x0006df50) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf544,	// (0x0006ec3d) bg_popup_call_poc_inact_pane_g

0x8947,	// (0x00068040) popup_call_poc_inact_window_t1_ParamLimits

0x8947,	// (0x00068040) popup_call_poc_inact_window_t1

0x895c,	// (0x00068055) popup_call_poc_inact_window_t2_ParamLimits

0x895c,	// (0x00068055) popup_call_poc_inact_window_t2

0x8971,	// (0x0006806a) popup_call_poc_inact_window_t3_ParamLimits

0x8971,	// (0x0006806a) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x0006eb98) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x0006eb98) popup_call_poc_inact_window_t

0xe911,	// (0x0006e00a) context_pane_ParamLimits

0x9002,	// (0x000686fb) signal_pane_ParamLimits

0x5da5,	// (0x0006549e) main_call2_pane

0x8f75,	// (0x0006866e) popup_phob_thumbnail2_window_ParamLimits

0x8f75,	// (0x0006866e) popup_phob_thumbnail2_window

0x8380,	// (0x00067a79) aid_hotspot_pointer_arrow_pane

0x8388,	// (0x00067a81) aid_hotspot_pointer_hand_pane

0x8cc4,	// (0x000683bd) phob_pre_status_pane_g5

0x08ed,	// (0x0005ffe6) cams_zoom_pane_ParamLimits

0x08ed,	// (0x0005ffe6) image_vga_pane_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g1_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g2_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g3_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g4_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g5_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g6_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0006e8be) main_camera_pane_g_ParamLimits

0x5e1a,	// (0x00065513) main_camera_pane_t1_ParamLimits

0x5e1a,	// (0x00065513) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0006e8cf) main_camera_pane_t_ParamLimits

0x52b8,	// (0x000649b1) bg_popup_preview_window_pane_cp01_ParamLimits

0x52b8,	// (0x000649b1) bg_popup_preview_window_pane_cp01

0xd9eb,	// (0x0006d0e4) popup_phob_thumbnail2_window_g1_ParamLimits

0xd9eb,	// (0x0006d0e4) popup_phob_thumbnail2_window_g1

0x079d,	// (0x0005fe96) call2_cli_visual_pane

0x8995,	// (0x0006808e) popup_call2_audio_conf_window_ParamLimits

0x8995,	// (0x0006808e) popup_call2_audio_conf_window

0x89aa,	// (0x000680a3) popup_call2_audio_first_window_ParamLimits

0x89aa,	// (0x000680a3) popup_call2_audio_first_window

0x8a48,	// (0x00068141) popup_call2_audio_in_window_ParamLimits

0x8a48,	// (0x00068141) popup_call2_audio_in_window

0x8a8a,	// (0x00068183) popup_call2_audio_out_window_ParamLimits

0x8a8a,	// (0x00068183) popup_call2_audio_out_window

0x8aec,	// (0x000681e5) popup_call2_audio_second_window_ParamLimits

0x8aec,	// (0x000681e5) popup_call2_audio_second_window

0x8b4a,	// (0x00068243) popup_call2_audio_wait_window_ParamLimits

0x8b4a,	// (0x00068243) popup_call2_audio_wait_window

0x079d,	// (0x0005fe96) bg_popup_call2_act_pane_cp03

0x529a,	// (0x00064993) list_conf_pane_cp

0xd9f7,	// (0x0006d0f0) popup_call2_audio_conf_window_t1

0xda05,	// (0x0006d0fe) list_single_graphic_popup_conf2_pane_ParamLimits

0xda05,	// (0x0006d0fe) list_single_graphic_popup_conf2_pane

0x7a62,	// (0x0006715b) list_highlight_pane_cp04

0xda18,	// (0x0006d111) list_single_graphic_popup_conf2_pane_g1

0x7a73,	// (0x0006716c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0006eb9f) list_single_graphic_popup_conf2_pane_g

0xda22,	// (0x0006d11b) list_single_graphic_popup_conf2_pane_t1

0xda30,	// (0x0006d129) bg_popup_call2_act_pane_cp01_ParamLimits

0xda30,	// (0x0006d129) bg_popup_call2_act_pane_cp01

0xdaba,	// (0x0006d1b3) call_type_pane_cp05_ParamLimits

0xdaba,	// (0x0006d1b3) call_type_pane_cp05

0xdb0e,	// (0x0006d207) popup_call2_audio_second_window_g1_ParamLimits

0xdb0e,	// (0x0006d207) popup_call2_audio_second_window_g1

0xdb62,	// (0x0006d25b) popup_call2_audio_second_window_g2_ParamLimits

0xdb62,	// (0x0006d25b) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0006eba4) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0006eba4) popup_call2_audio_second_window_g

0xdbc7,	// (0x0006d2c0) popup_call2_audio_second_window_t1_ParamLimits

0xdbc7,	// (0x0006d2c0) popup_call2_audio_second_window_t1

0xdc82,	// (0x0006d37b) popup_call2_audio_second_window_t2_ParamLimits

0xdc82,	// (0x0006d37b) popup_call2_audio_second_window_t2

0xdcd5,	// (0x0006d3ce) popup_call2_audio_second_window_t3_ParamLimits

0xdcd5,	// (0x0006d3ce) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x0006ebab) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x0006ebab) popup_call2_audio_second_window_t

0x079d,	// (0x0005fe96) bg_popup_call2_in_pane_cp02

0x07a7,	// (0x0005fea0) call_type_pane_cp04

0x8b89,	// (0x00068282) popup_call2_audio_wait_window_g1

0x8b91,	// (0x0006828a) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x0006ebb4) popup_call2_audio_wait_window_g

0x07bf,	// (0x0005feb8) popup_call2_audio_wait_window_t3

0xddc8,	// (0x0006d4c1) bg_popup_call2_act_pane_ParamLimits

0xddc8,	// (0x0006d4c1) bg_popup_call2_act_pane

0xde88,	// (0x0006d581) call_type_pane_cp03_ParamLimits

0xde88,	// (0x0006d581) call_type_pane_cp03

0xdeec,	// (0x0006d5e5) popup_call2_audio_first_window_g1_ParamLimits

0xdeec,	// (0x0006d5e5) popup_call2_audio_first_window_g1

0xdf5c,	// (0x0006d655) popup_call2_audio_first_window_g2_ParamLimits

0xdf5c,	// (0x0006d655) popup_call2_audio_first_window_g2

0x7900,	// (0x00066ff9) popup_call2_audio_first_window_g3_ParamLimits

0x7900,	// (0x00066ff9) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x0006ebb9) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x0006ebb9) popup_call2_audio_first_window_g

0xe03a,	// (0x0006d733) popup_call2_audio_first_window_t1_ParamLimits

0xe03a,	// (0x0006d733) popup_call2_audio_first_window_t1

0xe13d,	// (0x0006d836) popup_call2_audio_first_window_t4_ParamLimits

0xe13d,	// (0x0006d836) popup_call2_audio_first_window_t4

0xe220,	// (0x0006d919) popup_call2_audio_first_window_t5_ParamLimits

0xe220,	// (0x0006d919) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x0006ebc4) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x0006ebc4) popup_call2_audio_first_window_t

0x52b0,	// (0x000649a9) bg_popup_call2_act_pane_g1

0xe877,	// (0x0006df70) popup_cale_lunar_info_window_t1

0xe885,	// (0x0006df7e) popup_cale_lunar_info_window_t2

0xe893,	// (0x0006df8c) popup_cale_lunar_info_window_t3

0x079d,	// (0x0005fe96) bg_popup_call2_bubble_pane

0xe321,	// (0x0006da1a) bg_popup_call2_in_pane_cp01_ParamLimits

0xe321,	// (0x0006da1a) bg_popup_call2_in_pane_cp01

0x0479,	// (0x0005fb72) call_type_pane_cp02

0x8b99,	// (0x00068292) popup_call2_audio_out_window_g1_ParamLimits

0x8b99,	// (0x00068292) popup_call2_audio_out_window_g1

0xe369,	// (0x0006da62) popup_call2_audio_out_window_g2_ParamLimits

0xe369,	// (0x0006da62) popup_call2_audio_out_window_g2

0x8bc5,	// (0x000682be) popup_call2_audio_out_window_g3_ParamLimits

0x8bc5,	// (0x000682be) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x0006ebcd) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x0006ebcd) popup_call2_audio_out_window_g

0xe3a0,	// (0x0006da99) popup_call2_audio_out_window_t1_ParamLimits

0xe3a0,	// (0x0006da99) popup_call2_audio_out_window_t1

0xe3ff,	// (0x0006daf8) popup_call2_audio_out_window_t2_ParamLimits

0xe3ff,	// (0x0006daf8) popup_call2_audio_out_window_t2

0xe453,	// (0x0006db4c) popup_call2_audio_out_window_t3_ParamLimits

0xe453,	// (0x0006db4c) popup_call2_audio_out_window_t3

0xe469,	// (0x0006db62) popup_call2_audio_out_window_t4_ParamLimits

0xe469,	// (0x0006db62) popup_call2_audio_out_window_t4

0xe47f,	// (0x0006db78) popup_call2_audio_out_window_t5_ParamLimits

0xe47f,	// (0x0006db78) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x0006ebd6) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x0006ebd6) popup_call2_audio_out_window_t

0xe4e3,	// (0x0006dbdc) bg_popup_call2_in_pane_ParamLimits

0xe4e3,	// (0x0006dbdc) bg_popup_call2_in_pane

0xe53f,	// (0x0006dc38) popup_call2_audio_in_window_g1_ParamLimits

0xe53f,	// (0x0006dc38) popup_call2_audio_in_window_g1

0xe577,	// (0x0006dc70) popup_call2_audio_in_window_g2_ParamLimits

0xe577,	// (0x0006dc70) popup_call2_audio_in_window_g2

0xe5af,	// (0x0006dca8) popup_call2_audio_in_window_g3_ParamLimits

0xe5af,	// (0x0006dca8) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x0006ebe3) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x0006ebe3) popup_call2_audio_in_window_g

0xe607,	// (0x0006dd00) popup_call2_audio_in_window_t1_ParamLimits

0xe607,	// (0x0006dd00) popup_call2_audio_in_window_t1

0xe687,	// (0x0006dd80) popup_call2_audio_in_window_t2_ParamLimits

0xe687,	// (0x0006dd80) popup_call2_audio_in_window_t2

0xe707,	// (0x0006de00) popup_call2_audio_in_window_t3_ParamLimits

0xe707,	// (0x0006de00) popup_call2_audio_in_window_t3

0xe721,	// (0x0006de1a) popup_call2_audio_in_window_t4_ParamLimits

0xe721,	// (0x0006de1a) popup_call2_audio_in_window_t4

0xe733,	// (0x0006de2c) popup_call2_audio_in_window_t5_ParamLimits

0xe733,	// (0x0006de2c) popup_call2_audio_in_window_t5

0xe745,	// (0x0006de3e) popup_call2_audio_in_window_t6_ParamLimits

0xe745,	// (0x0006de3e) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x0006ebec) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x0006ebec) popup_call2_audio_in_window_t

0x52b0,	// (0x000649a9) bg_popup_call2_in_pane_g1

0xe8a1,	// (0x0006df9a) popup_cale_lunar_info_window_t4

0x0003,

0xf56e,	// (0x0006ec67) popup_cale_lunar_info_window_t

0x52b8,	// (0x000649b1) bg_popup_call2_rect_pane_ParamLimits

0x52b8,	// (0x000649b1) bg_popup_call2_rect_pane

0x079d,	// (0x0005fe96) call2_cli_visual_graphic_pane

0x079d,	// (0x0005fe96) call2_cli_visual_text_pane

0x903e,	// (0x00068737) smil_status_volume_pane_g3

0x0002,

0x52d0,	// (0x000649c9) call2_cli_visual_graphic_pane_g1

0x52d0,	// (0x000649c9) call2_cli_visual_graphic_pane_g2

0x52d0,	// (0x000649c9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x0006ebf9) call2_cli_visual_graphic_pane_g

0xe757,	// (0x0006de50) bg_popup_call2_rect_pane_g1

0x579b,	// (0x00064e94) bg_popup_call2_rect_pane_g2

0xe75f,	// (0x0006de58) bg_popup_call2_rect_pane_g3

0xe767,	// (0x0006de60) bg_popup_call2_rect_pane_g4

0xe76f,	// (0x0006de68) bg_popup_call2_rect_pane_g5

0xe777,	// (0x0006de70) bg_popup_call2_rect_pane_g6

0xe77f,	// (0x0006de78) bg_popup_call2_rect_pane_g7

0xe787,	// (0x0006de80) bg_popup_call2_rect_pane_g8

0xe78f,	// (0x0006de88) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x0006ec00) bg_popup_call2_rect_pane_g

0xe797,	// (0x0006de90) bg_popup_call2_bubble_pane_g1

0xe79f,	// (0x0006de98) bg_popup_call2_bubble_pane_g2

0xe7a7,	// (0x0006dea0) bg_popup_call2_bubble_pane_g3

0xe7af,	// (0x0006dea8) bg_popup_call2_bubble_pane_g4

0xe7b7,	// (0x0006deb0) bg_popup_call2_bubble_pane_g5

0xe7bf,	// (0x0006deb8) bg_popup_call2_bubble_pane_g6

0xe7c7,	// (0x0006dec0) bg_popup_call2_bubble_pane_g7

0xe7cf,	// (0x0006dec8) bg_popup_call2_bubble_pane_g8

0xe7d7,	// (0x0006ded0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0006ec13) bg_popup_call2_bubble_pane_g

0x5896,	// (0x00064f8f) aid_cale_week_size_cell_pane

0x52b8,	// (0x000649b1) aid_cams_cif_uncrop_pane_ParamLimits

0x52b8,	// (0x000649b1) aid_cams_cif_uncrop_pane

0x5f6d,	// (0x00065666) aid_cams_size_cell_ParamLimits

0x5f6d,	// (0x00065666) aid_cams_size_cell

0x5f79,	// (0x00065672) grid_cams_pane_ParamLimits

0x5f87,	// (0x00065680) linegrid_cams_pane_ParamLimits

0x60c1,	// (0x000657ba) call_video_pane_t1

0x60e2,	// (0x000657db) call_video_pane_t2

0x0001,

0xf222,	// (0x0006e91b) call_video_pane_t

0x6894,	// (0x00065f8d) aid_cale_month_size_cell_pane_ParamLimits

0x6894,	// (0x00065f8d) aid_cale_month_size_cell_pane

0xf5b2,	// (0x0006ecab) smil_status_volume_pane_g

0x904b,	// (0x00068744) volume_smil_pane_ParamLimits

0x4e42,	// (0x0006453b) aid_popup2_width_pane

0x56fc,	// (0x00064df5) cell_qdial_pane_g4_ParamLimits

0x56fc,	// (0x00064df5) cell_qdial_pane_g4

0x7d1c,	// (0x00067415) aid_blid_cardinal_pane_ParamLimits

0x7d2c,	// (0x00067425) aid_blid_destination_pane_ParamLimits

0x7d2c,	// (0x00067425) aid_blid_destination_pane

0x52b8,	// (0x000649b1) bg_popup_call_poc_act_pane_ParamLimits

0x52b8,	// (0x000649b1) bg_popup_call_poc_act_pane

0x52b8,	// (0x000649b1) bg_popup_call_poc_inact_pane_ParamLimits

0x52b8,	// (0x000649b1) bg_popup_call_poc_inact_pane

0xe7df,	// (0x0006ded8) bg_popup_call_poc_act_pane_g1

0xe7e7,	// (0x0006dee0) bg_popup_call_poc_act_pane_g2

0xe7ef,	// (0x0006dee8) bg_popup_call_poc_act_pane_g3

0xe7af,	// (0x0006dea8) bg_popup_call_poc_act_pane_g4

0xe7b7,	// (0x0006deb0) bg_popup_call_poc_act_pane_g5

0xe7f7,	// (0x0006def0) bg_popup_call_poc_act_pane_g6

0xe7c7,	// (0x0006dec0) bg_popup_call_poc_act_pane_g7

0xe7ff,	// (0x0006def8) bg_popup_call_poc_act_pane_g8

0x079d,	// (0x0005fe96) main_usb_pane

0x8ea8,	// (0x000685a1) popup_cale_lunar_info_window

0x645f,	// (0x00065b58) im_reading_pane_t1_ParamLimits

0x64b7,	// (0x00065bb0) list_im_pane_ParamLimits

0x64c8,	// (0x00065bc1) scroll_pane_cp07_ParamLimits

0x079d,	// (0x0005fe96) grid_highlight_pane_cp012

0x52b8,	// (0x000649b1) mup_scale_pane_ParamLimits

0x7900,	// (0x00066ff9) main_usb_pane_g1_ParamLimits

0x7900,	// (0x00066ff9) main_usb_pane_g1

0x8c2c,	// (0x00068325) main_usb_pane_g2_ParamLimits

0x8c2c,	// (0x00068325) main_usb_pane_g2

0x0001,

0xf557,	// (0x0006ec50) main_usb_pane_g_ParamLimits

0xf557,	// (0x0006ec50) main_usb_pane_g

0x8c38,	// (0x00068331) main_usb_pane_t1_ParamLimits

0x8c38,	// (0x00068331) main_usb_pane_t1

0x8c4a,	// (0x00068343) main_usb_pane_t2_ParamLimits

0x8c4a,	// (0x00068343) main_usb_pane_t2

0x8c5c,	// (0x00068355) main_usb_pane_t3_ParamLimits

0x8c5c,	// (0x00068355) main_usb_pane_t3

0x8c6e,	// (0x00068367) main_usb_pane_t4_ParamLimits

0x8c6e,	// (0x00068367) main_usb_pane_t4

0x8c80,	// (0x00068379) main_usb_pane_t5_ParamLimits

0x8c80,	// (0x00068379) main_usb_pane_t5

0x8c92,	// (0x0006838b) main_usb_pane_t6_ParamLimits

0x8c92,	// (0x0006838b) main_usb_pane_t6

0x0005,

0xf55c,	// (0x0006ec55) main_usb_pane_t_ParamLimits

0x7cc2,	// (0x000673bb) aid_text_placing

0x7cce,	// (0x000673c7) main_location2_pane_t1_ParamLimits

0x7ce2,	// (0x000673db) main_location2_pane_t2_ParamLimits

0x7cf6,	// (0x000673ef) main_location2_pane_t3_ParamLimits

0x7d0a,	// (0x00067403) main_location2_pane_t4_ParamLimits

0x7d0a,	// (0x00067403) main_location2_pane_t4

0xf363,	// (0x0006ea5c) main_location2_pane_t_ParamLimits

0x52f4,	// (0x000649ed) find_pinb_pane_g2_ParamLimits

0x52f4,	// (0x000649ed) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0006e7d3) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0006e7d3) find_pinb_pane_g

0x5300,	// (0x000649f9) find_pinb_pane_t1_ParamLimits

0x5312,	// (0x00064a0b) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0006e7d8) find_pinb_pane_t_ParamLimits

0x079d,	// (0x0005fe96) main_call3_pane

0x6e96,	// (0x0006658f) cale_month_day_heading_pane_t1_ParamLimits

0x6f1c,	// (0x00066615) cale_month_day_heading_pane_t2_ParamLimits

0x6f95,	// (0x0006668e) cale_month_day_heading_pane_t3_ParamLimits

0x700e,	// (0x00066707) cale_month_day_heading_pane_t4_ParamLimits

0x7087,	// (0x00066780) cale_month_day_heading_pane_t5_ParamLimits

0x7100,	// (0x000667f9) cale_month_day_heading_pane_t6_ParamLimits

0x7179,	// (0x00066872) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0006e953) cale_month_day_heading_pane_t_ParamLimits

0x743b,	// (0x00066b34) smil_status_volume_pane

0x84d6,	// (0x00067bcf) postcard_address_pane_ParamLimits

0x84d6,	// (0x00067bcf) postcard_address_pane

0x84e2,	// (0x00067bdb) postcard_message_pane_ParamLimits

0x84e2,	// (0x00067bdb) postcard_message_pane

0x8bf1,	// (0x000682ea) call2_cli_visual_pane_t1_ParamLimits

0x8bf1,	// (0x000682ea) call2_cli_visual_pane_t1

0xe9c4,	// (0x0006e0bd) postcard_message_pane_t1_ParamLimits

0xe9c4,	// (0x0006e0bd) postcard_message_pane_t1

0xe9ac,	// (0x0006e0a5) postcard_address_pane_t1_ParamLimits

0xe9ac,	// (0x0006e0a5) postcard_address_pane_t1

0x917c,	// (0x00068875) popup_call3_audio_in_window_ParamLimits

0x917c,	// (0x00068875) popup_call3_audio_in_window

0x9060,	// (0x00068759) bg_popup_call3_in_pane_ParamLimits

0x9060,	// (0x00068759) bg_popup_call3_in_pane

0x90c2,	// (0x000687bb) popup_call3_audio_in_window_g1_ParamLimits

0x90c2,	// (0x000687bb) popup_call3_audio_in_window_g1

0x90da,	// (0x000687d3) popup_call3_audio_in_window_g2_ParamLimits

0x90da,	// (0x000687d3) popup_call3_audio_in_window_g2

0x90f2,	// (0x000687eb) popup_call3_audio_in_window_g3_ParamLimits

0x90f2,	// (0x000687eb) popup_call3_audio_in_window_g3

0x0003,

0xf5b9,	// (0x0006ecb2) popup_call3_audio_in_window_g_ParamLimits

0xf5b9,	// (0x0006ecb2) popup_call3_audio_in_window_g

0x911a,	// (0x00068813) popup_call3_audio_in_window_t1_ParamLimits

0x911a,	// (0x00068813) popup_call3_audio_in_window_t1

0x9142,	// (0x0006883b) popup_call3_audio_in_window_t2_ParamLimits

0x9142,	// (0x0006883b) popup_call3_audio_in_window_t2

0x916a,	// (0x00068863) popup_call3_audio_in_window_t3_ParamLimits

0x916a,	// (0x00068863) popup_call3_audio_in_window_t3

0x0002,

0xf5c2,	// (0x0006ecbb) popup_call3_audio_in_window_t_ParamLimits

0xf5c2,	// (0x0006ecbb) popup_call3_audio_in_window_t

0x5da5,	// (0x0006549e) bg_popup_call3_rect_pane

0xe757,	// (0x0006de50) bg_popup_call3_rect_pane_g1

0x579b,	// (0x00064e94) bg_popup_call3_rect_pane_g2

0xe75f,	// (0x0006de58) bg_popup_call3_rect_pane_g3

0xe767,	// (0x0006de60) bg_popup_call3_rect_pane_g4

0xe76f,	// (0x0006de68) bg_popup_call3_rect_pane_g5

0xe777,	// (0x0006de70) bg_popup_call3_rect_pane_g6

0xe77f,	// (0x0006de78) bg_popup_call3_rect_pane_g7

0x02fb,	// (0x0005f9f4) mup_visualizer_osc_pane

0x02fb,	// (0x0005f9f4) mup_visualizer_spec_pane

0x9080,	// (0x00068779) call3_video_qcif_pane_ParamLimits

0x9080,	// (0x00068779) call3_video_qcif_pane

0x9092,	// (0x0006878b) call3_video_qcif_uncrop_pane_ParamLimits

0x9092,	// (0x0006878b) call3_video_qcif_uncrop_pane

0x90a0,	// (0x00068799) call3_video_subqcif_pane_ParamLimits

0x90a0,	// (0x00068799) call3_video_subqcif_pane

0x90b2,	// (0x000687ab) call3_video_subqcif_uncrop_pane_ParamLimits

0x90b2,	// (0x000687ab) call3_video_subqcif_uncrop_pane

0x910a,	// (0x00068803) popup_call3_audio_in_window_g4_ParamLimits

0x910a,	// (0x00068803) popup_call3_audio_in_window_g4

0x02fb,	// (0x0005f9f4) mup_spec_half_pane

0x02fb,	// (0x0005f9f4) mup_spec_half_pane_cp

0x02fb,	// (0x0005f9f4) mup_osc_middle_pane

0x5f63,	// (0x0006565c) mup_visualizer_osc_pane_g1

0xe95f,	// (0x0006e058) mup_spec_bar_pane_ParamLimits

0xe95f,	// (0x0006e058) mup_spec_bar_pane

0x5f63,	// (0x0006565c) mup_spec_bar_pane_g1

0x5f63,	// (0x0006565c) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x0006ead6) mup_spec_bar_pane_g

0x5896,	// (0x00064f8f) aid_cale_week_size_cell_pane_ParamLimits

0x58ab,	// (0x00064fa4) bg_cale_heading_pane_ParamLimits

0x58cd,	// (0x00064fc6) bg_cale_pane_cp01_ParamLimits

0x58ea,	// (0x00064fe3) cale_week_corner_pane_ParamLimits

0x5904,	// (0x00064ffd) cale_week_day_heading_pane_ParamLimits

0x5926,	// (0x0006501f) cale_week_scroll_pane_g1_ParamLimits

0x5943,	// (0x0006503c) cale_week_scroll_pane_g2_ParamLimits

0x5956,	// (0x0006504f) cale_week_scroll_pane_g3_ParamLimits

0x5969,	// (0x00065062) cale_week_scroll_pane_g4_ParamLimits

0x597c,	// (0x00065075) cale_week_scroll_pane_g5_ParamLimits

0x598f,	// (0x00065088) cale_week_scroll_pane_g6_ParamLimits

0x59a2,	// (0x0006509b) cale_week_scroll_pane_g7_ParamLimits

0x59b7,	// (0x000650b0) cale_week_scroll_pane_g8_ParamLimits

0x59cc,	// (0x000650c5) cale_week_scroll_pane_g9_ParamLimits

0x59df,	// (0x000650d8) cale_week_scroll_pane_g10_ParamLimits

0x59f2,	// (0x000650eb) cale_week_scroll_pane_g11_ParamLimits

0x5a05,	// (0x000650fe) cale_week_scroll_pane_g12_ParamLimits

0x5a1c,	// (0x00065115) cale_week_scroll_pane_g13_ParamLimits

0x5a37,	// (0x00065130) cale_week_scroll_pane_g14_ParamLimits

0x5a52,	// (0x0006514b) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0006e864) cale_week_scroll_pane_g_ParamLimits

0x5a82,	// (0x0006517b) cale_week_time_pane_ParamLimits

0x5a97,	// (0x00065190) grid_cale_week_pane_ParamLimits

0x5ab6,	// (0x000651af) listscroll_cale_week_pane_t1

0x5ac8,	// (0x000651c1) scroll_pane_cp08_ParamLimits

0x6935,	// (0x0006602e) cale_month_corner_pane_ParamLimits

0x6e03,	// (0x000664fc) cale_month_pane_t1

0x6e15,	// (0x0006650e) cale_month_week_pane_ParamLimits

0x7900,	// (0x00066ff9) popup_call_status_window_g1_ParamLimits

0x790e,	// (0x00067007) popup_call_status_window_g2_ParamLimits

0x791a,	// (0x00067013) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x0006e9e3) popup_call_status_window_g_ParamLimits

0x797f,	// (0x00067078) aid_call2_pane

0x41f3,	// (0x000638ec) msg_header_pane_g1

0x84d6,	// (0x00067bcf) postcard_address2_pane_ParamLimits

0x84d6,	// (0x00067bcf) postcard_address2_pane

0x84e2,	// (0x00067bdb) postcard_message2_pane_ParamLimits

0x84e2,	// (0x00067bdb) postcard_message2_pane

0x9010,	// (0x00068709) message2_row_pane_ParamLimits

0x9010,	// (0x00068709) message2_row_pane

0x902b,	// (0x00068724) address2_row_pane_ParamLimits

0x902b,	// (0x00068724) address2_row_pane

0xe92c,	// (0x0006e025) postcard_message2_row_pane_g1

0xe934,	// (0x0006e02d) postcard_message2_row_pane_t1

0xe92c,	// (0x0006e025) address2_row_pane_g1

0xe934,	// (0x0006e02d) address2_row_pane_t1

0x5d9d,	// (0x00065496) aid_size_cell_vorec

0x079d,	// (0x0005fe96) main_rss_pane

0xe942,	// (0x0006e03b) rss_list_single_pane_ParamLimits

0xe942,	// (0x0006e03b) rss_list_single_pane

0xe950,	// (0x0006e049) rss_list_single_pane_t1

0xe950,	// (0x0006e049) rss_list_single_pane_t2

0x0001,

0xf5ad,	// (0x0006eca6) rss_list_single_pane_t

0x079d,	// (0x0005fe96) main_camera2_pane

0x079d,	// (0x0005fe96) main_video2_pane

0x08ed,	// (0x0005ffe6) cams_zoom_pane_cp2_ParamLimits

0x08ed,	// (0x0005ffe6) cams_zoom_pane_cp2

0x08ed,	// (0x0005ffe6) image2_vga_pane_ParamLimits

0x08ed,	// (0x0005ffe6) image2_vga_pane

0x5341,	// (0x00064a3a) main_camera2_pane_g1_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g1

0x5341,	// (0x00064a3a) main_camera2_pane_g2_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g2

0x5341,	// (0x00064a3a) main_camera2_pane_g3_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g3

0x5341,	// (0x00064a3a) main_camera2_pane_g4_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g4

0x5341,	// (0x00064a3a) main_camera2_pane_g5_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g5

0x5341,	// (0x00064a3a) main_camera2_pane_g6_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g6

0x5341,	// (0x00064a3a) main_camera2_pane_g7_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g7

0x5341,	// (0x00064a3a) main_camera2_pane_g8_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g8

0x0008,

0xf5c9,	// (0x0006ecc2) main_camera2_pane_g_ParamLimits

0xf5c9,	// (0x0006ecc2) main_camera2_pane_g

0x5e1a,	// (0x00065513) main_camera2_pane_t1_ParamLimits

0x5e1a,	// (0x00065513) main_camera2_pane_t1

0x5e1a,	// (0x00065513) main_camera2_pane_t2_ParamLimits

0x5e1a,	// (0x00065513) main_camera2_pane_t2

0x5e1a,	// (0x00065513) main_camera2_pane_t3_ParamLimits

0x5e1a,	// (0x00065513) main_camera2_pane_t3

0x5e1a,	// (0x00065513) main_camera2_pane_t4_ParamLimits

0x5e1a,	// (0x00065513) main_camera2_pane_t4

0x0006,

0xf5dc,	// (0x0006ecd5) main_camera2_pane_t_ParamLimits

0xf5dc,	// (0x0006ecd5) main_camera2_pane_t

0xe903,	// (0x0006dffc) cams_zoom_pane_cp4_ParamLimits

0xe903,	// (0x0006dffc) cams_zoom_pane_cp4

0x52da,	// (0x000649d3) image2_cif_pane_ParamLimits

0x52da,	// (0x000649d3) image2_cif_pane

0x08ed,	// (0x0005ffe6) image2_subqcif_pane_ParamLimits

0x08ed,	// (0x0005ffe6) image2_subqcif_pane

0xe9e0,	// (0x0006e0d9) main_video2_pane_g1_ParamLimits

0xe9e0,	// (0x0006e0d9) main_video2_pane_g1

0xe9e0,	// (0x0006e0d9) main_video2_pane_g2_ParamLimits

0xe9e0,	// (0x0006e0d9) main_video2_pane_g2

0xe9e0,	// (0x0006e0d9) main_video2_pane_g3_ParamLimits

0xe9e0,	// (0x0006e0d9) main_video2_pane_g3

0xe9e0,	// (0x0006e0d9) main_video2_pane_g4_ParamLimits

0xe9e0,	// (0x0006e0d9) main_video2_pane_g4

0xe9e0,	// (0x0006e0d9) main_video2_pane_g5_ParamLimits

0xe9e0,	// (0x0006e0d9) main_video2_pane_g5

0xe9e0,	// (0x0006e0d9) main_video2_pane_g6_ParamLimits

0xe9e0,	// (0x0006e0d9) main_video2_pane_g6

0x0005,

0xf5eb,	// (0x0006ece4) main_video2_pane_g_ParamLimits

0xf5eb,	// (0x0006ece4) main_video2_pane_g

0xe9ee,	// (0x0006e0e7) main_video2_pane_t1_ParamLimits

0xe9ee,	// (0x0006e0e7) main_video2_pane_t1

0xe9ee,	// (0x0006e0e7) main_video2_pane_t2_ParamLimits

0xe9ee,	// (0x0006e0e7) main_video2_pane_t2

0xe9ee,	// (0x0006e0e7) main_video2_pane_t3_ParamLimits

0xe9ee,	// (0x0006e0e7) main_video2_pane_t3

0x0002,

0xf5f8,	// (0x0006ecf1) main_video2_pane_t_ParamLimits

0xf5f8,	// (0x0006ecf1) main_video2_pane_t

0x8d28,	// (0x00068421) call_muted_g2

0x0001,

0xf59f,	// (0x0006ec98) call_muted_g

0x079d,	// (0x0005fe96) main_mup2_pane

0x534f,	// (0x00064a48) main_mup2_pane_g1_ParamLimits

0x534f,	// (0x00064a48) main_mup2_pane_g1

0x534f,	// (0x00064a48) main_mup2_pane_g2_ParamLimits

0x534f,	// (0x00064a48) main_mup2_pane_g2

0x5f63,	// (0x0006565c) main_mup_pane_g13_cp1

0x02fb,	// (0x0005f9f4) mup_volume_pane_cp1

0x534f,	// (0x00064a48) main_mup2_pane_g4_ParamLimits

0x534f,	// (0x00064a48) main_mup2_pane_g4

0x534f,	// (0x00064a48) main_mup2_pane_g5_ParamLimits

0x534f,	// (0x00064a48) main_mup2_pane_g5

0x534f,	// (0x00064a48) main_mup2_pane_g6_ParamLimits

0x534f,	// (0x00064a48) main_mup2_pane_g6

0x534f,	// (0x00064a48) main_mup2_pane_g7_ParamLimits

0x534f,	// (0x00064a48) main_mup2_pane_g7

0x0006,

0xf5ff,	// (0x0006ecf8) main_mup2_pane_g_ParamLimits

0xf5ff,	// (0x0006ecf8) main_mup2_pane_g

0x535d,	// (0x00064a56) main_mup2_pane_t1_ParamLimits

0x535d,	// (0x00064a56) main_mup2_pane_t1

0x535d,	// (0x00064a56) main_mup2_pane_t2_ParamLimits

0x535d,	// (0x00064a56) main_mup2_pane_t2

0x535d,	// (0x00064a56) main_mup2_pane_t3_ParamLimits

0x535d,	// (0x00064a56) main_mup2_pane_t3

0x535d,	// (0x00064a56) main_mup2_pane_t4_ParamLimits

0x535d,	// (0x00064a56) main_mup2_pane_t4

0x535d,	// (0x00064a56) main_mup2_pane_t5_ParamLimits

0x535d,	// (0x00064a56) main_mup2_pane_t5

0x535d,	// (0x00064a56) main_mup2_pane_t6_ParamLimits

0x535d,	// (0x00064a56) main_mup2_pane_t6

0x0005,

0xf60e,	// (0x0006ed07) main_mup2_pane_t_ParamLimits

0xf60e,	// (0x0006ed07) main_mup2_pane_t

0x8086,	// (0x0006777f) mup2_visualizer_pane_ParamLimits

0x8086,	// (0x0006777f) mup2_visualizer_pane

0x8086,	// (0x0006777f) mup_progress_pane_cp_ParamLimits

0x8086,	// (0x0006777f) mup_progress_pane_cp

0xea02,	// (0x0006e0fb) mup_volume_pane_cp_ParamLimits

0xea02,	// (0x0006e0fb) mup_volume_pane_cp

0x5333,	// (0x00064a2c) mup2_visualizer_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) mup2_visualizer_pane_g1

0x5341,	// (0x00064a3a) mup2_visualizer_pane_g2_ParamLimits

0x5341,	// (0x00064a3a) mup2_visualizer_pane_g2

0x5341,	// (0x00064a3a) mup2_visualizer_pane_g3_ParamLimits

0x5341,	// (0x00064a3a) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0006e7dd) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0006e7dd) mup2_visualizer_pane_g

0x8808,	// (0x00067f01) aid_size_cell_fmradio

0x8e3e,	// (0x00068537) aid_height_parent_landcape

0x658e,	// (0x00065c87) wml_content_pane_cp

0x6596,	// (0x00065c8f) wml_tabs_pane

0x659f,	// (0x00065c98) popup_wml_miniature_window

0x65a7,	// (0x00065ca0) scroll_pane_cp021

0x65bb,	// (0x00065cb4) wml_content_pane_comp8

0x079d,	// (0x0005fe96) bg_popup_sub_pane_cp05

0xea18,	// (0x0006e111) popup_wml_miniature_window_g1

0xea20,	// (0x0006e119) wml_miniature_view_pane

0x91ad,	// (0x000688a6) aid_size_wml_view

0x91b5,	// (0x000688ae) wml_miniature_view_pane_g1

0x91be,	// (0x000688b7) wml_miniature_view_pane_g2

0x91c7,	// (0x000688c0) wml_miniature_view_pane_g3

0x91cf,	// (0x000688c8) wml_miniature_view_pane_g4

0x91d7,	// (0x000688d0) wml_miniature_view_pane_g5

0x91df,	// (0x000688d8) wml_miniature_view_pane_g6

0x91e7,	// (0x000688e0) wml_miniature_view_pane_g7

0x91ef,	// (0x000688e8) wml_miniature_view_pane_g8

0x0007,

0xf61b,	// (0x0006ed14) wml_miniature_view_pane_g

0xea28,	// (0x0006e121) background_graphic_ParamLimits

0xea28,	// (0x0006e121) background_graphic

0xea34,	// (0x0006e12d) wml_tabs_2_pane

0xea3d,	// (0x0006e136) wml_tabs_3_pane_ParamLimits

0xea3d,	// (0x0006e136) wml_tabs_3_pane

0xea4f,	// (0x0006e148) wml_tabs_4_pane_ParamLimits

0xea4f,	// (0x0006e148) wml_tabs_4_pane

0xea65,	// (0x0006e15e) wml_tabs_5_pane_ParamLimits

0xea65,	// (0x0006e15e) wml_tabs_5_pane

0xea7f,	// (0x0006e178) wml_tabs_pane_g2_ParamLimits

0xea7f,	// (0x0006e178) wml_tabs_pane_g2

0xea94,	// (0x0006e18d) wml_tabs_pane_g3_ParamLimits

0xea94,	// (0x0006e18d) wml_tabs_pane_g3

0xeaa9,	// (0x0006e1a2) wml_tabs_2_active_pane_ParamLimits

0xeaa9,	// (0x0006e1a2) wml_tabs_2_active_pane

0xeaa9,	// (0x0006e1a2) wml_tabs_2_passive_pane_ParamLimits

0xeaa9,	// (0x0006e1a2) wml_tabs_2_passive_pane

0x91f7,	// (0x000688f0) wml_tabs_3_active_pane_cp_ParamLimits

0x91f7,	// (0x000688f0) wml_tabs_3_active_pane_cp

0x9208,	// (0x00068901) wml_tabs_3_passive_pane_ParamLimits

0x9208,	// (0x00068901) wml_tabs_3_passive_pane

0x9219,	// (0x00068912) wml_tabs_3_passive_pane_cp_ParamLimits

0x9219,	// (0x00068912) wml_tabs_3_passive_pane_cp

0x922a,	// (0x00068923) tabs_4_active_pane

0x9232,	// (0x0006892b) tabs_4_passive_pane

0x923a,	// (0x00068933) tabs_4_passive_pane_cp

0x9242,	// (0x0006893b) tabs_4_passive_pane_cp2

0x8c24,	// (0x0006831d) aid_height_text

0x8086,	// (0x0006777f) mup_volume_cont_pane_ParamLimits

0x8086,	// (0x0006777f) mup_volume_cont_pane

0x02fb,	// (0x0005f9f4) aid_size_cell_pinb

0x02fb,	// (0x0005f9f4) aid_size_list_pinb

0x8086,	// (0x0006777f) mup2_volume_cont_pane_ParamLimits

0x8086,	// (0x0006777f) mup2_volume_cont_pane

0x924a,	// (0x00068943) mup2_volume_cont_pane_g1_ParamLimits

0x924a,	// (0x00068943) mup2_volume_cont_pane_g1

0x4e4e,	// (0x00064547) aid_size_cell_touch_ParamLimits

0x4e4e,	// (0x00064547) aid_size_cell_touch

0x50f6,	// (0x000647ef) touch_pane_ParamLimits

0x50f6,	// (0x000647ef) touch_pane

0x02fb,	// (0x0005f9f4) main_rss2_pane

0xeac0,	// (0x0006e1b9) listscroll_rss2_pane

0xeac9,	// (0x0006e1c2) rss2_navigation_pane

0xead1,	// (0x0006e1ca) list_rss2_pane

0x7b74,	// (0x0006726d) scroll_pane_cp22

0xead9,	// (0x0006e1d2) rss2_navigation_pane_g1

0xeae2,	// (0x0006e1db) rss2_navigation_pane_g2

0xeaea,	// (0x0006e1e3) rss2_navigation_pane_g3

0x0002,

0xf62c,	// (0x0006ed25) rss2_navigation_pane_g

0xeaf2,	// (0x0006e1eb) rss2_navigation_pane_t1

0x9260,	// (0x00068959) rss2_list_single_pane_ParamLimits

0x9260,	// (0x00068959) rss2_list_single_pane

0xeb00,	// (0x0006e1f9) rss2_list_single_pane_t2

0xeb0e,	// (0x0006e207) rss2_list_single_pane_t3_ParamLimits

0xeb0e,	// (0x0006e207) rss2_list_single_pane_t3

0xeb2b,	// (0x0006e224) rss2_list_single_pane_t4

0x7425,	// (0x00066b1e) smil_status_pane_g1

0x52da,	// (0x000649d3) main_image2_pane_ParamLimits

0x52da,	// (0x000649d3) main_image2_pane

0x5341,	// (0x00064a3a) main_camera2_pane_g9_ParamLimits

0x5341,	// (0x00064a3a) main_camera2_pane_g9

0x5e1a,	// (0x00065513) main_camera2_pane_t5_ParamLimits

0x5e1a,	// (0x00065513) main_camera2_pane_t5

0x9199,	// (0x00068892) main_camera2_pane_t6_ParamLimits

0x9199,	// (0x00068892) main_camera2_pane_t6

0x9294,	// (0x0006898d) main_image2_pane_g1_ParamLimits

0x9294,	// (0x0006898d) main_image2_pane_g1

0x87f2,	// (0x00067eeb) smil2_video_pane_ParamLimits

0x87f2,	// (0x00067eeb) smil2_video_pane

0x4e82,	// (0x0006457b) aid_zoom_text_primary_cp

0x509f,	// (0x00064798) popup_preview_fixed_window

0x6457,	// (0x00065b50) im_reading_pane_g1

0x918b,	// (0x00068884) cams2_bc_adjust_pane_cp_ParamLimits

0x918b,	// (0x00068884) cams2_bc_adjust_pane_cp

0x08ed,	// (0x0005ffe6) cams2_bc_adjust_pane_ParamLimits

0x08ed,	// (0x0005ffe6) cams2_bc_adjust_pane

0x5f63,	// (0x0006565c) cams2_bc_adjust_pane_g1

0x02fb,	// (0x0005f9f4) cams2_slider_pane

0x5f63,	// (0x0006565c) cams2_slider_pane_g1

0x5f63,	// (0x0006565c) cams2_slider_pane_g2

0x0006,

0xf633,	// (0x0006ed2c) cams2_slider_pane_g

0x538b,	// (0x00064a84) calc_display_pane_ParamLimits

0x53a9,	// (0x00064aa2) calc_paper_pane_ParamLimits

0x53c5,	// (0x00064abe) grid_calc_pane_ParamLimits

0x79e1,	// (0x000670da) popup_clock_digital_window_t1_ParamLimits

0x86bd,	// (0x00067db6) main_image_pane_t1

0x5371,	// (0x00064a6a) aid_size_cell_calc_ParamLimits

0x5371,	// (0x00064a6a) aid_size_cell_calc

0x8e84,	// (0x0006857d) popup_blid_sat_info2_window_ParamLimits

0x8e84,	// (0x0006857d) popup_blid_sat_info2_window

0xeb39,	// (0x0006e232) aid_size_cell_blid

0x8086,	// (0x0006777f) bg_popup_window_pane_cp07

0xeb56,	// (0x0006e24f) grid_popup_blid_pane

0xeb60,	// (0x0006e259) heading_pane_cp05_ParamLimits

0xeb60,	// (0x0006e259) heading_pane_cp05

0xec2a,	// (0x0006e323) cell_popup_blid_pane_ParamLimits

0xec2a,	// (0x0006e323) cell_popup_blid_pane

0xec4e,	// (0x0006e347) cell_popup_blid_pane_g1

0xec56,	// (0x0006e34f) cell_popup_blid_pane_t1

0x8086,	// (0x0006777f) mup2_indicator_pane_ParamLimits

0x8086,	// (0x0006777f) mup2_indicator_pane

0x02fb,	// (0x0005f9f4) mup2_visualizer_osc_pane

0xea02,	// (0x0006e0fb) mup2_visualizer_spec_pane_ParamLimits

0xea02,	// (0x0006e0fb) mup2_visualizer_spec_pane

0x02fb,	// (0x0005f9f4) mup2_spec_half_pane

0x02fb,	// (0x0005f9f4) mup2_spec_half_pane_cp

0xec64,	// (0x0006e35d) mup2_spec_bar_pane_ParamLimits

0xec64,	// (0x0006e35d) mup2_spec_bar_pane

0x5f63,	// (0x0006565c) mup2_spec_bar_pane_g1

0xec83,	// (0x0006e37c) mup2_spec_bar_pane_g2

0x0001,

0xf659,	// (0x0006ed52) mup2_spec_bar_pane_g

0x02fb,	// (0x0005f9f4) mup2_osc_middle_pane

0x5f63,	// (0x0006565c) mup2_visualizer_osc_pane_g1

0x03aa,	// (0x0005faa3) popup_number_entry_window_t1_ParamLimits

0x03bd,	// (0x0005fab6) popup_number_entry_window_t2_ParamLimits

0x03cf,	// (0x0005fac8) popup_number_entry_window_t3_ParamLimits

0x514d,	// (0x00064846) popup_number_entry_window_t5_ParamLimits

0x514d,	// (0x00064846) popup_number_entry_window_t5

0xf085,	// (0x0006e77e) popup_number_entry_window_t_ParamLimits

0x03e1,	// (0x0005fada) text_title_cp2_ParamLimits

0x8390,	// (0x00067a89) aid_hotspot_pointer_text2_pane

0x842a,	// (0x00067b23) main_viewer_pane_g9_ParamLimits

0x842a,	// (0x00067b23) main_viewer_pane_g9

0x6e03,	// (0x000664fc) cale_month_pane_t1_ParamLimits

0x7508,	// (0x00066c01) bg_cale_pane_ParamLimits

0x7520,	// (0x00066c19) list_cale_pane_ParamLimits

0x7531,	// (0x00066c2a) listscroll_cale_day_pane_t1

0x7543,	// (0x00066c3c) scroll_pane_cp09_ParamLimits

0x80ed,	// (0x000677e6) main_mup_eq_pane_t1_ParamLimits

0x80ed,	// (0x000677e6) main_mup_eq_pane_t1

0x8107,	// (0x00067800) main_mup_eq_pane_t2_ParamLimits

0x8107,	// (0x00067800) main_mup_eq_pane_t2

0x811f,	// (0x00067818) main_mup_eq_pane_t3_ParamLimits

0x811f,	// (0x00067818) main_mup_eq_pane_t3

0x8137,	// (0x00067830) main_mup_eq_pane_t4_ParamLimits

0x8137,	// (0x00067830) main_mup_eq_pane_t4

0x814f,	// (0x00067848) main_mup_eq_pane_t5_ParamLimits

0x814f,	// (0x00067848) main_mup_eq_pane_t5

0x8167,	// (0x00067860) main_mup_eq_pane_t6_ParamLimits

0x8167,	// (0x00067860) main_mup_eq_pane_t6

0x817b,	// (0x00067874) main_mup_eq_pane_t7_ParamLimits

0x817b,	// (0x00067874) main_mup_eq_pane_t7

0x818f,	// (0x00067888) main_mup_eq_pane_t8_ParamLimits

0x818f,	// (0x00067888) main_mup_eq_pane_t8

0x81a5,	// (0x0006789e) main_mup_eq_pane_t9_ParamLimits

0x81a5,	// (0x0006789e) main_mup_eq_pane_t9

0x81bd,	// (0x000678b6) main_mup_eq_pane_t10_ParamLimits

0x81bd,	// (0x000678b6) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x0006eae2) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x0006eae2) main_mup_eq_pane_t

0x827a,	// (0x00067973) mup_equalizer_pane_cp5_ParamLimits

0x8290,	// (0x00067989) mup_equalizer_pane_cp6_ParamLimits

0x82a8,	// (0x000679a1) mup_equalizer_pane_cp7_ParamLimits

0x02fb,	// (0x0005f9f4) main_gallery_pane

0xe97e,	// (0x0006e077) smil2_volume_pane

0xe986,	// (0x0006e07f) smil_status_volume_pane_g1_ParamLimits

0xe999,	// (0x0006e092) smil_status_volume_pane_g2_ParamLimits

0x903e,	// (0x00068737) smil_status_volume_pane_g3_ParamLimits

0xf5b2,	// (0x0006ecab) smil_status_volume_pane_g_ParamLimits

0x8086,	// (0x0006777f) bg_popup_window_pane_cp07_ParamLimits

0xeb41,	// (0x0006e23a) blid_firmament_pane

0x08ed,	// (0x0005ffe6) aid_size_cell_gallery_ParamLimits

0x08ed,	// (0x0005ffe6) aid_size_cell_gallery

0x08ed,	// (0x0005ffe6) grid_gallery_pane_ParamLimits

0x08ed,	// (0x0005ffe6) grid_gallery_pane

0xe903,	// (0x0006dffc) cell_gallery_pane_ParamLimits

0xe903,	// (0x0006dffc) cell_gallery_pane

0x52da,	// (0x000649d3) bg_cell_gallery_focus_pane_ParamLimits

0x52da,	// (0x000649d3) bg_cell_gallery_focus_pane

0x5333,	// (0x00064a2c) cell_gallery_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) cell_gallery_pane_g1

0x5333,	// (0x00064a2c) cell_gallery_pane_g2_ParamLimits

0x5333,	// (0x00064a2c) cell_gallery_pane_g2

0x5333,	// (0x00064a2c) cell_gallery_pane_g3_ParamLimits

0x5333,	// (0x00064a2c) cell_gallery_pane_g3

0x5341,	// (0x00064a3a) cell_gallery_pane_g4_ParamLimits

0x5341,	// (0x00064a3a) cell_gallery_pane_g4

0x0003,

0xf65e,	// (0x0006ed57) cell_gallery_pane_g_ParamLimits

0xf65e,	// (0x0006ed57) cell_gallery_pane_g

0xec8d,	// (0x0006e386) bg_cell_gallery_focus_pane_g1

0xec95,	// (0x0006e38e) bg_cell_gallery_focus_pane_g2

0xec9d,	// (0x0006e396) bg_cell_gallery_focus_pane_g3

0xeca5,	// (0x0006e39e) bg_cell_gallery_focus_pane_g4

0xecad,	// (0x0006e3a6) bg_cell_gallery_focus_pane_g5

0xecb5,	// (0x0006e3ae) bg_cell_gallery_focus_pane_g6

0xecbd,	// (0x0006e3b6) bg_cell_gallery_focus_pane_g7

0xecc5,	// (0x0006e3be) bg_cell_gallery_focus_pane_g8

0x0007,

0xf667,	// (0x0006ed60) bg_cell_gallery_focus_pane_g

0xeccd,	// (0x0006e3c6) aid_firma_cardinal

0xece1,	// (0x0006e3da) blid_firmament_pane_t1

0xecf8,	// (0x0006e3f1) blid_firmament_pane_t2

0xed0f,	// (0x0006e408) blid_firmament_pane_t3

0xed26,	// (0x0006e41f) blid_firmament_pane_t4

0x0003,

0xf678,	// (0x0006ed71) blid_firmament_pane_t

0xed3d,	// (0x0006e436) blid_sat_info_pane

0x5f63,	// (0x0006565c) blid_sat_info_pane_g1

0x5f63,	// (0x0006565c) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x0006ead6) blid_sat_info_pane_g

0xed4d,	// (0x0006e446) blid_sat_info_pane_t1

0xed5b,	// (0x0006e454) smil2_volume_content_pane

0xed64,	// (0x0006e45d) smil2_volume_pane_g1

0xed6c,	// (0x0006e465) smil2_volume_content_pane_g1

0xed75,	// (0x0006e46e) smil2_volume_content_pane_g2

0xed7e,	// (0x0006e477) smil2_volume_content_pane_g3

0xed87,	// (0x0006e480) smil2_volume_content_pane_g4

0xed90,	// (0x0006e489) smil2_volume_content_pane_g5

0xed99,	// (0x0006e492) smil2_volume_content_pane_g6

0xeda2,	// (0x0006e49b) smil2_volume_content_pane_g7

0xedab,	// (0x0006e4a4) smil2_volume_content_pane_g8

0xedb4,	// (0x0006e4ad) smil2_volume_content_pane_g9

0xedbd,	// (0x0006e4b6) smil2_volume_content_pane_g10

0x0009,

0xf681,	// (0x0006ed7a) smil2_volume_content_pane_g

0x5b47,	// (0x00065240) cale_week_day_heading_pane_t1_ParamLimits

0x5b62,	// (0x0006525b) cale_week_day_heading_pane_t2_ParamLimits

0x5b7d,	// (0x00065276) cale_week_day_heading_pane_t3_ParamLimits

0x5b98,	// (0x00065291) cale_week_day_heading_pane_t4_ParamLimits

0x5bb3,	// (0x000652ac) cale_week_day_heading_pane_t5_ParamLimits

0x5bce,	// (0x000652c7) cale_week_day_heading_pane_t6_ParamLimits

0x5be9,	// (0x000652e2) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0006e885) cale_week_day_heading_pane_t_ParamLimits

0x5c04,	// (0x000652fd) bg_cale_side_pane_ParamLimits

0x5c12,	// (0x0006530b) cale_week_time_pane_t1_ParamLimits

0x5c2c,	// (0x00065325) cale_week_time_pane_t2_ParamLimits

0x5c46,	// (0x0006533f) cale_week_time_pane_t3_ParamLimits

0x5c60,	// (0x00065359) cale_week_time_pane_t4_ParamLimits

0x5c7a,	// (0x00065373) cale_week_time_pane_t5_ParamLimits

0x5c94,	// (0x0006538d) cale_week_time_pane_t6_ParamLimits

0x5cb4,	// (0x000653ad) cale_week_time_pane_t7_ParamLimits

0x5cd6,	// (0x000653cf) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0006e894) cale_week_time_pane_t_ParamLimits

0x5cfa,	// (0x000653f3) cell_cale_week_pane_g2_ParamLimits

0x5c04,	// (0x000652fd) bg_cale_side_pane_cp01_ParamLimits

0x720a,	// (0x00066903) cale_month_week_pane_t1_ParamLimits

0x7223,	// (0x0006691c) cale_month_week_pane_t2_ParamLimits

0x723c,	// (0x00066935) cale_month_week_pane_t3_ParamLimits

0x7255,	// (0x0006694e) cale_month_week_pane_t4_ParamLimits

0x7270,	// (0x00066969) cale_month_week_pane_t5_ParamLimits

0x7291,	// (0x0006698a) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0006e962) cale_month_week_pane_t_ParamLimits

0x73d8,	// (0x00066ad1) cell_cale_month_pane_g1_ParamLimits

0x02fb,	// (0x0005f9f4) main_cale_event_viewer_pane

0x02fb,	// (0x0005f9f4) listscroll_cale_event_viewer_pane

0xedc6,	// (0x0006e4bf) list_cale_ev_pane

0xedce,	// (0x0006e4c7) scroll_pane_cp023

0xedda,	// (0x0006e4d3) field_cale_ev_pane_ParamLimits

0xedda,	// (0x0006e4d3) field_cale_ev_pane

0xedf8,	// (0x0006e4f1) field_cale_ev_content_pane_ParamLimits

0xedf8,	// (0x0006e4f1) field_cale_ev_content_pane

0xee04,	// (0x0006e4fd) field_cale_ev_pane_g1_ParamLimits

0xee04,	// (0x0006e4fd) field_cale_ev_pane_g1

0xee10,	// (0x0006e509) field_cale_ev_pane_g2_ParamLimits

0xee10,	// (0x0006e509) field_cale_ev_pane_g2

0xee28,	// (0x0006e521) field_cale_ev_pane_g3_ParamLimits

0xee28,	// (0x0006e521) field_cale_ev_pane_g3

0x0002,

0xf696,	// (0x0006ed8f) field_cale_ev_pane_g_ParamLimits

0xf696,	// (0x0006ed8f) field_cale_ev_pane_g

0xee40,	// (0x0006e539) field_cale_ev_pane_t1_ParamLimits

0xee40,	// (0x0006e539) field_cale_ev_pane_t1

0xee57,	// (0x0006e550) field_cale_ev_content_pane_t1_ParamLimits

0xee57,	// (0x0006e550) field_cale_ev_content_pane_t1

0x835a,	// (0x00067a53) bg_button_pane_cp01

0x587d,	// (0x00064f76) listscroll_cale_week_pane_ParamLimits

0x588d,	// (0x00064f86) popup_toolbar_window_cp01

0x5ab6,	// (0x000651af) listscroll_cale_week_pane_t1_ParamLimits

0x587d,	// (0x00064f76) listscroll_cale_day_pane_ParamLimits

0x588d,	// (0x00064f86) popup_toolbar_window_cp02

0x7531,	// (0x00066c2a) listscroll_cale_day_pane_t1_ParamLimits

0x587d,	// (0x00064f76) main_cale_month_pane_ParamLimits

0x8f87,	// (0x00068680) popup_toolbar_window_cp03_ParamLimits

0x8f87,	// (0x00068680) popup_toolbar_window_cp03

0x86a5,	// (0x00067d9e) main_image_pane_g2_ParamLimits

0x86a5,	// (0x00067d9e) main_image_pane_g2

0x86b1,	// (0x00067daa) main_image_pane_g3_ParamLimits

0x86b1,	// (0x00067daa) main_image_pane_g3

0x0002,

0xf47b,	// (0x0006eb74) main_image_pane_g_ParamLimits

0xf47b,	// (0x0006eb74) main_image_pane_g

0x86bd,	// (0x00067db6) main_image_pane_t1_ParamLimits

0x86d4,	// (0x00067dcd) main_image_pane_t2_ParamLimits

0x86d4,	// (0x00067dcd) main_image_pane_t2

0x86e6,	// (0x00067ddf) main_image_pane_t3_ParamLimits

0x86e6,	// (0x00067ddf) main_image_pane_t3

0x86f8,	// (0x00067df1) main_image_pane_t4_ParamLimits

0x86f8,	// (0x00067df1) main_image_pane_t4

0x0003,

0xf482,	// (0x0006eb7b) main_image_pane_t_ParamLimits

0xf482,	// (0x0006eb7b) main_image_pane_t

0x870a,	// (0x00067e03) popup_image_details_window_cp01

0x8714,	// (0x00067e0d) popup_toobar_trans_pane_cp01_ParamLimits

0x8714,	// (0x00067e0d) popup_toobar_trans_pane_cp01

0x8ed7,	// (0x000685d0) popup_image_details_window_ParamLimits

0x8ed7,	// (0x000685d0) popup_image_details_window

0x8ee5,	// (0x000685de) popup_image_focus_window

0x08ed,	// (0x0005ffe6) camera2_autofocus_pane_ParamLimits

0x08ed,	// (0x0005ffe6) camera2_autofocus_pane

0x02fb,	// (0x0005f9f4) bg_popup_sub_pane_cp06

0xee75,	// (0x0006e56e) popup_image_focus_window_g1

0xee7d,	// (0x0006e576) popup_image_focus_window_g2

0xee85,	// (0x0006e57e) popup_image_focus_window_g3

0xee8d,	// (0x0006e586) popup_image_focus_window_g4

0x0003,

0xf69d,	// (0x0006ed96) popup_image_focus_window_g

0xee95,	// (0x0006e58e) popup_image_focus_window_t1

0xeea3,	// (0x0006e59c) popup_image_focus_window_t2

0xeeb3,	// (0x0006e5ac) popup_image_focus_window_t3

0x0002,

0xf6a6,	// (0x0006ed9f) popup_image_focus_window_t

0x5333,	// (0x00064a2c) camera2_autofocus_pane_g1

0x52da,	// (0x000649d3) bg_tb_trans_pane_cp01

0xeec1,	// (0x0006e5ba) popup_image_details_window_g1

0xeed4,	// (0x0006e5cd) popup_image_details_window_g2

0x0002,

0xf6b8,	// (0x0006edb1) popup_image_details_window_g

0xeefd,	// (0x0006e5f6) popup_image_details_window_t1

0xef0f,	// (0x0006e608) popup_image_details_window_t2

0xef28,	// (0x0006e621) popup_image_details_window_t3

0xef3c,	// (0x0006e635) popup_image_details_window_t4

0xef57,	// (0x0006e650) popup_image_details_window_t5

0x0004,

0xf6bf,	// (0x0006edb8) popup_image_details_window_t

0x54e2,	// (0x00064bdb) bg_calc_paper_pane_ParamLimits

0x02fb,	// (0x0005f9f4) grid_highlight_pane_cp013

0x54f6,	// (0x00064bef) list_calc_pane_ParamLimits

0x5508,	// (0x00064c01) scroll_pane_cp024

0x5510,	// (0x00064c09) bg_calc_display_pane_ParamLimits

0x551c,	// (0x00064c15) calc_display_pane_t1_ParamLimits

0x5531,	// (0x00064c2a) calc_display_pane_t2_ParamLimits

0x5546,	// (0x00064c3f) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0006e805) calc_display_pane_t_ParamLimits

0x5669,	// (0x00064d62) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0006e822) cell_calc_pane_g

0x5672,	// (0x00064d6b) cell_calc_pane_t1

0x5681,	// (0x00064d7a) grid_highlight_pane_cp02_ParamLimits

0x5697,	// (0x00064d90) toolbar_button_pane_cp01_ParamLimits

0x5697,	// (0x00064d90) toolbar_button_pane_cp01

0x874e,	// (0x00067e47) temp_image_control_pane_ParamLimits

0x874e,	// (0x00067e47) temp_image_control_pane

0x52da,	// (0x000649d3) main_mp3_pane

0xef71,	// (0x0006e66a) temp_image_control_pane_g1_ParamLimits

0xef71,	// (0x0006e66a) temp_image_control_pane_g1

0xef7f,	// (0x0006e678) temp_image_control_pane_g2_ParamLimits

0xef7f,	// (0x0006e678) temp_image_control_pane_g2

0xef91,	// (0x0006e68a) temp_image_control_pane_g3_ParamLimits

0xef91,	// (0x0006e68a) temp_image_control_pane_g3

0x92a0,	// (0x00068999) temp_image_control_pane_g4_ParamLimits

0x92a0,	// (0x00068999) temp_image_control_pane_g4

0x0003,

0xf6ca,	// (0x0006edc3) temp_image_control_pane_g_ParamLimits

0xf6ca,	// (0x0006edc3) temp_image_control_pane_g

0xef71,	// (0x0006e66a) main_mp3_pane_g1

0x92b1,	// (0x000689aa) main_mp3_pane_g2

0x0007,

0xf6d3,	// (0x0006edcc) main_mp3_pane_g

0xefc6,	// (0x0006e6bf) main_mp3_pane_t1

0x5341,	// (0x00064a3a) main_camera_pane_g8_ParamLimits

0x5341,	// (0x00064a3a) main_camera_pane_g8

0x5f1b,	// (0x00065614) main_video_pane_g7_ParamLimits

0x5f1b,	// (0x00065614) main_video_pane_g7

0x5e1a,	// (0x00065513) main_camera2_pane_t7_ParamLimits

0x5e1a,	// (0x00065513) main_camera2_pane_t7

0x654e,	// (0x00065c47) scroll_pane_cp025_ParamLimits

0x654e,	// (0x00065c47) scroll_pane_cp025

0x6562,	// (0x00065c5b) scroll_pane_cp026_ParamLimits

0x6562,	// (0x00065c5b) scroll_pane_cp026

0x6571,	// (0x00065c6a) wml_content_pane_ParamLimits

0x02fb,	// (0x0005f9f4) main_touch_calib_pane

0x9355,	// (0x00068a4e) main_touch_calib_pane_g1

0x9361,	// (0x00068a5a) main_touch_calib_pane_g2

0x936d,	// (0x00068a66) main_touch_calib_pane_g3

0x9379,	// (0x00068a72) main_touch_calib_pane_g4

0x0003,

0xf6f1,	// (0x0006edea) main_touch_calib_pane_g

0x9385,	// (0x00068a7e) main_touch_calib_pane_t1

0x939e,	// (0x00068a97) main_touch_calib_pane_t2

0x0004,

0xf6fa,	// (0x0006edf3) main_touch_calib_pane_t

0x7e09,	// (0x00067502) mup_progress_pane_cp02

0x7e3e,	// (0x00067537) navi_pane_g1

0x7ef9,	// (0x000675f2) navi_pane_mp_t3

0x52da,	// (0x000649d3) main_mp3_pane_ParamLimits

0x8fc4,	// (0x000686bd) navi_pane_ParamLimits

0xef71,	// (0x0006e66a) main_mp3_pane_g1_ParamLimits

0x92b1,	// (0x000689aa) main_mp3_pane_g2_ParamLimits

0x92bd,	// (0x000689b6) main_mp3_pane_g3_ParamLimits

0x92bd,	// (0x000689b6) main_mp3_pane_g3

0x92c9,	// (0x000689c2) main_mp3_pane_g4_ParamLimits

0x92c9,	// (0x000689c2) main_mp3_pane_g4

0x5333,	// (0x00064a2c) main_mp3_pane_g5_ParamLimits

0x5333,	// (0x00064a2c) main_mp3_pane_g5

0xefa1,	// (0x0006e69a) main_mp3_pane_g6_ParamLimits

0xefa1,	// (0x0006e69a) main_mp3_pane_g6

0xefae,	// (0x0006e6a7) main_mp3_pane_g7_ParamLimits

0xefae,	// (0x0006e6a7) main_mp3_pane_g7

0xefba,	// (0x0006e6b3) main_mp3_pane_g8_ParamLimits

0xefba,	// (0x0006e6b3) main_mp3_pane_g8

0xf6d3,	// (0x0006edcc) main_mp3_pane_g_ParamLimits

0x92d5,	// (0x000689ce) main_mp3_pane_t2

0x92e5,	// (0x000689de) main_mp3_pane_t3

0xefd4,	// (0x0006e6cd) main_mp3_pane_t4

0xefe2,	// (0x0006e6db) main_mp3_pane_t5

0x0005,

0xf6e4,	// (0x0006eddd) main_mp3_pane_t

0xeff0,	// (0x0006e6e9) mup_progress_pane_cp01

0x4e82,	// (0x0006457b) aid_zoom_text_secondary2

0xedc6,	// (0x0006e4bf) list_cale_ev2_pane

0xedce,	// (0x0006e4c7) scroll_pane_cp023_ParamLimits

0x93f9,	// (0x00068af2) field_cale_ev2_pane_ParamLimits

0x93f9,	// (0x00068af2) field_cale_ev2_pane

0x9423,	// (0x00068b1c) field_cale_ev2_pane_g1_ParamLimits

0x9423,	// (0x00068b1c) field_cale_ev2_pane_g1

0x942f,	// (0x00068b28) field_cale_ev2_pane_g2_ParamLimits

0x942f,	// (0x00068b28) field_cale_ev2_pane_g2

0x9447,	// (0x00068b40) field_cale_ev2_pane_g3_ParamLimits

0x9447,	// (0x00068b40) field_cale_ev2_pane_g3

0x0003,

0xf705,	// (0x0006edfe) field_cale_ev2_pane_g_ParamLimits

0xf705,	// (0x0006edfe) field_cale_ev2_pane_g

0x4281,	// (0x0006397a) field_cale_ev2_pane_t1_ParamLimits

0x4281,	// (0x0006397a) field_cale_ev2_pane_t1

0x4298,	// (0x00063991) field_cale_ev2_pane_t2_ParamLimits

0x4298,	// (0x00063991) field_cale_ev2_pane_t2

0x0001,

0xf70e,	// (0x0006ee07) field_cale_ev2_pane_t_ParamLimits

0xf70e,	// (0x0006ee07) field_cale_ev2_pane_t

0x84a0,	// (0x00067b99) main_postcard_pane_g5_ParamLimits

0x84a0,	// (0x00067b99) main_postcard_pane_g5

0x84ae,	// (0x00067ba7) main_postcard_pane_g6_ParamLimits

0x84ae,	// (0x00067ba7) main_postcard_pane_g6

0x08ed,	// (0x0005ffe6) camera2_autofocus_pane_cp_ParamLimits

0x08ed,	// (0x0005ffe6) camera2_autofocus_pane_cp

0x52da,	// (0x000649d3) main_mup3_pane

0x94aa,	// (0x00068ba3) main_mup3_pane_g1_ParamLimits

0x94aa,	// (0x00068ba3) main_mup3_pane_g1

0x94cb,	// (0x00068bc4) main_mup3_pane_g2_ParamLimits

0x94cb,	// (0x00068bc4) main_mup3_pane_g2

0x9545,	// (0x00068c3e) main_mup3_pane_g3_ParamLimits

0x9545,	// (0x00068c3e) main_mup3_pane_g3

0x9588,	// (0x00068c81) main_mup3_pane_g4_ParamLimits

0x9588,	// (0x00068c81) main_mup3_pane_g4

0x95cb,	// (0x00068cc4) main_mup3_pane_g5_ParamLimits

0x95cb,	// (0x00068cc4) main_mup3_pane_g5

0x960e,	// (0x00068d07) main_mup3_pane_g6_ParamLimits

0x960e,	// (0x00068d07) main_mup3_pane_g6

0x5341,	// (0x00064a3a) main_mup3_pane_g7_ParamLimits

0x5341,	// (0x00064a3a) main_mup3_pane_g7

0x0007,

0xf71e,	// (0x0006ee17) main_mup3_pane_g_ParamLimits

0xf71e,	// (0x0006ee17) main_mup3_pane_g

0x9684,	// (0x00068d7d) main_mup3_pane_t1_ParamLimits

0x9684,	// (0x00068d7d) main_mup3_pane_t1

0x96f3,	// (0x00068dec) main_mup3_pane_t2_ParamLimits

0x96f3,	// (0x00068dec) main_mup3_pane_t2

0x97bc,	// (0x00068eb5) main_mup3_pane_t4_ParamLimits

0x97bc,	// (0x00068eb5) main_mup3_pane_t4

0x980a,	// (0x00068f03) main_mup3_pane_t5_ParamLimits

0x980a,	// (0x00068f03) main_mup3_pane_t5

0x98ba,	// (0x00068fb3) main_mup3_pane_t6_ParamLimits

0x98ba,	// (0x00068fb3) main_mup3_pane_t6

0x0005,

0xf72f,	// (0x0006ee28) main_mup3_pane_t_ParamLimits

0xf72f,	// (0x0006ee28) main_mup3_pane_t

0x9966,	// (0x0006905f) mup3_progress_pane_ParamLimits

0x9966,	// (0x0006905f) mup3_progress_pane

0x99da,	// (0x000690d3) popup_mup3_control_window_ParamLimits

0x99da,	// (0x000690d3) popup_mup3_control_window

0xeff8,	// (0x0006e6f1) popup_mup3_text_window

0x99f3,	// (0x000690ec) mup3_progress_pane_t1

0x9a12,	// (0x0006910b) mup3_progress_pane_t2

0xf000,	// (0x0006e6f9) mup3_progress_pane_t3

0x0002,

0xf73c,	// (0x0006ee35) mup3_progress_pane_t

0x0b5e,	// (0x00060257) mup_progress_pane_cp03

0x02fb,	// (0x0005f9f4) bg_tb_trans_pane_cp04

0x9a31,	// (0x0006912a) mup3_volume_pane

0x9a39,	// (0x00069132) popup_mup3_control_window_g1

0x9a42,	// (0x0006913b) mup3_volume_pane_g1

0x9a4b,	// (0x00069144) mup3_volume_pane_g2

0x9a54,	// (0x0006914d) mup3_volume_pane_g3

0x0002,

0xf743,	// (0x0006ee3c) mup3_volume_pane_g

0x02fb,	// (0x0005f9f4) bg_tb_trans_pane_cp03

0x0b6e,	// (0x00060267) popup_mup3_text_window_g1

0x0b76,	// (0x0006026f) popup_mup3_text_window_t1

0x5632,	// (0x00064d2b) list_calc_item_pane_g1_ParamLimits

0xeab7,	// (0x0006e1b0) mup_volume_pane_cp_g1

0x93b7,	// (0x00068ab0) main_touch_calib_pane_t3

0x93cd,	// (0x00068ac6) main_touch_calib_pane_t4

0x93e3,	// (0x00068adc) main_touch_calib_pane_t5

0x4e3a,	// (0x00064533) aid_cell_size_toolbar2

0x4e42,	// (0x0006453b) aid_popup3_width_pane

0x4149,	// (0x00063842) aid_zoom_text_msg_primary

0x5def,	// (0x000654e8) vorec_t7

0x5585,	// (0x00064c7e) bg_calc_paper_pane_g1_ParamLimits

0x5591,	// (0x00064c8a) bg_calc_paper_pane_g2_ParamLimits

0x559d,	// (0x00064c96) bg_calc_paper_pane_g3_ParamLimits

0x55a9,	// (0x00064ca2) bg_calc_paper_pane_g4_ParamLimits

0x55b5,	// (0x00064cae) bg_calc_paper_pane_g5_ParamLimits

0x55c1,	// (0x00064cba) bg_calc_paper_pane_g6_ParamLimits

0x55d2,	// (0x00064ccb) bg_calc_paper_pane_g7_ParamLimits

0x55e3,	// (0x00064cdc) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0006e80c) bg_calc_paper_pane_g_ParamLimits

0x55f4,	// (0x00064ced) calc_bg_paper_pane_g9_ParamLimits

0x08ed,	// (0x0005ffe6) image_qvga_pane_ParamLimits

0x08ed,	// (0x0005ffe6) image_qvga_pane

0x52b8,	// (0x000649b1) bg_popup_sub_pane_cp04_ParamLimits

0x8614,	// (0x00067d0d) popup_mup_playback_window_g1_ParamLimits

0x8620,	// (0x00067d19) popup_mup_playback_window_t1_ParamLimits

0x8635,	// (0x00067d2e) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0006eb6f) popup_mup_playback_window_t_ParamLimits

0x5333,	// (0x00064a2c) main_mup2_pane_g3_ParamLimits

0x5333,	// (0x00064a2c) main_mup2_pane_g3

0x6177,	// (0x00065870) popup_toolbar_window_cp04

0xdbb6,	// (0x0006d2af) popup_call2_audio_second_window_g3_ParamLimits

0xdbb6,	// (0x0006d2af) popup_call2_audio_second_window_g3

0xdfc0,	// (0x0006d6b9) popup_call2_audio_first_window_g4_ParamLimits

0xdfc0,	// (0x0006d6b9) popup_call2_audio_first_window_g4

0xe5e7,	// (0x0006dce0) popup_call2_audio_in_window_g4_ParamLimits

0xe5e7,	// (0x0006dce0) popup_call2_audio_in_window_g4

0x864a,	// (0x00067d43) aid_area_sk_bg_cut_ParamLimits

0x864a,	// (0x00067d43) aid_area_sk_bg_cut

0x8657,	// (0x00067d50) aid_area_sk_bg_cut_2_ParamLimits

0x8657,	// (0x00067d50) aid_area_sk_bg_cut_2

0x02fb,	// (0x0005f9f4) aid_placing_details_win

0x02fb,	// (0x0005f9f4) aid_placing_details_win_2

0x5333,	// (0x00064a2c) camera2_autofocus_pane_g1_ParamLimits

0x5090,	// (0x00064789) popup_fixed_preview_cale_window_ParamLimits

0x5090,	// (0x00064789) popup_fixed_preview_cale_window

0x7fac,	// (0x000676a5) navi_slider_pane_g3

0x7fb5,	// (0x000676ae) navi_slider_pane_g4

0x7fbe,	// (0x000676b7) navi_slider_pane_g5

0x7fac,	// (0x000676a5) navi_slider_pane_g6

0x7fc7,	// (0x000676c0) navi_slider_pane_g7

0x82c9,	// (0x000679c2) mup_scale_pane_g3

0x82d2,	// (0x000679cb) mup_scale_pane_g4

0x82db,	// (0x000679d4) mup_scale_pane_g5

0x82e4,	// (0x000679dd) mup_scale_pane_g6

0x82ed,	// (0x000679e6) mup_scale_pane_g7

0x5f63,	// (0x0006565c) cams2_slider_pane_g3

0x5f63,	// (0x0006565c) cams2_slider_pane_g4

0x5f63,	// (0x0006565c) cams2_slider_pane_g5

0x5f63,	// (0x0006565c) cams2_slider_pane_g6

0x5f63,	// (0x0006565c) cams2_slider_pane_g7

0x5f63,	// (0x0006565c) camera2_autofocus_pane_cp_g1

0xe8f7,	// (0x0006dff0) bg_popup_preview_window_pane_cp02_ParamLimits

0xe8f7,	// (0x0006dff0) bg_popup_preview_window_pane_cp02

0x0b84,	// (0x0006027d) list_fp_cale_pane_ParamLimits

0x0b84,	// (0x0006027d) list_fp_cale_pane

0x0b90,	// (0x00060289) popup_fixed_preview_cale_window_t1_ParamLimits

0x0b90,	// (0x00060289) popup_fixed_preview_cale_window_t1

0x9a5d,	// (0x00069156) popup_fixed_preview_cale_window_t2_ParamLimits

0x9a5d,	// (0x00069156) popup_fixed_preview_cale_window_t2

0x9a72,	// (0x0006916b) popup_fixed_preview_cale_window_t3_ParamLimits

0x9a72,	// (0x0006916b) popup_fixed_preview_cale_window_t3

0x0002,

0xf74a,	// (0x0006ee43) popup_fixed_preview_cale_window_t_ParamLimits

0xf74a,	// (0x0006ee43) popup_fixed_preview_cale_window_t

0x9a87,	// (0x00069180) list_single_fp_cale_pane_ParamLimits

0x9a87,	// (0x00069180) list_single_fp_cale_pane

0x0bae,	// (0x000602a7) list_single_fp_cale_pane_g1_ParamLimits

0x0bae,	// (0x000602a7) list_single_fp_cale_pane_g1

0x0bba,	// (0x000602b3) list_single_fp_cale_pane_g2_ParamLimits

0x0bba,	// (0x000602b3) list_single_fp_cale_pane_g2

0x0002,

0xf751,	// (0x0006ee4a) list_single_fp_cale_pane_g_ParamLimits

0xf751,	// (0x0006ee4a) list_single_fp_cale_pane_g

0x0bd3,	// (0x000602cc) list_single_fp_cale_pane_t1_ParamLimits

0x0bd3,	// (0x000602cc) list_single_fp_cale_pane_t1

0x0be5,	// (0x000602de) list_single_fp_cale_pane_t2_ParamLimits

0x0be5,	// (0x000602de) list_single_fp_cale_pane_t2

0x0001,

0xf758,	// (0x0006ee51) list_single_fp_cale_pane_t_ParamLimits

0xf758,	// (0x0006ee51) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x02fb,	// (0x0005f9f4) main_dialer_pane

0x02fb,	// (0x0005f9f4) aid_cell_size_keypad

0x02fb,	// (0x0005f9f4) dialer_ne_pane

0x02fb,	// (0x0005f9f4) grid_dialer_command_1_pane

0x02fb,	// (0x0005f9f4) grid_dialer_command_2_pane

0x02fb,	// (0x0005f9f4) grid_dialer_keypad_pane

0x8086,	// (0x0006777f) bg_popup_call_pane_cp06_ParamLimits

0x8086,	// (0x0006777f) bg_popup_call_pane_cp06

0x8086,	// (0x0006777f) dialer_ne_clear_pane_ParamLimits

0x8086,	// (0x0006777f) dialer_ne_clear_pane

0x5f63,	// (0x0006565c) dialer_ne_pane_g1

0x5e1a,	// (0x00065513) dialer_ne_pane_t1_ParamLimits

0x5e1a,	// (0x00065513) dialer_ne_pane_t1

0x0e2e,	// (0x00060527) dialer_ne_pane_t2_ParamLimits

0x0e2e,	// (0x00060527) dialer_ne_pane_t2

0x9a9a,	// (0x00069193) dialer_ne_pane_t3_ParamLimits

0x9a9a,	// (0x00069193) dialer_ne_pane_t3

0x0002,

0xf75d,	// (0x0006ee56) dialer_ne_pane_t_ParamLimits

0xf75d,	// (0x0006ee56) dialer_ne_pane_t

0x9a9a,	// (0x00069193) dialer_ne_pane_t3_copy1_ParamLimits

0x9a9a,	// (0x00069193) dialer_ne_pane_t3_copy1

0x0c18,	// (0x00060311) cell_dialer_keypad_pane_ParamLimits

0x0c18,	// (0x00060311) cell_dialer_keypad_pane

0x52da,	// (0x000649d3) cell_dialer_command_1_pane_ParamLimits

0x52da,	// (0x000649d3) cell_dialer_command_1_pane

0x0c2f,	// (0x00060328) cell_dialer_command_2_pane_ParamLimits

0x0c2f,	// (0x00060328) cell_dialer_command_2_pane

0x52da,	// (0x000649d3) bg_button_pane_cp02_ParamLimits

0x52da,	// (0x000649d3) bg_button_pane_cp02

0x5333,	// (0x00064a2c) cell_dialer_keypad_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) cell_dialer_keypad_pane_g1

0x52da,	// (0x000649d3) bg_button_pane_cp03_ParamLimits

0x52da,	// (0x000649d3) bg_button_pane_cp03

0x5333,	// (0x00064a2c) cell_dialer_command_1_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) cell_dialer_command_1_pane_g1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp04

0x5f63,	// (0x0006565c) cell_dialer_command_2_pane_g1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp06

0x5f63,	// (0x0006565c) dialer_ne_clear_pane_g1

0x7e4a,	// (0x00067543) navi_pane_g2

0x7e78,	// (0x00067571) navi_pane_g3

0x0002,

0xf379,	// (0x0006ea72) navi_pane_g

0x7f07,	// (0x00067600) navi_pane_mv_g2

0x7f2e,	// (0x00067627) navi_pane_mv_g5

0x7f36,	// (0x0006762f) navi_pane_mv_t1

0x5510,	// (0x00064c09) main_clock2_pane

0x08ed,	// (0x0005ffe6) main_clock2_list_pane_ParamLimits

0x08ed,	// (0x0005ffe6) main_clock2_list_pane

0x9b10,	// (0x00069209) main_clock2_pane_t1_ParamLimits

0x9b10,	// (0x00069209) main_clock2_pane_t1

0x9b3e,	// (0x00069237) main_clock2_pane_t2_ParamLimits

0x9b3e,	// (0x00069237) main_clock2_pane_t2

0x0004,

0xf769,	// (0x0006ee62) main_clock2_pane_t_ParamLimits

0xf769,	// (0x0006ee62) main_clock2_pane_t

0x9ba3,	// (0x0006929c) popup_clock_analogue_window_cp03_ParamLimits

0x9ba3,	// (0x0006929c) popup_clock_analogue_window_cp03

0x9bc1,	// (0x000692ba) popup_clock_digital_window_cp02_ParamLimits

0x9bc1,	// (0x000692ba) popup_clock_digital_window_cp02

0x9c36,	// (0x0006932f) main_clock2_list_single_pane_ParamLimits

0x9c36,	// (0x0006932f) main_clock2_list_single_pane

0x5da5,	// (0x0006549e) list_highlight_pane_cp05

0x0c72,	// (0x0006036b) main_clock2_list_single_pane_t1

0x6177,	// (0x00065870) popup_toolbar_window_cp04_ParamLimits

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g2_ParamLimits

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g2

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g3_ParamLimits

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g3

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g4_ParamLimits

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g4

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g5_ParamLimits

0x5341,	// (0x00064a3a) camera2_autofocus_pane_g5

0x0004,

0xf6ad,	// (0x0006eda6) camera2_autofocus_pane_g_ParamLimits

0xf6ad,	// (0x0006eda6) camera2_autofocus_pane_g

0x946b,	// (0x00068b64) camera2_autofocus_pane_cp_g2

0x9473,	// (0x00068b6c) camera2_autofocus_pane_cp_g3

0x947b,	// (0x00068b74) camera2_autofocus_pane_cp_g4

0x9483,	// (0x00068b7c) camera2_autofocus_pane_cp_g5

0x0004,

0xf713,	// (0x0006ee0c) camera2_autofocus_pane_cp_g

0x02fb,	// (0x0005f9f4) popup_dialer_spcha_window

0x02fb,	// (0x0005f9f4) bg_popup_sub_pane_cp07

0x02fb,	// (0x0005f9f4) list_spcha_pane

0x0c80,	// (0x00060379) list_single_spcha_pane_ParamLimits

0x0c80,	// (0x00060379) list_single_spcha_pane

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp06

0x77d6,	// (0x00066ecf) list_single_spcha_pane_t1

0xe391,	// (0x0006da8a) popup_call2_audio_out_window_g4_ParamLimits

0xe391,	// (0x0006da8a) popup_call2_audio_out_window_g4

0x02fb,	// (0x0005f9f4) main_imed2_pane

0x8eed,	// (0x000685e6) popup_imed_adjust2_window

0x8f00,	// (0x000685f9) popup_imed_trans_window_ParamLimits

0x8f00,	// (0x000685f9) popup_imed_trans_window

0xeb8c,	// (0x0006e285) popup_blid_sat_info2_window_t1

0xeb9a,	// (0x0006e293) popup_blid_sat_info2_window_t2

0x000a,

0xf642,	// (0x0006ed3b) popup_blid_sat_info2_window_t

0x9ceb,	// (0x000693e4) aid_size_cell_colour_35

0x9d05,	// (0x000693fe) aid_size_cell_colour_112

0x9d1c,	// (0x00069415) aid_size_cell_effect

0x52da,	// (0x000649d3) bg_tb_trans_pane_cp02

0xf01d,	// (0x0006e716) heading_imed_pane

0x9d36,	// (0x0006942f) listscroll_imed_pane

0x0c92,	// (0x0006038b) heading_imed_pane_g1

0x0c9a,	// (0x00060393) heading_imed_pane_t1

0x0ca8,	// (0x000603a1) grid_imed_colour_35_pane_ParamLimits

0x0ca8,	// (0x000603a1) grid_imed_colour_35_pane

0x9d42,	// (0x0006943b) grid_imed_effect_pane

0x0cc0,	// (0x000603b9) list_imed_aspect_pane

0x9d52,	// (0x0006944b) scroll_pane_cp027_ParamLimits

0x9d52,	// (0x0006944b) scroll_pane_cp027

0x9d5e,	// (0x00069457) cell_imed_effect_pane_ParamLimits

0x9d5e,	// (0x00069457) cell_imed_effect_pane

0x0cc8,	// (0x000603c1) cell_imed_colour_pane_ParamLimits

0x0cc8,	// (0x000603c1) cell_imed_colour_pane

0x0d0a,	// (0x00060403) cell_imed_colour_pane_g1_ParamLimits

0x0d0a,	// (0x00060403) cell_imed_colour_pane_g1

0x0d1b,	// (0x00060414) hgihlgiht_grid_pane_cp016_ParamLimits

0x0d1b,	// (0x00060414) hgihlgiht_grid_pane_cp016

0x9d76,	// (0x0006946f) cell_imed_effect_pane_g1

0x9d7e,	// (0x00069477) grid_highlight_pane_cp017

0x0d2c,	// (0x00060425) list_imed_single_pane_ParamLimits

0x0d2c,	// (0x00060425) list_imed_single_pane

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp07

0x0d41,	// (0x0006043a) list_imed_aspect_pane_comp1_t1

0xe903,	// (0x0006dffc) bg_tb_trans_pane_cp05

0x0d63,	// (0x0006045c) popup_imed_adjust2_window_g1

0x0d8a,	// (0x00060483) popup_imed_adjust2_window_t1

0x0da2,	// (0x0006049b) slider_imed_adjust_pane

0x0db6,	// (0x000604af) slider_imed_adjust_pane_g1

0x0dc6,	// (0x000604bf) slider_imed_adjust_pane_g2

0x0dd6,	// (0x000604cf) slider_imed_adjust_pane_g3

0x0de7,	// (0x000604e0) slider_imed_adjust_pane_g4

0x0003,

0xf786,	// (0x0006ee7f) slider_imed_adjust_pane_g

0x9d87,	// (0x00069480) aid_size_cell_clipart2

0x9d93,	// (0x0006948c) grid_imed_clipart_pane

0x0df8,	// (0x000604f1) scroll_pane_cp031

0x9d9d,	// (0x00069496) cell_imed_clipart_pane_ParamLimits

0x9d9d,	// (0x00069496) cell_imed_clipart_pane

0x9dc0,	// (0x000694b9) cell_imed_clipart_pane_g1

0x02fb,	// (0x0005f9f4) grid_highlight_pane_cp014

0x9af2,	// (0x000691eb) main_clock2_pane_g1_ParamLimits

0x9af2,	// (0x000691eb) main_clock2_pane_g1

0x9bdd,	// (0x000692d6) aid_call2_pane_cp10

0x9bef,	// (0x000692e8) aid_call_pane_cp10

0x7d40,	// (0x00067439) popup_clock_analogue_window_cp10_g1

0x7d40,	// (0x00067439) popup_clock_analogue_window_cp10_g2

0x9c01,	// (0x000692fa) popup_clock_analogue_window_cp10_g3

0x9c01,	// (0x000692fa) popup_clock_analogue_window_cp10_g4

0x7d40,	// (0x00067439) popup_clock_analogue_window_cp10_g5

0x0004,

0xf774,	// (0x0006ee6d) popup_clock_analogue_window_cp10_g

0x9c17,	// (0x00069310) popup_clock_analogue_window_cp10_t1

0x9c48,	// (0x00069341) clock_digital_number_pane_cp10_ParamLimits

0x9c48,	// (0x00069341) clock_digital_number_pane_cp10

0x9c62,	// (0x0006935b) clock_digital_number_pane_cp11_ParamLimits

0x9c62,	// (0x0006935b) clock_digital_number_pane_cp11

0x9c7c,	// (0x00069375) clock_digital_number_pane_cp12_ParamLimits

0x9c7c,	// (0x00069375) clock_digital_number_pane_cp12

0x9c96,	// (0x0006938f) clock_digital_number_pane_cp13_ParamLimits

0x9c96,	// (0x0006938f) clock_digital_number_pane_cp13

0x9cb0,	// (0x000693a9) clock_digital_separator_pane_cp10_ParamLimits

0x9cb0,	// (0x000693a9) clock_digital_separator_pane_cp10

0x9cca,	// (0x000693c3) popup_clock_digital_window_cp02_t1_ParamLimits

0x9cca,	// (0x000693c3) popup_clock_digital_window_cp02_t1

0x52b0,	// (0x000649a9) clock_digital_number_pane_cp10_g1

0x52b0,	// (0x000649a9) clock_digital_number_pane_cp10_g2

0x0001,

0xf78f,	// (0x0006ee88) clock_digital_number_pane_cp10_g

0x52b0,	// (0x000649a9) clock_digital_separator_pane_cp10_g1

0x52b0,	// (0x000649a9) clock_digital_separator_pane_g2_cp10

0x7f62,	// (0x0006765b) navi_pane_vded_g4

0x7f6b,	// (0x00067664) navi_pane_vded_g5

0x7f74,	// (0x0006766d) navi_pane_vded_t1

0x02fb,	// (0x0005f9f4) main_vded_pane

0x9dc9,	// (0x000694c2) main_vded_pane_g1

0x9dd5,	// (0x000694ce) main_vded_pane_g2

0x9ddf,	// (0x000694d8) main_vded_pane_g3

0x0002,

0xf794,	// (0x0006ee8d) main_vded_pane_g

0x9de9,	// (0x000694e2) main_vded_pane_t1

0x9df7,	// (0x000694f0) main_vded_pane_t2

0x0001,

0xf79b,	// (0x0006ee94) main_vded_pane_t

0x9e05,	// (0x000694fe) vded_slider_pane

0x9e0f,	// (0x00069508) vded_video_pane

0x0e00,	// (0x000604f9) vded_video_pane_g1

0x9e19,	// (0x00069512) vded_video_pane_g2

0x5f63,	// (0x0006565c) vded_video_pane_g3

0x0002,

0xf7a0,	// (0x0006ee99) vded_video_pane_g

0x0e0a,	// (0x00060503) vded_slider_pane_g1

0xeab7,	// (0x0006e1b0) vded_slider_pane_g2

0x0e13,	// (0x0006050c) vded_slider_pane_g3

0x0e1c,	// (0x00060515) vded_slider_pane_g4

0x0e25,	// (0x0006051e) vded_slider_pane_g5

0x0004,

0xf7a7,	// (0x0006eea0) vded_slider_pane_g

0x99cc,	// (0x000690c5) mup3_rocker_pane_ParamLimits

0x99cc,	// (0x000690c5) mup3_rocker_pane

0x9e22,	// (0x0006951b) mup3_control_keys_pane_g1

0x9e2a,	// (0x00069523) mup3_control_keys_pane_g2

0x9e32,	// (0x0006952b) mup3_control_keys_pane_g3

0x9e3a,	// (0x00069533) mup3_control_keys_pane_g4

0x0003,

0xf7b2,	// (0x0006eeab) mup3_control_keys_pane_g

0x50b8,	// (0x000647b1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x50b8,	// (0x000647b1) popup_toolbar2_fixed_window_cp01

0x99e6,	// (0x000690df) popup_toolbar2_fixed_window_cp02_ParamLimits

0x99e6,	// (0x000690df) popup_toolbar2_fixed_window_cp02

0xdd28,	// (0x0006d421) popup_call2_audio_second_window_t4_ParamLimits

0xdd28,	// (0x0006d421) popup_call2_audio_second_window_t4

0xe256,	// (0x0006d94f) popup_call2_audio_first_window_t6_ParamLimits

0xe256,	// (0x0006d94f) popup_call2_audio_first_window_t6

0xe494,	// (0x0006db8d) popup_call2_audio_out_window_t6_ParamLimits

0xe494,	// (0x0006db8d) popup_call2_audio_out_window_t6

0x02fb,	// (0x0005f9f4) main_vitu_pane

0x08ed,	// (0x0005ffe6) aid_size_cell_itu_ParamLimits

0x08ed,	// (0x0005ffe6) aid_size_cell_itu

0x08ed,	// (0x0005ffe6) bg_popup_window_pane_cp08_ParamLimits

0x08ed,	// (0x0005ffe6) bg_popup_window_pane_cp08

0x08ed,	// (0x0005ffe6) field_vitu_entry_pane_ParamLimits

0x08ed,	// (0x0005ffe6) field_vitu_entry_pane

0x08ed,	// (0x0005ffe6) grid_vitu_function_pane_ParamLimits

0x08ed,	// (0x0005ffe6) grid_vitu_function_pane

0x08ed,	// (0x0005ffe6) grid_vitu_itu_pane_ParamLimits

0x08ed,	// (0x0005ffe6) grid_vitu_itu_pane

0x08ed,	// (0x0005ffe6) cell_vitu_itu_pane_ParamLimits

0x08ed,	// (0x0005ffe6) cell_vitu_itu_pane

0x08ed,	// (0x0005ffe6) cell_vitu_function_pane_ParamLimits

0x08ed,	// (0x0005ffe6) cell_vitu_function_pane

0x52da,	// (0x000649d3) bg_popup_sub_pane_cp08_ParamLimits

0x52da,	// (0x000649d3) bg_popup_sub_pane_cp08

0x5fb8,	// (0x000656b1) field_vitu_entry_pane_t1_ParamLimits

0x5fb8,	// (0x000656b1) field_vitu_entry_pane_t1

0x0e2e,	// (0x00060527) field_vitu_entry_pane_t2_ParamLimits

0x0e2e,	// (0x00060527) field_vitu_entry_pane_t2

0x0001,

0xf7bb,	// (0x0006eeb4) field_vitu_entry_pane_t_ParamLimits

0xf7bb,	// (0x0006eeb4) field_vitu_entry_pane_t

0x8086,	// (0x0006777f) bg_button_pane_cp05_ParamLimits

0x8086,	// (0x0006777f) bg_button_pane_cp05

0x0e4b,	// (0x00060544) cell_vitu_itu_pane_g1

0xe9ee,	// (0x0006e0e7) cell_vitu_itu_pane_t1_ParamLimits

0xe9ee,	// (0x0006e0e7) cell_vitu_itu_pane_t1

0xe9ee,	// (0x0006e0e7) cell_vitu_itu_pane_t2_ParamLimits

0xe9ee,	// (0x0006e0e7) cell_vitu_itu_pane_t2

0x0002,

0xf7c0,	// (0x0006eeb9) cell_vitu_itu_pane_t_ParamLimits

0xf7c0,	// (0x0006eeb9) cell_vitu_itu_pane_t

0x02fb,	// (0x0005f9f4) bg_button_pane_cp07

0x5f63,	// (0x0006565c) cell_vitu_function_pane_g1

0x53e9,	// (0x00064ae2) main_calc_pane_g1

0x4e76,	// (0x0006456f) aid_visual_content_pane

0x02fb,	// (0x0005f9f4) main_vradio_pane

0x5341,	// (0x00064a3a) main_vradio_pane_g1_ParamLimits

0x5341,	// (0x00064a3a) main_vradio_pane_g1

0x5341,	// (0x00064a3a) main_vradio_pane_g2_ParamLimits

0x5341,	// (0x00064a3a) main_vradio_pane_g2

0x0001,

0xf7c7,	// (0x0006eec0) main_vradio_pane_g_ParamLimits

0xf7c7,	// (0x0006eec0) main_vradio_pane_g

0x5e1a,	// (0x00065513) main_vradio_pane_t1_ParamLimits

0x5e1a,	// (0x00065513) main_vradio_pane_t1

0x5e1a,	// (0x00065513) main_vradio_pane_t2_ParamLimits

0x5e1a,	// (0x00065513) main_vradio_pane_t2

0x5e1a,	// (0x00065513) main_vradio_pane_t3_ParamLimits

0x5e1a,	// (0x00065513) main_vradio_pane_t3

0x0002,

0xf7cc,	// (0x0006eec5) main_vradio_pane_t_ParamLimits

0xf7cc,	// (0x0006eec5) main_vradio_pane_t

0x08ed,	// (0x0005ffe6) vradio_rocker_control_pane_ParamLimits

0x08ed,	// (0x0005ffe6) vradio_rocker_control_pane

0x08ed,	// (0x0005ffe6) vradio_station_info_pane_ParamLimits

0x08ed,	// (0x0005ffe6) vradio_station_info_pane

0x52da,	// (0x000649d3) vradio_frequency_info_pane_ParamLimits

0x52da,	// (0x000649d3) vradio_frequency_info_pane

0x5f63,	// (0x0006565c) vradio_station_info_pane_g1

0xe9ee,	// (0x0006e0e7) vradio_station_info_pane_t1_ParamLimits

0xe9ee,	// (0x0006e0e7) vradio_station_info_pane_t1

0x5e1a,	// (0x00065513) vradio_station_info_pane_t2_ParamLimits

0x5e1a,	// (0x00065513) vradio_station_info_pane_t2

0x0001,

0xf7d3,	// (0x0006eecc) vradio_station_info_pane_t_ParamLimits

0xf7d3,	// (0x0006eecc) vradio_station_info_pane_t

0x02fb,	// (0x0005f9f4) vradio_tuning_pane

0x9e4a,	// (0x00069543) vradio_rocker_control_pane_g1

0x0e67,	// (0x00060560) vradio_rocker_control_pane_g2

0x9e52,	// (0x0006954b) vradio_rocker_control_pane_g3

0x9e5a,	// (0x00069553) vradio_rocker_control_pane_g4

0x9e62,	// (0x0006955b) vradio_rocker_control_pane_g5

0x0004,

0xf7d8,	// (0x0006eed1) vradio_rocker_control_pane_g

0x5f63,	// (0x0006565c) vradio_frequency_info_pane_g1

0x5fb8,	// (0x000656b1) vradio_frequency_info_pane_t1_ParamLimits

0x5fb8,	// (0x000656b1) vradio_frequency_info_pane_t1

0x9e6a,	// (0x00069563) vradio_tuning_pane_g1

0x9e77,	// (0x00069570) vradio_tuning_pane_t1

0x4ebf,	// (0x000645b8) area_side_right_pane_ParamLimits

0x4ebf,	// (0x000645b8) area_side_right_pane

0xe8be,	// (0x0006dfb7) status_small_pane_g1

0xe8c6,	// (0x0006dfbf) status_small_pane_g2

0xe8cf,	// (0x0006dfc8) status_small_pane_g3

0xe8d8,	// (0x0006dfd1) status_small_pane_g4

0x0003,

0xf5a4,	// (0x0006ec9d) status_small_pane_g

0xe8e1,	// (0x0006dfda) status_small_pane_t1

0x02fb,	// (0x0005f9f4) main_video3_pane

0x0e6f,	// (0x00060568) cams_zoom_vslider_pane

0x0e77,	// (0x00060570) image3_wide_pane_ParamLimits

0x0e77,	// (0x00060570) image3_wide_pane

0x0e91,	// (0x0006058a) image3_wide_small_pane

0x0e9d,	// (0x00060596) main_video3_pane_g1_ParamLimits

0x0e9d,	// (0x00060596) main_video3_pane_g1

0x0eb9,	// (0x000605b2) main_video3_pane_g2_ParamLimits

0x0eb9,	// (0x000605b2) main_video3_pane_g2

0x0001,

0xf7e3,	// (0x0006eedc) main_video3_pane_g_ParamLimits

0xf7e3,	// (0x0006eedc) main_video3_pane_g

0x0ed5,	// (0x000605ce) main_video3_pane_t1_ParamLimits

0x0ed5,	// (0x000605ce) main_video3_pane_t1

0x0f00,	// (0x000605f9) main_video3_pane_t2_ParamLimits

0x0f00,	// (0x000605f9) main_video3_pane_t2

0x0f2b,	// (0x00060624) main_video3_pane_t3_ParamLimits

0x0f2b,	// (0x00060624) main_video3_pane_t3

0x0002,

0xf7e8,	// (0x0006eee1) main_video3_pane_t_ParamLimits

0xf7e8,	// (0x0006eee1) main_video3_pane_t

0x0f58,	// (0x00060651) cams_zoom_vslider_pane_g1

0x0f61,	// (0x0006065a) cams_zoom_vslider_pane_g2

0x0001,

0xf7ef,	// (0x0006eee8) cams_zoom_vslider_pane_g

0x0f69,	// (0x00060662) small_slider_vertical_pane

0x5f63,	// (0x0006565c) small_slider_vertical_pane_g1

0x5f63,	// (0x0006565c) small_slider_vertical_pane_g2

0x0f71,	// (0x0006066a) small_slider_vertical_pane_g3

0x0002,

0xf7f4,	// (0x0006eeed) small_slider_vertical_pane_g

0x02fb,	// (0x0005f9f4) main_hwr_training_pane

0x0f7a,	// (0x00060673) hwr_training_instruct_pane_ParamLimits

0x0f7a,	// (0x00060673) hwr_training_instruct_pane

0x9e86,	// (0x0006957f) hwr_training_navi_pane_ParamLimits

0x9e86,	// (0x0006957f) hwr_training_navi_pane

0x9ea0,	// (0x00069599) hwr_training_write_pane_ParamLimits

0x9ea0,	// (0x00069599) hwr_training_write_pane

0x02fb,	// (0x0005f9f4) bg_frame_shadow_pane

0x0fb1,	// (0x000606aa) hwr_training_write_pane_g1

0x0fb9,	// (0x000606b2) hwr_training_write_pane_g2

0x0fc1,	// (0x000606ba) hwr_training_write_pane_g3

0x0fc9,	// (0x000606c2) hwr_training_write_pane_g4

0x0fd1,	// (0x000606ca) hwr_training_write_pane_g5

0x0fd9,	// (0x000606d2) hwr_training_write_pane_g6

0x0fe1,	// (0x000606da) hwr_training_write_pane_g7

0x0006,

0xf7fb,	// (0x0006eef4) hwr_training_write_pane_g

0x9ed8,	// (0x000695d1) hwr_training_navi_pane_g1_ParamLimits

0x9ed8,	// (0x000695d1) hwr_training_navi_pane_g1

0x9eea,	// (0x000695e3) hwr_training_navi_pane_g2_ParamLimits

0x9eea,	// (0x000695e3) hwr_training_navi_pane_g2

0x9efc,	// (0x000695f5) hwr_training_navi_pane_g3_ParamLimits

0x9efc,	// (0x000695f5) hwr_training_navi_pane_g3

0x9f0c,	// (0x00069605) hwr_training_navi_pane_g4_ParamLimits

0x9f0c,	// (0x00069605) hwr_training_navi_pane_g4

0x0004,

0xf80a,	// (0x0006ef03) hwr_training_navi_pane_g_ParamLimits

0xf80a,	// (0x0006ef03) hwr_training_navi_pane_g

0x9f26,	// (0x0006961f) hwr_training_navi_pane_t1

0x9f34,	// (0x0006962d) list_single_hwr_training_instruct_pane_ParamLimits

0x9f34,	// (0x0006962d) list_single_hwr_training_instruct_pane

0x1038,	// (0x00060731) list_single_hwr_training_instruct_pane_t1

0xec8d,	// (0x0006e386) bg_frame_shadow_pane_g1

0x1047,	// (0x00060740) bg_frame_shadow_pane_g2

0x104f,	// (0x00060748) bg_frame_shadow_pane_g3

0x1057,	// (0x00060750) bg_frame_shadow_pane_g4

0x105f,	// (0x00060758) bg_frame_shadow_pane_g5

0x1067,	// (0x00060760) bg_frame_shadow_pane_g6

0x106f,	// (0x00060768) bg_frame_shadow_pane_g7

0x5773,	// (0x00064e6c) bg_frame_shadow_pane_g8

0x0007,

0xf815,	// (0x0006ef0e) bg_frame_shadow_pane_g

0x02fb,	// (0x0005f9f4) main_video_tele_dialer_pane

0x9f5d,	// (0x00069656) aid_size_cell_video_keypad_ParamLimits

0x9f5d,	// (0x00069656) aid_size_cell_video_keypad

0x9f6d,	// (0x00069666) grid_video_dialer_keypad_pane_ParamLimits

0x9f6d,	// (0x00069666) grid_video_dialer_keypad_pane

0x9fa1,	// (0x0006969a) video_down_pane_cp_ParamLimits

0x9fa1,	// (0x0006969a) video_down_pane_cp

0x9fcb,	// (0x000696c4) cell_video_dialer_keypad_pane_ParamLimits

0x9fcb,	// (0x000696c4) cell_video_dialer_keypad_pane

0x1077,	// (0x00060770) bg_button_pane_cp08_ParamLimits

0x1077,	// (0x00060770) bg_button_pane_cp08

0x9fe0,	// (0x000696d9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9fe0,	// (0x000696d9) cell_video_dialer_keypad_pane_g1

0x99c0,	// (0x000690b9) mup3_rocker2_pane_ParamLimits

0x99c0,	// (0x000690b9) mup3_rocker2_pane

0x5f63,	// (0x0006565c) mup3_rocker2_pane_g1

0x8e55,	// (0x0006854e) main_dialer2_pane

0x02fb,	// (0x0005f9f4) main_mp4_pane

0xa038,	// (0x00069731) main_mp4_pane_g1_ParamLimits

0xa038,	// (0x00069731) main_mp4_pane_g1

0xa046,	// (0x0006973f) main_mp4_pane_g2_ParamLimits

0xa046,	// (0x0006973f) main_mp4_pane_g2

0xa054,	// (0x0006974d) main_mp4_pane_g3_ParamLimits

0xa054,	// (0x0006974d) main_mp4_pane_g3

0xa099,	// (0x00069792) main_mp4_pane_g4_ParamLimits

0xa099,	// (0x00069792) main_mp4_pane_g4

0xa0c7,	// (0x000697c0) main_mp4_pane_g5_ParamLimits

0xa0c7,	// (0x000697c0) main_mp4_pane_g5

0x0007,

0xf835,	// (0x0006ef2e) main_mp4_pane_g_ParamLimits

0xf835,	// (0x0006ef2e) main_mp4_pane_g

0xa13b,	// (0x00069834) main_mp4_pane_t1_ParamLimits

0xa13b,	// (0x00069834) main_mp4_pane_t1

0xa197,	// (0x00069890) main_mp4_pane_t2_ParamLimits

0xa197,	// (0x00069890) main_mp4_pane_t2

0x11ff,	// (0x000608f8) main_mp4_pane_t3_ParamLimits

0x11ff,	// (0x000608f8) main_mp4_pane_t3

0xa1e9,	// (0x000698e2) main_mp4_pane_t4_ParamLimits

0xa1e9,	// (0x000698e2) main_mp4_pane_t4

0x0003,

0xf846,	// (0x0006ef3f) main_mp4_pane_t_ParamLimits

0xf846,	// (0x0006ef3f) main_mp4_pane_t

0xa22d,	// (0x00069926) mp4_progress_pane_ParamLimits

0xa22d,	// (0x00069926) mp4_progress_pane

0xa277,	// (0x00069970) mp4_rocker_pane_ParamLimits

0xa277,	// (0x00069970) mp4_rocker_pane

0x12db,	// (0x000609d4) mp4_progress_pane_t1

0x12f4,	// (0x000609ed) mp4_progress_pane_t2

0x0001,

0xf84f,	// (0x0006ef48) mp4_progress_pane_t

0x130d,	// (0x00060a06) mup_progress_pane_cp04

0x5f63,	// (0x0006565c) mp4_rocker_pane_g1

0xa297,	// (0x00069990) aid_cell_size_keypad2_ParamLimits

0xa297,	// (0x00069990) aid_cell_size_keypad2

0xa2a7,	// (0x000699a0) dialer2_ne_pane_ParamLimits

0xa2a7,	// (0x000699a0) dialer2_ne_pane

0xa2b5,	// (0x000699ae) grid_dialer2_keypad_pane_ParamLimits

0xa2b5,	// (0x000699ae) grid_dialer2_keypad_pane

0xf029,	// (0x0006e722) bg_popup_call_pane_cp07_ParamLimits

0xf029,	// (0x0006e722) bg_popup_call_pane_cp07

0xa2c5,	// (0x000699be) dialer2_ne_pane_t1_ParamLimits

0xa2c5,	// (0x000699be) dialer2_ne_pane_t1

0xa2ea,	// (0x000699e3) cell_dialer2_keypad_pane_ParamLimits

0xa2ea,	// (0x000699e3) cell_dialer2_keypad_pane

0x1332,	// (0x00060a2b) bg_button_pane_pane_cp04_ParamLimits

0x1332,	// (0x00060a2b) bg_button_pane_pane_cp04

0xa2ff,	// (0x000699f8) cell_dialer2_keypad_pane_g1_ParamLimits

0xa2ff,	// (0x000699f8) cell_dialer2_keypad_pane_g1

0x6027,	// (0x00065720) aid_placing_vt_set_content_ParamLimits

0x6027,	// (0x00065720) aid_placing_vt_set_content

0x6053,	// (0x0006574c) aid_placing_vt_set_title_ParamLimits

0x6053,	// (0x0006574c) aid_placing_vt_set_title

0x02fb,	// (0x0005f9f4) main_image3_pane

0xa399,	// (0x00069a92) area_side_right_pane_cp01_ParamLimits

0xa399,	// (0x00069a92) area_side_right_pane_cp01

0x534f,	// (0x00064a48) main_image3_pane_g1_ParamLimits

0x534f,	// (0x00064a48) main_image3_pane_g1

0xa3c6,	// (0x00069abf) main_image3_pane_g2_ParamLimits

0xa3c6,	// (0x00069abf) main_image3_pane_g2

0xa3df,	// (0x00069ad8) main_image3_pane_g3_ParamLimits

0xa3df,	// (0x00069ad8) main_image3_pane_g3

0xa3f8,	// (0x00069af1) main_image3_pane_g4_ParamLimits

0xa3f8,	// (0x00069af1) main_image3_pane_g4

0x0003,

0xf85e,	// (0x0006ef57) main_image3_pane_g_ParamLimits

0xf85e,	// (0x0006ef57) main_image3_pane_g

0xa411,	// (0x00069b0a) main_image3_pane_t1_ParamLimits

0xa411,	// (0x00069b0a) main_image3_pane_t1

0xa436,	// (0x00069b2f) main_image3_pane_t2_ParamLimits

0xa436,	// (0x00069b2f) main_image3_pane_t2

0xa455,	// (0x00069b4e) main_image3_pane_t3_ParamLimits

0xa455,	// (0x00069b4e) main_image3_pane_t3

0x0003,

0xf867,	// (0x0006ef60) main_image3_pane_t_ParamLimits

0xf867,	// (0x0006ef60) main_image3_pane_t

0x08ed,	// (0x0005ffe6) grid_sctrl_middle_pane_cp01_ParamLimits

0x08ed,	// (0x0005ffe6) grid_sctrl_middle_pane_cp01

0xa4b6,	// (0x00069baf) cell_sctrl_middle_pane_cp01_ParamLimits

0xa4b6,	// (0x00069baf) cell_sctrl_middle_pane_cp01

0xa4c7,	// (0x00069bc0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa4c7,	// (0x00069bc0) cell_sctrl_middle_pane_cp01_g1

0x02fb,	// (0x0005f9f4) main_call4_pane

0xa4d4,	// (0x00069bcd) aid_size_button_call4_ParamLimits

0xa4d4,	// (0x00069bcd) aid_size_button_call4

0xa50a,	// (0x00069c03) call4_windows_pane_ParamLimits

0xa50a,	// (0x00069c03) call4_windows_pane

0xa51f,	// (0x00069c18) grid_call4_button_pane_ParamLimits

0xa51f,	// (0x00069c18) grid_call4_button_pane

0xa54d,	// (0x00069c46) call4_windows_conf_pane

0xa562,	// (0x00069c5b) popup_call4_audio_first_window_ParamLimits

0xa562,	// (0x00069c5b) popup_call4_audio_first_window

0xa5b2,	// (0x00069cab) popup_call4_audio_second_window_ParamLimits

0xa5b2,	// (0x00069cab) popup_call4_audio_second_window

0xa5cb,	// (0x00069cc4) popup_call4_audio_wait_window_ParamLimits

0xa5cb,	// (0x00069cc4) popup_call4_audio_wait_window

0xa5d9,	// (0x00069cd2) cell_call4_button_pane_ParamLimits

0xa5d9,	// (0x00069cd2) cell_call4_button_pane

0xa5fc,	// (0x00069cf5) bg_button_pane_cp09_ParamLimits

0xa5fc,	// (0x00069cf5) bg_button_pane_cp09

0xa608,	// (0x00069d01) cell_call4_button_pane_g1_ParamLimits

0xa608,	// (0x00069d01) cell_call4_button_pane_g1

0xa615,	// (0x00069d0e) cell_call4_button_pane_t1_ParamLimits

0xa615,	// (0x00069d0e) cell_call4_button_pane_t1

0x13aa,	// (0x00060aa3) popup_call4_audio_conf_window_ParamLimits

0x13aa,	// (0x00060aa3) popup_call4_audio_conf_window

0x99f3,	// (0x000690ec) mup3_progress_pane_t1_ParamLimits

0x9a12,	// (0x0006910b) mup3_progress_pane_t2_ParamLimits

0xf000,	// (0x0006e6f9) mup3_progress_pane_t3_ParamLimits

0xf73c,	// (0x0006ee35) mup3_progress_pane_t_ParamLimits

0x0b5e,	// (0x00060257) mup_progress_pane_cp03_ParamLimits

0x9e42,	// (0x0006953b) mup3_control_keys_pane_g4_copy1

0xa25b,	// (0x00069954) mp4_rocker2_pane_ParamLimits

0xa25b,	// (0x00069954) mp4_rocker2_pane

0x13c6,	// (0x00060abf) mp4_rocker2_pane_g1

0x13be,	// (0x00060ab7) mp4_rocker2_pane_g2

0xa659,	// (0x00069d52) mp4_rocker2_pane_g3

0xa661,	// (0x00069d5a) mp4_rocker2_pane_g4

0xa669,	// (0x00069d62) mp4_rocker2_pane_g5

0x0004,

0xf870,	// (0x0006ef69) mp4_rocker2_pane_g

0x02fb,	// (0x0005f9f4) main_camera4_pane

0x02fb,	// (0x0005f9f4) main_video4_pane

0x9f7d,	// (0x00069676) main_video_tele_dialer_pane_t1_ParamLimits

0x9f7d,	// (0x00069676) main_video_tele_dialer_pane_t1

0x9f8f,	// (0x00069688) main_video_tele_dialer_pane_t2_ParamLimits

0x9f8f,	// (0x00069688) main_video_tele_dialer_pane_t2

0x0001,

0xf826,	// (0x0006ef1f) main_video_tele_dialer_pane_t_ParamLimits

0xf826,	// (0x0006ef1f) main_video_tele_dialer_pane_t

0xa689,	// (0x00069d82) cam4_autofocus_pane_ParamLimits

0xa689,	// (0x00069d82) cam4_autofocus_pane

0xa6a3,	// (0x00069d9c) cam4_image_uncrop_pane_ParamLimits

0xa6a3,	// (0x00069d9c) cam4_image_uncrop_pane

0xa6ba,	// (0x00069db3) cam4_indicators_pane_ParamLimits

0xa6ba,	// (0x00069db3) cam4_indicators_pane

0xa6d6,	// (0x00069dcf) main_camera4_pane_g1_ParamLimits

0xa6d6,	// (0x00069dcf) main_camera4_pane_g1

0xa6e2,	// (0x00069ddb) main_camera4_pane_g2_ParamLimits

0xa6e2,	// (0x00069ddb) main_camera4_pane_g2

0xa6e2,	// (0x00069ddb) main_camera4_pane_g3_ParamLimits

0xa6e2,	// (0x00069ddb) main_camera4_pane_g3

0xa6ee,	// (0x00069de7) main_camera4_pane_g4_ParamLimits

0xa6ee,	// (0x00069de7) main_camera4_pane_g4

0xa6fa,	// (0x00069df3) main_camera4_pane_g5_ParamLimits

0xa6fa,	// (0x00069df3) main_camera4_pane_g5

0x0005,

0xf87b,	// (0x0006ef74) main_camera4_pane_g_ParamLimits

0xf87b,	// (0x0006ef74) main_camera4_pane_g

0xa714,	// (0x00069e0d) main_camera4_pane_t1_ParamLimits

0xa714,	// (0x00069e0d) main_camera4_pane_t1

0x5333,	// (0x00064a2c) bg_tb_trans_pane_cp06

0xa764,	// (0x00069e5d) cam4_indicators_pane_g1

0xa775,	// (0x00069e6e) cam4_indicators_pane_g2

0x0002,

0xf896,	// (0x0006ef8f) cam4_indicators_pane_g

0xa78d,	// (0x00069e86) cam4_indicators_pane_t1

0xa7b7,	// (0x00069eb0) main_video4_pane_g1_ParamLimits

0xa7b7,	// (0x00069eb0) main_video4_pane_g1

0xa7c3,	// (0x00069ebc) main_video4_pane_g2_ParamLimits

0xa7c3,	// (0x00069ebc) main_video4_pane_g2

0xa7cf,	// (0x00069ec8) main_video4_pane_g3_ParamLimits

0xa7cf,	// (0x00069ec8) main_video4_pane_g3

0xa7db,	// (0x00069ed4) main_video4_pane_g4_ParamLimits

0xa7db,	// (0x00069ed4) main_video4_pane_g4

0x0004,

0xf89d,	// (0x0006ef96) main_video4_pane_g_ParamLimits

0xf89d,	// (0x0006ef96) main_video4_pane_g

0xa7fb,	// (0x00069ef4) vid4_indicators_pane_ParamLimits

0xa7fb,	// (0x00069ef4) vid4_indicators_pane

0xa81a,	// (0x00069f13) video4_image_uncrop_cif_pane_ParamLimits

0xa81a,	// (0x00069f13) video4_image_uncrop_cif_pane

0xa829,	// (0x00069f22) video4_image_uncrop_nhd_pane_ParamLimits

0xa829,	// (0x00069f22) video4_image_uncrop_nhd_pane

0xa6a3,	// (0x00069d9c) video4_image_uncrop_vga_pane_ParamLimits

0xa6a3,	// (0x00069d9c) video4_image_uncrop_vga_pane

0x52da,	// (0x000649d3) bg_tb_trans_pane_cp07

0xa83e,	// (0x00069f37) vid4_indicators_pane_g1

0xa852,	// (0x00069f4b) vid4_indicators_pane_g2

0xa866,	// (0x00069f5f) vid4_indicators_pane_g3

0x0004,

0xf8a8,	// (0x0006efa1) vid4_indicators_pane_g

0xa893,	// (0x00069f8c) vid4_indicators_pane_t1

0xa8aa,	// (0x00069fa3) cam4_autofocus_pane_g1

0xa8b2,	// (0x00069fab) cam4_autofocus_pane_g2

0xa8ba,	// (0x00069fb3) cam4_autofocus_pane_g3

0x0002,

0xf8b3,	// (0x0006efac) cam4_autofocus_pane_g

0xa8c2,	// (0x00069fbb) cam4_autofocus_pane_g3_copy1

0x9faf,	// (0x000696a8) video_down_pane_cp_t1

0x9fbd,	// (0x000696b6) video_down_pane_cp_t2

0x0001,

0xf82b,	// (0x0006ef24) video_down_pane_cp_t

0x08ed,	// (0x0005ffe6) popup_vitu2_window_ParamLimits

0x08ed,	// (0x0005ffe6) popup_vitu2_window

0xa8ca,	// (0x00069fc3) aid_size_cell2_itu2_ParamLimits

0xa8ca,	// (0x00069fc3) aid_size_cell2_itu2

0xa8e6,	// (0x00069fdf) aid_size_cell_itu2_ParamLimits

0xa8e6,	// (0x00069fdf) aid_size_cell_itu2

0xf029,	// (0x0006e722) bg_popup_window_pane_cp09_ParamLimits

0xf029,	// (0x0006e722) bg_popup_window_pane_cp09

0xa920,	// (0x0006a019) field_vitu2_entry_pane_ParamLimits

0xa920,	// (0x0006a019) field_vitu2_entry_pane

0xa93e,	// (0x0006a037) grid_vitu2_function_pane_ParamLimits

0xa93e,	// (0x0006a037) grid_vitu2_function_pane

0xa97e,	// (0x0006a077) grid_vitu2_itu_pane_ParamLimits

0xa97e,	// (0x0006a077) grid_vitu2_itu_pane

0xa9e2,	// (0x0006a0db) cell_vitu2_itu_pane_ParamLimits

0xa9e2,	// (0x0006a0db) cell_vitu2_itu_pane

0xa9fb,	// (0x0006a0f4) cell_vitu2_function_pane_ParamLimits

0xa9fb,	// (0x0006a0f4) cell_vitu2_function_pane

0x1410,	// (0x00060b09) bg_popup_call_pane_cp08_ParamLimits

0x1410,	// (0x00060b09) bg_popup_call_pane_cp08

0x1427,	// (0x00060b20) field_vitu2_entry_pane_g1

0x1433,	// (0x00060b2c) field_vitu2_entry_pane_g2

0x0002,

0xf8ba,	// (0x0006efb3) field_vitu2_entry_pane_g

0x42ad,	// (0x000639a6) field_vitu2_entry_pane_t1_ParamLimits

0x42ad,	// (0x000639a6) field_vitu2_entry_pane_t1

0x42e0,	// (0x000639d9) field_vitu2_entry_pane_t2_ParamLimits

0x42e0,	// (0x000639d9) field_vitu2_entry_pane_t2

0x0001,

0xf8c1,	// (0x0006efba) field_vitu2_entry_pane_t_ParamLimits

0xf8c1,	// (0x0006efba) field_vitu2_entry_pane_t

0x918b,	// (0x00068884) bg_button_pane_cp010_ParamLimits

0x918b,	// (0x00068884) bg_button_pane_cp010

0xaa3c,	// (0x0006a135) cell_vitu2_itu_pane_g1

0xaa62,	// (0x0006a15b) cell_vitu2_itu_pane_t1_ParamLimits

0xaa62,	// (0x0006a15b) cell_vitu2_itu_pane_t1

0x42fd,	// (0x000639f6) cell_vitu2_itu_pane_t2_ParamLimits

0x42fd,	// (0x000639f6) cell_vitu2_itu_pane_t2

0x0002,

0xf8cb,	// (0x0006efc4) cell_vitu2_itu_pane_t_ParamLimits

0xf8cb,	// (0x0006efc4) cell_vitu2_itu_pane_t

0x52da,	// (0x000649d3) bg_button_pane_cp011

0xaaae,	// (0x0006a1a7) cell_vitu2_function_pane_g1

0x02fb,	// (0x0005f9f4) main_myfav_hc_pane

0xa497,	// (0x00069b90) popup_image3_note_pane_ParamLimits

0xa497,	// (0x00069b90) popup_image3_note_pane

0xa4a5,	// (0x00069b9e) popup_image3_tool_bar_pane_ParamLimits

0xa4a5,	// (0x00069b9e) popup_image3_tool_bar_pane

0x4373,	// (0x00063a6c) cell_vitu2_itu_pane_t3_ParamLimits

0x4373,	// (0x00063a6c) cell_vitu2_itu_pane_t3

0x02fb,	// (0x0005f9f4) bg_popup_trans_pane

0x1464,	// (0x00060b5d) grid_image3_tool_bar_pane

0x146e,	// (0x00060b67) bg_popup_trans_pane_g1

0x66f1,	// (0x00065dea) bg_popup_trans_pane_g2

0x1476,	// (0x00060b6f) bg_popup_trans_pane_g3

0x147e,	// (0x00060b77) bg_popup_trans_pane_g4

0x1486,	// (0x00060b7f) bg_popup_trans_pane_g5

0x148e,	// (0x00060b87) bg_popup_trans_pane_g6

0x1496,	// (0x00060b8f) bg_popup_trans_pane_g7

0x149e,	// (0x00060b97) bg_popup_trans_pane_g8

0x66d1,	// (0x00065dca) bg_popup_trans_pane_g9

0x0008,

0xf8d2,	// (0x0006efcb) bg_popup_trans_pane_g

0x14a6,	// (0x00060b9f) cell_image3_tool_bar_pane_ParamLimits

0x14a6,	// (0x00060b9f) cell_image3_tool_bar_pane

0x5f63,	// (0x0006565c) cell_image3_tool_bar_pane_g1

0x02fb,	// (0x0005f9f4) bg_popup_trans_pane_cp1

0x14ba,	// (0x00060bb3) popup_image3_note_pane_t1

0x14c8,	// (0x00060bc1) popup_image3_note_pane_t2

0x14d6,	// (0x00060bcf) popup_image3_note_pane_t3

0x0002,

0xf8e5,	// (0x0006efde) popup_image3_note_pane_t

0x14e4,	// (0x00060bdd) popup_image3_note_pane_t3_copy1

0xaac2,	// (0x0006a1bb) bg_myfav_hc_instruction_pane_ParamLimits

0xaac2,	// (0x0006a1bb) bg_myfav_hc_instruction_pane

0xaada,	// (0x0006a1d3) cell_myfav_contact_pane_ParamLimits

0xaada,	// (0x0006a1d3) cell_myfav_contact_pane

0xaaf4,	// (0x0006a1ed) cell_myfav_contact_pane_cp1_ParamLimits

0xaaf4,	// (0x0006a1ed) cell_myfav_contact_pane_cp1

0xab0c,	// (0x0006a205) cell_myfav_contact_pane_cp2_ParamLimits

0xab0c,	// (0x0006a205) cell_myfav_contact_pane_cp2

0xab24,	// (0x0006a21d) cell_myfav_contact_pane_cp3_ParamLimits

0xab24,	// (0x0006a21d) cell_myfav_contact_pane_cp3

0xab3b,	// (0x0006a234) cell_myfav_contact_pane_cp4_ParamLimits

0xab3b,	// (0x0006a234) cell_myfav_contact_pane_cp4

0xab51,	// (0x0006a24a) cell_myfav_contact_pane_cp5_ParamLimits

0xab51,	// (0x0006a24a) cell_myfav_contact_pane_cp5

0xab65,	// (0x0006a25e) cell_myfav_contact_pane_cp6_ParamLimits

0xab65,	// (0x0006a25e) cell_myfav_contact_pane_cp6

0xab79,	// (0x0006a272) cell_myfav_contact_pane_cp7_ParamLimits

0xab79,	// (0x0006a272) cell_myfav_contact_pane_cp7

0x14f2,	// (0x00060beb) listscroll_gen_pane_cp05

0xab91,	// (0x0006a28a) main_myfav_hc_pane_g1_ParamLimits

0xab91,	// (0x0006a28a) main_myfav_hc_pane_g1

0xaba7,	// (0x0006a2a0) main_myfav_hc_pane_g2_ParamLimits

0xaba7,	// (0x0006a2a0) main_myfav_hc_pane_g2

0x0002,

0xf8ec,	// (0x0006efe5) main_myfav_hc_pane_g_ParamLimits

0xf8ec,	// (0x0006efe5) main_myfav_hc_pane_g

0xabd7,	// (0x0006a2d0) main_myfav_hc_pane_t1_ParamLimits

0xabd7,	// (0x0006a2d0) main_myfav_hc_pane_t1

0x14fb,	// (0x00060bf4) main_myfav_hc_pane_t2_ParamLimits

0x14fb,	// (0x00060bf4) main_myfav_hc_pane_t2

0x150d,	// (0x00060c06) main_myfav_hc_pane_t3_ParamLimits

0x150d,	// (0x00060c06) main_myfav_hc_pane_t3

0xabee,	// (0x0006a2e7) main_myfav_hc_pane_t4_ParamLimits

0xabee,	// (0x0006a2e7) main_myfav_hc_pane_t4

0x0004,

0xf8f3,	// (0x0006efec) main_myfav_hc_pane_t_ParamLimits

0xf8f3,	// (0x0006efec) main_myfav_hc_pane_t

0x5f63,	// (0x0006565c) bg_myfav_hc_instruction_pane_g1

0x151f,	// (0x00060c18) cell_myfav_contact_pane_g1_ParamLimits

0x151f,	// (0x00060c18) cell_myfav_contact_pane_g1

0x151f,	// (0x00060c18) cell_myfav_contact_pane_g2_ParamLimits

0x151f,	// (0x00060c18) cell_myfav_contact_pane_g2

0x152b,	// (0x00060c24) cell_myfav_contact_pane_g3_ParamLimits

0x152b,	// (0x00060c24) cell_myfav_contact_pane_g3

0x5341,	// (0x00064a3a) cell_myfav_contact_pane_g4_ParamLimits

0x5341,	// (0x00064a3a) cell_myfav_contact_pane_g4

0x1538,	// (0x00060c31) cell_myfav_contact_pane_g5_ParamLimits

0x1538,	// (0x00060c31) cell_myfav_contact_pane_g5

0x0004,

0xf8fe,	// (0x0006eff7) cell_myfav_contact_pane_g_ParamLimits

0xf8fe,	// (0x0006eff7) cell_myfav_contact_pane_g

0xabbf,	// (0x0006a2b8) main_myfav_hc_pane_g3_ParamLimits

0xabbf,	// (0x0006a2b8) main_myfav_hc_pane_g3

0x4ff3,	// (0x000646ec) popup_adpt_find_window

0xac18,	// (0x0006a311) afind_page_pane_ParamLimits

0xac18,	// (0x0006a311) afind_page_pane

0xac25,	// (0x0006a31e) aid_size_cell_afind_ParamLimits

0xac25,	// (0x0006a31e) aid_size_cell_afind

0xac3f,	// (0x0006a338) bg_popup_sub_pane_cp09_ParamLimits

0xac3f,	// (0x0006a338) bg_popup_sub_pane_cp09

0xac4c,	// (0x0006a345) find_pane_cp01_ParamLimits

0xac4c,	// (0x0006a345) find_pane_cp01

0x1544,	// (0x00060c3d) grid_afind_control_pane_ParamLimits

0x1544,	// (0x00060c3d) grid_afind_control_pane

0xac59,	// (0x0006a352) grid_afind_pane_ParamLimits

0xac59,	// (0x0006a352) grid_afind_pane

0xac73,	// (0x0006a36c) cell_afind_pane_ParamLimits

0xac73,	// (0x0006a36c) cell_afind_pane

0x5f63,	// (0x0006565c) afind_page_pane_g1

0xacbb,	// (0x0006a3b4) afind_page_pane_g2

0xacc4,	// (0x0006a3bd) afind_page_pane_g3

0x0002,

0xf909,	// (0x0006f002) afind_page_pane_g

0xaccd,	// (0x0006a3c6) afind_page_pane_t1

0x1558,	// (0x00060c51) cell_afind_grid_control_pane_ParamLimits

0x1558,	// (0x00060c51) cell_afind_grid_control_pane

0x1332,	// (0x00060a2b) bg_button_pane_cp69_ParamLimits

0x1332,	// (0x00060a2b) bg_button_pane_cp69

0xaced,	// (0x0006a3e6) cell_afind_pane_g1_ParamLimits

0xaced,	// (0x0006a3e6) cell_afind_pane_g1

0xacfa,	// (0x0006a3f3) cell_afind_pane_t1_ParamLimits

0xacfa,	// (0x0006a3f3) cell_afind_pane_t1

0x5fa8,	// (0x000656a1) bg_button_pane_cp72

0x1567,	// (0x00060c60) cell_afind_grid_control_pane_g1

0x8986,	// (0x0006807f) aid_image_placing_area_ParamLimits

0x8986,	// (0x0006807f) aid_image_placing_area

0x5333,	// (0x00064a2c) field_vitu_entry_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) field_vitu_entry_pane_g1

0x5333,	// (0x00064a2c) field_vitu_entry_pane_g2_ParamLimits

0x5333,	// (0x00064a2c) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0006e8fa) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0006e8fa) field_vitu_entry_pane_g

0x0e4b,	// (0x00060544) cell_vitu_itu_pane_g1_ParamLimits

0x0e2e,	// (0x00060527) cell_vitu_itu_pane_t3_ParamLimits

0x0e2e,	// (0x00060527) cell_vitu_itu_pane_t3

0x12db,	// (0x000609d4) mp4_progress_pane_t1_ParamLimits

0x12f4,	// (0x000609ed) mp4_progress_pane_t2_ParamLimits

0xf84f,	// (0x0006ef48) mp4_progress_pane_t_ParamLimits

0x130d,	// (0x00060a06) mup_progress_pane_cp04_ParamLimits

0xac02,	// (0x0006a2fb) main_myfav_hc_pane_t5_ParamLimits

0xac02,	// (0x0006a2fb) main_myfav_hc_pane_t5

0x4151,	// (0x0006384a) aid_zoom_text_primary

0x4ff3,	// (0x000646ec) popup_adpt_find_window_ParamLimits

0x52da,	// (0x000649d3) main_cam_set_pane

0xa6c8,	// (0x00069dc1) cam4_zoom_pane_ParamLimits

0xa6c8,	// (0x00069dc1) cam4_zoom_pane

0xad0c,	// (0x0006a405) main_cam_set_pane_g1_ParamLimits

0xad0c,	// (0x0006a405) main_cam_set_pane_g1

0xad1a,	// (0x0006a413) main_cam_set_pane_g2_ParamLimits

0xad1a,	// (0x0006a413) main_cam_set_pane_g2

0x0001,

0xf910,	// (0x0006f009) main_cam_set_pane_g_ParamLimits

0xf910,	// (0x0006f009) main_cam_set_pane_g

0xad26,	// (0x0006a41f) main_cam_set_pane_t1_ParamLimits

0xad26,	// (0x0006a41f) main_cam_set_pane_t1

0xad42,	// (0x0006a43b) main_cset_listscroll_pane_ParamLimits

0xad42,	// (0x0006a43b) main_cset_listscroll_pane

0xad74,	// (0x0006a46d) main_cset_slider_pane_ParamLimits

0xad74,	// (0x0006a46d) main_cset_slider_pane

0x1578,	// (0x00060c71) main_cset_list_pane_ParamLimits

0x1578,	// (0x00060c71) main_cset_list_pane

0x1588,	// (0x00060c81) scroll_pane_cp028

0xad93,	// (0x0006a48c) aid_area_touch_slider

0xadaf,	// (0x0006a4a8) cset_slider_pane

0xadd2,	// (0x0006a4cb) main_cset_slider_pane_g1

0xade7,	// (0x0006a4e0) main_cset_slider_pane_g2

0x0011,

0xf915,	// (0x0006f00e) main_cset_slider_pane_g

0x15d9,	// (0x00060cd2) main_cset_slider_pane_t1

0xaead,	// (0x0006a5a6) main_cset_slider_pane_t2

0xaec7,	// (0x0006a5c0) main_cset_slider_pane_t3

0xaee1,	// (0x0006a5da) main_cset_slider_pane_t4

0xaeff,	// (0x0006a5f8) main_cset_slider_pane_t5

0xaf1d,	// (0x0006a616) main_cset_slider_pane_t6

0xaf34,	// (0x0006a62d) main_cset_slider_pane_t7

0x000e,

0xf93a,	// (0x0006f033) main_cset_slider_pane_t

0xb042,	// (0x0006a73b) cset_list_set_pane_ParamLimits

0xb042,	// (0x0006a73b) cset_list_set_pane

0x1673,	// (0x00060d6c) aid_position_infowindow_above

0x167b,	// (0x00060d74) aid_position_infowindow_below

0xb05b,	// (0x0006a754) cset_list_set_pane_g1_ParamLimits

0xb05b,	// (0x0006a754) cset_list_set_pane_g1

0x43c5,	// (0x00063abe) cset_list_set_pane_g3_ParamLimits

0x43c5,	// (0x00063abe) cset_list_set_pane_g3

0x0001,

0xf959,	// (0x0006f052) cset_list_set_pane_g_ParamLimits

0xf959,	// (0x0006f052) cset_list_set_pane_g

0x43d4,	// (0x00063acd) cset_list_set_pane_t1_ParamLimits

0x43d4,	// (0x00063acd) cset_list_set_pane_t1

0x52da,	// (0x000649d3) list_highlight_pane_cp021_ParamLimits

0x52da,	// (0x000649d3) list_highlight_pane_cp021

0x82c9,	// (0x000679c2) cset_slider_pane_g1

0x82db,	// (0x000679d4) cset_slider_pane_g2

0x82d2,	// (0x000679cb) cset_slider_pane_g3

0x0002,

0xf95e,	// (0x0006f057) cset_slider_pane_g

0xb067,	// (0x0006a760) aid_area_touch_cam4_zoom

0xb06f,	// (0x0006a768) cam4_zoom_cont_pane

0xb077,	// (0x0006a770) cam4_zoom_pane_g1

0xb07f,	// (0x0006a778) cam4_zoom_pane_g2

0xb087,	// (0x0006a780) cam4_zoom_pane_g3

0x0002,

0xf965,	// (0x0006f05e) cam4_zoom_pane_g

0x0f71,	// (0x0006066a) cam4_zoom_cont_pane_g1

0x1eed,	// (0x000615e6) cam4_zoom_cont_pane_g2

0x1ef6,	// (0x000615ef) cam4_zoom_cont_pane_g3

0x0002,

0xf96c,	// (0x0006f065) cam4_zoom_cont_pane_g

0xa4ee,	// (0x00069be7) call4_image_pane_ParamLimits

0xa4ee,	// (0x00069be7) call4_image_pane

0xa54d,	// (0x00069c46) call4_windows_conf_pane_ParamLimits

0xa590,	// (0x00069c89) popup_call4_audio_in_window_ParamLimits

0xa590,	// (0x00069c89) popup_call4_audio_in_window

0x02fb,	// (0x0005f9f4) bg_popup_call2_act_pane_cp02

0x13a2,	// (0x00060a9b) call4_list_conf_pane

0x5f63,	// (0x0006565c) call4_image_pane_g1

0x5f63,	// (0x0006565c) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x0006ead6) call4_image_pane_g

0x1683,	// (0x00060d7c) list_single_graphic_popup_conf4_pane_ParamLimits

0x1683,	// (0x00060d7c) list_single_graphic_popup_conf4_pane

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp022

0x1696,	// (0x00060d8f) list_single_graphic_popup_conf4_pane_g1

0x7a73,	// (0x0006716c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf973,	// (0x0006f06c) list_single_graphic_popup_conf4_pane_g

0x169e,	// (0x00060d97) list_single_graphic_popup_conf4_pane_t1

0x61c9,	// (0x000658c2) popup_vtel_slider_window_ParamLimits

0x61c9,	// (0x000658c2) popup_vtel_slider_window

0x1320,	// (0x00060a19) dialer2_ne_pane_t2_ParamLimits

0x1320,	// (0x00060a19) dialer2_ne_pane_t2

0x0001,

0xf854,	// (0x0006ef4d) dialer2_ne_pane_t_ParamLimits

0xf854,	// (0x0006ef4d) dialer2_ne_pane_t

0x52da,	// (0x000649d3) bg_popup_sub_pane_cp010_ParamLimits

0x52da,	// (0x000649d3) bg_popup_sub_pane_cp010

0xb08f,	// (0x0006a788) popup_vtel_slider_window_g1_ParamLimits

0xb08f,	// (0x0006a788) popup_vtel_slider_window_g1

0xb09b,	// (0x0006a794) popup_vtel_slider_window_g2_ParamLimits

0xb09b,	// (0x0006a794) popup_vtel_slider_window_g2

0x0003,

0xf978,	// (0x0006f071) popup_vtel_slider_window_g_ParamLimits

0xf978,	// (0x0006f071) popup_vtel_slider_window_g

0xb0e3,	// (0x0006a7dc) vtel_slider_pane_ParamLimits

0xb0e3,	// (0x0006a7dc) vtel_slider_pane

0xb0f2,	// (0x0006a7eb) vtel_slider_pane_g1_ParamLimits

0xb0f2,	// (0x0006a7eb) vtel_slider_pane_g1

0xb0ff,	// (0x0006a7f8) vtel_slider_pane_g2_ParamLimits

0xb0ff,	// (0x0006a7f8) vtel_slider_pane_g2

0xb10c,	// (0x0006a805) vtel_slider_pane_g3_ParamLimits

0xb10c,	// (0x0006a805) vtel_slider_pane_g3

0xb0f2,	// (0x0006a7eb) vtel_slider_pane_g4_ParamLimits

0xb0f2,	// (0x0006a7eb) vtel_slider_pane_g4

0xb119,	// (0x0006a812) vtel_slider_pane_g5_ParamLimits

0xb119,	// (0x0006a812) vtel_slider_pane_g5

0x0004,

0xf981,	// (0x0006f07a) vtel_slider_pane_g_ParamLimits

0xf981,	// (0x0006f07a) vtel_slider_pane_g

0x52da,	// (0x000649d3) main_gallery2_pane

0xa902,	// (0x00069ffb) aid_size_row_itut2_dropdow_list_ParamLimits

0xa902,	// (0x00069ffb) aid_size_row_itut2_dropdow_list

0xa95e,	// (0x0006a057) grid_vitu2_function_top_pane_ParamLimits

0xa95e,	// (0x0006a057) grid_vitu2_function_top_pane

0xa9b2,	// (0x0006a0ab) popup_vitu2_dropdown_list_window_ParamLimits

0xa9b2,	// (0x0006a0ab) popup_vitu2_dropdown_list_window

0xa9d0,	// (0x0006a0c9) popup_vitu2_match_list_window

0xb126,	// (0x0006a81f) cell_vitu2_function_top_pane_ParamLimits

0xb126,	// (0x0006a81f) cell_vitu2_function_top_pane

0xb140,	// (0x0006a839) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb140,	// (0x0006a839) cell_vitu2_function_top_pane_cp01

0xb15c,	// (0x0006a855) cell_vitu2_function_top_wide_pane_ParamLimits

0xb15c,	// (0x0006a855) cell_vitu2_function_top_wide_pane

0x52da,	// (0x000649d3) bg_button_pane_cp012

0xb17a,	// (0x0006a873) cell_vitu2_function_top_pane_g1

0xb18e,	// (0x0006a887) bg_button_pane_cp013_ParamLimits

0xb18e,	// (0x0006a887) bg_button_pane_cp013

0xb1aa,	// (0x0006a8a3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb1aa,	// (0x0006a8a3) cell_vitu2_function_top_wide_pane_g1

0x08ed,	// (0x0005ffe6) bg_popup_sub_pane_cp20

0xb1c2,	// (0x0006a8bb) list_vitu2_match_list_pane

0x146e,	// (0x00060b67) bg_popup_sub_pane_cp20_g1

0x1476,	// (0x00060b6f) bg_popup_sub_pane_cp20_g2

0x66f1,	// (0x00065dea) bg_popup_sub_pane_cp20_g3

0x147e,	// (0x00060b77) bg_popup_sub_pane_cp20_g4

0x66d1,	// (0x00065dca) bg_popup_sub_pane_cp20_g5

0x16b4,	// (0x00060dad) bg_popup_sub_pane_cp20_g6

0x148e,	// (0x00060b87) bg_popup_sub_pane_cp20_g7

0x1496,	// (0x00060b8f) bg_popup_sub_pane_cp20_g8

0x149e,	// (0x00060b97) bg_popup_sub_pane_cp20_g9

0x0008,

0xf98c,	// (0x0006f085) bg_popup_sub_pane_cp20_g

0xb1da,	// (0x0006a8d3) list_vitu2_match_list_item_pane_ParamLimits

0xb1da,	// (0x0006a8d3) list_vitu2_match_list_item_pane

0xb1ec,	// (0x0006a8e5) list_vitu2_match_list_item_pane_t1

0x02fb,	// (0x0005f9f4) bg_popup_sub_pane_cp21

0x5da5,	// (0x0006549e) grid_vitu2_dropdown_list_pane

0xb1fa,	// (0x0006a8f3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb1fa,	// (0x0006a8f3) cell_vitu2_dropdown_list_char_pane

0xb21d,	// (0x0006a916) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb21d,	// (0x0006a916) cell_vitu2_dropdown_list_ctrl_pane

0x16ce,	// (0x00060dc7) cell_vitu2_dropdown_list_char_pane_g1

0x16c5,	// (0x00060dbe) cell_vitu2_dropdown_list_char_pane_g2

0x16bc,	// (0x00060db5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99f,	// (0x0006f098) cell_vitu2_dropdown_list_char_pane_g

0xb247,	// (0x0006a940) cell_vitu2_dropdown_list_char_pane_t1

0xb255,	// (0x0006a94e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb255,	// (0x0006a94e) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb262,	// (0x0006a95b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb262,	// (0x0006a95b) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb26f,	// (0x0006a968) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb26f,	// (0x0006a968) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb27c,	// (0x0006a975) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb27c,	// (0x0006a975) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5333,	// (0x00064a2c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5333,	// (0x00064a2c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a6,	// (0x0006f09f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a6,	// (0x0006f09f) cell_vitu2_dropdown_list_ctrl_pane_g

0xb298,	// (0x0006a991) aid_size_cell_gallery2_ParamLimits

0xb298,	// (0x0006a991) aid_size_cell_gallery2

0xb2b2,	// (0x0006a9ab) grid_gallery2_pane_ParamLimits

0xb2b2,	// (0x0006a9ab) grid_gallery2_pane

0xb2c9,	// (0x0006a9c2) scroll_pane_cp029_ParamLimits

0xb2c9,	// (0x0006a9c2) scroll_pane_cp029

0xb2d9,	// (0x0006a9d2) cell_gallery2_pane_ParamLimits

0xb2d9,	// (0x0006a9d2) cell_gallery2_pane

0x16d7,	// (0x00060dd0) cell_gallery2_pane_g2

0xb32e,	// (0x0006aa27) cell_gallery2_pane_g3

0x16df,	// (0x00060dd8) cell_gallery2_pane_g4

0x16e7,	// (0x00060de0) cell_gallery2_pane_g5

0x5da5,	// (0x0006549e) grid_highlight_pane_cp10

0xa9d0,	// (0x0006a0c9) popup_vitu2_match_list_window_ParamLimits

0xa910,	// (0x0006a009) popup_vitu2_query_window_ParamLimits

0xa910,	// (0x0006a009) popup_vitu2_query_window

0x02fb,	// (0x0005f9f4) bg_vitu2_candi_button_pane

0x16ce,	// (0x00060dc7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x16c5,	// (0x00060dbe) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x16bc,	// (0x00060db5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x43e9,	// (0x00063ae2) bg_button_pane_cp015

0xb336,	// (0x0006aa2f) bg_button_pane_cp016

0xb349,	// (0x0006aa42) bg_button_pane_cp017

0xe903,	// (0x0006dffc) bg_popup_sub_pane_cp22

0x16ef,	// (0x00060de8) popup_vitu2_query_window_g1

0x441c,	// (0x00063b15) popup_vitu2_query_window_g2

0x0002,

0xf9b1,	// (0x0006f0aa) popup_vitu2_query_window_g

0x443b,	// (0x00063b34) popup_vitu2_query_window_t1_ParamLimits

0x443b,	// (0x00063b34) popup_vitu2_query_window_t1

0x4470,	// (0x00063b69) popup_vitu2_query_window_t2_ParamLimits

0x4470,	// (0x00063b69) popup_vitu2_query_window_t2

0x4482,	// (0x00063b7b) popup_vitu2_query_window_t3_ParamLimits

0x4482,	// (0x00063b7b) popup_vitu2_query_window_t3

0xb36d,	// (0x0006aa66) popup_vitu2_query_window_t4_ParamLimits

0xb36d,	// (0x0006aa66) popup_vitu2_query_window_t4

0xb38e,	// (0x0006aa87) popup_vitu2_query_window_t5_ParamLimits

0xb38e,	// (0x0006aa87) popup_vitu2_query_window_t5

0x0006,

0xf9b8,	// (0x0006f0b1) popup_vitu2_query_window_t_ParamLimits

0xf9b8,	// (0x0006f0b1) popup_vitu2_query_window_t

0x1570,	// (0x00060c69) main_cset_text_pane

0xad93,	// (0x0006a48c) aid_area_touch_slider_ParamLimits

0xadaf,	// (0x0006a4a8) cset_slider_pane_ParamLimits

0xadd2,	// (0x0006a4cb) main_cset_slider_pane_g1_ParamLimits

0xade7,	// (0x0006a4e0) main_cset_slider_pane_g2_ParamLimits

0x1591,	// (0x00060c8a) main_cset_slider_pane_g3_ParamLimits

0x1591,	// (0x00060c8a) main_cset_slider_pane_g3

0xadfc,	// (0x0006a4f5) main_cset_slider_pane_g4_ParamLimits

0xadfc,	// (0x0006a4f5) main_cset_slider_pane_g4

0xae0b,	// (0x0006a504) main_cset_slider_pane_g5_ParamLimits

0xae0b,	// (0x0006a504) main_cset_slider_pane_g5

0xae19,	// (0x0006a512) main_cset_slider_pane_g6_ParamLimits

0xae19,	// (0x0006a512) main_cset_slider_pane_g6

0xf915,	// (0x0006f00e) main_cset_slider_pane_g_ParamLimits

0x15d9,	// (0x00060cd2) main_cset_slider_pane_t1_ParamLimits

0xaead,	// (0x0006a5a6) main_cset_slider_pane_t2_ParamLimits

0xaec7,	// (0x0006a5c0) main_cset_slider_pane_t3_ParamLimits

0xaee1,	// (0x0006a5da) main_cset_slider_pane_t4_ParamLimits

0xaeff,	// (0x0006a5f8) main_cset_slider_pane_t5_ParamLimits

0xaf1d,	// (0x0006a616) main_cset_slider_pane_t6_ParamLimits

0xaf34,	// (0x0006a62d) main_cset_slider_pane_t7_ParamLimits

0xaf62,	// (0x0006a65b) main_cset_slider_pane_t8_ParamLimits

0xaf62,	// (0x0006a65b) main_cset_slider_pane_t8

0xaf8a,	// (0x0006a683) main_cset_slider_pane_t9_ParamLimits

0xaf8a,	// (0x0006a683) main_cset_slider_pane_t9

0xafb2,	// (0x0006a6ab) main_cset_slider_pane_t10_ParamLimits

0xafb2,	// (0x0006a6ab) main_cset_slider_pane_t10

0xafda,	// (0x0006a6d3) main_cset_slider_pane_t11_ParamLimits

0xafda,	// (0x0006a6d3) main_cset_slider_pane_t11

0xb004,	// (0x0006a6fd) main_cset_slider_pane_t12_ParamLimits

0xb004,	// (0x0006a6fd) main_cset_slider_pane_t12

0xb023,	// (0x0006a71c) main_cset_slider_pane_t13_ParamLimits

0xb023,	// (0x0006a71c) main_cset_slider_pane_t13

0xf93a,	// (0x0006f033) main_cset_slider_pane_t_ParamLimits

0x02fb,	// (0x0005f9f4) bg_popup_sub_pane_cp011

0x16fb,	// (0x00060df4) main_cset_text_pane_g1

0x1703,	// (0x00060dfc) main_cset_text_pane_t1

0x1711,	// (0x00060e0a) main_cset_text_pane_t2

0x171f,	// (0x00060e18) main_cset_text_pane_t3

0x172d,	// (0x00060e26) main_cset_text_pane_t4

0x173b,	// (0x00060e34) main_cset_text_pane_t5

0x1749,	// (0x00060e42) main_cset_text_pane_t6

0x1757,	// (0x00060e50) main_cset_text_pane_t7

0x0006,

0xf9c7,	// (0x0006f0c0) main_cset_text_pane_t

0x02fb,	// (0x0005f9f4) main_cam4_burst_pane

0x02fb,	// (0x0005f9f4) main_cam5_pane

0xacdb,	// (0x0006a3d4) bg_button_pane_cp019

0xace4,	// (0x0006a3dd) bg_button_pane_cp020

0x159d,	// (0x00060c96) main_cset_slider_pane_g7_ParamLimits

0x159d,	// (0x00060c96) main_cset_slider_pane_g7

0x15a9,	// (0x00060ca2) main_cset_slider_pane_g8_ParamLimits

0x15a9,	// (0x00060ca2) main_cset_slider_pane_g8

0xae2d,	// (0x0006a526) main_cset_slider_pane_g9_ParamLimits

0xae2d,	// (0x0006a526) main_cset_slider_pane_g9

0xae39,	// (0x0006a532) main_cset_slider_pane_g10_ParamLimits

0xae39,	// (0x0006a532) main_cset_slider_pane_g10

0xae45,	// (0x0006a53e) main_cset_slider_pane_g11_ParamLimits

0xae45,	// (0x0006a53e) main_cset_slider_pane_g11

0xae51,	// (0x0006a54a) main_cset_slider_pane_g12_ParamLimits

0xae51,	// (0x0006a54a) main_cset_slider_pane_g12

0xae5d,	// (0x0006a556) main_cset_slider_pane_g13_ParamLimits

0xae5d,	// (0x0006a556) main_cset_slider_pane_g13

0xae6b,	// (0x0006a564) main_cset_slider_pane_g14_ParamLimits

0xae6b,	// (0x0006a564) main_cset_slider_pane_g14

0xae79,	// (0x0006a572) main_cset_slider_pane_g15_ParamLimits

0xae79,	// (0x0006a572) main_cset_slider_pane_g15

0x1601,	// (0x00060cfa) main_cset_slider_pane_t14_ParamLimits

0x1601,	// (0x00060cfa) main_cset_slider_pane_t14

0x163a,	// (0x00060d33) main_cset_slider_pane_t15_ParamLimits

0x163a,	// (0x00060d33) main_cset_slider_pane_t15

0xb3af,	// (0x0006aaa8) aid_cam4_burst_size_cell_ParamLimits

0xb3af,	// (0x0006aaa8) aid_cam4_burst_size_cell

0xb3cb,	// (0x0006aac4) grid_cam4_burst_pane_ParamLimits

0xb3cb,	// (0x0006aac4) grid_cam4_burst_pane

0xb3fb,	// (0x0006aaf4) linegrid_cam4_burst_pane_ParamLimits

0xb3fb,	// (0x0006aaf4) linegrid_cam4_burst_pane

0xb41b,	// (0x0006ab14) scroll_pane_cp30_ParamLimits

0xb41b,	// (0x0006ab14) scroll_pane_cp30

0xb427,	// (0x0006ab20) cell_cam4_burst_pane_ParamLimits

0xb427,	// (0x0006ab20) cell_cam4_burst_pane

0x1771,	// (0x00060e6a) linegrid_cam4_burst_pane_g1_ParamLimits

0x1771,	// (0x00060e6a) linegrid_cam4_burst_pane_g1

0xb463,	// (0x0006ab5c) linegrid_cam4_burst_pane_g2_ParamLimits

0xb463,	// (0x0006ab5c) linegrid_cam4_burst_pane_g2

0x177e,	// (0x00060e77) linegrid_cam4_burst_pane_g3_ParamLimits

0x177e,	// (0x00060e77) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d6,	// (0x0006f0cf) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d6,	// (0x0006f0cf) linegrid_cam4_burst_pane_g

0xb474,	// (0x0006ab6d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb474,	// (0x0006ab6d) linegrid_cam4_burst_pane_g3_copy1

0x178b,	// (0x00060e84) linegrid_cam4_burst_pane_g4_ParamLimits

0x178b,	// (0x00060e84) linegrid_cam4_burst_pane_g4

0xb48e,	// (0x0006ab87) linegrid_cam4_burst_pane_g5_ParamLimits

0xb48e,	// (0x0006ab87) linegrid_cam4_burst_pane_g5

0xb49f,	// (0x0006ab98) linegrid_cam4_burst_pane_g6_ParamLimits

0xb49f,	// (0x0006ab98) linegrid_cam4_burst_pane_g6

0x1798,	// (0x00060e91) linegrid_cam4_burst_pane_g7_ParamLimits

0x1798,	// (0x00060e91) linegrid_cam4_burst_pane_g7

0xb4b0,	// (0x0006aba9) cell_cam4_burst_pane_g1

0x17b1,	// (0x00060eaa) main_cam5_pane_t1_ParamLimits

0x17b1,	// (0x00060eaa) main_cam5_pane_t1

0x17c3,	// (0x00060ebc) main_cam5_pane_t2_ParamLimits

0x17c3,	// (0x00060ebc) main_cam5_pane_t2

0x17d5,	// (0x00060ece) main_cam5_pane_t3_ParamLimits

0x17d5,	// (0x00060ece) main_cam5_pane_t3

0x17e7,	// (0x00060ee0) main_cam5_pane_t4_ParamLimits

0x17e7,	// (0x00060ee0) main_cam5_pane_t4

0x17ff,	// (0x00060ef8) main_cam5_pane_t5_ParamLimits

0x17ff,	// (0x00060ef8) main_cam5_pane_t5

0x1813,	// (0x00060f0c) main_cam5_pane_t6_ParamLimits

0x1813,	// (0x00060f0c) main_cam5_pane_t6

0x1827,	// (0x00060f20) main_cam5_pane_t7_ParamLimits

0x1827,	// (0x00060f20) main_cam5_pane_t7

0x1839,	// (0x00060f32) main_cam5_pane_t8_ParamLimits

0x1839,	// (0x00060f32) main_cam5_pane_t8

0x1855,	// (0x00060f4e) main_cam5_pane_t9_ParamLimits

0x1855,	// (0x00060f4e) main_cam5_pane_t9

0x1867,	// (0x00060f60) main_cam5_pane_t10_ParamLimits

0x1867,	// (0x00060f60) main_cam5_pane_t10

0x1879,	// (0x00060f72) main_cam5_pane_t11_ParamLimits

0x1879,	// (0x00060f72) main_cam5_pane_t11

0x188b,	// (0x00060f84) main_cam5_pane_t12_ParamLimits

0x188b,	// (0x00060f84) main_cam5_pane_t12

0x18a0,	// (0x00060f99) main_cam5_pane_t13_ParamLimits

0x18a0,	// (0x00060f99) main_cam5_pane_t13

0x000c,

0xf9e2,	// (0x0006f0db) main_cam5_pane_t_ParamLimits

0xf9e2,	// (0x0006f0db) main_cam5_pane_t

0x50a9,	// (0x000647a2) popup_scut_keymap_window_ParamLimits

0x50a9,	// (0x000647a2) popup_scut_keymap_window

0xb4c3,	// (0x0006abbc) aid_size_cell_brow_shortcut

0x5da5,	// (0x0006549e) bg_popup_window_pane_cp010

0xb4cf,	// (0x0006abc8) grid_scut_pane

0xb4db,	// (0x0006abd4) cell_scut_pane_ParamLimits

0xb4db,	// (0x0006abd4) cell_scut_pane

0xb4f2,	// (0x0006abeb) cell_scut_pane_g1

0x18bd,	// (0x00060fb6) cell_scut_pane_t1

0x18cc,	// (0x00060fc5) cell_scut_pane_t2

0xb4fb,	// (0x0006abf4) cell_scut_pane_t3

0x0002,

0xf9fd,	// (0x0006f0f6) cell_scut_pane_t

0x961c,	// (0x00068d15) main_mup3_pane_g8_ParamLimits

0x961c,	// (0x00068d15) main_mup3_pane_g8

0xa910,	// (0x0006a009) area_vitu2_query_pane_ParamLimits

0xa910,	// (0x0006a009) area_vitu2_query_pane

0x43fb,	// (0x00063af4) input_focus_pane_cp08

0x18db,	// (0x00060fd4) area_vitu2_query_pane_g1

0x4500,	// (0x00063bf9) area_vitu2_query_pane_g2

0x0001,

0xfa04,	// (0x0006f0fd) area_vitu2_query_pane_g

0xb509,	// (0x0006ac02) area_vitu2_query_pane_t1_ParamLimits

0xb509,	// (0x0006ac02) area_vitu2_query_pane_t1

0xb51d,	// (0x0006ac16) area_vitu2_query_pane_t2_ParamLimits

0xb51d,	// (0x0006ac16) area_vitu2_query_pane_t2

0x4511,	// (0x00063c0a) area_vitu2_query_pane_t3_ParamLimits

0x4511,	// (0x00063c0a) area_vitu2_query_pane_t3

0x4539,	// (0x00063c32) area_vitu2_query_pane_t4_ParamLimits

0x4539,	// (0x00063c32) area_vitu2_query_pane_t4

0x4561,	// (0x00063c5a) area_vitu2_query_pane_t5_ParamLimits

0x4561,	// (0x00063c5a) area_vitu2_query_pane_t5

0x4589,	// (0x00063c82) area_vitu2_query_pane_t6_ParamLimits

0x4589,	// (0x00063c82) area_vitu2_query_pane_t6

0x0006,

0xfa09,	// (0x0006f102) area_vitu2_query_pane_t_ParamLimits

0xfa09,	// (0x0006f102) area_vitu2_query_pane_t

0xb531,	// (0x0006ac2a) bg_button_pane_cp018

0xb53f,	// (0x0006ac38) bg_button_pane_cp021

0x45d5,	// (0x00063cce) bg_button_pane_cp022

0x45e6,	// (0x00063cdf) input_focus_pane_cp09

0x7db5,	// (0x000674ae) aid_size_touch_mv_arrow_left

0x7de0,	// (0x000674d9) aid_size_touch_mv_arrow_right

0xae91,	// (0x0006a58a) main_cset_slider_pane_g16_ParamLimits

0xae91,	// (0x0006a58a) main_cset_slider_pane_g16

0xae9f,	// (0x0006a598) main_cset_slider_pane_g17_ParamLimits

0xae9f,	// (0x0006a598) main_cset_slider_pane_g17

0xb4b0,	// (0x0006aba9) cell_cam4_burst_pane_g1_ParamLimits

0x02fb,	// (0x0005f9f4) compa_mode_pane

0xb0a7,	// (0x0006a7a0) popup_vtel_slider_window_g3_ParamLimits

0xb0a7,	// (0x0006a7a0) popup_vtel_slider_window_g3

0xb0bb,	// (0x0006a7b4) popup_vtel_slider_window_g4_ParamLimits

0xb0bb,	// (0x0006a7b4) popup_vtel_slider_window_g4

0xb0cf,	// (0x0006a7c8) popup_vtel_slider_window_t1_ParamLimits

0xb0cf,	// (0x0006a7c8) popup_vtel_slider_window_t1

0x02fb,	// (0x0005f9f4) main_cl_pane

0x8eed,	// (0x000685e6) popup_imed_adjust2_window_ParamLimits

0xe903,	// (0x0006dffc) bg_tb_trans_pane_cp05_ParamLimits

0x0d63,	// (0x0006045c) popup_imed_adjust2_window_g1_ParamLimits

0x0d72,	// (0x0006046b) popup_imed_adjust2_window_g2_ParamLimits

0x0d72,	// (0x0006046b) popup_imed_adjust2_window_g2

0x0d7e,	// (0x00060477) popup_imed_adjust2_window_g3_ParamLimits

0x0d7e,	// (0x00060477) popup_imed_adjust2_window_g3

0x0002,

0xf77f,	// (0x0006ee78) popup_imed_adjust2_window_g_ParamLimits

0xf77f,	// (0x0006ee78) popup_imed_adjust2_window_g

0x0d8a,	// (0x00060483) popup_imed_adjust2_window_t1_ParamLimits

0x0da2,	// (0x0006049b) slider_imed_adjust_pane_ParamLimits

0x0db6,	// (0x000604af) slider_imed_adjust_pane_g1_ParamLimits

0x0dc6,	// (0x000604bf) slider_imed_adjust_pane_g2_ParamLimits

0x0dd6,	// (0x000604cf) slider_imed_adjust_pane_g3_ParamLimits

0x0de7,	// (0x000604e0) slider_imed_adjust_pane_g4_ParamLimits

0xf786,	// (0x0006ee7f) slider_imed_adjust_pane_g_ParamLimits

0xa671,	// (0x00069d6a) aid_touch_area_cam4_ParamLimits

0xa671,	// (0x00069d6a) aid_touch_area_cam4

0xa681,	// (0x00069d7a) battery_pane_cp01

0xa708,	// (0x00069e01) main_camera4_pane_g6_ParamLimits

0xa708,	// (0x00069e01) main_camera4_pane_g6

0xa726,	// (0x00069e1f) main_camera4_pane_t2_ParamLimits

0xa726,	// (0x00069e1f) main_camera4_pane_t2

0x0001,

0xf888,	// (0x0006ef81) main_camera4_pane_t_ParamLimits

0xf888,	// (0x0006ef81) main_camera4_pane_t

0xa7a7,	// (0x00069ea0) aid_touch_area_vid4_ParamLimits

0xa7a7,	// (0x00069ea0) aid_touch_area_vid4

0xa7e7,	// (0x00069ee0) main_video4_pane_g5_ParamLimits

0xa7e7,	// (0x00069ee0) main_video4_pane_g5

0xa80b,	// (0x00069f04) vid4_progress_pane_ParamLimits

0xa80b,	// (0x00069f04) vid4_progress_pane

0x15cd,	// (0x00060cc6) main_cset_slider_pane_g18_ParamLimits

0x15cd,	// (0x00060cc6) main_cset_slider_pane_g18

0x17a5,	// (0x00060e9e) cell_cam4_burst_pane_g2_ParamLimits

0x17a5,	// (0x00060e9e) cell_cam4_burst_pane_g2

0x0001,

0xf9dd,	// (0x0006f0d6) cell_cam4_burst_pane_g_ParamLimits

0xf9dd,	// (0x0006f0d6) cell_cam4_burst_pane_g

0xb54b,	// (0x0006ac44) bg_cl_pane_ParamLimits

0xb54b,	// (0x0006ac44) bg_cl_pane

0xb557,	// (0x0006ac50) cl_header_pane_ParamLimits

0xb557,	// (0x0006ac50) cl_header_pane

0xb563,	// (0x0006ac5c) cl_listscroll_pane_ParamLimits

0xb563,	// (0x0006ac5c) cl_listscroll_pane

0x1983,	// (0x0006107c) bg_cl_pane_g1

0x198b,	// (0x00061084) bg_cl_pane_g2

0x1993,	// (0x0006108c) bg_cl_pane_g3

0x199b,	// (0x00061094) bg_cl_pane_g4

0x19a3,	// (0x0006109c) bg_cl_pane_g5

0x19ab,	// (0x000610a4) bg_cl_pane_g6

0x19b3,	// (0x000610ac) bg_cl_pane_g7

0x19bb,	// (0x000610b4) bg_cl_pane_g8

0x19c3,	// (0x000610bc) bg_cl_pane_g9

0x0008,

0xfa18,	// (0x0006f111) bg_cl_pane_g

0xb56f,	// (0x0006ac68) aid_height_cl_leading_ParamLimits

0xb56f,	// (0x0006ac68) aid_height_cl_leading

0xb57b,	// (0x0006ac74) aid_height_cl_text_ParamLimits

0xb57b,	// (0x0006ac74) aid_height_cl_text

0x08ed,	// (0x0005ffe6) bg_cl_header_pane_ParamLimits

0x08ed,	// (0x0005ffe6) bg_cl_header_pane

0xb593,	// (0x0006ac8c) cl_header_pane_g1_ParamLimits

0xb593,	// (0x0006ac8c) cl_header_pane_g1

0xb5a0,	// (0x0006ac99) cl_header_pane_t1_ParamLimits

0xb5a0,	// (0x0006ac99) cl_header_pane_t1

0x19cb,	// (0x000610c4) cl_list_pane

0x1588,	// (0x00060c81) hc_scroll_pane_cp01

0x66d1,	// (0x00065dca) bg_cl_header_pane_g1

0x146e,	// (0x00060b67) bg_cl_header_pane_g2

0x66f1,	// (0x00065dea) bg_cl_header_pane_g3

0x147e,	// (0x00060b77) bg_cl_header_pane_g4

0x1476,	// (0x00060b6f) bg_cl_header_pane_g5

0x16b4,	// (0x00060dad) bg_cl_header_pane_g6

0x1496,	// (0x00060b8f) bg_cl_header_pane_g7

0x149e,	// (0x00060b97) bg_cl_header_pane_g8

0x148e,	// (0x00060b87) bg_cl_header_pane_g9

0x0008,

0xfa2b,	// (0x0006f124) bg_cl_header_pane_g

0xb5b2,	// (0x0006acab) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb5b2,	// (0x0006acab) hc_cl_list_double_graphic_heading_pane

0xb5c6,	// (0x0006acbf) hc_cl_list_single_graphic_pane_ParamLimits

0xb5c6,	// (0x0006acbf) hc_cl_list_single_graphic_pane

0xb5e0,	// (0x0006acd9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb5e0,	// (0x0006acd9) hc_cl_list_single_graphic_pane_g1

0xb5ec,	// (0x0006ace5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb5ec,	// (0x0006ace5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa3e,	// (0x0006f137) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa3e,	// (0x0006f137) hc_cl_list_single_graphic_pane_g

0xb600,	// (0x0006acf9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb600,	// (0x0006acf9) hc_cl_list_single_graphic_pane_t1

0xb5e0,	// (0x0006acd9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb5e0,	// (0x0006acd9) hc_cl_list_double_graphic_heading_pane_g1

0xb615,	// (0x0006ad0e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb615,	// (0x0006ad0e) hc_cl_list_double_graphic_heading_pane_g2

0xb629,	// (0x0006ad22) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb629,	// (0x0006ad22) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa43,	// (0x0006f13c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa43,	// (0x0006f13c) hc_cl_list_double_graphic_heading_pane_g

0xb63d,	// (0x0006ad36) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb63d,	// (0x0006ad36) hc_cl_list_double_graphic_heading_pane_t1

0xb652,	// (0x0006ad4b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb652,	// (0x0006ad4b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa4a,	// (0x0006f143) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa4a,	// (0x0006f143) hc_cl_list_double_graphic_heading_pane_t

0xb66f,	// (0x0006ad68) vid4_progress_pane_g1

0xb67f,	// (0x0006ad78) vid4_progress_pane_g2

0xb68f,	// (0x0006ad88) vid4_progress_pane_g3

0xb6a1,	// (0x0006ad9a) vid4_progress_pane_g4

0x0004,

0xfa4f,	// (0x0006f148) vid4_progress_pane_g

0xb6b9,	// (0x0006adb2) vid4_progress_pane_t1

0xb6cf,	// (0x0006adc8) vid4_progress_pane_t2

0x0002,

0xfa5a,	// (0x0006f153) vid4_progress_pane_t

0xb6fa,	// (0x0006adf3) wait_bar_pane_cp07

0xeb41,	// (0x0006e23a) blid_firmament_pane_ParamLimits

0xeb84,	// (0x0006e27d) popup_blid_sat_info2_window_g1

0xeba8,	// (0x0006e2a1) popup_blid_sat_info2_window_t3

0xebb6,	// (0x0006e2af) popup_blid_sat_info2_window_t4

0xebc4,	// (0x0006e2bd) popup_blid_sat_info2_window_t5

0xebd2,	// (0x0006e2cb) popup_blid_sat_info2_window_t6

0xebe2,	// (0x0006e2db) popup_blid_sat_info2_window_t7

0xebf0,	// (0x0006e2e9) popup_blid_sat_info2_window_t8

0xebfe,	// (0x0006e2f7) popup_blid_sat_info2_window_t9

0xec0c,	// (0x0006e305) popup_blid_sat_info2_window_t10

0xeccd,	// (0x0006e3c6) aid_firma_cardinal_ParamLimits

0xece1,	// (0x0006e3da) blid_firmament_pane_t1_ParamLimits

0xecf8,	// (0x0006e3f1) blid_firmament_pane_t2_ParamLimits

0xed0f,	// (0x0006e408) blid_firmament_pane_t3_ParamLimits

0xed26,	// (0x0006e41f) blid_firmament_pane_t4_ParamLimits

0xf678,	// (0x0006ed71) blid_firmament_pane_t_ParamLimits

0xed3d,	// (0x0006e436) blid_sat_info_pane_ParamLimits

0x52da,	// (0x000649d3) main_cam_set_pane_ParamLimits

0x9ceb,	// (0x000693e4) aid_size_cell_colour_35_ParamLimits

0x9d05,	// (0x000693fe) aid_size_cell_colour_112_ParamLimits

0x9d1c,	// (0x00069415) aid_size_cell_effect_ParamLimits

0x52da,	// (0x000649d3) bg_tb_trans_pane_cp02_ParamLimits

0xf01d,	// (0x0006e716) heading_imed_pane_ParamLimits

0x9d36,	// (0x0006942f) listscroll_imed_pane_ParamLimits

0xdfd2,	// (0x0006d6cb) popup_call2_audio_first_window_g5_ParamLimits

0xdfd2,	// (0x0006d6cb) popup_call2_audio_first_window_g5

0xa367,	// (0x00069a60) aid_size_touch_image3_arrow_left_ParamLimits

0xa367,	// (0x00069a60) aid_size_touch_image3_arrow_left

0xa37d,	// (0x00069a76) aid_size_touch_image3_arrow_right_ParamLimits

0xa37d,	// (0x00069a76) aid_size_touch_image3_arrow_right

0xb6e4,	// (0x0006addd) vid4_progress_pane_t3

0x9eb8,	// (0x000695b1) main_hwr_training_symbol_option_pane_ParamLimits

0x9eb8,	// (0x000695b1) main_hwr_training_symbol_option_pane

0x0f9c,	// (0x00060695) popup_hwr_training_preview_window_ParamLimits

0x0f9c,	// (0x00060695) popup_hwr_training_preview_window

0x9f19,	// (0x00069612) hwr_training_navi_pane_g5_ParamLimits

0x9f19,	// (0x00069612) hwr_training_navi_pane_g5

0x145c,	// (0x00060b55) popup_char_count_window

0x08ed,	// (0x0005ffe6) bg_popup_sub_pane_cp20_ParamLimits

0xb1c2,	// (0x0006a8bb) list_vitu2_match_list_pane_ParamLimits

0xb1ce,	// (0x0006a8c7) vitu2_page_scroll_pane_ParamLimits

0xb1ce,	// (0x0006a8c7) vitu2_page_scroll_pane

0x19f6,	// (0x000610ef) list_single_hwr_training_symbol_option_pane_ParamLimits

0x19f6,	// (0x000610ef) list_single_hwr_training_symbol_option_pane

0x1a09,	// (0x00061102) list_single_hwr_training_symbol_option_pane_g1

0x1a11,	// (0x0006110a) list_single_hwr_training_symbol_option_pane_t1

0x1a1f,	// (0x00061118) bg_button_pane_cp023

0x1a28,	// (0x00061121) bg_button_pane_cp024

0x1a5b,	// (0x00061154) vitu2_page_scroll_pane_g1

0x1a63,	// (0x0006115c) vitu2_page_scroll_pane_g2

0x0001,

0xfa61,	// (0x0006f15a) vitu2_page_scroll_pane_g

0x1a6b,	// (0x00061164) vitu2_page_scroll_pane_t1

0xed6c,	// (0x0006e465) popup_char_count_window_g1

0x1a7a,	// (0x00061173) popup_char_count_window_g2

0xf037,	// (0x0006e730) popup_char_count_window_g3

0x0002,

0xfa66,	// (0x0006f15f) popup_char_count_window_g

0x1a83,	// (0x0006117c) popup_char_count_window_t1

0x02fb,	// (0x0005f9f4) main_vded2_pane

0x0d4f,	// (0x00060448) aid_size_cell_imed_line

0x0d59,	// (0x00060452) grid_imed_line_width_pane

0xa877,	// (0x00069f70) vid4_indicators_pane_g4

0x1a91,	// (0x0006118a) cell_imed_line_width_pane_ParamLimits

0x1a91,	// (0x0006118a) cell_imed_line_width_pane

0x1aa5,	// (0x0006119e) cell_imed_line_width_pane_g1

0x1aae,	// (0x000611a7) cell_imed_line_width_pane_g2

0x0001,

0xfa6d,	// (0x0006f166) cell_imed_line_width_pane_g

0xb713,	// (0x0006ae0c) main_vded2_pane_g1_ParamLimits

0xb713,	// (0x0006ae0c) main_vded2_pane_g1

0xb720,	// (0x0006ae19) main_vded2_pane_g2_ParamLimits

0xb720,	// (0x0006ae19) main_vded2_pane_g2

0x0001,

0xfa72,	// (0x0006f16b) main_vded2_pane_g_ParamLimits

0xfa72,	// (0x0006f16b) main_vded2_pane_g

0xb72e,	// (0x0006ae27) vded2_slider_pane_ParamLimits

0xb72e,	// (0x0006ae27) vded2_slider_pane

0xb73b,	// (0x0006ae34) aid_size_touch_vded2_end

0xb745,	// (0x0006ae3e) aid_size_touch_vded2_playhead

0x1ab6,	// (0x000611af) aid_size_touch_vded2_start

0x1abe,	// (0x000611b7) vded2_slider_bg_pane

0x1ac7,	// (0x000611c0) vded2_slider_pane_g1

0x1ad0,	// (0x000611c9) vded2_slider_pane_g2

0xb74d,	// (0x0006ae46) vded2_slider_pane_g3

0x0002,

0xfa77,	// (0x0006f170) vded2_slider_pane_g

0x1ad8,	// (0x000611d1) vded2_slider_bg_pane_g1

0x1ae1,	// (0x000611da) vded2_slider_bg_pane_g2

0x1aea,	// (0x000611e3) vded2_slider_bg_pane_g3

0x0002,

0xfa7e,	// (0x0006f177) vded2_slider_bg_pane_g

0x8444,	// (0x00067b3d) aid_postcard_touch_down_pane_ParamLimits

0x8444,	// (0x00067b3d) aid_postcard_touch_down_pane

0x8454,	// (0x00067b4d) aid_postcard_touch_up_pane_ParamLimits

0x8454,	// (0x00067b4d) aid_postcard_touch_up_pane

0x02fb,	// (0x0005f9f4) main_blid2_pane

0x8e7c,	// (0x00068575) popup_blid2_search_window

0x02fb,	// (0x0005f9f4) blid2_gps_pane

0x02fb,	// (0x0005f9f4) blid2_navig_pane

0x02fb,	// (0x0005f9f4) blid2_search_pane

0x02fb,	// (0x0005f9f4) blid2_tripm_pane

0xb756,	// (0x0006ae4f) blid2_search_pane_g1_ParamLimits

0xb756,	// (0x0006ae4f) blid2_search_pane_g1

0xb766,	// (0x0006ae5f) blid2_search_pane_t1_ParamLimits

0xb766,	// (0x0006ae5f) blid2_search_pane_t1

0xb778,	// (0x0006ae71) aid_size_cell_blid2_gps_ParamLimits

0xb778,	// (0x0006ae71) aid_size_cell_blid2_gps

0xb788,	// (0x0006ae81) blid2_gps_pane_g1_ParamLimits

0xb788,	// (0x0006ae81) blid2_gps_pane_g1

0xb794,	// (0x0006ae8d) grid_blid2_satellite_pane_ParamLimits

0xb794,	// (0x0006ae8d) grid_blid2_satellite_pane

0xb7a4,	// (0x0006ae9d) blid2_navig_pane_g1_ParamLimits

0xb7a4,	// (0x0006ae9d) blid2_navig_pane_g1

0xb7b0,	// (0x0006aea9) blid2_navig_pane_t1_ParamLimits

0xb7b0,	// (0x0006aea9) blid2_navig_pane_t1

0xb7c2,	// (0x0006aebb) blid2_navig_pane_t2_ParamLimits

0xb7c2,	// (0x0006aebb) blid2_navig_pane_t2

0x0001,

0xfa85,	// (0x0006f17e) blid2_navig_pane_t_ParamLimits

0xfa85,	// (0x0006f17e) blid2_navig_pane_t

0xb7d4,	// (0x0006aecd) blid2_navig_ring_pane_ParamLimits

0xb7d4,	// (0x0006aecd) blid2_navig_ring_pane

0xb7e4,	// (0x0006aedd) blid2_speed_pane_ParamLimits

0xb7e4,	// (0x0006aedd) blid2_speed_pane

0xb7f0,	// (0x0006aee9) blid2_tripm_pane_g1_ParamLimits

0xb7f0,	// (0x0006aee9) blid2_tripm_pane_g1

0xb800,	// (0x0006aef9) blid2_tripm_pane_g2_ParamLimits

0xb800,	// (0x0006aef9) blid2_tripm_pane_g2

0xb80c,	// (0x0006af05) blid2_tripm_pane_g3_ParamLimits

0xb80c,	// (0x0006af05) blid2_tripm_pane_g3

0xb818,	// (0x0006af11) blid2_tripm_pane_g4_ParamLimits

0xb818,	// (0x0006af11) blid2_tripm_pane_g4

0xb824,	// (0x0006af1d) blid2_tripm_pane_g5_ParamLimits

0xb824,	// (0x0006af1d) blid2_tripm_pane_g5

0x0005,

0xfa8a,	// (0x0006f183) blid2_tripm_pane_g_ParamLimits

0xfa8a,	// (0x0006f183) blid2_tripm_pane_g

0xb840,	// (0x0006af39) blid2_tripm_pane_t1_ParamLimits

0xb840,	// (0x0006af39) blid2_tripm_pane_t1

0xb854,	// (0x0006af4d) blid2_tripm_pane_t2_ParamLimits

0xb854,	// (0x0006af4d) blid2_tripm_pane_t2

0xb866,	// (0x0006af5f) blid2_tripm_pane_t3_ParamLimits

0xb866,	// (0x0006af5f) blid2_tripm_pane_t3

0x0003,

0xfa97,	// (0x0006f190) blid2_tripm_pane_t_ParamLimits

0xfa97,	// (0x0006f190) blid2_tripm_pane_t

0xb898,	// (0x0006af91) cell_blid2_satellite_pane_ParamLimits

0xb898,	// (0x0006af91) cell_blid2_satellite_pane

0xb8b2,	// (0x0006afab) cell_blid2_satellite_pane_g1

0x1af3,	// (0x000611ec) cell_blid2_satellite_pane_t1

0x5f63,	// (0x0006565c) blid2_speed_pane_g1

0x1b01,	// (0x000611fa) blid2_speed_pane_t1

0x1b0f,	// (0x00061208) blid2_speed_pane_t2

0x0001,

0xfaa0,	// (0x0006f199) blid2_speed_pane_t

0x5f63,	// (0x0006565c) blid2_navig_ring_pane_g1

0xb8bb,	// (0x0006afb4) blid2_navig_ring_pane_g2

0xb8c3,	// (0x0006afbc) blid2_navig_ring_pane_g3

0xb8cb,	// (0x0006afc4) blid2_navig_ring_pane_g4

0xb8d3,	// (0x0006afcc) blid2_navig_ring_pane_g5

0x0004,

0xfaa5,	// (0x0006f19e) blid2_navig_ring_pane_g

0x02fb,	// (0x0005f9f4) bg_popup_window_pane_cp011

0x1b1d,	// (0x00061216) popup_blid2_search_window_g1

0x1b25,	// (0x0006121e) popup_blid2_search_window_t1

0x1b33,	// (0x0006122c) popup_blid2_search_window_t2

0x0001,

0xfab0,	// (0x0006f1a9) popup_blid2_search_window_t

0x6546,	// (0x00065c3f) main_browser_pane_g1

0x5510,	// (0x00064c09) main_browser_pane_ParamLimits

0x52da,	// (0x000649d3) bg_button_pane_cp011_ParamLimits

0xaaae,	// (0x0006a1a7) cell_vitu2_function_pane_g1_ParamLimits

0xe903,	// (0x0006dffc) bg_popup_sub_pane_cp22_ParamLimits

0x43fb,	// (0x00063af4) input_focus_pane_cp08_ParamLimits

0xb35c,	// (0x0006aa55) popup_vitu2_query_button_pane_ParamLimits

0xb35c,	// (0x0006aa55) popup_vitu2_query_button_pane

0x4412,	// (0x00063b0b) popup_vitu2_query_input_button_pane

0x16ef,	// (0x00060de8) popup_vitu2_query_window_g1_ParamLimits

0x441c,	// (0x00063b15) popup_vitu2_query_window_g2_ParamLimits

0xf9b1,	// (0x0006f0aa) popup_vitu2_query_window_g_ParamLimits

0x02fb,	// (0x0005f9f4) bg_button_pane_cp026

0xb8db,	// (0x0006afd4) popup_vitu2_query_input_button_pane_g1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp025

0x1b41,	// (0x0006123a) popup_vitu2_query_button_pane_t1

0x92f5,	// (0x000689ee) main_mp3_pane_t6

0x9305,	// (0x000689fe) popup_slider_window_cp01

0xa75c,	// (0x00069e55) cam4_battery_pane

0xa836,	// (0x00069f2f) cam4_battery_pane_cp02

0xb667,	// (0x0006ad60) cam4_battery_pane_cp01

0xb667,	// (0x0006ad60) cam4_battery_pane_cp03

0x5f63,	// (0x0006565c) cam4_battery_pane_g1

0xf040,	// (0x0006e739) cam4_battery_pane_g2

0x0001,

0xfab5,	// (0x0006f1ae) cam4_battery_pane_g

0xec1a,	// (0x0006e313) popup_blid_sat_info2_window_t11

0x7db5,	// (0x000674ae) aid_size_touch_mv_arrow_left_ParamLimits

0x7de0,	// (0x000674d9) aid_size_touch_mv_arrow_right_ParamLimits

0x7e3e,	// (0x00067537) navi_pane_g1_ParamLimits

0x7e4a,	// (0x00067543) navi_pane_g2_ParamLimits

0x7e78,	// (0x00067571) navi_pane_g3_ParamLimits

0xf379,	// (0x0006ea72) navi_pane_g_ParamLimits

0x7f36,	// (0x0006762f) navi_pane_mv_t1_ParamLimits

0x9d42,	// (0x0006943b) grid_imed_effect_pane_ParamLimits

0x6077,	// (0x00065770) aid_placing_vt_slider_lsc

0x608f,	// (0x00065788) aid_placing_vt_slider_prt

0x52da,	// (0x000649d3) bg_tb_trans_pane_cp01_ParamLimits

0xeec1,	// (0x0006e5ba) popup_image_details_window_g1_ParamLimits

0xeed4,	// (0x0006e5cd) popup_image_details_window_g2_ParamLimits

0xeee9,	// (0x0006e5e2) popup_image_details_window_g3_ParamLimits

0xeee9,	// (0x0006e5e2) popup_image_details_window_g3

0xf6b8,	// (0x0006edb1) popup_image_details_window_g_ParamLimits

0xeefd,	// (0x0006e5f6) popup_image_details_window_t1_ParamLimits

0xef0f,	// (0x0006e608) popup_image_details_window_t2_ParamLimits

0xef28,	// (0x0006e621) popup_image_details_window_t3_ParamLimits

0xef3c,	// (0x0006e635) popup_image_details_window_t4_ParamLimits

0xef57,	// (0x0006e650) popup_image_details_window_t5_ParamLimits

0xf6bf,	// (0x0006edb8) popup_image_details_window_t_ParamLimits

0xb587,	// (0x0006ac80) cl_header_name_pane_ParamLimits

0xb587,	// (0x0006ac80) cl_header_name_pane

0xb8e3,	// (0x0006afdc) cl_header_name_pane_t1_ParamLimits

0xb8e3,	// (0x0006afdc) cl_header_name_pane_t1

0xb8fa,	// (0x0006aff3) cl_header_name_pane_t2_ParamLimits

0xb8fa,	// (0x0006aff3) cl_header_name_pane_t2

0xb924,	// (0x0006b01d) cl_header_name_pane_t3_ParamLimits

0xb924,	// (0x0006b01d) cl_header_name_pane_t3

0x0002,

0xfaba,	// (0x0006f1b3) cl_header_name_pane_t_ParamLimits

0xfaba,	// (0x0006f1b3) cl_header_name_pane_t

0x7f07,	// (0x00067600) navi_pane_mv_g2_ParamLimits

0x1427,	// (0x00060b20) field_vitu2_entry_pane_g1_ParamLimits

0x1433,	// (0x00060b2c) field_vitu2_entry_pane_g2_ParamLimits

0xe9e0,	// (0x0006e0d9) field_vitu2_entry_pane_g3_ParamLimits

0xe9e0,	// (0x0006e0d9) field_vitu2_entry_pane_g3

0xf8ba,	// (0x0006efb3) field_vitu2_entry_pane_g_ParamLimits

0xaa3c,	// (0x0006a135) cell_vitu2_itu_pane_g1_ParamLimits

0xaa54,	// (0x0006a14d) cell_vitu2_itu_pane_g2_ParamLimits

0xaa54,	// (0x0006a14d) cell_vitu2_itu_pane_g2

0x0001,

0xf8c6,	// (0x0006efbf) cell_vitu2_itu_pane_g_ParamLimits

0xf8c6,	// (0x0006efbf) cell_vitu2_itu_pane_g

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp05_ParamLimits

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp05

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp03

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp04

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp10_ParamLimits

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp10

0x45d5,	// (0x00063cce) bg_vkb2_func_pane_cp08

0xb531,	// (0x0006ac2a) bg_vkb2_func_pane_cp06

0xb53f,	// (0x0006ac38) bg_vkb2_func_pane_cp07

0x1a31,	// (0x0006112a) bg_vkb2_func_pane_cp11_ParamLimits

0x1a31,	// (0x0006112a) bg_vkb2_func_pane_cp11

0x1a46,	// (0x0006113f) bg_vkb2_func_pane_cp12_ParamLimits

0x1a46,	// (0x0006113f) bg_vkb2_func_pane_cp12

0x02fb,	// (0x0005f9f4) bg_vkb2_func_pane_cp09

0x146e,	// (0x00060b67) bg_vkb2_func_pane_g1

0x66f1,	// (0x00065dea) bg_vkb2_func_pane_g2

0x1476,	// (0x00060b6f) bg_vkb2_func_pane_g3

0x147e,	// (0x00060b77) bg_vkb2_func_pane_g4

0x16b4,	// (0x00060dad) bg_vkb2_func_pane_g5

0x1496,	// (0x00060b8f) bg_vkb2_func_pane_g6

0x149e,	// (0x00060b97) bg_vkb2_func_pane_g7

0x148e,	// (0x00060b87) bg_vkb2_func_pane_g8

0x66d1,	// (0x00065dca) bg_vkb2_func_pane_g9

0x0008,

0xfac1,	// (0x0006f1ba) bg_vkb2_func_pane_g

0xb832,	// (0x0006af2b) blid2_tripm_pane_g6_ParamLimits

0xb832,	// (0x0006af2b) blid2_tripm_pane_g6

0x12d3,	// (0x000609cc) mp4_progress_pane_g1

0xb88c,	// (0x0006af85) blid2_tripm_values_pane_ParamLimits

0xb88c,	// (0x0006af85) blid2_tripm_values_pane

0xb949,	// (0x0006b042) blid2_tripm_values_pane_t1

0xb957,	// (0x0006b050) blid2_tripm_values_pane_t2

0xb965,	// (0x0006b05e) blid2_tripm_values_pane_t3

0xb973,	// (0x0006b06c) blid2_tripm_values_pane_t4

0xb981,	// (0x0006b07a) blid2_tripm_values_pane_t5

0xb98f,	// (0x0006b088) blid2_tripm_values_pane_t6

0xb99d,	// (0x0006b096) blid2_tripm_values_pane_t7

0xb9ab,	// (0x0006b0a4) blid2_tripm_values_pane_t8

0xb9b9,	// (0x0006b0b2) blid2_tripm_values_pane_t9

0x0008,

0xfad4,	// (0x0006f1cd) blid2_tripm_values_pane_t

0x60c1,	// (0x000657ba) call_video_pane_t1_ParamLimits

0x60e2,	// (0x000657db) call_video_pane_t2_ParamLimits

0xf222,	// (0x0006e91b) call_video_pane_t_ParamLimits

0x41f3,	// (0x000638ec) msg_header_pane_g1_ParamLimits

0x836c,	// (0x00067a65) msg_header_pane_g2_ParamLimits

0x836c,	// (0x00067a65) msg_header_pane_g2

0x0001,

0xf41c,	// (0x0006eb15) msg_header_pane_g_ParamLimits

0xf41c,	// (0x0006eb15) msg_header_pane_g

0x5510,	// (0x00064c09) main_clock2_pane_ParamLimits

0x9abc,	// (0x000691b5) grid_clock2_toolbar_pane_ParamLimits

0x9abc,	// (0x000691b5) grid_clock2_toolbar_pane

0x9abc,	// (0x000691b5) listscroll_clock2_pane_ParamLimits

0x9abc,	// (0x000691b5) listscroll_clock2_pane

0x9b6c,	// (0x00069265) main_clock2_pane_t3_ParamLimits

0x9b6c,	// (0x00069265) main_clock2_pane_t3

0x9b7e,	// (0x00069277) main_clock2_pane_t4_ParamLimits

0x9b7e,	// (0x00069277) main_clock2_pane_t4

0x1b4f,	// (0x00061248) cell_clock2_toolbar_pane

0x1b57,	// (0x00061250) cell_clock2_toolbar_pane_cp01

0x1b57,	// (0x00061250) cell_clock2_toolbar_pane_cp02

0x1b5f,	// (0x00061258) cell_clock2_toolbar_pane_cp03

0x1b67,	// (0x00061260) list_clock2_pane

0x7b74,	// (0x0006726d) scroll_pane_cp10

0x1b6f,	// (0x00061268) list_single_clock2_pane_ParamLimits

0x1b6f,	// (0x00061268) list_single_clock2_pane

0x5da5,	// (0x0006549e) list_highlight_pane_cp08

0x1b7c,	// (0x00061275) list_single_clock2_pane_t1

0x1b8a,	// (0x00061283) list_single_clock2_pane_t2

0x0001,

0xfae7,	// (0x0006f1e0) list_single_clock2_pane_t

0x02fb,	// (0x0005f9f4) bg_button_pane_cp10

0x1b98,	// (0x00061291) cell_clock2_toolbar_pane_g1

0x8398,	// (0x00067a91) aid_main_viewer_pane_g1_ParamLimits

0x8398,	// (0x00067a91) aid_main_viewer_pane_g1

0x83a4,	// (0x00067a9d) aid_main_viewer_pane_g2_ParamLimits

0x83a4,	// (0x00067a9d) aid_main_viewer_pane_g2

0x83b0,	// (0x00067aa9) aid_main_viewer_pane_g3_ParamLimits

0x83b0,	// (0x00067aa9) aid_main_viewer_pane_g3

0x83c1,	// (0x00067aba) aid_main_viewer_pane_g4_ParamLimits

0x83c1,	// (0x00067aba) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x0006eb26) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x0006eb26) aid_main_viewer_pane_g

0x8e48,	// (0x00068541) main_calc_pane_ParamLimits

0x8e55,	// (0x0006854e) main_dialer2_pane_ParamLimits

0x02fb,	// (0x0005f9f4) main_cam6_pane

0x02fb,	// (0x0005f9f4) main_vid6_pane

0x9ac8,	// (0x000691c1) listscroll_gen_pane_cp06_ParamLimits

0x9ac8,	// (0x000691c1) listscroll_gen_pane_cp06

0x9b90,	// (0x00069289) main_clock2_pane_t5_ParamLimits

0x9b90,	// (0x00069289) main_clock2_pane_t5

0x9bdd,	// (0x000692d6) aid_call2_pane_cp10_ParamLimits

0x9bef,	// (0x000692e8) aid_call_pane_cp10_ParamLimits

0x7d40,	// (0x00067439) popup_clock_analogue_window_cp10_g1_ParamLimits

0x7d40,	// (0x00067439) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9c01,	// (0x000692fa) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9c01,	// (0x000692fa) popup_clock_analogue_window_cp10_g4_ParamLimits

0x7d40,	// (0x00067439) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf774,	// (0x0006ee6d) popup_clock_analogue_window_cp10_g_ParamLimits

0x9c17,	// (0x00069310) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa314,	// (0x00069a0d) cell_dialer2_keypad_pane_g2_ParamLimits

0xa314,	// (0x00069a0d) cell_dialer2_keypad_pane_g2

0x0001,

0xf859,	// (0x0006ef52) cell_dialer2_keypad_pane_g_ParamLimits

0xf859,	// (0x0006ef52) cell_dialer2_keypad_pane_g

0xa330,	// (0x00069a29) cell_dialer2_keypad_pane_t1

0xad80,	// (0x0006a479) main_cset_text2_pane_ParamLimits

0xad80,	// (0x0006a479) main_cset_text2_pane

0x18db,	// (0x00060fd4) area_vitu2_query_pane_g1_ParamLimits

0x4500,	// (0x00063bf9) area_vitu2_query_pane_g2_ParamLimits

0xfa04,	// (0x0006f0fd) area_vitu2_query_pane_g_ParamLimits

0x45b1,	// (0x00063caa) area_vitu2_query_pane_t7_ParamLimits

0x45b1,	// (0x00063caa) area_vitu2_query_pane_t7

0xb531,	// (0x0006ac2a) bg_button_pane_cp018_ParamLimits

0xb53f,	// (0x0006ac38) bg_button_pane_cp021_ParamLimits

0x45d5,	// (0x00063cce) bg_button_pane_cp022_ParamLimits

0x45d5,	// (0x00063cce) bg_vkb2_func_pane_cp08_ParamLimits

0xb531,	// (0x0006ac2a) bg_vkb2_func_pane_cp06_ParamLimits

0xb53f,	// (0x0006ac38) bg_vkb2_func_pane_cp07_ParamLimits

0x45e6,	// (0x00063cdf) input_focus_pane_cp09_ParamLimits

0xb9c7,	// (0x0006b0c0) cam6_autofocus_pane_ParamLimits

0xb9c7,	// (0x0006b0c0) cam6_autofocus_pane

0xb9e9,	// (0x0006b0e2) cam6_image_uncrop_pane_ParamLimits

0xb9e9,	// (0x0006b0e2) cam6_image_uncrop_pane

0xba16,	// (0x0006b10f) cam6_indi_pane_ParamLimits

0xba16,	// (0x0006b10f) cam6_indi_pane

0xba30,	// (0x0006b129) cam6_mode_pane_ParamLimits

0xba30,	// (0x0006b129) cam6_mode_pane

0xba44,	// (0x0006b13d) cam6_timer_pane_ParamLimits

0xba44,	// (0x0006b13d) cam6_timer_pane

0xba55,	// (0x0006b14e) cam6_zoom_pane_ParamLimits

0xba55,	// (0x0006b14e) cam6_zoom_pane

0xba6d,	// (0x0006b166) cam6_mode_pane_g1_ParamLimits

0xba6d,	// (0x0006b166) cam6_mode_pane_g1

0xba79,	// (0x0006b172) cam6_mode_pane_g2_ParamLimits

0xba79,	// (0x0006b172) cam6_mode_pane_g2

0xba85,	// (0x0006b17e) cam6_mode_pane_g3_ParamLimits

0xba85,	// (0x0006b17e) cam6_mode_pane_g3

0xba91,	// (0x0006b18a) cam6_mode_pane_g4_ParamLimits

0xba91,	// (0x0006b18a) cam6_mode_pane_g4

0x0003,

0xfaec,	// (0x0006f1e5) cam6_mode_pane_g_ParamLimits

0xfaec,	// (0x0006f1e5) cam6_mode_pane_g

0xf029,	// (0x0006e722) bg_tb_trans_pane_cp08_ParamLimits

0xf029,	// (0x0006e722) bg_tb_trans_pane_cp08

0x1ba0,	// (0x00061299) cam6_battery_pane_ParamLimits

0x1ba0,	// (0x00061299) cam6_battery_pane

0x1bb6,	// (0x000612af) cam6_indi_pane_g1_ParamLimits

0x1bb6,	// (0x000612af) cam6_indi_pane_g1

0x1bc8,	// (0x000612c1) cam6_indi_pane_g2_ParamLimits

0x1bc8,	// (0x000612c1) cam6_indi_pane_g2

0x1bda,	// (0x000612d3) cam6_indi_pane_g3_ParamLimits

0x1bda,	// (0x000612d3) cam6_indi_pane_g3

0x0002,

0xfaf5,	// (0x0006f1ee) cam6_indi_pane_g_ParamLimits

0xfaf5,	// (0x0006f1ee) cam6_indi_pane_g

0x1bec,	// (0x000612e5) cam6_indi_pane_t1_ParamLimits

0x1bec,	// (0x000612e5) cam6_indi_pane_t1

0xa8aa,	// (0x00069fa3) cam6_autofocus_pane_g1

0xa8b2,	// (0x00069fab) cam6_autofocus_pane_g2

0xa8ba,	// (0x00069fb3) cam6_autofocus_pane_g3

0xa8c2,	// (0x00069fbb) cam6_autofocus_pane_g4

0x0003,

0xfafc,	// (0x0006f1f5) cam6_autofocus_pane_g

0x1c12,	// (0x0006130b) cam6_timer_pane_g1

0x1c1a,	// (0x00061313) cam6_timer_pane_t1

0x1c28,	// (0x00061321) cam6_zoom_cont_pane

0x1c30,	// (0x00061329) cam6_zoom_pane_g1

0x1c38,	// (0x00061331) cam6_zoom_pane_g2

0xba9d,	// (0x0006b196) cam6_zoom_pane_g3

0x0002,

0xfb05,	// (0x0006f1fe) cam6_zoom_pane_g

0x5f63,	// (0x0006565c) cam6_battery_pane_g1

0x5f63,	// (0x0006565c) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x0006ead6) cam6_battery_pane_g

0x1c40,	// (0x00061339) cam6_zoom_cont_pane_g1

0x1c49,	// (0x00061342) cam6_zoom_cont_pane_g2

0x1c52,	// (0x0006134b) cam6_zoom_cont_pane_g3

0x0002,

0xfb0c,	// (0x0006f205) cam6_zoom_cont_pane_g

0xbaba,	// (0x0006b1b3) cam6_mode_pane_cp_ParamLimits

0xbaba,	// (0x0006b1b3) cam6_mode_pane_cp

0xba55,	// (0x0006b14e) cam6_zoom_pane_cp_ParamLimits

0xba55,	// (0x0006b14e) cam6_zoom_pane_cp

0xbace,	// (0x0006b1c7) vid6_image_uncrop_cif_pane_ParamLimits

0xbace,	// (0x0006b1c7) vid6_image_uncrop_cif_pane

0xbafa,	// (0x0006b1f3) vid6_image_uncrop_nhd_pane_ParamLimits

0xbafa,	// (0x0006b1f3) vid6_image_uncrop_nhd_pane

0xb9e9,	// (0x0006b0e2) vid6_image_uncrop_vga_pane_ParamLimits

0xb9e9,	// (0x0006b0e2) vid6_image_uncrop_vga_pane

0xbb17,	// (0x0006b210) vid6_image_uncrop_wvga_pane_ParamLimits

0xbb17,	// (0x0006b210) vid6_image_uncrop_wvga_pane

0xbb34,	// (0x0006b22d) vid6_indi_pane_ParamLimits

0xbb34,	// (0x0006b22d) vid6_indi_pane

0xf029,	// (0x0006e722) bg_tb_trans_pane_cp09_ParamLimits

0xf029,	// (0x0006e722) bg_tb_trans_pane_cp09

0x1c6a,	// (0x00061363) cam6_battery_pane_cp_ParamLimits

0x1c6a,	// (0x00061363) cam6_battery_pane_cp

0x1c76,	// (0x0006136f) vid6_indi_pane_g1_ParamLimits

0x1c76,	// (0x0006136f) vid6_indi_pane_g1

0x1c88,	// (0x00061381) vid6_indi_pane_g2_ParamLimits

0x1c88,	// (0x00061381) vid6_indi_pane_g2

0x1c9a,	// (0x00061393) vid6_indi_pane_g3_ParamLimits

0x1c9a,	// (0x00061393) vid6_indi_pane_g3

0x1caf,	// (0x000613a8) vid6_indi_pane_g4_ParamLimits

0x1caf,	// (0x000613a8) vid6_indi_pane_g4

0x1cc4,	// (0x000613bd) vid6_indi_pane_g5_ParamLimits

0x1cc4,	// (0x000613bd) vid6_indi_pane_g5

0x0004,

0xfb13,	// (0x0006f20c) vid6_indi_pane_g_ParamLimits

0xfb13,	// (0x0006f20c) vid6_indi_pane_g

0x1cde,	// (0x000613d7) vid6_indi_pane_t1_ParamLimits

0x1cde,	// (0x000613d7) vid6_indi_pane_t1

0x1cf4,	// (0x000613ed) vid6_indi_pane_t2_ParamLimits

0x1cf4,	// (0x000613ed) vid6_indi_pane_t2

0x1d1c,	// (0x00061415) vid6_indi_pane_t3_ParamLimits

0x1d1c,	// (0x00061415) vid6_indi_pane_t3

0x1d44,	// (0x0006143d) vid6_indi_pane_t4_ParamLimits

0x1d44,	// (0x0006143d) vid6_indi_pane_t4

0x0003,

0xfb1e,	// (0x0006f217) vid6_indi_pane_t_ParamLimits

0xfb1e,	// (0x0006f217) vid6_indi_pane_t

0x1d68,	// (0x00061461) wait_bar_pane_cp08

0xbb57,	// (0x0006b250) main_cset_text2_pane_t1_ParamLimits

0xbb57,	// (0x0006b250) main_cset_text2_pane_t1

0xbaa5,	// (0x0006b19e) listscroll_gen_pane_cp06_t1_ParamLimits

0xbaa5,	// (0x0006b19e) listscroll_gen_pane_cp06_t1

0x02fb,	// (0x0005f9f4) main_cam6_set_pane

0x5333,	// (0x00064a2c) bg_tb_trans_pane_cp06_ParamLimits

0xa764,	// (0x00069e5d) cam4_indicators_pane_g1_ParamLimits

0xa775,	// (0x00069e6e) cam4_indicators_pane_g2_ParamLimits

0xf896,	// (0x0006ef8f) cam4_indicators_pane_g_ParamLimits

0xa78d,	// (0x00069e86) cam4_indicators_pane_t1_ParamLimits

0x52da,	// (0x000649d3) bg_tb_trans_pane_cp07_ParamLimits

0xa83e,	// (0x00069f37) vid4_indicators_pane_g1_ParamLimits

0xa852,	// (0x00069f4b) vid4_indicators_pane_g2_ParamLimits

0xa866,	// (0x00069f5f) vid4_indicators_pane_g3_ParamLimits

0xa877,	// (0x00069f70) vid4_indicators_pane_g4_ParamLimits

0xf8a8,	// (0x0006efa1) vid4_indicators_pane_g_ParamLimits

0xa893,	// (0x00069f8c) vid4_indicators_pane_t1_ParamLimits

0xb66f,	// (0x0006ad68) vid4_progress_pane_g1_ParamLimits

0xb67f,	// (0x0006ad78) vid4_progress_pane_g2_ParamLimits

0xb68f,	// (0x0006ad88) vid4_progress_pane_g3_ParamLimits

0xb6a1,	// (0x0006ad9a) vid4_progress_pane_g4_ParamLimits

0xfa4f,	// (0x0006f148) vid4_progress_pane_g_ParamLimits

0xb6b9,	// (0x0006adb2) vid4_progress_pane_t1_ParamLimits

0xb6cf,	// (0x0006adc8) vid4_progress_pane_t2_ParamLimits

0xb6e4,	// (0x0006addd) vid4_progress_pane_t3_ParamLimits

0xfa5a,	// (0x0006f153) vid4_progress_pane_t_ParamLimits

0xb6fa,	// (0x0006adf3) wait_bar_pane_cp07_ParamLimits

0xbb8e,	// (0x0006b287) main_cam6_set_pane_g2_ParamLimits

0xbb8e,	// (0x0006b287) main_cam6_set_pane_g2

0xbb9a,	// (0x0006b293) main_cset6_listscroll_pane_ParamLimits

0xbb9a,	// (0x0006b293) main_cset6_listscroll_pane

0xbbc5,	// (0x0006b2be) main_cset6_slider_pane_ParamLimits

0xbbc5,	// (0x0006b2be) main_cset6_slider_pane

0xbbd1,	// (0x0006b2ca) main_cset6_text2_pane_ParamLimits

0xbbd1,	// (0x0006b2ca) main_cset6_text2_pane

0x1d77,	// (0x00061470) main_cset6_text_pane

0x1d7f,	// (0x00061478) main_cset_list_pane_copy1_ParamLimits

0x1d7f,	// (0x00061478) main_cset_list_pane_copy1

0x1d8f,	// (0x00061488) scroll_pane_cp028_copy1

0xbbe4,	// (0x0006b2dd) cset_list_set_pane_copy1

0xbbfa,	// (0x0006b2f3) aid_position_infowindow_above_copy1

0xbc02,	// (0x0006b2fb) aid_position_infowindow_below_copy1

0xbc0a,	// (0x0006b303) cset_list_set_pane_g1_copy1

0x461c,	// (0x00063d15) cset_list_set_pane_g3_copy1_ParamLimits

0x461c,	// (0x00063d15) cset_list_set_pane_g3_copy1

0x462b,	// (0x00063d24) cset_list_set_pane_t1_copy1_ParamLimits

0x462b,	// (0x00063d24) cset_list_set_pane_t1_copy1

0x52da,	// (0x000649d3) list_highlight_pane_cp021_copy1_ParamLimits

0x52da,	// (0x000649d3) list_highlight_pane_cp021_copy1

0x1d98,	// (0x00061491) cset6_slider_pane_ParamLimits

0x1d98,	// (0x00061491) cset6_slider_pane

0x1dc4,	// (0x000614bd) main_cset6_slider_pane_g1_ParamLimits

0x1dc4,	// (0x000614bd) main_cset6_slider_pane_g1

0xbc12,	// (0x0006b30b) main_cset6_slider_pane_g2_ParamLimits

0xbc12,	// (0x0006b30b) main_cset6_slider_pane_g2

0x1dec,	// (0x000614e5) main_cset6_slider_pane_g3_ParamLimits

0x1dec,	// (0x000614e5) main_cset6_slider_pane_g3

0xbc3a,	// (0x0006b333) main_cset6_slider_pane_g4_ParamLimits

0xbc3a,	// (0x0006b333) main_cset6_slider_pane_g4

0xbc46,	// (0x0006b33f) main_cset6_slider_pane_g5_ParamLimits

0xbc46,	// (0x0006b33f) main_cset6_slider_pane_g5

0x159d,	// (0x00060c96) main_cset6_slider_pane_g7_ParamLimits

0x159d,	// (0x00060c96) main_cset6_slider_pane_g7

0x15a9,	// (0x00060ca2) main_cset6_slider_pane_g8_ParamLimits

0x15a9,	// (0x00060ca2) main_cset6_slider_pane_g8

0xbc54,	// (0x0006b34d) main_cset6_slider_pane_g9_ParamLimits

0xbc54,	// (0x0006b34d) main_cset6_slider_pane_g9

0xbc60,	// (0x0006b359) main_cset6_slider_pane_g10_ParamLimits

0xbc60,	// (0x0006b359) main_cset6_slider_pane_g10

0xbc6c,	// (0x0006b365) main_cset6_slider_pane_g11_ParamLimits

0xbc6c,	// (0x0006b365) main_cset6_slider_pane_g11

0xbc78,	// (0x0006b371) main_cset6_slider_pane_g12_ParamLimits

0xbc78,	// (0x0006b371) main_cset6_slider_pane_g12

0x15b5,	// (0x00060cae) main_cset6_slider_pane_g13_ParamLimits

0x15b5,	// (0x00060cae) main_cset6_slider_pane_g13

0x15c1,	// (0x00060cba) main_cset6_slider_pane_g14_ParamLimits

0x15c1,	// (0x00060cba) main_cset6_slider_pane_g14

0xbc84,	// (0x0006b37d) main_cset6_slider_pane_g15_ParamLimits

0xbc84,	// (0x0006b37d) main_cset6_slider_pane_g15

0xbc9c,	// (0x0006b395) main_cset6_slider_pane_g16_ParamLimits

0xbc9c,	// (0x0006b395) main_cset6_slider_pane_g16

0xbcaa,	// (0x0006b3a3) main_cset6_slider_pane_g17_ParamLimits

0xbcaa,	// (0x0006b3a3) main_cset6_slider_pane_g17

0x0011,

0xfb27,	// (0x0006f220) main_cset6_slider_pane_g_ParamLimits

0xfb27,	// (0x0006f220) main_cset6_slider_pane_g

0x1e04,	// (0x000614fd) main_cset6_slider_pane_t1_ParamLimits

0x1e04,	// (0x000614fd) main_cset6_slider_pane_t1

0xbcc4,	// (0x0006b3bd) main_cset6_slider_pane_t2_ParamLimits

0xbcc4,	// (0x0006b3bd) main_cset6_slider_pane_t2

0xbcef,	// (0x0006b3e8) main_cset6_slider_pane_t3_ParamLimits

0xbcef,	// (0x0006b3e8) main_cset6_slider_pane_t3

0xbd1a,	// (0x0006b413) main_cset6_slider_pane_t4_ParamLimits

0xbd1a,	// (0x0006b413) main_cset6_slider_pane_t4

0xbd45,	// (0x0006b43e) main_cset6_slider_pane_t5_ParamLimits

0xbd45,	// (0x0006b43e) main_cset6_slider_pane_t5

0x1e45,	// (0x0006153e) main_cset6_slider_pane_t7_ParamLimits

0x1e45,	// (0x0006153e) main_cset6_slider_pane_t7

0xbd72,	// (0x0006b46b) main_cset6_slider_pane_t8_ParamLimits

0xbd72,	// (0x0006b46b) main_cset6_slider_pane_t8

0xbd96,	// (0x0006b48f) main_cset6_slider_pane_t9_ParamLimits

0xbd96,	// (0x0006b48f) main_cset6_slider_pane_t9

0xbdba,	// (0x0006b4b3) main_cset6_slider_pane_t10_ParamLimits

0xbdba,	// (0x0006b4b3) main_cset6_slider_pane_t10

0xbdde,	// (0x0006b4d7) main_cset6_slider_pane_t11_ParamLimits

0xbdde,	// (0x0006b4d7) main_cset6_slider_pane_t11

0x1e7b,	// (0x00061574) main_cset6_slider_pane_t14_ParamLimits

0x1e7b,	// (0x00061574) main_cset6_slider_pane_t14

0x1eb4,	// (0x000615ad) main_cset6_slider_pane_t15_ParamLimits

0x1eb4,	// (0x000615ad) main_cset6_slider_pane_t15

0x000b,

0xfb4c,	// (0x0006f245) main_cset6_slider_pane_t_ParamLimits

0xfb4c,	// (0x0006f245) main_cset6_slider_pane_t

0x0f71,	// (0x0006066a) cset_slider_pane_g1_copy1

0x1eed,	// (0x000615e6) cset_slider_pane_g2_copy1

0x1ef6,	// (0x000615ef) cset_slider_pane_g3_copy1

0x02fb,	// (0x0005f9f4) bg_popup_sub_pane_cp011_copy1

0x1f08,	// (0x00061601) main_cset_text_pane_g1_copy1

0x1703,	// (0x00060dfc) main_cset_text_pane_t1_copy1

0x1711,	// (0x00060e0a) main_cset_text_pane_t2_copy1

0x171f,	// (0x00060e18) main_cset_text_pane_t3_copy1

0x172d,	// (0x00060e26) main_cset_text_pane_t4_copy1

0x173b,	// (0x00060e34) main_cset_text_pane_t5_copy1

0x1f10,	// (0x00061609) main_cset_text_pane_t6_copy1

0x1f1e,	// (0x00061617) main_cset_text_pane_t7_copy1

0xbe04,	// (0x0006b4fd) main_cset_text2_pane_t1_copy1

0x52da,	// (0x000649d3) main_ncimui_pane

0x8eb2,	// (0x000685ab) popup_query_ncimui_window_ParamLimits

0x8eb2,	// (0x000685ab) popup_query_ncimui_window

0x945f,	// (0x00068b58) field_cale_ev2_pane_g4_ParamLimits

0x945f,	// (0x00068b58) field_cale_ev2_pane_g4

0x9ff4,	// (0x000696ed) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9ff4,	// (0x000696ed) cell_video_dialer_keypad_pane_g2

0x0001,

0xf830,	// (0x0006ef29) cell_video_dialer_keypad_pane_g_ParamLimits

0xf830,	// (0x0006ef29) cell_video_dialer_keypad_pane_g

0xa00c,	// (0x00069705) cell_video_dialer_keypad_pane_t1

0x02fb,	// (0x0005f9f4) bg_popup_window_pane_cp012

0xe85f,	// (0x0006df58) heading_pane_cp06

0x1f4a,	// (0x00061643) ncim_query_content_pane

0x02fb,	// (0x0005f9f4) bg_popup_heading_pane_cp01

0x1f52,	// (0x0006164b) ncim_heading_pane_t1

0x1f60,	// (0x00061659) ncim_indicator_popup_pane

0x1f72,	// (0x0006166b) ncim_query_button_pane

0x1f86,	// (0x0006167f) ncim_query_content_pane_t1

0x1f98,	// (0x00061691) ncim_query_content_pane_t2

0x0005,

0xfb90,	// (0x0006f289) ncim_query_content_pane_t

0x1fd2,	// (0x000616cb) ncim_query_list_pane

0x1fe4,	// (0x000616dd) ncim_query_popup_pane

0x1f60,	// (0x00061659) ncim_indicator_popup_pane_ParamLimits

0xbf58,	// (0x0006b651) ncim_query_content_pane_g1_ParamLimits

0xbf58,	// (0x0006b651) ncim_query_content_pane_g1

0x1f86,	// (0x0006167f) ncim_query_content_pane_t1_ParamLimits

0x1f98,	// (0x00061691) ncim_query_content_pane_t2_ParamLimits

0xbf64,	// (0x0006b65d) ncim_query_content_pane_t3_ParamLimits

0xbf64,	// (0x0006b65d) ncim_query_content_pane_t3

0xbf81,	// (0x0006b67a) ncim_query_content_pane_t4_ParamLimits

0xbf81,	// (0x0006b67a) ncim_query_content_pane_t4

0xbf9e,	// (0x0006b697) ncim_query_content_pane_t5_ParamLimits

0xbf9e,	// (0x0006b697) ncim_query_content_pane_t5

0x1faa,	// (0x000616a3) ncim_query_content_pane_t6_ParamLimits

0x1faa,	// (0x000616a3) ncim_query_content_pane_t6

0xfb90,	// (0x0006f289) ncim_query_content_pane_t_ParamLimits

0x1fd2,	// (0x000616cb) ncim_query_list_pane_ParamLimits

0x1fe4,	// (0x000616dd) ncim_query_popup_pane_ParamLimits

0x1ff8,	// (0x000616f1) wait_bar_pane_cp04

0x02fb,	// (0x0005f9f4) input_focus_pane_cp011

0x2000,	// (0x000616f9) ncim_query_popup_pane_t1

0x200e,	// (0x00061707) ncim_list_query_list_pane_ParamLimits

0x200e,	// (0x00061707) ncim_list_query_list_pane

0x02fb,	// (0x0005f9f4) bg_button_pane_cp027

0x201b,	// (0x00061714) ncim_query_button_pane_g1

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp012

0x2025,	// (0x0006171e) ncim_list_query_list_pane_g1

0x202d,	// (0x00061726) ncim_list_query_list_pane_t1

0xa781,	// (0x00069e7a) cam4_indicators_pane_g3_ParamLimits

0xa781,	// (0x00069e7a) cam4_indicators_pane_g3

0xa883,	// (0x00069f7c) vid4_indicators_pane_g5_ParamLimits

0xa883,	// (0x00069f7c) vid4_indicators_pane_g5

0xb6ad,	// (0x0006ada6) vid4_progress_pane_g5_ParamLimits

0xb6ad,	// (0x0006ada6) vid4_progress_pane_g5

0xbe44,	// (0x0006b53d) main_ncimui_pane_g1

0xbeac,	// (0x0006b5a5) ncimui_group_query_pane_ParamLimits

0xbeac,	// (0x0006b5a5) ncimui_group_query_pane

0xbef4,	// (0x0006b5ed) ncimui_list_pane_ParamLimits

0xbef4,	// (0x0006b5ed) ncimui_list_pane

0xbf1b,	// (0x0006b614) ncimui_text_pane_ParamLimits

0xbf1b,	// (0x0006b614) ncimui_text_pane

0xbfbb,	// (0x0006b6b4) ncimui_text_pane_t1_ParamLimits

0xbfbb,	// (0x0006b6b4) ncimui_text_pane_t1

0x203b,	// (0x00061734) ncimui_list_single_graphic_pane_ParamLimits

0x203b,	// (0x00061734) ncimui_list_single_graphic_pane

0xbfda,	// (0x0006b6d3) ncimui_query_pane_ParamLimits

0xbfda,	// (0x0006b6d3) ncimui_query_pane

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp013

0x204b,	// (0x00061744) ncim_list_query_list_pane_t1_copy1

0x2059,	// (0x00061752) ncim_list_single_graphic_pane_g1

0xbfed,	// (0x0006b6e6) ncim_query_button_pane_cp01

0xbff9,	// (0x0006b6f2) ncim_query_entry_pane_ParamLimits

0xbff9,	// (0x0006b6f2) ncim_query_entry_pane

0xc00c,	// (0x0006b705) ncimui_query_pane_g1

0xc018,	// (0x0006b711) ncimui_query_pane_t1_ParamLimits

0xc018,	// (0x0006b711) ncimui_query_pane_t1

0x52da,	// (0x000649d3) input_focus_pane_cp012

0x2061,	// (0x0006175a) ncim_query_entry_pane_t1

0x5510,	// (0x00064c09) main_im_pane_ParamLimits

0x52da,	// (0x000649d3) main_mobtv_pane_ParamLimits

0x52da,	// (0x000649d3) main_mobtv_pane

0xbcb8,	// (0x0006b3b1) main_cset6_slider_pane_g18_ParamLimits

0xbcb8,	// (0x0006b3b1) main_cset6_slider_pane_g18

0x1df8,	// (0x000614f1) main_cset6_slider_pane_g19_ParamLimits

0x1df8,	// (0x000614f1) main_cset6_slider_pane_g19

0xe9e0,	// (0x0006e0d9) bg_main_mobtv_pane_ParamLimits

0xe9e0,	// (0x0006e0d9) bg_main_mobtv_pane

0xc031,	// (0x0006b72a) main_mobtv_info_pane

0xc03c,	// (0x0006b735) main_mobtv_loading_pane_ParamLimits

0xc03c,	// (0x0006b735) main_mobtv_loading_pane

0x2073,	// (0x0006176c) main_mobtv_pg_channel_list_pane

0x207d,	// (0x00061776) main_mobtv_pg_hdr_pane

0xc049,	// (0x0006b742) main_mobtv_programe_curr_pane_ParamLimits

0xc049,	// (0x0006b742) main_mobtv_programe_curr_pane

0xc056,	// (0x0006b74f) main_mobtv_programe_next_pane_ParamLimits

0xc056,	// (0x0006b74f) main_mobtv_programe_next_pane

0x2086,	// (0x0006177f) popup_mobtv_noti_window

0x5f63,	// (0x0006565c) main_tv_pg_hdr_pane_g1

0x208e,	// (0x00061787) main_tv_pg_hdr_pane_g2

0x2096,	// (0x0006178f) main_tv_pg_hdr_pane_g3

0x209e,	// (0x00061797) main_tv_pg_hdr_pane_g4

0x20a6,	// (0x0006179f) main_tv_pg_hdr_pane_g5

0x20b0,	// (0x000617a9) main_tv_pg_hdr_pane_g6

0x20ba,	// (0x000617b3) main_tv_pg_hdr_pane_g7

0x20c4,	// (0x000617bd) main_tv_pg_hdr_pane_g8

0x20ce,	// (0x000617c7) main_tv_pg_hdr_pane_g9

0x20d8,	// (0x000617d1) main_tv_pg_hdr_pane_g10

0x20e2,	// (0x000617db) main_tv_pg_hdr_pane_g11

0x000a,

0xfb9d,	// (0x0006f296) main_tv_pg_hdr_pane_g

0x20ec,	// (0x000617e5) main_tv_pg_hdr_pane_t1

0x20fa,	// (0x000617f3) main_tv_pg_hdr_pane_t2

0x2108,	// (0x00061801) main_tv_pg_hdr_pane_t3

0x2118,	// (0x00061811) main_tv_pg_hdr_pane_t4

0x2128,	// (0x00061821) main_tv_pg_hdr_pane_t5

0x0004,

0xfbb4,	// (0x0006f2ad) main_tv_pg_hdr_pane_t

0x2138,	// (0x00061831) single_mobtv_pg_channel_pane_ParamLimits

0x2138,	// (0x00061831) single_mobtv_pg_channel_pane

0x214a,	// (0x00061843) single_mobtv_pg_channel_table_pane

0x743b,	// (0x00066b34) single_mobtv_pg_channel_thumb_pane

0x2153,	// (0x0006184c) single_tv_pg_channel_pane_g1

0x215c,	// (0x00061855) single_tv_pg_channel_pane_g2

0x0001,

0xfbbf,	// (0x0006f2b8) single_tv_pg_channel_pane_g

0x5333,	// (0x00064a2c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x5333,	// (0x00064a2c) bg_single_mobtv_pg_channel_thumb_pane

0x2165,	// (0x0006185e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2165,	// (0x0006185e) single_mobtv_pg_channel_thumb_pane_g1

0x2173,	// (0x0006186c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2173,	// (0x0006186c) single_mobtv_pg_channel_thumb_pane_g2

0x217f,	// (0x00061878) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x217f,	// (0x00061878) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbc4,	// (0x0006f2bd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbc4,	// (0x0006f2bd) single_mobtv_pg_channel_thumb_pane_g

0x218b,	// (0x00061884) single_mobtv_pg_channel_thumb_pane_t1

0x2199,	// (0x00061892) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbcb,	// (0x0006f2c4) single_mobtv_pg_channel_thumb_pane_t

0x5f63,	// (0x0006565c) bg_single_mobtv_pg_channel_table_pane_g1

0x5f63,	// (0x0006565c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x0006ead6) bg_single_mobtv_pg_channel_table_pane_g

0x21a7,	// (0x000618a0) single_mobtv_pg_channel_table_pane_t1

0x21b5,	// (0x000618ae) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbd0,	// (0x0006f2c9) single_mobtv_pg_channel_table_pane_t

0xc06b,	// (0x0006b764) main_mobtv_info_pane_g1_ParamLimits

0xc06b,	// (0x0006b764) main_mobtv_info_pane_g1

0xc087,	// (0x0006b780) main_mobtv_info_pane_t1_ParamLimits

0xc087,	// (0x0006b780) main_mobtv_info_pane_t1

0xc0ff,	// (0x0006b7f8) main_mobtv_info_pane_t2_ParamLimits

0xc0ff,	// (0x0006b7f8) main_mobtv_info_pane_t2

0x0002,

0xfbda,	// (0x0006f2d3) main_mobtv_info_pane_t_ParamLimits

0xfbda,	// (0x0006f2d3) main_mobtv_info_pane_t

0xc18e,	// (0x0006b887) wait_bar_pane_cp05

0xc1a0,	// (0x0006b899) main_mobtv_loading_pane_g1_ParamLimits

0xc1a0,	// (0x0006b899) main_mobtv_loading_pane_g1

0xc1ae,	// (0x0006b8a7) main_mobtv_loading_pane_g2_ParamLimits

0xc1ae,	// (0x0006b8a7) main_mobtv_loading_pane_g2

0xc1ba,	// (0x0006b8b3) main_mobtv_loading_pane_g3_ParamLimits

0xc1ba,	// (0x0006b8b3) main_mobtv_loading_pane_g3

0x0002,

0xfbe1,	// (0x0006f2da) main_mobtv_loading_pane_g_ParamLimits

0xfbe1,	// (0x0006f2da) main_mobtv_loading_pane_g

0x21c3,	// (0x000618bc) main_mobtv_loading_pane_t1_ParamLimits

0x21c3,	// (0x000618bc) main_mobtv_loading_pane_t1

0x21db,	// (0x000618d4) main_mobtv_loading_pane_t2_ParamLimits

0x21db,	// (0x000618d4) main_mobtv_loading_pane_t2

0x0001,

0xfbe8,	// (0x0006f2e1) main_mobtv_loading_pane_t_ParamLimits

0xfbe8,	// (0x0006f2e1) main_mobtv_loading_pane_t

0xc1c8,	// (0x0006b8c1) wait_bar_pane_cp06_ParamLimits

0xc1c8,	// (0x0006b8c1) wait_bar_pane_cp06

0x21ff,	// (0x000618f8) main_mobtv_programe_curr_pane_t1

0x220d,	// (0x00061906) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbed,	// (0x0006f2e6) main_mobtv_programe_curr_pane_t

0x221b,	// (0x00061914) main_mobtv_programe_next_pane_t1

0x2229,	// (0x00061922) main_mobtv_programe_next_pane_t2

0x2237,	// (0x00061930) main_mobtv_programe_next_pane_t3

0x0002,

0xfbf2,	// (0x0006f2eb) main_mobtv_programe_next_pane_t

0x02fb,	// (0x0005f9f4) bg_popup_mobtv_noti_window_pane

0x2245,	// (0x0006193e) popup_mobtv_noti_window_g1

0x224d,	// (0x00061946) popup_mobtv_noti_window_t1

0x225b,	// (0x00061954) popup_mobtv_noti_window_t2

0x0001,

0xfbf9,	// (0x0006f2f2) popup_mobtv_noti_window_t

0x5f63,	// (0x0006565c) bg_popup_mobtv_noti_window_pane_g1

0x02fb,	// (0x0005f9f4) sc_clock_pane

0x02fb,	// (0x0005f9f4) main_fs_bigclock_pane

0xb87a,	// (0x0006af73) blid2_tripm_pane_t4_ParamLimits

0xb87a,	// (0x0006af73) blid2_tripm_pane_t4

0xc1d4,	// (0x0006b8cd) sc_clock_pane_g1_ParamLimits

0xc1d4,	// (0x0006b8cd) sc_clock_pane_g1

0xc1e2,	// (0x0006b8db) sc_clock_pane_t1_ParamLimits

0xc1e2,	// (0x0006b8db) sc_clock_pane_t1

0xc1f5,	// (0x0006b8ee) sc_clock_pane_t2_ParamLimits

0xc1f5,	// (0x0006b8ee) sc_clock_pane_t2

0xc207,	// (0x0006b900) sc_clock_pane_t3_ParamLimits

0xc207,	// (0x0006b900) sc_clock_pane_t3

0x0004,

0xfbfe,	// (0x0006f2f7) sc_clock_pane_t_ParamLimits

0xfbfe,	// (0x0006f2f7) sc_clock_pane_t

0xcb1f,	// (0x0006c218) main_fs_bigclock_indicator_pane_ParamLimits

0xcb1f,	// (0x0006c218) main_fs_bigclock_indicator_pane

0xc28a,	// (0x0006b983) main_fs_bigclock_pane_g1_ParamLimits

0xc28a,	// (0x0006b983) main_fs_bigclock_pane_g1

0xcb2b,	// (0x0006c224) main_fs_bigclock_pane_t1_ParamLimits

0xcb2b,	// (0x0006c224) main_fs_bigclock_pane_t1

0xcb3d,	// (0x0006c236) main_fs_bigclock_pane_t2_ParamLimits

0xcb3d,	// (0x0006c236) main_fs_bigclock_pane_t2

0xcb51,	// (0x0006c24a) main_fs_bigclock_pane_t3_ParamLimits

0xcb51,	// (0x0006c24a) main_fs_bigclock_pane_t3

0x0002,

0xfd8f,	// (0x0006f488) main_fs_bigclock_pane_t_ParamLimits

0xfd8f,	// (0x0006f488) main_fs_bigclock_pane_t

0x2dcf,	// (0x000624c8) main_fs_bigclock_indicator_pane_g1

0x1f7a,	// (0x00061673) ncim_query_content_pane_g2_ParamLimits

0x1f7a,	// (0x00061673) ncim_query_content_pane_g2

0x0001,

0xfb8b,	// (0x0006f284) ncim_query_content_pane_g_ParamLimits

0xfb8b,	// (0x0006f284) ncim_query_content_pane_g

0xc21b,	// (0x0006b914) sc_clock_pane_t4_ParamLimits

0xc21b,	// (0x0006b914) sc_clock_pane_t4

0x52da,	// (0x000649d3) main_radioblah_pane

0xa627,	// (0x00069d20) cell_call4_button_pane_t1_copy1_ParamLimits

0xa627,	// (0x00069d20) cell_call4_button_pane_t1_copy1

0xbe5e,	// (0x0006b557) main_ncimui_pane_t1_ParamLimits

0xbe5e,	// (0x0006b557) main_ncimui_pane_t1

0xbe78,	// (0x0006b571) main_ncimui_pane_t2_ParamLimits

0xbe78,	// (0x0006b571) main_ncimui_pane_t2

0x0002,

0xfb84,	// (0x0006f27d) main_ncimui_pane_t_ParamLimits

0xfb84,	// (0x0006f27d) main_ncimui_pane_t

0x23a1,	// (0x00061a9a) main_radioblah_anim_pane_ParamLimits

0x23a1,	// (0x00061a9a) main_radioblah_anim_pane

0x23b2,	// (0x00061aab) main_radioblah_info_pane_ParamLimits

0x23b2,	// (0x00061aab) main_radioblah_info_pane

0x23c6,	// (0x00061abf) main_radioblah_pane_t1_ParamLimits

0x23c6,	// (0x00061abf) main_radioblah_pane_t1

0x23e2,	// (0x00061adb) main_radioblah_pane_t2_ParamLimits

0x23e2,	// (0x00061adb) main_radioblah_pane_t2

0x0003,

0xfc1f,	// (0x0006f318) main_radioblah_pane_t_ParamLimits

0xfc1f,	// (0x0006f318) main_radioblah_pane_t

0xc2e0,	// (0x0006b9d9) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc2e0,	// (0x0006b9d9) main_radioblah_rocker_ctrl_pane

0x242a,	// (0x00061b23) main_radioblah_info_pane_t1_ParamLimits

0x242a,	// (0x00061b23) main_radioblah_info_pane_t1

0xc325,	// (0x0006ba1e) main_radioblah_info_pane_t2_ParamLimits

0xc325,	// (0x0006ba1e) main_radioblah_info_pane_t2

0x0003,

0xfc28,	// (0x0006f321) main_radioblah_info_pane_t_ParamLimits

0xfc28,	// (0x0006f321) main_radioblah_info_pane_t

0x5f63,	// (0x0006565c) main_radioblah_rocker_ctrl_pane_g1

0xc3d5,	// (0x0006bace) main_radioblah_rocker_ctrl_pane_g2

0xc3dd,	// (0x0006bad6) main_radioblah_rocker_ctrl_pane_g3

0xc3e5,	// (0x0006bade) main_radioblah_rocker_ctrl_pane_g4

0xc3ed,	// (0x0006bae6) main_radioblah_rocker_ctrl_pane_g5

0xc3f5,	// (0x0006baee) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc31,	// (0x0006f32a) main_radioblah_rocker_ctrl_pane_g

0xbe04,	// (0x0006b4fd) main_cset_text2_pane_t1_copy1_ParamLimits

0xa6b2,	// (0x00069dab) cam4_image_uncrop_qvga_pane

0xa7f3,	// (0x00069eec) vid4_image_uncrop_qcif_pane

0xba08,	// (0x0006b101) cam6_image_uncrop_qvga_pane_ParamLimits

0xba08,	// (0x0006b101) cam6_image_uncrop_qvga_pane

0x1c5a,	// (0x00061353) vid6_image_uncrop_qcif_pane_ParamLimits

0x1c5a,	// (0x00061353) vid6_image_uncrop_qcif_pane

0x02fb,	// (0x0005f9f4) bg_popup_preview_window_pane_cp03

0x1f2c,	// (0x00061625) list_cset_text2_pane

0x1f34,	// (0x0006162d) main_cset6_text2_pane_g1

0x1f3c,	// (0x00061635) main_cset6_text2_pane_t1

0xc3fd,	// (0x0006baf6) list_cset_text2_pane_t1_ParamLimits

0xc3fd,	// (0x0006baf6) list_cset_text2_pane_t1

0x52da,	// (0x000649d3) main_radioblah_pane_ParamLimits

0xc17a,	// (0x0006b873) main_mobtv_info_pane_t3_ParamLimits

0xc17a,	// (0x0006b873) main_mobtv_info_pane_t3

0xc2ce,	// (0x0006b9c7) main_radioblah_pane_g1

0xc2f9,	// (0x0006b9f2) main_radioblah_info_pane_g1

0xc37a,	// (0x0006ba73) main_radioblah_info_pane_t3_ParamLimits

0xc37a,	// (0x0006ba73) main_radioblah_info_pane_t3

0x73b2,	// (0x00066aab) highlight_cell_cale_month_pane_ParamLimits

0x73b2,	// (0x00066aab) highlight_cell_cale_month_pane

0x02fb,	// (0x0005f9f4) main_phob_fisheye_pane

0x0ba2,	// (0x0006029b) scroll_pane_cp0031_ParamLimits

0x0ba2,	// (0x0006029b) scroll_pane_cp0031

0x1d68,	// (0x00061461) wait_bar_pane_cp08_ParamLimits

0xbbe4,	// (0x0006b2dd) cset_list_set_pane_copy1_ParamLimits

0x2464,	// (0x00061b5d) highlight_cell_cale_month_pane_g1

0xc41e,	// (0x0006bb17) highlight_cell_cale_month_pane_t1

0x19cb,	// (0x000610c4) list_gen_pane_cp01

0x1588,	// (0x00060c81) scroll_pane_01

0x465d,	// (0x00063d56) list_single_double_fisheye_pane

0x4666,	// (0x00063d5f) list_double_fisheye_pane_g1_ParamLimits

0x4666,	// (0x00063d5f) list_double_fisheye_pane_g1

0x4672,	// (0x00063d6b) list_double_fisheye_pane_g2_ParamLimits

0x4672,	// (0x00063d6b) list_double_fisheye_pane_g2

0x4686,	// (0x00063d7f) list_double_fisheye_pane_g3_ParamLimits

0x4686,	// (0x00063d7f) list_double_fisheye_pane_g3

0x0004,

0xfc3e,	// (0x0006f337) list_double_fisheye_pane_g_ParamLimits

0xfc3e,	// (0x0006f337) list_double_fisheye_pane_g

0x46af,	// (0x00063da8) list_double_fisheye_pane_t1_ParamLimits

0x46af,	// (0x00063da8) list_double_fisheye_pane_t1

0x46ca,	// (0x00063dc3) list_double_fisheye_pane_t2_ParamLimits

0x46ca,	// (0x00063dc3) list_double_fisheye_pane_t2

0x0001,

0xfc49,	// (0x0006f342) list_double_fisheye_pane_t_ParamLimits

0xfc49,	// (0x0006f342) list_double_fisheye_pane_t

0x02fb,	// (0x0005f9f4) main_call5_pane

0xc241,	// (0x0006b93a) sc_swipe_pane_ParamLimits

0xc241,	// (0x0006b93a) sc_swipe_pane

0xc438,	// (0x0006bb31) call5_image_pane_ParamLimits

0xc438,	// (0x0006bb31) call5_image_pane

0xc448,	// (0x0006bb41) call5_swipe_1_pane_ParamLimits

0xc448,	// (0x0006bb41) call5_swipe_1_pane

0xc454,	// (0x0006bb4d) call5_swipe_2_pane_ParamLimits

0xc454,	// (0x0006bb4d) call5_swipe_2_pane

0xc46e,	// (0x0006bb67) popup_call5_audio_first_window_ParamLimits

0xc46e,	// (0x0006bb67) popup_call5_audio_first_window

0x5333,	// (0x00064a2c) call5_swipe_1_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) call5_swipe_1_pane_g1

0x246c,	// (0x00061b65) call5_swipe_1_pane_g2_ParamLimits

0x246c,	// (0x00061b65) call5_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x0006f347) call5_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x0006f347) call5_swipe_1_pane_g

0x2478,	// (0x00061b71) call5_swipe_1_pane_t1_ParamLimits

0x2478,	// (0x00061b71) call5_swipe_1_pane_t1

0x5333,	// (0x00064a2c) call5_swipe_2_pane_g1_ParamLimits

0x5333,	// (0x00064a2c) call5_swipe_2_pane_g1

0x248d,	// (0x00061b86) call5_swipe_2_pane_g2_ParamLimits

0x248d,	// (0x00061b86) call5_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x0006f34c) call5_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x0006f34c) call5_swipe_2_pane_g

0x2499,	// (0x00061b92) call5_swipe_2_pane_t1_ParamLimits

0x2499,	// (0x00061b92) call5_swipe_2_pane_t1

0x24ae,	// (0x00061ba7) sc_swipe_pane_g1_ParamLimits

0x24ae,	// (0x00061ba7) sc_swipe_pane_g1

0x24bb,	// (0x00061bb4) sc_swipe_pane_g2_ParamLimits

0x24bb,	// (0x00061bb4) sc_swipe_pane_g2

0x0001,

0xfc58,	// (0x0006f351) sc_swipe_pane_g_ParamLimits

0xfc58,	// (0x0006f351) sc_swipe_pane_g

0x24c7,	// (0x00061bc0) sc_swipe_pane_t1_ParamLimits

0x24c7,	// (0x00061bc0) sc_swipe_pane_t1

0x02fb,	// (0x0005f9f4) main_cmail_launcher_pane

0xc47c,	// (0x0006bb75) aid_size_cell_cmail_l_ParamLimits

0xc47c,	// (0x0006bb75) aid_size_cell_cmail_l

0xc48a,	// (0x0006bb83) grid_cmail_l_pane_ParamLimits

0xc48a,	// (0x0006bb83) grid_cmail_l_pane

0xc49a,	// (0x0006bb93) cell_cmail_l_pane_ParamLimits

0xc49a,	// (0x0006bb93) cell_cmail_l_pane

0x24dc,	// (0x00061bd5) cell_cmail_l_pane_g1_ParamLimits

0x24dc,	// (0x00061bd5) cell_cmail_l_pane_g1

0x24e8,	// (0x00061be1) cell_cmail_l_pane_t1_ParamLimits

0x24e8,	// (0x00061be1) cell_cmail_l_pane_t1

0x24fe,	// (0x00061bf7) cell_cmail_l_pane_t2_ParamLimits

0x24fe,	// (0x00061bf7) cell_cmail_l_pane_t2

0x0001,

0xfc5d,	// (0x0006f356) cell_cmail_l_pane_t_ParamLimits

0xfc5d,	// (0x0006f356) cell_cmail_l_pane_t

0x52da,	// (0x000649d3) grid_highlight_pane_cp018_ParamLimits

0x52da,	// (0x000649d3) grid_highlight_pane_cp018

0x4f5a,	// (0x00064653) main2_pane_ParamLimits

0x4f5a,	// (0x00064653) main2_pane

0x5753,	// (0x00064e4c) popup_sp_fs_action_menu_bg_pane_g1

0x575b,	// (0x00064e54) popup_sp_fs_action_menu_bg_pane_g2

0x5763,	// (0x00064e5c) popup_sp_fs_action_menu_bg_pane_g3

0x576b,	// (0x00064e64) popup_sp_fs_action_menu_bg_pane_g4

0x5773,	// (0x00064e6c) popup_sp_fs_action_menu_bg_pane_g5

0x577b,	// (0x00064e74) popup_sp_fs_action_menu_bg_pane_g6

0x5783,	// (0x00064e7c) popup_sp_fs_action_menu_bg_pane_g7

0x578b,	// (0x00064e84) popup_sp_fs_action_menu_bg_pane_g8

0x5793,	// (0x00064e8c) popup_sp_fs_action_menu_bg_pane_g9

0x579b,	// (0x00064e94) popup_sp_fs_action_menu_bg_pane_g10

0x579b,	// (0x00064e94) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0006e83e) popup_sp_fs_action_menu_bg_pane_g

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g3_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g3_g2

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0006e8ec) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0006e8ec) list_medium_line_x2_t3_g3_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g3_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g3_t2

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0006e8f3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0006e8f3) list_medium_line_x2_t3_g3_t

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g2_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0006e8fa) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0006e8fa) list_medium_line_x2_t3_g2_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g2_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g2_t2

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0006e8f3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0006e8f3) list_medium_line_x2_t3_g2_t

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g2

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g3

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0006e8ff) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0006e8ff) list_medium_line_x2_t4_g4_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t2

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t3

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0006e908) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0006e908) list_medium_line_x2_t4_g4_t

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g2

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g3

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0006e8ff) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0006e8ff) list_medium_line_x2_t2_g4_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g4_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0006e96f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0006e96f) list_medium_line_x2_t2_g4_t

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g3_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g3_g2

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0006e8ec) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0006e8ec) list_medium_line_x2_t2_g3_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g3_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0006e96f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0006e96f) list_medium_line_x2_t2_g3_t

0x77be,	// (0x00066eb7) main_sp_fs_list_pane_ParamLimits

0x77be,	// (0x00066eb7) main_sp_fs_list_pane

0x77ca,	// (0x00066ec3) sp_fs_scroll_pane_ParamLimits

0x77ca,	// (0x00066ec3) sp_fs_scroll_pane

0x77d6,	// (0x00066ecf) list_medium_line_x2_t3_t1

0x77d6,	// (0x00066ecf) list_medium_line_x2_t3_t2

0x77d6,	// (0x00066ecf) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0006e9ba) list_medium_line_x2_t3_t

0x77d6,	// (0x00066ecf) list_medium_line_x3_t4_t1

0x77d6,	// (0x00066ecf) list_medium_line_x3_t4_t2

0x77d6,	// (0x00066ecf) list_medium_line_x3_t4_t3

0x77d6,	// (0x00066ecf) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0006e9c1) list_medium_line_x3_t4_t

0x77d6,	// (0x00066ecf) list_medium_line_x4_t5_t1

0x77d6,	// (0x00066ecf) list_medium_line_x4_t5_t2

0x77d6,	// (0x00066ecf) list_medium_line_x4_t5_t3

0x77d6,	// (0x00066ecf) list_medium_line_x4_t5_t4

0x77d6,	// (0x00066ecf) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0006e9ca) list_medium_line_x4_t5_t

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g1

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g2

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g3

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g4_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0006e8ff) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0006e8ff) list_medium_line_t4_g4_g

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t1

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t2

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t3

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t4_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0006e908) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0006e908) list_medium_line_t4_g4_t

0x7b41,	// (0x0006723a) chi_dic_find_pane_g1

0x8e6f,	// (0x00068568) main_tport_pane

0x77d6,	// (0x00066ecf) list_medium_line_plain_t1

0x5333,	// (0x00064a2c) list_medium_line_t2_g2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t2_g2_g1

0x5333,	// (0x00064a2c) list_medium_line_t2_g2_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0006e8fa) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0006e8fa) list_medium_line_t2_g2_g

0x5fb8,	// (0x000656b1) list_medium_line_t2_g2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t2_g2_t1

0x5fb8,	// (0x000656b1) list_medium_line_t2_g2_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0006e96f) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0006e96f) list_medium_line_t2_g2_t

0x45f7,	// (0x00063cf0) aid_sp_fs_list_icon_a_sm

0xb70b,	// (0x0006ae04) aid_sp_fs_list_icon_d

0x45ff,	// (0x00063cf8) aid_sp_fs_text_primary

0x19e4,	// (0x000610dd) aid_sp_fs_text_secondary

0x02fb,	// (0x0005f9f4) list_medium_line

0x02fb,	// (0x0005f9f4) list_medium_line_g2

0x02fb,	// (0x0005f9f4) list_medium_line_g3

0x02fb,	// (0x0005f9f4) list_medium_line_plain

0x02fb,	// (0x0005f9f4) list_medium_line_plain_t2

0x02fb,	// (0x0005f9f4) list_medium_line_plain_t3

0x02fb,	// (0x0005f9f4) list_medium_line_right_icon

0x02fb,	// (0x0005f9f4) list_medium_line_right_iconx2

0x02fb,	// (0x0005f9f4) list_medium_line_t2

0x02fb,	// (0x0005f9f4) list_medium_line_t2_g2

0x02fb,	// (0x0005f9f4) list_medium_line_t2_g3

0x02fb,	// (0x0005f9f4) list_medium_line_t2_right_icon

0x02fb,	// (0x0005f9f4) list_medium_line_t2_right_iconx2

0x02fb,	// (0x0005f9f4) list_medium_line_t3

0x02fb,	// (0x0005f9f4) list_medium_line_t3_g2

0x02fb,	// (0x0005f9f4) list_medium_line_t3_g3

0x02fb,	// (0x0005f9f4) list_medium_line_t3_right_iconx2

0x02fb,	// (0x0005f9f4) list_medium_line_t4_g4

0x02fb,	// (0x0005f9f4) list_medium_line_x2

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t2_g2

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t2_g3

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t2_g4

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t3

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t3_g2

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t3_g3

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t3_g4

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t4_g2

0x02fb,	// (0x0005f9f4) list_medium_line_x2_t4_g4

0x02fb,	// (0x0005f9f4) list_medium_line_x3

0x02fb,	// (0x0005f9f4) list_medium_line_x3_t4

0x02fb,	// (0x0005f9f4) list_medium_line_x3_t4_g4

0x02fb,	// (0x0005f9f4) list_medium_line_x4_t4

0x02fb,	// (0x0005f9f4) list_medium_line_x4_t4_g7

0x02fb,	// (0x0005f9f4) list_medium_line_x4_t5

0x4608,	// (0x00063d01) list_single_fs_dyc_pane_ParamLimits

0x4608,	// (0x00063d01) list_single_fs_dyc_pane

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g1

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g2

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g3

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g4

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g5

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x4_t4_g7_g6

0x5341,	// (0x00064a3a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5341,	// (0x00064a3a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb65,	// (0x0006f25e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb65,	// (0x0006f25e) list_medium_line_x4_t4_g7_g

0x5fb8,	// (0x000656b1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x4_t4_g7_t1

0x5fb8,	// (0x000656b1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x4_t4_g7_t2

0x5fb8,	// (0x000656b1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x4_t4_g7_t3

0x5e1a,	// (0x00065513) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5e1a,	// (0x00065513) list_medium_line_x4_t4_g7_t4

0x5e1a,	// (0x00065513) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5e1a,	// (0x00065513) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb74,	// (0x0006f26d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb74,	// (0x0006f26d) list_medium_line_x4_t4_g7_t

0x4640,	// (0x00063d39) list_single_dyc_row_pane_ParamLimits

0x4640,	// (0x00063d39) list_single_dyc_row_pane

0xc42c,	// (0x0006bb25) call5_gesture_pane_ParamLimits

0xc42c,	// (0x0006bb25) call5_gesture_pane

0xc460,	// (0x0006bb59) call5_windows_pane_ParamLimits

0xc460,	// (0x0006bb59) call5_windows_pane

0xc4b3,	// (0x0006bbac) call5_swipe_1_pane_cp_ParamLimits

0xc4b3,	// (0x0006bbac) call5_swipe_1_pane_cp

0xc4bf,	// (0x0006bbb8) call5_swipe_2_pane_cp_ParamLimits

0xc4bf,	// (0x0006bbb8) call5_swipe_2_pane_cp

0x5da5,	// (0x0006549e) call5_image_pane_cp

0xc4cb,	// (0x0006bbc4) popup_call5_audio_first_window_cp_ParamLimits

0xc4cb,	// (0x0006bbc4) popup_call5_audio_first_window_cp

0x24ae,	// (0x00061ba7) call5_swipe_1_pane_g1_cp_ParamLimits

0x24ae,	// (0x00061ba7) call5_swipe_1_pane_g1_cp

0x251b,	// (0x00061c14) call5_swipe_1_pane_g2_cp

0x24c7,	// (0x00061bc0) call5_swipe_1_pane_t1_cp_ParamLimits

0x24c7,	// (0x00061bc0) call5_swipe_1_pane_t1_cp

0x24ae,	// (0x00061ba7) call5_swipe_2_pane_g1_cp_ParamLimits

0x24ae,	// (0x00061ba7) call5_swipe_2_pane_g1_cp

0x2523,	// (0x00061c1c) call5_swipe_2_pane_g2_cp

0x252b,	// (0x00061c24) call5_swipe_2_pane_t1_cp_ParamLimits

0x252b,	// (0x00061c24) call5_swipe_2_pane_t1_cp

0x52da,	// (0x000649d3) main_sp_fs_email_pane

0x2540,	// (0x00061c39) main_sp_fs_listscroll_pane_te

0xc4d9,	// (0x0006bbd2) popup_sp_fs_action_menu_pane_ParamLimits

0xc4d9,	// (0x0006bbd2) popup_sp_fs_action_menu_pane

0x5f63,	// (0x0006565c) bg_sp_fs_ctrlbar_pane_g1

0x2549,	// (0x00061c42) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2552,	// (0x00061c4b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe8d8,	// (0x0006dfd1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x5f63,	// (0x0006565c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc62,	// (0x0006f35b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x8086,	// (0x0006777f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x8086,	// (0x0006777f) bg_sp_fs_ctrlbar_ddmenu_pane

0x255b,	// (0x00061c54) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x255b,	// (0x00061c54) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2567,	// (0x00061c60) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2567,	// (0x00061c60) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc6b,	// (0x0006f364) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc6b,	// (0x0006f364) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2573,	// (0x00061c6c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2573,	// (0x00061c6c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5f63,	// (0x0006565c) list_medium_line_t2_right_icon_g1

0x77d6,	// (0x00066ecf) list_medium_line_t2_right_icon_t1

0x77d6,	// (0x00066ecf) list_medium_line_t2_right_icon_t2

0x0001,

0xfc70,	// (0x0006f369) list_medium_line_t2_right_icon_t

0xe903,	// (0x0006dffc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe903,	// (0x0006dffc) bg_sp_fs_ctrlbar_pane

0xc560,	// (0x0006bc59) main_sp_fs_ctrlbar_button_pane_cp01

0xc568,	// (0x0006bc61) main_sp_fs_ctrlbar_ddmenu_pane

0x25c5,	// (0x00061cbe) main_sp_fs_ctrlbar_pane_g1

0x25d1,	// (0x00061cca) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc75,	// (0x0006f36e) main_sp_fs_ctrlbar_pane_g

0xc5a4,	// (0x0006bc9d) main_sp_fs_ctrlbar_pane_t1

0xc5df,	// (0x0006bcd8) main_sp_fs_ctrlbar_pane

0xc5f5,	// (0x0006bcee) main_sp_fs_listscroll_pane_te_cp01

0x46ec,	// (0x00063de5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x46ec,	// (0x00063de5) popup_sp_fs_action_menu_pane_cp01

0x52da,	// (0x000649d3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x52da,	// (0x000649d3) bg_sp_fs_highlight_list_pane_cp01

0x470c,	// (0x00063e05) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x470c,	// (0x00063e05) sp_fs_action_menu_list_gene_pane_g1

0x2607,	// (0x00061d00) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2607,	// (0x00061d00) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc83,	// (0x0006f37c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc83,	// (0x0006f37c) sp_fs_action_menu_list_gene_pane_g

0x471b,	// (0x00063e14) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x471b,	// (0x00063e14) sp_fs_action_menu_list_gene_pane_t1

0x4733,	// (0x00063e2c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4733,	// (0x00063e2c) sp_fs_action_menu_list_gene_pane

0x264b,	// (0x00061d44) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x264b,	// (0x00061d44) popup_sp_fs_action_menu_bg_pane

0x4752,	// (0x00063e4b) sp_fs_action_menu_list_pane_ParamLimits

0x4752,	// (0x00063e4b) sp_fs_action_menu_list_pane

0xf04a,	// (0x0006e743) sp_fs_scroll_pane_cp01_ParamLimits

0xf04a,	// (0x0006e743) sp_fs_scroll_pane_cp01

0x77d6,	// (0x00066ecf) list_medium_line_plain_t2_t1

0x77d6,	// (0x00066ecf) list_medium_line_plain_t2_t2

0x0001,

0xfc70,	// (0x0006f369) list_medium_line_plain_t2_t

0x77d6,	// (0x00066ecf) list_medium_line_plain_t3_t1

0x77d6,	// (0x00066ecf) list_medium_line_plain_t3_t2

0x77d6,	// (0x00066ecf) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x0006e9ba) list_medium_line_plain_t3_t

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g2_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0006e8fa) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0006e8fa) list_medium_line_x2_t2_g2_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g2_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0006e96f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0006e96f) list_medium_line_x2_t2_g2_t

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g2_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0006e8fa) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0006e8fa) list_medium_line_x2_t4_g2_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t2

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t3

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0006e908) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0006e908) list_medium_line_x2_t4_g2_t

0x5f63,	// (0x0006565c) list_medium_line_t3_right_iconx2_g1

0x5f63,	// (0x0006565c) list_medium_line_t3_right_iconx2_g2

0x5f63,	// (0x0006565c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x0006eadb) list_medium_line_t3_right_iconx2_g

0x77d6,	// (0x00066ecf) list_medium_line_t3_right_iconx2_t1

0x77d6,	// (0x00066ecf) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc70,	// (0x0006f369) list_medium_line_t3_right_iconx2_t

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g1

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g2

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g3

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0006e8ff) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0006e8ff) list_medium_line_x3_t4_g4_g

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t1

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t2

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t3

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0006e908) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0006e908) list_medium_line_x3_t4_g4_t

0x4772,	// (0x00063e6b) list_single_dyc_row_text_pane_t1_ParamLimits

0x4772,	// (0x00063e6b) list_single_dyc_row_text_pane_t1

0x47a9,	// (0x00063ea2) list_single_dyc_row_text_pane_t2_ParamLimits

0x47a9,	// (0x00063ea2) list_single_dyc_row_text_pane_t2

0x481f,	// (0x00063f18) list_single_dyc_row_text_pane_t3_ParamLimits

0x481f,	// (0x00063f18) list_single_dyc_row_text_pane_t3

0x0005,

0xfc88,	// (0x0006f381) list_single_dyc_row_text_pane_t_ParamLimits

0xfc88,	// (0x0006f381) list_single_dyc_row_text_pane_t

0x48f0,	// (0x00063fe9) list_single_dyc_row_pane_g1_ParamLimits

0x48f0,	// (0x00063fe9) list_single_dyc_row_pane_g1

0x48fc,	// (0x00063ff5) list_single_dyc_row_pane_g2_ParamLimits

0x48fc,	// (0x00063ff5) list_single_dyc_row_pane_g2

0x4908,	// (0x00064001) list_single_dyc_row_pane_g3_ParamLimits

0x4908,	// (0x00064001) list_single_dyc_row_pane_g3

0x4914,	// (0x0006400d) list_single_dyc_row_pane_g4_ParamLimits

0x4914,	// (0x0006400d) list_single_dyc_row_pane_g4

0x0003,

0xfc95,	// (0x0006f38e) list_single_dyc_row_pane_g_ParamLimits

0xfc95,	// (0x0006f38e) list_single_dyc_row_pane_g

0x4920,	// (0x00064019) list_single_dyc_row_text_pane_ParamLimits

0x4920,	// (0x00064019) list_single_dyc_row_text_pane

0x02fb,	// (0x0005f9f4) bg_sp_fs_scroll_pane

0x26ec,	// (0x00061de5) thumb_sp_fs_scroll_pane

0x5333,	// (0x00064a2c) list_medium_line_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_g1

0x5fb8,	// (0x000656b1) list_medium_line_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t1

0x5333,	// (0x00064a2c) list_medium_line_x2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0006e8fa) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0006e8fa) list_medium_line_x2_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t1

0x5333,	// (0x00064a2c) list_medium_line_x3_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x3_g1

0x1402,	// (0x00060afb) list_medium_line_x3_g2_ParamLimits

0x1402,	// (0x00060afb) list_medium_line_x3_g2

0x0001,

0xfc9e,	// (0x0006f397) list_medium_line_x3_g_ParamLimits

0xfc9e,	// (0x0006f397) list_medium_line_x3_g

0x26f5,	// (0x00061dee) list_medium_line_x3_t1_ParamLimits

0x26f5,	// (0x00061dee) list_medium_line_x3_t1

0x2709,	// (0x00061e02) thumb_sp_fs_scroll_pane_g1

0x2712,	// (0x00061e0b) thumb_sp_fs_scroll_pane_g2

0x271b,	// (0x00061e14) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x0006f39c) thumb_sp_fs_scroll_pane_g

0x2709,	// (0x00061e02) bg_sp_fs_scroll_pane_g1

0x2712,	// (0x00061e0b) bg_sp_fs_scroll_pane_g2

0x271b,	// (0x00061e14) bg_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x0006f39c) bg_sp_fs_scroll_pane_g

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g1

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g2

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g3

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0006e8ff) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0006e8ff) list_medium_line_x2_t3_g4_g

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g4_t1

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g4_t2

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0006e8f3) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0006e8f3) list_medium_line_x2_t3_g4_t

0x5333,	// (0x00064a2c) list_medium_line_g2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_g2_g1

0x5333,	// (0x00064a2c) list_medium_line_g2_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0006e8fa) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0006e8fa) list_medium_line_g2_g

0x5fb8,	// (0x000656b1) list_medium_line_g2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_g2_t1

0x5333,	// (0x00064a2c) list_medium_line_t3_g2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t3_g2_g1

0x5333,	// (0x00064a2c) list_medium_line_t3_g2_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0006e8fa) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0006e8fa) list_medium_line_t3_g2_g

0x5fb8,	// (0x000656b1) list_medium_line_t3_g2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_g2_t1

0x5fb8,	// (0x000656b1) list_medium_line_t3_g2_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_g2_t2

0x5fb8,	// (0x000656b1) list_medium_line_t3_g2_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0006e8f3) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0006e8f3) list_medium_line_t3_g2_t

0x5f63,	// (0x0006565c) list_medium_line_right_icon_g1

0x77d6,	// (0x00066ecf) list_medium_line_right_icon_t1

0x5333,	// (0x00064a2c) list_medium_line_t2_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t2_g1

0x5fb8,	// (0x000656b1) list_medium_line_t2_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t2_t1

0x5fb8,	// (0x000656b1) list_medium_line_t2_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0006e96f) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0006e96f) list_medium_line_t2_t

0x5333,	// (0x00064a2c) list_medium_line_t3_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t3_g1

0x5fb8,	// (0x000656b1) list_medium_line_t3_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_t1

0x5fb8,	// (0x000656b1) list_medium_line_t3_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_t2

0x5fb8,	// (0x000656b1) list_medium_line_t3_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0006e8f3) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0006e8f3) list_medium_line_t3_t

0x5333,	// (0x00064a2c) list_medium_line_g3_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_g3_g1

0x5333,	// (0x00064a2c) list_medium_line_g3_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_g3_g2

0x5333,	// (0x00064a2c) list_medium_line_g3_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0006e8ec) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0006e8ec) list_medium_line_g3_g

0x5fb8,	// (0x000656b1) list_medium_line_g3_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_g3_t1

0x5333,	// (0x00064a2c) list_medium_line_t2_g3_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t2_g3_g1

0x5333,	// (0x00064a2c) list_medium_line_t2_g3_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t2_g3_g2

0x5333,	// (0x00064a2c) list_medium_line_t2_g3_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0006e8ec) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0006e8ec) list_medium_line_t2_g3_g

0x5fb8,	// (0x000656b1) list_medium_line_t2_g3_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t2_g3_t1

0x5fb8,	// (0x000656b1) list_medium_line_t2_g3_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0006e96f) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0006e96f) list_medium_line_t2_g3_t

0x5333,	// (0x00064a2c) list_medium_line_t3_g3_g1_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t3_g3_g1

0x5333,	// (0x00064a2c) list_medium_line_t3_g3_g2_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t3_g3_g2

0x5333,	// (0x00064a2c) list_medium_line_t3_g3_g3_ParamLimits

0x5333,	// (0x00064a2c) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0006e8ec) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0006e8ec) list_medium_line_t3_g3_g

0x5fb8,	// (0x000656b1) list_medium_line_t3_g3_t1_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_g3_t1

0x5fb8,	// (0x000656b1) list_medium_line_t3_g3_t2_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_g3_t2

0x5fb8,	// (0x000656b1) list_medium_line_t3_g3_t3_ParamLimits

0x5fb8,	// (0x000656b1) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0006e8f3) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0006e8f3) list_medium_line_t3_g3_t

0x5f63,	// (0x0006565c) list_medium_line_right_iconx2_g1

0x5f63,	// (0x0006565c) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0006ead6) list_medium_line_right_iconx2_g

0x77d6,	// (0x00066ecf) list_medium_line_right_iconx2_t1

0x5f63,	// (0x0006565c) list_medium_line_t2_right_iconx2_g1

0x5f63,	// (0x0006565c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0006ead6) list_medium_line_t2_right_iconx2_g

0x77d6,	// (0x00066ecf) list_medium_line_t2_right_iconx2_t1

0x77d6,	// (0x00066ecf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc70,	// (0x0006f369) list_medium_line_t2_right_iconx2_t

0x77d6,	// (0x00066ecf) list_medium_line_x4_t4_t1

0x77d6,	// (0x00066ecf) list_medium_line_x4_t4_t2

0x77d6,	// (0x00066ecf) list_medium_line_x4_t4_t3

0x77d6,	// (0x00066ecf) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0006e9c1) list_medium_line_x4_t4_t

0xc630,	// (0x0006bd29) tport_appsw_pane_ParamLimits

0xc630,	// (0x0006bd29) tport_appsw_pane

0xc63e,	// (0x0006bd37) tport_contact_pane_ParamLimits

0xc63e,	// (0x0006bd37) tport_contact_pane

0xc64e,	// (0x0006bd47) tport_listscroll_pane_ParamLimits

0xc64e,	// (0x0006bd47) tport_listscroll_pane

0xc65e,	// (0x0006bd57) cell_tport_appsw_pane_ParamLimits

0xc65e,	// (0x0006bd57) cell_tport_appsw_pane

0x5341,	// (0x00064a3a) tport_appsw_pane_g1_ParamLimits

0x5341,	// (0x00064a3a) tport_appsw_pane_g1

0x2724,	// (0x00061e1d) tport_contact_pane_g1

0x272d,	// (0x00061e26) tport_contact_pane_t1

0x273b,	// (0x00061e34) tport_contact_pane_t2

0x0001,

0xfcaa,	// (0x0006f3a3) tport_contact_pane_t

0x2749,	// (0x00061e42) list_tport_pane

0x2752,	// (0x00061e4b) scroll_pane_cp_030

0xc691,	// (0x0006bd8a) cell_tport_appsw_pane_g1

0xc6a1,	// (0x0006bd9a) cell_tport_appsw_pane_t1

0xc6af,	// (0x0006bda8) grid_highlight_pane_cp019

0xc6b7,	// (0x0006bdb0) list_tport_double_graphic_pane_ParamLimits

0xc6b7,	// (0x0006bdb0) list_tport_double_graphic_pane

0x52da,	// (0x000649d3) list_highlight_pane_cp023_ParamLimits

0x52da,	// (0x000649d3) list_highlight_pane_cp023

0xc6c8,	// (0x0006bdc1) list_tport_double_graphic_pane_g1_ParamLimits

0xc6c8,	// (0x0006bdc1) list_tport_double_graphic_pane_g1

0xc6d5,	// (0x0006bdce) list_tport_double_graphic_pane_t1_ParamLimits

0xc6d5,	// (0x0006bdce) list_tport_double_graphic_pane_t1

0xc6ea,	// (0x0006bde3) list_tport_double_graphic_pane_t2_ParamLimits

0xc6ea,	// (0x0006bde3) list_tport_double_graphic_pane_t2

0x0001,

0xfcb6,	// (0x0006f3af) list_tport_double_graphic_pane_t_ParamLimits

0xfcb6,	// (0x0006f3af) list_tport_double_graphic_pane_t

0x02fb,	// (0x0005f9f4) main_cale_note_pane

0xaa22,	// (0x0006a11b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaa22,	// (0x0006a11b) cell_vitu2_function_top_wide_pane_cp01

0xc18e,	// (0x0006b887) wait_bar_pane_cp05_ParamLimits

0x52da,	// (0x000649d3) listscroll_cmail_pane

0x275b,	// (0x00061e54) list_cmail_pane

0xc6fc,	// (0x0006bdf5) list_cmail_body_pane

0xc724,	// (0x0006be1d) list_single_cmail_header_caption_pane

0xc753,	// (0x0006be4c) list_single_cmail_header_detail_pane_ParamLimits

0xc753,	// (0x0006be4c) list_single_cmail_header_detail_pane

0x276b,	// (0x00061e64) list_single_cmail_header_caption_pane_t1

0x493f,	// (0x00064038) list_single_cmail_header_detail_pane_g1_ParamLimits

0x493f,	// (0x00064038) list_single_cmail_header_detail_pane_g1

0xc78c,	// (0x0006be85) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc78c,	// (0x0006be85) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcbb,	// (0x0006f3b4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcbb,	// (0x0006f3b4) list_single_cmail_header_detail_pane_g

0x4955,	// (0x0006404e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4955,	// (0x0006404e) list_single_cmail_header_detail_pane_t1

0x49b5,	// (0x000640ae) list_single_cmail_header_editor_pane_bg_ParamLimits

0x49b5,	// (0x000640ae) list_single_cmail_header_editor_pane_bg

0x215c,	// (0x00061855) list_cmail_body_pane_g1

0x2812,	// (0x00061f0b) list_cmail_body_pane_t1

0x146e,	// (0x00060b67) list_single_cmail_header_editor_pane_bg_g1

0x66f1,	// (0x00065dea) list_single_cmail_header_editor_pane_bg_g1_copy1

0x147e,	// (0x00060b77) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1476,	// (0x00060b6f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x16b4,	// (0x00060dad) list_single_cmail_header_editor_pane_bg_g1_copy4

0x149e,	// (0x00060b97) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x148e,	// (0x00060b87) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1496,	// (0x00060b8f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x66d1,	// (0x00065dca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc798,	// (0x0006be91) calenote_gesture_pane_ParamLimits

0xc798,	// (0x0006be91) calenote_gesture_pane

0xc7b2,	// (0x0006beab) calenote_window_pane_ParamLimits

0xc7b2,	// (0x0006beab) calenote_window_pane

0x2820,	// (0x00061f19) popup_note_window_cp01

0xc7ca,	// (0x0006bec3) calenote_swipe_1_pane_ParamLimits

0xc7ca,	// (0x0006bec3) calenote_swipe_1_pane

0xc4bf,	// (0x0006bbb8) calenote_swipe_2_pane_ParamLimits

0xc4bf,	// (0x0006bbb8) calenote_swipe_2_pane

0x24ae,	// (0x00061ba7) calenote_swipe_1_pane_g1_ParamLimits

0x24ae,	// (0x00061ba7) calenote_swipe_1_pane_g1

0x24bb,	// (0x00061bb4) calenote_swipe_1_pane_g2_ParamLimits

0x24bb,	// (0x00061bb4) calenote_swipe_1_pane_g2

0x0001,

0xfc58,	// (0x0006f351) calenote_swipe_1_pane_g_ParamLimits

0xfc58,	// (0x0006f351) calenote_swipe_1_pane_g

0x2832,	// (0x00061f2b) calenote_swipe_1_pane_t1_ParamLimits

0x2832,	// (0x00061f2b) calenote_swipe_1_pane_t1

0x24ae,	// (0x00061ba7) calenote_swipe_2_pane_g1_ParamLimits

0x24ae,	// (0x00061ba7) calenote_swipe_2_pane_g1

0x2851,	// (0x00061f4a) calenote_swipe_2_pane_g2_ParamLimits

0x2851,	// (0x00061f4a) calenote_swipe_2_pane_g2

0x0001,

0xfcc7,	// (0x0006f3c0) calenote_swipe_2_pane_g_ParamLimits

0xfcc7,	// (0x0006f3c0) calenote_swipe_2_pane_g

0x285d,	// (0x00061f56) calenote_swipe_2_pane_t1_ParamLimits

0x285d,	// (0x00061f56) calenote_swipe_2_pane_t1

0x02fb,	// (0x0005f9f4) main_mup_navstr_pane

0x98cc,	// (0x00068fc5) main_mup3_pane_t7_ParamLimits

0x98cc,	// (0x00068fc5) main_mup3_pane_t7

0xa0f5,	// (0x000697ee) main_mp4_pane_g6_ParamLimits

0xa0f5,	// (0x000697ee) main_mp4_pane_g6

0xa485,	// (0x00069b7e) main_image3_pane_t4_ParamLimits

0xa485,	// (0x00069b7e) main_image3_pane_t4

0xc7dd,	// (0x0006bed6) popup_navstr_preview_pane_ParamLimits

0xc7dd,	// (0x0006bed6) popup_navstr_preview_pane

0xc7e9,	// (0x0006bee2) scroll_navstr_pane_ParamLimits

0xc7e9,	// (0x0006bee2) scroll_navstr_pane

0x02fb,	// (0x0005f9f4) bg_popup_preview_window_pane_cp04

0x2884,	// (0x00061f7d) popup_navstr_preview_pane_t1

0xc7f5,	// (0x0006beee) scroll_navstr_pane_g1_ParamLimits

0xc7f5,	// (0x0006beee) scroll_navstr_pane_g1

0xc802,	// (0x0006befb) scroll_navstr_pane_t1_ParamLimits

0xc802,	// (0x0006befb) scroll_navstr_pane_t1

0x2829,	// (0x00061f22) bg_button_pane_cp014

0x2829,	// (0x00061f22) bg_button_pane_cp030

0x4692,	// (0x00063d8b) list_double_fisheye_pane_g4_ParamLimits

0x4692,	// (0x00063d8b) list_double_fisheye_pane_g4

0x469e,	// (0x00063d97) list_double_fisheye_pane_g5_ParamLimits

0x469e,	// (0x00063d97) list_double_fisheye_pane_g5

0xf070,	// (0x0006e769) sp_fs_scroll_pane_cp03

0x25c5,	// (0x00061cbe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x25d1,	// (0x00061cca) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc75,	// (0x0006f36e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc5a4,	// (0x0006bc9d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2763,	// (0x00061e5c) sp_fs_scroll_pane_cp02

0x586c,	// (0x00064f65) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x586c,	// (0x00064f65) popup_sp_fs_calendar_preview_list_single_pane

0x02fb,	// (0x0005f9f4) main_cam6_pano_pane

0x52da,	// (0x000649d3) main_mup3_pane_ParamLimits

0x02fb,	// (0x0005f9f4) main_phacti_pane

0xc063,	// (0x0006b75c) bg_button_pane_cp11

0xc07b,	// (0x0006b774) main_mobtv_info_pane_g2_ParamLimits

0xc07b,	// (0x0006b774) main_mobtv_info_pane_g2

0x0001,

0xfbd5,	// (0x0006f2ce) main_mobtv_info_pane_g_ParamLimits

0xfbd5,	// (0x0006f2ce) main_mobtv_info_pane_g

0xc22d,	// (0x0006b926) sc_clock_pane_t5_ParamLimits

0xc22d,	// (0x0006b926) sc_clock_pane_t5

0xc2ce,	// (0x0006b9c7) main_radioblah_pane_g1_ParamLimits

0x23fa,	// (0x00061af3) main_radioblah_pane_t3_ParamLimits

0x23fa,	// (0x00061af3) main_radioblah_pane_t3

0x2412,	// (0x00061b0b) main_radioblah_pane_t4_ParamLimits

0x2412,	// (0x00061b0b) main_radioblah_pane_t4

0xc2ec,	// (0x0006b9e5) main_radioblah_text_pane_ParamLimits

0xc2ec,	// (0x0006b9e5) main_radioblah_text_pane

0xc2f9,	// (0x0006b9f2) main_radioblah_info_pane_g1_ParamLimits

0xc38e,	// (0x0006ba87) main_radioblah_info_pane_t4_ParamLimits

0xc38e,	// (0x0006ba87) main_radioblah_info_pane_t4

0x52da,	// (0x000649d3) main_sp_fs_calendar_pane

0xc814,	// (0x0006bf0d) main_phacti_pane_g1

0xc81c,	// (0x0006bf15) phacti_note_pane_ParamLimits

0xc81c,	// (0x0006bf15) phacti_note_pane

0x289b,	// (0x00061f94) phacti_term_pane_ParamLimits

0x289b,	// (0x00061f94) phacti_term_pane

0x28b0,	// (0x00061fa9) phacti_note_pane_t1_ParamLimits

0x28b0,	// (0x00061fa9) phacti_note_pane_t1

0x49cc,	// (0x000640c5) phacti_term_pane_g1

0x49d4,	// (0x000640cd) phacti_term_pane_t1_ParamLimits

0x49d4,	// (0x000640cd) phacti_term_pane_t1

0x28f9,	// (0x00061ff2) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2901,	// (0x00061ffa) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcd1,	// (0x0006f3ca) popup_sp_fs_calendar_preview_list_single_pane_g

0x2909,	// (0x00062002) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2909,	// (0x00062002) popup_sp_fs_calendar_preview_list_single_pane_t1

0x291f,	// (0x00062018) aid_popup_sp_fs_bg_corner_pane

0x5f63,	// (0x0006565c) popup_sp_fs_calendar_preview_bg_pane_g1

0x02fb,	// (0x0005f9f4) popup_sp_fs_calendar_preview_bg_pane

0x2927,	// (0x00062020) popup_sp_fs_calendar_preview_list_pane

0xe903,	// (0x0006dffc) bg_main_sp_fs_cale_pane_ParamLimits

0xe903,	// (0x0006dffc) bg_main_sp_fs_cale_pane

0x4a07,	// (0x00064100) listscroll_cale_mrui_pane_ParamLimits

0x4a07,	// (0x00064100) listscroll_cale_mrui_pane

0x4a1c,	// (0x00064115) listscroll_sp_fs_schedule_track_pane

0x4a25,	// (0x0006411e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4a25,	// (0x0006411e) main_sp_fs_ctrlbar_pane_cp01

0x2969,	// (0x00062062) main_sp_fs_ribbon_pane

0x4a38,	// (0x00064131) popup_sp_fs_cale_preview_window

0xc87f,	// (0x0006bf78) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc87f,	// (0x0006bf78) list_single_sp_fs_schedule_track_pane

0x08ed,	// (0x0005ffe6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x08ed,	// (0x0005ffe6) bg_sp_fs_highlight_list_pane_cp03

0xc8a5,	// (0x0006bf9e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc8a5,	// (0x0006bf9e) list_single_sp_fs_schedule_track_pane_g1

0xc8b1,	// (0x0006bfaa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc8b1,	// (0x0006bfaa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd6,	// (0x0006f3cf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd6,	// (0x0006f3cf) list_single_sp_fs_schedule_track_pane_g

0xc8bd,	// (0x0006bfb6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc8bd,	// (0x0006bfb6) list_single_sp_fs_schedule_track_pane_t1

0xc8d5,	// (0x0006bfce) sp_fs_schedule_track_pane_ParamLimits

0xc8d5,	// (0x0006bfce) sp_fs_schedule_track_pane

0x2983,	// (0x0006207c) sp_fs_schedule_track_pane_g1

0x298b,	// (0x00062084) sp_fs_schedule_track_pane_g2

0x2993,	// (0x0006208c) sp_fs_schedule_track_pane_g3

0x299b,	// (0x00062094) sp_fs_schedule_track_pane_g4

0x29a3,	// (0x0006209c) sp_fs_schedule_track_pane_g5

0x0004,

0xfcdb,	// (0x0006f3d4) sp_fs_schedule_track_pane_g

0x146e,	// (0x00060b67) bg_sp_fs_schedule_viewer_highlight_g1

0x66f1,	// (0x00065dea) bg_sp_fs_schedule_viewer_highlight_g2

0x1476,	// (0x00060b6f) bg_sp_fs_schedule_viewer_highlight_g3

0x147e,	// (0x00060b77) bg_sp_fs_schedule_viewer_highlight_g4

0x16b4,	// (0x00060dad) bg_sp_fs_schedule_viewer_highlight_g5

0x148e,	// (0x00060b87) bg_sp_fs_schedule_viewer_highlight_g6

0x1496,	// (0x00060b8f) bg_sp_fs_schedule_viewer_highlight_g7

0x149e,	// (0x00060b97) bg_sp_fs_schedule_viewer_highlight_g8

0x66d1,	// (0x00065dca) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce6,	// (0x0006f3df) bg_sp_fs_schedule_viewer_highlight_g

0x02fb,	// (0x0005f9f4) bg_main_sp_fs_ribbon_pane

0xc8e5,	// (0x0006bfde) main_sp_fs_ribbon_pane_g1

0x29ab,	// (0x000620a4) main_sp_fs_ribbon_pane_t1

0xc8ee,	// (0x0006bfe7) main_sp_fs_ribbon_pane_t2

0x29ba,	// (0x000620b3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf9,	// (0x0006f3f2) main_sp_fs_ribbon_pane_t

0x29c9,	// (0x000620c2) main_sp_fs_ribbon_scheduler_pane

0x29d1,	// (0x000620ca) bg_main_sp_fs_ribbon_pane_g1

0x29da,	// (0x000620d3) bg_main_sp_fs_ribbon_pane_g2

0x29e3,	// (0x000620dc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd00,	// (0x0006f3f9) bg_main_sp_fs_ribbon_pane_g

0x29eb,	// (0x000620e4) main_sp_fs_ribbon_scheduler_pane_g1

0x29f4,	// (0x000620ed) main_sp_fs_ribbon_scheduler_pane_g2

0x29fd,	// (0x000620f6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd07,	// (0x0006f400) main_sp_fs_ribbon_scheduler_pane_g

0x2a06,	// (0x000620ff) list_cale_mrui_pane

0xc8fd,	// (0x0006bff6) sp_fs_scroll_pane_cp07_ParamLimits

0xc8fd,	// (0x0006bff6) sp_fs_scroll_pane_cp07

0xc919,	// (0x0006c012) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc919,	// (0x0006c012) bg_sp_fs_schedule_viewer_highlight

0x2a13,	// (0x0006210c) list_single_sp_fs_schedule_track_pane_cp01

0x2a1b,	// (0x00062114) list_sp_fs_schedule_track_pane

0x2a23,	// (0x0006211c) sp_fs_scroll_pane_cp06_ParamLimits

0x2a23,	// (0x0006211c) sp_fs_scroll_pane_cp06

0x5f63,	// (0x0006565c) bgmain_sp_fs_calendar_pane_g1

0x4a4a,	// (0x00064143) list_single_cale_mrui_pane_ParamLimits

0x4a4a,	// (0x00064143) list_single_cale_mrui_pane

0x4a78,	// (0x00064171) list_single_cale_mrui_row_pane_ParamLimits

0x4a78,	// (0x00064171) list_single_cale_mrui_row_pane

0x4a85,	// (0x0006417e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4a85,	// (0x0006417e) list_single_cale_mrui_row_pane_g1

0x4abd,	// (0x000641b6) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4abd,	// (0x000641b6) list_single_cale_mrui_row_pane_t1

0x4acf,	// (0x000641c8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4acf,	// (0x000641c8) list_single_cale_mrui_row_pane_t2

0x4b35,	// (0x0006422e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4b35,	// (0x0006422e) list_single_cale_mrui_row_pane_t3

0x4b64,	// (0x0006425d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4b64,	// (0x0006425d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd15,	// (0x0006f40e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd15,	// (0x0006f40e) list_single_cale_mrui_row_pane_t

0x4b93,	// (0x0006428c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4b93,	// (0x0006428c) list_single_cmail_header_editor_pane_bg_cp01

0x4bb3,	// (0x000642ac) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4bb3,	// (0x000642ac) list_single_cmail_header_editor_pane_bg_cp02

0xc926,	// (0x0006c01f) main_radioblah_text_pane_t1_ParamLimits

0xc926,	// (0x0006c01f) main_radioblah_text_pane_t1

0x2af7,	// (0x000621f0) cam6_indi_pane_cp01

0x2aff,	// (0x000621f8) cam6_mode_pane_cp01

0x2b07,	// (0x00062200) cam6_pano_pane

0x2b10,	// (0x00062209) cam6_zoom_pane_cp01

0x2b18,	// (0x00062211) cam6_pano_image_pane

0x2b23,	// (0x0006221c) cam6_pano_pane_g1

0x215c,	// (0x00061855) cam6_pano_pane_g2

0x2b2c,	// (0x00062225) cam6_pano_pane_g3

0x2b35,	// (0x0006222e) cam6_pano_pane_g4

0x0e00,	// (0x000604f9) cam6_pano_pane_g5

0x2b3e,	// (0x00062237) cam6_pano_pane_g6

0x2b48,	// (0x00062241) cam6_pano_pane_g7

0x2b50,	// (0x00062249) cam6_pano_pane_g8

0x2b59,	// (0x00062252) cam6_pano_pane_g9

0x0008,

0xfd1e,	// (0x0006f417) cam6_pano_pane_g

0x02fb,	// (0x0005f9f4) main_browser_tag_pane

0x287c,	// (0x00061f75) grid_navstr_albumart_pane

0x2b64,	// (0x0006225d) cell_navstr_albumart_pane_ParamLimits

0x2b64,	// (0x0006225d) cell_navstr_albumart_pane

0x2b84,	// (0x0006227d) cell_navstr_albumart_pane_g1

0xe75f,	// (0x0006de58) cell_navstr_albumart_pane_g2

0xe76f,	// (0x0006de68) cell_navstr_albumart_pane_g3

0xe767,	// (0x0006de60) cell_navstr_albumart_pane_g4

0x0003,

0xfd31,	// (0x0006f42a) cell_navstr_albumart_pane_g

0xc941,	// (0x0006c03a) bt_list_pane_ParamLimits

0xc941,	// (0x0006c03a) bt_list_pane

0xc962,	// (0x0006c05b) bt_list_pane_t1

0xc971,	// (0x0006c06a) bt_list_pane_t2

0x0001,

0xfd3a,	// (0x0006f433) bt_list_pane_t

0x02fb,	// (0x0005f9f4) main_cale_prevew_pane

0xc980,	// (0x0006c079) popup_cale_preview_window_ParamLimits

0xc980,	// (0x0006c079) popup_cale_preview_window

0x52da,	// (0x000649d3) bg_popup_preview_window_pane_cp05_ParamLimits

0x52da,	// (0x000649d3) bg_popup_preview_window_pane_cp05

0x2b8c,	// (0x00062285) list_cale_preview_pane_ParamLimits

0x2b8c,	// (0x00062285) list_cale_preview_pane

0xc999,	// (0x0006c092) list_double_cale_preview_pane_ParamLimits

0xc999,	// (0x0006c092) list_double_cale_preview_pane

0xc9ab,	// (0x0006c0a4) list_single_cale_preview_pane_ParamLimits

0xc9ab,	// (0x0006c0a4) list_single_cale_preview_pane

0xc9bf,	// (0x0006c0b8) list_single_cale_preview_pane_g1

0xc9c7,	// (0x0006c0c0) list_single_cale_preview_pane_t1_ParamLimits

0xc9c7,	// (0x0006c0c0) list_single_cale_preview_pane_t1

0xc9dc,	// (0x0006c0d5) list_double_cale_preview_pane_g1

0xc9e4,	// (0x0006c0dd) list_double_cale_preview_pane_t1_ParamLimits

0xc9e4,	// (0x0006c0dd) list_double_cale_preview_pane_t1

0xc9f9,	// (0x0006c0f2) list_double_cale_preview_pane_t2_ParamLimits

0xc9f9,	// (0x0006c0f2) list_double_cale_preview_pane_t2

0x0001,

0xfd3f,	// (0x0006f438) list_double_cale_preview_pane_t_ParamLimits

0xfd3f,	// (0x0006f438) list_double_cale_preview_pane_t

0x02fb,	// (0x0005f9f4) main_ezdial_pane

0x52da,	// (0x000649d3) main_sp_fs_email_pane_ParamLimits

0xc51d,	// (0x0006bc16) cmail_ddmenu_btn01_pane_ParamLimits

0xc51d,	// (0x0006bc16) cmail_ddmenu_btn01_pane

0xc532,	// (0x0006bc2b) cmail_ddmenu_btn02_pane_ParamLimits

0xc532,	// (0x0006bc2b) cmail_ddmenu_btn02_pane

0xc54a,	// (0x0006bc43) cmail_ddmenu_btn03_pane_ParamLimits

0xc54a,	// (0x0006bc43) cmail_ddmenu_btn03_pane

0xc5df,	// (0x0006bcd8) main_sp_fs_ctrlbar_pane_ParamLimits

0xc5f5,	// (0x0006bcee) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc6fc,	// (0x0006bdf5) list_cmail_body_pane_ParamLimits

0x2779,	// (0x00061e72) bg_button_pane_cp12

0x278e,	// (0x00061e87) list_single_cmail_header_detail_pane_g3_ParamLimits

0x278e,	// (0x00061e87) list_single_cmail_header_detail_pane_g3

0x4991,	// (0x0006408a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4991,	// (0x0006408a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcc2,	// (0x0006f3bb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcc2,	// (0x0006f3bb) list_single_cmail_header_detail_pane_t

0x49e9,	// (0x000640e2) phacti_term_pane_t2_ParamLimits

0x49e9,	// (0x000640e2) phacti_term_pane_t2

0x0001,

0xfccc,	// (0x0006f3c5) phacti_term_pane_t_ParamLimits

0xfccc,	// (0x0006f3c5) phacti_term_pane_t

0x2b98,	// (0x00062291) aid_size_list_single_double

0xca11,	// (0x0006c10a) popup_ezdial_listscroll_window

0xca35,	// (0x0006c12e) popup_number_entry_window_cp01

0x5da5,	// (0x0006549e) bg_popup_call_pane_cp09

0x2ba4,	// (0x0006229d) ezdial_list_pane

0x2bac,	// (0x000622a5) scroll_pane_cp23

0x8086,	// (0x0006777f) bg_button_pane_cp028_ParamLimits

0x8086,	// (0x0006777f) bg_button_pane_cp028

0xca43,	// (0x0006c13c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xca43,	// (0x0006c13c) cmail_ddmenu_btn01_pane_g1

0xca53,	// (0x0006c14c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xca53,	// (0x0006c14c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x0006f43d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x0006f43d) cmail_ddmenu_btn01_pane_g

0x2bb4,	// (0x000622ad) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2bb4,	// (0x000622ad) cmail_ddmenu_btn01_pane_t1

0xe903,	// (0x0006dffc) bg_button_pane_cp029_ParamLimits

0xe903,	// (0x0006dffc) bg_button_pane_cp029

0xca53,	// (0x0006c14c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xca53,	// (0x0006c14c) cmail_ddmenu_btn02_pane_g1

0xca6b,	// (0x0006c164) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xca6b,	// (0x0006c164) cmail_ddmenu_btn02_pane_t1

0x08ed,	// (0x0005ffe6) bg_button_pane_cp031_ParamLimits

0x08ed,	// (0x0005ffe6) bg_button_pane_cp031

0xca53,	// (0x0006c14c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xca53,	// (0x0006c14c) cmail_ddmenu_btn03_pane_g1

0xca6b,	// (0x0006c164) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xca6b,	// (0x0006c164) cmail_ddmenu_btn03_pane_t1

0xa330,	// (0x00069a29) cell_dialer2_keypad_pane_t1_ParamLimits

0xa34a,	// (0x00069a43) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa34a,	// (0x00069a43) cell_dialer2_keypad_pane_t1_copy1

0xbea4,	// (0x0006b59d) ncimui_group_button_pane

0x52da,	// (0x000649d3) main_sp_fs_calendar_pane_ParamLimits

0xc724,	// (0x0006be1d) list_single_cmail_header_caption_pane_ParamLimits

0x49fe,	// (0x000640f7) aid_recal_txt_sm_pane

0x02fb,	// (0x0005f9f4) mian_recal_day_pane

0x4a38,	// (0x00064131) popup_sp_fs_cale_preview_window_ParamLimits

0x2bc9,	// (0x000622c2) list_recal_day_pane

0x4bea,	// (0x000642e3) list_single_recal_day_pane_ParamLimits

0x4bea,	// (0x000642e3) list_single_recal_day_pane

0x2c1d,	// (0x00062316) list_single_recal_day_pane_g1_ParamLimits

0x2c1d,	// (0x00062316) list_single_recal_day_pane_g1

0x4bfc,	// (0x000642f5) list_single_recal_day_pane_g2_ParamLimits

0x4bfc,	// (0x000642f5) list_single_recal_day_pane_g2

0x4c08,	// (0x00064301) list_single_recal_day_pane_g3_ParamLimits

0x4c08,	// (0x00064301) list_single_recal_day_pane_g3

0x4c14,	// (0x0006430d) list_single_recal_day_pane_g4_ParamLimits

0x4c14,	// (0x0006430d) list_single_recal_day_pane_g4

0x4c22,	// (0x0006431b) list_single_recal_day_pane_g5_ParamLimits

0x4c22,	// (0x0006431b) list_single_recal_day_pane_g5

0x4c38,	// (0x00064331) list_single_recal_day_pane_g6_ParamLimits

0x4c38,	// (0x00064331) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x0006f44c) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x0006f44c) list_single_recal_day_pane_g

0x4c4c,	// (0x00064345) list_single_recal_day_pane_t1

0x4c5e,	// (0x00064357) list_single_recal_day_pane_t2

0x0001,

0xfd5e,	// (0x0006f457) list_single_recal_day_pane_t

0xca8f,	// (0x0006c188) ncimui_query_button_pane_ParamLimits

0xca8f,	// (0x0006c188) ncimui_query_button_pane

0xca9f,	// (0x0006c198) ncimui_query_button_pane_t1_ParamLimits

0xca9f,	// (0x0006c198) ncimui_query_button_pane_t1

0x2c85,	// (0x0006237e) ncimui_query_button_pane_t2_ParamLimits

0x2c85,	// (0x0006237e) ncimui_query_button_pane_t2

0x0001,

0xfd63,	// (0x0006f45c) ncimui_query_button_pane_t_ParamLimits

0xfd63,	// (0x0006f45c) ncimui_query_button_pane_t

0xcab2,	// (0x0006c1ab) query_button_pane_ParamLimits

0xcab2,	// (0x0006c1ab) query_button_pane

0x02fb,	// (0x0005f9f4) bg_button_pane_cp0028

0x2c98,	// (0x00062391) query_button_pane_t1

0x8e6f,	// (0x00068568) main_tport_pane_ParamLimits

0xc606,	// (0x0006bcff) bg_popup_window_pane_cp01_ParamLimits

0xc606,	// (0x0006bcff) bg_popup_window_pane_cp01

0xc614,	// (0x0006bd0d) heading_pane_cp08_ParamLimits

0xc614,	// (0x0006bd0d) heading_pane_cp08

0xc622,	// (0x0006bd1b) heading_pane_cp07_ParamLimits

0xc622,	// (0x0006bd1b) heading_pane_cp07

0xc691,	// (0x0006bd8a) cell_tport_appsw_pane_g2

0x0002,

0xfcaf,	// (0x0006f3a8) cell_tport_appsw_pane_g

0x419d,	// (0x00063896) input_candi_list_open_g1

0x760f,	// (0x00066d08) list_cale_time_pane_g6_ParamLimits

0x760f,	// (0x00066d08) list_cale_time_pane_g6

0x930f,	// (0x00068a08) aid_size_touch_calib_1_ParamLimits

0x930f,	// (0x00068a08) aid_size_touch_calib_1

0x931b,	// (0x00068a14) aid_size_touch_calib_2_ParamLimits

0x931b,	// (0x00068a14) aid_size_touch_calib_2

0x9329,	// (0x00068a22) aid_size_touch_calib_3_ParamLimits

0x9329,	// (0x00068a22) aid_size_touch_calib_3

0x9339,	// (0x00068a32) aid_size_touch_calib_4_ParamLimits

0x9339,	// (0x00068a32) aid_size_touch_calib_4

0x9347,	// (0x00068a40) main_touch_calib_button_group_pane_ParamLimits

0x9347,	// (0x00068a40) main_touch_calib_button_group_pane

0x9355,	// (0x00068a4e) main_touch_calib_pane_g1_ParamLimits

0x9361,	// (0x00068a5a) main_touch_calib_pane_g2_ParamLimits

0x936d,	// (0x00068a66) main_touch_calib_pane_g3_ParamLimits

0x9379,	// (0x00068a72) main_touch_calib_pane_g4_ParamLimits

0xf6f1,	// (0x0006edea) main_touch_calib_pane_g_ParamLimits

0x9385,	// (0x00068a7e) main_touch_calib_pane_t1_ParamLimits

0x939e,	// (0x00068a97) main_touch_calib_pane_t2_ParamLimits

0x93b7,	// (0x00068ab0) main_touch_calib_pane_t3_ParamLimits

0x93cd,	// (0x00068ac6) main_touch_calib_pane_t4_ParamLimits

0x93e3,	// (0x00068adc) main_touch_calib_pane_t5_ParamLimits

0xf6fa,	// (0x0006edf3) main_touch_calib_pane_t_ParamLimits

0x0bc6,	// (0x000602bf) list_single_fp_cale_pane_g3_ParamLimits

0x0bc6,	// (0x000602bf) list_single_fp_cale_pane_g3

0x52da,	// (0x000649d3) bg_button_pane_cp012_ParamLimits

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp03_ParamLimits

0xb17a,	// (0x0006a873) cell_vitu2_function_top_pane_g1_ParamLimits

0x52da,	// (0x000649d3) bg_vkb2_func_pane_cp04_ParamLimits

0xbe2c,	// (0x0006b525) main_ncimui_button_group_pane_ParamLimits

0xbe2c,	// (0x0006b525) main_ncimui_button_group_pane

0xbe92,	// (0x0006b58b) main_ncimui_pane_t3_ParamLimits

0xbe92,	// (0x0006b58b) main_ncimui_pane_t3

0x2892,	// (0x00061f8b) phacti_button_group_pane

0x2b98,	// (0x00062291) aid_size_list_single_double_ParamLimits

0xca11,	// (0x0006c10a) popup_ezdial_listscroll_window_ParamLimits

0xca35,	// (0x0006c12e) popup_number_entry_window_cp01_ParamLimits

0xcabf,	// (0x0006c1b8) phacti_button_pane_ParamLimits

0xcabf,	// (0x0006c1b8) phacti_button_pane

0x02fb,	// (0x0005f9f4) bg_button_pane_cp14

0x2ca6,	// (0x0006239f) phacti_button_pane_t1

0xcad0,	// (0x0006c1c9) main_touch_calib_button_pane_ParamLimits

0xcad0,	// (0x0006c1c9) main_touch_calib_button_pane

0x5510,	// (0x00064c09) bg_button_pane_cp18_ParamLimits

0x5510,	// (0x00064c09) bg_button_pane_cp18

0x2cb4,	// (0x000623ad) main_touch_calib_button_pane_t1_ParamLimits

0x2cb4,	// (0x000623ad) main_touch_calib_button_pane_t1

0x2cca,	// (0x000623c3) main_touch_calib_button_pane_t2_ParamLimits

0x2cca,	// (0x000623c3) main_touch_calib_button_pane_t2

0x0001,

0xfd68,	// (0x0006f461) main_touch_calib_button_pane_t_ParamLimits

0xfd68,	// (0x0006f461) main_touch_calib_button_pane_t

0x02fb,	// (0x0005f9f4) cell_ncimui_button_pane

0x02fb,	// (0x0005f9f4) bg_button_pane_cp032

0x2ce8,	// (0x000623e1) cell_ncimui_button_pane_t1

0xa3a6,	// (0x00069a9f) image3_infobar_pane_ParamLimits

0xa3a6,	// (0x00069a9f) image3_infobar_pane

0xc24f,	// (0x0006b948) fs_bigclock_status_pane_ParamLimits

0xc24f,	// (0x0006b948) fs_bigclock_status_pane

0xc25c,	// (0x0006b955) main_fs_bigclock_clock_pane_ParamLimits

0xc25c,	// (0x0006b955) main_fs_bigclock_clock_pane

0xc270,	// (0x0006b969) main_fs_bigclock_indi_pane_ParamLimits

0xc270,	// (0x0006b969) main_fs_bigclock_indi_pane

0xc298,	// (0x0006b991) main_fs_bigclock_swipe_pane_ParamLimits

0xc298,	// (0x0006b991) main_fs_bigclock_swipe_pane

0x02fb,	// (0x0005f9f4) main_fs_clock_dumped_data

0x2269,	// (0x00061962) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2269,	// (0x00061962) list_single_fs_bigclock_indicator_pane_g1

0x2285,	// (0x0006197e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2285,	// (0x0006197e) list_single_fs_bigclock_indicator_pane_g2

0x229f,	// (0x00061998) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x229f,	// (0x00061998) list_single_fs_bigclock_indicator_pane_g3

0x22b9,	// (0x000619b2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x22b9,	// (0x000619b2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc09,	// (0x0006f302) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc09,	// (0x0006f302) list_single_fs_bigclock_indicator_pane_g

0x22e4,	// (0x000619dd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x22e4,	// (0x000619dd) list_single_fs_bigclock_indicator_pane_t1

0x230c,	// (0x00061a05) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x230c,	// (0x00061a05) list_single_fs_bigclock_indicator_pane_t2

0x2334,	// (0x00061a2d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2334,	// (0x00061a2d) list_single_fs_bigclock_indicator_pane_t3

0x235c,	// (0x00061a55) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x235c,	// (0x00061a55) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc14,	// (0x0006f30d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc14,	// (0x0006f30d) list_single_fs_bigclock_indicator_pane_t

0x2cf6,	// (0x000623ef) image3_infobar_fav_pane_ParamLimits

0x2cf6,	// (0x000623ef) image3_infobar_fav_pane

0x2d06,	// (0x000623ff) image3_infobar_loc_pane_ParamLimits

0x2d06,	// (0x000623ff) image3_infobar_loc_pane

0x2d1a,	// (0x00062413) image3_infobar_time_pane_ParamLimits

0x2d1a,	// (0x00062413) image3_infobar_time_pane

0x5f63,	// (0x0006565c) image3_infobar_time_pane_g1

0x2d2a,	// (0x00062423) image3_infobar_time_pane_t1

0x5f63,	// (0x0006565c) image3_infobar_loc_pane_g1

0x2d38,	// (0x00062431) image3_infobar_loc_pane_g2

0x0001,

0xfd6d,	// (0x0006f466) image3_infobar_loc_pane_g

0x2d40,	// (0x00062439) image3_infobar_loc_pane_t1

0x5f63,	// (0x0006565c) image3_infobar_fav_pane_g1

0x2d4e,	// (0x00062447) image3_infobar_fav_pane_g2

0x0001,

0xfd72,	// (0x0006f46b) image3_infobar_fav_pane_g

0x2d56,	// (0x0006244f) fs_bigclock_status_battery_pane

0x2d5f,	// (0x00062458) fs_bigclock_status_signal_pane

0x2d68,	// (0x00062461) fs_bigclock_status_title_pane

0x2d71,	// (0x0006246a) fs_bigclock_status_signal_pane_g1

0x2d7a,	// (0x00062473) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd77,	// (0x0006f470) fs_bigclock_status_signal_pane_g

0x2d82,	// (0x0006247b) fs_bigclock_status_battery_pane_g1

0x2d8b,	// (0x00062484) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd7c,	// (0x0006f475) fs_bigclock_status_battery_pane_g

0x2d93,	// (0x0006248c) fs_bigclock_status_title_pane_t1

0xcae0,	// (0x0006c1d9) main_fs_bigclock_clock_pane_g1

0xcae0,	// (0x0006c1d9) main_fs_bigclock_clock_pane_g2

0xcaed,	// (0x0006c1e6) main_fs_bigclock_clock_pane_g3

0xcaed,	// (0x0006c1e6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd81,	// (0x0006f47a) main_fs_bigclock_clock_pane_g

0xcaf9,	// (0x0006c1f2) main_fs_bigclock_clock_pane_t1

0xcb0c,	// (0x0006c205) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8a,	// (0x0006f483) main_fs_bigclock_clock_pane_t

0x2da1,	// (0x0006249a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2da1,	// (0x0006249a) list_single_fs_bigclock_indicator_pane

0x2db2,	// (0x000624ab) list_single_fs_bigclock_pane_ParamLimits

0x2db2,	// (0x000624ab) list_single_fs_bigclock_pane

0x2dd8,	// (0x000624d1) main_fs_bigclock_indicator_pane_t1

0x2de7,	// (0x000624e0) list_single_fs_bigclock_pane_g1

0x2def,	// (0x000624e8) list_single_fs_bigclock_pane_t1

0x5f63,	// (0x0006565c) main_fs_bigclock_swipe_pane_g1

0x2e32,	// (0x0006252b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9b,	// (0x0006f494) main_fs_bigclock_swipe_pane_g

0x2e3a,	// (0x00062533) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2e3a,	// (0x00062533) main_fs_bigclock_swipe_pane_t1

0x78f4,	// (0x00066fed) call_type_pane_ParamLimits

0x02fb,	// (0x0005f9f4) main_btmg_pane

0x4ab1,	// (0x000641aa) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4ab1,	// (0x000641aa) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd0e,	// (0x0006f407) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd0e,	// (0x0006f407) list_single_cale_mrui_row_pane_g

0x4bd9,	// (0x000642d2) list_recal_vselct_arw_lo_pane

0x2bfa,	// (0x000622f3) list_recal_vselct_arw_up_pane

0x4be1,	// (0x000642da) list_recal_vselct_pane

0xcb63,	// (0x0006c25c) btmg_button_pane

0xcb6f,	// (0x0006c268) main_btmg_pane_g1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp044

0x2e57,	// (0x00062550) btmg_button_pane_t1

0xe8ef,	// (0x0006dfe8) aid_listscroll_gen

0x52da,	// (0x000649d3) main_cntbar_detail_pane

0x275b,	// (0x00061e54) list_cmail_folder_pane

0xf070,	// (0x0006e769) sp_fs_scroll_pane_cp03_ParamLimits

0x4c70,	// (0x00064369) list_single_fs_dyc_pane_cp01_ParamLimits

0x4c70,	// (0x00064369) list_single_fs_dyc_pane_cp01

0x2e65,	// (0x0006255e) aid_size_cmail_indent

0x4c9b,	// (0x00064394) list_single_dyc_row_pane_cp01

0xcb97,	// (0x0006c290) cntbar_detail_list_pane_ParamLimits

0xcb97,	// (0x0006c290) cntbar_detail_list_pane

0xcbd1,	// (0x0006c2ca) main_cntbar_detail_cont_pane_ParamLimits

0xcbd1,	// (0x0006c2ca) main_cntbar_detail_cont_pane

0x77ca,	// (0x00066ec3) scroll_pane_cp032_ParamLimits

0x77ca,	// (0x00066ec3) scroll_pane_cp032

0xcbdd,	// (0x0006c2d6) cntbar_detail_list_event_pane_ParamLimits

0xcbdd,	// (0x0006c2d6) cntbar_detail_list_event_pane

0xcba3,	// (0x0006c29c) cntbar_detail_list_shct_pane

0x6749,	// (0x00065e42) aid_list_gen

0x2e77,	// (0x00062570) aid_scroll

0x2e80,	// (0x00062579) aid_size_touch_scroll_bar

0xcbf1,	// (0x0006c2ea) aid_list_double

0xcbfa,	// (0x0006c2f3) aid_list_single

0xf07c,	// (0x0006e775) aid_list_single_lg

0x4ca4,	// (0x0006439d) aid_list_z_g_a_sm

0xcc03,	// (0x0006c2fc) aid_list_z_g_d

0x4cac,	// (0x000643a5) aid_txt_z_prm

0x4cba,	// (0x000643b3) aid_txt_z_prm_cp01

0x4cc8,	// (0x000643c1) aid_txt_z_sec

0xcc0b,	// (0x0006c304) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcc0b,	// (0x0006c304) main_cntbar_detail_cont_pane_g1

0xcc18,	// (0x0006c311) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcc18,	// (0x0006c311) main_cntbar_detail_cont_pane_g2

0x0001,

0xfda0,	// (0x0006f499) main_cntbar_detail_cont_pane_g_ParamLimits

0xfda0,	// (0x0006f499) main_cntbar_detail_cont_pane_g

0x2ec3,	// (0x000625bc) main_cntbar_detail_cont_pane_t1

0x2ed1,	// (0x000625ca) main_cntbar_detail_cont_pane_t2

0x2edf,	// (0x000625d8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda5,	// (0x0006f49e) main_cntbar_detail_cont_pane_t

0xcc24,	// (0x0006c31d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcc24,	// (0x0006c31d) cell_cntbar_detail_list_shct_pane

0x2eed,	// (0x000625e6) cntbar_detail_list_shct_pane_g1

0x2ef6,	// (0x000625ef) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdac,	// (0x0006f4a5) cntbar_detail_list_shct_pane_g

0xcc38,	// (0x0006c331) cntbar_detail_list_event_pane_g1_ParamLimits

0xcc38,	// (0x0006c331) cntbar_detail_list_event_pane_g1

0xcc44,	// (0x0006c33d) cntbar_detail_list_event_pane_g2_ParamLimits

0xcc44,	// (0x0006c33d) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb1,	// (0x0006f4aa) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb1,	// (0x0006f4aa) cntbar_detail_list_event_pane_g

0xccb0,	// (0x0006c3a9) cntbar_detail_list_event_pane_t1_ParamLimits

0xccb0,	// (0x0006c3a9) cntbar_detail_list_event_pane_t1

0xccc5,	// (0x0006c3be) cntbar_detail_list_event_pane_t2_ParamLimits

0xccc5,	// (0x0006c3be) cntbar_detail_list_event_pane_t2

0x0002,

0xfdbe,	// (0x0006f4b7) cntbar_detail_list_event_pane_t_ParamLimits

0xfdbe,	// (0x0006f4b7) cntbar_detail_list_event_pane_t

0x5f63,	// (0x0006565c) cell_cntbar_detail_list_shct_pane_g1

0x7f26,	// (0x0006761f) navi_pane_mv_g3

0x52da,	// (0x000649d3) main_cntbar_detail_pane_ParamLimits

0x02fb,	// (0x0005f9f4) main_notif_wgt_pane

0xa030,	// (0x00069729) aid_tch_main_mp4_pane_g4

0xa28f,	// (0x00069988) popup_slider_window_cp02

0x4bcf,	// (0x000642c8) list_recal_day_event_pane

0xcb77,	// (0x0006c270) cntbar_detail_btn_pane_ParamLimits

0xcb77,	// (0x0006c270) cntbar_detail_btn_pane

0xcb87,	// (0x0006c280) cntbar_detail_btn_pane_cp01_ParamLimits

0xcb87,	// (0x0006c280) cntbar_detail_btn_pane_cp01

0xcba3,	// (0x0006c29c) cntbar_detail_list_shct_pane_ParamLimits

0xcbaf,	// (0x0006c2a8) cntbar_detail_pane_g1_ParamLimits

0xcbaf,	// (0x0006c2a8) cntbar_detail_pane_g1

0xcbbb,	// (0x0006c2b4) cntbar_detail_pane_t1_ParamLimits

0xcbbb,	// (0x0006c2b4) cntbar_detail_pane_t1

0xcc50,	// (0x0006c349) cntbar_detail_list_event_pane_g3_ParamLimits

0xcc50,	// (0x0006c349) cntbar_detail_list_event_pane_g3

0xcc68,	// (0x0006c361) cntbar_detail_list_event_pane_g4_ParamLimits

0xcc68,	// (0x0006c361) cntbar_detail_list_event_pane_g4

0xcc80,	// (0x0006c379) cntbar_detail_list_event_pane_g5_ParamLimits

0xcc80,	// (0x0006c379) cntbar_detail_list_event_pane_g5

0xcc98,	// (0x0006c391) cntbar_detail_list_event_pane_g6_ParamLimits

0xcc98,	// (0x0006c391) cntbar_detail_list_event_pane_g6

0xccda,	// (0x0006c3d3) cntbar_detail_list_event_pane_t3_ParamLimits

0xccda,	// (0x0006c3d3) cntbar_detail_list_event_pane_t3

0xccec,	// (0x0006c3e5) popup_notif_wgt_window_ParamLimits

0xccec,	// (0x0006c3e5) popup_notif_wgt_window

0xccfc,	// (0x0006c3f5) popup_submenu_window_cp01_ParamLimits

0xccfc,	// (0x0006c3f5) popup_submenu_window_cp01

0x5da5,	// (0x0006549e) bg_popup_window_pane_cp10

0x2eff,	// (0x000625f8) listscroll_notif_wgt_pane

0x2f11,	// (0x0006260a) list_notif_wgt_window

0x2f1a,	// (0x00062613) scroll_pane_cp033

0xcd0a,	// (0x0006c403) list_notif_wgt_row_pane_ParamLimits

0xcd0a,	// (0x0006c403) list_notif_wgt_row_pane

0x2f23,	// (0x0006261c) aid_size_list_notif_wgt_del

0x2f30,	// (0x00062629) list_notif_wgt_row_pane_g1

0x2f3c,	// (0x00062635) list_notif_wgt_row_pane_g2

0x2f4b,	// (0x00062644) list_notif_wgt_row_pane_g3

0x0002,

0xfdc5,	// (0x0006f4be) list_notif_wgt_row_pane_g

0x2f58,	// (0x00062651) list_notif_wgt_row_pane_t1

0x2f6e,	// (0x00062667) list_notif_wgt_row_pane_t2

0x2f80,	// (0x00062679) list_notif_wgt_row_pane_t3

0x0002,

0xfdcc,	// (0x0006f4c5) list_notif_wgt_row_pane_t

0x16ce,	// (0x00060dc7) list_recal_day_event_pane_g1

0x2f92,	// (0x0006268b) list_recal_day_event_pane_t1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp045

0xcd1c,	// (0x0006c415) cntbar_detail_btn_pane_t1

0xe903,	// (0x0006dffc) main_callh_pane_ParamLimits

0xe903,	// (0x0006dffc) main_callh_pane

0x02fb,	// (0x0005f9f4) main_coverflow0_pane

0x02fb,	// (0x0005f9f4) main_wgtman_pane

0xc2b0,	// (0x0006b9a9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc2b0,	// (0x0006b9a9) main_fs_bigclock_unlock_btn_pane

0xc689,	// (0x0006bd82) bg_button_pane_cp16

0xc699,	// (0x0006bd92) cell_tport_appsw_pane_g3

0xcd2a,	// (0x0006c423) cf0_flow_pane_ParamLimits

0xcd2a,	// (0x0006c423) cf0_flow_pane

0x2fa1,	// (0x0006269a) listscroll_cf0_pane

0x2fac,	// (0x000626a5) main_cf0_pane_g1

0xcd39,	// (0x0006c432) main_cf0_pane_t1_ParamLimits

0xcd39,	// (0x0006c432) main_cf0_pane_t1

0xcd4d,	// (0x0006c446) main_cf0_pane_t2_ParamLimits

0xcd4d,	// (0x0006c446) main_cf0_pane_t2

0x0001,

0xfdd8,	// (0x0006f4d1) main_cf0_pane_t_ParamLimits

0xfdd8,	// (0x0006f4d1) main_cf0_pane_t

0x2fbe,	// (0x000626b7) scroll_pane_cp11

0xcd61,	// (0x0006c45a) cf0_flow_pane_g1

0xcd69,	// (0x0006c462) cf0_flow_pane_g2

0x0001,

0xfddd,	// (0x0006f4d6) cf0_flow_pane_g

0xcd71,	// (0x0006c46a) cf0_flow_pane_t1

0x02fb,	// (0x0005f9f4) main_call6_pane

0x02fb,	// (0x0005f9f4) main_calllock_pane

0xcd7f,	// (0x0006c478) call6_btn_grp_pane_ParamLimits

0xcd7f,	// (0x0006c478) call6_btn_grp_pane

0xcd8e,	// (0x0006c487) call6_pane_g1_ParamLimits

0xcd8e,	// (0x0006c487) call6_pane_g1

0xcd9e,	// (0x0006c497) popup_call6_1st_window_ParamLimits

0xcd9e,	// (0x0006c497) popup_call6_1st_window

0xcdac,	// (0x0006c4a5) popup_call6_2nd_window_ParamLimits

0xcdac,	// (0x0006c4a5) popup_call6_2nd_window

0xcdba,	// (0x0006c4b3) cell_call6_btn_pane_ParamLimits

0xcdba,	// (0x0006c4b3) cell_call6_btn_pane

0x5da5,	// (0x0006549e) bg_popup_call2_in_pane_cp03

0x2fc9,	// (0x000626c2) popup_call6_1st_window_g1

0x2fd1,	// (0x000626ca) popup_call6_1st_window_g2

0x2fd9,	// (0x000626d2) popup_call6_1st_window_g3

0x0002,

0xfde2,	// (0x0006f4db) popup_call6_1st_window_g

0x2fe1,	// (0x000626da) popup_call6_1st_window_t1

0x2ff0,	// (0x000626e9) popup_call6_1st_window_t2

0x2ffe,	// (0x000626f7) popup_call6_1st_window_t3

0x0002,

0xfde9,	// (0x0006f4e2) popup_call6_1st_window_t

0x5da5,	// (0x0006549e) bg_popup_call2_in_pane_cp04

0x300c,	// (0x00062705) popup_call6_2nd_window_g1

0x3014,	// (0x0006270d) popup_call6_2nd_window_g2

0x301c,	// (0x00062715) popup_call6_2nd_window_g3

0x0002,

0xfdf0,	// (0x0006f4e9) popup_call6_2nd_window_g

0x3024,	// (0x0006271d) popup_call6_2nd_window_t1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp15

0x3066,	// (0x0006275f) cell_call6_btn_pane_g1

0xcdc9,	// (0x0006c4c2) cell_call6_btn_pane_t1

0xcdd8,	// (0x0006c4d1) listscroll_wgtman_pane_ParamLimits

0xcdd8,	// (0x0006c4d1) listscroll_wgtman_pane

0xcdf4,	// (0x0006c4ed) wgtman_btn_pane_ParamLimits

0xcdf4,	// (0x0006c4ed) wgtman_btn_pane

0x7b74,	// (0x0006726d) aid_scroll_copy1

0x3033,	// (0x0006272c) list_wgtman_pane

0xce29,	// (0x0006c522) wgtman_btn_pane_g1_ParamLimits

0xce29,	// (0x0006c522) wgtman_btn_pane_g1

0xce51,	// (0x0006c54a) wgtman_btn_pane_t1_ParamLimits

0xce51,	// (0x0006c54a) wgtman_btn_pane_t1

0x303d,	// (0x00062736) wgtman_btn_pane_t2_ParamLimits

0x303d,	// (0x00062736) wgtman_btn_pane_t2

0x0001,

0xfdf7,	// (0x0006f4f0) wgtman_btn_pane_t_ParamLimits

0xfdf7,	// (0x0006f4f0) wgtman_btn_pane_t

0xce88,	// (0x0006c581) listrow_wgtman_pane_ParamLimits

0xce88,	// (0x0006c581) listrow_wgtman_pane

0xcea4,	// (0x0006c59d) listrow_wgtman_pane_g1

0xceb1,	// (0x0006c5aa) listrow_wgtman_pane_g2

0x0001,

0xfdfc,	// (0x0006f4f5) listrow_wgtman_pane_g

0x4cd6,	// (0x000643cf) listrow_wgtman_pane_t1

0x4cee,	// (0x000643e7) listrow_wgtman_pane_t2

0x0001,

0xfe01,	// (0x0006f4fa) listrow_wgtman_pane_t

0x4d14,	// (0x0006440d) wait_bar_pane_cp09

0x3054,	// (0x0006274d) main_calllock_btn_pane

0x305e,	// (0x00062757) main_calllock_pane_g1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp17

0x3066,	// (0x0006275f) main_calllock_btn_pane_g1

0x306f,	// (0x00062768) main_calllock_btn_pane_t1

0x02fb,	// (0x0005f9f4) main_dialer3_pane

0x02fb,	// (0x0005f9f4) main_fmrd2_pane

0x5f63,	// (0x0006565c) main_fs_bigclock_unlock_btn_pane_g1

0xced7,	// (0x0006c5d0) main_fs_bigclock_unlock_btn_pane_t1

0xcee5,	// (0x0006c5de) area_fmrd2_info_pane_ParamLimits

0xcee5,	// (0x0006c5de) area_fmrd2_info_pane

0xcef3,	// (0x0006c5ec) area_fmrd2_visual_pane_ParamLimits

0xcef3,	// (0x0006c5ec) area_fmrd2_visual_pane

0xcf01,	// (0x0006c5fa) fmrd2_indi_pane_ParamLimits

0xcf01,	// (0x0006c5fa) fmrd2_indi_pane

0xcf0e,	// (0x0006c607) area_fmrd2_visual_pane_g1

0xcf16,	// (0x0006c60f) area_fmrd2_visual_pane_t1

0xcf26,	// (0x0006c61f) area_fmrd2_visual_pane_t2

0xcf36,	// (0x0006c62f) area_fmrd2_visual_pane_t3

0x0002,

0xfe0b,	// (0x0006f504) area_fmrd2_visual_pane_t

0xcf46,	// (0x0006c63f) area_fmrd2_info_pane_g1

0xcf4e,	// (0x0006c647) area_fmrd2_info_pane_t1

0xcf5e,	// (0x0006c657) area_fmrd2_info_pane_t2

0xcf6e,	// (0x0006c667) area_fmrd2_info_pane_t3

0xcf7e,	// (0x0006c677) area_fmrd2_info_pane_t4

0x0003,

0xfe12,	// (0x0006f50b) area_fmrd2_info_pane_t

0xcf8c,	// (0x0006c685) fmrd2_indi_pane_t1

0xcf9c,	// (0x0006c695) fmrd2_indi_pane_t2

0xcfac,	// (0x0006c6a5) fmrd2_indi_pane_t3

0x0002,

0xfe1b,	// (0x0006f514) fmrd2_indi_pane_t

0x22c8,	// (0x000619c1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x22c8,	// (0x000619c1) list_single_fs_bigclock_indicator_pane_g5

0x2379,	// (0x00061a72) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2379,	// (0x00061a72) list_single_fs_bigclock_indicator_pane_t5

0xc832,	// (0x0006bf2b) aid_cell_bcale_month_pane_ParamLimits

0xc832,	// (0x0006bf2b) aid_cell_bcale_month_pane

0xc850,	// (0x0006bf49) bcale_month_pane_ParamLimits

0xc850,	// (0x0006bf49) bcale_month_pane

0xc86e,	// (0x0006bf67) bcale_preview_pane_ParamLimits

0xc86e,	// (0x0006bf67) bcale_preview_pane

0x2def,	// (0x000624e8) list_single_fs_bigclock_pane_t1_ParamLimits

0x2e0e,	// (0x00062507) list_single_fs_bigclock_pane_t2_ParamLimits

0x2e0e,	// (0x00062507) list_single_fs_bigclock_pane_t2

0x0001,

0xfd96,	// (0x0006f48f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd96,	// (0x0006f48f) list_single_fs_bigclock_pane_t

0xcecf,	// (0x0006c5c8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe06,	// (0x0006f4ff) main_fs_bigclock_unlock_btn_pane_g

0xcfba,	// (0x0006c6b3) aid_dia3_key_size_ParamLimits

0xcfba,	// (0x0006c6b3) aid_dia3_key_size

0xcfc6,	// (0x0006c6bf) aid_dia3_listrow_size_ParamLimits

0xcfc6,	// (0x0006c6bf) aid_dia3_listrow_size

0xcfd6,	// (0x0006c6cf) dia3_keypad_fun_pane_ParamLimits

0xcfd6,	// (0x0006c6cf) dia3_keypad_fun_pane

0xcfe8,	// (0x0006c6e1) dia3_keypad_num_pane_ParamLimits

0xcfe8,	// (0x0006c6e1) dia3_keypad_num_pane

0xcffa,	// (0x0006c6f3) dia3_listscroll_pane_ParamLimits

0xcffa,	// (0x0006c6f3) dia3_listscroll_pane

0xd008,	// (0x0006c701) dia3_numentry_pane_ParamLimits

0xd008,	// (0x0006c701) dia3_numentry_pane

0x307e,	// (0x00062777) dia3_list_pane

0x3089,	// (0x00062782) scroll_pane_cp12

0x02fb,	// (0x0005f9f4) bg_dia3_numentry_pane

0xd016,	// (0x0006c70f) dia3_numentry_pane_t1

0xd025,	// (0x0006c71e) cell_dia3_key_num_pane

0xd02d,	// (0x0006c726) cell_dia3_key0_fun_pane_ParamLimits

0xd02d,	// (0x0006c726) cell_dia3_key0_fun_pane

0xd03a,	// (0x0006c733) cell_dia3_key1_fun_pane_ParamLimits

0xd03a,	// (0x0006c733) cell_dia3_key1_fun_pane

0xd047,	// (0x0006c740) dia3_listrow_pane

0x201b,	// (0x00061714) bg_dia3_numentry_pane_g1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp21

0x3094,	// (0x0006278d) cell_dia3_key_num_pane_t1

0x30a2,	// (0x0006279b) cell_dia3_key_num_pane_t2

0x30b1,	// (0x000627aa) cell_dia3_key_num_pane_t3

0x30c0,	// (0x000627b9) cell_dia3_key_num_pane_t4

0x0003,

0xfe22,	// (0x0006f51b) cell_dia3_key_num_pane_t

0x02fb,	// (0x0005f9f4) bg_button_pane_cp19

0xd054,	// (0x0006c74d) cell_dia3_key0_fun_pane_g1

0x02fb,	// (0x0005f9f4) bg_button_pane_cp20

0xd05c,	// (0x0006c755) cell_dia3_key1_fun_pane_g1

0xd064,	// (0x0006c75d) area_left_week_number_pane

0xd077,	// (0x0006c770) area_top_day_name_pane

0xd085,	// (0x0006c77e) frame_month_view_pane

0x30cf,	// (0x000627c8) grid_month_view_pane

0xd09a,	// (0x0006c793) cell_top_day_name_pane_ParamLimits

0xd09a,	// (0x0006c793) cell_top_day_name_pane

0xd0b4,	// (0x0006c7ad) cell_area_left_week_number_pane_ParamLimits

0xd0b4,	// (0x0006c7ad) cell_area_left_week_number_pane

0xd0d7,	// (0x0006c7d0) cell_month_view_pane_ParamLimits

0xd0d7,	// (0x0006c7d0) cell_month_view_pane

0x30dd,	// (0x000627d6) frm_month_g1

0xd103,	// (0x0006c7fc) frm_month_g2

0xd114,	// (0x0006c80d) frm_month_g3

0xd125,	// (0x0006c81e) frm_month_g4

0xd136,	// (0x0006c82f) frm_month_g5

0xd149,	// (0x0006c842) frm_month_g6

0xd15c,	// (0x0006c855) frm_month_g7

0x30ea,	// (0x000627e3) frm_month_g8

0xd16f,	// (0x0006c868) frm_month_g9

0xd17c,	// (0x0006c875) frm_month_g10

0xd189,	// (0x0006c882) frm_month_g11

0xd196,	// (0x0006c88f) frm_month_g12

0xd1a3,	// (0x0006c89c) frm_month_g13

0xd1b0,	// (0x0006c8a9) frm_month_g14

0xd1bf,	// (0x0006c8b8) frm_month_g15

0xd1ce,	// (0x0006c8c7) frm_month_g16

0x000f,

0xfe2b,	// (0x0006f524) frm_month_g

0xd1dd,	// (0x0006c8d6) cell_top_day_name_pane_t1

0xd1f0,	// (0x0006c8e9) cell_area_left_week_number_pane_g1

0xd1ff,	// (0x0006c8f8) cell_area_left_week_number_pane_t1

0x5333,	// (0x00064a2c) cell_month_view_pane_g1

0xd215,	// (0x0006c90e) cell_month_view_pane_t1

0x02fb,	// (0x0005f9f4) main_fps_pane

0x258d,	// (0x00061c86) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x258d,	// (0x00061c86) cmail_ddmenu_btn02_pane_cp1

0x25a9,	// (0x00061ca2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x25a9,	// (0x00061ca2) cmail_ddmenu_btn02_pane_cp2

0xca5f,	// (0x0006c158) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xca5f,	// (0x0006c158) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x0006f442) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x0006f442) cmail_ddmenu_btn02_pane_g

0xca7d,	// (0x0006c176) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xca7d,	// (0x0006c176) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x0006f447) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x0006f447) cmail_ddmenu_btn02_pane_t

0xd22b,	// (0x0006c924) fps_text_pane_ParamLimits

0xd22b,	// (0x0006c924) fps_text_pane

0xd238,	// (0x0006c931) main_fps_pane_g1_ParamLimits

0xd238,	// (0x0006c931) main_fps_pane_g1

0xd246,	// (0x0006c93f) wait_bar_pane_cp010_ParamLimits

0xd246,	// (0x0006c93f) wait_bar_pane_cp010

0xd252,	// (0x0006c94b) fps_text_pane_t1_ParamLimits

0xd252,	// (0x0006c94b) fps_text_pane_t1

0xa738,	// (0x00069e31) cam4_image_uncrop_pane_g1

0xa741,	// (0x00069e3a) cam4_image_uncrop_pane_g2

0xa74a,	// (0x00069e43) cam4_image_uncrop_pane_g3

0xa753,	// (0x00069e4c) cam4_image_uncrop_pane_g4

0x0003,

0xf88d,	// (0x0006ef86) cam4_image_uncrop_pane_g

0xd047,	// (0x0006c740) dia3_listrow_pane_ParamLimits

0x02fb,	// (0x0005f9f4) main_phob2_pane

0xc66b,	// (0x0006bd64) cell_tport_appsw_pane_cp02_ParamLimits

0xc66b,	// (0x0006bd64) cell_tport_appsw_pane_cp02

0xc67a,	// (0x0006bd73) cell_tport_appsw_pane_cp03_ParamLimits

0xc67a,	// (0x0006bd73) cell_tport_appsw_pane_cp03

0x02fb,	// (0x0005f9f4) phob2_contact_card_pane

0x02fb,	// (0x0005f9f4) phob2_listscroll_pane

0xd26b,	// (0x0006c964) phob2_list_pane

0xd273,	// (0x0006c96c) scroll_pane_cp034

0xd27b,	// (0x0006c974) phob2_cc_data_pane_ParamLimits

0xd27b,	// (0x0006c974) phob2_cc_data_pane

0xd295,	// (0x0006c98e) phob2_cc_listscroll_pane_ParamLimits

0xd295,	// (0x0006c98e) phob2_cc_listscroll_pane

0xce88,	// (0x0006c581) list_double_large_graphic_phob2_pane_ParamLimits

0xce88,	// (0x0006c581) list_double_large_graphic_phob2_pane

0xd2af,	// (0x0006c9a8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd2af,	// (0x0006c9a8) list_double_large_graphic_phob2_pane_g1

0x4d26,	// (0x0006441f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4d26,	// (0x0006441f) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe4c,	// (0x0006f545) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4c,	// (0x0006f545) list_double_large_graphic_phob2_pane_g

0x4d3e,	// (0x00064437) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x4d3e,	// (0x00064437) list_double_large_graphic_phob2_pane_t1

0x4d53,	// (0x0006444c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4d53,	// (0x0006444c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe55,	// (0x0006f54e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe55,	// (0x0006f54e) list_double_large_graphic_phob2_pane_t

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp024

0xd2ca,	// (0x0006c9c3) phob2_cc_button_pane

0xd2d2,	// (0x0006c9cb) phob2_cc_data_pane_g1_ParamLimits

0xd2d2,	// (0x0006c9cb) phob2_cc_data_pane_g1

0xd2e1,	// (0x0006c9da) phob2_cc_data_pane_g2_ParamLimits

0xd2e1,	// (0x0006c9da) phob2_cc_data_pane_g2

0x0001,

0xfe5a,	// (0x0006f553) phob2_cc_data_pane_g_ParamLimits

0xfe5a,	// (0x0006f553) phob2_cc_data_pane_g

0xd2f0,	// (0x0006c9e9) phob2_cc_data_pane_t1_ParamLimits

0xd2f0,	// (0x0006c9e9) phob2_cc_data_pane_t1

0xd305,	// (0x0006c9fe) phob2_cc_data_pane_t2_ParamLimits

0xd305,	// (0x0006c9fe) phob2_cc_data_pane_t2

0xd31a,	// (0x0006ca13) phob2_cc_data_pane_t3_ParamLimits

0xd31a,	// (0x0006ca13) phob2_cc_data_pane_t3

0x0002,

0xfe5f,	// (0x0006f558) phob2_cc_data_pane_t_ParamLimits

0xfe5f,	// (0x0006f558) phob2_cc_data_pane_t

0xd32f,	// (0x0006ca28) phob2_cc_list_pane_ParamLimits

0xd32f,	// (0x0006ca28) phob2_cc_list_pane

0x1765,	// (0x00060e5e) scroll_pane_cp035_ParamLimits

0x1765,	// (0x00060e5e) scroll_pane_cp035

0x52da,	// (0x000649d3) bg_button_pane_cp033

0xd33b,	// (0x0006ca34) phob2_cc_button_pane_g1

0xd347,	// (0x0006ca40) phob2_cc_button_pane_t1

0xd35c,	// (0x0006ca55) phob2_cc_button_pane_t2

0x0001,

0xfe66,	// (0x0006f55f) phob2_cc_button_pane_t

0xd36e,	// (0x0006ca67) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd36e,	// (0x0006ca67) list_double_large_graphic_phob2_cc_pane

0xd3e2,	// (0x0006cadb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd3e2,	// (0x0006cadb) list_double_large_graphic_phob2_cc_pane_g1

0x4d68,	// (0x00064461) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4d68,	// (0x00064461) list_double_large_graphic_phob2_cc_pane_g2

0x4d77,	// (0x00064470) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4d77,	// (0x00064470) list_double_large_graphic_phob2_cc_pane_g3

0x4d86,	// (0x0006447f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4d86,	// (0x0006447f) list_double_large_graphic_phob2_cc_pane_g4

0x4d97,	// (0x00064490) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4d97,	// (0x00064490) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe6b,	// (0x0006f564) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe6b,	// (0x0006f564) list_double_large_graphic_phob2_cc_pane_g

0x4da6,	// (0x0006449f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4da6,	// (0x0006449f) list_double_large_graphic_phob2_cc_pane_t1

0x4dcf,	// (0x000644c8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x4dcf,	// (0x000644c8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe76,	// (0x0006f56f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe76,	// (0x0006f56f) list_double_large_graphic_phob2_cc_pane_t

0xd3f3,	// (0x0006caec) list_highlight_pane_cp025_ParamLimits

0xd3f3,	// (0x0006caec) list_highlight_pane_cp025

0x52da,	// (0x000649d3) bg_button_pane_cp033_ParamLimits

0xd33b,	// (0x0006ca34) phob2_cc_button_pane_g1_ParamLimits

0xd347,	// (0x0006ca40) phob2_cc_button_pane_t1_ParamLimits

0xd35c,	// (0x0006ca55) phob2_cc_button_pane_t2_ParamLimits

0xfe66,	// (0x0006f55f) phob2_cc_button_pane_t_ParamLimits

0x50ea,	// (0x000647e3) popup_wgtman_window

0x1588,	// (0x00060c81) scroll_pane_cp038

0xce11,	// (0x0006c50a) wgtman_btn_pane_cp_01_ParamLimits

0xce11,	// (0x0006c50a) wgtman_btn_pane_cp_01

0xd401,	// (0x0006cafa) wgtman_content_pane

0xd40a,	// (0x0006cb03) wgtman_heading_pane

0x02fb,	// (0x0005f9f4) bg_heading_pane_cp02

0xd413,	// (0x0006cb0c) wgtman_heading_pane_g1

0xd41b,	// (0x0006cb14) wgtman_heading_pane_t1

0xd429,	// (0x0006cb22) scroll_pane_cp036

0xd431,	// (0x0006cb2a) wgtman_list_pane

0xd439,	// (0x0006cb32) wgtman_list_pane_t1_ParamLimits

0xd439,	// (0x0006cb32) wgtman_list_pane_t1

0xa697,	// (0x00069d90) cam4_grid_pane

0x43e9,	// (0x00063ae2) bg_button_pane_cp015_ParamLimits

0xb336,	// (0x0006aa2f) bg_button_pane_cp016_ParamLimits

0xb349,	// (0x0006aa42) bg_button_pane_cp017_ParamLimits

0x442f,	// (0x00063b28) popup_vitu2_query_window_g3_ParamLimits

0x442f,	// (0x00063b28) popup_vitu2_query_window_g3

0x44aa,	// (0x00063ba3) popup_vitu2_query_window_t6_ParamLimits

0x44aa,	// (0x00063ba3) popup_vitu2_query_window_t6

0x44d5,	// (0x00063bce) popup_vitu2_query_window_t7_ParamLimits

0x44d5,	// (0x00063bce) popup_vitu2_query_window_t7

0xd454,	// (0x0006cb4d) cam4_grid_pane_g1

0xd45d,	// (0x0006cb56) cam4_grid_pane_g2

0xd466,	// (0x0006cb5f) cam4_grid_pane_g3

0xd46f,	// (0x0006cb68) cam4_grid_pane_g4

0x0003,

0xfe7b,	// (0x0006f574) cam4_grid_pane_g

0x6077,	// (0x00065770) aid_placing_vt_slider_lsc_ParamLimits

0x6407,	// (0x00065b00) vidtel_button_pane_ParamLimits

0x6407,	// (0x00065b00) vidtel_button_pane

0x02fb,	// (0x0005f9f4) bg_button_pane_cp034

0xd47a,	// (0x0006cb73) vidtel_button_pane_g1

0xd482,	// (0x0006cb7b) vidtel_button_pane_t1

0x16ac,	// (0x00060da5) aid_size_vtel_slider_touch

0x1765,	// (0x00060e5e) scroll_pane_cp039

0xbfed,	// (0x0006b6e6) ncim_query_button_pane_cp01_ParamLimits

0xc00c,	// (0x0006b705) ncimui_query_pane_g1_ParamLimits

0x52da,	// (0x000649d3) input_focus_pane_cp012_ParamLimits

0x2061,	// (0x0006175a) ncim_query_entry_pane_t1_ParamLimits

0x1765,	// (0x00060e5e) scroll_pane_cp039_ParamLimits

0x7e11,	// (0x0006750a) navi_pane_bcale_mc_g1

0x7e19,	// (0x00067512) navi_pane_bcale_mc_t1

0x25dd,	// (0x00061cd6) main_sp_fs_email_pane_g1

0x25e9,	// (0x00061ce2) main_sp_fs_email_pane_g2

0x0001,

0xfc7e,	// (0x0006f377) main_sp_fs_email_pane_g

0x2a7a,	// (0x00062173) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2a7a,	// (0x00062173) list_single_cale_mrui_row_pane_g3

0x4c2e,	// (0x00064327) list_single_recal_day_pane_g5_event_pane

0x4c44,	// (0x0006433d) list_single_recal_day_pane_g7

0xd498,	// (0x0006cb91) list_recal_day_event_pane_cp01

0xd4a1,	// (0x0006cb9a) list_recal_vselct_arw_lo_pane_cp01

0xd4a9,	// (0x0006cba2) list_recal_vselct_arw_up_pane_cp01

0xd4b1,	// (0x0006cbaa) list_recal_vselct_pane_cp01

0x16ce,	// (0x00060dc7) list_recal_day_event_pane_cp01_g1

0x4df8,	// (0x000644f1) list_recal_day_event_pane_cp01_t1

0x4c4c,	// (0x00064345) list_single_recal_day_pane_t1_ParamLimits

0x4c5e,	// (0x00064357) list_single_recal_day_pane_t2_ParamLimits

0xfd5e,	// (0x0006f457) list_single_recal_day_pane_t_ParamLimits

0x52b8,	// (0x000649b1) bg_notes_pane_ParamLimits

0x54c5,	// (0x00064bbe) list_notes_pane_ParamLimits

0x54d3,	// (0x00064bcc) scroll_pane_cp06_ParamLimits

0x5510,	// (0x00064c09) main_notes_pane_ParamLimits

0x52da,	// (0x000649d3) main_welc_pane

0xd4d2,	// (0x0006cbcb) main_welc_body_pane_ParamLimits

0xd4d2,	// (0x0006cbcb) main_welc_body_pane

0xd4eb,	// (0x0006cbe4) main_welc_opti_pane_ParamLimits

0xd4eb,	// (0x0006cbe4) main_welc_opti_pane

0xd546,	// (0x0006cc3f) main_welc_pane_t1_ParamLimits

0xd546,	// (0x0006cc3f) main_welc_pane_t1

0xd65c,	// (0x0006cd55) main_welc_body_row_pane_ParamLimits

0xd65c,	// (0x0006cd55) main_welc_body_row_pane

0x08ed,	// (0x0005ffe6) main_welc_opti_row_pane_ParamLimits

0x08ed,	// (0x0005ffe6) main_welc_opti_row_pane

0xd685,	// (0x0006cd7e) main_welc_opti_row_pane_g1

0xd68d,	// (0x0006cd86) main_welc_opti_row_pane_t1

0xd69c,	// (0x0006cd95) main_welc_body_row_pane_t1

0x2f09,	// (0x00062602) popup_notif_wgt_heading_pane

0x2f23,	// (0x0006261c) aid_size_list_notif_wgt_del_ParamLimits

0x2f30,	// (0x00062629) list_notif_wgt_row_pane_g1_ParamLimits

0x2f3c,	// (0x00062635) list_notif_wgt_row_pane_g2_ParamLimits

0x2f4b,	// (0x00062644) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc5,	// (0x0006f4be) list_notif_wgt_row_pane_g_ParamLimits

0x2f58,	// (0x00062651) list_notif_wgt_row_pane_t1_ParamLimits

0x2f6e,	// (0x00062667) list_notif_wgt_row_pane_t2_ParamLimits

0x2f80,	// (0x00062679) list_notif_wgt_row_pane_t3_ParamLimits

0xfdcc,	// (0x0006f4c5) list_notif_wgt_row_pane_t_ParamLimits

0xcea4,	// (0x0006c59d) listrow_wgtman_pane_g1_ParamLimits

0xceb1,	// (0x0006c5aa) listrow_wgtman_pane_g2_ParamLimits

0xfdfc,	// (0x0006f4f5) listrow_wgtman_pane_g_ParamLimits

0x4cd6,	// (0x000643cf) listrow_wgtman_pane_t1_ParamLimits

0x4cee,	// (0x000643e7) listrow_wgtman_pane_t2_ParamLimits

0xfe01,	// (0x0006f4fa) listrow_wgtman_pane_t_ParamLimits

0x4d14,	// (0x0006440d) wait_bar_pane_cp09_ParamLimits

0x02fb,	// (0x0005f9f4) bg_popup_heading_pane_cp02

0xd6ab,	// (0x0006cda4) popup_notif_wgt_heading_pane_g1

0xd6b3,	// (0x0006cdac) popup_notif_wgt_heading_pane_t1

0x02fb,	// (0x0005f9f4) main_vids_pane

0x02fb,	// (0x0005f9f4) vids_listscroll_pane

0xd6c1,	// (0x0006cdba) scroll_pane_cp040

0x02fb,	// (0x0005f9f4) vids_list_pane

0xd6cc,	// (0x0006cdc5) vids_list_double_pane_ParamLimits

0xd6cc,	// (0x0006cdc5) vids_list_double_pane

0xd6e4,	// (0x0006cddd) vids_list_double_pane_g1

0xd6ed,	// (0x0006cde6) vids_list_double_pane_t1

0xd6fd,	// (0x0006cdf6) vids_list_double_pane_t2

0x0001,

0xfe9a,	// (0x0006f593) vids_list_double_pane_t

0x52da,	// (0x000649d3) main_ncimui_pane_ParamLimits

0xbe44,	// (0x0006b53d) main_ncimui_pane_g1_ParamLimits

0xbe50,	// (0x0006b549) main_ncimui_pane_g2_ParamLimits

0xbe50,	// (0x0006b549) main_ncimui_pane_g2

0x0001,

0xfb7f,	// (0x0006f278) main_ncimui_pane_g_ParamLimits

0xfb7f,	// (0x0006f278) main_ncimui_pane_g

0xd504,	// (0x0006cbfd) main_welc_pane_g1_ParamLimits

0xd504,	// (0x0006cbfd) main_welc_pane_g1

0xd510,	// (0x0006cc09) main_welc_pane_g2_ParamLimits

0xd510,	// (0x0006cc09) main_welc_pane_g2

0x0003,

0xfe84,	// (0x0006f57d) main_welc_pane_g_ParamLimits

0xfe84,	// (0x0006f57d) main_welc_pane_g

0x52b8,	// (0x000649b1) listscroll_mce_pane_ParamLimits

0x7f92,	// (0x0006768b) wait_bar_pane_cp10

0xe8f7,	// (0x0006dff0) main_cale_day_pane_ParamLimits

0xe8f7,	// (0x0006dff0) main_cale_week_pane_ParamLimits

0x52b8,	// (0x000649b1) main_messa_pane_ParamLimits

0x9ae6,	// (0x000691df) main_clock2_btn_pane_ParamLimits

0x9ae6,	// (0x000691df) main_clock2_btn_pane

0x0c40,	// (0x00060339) main_clock2_btn_pane_cp01_ParamLimits

0x0c40,	// (0x00060339) main_clock2_btn_pane_cp01

0x2a06,	// (0x000620ff) list_cale_mrui_pane_ParamLimits

0x2fb6,	// (0x000626af) main_cf0_pane_g2

0x0001,

0xfdd3,	// (0x0006f4cc) main_cf0_pane_g

0xd064,	// (0x0006c75d) area_left_week_number_pane_ParamLimits

0xd077,	// (0x0006c770) area_top_day_name_pane_ParamLimits

0xd085,	// (0x0006c77e) frame_month_view_pane_ParamLimits

0x30cf,	// (0x000627c8) grid_month_view_pane_ParamLimits

0x30dd,	// (0x000627d6) frm_month_g1_ParamLimits

0xd103,	// (0x0006c7fc) frm_month_g2_ParamLimits

0xd114,	// (0x0006c80d) frm_month_g3_ParamLimits

0xd125,	// (0x0006c81e) frm_month_g4_ParamLimits

0xd136,	// (0x0006c82f) frm_month_g5_ParamLimits

0xd149,	// (0x0006c842) frm_month_g6_ParamLimits

0xd15c,	// (0x0006c855) frm_month_g7_ParamLimits

0x30ea,	// (0x000627e3) frm_month_g8_ParamLimits

0xd16f,	// (0x0006c868) frm_month_g9_ParamLimits

0xd17c,	// (0x0006c875) frm_month_g10_ParamLimits

0xd189,	// (0x0006c882) frm_month_g11_ParamLimits

0xd196,	// (0x0006c88f) frm_month_g12_ParamLimits

0xd1a3,	// (0x0006c89c) frm_month_g13_ParamLimits

0xd1b0,	// (0x0006c8a9) frm_month_g14_ParamLimits

0xd1bf,	// (0x0006c8b8) frm_month_g15_ParamLimits

0xd1ce,	// (0x0006c8c7) frm_month_g16_ParamLimits

0xfe2b,	// (0x0006f524) frm_month_g_ParamLimits

0xd1dd,	// (0x0006c8d6) cell_top_day_name_pane_t1_ParamLimits

0xd1f0,	// (0x0006c8e9) cell_area_left_week_number_pane_g1_ParamLimits

0xd1ff,	// (0x0006c8f8) cell_area_left_week_number_pane_t1_ParamLimits

0x5333,	// (0x00064a2c) cell_month_view_pane_g1_ParamLimits

0xd215,	// (0x0006c90e) cell_month_view_pane_t1_ParamLimits

0x52b0,	// (0x000649a9) main_clock2_btn_pane_g1

0xd70b,	// (0x0006ce04) main_clock2_btn_pane_t1

0x52da,	// (0x000649d3) listscroll_cmail_pane_ParamLimits

0x25dd,	// (0x00061cd6) main_sp_fs_email_pane_g1_ParamLimits

0x25e9,	// (0x00061ce2) main_sp_fs_email_pane_g2_ParamLimits

0xfc7e,	// (0x0006f377) main_sp_fs_email_pane_g_ParamLimits

0x2bc9,	// (0x000622c2) list_recal_day_pane_ParamLimits

0x2bda,	// (0x000622d3) mian_recal_day_pane_t1

0x4831,	// (0x00063f2a) list_single_dyc_row_text_pane_t4_ParamLimits

0x4831,	// (0x00063f2a) list_single_dyc_row_text_pane_t4

0x4868,	// (0x00063f61) list_single_dyc_row_text_pane_t5_ParamLimits

0x4868,	// (0x00063f61) list_single_dyc_row_text_pane_t5

0x48de,	// (0x00063fd7) list_single_dyc_row_text_pane_t6_ParamLimits

0x48de,	// (0x00063fd7) list_single_dyc_row_text_pane_t6

0x759c,	// (0x00066c95) aid_mgn_list_cale_time_pane

0x52da,	// (0x000649d3) main_gallery2_pane_ParamLimits

0x0c56,	// (0x0006034f) main_clock2_pane_cp01_t1

0x0c64,	// (0x0006035d) main_clock2_pane_cp01_t3

0x0001,

0xf764,	// (0x0006ee5d) main_clock2_pane_cp01_t

0x5a6d,	// (0x00065166) cale_week_scroll_pane_g16_ParamLimits

0x5a6d,	// (0x00065166) cale_week_scroll_pane_g16

0x5da5,	// (0x0006549e) vorec_slider_pane

0xd482,	// (0x0006cb7b) vidtel_button_pane_t1_ParamLimits

0xcae0,	// (0x0006c1d9) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcae0,	// (0x0006c1d9) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcaed,	// (0x0006c1e6) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcaed,	// (0x0006c1e6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd81,	// (0x0006f47a) main_fs_bigclock_clock_pane_g_ParamLimits

0xcaf9,	// (0x0006c1f2) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcb0c,	// (0x0006c205) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd8a,	// (0x0006f483) main_fs_bigclock_clock_pane_t_ParamLimits

0x948b,	// (0x00068b84) main_mup3_lyrics_pane_ParamLimits

0x948b,	// (0x00068b84) main_mup3_lyrics_pane

0xd73f,	// (0x0006ce38) main_mup3_lyrics_pane_t1_ParamLimits

0xd73f,	// (0x0006ce38) main_mup3_lyrics_pane_t1

0xa01a,	// (0x00069713) aid_main_mp4_pane_t1_area

0xa024,	// (0x0006971d) aid_main_mp4_pane_t2_area

0xa123,	// (0x0006981c) main_mp4_pane_g7_ParamLimits

0xa123,	// (0x0006981c) main_mp4_pane_g7

0xa12f,	// (0x00069828) main_mp4_pane_g8_ParamLimits

0xa12f,	// (0x00069828) main_mp4_pane_g8

0xa541,	// (0x00069c3a) aid_call6_pane_g1_size

0xd3b4,	// (0x0006caad) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd3b4,	// (0x0006caad) list_double_large_graphic_phob2_other_pane

0x7554,	// (0x00066c4d) list_double_large_graphic_phob2_other_pane_g1

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp026

0x52da,	// (0x000649d3) main_welc_pane_ParamLimits

0xc572,	// (0x0006bc6b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc572,	// (0x0006bc6b) main_sp_fs_ctrlbar_pane_g3

0xc58a,	// (0x0006bc83) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc58a,	// (0x0006bc83) main_sp_fs_ctrlbar_pane_g4

0xc5bc,	// (0x0006bcb5) toolbar2_fixed_button_pane_cp01

0xc5c7,	// (0x0006bcc0) toolbar2_fixed_button_pane_cp02

0xc5d2,	// (0x0006bccb) toolbar2_fixed_button_pane_cp03

0xd4bb,	// (0x0006cbb4) list_welc_entry_pane_ParamLimits

0xd4bb,	// (0x0006cbb4) list_welc_entry_pane

0xd51e,	// (0x0006cc17) main_welc_pane_g3_ParamLimits

0xd51e,	// (0x0006cc17) main_welc_pane_g3

0xd560,	// (0x0006cc59) main_welc_pane_t2_ParamLimits

0xd560,	// (0x0006cc59) main_welc_pane_t2

0xd574,	// (0x0006cc6d) main_welc_pane_t3_ParamLimits

0xd574,	// (0x0006cc6d) main_welc_pane_t3

0x0005,

0xfe8d,	// (0x0006f586) main_welc_pane_t_ParamLimits

0xfe8d,	// (0x0006f586) main_welc_pane_t

0xd5fe,	// (0x0006ccf7) welc_button_pane_ParamLimits

0xd5fe,	// (0x0006ccf7) welc_button_pane

0xd64e,	// (0x0006cd47) welc_service_logo_pane_ParamLimits

0xd64e,	// (0x0006cd47) welc_service_logo_pane

0xd775,	// (0x0006ce6e) list_single_welc_entry_pane_ParamLimits

0xd775,	// (0x0006ce6e) list_single_welc_entry_pane

0xd786,	// (0x0006ce7f) list_single_welc_entry_pane_g1

0xd78e,	// (0x0006ce87) list_single_welc_entry_pane_t1

0xd79c,	// (0x0006ce95) list_single_welc_entry_pane_t2

0x0001,

0xfe9f,	// (0x0006f598) list_single_welc_entry_pane_t

0x02fb,	// (0x0005f9f4) bg_button_pane_cp035

0xd7aa,	// (0x0006cea3) welc_button_pane_t1

0xd7b8,	// (0x0006ceb1) welc_service_logo_pane_g1

0xd7c1,	// (0x0006ceba) welc_service_logo_pane_g2

0x0001,

0xfea4,	// (0x0006f59d) welc_service_logo_pane_g

0x02fb,	// (0x0005f9f4) main_int_radio_pane

0x1eff,	// (0x000615f8) list_single_fs_dyc_pane_g1

0x4d32,	// (0x0006442b) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x4d32,	// (0x0006442b) list_double_large_graphic_phob2_pane_g3

0xd2bc,	// (0x0006c9b5) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd2bc,	// (0x0006c9b5) list_double_large_graphic_phob2_pane_g4

0xd7ca,	// (0x0006cec3) main_int_radio1_pane_ParamLimits

0xd7ca,	// (0x0006cec3) main_int_radio1_pane

0xd7dc,	// (0x0006ced5) find_pane_cp02

0xd7e5,	// (0x0006cede) input_focus_pane_cp12_ParamLimits

0xd7e5,	// (0x0006cede) input_focus_pane_cp12

0xd7f1,	// (0x0006ceea) input_focus_pane_cp13_ParamLimits

0xd7f1,	// (0x0006ceea) input_focus_pane_cp13

0xd809,	// (0x0006cf02) input_focus_pane_cp14_ParamLimits

0xd809,	// (0x0006cf02) input_focus_pane_cp14

0xd821,	// (0x0006cf1a) int_radio1_listscroll_pane

0xd82b,	// (0x0006cf24) main_int_radio1_pane_g1_ParamLimits

0xd82b,	// (0x0006cf24) main_int_radio1_pane_g1

0xd83b,	// (0x0006cf34) main_int_radio1_pane_t1_ParamLimits

0xd83b,	// (0x0006cf34) main_int_radio1_pane_t1

0xd84f,	// (0x0006cf48) main_int_radio1_pane_t2_ParamLimits

0xd84f,	// (0x0006cf48) main_int_radio1_pane_t2

0xd863,	// (0x0006cf5c) main_int_radio1_pane_t3_ParamLimits

0xd863,	// (0x0006cf5c) main_int_radio1_pane_t3

0xd877,	// (0x0006cf70) main_int_radio1_pane_t4_ParamLimits

0xd877,	// (0x0006cf70) main_int_radio1_pane_t4

0xd88e,	// (0x0006cf87) main_int_radio1_pane_t5_ParamLimits

0xd88e,	// (0x0006cf87) main_int_radio1_pane_t5

0xd8a0,	// (0x0006cf99) main_int_radio1_pane_t6_ParamLimits

0xd8a0,	// (0x0006cf99) main_int_radio1_pane_t6

0xd8b2,	// (0x0006cfab) main_int_radio1_pane_t7_ParamLimits

0xd8b2,	// (0x0006cfab) main_int_radio1_pane_t7

0xd8c4,	// (0x0006cfbd) main_int_radio1_pane_t8_ParamLimits

0xd8c4,	// (0x0006cfbd) main_int_radio1_pane_t8

0xd8d8,	// (0x0006cfd1) main_int_radio1_pane_t9_ParamLimits

0xd8d8,	// (0x0006cfd1) main_int_radio1_pane_t9

0xd8ea,	// (0x0006cfe3) main_int_radio1_pane_t10_ParamLimits

0xd8ea,	// (0x0006cfe3) main_int_radio1_pane_t10

0xd91b,	// (0x0006d014) main_int_radio1_pane_t11_ParamLimits

0xd91b,	// (0x0006d014) main_int_radio1_pane_t11

0xd94c,	// (0x0006d045) main_int_radio1_pane_t12_ParamLimits

0xd94c,	// (0x0006d045) main_int_radio1_pane_t12

0x000b,

0xfea9,	// (0x0006f5a2) main_int_radio1_pane_t_ParamLimits

0xfea9,	// (0x0006f5a2) main_int_radio1_pane_t

0xd963,	// (0x0006d05c) int_radio_list_pane

0xd273,	// (0x0006c96c) scroll_pane_cp037

0xd96b,	// (0x0006d064) list_double_large_graphic_int_radio_pane_ParamLimits

0xd96b,	// (0x0006d064) list_double_large_graphic_int_radio_pane

0xd984,	// (0x0006d07d) list_double_large_graphic_int_radio_pane_g1

0x4e06,	// (0x000644ff) list_double_large_graphic_int_radio_pane_t1

0x4e14,	// (0x0006450d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfec2,	// (0x0006f5bb) list_double_large_graphic_int_radio_pane_t

0x02fb,	// (0x0005f9f4) list_highlight_pane_cp027

0xd4ca,	// (0x0006cbc3) main_button_pane_4

0xd52a,	// (0x0006cc23) main_welc_pane_g4_ParamLimits

0xd52a,	// (0x0006cc23) main_welc_pane_g4

0xd586,	// (0x0006cc7f) main_welc_pane_t4_ParamLimits

0xd586,	// (0x0006cc7f) main_welc_pane_t4

0xd598,	// (0x0006cc91) main_welc_pane_t5_ParamLimits

0xd598,	// (0x0006cc91) main_welc_pane_t5

0xd5ca,	// (0x0006ccc3) main_welc_pane_t6_ParamLimits

0xd5ca,	// (0x0006ccc3) main_welc_pane_t6

0xd60c,	// (0x0006cd05) welc_button_pane_2_ParamLimits

0xd60c,	// (0x0006cd05) welc_button_pane_2

0xd624,	// (0x0006cd1d) welc_button_pane_3_ParamLimits

0xd624,	// (0x0006cd1d) welc_button_pane_3

0xd4ca,	// (0x0006cbc3) welc_button_pane_4

0xd63e,	// (0x0006cd37) welc_button_pane_5_ParamLimits

0xd63e,	// (0x0006cd37) welc_button_pane_5

0x8e63,	// (0x0006855c) main_popup_welc_pane

0xd98d,	// (0x0006d086) main_welc_sk_g3

0xd997,	// (0x0006d090) main_welc_sk_g4

0xd9a1,	// (0x0006d09a) main_welc_sk_t3

0xd9b1,	// (0x0006d0aa) main_welc_sk_t4

0xd9c1,	// (0x0006d0ba) popup_welc_pane_t4

0xd9cf,	// (0x0006d0c8) popup_welc_pane_t5

0xd9dd,	// (0x0006d0d6) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
